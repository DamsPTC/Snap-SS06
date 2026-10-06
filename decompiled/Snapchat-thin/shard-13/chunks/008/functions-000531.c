/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ad18548; end: 10ad185bf;  */

void FUN_10ad18548(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10ad18408();
  if (lVar1 != 0) {
    func_0x00010ad1857c(param_1,lVar1);
  }
  return;
}



/* Entry: 10ad185c0; end: 10ad186df;  */

void FUN_10ad185c0(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10ad18674;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10ad18674;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_10ad18674:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10ad186e0; end: 10ad18737;  */

void FUN_10ad186e0(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *param_1 = param_2;
  if (lVar2 != 0) {
    if ((char)param_1[2] == '\x01') {
      plVar1 = *(long **)(lVar2 + 0x18);
      *(undefined8 *)(lVar2 + 0x18) = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10ad18738; end: 10ad18b2b;  */

undefined1  [16] FUN_10ad18738(long *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

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
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x24;
  undefined1 auVar16 [16];
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  uVar14 = (ulong)*param_2;
  uVar15 = param_1[1];
  if (uVar15 != 0) {
    uVar6 = uVar15 - 1;
    if ((uVar15 & uVar6) == 0) {
      unaff_x24 = uVar6 & uVar14;
    }
    else {
      unaff_x24 = uVar14;
      if (uVar15 <= uVar14) {
        uVar9 = 0;
        if (uVar15 != 0) {
          uVar9 = uVar14 / uVar15;
        }
        unaff_x24 = uVar14 - uVar9 * uVar15;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar13 = (long *)*puVar8; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
        uVar9 = plVar13[1];
        if (uVar9 == uVar14) {
          if ((int)plVar13[2] == *param_2) {
            uVar5 = 0;
            goto LAB_10ad18aac;
          }
        }
        else {
          if ((uVar15 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar15 <= uVar9) {
            uVar7 = 0;
            if (uVar15 != 0) {
              uVar7 = uVar9 / uVar15;
            }
            uVar9 = uVar9 - uVar7 * uVar15;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar13 = (long *)0x20;
  __Znwm();
  uStack_48 = 1;
  *plVar13 = 0;
  plVar13[1] = uVar14;
  *(undefined4 *)(plVar13 + 2) = *(undefined4 *)*param_4;
  plVar13[3] = 0;
  plStack_58 = plVar13;
  plStack_50 = param_1;
  if ((uVar15 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar15))
  goto LAB_10ad18a14;
  uVar6 = 1;
  if (2 < uVar15) {
    uVar6 = (ulong)((uVar15 & uVar15 - 1) != 0);
  }
  uVar6 = uVar6 | uVar15 << 1;
  uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar6 <= uVar9) {
    uVar6 = uVar9;
  }
  if (uVar6 - 1 == 0) {
    uVar6 = 2;
  }
  else if ((uVar6 & uVar6 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar15 = param_1[1];
  }
  if (uVar15 < uVar6) {
LAB_10ad1889c:
    if (uVar6 >> 0x3d != 0) {
      func_0x000109ffded8();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad18b14);
      (*pcVar2)();
    }
    lVar3 = uVar6 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    uVar15 = 0;
    param_1[1] = uVar6;
    do {
      *(undefined8 *)(*param_1 + uVar15 * 8) = 0;
      uVar15 = uVar15 + 1;
    } while (uVar6 != uVar15);
    plVar13 = (long *)param_1[2];
    uVar15 = uVar6;
    if (plVar13 != (long *)0x0) {
      uVar9 = plVar13[1];
      uVar7 = uVar6 - 1;
      if ((uVar6 & uVar7) == 0) {
        uVar9 = uVar9 & uVar7;
      }
      else if (uVar6 <= uVar9) {
        uVar12 = 0;
        if (uVar6 != 0) {
          uVar12 = uVar9 / uVar6;
        }
        uVar9 = uVar9 - uVar12 * uVar6;
      }
      *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar13;
      while (plVar10 != (long *)0x0) {
        uVar12 = plVar10[1];
        if ((uVar6 & uVar7) == 0) {
          uVar12 = uVar12 & uVar7;
        }
        else if (uVar6 <= uVar12) {
          uVar1 = 0;
          if (uVar6 != 0) {
            uVar1 = uVar12 / uVar6;
          }
          uVar12 = uVar12 - uVar1 * uVar6;
        }
        plVar11 = plVar10;
        if (uVar12 != uVar9) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + uVar12 * 8) == 0) {
            *(long **)(lVar3 + uVar12 * 8) = plVar13;
            uVar9 = uVar12;
          }
          else {
            *plVar13 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + uVar12 * 8);
            **(long **)(lVar3 + uVar12 * 8) = (long)plVar10;
            plVar11 = plVar13;
          }
        }
        plVar13 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (uVar6 < uVar15) {
    uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar15 < 3) || ((uVar15 & uVar15 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar9) {
      uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
    }
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    if (uVar6 < uVar15) {
      if (uVar6 != 0) goto LAB_10ad1889c;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      uVar15 = 0;
    }
    else {
      uVar15 = param_1[1];
    }
  }
  if ((uVar15 & uVar15 - 1) == 0) {
    unaff_x24 = uVar15 - 1 & uVar14;
  }
  else {
    unaff_x24 = uVar14;
    if (uVar15 <= uVar14) {
      uVar6 = 0;
      if (uVar15 != 0) {
        uVar6 = uVar14 / uVar15;
      }
      unaff_x24 = uVar14 - uVar6 * uVar15;
    }
  }
LAB_10ad18a14:
  plVar13 = plStack_58;
  lVar3 = *param_1;
  plVar10 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    *plStack_58 = *plVar10;
    *plVar10 = (long)plStack_58;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar10;
    if (*plStack_58 != 0) {
      uVar14 = *(ulong *)(*plStack_58 + 8);
      if ((uVar15 & uVar15 - 1) == 0) {
        uVar14 = uVar14 & uVar15 - 1;
      }
      else if (uVar15 <= uVar14) {
        uVar6 = 0;
        if (uVar15 != 0) {
          uVar6 = uVar14 / uVar15;
        }
        uVar14 = uVar14 - uVar6 * uVar15;
      }
      *(long **)(*param_1 + uVar14 * 8) = plStack_58;
    }
  }
  else {
    *plStack_58 = *plVar10;
    *plVar10 = (long)plStack_58;
  }
  plStack_58 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10ad186e0(&plStack_58,0);
  uVar5 = 1;
LAB_10ad18aac:
  auVar16._8_8_ = uVar5;
  auVar16._0_8_ = plVar13;
  return auVar16;
}



/* Entry: 10ad18b2c; end: 10ad18f1b;  */

undefined1  [16] FUN_10ad18b2c(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong unaff_x24;
  undefined1 auVar17 [16];
  
  uVar6 = *param_2;
  uVar9 = ((ulong)(uint)((int)uVar6 << 3) + 8 ^ uVar6 >> 0x20) * -0x622015f714c7d297;
  uVar9 = (uVar6 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
  uVar16 = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar7 = uVar9 - 1;
    if ((uVar9 & uVar7) == 0) {
      unaff_x24 = uVar16 & uVar7;
    }
    else {
      unaff_x24 = uVar16;
      if (uVar9 <= uVar16) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar16 / uVar9;
        }
        unaff_x24 = uVar16 - uVar11 * uVar9;
      }
    }
    puVar10 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (plVar15 = (long *)*puVar10; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        uVar11 = plVar15[1];
        if (uVar11 == uVar16) {
          if (plVar15[2] == uVar6) {
            uVar5 = 0;
            goto LAB_10ad18ea4;
          }
        }
        else {
          if ((uVar9 & uVar7) == 0) {
            uVar11 = uVar11 & uVar7;
          }
          else if (uVar9 <= uVar11) {
            uVar14 = 0;
            if (uVar9 != 0) {
              uVar14 = uVar11 / uVar9;
            }
            uVar11 = uVar11 - uVar14 * uVar9;
          }
          if (uVar11 != unaff_x24) break;
        }
      }
    }
  }
  plVar15 = (long *)0x18;
  __Znwm();
  *plVar15 = 0;
  plVar15[1] = uVar16;
  plVar15[2] = *param_3;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar9) {
      uVar6 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar6 = uVar6 | uVar9 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar9 = param_1[1];
    }
    if (uVar9 < uVar6) {
LAB_10ad18cb4:
      if (uVar6 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad18f08);
        (*pcVar2)();
      }
      lVar3 = uVar6 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar9 = 0;
      param_1[1] = uVar6;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (uVar6 != uVar9);
      plVar8 = (long *)param_1[2];
      uVar9 = uVar6;
      if (plVar8 != (long *)0x0) {
        uVar7 = plVar8[1];
        uVar11 = uVar6 - 1;
        if ((uVar6 & uVar11) == 0) {
          uVar7 = uVar7 & uVar11;
        }
        else if (uVar6 <= uVar7) {
          uVar14 = 0;
          if (uVar6 != 0) {
            uVar14 = uVar7 / uVar6;
          }
          uVar7 = uVar7 - uVar14 * uVar6;
        }
        *(long **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar8;
        while (plVar12 != (long *)0x0) {
          uVar14 = plVar12[1];
          if ((uVar6 & uVar11) == 0) {
            uVar14 = uVar14 & uVar11;
          }
          else if (uVar6 <= uVar14) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar14 / uVar6;
            }
            uVar14 = uVar14 - uVar1 * uVar6;
          }
          plVar13 = plVar12;
          if (uVar14 != uVar7) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar14 * 8) == 0) {
              *(long **)(lVar3 + uVar14 * 8) = plVar8;
              uVar7 = uVar14;
            }
            else {
              *plVar8 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar3 + uVar14 * 8);
              **(long **)(lVar3 + uVar14 * 8) = (long)plVar12;
              plVar13 = plVar8;
            }
          }
          plVar8 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (uVar6 < uVar9) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar7) {
        uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar7) {
        uVar6 = uVar7;
      }
      if (uVar6 < uVar9) {
        if (uVar6 != 0) goto LAB_10ad18cb4;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar9 = 0;
      }
      else {
        uVar9 = param_1[1];
      }
    }
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar16;
    }
    else {
      unaff_x24 = uVar16;
      if (uVar9 <= uVar16) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar16 / uVar9;
        }
        unaff_x24 = uVar16 - uVar6 * uVar9;
      }
    }
  }
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar15 = *plVar8;
    *plVar8 = (long)plVar15;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar8;
    if (*plVar15 == 0) goto LAB_10ad18e94;
    uVar6 = *(ulong *)(*plVar15 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar6 = uVar6 & uVar9 - 1;
    }
    else if (uVar9 <= uVar6) {
      uVar16 = 0;
      if (uVar9 != 0) {
        uVar16 = uVar6 / uVar9;
      }
      uVar6 = uVar6 - uVar16 * uVar9;
    }
    plVar8 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar15 = *plVar8;
  }
  *plVar8 = (long)plVar15;
LAB_10ad18e94:
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_10ad18ea4:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar15;
  return auVar17;
}



/* Entry: 10ad18f1c; end: 10ad18f23;  */

undefined8 FUN_10ad18f1c(void)

{
  return 0;
}



/* Entry: 10ad18f24; end: 10ad18f8f;  */

void FUN_10ad18f24(long param_1,long param_2)

{
  undefined8 in_x6;
  undefined8 in_x7;
  
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f6a48cc,&UNK_10f6a4912,0xf,&UNK_10f6a4960,in_x6,in_x7,
                        *(undefined4 *)(param_2 + 8));
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 8);
  return;
}



/* Entry: 10ad18f90; end: 10ad190ab;  */

void FUN_10ad18f90(long param_1,float *param_2,long param_3)

{
  short *psVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  
  if (*(char *)(param_1 + 0x4020) != '\x01') {
    return;
  }
  lVar4 = *(long *)(param_1 + 8);
  psVar1 = (short *)(param_1 + 0x18);
  FUN_10ad38edc(lVar4,psVar1);
  lVar2 = param_3 - lVar4;
  pfVar3 = param_2;
  if (((lVar2 != 0) && (*(char *)(param_1 + 0x10) == '\x01')) &&
     ((bRam000000011330a9e8 >> 3 & 1) != 0)) {
    func_0x00010ae06f08(1,8,&UNK_10f6a48cc,&UNK_10f6a498e,0x17,&UNK_10f6a49dd,in_x6,in_x7,param_3,
                        lVar4);
  }
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pfVar3 = *(float *)(param_1 + 0x401c) * *(float *)(param_1 + 0x4018) *
              ((float)(int)*psVar1 / 32767.0) + (1.0 - *(float *)(param_1 + 0x401c)) * *pfVar3;
    psVar1 = psVar1 + 1;
    pfVar3 = pfVar3 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(param_2,lVar2 * 4);
  return;
}



/* Entry: 10ad190ac; end: 10ad19103;  */

long FUN_10ad190ac(long param_1)

{
  FUN_10ad14c08(param_1 + 8,0);
  return param_1;
}



/* Entry: 10ad19104; end: 10ad1910b;  */

undefined8 FUN_10ad19104(void)

{
  return 1;
}



/* Entry: 10ad1910c; end: 10ad19293;  */

void FUN_10ad1910c(long *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_50;
  long *plStack_48;
  
  plVar4 = (long *)*param_1;
  do {
    if (plVar4 == param_1 + 1) {
      return;
    }
    lStack_50 = 0;
    plStack_48 = (long *)0x0;
    plVar3 = (long *)plVar4[5];
    if (plVar3 == (long *)0x0) {
LAB_10ad191bc:
      plVar3 = (long *)plVar4[1];
      plVar5 = plVar4;
      if ((long *)plVar4[1] == (long *)0x0) {
        do {
          plVar7 = (long *)plVar5[2];
          bVar2 = (long *)*plVar7 != plVar5;
          plVar5 = plVar7;
        } while (bVar2);
      }
      else {
        do {
          plVar7 = plVar3;
          plVar3 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      if ((long *)*param_1 == plVar4) {
        *param_1 = (long)plVar7;
      }
      param_1[2] = param_1[2] + -1;
      FUN_10a04815c(param_1[1],plVar4);
      if (plVar4[5] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      __ZdlPv(plVar4);
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar3 != (long *)0x0) {
        lStack_50 = plVar4[4];
      }
      plStack_48 = plVar3;
      if (lStack_50 == 0) goto LAB_10ad191bc;
      if (*(char *)(param_2[1] + 8) == '\x01') {
        (*(code *)*param_2)(&lStack_50,param_2);
      }
      plVar3 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) {
        do {
          plVar7 = (long *)plVar4[2];
          bVar2 = (long *)*plVar7 != plVar4;
          plVar4 = plVar7;
        } while (bVar2);
      }
      else {
        do {
          plVar7 = plVar3;
          plVar3 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    }
    plVar3 = plStack_48;
    plVar4 = plVar7;
    if (plStack_48 != (long *)0x0) {
      plVar5 = plStack_48 + 1;
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  } while( true );
}



/* Entry: 10ad19294; end: 10ad193cf;  */

void FUN_10ad19294(long param_1,undefined ***param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long unaff_x19;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  undefined8 uStack_1a8;
  undefined **ppuStack_1a0;
  undefined ***pppuStack_198;
  undefined8 uStack_190;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  undefined ***pppuStack_158;
  undefined8 uStack_150;
  long lStack_128;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(int *)(param_1 + 0x68) != *(int *)param_2) ||
     (pppuVar5 = param_2, *(int *)(param_1 + 0x70) != *(int *)(param_2 + 1))) {
    unaff_x19 = *(long *)(param_1 + 0x58);
    __ZNSt3__15mutex4lockEv(unaff_x19);
    ppuVar3 = *param_2;
    *(int *)(param_1 + 0x70) = *(int *)(param_2 + 1);
    *(undefined ***)(param_1 + 0x68) = ppuVar3;
    pcStack_88 = FUN_10ad194e4;
    ppuStack_80 = &PTR_DAT_110c6e6a0;
    lStack_78 = param_1;
    FUN_10ad1910c(param_1,&pcStack_88);
    (*(code *)*ppuStack_80)(&ppuStack_80);
    pppuVar5 = &ppuStack_c0;
    ppuStack_c8 = (undefined **)FUN_10ad194e4;
    ppuStack_c0 = &PTR_DAT_110c6e6a0;
    param_2 = &ppuStack_c8;
    lStack_b8 = param_1;
    FUN_10ad1910c(param_1 + 0x18);
    (*(code *)*ppuStack_c0)(pppuVar5);
    param_1 = unaff_x19;
    __ZNSt3__15mutex6unlockEv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)**pppuVar5)(pppuVar5);
  __ZNSt3__15mutex6unlockEv(unaff_x19);
  __Unwind_Resume();
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = *(undefined8 **)(param_1 + 0x58);
  __ZNSt3__15mutex4lockEv(puVar4);
  uStack_168 = 0x10ad19530;
  ppuStack_160 = &PTR_DAT_110c6e6c0;
  pppuStack_158 = param_2;
  uStack_150 = param_3;
  FUN_10ad1910c(param_1,&uStack_168);
  (*(code *)*ppuStack_160)(&ppuStack_160);
  uStack_1a8 = 0x10ad19530;
  ppuStack_1a0 = &PTR_DAT_110c6e6c0;
  puVar2 = &uStack_1a8;
  pppuStack_198 = param_2;
  uStack_190 = param_3;
  FUN_10ad1910c(param_1 + 0x18);
  (*(code *)*ppuStack_1a0)(&ppuStack_1a0);
  puVar1 = puVar4;
  __ZNSt3__15mutex6unlockEv();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_1a0)(&ppuStack_1a0);
  __ZNSt3__15mutex6unlockEv(puVar4);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010ad194f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,puVar2[2] + 0x68);
  return;
}



/* Entry: 10ad193d0; end: 10ad194e3;  */

void FUN_10ad193d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = *(undefined8 **)(param_1 + 0x58);
  __ZNSt3__15mutex4lockEv(puVar3);
  uStack_98 = 0x10ad19530;
  ppuStack_90 = &PTR_DAT_110c6e6c0;
  uStack_88 = param_2;
  uStack_80 = param_3;
  FUN_10ad1910c(param_1,&uStack_98);
  (*(code *)*ppuStack_90)(&ppuStack_90);
  uStack_d8 = 0x10ad19530;
  ppuStack_d0 = &PTR_DAT_110c6e6c0;
  puVar2 = &uStack_d8;
  uStack_c8 = param_2;
  uStack_c0 = param_3;
  FUN_10ad1910c(param_1 + 0x18);
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  puVar1 = puVar3;
  __ZNSt3__15mutex6unlockEv();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  __ZNSt3__15mutex6unlockEv(puVar3);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010ad194f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,puVar2[2] + 0x68);
  return;
}



/* Entry: 10ad194e4; end: 10ad19583;  */

void FUN_10ad194e4(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010ad194f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,*(long *)(param_2 + 0x10) + 0x68);
  return;
}



/* Entry: 10ad19584; end: 10ad195cf;  */

void FUN_10ad19584(long param_1,undefined4 *param_2)

{
  undefined4 uStack_14;
  
  *(undefined4 *)(param_1 + 0xc) = param_2[2];
  *(undefined4 *)(param_1 + 0x80f0) = *param_2;
  uStack_14 = 1;
  FUN_10ad195d0(param_1 + 0x80c0,param_1 + 0x80f0,&uStack_14);
  return;
}



/* Entry: 10ad195d0; end: 10ad19633;  */

void FUN_10ad195d0(long *param_1,int *param_2,int *param_3)

{
  if ((char)param_1[5] == '\x01') {
    if (*param_1 != 0) {
      param_1[1] = *param_1;
      __ZdlPv();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  FUN_10ad12500(param_1,(long)*param_2,(long)*param_3);
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 10ad19634; end: 10ad197cf;  */

void FUN_10ad19634(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    if ((*(byte *)(param_1 + 33000) & 1) == 0) {
LAB_10ad197cc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad197d0);
      (*pcVar1)();
    }
    lVar3 = param_1 + 0x80c0;
    FUN_10ad12550(lVar3,param_2,param_3 * *(int *)(param_1 + 0x80f0));
    if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0xc)) {
      plVar4 = (long *)(param_1 + 0x8018);
      lVar3 = *plVar4;
      if (0x2000 < (ulong)(lVar3 + param_3)) {
        lVar3 = 0;
        *plVar4 = 0;
        if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
          func_0x00010ae06f08(1,2,&UNK_10f6a4a18,&UNK_10f6a4a5e,0x2a,&UNK_10f6a4aad);
          lVar3 = *plVar4;
        }
      }
    }
    else {
      if ((*(byte *)(param_1 + 0x80a0) & 1) == 0) goto LAB_10ad197cc;
      lStack_60 = *(long *)(param_1 + 0x80a8);
      lStack_68 = *(long *)(param_1 + 0x80b0) - lStack_60 >> 2;
      uStack_58 = 1;
      uStack_70 = 1;
      lVar2 = param_1 + 0x8020;
      lStack_50 = param_3;
      lStack_48 = lVar3;
      (**(code **)(param_1 + 0x8050))(lVar2,&uStack_58,&uStack_70);
      plVar4 = (long *)(param_1 + 0x8018);
      lVar3 = *plVar4;
      if (0x2000 < (ulong)(lVar3 + lVar2)) {
        lVar3 = 0;
        *plVar4 = 0;
        if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
          func_0x00010ae06f08(1,2,&UNK_10f6a4a18,&UNK_10f6a4a5e,0x20,&UNK_10f6a4aad);
          lVar3 = *plVar4;
        }
      }
      param_2 = *(undefined8 *)(param_1 + 0x80a8);
      param_3 = lVar2;
    }
    _memcpy(param_1 + lVar3 * 4 + 0x14,param_2,param_3 << 2);
    *(long *)(param_1 + 0x8018) = *(long *)(param_1 + 0x8018) + param_3;
  }
  return;
}



/* Entry: 10ad197d0; end: 10ad1988f;  */

void FUN_10ad197d0(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  *(undefined1 *)(param_1 + 8) = 1;
  plVar3 = *(long **)(param_1 + 0x8100);
  if (plVar3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar3 != (long *)0x0) {
      plVar4 = *(long **)(param_1 + 0x80f8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4,param_2);
      }
      plVar4 = plVar3 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
        return;
      }
    }
  }
  return;
}



/* Entry: 10ad19890; end: 10ad1993b;  */

void FUN_10ad19890(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x8018) = 0;
  plVar4 = *(long **)(param_1 + 0x8100);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long **)(param_1 + 0x80f8) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x80f8) + 0x10))();
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
        return;
      }
    }
  }
  return;
}



/* Entry: 10ad1993c; end: 10ad199b3;  */

void FUN_10ad1993c(long param_1,int param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_58 [16];
  undefined4 *puStack_48;
  
  *(int *)(param_1 + 0x10) = param_2;
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  func_0x00010ad14ef4(param_1 + 0x8020);
  FUN_10ad127dc(param_1 + 0x8020,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),1);
  *(undefined1 *)(param_1 + 0x80a0) = 1;
  uVar1 = 0;
  if ((long)*(int *)(param_1 + 0x8094) != 0) {
    uVar1 = (ulong)((long)*(int *)(param_1 + 0x8090) << 0xd) /
            (ulong)(long)*(int *)(param_1 + 0x8094);
  }
  uVar1 = uVar1 + (long)*(int *)(param_1 + 0x8090);
  lVar7 = *(long *)(param_1 + 0x80a8);
  uVar6 = *(long *)(param_1 + 0x80b0) - lVar7 >> 2;
  uVar3 = uVar6 <= uVar1;
  uVar4 = uVar1 == uVar6;
  if ((bool)uVar3 && !(bool)uVar4) {
    func_0x00010742b258((long *)(param_1 + 0x80a8),uVar1 - uVar6);
    func_0x00010742bae4();
    if ((bool)uVar3 && !(bool)uVar4) {
      func_0x00010742be60();
      func_0x0001073b5434();
      func_0x00010742b52c();
      func_0x0001073b531c(auStack_58);
      puVar2 = puStack_48;
      for (lVar7 = unaff_x20 << 2; lVar7 != 0; lVar7 = lVar7 + -4) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      puStack_48 = puStack_48 + unaff_x20;
      func_0x00010742bb50();
      func_0x0001073b52fc();
      func_0x0001073b5364(auStack_58);
      return;
    }
    puVar5 = *(undefined4 **)(unaff_x19 + 8);
    puVar2 = puVar5;
    for (lVar7 = unaff_x20 << 2; lVar7 != 0; lVar7 = lVar7 + -4) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 **)(unaff_x19 + 8) = puVar5 + unaff_x20;
    return;
  }
  if (uVar1 < uVar6) {
    *(ulong *)(param_1 + 0x80b0) = lVar7 + uVar1 * 4;
  }
  return;
}



/* Entry: 10ad199b4; end: 10ad199b7;  */

long FUN_10ad199b4(long param_1)

{
  if (*(long *)(param_1 + 0x8100) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if ((*(char *)(param_1 + 33000) == '\x01') && (*(long *)(param_1 + 0x80c0) != 0)) {
    *(long *)(param_1 + 0x80c8) = *(long *)(param_1 + 0x80c0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x80a8) != 0) {
    *(long *)(param_1 + 0x80b0) = *(long *)(param_1 + 0x80a8);
    __ZdlPv();
  }
  FUN_10ac471b8(param_1 + 0x8020);
  return param_1;
}



/* Entry: 10ad199b8; end: 10ad199cb;  */

void FUN_10ad199b8(void)

{
  FUN_10ac7a378();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad199cc; end: 10ad19a0b;  */

void FUN_10ad199cc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(param_1 + 0x8100);
  *(undefined8 *)(param_1 + 0x8100) = uVar6;
  *(undefined8 *)(param_1 + 0x80f8) = uVar5;
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10ad19a0c; end: 10ad19ba7;  */

undefined8 * FUN_10ad19a0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6e758;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)((long)param_1 + 0x10c) = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  *(undefined8 *)((long)param_1 + 0x11c) = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  *(undefined8 *)((long)param_1 + 0x139) = 0;
  *(undefined8 *)((long)param_1 + 0x131) = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 1;
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f6a4acd,&UNK_10f6a4b1a,0x11,&UNK_10f6a4b66);
  }
  return param_1;
}



/* Entry: 10ad19ba8; end: 10ad19ce3;  */

long FUN_10ad19ba8(long param_1)

{
  long lStack_28;
  
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f6a4acd,&UNK_10f6a4baf,0x15,&UNK_10f6a4c04);
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_10ad19ce4(param_1);
  }
  if (*(long *)(param_1 + 0x208) != 0) {
    *(long *)(param_1 + 0x210) = *(long *)(param_1 + 0x208);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x200) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10ac471b8(param_1 + 0x170);
  if ((*(char *)(param_1 + 0x168) == '\x01') && (*(long *)(param_1 + 0x140) != 0)) {
    *(long *)(param_1 + 0x148) = *(long *)(param_1 + 0x140);
    __ZdlPv();
  }
  func_0x00010a2c2a7c(param_1 + 0x128);
  func_0x00010a9c97a8(param_1 + 0x110);
  if (*(char *)(param_1 + 0x10f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xf8));
  }
  lStack_28 = param_1 + 200;
  FUN_10a2b6d84(&lStack_28);
  lStack_28 = param_1 + 0xb0;
  FUN_10a2b6e7c(&lStack_28);
  if (*(char *)(param_1 + 0xaf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x98));
  }
  if (*(char *)(param_1 + 0x8f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x78));
  }
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  FUN_10a2bee3c(param_1 + 0x28);
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
  return param_1;
}



/* Entry: 10ad19ce4; end: 10ad19ddf;  */

void FUN_10ad19ce4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f6a4acd,&UNK_10f6a50ad,0xb6,&UNK_10f6a50e4);
  }
  if ((*(char *)(param_1 + 8) == '\x01') && (*(long **)(param_1 + 0x110) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x110) + 0x28))();
  }
  *(undefined1 *)(param_1 + 8) = 0;
  plVar4 = *(long **)(param_1 + 0x200);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long **)(param_1 + 0x1f8) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x1f8) + 0x10))();
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
        return;
      }
    }
  }
  return;
}



/* Entry: 10ad19de0; end: 10ad19de3;  */

long FUN_10ad19de0(long param_1)

{
  long lStack_28;
  
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f6a4acd,&UNK_10f6a4baf,0x15,&UNK_10f6a4c04);
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_10ad19ce4(param_1);
  }
  if (*(long *)(param_1 + 0x208) != 0) {
    *(long *)(param_1 + 0x210) = *(long *)(param_1 + 0x208);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x200) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10ac471b8(param_1 + 0x170);
  if ((*(char *)(param_1 + 0x168) == '\x01') && (*(long *)(param_1 + 0x140) != 0)) {
    *(long *)(param_1 + 0x148) = *(long *)(param_1 + 0x140);
    __ZdlPv();
  }
  func_0x00010a2c2a7c(param_1 + 0x128);
  func_0x00010a9c97a8(param_1 + 0x110);
  if (*(char *)(param_1 + 0x10f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xf8));
  }
  lStack_28 = param_1 + 200;
  FUN_10a2b6d84(&lStack_28);
  lStack_28 = param_1 + 0xb0;
  FUN_10a2b6e7c(&lStack_28);
  if (*(char *)(param_1 + 0xaf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x98));
  }
  if (*(char *)(param_1 + 0x8f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x78));
  }
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  FUN_10a2bee3c(param_1 + 0x28);
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
  return param_1;
}



/* Entry: 10ad19de4; end: 10ad19df7;  */

void FUN_10ad19de4(void)

{
  FUN_10ad19ba8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad19df8; end: 10ad19ed7;  */

void FUN_10ad19df8(long param_1,undefined *param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_5;
  __ZNSt3__16chrono12steady_clock3nowEv();
  puVar1 = &UNK_10f6a5185;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  func_0x000107c2b054(&uStack_60,puVar1);
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  *(ulong *)(param_1 + 0x50) = CONCAT44(uStack_54,uStack_58);
  *(ulong *)(param_1 + 0x48) = CONCAT44(uStack_5c,uStack_60);
  *(ulong *)(param_1 + 0x58) = CONCAT44(uStack_4c,uStack_50);
  *(long *)(param_1 + 0x60) = lVar2;
  *(undefined1 *)(param_1 + 0x68) = param_3;
  uStack_60 = uStack_60 & 0xffffff00;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  iStack_44 = 0;
  FUN_10ad19ed8(&uStack_40,&uStack_60);
  *(ulong *)(param_1 + 0x70) = CONCAT44(uStack_5c,uStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x78,&uStack_58);
  if (iStack_44 < 0) {
    __ZdlPv(CONCAT44(uStack_54,uStack_58));
  }
  return;
}



/* Entry: 10ad19ed8; end: 10ad19f4b;  */

void FUN_10ad19ed8(int *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar2 = param_1[1];
  *(bool *)param_2 = *param_1 != 0;
  *(int *)(param_2 + 4) = iVar2;
  puVar1 = &UNK_10f6a5185;
  if (*(undefined **)(param_1 + 2) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_1 + 2);
  }
  func_0x000107c2b054(&uStack_38,puVar1);
  if (*(char *)(param_2 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_2 + 8));
  }
  *(undefined8 *)(param_2 + 0x10) = uStack_30;
  *(undefined8 *)(param_2 + 8) = uStack_38;
  *(undefined8 *)(param_2 + 0x18) = uStack_28;
  return;
}



/* Entry: 10ad19f4c; end: 10ad1a84f;  */

/* WARNING: Removing unreachable block (ram,0x00010ad1a358) */

void FUN_10ad19f4c(long ****param_1,undefined *param_2,long *param_3,long *param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  long ***ppplVar7;
  code *pcVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long ***ppplVar16;
  ulong uVar17;
  long ****pppplVar18;
  undefined1 *puVar19;
  long lVar20;
  uint *puVar21;
  undefined4 *puVar22;
  long lVar23;
  long ****pppplVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long ***ppplStack_170;
  long ***ppplStack_168;
  long ***ppplStack_160;
  long ***ppplStack_158;
  long ***ppplStack_150;
  long ***ppplStack_148;
  uint uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int iStack_11c;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined6 uStack_10f;
  char cStack_109;
  undefined1 uStack_108;
  undefined7 uStack_107;
  long ***ppplStack_100;
  long ***ppplStack_f8;
  long ***ppplStack_f0;
  long ***ppplStack_e8;
  long ***ppplStack_e0;
  long ***ppplStack_d8;
  long ***ppplStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined6 uStack_bf;
  char cStack_b9;
  undefined1 uStack_b8;
  long ***ppplStack_b0;
  long ***ppplStack_a8;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  long ***ppplStack_90;
  long ***ppplStack_88;
  long ***ppplStack_80;
  long ***ppplStack_78;
  
  pppplVar10 = param_1 + 0x16;
  pppplVar18 = (long ****)*pppplVar10;
  pppplVar24 = (long ****)param_1[0x17];
  pppplVar9 = param_1;
  uStack_180 = param_6;
  uStack_178 = param_7;
  while (pppplVar24 != pppplVar18) {
    pppplVar24 = pppplVar24 + -0x14;
    pppplVar9 = pppplVar24;
    FUN_10a2b6eec();
  }
  param_1[0x17] = (long ***)pppplVar18;
  if ((0 < (int)param_3[1]) && (pppplVar9 = pppplVar10, func_0x000104c348b4(), 0 < (int)param_3[1]))
  {
    lVar15 = 0;
    do {
      ppplStack_b0 = (long ***)0x0;
      ppplStack_a8 = (long ***)0x0;
      ppplStack_a0 = (long ***)0x0;
      uStack_128 = 0;
      uStack_124 = 0;
      uStack_130._0_4_ = 0;
      uStack_130._4_4_ = 0;
      uStack_118 = 0;
      uStack_117 = 0;
      uStack_120 = 0;
      iStack_11c = 0;
      uStack_108 = 0;
      uStack_107 = 0;
      uStack_110 = 0;
      uStack_10f = 0;
      cStack_109 = '\0';
      ppplStack_f8 = (long ***)0x0;
      ppplStack_100 = (long ***)0x0;
      ppplStack_e8 = (long ***)0x0;
      ppplStack_f0 = (long ***)0x0;
      ppplStack_d8 = (long ***)0x0;
      ppplStack_e0 = (long ***)0x0;
      uStack_c8 = 0;
      ppplStack_d0 = (long ***)0x0;
      uStack_bf = 0;
      cStack_b9 = '\0';
      uStack_b8 = 0;
      uStack_c7 = 0;
      uStack_c0 = 0;
      puVar19 = (undefined1 *)(*param_3 + lVar15 * 0x48);
      uStack_138 = CONCAT31(uStack_138._1_3_,*puVar19);
      puVar3 = &UNK_10f6a5185;
      if (*(undefined **)(puVar19 + 8) != (undefined *)0x0) {
        puVar3 = *(undefined **)(puVar19 + 8);
      }
      func_0x000107c2b054(&ppplStack_170,puVar3);
      if (iStack_11c < 0) {
        __ZdlPv(CONCAT44(uStack_130._4_4_,(undefined4)uStack_130));
      }
      uStack_128 = SUB84(ppplStack_168,0);
      uStack_124 = (undefined4)((ulong)ppplStack_168 >> 0x20);
      uStack_130._0_4_ = SUB84(ppplStack_170,0);
      uStack_130._4_4_ = (undefined4)((ulong)ppplStack_170 >> 0x20);
      uStack_120 = SUB84(ppplStack_160,0);
      iStack_11c = (int)((ulong)ppplStack_160 >> 0x20);
      if ((0 < *(int *)(puVar19 + 0x30)) &&
         (func_0x000104c34928(&uStack_118), 0 < *(int *)(puVar19 + 0x30))) {
        lVar23 = 0;
        lVar20 = 0;
        do {
          lVar26 = *(long *)(puVar19 + 0x28);
          ppplStack_158 = (long ***)0x0;
          ppplStack_160 = (long ***)0x0;
          ppplStack_148 = (long ***)0x0;
          ppplStack_150 = (long ***)0x0;
          ppplStack_168 = (long ***)0x0;
          ppplStack_170 = (long ***)0x0;
          puVar12 = *(undefined **)(lVar26 + lVar23);
          puVar3 = &UNK_10f6a5185;
          if (puVar12 != (undefined *)0x0) {
            puVar3 = puVar12;
          }
          func_0x000107c2b054(&ppplStack_98,puVar3);
          if ((long)ppplStack_160 < 0) {
            __ZdlPv(ppplStack_170);
          }
          ppplStack_168 = ppplStack_90;
          ppplStack_170 = ppplStack_98;
          ppplStack_160 = ppplStack_88;
          puVar12 = *(undefined **)(lVar26 + lVar23 + 8);
          puVar3 = &UNK_10f6a5185;
          if (puVar12 != (undefined *)0x0) {
            puVar3 = puVar12;
          }
          func_0x000107c2b054(&ppplStack_98,puVar3);
          if ((long)ppplStack_148 < 0) {
            __ZdlPv(ppplStack_158);
          }
          ppplStack_150 = ppplStack_90;
          ppplStack_158 = ppplStack_98;
          ppplStack_148 = ppplStack_88;
          uVar14 = CONCAT17(cStack_109,CONCAT61(uStack_10f,uStack_110));
          if (uVar14 < CONCAT71(uStack_107,uStack_108)) {
            FUN_10a2b77c0(uVar14,&ppplStack_170);
            lVar26 = uVar14 + 0x30;
          }
          else {
            lVar26 = uVar14 - CONCAT71(uStack_117,uStack_118);
            uVar14 = (lVar26 >> 4) * -0x5555555555555555 + 1;
            if (0x555555555555555 < uVar14) {
              FUN_10a2b7850();
              goto LAB_10ad1a768;
            }
            lVar13 = (long)(CONCAT71(uStack_107,uStack_108) - CONCAT71(uStack_117,uStack_118)) >> 4;
            uVar17 = lVar13 * 0x5555555555555556;
            if (uVar17 < uVar14 || uVar17 - uVar14 == 0) {
              uVar17 = uVar14;
            }
            if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar13 * -0x5555555555555555)) {
              uVar17 = 0x555555555555555;
            }
            ppplStack_78 = (long ***)&uStack_118;
            if (uVar17 == 0) {
              pppplVar9 = (long ****)0x0;
            }
            else {
              pppplVar9 = (long ****)&uStack_118;
              FUN_10a2b7864();
            }
            pppplVar18 = (long ****)((long)pppplVar9 + lVar26);
            ppplStack_80 = (long ***)(pppplVar9 + uVar17 * 6);
            ppplStack_98 = (long ***)pppplVar9;
            ppplStack_90 = (long ***)pppplVar18;
            ppplStack_88 = (long ***)pppplVar18;
            FUN_10a2b77c0(pppplVar18,&ppplStack_170);
            ppplStack_88 = (long ***)(pppplVar18 + 6);
            func_0x000104c34b84(&uStack_118,&ppplStack_98);
            lVar26 = CONCAT17(cStack_109,CONCAT61(uStack_10f,uStack_110));
            func_0x000104c34d20(&ppplStack_98);
          }
          uStack_110 = (undefined1)lVar26;
          uStack_10f = (undefined6)((ulong)lVar26 >> 8);
          cStack_109 = (char)((ulong)lVar26 >> 0x38);
          if ((long)ppplStack_148 < 0) {
            __ZdlPv(ppplStack_158);
          }
          if ((long)ppplStack_160 < 0) {
            __ZdlPv(ppplStack_170);
          }
          lVar20 = lVar20 + 1;
          lVar23 = lVar23 + 0x10;
        } while (lVar20 < *(int *)(puVar19 + 0x30));
      }
      if ((0 < *(int *)(puVar19 + 0x40)) &&
         (func_0x000107c31930(&ppplStack_100), 0 < *(int *)(puVar19 + 0x40))) {
        lVar20 = 0;
        do {
          puVar12 = *(undefined **)(*(long *)(puVar19 + 0x38) + lVar20 * 8);
          puVar3 = &UNK_10f6a5185;
          if (puVar12 != (undefined *)0x0) {
            puVar3 = puVar12;
          }
          func_0x000107c2b054(&ppplStack_98,puVar3);
          ppplVar7 = ppplStack_90;
          ppplVar16 = ppplStack_98;
          if (ppplStack_f8 < ppplStack_f0) {
            ppplStack_f8[2] = (long **)ppplStack_88;
            ppplStack_f8[1] = (long **)ppplVar7;
            *ppplStack_f8 = (long **)ppplVar16;
            ppplStack_f8 = ppplStack_f8 + 3;
          }
          else {
            lVar23 = (long)ppplStack_f8 - (long)ppplStack_100;
            uVar14 = (lVar23 >> 3) * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar14) {
              FUN_10a05a0c0();
LAB_10ad1a768:
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10ad1a76c);
              (*pcVar8)();
            }
            lVar26 = (long)ppplStack_f0 - (long)ppplStack_100 >> 3;
            uVar17 = lVar26 * 0x5555555555555556;
            if (uVar17 < uVar14 || uVar17 - uVar14 == 0) {
              uVar17 = uVar14;
            }
            if (0x555555555555554 < (ulong)(lVar26 * -0x5555555555555555)) {
              uVar17 = 0xaaaaaaaaaaaaaaa;
            }
            pppplVar9 = &ppplStack_100;
            ppplStack_150 = (long ***)&ppplStack_100;
            FUN_10a05a0d4();
            plVar2 = (long *)((long)pppplVar9 + lVar23);
            plVar2[2] = (long)ppplStack_88;
            plVar2[1] = (long)ppplStack_90;
            *plVar2 = (long)ppplStack_98;
            ppplStack_90 = (long ***)0x0;
            ppplStack_88 = (long ***)0x0;
            ppplStack_98 = (long ***)0x0;
            pppplVar18 = (long ****)((long)plVar2 - ((long)ppplStack_f8 - (long)ppplStack_100));
            _memcpy(pppplVar18);
            ppplStack_160 = ppplStack_100;
            ppplStack_158 = ppplStack_f0;
            ppplStack_170 = ppplStack_100;
            ppplStack_168 = ppplStack_100;
            ppplStack_100 = (long ***)pppplVar18;
            ppplStack_f8 = (long ***)(plVar2 + 3);
            ppplStack_f0 = (long ***)(pppplVar9 + uVar17 * 3);
            func_0x000107c31938(&ppplStack_170);
            ppplStack_f8 = (long ***)(plVar2 + 3);
          }
          lVar20 = lVar20 + 1;
        } while (lVar20 < *(int *)(puVar19 + 0x40));
      }
      puVar3 = &UNK_10f6a5185;
      if (*(undefined **)(puVar19 + 0x10) != (undefined *)0x0) {
        puVar3 = *(undefined **)(puVar19 + 0x10);
      }
      func_0x000107c2b054(&ppplStack_170,puVar3);
      if ((long)ppplStack_d8 < 0) {
        __ZdlPv(ppplStack_e8);
      }
      ppplStack_e0 = ppplStack_168;
      ppplStack_e8 = ppplStack_170;
      ppplStack_d8 = ppplStack_160;
      puVar3 = &UNK_10f6a5185;
      if (*(undefined **)(puVar19 + 0x18) != (undefined *)0x0) {
        puVar3 = *(undefined **)(puVar19 + 0x18);
      }
      func_0x000107c2b054(&ppplStack_170,puVar3);
      if (cStack_b9 < '\0') {
        __ZdlPv(ppplStack_d0);
      }
      uStack_c8 = SUB81(ppplStack_168,0);
      uStack_c7 = (undefined7)((ulong)ppplStack_168 >> 8);
      ppplStack_d0 = ppplStack_170;
      uStack_c0 = SUB81(ppplStack_160,0);
      uStack_bf = (undefined6)((ulong)ppplStack_160 >> 8);
      cStack_b9 = (char)((ulong)ppplStack_160 >> 0x38);
      uStack_b8 = (undefined1)*(undefined4 *)(puVar19 + 4);
      puVar3 = &UNK_10f6a5185;
      if (*(undefined **)(puVar19 + 0x20) != (undefined *)0x0) {
        puVar3 = *(undefined **)(puVar19 + 0x20);
      }
      func_0x000107c2b054(&ppplStack_170,puVar3);
      if ((long)ppplStack_a0 < 0) {
        __ZdlPv(ppplStack_b0);
      }
      ppplStack_a8 = ppplStack_168;
      ppplStack_b0 = ppplStack_170;
      ppplStack_a0 = ppplStack_160;
      ppplVar16 = param_1[0x17];
      if (ppplVar16 < param_1[0x18]) {
        func_0x000104c34edc(ppplVar16,&uStack_138);
        pppplVar9 = (long ****)(ppplVar16 + 0x14);
        param_1[0x17] = (long ***)pppplVar9;
      }
      else {
        pppplVar9 = pppplVar10;
        func_0x000104c34e48(pppplVar10,&uStack_138);
      }
      param_1[0x17] = (long ***)pppplVar9;
      if ((long)ppplStack_a0 < 0) {
        __ZdlPv(ppplStack_b0);
      }
      if (cStack_b9 < '\0') {
        __ZdlPv(ppplStack_d0);
      }
      if ((long)ppplStack_d8 < 0) {
        __ZdlPv(ppplStack_e8);
      }
      ppplStack_170 = (long ***)&ppplStack_100;
      FUN_10a0426d8(&ppplStack_170);
      pppplVar9 = &ppplStack_170;
      ppplStack_170 = (long ***)&uStack_118;
      FUN_10a2b6f70();
      if (iStack_11c < 0) {
        pppplVar9 = (long ****)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
        __ZdlPv();
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)param_3[1]);
  }
  pppplVar24 = param_1 + 0x19;
  pppplVar10 = (long ****)*pppplVar24;
  pppplVar18 = (long ****)param_1[0x1a];
  while (pppplVar18 != pppplVar10) {
    pppplVar18 = pppplVar18 + -7;
    pppplVar9 = pppplVar18;
    FUN_10a2b6df4();
  }
  param_1[0x1a] = (long ***)pppplVar10;
  if (0 < (int)param_4[1]) {
    lVar15 = 0;
    do {
      uStack_10f = 0;
      cStack_109 = '\0';
      uStack_110 = 0;
      uStack_118 = 0;
      uStack_117 = 0;
      uStack_120 = 0;
      iStack_11c = 0;
      uStack_128 = 0;
      uStack_124 = 0;
      uStack_130._0_4_ = 0;
      uStack_130._4_4_ = 0;
      puVar21 = (uint *)(*param_4 + lVar15 * 0x18);
      uStack_138 = *puVar21;
      uStack_108 = (undefined1)*(undefined4 *)(*(undefined8 **)(puVar21 + 4) + 1);
      func_0x000107c2c4dc(&uStack_120,**(undefined8 **)(puVar21 + 4));
      uStack_130 = (long ***)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
      if (puVar21[1] == 0) {
        puVar22 = *(undefined4 **)(puVar21 + 2);
        uVar25 = *(undefined8 *)(puVar22 + 2);
        puVar11 = (undefined8 *)0x48;
        __Znwm();
        puVar11[1] = 0;
        puVar11[2] = 0;
        *puVar11 = &PTR_DAT_1107ebeb0;
        func_0x000107c2b054(&ppplStack_170,uVar25);
        ppplVar16 = (long ***)(puVar11 + 3);
        *ppplVar16 = (long **)&PTR_DAT_1107ebf00;
        uVar4 = *puVar22;
        *(undefined1 *)(puVar11 + 4) = 0;
        if ((long)ppplStack_160 < 0) {
          func_0x000107c3192c(puVar11 + 5,ppplStack_170,ppplStack_168);
          *(undefined4 *)(puVar11 + 8) = uVar4;
          if ((long)ppplStack_160 < 0) {
            __ZdlPv(ppplStack_170);
          }
        }
        else {
          puVar11[6] = ppplStack_168;
          puVar11[5] = ppplStack_170;
          puVar11[7] = ppplStack_160;
          *(undefined4 *)(puVar11 + 8) = uVar4;
        }
        plVar2 = (long *)CONCAT44(uStack_124,uStack_128);
        uStack_128 = SUB84(puVar11,0);
        uStack_124 = (undefined4)((ulong)puVar11 >> 0x20);
        uStack_130 = ppplVar16;
        if (plVar2 != (long *)0x0) {
          plVar1 = plVar2 + 1;
          do {
            lVar20 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar20 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar20 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
      }
      ppplVar16 = param_1[0x1a];
      if (ppplVar16 < param_1[0x1b]) {
        FUN_10a2c2e70(ppplVar16,&uStack_138);
        pppplVar9 = (long ****)(ppplVar16 + 7);
        param_1[0x1a] = (long ***)pppplVar9;
      }
      else {
        pppplVar9 = pppplVar24;
        func_0x000104c4aa00(pppplVar24,&uStack_138);
      }
      param_1[0x1a] = (long ***)pppplVar9;
      if (cStack_109 < '\0') {
        pppplVar9 = (long ****)CONCAT44(iStack_11c,uStack_120);
        __ZdlPv();
      }
      pppplVar10 = (long ****)CONCAT44(uStack_124,uStack_128);
      if (pppplVar10 != (long ****)0x0) {
        pppplVar18 = pppplVar10 + 1;
        do {
          ppplVar16 = *pppplVar18;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppplVar18,0x10);
          if (bVar6) {
            *pppplVar18 = (long ***)((long)ppplVar16 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppplVar16 == (long ***)0x0) {
          (*(code *)(*pppplVar10)[2])(pppplVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppplVar9 = pppplVar10;
        }
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)param_4[1]);
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  param_1[0x1c] = (long ***)pppplVar9;
  puVar3 = &UNK_10f6a5185;
  if (param_2 != (undefined *)0x0) {
    puVar3 = param_2;
  }
  func_0x000107c2b054(&uStack_138,puVar3);
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  param_1[0x14] = uStack_130;
  param_1[0x13] = (long ***)CONCAT44(uStack_134,uStack_138);
  param_1[0x15] = (long ***)CONCAT44(uStack_124,uStack_128);
  *(undefined1 *)(param_1 + 0x1d) = param_5;
  uStack_138 = uStack_138 & 0xffffff00;
  uStack_134 = 0;
  uStack_130._0_4_ = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_130._4_4_ = 0;
  uStack_128 = 0;
  iStack_11c = 0;
  FUN_10ad19ed8(&uStack_180,&uStack_138);
  param_1[0x1e] = (long ***)CONCAT44(uStack_134,uStack_138);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x1f,&uStack_130);
  if (iStack_11c < 0) {
    __ZdlPv(CONCAT44(uStack_130._4_4_,(undefined4)uStack_130));
  }
  return;
}



/* Entry: 10ad1a850; end: 10ad1a917;  */

void FUN_10ad1a850(undefined *param_1,int param_2,undefined8 *param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_4 != 0) {
    uStack_40 = *param_3;
    uStack_38 = param_3[1];
    lVar2 = param_4;
    __ZNSt3__16chrono12steady_clock3nowEv();
    puVar1 = &UNK_10f6a5185;
    if (param_1 != (undefined *)0x0) {
      puVar1 = param_1;
    }
    func_0x000107c2b054(&uStack_60,puVar1);
    if (*(char *)(param_4 + 0x5f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_4 + 0x48));
    }
    *(ulong *)(param_4 + 0x50) = CONCAT44(uStack_54,uStack_58);
    *(ulong *)(param_4 + 0x48) = CONCAT44(uStack_5c,uStack_60);
    *(ulong *)(param_4 + 0x58) = CONCAT44(uStack_4c,uStack_50);
    *(long *)(param_4 + 0x60) = lVar2;
    *(bool *)(param_4 + 0x68) = param_2 != 0;
    uStack_60 = uStack_60 & 0xffffff00;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    iStack_44 = 0;
    FUN_10ad19ed8(&uStack_40,&uStack_60);
    *(ulong *)(param_4 + 0x70) = CONCAT44(uStack_5c,uStack_60);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_4 + 0x78,&uStack_58);
    if (iStack_44 < 0) {
      __ZdlPv(CONCAT44(uStack_54,uStack_58));
    }
    return;
  }
  if ((bRam000000011330a9e8 & 1) == 0) {
    return;
  }
  FUN_10ae06f30(0,1,&UNK_10f6a4acd,&UNK_10f6a4c4e,0x40,&UNK_10f6a4ce3,&stack0x00000000);
  return;
}



/* Entry: 10ad1a918; end: 10ad1bbef;  */

void FUN_10ad1a918(long param_1)

{
  long ******pppppplVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 *puVar8;
  long *******ppppppplVar9;
  long ******pppppplVar10;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *****ppppplVar15;
  long *****ppppplVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  long *plVar26;
  ulong uVar27;
  undefined8 *puVar28;
  undefined4 *puVar29;
  undefined8 *puVar30;
  byte *pbVar31;
  long lStack_230;
  long *plStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long ******pppppplStack_1b8;
  long ******pppppplStack_1b0;
  long ******pppppplStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  uint uStack_128;
  uint uStack_124;
  undefined8 uStack_120;
  undefined4 uStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  long lStack_c0;
  int iStack_b8;
  long lStack_b0;
  int iStack_a8;
  long lStack_a0;
  undefined4 uStack_98;
  long ******pppppplStack_90;
  long *****ppppplStack_88;
  long *****ppppplStack_80;
  long ******apppppplStack_70 [2];
  
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f6a4acd,&UNK_10f6a4e5f,0x56,&UNK_10f6a4ea7);
  }
  if (*(long *)(param_1 + 0x110) == 0) {
    if (*(long **)(param_1 + 0x128) == (long *)0x0) {
      puVar8 = (undefined8 *)0x28;
      __Znwm();
      *puVar8 = &PTR_DAT_1107eb8d8;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      *(undefined4 *)(puVar8 + 4) = 0;
      FUN_10a9c9800(&lStack_230,puVar8,&UNK_104c40320);
    }
    else {
      (**(code **)(**(long **)(param_1 + 0x128) + 0x10))(&lStack_230);
    }
    FUN_10a9bd6a0(param_1 + 0x110,&lStack_230);
    if (plStack_228 != (long *)0x0) {
      plVar23 = plStack_228 + 1;
      do {
        lVar11 = *plVar23;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar7) {
          *plVar23 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_228 + 0x10))(plStack_228);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_228);
      }
    }
  }
  lVar22 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(lVar22 + 4) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(lVar22 + 0x100) = *(undefined4 *)(param_1 + 0x38);
  lStack_b0 = 0;
  iStack_a8 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  lStack_c0 = 0;
  iStack_b8 = 0;
  lVar11 = *(long *)(lVar22 + 0xf0);
  plStack_228 = (long *)0x0;
  lStack_220 = 0;
  lStack_230 = 0;
  lVar12 = lVar11 - *(long *)(lVar22 + 0xe8);
  lVar20 = lVar11;
  if (lVar12 != 0) {
    uVar27 = lVar12 >> 5;
    if (0xaaaaaaaaaaaaaaa < uVar27) {
      FUN_10ad1c270();
      goto LAB_10ad1bad0;
    }
    lVar11 = uVar27 * 0x18;
    __Znwm();
    lStack_220 = lVar11 + uVar27 * 0x18;
    lStack_230 = lVar11;
    _bzero();
    plStack_228 = (long *)(lVar11 + ((uVar27 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18);
    lVar11 = *(long *)(lVar22 + 0xe8);
    lVar20 = *(long *)(lVar22 + 0xf0);
  }
  FUN_10ad1c284(&lStack_218,lVar20 - lVar11 >> 5);
  lVar11 = *(long *)(lVar22 + 0x78);
  lStack_1f8 = 0;
  lStack_1f0 = 0;
  lStack_200 = 0;
  lVar12 = lVar11 - *(long *)(lVar22 + 0x70);
  if (lVar12 == 0) {
LAB_10ad1ab70:
    lStack_1d8 = 0;
    lStack_1e0 = 0;
    lStack_1e8 = 0;
    lVar12 = lVar11;
  }
  else {
    uVar27 = lVar12 >> 6;
    if (0x492492492492492 < uVar27) {
      func_0x00010ad1c404();
      goto LAB_10ad1bad0;
    }
    lVar11 = uVar27 * 0x38;
    __Znwm();
    lStack_1f0 = lVar11 + uVar27 * 0x38;
    lStack_200 = lVar11;
    _bzero();
    lStack_1f8 = lVar11 + ((uVar27 * 0x38 - 0x38) / 0x38) * 0x38 + 0x38;
    lVar11 = *(long *)(lVar22 + 0x70);
    lStack_1e8 = 0;
    lStack_1e0 = 0;
    lStack_1d8 = 0;
    lVar12 = *(long *)(lVar22 + 0x78) - lVar11;
    if (lVar12 == 0) goto LAB_10ad1ab70;
    uVar27 = lVar12 >> 6;
    if (0xaaaaaaaaaaaaaaa < uVar27) {
      func_0x00010ad1c418();
      goto LAB_10ad1bad0;
    }
    lVar11 = uVar27 * 0x18;
    __Znwm();
    lStack_1d8 = lVar11 + uVar27 * 0x18;
    lStack_1e8 = lVar11;
    _bzero();
    lStack_1e0 = lVar11 + ((uVar27 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    lVar11 = *(long *)(lVar22 + 0x70);
    lVar12 = *(long *)(lVar22 + 0x78);
  }
  FUN_10ad1c284(&lStack_1d0,lVar12 - lVar11 >> 6);
  ppppppplVar9 = &pppppplStack_1b8;
  pppppplStack_1b8 = (long ******)0x0;
  pppppplStack_1b0 = (long ******)0x0;
  pppppplStack_1a8 = (long ******)0x0;
  ppppplStack_88 = (long *****)((ulong)ppppplStack_88 & 0xffffffffffffff00);
  lVar11 = *(long *)(lVar22 + 0x78) - *(long *)(lVar22 + 0x70);
  pppppplStack_90 = (long ******)ppppppplVar9;
  if (lVar11 != 0) {
    uVar27 = lVar11 >> 6;
    if (0xaaaaaaaaaaaaaaa < uVar27) {
      FUN_10a0cf4c8();
      goto LAB_10ad1bad0;
    }
    uVar17 = uVar27;
    FUN_10a0cf4dc();
    pppppplStack_1a8 = (long ******)(ppppppplVar9 + uVar17 * 3);
    pppppplStack_1b8 = (long ******)ppppppplVar9;
    _bzero();
    pppppplStack_1b0 = (long ******)(ppppppplVar9 + ((uVar27 * 0x18 - 0x18) / 0x18) * 3 + 3);
  }
  lStack_1a0 = 0;
  lStack_198 = 0;
  lStack_190 = 0;
  lVar11 = *(long *)(lVar22 + 0x78) - *(long *)(lVar22 + 0x70);
  if (lVar11 != 0) {
    uVar27 = lVar11 >> 6;
    if (0xaaaaaaaaaaaaaaa < uVar27) {
      FUN_10ad1c4a0();
      goto LAB_10ad1bad0;
    }
    lVar11 = uVar27 * 0x18;
    __Znwm();
    lStack_190 = lVar11 + uVar27 * 0x18;
    lStack_1a0 = lVar11;
    _bzero();
    lStack_198 = lVar11 + ((uVar27 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
  }
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  lVar11 = *(long *)(lVar22 + 0x78) - *(long *)(lVar22 + 0x70);
  if (lVar11 != 0) {
    uVar27 = lVar11 >> 6;
    if (0xaaaaaaaaaaaaaaa < uVar27) {
      FUN_10ad1c528();
      goto LAB_10ad1bad0;
    }
    lVar11 = uVar27 * 0x18;
    __Znwm();
    lStack_178 = lVar11 + uVar27 * 0x18;
    lStack_188 = lVar11;
    _bzero();
    lStack_180 = lVar11 + ((uVar27 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
  }
  lStack_170 = 0;
  lStack_168 = 0;
  lStack_160 = 0;
  lVar11 = *(long *)(lVar22 + 0x78) - *(long *)(lVar22 + 0x70);
  if (lVar11 != 0) {
    uVar27 = lVar11 >> 6;
    if (0xaaaaaaaaaaaaaaa < uVar27) {
      FUN_10ad1c5a4();
      goto LAB_10ad1bad0;
    }
    lVar11 = uVar27 * 0x18;
    __Znwm();
    lStack_160 = lVar11 + uVar27 * 0x18;
    lStack_170 = lVar11;
    _bzero();
    lStack_168 = lVar11 + ((uVar27 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
  }
  lStack_150 = 0;
  lStack_148 = 0;
  lStack_158 = 0;
  lVar11 = *(long *)(lVar22 + 0x110) - *(long *)(lVar22 + 0x108);
  if (lVar11 == 0) {
    lStack_140 = 0;
    lStack_138 = 0;
    lStack_130 = 0;
  }
  else {
    lVar11 = lVar11 >> 3;
    if ((ulong)(lVar11 * -0x5555555555555555) >> 0x3c != 0) {
      func_0x00010ad1c620();
LAB_10ad1bad0:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10ad1bad4);
      (*pcVar6)();
    }
    lVar12 = lVar11 * -0x5555555555555550;
    __Znwm();
    lStack_148 = lVar12 + lVar11 * -0x5555555555555550;
    lStack_158 = lVar12;
    _bzero();
    lStack_150 = lVar12 + lVar11 * -0x5555555555555550;
    lStack_140 = 0;
    lStack_138 = 0;
    lStack_130 = 0;
    lVar11 = *(long *)(lVar22 + 0x110) - *(long *)(lVar22 + 0x108);
    if (lVar11 != 0) {
      lVar11 = lVar11 >> 3;
      if ((ulong)(lVar11 * -0x5555555555555555) >> 0x3c != 0) {
        func_0x00010ad1c634();
        goto LAB_10ad1bad0;
      }
      lVar12 = lVar11 * -0x5555555555555550;
      __Znwm();
      lStack_130 = lVar12 + lVar11 * -0x5555555555555550;
      lStack_140 = lVar12;
      _bzero();
      lStack_138 = lVar12 + lVar11 * -0x5555555555555550;
    }
  }
  pbVar31 = *(byte **)(param_1 + 0x28);
  uStack_128 = (uint)*pbVar31;
  uStack_124 = (uint)pbVar31[1];
  uStack_120 = *(undefined8 *)(pbVar31 + 4);
  pbStack_110 = *(byte **)(pbVar31 + 0x10);
  if (-1 < (char)pbVar31[0x27]) {
    pbStack_110 = pbVar31 + 0x10;
  }
  pbStack_108 = *(byte **)(pbVar31 + 0x28);
  if (-1 < (char)pbVar31[0x3f]) {
    pbStack_108 = pbVar31 + 0x28;
  }
  uStack_118 = *(undefined4 *)(pbVar31 + 0x100);
  pbStack_100 = *(byte **)(pbVar31 + 0x48);
  if (-1 < (char)pbVar31[0x5f]) {
    pbStack_100 = pbVar31 + 0x48;
  }
  uStack_f8 = *(undefined4 *)(pbVar31 + 0x60);
  uStack_f4 = (uint)pbVar31[100];
  uStack_f0 = (uint)pbVar31[0x65];
  uStack_ec = (uint)pbVar31[0x66];
  uStack_e8 = *(undefined4 *)(pbVar31 + 0x68);
  pbStack_e0 = *(byte **)(pbVar31 + 0x88);
  if (-1 < (char)pbVar31[0x9f]) {
    pbStack_e0 = pbVar31 + 0x88;
  }
  pbStack_d8 = *(byte **)(pbVar31 + 0xa0);
  if (-1 < (char)pbVar31[0xb7]) {
    pbStack_d8 = pbVar31 + 0xa0;
  }
  pbStack_d0 = *(byte **)(pbVar31 + 0xb8);
  if (-1 < (char)pbVar31[0xcf]) {
    pbStack_d0 = pbVar31 + 0xb8;
  }
  pbStack_c8 = *(byte **)(pbVar31 + 0xd0);
  if (-1 < (char)pbVar31[0xe7]) {
    pbStack_c8 = pbVar31 + 0xd0;
  }
  lVar11 = *(long *)(pbVar31 + 0xe8);
  if (*(long *)(pbVar31 + 0xf0) != lVar11) {
    uVar27 = 0;
    do {
      uVar17 = ((long)plStack_228 - lStack_230 >> 3) * -0x5555555555555555;
      if (uVar17 < uVar27 || uVar17 - uVar27 == 0) goto LAB_10ad1bad0;
      puVar2 = (undefined4 *)(lVar11 + uVar27 * 0x20);
      puVar29 = (undefined4 *)(lStack_230 + uVar27 * 0x18);
      *puVar29 = *puVar2;
      uVar17 = (lStack_210 - lStack_218 >> 3) * -0x5555555555555555;
      if (uVar17 < uVar27 || uVar17 - uVar27 == 0) goto LAB_10ad1bad0;
      plVar23 = (long *)(lStack_218 + uVar27 * 0x18);
      func_0x000109680cc0(plVar23,(*(long *)(puVar2 + 4) - *(long *)(puVar2 + 2) >> 3) *
                                  -0x5555555555555555);
      lVar11 = *(long *)(puVar2 + 2);
      if (*(long *)(puVar2 + 4) != lVar11) {
        lVar12 = 0;
        uVar17 = 0;
        do {
          if ((ulong)(plVar23[1] - *plVar23 >> 3) <= uVar17) goto LAB_10ad1bad0;
          plVar13 = (long *)(lVar11 + lVar12);
          plVar14 = (long *)*plVar13;
          if (-1 < *(char *)((long)plVar13 + 0x17)) {
            plVar14 = plVar13;
          }
          *(long **)(*plVar23 + uVar17 * 8) = plVar14;
          uVar17 = uVar17 + 1;
          lVar11 = *(long *)(puVar2 + 2);
          lVar12 = lVar12 + 0x18;
        } while (uVar17 < (ulong)((*(long *)(puVar2 + 4) - lVar11 >> 3) * -0x5555555555555555));
      }
      lVar11 = *plVar23;
      puVar29[4] = (int)((ulong)(plVar23[1] - lVar11) >> 3);
      *(long *)(puVar29 + 2) = lVar11;
      uVar27 = uVar27 + 1;
      lVar11 = *(long *)(pbVar31 + 0xe8);
    } while (uVar27 < (ulong)(*(long *)(pbVar31 + 0xf0) - lVar11 >> 5));
  }
  iStack_a8 = (int)((ulong)((long)plStack_228 - lStack_230) >> 3) * -0x55555555;
  lStack_b0 = lStack_230;
  lVar11 = *(long *)(pbVar31 + 0x70);
  if (*(long *)(pbVar31 + 0x78) != lVar11) {
    uVar27 = 0;
    do {
      uVar17 = (lStack_1f8 - lStack_200 >> 3) * 0x6db6db6db6db6db7;
      if (uVar17 < uVar27 || uVar17 - uVar27 == 0) goto LAB_10ad1bad0;
      plVar23 = (long *)(lVar11 + uVar27 * 0x40);
      plVar13 = plVar23;
      if (*(char *)((long)plVar23 + 0x17) < '\0') {
        plVar13 = (long *)*plVar23;
      }
      plVar14 = (long *)(lStack_200 + uVar27 * 0x38);
      *plVar14 = (long)plVar13;
      puVar8 = (undefined8 *)plVar23[6];
      (**(code **)*puVar8)();
      *(char *)((long)plVar14 + 0x14) = (char)puVar8;
      uVar17 = (lStack_1e0 - lStack_1e8 >> 3) * -0x5555555555555555;
      if (uVar17 < uVar27 || uVar17 - uVar27 == 0) goto LAB_10ad1bad0;
      plVar24 = (long *)(lStack_1e8 + uVar27 * 0x18);
      plVar13 = (long *)plVar23[3];
      lVar11 = plVar23[4];
      lVar12 = lVar11 - (long)plVar13 >> 4;
      uVar17 = lVar12 * -0x5555555555555555;
      uVar19 = plVar24[1] - *plVar24 >> 4;
      if (uVar17 < uVar19 || uVar17 - uVar19 == 0) {
        if (uVar17 < uVar19) {
          plVar24[1] = *plVar24 + lVar12 * -0x5555555555555550;
        }
      }
      else {
        func_0x000104c43040(plVar24,uVar17 - uVar19);
        plVar13 = (long *)plVar23[3];
        lVar11 = plVar23[4];
      }
      if (lVar11 - (long)plVar13 == 0) {
        lVar11 = *plVar24;
        uVar17 = plVar24[1] - lVar11;
      }
      else {
        lVar12 = (lVar11 - (long)plVar13 >> 4) * -0x5555555555555555;
        lVar11 = *plVar24;
        uVar17 = plVar24[1] - lVar11;
        lVar20 = (long)uVar17 >> 4;
        plVar24 = (long *)(lVar11 + 8);
        do {
          plVar21 = plVar13;
          if (*(char *)((long)plVar13 + 0x17) < '\0') {
            plVar21 = (long *)*plVar13;
          }
          if (lVar20 == 0) goto LAB_10ad1bad0;
          plVar24[-1] = (long)plVar21;
          plVar21 = plVar13 + 3;
          if (*(char *)((long)plVar13 + 0x2f) < '\0') {
            plVar21 = (long *)*plVar21;
          }
          plVar13 = plVar13 + 6;
          *plVar24 = (long)plVar21;
          lVar20 = lVar20 + -1;
          lVar12 = lVar12 + -1;
          plVar24 = plVar24 + 2;
        } while (lVar12 != 0);
      }
      *(int *)(plVar14 + 2) = (int)(uVar17 >> 4);
      plVar14[1] = lVar11;
      (**(code **)(*(long *)plVar23[6] + 8))(&pppppplStack_90);
      uVar17 = ((long)pppppplStack_1b0 - (long)pppppplStack_1b8 >> 3) * -0x5555555555555555;
      if (uVar17 < uVar27 || uVar17 - uVar27 == 0) goto LAB_10ad1bad0;
      ppppppplVar9 = (long *******)(pppppplStack_1b8 + uVar27 * 3);
      func_0x000107c3193c(ppppppplVar9);
      ppppppplVar9[1] = (long ******)ppppplStack_88;
      *ppppppplVar9 = pppppplStack_90;
      ppppppplVar9[2] = (long ******)ppppplStack_80;
      pppppplStack_90 = (long ******)0x0;
      ppppplStack_88 = (long *****)0x0;
      ppppplStack_80 = (long *****)0x0;
      apppppplStack_70[0] = (long ******)&pppppplStack_90;
      FUN_10a0426d8(apppppplStack_70);
      uVar17 = ((long)pppppplStack_1b0 - (long)pppppplStack_1b8 >> 3) * -0x5555555555555555;
      if ((uVar17 < uVar27 || uVar17 - uVar27 == 0) ||
         (uVar17 = (lStack_1c8 - lStack_1d0 >> 3) * -0x5555555555555555,
         uVar17 < uVar27 || uVar17 - uVar27 == 0)) goto LAB_10ad1bad0;
      ppppppplVar9 = (long *******)(pppppplStack_1b8 + uVar27 * 3);
      plVar13 = (long *)(lStack_1d0 + uVar27 * 0x18);
      lVar11 = ((long)ppppppplVar9[1] - (long)*ppppppplVar9 >> 3) * -0x5555555555555555;
      func_0x000109680cc0(plVar13);
      pppppplVar10 = *ppppppplVar9;
      if (ppppppplVar9[1] != pppppplVar10) {
        lVar12 = 0;
        uVar17 = 0;
        do {
          if ((ulong)(plVar13[1] - *plVar13 >> 3) <= uVar17) goto LAB_10ad1bad0;
          plVar24 = (long *)((long)pppppplVar10 + lVar12);
          plVar21 = (long *)*plVar24;
          if (-1 < *(char *)((long)plVar24 + 0x17)) {
            plVar21 = plVar24;
          }
          *(long **)(*plVar13 + uVar17 * 8) = plVar21;
          uVar17 = uVar17 + 1;
          pppppplVar10 = *ppppppplVar9;
          lVar12 = lVar12 + 0x18;
        } while (uVar17 < (ulong)(((long)ppppppplVar9[1] - (long)pppppplVar10 >> 3) *
                                 -0x5555555555555555));
      }
      lVar12 = *plVar13;
      *(int *)(plVar14 + 4) = (int)((ulong)(plVar13[1] - lVar12) >> 3);
      plVar14[3] = lVar12;
      (**(code **)(*(long *)plVar23[6] + 0x10))(&pppppplStack_90);
      uVar17 = (lStack_180 - lStack_188 >> 3) * -0x5555555555555555;
      if (uVar17 < uVar27 || uVar17 - uVar27 == 0) goto LAB_10ad1bad0;
      plVar23 = (long *)(lStack_188 + uVar27 * 0x18);
      func_0x000104c35654(plVar23);
      plVar23[1] = (long)ppppplStack_88;
      *plVar23 = (long)pppppplStack_90;
      plVar23[2] = (long)ppppplStack_80;
      pppppplStack_90 = (long ******)0x0;
      ppppplStack_88 = (long *****)0x0;
      ppppplStack_80 = (long *****)0x0;
      apppppplStack_70[0] = (long ******)&pppppplStack_90;
      FUN_10a2c2904(apppppplStack_70);
      uVar17 = (lStack_180 - lStack_188 >> 3) * -0x5555555555555555;
      if ((uVar17 < uVar27 || uVar17 - uVar27 == 0) ||
         (uVar17 = (lStack_198 - lStack_1a0 >> 3) * -0x5555555555555555,
         uVar17 < uVar27 || uVar17 - uVar27 == 0)) goto LAB_10ad1bad0;
      plVar23 = (long *)(lStack_188 + uVar27 * 0x18);
      plVar13 = (long *)(lStack_1a0 + uVar27 * 0x18);
      lVar22 = plVar23[1] - *plVar23 >> 4;
      uVar19 = lVar22 * -0x5555555555555555;
      lVar20 = *plVar13;
      lVar12 = plVar13[1];
      lVar25 = lVar12 - lVar20;
      bVar7 = uVar19 < (ulong)((lVar25 >> 3) * -0x5555555555555555);
      uVar17 = uVar19 + (lVar25 >> 3) * 0x5555555555555555;
      if (bVar7 || uVar17 == 0) {
        if (bVar7) {
          lVar12 = lVar20 + lVar22 * 8;
          goto LAB_10ad1b458;
        }
      }
      else if ((ulong)((plVar13[2] - lVar12 >> 3) * -0x5555555555555555) < uVar17) {
        if (0xaaaaaaaaaaaaaaa < uVar19) {
          func_0x00010ad1c648();
          goto LAB_10ad1bad0;
        }
        lVar11 = plVar13[2] - lVar20 >> 3;
        uVar18 = lVar11 * 0x5555555555555556;
        if (uVar18 < uVar19 || uVar18 + lVar22 * 0x5555555555555555 == 0) {
          uVar18 = uVar19;
        }
        if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
          uVar18 = 0xaaaaaaaaaaaaaaa;
        }
        if (0xaaaaaaaaaaaaaaa < uVar18) {
          func_0x000109ffded8();
          goto LAB_10ad1bad0;
        }
        lVar12 = uVar18 * 0x18;
        __Znwm();
        lVar22 = ((uVar17 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
        _bzero(lVar12 + lVar25,lVar22);
        lVar11 = lVar20;
        _memcpy(lVar12,lVar20,lVar25);
        *plVar13 = lVar12;
        plVar13[1] = lVar12 + lVar25 + lVar22;
        plVar13[2] = lVar12 + uVar18 * 0x18;
        if (lVar20 != 0) {
          __ZdlPv(lVar20);
        }
      }
      else {
        lVar20 = ((uVar17 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
        lVar11 = lVar20;
        _bzero(lVar12);
        lVar12 = lVar12 + lVar20;
LAB_10ad1b458:
        plVar13[1] = lVar12;
      }
      uVar17 = (lStack_168 - lStack_170 >> 3) * -0x5555555555555555;
      if (uVar17 < uVar27 || uVar17 - uVar27 == 0) goto LAB_10ad1bad0;
      plVar21 = (long *)(lStack_170 + uVar27 * 0x18);
      lVar20 = plVar23[1] - *plVar23 >> 4;
      uVar19 = lVar20 * -0x5555555555555555;
      lVar12 = *plVar21;
      plVar24 = (long *)plVar21[1];
      lVar22 = (long)plVar24 - lVar12 >> 3;
      bVar7 = uVar19 < (ulong)(lVar22 * -0x5555555555555555);
      uVar17 = uVar19 + lVar22 * 0x5555555555555555;
      if (bVar7 || uVar17 == 0) {
        if (bVar7) {
          plVar26 = (long *)(lVar12 + lVar20 * 8);
          while (plVar5 = plVar24, plVar5 != plVar26) {
            plVar24 = plVar5 + -3;
            if (*plVar24 != 0) {
              plVar5[-2] = *plVar24;
              __ZdlPv();
            }
          }
          plVar21[1] = (long)plVar26;
        }
      }
      else if ((ulong)((plVar21[2] - (long)plVar24 >> 3) * -0x5555555555555555) < uVar17) {
        if (0xaaaaaaaaaaaaaaa < uVar19) {
          FUN_10ad1c338();
          goto LAB_10ad1bad0;
        }
        lVar22 = plVar21[2] - lVar12 >> 3;
        uVar18 = lVar22 * 0x5555555555555556;
        if (uVar18 < uVar19 || uVar18 + lVar20 * 0x5555555555555555 == 0) {
          uVar18 = uVar19;
        }
        if (0x555555555555554 < (ulong)(lVar22 * -0x5555555555555555)) {
          uVar18 = 0xaaaaaaaaaaaaaaa;
        }
        FUN_10ad1c34c();
        lVar12 = uVar18 + ((long)plVar24 - lVar12);
        lVar25 = ((uVar17 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
        _bzero(lVar12,lVar25);
        lVar22 = lVar12 - (plVar21[1] - *plVar21);
        _memcpy(lVar22);
        lVar20 = *plVar21;
        *plVar21 = lVar22;
        plVar21[1] = lVar12 + lVar25;
        plVar21[2] = uVar18 + lVar11 * 0x18;
        if (lVar20 != 0) {
          __ZdlPv();
        }
      }
      else {
        uVar17 = (uVar17 * 0x18 - 0x18) / 0x18;
        _bzero(plVar24,uVar17 * 0x18 + 0x18);
        plVar21[1] = (long)(plVar24 + uVar17 * 3 + 3);
      }
      lVar11 = *plVar23;
      if (plVar23[1] != lVar11) {
        uVar17 = 0;
        do {
          uVar19 = (plVar13[1] - *plVar13 >> 3) * -0x5555555555555555;
          if (uVar19 < uVar17 || uVar19 - uVar17 == 0) goto LAB_10ad1bad0;
          puVar28 = (undefined8 *)(lVar11 + uVar17 * 0x30);
          puVar8 = puVar28;
          if (*(char *)((long)puVar28 + 0x17) < '\0') {
            puVar8 = (undefined8 *)*puVar28;
          }
          puVar30 = (undefined8 *)(*plVar13 + uVar17 * 0x18);
          *puVar30 = puVar8;
          uVar19 = (lStack_168 - lStack_170 >> 3) * -0x5555555555555555;
          if ((uVar19 < uVar27 || uVar19 - uVar27 == 0) ||
             (plVar24 = (long *)(lStack_170 + uVar27 * 0x18), lVar11 = *plVar24,
             uVar19 = (plVar24[1] - lVar11 >> 3) * -0x5555555555555555,
             uVar19 < uVar17 || uVar19 - uVar17 == 0)) goto LAB_10ad1bad0;
          plVar24 = (long *)(lVar11 + uVar17 * 0x18);
          func_0x000109680cc0(plVar24,((long)(puVar28[4] - puVar28[3]) >> 3) * -0x5555555555555555);
          lVar11 = puVar28[3];
          if (puVar28[4] != lVar11) {
            lVar12 = 0;
            uVar19 = 0;
            do {
              if ((ulong)(plVar24[1] - *plVar24 >> 3) <= uVar19) goto LAB_10ad1bad0;
              plVar21 = (long *)(lVar11 + lVar12);
              plVar26 = (long *)*plVar21;
              if (-1 < *(char *)((long)plVar21 + 0x17)) {
                plVar26 = plVar21;
              }
              *(long **)(*plVar24 + uVar19 * 8) = plVar26;
              uVar19 = uVar19 + 1;
              lVar11 = puVar28[3];
              lVar12 = lVar12 + 0x18;
            } while (uVar19 < (ulong)((puVar28[4] - lVar11 >> 3) * -0x5555555555555555));
          }
          lVar11 = *plVar24;
          *(int *)(puVar30 + 2) = (int)((ulong)(plVar24[1] - lVar11) >> 3);
          puVar30[1] = lVar11;
          uVar17 = uVar17 + 1;
          lVar11 = *plVar23;
        } while (uVar17 < (ulong)((plVar23[1] - lVar11 >> 4) * -0x5555555555555555));
      }
      lVar11 = *plVar13;
      *(int *)(plVar14 + 6) = (int)((ulong)(plVar13[1] - lVar11) >> 3) * -0x55555555;
      plVar14[5] = lVar11;
      uVar27 = uVar27 + 1;
      lVar11 = *(long *)(pbVar31 + 0x70);
    } while (uVar27 < (ulong)(*(long *)(pbVar31 + 0x78) - lVar11 >> 6));
  }
  iStack_b8 = (int)((ulong)(lStack_1f8 - lStack_200) >> 3) * -0x49249249;
  lStack_c0 = lStack_200;
  lVar11 = *(long *)(pbVar31 + 0x108);
  if (*(long *)(pbVar31 + 0x110) != lVar11) {
    uVar27 = 0;
    do {
      if ((ulong)(lStack_150 - lStack_158 >> 4) <= uVar27) goto LAB_10ad1bad0;
      puVar29 = (undefined4 *)(lVar11 + uVar27 * 0x18);
      puVar2 = (undefined4 *)(lStack_158 + uVar27 * 0x10);
      *puVar2 = *puVar29;
      if ((ulong)(lStack_138 - lStack_140 >> 4) <= uVar27) goto LAB_10ad1bad0;
      *(ulong *)(puVar2 + 2) = lStack_140 + uVar27 * 0x10;
      ppppppplVar9 = *(long ********)(puVar29 + 2);
      if ((ppppppplVar9 == (long *******)0x0) ||
         (___dynamic_cast(ppppppplVar9,&PTR_DAT_1107ebae0,&PTR_DAT_1107ebaf0,0),
         ppppppplVar9 == (long *******)0x0)) {
        pppppplStack_90 = (long ******)0x0;
        ppppplStack_88 = (long *****)0x0;
      }
      else {
        ppppplStack_88 = *(long ******)(puVar29 + 4);
        pppppplStack_90 = (long ******)ppppppplVar9;
        if ((long ******)ppppplStack_88 != (long ******)0x0) {
          pppppplVar10 = (long ******)(ppppplStack_88 + 1);
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppppplVar10,0x10);
            if (bVar7) {
              *pppppplVar10 = (long *****)((long)*pppppplVar10 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
      ppppplVar16 = ppppplStack_88;
      ppppppplVar9 = (long *******)(pppppplStack_90 + 2);
      if (*(char *)((long)pppppplStack_90 + 0x27) < '\0') {
        ppppppplVar9 = (long *******)*ppppppplVar9;
      }
      *(long ********)(*(long *)(puVar2 + 2) + 8) = ppppppplVar9;
      ppppppplVar9 = (long *******)pppppplStack_90;
      (*(code *)**pppppplStack_90)();
      **(undefined4 **)(puVar2 + 2) = (int)ppppppplVar9;
      if ((long ******)ppppplVar16 != (long ******)0x0) {
        pppppplVar10 = (long ******)(ppppplVar16 + 1);
        do {
          ppppplVar15 = *pppppplVar10;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppplVar10,0x10);
          if (bVar7) {
            *pppppplVar10 = (long *****)((long)ppppplVar15 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppppplVar15 == (long *****)0x0) {
          (*(code *)(*ppppplVar16)[2])(ppppplVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar16);
        }
      }
      uVar27 = uVar27 + 1;
      lVar11 = *(long *)(pbVar31 + 0x108);
    } while (uVar27 < (ulong)((*(long *)(pbVar31 + 0x110) - lVar11 >> 3) * -0x5555555555555555));
  }
  uStack_98 = (undefined4)((ulong)(lStack_150 - lStack_158) >> 4);
  lStack_a0 = lStack_158;
  iVar3 = *(int *)(*(long *)(param_1 + 0x28) + 8);
  if (iVar3 == 0) {
    plVar23 = *(long **)(param_1 + 0x110);
    cVar4 = *(char *)(param_1 + 0x27);
    pcVar6 = FUN_10ad1a850;
    lVar11 = 0x18;
  }
  else {
    if (iVar3 != 1) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f6a4acd,&UNK_10f6a4e5f,0x6c,&UNK_10f6a4edd,in_x6,in_x7,iVar3)
        ;
      }
      goto LAB_10ad1b9a8;
    }
    plVar23 = *(long **)(param_1 + 0x110);
    cVar4 = *(char *)(param_1 + 0x27);
    pcVar6 = (code *)0x10ad1a8b0;
    lVar11 = 0x20;
  }
  lVar12 = param_1 + 0x10;
  if (cVar4 < '\0') {
    lVar12 = *(long *)(param_1 + 0x10);
  }
  (**(code **)(*plVar23 + lVar11))(plVar23,pcVar6,lVar12,&uStack_128,param_1);
LAB_10ad1b9a8:
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f6a4acd,&UNK_10f6a504d,0xac,&UNK_10f6a5085);
  }
  *(undefined1 *)(param_1 + 8) = 1;
  pppppplVar10 = *(long *******)(param_1 + 0x200);
  if ((pppppplVar10 != (long ******)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), ppppplStack_88 = (long *****)pppppplVar10,
     pppppplVar10 != (long ******)0x0)) {
    pppppplStack_90 = *(long *******)(param_1 + 0x1f8);
    if ((long *******)pppppplStack_90 != (long *******)0x0) {
      apppppplStack_70[0] = (long ******)0x2;
      (*(code *)(*pppppplStack_90)[1])(pppppplStack_90,apppppplStack_70);
    }
    pppppplVar1 = pppppplVar10 + 1;
    do {
      ppppplVar16 = *pppppplVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppppplVar1,0x10);
      if (bVar7) {
        *pppppplVar1 = (long *****)((long)ppppplVar16 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppppplVar16 == (long *****)0x0) {
      (*(code *)(*pppppplVar10)[2])(pppppplVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar10);
    }
  }
  FUN_10ad1c65c(&lStack_230);
  return;
}



/* Entry: 10ad1bbf0; end: 10ad1bccf;  */

void FUN_10ad1bbf0(long param_1,long *param_2,undefined4 *param_3)

{
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar1;
  
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    plVar1 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar1 = param_2;
    }
    func_0x00010ae06f08(1,8,&UNK_10f6a4acd,&UNK_10f6a4ef5,0x74,&UNK_10f6a4f70,in_x6,in_x7,plVar1);
  }
  plVar1 = (long *)(param_1 + 0x10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar1,param_2);
  *(undefined4 *)(param_1 + 0x38) = *param_3;
  if (*(long *)(param_1 + 0x110) == 0) {
    FUN_10ad1a918(param_1);
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    if (*(char *)(param_1 + 0x27) < '\0') {
      plVar1 = (long *)*plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010ad1bcb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x110) + 0x50))(*(long **)(param_1 + 0x110),plVar1);
    return;
  }
  return;
}



/* Entry: 10ad1bcd0; end: 10ad1bdaf;  */

undefined8 * FUN_10ad1bcd0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10ad1bdb0; end: 10ad1c013;  */

void FUN_10ad1bdb0(long param_1,long param_2,long param_3)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar5;
  float *pfVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  float *pfStack_38;
  
  lVar3 = *(long *)(param_1 + 0x120) + 1;
  *(long *)(param_1 + 0x120) = lVar3;
  if (((lVar3 * 0x1cac083126e978d5 + 0x10624dd2f1a9fb8U >> 3 | lVar3 * 0x1cac083126e978d5 << 0x3d) <
       0x4189374bc6a7ef) && ((bRam000000011330a9e8 >> 3 & 1) != 0)) {
    func_0x00010ae06f08(1,8,&UNK_10f6a4acd,&UNK_10f6a4fac,0x8c,&UNK_10f6a5002,in_x6,in_x7,lVar3);
  }
  if ((*(byte *)(param_1 + 0x168) & 1) != 0) {
    pfVar6 = (float *)(param_1 + 0x140);
    FUN_10ad12550(pfVar6,param_2,param_3 * *(int *)(param_1 + 0x220));
    lVar3 = param_2;
    if (*(char *)(param_1 + 0x1f0) == '\x01') {
      lStack_50 = *(long *)(param_1 + 0x208);
      lStack_58 = *(long *)(param_1 + 0x210) - lStack_50 >> 2;
      uStack_48 = 1;
      uStack_60 = 1;
      lVar3 = param_1 + 0x170;
      lStack_40 = param_2;
      pfStack_38 = pfVar6;
      (**(code **)(param_1 + 0x1a0))(lVar3,&uStack_48,&uStack_60,param_1 + 0x1a0);
      pfVar6 = *(float **)(param_1 + 0x208);
    }
    if ((*(char *)(param_1 + 8) == '\x01') &&
       (plVar4 = *(long **)(param_1 + 0x110), plVar4 != (long *)0x0)) {
      (**(code **)(*plVar4 + 0x38))(plVar4,pfVar6,lVar3);
    }
    iVar5 = (int)(*pfVar6 * 32768.0);
    if (iVar5 < -0x7fff) {
      iVar5 = -0x8000;
    }
    if (0x7ffe < iVar5) {
      iVar5 = 0x7fff;
    }
    iVar1 = -iVar5;
    if (-1 < iVar5) {
      iVar1 = iVar5;
    }
    dVar7 = (double)(iVar1 + 1);
    _log10();
    dVar8 = (dVar7 + -1.7999999523162842) / 2.200000047683716;
    dVar7 = 1.0;
    if (dVar8 <= 1.0) {
      dVar7 = dVar8;
    }
    dVar9 = 0.0;
    if (0.0 <= dVar8) {
      dVar9 = dVar7;
    }
    *(double *)(param_1 + 0x138) = dVar9;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad1bf6c);
  (*pcVar2)();
}



/* Entry: 10ad1c014; end: 10ad1c023;  */

undefined8 FUN_10ad1c014(void)

{
  return 1;
}



/* Entry: 10ad1c024; end: 10ad1c1af;  */

void FUN_10ad1c024(long param_1)

{
  int iVar1;
  long lVar2;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f6a4acd,&UNK_10f6a510b,0xcb,&UNK_10f6a5150);
  }
  if (*(long **)(param_1 + 0x110) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x110) + 0x30))();
  }
  uStack_40 = 0;
  uStack_38 = (ulong)uStack_38._4_4_ << 0x20;
  iVar1 = *(int *)(*(long *)(param_1 + 0x28) + 8);
  if (iVar1 == 1) {
    FUN_10ad19f4c(param_1,&UNK_10f6a5185,&stack0xffffffffffffffd0,&uStack_40,0,0,0);
  }
  else {
    if (iVar1 == 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      lVar2 = param_1;
      __ZNSt3__16chrono12steady_clock3nowEv();
      func_0x000107c2b054(&uStack_60,&UNK_10f6a5185);
      if (*(char *)(param_1 + 0x5f) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x48));
      }
      *(ulong *)(param_1 + 0x50) = CONCAT44(uStack_54,uStack_58);
      *(ulong *)(param_1 + 0x48) = CONCAT44(uStack_5c,uStack_60);
      *(ulong *)(param_1 + 0x58) = CONCAT44(uStack_4c,iStack_50);
      *(long *)(param_1 + 0x60) = lVar2;
      *(undefined1 *)(param_1 + 0x68) = 0;
      uStack_60 = uStack_60 & 0xffffff00;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_54 = 0;
      iStack_50 = 0;
      iStack_44 = 0;
      FUN_10ad19ed8(&uStack_40,&uStack_60);
      *(ulong *)(param_1 + 0x70) = CONCAT44(uStack_5c,uStack_60);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_1 + 0x78,&uStack_58);
      if (iStack_44 < 0) {
        __ZdlPv(CONCAT44(uStack_54,uStack_58));
      }
      return;
    }
    if ((bRam000000011330a9e8 & 1) != 0) {
      uStack_4c = 0;
      iStack_50 = iVar1;
      func_0x00010ae06f08(0,1,&UNK_10f6a4acd,&UNK_10f6a5186,0xde,&UNK_10f6a4edd);
    }
  }
  return;
}



/* Entry: 10ad1c1b0; end: 10ad1c1e7;  */

void FUN_10ad1c1b0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x200) = uVar6;
  *(undefined8 *)(param_1 + 0x1f8) = uVar5;
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10ad1c1e8; end: 10ad1c26f;  */

long FUN_10ad1c1e8(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0x9f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x88));
  }
  if (*(char *)(param_1 + 0x7f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x68));
  }
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  lStack_28 = param_1 + 0x38;
  FUN_10a0426d8(&lStack_28);
  lStack_28 = param_1 + 0x20;
  FUN_10a2b6f70(&lStack_28);
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10ad1c270; end: 10ad1c283;  */

ulong * FUN_10ad1c270(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = (ulong *)&DAT_10f62a4d8;
  FUN_109ffde64();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  if (param_2 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      FUN_10ad1c338();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad1c324);
      (*pcVar1)();
    }
    uVar3 = param_2;
    uVar4 = param_2;
    FUN_10ad1c34c();
    *puVar2 = uVar3;
    puVar2[2] = uVar3 + uVar4 * 0x18;
    _bzero();
    puVar2[1] = uVar3 + ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
  }
  return puVar2;
}



/* Entry: 10ad1c284; end: 10ad1c337;  */

ulong * FUN_10ad1c284(ulong *param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      FUN_10ad1c338();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad1c324);
      (*pcVar1)();
    }
    uVar2 = param_2;
    uVar3 = param_2;
    FUN_10ad1c34c();
    *param_1 = uVar2;
    param_1[2] = uVar2 + uVar3 * 0x18;
    _bzero();
    param_1[1] = uVar2 + ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
  }
  return param_1;
}



/* Entry: 10ad1c338; end: 10ad1c34b;  */

void FUN_10ad1c338(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar1 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)puVar1 * 0x18);
    return;
  }
  func_0x000109ffded8();
  plVar4 = (long *)*puVar1;
  if (plVar4 == (long *)0x0) {
    return;
  }
  plVar3 = (long *)puVar1[1];
  plVar2 = plVar4;
  if (plVar3 != plVar4) {
    do {
      plVar2 = plVar3 + -3;
      if (*plVar2 != 0) {
        plVar3[-2] = *plVar2;
        __ZdlPv();
      }
      plVar3 = plVar2;
    } while (plVar2 != plVar4);
    plVar2 = (long *)*puVar1;
  }
  puVar1[1] = plVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar2);
  return;
}



/* Entry: 10ad1c34c; end: 10ad1c38f;  */

void FUN_10ad1c34c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if (param_1 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)param_1 * 0x18);
    return;
  }
  func_0x000109ffded8();
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  plVar1 = plVar3;
  if (plVar2 != plVar3) {
    do {
      plVar1 = plVar2 + -3;
      if (*plVar1 != 0) {
        plVar2[-2] = *plVar1;
        __ZdlPv();
      }
      plVar2 = plVar1;
    } while (plVar1 != plVar3);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar1);
  return;
}



/* Entry: 10ad1c390; end: 10ad1c403;  */

void FUN_10ad1c390(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  plVar1 = plVar3;
  if (plVar2 != plVar3) {
    do {
      plVar1 = plVar2 + -3;
      if (*plVar1 != 0) {
        plVar2[-2] = *plVar1;
        __ZdlPv();
      }
      plVar2 = plVar1;
    } while (plVar1 != plVar3);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar1);
  return;
}



/* Entry: 10ad1c404; end: 10ad1c42b;  */

void FUN_10ad1c404(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar4 = (long *)*puVar1;
  if (plVar4 == (long *)0x0) {
    return;
  }
  plVar3 = (long *)puVar1[1];
  plVar2 = plVar4;
  if (plVar3 != plVar4) {
    do {
      plVar2 = plVar3 + -3;
      if (*plVar2 != 0) {
        plVar3[-2] = *plVar2;
        __ZdlPv();
      }
      plVar3 = plVar2;
    } while (plVar2 != plVar4);
    plVar2 = (long *)*puVar1;
  }
  puVar1[1] = plVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar2);
  return;
}



/* Entry: 10ad1c42c; end: 10ad1c49f;  */

void FUN_10ad1c42c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  plVar1 = plVar3;
  if (plVar2 != plVar3) {
    do {
      plVar1 = plVar2 + -3;
      if (*plVar1 != 0) {
        plVar2[-2] = *plVar1;
        __ZdlPv();
      }
      plVar2 = plVar1;
    } while (plVar1 != plVar3);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar1);
  return;
}



/* Entry: 10ad1c4a0; end: 10ad1c4b3;  */

void FUN_10ad1c4a0(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar4 = (long *)*puVar1;
  if (plVar4 == (long *)0x0) {
    return;
  }
  plVar3 = (long *)puVar1[1];
  plVar2 = plVar4;
  if (plVar3 != plVar4) {
    do {
      plVar2 = plVar3 + -3;
      if (*plVar2 != 0) {
        plVar3[-2] = *plVar2;
        __ZdlPv();
      }
      plVar3 = plVar2;
    } while (plVar2 != plVar4);
    plVar2 = (long *)*puVar1;
  }
  puVar1[1] = plVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar2);
  return;
}



/* Entry: 10ad1c4b4; end: 10ad1c527;  */

void FUN_10ad1c4b4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  plVar1 = plVar3;
  if (plVar2 != plVar3) {
    do {
      plVar1 = plVar2 + -3;
      if (*plVar1 != 0) {
        plVar2[-2] = *plVar1;
        __ZdlPv();
      }
      plVar2 = plVar1;
    } while (plVar1 != plVar3);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar1);
  return;
}



/* Entry: 10ad1c528; end: 10ad1c53b;  */

void FUN_10ad1c528(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_48;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    lVar4 = plVar1[1];
    lVar2 = lVar3;
    if (lVar4 != lVar3) {
      do {
        lVar4 = lVar4 + -0x18;
        lStack_48 = lVar4;
        FUN_10a2c2904(&lStack_48);
      } while (lVar4 != lVar3);
      lVar2 = *plVar1;
    }
    plVar1[1] = lVar3;
    __ZdlPv(lVar2);
  }
  return;
}



/* Entry: 10ad1c53c; end: 10ad1c5a3;  */

void FUN_10ad1c53c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        lVar3 = lVar3 + -0x18;
        lStack_38 = lVar3;
        FUN_10a2c2904(&lStack_38);
      } while (lVar3 != lVar2);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10ad1c5a4; end: 10ad1c5b7;  */

void FUN_10ad1c5a4(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar3 = plVar1[1];
    lVar2 = lVar4;
    if (lVar3 != lVar4) {
      do {
        lVar3 = lVar3 + -0x18;
        FUN_10ad1c390(lVar3);
      } while (lVar3 != lVar4);
      lVar2 = *plVar1;
    }
    plVar1[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10ad1c5b8; end: 10ad1c61f;  */

void FUN_10ad1c5b8(long *param_1)

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
        lVar2 = lVar2 + -0x18;
        FUN_10ad1c390(lVar2);
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



/* Entry: 10ad1c620; end: 10ad1c65b;  */

long * FUN_10ad1c620(void)

{
  long *plVar1;
  long *plStack_58;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (plVar1[0x1e] != 0) {
    plVar1[0x1f] = plVar1[0x1e];
    __ZdlPv();
  }
  if (plVar1[0x1b] != 0) {
    plVar1[0x1c] = plVar1[0x1b];
    __ZdlPv();
  }
  FUN_10ad1c5b8(plVar1 + 0x18);
  FUN_10ad1c53c(plVar1 + 0x15);
  FUN_10ad1c4b4(plVar1 + 0x12);
  plStack_58 = plVar1 + 0xf;
  func_0x00010a0d494c(&plStack_58);
  FUN_10ad1c390(plVar1 + 0xc);
  FUN_10ad1c42c(plVar1 + 9);
  if (plVar1[6] != 0) {
    plVar1[7] = plVar1[6];
    __ZdlPv();
  }
  FUN_10ad1c390(plVar1 + 3);
  if (*plVar1 != 0) {
    plVar1[1] = *plVar1;
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10ad1c65c; end: 10ad1c703;  */

long * FUN_10ad1c65c(long *param_1)

{
  long *plStack_28;
  
  if (param_1[0x1e] != 0) {
    param_1[0x1f] = param_1[0x1e];
    __ZdlPv();
  }
  if (param_1[0x1b] != 0) {
    param_1[0x1c] = param_1[0x1b];
    __ZdlPv();
  }
  FUN_10ad1c5b8(param_1 + 0x18);
  FUN_10ad1c53c(param_1 + 0x15);
  FUN_10ad1c4b4(param_1 + 0x12);
  plStack_28 = param_1 + 0xf;
  func_0x00010a0d494c(&plStack_28);
  FUN_10ad1c390(param_1 + 0xc);
  FUN_10ad1c42c(param_1 + 9);
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  FUN_10ad1c390(param_1 + 3);
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ad1c704; end: 10ad1c77f;  */

float * FUN_10ad1c704(float *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  *(undefined8 *)(param_1 + 4) = param_2;
  *(undefined8 *)(param_1 + 6) = param_3;
  param_1[8] = 7.17465e-43;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0x10] = 0.0;
  param_1[0x11] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 0.0;
  func_0x00010742a308(param_1 + 0xc);
  param_1[8] = (float)((int)*(ulong *)(param_1 + 4) - (int)param_1[6]);
  *param_1 = (float)*(ulong *)(param_1 + 4);
  return param_1;
}



/* Entry: 10ad1c780; end: 10ad1c973;  */

ulong * FUN_10ad1c780(long param_1,long *param_2,float *param_3,long *param_4)

{
  ulong uVar1;
  ulong *puVar2;
  undefined1 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  if (param_3[2] == 1.0) {
    uVar5 = (ulong)*param_3;
    if (uVar5 <= (ulong)param_2[1]) {
      lVar4 = *(long *)(param_1 + 0x28);
      uVar6 = lVar4 + uVar5;
      uVar8 = *(ulong *)(param_1 + 0x18);
      uVar1 = 0;
      if (uVar8 != 0) {
        uVar1 = uVar6 / uVar8;
      }
      if (*(long *)(param_1 + 0x10) * uVar1 <= (ulong)param_4[1]) {
        if (uVar6 < uVar8) {
          puVar2 = (ulong *)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x20) * 4 +
                            lVar4 * 4);
          _memcpy(puVar2,*param_2,uVar5 << 2);
          *(undefined4 *)(param_1 + 4) = 0;
          *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + uVar5;
        }
        else {
          uVar6 = uVar6 - uVar1 * uVar8;
          lVar7 = uVar8 - lVar4;
          _memcpy(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x20) * 4 + lVar4 * 4,
                  *param_2,lVar7 * 4);
          _memcpy(*param_4,*(undefined8 *)(param_1 + 0x30),*(long *)(param_1 + 0x10) << 2);
          *(undefined8 *)(param_1 + 0x28) = 0;
          lVar4 = *(long *)(param_1 + 0x18);
          if (1 < uVar1) {
            uVar8 = 1;
            do {
              _memcpy(*param_4 + *(long *)(param_1 + 0x10) * uVar8 * 4,
                      *param_4 + *(long *)(param_1 + 0x10) * (uVar8 - 1) * 4 + lVar4 * 4,
                      (long)*(int *)(param_1 + 0x20) << 2);
              _memcpy(*param_4 + *(long *)(param_1 + 0x10) * uVar8 * 4 +
                      (long)*(int *)(param_1 + 0x20) * 4,*param_2 + lVar7 * 4,
                      *(long *)(param_1 + 0x18) << 2);
              lVar4 = *(long *)(param_1 + 0x18);
              lVar7 = lVar4 + lVar7;
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar1);
          }
          _memcpy(*(undefined8 *)(param_1 + 0x30),
                  *param_4 + *(long *)(param_1 + 0x10) * (uVar1 - 1) * 4 + lVar4 * 4,
                  (long)*(int *)(param_1 + 0x20) << 2);
          puVar2 = (ulong *)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x20) * 4);
          _memcpy(puVar2,*param_2 + uVar5 * 4 + (long)(int)uVar6 * -4,
                  -(uVar6 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar6 & 0xffffffff) << 2);
          *(long *)(param_1 + 0x28) = (long)(int)uVar6;
          *(float *)(param_1 + 4) = (float)uVar1;
        }
        return puVar2;
      }
      goto LAB_10ad1c968;
    }
  }
  else {
    FUN_10a00946c(&UNK_10f6a524a);
  }
  FUN_10a00946c(&UNK_10f6a5276);
LAB_10ad1c968:
  uVar3 = SUB81(param_3,0);
  puVar2 = (ulong *)&UNK_10f6a52a4;
  FUN_10a00946c();
  *puVar2 = (ulong)param_2;
  *(undefined1 *)(puVar2 + 1) = uVar3;
  uVar9 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)((long)puVar2 + 0xc) = uVar9;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  func_0x00010742a308(puVar2 + 3);
  if ((char)puVar2[1] == '\x01') {
    *(ulong *)((long)puVar2 + 0xc) = CONCAT44(SQRT(2.0 / (float)*puVar2),SQRT(1.0 / (float)*puVar2))
    ;
  }
  return puVar2;
}



/* Entry: 10ad1c974; end: 10ad1ca07;  */

ulong * FUN_10ad1c974(ulong *param_1,ulong param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)((long)param_1 + 0xc) = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  func_0x00010742a308(param_1 + 3);
  if ((char)param_1[1] == '\x01') {
    *(ulong *)((long)param_1 + 0xc) =
         CONCAT44(SQRT(2.0 / (float)*param_1),SQRT(1.0 / (float)*param_1));
  }
  return param_1;
}



/* Entry: 10ad1ca08; end: 10ad1cb4b;  */

void FUN_10ad1ca08(ulong *param_1,float *param_2,long param_3)

{
  code *pcVar1;
  float *pfVar2;
  float *pfVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pfVar3 = (float *)param_1[3];
  if (*param_1 != 0) {
    _memmove(pfVar3,param_2,*param_1 << 2);
    pfVar3 = (float *)param_1[3];
  }
  if (param_3 == 0) {
    fVar7 = 0.0;
  }
  else {
    param_3 = param_3 << 2;
    fVar7 = 0.0;
    pfVar2 = pfVar3;
    do {
      fVar7 = fVar7 + *pfVar2;
      param_3 = param_3 + -4;
      pfVar2 = pfVar2 + 1;
    } while (param_3 != 0);
  }
  *param_2 = fVar7 * *(float *)((long)param_1 + 0xc);
  uVar4 = *param_1;
  if (1 < uVar4) {
    if ((ulong)((long)(param_1[4] - (long)pfVar3) >> 2) <= uVar4 - 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad1cb4c);
      (*pcVar1)();
    }
    uVar5 = 1;
    do {
      uVar6 = 0;
      fVar7 = 0.0;
      do {
        fVar9 = pfVar3[uVar6];
        fVar8 = (((float)uVar6 * 2.0 + 1.0) * 3.1415927 * (float)uVar5 * 0.5) / (float)uVar4;
        _cosf();
        fVar7 = fVar7 + fVar8 * fVar9;
        uVar6 = uVar6 + 1;
      } while (uVar4 != uVar6);
      param_2[uVar5] = fVar7 * *(float *)(param_1 + 2);
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar4);
  }
  return;
}



/* Entry: 10ad1cb4c; end: 10ad1cbaf;  */

long * FUN_10ad1cb4c(long *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = param_3;
  func_0x00010742a308(param_1,param_3 * param_2);
  if (0 < param_1[1] - *param_1) {
    _bzero();
  }
  return param_1;
}



/* Entry: 10ad1cbb0; end: 10ad1cd13;  */

long * FUN_10ad1cbb0(long *param_1,long *param_2,long param_3,long *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long *plVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_58;
  ulong uStack_50;
  
  plVar3 = param_2;
  FUN_10a8bcad0(&uStack_58,param_3);
  if (uStack_58 == param_1[3]) {
    if (uStack_58 == 0 || uStack_50 == 0) {
      uVar8 = 0;
LAB_10ad1cc34:
      if (uVar8 < (ulong)(param_1[1] - *param_1 >> 2)) {
        uVar7 = uVar8 << 2;
        _memcpy(*param_4,*param_1,uVar7);
        lVar5 = *param_1 + uVar8 * 4;
        _memmove(*param_1,lVar5,param_1[1] - lVar5 & 0xfffffffffffffffc);
        plVar3 = (long *)(*param_1 + (((ulong)(param_1[1] - *param_1) >> 2) - uVar8) * 4);
        lVar5 = *param_2;
      }
      else {
        _memcpy(*param_4);
        _memcpy(*param_4 + (param_1[1] - *param_1),*param_2,
                (uVar8 - ((ulong)(param_1[1] - *param_1) >> 2)) * 4);
        plVar3 = (long *)*param_1;
        uVar7 = param_1[1] - (long)plVar3;
        lVar5 = *param_2 + (uVar8 - (uVar7 >> 2)) * 4;
      }
      _memcpy(plVar3,lVar5,uVar7);
      return plVar3;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uStack_58;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uStack_50;
    if (SUB168(auVar1 * auVar2,8) != 0) goto LAB_10ad1ccf0;
    uVar8 = uStack_58 * uStack_50;
    if (uVar8 < (ulong)param_2[1] || uVar8 - param_2[1] == 0) {
      if (uVar8 < (ulong)param_4[1] || uVar8 - param_4[1] == 0) goto LAB_10ad1cc34;
      goto LAB_10ad1cd08;
    }
  }
  else {
    FUN_10a00946c(&UNK_10f6a52d3);
LAB_10ad1ccf0:
    FUN_10a00946c(&UNK_10f6818f4);
  }
  FUN_10a00946c(&UNK_10f6a530b);
LAB_10ad1cd08:
  plVar4 = (long *)&UNK_10f6a533e;
  FUN_10a00946c();
  *plVar4 = 0;
  plVar4[1] = 0;
  plVar4[2] = 0;
  plVar4[3] = param_3;
  plVar4[4] = (long)plVar3;
  plVar4[5] = param_3 * (long)plVar3;
  func_0x00010742a308();
  if (0 < plVar4[1] - *plVar4) {
    _bzero();
  }
  iVar6 = (int)(plVar4[3] - 1U >> 1);
  *(int *)(plVar4 + 6) = iVar6;
  *(float *)((long)plVar4 + 0x34) = (float)(int)((iVar6 + iVar6 * iVar6) * (iVar6 << 1 | 1U)) / 3.0;
  return plVar4;
}



/* Entry: 10ad1cd14; end: 10ad1cdab;  */

long * FUN_10ad1cd14(long *param_1,long param_2,long param_3)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_3;
  param_1[4] = param_2;
  param_1[5] = param_3 * param_2;
  func_0x00010742a308(param_1,param_3 * param_2);
  if (0 < param_1[1] - *param_1) {
    _bzero();
  }
  iVar1 = (int)(param_1[3] - 1U >> 1);
  *(int *)(param_1 + 6) = iVar1;
  *(float *)((long)param_1 + 0x34) = (float)(int)((iVar1 + iVar1 * iVar1) * (iVar1 << 1 | 1U)) / 3.0
  ;
  return param_1;
}



/* Entry: 10ad1cdac; end: 10ad1cf07;  */

long * FUN_10ad1cdac(long *param_1,long *param_2,float *param_3,long *param_4,long param_5,
                    long param_6,long param_7,long param_8)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  float *pfVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar17 = *param_3;
  uVar11 = param_1[4];
  fVar18 = (float)uVar11;
  if (fVar17 != fVar18) {
    plVar6 = (long *)&UNK_10f6a5372;
    FUN_10a00946c();
    plVar6[1] = 0;
    *(int *)plVar6 = (int)param_2;
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[4] = param_7;
    plVar6[6] = param_5;
    plVar6[7] = param_6;
    plVar6[8] = param_8;
    plVar8 = plVar6 + 10;
    plVar6[0xb] = 0;
    *plVar8 = 0;
    *(float *)(plVar6 + 9) = fVar17;
    *(float *)((long)plVar6 + 0x4c) = fVar18;
    plVar14 = plVar6 + 0xc;
    plVar6[0xd] = 0;
    *plVar14 = 0;
    plVar6[0xf] = 0;
    plVar6[0xe] = 0;
    plVar6[0x11] = 0;
    plVar6[0x10] = 0;
    func_0x00010742a308(plVar6 + 1,param_7);
    uVar7 = 0xe8;
    __Znwm(0xe8);
    FUN_10ad1dbe0();
    FUN_10a8e42a0(plVar14,uVar7);
    plVar14 = (long *)*plVar14;
    fVar17 = (float)(ulong)plVar14[0x11] / (float)(ulong)plVar14[0x12];
    if (fVar17 <= 1.0) {
      fVar17 = 1.0;
    }
    uVar11 = *(ulong *)(*plVar14 + 0x18);
    uVar13 = 0;
    if (uVar11 != 0) {
      uVar13 = (ulong)(*(long *)(*plVar14 + 0x10) << 0xe) / uVar11;
    }
    func_0x00010742a308(plVar6 + 0xd,uVar13 * (long)(int)fVar17);
    plVar6[0x10] = plVar6[0xd];
    plVar6[0x11] = plVar6[0xe] - plVar6[0xd] >> 2;
    lVar16 = 0x68;
    __Znwm();
    FUN_10ad1d304((int)plVar6[9],*(undefined4 *)((long)plVar6 + 0x4c));
    lVar12 = plVar6[0xb];
    plVar6[0xb] = lVar16;
    if (lVar12 != 0) {
      FUN_10a8e42c8(plVar6 + 0xb);
    }
    lVar16 = 0x30;
    __Znwm();
    FUN_10ad1c974();
    lVar12 = *plVar8;
    *plVar8 = lVar16;
    if (lVar12 != 0) {
      FUN_10a8e44f4(plVar8);
    }
    plVar6[5] = ((ulong)plVar6[6] >> 1) + 1;
    return plVar6;
  }
  fVar17 = param_3[1];
  plVar6 = param_1;
  if ((long)fVar17 != 0) {
    lVar16 = 0;
    do {
      _memmove(*param_1 + uVar11 * 4,*param_1,(param_1[5] - uVar11) * 4);
      plVar6 = (long *)*param_1;
      _memcpy(plVar6,*param_2 + param_1[4] * lVar16 * 4,param_1[4] << 2);
      uVar11 = param_1[4];
      if (uVar11 != 0) {
        lVar12 = 0;
        uVar13 = 0;
        lVar2 = *param_4;
        uVar3 = param_4[1];
        plVar14 = (long *)-uVar11;
        do {
          uVar1 = uVar13 + uVar11 * lVar16;
          if (uVar3 <= uVar1) {
LAB_10ad1cef8:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10ad1cefc);
            (*pcVar5)();
          }
          *(undefined4 *)(lVar2 + uVar1 * 4) = 0;
          lVar15 = param_1[3];
          if (lVar15 == 0) {
            fVar18 = 0.0;
          }
          else {
            plVar6 = (long *)(param_1[1] - *param_1 >> 2);
            pfVar9 = (float *)(*param_1 + lVar12);
            fVar18 = 0.0;
            iVar10 = 2;
            plVar8 = plVar14;
            do {
              plVar8 = (long *)((long)plVar8 + uVar11);
              if (plVar6 <= plVar8) goto LAB_10ad1cef8;
              fVar19 = (float)iVar10;
              iVar10 = iVar10 + -1;
              fVar4 = *pfVar9;
              pfVar9 = pfVar9 + uVar11;
              fVar18 = fVar18 + fVar4 * fVar19;
              *(float *)(lVar2 + uVar1 * 4) = fVar18;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
          *(float *)(lVar2 + uVar1 * 4) = fVar18 / *(float *)((long)param_1 + 0x34);
          uVar13 = uVar13 + 1;
          lVar12 = lVar12 + 4;
          plVar14 = (long *)((long)plVar14 + 1);
        } while (uVar13 != uVar11);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != (long)fVar17);
  }
  return plVar6;
}



/* Entry: 10ad1cf08; end: 10ad1d103;  */

undefined4 *
FUN_10ad1cf08(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  float fVar8;
  
  *(undefined8 *)(param_3 + 2) = 0;
  *param_3 = param_4;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0;
  *(undefined8 *)(param_3 + 8) = param_9;
  *(undefined8 *)(param_3 + 0xc) = param_7;
  *(undefined8 *)(param_3 + 0xe) = param_8;
  *(undefined8 *)(param_3 + 0x10) = param_10;
  plVar7 = (long *)(param_3 + 0x14);
  *(undefined8 *)(param_3 + 0x16) = 0;
  *plVar7 = 0;
  param_3[0x12] = param_1;
  param_3[0x13] = param_2;
  plVar6 = (long *)(param_3 + 0x18);
  *(undefined8 *)(param_3 + 0x1a) = 0;
  *plVar6 = 0;
  *(undefined8 *)(param_3 + 0x1e) = 0;
  *(undefined8 *)(param_3 + 0x1c) = 0;
  *(undefined8 *)(param_3 + 0x22) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  func_0x00010742a308(param_3 + 2,param_9);
  uVar3 = 0xe8;
  __Znwm(0xe8);
  FUN_10ad1dbe0();
  FUN_10a8e42a0(plVar6,uVar3);
  plVar6 = (long *)*plVar6;
  fVar8 = (float)(ulong)plVar6[0x11] / (float)(ulong)plVar6[0x12];
  if (fVar8 <= 1.0) {
    fVar8 = 1.0;
  }
  uVar1 = *(ulong *)(*plVar6 + 0x18);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (ulong)(*(long *)(*plVar6 + 0x10) << 0xe) / uVar1;
  }
  func_0x00010742a308(param_3 + 0x1a,uVar2 * (long)(int)fVar8);
  *(long *)(param_3 + 0x20) = *(long *)(param_3 + 0x1a);
  *(long *)(param_3 + 0x22) = *(long *)(param_3 + 0x1c) - *(long *)(param_3 + 0x1a) >> 2;
  uVar3 = 0x68;
  __Znwm();
  FUN_10ad1d304(param_3[0x12],param_3[0x13]);
  lVar4 = *(long *)(param_3 + 0x16);
  *(undefined8 *)(param_3 + 0x16) = uVar3;
  if (lVar4 != 0) {
    FUN_10a8e42c8(param_3 + 0x16);
  }
  lVar4 = 0x30;
  __Znwm();
  FUN_10ad1c974();
  lVar5 = *plVar7;
  *plVar7 = lVar4;
  if (lVar5 != 0) {
    FUN_10a8e44f4(plVar7);
  }
  *(ulong *)(param_3 + 10) = (*(ulong *)(param_3 + 0xc) >> 1) + 1;
  return param_3;
}



/* Entry: 10ad1d104; end: 10ad1d18f;  */

void FUN_10ad1d104(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x40);
  if ((uVar1 != 0) && (uVar2 = *(ulong *)(param_1 + 0x38), uVar2 != 0)) {
    uVar3 = 0;
    do {
      fVar4 = (float)(((double)(uVar3 & 0xffffffff) * 3.141592653589793) / (double)uVar1);
      _sinf();
      *(float *)(param_2 + uVar3 * 4) = *(float *)(param_2 + uVar3 * 4) * (fVar4 * 0.5 + 1.0);
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  return;
}



/* Entry: 10ad1d190; end: 10ad1d303;  */

ulong * FUN_10ad1d190(float param_1,float param_2,long param_3,ulong param_4,ulong param_5,
                     long *param_6)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  float *pfVar13;
  ulong uVar14;
  int iVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *puVar28;
  float *pfVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uStack_174;
  long lStack_170;
  long lStack_168;
  ulong *puStack_158;
  ulong *puStack_150;
  ulong *puStack_148;
  ulong *puStack_140;
  ulong *puStack_138;
  float *pfStack_98;
  long lStack_90;
  undefined8 uStack_88;
  
  puVar6 = *(ulong **)(param_3 + 0x60);
  iVar15 = (int)param_3 + 0x80;
  FUN_10ad1de9c(puVar6);
  lVar20 = (long)param_2;
  if ((ulong)(*(long *)(param_3 + 0x38) * lVar20) <= (ulong)param_6[1]) {
    if (lVar20 != 0) {
      lVar23 = 0;
      do {
        FUN_10ad1d888(&pfStack_98,*(undefined8 *)(param_3 + 0x58),
                      *(long *)(param_3 + 0x80) + *(long *)(param_3 + 0x28) * lVar23 * 4,
                      *(undefined8 *)(param_3 + 0x30));
        if (*(long *)(param_3 + 8) != 0) {
          *(long *)(param_3 + 0x10) = *(long *)(param_3 + 8);
          __ZdlPv();
        }
        pfVar13 = pfStack_98;
        *(float **)(param_3 + 8) = pfStack_98;
        *(undefined8 *)(param_3 + 0x18) = uStack_88;
        *(long *)(param_3 + 0x10) = lStack_90;
        lVar19 = *(long *)(param_3 + 0x20);
        if (lVar19 != 0) {
          lVar25 = lStack_90 - (long)pfStack_98 >> 2;
          lVar27 = lVar19;
          pfVar29 = pfStack_98;
          do {
            if (lVar25 == 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad1d2f8);
              (*pcVar4)();
            }
            fVar30 = *pfVar29;
            if (*pfVar29 <= 1e-09) {
              fVar30 = 1e-09;
            }
            _log10f();
            *pfVar29 = fVar30 * 10.0;
            lVar25 = lVar25 + -1;
            lVar27 = lVar27 + -1;
            pfVar29 = pfVar29 + 1;
          } while (lVar27 != 0);
        }
        FUN_10ad1ca08(*(undefined8 *)(param_3 + 0x50),pfVar13,lVar19);
        FUN_10ad1d104(param_3,*(undefined8 *)(param_3 + 8));
        puVar6 = (ulong *)(*param_6 + *(long *)(param_3 + 0x38) * lVar23 * 4);
        _memcpy(puVar6,*(undefined8 *)(param_3 + 8),*(long *)(param_3 + 0x38) << 2);
        lVar23 = lVar23 + 1;
      } while (lVar23 != lVar20);
    }
    return puVar6;
  }
  puVar6 = (ulong *)&UNK_10f6a53aa;
  FUN_10a00946c();
  *(int *)(puVar6 + 3) = iVar15;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar7 = puVar6 + 7;
  puVar6[7] = 0;
  puVar6[6] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xc] = 0;
  uVar21 = (param_4 >> 1) + 1;
  *puVar6 = param_4;
  puVar6[1] = uVar21;
  puVar6[2] = param_5;
  uStack_174 = 0;
  FUN_10a14e0c0(&lStack_170,uVar21,&uStack_174);
  uVar21 = puVar6[7];
  plVar16 = (long *)puVar6[8];
  lVar20 = (long)((long)plVar16 - uVar21) >> 3;
  bVar5 = param_5 < (ulong)(lVar20 * -0x5555555555555555);
  uVar1 = param_5 + lVar20 * 0x5555555555555555;
  if (bVar5 || uVar1 == 0) {
    if (bVar5) {
      plVar22 = (long *)(uVar21 + param_5 * 0x18);
      while (plVar2 = plVar16, plVar2 != plVar22) {
        plVar16 = plVar2 + -3;
        if (*plVar16 != 0) {
          plVar2[-2] = *plVar16;
          __ZdlPv();
        }
      }
      puVar6[8] = (ulong)plVar22;
    }
  }
  else if ((ulong)(((long)(puVar6[9] - (long)plVar16) >> 3) * -0x5555555555555555) < uVar1) {
    if (0xaaaaaaaaaaaaaaa < param_5) {
      FUN_10a0ca190();
LAB_10ad1d80c:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad1d810);
      (*pcVar4)();
    }
    lVar23 = (long)(puVar6[9] - uVar21) >> 3;
    uVar10 = lVar23 * 0x5555555555555556;
    if (uVar10 < param_5 || uVar10 - param_5 == 0) {
      uVar10 = param_5;
    }
    if (0x555555555555554 < (ulong)(lVar23 * -0x5555555555555555)) {
      uVar10 = 0xaaaaaaaaaaaaaaa;
    }
    puStack_138 = puVar7;
    FUN_10a0ca1a4();
    puVar24 = (undefined8 *)((long)puVar7 + ((long)plVar16 - uVar21));
    puStack_140 = puVar7 + uVar10 * 3;
    puVar28 = puVar24 + uVar1 * 3;
    lVar20 = param_5 * 0x18 + lVar20 * -8;
    puStack_158 = puVar7;
    puStack_150 = puVar24;
    puStack_148 = puVar24;
    do {
      *puVar24 = 0;
      puVar24[1] = 0;
      puVar24[2] = 0;
      FUN_10a0ca588(puVar24,lStack_170,lStack_168,lStack_168 - lStack_170 >> 2);
      puVar24 = puVar24 + 3;
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != 0);
    uVar21 = (long)puStack_150 - (puVar6[8] - puVar6[7]);
    _memcpy(uVar21);
    puStack_158 = (ulong *)puVar6[7];
    puVar6[7] = uVar21;
    puVar6[8] = (ulong)puVar28;
    uVar21 = puVar6[9];
    puVar6[9] = (ulong)puStack_140;
    puStack_150 = puStack_158;
    puStack_148 = puStack_158;
    puStack_140 = (ulong *)uVar21;
    func_0x000108a11c04(&puStack_158);
  }
  else {
    plVar22 = plVar16 + uVar1 * 3;
    lVar20 = param_5 * 0x18 + lVar20 * -8;
    do {
      *plVar16 = 0;
      plVar16[1] = 0;
      plVar16[2] = 0;
      FUN_10a0ca588(plVar16,lStack_170,lStack_168,lStack_168 - lStack_170 >> 2);
      plVar16 = plVar16 + 3;
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != 0);
    puVar6[8] = (ulong)plVar22;
  }
  if (lStack_170 != 0) {
    lStack_168 = lStack_170;
    __ZdlPv();
  }
  func_0x00010742a308(puVar6 + 10,puVar6[2]);
  func_0x00010742a308(puVar6 + 4,puVar6[2] + 2);
  fVar30 = param_1 / 700.0 + 1.0;
  _logf();
  fVar31 = param_2 / 700.0 + 1.0;
  _logf();
  uVar21 = 0;
  uVar10 = puVar6[2];
  uVar1 = puVar6[4];
  uVar26 = (long)(puVar6[5] - uVar1) >> 2;
  do {
    if (uVar26 == uVar21) goto LAB_10ad1d80c;
    fVar32 = (fVar30 * 1127.0 +
             ((fVar31 * 1127.0 - fVar30 * 1127.0) / (float)(uVar10 + 1)) *
             (float)(uVar21 & 0xffffffff)) / 1127.0;
    _expf();
    uVar8 = *puVar6;
    uVar3 = puVar6[3];
    fVar32 = ((fVar32 + -1.0) * 700.0 * (float)(uVar8 + 1)) / (float)(int)uVar3;
    *(float *)(uVar1 + uVar21 * 4) = fVar32;
    uVar9 = puVar6[1];
    if ((float)uVar9 < fVar32) {
      FUN_10a00946c(&UNK_10f6a53cd);
      goto LAB_10ad1d80c;
    }
    uVar21 = uVar21 + 1;
  } while (uVar10 + 2 != uVar21);
  if (uVar10 != 0) {
    uVar21 = uVar26;
    if (uVar26 < 3) {
      uVar21 = 2;
    }
    uVar11 = 1;
    do {
      if ((uVar11 == uVar26 + 1) || (uVar11 == uVar26)) goto LAB_10ad1d80c;
      uVar12 = uVar11 - 1;
      uVar18 = (long)(int)*(float *)(uVar1 + uVar12 * 4);
      while( true ) {
        uVar14 = uVar18 + 1;
        fVar30 = *(float *)(uVar1 + uVar11 * 4);
        iVar15 = (int)fVar30;
        if ((long)iVar15 <= (long)uVar18) break;
        uVar18 = ((long)(puVar6[8] - puVar6[7]) >> 3) * -0x5555555555555555;
        if (((uVar18 < uVar12 || uVar18 - uVar12 == 0) ||
            (plVar16 = (long *)(puVar6[7] + uVar12 * 0x18), lVar20 = *plVar16,
            (ulong)(plVar16[1] - lVar20 >> 2) <= uVar14)) ||
           (fVar31 = *(float *)(uVar1 + uVar12 * 4),
           *(float *)(lVar20 + uVar14 * 4) = ((float)(int)uVar14 - fVar31) / (fVar30 - fVar31),
           uVar18 = uVar14, uVar26 <= uVar11)) goto LAB_10ad1d80c;
      }
      if (uVar11 == uVar21 - 1) goto LAB_10ad1d80c;
      uVar18 = uVar11 + 1;
      uVar14 = (long)iVar15;
      while( true ) {
        uVar17 = uVar14 + 1;
        fVar30 = *(float *)(uVar1 + uVar18 * 4);
        if ((long)(int)fVar30 <= (long)uVar14) break;
        uVar14 = ((long)(puVar6[8] - puVar6[7]) >> 3) * -0x5555555555555555;
        if (((uVar14 < uVar12 || uVar14 - uVar12 == 0) ||
            (plVar16 = (long *)(puVar6[7] + uVar12 * 0x18), lVar20 = *plVar16,
            (ulong)(plVar16[1] - lVar20 >> 2) <= uVar17)) ||
           (*(float *)(lVar20 + uVar17 * 4) =
                 (fVar30 - (float)(int)uVar17) / (fVar30 - *(float *)(uVar1 + uVar11 * 4)),
           uVar14 = uVar17, uVar26 <= uVar18)) goto LAB_10ad1d80c;
      }
      bVar5 = uVar11 != uVar10;
      uVar11 = uVar18;
    } while (bVar5);
    uVar21 = 0;
    uVar11 = 0;
    if (1 < uVar26) {
      uVar11 = uVar26 - 2;
    }
    do {
      if (uVar21 == uVar11) goto LAB_10ad1d80c;
      if (uVar9 != 0) {
        uVar26 = ((long)(puVar6[8] - puVar6[7]) >> 3) * -0x5555555555555555;
        if (uVar26 < uVar21 || uVar26 - uVar21 == 0) goto LAB_10ad1d80c;
        fVar30 = *(float *)(uVar1 + 8 + uVar21 * 4);
        fVar31 = *(float *)(uVar1 + uVar21 * 4);
        plVar16 = (long *)(puVar6[7] + uVar21 * 0x18);
        pfVar13 = (float *)*plVar16;
        lVar20 = plVar16[1] - (long)pfVar13 >> 2;
        uVar26 = uVar9;
        do {
          if (lVar20 == 0) goto LAB_10ad1d80c;
          *pfVar13 = (2.0 / (((fVar30 - fVar31) * (float)(int)uVar3) / (float)(uVar8 + 1))) *
                     *pfVar13;
          lVar20 = lVar20 + -1;
          uVar26 = uVar26 - 1;
          pfVar13 = pfVar13 + 1;
        } while (uVar26 != 0);
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar10);
  }
  return puVar6;
}



/* Entry: 10ad1d304; end: 10ad1d887;  */

ulong * FUN_10ad1d304(float param_1,ulong *param_2,ulong param_3,ulong param_4,undefined4 param_5)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  ulong uVar15;
  int iVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined1 in_b0;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 in_register_00005001;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 in_register_00005002;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 in_register_00005003;
  undefined1 uVar31;
  undefined1 uVar32;
  float fVar33;
  float fVar34;
  undefined4 uStack_d4;
  long lStack_d0;
  long lStack_c8;
  ulong *puStack_b8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  
  *(undefined4 *)(param_2 + 3) = param_5;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[0xb] = 0;
  param_2[10] = 0;
  puVar6 = param_2 + 7;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xc] = 0;
  uVar20 = (param_3 >> 1) + 1;
  *param_2 = param_3;
  param_2[1] = uVar20;
  param_2[2] = param_4;
  uStack_d4 = 0;
  FUN_10a14e0c0(&lStack_d0,uVar20,&uStack_d4);
  uVar20 = param_2[7];
  plVar17 = (long *)param_2[8];
  lVar10 = (long)((long)plVar17 - uVar20) >> 3;
  bVar5 = param_4 < (ulong)(lVar10 * -0x5555555555555555);
  uVar1 = param_4 + lVar10 * 0x5555555555555555;
  if (bVar5 || uVar1 == 0) {
    if (bVar5) {
      plVar21 = (long *)(uVar20 + param_4 * 0x18);
      while (plVar2 = plVar17, plVar2 != plVar21) {
        plVar17 = plVar2 + -3;
        if (*plVar17 != 0) {
          plVar2[-2] = *plVar17;
          __ZdlPv();
        }
      }
      param_2[8] = (ulong)plVar21;
    }
  }
  else if ((ulong)(((long)(param_2[9] - (long)plVar17) >> 3) * -0x5555555555555555) < uVar1) {
    if (0xaaaaaaaaaaaaaaa < param_4) {
      FUN_10a0ca190();
LAB_10ad1d80c:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad1d810);
      (*pcVar4)();
    }
    lVar7 = (long)(param_2[9] - uVar20) >> 3;
    uVar11 = lVar7 * 0x5555555555555556;
    if (uVar11 < param_4 || uVar11 - param_4 == 0) {
      uVar11 = param_4;
    }
    if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar11 = 0xaaaaaaaaaaaaaaa;
    }
    puStack_98 = puVar6;
    FUN_10a0ca1a4();
    puVar22 = (undefined8 *)((long)puVar6 + ((long)plVar17 - uVar20));
    puStack_a0 = puVar6 + uVar11 * 3;
    puVar24 = puVar22 + uVar1 * 3;
    lVar10 = param_4 * 0x18 + lVar10 * -8;
    puStack_b8 = puVar6;
    puStack_b0 = puVar22;
    puStack_a8 = puVar22;
    do {
      *puVar22 = 0;
      puVar22[1] = 0;
      puVar22[2] = 0;
      FUN_10a0ca588(puVar22,lStack_d0,lStack_c8,lStack_c8 - lStack_d0 >> 2);
      puVar22 = puVar22 + 3;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != 0);
    uVar20 = (long)puStack_b0 - (param_2[8] - param_2[7]);
    _memcpy(uVar20);
    puStack_b8 = (ulong *)param_2[7];
    param_2[7] = uVar20;
    param_2[8] = (ulong)puVar24;
    uVar20 = param_2[9];
    param_2[9] = (ulong)puStack_a0;
    puStack_b0 = puStack_b8;
    puStack_a8 = puStack_b8;
    puStack_a0 = (ulong *)uVar20;
    func_0x000108a11c04(&puStack_b8);
  }
  else {
    plVar21 = plVar17 + uVar1 * 3;
    lVar10 = param_4 * 0x18 + lVar10 * -8;
    do {
      *plVar17 = 0;
      plVar17[1] = 0;
      plVar17[2] = 0;
      FUN_10a0ca588(plVar17,lStack_d0,lStack_c8,lStack_c8 - lStack_d0 >> 2);
      plVar17 = plVar17 + 3;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != 0);
    param_2[8] = (ulong)plVar21;
  }
  if (lStack_d0 != 0) {
    lStack_c8 = lStack_d0;
    __ZdlPv();
  }
  func_0x00010742a308(param_2 + 10,param_2[2]);
  func_0x00010742a308(param_2 + 4,param_2[2] + 2);
  fVar33 = (float)CONCAT13(in_register_00005003,
                           CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))) /
           700.0 + 1.0;
  uVar25 = SUB41(fVar33,0);
  uVar27 = (undefined1)((uint)fVar33 >> 8);
  uVar29 = (undefined1)((uint)fVar33 >> 0x10);
  uVar31 = (undefined1)((uint)fVar33 >> 0x18);
  _logf();
  fVar34 = (float)CONCAT13(uVar31,CONCAT12(uVar29,CONCAT11(uVar27,uVar25))) * 1127.0;
  fVar33 = param_1 / 700.0 + 1.0;
  uVar25 = SUB41(fVar33,0);
  uVar27 = (undefined1)((uint)fVar33 >> 8);
  uVar29 = (undefined1)((uint)fVar33 >> 0x10);
  uVar31 = (undefined1)((uint)fVar33 >> 0x18);
  _logf();
  uVar20 = 0;
  uVar11 = param_2[2];
  uVar1 = param_2[4];
  uVar23 = (long)(param_2[5] - uVar1) >> 2;
  do {
    if (uVar23 == uVar20) goto LAB_10ad1d80c;
    fVar33 = (fVar34 + (((float)CONCAT13(uVar31,CONCAT12(uVar29,CONCAT11(uVar27,uVar25))) * 1127.0 -
                        fVar34) / (float)(uVar11 + 1)) * (float)(uVar20 & 0xffffffff)) / 1127.0;
    uVar26 = SUB41(fVar33,0);
    uVar28 = (undefined1)((uint)fVar33 >> 8);
    uVar30 = (undefined1)((uint)fVar33 >> 0x10);
    uVar32 = (undefined1)((uint)fVar33 >> 0x18);
    _expf();
    uVar8 = *param_2;
    uVar3 = param_2[3];
    fVar33 = (((float)CONCAT13(uVar32,CONCAT12(uVar30,CONCAT11(uVar28,uVar26))) + -1.0) * 700.0 *
             (float)(uVar8 + 1)) / (float)(int)uVar3;
    *(float *)(uVar1 + uVar20 * 4) = fVar33;
    uVar9 = param_2[1];
    if ((float)uVar9 < fVar33) {
      FUN_10a00946c(&UNK_10f6a53cd);
      goto LAB_10ad1d80c;
    }
    uVar20 = uVar20 + 1;
  } while (uVar11 + 2 != uVar20);
  if (uVar11 != 0) {
    uVar20 = uVar23;
    if (uVar23 < 3) {
      uVar20 = 2;
    }
    uVar12 = 1;
    do {
      if ((uVar12 == uVar23 + 1) || (uVar12 == uVar23)) goto LAB_10ad1d80c;
      uVar13 = uVar12 - 1;
      uVar19 = (long)(int)*(float *)(uVar1 + uVar13 * 4);
      while( true ) {
        uVar15 = uVar19 + 1;
        fVar33 = *(float *)(uVar1 + uVar12 * 4);
        iVar16 = (int)fVar33;
        if ((long)iVar16 <= (long)uVar19) break;
        uVar19 = ((long)(param_2[8] - param_2[7]) >> 3) * -0x5555555555555555;
        if (((uVar19 < uVar13 || uVar19 - uVar13 == 0) ||
            (plVar17 = (long *)(param_2[7] + uVar13 * 0x18), lVar10 = *plVar17,
            (ulong)(plVar17[1] - lVar10 >> 2) <= uVar15)) ||
           (fVar34 = *(float *)(uVar1 + uVar13 * 4),
           *(float *)(lVar10 + uVar15 * 4) = ((float)(int)uVar15 - fVar34) / (fVar33 - fVar34),
           uVar19 = uVar15, uVar23 <= uVar12)) goto LAB_10ad1d80c;
      }
      if (uVar12 == uVar20 - 1) goto LAB_10ad1d80c;
      uVar19 = uVar12 + 1;
      uVar15 = (long)iVar16;
      while( true ) {
        uVar18 = uVar15 + 1;
        fVar33 = *(float *)(uVar1 + uVar19 * 4);
        if ((long)(int)fVar33 <= (long)uVar15) break;
        uVar15 = ((long)(param_2[8] - param_2[7]) >> 3) * -0x5555555555555555;
        if (((uVar15 < uVar13 || uVar15 - uVar13 == 0) ||
            (plVar17 = (long *)(param_2[7] + uVar13 * 0x18), lVar10 = *plVar17,
            (ulong)(plVar17[1] - lVar10 >> 2) <= uVar18)) ||
           (*(float *)(lVar10 + uVar18 * 4) =
                 (fVar33 - (float)(int)uVar18) / (fVar33 - *(float *)(uVar1 + uVar12 * 4)),
           uVar15 = uVar18, uVar23 <= uVar19)) goto LAB_10ad1d80c;
      }
      bVar5 = uVar12 != uVar11;
      uVar12 = uVar19;
    } while (bVar5);
    uVar20 = 0;
    uVar12 = 0;
    if (1 < uVar23) {
      uVar12 = uVar23 - 2;
    }
    do {
      if (uVar20 == uVar12) goto LAB_10ad1d80c;
      if (uVar9 != 0) {
        uVar23 = ((long)(param_2[8] - param_2[7]) >> 3) * -0x5555555555555555;
        if (uVar23 < uVar20 || uVar23 - uVar20 == 0) goto LAB_10ad1d80c;
        fVar33 = *(float *)(uVar1 + 8 + uVar20 * 4);
        fVar34 = *(float *)(uVar1 + uVar20 * 4);
        plVar17 = (long *)(param_2[7] + uVar20 * 0x18);
        pfVar14 = (float *)*plVar17;
        lVar10 = plVar17[1] - (long)pfVar14 >> 2;
        uVar23 = uVar9;
        do {
          if (lVar10 == 0) goto LAB_10ad1d80c;
          *pfVar14 = (2.0 / (((fVar33 - fVar34) * (float)(int)uVar3) / (float)(uVar8 + 1))) *
                     *pfVar14;
          lVar10 = lVar10 + -1;
          uVar23 = uVar23 - 1;
          pfVar14 = pfVar14 + 1;
        } while (uVar23 != 0);
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar11);
  }
  return param_2;
}



/* Entry: 10ad1d888; end: 10ad1d943;  */

void FUN_10ad1d888(undefined8 *param_1,long param_2,float *param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  float *pfVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  float fVar13;
  
  uVar5 = *(ulong *)(param_2 + 0x10);
  if (uVar5 == 0) {
    lVar2 = *(long *)(param_2 + 0x50);
    lVar3 = *(long *)(param_2 + 0x58);
    uVar4 = lVar3 - lVar2 >> 2;
  }
  else {
    uVar6 = 0;
    lVar2 = *(long *)(param_2 + 0x50);
    lVar3 = *(long *)(param_2 + 0x58);
    uVar4 = lVar3 - lVar2 >> 2;
    do {
      if (uVar6 == uVar4) {
LAB_10ad1d940:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad1d944);
        (*pcVar1)();
      }
      *(undefined4 *)(lVar2 + uVar6 * 4) = 0;
      lVar7 = *(long *)(param_2 + 8);
      if (lVar7 != 0) {
        uVar10 = (*(long *)(param_2 + 0x40) - *(long *)(param_2 + 0x38) >> 3) * -0x5555555555555555;
        if (uVar10 < uVar6 || uVar10 - uVar6 == 0) goto LAB_10ad1d940;
        plVar8 = (long *)(*(long *)(param_2 + 0x38) + uVar6 * 0x18);
        pfVar9 = (float *)*plVar8;
        lVar11 = plVar8[1] - (long)pfVar9 >> 2;
        fVar13 = 0.0;
        pfVar12 = param_3;
        do {
          if (lVar11 == 0) goto LAB_10ad1d940;
          fVar13 = fVar13 + *pfVar12 * *pfVar9;
          *(float *)(lVar2 + uVar6 * 4) = fVar13;
          lVar11 = lVar11 + -1;
          lVar7 = lVar7 + -1;
          pfVar9 = pfVar9 + 1;
          pfVar12 = pfVar12 + 1;
        } while (lVar7 != 0);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar5);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uVar4 != 0) {
    FUN_10a0ca600(param_1,uVar4);
    lVar7 = param_1[1];
    lVar3 = lVar3 - lVar2;
    if (lVar3 != 0) {
      _memmove(lVar7,lVar2,lVar3);
    }
    param_1[1] = lVar7 + lVar3;
  }
  return;
}



/* Entry: 10ad1d944; end: 10ad1daf7;  */

undefined4 *
FUN_10ad1d944(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  float fVar8;
  
  *param_3 = param_4;
  *(undefined8 *)(param_3 + 2) = 0;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0;
  *(undefined8 *)(param_3 + 8) = param_8;
  *(undefined8 *)(param_3 + 0xc) = param_7;
  plVar7 = (long *)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 0x12) = 0;
  *plVar7 = 0;
  param_3[0xe] = param_1;
  param_3[0xf] = param_2;
  *(undefined8 *)(param_3 + 0x16) = 0;
  *(undefined8 *)(param_3 + 0x14) = 0;
  *(undefined8 *)(param_3 + 0x1a) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 0x1c) = 0;
  func_0x00010742a308(param_3 + 2,param_8);
  uVar3 = 0xe8;
  __Znwm(0xe8);
  FUN_10ad1dbe0();
  FUN_10a8e42a0(param_3 + 0x12,uVar3);
  plVar6 = *(long **)(param_3 + 0x12);
  fVar8 = (float)(ulong)plVar6[0x11] / (float)(ulong)plVar6[0x12];
  if (fVar8 <= 1.0) {
    fVar8 = 1.0;
  }
  uVar1 = *(ulong *)(*plVar6 + 0x18);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (ulong)(*(long *)(*plVar6 + 0x10) << 0xe) / uVar1;
  }
  func_0x00010742a308(param_3 + 0x14,uVar2 * (long)(int)fVar8);
  *(long *)(param_3 + 0x1a) = *(long *)(param_3 + 0x14);
  *(long *)(param_3 + 0x1c) = *(long *)(param_3 + 0x16) - *(long *)(param_3 + 0x14) >> 2;
  lVar4 = 0x68;
  __Znwm();
  FUN_10ad1d304(param_3[0xe],param_3[0xf]);
  lVar5 = *plVar7;
  *plVar7 = lVar4;
  if (lVar5 != 0) {
    FUN_10a8e42c8(plVar7);
  }
  *(ulong *)(param_3 + 10) = (*(ulong *)(param_3 + 0xc) >> 1) + 1;
  return param_3;
}



/* Entry: 10ad1daf8; end: 10ad1dbdf;  */

long * FUN_10ad1daf8(undefined8 param_1,float param_2,long param_3,long param_4,undefined8 param_5,
                    long *param_6,undefined8 param_7,undefined4 param_8)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  plVar3 = *(long **)(param_3 + 0x48);
  uVar4 = param_3 + 0x68;
  FUN_10ad1de9c(plVar3);
  lVar5 = (long)param_2;
  if ((ulong)(*(long *)(param_3 + 0x20) * lVar5) <= (ulong)param_6[1]) {
    if (lVar5 != 0) {
      lVar7 = 0;
      do {
        FUN_10ad1d888(&uStack_60,*(undefined8 *)(param_3 + 0x40),
                      *(long *)(param_3 + 0x68) + *(long *)(param_3 + 0x28) * lVar7 * 4,
                      *(undefined8 *)(param_3 + 0x30));
        if (*(long *)(param_3 + 8) != 0) {
          *(long *)(param_3 + 0x10) = *(long *)(param_3 + 8);
          __ZdlPv();
        }
        *(undefined8 *)(param_3 + 0x10) = uStack_58;
        *(undefined8 *)(param_3 + 8) = uStack_60;
        *(undefined8 *)(param_3 + 0x18) = uStack_50;
        plVar3 = (long *)(*param_6 + *(long *)(param_3 + 0x20) * lVar7 * 4);
        _memcpy(plVar3,uStack_60,*(long *)(param_3 + 0x20) << 2);
        lVar7 = lVar7 + 1;
      } while (lVar5 != lVar7);
    }
    return plVar3;
  }
  plVar3 = (long *)&UNK_10f6a5408;
  FUN_10a00946c();
  *plVar3 = 0;
  FUN_10ad09c3c(plVar3 + 1);
  plVar3[10] = 0;
  plVar3[9] = 0;
  plVar3[0x15] = 0;
  plVar3[0x14] = 0;
  plVar3[0xe] = 0;
  plVar3[0xd] = 0;
  plVar3[0x10] = 0;
  plVar3[0xf] = 0;
  plVar3[0xc] = 0;
  plVar3[0xb] = 0;
  plVar3[0x17] = 0;
  plVar3[0x16] = 0;
  plVar3[0x19] = 0;
  plVar3[0x18] = 0;
  *(undefined4 *)(plVar3 + 0x1a) = 1;
  *(undefined4 *)((long)plVar3 + 0xd4) = param_8;
  plVar3[0x1b] = 0;
  *(undefined4 *)(plVar3 + 0x1c) = 0;
  lVar5 = 0x48;
  __Znwm();
  FUN_10ad1c704();
  lVar7 = *plVar3;
  *plVar3 = lVar5;
  if (lVar7 != 0) {
    func_0x00010a8e40c8(plVar3);
    lVar5 = *plVar3;
  }
  plVar3[0x11] = uVar4;
  plVar3[0x12] = param_4;
  plVar3[0x13] = (uVar4 >> 1) + 1;
  uVar4 = 0;
  if (*(ulong *)(lVar5 + 0x18) != 0) {
    uVar4 = (ulong)(*(long *)(lVar5 + 0x10) << 0xe) / *(ulong *)(lVar5 + 0x18);
  }
  func_0x00010742a308(plVar3 + 0xc,uVar4);
  plVar3[0xf] = plVar3[0xc];
  plVar3[0x10] = plVar3[0xd] - plVar3[0xc] >> 2;
  FUN_10ad0ad6c(plVar3 + 1,(ulong)plVar3[0x11] >> 1);
  func_0x00010ad0b5c8(plVar3 + 9,plVar3[0x11]);
  func_0x00010742a308(plVar3 + 0x14,plVar3[0x11]);
  if (0 < (plVar3[0x11] - plVar3[0x12]) * 4) {
    _bzero(plVar3[0x14] + plVar3[0x12] * 4);
  }
  func_0x00010742a308(plVar3 + 0x17,param_4);
  uVar4 = plVar3[0x12];
  if (uVar4 != 0) {
    uVar6 = 0;
    iVar1 = (int)plVar3[0x1a];
    do {
      if (iVar1 == 2) {
        lVar5 = plVar3[0x17];
        if ((ulong)(plVar3[0x18] - lVar5 >> 2) <= uVar6) {
LAB_10ad1de14:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad1de18);
          (*pcVar2)();
        }
        fVar8 = (float)(((double)(uVar6 & 0xffffffff) * 6.283185307179586) / (double)uVar4);
        _cosf();
        fVar8 = fVar8 * -0.46 + 0.54;
LAB_10ad1ddc8:
        *(float *)(lVar5 + uVar6 * 4) = fVar8;
      }
      else {
        if (iVar1 == 1) {
          lVar5 = plVar3[0x17];
          if ((ulong)(plVar3[0x18] - lVar5 >> 2) <= uVar6) goto LAB_10ad1de14;
          fVar8 = (float)(((double)(uVar6 & 0xffffffff) * 6.283185307179586) / (double)uVar4);
          _cosf();
          fVar8 = fVar8 * -0.5 + 0.5;
          goto LAB_10ad1ddc8;
        }
        if (iVar1 == 0) {
          lVar5 = plVar3[0x17];
          if ((ulong)(plVar3[0x18] - lVar5 >> 2) <= uVar6) goto LAB_10ad1de14;
          fVar8 = 1.0;
          goto LAB_10ad1ddc8;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar4 != uVar6);
  }
  *(float *)(plVar3 + 0x1b) = (float)(ulong)plVar3[0x13];
  uVar9 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)((long)plVar3 + 0xdc) = uVar9;
  return plVar3;
}



/* Entry: 10ad1dbe0; end: 10ad1de9b;  */

long * FUN_10ad1dbe0(long *param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                    undefined4 param_6)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  undefined8 uVar8;
  
  *param_1 = 0;
  FUN_10ad09c3c(param_1 + 1);
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 1;
  *(undefined4 *)((long)param_1 + 0xd4) = param_6;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  lVar3 = 0x48;
  __Znwm();
  FUN_10ad1c704();
  lVar4 = *param_1;
  *param_1 = lVar3;
  if (lVar4 != 0) {
    func_0x00010a8e40c8(param_1);
    lVar3 = *param_1;
  }
  param_1[0x11] = param_4;
  param_1[0x12] = param_2;
  param_1[0x13] = (param_4 >> 1) + 1;
  uVar5 = 0;
  if (*(ulong *)(lVar3 + 0x18) != 0) {
    uVar5 = (ulong)(*(long *)(lVar3 + 0x10) << 0xe) / *(ulong *)(lVar3 + 0x18);
  }
  func_0x00010742a308(param_1 + 0xc,uVar5);
  param_1[0xf] = param_1[0xc];
  param_1[0x10] = param_1[0xd] - param_1[0xc] >> 2;
  FUN_10ad0ad6c(param_1 + 1,(ulong)param_1[0x11] >> 1);
  func_0x00010ad0b5c8(param_1 + 9,param_1[0x11]);
  func_0x00010742a308(param_1 + 0x14,param_1[0x11]);
  if (0 < (param_1[0x11] - param_1[0x12]) * 4) {
    _bzero(param_1[0x14] + param_1[0x12] * 4);
  }
  func_0x00010742a308(param_1 + 0x17,param_2);
  uVar5 = param_1[0x12];
  if (uVar5 != 0) {
    uVar6 = 0;
    iVar1 = (int)param_1[0x1a];
    do {
      if (iVar1 == 2) {
        lVar3 = param_1[0x17];
        if ((ulong)(param_1[0x18] - lVar3 >> 2) <= uVar6) {
LAB_10ad1de14:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad1de18);
          (*pcVar2)();
        }
        fVar7 = (float)(((double)(uVar6 & 0xffffffff) * 6.283185307179586) / (double)uVar5);
        _cosf();
        fVar7 = fVar7 * -0.46 + 0.54;
LAB_10ad1ddc8:
        *(float *)(lVar3 + uVar6 * 4) = fVar7;
      }
      else {
        if (iVar1 == 1) {
          lVar3 = param_1[0x17];
          if ((ulong)(param_1[0x18] - lVar3 >> 2) <= uVar6) goto LAB_10ad1de14;
          fVar7 = (float)(((double)(uVar6 & 0xffffffff) * 6.283185307179586) / (double)uVar5);
          _cosf();
          fVar7 = fVar7 * -0.5 + 0.5;
          goto LAB_10ad1ddc8;
        }
        if (iVar1 == 0) {
          lVar3 = param_1[0x17];
          if ((ulong)(param_1[0x18] - lVar3 >> 2) <= uVar6) goto LAB_10ad1de14;
          fVar7 = 1.0;
          goto LAB_10ad1ddc8;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar5 != uVar6);
  }
  *(float *)(param_1 + 0x1b) = (float)(ulong)param_1[0x13];
  uVar8 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)((long)param_1 + 0xdc) = uVar8;
  return param_1;
}



/* Entry: 10ad1de9c; end: 10ad1e05b;  */

long * FUN_10ad1de9c(long *param_1,undefined8 param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  float *pfVar16;
  long *unaff_x19;
  long *unaff_x20;
  long lVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  fVar21 = 1.0;
  if (*(float *)(param_3 + 8) == 1.0) {
    plVar9 = (long *)*param_1;
    FUN_10ad1c780(plVar9,param_2,param_3,param_1 + 0xf);
    lVar17 = (long)fVar21;
    unaff_x19 = param_1;
    unaff_x20 = param_4;
    if ((ulong)(param_1[0x13] * lVar17) <= (ulong)param_4[1]) {
      if (lVar17 != 0) {
        lVar18 = 0;
        lVar19 = 0;
        do {
          uVar12 = param_1[0x12];
          if (uVar12 == 0) {
            lVar11 = param_1[0x14];
          }
          else {
            uVar13 = 0;
            lVar2 = param_1[0x17];
            lVar3 = param_1[0x18];
            do {
              if (((lVar3 - lVar2 >> 2 == uVar13) ||
                  ((ulong)param_1[0x10] <= uVar12 * lVar19 + uVar13)) ||
                 (lVar11 = param_1[0x14], (ulong)(param_1[0x15] - lVar11 >> 2) <= uVar13))
              goto LAB_10ad1e040;
              *(float *)(lVar11 + uVar13 * 4) =
                   *(float *)(lVar2 + uVar13 * 4) *
                   *(float *)(param_1[0xf] + uVar12 * lVar18 + uVar13 * 4);
              uVar13 = uVar13 + 1;
            } while (uVar12 != uVar13);
          }
          plVar9 = param_1 + 1;
          FUN_10ad0a944(plVar9,lVar11,param_1[9]);
          uVar12 = param_1[0x13];
          if (uVar12 != 0) {
            uVar13 = 0;
            iVar5 = *(int *)((long)param_1 + 0xd4);
            lVar11 = *param_4;
            uVar4 = param_4[1];
            uVar14 = param_1[10] - param_1[9] >> 3;
            uVar15 = uVar12 * lVar19;
            pfVar16 = (float *)(param_1[9] + 4);
            do {
              if (iVar5 == 1) {
                if ((uVar14 <= uVar13) || (uVar4 <= uVar15)) goto LAB_10ad1e040;
                fVar20 = SQRT(*pfVar16 * *pfVar16 + pfVar16[-1] * pfVar16[-1]);
              }
              else {
                if ((uVar14 <= uVar13) || (uVar4 <= uVar15)) {
LAB_10ad1e040:
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x10ad1e044);
                  (*pcVar8)();
                }
                fVar20 = *pfVar16 * *pfVar16 + pfVar16[-1] * pfVar16[-1];
              }
              *(float *)(lVar11 + uVar15 * 4) = fVar20;
              uVar13 = uVar13 + 1;
              uVar15 = uVar15 + 1;
              pfVar16 = pfVar16 + 2;
            } while (uVar12 != uVar13);
          }
          lVar19 = lVar19 + 1;
          lVar18 = lVar18 + 4;
        } while (lVar19 != lVar17);
      }
      *(float *)((long)param_1 + 0xdc) = fVar21;
      return plVar9;
    }
  }
  else {
    FUN_10a00946c(&UNK_10f6a5435);
  }
  puVar10 = (undefined8 *)&UNK_10f6a545d;
  FUN_10a00946c();
  uStack_58 = 0x10ad1e05c;
  *puVar10 = &PTR_FUN_110c6e7c0;
  puVar10[2] = 0;
  puVar10[1] = 0;
  uStack_80 = 0;
  plStack_78 = (long *)0x0;
  plStack_70 = unaff_x20;
  plStack_68 = unaff_x19;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010ad1e0dc(puVar10 + 1,&uStack_80);
  plVar9 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
    do {
      lVar17 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar17 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  return puVar10;
}



/* Entry: 10ad1e05c; end: 10ad1e13f;  */

undefined8 * FUN_10ad1e05c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  *param_1 = &PTR_FUN_110c6e7c0;
  param_1[2] = 0;
  param_1[1] = 0;
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  func_0x00010ad1e0dc(param_1 + 1,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 10ad1e140; end: 10ad1e24b;  */

void FUN_10ad1e140(long param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010ad1e150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10ad1e24c; end: 10ad1e2ab;  */

undefined8 * FUN_10ad1e24c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6e7c0;
  func_0x00010a7a2c40(param_1 + 1);
  return param_1;
}



/* Entry: 10ad1e2ac; end: 10ad1e31f;  */

float FUN_10ad1e2ac(float param_1,long param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = *(uint *)(param_2 + 0x1000);
  *(float *)(param_2 + (long)(int)uVar1 * 4) = param_1;
  fVar2 = *(float *)(param_2 + (ulong)(uVar1 + 0x380 & 0x3ff) * 4);
  fVar3 = *(float *)(param_2 + (ulong)(uVar1 + 0x300 & 0x3ff) * 4);
  fVar4 = *(float *)(param_2 + (ulong)(uVar1 + 0x280 & 0x3ff) * 4);
  *(uint *)(param_2 + 0x1000) = uVar1 + 1 & 0x3ff;
  return -(*(float *)(param_2 + 0x1008) * (fVar2 - fVar4)) + fVar3 * *(float *)(param_2 + 0x1004) +
         (param_1 + *(float *)(param_2 + ((ulong)uVar1 & 0x3ff ^ 0x200) * 4)) *
         *(float *)(param_2 + 0x100c);
}



/* Entry: 10ad1e320; end: 10ad1e55f;  */

void FUN_10ad1e320(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char *pcStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a5487;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  pcStack_70 = "";
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  pcStack_60 = "";
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f480150;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  pcStack_70 = "";
  pcStack_60 = (char *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010ad1e4bc(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f5a3742;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  pcStack_70 = "";
  pcStack_60 = (char *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010ad1e4bc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a5499;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  pcStack_70 = "";
  pcStack_60 = (char *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010ad1e4bc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a54a3;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  pcStack_70 = "";
  pcStack_60 = (char *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010ad1e4bc();
  FUN_10a003ff4();
  return;
}



/* Entry: 10ad1e560; end: 10ad1e67b;  */

void FUN_10ad1e560(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)param_1[3];
  fVar5 = (float)param_1[4];
  fVar3 = (float)param_1[1];
  if ((float)param_1[1] <= fVar4) {
    fVar3 = fVar4;
  }
  param_1[1] = (int)fVar3;
  if (fVar5 <= fVar3) {
    fVar2 = (float)param_1[5];
  }
  else {
    iVar1 = *param_1;
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        fVar2 = ((fVar3 - fVar4) * ((float)param_1[5] + -1.0)) / (fVar5 - fVar4);
        fVar3 = 1.0;
      }
      else {
        if (iVar1 != 1) {
          return;
        }
        fVar5 = (fVar5 * (1.0 - (float)param_1[5])) / (fVar5 - fVar4);
        fVar2 = 1.0 - fVar5;
        fVar3 = (fVar4 * fVar5) / fVar3;
      }
      fVar2 = fVar2 + fVar3;
    }
    else if (iVar1 == 2) {
      fVar2 = (float)param_1[5];
      _powf(fVar2,(fVar3 - fVar4) / (fVar5 - fVar4));
    }
    else {
      if (iVar1 != 3) {
        return;
      }
      fVar2 = (float)param_1[5] + -1.0 + (float)param_1[5] + -1.0;
      ___exp10f();
      fVar3 = ((fVar3 - fVar4) * (fVar2 + -1.0)) / (fVar5 - fVar4) + 1.0;
      _log10f();
      fVar2 = fVar3 * 0.5 + 1.0;
    }
  }
  param_1[2] = (int)fVar2;
  return;
}



/* Entry: 10ad1e67c; end: 10ad1e6ef;  */

undefined8 * FUN_10ad1e67c(undefined8 *param_1)

{
  long lVar1;
  float fVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  _bzero(param_1 + 9,0x4004);
  lVar1 = 0;
  param_1[3] = 0x44a560003f000000;
  param_1[2] = 0x43ab80003f800000;
  param_1[5] = 0x40860a9240060a92;
  param_1[4] = 0;
  do {
    fVar2 = *(float *)((long)param_1 + lVar1 + 0x24);
    *(float *)((long)param_1 + lVar1 + 0x30) = fVar2;
    *(float *)((long)param_1 + lVar1 + 0x3c) = fVar2 / 6.2831855;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0xc);
  return param_1;
}



/* Entry: 10ad1e6f0; end: 10ad1e787;  */

void FUN_10ad1e6f0(float param_1,float param_2,float *param_3)

{
  float fVar1;
  
  if (param_2 == 0.0) {
    param_2 = 0.0;
  }
  else {
    param_2 = ((param_3[3] - param_1) * 0.01) / param_2;
  }
  fVar1 = param_3[2] * 0.92 + param_2 * 0.07999998;
  param_3[2] = fVar1;
  param_3[3] = param_1;
  *param_3 = param_2;
  param_3[1] = fVar1;
  fVar1 = (float)(int)((1.0 / ((param_2 * param_3[4]) / param_3[5] + 1.0)) * 100.0 + 0.5) / 100.0;
  param_3[6] = fVar1;
  param_3[8] = (1.0 - fVar1) / param_3[7];
  return;
}



/* Entry: 10ad1e788; end: 10ad1e8f3;  */

float FUN_10ad1e788(undefined4 param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar1 = param_2 + 0x48;
  iVar3 = *(int *)(param_2 + 0x4048);
  *(undefined4 *)(lVar1 + (long)iVar3 * 4) = param_1;
  uVar2 = iVar3 + 1U & 0xfff;
  *(uint *)(param_2 + 0x4048) = uVar2;
  fVar7 = *(float *)(param_2 + 0x1c);
  fVar13 = *(float *)(param_2 + 0x20);
  pfVar5 = (float *)(param_2 + 0x30);
  fVar14 = 0.0;
  lVar6 = 3;
  do {
    fVar9 = fVar13 + pfVar5[3];
    if (1.0 <= fVar9) {
      fVar9 = fVar9 + -1.0;
    }
    if (fVar9 <= 0.0) {
      fVar9 = fVar9 + 1.0;
    }
    fVar10 = fVar7 * pfVar5[3];
    pfVar5[3] = fVar9;
    iVar3 = uVar2 - (int)fVar10;
    fVar11 = *(float *)(lVar1 + (ulong)(iVar3 - 1U & 0xfff) * 4);
    fVar12 = *(float *)(lVar1 + (ulong)(iVar3 + 0xffeU & 0xfff) * 4);
    fVar8 = *pfVar5;
    fVar9 = fVar8 + (fVar13 + fVar13) * 3.1415927;
    *pfVar5 = fVar9;
    fVar4 = -6.2831855;
    if ((6.2831855 <= fVar9) || (fVar4 = 6.2831855, fVar9 <= -6.2831855)) {
      *pfVar5 = fVar4 + fVar9;
    }
    _cosf();
    fVar14 = fVar14 + (1.0 - fVar8) * 0.5 *
                      (fVar12 * (fVar10 - (float)(int)fVar10) +
                      (1.0 - (fVar10 - (float)(int)fVar10)) * fVar11);
    pfVar5 = pfVar5 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return fVar14 * 0.6666667;
}



/* Entry: 10ad1e8f4; end: 10ad1ea37;  */

void FUN_10ad1e8f4(float param_1,float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = (param_1 + 1.5707964) / 6.2831855;
  fVar3 = ABS(fVar3 - (float)(int)(fVar3 + 0.5)) * 6.2831855 + -1.5707964;
  *(float *)(param_3 + 0x3d8) = fVar3;
  *(float *)(param_3 + 0x3dc) = param_2;
  fVar2 = *(float *)(param_3 + 0x10c) + fVar3;
  fVar7 = *(float *)(param_3 + 0x108);
  if (1.5707964 <= ABS(fVar2)) {
    fVar2 = ABS(fVar2) + -1.5707964 + 1.0;
  }
  else {
    _cosf();
    fVar2 = 1.0 - fVar2;
  }
  *(float *)(param_3 + 0x104) = fVar2 / fVar7;
  fVar2 = ((*(float *)(param_3 + 0x114) + fVar3) * 180.0) / 150.0;
  _cosf();
  fVar2 = fVar2 * 0.95 + 1.05;
  fVar7 = *(float *)(param_3 + 0x110);
  fVar6 = fVar7 + 1.0;
  *(float *)(param_3 + 0x118) = (fVar7 + fVar2) / fVar6;
  *(float *)(param_3 + 0x11c) = (fVar7 - fVar2) / fVar6;
  *(float *)(param_3 + 0x120) = (fVar7 + -1.0) / fVar6;
  fVar3 = fVar3 * 0.5;
  _cosf();
  lVar1 = 0;
  do {
    iVar4 = *(int *)(&UNK_10e50e878 + lVar1);
    dVar5 = (1.5707963267948966 - (double)param_2) * (double)*(float *)(&UNK_10e50e88c + lVar1);
    _sin();
    *(float *)(param_3 + 0x3c0 + lVar1) =
         (float)((double)*(int *)(&UNK_10e50e8a0 + lVar1) + dVar5 * (double)(fVar3 * (float)iVar4));
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x14);
  return;
}



/* Entry: 10ad1ea38; end: 10ad1eb07;  */

void FUN_10ad1ea38(long param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = *(int *)(param_1 + 0x100);
  *(float *)(param_1 + (long)iVar2 * 4) = *param_2;
  uVar1 = iVar2 + 1U & 0x3f;
  fVar3 = *(float *)(param_1 + 0x104);
  *(uint *)(param_1 + 0x100) = uVar1;
  iVar2 = uVar1 - (int)fVar3;
  fVar3 = *(float *)(param_1 + (ulong)(iVar2 + 0x3eU & 0x3f) * 4) * (fVar3 - (float)(int)fVar3) +
          (1.0 - (fVar3 - (float)(int)fVar3)) * *(float *)(param_1 + (ulong)(iVar2 - 1U & 0x3f) * 4)
  ;
  fVar5 = (*(float *)(param_1 + 0x124) * *(float *)(param_1 + 0x11c) +
          *(float *)(param_1 + 0x118) * fVar3) -
          *(float *)(param_1 + 0x128) * *(float *)(param_1 + 0x120);
  *(float *)(param_1 + 0x124) = fVar3;
  *(float *)(param_1 + 0x128) = fVar5;
  fVar5 = fVar5 + 0.0;
  *param_2 = fVar5;
  FUN_10ad1ee7c(param_1 + 0x33c);
  fVar3 = 1.0;
  if (fVar5 <= 1.0) {
    fVar3 = fVar5;
  }
  fVar4 = -1.0;
  if (-1.0 <= fVar5) {
    fVar4 = fVar3;
  }
  *param_2 = fVar4;
  return;
}



/* Entry: 10ad1eb08; end: 10ad1ec53;  */

void FUN_10ad1eb08(undefined8 param_1)

{
  undefined4 uStack_8c;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6a54b4;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x200000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010ad1ebfc(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6a54bc;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_8c = 0;
  FUN_10ad1ec54(param_1,&puStack_88,&uStack_8c);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6a54c4;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_8c = 1;
  FUN_10ad1ec54(param_1,&puStack_88,&uStack_8c);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10ad1ec54; end: 10ad1ecab;  */

ulong FUN_10ad1ec54(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10ad1ed48(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10ad1ecac; end: 10ad1ed47;  */

void FUN_10ad1ecac(int *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = (float)param_1[3];
  fVar1 = (float)param_1[1];
  _sinf();
  fVar3 = fVar3 * fVar1;
  param_1[2] = (int)fVar3;
  if (*param_1 == 1) {
    fVar1 = 3.3702806e+12;
    fVar3 = fVar3 * 0.7853982;
    ___sincosf_stret();
    param_1[4] = (int)((fVar1 - fVar3) * 0.70710677);
    fVar3 = (fVar1 + fVar3) * 0.70710677;
  }
  else {
    if (*param_1 != 0) {
      return;
    }
    iVar2 = NEON_fminnm(1.0 - fVar3,0x3f800000);
    param_1[4] = iVar2;
    fVar3 = (float)NEON_fminnm(fVar3 + 1.0,0x3f800000);
  }
  param_1[5] = (int)fVar3;
  return;
}



/* Entry: 10ad1ed48; end: 10ad1edbb;  */

void FUN_10ad1ed48(undefined8 *param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  int aiStack_20 [2];
  undefined8 *puStack_18;
  
  if (param_1[2] != param_1[3]) {
    aiStack_20[0] = 3;
    puStack_18 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,param_2,aiStack_20);
    if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
      (**(code **)*puStack_18)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad1edbc);
  (*pcVar1)();
}



/* Entry: 10ad1edbc; end: 10ad1ee7b;  */

void FUN_10ad1edbc(float param_1,float param_2,long param_3)

{
  long lVar1;
  int iVar2;
  double dVar3;
  
  param_1 = param_1 * 0.5;
  _cosf();
  lVar1 = 0;
  do {
    iVar2 = *(int *)(&UNK_10e50e878 + lVar1);
    dVar3 = (1.5707963267948966 - (double)param_2) * (double)*(float *)(&UNK_10e50e88c + lVar1);
    _sin();
    *(float *)(param_3 + 0x84 + lVar1) =
         (float)((double)*(int *)(&UNK_10e50e8a0 + lVar1) + dVar3 * (double)(param_1 * (float)iVar2)
                );
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x14);
  return;
}



/* Entry: 10ad1ee7c; end: 10ad1eeff;  */

float FUN_10ad1ee7c(float param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  lVar3 = 0;
  iVar2 = *(int *)(param_2 + 0x80);
  *(float *)(param_2 + (long)iVar2 * 4) = param_1;
  uVar1 = iVar2 + 1U & 0x1f;
  *(uint *)(param_2 + 0x80) = uVar1;
  fVar4 = 0.0;
  do {
    fVar5 = *(float *)(param_2 + 0x84 + lVar3);
    iVar2 = uVar1 - (int)fVar5;
    fVar4 = fVar4 + (*(float *)(param_2 + (ulong)(iVar2 + 0x1eU & 0x1f) * 4) *
                     (fVar5 - (float)(int)fVar5) +
                    (1.0 - (fVar5 - (float)(int)fVar5)) *
                    *(float *)(param_2 + (ulong)(iVar2 - 1U & 0x1f) * 4)) *
                    *(float *)(&UNK_10e50e8b4 + lVar3);
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x14);
  return param_1 + fVar4;
}



/* Entry: 10ad1ef00; end: 10ad1f04b;  */

void FUN_10ad1ef00(undefined8 param_1)

{
  undefined4 uStack_8c;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6a54cf;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x200000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010ad1eff4(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6a54d8;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_8c = 0;
  FUN_10ad1f04c(param_1,&puStack_88,&uStack_8c);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6a54e0;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_8c = 1;
  FUN_10ad1f04c(param_1,&puStack_88,&uStack_8c);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10ad1f04c; end: 10ad1f0a3;  */

ulong FUN_10ad1f04c(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10ad1f400(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10ad1f0a4; end: 10ad1f1c3;  */

void FUN_10ad1f0a4(undefined8 param_1,long param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  ulong uVar7;
  float fVar8;
  float fVar9;
  ulong uVar6;
  
  if (*(char *)(param_2 + 0x5880) == '\x01') {
    fVar4 = *param_3;
    uVar6 = (ulong)(uint)fVar4;
    fVar4 = SQRT(param_3[1] * param_3[1] + fVar4 * fVar4 + param_3[2] * param_3[2]);
    _atan2f();
    if (*(char *)(param_2 + 0x5881) == '\x01') {
      *(float *)(param_2 + 4) = fVar4;
      FUN_10ad1e560(param_2);
    }
    if (*(char *)(param_2 + 0x5882) == '\x01') {
      *(float *)(param_2 + 0x1c) = (float)uVar6;
      FUN_10ad1ecac(param_2 + 0x18);
    }
    if (*(char *)(param_2 + 0x5884) == '\x01') {
      FUN_10ad1e6f0(fVar4,param_1,param_2 + 0x40);
    }
    if ((*(char *)(param_2 + 0x5885) == '\x01') && (*(int *)(param_2 + 0x486c) == 0)) {
      uVar7 = (ulong)(uint)param_3[1];
      _atan2f(uVar7,ABS(param_3[2]));
      FUN_10ad1e8f4(uVar6,uVar7,param_2 + 0x408c);
      fVar4 = (-(float)uVar6 + 1.5707964) / 6.2831855;
      fVar4 = ABS(fVar4 - (float)(int)(fVar4 + 0.5)) * 6.2831855 + -1.5707964;
      *(float *)(param_2 + 0x4854) = fVar4;
      *(float *)(param_2 + 0x4858) = (float)uVar7;
      fVar2 = *(float *)(param_2 + 0x4588) + fVar4;
      fVar9 = *(float *)(param_2 + 0x4584);
      if (1.5707964 <= ABS(fVar2)) {
        fVar2 = ABS(fVar2) + -1.5707964 + 1.0;
      }
      else {
        _cosf();
        fVar2 = 1.0 - fVar2;
      }
      *(float *)(param_2 + 0x4580) = fVar2 / fVar9;
      fVar2 = ((*(float *)(param_2 + 0x4590) + fVar4) * 180.0) / 150.0;
      _cosf();
      fVar2 = fVar2 * 0.95 + 1.05;
      fVar9 = *(float *)(param_2 + 0x458c);
      fVar8 = fVar9 + 1.0;
      *(float *)(param_2 + 0x4594) = (fVar9 + fVar2) / fVar8;
      *(float *)(param_2 + 0x4598) = (fVar9 - fVar2) / fVar8;
      *(float *)(param_2 + 0x459c) = (fVar9 + -1.0) / fVar8;
      fVar4 = fVar4 * 0.5;
      _cosf();
      lVar1 = 0;
      do {
        iVar3 = *(int *)(&UNK_10e50e878 + lVar1);
        dVar5 = (1.5707963267948966 - (double)(float)uVar7) *
                (double)*(float *)(&UNK_10e50e88c + lVar1);
        _sin();
        *(float *)(param_2 + 0x483c + lVar1) =
             (float)((double)*(int *)(&UNK_10e50e8a0 + lVar1) +
                    dVar5 * (double)(fVar4 * (float)iVar3));
        lVar1 = lVar1 + 4;
      } while (lVar1 != 0x14);
      return;
    }
  }
  return;
}



/* Entry: 10ad1f1c4; end: 10ad1f2bf;  */

void FUN_10ad1f1c4(float param_1,long param_2)

{
  float fStack_28;
  float fStack_24;
  
  if (*(char *)(param_2 + 0x5881) == '\x01') {
    param_1 = param_1 * *(float *)(param_2 + 8);
  }
  fStack_28 = param_1;
  if (*(char *)(param_2 + 0x5883) == '\x01') {
    fStack_28 = param_1 * *(float *)(param_2 + 0x30);
  }
  if (*(char *)(param_2 + 0x5884) == '\x01') {
    FUN_10ad1e788(param_2 + 0x40);
  }
  fStack_24 = fStack_28;
  if (*(char *)(param_2 + 0x5886) == '\x01') {
    FUN_10ad1e2ac(param_2 + 0x4870);
  }
  if (*(char *)(param_2 + 0x5882) == '\x01') {
    fStack_28 = *(float *)(param_2 + 0x28) * fStack_28;
    fStack_24 = *(float *)(param_2 + 0x2c) * fStack_24;
  }
  if ((*(char *)(param_2 + 0x5885) == '\x01') && (*(int *)(param_2 + 0x486c) == 0)) {
    FUN_10ad1ea38(param_2 + 0x408c,&fStack_28);
    FUN_10ad1ea38(param_2 + 0x447c,&fStack_24);
  }
  return;
}



/* Entry: 10ad1f2c0; end: 10ad1f3ff;  */

void FUN_10ad1f2c0(undefined8 param_1,float param_2,long param_3,long param_4,ulong param_5,
                  long param_6)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 *puVar3;
  short *psVar4;
  undefined2 *puVar5;
  short *psVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  
  if (*(char *)(param_3 + 0x5880) != '\x01') {
    if (param_6 != 1) {
      return;
    }
    uVar2 = (int)param_5 - 1;
    if ((int)uVar2 < 0) {
      return;
    }
    lVar8 = (ulong)uVar2 + 1;
    puVar3 = (undefined2 *)(param_4 + (ulong)uVar2 * 2);
    puVar5 = (undefined2 *)(param_4 + (ulong)uVar2 * 4 + 2);
    do {
      uVar1 = *puVar3;
      puVar5[-1] = uVar1;
      *puVar5 = uVar1;
      lVar8 = lVar8 + -1;
      puVar3 = puVar3 + -1;
      puVar5 = puVar5 + -2;
    } while (lVar8 != 0);
    return;
  }
  if (param_6 == 2) {
    uVar9 = param_5 >> 1;
    if (1 < param_5) {
      psVar4 = (short *)(param_3 + 0x5888);
      psVar6 = (short *)(param_4 + 2);
      uVar7 = uVar9;
      do {
        *psVar4 = (short)((uint)(int)(short)(*psVar6 - (*psVar6 >> 0xf)) >> 1) +
                  (short)((uint)(int)(short)(psVar6[-1] - (psVar6[-1] >> 0xf)) >> 1);
        uVar7 = uVar7 - 1;
        psVar4 = psVar4 + 1;
        psVar6 = psVar6 + 2;
      } while (uVar7 != 0);
      goto LAB_10ad1f39c;
    }
  }
  else {
    _memcpy(param_3 + 0x5888,param_4,param_5 << 1);
    uVar9 = param_5;
  }
  if (uVar9 == 0) {
    return;
  }
LAB_10ad1f39c:
  lVar8 = 0x5888;
  puVar3 = (undefined2 *)(param_4 + 2);
  do {
    fVar10 = (float)(int)*(short *)(param_3 + lVar8) * 3.051851e-05;
    FUN_10ad1f1c4(param_3);
    puVar3[-1] = (short)(int)(fVar10 * 32767.0);
    *puVar3 = (short)(int)(param_2 * 32767.0);
    lVar8 = lVar8 + 2;
    uVar9 = uVar9 - 1;
    puVar3 = puVar3 + 2;
  } while (uVar9 != 0);
  return;
}



/* Entry: 10ad1f400; end: 10ad1f473;  */

void FUN_10ad1f400(undefined8 *param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  int aiStack_20 [2];
  undefined8 *puStack_18;
  
  if (param_1[2] != param_1[3]) {
    aiStack_20[0] = 3;
    puStack_18 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,param_2,aiStack_20);
    if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
      (**(code **)*puStack_18)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad1f474);
  (*pcVar1)();
}



/* Entry: 10ad1f474; end: 10ad1f4bb;  */

void FUN_10ad1f474(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x30;
  __Znwm();
  FUN_10ad1f4bc();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10ad1f4bc; end: 10ad1f503;  */

undefined8 * FUN_10ad1f4bc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c6e860;
  FUN_10ad1fcd4(param_1 + 3);
  return param_1;
}



/* Entry: 10ad1f504; end: 10ad1f513;  */

void FUN_10ad1f504(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6e860;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad1f514; end: 10ad1f533;  */

void FUN_10ad1f514(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6e860;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad1f534; end: 10ad1f543;  */

void FUN_10ad1f534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ad1f53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


