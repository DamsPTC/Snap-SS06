/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a187f60; end: 10a187fa7;  */

void FUN_10a187f60(ulong param_1)

{
  code *pcVar1;
  
  if (param_1 < 0x864b8a7de6d1d7) {
    __Znwm(param_1 * 0x1e8);
    return;
  }
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a187fac);
  (*pcVar1)();
}



/* Entry: 10a187fa8; end: 10a187faf;  */

void FUN_10a187fa8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a187fac);
  (*pcVar1)();
}



/* Entry: 10a187fb0; end: 10a188073;  */

void FUN_10a187fb0(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x80;
  func_0x00010a188034(&lStack_28);
  lStack_28 = param_1 + 0x68;
  FUN_10a1880c0(&lStack_28);
  lStack_28 = param_1 + 0x50;
  FUN_10a18814c(&lStack_28);
  lStack_28 = param_1 + 0x38;
  FUN_10a1881d8(&lStack_28);
  lStack_28 = param_1 + 0x20;
  func_0x00010a188264(&lStack_28);
  lStack_28 = param_1 + 8;
  func_0x00010a1883a4(&lStack_28);
  return;
}



/* Entry: 10a188074; end: 10a1880bf;  */

/* WARNING: Removing unreachable block (ram,0x00010a1880a0) */

void FUN_10a188074(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x20) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a1880c0; end: 10a1880ff;  */

void FUN_10a1880c0(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10a188100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a188100; end: 10a18814b;  */

/* WARNING: Removing unreachable block (ram,0x00010a18812c) */

void FUN_10a188100(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x28) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a18814c; end: 10a18818b;  */

void FUN_10a18814c(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10a18818c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a18818c; end: 10a1881d7;  */

/* WARNING: Removing unreachable block (ram,0x00010a1881b8) */

void FUN_10a18818c(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x20) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a1881d8; end: 10a188217;  */

void FUN_10a1881d8(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10a188218();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a188218; end: 10a1882d3;  */

/* WARNING: Removing unreachable block (ram,0x00010a188244) */

void FUN_10a188218(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x20) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a1882d4; end: 10a188357;  */

void FUN_10a1882d4(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 5;
  func_0x00010a188318(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return;
}



/* Entry: 10a188358; end: 10a188413;  */

/* WARNING: Removing unreachable block (ram,0x00010a188384) */

void FUN_10a188358(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x30) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a188414; end: 10a188457;  */

void FUN_10a188414(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 4;
  func_0x00010a188318(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return;
}



/* Entry: 10a188458; end: 10a1884ef;  */

/* WARNING: Removing unreachable block (ram,0x00010a188484) */

void FUN_10a188458(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x28) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a1884f0; end: 10a188533;  */

void FUN_10a1884f0(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a188534; end: 10a1885a3;  */

void FUN_10a188534(long *param_1)

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
        lVar2 = lVar2 + -0x30;
        FUN_10a1884f0(lVar2);
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



/* Entry: 10a1885a4; end: 10a188623;  */

void FUN_10a1885a4(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    func_0x00010a1884a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a188624; end: 10a188693;  */

void FUN_10a188624(long *param_1)

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
        lVar2 = lVar2 + -0x98;
        FUN_10a187fb0(lVar2);
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



/* Entry: 10a188694; end: 10a188703;  */

undefined8 * FUN_10a188694(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10a044fac(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2);
    param_1[1] = lVar1 + param_2;
  }
  return param_1;
}



/* Entry: 10a188704; end: 10a189003;  */

long * FUN_10a188704(long *param_1,ulong *param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  int iVar6;
  undefined **ppuVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  ulong unaff_x22;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  long lStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined **ppuStack_b0;
  long *plStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar19 = param_1 + 5;
  FUN_10a189004();
  if (plVar19 == (long *)0x0) {
    (**(code **)(*param_1 + 0x18))(&lStack_c8,param_1,param_2);
    lVar12 = lStack_c8;
    if (lStack_c8 == 0) {
      iVar6 = 0x137ea778;
      plVar18 = (long *)0x1137ea780;
      if (((bRam00000001137ea778 & 1) == 0) && (___cxa_guard_acquire(), iVar6 != 0)) {
        uRam00000001137ea788 = 0;
        plVar18 = (long *)0x1137ea780;
        uRam00000001137ea780 = 0;
        ___cxa_guard_release(0x1137ea778);
      }
LAB_10a188f30:
      ppuVar7 = ppuStack_c0;
      if (ppuStack_c0 != (undefined **)0x0) {
        ppuVar1 = ppuStack_c0 + 1;
        do {
          puVar11 = *ppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar3) {
            *ppuVar1 = puVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar11 == (undefined *)0x0) {
          (**(code **)(*ppuStack_c0 + 0x10))(ppuStack_c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
        }
      }
      goto LAB_10a1887c8;
    }
    plVar18 = param_1 + 5;
    FUN_10a189004(plVar18,param_2);
    if (plVar18 == (long *)0x0) {
      lStack_b8 = lVar12;
      ppuStack_b0 = ppuStack_c0;
      if (ppuStack_c0 != (undefined **)0x0) {
        ppuVar7 = ppuStack_c0 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
          if (bVar3) {
            *ppuVar7 = *ppuVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      plStack_a8 = (long *)&UNK_1053a6a3c;
      ppuStack_a0 = &PTR_DAT_110ae9180;
      uVar20 = *param_2;
      uVar21 = param_1[6];
      if (uVar21 != 0) {
        uVar9 = uVar21 - 1;
        if ((uVar21 & uVar9) == 0) {
          unaff_x22 = uVar9 & uVar20;
        }
        else {
          unaff_x22 = uVar20;
          if (uVar21 <= uVar20) {
            uVar14 = 0;
            if (uVar21 != 0) {
              uVar14 = uVar20 / uVar21;
            }
            unaff_x22 = uVar20 - uVar14 * uVar21;
          }
        }
        puVar13 = *(undefined8 **)(param_1[5] + unaff_x22 * 8);
        if ((puVar13 != (undefined8 *)0x0) && (plVar18 = (long *)*puVar13, plVar18 != (long *)0x0))
        {
          do {
            uVar14 = plVar18[1];
            if (uVar14 == uVar20) {
              if (((plVar18[2] == uVar20) && (plVar18[3] == param_2[1])) &&
                 ((int)plVar18[4] == (int)param_2[2])) goto LAB_10a188d14;
            }
            else {
              if ((uVar21 & uVar9) == 0) {
                uVar14 = uVar14 & uVar9;
              }
              else if (uVar21 <= uVar14) {
                uVar10 = 0;
                if (uVar21 != 0) {
                  uVar10 = uVar14 / uVar21;
                }
                uVar14 = uVar14 - uVar10 * uVar21;
              }
              if (uVar14 != unaff_x22) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
      plVar18 = (long *)0x78;
      __Znwm();
      ppuVar7 = ppuStack_b0;
      *plVar18 = 0;
      plVar18[1] = uVar20;
      uVar9 = *param_2;
      plVar18[3] = param_2[1];
      plVar18[2] = uVar9;
      plVar18[4] = param_2[2];
      plVar18[5] = lVar12;
      lStack_b8 = 0;
      ppuStack_b0 = (undefined **)0x0;
      plVar18[6] = (long)ppuVar7;
      plVar18[7] = (long)&UNK_1053a6a3c;
      plVar18[8] = (long)&PTR_DAT_110ae9180;
      plStack_a8 = (long *)&UNK_1053a6a3c;
      ppuStack_a0 = &PTR_DAT_110ae9180;
      if ((uVar21 == 0) ||
         (*(float *)((long)param_1 + 0x4c) * (float)uVar21 < (float)(param_1[8] + 1))) {
        uVar9 = 1;
        if (2 < uVar21) {
          uVar9 = (ulong)((uVar21 & uVar21 - 1) != 0);
        }
        uVar9 = uVar9 | uVar21 << 1;
        uVar14 = (ulong)((float)(param_1[8] + 1) / *(float *)((long)param_1 + 0x4c));
        if (uVar9 <= uVar14) {
          uVar9 = uVar14;
        }
        if (uVar9 - 1 == 0) {
          uVar9 = 2;
        }
        else if ((uVar9 & uVar9 - 1) != 0) {
          __ZNSt3__112__next_primeEm();
          uVar21 = param_1[6];
        }
        if (uVar21 < uVar9) {
LAB_10a188b28:
          if (uVar9 >> 0x3d != 0) {
            func_0x000109ffded8();
            goto LAB_10a188fc0;
          }
          lVar12 = uVar9 << 3;
          __Znwm();
          lVar8 = param_1[5];
          param_1[5] = lVar12;
          if (lVar8 != 0) {
            __ZdlPv();
          }
          uVar21 = 0;
          param_1[6] = uVar9;
          do {
            *(undefined8 *)(param_1[5] + uVar21 * 8) = 0;
            uVar21 = uVar21 + 1;
          } while (uVar9 != uVar21);
          plVar19 = (long *)param_1[7];
          uVar21 = uVar9;
          if (plVar19 != (long *)0x0) {
            uVar14 = plVar19[1];
            uVar10 = uVar9 - 1;
            if ((uVar9 & uVar10) == 0) {
              uVar14 = uVar14 & uVar10;
            }
            else if (uVar9 <= uVar14) {
              uVar17 = 0;
              if (uVar9 != 0) {
                uVar17 = uVar14 / uVar9;
              }
              uVar14 = uVar14 - uVar17 * uVar9;
            }
            *(long **)(param_1[5] + uVar14 * 8) = param_1 + 7;
            plVar15 = (long *)*plVar19;
            while (plVar15 != (long *)0x0) {
              uVar17 = plVar15[1];
              if ((uVar9 & uVar10) == 0) {
                uVar17 = uVar17 & uVar10;
              }
              else if (uVar9 <= uVar17) {
                uVar4 = 0;
                if (uVar9 != 0) {
                  uVar4 = uVar17 / uVar9;
                }
                uVar17 = uVar17 - uVar4 * uVar9;
              }
              plVar16 = plVar15;
              if (uVar17 != uVar14) {
                lVar12 = param_1[5];
                if (*(long *)(lVar12 + uVar17 * 8) == 0) {
                  *(long **)(lVar12 + uVar17 * 8) = plVar19;
                  uVar14 = uVar17;
                }
                else {
                  *plVar19 = *plVar15;
                  *plVar15 = **(undefined8 **)(lVar12 + uVar17 * 8);
                  **(long **)(lVar12 + uVar17 * 8) = (long)plVar15;
                  plVar16 = plVar19;
                }
              }
              plVar19 = plVar16;
              plVar15 = (long *)*plVar16;
            }
          }
        }
        else if (uVar9 < uVar21) {
          uVar14 = (ulong)((float)(ulong)param_1[8] / *(float *)((long)param_1 + 0x4c));
          if ((uVar21 < 3) || ((uVar21 & uVar21 - 1) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if (1 < uVar14) {
            uVar14 = 1L << (-LZCOUNT(uVar14 - 1) & 0x3fU);
          }
          if (uVar9 <= uVar14) {
            uVar9 = uVar14;
          }
          if (uVar9 < uVar21) {
            if (uVar9 != 0) goto LAB_10a188b28;
            lVar12 = param_1[5];
            param_1[5] = 0;
            if (lVar12 != 0) {
              __ZdlPv();
            }
            param_1[6] = 0;
            uVar21 = 0;
          }
          else {
            uVar21 = param_1[6];
          }
        }
        if ((uVar21 & uVar21 - 1) == 0) {
          unaff_x22 = uVar21 - 1 & uVar20;
        }
        else {
          unaff_x22 = uVar20;
          if (uVar21 <= uVar20) {
            uVar9 = 0;
            if (uVar21 != 0) {
              uVar9 = uVar20 / uVar21;
            }
            unaff_x22 = uVar20 - uVar9 * uVar21;
          }
        }
      }
      lVar12 = param_1[5];
      plVar19 = *(long **)(lVar12 + unaff_x22 * 8);
      if (plVar19 == (long *)0x0) {
        plVar19 = param_1 + 7;
        *plVar18 = *plVar19;
        *plVar19 = (long)plVar18;
        *(long **)(lVar12 + unaff_x22 * 8) = plVar19;
        if (*plVar18 != 0) {
          uVar20 = *(ulong *)(*plVar18 + 8);
          if ((uVar21 & uVar21 - 1) == 0) {
            uVar20 = uVar20 & uVar21 - 1;
          }
          else if (uVar21 <= uVar20) {
            uVar9 = 0;
            if (uVar21 != 0) {
              uVar9 = uVar20 / uVar21;
            }
            uVar20 = uVar20 - uVar9 * uVar21;
          }
          *(long **)(param_1[5] + uVar20 * 8) = plVar18;
        }
      }
      else {
        *plVar18 = *plVar19;
        *plVar19 = (long)plVar18;
      }
      param_1[8] = param_1[8] + 1;
LAB_10a188d14:
      FUN_10a044790(&plStack_a8);
      (*(code *)*ppuStack_a0)(&ppuStack_a0);
      ppuVar7 = ppuStack_b0;
      if (ppuStack_b0 != (undefined **)0x0) {
        ppuVar1 = ppuStack_b0 + 1;
        do {
          puVar11 = *ppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar3) {
            *ppuVar1 = puVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar11 == (undefined *)0x0) {
          (**(code **)(*ppuStack_b0 + 0x10))(ppuStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
        }
      }
      ppuVar7 = (undefined **)0x28;
      __Znwm();
      puVar11 = (undefined *)*param_2;
      ppuVar7[3] = (undefined *)param_2[1];
      ppuVar7[2] = puVar11;
      ppuVar7[4] = (undefined *)param_2[2];
      plVar19 = param_1 + 2;
      puVar11 = (undefined *)*plVar19;
      *ppuVar7 = puVar11;
      ppuVar7[1] = (undefined *)plVar19;
      *(undefined ***)(puVar11 + 8) = ppuVar7;
      *plVar19 = (long)ppuVar7;
      param_1[4] = param_1[4] + 1;
      lStack_b8 = 0x10a1890c4;
      ppuStack_b0 = &PTR_DAT_110ba99f8;
      plStack_a8 = param_1;
      ppuStack_a0 = ppuVar7;
      func_0x00010a108320(plVar18 + 7,&lStack_b8);
      FUN_10a044790(&lStack_b8);
      (*(code *)*ppuStack_b0)(&ppuStack_b0);
      uVar21 = param_1[4];
      uVar20 = (ulong)*(uint *)(param_1 + 1);
      if (uVar20 < uVar21) {
        do {
          plVar19 = param_1 + 5;
          FUN_10a189004(plVar19,param_1[3] + 0x10);
          if (plVar19 != (long *)0x0) {
            uVar20 = param_1[6];
            uVar21 = plVar19[1];
            uVar9 = uVar20 - 1;
            if ((uVar20 & uVar9) == 0) {
              uVar21 = uVar9 & uVar21;
            }
            else if (uVar20 <= uVar21) {
              uVar14 = 0;
              if (uVar20 != 0) {
                uVar14 = uVar21 / uVar20;
              }
              uVar21 = uVar21 - uVar14 * uVar20;
            }
            lVar12 = *plVar19;
            plVar15 = *(long **)(param_1[5] + uVar21 * 8);
            do {
              plVar16 = plVar15;
              plVar15 = (long *)*plVar16;
            } while ((long *)*plVar16 != plVar19);
            if (plVar16 == param_1 + 7) {
LAB_10a188e88:
              if (lVar12 == 0) {
LAB_10a188ebc:
                *(undefined8 *)(param_1[5] + uVar21 * 8) = 0;
                lVar12 = *plVar19;
                goto LAB_10a188ec4;
              }
              uVar14 = *(ulong *)(lVar12 + 8);
              if ((uVar20 & uVar9) == 0) {
                uVar10 = uVar14 & uVar9;
              }
              else {
                uVar10 = uVar14;
                if (uVar20 <= uVar14) {
                  uVar10 = 0;
                  if (uVar20 != 0) {
                    uVar10 = uVar14 / uVar20;
                  }
                  uVar10 = uVar14 - uVar10 * uVar20;
                }
              }
              if (uVar10 != uVar21) goto LAB_10a188ebc;
LAB_10a188ecc:
              if ((uVar20 & uVar9) == 0) {
                uVar14 = uVar14 & uVar9;
              }
              else if (uVar20 <= uVar14) {
                uVar9 = 0;
                if (uVar20 != 0) {
                  uVar9 = uVar14 / uVar20;
                }
                uVar14 = uVar14 - uVar9 * uVar20;
              }
              if (uVar14 != uVar21) {
                *(long **)(param_1[5] + uVar14 * 8) = plVar16;
                lVar12 = *plVar19;
              }
            }
            else {
              uVar14 = plVar16[1];
              if ((uVar20 & uVar9) == 0) {
                uVar14 = uVar14 & uVar9;
              }
              else if (uVar20 <= uVar14) {
                uVar10 = 0;
                if (uVar20 != 0) {
                  uVar10 = uVar14 / uVar20;
                }
                uVar14 = uVar14 - uVar10 * uVar20;
              }
              if (uVar14 != uVar21) goto LAB_10a188e88;
LAB_10a188ec4:
              if (lVar12 != 0) {
                uVar14 = *(ulong *)(lVar12 + 8);
                goto LAB_10a188ecc;
              }
            }
            *plVar16 = lVar12;
            *plVar19 = 0;
            param_1[8] = param_1[8] + -1;
            func_0x00010a189148(1);
            uVar21 = param_1[4];
            uVar20 = (ulong)*(uint *)(param_1 + 1);
          }
        } while (uVar20 < uVar21);
      }
LAB_10a188f2c:
      plVar18 = plVar18 + 5;
      goto LAB_10a188f30;
    }
    if ((char)param_1[10] != '\x01') {
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f6404ef,&UNK_10f640910,0x91,&UNK_10f64071c);
        lVar12 = lStack_c8;
      }
      ppuVar7 = ppuStack_c0;
      lStack_c8 = 0;
      ppuStack_c0 = (undefined **)0x0;
      plVar19 = (long *)plVar18[6];
      plVar18[5] = lVar12;
      plVar18[6] = (long)ppuVar7;
      if (plVar19 != (long *)0x0) {
        plVar15 = plVar19 + 1;
        do {
          lVar12 = *plVar15;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *plVar15 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
        }
      }
      ppuVar7 = (undefined **)0x28;
      __Znwm();
      puVar11 = (undefined *)*param_2;
      ppuVar7[3] = (undefined *)param_2[1];
      ppuVar7[2] = puVar11;
      ppuVar7[4] = (undefined *)param_2[2];
      plVar19 = param_1 + 2;
      puVar11 = (undefined *)*plVar19;
      *ppuVar7 = puVar11;
      ppuVar7[1] = (undefined *)plVar19;
      *(undefined ***)(puVar11 + 8) = ppuVar7;
      *plVar19 = (long)ppuVar7;
      param_1[4] = param_1[4] + 1;
      lStack_b8 = 0x10a1890c4;
      ppuStack_b0 = &PTR_DAT_110ba99f8;
      plStack_a8 = param_1;
      ppuStack_a0 = ppuVar7;
      func_0x00010a108320(plVar18 + 7,&lStack_b8);
      FUN_10a044790(&lStack_b8);
      (*(code *)*ppuStack_b0)(&ppuStack_b0);
      goto LAB_10a188f2c;
    }
  }
  else {
    plVar18 = plVar19 + 5;
    ppuVar7 = (undefined **)0x28;
    __Znwm();
    puVar11 = (undefined *)*param_2;
    ppuVar7[3] = (undefined *)param_2[1];
    ppuVar7[2] = puVar11;
    ppuVar7[4] = (undefined *)param_2[2];
    plVar15 = param_1 + 2;
    puVar11 = (undefined *)*plVar15;
    *ppuVar7 = puVar11;
    ppuVar7[1] = (undefined *)plVar15;
    *(undefined ***)(puVar11 + 8) = ppuVar7;
    *plVar15 = (long)ppuVar7;
    param_1[4] = param_1[4] + 1;
    lStack_b8 = 0x10a1890c4;
    ppuStack_b0 = &PTR_DAT_110ba99f8;
    plStack_a8 = param_1;
    ppuStack_a0 = ppuVar7;
    func_0x00010a108320(plVar19 + 7,&lStack_b8);
    FUN_10a044790(&lStack_b8);
    (*(code *)*ppuStack_b0)(&ppuStack_b0);
LAB_10a1887c8:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return plVar18;
    }
    ___stack_chk_fail();
  }
  FUN_10a00946c(&UNK_10f6404c1);
LAB_10a188fc0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a188fc4);
  (*pcVar5)();
}



/* Entry: 10a189004; end: 10a18910f;  */

long * FUN_10a189004(long *param_1,ulong *param_2)

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
      if (plVar6 != (long *)0x0) {
        do {
          uVar7 = plVar6[1];
          if (uVar7 == uVar3) {
            if (((plVar6[2] == uVar3) && (plVar6[3] == param_2[1])) &&
               ((int)plVar6[4] == (int)param_2[2])) {
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
        } while (plVar6 != (long *)0x0);
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}



/* Entry: 10a189110; end: 10a189257;  */

long FUN_10a189110(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a044790(param_1 + 0x10);
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
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



/* Entry: 10a189258; end: 10a189303;  */

void FUN_10a189258(undefined8 *param_1,char *param_2,long param_3,char *param_4,long param_5)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
            (param_1,param_5 + param_3);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_1,(long)*param_2);
    param_2 = param_2 + 1;
  }
  for (; param_5 != 0; param_5 = param_5 + -1) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_1,(long)*param_4);
    param_4 = param_4 + 1;
  }
  return;
}



/* Entry: 10a189304; end: 10a189397;  */

void FUN_10a189304(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  uVar1 = param_1[1];
  puVar5 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar5 = param_1;
  }
  uVar2 = param_2[1];
  puVar6 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar6 = param_2;
  }
  uVar3 = param_3[1];
  puVar7 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar7 = param_3;
  }
  uVar4 = param_4[1];
  puVar8 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar4 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar8 = param_4;
  }
  FUN_10a189398(puVar5,uVar1,puVar6,uVar2,puVar7,uVar3,puVar8,uVar4,*param_5,param_5[1]);
  return;
}



/* Entry: 10a189398; end: 10a1894d7;  */

void FUN_10a189398(undefined8 *param_1,char *param_2,long param_3,char *param_4,long param_5,
                  char *param_6,long param_7,char *param_8,long param_9,char *param_10,long param_11
                  )

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
            (param_1,param_5 + param_3 + param_7 + param_9 + param_11);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_1,(long)*param_2);
    param_2 = param_2 + 1;
  }
  for (; param_5 != 0; param_5 = param_5 + -1) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_1,(long)*param_4);
    param_4 = param_4 + 1;
  }
  for (; param_7 != 0; param_7 = param_7 + -1) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_1,(long)*param_6);
    param_6 = param_6 + 1;
  }
  for (; param_9 != 0; param_9 = param_9 + -1) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_1,(long)*param_8);
    param_8 = param_8 + 1;
  }
  for (; param_11 != 0; param_11 = param_11 + -1) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_1,(long)*param_10);
    param_10 = param_10 + 1;
  }
  return;
}



/* Entry: 10a1894d8; end: 10a18962f;  */

undefined8 * FUN_10a1894d8(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a189630();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_10a18a988(param_1 + 3,*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x20),
                (*(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18) >> 3) * -0x3333333333333333);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_10a18abf4(param_1 + 6,*(long *)(param_2 + 0x30),*(long *)(param_2 + 0x38),
                *(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x30) >> 5);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_10a18ae38(param_1 + 9,*(long *)(param_2 + 0x48),*(long *)(param_2 + 0x50),
                *(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48) >> 4);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_10a18af28();
  return param_1;
}



/* Entry: 10a189630; end: 10a1896b3;  */

void FUN_10a189630(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a1896b4(param_1,param_4);
    lVar1 = param_1;
    FUN_10a18975c(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a1896b4; end: 10a1896ff;  */

undefined1  [16] FUN_10a1896b4(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 < 0x1af286bca1af287) {
    plVar1 = param_1;
    FUN_10a189714();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0x13);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10a189700();
  FUN_109ffde64(&UNK_10f6403f7);
  if (param_2 < 0x1af286bca1af287) {
    lVar2 = param_2 * 0x98;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  uVar3 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x98) {
    uVar3 = param_2;
    FUN_10a1897e0(param_4,param_2);
    param_4 = param_4 + 0x98;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a189700; end: 10a189713;  */

undefined1  [16] FUN_10a189700(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  FUN_109ffde64(&UNK_10f6403f7);
  if (param_2 < 0x1af286bca1af287) {
    lVar1 = param_2 * 0x98;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x98) {
    uVar2 = param_2;
    FUN_10a1897e0(param_4,param_2);
    param_4 = param_4 + 0x98;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a189714; end: 10a18975b;  */

undefined1  [16] FUN_10a189714(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 < 0x1af286bca1af287) {
    lVar1 = param_2 * 0x98;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x98) {
    uVar2 = param_2;
    FUN_10a1897e0(param_4,param_2);
    param_4 = param_4 + 0x98;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a18975c; end: 10a1897df;  */

long FUN_10a18975c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x98) {
    FUN_10a1897e0(param_4,param_2);
    param_4 = param_4 + 0x98;
  }
  return param_4;
}



/* Entry: 10a1897e0; end: 10a189973;  */

undefined4 * FUN_10a1897e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  FUN_10a189974(param_1 + 2,*(long *)(param_2 + 2),*(long *)(param_2 + 4),
                (*(long *)(param_2 + 4) - *(long *)(param_2 + 2) >> 3) * 0x6db6db6db6db6db7);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  FUN_10a189e28(param_1 + 8,*(long *)(param_2 + 8),*(long *)(param_2 + 10),
                *(long *)(param_2 + 10) - *(long *)(param_2 + 8) >> 6);
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  FUN_10a18a050(param_1 + 0xe,*(long *)(param_2 + 0xe),*(long *)(param_2 + 0x10),
                *(long *)(param_2 + 0x10) - *(long *)(param_2 + 0xe) >> 5);
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_10a18a294(param_1 + 0x14,*(long *)(param_2 + 0x14),*(long *)(param_2 + 0x16),
                *(long *)(param_2 + 0x16) - *(long *)(param_2 + 0x14) >> 5);
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  FUN_10a18a4d8(param_1 + 0x1a,*(long *)(param_2 + 0x1a),*(long *)(param_2 + 0x1c),
                (*(long *)(param_2 + 0x1c) - *(long *)(param_2 + 0x1a) >> 3) * -0x3333333333333333);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  FUN_10a18a744();
  return param_1;
}



/* Entry: 10a189974; end: 10a1899f7;  */

void FUN_10a189974(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a1899f8(param_1,param_4);
    lVar1 = param_1;
    FUN_10a189aa0(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a1899f8; end: 10a189a43;  */

undefined1  [16] FUN_10a1899f8(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 < 0x492492492492493) {
    plVar1 = param_1;
    FUN_10a189a58();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 7);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10a189a44();
  FUN_109ffde64(&UNK_10f6403f7);
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
    FUN_10a189b24(param_4,param_2);
    param_4 = param_4 + 0x38;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a189a44; end: 10a189a57;  */

undefined1  [16] FUN_10a189a44(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  FUN_109ffde64(&UNK_10f6403f7);
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
    FUN_10a189b24(param_4,param_2);
    param_4 = param_4 + 0x38;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a189a58; end: 10a189a9f;  */

undefined1  [16] FUN_10a189a58(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

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
    FUN_10a189b24(param_4,param_2);
    param_4 = param_4 + 0x38;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a189aa0; end: 10a189b23;  */

long FUN_10a189aa0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    FUN_10a189b24(param_4,param_2);
    param_4 = param_4 + 0x38;
  }
  return param_4;
}



/* Entry: 10a189b24; end: 10a189bbb;  */

undefined8 * FUN_10a189b24(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[3];
  param_1[4] = 0;
  param_1[3] = uVar1;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_10a189bbc();
  return param_1;
}



/* Entry: 10a189bbc; end: 10a189c3f;  */

void FUN_10a189bbc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a189c40(param_1,param_4);
    lVar1 = param_1;
    FUN_10a189ce0(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a189c40; end: 10a189c87;  */

undefined1  [16]
FUN_10a189c40(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined *puStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined1 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  
  if (param_2 < (undefined8 *)0x555555555555556) {
    plVar1 = param_1;
    FUN_10a189c9c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 6);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = plVar1;
    return auVar7;
  }
  FUN_10a189c88();
  puVar2 = &UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 < (undefined8 *)0x555555555555556) {
    lVar3 = (long)param_2 * 0x30;
    __Znwm(lVar3);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar3;
    return auVar8;
  }
  func_0x000109ffded8();
  ppuStack_a8 = &puStack_90;
  ppuStack_a0 = &puStack_88;
  uStack_98 = 0;
  puStack_b0 = puVar2;
  puVar4 = param_2;
  puStack_90 = param_4;
  for (; puStack_88 = param_4, param_2 != param_3; param_2 = param_2 + 6) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar4 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar4,param_2[1]);
    }
    else {
      uVar6 = param_2[1];
      uVar5 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar6;
      *param_4 = uVar5;
    }
    uVar6 = param_2[4];
    uVar5 = param_2[3];
    param_4[5] = param_2[5];
    param_4[4] = uVar6;
    param_4[3] = uVar5;
    param_4 = puStack_88 + 6;
  }
  uStack_98 = 1;
  FUN_10a189db0(&puStack_b0);
  auVar9._8_8_ = puVar4;
  auVar9._0_8_ = param_4;
  return auVar9;
}



/* Entry: 10a189c88; end: 10a189c9b;  */

undefined1  [16]
FUN_10a189c88(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar1 = &UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 < (undefined8 *)0x555555555555556) {
    lVar2 = (long)param_2 * 0x30;
    __Znwm(lVar2);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  func_0x000109ffded8();
  ppuStack_88 = &puStack_70;
  ppuStack_80 = &puStack_68;
  uStack_78 = 0;
  puStack_90 = puVar1;
  puVar3 = param_2;
  puStack_70 = param_4;
  for (; puStack_68 = param_4, param_2 != param_3; param_2 = param_2 + 6) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar3 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar3,param_2[1]);
    }
    else {
      uVar5 = param_2[1];
      uVar4 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar5;
      *param_4 = uVar4;
    }
    uVar5 = param_2[4];
    uVar4 = param_2[3];
    param_4[5] = param_2[5];
    param_4[4] = uVar5;
    param_4[3] = uVar4;
    param_4 = puStack_68 + 6;
  }
  uStack_78 = 1;
  FUN_10a189db0(&puStack_90);
  auVar7._8_8_ = puVar3;
  auVar7._0_8_ = param_4;
  return auVar7;
}



/* Entry: 10a189c9c; end: 10a189cdf;  */

undefined1  [16]
FUN_10a189c9c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  if (param_2 < (undefined8 *)0x555555555555556) {
    lVar1 = (long)param_2 * 0x30;
    __Znwm(lVar1);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000109ffded8();
  ppuStack_78 = &puStack_60;
  ppuStack_70 = &puStack_58;
  uStack_68 = 0;
  uStack_80 = param_1;
  puVar2 = param_2;
  puStack_60 = param_4;
  for (; puStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 6) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar2 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar2,param_2[1]);
    }
    else {
      uVar4 = param_2[1];
      uVar3 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar4;
      *param_4 = uVar3;
    }
    uVar4 = param_2[4];
    uVar3 = param_2[3];
    param_4[5] = param_2[5];
    param_4[4] = uVar4;
    param_4[3] = uVar3;
    param_4 = puStack_58 + 6;
  }
  uStack_68 = 1;
  FUN_10a189db0(&uStack_80);
  auVar6._8_8_ = puVar2;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a189ce0; end: 10a189daf;  */

undefined8 *
FUN_10a189ce0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 6) {
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
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    param_4[5] = param_2[5];
    param_4[4] = uVar2;
    param_4[3] = uVar1;
    param_4 = puStack_38 + 6;
  }
  uStack_48 = 1;
  FUN_10a189db0(&uStack_60);
  return param_4;
}



/* Entry: 10a189db0; end: 10a189de3;  */

long FUN_10a189db0(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a189de4(param_1);
  }
  return param_1;
}



/* Entry: 10a189de4; end: 10a189e27;  */

/* WARNING: Removing unreachable block (ram,0x00010a189e10) */

void FUN_10a189de4(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x30
      ) {
  }
  return;
}



/* Entry: 10a189e28; end: 10a189eab;  */

void FUN_10a189e28(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a189eac(param_1,param_4);
    lVar1 = param_1;
    FUN_10a189f2c(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a189eac; end: 10a189ee3;  */

undefined1  [16] FUN_10a189eac(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 >> 0x3a == 0) {
    plVar1 = param_1;
    FUN_10a189ef8();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 8);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10a189ee4();
  FUN_109ffde64(&UNK_10f6403f7);
  if (param_2 >> 0x3a == 0) {
    lVar2 = param_2 << 6;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  uVar3 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x40) {
    uVar3 = param_2;
    FUN_10a189fb0(param_4,param_2);
    param_4 = param_4 + 0x40;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a189ee4; end: 10a189ef7;  */

undefined1  [16] FUN_10a189ee4(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  FUN_109ffde64(&UNK_10f6403f7);
  if (param_2 >> 0x3a == 0) {
    lVar1 = param_2 << 6;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x40) {
    uVar2 = param_2;
    FUN_10a189fb0(param_4,param_2);
    param_4 = param_4 + 0x40;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a189ef8; end: 10a189f2b;  */

undefined1  [16] FUN_10a189ef8(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3a == 0) {
    lVar1 = param_2 << 6;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x40) {
    uVar2 = param_2;
    FUN_10a189fb0(param_4,param_2);
    param_4 = param_4 + 0x40;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a189f2c; end: 10a189faf;  */

long FUN_10a189f2c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x40) {
    FUN_10a189fb0(param_4,param_2);
    param_4 = param_4 + 0x40;
  }
  return param_4;
}



/* Entry: 10a189fb0; end: 10a18a04f;  */

undefined8 * FUN_10a189fb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
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
  uVar2 = param_2[3];
  uVar1 = *(undefined4 *)(param_2 + 4);
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = uVar1;
  param_1[3] = uVar2;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_10a189bbc();
  return param_1;
}



/* Entry: 10a18a050; end: 10a18a0d3;  */

void FUN_10a18a050(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a18a0d4(param_1,param_4);
    lVar1 = param_1;
    FUN_10a18a154(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a18a0d4; end: 10a18a10b;  */

undefined1  [16]
FUN_10a18a0d4(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined *puStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined1 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar1 = param_1;
    FUN_10a18a120();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 4);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = plVar1;
    return auVar7;
  }
  FUN_10a18a10c();
  puVar2 = &UNK_10f6403f7;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar3 = (long)param_2 << 5;
    __Znwm(lVar3);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar3;
    return auVar8;
  }
  func_0x000109ffded8();
  ppuStack_a8 = &puStack_90;
  ppuStack_a0 = &puStack_88;
  uStack_98 = 0;
  puStack_b0 = puVar2;
  puVar4 = param_2;
  puStack_90 = param_4;
  for (; puStack_88 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar4 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar4,param_2[1]);
    }
    else {
      uVar6 = param_2[1];
      uVar5 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar6;
      *param_4 = uVar5;
    }
    param_4[3] = param_2[3];
    param_4 = puStack_88 + 4;
  }
  uStack_98 = 1;
  FUN_10a18a21c(&puStack_b0);
  auVar9._8_8_ = puVar4;
  auVar9._0_8_ = param_4;
  return auVar9;
}



/* Entry: 10a18a10c; end: 10a18a11f;  */

undefined1  [16]
FUN_10a18a10c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar1 = &UNK_10f6403f7;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar2 = (long)param_2 << 5;
    __Znwm(lVar2);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  func_0x000109ffded8();
  ppuStack_88 = &puStack_70;
  ppuStack_80 = &puStack_68;
  uStack_78 = 0;
  puStack_90 = puVar1;
  puVar3 = param_2;
  puStack_70 = param_4;
  for (; puStack_68 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar3 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar3,param_2[1]);
    }
    else {
      uVar5 = param_2[1];
      uVar4 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar5;
      *param_4 = uVar4;
    }
    param_4[3] = param_2[3];
    param_4 = puStack_68 + 4;
  }
  uStack_78 = 1;
  FUN_10a18a21c(&puStack_90);
  auVar7._8_8_ = puVar3;
  auVar7._0_8_ = param_4;
  return auVar7;
}



/* Entry: 10a18a120; end: 10a18a153;  */

undefined1  [16]
FUN_10a18a120(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar1 = (long)param_2 << 5;
    __Znwm(lVar1);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000109ffded8();
  ppuStack_78 = &puStack_60;
  ppuStack_70 = &puStack_58;
  uStack_68 = 0;
  uStack_80 = param_1;
  puVar2 = param_2;
  puStack_60 = param_4;
  for (; puStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar2 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar2,param_2[1]);
    }
    else {
      uVar4 = param_2[1];
      uVar3 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar4;
      *param_4 = uVar3;
    }
    param_4[3] = param_2[3];
    param_4 = puStack_58 + 4;
  }
  uStack_68 = 1;
  FUN_10a18a21c(&uStack_80);
  auVar6._8_8_ = puVar2;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a18a154; end: 10a18a21b;  */

undefined8 *
FUN_10a18a154(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  FUN_10a18a21c(&uStack_60);
  return param_4;
}



/* Entry: 10a18a21c; end: 10a18a24f;  */

long FUN_10a18a21c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a18a250(param_1);
  }
  return param_1;
}



/* Entry: 10a18a250; end: 10a18a293;  */

/* WARNING: Removing unreachable block (ram,0x00010a18a27c) */

void FUN_10a18a250(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x20
      ) {
  }
  return;
}



/* Entry: 10a18a294; end: 10a18a317;  */

void FUN_10a18a294(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a18a318(param_1,param_4);
    lVar1 = param_1;
    FUN_10a18a398(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a18a318; end: 10a18a34f;  */

undefined1  [16]
FUN_10a18a318(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined *puStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined1 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar1 = param_1;
    FUN_10a18a364();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 4);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = plVar1;
    return auVar7;
  }
  FUN_10a18a350();
  puVar2 = &UNK_10f6403f7;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar3 = (long)param_2 << 5;
    __Znwm(lVar3);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar3;
    return auVar8;
  }
  func_0x000109ffded8();
  ppuStack_a8 = &puStack_90;
  ppuStack_a0 = &puStack_88;
  uStack_98 = 0;
  puStack_b0 = puVar2;
  puVar4 = param_2;
  puStack_90 = param_4;
  for (; puStack_88 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar4 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar4,param_2[1]);
    }
    else {
      uVar6 = param_2[1];
      uVar5 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar6;
      *param_4 = uVar5;
    }
    param_4[3] = param_2[3];
    param_4 = puStack_88 + 4;
  }
  uStack_98 = 1;
  FUN_10a18a460(&puStack_b0);
  auVar9._8_8_ = puVar4;
  auVar9._0_8_ = param_4;
  return auVar9;
}



/* Entry: 10a18a350; end: 10a18a363;  */

undefined1  [16]
FUN_10a18a350(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar1 = &UNK_10f6403f7;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar2 = (long)param_2 << 5;
    __Znwm(lVar2);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  func_0x000109ffded8();
  ppuStack_88 = &puStack_70;
  ppuStack_80 = &puStack_68;
  uStack_78 = 0;
  puStack_90 = puVar1;
  puVar3 = param_2;
  puStack_70 = param_4;
  for (; puStack_68 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar3 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar3,param_2[1]);
    }
    else {
      uVar5 = param_2[1];
      uVar4 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar5;
      *param_4 = uVar4;
    }
    param_4[3] = param_2[3];
    param_4 = puStack_68 + 4;
  }
  uStack_78 = 1;
  FUN_10a18a460(&puStack_90);
  auVar7._8_8_ = puVar3;
  auVar7._0_8_ = param_4;
  return auVar7;
}



/* Entry: 10a18a364; end: 10a18a397;  */

undefined1  [16]
FUN_10a18a364(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar1 = (long)param_2 << 5;
    __Znwm(lVar1);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000109ffded8();
  ppuStack_78 = &puStack_60;
  ppuStack_70 = &puStack_58;
  uStack_68 = 0;
  uStack_80 = param_1;
  puVar2 = param_2;
  puStack_60 = param_4;
  for (; puStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar2 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar2,param_2[1]);
    }
    else {
      uVar4 = param_2[1];
      uVar3 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar4;
      *param_4 = uVar3;
    }
    param_4[3] = param_2[3];
    param_4 = puStack_58 + 4;
  }
  uStack_68 = 1;
  FUN_10a18a460(&uStack_80);
  auVar6._8_8_ = puVar2;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a18a398; end: 10a18a45f;  */

undefined8 *
FUN_10a18a398(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  FUN_10a18a460(&uStack_60);
  return param_4;
}



/* Entry: 10a18a460; end: 10a18a493;  */

long FUN_10a18a460(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a18a494(param_1);
  }
  return param_1;
}



/* Entry: 10a18a494; end: 10a18a4d7;  */

/* WARNING: Removing unreachable block (ram,0x00010a18a4c0) */

void FUN_10a18a494(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x20
      ) {
  }
  return;
}



/* Entry: 10a18a4d8; end: 10a18a55b;  */

void FUN_10a18a4d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a18a55c(param_1,param_4);
    lVar1 = param_1;
    FUN_10a18a5fc(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a18a55c; end: 10a18a5a3;  */

undefined1  [16]
FUN_10a18a55c(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined *puStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined1 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  
  if (param_2 < (undefined8 *)0x666666666666667) {
    plVar1 = param_1;
    FUN_10a18a5b8();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 5);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = plVar1;
    return auVar7;
  }
  FUN_10a18a5a4();
  puVar2 = &UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 < (undefined8 *)0x666666666666667) {
    lVar3 = (long)param_2 * 0x28;
    __Znwm(lVar3);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar3;
    return auVar8;
  }
  func_0x000109ffded8();
  ppuStack_a8 = &puStack_90;
  ppuStack_a0 = &puStack_88;
  uStack_98 = 0;
  puStack_b0 = puVar2;
  puVar4 = param_2;
  puStack_90 = param_4;
  for (; puStack_88 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar4 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar4,param_2[1]);
    }
    else {
      uVar6 = param_2[1];
      uVar5 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar6;
      *param_4 = uVar5;
    }
    uVar5 = param_2[3];
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_2 + 4);
    param_4[3] = uVar5;
    param_4 = puStack_88 + 5;
  }
  uStack_98 = 1;
  FUN_10a18a6cc(&puStack_b0);
  auVar9._8_8_ = puVar4;
  auVar9._0_8_ = param_4;
  return auVar9;
}



/* Entry: 10a18a5a4; end: 10a18a5b7;  */

undefined1  [16]
FUN_10a18a5a4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar1 = &UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 < (undefined8 *)0x666666666666667) {
    lVar2 = (long)param_2 * 0x28;
    __Znwm(lVar2);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  func_0x000109ffded8();
  ppuStack_88 = &puStack_70;
  ppuStack_80 = &puStack_68;
  uStack_78 = 0;
  puStack_90 = puVar1;
  puVar3 = param_2;
  puStack_70 = param_4;
  for (; puStack_68 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar3 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar3,param_2[1]);
    }
    else {
      uVar5 = param_2[1];
      uVar4 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar5;
      *param_4 = uVar4;
    }
    uVar4 = param_2[3];
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_2 + 4);
    param_4[3] = uVar4;
    param_4 = puStack_68 + 5;
  }
  uStack_78 = 1;
  FUN_10a18a6cc(&puStack_90);
  auVar7._8_8_ = puVar3;
  auVar7._0_8_ = param_4;
  return auVar7;
}



/* Entry: 10a18a5b8; end: 10a18a5fb;  */

undefined1  [16]
FUN_10a18a5b8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  if (param_2 < (undefined8 *)0x666666666666667) {
    lVar1 = (long)param_2 * 0x28;
    __Znwm(lVar1);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000109ffded8();
  ppuStack_78 = &puStack_60;
  ppuStack_70 = &puStack_58;
  uStack_68 = 0;
  uStack_80 = param_1;
  puVar2 = param_2;
  puStack_60 = param_4;
  for (; puStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar2 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar2,param_2[1]);
    }
    else {
      uVar4 = param_2[1];
      uVar3 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar4;
      *param_4 = uVar3;
    }
    uVar3 = param_2[3];
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_2 + 4);
    param_4[3] = uVar3;
    param_4 = puStack_58 + 5;
  }
  uStack_68 = 1;
  FUN_10a18a6cc(&uStack_80);
  auVar6._8_8_ = puVar2;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a18a5fc; end: 10a18a6cb;  */

undefined8 *
FUN_10a18a5fc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  FUN_10a18a6cc(&uStack_60);
  return param_4;
}



/* Entry: 10a18a6cc; end: 10a18a6ff;  */

long FUN_10a18a6cc(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a18a700(param_1);
  }
  return param_1;
}



/* Entry: 10a18a700; end: 10a18a743;  */

/* WARNING: Removing unreachable block (ram,0x00010a18a72c) */

void FUN_10a18a700(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x28
      ) {
  }
  return;
}



/* Entry: 10a18a744; end: 10a18a7c7;  */

void FUN_10a18a744(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a18a7c8(param_1,param_4);
    lVar1 = param_1;
    FUN_10a18a848(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a18a7c8; end: 10a18a7ff;  */

undefined1  [16]
FUN_10a18a7c8(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined *puStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined1 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar1 = param_1;
    FUN_10a18a814();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 4);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = plVar1;
    return auVar7;
  }
  FUN_10a18a800();
  puVar2 = &UNK_10f6403f7;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar3 = (long)param_2 << 5;
    __Znwm(lVar3);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar3;
    return auVar8;
  }
  func_0x000109ffded8();
  ppuStack_a8 = &puStack_90;
  ppuStack_a0 = &puStack_88;
  uStack_98 = 0;
  puStack_b0 = puVar2;
  puVar4 = param_2;
  puStack_90 = param_4;
  for (; puStack_88 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar4 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar4,param_2[1]);
    }
    else {
      uVar6 = param_2[1];
      uVar5 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar6;
      *param_4 = uVar5;
    }
    param_4[3] = param_2[3];
    param_4 = puStack_88 + 4;
  }
  uStack_98 = 1;
  FUN_10a18a910(&puStack_b0);
  auVar9._8_8_ = puVar4;
  auVar9._0_8_ = param_4;
  return auVar9;
}



/* Entry: 10a18a800; end: 10a18a813;  */

undefined1  [16]
FUN_10a18a800(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar1 = &UNK_10f6403f7;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar2 = (long)param_2 << 5;
    __Znwm(lVar2);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  func_0x000109ffded8();
  ppuStack_88 = &puStack_70;
  ppuStack_80 = &puStack_68;
  uStack_78 = 0;
  puStack_90 = puVar1;
  puVar3 = param_2;
  puStack_70 = param_4;
  for (; puStack_68 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar3 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar3,param_2[1]);
    }
    else {
      uVar5 = param_2[1];
      uVar4 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar5;
      *param_4 = uVar4;
    }
    param_4[3] = param_2[3];
    param_4 = puStack_68 + 4;
  }
  uStack_78 = 1;
  FUN_10a18a910(&puStack_90);
  auVar7._8_8_ = puVar3;
  auVar7._0_8_ = param_4;
  return auVar7;
}



/* Entry: 10a18a814; end: 10a18a847;  */

undefined1  [16]
FUN_10a18a814(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar1 = (long)param_2 << 5;
    __Znwm(lVar1);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000109ffded8();
  ppuStack_78 = &puStack_60;
  ppuStack_70 = &puStack_58;
  uStack_68 = 0;
  uStack_80 = param_1;
  puVar2 = param_2;
  puStack_60 = param_4;
  for (; puStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar2 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar2,param_2[1]);
    }
    else {
      uVar4 = param_2[1];
      uVar3 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar4;
      *param_4 = uVar3;
    }
    param_4[3] = param_2[3];
    param_4 = puStack_58 + 4;
  }
  uStack_68 = 1;
  FUN_10a18a910(&uStack_80);
  auVar6._8_8_ = puVar2;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a18a848; end: 10a18a90f;  */

undefined8 *
FUN_10a18a848(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  FUN_10a18a910(&uStack_60);
  return param_4;
}



/* Entry: 10a18a910; end: 10a18a943;  */

long FUN_10a18a910(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a18a944(param_1);
  }
  return param_1;
}



/* Entry: 10a18a944; end: 10a18a987;  */

/* WARNING: Removing unreachable block (ram,0x00010a18a970) */

void FUN_10a18a944(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x20
      ) {
  }
  return;
}



/* Entry: 10a18a988; end: 10a18aa0b;  */

void FUN_10a18a988(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a18aa0c(param_1,param_4);
    lVar1 = param_1;
    FUN_10a18aaac(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a18aa0c; end: 10a18aa53;  */

undefined1  [16]
FUN_10a18aa0c(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined *puStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined1 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  
  if (param_2 < (undefined8 *)0x666666666666667) {
    plVar1 = param_1;
    FUN_10a18aa68();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 5);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = plVar1;
    return auVar7;
  }
  FUN_10a18aa54();
  puVar2 = &UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 < (undefined8 *)0x666666666666667) {
    lVar3 = (long)param_2 * 0x28;
    __Znwm(lVar3);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar3;
    return auVar8;
  }
  func_0x000109ffded8();
  ppuStack_a8 = &puStack_90;
  ppuStack_a0 = &puStack_88;
  uStack_98 = 0;
  puStack_b0 = puVar2;
  puVar4 = param_2;
  puStack_90 = param_4;
  for (; puStack_88 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar4 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar4,param_2[1]);
    }
    else {
      uVar6 = param_2[1];
      uVar5 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar6;
      *param_4 = uVar5;
    }
    uVar5 = param_2[3];
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_2 + 4);
    param_4[3] = uVar5;
    param_4 = puStack_88 + 5;
  }
  uStack_98 = 1;
  FUN_10a18ab7c(&puStack_b0);
  auVar9._8_8_ = puVar4;
  auVar9._0_8_ = param_4;
  return auVar9;
}



/* Entry: 10a18aa54; end: 10a18aa67;  */

undefined1  [16]
FUN_10a18aa54(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar1 = &UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 < (undefined8 *)0x666666666666667) {
    lVar2 = (long)param_2 * 0x28;
    __Znwm(lVar2);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  func_0x000109ffded8();
  ppuStack_88 = &puStack_70;
  ppuStack_80 = &puStack_68;
  uStack_78 = 0;
  puStack_90 = puVar1;
  puVar3 = param_2;
  puStack_70 = param_4;
  for (; puStack_68 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar3 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar3,param_2[1]);
    }
    else {
      uVar5 = param_2[1];
      uVar4 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar5;
      *param_4 = uVar4;
    }
    uVar4 = param_2[3];
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_2 + 4);
    param_4[3] = uVar4;
    param_4 = puStack_68 + 5;
  }
  uStack_78 = 1;
  FUN_10a18ab7c(&puStack_90);
  auVar7._8_8_ = puVar3;
  auVar7._0_8_ = param_4;
  return auVar7;
}



/* Entry: 10a18aa68; end: 10a18aaab;  */

undefined1  [16]
FUN_10a18aa68(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  if (param_2 < (undefined8 *)0x666666666666667) {
    lVar1 = (long)param_2 * 0x28;
    __Znwm(lVar1);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000109ffded8();
  ppuStack_78 = &puStack_60;
  ppuStack_70 = &puStack_58;
  uStack_68 = 0;
  uStack_80 = param_1;
  puVar2 = param_2;
  puStack_60 = param_4;
  for (; puStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar2 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar2,param_2[1]);
    }
    else {
      uVar4 = param_2[1];
      uVar3 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar4;
      *param_4 = uVar3;
    }
    uVar3 = param_2[3];
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_2 + 4);
    param_4[3] = uVar3;
    param_4 = puStack_58 + 5;
  }
  uStack_68 = 1;
  FUN_10a18ab7c(&uStack_80);
  auVar6._8_8_ = puVar2;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a18aaac; end: 10a18ab7b;  */

undefined8 *
FUN_10a18aaac(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  FUN_10a18ab7c(&uStack_60);
  return param_4;
}



/* Entry: 10a18ab7c; end: 10a18abaf;  */

long FUN_10a18ab7c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a18abb0(param_1);
  }
  return param_1;
}



/* Entry: 10a18abb0; end: 10a18abf3;  */

/* WARNING: Removing unreachable block (ram,0x00010a18abdc) */

void FUN_10a18abb0(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x28
      ) {
  }
  return;
}



/* Entry: 10a18abf4; end: 10a18ac77;  */

void FUN_10a18abf4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a18ac78(param_1,param_4);
    lVar1 = param_1;
    FUN_10a18acf8(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a18ac78; end: 10a18acaf;  */

undefined1  [16]
FUN_10a18ac78(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined *puStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined1 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar1 = param_1;
    FUN_10a18acc4();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 4);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = plVar1;
    return auVar7;
  }
  FUN_10a18acb0();
  puVar2 = &UNK_10f6403f7;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar3 = (long)param_2 << 5;
    __Znwm(lVar3);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar3;
    return auVar8;
  }
  func_0x000109ffded8();
  ppuStack_a8 = &puStack_90;
  ppuStack_a0 = &puStack_88;
  uStack_98 = 0;
  puStack_b0 = puVar2;
  puVar4 = param_2;
  puStack_90 = param_4;
  for (; puStack_88 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar4 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar4,param_2[1]);
    }
    else {
      uVar6 = param_2[1];
      uVar5 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar6;
      *param_4 = uVar5;
    }
    param_4[3] = param_2[3];
    param_4 = puStack_88 + 4;
  }
  uStack_98 = 1;
  FUN_10a18adc0(&puStack_b0);
  auVar9._8_8_ = puVar4;
  auVar9._0_8_ = param_4;
  return auVar9;
}



/* Entry: 10a18acb0; end: 10a18acc3;  */

undefined1  [16]
FUN_10a18acb0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar1 = &UNK_10f6403f7;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar2 = (long)param_2 << 5;
    __Znwm(lVar2);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  func_0x000109ffded8();
  ppuStack_88 = &puStack_70;
  ppuStack_80 = &puStack_68;
  uStack_78 = 0;
  puStack_90 = puVar1;
  puVar3 = param_2;
  puStack_70 = param_4;
  for (; puStack_68 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar3 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar3,param_2[1]);
    }
    else {
      uVar5 = param_2[1];
      uVar4 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar5;
      *param_4 = uVar4;
    }
    param_4[3] = param_2[3];
    param_4 = puStack_68 + 4;
  }
  uStack_78 = 1;
  FUN_10a18adc0(&puStack_90);
  auVar7._8_8_ = puVar3;
  auVar7._0_8_ = param_4;
  return auVar7;
}



/* Entry: 10a18acc4; end: 10a18acf7;  */

undefined1  [16]
FUN_10a18acc4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar1 = (long)param_2 << 5;
    __Znwm(lVar1);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000109ffded8();
  ppuStack_78 = &puStack_60;
  ppuStack_70 = &puStack_58;
  uStack_68 = 0;
  uStack_80 = param_1;
  puVar2 = param_2;
  puStack_60 = param_4;
  for (; puStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar2 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar2,param_2[1]);
    }
    else {
      uVar4 = param_2[1];
      uVar3 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar4;
      *param_4 = uVar3;
    }
    param_4[3] = param_2[3];
    param_4 = puStack_58 + 4;
  }
  uStack_68 = 1;
  FUN_10a18adc0(&uStack_80);
  auVar6._8_8_ = puVar2;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a18acf8; end: 10a18adbf;  */

undefined8 *
FUN_10a18acf8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  FUN_10a18adc0(&uStack_60);
  return param_4;
}



/* Entry: 10a18adc0; end: 10a18adf3;  */

long FUN_10a18adc0(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a18adf4(param_1);
  }
  return param_1;
}



/* Entry: 10a18adf4; end: 10a18ae37;  */

/* WARNING: Removing unreachable block (ram,0x00010a18ae20) */

void FUN_10a18adf4(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x20
      ) {
  }
  return;
}



/* Entry: 10a18ae38; end: 10a18aea7;  */

void FUN_10a18ae38(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    FUN_10a18aea8(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      uVar2 = *param_2;
      puVar1[1] = param_2[1];
      *puVar1 = uVar2;
      puVar1 = puVar1 + 2;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a18aea8; end: 10a18aedf;  */

void FUN_10a18aea8(long *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = param_1;
    FUN_10a18aef4();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 2);
    return;
  }
  FUN_10a18aee0();
  puVar2 = &UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  if (param_4 != 0) {
    FUN_10a18afac();
    puVar3 = puVar2;
    FUN_10a18b04c(puVar2,param_2,param_3,*(undefined8 *)(puVar2 + 8));
    *(undefined **)(puVar2 + 8) = puVar3;
  }
  return;
}



/* Entry: 10a18aee0; end: 10a18aef3;  */

void FUN_10a18aee0(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  if (param_4 != 0) {
    FUN_10a18afac();
    puVar2 = puVar1;
    FUN_10a18b04c(puVar1,param_2,param_3,*(undefined8 *)(puVar1 + 8));
    *(undefined **)(puVar1 + 8) = puVar2;
  }
  return;
}



/* Entry: 10a18aef4; end: 10a18af27;  */

void FUN_10a18aef4(long param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  if (param_4 != 0) {
    FUN_10a18afac();
    lVar1 = param_1;
    FUN_10a18b04c(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a18af28; end: 10a18afab;  */

void FUN_10a18af28(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a18afac(param_1,param_4);
    lVar1 = param_1;
    FUN_10a18b04c(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a18afac; end: 10a18aff3;  */

undefined1  [16] FUN_10a18afac(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 < 0x555555555555556) {
    plVar1 = param_1;
    FUN_10a18b008();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 6);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10a18aff4();
  FUN_109ffde64(&UNK_10f6403f7);
  if (param_2 < 0x555555555555556) {
    lVar2 = param_2 * 0x30;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  uVar3 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x30) {
    uVar3 = param_2;
    FUN_10a18b0d0(param_4,param_2);
    param_4 = param_4 + 0x30;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a18aff4; end: 10a18b007;  */

undefined1  [16] FUN_10a18aff4(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  FUN_109ffde64(&UNK_10f6403f7);
  if (param_2 < 0x555555555555556) {
    lVar1 = param_2 * 0x30;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x30) {
    uVar2 = param_2;
    FUN_10a18b0d0(param_4,param_2);
    param_4 = param_4 + 0x30;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}


