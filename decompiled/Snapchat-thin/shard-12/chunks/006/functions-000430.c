/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109435688; end: 1094358c3;  */

long * FUN_109435688(long *param_1,long *param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar13 = param_1[1] - *param_1;
  uVar10 = (lVar13 >> 4) * 0x4ec4ec4ec4ec4ec5 + 1;
  if (uVar10 < 0x13b13b13b13b13c) {
    lVar9 = param_1[2] - *param_1 >> 4;
    uVar12 = lVar9 * -0x6276276276276276;
    if (uVar12 < uVar10 || uVar12 - uVar10 == 0) {
      uVar12 = uVar10;
    }
    if (0x9d89d89d89d89c < (ulong)(lVar9 * 0x4ec4ec4ec4ec4ec5)) {
      uVar12 = 0x13b13b13b13b13b;
    }
    plStack_38 = param_1;
    if (uVar12 == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = param_1;
      FUN_109428814(param_1,uVar12,0);
    }
    puVar2 = (undefined1 *)((long)plVar6 + lVar13);
    plStack_40 = plVar6 + uVar12 * 0x1a;
    *puVar2 = 1;
    *(undefined8 *)(puVar2 + 8) = 0;
    lVar13 = *param_2;
    *(long *)(puVar2 + 0x18) = param_2[1];
    *(long *)(puVar2 + 0x10) = lVar13;
    lVar13 = param_2[2];
    *(long *)(puVar2 + 0x28) = param_2[3];
    *(long *)(puVar2 + 0x20) = lVar13;
    lVar9 = param_2[5];
    lVar13 = param_2[4];
    lVar14 = param_2[6];
    lVar16 = param_2[9];
    lVar15 = param_2[8];
    *(long *)(puVar2 + 0x48) = param_2[7];
    *(long *)(puVar2 + 0x40) = lVar14;
    *(long *)(puVar2 + 0x58) = lVar16;
    *(long *)(puVar2 + 0x50) = lVar15;
    *(long *)(puVar2 + 0x38) = lVar9;
    *(long *)(puVar2 + 0x30) = lVar13;
    lVar13 = param_2[10];
    lVar14 = param_2[0xd];
    lVar9 = param_2[0xc];
    *(long *)(puVar2 + 0x68) = param_2[0xb];
    *(long *)(puVar2 + 0x60) = lVar13;
    *(long *)(puVar2 + 0x78) = lVar14;
    *(long *)(puVar2 + 0x70) = lVar9;
    lVar13 = param_2[0xe];
    *(long *)(puVar2 + 0x88) = param_2[0xf];
    *(long *)(puVar2 + 0x80) = lVar13;
    lVar13 = param_2[0x11];
    lVar9 = param_2[0x10];
    *(long *)(puVar2 + 0x98) = param_2[0x11];
    *(long *)(puVar2 + 0x90) = lVar9;
    *(undefined8 *)(puVar2 + 0xb0) = 0;
    *(undefined1 **)(puVar2 + 0xa0) = puVar2 + 0x68;
    *(undefined1 **)(puVar2 + 0xa8) = puVar2 + 0xb0;
    *(undefined8 *)(puVar2 + 0xb8) = 0;
    if (lVar13 != 0) {
      piVar1 = (int *)(lVar13 + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_58 = plVar6;
    plStack_50 = (long *)puVar2;
    plStack_48 = (long *)puVar2;
    if (*(int *)((long)param_2 + 0x54) < 3) {
      puVar8 = (undefined8 *)param_2[0x13];
      puVar11 = *(undefined8 **)(puVar2 + 0xa8);
      *puVar11 = *puVar8;
      puVar11[1] = puVar8[1];
    }
    else {
      *(undefined4 *)(puVar2 + 100) = 0;
      FUN_109a844cc(puVar2 + 0x60,*(undefined4 *)((long)param_2 + 0x54),0,0,0);
      if (0 < *(int *)(puVar2 + 100)) {
        lVar13 = 0;
        lVar9 = param_2[0x12];
        lVar15 = param_2[0x13];
        lVar14 = *(long *)(puVar2 + 0xa0);
        lVar16 = *(long *)(puVar2 + 0xa8);
        do {
          *(undefined4 *)(lVar14 + lVar13 * 4) = *(undefined4 *)(lVar9 + lVar13 * 4);
          *(undefined8 *)(lVar16 + lVar13 * 8) = *(undefined8 *)(lVar15 + lVar13 * 8);
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)(puVar2 + 100));
      }
    }
    *(undefined8 *)(puVar2 + 0xc0) = 0xbff0000000000000;
    plStack_48 = (long *)((long)plStack_48 + 0xd0);
    puVar2 = (undefined1 *)((long)plStack_50 + (*param_1 - param_1[1]));
    FUN_10942cdf0(param_1,*param_1,param_1[1],puVar2);
    plVar6 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = (long)puVar2;
    lVar13 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar13;
    FUN_10942d114(&plStack_58);
    return plVar6;
  }
  FUN_109428800();
  FUN_10942d114(&plStack_58);
  __Unwind_Resume();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar13 = *param_2;
  lVar9 = param_2[1];
  lVar14 = lVar9 - lVar13;
  if (lVar14 != 0) {
    uVar10 = (lVar14 >> 6) * -0x5555555555555555;
    if (0x155555555555555 < uVar10) {
      FUN_109428144();
      goto LAB_1094359c8;
    }
    plVar6 = param_1;
    FUN_109428158(param_1,uVar10,0);
    *param_1 = (long)plVar6;
    param_1[1] = (long)plVar6;
    param_1[2] = (long)plVar6 + lVar14;
    plVar7 = param_1;
    FUN_109427ec8(param_1,lVar13,lVar9,plVar6);
    param_1[1] = (long)plVar7;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_4 = param_4 - param_3;
  if (param_4 != 0) {
    if (param_4 < 0) {
      FUN_109435674();
LAB_1094359c8:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1094359cc);
      (*pcVar5)();
    }
    lVar13 = param_4;
    __Znwm();
    param_1[3] = lVar13;
    param_1[4] = lVar13;
    param_1[5] = lVar13 + param_4;
    _memcpy();
    param_1[4] = lVar13 + param_4;
  }
  return param_1;
}



/* Entry: 1094358c4; end: 109435a1f;  */

undefined8 * FUN_1094358c4(undefined8 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar6 = *param_2;
  lVar1 = param_2[1];
  lVar2 = lVar1 - lVar6;
  if (lVar2 != 0) {
    uVar7 = (lVar2 >> 6) * -0x5555555555555555;
    if (0x155555555555555 < uVar7) {
      FUN_109428144();
      goto LAB_1094359c8;
    }
    puVar4 = param_1;
    FUN_109428158(param_1,uVar7,0);
    *param_1 = puVar4;
    param_1[1] = puVar4;
    param_1[2] = (long)puVar4 + lVar2;
    puVar5 = param_1;
    FUN_109427ec8(param_1,lVar6,lVar1,puVar4);
    param_1[1] = puVar5;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_4 = param_4 - param_3;
  if (param_4 != 0) {
    if (param_4 < 0) {
      FUN_109435674();
LAB_1094359c8:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1094359cc);
      (*pcVar3)();
    }
    lVar6 = param_4;
    __Znwm();
    param_1[3] = lVar6;
    param_1[4] = lVar6;
    param_1[5] = lVar6 + param_4;
    _memcpy();
    param_1[4] = lVar6 + param_4;
  }
  return param_1;
}



/* Entry: 109435a20; end: 109435ecf;  */

long * FUN_109435a20(long *param_1,ulong param_2,long *param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x24;
  
  uVar6 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar3 = (param_2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar3 = uVar3 ^ uVar3 >> 0x2f;
  uVar12 = uVar3 * -0x622015f714c7d297;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar4 = uVar6 - 1;
    if ((uVar6 & uVar4) == 0) {
      unaff_x24 = uVar4 & uVar12;
      plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    else {
      unaff_x24 = uVar12;
      if (uVar6 <= uVar12) {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = uVar12 / uVar6;
        }
        unaff_x24 = uVar12 - uVar9 * uVar6;
      }
      plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if ((uVar6 & uVar4) == 0) {
        do {
          if (plVar7[1] == uVar12) {
            if (plVar7[2] == param_2) {
              return plVar7;
            }
          }
          else if ((plVar7[1] & uVar4) != unaff_x24) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar7[1];
          if (uVar4 == uVar12) {
            if (plVar7[2] == param_2) {
              return plVar7;
            }
          }
          else {
            if (uVar6 <= uVar4) {
              uVar9 = 0;
              if (uVar6 != 0) {
                uVar9 = uVar4 / uVar6;
              }
              uVar4 = uVar4 - uVar9 * uVar6;
            }
            if (uVar4 != unaff_x24) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  plVar7 = (long *)0x20;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = uVar12;
  plVar7[2] = *param_3;
  *(undefined4 *)(plVar7 + 3) = 0;
  if ((uVar6 == 0) || (*(float *)(param_1 + 4) * (float)uVar6 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar6) {
      uVar4 = (ulong)((uVar6 & uVar6 - 1) != 0);
    }
    uVar4 = uVar4 | uVar6 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar9) {
      uVar4 = uVar9;
    }
    if (uVar4 - 1 == 0) {
      uVar4 = 2;
    }
    else if ((uVar4 & uVar4 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar6 = param_1[1];
    }
    if (uVar6 < uVar4) {
LAB_109435bf4:
      if (uVar4 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x109435ebc);
        (*pcVar1)();
      }
      lVar8 = uVar4 << 3;
      __Znwm();
      lVar2 = *param_1;
      *param_1 = lVar8;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      uVar6 = 0;
      param_1[1] = uVar4;
      do {
        *(undefined8 *)(*param_1 + uVar6 * 8) = 0;
        uVar6 = uVar6 + 1;
      } while (uVar4 != uVar6);
      plVar10 = param_1 + 2;
      plVar5 = (long *)*plVar10;
      if (plVar5 != (long *)0x0) {
        uVar6 = plVar5[1];
        uVar9 = uVar4 - 1;
        if ((uVar4 & uVar9) != 0) {
          if (uVar4 <= uVar6) {
            uVar9 = 0;
            if (uVar4 != 0) {
              uVar9 = uVar6 / uVar4;
            }
            uVar6 = uVar6 - uVar9 * uVar4;
          }
          *(long **)(*param_1 + uVar6 * 8) = plVar10;
          plVar10 = (long *)*plVar5;
joined_r0x000109435c6c:
          if (plVar10 != (long *)0x0) {
            do {
              uVar9 = plVar10[1];
              if (uVar4 <= uVar9) {
                uVar11 = 0;
                if (uVar4 != 0) {
                  uVar11 = uVar9 / uVar4;
                }
                uVar9 = uVar9 - uVar11 * uVar4;
              }
              if (uVar9 != uVar6) {
                lVar8 = *param_1;
                if (*(long *)(lVar8 + uVar9 * 8) == 0) goto code_r0x000109435cc8;
                *plVar5 = *plVar10;
                *plVar10 = **(long **)(lVar8 + uVar9 * 8);
                **(undefined8 **)(lVar8 + uVar9 * 8) = plVar10;
                plVar10 = plVar5;
              }
              plVar5 = plVar10;
              plVar10 = (long *)*plVar5;
              if (plVar10 == (long *)0x0) break;
            } while( true );
          }
          goto LAB_109435d40;
        }
        uVar6 = uVar6 & uVar9;
        *(long **)(*param_1 + uVar6 * 8) = plVar10;
        for (plVar10 = (long *)*plVar5; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
          uVar11 = plVar10[1] & uVar9;
          if (uVar11 != uVar6) {
            lVar8 = *param_1;
            if (*(long *)(lVar8 + uVar11 * 8) == 0) {
              *(long **)(lVar8 + uVar11 * 8) = plVar5;
              uVar6 = uVar11;
            }
            else {
              *plVar5 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar8 + uVar11 * 8);
              **(long **)(lVar8 + uVar11 * 8) = (long)plVar10;
              plVar10 = plVar5;
            }
          }
          plVar5 = plVar10;
        }
      }
LAB_109435d40:
      uVar6 = uVar4 - 1;
      if ((uVar4 & uVar6) == 0) goto LAB_109435d50;
LAB_109435e7c:
      if (uVar4 <= uVar12) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar12 / uVar4;
        }
        unaff_x24 = uVar12 - uVar6 * uVar4;
        lVar8 = *param_1;
        plVar5 = *(long **)(lVar8 + unaff_x24 * 8);
        goto joined_r0x000109435b84;
      }
      lVar8 = *param_1;
      plVar5 = *(long **)(lVar8 + uVar3 * -0x1100afb8a63e94b8);
      unaff_x24 = uVar12;
    }
    else {
      if (uVar4 < uVar6) {
        uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
        if ((uVar6 < 3) || ((uVar6 & uVar6 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar9) {
          uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
        }
        if (uVar4 <= uVar9) {
          uVar4 = uVar9;
        }
        if (uVar4 < uVar6) {
          if (uVar4 != 0) goto LAB_109435bf4;
          lVar8 = *param_1;
          *param_1 = 0;
          if (lVar8 != 0) {
            __ZdlPv();
          }
          uVar4 = 0;
          param_1[1] = 0;
          uVar6 = 0xffffffffffffffff;
          goto LAB_109435d50;
        }
        uVar6 = param_1[1];
      }
      uVar4 = uVar6;
      uVar6 = uVar4 - 1;
      if ((uVar4 & uVar6) != 0) goto LAB_109435e7c;
LAB_109435d50:
      lVar8 = *param_1;
      plVar5 = *(long **)(lVar8 + (uVar6 & uVar12) * 8);
      unaff_x24 = uVar6 & uVar12;
    }
    if (plVar5 != (long *)0x0) goto LAB_109435b88;
LAB_109435d60:
    plVar5 = param_1 + 2;
    *plVar7 = *plVar5;
    *plVar5 = (long)plVar7;
    *(long **)(lVar8 + unaff_x24 * 8) = plVar5;
    if (*plVar7 == 0) goto LAB_109435e08;
    uVar6 = *(ulong *)(*plVar7 + 8);
    if ((uVar4 & uVar4 - 1) == 0) {
      uVar6 = uVar6 & uVar4 - 1;
    }
    else if (uVar4 <= uVar6) {
      uVar3 = 0;
      if (uVar4 != 0) {
        uVar3 = uVar6 / uVar4;
      }
      uVar6 = uVar6 - uVar3 * uVar4;
    }
    plVar5 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    lVar8 = *param_1;
    plVar5 = *(long **)(lVar8 + unaff_x24 * 8);
    uVar4 = uVar6;
joined_r0x000109435b84:
    if (plVar5 == (long *)0x0) goto LAB_109435d60;
LAB_109435b88:
    *plVar7 = *plVar5;
  }
  *plVar5 = (long)plVar7;
LAB_109435e08:
  param_1[3] = param_1[3] + 1;
  return plVar7;
code_r0x000109435cc8:
  *(long **)(lVar8 + uVar9 * 8) = plVar5;
  plVar5 = plVar10;
  plVar10 = (long *)*plVar10;
  uVar6 = uVar9;
  goto joined_r0x000109435c6c;
}



/* Entry: 109435ed0; end: 109435ef7;  */

long FUN_109435ed0(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lStack_78;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    _malloc();
    if ((param_2 == 0) || (lVar1 != 0)) {
      return lVar1;
    }
  }
  lVar1 = 8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
  func_0x000109436028(lVar1 + 0xce8,*(undefined8 *)(lVar1 + 0xcf0));
  func_0x0001094360b8(lVar1 + 0x270);
  if (*(long *)(lVar1 + 600) != 0) {
    *(long *)(lVar1 + 0x260) = *(long *)(lVar1 + 600);
    __ZdlPv();
  }
  if (*(long *)(lVar1 + 0x240) != 0) {
    *(long *)(lVar1 + 0x248) = *(long *)(lVar1 + 0x240);
    __ZdlPv();
  }
  if (*(long *)(lVar1 + 0x228) != 0) {
    *(long *)(lVar1 + 0x230) = *(long *)(lVar1 + 0x228);
    __ZdlPv();
  }
  if (*(long *)(lVar1 + 0x210) != 0) {
    *(long *)(lVar1 + 0x218) = *(long *)(lVar1 + 0x210);
    __ZdlPv();
  }
  lStack_78 = lVar1 + 0x1f0;
  FUN_10942a570(&lStack_78);
  _free(*(undefined8 *)(lVar1 + 0x1d8));
  *(undefined ***)(lVar1 + 0x158) = &PTR_FUN_110af4c80;
  if (*(long *)(lVar1 + 0x160) != 0) {
    __ZdaPv();
  }
  *(undefined8 *)(lVar1 + 0x160) = 0;
  *(undefined8 *)(lVar1 + 0x168) = 0;
  *(undefined4 *)(lVar1 + 0x170) = 0;
  *(undefined ***)(lVar1 + 0x138) = &PTR_FUN_110af4c80;
  if (*(long *)(lVar1 + 0x140) != 0) {
    __ZdaPv();
  }
  *(undefined8 *)(lVar1 + 0x140) = 0;
  *(undefined8 *)(lVar1 + 0x148) = 0;
  *(undefined4 *)(lVar1 + 0x150) = 0;
  return lVar1;
}



/* Entry: 109435ef8; end: 109435f4b;  */

long FUN_109435ef8(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lStack_58;
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    _malloc();
    if ((param_2 == 0) || (lVar1 != 0)) {
      return lVar1;
    }
  }
  lVar1 = 8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
  func_0x000109436028(lVar1 + 0xce8,*(undefined8 *)(lVar1 + 0xcf0));
  func_0x0001094360b8(lVar1 + 0x270);
  if (*(long *)(lVar1 + 600) != 0) {
    *(long *)(lVar1 + 0x260) = *(long *)(lVar1 + 600);
    __ZdlPv();
  }
  if (*(long *)(lVar1 + 0x240) != 0) {
    *(long *)(lVar1 + 0x248) = *(long *)(lVar1 + 0x240);
    __ZdlPv();
  }
  if (*(long *)(lVar1 + 0x228) != 0) {
    *(long *)(lVar1 + 0x230) = *(long *)(lVar1 + 0x228);
    __ZdlPv();
  }
  if (*(long *)(lVar1 + 0x210) != 0) {
    *(long *)(lVar1 + 0x218) = *(long *)(lVar1 + 0x210);
    __ZdlPv();
  }
  lStack_58 = lVar1 + 0x1f0;
  FUN_10942a570(&lStack_58);
  _free(*(undefined8 *)(lVar1 + 0x1d8));
  *(undefined ***)(lVar1 + 0x158) = &PTR_FUN_110af4c80;
  if (*(long *)(lVar1 + 0x160) != 0) {
    __ZdaPv();
  }
  *(undefined8 *)(lVar1 + 0x160) = 0;
  *(undefined8 *)(lVar1 + 0x168) = 0;
  *(undefined4 *)(lVar1 + 0x170) = 0;
  *(undefined ***)(lVar1 + 0x138) = &PTR_FUN_110af4c80;
  if (*(long *)(lVar1 + 0x140) != 0) {
    __ZdaPv();
  }
  *(undefined8 *)(lVar1 + 0x140) = 0;
  *(undefined8 *)(lVar1 + 0x148) = 0;
  *(undefined4 *)(lVar1 + 0x150) = 0;
  return lVar1;
}



/* Entry: 109435f4c; end: 1094361a7;  */

long FUN_109435f4c(long param_1)

{
  long lStack_38;
  
  func_0x000109436028(param_1 + 0xce8,*(undefined8 *)(param_1 + 0xcf0));
  func_0x0001094360b8(param_1 + 0x270);
  if (*(long *)(param_1 + 600) != 0) {
    *(long *)(param_1 + 0x260) = *(long *)(param_1 + 600);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x240) != 0) {
    *(long *)(param_1 + 0x248) = *(long *)(param_1 + 0x240);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x228) != 0) {
    *(long *)(param_1 + 0x230) = *(long *)(param_1 + 0x228);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x210) != 0) {
    *(long *)(param_1 + 0x218) = *(long *)(param_1 + 0x210);
    __ZdlPv();
  }
  lStack_38 = param_1 + 0x1f0;
  FUN_10942a570(&lStack_38);
  _free(*(undefined8 *)(param_1 + 0x1d8));
  *(undefined ***)(param_1 + 0x158) = &PTR_FUN_110af4c80;
  if (*(long *)(param_1 + 0x160) != 0) {
    __ZdaPv();
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined ***)(param_1 + 0x138) = &PTR_FUN_110af4c80;
  if (*(long *)(param_1 + 0x140) != 0) {
    __ZdaPv();
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  return param_1;
}



/* Entry: 1094361a8; end: 1094362d3;  */

void FUN_1094361a8(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  while (param_2 != (long *)0x0) {
    lVar1 = *param_2;
    if (param_2[0x11] != 0) {
      param_2[0x12] = param_2[0x11];
      __ZdlPv();
    }
    if (param_2[9] != 0) {
      param_2[10] = param_2[9];
      __ZdlPv();
    }
    if (param_2[6] != 0) {
      param_2[7] = param_2[6];
      __ZdlPv();
    }
    if (param_2[3] != 0) {
      param_2[4] = param_2[3];
      __ZdlPv();
    }
    __ZdlPv(param_2);
    param_2 = (long *)lVar1;
  }
  return;
}



/* Entry: 1094362d4; end: 10943632f;  */

void FUN_1094362d4(undefined4 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar4 = (long *)0x20;
  ___cxa_allocate_exception();
  plVar5 = plVar4;
  __ZNSt3__115future_categoryEv();
  __ZNSt3__112future_errorC1ENS_10error_codeE(plVar4,param_1,plVar5);
  plVar5 = plVar4;
  ___cxa_throw(plVar4,PTR___ZTINSt3__112future_errorE_110346a00,
               PTR___ZNSt3__112future_errorD1Ev_1103463c0);
  ___cxa_free_exception(plVar4);
  __Unwind_Resume();
  *plVar5 = (long)&PTR_FUN_110af5f98;
  plVar4 = (long *)plVar5[0x19];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  *plVar5 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  __ZNSt3__118condition_variableD1Ev(plVar5 + 0xb);
  __ZNSt3__15mutexD1Ev(plVar5 + 3);
  __ZNSt13exception_ptrD1Ev(plVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(plVar5);
  return;
}



/* Entry: 109436330; end: 109436453;  */

void FUN_109436330(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = (long)&PTR_FUN_110af5f98;
  plVar5 = (long *)param_1[0x19];
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
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  __ZNSt13exception_ptrD1Ev(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 109436454; end: 109436df7;  */

void FUN_109436454(long param_1)

{
  int *piVar1;
  double ****ppppdVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  double ***pppdVar9;
  double **ppdVar10;
  code *pcVar11;
  double ****ppppdVar12;
  long *plVar13;
  long *plVar14;
  undefined4 *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  double *pdVar19;
  ulong uVar20;
  long lVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double ***pppdVar25;
  double ***pppdVar26;
  double ***pppdVar27;
  double ***pppdStack_220;
  double ***pppdStack_218;
  double ***pppdStack_210;
  undefined4 uStack_208;
  undefined8 uStack_204;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  long lStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  int iStack_1a0;
  int iStack_19c;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long *plStack_178;
  long lStack_170;
  int *piStack_168;
  long *plStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  double ***pppdStack_140;
  double ***pppdStack_138;
  double ***pppdStack_130;
  double ***pppdStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  undefined1 auStack_f8 [16];
  undefined4 auStack_e8 [2];
  double *pdStack_e0;
  undefined8 uStack_d8;
  double **ppdStack_d0;
  double **ppdStack_c8;
  undefined8 uStack_c0;
  double ***pppdStack_b8;
  double ***pppdStack_b0;
  double ***pppdStack_a8;
  double ***pppdStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = *(long *)(*(long *)(param_1 + 0xb8) + 0x110);
  lStack_198 = *(long *)(lVar21 + 8);
  uVar16 = *(ulong *)(lVar21 + 0x10);
  iVar4 = *(int *)(lVar21 + 0x18);
  uStack_1a8 = 0x242ff0000;
  piStack_168 = &iStack_1a0;
  iStack_1a0 = (int)(uVar16 >> 0x20);
  iStack_19c = (int)uVar16;
  lStack_180 = 0;
  lStack_188 = 0;
  lStack_170 = 0;
  plStack_178 = (long *)0x0;
  lStack_158 = 0;
  uStack_150 = 0;
  lVar21 = (long)iStack_19c;
  lStack_190 = lStack_198;
  plStack_160 = &lStack_158;
  if (lStack_198 == 0 && (long)iStack_19c * (long)iStack_1a0 != 0) {
    puVar15 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar15 = 1;
    uStack_148 = (double ****)(puVar15 + 1);
    pppdStack_140 = (double ***)0x1c;
    *(undefined1 *)(puVar15 + 8) = 0;
    *(undefined8 *)(puVar15 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar15 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar15 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar15 + 4) = 0x61746164207c7c20;
    FUN_109ac3188(0xffffff29,&uStack_148,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
    goto LAB_109436c64;
  }
  lVar17 = lVar21;
  if (uVar16 >> 0x20 != 1) {
    lVar17 = (long)iVar4;
  }
  lStack_158 = lVar21;
  if (iVar4 != 0) {
    lStack_158 = lVar17;
  }
  uVar5 = 0x42ff4000;
  if (lVar17 != lVar21 && iVar4 != 0) {
    uVar5 = 0x42ff0000;
  }
  uStack_1a8 = CONCAT44(2,uVar5);
  uStack_150 = 1;
  lStack_180 = lStack_198 + lStack_158 * ((long)uVar16 >> 0x20);
  lStack_188 = (lStack_180 - lStack_158) + lVar21;
  if (*(long *)(param_1 + 0xc0) == 0) {
    uStack_148 = (double ****)0x406fe00000000000;
    pppdStack_140 = (double ***)0x0;
    pppdStack_138 = (double ***)0x0;
    pppdStack_130 = (double ***)0x0;
    uStack_208 = 0x42ff0000;
    lStack_1c8 = (long)&uStack_204 + 4;
    uStack_1fc = 0;
    uStack_1f8 = 0;
    uStack_204 = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1f4 = 0;
    uStack_1f0 = 0;
    uStack_1dc = 0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    lStack_1d0 = 0;
    uStack_1d8 = 0;
    uStack_1d4 = 0;
    plStack_1c0 = &lStack_1b8;
    lStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_c0 = (double ****)CONCAT44(iStack_19c,iStack_1a0);
    FUN_109a83fd0(&uStack_208,2,&uStack_c0,0);
    FUN_109a48880(&uStack_208,&uStack_148);
  }
  else {
    FUN_10941f998(&uStack_208,&uStack_1a8,*(long *)(param_1 + 0xb8) + 0x120);
  }
  plVar14 = *(long **)(param_1 + 0xa8);
  plVar3 = *(long **)(param_1 + 0xb0);
  pppdStack_218 = (double ***)0x0;
  pppdStack_210 = (double ***)0x0;
  pppdStack_220 = (double ***)0x0;
  lVar21 = *plVar14;
  lVar17 = plVar14[1];
  lVar8 = lVar17 - lVar21;
  if (lVar8 == 0) {
LAB_109436660:
    if (lVar17 != lVar21) {
      uVar16 = 0;
      auVar24 = NEON_fmov(0x3fe0000000000000,8);
      auVar23 = NEON_fmov(0xbfe0000000000000,8);
      do {
        pdVar19 = (double *)(lVar21 + uVar16 * 0xb0);
        if (*(char *)(CONCAT44(uStack_1f4,uStack_1f8) + *plStack_1c0 * (long)(int)pdVar19[3] +
                     (long)(int)pdVar19[2]) != '\0') {
          ppdStack_d0 = (double **)*pdVar19;
          ppdStack_c8 = (double **)pdVar19[1];
          pppdVar27 = (double ***)pdVar19[4];
          iVar4 = *(int *)(pdVar19 + 5);
          pppdVar26 = (double ***)pdVar19[6];
          pppdVar25 = (double ***)pdVar19[7];
          FUN_10940e164(&uStack_148,*plVar3 + uVar16 * 0x20);
          ppdVar10 = ppdStack_d0;
          pppdVar9 = pppdStack_218;
          if (pppdStack_218 < pppdStack_210) {
            pppdStack_218[1] = ppdStack_c8;
            *pppdVar9 = ppdVar10;
            pppdVar9[4] = (double **)pppdVar27;
            *(int *)(pppdVar9 + 5) = iVar4;
            pppdVar9[6] = (double **)pppdVar26;
            pppdVar9[7] = (double **)pppdVar25;
            *(undefined4 *)(pppdVar9 + 10) = 0x42ff0000;
            *(undefined8 *)((long)pppdVar9 + 0x5c) = 0;
            *(undefined8 *)((long)pppdVar9 + 0x54) = 0;
            *(undefined8 *)((long)pppdVar9 + 0x6c) = 0;
            *(undefined8 *)((long)pppdVar9 + 100) = 0;
            *(undefined8 *)((long)pppdVar9 + 0x7c) = 0;
            *(undefined8 *)((long)pppdVar9 + 0x74) = 0;
            pppdVar9[0x14] = (double **)0x0;
            pppdVar9[0x11] = (double **)0x0;
            pppdVar9[0x10] = (double **)0x0;
            pppdVar9[0x12] = (double **)(pppdVar9 + 0xb);
            pppdVar9[0x13] = (double **)(pppdVar9 + 0x14);
            pppdVar9[0x15] = (double **)0x0;
            pppdVar25 = (double ***)_pow(pppdVar25,(double)iVar4);
            pppdVar9[8] = (double **)pppdVar25;
            pppdVar9[9] = (double **)(1.0 / (double)pppdVar25);
            pppdVar9[3] = (double **)
                          (((double)pppdVar9[1] + auVar24._8_8_) * (double)pppdVar25 + auVar23._8_8_
                          );
            pppdVar9[2] = (double **)
                          (((double)*pppdVar9 + auVar24._0_8_) * (double)pppdVar25 + auVar23._0_8_);
            uStack_c0 = (double ****)CONCAT44(uStack_c0._4_4_,0x2010000);
            pppdStack_b0 = (double ***)0x0;
            pppdStack_b8 = pppdVar9 + 10;
            FUN_109a479a0(&uStack_148,&uStack_c0);
            pppdStack_218 = pppdVar9 + 0x16;
          }
          else {
            lVar21 = (long)pppdStack_218 - (long)pppdStack_220;
            uVar18 = (lVar21 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1;
            if (0x1745d1745d1745d < uVar18) {
              FUN_10939c884();
              goto LAB_109436c64;
            }
            lVar17 = (long)pppdStack_210 - (long)pppdStack_220 >> 4;
            uVar20 = lVar17 * 0x5d1745d1745d1746;
            if (uVar20 < uVar18 || uVar20 - uVar18 == 0) {
              uVar20 = uVar18;
            }
            if (0xba2e8ba2e8ba2d < (ulong)(lVar17 * 0x2e8ba2e8ba2e8ba3)) {
              uVar20 = 0x1745d1745d1745d;
            }
            pppdStack_a0 = (double ***)&pppdStack_220;
            if (uVar20 == 0) {
              ppppdVar12 = (double ****)0x0;
            }
            else {
              ppppdVar12 = &pppdStack_220;
              FUN_10939c898(ppppdVar12,uVar20,0);
            }
            ppdVar10 = ppdStack_d0;
            pdVar19 = (double *)((long)ppppdVar12 + lVar21);
            pppdStack_a8 = (double ***)(ppppdVar12 + uVar20 * 0x16);
            uStack_c0 = ppppdVar12;
            pppdStack_b8 = (double ***)pdVar19;
            pppdStack_b0 = (double ***)pdVar19;
            pdVar19[1] = (double)ppdStack_c8;
            *pdVar19 = (double)ppdVar10;
            pdVar19[4] = (double)pppdVar27;
            *(int *)(pdVar19 + 5) = iVar4;
            pdVar19[6] = (double)pppdVar26;
            pdVar19[7] = (double)pppdVar25;
            *(undefined4 *)(pdVar19 + 10) = 0x42ff0000;
            *(undefined8 *)((long)pdVar19 + 0x7c) = 0;
            *(undefined8 *)((long)pdVar19 + 0x74) = 0;
            pdVar19[0x11] = 0.0;
            pdVar19[0x10] = 0.0;
            *(undefined8 *)((long)pdVar19 + 0x5c) = 0;
            *(undefined8 *)((long)pdVar19 + 0x54) = 0;
            pdVar19[0x14] = 0.0;
            *(undefined8 *)((long)pdVar19 + 0x6c) = 0;
            *(undefined8 *)((long)pdVar19 + 100) = 0;
            pdVar19[0x12] = (double)(pdVar19 + 0xb);
            pdVar19[0x13] = (double)(pdVar19 + 0x14);
            pdVar19[0x15] = 0.0;
            dVar22 = (double)_pow(pppdVar25,(double)iVar4);
            pdVar19[8] = dVar22;
            pdVar19[9] = 1.0 / dVar22;
            pdVar19[3] = (pdVar19[1] + auVar24._8_8_) * dVar22 + auVar23._8_8_;
            pdVar19[2] = (*pdVar19 + auVar24._0_8_) * dVar22 + auVar23._0_8_;
            auStack_e8[0] = 0x2010000;
            uStack_d8 = 0;
            pdStack_e0 = pdVar19 + 10;
            FUN_109a479a0(&uStack_148,auStack_e8);
            pppdStack_b0 = (double ***)(pdVar19 + 0x16);
            ppppdVar12 = (double ****)((long)pdVar19 + ((long)pppdStack_220 - (long)pppdStack_218));
            FUN_10939c900(&pppdStack_220,pppdStack_220,pppdStack_218,ppppdVar12);
            pppdVar25 = pppdStack_b0;
            pppdVar9 = pppdStack_210;
            pppdStack_210 = pppdStack_a8;
            pppdStack_218 = pppdStack_b0;
            pppdStack_b0 = pppdStack_220;
            pppdStack_a8 = pppdVar9;
            uStack_c0 = (double ****)pppdStack_220;
            pppdStack_b8 = pppdStack_220;
            pppdStack_220 = (double ***)ppppdVar12;
            FUN_10939cadc(&uStack_c0);
            pppdStack_218 = pppdVar25;
          }
          if (lStack_110 != 0) {
            piVar1 = (int *)(lStack_110 + 0x14);
            do {
              iVar4 = *piVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar4 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((iVar4 + -1 == 0) && (lStack_110 != 0)) {
              plVar13 = *(long **)(lStack_110 + 8);
              if ((*(long **)(lStack_110 + 8) == (long *)0x0) &&
                 ((plVar13 = plStack_118, plStack_118 == (long *)0x0 &&
                  (plVar13 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
                FUN_109a83e3c();
                plVar13 = plRam000000011382bb80;
              }
              (**(code **)(*plVar13 + 0x30))();
            }
          }
          lStack_110 = 0;
          pppdStack_130 = (double ***)0x0;
          pppdStack_138 = (double ***)0x0;
          uStack_120 = 0;
          pppdStack_128 = (double ***)0x0;
          if (0 < uStack_148._4_4_) {
            lVar21 = 0;
            do {
              *(undefined4 *)(lStack_108 + lVar21 * 4) = 0;
              lVar21 = lVar21 + 1;
            } while (lVar21 < uStack_148._4_4_);
          }
          if (puStack_100 != auStack_f8 && puStack_100 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_100 + -8));
          }
          lVar21 = *plVar14;
          lVar17 = plVar14[1];
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < (ulong)((lVar17 - lVar21 >> 4) * 0x2e8ba2e8ba2e8ba3));
    }
    if (lStack_1d0 != 0) {
      piVar1 = (int *)(lStack_1d0 + 0x14);
      do {
        iVar4 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((iVar4 + -1 == 0) && (lStack_1d0 != 0)) {
        plVar14 = *(long **)(lStack_1d0 + 8);
        if ((*(long **)(lStack_1d0 + 8) == (long *)0x0) &&
           ((plVar14 = (long *)CONCAT44(uStack_1d4,uStack_1d8),
            (long *)CONCAT44(uStack_1d4,uStack_1d8) == (long *)0x0 &&
            (plVar14 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
          FUN_109a83e3c();
          plVar14 = plRam000000011382bb80;
        }
        (**(code **)(*plVar14 + 0x30))();
      }
    }
    lStack_1d0 = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_1e0 = 0;
    uStack_1dc = 0;
    uStack_1e8 = 0;
    uStack_1e4 = 0;
    if (0 < (int)uStack_204) {
      lVar21 = 0;
      do {
        *(undefined4 *)(lStack_1c8 + lVar21 * 4) = 0;
        lVar21 = lVar21 + 1;
      } while (lVar21 < (int)uStack_204);
    }
    if (plStack_1c0 != &lStack_1b8 && plStack_1c0 != (long *)0x0) {
      _free(plStack_1c0[-1]);
    }
    if (lStack_170 != 0) {
      piVar1 = (int *)(lStack_170 + 0x14);
      do {
        iVar4 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((iVar4 + -1 == 0) && (lStack_170 != 0)) {
        plVar14 = *(long **)(lStack_170 + 8);
        if ((*(long **)(lStack_170 + 8) == (long *)0x0) &&
           ((plVar14 = plStack_178, plStack_178 == (long *)0x0 &&
            (plVar14 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
          FUN_109a83e3c();
          plVar14 = plRam000000011382bb80;
        }
        (**(code **)(*plVar14 + 0x30))();
      }
    }
    lStack_170 = 0;
    lStack_190 = 0;
    lStack_198 = 0;
    lStack_180 = 0;
    lStack_188 = 0;
    if (0 < uStack_1a8._4_4_) {
      lVar21 = 0;
      do {
        piStack_168[lVar21] = 0;
        lVar21 = lVar21 + 1;
      } while (lVar21 < uStack_1a8._4_4_);
    }
    if (plStack_160 != &lStack_158 && plStack_160 != (long *)0x0) {
      _free(plStack_160[-1]);
    }
    __ZNSt3__15mutex4lockEv(param_1 + 0x18);
    if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
      uStack_148 = (double ****)0x0;
      lVar21 = *(long *)(param_1 + 0x10);
      __ZNSt13exception_ptrD1Ev(&uStack_148);
      if (lVar21 == 0) {
        *(double ****)(param_1 + 0x98) = pppdStack_218;
        *(double ****)(param_1 + 0x90) = pppdStack_220;
        *(double ****)(param_1 + 0xa0) = pppdStack_210;
        pppdStack_218 = (double ***)0x0;
        pppdStack_210 = (double ***)0x0;
        pppdStack_220 = (double ***)0x0;
        *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 5;
        __ZNSt3__118condition_variable10notify_allEv(param_1 + 0x58);
        __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
        uStack_148 = &pppdStack_220;
        FUN_10939cb28(&uStack_148);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
          return;
        }
        ___stack_chk_fail();
        goto LAB_109436c60;
      }
    }
    FUN_1094362d4(2);
  }
  else {
    uVar16 = (lVar8 >> 4) * 0x2e8ba2e8ba2e8ba3;
    if (uVar16 < 0x1745d1745d1745e) {
      pppdStack_128 = (double ***)&pppdStack_220;
      ppppdVar12 = &pppdStack_220;
      FUN_10939c898(ppppdVar12,uVar16,0);
      ppppdVar2 = (double ****)((long)ppppdVar12 + ((long)pppdStack_220 - (long)pppdStack_218));
      uStack_148 = ppppdVar12;
      pppdStack_140 = (double ***)ppppdVar12;
      pppdStack_138 = (double ***)ppppdVar12;
      pppdStack_130 = (double ***)((long)ppppdVar12 + lVar8);
      FUN_10939c900(&pppdStack_220,pppdStack_220,pppdStack_218,ppppdVar2);
      pppdStack_138 = pppdStack_220;
      pppdStack_130 = pppdStack_210;
      uStack_148 = (double ****)pppdStack_220;
      pppdStack_140 = pppdStack_220;
      pppdStack_220 = (double ***)ppppdVar2;
      pppdStack_218 = (double ***)ppppdVar12;
      pppdStack_210 = (double ***)((long)ppppdVar12 + lVar8);
      FUN_10939cadc(&uStack_148);
      lVar21 = *plVar14;
      lVar17 = plVar14[1];
      goto LAB_109436660;
    }
LAB_109436c60:
    FUN_10939c884();
  }
LAB_109436c64:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x109436c68);
  (*pcVar11)();
}



/* Entry: 109436df8; end: 109436ebb;  */

long FUN_109436df8(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  long lStack_40;
  char cStack_38;
  
  lStack_40 = param_1 + 0x18;
  cStack_38 = '\x01';
  __ZNSt3__15mutex4lockEv();
  __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(param_1,&lStack_40);
  lVar2 = *(long *)(param_1 + 0x10);
  uStack_48 = 0;
  __ZNSt13exception_ptrD1Ev(&uStack_48);
  if (lVar2 == 0) {
    if (cStack_38 == '\x01') {
      __ZNSt3__15mutex6unlockEv(lStack_40);
    }
    return param_1 + 0x90;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_50,(long *)(param_1 + 0x10));
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109436e8c);
  (*pcVar1)();
}



/* Entry: 109436ebc; end: 10943812b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109436ebc(double param_1,long *param_2,long *param_3)

{
  int *piVar1;
  undefined8 *******pppppppuVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 ******ppppppuVar5;
  int iVar6;
  char cVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 *******pppppppuVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined8 ******ppppppuVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  undefined8 *******pppppppuVar22;
  ulong uVar23;
  long lVar24;
  undefined8 ******ppppppuVar25;
  long *plVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  long *plVar32;
  ulong uVar33;
  long lVar34;
  long *plVar35;
  undefined8 *******pppppppuVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined8 ******ppppppuVar41;
  undefined8 ******ppppppuVar42;
  double dVar43;
  double dVar44;
  undefined8 ******ppppppuVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double unaff_d12;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  undefined8 *******pppppppuVar63;
  undefined8 *******pppppppuStack_760;
  double dStack_758;
  long lStack_718;
  long *plStack_6f0;
  double dStack_6e0;
  double dStack_6d8;
  double dStack_6d0;
  double dStack_6c8;
  undefined1 auStack_6b8 [16];
  double dStack_6a8;
  double dStack_6a0;
  double dStack_698;
  double dStack_690;
  undefined8 *******pppppppuStack_680;
  double dStack_678;
  double dStack_670;
  double dStack_668;
  double dStack_660;
  double dStack_658;
  double dStack_650;
  double dStack_648;
  double dStack_640;
  double dStack_638;
  double dStack_630;
  double dStack_628;
  double dStack_620;
  double dStack_618;
  double dStack_610;
  double dStack_608;
  undefined8 *******pppppppuStack_600;
  double dStack_5f8;
  double dStack_5f0;
  double dStack_5e0;
  double dStack_5d8;
  double dStack_5d0;
  double dStack_5c0;
  double dStack_5b8;
  double dStack_5b0;
  double dStack_5a0;
  double dStack_598;
  double dStack_590;
  undefined8 *******pppppppuStack_580;
  undefined8 *******pppppppuStack_578;
  undefined8 *******pppppppuStack_570;
  double dStack_560;
  double dStack_558;
  double dStack_550;
  double dStack_540;
  double dStack_538;
  double dStack_530;
  double dStack_520;
  double dStack_518;
  double dStack_510;
  undefined8 *******pppppppuStack_500;
  undefined8 *******pppppppuStack_4f8;
  undefined8 *******pppppppuStack_4f0;
  undefined8 *******pppppppuStack_4e8;
  undefined8 *******pppppppuStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 *******pppppppuStack_4a0;
  undefined8 uStack_498;
  undefined8 *******pppppppuStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined4 uStack_478;
  undefined8 uStack_470;
  undefined4 uStack_468;
  undefined8 uStack_460;
  undefined4 uStack_458;
  undefined8 *******pppppppuStack_450;
  undefined8 uStack_448;
  undefined8 *******pppppppuStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  double dStack_420;
  double dStack_418;
  double dStack_410;
  double dStack_408;
  undefined1 uStack_400;
  undefined8 uStack_3fc;
  undefined8 uStack_3f4;
  undefined8 uStack_3e8;
  undefined4 uStack_3d4;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined2 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 *******pppppppuStack_290;
  undefined8 *******pppppppuStack_288;
  undefined8 *******pppppppuStack_280;
  uint uStack_278;
  double dStack_270;
  double dStack_268;
  double dStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 uStack_230;
  undefined8 uStack_22c;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined4 uStack_134;
  undefined1 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined1 uStack_10c;
  undefined1 uStack_f9;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (ulong *)*param_2;
  puVar4 = (ulong *)param_2[1];
joined_r0x000109436f04:
  if (puVar3 == puVar4) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      return;
    }
    ___stack_chk_fail();
LAB_109437fa8:
    FUN_10943b3b0();
LAB_109437fb4:
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x109437fb8);
    (*pcVar11)();
  }
  uVar23 = *puVar3;
  dVar54 = unaff_d12;
  if ((uVar23 == 0) || (iVar6 = *(int *)(uVar23 + 0x50), iVar6 == 0 || iVar6 == 3))
  goto LAB_109436f70;
  uVar27 = param_3[1];
  if (uVar27 == 0) goto LAB_109436f6c;
  uVar28 = ((ulong)(uint)((int)uVar23 << 3) + 8 ^ uVar23 >> 0x20) * -0x622015f714c7d297;
  uVar28 = (uVar23 >> 0x20 ^ uVar28 >> 0x2f ^ uVar28) * -0x622015f714c7d297;
  uVar28 = (uVar28 ^ uVar28 >> 0x2f) * -0x622015f714c7d297;
  uVar29 = uVar27 - 1;
  if ((uVar27 & uVar29) == 0) {
    uVar30 = uVar29 & uVar28;
    lVar31 = *param_3;
    plVar32 = *(long **)(lVar31 + uVar30 * 8);
  }
  else {
    uVar30 = uVar28;
    if (uVar27 <= uVar28) {
      uVar30 = 0;
      if (uVar27 != 0) {
        uVar30 = uVar28 / uVar27;
      }
      uVar30 = uVar28 - uVar30 * uVar27;
    }
    lVar31 = *param_3;
    plVar32 = *(long **)(lVar31 + uVar30 * 8);
  }
  if (plVar32 != (long *)0x0) {
    do {
      while( true ) {
        plVar32 = (long *)*plVar32;
        if (plVar32 == (long *)0x0) goto LAB_109436f6c;
        uVar33 = plVar32[1];
        if (uVar28 - uVar33 == 0) break;
        if ((uVar27 & uVar29) == 0) {
          uVar33 = uVar33 & uVar29;
        }
        else if (uVar27 <= uVar33) {
          uVar8 = 0;
          if (uVar27 != 0) {
            uVar8 = uVar33 / uVar27;
          }
          uVar33 = uVar33 - uVar8 * uVar27;
        }
        if (uVar33 != uVar30) goto LAB_109436f6c;
      }
    } while (plVar32[2] != uVar23);
    if ((uVar27 & uVar29) == 0) {
      uVar30 = uVar29 & uVar28;
    }
    else {
      uVar30 = uVar28;
      if (uVar27 <= uVar28) {
        uVar30 = 0;
        if (uVar27 != 0) {
          uVar30 = uVar28 / uVar27;
        }
        uVar30 = uVar28 - uVar30 * uVar27;
      }
    }
    plVar32 = *(long **)(lVar31 + uVar30 * 8);
    if ((plVar32 != (long *)0x0) && (plVar32 = (long *)*plVar32, plVar32 != (long *)0x0)) {
      if ((uVar27 & uVar29) != 0) {
        do {
          uVar29 = plVar32[1];
          if (uVar28 - uVar29 == 0) {
            if (plVar32[2] == uVar23) goto LAB_10943710c;
          }
          else {
            if (uVar27 <= uVar29) {
              uVar33 = 0;
              if (uVar27 != 0) {
                uVar33 = uVar29 / uVar27;
              }
              uVar29 = uVar29 - uVar33 * uVar27;
            }
            if (uVar29 != uVar30) goto LAB_109437f94;
          }
          plVar32 = (long *)*plVar32;
          if (plVar32 == (long *)0x0) goto LAB_109437f94;
        } while( true );
      }
      do {
        if (uVar28 - plVar32[1] == 0) {
          if (plVar32[2] == uVar23) goto LAB_10943710c;
        }
        else if ((plVar32[1] & uVar29) != uVar30) break;
        plVar32 = (long *)*plVar32;
        if (plVar32 == (long *)0x0) break;
      } while( true );
    }
LAB_109437f94:
    FUN_109262df8(&UNK_10f639994);
    goto LAB_109437fb4;
  }
LAB_109436f6c:
  *(undefined4 *)(uVar23 + 0x50) = 0;
  dVar54 = unaff_d12;
LAB_109436f70:
  puVar3 = puVar3 + 1;
  unaff_d12 = dVar54;
  goto joined_r0x000109436f04;
LAB_10943710c:
  plVar35 = (long *)plVar32[3];
  plStack_6f0 = (long *)plVar32[4];
  if (1 < (ulong)(((long)plStack_6f0 - (long)plVar35 >> 6) * -0x5555555555555555)) {
    auVar40._8_8_ = dStack_758;
    auVar40._0_8_ = pppppppuStack_760;
    pppppppuStack_760 = (undefined8 *******)(auVar40._1_8_ << 8);
    if (iVar6 != 1) {
      if (iVar6 == 2) {
        dStack_758 = SUB168(*(undefined1 (*) [16])(uVar23 + 8),8);
        pppppppuStack_760 = SUB168(*(undefined1 (*) [16])(uVar23 + 8),0);
        dVar54 = *(double *)(uVar23 + 0x18);
      }
      pppppppuStack_580 = (undefined8 *******)0x0;
      pppppppuStack_578 = (undefined8 *******)0x0;
      pppppppuStack_570 = (undefined8 *******)0x0;
      if (plVar35 != plStack_6f0) {
LAB_10943716c:
        pppppppuStack_570 = (undefined8 *******)0x0;
        pppppppuStack_578 = (undefined8 *******)0x0;
        pppppppuStack_580 = (undefined8 *******)0x0;
        do {
          while( true ) {
            pppppppuVar22 = pppppppuStack_578;
            lVar31 = *plVar35;
            if (pppppppuStack_570 <= pppppppuStack_578) break;
            FUN_10943b0f8(pppppppuStack_578,lVar31 + 0x20,lVar31 + 0x2b0);
            pppppppuStack_578 = pppppppuVar22 + 0x36;
            plVar35 = plVar35 + 0x18;
            if (plVar35 == plStack_6f0) goto LAB_109437b0c;
          }
          lVar34 = (long)pppppppuStack_578 - (long)pppppppuStack_580;
          uVar23 = (lVar34 >> 4) * -0x7b425ed097b425ed + 1;
          if (0x97b425ed097b42 < uVar23) goto LAB_109437fa8;
          lVar24 = (long)pppppppuStack_570 - (long)pppppppuStack_580 >> 4;
          uVar27 = lVar24 * 0x97b425ed097b426;
          if (uVar27 < uVar23 || uVar27 - uVar23 == 0) {
            uVar27 = uVar23;
          }
          if (0x4bda12f684bda0 < (ulong)(lVar24 * -0x7b425ed097b425ed)) {
            uVar27 = 0x97b425ed097b42;
          }
          pppppppuStack_4e0 = &pppppppuStack_580;
          if (uVar27 == 0) {
            ppppppuVar18 = (undefined8 ******)0x0;
          }
          else {
            if (0x97b425ed097b42 < uVar27) {
              func_0x000104c4f740();
              goto LAB_109437fb4;
            }
            ppppppuVar18 = (undefined8 ******)(uVar27 * 0x1b0);
            __Znwm();
          }
          lVar34 = (long)ppppppuVar18 + lVar34;
          pppppppuStack_500 = (undefined8 *******)ppppppuVar18;
          pppppppuStack_4f8 = (undefined8 *******)lVar34;
          pppppppuStack_4f0 = (undefined8 *******)lVar34;
          pppppppuStack_4e8 = (undefined8 *******)(ppppppuVar18 + uVar27 * 0x36);
          FUN_10943b0f8(lVar34,lVar31 + 0x20,lVar31 + 0x2b0,plVar35 + 2);
          pppppppuVar10 = pppppppuStack_578;
          pppppppuVar36 = pppppppuStack_580;
          pppppppuStack_4f0 = (undefined8 *******)(lVar34 + 0x1b0);
          pppppppuStack_290 = &pppppppuStack_580;
          pppppppuStack_288 = &pppppppuStack_680;
          pppppppuStack_280 = &pppppppuStack_600;
          uVar9 = uStack_278 >> 8;
          uStack_278 = uStack_278 & 0xffffff00;
          pppppppuVar2 = (undefined8 *******)
                         (lVar34 + ((long)pppppppuStack_580 - (long)pppppppuStack_578));
          pppppppuVar22 = pppppppuStack_580;
          pppppppuVar63 = pppppppuVar2;
          pppppppuStack_680 = pppppppuVar2;
          if ((long)pppppppuStack_580 - (long)pppppppuStack_578 == 0) {
            uStack_278 = CONCAT31((int3)uVar9,1);
            pppppppuVar22 = (undefined8 *******)(ppppppuVar18 + uVar27 * 0x36);
            pppppppuStack_600 = pppppppuVar2;
          }
          else {
            do {
              *pppppppuVar63 = *pppppppuVar22;
              ppppppuVar18 = pppppppuVar22[2];
              pppppppuVar63[3] = pppppppuVar22[3];
              pppppppuVar63[2] = ppppppuVar18;
              ppppppuVar18 = pppppppuVar22[4];
              pppppppuVar63[5] = pppppppuVar22[5];
              pppppppuVar63[4] = ppppppuVar18;
              ppppppuVar18 = pppppppuVar22[6];
              pppppppuVar63[7] = pppppppuVar22[7];
              pppppppuVar63[6] = ppppppuVar18;
              ppppppuVar18 = pppppppuVar22[8];
              pppppppuVar63[9] = pppppppuVar22[9];
              pppppppuVar63[8] = ppppppuVar18;
              *(undefined4 *)(pppppppuVar63 + 10) = *(undefined4 *)(pppppppuVar22 + 10);
              pppppppuStack_600 = pppppppuVar63;
              FUN_10937da58(pppppppuVar63 + 0xb,pppppppuVar22 + 0xb);
              ppppppuVar18 = pppppppuVar22[0xe];
              ppppppuVar25 = pppppppuVar22[0x10];
              ppppppuVar5 = pppppppuVar22[0x11];
              pppppppuVar63[0xf] = pppppppuVar22[0xf];
              pppppppuVar63[0xe] = ppppppuVar18;
              pppppppuVar63[0x11] = ppppppuVar5;
              pppppppuVar63[0x10] = ppppppuVar25;
              ppppppuVar18 = pppppppuVar22[0x12];
              ppppppuVar25 = pppppppuVar22[0x13];
              pppppppuVar63[0x14] = pppppppuVar22[0x14];
              pppppppuVar63[0x13] = ppppppuVar25;
              pppppppuVar63[0x12] = ppppppuVar18;
              ppppppuVar5 = pppppppuVar22[0x1a];
              ppppppuVar42 = pppppppuVar22[0x1b];
              ppppppuVar18 = pppppppuVar22[0x1c];
              ppppppuVar25 = pppppppuVar22[0x1d];
              ppppppuVar45 = pppppppuVar22[0x19];
              ppppppuVar41 = pppppppuVar22[0x18];
              pppppppuVar63[0x1e] = pppppppuVar22[0x1e];
              pppppppuVar63[0x1b] = ppppppuVar42;
              pppppppuVar63[0x1a] = ppppppuVar5;
              pppppppuVar63[0x1d] = ppppppuVar25;
              pppppppuVar63[0x1c] = ppppppuVar18;
              pppppppuVar63[0x19] = ppppppuVar45;
              pppppppuVar63[0x18] = ppppppuVar41;
              ppppppuVar18 = pppppppuVar22[0x16];
              pppppppuVar63[0x17] = pppppppuVar22[0x17];
              pppppppuVar63[0x16] = ppppppuVar18;
              ppppppuVar18 = pppppppuVar22[0x20];
              pppppppuVar63[0x21] = pppppppuVar22[0x21];
              pppppppuVar63[0x20] = ppppppuVar18;
              ppppppuVar18 = pppppppuVar22[0x22];
              pppppppuVar63[0x23] = pppppppuVar22[0x23];
              pppppppuVar63[0x22] = ppppppuVar18;
              ppppppuVar18 = pppppppuVar22[0x24];
              ppppppuVar25 = pppppppuVar22[0x25];
              ppppppuVar5 = pppppppuVar22[0x26];
              ppppppuVar41 = pppppppuVar22[0x29];
              ppppppuVar42 = pppppppuVar22[0x28];
              pppppppuVar63[0x27] = pppppppuVar22[0x27];
              pppppppuVar63[0x26] = ppppppuVar5;
              pppppppuVar63[0x29] = ppppppuVar41;
              pppppppuVar63[0x28] = ppppppuVar42;
              pppppppuVar63[0x25] = ppppppuVar25;
              pppppppuVar63[0x24] = ppppppuVar18;
              ppppppuVar18 = pppppppuVar22[0x2a];
              pppppppuVar63[0x2b] = pppppppuVar22[0x2b];
              pppppppuVar63[0x2a] = ppppppuVar18;
              ppppppuVar18 = pppppppuVar22[0x2c];
              pppppppuVar63[0x2d] = pppppppuVar22[0x2d];
              pppppppuVar63[0x2c] = ppppppuVar18;
              ppppppuVar18 = pppppppuVar22[0x2e];
              pppppppuVar63[0x2f] = pppppppuVar22[0x2f];
              pppppppuVar63[0x2e] = ppppppuVar18;
              ppppppuVar25 = pppppppuVar22[0x31];
              ppppppuVar18 = pppppppuVar22[0x30];
              pppppppuVar63[0x31] = pppppppuVar22[0x31];
              pppppppuVar63[0x30] = ppppppuVar18;
              pppppppuVar63[0x32] = pppppppuVar63 + 0x2b;
              pppppppuVar63[0x33] = pppppppuVar63 + 0x34;
              pppppppuVar63[0x34] = (undefined8 ******)0x0;
              pppppppuVar63[0x35] = (undefined8 ******)0x0;
              if (ppppppuVar25 != (undefined8 ******)0x0) {
                piVar1 = (int *)((long)ppppppuVar25 + 0x14);
                do {
                  cVar7 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar12) {
                    *piVar1 = *piVar1 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
              if (*(int *)((long)pppppppuVar22 + 0x154) < 3) {
                ppppppuVar18 = pppppppuVar22[0x33];
                ppppppuVar25 = pppppppuVar63[0x33];
                *ppppppuVar25 = *ppppppuVar18;
                ppppppuVar25[1] = ppppppuVar18[1];
              }
              else {
                *(undefined4 *)((long)pppppppuVar63 + 0x154) = 0;
                FUN_109a844cc(pppppppuVar63 + 0x2a,*(undefined4 *)((long)pppppppuVar22 + 0x154),0,0,
                              0);
                if (0 < *(int *)((long)pppppppuVar63 + 0x154)) {
                  lVar31 = 0;
                  ppppppuVar18 = pppppppuVar22[0x32];
                  ppppppuVar5 = pppppppuVar22[0x33];
                  ppppppuVar25 = pppppppuVar63[0x32];
                  ppppppuVar42 = pppppppuVar63[0x33];
                  do {
                    *(undefined4 *)((long)ppppppuVar25 + lVar31 * 4) =
                         *(undefined4 *)((long)ppppppuVar18 + lVar31 * 4);
                    ppppppuVar42[lVar31] = ppppppuVar5[lVar31];
                    lVar31 = lVar31 + 1;
                  } while (lVar31 < *(int *)((long)pppppppuVar63 + 0x154));
                }
              }
              pppppppuVar22 = pppppppuVar22 + 0x36;
              pppppppuVar63 = pppppppuStack_600 + 0x36;
            } while (pppppppuVar22 != pppppppuVar10);
            uStack_278 = CONCAT31(uStack_278._1_3_,1);
            pppppppuStack_600 = pppppppuVar63;
            do {
              if (pppppppuVar36[0x31] != (undefined8 ******)0x0) {
                piVar1 = (int *)((long)pppppppuVar36[0x31] + 0x14);
                do {
                  iVar6 = *piVar1;
                  cVar7 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar12) {
                    *piVar1 = iVar6 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar6 + -1 == 0) {
                  if (pppppppuVar36[0x31] != (undefined8 ******)0x0) {
                    ppppppuVar18 = (undefined8 ******)pppppppuVar36[0x31][1];
                    if (((ppppppuVar18 == (undefined8 ******)0x0) &&
                        (ppppppuVar18 = pppppppuVar36[0x30],
                        pppppppuVar36[0x30] == (undefined8 ******)0x0)) &&
                       (ppppppuVar18 = ppppppuRam000000011382bb80,
                       ppppppuRam000000011382bb80 == (undefined8 ******)0x0)) {
                      FUN_109a83e3c();
                      ppppppuVar18 = ppppppuRam000000011382bb80;
                    }
                    (*(code *)(*ppppppuVar18)[6])();
                  }
                  pppppppuVar36[0x31] = (undefined8 ******)0x0;
                }
              }
              pppppppuVar36[0x31] = (undefined8 ******)0x0;
              pppppppuVar36[0x2d] = (undefined8 ******)0x0;
              pppppppuVar36[0x2c] = (undefined8 ******)0x0;
              pppppppuVar36[0x2f] = (undefined8 ******)0x0;
              pppppppuVar36[0x2e] = (undefined8 ******)0x0;
              if (0 < *(int *)((long)pppppppuVar36 + 0x154)) {
                lVar31 = 0;
                ppppppuVar18 = pppppppuVar36[0x32];
                do {
                  *(undefined4 *)((long)ppppppuVar18 + lVar31 * 4) = 0;
                  lVar31 = lVar31 + 1;
                } while (lVar31 < *(int *)((long)pppppppuVar36 + 0x154));
              }
              pppppppuVar22 = (undefined8 *******)pppppppuVar36[0x33];
              if (pppppppuVar22 != pppppppuVar36 + 0x34 && pppppppuVar22 != (undefined8 *******)0x0)
              {
                _free(pppppppuVar22[-1]);
              }
              _free(pppppppuVar36[0xb]);
              pppppppuVar36 = pppppppuVar36 + 0x36;
              pppppppuVar22 = pppppppuStack_4e8;
            } while (pppppppuVar36 != pppppppuVar10);
          }
          pppppppuVar63 = pppppppuStack_4f0;
          FUN_10943b3c4(&pppppppuStack_290);
          pppppppuStack_4f0 = pppppppuStack_580;
          pppppppuStack_4e8 = pppppppuStack_570;
          pppppppuStack_4f8 = pppppppuStack_580;
          pppppppuStack_500 = pppppppuStack_580;
          pppppppuStack_580 = pppppppuVar2;
          pppppppuStack_578 = pppppppuVar63;
          pppppppuStack_570 = pppppppuVar22;
          FUN_10943b298(&pppppppuStack_500);
          plVar35 = plVar35 + 0x18;
          pppppppuStack_578 = pppppppuVar63;
        } while (plVar35 != plStack_6f0);
      }
LAB_109437b0c:
      dStack_5f8 = dStack_758;
      pppppppuStack_600 = pppppppuStack_760;
      ppppppuVar18 = (undefined8 ******)0x108;
      dStack_5f0 = dVar54;
      __Znwm();
      FUN_10997306c();
      pppppppuVar22 = pppppppuStack_578;
      pppppppuStack_680 = (undefined8 *******)ppppppuVar18;
      if (pppppppuStack_580 != pppppppuStack_578) {
        pppppppuVar63 = pppppppuStack_580 + 0xb;
        do {
          puVar19 = (undefined8 *)0x38;
          __Znwm();
          puVar20 = (undefined8 *)0x110;
          __Znwm();
          *puVar20 = pppppppuVar63[-0xb];
          ppppppuVar18 = pppppppuVar63[-9];
          puVar20[3] = pppppppuVar63[-8];
          puVar20[2] = ppppppuVar18;
          ppppppuVar18 = pppppppuVar63[-7];
          puVar20[5] = pppppppuVar63[-6];
          puVar20[4] = ppppppuVar18;
          ppppppuVar18 = pppppppuVar63[-5];
          puVar20[7] = pppppppuVar63[-4];
          puVar20[6] = ppppppuVar18;
          ppppppuVar18 = pppppppuVar63[-3];
          puVar20[9] = pppppppuVar63[-2];
          puVar20[8] = ppppppuVar18;
          *(undefined4 *)(puVar20 + 10) = *(undefined4 *)(pppppppuVar63 + -1);
          FUN_10937da58(puVar20 + 0xb,pppppppuVar63);
          ppppppuVar18 = pppppppuVar63[3];
          ppppppuVar25 = pppppppuVar63[5];
          ppppppuVar5 = pppppppuVar63[6];
          puVar20[0xf] = pppppppuVar63[4];
          puVar20[0xe] = ppppppuVar18;
          puVar20[0x11] = ppppppuVar5;
          puVar20[0x10] = ppppppuVar25;
          ppppppuVar18 = pppppppuVar63[7];
          ppppppuVar25 = pppppppuVar63[8];
          puVar20[0x14] = pppppppuVar63[9];
          puVar20[0x13] = ppppppuVar25;
          puVar20[0x12] = ppppppuVar18;
          ppppppuVar5 = pppppppuVar63[0xf];
          ppppppuVar42 = pppppppuVar63[0x10];
          ppppppuVar18 = pppppppuVar63[0x11];
          ppppppuVar25 = pppppppuVar63[0x12];
          ppppppuVar45 = pppppppuVar63[0xe];
          ppppppuVar41 = pppppppuVar63[0xd];
          puVar20[0x1e] = pppppppuVar63[0x13];
          puVar20[0x1b] = ppppppuVar42;
          puVar20[0x1a] = ppppppuVar5;
          puVar20[0x1d] = ppppppuVar25;
          puVar20[0x1c] = ppppppuVar18;
          puVar20[0x19] = ppppppuVar45;
          puVar20[0x18] = ppppppuVar41;
          ppppppuVar18 = pppppppuVar63[0xb];
          puVar20[0x17] = pppppppuVar63[0xc];
          puVar20[0x16] = ppppppuVar18;
          ppppppuVar18 = pppppppuVar63[0x17];
          puVar20[0x21] = pppppppuVar63[0x18];
          puVar20[0x20] = ppppppuVar18;
          puVar19[2] = 0;
          puVar19[3] = 0;
          *puVar19 = &PTR_FUN_110af6038;
          puVar19[1] = 0;
          *(undefined4 *)(puVar19 + 4) = 2;
          puVar21 = (undefined4 *)0x4;
          __Znwm();
          *puVar21 = 3;
          puVar19[2] = puVar21 + 1;
          puVar19[3] = puVar21 + 1;
          *puVar19 = &PTR_FUN_110af5fe0;
          puVar19[1] = puVar21;
          puVar19[5] = puVar20;
          *(undefined4 *)(puVar19 + 6) = 1;
          pppppppuStack_500 = &pppppppuStack_600;
          FUN_109973894(pppppppuStack_680,puVar19,0,&pppppppuStack_500,1);
          pppppppuVar36 = pppppppuVar63 + 0x2b;
          pppppppuVar63 = pppppppuVar63 + 0x36;
        } while (pppppppuVar36 != pppppppuVar22);
      }
      pppppppuStack_288 = (undefined8 *******)0x1;
      pppppppuStack_290 = (undefined8 *******)0x200000001;
      pppppppuStack_280 = (undefined8 *******)CONCAT35(pppppppuStack_280._5_3_,0x14);
      uStack_278 = 2;
      dStack_268 = 0.0001;
      dStack_270 = 1e-09;
      uStack_258 = 0x3fe3333333333333;
      dStack_260 = 0.001;
      uStack_250 = 0x500000014;
      uStack_240 = 0x4024000000000000;
      uStack_248 = 0x3feccccccccccccd;
      uStack_238 = 0;
      uStack_230 = 0;
      uStack_220 = 0x41cdcd6500000000;
      uStack_218 = 1;
      uStack_208 = 0x4341c37937e08000;
      uStack_210 = 0x40c3880000000000;
      uStack_1f8 = 0x3f50624dd2f1a9fc;
      uStack_200 = 0x3949f623d5a8a733;
      uStack_1e8 = 0x4693b8b5b5056e17;
      uStack_1f0 = 0x3eb0c6f7a0b5ed8d;
      uStack_1e0 = 5;
      uStack_1d0 = 0x3ddb7cdfd9d7bdbb;
      uStack_1d8 = 0x3eb0c6f7a0b5ed8d;
      uStack_1c8 = 0x3e45798ee2308c3a;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_1b8 = 0;
      uStack_190 = 0x3f800000;
      uStack_188 = 0x200000000;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_150 = 0x3f50624dd2f1a9fc;
      uStack_148 = 0x1f400000000;
      uStack_140 = 0x3fb999999999999a;
      uStack_138 = 1;
      uStack_130 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_128 = 0;
      uStack_f9 = 4;
      uStack_110 = 0x706d742f;
      uStack_10c = 0;
      uStack_f8 = 1;
      uStack_f4 = 0;
      uStack_e8 = 0x3eb0c6f7a0b5ed8d;
      uStack_f0 = 0x3e45798ee2308c3a;
      uStack_e0 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_d8 = 0;
      uStack_1c0 = 0x100000001;
      uStack_22c = 0x300000005;
      uStack_134 = 0;
      pppppppuStack_500 = (undefined8 *******)0x200000001;
      pppppppuVar22 = (undefined8 *******)0x20;
      __Znwm();
      pppppppuVar22[1] = (undefined8 ******)0x7361772065766c6f;
      *pppppppuVar22 = (undefined8 ******)0x533a3a7365726563;
      *(undefined8 *)((long)pppppppuVar22 + 0x14) = 0x2e64656c6c616320;
      *(undefined8 *)((long)pppppppuVar22 + 0xc) = 0x746f6e2073617720;
      *(undefined1 *)((long)pppppppuVar22 + 0x1c) = 0;
      auVar40 = NEON_fmov(0xbff0000000000000,8);
      pppppppuStack_4e8 = (undefined8 *******)0x8000000000000020;
      pppppppuStack_4f0 = (undefined8 *******)0x1c;
      uStack_4d8 = auVar40._8_8_;
      pppppppuStack_4e0 = auVar40._0_8_;
      uStack_4d0 = 0xbff0000000000000;
      uStack_4c8 = 0;
      uStack_4c0 = 0;
      uStack_4b8 = 0;
      uStack_4b0 = 0xffffffffffffffff;
      uStack_4a8 = 0xffffffffffffffff;
      uStack_480 = 0xbff0000000000000;
      uStack_478 = 0xffffffff;
      uStack_470 = 0xbff0000000000000;
      uStack_468 = 0xffffffff;
      uStack_460 = 0xbff0000000000000;
      uStack_458 = 0xffffffff;
      uStack_430 = 0xbff0000000000000;
      dStack_408 = -NAN;
      dStack_410 = -NAN;
      dStack_418 = -NAN;
      dStack_420 = -NAN;
      uStack_428 = 0xffffffffffffffff;
      uStack_400 = 0;
      uStack_3f4 = 0x200000002;
      uStack_3fc = 0xffffffffffffffff;
      uStack_3e8 = 0;
      uStack_3d0 = 0;
      uStack_3c0 = 0;
      uStack_3c8 = 0;
      uStack_3b0 = 0;
      uStack_3b8 = 0;
      uStack_3a0 = 0;
      uStack_3a8 = 0;
      uStack_390 = 0;
      uStack_398 = 0;
      uStack_388 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_340 = 0;
      uStack_330 = 0x200000001;
      uStack_338 = 0x200000004;
      uStack_328 = 0xffffffff00000000;
      pppppppuStack_4f8 = pppppppuVar22;
      pppppppuStack_4a0 = pppppppuStack_4e0;
      uStack_498 = uStack_4d8;
      pppppppuStack_490 = pppppppuStack_4e0;
      uStack_488 = uStack_4d8;
      pppppppuStack_450 = pppppppuStack_4e0;
      uStack_448 = uStack_4d8;
      pppppppuStack_440 = pppppppuStack_4e0;
      uStack_438 = uStack_4d8;
      FUN_1099a00a4();
      FUN_10943e408(&pppppppuStack_500);
      func_0x00010943e4cc(&pppppppuStack_290);
      pppppppuVar22 = pppppppuStack_680;
      pppppppuStack_680 = (undefined8 *******)0x0;
      if (pppppppuVar22 != (undefined8 *******)0x0) {
        FUN_1099733ec();
        __ZdlPv();
      }
      uVar23 = *puVar3;
      if (((100000.0 < ABS((double)pppppppuStack_600)) || (100000.0 < ABS(dStack_5f8))) ||
         (100000.0 < ABS(dStack_5f0))) {
        *(undefined4 *)(uVar23 + 0x50) = 0;
      }
      else {
        *(double *)(uVar23 + 0x10) = dStack_5f8;
        *(undefined8 ********)(uVar23 + 8) = pppppppuStack_600;
        *(double *)(uVar23 + 0x18) = dStack_5f0;
      }
      FUN_10943812c(&pppppppuStack_580);
      goto LAB_109436f70;
    }
    if ((long)plStack_6f0 - (long)plVar35 != 0xc0) {
      lStack_718 = 0;
      uVar23 = 0;
      uVar27 = 0;
      dVar54 = 0.0;
      uVar28 = 0;
      do {
        uVar29 = uVar28 + 1;
        uVar30 = ((long)plStack_6f0 - (long)plVar35 >> 6) * -0x5555555555555555;
        if (uVar29 < uVar30) {
          plVar26 = plVar35 + uVar28 * 0x18;
          lVar34 = *plVar26;
          uVar30 = uVar29;
          lVar31 = lStack_718;
          dVar44 = dVar54;
          do {
            lVar24 = *(long *)((long)plVar35 + lVar31 + 0xc0);
            dVar54 = dVar44;
            if (lVar34 != lVar24) {
              pppppppuStack_290 = (undefined8 *******)plVar26[4];
              pppppppuStack_288 = (undefined8 *******)plVar26[5];
              FUN_10937d7c8(&pppppppuStack_500,lVar34 + 0x20,&pppppppuStack_290);
              pppppppuVar63 = pppppppuStack_4f8;
              pppppppuVar22 = pppppppuStack_500;
              pppppppuStack_290 = *(undefined8 ********)((long)plVar35 + lVar31 + 0xe0);
              pppppppuStack_288 = *(undefined8 ********)((long)plVar35 + lVar31 + 0xe8);
              FUN_10937d7c8(&pppppppuStack_500,lVar24 + 0x20,&pppppppuStack_290);
              dVar37 = 1.0;
              dVar54 = (double)pppppppuVar22 * (double)pppppppuVar22 +
                       (double)pppppppuVar63 * (double)pppppppuVar63 + 1.0;
              if (0.0 < dVar54) {
                dVar54 = SQRT(dVar54);
                pppppppuVar22 = (undefined8 *******)((double)pppppppuVar22 / dVar54);
                pppppppuVar63 = (undefined8 *******)((double)pppppppuVar63 / dVar54);
                dVar37 = 1.0 / dVar54;
              }
              lVar34 = *plVar26;
              lVar24 = *(long *)((long)plVar35 + lVar31 + 0xc0);
              dVar46 = *(double *)(lVar34 + 0x2f8);
              dVar54 = *(double *)(lVar34 + 0x2f0);
              dVar48 = *(double *)(lVar24 + 0x2f0);
              dVar47 = *(double *)(lVar34 + 0x310);
              dVar43 = *(double *)(lVar34 + 0x308);
              dVar50 = *(double *)(lVar24 + 0x308);
              dVar53 = *(double *)(lVar34 + 0x328);
              dVar52 = *(double *)(lVar34 + 800);
              dVar55 = *(double *)(lVar24 + 800);
              dVar56 = *(double *)(lVar34 + 0x300);
              dVar57 = *(double *)(lVar34 + 0x318);
              dVar58 = *(double *)(lVar34 + 0x330);
              dVar51 = *(double *)(lVar24 + 0x2f8);
              dVar59 = *(double *)(lVar24 + 0x310);
              dVar61 = *(double *)(lVar24 + 0x328);
              dVar60 = *(double *)(lVar24 + 0x300);
              dVar62 = *(double *)(lVar24 + 0x318);
              dVar49 = *(double *)(lVar24 + 0x330);
              dVar43 = (dVar54 * dVar48 + dVar43 * dVar50 + dVar52 * dVar55) *
                       (double)pppppppuStack_500 +
                       (dVar54 * dVar51 + dVar43 * dVar59 + dVar52 * dVar61) *
                       (double)pppppppuStack_4f8 +
                       dVar54 * dVar60 + dVar43 * dVar62 + dVar52 * dVar49;
              dVar46 = (dVar46 * dVar48 + dVar47 * dVar50 + dVar53 * dVar55) *
                       (double)pppppppuStack_500 +
                       (dVar46 * dVar51 + dVar47 * dVar59 + dVar53 * dVar61) *
                       (double)pppppppuStack_4f8 +
                       dVar46 * dVar60 + dVar47 * dVar62 + dVar53 * dVar49;
              dVar54 = (dVar48 * dVar56 + dVar50 * dVar57 + dVar55 * dVar58) *
                       (double)pppppppuStack_500 +
                       (dVar56 * dVar51 + dVar57 * dVar59 + dVar58 * dVar61) *
                       (double)pppppppuStack_4f8 +
                       dVar56 * dVar60 + dVar57 * dVar62 + dVar58 * dVar49;
              dVar48 = dVar43 * dVar43 + dVar46 * dVar46 + dVar54 * dVar54;
              if (0.0 < dVar48) {
                dVar48 = SQRT(dVar48);
                dVar43 = dVar43 / dVar48;
                dVar46 = dVar46 / dVar48;
                dVar54 = dVar54 / dVar48;
              }
              dVar54 = (double)_acos(dVar37 * dVar54 +
                                     (double)pppppppuVar22 * dVar43 + (double)pppppppuVar63 * dVar46
                                    );
              uVar33 = uVar28;
              uVar8 = uVar30;
              if (dVar54 <= dVar44) {
                dVar54 = dVar44;
                uVar33 = uVar23;
                uVar8 = uVar27;
              }
              uVar27 = uVar8;
              uVar23 = uVar33;
              plVar35 = (long *)plVar32[3];
              plStack_6f0 = (long *)plVar32[4];
            }
            uVar30 = uVar30 + 1;
            lVar31 = lVar31 + 0xc0;
            dVar44 = dVar54;
          } while (uVar30 < (ulong)(((long)plStack_6f0 - (long)plVar35 >> 6) * -0x5555555555555555))
          ;
          uVar30 = ((long)plStack_6f0 - (long)plVar35 >> 6) * -0x5555555555555555;
        }
        lStack_718 = lStack_718 + 0xc0;
        uVar28 = uVar29;
      } while (uVar29 < uVar30 - 1);
      if (uVar23 == uVar27) {
        uVar23 = *puVar3;
      }
      else {
        plVar26 = plVar35 + uVar23 * 0x18;
        plVar35 = plVar35 + uVar27 * 0x18;
        lVar34 = *plVar26;
        lVar31 = *plVar35;
        pppppppuStack_500 = (undefined8 *******)plVar26[4];
        pppppppuStack_4f8 = (undefined8 *******)plVar26[5];
        FUN_10937d7c8(&dStack_6d0,lVar34 + 0x20,&pppppppuStack_500);
        pppppppuStack_500 = (undefined8 *******)plVar35[4];
        pppppppuStack_4f8 = (undefined8 *******)plVar35[5];
        FUN_10937d7c8(&dStack_6e0,lVar31 + 0x20,&pppppppuStack_500);
        FUN_10937fb1c(&pppppppuStack_580,lVar34 + 0x2b0);
        FUN_10937fb1c(&pppppppuStack_600,lVar31 + 0x2b0);
        pppppppuStack_680 =
             (undefined8 *******)
             (dStack_6d0 * (double)pppppppuStack_570 - (double)pppppppuStack_580);
        dStack_678 = dStack_6c8 * (double)pppppppuStack_570 - (double)pppppppuStack_578;
        dStack_660 = dStack_6d0 * dStack_550 - dStack_560;
        dStack_658 = dStack_6c8 * dStack_550 - dStack_558;
        dStack_640 = dStack_6d0 * dStack_530 - dStack_540;
        dStack_638 = dStack_6c8 * dStack_530 - dStack_538;
        dStack_620 = dStack_6d0 * dStack_510 - dStack_520;
        dStack_618 = dStack_6c8 * dStack_510 - dStack_518;
        dStack_670 = dStack_6e0 * dStack_5f0 - (double)pppppppuStack_600;
        dStack_668 = dStack_6d8 * dStack_5f0 - dStack_5f8;
        dStack_650 = dStack_6e0 * dStack_5d0 - dStack_5e0;
        dStack_648 = dStack_6d8 * dStack_5d0 - dStack_5d8;
        dStack_630 = dStack_6e0 * dStack_5b0 - dStack_5c0;
        dStack_628 = dStack_6d8 * dStack_5b0 - dStack_5b8;
        dStack_610 = dStack_6e0 * dStack_590 - dStack_5a0;
        dStack_608 = dStack_6d8 * dStack_590 - dStack_598;
        uStack_3d4 = 0;
        uStack_3c8 = 0xffffffffffffffff;
        uStack_3c0 = 0xffffffffffffffff;
        uStack_3b8 = 0;
        FUN_10943a88c(&pppppppuStack_500,&pppppppuStack_680);
        if (dStack_408 != 0.0) {
          dVar44 = dStack_420 / dStack_408;
          dVar37 = dStack_418 / dStack_408;
          dVar54 = dStack_410 / dStack_408;
          dStack_6a0 = dVar44;
          dStack_698 = dVar37;
          dStack_690 = dVar54;
          func_0x00010937fb68(&pppppppuStack_290,lVar34 + 0x2b0,&dStack_6a0);
          if ((0.0 < (double)pppppppuStack_280) &&
             (func_0x00010937fb68(auStack_6b8,lVar31 + 0x2b0,&dStack_6a0), 0.0 < dStack_6a8)) {
            dVar46 = ABS(dVar44);
            dVar43 = ABS(dVar37);
            bVar12 = false;
            bVar14 = false;
            bVar16 = false;
            if (ABS(dVar54) <= 100000.0) {
              bVar12 = false;
              bVar14 = false;
              bVar16 = true;
              if (!NAN(dVar46)) {
                bVar12 = dVar46 < 100000.0;
                bVar14 = dVar46 == 100000.0;
                bVar16 = false;
              }
            }
            bVar13 = false;
            bVar15 = false;
            bVar17 = false;
            if (bVar14 || bVar12 != bVar16) {
              bVar13 = false;
              bVar15 = false;
              bVar17 = true;
              if (!NAN(dVar43)) {
                bVar13 = dVar43 < 100000.0;
                bVar15 = dVar43 == 100000.0;
                bVar17 = false;
              }
            }
            if (bVar15 || bVar13 != bVar17) {
              FUN_10937f7d8(&pppppppuStack_290,lVar34 + 0x2b0);
              dVar48 = dStack_260;
              dVar46 = dStack_268;
              dVar43 = dStack_270;
              FUN_10937f7d8(&pppppppuStack_290,lVar31 + 0x2b0);
              dVar49 = dVar43 - dVar44;
              dVar47 = dVar46 - dVar37;
              dVar50 = dVar48 - dVar54;
              dVar47 = dVar50 * dVar50 + dVar49 * dVar49 + dVar47 * dVar47;
              dVar50 = (dStack_260 - dVar54) * (dStack_260 - dVar54) +
                       (dStack_270 - dVar44) * (dStack_270 - dVar44) +
                       (dStack_268 - dVar37) * (dStack_268 - dVar37);
              dVar51 = SQRT(dVar47 * dVar50);
              dVar51 = dVar51 + dVar51;
              dVar49 = 0.0;
              if (dVar51 != 0.0) {
                dVar48 = dVar48 - dStack_260;
                dVar43 = dVar43 - dStack_270;
                dVar46 = dVar46 - dStack_268;
                dVar43 = (double)_acos(((dVar47 + dVar50) -
                                       (dVar48 * dVar48 + dVar43 * dVar43 + dVar46 * dVar46)) /
                                       dVar51);
                dVar43 = ABS(dVar43);
                dVar49 = 3.141592653589793 - dVar43;
                if (dVar43 <= 3.141592653589793 - dVar43) {
                  dVar49 = dVar43;
                }
              }
              if (param_1 <= dVar49) {
                auVar38._8_8_ = (ulong)dVar37 >> 8;
                auVar38._0_8_ = (ulong)dVar44 >> 8 | (long)dVar37 << 0x38;
                auVar40 = NEON_ext(auVar38,auVar38,0xf,1);
                auVar39._1_15_ = auVar40._1_15_;
                auVar39[0] = SUB81(dVar44,0);
                dStack_758 = auVar40._8_8_;
                pppppppuStack_760 = auVar39._0_8_;
                plVar35 = (long *)plVar32[3];
                plStack_6f0 = (long *)plVar32[4];
                pppppppuStack_580 = (undefined8 *******)0x0;
                pppppppuStack_578 = (undefined8 *******)0x0;
                pppppppuStack_570 = (undefined8 *******)0x0;
                if (plVar35 != plStack_6f0) goto LAB_10943716c;
                goto LAB_109437b0c;
              }
            }
          }
        }
        uVar23 = *puVar3;
      }
    }
  }
  goto LAB_109436f6c;
}



/* Entry: 10943812c; end: 109438253;  */

long * FUN_10943812c(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *param_1;
  if (lVar8 != 0) {
    lVar9 = param_1[1];
    lVar6 = lVar8;
    if (lVar9 != lVar8) {
      do {
        if (*(long *)(lVar9 + -0x28) != 0) {
          piVar1 = (int *)(*(long *)(lVar9 + -0x28) + 0x14);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((iVar2 + -1 == 0) && (*(long *)(lVar9 + -0x28) != 0)) {
            plVar5 = *(long **)(*(long *)(lVar9 + -0x28) + 8);
            if ((plVar5 == (long *)0x0) &&
               ((plVar5 = *(long **)(lVar9 + -0x30), *(long **)(lVar9 + -0x30) == (long *)0x0 &&
                (plVar5 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
              FUN_109a83e3c();
              plVar5 = plRam000000011382bb80;
            }
            (**(code **)(*plVar5 + 0x30))();
          }
        }
        *(undefined8 *)(lVar9 + -0x28) = 0;
        *(undefined8 *)(lVar9 + -0x48) = 0;
        *(undefined8 *)(lVar9 + -0x50) = 0;
        *(undefined8 *)(lVar9 + -0x38) = 0;
        *(undefined8 *)(lVar9 + -0x40) = 0;
        if (0 < *(int *)(lVar9 + -0x5c)) {
          lVar6 = 0;
          lVar7 = *(long *)(lVar9 + -0x20);
          do {
            *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
            lVar6 = lVar6 + 1;
          } while (lVar6 < *(int *)(lVar9 + -0x5c));
        }
        lVar6 = *(long *)(lVar9 + -0x18);
        if (lVar6 != lVar9 + -0x10 && lVar6 != 0) {
          _free(*(undefined8 *)(lVar6 + -8));
        }
        lVar6 = lVar9 + -0x1b0;
        _free(*(undefined8 *)(lVar9 + -0x158));
        lVar9 = lVar6;
      } while (lVar6 != lVar8);
      lVar6 = *param_1;
    }
    param_1[1] = lVar8;
    __ZdlPv(lVar6);
  }
  return param_1;
}



/* Entry: 109438254; end: 10943a7fb;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_109438254(int *param_1,long *param_2,long *param_3)

{
  char cVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  undefined8 *******pppppppuVar16;
  undefined8 *******pppppppuVar17;
  int iVar18;
  undefined8 ******ppppppuVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  double dVar28;
  ulong uVar29;
  ulong uVar30;
  long *plVar31;
  ulong uVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  long lVar36;
  undefined8 uVar37;
  undefined8 *puVar38;
  double *pdVar39;
  char *pcVar40;
  undefined8 *******pppppppuVar41;
  int *piVar42;
  undefined8 ******ppppppuVar43;
  undefined8 *puVar44;
  double *pdVar45;
  double *pdVar46;
  undefined8 *puVar47;
  double dVar48;
  undefined8 uVar49;
  double dVar50;
  double dVar51;
  double extraout_d1;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  undefined8 *puStack_6b8;
  undefined8 *puStack_678;
  undefined8 *puStack_670;
  undefined8 *puStack_668;
  long *plStack_660;
  undefined8 *puStack_648;
  long *plStack_628;
  undefined8 *puStack_620;
  double dStack_610;
  double dStack_608;
  long lStack_600;
  long lStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined4 uStack_5d0;
  uint uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  double dStack_5c0;
  double dStack_5b8;
  double dStack_5b0;
  double dStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined1 uStack_580;
  undefined4 uStack_57c;
  int iStack_578;
  undefined8 uStack_570;
  undefined4 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined4 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined4 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined4 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined1 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined1 uStack_488;
  undefined4 uStack_484;
  undefined1 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined4 uStack_460;
  undefined1 uStack_45c;
  undefined1 uStack_449;
  undefined4 uStack_448;
  undefined1 uStack_444;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined1 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_410;
  ulong uStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  undefined4 uStack_3f0;
  long lStack_3e0;
  undefined8 *puStack_3d8;
  long *plStack_3d0;
  ulong uStack_3c8;
  float fStack_3c0;
  long lStack_3b0;
  undefined8 *******pppppppuStack_3a8;
  undefined8 *******pppppppuStack_3a0;
  long lStack_398;
  undefined8 *******pppppppuStack_390;
  undefined8 *******pppppppuStack_388;
  long lStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  double dStack_330;
  undefined8 *puStack_328;
  double dStack_320;
  double dStack_318;
  double dStack_310;
  double dStack_308;
  double dStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  double dStack_2d0;
  double dStack_2c8;
  double dStack_2c0;
  double dStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined8 uStack_290;
  undefined4 uStack_288;
  double dStack_280;
  double dStack_278;
  double dStack_270;
  double dStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 uStack_230;
  undefined8 uStack_22c;
  undefined8 uStack_224;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined2 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_380 = 0;
  pppppppuStack_388 = (undefined8 *******)0x0;
  puVar14 = (undefined8 *)*param_2;
  puVar44 = (undefined8 *)param_2[1];
  puVar11 = (undefined8 *)((long)puVar44 - (long)puVar14);
  pppppppuStack_390 = &pppppppuStack_388;
  if (puVar11 == (undefined8 *)0x0) {
    lStack_5e8 = 0;
    puStack_678 = (undefined8 *)0x0;
    puVar11 = (undefined8 *)0x0;
    puStack_620 = (undefined8 *)0x0;
    puStack_648 = (undefined8 *)0x0;
    puVar14 = (undefined8 *)*param_3;
    puStack_668 = (undefined8 *)param_3[1];
    plStack_660 = (long *)((long)puStack_668 - (long)puVar14);
    if (plStack_660 != (long *)0x0) goto LAB_10943891c;
LAB_109438e28:
    uVar37 = 0;
joined_r0x000109438e30:
    if (lStack_5e8 != 0) {
      __ZdlPv();
    }
    if (puVar11 != (undefined8 *)0x0) {
      __ZdlPv(puVar11);
    }
    func_0x00010943e5b4(pppppppuStack_388);
    if (puStack_648 != (undefined8 *)0x0) {
      __ZdlPv(puStack_648);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      return uVar37;
    }
    ___stack_chk_fail();
  }
  else if (-1 < (long)puVar11) {
    puStack_648 = puVar11;
    __Znwm();
    puStack_678 = (undefined8 *)0x0;
    plStack_660 = (undefined8 *)0x0;
    lStack_5e8 = 0;
    pdVar45 = (double *)0x0;
    pdVar39 = (double *)0x0;
    plStack_628 = (long *)((long)puStack_648 + (long)puVar11);
    puVar47 = (undefined8 *)0x0;
    puStack_620 = puStack_648;
    do {
      ppppppuVar43 = (undefined8 ******)*puVar14;
      puVar11 = puVar47;
      if ((*(int *)ppppppuVar43 != 0) &&
         (pppppppuVar16 = pppppppuStack_388, pppppppuVar17 = &pppppppuStack_388,
         ppppppuVar43[0x7e] != ppppppuVar43[0x7d])) {
        while (pppppppuVar41 = pppppppuVar17, pppppppuVar16 != (undefined8 *******)0x0) {
          while (pppppppuVar17 = pppppppuVar16, pppppppuVar17[4] <= ppppppuVar43) {
            if (ppppppuVar43 <= pppppppuVar17[4]) goto LAB_1094383b4;
            pppppppuVar16 = (undefined8 *******)pppppppuVar17[1];
            if ((undefined8 *******)pppppppuVar17[1] == (undefined8 *******)0x0) {
              pppppppuVar41 = pppppppuVar17 + 1;
              goto LAB_109438364;
            }
          }
          pppppppuVar16 = (undefined8 *******)*pppppppuVar17;
        }
LAB_109438364:
        pppppppuVar10 = (undefined8 *******)0x30;
        __Znwm();
        pppppppuVar10[4] = ppppppuVar43;
        pppppppuVar10[5] = (undefined8 ******)0x0;
        *pppppppuVar10 = (undefined8 ******)0x0;
        pppppppuVar10[1] = (undefined8 ******)0x0;
        pppppppuVar10[2] = pppppppuVar17;
        *pppppppuVar41 = pppppppuVar10;
        pppppppuVar16 = pppppppuVar10;
        if ((undefined8 *******)*pppppppuStack_390 != (undefined8 *******)0x0) {
          pppppppuVar16 = (undefined8 *******)*pppppppuVar41;
          pppppppuStack_390 = (undefined8 *******)*pppppppuStack_390;
        }
        func_0x000107c27d40(pppppppuStack_388,pppppppuVar16);
        lStack_380 = lStack_380 + 1;
        pppppppuVar17 = pppppppuVar10;
LAB_1094383b4:
        ppppppuVar19 = (undefined8 ******)((long)puStack_620 - (long)puStack_648 >> 3);
        pppppppuVar17[5] = ppppppuVar19;
        if (puStack_620 < plStack_628) {
          *puStack_620 = ppppppuVar43;
        }
        else {
          uVar30 = (long)ppppppuVar19 + 1;
          if (uVar30 >> 0x3d != 0) {
            FUN_10942ca5c();
            goto LAB_10943a5cc;
          }
          uVar27 = (long)plStack_628 - (long)puStack_648 >> 2;
          if (uVar27 <= uVar30) {
            uVar27 = uVar30;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)plStack_628 - (long)puStack_648)) {
            uVar27 = 0x1fffffffffffffff;
          }
          if (uVar27 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_10943a5cc;
          }
          puVar33 = (undefined8 *)(uVar27 << 3);
          __Znwm();
          puStack_620 = (undefined8 *)((long)puVar33 + ((long)puStack_620 - (long)puStack_648));
          *puStack_620 = ppppppuVar43;
          _memcpy();
          plStack_628 = puVar33 + uVar27;
          __ZdlPv(puStack_648);
          puStack_648 = puVar33;
        }
        puVar33 = puStack_620;
        FUN_1093804f0(&dStack_330,ppppppuVar43 + 0x56);
        dVar50 = dStack_318;
        dVar28 = dStack_320;
        dVar48 = dStack_330 * dStack_318;
        dVar51 = (double)puStack_328 * dStack_318;
        if (pdVar45 < pdVar39) {
          *pdVar45 = dVar48;
          pdVar45 = pdVar45 + 1;
          if (pdVar45 < pdVar39) goto LAB_109438490;
LAB_1094385d4:
          uVar30 = ((long)pdVar45 - lStack_5e8 >> 3) + 1;
          if (uVar30 >> 0x3d != 0) {
            FUN_1092d2ba8(dVar48);
            goto LAB_10943a5cc;
          }
          uVar27 = (long)pdVar39 - lStack_5e8 >> 2;
          if (uVar27 <= uVar30) {
            uVar27 = uVar30;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)pdVar39 - lStack_5e8)) {
            uVar27 = 0x1fffffffffffffff;
          }
          if (uVar27 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_10943a5cc;
          }
          lVar36 = uVar27 << 3;
          __Znwm();
          pdVar45 = (double *)(lVar36 + ((long)pdVar45 - lStack_5e8));
          pdVar39 = (double *)(lVar36 + uVar27 * 8);
          *pdVar45 = dVar51;
          pdVar45 = pdVar45 + 1;
          _memcpy(dVar48);
          if (lStack_5e8 != 0) {
            __ZdlPv(lStack_5e8);
          }
          lStack_5e8 = lVar36;
          if (pdVar39 <= pdVar45) goto LAB_10943865c;
LAB_1094384a0:
          pdVar46 = pdVar45 + 1;
          *pdVar45 = dVar50 * dVar28;
          if (pdVar46 < pdVar39) goto LAB_1094384ac;
LAB_1094386d8:
          uVar30 = ((long)pdVar46 - lStack_5e8 >> 3) + 1;
          if (uVar30 >> 0x3d != 0) {
            FUN_1092d2ba8();
            goto LAB_10943a5cc;
          }
          uVar27 = (long)pdVar39 - lStack_5e8 >> 2;
          if (uVar27 <= uVar30) {
            uVar27 = uVar30;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)pdVar39 - lStack_5e8)) {
            uVar27 = 0x1fffffffffffffff;
          }
          if (uVar27 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_10943a5cc;
          }
          lVar36 = uVar27 << 3;
          __Znwm();
          puVar38 = (undefined8 *)(lVar36 + ((long)pdVar46 - lStack_5e8));
          pdVar39 = (double *)(lVar36 + uVar27 * 8);
          pdVar45 = (double *)(puVar38 + 1);
          *puVar38 = ppppppuVar43[0x5a];
          _memcpy();
          if (lStack_5e8 != 0) {
            __ZdlPv(lStack_5e8);
          }
          lStack_5e8 = lVar36;
          if (pdVar39 <= pdVar45) goto LAB_109438758;
LAB_1094384bc:
          pdVar46 = pdVar45 + 1;
          *pdVar45 = (double)ppppppuVar43[0x5b];
          if (pdVar46 < pdVar39) goto LAB_1094384cc;
LAB_1094387d8:
          uVar30 = ((long)pdVar46 - lStack_5e8 >> 3) + 1;
          if (uVar30 >> 0x3d != 0) {
            FUN_1092d2ba8();
            goto LAB_10943a5cc;
          }
          uVar27 = (long)pdVar39 - lStack_5e8 >> 2;
          if (uVar27 <= uVar30) {
            uVar27 = uVar30;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)pdVar39 - lStack_5e8)) {
            uVar27 = 0x1fffffffffffffff;
          }
          if (uVar27 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_10943a5cc;
          }
          lVar36 = uVar27 << 3;
          __Znwm();
          puVar38 = (undefined8 *)(lVar36 + ((long)pdVar46 - lStack_5e8));
          pdVar39 = (double *)(lVar36 + uVar27 * 8);
          pdVar45 = (double *)(puVar38 + 1);
          *puVar38 = ppppppuVar43[0x5c];
          _memcpy();
          if (lStack_5e8 != 0) {
            __ZdlPv(lStack_5e8);
          }
          iVar18 = *param_1;
          lStack_5e8 = lVar36;
          if (iVar18 == 0) goto LAB_109438868;
LAB_1094384ec:
          puStack_620 = puStack_620 + 1;
          if (iVar18 == 1) {
            if (plStack_660 <= puStack_678) {
              lVar36 = (long)puStack_678 - (long)puVar47;
              uVar30 = (lVar36 >> 3) + 1;
              if (uVar30 >> 0x3d == 0) {
                uVar27 = (long)plStack_660 - (long)puVar47 >> 2;
                if (uVar27 <= uVar30) {
                  uVar27 = uVar30;
                }
                if (0x7ffffffffffffff7 < (ulong)((long)plStack_660 - (long)puVar47)) {
                  uVar27 = 0x1fffffffffffffff;
                }
                if (uVar27 >> 0x3d == 0) {
                  puVar11 = (undefined8 *)(uVar27 << 3);
                  __Znwm();
                  goto LAB_1094388c8;
                }
LAB_10943a59c:
                func_0x000104c4f740();
              }
              else {
LAB_10943a5a4:
                FUN_10942ca5c();
              }
              goto LAB_10943a5cc;
            }
LAB_1094382f8:
            puStack_620 = puVar33 + 1;
            *puStack_678 = ppppppuVar43;
            puStack_678 = puStack_678 + 1;
          }
        }
        else {
          uVar30 = ((long)pdVar45 - lStack_5e8 >> 3) + 1;
          if (uVar30 >> 0x3d != 0) {
            FUN_1092d2ba8();
            goto LAB_10943a5cc;
          }
          uVar27 = (long)pdVar39 - lStack_5e8 >> 2;
          if (uVar27 <= uVar30) {
            uVar27 = uVar30;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)pdVar39 - lStack_5e8)) {
            uVar27 = 0x1fffffffffffffff;
          }
          if (uVar27 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_10943a5cc;
          }
          lVar36 = uVar27 << 3;
          __Znwm();
          pdVar45 = (double *)(lVar36 + ((long)pdVar45 - lStack_5e8));
          pdVar39 = (double *)(lVar36 + uVar27 * 8);
          *pdVar45 = dVar48;
          pdVar45 = pdVar45 + 1;
          _memcpy();
          if (lStack_5e8 != 0) {
            __ZdlPv(lStack_5e8);
          }
          lStack_5e8 = lVar36;
          if (pdVar39 <= pdVar45) goto LAB_1094385d4;
LAB_109438490:
          *pdVar45 = dVar51;
          pdVar45 = pdVar45 + 1;
          if (pdVar45 < pdVar39) goto LAB_1094384a0;
LAB_10943865c:
          uVar30 = ((long)pdVar45 - lStack_5e8 >> 3) + 1;
          if (uVar30 >> 0x3d != 0) {
            FUN_1092d2ba8();
            goto LAB_10943a5cc;
          }
          uVar27 = (long)pdVar39 - lStack_5e8 >> 2;
          if (uVar27 <= uVar30) {
            uVar27 = uVar30;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)pdVar39 - lStack_5e8)) {
            uVar27 = 0x1fffffffffffffff;
          }
          if (uVar27 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_10943a5cc;
          }
          lVar36 = uVar27 << 3;
          __Znwm();
          pdVar45 = (double *)(lVar36 + ((long)pdVar45 - lStack_5e8));
          pdVar39 = (double *)(lVar36 + uVar27 * 8);
          pdVar46 = pdVar45 + 1;
          *pdVar45 = dVar50 * dVar28;
          _memcpy();
          if (lStack_5e8 != 0) {
            __ZdlPv(lStack_5e8);
          }
          lStack_5e8 = lVar36;
          if (pdVar39 <= pdVar46) goto LAB_1094386d8;
LAB_1094384ac:
          pdVar45 = pdVar46 + 1;
          *pdVar46 = (double)ppppppuVar43[0x5a];
          if (pdVar45 < pdVar39) goto LAB_1094384bc;
LAB_109438758:
          uVar30 = ((long)pdVar45 - lStack_5e8 >> 3) + 1;
          if (uVar30 >> 0x3d != 0) {
            FUN_1092d2ba8();
            goto LAB_10943a5cc;
          }
          uVar27 = (long)pdVar39 - lStack_5e8 >> 2;
          if (uVar27 <= uVar30) {
            uVar27 = uVar30;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)pdVar39 - lStack_5e8)) {
            uVar27 = 0x1fffffffffffffff;
          }
          if (uVar27 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_10943a5cc;
          }
          lVar36 = uVar27 << 3;
          __Znwm();
          puVar38 = (undefined8 *)(lVar36 + ((long)pdVar45 - lStack_5e8));
          pdVar39 = (double *)(lVar36 + uVar27 * 8);
          pdVar46 = (double *)(puVar38 + 1);
          *puVar38 = ppppppuVar43[0x5b];
          _memcpy();
          if (lStack_5e8 != 0) {
            __ZdlPv(lStack_5e8);
          }
          lStack_5e8 = lVar36;
          if (pdVar39 <= pdVar46) goto LAB_1094387d8;
LAB_1094384cc:
          pdVar45 = pdVar46 + 1;
          *pdVar46 = (double)ppppppuVar43[0x5c];
          iVar18 = *param_1;
          if (iVar18 != 0) goto LAB_1094384ec;
LAB_109438868:
          puStack_620 = puStack_620 + 1;
          if (*(int *)ppppppuVar43 != 4) goto LAB_109438300;
          if (puStack_678 < plStack_660) goto LAB_1094382f8;
          lVar36 = (long)puStack_678 - (long)puVar47;
          uVar30 = (lVar36 >> 3) + 1;
          if (uVar30 >> 0x3d != 0) goto LAB_10943a5a4;
          uVar27 = (long)plStack_660 - (long)puVar47 >> 2;
          if (uVar27 <= uVar30) {
            uVar27 = uVar30;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)plStack_660 - (long)puVar47)) {
            uVar27 = 0x1fffffffffffffff;
          }
          if (uVar27 >> 0x3d != 0) goto LAB_10943a59c;
          puVar11 = (undefined8 *)(uVar27 << 3);
          __Znwm();
LAB_1094388c8:
          puStack_620 = puVar33 + 1;
          plStack_660 = puVar11 + uVar27;
          puStack_678 = (undefined8 *)((long)puVar11 + lVar36) + 1;
          *(undefined8 *)((long)puVar11 + lVar36) = ppppppuVar43;
          _memcpy();
          if (puVar47 != (undefined8 *)0x0) {
            __ZdlPv(puVar47);
          }
        }
      }
LAB_109438300:
      puVar14 = puVar14 + 1;
      puVar47 = puVar11;
    } while (puVar14 != puVar44);
    puVar14 = (undefined8 *)*param_3;
    puStack_668 = (undefined8 *)param_3[1];
    plStack_660 = (long *)((long)puStack_668 - (long)puVar14);
    if (plStack_660 == (long *)0x0) goto LAB_109438e28;
LAB_10943891c:
    if ((long)plStack_660 < 0) {
      FUN_10942bc54();
      goto LAB_10943a5cc;
    }
    plVar31 = plStack_660;
    __Znwm();
    puStack_670 = (undefined8 *)0x0;
    puStack_6b8 = (undefined8 *)0x0;
    lStack_600 = 0;
    puVar47 = (undefined8 *)0x0;
    puVar44 = (undefined8 *)0x0;
    plStack_660 = (long *)((long)plVar31 + (long)plStack_660);
    lStack_398 = 0;
    pppppppuStack_3a0 = (undefined8 *******)0x0;
    puVar33 = (undefined8 *)0x0;
    plStack_628 = plVar31;
    pppppppuStack_3a8 = &pppppppuStack_3a0;
    do {
      ppppppuVar43 = (undefined8 ******)*puVar14;
      pppppppuVar17 = pppppppuStack_3a0;
      puVar38 = puVar33;
      pppppppuVar16 = &pppppppuStack_3a0;
      puVar12 = puStack_6b8;
      if (*(int *)(ppppppuVar43 + 10) != 0) {
        while (pppppppuVar41 = pppppppuVar16, pppppppuVar17 != (undefined8 *******)0x0) {
          while (pppppppuVar10 = pppppppuVar17, pppppppuVar10[4] <= ppppppuVar43) {
            if (ppppppuVar43 <= pppppppuVar10[4]) goto LAB_109438a30;
            pppppppuVar17 = (undefined8 *******)pppppppuVar10[1];
            if ((undefined8 *******)pppppppuVar10[1] == (undefined8 *******)0x0) {
              pppppppuVar16 = pppppppuVar10 + 1;
              pppppppuVar41 = pppppppuVar10;
              goto LAB_1094389e0;
            }
          }
          pppppppuVar16 = pppppppuVar10;
          pppppppuVar17 = (undefined8 *******)*pppppppuVar10;
        }
LAB_1094389e0:
        pppppppuVar10 = (undefined8 *******)0x30;
        __Znwm();
        pppppppuVar10[4] = ppppppuVar43;
        pppppppuVar10[5] = (undefined8 ******)0x0;
        *pppppppuVar10 = (undefined8 ******)0x0;
        pppppppuVar10[1] = (undefined8 ******)0x0;
        pppppppuVar10[2] = pppppppuVar41;
        *pppppppuVar16 = pppppppuVar10;
        pppppppuVar17 = pppppppuVar10;
        if ((undefined8 *******)*pppppppuStack_3a8 != (undefined8 *******)0x0) {
          pppppppuVar17 = (undefined8 *******)*pppppppuVar16;
          pppppppuStack_3a8 = (undefined8 *******)*pppppppuStack_3a8;
        }
        func_0x000107c27d40(pppppppuStack_3a0,pppppppuVar17);
        lStack_398 = lStack_398 + 1;
LAB_109438a30:
        ppppppuVar19 = (undefined8 ******)((long)plVar31 - (long)plStack_628 >> 3);
        pppppppuVar10[5] = ppppppuVar19;
        if (plVar31 < plStack_660) {
          *plVar31 = (long)ppppppuVar43;
          if (puVar47 < puVar44) goto LAB_109438a5c;
LAB_109438af0:
          uVar30 = ((long)puVar47 - lStack_600 >> 3) + 1;
          if (uVar30 >> 0x3d != 0) {
            FUN_1092d2ba8();
            goto LAB_10943a5cc;
          }
          uVar27 = (long)puVar44 - lStack_600 >> 2;
          if (uVar27 <= uVar30) {
            uVar27 = uVar30;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)puVar44 - lStack_600)) {
            uVar27 = 0x1fffffffffffffff;
          }
          if (uVar27 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_10943a5cc;
          }
          lVar36 = uVar27 << 3;
          __Znwm();
          puVar47 = (undefined8 *)(lVar36 + ((long)puVar47 - lStack_600));
          puVar44 = (undefined8 *)(lVar36 + uVar27 * 8);
          puVar34 = puVar47 + 1;
          *puVar47 = ppppppuVar43[1];
          _memcpy();
          plVar20 = plVar31;
          if (lStack_600 != 0) {
            __ZdlPv(lStack_600);
          }
        }
        else {
          uVar30 = (long)ppppppuVar19 + 1;
          if (uVar30 >> 0x3d != 0) {
            FUN_10942bc54();
            goto LAB_10943a5cc;
          }
          uVar27 = (long)plStack_660 - (long)plStack_628 >> 2;
          if (uVar27 <= uVar30) {
            uVar27 = uVar30;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)plStack_660 - (long)plStack_628)) {
            uVar27 = 0x1fffffffffffffff;
          }
          if (uVar27 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_10943a5cc;
          }
          plVar20 = (long *)(uVar27 << 3);
          __Znwm();
          plVar31 = (long *)((long)plVar20 + ((long)plVar31 - (long)plStack_628));
          *plVar31 = (long)ppppppuVar43;
          _memcpy();
          plStack_660 = plVar20 + uVar27;
          __ZdlPv(plStack_628);
          plStack_628 = plVar20;
          if (puVar44 <= puVar47) goto LAB_109438af0;
LAB_109438a5c:
          puVar34 = puVar47 + 1;
          *puVar47 = ppppppuVar43[1];
          plVar20 = plVar31;
          lVar36 = lStack_600;
        }
        if (puVar34 < puVar44) {
          puVar47 = puVar34 + 1;
          *puVar34 = ppppppuVar43[2];
          lStack_600 = lVar36;
        }
        else {
          uVar30 = ((long)puVar34 - lVar36 >> 3) + 1;
          if (uVar30 >> 0x3d != 0) {
            FUN_1092d2ba8();
            goto LAB_10943a5cc;
          }
          uVar27 = (long)puVar44 - lVar36 >> 2;
          if (uVar27 <= uVar30) {
            uVar27 = uVar30;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)puVar44 - lVar36)) {
            uVar27 = 0x1fffffffffffffff;
          }
          if (uVar27 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_10943a5cc;
          }
          lStack_600 = uVar27 << 3;
          __Znwm();
          puVar34 = (undefined8 *)(lStack_600 + ((long)puVar34 - lVar36));
          puVar44 = (undefined8 *)(lStack_600 + uVar27 * 8);
          puVar47 = puVar34 + 1;
          *puVar34 = ppppppuVar43[2];
          _memcpy();
          if (lVar36 != 0) {
            __ZdlPv(lVar36);
          }
        }
        if (puVar47 < puVar44) {
          *puVar47 = ppppppuVar43[3];
          cVar1 = (char)param_1[1];
        }
        else {
          uVar30 = ((long)puVar47 - lStack_600 >> 3) + 1;
          if (uVar30 >> 0x3d != 0) {
            FUN_1092d2ba8();
            goto LAB_10943a5cc;
          }
          uVar27 = (long)puVar44 - lStack_600 >> 2;
          if (uVar27 <= uVar30) {
            uVar27 = uVar30;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)puVar44 - lStack_600)) {
            uVar27 = 0x1fffffffffffffff;
          }
          if (uVar27 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_10943a5cc;
          }
          lVar36 = uVar27 << 3;
          __Znwm();
          puVar47 = (undefined8 *)(lVar36 + ((long)puVar47 - lStack_600));
          puVar44 = (undefined8 *)(lVar36 + uVar27 * 8);
          *puVar47 = ppppppuVar43[3];
          _memcpy();
          if (lStack_600 != 0) {
            __ZdlPv(lStack_600);
          }
          cVar1 = (char)param_1[1];
          lStack_600 = lVar36;
        }
        plVar31 = plVar20 + 1;
        puVar47 = puVar47 + 1;
        if ((cVar1 == '\x01') && (plVar31 = plVar20 + 1, *(int *)(ppppppuVar43 + 10) == 3)) {
          if (puVar33 < puStack_670) {
            puVar38 = puVar33 + 1;
            *puVar33 = ppppppuVar43;
          }
          else {
            uVar30 = ((long)puVar33 - (long)puStack_6b8 >> 3) + 1;
            if (uVar30 >> 0x3d != 0) {
              FUN_10942bc54();
              goto LAB_10943a5cc;
            }
            uVar27 = (long)puStack_670 - (long)puStack_6b8 >> 2;
            if (uVar27 <= uVar30) {
              uVar27 = uVar30;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)puStack_670 - (long)puStack_6b8)) {
              uVar27 = 0x1fffffffffffffff;
            }
            if (uVar27 >> 0x3d != 0) {
              func_0x000104c4f740();
              goto LAB_10943a5cc;
            }
            puVar12 = (undefined8 *)(uVar27 << 3);
            __Znwm();
            puVar33 = (undefined8 *)((long)puVar12 + ((long)puVar33 - (long)puStack_6b8));
            puStack_670 = puVar12 + uVar27;
            puVar38 = puVar33 + 1;
            *puVar33 = ppppppuVar43;
            _memcpy();
            if (puStack_6b8 != (undefined8 *)0x0) {
              __ZdlPv(puStack_6b8);
            }
          }
        }
      }
      puStack_6b8 = puVar12;
      puVar14 = puVar14 + 1;
      puVar33 = puVar38;
    } while (puVar14 != puStack_668);
    puStack_670 = (undefined8 *)((long)puStack_620 - (long)puStack_648 >> 3);
    if (puStack_670 < 2) {
      func_0x00010943e5f0(&pppppppuStack_3a8,pppppppuStack_3a0);
joined_r0x00010943a4dc:
      uVar37 = 0;
    }
    else {
      if ((long)plVar31 - (long)plStack_628 == 0) {
        func_0x00010943e5f0(&pppppppuStack_3a8,pppppppuStack_3a0);
        goto joined_r0x00010943a4dc;
      }
      lVar13 = 0x108;
      __Znwm();
      FUN_10997306c();
      uVar30 = 0;
      lVar36 = (long)plVar31 - (long)plStack_628 >> 3;
      puStack_3d8 = (undefined8 *)0x0;
      lStack_3e0 = 0;
      uStack_3c8 = 0;
      plStack_3d0 = (long *)0x0;
      fStack_3c0 = 1.0;
      uStack_408 = 0;
      lStack_410 = 0;
      uStack_3f8 = 0;
      lStack_400 = 0;
      uStack_3f0 = 0x3f800000;
      lStack_3b0 = lVar13;
      do {
        plVar31 = puStack_648 + uVar30;
        puStack_668 = (undefined8 *)*plVar31;
        lVar13 = *(long *)((long)puStack_668 + 0x3f0);
        lVar25 = *(long *)((long)puStack_668 + 1000);
        if (lVar13 == lVar25) {
LAB_109438ec8:
          *(undefined4 *)puStack_668 = 0;
        }
        else {
          iVar18 = 0;
          uVar27 = 0;
          dVar28 = (double)(lStack_5e8 + uVar30 * 0x30);
          do {
            pcVar40 = (char *)(lVar25 + uVar27 * 0xd0);
            if ((*pcVar40 == '\x01') && (pppppppuStack_3a0 != (undefined8 *******)0x0)) {
              ppppppuVar43 = *(undefined8 *******)(pcVar40 + 8);
              pppppppuVar16 = pppppppuStack_3a0;
LAB_109438f78:
              if (ppppppuVar43 < pppppppuVar16[4]) goto LAB_109438f70;
              if (pppppppuVar16[4] < ppppppuVar43) {
                pppppppuVar16 = pppppppuVar16 + 1;
                goto LAB_109438f70;
              }
              dVar50 = *(double *)(param_1 + 6);
              if (param_1[2] == 0) {
                puVar14 = (undefined8 *)0x18;
                __Znwm();
                *puVar14 = &PTR_DAT_110b1ef40;
                puVar14[1] = dVar50 * dVar50;
                puVar14[2] = 1.0 / (dVar50 * dVar50);
              }
              else if (param_1[2] == 1) {
                puVar14 = (undefined8 *)0x18;
                __Znwm();
                *puVar14 = &PTR_FUN_110b1ef00;
                puVar14[1] = dVar50;
                puVar14[2] = dVar50 * dVar50;
              }
              else {
                puVar14 = (undefined8 *)0x0;
              }
              lVar13 = *plVar31;
              puVar44 = (undefined8 *)0x38;
              __Znwm();
              puVar47 = (undefined8 *)0x80;
              __Znwm();
              puVar47[0xd] = 0;
              puVar47[0xe] = 0;
              uVar37 = *(undefined8 *)(pcVar40 + 0x20);
              puVar47[1] = *(undefined8 *)(pcVar40 + 0x28);
              *puVar47 = uVar37;
              puVar47[2] = *(undefined8 *)(lVar13 + 0x20);
              uVar37 = *(undefined8 *)(lVar13 + 0x30);
              puVar47[5] = *(undefined8 *)(lVar13 + 0x38);
              puVar47[4] = uVar37;
              uVar37 = *(undefined8 *)(lVar13 + 0x40);
              puVar47[7] = *(undefined8 *)(lVar13 + 0x48);
              puVar47[6] = uVar37;
              uVar37 = *(undefined8 *)(lVar13 + 0x50);
              puVar47[9] = *(undefined8 *)(lVar13 + 0x58);
              puVar47[8] = uVar37;
              uVar37 = *(undefined8 *)(lVar13 + 0x60);
              puVar47[0xb] = *(undefined8 *)(lVar13 + 0x68);
              puVar47[10] = uVar37;
              *(undefined4 *)(puVar47 + 0xc) = *(undefined4 *)(lVar13 + 0x70);
              if (*(long *)(lVar13 + 0x80) != 0) {
                puVar12 = *(undefined8 **)(lVar13 + 0x78);
                FUN_10942c088(puVar47 + 0xd,*(long *)(lVar13 + 0x80),1);
                puVar33 = (undefined8 *)puVar47[0xd];
                lVar13 = puVar47[0xe];
                uVar29 = lVar13 - (lVar13 >> 0x3f) & 0xfffffffffffffffe;
                if (1 < lVar13) {
                  lVar25 = 0;
                  puVar34 = puVar33;
                  puVar35 = puVar12;
                  do {
                    uVar37 = *puVar35;
                    puVar34[1] = puVar35[1];
                    *puVar34 = uVar37;
                    lVar25 = lVar25 + 2;
                    puVar34 = puVar34 + 2;
                    puVar35 = puVar35 + 2;
                  } while (lVar25 < (long)uVar29);
                }
                uVar26 = lVar13 % 2;
                if (uVar26 != 0 && (long)uVar29 <= lVar13) {
                  if ((3 < uVar26) && (0x1f < (ulong)((long)puVar33 - (long)puVar12))) {
                    uVar32 = uVar26 & 0xfffffffffffffffc;
                    uVar29 = uVar29 + uVar32;
                    puVar34 = puVar12 + (lVar13 / 2) * 2 + 2;
                    puVar35 = puVar33 + (lVar13 / 2) * 2 + 2;
                    uVar23 = uVar32;
                    do {
                      uVar49 = puVar34[-2];
                      uVar37 = *puVar34;
                      uVar2 = puVar34[1];
                      puVar35[-1] = puVar34[-1];
                      puVar35[-2] = uVar49;
                      puVar35[1] = uVar2;
                      *puVar35 = uVar37;
                      puVar34 = puVar34 + 4;
                      puVar35 = puVar35 + 4;
                      uVar23 = uVar23 - 4;
                    } while (uVar23 != 0);
                    if (uVar26 == uVar32) goto LAB_109439120;
                  }
                  lVar13 = lVar13 - uVar29;
                  puVar33 = puVar33 + uVar29;
                  puVar12 = puVar12 + uVar29;
                  do {
                    *puVar33 = *puVar12;
                    lVar13 = lVar13 + -1;
                    puVar33 = puVar33 + 1;
                    puVar12 = puVar12 + 1;
                  } while (lVar13 != 0);
                }
              }
LAB_109439120:
              puVar44[2] = 0;
              puVar44[3] = 0;
              *puVar44 = &PTR_DAT_110af60b8;
              puVar44[1] = 0;
              *(undefined4 *)(puVar44 + 4) = 2;
              puVar33 = (undefined8 *)0x8;
              __Znwm();
              *puVar33 = 0x300000006;
              puVar44[2] = puVar33 + 1;
              puVar44[3] = puVar33 + 1;
              *puVar44 = &PTR_FUN_110af6060;
              puVar44[1] = puVar33;
              puVar44[5] = puVar47;
              *(undefined4 *)(puVar44 + 6) = 1;
              pppppppuVar16 = pppppppuStack_3a0;
              pppppppuVar17 = &pppppppuStack_3a0;
              pppppppuVar41 = &pppppppuStack_3a0;
              if (pppppppuStack_3a0 == (undefined8 *******)0x0) {
LAB_1094391b0:
                pppppppuVar10 = (undefined8 *******)0x30;
                __Znwm();
                pppppppuVar10[4] = ppppppuVar43;
                pppppppuVar10[5] = (undefined8 ******)0x0;
                *pppppppuVar10 = (undefined8 ******)0x0;
                pppppppuVar10[1] = (undefined8 ******)0x0;
                pppppppuVar10[2] = pppppppuVar41;
                *pppppppuVar17 = pppppppuVar10;
                pppppppuVar16 = pppppppuVar10;
                if ((undefined8 *******)*pppppppuStack_3a8 != (undefined8 *******)0x0) {
                  pppppppuVar16 = (undefined8 *******)*pppppppuVar17;
                  pppppppuStack_3a8 = (undefined8 *******)*pppppppuStack_3a8;
                }
                func_0x000107c27d40(pppppppuStack_3a0,pppppppuVar16);
                lStack_398 = lStack_398 + 1;
              }
              else {
                while( true ) {
                  while (pppppppuVar10 = pppppppuVar16, pppppppuVar41 = pppppppuVar10,
                        ppppppuVar43 < pppppppuVar10[4]) {
                    pppppppuVar16 = (undefined8 *******)*pppppppuVar10;
                    pppppppuVar17 = pppppppuVar10;
                    if ((undefined8 *******)*pppppppuVar10 == (undefined8 *******)0x0)
                    goto LAB_1094391b0;
                  }
                  if (ppppppuVar43 <= pppppppuVar10[4]) break;
                  pppppppuVar16 = (undefined8 *******)pppppppuVar10[1];
                  if ((undefined8 *******)pppppppuVar10[1] == (undefined8 *******)0x0) {
                    pppppppuVar17 = pppppppuVar10 + 1;
                    goto LAB_1094391b0;
                  }
                }
              }
              puStack_328 = (undefined8 *)(lStack_600 + (long)pppppppuVar10[5] * 0x18);
              dStack_330 = dVar28;
              FUN_109973894(lStack_3b0,puVar44,puVar14,&dStack_330,2);
              puVar14 = puStack_3d8;
              uVar29 = ((ulong)(uint)((int)ppppppuVar43 << 3) + 8 ^ (ulong)ppppppuVar43 >> 0x20) *
                       -0x622015f714c7d297;
              uVar29 = ((ulong)ppppppuVar43 >> 0x20 ^ uVar29 >> 0x2f ^ uVar29) * -0x622015f714c7d297
              ;
              uVar29 = uVar29 ^ uVar29 >> 0x2f;
              puVar47 = (undefined8 *)(uVar29 * -0x622015f714c7d297);
              if (puStack_3d8 != (undefined8 *)0x0) {
                uVar26 = (long)puStack_3d8 - 1;
                if (((ulong)puStack_3d8 & uVar26) == 0) {
                  puVar44 = (undefined8 *)(uVar26 & (ulong)puVar47);
                  plVar20 = *(long **)(lStack_3e0 + (long)puVar44 * 8);
                  if (plVar20 != (long *)0x0) goto LAB_1094392b4;
                  goto LAB_109439330;
                }
                puVar44 = puVar47;
                if (puStack_3d8 <= puVar47) {
                  uVar23 = 0;
                  if (puStack_3d8 != (undefined8 *)0x0) {
                    uVar23 = (ulong)puVar47 / (ulong)puStack_3d8;
                  }
                  puVar44 = (undefined8 *)((long)puVar47 - uVar23 * (long)puStack_3d8);
                }
                plVar20 = *(long **)(lStack_3e0 + (long)puVar44 * 8);
                if (plVar20 == (long *)0x0) goto LAB_109439330;
LAB_1094392b4:
                plVar20 = (long *)*plVar20;
                if (plVar20 == (long *)0x0) goto LAB_109439330;
                if (((ulong)puStack_3d8 & uVar26) != 0) {
                  do {
                    puVar33 = (undefined8 *)plVar20[1];
                    if (puVar33 == puVar47) {
                      if ((undefined8 ******)plVar20[2] == ppppppuVar43) goto LAB_1094396b4;
                    }
                    else {
                      if (puStack_3d8 <= puVar33) {
                        uVar26 = 0;
                        if (puStack_3d8 != (undefined8 *)0x0) {
                          uVar26 = (ulong)puVar33 / (ulong)puStack_3d8;
                        }
                        puVar33 = (undefined8 *)((long)puVar33 - uVar26 * (long)puStack_3d8);
                      }
                      if (puVar33 != puVar44) break;
                    }
                    plVar20 = (long *)*plVar20;
                  } while (plVar20 != (long *)0x0);
                  goto LAB_109439330;
                }
                while( true ) {
                  if ((undefined8 *)plVar20[1] == puVar47) {
                    if ((undefined8 ******)plVar20[2] != ppppppuVar43) goto LAB_109439310;
                    goto LAB_1094396b4;
                  }
                  if ((undefined8 *)((ulong)plVar20[1] & uVar26) != puVar44) break;
LAB_109439310:
                  plVar20 = (long *)*plVar20;
                  if (plVar20 == (long *)0x0) break;
                }
              }
LAB_109439330:
              plVar20 = (long *)0x18;
              __Znwm();
              *plVar20 = 0;
              plVar20[1] = (long)puVar47;
              plVar20[2] = (long)ppppppuVar43;
              if ((puVar14 == (undefined8 *)0x0) ||
                 (fStack_3c0 * (float)puVar14 < (float)(uStack_3c8 + 1))) {
                uVar26 = 1;
                if ((undefined8 *)0x2 < puVar14) {
                  uVar26 = (ulong)(((ulong)puVar14 & (long)puVar14 - 1U) != 0);
                }
                puVar44 = (undefined8 *)(uVar26 | (long)puVar14 << 1);
                puVar33 = (undefined8 *)(long)((float)(uStack_3c8 + 1) / fStack_3c0);
                if (puVar44 <= puVar33) {
                  puVar44 = puVar33;
                }
                if ((long)puVar44 - 1U == 0) {
                  puVar44 = (undefined8 *)0x2;
                }
                else if (((ulong)puVar44 & (long)puVar44 - 1U) != 0) {
                  __ZNSt3__112__next_primeEm();
                  puVar14 = puStack_3d8;
                }
                if (puVar14 > puVar44 || puVar44 == puVar14) {
                  if (puVar14 <= puVar44) {
LAB_109439654:
                    uVar23 = (long)puVar14 - 1;
                    uVar26 = (ulong)puVar14 & uVar23;
                    goto joined_r0x000109439564;
                  }
                  puVar33 = (undefined8 *)(long)((float)uStack_3c8 / fStack_3c0);
                  if ((puVar14 < (undefined8 *)0x3) || (((ulong)puVar14 & (long)puVar14 - 1U) != 0))
                  {
                    __ZNSt3__112__next_primeEm();
                  }
                  else if ((undefined8 *)0x1 < puVar33) {
                    puVar33 = (undefined8 *)(1L << (-LZCOUNT((long)puVar33 + -1) & 0x3fU));
                  }
                  lVar13 = lStack_3e0;
                  if (puVar44 <= puVar33) {
                    puVar44 = puVar33;
                  }
                  if (puVar14 <= puVar44) {
                    uVar23 = (long)puStack_3d8 - 1;
                    uVar26 = (ulong)puStack_3d8 & uVar23;
                    puVar14 = puStack_3d8;
                    goto joined_r0x000109439564;
                  }
                  if (puVar44 != (undefined8 *)0x0) goto LAB_1094393e0;
                  lStack_3e0 = 0;
                  if (lVar13 != 0) {
                    __ZdlPv();
                  }
                  puVar14 = (undefined8 *)0x0;
                  puStack_3d8 = (undefined8 *)0x0;
                  uVar23 = 0xffffffffffffffff;
LAB_109439598:
                  puVar44 = (undefined8 *)(uVar23 & (ulong)puVar47);
                  plVar21 = *(long **)(lStack_3e0 + (long)puVar44 * 8);
                  goto joined_r0x000109439674;
                }
LAB_1094393e0:
                puVar14 = puVar44;
                if ((ulong)puVar14 >> 0x3d != 0) {
                  func_0x000104c4f740();
                  goto LAB_10943a5cc;
                }
                lVar13 = (long)puVar14 << 3;
                __Znwm();
                bVar4 = lStack_3e0 != 0;
                lStack_3e0 = lVar13;
                if (bVar4) {
                  __ZdlPv();
                }
                puVar44 = (undefined8 *)0x0;
                do {
                  *(undefined8 *)(lStack_3e0 + (long)puVar44 * 8) = 0;
                  puVar44 = (undefined8 *)((long)puVar44 + 1);
                } while (puVar14 != puVar44);
                puStack_3d8 = puVar14;
                if (plStack_3d0 != (long *)0x0) {
                  puVar44 = (undefined8 *)plStack_3d0[1];
                  uVar26 = (long)puVar14 - 1;
                  if (((ulong)puVar14 & uVar26) == 0) {
                    uVar23 = (ulong)puVar44 & uVar26;
                    *(long ***)(lStack_3e0 + uVar23 * 8) = &plStack_3d0;
                    plVar24 = (long *)*plStack_3d0;
                    plVar21 = plStack_3d0;
                    while (plVar22 = plVar24, plVar22 != (long *)0x0) {
                      uVar32 = plVar22[1] & uVar26;
                      if (uVar32 != uVar23) {
                        if (*(long *)(lStack_3e0 + uVar32 * 8) == 0) {
                          *(long **)(lStack_3e0 + uVar32 * 8) = plVar21;
                          uVar23 = uVar32;
                        }
                        else {
                          *plVar21 = *plVar22;
                          *plVar22 = **(long **)(lStack_3e0 + uVar32 * 8);
                          **(undefined8 **)(lStack_3e0 + uVar32 * 8) = plVar22;
                          plVar22 = plVar21;
                        }
                      }
                      plVar21 = plVar22;
                      plVar24 = (long *)*plVar22;
                    }
                  }
                  else {
                    if (puVar44 < puVar14) {
                      *(long ***)(lStack_3e0 + (long)puVar44 * 8) = &plStack_3d0;
                      plVar21 = (long *)*plStack_3d0;
                    }
                    else {
                      uVar26 = 0;
                      if (puVar14 != (undefined8 *)0x0) {
                        uVar26 = (ulong)puVar44 / (ulong)puVar14;
                      }
                      puVar44 = (undefined8 *)((long)puVar44 - uVar26 * (long)puVar14);
                      *(long ***)(lStack_3e0 + (long)puVar44 * 8) = &plStack_3d0;
                      plVar21 = (long *)*plStack_3d0;
                    }
                    plVar24 = plStack_3d0;
                    if (plVar21 != (long *)0x0) {
                      do {
                        puVar33 = (undefined8 *)plVar21[1];
                        if (puVar14 <= puVar33) {
                          uVar26 = 0;
                          if (puVar14 != (undefined8 *)0x0) {
                            uVar26 = (ulong)puVar33 / (ulong)puVar14;
                          }
                          puVar33 = (undefined8 *)((long)puVar33 - uVar26 * (long)puVar14);
                        }
                        if (puVar33 == puVar44) {
LAB_109439608:
                          plVar22 = (long *)*plVar21;
                          plVar24 = plVar21;
                        }
                        else {
                          if (*(long *)(lStack_3e0 + (long)puVar33 * 8) != 0) {
                            *plVar24 = *plVar21;
                            *plVar21 = **(long **)(lStack_3e0 + (long)puVar33 * 8);
                            **(undefined8 **)(lStack_3e0 + (long)puVar33 * 8) = plVar21;
                            plVar21 = plVar24;
                            goto LAB_109439608;
                          }
                          *(long **)(lStack_3e0 + (long)puVar33 * 8) = plVar24;
                          plVar22 = (long *)*plVar21;
                          plVar24 = plVar21;
                          puVar44 = puVar33;
                        }
                        plVar21 = plVar22;
                      } while (plVar21 != (long *)0x0);
                      goto LAB_109439654;
                    }
                  }
                }
                uVar23 = (long)puVar14 - 1;
                uVar26 = (ulong)puVar14 & uVar23;
joined_r0x000109439564:
                if (uVar26 == 0) goto LAB_109439598;
                if (puVar47 < puVar14) {
                  plVar21 = *(long **)(lStack_3e0 + uVar29 * -0x1100afb8a63e94b8);
                  puVar44 = puVar47;
                  goto joined_r0x000109439674;
                }
                uVar29 = 0;
                if (puVar14 != (undefined8 *)0x0) {
                  uVar29 = (ulong)puVar47 / (ulong)puVar14;
                }
                puVar44 = (undefined8 *)((long)puVar47 - uVar29 * (long)puVar14);
                plVar21 = *(long **)(lStack_3e0 + (long)puVar44 * 8);
                if (plVar21 == (long *)0x0) goto LAB_1094395a8;
LAB_109439374:
                *plVar20 = *plVar21;
LAB_1094396a4:
                *plVar21 = (long)plVar20;
              }
              else {
                plVar21 = *(long **)(lStack_3e0 + (long)puVar44 * 8);
joined_r0x000109439674:
                if (plVar21 != (long *)0x0) goto LAB_109439374;
LAB_1094395a8:
                *plVar20 = (long)plStack_3d0;
                *(long ***)(lStack_3e0 + (long)puVar44 * 8) = &plStack_3d0;
                plStack_3d0 = plVar20;
                if (*plVar20 != 0) {
                  puVar44 = *(undefined8 **)(*plVar20 + 8);
                  if (((ulong)puVar14 & (long)puVar14 - 1U) == 0) {
                    puVar44 = (undefined8 *)((ulong)puVar44 & (long)puVar14 - 1U);
                  }
                  else if (puVar14 <= puVar44) {
                    uVar29 = 0;
                    if (puVar14 != (undefined8 *)0x0) {
                      uVar29 = (ulong)puVar44 / (ulong)puVar14;
                    }
                    puVar44 = (undefined8 *)((long)puVar44 - uVar29 * (long)puVar14);
                  }
                  plVar21 = (long *)(lStack_3e0 + (long)puVar44 * 8);
                  goto LAB_1094396a4;
                }
              }
              uStack_3c8 = uStack_3c8 + 1;
LAB_1094396b4:
              FUN_10943e634(&lStack_410,plVar31,plVar31);
              if ((char)param_1[0xc] == '\x01') {
                dVar50 = *(double *)(param_1 + 8);
                if (param_1[3] == 0) {
                  puVar14 = (undefined8 *)0x18;
                  __Znwm();
                  *puVar14 = &PTR_DAT_110b1ef40;
                  puVar14[1] = dVar50 * dVar50;
                  puVar14[2] = 1.0 / (dVar50 * dVar50);
                }
                else if (param_1[3] == 1) {
                  puVar14 = (undefined8 *)0x18;
                  __Znwm();
                  *puVar14 = &PTR_FUN_110b1ef00;
                  puVar14[1] = dVar50;
                  puVar14[2] = dVar50 * dVar50;
                }
                else {
                  puVar14 = (undefined8 *)0x0;
                }
                lVar13 = *plVar31;
                puVar44 = (undefined8 *)0x38;
                __Znwm();
                pdVar45 = (double *)0x18;
                __Znwm();
                dStack_330 = -*(double *)(lVar13 + 0x2b0);
                dVar50 = -*(double *)(lVar13 + 0x2b8);
                auVar52._0_8_ = -*(double *)(lVar13 + 0x2c0);
                auVar52[8] = *(undefined1 *)(lVar13 + 0x2c8);
                auVar52[9] = *(undefined1 *)(lVar13 + 0x2c9);
                auVar52[10] = *(undefined1 *)(lVar13 + 0x2ca);
                auVar52[0xb] = *(undefined1 *)(lVar13 + 0x2cb);
                auVar52[0xc] = *(undefined1 *)(lVar13 + 0x2cc);
                auVar52[0xd] = *(undefined1 *)(lVar13 + 0x2cd);
                auVar52[0xe] = *(undefined1 *)(lVar13 + 0x2ce);
                auVar52[0xf] = *(undefined1 *)(lVar13 + 0x2cf);
                dStack_318 = auVar52._8_8_;
                dVar48 = SQRT(dStack_330 * dStack_330 + auVar52._0_8_ * auVar52._0_8_ +
                              dVar50 * dVar50 + dStack_318 * dStack_318);
                dStack_330 = dStack_330 / dVar48;
                puStack_328 = (undefined8 *)(dVar50 / dVar48);
                dStack_320 = auVar52._0_8_ / dVar48;
                dStack_318 = dStack_318 / dVar48;
                dVar50 = -*(double *)(lVar13 + 0x2d0);
                dVar51 = -*(double *)(lVar13 + 0x2d8);
                dVar55 = *(double *)(lVar13 + 0x2e0);
                dVar48 = -dStack_320 * dVar51 - dVar55 * (double)puStack_328;
                dVar54 = dVar55 * dStack_330 + dVar50 * dStack_320;
                dVar50 = -(double)puStack_328 * dVar50 + dStack_330 * dVar51;
                dVar48 = dVar48 + dVar48;
                dVar54 = dVar54 + dVar54;
                dVar50 = dVar50 + dVar50;
                dStack_310 = (dVar48 * dStack_318 - *(double *)(lVar13 + 0x2d0)) +
                             -dStack_320 * dVar54 + dVar50 * (double)puStack_328;
                dStack_308 = (dVar54 * dStack_318 - *(double *)(lVar13 + 0x2d8)) +
                             -(dStack_330 * dVar50) + dVar48 * dStack_320;
                dStack_300 = (dVar50 * dStack_318 - dVar55) +
                             -(double)puStack_328 * dVar48 + dStack_330 * dVar54;
                func_0x00010937fbc4(&uStack_5e0,&dStack_330);
                dStack_2c8 = dStack_5b8;
                dStack_2d0 = dStack_5c0;
                dStack_2b8 = dStack_5a8;
                dStack_2c0 = dStack_5b0;
                uStack_2b0 = uStack_5a0;
                uStack_2d8 = CONCAT44(uStack_5c4,uStack_5c8);
                uStack_2e0 = CONCAT44(uStack_5cc,uStack_5d0);
                uStack_2e8 = uStack_5d8;
                uStack_2f0 = uStack_5e0;
                pdVar45[1] = dStack_308;
                *pdVar45 = dStack_310;
                pdVar45[2] = dStack_300;
                puVar44[2] = 0;
                puVar44[3] = 0;
                *puVar44 = &PTR_FUN_110af6138;
                puVar44[1] = 0;
                *(undefined4 *)(puVar44 + 4) = 3;
                puVar15 = (undefined4 *)0x4;
                __Znwm();
                *puVar15 = 6;
                puVar44[2] = puVar15 + 1;
                puVar44[3] = puVar15 + 1;
                *puVar44 = &PTR_FUN_110af60e0;
                puVar44[1] = puVar15;
                puVar44[5] = pdVar45;
                *(undefined4 *)(puVar44 + 6) = 1;
                dStack_330 = dVar28;
                FUN_109973894(lStack_3b0,puVar44,puVar14,&dStack_330,1);
              }
              iVar18 = iVar18 + 1;
              lVar13 = *(long *)((long)puStack_668 + 0x3f0);
              lVar25 = *(long *)((long)puStack_668 + 1000);
            }
LAB_109438f38:
            uVar27 = uVar27 + 1;
          } while (uVar27 < (ulong)((lVar13 - lVar25 >> 4) * 0x4ec4ec4ec4ec4ec5));
          if (iVar18 < 1) {
            if (iVar18 == 0) {
              puStack_668 = (undefined8 *)*plVar31;
              goto LAB_109438ec8;
            }
          }
          else if ((*(char *)((long)param_1 + 0x31) == '\x01') &&
                  (lVar13 = *plVar31, *(char *)(lVar13 + 0x278) == '\x01')) {
            dVar57 = *(double *)(lVar13 + 0x130);
            dVar55 = *(double *)(lVar13 + 0x138);
            dVar56 = *(double *)(lVar13 + 0x140);
            dVar58 = *(double *)(lVar13 + 0x148);
            puVar14 = (undefined8 *)0x38;
            __Znwm();
            pdVar45 = (double *)0x20;
            __Znwm();
            dVar48 = dVar55 + dVar55;
            dVar51 = dVar56 + dVar56;
            dVar54 = (dVar57 + dVar57) * dVar58;
            dVar50 = dVar57 * (dVar57 + dVar57);
            pdVar45[1] = ((dVar57 * dVar48 - dVar51 * dVar58) * 0.0 +
                         (1.0 - (dVar50 + dVar56 * dVar51)) * 0.0) - (dVar55 * dVar51 + dVar54);
            *pdVar45 = ((1.0 - (dVar55 * dVar48 + dVar56 * dVar51)) * 0.0 +
                       (dVar57 * dVar48 + dVar51 * dVar58) * 0.0) -
                       (dVar57 * dVar51 - dVar48 * dVar58);
            pdVar45[2] = (dVar57 * dVar51 + dVar48 * dVar58) * 0.0 +
                         ((dVar55 * dVar51 - dVar54) * 0.0 - (1.0 - (dVar50 + dVar55 * dVar48)));
            dVar50 = -1.0 / *(double *)(lVar13 + 0x40);
            dVar48 = 0.0;
            dVar51 = 1.0;
            dVar54 = dVar50 * dVar50 + 1.0;
            if (dVar54 <= 0.0) {
              dVar54 = 1.0;
            }
            else {
              dVar54 = SQRT(dVar54);
              dVar50 = dVar50 / dVar54;
              dVar48 = 0.0 / dVar54;
              dVar54 = 1.0 / dVar54;
            }
            dVar56 = 1.0 / *(double *)(lVar13 + 0x40);
            dVar57 = 0.0;
            dVar55 = dVar56 * dVar56 + 1.0;
            if (0.0 < dVar55) {
              dVar55 = SQRT(dVar55);
              dVar56 = dVar56 / dVar55;
              dVar57 = 0.0 / dVar55;
              dVar51 = 1.0 / dVar55;
            }
            dVar50 = dVar54 * dVar51 + dVar50 * dVar56 + dVar48 * dVar57;
            _acos();
            pdVar45[3] = 2.0 / dVar50;
            puVar14[2] = 0;
            puVar14[3] = 0;
            *puVar14 = &PTR_FUN_110af61b8;
            puVar14[1] = 0;
            *(undefined4 *)(puVar14 + 4) = 1;
            puVar15 = (undefined4 *)0x4;
            __Znwm();
            *puVar15 = 6;
            dVar50 = *(double *)(param_1 + 10);
            iVar18 = param_1[4];
            puVar14[2] = puVar15 + 1;
            puVar14[3] = puVar15 + 1;
            *puVar14 = &PTR_FUN_110af6160;
            puVar14[1] = puVar15;
            puVar14[5] = pdVar45;
            *(undefined4 *)(puVar14 + 6) = 1;
            if (iVar18 == 0) {
              puVar44 = (undefined8 *)0x18;
              __Znwm();
              *puVar44 = &PTR_DAT_110b1ef40;
              puVar44[1] = dVar50 * dVar50;
              puVar44[2] = 1.0 / (dVar50 * dVar50);
            }
            else if (iVar18 == 1) {
              puVar44 = (undefined8 *)0x18;
              __Znwm();
              *puVar44 = &PTR_FUN_110b1ef00;
              puVar44[1] = dVar50;
              puVar44[2] = dVar50 * dVar50;
            }
            else {
              puVar44 = (undefined8 *)0x0;
            }
            dStack_330 = dVar28;
            FUN_109973894(lStack_3b0,puVar14,puVar44,&dStack_330,1);
          }
        }
        uVar30 = uVar30 + 1;
      } while ((undefined8 *)uVar30 != puStack_670);
      puVar14 = puVar11;
      if (puVar11 != puStack_678) {
LAB_109439b54:
        if (uStack_408 != 0) {
          ppppppuVar43 = (undefined8 ******)*puVar14;
          uVar30 = ((ulong)(uint)((int)ppppppuVar43 << 3) + 8 ^ (ulong)ppppppuVar43 >> 0x20) *
                   -0x622015f714c7d297;
          uVar30 = ((ulong)ppppppuVar43 >> 0x20 ^ uVar30 >> 0x2f ^ uVar30) * -0x622015f714c7d297;
          uVar30 = (uVar30 ^ uVar30 >> 0x2f) * -0x622015f714c7d297;
          uVar27 = uStack_408 - 1;
          if ((uStack_408 & uVar27) == 0) {
            uVar29 = uVar30 & uVar27;
            plVar31 = *(long **)(lStack_410 + uVar29 * 8);
          }
          else {
            uVar29 = uVar30;
            if (uStack_408 <= uVar30) {
              uVar29 = 0;
              if (uStack_408 != 0) {
                uVar29 = uVar30 / uStack_408;
              }
              uVar29 = uVar30 - uVar29 * uStack_408;
            }
            plVar31 = *(long **)(lStack_410 + uVar29 * 8);
          }
          if ((plVar31 != (long *)0x0) && (plVar31 = (long *)*plVar31, plVar31 != (long *)0x0)) {
            pppppppuVar17 = pppppppuStack_388;
            pppppppuVar16 = &pppppppuStack_388;
            if ((uStack_408 & uVar27) == 0) {
              do {
                if (uVar30 - plVar31[1] == 0) {
                  if ((undefined8 ******)plVar31[2] == ppppppuVar43) goto LAB_109439c68;
                }
                else if ((plVar31[1] & uVar27) != uVar29) break;
                plVar31 = (long *)*plVar31;
              } while (plVar31 != (long *)0x0);
            }
            else {
              do {
                uVar27 = plVar31[1];
                if (uVar30 - uVar27 == 0) {
                  if ((undefined8 ******)plVar31[2] == ppppppuVar43) goto LAB_109439c68;
                }
                else {
                  if (uStack_408 <= uVar27) {
                    uVar26 = 0;
                    if (uStack_408 != 0) {
                      uVar26 = uVar27 / uStack_408;
                    }
                    uVar27 = uVar27 - uVar26 * uStack_408;
                  }
                  if (uVar27 != uVar29) break;
                }
                plVar31 = (long *)*plVar31;
              } while (plVar31 != (long *)0x0);
            }
          }
        }
        goto LAB_109439b44;
      }
LAB_109439cd4:
      puVar14 = puStack_6b8;
      if (puStack_6b8 != puVar38) {
LAB_109439d24:
        if (puStack_3d8 != (undefined8 *)0x0) {
          ppppppuVar43 = (undefined8 ******)*puVar14;
          uVar30 = ((ulong)(uint)((int)ppppppuVar43 << 3) + 8 ^ (ulong)ppppppuVar43 >> 0x20) *
                   -0x622015f714c7d297;
          uVar30 = ((ulong)ppppppuVar43 >> 0x20 ^ uVar30 >> 0x2f ^ uVar30) * -0x622015f714c7d297;
          puVar44 = (undefined8 *)((uVar30 ^ uVar30 >> 0x2f) * -0x622015f714c7d297);
          uVar30 = (long)puStack_3d8 - 1;
          if (((ulong)puStack_3d8 & uVar30) == 0) {
            puVar47 = (undefined8 *)((ulong)puVar44 & uVar30);
            plVar31 = *(long **)(lStack_3e0 + (long)puVar47 * 8);
          }
          else {
            puVar47 = puVar44;
            if (puStack_3d8 <= puVar44) {
              uVar27 = 0;
              if (puStack_3d8 != (undefined8 *)0x0) {
                uVar27 = (ulong)puVar44 / (ulong)puStack_3d8;
              }
              puVar47 = (undefined8 *)((long)puVar44 - uVar27 * (long)puStack_3d8);
            }
            plVar31 = *(long **)(lStack_3e0 + (long)puVar47 * 8);
          }
          if ((plVar31 != (long *)0x0) && (plVar31 = (long *)*plVar31, plVar31 != (long *)0x0)) {
            pppppppuVar17 = pppppppuStack_3a0;
            pppppppuVar16 = &pppppppuStack_3a0;
            if (((ulong)puStack_3d8 & uVar30) == 0) {
              do {
                if ((long)puVar44 - plVar31[1] == 0) {
                  if ((undefined8 ******)plVar31[2] == ppppppuVar43) goto LAB_109439e38;
                }
                else if ((undefined8 *)(plVar31[1] & uVar30) != puVar47) break;
                plVar31 = (long *)*plVar31;
              } while (plVar31 != (long *)0x0);
            }
            else {
              do {
                puVar33 = (undefined8 *)plVar31[1];
                if ((long)puVar44 - (long)puVar33 == 0) {
                  if ((undefined8 ******)plVar31[2] == ppppppuVar43) goto LAB_109439e38;
                }
                else {
                  if (puStack_3d8 <= puVar33) {
                    uVar30 = 0;
                    if (puStack_3d8 != (undefined8 *)0x0) {
                      uVar30 = (ulong)puVar33 / (ulong)puStack_3d8;
                    }
                    puVar33 = (undefined8 *)((long)puVar33 - uVar30 * (long)puStack_3d8);
                  }
                  if (puVar33 != puVar47) break;
                }
                plVar31 = (long *)*plVar31;
              } while (plVar31 != (long *)0x0);
            }
          }
        }
        goto LAB_109439d14;
      }
LAB_109439ea4:
      uStack_5d8 = 1;
      uStack_5e0 = 0x200000001;
      uStack_5d0 = 0x14;
      uStack_5cc = uStack_5cc & 0xffffff00;
      uStack_5c8 = 2;
      dStack_5b8 = 0.0001;
      dStack_5c0 = 1e-09;
      dStack_5a8 = 0.6;
      dStack_5b0 = 0.001;
      uStack_5a0 = 0x500000014;
      uStack_590 = 0x4024000000000000;
      uStack_598 = 0x3feccccccccccccd;
      uStack_588 = 0;
      uStack_580 = 0;
      uStack_570 = 0x41cdcd6500000000;
      uStack_568 = 1;
      uStack_558 = 0x4341c37937e08000;
      uStack_560 = 0x40c3880000000000;
      uStack_548 = 0x3f50624dd2f1a9fc;
      uStack_550 = 0x3949f623d5a8a733;
      uStack_538 = 0x4693b8b5b5056e17;
      uStack_540 = 0x3eb0c6f7a0b5ed8d;
      uStack_530 = 5;
      uStack_520 = 0x3ddb7cdfd9d7bdbb;
      uStack_528 = 0x3eb0c6f7a0b5ed8d;
      uStack_518 = 0x3e45798ee2308c3a;
      uStack_508 = 0;
      uStack_4f8 = 0;
      uStack_500 = 0;
      uStack_4e8 = 0;
      uStack_4f0 = 0;
      uStack_4e0 = 0x3f800000;
      uStack_4d8 = 0x200000000;
      uStack_4b0 = 0;
      uStack_4a8 = 0;
      uStack_4c0 = 0;
      uStack_4d0 = 0;
      uStack_4c8 = 0;
      uStack_4b8 = 0;
      uStack_4a0 = 0x3f50624dd2f1a9fc;
      uStack_498 = 0x1f400000000;
      uStack_490 = 0x3fb999999999999a;
      uStack_488 = 1;
      uStack_468 = 0;
      uStack_478 = 0;
      uStack_470 = 0;
      uStack_449 = 4;
      uStack_460 = 0x706d742f;
      uStack_45c = 0;
      uStack_448 = 1;
      uStack_444 = 0;
      uStack_438 = 0x3eb0c6f7a0b5ed8d;
      uStack_440 = 0x3e45798ee2308c3a;
      uStack_430 = 0;
      uStack_418 = 0;
      uStack_428 = 0;
      uStack_420 = 0;
      uStack_510 = 0x100000003;
      iStack_578 = param_1[0xe];
      uStack_57c = 5;
      uStack_484 = 0;
      uStack_480 = 1;
      dStack_330 = 4.24399158242461e-314;
      puVar14 = (undefined8 *)0x20;
      __Znwm();
      puVar14[1] = 0x7361772065766c6f;
      *puVar14 = 0x533a3a7365726563;
      *(undefined8 *)((long)puVar14 + 0x14) = 0x2e64656c6c616320;
      *(undefined8 *)((long)puVar14 + 0xc) = 0x746f6e2073617720;
      *(undefined1 *)((long)puVar14 + 0x1c) = 0;
      auVar52 = NEON_fmov(0xbff0000000000000,8);
      dStack_318 = -1.58101006669199e-322;
      dStack_320 = 1.38338380835549e-322;
      dStack_308 = auVar52._8_8_;
      dStack_310 = auVar52._0_8_;
      dStack_300 = -1.0;
      uStack_2f8 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2e0 = 0xffffffffffffffff;
      uStack_2d8 = 0xffffffffffffffff;
      uStack_2b0 = 0xbff0000000000000;
      uStack_2a8 = 0xffffffff;
      uStack_2a0 = 0xbff0000000000000;
      uStack_298 = 0xffffffff;
      uStack_290 = 0xbff0000000000000;
      uStack_288 = 0xffffffff;
      uStack_260 = 0xbff0000000000000;
      uStack_238 = 0xffffffffffffffff;
      uStack_240 = 0xffffffffffffffff;
      uStack_248 = 0xffffffffffffffff;
      uStack_250 = 0xffffffffffffffff;
      uStack_258 = 0xffffffffffffffff;
      uStack_230 = 0;
      uStack_224 = 0x200000002;
      uStack_22c = 0xffffffffffffffff;
      uStack_210 = 0;
      uStack_218 = 0;
      uStack_200 = 0;
      uStack_208 = 0;
      uStack_1f0 = 0;
      uStack_1f8 = 0;
      uStack_1e0 = 0;
      uStack_1e8 = 0;
      uStack_1d0 = 0;
      uStack_1d8 = 0;
      uStack_1c0 = 0;
      uStack_1c8 = 0;
      uStack_1b8 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_170 = 0;
      uStack_160 = 0x200000001;
      uStack_168 = 0x200000004;
      uStack_158 = 0xffffffff00000000;
      puStack_328 = puVar14;
      dStack_2d0 = dStack_310;
      dStack_2c8 = dStack_308;
      dStack_2c0 = dStack_310;
      dStack_2b8 = dStack_308;
      dStack_280 = dStack_310;
      dStack_278 = dStack_308;
      dStack_270 = dStack_310;
      dStack_268 = dStack_308;
      FUN_1099a00a4();
      pdVar45 = (double *)(lStack_5e8 + 0x18);
      dStack_608 = 1.0;
      dStack_610 = 0.0;
      puVar14 = puStack_648;
      do {
        piVar42 = (int *)*puVar14;
        if (*piVar42 != 0) {
          dVar56 = pdVar45[-2];
          dVar55 = pdVar45[-3];
          dVar58 = pdVar45[-1];
          dVar60 = pdVar45[1];
          dVar59 = *pdVar45;
          dVar57 = pdVar45[2];
          dVar48 = dVar58 * dVar58 + dVar55 * dVar55 + dVar56 * dVar56;
          dVar51 = 0.0;
          dVar54 = 0.0;
          dVar28 = dStack_610;
          dVar50 = dStack_608;
          if (dVar48 != 0.0) {
            dVar48 = SQRT(dVar48);
            dVar28 = dVar48 * 0.5;
            ___sincos_stret();
            dVar51 = (dVar55 * dVar28) / dVar48;
            dVar54 = (dVar56 * dVar28) / dVar48;
            dVar28 = (dVar58 * dVar28) / dVar48;
            dVar50 = extraout_d1;
          }
          dVar48 = SQRT(dVar51 * dVar51 + dVar28 * dVar28 + dVar54 * dVar54 + dVar50 * dVar50);
          dVar51 = dVar51 / dVar48;
          dVar54 = dVar54 / dVar48;
          dVar28 = dVar28 / dVar48;
          dVar50 = dVar50 / dVar48;
          dVar55 = dVar54 + dVar54;
          dVar56 = dVar28 + dVar28;
          dVar58 = (dVar51 + dVar51) * dVar50;
          dVar48 = (dVar51 + dVar51) * dVar51;
          *(double *)(piVar42 + 0xae) = dVar54;
          *(double *)(piVar42 + 0xac) = dVar51;
          *(double *)(piVar42 + 0xb2) = dVar50;
          *(double *)(piVar42 + 0xb0) = dVar28;
          *(double *)(piVar42 + 0xb6) = dVar60;
          *(double *)(piVar42 + 0xb4) = dVar59;
          *(double *)(piVar42 + 0xb8) = dVar57;
          *(double *)(piVar42 + 0xbe) = dVar55 * dVar51 + dVar56 * dVar50;
          *(double *)(piVar42 + 0xbc) = 1.0 - (dVar55 * dVar54 + dVar56 * dVar28);
          *(double *)(piVar42 + 0xc2) = dVar55 * dVar51 - dVar56 * dVar50;
          *(double *)(piVar42 + 0xc0) = dVar56 * dVar51 - dVar55 * dVar50;
          *(double *)(piVar42 + 0xc6) = dVar56 * dVar54 + dVar58;
          *(double *)(piVar42 + 0xc4) = 1.0 - (dVar48 + dVar56 * dVar28);
          *(double *)(piVar42 + 0xca) = dVar56 * dVar54 - dVar58;
          *(double *)(piVar42 + 200) = dVar56 * dVar51 + dVar55 * dVar50;
          *(double *)(piVar42 + 0xcc) = 1.0 - (dVar48 + dVar55 * dVar54);
          auVar53._0_8_ = -dVar28;
          auVar53[8] = SUB81(dVar50,0);
          auVar53[9] = (undefined1)((ulong)dVar50 >> 8);
          auVar53[10] = (undefined1)((ulong)dVar50 >> 0x10);
          auVar53[0xb] = (undefined1)((ulong)dVar50 >> 0x18);
          auVar53[0xc] = (undefined1)((ulong)dVar50 >> 0x20);
          auVar53[0xd] = (undefined1)((ulong)dVar50 >> 0x28);
          auVar53[0xe] = (undefined1)((ulong)dVar50 >> 0x30);
          auVar53[0xf] = (undefined1)((ulong)dVar50 >> 0x38);
          dStack_138 = auVar53._8_8_;
          dVar28 = SQRT(dVar51 * dVar51 + auVar53._0_8_ * auVar53._0_8_ +
                        dVar54 * dVar54 + dStack_138 * dStack_138);
          dStack_150 = -dVar51 / dVar28;
          dStack_148 = -dVar54 / dVar28;
          dStack_140 = auVar53._0_8_ / dVar28;
          dStack_138 = dStack_138 / dVar28;
          dVar28 = -dStack_140 * -dVar60 - dVar57 * dStack_148;
          dVar50 = dVar57 * dStack_150 + -dVar59 * dStack_140;
          dVar48 = -dStack_148 * -dVar59 + dStack_150 * -dVar60;
          dVar28 = dVar28 + dVar28;
          dVar50 = dVar50 + dVar50;
          dVar48 = dVar48 + dVar48;
          dStack_130 = (dVar28 * dStack_138 - dVar59) + -dStack_140 * dVar50 + dVar48 * dStack_148;
          dStack_128 = (dVar50 * dStack_138 - dVar60) + -(dStack_150 * dVar48) + dVar28 * dStack_140
          ;
          dStack_120 = (dVar48 * dStack_138 - dVar57) + -dStack_148 * dVar28 + dStack_150 * dVar50;
          func_0x00010937fbc4(&uStack_378,&dStack_150);
          *(double *)(piVar42 + 0xd2) = dStack_148;
          *(double *)(piVar42 + 0xd0) = dStack_150;
          *(double *)(piVar42 + 0xd6) = dStack_138;
          *(double *)(piVar42 + 0xd4) = dStack_140;
          *(double *)(piVar42 + 0xda) = dStack_128;
          *(double *)(piVar42 + 0xd8) = dStack_130;
          *(double *)(piVar42 + 0xdc) = dStack_120;
          *(undefined8 *)(piVar42 + 0xea) = uStack_350;
          *(undefined8 *)(piVar42 + 0xe8) = uStack_358;
          *(undefined8 *)(piVar42 + 0xee) = uStack_340;
          *(undefined8 *)(piVar42 + 0xec) = uStack_348;
          *(undefined8 *)(piVar42 + 0xf0) = uStack_338;
          *(undefined8 *)(piVar42 + 0xe2) = uStack_370;
          *(undefined8 *)(piVar42 + 0xe0) = uStack_378;
          *(undefined8 *)(piVar42 + 0xe6) = uStack_360;
          *(undefined8 *)(piVar42 + 0xe4) = uStack_368;
          *(undefined4 *)*puVar14 = 4;
        }
        pdVar45 = pdVar45 + 6;
        puVar14 = puVar14 + 1;
        puStack_670 = (undefined8 *)((long)puStack_670 - 1);
      } while (puStack_670 != (undefined8 *)0x0);
      pdVar45 = (double *)(lStack_600 + 0x10);
      plVar31 = plStack_628;
      do {
        while( true ) {
          lVar13 = *plVar31;
          dVar28 = pdVar45[-2];
          dVar50 = *pdVar45;
          dVar48 = ABS(pdVar45[-1]);
          dVar51 = ABS(dVar50);
          bVar4 = false;
          bVar6 = false;
          bVar8 = false;
          if (ABS(dVar28) <= 100000.0) {
            bVar4 = false;
            bVar6 = false;
            bVar8 = true;
            if (!NAN(dVar48)) {
              bVar4 = dVar48 < 100000.0;
              bVar6 = dVar48 == 100000.0;
              bVar8 = false;
            }
          }
          bVar5 = false;
          bVar7 = false;
          bVar9 = false;
          if (bVar6 || bVar4 != bVar8) {
            bVar5 = false;
            bVar7 = false;
            bVar9 = true;
            if (!NAN(dVar51)) {
              bVar5 = dVar51 < 100000.0;
              bVar7 = dVar51 == 100000.0;
              bVar9 = false;
            }
          }
          if (bVar7 || bVar5 != bVar9) break;
          pdVar45 = pdVar45 + 3;
          *(undefined4 *)(lVar13 + 0x50) = 0;
          lVar36 = lVar36 + -1;
          plVar31 = plVar31 + 1;
          if (lVar36 == 0) goto LAB_10943a43c;
        }
        *(double *)(lVar13 + 0x10) = pdVar45[-1];
        *(double *)(lVar13 + 8) = dVar28;
        *(double *)(lVar13 + 0x18) = dVar50;
        pdVar45 = pdVar45 + 3;
        *(undefined4 *)(lVar13 + 0x50) = 3;
        lVar36 = lVar36 + -1;
        plVar31 = plVar31 + 1;
      } while (lVar36 != 0);
LAB_10943a43c:
      func_0x00010943e408(&dStack_330);
      func_0x00010943e4cc(&uStack_5e0);
      lVar36 = lStack_410;
      plVar31 = (long *)lStack_400;
      while (plVar31 != (long *)0x0) {
        plVar31 = (long *)*plVar31;
        lStack_410 = lVar36;
        __ZdlPv();
        lVar36 = lStack_410;
      }
      lStack_410 = 0;
      lVar13 = lStack_3e0;
      plVar31 = plStack_3d0;
      if (lVar36 != 0) {
        __ZdlPv();
        lVar13 = lStack_3e0;
        plVar31 = plStack_3d0;
      }
      while (plVar31 != (long *)0x0) {
        plVar31 = (long *)*plVar31;
        lStack_3e0 = lVar13;
        __ZdlPv();
        lVar13 = lStack_3e0;
      }
      lStack_3e0 = 0;
      if (lVar13 != 0) {
        __ZdlPv();
      }
      lVar36 = lStack_3b0;
      lStack_3b0 = 0;
      if (lVar36 != 0) {
        FUN_1099733ec();
        __ZdlPv();
      }
      uVar37 = 1;
      func_0x00010943e5f0(&pppppppuStack_3a8,pppppppuStack_3a0);
    }
    if (puStack_6b8 != (undefined8 *)0x0) {
      __ZdlPv(puStack_6b8);
    }
    __ZdlPv(plStack_628);
    if (lStack_600 != 0) {
      __ZdlPv();
    }
    goto joined_r0x000109438e30;
  }
  FUN_10942ca5c();
LAB_10943a5cc:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10943a5d0);
  (*pcVar3)();
LAB_109438f70:
  pppppppuVar16 = (undefined8 *******)*pppppppuVar16;
  if (pppppppuVar16 == (undefined8 *******)0x0) goto LAB_109438f38;
  goto LAB_109438f78;
LAB_109439c68:
  while (pppppppuVar41 = pppppppuVar16, pppppppuVar17 != (undefined8 *******)0x0) {
    while (pppppppuVar10 = pppppppuVar17, pppppppuVar10[4] <= ppppppuVar43) {
      if (ppppppuVar43 <= pppppppuVar10[4]) goto LAB_109439b30;
      pppppppuVar17 = (undefined8 *******)pppppppuVar10[1];
      if ((undefined8 *******)pppppppuVar10[1] == (undefined8 *******)0x0) {
        pppppppuVar16 = pppppppuVar10 + 1;
        pppppppuVar41 = pppppppuVar10;
        goto LAB_109439c94;
      }
    }
    pppppppuVar16 = pppppppuVar10;
    pppppppuVar17 = (undefined8 *******)*pppppppuVar10;
  }
LAB_109439c94:
  pppppppuVar10 = (undefined8 *******)0x30;
  __Znwm();
  pppppppuVar10[4] = ppppppuVar43;
  pppppppuVar10[5] = (undefined8 ******)0x0;
  *pppppppuVar10 = (undefined8 ******)0x0;
  pppppppuVar10[1] = (undefined8 ******)0x0;
  pppppppuVar10[2] = pppppppuVar41;
  *pppppppuVar16 = pppppppuVar10;
  pppppppuVar17 = pppppppuVar10;
  if ((undefined8 *******)*pppppppuStack_390 != (undefined8 *******)0x0) {
    pppppppuVar17 = (undefined8 *******)*pppppppuVar16;
    pppppppuStack_390 = (undefined8 *******)*pppppppuStack_390;
  }
  func_0x000107c27d40(pppppppuStack_388,pppppppuVar17);
  lStack_380 = lStack_380 + 1;
LAB_109439b30:
  FUN_109974964(lStack_3b0,lStack_5e8 + (long)pppppppuVar10[5] * 0x30);
LAB_109439b44:
  puVar14 = puVar14 + 1;
  if (puVar14 == puStack_678) goto LAB_109439cd4;
  goto LAB_109439b54;
LAB_109439e38:
  while (pppppppuVar41 = pppppppuVar16, pppppppuVar17 != (undefined8 *******)0x0) {
    while (pppppppuVar10 = pppppppuVar17, pppppppuVar10[4] <= ppppppuVar43) {
      if (ppppppuVar43 <= pppppppuVar10[4]) goto LAB_109439d00;
      pppppppuVar17 = (undefined8 *******)pppppppuVar10[1];
      if ((undefined8 *******)pppppppuVar10[1] == (undefined8 *******)0x0) {
        pppppppuVar16 = pppppppuVar10 + 1;
        pppppppuVar41 = pppppppuVar10;
        goto LAB_109439e64;
      }
    }
    pppppppuVar16 = pppppppuVar10;
    pppppppuVar17 = (undefined8 *******)*pppppppuVar10;
  }
LAB_109439e64:
  pppppppuVar10 = (undefined8 *******)0x30;
  __Znwm();
  pppppppuVar10[4] = ppppppuVar43;
  pppppppuVar10[5] = (undefined8 ******)0x0;
  *pppppppuVar10 = (undefined8 ******)0x0;
  pppppppuVar10[1] = (undefined8 ******)0x0;
  pppppppuVar10[2] = pppppppuVar41;
  *pppppppuVar16 = pppppppuVar10;
  pppppppuVar17 = pppppppuVar10;
  if ((undefined8 *******)*pppppppuStack_3a8 != (undefined8 *******)0x0) {
    pppppppuVar17 = (undefined8 *******)*pppppppuVar16;
    pppppppuStack_3a8 = (undefined8 *******)*pppppppuStack_3a8;
  }
  func_0x000107c27d40(pppppppuStack_3a0,pppppppuVar17);
  lStack_398 = lStack_398 + 1;
LAB_109439d00:
  FUN_109974964(lStack_3b0,lStack_600 + (long)pppppppuVar10[5] * 0x18);
LAB_109439d14:
  puVar14 = puVar14 + 1;
  if (puVar14 == puVar38) goto LAB_109439ea4;
  goto LAB_109439d24;
}



/* Entry: 10943a7fc; end: 10943a88b;  */

long * FUN_10943a7fc(long *param_1)

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



/* Entry: 10943a88c; end: 10943b0f7;  */

/* WARNING: Removing unreachable block (ram,0x00010943ab7c) */

void FUN_10943a88c(double *param_1,double *param_2)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double *pdVar14;
  double dVar15;
  long lVar16;
  long lVar17;
  double *pdVar18;
  char cVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  byte bVar23;
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  
  if ((((*(char *)((long)param_1 + 0x125) != '\x01') || (param_1[0x27] != 1.97626258336499e-323)) ||
      (param_1[0x28] != 1.97626258336499e-323)) || (*(int *)((long)param_1 + 300) != 0x10)) {
    param_1[0x27] = 1.97626258336499e-323;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined2 *)((long)param_1 + 0x124) = 0x100;
    *(undefined4 *)((long)param_1 + 300) = 0x10;
    *(undefined4 *)((long)param_1 + 0x127) = 0x10000;
    param_1[0x29] = 1.97626258336499e-323;
    param_1[0x28] = 1.97626258336499e-323;
  }
  auVar29._0_8_ = ABS(*param_2);
  auVar29._8_8_ = ABS(param_2[1]);
  auVar27._0_8_ = ABS(param_2[2]);
  auVar27._8_8_ = ABS(param_2[3]);
  auVar24 = NEON_fmax(auVar29,auVar27,8);
  auVar26._0_8_ = ABS(param_2[4]);
  auVar26._8_8_ = ABS(param_2[5]);
  auVar32._0_8_ = ABS(param_2[6]);
  auVar32._8_8_ = ABS(param_2[7]);
  auVar27 = NEON_fmax(auVar26,auVar32,8);
  auVar27 = NEON_fmax(auVar24,auVar27,8);
  auVar28._0_8_ = ABS(param_2[8]);
  auVar28._8_8_ = ABS(param_2[9]);
  auVar33._0_8_ = ABS(param_2[10]);
  auVar33._8_8_ = ABS(param_2[0xb]);
  auVar29 = NEON_fmax(auVar28,auVar33,8);
  auVar34._0_8_ = ABS(param_2[0xc]);
  auVar34._8_8_ = ABS(param_2[0xd]);
  auVar24._8_8_ = ABS(param_2[0xf]);
  auVar24._0_8_ = ABS(param_2[0xe]);
  auVar24 = NEON_fmax(auVar34,auVar24,8);
  auVar24 = NEON_fmax(auVar29,auVar24,8);
  auVar24 = NEON_fmax(auVar27,auVar24,8);
  dVar15 = auVar24._8_8_;
  dVar31 = auVar24._0_8_;
  bVar9 = true;
  if ((dVar15 <= dVar31) && (bVar9 = true, !NAN(dVar15))) {
    bVar9 = false;
  }
  if (!bVar9) {
    dVar15 = dVar31;
  }
  if (!NAN(dVar31)) {
    dVar31 = dVar15;
  }
  if (0x7fefffffffffffff < (ulong)ABS(dVar31)) {
    *(undefined1 *)((long)param_1 + 0x124) = 1;
    *(undefined4 *)(param_1 + 0x24) = 3;
    return;
  }
  dVar15 = 1.0;
  if (dVar31 != 0.0) {
    dVar15 = dVar31;
  }
  dVar25 = *param_2 / dVar15;
  param_1[0x2d] = param_2[1] / dVar15;
  param_1[0x2c] = dVar25;
  dVar31 = param_2[2];
  param_1[0x2f] = param_2[3] / dVar15;
  param_1[0x2e] = dVar31 / dVar15;
  dVar31 = param_2[4];
  dVar30 = param_2[5] / dVar15;
  param_1[0x31] = dVar30;
  param_1[0x30] = dVar31 / dVar15;
  dVar31 = param_2[6];
  param_1[0x33] = param_2[7] / dVar15;
  param_1[0x32] = dVar31 / dVar15;
  dVar31 = param_2[8];
  param_1[0x35] = param_2[9] / dVar15;
  param_1[0x34] = dVar31 / dVar15;
  dVar31 = param_2[10] / dVar15;
  param_1[0x37] = param_2[0xb] / dVar15;
  param_1[0x36] = dVar31;
  dVar35 = param_2[0xc];
  param_1[0x39] = param_2[0xd] / dVar15;
  param_1[0x38] = dVar35 / dVar15;
  dVar13 = param_2[0xe];
  dVar35 = param_2[0xf] / dVar15;
  param_1[0x3b] = dVar35;
  param_1[0x3a] = dVar13 / dVar15;
  cVar4 = *(char *)((long)param_1 + 0x127);
  if (cVar4 == '\x01') {
    param_1[0xd] = 0.0;
    param_1[0xc] = 0.0;
    param_1[0xf] = 0.0;
    param_1[0xe] = 0.0;
    param_1[9] = 0.0;
    param_1[8] = 0.0;
    param_1[0xb] = 0.0;
    param_1[10] = 0.0;
    param_1[5] = 0.0;
    param_1[4] = 0.0;
    param_1[7] = 0.0;
    param_1[6] = 0.0;
    param_1[1] = 0.0;
    *param_1 = 0.0;
    param_1[3] = 0.0;
    param_1[2] = 0.0;
    *param_1 = 1.0;
    param_1[5] = 1.0;
    param_1[10] = 1.0;
    param_1[0xf] = 1.0;
    cVar5 = *(char *)(param_1 + 0x25);
  }
  else {
    cVar5 = *(char *)(param_1 + 0x25);
  }
  if (cVar5 == '\x01') {
    param_1[0xd] = 0.0;
    param_1[0xc] = 0.0;
    param_1[0xf] = 0.0;
    param_1[0xe] = 0.0;
    param_1[9] = 0.0;
    param_1[8] = 0.0;
    param_1[0xb] = 0.0;
    param_1[10] = 0.0;
    param_1[5] = 0.0;
    param_1[4] = 0.0;
    param_1[7] = 0.0;
    param_1[6] = 0.0;
    param_1[1] = 0.0;
    *param_1 = 0.0;
    param_1[3] = 0.0;
    param_1[2] = 0.0;
    *param_1 = 1.0;
    param_1[5] = 1.0;
    param_1[10] = 1.0;
    param_1[0xf] = 1.0;
    cVar6 = *(char *)((long)param_1 + 0x129);
  }
  else {
    cVar6 = *(char *)((long)param_1 + 0x129);
  }
  if (cVar6 == '\x01') {
    param_1[0x1d] = 0.0;
    param_1[0x1c] = 0.0;
    param_1[0x1f] = 0.0;
    param_1[0x1e] = 0.0;
    param_1[0x19] = 0.0;
    param_1[0x18] = 0.0;
    param_1[0x1b] = 0.0;
    param_1[0x1a] = 0.0;
    param_1[0x15] = 0.0;
    param_1[0x14] = 0.0;
    param_1[0x17] = 0.0;
    param_1[0x16] = 0.0;
    param_1[0x11] = 0.0;
    param_1[0x10] = 0.0;
    param_1[0x13] = 0.0;
    param_1[0x12] = 0.0;
    param_1[0x10] = 1.0;
    param_1[0x15] = 1.0;
    param_1[0x1a] = 1.0;
    param_1[0x1f] = 1.0;
    cVar19 = *(char *)((long)param_1 + 0x12a);
    cVar7 = cVar19;
  }
  else {
    cVar19 = *(char *)((long)param_1 + 0x12a);
    cVar7 = '\x01';
  }
  if (cVar19 == '\x01') {
    param_1[0x1d] = 0.0;
    param_1[0x1c] = 0.0;
    param_1[0x1f] = 0.0;
    param_1[0x1e] = 0.0;
    param_1[0x19] = 0.0;
    param_1[0x18] = 0.0;
    param_1[0x1b] = 0.0;
    param_1[0x1a] = 0.0;
    param_1[0x15] = 0.0;
    param_1[0x14] = 0.0;
    param_1[0x17] = 0.0;
    param_1[0x16] = 0.0;
    param_1[0x11] = 0.0;
    param_1[0x10] = 0.0;
    param_1[0x13] = 0.0;
    param_1[0x12] = 0.0;
    param_1[0x10] = 1.0;
    param_1[0x15] = 1.0;
    param_1[0x1a] = 1.0;
    param_1[0x1f] = 1.0;
    cVar19 = cVar7;
  }
  dVar13 = param_1[0x29];
  if (1 < (long)dVar13) {
    dVar25 = (double)((ulong)ABS(dVar25) ^
                     ((ulong)ABS(dVar25) ^ (ulong)ABS(dVar30)) & -(ulong)(ABS(dVar25) < ABS(dVar30))
                     );
    dVar31 = (double)((ulong)ABS(dVar31) ^
                     ((ulong)ABS(dVar31) ^ (ulong)ABS(dVar35)) & -(ulong)(ABS(dVar31) < ABS(dVar35))
                     );
    if (dVar31 <= dVar25) {
      dVar31 = dVar25;
    }
    bVar23 = 1;
    lVar17 = 1;
    do {
      lVar20 = 0;
      pdVar18 = param_1 + lVar17 + 0x2c;
      pdVar14 = param_1 + lVar17 * 4 + 0x2c;
      pdVar1 = param_1 + lVar17 * 4;
      pdVar2 = param_1 + lVar17 * 4 + 0x10;
      lVar16 = lVar17 * 0x20 + 0x160;
      lVar21 = lVar17 * 8 + 0x160;
      lVar11 = 0x160;
      lVar22 = 0x160;
      lVar12 = lVar17;
      do {
        dVar25 = dVar31 * 4.440892098500626e-16;
        if (dVar25 <= 2.2250738585072014e-308) {
          dVar25 = 2.2250738585072014e-308;
        }
        dVar30 = *(double *)((long)param_1 + lVar21);
        dVar38 = ABS(dVar30);
        dVar39 = *(double *)((long)param_1 + lVar16);
        dVar35 = ABS(dVar39);
        bVar9 = false;
        bVar8 = false;
        bVar10 = false;
        if (dVar38 <= dVar25) {
          bVar9 = false;
          bVar8 = false;
          bVar10 = true;
          if (!NAN(dVar35) && !NAN(dVar25)) {
            bVar9 = dVar35 < dVar25;
            bVar8 = dVar35 == dVar25;
            bVar10 = false;
          }
        }
        dVar25 = dVar31;
        if (!bVar8 && bVar9 == bVar10) {
          dVar25 = pdVar14[lVar17];
          dVar35 = *(double *)((long)param_1 + lVar22);
          if (2.2250738585072014e-308 <= ABS(dVar39 - dVar30)) {
            dVar36 = (dVar25 + dVar35) / (dVar39 - dVar30);
            dVar40 = SQRT(dVar36 * dVar36 + 1.0);
            dVar37 = 1.0 / dVar40;
            dVar36 = dVar36 / dVar40;
            if (dVar36 == 1.0) goto LAB_10943aba8;
LAB_10943ac2c:
            dVar25 = dVar39 * dVar37 + dVar25 * dVar36;
            dVar38 = dVar35 * dVar37;
            dVar35 = dVar35 * dVar36 - dVar30 * dVar37;
            dVar30 = dVar38 + dVar30 * dVar36;
            dVar38 = ABS(dVar30);
            dVar39 = dVar38 + dVar38;
            if (dVar39 < 2.2250738585072014e-308) goto LAB_10943ac54;
LAB_10943abbc:
            dVar39 = (dVar25 - dVar35) / dVar39;
            dVar25 = SQRT(dVar39 * dVar39 + 1.0);
            if (dVar39 <= 0.0) {
              dVar25 = -dVar25;
            }
            dVar39 = 1.0 / (dVar39 + dVar25);
            dVar35 = 1.0 / SQRT(dVar39 * dVar39 + 1.0);
            dVar25 = -(dVar30 / dVar38);
            if (dVar39 <= 0.0) {
              dVar25 = dVar30 / dVar38;
            }
            dVar25 = ABS(dVar39) * dVar25 * dVar35;
            dVar38 = dVar37 * dVar25 + dVar35 * dVar36;
            dVar30 = dVar37 * dVar35 - dVar25 * dVar36;
            if (dVar38 == 1.0) goto LAB_10943ac74;
LAB_10943ac7c:
            pdVar3 = (double *)((long)param_1 + lVar11);
            dVar39 = *pdVar18;
            dVar36 = *pdVar3;
            *pdVar18 = dVar30 * dVar36 + dVar39 * dVar38;
            *pdVar3 = dVar38 * dVar36 - dVar39 * dVar30;
            dVar39 = pdVar18[4];
            dVar36 = pdVar3[4];
            pdVar18[4] = dVar30 * dVar36 + dVar39 * dVar38;
            pdVar3[4] = dVar38 * dVar36 - dVar39 * dVar30;
            dVar39 = pdVar18[8];
            dVar36 = pdVar3[8];
            pdVar18[8] = dVar30 * dVar36 + dVar39 * dVar38;
            pdVar3[8] = dVar38 * dVar36 - dVar39 * dVar30;
            dVar39 = pdVar18[0xc];
            dVar36 = pdVar3[0xc];
            pdVar18[0xc] = dVar30 * dVar36 + dVar39 * dVar38;
            pdVar3[0xc] = dVar38 * dVar36 - dVar39 * dVar30;
            if (cVar5 != '\0' || cVar4 != '\0') {
              dVar39 = -dVar30;
              pdVar3 = (double *)((long)param_1 + lVar20);
              dVar36 = *pdVar1;
              dVar37 = *pdVar3;
              *pdVar1 = dVar30 * dVar37 + dVar36 * dVar38;
              *pdVar3 = dVar38 * dVar37 + dVar36 * dVar39;
              dVar36 = pdVar1[1];
              dVar37 = pdVar3[1];
              pdVar1[1] = dVar30 * dVar37 + dVar36 * dVar38;
              pdVar3[1] = dVar38 * dVar37 + dVar36 * dVar39;
              dVar36 = pdVar1[2];
              dVar37 = pdVar3[2];
              pdVar1[2] = dVar30 * dVar37 + dVar36 * dVar38;
              pdVar3[2] = dVar38 * dVar37 + dVar36 * dVar39;
              dVar36 = pdVar1[3];
              dVar37 = pdVar3[3];
              pdVar1[3] = dVar30 * dVar37 + dVar36 * dVar38;
              pdVar3[3] = dVar38 * dVar37 + dVar36 * dVar39;
            }
          }
          else {
            dVar36 = 1.0;
            dVar37 = 0.0;
LAB_10943aba8:
            if (dVar37 != 0.0) goto LAB_10943ac2c;
            dVar39 = dVar38 + dVar38;
            if (2.2250738585072014e-308 <= dVar39) goto LAB_10943abbc;
LAB_10943ac54:
            dVar35 = 1.0;
            dVar25 = 0.0;
            dVar38 = dVar37 * 0.0 + dVar36 * 1.0;
            dVar30 = dVar37 * 1.0 - dVar36 * 0.0;
            if (dVar38 != 1.0) goto LAB_10943ac7c;
LAB_10943ac74:
            if (dVar30 != 0.0) goto LAB_10943ac7c;
          }
          if ((dVar35 != 1.0) || (dVar25 != 0.0)) {
            dVar30 = -dVar25;
            dVar38 = *pdVar14;
            dVar39 = *(double *)((long)param_1 + lVar20 + 0x160);
            *pdVar14 = dVar39 * dVar30 + dVar38 * dVar35;
            *(double *)((long)param_1 + lVar20 + 0x160) = dVar35 * dVar39 + dVar38 * dVar25;
            dVar38 = pdVar14[1];
            dVar39 = *(double *)((long)param_1 + lVar20 + 0x168);
            pdVar14[1] = dVar39 * dVar30 + dVar38 * dVar35;
            *(double *)((long)param_1 + lVar20 + 0x168) = dVar35 * dVar39 + dVar38 * dVar25;
            dVar38 = pdVar14[2];
            dVar39 = *(double *)((long)param_1 + lVar20 + 0x170);
            pdVar14[2] = dVar39 * dVar30 + dVar38 * dVar35;
            *(double *)((long)param_1 + lVar20 + 0x170) = dVar35 * dVar39 + dVar38 * dVar25;
            dVar38 = pdVar14[3];
            dVar39 = *(double *)((long)param_1 + lVar20 + 0x178);
            pdVar14[3] = dVar39 * dVar30 + dVar38 * dVar35;
            *(double *)((long)param_1 + lVar20 + 0x178) = dVar35 * dVar39 + dVar38 * dVar25;
            if (cVar19 != '\0' || cVar6 != '\0') {
              dVar38 = *pdVar2;
              dVar39 = *(double *)((long)param_1 + lVar20 + 0x80);
              *pdVar2 = dVar39 * dVar30 + dVar38 * dVar35;
              *(double *)((long)param_1 + lVar20 + 0x80) = dVar35 * dVar39 + dVar38 * dVar25;
              dVar38 = pdVar2[1];
              dVar39 = *(double *)((long)param_1 + lVar20 + 0x88);
              pdVar2[1] = dVar39 * dVar30 + dVar38 * dVar35;
              *(double *)((long)param_1 + lVar20 + 0x88) = dVar35 * dVar39 + dVar38 * dVar25;
              dVar38 = pdVar2[2];
              dVar39 = *(double *)((long)param_1 + lVar20 + 0x90);
              pdVar2[2] = dVar39 * dVar30 + dVar38 * dVar35;
              *(double *)((long)param_1 + lVar20 + 0x90) = dVar35 * dVar39 + dVar38 * dVar25;
              dVar38 = pdVar2[3];
              dVar39 = *(double *)((long)param_1 + lVar20 + 0x98);
              pdVar2[3] = dVar39 * dVar30 + dVar38 * dVar35;
              *(double *)((long)param_1 + lVar20 + 0x98) = dVar35 * dVar39 + dVar38 * dVar25;
            }
          }
          bVar23 = 0;
          dVar25 = ABS(*(double *)((long)param_1 + lVar22));
          if (ABS(*(double *)((long)param_1 + lVar22)) <= ABS(pdVar18[lVar17 * 4])) {
            dVar25 = ABS(pdVar18[lVar17 * 4]);
          }
          if (dVar25 <= dVar31) {
            dVar25 = dVar31;
          }
        }
        dVar31 = dVar25;
        lVar22 = lVar22 + 0x28;
        lVar20 = lVar20 + 0x20;
        lVar11 = lVar11 + 8;
        lVar21 = lVar21 + 0x20;
        lVar16 = lVar16 + 8;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      bVar8 = (double)(lVar17 + 1) == dVar13;
      bVar9 = (bool)(bVar8 & bVar23);
      bVar23 = bVar8 | bVar23;
      lVar16 = 1;
      if (!bVar8) {
        lVar16 = lVar17 + 1;
      }
      lVar17 = lVar16;
    } while (!bVar9);
  }
  if (0 < (long)dVar13) {
    lVar16 = 0;
    lVar17 = 0;
    pdVar18 = param_1;
    do {
      dVar31 = *(double *)((long)param_1 + lVar16 + 0x160);
      param_1[lVar17 + 0x20] = ABS(dVar31);
      if ((*(byte *)((long)param_1 + 0x127) & 1) == 0) {
        bVar23 = *(byte *)(param_1 + 0x25);
      }
      else {
        bVar23 = 1;
      }
      if ((dVar31 < 0.0) && ((bVar23 & 1) != 0)) {
        pdVar18[1] = -pdVar18[1];
        *pdVar18 = -*pdVar18;
        pdVar18[3] = -pdVar18[3];
        pdVar18[2] = -pdVar18[2];
        dVar13 = param_1[0x29];
      }
      lVar17 = lVar17 + 1;
      pdVar18 = pdVar18 + 4;
      lVar16 = lVar16 + 0x28;
    } while (lVar17 < (long)dVar13);
  }
  param_1[0x21] = param_1[0x21] * dVar15;
  param_1[0x20] = param_1[0x20] * dVar15;
  param_1[0x23] = param_1[0x23] * dVar15;
  param_1[0x22] = param_1[0x22] * dVar15;
  param_1[0x26] = dVar13;
  if (0 < (long)dVar13) {
    lVar17 = 0;
    dVar15 = 0.0;
    pdVar18 = param_1 + 0x25;
    do {
      dVar31 = param_1[0x24 - ((long)dVar13 - (long)dVar15)];
      if ((long)dVar13 - (long)dVar15 < 2) {
        if (dVar31 == 0.0) goto LAB_10943b0e4;
      }
      else {
        lVar21 = 0;
        lVar16 = 1;
        pdVar14 = pdVar18 + -(long)dVar13;
        dVar25 = dVar31;
        do {
          dVar30 = *pdVar14;
          dVar35 = dVar30;
          lVar22 = lVar16;
          if (dVar30 <= dVar25) {
            dVar30 = dVar25;
            dVar35 = dVar31;
            lVar22 = lVar21;
          }
          lVar21 = lVar22;
          dVar31 = dVar35;
          dVar25 = dVar30;
          lVar16 = lVar16 + 1;
          pdVar14 = pdVar14 + 1;
        } while ((long)dVar13 + lVar17 != lVar16);
        if (dVar31 == 0.0) {
LAB_10943b0e4:
          param_1[0x26] = dVar15;
          break;
        }
        if (lVar21 != 0) {
          lVar21 = lVar21 + (long)dVar15;
          dVar31 = param_1[(long)dVar15 + 0x20];
          param_1[(long)dVar15 + 0x20] = param_1[lVar21 + 0x20];
          param_1[lVar21 + 0x20] = dVar31;
          if (((*(byte *)((long)param_1 + 0x127) & 1) != 0) || (*(char *)(param_1 + 0x25) == '\x01')
             ) {
            pdVar14 = param_1 + lVar21 * 4;
            pdVar1 = param_1 + (long)dVar15 * 4;
            dVar13 = pdVar1[1];
            dVar35 = *pdVar1;
            dVar39 = pdVar1[3];
            dVar38 = pdVar1[2];
            dVar31 = *pdVar14;
            dVar25 = pdVar14[2];
            dVar30 = pdVar14[3];
            pdVar1[1] = pdVar14[1];
            *pdVar1 = dVar31;
            pdVar1[3] = dVar30;
            pdVar1[2] = dVar25;
            pdVar14[1] = dVar13;
            *pdVar14 = dVar35;
            pdVar14[3] = dVar39;
            pdVar14[2] = dVar38;
          }
          if (((*(byte *)((long)param_1 + 0x129) & 1) != 0) ||
             (*(char *)((long)param_1 + 0x12a) == '\x01')) {
            pdVar14 = param_1 + lVar21 * 4 + 0x10;
            pdVar1 = param_1 + (long)dVar15 * 4 + 0x10;
            dVar13 = pdVar1[1];
            dVar35 = *pdVar1;
            dVar39 = pdVar1[3];
            dVar38 = pdVar1[2];
            dVar31 = *pdVar14;
            dVar25 = pdVar14[2];
            dVar30 = pdVar14[3];
            pdVar1[1] = pdVar14[1];
            *pdVar1 = dVar31;
            pdVar1[3] = dVar30;
            pdVar1[2] = dVar25;
            pdVar14[1] = dVar13;
            *pdVar14 = dVar35;
            pdVar14[3] = dVar39;
            pdVar14[2] = dVar38;
          }
        }
      }
      dVar15 = (double)((long)dVar15 + 1);
      dVar13 = param_1[0x29];
      lVar17 = lVar17 + -1;
      pdVar18 = pdVar18 + 1;
    } while ((long)dVar15 < (long)dVar13);
  }
  *(undefined1 *)((long)param_1 + 0x124) = 1;
  return;
}



/* Entry: 10943b0f8; end: 10943b297;  */

void FUN_10943b0f8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  *param_1 = *param_2;
  uVar11 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar11;
  uVar11 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar11;
  uVar11 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar11;
  uVar11 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar11;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  FUN_10937da58(param_1 + 0xb,param_2 + 0xb);
  uVar11 = *param_3;
  uVar13 = param_3[3];
  uVar12 = param_3[2];
  param_1[0xf] = param_3[1];
  param_1[0xe] = uVar11;
  param_1[0x11] = uVar13;
  param_1[0x10] = uVar12;
  uVar12 = param_3[5];
  uVar11 = param_3[4];
  param_1[0x14] = param_3[6];
  param_1[0x13] = uVar12;
  param_1[0x12] = uVar11;
  uVar14 = param_3[0xd];
  uVar13 = param_3[0xc];
  uVar12 = param_3[0xf];
  uVar11 = param_3[0xe];
  uVar16 = param_3[0xb];
  uVar15 = param_3[10];
  param_1[0x1e] = param_3[0x10];
  param_1[0x1b] = uVar14;
  param_1[0x1a] = uVar13;
  param_1[0x1d] = uVar12;
  param_1[0x1c] = uVar11;
  param_1[0x19] = uVar16;
  param_1[0x18] = uVar15;
  uVar11 = param_3[8];
  param_1[0x17] = param_3[9];
  param_1[0x16] = uVar11;
  uVar11 = *param_4;
  param_1[0x21] = param_4[1];
  param_1[0x20] = uVar11;
  uVar11 = param_4[2];
  param_1[0x23] = param_4[3];
  param_1[0x22] = uVar11;
  uVar12 = param_4[5];
  uVar11 = param_4[4];
  uVar13 = param_4[6];
  uVar15 = param_4[9];
  uVar14 = param_4[8];
  param_1[0x27] = param_4[7];
  param_1[0x26] = uVar13;
  param_1[0x29] = uVar15;
  param_1[0x28] = uVar14;
  param_1[0x25] = uVar12;
  param_1[0x24] = uVar11;
  uVar11 = param_4[10];
  uVar13 = param_4[0xd];
  uVar12 = param_4[0xc];
  param_1[0x2b] = param_4[0xb];
  param_1[0x2a] = uVar11;
  param_1[0x2d] = uVar13;
  param_1[0x2c] = uVar12;
  uVar11 = param_4[0xe];
  param_1[0x2f] = param_4[0xf];
  param_1[0x2e] = uVar11;
  lVar8 = param_4[0x11];
  uVar11 = param_4[0x10];
  param_1[0x31] = param_4[0x11];
  param_1[0x30] = uVar11;
  param_1[0x32] = param_1 + 0x2b;
  param_1[0x33] = param_1 + 0x34;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x14);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (*(int *)((long)param_4 + 0x54) < 3) {
    puVar9 = (undefined8 *)param_4[0x13];
    puVar10 = (undefined8 *)param_1[0x33];
    *puVar10 = *puVar9;
    puVar10[1] = puVar9[1];
    return;
  }
  *(undefined4 *)((long)param_1 + 0x154) = 0;
  FUN_109a844cc(param_1 + 0x2a,*(undefined4 *)((long)param_4 + 0x54),0,0,0);
  if (0 < *(int *)((long)param_1 + 0x154)) {
    lVar8 = 0;
    lVar2 = param_4[0x12];
    lVar4 = param_4[0x13];
    lVar3 = param_1[0x32];
    lVar5 = param_1[0x33];
    do {
      *(undefined4 *)(lVar3 + lVar8 * 4) = *(undefined4 *)(lVar2 + lVar8 * 4);
      *(undefined8 *)(lVar5 + lVar8 * 8) = *(undefined8 *)(lVar4 + lVar8 * 8);
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)((long)param_1 + 0x154));
  }
  return;
}



/* Entry: 10943b298; end: 10943b3af;  */

long * FUN_10943b298(long *param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar3 = param_1[1];
  lVar9 = param_1[2];
  while (lVar9 != lVar3) {
    param_1[2] = lVar9 + -0x1b0;
    if (*(long *)(lVar9 + -0x28) != 0) {
      piVar1 = (int *)(*(long *)(lVar9 + -0x28) + 0x14);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((iVar2 + -1 == 0) && (*(long *)(lVar9 + -0x28) != 0)) {
        plVar6 = *(long **)(*(long *)(lVar9 + -0x28) + 8);
        if ((plVar6 == (long *)0x0) &&
           ((plVar6 = *(long **)(lVar9 + -0x30), *(long **)(lVar9 + -0x30) == (long *)0x0 &&
            (plVar6 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
          FUN_109a83e3c();
          plVar6 = plRam000000011382bb80;
        }
        (**(code **)(*plVar6 + 0x30))();
      }
    }
    *(undefined8 *)(lVar9 + -0x28) = 0;
    *(undefined8 *)(lVar9 + -0x48) = 0;
    *(undefined8 *)(lVar9 + -0x50) = 0;
    *(undefined8 *)(lVar9 + -0x38) = 0;
    *(undefined8 *)(lVar9 + -0x40) = 0;
    if (0 < *(int *)(lVar9 + -0x5c)) {
      lVar7 = 0;
      lVar8 = *(long *)(lVar9 + -0x20);
      do {
        *(undefined4 *)(lVar8 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar9 + -0x5c));
    }
    lVar7 = *(long *)(lVar9 + -0x18);
    if (lVar7 != lVar9 + -0x10 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
    _free(*(undefined8 *)(lVar9 + -0x158));
    lVar9 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10943b3b0; end: 10943b3c3;  */

undefined * FUN_10943b3b0(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar5 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((puVar5[0x18] & 1) == 0) {
    lVar9 = **(long **)(puVar5 + 8);
    for (lVar10 = **(long **)(puVar5 + 0x10); lVar10 != lVar9; lVar10 = lVar10 + -0x1b0) {
      if (*(long *)(lVar10 + -0x28) != 0) {
        piVar1 = (int *)(*(long *)(lVar10 + -0x28) + 0x14);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((iVar2 + -1 == 0) && (*(long *)(lVar10 + -0x28) != 0)) {
          plVar6 = *(long **)(*(long *)(lVar10 + -0x28) + 8);
          if ((plVar6 == (long *)0x0) &&
             ((plVar6 = *(long **)(lVar10 + -0x30), *(long **)(lVar10 + -0x30) == (long *)0x0 &&
              (plVar6 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
            FUN_109a83e3c();
            plVar6 = plRam000000011382bb80;
          }
          (**(code **)(*plVar6 + 0x30))();
        }
      }
      *(undefined8 *)(lVar10 + -0x28) = 0;
      *(undefined8 *)(lVar10 + -0x48) = 0;
      *(undefined8 *)(lVar10 + -0x50) = 0;
      *(undefined8 *)(lVar10 + -0x38) = 0;
      *(undefined8 *)(lVar10 + -0x40) = 0;
      if (0 < *(int *)(lVar10 + -0x5c)) {
        lVar7 = 0;
        lVar8 = *(long *)(lVar10 + -0x20);
        do {
          *(undefined4 *)(lVar8 + lVar7 * 4) = 0;
          lVar7 = lVar7 + 1;
        } while (lVar7 < *(int *)(lVar10 + -0x5c));
      }
      lVar7 = *(long *)(lVar10 + -0x18);
      if (lVar7 != lVar10 + -0x10 && lVar7 != 0) {
        _free(*(undefined8 *)(lVar7 + -8));
      }
      _free(*(undefined8 *)(lVar10 + -0x158));
    }
  }
  return puVar5;
}



/* Entry: 10943b3c4; end: 10943b4e3;  */

long FUN_10943b3c4(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar8 = **(long **)(param_1 + 8);
    for (lVar9 = **(long **)(param_1 + 0x10); lVar9 != lVar8; lVar9 = lVar9 + -0x1b0) {
      if (*(long *)(lVar9 + -0x28) != 0) {
        piVar1 = (int *)(*(long *)(lVar9 + -0x28) + 0x14);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((iVar2 + -1 == 0) && (*(long *)(lVar9 + -0x28) != 0)) {
          plVar5 = *(long **)(*(long *)(lVar9 + -0x28) + 8);
          if ((plVar5 == (long *)0x0) &&
             ((plVar5 = *(long **)(lVar9 + -0x30), *(long **)(lVar9 + -0x30) == (long *)0x0 &&
              (plVar5 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
            FUN_109a83e3c();
            plVar5 = plRam000000011382bb80;
          }
          (**(code **)(*plVar5 + 0x30))();
        }
      }
      *(undefined8 *)(lVar9 + -0x28) = 0;
      *(undefined8 *)(lVar9 + -0x48) = 0;
      *(undefined8 *)(lVar9 + -0x50) = 0;
      *(undefined8 *)(lVar9 + -0x38) = 0;
      *(undefined8 *)(lVar9 + -0x40) = 0;
      if (0 < *(int *)(lVar9 + -0x5c)) {
        lVar6 = 0;
        lVar7 = *(long *)(lVar9 + -0x20);
        do {
          *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(lVar9 + -0x5c));
      }
      lVar6 = *(long *)(lVar9 + -0x18);
      if (lVar6 != lVar9 + -0x10 && lVar6 != 0) {
        _free(*(undefined8 *)(lVar6 + -8));
      }
      _free(*(undefined8 *)(lVar9 + -0x158));
    }
  }
  return param_1;
}



/* Entry: 10943b4e4; end: 10943b5db;  */

undefined8 * FUN_10943b4e4(undefined8 *param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 6) == 0) {
    param_1[5] = 0;
    *param_1 = &PTR_DAT_110b1dad0;
    lVar1 = param_1[1];
  }
  else {
    lVar1 = param_1[5];
    param_1[5] = 0;
    if (lVar1 != 0) {
      _free(*(undefined8 *)(lVar1 + 0x58));
      __ZdlPv(lVar1);
    }
    *param_1 = &PTR_DAT_110b1dad0;
    lVar1 = param_1[1];
  }
  if (lVar1 != 0) {
    param_1[2] = lVar1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10943b5dc; end: 10943be17;  */

undefined8 FUN_10943b5dc(long param_1,undefined8 *param_2,double *param_3,long *param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double *pdVar5;
  long lVar6;
  undefined1 (*pauVar7) [16];
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  double dVar51;
  undefined1 auVar52 [16];
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  
  lVar6 = *(long *)(param_1 + 0x28);
  pauVar7 = (undefined1 (*) [16])*param_2;
  if (param_4 == (long *)0x0) {
    FUN_1093804f0(&dStack_a0,lVar6 + 0x70);
    dStack_a0 = dStack_a0 * dStack_88;
    dStack_98 = dStack_98 * dStack_88;
    dStack_88 = dStack_88 * dStack_90;
    dVar25 = dStack_98 * dStack_98 + dStack_a0 * dStack_a0 + dStack_88 * dStack_88;
    if (dVar25 <= 2.220446049250313e-16) {
      dVar10 = *(double *)(*pauVar7 + 8);
      dVar25 = *(double *)pauVar7[1];
      dVar12 = *(double *)*pauVar7;
      dVar8 = dVar12 + -(dStack_88 * dVar10) + dVar25 * dStack_98;
      dVar33 = dVar10 + -(dStack_a0 * dVar25) + dVar12 * dStack_88;
      dVar25 = dVar25 + -(dStack_98 * dVar12) + dVar10 * dStack_a0;
    }
    else {
      dVar25 = SQRT(dVar25);
      auVar40 = ___sincos_stret(dVar25);
      dVar12 = auVar40._8_8_;
      dVar10 = auVar40._0_8_;
      dVar25 = 1.0 / dVar25;
      dStack_a0 = dStack_a0 * dVar25;
      dStack_98 = dStack_98 * dVar25;
      dStack_88 = dStack_88 * dVar25;
      dVar16 = *(double *)(*pauVar7 + 8);
      dVar25 = *(double *)pauVar7[1];
      dVar18 = *(double *)*pauVar7;
      dVar51 = (1.0 - dVar12) * (dStack_98 * dVar16 + dVar18 * dStack_a0 + dVar25 * dStack_88);
      dVar8 = dVar10 * (-(dStack_88 * dVar16) + dVar25 * dStack_98) + dVar12 * dVar18 +
              dVar51 * dStack_a0;
      dVar33 = dVar10 * (-(dStack_a0 * dVar25) + dVar18 * dStack_88) + dVar12 * dVar16 +
               dVar51 * dStack_98;
      dVar25 = dVar10 * (-(dStack_98 * dVar18) + dVar16 * dStack_a0) + dVar12 * dVar25 +
               dVar51 * dStack_88;
    }
    dVar25 = dVar25 + *(double *)(lVar6 + 0xa0);
    dVar10 = (dVar8 + *(double *)(lVar6 + 0x90)) / dVar25;
    dVar12 = 1.0;
    dVar25 = (dVar33 + *(double *)(lVar6 + 0x98)) / dVar25;
    if (*(int *)(lVar6 + 0x50) == 1) {
      dVar33 = dVar25 * dVar25 + dVar10 * dVar10;
      dVar12 = (*(double *)(lVar6 + 0x40) + dVar33 * *(double *)(lVar6 + 0x48)) * dVar33 + 1.0;
    }
    dVar33 = *(double *)(lVar6 + 0x28);
    dVar8 = *(double *)(lVar6 + 0x18);
    *param_3 = (*(double *)(lVar6 + 0x10) + dVar10 * dVar12 * *(double *)(lVar6 + 0x20)) -
               *(double *)(lVar6 + 0x100);
    param_3[1] = (dVar8 + dVar25 * dVar12 * dVar33) - *(double *)(lVar6 + 0x108);
  }
  else {
    dVar25 = *(double *)*pauVar7;
    dVar10 = *(double *)(*pauVar7 + 8);
    auVar2 = *pauVar7;
    auVar4 = *pauVar7;
    auVar11 = *pauVar7;
    auVar47 = *pauVar7;
    pauVar1 = (undefined1 (*) [16])(*pauVar7 + 8);
    dVar33 = *(double *)*pauVar1;
    dVar12 = *(double *)pauVar7[1];
    auVar52 = *pauVar1;
    auVar40 = *pauVar1;
    FUN_1093804f0(&dStack_a0,lVar6 + 0x70);
    dStack_a0 = dStack_a0 * dStack_88;
    dStack_98 = dStack_98 * dStack_88;
    dStack_88 = dStack_88 * dStack_90;
    dVar8 = dStack_88 * dStack_88 + dStack_a0 * dStack_a0 + dStack_98 * dStack_98;
    if (dVar8 <= 2.220446049250313e-16) {
      auVar11 = NEON_ext(auVar52,auVar2,8,1);
      auVar40._8_8_ = dStack_98;
      auVar40._0_8_ = dStack_a0;
      auVar47._8_8_ = dStack_98;
      auVar47._0_8_ = dStack_a0;
      auVar40 = NEON_ext(auVar40,auVar47,8,1);
      auVar47 = NEON_ext(auVar2,auVar2,8,1);
      dVar20 = (dVar12 * 0.0 + dStack_98 * 0.0) - (dVar10 * 0.0 + dStack_88 * 1.0);
      dVar16 = (dVar25 * 0.0 + dStack_88 * 1.0) - (dVar12 * 0.0 + dStack_a0 * 0.0);
      dVar27 = (auVar11._0_8_ * 0.0 + auVar40._0_8_) - (dVar10 * 0.0 + dStack_88 * 0.0);
      dVar29 = (auVar11._8_8_ * 0.0 + dStack_88 * 0.0) - (dVar12 * 0.0 + auVar40._8_8_);
      dVar18 = (dVar10 * 0.0 + dStack_a0 * 0.0) - (dVar25 * 0.0 + dStack_98 * 1.0);
      dVar51 = (dVar10 * 0.0 + dStack_a0 * 1.0) - (dVar25 * 0.0 + dStack_98 * 0.0);
      dVar13 = ((dVar12 * 0.0 + dStack_98 * 0.0) - (dVar10 * 0.0 + dStack_88 * 0.0)) + 1.0;
      dVar35 = dVar25 + (auVar11._0_8_ * auVar40._0_8_ - dVar33 * dStack_88);
      dVar37 = dVar10 + (auVar11._8_8_ * dStack_88 - dVar12 * auVar40._8_8_);
      dVar15 = ((dVar25 * 0.0 + dStack_88 * 0.0) - (dVar12 * 0.0 + dStack_a0 * 0.0)) + 1.0;
      dVar33 = dVar12 + (auVar47._0_8_ * dStack_a0 - auVar47._8_8_ * dStack_98);
      dVar25 = ((dVar10 * 0.0 + dStack_a0 * 0.0) - (dVar25 * 0.0 + dStack_98 * 0.0)) + 1.0;
    }
    else {
      dVar8 = SQRT(dVar8);
      dVar9 = 1.0 / (dVar8 + dVar8);
      dVar13 = (dStack_88 * 0.0 + dStack_88 * 0.0 +
               dStack_a0 * 0.0 + dStack_a0 * 0.0 + dStack_98 * 0.0 + dStack_98 * 0.0) * dVar9;
      dVar15 = (dStack_88 * 0.0 + dStack_88 * 0.0 +
               dStack_a0 * 0.0 + dStack_a0 * 0.0 + dStack_98 * 0.0 + dStack_98 * 0.0) * dVar9;
      dVar9 = (dStack_88 * 0.0 + dStack_88 * 0.0 +
              dStack_a0 * 0.0 + dStack_a0 * 0.0 + dStack_98 * 0.0 + dStack_98 * 0.0) * dVar9;
      auVar52 = ___sincos_stret(dVar8);
      dVar22 = auVar52._8_8_;
      dVar19 = auVar52._0_8_;
      dVar30 = dVar13 * -dVar19;
      dVar31 = dVar15 * -dVar19;
      dVar8 = 1.0 / dVar8;
      dVar16 = (0.0 - dVar13 * dVar8) * dVar8;
      dVar18 = (0.0 - dVar15 * dVar8) * dVar8;
      dVar21 = dVar8 * 0.0;
      dVar23 = dVar8 * 0.0;
      dVar41 = dVar21 + dVar16 * dStack_a0;
      dVar42 = dVar23 + dVar18 * dStack_a0;
      dVar32 = dVar21 + dVar16 * dStack_98;
      dVar36 = dVar23 + dVar18 * dStack_98;
      dVar14 = dStack_88 * dVar8;
      dVar21 = dVar21 + dVar16 * dStack_88;
      dVar23 = dVar23 + dVar18 * dStack_88;
      dVar26 = dStack_a0 * dVar8;
      dVar28 = dStack_98 * dVar8;
      auVar50 = NEON_ext(auVar40,auVar47,8,1);
      auVar52._8_8_ = dVar28;
      auVar52._0_8_ = dVar26;
      auVar2._8_8_ = dVar28;
      auVar2._0_8_ = dVar26;
      auVar47 = NEON_ext(auVar52,auVar2,8,1);
      dVar18 = auVar47._0_8_;
      auVar39._8_8_ = dVar14;
      auVar39._0_8_ = dVar18;
      auVar3._8_8_ = dVar28;
      auVar3._0_8_ = dVar26;
      auVar40 = NEON_ext(auVar39,auVar3,8,1);
      dVar43 = auVar50._0_8_ * dVar18 - dVar33 * auVar40._0_8_;
      dVar44 = auVar50._8_8_ * dVar14 - dVar12 * auVar40._8_8_;
      auVar52 = NEON_ext(auVar11,auVar4,8,1);
      dVar38 = auVar52._0_8_ * dVar26 - auVar52._8_8_ * dVar28;
      dVar16 = dVar14 * dVar12 + dVar10 * dVar28 + dVar25 * dVar26;
      dVar51 = 1.0 - dVar22;
      dVar45 = (0.0 - dVar30) * dVar16 +
               (dVar14 * 0.0 + dVar21 * dVar12 +
               dVar28 * 0.0 + dVar32 * dVar10 + dVar26 * 1.0 + dVar41 * dVar25) * dVar51;
      dVar46 = (0.0 - dVar31) * dVar16 +
               (dVar14 * 0.0 + dVar23 * dVar12 +
               dVar28 * 1.0 + dVar36 * dVar10 + dVar26 * 0.0 + dVar42 * dVar25) * dVar51;
      dVar13 = dVar13 * dVar22;
      dVar15 = dVar15 * dVar22;
      dVar17 = -(dVar19 * dVar9);
      dVar48 = dVar51 * dVar16;
      dVar20 = dVar22 * 0.0 + dVar31 * dVar25 +
               dVar15 * dVar43 +
               ((dVar28 * 0.0 + dVar36 * dVar12) - (dVar14 * 1.0 + dVar23 * dVar10)) * dVar19 +
               dVar42 * dVar48 + dVar46 * dVar26;
      dVar33 = dVar8 * (0.0 - dVar8 * dVar9);
      dVar8 = dVar8 * 0.0;
      dVar24 = dVar8 + dStack_88 * dVar33;
      dVar34 = dVar8 + dStack_a0 * dVar33;
      dVar8 = dVar8 + dStack_98 * dVar33;
      auVar11._8_8_ = dVar8;
      auVar11._0_8_ = dVar34;
      auVar4._8_8_ = dVar8;
      auVar4._0_8_ = dVar34;
      auVar40 = NEON_ext(auVar11,auVar4,8,1);
      dVar49 = (0.0 - dVar17) * dVar16 +
               dVar51 * (dVar14 + dVar24 * dVar12 +
                        dVar26 * 0.0 + dVar25 * dVar34 + dVar28 * 0.0 + dVar10 * dVar8);
      dVar9 = dVar22 * dVar9;
      dVar35 = dVar25 * dVar22 + dVar43 * dVar19 + dVar26 * dVar48;
      dVar37 = dVar10 * dVar22 + dVar44 * dVar19 + dVar28 * dVar48;
      dVar16 = dVar22 * 0.0 + dVar30 * dVar10 +
               dVar13 * dVar44 +
               ((dVar14 * 1.0 + dVar21 * dVar25) - (dVar26 * 0.0 + dVar41 * dVar12)) * dVar19 +
               dVar32 * dVar48 + dVar45 * dVar28;
      dVar27 = dVar22 * 0.0 + dVar25 * dVar17 +
               dVar43 * dVar9 +
               ((dVar18 + auVar50._0_8_ * auVar40._0_8_) - (dVar14 * 0.0 + dVar10 * dVar24)) *
               dVar19 + dVar34 * dVar48 + dVar26 * dVar49;
      dVar29 = dVar22 * 0.0 + dVar10 * dVar17 +
               dVar44 * dVar9 +
               ((dVar14 * 0.0 + auVar50._8_8_ * dVar24) - (auVar47._8_8_ + dVar12 * auVar40._8_8_))
               * dVar19 + dVar8 * dVar48 + dVar28 * dVar49;
      dVar33 = dVar22 * dVar12 + dVar19 * dVar38 + dVar14 * dVar48;
      dVar18 = dVar22 * 0.0 + dVar30 * dVar12 +
               dVar13 * dVar38 +
               ((dVar26 * 0.0 + dVar41 * dVar10) - (dVar28 * 1.0 + dVar32 * dVar25)) * dVar19 +
               dVar21 * dVar48 + dVar45 * dVar14;
      dVar51 = dVar22 * 0.0 + dVar31 * dVar12 +
               dVar15 * dVar38 +
               ((dVar26 * 1.0 + dVar42 * dVar10) - (dVar28 * 0.0 + dVar36 * dVar25)) * dVar19 +
               dVar23 * dVar48 + dVar46 * dVar14;
      dVar13 = dVar22 * 1.0 + dVar30 * dVar25 +
               dVar13 * dVar43 +
               ((dVar28 * 0.0 + dVar32 * dVar12) - (dVar14 * 0.0 + dVar21 * dVar10)) * dVar19 +
               dVar41 * dVar48 + dVar45 * dVar26 + 0.0;
      dVar15 = dVar22 * 1.0 + dVar31 * dVar10 +
               dVar15 * dVar44 +
               ((dVar14 * 0.0 + dVar23 * dVar25) - (dVar26 * 0.0 + dVar42 * dVar12)) * dVar19 +
               dVar36 * dVar48 + dVar46 * dVar28 + 0.0;
      dVar25 = dVar22 + dVar17 * dVar12 +
               dVar9 * dVar38 +
               dVar19 * ((dVar26 * 0.0 + auVar52._0_8_ * dVar34) -
                        (dVar28 * 0.0 + auVar52._8_8_ * dVar8)) + dVar48 * dVar24 + dVar14 * dVar49
               + 0.0;
    }
    dVar9 = 0.0;
    dVar19 = 0.0;
    dVar22 = 1.0;
    dVar14 = 1.0 / (dVar33 + *(double *)(lVar6 + 0xa0));
    dVar10 = (dVar35 + *(double *)(lVar6 + 0x90)) * dVar14;
    dVar33 = (dVar37 + *(double *)(lVar6 + 0x98)) * dVar14;
    dVar12 = (dVar13 - (dVar18 + 0.0) * dVar10) * dVar14;
    dVar8 = ((dVar20 + 0.0) - (dVar51 + 0.0) * dVar10) * dVar14;
    dVar16 = ((dVar16 + 0.0) - (dVar18 + 0.0) * dVar33) * dVar14;
    dVar18 = (dVar15 - (dVar51 + 0.0) * dVar33) * dVar14;
    dVar51 = ((dVar27 + 0.0) - dVar10 * dVar25) * dVar14;
    dVar14 = ((dVar29 + 0.0) - dVar33 * dVar25) * dVar14;
    dVar25 = 0.0;
    if (*(int *)(lVar6 + 0x50) == 1) {
      dVar13 = dVar12 * dVar10;
      dVar15 = dVar8 * dVar10;
      dVar20 = dVar16 * dVar33;
      dVar27 = dVar18 * dVar33;
      dVar29 = dVar10 * dVar51;
      dVar35 = dVar33 * dVar14;
      dVar25 = dVar10 * dVar10 + dVar33 * dVar33;
      dVar13 = dVar13 + dVar13 + dVar20 + dVar20;
      dVar15 = dVar15 + dVar15 + dVar27 + dVar27;
      dVar20 = dVar29 + dVar29 + dVar35 + dVar35;
      dVar29 = *(double *)(lVar6 + 0x48);
      dVar27 = *(double *)(lVar6 + 0x40) + dVar25 * dVar29;
      dVar22 = dVar25 * dVar27 + 1.0;
      dVar9 = dVar13 * dVar29 * dVar25 + dVar13 * dVar27 + 0.0;
      dVar19 = dVar15 * dVar29 * dVar25 + dVar15 * dVar27 + 0.0;
      dVar25 = dVar25 * dVar20 * dVar29 + dVar20 * dVar27 + 0.0;
    }
    dVar13 = *(double *)(lVar6 + 0x10);
    dVar20 = *(double *)(lVar6 + 0x28);
    dVar15 = *(double *)(lVar6 + 0x20);
    dVar27 = dVar15 * dVar22;
    dVar29 = dVar20 * dVar22;
    dVar35 = *(double *)(lVar6 + 0x100);
    param_3[1] = (*(double *)(lVar6 + 0x18) + dVar33 * dVar29) - *(double *)(lVar6 + 0x108);
    *param_3 = (dVar13 + dVar10 * dVar27) - dVar35;
    pdVar5 = (double *)*param_4;
    if (pdVar5 != (double *)0x0) {
      pdVar5[1] = dVar8 * dVar27 + (dVar22 * 0.0 + dVar19 * dVar15) * dVar10 + 0.0;
      *pdVar5 = dVar12 * dVar27 + (dVar22 * 0.0 + dVar9 * dVar15) * dVar10 + 0.0;
      pdVar5[2] = dVar51 * dVar27 + dVar10 * (dVar22 * 0.0 + dVar25 * dVar15) + 0.0;
      pdVar5[4] = dVar18 * dVar29 + (dVar22 * 0.0 + dVar19 * dVar20) * dVar33 + 0.0;
      pdVar5[3] = dVar16 * dVar29 + (dVar22 * 0.0 + dVar9 * dVar20) * dVar33 + 0.0;
      pdVar5[5] = dVar14 * dVar29 + dVar33 * (dVar22 * 0.0 + dVar25 * dVar20) + 0.0;
    }
  }
  return 1;
}



/* Entry: 10943be18; end: 10943be1f;  */

void FUN_10943be18(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10943be1c);
  (*pcVar1)();
}



/* Entry: 10943be20; end: 10943bf17;  */

undefined8 * FUN_10943be20(undefined8 *param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 6) == 0) {
    param_1[5] = 0;
    *param_1 = &PTR_DAT_110b1dad0;
    lVar1 = param_1[1];
  }
  else {
    lVar1 = param_1[5];
    param_1[5] = 0;
    if (lVar1 != 0) {
      _free(*(undefined8 *)(lVar1 + 0x68));
      __ZdlPv(lVar1);
    }
    *param_1 = &PTR_DAT_110b1dad0;
    lVar1 = param_1[1];
  }
  if (lVar1 != 0) {
    param_1[2] = lVar1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10943bf18; end: 10943ce1b;  */

undefined8 FUN_10943bf18(long param_1,long *param_2,double *param_3,long *param_4)

{
  undefined1 auVar1 [16];
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  double dVar77;
  double dVar78;
  double dVar79;
  double dVar80;
  double dVar81;
  double dVar82;
  double dVar83;
  double dVar84;
  double dVar85;
  double dVar86;
  double dVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  double dStack_378;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  
  pdVar2 = *(double **)(param_1 + 0x28);
  pdVar3 = (double *)*param_2;
  if (param_4 == (long *)0x0) {
    pdVar4 = (double *)param_2[1];
    dVar11 = *pdVar3;
    dVar42 = pdVar3[1];
    dVar44 = pdVar3[2];
    dVar5 = dVar42 * dVar42 + dVar11 * dVar11 + dVar44 * dVar44;
    dVar6 = 2.220446049250313e-16;
    if (dVar5 <= 2.220446049250313e-16) {
      dVar6 = pdVar4[1];
      dVar5 = pdVar4[2];
      dVar49 = *pdVar4;
      dVar50 = dVar49 + -(dVar44 * dVar6) + dVar5 * dVar42;
      dVar51 = dVar6 + -(dVar11 * dVar5) + dVar49 * dVar44;
      dVar5 = dVar5 + -(dVar42 * dVar49) + dVar6 * dVar11;
    }
    else {
      dVar5 = SQRT(dVar5);
      dVar49 = dVar5;
      ___sincos_stret();
      dVar5 = 1.0 / dVar5;
      dVar11 = dVar11 * dVar5;
      dVar42 = dVar42 * dVar5;
      dVar44 = dVar44 * dVar5;
      dVar5 = pdVar4[1];
      dVar52 = pdVar4[2];
      dVar81 = *pdVar4;
      dVar16 = (1.0 - dVar6) * (dVar42 * dVar5 + dVar81 * dVar11 + dVar52 * dVar44);
      dVar50 = dVar49 * (-(dVar44 * dVar5) + dVar52 * dVar42) + dVar6 * dVar81 + dVar16 * dVar11;
      dVar51 = dVar49 * (-(dVar11 * dVar52) + dVar81 * dVar44) + dVar6 * dVar5 + dVar16 * dVar42;
      dVar5 = dVar49 * (-(dVar42 * dVar81) + dVar5 * dVar11) + dVar6 * dVar52 + dVar16 * dVar44;
    }
    dVar6 = (dVar50 + pdVar3[3]) / (dVar5 + pdVar3[5]);
    dVar11 = 1.0;
    dVar5 = (dVar51 + pdVar3[4]) / (dVar5 + pdVar3[5]);
    if (*(int *)(pdVar2 + 0xc) == 1) {
      dVar11 = dVar5 * dVar5 + dVar6 * dVar6;
      dVar11 = (pdVar2[10] + dVar11 * pdVar2[0xb]) * dVar11 + 1.0;
    }
    dVar42 = pdVar2[7];
    dVar44 = pdVar2[5];
    *param_3 = (pdVar2[4] + dVar6 * dVar11 * pdVar2[6]) - *pdVar2;
    param_3[1] = (dVar44 + dVar5 * dVar11 * dVar42) - pdVar2[1];
  }
  else {
    dVar52 = *pdVar3;
    dVar51 = pdVar3[1];
    dVar81 = pdVar3[2];
    dVar50 = pdVar3[3];
    dVar11 = pdVar3[4];
    dVar5 = pdVar3[5];
    pdVar3 = (double *)param_2[1];
    dVar44 = *pdVar3;
    dVar42 = pdVar3[1];
    dVar49 = pdVar3[2];
    dVar6 = dVar52 * dVar52 + dVar51 * dVar51 + dVar81 * dVar81;
    if (dVar6 <= 2.220446049250313e-16) {
      dVar26 = dVar51 * 0.0;
      dVar33 = dVar51 * 0.0;
      dVar28 = dVar26 + dVar49 * 0.0;
      dVar83 = dVar33 + dVar49 * 0.0;
      dVar46 = dVar81 * 0.0;
      dVar48 = dVar81 * 0.0;
      dVar9 = dVar42 * 0.0;
      dVar10 = dVar42 * 0.0;
      dStack_b0 = (dVar26 + dVar49 * 0.0) - (dVar46 + dVar9);
      dStack_a8 = (dVar33 + dVar49 * 1.0) - (dVar48 + dVar10);
      dStack_a0 = dVar28 - (dVar46 + dVar9);
      dStack_98 = dVar83 - (dVar48 + dVar10);
      dVar16 = dVar83 - (dVar81 * 1.0 + dVar10);
      dVar20 = (dVar51 + dVar49 * 0.0) - (dVar81 * 0.0 + dVar42 * 0.0);
      dVar59 = dVar44 * 0.0;
      dVar7 = dVar44 * 0.0;
      dVar12 = dVar52 * 0.0;
      dVar63 = dVar52 * 0.0;
      dVar62 = dVar12 + dVar49 * 0.0;
      dVar8 = dVar63 + dVar49 * 0.0;
      dVar39 = (dVar46 + dVar59) - (dVar12 + dVar49 * 1.0);
      dVar40 = (dVar48 + dVar7) - (dVar63 + dVar49 * 0.0);
      dVar79 = (dVar46 + dVar44 * 1.0) - dVar62;
      dVar80 = (dVar48 + dVar44 * 0.0) - dVar8;
      dVar27 = (dVar81 * 1.0 + dVar59) - dVar62;
      dVar6 = (dVar81 * 0.0 + dVar44 * 0.0) - (dVar52 + dVar49 * 0.0);
      uVar88 = SUB81(dVar6,0);
      uVar89 = (undefined1)((ulong)dVar6 >> 8);
      uVar90 = (undefined1)((ulong)dVar6 >> 0x10);
      uVar91 = (undefined1)((ulong)dVar6 >> 0x18);
      uVar92 = (undefined1)((ulong)dVar6 >> 0x20);
      uVar93 = (undefined1)((ulong)dVar6 >> 0x28);
      uVar94 = (undefined1)((ulong)dVar6 >> 0x30);
      uVar95 = (undefined1)((ulong)dVar6 >> 0x38);
      dVar25 = (dVar12 + dVar42 * 1.0) - (dVar26 + dVar44 * 0.0);
      dVar24 = (dVar63 + dVar42 * 0.0) - (dVar33 + dVar44 * 1.0);
      dVar45 = (dVar52 * 0.0 + dVar9) - (dVar51 * 1.0 + dVar59);
      dVar64 = (dVar52 * 1.0 + dVar10) - (dVar51 * 0.0 + dVar7);
      dVar38 = dVar44 + (dVar51 * dVar49 - dVar81 * dVar42);
      dVar35 = (dVar28 - (dVar46 + dVar42 * 1.0)) + 0.0;
      dVar83 = (dVar83 - (dVar48 + dVar42 * 0.0)) + 0.0;
      dVar28 = (dVar28 - (dVar81 * 0.0 + dVar9)) + 1.0;
      dVar43 = dVar42 + (dVar81 * dVar44 - dVar52 * dVar49);
      dVar46 = ((dVar46 + dVar59) - dVar62) + 0.0;
      dVar48 = ((dVar48 + dVar7) - dVar8) + 0.0;
      dVar62 = ((dVar81 * 0.0 + dVar7) - dVar8) + 1.0;
      dVar81 = dVar49 + (dVar52 * dVar42 - dVar51 * dVar44);
      dVar26 = ((dVar12 + dVar9) - (dVar26 + dVar59)) + 0.0;
      dVar33 = ((dVar63 + dVar10) - (dVar33 + dVar7)) + 0.0;
      dVar52 = ((dVar52 * 0.0 + dVar42 * 0.0) - (dVar51 * 0.0 + dVar44 * 0.0)) + 1.0;
      dVar51 = dVar26;
      dVar6 = dVar33;
    }
    else {
      dVar12 = dVar52 * 0.0 + dVar52 * 0.0 + dVar51 * 0.0 + dVar51 * 0.0 +
               dVar81 * 0.0 + dVar81 * 0.0;
      dVar16 = dVar52 * 0.0 + dVar52 * 0.0 + dVar51 * 0.0 + dVar51 * 0.0;
      dVar20 = dVar52 * 0.0 + dVar52 * 0.0 + dVar51 * 0.0 + dVar51 * 0.0;
      dVar24 = dVar81 * 0.0 + dVar81 * 0.0;
      dVar26 = dVar81 * 0.0 + dVar81 * 0.0;
      dVar6 = SQRT(dVar6);
      dVar7 = 1.0 / (dVar6 + dVar6);
      dVar25 = (dVar52 * 1.0 + dVar52 * 1.0 + dVar51 * 0.0 + dVar51 * 0.0 + dVar24) * dVar7;
      dVar27 = (dVar52 * 0.0 + dVar52 * 0.0 + dVar51 * 1.0 + dVar51 * 1.0 + dVar26) * dVar7;
      dVar17 = (dVar16 + dVar81 * 1.0 + dVar81 * 1.0) * dVar7;
      dVar21 = (dVar20 + dVar81 * 0.0 + dVar81 * 0.0) * dVar7;
      dVar18 = (dVar16 + dVar24) * dVar7;
      dVar22 = (dVar20 + dVar26) * dVar7;
      dVar7 = dVar12 * dVar7;
      dVar59 = dVar6;
      ___sincos_stret();
      dVar6 = 1.0 / dVar6;
      dVar24 = (0.0 - dVar25 * dVar6) * dVar6;
      dVar26 = (0.0 - dVar27 * dVar6) * dVar6;
      dVar16 = (0.0 - dVar17 * dVar6) * dVar6;
      dVar20 = (0.0 - dVar21 * dVar6) * dVar6;
      dVar28 = (0.0 - dVar18 * dVar6) * dVar6;
      dVar33 = (0.0 - dVar22 * dVar6) * dVar6;
      dVar35 = dVar6 * (0.0 - dVar6 * dVar7);
      dVar70 = dVar52 * dVar6;
      dVar45 = dVar6 * 1.0 + dVar24 * dVar52;
      dVar47 = dVar6 * 0.0 + dVar26 * dVar52;
      dVar60 = dVar6 * 0.0;
      dVar61 = dVar6 * 0.0;
      dVar74 = dVar60 + dVar16 * dVar52;
      dVar76 = dVar61 + dVar20 * dVar52;
      dVar86 = dVar60 + dVar28 * dVar52;
      dVar87 = dVar61 + dVar33 * dVar52;
      dVar63 = dVar6 * 0.0;
      dVar52 = dVar63 + dVar52 * dVar35;
      dVar41 = dVar51 * dVar6;
      dVar66 = dVar6 * 0.0 + dVar24 * dVar51;
      dVar67 = dVar6 * 1.0 + dVar26 * dVar51;
      dVar68 = dVar60 + dVar16 * dVar51;
      dVar69 = dVar61 + dVar20 * dVar51;
      dVar53 = dVar6 * 1.0 + dVar16 * dVar81;
      dVar54 = dVar6 * 0.0 + dVar20 * dVar81;
      dVar71 = dVar60 + dVar28 * dVar51;
      dVar73 = dVar61 + dVar33 * dVar51;
      dVar82 = dVar63 + dVar51 * dVar35;
      dVar6 = dVar81 * dVar6;
      dVar55 = dVar60 + dVar24 * dVar81;
      dVar57 = dVar61 + dVar26 * dVar81;
      dVar60 = dVar60 + dVar28 * dVar81;
      dVar61 = dVar61 + dVar33 * dVar81;
      dVar63 = dVar63 + dVar81 * dVar35;
      dVar8 = dVar41 * 0.0;
      dVar10 = dVar41 * 0.0;
      dVar78 = dVar41 * dVar49 - dVar6 * dVar42;
      dVar51 = dVar6 * 0.0;
      dVar24 = dVar6 * 0.0;
      dVar29 = dVar8 + dVar71 * dVar49;
      dVar20 = dVar10 + dVar73 * dVar49;
      dVar13 = dVar6 * dVar44 - dVar70 * dVar49;
      dVar30 = dVar70 * 0.0;
      dVar34 = dVar70 * 0.0;
      dVar64 = dVar30 + dVar86 * dVar49;
      dVar65 = dVar34 + dVar87 * dVar49;
      dVar14 = dVar70 * dVar42 - dVar41 * dVar44;
      dVar81 = dVar51 + dVar60 * dVar49;
      dVar16 = dVar24 + dVar61 * dVar49;
      dVar35 = dVar6 * dVar49 + dVar70 * dVar44 + dVar41 * dVar42;
      dVar83 = 1.0 - dVar12;
      dVar31 = -dVar59;
      dVar75 = dVar25 * dVar31;
      dVar77 = dVar27 * dVar31;
      dVar56 = (0.0 - dVar75) * dVar35 +
               (dVar51 + dVar55 * dVar49 + dVar8 + dVar66 * dVar42 + dVar30 + dVar45 * dVar44) *
               dVar83;
      dVar58 = (0.0 - dVar77) * dVar35 +
               (dVar24 + dVar57 * dVar49 + dVar10 + dVar67 * dVar42 + dVar34 + dVar47 * dVar44) *
               dVar83;
      dVar36 = dVar17 * dVar31;
      dVar37 = dVar21 * dVar31;
      dVar19 = (0.0 - dVar36) * dVar35 +
               (dVar51 + dVar53 * dVar49 + dVar8 + dVar68 * dVar42 + dVar30 + dVar74 * dVar44) *
               dVar83;
      dVar23 = (0.0 - dVar37) * dVar35 +
               (dVar24 + dVar54 * dVar49 + dVar10 + dVar69 * dVar42 + dVar34 + dVar76 * dVar44) *
               dVar83;
      dVar32 = dVar18 * dVar31;
      dVar31 = dVar22 * dVar31;
      dVar28 = (0.0 - dVar32) * dVar35;
      dVar62 = (0.0 - dVar31) * dVar35;
      dVar26 = dVar28 + (dVar81 + dVar8 + dVar71 * dVar42 + dVar30 + dVar86 * dVar44) * dVar83;
      dVar33 = dVar62 + (dVar16 + dVar10 + dVar73 * dVar42 + dVar34 + dVar87 * dVar44) * dVar83;
      dVar28 = dVar28 + (dVar81 + dVar41 * 0.0 + dVar71 * dVar42 + dVar70 * 1.0 + dVar86 * dVar44) *
                        dVar83;
      dVar62 = dVar62 + (dVar16 + dVar41 * 1.0 + dVar73 * dVar42 + dVar70 * 0.0 + dVar87 * dVar44) *
                        dVar83;
      dVar72 = -(dVar59 * dVar7);
      dVar15 = dVar83 * dVar35;
      dVar9 = (0.0 - dVar72) * dVar35 +
              dVar83 * (dVar6 + dVar49 * dVar63 +
                       dVar41 * 0.0 + dVar42 * dVar82 + dVar70 * 0.0 + dVar44 * dVar52);
      dVar25 = dVar25 * dVar12;
      dVar27 = dVar27 * dVar12;
      dVar17 = dVar17 * dVar12;
      dVar21 = dVar21 * dVar12;
      auVar1[8] = SUB81(dVar27,0);
      auVar1._0_8_ = dVar25;
      auVar1[9] = (char)((ulong)dVar27 >> 8);
      auVar1[10] = (char)((ulong)dVar27 >> 0x10);
      auVar1[0xb] = (char)((ulong)dVar27 >> 0x18);
      auVar1[0xc] = (char)((ulong)dVar27 >> 0x20);
      auVar1[0xd] = (char)((ulong)dVar27 >> 0x28);
      auVar1[0xe] = (char)((ulong)dVar27 >> 0x30);
      auVar1[0xf] = (char)((ulong)dVar27 >> 0x38);
      dVar18 = dVar18 * dVar12;
      dVar22 = dVar22 * dVar12;
      dVar7 = dVar12 * dVar7;
      dVar84 = dVar12 * 0.0;
      dVar85 = dVar12 * 0.0;
      dVar38 = dVar12 * dVar44 + dVar59 * dVar78 + dVar70 * dVar15;
      dStack_b0 = dVar84 + dVar75 * dVar44 +
                  dVar25 * dVar78 +
                  ((dVar8 + dVar66 * dVar49) - (dVar51 + dVar55 * dVar42)) * dVar59 +
                  dVar45 * dVar15 + dVar56 * dVar70;
      dStack_a8 = dVar85 + dVar77 * dVar44 +
                  dVar27 * dVar78 +
                  ((dVar10 + dVar67 * dVar49) - (dVar24 + dVar57 * dVar42)) * dVar59 +
                  dVar47 * dVar15 + dVar58 * dVar70;
      dVar35 = dVar84 + dVar36 * dVar44 +
               dVar17 * dVar78 + ((dVar8 + dVar68 * dVar49) - (dVar51 + dVar53 * dVar42)) * dVar59 +
               dVar74 * dVar15 + dVar19 * dVar70;
      dVar83 = dVar85 + dVar37 * dVar44 +
               dVar21 * dVar78 + ((dVar10 + dVar69 * dVar49) - (dVar24 + dVar54 * dVar42)) * dVar59
               + dVar76 * dVar15 + dVar23 * dVar70;
      dStack_a0 = dVar84 + dVar32 * dVar44 +
                  dVar18 * dVar78 + (dVar29 - (dVar51 + dVar60 * dVar42)) * dVar59 +
                  dVar86 * dVar15 + dVar26 * dVar70;
      dStack_98 = dVar85 + dVar31 * dVar44 +
                  dVar22 * dVar78 + (dVar20 - (dVar24 + dVar61 * dVar42)) * dVar59 +
                  dVar87 * dVar15 + dVar33 * dVar70;
      dVar16 = dVar12 * 0.0 + dVar31 * dVar44 +
               dVar22 * dVar78 + (dVar20 - (dVar6 * 1.0 + dVar61 * dVar42)) * dVar59 +
               dVar87 * dVar15 + dVar62 * dVar70;
      dVar20 = dVar12 * 0.0 + dVar44 * dVar72 +
               dVar7 * dVar78 +
               dVar59 * ((dVar41 + dVar49 * dVar82) - (dVar6 * 0.0 + dVar42 * dVar63)) +
               dVar15 * dVar52 + dVar70 * dVar9;
      dVar43 = dVar41 * dVar15 + dVar12 * dVar42 + dVar59 * dVar13;
      dVar39 = dVar84 + dVar75 * dVar42 +
               dVar25 * dVar13 + ((dVar51 + dVar55 * dVar44) - (dVar30 + dVar45 * dVar49)) * dVar59
               + dVar66 * dVar15 + dVar56 * dVar41;
      dVar40 = dVar85 + dVar77 * dVar42 +
               dVar27 * dVar13 + ((dVar24 + dVar57 * dVar44) - (dVar34 + dVar47 * dVar49)) * dVar59
               + dVar67 * dVar15 + dVar58 * dVar41;
      dVar79 = dVar84 + dVar36 * dVar42 +
               dVar17 * dVar13 + ((dVar51 + dVar53 * dVar44) - (dVar30 + dVar74 * dVar49)) * dVar59
               + dVar68 * dVar15 + dVar19 * dVar41;
      dVar80 = dVar85 + dVar37 * dVar42 +
               dVar21 * dVar13 + ((dVar24 + dVar54 * dVar44) - (dVar34 + dVar76 * dVar49)) * dVar59
               + dVar69 * dVar15 + dVar23 * dVar41;
      dVar46 = dVar84 + dVar32 * dVar42 +
               dVar18 * dVar13 + ((dVar51 + dVar60 * dVar44) - dVar64) * dVar59 +
               dVar71 * dVar15 + dVar26 * dVar41;
      dVar48 = dVar85 + dVar31 * dVar42 +
               dVar22 * dVar13 + ((dVar24 + dVar61 * dVar44) - dVar65) * dVar59 +
               dVar73 * dVar15 + dVar33 * dVar41;
      dVar27 = dVar12 * 0.0 + dVar32 * dVar42 +
               dVar18 * dVar13 + ((dVar6 * 1.0 + dVar60 * dVar44) - dVar64) * dVar59 +
               dVar71 * dVar15 + dVar28 * dVar41;
      dVar51 = dVar12 * 0.0 + dVar42 * dVar72 +
               dVar7 * dVar13 +
               dVar59 * ((dVar6 * 0.0 + dVar44 * dVar63) - (dVar70 + dVar49 * dVar52)) +
               dVar15 * dVar82 + dVar41 * dVar9;
      uVar88 = SUB81(dVar51,0);
      uVar89 = (undefined1)((ulong)dVar51 >> 8);
      uVar90 = (undefined1)((ulong)dVar51 >> 0x10);
      uVar91 = (undefined1)((ulong)dVar51 >> 0x18);
      uVar92 = (undefined1)((ulong)dVar51 >> 0x20);
      uVar93 = (undefined1)((ulong)dVar51 >> 0x28);
      uVar94 = (undefined1)((ulong)dVar51 >> 0x30);
      uVar95 = (undefined1)((ulong)dVar51 >> 0x38);
      dVar51 = dVar84 + dVar32 * dVar49;
      dVar64 = dVar85 + dVar31 * dVar49;
      dStack_378 = auVar1._8_8_;
      dVar81 = dVar12 * dVar49 + dVar59 * dVar14 + dVar6 * dVar15;
      dVar25 = dVar84 + dVar75 * dVar49 +
               dVar25 * dVar14 + ((dVar30 + dVar45 * dVar42) - (dVar8 + dVar66 * dVar44)) * dVar59 +
               dVar55 * dVar15 + dVar56 * dVar6;
      dVar24 = dVar85 + dVar77 * dVar49 +
               dStack_378 * dVar14 +
               ((dVar34 + dVar47 * dVar42) - (dVar10 + dVar67 * dVar44)) * dVar59 +
               dVar57 * dVar15 + dVar58 * dVar6;
      dVar26 = dVar51 + dVar18 * dVar14 +
                        ((dVar30 + dVar86 * dVar42) - (dVar8 + dVar71 * dVar44)) * dVar59 +
               dVar60 * dVar15 + dVar26 * dVar6;
      dVar33 = dVar64 + dVar22 * dVar14 +
                        ((dVar34 + dVar87 * dVar42) - (dVar10 + dVar73 * dVar44)) * dVar59 +
               dVar61 * dVar15 + dVar33 * dVar6;
      dVar45 = dVar51 + dVar18 * dVar14 +
                        ((dVar70 * 0.0 + dVar86 * dVar42) - (dVar41 * 1.0 + dVar71 * dVar44)) *
                        dVar59 + dVar60 * dVar15 + dVar28 * dVar6;
      dVar64 = dVar64 + dVar22 * dVar14 +
                        ((dVar70 * 1.0 + dVar87 * dVar42) - (dVar41 * 0.0 + dVar73 * dVar44)) *
                        dVar59 + dVar61 * dVar15 + dVar62 * dVar6;
      dVar28 = dVar12 * 1.0 + dVar32 * dVar44 +
               dVar18 * dVar78 + (dVar29 - (dVar6 * 0.0 + dVar60 * dVar42)) * dVar59 +
               dVar86 * dVar15 + dVar28 * dVar70 + 0.0;
      dVar62 = dVar12 * 1.0 + dVar31 * dVar42 +
               dVar22 * dVar13 + ((dVar6 * 0.0 + dVar61 * dVar44) - dVar65) * dVar59 +
               dVar73 * dVar15 + dVar62 * dVar41 + 0.0;
      dVar52 = dVar12 + dVar72 * dVar49 +
               dVar7 * dVar14 +
               dVar59 * ((dVar70 * 0.0 + dVar42 * dVar52) - (dVar41 * 0.0 + dVar44 * dVar82)) +
               dVar15 * dVar63 + dVar6 * dVar9 + 0.0;
      dVar51 = dVar84 + dVar36 * dVar49 +
               dVar17 * dVar14 + ((dVar30 + dVar74 * dVar42) - (dVar8 + dVar68 * dVar44)) * dVar59 +
               dVar53 * dVar15 + dVar19 * dVar6 + 0.0;
      dVar6 = dVar85 + dVar37 * dVar49 +
              dVar21 * dVar14 + ((dVar34 + dVar76 * dVar42) - (dVar10 + dVar69 * dVar44)) * dVar59 +
              dVar54 * dVar15 + dVar23 * dVar6 + 0.0;
    }
    dVar9 = 1.0;
    dVar5 = 1.0 / (dVar5 + dVar81);
    dVar42 = (dVar50 + dVar38) * dVar5;
    dVar81 = ((dStack_b0 + 0.0) - (dVar25 + 0.0) * dVar42) * dVar5;
    dVar59 = ((dStack_a8 + 0.0) - (dVar24 + 0.0) * dVar42) * dVar5;
    dVar35 = ((dVar35 + 0.0) - dVar51 * dVar42) * dVar5;
    dVar83 = ((dVar83 + 1.0) - dVar6 * dVar42) * dVar5;
    dVar7 = ((dStack_a0 + 0.0) - (dVar26 + 0.0) * dVar42) * dVar5;
    dVar8 = ((dStack_98 + 0.0) - (dVar33 + 1.0) * dVar42) * dVar5;
    dVar44 = (dVar28 - (dVar45 + 0.0) * dVar42) * dVar5;
    dVar49 = ((dVar16 + 0.0) - (dVar64 + 0.0) * dVar42) * dVar5;
    dVar50 = dVar5 * ((dVar20 + 0.0) - dVar42 * dVar52);
    dVar11 = (dVar11 + dVar43) * dVar5;
    dVar16 = ((dVar39 + 0.0) - (dVar25 + 0.0) * dVar11) * dVar5;
    dVar20 = ((dVar40 + 0.0) - (dVar24 + 0.0) * dVar11) * dVar5;
    dVar25 = ((dVar79 + 0.0) - dVar51 * dVar11) * dVar5;
    dVar24 = ((dVar80 + 0.0) - dVar6 * dVar11) * dVar5;
    dVar26 = ((dVar46 + 1.0) - (dVar26 + 0.0) * dVar11) * dVar5;
    dVar28 = ((dVar48 + 0.0) - (dVar33 + 1.0) * dVar11) * dVar5;
    dVar6 = ((dVar27 + 0.0) - (dVar45 + 0.0) * dVar11) * dVar5;
    dVar51 = (dVar62 - (dVar64 + 0.0) * dVar11) * dVar5;
    dVar5 = dVar5 * (((double)CONCAT17(uVar95,CONCAT16(uVar94,CONCAT15(uVar93,CONCAT14(uVar92,
                                                  CONCAT13(uVar91,CONCAT12(uVar90,CONCAT11(uVar89,
                                                  uVar88))))))) + 0.0) - dVar11 * dVar52);
    dVar45 = 0.0;
    dVar64 = 0.0;
    dVar62 = 0.0;
    dVar38 = 0.0;
    uVar88 = 0;
    uVar89 = 0;
    uVar90 = 0;
    uVar91 = 0;
    uVar92 = 0;
    uVar93 = 0;
    uVar94 = 0;
    uVar95 = 0;
    uVar96 = 0;
    uVar97 = 0;
    uVar98 = 0;
    uVar99 = 0;
    uVar100 = 0;
    uVar101 = 0;
    uVar102 = 0;
    uVar103 = 0;
    dVar52 = 0.0;
    dVar27 = 0.0;
    dVar33 = 0.0;
    if (*(int *)(pdVar2 + 0xc) == 1) {
      dVar62 = dVar81 * dVar42;
      dVar38 = dVar59 * dVar42;
      dVar40 = dVar35 * dVar42;
      dVar43 = dVar83 * dVar42;
      dVar46 = dVar7 * dVar42;
      dVar48 = dVar8 * dVar42;
      dVar9 = dVar44 * dVar42;
      dVar10 = dVar49 * dVar42;
      dVar79 = dVar42 * dVar50;
      dVar80 = dVar16 * dVar11;
      dVar12 = dVar20 * dVar11;
      dVar63 = dVar25 * dVar11;
      dVar13 = dVar24 * dVar11;
      dVar52 = dVar26 * dVar11;
      dVar27 = dVar28 * dVar11;
      dVar33 = dVar6 * dVar11;
      dVar45 = dVar51 * dVar11;
      dVar64 = dVar11 * dVar5;
      dVar39 = dVar42 * dVar42 + dVar11 * dVar11;
      dVar62 = dVar62 + dVar62 + dVar80 + dVar80;
      dVar38 = dVar38 + dVar38 + dVar12 + dVar12;
      dVar40 = dVar40 + dVar40 + dVar63 + dVar63;
      dVar43 = dVar43 + dVar43 + dVar13 + dVar13;
      dVar52 = dVar46 + dVar46 + dVar52 + dVar52;
      dVar27 = dVar48 + dVar48 + dVar27 + dVar27;
      dVar33 = dVar9 + dVar9 + dVar33 + dVar33;
      dVar46 = dVar10 + dVar10 + dVar45 + dVar45;
      dVar48 = dVar79 + dVar79 + dVar64 + dVar64;
      dVar79 = pdVar2[0xb];
      dVar10 = pdVar2[10] + dVar39 * dVar79;
      dVar9 = dVar39 * dVar10 + 1.0;
      dVar45 = dVar62 * dVar79 * dVar39 + dVar62 * dVar10 + 0.0;
      dVar64 = dVar38 * dVar79 * dVar39 + dVar38 * dVar10 + 0.0;
      dVar62 = dVar40 * dVar79 * dVar39 + dVar40 * dVar10 + 0.0;
      dVar38 = dVar43 * dVar79 * dVar39 + dVar43 * dVar10 + 0.0;
      dVar52 = dVar52 * dVar79 * dVar39 + dVar52 * dVar10 + 0.0;
      uVar88 = SUB81(dVar52,0);
      uVar89 = (undefined1)((ulong)dVar52 >> 8);
      uVar90 = (undefined1)((ulong)dVar52 >> 0x10);
      uVar91 = (undefined1)((ulong)dVar52 >> 0x18);
      uVar92 = (undefined1)((ulong)dVar52 >> 0x20);
      uVar93 = (undefined1)((ulong)dVar52 >> 0x28);
      uVar94 = (undefined1)((ulong)dVar52 >> 0x30);
      uVar95 = (undefined1)((ulong)dVar52 >> 0x38);
      dVar52 = dVar27 * dVar79 * dVar39 + dVar27 * dVar10 + 0.0;
      uVar96 = SUB81(dVar52,0);
      uVar97 = (undefined1)((ulong)dVar52 >> 8);
      uVar98 = (undefined1)((ulong)dVar52 >> 0x10);
      uVar99 = (undefined1)((ulong)dVar52 >> 0x18);
      uVar100 = (undefined1)((ulong)dVar52 >> 0x20);
      uVar101 = (undefined1)((ulong)dVar52 >> 0x28);
      uVar102 = (undefined1)((ulong)dVar52 >> 0x30);
      uVar103 = (undefined1)((ulong)dVar52 >> 0x38);
      dVar52 = dVar33 * dVar79 * dVar39 + dVar33 * dVar10 + 0.0;
      dVar27 = dVar46 * dVar79 * dVar39 + dVar46 * dVar10 + 0.0;
      dVar33 = dVar39 * dVar48 * dVar79 + dVar48 * dVar10 + 0.0;
    }
    dVar79 = pdVar2[6];
    dVar80 = pdVar2[7];
    dVar48 = dVar9 * dVar79;
    dVar43 = pdVar2[5];
    dVar10 = dVar9 * dVar80;
    dVar46 = pdVar2[1];
    dVar39 = dVar9 * 0.0;
    dVar40 = dVar9 * 0.0;
    *param_3 = (pdVar2[4] + dVar42 * dVar48) - *pdVar2;
    param_3[1] = (dVar43 + dVar11 * dVar10) - dVar46;
    pdVar2 = (double *)*param_4;
    if (pdVar2 != (double *)0x0) {
      pdVar2[1] = dVar59 * dVar48 + (dVar40 + dVar64 * dVar79) * dVar42 + 0.0;
      *pdVar2 = dVar81 * dVar48 + (dVar39 + dVar45 * dVar79) * dVar42 + 0.0;
      pdVar2[3] = dVar83 * dVar48 + (dVar40 + dVar38 * dVar79) * dVar42 + 0.0;
      pdVar2[2] = dVar35 * dVar48 + (dVar39 + dVar62 * dVar79) * dVar42 + 0.0;
      pdVar2[5] = dVar8 * dVar48 +
                  (dVar40 + (double)CONCAT17(uVar103,CONCAT16(uVar102,CONCAT15(uVar101,CONCAT14(
                                                  uVar100,CONCAT13(uVar99,CONCAT12(uVar98,CONCAT11(
                                                  uVar97,uVar96))))))) * dVar79) * dVar42 + 0.0;
      pdVar2[4] = dVar7 * dVar48 +
                  (dVar39 + (double)CONCAT17(uVar95,CONCAT16(uVar94,CONCAT15(uVar93,CONCAT14(uVar92,
                                                  CONCAT13(uVar91,CONCAT12(uVar90,CONCAT11(uVar89,
                                                  uVar88))))))) * dVar79) * dVar42 + 0.0;
      pdVar2[7] = dVar20 * dVar10 + (dVar40 + dVar64 * dVar80) * dVar11 + 0.0;
      pdVar2[6] = dVar16 * dVar10 + (dVar39 + dVar45 * dVar80) * dVar11 + 0.0;
      pdVar2[9] = dVar24 * dVar10 + (dVar40 + dVar38 * dVar80) * dVar11 + 0.0;
      pdVar2[8] = dVar25 * dVar10 + (dVar39 + dVar62 * dVar80) * dVar11 + 0.0;
      pdVar2[0xb] = dVar28 * dVar10 +
                    (dVar40 + (double)CONCAT17(uVar103,CONCAT16(uVar102,CONCAT15(uVar101,CONCAT14(
                                                  uVar100,CONCAT13(uVar99,CONCAT12(uVar98,CONCAT11(
                                                  uVar97,uVar96))))))) * dVar80) * dVar11 + 0.0;
      pdVar2[10] = dVar26 * dVar10 +
                   (dVar39 + (double)CONCAT17(uVar95,CONCAT16(uVar94,CONCAT15(uVar93,CONCAT14(uVar92
                                                  ,CONCAT13(uVar91,CONCAT12(uVar90,CONCAT11(uVar89,
                                                  uVar88))))))) * dVar80) * dVar11 + 0.0;
    }
    pdVar2 = (double *)param_4[1];
    if (pdVar2 != (double *)0x0) {
      pdVar2[1] = dVar49 * dVar48 + (dVar40 + dVar27 * dVar79) * dVar42 + 0.0;
      *pdVar2 = dVar44 * dVar48 + (dVar39 + dVar52 * dVar79) * dVar42 + 0.0;
      pdVar2[2] = dVar50 * dVar48 + dVar42 * (dVar9 * 0.0 + dVar33 * dVar79) + 0.0;
      pdVar2[4] = dVar51 * dVar10 + (dVar40 + dVar27 * dVar80) * dVar11 + 0.0;
      pdVar2[3] = dVar6 * dVar10 + (dVar39 + dVar52 * dVar80) * dVar11 + 0.0;
      pdVar2[5] = dVar5 * dVar10 + dVar11 * (dVar9 * 0.0 + dVar33 * dVar80) + 0.0;
    }
  }
  return 1;
}



/* Entry: 10943ce1c; end: 10943cefb;  */

undefined8 * FUN_10943ce1c(undefined8 *param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 6) == 0) {
    param_1[5] = 0;
    *param_1 = &PTR_DAT_110b1dad0;
    lVar1 = param_1[1];
  }
  else {
    lVar1 = param_1[5];
    param_1[5] = 0;
    if (lVar1 != 0) {
      __ZdlPv();
    }
    *param_1 = &PTR_DAT_110b1dad0;
    lVar1 = param_1[1];
  }
  if (lVar1 != 0) {
    param_1[2] = lVar1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10943cefc; end: 10943d67b;  */

undefined8
FUN_10943cefc(undefined8 param_1,double param_2,long param_3,long *param_4,double *param_5,
             long *param_6)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar11;
  double dVar12;
  undefined1 auVar10 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  
  pdVar1 = *(double **)(param_3 + 0x28);
  pdVar2 = (double *)*param_4;
  if (param_6 == (long *)0x0) {
    dVar8 = *pdVar2;
    dVar9 = pdVar2[1];
    dVar11 = pdVar2[2];
    dVar3 = dVar9 * dVar9 + dVar8 * dVar8 + dVar11 * dVar11;
    if (dVar3 <= 0.0) {
      dVar12 = 0.5;
      param_2 = 1.0;
    }
    else {
      dVar3 = SQRT(dVar3);
      dVar12 = dVar3 * 0.5;
      ___sincos_stret();
      dVar12 = dVar12 / dVar3;
    }
    dVar11 = dVar11 * dVar12;
    dVar9 = dVar9 * dVar12;
    dVar8 = dVar8 * dVar12;
    dVar3 = pdVar2[3];
    dVar12 = pdVar2[4];
    dVar28 = pdVar2[5];
    dVar30 = dVar11 * dVar12 - dVar28 * dVar9;
    dVar42 = dVar8 * dVar28 - dVar3 * dVar11;
    dVar46 = dVar9 * dVar3 - dVar12 * dVar8;
    dVar30 = dVar30 + dVar30;
    dVar42 = dVar42 + dVar42;
    dVar46 = dVar46 + dVar46;
    *param_5 = -(dVar3 + dVar30 * param_2 + (dVar11 * dVar42 - dVar46 * dVar9)) - *pdVar1;
    param_5[1] = -((dVar8 * dVar46 - dVar30 * dVar11) + dVar12 + dVar42 * param_2) - pdVar1[1];
    param_5[2] = -(dVar28 + dVar46 * param_2 + (dVar9 * dVar30 - dVar42 * dVar8)) - pdVar1[2];
  }
  else {
    dVar47 = *pdVar2;
    dVar46 = pdVar2[1];
    dVar42 = pdVar2[2];
    dVar28 = pdVar2[3];
    dVar55 = pdVar2[4];
    dVar30 = pdVar2[5];
    dVar3 = dVar47 * dVar47 + dVar46 * dVar46 + dVar42 * dVar42;
    dVar9 = 0.0;
    dVar12 = 0.0;
    dVar8 = dVar47 * 0.0;
    dVar11 = dVar47 * 0.0;
    if (dVar3 <= 0.0) {
      dVar26 = dVar8 + 0.5;
      dVar27 = dVar11 + 0.0;
      dVar8 = dVar8 + 0.0;
      dVar11 = dVar11 + 0.0;
      dVar41 = dVar46 * 0.0 + 0.0;
      dVar13 = dVar46 * 0.0 + 0.5;
      dVar56 = dVar46 * 0.0 + 0.0;
      dVar57 = dVar46 * 0.0 + 0.0;
      dVar16 = dVar42 * 0.0 + 0.0;
      dVar29 = dVar42 * 0.0 + 0.0;
      dVar34 = dVar42 * 0.0 + 0.5;
      dVar35 = dVar42 * 0.0 + 0.0;
      dVar19 = 0.5;
      dVar6 = 1.0;
      dVar15 = 0.0;
      dVar17 = 0.0;
      dVar5 = 0.0;
      dVar7 = 0.0;
      dVar4 = dVar16;
      dVar18 = dVar29;
      dVar24 = dVar8;
      dVar25 = dVar11;
      dVar40 = dVar56;
      dVar3 = dVar57;
    }
    else {
      dVar8 = dVar8 + dVar8 + dVar46 * 0.0 + dVar46 * 0.0;
      dVar11 = dVar11 + dVar11 + dVar46 * 0.0 + dVar46 * 0.0;
      dVar9 = dVar42 * 0.0 + dVar42 * 0.0;
      dVar12 = dVar42 * 0.0 + dVar42 * 0.0;
      dVar3 = SQRT(dVar3);
      dVar4 = 1.0 / (dVar3 + dVar3);
      dVar40 = (dVar47 * 1.0 + dVar47 * 1.0 + dVar46 * 0.0 + dVar46 * 0.0 + dVar9) * dVar4;
      dVar41 = (dVar47 * 0.0 + dVar47 * 0.0 + dVar46 * 1.0 + dVar46 * 1.0 + dVar12) * dVar4;
      dVar24 = (dVar8 + dVar42 * 1.0 + dVar42 * 1.0) * dVar4;
      dVar25 = (dVar11 + dVar42 * 0.0 + dVar42 * 0.0) * dVar4;
      dVar18 = (dVar8 + dVar9) * dVar4;
      dVar4 = (dVar11 + dVar12) * dVar4;
      dVar8 = dVar3 * 0.5;
      dVar5 = dVar3 * 0.0;
      dVar7 = dVar3 * 0.0;
      auVar10 = NEON_fmov(0x3fe0000000000000,8);
      dVar11 = auVar10._0_8_;
      dVar6 = auVar10._8_8_;
      dVar9 = dVar5 + dVar40 * dVar11;
      dVar12 = dVar7 + dVar41 * dVar6;
      dVar15 = dVar5 + dVar24 * dVar11;
      dVar17 = dVar7 + dVar25 * dVar6;
      dVar5 = dVar5 + dVar18 * dVar11;
      dVar7 = dVar7 + dVar4 * dVar6;
      dVar6 = dVar5;
      ___sincos_stret();
      dVar3 = 1.0 / dVar3;
      dVar19 = dVar3 * dVar8;
      dVar40 = (dVar9 * dVar6 - dVar40 * dVar19) * dVar3;
      dVar29 = (dVar12 * dVar6 - dVar41 * dVar19) * dVar3;
      dVar24 = (dVar15 * dVar6 - dVar24 * dVar19) * dVar3;
      dVar25 = (dVar17 * dVar6 - dVar25 * dVar19) * dVar3;
      dVar43 = (dVar5 * dVar6 - dVar18 * dVar19) * dVar3;
      dVar3 = (dVar7 * dVar6 - dVar4 * dVar19) * dVar3;
      dVar8 = -dVar8;
      dVar9 = dVar9 * dVar8;
      dVar12 = dVar12 * dVar8;
      dVar15 = dVar15 * dVar8;
      dVar17 = dVar17 * dVar8;
      dVar5 = dVar5 * dVar8;
      dVar7 = dVar7 * dVar8;
      dVar26 = dVar19 * 1.0 + dVar40 * dVar47;
      dVar27 = dVar19 * 0.0 + dVar29 * dVar47;
      dVar44 = dVar19 * 0.0;
      dVar45 = dVar19 * 0.0;
      dVar8 = dVar44 + dVar24 * dVar47;
      dVar11 = dVar45 + dVar25 * dVar47;
      dVar41 = dVar19 * 0.0 + dVar40 * dVar46;
      dVar13 = dVar19 * 1.0 + dVar29 * dVar46;
      dVar56 = dVar44 + dVar24 * dVar46;
      dVar57 = dVar45 + dVar25 * dVar46;
      dVar16 = dVar44 + dVar40 * dVar42;
      dVar29 = dVar45 + dVar29 * dVar42;
      dVar34 = dVar19 * 1.0 + dVar24 * dVar42;
      dVar35 = dVar19 * 0.0 + dVar25 * dVar42;
      dVar4 = dVar44 + dVar43 * dVar42;
      dVar18 = dVar45 + dVar3 * dVar42;
      dVar24 = dVar44 + dVar43 * dVar47;
      dVar25 = dVar45 + dVar3 * dVar47;
      dVar40 = dVar44 + dVar43 * dVar46;
      dVar3 = dVar45 + dVar3 * dVar46;
    }
    dVar44 = -(dVar47 * dVar19);
    dVar43 = -(dVar46 * dVar19);
    dVar47 = -(dVar42 * dVar19);
    dVar42 = dVar30 * dVar43 - dVar55 * dVar47;
    dVar46 = dVar28 * dVar47 - dVar30 * dVar44;
    dVar19 = dVar55 * dVar44 - dVar28 * dVar43;
    dVar42 = dVar42 + dVar42;
    dVar46 = dVar46 + dVar46;
    dVar19 = dVar19 + dVar19;
    dVar54 = pdVar1[1];
    dVar45 = pdVar1[2];
    *param_5 = -(dVar28 + dVar6 * dVar42 + (dVar43 * dVar19 - dVar47 * dVar46)) - *pdVar1;
    param_5[1] = -(dVar55 + dVar6 * dVar46 + (dVar47 * dVar42 - dVar44 * dVar19)) - dVar54;
    param_5[2] = -(dVar30 + dVar6 * dVar19 + (dVar44 * dVar46 - dVar43 * dVar42)) - dVar45;
    pdVar1 = (double *)*param_6;
    if (pdVar1 != (double *)0x0) {
      dVar32 = dVar43 * 0.0;
      dVar33 = dVar43 * 0.0;
      dVar20 = (dVar44 * 1.0 - dVar24 * dVar55) - (dVar32 - dVar40 * dVar28);
      dVar22 = (dVar44 * 0.0 - dVar25 * dVar55) - (dVar33 - dVar3 * dVar28);
      dVar20 = dVar20 + dVar20;
      dVar22 = dVar22 + dVar22;
      dVar21 = dVar47 * 0.0;
      dVar23 = dVar47 * 0.0;
      dVar36 = (dVar21 - dVar4 * dVar28) - (dVar44 * 0.0 - dVar24 * dVar30);
      dVar38 = (dVar23 - dVar18 * dVar28) - (dVar44 * 1.0 - dVar25 * dVar30);
      dVar36 = dVar36 + dVar36;
      dVar38 = dVar38 + dVar38;
      dVar48 = (dVar43 * 0.0 - dVar40 * dVar30) - (dVar47 * 1.0 - dVar4 * dVar55);
      dVar51 = (dVar43 * 1.0 - dVar3 * dVar30) - (dVar47 * 0.0 - dVar18 * dVar55);
      dVar48 = dVar48 + dVar48;
      dVar51 = dVar51 + dVar51;
      dVar54 = dVar44 * 0.0;
      dVar31 = dVar44 * 0.0;
      dVar37 = (dVar54 - dVar8 * dVar55) - (dVar43 * 0.0 - dVar56 * dVar28);
      dVar39 = (dVar31 - dVar11 * dVar55) - (dVar43 * 1.0 - dVar57 * dVar28);
      dVar37 = dVar37 + dVar37;
      dVar39 = dVar39 + dVar39;
      dVar49 = (dVar47 * 0.0 - dVar34 * dVar28) - (dVar54 - dVar8 * dVar30);
      dVar52 = (dVar47 * 1.0 - dVar35 * dVar28) - (dVar31 - dVar11 * dVar30);
      dVar49 = dVar49 + dVar49;
      dVar52 = dVar52 + dVar52;
      dVar50 = (dVar32 - dVar56 * dVar30) - (dVar21 - dVar34 * dVar55);
      dVar53 = (dVar33 - dVar57 * dVar30) - (dVar23 - dVar35 * dVar55);
      dVar50 = dVar50 + dVar50;
      dVar53 = dVar53 + dVar53;
      dVar45 = (dVar54 - dVar26 * dVar55) - (dVar32 - dVar41 * dVar28);
      dVar14 = (dVar31 - dVar27 * dVar55) - (dVar33 - dVar13 * dVar28);
      dVar45 = dVar45 + dVar45;
      dVar14 = dVar14 + dVar14;
      dVar54 = (dVar21 - dVar16 * dVar28) - (dVar54 - dVar26 * dVar30);
      dVar28 = (dVar23 - dVar29 * dVar28) - (dVar31 - dVar27 * dVar30);
      dVar54 = dVar54 + dVar54;
      dVar28 = dVar28 + dVar28;
      dVar21 = (dVar32 - dVar41 * dVar30) - (dVar21 - dVar16 * dVar55);
      dVar30 = (dVar33 - dVar13 * dVar30) - (dVar23 - dVar29 * dVar55);
      dVar21 = dVar21 + dVar21;
      dVar30 = dVar30 + dVar30;
      pdVar1[1] = -(dVar12 * dVar42 + dVar30 * dVar6 + 0.0 +
                   ((dVar14 * dVar43 - dVar13 * dVar19) - (dVar28 * dVar47 - dVar29 * dVar46)));
      *pdVar1 = -(dVar9 * dVar42 + dVar21 * dVar6 + 0.0 +
                 ((dVar45 * dVar43 - dVar41 * dVar19) - (dVar54 * dVar47 - dVar16 * dVar46)));
      pdVar1[3] = -(dVar17 * dVar42 + dVar53 * dVar6 + 1.0 +
                   ((dVar39 * dVar43 - dVar57 * dVar19) - (dVar52 * dVar47 - dVar35 * dVar46)));
      pdVar1[2] = -(dVar15 * dVar42 + dVar50 * dVar6 + 0.0 +
                   ((dVar37 * dVar43 - dVar56 * dVar19) - (dVar49 * dVar47 - dVar34 * dVar46)));
      pdVar1[5] = -(dVar7 * dVar42 + dVar51 * dVar6 + 0.0 +
                   ((dVar22 * dVar43 - dVar3 * dVar19) - (dVar38 * dVar47 - dVar18 * dVar46)));
      pdVar1[4] = -(dVar5 * dVar42 + dVar48 * dVar6 + 0.0 +
                   ((dVar20 * dVar43 - dVar40 * dVar19) - (dVar36 * dVar47 - dVar4 * dVar46)));
      pdVar1[7] = -(dVar12 * dVar46 + dVar28 * dVar6 + 0.0 +
                   ((dVar30 * dVar47 - dVar29 * dVar42) - (dVar14 * dVar44 - dVar27 * dVar19)));
      pdVar1[6] = -(dVar9 * dVar46 + dVar54 * dVar6 + 0.0 +
                   ((dVar21 * dVar47 - dVar16 * dVar42) - (dVar45 * dVar44 - dVar26 * dVar19)));
      pdVar1[9] = -(dVar17 * dVar46 + dVar52 * dVar6 + 0.0 +
                   ((dVar53 * dVar47 - dVar35 * dVar42) - (dVar39 * dVar44 - dVar11 * dVar19)));
      pdVar1[8] = -(dVar15 * dVar46 + dVar49 * dVar6 + 0.0 +
                   ((dVar50 * dVar47 - dVar34 * dVar42) - (dVar37 * dVar44 - dVar8 * dVar19)));
      pdVar1[0xb] = -(dVar7 * dVar46 + dVar38 * dVar6 + 0.0 +
                     ((dVar51 * dVar47 - dVar18 * dVar42) - (dVar22 * dVar44 - dVar25 * dVar19)));
      pdVar1[10] = -(dVar5 * dVar46 + dVar36 * dVar6 + 1.0 +
                    ((dVar48 * dVar47 - dVar4 * dVar42) - (dVar20 * dVar44 - dVar24 * dVar19)));
      pdVar1[0xd] = -(dVar12 * dVar19 + dVar14 * dVar6 + 0.0 +
                     ((dVar28 * dVar44 - dVar27 * dVar46) - (dVar30 * dVar43 - dVar13 * dVar42)));
      pdVar1[0xc] = -(dVar9 * dVar19 + dVar45 * dVar6 + 0.0 +
                     ((dVar54 * dVar44 - dVar26 * dVar46) - (dVar21 * dVar43 - dVar41 * dVar42)));
      pdVar1[0xf] = -(dVar17 * dVar19 + dVar39 * dVar6 + 0.0 +
                     ((dVar52 * dVar44 - dVar11 * dVar46) - (dVar53 * dVar43 - dVar57 * dVar42)));
      pdVar1[0xe] = -(dVar15 * dVar19 + dVar37 * dVar6 + 0.0 +
                     ((dVar49 * dVar44 - dVar8 * dVar46) - (dVar50 * dVar43 - dVar56 * dVar42)));
      pdVar1[0x11] = -(dVar7 * dVar19 + dVar22 * dVar6 + 1.0 +
                      ((dVar38 * dVar44 - dVar25 * dVar46) - (dVar51 * dVar43 - dVar3 * dVar42)));
      pdVar1[0x10] = -(dVar5 * dVar19 + dVar20 * dVar6 + 0.0 +
                      ((dVar36 * dVar44 - dVar24 * dVar46) - (dVar48 * dVar43 - dVar40 * dVar42)));
    }
  }
  return 1;
}



/* Entry: 10943d67c; end: 10943d683;  */

void FUN_10943d67c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10943d680);
  (*pcVar1)();
}



/* Entry: 10943d684; end: 10943d763;  */

undefined8 * FUN_10943d684(undefined8 *param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 6) == 0) {
    param_1[5] = 0;
    *param_1 = &PTR_DAT_110b1dad0;
    lVar1 = param_1[1];
  }
  else {
    lVar1 = param_1[5];
    param_1[5] = 0;
    if (lVar1 != 0) {
      __ZdlPv();
    }
    *param_1 = &PTR_DAT_110b1dad0;
    lVar1 = param_1[1];
  }
  if (lVar1 != 0) {
    param_1[2] = lVar1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10943d764; end: 10943db3b;  */

undefined8 FUN_10943d764(long param_1,long *param_2,double *param_3,long *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  code *pcVar13;
  undefined8 *puVar14;
  double *pdVar15;
  double *pdVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined8 auStack_370 [2];
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  double adStack_1f0 [2];
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  undefined8 auStack_130 [2];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar16 = *(double **)(param_1 + 0x28);
  if (param_4 == (long *)0x0) {
    pdVar15 = (double *)*param_2;
    dVar33 = *pdVar15;
    dVar34 = pdVar15[1];
    dVar35 = pdVar15[2];
    dVar27 = dVar34 * dVar34 + dVar33 * dVar33 + dVar35 * dVar35;
    dVar23 = 2.220446049250313e-16;
    if (dVar27 <= 2.220446049250313e-16) {
      dVar26 = dVar35 + dVar34 * 0.0 + 0.0;
      dVar29 = dVar33 * -0.0 + dVar35 * 0.0 + -1.0;
      dVar27 = (dVar34 * -0.0 - dVar33) + 0.0;
    }
    else {
      dVar27 = SQRT(dVar27);
      dVar31 = dVar27;
      ___sincos_stret();
      dVar27 = 1.0 / dVar27;
      dVar33 = dVar33 * dVar27;
      dVar34 = dVar34 * dVar27;
      dVar35 = dVar35 * dVar27;
      dVar27 = (1.0 - dVar23) * ((dVar33 * 0.0 - dVar34) + dVar35 * 0.0);
      dVar26 = dVar31 * (dVar35 + dVar34 * 0.0) + dVar23 * 0.0 + dVar27 * dVar33;
      dVar29 = (dVar31 * (dVar33 * -0.0 + dVar35 * 0.0) - dVar23) + dVar27 * dVar34;
      dVar27 = dVar31 * (dVar34 * -0.0 - dVar33) + dVar23 * 0.0 + dVar27 * dVar35;
    }
    dVar23 = pdVar16[3];
    dVar27 = dVar29 * pdVar16[1] + dVar26 * *pdVar16 + dVar27 * pdVar16[2];
    _acos();
    *param_3 = dVar23 * dVar27;
  }
  else {
    puVar14 = (undefined8 *)*param_2;
    auStack_370[0] = *puVar14;
    uStack_360 = 0x3ff0000000000000;
    uStack_350 = 0;
    uStack_358 = 0;
    uStack_340 = 0;
    uStack_348 = 0;
    uStack_338 = 0;
    uStack_330 = puVar14[1];
    uStack_320 = 0;
    uStack_318 = 0x3ff0000000000000;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2f0 = puVar14[2];
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2d0 = 0x3ff0000000000000;
    uStack_2c8 = 0;
    uStack_2b0 = puVar14[3];
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_288 = 0x3ff0000000000000;
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = puVar14[4];
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0x3ff0000000000000;
    uStack_230 = puVar14[5];
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0x3ff0000000000000;
    auStack_130[0] = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_f0 = 0xbff0000000000000;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_b0 = 0;
    adStack_1f0[0] = 0.0;
    dStack_158 = 0.0;
    dStack_160 = 0.0;
    dStack_148 = 0.0;
    dStack_150 = 0.0;
    dStack_138 = 0.0;
    dStack_140 = 0.0;
    dStack_1d8 = 0.0;
    dStack_1e0 = 0.0;
    dStack_1c8 = 0.0;
    dStack_1d0 = 0.0;
    dStack_1b8 = 0.0;
    dStack_1c0 = 0.0;
    dStack_1b0 = 0.0;
    dStack_198 = 0.0;
    dStack_1a0 = 0.0;
    dStack_188 = 0.0;
    dStack_190 = 0.0;
    dStack_178 = 0.0;
    dStack_180 = 0.0;
    dStack_170 = 0.0;
    FUN_10943db44(auStack_370,auStack_130,adStack_1f0);
    dVar12 = dStack_138;
    dVar11 = dStack_140;
    dVar10 = dStack_148;
    dVar9 = dStack_150;
    dVar8 = dStack_158;
    dVar7 = dStack_160;
    dVar24 = dStack_170;
    dVar6 = dStack_178;
    dVar5 = dStack_180;
    dVar4 = dStack_188;
    dVar3 = dStack_190;
    dVar2 = dStack_198;
    dVar1 = dStack_1a0;
    dVar31 = dStack_1b0;
    dVar29 = dStack_1b8;
    dVar26 = dStack_1c0;
    dVar35 = dStack_1c8;
    dVar34 = dStack_1d0;
    dVar33 = dStack_1d8;
    dVar23 = dStack_1e0;
    dVar27 = adStack_1f0[0];
    dVar17 = *pdVar16;
    dVar20 = pdVar16[1];
    dVar21 = pdVar16[2];
    dVar28 = pdVar16[3];
    dVar32 = dVar17 * adStack_1f0[0] + dVar20 * dStack_1b0 + dVar21 * dStack_170;
    dVar19 = dVar32;
    _acos();
    *param_3 = dVar19 * dVar28;
    pdVar16 = (double *)*param_4;
    if (pdVar16 != (double *)0x0) {
      dVar18 = dVar19 * 0.0;
      dVar19 = dVar19 * 0.0;
      dVar25 = dVar27 * 0.0;
      dVar27 = dVar27 * 0.0;
      dVar30 = dVar31 * 0.0;
      dVar31 = dVar31 * 0.0;
      dVar22 = dVar24 * 0.0;
      dVar24 = dVar24 * 0.0;
      dVar32 = -1.0 / SQRT(1.0 - dVar32 * dVar32);
      pdVar16[1] = dVar19 + (dVar33 * dVar17 + dVar27 + dVar2 * dVar20 + dVar31 +
                            dVar8 * dVar21 + dVar24) * dVar32 * dVar28;
      *pdVar16 = dVar18 + (dVar23 * dVar17 + dVar25 + dVar1 * dVar20 + dVar30 +
                          dVar7 * dVar21 + dVar22) * dVar32 * dVar28;
      pdVar16[3] = dVar19 + (dVar35 * dVar17 + dVar27 + dVar4 * dVar20 + dVar31 +
                            dVar10 * dVar21 + dVar24) * dVar32 * dVar28;
      pdVar16[2] = dVar18 + (dVar34 * dVar17 + dVar25 + dVar3 * dVar20 + dVar30 +
                            dVar9 * dVar21 + dVar22) * dVar32 * dVar28;
      pdVar16[5] = dVar19 + (dVar27 + dVar29 * dVar17 + dVar31 + dVar6 * dVar20 +
                            dVar24 + dVar12 * dVar21) * dVar32 * dVar28;
      pdVar16[4] = dVar18 + (dVar25 + dVar26 * dVar17 + dVar30 + dVar5 * dVar20 +
                            dVar22 + dVar11 * dVar21) * dVar32 * dVar28;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return 1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10943db40);
  (*pcVar13)();
}



/* Entry: 10943db3c; end: 10943db43;  */

void FUN_10943db3c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10943db40);
  (*pcVar1)();
}



/* Entry: 10943db44; end: 10943e407;  */

void FUN_10943db44(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  
  dVar31 = *param_1;
  dVar3 = param_1[3];
  dVar2 = param_1[2];
  dVar51 = param_1[5];
  dVar23 = param_1[4];
  dVar11 = param_1[7];
  dVar7 = param_1[6];
  dVar29 = param_1[8];
  dVar69 = param_1[0x10];
  dVar1 = dVar31 * dVar31 + dVar29 * dVar29 + dVar69 * dVar69;
  if (dVar1 <= 2.220446049250313e-16) {
    dVar13 = param_2[0x10];
    dVar9 = param_2[0x13];
    dVar8 = param_2[0x12];
    dVar43 = param_2[0x15];
    dVar14 = param_2[0x14];
    dVar12 = param_1[0xb];
    dVar6 = param_1[10];
    dVar5 = param_1[0xd];
    dVar1 = param_1[0xc];
    dVar20 = param_2[0x17];
    dVar15 = param_2[0x16];
    dVar25 = param_1[0xf];
    dVar4 = param_1[0xe];
    dVar10 = param_2[8];
    dVar21 = param_2[0xb];
    dVar19 = param_2[10];
    dVar24 = param_2[0xd];
    dVar22 = param_2[0xc];
    dVar27 = param_1[0x13];
    dVar26 = param_1[0x12];
    dVar33 = param_1[0x15];
    dVar28 = param_1[0x14];
    dVar39 = param_2[0xf];
    dVar36 = param_2[0xe];
    dVar44 = param_1[0x17];
    dVar42 = param_1[0x16];
    dVar38 = *param_2;
    dVar35 = param_2[3];
    dVar34 = param_2[2];
    dVar41 = param_2[5];
    dVar40 = param_2[4];
    dVar46 = param_2[7];
    dVar45 = param_2[6];
    *param_3 = (dVar29 * dVar13 - dVar69 * dVar10) + dVar38;
    param_3[3] = ((dVar9 * dVar29 + dVar12 * dVar13) - (dVar21 * dVar69 + dVar27 * dVar10)) + dVar35
    ;
    param_3[2] = ((dVar8 * dVar29 + dVar6 * dVar13) - (dVar19 * dVar69 + dVar26 * dVar10)) + dVar34;
    param_3[5] = ((dVar43 * dVar29 + dVar5 * dVar13) - (dVar24 * dVar69 + dVar33 * dVar10)) + dVar41
    ;
    param_3[4] = ((dVar14 * dVar29 + dVar1 * dVar13) - (dVar22 * dVar69 + dVar28 * dVar10)) + dVar40
    ;
    param_3[7] = ((dVar20 * dVar29 + dVar25 * dVar13) - (dVar39 * dVar69 + dVar44 * dVar10)) +
                 dVar46;
    param_3[6] = ((dVar15 * dVar29 + dVar4 * dVar13) - (dVar36 * dVar69 + dVar42 * dVar10)) + dVar45
    ;
    dVar16 = param_2[0xb];
    dVar18 = param_2[10];
    dVar37 = param_2[0xd];
    dVar32 = param_2[0xc];
    dVar17 = param_2[0xf];
    dVar30 = param_2[0xe];
    param_3[8] = (dVar69 * dVar38 - dVar31 * dVar13) + param_2[8];
    param_3[0xb] = ((dVar35 * dVar69 + dVar27 * dVar38) - (dVar9 * dVar31 + dVar3 * dVar13)) +
                   dVar16;
    param_3[10] = ((dVar34 * dVar69 + dVar26 * dVar38) - (dVar8 * dVar31 + dVar2 * dVar13)) + dVar18
    ;
    param_3[0xd] = ((dVar41 * dVar69 + dVar33 * dVar38) - (dVar51 * dVar13 + dVar43 * dVar31)) +
                   dVar37;
    param_3[0xc] = ((dVar40 * dVar69 + dVar28 * dVar38) - (dVar23 * dVar13 + dVar14 * dVar31)) +
                   dVar32;
    param_3[0xf] = ((dVar44 * dVar38 + dVar46 * dVar69) - (dVar11 * dVar13 + dVar20 * dVar31)) +
                   dVar17;
    param_3[0xe] = ((dVar42 * dVar38 + dVar45 * dVar69) - (dVar7 * dVar13 + dVar15 * dVar31)) +
                   dVar30;
    dVar69 = (dVar31 * dVar10 - dVar29 * dVar38) + param_2[0x10];
    dVar2 = ((dVar19 * dVar31 + dVar2 * dVar10) - (dVar34 * dVar29 + dVar6 * dVar38)) +
            param_2[0x12];
    dVar3 = ((dVar21 * dVar31 + dVar3 * dVar10) - (dVar35 * dVar29 + dVar12 * dVar38)) +
            param_2[0x13];
    dVar1 = ((dVar23 * dVar10 + dVar22 * dVar31) - (dVar40 * dVar29 + dVar1 * dVar38)) +
            param_2[0x14];
    dVar23 = ((dVar51 * dVar10 + dVar24 * dVar31) - (dVar41 * dVar29 + dVar5 * dVar38)) +
             param_2[0x15];
    dVar7 = ((dVar7 * dVar10 + dVar36 * dVar31) - (dVar4 * dVar38 + dVar45 * dVar29)) +
            param_2[0x16];
    dVar29 = ((dVar11 * dVar10 + dVar39 * dVar31) - (dVar25 * dVar38 + dVar46 * dVar29)) +
             param_2[0x17];
  }
  else {
    dVar32 = param_1[0xd];
    dVar30 = param_1[0xc];
    dVar13 = param_1[0xf];
    dVar18 = param_1[0xe];
    dVar5 = dVar18 * dVar29;
    dVar8 = dVar13 * dVar29;
    dVar9 = param_1[0x17];
    dVar25 = param_1[0x16];
    dVar6 = dVar25 * dVar69;
    dVar10 = dVar9 * dVar69;
    dVar4 = dVar7 * dVar31 + dVar7 * dVar31 + dVar5 + dVar5 + dVar6 + dVar6;
    dVar19 = param_1[0xb];
    dVar38 = param_1[10];
    dVar5 = dVar30 * dVar29;
    dVar14 = dVar32 * dVar29;
    dVar24 = param_1[0x13];
    dVar22 = param_1[0x12];
    dVar37 = param_1[0x15];
    dVar43 = param_1[0x14];
    dVar12 = dVar43 * dVar69;
    dVar15 = dVar37 * dVar69;
    dVar16 = dVar38 * dVar29;
    dVar20 = dVar19 * dVar29;
    dVar17 = dVar22 * dVar69;
    dVar21 = dVar24 * dVar69;
    dVar1 = SQRT(dVar1);
    dVar6 = 1.0 / (dVar1 + dVar1);
    dVar17 = (dVar2 * dVar31 + dVar2 * dVar31 + dVar16 + dVar16 + dVar17 + dVar17) * dVar6;
    dVar20 = (dVar3 * dVar31 + dVar3 * dVar31 + dVar20 + dVar20 + dVar21 + dVar21) * dVar6;
    dVar16 = (dVar23 * dVar31 + dVar23 * dVar31 + dVar5 + dVar5 + dVar12 + dVar12) * dVar6;
    dVar14 = (dVar51 * dVar31 + dVar51 * dVar31 + dVar14 + dVar14 + dVar15 + dVar15) * dVar6;
    dVar12 = dVar4 * dVar6;
    dVar6 = (dVar11 * dVar31 + dVar11 * dVar31 + dVar8 + dVar8 + dVar10 + dVar10) * dVar6;
    dVar5 = dVar1;
    ___sincos_stret();
    dVar1 = 1.0 / dVar1;
    dVar8 = (0.0 - dVar17 * dVar1) * dVar1;
    dVar10 = (0.0 - dVar20 * dVar1) * dVar1;
    dVar15 = (0.0 - dVar16 * dVar1) * dVar1;
    dVar21 = (0.0 - dVar14 * dVar1) * dVar1;
    dVar27 = (0.0 - dVar12 * dVar1) * dVar1;
    dVar28 = (0.0 - dVar6 * dVar1) * dVar1;
    dVar39 = dVar31 * dVar1;
    dVar2 = dVar2 * dVar1 + dVar8 * dVar31;
    dVar3 = dVar3 * dVar1 + dVar10 * dVar31;
    dVar33 = dVar23 * dVar1 + dVar15 * dVar31;
    dVar34 = dVar51 * dVar1 + dVar21 * dVar31;
    dVar35 = dVar7 * dVar1 + dVar27 * dVar31;
    dVar36 = dVar11 * dVar1 + dVar28 * dVar31;
    dVar26 = dVar29 * dVar1;
    dVar65 = dVar38 * dVar1 + dVar8 * dVar29;
    dVar66 = dVar19 * dVar1 + dVar10 * dVar29;
    dVar67 = dVar30 * dVar1 + dVar15 * dVar29;
    dVar68 = dVar32 * dVar1 + dVar21 * dVar29;
    dVar41 = dVar18 * dVar1 + dVar27 * dVar29;
    dVar46 = dVar13 * dVar1 + dVar28 * dVar29;
    dVar40 = dVar69 * dVar1;
    dVar57 = dVar22 * dVar1 + dVar8 * dVar69;
    dVar58 = dVar24 * dVar1 + dVar10 * dVar69;
    dVar62 = dVar43 * dVar1 + dVar15 * dVar69;
    dVar64 = dVar37 * dVar1 + dVar21 * dVar69;
    dVar55 = dVar25 * dVar1 + dVar27 * dVar69;
    dVar56 = dVar9 * dVar1 + dVar28 * dVar69;
    dVar70 = param_2[0x10];
    dVar29 = param_2[0x13];
    dVar1 = param_2[0x12];
    dVar11 = param_2[0x15];
    dVar31 = param_2[0x14];
    dVar60 = param_2[0x17];
    dVar59 = param_2[0x16];
    dVar37 = param_2[8];
    dVar8 = param_2[0xb];
    dVar13 = param_2[10];
    dVar52 = param_2[0xd];
    dVar50 = param_2[0xc];
    dVar47 = param_2[0xf];
    dVar42 = param_2[0xe];
    dVar69 = dVar26 * dVar70 - dVar40 * dVar37;
    dVar32 = *param_2;
    dVar21 = param_2[3];
    dVar19 = param_2[2];
    dVar24 = param_2[5];
    dVar22 = param_2[4];
    dVar10 = param_2[7];
    dVar9 = param_2[6];
    dVar63 = dVar40 * dVar32 - dVar39 * dVar70;
    dVar18 = dVar39 * dVar37 - dVar26 * dVar32;
    dVar27 = dVar40 * dVar70 + dVar26 * dVar37 + dVar39 * dVar32;
    dVar43 = 1.0 - dVar4;
    dVar51 = -dVar5;
    dVar15 = dVar17 * dVar51;
    dVar38 = dVar20 * dVar51;
    dVar71 = (0.0 - dVar15) * dVar27 +
             (dVar1 * dVar40 + dVar57 * dVar70 +
             dVar13 * dVar26 + dVar65 * dVar37 + dVar19 * dVar39 + dVar2 * dVar32) * dVar43;
    dVar72 = (0.0 - dVar38) * dVar27 +
             (dVar29 * dVar40 + dVar58 * dVar70 +
             dVar8 * dVar26 + dVar66 * dVar37 + dVar21 * dVar39 + dVar3 * dVar32) * dVar43;
    dVar23 = dVar16 * dVar51;
    dVar25 = dVar14 * dVar51;
    dVar53 = (0.0 - dVar23) * dVar27 +
             (dVar31 * dVar40 + dVar62 * dVar70 +
             dVar50 * dVar26 + dVar67 * dVar37 + dVar22 * dVar39 + dVar33 * dVar32) * dVar43;
    dVar54 = (0.0 - dVar25) * dVar27 +
             (dVar11 * dVar40 + dVar64 * dVar70 +
             dVar52 * dVar26 + dVar68 * dVar37 + dVar24 * dVar39 + dVar34 * dVar32) * dVar43;
    dVar7 = dVar12 * dVar51;
    dVar51 = dVar6 * dVar51;
    dVar61 = dVar43 * dVar27;
    dVar30 = (0.0 - dVar7) * dVar27 +
             (dVar59 * dVar40 + dVar55 * dVar70 +
             dVar41 * dVar37 + dVar42 * dVar26 + dVar35 * dVar32 + dVar9 * dVar39) * dVar43;
    dVar43 = (0.0 - dVar51) * dVar27 +
             (dVar60 * dVar40 + dVar56 * dVar70 +
             dVar46 * dVar37 + dVar47 * dVar26 + dVar36 * dVar32 + dVar10 * dVar39) * dVar43;
    dVar17 = dVar17 * dVar4;
    dVar20 = dVar20 * dVar4;
    dVar16 = dVar16 * dVar4;
    dVar14 = dVar14 * dVar4;
    dVar12 = dVar12 * dVar4;
    dVar6 = dVar6 * dVar4;
    *param_3 = dVar5 * dVar69 + dVar4 * dVar32 + dVar39 * dVar61;
    param_3[3] = dVar21 * dVar4 + dVar38 * dVar32 +
                 dVar20 * dVar69 +
                 ((dVar29 * dVar26 + dVar66 * dVar70) - (dVar8 * dVar40 + dVar58 * dVar37)) * dVar5
                 + dVar3 * dVar61 + dVar72 * dVar39;
    param_3[2] = dVar19 * dVar4 + dVar15 * dVar32 +
                 dVar17 * dVar69 +
                 ((dVar1 * dVar26 + dVar65 * dVar70) - (dVar13 * dVar40 + dVar57 * dVar37)) * dVar5
                 + dVar2 * dVar61 + dVar71 * dVar39;
    param_3[5] = dVar14 * dVar69 +
                 ((dVar11 * dVar26 + dVar68 * dVar70) - (dVar52 * dVar40 + dVar64 * dVar37)) * dVar5
                 + dVar25 * dVar32 + dVar24 * dVar4 + dVar34 * dVar61 + dVar54 * dVar39;
    param_3[4] = dVar16 * dVar69 +
                 ((dVar31 * dVar26 + dVar67 * dVar70) - (dVar50 * dVar40 + dVar62 * dVar37)) * dVar5
                 + dVar23 * dVar32 + dVar22 * dVar4 + dVar33 * dVar61 + dVar53 * dVar39;
    param_3[7] = dVar6 * dVar69 +
                 ((dVar60 * dVar26 + dVar46 * dVar70) - (dVar56 * dVar37 + dVar47 * dVar40)) * dVar5
                 + dVar51 * dVar32 + dVar10 * dVar4 + dVar36 * dVar61 + dVar43 * dVar39;
    param_3[6] = dVar12 * dVar69 +
                 ((dVar59 * dVar26 + dVar41 * dVar70) - (dVar55 * dVar37 + dVar42 * dVar40)) * dVar5
                 + dVar7 * dVar32 + dVar9 * dVar4 + dVar35 * dVar61 + dVar30 * dVar39;
    dVar69 = param_2[8];
    dVar28 = param_2[0xb];
    dVar27 = param_2[10];
    dVar48 = param_2[0xd];
    dVar44 = param_2[0xc];
    dVar49 = param_2[0xf];
    dVar45 = param_2[0xe];
    param_3[8] = dVar26 * dVar61 + dVar5 * dVar63 + dVar4 * dVar69;
    param_3[0xb] = dVar66 * dVar61 + dVar72 * dVar26 +
                   dVar20 * dVar63 +
                   ((dVar21 * dVar40 + dVar58 * dVar32) - (dVar29 * dVar39 + dVar3 * dVar70)) *
                   dVar5 + dVar28 * dVar4 + dVar38 * dVar69;
    param_3[10] = dVar65 * dVar61 + dVar71 * dVar26 +
                  dVar17 * dVar63 +
                  ((dVar19 * dVar40 + dVar57 * dVar32) - (dVar1 * dVar39 + dVar2 * dVar70)) * dVar5
                  + dVar27 * dVar4 + dVar15 * dVar69;
    param_3[0xd] = dVar68 * dVar61 + dVar54 * dVar26 +
                   dVar14 * dVar63 +
                   ((dVar24 * dVar40 + dVar64 * dVar32) - (dVar11 * dVar39 + dVar34 * dVar70)) *
                   dVar5 + dVar25 * dVar69 + dVar48 * dVar4;
    param_3[0xc] = dVar67 * dVar61 + dVar53 * dVar26 +
                   dVar16 * dVar63 +
                   ((dVar22 * dVar40 + dVar62 * dVar32) - (dVar31 * dVar39 + dVar33 * dVar70)) *
                   dVar5 + dVar23 * dVar69 + dVar44 * dVar4;
    param_3[0xf] = dVar46 * dVar61 + dVar43 * dVar26 +
                   dVar6 * dVar63 +
                   ((dVar56 * dVar32 + dVar10 * dVar40) - (dVar60 * dVar39 + dVar36 * dVar70)) *
                   dVar5 + dVar51 * dVar69 + dVar49 * dVar4;
    param_3[0xe] = dVar41 * dVar61 + dVar30 * dVar26 +
                   dVar12 * dVar63 +
                   ((dVar55 * dVar32 + dVar9 * dVar40) - (dVar59 * dVar39 + dVar35 * dVar70)) *
                   dVar5 + dVar7 * dVar69 + dVar45 * dVar4;
    dVar29 = param_2[0x10];
    dVar69 = dVar40 * dVar61 + dVar5 * dVar18 + dVar4 * dVar29;
    dVar2 = dVar57 * dVar61 + dVar71 * dVar40 +
            dVar17 * dVar18 +
            ((dVar13 * dVar39 + dVar2 * dVar37) - (dVar19 * dVar26 + dVar65 * dVar32)) * dVar5 +
            param_2[0x12] * dVar4 + dVar15 * dVar29;
    dVar3 = dVar58 * dVar61 + dVar72 * dVar40 +
            dVar20 * dVar18 +
            ((dVar8 * dVar39 + dVar3 * dVar37) - (dVar21 * dVar26 + dVar66 * dVar32)) * dVar5 +
            param_2[0x13] * dVar4 + dVar38 * dVar29;
    dVar1 = dVar62 * dVar61 + dVar53 * dVar40 +
            dVar16 * dVar18 +
            ((dVar50 * dVar39 + dVar33 * dVar37) - (dVar22 * dVar26 + dVar67 * dVar32)) * dVar5 +
            dVar23 * dVar29 + param_2[0x14] * dVar4;
    dVar23 = dVar64 * dVar61 + dVar54 * dVar40 +
             dVar14 * dVar18 +
             ((dVar52 * dVar39 + dVar34 * dVar37) - (dVar24 * dVar26 + dVar68 * dVar32)) * dVar5 +
             dVar25 * dVar29 + param_2[0x15] * dVar4;
    dVar7 = dVar55 * dVar61 + dVar30 * dVar40 +
            dVar12 * dVar18 +
            ((dVar35 * dVar37 + dVar42 * dVar39) - (dVar41 * dVar32 + dVar9 * dVar26)) * dVar5 +
            dVar7 * dVar29 + param_2[0x16] * dVar4;
    dVar29 = dVar56 * dVar61 + dVar43 * dVar40 +
             dVar6 * dVar18 +
             ((dVar36 * dVar37 + dVar47 * dVar39) - (dVar46 * dVar32 + dVar10 * dVar26)) * dVar5 +
             dVar51 * dVar29 + param_2[0x17] * dVar4;
  }
  param_3[0x10] = dVar69;
  param_3[0x13] = dVar3;
  param_3[0x12] = dVar2;
  param_3[0x15] = dVar23;
  param_3[0x14] = dVar1;
  param_3[0x17] = dVar29;
  param_3[0x16] = dVar7;
  return;
}



/* Entry: 10943e408; end: 10943e633;  */

long FUN_10943e408(long param_1)

{
  char cVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x198) != 0) {
    *(long *)(param_1 + 0x1a0) = *(long *)(param_1 + 0x198);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x180) != 0) {
    *(long *)(param_1 + 0x188) = *(long *)(param_1 + 0x180);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x177) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x160));
    cVar1 = *(char *)(param_1 + 0x15f);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x15f);
  }
  if (cVar1 < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x148));
    lVar2 = *(long *)(param_1 + 0x130);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x130);
  }
  if (lVar2 != 0) {
    *(long *)(param_1 + 0x138) = lVar2;
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x118);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
    return param_1;
  }
  return param_1;
}



/* Entry: 10943e634; end: 10943e977;  */

undefined1  [16] FUN_10943e634(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x24;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  uVar2 = *param_2;
  uVar7 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  uVar4 = (uVar2 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar4 = uVar4 ^ uVar4 >> 0x2f;
  uVar9 = uVar4 * -0x622015f714c7d297;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar7 & uVar5) == 0) {
      unaff_x24 = uVar9 & uVar5;
      plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    else {
      unaff_x24 = uVar9;
      if (uVar7 <= uVar9) {
        uVar1 = 0;
        if (uVar7 != 0) {
          uVar1 = uVar9 / uVar7;
        }
        unaff_x24 = uVar9 - uVar1 * uVar7;
      }
      plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if ((uVar7 & uVar5) == 0) {
        do {
          if (plVar8[1] == uVar9) {
            if (plVar8[2] == uVar2) {
LAB_10943e758:
              auVar10._8_8_ = 0;
              auVar10._0_8_ = plVar8;
              return auVar10;
            }
          }
          else if ((plVar8[1] & uVar5) != unaff_x24) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar8[1];
          if (uVar5 == uVar9) {
            if (plVar8[2] == uVar2) goto LAB_10943e758;
          }
          else {
            if (uVar7 <= uVar5) {
              uVar1 = 0;
              if (uVar7 != 0) {
                uVar1 = uVar5 / uVar7;
              }
              uVar5 = uVar5 - uVar1 * uVar7;
            }
            if (uVar5 != unaff_x24) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  plVar8 = (long *)0x18;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar9;
  plVar8[2] = *param_3;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar7) {
      uVar2 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar2 = uVar2 | uVar7 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar5) {
      uVar2 = uVar5;
    }
    if (uVar2 - 1 == 0) {
      uVar2 = 2;
    }
    else if ((uVar2 & uVar2 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar7 = param_1[1];
    }
    if (uVar7 < uVar2) {
LAB_10943e828:
      FUN_10943e978(param_1,uVar2);
    }
    else if (uVar2 < uVar7) {
      uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar5) {
        uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
      }
      if (uVar2 <= uVar5) {
        uVar2 = uVar5;
      }
      if (uVar2 < uVar7) goto LAB_10943e828;
    }
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar9;
      lVar6 = *param_1;
      plVar3 = *(long **)(lVar6 + unaff_x24 * 8);
      goto joined_r0x00010943e8bc;
    }
    if (uVar9 < uVar7) {
      lVar6 = *param_1;
      plVar3 = *(long **)(lVar6 + uVar4 * -0x1100afb8a63e94b8);
      unaff_x24 = uVar9;
      goto joined_r0x00010943e8bc;
    }
    uVar2 = 0;
    if (uVar7 != 0) {
      uVar2 = uVar9 / uVar7;
    }
    unaff_x24 = uVar9 - uVar2 * uVar7;
    lVar6 = *param_1;
    plVar3 = *(long **)(lVar6 + unaff_x24 * 8);
    if (plVar3 == (long *)0x0) goto LAB_10943e8d4;
LAB_10943e7bc:
    *plVar8 = *plVar3;
  }
  else {
    lVar6 = *param_1;
    plVar3 = *(long **)(lVar6 + unaff_x24 * 8);
joined_r0x00010943e8bc:
    if (plVar3 != (long *)0x0) goto LAB_10943e7bc;
LAB_10943e8d4:
    plVar3 = param_1 + 2;
    *plVar8 = *plVar3;
    *plVar3 = (long)plVar8;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar3;
    if (*plVar8 == 0) goto LAB_10943e93c;
    uVar2 = *(ulong *)(*plVar8 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar2 = uVar2 & uVar7 - 1;
    }
    else if (uVar7 <= uVar2) {
      uVar4 = 0;
      if (uVar7 != 0) {
        uVar4 = uVar2 / uVar7;
      }
      uVar2 = uVar2 - uVar4 * uVar7;
    }
    plVar3 = (long *)(*param_1 + uVar2 * 8);
  }
  *plVar3 = (long)plVar8;
LAB_10943e93c:
  param_1[3] = param_1[3] + 1;
  auVar11._8_8_ = 1;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 10943e978; end: 10943eb0f;  */

long * FUN_10943e978(undefined8 param_1,undefined8 param_2,float param_3,long *param_4,
                    undefined8 *param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined8 uVar3;
  undefined1 **ppuVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined4 *puVar12;
  int iVar13;
  ulong uVar14;
  float *pfVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 *puVar18;
  bool bVar19;
  ulong uVar20;
  float fVar21;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  float fVar25;
  float extraout_s2;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 in_b3;
  undefined1 in_register_00005061;
  undefined1 in_register_00005062;
  undefined1 in_register_00005063;
  undefined1 *puStack_4f0;
  ulong uStack_4e8;
  byte bStack_4d9;
  undefined8 uStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined4 uStack_488;
  undefined8 uStack_480;
  long *plStack_478;
  long **pplStack_470;
  code *pcStack_468;
  char *pcStack_460;
  char *pcStack_458;
  undefined *puStack_450;
  undefined8 *puStack_448;
  long *plStack_440;
  long *plStack_438;
  undefined1 **ppuStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long *plStack_3d8;
  ulong uStack_3d0;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 *apuStack_310 [2];
  char cStack_2f9;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined4 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_160;
  undefined8 uStack_158;
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
  long lStack_d0;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (param_5 == (undefined8 *)0x0) {
    plVar7 = (long *)*param_4;
    *param_4 = 0;
    if (plVar7 != (long *)0x0) {
      __ZdlPv();
    }
    param_4[1] = 0;
    return plVar7;
  }
  if ((ulong)param_5 >> 0x3d == 0) {
    lVar6 = (long)param_5 << 3;
    __Znwm();
    plVar7 = (long *)*param_4;
    *param_4 = lVar6;
    if (plVar7 != (long *)0x0) {
      __ZdlPv();
    }
    puVar10 = (undefined8 *)0x0;
    param_4[1] = (long)param_5;
    do {
      *(undefined8 *)(*param_4 + (long)puVar10 * 8) = 0;
      puVar10 = (undefined8 *)((long)puVar10 + 1);
    } while (param_5 != puVar10);
    plVar17 = param_4 + 2;
    plVar11 = (long *)*plVar17;
    if (plVar11 != (long *)0x0) {
      puVar10 = (undefined8 *)plVar11[1];
      uVar16 = (long)param_5 - 1;
      if (((ulong)param_5 & uVar16) != 0) {
        if (param_5 <= puVar10) {
          uVar16 = 0;
          if (param_5 != (undefined8 *)0x0) {
            uVar16 = (ulong)puVar10 / (ulong)param_5;
          }
          puVar10 = (undefined8 *)((long)puVar10 - uVar16 * (long)param_5);
        }
        *(long **)(*param_4 + (long)puVar10 * 8) = plVar17;
        plVar17 = (long *)*plVar11;
joined_r0x00010943ea08:
        if (plVar17 == (long *)0x0) {
          return plVar7;
        }
        do {
          puVar18 = (undefined8 *)plVar17[1];
          if (param_5 <= puVar18) {
            uVar16 = 0;
            if (param_5 != (undefined8 *)0x0) {
              uVar16 = (ulong)puVar18 / (ulong)param_5;
            }
            puVar18 = (undefined8 *)((long)puVar18 - uVar16 * (long)param_5);
          }
          if (puVar18 != puVar10) {
            lVar6 = *param_4;
            if (*(long *)(lVar6 + (long)puVar18 * 8) == 0) goto code_r0x00010943ea6c;
            *plVar11 = *plVar17;
            *plVar17 = **(long **)(lVar6 + (long)puVar18 * 8);
            **(undefined8 **)(lVar6 + (long)puVar18 * 8) = plVar17;
            plVar17 = plVar11;
          }
          plVar11 = plVar17;
          plVar17 = (long *)*plVar11;
          if (plVar17 == (long *)0x0) {
            return plVar7;
          }
        } while( true );
      }
      *(long **)(*param_4 + ((ulong)puVar10 & uVar16) * 8) = plVar17;
      uVar14 = (ulong)puVar10 & uVar16;
      while (plVar17 = plVar11, plVar11 = (long *)*plVar17, plVar11 != (long *)0x0) {
        uVar20 = plVar11[1] & uVar16;
        if (uVar20 != uVar14) {
          lVar6 = *param_4;
          if (*(long *)(lVar6 + uVar20 * 8) == 0) {
            *(long **)(lVar6 + uVar20 * 8) = plVar17;
            uVar14 = uVar20;
          }
          else {
            *plVar17 = *plVar11;
            *plVar11 = **(long **)(lVar6 + uVar20 * 8);
            **(undefined8 **)(lVar6 + uVar20 * 8) = plVar11;
            plVar11 = plVar17;
          }
        }
      }
    }
    return plVar7;
  }
  func_0x000104c4f740();
  pcStack_28 = FUN_10943eb10;
  uStack_3d0 = (ulong)CONCAT13(in_register_00005003,
                               CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_4 = 0;
  *(undefined4 *)(param_4 + 1) = param_6;
  *(uint *)((long)param_4 + 0xc) =
       CONCAT13(in_register_00005063,
                CONCAT12(in_register_00005062,CONCAT11(in_register_00005061,in_b3)));
  *(undefined4 *)(param_4 + 2) = param_7;
  lVar8 = 0x2cd8;
  uStack_3f0 = param_1;
  plStack_3d8 = param_4;
  puStack_30 = &stack0xfffffffffffffff0;
  __Znwm();
  _bzero();
  lVar6 = 0;
  do {
    lVar9 = lVar8 + lVar6;
    FUN_1093a4438();
    *(undefined4 *)(lVar9 + 0xd0) = 0xffffffff;
    *(undefined8 *)(lVar9 + 0xe0) = 0;
    *(undefined8 *)(lVar9 + 0xd8) = 0;
    *(undefined8 *)(lVar9 + 0xf0) = 0;
    *(undefined8 *)(lVar9 + 0xe8) = 0;
    *(undefined4 *)(lVar9 + 0xf8) = 0x3f800000;
    *(undefined8 *)(lVar9 + 0x108) = 0;
    *(undefined8 *)(lVar9 + 0x100) = 0;
    *(undefined8 *)(lVar9 + 0x118) = 0;
    *(undefined8 *)(lVar9 + 0x110) = 0;
    *(undefined4 *)(lVar9 + 0x120) = 0x3f800000;
    *(undefined8 *)(lVar9 + 0x130) = 0;
    *(undefined8 *)(lVar9 + 0x128) = 0;
    *(undefined8 *)(lVar9 + 0x140) = 0;
    *(undefined8 *)(lVar9 + 0x138) = 0;
    FUN_109447dac((undefined8 *)(lVar9 + 0x128),0x200);
    lVar6 = lVar6 + 0x148;
  } while (lVar6 != 0x290);
  *(undefined4 *)(lVar8 + 0xd0) = 0;
  *(undefined4 *)(lVar8 + 0x218) = 1;
  *(undefined8 *)(lVar8 + 0x290) = 0x3f8000003f000000;
  *(undefined4 *)(lVar8 + 0x298) = 3;
  *(undefined8 *)(lVar8 + 0x29c) = 0x3f8000003f000000;
  *(undefined4 *)(lVar8 + 0x2a4) = 3;
  *(undefined8 *)(lVar8 + 0x2a8) = 0x40a000003f000000;
  *(undefined8 *)(lVar8 + 0x2b0) = 2;
  *(undefined4 *)(lVar8 + 0x2b8) = 0x3fc00000;
  *(undefined8 *)(lVar8 + 0x2c4) = 0x7fffffff7fffffff;
  *(undefined8 *)(lVar8 + 700) = 0;
  *(undefined4 *)(lVar8 + 0x2cc) = 0;
  *(undefined1 *)(lVar8 + 0x2d0) = 0;
  *(undefined4 *)(lVar8 + 0x2d4) = 8;
  *(undefined8 *)(lVar8 + 0x2d8) = 0xf00000005;
  *(undefined1 *)(lVar8 + 0x2e0) = 1;
  *(undefined8 *)(lVar8 + 0x2ec) = 0;
  *(undefined8 *)(lVar8 + 0x2e4) = 0;
  *(undefined8 *)(lVar8 + 0x2fc) = 0;
  *(undefined8 *)(lVar8 + 0x2f4) = 0;
  *(undefined8 *)(lVar8 + 0x304) = 0;
  *(undefined8 *)(lVar8 + 0x314) = 0;
  *(undefined8 *)(lVar8 + 0x30c) = 0x3f800000;
  *(undefined8 *)(lVar8 + 0x324) = 0;
  *(undefined8 *)(lVar8 + 0x31c) = 0x3f800000;
  *(undefined8 *)(lVar8 + 0x334) = 0;
  *(undefined8 *)(lVar8 + 0x32c) = 0x3f8000003f800000;
  *(undefined8 *)(lVar8 + 0x344) = 0;
  *(undefined8 *)(lVar8 + 0x33c) = 0x3f80000000000000;
  *(undefined8 *)(lVar8 + 0x34c) = 0x3f80000000000000;
  *(undefined8 *)(lVar8 + 0x37c) = 0;
  *(undefined8 *)(lVar8 + 0x374) = 0;
  *(undefined8 *)(lVar8 + 0x38c) = 0;
  *(undefined8 *)(lVar8 + 900) = 0;
  *(undefined8 *)(lVar8 + 0x394) = 0;
  *(undefined8 *)(lVar8 + 0x3a4) = 0;
  *(undefined8 *)(lVar8 + 0x39c) = 0x3f800000;
  *(undefined8 *)(lVar8 + 0x3b4) = 0;
  *(undefined8 *)(lVar8 + 0x3ac) = 0x3f800000;
  *(undefined8 *)(lVar8 + 0x3c4) = 0;
  *(undefined8 *)(lVar8 + 0x3bc) = 0x3f8000003f800000;
  *(undefined8 *)(lVar8 + 0x3d4) = 0;
  *(undefined8 *)(lVar8 + 0x3cc) = 0x3f80000000000000;
  *(undefined8 *)(lVar8 + 0x3dc) = 0x3f80000000000000;
  *(undefined8 *)(lVar8 + 0x40c) = 0;
  *(undefined8 *)(lVar8 + 0x404) = 0;
  *(undefined8 *)(lVar8 + 0x41c) = 0;
  *(undefined8 *)(lVar8 + 0x414) = 0;
  *(undefined8 *)(lVar8 + 0x424) = 0;
  *(undefined8 *)(lVar8 + 0x434) = 0;
  *(undefined8 *)(lVar8 + 0x42c) = 0x3f800000;
  *(undefined8 *)(lVar8 + 0x444) = 0;
  *(undefined8 *)(lVar8 + 0x43c) = 0x3f800000;
  uStack_408 = 0;
  uStack_410 = 0x3f8000003f800000;
  uStack_3f8 = 0;
  uStack_400 = 0x3f800000;
  *(undefined8 *)(lVar8 + 0x454) = 0;
  *(undefined8 *)(lVar8 + 0x44c) = 0x3f8000003f800000;
  *(undefined8 *)(lVar8 + 0x464) = 0;
  *(undefined8 *)(lVar8 + 0x45c) = 0x3f80000000000000;
  uStack_418 = 0;
  uStack_420 = 0x3f80000000000000;
  *(undefined8 *)(lVar8 + 0x46c) = 0x3f80000000000000;
  *(undefined4 *)(lVar8 + 0x4c8) = 0;
  *(undefined8 *)(lVar8 + 0x4b0) = 0;
  *(undefined8 *)(lVar8 + 0x4a8) = 0;
  *(undefined8 *)(lVar8 + 0x4c0) = 0;
  *(undefined8 *)(lVar8 + 0x4b8) = 0;
  *(undefined8 *)(lVar8 + 0x4a0) = 0;
  *(undefined8 *)(lVar8 + 0x498) = 0;
  *(undefined8 *)(lVar8 + 0x500) = 0;
  *(undefined8 *)(lVar8 + 0x4f8) = 0;
  *(undefined8 *)(lVar8 + 0x4f0) = 0;
  *(undefined8 *)(lVar8 + 0x4e8) = 0;
  *(undefined8 *)(lVar8 + 0x4e0) = 0;
  *(undefined8 *)(lVar8 + 0x4d8) = 0;
  *(undefined8 *)(lVar8 + 0x4d0) = 0;
  FUN_109447dac(lVar8 + 0x4e8,0x200);
  *(undefined8 *)(lVar8 + 0x510) = 0;
  *(undefined8 *)(lVar8 + 0x508) = 0;
  *(undefined8 *)(lVar8 + 0x520) = 0;
  *(undefined8 *)(lVar8 + 0x518) = 0;
  FUN_109447dac((undefined8 *)(lVar8 + 0x508),0x200);
  FUN_1093a5848(lVar8 + 0x528);
  FUN_1093a5848(lVar8 + 0x1888);
  lVar6 = 0;
  do {
    lVar9 = lVar8 + lVar6;
    *(undefined8 *)(lVar9 + 0x2bf0) = 0;
    *(undefined8 *)(lVar9 + 0x2be8) = 0;
    *(undefined8 *)(lVar9 + 0x2c00) = 0;
    *(undefined8 *)(lVar9 + 0x2bf8) = 0;
    *(undefined4 *)(lVar9 + 0x2c08) = 0x3f800000;
    *(undefined8 *)(lVar9 + 0x2c18) = 0;
    *(undefined8 *)(lVar9 + 0x2c10) = 0;
    *(undefined8 *)(lVar9 + 0x2c28) = 0;
    *(undefined8 *)(lVar9 + 0x2c20) = 0;
    *(undefined8 *)(lVar9 + 0x2c38) = 0;
    *(undefined8 *)(lVar9 + 0x2c30) = 0;
    *(undefined8 *)(lVar9 + 0x2c40) = 0;
    FUN_109447fb0(lVar8 + 0x2c10 + lVar6,0x2000);
    FUN_10944806c(lVar8 + 0x2c10 + lVar6,1);
    func_0x000109448204(*(undefined8 *)(lVar9 + 0x2c10));
    plVar7 = plStack_3d8;
    lVar6 = lVar6 + 0x60;
  } while (lVar6 != 0xc0);
  *(undefined8 *)(lVar8 + 0x2cc0) = 0;
  *(undefined8 *)(lVar8 + 0x2cb8) = 0;
  *(undefined8 *)(lVar8 + 0x2cd0) = 0;
  *(undefined8 *)(lVar8 + 0x2cc8) = 0;
  *(undefined8 *)(lVar8 + 0x2cb0) = 0;
  *(undefined8 *)(lVar8 + 0x2ca8) = 0;
  lVar6 = *plStack_3d8;
  *plStack_3d8 = lVar8;
  if (lVar6 != 0) {
    func_0x00010944782c(plStack_3d8);
  }
  uStack_328 = *param_5;
  uVar3 = param_5[5];
  auVar28 = NEON_fmov(0xbfe0000000000000,8);
  auVar1[9] = (char)((ulong)uVar3 >> 8);
  auVar1._0_9_ = *(unkbyte9 *)(param_5 + 4);
  auVar1[10] = (char)((ulong)uVar3 >> 0x10);
  auVar1[0xb] = (char)((ulong)uVar3 >> 0x18);
  auVar1[0xc] = (char)((ulong)uVar3 >> 0x20);
  auVar1[0xd] = (char)((ulong)uVar3 >> 0x28);
  auVar1[0xe] = (char)((ulong)uVar3 >> 0x30);
  auVar1[0xf] = (char)((ulong)uVar3 >> 0x38);
  fVar26 = (float)auVar1._8_8_;
  fVar21 = (float)((double)param_5[3] + auVar28._8_8_);
  uStack_318 = CONCAT17((char)((uint)fVar21 >> 0x18),
                        CONCAT16((char)((uint)fVar21 >> 0x10),
                                 CONCAT15((char)((uint)fVar21 >> 8),
                                          CONCAT14(SUB41(fVar21,0),
                                                   (float)((double)param_5[2] + auVar28._0_8_)))));
  uStack_320 = CONCAT17((char)((uint)fVar26 >> 0x18),
                        CONCAT16((char)((uint)fVar26 >> 0x10),
                                 CONCAT15((char)((uint)fVar26 >> 8),
                                          CONCAT14(SUB41(fVar26,0),
                                                   (float)(double)*(unkbyte9 *)(param_5 + 4)))));
  func_0x000107c31940(apuStack_310,"UNKNOWN");
  uStack_280 = 0;
  uStack_278 = 0;
  uStack_270 = (ulong)uStack_270._4_4_ << 0x20;
  puStack_2f0 = (undefined8 *)0x0;
  uStack_2e8 = 0;
  puStack_2f8 = (undefined8 *)0x0;
  FUN_1093c71a0(&puStack_2f8,&uStack_280,(long)&uStack_270 + 4,5);
  uStack_3a0 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_390 = uStack_3f8;
  uStack_398 = uStack_400;
  uStack_380 = uStack_3f8;
  uStack_388 = uStack_400;
  uStack_370 = uStack_408;
  uStack_378 = uStack_410;
  uStack_360 = uStack_418;
  uStack_368 = uStack_420;
  uStack_358 = 0x3f80000000000000;
  FUN_10943f3a8(&uStack_328,&uStack_3c0);
  lVar8 = 0;
  uVar22 = (undefined1)((ulong)uStack_3f0 >> 8);
  uVar23 = (undefined1)((ulong)uStack_3f0 >> 0x10);
  uVar24 = (undefined1)((ulong)uStack_3f0 >> 0x18);
  lVar6 = *plVar7;
  uStack_3d0 = CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14((char)uStack_3f0,
                                                                        (undefined4)uStack_3d0))));
  *(ulong *)(lVar6 + 0x2a8) =
       CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14((char)uStack_3f0,
                                                                (undefined4)uStack_3d0))));
  *(undefined8 *)(lVar6 + 0x2b0) = 2;
  *(undefined4 *)(lVar6 + 0x2b8) = 0x3fc00000;
  *(undefined8 *)(lVar6 + 700) = 0;
  *(undefined8 *)(lVar6 + 0x2c4) = 0x7fffffff7fffffff;
  *(undefined4 *)(lVar6 + 0x2cc) = 0;
  *(undefined1 *)(lVar6 + 0x2d0) = param_8;
  *(undefined4 *)(lVar6 + 0x2d4) = 8;
  *(undefined8 *)(lVar6 + 0x2d8) = 0xf00000005;
  *(undefined1 *)(lVar6 + 0x2e0) = 1;
  bVar5 = true;
  do {
    bVar19 = bVar5;
    pfVar15 = (float *)(lVar6 + lVar8 * 0x148);
    *(undefined1 *)(pfVar15 + 4) = param_8;
    fVar26 = *pfVar15 * 8.0;
    pfVar15[8] = fVar26;
    pfVar15[9] = 1.0 / fVar26;
    if (fVar26 < pfVar15[1]) {
      pfVar15[1] = fVar26;
    }
    lVar8 = 1;
    bVar5 = false;
  } while (bVar19);
  lVar8 = *plVar7;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  func_0x000109444760(&uStack_280,&uStack_3c0,&uStack_3b0,&uStack_3a0);
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  func_0x000109444760(&uStack_1f0,&uStack_3c0,&uStack_3b0,&uStack_3a0);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  func_0x000109444760(&uStack_160,&uStack_3c0,&uStack_3b0,&uStack_3a0);
  func_0x000109444760(lVar8 + 0x2e4,&uStack_280,&uStack_270,&uStack_260);
  func_0x000109444760(lVar8 + 0x374,&uStack_1f0,&uStack_1e0,&uStack_1d0);
  func_0x000109444760(lVar8 + 0x404,&uStack_160,&uStack_150,&uStack_140);
  lVar6 = 0;
  fVar21 = *(float *)(lVar8 + 0x2a8);
  fVar26 = *(float *)(lVar8 + 0x2ac) - fVar21;
  plVar7 = (long *)0x1;
  do {
    plVar11 = plVar7;
    fVar2 = (float)(uint)(1 << lVar6);
    fVar27 = extraout_s2 * param_3 * fVar2;
    pfVar15 = (float *)(lVar8 + lVar6 * 0x148);
    *pfVar15 = extraout_s2 * fVar2;
    pfVar15[1] = fVar27;
    pfVar15[2] = 2.8026e-44;
    pfVar15[3] = 2.8026e-44;
    *(undefined1 *)(pfVar15 + 4) = 0;
    *(undefined4 *)((long)pfVar15 + 0x12) = 0x1001;
    fVar25 = extraout_s2 * fVar2 * 8.0;
    *(undefined8 *)((long)pfVar15 + 0x16) = 0;
    pfVar15[8] = fVar25;
    pfVar15[9] = 1.0 / fVar25;
    if (fVar25 < fVar27) {
      pfVar15[1] = fVar25;
    }
    pfVar15 = (float *)(lVar8 + 0x290 + lVar6 * 0xc);
    pfVar15[2] = *(float *)(lVar8 + 0x2dc);
    *pfVar15 = fVar21;
    fVar21 = fVar21 + (fVar26 / 3.0) * fVar2;
    pfVar15[1] = fVar21;
    uStack_2e0 = 0;
    uStack_288 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_290 = 0;
    FUN_1099a9f0c(&uStack_2e0,&UNK_10f56d808,0xd8,0,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_2d8 + 0x7540,&UNK_10f56d8c7,0x12);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf();
    FUN_1099ab3b0(&uStack_2e0);
    plVar17 = plStack_3d8;
    lVar6 = 1;
    plVar7 = (long *)0x0;
  } while ((int)plVar11 != 0);
  lVar6 = 0;
  uVar22 = *(undefined1 *)(lVar8 + 0x2d0);
  bVar5 = true;
  do {
    bVar19 = bVar5;
    pfVar15 = (float *)(lVar8 + lVar6 * 0x148);
    *(undefined1 *)(pfVar15 + 4) = uVar22;
    fVar26 = *pfVar15 * 8.0;
    pfVar15[8] = fVar26;
    pfVar15[9] = 1.0 / fVar26;
    if (fVar26 < pfVar15[1]) {
      pfVar15[1] = fVar26;
    }
    lVar6 = 1;
    bVar5 = false;
  } while (bVar19);
  puVar12 = (undefined4 *)(*plStack_3d8 + 0x1858);
  lVar6 = 0x26c0;
  do {
    *(undefined8 *)(puVar12 + -0x29) = 0x10100000008;
    *puVar12 = 3;
    puVar12 = puVar12 + 0x4d8;
    lVar6 = lVar6 + -0x1360;
  } while (lVar6 != 0);
  lVar6 = *plStack_3d8;
  *(ulong *)(lVar6 + 0x17ac) = uStack_3d0;
  *(ulong *)(lVar6 + 0x2b0c) = uStack_3d0;
  puVar10 = puStack_2f8;
  if (puStack_2f8 != (undefined8 *)0x0) {
    puStack_2f0 = puStack_2f8;
    __ZdlPv();
  }
  if (cStack_2f9 < '\0') {
    __ZdlPv();
    puVar10 = apuStack_310[0];
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
    return plVar17;
  }
  ___stack_chk_fail();
  FUN_10943f540(&uStack_328);
  lVar6 = *plVar11;
  *plVar11 = 0;
  if (lVar6 != 0) {
    func_0x00010944782c(plVar11);
  }
  puVar18 = puVar10;
  __Unwind_Resume();
  pcStack_460 = "-";
  pcStack_458 = ": ";
  puStack_450 = &UNK_10f56d8c7;
  plStack_438 = plVar17;
  pcStack_428 = FUN_10943f3a8;
  plVar7 = puVar18 + 3;
  puStack_448 = puVar10;
  plStack_440 = plVar11;
  ppuStack_430 = &puStack_30;
  if (*(char *)((long)puVar18 + 0x2f) < '\0') {
    if (puVar18[4] == 4) {
      plVar11 = (long *)*plVar7;
      iVar13 = *(int *)plVar11;
      goto LAB_10943f40c;
    }
  }
  else if (*(char *)((long)puVar18 + 0x2f) == '\x04') {
    iVar13 = (int)*plVar7;
    plVar11 = plVar7;
LAB_10943f40c:
    if ((iVar13 == 0x656e6f4e) || (*(int *)plVar11 == 0x454e4f4e)) goto LAB_10943f4e0;
  }
  uStack_4d8 = 0;
  uStack_480 = 0;
  uStack_4c0 = 0;
  uStack_4c8 = 0;
  uStack_4b0 = 0;
  uStack_4b8 = 0;
  uStack_4a0 = 0;
  uStack_4a8 = 0;
  uStack_490 = 0;
  uStack_498 = 0;
  uStack_488 = 0;
  FUN_1099a9f0c(&uStack_4d8,&UNK_10f56d67f,0xb0,1,FUN_1099aa768,0);
  pplStack_470 = &plStack_478;
  pcStack_468 = FUN_1094456ac;
  plStack_478 = plVar7;
  FUN_1099ade68(&puStack_4f0,&UNK_10f56d765,0x25,0xf,&pplStack_470);
  ppuVar4 = (undefined1 **)puStack_4f0;
  if (-1 < (char)bStack_4d9) {
    uStack_4e8 = (ulong)bStack_4d9;
    ppuVar4 = &puStack_4f0;
  }
  FUN_1092b4db8(lStack_4d0 + 0x7540,ppuVar4,uStack_4e8);
  if ((char)bStack_4d9 < '\0') {
    __ZdlPv(puStack_4f0);
  }
  FUN_1099ab3b0(&uStack_4d8);
LAB_10943f4e0:
  uStack_4d8 = NEON_scvtf(*puVar18,4);
  func_0x000109444760(lVar6,&uStack_4d8,puVar18 + 1,puVar18 + 2);
  return (long *)0x1;
code_r0x00010943ea6c:
  *(long **)(lVar6 + (long)puVar18 * 8) = plVar11;
  plVar11 = plVar17;
  plVar17 = (long *)*plVar17;
  puVar10 = puVar18;
  goto joined_r0x00010943ea08;
}



/* Entry: 10943eb10; end: 10943f3a7;  */

long * FUN_10943eb10(undefined8 param_1,float param_2,float param_3,long *param_4,
                    undefined8 *param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined8 uVar3;
  undefined1 **ppuVar4;
  long *plVar5;
  long *plVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  long *plVar13;
  int iVar14;
  float *pfVar15;
  bool bVar16;
  long lVar17;
  float fVar18;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 in_b3;
  undefined1 in_register_00005061;
  undefined1 in_register_00005062;
  undefined1 in_register_00005063;
  undefined1 *puStack_4d0;
  ulong uStack_4c8;
  byte bStack_4b9;
  undefined8 uStack_4b8;
  long lStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined4 uStack_468;
  undefined8 uStack_460;
  long *plStack_458;
  long **pplStack_450;
  code *pcStack_448;
  char *pcStack_440;
  char *pcStack_438;
  undefined *puStack_430;
  undefined8 *puStack_428;
  long *plStack_420;
  long *plStack_418;
  undefined1 *puStack_410;
  code *pcStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  long *plStack_3b8;
  ulong uStack_3b0;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 *apuStack_2f0 [2];
  char cStack_2d9;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  long lStack_b0;
  
  uStack_3b0 = (ulong)CONCAT13(in_register_00005003,
                               CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_4 = 0;
  *(undefined4 *)(param_4 + 1) = param_6;
  *(uint *)((long)param_4 + 0xc) =
       CONCAT13(in_register_00005063,
                CONCAT12(in_register_00005062,CONCAT11(in_register_00005061,in_b3)));
  *(undefined4 *)(param_4 + 2) = param_7;
  lVar8 = 0x2cd8;
  uStack_3d0 = param_1;
  plStack_3b8 = param_4;
  __Znwm();
  _bzero();
  lVar17 = 0;
  do {
    lVar9 = lVar8 + lVar17;
    FUN_1093a4438();
    *(undefined4 *)(lVar9 + 0xd0) = 0xffffffff;
    *(undefined8 *)(lVar9 + 0xe0) = 0;
    *(undefined8 *)(lVar9 + 0xd8) = 0;
    *(undefined8 *)(lVar9 + 0xf0) = 0;
    *(undefined8 *)(lVar9 + 0xe8) = 0;
    *(undefined4 *)(lVar9 + 0xf8) = 0x3f800000;
    *(undefined8 *)(lVar9 + 0x108) = 0;
    *(undefined8 *)(lVar9 + 0x100) = 0;
    *(undefined8 *)(lVar9 + 0x118) = 0;
    *(undefined8 *)(lVar9 + 0x110) = 0;
    *(undefined4 *)(lVar9 + 0x120) = 0x3f800000;
    *(undefined8 *)(lVar9 + 0x130) = 0;
    *(undefined8 *)(lVar9 + 0x128) = 0;
    *(undefined8 *)(lVar9 + 0x140) = 0;
    *(undefined8 *)(lVar9 + 0x138) = 0;
    FUN_109447dac((undefined8 *)(lVar9 + 0x128),0x200);
    lVar17 = lVar17 + 0x148;
  } while (lVar17 != 0x290);
  *(undefined4 *)(lVar8 + 0xd0) = 0;
  *(undefined4 *)(lVar8 + 0x218) = 1;
  *(undefined8 *)(lVar8 + 0x290) = 0x3f8000003f000000;
  *(undefined4 *)(lVar8 + 0x298) = 3;
  *(undefined8 *)(lVar8 + 0x29c) = 0x3f8000003f000000;
  *(undefined4 *)(lVar8 + 0x2a4) = 3;
  *(undefined8 *)(lVar8 + 0x2a8) = 0x40a000003f000000;
  *(undefined8 *)(lVar8 + 0x2b0) = 2;
  *(undefined4 *)(lVar8 + 0x2b8) = 0x3fc00000;
  *(undefined8 *)(lVar8 + 0x2c4) = 0x7fffffff7fffffff;
  *(undefined8 *)(lVar8 + 700) = 0;
  *(undefined4 *)(lVar8 + 0x2cc) = 0;
  *(undefined1 *)(lVar8 + 0x2d0) = 0;
  *(undefined4 *)(lVar8 + 0x2d4) = 8;
  *(undefined8 *)(lVar8 + 0x2d8) = 0xf00000005;
  *(undefined1 *)(lVar8 + 0x2e0) = 1;
  *(undefined8 *)(lVar8 + 0x2ec) = 0;
  *(undefined8 *)(lVar8 + 0x2e4) = 0;
  *(undefined8 *)(lVar8 + 0x2fc) = 0;
  *(undefined8 *)(lVar8 + 0x2f4) = 0;
  *(undefined8 *)(lVar8 + 0x304) = 0;
  *(undefined8 *)(lVar8 + 0x314) = 0;
  *(undefined8 *)(lVar8 + 0x30c) = 0x3f800000;
  *(undefined8 *)(lVar8 + 0x324) = 0;
  *(undefined8 *)(lVar8 + 0x31c) = 0x3f800000;
  *(undefined8 *)(lVar8 + 0x334) = 0;
  *(undefined8 *)(lVar8 + 0x32c) = 0x3f8000003f800000;
  *(undefined8 *)(lVar8 + 0x344) = 0;
  *(undefined8 *)(lVar8 + 0x33c) = 0x3f80000000000000;
  *(undefined8 *)(lVar8 + 0x34c) = 0x3f80000000000000;
  *(undefined8 *)(lVar8 + 0x37c) = 0;
  *(undefined8 *)(lVar8 + 0x374) = 0;
  *(undefined8 *)(lVar8 + 0x38c) = 0;
  *(undefined8 *)(lVar8 + 900) = 0;
  *(undefined8 *)(lVar8 + 0x394) = 0;
  *(undefined8 *)(lVar8 + 0x3a4) = 0;
  *(undefined8 *)(lVar8 + 0x39c) = 0x3f800000;
  *(undefined8 *)(lVar8 + 0x3b4) = 0;
  *(undefined8 *)(lVar8 + 0x3ac) = 0x3f800000;
  *(undefined8 *)(lVar8 + 0x3c4) = 0;
  *(undefined8 *)(lVar8 + 0x3bc) = 0x3f8000003f800000;
  *(undefined8 *)(lVar8 + 0x3d4) = 0;
  *(undefined8 *)(lVar8 + 0x3cc) = 0x3f80000000000000;
  *(undefined8 *)(lVar8 + 0x3dc) = 0x3f80000000000000;
  *(undefined8 *)(lVar8 + 0x40c) = 0;
  *(undefined8 *)(lVar8 + 0x404) = 0;
  *(undefined8 *)(lVar8 + 0x41c) = 0;
  *(undefined8 *)(lVar8 + 0x414) = 0;
  *(undefined8 *)(lVar8 + 0x424) = 0;
  *(undefined8 *)(lVar8 + 0x434) = 0;
  *(undefined8 *)(lVar8 + 0x42c) = 0x3f800000;
  *(undefined8 *)(lVar8 + 0x444) = 0;
  *(undefined8 *)(lVar8 + 0x43c) = 0x3f800000;
  uStack_3e8 = 0;
  uStack_3f0 = 0x3f8000003f800000;
  uStack_3d8 = 0;
  uStack_3e0 = 0x3f800000;
  *(undefined8 *)(lVar8 + 0x454) = 0;
  *(undefined8 *)(lVar8 + 0x44c) = 0x3f8000003f800000;
  *(undefined8 *)(lVar8 + 0x464) = 0;
  *(undefined8 *)(lVar8 + 0x45c) = 0x3f80000000000000;
  uStack_3f8 = 0;
  uStack_400 = 0x3f80000000000000;
  *(undefined8 *)(lVar8 + 0x46c) = 0x3f80000000000000;
  *(undefined4 *)(lVar8 + 0x4c8) = 0;
  *(undefined8 *)(lVar8 + 0x4b0) = 0;
  *(undefined8 *)(lVar8 + 0x4a8) = 0;
  *(undefined8 *)(lVar8 + 0x4c0) = 0;
  *(undefined8 *)(lVar8 + 0x4b8) = 0;
  *(undefined8 *)(lVar8 + 0x4a0) = 0;
  *(undefined8 *)(lVar8 + 0x498) = 0;
  *(undefined8 *)(lVar8 + 0x500) = 0;
  *(undefined8 *)(lVar8 + 0x4f8) = 0;
  *(undefined8 *)(lVar8 + 0x4f0) = 0;
  *(undefined8 *)(lVar8 + 0x4e8) = 0;
  *(undefined8 *)(lVar8 + 0x4e0) = 0;
  *(undefined8 *)(lVar8 + 0x4d8) = 0;
  *(undefined8 *)(lVar8 + 0x4d0) = 0;
  FUN_109447dac(lVar8 + 0x4e8,0x200);
  *(undefined8 *)(lVar8 + 0x510) = 0;
  *(undefined8 *)(lVar8 + 0x508) = 0;
  *(undefined8 *)(lVar8 + 0x520) = 0;
  *(undefined8 *)(lVar8 + 0x518) = 0;
  FUN_109447dac((undefined8 *)(lVar8 + 0x508),0x200);
  FUN_1093a5848(lVar8 + 0x528);
  FUN_1093a5848(lVar8 + 0x1888);
  lVar17 = 0;
  do {
    lVar9 = lVar8 + lVar17;
    *(undefined8 *)(lVar9 + 0x2bf0) = 0;
    *(undefined8 *)(lVar9 + 0x2be8) = 0;
    *(undefined8 *)(lVar9 + 0x2c00) = 0;
    *(undefined8 *)(lVar9 + 0x2bf8) = 0;
    *(undefined4 *)(lVar9 + 0x2c08) = 0x3f800000;
    *(undefined8 *)(lVar9 + 0x2c18) = 0;
    *(undefined8 *)(lVar9 + 0x2c10) = 0;
    *(undefined8 *)(lVar9 + 0x2c28) = 0;
    *(undefined8 *)(lVar9 + 0x2c20) = 0;
    *(undefined8 *)(lVar9 + 0x2c38) = 0;
    *(undefined8 *)(lVar9 + 0x2c30) = 0;
    *(undefined8 *)(lVar9 + 0x2c40) = 0;
    FUN_109447fb0(lVar8 + 0x2c10 + lVar17,0x2000);
    FUN_10944806c(lVar8 + 0x2c10 + lVar17,1);
    func_0x000109448204(*(undefined8 *)(lVar9 + 0x2c10));
    plVar6 = plStack_3b8;
    lVar17 = lVar17 + 0x60;
  } while (lVar17 != 0xc0);
  *(undefined8 *)(lVar8 + 0x2cc0) = 0;
  *(undefined8 *)(lVar8 + 0x2cb8) = 0;
  *(undefined8 *)(lVar8 + 0x2cd0) = 0;
  *(undefined8 *)(lVar8 + 0x2cc8) = 0;
  *(undefined8 *)(lVar8 + 0x2cb0) = 0;
  *(undefined8 *)(lVar8 + 0x2ca8) = 0;
  lVar17 = *plStack_3b8;
  *plStack_3b8 = lVar8;
  if (lVar17 != 0) {
    func_0x00010944782c(plStack_3b8);
  }
  uStack_308 = *param_5;
  uVar3 = param_5[5];
  auVar25 = NEON_fmov(0xbfe0000000000000,8);
  auVar1[9] = (char)((ulong)uVar3 >> 8);
  auVar1._0_9_ = *(unkbyte9 *)(param_5 + 4);
  auVar1[10] = (char)((ulong)uVar3 >> 0x10);
  auVar1[0xb] = (char)((ulong)uVar3 >> 0x18);
  auVar1[0xc] = (char)((ulong)uVar3 >> 0x20);
  auVar1[0xd] = (char)((ulong)uVar3 >> 0x28);
  auVar1[0xe] = (char)((ulong)uVar3 >> 0x30);
  auVar1[0xf] = (char)((ulong)uVar3 >> 0x38);
  fVar23 = (float)auVar1._8_8_;
  fVar18 = (float)((double)param_5[3] + auVar25._8_8_);
  uStack_2f8 = CONCAT17((char)((uint)fVar18 >> 0x18),
                        CONCAT16((char)((uint)fVar18 >> 0x10),
                                 CONCAT15((char)((uint)fVar18 >> 8),
                                          CONCAT14(SUB41(fVar18,0),
                                                   (float)((double)param_5[2] + auVar25._0_8_)))));
  uStack_300 = CONCAT17((char)((uint)fVar23 >> 0x18),
                        CONCAT16((char)((uint)fVar23 >> 0x10),
                                 CONCAT15((char)((uint)fVar23 >> 8),
                                          CONCAT14(SUB41(fVar23,0),
                                                   (float)(double)*(unkbyte9 *)(param_5 + 4)))));
  func_0x000107c31940(apuStack_2f0,"UNKNOWN");
  uStack_260 = 0;
  uStack_258 = 0;
  uStack_250 = (ulong)uStack_250._4_4_ << 0x20;
  puStack_2d0 = (undefined8 *)0x0;
  uStack_2c8 = 0;
  puStack_2d8 = (undefined8 *)0x0;
  FUN_1093c71a0(&puStack_2d8,&uStack_260,(long)&uStack_250 + 4,5);
  uStack_380 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_370 = uStack_3d8;
  uStack_378 = uStack_3e0;
  uStack_360 = uStack_3d8;
  uStack_368 = uStack_3e0;
  uStack_350 = uStack_3e8;
  uStack_358 = uStack_3f0;
  uStack_340 = uStack_3f8;
  uStack_348 = uStack_400;
  uStack_338 = 0x3f80000000000000;
  FUN_10943f3a8(&uStack_308,&uStack_3a0);
  lVar8 = 0;
  uVar19 = (undefined1)((ulong)uStack_3d0 >> 8);
  uVar20 = (undefined1)((ulong)uStack_3d0 >> 0x10);
  uVar21 = (undefined1)((ulong)uStack_3d0 >> 0x18);
  lVar17 = *plVar6;
  uStack_3b0 = CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14((char)uStack_3d0,
                                                                        (undefined4)uStack_3b0))));
  *(ulong *)(lVar17 + 0x2a8) =
       CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14((char)uStack_3d0,
                                                                (undefined4)uStack_3b0))));
  *(undefined8 *)(lVar17 + 0x2b0) = 2;
  *(undefined4 *)(lVar17 + 0x2b8) = 0x3fc00000;
  *(undefined8 *)(lVar17 + 700) = 0;
  *(undefined8 *)(lVar17 + 0x2c4) = 0x7fffffff7fffffff;
  *(undefined4 *)(lVar17 + 0x2cc) = 0;
  *(undefined1 *)(lVar17 + 0x2d0) = param_8;
  *(undefined4 *)(lVar17 + 0x2d4) = 8;
  *(undefined8 *)(lVar17 + 0x2d8) = 0xf00000005;
  *(undefined1 *)(lVar17 + 0x2e0) = 1;
  bVar7 = true;
  do {
    bVar16 = bVar7;
    pfVar15 = (float *)(lVar17 + lVar8 * 0x148);
    *(undefined1 *)(pfVar15 + 4) = param_8;
    fVar23 = *pfVar15 * 8.0;
    pfVar15[8] = fVar23;
    pfVar15[9] = 1.0 / fVar23;
    if (fVar23 < pfVar15[1]) {
      pfVar15[1] = fVar23;
    }
    lVar8 = 1;
    bVar7 = false;
  } while (bVar16);
  lVar8 = *plVar6;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  func_0x000109444760(&uStack_260,&uStack_3a0,&uStack_390,&uStack_380);
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  func_0x000109444760(&uStack_1d0,&uStack_3a0,&uStack_390,&uStack_380);
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
  uStack_138 = 0;
  uStack_140 = 0;
  func_0x000109444760(&uStack_140,&uStack_3a0,&uStack_390,&uStack_380);
  func_0x000109444760(lVar8 + 0x2e4,&uStack_260,&uStack_250,&uStack_240);
  func_0x000109444760(lVar8 + 0x374,&uStack_1d0,&uStack_1c0,&uStack_1b0);
  func_0x000109444760(lVar8 + 0x404,&uStack_140,&uStack_130,&uStack_120);
  lVar17 = 0;
  fVar18 = *(float *)(lVar8 + 0x2a8);
  fVar23 = *(float *)(lVar8 + 0x2ac) - fVar18;
  plVar6 = (long *)0x1;
  do {
    plVar13 = plVar6;
    fVar2 = (float)(uint)(1 << lVar17);
    fVar24 = param_2 * param_3 * fVar2;
    pfVar15 = (float *)(lVar8 + lVar17 * 0x148);
    *pfVar15 = param_2 * fVar2;
    pfVar15[1] = fVar24;
    pfVar15[2] = 2.8026e-44;
    pfVar15[3] = 2.8026e-44;
    *(undefined1 *)(pfVar15 + 4) = 0;
    *(undefined4 *)((long)pfVar15 + 0x12) = 0x1001;
    fVar22 = param_2 * fVar2 * 8.0;
    *(undefined8 *)((long)pfVar15 + 0x16) = 0;
    pfVar15[8] = fVar22;
    pfVar15[9] = 1.0 / fVar22;
    if (fVar22 < fVar24) {
      pfVar15[1] = fVar22;
    }
    pfVar15 = (float *)(lVar8 + 0x290 + lVar17 * 0xc);
    pfVar15[2] = *(float *)(lVar8 + 0x2dc);
    *pfVar15 = fVar18;
    fVar18 = fVar18 + (fVar23 / 3.0) * fVar2;
    pfVar15[1] = fVar18;
    uStack_2c0 = 0;
    uStack_268 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_270 = 0;
    FUN_1099a9f0c(&uStack_2c0,&UNK_10f56d808,0xd8,0,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_2b8 + 0x7540,&UNK_10f56d8c7,0x12);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf();
    FUN_1099ab3b0(&uStack_2c0);
    plVar5 = plStack_3b8;
    lVar17 = 1;
    plVar6 = (long *)0x0;
  } while ((int)plVar13 != 0);
  lVar17 = 0;
  uVar19 = *(undefined1 *)(lVar8 + 0x2d0);
  bVar7 = true;
  do {
    bVar16 = bVar7;
    pfVar15 = (float *)(lVar8 + lVar17 * 0x148);
    *(undefined1 *)(pfVar15 + 4) = uVar19;
    fVar23 = *pfVar15 * 8.0;
    pfVar15[8] = fVar23;
    pfVar15[9] = 1.0 / fVar23;
    if (fVar23 < pfVar15[1]) {
      pfVar15[1] = fVar23;
    }
    lVar17 = 1;
    bVar7 = false;
  } while (bVar16);
  puVar12 = (undefined4 *)(*plStack_3b8 + 0x1858);
  lVar17 = 0x26c0;
  do {
    *(undefined8 *)(puVar12 + -0x29) = 0x10100000008;
    *puVar12 = 3;
    puVar12 = puVar12 + 0x4d8;
    lVar17 = lVar17 + -0x1360;
  } while (lVar17 != 0);
  lVar17 = *plStack_3b8;
  *(ulong *)(lVar17 + 0x17ac) = uStack_3b0;
  *(ulong *)(lVar17 + 0x2b0c) = uStack_3b0;
  puVar10 = puStack_2d8;
  if (puStack_2d8 != (undefined8 *)0x0) {
    puStack_2d0 = puStack_2d8;
    __ZdlPv();
  }
  if (cStack_2d9 < '\0') {
    __ZdlPv();
    puVar10 = apuStack_2f0[0];
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return plVar5;
  }
  ___stack_chk_fail();
  FUN_10943f540(&uStack_308);
  lVar17 = *plVar13;
  *plVar13 = 0;
  if (lVar17 != 0) {
    func_0x00010944782c(plVar13);
  }
  puVar11 = puVar10;
  __Unwind_Resume();
  pcStack_440 = "-";
  pcStack_438 = ": ";
  puStack_430 = &UNK_10f56d8c7;
  plStack_418 = plVar5;
  pcStack_408 = FUN_10943f3a8;
  plVar6 = puVar11 + 3;
  puStack_428 = puVar10;
  plStack_420 = plVar13;
  puStack_410 = &stack0xfffffffffffffff0;
  if (*(char *)((long)puVar11 + 0x2f) < '\0') {
    if (puVar11[4] == 4) {
      plVar13 = (long *)*plVar6;
      iVar14 = *(int *)plVar13;
      goto LAB_10943f40c;
    }
  }
  else if (*(char *)((long)puVar11 + 0x2f) == '\x04') {
    iVar14 = (int)*plVar6;
    plVar13 = plVar6;
LAB_10943f40c:
    if ((iVar14 == 0x656e6f4e) || (*(int *)plVar13 == 0x454e4f4e)) goto LAB_10943f4e0;
  }
  uStack_4b8 = 0;
  uStack_460 = 0;
  uStack_4a0 = 0;
  uStack_4a8 = 0;
  uStack_490 = 0;
  uStack_498 = 0;
  uStack_480 = 0;
  uStack_488 = 0;
  uStack_470 = 0;
  uStack_478 = 0;
  uStack_468 = 0;
  FUN_1099a9f0c(&uStack_4b8,&UNK_10f56d67f,0xb0,1,FUN_1099aa768,0);
  pplStack_450 = &plStack_458;
  pcStack_448 = FUN_1094456ac;
  plStack_458 = plVar6;
  FUN_1099ade68(&puStack_4d0,&UNK_10f56d765,0x25,0xf,&pplStack_450);
  ppuVar4 = (undefined1 **)puStack_4d0;
  if (-1 < (char)bStack_4b9) {
    uStack_4c8 = (ulong)bStack_4b9;
    ppuVar4 = &puStack_4d0;
  }
  FUN_1092b4db8(lStack_4b0 + 0x7540,ppuVar4,uStack_4c8);
  if ((char)bStack_4b9 < '\0') {
    __ZdlPv(puStack_4d0);
  }
  FUN_1099ab3b0(&uStack_4b8);
LAB_10943f4e0:
  uStack_4b8 = NEON_scvtf(*puVar11,4);
  func_0x000109444760(lVar17,&uStack_4b8,puVar11 + 1,puVar11 + 2);
  return (long *)0x1;
}



/* Entry: 10943f3a8; end: 10943f53f;  */

undefined8 FUN_10943f3a8(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 **ppuVar2;
  long *plVar3;
  int iVar4;
  undefined1 *puStack_d0;
  ulong uStack_c8;
  byte bStack_b9;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  long **pplStack_50;
  code *pcStack_48;
  
  plVar1 = param_1 + 3;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    if (param_1[4] == 4) {
      plVar3 = (long *)*plVar1;
      iVar4 = *(int *)plVar3;
      goto LAB_10943f40c;
    }
  }
  else if (*(char *)((long)param_1 + 0x2f) == '\x04') {
    iVar4 = (int)*plVar1;
    plVar3 = plVar1;
LAB_10943f40c:
    if ((iVar4 == 0x656e6f4e) || (*(int *)plVar3 == 0x454e4f4e)) goto LAB_10943f4e0;
  }
  uStack_b8 = 0;
  uStack_60 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  FUN_1099a9f0c(&uStack_b8,&UNK_10f56d67f,0xb0,1,FUN_1099aa768,0);
  pplStack_50 = &plStack_58;
  pcStack_48 = FUN_1094456ac;
  plStack_58 = plVar1;
  FUN_1099ade68(&puStack_d0,&UNK_10f56d765,0x25,0xf,&pplStack_50);
  ppuVar2 = (undefined1 **)puStack_d0;
  if (-1 < (char)bStack_b9) {
    uStack_c8 = (ulong)bStack_b9;
    ppuVar2 = &puStack_d0;
  }
  FUN_1092b4db8(lStack_b0 + 0x7540,ppuVar2,uStack_c8);
  if ((char)bStack_b9 < '\0') {
    __ZdlPv(puStack_d0);
  }
  FUN_1099ab3b0(&uStack_b8);
LAB_10943f4e0:
  uStack_b8 = NEON_scvtf(*param_1,4);
  func_0x000109444760(param_2,&uStack_b8,param_1 + 1,param_1 + 2);
  return 1;
}



/* Entry: 10943f540; end: 10943f57f;  */

long FUN_10943f540(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  return param_1;
}



/* Entry: 10943f580; end: 109440d33;  */

void FUN_10943f580(ulong *param_1,long *param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7)

{
  undefined2 *puVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  ushort uVar8;
  short sVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  double dVar15;
  float fVar16;
  code *pcVar17;
  bool bVar18;
  float *pfVar19;
  long *plVar20;
  undefined4 *puVar21;
  undefined8 *puVar22;
  long **pplVar23;
  undefined8 **ppuVar24;
  long *plVar25;
  undefined2 *puVar26;
  long *plVar27;
  int iVar28;
  long lVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  undefined2 *puVar32;
  int *piVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  undefined4 *puVar36;
  bool bVar37;
  int extraout_w9;
  double *pdVar38;
  int *piVar39;
  undefined8 *puVar40;
  undefined4 *puVar41;
  float *pfVar42;
  undefined2 *puVar43;
  ulong uVar44;
  int *piVar45;
  undefined8 *puVar46;
  undefined1 *puVar47;
  long lVar48;
  float *pfVar49;
  undefined1 *puVar50;
  undefined4 *puVar51;
  undefined8 *puVar52;
  undefined8 *puVar53;
  undefined1 *puVar54;
  undefined8 uVar55;
  float *pfVar56;
  long lVar57;
  ulong uVar58;
  long lVar59;
  long *plVar60;
  int iVar61;
  ulong uVar62;
  long lVar63;
  long *plVar64;
  long *unaff_x23;
  long *plVar65;
  undefined4 *puVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  float fVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  float fVar74;
  long lStack_490;
  int iStack_478;
  ulong uStack_464;
  undefined8 uStack_45c;
  undefined8 uStack_454;
  undefined4 uStack_44c;
  uint uStack_448;
  int iStack_444;
  uint uStack_440;
  undefined4 uStack_43c;
  long *plStack_438;
  long *plStack_430;
  long *plStack_428;
  long lStack_420;
  undefined4 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined1 *puStack_400;
  undefined8 uStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined4 uStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  long *plStack_3c0;
  long *plStack_3b8;
  long *plStack_3b0;
  undefined4 uStack_3a8;
  double adStack_3a0 [14];
  double dStack_330;
  undefined8 uStack_328;
  long alStack_320 [12];
  double dStack_2c0;
  double dStack_2b8;
  double dStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  long *plStack_288;
  long *plStack_280;
  long *plStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  undefined1 *puStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined1 auStack_1f0 [32];
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  undefined8 auStack_1a0 [8];
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  float fStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  ulong uStack_128;
  undefined8 uStack_120;
  double dStack_118;
  double dStack_110;
  undefined8 uStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  undefined8 uStack_e8;
  double dStack_e0;
  ulong uStack_d0;
  float fStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  float fStack_98;
  undefined4 uStack_94;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_6 + 0x1d0) == 3) {
    unaff_x23 = alStack_320;
    puStack_298 = *(undefined8 **)(param_6 + 0x88);
    uStack_2a0 = *(undefined8 **)(param_6 + 0x80);
    plStack_288 = *(long **)(param_6 + 0x98);
    puStack_290 = *(undefined8 **)(param_6 + 0x90);
    plStack_278 = *(long **)(param_6 + 0xa8);
    plStack_280 = *(long **)(param_6 + 0xa0);
    puStack_270 = *(undefined8 **)(param_6 + 0xb0);
    uStack_238 = *(long *)(param_6 + 0xe8);
    lStack_240 = *(long *)(param_6 + 0xe0);
    uStack_228 = *(undefined8 *)(param_6 + 0xf8);
    uStack_230 = *(undefined8 *)(param_6 + 0xf0);
    puStack_220 = *(undefined1 **)(param_6 + 0x100);
    plStack_258 = *(long **)(param_6 + 200);
    puStack_260 = *(undefined8 **)(param_6 + 0xc0);
    plStack_248 = *(long **)(param_6 + 0xd8);
    plStack_250 = *(long **)(param_6 + 0xd0);
    FUN_109388a48(auStack_1f0,param_6 + 0x140,&uStack_2a0);
    bVar7 = *(byte *)(param_5 + 0x20);
    if ((bVar7 & 1) == 0) {
      lVar29 = *(long *)(param_3 + 0x10);
      iStack_478 = extraout_w9;
    }
    else {
      lVar29 = *(long *)(param_5 + 0x10);
      if (*(long *)(param_3 + 0x10) != lVar29) goto LAB_109440aa0;
      lStack_490 = *(long *)(param_5 + 8);
      iStack_478 = *(int *)(param_5 + 0x18);
    }
    fVar74 = *(float *)((long)param_2 + 0xc);
    iVar28 = (int)param_2[1];
    uStack_2a0 = (undefined8 *)lVar29;
    FUN_10944483c(&puStack_3d8,&uStack_2a0,0,0);
    puVar35 = puStack_3c8;
    uVar62 = *(ulong *)(param_3 + 0x10);
    uVar58 = uVar62 >> 0x20;
    iVar61 = (int)uVar62;
    if (0 < (int)(uVar62 >> 0x20)) {
      puVar40 = puStack_3c8;
      do {
        _bzero(puVar40,-(uVar62 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar62 & 0xffffffff) << 1);
        puVar40 = (undefined8 *)((long)puVar40 + (long)iVar61 * 2);
        uVar58 = uVar58 - 1;
      } while (uVar58 != 0);
      uVar62 = (ulong)*(uint *)(param_3 + 0x10);
      uVar58 = (ulong)*(uint *)(param_3 + 0x14);
    }
    uVar12 = (int)uVar58 + iVar28 * -2;
    if (0 < (int)uVar12) {
      uVar58 = 0;
      iVar10 = *(int *)(param_3 + 0x18);
      pfVar42 = (float *)(*(long *)(param_3 + 8) + (long)(iVar10 * iVar28) * 4 + (long)iVar28 * 4);
      puVar32 = (undefined2 *)((long)puVar35 + (long)(iVar28 + iVar28 * iVar61) * 2);
      pfVar49 = (float *)(lStack_490 + (long)(iVar28 * iStack_478) * 4 + (long)iVar28 * 4);
      uVar13 = (int)uVar62 + iVar28 * -2;
      lVar29 = (long)iStack_478;
      if (bVar7 == 0) {
        lVar29 = 0;
      }
      do {
        pfVar19 = pfVar42;
        puVar26 = puVar32;
        uVar62 = (ulong)uVar13;
        pfVar56 = pfVar49;
        if (0 < (int)uVar13) {
          do {
            if ((bVar7 == 0) || (fVar74 <= *pfVar56)) {
              *puVar26 = (short)(int)(*pfVar19 * 1000.0);
            }
            puVar26 = puVar26 + 1;
            pfVar19 = pfVar19 + 1;
            pfVar56 = pfVar56 + 1;
            uVar62 = uVar62 - 1;
          } while (uVar62 != 0);
        }
        uVar58 = uVar58 + 1;
        puVar32 = puVar32 + iVar61;
        pfVar42 = pfVar42 + iVar10;
        pfVar49 = pfVar49 + lVar29;
      } while (uVar58 != uVar12);
    }
    uStack_2a0 = *(undefined8 **)(param_4 + 0x10);
    FUN_1094450f0(&uStack_410,&uStack_2a0,0,0);
    puVar30 = *(undefined1 **)(param_4 + 8);
    if (puVar30 != (undefined1 *)0x0) {
      iVar28 = *(int *)(param_4 + 0x18);
      iVar61 = *(int *)(param_4 + 0x10);
      puVar50 = puVar30 + iVar61;
      puVar47 = puStack_400;
      puVar54 = puVar30 + (long)*(int *)(param_4 + 0x14) * (long)iVar28;
      do {
        puVar31 = puVar30 + 1;
        *puVar47 = *puVar30;
        puVar3 = puVar54;
        if (puVar54 <= puVar31 + ((long)iVar28 - (long)iVar61)) {
          puVar3 = (undefined1 *)0x0;
        }
        bVar18 = puVar31 != puVar50;
        lVar29 = (long)iVar28;
        if (bVar18) {
          lVar29 = 0;
        }
        puVar50 = puVar50 + lVar29;
        puVar30 = puVar31 + ((long)iVar28 - (long)iVar61);
        if (bVar18) {
          puVar3 = puVar54;
          puVar30 = puVar31;
        }
        puVar47 = puVar47 + 1;
        puVar54 = puVar3;
      } while (puVar3 != (undefined1 *)0x0);
    }
    uStack_2a0 = *(undefined8 **)(param_3 + 0x10);
    FUN_109447588(&uStack_448,&uStack_2a0,0,0);
    uVar62 = *(ulong *)(param_3 + 0x10);
    if (((int)uVar62 == (int)*(ulong *)(param_7 + 0x10)) &&
       (uVar62 >> 0x20 == *(ulong *)(param_7 + 0x10) >> 0x20)) {
      uStack_160 = uVar62;
      FUN_109447588(&uStack_2a0,&uStack_160,0,0);
      plVar60 = plStack_280;
      puVar32 = *(undefined2 **)(param_7 + 8);
      if (puVar32 != (undefined2 *)0x0) {
        iVar28 = *(int *)(param_7 + 0x18);
        iVar61 = *(int *)(param_7 + 0x10);
        puVar26 = (undefined2 *)((long)puVar32 + (long)iVar61 * 3);
        puVar43 = (undefined2 *)((long)puVar32 + (long)iVar28 * (long)*(int *)(param_7 + 0x14) * 3);
        puVar35 = puStack_290;
        do {
          uVar67 = *(undefined1 *)(puVar32 + 1);
          *(undefined2 *)puVar35 = *puVar32;
          *(undefined1 *)((long)puVar35 + 2) = uVar67;
          puVar1 = (undefined2 *)((long)puVar32 + 3);
          puVar32 = (undefined2 *)((long)puVar1 + ((long)iVar28 - (long)iVar61) * 3);
          puVar4 = puVar43;
          if (puVar43 <= puVar32) {
            puVar4 = (undefined2 *)0x0;
          }
          bVar18 = puVar1 != puVar26;
          lVar29 = (long)iVar28;
          if (bVar18) {
            lVar29 = 0;
            puVar32 = puVar1;
          }
          puVar26 = (undefined2 *)((long)puVar26 + lVar29 * 3);
          if (bVar18) {
            puVar4 = puVar43;
          }
          puVar35 = (undefined8 *)((long)puVar35 + 3);
          puVar43 = puVar4;
        } while (puVar4 != (undefined2 *)0x0);
      }
      if (((uint)uStack_2a0 == uStack_448) && (uStack_2a0._4_4_ == iStack_444)) {
        if (((uint)puStack_298 == (uint)uStack_2a0) && ((uint)uStack_2a0 == uStack_440)) {
          uVar12 = iStack_444 * (uint)uStack_2a0;
          if (uVar12 != 0) {
            puVar35 = puStack_290;
            plVar20 = plStack_438;
            do {
              *(undefined1 *)plVar20 = *(undefined1 *)puVar35;
              *(undefined1 *)((long)plVar20 + 1) = *(undefined1 *)((long)puVar35 + 1);
              *(undefined1 *)((long)plVar20 + 2) = *(undefined1 *)((long)puVar35 + 2);
              puVar35 = (undefined8 *)((long)puVar35 + 3);
              plVar20 = (long *)((long)plVar20 + 3);
            } while (puVar35 !=
                     (undefined8 *)
                     ((long)puStack_290 +
                     (-(ulong)(uVar12 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar12 << 1) +
                     (long)(int)uVar12));
          }
        }
        else if (0 < iStack_444) {
          iVar28 = 0;
          plVar20 = plStack_438;
          puVar35 = puStack_290;
          do {
            if (uStack_448 != 0) {
              plVar25 = plVar20;
              puVar40 = puVar35;
              do {
                *(undefined1 *)plVar25 = *(undefined1 *)puVar40;
                *(undefined1 *)((long)plVar25 + 1) = *(undefined1 *)((long)puVar40 + 1);
                *(undefined1 *)((long)plVar25 + 2) = *(undefined1 *)((long)puVar40 + 2);
                puVar40 = (undefined8 *)((long)puVar40 + 3);
                plVar25 = (long *)((long)plVar25 + 3);
              } while (puVar40 != (undefined8 *)((long)puVar35 + (long)(int)uStack_448 * 3));
            }
            puVar35 = (undefined8 *)
                      ((long)puVar35 +
                      (-(((ulong)puStack_298 & 0xffffffff) >> 0x1f) & 0xfffffffe00000000 |
                      ((ulong)puStack_298 & 0xffffffff) << 1) + (long)(int)(uint)puStack_298);
            plVar20 = (long *)((long)plVar20 +
                              (-(ulong)(uStack_440 >> 0x1f) & 0xfffffffe00000000 |
                              (ulong)uStack_440 << 1) + (long)(int)uStack_440);
            iVar28 = iVar28 + 1;
          } while (iVar28 < iStack_444);
        }
      }
      if (plStack_280 != (long *)0x0) {
        plVar20 = plStack_280 + 1;
        do {
          lVar29 = *plVar20;
          cVar11 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar18) {
            *plVar20 = lVar29 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar29 == 0) {
          (**(code **)(*plStack_280 + 0x10))(plStack_280);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar60);
        }
      }
    }
    else if (0 < iStack_444) {
      iVar28 = 0;
      uVar62 = (ulong)uStack_448;
      plVar60 = plStack_438;
      do {
        if (0 < (int)uVar62) {
          lVar29 = 0;
          puVar32 = (undefined2 *)((long)plVar60 + 2);
          do {
            puVar32[-1] = 0;
            *(undefined1 *)puVar32 = 0;
            lVar29 = lVar29 + 1;
            uVar62 = (ulong)(int)uStack_448;
            puVar32 = (undefined2 *)((long)puVar32 + 3);
          } while (lVar29 < (long)uVar62);
        }
        plVar60 = (long *)((long)plVar60 + (long)(int)uStack_440 * 3);
        iVar28 = iVar28 + 1;
      } while (iVar28 < iStack_444);
    }
    lVar29 = 0;
    puVar35 = auStack_1a0;
    do {
      uVar55 = puVar35[-2];
      *(undefined8 *)((long)alStack_320 + lVar29 + 8) = puVar35[-1];
      *(undefined8 *)((long)alStack_320 + lVar29) = uVar55;
      *(undefined8 *)((long)alStack_320 + lVar29 + 0x10) = *puVar35;
      lVar29 = lVar29 + 0x20;
      puVar35 = puVar35 + 3;
    } while (lVar29 != 0x60);
    alStack_320[3] = 0;
    alStack_320[7] = 0;
    alStack_320[0xb] = 0;
    uStack_2a8 = 0x3ff0000000000000;
    dStack_2c0 = dStack_1d0 / 100.0;
    dStack_2b8 = dStack_1c8 / 100.0;
    dStack_2b0 = dStack_1c0 / 100.0;
    FUN_10937fc48(&uStack_2a0,alStack_320);
    func_0x00010937fbc4(&uStack_160,&uStack_2a0);
    uStack_238._4_4_ = uStack_134;
    uStack_228 = uStack_128;
    puStack_220 = (undefined1 *)uStack_120;
    plStack_258 = (long *)uStack_158;
    puStack_260 = (undefined8 *)uStack_160;
    plStack_250 = (long *)uStack_150;
    FUN_10937f718(&uStack_d0,&uStack_2a0);
    uStack_160 = uStack_d0;
    uStack_150 = uStack_c0;
    fStack_138 = fStack_a8;
    uStack_134 = uStack_a4;
    uStack_140 = (undefined4)uStack_b0;
    uStack_13c = (undefined4)((ulong)uStack_b0 >> 0x20);
    uStack_130 = (undefined4)uStack_a0;
    uStack_12c = (undefined4)((ulong)uStack_a0 >> 0x20);
    func_0x00010937fbc4(adStack_3a0,&uStack_160);
    lVar29 = 0;
    dStack_f8 = adStack_3a0[5];
    dStack_100 = adStack_3a0[4];
    uStack_e8 = adStack_3a0[7];
    dStack_f0 = adStack_3a0[6];
    dStack_e0 = adStack_3a0[8];
    dStack_118 = adStack_3a0[1];
    uStack_108 = adStack_3a0[3];
    dStack_110 = adStack_3a0[2];
    pdVar38 = &dStack_110;
    do {
      dVar15 = pdVar38[-2];
      *(double *)((long)adStack_3a0 + lVar29 + 8) = pdVar38[-1];
      *(double *)((long)adStack_3a0 + lVar29) = dVar15;
      *(double *)((long)adStack_3a0 + lVar29 + 0x10) = *pdVar38;
      lVar29 = lVar29 + 0x20;
      pdVar38 = pdVar38 + 3;
    } while (lVar29 != 0x60);
    adStack_3a0[0xc] = (double)CONCAT44(uStack_13c,uStack_140);
    auVar14[8] = fStack_138._0_1_;
    auVar14._0_8_ = CONCAT44(uStack_13c,uStack_140);
    dStack_330 = (double)CONCAT44(uStack_12c,uStack_130);
    adStack_3a0[3] = 0.0;
    adStack_3a0[7] = 0.0;
    adStack_3a0[0xb] = 0.0;
    uStack_328 = 0x3ff0000000000000;
    uStack_d0 = CONCAT44((float)adStack_3a0[1],
                         (float)(double)CONCAT71(adStack_3a0[0]._1_7_,adStack_3a0[0]._0_1_));
    fStack_c8 = (float)adStack_3a0[2];
    uStack_c4 = 0;
    uStack_c0 = CONCAT44((float)adStack_3a0[5],(float)adStack_3a0[4]);
    fStack_b8 = (float)adStack_3a0[6];
    uStack_b4 = 0;
    uStack_b0 = CONCAT44((float)adStack_3a0[9],(float)adStack_3a0[8]);
    fStack_a8 = (float)adStack_3a0[10];
    uStack_a4 = 0;
    auVar14[9] = (char)((uint)fStack_138 >> 8);
    auVar14[10] = (char)((uint)fStack_138 >> 0x10);
    auVar14[0xb] = (char)((uint)fStack_138 >> 0x18);
    auVar14[0xc] = (char)uStack_134;
    auVar14[0xd] = (char)((uint)uStack_134 >> 8);
    auVar14[0xe] = (char)((uint)uStack_134 >> 0x10);
    auVar14[0xf] = (char)((uint)uStack_134 >> 0x18);
    fVar74 = (float)auVar14._8_8_;
    uStack_a0 = CONCAT17((char)((uint)fVar74 >> 0x18),
                         CONCAT16((char)((uint)fVar74 >> 0x10),
                                  CONCAT15((char)((uint)fVar74 >> 8),
                                           CONCAT14(SUB41(fVar74,0),
                                                    (float)(double)CONCAT44(uStack_13c,uStack_140)))
                                 ));
    fStack_98 = (float)dStack_330;
    uStack_94 = 0x3f800000;
    FUN_109445390(&uStack_464,&uStack_d0);
    uStack_158 = uStack_45c;
    uStack_160 = uStack_464;
    uStack_150 = uStack_454;
    uStack_13c = (undefined4)uStack_45c;
    fStack_138 = (float)((ulong)uStack_45c >> 0x20);
    uStack_144 = (undefined4)uStack_464;
    uStack_140 = (undefined4)(uStack_464 >> 0x20);
    uStack_134 = (undefined4)uStack_454;
    uStack_130 = (undefined4)((ulong)uStack_454 >> 0x20);
    uStack_148 = uStack_44c;
    uStack_12c = uStack_44c;
    uStack_120 = uStack_45c;
    uStack_128 = uStack_464;
    dStack_110 = (double)CONCAT44(dStack_110._4_4_,uStack_44c);
    dStack_118 = (double)uStack_454;
    lVar29 = *param_2;
    puStack_298 = puStack_3d0;
    uStack_2a0 = puStack_3d8;
    puStack_290 = puStack_3c8;
    plStack_280 = plStack_3b8;
    plStack_288 = plStack_3c0;
    if (plStack_3b8 != (long *)0x0) {
      plVar60 = plStack_3b8 + 1;
      do {
        cVar11 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar60,0x10);
        if (bVar18) {
          *plVar60 = *plVar60 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    plStack_278 = plStack_3b0;
    puStack_270 = (undefined8 *)CONCAT44(puStack_270._4_4_,uStack_3a8);
    puStack_260 = (undefined8 *)CONCAT44(uStack_43c,uStack_440);
    puStack_268 = (undefined8 *)CONCAT44(iStack_444,uStack_448);
    plStack_258 = plStack_438;
    plStack_248 = plStack_428;
    plStack_250 = plStack_430;
    if (plStack_428 != (long *)0x0) {
      plVar60 = plStack_428 + 1;
      do {
        cVar11 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar60,0x10);
        if (bVar18) {
          *plVar60 = *plVar60 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    lStack_240 = lStack_420;
    uStack_238 = CONCAT44(uStack_238._4_4_,uStack_418);
    uStack_228 = uStack_408;
    uStack_230 = uStack_410;
    puStack_220 = puStack_400;
    plStack_210 = plStack_3f0;
    uStack_218 = uStack_3f8;
    if (plStack_3f0 != (long *)0x0) {
      plVar60 = plStack_3f0 + 1;
      do {
        cVar11 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar60,0x10);
        if (bVar18) {
          *plVar60 = *plVar60 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    uStack_208 = uStack_3e8;
    uStack_200 = uStack_3e0;
    FUN_109440d34(lVar29,&uStack_2a0,&uStack_160);
    plVar60 = plStack_210;
    if (plStack_210 != (long *)0x0) {
      plVar20 = plStack_210 + 1;
      do {
        lVar29 = *plVar20;
        cVar11 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar18) {
          *plVar20 = lVar29 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar29 == 0) {
        (**(code **)(*plStack_210 + 0x10))(plStack_210);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar60);
      }
    }
    plVar60 = plStack_248;
    if (plStack_248 != (long *)0x0) {
      plVar20 = plStack_248 + 1;
      do {
        lVar29 = *plVar20;
        cVar11 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar18) {
          *plVar20 = lVar29 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar29 == 0) {
        (**(code **)(*plStack_248 + 0x10))(plStack_248);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar60);
      }
    }
    plVar60 = plStack_280;
    if (plStack_280 != (long *)0x0) {
      plVar20 = plStack_280 + 1;
      do {
        lVar29 = *plVar20;
        cVar11 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar18) {
          *plVar20 = lVar29 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar29 == 0) {
        (**(code **)(*plStack_280 + 0x10))(plStack_280);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar60);
      }
    }
    lVar29 = 0;
    lVar63 = *param_2;
    uVar6 = (undefined4)param_2[2];
    unaff_x23 = (long *)(lVar63 + 0x2ca8);
    bVar18 = true;
    do {
      bVar37 = bVar18;
      lVar57 = lVar63 + lVar29 * 0x148;
      plVar60 = unaff_x23 + lVar29 * 3;
      uVar58 = *(ulong *)(lVar57 + 0x130);
      lVar29 = *plVar60;
      lVar48 = plVar60[1];
      lVar59 = lVar48 - lVar29;
      bVar18 = uVar58 < (ulong)((lVar59 >> 1) * -0x5555555555555555);
      uVar62 = uVar58 + (lVar59 >> 1) * 0x5555555555555555;
      if (bVar18 || uVar62 == 0) {
        if (bVar18) {
          lVar48 = lVar29 + uVar58 * 6;
          goto LAB_10943ff48;
        }
      }
      else if ((ulong)((plVar60[2] - lVar48 >> 1) * -0x5555555555555555) < uVar62) {
        if (0x2aaaaaaaaaaaaaaa < uVar58) {
          FUN_1093a6ddc();
          goto LAB_109440b00;
        }
        lVar29 = plVar60[2] - lVar29 >> 1;
        uVar44 = lVar29 * 0x5555555555555556;
        if (uVar44 < uVar58 || uVar44 - uVar58 == 0) {
          uVar44 = uVar58;
        }
        if (0x1555555555555554 < (ulong)(lVar29 * -0x5555555555555555)) {
          uVar44 = 0x2aaaaaaaaaaaaaaa;
        }
        plVar20 = plVar60;
        FUN_1093a6df0();
        puVar21 = (undefined4 *)*plVar60;
        puVar66 = (undefined4 *)plVar60[1];
        puVar36 = (undefined4 *)((long)plVar20 + (long)puVar21 + (lVar59 - (long)puVar66));
        puVar51 = puVar36;
        if (puVar66 != puVar21) {
          do {
            uVar5 = *puVar21;
            *(undefined2 *)(puVar51 + 1) = *(undefined2 *)(puVar21 + 1);
            *puVar51 = uVar5;
            puVar21 = (undefined4 *)((long)puVar21 + 6);
            puVar51 = (undefined4 *)((long)puVar51 + 6);
          } while (puVar21 != puVar66);
          puVar21 = (undefined4 *)*plVar60;
        }
        *plVar60 = (long)puVar36;
        plVar60[1] = (long)plVar20 + uVar62 * 6 + lVar59;
        plVar60[2] = (long)plVar20 + uVar44 * 6;
        if (puVar21 != (undefined4 *)0x0) {
          __ZdlPv();
        }
      }
      else {
        lVar48 = lVar48 + ((uVar62 * 6) / 6) * 6;
LAB_10943ff48:
        plVar60[1] = lVar48;
      }
      lVar29 = *(long *)(lVar57 + 0x138);
      if (*(long *)(lVar57 + 0x130) != 0) {
        piVar39 = *(int **)(lVar57 + 0x128);
        piVar33 = piVar39 + lVar29 * 3;
        if (0 < lVar29) {
          do {
            if (0 < *piVar39) break;
            piVar39 = piVar39 + 3;
          } while (piVar39 < piVar33);
        }
        if (piVar39 != piVar33) {
          piVar45 = (int *)*plVar60;
          do {
            iVar28 = piVar39[1];
            *(short *)(piVar45 + 1) = (short)piVar39[2];
            *piVar45 = iVar28;
            do {
              piVar39 = piVar39 + 3;
              if (piVar33 <= piVar39) break;
            } while (*piVar39 < 1);
            piVar45 = (int *)((long)piVar45 + 6);
          } while (piVar39 != piVar33);
          lVar29 = *(long *)(lVar57 + 0x138);
        }
      }
      if (lVar29 != 0) {
        puVar21 = *(undefined4 **)(lVar57 + 0x128);
        do {
          *puVar21 = 0;
          lVar29 = lVar29 + -1;
          puVar21 = puVar21 + 3;
        } while (lVar29 != 0);
      }
      *(undefined8 *)(lVar57 + 0x130) = 0;
      lVar29 = 1;
      bVar18 = false;
    } while (bVar37);
    FUN_109449988(lVar63 + 0x528,lVar63,0,uVar6);
    FUN_109449988(lVar63 + 0x528,lVar63 + 0x148,1,uVar6);
    FUN_1093a6f18(lVar63 + 0x528,lVar63,unaff_x23,uVar6,lVar63 + 0x2be8,0);
    FUN_1093a6f18(lVar63 + 0x1888,lVar63 + 0x148,lVar63 + 0x2cc0,uVar6,lVar63 + 0x2c48,1);
    lVar29 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    bVar18 = true;
    do {
      bVar37 = bVar18;
      lVar63 = *param_2 + lVar29 * 0x1360;
      plVar60 = *(long **)(lVar63 + 0x1818);
      if (plVar60 != (long *)0x0) {
        do {
          lVar48 = lVar63 + 0x1760;
          func_0x0001093aeedc(lVar48,plVar60 + 2);
          if (lVar48 == 0) {
            FUN_109262df8(&UNK_10f639994);
            goto LAB_109440b00;
          }
          lVar57 = plVar60[2];
          sVar9 = *(short *)((long)plVar60 + 0x12);
          uVar8 = *(ushort *)((long)plVar60 + 0x14);
          unaff_x23 = *(long **)(lVar48 + 0x18);
          uStack_230 = 0;
          plStack_248 = (long *)0x0;
          plStack_250 = (long *)0x0;
          uStack_238 = 0;
          lStack_240 = 0;
          puStack_268 = (undefined8 *)0x0;
          puStack_270 = (undefined8 *)0x0;
          plStack_258 = (long *)0x0;
          puStack_260 = (undefined8 *)0x0;
          plStack_288 = (long *)0x0;
          puStack_290 = (undefined8 *)0x0;
          plStack_278 = (long *)0x0;
          plStack_280 = (long *)0x0;
          puStack_298 = (undefined8 *)0x0;
          uStack_2a0 = (undefined8 *)0x0;
          plVar20 = unaff_x23 + 9;
          FUN_1093a6e30(plVar20,0);
          if (plVar20 != (long *)0x0) {
            FUN_10941077c(&uStack_2a0,(plVar20[3] - plVar20[2] >> 2) * -0x5555555555555555);
            puVar40 = (undefined8 *)plVar20[3];
            for (puVar35 = (undefined8 *)plVar20[2]; puVar35 != puVar40;
                puVar35 = (undefined8 *)((long)puVar35 + 0xc)) {
              if (puStack_298 < puStack_290) {
                *puStack_298 = *puVar35;
                *(undefined4 *)(puStack_298 + 1) = *(undefined4 *)(puVar35 + 1);
                puVar46 = (undefined8 *)((long)puStack_298 + 0xc);
                puVar53 = uStack_2a0;
              }
              else {
                lVar48 = (long)puStack_298 - (long)uStack_2a0;
                uVar62 = (lVar48 >> 2) * -0x5555555555555555 + 1;
                if (0x1555555555555555 < uVar62) {
                  FUN_10937ed14();
                  goto LAB_109440b00;
                }
                lVar59 = (long)puStack_290 - (long)uStack_2a0 >> 2;
                uVar58 = lVar59 * 0x5555555555555556;
                if (uVar58 < uVar62 || uVar58 - uVar62 == 0) {
                  uVar58 = uVar62;
                }
                if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar59 * -0x5555555555555555)) {
                  uVar58 = 0x1555555555555555;
                }
                puVar22 = &uStack_2a0;
                FUN_10937ed28();
                puVar46 = (undefined8 *)((long)puVar22 + lVar48);
                *puVar46 = *puVar35;
                *(undefined4 *)(puVar46 + 1) = *(undefined4 *)(puVar35 + 1);
                puVar53 = (undefined8 *)((long)puVar46 + ((long)uStack_2a0 - (long)puStack_298));
                puVar34 = uStack_2a0;
                puVar52 = puVar53;
                if ((long)uStack_2a0 - (long)puStack_298 != 0) {
                  do {
                    uVar55 = *puVar34;
                    *(undefined4 *)(puVar52 + 1) = *(undefined4 *)(puVar34 + 1);
                    *puVar52 = uVar55;
                    puVar34 = (undefined8 *)((long)puVar34 + 0xc);
                    puVar52 = (undefined8 *)((long)puVar52 + 0xc);
                  } while (puVar34 != puStack_298);
                }
                puStack_290 = (undefined8 *)((long)puVar22 + uVar58 * 0xc);
                puVar46 = (undefined8 *)((long)puVar46 + 0xc);
                if (uStack_2a0 != (undefined8 *)0x0) {
                  puVar22 = uStack_2a0;
                  uStack_2a0 = puVar53;
                  puStack_298 = puVar46;
                  __ZdlPv(puVar22);
                  puVar53 = uStack_2a0;
                }
              }
              uStack_2a0 = puVar53;
              puStack_298 = puVar46;
            }
          }
          plVar20 = unaff_x23 + 9;
          func_0x0001093af084(plVar20,3);
          if (plVar20 != (long *)0x0) {
            func_0x0001056c5718(&plStack_288,plVar20[3] - plVar20[2] >> 2);
            puVar36 = (undefined4 *)plVar20[3];
            for (puVar21 = (undefined4 *)plVar20[2]; puVar21 != puVar36; puVar21 = puVar21 + 1) {
              uVar6 = *puVar21;
              if (plStack_280 < plStack_278) {
                plVar65 = (long *)((long)plStack_280 + 4);
                *(undefined4 *)plStack_280 = uVar6;
              }
              else {
                lVar48 = (long)plStack_280 - (long)plStack_288;
                uVar62 = (lVar48 >> 2) + 1;
                if (uVar62 >> 0x3e != 0) {
                  FUN_109231bc0();
                  goto LAB_109440b00;
                }
                uVar58 = (long)plStack_278 - (long)plStack_288 >> 1;
                if (uVar58 <= uVar62) {
                  uVar58 = uVar62;
                }
                if (0x7ffffffffffffffb < (ulong)((long)plStack_278 - (long)plStack_288)) {
                  uVar58 = 0x3fffffffffffffff;
                }
                pplVar23 = &plStack_288;
                func_0x000107c2ab8c();
                plVar25 = plStack_288;
                puVar66 = (undefined4 *)((long)pplVar23 + lVar48);
                plVar20 = (long *)((long)pplVar23 + uVar58 * 4);
                plVar27 = (long *)((long)puVar66 - ((long)plStack_280 - (long)plStack_288));
                plVar65 = (long *)(puVar66 + 1);
                *puVar66 = uVar6;
                _memcpy(plVar27,plVar25);
                bVar18 = plStack_288 != (long *)0x0;
                plStack_288 = plVar27;
                plStack_278 = plVar20;
                if (bVar18) {
                  plStack_280 = plVar65;
                  __ZdlPv();
                }
              }
              plStack_280 = plVar65;
            }
          }
          plVar20 = unaff_x23 + 9;
          FUN_1093a6e30(plVar20,1);
          if (plVar20 != (long *)0x0) {
            FUN_10941077c(&puStack_270,(plVar20[3] - plVar20[2] >> 2) * -0x5555555555555555);
            puVar40 = (undefined8 *)plVar20[3];
            for (puVar35 = (undefined8 *)plVar20[2]; puVar35 != puVar40;
                puVar35 = (undefined8 *)((long)puVar35 + 0xc)) {
              if (puStack_268 < puStack_260) {
                *puStack_268 = *puVar35;
                *(undefined4 *)(puStack_268 + 1) = *(undefined4 *)(puVar35 + 1);
                puVar46 = (undefined8 *)((long)puStack_268 + 0xc);
                puVar34 = puStack_270;
              }
              else {
                lVar48 = (long)puStack_268 - (long)puStack_270;
                uVar62 = (lVar48 >> 2) * -0x5555555555555555 + 1;
                if (0x1555555555555555 < uVar62) {
                  FUN_10937ed14();
                  goto LAB_109440b00;
                }
                lVar59 = (long)puStack_260 - (long)puStack_270 >> 2;
                uVar58 = lVar59 * 0x5555555555555556;
                if (uVar58 < uVar62 || uVar58 - uVar62 == 0) {
                  uVar58 = uVar62;
                }
                if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar59 * -0x5555555555555555)) {
                  uVar58 = 0x1555555555555555;
                }
                ppuVar24 = &puStack_270;
                FUN_10937ed28();
                puVar46 = (undefined8 *)((long)ppuVar24 + lVar48);
                *puVar46 = *puVar35;
                *(undefined4 *)(puVar46 + 1) = *(undefined4 *)(puVar35 + 1);
                puVar34 = (undefined8 *)((long)puVar46 + ((long)puStack_270 - (long)puStack_268));
                puVar22 = puStack_270;
                puVar53 = puVar34;
                if ((long)puStack_270 - (long)puStack_268 != 0) {
                  do {
                    uVar55 = *puVar22;
                    *(undefined4 *)(puVar53 + 1) = *(undefined4 *)(puVar22 + 1);
                    *puVar53 = uVar55;
                    puVar22 = (undefined8 *)((long)puVar22 + 0xc);
                    puVar53 = (undefined8 *)((long)puVar53 + 0xc);
                  } while (puVar22 != puStack_268);
                }
                puStack_260 = (undefined8 *)((long)ppuVar24 + uVar58 * 0xc);
                puVar46 = (undefined8 *)((long)puVar46 + 0xc);
                if (puStack_270 != (undefined8 *)0x0) {
                  puVar22 = puStack_270;
                  puStack_270 = puVar34;
                  puStack_268 = puVar46;
                  __ZdlPv(puVar22);
                  puVar34 = puStack_270;
                }
              }
              puStack_270 = puVar34;
              puStack_268 = puVar46;
            }
          }
          plVar20 = unaff_x23 + 9;
          plVar27 = (long *)0x4;
          func_0x0001093af0cc();
          plVar25 = plStack_250;
          plVar65 = plStack_258;
          if (plVar20 != (long *)0x0) {
            if ((ulong)((long)plStack_248 - (long)plStack_258) < (ulong)(plVar20[3] - plVar20[2])) {
              uVar62 = (plVar20[3] - plVar20[2]) * -0x5555555555555555;
              if (0x5555555555555555 < uVar62) {
                FUN_10944565c();
                goto LAB_109440b00;
              }
              FUN_109445670();
              plVar25 = (long *)((long)plVar25 + (uVar62 - (long)plVar65));
              plVar65 = (long *)(uVar62 + (long)plVar27 * 3);
              plVar64 = (long *)((long)plVar25 - ((long)plStack_250 - (long)plStack_258));
              plVar27 = plStack_258;
              _memcpy(plVar64);
              bVar18 = plStack_258 != (long *)0x0;
              plStack_258 = plVar64;
              plStack_250 = plVar25;
              plStack_248 = plVar65;
              if (bVar18) {
                __ZdlPv();
              }
            }
            puVar26 = (undefined2 *)plVar20[3];
            for (puVar32 = (undefined2 *)plVar20[2]; puVar32 != puVar26;
                puVar32 = (undefined2 *)((long)puVar32 + 3)) {
              if (plStack_250 < plStack_248) {
                uVar67 = *(undefined1 *)(puVar32 + 1);
                *(undefined2 *)plStack_250 = *puVar32;
                *(undefined1 *)((long)plStack_250 + 2) = uVar67;
                plVar20 = (long *)((long)plStack_250 + 3);
              }
              else {
                lVar48 = (long)plStack_250 - (long)plStack_258;
                uVar62 = lVar48 * -0x5555555555555555 + 1;
                if (0x5555555555555555 < uVar62) {
                  FUN_10944565c();
                  goto LAB_109440b00;
                }
                uVar58 = ((long)plStack_248 - (long)plStack_258) * 0x5555555555555556;
                if (uVar58 < uVar62 || uVar58 - uVar62 == 0) {
                  uVar58 = uVar62;
                }
                if (0x2aaaaaaaaaaaaaa9 <
                    (ulong)(((long)plStack_248 - (long)plStack_258) * -0x5555555555555555)) {
                  uVar58 = 0x5555555555555555;
                }
                FUN_109445670();
                puVar43 = (undefined2 *)(uVar58 + lVar48);
                plVar25 = (long *)(uVar58 + (long)plVar27 * 3);
                uVar67 = *(undefined1 *)(puVar32 + 1);
                *puVar43 = *puVar32;
                *(undefined1 *)(puVar43 + 1) = uVar67;
                plVar20 = (long *)((long)puVar43 + 3);
                plVar65 = (long *)((long)puVar43 - ((long)plStack_250 - (long)plStack_258));
                plVar27 = plStack_258;
                _memcpy(plVar65);
                bVar18 = plStack_258 != (long *)0x0;
                plStack_258 = plVar65;
                plStack_248 = plVar25;
                if (bVar18) {
                  plStack_250 = plVar20;
                  __ZdlPv();
                }
              }
              plStack_250 = plVar20;
            }
          }
          plVar20 = unaff_x23 + 9;
          func_0x0001093af084(plVar20,3);
          plVar25 = unaff_x23 + 9;
          func_0x0001093af114(plVar25,0xc);
          plVar27 = unaff_x23 + 9;
          FUN_1093a6e30(plVar27,1);
          alStack_320[0] = 0;
          alStack_320[1] = 0;
          alStack_320[2] = 0;
          if ((plVar20 != (long *)0x0) && (plVar25 != (long *)0x0)) {
            func_0x000107c31950(alStack_320,(ulong)(plVar20[3] - plVar20[2] >> 2) / 3);
            lVar48 = plVar20[2];
            unaff_x23 = plVar27;
            if (8 < (ulong)(plVar20[3] - lVar48)) {
              lVar59 = 0;
              uVar62 = 0;
              do {
                puVar2 = (uint *)(lVar48 + lVar59);
                lVar48 = plVar25[2];
                adStack_3a0[0]._0_1_ = *(char *)(lVar48 + (ulong)*puVar2);
                if (adStack_3a0[0]._0_1_ != *(char *)(lVar48 + (ulong)puVar2[1])) {
                  adStack_3a0[0]._0_1_ = *(char *)(lVar48 + (ulong)puVar2[2]);
                }
                if ((plVar27 != (long *)0x0) && (adStack_3a0[0]._0_1_ == '\x02')) {
                  lVar48 = plVar27[2];
                  puVar40 = (undefined8 *)(lVar48 + (ulong)*puVar2 * 0xc);
                  puVar35 = (undefined8 *)(lVar48 + (ulong)puVar2[1] * 0xc);
                  puVar46 = (undefined8 *)(lVar48 + (ulong)puVar2[2] * 0xc);
                  uVar55 = *puVar40;
                  uVar72 = *puVar35;
                  uVar73 = *puVar46;
                  fVar74 = (float)uVar55 + (float)uVar72 + (float)uVar73;
                  fVar16 = (float)((ulong)uVar55 >> 0x20) + (float)((ulong)uVar72 >> 0x20) +
                           (float)((ulong)uVar73 >> 0x20);
                  uVar67 = SUB41(fVar16,0);
                  uVar68 = (undefined1)((uint)fVar16 >> 8);
                  uVar69 = (undefined1)((uint)fVar16 >> 0x10);
                  uVar70 = (undefined1)((uint)fVar16 >> 0x18);
                  fVar71 = *(float *)(puVar40 + 1) + *(float *)(puVar35 + 1) +
                           *(float *)(puVar46 + 1);
                  fVar74 = fVar74 * fVar74 + fVar16 * fVar16 + fVar71 * fVar71;
                  if (0.0 < fVar74) {
                    fVar16 = fVar16 / SQRT(fVar74);
                    uVar67 = SUB41(fVar16,0);
                    uVar68 = (undefined1)((uint)fVar16 >> 8);
                    uVar69 = (undefined1)((uint)fVar16 >> 0x10);
                    uVar70 = (undefined1)((uint)fVar16 >> 0x18);
                  }
                  if ((float)CONCAT13(uVar70,CONCAT12(uVar69,CONCAT11(uVar68,uVar67))) < -0.8) {
                    adStack_3a0[0]._0_1_ = '\x01';
                  }
                }
                FUN_1093ae29c(alStack_320,adStack_3a0);
                uVar62 = uVar62 + 1;
                lVar48 = plVar20[2];
                lVar59 = lVar59 + 0xc;
              } while (uVar62 < (ulong)(plVar20[3] - lVar48 >> 2) / 3);
            }
          }
          if (lStack_240 != 0) {
            uStack_238 = lStack_240;
            __ZdlPv();
          }
          iVar28 = (int)lVar29 * 0x40000000 + (int)(short)lVar57 + sVar9 * 0x400 +
                   (uint)uVar8 * 0x100000;
          uStack_238 = alStack_320[1];
          lStack_240 = alStack_320[0];
          uStack_230 = alStack_320[2];
          puVar21 = (undefined4 *)param_1[1];
          if (puVar21 < (undefined4 *)param_1[2]) {
            func_0x00010944552c(puVar21,iVar28,&uStack_2a0);
            plVar20 = (long *)(puVar21 + 0x20);
          }
          else {
            lVar48 = (long)puVar21 - *param_1;
            uVar62 = (lVar48 >> 7) + 1;
            if (uVar62 >> 0x39 != 0) {
              FUN_1094455d4();
              goto LAB_109440b00;
            }
            uVar44 = (long)param_1[2] - *param_1;
            uVar58 = (long)uVar44 >> 6;
            if (uVar58 <= uVar62) {
              uVar58 = uVar62;
            }
            if (0x7fffffffffffff7f < uVar44) {
              uVar58 = 0x1ffffffffffffff;
            }
            if (uVar58 == 0) {
              lVar57 = 0;
            }
            else {
              if (uVar58 >> 0x39 != 0) {
                func_0x000104c4f740();
                goto LAB_109440b00;
              }
              lVar57 = uVar58 << 7;
              __Znwm();
            }
            unaff_x23 = (long *)(lVar57 + lVar48);
            func_0x00010944552c(unaff_x23,iVar28,&uStack_2a0);
            puVar66 = (undefined4 *)*param_1;
            puVar51 = (undefined4 *)((long)unaff_x23 + ((long)puVar66 - (long)puVar21));
            puVar36 = puVar66;
            puVar41 = puVar51;
            if (puVar21 != puVar66) {
              do {
                *puVar41 = *puVar36;
                *(undefined8 *)(puVar41 + 4) = 0;
                *(undefined8 *)(puVar41 + 6) = 0;
                *(undefined8 *)(puVar41 + 2) = 0;
                uVar55 = *(undefined8 *)(puVar36 + 2);
                *(undefined8 *)(puVar41 + 4) = *(undefined8 *)(puVar36 + 4);
                *(undefined8 *)(puVar41 + 2) = uVar55;
                *(undefined8 *)(puVar41 + 6) = *(undefined8 *)(puVar36 + 6);
                *(undefined8 *)(puVar36 + 2) = 0;
                *(undefined8 *)(puVar36 + 4) = 0;
                *(undefined8 *)(puVar36 + 6) = 0;
                *(undefined8 *)(puVar41 + 8) = 0;
                *(undefined8 *)(puVar41 + 10) = 0;
                *(undefined8 *)(puVar41 + 0xc) = 0;
                uVar55 = *(undefined8 *)(puVar36 + 8);
                *(undefined8 *)(puVar41 + 10) = *(undefined8 *)(puVar36 + 10);
                *(undefined8 *)(puVar41 + 8) = uVar55;
                *(undefined8 *)(puVar41 + 0xc) = *(undefined8 *)(puVar36 + 0xc);
                *(undefined8 *)(puVar36 + 8) = 0;
                *(undefined8 *)(puVar36 + 10) = 0;
                *(undefined8 *)(puVar36 + 0xc) = 0;
                *(undefined8 *)(puVar41 + 0xe) = 0;
                *(undefined8 *)(puVar41 + 0x10) = 0;
                *(undefined8 *)(puVar41 + 0x12) = 0;
                uVar55 = *(undefined8 *)(puVar36 + 0xe);
                *(undefined8 *)(puVar41 + 0x10) = *(undefined8 *)(puVar36 + 0x10);
                *(undefined8 *)(puVar41 + 0xe) = uVar55;
                *(undefined8 *)(puVar41 + 0x12) = *(undefined8 *)(puVar36 + 0x12);
                *(undefined8 *)(puVar36 + 0xe) = 0;
                *(undefined8 *)(puVar36 + 0x10) = 0;
                *(undefined8 *)(puVar36 + 0x12) = 0;
                *(undefined8 *)(puVar41 + 0x14) = 0;
                *(undefined8 *)(puVar41 + 0x16) = 0;
                *(undefined8 *)(puVar41 + 0x18) = 0;
                uVar55 = *(undefined8 *)(puVar36 + 0x14);
                *(undefined8 *)(puVar41 + 0x16) = *(undefined8 *)(puVar36 + 0x16);
                *(undefined8 *)(puVar41 + 0x14) = uVar55;
                *(undefined8 *)(puVar41 + 0x18) = *(undefined8 *)(puVar36 + 0x18);
                *(undefined8 *)(puVar36 + 0x14) = 0;
                *(undefined8 *)(puVar36 + 0x16) = 0;
                *(undefined8 *)(puVar36 + 0x18) = 0;
                *(undefined8 *)(puVar41 + 0x1a) = 0;
                *(undefined8 *)(puVar41 + 0x1c) = 0;
                *(undefined8 *)(puVar41 + 0x1e) = 0;
                uVar55 = *(undefined8 *)(puVar36 + 0x1a);
                *(undefined8 *)(puVar41 + 0x1c) = *(undefined8 *)(puVar36 + 0x1c);
                *(undefined8 *)(puVar41 + 0x1a) = uVar55;
                *(undefined8 *)(puVar41 + 0x1e) = *(undefined8 *)(puVar36 + 0x1e);
                *(undefined8 *)(puVar36 + 0x1a) = 0;
                *(undefined8 *)(puVar36 + 0x1c) = 0;
                *(undefined8 *)(puVar36 + 0x1e) = 0;
                puVar36 = puVar36 + 0x20;
                puVar41 = puVar41 + 0x20;
              } while (puVar36 != puVar21);
              do {
                FUN_1094455e8(puVar66);
                puVar66 = puVar66 + 0x20;
              } while (puVar66 != puVar21);
              puVar66 = (undefined4 *)*param_1;
            }
            plVar20 = unaff_x23 + 0x10;
            *param_1 = (ulong)puVar51;
            param_1[2] = lVar57 + uVar58 * 0x80;
            if (puVar66 != (undefined4 *)0x0) {
              __ZdlPv(puVar66);
            }
          }
          param_1[1] = (ulong)plVar20;
          if (lStack_240 != 0) {
            uStack_238 = lStack_240;
            __ZdlPv();
          }
          if (plStack_258 != (long *)0x0) {
            plStack_250 = plStack_258;
            __ZdlPv();
          }
          if (puStack_270 != (undefined8 *)0x0) {
            puStack_268 = puStack_270;
            __ZdlPv();
          }
          if (plStack_288 != (long *)0x0) {
            plStack_280 = plStack_288;
            __ZdlPv();
          }
          if (uStack_2a0 != (undefined8 *)0x0) {
            puStack_298 = uStack_2a0;
            __ZdlPv();
          }
          plVar60 = (long *)*plVar60;
        } while (plVar60 != (long *)0x0);
      }
      lVar29 = 1;
      bVar18 = false;
    } while (bVar37);
    if (plStack_428 != (long *)0x0) {
      plVar60 = plStack_428 + 1;
      do {
        lVar29 = *plVar60;
        cVar11 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar60,0x10);
        if (bVar18) {
          *plVar60 = lVar29 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar29 == 0) {
        (**(code **)(*plStack_428 + 0x10))(plStack_428);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_428);
      }
    }
    if (plStack_3f0 != (long *)0x0) {
      plVar60 = plStack_3f0 + 1;
      do {
        lVar29 = *plVar60;
        cVar11 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar60,0x10);
        if (bVar18) {
          *plVar60 = lVar29 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar29 == 0) {
        (**(code **)(*plStack_3f0 + 0x10))(plStack_3f0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_3f0);
      }
    }
    if (plStack_3b8 != (long *)0x0) {
      plVar60 = plStack_3b8 + 1;
      do {
        lVar29 = *plVar60;
        cVar11 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar60,0x10);
        if (bVar18) {
          *plVar60 = lVar29 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar29 == 0) {
        (**(code **)(*plStack_3b8 + 0x10))(plStack_3b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_3b8);
      }
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
LAB_109440aa0:
  puVar21 = (undefined4 *)0x28;
  func_0x000107c2ae8c();
  *puVar21 = 1;
  unaff_x23[0x10] = (long)(puVar21 + 1);
  unaff_x23[0x11] = 0x22;
  *(undefined1 *)((long)puVar21 + 0x26) = 0;
  *(undefined2 *)(puVar21 + 9) = 0x2928;
  *(undefined8 *)(puVar21 + 3) = 0x203d3d202928657a;
  *(undefined8 *)(puVar21 + 1) = 0x69732e6874706564;
  *(undefined8 *)(puVar21 + 7) = 0x657a69733e2d6563;
  *(undefined8 *)(puVar21 + 5) = 0x6e656469666e6f63;
  FUN_109ac3188(0xffffff29,&uStack_2a0,&UNK_10f56d5ed,&UNK_10f56d600,0x34);
LAB_109440b00:
                    /* WARNING: Does not return */
  pcVar17 = (code *)SoftwareBreakpoint(1,0x109440b04);
  (*pcVar17)();
}



/* Entry: 109440d34; end: 1094446b7;  */

/* WARNING: Type propagation algorithm not settling */

ushort * FUN_109440d34(long param_1,int *param_2,float *param_3)

{
  short *psVar1;
  uint uVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  uint uVar5;
  undefined8 *puVar6;
  ushort uVar7;
  ushort uVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  long lVar12;
  undefined1 uVar13;
  undefined1 uVar15;
  ulong uVar16;
  int *piVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  undefined8 uVar29;
  byte bVar30;
  byte bVar31;
  undefined8 uVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  long *plVar42;
  float *pfVar43;
  int *piVar44;
  undefined8 *puVar45;
  ushort *puVar46;
  ushort *puVar47;
  undefined2 uVar48;
  ushort uVar49;
  long lVar50;
  int iVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  long lVar60;
  long lVar61;
  ulong uVar62;
  long *plVar63;
  undefined4 *puVar64;
  float *pfVar65;
  undefined8 *puVar66;
  undefined2 uVar67;
  int iVar68;
  uint uVar69;
  int *piVar70;
  long lVar71;
  long *plVar72;
  undefined8 *puVar73;
  undefined4 *puVar74;
  ulong uVar75;
  float *pfVar76;
  byte bVar77;
  byte bVar78;
  int iVar79;
  int iVar80;
  ulong uVar81;
  long lVar82;
  undefined2 uVar83;
  uint uVar84;
  long lVar85;
  ulong uVar86;
  long lVar87;
  int iVar88;
  long lVar89;
  int iVar90;
  undefined8 *puVar91;
  int iVar92;
  long *plVar93;
  short *psVar94;
  int iVar95;
  int iVar96;
  int iVar97;
  float *pfVar98;
  int iVar99;
  undefined4 *puVar100;
  int iVar101;
  undefined4 *puVar102;
  float fVar103;
  float fVar104;
  uint uVar105;
  uint uVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  undefined8 uVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  undefined8 uVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  undefined8 uStack_332c;
  undefined8 uStack_3324;
  float fStack_3320;
  undefined8 uStack_331c;
  undefined4 auStack_3314 [15];
  undefined8 uStack_32d8;
  undefined8 uStack_32d0;
  undefined8 uStack_32c8;
  undefined8 uStack_32c0;
  undefined8 uStack_32b8;
  undefined8 uStack_32b0;
  float fStack_32a8;
  short sStack_32a4;
  short sStack_32a2;
  short sStack_32a0;
  short sStack_329e;
  short sStack_329c;
  short sStack_329a;
  undefined8 uStack_3298;
  undefined8 uStack_3290;
  undefined8 uStack_3288;
  undefined8 uStack_3280;
  float afStack_3278 [4];
  undefined8 uStack_3268;
  float fStack_3260;
  float fStack_325c;
  float fStack_3258;
  float fStack_3254;
  undefined8 uStack_3250;
  float fStack_3248;
  float fStack_3244;
  float fStack_3240;
  float fStack_323c;
  undefined8 uStack_3238;
  float fStack_3230;
  undefined8 uStack_322c;
  float fStack_3224;
  undefined8 uStack_3220;
  float afStack_3218 [4];
  undefined8 uStack_3208;
  float fStack_3200;
  float fStack_31fc;
  float fStack_31f8;
  float fStack_31f4;
  undefined8 uStack_31f0;
  float fStack_31e8;
  float fStack_31e4;
  float fStack_31e0;
  float fStack_31dc;
  undefined8 uStack_31d8;
  float fStack_31d0;
  undefined8 uStack_31cc;
  float fStack_31c4;
  undefined8 uStack_31c0;
  float fStack_31b8;
  short sStack_31b4;
  ushort uStack_31b2;
  byte bStack_31b0;
  byte bStack_31af;
  byte bStack_31ae;
  byte bStack_31ad;
  float fStack_31ac;
  undefined8 uStack_31a8;
  undefined1 auStack_31a0 [6];
  ushort uStack_319a;
  undefined8 uStack_3198;
  undefined8 uStack_3190;
  undefined8 uStack_3188;
  undefined8 uStack_3180;
  undefined8 uStack_3178;
  float fStack_3170;
  short sStack_316c;
  ushort uStack_316a;
  byte bStack_3168;
  byte bStack_3167;
  byte bStack_3166;
  byte bStack_3165;
  float fStack_3164;
  undefined8 uStack_3160;
  float fStack_3158;
  undefined8 uStack_3154;
  float fStack_314c;
  undefined8 uStack_3148;
  float fStack_3140;
  undefined8 uStack_313c;
  float fStack_3134;
  undefined8 uStack_3130;
  float fStack_3128;
  undefined8 uStack_3124;
  float fStack_311c;
  undefined8 uStack_3118;
  float fStack_3110;
  undefined8 uStack_310c;
  float fStack_3104;
  undefined8 uStack_3100;
  float fStack_30f8;
  undefined8 uStack_30f4;
  float fStack_30ec;
  undefined8 uStack_30e8;
  float fStack_30e0;
  undefined4 uStack_30d8;
  float fStack_30d4;
  float afStack_30d0 [5];
  float fStack_30bc;
  undefined4 uStack_30b8;
  float fStack_30b4;
  float fStack_30b0;
  undefined4 uStack_30ac;
  undefined4 uStack_2fd8;
  undefined8 uStack_2fd4;
  long lStack_2fa8;
  ushort auStack_2fa0 [2];
  short sStack_2f9c;
  undefined1 uStack_2f9b;
  undefined2 uStack_2f9a;
  undefined8 uStack_2f98;
  undefined8 uStack_2f90;
  undefined1 auStack_2f88 [8];
  float fStack_2f80;
  float afStack_2f7c [3];
  undefined8 uStack_2f70;
  float fStack_2f68;
  float fStack_2f64;
  undefined8 uStack_2f60;
  undefined1 auStack_2f58 [8];
  undefined8 uStack_2f50;
  float fStack_2f48;
  float fStack_2f44;
  undefined8 uStack_2f34;
  undefined4 uStack_2f2c;
  undefined4 uStack_2f28;
  undefined1 auStack_2f24 [4];
  float afStack_2f20 [6];
  long lStack_2f08;
  float fStack_2ef0;
  long lStack_2ee0;
  long lStack_2ed0;
  undefined4 uStack_2ebc;
  undefined1 auStack_2eb8 [4];
  undefined4 auStack_2eb4 [5];
  ulong uStack_2ea0;
  float fStack_2e88;
  long lStack_2e78;
  ulong uStack_2e68;
  undefined8 uStack_2b68;
  undefined4 uStack_2b60;
  undefined4 auStack_2b54 [22];
  undefined8 uStack_2afc;
  undefined4 uStack_2af4;
  undefined4 uStack_570;
  undefined1 uStack_56c;
  undefined1 uStack_56b;
  undefined1 uStack_56a;
  undefined1 uStack_569;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined1 auStack_560 [4];
  undefined4 auStack_55c [22];
  undefined4 uStack_504;
  undefined1 uStack_500;
  undefined1 uStack_4ff;
  undefined1 uStack_4fe;
  undefined1 uStack_4fd;
  undefined4 uStack_4fc;
  undefined4 auStack_4f0 [3];
  undefined4 auStack_4e4 [24];
  undefined4 auStack_484 [211];
  undefined4 uStack_138;
  undefined1 uStack_134;
  undefined1 uStack_133;
  undefined1 uStack_132;
  undefined1 uStack_131;
  undefined4 uStack_130;
  undefined4 auStack_124 [22];
  undefined4 uStack_cc;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [28];
  undefined1 uVar14;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  auStack_bc._4_8_ = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  iVar80 = param_2[0x1c];
  if ((((iVar80 == 0 || param_2[0x1d] == 0) ||
       (iVar80 == *(int *)(param_1 + 0x40c) && param_2[0x1d] == *(int *)(param_1 + 0x410))) &&
      (piVar70 = param_2 + 0xe,
      *piVar70 == *(int *)(param_1 + 0x37c) && param_2[0xf] == *(int *)(param_1 + 0x380))) &&
     ((*param_2 == *(int *)(param_1 + 0x2ec) && (param_2[1] == *(int *)(param_1 + 0x2f0))))) {
    lVar60 = 0;
    do {
      *(undefined8 *)((long)&stack0xffffffffffffccdc + lVar60) = 0x3f80000000000000;
      *(undefined8 *)((long)&uStack_332c + lVar60) = 0;
      *(undefined8 *)((long)auStack_3314 + lVar60 + -8) = 0;
      *(undefined4 *)((long)auStack_3314 + lVar60) = 0;
      lVar60 = lVar60 + 0x1c;
    } while (lVar60 != 0x54);
    lVar60 = 0;
    do {
      FUN_1093e190c(auStack_2fa0,(long)param_3 + lVar60);
      uVar118 = CONCAT26(uStack_2f9a,CONCAT24(sStack_2f9c,CONCAT22(auStack_2fa0[1],auStack_2fa0[0]))
                        );
      *(ulong *)((long)&stack0xffffffffffffccdc + lVar60) =
           CONCAT44(uStack_2f98._4_4_,(float)uStack_2f98);
      *(undefined8 *)((long)&uStack_332c + lVar60) = uVar118;
      *(ulong *)((long)auStack_3314 + lVar60 + -8) = CONCAT44(uStack_2f90._4_4_,(float)uStack_2f90);
      *(undefined4 *)((long)auStack_3314 + lVar60) = auStack_2f88._0_4_;
      lVar60 = lVar60 + 0x1c;
    } while (lVar60 != 0x54);
    lVar60 = 0;
    do {
      lVar85 = param_1 + lVar60;
      if (*(long *)(lVar85 + 0xf0) != 0) {
        plVar42 = *(long **)(lVar85 + 0xe8);
        while (plVar42 != (long *)0x0) {
          plVar42 = (long *)*plVar42;
          __ZdlPv();
        }
        *(undefined8 *)(lVar85 + 0xe8) = 0;
        lVar61 = *(long *)(lVar85 + 0xe0);
        if (lVar61 != 0) {
          lVar71 = 0;
          do {
            *(undefined8 *)(*(long *)(lVar85 + 0xd8) + lVar71 * 8) = 0;
            lVar71 = lVar71 + 1;
          } while (lVar61 != lVar71);
        }
        *(undefined8 *)(lVar85 + 0xf0) = 0;
      }
      func_0x0001093a8858(lVar85 + 0x100);
      lVar60 = lVar60 + 0x148;
    } while (lVar60 != 0x290);
    bVar77 = *(byte *)(param_1 + 0x2e0);
    iVar80 = *(int *)(param_1 + 0x2c4);
    if (*param_2 <= *(int *)(param_1 + 0x2c4)) {
      iVar80 = *param_2;
    }
    uVar52 = *(uint *)(param_1 + 0x2c0) & ((int)*(uint *)(param_1 + 0x2c0) >> 0x1f ^ 0xffffffffU);
    iVar88 = *(int *)(param_1 + 0x2c8);
    if (param_2[1] <= *(int *)(param_1 + 0x2c8)) {
      iVar88 = param_2[1];
    }
    if ((int)uVar52 < iVar88) {
      iVar90 = *(int *)(param_1 + 0x2b0);
      fVar119 = *(float *)(param_1 + 0x290);
      fVar121 = *(float *)(param_1 + 0x2a0);
      uVar69 = *(uint *)(param_1 + 700) & ((int)*(uint *)(param_1 + 700) >> 0x1f ^ 0xffffffffU);
      do {
        if ((int)uVar69 < iVar80) {
          uVar62 = (ulong)uVar69;
          do {
            fVar103 = (float)NEON_ucvtf((uint)*(ushort *)
                                               (*(long *)(param_2 + 4) +
                                               (uVar62 + (long)param_2[2] * (long)(int)uVar52) * 2))
            ;
            fVar103 = fVar103 * 0.001;
            bVar37 = false;
            bVar38 = false;
            bVar41 = false;
            if (fVar119 < fVar103) {
              bVar37 = false;
              bVar38 = false;
              bVar41 = true;
              if (!NAN(fVar103) && !NAN(fVar121)) {
                bVar37 = fVar103 < fVar121;
                bVar38 = fVar103 == fVar121;
                bVar41 = false;
              }
            }
            if (bVar38 || bVar37 != bVar41) {
              if (fVar103 <= *(float *)(param_1 + 0x294)) {
                lVar60 = 0;
LAB_109440fc0:
                lVar60 = param_1 + lVar60 * 0x148;
              }
              else {
                lVar60 = param_1;
                if (fVar103 <= *(float *)(param_1 + 0x2a0)) {
                  lVar60 = 1;
                  goto LAB_109440fc0;
                }
              }
              fVar122 = *(float *)(lVar60 + 4);
              fVar123 = (float)*(undefined8 *)(param_1 + 0x2fc) *
                        (((float)(int)uVar62 + 0.5) - (float)*(undefined8 *)(param_1 + 0x304));
              fVar124 = (float)((ulong)*(undefined8 *)(param_1 + 0x2fc) >> 0x20) *
                        (((float)(int)uVar52 + 0.5) -
                        (float)((ulong)*(undefined8 *)(param_1 + 0x304) >> 0x20));
              fVar104 = fVar123 * fVar103;
              fVar107 = fVar124 * fVar103;
              fVar108 = param_3[2];
              fVar109 = param_3[3];
              fVar113 = *param_3;
              fVar112 = param_3[1];
              fVar111 = -fVar108 * fVar107 + fVar103 * fVar112;
              fVar115 = -(fVar113 * fVar103) + fVar104 * fVar108;
              fVar126 = -fVar112 * fVar104 + fVar113 * fVar107;
              fVar111 = fVar111 + fVar111;
              fVar115 = fVar115 + fVar115;
              fVar126 = fVar126 + fVar126;
              fVar110 = *(float *)(lVar60 + 0x24);
              iVar95 = (int)(((float)*(undefined8 *)(param_3 + 4) +
                             fVar104 + fVar111 * fVar109 + -fVar108 * fVar115 + fVar126 * fVar112) *
                            fVar110);
              auStack_2fa0[0] = (ushort)iVar95;
              iVar99 = (int)(((float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20) +
                             fVar107 + fVar115 * fVar109 + -(fVar113 * fVar126) + fVar111 * fVar108)
                            * fVar110);
              auStack_2fa0[1] = (ushort)iVar99;
              iVar101 = (int)(fVar110 *
                             (param_3[6] +
                             fVar103 + fVar109 * fVar126 + -fVar112 * fVar111 + fVar113 * fVar115));
              sStack_2f9c = (short)iVar101;
              lVar85 = lVar60 + 0xd8;
              FUN_109448378(lVar85,auStack_2fa0,auStack_2fa0);
              *(int *)(lVar85 + 0x18) = *(int *)(lVar85 + 0x18) + 1;
              if ((bVar77 & 1) == 0) {
                fVar115 = fVar103 - fVar122;
                fVar113 = fVar123 * fVar115;
                fVar126 = fVar124 * fVar115;
                fVar104 = param_3[2];
                fVar107 = param_3[3];
                fVar110 = -fVar104;
                fVar108 = *param_3;
                fVar109 = param_3[1];
                fVar127 = fVar110 * fVar126 + fVar115 * fVar109;
                fVar130 = -(fVar108 * fVar115) + fVar113 * fVar104;
                fVar111 = -fVar109;
                fVar131 = fVar111 * fVar113 + fVar108 * fVar126;
                fVar127 = fVar127 + fVar127;
                fVar130 = fVar130 + fVar130;
                fVar131 = fVar131 + fVar131;
                uVar118 = *(undefined8 *)(param_3 + 4);
                fVar128 = param_3[6];
                fVar112 = *(float *)(lVar60 + 0x24);
                iVar51 = (int)(((float)uVar118 +
                               fVar113 + fVar127 * fVar107 + fVar110 * fVar130 + fVar131 * fVar109)
                              * fVar112);
                iVar68 = (int)(((float)((ulong)uVar118 >> 0x20) +
                               fVar126 + fVar130 * fVar107 +
                               -(fVar108 * fVar131) + fVar127 * fVar104) * fVar112);
                uStack_30d8 = (float)CONCAT22((short)iVar68,(short)iVar51);
                iVar79 = (int)(fVar112 *
                              (fVar128 +
                              fVar115 + fVar107 * fVar131 + fVar111 * fVar127 + fVar108 * fVar130));
                fStack_30d4 = (float)CONCAT22(fStack_30d4._2_2_,(short)iVar79);
                if ((iVar95 != iVar51 || iVar99 != iVar68) || iVar101 != iVar79) {
                  lVar85 = lVar60 + 0xd8;
                  FUN_109448378(lVar85,&uStack_30d8,&uStack_30d8);
                  *(int *)(lVar85 + 0x18) = *(int *)(lVar85 + 0x18) + 1;
                  fVar108 = *param_3;
                  fVar109 = param_3[1];
                  fVar104 = param_3[2];
                  fVar107 = param_3[3];
                  uVar118 = *(undefined8 *)(param_3 + 4);
                  fVar128 = param_3[6];
                  fVar112 = *(float *)(lVar60 + 0x24);
                  fVar110 = -fVar104;
                  fVar111 = -fVar109;
                }
                uVar114 = uStack_31c0;
                fVar103 = fVar103 + fVar122;
                fVar123 = fVar123 * fVar103;
                fVar124 = fVar124 * fVar103;
                fVar115 = fVar110 * fVar124 + fVar103 * fVar109;
                fVar113 = fVar103 * -fVar108 + fVar123 * fVar104;
                fVar122 = fVar111 * fVar123 + fVar108 * fVar124;
                fVar115 = fVar115 + fVar115;
                fVar113 = fVar113 + fVar113;
                fVar122 = fVar122 + fVar122;
                iVar51 = (int)(fVar112 *
                              ((float)uVar118 +
                              fVar123 + fVar107 * fVar115 + fVar110 * fVar113 + fVar122 * fVar109));
                iVar68 = (int)(fVar112 *
                              ((float)((ulong)uVar118 >> 0x20) +
                              fVar124 + fVar107 * fVar113 + -fVar108 * fVar122 + fVar115 * fVar104))
                ;
                uStack_31c0._0_4_ = CONCAT22((short)iVar68,(short)iVar51);
                iVar79 = (int)(fVar112 *
                              (fVar128 +
                              fVar103 + fVar107 * fVar122 + fVar111 * fVar115 + fVar108 * fVar113));
                uStack_31c0._6_2_ = SUB82(uVar114,6);
                uStack_31c0._0_6_ = CONCAT24((short)iVar79,(int)uStack_31c0);
                if ((iVar95 != iVar51 || iVar99 != iVar68) || iVar101 != iVar79) {
                  lVar60 = lVar60 + 0xd8;
                  FUN_109448378(lVar60,&uStack_31c0,&uStack_31c0);
                  *(int *)(lVar60 + 0x18) = *(int *)(lVar60 + 0x18) + 1;
                }
              }
            }
            uVar62 = uVar62 + (long)iVar90;
          } while ((int)uVar62 < iVar80);
        }
        uVar52 = uVar52 + iVar90;
      } while ((int)uVar52 < iVar88);
    }
    if (bVar77 != 0) {
      lVar60 = 0;
      bVar37 = true;
      do {
        bVar38 = bVar37;
        lVar60 = param_1 + lVar60 * 0x148;
        auStack_2f88 = (undefined1  [8])0x0;
        uStack_2f90._0_4_ = 0.0;
        uStack_2f90._4_4_ = 0.0;
        uStack_2f98._0_4_ = 0.0;
        uStack_2f98._4_4_ = 0.0;
        auStack_2fa0[0] = 0;
        auStack_2fa0[1] = 0;
        sStack_2f9c = 0;
        uStack_2f9a = 0;
        fStack_2f80 = 1.0;
        FUN_1094485cc(auStack_2fa0,(long)(float)(ulong)(*(long *)(lVar60 + 0xf0) << 2));
        plVar42 = (long *)(lVar60 + 0xe8);
        plVar72 = (long *)*plVar42;
        if (plVar72 == (long *)0x0) {
          lVar85 = 0;
        }
        else {
          do {
            uVar49 = *(ushort *)(plVar72 + 2);
            uVar7 = *(ushort *)((long)plVar72 + 0x12);
            uVar8 = *(ushort *)((long)plVar72 + 0x14);
            iVar80 = -1;
            lVar85 = plVar72[3];
            do {
              sVar11 = (short)((uint)uVar49 + iVar80);
              iVar88 = -1;
              puVar64 = (undefined4 *)CONCAT44(uStack_2f98._4_4_,(float)uStack_2f98);
              do {
                uVar52 = (uint)uVar7 + iVar88;
                sVar9 = (short)uVar52;
                iVar90 = -1;
                do {
                  puVar102 = &uStack_2fd8;
                  uVar69 = (uint)uVar8 + iVar90;
                  sVar10 = (short)uVar69;
                  puVar100 = (undefined4 *)
                             ((long)(int)sVar11 * 0x466f45d + (long)(int)sVar9 * 0x12740a5 +
                             (long)(int)sVar10 * 0x4f9ffb7);
                  if (puVar64 != (undefined4 *)0x0) {
                    uVar62 = (long)puVar64 - 1;
                    if (((ulong)puVar64 & uVar62) == 0) {
                      puVar102 = (undefined4 *)((ulong)puVar100 & uVar62);
                    }
                    else {
                      puVar102 = puVar100;
                      if (puVar64 <= puVar100) {
                        uVar75 = 0;
                        if (puVar64 != (undefined4 *)0x0) {
                          uVar75 = (ulong)puVar100 / (ulong)puVar64;
                        }
                        puVar102 = (undefined4 *)((long)puVar100 - uVar75 * (long)puVar64);
                      }
                    }
                    puVar73 = *(undefined8 **)
                               (CONCAT26(uStack_2f9a,
                                         CONCAT24(sStack_2f9c,
                                                  CONCAT22(auStack_2fa0[1],auStack_2fa0[0]))) +
                               (long)puVar102 * 8);
                    if (puVar73 != (undefined8 *)0x0) {
                      for (plVar93 = (long *)*puVar73; plVar93 != (long *)0x0;
                          plVar93 = (long *)*plVar93) {
                        puVar74 = (undefined4 *)plVar93[1];
                        if (puVar74 == puVar100) {
                          if ((((uint)*(ushort *)(plVar93 + 2) == ((uint)uVar49 + iVar80 & 0xffff))
                              && ((uint)*(ushort *)((long)plVar93 + 0x12) == (uVar52 & 0xffff))) &&
                             ((uint)*(ushort *)((long)plVar93 + 0x14) == (uVar69 & 0xffff)))
                          goto LAB_10944155c;
                        }
                        else {
                          if (((ulong)puVar64 & uVar62) == 0) {
                            puVar74 = (undefined4 *)((ulong)puVar74 & uVar62);
                          }
                          else if (puVar64 <= puVar74) {
                            uVar75 = 0;
                            if (puVar64 != (undefined4 *)0x0) {
                              uVar75 = (ulong)puVar74 / (ulong)puVar64;
                            }
                            puVar74 = (undefined4 *)((long)puVar74 - uVar75 * (long)puVar64);
                          }
                          if (puVar74 != puVar102) break;
                        }
                      }
                    }
                  }
                  plVar93 = (long *)0x20;
                  __Znwm();
                  *plVar93 = 0;
                  plVar93[1] = (long)puVar100;
                  *(short *)(plVar93 + 2) = sVar11;
                  *(short *)((long)plVar93 + 0x12) = sVar9;
                  *(short *)((long)plVar93 + 0x14) = sVar10;
                  *(undefined4 *)(plVar93 + 3) = 0;
                  if ((puVar64 == (undefined4 *)0x0) ||
                     (fStack_2f80 * (float)puVar64 < (float)((long)auStack_2f88 + 1))) {
                    uVar62 = 1;
                    if ((undefined4 *)0x2 < puVar64) {
                      uVar62 = (ulong)(((ulong)puVar64 & (long)puVar64 - 1U) != 0);
                    }
                    uVar62 = uVar62 | (long)puVar64 << 1;
                    uVar75 = (ulong)((float)((long)auStack_2f88 + 1) / fStack_2f80);
                    if (uVar62 <= uVar75) {
                      uVar62 = uVar75;
                    }
                    FUN_1094485cc(auStack_2fa0,uVar62);
                    puVar64 = (undefined4 *)CONCAT44(uStack_2f98._4_4_,(float)uStack_2f98);
                    if (((ulong)puVar64 & (long)puVar64 - 1U) == 0) {
                      puVar102 = (undefined4 *)((long)puVar64 - 1U & (ulong)puVar100);
                    }
                    else {
                      puVar102 = puVar100;
                      if (puVar64 <= puVar100) {
                        uVar62 = 0;
                        if (puVar64 != (undefined4 *)0x0) {
                          uVar62 = (ulong)puVar100 / (ulong)puVar64;
                        }
                        puVar102 = (undefined4 *)((long)puVar100 - uVar62 * (long)puVar64);
                      }
                    }
                  }
                  lVar61 = CONCAT26(uStack_2f9a,
                                    CONCAT24(sStack_2f9c,CONCAT22(auStack_2fa0[1],auStack_2fa0[0])))
                  ;
                  plVar63 = *(long **)(lVar61 + (long)puVar102 * 8);
                  if (plVar63 == (long *)0x0) {
                    *plVar93 = CONCAT44(uStack_2f90._4_4_,(float)uStack_2f90);
                    uStack_2f90._0_4_ = SUB84(plVar93,0);
                    uStack_2f90._4_4_ = (float)((ulong)plVar93 >> 0x20);
                    *(undefined8 **)(lVar61 + (long)puVar102 * 8) = &uStack_2f90;
                    if (*plVar93 != 0) {
                      puVar102 = *(undefined4 **)(*plVar93 + 8);
                      if (((ulong)puVar64 & (long)puVar64 - 1U) == 0) {
                        puVar102 = (undefined4 *)((ulong)puVar102 & (long)puVar64 - 1U);
                      }
                      else if (puVar64 <= puVar102) {
                        uVar62 = 0;
                        if (puVar64 != (undefined4 *)0x0) {
                          uVar62 = (ulong)puVar102 / (ulong)puVar64;
                        }
                        puVar102 = (undefined4 *)((long)puVar102 - uVar62 * (long)puVar64);
                      }
                      plVar63 = (long *)(CONCAT26(uStack_2f9a,
                                                  CONCAT24(sStack_2f9c,
                                                           CONCAT22(auStack_2fa0[1],auStack_2fa0[0])
                                                          )) + (long)puVar102 * 8);
                      goto LAB_10944154c;
                    }
                  }
                  else {
                    *plVar93 = *plVar63;
LAB_10944154c:
                    *plVar63 = (long)plVar93;
                  }
                  auStack_2f88 = (undefined1  [8])((long)auStack_2f88 + 1);
LAB_10944155c:
                  *(int *)(plVar93 + 3) = (int)plVar93[3] + (int)lVar85;
                  iVar90 = iVar90 + 1;
                } while (iVar90 != 2);
                iVar88 = iVar88 + 1;
              } while (iVar88 != 2);
              iVar80 = iVar80 + 1;
            } while (iVar80 != 2);
            plVar72 = (long *)*plVar72;
          } while (plVar72 != (long *)0x0);
          lVar85 = *plVar42;
        }
        lVar61 = *(long *)(lVar60 + 0xd8);
        uVar62 = *(ulong *)(lVar60 + 0xe0);
        lVar71 = CONCAT26(uStack_2f9a,
                          CONCAT24(sStack_2f9c,CONCAT22(auStack_2fa0[1],auStack_2fa0[0])));
        uVar75 = CONCAT44(uStack_2f98._4_4_,(float)uStack_2f98);
        *(long *)(lVar60 + 0xd8) = lVar71;
        *(ulong *)(lVar60 + 0xe0) = uVar75;
        auStack_2fa0[0] = (ushort)lVar61;
        auStack_2fa0[1] = (ushort)((ulong)lVar61 >> 0x10);
        sStack_2f9c = (short)((ulong)lVar61 >> 0x20);
        uStack_2f9a = (undefined2)((ulong)lVar61 >> 0x30);
        uStack_2f98._0_4_ = (float)uVar62;
        uStack_2f98._4_4_ = (float)(uVar62 >> 0x20);
        uVar81 = *(ulong *)(lVar60 + 0xf0);
        lVar50 = CONCAT44(uStack_2f90._4_4_,(float)uStack_2f90);
        *(long *)(lVar60 + 0xe8) = lVar50;
        *(undefined1 (*) [8])(lVar60 + 0xf0) = auStack_2f88;
        uStack_2f90._0_4_ = (float)lVar85;
        uStack_2f90._4_4_ = (float)((ulong)lVar85 >> 0x20);
        fVar119 = *(float *)(lVar60 + 0xf8);
        *(float *)(lVar60 + 0xf8) = fStack_2f80;
        if (auStack_2f88 != (undefined1  [8])0x0) {
          uVar86 = *(ulong *)(lVar50 + 8);
          if ((uVar75 & uVar75 - 1) == 0) {
            uVar86 = uVar86 & uVar75 - 1;
          }
          else if (uVar75 <= uVar86) {
            uVar16 = 0;
            if (uVar75 != 0) {
              uVar16 = uVar86 / uVar75;
            }
            uVar86 = uVar86 - uVar16 * uVar75;
          }
          *(long **)(lVar71 + uVar86 * 8) = plVar42;
        }
        if (uVar81 != 0) {
          uVar75 = *(ulong *)(lVar85 + 8);
          if ((uVar62 & uVar62 - 1) == 0) {
            uVar75 = uVar75 & uVar62 - 1;
          }
          else if (uVar62 <= uVar75) {
            uVar86 = 0;
            if (uVar62 != 0) {
              uVar86 = uVar75 / uVar62;
            }
            uVar75 = uVar75 - uVar86 * uVar62;
          }
          *(undefined8 **)(lVar61 + uVar75 * 8) = &uStack_2f90;
        }
        auStack_2f88 = (undefined1  [8])uVar81;
        fStack_2f80 = fVar119;
        func_0x000109447d64(auStack_2fa0);
        lVar60 = 1;
        bVar37 = false;
      } while (bVar38);
    }
    lVar60 = 1;
    do {
      _snprintf(auStack_2fa0,0x100,&UNK_10f56d90e);
      lVar85 = param_1 + lVar60 * 0x148;
      plVar42 = *(long **)(lVar85 + 0xe8);
      if (plVar42 != (long *)0x0) {
        do {
          if (*(uint *)(param_1 + 0x298 + lVar60 * 0xc) <= *(uint *)(plVar42 + 3)) {
            FUN_1093a8ac8(lVar85 + 0x100,plVar42 + 2,plVar42 + 2);
            uStack_30d8 = *(float *)(plVar42 + 2);
            sVar11 = *(short *)((long)plVar42 + 0x14);
            fStack_30d4 = (float)CONCAT22(fStack_30d4._2_2_,sVar11);
            if (lVar60 == 0) {
              if ((short)uStack_30d8 < 0) {
                uVar67 = (undefined2)(((short)uStack_30d8 + -1) / 2);
              }
              else {
                uVar67 = (undefined2)((ulong)(long)(short)uStack_30d8 >> 1);
              }
              uStack_30d8._2_2_ = (short)((uint)uStack_30d8 >> 0x10);
              if (uStack_30d8._2_2_ < 0) {
                uVar83 = (undefined2)((uStack_30d8._2_2_ + -1) / 2);
              }
              else {
                uVar83 = (undefined2)((ulong)(long)uStack_30d8._2_2_ >> 1);
              }
              if (sVar11 < 0) {
                uVar48 = (undefined2)((sVar11 + -1) / 2);
              }
              else {
                uVar48 = (undefined2)((ulong)(long)sVar11 >> 1);
              }
              uStack_30d8 = (float)CONCAT22(uVar83,uVar67);
              fStack_30d4 = (float)CONCAT22(fStack_30d4._2_2_,uVar48);
              FUN_1093a8ac8(param_1 + 0x248,&uStack_30d8,&uStack_30d8);
            }
          }
          plVar42 = (long *)*plVar42;
        } while (plVar42 != (long *)0x0);
      }
      bVar37 = lVar60 != 0;
      lVar60 = lVar60 + -1;
    } while (bVar37);
    uVar118 = NEON_fmov(0xbf800000,4);
    fVar119 = (float)uVar118;
    fVar121 = (float)((ulong)uVar118 >> 0x20);
    if ((*(byte *)(param_1 + 0x2d0) & 1) != 0) {
      fStack_31b8 = (float)uStack_3324;
      sStack_31b4 = (short)((ulong)uStack_3324 >> 0x20);
      uStack_31b2 = (ushort)((ulong)uStack_3324 >> 0x30);
      uStack_31c0 = uStack_332c;
      bStack_31b0 = (byte)uStack_331c;
      bStack_31af = (byte)((ulong)uStack_331c >> 8);
      bStack_31ae = (byte)((ulong)uStack_331c >> 0x10);
      bStack_31ad = (byte)((ulong)uStack_331c >> 0x18);
      fStack_31ac = (float)((ulong)uStack_331c >> 0x20);
      uStack_31a8 = CONCAT44(uStack_31a8._4_4_,auStack_3314[0]);
      FUN_1093e190c(&uStack_3220,&uStack_31c0);
      fVar103 = *(float *)(param_1 + 0x2a8);
      piVar44 = (int *)(param_1 + 0x498);
      iVar80 = *(int *)(param_1 + 0x2d4);
      iVar88 = 0;
      if (iVar80 != 0) {
        iVar88 = *param_2 / iVar80;
      }
      iVar90 = 0;
      if (iVar80 != 0) {
        iVar90 = param_2[1] / iVar80;
      }
      auStack_2fa0[0] = (ushort)iVar88;
      auStack_2fa0[1] = (ushort)((uint)iVar88 >> 0x10);
      sStack_2f9c = (short)iVar90;
      uStack_2f9a = (undefined2)((uint)iVar90 >> 0x10);
      FUN_109444888(piVar44,auStack_2fa0,0);
      uVar52 = (uint)(fVar103 * 1000.0);
      iVar80 = *(int *)(param_1 + 0x2d4);
      if (iVar80 < 4) {
        if (iVar80 == 1) {
          uVar114 = *(undefined8 *)(param_2 + 2);
          uVar118 = *(undefined8 *)param_2;
          *(undefined8 *)(param_1 + 0x4a8) = *(undefined8 *)(param_2 + 4);
          *(undefined8 *)(param_1 + 0x4a0) = uVar114;
          *(undefined8 *)piVar44 = uVar118;
          FUN_109448e7c(param_1 + 0x4b0,param_2 + 6);
          iVar80 = param_2[0xc];
          *(undefined8 *)(param_1 + 0x4c0) = *(undefined8 *)(param_2 + 10);
          *(int *)(param_1 + 0x4c8) = iVar80;
        }
        else {
          if (iVar80 != 2) {
LAB_1094445e8:
            auStack_2fa0[0] = 0;
            auStack_2fa0[1] = 0;
            sStack_2f9c = 0;
            uStack_2f9a = 0;
            fStack_2f48 = 0.0;
            fStack_2f44 = 0.0;
            auStack_2f88 = (undefined1  [8])0x0;
            uStack_2f90._0_4_ = 0.0;
            uStack_2f90._4_4_ = 0.0;
            afStack_2f7c[1] = 0.0;
            afStack_2f7c[2] = 0.0;
            fStack_2f80 = 0.0;
            afStack_2f7c[0] = 0.0;
            fStack_2f68 = 0.0;
            fStack_2f64 = 0.0;
            uStack_2f70 = 0;
            auStack_2f58 = (undefined1  [8])0x0;
            uStack_2f60._0_4_ = 0.0;
            uStack_2f60._4_4_ = 0.0;
            uStack_2f50._0_4_ = 0.0;
            FUN_1099a9f0c(auStack_2fa0,&UNK_10f56d808,0x11b,1,FUN_1099aa768,0);
            FUN_1092b4db8(CONCAT44(uStack_2f98._4_4_,(float)uStack_2f98) + 0x7540,&UNK_10f56d8f3,
                          0x1a);
            goto LAB_109441984;
          }
          iVar80 = *piVar44;
          if (iVar80 * 2 <= *param_2) {
            uVar69 = *(uint *)(param_1 + 0x49c);
            if ((0 < (int)uVar69) && ((int)(uVar69 * 2) <= param_2[1])) {
              uVar62 = 0;
              iVar88 = param_2[2];
              lVar60 = *(long *)(param_2 + 4);
              lVar85 = *(long *)(param_1 + 0x4a8);
              iVar90 = *(int *)(param_1 + 0x4a0);
              do {
                if (0 < iVar80) {
                  iVar95 = 0;
                  lVar61 = lVar60 + (long)(iVar88 * 2 * (int)uVar62) * 2;
                  puVar47 = (ushort *)(lVar85 + uVar62 * (long)iVar90 * 2);
                  do {
                    uVar49 = 0xffff;
                    lVar71 = lVar61;
                    bVar37 = true;
                    do {
                      bVar38 = bVar37;
                      lVar50 = 0;
                      bVar37 = true;
                      do {
                        bVar41 = bVar37;
                        uVar8 = *(ushort *)(lVar71 + lVar50 * 2);
                        uVar7 = uVar8;
                        if (uVar49 <= uVar8) {
                          uVar7 = uVar49;
                        }
                        if (uVar52 <= uVar8) {
                          uVar49 = uVar7;
                        }
                        lVar50 = 1;
                        bVar37 = false;
                      } while (bVar41);
                      lVar71 = lVar71 + (long)iVar88 * 2;
                      bVar37 = false;
                    } while (bVar38);
                    uVar7 = 0;
                    if (uVar49 != 0xffff) {
                      uVar7 = uVar49;
                    }
                    *puVar47 = uVar7;
                    iVar95 = iVar95 + 1;
                    lVar61 = lVar61 + 4;
                    puVar47 = puVar47 + 1;
                  } while (iVar95 != iVar80);
                }
                uVar62 = uVar62 + 1;
              } while (uVar62 != uVar69);
            }
          }
        }
      }
      else if (iVar80 == 4) {
        iVar80 = *piVar44;
        if (iVar80 * 4 <= *param_2) {
          uVar69 = *(uint *)(param_1 + 0x49c);
          if ((0 < (int)uVar69) && ((int)(uVar69 * 4) <= param_2[1])) {
            uVar62 = 0;
            iVar88 = param_2[2];
            lVar60 = *(long *)(param_2 + 4);
            lVar85 = *(long *)(param_1 + 0x4a8);
            iVar90 = *(int *)(param_1 + 0x4a0);
            do {
              if (0 < iVar80) {
                iVar95 = 0;
                lVar61 = lVar60 + (long)(iVar88 * 4 * (int)uVar62) * 2;
                puVar47 = (ushort *)(lVar85 + uVar62 * (long)iVar90 * 2);
                do {
                  iVar99 = 0;
                  uVar49 = 0xffff;
                  lVar71 = lVar61;
                  do {
                    lVar50 = 0;
                    do {
                      uVar8 = *(ushort *)(lVar71 + lVar50);
                      uVar7 = uVar8;
                      if (uVar49 <= uVar8) {
                        uVar7 = uVar49;
                      }
                      if (uVar52 <= uVar8) {
                        uVar49 = uVar7;
                      }
                      lVar50 = lVar50 + 2;
                    } while (lVar50 != 8);
                    iVar99 = iVar99 + 1;
                    lVar71 = lVar71 + (long)iVar88 * 2;
                  } while (iVar99 != 4);
                  uVar7 = 0;
                  if (uVar49 != 0xffff) {
                    uVar7 = uVar49;
                  }
                  *puVar47 = uVar7;
                  iVar95 = iVar95 + 1;
                  lVar61 = lVar61 + 8;
                  puVar47 = puVar47 + 1;
                } while (iVar95 != iVar80);
              }
              uVar62 = uVar62 + 1;
            } while (uVar62 != uVar69);
          }
        }
      }
      else {
        if (iVar80 != 8) goto LAB_1094445e8;
        iVar80 = *piVar44;
        if (iVar80 * 8 <= *param_2) {
          uVar69 = *(uint *)(param_1 + 0x49c);
          if ((0 < (int)uVar69) && ((int)(uVar69 * 8) <= param_2[1])) {
            uVar62 = 0;
            iVar88 = param_2[2];
            lVar60 = *(long *)(param_2 + 4);
            lVar85 = *(long *)(param_1 + 0x4a8);
            iVar90 = *(int *)(param_1 + 0x4a0);
            do {
              if (0 < iVar80) {
                iVar95 = 0;
                lVar61 = lVar60 + (long)(iVar88 * 8 * (int)uVar62) * 2;
                puVar47 = (ushort *)(lVar85 + uVar62 * (long)iVar90 * 2);
                do {
                  iVar99 = 0;
                  uVar49 = 0xffff;
                  lVar71 = lVar61;
                  do {
                    lVar50 = 0;
                    do {
                      uVar8 = *(ushort *)(lVar71 + lVar50);
                      uVar7 = uVar8;
                      if (uVar49 <= uVar8) {
                        uVar7 = uVar49;
                      }
                      if (uVar52 <= uVar8) {
                        uVar49 = uVar7;
                      }
                      lVar50 = lVar50 + 2;
                    } while (lVar50 != 0x10);
                    iVar99 = iVar99 + 1;
                    lVar71 = lVar71 + (long)iVar88 * 2;
                  } while (iVar99 != 8);
                  uVar7 = 0;
                  if (uVar49 != 0xffff) {
                    uVar7 = uVar49;
                  }
                  *puVar47 = uVar7;
                  iVar95 = iVar95 + 1;
                  lVar61 = lVar61 + 0x10;
                  puVar47 = puVar47 + 1;
                } while (iVar95 != iVar80);
              }
              uVar62 = uVar62 + 1;
            } while (uVar62 != uVar69);
          }
        }
      }
      lVar60 = 0;
      uStack_2f98._0_4_ = 0.0;
      uStack_2f98._4_4_ = 1.0;
      auStack_2fa0[0] = 0;
      auStack_2fa0[1] = 0;
      sStack_2f9c = 0;
      uStack_2f9a = 0;
      uStack_2f90._0_4_ = 0.0;
      uStack_2f90._4_4_ = 0.0;
      auStack_2f88 = (undefined1  [8])((ulong)auStack_2f88 & 0xffffffff00000000);
      fVar103 = *(float *)(param_1 + 0x2a8);
      fVar104 = *(float *)(param_1 + 0x2ac);
      uVar118 = *(undefined8 *)(param_1 + 0x2e4);
      uStack_30d8 = *(float *)(param_1 + 0x2fc) * (0.0 - *(float *)(param_1 + 0x304));
      fStack_30d4 = *(float *)(param_1 + 0x300) * (0.0 - *(float *)(param_1 + 0x308));
      afStack_30d0[0] = 1.0;
      afStack_30d0[1] =
           *(float *)(param_1 + 0x2fc) * (((float)uVar118 + fVar119) - *(float *)(param_1 + 0x304));
      afStack_30d0[2] = fStack_30d4;
      afStack_30d0[3] = 1.0;
      fStack_30bc = *(float *)(param_1 + 0x300) *
                    (((float)((ulong)uVar118 >> 0x20) + fVar121) - *(float *)(param_1 + 0x308));
      afStack_30d0[4] = afStack_30d0[1];
      uStack_30b8 = 0x3f800000;
      fStack_30b4 = uStack_30d8;
      fStack_30b0 = fStack_30bc;
      uStack_30ac = 0x3f800000;
      do {
        fVar109 = *(float *)((long)afStack_30d0 + lVar60);
        fVar107 = (float)*(undefined8 *)((long)&uStack_30d8 + lVar60);
        fVar108 = (float)((ulong)*(undefined8 *)((long)&uStack_30d8 + lVar60) >> 0x20);
        *(ulong *)(auStack_2f88 + lVar60 + 4) = CONCAT44(fVar108 * fVar103,fVar107 * fVar103);
        *(float *)((long)afStack_2f7c + lVar60) = fVar103 * fVar109;
        *(ulong *)(auStack_2f58 + lVar60 + 4) = CONCAT44(fVar108 * fVar104,fVar107 * fVar104);
        *(float *)((long)&uStack_2f50 + lVar60 + 4) = fVar104 * fVar109;
        lVar60 = lVar60 + 0xc;
      } while (lVar60 != 0x30);
      FUN_109448ef8(auStack_2fa0);
      uStack_2f98._0_4_ = afStack_3218[0];
      uStack_2f98._4_4_ = afStack_3218[1];
      auStack_2fa0[0] = (ushort)uStack_3220;
      auStack_2fa0[1] = (ushort)((ulong)uStack_3220 >> 0x10);
      sStack_2f9c = (short)((ulong)uStack_3220 >> 0x20);
      uStack_2f9a = (undefined2)((ulong)uStack_3220 >> 0x30);
      uStack_2f90._0_4_ = afStack_3218[2];
      uStack_2f90._4_4_ = afStack_3218[3];
      auStack_2f88._0_4_ = (undefined4)uStack_3208;
      FUN_109448ef8(auStack_2fa0);
      FUN_10944879c(param_1,piVar44,auStack_2fa0,&uStack_31c0,0);
      FUN_10944879c(param_1,piVar44,auStack_2fa0,&uStack_31c0,1);
    }
    fVar103 = 1.0;
    lVar60 = 1;
    do {
      _snprintf(&uStack_30d8,0x100,&UNK_10f56d95c);
      pfVar98 = (float *)(param_1 + lVar60 * 0x148);
      fStack_32a8 = pfVar98[1];
      uStack_32b8 = *(undefined8 *)(param_1 + 0x424);
      uStack_32b0 = *(undefined8 *)(param_1 + 0x414);
      uStack_32c8 = *(undefined8 *)(param_1 + 0x394);
      uStack_32c0 = *(undefined8 *)(param_1 + 900);
      uStack_32d8 = *(undefined8 *)(param_1 + 0x304);
      uStack_32d0 = *(undefined8 *)(param_1 + 0x2f4);
      plVar42 = *(long **)(pfVar98 + 0x44);
      puVar73 = uStack_2fd4;
      piVar44 = uStack_2f98;
      piVar17 = uStack_2f90;
      lVar85 = uStack_2f60;
      uVar62 = uStack_2f50;
      if (plVar42 != (long *)0x0) {
        fVar107 = *(float *)(param_1 + 0x2a8);
        fVar108 = *(float *)(param_1 + 0x2ac);
        lVar61 = param_1 + lVar60 * 0x148;
        fVar109 = -fStack_32a8;
        iVar80 = *(int *)(param_1 + 0x2b4);
        sVar11 = *(short *)(pfVar98 + 3);
        sVar9 = *(short *)(pfVar98 + 2);
        fVar104 = 1.0 / fStack_32a8;
        do {
          uVar52 = *(uint *)(param_1 + 0x2d8);
          pfVar43 = pfVar98 + 0x14;
          uStack_2fd4 = puVar73;
          uStack_2f98 = piVar44;
          uStack_2f90 = piVar17;
          uStack_2f60 = lVar85;
          uStack_2f50 = uVar62;
          FUN_109449550(pfVar43,plVar42 + 2);
          if ((pfVar43 == (float *)0x0) ||
             (pfVar43 = *(float **)(pfVar43 + 6), pfVar43 == (float *)0x0)) {
            if (lVar60 == 0) {
              sVar10 = (short)plVar42[2];
              sStack_32a4 = (short)((int)((int)sVar10 - 1U) / 2);
              if (((long)sVar10 & 0x80000000U) == 0) {
                sStack_32a4 = (short)((uint)(int)sVar10 >> 1);
              }
              sVar10 = *(short *)((long)plVar42 + 0x12);
              sStack_32a2 = (short)((int)((int)sVar10 - 1U) / 2);
              if (((long)sVar10 & 0x80000000U) == 0) {
                sStack_32a2 = (short)((uint)(int)sVar10 >> 1);
              }
              sVar10 = *(short *)((long)plVar42 + 0x14);
              sStack_32a0 = (short)((int)((int)sVar10 - 1U) / 2);
              if (((long)sVar10 & 0x80000000U) == 0) {
                sStack_32a0 = (short)((uint)(int)sVar10 >> 1);
              }
              lVar85 = lVar61 + 0x198;
              FUN_1093a8f80(lVar85,&sStack_32a4);
              if (((lVar85 != 0) && (*(long *)(lVar85 + 0x18) != 0)) &&
                 (uVar52 <= *(uint *)(*(long *)(lVar85 + 0x18) + 0x1814))) {
                lVar85 = 1000;
                puVar47 = auStack_2fa0;
                do {
                  puVar47[0xc] = 0x1001;
                  puVar47[0xd] = 0;
                  puVar47[0xe] = 0;
                  puVar47[0xf] = 0;
                  puVar47[8] = 0;
                  puVar47[9] = 0;
                  puVar47[10] = 0;
                  puVar47[0xb] = 0;
                  puVar47[0x14] = 0;
                  puVar47[0x15] = 0;
                  puVar47[0x16] = 0;
                  puVar47[0x17] = 0;
                  puVar47[0x10] = 0;
                  puVar47[0x11] = 0;
                  puVar47[0x12] = 0x1001;
                  puVar47[0x13] = 0;
                  puVar47[4] = 0;
                  puVar47[5] = 0;
                  puVar47[6] = 0x1001;
                  puVar47[7] = 0;
                  puVar47[0] = 0x1001;
                  puVar47[1] = 0;
                  puVar47[2] = 0;
                  puVar47[3] = 0;
                  lVar85 = lVar85 + -4;
                  puVar47 = puVar47 + 0x18;
                } while (lVar85 != 0);
                lVar85 = lVar61 + 0x198;
                FUN_109449550(lVar85,&sStack_32a4);
                if ((lVar85 == 0) || (lVar85 = *(long *)(lVar85 + 0x18), lVar85 == 0)) {
                  _puts(&UNK_10f56d9e9);
                }
                else {
                  lVar71 = -12000;
                  do {
                    *(undefined4 *)((long)&uStack_c0 + lVar71) = 0x1001;
                    *(undefined8 *)(auStack_bc + lVar71) = 0;
                    lVar71 = lVar71 + 0xc;
                  } while (lVar71 != 0);
                  lVar71 = lVar61 + 0x198;
                  FUN_1093a8f80(lVar71,&sStack_32a4);
                  if ((lVar71 != 0) && (lVar71 = *(long *)(lVar71 + 0x18), lVar71 != 0)) {
                    lVar50 = 0;
                    puVar47 = auStack_2fa0;
                    do {
                      lVar82 = 0;
                      lVar87 = lVar71;
                      puVar46 = puVar47;
                      do {
                        lVar89 = 0;
                        do {
                          puVar64 = (undefined4 *)(lVar87 + lVar89);
                          *(undefined4 *)((long)puVar46 + lVar89 + 0x534) = *puVar64;
                          *(undefined1 *)((long)puVar46 + lVar89 + 0x538) =
                               *(undefined1 *)(puVar64 + 1);
                          *(undefined1 *)((long)puVar46 + lVar89 + 0x539) =
                               *(undefined1 *)((long)puVar64 + 5);
                          *(undefined1 *)((long)puVar46 + lVar89 + 0x53a) =
                               *(undefined1 *)((long)puVar64 + 6);
                          *(undefined1 *)((long)puVar46 + lVar89 + 0x53b) =
                               *(undefined1 *)((long)puVar64 + 7);
                          *(undefined4 *)((long)puVar46 + lVar89 + 0x53c) = puVar64[2];
                          lVar89 = lVar89 + 0xc;
                        } while (lVar89 != 0x60);
                        lVar82 = lVar82 + 1;
                        puVar46 = puVar46 + 0x3c;
                        lVar87 = lVar87 + 0x60;
                      } while (lVar82 != 8);
                      lVar50 = lVar50 + 1;
                      puVar47 = puVar47 + 600;
                      lVar71 = lVar71 + 0x300;
                    } while (lVar50 != 8);
                    uStack_31c0._0_6_ = CONCAT42(CONCAT22(sStack_32a0,sStack_32a2),sStack_32a4 + 1);
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) && (*(long *)(lVar71 + 0x18) != 0)) {
                      lVar50 = 0;
                      puVar64 = (undefined4 *)(*(long *)(lVar71 + 0x18) + 8);
                      puVar47 = auStack_2fa0;
                      do {
                        lVar71 = 0;
                        puVar102 = puVar64;
                        do {
                          *(undefined4 *)((long)puVar47 + lVar71 + 0x594) = puVar102[-2];
                          *(undefined1 *)((long)puVar47 + lVar71 + 0x598) =
                               *(undefined1 *)(puVar102 + -1);
                          *(undefined1 *)((long)puVar47 + lVar71 + 0x599) =
                               *(undefined1 *)((long)puVar102 + -3);
                          *(undefined1 *)((long)puVar47 + lVar71 + 0x59a) =
                               *(undefined1 *)((long)puVar102 + -2);
                          *(undefined1 *)((long)puVar47 + lVar71 + 0x59b) =
                               *(undefined1 *)((long)puVar102 + -1);
                          *(undefined4 *)((long)puVar47 + lVar71 + 0x59c) = *puVar102;
                          lVar71 = lVar71 + 0x78;
                          puVar102 = puVar102 + 0x18;
                        } while (lVar71 != 0x3c0);
                        lVar50 = lVar50 + 1;
                        puVar64 = puVar64 + 0xc0;
                        puVar47 = puVar47 + 600;
                      } while (lVar50 != 8);
                    }
                    uStack_31c0._0_6_ = CONCAT42(CONCAT22(sStack_32a0,sStack_32a2),sStack_32a4 + -1)
                    ;
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) && (*(long *)(lVar71 + 0x18) != 0)) {
                      lVar50 = 0;
                      puVar64 = (undefined4 *)(*(long *)(lVar71 + 0x18) + 0x5c);
                      puVar47 = auStack_2fa0;
                      do {
                        lVar71 = 0;
                        puVar102 = puVar64;
                        do {
                          *(undefined4 *)((long)puVar47 + lVar71 + 0x528) = puVar102[-2];
                          *(undefined1 *)((long)puVar47 + lVar71 + 0x52c) =
                               *(undefined1 *)(puVar102 + -1);
                          *(undefined1 *)((long)puVar47 + lVar71 + 0x52d) =
                               *(undefined1 *)((long)puVar102 + -3);
                          *(undefined1 *)((long)puVar47 + lVar71 + 0x52e) =
                               *(undefined1 *)((long)puVar102 + -2);
                          *(undefined1 *)((long)puVar47 + lVar71 + 0x52f) =
                               *(undefined1 *)((long)puVar102 + -1);
                          *(undefined4 *)((long)puVar47 + lVar71 + 0x530) = *puVar102;
                          lVar71 = lVar71 + 0x78;
                          puVar102 = puVar102 + 0x18;
                        } while (lVar71 != 0x3c0);
                        lVar50 = lVar50 + 1;
                        puVar64 = puVar64 + 0xc0;
                        puVar47 = puVar47 + 600;
                      } while (lVar50 != 8);
                    }
                    uStack_31c0._0_4_ = CONCAT22(sStack_32a2 + 1,sStack_32a4);
                    uStack_31c0._0_6_ = CONCAT24(sStack_32a0,(int)uStack_31c0);
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) && (lVar71 = *(long *)(lVar71 + 0x18), lVar71 != 0)) {
                      lVar50 = 0;
                      puVar47 = auStack_2fa0;
                      do {
                        lVar82 = 0;
                        do {
                          puVar64 = (undefined4 *)(lVar71 + lVar82);
                          *(undefined4 *)((long)puVar47 + lVar82 + 0x8f4) = *puVar64;
                          *(undefined1 *)((long)puVar47 + lVar82 + 0x8f8) =
                               *(undefined1 *)(puVar64 + 1);
                          *(undefined1 *)((long)puVar47 + lVar82 + 0x8f9) =
                               *(undefined1 *)((long)puVar64 + 5);
                          *(undefined1 *)((long)puVar47 + lVar82 + 0x8fa) =
                               *(undefined1 *)((long)puVar64 + 6);
                          *(undefined1 *)((long)puVar47 + lVar82 + 0x8fb) =
                               *(undefined1 *)((long)puVar64 + 7);
                          *(undefined4 *)((long)puVar47 + lVar82 + 0x8fc) = puVar64[2];
                          lVar82 = lVar82 + 0xc;
                        } while (lVar82 != 0x60);
                        lVar50 = lVar50 + 1;
                        lVar71 = lVar71 + 0x300;
                        puVar47 = puVar47 + 600;
                      } while (lVar50 != 8);
                    }
                    uStack_31c0._0_4_ = CONCAT22(sStack_32a2 + -1,sStack_32a4);
                    uStack_31c0._0_6_ = CONCAT24(sStack_32a0,(int)uStack_31c0);
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) && (lVar71 = *(long *)(lVar71 + 0x18), lVar71 != 0)) {
                      lVar50 = 0;
                      puVar47 = auStack_2fa0;
                      do {
                        lVar82 = 0;
                        do {
                          lVar87 = lVar71 + lVar82;
                          *(undefined4 *)((long)puVar47 + lVar82 + 0x4bc) =
                               *(undefined4 *)(lVar87 + 0x2a0);
                          *(undefined1 *)((long)puVar47 + lVar82 + 0x4c0) =
                               *(undefined1 *)(lVar87 + 0x2a4);
                          *(undefined1 *)((long)puVar47 + lVar82 + 0x4c1) =
                               *(undefined1 *)(lVar87 + 0x2a5);
                          *(undefined1 *)((long)puVar47 + lVar82 + 0x4c2) =
                               *(undefined1 *)(lVar87 + 0x2a6);
                          *(undefined1 *)((long)puVar47 + lVar82 + 0x4c3) =
                               *(undefined1 *)(lVar87 + 0x2a7);
                          *(undefined4 *)((long)puVar47 + lVar82 + 0x4c4) =
                               *(undefined4 *)(lVar87 + 0x2a8);
                          lVar82 = lVar82 + 0xc;
                        } while (lVar82 != 0x60);
                        lVar50 = lVar50 + 1;
                        lVar71 = lVar71 + 0x300;
                        puVar47 = puVar47 + 600;
                      } while (lVar50 != 8);
                    }
                    uStack_31c0._0_6_ = CONCAT24(sStack_32a0 + 1,CONCAT22(sStack_32a2,sStack_32a4));
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) && (*(long *)(lVar71 + 0x18) != 0)) {
                      lVar50 = 0;
                      puVar64 = (undefined4 *)(*(long *)(lVar71 + 0x18) + 8);
                      puVar102 = auStack_4e4;
                      do {
                        lVar71 = 8;
                        puVar100 = puVar102;
                        puVar74 = puVar64;
                        do {
                          puVar100[-2] = puVar74[-2];
                          *(undefined1 *)(puVar100 + -1) = *(undefined1 *)(puVar74 + -1);
                          *(undefined1 *)((long)puVar100 + -3) = *(undefined1 *)((long)puVar74 + -3)
                          ;
                          *(undefined1 *)((long)puVar100 + -2) = *(undefined1 *)((long)puVar74 + -2)
                          ;
                          *(undefined1 *)((long)puVar100 + -1) = *(undefined1 *)((long)puVar74 + -1)
                          ;
                          *puVar100 = *puVar74;
                          lVar71 = lVar71 + -1;
                          puVar100 = puVar100 + 3;
                          puVar74 = puVar74 + 3;
                        } while (lVar71 != 0);
                        lVar50 = lVar50 + 1;
                        puVar64 = puVar64 + 0x18;
                        puVar102 = puVar102 + 0x1e;
                      } while (lVar50 != 8);
                    }
                    uStack_31c0._0_6_ = CONCAT24(sStack_32a0 + -1,CONCAT22(sStack_32a2,sStack_32a4))
                    ;
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) && (lVar71 = *(long *)(lVar71 + 0x18), lVar71 != 0)) {
                      lVar50 = 0;
                      lVar82 = lVar71 + 0x1504;
                      puVar47 = auStack_2fa0;
                      do {
                        lVar87 = 0;
                        do {
                          *(undefined4 *)((long)puVar47 + lVar87 + 0x84) =
                               *(undefined4 *)(lVar71 + lVar87 + 0x1500);
                          puVar3 = (undefined1 *)(lVar82 + lVar87);
                          *(undefined1 *)((long)puVar47 + lVar87 + 0x88) = *puVar3;
                          *(undefined1 *)((long)puVar47 + lVar87 + 0x89) = puVar3[1];
                          *(undefined1 *)((long)puVar47 + lVar87 + 0x8a) = puVar3[2];
                          *(undefined1 *)((long)puVar47 + lVar87 + 0x8b) = puVar3[3];
                          *(undefined4 *)((long)puVar47 + lVar87 + 0x8c) =
                               *(undefined4 *)(lVar71 + lVar87 + 0x1508);
                          lVar87 = lVar87 + 0xc;
                        } while (lVar87 != 0x60);
                        lVar50 = lVar50 + 1;
                        lVar82 = lVar82 + 0x60;
                        puVar47 = puVar47 + 0x3c;
                        lVar71 = lVar71 + 0x60;
                      } while (lVar50 != 8);
                    }
                    uStack_31c0._0_4_ = CONCAT22(sStack_32a2 + 1,sStack_32a4);
                    uStack_31c0._0_6_ = CONCAT24(sStack_32a0 + 1,(int)uStack_31c0);
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) && (*(long *)(lVar71 + 0x18) != 0)) {
                      lVar50 = 8;
                      puVar64 = (undefined4 *)(*(long *)(lVar71 + 0x18) + 8);
                      puVar102 = auStack_124;
                      do {
                        puVar102[-2] = puVar64[-2];
                        *(undefined1 *)(puVar102 + -1) = *(undefined1 *)(puVar64 + -1);
                        *(undefined1 *)((long)puVar102 + -3) = *(undefined1 *)((long)puVar64 + -3);
                        *(undefined1 *)((long)puVar102 + -2) = *(undefined1 *)((long)puVar64 + -2);
                        *(undefined1 *)((long)puVar102 + -1) = *(undefined1 *)((long)puVar64 + -1);
                        *puVar102 = *puVar64;
                        lVar50 = lVar50 + -1;
                        puVar64 = puVar64 + 3;
                        puVar102 = puVar102 + 3;
                      } while (lVar50 != 0);
                    }
                    uStack_31c0._0_4_ = CONCAT22(sStack_32a2 + -1,sStack_32a4);
                    uStack_31c0._0_6_ = CONCAT24(sStack_32a0 + -1,(int)uStack_31c0);
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) && (*(long *)(lVar71 + 0x18) != 0)) {
                      lVar50 = 8;
                      puVar64 = (undefined4 *)(*(long *)(lVar71 + 0x18) + 0x17a8);
                      puVar102 = (undefined4 *)((long)&uStack_2f90 + 4);
                      do {
                        puVar102[-2] = puVar64[-2];
                        puVar102[-1] = puVar64[-1];
                        *puVar102 = *puVar64;
                        lVar50 = lVar50 + -1;
                        puVar64 = puVar64 + 3;
                        puVar102 = puVar102 + 3;
                      } while (lVar50 != 0);
                    }
                    uStack_31c0._0_4_ = CONCAT22(sStack_32a2 + 1,sStack_32a4);
                    uStack_31c0._0_6_ = CONCAT24(sStack_32a0 + -1,(int)uStack_31c0);
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) && (*(long *)(lVar71 + 0x18) != 0)) {
                      lVar50 = 8;
                      puVar64 = (undefined4 *)(*(long *)(lVar71 + 0x18) + 0x1508);
                      puVar102 = auStack_2b54;
                      do {
                        puVar102[-2] = puVar64[-2];
                        puVar102[-1] = puVar64[-1];
                        *puVar102 = *puVar64;
                        lVar50 = lVar50 + -1;
                        puVar64 = puVar64 + 3;
                        puVar102 = puVar102 + 3;
                      } while (lVar50 != 0);
                    }
                    uStack_31c0._0_4_ = CONCAT22(sStack_32a2 + -1,sStack_32a4);
                    uStack_31c0._0_6_ = CONCAT24(sStack_32a0 + 1,(int)uStack_31c0);
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) && (lVar71 = *(long *)(lVar71 + 0x18), lVar71 != 0)) {
                      lVar50 = 0;
                      do {
                        lVar82 = lVar71 + lVar50;
                        *(undefined4 *)((long)&uStack_564 + lVar50) =
                             *(undefined4 *)(lVar82 + 0x2a0);
                        auStack_560[lVar50] = *(undefined1 *)(lVar82 + 0x2a4);
                        auStack_560[lVar50 + 1] = *(undefined1 *)(lVar82 + 0x2a5);
                        auStack_560[lVar50 + 2] = *(undefined1 *)(lVar82 + 0x2a6);
                        auStack_560[lVar50 + 3] = *(undefined1 *)(lVar82 + 0x2a7);
                        *(undefined4 *)(auStack_560 + lVar50 + 4) = *(undefined4 *)(lVar82 + 0x2a8);
                        lVar50 = lVar50 + 0xc;
                      } while (lVar50 != 0x60);
                    }
                    uStack_31c0._0_4_ = CONCAT22(sStack_32a2,sStack_32a4 + 1);
                    uStack_31c0._0_6_ = CONCAT24(sStack_32a0 + 1,(int)uStack_31c0);
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) && (*(long *)(lVar71 + 0x18) != 0)) {
                      lVar50 = 8;
                      puVar64 = (undefined4 *)(*(long *)(lVar71 + 0x18) + 8);
                      puVar102 = auStack_484;
                      do {
                        puVar102[-2] = puVar64[-2];
                        *(undefined1 *)(puVar102 + -1) = *(undefined1 *)(puVar64 + -1);
                        *(undefined1 *)((long)puVar102 + -3) = *(undefined1 *)((long)puVar64 + -3);
                        *(undefined1 *)((long)puVar102 + -2) = *(undefined1 *)((long)puVar64 + -2);
                        *(undefined1 *)((long)puVar102 + -1) = *(undefined1 *)((long)puVar64 + -1);
                        *puVar102 = *puVar64;
                        lVar50 = lVar50 + -1;
                        puVar64 = puVar64 + 0x18;
                        puVar102 = puVar102 + 0x1e;
                      } while (lVar50 != 0);
                    }
                    uStack_31c0._0_4_ = CONCAT22(sStack_32a2,sStack_32a4 + -1);
                    uStack_31c0._0_6_ = CONCAT24(sStack_32a0 + -1,(int)uStack_31c0);
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) && (*(long *)(lVar71 + 0x18) != 0)) {
                      lVar50 = 0;
                      puVar64 = (undefined4 *)(*(long *)(lVar71 + 0x18) + 0x155c);
                      do {
                        *(undefined4 *)((long)&uStack_2f28 + lVar50) = puVar64[-2];
                        auStack_2f24[lVar50] = *(undefined1 *)(puVar64 + -1);
                        auStack_2f24[lVar50 + 1] = *(undefined1 *)((long)puVar64 + -3);
                        auStack_2f24[lVar50 + 2] = *(undefined1 *)((long)puVar64 + -2);
                        auStack_2f24[lVar50 + 3] = *(undefined1 *)((long)puVar64 + -1);
                        *(undefined4 *)((long)afStack_2f20 + lVar50) = *puVar64;
                        lVar50 = lVar50 + 0x78;
                        puVar64 = puVar64 + 0x18;
                      } while (lVar50 != 0x3c0);
                    }
                    uStack_31c0._0_4_ = CONCAT22(sStack_32a2,sStack_32a4 + 1);
                    uStack_31c0._0_6_ = CONCAT24(sStack_32a0 + -1,(int)uStack_31c0);
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) && (*(long *)(lVar71 + 0x18) != 0)) {
                      lVar50 = 0;
                      puVar64 = (undefined4 *)(*(long *)(lVar71 + 0x18) + 0x1508);
                      do {
                        *(undefined4 *)((long)&uStack_2ebc + lVar50) = puVar64[-2];
                        auStack_2eb8[lVar50] = *(undefined1 *)(puVar64 + -1);
                        auStack_2eb8[lVar50 + 1] = *(undefined1 *)((long)puVar64 + -3);
                        auStack_2eb8[lVar50 + 2] = *(undefined1 *)((long)puVar64 + -2);
                        auStack_2eb8[lVar50 + 3] = *(undefined1 *)((long)puVar64 + -1);
                        *(undefined4 *)(auStack_2eb8 + lVar50 + 4) = *puVar64;
                        lVar50 = lVar50 + 0x78;
                        puVar64 = puVar64 + 0x18;
                      } while (lVar50 != 0x3c0);
                    }
                    uStack_31c0._0_4_ = CONCAT22(sStack_32a2,sStack_32a4 + -1);
                    uStack_31c0._0_6_ = CONCAT24(sStack_32a0 + 1,(int)uStack_31c0);
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) && (lVar71 = *(long *)(lVar71 + 0x18), lVar71 != 0)) {
                      lVar50 = 0;
                      puVar64 = auStack_4f0;
                      do {
                        lVar82 = lVar71 + lVar50;
                        puVar64[-2] = *(undefined4 *)(lVar82 + 0x54);
                        *(undefined1 *)(puVar64 + -1) = *(undefined1 *)(lVar82 + 0x58);
                        *(undefined1 *)((long)puVar64 + -3) = *(undefined1 *)(lVar82 + 0x59);
                        *(undefined1 *)((long)puVar64 + -2) = *(undefined1 *)(lVar82 + 0x5a);
                        *(undefined1 *)((long)puVar64 + -1) = *(undefined1 *)(lVar82 + 0x5b);
                        *puVar64 = *(undefined4 *)(lVar82 + 0x5c);
                        lVar50 = lVar50 + 0x60;
                        puVar64 = puVar64 + 0x1e;
                      } while (lVar50 != 0x300);
                    }
                    uStack_31c0._0_4_ = CONCAT22(sStack_32a2 + 1,sStack_32a4 + 1);
                    uStack_31c0._0_6_ = CONCAT24(sStack_32a0,(int)uStack_31c0);
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) && (*(long *)(lVar71 + 0x18) != 0)) {
                      puVar64 = (undefined4 *)(*(long *)(lVar71 + 0x18) + 8);
                      puVar47 = auStack_2fa0;
                      lVar71 = 8;
                      do {
                        *(undefined4 *)(puVar47 + 0x4aa) = puVar64[-2];
                        *(undefined1 *)(puVar47 + 0x4ac) = *(undefined1 *)(puVar64 + -1);
                        *(undefined1 *)((long)puVar47 + 0x959) = *(undefined1 *)((long)puVar64 + -3)
                        ;
                        *(undefined1 *)(puVar47 + 0x4ad) = *(undefined1 *)((long)puVar64 + -2);
                        *(undefined1 *)((long)puVar47 + 0x95b) = *(undefined1 *)((long)puVar64 + -1)
                        ;
                        *(undefined4 *)(puVar47 + 0x4ae) = *puVar64;
                        puVar64 = puVar64 + 0xc0;
                        puVar47 = puVar47 + 600;
                        lVar71 = lVar71 + -1;
                      } while (lVar71 != 0);
                    }
                    uStack_31c0._0_4_ = CONCAT22(sStack_32a2 + -1,sStack_32a4 + -1);
                    uStack_31c0._0_6_ = CONCAT24(sStack_32a0,(int)uStack_31c0);
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) && (*(long *)(lVar71 + 0x18) != 0)) {
                      puVar64 = (undefined4 *)(*(long *)(lVar71 + 0x18) + 0x2fc);
                      puVar47 = auStack_2fa0;
                      lVar71 = 8;
                      do {
                        *(undefined4 *)(puVar47 + 600) = puVar64[-2];
                        *(undefined1 *)(puVar47 + 0x25a) = *(undefined1 *)(puVar64 + -1);
                        *(undefined1 *)((long)puVar47 + 0x4b5) = *(undefined1 *)((long)puVar64 + -3)
                        ;
                        *(undefined1 *)(puVar47 + 0x25b) = *(undefined1 *)((long)puVar64 + -2);
                        *(undefined1 *)((long)puVar47 + 0x4b7) = *(undefined1 *)((long)puVar64 + -1)
                        ;
                        *(undefined4 *)(puVar47 + 0x25c) = *puVar64;
                        puVar47 = puVar47 + 600;
                        puVar64 = puVar64 + 0xc0;
                        lVar71 = lVar71 + -1;
                      } while (lVar71 != 0);
                    }
                    uStack_31c0._0_4_ = CONCAT22(sStack_32a2 + -1,sStack_32a4 + 1);
                    uStack_31c0._0_6_ = CONCAT24(sStack_32a0,(int)uStack_31c0);
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) && (*(long *)(lVar71 + 0x18) != 0)) {
                      puVar64 = (undefined4 *)(*(long *)(lVar71 + 0x18) + 0x2a8);
                      puVar47 = auStack_2fa0;
                      lVar71 = 8;
                      do {
                        *(undefined4 *)(puVar47 + 0x28e) = puVar64[-2];
                        *(undefined1 *)(puVar47 + 0x290) = *(undefined1 *)(puVar64 + -1);
                        *(undefined1 *)((long)puVar47 + 0x521) = *(undefined1 *)((long)puVar64 + -3)
                        ;
                        *(undefined1 *)(puVar47 + 0x291) = *(undefined1 *)((long)puVar64 + -2);
                        *(undefined1 *)((long)puVar47 + 0x523) = *(undefined1 *)((long)puVar64 + -1)
                        ;
                        *(undefined4 *)(puVar47 + 0x292) = *puVar64;
                        puVar64 = puVar64 + 0xc0;
                        puVar47 = puVar47 + 600;
                        lVar71 = lVar71 + -1;
                      } while (lVar71 != 0);
                    }
                    uStack_31c0._0_4_ = CONCAT22(sStack_32a2 + 1,sStack_32a4 + -1);
                    uStack_31c0._0_6_ = CONCAT24(sStack_32a0,(int)uStack_31c0);
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) && (*(long *)(lVar71 + 0x18) != 0)) {
                      puVar64 = (undefined4 *)(*(long *)(lVar71 + 0x18) + 0x5c);
                      puVar47 = auStack_2fa0;
                      lVar71 = 8;
                      do {
                        *(undefined4 *)(puVar47 + 0x474) = puVar64[-2];
                        *(undefined1 *)(puVar47 + 0x476) = *(undefined1 *)(puVar64 + -1);
                        *(undefined1 *)((long)puVar47 + 0x8ed) = *(undefined1 *)((long)puVar64 + -3)
                        ;
                        *(undefined1 *)(puVar47 + 0x477) = *(undefined1 *)((long)puVar64 + -2);
                        *(undefined1 *)((long)puVar47 + 0x8ef) = *(undefined1 *)((long)puVar64 + -1)
                        ;
                        *(undefined4 *)(puVar47 + 0x478) = *puVar64;
                        puVar64 = puVar64 + 0xc0;
                        puVar47 = puVar47 + 600;
                        lVar71 = lVar71 + -1;
                      } while (lVar71 != 0);
                    }
                    uStack_31c0._0_4_ = CONCAT22(sStack_32a2 + 1,sStack_32a4 + 1);
                    uStack_31c0._0_6_ = CONCAT24(sStack_32a0 + 1,(int)uStack_31c0);
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) &&
                       (puVar64 = *(undefined4 **)(lVar71 + 0x18), puVar64 != (undefined4 *)0x0)) {
                      uStack_cc = *puVar64;
                      uStack_c8 = *(undefined1 *)(puVar64 + 1);
                      uStack_c7 = *(undefined1 *)((long)puVar64 + 5);
                      uStack_c6 = *(undefined1 *)((long)puVar64 + 6);
                      uStack_c5 = *(undefined1 *)((long)puVar64 + 7);
                      uStack_c4 = puVar64[2];
                    }
                    uStack_31c0._0_4_ = CONCAT22(sStack_32a2 + 1,sStack_32a4 + -1);
                    uStack_31c0._0_6_ = CONCAT24(sStack_32a0 + 1,(int)uStack_31c0);
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) && (lVar71 = *(long *)(lVar71 + 0x18), lVar71 != 0)) {
                      uStack_138 = *(undefined4 *)(lVar71 + 0x54);
                      uStack_134 = *(undefined1 *)(lVar71 + 0x58);
                      uStack_133 = *(undefined1 *)(lVar71 + 0x59);
                      uStack_132 = *(undefined1 *)(lVar71 + 0x5a);
                      uStack_131 = *(undefined1 *)(lVar71 + 0x5b);
                      uStack_130 = *(undefined4 *)(lVar71 + 0x5c);
                    }
                    uStack_31c0._0_4_ = CONCAT22(sStack_32a2 + -1,sStack_32a4 + 1);
                    uStack_31c0._0_6_ = CONCAT24(sStack_32a0 + 1,(int)uStack_31c0);
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) && (lVar71 = *(long *)(lVar71 + 0x18), lVar71 != 0)) {
                      uStack_504 = *(undefined4 *)(lVar71 + 0x2a0);
                      uStack_500 = *(undefined1 *)(lVar71 + 0x2a4);
                      uStack_4ff = *(undefined1 *)(lVar71 + 0x2a5);
                      uStack_4fe = *(undefined1 *)(lVar71 + 0x2a6);
                      uStack_4fd = *(undefined1 *)(lVar71 + 0x2a7);
                      uStack_4fc = *(undefined4 *)(lVar71 + 0x2a8);
                    }
                    uStack_31c0._0_4_ = CONCAT22(sStack_32a2 + -1,sStack_32a4 + -1);
                    uStack_31c0._0_6_ = CONCAT24(sStack_32a0 + 1,(int)uStack_31c0);
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) && (lVar71 = *(long *)(lVar71 + 0x18), lVar71 != 0)) {
                      uStack_570 = *(undefined4 *)(lVar71 + 0x2f4);
                      uStack_56c = *(undefined1 *)(lVar71 + 0x2f8);
                      uStack_56b = *(undefined1 *)(lVar71 + 0x2f9);
                      uStack_56a = *(undefined1 *)(lVar71 + 0x2fa);
                      uStack_569 = *(undefined1 *)(lVar71 + 0x2fb);
                      uStack_568 = *(undefined4 *)(lVar71 + 0x2fc);
                    }
                    uStack_31c0._0_4_ = CONCAT22(sStack_32a2 + 1,sStack_32a4 + 1);
                    uStack_31c0._0_6_ = CONCAT24(sStack_32a0 + -1,(int)uStack_31c0);
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) && (lVar71 = *(long *)(lVar71 + 0x18), lVar71 != 0)) {
                      uStack_2afc = *(undefined8 *)(lVar71 + 0x1500);
                      uStack_2af4 = *(undefined4 *)(lVar71 + 0x1508);
                    }
                    uStack_31c0._0_4_ = CONCAT22(sStack_32a2 + 1,sStack_32a4 + -1);
                    uStack_31c0._0_6_ = CONCAT24(sStack_32a0 + -1,(int)uStack_31c0);
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) && (lVar71 = *(long *)(lVar71 + 0x18), lVar71 != 0)) {
                      uStack_2b68 = *(undefined8 *)(lVar71 + 0x1554);
                      uStack_2b60 = *(undefined4 *)(lVar71 + 0x155c);
                    }
                    uStack_31c0._0_4_ = CONCAT22(sStack_32a2 + -1,sStack_32a4 + 1);
                    uStack_31c0._0_6_ = CONCAT24(sStack_32a0 + -1,(int)uStack_31c0);
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) && (lVar71 = *(long *)(lVar71 + 0x18), lVar71 != 0)) {
                      uStack_2f34 = *(undefined8 *)(lVar71 + 0x17a0);
                      uStack_2f2c = *(undefined4 *)(lVar71 + 0x17a8);
                    }
                    uStack_31c0._0_4_ = CONCAT22(sStack_32a2 + -1,sStack_32a4 + -1);
                    uStack_31c0._0_6_ = CONCAT24(sStack_32a0 + -1,(int)uStack_31c0);
                    lVar71 = lVar61 + 0x198;
                    FUN_1093a8f80(lVar71,&uStack_31c0);
                    if ((lVar71 != 0) && (lVar71 = *(long *)(lVar71 + 0x18), lVar71 != 0)) {
                      uVar118 = *(undefined8 *)(lVar71 + 0x17f4);
                      auStack_2fa0[0] = (ushort)uVar118;
                      auStack_2fa0[1] = (ushort)((ulong)uVar118 >> 0x10);
                      sStack_2f9c = (short)((ulong)uVar118 >> 0x20);
                      uStack_2f9a = (undefined2)((ulong)uVar118 >> 0x30);
                      uStack_2f98._0_4_ = (float)*(undefined4 *)(lVar71 + 0x17fc);
                      uStack_2f98 = (int *)CONCAT44(uStack_2f98._4_4_,
                                                    *(undefined4 *)(lVar71 + 0x17fc));
                    }
                  }
                  lVar71 = 0;
                  uVar67 = 0;
                  lVar50 = 0;
                  uStack_31c0 = 0x500000000;
                  uStack_3220 = 0x900000005;
                  piVar44 = (int *)&uStack_31c0;
                  bVar37 = true;
                  do {
                    bVar38 = bVar37;
                    uVar83 = 0;
                    iVar88 = *piVar44;
                    iVar90 = piVar44[1];
                    piVar44 = (int *)&uStack_31c0;
                    bVar37 = true;
                    do {
                      bVar41 = bVar37;
                      uVar48 = 0;
                      iVar95 = *piVar44;
                      iVar99 = piVar44[1];
                      piVar44 = (int *)&uStack_31c0;
                      bVar37 = true;
                      do {
                        bVar39 = bVar37;
                        if (iVar88 <= iVar90) {
                          iVar68 = *piVar44;
                          iVar101 = iVar88 * 100 + iVar95 * 10 + iVar68;
                          iVar51 = iVar88;
                          do {
                            iVar79 = iVar95;
                            iVar92 = iVar101;
                            if (iVar95 <= iVar99) {
                              do {
                                iVar97 = (piVar44[1] - iVar68) + 1;
                                iVar96 = iVar92;
                                if (iVar68 <= piVar44[1]) {
                                  do {
                                    if (0xf000 < auStack_2fa0[(long)iVar96 * 6] - 0x800) {
                                      lVar82 = lVar50 * 6;
                                      *(undefined2 *)((long)&uStack_2fd8 + lVar82) = uVar48;
                                      lVar71 = lVar50 + 1;
                                      *(undefined2 *)((long)&uStack_2fd8 + lVar82 + 2) = uVar83;
                                      *(undefined2 *)((long)&uStack_2fd4 + lVar82) = uVar67;
                                      lVar50 = lVar71;
                                      goto LAB_109442f00;
                                    }
                                    iVar96 = iVar96 + 1;
                                    iVar97 = iVar97 + -1;
                                  } while (iVar97 != 0);
                                }
                                bVar37 = iVar79 != iVar99;
                                iVar79 = iVar79 + 1;
                                iVar92 = iVar92 + 10;
                              } while (bVar37);
                            }
                            iVar101 = iVar101 + 100;
                            bVar37 = iVar51 != iVar90;
                            iVar51 = iVar51 + 1;
                          } while (bVar37);
                        }
LAB_109442f00:
                        uVar48 = 1;
                        piVar44 = (int *)&uStack_3220;
                        bVar37 = false;
                      } while (bVar39);
                      lStack_2fa8 = lVar71;
                      uVar83 = 1;
                      piVar44 = (int *)&uStack_3220;
                      bVar37 = false;
                    } while (bVar41);
                    uVar67 = 1;
                    piVar44 = (int *)&uStack_3220;
                    bVar37 = false;
                  } while (bVar38);
                  if (lVar71 != 0) {
                    psVar94 = (short *)&uStack_2fd8;
                    do {
                      sStack_329e = *psVar94 + sStack_32a4 * 2;
                      sStack_329c = psVar94[1] + sStack_32a2 * 2;
                      sStack_329a = psVar94[2] + sStack_32a0 * 2;
                      pfVar43 = pfVar98;
                      FUN_1093a6378(pfVar98,&sStack_329e);
                      lVar50 = 0;
                      fStack_31b8 = 0.0;
                      sStack_31b4 = 0x1001;
                      uStack_31b2 = 0;
                      uStack_31c0 = 0x1001;
                      uStack_31a8 = 0x1001;
                      bStack_31b0 = 0;
                      bStack_31af = 0;
                      bStack_31ae = 0;
                      bStack_31ad = 0;
                      fStack_31ac = 0.0;
                      uStack_3178 = 0x1001;
                      uStack_3180 = 0;
                      bStack_3168 = 0;
                      bStack_3167 = 0;
                      bStack_3166 = 0;
                      bStack_3165 = 0;
                      fStack_3164 = 0.0;
                      fStack_3170 = 0.0;
                      sStack_316c = 0x1001;
                      uStack_316a = 0;
                      uStack_3198 = 0;
                      _auStack_31a0 = 0x100100000000;
                      uStack_3188 = 0x100100000000;
                      uStack_3190 = 0x1001;
                      afStack_3218[0] = 1.4013e-45;
                      afStack_3218[1] = 2.8026e-45;
                      uStack_3220 = 1;
                      uStack_3208 = 0x300000002;
                      afStack_3218[2] = 2.8026e-45;
                      afStack_3218[3] = 1.4013e-45;
                      fStack_31f8 = 4.2039e-45;
                      fStack_31f4 = 5.60519e-45;
                      fStack_3200 = 4.2039e-45;
                      fStack_31fc = 2.8026e-45;
                      fStack_31e8 = 5.60519e-45;
                      fStack_31e4 = 7.00649e-45;
                      uStack_31f0 = 0x300000004;
                      afStack_3278[0] = 7.00649e-45;
                      afStack_3278[1] = 8.40779e-45;
                      uStack_3280 = 0x400000005;
                      uStack_3268 = 0x700000006;
                      afStack_3278[2] = 8.40779e-45;
                      afStack_3278[3] = 7.00649e-45;
                      fStack_3258 = 9.80909e-45;
                      fStack_3254 = 1.12104e-44;
                      fStack_3260 = 9.80909e-45;
                      fStack_325c = 8.40779e-45;
                      puVar73 = &uStack_3220;
                      if (*psVar94 != 0) {
                        puVar73 = &uStack_3280;
                      }
                      puVar66 = &uStack_3220;
                      if (psVar94[1] != 0) {
                        puVar66 = &uStack_3280;
                      }
                      puVar6 = &uStack_3220;
                      if (psVar94[2] != 0) {
                        puVar6 = &uStack_3280;
                      }
                      fStack_3248 = 1.12104e-44;
                      fStack_3244 = 1.26117e-44;
                      uStack_3250 = 0x700000008;
                      do {
                        lVar82 = 0;
                        do {
                          lVar87 = 0;
                          do {
                            puVar45 = &uStack_31c0;
                            bVar37 = true;
                            piVar44 = (int *)(puVar6 + lVar50);
                            do {
                              bVar38 = bVar37;
                              iVar88 = *piVar44;
                              bVar37 = true;
                              piVar44 = (int *)(puVar66 + lVar82);
                              do {
                                bVar41 = bVar37;
                                iVar90 = *piVar44;
                                puVar91 = puVar45;
                                bVar37 = true;
                                piVar44 = (int *)(puVar73 + lVar87);
                                do {
                                  bVar39 = bVar37;
                                  lVar89 = (long)(iVar88 * 100 + iVar90 * 10 + *piVar44);
                                  lVar12 = lVar89 * 0xc;
                                  *(undefined4 *)puVar91 =
                                       *(undefined4 *)(auStack_2fa0 + lVar89 * 6);
                                  uVar118 = uStack_31c0;
                                  puVar45 = (undefined8 *)((long)puVar91 + 0xc);
                                  *(undefined1 *)((long)puVar91 + 4) =
                                       *(undefined1 *)(&stack0xffffffffffffd064 + lVar89 * 6);
                                  *(undefined1 *)((long)puVar91 + 5) = (&uStack_2f9b)[lVar12];
                                  *(undefined1 *)((long)puVar91 + 6) =
                                       *(undefined1 *)(&uStack_2f9a + lVar89 * 6);
                                  *(undefined1 *)((long)puVar91 + 7) =
                                       *(undefined1 *)((long)&uStack_2f9a + lVar12 + 1);
                                  *(undefined4 *)(puVar91 + 1) =
                                       *(undefined4 *)((long)&uStack_2f98 + lVar12);
                                  bVar36 = bStack_3165;
                                  bVar35 = bStack_3166;
                                  bVar34 = bStack_3167;
                                  uVar32 = uStack_3178;
                                  uVar29 = uStack_3190;
                                  uVar114 = uStack_31a8;
                                  bVar26 = bStack_31ad;
                                  bVar78 = bStack_31ae;
                                  bVar77 = bStack_31af;
                                  puVar91 = puVar45;
                                  bVar37 = false;
                                  piVar44 = (int *)((long)(puVar73 + lVar87) + 4);
                                } while (bVar39);
                                bVar37 = false;
                                piVar44 = (int *)((long)(puVar66 + lVar82) + 4);
                              } while (bVar41);
                              bVar37 = false;
                              piVar44 = (int *)((long)(puVar6 + lVar50) + 4);
                            } while (bVar38);
                            uVar52 = (uint)uStack_31c0._2_2_;
                            if (uVar52 != 0) {
                              uVar62 = 0xffffffffffffffff;
                              lVar89 = 0xe;
                              do {
                                if (uVar62 == 6) goto LAB_109443144;
                                psVar1 = (short *)((long)&uStack_31c0 + lVar89);
                                uVar62 = uVar62 + 1;
                                lVar89 = lVar89 + 0xc;
                              } while (*psVar1 != 0);
                              if (6 < uVar62) {
LAB_109443144:
                                uVar69 = ((int)(short)uStack_31a8 + (int)sStack_31b4 +
                                         (int)(short)uStack_3190) * 9 + (short)uStack_31c0 * 0x1b +
                                         (int)sStack_316c +
                                         ((int)uStack_3188._4_2_ + (int)(short)auStack_31a0._4_2_ +
                                         (int)(short)uStack_3178) * 3;
                                if (uVar69 + 0x1ffff < 0x3ffff) {
                                  lVar89 = 0;
                                  uVar53 = (uint)uStack_31b2;
                                  uVar54 = (uint)uStack_31a8._2_2_;
                                  uVar55 = (uint)uStack_3190._2_2_;
                                  uVar56 = (uint)uStack_319a;
                                  uVar57 = (uint)uStack_3188._6_2_;
                                  uVar58 = (uint)uStack_3178._2_2_;
                                  uVar62 = (ulong)uStack_31c0 >> 0x20;
                                  uVar59 = (uint)uStack_316a;
                                  bVar25 = uStack_31c0._5_1_;
                                  uVar19 = (ulong)uStack_31c0 >> 0x30;
                                  uVar105 = (uint)bStack_31b0;
                                  uVar75 = (ulong)uStack_31a8 >> 0x20;
                                  bVar27 = uStack_31a8._5_1_;
                                  uVar81 = (ulong)uStack_3190 >> 0x20;
                                  bVar30 = uStack_3190._5_1_;
                                  uVar16 = (ulong)uStack_31a8 >> 0x30;
                                  uVar18 = (ulong)uStack_3190 >> 0x30;
                                  uVar2 = (uint)uStack_3198;
                                  bVar28 = uStack_3198._1_1_;
                                  uVar20 = (ulong)uStack_3198 >> 0x10;
                                  uVar84 = (uint)uStack_3180;
                                  bVar31 = uStack_3180._1_1_;
                                  uVar86 = (ulong)uStack_3178 >> 0x20;
                                  uVar21 = (ulong)uStack_3180 >> 0x10;
                                  bVar33 = uStack_3178._5_1_;
                                  uVar22 = (ulong)uStack_3178 >> 0x30;
                                  uVar106 = (uint)bStack_3168;
                                  uVar23 = (ulong)uStack_3198 >> 0x18;
                                  uVar24 = (ulong)uStack_3180 >> 0x18;
                                  uStack_3290 = 0;
                                  uStack_3298 = 0;
                                  uStack_3288 = 0;
                                  pfVar76 = &fStack_31b8;
                                  do {
                                    if (*(short *)((long)pfVar76 + -6) != 0) {
                                      func_0x000109449640(&uStack_3298,pfVar76,
                                                          *(undefined4 *)(&UNK_10dfca494 + lVar89));
                                    }
                                    lVar89 = lVar89 + 4;
                                    pfVar76 = pfVar76 + 3;
                                  } while (lVar89 != 0x20);
                                  uVar5 = uVar69 + 0x1f;
                                  if (-1 < (int)uVar69) {
                                    uVar5 = uVar69;
                                  }
                                  fVar110 = (float)(((uVar54 + uVar53 + uVar55) * 9 + uVar52 * 0x1b
                                                    + uVar59 + (uVar57 + uVar56 + uVar58) * 3) *
                                                    0x400 + 0x8000 & 0xffff0000 |
                                                   uVar5 >> 5 & 0xffff);
                                  puVar45 = &uStack_3298;
                                  func_0x00010944968c();
                                  uVar62 = (ulong)(((uint)uVar62 & 0xff) * 0x1b +
                                                   (((uint)uVar75 & 0xff) + uVar105 +
                                                   ((uint)uVar81 & 0xff)) * 9 +
                                                   ((uVar84 & 0xff) + (uVar2 & 0xff) +
                                                   ((uint)uVar86 & 0xff)) * 3 + uVar106 >> 6 & 0xff
                                                  | ((uint)bVar25 * 0x1b +
                                                     ((uint)bVar27 + (uint)bVar77 + (uint)bVar30) *
                                                     9 + ((uint)bVar31 + (uint)bVar28 + (uint)bVar33
                                                         ) * 3 + (uint)bVar34 >> 6 & 0xff) << 8) |
                                           ((ulong)((((ushort)uVar16 & 0xff) + (uint)bVar78 +
                                                    ((ushort)uVar18 & 0xff)) * 9 +
                                                    ((ushort)uVar19 & 0xff) * 0x1b +
                                                    (((uint)uVar21 & 0xff) + ((uint)uVar20 & 0xff) +
                                                    ((ushort)uVar22 & 0xff)) * 3 + (uint)bVar35 >> 6
                                                   ) & 0xff) << 0x10 |
                                           (ulong)((((uint)(byte)((ulong)uVar114 >> 0x38) +
                                                     (uint)bVar26 +
                                                    (uint)(byte)((ulong)uVar29 >> 0x38)) * 9 +
                                                    (uint)(byte)((ulong)uVar118 >> 0x38) * 0x1b +
                                                   (uint)bVar36 +
                                                   (((uint)uVar24 & 0xff) + ((uint)uVar23 & 0xff) +
                                                   (uint)(byte)((ulong)uVar32 >> 0x38)) * 3) *
                                                   0x40000 + 0x800000) & 0xff000000 |
                                           (long)puVar45 << 0x20;
                                }
                                else {
                                  uVar62 = 0;
                                  fVar110 = 5.74112e-42;
                                }
                                pfVar76 = pfVar43 + lVar50 * 0xc0 + lVar82 * 0x18 + lVar87 * 3;
                                uVar52 = (uint)fVar110 >> 0x10;
                                uVar49 = *(ushort *)((long)pfVar76 + 2);
                                uVar69 = (uint)uVar62;
                                bVar77 = (byte)(uVar62 >> 0x18);
                                fVar111 = (float)(uVar62 >> 0x20);
                                uVar13 = (undefined1)(uVar62 >> 8);
                                uVar14 = (undefined1)(uVar62 >> 0x10);
                                if (0xffff < (uint)fVar110) {
                                  if (uVar49 == 0) {
                                    *pfVar76 = fVar110;
                                    *(char *)(pfVar76 + 1) = (char)uVar62;
                                    *(undefined1 *)((long)pfVar76 + 5) = uVar13;
                                    *(undefined1 *)((long)pfVar76 + 6) = uVar14;
                                    *(byte *)((long)pfVar76 + 7) = bVar77;
                                    pfVar76[2] = fVar111;
                                  }
                                  else {
                                    uVar84 = (uint)uVar49;
                                    uVar2 = uVar52 + uVar84 * 2;
                                    sVar10 = 0;
                                    if (uVar2 != 0) {
                                      sVar10 = (short)((int)((int)SUB42(fVar110,0) * uVar52 +
                                                             (uVar2 >> 1) +
                                                            uVar84 * 2 * (int)*(short *)pfVar76) /
                                                      (int)uVar2);
                                    }
                                    uVar2 = uVar52;
                                    if (uVar52 <= uVar84) {
                                      uVar2 = (uint)uVar49;
                                    }
                                    *(short *)pfVar76 = sVar10;
                                    *(short *)((long)pfVar76 + 2) = (short)uVar2;
                                  }
                                }
                                uVar2 = uVar69 >> 0x18;
                                bVar78 = *(byte *)((long)pfVar76 + 7);
                                if (uVar2 != 0) {
                                  if (bVar78 == 0) {
                                    *(char *)(pfVar76 + 1) = (char)uVar62;
                                    *(undefined1 *)((long)pfVar76 + 5) = uVar13;
                                    *(undefined1 *)((long)pfVar76 + 6) = uVar14;
                                    bVar78 = bVar77;
                                  }
                                  else {
                                    iVar88 = (uint)bVar78 * 2;
                                    uVar84 = iVar88 + (uVar69 >> 0x18);
                                    uVar75 = CONCAT44(uVar69 >> 8,uVar69) & 0xff000000ff;
                                    uVar13 = 0;
                                    if (uVar84 != 0) {
                                      uVar13 = (undefined1)
                                               ((uVar2 * (int)uVar75 +
                                                iVar88 * (uint)*(byte *)(pfVar76 + 1)) / uVar84);
                                    }
                                    uVar14 = 0;
                                    if (uVar84 != 0) {
                                      uVar14 = (undefined1)
                                               ((uVar2 * (int)(uVar75 >> 0x20) +
                                                iVar88 * (uint)*(byte *)((long)pfVar76 + 5)) /
                                               uVar84);
                                    }
                                    uVar15 = 0;
                                    if (uVar84 != 0) {
                                      uVar15 = (undefined1)
                                               (((uVar69 >> 0x10 & 0xff) * uVar2 +
                                                iVar88 * (uint)*(byte *)((long)pfVar76 + 6)) /
                                               uVar84);
                                    }
                                    *(undefined1 *)(pfVar76 + 1) = uVar13;
                                    if (((uint)(uVar62 >> 0x18) & 0xff) <= (uint)bVar78) {
                                      bVar77 = bVar78;
                                    }
                                    *(undefined1 *)((long)pfVar76 + 5) = uVar14;
                                    *(undefined1 *)((long)pfVar76 + 6) = uVar15;
                                    bVar78 = bVar77;
                                  }
                                }
                                *(byte *)((long)pfVar76 + 7) = bVar78;
                                if (uVar49 != 0 && uVar52 != 0) {
                                  uStack_3290 = 0;
                                  uStack_3298 = 0;
                                  uStack_3288 = 0;
                                  if (((uVar62 & 0xff0000000000) != 0) &&
                                     (((uint)fVar111 & 0xff) < 6)) {
                                    uVar75 = uVar62 >> 0x20 & 7;
                                    *(uint *)((long)&uStack_3298 + uVar75 * 4) =
                                         *(int *)((long)&uStack_3298 + uVar75 * 4) +
                                         ((uint)fVar111 >> 8 & 0xff);
                                  }
                                  if ((uVar62 >> 0x38 != 0) &&
                                     (((ushort)(uVar62 >> 0x30) & 0xff) < 6)) {
                                    uVar75 = uVar62 >> 0x30 & 7;
                                    *(uint *)((long)&uStack_3298 + uVar75 * 4) =
                                         *(int *)((long)&uStack_3298 + uVar75 * 4) +
                                         (uint)(byte)(uVar62 >> 0x38);
                                  }
                                  func_0x000109449640(&uStack_3298,pfVar76 + 2,2);
                                  fVar110 = SUB84(&uStack_3298,0);
                                  func_0x00010944968c();
                                  pfVar76[2] = fVar110;
                                }
                              }
                            }
                            lVar87 = lVar87 + 1;
                          } while (lVar87 != 8);
                          lVar82 = lVar82 + 1;
                        } while (lVar82 != 8);
                        lVar50 = lVar50 + 1;
                      } while (lVar50 != 8);
                      pfVar43[0x605] = *(float *)(lVar85 + 0x1814);
                      pfVar43[0x606] = *(float *)(lVar85 + 0x1818);
                      psVar94 = psVar94 + 3;
                    } while (psVar94 != (short *)((long)&uStack_2fd8 + lVar71 * 6));
                  }
                }
                pfVar43 = pfVar98 + 0x14;
                FUN_109449550(pfVar43,plVar42 + 2);
                if ((pfVar43 != (float *)0x0) &&
                   (pfVar43 = *(float **)(pfVar43 + 6), pfVar43 != (float *)0x0))
                goto LAB_109443738;
              }
              pfVar43 = pfVar98;
              FUN_1093a6378(pfVar98,plVar42 + 2);
            }
            else {
              pfVar43 = pfVar98;
              FUN_1093a6378(pfVar98,plVar42 + 2);
            }
          }
LAB_109443738:
          lVar85 = 0;
          uVar118 = *(undefined8 *)(pfVar43 + 0x600);
          fVar111 = pfVar43[0x602];
          fVar115 = *pfVar98;
          fVar112 = fVar115 * 0.5;
          fVar113 = fVar115 * 4.0;
          fVar110 = (float)((ulong)uVar118 >> 0x20);
          pfVar76 = &fStack_3320;
          do {
            fVar122 = pfVar76[-1];
            fVar123 = *pfVar76;
            fVar126 = -fVar122;
            fVar124 = pfVar76[-3];
            fVar128 = pfVar76[-2];
            fVar130 = -(fVar122 * fVar110) + fVar111 * fVar128;
            fVar129 = (float)uVar118;
            fVar131 = -(fVar124 * fVar111) + fVar129 * fVar122;
            fVar127 = -fVar128;
            fVar116 = -(fVar128 * fVar129) + fVar110 * fVar124;
            fVar130 = fVar130 + fVar130;
            fVar131 = fVar131 + fVar131;
            fVar116 = fVar116 + fVar116;
            uVar114 = *(undefined8 *)(pfVar76 + 1);
            fVar120 = fVar122 * -0.0 + fVar128 * 0.0;
            fVar132 = fVar124 * -0.0 + fVar115 * fVar122;
            fVar133 = -(fVar128 * fVar115) + fVar124 * 0.0;
            fVar120 = fVar120 + fVar120;
            fVar132 = fVar132 + fVar132;
            fVar133 = fVar133 + fVar133;
            fVar125 = -(fVar122 * fVar115) + fVar128 * 0.0;
            fVar136 = fVar124 * -0.0 + fVar122 * 0.0;
            fVar134 = fVar128 * -0.0 + fVar115 * fVar124;
            fVar125 = fVar125 + fVar125;
            fVar136 = fVar136 + fVar136;
            fVar134 = fVar134 + fVar134;
            fVar141 = pfVar76[3];
            *(undefined8 *)(auStack_31a0 + lVar85 + 4) = 0;
            *(undefined4 *)((long)&uStack_3198 + lVar85 + 4) = 0;
            *(undefined8 *)((long)&uStack_3178 + lVar85) = 0;
            *(undefined4 *)((long)&fStack_3170 + lVar85) = 0;
            *(float *)((long)&fStack_3104 + lVar85) =
                 fVar123 * fVar133 + 0.0 + fVar127 * fVar120 + fVar124 * fVar132;
            fVar138 = fVar122 * -0.0 + fVar115 * fVar128;
            *(float *)((long)&fStack_3128 + lVar85) =
                 fVar123 * fVar134 + 0.0 + fVar127 * fVar125 + fVar124 * fVar136;
            fVar135 = -(fVar124 * fVar115) + fVar122 * 0.0;
            fVar140 = fVar128 * -0.0 + fVar124 * 0.0;
            fVar138 = fVar138 + fVar138;
            fVar135 = fVar135 + fVar135;
            fVar140 = fVar140 + fVar140;
            *(float *)((long)&fStack_314c + lVar85) =
                 fVar115 + fVar123 * fVar140 + fVar127 * fVar138 + fVar124 * fVar135;
            fVar137 = -(fVar122 * fVar112) + fVar112 * fVar128;
            fVar139 = -(fVar124 * fVar112) + fVar112 * fVar122;
            fVar117 = -(fVar128 * fVar112) + fVar112 * fVar124;
            fVar137 = fVar137 + fVar137;
            fVar139 = fVar139 + fVar139;
            *(ulong *)((long)&uStack_310c + lVar85) =
                 CONCAT44(fVar132 * fVar123 + 0.0 + -(fVar124 * fVar133) + fVar120 * fVar122,
                          fVar115 + fVar120 * fVar123 + fVar126 * fVar132 + fVar133 * fVar128);
            fVar117 = fVar117 + fVar117;
            *(ulong *)((long)&uStack_3130 + lVar85) =
                 CONCAT44(fVar115 + fVar136 * fVar123 + -(fVar124 * fVar134) + fVar125 * fVar122,
                          fVar125 * fVar123 + 0.0 + fVar126 * fVar136 + fVar134 * fVar128);
            *(ulong *)((long)&uStack_3154 + lVar85) =
                 CONCAT44(fVar135 * fVar123 + 0.0 + -(fVar124 * fVar140) + fVar138 * fVar122,
                          fVar138 * fVar123 + 0.0 + fVar126 * fVar135 + fVar140 * fVar128);
            *(ulong *)((long)&uStack_31c0 + lVar85) =
                 CONCAT44(fVar112 + fVar139 * fVar123 + -(fVar124 * fVar117) + fVar137 * fVar122 +
                          (float)((ulong)uVar114 >> 0x20) +
                          fVar110 + fVar131 * fVar123 + -(fVar124 * fVar116) + fVar130 * fVar122,
                          fVar112 + fVar137 * fVar123 + fVar126 * fVar139 + fVar117 * fVar128 +
                          (float)uVar114 +
                          fVar129 + fVar130 * fVar123 + fVar126 * fVar131 + fVar116 * fVar128);
            *(float *)((long)&fStack_31b8 + lVar85) =
                 fVar112 + fVar123 * fVar117 + fVar127 * fVar137 + fVar124 * fVar139 +
                 fVar141 + fVar111 + fVar123 * fVar116 + fVar127 * fVar130 + fVar124 * fVar131;
            fVar124 = (float)((ulong)uStack_3130 >> 0x20);
            fVar127 = (float)((ulong)uStack_310c >> 0x20);
            fVar126 = (float)((ulong)uStack_3154 >> 0x20);
            fVar122 = (float)uStack_31c0;
            fVar128 = fVar122 + ((float)uStack_310c + (float)uStack_3130 + (float)uStack_3154) *
                                fVar113;
            fVar123 = (float)((ulong)uStack_31c0 >> 0x20);
            fVar130 = fVar123 + (fVar127 + fVar124 + fVar126) * fVar113;
            uStack_30e8 = CONCAT44(fVar130,fVar128);
            fStack_30e0 = fStack_31b8 + fVar113 * (fStack_3104 + fStack_3128 + fStack_314c);
            lVar85 = lVar85 + 0xc;
            pfVar76 = pfVar76 + 7;
          } while (lVar85 != 0x24);
          fVar110 = SQRT(fStack_30e0 * fStack_30e0 + fVar128 * fVar128 + fVar130 * fVar130);
          fVar111 = pfVar43[0x606];
          puVar73 = uStack_2fd4;
          piVar44 = uStack_2f98;
          piVar17 = uStack_2f90;
          lVar85 = uStack_2f60;
          uVar62 = uStack_2f50;
          if (fVar110 <= fVar111 * *(float *)(param_1 + 0x2b8)) {
            iVar99 = 0;
            iVar95 = 0;
            iVar90 = 0;
            iVar88 = 0;
            lVar85 = 0;
            if (fVar111 <= fVar110) {
              fVar110 = fVar111;
            }
            pfVar43[0x606] = fVar110;
            uVar118 = NEON_fmov(0x40e00000,4);
            fVar115 = (float)uVar118;
            fStack_3244 = (float)uStack_30f4 * fVar115;
            fVar112 = (float)((ulong)uVar118 >> 0x20);
            fStack_3240 = (float)((ulong)uStack_30f4 >> 0x20) * fVar112;
            fVar128 = (float)uStack_3118 * fVar115;
            fVar130 = (float)((ulong)uStack_3118 >> 0x20) * fVar112;
            fVar113 = fStack_3110 * 7.0;
            uStack_3280 = uStack_31a8;
            fVar110 = (float)uStack_31a8;
            afStack_3278[1] = fVar110 + fStack_3244;
            fVar111 = (float)((ulong)uStack_31a8 >> 0x20);
            afStack_3278[2] = fVar111 + fStack_3240;
            afStack_3278[3] = (float)auStack_31a0._0_4_ + fStack_30ec * 7.0;
            afStack_3278[0] = (float)auStack_31a0._0_4_;
            uStack_3268 = CONCAT44(fVar111 + fVar130,fVar110 + fVar128);
            fStack_325c = afStack_3278[1] + fVar128;
            fStack_3258 = afStack_3278[2] + fVar130;
            fStack_3260 = (float)auStack_31a0._0_4_ + fVar113;
            fStack_3254 = afStack_3278[3] + fVar113;
            fVar110 = fVar110 + (float)uStack_313c * fVar115;
            fVar111 = fVar111 + (float)((ulong)uStack_313c >> 0x20) * fVar112;
            uStack_3250 = CONCAT44(fVar111,fVar110);
            fStack_3248 = (float)auStack_31a0._0_4_ + fStack_3134 * 7.0;
            fStack_3244 = fStack_3244 + fVar110;
            fStack_3240 = fStack_3240 + fVar111;
            fStack_323c = fStack_30ec * 7.0 + fStack_3248;
            uStack_3238 = CONCAT44(fVar130 + fVar111,fVar128 + fVar110);
            uStack_322c = CONCAT44(fVar130 + fStack_3240,fVar128 + fStack_3244);
            fStack_3230 = fVar113 + fStack_3248;
            fStack_3224 = fVar113 + fStack_323c;
            do {
              puVar73 = (undefined8 *)((long)&uStack_3280 + lVar85);
              fVar110 = *(float *)((long)afStack_3278 + lVar85);
              if (fVar110 < 0.001) {
                iVar95 = iVar88 + 1;
                iVar88 = iVar88 + 1;
              }
              fVar111 = fVar103;
              if (1.1920929e-07 < ABS(fVar110)) {
                fVar111 = 1.0 / fVar110;
              }
              sStack_2f9c = (short)puVar73;
              uStack_2f9a = (undefined2)((ulong)puVar73 >> 0x10);
              uStack_2f98._0_4_ = (float)((ulong)puVar73 >> 0x20);
              auStack_2fa0[0] = SUB42(fVar111,0);
              auStack_2fa0[1] = (ushort)((uint)fVar111 >> 0x10);
              fVar128 = (float)*puVar73;
              fVar131 = (float)((ulong)*puVar73 >> 0x20);
              fVar110 = (float)*(undefined8 *)(param_1 + 0x414);
              fVar113 = (float)((ulong)*(undefined8 *)(param_1 + 0x414) >> 0x20);
              fVar130 = (float)*(undefined8 *)(param_1 + 0x424);
              fVar116 = (float)((ulong)*(undefined8 *)(param_1 + 0x424) >> 0x20);
              iVar101 = iVar90 + 1;
              if ((byte)((-(fVar130 + fVar128 * fVar111 * fVar110 <
                           (float)*(undefined8 *)(param_1 + 0x404) + fVar119) & 1U) +
                         (-(fVar116 + fVar131 * fVar111 * fVar113 <
                           (float)((ulong)*(undefined8 *)(param_1 + 0x404) >> 0x20) + fVar121) & 2U)
                        + (-(0.0 <= fVar130 + fVar128 * fVar111 * fVar110) & 4U) +
                          (-(0.0 <= fVar116 + fVar131 * fVar111 * fVar113) & 8U)) != '\x0f') {
                iVar90 = iVar90 + 1;
                iVar99 = iVar101;
              }
              lVar85 = lVar85 + 0xc;
            } while (lVar85 != 0x60);
            lVar85 = 0;
            fVar110 = (float)CONCAT22(uStack_31b2,sStack_31b4);
            uStack_3220 = CONCAT17(bStack_31ad,
                                   CONCAT16(bStack_31ae,
                                            CONCAT15(bStack_31af,CONCAT14(bStack_31b0,fVar110))));
            fStack_31e4 = (float)uStack_3100 * fVar115;
            fStack_31e0 = (float)((ulong)uStack_3100 >> 0x20) * fVar112;
            fVar128 = (float)uStack_3124 * fVar115;
            fVar130 = (float)((ulong)uStack_3124 >> 0x20) * fVar112;
            fVar113 = fStack_311c * 7.0;
            afStack_3218[1] = fVar110 + fStack_31e4;
            fVar111 = (float)((ulong)uStack_3220 >> 0x20);
            afStack_3218[2] = fVar111 + fStack_31e0;
            afStack_3218[3] = fStack_31ac + fStack_30f8 * 7.0;
            afStack_3218[0] = fStack_31ac;
            uStack_3208 = CONCAT44(fVar111 + fVar130,fVar110 + fVar128);
            fStack_31fc = afStack_3218[1] + fVar128;
            fStack_31f8 = afStack_3218[2] + fVar130;
            fStack_3200 = fStack_31ac + fVar113;
            fStack_31f4 = afStack_3218[3] + fVar113;
            fVar110 = fVar110 + (float)uStack_3148 * fVar115;
            fVar111 = fVar111 + (float)((ulong)uStack_3148 >> 0x20) * fVar112;
            uStack_31f0 = CONCAT44(fVar111,fVar110);
            fStack_31e8 = fStack_31ac + fStack_3140 * 7.0;
            fStack_31e4 = fStack_31e4 + fVar110;
            fStack_31e0 = fStack_31e0 + fVar111;
            fStack_31dc = fStack_30f8 * 7.0 + fStack_31e8;
            uStack_31d8 = CONCAT44(fVar130 + fVar111,fVar128 + fVar110);
            uStack_31cc = CONCAT44(fVar130 + fStack_31e0,fVar128 + fStack_31e4);
            fStack_31d0 = fVar113 + fStack_31e8;
            fStack_31c4 = fVar113 + fStack_31dc;
            do {
              puVar73 = (undefined8 *)((long)&uStack_3220 + lVar85);
              fVar110 = *(float *)((long)afStack_3218 + lVar85);
              if (fVar110 < 0.001) {
                iVar95 = iVar88 + 1;
              }
              if (fVar110 < 0.001) {
                iVar88 = iVar88 + 1;
              }
              fVar111 = fVar103;
              if (1.1920929e-07 < ABS(fVar110)) {
                fVar111 = 1.0 / fVar110;
              }
              auStack_2fa0[0] = SUB42(fVar111,0);
              auStack_2fa0[1] = (ushort)((uint)fVar111 >> 0x10);
              sStack_2f9c = (short)puVar73;
              uStack_2f9a = (undefined2)((ulong)puVar73 >> 0x10);
              uStack_2f98._0_4_ = (float)((ulong)puVar73 >> 0x20);
              fVar128 = (float)*puVar73;
              fVar131 = (float)((ulong)*puVar73 >> 0x20);
              fVar110 = (float)*(undefined8 *)(param_1 + 900);
              fVar113 = (float)((ulong)*(undefined8 *)(param_1 + 900) >> 0x20);
              fVar130 = (float)*(undefined8 *)(param_1 + 0x394);
              fVar116 = (float)((ulong)*(undefined8 *)(param_1 + 0x394) >> 0x20);
              iVar101 = iVar90 + 1;
              if ((byte)((-(fVar130 + fVar128 * fVar111 * fVar110 <
                           (float)*(undefined8 *)(param_1 + 0x374) + fVar119) & 1U) +
                         (-(fVar116 + fVar131 * fVar111 * fVar113 <
                           (float)((ulong)*(undefined8 *)(param_1 + 0x374) >> 0x20) + fVar121) & 2U)
                        + (-(0.0 <= fVar130 + fVar128 * fVar111 * fVar110) & 4U) +
                          (-(0.0 <= fVar116 + fVar131 * fVar111 * fVar113) & 8U)) != '\x0f') {
                iVar90 = iVar90 + 1;
                iVar99 = iVar101;
              }
              lVar85 = lVar85 + 0xc;
            } while (lVar85 != 0x60);
            lVar71 = 0;
            fStack_2f64 = (float)uStack_310c * fVar115;
            fVar127 = fVar127 * fVar112;
            uStack_2f50._4_4_ = (float)uStack_3130 * fVar115;
            fVar124 = fVar124 * fVar112;
            fVar110 = fStack_3128 * 7.0;
            auStack_2fa0[0] = (ushort)uStack_31c0;
            auStack_2fa0[1] = (ushort)((ulong)uStack_31c0 >> 0x10);
            sStack_2f9c = (short)((ulong)uStack_31c0 >> 0x20);
            uStack_2f9a = (undefined2)((ulong)uStack_31c0 >> 0x30);
            uStack_2f98._4_4_ = fVar122 + fStack_2f64;
            uStack_2f90._0_4_ = fVar123 + fVar127;
            uStack_2f90._4_4_ = fStack_3104 * 7.0 + fStack_31b8;
            uStack_2f98._0_4_ = fStack_31b8;
            piVar44 = (int *)CONCAT44(uStack_2f98._4_4_,fStack_31b8);
            piVar17 = (int *)CONCAT44(uStack_2f90._4_4_,(float)uStack_2f90);
            auStack_2f88 = (undefined1  [8])CONCAT44(fVar123 + fVar124,fVar122 + uStack_2f50._4_4_);
            afStack_2f7c[0] = uStack_2f98._4_4_ + uStack_2f50._4_4_;
            afStack_2f7c[1] = (float)uStack_2f90 + fVar124;
            fStack_2f80 = fVar110 + fStack_31b8;
            afStack_2f7c[2] = fVar110 + uStack_2f90._4_4_;
            fVar122 = fVar122 + (float)uStack_3154 * fVar115;
            fVar123 = fVar123 + fVar126 * fVar112;
            uStack_2f70 = CONCAT44(fVar123,fVar122);
            fStack_2f68 = fStack_31b8 + fStack_314c * 7.0;
            fStack_2f64 = fStack_2f64 + fVar122;
            uStack_2f60._0_4_ = fVar127 + fVar123;
            uStack_2f60._4_4_ = fStack_3104 * 7.0 + fStack_2f68;
            lVar85 = CONCAT44(uStack_2f60._4_4_,(float)uStack_2f60);
            auStack_2f58 = (undefined1  [8])CONCAT44(fVar124 + fVar123,uStack_2f50._4_4_ + fVar122);
            uStack_2f50._0_4_ = fVar110 + fStack_2f68;
            uStack_2f50._4_4_ = uStack_2f50._4_4_ + fStack_2f64;
            fStack_2f48 = fVar124 + (float)uStack_2f60;
            uVar62 = CONCAT44(uStack_2f50._4_4_,(float)uStack_2f50);
            fStack_2f44 = fVar110 + uStack_2f60._4_4_;
            uVar118 = *(undefined8 *)(param_1 + 0x2e4);
            do {
              puVar73 = (undefined8 *)((long)auStack_2fa0 + lVar71);
              fVar110 = *(float *)((long)&uStack_2f98 + lVar71);
              if (fVar110 < 0.001) {
                iVar95 = iVar88 + 1;
              }
              if (fVar110 < 0.001) {
                iVar88 = iVar88 + 1;
              }
              uStack_2fd8 = fVar103;
              if (1.1920929e-07 < ABS(fVar110)) {
                uStack_2fd8 = 1.0 / fVar110;
              }
              uStack_2fd4._0_4_ = SUB84(puVar73,0);
              uStack_2fd4._4_4_ = (undefined4)((ulong)puVar73 >> 0x20);
              fVar115 = (float)*puVar73;
              fVar112 = (float)((ulong)*puVar73 >> 0x20);
              fVar110 = (float)*(undefined8 *)(param_1 + 0x2f4);
              fVar111 = (float)((ulong)*(undefined8 *)(param_1 + 0x2f4) >> 0x20);
              fVar113 = (float)*(undefined8 *)(param_1 + 0x304);
              fVar122 = (float)((ulong)*(undefined8 *)(param_1 + 0x304) >> 0x20);
              iVar101 = iVar90 + 1;
              if ((byte)((-(fVar113 + fVar115 * uStack_2fd8 * fVar110 < (float)uVar118 + fVar119) &
                         1U) + (-(fVar122 + fVar112 * uStack_2fd8 * fVar111 <
                                 (float)((ulong)uVar118 >> 0x20) + fVar121) & 2U) +
                        (-(0.0 <= fVar113 + fVar115 * uStack_2fd8 * fVar110) & 4U) +
                        (-(0.0 <= fVar122 + fVar112 * uStack_2fd8 * fVar111) & 8U)) != '\x0f') {
                iVar90 = iVar90 + 1;
                iVar99 = iVar101;
              }
              lVar71 = lVar71 + 0xc;
            } while (lVar71 != 0x60);
            uStack_2fd4 = puVar73;
            if ((iVar99 == 0) && (*(int *)(param_1 + 0x2cc) != 0)) {
              if (iVar95 < 1) {
                auStack_2fa0[0] = (ushort)param_2;
                auStack_2fa0[1] = (ushort)((ulong)param_2 >> 0x10);
                sStack_2f9c = (short)((ulong)param_2 >> 0x20);
                uStack_2f9a = (undefined2)((ulong)param_2 >> 0x30);
                uStack_2f98 = piVar70;
                uStack_2f90 = param_2 + 0x1c;
                FUN_1098ede10(&uStack_32d8,auStack_2fa0,&uStack_31c0,pfVar43);
                piVar44 = uStack_2f98;
                piVar17 = uStack_2f90;
                uStack_2f60 = CONCAT44(uStack_2f60._4_4_,(float)uStack_2f60);
                uStack_2f50 = CONCAT44(uStack_2f50._4_4_,(float)uStack_2f50);
LAB_109444468:
                pfVar43[0x605] = (float)((int)pfVar43[0x605] + 1);
                auStack_2fa0[0] = (ushort)(int)plVar42[2];
                auStack_2fa0[1] = (ushort)((uint)(int)plVar42[2] >> 0x10);
                sStack_2f9c = *(short *)((long)plVar42 + 0x14);
                uStack_2f98 = piVar44;
                uStack_2f90 = piVar17;
                if (*(ulong *)(pfVar98 + 0x50) <= *(long *)(pfVar98 + 0x4c) + 1U) {
                  FUN_109447dac(pfVar98 + 0x4a,*(long *)(pfVar98 + 0x4e) << 1);
                }
                uVar69 = (short)auStack_2fa0[0] * 0x466f45d + (short)auStack_2fa0[1] * 0x12740a5 +
                         sStack_2f9c * 0x4f9ffb7;
                uVar52 = uVar69 & 0x7fffffff;
                if ((uVar69 & 0x7ffffffe) == 0) {
                  uVar52 = 1;
                }
                FUN_109447e94(pfVar98 + 0x4a,auStack_2fa0,uVar52);
                puVar73 = uStack_2fd4;
                piVar44 = uStack_2f98;
                piVar17 = uStack_2f90;
                lVar85 = uStack_2f60;
                uVar62 = uStack_2f50;
              }
            }
            else if ((iVar95 < 1) && (iVar99 != 0x18)) {
              uStack_2f60 = lVar85;
              uStack_2f50 = uVar62;
              if (*(int *)(param_1 + 0x2cc) != 2) {
                iVar88 = 0;
                pfVar76 = pfVar43;
                lVar85 = CONCAT44(uStack_2f60._4_4_,(float)uStack_2f60);
                uVar62 = CONCAT44(uStack_2f50._4_4_,(float)uStack_2f50);
                do {
                  lVar71 = 3;
                  puVar64 = (undefined4 *)((long)&uStack_3198 + 4);
                  do {
                    *(undefined8 *)(puVar64 + -2) = *(undefined8 *)(puVar64 + -0xb);
                    *puVar64 = puVar64[-9];
                    lVar71 = lVar71 + -1;
                    puVar64 = puVar64 + 3;
                  } while (lVar71 != 0);
                  iVar90 = 0;
                  do {
                    lVar71 = 3;
                    puVar64 = (undefined4 *)((long)&uStack_3198 + 4);
                    do {
                      *(undefined8 *)(puVar64 + 7) = *(undefined8 *)(puVar64 + -2);
                      puVar64[9] = *puVar64;
                      puVar64 = puVar64 + 3;
                      lVar71 = lVar71 + -1;
                    } while (lVar71 != 0);
                    iVar95 = 0;
                    do {
                      afStack_3218[0] = fStack_3170;
                      uStack_3220 = uStack_3178;
                      if (0.001 < fStack_3170) {
                        fVar110 = fVar103;
                        if (1.1920929e-07 < ABS(fStack_3170)) {
                          fVar110 = 1.0 / fStack_3170;
                        }
                        auStack_2fa0[0] = SUB42(fVar110,0);
                        auStack_2fa0[1] = (ushort)((uint)fVar110 >> 0x10);
                        sStack_2f9c = (short)&uStack_3220;
                        uStack_2f9a = (undefined2)((ulong)&uStack_3220 >> 0x10);
                        uStack_2f98._0_4_ = (float)((ulong)&uStack_3220 >> 0x20);
                        iVar99 = (int)(*(float *)(param_1 + 0x304) +
                                      (float)uStack_3178 * fVar110 * *(float *)(param_1 + 0x2f4));
                        if (((-1 < iVar99) &&
                            (iVar101 = (int)(*(float *)(param_1 + 0x308) +
                                            *(float *)(param_1 + 0x2f8) *
                                            (float)((ulong)uStack_3178 >> 0x20) * fVar110),
                            -1 < iVar101)) && (iVar99 < *param_2 && iVar101 < param_2[1])) {
                          fVar110 = (float)NEON_ucvtf((uint)*(ushort *)
                                                             (*(long *)(param_2 + 4) +
                                                             (long)(iVar99 + param_2[2] * iVar101) *
                                                             2));
                          fVar110 = fVar110 * 0.001;
                          bVar37 = false;
                          bVar38 = false;
                          bVar41 = false;
                          if (fVar107 <= fVar110) {
                            bVar37 = false;
                            bVar38 = false;
                            bVar41 = true;
                            if (!NAN(fVar110) && !NAN(fVar108)) {
                              bVar37 = fVar110 < fVar108;
                              bVar38 = fVar110 == fVar108;
                              bVar41 = false;
                            }
                          }
                          fVar110 = fVar110 - fStack_3170;
                          bVar39 = false;
                          bVar40 = false;
                          if (bVar38 || bVar37 != bVar41) {
                            bVar39 = false;
                            bVar40 = true;
                            if (!NAN(fVar110) && !NAN(fVar109)) {
                              bVar39 = fVar110 == fVar109;
                              bVar40 = fVar109 <= fVar110;
                            }
                          }
                          if (bVar40 && !bVar39) {
                            fVar110 = fVar104 * fVar110;
                            fVar111 = 4096.0;
                            if (fVar110 <= 1.0) {
                              fVar111 = fVar110 * 4096.0;
                            }
                            uVar49 = *(ushort *)((long)pfVar76 + 2);
                            iVar99 = uVar49 + 1;
                            sVar10 = 0;
                            if (iVar99 != 0) {
                              sVar10 = (short)((int)((int)fVar111 +
                                                    (uint)uVar49 * (int)*(short *)pfVar76) / iVar99)
                              ;
                            }
                            *(short *)pfVar76 = sVar10;
                            if ((int)(uint)uVar49 < (int)sVar9) {
                              *(short *)((long)pfVar76 + 2) = (short)iVar99;
                            }
                            fVar111 = ABS(fVar110);
                            bVar37 = false;
                            bVar38 = true;
                            if (fVar110 <= 1.0) {
                              bVar37 = false;
                              bVar38 = true;
                              if (!NAN(fVar111)) {
                                bVar37 = fVar111 == 0.5;
                                bVar38 = 0.5 <= fVar111;
                              }
                            }
                            if (!bVar38 || bVar37) {
                              uStack_2f60 = lVar85;
                              uStack_2f50 = uVar62;
                              uStack_2fd4 = puVar73;
                              if (((param_2[0x1c] != 0) && (param_2[0x1d] != 0)) &&
                                 (0.001 < fStack_3158)) {
                                fVar110 = fVar103;
                                if (1.1920929e-07 < ABS(fStack_3158)) {
                                  fVar110 = 1.0 / fStack_3158;
                                }
                                auStack_2fa0[0] = SUB42(fVar110,0);
                                auStack_2fa0[1] = (ushort)((uint)fVar110 >> 0x10);
                                sStack_2f9c = (short)&uStack_3160;
                                uStack_2f9a = (undefined2)((ulong)&uStack_3160 >> 0x10);
                                uStack_2f98._0_4_ = (float)((ulong)&uStack_3160 >> 0x20);
                                iVar99 = (int)(*(float *)(param_1 + 0x424) +
                                              (float)uStack_3160 * fVar110 *
                                              *(float *)(param_1 + 0x414));
                                if (((iVar99 < param_2[0x1c]) && (-1 < iVar99)) &&
                                   ((iVar101 = (int)(*(float *)(param_1 + 0x428) +
                                                    *(float *)(param_1 + 0x418) *
                                                    (float)((ulong)uStack_3160 >> 0x20) * fVar110),
                                    -1 < iVar101 && (iVar101 < param_2[0x1d])))) {
                                  bVar78 = *(byte *)(*(long *)(param_2 + 0x20) +
                                                    (long)(iVar99 + param_2[0x1e] * iVar101));
                                  bVar77 = 0;
                                  if (bVar78 < 6) {
                                    bVar77 = bVar78;
                                  }
                                  func_0x000109449738(pfVar76 + 2,bVar77);
                                }
                              }
                              lVar85 = uStack_2f60;
                              uVar62 = uStack_2f50;
                              puVar73 = uStack_2fd4;
                              if (0.001 < fStack_3164) {
                                fVar110 = fVar103;
                                if (1.1920929e-07 < fStack_3164) {
                                  fVar110 = 1.0 / fStack_3164;
                                }
                                auStack_2fa0[0] = SUB42(fVar110,0);
                                auStack_2fa0[1] = (ushort)((uint)fVar110 >> 0x10);
                                sStack_2f9c = (short)&sStack_316c;
                                uStack_2f9a = (undefined2)((ulong)&sStack_316c >> 0x10);
                                uStack_2f98._0_4_ = (float)((ulong)&sStack_316c >> 0x20);
                                fVar111 = *(float *)(param_1 + 0x394) +
                                          (float)CONCAT22(uStack_316a,sStack_316c) * fVar110 *
                                          *(float *)(param_1 + 900);
                                fVar110 = *(float *)(param_1 + 0x398) +
                                          *(float *)(param_1 + 0x388) *
                                          (float)(CONCAT17(bStack_3165,
                                                           CONCAT16(bStack_3166,
                                                                    CONCAT15(bStack_3167,
                                                                             CONCAT14(bStack_3168,
                                                                                      CONCAT22(
                                                  uStack_316a,sStack_316c))))) >> 0x20) * fVar110;
                                if (iVar80 == 1) {
                                  uVar52 = (uint)fVar111;
                                  if (((-1 < (int)uVar52) &&
                                      (uVar69 = (uint)fVar110, -1 < (int)uVar69)) &&
                                     (((int)uVar52 < *piVar70 + -1 &&
                                      ((int)uVar69 < param_2[0xf] + -1)))) {
                                    fStack_2ef0 = fVar111 - (float)uVar52;
                                    auStack_2f88 = (undefined1  [8])
                                                   (*(long *)(param_2 + 0x12) +
                                                    (ulong)uVar52 * 2 + (ulong)uVar52 +
                                                   (long)param_2[0x10] * 3 * (long)(int)uVar69);
                                    lStack_2e78 = (long)auStack_2f88 + 3;
                                    afStack_2f20[0] = fVar110 - (float)uVar69;
                                    lStack_2f08 = (long)auStack_2f88 + (long)param_2[0x10] * 3;
                                    lStack_2ee0 = lStack_2f08 + 3;
                                    uStack_2f70 = CONCAT44(uStack_2f70._4_4_,fStack_2ef0);
                                    lStack_2ed0 = lStack_2f08;
                                    uStack_2ea0 = (ulong)auStack_2f88;
                                    fStack_2e88 = fStack_2ef0;
                                    uStack_2e68 = (ulong)auStack_2f88;
                                    uStack_2f60 = lStack_2e78;
                                    uStack_2f50 = (ulong)auStack_2f88;
                                    func_0x0001094497d0(&uStack_3280,auStack_2fa0,&uStack_2fd8);
                                    bVar77 = *(byte *)((long)pfVar76 + 7);
                                    uVar52 = bVar77 + 1;
                                    uVar13 = 0;
                                    if (uVar52 != 0) {
                                      uVar13 = (undefined1)
                                               (((uint)(byte)uStack_3280 +
                                                 (uint)*(byte *)(pfVar76 + 1) * (uint)bVar77 &
                                                0xffff) / uVar52);
                                    }
                                    uVar69 = (uint)bVar77;
                                    uVar14 = 0;
                                    if (uVar52 != 0) {
                                      uVar14 = (undefined1)
                                               (((uint)uStack_3280._1_1_ +
                                                 *(byte *)((long)pfVar76 + 5) * uVar69 & 0xffff) /
                                               uVar52);
                                    }
                                    *(undefined1 *)(pfVar76 + 1) = uVar13;
                                    *(undefined1 *)((long)pfVar76 + 5) = uVar14;
                                    uVar13 = 0;
                                    if (uVar52 != 0) {
                                      uVar13 = (undefined1)
                                               (((uint)uStack_3280._2_1_ +
                                                 *(byte *)((long)pfVar76 + 6) * uVar69 & 0xffff) /
                                               uVar52);
                                    }
                                    *(undefined1 *)((long)pfVar76 + 6) = uVar13;
                                    lVar85 = uStack_2f60;
                                    uVar62 = uStack_2f50;
                                    puVar73 = uStack_2fd4;
                                    if ((int)uVar69 < (int)sVar11) {
                                      *(char *)((long)pfVar76 + 7) = (char)uVar52;
                                    }
                                  }
                                }
                                else {
                                  iVar99 = (int)fVar111;
                                  if (((-1 < iVar99) && (iVar101 = (int)fVar110, -1 < iVar101)) &&
                                     (iVar99 < param_2[0xe] && iVar101 < param_2[0xf])) {
                                    uVar52 = iVar99 + param_2[0x10] * iVar101;
                                    pbVar4 = (byte *)(*(long *)(param_2 + 0x12) +
                                                     (-(ulong)(uVar52 >> 0x1f) & 0xfffffffe00000000
                                                     | (ulong)uVar52 << 1) + (long)(int)uVar52);
                                    bVar77 = pbVar4[2];
                                    bVar78 = *(byte *)((long)pfVar76 + 7);
                                    uVar52 = bVar78 + 1;
                                    uVar13 = 0;
                                    if (uVar52 != 0) {
                                      uVar13 = (undefined1)
                                               (((uint)*pbVar4 +
                                                 (uint)*(byte *)(pfVar76 + 1) * (uint)bVar78 &
                                                0xffff) / uVar52);
                                    }
                                    uVar69 = (uint)bVar78;
                                    uVar14 = 0;
                                    if (uVar52 != 0) {
                                      uVar14 = (undefined1)
                                               (((uint)pbVar4[1] +
                                                 *(byte *)((long)pfVar76 + 5) * uVar69 & 0xffff) /
                                               uVar52);
                                    }
                                    *(undefined1 *)(pfVar76 + 1) = uVar13;
                                    uVar13 = 0;
                                    if (uVar52 != 0) {
                                      uVar13 = (undefined1)
                                               (((uint)bVar77 +
                                                 *(byte *)((long)pfVar76 + 6) * uVar69 & 0xffff) /
                                               uVar52);
                                    }
                                    *(undefined1 *)((long)pfVar76 + 5) = uVar14;
                                    *(undefined1 *)((long)pfVar76 + 6) = uVar13;
                                    if ((int)uVar69 < (int)sVar11) {
                                      *(char *)((long)pfVar76 + 7) = (char)uVar52;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      lVar71 = 3;
                      pfVar65 = &fStack_3104;
                      do {
                        *(ulong *)(pfVar65 + -0x1d) =
                             CONCAT44((float)((ulong)*(undefined8 *)(pfVar65 + -2) >> 0x20) +
                                      (float)((ulong)*(undefined8 *)(pfVar65 + -0x1d) >> 0x20),
                                      (float)*(undefined8 *)(pfVar65 + -2) +
                                      (float)*(undefined8 *)(pfVar65 + -0x1d));
                        pfVar65[-0x1b] = *pfVar65 + pfVar65[-0x1b];
                        pfVar65 = pfVar65 + 3;
                        lVar71 = lVar71 + -1;
                      } while (lVar71 != 0);
                      iVar95 = iVar95 + 1;
                      pfVar76 = pfVar76 + 3;
                    } while (iVar95 != 8);
                    lVar71 = 3;
                    pfVar65 = &fStack_3128;
                    do {
                      *(ulong *)(pfVar65 + -0x1d) =
                           CONCAT44((float)((ulong)*(undefined8 *)(pfVar65 + -2) >> 0x20) +
                                    (float)((ulong)*(undefined8 *)(pfVar65 + -0x1d) >> 0x20),
                                    (float)*(undefined8 *)(pfVar65 + -2) +
                                    (float)*(undefined8 *)(pfVar65 + -0x1d));
                      pfVar65[-0x1b] = *pfVar65 + pfVar65[-0x1b];
                      pfVar65 = pfVar65 + 3;
                      lVar71 = lVar71 + -1;
                    } while (lVar71 != 0);
                    iVar90 = iVar90 + 1;
                  } while (iVar90 != 8);
                  puVar66 = &uStack_31c0;
                  lVar71 = 3;
                  uStack_2fd4 = puVar73;
                  uStack_2f60 = lVar85;
                  uStack_2f50 = uVar62;
                  do {
                    *puVar66 = CONCAT44((float)((ulong)*(undefined8 *)((long)puVar66 + 0x6c) >> 0x20
                                               ) + (float)((ulong)*puVar66 >> 0x20),
                                        (float)*(undefined8 *)((long)puVar66 + 0x6c) +
                                        (float)*puVar66);
                    *(float *)(puVar66 + 1) =
                         *(float *)((long)puVar66 + 0x74) + *(float *)(puVar66 + 1);
                    piVar17 = (int *)CONCAT44(uStack_2f90._4_4_,(float)uStack_2f90);
                    piVar44 = (int *)CONCAT44(uStack_2f98._4_4_,(float)uStack_2f98);
                    puVar66 = (undefined8 *)((long)puVar66 + 0xc);
                    lVar71 = lVar71 + -1;
                  } while (lVar71 != 0);
                  iVar88 = iVar88 + 1;
                  puVar73 = uStack_2fd4;
                  lVar85 = uStack_2f60;
                  uVar62 = uStack_2f50;
                } while (iVar88 != 8);
              }
              goto LAB_109444468;
            }
          }
          plVar42 = (long *)*plVar42;
        } while (plVar42 != (long *)0x0);
      }
      uStack_2fd4 = puVar73;
      uStack_2f98 = piVar44;
      uStack_2f90 = piVar17;
      uStack_2f60 = lVar85;
      uStack_2f50 = uVar62;
      __ZNSt3__19to_stringEi(auStack_2fa0,lVar60);
      puVar47 = auStack_2fa0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar47,0,&UNK_10f56d97a,0x25);
      puVar47[0] = 0;
      puVar47[1] = 0;
      puVar47[2] = 0;
      puVar47[3] = 0;
      puVar47[4] = 0;
      puVar47[5] = 0;
      puVar47[6] = 0;
      puVar47[7] = 0;
      puVar47[8] = 0;
      puVar47[9] = 0;
      puVar47[10] = 0;
      puVar47[0xb] = 0;
      if (*(char *)((long)puVar47 + 0x17) < '\0') {
        __ZdlPv(*(undefined8 *)puVar47);
      }
      if ((long)uStack_2f90 < 0) {
        __ZdlPv(CONCAT26(uStack_2f9a,CONCAT24(sStack_2f9c,CONCAT22(auStack_2fa0[1],auStack_2fa0[0]))
                        ));
      }
      __ZNSt3__19to_stringEi(auStack_2fa0,lVar60);
      puVar46 = auStack_2fa0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar46,0,&UNK_10f56d9a0,0x21);
      puVar47 = *(ushort **)puVar46;
      puVar46[0] = 0;
      puVar46[1] = 0;
      puVar46[2] = 0;
      puVar46[3] = 0;
      puVar46[4] = 0;
      puVar46[5] = 0;
      puVar46[6] = 0;
      puVar46[7] = 0;
      puVar46[8] = 0;
      puVar46[9] = 0;
      puVar46[10] = 0;
      puVar46[0xb] = 0;
      if (*(char *)((long)puVar46 + 0x17) < '\0') {
        __ZdlPv();
      }
      if ((long)uStack_2f90 < 0) {
        puVar47 = (ushort *)
                  CONCAT26(uStack_2f9a,
                           CONCAT24(sStack_2f9c,CONCAT22(auStack_2fa0[1],auStack_2fa0[0])));
        __ZdlPv();
      }
      bVar37 = lVar60 != 0;
      lVar60 = lVar60 + -1;
    } while (bVar37);
  }
  else {
    auStack_2fa0[0] = 0;
    auStack_2fa0[1] = 0;
    sStack_2f9c = 0;
    uStack_2f9a = 0;
    fStack_2f48 = 0.0;
    fStack_2f44 = 0.0;
    auStack_2f88 = (undefined1  [8])0x0;
    uStack_2f90._0_4_ = 0.0;
    uStack_2f90._4_4_ = 0.0;
    afStack_2f7c[1] = 0.0;
    afStack_2f7c[2] = 0.0;
    fStack_2f80 = 0.0;
    afStack_2f7c[0] = 0.0;
    fStack_2f68 = 0.0;
    fStack_2f64 = 0.0;
    uStack_2f70 = 0;
    auStack_2f58 = (undefined1  [8])0x0;
    uStack_2f60._0_4_ = 0.0;
    uStack_2f60._4_4_ = 0.0;
    uStack_2f50._0_4_ = 0.0;
    FUN_1099a9f0c(auStack_2fa0,&UNK_10f56d808,0x101,1,FUN_1099aa768,0);
    FUN_1092b4db8(CONCAT44(uStack_2f98._4_4_,(float)uStack_2f98) + 0x7540,&UNK_10f56d8da,0x18);
LAB_109441984:
    puVar47 = auStack_2fa0;
    FUN_1099ab3b0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_bc._4_8_) {
    return puVar47;
  }
  ___stack_chk_fail();
  FUN_1099ab3b0(auStack_2fa0);
  __Unwind_Resume(puVar47);
  FUN_10939cea4(puVar47 + 0x44);
  FUN_10939cea4(puVar47 + 0x28);
  FUN_10939cea4(puVar47 + 0xc);
  return puVar47;
}



/* Entry: 1094446b8; end: 10944483b;  */

long FUN_1094446b8(long param_1)

{
  FUN_10939cea4(param_1 + 0x88);
  FUN_10939cea4(param_1 + 0x50);
  FUN_10939cea4(param_1 + 0x18);
  return param_1;
}



/* Entry: 10944483c; end: 109444887;  */

undefined8 *
FUN_10944483c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 5) = param_4;
  FUN_109444888();
  return param_1;
}



/* Entry: 109444888; end: 1094448db;  */

void FUN_109444888(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 4);
  lVar3 = param_1;
  FUN_1094448dc();
  if (iVar2 * iVar1 != (int)lVar3) {
    FUN_109444944(param_1,(long)(int)lVar3);
    plVar4 = *(long **)(param_1 + 0x18);
    (**(code **)(*plVar4 + 0x10))();
    *(long **)(param_1 + 0x10) = plVar4;
  }
  return;
}



/* Entry: 1094448dc; end: 109444943;  */

int FUN_1094448dc(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *param_2;
  *param_1 = uVar5;
  uVar4 = param_2[1];
  param_1[1] = uVar4;
  uVar1 = param_1[0xc];
  if (uVar1 != 0) {
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = uVar4 / uVar1;
    }
    iVar2 = uVar4 - uVar3 * uVar1;
    if (iVar2 != 0) {
      uVar4 = (uVar1 + uVar4) - iVar2;
    }
  }
  if (param_3 != 0) {
    uVar5 = param_3;
  }
  uVar1 = param_1[0xb];
  if (uVar1 != 0) {
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = uVar5 / uVar1;
    }
    iVar2 = uVar5 - uVar3 * uVar1;
    if (iVar2 != 0) {
      uVar5 = (uVar1 + uVar5) - iVar2;
    }
  }
  param_1[2] = uVar5;
  param_1[3] = uVar5 * 2;
  return uVar5 * 2 * uVar4;
}



/* Entry: 109444944; end: 109444adf;  */

void FUN_109444944(long param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_50 [8];
  long *plStack_48;
  long *plStack_40;
  undefined1 uStack_31;
  
  plVar6 = (long *)(param_1 + 0x18);
  plVar4 = (long *)*plVar6;
  plStack_40 = param_2;
  if ((plVar4 == (long *)0x0) || ((**(code **)(*plVar4 + 0x18))(), plVar4 != param_2)) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 3) {
      FUN_109444e00(auStack_50,&uStack_31,&plStack_40);
      func_0x000109444b44(plVar6,auStack_50);
      if (plStack_48 == (long *)0x0) {
        return;
      }
      plVar4 = plStack_48 + 1;
      do {
        lVar5 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_48;
      } while (cVar2 != '\0');
    }
    else {
      if (iVar1 == 2) {
        FUN_109444c0c(auStack_50,&uStack_31,&plStack_40);
        FUN_109444ae0(plVar6,auStack_50);
        if (plStack_48 != (long *)0x0) {
          plVar4 = plStack_48 + 1;
          do {
            lVar5 = *plVar4;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plStack_48 + 0x10))(plStack_48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
          }
        }
        *(undefined4 *)(param_1 + 0x28) = 1;
        return;
      }
      if (iVar1 == 1) {
        FUN_109444c0c(auStack_50,&uStack_31,&plStack_40);
        FUN_109444ae0(plVar6,auStack_50);
        if (plStack_48 == (long *)0x0) {
          return;
        }
        plVar4 = plStack_48 + 1;
        do {
          lVar5 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar6 = plStack_48;
        } while (cVar2 != '\0');
      }
      else {
        FUN_109444f68(auStack_50,&uStack_31,&plStack_40);
        func_0x000109444ba8(plVar6,auStack_50);
        if (plStack_48 == (long *)0x0) {
          return;
        }
        plVar4 = plStack_48 + 1;
        do {
          lVar5 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar6 = plStack_48;
        } while (cVar2 != '\0');
      }
    }
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 109444ae0; end: 109444c0b;  */

undefined8 * FUN_109444ae0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 109444c0c; end: 109444c63;  */

void FUN_109444c0c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x48;
  __Znwm();
  FUN_109444c64();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 109444c64; end: 109444ccf;  */

undefined8 * FUN_109444c64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110af61e0;
  uVar1 = *param_2;
  param_1[3] = &PTR_FUN_110af6230;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  FUN_109444d88(param_1 + 4,uVar1);
  param_1[7] = uVar1;
  param_1[8] = param_1[4];
  return param_1;
}



/* Entry: 109444cd0; end: 109444cdf;  */

void FUN_109444cd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af61e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109444ce0; end: 109444cff;  */

void FUN_109444ce0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af61e0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109444d00; end: 109444d0f;  */

void FUN_109444d00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109444d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109444d10; end: 109444d77;  */

undefined8 * FUN_109444d10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af6230;
  _free(param_1[1]);
  return param_1;
}



/* Entry: 109444d78; end: 109444d87;  */

undefined8 FUN_109444d78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 109444d88; end: 109444dff;  */

void FUN_109444d88(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uStack_28;
  
  if (param_1[1] != param_2) {
    if (param_1[1] != 0) {
      _free(*param_1);
      *param_1 = 0;
    }
    uVar1 = (uint)param_2 & 0xfffffff0;
    if (uVar1 != (uint)param_2) {
      uVar1 = uVar1 + 0x10;
    }
    param_1[1] = param_2;
    param_1[2] = (ulong)uVar1;
    uStack_28 = 0;
    puVar2 = &uStack_28;
    _posix_memalign(puVar2,0x10);
    if ((int)puVar2 != 0) {
      uStack_28 = 0;
    }
    *param_1 = uStack_28;
  }
  return;
}



/* Entry: 109444e00; end: 109444e57;  */

void FUN_109444e00(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x58;
  __Znwm();
  FUN_109444e58();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 109444e58; end: 109444eb7;  */

undefined8 * FUN_109444e58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110af6278;
  uVar1 = *param_2;
  param_1[3] = &PTR_FUN_110af62c8;
  FUN_1099a21e4(param_1 + 4,uVar1,0);
  return param_1;
}



/* Entry: 109444eb8; end: 109444ec7;  */

void FUN_109444eb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af6278;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109444ec8; end: 109444ee7;  */

void FUN_109444ec8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af6278;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109444ee8; end: 109444ef7;  */

void FUN_109444ee8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109444ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109444ef8; end: 109444f57;  */

undefined8 * FUN_109444ef8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af62c8;
  FUN_1099a232c(param_1 + 1);
  return param_1;
}



/* Entry: 109444f58; end: 109444f67;  */

undefined8 FUN_109444f58(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109444f68; end: 109444fbf;  */

void FUN_109444f68(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x38;
  __Znwm();
  FUN_109444fc0();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 109444fc0; end: 10944502f;  */

undefined8 * FUN_109444fc0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110af6310;
  lVar2 = *param_2;
  param_1[3] = &PTR_FUN_110af6360;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2;
    __Znam();
  }
  param_1[4] = lVar1;
  param_1[5] = lVar2;
  param_1[6] = lVar1;
  return param_1;
}



/* Entry: 109445030; end: 10944503f;  */

void FUN_109445030(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af6310;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109445040; end: 10944505f;  */

void FUN_109445040(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af6310;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109445060; end: 10944506f;  */

void FUN_109445060(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109445068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109445070; end: 1094450df;  */

undefined8 * FUN_109445070(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_110af6360;
  param_1[1] = 0;
  if (lVar1 != 0) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 1094450e0; end: 1094450ef;  */

undefined8 FUN_1094450e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1094450f0; end: 10944513b;  */

undefined8 *
FUN_1094450f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 5) = param_4;
  FUN_10944513c();
  return param_1;
}



/* Entry: 10944513c; end: 10944518f;  */

void FUN_10944513c(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 4);
  lVar3 = param_1;
  FUN_109445190();
  if (iVar2 * iVar1 != (int)lVar3) {
    FUN_1094451f4(param_1,(long)(int)lVar3);
    plVar4 = *(long **)(param_1 + 0x18);
    (**(code **)(*plVar4 + 0x10))();
    *(long **)(param_1 + 0x10) = plVar4;
  }
  return;
}



/* Entry: 109445190; end: 1094451f3;  */

int FUN_109445190(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *param_2;
  *param_1 = uVar5;
  uVar4 = param_2[1];
  param_1[1] = uVar4;
  uVar1 = param_1[0xc];
  if (uVar1 != 0) {
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = uVar4 / uVar1;
    }
    iVar2 = uVar4 - uVar3 * uVar1;
    if (iVar2 != 0) {
      uVar4 = (uVar1 + uVar4) - iVar2;
    }
  }
  if (param_3 != 0) {
    uVar5 = param_3;
  }
  uVar1 = param_1[0xb];
  if (uVar1 != 0) {
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = uVar5 / uVar1;
    }
    iVar2 = uVar5 - uVar3 * uVar1;
    if (iVar2 != 0) {
      uVar5 = (uVar1 + uVar5) - iVar2;
    }
  }
  param_1[2] = uVar5;
  param_1[3] = uVar5;
  return uVar5 * uVar4;
}



/* Entry: 1094451f4; end: 10944538f;  */

void FUN_1094451f4(long param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_50 [8];
  long *plStack_48;
  long *plStack_40;
  undefined1 uStack_31;
  
  plVar6 = (long *)(param_1 + 0x18);
  plVar4 = (long *)*plVar6;
  plStack_40 = param_2;
  if ((plVar4 == (long *)0x0) || ((**(code **)(*plVar4 + 0x18))(), plVar4 != param_2)) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 3) {
      FUN_109444e00(auStack_50,&uStack_31,&plStack_40);
      func_0x000109444b44(plVar6,auStack_50);
      if (plStack_48 == (long *)0x0) {
        return;
      }
      plVar4 = plStack_48 + 1;
      do {
        lVar5 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_48;
      } while (cVar2 != '\0');
    }
    else {
      if (iVar1 == 2) {
        FUN_109444c0c(auStack_50,&uStack_31,&plStack_40);
        FUN_109444ae0(plVar6,auStack_50);
        if (plStack_48 != (long *)0x0) {
          plVar4 = plStack_48 + 1;
          do {
            lVar5 = *plVar4;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plStack_48 + 0x10))(plStack_48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
          }
        }
        *(undefined4 *)(param_1 + 0x28) = 1;
        return;
      }
      if (iVar1 == 1) {
        FUN_109444c0c(auStack_50,&uStack_31,&plStack_40);
        FUN_109444ae0(plVar6,auStack_50);
        if (plStack_48 == (long *)0x0) {
          return;
        }
        plVar4 = plStack_48 + 1;
        do {
          lVar5 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar6 = plStack_48;
        } while (cVar2 != '\0');
      }
      else {
        FUN_109444f68(auStack_50,&uStack_31,&plStack_40);
        func_0x000109444ba8(plVar6,auStack_50);
        if (plStack_48 == (long *)0x0) {
          return;
        }
        plVar4 = plStack_48 + 1;
        do {
          lVar5 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar6 = plStack_48;
        } while (cVar2 != '\0');
      }
    }
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 109445390; end: 1094453f7;  */

void FUN_109445390(long param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uStack_44;
  undefined4 auStack_3c [7];
  
  lVar1 = 0;
  puVar2 = (undefined4 *)(param_2 + 8);
  do {
    *(undefined8 *)((long)&uStack_44 + lVar1) = *(undefined8 *)(puVar2 + -2);
    *(undefined4 *)((long)auStack_3c + lVar1) = *puVar2;
    lVar1 = lVar1 + 0xc;
    puVar2 = puVar2 + 4;
  } while (lVar1 != 0x24);
  FUN_1094453f8(param_1,&uStack_44);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x38);
  return;
}



/* Entry: 1094453f8; end: 1094455d3;  */

void FUN_1094453f8(float *param_1,float *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *param_2;
  fVar5 = param_2[4];
  fVar6 = fVar4 + fVar5 + param_2[8];
  if (0.0 < fVar6) {
    fVar4 = SQRT(fVar6 + 1.0);
    param_1[3] = fVar4 * 0.5;
    fVar4 = 0.5 / fVar4;
    *param_1 = fVar4 * (param_2[5] - param_2[7]);
    param_1[1] = fVar4 * (param_2[6] - param_2[2]);
    param_1[2] = fVar4 * (param_2[1] - param_2[3]);
    return;
  }
  lVar1 = 0xc;
  if (fVar5 <= fVar4) {
    lVar1 = 0;
  }
  uVar2 = 2;
  if (param_2[8] <= *(float *)((long)param_2 + (ulong)(fVar4 < fVar5) * 4 + lVar1)) {
    uVar2 = (ulong)(fVar4 < fVar5);
  }
  lVar1 = 0;
  if (uVar2 != 2) {
    lVar1 = uVar2 + 1;
  }
  lVar3 = lVar1 + -2;
  if (lVar1 + 1U < 3) {
    lVar3 = lVar1 + 1;
  }
  fVar4 = SQRT(((param_2[uVar2 * 4] - param_2[lVar1 * 4]) - param_2[lVar3 * 4]) + 1.0);
  param_1[uVar2] = fVar4 * 0.5;
  fVar4 = 0.5 / fVar4;
  param_1[3] = (param_2[lVar1 * 3 + lVar3] - param_2[lVar3 * 3 + lVar1]) * fVar4;
  param_1[lVar1] = fVar4 * (param_2[uVar2 * 3 + lVar1] + param_2[lVar1 * 3 + uVar2]);
  param_1[lVar3] = fVar4 * (param_2[uVar2 * 3 + lVar3] + param_2[lVar3 * 3 + uVar2]);
  return;
}



/* Entry: 1094455d4; end: 1094455e7;  */

void FUN_1094455d4(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (*(long *)(puVar1 + 0x68) != 0) {
    *(long *)(puVar1 + 0x70) = *(long *)(puVar1 + 0x68);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 0x50) != 0) {
    *(long *)(puVar1 + 0x58) = *(long *)(puVar1 + 0x50);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 0x38) != 0) {
    *(long *)(puVar1 + 0x40) = *(long *)(puVar1 + 0x38);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 0x20) != 0) {
    *(long *)(puVar1 + 0x28) = *(long *)(puVar1 + 0x20);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 8) != 0) {
    *(long *)(puVar1 + 0x10) = *(long *)(puVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1094455e8; end: 10944565b;  */

void FUN_1094455e8(long param_1)

{
  if (*(long *)(param_1 + 0x68) != 0) {
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x68);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10944565c; end: 10944566f;  */

/* WARNING: Removing unreachable block (ram,0x000109445b3c) */
/* WARNING: Removing unreachable block (ram,0x000109445b74) */
/* WARNING: Removing unreachable block (ram,0x00010944590c) */
/* WARNING: Removing unreachable block (ram,0x000109445914) */
/* WARNING: Removing unreachable block (ram,0x000109445928) */
/* WARNING: Removing unreachable block (ram,0x000109445930) */
/* WARNING: Removing unreachable block (ram,0x0001094459b0) */
/* WARNING: Removing unreachable block (ram,0x0001094459bc) */
/* WARNING: Removing unreachable block (ram,0x0001094459dc) */
/* WARNING: Removing unreachable block (ram,0x000109445950) */
/* WARNING: Removing unreachable block (ram,0x000109445958) */
/* WARNING: Removing unreachable block (ram,0x000109445ad8) */
/* WARNING: Removing unreachable block (ram,0x000109445b00) */
/* WARNING: Removing unreachable block (ram,0x000109445b50) */

undefined1  [16] FUN_10944565c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  long lVar4;
  uint *puVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined8 **ppuVar8;
  byte *pbVar9;
  uint *puVar10;
  undefined8 *puVar11;
  uint *puVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 *puStack_b0;
  long lStack_a8;
  uint uStack_a0;
  undefined1 uStack_9c;
  undefined4 uStack_9b;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar11 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (puVar11 < (undefined8 *)0x5555555555555556) {
    lVar4 = (long)puVar11 * 3;
    __Znwm(lVar4);
    auVar16._8_8_ = puVar11;
    auVar16._0_8_ = lVar4;
    return auVar16;
  }
  func_0x000104c4f740();
  ppuVar8 = &puStack_b0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a0 = 0x8000;
  uStack_9c = 0x20;
  uStack_9b = 0;
  uStack_97 = 0xffffffff000000;
  puVar5 = &uStack_a0;
  FUN_10944577c();
  lVar4 = *param_2;
  *param_2 = (long)puVar5;
  param_2[1] = param_2[1] + (lVar4 - (long)puVar5);
  puVar11 = (undefined8 *)*puVar11;
  cVar3 = *(char *)((long)puVar11 + 0x17);
  puStack_b0 = (undefined8 *)*puVar11;
  if (-1 < (long)cVar3) {
    puStack_b0 = puVar11;
  }
  lStack_a8 = puVar11[1];
  if (-1 < cVar3) {
    lStack_a8 = (long)cVar3;
  }
  puVar5 = &uStack_a0;
  FUN_109445f80(puVar5,&puStack_b0,param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar17._8_8_ = ppuVar8;
    auVar17._0_8_ = puVar5;
    return auVar17;
  }
  ___stack_chk_fail();
  pbVar6 = (byte *)*ppuVar8;
  if ((ppuVar8[1] == (undefined8 *)0x0) || (*pbVar6 == 0x7d)) {
    auVar18._8_8_ = ppuVar8;
    auVar18._0_8_ = pbVar6;
    return auVar18;
  }
  pbVar1 = pbVar6 + (long)ppuVar8[1];
  pbVar9 = pbVar1;
  if ((long)pbVar1 - (long)pbVar6 < 2) {
    if (pbVar6 == pbVar1) {
LAB_109445bc8:
      auVar19._8_8_ = pbVar9;
      auVar19._0_8_ = pbVar6;
      return auVar19;
    }
  }
  else if (pbVar6[1] - 0x3c < 0x23 && (1L << ((ulong)(pbVar6[1] - 0x3c) & 0x3f) & 0x400000005U) != 0
          ) {
    bVar13 = 0;
    goto LAB_109445820;
  }
  bVar13 = *pbVar6;
LAB_109445820:
  uVar14 = 0;
  puVar10 = puVar5;
  do {
    switch(bVar13) {
    case 0x20:
    case 0x2b:
      uVar14 = 0xc00;
      if (bVar13 != 0x20) {
        uVar14 = 0x800;
      }
      *puVar5 = *puVar5 & 0xfffff3ff | uVar14;
      goto code_r0x000109445908;
    default:
      bVar13 = *pbVar6;
      if (bVar13 == 0x7d) goto LAB_109445bc8;
      puVar10 = (uint *)((0x3a55000000000000U >> ((ulong)(bVar13 >> 2) & 0x3e) & 3) + 1);
      pbVar2 = pbVar6 + (long)puVar10;
      if ((long)pbVar1 - (long)pbVar2 < 1) goto LAB_109445bf8;
      if (bVar13 == 0x7b) goto LAB_109445c10;
      bVar13 = *pbVar2;
      if (bVar13 == 0x3c) {
        uVar15 = 8;
      }
      else if (bVar13 == 0x5e) {
        uVar15 = 0x18;
      }
      else {
        if (bVar13 != 0x3e) goto LAB_109445bf8;
        uVar15 = 0x10;
      }
      if (uVar14 != 0) goto LAB_109445bf8;
      FUN_109445c68(puVar5);
      *puVar5 = *puVar5 & 0xffffffc7 | uVar15;
      uVar14 = 1;
      pbVar9 = pbVar6;
      pbVar6 = pbVar2 + 1;
      break;
    case 0x23:
      goto LAB_109445bf8;
    case 0x2d:
      goto code_r0x000109445908;
    case 0x2e:
      if (5 < uVar14) goto LAB_109445bf8;
      pbVar9 = pbVar1;
      puVar10 = puVar5;
      FUN_109445c1c();
      uVar14 = 6;
      break;
    case 0x30:
      if (uVar14 < 4) goto code_r0x000109445c04;
      goto LAB_109445bf8;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x7b:
      if (4 < uVar14) goto LAB_109445bf8;
      puVar10 = puVar5 + 2;
      pbVar9 = pbVar1;
      FUN_109445cb8();
      *puVar5 = *puVar5 & 0xffffff3f | (int)pbVar9 << 6;
      uVar14 = 5;
      break;
    case 0x3c:
    case 0x3e:
    case 0x5e:
      if (uVar14 != 0) goto LAB_109445bf8;
      uVar14 = 0;
      if (bVar13 == 0x3e) {
        uVar14 = 0x10;
      }
      uVar15 = 0x18;
      if (bVar13 != 0x5e) {
        uVar15 = uVar14;
      }
      uVar14 = 8;
      if (bVar13 != 0x3c) {
        uVar14 = uVar15;
      }
      *puVar5 = *puVar5 & 0xffffffc7 | uVar14;
      pbVar6 = pbVar6 + 1;
      uVar14 = 1;
      break;
    case 0x3f:
      uVar14 = *puVar5 & 0xfffffff8 | 1;
      goto code_r0x000109445bc0;
    case 0x41:
      *puVar5 = *puVar5 | 0x1000;
    case 0x61:
      goto LAB_109445bf8;
    case 0x42:
      *puVar5 = *puVar5 | 0x1000;
    case 0x62:
      goto LAB_109445bf8;
    case 0x45:
      *puVar5 = *puVar5 | 0x1000;
    case 0x65:
      goto LAB_109445bf8;
    case 0x46:
      *puVar5 = *puVar5 | 0x1000;
    case 0x66:
      goto LAB_109445bf8;
    case 0x47:
      *puVar5 = *puVar5 | 0x1000;
    case 0x67:
      goto LAB_109445bf8;
    case 0x4c:
      goto LAB_109445bf8;
    case 0x58:
      *puVar5 = *puVar5 | 0x1000;
    case 0x78:
      goto LAB_109445bf8;
    case 99:
      goto LAB_109445bf8;
    case 100:
      goto LAB_109445bf8;
    case 0x6f:
      goto LAB_109445bf8;
    case 0x70:
      goto LAB_109445bf8;
    case 0x73:
      uVar14 = *puVar5 & 0xfffffff8 | 2;
code_r0x000109445bc0:
      *puVar5 = uVar14;
      pbVar6 = pbVar6 + 1;
    case 0x7d:
      goto LAB_109445bc8;
    }
    if (pbVar6 == pbVar1) goto LAB_109445bc8;
    bVar13 = *pbVar6;
  } while( true );
code_r0x000109445908:
LAB_109445bf8:
  FUN_1099a5aa4(&UNK_10f56d78b);
code_r0x000109445c04:
  FUN_1099a5aa4(&UNK_10f3dbeea);
LAB_109445c10:
  puVar7 = &UNK_10f3dbec2;
  FUN_1099a5aa4();
  pbVar6 = puVar7 + 1;
  if (pbVar6 != pbVar9) {
    FUN_109445cb8();
    *puVar10 = *puVar10 & 0xfffffcff | (int)pbVar9 << 8;
    auVar20._8_8_ = pbVar9;
    auVar20._0_8_ = pbVar6;
    return auVar20;
  }
  puVar5 = (uint *)&UNK_10f56d7a4;
  FUN_1099a5aa4();
  *puVar5 = *puVar5 & 0xfffc7fff | (int)puVar10 << 0xf;
  if (puVar10 != (uint *)0x0) {
    if (puVar10 == (uint *)0x1) {
      *(byte *)(puVar5 + 1) = *pbVar9;
      *(undefined2 *)((long)puVar5 + 5) = 0;
      auVar21._8_8_ = pbVar9;
      auVar21._0_8_ = puVar5;
      return auVar21;
    }
    puVar12 = (uint *)0x0;
    do {
      *(byte *)((long)puVar5 + ((ulong)puVar12 & 3) + 4) = pbVar9[(long)puVar12];
      puVar12 = (uint *)((long)puVar12 + 1);
    } while (puVar10 != puVar12);
  }
  auVar22._8_8_ = pbVar9;
  auVar22._0_8_ = puVar5;
  return auVar22;
}



/* Entry: 109445670; end: 1094456ab;  */

/* WARNING: Removing unreachable block (ram,0x000109445b3c) */
/* WARNING: Removing unreachable block (ram,0x000109445b74) */
/* WARNING: Removing unreachable block (ram,0x00010944590c) */
/* WARNING: Removing unreachable block (ram,0x000109445914) */
/* WARNING: Removing unreachable block (ram,0x000109445928) */
/* WARNING: Removing unreachable block (ram,0x000109445930) */
/* WARNING: Removing unreachable block (ram,0x0001094459b0) */
/* WARNING: Removing unreachable block (ram,0x0001094459bc) */
/* WARNING: Removing unreachable block (ram,0x0001094459dc) */
/* WARNING: Removing unreachable block (ram,0x000109445950) */
/* WARNING: Removing unreachable block (ram,0x000109445958) */
/* WARNING: Removing unreachable block (ram,0x000109445ad8) */
/* WARNING: Removing unreachable block (ram,0x000109445b00) */
/* WARNING: Removing unreachable block (ram,0x000109445b50) */

undefined1  [16] FUN_109445670(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  long lVar4;
  uint *puVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined8 **ppuVar8;
  byte *pbVar9;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 *puStack_a0;
  long lStack_98;
  uint uStack_90;
  undefined1 uStack_8c;
  undefined4 uStack_8b;
  undefined7 uStack_87;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if (param_1 < (undefined8 *)0x5555555555555556) {
    lVar4 = (long)param_1 * 3;
    __Znwm(lVar4);
    auVar15._8_8_ = param_1;
    auVar15._0_8_ = lVar4;
    return auVar15;
  }
  func_0x000104c4f740();
  ppuVar8 = &puStack_a0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_90 = 0x8000;
  uStack_8c = 0x20;
  uStack_8b = 0;
  uStack_87 = 0xffffffff000000;
  puVar5 = &uStack_90;
  FUN_10944577c();
  lVar4 = *param_2;
  *param_2 = (long)puVar5;
  param_2[1] = param_2[1] + (lVar4 - (long)puVar5);
  param_1 = (undefined8 *)*param_1;
  cVar3 = *(char *)((long)param_1 + 0x17);
  puStack_a0 = (undefined8 *)*param_1;
  if (-1 < (long)cVar3) {
    puStack_a0 = param_1;
  }
  lStack_98 = param_1[1];
  if (-1 < cVar3) {
    lStack_98 = (long)cVar3;
  }
  puVar5 = &uStack_90;
  FUN_109445f80(puVar5,&puStack_a0,param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar16._8_8_ = ppuVar8;
    auVar16._0_8_ = puVar5;
    return auVar16;
  }
  ___stack_chk_fail();
  pbVar6 = (byte *)*ppuVar8;
  if ((ppuVar8[1] == (undefined8 *)0x0) || (*pbVar6 == 0x7d)) {
    auVar17._8_8_ = ppuVar8;
    auVar17._0_8_ = pbVar6;
    return auVar17;
  }
  pbVar1 = pbVar6 + (long)ppuVar8[1];
  pbVar9 = pbVar1;
  if ((long)pbVar1 - (long)pbVar6 < 2) {
    if (pbVar6 == pbVar1) {
LAB_109445bc8:
      auVar18._8_8_ = pbVar9;
      auVar18._0_8_ = pbVar6;
      return auVar18;
    }
  }
  else if (pbVar6[1] - 0x3c < 0x23 && (1L << ((ulong)(pbVar6[1] - 0x3c) & 0x3f) & 0x400000005U) != 0
          ) {
    bVar12 = 0;
    goto LAB_109445820;
  }
  bVar12 = *pbVar6;
LAB_109445820:
  uVar13 = 0;
  puVar10 = puVar5;
  do {
    switch(bVar12) {
    case 0x20:
    case 0x2b:
      uVar13 = 0xc00;
      if (bVar12 != 0x20) {
        uVar13 = 0x800;
      }
      *puVar5 = *puVar5 & 0xfffff3ff | uVar13;
      goto code_r0x000109445908;
    default:
      bVar12 = *pbVar6;
      if (bVar12 == 0x7d) goto LAB_109445bc8;
      puVar10 = (uint *)((0x3a55000000000000U >> ((ulong)(bVar12 >> 2) & 0x3e) & 3) + 1);
      pbVar2 = pbVar6 + (long)puVar10;
      if ((long)pbVar1 - (long)pbVar2 < 1) goto LAB_109445bf8;
      if (bVar12 == 0x7b) goto LAB_109445c10;
      bVar12 = *pbVar2;
      if (bVar12 == 0x3c) {
        uVar14 = 8;
      }
      else if (bVar12 == 0x5e) {
        uVar14 = 0x18;
      }
      else {
        if (bVar12 != 0x3e) goto LAB_109445bf8;
        uVar14 = 0x10;
      }
      if (uVar13 != 0) goto LAB_109445bf8;
      FUN_109445c68(puVar5);
      *puVar5 = *puVar5 & 0xffffffc7 | uVar14;
      uVar13 = 1;
      pbVar9 = pbVar6;
      pbVar6 = pbVar2 + 1;
      break;
    case 0x23:
      goto LAB_109445bf8;
    case 0x2d:
      goto code_r0x000109445908;
    case 0x2e:
      if (5 < uVar13) goto LAB_109445bf8;
      pbVar9 = pbVar1;
      puVar10 = puVar5;
      FUN_109445c1c();
      uVar13 = 6;
      break;
    case 0x30:
      if (uVar13 < 4) goto code_r0x000109445c04;
      goto LAB_109445bf8;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x7b:
      if (4 < uVar13) goto LAB_109445bf8;
      puVar10 = puVar5 + 2;
      pbVar9 = pbVar1;
      FUN_109445cb8();
      *puVar5 = *puVar5 & 0xffffff3f | (int)pbVar9 << 6;
      uVar13 = 5;
      break;
    case 0x3c:
    case 0x3e:
    case 0x5e:
      if (uVar13 != 0) goto LAB_109445bf8;
      uVar13 = 0;
      if (bVar12 == 0x3e) {
        uVar13 = 0x10;
      }
      uVar14 = 0x18;
      if (bVar12 != 0x5e) {
        uVar14 = uVar13;
      }
      uVar13 = 8;
      if (bVar12 != 0x3c) {
        uVar13 = uVar14;
      }
      *puVar5 = *puVar5 & 0xffffffc7 | uVar13;
      pbVar6 = pbVar6 + 1;
      uVar13 = 1;
      break;
    case 0x3f:
      uVar13 = *puVar5 & 0xfffffff8 | 1;
      goto code_r0x000109445bc0;
    case 0x41:
      *puVar5 = *puVar5 | 0x1000;
    case 0x61:
      goto LAB_109445bf8;
    case 0x42:
      *puVar5 = *puVar5 | 0x1000;
    case 0x62:
      goto LAB_109445bf8;
    case 0x45:
      *puVar5 = *puVar5 | 0x1000;
    case 0x65:
      goto LAB_109445bf8;
    case 0x46:
      *puVar5 = *puVar5 | 0x1000;
    case 0x66:
      goto LAB_109445bf8;
    case 0x47:
      *puVar5 = *puVar5 | 0x1000;
    case 0x67:
      goto LAB_109445bf8;
    case 0x4c:
      goto LAB_109445bf8;
    case 0x58:
      *puVar5 = *puVar5 | 0x1000;
    case 0x78:
      goto LAB_109445bf8;
    case 99:
      goto LAB_109445bf8;
    case 100:
      goto LAB_109445bf8;
    case 0x6f:
      goto LAB_109445bf8;
    case 0x70:
      goto LAB_109445bf8;
    case 0x73:
      uVar13 = *puVar5 & 0xfffffff8 | 2;
code_r0x000109445bc0:
      *puVar5 = uVar13;
      pbVar6 = pbVar6 + 1;
    case 0x7d:
      goto LAB_109445bc8;
    }
    if (pbVar6 == pbVar1) goto LAB_109445bc8;
    bVar12 = *pbVar6;
  } while( true );
code_r0x000109445908:
LAB_109445bf8:
  FUN_1099a5aa4(&UNK_10f56d78b);
code_r0x000109445c04:
  FUN_1099a5aa4(&UNK_10f3dbeea);
LAB_109445c10:
  puVar7 = &UNK_10f3dbec2;
  FUN_1099a5aa4();
  pbVar6 = puVar7 + 1;
  if (pbVar6 != pbVar9) {
    FUN_109445cb8();
    *puVar10 = *puVar10 & 0xfffffcff | (int)pbVar9 << 8;
    auVar19._8_8_ = pbVar9;
    auVar19._0_8_ = pbVar6;
    return auVar19;
  }
  puVar5 = (uint *)&UNK_10f56d7a4;
  FUN_1099a5aa4();
  *puVar5 = *puVar5 & 0xfffc7fff | (int)puVar10 << 0xf;
  if (puVar10 != (uint *)0x0) {
    if (puVar10 == (uint *)0x1) {
      *(byte *)(puVar5 + 1) = *pbVar9;
      *(undefined2 *)((long)puVar5 + 5) = 0;
      auVar20._8_8_ = pbVar9;
      auVar20._0_8_ = puVar5;
      return auVar20;
    }
    puVar11 = (uint *)0x0;
    do {
      *(byte *)((long)puVar5 + ((ulong)puVar11 & 3) + 4) = pbVar9[(long)puVar11];
      puVar11 = (uint *)((long)puVar11 + 1);
    } while (puVar10 != puVar11);
  }
  auVar21._8_8_ = pbVar9;
  auVar21._0_8_ = puVar5;
  return auVar21;
}



/* Entry: 1094456ac; end: 10944577b;  */

/* WARNING: Removing unreachable block (ram,0x000109445b3c) */
/* WARNING: Removing unreachable block (ram,0x000109445b74) */
/* WARNING: Removing unreachable block (ram,0x00010944590c) */
/* WARNING: Removing unreachable block (ram,0x000109445914) */
/* WARNING: Removing unreachable block (ram,0x000109445928) */
/* WARNING: Removing unreachable block (ram,0x000109445930) */
/* WARNING: Removing unreachable block (ram,0x0001094459b0) */
/* WARNING: Removing unreachable block (ram,0x0001094459bc) */
/* WARNING: Removing unreachable block (ram,0x0001094459dc) */
/* WARNING: Removing unreachable block (ram,0x000109445950) */
/* WARNING: Removing unreachable block (ram,0x000109445958) */
/* WARNING: Removing unreachable block (ram,0x000109445ad8) */
/* WARNING: Removing unreachable block (ram,0x000109445b00) */
/* WARNING: Removing unreachable block (ram,0x000109445b50) */

uint * FUN_1094456ac(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  uint *puVar1;
  byte *pbVar2;
  long lVar3;
  char cVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined8 **ppuVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puStack_80;
  long lStack_78;
  uint uStack_70;
  undefined1 uStack_6c;
  undefined4 uStack_6b;
  undefined7 uStack_67;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  ppuVar7 = &puStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_70 = 0x8000;
  uStack_6c = 0x20;
  uStack_6b = 0;
  uStack_67 = 0xffffffff000000;
  puVar5 = &uStack_70;
  FUN_10944577c();
  lVar3 = *param_2;
  *param_2 = (long)puVar5;
  param_2[1] = param_2[1] + (lVar3 - (long)puVar5);
  param_1 = (undefined8 *)*param_1;
  cVar4 = *(char *)((long)param_1 + 0x17);
  puStack_80 = (undefined8 *)*param_1;
  if (-1 < (long)cVar4) {
    puStack_80 = param_1;
  }
  lStack_78 = param_1[1];
  if (-1 < cVar4) {
    lStack_78 = (long)cVar4;
  }
  puVar5 = &uStack_70;
  FUN_109445f80(puVar5,&puStack_80,param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar10 = (uint *)*ppuVar7;
  if ((ppuVar7[1] == (undefined8 *)0x0) || ((byte)*puVar10 == 0x7d)) {
    return puVar10;
  }
  puVar1 = (uint *)((long)puVar10 + (long)ppuVar7[1]);
  if ((long)puVar1 - (long)puVar10 < 2) {
    if (puVar10 == puVar1) {
LAB_109445bc8:
      return puVar10;
    }
  }
  else {
    uVar12 = *(byte *)((long)puVar10 + 1) - 0x3c;
    if (uVar12 < 0x23 && (1L << ((ulong)uVar12 & 0x3f) & 0x400000005U) != 0) {
      bVar11 = 0;
      goto LAB_109445820;
    }
  }
  bVar11 = (byte)*puVar10;
LAB_109445820:
  uVar12 = 0;
  puVar8 = puVar1;
  puVar9 = puVar5;
  do {
    switch(bVar11) {
    case 0x20:
    case 0x2b:
      uVar12 = 0xc00;
      if (bVar11 != 0x20) {
        uVar12 = 0x800;
      }
      *puVar5 = *puVar5 & 0xfffff3ff | uVar12;
      goto code_r0x000109445908;
    default:
      bVar11 = (byte)*puVar10;
      if (bVar11 == 0x7d) {
        return puVar10;
      }
      puVar9 = (uint *)((0x3a55000000000000U >> ((ulong)(bVar11 >> 2) & 0x3e) & 3) + 1);
      pbVar2 = (byte *)((long)puVar10 + (long)puVar9);
      if ((long)puVar1 - (long)pbVar2 < 1) goto LAB_109445bf8;
      if (bVar11 == 0x7b) goto LAB_109445c10;
      bVar11 = *pbVar2;
      if (bVar11 == 0x3c) {
        uVar13 = 8;
      }
      else if (bVar11 == 0x5e) {
        uVar13 = 0x18;
      }
      else {
        if (bVar11 != 0x3e) goto LAB_109445bf8;
        uVar13 = 0x10;
      }
      if (uVar12 != 0) goto LAB_109445bf8;
      FUN_109445c68(puVar5);
      *puVar5 = *puVar5 & 0xffffffc7 | uVar13;
      uVar12 = 1;
      puVar8 = puVar10;
      puVar10 = (uint *)(pbVar2 + 1);
      break;
    case 0x23:
      goto LAB_109445bf8;
    case 0x2d:
      goto code_r0x000109445908;
    case 0x2e:
      if (5 < uVar12) goto LAB_109445bf8;
      puVar8 = puVar1;
      puVar9 = puVar5;
      FUN_109445c1c();
      uVar12 = 6;
      break;
    case 0x30:
      if (3 < uVar12) goto LAB_109445bf8;
      goto code_r0x000109445c04;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x7b:
      if (4 < uVar12) goto LAB_109445bf8;
      puVar9 = puVar5 + 2;
      puVar8 = puVar1;
      FUN_109445cb8();
      *puVar5 = *puVar5 & 0xffffff3f | (int)puVar8 << 6;
      uVar12 = 5;
      break;
    case 0x3c:
    case 0x3e:
    case 0x5e:
      if (uVar12 != 0) goto LAB_109445bf8;
      uVar12 = 0;
      if (bVar11 == 0x3e) {
        uVar12 = 0x10;
      }
      uVar13 = 0x18;
      if (bVar11 != 0x5e) {
        uVar13 = uVar12;
      }
      uVar12 = 8;
      if (bVar11 != 0x3c) {
        uVar12 = uVar13;
      }
      *puVar5 = *puVar5 & 0xffffffc7 | uVar12;
      puVar10 = (uint *)((long)puVar10 + 1);
      uVar12 = 1;
      break;
    case 0x3f:
      uVar12 = *puVar5 & 0xfffffff8 | 1;
      goto code_r0x000109445bc0;
    case 0x41:
      *puVar5 = *puVar5 | 0x1000;
    case 0x61:
      goto LAB_109445bf8;
    case 0x42:
      *puVar5 = *puVar5 | 0x1000;
    case 0x62:
      goto LAB_109445bf8;
    case 0x45:
      *puVar5 = *puVar5 | 0x1000;
    case 0x65:
      goto LAB_109445bf8;
    case 0x46:
      *puVar5 = *puVar5 | 0x1000;
    case 0x66:
      goto LAB_109445bf8;
    case 0x47:
      *puVar5 = *puVar5 | 0x1000;
    case 0x67:
      goto LAB_109445bf8;
    case 0x4c:
      goto LAB_109445bf8;
    case 0x58:
      *puVar5 = *puVar5 | 0x1000;
    case 0x78:
      goto LAB_109445bf8;
    case 99:
      goto LAB_109445bf8;
    case 100:
      goto LAB_109445bf8;
    case 0x6f:
      goto LAB_109445bf8;
    case 0x70:
      goto LAB_109445bf8;
    case 0x73:
      uVar12 = *puVar5 & 0xfffffff8 | 2;
code_r0x000109445bc0:
      *puVar5 = uVar12;
      return (uint *)((long)puVar10 + 1);
    case 0x7d:
      goto LAB_109445bc8;
    }
    if (puVar10 == puVar1) {
      return puVar10;
    }
    bVar11 = (byte)*puVar10;
  } while( true );
code_r0x000109445908:
LAB_109445bf8:
  FUN_1099a5aa4(&UNK_10f56d78b);
code_r0x000109445c04:
  FUN_1099a5aa4(&UNK_10f3dbeea);
LAB_109445c10:
  puVar6 = &UNK_10f3dbec2;
  FUN_1099a5aa4();
  puVar5 = (uint *)(puVar6 + 1);
  if (puVar5 != puVar8) {
    FUN_109445cb8();
    *puVar9 = *puVar9 & 0xfffffcff | (int)puVar8 << 8;
    return puVar5;
  }
  puVar5 = (uint *)&UNK_10f56d7a4;
  FUN_1099a5aa4();
  *puVar5 = *puVar5 & 0xfffc7fff | (int)puVar9 << 0xf;
  if (puVar9 != (uint *)0x0) {
    if (puVar9 == (uint *)0x1) {
      *(byte *)(puVar5 + 1) = (byte)*puVar8;
      *(undefined2 *)((long)puVar5 + 5) = 0;
      return puVar5;
    }
    puVar10 = (uint *)0x0;
    do {
      *(byte *)((long)puVar5 + ((ulong)puVar10 & 3) + 4) = *(byte *)((long)puVar8 + (long)puVar10);
      puVar10 = (uint *)((long)puVar10 + 1);
    } while (puVar9 != puVar10);
  }
  return puVar5;
}



/* Entry: 10944577c; end: 1094457a7;  */

/* WARNING: Removing unreachable block (ram,0x000109445b3c) */
/* WARNING: Removing unreachable block (ram,0x000109445b74) */
/* WARNING: Removing unreachable block (ram,0x00010944590c) */
/* WARNING: Removing unreachable block (ram,0x000109445914) */
/* WARNING: Removing unreachable block (ram,0x000109445928) */
/* WARNING: Removing unreachable block (ram,0x000109445930) */
/* WARNING: Removing unreachable block (ram,0x0001094459b0) */
/* WARNING: Removing unreachable block (ram,0x0001094459bc) */
/* WARNING: Removing unreachable block (ram,0x0001094459dc) */
/* WARNING: Removing unreachable block (ram,0x000109445950) */
/* WARNING: Removing unreachable block (ram,0x000109445958) */
/* WARNING: Removing unreachable block (ram,0x000109445ad8) */
/* WARNING: Removing unreachable block (ram,0x000109445b00) */
/* WARNING: Removing unreachable block (ram,0x000109445b50) */

uint * FUN_10944577c(uint *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  
  puVar2 = (uint *)*param_2;
  if ((param_2[1] == 0) || ((byte)*puVar2 == 0x7d)) {
    return puVar2;
  }
  puVar6 = (uint *)((long)puVar2 + param_2[1]);
  if ((long)puVar6 - (long)puVar2 < 2) {
    if (puVar2 == puVar6) {
LAB_109445bc8:
      return puVar2;
    }
  }
  else {
    uVar8 = *(byte *)((long)puVar2 + 1) - 0x3c;
    if (uVar8 < 0x23 && (1L << ((ulong)uVar8 & 0x3f) & 0x400000005U) != 0) {
      bVar7 = 0;
      goto LAB_109445820;
    }
  }
  bVar7 = (byte)*puVar2;
LAB_109445820:
  uVar8 = 0;
  puVar4 = puVar6;
  puVar5 = param_1;
  do {
    switch(bVar7) {
    case 0x20:
    case 0x2b:
      uVar8 = 0xc00;
      if (bVar7 != 0x20) {
        uVar8 = 0x800;
      }
      *param_1 = *param_1 & 0xfffff3ff | uVar8;
      goto code_r0x000109445908;
    default:
      bVar7 = (byte)*puVar2;
      if (bVar7 == 0x7d) {
        return puVar2;
      }
      puVar5 = (uint *)((0x3a55000000000000U >> ((ulong)(bVar7 >> 2) & 0x3e) & 3) + 1);
      pbVar1 = (byte *)((long)puVar2 + (long)puVar5);
      if ((long)puVar6 - (long)pbVar1 < 1) goto LAB_109445bf8;
      if (bVar7 == 0x7b) goto LAB_109445c10;
      bVar7 = *pbVar1;
      if (bVar7 == 0x3c) {
        uVar9 = 8;
      }
      else if (bVar7 == 0x5e) {
        uVar9 = 0x18;
      }
      else {
        if (bVar7 != 0x3e) goto LAB_109445bf8;
        uVar9 = 0x10;
      }
      if (uVar8 != 0) goto LAB_109445bf8;
      FUN_109445c68(param_1);
      *param_1 = *param_1 & 0xffffffc7 | uVar9;
      uVar8 = 1;
      puVar4 = puVar2;
      puVar2 = (uint *)(pbVar1 + 1);
      break;
    case 0x23:
      goto LAB_109445bf8;
    case 0x2d:
      goto code_r0x000109445908;
    case 0x2e:
      if (5 < uVar8) goto LAB_109445bf8;
      puVar4 = puVar6;
      puVar5 = param_1;
      FUN_109445c1c();
      uVar8 = 6;
      break;
    case 0x30:
      if (3 < uVar8) goto LAB_109445bf8;
      goto code_r0x000109445c04;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x7b:
      if (4 < uVar8) goto LAB_109445bf8;
      puVar5 = param_1 + 2;
      puVar4 = puVar6;
      FUN_109445cb8();
      *param_1 = *param_1 & 0xffffff3f | (int)puVar4 << 6;
      uVar8 = 5;
      break;
    case 0x3c:
    case 0x3e:
    case 0x5e:
      if (uVar8 != 0) goto LAB_109445bf8;
      uVar8 = 0;
      if (bVar7 == 0x3e) {
        uVar8 = 0x10;
      }
      uVar9 = 0x18;
      if (bVar7 != 0x5e) {
        uVar9 = uVar8;
      }
      uVar8 = 8;
      if (bVar7 != 0x3c) {
        uVar8 = uVar9;
      }
      *param_1 = *param_1 & 0xffffffc7 | uVar8;
      puVar2 = (uint *)((long)puVar2 + 1);
      uVar8 = 1;
      break;
    case 0x3f:
      uVar8 = *param_1 & 0xfffffff8 | 1;
      goto code_r0x000109445bc0;
    case 0x41:
      *param_1 = *param_1 | 0x1000;
    case 0x61:
      goto LAB_109445bf8;
    case 0x42:
      *param_1 = *param_1 | 0x1000;
    case 0x62:
      goto LAB_109445bf8;
    case 0x45:
      *param_1 = *param_1 | 0x1000;
    case 0x65:
      goto LAB_109445bf8;
    case 0x46:
      *param_1 = *param_1 | 0x1000;
    case 0x66:
      goto LAB_109445bf8;
    case 0x47:
      *param_1 = *param_1 | 0x1000;
    case 0x67:
      goto LAB_109445bf8;
    case 0x4c:
      goto LAB_109445bf8;
    case 0x58:
      *param_1 = *param_1 | 0x1000;
    case 0x78:
      goto LAB_109445bf8;
    case 99:
      goto LAB_109445bf8;
    case 100:
      goto LAB_109445bf8;
    case 0x6f:
      goto LAB_109445bf8;
    case 0x70:
      goto LAB_109445bf8;
    case 0x73:
      uVar8 = *param_1 & 0xfffffff8 | 2;
code_r0x000109445bc0:
      *param_1 = uVar8;
      return (uint *)((long)puVar2 + 1);
    case 0x7d:
      goto LAB_109445bc8;
    }
    if (puVar2 == puVar6) {
      return puVar2;
    }
    bVar7 = (byte)*puVar2;
  } while( true );
code_r0x000109445908:
LAB_109445bf8:
  FUN_1099a5aa4(&UNK_10f56d78b);
code_r0x000109445c04:
  FUN_1099a5aa4(&UNK_10f3dbeea);
LAB_109445c10:
  puVar3 = &UNK_10f3dbec2;
  FUN_1099a5aa4();
  puVar2 = (uint *)(puVar3 + 1);
  if (puVar2 != puVar4) {
    FUN_109445cb8();
    *puVar5 = *puVar5 & 0xfffffcff | (int)puVar4 << 8;
    return puVar2;
  }
  puVar2 = (uint *)&UNK_10f56d7a4;
  FUN_1099a5aa4();
  *puVar2 = *puVar2 & 0xfffc7fff | (int)puVar5 << 0xf;
  if (puVar5 != (uint *)0x0) {
    if (puVar5 == (uint *)0x1) {
      *(byte *)(puVar2 + 1) = (byte)*puVar4;
      *(undefined2 *)((long)puVar2 + 5) = 0;
      return puVar2;
    }
    puVar6 = (uint *)0x0;
    do {
      *(byte *)((long)puVar2 + ((ulong)puVar6 & 3) + 4) = *(byte *)((long)puVar4 + (long)puVar6);
      puVar6 = (uint *)((long)puVar6 + 1);
    } while (puVar5 != puVar6);
  }
  return puVar2;
}



/* Entry: 1094457a8; end: 109445c1b;  */

uint * FUN_1094457a8(uint *param_1,uint *param_2,uint *param_3,undefined8 param_4,uint param_5)

{
  byte *pbVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  
  if ((long)param_2 - (long)param_1 < 2) {
    if (param_1 == param_2) {
      return param_1;
    }
  }
  else {
    uVar8 = *(byte *)((long)param_1 + 1) - 0x3c;
    if (uVar8 < 0x23 && (1L << ((ulong)uVar8 & 0x3f) & 0x400000005U) != 0) {
      bVar9 = 0;
      goto LAB_109445820;
    }
  }
  bVar9 = (byte)*param_1;
LAB_109445820:
  uVar11 = 0;
  uVar2 = param_5 - 1;
  uVar8 = 1 << (ulong)(param_5 & 0x1f);
  puVar5 = param_2;
  puVar6 = param_3;
  do {
    switch(bVar9) {
    case 0x20:
    case 0x2b:
      uVar10 = 0xc00;
      if (bVar9 != 0x20) {
        uVar10 = 0x800;
      }
      *param_3 = *param_3 & 0xfffff3ff | uVar10;
    case 0x2d:
      if (((uVar8 & 0xe2a) == 0) || (1 < uVar11)) goto LAB_109445bf8;
      param_1 = (uint *)((long)param_1 + 1);
      uVar11 = 2;
      break;
    default:
      bVar9 = (byte)*param_1;
      if (bVar9 == 0x7d) {
        return param_1;
      }
      puVar6 = (uint *)((0x3a55000000000000U >> ((ulong)(bVar9 >> 2) & 0x3e) & 3) + 1);
      pbVar1 = (byte *)((long)param_1 + (long)puVar6);
      if ((long)param_2 - (long)pbVar1 < 1) goto LAB_109445bf8;
      if (bVar9 == 0x7b) goto LAB_109445c10;
      bVar9 = *pbVar1;
      if (bVar9 == 0x3c) {
        uVar10 = 8;
      }
      else if (bVar9 == 0x5e) {
        uVar10 = 0x18;
      }
      else {
        if (bVar9 != 0x3e) goto LAB_109445bf8;
        uVar10 = 0x10;
      }
      if (uVar11 != 0) goto LAB_109445bf8;
      FUN_109445c68(param_3);
      *param_3 = *param_3 & 0xffffffc7 | uVar10;
      uVar11 = 1;
      puVar5 = param_1;
      param_1 = (uint *)(pbVar1 + 1);
      break;
    case 0x23:
      if ((10 < uVar2) || (2 < uVar11)) goto LAB_109445bf8;
      *param_3 = *param_3 | 0x2000;
      param_1 = (uint *)((long)param_1 + 1);
      uVar11 = 3;
      break;
    case 0x2e:
      if (((uVar8 & 0x3e00) == 0) || (5 < uVar11)) goto LAB_109445bf8;
      puVar5 = param_2;
      puVar6 = param_3;
      FUN_109445c1c();
      uVar11 = 6;
      break;
    case 0x30:
      if (3 < uVar11) goto LAB_109445bf8;
      if (10 < uVar2) goto code_r0x000109445c04;
      if ((*param_3 & 0x38) == 0) {
        *(undefined1 *)(param_3 + 1) = 0x30;
        *param_3 = *param_3 & 0xfffc7fc7 | 0x8020;
      }
      param_1 = (uint *)((long)param_1 + 1);
      uVar11 = 4;
      break;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x7b:
      if (4 < uVar11) goto LAB_109445bf8;
      puVar6 = param_3 + 2;
      puVar5 = param_2;
      FUN_109445cb8();
      *param_3 = *param_3 & 0xffffff3f | (int)puVar5 << 6;
      uVar11 = 5;
      break;
    case 0x3c:
    case 0x3e:
    case 0x5e:
      if (uVar11 != 0) goto LAB_109445bf8;
      uVar11 = 0;
      if (bVar9 == 0x3e) {
        uVar11 = 0x10;
      }
      uVar10 = 0x18;
      if (bVar9 != 0x5e) {
        uVar10 = uVar11;
      }
      uVar11 = 8;
      if (bVar9 != 0x3c) {
        uVar11 = uVar10;
      }
      *param_3 = *param_3 & 0xffffffc7 | uVar11;
      param_1 = (uint *)((long)param_1 + 1);
      uVar11 = 1;
      break;
    case 0x3f:
      uVar8 = uVar8 & 0x3100;
joined_r0x000109445bb0:
      if (uVar8 == 0) {
LAB_109445bf8:
        FUN_1099a5aa4(&UNK_10f56d78b);
code_r0x000109445c04:
        FUN_1099a5aa4(&UNK_10f3dbeea);
LAB_109445c10:
        puVar3 = &UNK_10f3dbec2;
        FUN_1099a5aa4();
        puVar4 = (uint *)(puVar3 + 1);
        if (puVar4 != puVar5) {
          FUN_109445cb8();
          *puVar6 = *puVar6 & 0xfffffcff | (int)puVar5 << 8;
          return puVar4;
        }
        puVar4 = (uint *)&UNK_10f56d7a4;
        FUN_1099a5aa4();
        *puVar4 = *puVar4 & 0xfffc7fff | (int)puVar6 << 0xf;
        if (puVar6 != (uint *)0x0) {
          if (puVar6 == (uint *)0x1) {
            *(byte *)(puVar4 + 1) = (byte)*puVar5;
            *(undefined2 *)((long)puVar4 + 5) = 0;
            return puVar4;
          }
          puVar7 = (uint *)0x0;
          do {
            *(byte *)((long)puVar4 + ((ulong)puVar7 & 3) + 4) =
                 *(byte *)((long)puVar5 + (long)puVar7);
            puVar7 = (uint *)((long)puVar7 + 1);
          } while (puVar6 != puVar7);
        }
        return puVar4;
      }
      uVar8 = *param_3 & 0xfffffff8 | 1;
code_r0x000109445bc0:
      *param_3 = uVar8;
      return (uint *)((long)param_1 + 1);
    case 0x41:
      *param_3 = *param_3 | 0x1000;
    case 0x61:
      if ((uVar8 & 0xe00) == 0) goto LAB_109445bf8;
code_r0x000109445ad8:
      uVar8 = *param_3 & 0xfffffff8 | 4;
      goto code_r0x000109445bc0;
    case 0x42:
      *param_3 = *param_3 | 0x1000;
    case 0x62:
      if ((uVar8 & 0x1fe) == 0) goto LAB_109445bf8;
      uVar8 = *param_3 & 0xfffffff8 | 6;
      goto code_r0x000109445bc0;
    case 0x45:
      *param_3 = *param_3 | 0x1000;
    case 0x65:
      uVar8 = uVar8 & 0xe00;
      goto joined_r0x000109445bb0;
    case 0x46:
      *param_3 = *param_3 | 0x1000;
    case 0x66:
      uVar8 = uVar8 & 0xe00;
joined_r0x000109445b8c:
      if (uVar8 == 0) goto LAB_109445bf8;
      uVar8 = *param_3 & 0xfffffff8 | 2;
      goto code_r0x000109445bc0;
    case 0x47:
      *param_3 = *param_3 | 0x1000;
    case 0x67:
      uVar8 = uVar8 & 0xe00;
joined_r0x000109445aec:
      if (uVar8 == 0) goto LAB_109445bf8;
code_r0x000109445b00:
      uVar8 = *param_3 & 0xfffffff8 | 3;
      goto code_r0x000109445bc0;
    case 0x4c:
      if ((10 < uVar2) || (6 < uVar11)) goto LAB_109445bf8;
      *param_3 = *param_3 | 0x4000;
      param_1 = (uint *)((long)param_1 + 1);
      uVar11 = 7;
      break;
    case 0x58:
      *param_3 = *param_3 | 0x1000;
    case 0x78:
      if ((uVar8 & 0x1fe) != 0) goto code_r0x000109445ad8;
      goto LAB_109445bf8;
    case 99:
      if ((param_5 == 7) || ((uVar8 & 0x1fe) == 0)) goto LAB_109445bf8;
      uVar8 = *param_3 | 7;
      goto code_r0x000109445bc0;
    case 100:
      uVar8 = uVar8 & 0x1fe;
      goto joined_r0x000109445aec;
    case 0x6f:
      if ((uVar8 & 0x1fe) == 0) goto LAB_109445bf8;
      uVar8 = *param_3 & 0xfffffff8 | 5;
      goto code_r0x000109445bc0;
    case 0x70:
      if ((uVar8 & 0x5000) != 0) goto code_r0x000109445b00;
      goto LAB_109445bf8;
    case 0x73:
      uVar8 = uVar8 & 0x3080;
      goto joined_r0x000109445b8c;
    case 0x7d:
      return param_1;
    }
    if (param_1 == param_2) {
      return param_1;
    }
    bVar9 = (byte)*param_1;
  } while( true );
}



/* Entry: 109445c1c; end: 109445c67;  */

void FUN_109445c1c(long param_1,long param_2,uint *param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  
  uVar3 = (undefined4)((ulong)param_2 >> 0x20);
  iVar2 = (int)param_2;
  if (param_1 + 1 != param_2) {
    FUN_109445cb8(param_1 + 1,iVar2,param_3 + 3);
    *param_3 = *param_3 & 0xfffffcff | iVar2 << 8;
    return;
  }
  puVar1 = (uint *)&UNK_10f56d7a4;
  FUN_1099a5aa4();
  *puVar1 = *puVar1 & 0xfffc7fff | (int)param_3 << 0xf;
  if (param_3 != (uint *)0x0) {
    if (param_3 == (uint *)0x1) {
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)CONCAT44(uVar3,iVar2);
      *(undefined2 *)((long)puVar1 + 5) = 0;
      return;
    }
    puVar4 = (uint *)0x0;
    do {
      *(undefined1 *)((long)puVar1 + ((ulong)puVar4 & 3) + 4) =
           *(undefined1 *)(CONCAT44(uVar3,iVar2) + (long)puVar4);
      puVar4 = (uint *)((long)puVar4 + 1);
    } while (param_3 != puVar4);
  }
  return;
}



/* Entry: 109445c68; end: 109445cb7;  */

void FUN_109445c68(uint *param_1,undefined1 *param_2,ulong param_3)

{
  ulong uVar1;
  
  *param_1 = *param_1 & 0xfffc7fff | (int)param_3 << 0xf;
  if (param_3 != 0) {
    if (param_3 == 1) {
      *(undefined1 *)(param_1 + 1) = *param_2;
      *(undefined2 *)((long)param_1 + 5) = 0;
      return;
    }
    uVar1 = 0;
    do {
      *(undefined1 *)((long)param_1 + (uVar1 & 3) + 4) = param_2[uVar1];
      uVar1 = uVar1 + 1;
    } while (param_3 != uVar1);
  }
  return;
}



/* Entry: 109445cb8; end: 109445db7;  */

undefined1  [16] FUN_109445cb8(byte *param_1,byte *param_2,long *param_3,int *param_4,long param_5)

{
  int iVar1;
  byte *pbVar2;
  byte **ppbVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  byte *pbVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long lStack_48;
  int *piStack_40;
  uint *puStack_38;
  uint uStack_2c;
  byte *pbStack_28;
  
  uStack_2c = 0;
  pbVar2 = param_1 + 1;
  pbStack_28 = param_1;
  if (*param_1 - 0x30 < 10) {
    ppbVar3 = &pbStack_28;
    plVar8 = (long *)0xffffffff;
    FUN_109445db8(ppbVar3,param_2,0xffffffff);
    pbVar9 = param_2;
    if ((int)ppbVar3 != -1) {
      uVar7 = 0;
      *(int *)param_3 = (int)ppbVar3;
      pbVar4 = pbStack_28;
LAB_109445d84:
      auVar11._8_8_ = uVar7;
      auVar11._0_8_ = pbVar4;
      return auVar11;
    }
  }
  else {
    pbVar9 = param_2;
    if (*param_1 == 0x7b) {
      if (pbVar2 != param_2) {
        if ((*pbVar2 == 0x7d) || (*pbVar2 == 0x3a)) {
          iVar1 = *(int *)(param_5 + 0x10);
          if (iVar1 < 0) goto LAB_109445dac;
          *(int *)(param_5 + 0x10) = iVar1 + 1;
          *param_4 = iVar1;
          uStack_2c = 1;
        }
        else {
          puStack_38 = &uStack_2c;
          param_3 = &lStack_48;
          lStack_48 = param_5;
          piStack_40 = param_4;
          FUN_109445e3c(pbVar2,param_2,param_3);
        }
      }
      if ((pbVar2 != param_2) && (pbVar4 = pbVar2 + 1, *pbVar2 == 0x7d)) {
        uVar7 = (ulong)uStack_2c;
        goto LAB_109445d84;
      }
    }
    FUN_1099a5aa4(&UNK_10f3dbf3f);
    plVar8 = param_3;
  }
  FUN_1099a5aa4(&UNK_10f3dbf55);
  param_2 = pbVar9;
  param_3 = plVar8;
LAB_109445dac:
  puVar5 = (undefined8 *)&UNK_10f3dbf67;
  FUN_1099a5aa4();
  pbVar9 = (byte *)*puVar5;
  uVar10 = (uint)*pbVar9;
  plVar8 = (long *)0x0;
  pbVar2 = pbVar9;
  do {
    plVar6 = plVar8;
    pbVar2 = pbVar2 + 1;
    plVar8 = (long *)(ulong)(((int)plVar6 * 10 + (int)(char)uVar10) - 0x30);
    pbVar4 = param_2;
    if (pbVar2 == param_2) break;
    uVar10 = (uint)*pbVar2;
    pbVar4 = pbVar2;
  } while (uVar10 - 0x30 < 10);
  *puVar5 = pbVar4;
  if ((9 < (long)pbVar4 - (long)pbVar9) &&
     (((long)pbVar4 - (long)pbVar9 != 10 ||
      (((ulong)((int)(char)pbVar4[-1] - 0x30) & 0xfffffffe) + (long)plVar6 * 10 >> 0x1f != 0)))) {
    plVar8 = param_3;
  }
  auVar12._8_8_ = pbVar4;
  auVar12._0_8_ = plVar8;
  return auVar12;
}



/* Entry: 109445db8; end: 109445e3b;  */

ulong FUN_109445db8(undefined8 *param_1,byte *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  
  pbVar4 = (byte *)*param_1;
  uVar6 = (uint)*pbVar4;
  uVar2 = 0;
  pbVar5 = pbVar4;
  do {
    uVar1 = uVar2;
    pbVar5 = pbVar5 + 1;
    uVar2 = (ulong)(((int)uVar1 * 10 + (int)(char)uVar6) - 0x30);
    pbVar3 = param_2;
    if (pbVar5 == param_2) break;
    uVar6 = (uint)*pbVar5;
    pbVar3 = pbVar5;
  } while (uVar6 - 0x30 < 10);
  *param_1 = pbVar3;
  if ((9 < (long)pbVar3 - (long)pbVar4) &&
     (((long)pbVar3 - (long)pbVar4 != 10 ||
      (((ulong)((int)(char)pbVar3[-1] - 0x30) & 0xfffffffe) + uVar1 * 10 >> 0x1f != 0)))) {
    uVar2 = param_3;
  }
  return uVar2;
}



/* Entry: 109445e3c; end: 109445f7f;  */

byte * FUN_109445e3c(byte *param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  uint *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined4 uVar13;
  byte *pbVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  uint *puStack_208;
  uint *puStack_200;
  undefined4 uStack_1f8;
  ulong *puStack_1f0;
  ulong uStack_1e8;
  byte *pbStack_1e0;
  uint *puStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong *puStack_1b0;
  ulong *puStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  ulong auStack_190 [32];
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_40;
  code *pcStack_38;
  byte *pbStack_28;
  
  bVar3 = *param_1;
  plVar12 = param_3;
  pbStack_28 = param_1;
  if (bVar3 - 0x30 < 10) {
    pbVar7 = param_2;
    if (bVar3 == 0x30) {
      uVar13 = 0;
      pbStack_28 = param_1 + 1;
    }
    else {
      uVar13 = SUB84(&pbStack_28,0);
      plVar12 = (long *)0x7fffffff;
      FUN_109445db8();
    }
    bVar5 = pbStack_28 != param_2;
    param_2 = pbVar7;
    if ((bVar5) && ((*pbStack_28 == 0x3a || (*pbStack_28 == 0x7d)))) {
      *(undefined4 *)param_3[1] = uVar13;
      *(undefined4 *)param_3[2] = 1;
      if (*(int *)(*param_3 + 0x10) < 1) {
        *(undefined4 *)(*param_3 + 0x10) = 0xffffffff;
        return pbStack_28;
      }
      goto LAB_109445f74;
    }
  }
  else if (bVar3 == 0x5f || (bVar3 & 0xffffffdf) - 0x41 < 0x1a) {
    pbVar7 = param_1 + 1;
    do {
      pbVar14 = pbVar7;
      pbVar8 = param_2;
      if (pbVar14 == param_2) break;
      bVar3 = *pbVar14;
      pbVar7 = pbVar14 + 1;
    } while ((bVar3 - 0x30 < 10) ||
            (pbVar8 = pbVar14, bVar3 == 0x5f || (bVar3 & 0xffffffdf) - 0x41 < 0x1a));
    puVar16 = (undefined8 *)param_3[1];
    *puVar16 = param_1;
    puVar16[1] = (long)pbVar8 - (long)param_1;
    *(undefined4 *)param_3[2] = 2;
    *(undefined4 *)(*param_3 + 0x10) = 0xffffffff;
    return pbVar8;
  }
  FUN_1099a5aa4(&UNK_10f3dbf3f);
LAB_109445f74:
  puVar6 = (uint *)&UNK_10f3dbfa0;
  FUN_1099a5aa4();
  pcStack_38 = FUN_109445f80;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((*puVar6 & 0x3c0) != 0) {
    uVar17 = *(undefined8 *)puVar6;
    uVar4 = (uint)uVar17 >> 6 & 3;
    if (uVar4 != 0) {
      FUN_1094472f0(uVar4,puVar6 + 4,plVar12);
    }
    uVar4 = (uint)uVar17 >> 8 & 3;
    if (uVar4 != 0) {
      FUN_1094472f0(uVar4,puVar6 + 8,plVar12);
    }
    pbVar7 = (byte *)*plVar12;
    FUN_10944602c(pbVar7,*(long *)param_2,*(long *)(param_2 + 8),&stack0xffffffffffffff90);
    return pbVar7;
  }
  pbVar7 = (byte *)*plVar12;
  puVar1 = *(ulong **)param_2;
  uVar2 = *(ulong *)(param_2 + 8);
  pcStack_38 = FUN_109445f80;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = puVar6[3];
  uVar11 = uVar2;
  if ((-1 < (int)uVar4) && (uVar4 < uVar2)) {
    puStack_1a8 = &uStack_1b8;
    uStack_1c0 = uVar2;
    uStack_1b8 = (ulong)uVar4;
    puStack_1b0 = puVar1;
    puStack_1a0 = (undefined1 *)&uStack_1c0;
    FUN_109446370(puVar1,uVar2,&puStack_1b0);
    uVar11 = uStack_1c0;
  }
  uVar4 = *puVar6;
  if ((uVar4 & 7) == 1) {
    puStack_1b0 = auStack_190;
    puStack_1a0 = (undefined1 *)0x100;
    puStack_1a8 = (ulong *)0x0;
    pcStack_198 = FUN_10944665c;
    lStack_90 = 0;
    FUN_109446194(&puStack_1b0,puVar1,uVar2);
    uVar11 = (long)puStack_1a8 + lStack_90;
  }
  else if (puVar6[2] != 0) {
    puStack_1b0 = (ulong *)0x0;
    FUN_109446e58(puVar1,uVar11,&puStack_1b0);
  }
  puStack_1b0 = (ulong *)CONCAT71(puStack_1b0._1_7_,(uVar4 & 7) == 1);
  pbVar8 = pbVar7;
  puVar9 = puVar6;
  puStack_1a8 = puVar1;
  puStack_1a0 = (undefined1 *)uVar2;
  pcStack_198 = (code *)puVar1;
  auStack_190[0] = uVar11;
  FUN_109446280();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return pbVar8;
  }
  ___stack_chk_fail();
  pcStack_1c8 = FUN_109446194;
  lVar15 = *(long *)(pbVar8 + 8);
  uVar10 = lVar15 + 1;
  puStack_1f0 = puVar1;
  uStack_1e8 = uVar2;
  pbStack_1e0 = pbVar7;
  puStack_1d8 = puVar6;
  ppuStack_1d0 = &puStack_40;
  if (*(ulong *)(pbVar8 + 0x10) < uVar10) {
    (**(code **)(pbVar8 + 0x18))(pbVar8);
    lVar15 = *(long *)(pbVar8 + 8);
    uVar10 = lVar15 + 1;
  }
  *(ulong *)(pbVar8 + 8) = uVar10;
  *(undefined1 *)(*(long *)pbVar8 + lVar15) = 0x22;
  puVar6 = (uint *)((long)puVar9 + uVar11);
  do {
    puStack_200 = (uint *)0x0;
    uStack_1f8 = 0;
    puStack_208 = puVar6;
    func_0x000109446880(puVar9,(long)puVar6 - (long)puVar9,&puStack_208);
    FUN_109446adc(pbVar8,puVar9,puStack_208);
    puVar9 = puStack_200;
    if (puStack_200 == (uint *)0x0) break;
    func_0x00010944667c(pbVar8,&puStack_208);
  } while (puVar9 != puVar6);
  lVar15 = *(long *)(pbVar8 + 8);
  uVar11 = lVar15 + 1;
  if (*(ulong *)(pbVar8 + 0x10) < uVar11) {
    (**(code **)(pbVar8 + 0x18))(pbVar8);
    lVar15 = *(long *)(pbVar8 + 8);
    uVar11 = lVar15 + 1;
  }
  *(ulong *)(pbVar8 + 8) = uVar11;
  *(undefined1 *)(*(long *)pbVar8 + lVar15) = 0x22;
  return pbVar8;
}



/* Entry: 109445f80; end: 10944602b;  */

long * FUN_109445f80(uint *param_1,long *param_2,long *param_3)

{
  uint *puVar1;
  ulong *puVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puStack_1d8;
  uint *puStack_1d0;
  undefined4 uStack_1c8;
  ulong *puStack_1c0;
  ulong uStack_1b8;
  long *plStack_1b0;
  uint *puStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong *puStack_180;
  ulong *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  ulong auStack_160 [32];
  long lStack_60;
  long lStack_58;
  
  if ((*param_1 & 0x3c0) != 0) {
    uVar10 = *(undefined8 *)param_1;
    uVar4 = (uint)uVar10 >> 6 & 3;
    if (uVar4 != 0) {
      FUN_1094472f0(uVar4,param_1 + 4,param_3);
    }
    uVar4 = (uint)uVar10 >> 8 & 3;
    if (uVar4 != 0) {
      FUN_1094472f0(uVar4,param_1 + 8,param_3);
    }
    param_3 = (long *)*param_3;
    FUN_10944602c(param_3,*param_2,param_2[1],&stack0xffffffffffffffc0);
    return param_3;
  }
  param_3 = (long *)*param_3;
  puVar2 = (ulong *)*param_2;
  uVar3 = param_2[1];
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = param_1[3];
  uVar8 = uVar3;
  if ((-1 < (int)uVar4) && (uVar4 < uVar3)) {
    puStack_178 = &uStack_188;
    uStack_190 = uVar3;
    uStack_188 = (ulong)uVar4;
    puStack_180 = puVar2;
    puStack_170 = (undefined1 *)&uStack_190;
    FUN_109446370(puVar2,uVar3,&puStack_180);
    uVar8 = uStack_190;
  }
  uVar4 = *param_1;
  if ((uVar4 & 7) == 1) {
    puStack_180 = auStack_160;
    puStack_170 = (undefined1 *)0x100;
    puStack_178 = (ulong *)0x0;
    pcStack_168 = FUN_10944665c;
    lStack_60 = 0;
    FUN_109446194(&puStack_180,puVar2,uVar3);
    uVar8 = (long)puStack_178 + lStack_60;
  }
  else if (param_1[2] != 0) {
    puStack_180 = (ulong *)0x0;
    FUN_109446e58(puVar2,uVar8,&puStack_180);
  }
  puStack_180 = (ulong *)CONCAT71(puStack_180._1_7_,(uVar4 & 7) == 1);
  plVar5 = param_3;
  puVar6 = param_1;
  puStack_178 = puVar2;
  puStack_170 = (undefined1 *)uVar3;
  pcStack_168 = (code *)puVar2;
  auStack_160[0] = uVar8;
  FUN_109446280();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar5;
  }
  ___stack_chk_fail();
  pcStack_198 = FUN_109446194;
  lVar9 = plVar5[1];
  uVar7 = lVar9 + 1;
  puStack_1c0 = puVar2;
  uStack_1b8 = uVar3;
  plStack_1b0 = param_3;
  puStack_1a8 = param_1;
  puStack_1a0 = &stack0xfffffffffffffff0;
  if ((ulong)plVar5[2] < uVar7) {
    (*(code *)plVar5[3])(plVar5);
    lVar9 = plVar5[1];
    uVar7 = lVar9 + 1;
  }
  plVar5[1] = uVar7;
  *(undefined1 *)(*plVar5 + lVar9) = 0x22;
  puVar1 = (uint *)((long)puVar6 + uVar8);
  do {
    puStack_1d0 = (uint *)0x0;
    uStack_1c8 = 0;
    puStack_1d8 = puVar1;
    func_0x000109446880(puVar6,(long)puVar1 - (long)puVar6,&puStack_1d8);
    FUN_109446adc(plVar5,puVar6,puStack_1d8);
    puVar6 = puStack_1d0;
    if (puStack_1d0 == (uint *)0x0) break;
    func_0x00010944667c(plVar5,&puStack_1d8);
  } while (puVar6 != puVar1);
  lVar9 = plVar5[1];
  uVar8 = lVar9 + 1;
  if ((ulong)plVar5[2] < uVar8) {
    (*(code *)plVar5[3])(plVar5);
    lVar9 = plVar5[1];
    uVar8 = lVar9 + 1;
  }
  plVar5[1] = uVar8;
  *(undefined1 *)(*plVar5 + lVar9) = 0x22;
  return plVar5;
}



/* Entry: 10944602c; end: 109446193;  */

long * FUN_10944602c(long *param_1,ulong *param_2,ulong param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  long *plVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint *puStack_1d8;
  uint *puStack_1d0;
  undefined4 uStack_1c8;
  ulong *puStack_1c0;
  ulong uStack_1b8;
  long *plStack_1b0;
  uint *puStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong *puStack_180;
  ulong *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  ulong auStack_160 [32];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_4[3];
  uVar6 = param_3;
  if ((-1 < (int)uVar2) && (uVar2 < param_3)) {
    puStack_178 = &uStack_188;
    uStack_190 = param_3;
    uStack_188 = (ulong)uVar2;
    puStack_180 = param_2;
    puStack_170 = (undefined1 *)&uStack_190;
    FUN_109446370(param_2,param_3,&puStack_180);
    uVar6 = uStack_190;
  }
  uVar2 = *param_4;
  if ((uVar2 & 7) == 1) {
    puStack_180 = auStack_160;
    puStack_170 = (undefined1 *)0x100;
    puStack_178 = (ulong *)0x0;
    pcStack_168 = FUN_10944665c;
    lStack_60 = 0;
    FUN_109446194(&puStack_180,param_2,param_3);
    uVar6 = (long)puStack_178 + lStack_60;
  }
  else if (param_4[2] != 0) {
    puStack_180 = (ulong *)0x0;
    FUN_109446e58(param_2,uVar6,&puStack_180);
  }
  puStack_180 = (ulong *)CONCAT71(puStack_180._1_7_,(uVar2 & 7) == 1);
  plVar3 = param_1;
  puVar4 = param_4;
  puStack_178 = param_2;
  puStack_170 = (undefined1 *)param_3;
  pcStack_168 = (code *)param_2;
  auStack_160[0] = uVar6;
  FUN_109446280();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar3;
  }
  ___stack_chk_fail();
  pcStack_198 = FUN_109446194;
  lVar7 = plVar3[1];
  uVar5 = lVar7 + 1;
  puStack_1c0 = param_2;
  uStack_1b8 = param_3;
  plStack_1b0 = param_1;
  puStack_1a8 = param_4;
  puStack_1a0 = &stack0xfffffffffffffff0;
  if ((ulong)plVar3[2] < uVar5) {
    (*(code *)plVar3[3])(plVar3);
    lVar7 = plVar3[1];
    uVar5 = lVar7 + 1;
  }
  plVar3[1] = uVar5;
  *(undefined1 *)(*plVar3 + lVar7) = 0x22;
  puVar1 = (uint *)((long)puVar4 + uVar6);
  do {
    puStack_1d0 = (uint *)0x0;
    uStack_1c8 = 0;
    puStack_1d8 = puVar1;
    func_0x000109446880(puVar4,(long)puVar1 - (long)puVar4,&puStack_1d8);
    FUN_109446adc(plVar3,puVar4,puStack_1d8);
    puVar4 = puStack_1d0;
    if (puStack_1d0 == (uint *)0x0) break;
    func_0x00010944667c(plVar3,&puStack_1d8);
  } while (puVar4 != puVar1);
  lVar7 = plVar3[1];
  uVar6 = lVar7 + 1;
  if ((ulong)plVar3[2] < uVar6) {
    (*(code *)plVar3[3])(plVar3);
    lVar7 = plVar3[1];
    uVar6 = lVar7 + 1;
  }
  plVar3[1] = uVar6;
  *(undefined1 *)(*plVar3 + lVar7) = 0x22;
  return plVar3;
}



/* Entry: 109446194; end: 10944627f;  */

long * FUN_109446194(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lStack_48;
  long lStack_40;
  undefined4 uStack_38;
  
  lVar2 = param_1[1];
  uVar1 = lVar2 + 1;
  if ((ulong)param_1[2] < uVar1) {
    (*(code *)param_1[3])(param_1);
    lVar2 = param_1[1];
    uVar1 = lVar2 + 1;
  }
  param_1[1] = uVar1;
  *(undefined1 *)(*param_1 + lVar2) = 0x22;
  param_3 = param_2 + param_3;
  do {
    lStack_40 = 0;
    uStack_38 = 0;
    lStack_48 = param_3;
    func_0x000109446880(param_2,param_3 - param_2,&lStack_48);
    FUN_109446adc(param_1,param_2,lStack_48);
    param_2 = lStack_40;
    if (lStack_40 == 0) break;
    func_0x00010944667c(param_1,&lStack_48);
  } while (param_2 != param_3);
  lVar2 = param_1[1];
  uVar1 = lVar2 + 1;
  if ((ulong)param_1[2] < uVar1) {
    (*(code *)param_1[3])(param_1);
    lVar2 = param_1[1];
    uVar1 = lVar2 + 1;
  }
  param_1[1] = uVar1;
  *(undefined1 *)(*param_1 + lVar2) = 0x22;
  return param_1;
}



/* Entry: 109446280; end: 10944636f;  */

long FUN_109446280(long param_1,uint *param_2,long param_3,ulong param_4,char *param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (param_4 <= param_2[2]) {
    uVar3 = param_2[2] - param_4;
  }
  uVar2 = uVar3 >> ((long)(char)(&UNK_10dfca48c)[(ulong)(*param_2 >> 3) & 7] & 0x3fU);
  if (*(ulong *)(param_1 + 0x10) <
      *(long *)(param_1 + 8) + param_3 + uVar3 * ((ulong)(*param_2 >> 0xf) & 7)) {
    (**(code **)(param_1 + 0x18))(param_1);
  }
  if (uVar2 != 0) {
    FUN_1094471fc(param_1,uVar2,param_2);
  }
  if (*param_5 == '\x01') {
    FUN_109446194(param_1,*(undefined8 *)(param_5 + 8),*(undefined8 *)(param_5 + 0x10));
  }
  else {
    FUN_109446adc(param_1,*(long *)(param_5 + 0x18),
                  *(long *)(param_5 + 0x18) + *(long *)(param_5 + 0x20));
  }
  if (uVar3 == uVar2) {
    return param_1;
  }
  lVar1 = uVar3 - uVar2;
  uVar3 = (ulong)(*param_2 >> 0xf) & 7;
  if ((int)uVar3 == 1) {
    func_0x000109447280(param_1,lVar1,&stack0xffffffffffffffcf);
  }
  else if (lVar1 != 0) {
    do {
      FUN_109446adc(param_1,param_2 + 1,(long)(param_2 + 1) + uVar3);
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return param_1;
}



/* Entry: 109446370; end: 10944665b;  */

void FUN_109446370(byte *param_1,ulong param_2,long *param_3)

{
  byte *pbVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  byte abStack_68 [8];
  
  lVar2 = *param_3;
  plVar3 = (long *)param_3[1];
  plVar13 = (long *)param_3[2];
  pbVar14 = param_1;
  if (param_2 < 4) {
LAB_1094464d4:
    lVar17 = (long)(param_1 + param_2) - (long)pbVar14;
    if (lVar17 != 0) {
      lVar19 = 0;
      abStack_68[4] = 0;
      abStack_68[5] = 0;
      abStack_68[6] = 0;
      abStack_68[0] = 0;
      abStack_68[1] = 0;
      abStack_68[2] = 0;
      abStack_68[3] = 0;
      do {
        abStack_68[lVar19] = pbVar14[lVar19];
        lVar19 = lVar19 + 1;
      } while (pbVar14 + lVar19 != param_1 + param_2);
      pbVar15 = abStack_68;
      do {
        bVar7 = *pbVar15;
        uVar16 = (ulong)(bVar7 >> 3);
        lVar18 = (long)(char)(&UNK_10dfca46c)[uVar16];
        uVar10 = *(uint *)(&UNK_10dfca41c + lVar18 * 4);
        bVar6 = pbVar15[1];
        bVar8 = pbVar15[2];
        uVar4 = *(uint *)(&UNK_10dfca444 + lVar18 * 4);
        bVar9 = pbVar15[3];
        uVar12 = *(uint *)(&UNK_10dfca430 + lVar18 * 4);
        uVar5 = *(uint *)(&UNK_10dfca458 + lVar18 * 4);
        lVar19 = *plVar3;
        if (lVar19 == 0) {
          *plVar13 = (long)pbVar14 - lVar2;
        }
        else {
          *plVar3 = lVar19 + -1;
        }
        uVar4 = ((uVar10 & bVar7) << 0x12 | (bVar6 & 0x3f) << 0xc | (bVar8 & 0x3f) << 6 |
                bVar9 & 0x3f) >> (ulong)(uVar4 & 0x1f);
        uVar10 = 0x80;
        if ((uVar4 & 0x7ffff800) != 0xd800) {
          uVar10 = 0;
        }
        uVar11 = 0x40;
        if (uVar12 <= uVar4) {
          uVar11 = 0;
        }
        uVar12 = 0x100;
        if (uVar4 < 0x110000) {
          uVar12 = 0;
        }
        pbVar1 = pbVar15 + (ulong)(0x80ff0000U >> uVar16 & 1) + lVar18;
        if (((uVar11 | bVar8 >> 4 & 0xc | bVar6 >> 2 & 0x30 | (uint)(bVar9 >> 6) | uVar12 | uVar10)
            ^ 0x2a) >> (ulong)(uVar5 & 0x1f) != 0) {
          pbVar1 = pbVar15 + 1;
        }
      } while ((lVar19 != 0) &&
              (pbVar14 = pbVar14 + ((long)pbVar1 - (long)pbVar15), pbVar15 = pbVar1,
              pbVar1 < abStack_68 + lVar17));
    }
  }
  else {
    do {
      if (param_1 + (param_2 - 3) <= pbVar14) goto LAB_1094464d4;
      bVar7 = *pbVar14;
      uVar16 = (ulong)(bVar7 >> 3);
      lVar17 = (long)(char)(&UNK_10dfca46c)[uVar16];
      uVar10 = *(uint *)(&UNK_10dfca41c + lVar17 * 4);
      pbVar15 = pbVar14 + 1;
      bVar6 = *pbVar15;
      bVar8 = pbVar14[2];
      uVar4 = *(uint *)(&UNK_10dfca444 + lVar17 * 4);
      bVar9 = pbVar14[3];
      uVar12 = *(uint *)(&UNK_10dfca430 + lVar17 * 4);
      uVar5 = *(uint *)(&UNK_10dfca458 + lVar17 * 4);
      lVar19 = *plVar3;
      if (lVar19 == 0) {
        *plVar13 = (long)pbVar14 - lVar2;
      }
      else {
        *plVar3 = lVar19 + -1;
      }
      uVar4 = ((uVar10 & bVar7) << 0x12 | (bVar6 & 0x3f) << 0xc | (bVar8 & 0x3f) << 6 | bVar9 & 0x3f
              ) >> (ulong)(uVar4 & 0x1f);
      uVar10 = 0x80;
      if ((uVar4 & 0x7ffff800) != 0xd800) {
        uVar10 = 0;
      }
      uVar11 = 0x40;
      if (uVar12 <= uVar4) {
        uVar11 = 0;
      }
      uVar12 = 0x100;
      if (uVar4 < 0x110000) {
        uVar12 = 0;
      }
      pbVar14 = pbVar14 + (ulong)(0x80ff0000U >> uVar16 & 1) + lVar17;
      if (((uVar11 | bVar8 >> 4 & 0xc | bVar6 >> 2 & 0x30 | (uint)(bVar9 >> 6) | uVar12 | uVar10) ^
          0x2a) >> (ulong)(uVar5 & 0x1f) != 0) {
        pbVar14 = pbVar15;
      }
    } while (lVar19 != 0);
  }
  return;
}



/* Entry: 10944665c; end: 10944667b;  */

void FUN_10944665c(long param_1)

{
  if (*(long *)(param_1 + 8) == 0x100) {
    *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) + 0x100;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 10944667c; end: 10944695b;  */

/* WARNING: Possible PIC construction at 0x000109446874: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109446878) */

undefined8 ** FUN_10944667c(undefined8 **param_1,long *param_2)

{
  byte *pbVar1;
  undefined8 **ppuVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 **unaff_x19;
  undefined8 **ppuVar15;
  uint uVar16;
  byte *unaff_x20;
  ulong uVar17;
  uint uVar18;
  byte *unaff_x21;
  undefined8 unaff_x22;
  byte *pbVar19;
  uint uVar20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  byte abStack_b0 [8];
  undefined8 *puStack_a8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar12 = &stack0xfffffffffffffff0;
  uVar16 = *(uint *)(param_2 + 2);
  uVar17 = (ulong)uVar16;
  if ((int)uVar16 < 0x22) {
    if (uVar16 == 9) {
      puVar11 = param_1[1];
      puVar9 = (undefined8 *)((long)puVar11 + 1);
      if (param_1[2] < puVar9) {
        (*(code *)param_1[3])(param_1);
        puVar11 = param_1[1];
        puVar9 = (undefined8 *)((long)puVar11 + 1);
      }
      param_1[1] = puVar9;
      puVar12 = (undefined1 *)((long)*param_1 + (long)puVar11);
      uVar16 = 0x74;
    }
    else if (uVar16 == 10) {
      puVar11 = param_1[1];
      puVar9 = (undefined8 *)((long)puVar11 + 1);
      if (param_1[2] < puVar9) {
        (*(code *)param_1[3])(param_1);
        puVar11 = param_1[1];
        puVar9 = (undefined8 *)((long)puVar11 + 1);
      }
      param_1[1] = puVar9;
      puVar12 = (undefined1 *)((long)*param_1 + (long)puVar11);
      uVar16 = 0x6e;
    }
    else {
      if (uVar16 != 0xd) goto LAB_109446770;
      puVar11 = param_1[1];
      puVar9 = (undefined8 *)((long)puVar11 + 1);
      if (param_1[2] < puVar9) {
        (*(code *)param_1[3])(param_1);
        puVar11 = param_1[1];
        puVar9 = (undefined8 *)((long)puVar11 + 1);
      }
      param_1[1] = puVar9;
      puVar12 = (undefined1 *)((long)*param_1 + (long)puVar11);
      uVar16 = 0x72;
    }
  }
  else {
    if (((uVar16 != 0x22) && (uVar16 != 0x27)) && (uVar16 != 0x5c)) {
LAB_109446770:
      if (0xff < uVar16) {
        if (uVar16 >> 0x10 == 0) {
          puVar11 = param_1[1];
          puVar9 = (undefined8 *)((long)puVar11 + 1);
          if (param_1[2] < puVar9) {
            (*(code *)param_1[3])(param_1);
            puVar11 = param_1[1];
            puVar9 = (undefined8 *)((long)puVar11 + 1);
          }
          param_1[1] = puVar9;
          *(undefined1 *)((long)*param_1 + (long)puVar11) = 0x5c;
          puVar11 = param_1[1];
          puVar9 = (undefined8 *)((long)puVar11 + 1);
          if (param_1[2] < puVar9) {
            (*(code *)param_1[3])(param_1);
            puVar11 = param_1[1];
            puVar9 = (undefined8 *)((long)puVar11 + 1);
          }
          param_1[1] = puVar9;
          *(undefined1 *)((long)*param_1 + (long)puVar11) = 0x75;
          uStack_38 = CONCAT44(0x30303030,(undefined4)uStack_38);
          lVar13 = 3;
          do {
            *(undefined *)((long)&uStack_38 + lVar13 + 4) = (&UNK_10f416238)[uVar17 & 0xf];
            lVar13 = lVar13 + -1;
            uVar16 = (uint)uVar17;
            uVar17 = uVar17 >> 4;
          } while (0xf < uVar16);
          FUN_109446adc(param_1,(long)&uStack_38 + 4,&stack0xffffffffffffffd0);
          return param_1;
        }
        if (uVar16 >> 0x10 < 0x11) {
          puVar10 = &uStack_40;
          uStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar11 = param_1[1];
          puVar9 = (undefined8 *)((long)puVar11 + 1);
          if (param_1[2] < puVar9) {
            (*(code *)param_1[3])(param_1);
            puVar11 = param_1[1];
            puVar9 = (undefined8 *)((long)puVar11 + 1);
          }
          param_1[1] = puVar9;
          *(undefined1 *)((long)*param_1 + (long)puVar11) = 0x5c;
          puVar11 = param_1[1];
          puVar9 = (undefined8 *)((long)puVar11 + 1);
          if (param_1[2] < puVar9) {
            (*(code *)param_1[3])(param_1);
            puVar11 = param_1[1];
            puVar9 = (undefined8 *)((long)puVar11 + 1);
          }
          param_1[1] = puVar9;
          *(undefined1 *)((long)*param_1 + (long)puVar11) = 0x55;
          uStack_40 = 0x3030303030303030;
          lVar13 = 7;
          do {
            *(undefined *)((long)&uStack_40 + lVar13) = (&UNK_10f416238)[uVar17 & 0xf];
            lVar13 = lVar13 + -1;
            uVar16 = (uint)uVar17;
            uVar17 = uVar17 >> 4;
          } while (0xf < uVar16);
          puVar9 = &uStack_38;
          ppuVar7 = param_1;
          FUN_109446adc();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == uStack_38) {
            return param_1;
          }
          ___stack_chk_fail();
          puStack_a8 = puVar9;
          ppuVar15 = ppuVar7;
          if (puVar10 < (undefined1 *)0x4) {
LAB_109446fb0:
            lVar13 = ((long)ppuVar7 + (long)puVar10) - (long)ppuVar15;
            ppuVar8 = ppuVar7;
            if (lVar13 != 0) {
              lVar14 = 0;
              abStack_b0[4] = 0;
              abStack_b0[5] = 0;
              abStack_b0[6] = 0;
              abStack_b0[0] = 0;
              abStack_b0[1] = 0;
              abStack_b0[2] = 0;
              abStack_b0[3] = 0;
              do {
                abStack_b0[lVar14] = *(byte *)((long)ppuVar15 + lVar14);
                lVar14 = lVar14 + 1;
              } while ((byte *)((long)ppuVar15 + lVar14) != (byte *)((long)ppuVar7 + (long)puVar10))
              ;
              pbVar19 = abStack_b0;
              pbVar1 = pbVar19 + lVar13;
              do {
                uVar17 = (ulong)(*pbVar19 >> 3);
                lVar13 = (long)(char)(&UNK_10dfca46c)[uVar17];
                uVar17 = (ulong)(0x80ff0000U >> uVar17 & 1);
                bVar4 = pbVar19[1];
                uVar5 = ((*(uint *)(&UNK_10dfca41c + lVar13 * 4) & (uint)*pbVar19) << 0x12 |
                         (bVar4 & 0x3f) << 0xc | (pbVar19[2] & 0x3f) << 6 | pbVar19[3] & 0x3f) >>
                        (ulong)(*(uint *)(&UNK_10dfca444 + lVar13 * 4) & 0x1f);
                uVar16 = 0x40;
                if (*(uint *)(&UNK_10dfca430 + lVar13 * 4) <= uVar5) {
                  uVar16 = 0;
                }
                uVar18 = 0x80;
                if ((uVar5 & 0x7ffff800) != 0xd800) {
                  uVar18 = 0;
                }
                uVar20 = 0x100;
                if (uVar5 < 0x110000) {
                  uVar20 = 0;
                }
                bVar6 = ((uVar16 | pbVar19[2] >> 4 & 0xc | bVar4 >> 2 & 0x30 |
                                   (uint)(pbVar19[3] >> 6) | uVar20 | uVar18) ^ 0x2a) >>
                        (ulong)(*(uint *)(&UNK_10dfca458 + lVar13 * 4) & 0x1f) != 0;
                if (bVar6) {
                  uVar5 = 0xffffffff;
                }
                lVar14 = uVar17 + lVar13;
                pbVar3 = pbVar19 + lVar13 + uVar17;
                if (bVar6) {
                  lVar14 = 1;
                  pbVar3 = pbVar19 + 1;
                }
                ppuVar8 = &puStack_a8;
                FUN_10944712c(ppuVar8,uVar5,ppuVar15,lVar14);
                lVar13 = (long)pbVar3 - (long)pbVar19;
                if ((int)ppuVar8 == 0) {
                  lVar13 = 0;
                  pbVar3 = pbVar19;
                }
                pbVar19 = pbVar3;
                ppuVar15 = (undefined8 **)((long)ppuVar15 + lVar13);
              } while ((int)ppuVar8 != 0 && pbVar19 < pbVar1);
            }
          }
          else {
            do {
              if ((byte *)((long)ppuVar7 + (long)puVar10) + -3 <= ppuVar15) goto LAB_109446fb0;
              uVar17 = (ulong)(*(byte *)ppuVar15 >> 3);
              lVar13 = (long)(char)(&UNK_10dfca46c)[uVar17];
              uVar17 = (ulong)(0x80ff0000U >> uVar17 & 1);
              bVar4 = *(byte *)((long)ppuVar15 + 1);
              uVar5 = ((*(uint *)(&UNK_10dfca41c + lVar13 * 4) & (uint)*(byte *)ppuVar15) << 0x12 |
                       (bVar4 & 0x3f) << 0xc | (*(byte *)((long)ppuVar15 + 2) & 0x3f) << 6 |
                      *(byte *)((long)ppuVar15 + 3) & 0x3f) >>
                      (ulong)(*(uint *)(&UNK_10dfca444 + lVar13 * 4) & 0x1f);
              uVar16 = 0x40;
              if (*(uint *)(&UNK_10dfca430 + lVar13 * 4) <= uVar5) {
                uVar16 = 0;
              }
              uVar18 = 0x80;
              if ((uVar5 & 0x7ffff800) != 0xd800) {
                uVar18 = 0;
              }
              uVar20 = 0x100;
              if (uVar5 < 0x110000) {
                uVar20 = 0;
              }
              bVar6 = ((uVar16 | *(byte *)((long)ppuVar15 + 2) >> 4 & 0xc | bVar4 >> 2 & 0x30 |
                                 (uint)(*(byte *)((long)ppuVar15 + 3) >> 6) | uVar20 | uVar18) ^
                      0x2a) >> (ulong)(*(uint *)(&UNK_10dfca458 + lVar13 * 4) & 0x1f) != 0;
              if (bVar6) {
                uVar5 = 0xffffffff;
              }
              lVar14 = uVar17 + lVar13;
              ppuVar2 = (undefined8 **)((long)ppuVar15 + lVar13 + uVar17);
              if (bVar6) {
                lVar14 = 1;
                ppuVar2 = (undefined8 **)((long)ppuVar15 + 1);
              }
              ppuVar8 = &puStack_a8;
              FUN_10944712c(ppuVar8,uVar5,ppuVar15,lVar14);
              ppuVar15 = ppuVar2;
            } while (((ulong)ppuVar8 & 1) != 0);
          }
          return ppuVar8;
        }
        pbVar19 = (byte *)*param_2;
        unaff_x21 = (byte *)param_2[1];
        if (pbVar19 == unaff_x21) {
          return param_1;
        }
        unaff_x20 = pbVar19 + 1;
        uVar17 = (ulong)*pbVar19;
        unaff_x30 = 0x109446878;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
        unaff_x19 = param_1;
        unaff_x29 = puVar12;
      }
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(byte **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 ***)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      puVar11 = param_1[1];
      puVar9 = (undefined8 *)((long)puVar11 + 1);
      if (param_1[2] < puVar9) {
        (*(code *)param_1[3])(param_1);
        puVar11 = param_1[1];
        puVar9 = (undefined8 *)((long)puVar11 + 1);
      }
      param_1[1] = puVar9;
      *(undefined1 *)((long)*param_1 + (long)puVar11) = 0x5c;
      puVar11 = param_1[1];
      puVar9 = (undefined8 *)((long)puVar11 + 1);
      if (param_1[2] < puVar9) {
        (*(code *)param_1[3])(param_1);
        puVar11 = param_1[1];
        puVar9 = (undefined8 *)((long)puVar11 + 1);
      }
      param_1[1] = puVar9;
      *(undefined1 *)((long)*param_1 + (long)puVar11) = 0x78;
      *(undefined2 *)((long)register0x00000008 + -0x32) = 0x3030;
      lVar13 = 1;
      do {
        *(undefined *)((long)register0x00000008 + lVar13 + -0x32) = (&UNK_10f416238)[uVar17 & 0xf];
        lVar13 = lVar13 + -1;
        uVar16 = (uint)uVar17;
        uVar17 = uVar17 >> 4;
      } while (0xf < uVar16);
      FUN_109446adc(param_1,(undefined1 *)((long)register0x00000008 + -0x32),
                    (undefined1 *)((long)register0x00000008 + -0x30));
      return param_1;
    }
    puVar11 = param_1[1];
    puVar9 = (undefined8 *)((long)puVar11 + 1);
    if (param_1[2] < puVar9) {
      (*(code *)param_1[3])(param_1);
      puVar11 = param_1[1];
      puVar9 = (undefined8 *)((long)puVar11 + 1);
    }
    param_1[1] = puVar9;
    puVar12 = (undefined1 *)((long)*param_1 + (long)puVar11);
  }
  *puVar12 = 0x5c;
  puVar11 = param_1[1];
  puVar9 = (undefined8 *)((long)puVar11 + 1);
  if (param_1[2] < puVar9) {
    (*(code *)param_1[3])(param_1);
    puVar11 = param_1[1];
    puVar9 = (undefined8 *)((long)puVar11 + 1);
  }
  param_1[1] = puVar9;
  *(char *)((long)*param_1 + (long)puVar11) = (char)uVar16;
  return param_1;
}



/* Entry: 10944695c; end: 109446adb;  */

byte * FUN_10944695c(undefined8 *param_1,byte *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  
  uVar6 = (ulong)(*param_2 >> 3);
  lVar11 = (long)(char)(&UNK_10dfca46c)[uVar6];
  uVar6 = (ulong)(0x80ff0000U >> uVar6 & 1);
  bVar2 = param_2[1];
  uVar3 = ((*(uint *)(&UNK_10dfca41c + lVar11 * 4) & (uint)*param_2) << 0x12 | (bVar2 & 0x3f) << 0xc
           | (param_2[2] & 0x3f) << 6 | param_2[3] & 0x3f) >>
          (ulong)(*(uint *)(&UNK_10dfca444 + lVar11 * 4) & 0x1f);
  uVar7 = 0x40;
  if (*(uint *)(&UNK_10dfca430 + lVar11 * 4) <= uVar3) {
    uVar7 = 0;
  }
  uVar8 = 0x80;
  if ((uVar3 & 0x7ffff800) != 0xd800) {
    uVar8 = 0;
  }
  uVar9 = 0x100;
  if (uVar3 >> 0x10 < 0x11) {
    uVar9 = 0;
  }
  uVar7 = ((uVar7 | param_2[2] >> 4 & 0xc | bVar2 >> 2 & 0x30 | (uint)(param_2[3] >> 6) | uVar9 |
           uVar8) ^ 0x2a) >> (ulong)(*(uint *)(&UNK_10dfca458 + lVar11 * 4) & 0x1f);
  if (uVar7 != 0) {
    uVar3 = 0xffffffff;
  }
  uVar10 = (ulong)uVar3;
  lVar1 = uVar6 + lVar11;
  if (uVar7 != 0) {
    lVar1 = 1;
  }
  if ((((uVar3 < 0x20) || (uVar3 == 0x22)) || (uVar3 == 0x5c)) ||
     ((uVar3 == 0x7f || (FUN_1099a76e8(), (uVar10 & 1) == 0)))) {
    plVar5 = (long *)*param_1;
    *plVar5 = param_3;
    plVar5[1] = param_3 + lVar1;
    *(uint *)(plVar5 + 2) = uVar3;
    pbVar4 = (byte *)0x0;
  }
  else {
    pbVar4 = param_2 + lVar11 + uVar6;
    if (uVar7 != 0) {
      pbVar4 = param_2 + 1;
    }
  }
  return pbVar4;
}



/* Entry: 109446adc; end: 109446e57;  */

void FUN_109446adc(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  
  if (param_2 != param_3) {
    lVar2 = param_1[1];
    do {
      uVar6 = (long)param_3 - (long)param_2;
      uVar4 = param_1[2];
      if (uVar4 < uVar6 + lVar2) {
        (*(code *)param_1[3])(param_1);
        lVar2 = param_1[1];
        uVar4 = param_1[2];
      }
      uVar1 = uVar4 - lVar2;
      if (uVar6 <= uVar4 - lVar2) {
        uVar1 = uVar6;
      }
      if (uVar1 != 0) {
        puVar3 = (undefined1 *)(*param_1 + lVar2);
        puVar5 = param_2;
        uVar4 = uVar1;
        do {
          *puVar3 = *puVar5;
          uVar4 = uVar4 - 1;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar4 != 0);
        lVar2 = param_1[1];
      }
      lVar2 = lVar2 + uVar1;
      param_1[1] = lVar2;
      param_2 = param_2 + uVar1;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 109446e58; end: 10944712b;  */

void FUN_109446e58(byte *param_1,ulong param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  byte abStack_70 [8];
  undefined8 uStack_68;
  
  uStack_68 = param_3;
  pbVar10 = param_1;
  if (param_2 < 4) {
LAB_109446fb0:
    lVar8 = (long)(param_1 + param_2) - (long)pbVar10;
    if (lVar8 != 0) {
      lVar9 = 0;
      abStack_70[4] = 0;
      abStack_70[5] = 0;
      abStack_70[6] = 0;
      abStack_70[0] = 0;
      abStack_70[1] = 0;
      abStack_70[2] = 0;
      abStack_70[3] = 0;
      do {
        abStack_70[lVar9] = pbVar10[lVar9];
        lVar9 = lVar9 + 1;
      } while (pbVar10 + lVar9 != param_1 + param_2);
      pbVar13 = abStack_70;
      pbVar1 = pbVar13 + lVar8;
      do {
        uVar7 = (ulong)(*pbVar13 >> 3);
        lVar8 = (long)(char)(&UNK_10dfca46c)[uVar7];
        uVar7 = (ulong)(0x80ff0000U >> uVar7 & 1);
        bVar3 = pbVar13[1];
        uVar4 = ((*(uint *)(&UNK_10dfca41c + lVar8 * 4) & (uint)*pbVar13) << 0x12 |
                 (bVar3 & 0x3f) << 0xc | (pbVar13[2] & 0x3f) << 6 | pbVar13[3] & 0x3f) >>
                (ulong)(*(uint *)(&UNK_10dfca444 + lVar8 * 4) & 0x1f);
        uVar11 = 0x40;
        if (*(uint *)(&UNK_10dfca430 + lVar8 * 4) <= uVar4) {
          uVar11 = 0;
        }
        uVar12 = 0x80;
        if ((uVar4 & 0x7ffff800) != 0xd800) {
          uVar12 = 0;
        }
        uVar14 = 0x100;
        if (uVar4 < 0x110000) {
          uVar14 = 0;
        }
        bVar5 = ((uVar11 | pbVar13[2] >> 4 & 0xc | bVar3 >> 2 & 0x30 | (uint)(pbVar13[3] >> 6) |
                  uVar14 | uVar12) ^ 0x2a) >> (ulong)(*(uint *)(&UNK_10dfca458 + lVar8 * 4) & 0x1f)
                != 0;
        if (bVar5) {
          uVar4 = 0xffffffff;
        }
        lVar9 = uVar7 + lVar8;
        pbVar2 = pbVar13 + lVar8 + uVar7;
        if (bVar5) {
          lVar9 = 1;
          pbVar2 = pbVar13 + 1;
        }
        puVar6 = &uStack_68;
        FUN_10944712c(puVar6,uVar4,pbVar10,lVar9);
        lVar8 = (long)pbVar2 - (long)pbVar13;
        if ((int)puVar6 == 0) {
          lVar8 = 0;
          pbVar2 = pbVar13;
        }
        pbVar13 = pbVar2;
        pbVar10 = pbVar10 + lVar8;
      } while ((int)puVar6 != 0 && pbVar13 < pbVar1);
    }
  }
  else {
    do {
      if (param_1 + (param_2 - 3) <= pbVar10) goto LAB_109446fb0;
      uVar7 = (ulong)(*pbVar10 >> 3);
      lVar8 = (long)(char)(&UNK_10dfca46c)[uVar7];
      uVar7 = (ulong)(0x80ff0000U >> uVar7 & 1);
      bVar3 = pbVar10[1];
      uVar4 = ((*(uint *)(&UNK_10dfca41c + lVar8 * 4) & (uint)*pbVar10) << 0x12 |
               (bVar3 & 0x3f) << 0xc | (pbVar10[2] & 0x3f) << 6 | pbVar10[3] & 0x3f) >>
              (ulong)(*(uint *)(&UNK_10dfca444 + lVar8 * 4) & 0x1f);
      uVar11 = 0x40;
      if (*(uint *)(&UNK_10dfca430 + lVar8 * 4) <= uVar4) {
        uVar11 = 0;
      }
      uVar12 = 0x80;
      if ((uVar4 & 0x7ffff800) != 0xd800) {
        uVar12 = 0;
      }
      uVar14 = 0x100;
      if (uVar4 < 0x110000) {
        uVar14 = 0;
      }
      bVar5 = ((uVar11 | pbVar10[2] >> 4 & 0xc | bVar3 >> 2 & 0x30 | (uint)(pbVar10[3] >> 6) |
                uVar14 | uVar12) ^ 0x2a) >> (ulong)(*(uint *)(&UNK_10dfca458 + lVar8 * 4) & 0x1f) !=
              0;
      if (bVar5) {
        uVar4 = 0xffffffff;
      }
      lVar9 = uVar7 + lVar8;
      pbVar13 = pbVar10 + lVar8 + uVar7;
      if (bVar5) {
        lVar9 = 1;
        pbVar13 = pbVar10 + 1;
      }
      puVar6 = &uStack_68;
      FUN_10944712c(puVar6,uVar4,pbVar10,lVar9);
      pbVar10 = pbVar13;
    } while (((ulong)puVar6 & 1) != 0);
  }
  return;
}



/* Entry: 10944712c; end: 1094471fb;  */

undefined8 FUN_10944712c(undefined8 *param_1,uint param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ushort uVar4;
  
  if (param_2 >> 8 < 0x11) {
    lVar3 = 1;
  }
  else {
    lVar3 = 2;
    if ((0x8a < param_2 >> 5) && (1 < param_2 - 0x2329)) {
      auVar2._2_2_ = -(ushort)(param_2 - 0xf900 < 0x200);
      auVar2._0_2_ = -(ushort)(param_2 - 0xac00 < 0x2ba4);
      auVar2._4_2_ = -(ushort)(param_2 - 0xfe10 < 10);
      auVar2._6_2_ = -(ushort)(param_2 - 0xfe30 < 0x40);
      auVar2._8_2_ = -(ushort)(param_2 - 0xff00 < 0x61);
      auVar2._10_2_ = -(ushort)(param_2 - 0xffe0 < 7);
      auVar2._12_2_ = -(ushort)((param_2 & 0xfffefffe) - 0x20000 < 0xfffe);
      auVar2._14_2_ = -(ushort)(param_2 - 0x1f300 < 0x350);
      uVar4 = NEON_umaxv(auVar2,2);
      lVar3 = 2;
      if ((uVar4 & 1) == 0) {
        lVar1 = 1;
        if (param_2 >> 8 == 0x1f9) {
          lVar1 = 2;
        }
        lVar3 = 2;
        if (param_2 == 0x303f || 0x764 < param_2 - 0x2e80 >> 4) {
          lVar3 = lVar1;
        }
      }
    }
  }
  *(long *)*param_1 = *(long *)*param_1 + lVar3;
  return 1;
}



/* Entry: 1094471fc; end: 1094472ef;  */

undefined8 FUN_1094471fc(undefined8 param_1,long param_2,uint *param_3)

{
  ulong uVar1;
  undefined1 uStack_31;
  
  uVar1 = (ulong)(*param_3 >> 0xf) & 7;
  if ((int)uVar1 == 1) {
    uStack_31 = (undefined1)param_3[1];
    func_0x000109447280(param_1,param_2,&uStack_31);
  }
  else if (param_2 != 0) {
    do {
      FUN_109446adc(param_1,param_3 + 1,(long)(param_3 + 1) + uVar1);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return param_1;
}



/* Entry: 1094472f0; end: 109447433;  */

void FUN_1094472f0(int param_1,uint *param_2,long param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 *extraout_x8;
  ulong uVar5;
  undefined8 uVar6;
  ulong uStack_40;
  ulong uStack_38;
  uint uStack_30;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == 1) {
    uVar3 = *param_2;
    uStack_30 = 0;
    uVar5 = *(ulong *)(param_3 + 8);
    puVar4 = param_2;
    if ((long)uVar5 < 0) {
      if ((int)uVar3 < (int)uVar5) {
        puVar2 = (ulong *)(*(long *)(param_3 + 0x10) + (long)(int)uVar3 * 0x20);
        uStack_30 = (uint)puVar2[2];
        uStack_38 = puVar2[1];
        uStack_40 = *puVar2;
      }
    }
    else if ((uVar3 < 0xf) &&
            (uVar5 = uVar5 >> ((ulong)(uVar3 << 2) & 0x3f), uStack_30 = (uint)uVar5 & 0xf,
            (uVar5 & 0xf) != 0)) {
      puVar2 = (ulong *)(*(long *)(param_3 + 0x10) + (long)(int)uVar3 * 0x10);
      uStack_38 = puVar2[1];
      uStack_40 = *puVar2;
    }
  }
  else {
    puVar4 = *(uint **)param_2;
    FUN_109447494(&uStack_40,param_3 + 8,puVar4,*(undefined8 *)(param_2 + 2));
  }
  uVar5 = uStack_40;
  switch(uStack_30) {
  case 0:
    goto code_r0x000109447428;
  case 1:
    uVar5 = uStack_40 & 0xffffffff;
    if (-1 < (int)uStack_40) goto code_r0x0001094473e0;
    break;
  case 2:
    uVar5 = uStack_40 & 0xffffffff;
    goto code_r0x0001094473e0;
  case 3:
    if (0x7fffffffffffffff < uStack_40) {
      uVar5 = 0xffffffffffffffff;
    }
    goto code_r0x0001094473e0;
  case 4:
  case 6:
code_r0x0001094473cc:
code_r0x0001094473e0:
    if (uVar5 >> 0x1f != 0) break;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
      return;
    }
    goto code_r0x000109447424;
  case 5:
    if (-1 < (long)uStack_38) goto code_r0x0001094473cc;
    break;
  default:
    FUN_1099a5aa4(&UNK_10f56d7e9);
  }
  FUN_1099a5aa4(&UNK_10f56d7c9);
code_r0x000109447424:
  ___stack_chk_fail();
code_r0x000109447428:
  puVar2 = (ulong *)&UNK_10f56d7b6;
  FUN_1099a5aa4();
  *(undefined4 *)(extraout_x8 + 2) = 0;
  uVar5 = *puVar2;
  uVar3 = (uint)puVar4;
  if ((long)uVar5 < 0) {
    if ((int)uVar3 < (int)uVar5) {
      puVar1 = (undefined8 *)(puVar2[1] + (long)(int)uVar3 * 0x20);
      uVar6 = *puVar1;
      extraout_x8[1] = puVar1[1];
      *extraout_x8 = uVar6;
      *(undefined4 *)(extraout_x8 + 2) = *(undefined4 *)(puVar1 + 2);
      return;
    }
  }
  else if ((uVar3 < 0xf) &&
          (uVar5 = uVar5 >> ((ulong)(uVar3 << 2) & 0x3f),
          *(uint *)(extraout_x8 + 2) = (uint)uVar5 & 0xf, (uVar5 & 0xf) != 0)) {
    puVar1 = (undefined8 *)(puVar2[1] + ((ulong)puVar4 & 0xffffffff) * 0x10);
    uVar6 = *puVar1;
    extraout_x8[1] = puVar1[1];
    *extraout_x8 = uVar6;
  }
  return;
}



/* Entry: 109447434; end: 109447493;  */

void FUN_109447434(undefined8 *param_1,ulong *param_2,uint param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 2) = 0;
  uVar2 = *param_2;
  if ((long)uVar2 < 0) {
    if ((int)param_3 < (int)uVar2) {
      puVar1 = (undefined8 *)(param_2[1] + (long)(int)param_3 * 0x20);
      uVar3 = *puVar1;
      param_1[1] = puVar1[1];
      *param_1 = uVar3;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar1 + 2);
      return;
    }
  }
  else if ((param_3 < 0xf) &&
          (uVar2 = uVar2 >> ((ulong)(param_3 << 2) & 0x3f),
          *(uint *)(param_1 + 2) = (uint)uVar2 & 0xf, (uVar2 & 0xf) != 0)) {
    puVar1 = (undefined8 *)(param_2[1] + (ulong)param_3 * 0x10);
    uVar3 = *puVar1;
    param_1[1] = puVar1[1];
    *param_1 = uVar3;
  }
  return;
}


