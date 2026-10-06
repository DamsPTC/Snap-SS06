/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109cedda8; end: 109cede8b;  */

long FUN_109cedda8(long *param_1,undefined8 param_2)

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



/* Entry: 109cede8c; end: 109cee297;  */

long * FUN_109cede8c(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  
  plVar8 = param_1;
  func_0x000107c31944();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar13 <= plVar8) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar8) {
          plVar6 = param_1;
          func_0x000104c4fbc4(param_1,plVar5 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            return plVar5;
          }
        }
        else {
          if (((ulong)plVar13 & uVar14) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar14);
          }
          else if (plVar13 <= plVar6) {
            uVar1 = 0;
            if (plVar13 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar13;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar13);
          }
          if (plVar6 != unaff_x25) break;
        }
      }
    }
  }
  plVar5 = (long *)0x38;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = (long)plVar8;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar5[3] = param_3[1];
    plVar5[2] = lVar3;
    plVar5[4] = param_3[2];
  }
  lVar3 = param_3[3];
  plVar5[6] = param_3[4];
  plVar5[5] = lVar3;
  param_3[3] = 0;
  param_3[4] = 0;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_109cee1a8;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar6 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar13) {
    plVar6 = plVar13;
  }
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar6) {
LAB_109cee030:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109cee280);
      (*pcVar2)();
    }
    lVar3 = (long)plVar6 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar13 = (long *)0x0;
    param_1[1] = (long)plVar6;
    do {
      *(undefined8 *)(*param_1 + (long)plVar13 * 8) = 0;
      plVar13 = (long *)((long)plVar13 + 1);
    } while (plVar6 != plVar13);
    plVar7 = (long *)param_1[2];
    plVar13 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar9 = (long *)plVar7[1];
      uVar14 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar14) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar14);
      }
      else if (plVar6 <= plVar9) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar6;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar7;
      while (plVar10 != (long *)0x0) {
        plVar12 = (long *)plVar10[1];
        if (((ulong)plVar6 & uVar14) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar14);
        }
        else if (plVar6 <= plVar12) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar12 / (ulong)plVar6;
          }
          plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar6);
        }
        plVar11 = plVar10;
        if (plVar12 != plVar9) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar12 * 8) = plVar7;
            plVar9 = plVar12;
          }
          else {
            *plVar7 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
            **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
            plVar11 = plVar7;
          }
        }
        plVar7 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (plVar6 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar6 < plVar13) {
      if (plVar6 != (long *)0x0) goto LAB_109cee030;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x25 = plVar8;
    if (plVar13 <= plVar8) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar8 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
    }
  }
LAB_109cee1a8:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar5 != 0) {
      plVar8 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar8) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar8 / (ulong)plVar13;
        }
        plVar8 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
  }
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 109cee298; end: 109cee2df;  */

void FUN_109cee298(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_109cedcdc(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109cee2e0; end: 109cee2ef;  */

void FUN_109cee2e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d5c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109cee2f0; end: 109cee30f;  */

void FUN_109cee2f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d5c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cee310; end: 109cee317;  */

void FUN_109cee310(void)

{
  return;
}



/* Entry: 109cee318; end: 109cee36f;  */

long FUN_109cee318(long param_1)

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



/* Entry: 109cee370; end: 109cee37f;  */

void FUN_109cee370(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d618;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109cee380; end: 109cee39f;  */

void FUN_109cee380(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d618;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cee3a0; end: 109cee3a7;  */

void FUN_109cee3a0(void)

{
  return;
}



/* Entry: 109cee3a8; end: 109cee3ff;  */

long FUN_109cee3a8(long param_1)

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



/* Entry: 109cee400; end: 109cee40f;  */

void FUN_109cee400(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d668;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109cee410; end: 109cee42f;  */

void FUN_109cee410(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d668;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cee430; end: 109cee437;  */

void FUN_109cee430(void)

{
  return;
}



/* Entry: 109cee438; end: 109cee48f;  */

long FUN_109cee438(long param_1)

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



/* Entry: 109cee490; end: 109cee49f;  */

void FUN_109cee490(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d6b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109cee4a0; end: 109cee4bf;  */

void FUN_109cee4a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d6b8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cee4c0; end: 109cee4c7;  */

void FUN_109cee4c0(void)

{
  return;
}



/* Entry: 109cee4c8; end: 109cee51f;  */

long FUN_109cee4c8(long param_1)

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



/* Entry: 109cee520; end: 109cee52f;  */

void FUN_109cee520(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d708;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109cee530; end: 109cee54f;  */

void FUN_109cee530(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d708;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cee550; end: 109cee557;  */

void FUN_109cee550(void)

{
  return;
}



/* Entry: 109cee558; end: 109cee5af;  */

long FUN_109cee558(long param_1)

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



/* Entry: 109cee5b0; end: 109cee5bf;  */

void FUN_109cee5b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d758;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109cee5c0; end: 109cee5df;  */

void FUN_109cee5c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d758;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cee5e0; end: 109cee5ef;  */

void FUN_109cee5e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109cee5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109cee5f0; end: 109cee647;  */

long FUN_109cee5f0(long param_1)

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



/* Entry: 109cee648; end: 109cee657;  */

void FUN_109cee648(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d7a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109cee658; end: 109cee677;  */

void FUN_109cee658(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d7a8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cee678; end: 109cee687;  */

void FUN_109cee678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109cee680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109cee688; end: 109cee6df;  */

long FUN_109cee688(long param_1)

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



/* Entry: 109cee6e0; end: 109cee6ef;  */

void FUN_109cee6e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d7f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109cee6f0; end: 109cee70f;  */

void FUN_109cee6f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d7f8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cee710; end: 109cee717;  */

void FUN_109cee710(void)

{
  return;
}



/* Entry: 109cee718; end: 109cee76f;  */

long FUN_109cee718(long param_1)

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



/* Entry: 109cee770; end: 109cee77f;  */

void FUN_109cee770(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d848;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109cee780; end: 109cee79f;  */

void FUN_109cee780(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d848;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cee7a0; end: 109cee7a7;  */

void FUN_109cee7a0(void)

{
  return;
}



/* Entry: 109cee7a8; end: 109cee7ff;  */

long FUN_109cee7a8(long param_1)

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



/* Entry: 109cee800; end: 109cee80f;  */

void FUN_109cee800(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d898;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109cee810; end: 109cee82f;  */

void FUN_109cee810(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d898;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cee830; end: 109cee83f;  */

void FUN_109cee830(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109cee838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109cee840; end: 109cee897;  */

long FUN_109cee840(long param_1)

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



/* Entry: 109cee898; end: 109cee8a7;  */

void FUN_109cee898(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d8e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109cee8a8; end: 109cee8c7;  */

void FUN_109cee8a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d8e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cee8c8; end: 109cee8cf;  */

void FUN_109cee8c8(void)

{
  return;
}



/* Entry: 109cee8d0; end: 109cee927;  */

long FUN_109cee8d0(long param_1)

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



/* Entry: 109cee928; end: 109cee937;  */

void FUN_109cee928(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d938;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109cee938; end: 109cee957;  */

void FUN_109cee938(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d938;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cee958; end: 109cee967;  */

void FUN_109cee958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109cee960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109cee968; end: 109cee9bf;  */

long FUN_109cee968(long param_1)

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



/* Entry: 109cee9c0; end: 109cee9cf;  */

void FUN_109cee9c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d988;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109cee9d0; end: 109cee9ef;  */

void FUN_109cee9d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d988;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cee9f0; end: 109cee9f7;  */

void FUN_109cee9f0(void)

{
  return;
}



/* Entry: 109cee9f8; end: 109ceea4f;  */

long FUN_109cee9f8(long param_1)

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



/* Entry: 109ceea50; end: 109ceea5f;  */

void FUN_109ceea50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d9d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109ceea60; end: 109ceea7f;  */

void FUN_109ceea60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d9d8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ceea80; end: 109ceea87;  */

void FUN_109ceea80(void)

{
  return;
}



/* Entry: 109ceea88; end: 109ceeadf;  */

long FUN_109ceea88(long param_1)

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



/* Entry: 109ceeae0; end: 109ceeaef;  */

void FUN_109ceeae0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3da28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109ceeaf0; end: 109ceeb0f;  */

void FUN_109ceeaf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3da28;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ceeb10; end: 109ceeb17;  */

void FUN_109ceeb10(void)

{
  return;
}



/* Entry: 109ceeb18; end: 109ceeb6f;  */

long FUN_109ceeb18(long param_1)

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



/* Entry: 109ceeb70; end: 109ceeb7f;  */

void FUN_109ceeb70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3da78;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109ceeb80; end: 109ceeb9f;  */

void FUN_109ceeb80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3da78;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ceeba0; end: 109ceeba7;  */

void FUN_109ceeba0(void)

{
  return;
}



/* Entry: 109ceeba8; end: 109ceebff;  */

long FUN_109ceeba8(long param_1)

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



/* Entry: 109ceec00; end: 109ceec0f;  */

void FUN_109ceec00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3dac8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109ceec10; end: 109ceec2f;  */

void FUN_109ceec10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3dac8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ceec30; end: 109ceec37;  */

void FUN_109ceec30(void)

{
  return;
}



/* Entry: 109ceec38; end: 109ceec8f;  */

long FUN_109ceec38(long param_1)

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



/* Entry: 109ceec90; end: 109cef2f3;  */

void FUN_109ceec90(undefined8 param_1,long param_2,long param_3,int param_4)

{
  ulong *puVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  undefined1 auStack_70 [28];
  undefined4 uStack_54;
  
  if (param_4 == 6) {
    if (1 < *(int *)(param_3 + 0xe8)) {
      puVar5 = &UNK_10f5aa45c;
LAB_109cef2ec:
      func_0x00010952d0c4(&UNK_10e03f790,&UNK_10f5a9c71,puVar5);
      return;
    }
    if ((*(int *)(param_3 + 0xe8) == 0) ||
       (iVar6 = **(int **)(param_3 + 0xf0), iVar6 == 3 || iVar6 == -1)) {
      if (*(int *)(param_2 + 0x8c) != 0xaf) {
        func_0x000109c819a4(param_2);
        *(undefined4 *)(param_2 + 0x8c) = 0xaf;
        uVar8 = *(ulong *)(param_2 + 8);
        if ((uVar8 & 1) != 0) {
          uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
        }
        func_0x000109cb76ec();
        *(ulong *)(param_2 + 0x80) = uVar8;
      }
    }
    else {
      if (*(int *)(param_2 + 0x8c) == 0x3b6) {
        uVar8 = *(ulong *)(param_2 + 0x80);
      }
      else {
        func_0x000109c819a4(param_2);
        *(undefined4 *)(param_2 + 0x8c) = 0x3b6;
        uVar8 = *(ulong *)(param_2 + 8);
        if ((uVar8 & 1) != 0) {
          uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
        }
        func_0x000109cb76a0();
        *(ulong *)(param_2 + 0x80) = uVar8;
        iVar6 = **(int **)(param_3 + 0xf0);
      }
      *(long *)(uVar8 + 0x10) = (long)*(int *)(&UNK_10e040e28 + (long)iVar6 * 4);
    }
  }
  else if (param_4 == 0x18) {
    if (*(int *)(param_2 + 0x8c) == 0xa0) {
      uVar8 = *(ulong *)(param_2 + 0x80);
    }
    else {
      func_0x000109c819a4(param_2);
      *(undefined4 *)(param_2 + 0x8c) = 0xa0;
      uVar8 = *(ulong *)(param_2 + 8);
      if ((uVar8 & 1) != 0) {
        uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
      }
      func_0x000109cbaaa4();
      *(ulong *)(param_2 + 0x80) = uVar8;
    }
    *(undefined2 *)(uVar8 + 0x40) = 0x101;
    puVar7 = (ulong *)(param_3 + 0x20);
    puVar1 = puVar7;
    if ((*puVar7 & 1) != 0) {
      puVar1 = (ulong *)(*puVar7 + 7);
    }
    uVar9 = *puVar1;
    *(uint *)(uVar8 + 0x10) = *(uint *)(uVar8 + 0x10) | 1;
    uVar10 = *(ulong *)(uVar8 + 0x18);
    if (uVar10 == 0) {
      uVar10 = *(ulong *)(uVar8 + 8);
      if ((uVar10 & 1) != 0) {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
      }
      func_0x000109cba3bc();
      *(ulong *)(uVar8 + 0x18) = uVar10;
    }
    iVar6 = *(int *)(uVar9 + 0x60) * *(int *)(uVar9 + 0x58) * *(int *)(uVar9 + 100) *
            *(int *)(uVar9 + 0x5c);
    if (*(int *)(uVar10 + 0x1c) < iVar6) {
      func_0x000109311970(uVar10 + 0x18,*(undefined4 *)(uVar10 + 0x18),iVar6);
    }
    if (0 < iVar6) {
      iVar4 = 0;
      do {
        func_0x000109ce52ec(&uStack_54,iVar4,uVar9,auStack_70);
        iVar3 = *(int *)(uVar10 + 0x18);
        *(int *)(uVar10 + 0x18) = iVar3 + 1;
        *(undefined4 *)(*(long *)(uVar10 + 0x20) + (long)iVar3 * 4) = uStack_54;
        iVar4 = iVar4 + 1;
      } while (iVar6 - iVar4 != 0);
    }
    if ((*puVar7 & 1) != 0) {
      puVar7 = (ulong *)(*puVar7 + 0xf);
    }
    uVar9 = *puVar7;
    *(uint *)(uVar8 + 0x10) = *(uint *)(uVar8 + 0x10) | 2;
    uVar10 = *(ulong *)(uVar8 + 0x20);
    if (uVar10 == 0) {
      uVar10 = *(ulong *)(uVar8 + 8);
      if ((uVar10 & 1) != 0) {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
      }
      func_0x000109cba3bc();
      *(ulong *)(uVar8 + 0x20) = uVar10;
    }
    iVar6 = *(int *)(uVar9 + 0x60) * *(int *)(uVar9 + 0x58) * *(int *)(uVar9 + 100) *
            *(int *)(uVar9 + 0x5c);
    if (*(int *)(uVar10 + 0x1c) < iVar6) {
      func_0x000109311970(uVar10 + 0x18,*(undefined4 *)(uVar10 + 0x18),iVar6);
    }
    if (0 < iVar6) {
      iVar4 = 0;
      do {
        func_0x000109ce52ec(&uStack_54,iVar4,uVar9,auStack_70);
        iVar3 = *(int *)(uVar10 + 0x18);
        *(int *)(uVar10 + 0x18) = iVar3 + 1;
        *(undefined4 *)(*(long *)(uVar10 + 0x20) + (long)iVar3 * 4) = uStack_54;
        iVar4 = iVar4 + 1;
      } while (iVar6 - iVar4 != 0);
    }
    *(undefined4 *)(uVar8 + 0x44) = *(undefined4 *)(param_3 + 500);
    ppuVar2 = &PTR_PTR_1132f17f8;
    if (*(undefined ***)(uVar8 + 0x20) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(uVar8 + 0x20);
    }
    *(long *)(uVar8 + 0x38) = (long)*(int *)(ppuVar2 + 3);
  }
  else {
    if (param_4 != 0xf) {
      puVar5 = &UNK_10f5aa48f;
      goto LAB_109cef2ec;
    }
    if (*(int *)(param_2 + 0x8c) == 0xa0) {
      uVar8 = *(ulong *)(param_2 + 0x80);
    }
    else {
      func_0x000109c819a4(param_2);
      *(undefined4 *)(param_2 + 0x8c) = 0xa0;
      uVar8 = *(ulong *)(param_2 + 8);
      if ((uVar8 & 1) != 0) {
        uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
      }
      func_0x000109cbaaa4();
      *(ulong *)(param_2 + 0x80) = uVar8;
    }
    *(undefined2 *)(uVar8 + 0x40) = 0;
    puVar7 = (ulong *)(param_3 + 0x20);
    puVar1 = puVar7;
    if ((*puVar7 & 1) != 0) {
      puVar1 = (ulong *)(*puVar7 + 7);
    }
    uVar9 = *puVar1;
    *(uint *)(uVar8 + 0x10) = *(uint *)(uVar8 + 0x10) | 1;
    uVar10 = *(ulong *)(uVar8 + 0x18);
    if (uVar10 == 0) {
      uVar10 = *(ulong *)(uVar8 + 8);
      if ((uVar10 & 1) != 0) {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
      }
      func_0x000109cba3bc();
      *(ulong *)(uVar8 + 0x18) = uVar10;
    }
    iVar6 = *(int *)(uVar9 + 0x60) * *(int *)(uVar9 + 0x58) * *(int *)(uVar9 + 100) *
            *(int *)(uVar9 + 0x5c);
    if (*(int *)(uVar10 + 0x1c) < iVar6) {
      func_0x000109311970(uVar10 + 0x18,*(undefined4 *)(uVar10 + 0x18),iVar6);
    }
    if (0 < iVar6) {
      iVar4 = 0;
      do {
        func_0x000109ce52ec(&uStack_54,iVar4,uVar9,auStack_70);
        iVar3 = *(int *)(uVar10 + 0x18);
        *(int *)(uVar10 + 0x18) = iVar3 + 1;
        *(undefined4 *)(*(long *)(uVar10 + 0x20) + (long)iVar3 * 4) = uStack_54;
        iVar4 = iVar4 + 1;
      } while (iVar6 - iVar4 != 0);
    }
    if ((*puVar7 & 1) != 0) {
      puVar7 = (ulong *)(*puVar7 + 0xf);
    }
    uVar9 = *puVar7;
    *(uint *)(uVar8 + 0x10) = *(uint *)(uVar8 + 0x10) | 2;
    uVar10 = *(ulong *)(uVar8 + 0x20);
    if (uVar10 == 0) {
      uVar10 = *(ulong *)(uVar8 + 8);
      if ((uVar10 & 1) != 0) {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
      }
      func_0x000109cba3bc();
      *(ulong *)(uVar8 + 0x20) = uVar10;
    }
    iVar6 = *(int *)(uVar9 + 0x60) * *(int *)(uVar9 + 0x58) * *(int *)(uVar9 + 100) *
            *(int *)(uVar9 + 0x5c);
    if (*(int *)(uVar10 + 0x1c) < iVar6) {
      func_0x000109311970(uVar10 + 0x18,*(undefined4 *)(uVar10 + 0x18),iVar6);
    }
    if (0 < iVar6) {
      iVar4 = 0;
      do {
        func_0x000109ce52ec(&uStack_54,iVar4,uVar9,auStack_70);
        iVar3 = *(int *)(uVar10 + 0x18);
        *(int *)(uVar10 + 0x18) = iVar3 + 1;
        *(undefined4 *)(*(long *)(uVar10 + 0x20) + (long)iVar3 * 4) = uStack_54;
        iVar4 = iVar4 + 1;
      } while (iVar6 - iVar4 != 0);
    }
    uVar10 = *(ulong *)(uVar8 + 0x28);
    ppuVar2 = &PTR_PTR_1132f17f8;
    if (*(undefined ***)(uVar8 + 0x20) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(uVar8 + 0x20);
    }
    iVar6 = *(int *)(ppuVar2 + 3);
    lVar12 = (long)iVar6;
    *(long *)(uVar8 + 0x38) = lVar12;
    *(undefined4 *)(uVar8 + 0x44) = 0;
    *(uint *)(uVar8 + 0x10) = *(uint *)(uVar8 + 0x10) | 4;
    if (uVar10 == 0) {
      uVar10 = *(ulong *)(uVar8 + 8);
      if ((uVar10 & 1) != 0) {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
      }
      func_0x000109cba3bc();
      *(ulong *)(uVar8 + 0x28) = uVar10;
    }
    piVar11 = (int *)(uVar10 + 0x18);
    iVar4 = *piVar11;
    if (iVar4 < iVar6) {
      if (*(int *)(uVar10 + 0x1c) < iVar6) {
        func_0x000109311970(piVar11,iVar4,iVar6);
        iVar4 = *piVar11;
      }
      *(int *)(uVar10 + 0x18) = iVar6;
      if (iVar4 != iVar6) {
        _bzero(*(long *)(uVar10 + 0x20) + (long)iVar4 * 4,(lVar12 - iVar4) * 4);
      }
    }
    else if (iVar6 < iVar4) {
      *piVar11 = iVar6;
    }
    *(uint *)(uVar8 + 0x10) = *(uint *)(uVar8 + 0x10) | 8;
    uVar10 = *(ulong *)(uVar8 + 0x30);
    if (uVar10 == 0) {
      uVar10 = *(ulong *)(uVar8 + 8);
      if ((uVar10 & 1) != 0) {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
      }
      func_0x000109cba3bc();
      *(ulong *)(uVar8 + 0x30) = uVar10;
    }
    piVar11 = (int *)(uVar10 + 0x18);
    iVar4 = *piVar11;
    if (iVar4 < iVar6) {
      if (*(int *)(uVar10 + 0x1c) < iVar6) {
        func_0x000109311970(piVar11,iVar4,iVar6);
        iVar4 = *piVar11;
      }
      *(int *)(uVar10 + 0x18) = iVar6;
      if (iVar4 != iVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memset_pattern16_11034c670)
                  (*(long *)(uVar10 + 0x20) + (long)iVar4 * 4,&UNK_10dfc9020,(lVar12 - iVar4) * 4);
        return;
      }
    }
    else if (iVar6 < iVar4) {
      *piVar11 = iVar6;
    }
  }
  return;
}



/* Entry: 109cef2f4; end: 109cef353;  */

void FUN_109cef2f4(void)

{
  return;
}



/* Entry: 109cef354; end: 109cef577;  */

void FUN_109cef354(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong *puVar6;
  
  if (*(int *)(param_2 + 0x8c) == 200) {
    uVar5 = *(ulong *)(param_2 + 0x80);
  }
  else {
    func_0x000109c819a4(param_2);
    *(undefined4 *)(param_2 + 0x8c) = 200;
    uVar5 = *(ulong *)(param_2 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x000109cba4b0();
    *(ulong *)(param_2 + 0x80) = uVar5;
  }
  iVar1 = *(int *)(param_3 + 0x154);
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      if (*(int *)(uVar5 + 0x28) == 1) goto LAB_109cef4a0;
      func_0x000109c96c88(uVar5);
      *(undefined4 *)(uVar5 + 0x28) = 1;
      uVar2 = *(ulong *)(uVar5 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000109cb8710();
    }
    else {
      if (iVar1 != 1) {
LAB_109cef558:
        func_0x00010952d0c4(&UNK_10e03f80a,&UNK_10f5a9c71,&UNK_10f5aa4a9);
        return;
      }
LAB_109cef474:
      if (*(int *)(uVar5 + 0x28) == 2) goto LAB_109cef4a0;
      func_0x000109c96c88(uVar5);
      *(undefined4 *)(uVar5 + 0x28) = 2;
      uVar2 = *(ulong *)(uVar5 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000109cb86c8();
    }
  }
  else {
    if (iVar1 == 2) {
      puVar6 = (ulong *)(*(ulong *)(param_3 + 0xf8) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        puVar6 = (ulong *)*puVar6;
      }
      FUN_10ae030a0(0,puVar6);
      ppuVar4 = &PTR_PTR_1132fea38;
      FUN_10ae079a0();
      FUN_10ae030d8();
      FUN_10ae07cd4(ppuVar4,&PTR_PTR_1132fea38);
      goto LAB_109cef474;
    }
    if (iVar1 != 3) goto LAB_109cef558;
    if (*(int *)(uVar5 + 0x28) == 3) goto LAB_109cef4a0;
    func_0x000109c96c88(uVar5);
    *(undefined4 *)(uVar5 + 0x28) = 3;
    uVar2 = *(ulong *)(uVar5 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000109cb8680();
  }
  *(ulong *)(uVar5 + 0x20) = uVar2;
LAB_109cef4a0:
  *(uint *)(uVar5 + 0x10) = *(uint *)(uVar5 + 0x10) | 1;
  uVar2 = *(ulong *)(uVar5 + 0x18);
  if (uVar2 == 0) {
    uVar2 = *(ulong *)(uVar5 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000109cba36c();
    *(ulong *)(uVar5 + 0x18) = uVar2;
  }
  lVar3 = uVar2 + 0x10;
  func_0x000107c303b0(lVar3,&UNK_109cb9ae4);
  *(ulong *)(lVar3 + 0x10) = (ulong)*(uint *)(param_3 + 0x158);
  *(ulong *)(lVar3 + 0x18) = (ulong)*(uint *)(param_3 + 0x15c);
  lVar3 = uVar2 + 0x10;
  func_0x000107c303b0(lVar3,&UNK_109cb9ae4);
  *(ulong *)(lVar3 + 0x10) = (ulong)*(uint *)(param_3 + 0x160);
  *(ulong *)(lVar3 + 0x18) = (ulong)*(uint *)(param_3 + 0x164);
  return;
}



/* Entry: 109cef578; end: 109cef6bb;  */

void FUN_109cef578(void)

{
  return;
}



/* Entry: 109cef6bc; end: 109cef82b;  */

undefined8 FUN_109cef6bc(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  uVar3 = param_2[7];
  if (uVar3 - 2 < 3) {
    iVar1 = param_2[4];
    iVar6 = param_2[5];
    iVar4 = 0;
    if (iVar6 != 0) {
      iVar4 = (param_1[1] + iVar6 + -1) / iVar6;
    }
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    iVar6 = 0;
    if (iVar1 != 0) {
      iVar6 = (*param_1 + iVar1 + -1) / iVar1;
    }
    if (iVar6 < 2) {
      iVar6 = 1;
    }
  }
  else {
    if (1 < uVar3) {
      __ZNSt3__19to_stringEi(auStack_68,uVar3,*(undefined8 *)(param_1 + 2));
      func_0x00010928a5e0(auStack_50,&UNK_10f5aa525,auStack_68);
      func_0x000109259240(auStack_38,auStack_50,&DAT_10f638984);
      FUN_109cd45b4(&UNK_10f5aa4f7,&UNK_10f5aa512,auStack_38);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x109cef7e0);
      (*pcVar5)();
    }
    iVar1 = param_2[4];
    iVar2 = param_2[5];
    iVar4 = iVar2 + -1;
    iVar6 = iVar1 + -1;
    if (*(char *)((long)param_2 + 0x19) == '\0') {
      iVar4 = 0;
      iVar6 = 0;
    }
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = (((iVar4 + param_1[1]) - param_2[1]) + param_2[3] * 2) / iVar2;
    }
    iVar4 = (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) + 1;
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = (((*param_1 + iVar6) - *param_2) + param_2[2] * 2) / iVar1;
    }
    iVar6 = (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) + 1;
  }
  return CONCAT44(iVar4,iVar6);
}



/* Entry: 109cef82c; end: 109ceff13;  */

void FUN_109cef82c(int *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001137e1bb0 & 1) == 0) {
    param_1 = (int *)0x1137e1bb0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      uStack_50 = 0x100000003;
      uStack_58 = 0;
      uStack_60 = 0x100000001;
      FUN_109ceff5c(&uStack_60,3);
      param_1 = (int *)0x1137e1bb0;
      ___cxa_guard_release(0x1137e1bb0);
    }
  }
  if (*(int *)(param_2 + 0x8c) == 0x78) {
    piVar14 = *(int **)(param_2 + 0x80);
  }
  else {
    func_0x000109c819a4(param_2);
    *(undefined4 *)(param_2 + 0x8c) = 0x78;
    param_1 = *(int **)(param_2 + 8);
    if (((ulong)param_1 & 1) != 0) {
      param_1 = *(int **)((ulong)param_1 & 0xfffffffffffffffe);
    }
    func_0x000109cba600();
    *(int **)(param_2 + 0x80) = param_1;
    piVar14 = param_1;
  }
  if (uRam00000001137e1bc0 != 0) {
    uVar8 = (ulong)*(int *)(param_3 + 0x124);
    uVar9 = uRam00000001137e1bc0 - 1;
    if ((uRam00000001137e1bc0 & uVar9) == 0) {
      uVar11 = uVar9 & uVar8;
    }
    else {
      uVar11 = uVar8;
      if (uRam00000001137e1bc0 <= uVar8) {
        uVar11 = 0;
        if (uRam00000001137e1bc0 != 0) {
          uVar11 = uVar8 / uRam00000001137e1bc0;
        }
        uVar11 = uVar8 - uVar11 * uRam00000001137e1bc0;
      }
    }
    plVar12 = *(long **)(lRam00000001137e1bb8 + uVar11 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_109cef938;
          uVar13 = plVar12[1];
          if (uVar13 != uVar8) break;
          if (*(int *)(plVar12 + 2) == *(int *)(param_3 + 0x124)) {
            piVar15 = piVar14 + 10;
            iVar6 = *piVar15;
            piVar14[0xf] = *(int *)((long)plVar12 + 0x14);
            *(undefined1 *)(piVar14 + 0x10) = 1;
            *(bool *)((long)piVar14 + 0x41) = *(int *)(param_3 + 0x124) == 3;
            iVar5 = piVar14[0xb];
            if ((*(byte *)(param_3 + 0x14) >> 1 & 1) == 0) {
              uVar1 = *(uint *)(param_3 + 0x1d4);
              if (iVar6 == iVar5) {
                param_1 = piVar15;
                func_0x0001087675dc(piVar15,iVar5,iVar5 + 1);
                iVar6 = piVar14[10];
                iVar5 = piVar14[0xb];
              }
              lVar10 = *(long *)(piVar14 + 0xc);
              iVar7 = iVar6 + 1;
              piVar14[10] = iVar7;
              *(ulong *)(lVar10 + (long)iVar6 * 8) = (ulong)uVar1;
              uVar1 = *(uint *)(param_3 + 0x1d4);
            }
            else {
              uVar1 = *(uint *)(param_3 + 400);
              if (iVar6 == iVar5) {
                param_1 = piVar15;
                func_0x0001087675dc(piVar15,iVar5,iVar5 + 1);
                iVar6 = piVar14[10];
                iVar5 = piVar14[0xb];
              }
              lVar10 = *(long *)(piVar14 + 0xc);
              iVar7 = iVar6 + 1;
              piVar14[10] = iVar7;
              *(ulong *)(lVar10 + (long)iVar6 * 8) = (ulong)uVar1;
              uVar1 = *(uint *)(param_3 + 0x18c);
            }
            if (iVar7 == iVar5) {
              param_1 = piVar15;
              func_0x0001087675dc(piVar15,iVar5,iVar5 + 1);
              iVar7 = *piVar15;
              lVar10 = *(long *)(piVar14 + 0xc);
            }
            piVar15 = piVar14 + 4;
            iVar6 = *piVar15;
            piVar14[10] = iVar7 + 1;
            *(ulong *)(lVar10 + (long)iVar7 * 8) = (ulong)uVar1;
            iVar5 = piVar14[5];
            if (*(int *)(param_3 + 0x10) < 0) {
              uVar1 = *(uint *)(param_3 + 0x188);
              if (iVar6 == iVar5) {
                param_1 = piVar15;
                func_0x0001087675dc(piVar15,iVar5,iVar5 + 1);
                iVar6 = piVar14[4];
                iVar5 = piVar14[5];
              }
              lVar10 = *(long *)(piVar14 + 6);
              iVar7 = iVar6 + 1;
              piVar14[4] = iVar7;
              *(ulong *)(lVar10 + (long)iVar6 * 8) = (ulong)uVar1;
              uVar1 = *(uint *)(param_3 + 0x184);
            }
            else {
              uVar1 = *(uint *)(param_3 + 0x120);
              if (iVar6 == iVar5) {
                param_1 = piVar15;
                func_0x0001087675dc(piVar15,iVar5,iVar5 + 1);
                iVar6 = piVar14[4];
                iVar5 = piVar14[5];
              }
              lVar10 = *(long *)(piVar14 + 6);
              iVar7 = iVar6 + 1;
              piVar14[4] = iVar7;
              *(ulong *)(lVar10 + (long)iVar6 * 8) = (ulong)uVar1;
              uVar1 = *(uint *)(param_3 + 0x120);
            }
            if (iVar7 == iVar5) {
              param_1 = piVar15;
              func_0x0001087675dc(piVar15,iVar5,iVar5 + 1);
              iVar7 = *piVar15;
              lVar10 = *(long *)(piVar14 + 6);
            }
            *piVar15 = iVar7 + 1;
            *(ulong *)(lVar10 + (long)iVar7 * 8) = (ulong)uVar1;
            uVar2 = *(uint *)(param_3 + 0x11c);
            uVar1 = *(uint *)(param_3 + 0x180);
            if (uVar2 != 0) {
              uVar1 = uVar2;
            }
            uVar8 = (ulong)uVar1;
            uVar1 = *(uint *)(param_3 + 0x17c);
            if (uVar2 != 0) {
              uVar1 = uVar2;
            }
            uVar9 = (ulong)uVar1;
            iVar6 = *(int *)(param_3 + 0x14c);
            if (1 < iVar6) {
              if (iVar6 != 2) {
                if (iVar6 == 3) {
                  if (piVar14[0x15] == 0x1f) {
                    param_1 = *(int **)(piVar14 + 0x12);
                  }
                  else {
                    func_0x000109c95478(piVar14);
                    piVar14[0x15] = 0x1f;
                    param_1 = *(int **)(piVar14 + 2);
                    if (((ulong)param_1 & 1) != 0) {
                      param_1 = *(int **)((ulong)param_1 & 0xfffffffffffffffe);
                    }
                    func_0x000109cb7b64();
                    *(int **)(piVar14 + 0x12) = param_1;
                  }
                  param_1[4] = 1;
                  goto LAB_109cefd44;
                }
                if (iVar6 != 4) goto LAB_109cefd44;
              }
              if (piVar14[0x15] == 0x1f) {
                param_1 = *(int **)(piVar14 + 0x12);
              }
              else {
                func_0x000109c95478(piVar14);
                piVar14[0x15] = 0x1f;
                param_1 = *(int **)(piVar14 + 2);
                if (((ulong)param_1 & 1) != 0) {
                  param_1 = *(int **)((ulong)param_1 & 0xfffffffffffffffe);
                }
                func_0x000109cb7b64();
                *(int **)(piVar14 + 0x12) = param_1;
              }
              param_1[4] = 0;
              goto LAB_109cefd44;
            }
            if (iVar6 == 0) {
              if (*(char *)(param_3 + 0x1ed) != '\x01') {
                if (piVar14[0x15] == 0x1e) {
                  uVar11 = *(ulong *)(piVar14 + 0x12);
                }
                else {
                  func_0x000109c95478(piVar14);
                  piVar14[0x15] = 0x1e;
                  uVar11 = *(ulong *)(piVar14 + 2);
                  if ((uVar11 & 1) != 0) {
                    uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
                  }
                  func_0x000109cba41c();
                  *(ulong *)(piVar14 + 0x12) = uVar11;
                }
                *(uint *)(uVar11 + 0x10) = *(uint *)(uVar11 + 0x10) | 1;
                uVar13 = *(ulong *)(uVar11 + 0x18);
                if (uVar13 == 0) {
                  uVar13 = *(ulong *)(uVar11 + 8);
                  if ((uVar13 & 1) != 0) {
                    uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
                  }
                  func_0x000109cba36c();
                  *(ulong *)(uVar11 + 0x18) = uVar13;
                }
                lVar10 = uVar13 + 0x10;
                func_0x000107c303b0(lVar10,&UNK_109cb9ae4);
                param_1 = (int *)(uVar13 + 0x10);
                func_0x000107c303b0(param_1,&UNK_109cb9ae4);
                *(ulong *)(lVar10 + 0x10) = uVar8;
                *(ulong *)(lVar10 + 0x18) = uVar8;
                *(ulong *)(param_1 + 4) = uVar9;
                *(ulong *)(param_1 + 6) = uVar9;
                goto LAB_109cefd44;
              }
              if (piVar14[0x15] == 0x20) {
                piVar15 = *(int **)(piVar14 + 0x12);
              }
              else {
                func_0x000109c95478(piVar14);
                piVar14[0x15] = 0x20;
                param_1 = *(int **)(piVar14 + 2);
                if (((ulong)param_1 & 1) != 0) {
                  param_1 = *(int **)((ulong)param_1 & 0xfffffffffffffffe);
                }
                func_0x000109cb8588();
                *(int **)(piVar14 + 0x12) = param_1;
                piVar15 = param_1;
              }
              piVar16 = piVar15 + 4;
              iVar6 = *piVar16;
              iVar5 = piVar15[5];
              if (iVar6 == iVar5) {
                param_1 = piVar16;
                func_0x0001087675dc(piVar16,iVar5,iVar5 + 1);
                iVar6 = *piVar16;
              }
              piVar15[4] = iVar6 + 1;
              *(ulong *)(*(long *)(piVar15 + 6) + (long)iVar6 * 8) = uVar8;
              if (piVar14[0x15] == 0x20) {
                piVar14 = *(int **)(piVar14 + 0x12);
              }
              else {
                func_0x000109c95478(piVar14);
                piVar14[0x15] = 0x20;
                param_1 = *(int **)(piVar14 + 2);
                if (((ulong)param_1 & 1) != 0) {
                  param_1 = *(int **)((ulong)param_1 & 0xfffffffffffffffe);
                }
                func_0x000109cb8588();
                *(int **)(piVar14 + 0x12) = param_1;
                piVar14 = param_1;
              }
              piVar15 = piVar14 + 4;
              iVar6 = *piVar15;
              iVar5 = piVar14[5];
              if (iVar6 == iVar5) {
                param_1 = piVar15;
                func_0x0001087675dc(piVar15,iVar5,iVar5 + 1);
LAB_109cefe4c:
                iVar6 = *piVar15;
              }
            }
            else {
              if (iVar6 != 1) goto LAB_109cefd44;
              if (*(char *)(param_3 + 0x1ed) != '\x01') {
                if (piVar14[0x15] != 0x1e) {
                  func_0x000109c95478(piVar14);
                  piVar14[0x15] = 0x1e;
                  param_1 = *(int **)(piVar14 + 2);
                  if (((ulong)param_1 & 1) != 0) {
                    param_1 = *(int **)((ulong)param_1 & 0xfffffffffffffffe);
                  }
                  func_0x000109cba41c();
                  *(int **)(piVar14 + 0x12) = param_1;
                }
                goto LAB_109cefd44;
              }
              if (piVar14[0x15] == 0x20) {
                piVar15 = *(int **)(piVar14 + 0x12);
              }
              else {
                func_0x000109c95478(piVar14);
                piVar14[0x15] = 0x20;
                param_1 = *(int **)(piVar14 + 2);
                if (((ulong)param_1 & 1) != 0) {
                  param_1 = *(int **)((ulong)param_1 & 0xfffffffffffffffe);
                }
                func_0x000109cb8588();
                *(int **)(piVar14 + 0x12) = param_1;
                piVar15 = param_1;
              }
              piVar16 = piVar15 + 4;
              iVar6 = *piVar16;
              iVar5 = piVar15[5];
              if (iVar6 == iVar5) {
                param_1 = piVar16;
                func_0x0001087675dc(piVar16,iVar5,iVar5 + 1);
                iVar6 = *piVar16;
              }
              piVar15[4] = iVar6 + 1;
              *(ulong *)(*(long *)(piVar15 + 6) + (long)iVar6 * 8) = uVar8;
              if (piVar14[0x15] == 0x20) {
                piVar14 = *(int **)(piVar14 + 0x12);
              }
              else {
                func_0x000109c95478(piVar14);
                piVar14[0x15] = 0x20;
                param_1 = *(int **)(piVar14 + 2);
                if (((ulong)param_1 & 1) != 0) {
                  param_1 = *(int **)((ulong)param_1 & 0xfffffffffffffffe);
                }
                func_0x000109cb8588();
                *(int **)(piVar14 + 0x12) = param_1;
                piVar14 = param_1;
              }
              piVar15 = piVar14 + 4;
              iVar6 = *piVar15;
              iVar5 = piVar14[5];
              if (iVar6 == iVar5) {
                param_1 = piVar15;
                func_0x0001087675dc(piVar15,iVar5,iVar5 + 1);
                goto LAB_109cefe4c;
              }
            }
            piVar14[4] = iVar6 + 1;
            *(ulong *)(*(long *)(piVar14 + 6) + (long)iVar6 * 8) = uVar9;
LAB_109cefd44:
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
              return;
            }
            ___stack_chk_fail();
            ___cxa_guard_abort(0x1137e1bb0);
            __Unwind_Resume(param_1);
            return;
          }
        }
        if ((uRam00000001137e1bc0 & uVar9) == 0) {
          uVar13 = uVar13 & uVar9;
        }
        else if (uRam00000001137e1bc0 <= uVar13) {
          uVar3 = 0;
          if (uRam00000001137e1bc0 != 0) {
            uVar3 = uVar13 / uRam00000001137e1bc0;
          }
          uVar13 = uVar13 - uVar3 * uRam00000001137e1bc0;
        }
      } while (uVar13 == uVar11);
    }
  }
LAB_109cef938:
  func_0x000109262df8(&UNK_10f639994);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109cef948);
  (*pcVar4)();
}



/* Entry: 109ceff14; end: 109ceff5b;  */

void FUN_109ceff14(void)

{
  return;
}



/* Entry: 109ceff5c; end: 109cf0373;  */

void FUN_109ceff5c(long *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x27;
  
  uRam00000001137e1bc0 = 0;
  lRam00000001137e1bb8 = 0;
  uRam00000001137e1bd0 = 0;
  plRam00000001137e1bc8 = (long *)0x0;
  fRam00000001137e1bd8 = 1.0;
  if (param_2 != 0) {
    uVar12 = 0;
    uVar15 = 0;
    plVar1 = param_1 + param_2;
    do {
      uVar14 = (ulong)(int)*param_1;
      lVar13 = *param_1;
      if (uVar15 != 0) {
        uVar5 = uVar15 - 1;
        if ((uVar15 & uVar5) == 0) {
          unaff_x27 = uVar5 & uVar14;
        }
        else {
          unaff_x27 = uVar14;
          if (uVar15 <= uVar14) {
            uVar8 = 0;
            if (uVar15 != 0) {
              uVar8 = uVar14 / uVar15;
            }
            unaff_x27 = uVar14 - uVar8 * uVar15;
          }
        }
        plVar7 = *(long **)(lRam00000001137e1bb8 + unaff_x27 * 8);
        if (plVar7 != (long *)0x0) {
          do {
            while( true ) {
              plVar7 = (long *)*plVar7;
              if (plVar7 == (long *)0x0) goto LAB_109cf0038;
              uVar8 = plVar7[1];
              if (uVar8 != uVar14) break;
              if (*(int *)(plVar7 + 2) == (int)*param_1) goto LAB_109cf02d8;
            }
            if ((uVar15 & uVar5) == 0) {
              uVar8 = uVar8 & uVar5;
            }
            else if (uVar15 <= uVar8) {
              uVar11 = 0;
              if (uVar15 != 0) {
                uVar11 = uVar8 / uVar15;
              }
              uVar8 = uVar8 - uVar11 * uVar15;
            }
          } while (uVar8 == unaff_x27);
        }
      }
LAB_109cf0038:
      plVar7 = (long *)0x18;
      __Znwm();
      *plVar7 = 0;
      plVar7[1] = uVar14;
      plVar7[2] = lVar13;
      if ((uVar15 == 0) || (fRam00000001137e1bd8 * (float)uVar15 < (float)(uVar12 + 1))) {
        uVar5 = 1;
        if (2 < uVar15) {
          uVar5 = (ulong)((uVar15 & uVar15 - 1) != 0);
        }
        uVar5 = uVar5 | uVar15 << 1;
        uVar12 = (ulong)((float)(uVar12 + 1) / fRam00000001137e1bd8);
        if (uVar5 <= uVar12) {
          uVar5 = uVar12;
        }
        uVar12 = uVar15;
        if (uVar5 - 1 == 0) {
          uVar5 = 2;
        }
        else if ((uVar5 & uVar5 - 1) != 0) {
          __ZNSt3__112__next_primeEm();
          uVar12 = uRam00000001137e1bc0;
        }
        if (uVar12 < uVar5) {
LAB_109cf00d4:
          if (uVar5 >> 0x3d != 0) {
            func_0x000104c4f740();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x109cf0350);
            (*pcVar4)();
          }
          lVar13 = uVar5 << 3;
          __Znwm();
          bVar2 = lRam00000001137e1bb8 != 0;
          lRam00000001137e1bb8 = lVar13;
          if (bVar2) {
            __ZdlPv();
          }
          uVar12 = 0;
          uRam00000001137e1bc0 = uVar5;
          do {
            *(undefined8 *)(lRam00000001137e1bb8 + uVar12 * 8) = 0;
            plVar6 = plRam00000001137e1bc8;
            uVar12 = uVar12 + 1;
          } while (uVar5 != uVar12);
          uVar15 = uVar5;
          if (plRam00000001137e1bc8 != (long *)0x0) {
            uVar12 = plRam00000001137e1bc8[1];
            uVar8 = uVar5 - 1;
            if ((uVar5 & uVar8) == 0) {
              uVar12 = uVar12 & uVar8;
            }
            else if (uVar5 <= uVar12) {
              uVar11 = 0;
              if (uVar5 != 0) {
                uVar11 = uVar12 / uVar5;
              }
              uVar12 = uVar12 - uVar11 * uVar5;
            }
            *(undefined8 *)(lRam00000001137e1bb8 + uVar12 * 8) = 0x1137e1bc8;
            plVar9 = (long *)*plVar6;
            lVar13 = lRam00000001137e1bb8;
            while (lRam00000001137e1bb8 = lVar13, plVar9 != (long *)0x0) {
              uVar11 = plVar9[1];
              if ((uVar5 & uVar8) == 0) {
                uVar11 = uVar11 & uVar8;
              }
              else if (uVar5 <= uVar11) {
                uVar3 = 0;
                if (uVar5 != 0) {
                  uVar3 = uVar11 / uVar5;
                }
                uVar11 = uVar11 - uVar3 * uVar5;
              }
              plVar10 = plVar9;
              if (uVar11 != uVar12) {
                if (*(long *)(lVar13 + uVar11 * 8) == 0) {
                  *(long **)(lVar13 + uVar11 * 8) = plVar6;
                  uVar12 = uVar11;
                }
                else {
                  *plVar6 = *plVar9;
                  *plVar9 = **(long **)(lVar13 + uVar11 * 8);
                  **(undefined8 **)(lVar13 + uVar11 * 8) = plVar9;
                  plVar10 = plVar6;
                }
              }
              lVar13 = lRam00000001137e1bb8;
              plVar6 = plVar10;
              plVar9 = (long *)*plVar10;
            }
          }
        }
        else {
          uVar15 = uVar12;
          if (uVar5 < uVar12) {
            uVar15 = (ulong)((float)uRam00000001137e1bd0 / fRam00000001137e1bd8);
            if ((uVar12 < 3) || ((uVar12 & uVar12 - 1) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if (1 < uVar15) {
              uVar15 = 1L << (-LZCOUNT(uVar15 - 1) & 0x3fU);
            }
            lVar13 = lRam00000001137e1bb8;
            if (uVar5 <= uVar15) {
              uVar5 = uVar15;
            }
            uVar15 = uRam00000001137e1bc0;
            if (uVar5 < uVar12) {
              if (uVar5 != 0) goto LAB_109cf00d4;
              lRam00000001137e1bb8 = 0;
              if (lVar13 != 0) {
                __ZdlPv();
              }
              uRam00000001137e1bc0 = 0;
              uVar15 = 0;
            }
          }
        }
        if ((uVar15 & uVar15 - 1) == 0) {
          unaff_x27 = uVar15 - 1 & uVar14;
        }
        else {
          unaff_x27 = uVar14;
          if (uVar15 <= uVar14) {
            uVar12 = 0;
            if (uVar15 != 0) {
              uVar12 = uVar14 / uVar15;
            }
            unaff_x27 = uVar14 - uVar12 * uVar15;
          }
        }
      }
      lVar13 = lRam00000001137e1bb8;
      plVar6 = *(long **)(lRam00000001137e1bb8 + unaff_x27 * 8);
      if (plVar6 == (long *)0x0) {
        *plVar7 = (long)plRam00000001137e1bc8;
        plRam00000001137e1bc8 = plVar7;
        *(undefined8 *)(lVar13 + unaff_x27 * 8) = 0x1137e1bc8;
        if (*plVar7 != 0) {
          uVar12 = *(ulong *)(*plVar7 + 8);
          if ((uVar15 & uVar15 - 1) == 0) {
            uVar12 = uVar12 & uVar15 - 1;
          }
          else if (uVar15 <= uVar12) {
            uVar14 = 0;
            if (uVar15 != 0) {
              uVar14 = uVar12 / uVar15;
            }
            uVar12 = uVar12 - uVar14 * uVar15;
          }
          plVar6 = (long *)(lRam00000001137e1bb8 + uVar12 * 8);
          goto LAB_109cf02c8;
        }
      }
      else {
        *plVar7 = *plVar6;
LAB_109cf02c8:
        *plVar6 = (long)plVar7;
      }
      uVar12 = uRam00000001137e1bd0 + 1;
      uRam00000001137e1bd0 = uVar12;
LAB_109cf02d8:
      param_1 = param_1 + 1;
    } while (param_1 != plVar1);
  }
  return;
}



/* Entry: 109cf0374; end: 109cf03c3;  */

void FUN_109cf0374(void)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)lRam00000001137e1bc8;
  lVar1 = lRam00000001137e1bb8;
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    lRam00000001137e1bb8 = lVar1;
    __ZdlPv();
    lVar1 = lRam00000001137e1bb8;
  }
  lRam00000001137e1bb8 = 0;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cf03c4; end: 109cf03cb;  */

void FUN_109cf03c4(void)

{
  return;
}



/* Entry: 109cf03cc; end: 109cf0477;  */

void FUN_109cf03cc(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(int *)(param_2 + 0x8c) == 0x82) {
    uVar2 = *(ulong *)(param_2 + 0x80);
  }
  else {
    func_0x000109c819a4(param_2);
    *(undefined4 *)(param_2 + 0x8c) = 0x82;
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000109cbac30();
    *(ulong *)(param_2 + 0x80) = uVar2;
  }
  if (*(int *)(uVar2 + 0x1c) == 5) {
    uVar1 = *(ulong *)(uVar2 + 0x10);
  }
  else {
    func_0x000109c80a48(uVar2);
    *(undefined4 *)(uVar2 + 0x1c) = 5;
    uVar1 = *(ulong *)(uVar2 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000109cba060();
    *(ulong *)(uVar2 + 0x10) = uVar1;
  }
  *(undefined8 *)(uVar1 + 0x10) = 0x3f800000;
  return;
}



/* Entry: 109cf0478; end: 109cf04bb;  */

void FUN_109cf0478(void)

{
  return;
}



/* Entry: 109cf04bc; end: 109cf0c7b;  */

void FUN_109cf04bc(undefined8 param_1,long param_2,long param_3,int param_4,uint *param_5)

{
  bool bVar1;
  ulong *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  int iVar8;
  ulong *puVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined1 auStack_70 [28];
  undefined4 uStack_54;
  
  uVar7 = *(ulong *)(param_2 + 0x10);
  puVar2 = (ulong *)(param_2 + 0x10);
  if ((uVar7 & 1) != 0) {
    puVar2 = (ulong *)(uVar7 + 7);
  }
  FUN_109cf8a0c(param_5,*puVar2);
  if (param_5[1] != 1) {
    puVar6 = &UNK_10f5aa53c;
LAB_109cf0c74:
    puVar5 = &UNK_10e03f8f5;
    iVar8 = 0xf5a9c71;
    func_0x00010952d0c4(&UNK_10e03f8f5,&UNK_10f5a9c71,puVar6);
    if (iVar8 == 2) {
      if (*(int *)(puVar5 + 0x1c) == 0x28) {
        return;
      }
      func_0x000109c80a48(puVar5);
      *(undefined4 *)(puVar5 + 0x1c) = 0x28;
      uVar7 = *(ulong *)(puVar5 + 8);
      if ((uVar7 & 1) != 0) {
        uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
      }
      func_0x000109cb9f84();
    }
    else if (iVar8 == 1) {
      if (*(int *)(puVar5 + 0x1c) == 10) {
        return;
      }
      func_0x000109c80a48(puVar5);
      *(undefined4 *)(puVar5 + 0x1c) = 10;
      uVar7 = *(ulong *)(puVar5 + 8);
      if ((uVar7 & 1) != 0) {
        uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
      }
      func_0x000109cba018();
    }
    else {
      if (iVar8 != 0) {
        return;
      }
      if (*(int *)(puVar5 + 0x1c) == 0x1e) {
        return;
      }
      func_0x000109c80a48(puVar5);
      *(undefined4 *)(puVar5 + 0x1c) = 0x1e;
      uVar7 = *(ulong *)(puVar5 + 8);
      if ((uVar7 & 1) != 0) {
        uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
      }
      func_0x000109cb9e60();
    }
    *(ulong *)(puVar5 + 0x10) = uVar7;
    return;
  }
  if (param_4 == 0x2f) {
    if (*(int *)(param_3 + 0xd8) == 3) {
      iVar8 = 0x10;
      if (*(char *)(param_3 + 0x1bd) == '\0') {
        iVar8 = 8;
      }
      bVar1 = iVar8 < *(int *)(param_3 + 0x28);
      auStack_70[0] = bVar1;
      if (*(char *)(param_3 + 0x1bd) != '\0') {
        if (*(int *)(param_2 + 0x8c) == 0x1ae) {
          uVar7 = *(ulong *)(param_2 + 0x80);
        }
        else {
          func_0x000109c819a4(param_2);
          *(undefined4 *)(param_2 + 0x8c) = 0x1ae;
          uVar7 = *(ulong *)(param_2 + 8);
          if ((uVar7 & 1) != 0) {
            uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
          }
          func_0x000109cbad84();
          *(ulong *)(param_2 + 0x80) = uVar7;
        }
        *(ulong *)(uVar7 + 0x68) = (ulong)*param_5;
        *(ulong *)(uVar7 + 0x70) = (ulong)*(uint *)(param_3 + 0x118);
        if (*(int *)(param_3 + 0xd8) != 0) {
          lVar13 = (long)*(int *)(param_3 + 0xd8) << 2;
          do {
            func_0x000107c303b0(uVar7 + 0x18,&SUB_109cbac30);
            FUN_109cf0c7c();
            func_0x000107c303b0(uVar7 + 0x30,&SUB_109cbac30);
            FUN_109cf0c7c();
            lVar13 = lVar13 + -4;
          } while (lVar13 != 0);
        }
        *(uint *)(uVar7 + 0x10) = *(uint *)(uVar7 + 0x10) | 1;
        uVar10 = *(ulong *)(uVar7 + 0x60);
        if (uVar10 == 0) {
          uVar10 = *(ulong *)(uVar7 + 8);
          if ((uVar10 & 1) != 0) {
            uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
          }
          func_0x000109cb8ef0();
          *(ulong *)(uVar7 + 0x60) = uVar10;
        }
        *(undefined1 *)(uVar10 + 0x10) = 1;
        *(bool *)(uVar10 + 0x11) = bVar1;
        *(undefined2 *)(uVar10 + 0x12) = 0;
        *(undefined1 *)(uVar10 + 0x14) = 0;
        *(undefined4 *)(uVar10 + 0x18) = 0x47435000;
        lVar13 = uVar7 + 0x48;
        func_0x000107c303b0(lVar13,&SUB_109cba7ac);
        FUN_109cf0d54(param_3,auStack_70,lVar13,0,8,0x10);
        lVar13 = uVar7 + 0x48;
        func_0x000107c303b0(lVar13,&SUB_109cba7ac);
        FUN_109cf0d54(param_3,auStack_70,lVar13,4,0xc,0x14);
        return;
      }
      if (*(int *)(param_2 + 0x8c) == 0x1a4) {
        uVar7 = *(ulong *)(param_2 + 0x80);
      }
      else {
        func_0x000109c819a4(param_2);
        *(undefined4 *)(param_2 + 0x8c) = 0x1a4;
        uVar7 = *(ulong *)(param_2 + 8);
        if ((uVar7 & 1) != 0) {
          uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
        }
        func_0x000109cbac78();
        *(ulong *)(param_2 + 0x80) = uVar7;
      }
      *(ulong *)(uVar7 + 0x40) = (ulong)*param_5;
      *(ulong *)(uVar7 + 0x48) = (ulong)*(uint *)(param_3 + 0x118);
      if (*(int *)(param_3 + 0xd8) != 0) {
        lVar13 = (long)*(int *)(param_3 + 0xd8) << 2;
        do {
          func_0x000107c303b0(uVar7 + 0x18,&SUB_109cbac30);
          FUN_109cf0c7c();
          lVar13 = lVar13 + -4;
        } while (lVar13 != 0);
      }
      *(uint *)(uVar7 + 0x10) = *(uint *)(uVar7 + 0x10) | 1;
      uVar10 = *(ulong *)(uVar7 + 0x30);
      if (uVar10 == 0) {
        uVar10 = *(ulong *)(uVar7 + 8);
        if ((uVar10 & 1) != 0) {
          uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
        }
        func_0x000109cb8ef0();
        *(ulong *)(uVar7 + 0x30) = uVar10;
      }
      *(undefined1 *)(uVar10 + 0x10) = 1;
      *(bool *)(uVar10 + 0x11) = bVar1;
      *(undefined2 *)(uVar10 + 0x12) = 0;
      *(undefined1 *)(uVar10 + 0x14) = 0;
      *(undefined4 *)(uVar10 + 0x18) = 0x47435000;
      *(uint *)(uVar7 + 0x10) = *(uint *)(uVar7 + 0x10) | 2;
      uVar10 = *(ulong *)(uVar7 + 0x38);
      if (uVar10 == 0) {
        uVar10 = *(ulong *)(uVar7 + 8);
        if ((uVar10 & 1) != 0) {
          uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
        }
        func_0x000109cba7ac();
        *(ulong *)(uVar7 + 0x38) = uVar10;
      }
      FUN_109cf0d54(param_3,auStack_70,uVar10,0,4,8);
      *(undefined1 *)(uVar7 + 0x50) = 0;
      return;
    }
    puVar6 = &UNK_10f5aa5a5;
    goto LAB_109cf0c74;
  }
  if (param_4 != 0x32) {
    puVar6 = &UNK_10f5aa5de;
    goto LAB_109cf0c74;
  }
  if (*(int *)(param_2 + 0x8c) == 400) {
    uVar7 = *(ulong *)(param_2 + 0x80);
  }
  else {
    func_0x000109c819a4(param_2);
    *(undefined4 *)(param_2 + 0x8c) = 400;
    uVar7 = *(ulong *)(param_2 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000109cbacd0();
    *(ulong *)(param_2 + 0x80) = uVar7;
  }
  *(ulong *)(uVar7 + 0x38) = (ulong)*param_5;
  *(ulong *)(uVar7 + 0x40) = (ulong)*(uint *)(param_3 + 0x118);
  if (*(int *)(param_3 + 0xd8) != 1) {
    puVar6 = &UNK_10f5aa56c;
    goto LAB_109cf0c74;
  }
  iVar8 = **(int **)(param_3 + 0xe0);
  if (iVar8 == 2) {
    *(uint *)(uVar7 + 0x10) = *(uint *)(uVar7 + 0x10) | 1;
    uVar10 = *(ulong *)(uVar7 + 0x18);
    if (uVar10 == 0) {
      uVar10 = *(ulong *)(uVar7 + 8);
      if ((uVar10 & 1) != 0) {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
      }
      func_0x000109cbac30();
      *(ulong *)(uVar7 + 0x18) = uVar10;
    }
    if (*(int *)(uVar10 + 0x1c) == 0x28) goto LAB_109cf08f8;
    func_0x000109c80a48(uVar10);
    *(undefined4 *)(uVar10 + 0x1c) = 0x28;
    uVar4 = *(ulong *)(uVar10 + 8);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000109cb9f84();
  }
  else if (iVar8 == 1) {
    *(uint *)(uVar7 + 0x10) = *(uint *)(uVar7 + 0x10) | 1;
    uVar10 = *(ulong *)(uVar7 + 0x18);
    if (uVar10 == 0) {
      uVar10 = *(ulong *)(uVar7 + 8);
      if ((uVar10 & 1) != 0) {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
      }
      func_0x000109cbac30();
      *(ulong *)(uVar7 + 0x18) = uVar10;
    }
    if (*(int *)(uVar10 + 0x1c) == 10) goto LAB_109cf08f8;
    func_0x000109c80a48(uVar10);
    *(undefined4 *)(uVar10 + 0x1c) = 10;
    uVar4 = *(ulong *)(uVar10 + 8);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000109cba018();
  }
  else {
    if (iVar8 != 0) goto LAB_109cf08f8;
    *(uint *)(uVar7 + 0x10) = *(uint *)(uVar7 + 0x10) | 1;
    uVar10 = *(ulong *)(uVar7 + 0x18);
    if (uVar10 == 0) {
      uVar10 = *(ulong *)(uVar7 + 8);
      if ((uVar10 & 1) != 0) {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
      }
      func_0x000109cbac30();
      *(ulong *)(uVar7 + 0x18) = uVar10;
    }
    if (*(int *)(uVar10 + 0x1c) == 0x1e) goto LAB_109cf08f8;
    func_0x000109c80a48(uVar10);
    *(undefined4 *)(uVar10 + 0x1c) = 0x1e;
    uVar4 = *(ulong *)(uVar10 + 8);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000109cb9e60();
  }
  *(ulong *)(uVar10 + 0x10) = uVar4;
LAB_109cf08f8:
  iVar8 = *(int *)(param_3 + 0x28);
  *(undefined1 *)(uVar7 + 0x48) = 1;
  *(bool *)(uVar7 + 0x49) = 2 < iVar8;
  puVar9 = (ulong *)(param_3 + 0x20);
  puVar2 = puVar9;
  if ((*puVar9 & 1) != 0) {
    puVar2 = (ulong *)(*puVar9 + 7);
  }
  uVar4 = *puVar2;
  *(uint *)(uVar7 + 0x10) = *(uint *)(uVar7 + 0x10) | 2;
  uVar10 = *(ulong *)(uVar7 + 0x20);
  if (uVar10 == 0) {
    uVar10 = *(ulong *)(uVar7 + 8);
    if ((uVar10 & 1) != 0) {
      uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
    }
    func_0x000109cba3bc();
    *(ulong *)(uVar7 + 0x20) = uVar10;
  }
  iVar11 = *(int *)(uVar4 + 0x60) * *(int *)(uVar4 + 0x58) * *(int *)(uVar4 + 100) *
           *(int *)(uVar4 + 0x5c);
  if (*(int *)(uVar10 + 0x1c) < iVar11) {
    func_0x000109311970(uVar10 + 0x18,*(undefined4 *)(uVar10 + 0x18),iVar11);
  }
  if (0 < iVar11) {
    iVar12 = 0;
    lVar13 = *(long *)(uVar10 + 0x20);
    do {
      FUN_109ce5394(&uStack_54,iVar12,uVar4,auStack_70);
      iVar3 = *(int *)(uVar10 + 0x18);
      *(int *)(uVar10 + 0x18) = iVar3 + 1;
      *(undefined4 *)(lVar13 + (long)iVar3 * 4) = uStack_54;
      iVar12 = iVar12 + 1;
    } while (iVar11 - iVar12 != 0);
  }
  puVar2 = puVar9;
  if ((*puVar9 & 1) != 0) {
    puVar2 = (ulong *)(*puVar9 + 0xf);
  }
  uVar4 = *puVar2;
  *(uint *)(uVar7 + 0x10) = *(uint *)(uVar7 + 0x10) | 4;
  uVar10 = *(ulong *)(uVar7 + 0x28);
  if (uVar10 == 0) {
    uVar10 = *(ulong *)(uVar7 + 8);
    if ((uVar10 & 1) != 0) {
      uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
    }
    func_0x000109cba3bc();
    *(ulong *)(uVar7 + 0x28) = uVar10;
  }
  iVar11 = *(int *)(uVar4 + 0x60) * *(int *)(uVar4 + 0x58) * *(int *)(uVar4 + 100) *
           *(int *)(uVar4 + 0x5c);
  if (*(int *)(uVar10 + 0x1c) < iVar11) {
    func_0x000109311970(uVar10 + 0x18,*(undefined4 *)(uVar10 + 0x18),iVar11);
  }
  if (0 < iVar11) {
    iVar12 = 0;
    lVar13 = *(long *)(uVar10 + 0x20);
    do {
      FUN_109ce5394(&uStack_54,iVar12,uVar4,auStack_70);
      iVar3 = *(int *)(uVar10 + 0x18);
      *(int *)(uVar10 + 0x18) = iVar3 + 1;
      *(undefined4 *)(lVar13 + (long)iVar3 * 4) = uStack_54;
      iVar12 = iVar12 + 1;
    } while (iVar11 - iVar12 != 0);
  }
  if (2 < iVar8) {
    if ((*puVar9 & 1) != 0) {
      puVar9 = (ulong *)(*puVar9 + 0x17);
    }
    uVar4 = *puVar9;
    *(uint *)(uVar7 + 0x10) = *(uint *)(uVar7 + 0x10) | 8;
    uVar10 = *(ulong *)(uVar7 + 0x30);
    if (uVar10 == 0) {
      uVar10 = *(ulong *)(uVar7 + 8);
      if ((uVar10 & 1) != 0) {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
      }
      func_0x000109cba3bc();
      *(ulong *)(uVar7 + 0x30) = uVar10;
    }
    iVar8 = *(int *)(uVar4 + 0x60) * *(int *)(uVar4 + 0x58) * *(int *)(uVar4 + 100) *
            *(int *)(uVar4 + 0x5c);
    if (*(int *)(uVar10 + 0x1c) < iVar8) {
      func_0x000109311970(uVar10 + 0x18,*(undefined4 *)(uVar10 + 0x18),iVar8);
    }
    if (0 < iVar8) {
      iVar11 = 0;
      lVar13 = *(long *)(uVar10 + 0x20);
      do {
        FUN_109ce5394(&uStack_54,iVar11,uVar4,auStack_70);
        iVar12 = *(int *)(uVar10 + 0x18);
        *(int *)(uVar10 + 0x18) = iVar12 + 1;
        *(undefined4 *)(lVar13 + (long)iVar12 * 4) = uStack_54;
        iVar11 = iVar11 + 1;
      } while (iVar8 - iVar11 != 0);
    }
  }
  *(undefined1 *)(uVar7 + 0x4a) = 0;
  return;
}



/* Entry: 109cf0c7c; end: 109cf0d53;  */

void FUN_109cf0c7c(long param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 2) {
    if (*(int *)(param_1 + 0x1c) == 0x28) {
      return;
    }
    func_0x000109c80a48(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 0x28;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000109cb9f84();
  }
  else if (param_2 == 1) {
    if (*(int *)(param_1 + 0x1c) == 10) {
      return;
    }
    func_0x000109c80a48(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 10;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000109cba018();
  }
  else {
    if (param_2 != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x1c) == 0x1e) {
      return;
    }
    func_0x000109c80a48(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 0x1e;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000109cb9e60();
  }
  *(ulong *)(param_1 + 0x10) = uVar1;
  return;
}



/* Entry: 109cf0d54; end: 109cf170f;  */

void FUN_109cf0d54(long param_1,char *param_2,long param_3,uint param_4,uint param_5,uint param_6)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined1 auStack_80 [28];
  undefined4 uStack_64;
  
  puVar4 = (ulong *)(param_1 + 0x20);
  puVar1 = puVar4;
  if ((*puVar4 & 1) != 0) {
    puVar1 = (ulong *)(*puVar4 + (ulong)param_4 * 8 + 7);
  }
  uVar6 = *puVar1;
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 1;
  uVar7 = *(ulong *)(param_3 + 0x18);
  if (uVar7 == 0) {
    uVar7 = *(ulong *)(param_3 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000109cba3bc();
    *(ulong *)(param_3 + 0x18) = uVar7;
  }
  iVar3 = *(int *)(uVar6 + 0x60) * *(int *)(uVar6 + 0x58) * *(int *)(uVar6 + 100) *
          *(int *)(uVar6 + 0x5c);
  if (*(int *)(uVar7 + 0x1c) < iVar3) {
    func_0x000109311970(uVar7 + 0x18,*(undefined4 *)(uVar7 + 0x18),iVar3);
  }
  if (0 < iVar3) {
    iVar8 = 0;
    lVar5 = *(long *)(uVar7 + 0x20);
    do {
      FUN_109ce5394(&uStack_64,iVar8,uVar6,auStack_80);
      iVar2 = *(int *)(uVar7 + 0x18);
      *(int *)(uVar7 + 0x18) = iVar2 + 1;
      *(undefined4 *)(lVar5 + (long)iVar2 * 4) = uStack_64;
      iVar8 = iVar8 + 1;
    } while (iVar3 - iVar8 != 0);
  }
  puVar1 = puVar4;
  if ((*puVar4 & 1) != 0) {
    puVar1 = (ulong *)(*puVar4 + (ulong)(param_4 + 1) * 8 + 7);
  }
  uVar6 = *puVar1;
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 8;
  uVar7 = *(ulong *)(param_3 + 0x30);
  if (uVar7 == 0) {
    uVar7 = *(ulong *)(param_3 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000109cba3bc();
    *(ulong *)(param_3 + 0x30) = uVar7;
  }
  iVar3 = *(int *)(uVar6 + 0x60) * *(int *)(uVar6 + 0x58) * *(int *)(uVar6 + 100) *
          *(int *)(uVar6 + 0x5c);
  if (*(int *)(uVar7 + 0x1c) < iVar3) {
    func_0x000109311970(uVar7 + 0x18,*(undefined4 *)(uVar7 + 0x18),iVar3);
  }
  if (0 < iVar3) {
    iVar8 = 0;
    lVar5 = *(long *)(uVar7 + 0x20);
    do {
      FUN_109ce5394(&uStack_64,iVar8,uVar6,auStack_80);
      iVar2 = *(int *)(uVar7 + 0x18);
      *(int *)(uVar7 + 0x18) = iVar2 + 1;
      *(undefined4 *)(lVar5 + (long)iVar2 * 4) = uStack_64;
      iVar8 = iVar8 + 1;
    } while (iVar3 - iVar8 != 0);
  }
  puVar1 = puVar4;
  if ((*puVar4 & 1) != 0) {
    puVar1 = (ulong *)(*puVar4 + (ulong)(param_4 + 2) * 8 + 7);
  }
  uVar6 = *puVar1;
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 2;
  uVar7 = *(ulong *)(param_3 + 0x20);
  if (uVar7 == 0) {
    uVar7 = *(ulong *)(param_3 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000109cba3bc();
    *(ulong *)(param_3 + 0x20) = uVar7;
  }
  iVar3 = *(int *)(uVar6 + 0x60) * *(int *)(uVar6 + 0x58) * *(int *)(uVar6 + 100) *
          *(int *)(uVar6 + 0x5c);
  if (*(int *)(uVar7 + 0x1c) < iVar3) {
    func_0x000109311970(uVar7 + 0x18,*(undefined4 *)(uVar7 + 0x18),iVar3);
  }
  if (0 < iVar3) {
    iVar8 = 0;
    lVar5 = *(long *)(uVar7 + 0x20);
    do {
      FUN_109ce5394(&uStack_64,iVar8,uVar6,auStack_80);
      iVar2 = *(int *)(uVar7 + 0x18);
      *(int *)(uVar7 + 0x18) = iVar2 + 1;
      *(undefined4 *)(lVar5 + (long)iVar2 * 4) = uStack_64;
      iVar8 = iVar8 + 1;
    } while (iVar3 - iVar8 != 0);
  }
  puVar1 = puVar4;
  if ((*puVar4 & 1) != 0) {
    puVar1 = (ulong *)(*puVar4 + (ulong)(param_4 + 3) * 8 + 7);
  }
  uVar6 = *puVar1;
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 4;
  uVar7 = *(ulong *)(param_3 + 0x28);
  if (uVar7 == 0) {
    uVar7 = *(ulong *)(param_3 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000109cba3bc();
    *(ulong *)(param_3 + 0x28) = uVar7;
  }
  iVar3 = *(int *)(uVar6 + 0x60) * *(int *)(uVar6 + 0x58) * *(int *)(uVar6 + 100) *
          *(int *)(uVar6 + 0x5c);
  if (*(int *)(uVar7 + 0x1c) < iVar3) {
    func_0x000109311970(uVar7 + 0x18,*(undefined4 *)(uVar7 + 0x18),iVar3);
  }
  if (0 < iVar3) {
    iVar8 = 0;
    lVar5 = *(long *)(uVar7 + 0x20);
    do {
      FUN_109ce5394(&uStack_64,iVar8,uVar6,auStack_80);
      iVar2 = *(int *)(uVar7 + 0x18);
      *(int *)(uVar7 + 0x18) = iVar2 + 1;
      *(undefined4 *)(lVar5 + (long)iVar2 * 4) = uStack_64;
      iVar8 = iVar8 + 1;
    } while (iVar3 - iVar8 != 0);
  }
  puVar1 = puVar4;
  if ((*puVar4 & 1) != 0) {
    puVar1 = (ulong *)(*puVar4 + (ulong)param_5 * 8 + 7);
  }
  uVar6 = *puVar1;
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x10;
  uVar7 = *(ulong *)(param_3 + 0x38);
  if (uVar7 == 0) {
    uVar7 = *(ulong *)(param_3 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000109cba3bc();
    *(ulong *)(param_3 + 0x38) = uVar7;
  }
  iVar3 = *(int *)(uVar6 + 0x60) * *(int *)(uVar6 + 0x58) * *(int *)(uVar6 + 100) *
          *(int *)(uVar6 + 0x5c);
  if (*(int *)(uVar7 + 0x1c) < iVar3) {
    func_0x000109311970(uVar7 + 0x18,*(undefined4 *)(uVar7 + 0x18),iVar3);
  }
  if (0 < iVar3) {
    iVar8 = 0;
    lVar5 = *(long *)(uVar7 + 0x20);
    do {
      FUN_109ce5394(&uStack_64,iVar8,uVar6,auStack_80);
      iVar2 = *(int *)(uVar7 + 0x18);
      *(int *)(uVar7 + 0x18) = iVar2 + 1;
      *(undefined4 *)(lVar5 + (long)iVar2 * 4) = uStack_64;
      iVar8 = iVar8 + 1;
    } while (iVar3 - iVar8 != 0);
  }
  puVar1 = puVar4;
  if ((*puVar4 & 1) != 0) {
    puVar1 = (ulong *)(*puVar4 + (ulong)(param_5 + 1) * 8 + 7);
  }
  uVar6 = *puVar1;
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x80;
  uVar7 = *(ulong *)(param_3 + 0x50);
  if (uVar7 == 0) {
    uVar7 = *(ulong *)(param_3 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000109cba3bc();
    *(ulong *)(param_3 + 0x50) = uVar7;
  }
  iVar3 = *(int *)(uVar6 + 0x60) * *(int *)(uVar6 + 0x58) * *(int *)(uVar6 + 100) *
          *(int *)(uVar6 + 0x5c);
  if (*(int *)(uVar7 + 0x1c) < iVar3) {
    func_0x000109311970(uVar7 + 0x18,*(undefined4 *)(uVar7 + 0x18),iVar3);
  }
  if (0 < iVar3) {
    iVar8 = 0;
    lVar5 = *(long *)(uVar7 + 0x20);
    do {
      FUN_109ce5394(&uStack_64,iVar8,uVar6,auStack_80);
      iVar2 = *(int *)(uVar7 + 0x18);
      *(int *)(uVar7 + 0x18) = iVar2 + 1;
      *(undefined4 *)(lVar5 + (long)iVar2 * 4) = uStack_64;
      iVar8 = iVar8 + 1;
    } while (iVar3 - iVar8 != 0);
  }
  puVar1 = puVar4;
  if ((*puVar4 & 1) != 0) {
    puVar1 = (ulong *)(*puVar4 + (ulong)(param_5 + 2) * 8 + 7);
  }
  uVar6 = *puVar1;
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x20;
  uVar7 = *(ulong *)(param_3 + 0x40);
  if (uVar7 == 0) {
    uVar7 = *(ulong *)(param_3 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000109cba3bc();
    *(ulong *)(param_3 + 0x40) = uVar7;
  }
  iVar3 = *(int *)(uVar6 + 0x60) * *(int *)(uVar6 + 0x58) * *(int *)(uVar6 + 100) *
          *(int *)(uVar6 + 0x5c);
  if (*(int *)(uVar7 + 0x1c) < iVar3) {
    func_0x000109311970(uVar7 + 0x18,*(undefined4 *)(uVar7 + 0x18),iVar3);
  }
  if (0 < iVar3) {
    iVar8 = 0;
    lVar5 = *(long *)(uVar7 + 0x20);
    do {
      FUN_109ce5394(&uStack_64,iVar8,uVar6,auStack_80);
      iVar2 = *(int *)(uVar7 + 0x18);
      *(int *)(uVar7 + 0x18) = iVar2 + 1;
      *(undefined4 *)(lVar5 + (long)iVar2 * 4) = uStack_64;
      iVar8 = iVar8 + 1;
    } while (iVar3 - iVar8 != 0);
  }
  puVar1 = puVar4;
  if ((*puVar4 & 1) != 0) {
    puVar1 = (ulong *)(*puVar4 + (ulong)(param_5 + 3) * 8 + 7);
  }
  uVar6 = *puVar1;
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x40;
  uVar7 = *(ulong *)(param_3 + 0x48);
  if (uVar7 == 0) {
    uVar7 = *(ulong *)(param_3 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000109cba3bc();
    *(ulong *)(param_3 + 0x48) = uVar7;
  }
  iVar3 = *(int *)(uVar6 + 0x60) * *(int *)(uVar6 + 0x58) * *(int *)(uVar6 + 100) *
          *(int *)(uVar6 + 0x5c);
  if (*(int *)(uVar7 + 0x1c) < iVar3) {
    func_0x000109311970(uVar7 + 0x18,*(undefined4 *)(uVar7 + 0x18),iVar3);
  }
  if (0 < iVar3) {
    iVar8 = 0;
    lVar5 = *(long *)(uVar7 + 0x20);
    do {
      FUN_109ce5394(&uStack_64,iVar8,uVar6,auStack_80);
      iVar2 = *(int *)(uVar7 + 0x18);
      *(int *)(uVar7 + 0x18) = iVar2 + 1;
      *(undefined4 *)(lVar5 + (long)iVar2 * 4) = uStack_64;
      iVar8 = iVar8 + 1;
    } while (iVar3 - iVar8 != 0);
  }
  if (*param_2 == '\x01') {
    puVar1 = puVar4;
    if ((*puVar4 & 1) != 0) {
      puVar1 = (ulong *)(*puVar4 + (ulong)param_6 * 8 + 7);
    }
    uVar6 = *puVar1;
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x100;
    uVar7 = *(ulong *)(param_3 + 0x58);
    if (uVar7 == 0) {
      uVar7 = *(ulong *)(param_3 + 8);
      if ((uVar7 & 1) != 0) {
        uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
      }
      func_0x000109cba3bc();
      *(ulong *)(param_3 + 0x58) = uVar7;
    }
    iVar3 = *(int *)(uVar6 + 0x60) * *(int *)(uVar6 + 0x58) * *(int *)(uVar6 + 100) *
            *(int *)(uVar6 + 0x5c);
    if (*(int *)(uVar7 + 0x1c) < iVar3) {
      func_0x000109311970(uVar7 + 0x18,*(undefined4 *)(uVar7 + 0x18),iVar3);
    }
    if (0 < iVar3) {
      iVar8 = 0;
      lVar5 = *(long *)(uVar7 + 0x20);
      do {
        FUN_109ce5394(&uStack_64,iVar8,uVar6,auStack_80);
        iVar2 = *(int *)(uVar7 + 0x18);
        *(int *)(uVar7 + 0x18) = iVar2 + 1;
        *(undefined4 *)(lVar5 + (long)iVar2 * 4) = uStack_64;
        iVar8 = iVar8 + 1;
      } while (iVar3 - iVar8 != 0);
    }
    puVar1 = puVar4;
    if ((*puVar4 & 1) != 0) {
      puVar1 = (ulong *)(*puVar4 + (ulong)(param_6 + 1) * 8 + 7);
    }
    uVar6 = *puVar1;
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x800;
    uVar7 = *(ulong *)(param_3 + 0x70);
    if (uVar7 == 0) {
      uVar7 = *(ulong *)(param_3 + 8);
      if ((uVar7 & 1) != 0) {
        uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
      }
      func_0x000109cba3bc();
      *(ulong *)(param_3 + 0x70) = uVar7;
    }
    iVar3 = *(int *)(uVar6 + 0x60) * *(int *)(uVar6 + 0x58) * *(int *)(uVar6 + 100) *
            *(int *)(uVar6 + 0x5c);
    if (*(int *)(uVar7 + 0x1c) < iVar3) {
      func_0x000109311970(uVar7 + 0x18,*(undefined4 *)(uVar7 + 0x18),iVar3);
    }
    if (0 < iVar3) {
      iVar8 = 0;
      lVar5 = *(long *)(uVar7 + 0x20);
      do {
        FUN_109ce5394(&uStack_64,iVar8,uVar6,auStack_80);
        iVar2 = *(int *)(uVar7 + 0x18);
        *(int *)(uVar7 + 0x18) = iVar2 + 1;
        *(undefined4 *)(lVar5 + (long)iVar2 * 4) = uStack_64;
        iVar8 = iVar8 + 1;
      } while (iVar3 - iVar8 != 0);
    }
    puVar1 = puVar4;
    if ((*puVar4 & 1) != 0) {
      puVar1 = (ulong *)(*puVar4 + (ulong)(param_6 + 2) * 8 + 7);
    }
    uVar6 = *puVar1;
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x200;
    uVar7 = *(ulong *)(param_3 + 0x60);
    if (uVar7 == 0) {
      uVar7 = *(ulong *)(param_3 + 8);
      if ((uVar7 & 1) != 0) {
        uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
      }
      func_0x000109cba3bc();
      *(ulong *)(param_3 + 0x60) = uVar7;
    }
    iVar3 = *(int *)(uVar6 + 0x60) * *(int *)(uVar6 + 0x58) * *(int *)(uVar6 + 100) *
            *(int *)(uVar6 + 0x5c);
    if (*(int *)(uVar7 + 0x1c) < iVar3) {
      func_0x000109311970(uVar7 + 0x18,*(undefined4 *)(uVar7 + 0x18),iVar3);
    }
    if (0 < iVar3) {
      iVar8 = 0;
      lVar5 = *(long *)(uVar7 + 0x20);
      do {
        FUN_109ce5394(&uStack_64,iVar8,uVar6,auStack_80);
        iVar2 = *(int *)(uVar7 + 0x18);
        *(int *)(uVar7 + 0x18) = iVar2 + 1;
        *(undefined4 *)(lVar5 + (long)iVar2 * 4) = uStack_64;
        iVar8 = iVar8 + 1;
      } while (iVar3 - iVar8 != 0);
    }
    if ((*puVar4 & 1) != 0) {
      puVar4 = (ulong *)(*puVar4 + (ulong)(param_6 + 3) * 8 + 7);
    }
    uVar6 = *puVar4;
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x400;
    uVar7 = *(ulong *)(param_3 + 0x68);
    if (uVar7 == 0) {
      uVar7 = *(ulong *)(param_3 + 8);
      if ((uVar7 & 1) != 0) {
        uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
      }
      func_0x000109cba3bc();
      *(ulong *)(param_3 + 0x68) = uVar7;
    }
    iVar3 = *(int *)(uVar6 + 0x60) * *(int *)(uVar6 + 0x58) * *(int *)(uVar6 + 100) *
            *(int *)(uVar6 + 0x5c);
    if (*(int *)(uVar7 + 0x1c) < iVar3) {
      func_0x000109311970(uVar7 + 0x18,*(undefined4 *)(uVar7 + 0x18),iVar3);
    }
    if (0 < iVar3) {
      iVar8 = 0;
      lVar5 = *(long *)(uVar7 + 0x20);
      do {
        FUN_109ce5394(&uStack_64,iVar8,uVar6,auStack_80);
        iVar2 = *(int *)(uVar7 + 0x18);
        *(int *)(uVar7 + 0x18) = iVar2 + 1;
        *(undefined4 *)(lVar5 + (long)iVar2 * 4) = uStack_64;
        iVar8 = iVar8 + 1;
      } while (iVar3 - iVar8 != 0);
    }
  }
  return;
}



/* Entry: 109cf1710; end: 109cf173b;  */

void FUN_109cf1710(void)

{
  return;
}



/* Entry: 109cf173c; end: 109cf185f;  */

undefined1  [16] FUN_109cf173c(uint *param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  uVar6 = *param_1;
  uVar5 = (ulong)param_1[1];
  uVar4 = param_1[2];
  uVar3 = (ulong)param_1[3];
  iVar1 = *(int *)(param_2 + 0x19c);
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    else {
      if (iVar1 == 1) {
        uVar4 = 1;
        goto LAB_109cf17d4;
      }
      if (iVar1 != 2) goto LAB_109cf17f4;
    }
    uVar5 = 1;
  }
  else if (iVar1 < 5) {
    if (iVar1 == 3) {
      uVar3 = 1;
      goto LAB_109cf17d4;
    }
    if (iVar1 != 4) {
LAB_109cf17f4:
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_50,&UNK_10f5aa60d,*(ulong *)(param_2 + 0xf8) & 0xfffffffffffffffc);
      func_0x000109259240(auStack_38,auStack_50,&UNK_10f5aa630);
      FUN_109cd8934(auStack_38);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109cf182c);
      (*pcVar2)();
    }
  }
  else {
    if (iVar1 != 5) {
      if (iVar1 != 6) goto LAB_109cf17f4;
      uVar5 = 1;
      goto LAB_109cf17d4;
    }
    uVar3 = 1;
    uVar5 = 1;
  }
  uVar6 = 1;
LAB_109cf17d4:
  auVar7._0_8_ = (ulong)uVar6 | uVar5 << 0x20;
  auVar7._8_8_ = (ulong)uVar4 | uVar3 << 0x20;
  return auVar7;
}



/* Entry: 109cf1860; end: 109cf233f;  */

void FUN_109cf1860(undefined8 param_1,int *param_2,ulong param_3,undefined8 param_4,long param_5)

{
  byte bVar1;
  ulong uVar2;
  int *piVar3;
  uint uVar4;
  code *pcVar5;
  ulong uVar6;
  int iVar7;
  undefined *puVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  uint extraout_w8;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  int *piStack_70;
  int *piStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)(param_5 + 0xa0);
  uVar10 = (uint)bVar1;
  if (*(int *)(param_3 + 0x198) == 4) {
    if (*(int *)(param_3 + 0x19c) == 1) goto LAB_109cf18d0;
    puVar8 = &UNK_10f5aa668;
  }
  else {
    if (*(int *)(param_3 + 0x198) != 5) {
LAB_109cf18d0:
      uVar4 = (uint)bVar1;
      if ((bRam00000001137e1be0 & 1) == 0) goto LAB_109cf2134;
      goto LAB_109cf18e0;
    }
    if (3 < bVar1) {
      if (param_2[0x23] == 0x3fc) {
        uVar6 = *(ulong *)(param_2 + 0x20);
      }
      else {
        func_0x000109c819a4(param_2);
        param_2[0x23] = 0x3fc;
        uVar6 = *(ulong *)(param_2 + 2);
        if ((uVar6 & 1) != 0) {
          uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
        }
        func_0x000109cb9ce8();
        *(ulong *)(param_2 + 0x20) = uVar6;
      }
      *(undefined8 *)(uVar6 + 0x10) = 0xfffffffffffffffd;
      *(undefined1 *)(uVar6 + 0x18) = 0;
      do {
        while( true ) {
          while( true ) {
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
              return;
            }
            ___stack_chk_fail();
            uVar4 = extraout_w8;
LAB_109cf2134:
            uVar10 = uVar4;
            iVar11 = 0x137e1be0;
            ___cxa_guard_acquire();
            if (iVar11 != 0) {
              uStack_50 = 0x900000004;
              piStack_68 = (int *)((long)&MACH_HEADER.magic + 1);
              piStack_70 = (int *)0x0;
              uStack_58 = 0x800000003;
              uStack_60 = 0x700000002;
              FUN_109cf24e8(&piStack_70,5);
              ___cxa_atexit(FUN_109cf2340,0x1137e1bf0,0x100000000);
              ___cxa_guard_release(0x1137e1be0);
            }
LAB_109cf18e0:
            if ((bRam00000001137e1be8 & 1) == 0) {
              iVar11 = 0x137e1be8;
              ___cxa_guard_acquire();
              if (iVar11 != 0) {
                uStack_60 = 0x100000002;
                piStack_68 = (int *)0x200000001;
                piStack_70 = (int *)0x0;
                FUN_109cf2950(&piStack_70,3);
                ___cxa_atexit(0x109cf2344,0x1137e1c18,0x100000000);
                ___cxa_guard_release(0x1137e1be8);
              }
            }
            iVar11 = *(int *)(param_3 + 0x19c);
            if (2 < iVar11 - 4U) break;
            if (uVar10 < 4) {
              func_0x00010952d0c4(&UNK_10e03f968,&UNK_10f5a9c71,&UNK_10f5aa2d8);
              goto LAB_109cf22d4;
            }
            piStack_70 = (int *)0x0;
            piStack_68 = (int *)0x0;
            uStack_60 = 0;
            if (iVar11 == 6) {
              uStack_90 = 0xfffffffffffffffe;
              FUN_109cf239c(&piStack_70,&uStack_90,&uStack_88,1);
            }
            else if (iVar11 == 4) {
              uStack_90 = 0xffffffffffffffff;
              FUN_109cf239c(&piStack_70,&uStack_90,&uStack_88,1);
            }
            else {
              uStack_80 = 0xfffffffffffffffb;
              uStack_88 = 0xfffffffffffffffe;
              uStack_90 = 0xffffffffffffffff;
              FUN_109cf239c(&piStack_70,&uStack_90,auStack_78,3);
            }
            iVar11 = *(int *)(param_3 + 0x198);
            if (iVar11 < 2) {
              if (iVar11 == 0) {
                if (param_2[0x23] == 0x4f6) {
                  param_3 = *(ulong *)(param_2 + 0x20);
                }
                else {
                  func_0x000109c819a4(param_2);
                  param_2[0x23] = 0x4f6;
                  param_3 = *(ulong *)(param_2 + 2);
                  if ((param_3 & 1) != 0) {
                    param_3 = *(ulong *)(param_3 & 0xfffffffffffffffe);
                  }
                  func_0x000109cb7e64();
                  *(ulong *)(param_2 + 0x20) = param_3;
                }
                piVar3 = piStack_68;
                if (piStack_70 != piStack_68) {
                  param_2 = (int *)(param_3 + 0x10);
                  iVar11 = *param_2;
                  piVar16 = piStack_70;
                  do {
                    uVar17 = *(undefined8 *)piVar16;
                    iVar7 = iVar11;
                    if (iVar11 == *(int *)(param_3 + 0x14)) {
                      func_0x00010598df1c(param_2,iVar11,iVar11 + 1);
                      iVar7 = *param_2;
                    }
                    iVar11 = iVar7 + 1;
                    *(int *)(param_3 + 0x10) = iVar11;
                    *(undefined8 *)(*(long *)(param_3 + 0x18) + (long)iVar7 * 8) = uVar17;
                    piVar16 = piVar16 + 2;
                  } while (piVar16 != piVar3);
                }
              }
              else {
                if (iVar11 != 1) goto LAB_109cf226c;
                if (param_2[0x23] == 0x500) {
                  param_3 = *(ulong *)(param_2 + 0x20);
                }
                else {
                  func_0x000109c819a4(param_2);
                  param_2[0x23] = 0x500;
                  param_3 = *(ulong *)(param_2 + 2);
                  if ((param_3 & 1) != 0) {
                    param_3 = *(ulong *)(param_3 & 0xfffffffffffffffe);
                  }
                  func_0x000109cb7f60();
                  *(ulong *)(param_2 + 0x20) = param_3;
                }
                piVar3 = piStack_68;
                if (piStack_70 != piStack_68) {
                  param_2 = (int *)(param_3 + 0x10);
                  iVar11 = *param_2;
                  piVar16 = piStack_70;
                  do {
                    uVar17 = *(undefined8 *)piVar16;
                    iVar7 = iVar11;
                    if (iVar11 == *(int *)(param_3 + 0x14)) {
                      func_0x00010598df1c(param_2,iVar11,iVar11 + 1);
                      iVar7 = *param_2;
                    }
                    iVar11 = iVar7 + 1;
                    *(int *)(param_3 + 0x10) = iVar11;
                    *(undefined8 *)(*(long *)(param_3 + 0x18) + (long)iVar7 * 8) = uVar17;
                    piVar16 = piVar16 + 2;
                  } while (piVar16 != piVar3);
                }
              }
            }
            else if (iVar11 == 2) {
              if (param_2[0x23] == 0x4ec) {
                param_3 = *(ulong *)(param_2 + 0x20);
              }
              else {
                func_0x000109c819a4(param_2);
                param_2[0x23] = 0x4ec;
                param_3 = *(ulong *)(param_2 + 2);
                if ((param_3 & 1) != 0) {
                  param_3 = *(ulong *)(param_3 & 0xfffffffffffffffe);
                }
                func_0x000109cb7fb4();
                *(ulong *)(param_2 + 0x20) = param_3;
              }
              piVar3 = piStack_68;
              if (piStack_70 != piStack_68) {
                param_2 = (int *)(param_3 + 0x10);
                iVar11 = *param_2;
                piVar16 = piStack_70;
                do {
                  uVar17 = *(undefined8 *)piVar16;
                  iVar7 = iVar11;
                  if (iVar11 == *(int *)(param_3 + 0x14)) {
                    func_0x00010598df1c(param_2,iVar11,iVar11 + 1);
                    iVar7 = *param_2;
                  }
                  iVar11 = iVar7 + 1;
                  *(int *)(param_3 + 0x10) = iVar11;
                  *(undefined8 *)(*(long *)(param_3 + 0x18) + (long)iVar7 * 8) = uVar17;
                  piVar16 = piVar16 + 2;
                } while (piVar16 != piVar3);
              }
            }
            else {
              if (iVar11 != 3) goto LAB_109cf226c;
              if (param_2[0x23] == 0x4f1) {
                param_3 = *(ulong *)(param_2 + 0x20);
              }
              else {
                func_0x000109c819a4(param_2);
                param_2[0x23] = 0x4f1;
                param_3 = *(ulong *)(param_2 + 2);
                if ((param_3 & 1) != 0) {
                  param_3 = *(ulong *)(param_3 & 0xfffffffffffffffe);
                }
                func_0x000109cb7f0c();
                *(ulong *)(param_2 + 0x20) = param_3;
              }
              piVar3 = piStack_68;
              if (piStack_70 != piStack_68) {
                param_2 = (int *)(param_3 + 0x10);
                iVar11 = *param_2;
                piVar16 = piStack_70;
                do {
                  uVar17 = *(undefined8 *)piVar16;
                  iVar7 = iVar11;
                  if (iVar11 == *(int *)(param_3 + 0x14)) {
                    func_0x00010598df1c(param_2,iVar11,iVar11 + 1);
                    iVar7 = *param_2;
                  }
                  iVar11 = iVar7 + 1;
                  *(int *)(param_3 + 0x10) = iVar11;
                  *(undefined8 *)(*(long *)(param_3 + 0x18) + (long)iVar7 * 8) = uVar17;
                  piVar16 = piVar16 + 2;
                } while (piVar16 != piVar3);
              }
            }
            *(undefined1 *)(param_3 + 0x24) = 1;
            if (piStack_70 != (int *)0x0) {
              piStack_68 = piStack_70;
              __ZdlPv();
            }
          }
          if (iVar11 != 3) break;
          if (uVar10 < 4) {
            if (uVar10 < 2) {
              func_0x00010952d0c4(&UNK_10e03f968,&UNK_10f5a9c71,&UNK_10f5aa782);
              goto LAB_109cf22d4;
            }
            if (param_2[0x23] == 500) {
              uVar6 = *(ulong *)(param_2 + 0x20);
            }
            else {
              func_0x000109c819a4(param_2);
              param_2[0x23] = 500;
              uVar6 = *(ulong *)(param_2 + 2);
              if ((uVar6 & 1) != 0) {
                uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
              }
              func_0x000109cba8f4();
              *(ulong *)(param_2 + 0x20) = uVar6;
            }
            uVar9 = *(ulong *)(uVar6 + 8);
            if ((uVar9 & 1) != 0) {
              uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
            }
            func_0x00010b4bf088(uVar6 + 0x48,&DAT_10f5a8ae3,6,uVar9);
            uVar9 = *(ulong *)(uVar6 + 8);
            if ((uVar9 & 1) != 0) {
              uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
            }
            func_0x00010b4bf088(uVar6 + 0x50,&UNK_10f5aa772,0xf,uVar9);
            FUN_109ceaa3c(&piStack_70,uVar6 + 0x28,&DAT_10f5a8ac9);
            param_2 = piStack_70;
            uVar10 = *(uint *)(param_3 + 0x198);
            param_3 = (ulong)uVar10;
            if (piStack_70[0xf] != 0x1e) {
              if (piStack_70[0xf] == 0x14) {
                func_0x000107c30258(piStack_70 + 0xc);
              }
              param_2[0xf] = 0x1e;
            }
            param_2[0xc] = uVar10;
          }
          else {
            iVar11 = *(int *)(param_3 + 0x198);
            if (iVar11 < 2) {
              if (iVar11 == 0) {
                if (param_2[0x23] == 0x4f6) {
                  param_3 = *(ulong *)(param_2 + 0x20);
                }
                else {
                  func_0x000109c819a4(param_2);
                  param_2[0x23] = 0x4f6;
                  param_3 = *(ulong *)(param_2 + 2);
                  if ((param_3 & 1) != 0) {
                    param_3 = *(ulong *)(param_3 & 0xfffffffffffffffe);
                  }
                  func_0x000109cb7e64();
                  *(ulong *)(param_2 + 0x20) = param_3;
                }
                param_2 = (int *)(param_3 + 0x10);
                iVar11 = *param_2;
                iVar7 = *(int *)(param_3 + 0x14);
                if (iVar11 == iVar7) {
                  func_0x00010598df1c(param_2,iVar7,iVar7 + 1);
LAB_109cf20f8:
                  iVar11 = *param_2;
                }
              }
              else {
                if (iVar11 != 1) {
LAB_109cf22b4:
                  func_0x00010952d0c4(&UNK_10e03f968,&UNK_10f5a9c71,&UNK_10f5aa72b);
                  goto LAB_109cf22d4;
                }
                if (param_2[0x23] == 0x500) {
                  param_3 = *(ulong *)(param_2 + 0x20);
                }
                else {
                  func_0x000109c819a4(param_2);
                  param_2[0x23] = 0x500;
                  param_3 = *(ulong *)(param_2 + 2);
                  if ((param_3 & 1) != 0) {
                    param_3 = *(ulong *)(param_3 & 0xfffffffffffffffe);
                  }
                  func_0x000109cb7f60();
                  *(ulong *)(param_2 + 0x20) = param_3;
                }
                param_2 = (int *)(param_3 + 0x10);
                iVar11 = *param_2;
                iVar7 = *(int *)(param_3 + 0x14);
                if (iVar11 == iVar7) {
                  func_0x00010598df1c(param_2,iVar7,iVar7 + 1);
                  goto LAB_109cf20f8;
                }
              }
            }
            else if (iVar11 == 2) {
              if (param_2[0x23] == 0x4ec) {
                param_3 = *(ulong *)(param_2 + 0x20);
              }
              else {
                func_0x000109c819a4(param_2);
                param_2[0x23] = 0x4ec;
                param_3 = *(ulong *)(param_2 + 2);
                if ((param_3 & 1) != 0) {
                  param_3 = *(ulong *)(param_3 & 0xfffffffffffffffe);
                }
                func_0x000109cb7fb4();
                *(ulong *)(param_2 + 0x20) = param_3;
              }
              param_2 = (int *)(param_3 + 0x10);
              iVar11 = *param_2;
              iVar7 = *(int *)(param_3 + 0x14);
              if (iVar11 == iVar7) {
                func_0x00010598df1c(param_2,iVar7,iVar7 + 1);
                goto LAB_109cf20f8;
              }
            }
            else {
              if (iVar11 != 3) goto LAB_109cf22b4;
              if (param_2[0x23] == 0x4f1) {
                param_3 = *(ulong *)(param_2 + 0x20);
              }
              else {
                func_0x000109c819a4(param_2);
                param_2[0x23] = 0x4f1;
                param_3 = *(ulong *)(param_2 + 2);
                if ((param_3 & 1) != 0) {
                  param_3 = *(ulong *)(param_3 & 0xfffffffffffffffe);
                }
                func_0x000109cb7f0c();
                *(ulong *)(param_2 + 0x20) = param_3;
              }
              param_2 = (int *)(param_3 + 0x10);
              iVar11 = *param_2;
              iVar7 = *(int *)(param_3 + 0x14);
              if (iVar11 == iVar7) {
                func_0x00010598df1c(param_2,iVar7,iVar7 + 1);
                goto LAB_109cf20f8;
              }
            }
            *(int *)(param_3 + 0x10) = iVar11 + 1;
            *(undefined8 *)(*(long *)(param_3 + 0x18) + (long)iVar11 * 8) = 0xfffffffffffffffb;
            *(undefined1 *)(param_3 + 0x24) = 1;
          }
        }
        if (param_2[0x23] == 0x118) {
          uVar6 = *(ulong *)(param_2 + 0x20);
        }
        else {
          func_0x000109c819a4(param_2);
          param_2[0x23] = 0x118;
          uVar6 = *(ulong *)(param_2 + 2);
          if ((uVar6 & 1) != 0) {
            uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
          }
          func_0x000109cb80b0();
          *(ulong *)(param_2 + 0x20) = uVar6;
        }
        if (uRam00000001137e1bf8 == 0) {
LAB_109cf1b60:
          func_0x000109262df8(&UNK_10f639994);
          goto LAB_109cf22d4;
        }
        uVar9 = (ulong)*(int *)(param_3 + 0x198);
        uVar12 = uRam00000001137e1bf8 - 1;
        if ((uRam00000001137e1bf8 & uVar12) == 0) {
          uVar13 = uVar12 & uVar9;
        }
        else {
          uVar13 = uVar9;
          if (uRam00000001137e1bf8 <= uVar9) {
            uVar13 = 0;
            if (uRam00000001137e1bf8 != 0) {
              uVar13 = uVar9 / uRam00000001137e1bf8;
            }
            uVar13 = uVar9 - uVar13 * uRam00000001137e1bf8;
          }
        }
        plVar14 = *(long **)(lRam00000001137e1bf0 + uVar13 * 8);
        if (plVar14 == (long *)0x0) goto LAB_109cf1b60;
        do {
          while( true ) {
            plVar14 = (long *)*plVar14;
            if (plVar14 == (long *)0x0) goto LAB_109cf1b60;
            uVar15 = plVar14[1];
            if (uVar15 == uVar9) break;
            if ((uRam00000001137e1bf8 & uVar12) == 0) {
              uVar15 = uVar15 & uVar12;
            }
            else if (uRam00000001137e1bf8 <= uVar15) {
              uVar2 = 0;
              if (uRam00000001137e1bf8 != 0) {
                uVar2 = uVar15 / uRam00000001137e1bf8;
              }
              uVar15 = uVar15 - uVar2 * uRam00000001137e1bf8;
            }
            if (uVar15 != uVar13) goto LAB_109cf1b60;
          }
        } while (*(int *)(plVar14 + 2) != *(int *)(param_3 + 0x198));
        *(undefined4 *)(uVar6 + 0x10) = *(undefined4 *)((long)plVar14 + 0x14);
        if (uRam00000001137e1c20 == 0) {
LAB_109cf1e28:
          func_0x000109262df8(&UNK_10f639994);
          goto LAB_109cf22d4;
        }
        uVar9 = (ulong)*(int *)(param_3 + 0x19c);
        uVar12 = uRam00000001137e1c20 - 1;
        if ((uRam00000001137e1c20 & uVar12) == 0) {
          uVar13 = uVar12 & uVar9;
        }
        else {
          uVar13 = uVar9;
          if (uRam00000001137e1c20 <= uVar9) {
            uVar13 = 0;
            if (uRam00000001137e1c20 != 0) {
              uVar13 = uVar9 / uRam00000001137e1c20;
            }
            uVar13 = uVar9 - uVar13 * uRam00000001137e1c20;
          }
        }
        plVar14 = *(long **)(lRam00000001137e1c18 + uVar13 * 8);
        if (plVar14 == (long *)0x0) goto LAB_109cf1e28;
        do {
          while( true ) {
            plVar14 = (long *)*plVar14;
            if (plVar14 == (long *)0x0) goto LAB_109cf1e28;
            uVar15 = plVar14[1];
            if (uVar15 == uVar9) break;
            if ((uRam00000001137e1c20 & uVar12) == 0) {
              uVar15 = uVar15 & uVar12;
            }
            else if (uRam00000001137e1c20 <= uVar15) {
              uVar2 = 0;
              if (uRam00000001137e1c20 != 0) {
                uVar2 = uVar15 / uRam00000001137e1c20;
              }
              uVar15 = uVar15 - uVar2 * uRam00000001137e1c20;
            }
            if (uVar15 != uVar13) goto LAB_109cf1e28;
          }
        } while (*(int *)(plVar14 + 2) != *(int *)(param_3 + 0x19c));
        *(undefined4 *)(uVar6 + 0x18) = *(undefined4 *)((long)plVar14 + 0x14);
      } while( true );
    }
    puVar8 = &UNK_10f5aa2d8;
  }
  func_0x00010952d0c4(&UNK_10e03f968,&UNK_10f5a9c71,puVar8);
LAB_109cf226c:
  func_0x00010952d0c4(&UNK_10e03f968,&UNK_10f5a9c71,&UNK_10f5aa72b);
LAB_109cf22d4:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109cf22d8);
  (*pcVar5)();
}



/* Entry: 109cf2340; end: 109cf239b;  */

long * FUN_109cf2340(long *param_1)

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



/* Entry: 109cf239c; end: 109cf24e7;  */

void FUN_109cf239c(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x27;
  
  uVar4 = param_1[2];
  plVar13 = (long *)*param_1;
  if ((ulong)((long)(uVar4 - (long)plVar13) >> 3) < param_4) {
    plVar5 = param_1;
    if (plVar13 != (long *)0x0) {
      param_1[1] = (long)plVar13;
      __ZdlPv();
      uVar4 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      plVar5 = plVar13;
    }
    uVar15 = (long)uVar4 >> 2;
    if ((ulong)((long)uVar4 >> 2) <= param_4) {
      uVar15 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar15 = 0x1fffffffffffffff;
    }
    if (uVar15 >> 0x3d != 0) {
      func_0x000109c1c144();
      uRam00000001137e1bf8 = 0;
      lRam00000001137e1bf0 = 0;
      uRam00000001137e1c08 = 0;
      plRam00000001137e1c00 = (long *)0x0;
      fRam00000001137e1c10 = 1.0;
      if (uVar15 != 0) {
        uVar4 = 0;
        uVar16 = 0;
        plVar13 = plVar5 + uVar15;
        do {
          uVar15 = (ulong)(int)*plVar5;
          lVar14 = *plVar5;
          if (uVar16 != 0) {
            uVar6 = uVar16 - 1;
            if ((uVar16 & uVar6) == 0) {
              unaff_x27 = uVar6 & uVar15;
            }
            else {
              unaff_x27 = uVar15;
              if (uVar16 <= uVar15) {
                uVar9 = 0;
                if (uVar16 != 0) {
                  uVar9 = uVar15 / uVar16;
                }
                unaff_x27 = uVar15 - uVar9 * uVar16;
              }
            }
            plVar8 = *(long **)(lRam00000001137e1bf0 + unaff_x27 * 8);
            if (plVar8 != (long *)0x0) {
              do {
                while( true ) {
                  plVar8 = (long *)*plVar8;
                  if (plVar8 == (long *)0x0) goto LAB_109cf25c4;
                  uVar9 = plVar8[1];
                  if (uVar9 != uVar15) break;
                  if (*(int *)(plVar8 + 2) == (int)*plVar5) goto LAB_109cf2864;
                }
                if ((uVar16 & uVar6) == 0) {
                  uVar9 = uVar9 & uVar6;
                }
                else if (uVar16 <= uVar9) {
                  uVar12 = 0;
                  if (uVar16 != 0) {
                    uVar12 = uVar9 / uVar16;
                  }
                  uVar9 = uVar9 - uVar12 * uVar16;
                }
              } while (uVar9 == unaff_x27);
            }
          }
LAB_109cf25c4:
          plVar8 = (long *)0x18;
          __Znwm();
          *plVar8 = 0;
          plVar8[1] = uVar15;
          plVar8[2] = lVar14;
          if ((uVar16 == 0) || (fRam00000001137e1c10 * (float)uVar16 < (float)(uVar4 + 1))) {
            uVar6 = 1;
            if (2 < uVar16) {
              uVar6 = (ulong)((uVar16 & uVar16 - 1) != 0);
            }
            uVar6 = uVar6 | uVar16 << 1;
            uVar4 = (ulong)((float)(uVar4 + 1) / fRam00000001137e1c10);
            if (uVar6 <= uVar4) {
              uVar6 = uVar4;
            }
            uVar4 = uVar16;
            if (uVar6 - 1 == 0) {
              uVar6 = 2;
            }
            else if ((uVar6 & uVar6 - 1) != 0) {
              __ZNSt3__112__next_primeEm();
              uVar4 = uRam00000001137e1bf8;
            }
            if (uVar4 < uVar6) {
LAB_109cf2660:
              if (uVar6 >> 0x3d != 0) {
                func_0x000104c4f740();
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x109cf28dc);
                (*pcVar3)();
              }
              lVar14 = uVar6 << 3;
              __Znwm();
              bVar1 = lRam00000001137e1bf0 != 0;
              lRam00000001137e1bf0 = lVar14;
              if (bVar1) {
                __ZdlPv();
              }
              uVar4 = 0;
              uRam00000001137e1bf8 = uVar6;
              do {
                *(undefined8 *)(lRam00000001137e1bf0 + uVar4 * 8) = 0;
                plVar7 = plRam00000001137e1c00;
                uVar4 = uVar4 + 1;
              } while (uVar6 != uVar4);
              uVar16 = uVar6;
              if (plRam00000001137e1c00 != (long *)0x0) {
                uVar4 = plRam00000001137e1c00[1];
                uVar9 = uVar6 - 1;
                if ((uVar6 & uVar9) == 0) {
                  uVar4 = uVar4 & uVar9;
                }
                else if (uVar6 <= uVar4) {
                  uVar12 = 0;
                  if (uVar6 != 0) {
                    uVar12 = uVar4 / uVar6;
                  }
                  uVar4 = uVar4 - uVar12 * uVar6;
                }
                *(undefined8 *)(lRam00000001137e1bf0 + uVar4 * 8) = 0x1137e1c00;
                plVar10 = (long *)*plVar7;
                lVar14 = lRam00000001137e1bf0;
                while (lRam00000001137e1bf0 = lVar14, plVar10 != (long *)0x0) {
                  uVar12 = plVar10[1];
                  if ((uVar6 & uVar9) == 0) {
                    uVar12 = uVar12 & uVar9;
                  }
                  else if (uVar6 <= uVar12) {
                    uVar2 = 0;
                    if (uVar6 != 0) {
                      uVar2 = uVar12 / uVar6;
                    }
                    uVar12 = uVar12 - uVar2 * uVar6;
                  }
                  plVar11 = plVar10;
                  if (uVar12 != uVar4) {
                    if (*(long *)(lVar14 + uVar12 * 8) == 0) {
                      *(long **)(lVar14 + uVar12 * 8) = plVar7;
                      uVar4 = uVar12;
                    }
                    else {
                      *plVar7 = *plVar10;
                      *plVar10 = **(long **)(lVar14 + uVar12 * 8);
                      **(undefined8 **)(lVar14 + uVar12 * 8) = plVar10;
                      plVar11 = plVar7;
                    }
                  }
                  lVar14 = lRam00000001137e1bf0;
                  plVar7 = plVar11;
                  plVar10 = (long *)*plVar11;
                }
              }
            }
            else {
              uVar16 = uVar4;
              if (uVar6 < uVar4) {
                uVar16 = (ulong)((float)uRam00000001137e1c08 / fRam00000001137e1c10);
                if ((uVar4 < 3) || ((uVar4 & uVar4 - 1) != 0)) {
                  __ZNSt3__112__next_primeEm();
                }
                else if (1 < uVar16) {
                  uVar16 = 1L << (-LZCOUNT(uVar16 - 1) & 0x3fU);
                }
                lVar14 = lRam00000001137e1bf0;
                if (uVar6 <= uVar16) {
                  uVar6 = uVar16;
                }
                uVar16 = uRam00000001137e1bf8;
                if (uVar6 < uVar4) {
                  if (uVar6 != 0) goto LAB_109cf2660;
                  lRam00000001137e1bf0 = 0;
                  if (lVar14 != 0) {
                    __ZdlPv();
                  }
                  uRam00000001137e1bf8 = 0;
                  uVar16 = 0;
                }
              }
            }
            if ((uVar16 & uVar16 - 1) == 0) {
              unaff_x27 = uVar16 - 1 & uVar15;
            }
            else {
              unaff_x27 = uVar15;
              if (uVar16 <= uVar15) {
                uVar4 = 0;
                if (uVar16 != 0) {
                  uVar4 = uVar15 / uVar16;
                }
                unaff_x27 = uVar15 - uVar4 * uVar16;
              }
            }
          }
          lVar14 = lRam00000001137e1bf0;
          plVar7 = *(long **)(lRam00000001137e1bf0 + unaff_x27 * 8);
          if (plVar7 == (long *)0x0) {
            *plVar8 = (long)plRam00000001137e1c00;
            plRam00000001137e1c00 = plVar8;
            *(undefined8 *)(lVar14 + unaff_x27 * 8) = 0x1137e1c00;
            if (*plVar8 != 0) {
              uVar4 = *(ulong *)(*plVar8 + 8);
              if ((uVar16 & uVar16 - 1) == 0) {
                uVar4 = uVar4 & uVar16 - 1;
              }
              else if (uVar16 <= uVar4) {
                uVar15 = 0;
                if (uVar16 != 0) {
                  uVar15 = uVar4 / uVar16;
                }
                uVar4 = uVar4 - uVar15 * uVar16;
              }
              plVar7 = (long *)(lRam00000001137e1bf0 + uVar4 * 8);
              goto LAB_109cf2854;
            }
          }
          else {
            *plVar8 = *plVar7;
LAB_109cf2854:
            *plVar7 = (long)plVar8;
          }
          uVar4 = uRam00000001137e1c08 + 1;
          uRam00000001137e1c08 = uVar4;
LAB_109cf2864:
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar13);
      }
      return;
    }
    plVar13 = param_1;
    func_0x000109c1c158();
    *param_1 = (long)plVar13;
    param_1[2] = (long)(plVar13 + uVar15);
    plVar5 = plVar13;
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *plVar5 = *param_2;
      plVar13 = plVar13 + 1;
      plVar5 = plVar5 + 1;
    }
    param_1[1] = (long)plVar13;
  }
  else {
    plVar5 = (long *)param_1[1];
    if ((ulong)((long)plVar5 - (long)plVar13 >> 3) < param_4) {
      plVar7 = (long *)((long)param_2 + ((long)plVar5 - (long)plVar13));
      plVar8 = plVar5;
      if (plVar5 != plVar13) {
        _memmove(plVar13,param_2);
        plVar5 = (long *)param_1[1];
        plVar8 = plVar5;
      }
      for (; plVar7 != param_3; plVar7 = plVar7 + 1) {
        *plVar5 = *plVar7;
        plVar5 = plVar5 + 1;
        plVar8 = plVar8 + 1;
      }
    }
    else {
      lVar14 = (long)param_3 - (long)param_2;
      if (lVar14 != 0) {
        _memmove(plVar13,param_2,lVar14);
      }
      plVar8 = (long *)((long)plVar13 + lVar14);
    }
    param_1[1] = (long)plVar8;
  }
  return;
}



/* Entry: 109cf24e8; end: 109cf2907;  */

void FUN_109cf24e8(long *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x27;
  
  uRam00000001137e1bf8 = 0;
  lRam00000001137e1bf0 = 0;
  uRam00000001137e1c08 = 0;
  plRam00000001137e1c00 = (long *)0x0;
  fRam00000001137e1c10 = 1.0;
  if (param_2 != 0) {
    uVar12 = 0;
    uVar15 = 0;
    plVar1 = param_1 + param_2;
    do {
      uVar14 = (ulong)(int)*param_1;
      lVar13 = *param_1;
      if (uVar15 != 0) {
        uVar5 = uVar15 - 1;
        if ((uVar15 & uVar5) == 0) {
          unaff_x27 = uVar5 & uVar14;
        }
        else {
          unaff_x27 = uVar14;
          if (uVar15 <= uVar14) {
            uVar8 = 0;
            if (uVar15 != 0) {
              uVar8 = uVar14 / uVar15;
            }
            unaff_x27 = uVar14 - uVar8 * uVar15;
          }
        }
        plVar7 = *(long **)(lRam00000001137e1bf0 + unaff_x27 * 8);
        if (plVar7 != (long *)0x0) {
          do {
            while( true ) {
              plVar7 = (long *)*plVar7;
              if (plVar7 == (long *)0x0) goto LAB_109cf25c4;
              uVar8 = plVar7[1];
              if (uVar8 != uVar14) break;
              if (*(int *)(plVar7 + 2) == (int)*param_1) goto LAB_109cf2864;
            }
            if ((uVar15 & uVar5) == 0) {
              uVar8 = uVar8 & uVar5;
            }
            else if (uVar15 <= uVar8) {
              uVar11 = 0;
              if (uVar15 != 0) {
                uVar11 = uVar8 / uVar15;
              }
              uVar8 = uVar8 - uVar11 * uVar15;
            }
          } while (uVar8 == unaff_x27);
        }
      }
LAB_109cf25c4:
      plVar7 = (long *)0x18;
      __Znwm();
      *plVar7 = 0;
      plVar7[1] = uVar14;
      plVar7[2] = lVar13;
      if ((uVar15 == 0) || (fRam00000001137e1c10 * (float)uVar15 < (float)(uVar12 + 1))) {
        uVar5 = 1;
        if (2 < uVar15) {
          uVar5 = (ulong)((uVar15 & uVar15 - 1) != 0);
        }
        uVar5 = uVar5 | uVar15 << 1;
        uVar12 = (ulong)((float)(uVar12 + 1) / fRam00000001137e1c10);
        if (uVar5 <= uVar12) {
          uVar5 = uVar12;
        }
        uVar12 = uVar15;
        if (uVar5 - 1 == 0) {
          uVar5 = 2;
        }
        else if ((uVar5 & uVar5 - 1) != 0) {
          __ZNSt3__112__next_primeEm();
          uVar12 = uRam00000001137e1bf8;
        }
        if (uVar12 < uVar5) {
LAB_109cf2660:
          if (uVar5 >> 0x3d != 0) {
            func_0x000104c4f740();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x109cf28dc);
            (*pcVar4)();
          }
          lVar13 = uVar5 << 3;
          __Znwm();
          bVar2 = lRam00000001137e1bf0 != 0;
          lRam00000001137e1bf0 = lVar13;
          if (bVar2) {
            __ZdlPv();
          }
          uVar12 = 0;
          uRam00000001137e1bf8 = uVar5;
          do {
            *(undefined8 *)(lRam00000001137e1bf0 + uVar12 * 8) = 0;
            plVar6 = plRam00000001137e1c00;
            uVar12 = uVar12 + 1;
          } while (uVar5 != uVar12);
          uVar15 = uVar5;
          if (plRam00000001137e1c00 != (long *)0x0) {
            uVar12 = plRam00000001137e1c00[1];
            uVar8 = uVar5 - 1;
            if ((uVar5 & uVar8) == 0) {
              uVar12 = uVar12 & uVar8;
            }
            else if (uVar5 <= uVar12) {
              uVar11 = 0;
              if (uVar5 != 0) {
                uVar11 = uVar12 / uVar5;
              }
              uVar12 = uVar12 - uVar11 * uVar5;
            }
            *(undefined8 *)(lRam00000001137e1bf0 + uVar12 * 8) = 0x1137e1c00;
            plVar9 = (long *)*plVar6;
            lVar13 = lRam00000001137e1bf0;
            while (lRam00000001137e1bf0 = lVar13, plVar9 != (long *)0x0) {
              uVar11 = plVar9[1];
              if ((uVar5 & uVar8) == 0) {
                uVar11 = uVar11 & uVar8;
              }
              else if (uVar5 <= uVar11) {
                uVar3 = 0;
                if (uVar5 != 0) {
                  uVar3 = uVar11 / uVar5;
                }
                uVar11 = uVar11 - uVar3 * uVar5;
              }
              plVar10 = plVar9;
              if (uVar11 != uVar12) {
                if (*(long *)(lVar13 + uVar11 * 8) == 0) {
                  *(long **)(lVar13 + uVar11 * 8) = plVar6;
                  uVar12 = uVar11;
                }
                else {
                  *plVar6 = *plVar9;
                  *plVar9 = **(long **)(lVar13 + uVar11 * 8);
                  **(undefined8 **)(lVar13 + uVar11 * 8) = plVar9;
                  plVar10 = plVar6;
                }
              }
              lVar13 = lRam00000001137e1bf0;
              plVar6 = plVar10;
              plVar9 = (long *)*plVar10;
            }
          }
        }
        else {
          uVar15 = uVar12;
          if (uVar5 < uVar12) {
            uVar15 = (ulong)((float)uRam00000001137e1c08 / fRam00000001137e1c10);
            if ((uVar12 < 3) || ((uVar12 & uVar12 - 1) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if (1 < uVar15) {
              uVar15 = 1L << (-LZCOUNT(uVar15 - 1) & 0x3fU);
            }
            lVar13 = lRam00000001137e1bf0;
            if (uVar5 <= uVar15) {
              uVar5 = uVar15;
            }
            uVar15 = uRam00000001137e1bf8;
            if (uVar5 < uVar12) {
              if (uVar5 != 0) goto LAB_109cf2660;
              lRam00000001137e1bf0 = 0;
              if (lVar13 != 0) {
                __ZdlPv();
              }
              uRam00000001137e1bf8 = 0;
              uVar15 = 0;
            }
          }
        }
        if ((uVar15 & uVar15 - 1) == 0) {
          unaff_x27 = uVar15 - 1 & uVar14;
        }
        else {
          unaff_x27 = uVar14;
          if (uVar15 <= uVar14) {
            uVar12 = 0;
            if (uVar15 != 0) {
              uVar12 = uVar14 / uVar15;
            }
            unaff_x27 = uVar14 - uVar12 * uVar15;
          }
        }
      }
      lVar13 = lRam00000001137e1bf0;
      plVar6 = *(long **)(lRam00000001137e1bf0 + unaff_x27 * 8);
      if (plVar6 == (long *)0x0) {
        *plVar7 = (long)plRam00000001137e1c00;
        plRam00000001137e1c00 = plVar7;
        *(undefined8 *)(lVar13 + unaff_x27 * 8) = 0x1137e1c00;
        if (*plVar7 != 0) {
          uVar12 = *(ulong *)(*plVar7 + 8);
          if ((uVar15 & uVar15 - 1) == 0) {
            uVar12 = uVar12 & uVar15 - 1;
          }
          else if (uVar15 <= uVar12) {
            uVar14 = 0;
            if (uVar15 != 0) {
              uVar14 = uVar12 / uVar15;
            }
            uVar12 = uVar12 - uVar14 * uVar15;
          }
          plVar6 = (long *)(lRam00000001137e1bf0 + uVar12 * 8);
          goto LAB_109cf2854;
        }
      }
      else {
        *plVar7 = *plVar6;
LAB_109cf2854:
        *plVar6 = (long)plVar7;
      }
      uVar12 = uRam00000001137e1c08 + 1;
      uRam00000001137e1c08 = uVar12;
LAB_109cf2864:
      param_1 = param_1 + 1;
    } while (param_1 != plVar1);
  }
  return;
}



/* Entry: 109cf2908; end: 109cf294f;  */

long * FUN_109cf2908(long *param_1)

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



/* Entry: 109cf2950; end: 109cf2d6f;  */

void FUN_109cf2950(long *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x27;
  
  uRam00000001137e1c20 = 0;
  lRam00000001137e1c18 = 0;
  uRam00000001137e1c30 = 0;
  plRam00000001137e1c28 = (long *)0x0;
  fRam00000001137e1c38 = 1.0;
  if (param_2 != 0) {
    uVar12 = 0;
    uVar15 = 0;
    plVar1 = param_1 + param_2;
    do {
      uVar14 = (ulong)(int)*param_1;
      lVar13 = *param_1;
      if (uVar15 != 0) {
        uVar5 = uVar15 - 1;
        if ((uVar15 & uVar5) == 0) {
          unaff_x27 = uVar5 & uVar14;
        }
        else {
          unaff_x27 = uVar14;
          if (uVar15 <= uVar14) {
            uVar8 = 0;
            if (uVar15 != 0) {
              uVar8 = uVar14 / uVar15;
            }
            unaff_x27 = uVar14 - uVar8 * uVar15;
          }
        }
        plVar7 = *(long **)(lRam00000001137e1c18 + unaff_x27 * 8);
        if (plVar7 != (long *)0x0) {
          do {
            while( true ) {
              plVar7 = (long *)*plVar7;
              if (plVar7 == (long *)0x0) goto LAB_109cf2a2c;
              uVar8 = plVar7[1];
              if (uVar8 != uVar14) break;
              if (*(int *)(plVar7 + 2) == (int)*param_1) goto LAB_109cf2ccc;
            }
            if ((uVar15 & uVar5) == 0) {
              uVar8 = uVar8 & uVar5;
            }
            else if (uVar15 <= uVar8) {
              uVar11 = 0;
              if (uVar15 != 0) {
                uVar11 = uVar8 / uVar15;
              }
              uVar8 = uVar8 - uVar11 * uVar15;
            }
          } while (uVar8 == unaff_x27);
        }
      }
LAB_109cf2a2c:
      plVar7 = (long *)0x18;
      __Znwm();
      *plVar7 = 0;
      plVar7[1] = uVar14;
      plVar7[2] = lVar13;
      if ((uVar15 == 0) || (fRam00000001137e1c38 * (float)uVar15 < (float)(uVar12 + 1))) {
        uVar5 = 1;
        if (2 < uVar15) {
          uVar5 = (ulong)((uVar15 & uVar15 - 1) != 0);
        }
        uVar5 = uVar5 | uVar15 << 1;
        uVar12 = (ulong)((float)(uVar12 + 1) / fRam00000001137e1c38);
        if (uVar5 <= uVar12) {
          uVar5 = uVar12;
        }
        uVar12 = uVar15;
        if (uVar5 - 1 == 0) {
          uVar5 = 2;
        }
        else if ((uVar5 & uVar5 - 1) != 0) {
          __ZNSt3__112__next_primeEm();
          uVar12 = uRam00000001137e1c20;
        }
        if (uVar12 < uVar5) {
LAB_109cf2ac8:
          if (uVar5 >> 0x3d != 0) {
            func_0x000104c4f740();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x109cf2d44);
            (*pcVar4)();
          }
          lVar13 = uVar5 << 3;
          __Znwm();
          bVar2 = lRam00000001137e1c18 != 0;
          lRam00000001137e1c18 = lVar13;
          if (bVar2) {
            __ZdlPv();
          }
          uVar12 = 0;
          uRam00000001137e1c20 = uVar5;
          do {
            *(undefined8 *)(lRam00000001137e1c18 + uVar12 * 8) = 0;
            plVar6 = plRam00000001137e1c28;
            uVar12 = uVar12 + 1;
          } while (uVar5 != uVar12);
          uVar15 = uVar5;
          if (plRam00000001137e1c28 != (long *)0x0) {
            uVar12 = plRam00000001137e1c28[1];
            uVar8 = uVar5 - 1;
            if ((uVar5 & uVar8) == 0) {
              uVar12 = uVar12 & uVar8;
            }
            else if (uVar5 <= uVar12) {
              uVar11 = 0;
              if (uVar5 != 0) {
                uVar11 = uVar12 / uVar5;
              }
              uVar12 = uVar12 - uVar11 * uVar5;
            }
            *(undefined8 *)(lRam00000001137e1c18 + uVar12 * 8) = 0x1137e1c28;
            plVar9 = (long *)*plVar6;
            lVar13 = lRam00000001137e1c18;
            while (lRam00000001137e1c18 = lVar13, plVar9 != (long *)0x0) {
              uVar11 = plVar9[1];
              if ((uVar5 & uVar8) == 0) {
                uVar11 = uVar11 & uVar8;
              }
              else if (uVar5 <= uVar11) {
                uVar3 = 0;
                if (uVar5 != 0) {
                  uVar3 = uVar11 / uVar5;
                }
                uVar11 = uVar11 - uVar3 * uVar5;
              }
              plVar10 = plVar9;
              if (uVar11 != uVar12) {
                if (*(long *)(lVar13 + uVar11 * 8) == 0) {
                  *(long **)(lVar13 + uVar11 * 8) = plVar6;
                  uVar12 = uVar11;
                }
                else {
                  *plVar6 = *plVar9;
                  *plVar9 = **(long **)(lVar13 + uVar11 * 8);
                  **(undefined8 **)(lVar13 + uVar11 * 8) = plVar9;
                  plVar10 = plVar6;
                }
              }
              lVar13 = lRam00000001137e1c18;
              plVar6 = plVar10;
              plVar9 = (long *)*plVar10;
            }
          }
        }
        else {
          uVar15 = uVar12;
          if (uVar5 < uVar12) {
            uVar15 = (ulong)((float)uRam00000001137e1c30 / fRam00000001137e1c38);
            if ((uVar12 < 3) || ((uVar12 & uVar12 - 1) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if (1 < uVar15) {
              uVar15 = 1L << (-LZCOUNT(uVar15 - 1) & 0x3fU);
            }
            lVar13 = lRam00000001137e1c18;
            if (uVar5 <= uVar15) {
              uVar5 = uVar15;
            }
            uVar15 = uRam00000001137e1c20;
            if (uVar5 < uVar12) {
              if (uVar5 != 0) goto LAB_109cf2ac8;
              lRam00000001137e1c18 = 0;
              if (lVar13 != 0) {
                __ZdlPv();
              }
              uRam00000001137e1c20 = 0;
              uVar15 = 0;
            }
          }
        }
        if ((uVar15 & uVar15 - 1) == 0) {
          unaff_x27 = uVar15 - 1 & uVar14;
        }
        else {
          unaff_x27 = uVar14;
          if (uVar15 <= uVar14) {
            uVar12 = 0;
            if (uVar15 != 0) {
              uVar12 = uVar14 / uVar15;
            }
            unaff_x27 = uVar14 - uVar12 * uVar15;
          }
        }
      }
      lVar13 = lRam00000001137e1c18;
      plVar6 = *(long **)(lRam00000001137e1c18 + unaff_x27 * 8);
      if (plVar6 == (long *)0x0) {
        *plVar7 = (long)plRam00000001137e1c28;
        plRam00000001137e1c28 = plVar7;
        *(undefined8 *)(lVar13 + unaff_x27 * 8) = 0x1137e1c28;
        if (*plVar7 != 0) {
          uVar12 = *(ulong *)(*plVar7 + 8);
          if ((uVar15 & uVar15 - 1) == 0) {
            uVar12 = uVar12 & uVar15 - 1;
          }
          else if (uVar15 <= uVar12) {
            uVar14 = 0;
            if (uVar15 != 0) {
              uVar14 = uVar12 / uVar15;
            }
            uVar12 = uVar12 - uVar14 * uVar15;
          }
          plVar6 = (long *)(lRam00000001137e1c18 + uVar12 * 8);
          goto LAB_109cf2cbc;
        }
      }
      else {
        *plVar7 = *plVar6;
LAB_109cf2cbc:
        *plVar6 = (long)plVar7;
      }
      uVar12 = uRam00000001137e1c30 + 1;
      uRam00000001137e1c30 = uVar12;
LAB_109cf2ccc:
      param_1 = param_1 + 1;
    } while (param_1 != plVar1);
  }
  return;
}



/* Entry: 109cf2d70; end: 109cf2db7;  */

long * FUN_109cf2d70(long *param_1)

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



/* Entry: 109cf2db8; end: 109cf2dff;  */

undefined1  [16] FUN_109cf2db8(undefined8 *param_1,long param_2)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = param_1[1];
  if ((*(byte *)(param_2 + 0x12) >> 2 & 1) == 0) {
    uVar2 = NEON_ucvtf(*param_1,4);
    fVar1 = (float)(int)((float)*(undefined8 *)(param_2 + 0x1c0) * (float)uVar2);
    fVar3 = (float)(int)((float)((ulong)*(undefined8 *)(param_2 + 0x1c0) >> 0x20) *
                        (float)((ulong)uVar2 >> 0x20));
  }
  else {
    uVar2 = NEON_ucvtf(*param_1,4);
    fVar3 = (float)*(undefined8 *)(param_2 + 0x150);
    fVar1 = (float)uVar2 * fVar3;
    fVar3 = (float)((ulong)uVar2 >> 0x20) * fVar3;
  }
  auVar4._4_4_ = (int)fVar3;
  auVar4._0_4_ = (int)fVar1;
  return auVar4;
}



/* Entry: 109cf2e00; end: 109cf30f3;  */

void FUN_109cf2e00(undefined8 param_1,long param_2,long param_3,undefined8 param_4,uint *param_5)

{
  ulong *puVar1;
  float fVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  float fVar13;
  
  fVar13 = *(float *)(param_3 + 0x1c0);
  fVar2 = *(float *)(param_3 + 0x1c4);
  if ((*(uint *)(param_3 + 0x10) & 0x40000) != 0) {
    fVar13 = *(float *)(param_3 + 0x150);
    fVar2 = *(float *)(param_3 + 0x150);
  }
  if ((fVar2 <= 0.0) || (fVar13 <= 0.0)) {
    puVar6 = &UNK_10f5aa7a6;
  }
  else {
    uVar3 = param_5[0x28];
    uVar10 = *(ulong *)(param_2 + 0x28);
    puVar1 = (ulong *)(param_2 + 0x28);
    if ((uVar10 & 1) != 0) {
      puVar1 = (ulong *)(uVar10 + 7);
    }
    FUN_109cf8a0c(param_5,*puVar1);
    uVar8 = *(uint *)(param_3 + 0x1f8);
    if ((*(char *)(param_3 + 0x1a5) == '\x01') && (uVar8 == 1)) {
      if (2 < (byte)uVar3) {
        if (*(int *)(param_2 + 0x8c) == 0xd3) {
          uVar10 = *(ulong *)(param_2 + 0x80);
        }
        else {
          func_0x000109c819a4(param_2);
          *(undefined4 *)(param_2 + 0x8c) = 0xd3;
          uVar10 = *(ulong *)(param_2 + 8);
          if ((uVar10 & 1) != 0) {
            uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
          }
          func_0x000109cba1cc();
          *(ulong *)(param_2 + 0x80) = uVar10;
        }
        uVar3 = param_5[1];
        piVar12 = (int *)(uVar10 + 0x18);
        iVar9 = *piVar12;
        iVar5 = *(int *)(uVar10 + 0x1c);
        if (iVar9 == iVar5) {
          func_0x0001087675dc(piVar12,iVar5,iVar5 + 1);
          iVar9 = *(int *)(uVar10 + 0x18);
          iVar5 = *(int *)(uVar10 + 0x1c);
        }
        lVar11 = *(long *)(uVar10 + 0x20);
        iVar7 = iVar9 + 1;
        *(int *)(uVar10 + 0x18) = iVar7;
        *(ulong *)(lVar11 + (long)iVar9 * 8) = (ulong)uVar3;
        uVar3 = *param_5;
        if (iVar7 == iVar5) {
          func_0x0001087675dc(piVar12,iVar5,iVar5 + 1);
          iVar7 = *(int *)(uVar10 + 0x18);
          lVar11 = *(long *)(uVar10 + 0x20);
        }
        *(int *)(uVar10 + 0x18) = iVar7 + 1;
        *(ulong *)(lVar11 + (long)iVar7 * 8) = (ulong)uVar3;
        *(uint *)(uVar10 + 0x10) = *(uint *)(uVar10 + 0x10) | 1;
        uVar4 = *(ulong *)(uVar10 + 0x30);
        if (uVar4 == 0) {
          uVar4 = *(ulong *)(uVar10 + 8);
          if ((uVar4 & 1) != 0) {
            uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
          }
          func_0x000109cb7b1c();
          *(ulong *)(uVar10 + 0x30) = uVar4;
        }
        *(undefined4 *)(uVar4 + 0x10) = 0;
        return;
      }
      puVar6 = &UNK_10f5aa7ed;
    }
    else if ((0.001 <= ABS(fVar2 - (float)(ulong)(long)(fVar2 + 0.001))) ||
            (0.001 <= ABS(fVar13 - (float)(ulong)(long)(fVar13 + 0.001)))) {
      puVar6 = &UNK_10f5aa833;
    }
    else {
      if (*(int *)(param_2 + 0x8c) == 0xd2) {
        uVar10 = *(ulong *)(param_2 + 0x80);
      }
      else {
        func_0x000109c819a4(param_2);
        *(undefined4 *)(param_2 + 0x8c) = 0xd2;
        uVar10 = *(ulong *)(param_2 + 8);
        if ((uVar10 & 1) != 0) {
          uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
        }
        func_0x000109cb7240();
        *(ulong *)(param_2 + 0x80) = uVar10;
        uVar8 = *(uint *)(param_3 + 0x1f8);
      }
      if (uVar8 < 2) {
        piVar12 = (int *)(uVar10 + 0x10);
        iVar9 = *piVar12;
        *(uint *)(uVar10 + 0x38) = uVar8;
        iVar5 = *(int *)(uVar10 + 0x14);
        if (iVar9 == iVar5) {
          func_0x0001087675dc(piVar12,iVar5,iVar5 + 1);
          iVar9 = *(int *)(uVar10 + 0x10);
          iVar5 = *(int *)(uVar10 + 0x14);
        }
        lVar11 = *(long *)(uVar10 + 0x18);
        iVar7 = iVar9 + 1;
        *(int *)(uVar10 + 0x10) = iVar7;
        *(long *)(lVar11 + (long)iVar9 * 8) = (long)(fVar2 + 0.001);
        if (iVar7 == iVar5) {
          func_0x0001087675dc(piVar12,iVar5,iVar5 + 1);
          iVar7 = *(int *)(uVar10 + 0x10);
          lVar11 = *(long *)(uVar10 + 0x18);
        }
        *piVar12 = iVar7 + 1;
        *(long *)(lVar11 + (long)iVar7 * 8) = (long)(fVar13 + 0.001);
        return;
      }
      puVar6 = &UNK_10f5aa8c1;
    }
  }
  func_0x00010952d0c4(&UNK_10e03fa30,&UNK_10f5a9c71,puVar6);
  return;
}



/* Entry: 109cf30f4; end: 109cf3143;  */

void FUN_109cf30f4(void)

{
  return;
}



/* Entry: 109cf3144; end: 109cf3197;  */

void FUN_109cf3144(undefined8 param_1,long param_2)

{
  ulong uVar1;
  
  if (*(int *)(param_2 + 0x8c) != 0x532) {
    func_0x000109c819a4(param_2);
    *(undefined4 *)(param_2 + 0x8c) = 0x532;
    uVar1 = *(ulong *)(param_2 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000109cb71f8();
    *(ulong *)(param_2 + 0x80) = uVar1;
  }
  return;
}



/* Entry: 109cf3198; end: 109cf31bf;  */

void FUN_109cf3198(void)

{
  return;
}


