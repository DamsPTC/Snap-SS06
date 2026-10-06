/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a8abfd4; end: 10a8ac02f;  */

long * FUN_10a8abfd4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a8ac030(plVar1 + 2);
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



/* Entry: 10a8ac030; end: 10a8ac073;  */

void FUN_10a8ac030(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a8ac074; end: 10a8ac47f;  */

long * FUN_10a8ac074(long *param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000107c2b05c();
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
          func_0x000107c2b068(param_1,plVar5 + 2,param_2);
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
  plVar6 = (long *)*param_3;
  plVar5 = (long *)0x40;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = (long)plVar8;
  if (*(char *)((long)plVar6 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5 + 2,*plVar6,plVar6[1]);
  }
  else {
    lVar4 = plVar6[1];
    lVar3 = *plVar6;
    plVar5[4] = plVar6[2];
    plVar5[3] = lVar4;
    plVar5[2] = lVar3;
  }
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_10a8ac390;
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
LAB_10a8ac218:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000109ffded8();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a8ac468);
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
      if (plVar6 != (long *)0x0) goto LAB_10a8ac218;
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
LAB_10a8ac390:
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



/* Entry: 10a8ac480; end: 10a8ac50f;  */

void FUN_10a8ac480(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a8ac030(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a8ac510; end: 10a8ac51f;  */

void FUN_10a8ac510(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c252b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a8ac520; end: 10a8ac53f;  */

void FUN_10a8ac520(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c252b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8ac540; end: 10a8ac54f;  */

void FUN_10a8ac540(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a8ac548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a8ac550; end: 10a8ace23;  */

/* WARNING: Type propagation algorithm not settling */

undefined ** FUN_10a8ac550(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined *****pppppuVar2;
  undefined ********ppppppppuVar3;
  undefined ********ppppppppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined ********ppppppppuVar7;
  byte bVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  undefined ********ppppppppuVar12;
  undefined ******ppppppuVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  undefined ********ppppppppuVar16;
  undefined *******pppppppuVar17;
  undefined *******pppppppuVar18;
  undefined *****pppppuVar19;
  undefined ******ppppppuVar20;
  undefined ********ppppppppuVar21;
  undefined ******unaff_x22;
  undefined ********ppppppppuVar22;
  undefined ********ppppppppuStack_170;
  undefined ********ppppppppuStack_168;
  undefined ******ppppppuStack_160;
  undefined ********ppppppppuStack_158;
  undefined ********ppppppppuStack_150;
  undefined ********ppppppppuStack_148;
  undefined ******ppppppuStack_140;
  undefined ********ppppppppuStack_138;
  undefined *******pppppppuStack_130;
  undefined ********ppppppppuStack_128;
  undefined ********ppppppppuStack_120;
  undefined ********ppppppppuStack_118;
  undefined ********ppppppppuStack_110;
  undefined ********ppppppppuStack_108;
  undefined8 uStack_100;
  undefined ********ppppppppuStack_f8;
  undefined ******ppppppuStack_f0;
  undefined ********ppppppppuStack_e8;
  undefined8 uStack_e0;
  undefined ********ppppppppuStack_d8;
  undefined8 uStack_d0;
  undefined ********ppppppppuStack_c8;
  undefined ******ppppppuStack_c0;
  undefined ********ppppppppuStack_b8;
  undefined *****pppppuStack_b0;
  undefined ********ppppppppuStack_a8;
  undefined8 *puStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppppuStack_168 = (undefined ********)param_1[1];
  ppppppppuVar22 = (undefined ********)*param_1;
  *param_1 = 0;
  param_1[1] = 0;
  pppppppuStack_130 = ppppppppuVar22[0xae];
  ppppppppuVar21 = (undefined ********)ppppppppuVar22[0xaf];
  if (ppppppppuVar21 != (undefined ********)0x0) {
    ppppppppuVar12 = ppppppppuVar21 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
      if (bVar10) {
        *ppppppppuVar12 = (undefined *******)((long)*ppppppppuVar12 + 1);
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  pppppppuVar17 = *(undefined ********)(param_2 + 0x10);
  ppppppppuVar12 = (undefined ********)(pppppppuStack_130 + 0xc);
  ppppppppuStack_170 = ppppppppuVar22;
  ppppppppuStack_128 = ppppppppuVar21;
  FUN_10a8aaad4();
  if (ppppppppuVar12 == (undefined ********)0x0) {
    ppuVar14 = &PTR_PTR_113303f20;
    FUN_10ae079a0();
    FUN_10ae07cd4(ppuVar14,&PTR_PTR_113303f20);
    goto joined_r0x00010a8ac61c;
  }
  ppppppuStack_140 = ppppppppuVar12[4][9];
  ppppppppuStack_138 = (undefined ********)ppppppppuVar12[4][10];
  if (ppppppppuStack_138 != (undefined ********)0x0) {
    ppppppppuVar21 = ppppppppuStack_138 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar21,0x10);
      if (bVar10) {
        *ppppppppuVar21 = (undefined *******)((long)*ppppppppuVar21 + 1);
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  cVar9 = *(char *)((long)ppppppuStack_140 + 0x47);
  ppppppuVar20 = (undefined ******)(long)cVar9;
  if ((long)ppppppuVar20 < 0) {
    if (ppppppuStack_140[7] != (undefined *****)0x0) goto LAB_10a8ac62c;
LAB_10a8ac678:
    pppppppuVar18 = ppppppppuVar22[0xae];
    ppppppppuVar21 = (undefined ********)ppppppppuVar22[0xaf];
    if (ppppppppuVar21 == (undefined ********)0x0) {
      ppuVar14 = (undefined **)&ppppppppuStack_120;
      pppppppuVar17 = ppppppppuVar12[4] + 3;
      FUN_10a8ace60(ppuVar14,pppppppuVar17,pppppppuVar18[6]);
    }
    else {
      ppppppppuVar22 = ppppppppuVar21 + 1;
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar22,0x10);
        if (bVar10) {
          *ppppppppuVar22 = (undefined *******)((long)*ppppppppuVar22 + 1);
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      ppuVar14 = (undefined **)&ppppppppuStack_120;
      pppppppuVar17 = ppppppppuVar12[4] + 3;
      FUN_10a8ace60(ppuVar14,pppppppuVar17,pppppppuVar18[6]);
      do {
        pppppppuVar18 = *ppppppppuVar22;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar22,0x10);
        if (bVar10) {
          *ppppppppuVar22 = (undefined *******)((long)pppppppuVar18 + -1);
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (pppppppuVar18 == (undefined *******)0x0) {
        (*(code *)(*ppppppppuVar21)[2])(ppppppppuVar21);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar14 = (undefined **)ppppppppuVar21;
      }
    }
    ppppppppuVar21 = ppppppppuStack_118;
    if ((char)uStack_100 == '\x01') {
      ppppppppuStack_150 = ppppppppuStack_120;
      ppppppppuStack_148 = ppppppppuStack_118;
      if (ppppppppuStack_118 != (undefined ********)0x0) {
        ppppppppuVar22 = ppppppppuStack_118 + 1;
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar22,0x10);
          if (bVar10) {
            *ppppppppuVar22 = (undefined *******)((long)*ppppppppuVar22 + 1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      ppuVar14 = (undefined **)ppppppppuStack_120;
      if (ppppppppuStack_120 != (undefined ********)0x0) {
        pppppppuVar17 = (undefined *******)(param_2 + 0x10);
        FUN_10a5a2038();
      }
      if (ppppppppuVar21 != (undefined ********)0x0) {
        ppppppppuVar22 = ppppppppuVar21 + 1;
        do {
          pppppppuVar18 = *ppppppppuVar22;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar22,0x10);
          if (bVar10) {
            *ppppppppuVar22 = (undefined *******)((long)pppppppuVar18 + -1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (pppppppuVar18 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuVar21)[2])(ppppppppuVar21);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar14 = (undefined **)ppppppppuVar21;
        }
      }
    }
    ppppppppuVar21 = ppppppppuStack_108;
    ppppppppuVar22 = ppppppppuStack_170;
    if ((char)uStack_100 == '\x01') {
      if (ppppppppuStack_108 != (undefined ********)0x0) {
        ppppppppuVar22 = ppppppppuStack_108 + 1;
        do {
          pppppppuVar18 = *ppppppppuVar22;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar22,0x10);
          if (bVar10) {
            *ppppppppuVar22 = (undefined *******)((long)pppppppuVar18 + -1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (pppppppuVar18 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuStack_108)[2])(ppppppppuStack_108);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar14 = (undefined **)ppppppppuVar21;
        }
      }
      ppppppppuVar21 = ppppppppuStack_118;
      ppppppppuVar22 = ppppppppuStack_170;
      if (ppppppppuStack_118 != (undefined ********)0x0) {
        ppppppppuVar12 = ppppppppuStack_118 + 1;
        do {
          pppppppuVar18 = *ppppppppuVar12;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
          if (bVar10) {
            *ppppppppuVar12 = (undefined *******)((long)pppppppuVar18 + -1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (pppppppuVar18 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuStack_118)[2])(ppppppppuStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar14 = (undefined **)ppppppppuVar21;
          ppppppppuVar22 = ppppppppuStack_170;
        }
      }
    }
  }
  else {
    if (ppppppuVar20 == (undefined ******)0x0) goto LAB_10a8ac678;
LAB_10a8ac62c:
    pppppppuVar18 = ppppppppuVar22[0x46];
    ppppppuVar13 = (undefined ******)ppppppuStack_140[7];
    if (-1 < cVar9) {
      ppppppuVar13 = ppppppuVar20;
    }
    bVar8 = *(byte *)((long)pppppppuVar18 + 0x47);
    ppppppuVar20 = pppppppuVar18[7];
    if (-1 < (char)bVar8) {
      ppppppuVar20 = (undefined ******)(ulong)bVar8;
    }
    ppuVar14 = (undefined **)ppppppppuVar12;
    if (ppppppuVar13 == ppppppuVar20) {
      ppuVar14 = (undefined **)ppppppuStack_140[6];
      if (-1 < cVar9) {
        ppuVar14 = (undefined **)(ppppppuStack_140 + 6);
      }
      pppppppuVar17 = (undefined *******)pppppppuVar18[6];
      if (-1 < (char)bVar8) {
        pppppppuVar17 = pppppppuVar18 + 6;
      }
      _memcmp();
      if ((int)ppuVar14 == 0) goto LAB_10a8ac678;
    }
  }
  unaff_x22 = ppppppppuVar22[0x6f][0x5d];
  ppppppppuVar21 = (undefined ********)ppppppppuVar22[0x6f][0x5e];
  if (ppppppppuVar21 != (undefined ********)0x0) {
    ppppppppuVar12 = ppppppppuVar21 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
      if (bVar10) {
        *ppppppppuVar12 = (undefined *******)((long)*ppppppppuVar12 + 1);
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  ppppppuStack_160 = unaff_x22;
  ppppppppuStack_158 = ppppppppuVar21;
  if (unaff_x22 != (undefined ******)0x0) {
    if (*(char *)(unaff_x22 + 8) == '\x01') {
      pppppuVar19 = *unaff_x22;
      ppppppppuStack_118 = ppppppppuStack_168;
      if (ppppppppuStack_168 != (undefined ********)0x0) {
        ppppppppuVar12 = ppppppppuStack_168 + 1;
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
          if (bVar10) {
            *ppppppppuVar12 = (undefined *******)((long)*ppppppppuVar12 + 1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      ppppppppuStack_a8 = *(undefined *********)(param_2 + 0x18);
      pppppuStack_b0 = *(undefined ******)(param_2 + 0x10);
      if (*(long *)(param_2 + 0x18) != 0) {
        plVar1 = (long *)(*(long *)(param_2 + 0x18) + 8);
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = *plVar1 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      ppppppppuStack_b8 = ppppppppuStack_138;
      ppppppuStack_c0 = ppppppuStack_140;
      if (ppppppppuStack_138 != (undefined ********)0x0) {
        ppppppppuVar12 = ppppppppuStack_138 + 1;
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
          if (bVar10) {
            *ppppppppuVar12 = (undefined *******)((long)*ppppppppuVar12 + 1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      ppppppppuStack_c8 = *(undefined *********)(param_2 + 0x28);
      uStack_d0 = *(undefined8 *)(param_2 + 0x20);
      if (*(long *)(param_2 + 0x28) != 0) {
        plVar1 = (long *)(*(long *)(param_2 + 0x28) + 8);
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = *plVar1 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      ppuVar14 = (undefined **)&ppppppppuStack_120;
      ppppppppuStack_120 = ppppppppuVar22;
      (*(code *)pppppuVar19)(ppuVar14,&pppppuStack_b0,&ppppppuStack_c0,&uStack_d0,unaff_x22);
      ppppppppuVar22 = ppppppppuStack_c8;
      if (ppppppppuStack_c8 != (undefined ********)0x0) {
        ppppppppuVar12 = ppppppppuStack_c8 + 1;
        do {
          pppppppuVar17 = *ppppppppuVar12;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
          if (bVar10) {
            *ppppppppuVar12 = (undefined *******)((long)pppppppuVar17 + -1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (pppppppuVar17 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuStack_c8)[2])(ppppppppuStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar14 = (undefined **)ppppppppuVar22;
        }
      }
      ppppppppuVar22 = ppppppppuStack_b8;
      if (ppppppppuStack_b8 != (undefined ********)0x0) {
        ppppppppuVar12 = ppppppppuStack_b8 + 1;
        do {
          pppppppuVar17 = *ppppppppuVar12;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
          if (bVar10) {
            *ppppppppuVar12 = (undefined *******)((long)pppppppuVar17 + -1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (pppppppuVar17 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuStack_b8)[2])(ppppppppuStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar14 = (undefined **)ppppppppuVar22;
        }
      }
      ppppppppuVar22 = ppppppppuStack_a8;
      if (ppppppppuStack_a8 != (undefined ********)0x0) {
        ppppppppuVar12 = ppppppppuStack_a8 + 1;
        do {
          pppppppuVar17 = *ppppppppuVar12;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
          if (bVar10) {
            *ppppppppuVar12 = (undefined *******)((long)pppppppuVar17 + -1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (pppppppuVar17 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuStack_a8)[2])(ppppppppuStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar14 = (undefined **)ppppppppuVar22;
        }
      }
      if (ppppppppuStack_118 != (undefined ********)0x0) {
        ppppppppuVar22 = ppppppppuStack_118 + 1;
        do {
          pppppppuVar17 = *ppppppppuVar22;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar22,0x10);
          if (bVar10) {
            *ppppppppuVar22 = (undefined *******)((long)pppppppuVar17 + -1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
LAB_10a8ac9d8:
        ppppppppuVar22 = ppppppppuStack_118;
        if (pppppppuVar17 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuStack_118)[2])(ppppppppuStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar14 = (undefined **)ppppppppuVar22;
        }
      }
    }
    else if (*(char *)(unaff_x22 + 8) == '\x02') {
      ppppppuVar13 = unaff_x22;
      FUN_10a688b40();
      ppppppppuVar4 = ppppppppuStack_138;
      ppppppuVar20 = ppppppuStack_140;
      ppppppppuVar12 = ppppppppuStack_168;
      if (ppppppuVar13 == (undefined ******)0x0) {
        ppuVar14 = (undefined **)(undefined ********)0x0;
        if (pppppppuVar17 != (undefined *******)0x0) {
          pppppppuVar18 = (undefined *******)*unaff_x22;
          pppppuVar19 = unaff_x22[1];
          if (pppppuVar19 != (undefined *****)0x0) {
            pppppuVar2 = pppppuVar19 + 1;
            do {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(pppppuVar2,0x10);
              if (bVar10) {
                *pppppuVar2 = (undefined ****)((long)*pppppuVar2 + 1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          ppppppppuStack_108 = ppppppppuStack_168;
          if (ppppppppuStack_168 != (undefined ********)0x0) {
            ppppppppuVar7 = ppppppppuStack_168 + 1;
            do {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar7,0x10);
              if (bVar10) {
                *ppppppppuVar7 = (undefined *******)((long)*ppppppppuVar7 + 1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          uVar5 = *(undefined8 *)(param_2 + 0x10);
          ppppppppuVar7 = *(undefined *********)(param_2 + 0x18);
          if (ppppppppuVar7 != (undefined ********)0x0) {
            ppppppppuVar16 = ppppppppuVar7 + 1;
            do {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar16,0x10);
              if (bVar10) {
                *ppppppppuVar16 = (undefined *******)((long)*ppppppppuVar16 + 1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          ppppppuStack_f0 = ppppppuStack_140;
          ppppppppuStack_e8 = ppppppppuStack_138;
          if (ppppppppuStack_138 != (undefined ********)0x0) {
            ppppppppuVar16 = ppppppppuStack_138 + 1;
            do {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar16,0x10);
              if (bVar10) {
                *ppppppppuVar16 = (undefined *******)((long)*ppppppppuVar16 + 1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          uVar6 = *(undefined8 *)(param_2 + 0x20);
          ppppppppuVar16 = *(undefined *********)(param_2 + 0x28);
          if (ppppppppuVar16 != (undefined ********)0x0) {
            ppppppppuVar3 = ppppppppuVar16 + 1;
            do {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar3,0x10);
              if (bVar10) {
                *ppppppppuVar3 = (undefined *******)((long)*ppppppppuVar3 + 1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          pppppuStack_b0 = (undefined *****)FUN_10a8ad30c;
          ppppppppuStack_a8 = (undefined ********)&PTR_FUN_110c252f0;
          puVar15 = (undefined8 *)0x50;
          ppppppppuStack_120 = (undefined ********)pppppppuVar18;
          ppppppppuStack_118 = (undefined ********)pppppuVar19;
          ppppppppuStack_110 = ppppppppuVar22;
          uStack_100 = uVar5;
          ppppppppuStack_f8 = ppppppppuVar7;
          uStack_e0 = uVar6;
          ppppppppuStack_d8 = ppppppppuVar16;
          __Znwm();
          *puVar15 = pppppppuVar18;
          puVar15[1] = pppppuVar19;
          ppppppppuStack_120 = (undefined ********)0x0;
          ppppppppuStack_118 = (undefined ********)0x0;
          puVar15[2] = ppppppppuVar22;
          puVar15[3] = ppppppppuVar12;
          if (ppppppppuVar12 != (undefined ********)0x0) {
            ppppppppuVar12 = ppppppppuVar12 + 1;
            do {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
              if (bVar10) {
                *ppppppppuVar12 = (undefined *******)((long)*ppppppppuVar12 + 1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          puVar15[4] = uVar5;
          puVar15[5] = ppppppppuVar7;
          if (ppppppppuVar7 != (undefined ********)0x0) {
            ppppppppuVar7 = ppppppppuVar7 + 1;
            do {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar7,0x10);
              if (bVar10) {
                *ppppppppuVar7 = (undefined *******)((long)*ppppppppuVar7 + 1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          puVar15[6] = ppppppuVar20;
          puVar15[7] = ppppppppuVar4;
          if (ppppppppuVar4 != (undefined ********)0x0) {
            ppppppppuVar4 = ppppppppuVar4 + 1;
            do {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar4,0x10);
              if (bVar10) {
                *ppppppppuVar4 = (undefined *******)((long)*ppppppppuVar4 + 1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          puVar15[8] = uVar6;
          puVar15[9] = ppppppppuVar16;
          if (ppppppppuVar16 != (undefined ********)0x0) {
            ppppppppuVar22 = ppppppppuVar16 + 1;
            do {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar22,0x10);
              if (bVar10) {
                *ppppppppuVar22 = (undefined *******)((long)*ppppppppuVar22 + 1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          unaff_x22 = &pppppuStack_b0;
          puStack_a0 = puVar15;
          FUN_10a4634ec(pppppppuVar17,&pppppuStack_b0);
          ppuVar14 = (undefined **)&ppppppppuStack_a8;
          (*(code *)*ppppppppuStack_a8)();
          if (ppppppppuVar16 != (undefined ********)0x0) {
            ppppppppuVar22 = ppppppppuVar16 + 1;
            do {
              pppppppuVar17 = *ppppppppuVar22;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar22,0x10);
              if (bVar10) {
                *ppppppppuVar22 = (undefined *******)((long)pppppppuVar17 + -1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (pppppppuVar17 == (undefined *******)0x0) {
              (*(code *)(*ppppppppuVar16)[2])(ppppppppuVar16);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppuVar14 = (undefined **)ppppppppuVar16;
            }
          }
          ppppppppuVar22 = ppppppppuStack_e8;
          if (ppppppppuStack_e8 != (undefined ********)0x0) {
            ppppppppuVar12 = ppppppppuStack_e8 + 1;
            do {
              pppppppuVar17 = *ppppppppuVar12;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
              if (bVar10) {
                *ppppppppuVar12 = (undefined *******)((long)pppppppuVar17 + -1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (pppppppuVar17 == (undefined *******)0x0) {
              (*(code *)(*ppppppppuStack_e8)[2])(ppppppppuStack_e8);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppuVar14 = (undefined **)ppppppppuVar22;
            }
          }
          ppppppppuVar22 = ppppppppuStack_f8;
          if (ppppppppuStack_f8 != (undefined ********)0x0) {
            ppppppppuVar12 = ppppppppuStack_f8 + 1;
            do {
              pppppppuVar17 = *ppppppppuVar12;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
              if (bVar10) {
                *ppppppppuVar12 = (undefined *******)((long)pppppppuVar17 + -1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (pppppppuVar17 == (undefined *******)0x0) {
              (*(code *)(*ppppppppuStack_f8)[2])(ppppppppuStack_f8);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppuVar14 = (undefined **)ppppppppuVar22;
            }
          }
          ppppppppuVar22 = ppppppppuStack_108;
          if (ppppppppuStack_108 != (undefined ********)0x0) {
            ppppppppuVar12 = ppppppppuStack_108 + 1;
            do {
              pppppppuVar17 = *ppppppppuVar12;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
              if (bVar10) {
                *ppppppppuVar12 = (undefined *******)((long)pppppppuVar17 + -1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (pppppppuVar17 == (undefined *******)0x0) {
              (*(code *)(*ppppppppuStack_108)[2])(ppppppppuStack_108);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppuVar14 = (undefined **)ppppppppuVar22;
            }
          }
          if (ppppppppuStack_118 != (undefined ********)0x0) {
            ppppppppuVar22 = ppppppppuStack_118 + 1;
            do {
              pppppppuVar17 = *ppppppppuVar22;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar22,0x10);
              if (bVar10) {
                *ppppppppuVar22 = (undefined *******)((long)pppppppuVar17 + -1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            goto LAB_10a8ac9d8;
          }
        }
      }
      else {
        *ppppppuVar13 =
             (undefined *****)
             CONCAT44((int)((ulong)*ppppppuVar13 >> 0x20) + 1,(int)*ppppppuVar13 + 1);
        ppuVar14 = (undefined **)*unaff_x22;
        FUN_10a8ad0c4(ppuVar14,&ppppppppuStack_170,param_2 + 0x10,&ppppppuStack_140,param_2 + 0x20);
        iVar11 = *(int *)((long)ppppppuVar13 + 4) + -1;
        *(int *)((long)ppppppuVar13 + 4) = iVar11;
        if (iVar11 == 0) {
          *(undefined4 *)ppppppuVar13 = 0;
        }
      }
    }
  }
  if (ppppppppuVar21 != (undefined ********)0x0) {
    ppppppppuVar22 = ppppppppuVar21 + 1;
    do {
      pppppppuVar17 = *ppppppppuVar22;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar22,0x10);
      if (bVar10) {
        *ppppppppuVar22 = (undefined *******)((long)pppppppuVar17 + -1);
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (pppppppuVar17 == (undefined *******)0x0) {
      (*(code *)(*ppppppppuVar21)[2])(ppppppppuVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar14 = (undefined **)ppppppppuVar21;
    }
  }
  ppppppppuVar22 = ppppppppuStack_138;
  ppppppppuVar21 = ppppppppuStack_128;
  if (ppppppppuStack_138 != (undefined ********)0x0) {
    ppppppppuVar12 = ppppppppuStack_138 + 1;
    do {
      pppppppuVar17 = *ppppppppuVar12;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
      if (bVar10) {
        *ppppppppuVar12 = (undefined *******)((long)pppppppuVar17 + -1);
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (pppppppuVar17 == (undefined *******)0x0) {
      (*(code *)(*ppppppppuStack_138)[2])(ppppppppuStack_138);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppppppppuVar21 = ppppppppuStack_128;
      ppuVar14 = (undefined **)ppppppppuVar22;
    }
  }
joined_r0x00010a8ac61c:
  if (ppppppppuVar21 != (undefined ********)0x0) {
    ppppppppuVar22 = ppppppppuVar21 + 1;
    do {
      pppppppuVar17 = *ppppppppuVar22;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar22,0x10);
      if (bVar10) {
        *ppppppppuVar22 = (undefined *******)((long)pppppppuVar17 + -1);
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (pppppppuVar17 == (undefined *******)0x0) {
      (*(code *)(*ppppppppuVar21)[2])(ppppppppuVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar14 = (undefined **)ppppppppuVar21;
    }
  }
  ppppppppuVar21 = ppppppppuStack_168;
  if (ppppppppuStack_168 != (undefined ********)0x0) {
    ppppppppuVar22 = ppppppppuStack_168 + 1;
    do {
      pppppppuVar17 = *ppppppppuVar22;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar22,0x10);
      if (bVar10) {
        *ppppppppuVar22 = (undefined *******)((long)pppppppuVar17 + -1);
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (pppppppuVar17 == (undefined *******)0x0) {
      (*(code *)(*ppppppppuStack_168)[2])(ppppppppuStack_168);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar14 = (undefined **)ppppppppuVar21;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    (*(code *)*ppppppppuStack_a8)(unaff_x22 + 1);
    FUN_10a8ad2cc(&ppppppppuStack_120);
    func_0x00010a883710(&ppppppuStack_160);
    func_0x00010a5c92ec(&ppppppuStack_140);
    FUN_10a8931d4(&pppppppuStack_130);
    FUN_10a5ca2e0(&ppppppppuStack_170);
    __Unwind_Resume();
    if (*(char *)(ppuVar14 + 4) == '\x01') {
      func_0x00010a07a8a8(ppuVar14 + 2);
      FUN_10a5bb990(ppuVar14);
    }
    return (undefined **)(undefined ********)ppuVar14;
  }
  return ppuVar14;
}



/* Entry: 10a8ace24; end: 10a8ace5f;  */

long FUN_10a8ace24(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x00010a07a8a8(param_1 + 0x10);
    FUN_10a5bb990(param_1);
  }
  return param_1;
}



/* Entry: 10a8ace60; end: 10a8ad0c3;  */

void FUN_10a8ace60(long *param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  
  plVar3 = param_3;
  func_0x000107c2b05c();
  plVar12 = (long *)param_3[1];
  if (plVar12 != (long *)0x0) {
    uVar13 = (long)plVar12 - 1;
    if (((ulong)plVar12 & uVar13) == 0) {
      plVar14 = (long *)(uVar13 & (ulong)plVar3);
    }
    else {
      plVar14 = plVar3;
      if (plVar12 <= plVar3) {
        uVar7 = 0;
        if (plVar12 != (long *)0x0) {
          uVar7 = (ulong)plVar3 / (ulong)plVar12;
        }
        plVar14 = (long *)((long)plVar3 - uVar7 * (long)plVar12);
      }
    }
    puVar4 = *(undefined8 **)(*param_3 + (long)plVar14 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      for (plVar11 = (long *)*puVar4; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        plVar5 = (long *)plVar11[1];
        if (plVar5 == plVar3) {
          plVar5 = param_3;
          func_0x000107c2b068(param_3,plVar11 + 2,param_2);
          if (((ulong)plVar5 & 1) != 0) {
            lVar6 = plVar11[6];
            lVar15 = plVar11[5];
            param_1[1] = plVar11[6];
            *param_1 = lVar15;
            if (lVar6 != 0) {
              plVar3 = (long *)(lVar6 + 8);
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar2) {
                  *plVar3 = *plVar3 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            lVar6 = plVar11[8];
            lVar15 = plVar11[7];
            param_1[3] = plVar11[8];
            param_1[2] = lVar15;
            if (lVar6 != 0) {
              plVar3 = (long *)(lVar6 + 8);
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar2) {
                  *plVar3 = *plVar3 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            *(undefined1 *)(param_1 + 4) = 1;
            uVar7 = param_3[1];
            lVar6 = *plVar11;
            uVar13 = plVar11[1];
            uVar8 = uVar7 - 1;
            if ((uVar7 & uVar8) == 0) {
              uVar13 = uVar8 & uVar13;
            }
            else if (uVar7 <= uVar13) {
              uVar9 = 0;
              if (uVar7 != 0) {
                uVar9 = uVar13 / uVar7;
              }
              uVar13 = uVar13 - uVar9 * uVar7;
            }
            plVar3 = *(long **)(*param_3 + uVar13 * 8);
            do {
              plVar12 = plVar3;
              plVar3 = (long *)*plVar12;
            } while ((long *)*plVar12 != plVar11);
            if (plVar12 == param_3 + 2) {
LAB_10a8ad014:
              if (lVar6 == 0) {
LAB_10a8ad048:
                *(undefined8 *)(*param_3 + uVar13 * 8) = 0;
                lVar6 = *plVar11;
                goto LAB_10a8ad050;
              }
              uVar9 = *(ulong *)(lVar6 + 8);
              if ((uVar7 & uVar8) == 0) {
                uVar10 = uVar9 & uVar8;
              }
              else {
                uVar10 = uVar9;
                if (uVar7 <= uVar9) {
                  uVar10 = 0;
                  if (uVar7 != 0) {
                    uVar10 = uVar9 / uVar7;
                  }
                  uVar10 = uVar9 - uVar10 * uVar7;
                }
              }
              if (uVar10 != uVar13) goto LAB_10a8ad048;
            }
            else {
              uVar9 = plVar12[1];
              if ((uVar7 & uVar8) == 0) {
                uVar9 = uVar9 & uVar8;
              }
              else if (uVar7 <= uVar9) {
                uVar10 = 0;
                if (uVar7 != 0) {
                  uVar10 = uVar9 / uVar7;
                }
                uVar9 = uVar9 - uVar10 * uVar7;
              }
              if (uVar9 != uVar13) goto LAB_10a8ad014;
LAB_10a8ad050:
              if (lVar6 == 0) goto LAB_10a8ad08c;
              uVar9 = *(ulong *)(lVar6 + 8);
            }
            if ((uVar7 & uVar8) == 0) {
              uVar9 = uVar9 & uVar8;
            }
            else if (uVar7 <= uVar9) {
              uVar8 = 0;
              if (uVar7 != 0) {
                uVar8 = uVar9 / uVar7;
              }
              uVar9 = uVar9 - uVar8 * uVar7;
            }
            if (uVar9 != uVar13) {
              *(long **)(*param_3 + uVar9 * 8) = plVar12;
              lVar6 = *plVar11;
            }
LAB_10a8ad08c:
            *plVar12 = lVar6;
            *plVar11 = 0;
            param_3[3] = param_3[3] + -1;
            func_0x00010a882654(plVar11 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZdlPv_110352258)(plVar11);
            return;
          }
        }
        else {
          if (((ulong)plVar12 & uVar13) == 0) {
            plVar5 = (long *)((ulong)plVar5 & uVar13);
          }
          else if (plVar12 <= plVar5) {
            uVar7 = 0;
            if (plVar12 != (long *)0x0) {
              uVar7 = (ulong)plVar5 / (ulong)plVar12;
            }
            plVar5 = (long *)((long)plVar5 - uVar7 * (long)plVar12);
          }
          if (plVar5 != plVar14) break;
        }
      }
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* Entry: 10a8ad0c4; end: 10a8ad2cb;  */

void FUN_10a8ad0c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  int aiStack_d0 [2];
  undefined8 *puStack_c8;
  undefined8 *apuStack_c0 [2];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  int aiStack_90 [2];
  long lStack_88;
  undefined8 **ppuStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  undefined8 ***pppuStack_68;
  undefined8 **ppuStack_60;
  undefined8 uStack_58;
  
  func_0x000109884c0c(apuStack_c0,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_d8,apuStack_c0,*param_1);
  if (apuStack_c0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_c0[0])();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_e0);
  plVar2 = (long *)*param_1;
  FUN_10a724820(apuStack_c0,plVar2,param_2);
  func_0x00010a5cc6a4(auStack_b0,plVar2,param_3);
  func_0x00010a88aaac(auStack_a0,plVar2,*param_4,param_4[1]);
  FUN_10a88b144(aiStack_90,plVar2,*param_5,param_5[1]);
  uStack_58 = 4;
  ppuStack_60 = apuStack_c0;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_80 = &puStack_d8;
  pppuStack_68 = &ppuStack_60;
  plStack_78 = plVar2;
  puStack_70 = (undefined1 *)&puStack_e0;
  func_0x0001098960c0(aiStack_d0);
  if ((3 < aiStack_d0[0]) && (puStack_c8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_c8)();
  }
  lVar1 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_90 + lVar1)) &&
       (*(undefined8 **)((long)&lStack_88 + lVar1) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_88 + lVar1))();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x40);
  if (puStack_e0 != (undefined8 *)0x0) {
    (**(code **)*puStack_e0)();
  }
  if (puStack_d8 != (undefined8 *)0x0) {
    (**(code **)*puStack_d8)();
  }
  return;
}



/* Entry: 10a8ad2cc; end: 10a8ad30b;  */

long FUN_10a8ad2cc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a8835b0(param_1 + 0x40);
  func_0x00010a5c92ec(param_1 + 0x30);
  FUN_10a297544(param_1 + 0x20);
  FUN_10a5ca2e0(param_1 + 0x10);
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



/* Entry: 10a8ad30c; end: 10a8ad323;  */

void FUN_10a8ad30c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  int aiStack_d0 [2];
  undefined8 *puStack_c8;
  undefined8 *apuStack_c0 [2];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  int aiStack_90 [2];
  long lStack_88;
  undefined8 **ppuStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  undefined8 ***pppuStack_68;
  undefined8 **ppuStack_60;
  undefined8 uStack_58;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = (undefined8 *)*puVar2;
  func_0x000109884c0c(apuStack_c0,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_d8,apuStack_c0,*puVar1);
  if (apuStack_c0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_c0[0])();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_e0);
  plVar4 = (long *)*puVar1;
  FUN_10a724820(apuStack_c0,plVar4,puVar2 + 2);
  func_0x00010a5cc6a4(auStack_b0,plVar4,puVar2 + 4);
  func_0x00010a88aaac(auStack_a0,plVar4,puVar2[6],puVar2[7]);
  FUN_10a88b144(aiStack_90,plVar4,puVar2[8],puVar2[9]);
  uStack_58 = 4;
  ppuStack_60 = apuStack_c0;
  (**(code **)(*plVar4 + 0x58))(plVar4);
  ppuStack_80 = &puStack_d8;
  pppuStack_68 = &ppuStack_60;
  plStack_78 = plVar4;
  puStack_70 = (undefined1 *)&puStack_e0;
  func_0x0001098960c0(aiStack_d0);
  if ((3 < aiStack_d0[0]) && (puStack_c8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_c8)();
  }
  lVar3 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_90 + lVar3)) &&
       (*(undefined8 **)((long)&lStack_88 + lVar3) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_88 + lVar3))();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x40);
  if (puStack_e0 != (undefined8 *)0x0) {
    (**(code **)*puStack_e0)();
  }
  if (puStack_d8 != (undefined8 *)0x0) {
    (**(code **)*puStack_d8)();
  }
  return;
}



/* Entry: 10a8ad324; end: 10a8ad377;  */

void FUN_10a8ad324(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x00010a8835b0(lVar1 + 0x40);
    func_0x00010a5c92ec(lVar1 + 0x30);
    FUN_10a297544(lVar1 + 0x20);
    FUN_10a5ca2e0(lVar1 + 0x10);
    func_0x00010a004dac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a8ad378; end: 10a8ad38f;  */

void FUN_10a8ad378(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a8ad390; end: 10a8ad3b7;  */

long FUN_10a8ad390(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a8835b0(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a8ad3b8; end: 10a8ad3ef;  */

void FUN_10a8ad3b8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110c25308;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 10a8ad3f0; end: 10a8ad40f;  */

void FUN_10a8ad3f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c25330;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8ad410; end: 10a8ad41f;  */

void FUN_10a8ad410(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a8ad418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a8ad420; end: 10a8ad477;  */

long FUN_10a8ad420(long param_1)

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



/* Entry: 10a8ad478; end: 10a8adb07;  */

void FUN_10a8ad478(long *param_1,long param_2,undefined8 param_3,undefined *******param_4)

{
  undefined ******ppppppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *******pppppppuVar5;
  undefined *******pppppppuVar6;
  undefined *******pppppppuVar7;
  undefined8 *puVar8;
  undefined *******pppppppuVar9;
  undefined *******pppppppuVar10;
  undefined *****pppppuVar11;
  undefined ******ppppppuVar12;
  undefined *****pppppuVar13;
  undefined *******pppppppuVar14;
  long lVar15;
  undefined *******pppppppuVar16;
  undefined *******unaff_x21;
  undefined *******pppppppuVar17;
  undefined *******unaff_x23;
  undefined *******pppppppuVar18;
  undefined ******ppppppuVar19;
  undefined ******ppppppuVar20;
  undefined8 *puStack_220;
  undefined ***pppuStack_218;
  int aiStack_210 [2];
  undefined8 *puStack_208;
  undefined8 *apuStack_200 [2];
  undefined1 auStack_1f0 [16];
  int aiStack_1e0 [2];
  long lStack_1d8;
  undefined *****pppppuStack_1d0;
  undefined *****pppppuStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 ***pppuStack_1b8;
  undefined8 **ppuStack_1b0;
  undefined8 uStack_1a8;
  undefined *****pppppuStack_1a0;
  undefined ******ppppppuStack_198;
  undefined ******ppppppuStack_190;
  undefined ******ppppppuStack_188;
  undefined ******ppppppuStack_180;
  undefined ******ppppppuStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined *****pppppuStack_160;
  undefined ******ppppppuStack_158;
  undefined ******ppppppuStack_148;
  undefined ******ppppppuStack_140;
  undefined ******ppppppuStack_138;
  undefined ******ppppppuStack_130;
  undefined ******ppppppuStack_128;
  undefined ******ppppppuStack_120;
  undefined ******ppppppuStack_110;
  char cStack_108;
  undefined ******ppppppuStack_100;
  undefined ******ppppppuStack_f8;
  undefined *****pppppuStack_f0;
  undefined ******ppppppuStack_e8;
  undefined *****pppppuStack_e0;
  undefined ******ppppppuStack_d8;
  undefined *****pppppuStack_d0;
  undefined ******ppppppuStack_c8;
  undefined *****pppppuStack_c0;
  undefined ******ppppppuStack_b8;
  undefined *****pppppuStack_b0;
  undefined ******ppppppuStack_a8;
  undefined8 *puStack_a0;
  long lStack_70;
  
  pppppppuVar18 = (undefined *******)&pppppuStack_160;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar16 = *(undefined ********)(param_2 + 0x10);
  ppppppuStack_158 = (undefined ******)param_1[1];
  pppppuStack_160 = (undefined *****)*param_1;
  *param_1 = 0;
  param_1[1] = 0;
  pppppuVar11 = (undefined *****)pppppuStack_160[0xae];
  pppppppuVar14 = (undefined *******)pppppuStack_160[0xaf];
  pppppppuVar7 = pppppppuVar16;
  if (pppppppuVar14 == (undefined *******)0x0) {
    pppppppuVar6 = &ppppppuStack_128;
    pppppppuVar10 = (undefined *******)(pppppuVar11[6] + 0x10);
    FUN_10a8ace60(pppppppuVar6,pppppppuVar16,pppppppuVar10);
  }
  else {
    unaff_x21 = pppppppuVar14 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
      if (bVar3) {
        *unaff_x21 = (undefined ******)((long)*unaff_x21 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pppppppuVar6 = &ppppppuStack_128;
    pppppppuVar10 = (undefined *******)(pppppuVar11[6] + 0x10);
    FUN_10a8ace60(pppppppuVar6,pppppppuVar16,pppppppuVar10);
    do {
      ppppppuVar12 = *unaff_x21;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
      if (bVar3) {
        *unaff_x21 = (undefined ******)((long)ppppppuVar12 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppppppuVar12 == (undefined ******)0x0) {
      (*(code *)(*pppppppuVar14)[2])(pppppppuVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppppuVar6 = pppppppuVar14;
    }
  }
  pppppppuVar14 = (undefined *******)ppppppuStack_120;
  if (cStack_108 == '\x01') {
    ppppppuStack_138 = ppppppuStack_128;
    ppppppuStack_130 = ppppppuStack_120;
    if ((undefined *******)ppppppuStack_120 != (undefined *******)0x0) {
      pppppppuVar6 = (undefined *******)(ppppppuStack_120 + 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
        if (bVar3) {
          *pppppppuVar6 = (undefined ******)((long)*pppppppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if ((undefined *******)ppppppuStack_128 != (undefined *******)0x0) {
      pppppppuVar7 = pppppppuVar16 + 3;
      FUN_10a5a2038();
    }
    pppppppuVar6 = (undefined *******)ppppppuStack_128;
    if (pppppppuVar14 != (undefined *******)0x0) {
      pppppppuVar17 = pppppppuVar14 + 1;
      do {
        ppppppuVar12 = *pppppppuVar17;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar17,0x10);
        if (bVar3) {
          *pppppppuVar17 = (undefined ******)((long)ppppppuVar12 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppppuVar12 == (undefined ******)0x0) {
        (*(code *)(*pppppppuVar14)[2])(pppppppuVar14);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppppuVar6 = pppppppuVar14;
      }
    }
  }
  pppppuVar11 = pppppuStack_160;
  pppppppuVar17 = (undefined *******)pppppuStack_160[0x6f][0x61];
  pppppppuVar14 = (undefined *******)pppppuStack_160[0x6f][0x62];
  if (pppppppuVar14 != (undefined *******)0x0) {
    pppppppuVar9 = pppppppuVar14 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar9,0x10);
      if (bVar3) {
        *pppppppuVar9 = (undefined ******)((long)*pppppppuVar9 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pppppppuVar9 = pppppppuVar7;
  ppppppuStack_148 = (undefined ******)pppppppuVar17;
  ppppppuStack_140 = (undefined ******)pppppppuVar14;
  if (pppppppuVar17 == (undefined *******)0x0) goto LAB_10a8ad954;
  if (*(char *)(pppppppuVar17 + 8) == '\x01') {
    ppppppuVar12 = *pppppppuVar17;
    pppppuStack_b0 = pppppuStack_160;
    ppppppuStack_a8 = ppppppuStack_158;
    if ((undefined *******)ppppppuStack_158 != (undefined *******)0x0) {
      pppppppuVar7 = (undefined *******)(ppppppuStack_158 + 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
        if (bVar3) {
          *pppppppuVar7 = (undefined ******)((long)*pppppppuVar7 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuStack_f8 = pppppppuVar16[4];
    ppppppuStack_100 = pppppppuVar16[3];
    if (pppppppuVar16[4] != (undefined ******)0x0) {
      ppppppuVar1 = pppppppuVar16[4] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
        if (bVar3) {
          *ppppppuVar1 = (undefined *****)((long)*ppppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuStack_b8 = pppppppuVar16[6];
    pppppuStack_c0 = (undefined *****)pppppppuVar16[5];
    if (pppppppuVar16[6] != (undefined ******)0x0) {
      ppppppuVar1 = pppppppuVar16[6] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
        if (bVar3) {
          *ppppppuVar1 = (undefined *****)((long)*ppppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppppppuVar6 = (undefined *******)&pppppuStack_b0;
    pppppppuVar9 = &ppppppuStack_100;
    pppppppuVar10 = (undefined *******)&pppppuStack_c0;
    param_4 = pppppppuVar17;
    (*(code *)ppppppuVar12)(pppppppuVar6,pppppppuVar9,pppppppuVar10);
    pppppppuVar7 = (undefined *******)ppppppuStack_b8;
    if ((undefined *******)ppppppuStack_b8 != (undefined *******)0x0) {
      pppppppuVar16 = (undefined *******)(ppppppuStack_b8 + 1);
      do {
        ppppppuVar12 = *pppppppuVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar16,0x10);
        if (bVar3) {
          *pppppppuVar16 = (undefined ******)((long)ppppppuVar12 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppppuVar12 == (undefined ******)0x0) {
        (*(code *)(*ppppppuStack_b8)[2])(ppppppuStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppppuVar6 = pppppppuVar7;
      }
    }
    pppppppuVar7 = (undefined *******)ppppppuStack_f8;
    if ((undefined *******)ppppppuStack_f8 != (undefined *******)0x0) {
      pppppppuVar16 = (undefined *******)(ppppppuStack_f8 + 1);
      do {
        ppppppuVar12 = *pppppppuVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar16,0x10);
        if (bVar3) {
          *pppppppuVar16 = (undefined ******)((long)ppppppuVar12 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppppuVar12 == (undefined ******)0x0) {
        (*(code *)(*ppppppuStack_f8)[2])(ppppppuStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppppuVar6 = pppppppuVar7;
      }
    }
    pppppppuVar16 = (undefined *******)ppppppuStack_a8;
    if ((undefined *******)ppppppuStack_a8 == (undefined *******)0x0) goto LAB_10a8ad954;
    pppppppuVar7 = (undefined *******)(ppppppuStack_a8 + 1);
    do {
      ppppppuVar12 = *pppppppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
      if (bVar3) {
        *pppppppuVar7 = (undefined ******)((long)ppppppuVar12 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (*(char *)(pppppppuVar17 + 8) != '\x02') goto LAB_10a8ad954;
    pppppppuVar5 = pppppppuVar17;
    FUN_10a688b40();
    ppppppuVar12 = ppppppuStack_158;
    if (pppppppuVar5 != (undefined *******)0x0) {
      *pppppppuVar5 =
           (undefined ******)
           CONCAT44((int)((ulong)*pppppppuVar5 >> 0x20) + 1,(int)*pppppppuVar5 + 1);
      pppppppuVar6 = (undefined *******)*pppppppuVar17;
      pppppppuVar10 = pppppppuVar16 + 3;
      param_4 = pppppppuVar16 + 5;
      FUN_10a8adb08(pppppppuVar6,&pppppuStack_160,pppppppuVar10);
      iVar4 = *(int *)((long)pppppppuVar5 + 4) + -1;
      *(int *)((long)pppppppuVar5 + 4) = iVar4;
      pppppppuVar9 = pppppppuVar18;
      unaff_x23 = pppppppuVar5;
      if (iVar4 == 0) {
        *(undefined4 *)pppppppuVar5 = 0;
      }
      goto LAB_10a8ad954;
    }
    pppppppuVar6 = (undefined *******)0x0;
    pppppppuVar9 = (undefined *******)0x0;
    unaff_x21 = pppppppuVar7;
    if (pppppppuVar7 == (undefined *******)0x0) goto LAB_10a8ad954;
    unaff_x23 = (undefined *******)*pppppppuVar17;
    ppppppuVar1 = pppppppuVar17[1];
    if (ppppppuVar1 != (undefined ******)0x0) {
      ppppppuVar19 = ppppppuVar1 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar19,0x10);
        if (bVar3) {
          *ppppppuVar19 = (undefined *****)((long)*ppppppuVar19 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppppuStack_f0 = pppppuVar11;
    ppppppuStack_e8 = ppppppuStack_158;
    if ((undefined *******)ppppppuStack_158 != (undefined *******)0x0) {
      pppppppuVar18 = (undefined *******)(ppppppuStack_158 + 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar18,0x10);
        if (bVar3) {
          *pppppppuVar18 = (undefined ******)((long)*pppppppuVar18 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuVar19 = pppppppuVar16[3];
    pppppppuVar18 = (undefined *******)pppppppuVar16[4];
    if (pppppppuVar18 != (undefined *******)0x0) {
      pppppppuVar6 = pppppppuVar18 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
        if (bVar3) {
          *pppppppuVar6 = (undefined ******)((long)*pppppppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuVar20 = pppppppuVar16[5];
    pppppppuVar16 = (undefined *******)pppppppuVar16[6];
    if (pppppppuVar16 != (undefined *******)0x0) {
      pppppppuVar6 = pppppppuVar16 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
        if (bVar3) {
          *pppppppuVar6 = (undefined ******)((long)*pppppppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppppuStack_b0 = (undefined *****)FUN_10a8adda4;
    ppppppuStack_a8 = (undefined ******)&PTR_FUN_110c25370;
    puVar8 = (undefined8 *)0x40;
    ppppppuStack_100 = (undefined ******)unaff_x23;
    ppppppuStack_f8 = ppppppuVar1;
    pppppuStack_e0 = (undefined *****)ppppppuVar19;
    ppppppuStack_d8 = (undefined ******)pppppppuVar18;
    pppppuStack_d0 = (undefined *****)ppppppuVar20;
    ppppppuStack_c8 = (undefined ******)pppppppuVar16;
    __Znwm();
    *puVar8 = unaff_x23;
    puVar8[1] = ppppppuVar1;
    ppppppuStack_100 = (undefined ******)0x0;
    ppppppuStack_f8 = (undefined ******)0x0;
    puVar8[2] = pppppuVar11;
    puVar8[3] = ppppppuVar12;
    if ((undefined *******)ppppppuVar12 != (undefined *******)0x0) {
      pppppppuVar6 = (undefined *******)(ppppppuVar12 + 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
        if (bVar3) {
          *pppppppuVar6 = (undefined ******)((long)*pppppppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar8[4] = ppppppuVar19;
    puVar8[5] = pppppppuVar18;
    if (pppppppuVar18 != (undefined *******)0x0) {
      pppppppuVar18 = pppppppuVar18 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar18,0x10);
        if (bVar3) {
          *pppppppuVar18 = (undefined ******)((long)*pppppppuVar18 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar8[6] = ppppppuVar20;
    puVar8[7] = pppppppuVar16;
    if (pppppppuVar16 != (undefined *******)0x0) {
      pppppppuVar18 = pppppppuVar16 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar18,0x10);
        if (bVar3) {
          *pppppppuVar18 = (undefined ******)((long)*pppppppuVar18 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppppppuVar17 = (undefined *******)&pppppuStack_b0;
    pppppppuVar9 = (undefined *******)&pppppuStack_b0;
    puStack_a0 = puVar8;
    FUN_10a4634ec(pppppppuVar7,pppppppuVar9);
    pppppppuVar6 = &ppppppuStack_a8;
    (*(code *)*ppppppuStack_a8)();
    if (pppppppuVar16 != (undefined *******)0x0) {
      pppppppuVar7 = pppppppuVar16 + 1;
      do {
        ppppppuVar12 = *pppppppuVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
        if (bVar3) {
          *pppppppuVar7 = (undefined ******)((long)ppppppuVar12 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppppuVar12 == (undefined ******)0x0) {
        (*(code *)(*pppppppuVar16)[2])(pppppppuVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppppuVar6 = pppppppuVar16;
      }
    }
    pppppppuVar7 = (undefined *******)ppppppuStack_d8;
    if ((undefined *******)ppppppuStack_d8 != (undefined *******)0x0) {
      pppppppuVar16 = (undefined *******)(ppppppuStack_d8 + 1);
      do {
        ppppppuVar12 = *pppppppuVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar16,0x10);
        if (bVar3) {
          *pppppppuVar16 = (undefined ******)((long)ppppppuVar12 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppppuVar12 == (undefined ******)0x0) {
        (*(code *)(*ppppppuStack_d8)[2])(ppppppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppppuVar6 = pppppppuVar7;
      }
    }
    pppppppuVar7 = (undefined *******)ppppppuStack_e8;
    if ((undefined *******)ppppppuStack_e8 != (undefined *******)0x0) {
      pppppppuVar16 = (undefined *******)(ppppppuStack_e8 + 1);
      do {
        ppppppuVar12 = *pppppppuVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar16,0x10);
        if (bVar3) {
          *pppppppuVar16 = (undefined ******)((long)ppppppuVar12 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppppuVar12 == (undefined ******)0x0) {
        (*(code *)(*ppppppuStack_e8)[2])(ppppppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppppuVar6 = pppppppuVar7;
      }
    }
    pppppppuVar16 = (undefined *******)ppppppuStack_f8;
    if ((undefined *******)ppppppuStack_f8 == (undefined *******)0x0) goto LAB_10a8ad954;
    pppppppuVar7 = (undefined *******)(ppppppuStack_f8 + 1);
    do {
      ppppppuVar12 = *pppppppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
      if (bVar3) {
        *pppppppuVar7 = (undefined ******)((long)ppppppuVar12 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (ppppppuVar12 == (undefined ******)0x0) {
    (*(code *)(*pppppppuVar16)[2])(pppppppuVar16);
    pppppppuVar6 = pppppppuVar16;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
LAB_10a8ad954:
  if (pppppppuVar14 != (undefined *******)0x0) {
    pppppppuVar7 = pppppppuVar14 + 1;
    do {
      ppppppuVar12 = *pppppppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
      if (bVar3) {
        *pppppppuVar7 = (undefined ******)((long)ppppppuVar12 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppppppuVar12 == (undefined ******)0x0) {
      (*(code *)(*pppppppuVar14)[2])(pppppppuVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppppuVar6 = pppppppuVar14;
    }
  }
  if (cStack_108 == '\x01') {
    if ((undefined *******)ppppppuStack_110 != (undefined *******)0x0) {
      pppppppuVar7 = (undefined *******)(ppppppuStack_110 + 1);
      do {
        ppppppuVar12 = *pppppppuVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
        if (bVar3) {
          *pppppppuVar7 = (undefined ******)((long)ppppppuVar12 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppppuVar12 == (undefined ******)0x0) {
        (*(code *)(*ppppppuStack_110)[2])(ppppppuStack_110);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppppuVar6 = (undefined *******)ppppppuStack_110;
      }
    }
    if ((undefined *******)ppppppuStack_120 != (undefined *******)0x0) {
      pppppppuVar7 = (undefined *******)(ppppppuStack_120 + 1);
      do {
        ppppppuVar12 = *pppppppuVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
        if (bVar3) {
          *pppppppuVar7 = (undefined ******)((long)ppppppuVar12 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppppuVar12 == (undefined ******)0x0) {
        (*(code *)(*ppppppuStack_120)[2])(ppppppuStack_120);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppppuVar6 = (undefined *******)ppppppuStack_120;
      }
    }
  }
  pppppppuVar7 = (undefined *******)ppppppuStack_158;
  ppppppuStack_178 = (undefined ******)pppppppuVar6;
  if ((undefined *******)ppppppuStack_158 != (undefined *******)0x0) {
    pppppppuVar18 = (undefined *******)(ppppppuStack_158 + 1);
    do {
      ppppppuVar12 = *pppppppuVar18;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar18,0x10);
      if (bVar3) {
        *pppppppuVar18 = (undefined ******)((long)ppppppuVar12 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppppppuVar12 == (undefined ******)0x0) {
      (*(code *)(*ppppppuStack_158)[2])(ppppppuStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppppppuStack_178 = (undefined ******)pppppppuVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    (*(code *)*ppppppuStack_a8)(pppppppuVar17 + 1);
    FUN_10a8add6c(&ppppppuStack_100);
    func_0x00010a8837c0(&ppppppuStack_148);
    FUN_10a8ace24(&ppppppuStack_128);
    FUN_10a5ca2e0(&pppppuStack_160);
    pppppppuVar7 = (undefined *******)ppppppuStack_178;
    __Unwind_Resume();
    pppppuStack_1a0 = pppppuVar11;
    pcStack_168 = FUN_10a8adb08;
    ppppppuStack_198 = (undefined ******)unaff_x23;
    ppppppuStack_190 = (undefined ******)pppppppuVar17;
    ppppppuStack_188 = (undefined ******)unaff_x21;
    ppppppuStack_180 = (undefined ******)pppppppuVar16;
    puStack_170 = &stack0xfffffffffffffff0;
    func_0x000109884c0c(apuStack_200,pppppppuVar7 + 1,*pppppppuVar7);
    func_0x000109884820(&pppuStack_218,apuStack_200,*pppppppuVar7);
    if (apuStack_200[0] != (undefined8 *)0x0) {
      (**(code **)*apuStack_200[0])();
    }
    (*(code *)(**pppppppuVar7)[6])(&puStack_220);
    ppppppuVar12 = *pppppppuVar7;
    FUN_10a724820(apuStack_200,ppppppuVar12,pppppppuVar9);
    func_0x00010a5cc6a4(auStack_1f0,ppppppuVar12,pppppppuVar10);
    pppppuStack_1c8 = (undefined *****)param_4[1];
    pppppuStack_1d0 = (undefined *****)*param_4;
    if (param_4[1] != (undefined ******)0x0) {
      ppppppuVar1 = param_4[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
        if (bVar3) {
          *ppppppuVar1 = (undefined *****)((long)*ppppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuStack_1b0 = (undefined8 **)&PTR_DAT_110c23d38;
    func_0x000109899de4(aiStack_1e0,ppppppuVar12,&pppppuStack_1d0,&ppuStack_1b0,0,0);
    pppppuVar11 = pppppuStack_1c8;
    if ((undefined ******)pppppuStack_1c8 != (undefined ******)0x0) {
      ppppppuVar1 = (undefined ******)(pppppuStack_1c8 + 1);
      do {
        pppppuVar13 = *ppppppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
        if (bVar3) {
          *ppppppuVar1 = (undefined *****)((long)pppppuVar13 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppuVar13 == (undefined *****)0x0) {
        (*(code *)(*pppppuStack_1c8)[2])(pppppuStack_1c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar11);
      }
    }
    ppuStack_1b0 = apuStack_200;
    uStack_1a8 = 3;
    (*(code *)(*ppppppuVar12)[0xb])(ppppppuVar12);
    pppppuStack_1d0 = (undefined *****)&pppuStack_218;
    pppppuStack_1c8 = (undefined *****)ppppppuVar12;
    puStack_1c0 = (undefined1 *)&puStack_220;
    pppuStack_1b8 = &ppuStack_1b0;
    func_0x0001098960c0(aiStack_210);
    if ((3 < aiStack_210[0]) && (puStack_208 != (undefined8 *)0x0)) {
      (**(code **)*puStack_208)();
    }
    lVar15 = 0;
    do {
      if ((3 < *(int *)((long)aiStack_1e0 + lVar15)) &&
         (*(undefined8 **)((long)&lStack_1d8 + lVar15) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)((long)&lStack_1d8 + lVar15))();
      }
      lVar15 = lVar15 + -0x10;
    } while (lVar15 != -0x30);
    if (puStack_220 != (undefined8 *)0x0) {
      (**(code **)*puStack_220)();
    }
    if ((undefined ****)pppuStack_218 != (undefined ****)0x0) {
      (*(code *)**pppuStack_218)();
    }
    return;
  }
  return;
}



/* Entry: 10a8adb08; end: 10a8add6b;  */

void FUN_10a8adb08(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  int aiStack_b0 [2];
  undefined8 *puStack_a8;
  undefined8 *apuStack_a0 [2];
  undefined1 auStack_90 [16];
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 ***pppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  func_0x000109884c0c(apuStack_a0,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_b8,apuStack_a0,*param_1);
  if (apuStack_a0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_a0[0])();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_c0);
  plVar6 = (long *)*param_1;
  FUN_10a724820(apuStack_a0,plVar6,param_2);
  func_0x00010a5cc6a4(auStack_90,plVar6,param_3);
  plStack_68 = (long *)param_4[1];
  ppuStack_70 = (undefined8 **)*param_4;
  if (param_4[1] != 0) {
    plVar1 = (long *)(param_4[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_50 = (undefined8 **)&PTR_DAT_110c23d38;
  func_0x000109899de4(aiStack_80,plVar6,&ppuStack_70,&ppuStack_50,0,0);
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  ppuStack_50 = apuStack_a0;
  uStack_48 = 3;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_70 = &puStack_b8;
  plStack_68 = plVar6;
  puStack_60 = (undefined1 *)&puStack_c0;
  pppuStack_58 = &ppuStack_50;
  func_0x0001098960c0(aiStack_b0);
  if ((3 < aiStack_b0[0]) && (puStack_a8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_a8)();
  }
  lVar5 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar5)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar5) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar5))();
    }
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != -0x30);
  if (puStack_c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_c0)();
  }
  if (puStack_b8 != (undefined8 *)0x0) {
    (**(code **)*puStack_b8)();
  }
  return;
}



/* Entry: 10a8add6c; end: 10a8adda3;  */

long FUN_10a8add6c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a8ad420(param_1 + 0x30);
  FUN_10a297544(param_1 + 0x20);
  FUN_10a5ca2e0(param_1 + 0x10);
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



/* Entry: 10a8adda4; end: 10a8addb7;  */

void FUN_10a8adda4(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  int aiStack_b0 [2];
  undefined8 *puStack_a8;
  undefined8 *apuStack_a0 [2];
  undefined1 auStack_90 [16];
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 ***pppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  puVar5 = (undefined8 *)*puVar6;
  func_0x000109884c0c(apuStack_a0,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_b8,apuStack_a0,*puVar5);
  if (apuStack_a0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_a0[0])();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_c0);
  plVar8 = (long *)*puVar5;
  FUN_10a724820(apuStack_a0,plVar8,puVar6 + 2);
  func_0x00010a5cc6a4(auStack_90,plVar8,puVar6 + 4);
  plStack_68 = (long *)puVar6[7];
  ppuStack_70 = (undefined8 **)puVar6[6];
  if (puVar6[7] != 0) {
    plVar1 = (long *)(puVar6[7] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_50 = (undefined8 **)&PTR_DAT_110c23d38;
  func_0x000109899de4(aiStack_80,plVar8,&ppuStack_70,&ppuStack_50,0,0);
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  ppuStack_50 = apuStack_a0;
  uStack_48 = 3;
  (**(code **)(*plVar8 + 0x58))(plVar8);
  ppuStack_70 = &puStack_b8;
  plStack_68 = plVar8;
  puStack_60 = (undefined1 *)&puStack_c0;
  pppuStack_58 = &ppuStack_50;
  func_0x0001098960c0(aiStack_b0);
  if ((3 < aiStack_b0[0]) && (puStack_a8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_a8)();
  }
  lVar7 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar7)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar7) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar7))();
    }
    lVar7 = lVar7 + -0x10;
  } while (lVar7 != -0x30);
  if (puStack_c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_c0)();
  }
  if (puStack_b8 != (undefined8 *)0x0) {
    (**(code **)*puStack_b8)();
  }
  return;
}



/* Entry: 10a8addb8; end: 10a8ade03;  */

void FUN_10a8addb8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_10a8ad420(lVar1 + 0x30);
    FUN_10a297544(lVar1 + 0x20);
    FUN_10a5ca2e0(lVar1 + 0x10);
    func_0x00010a004dac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a8ade04; end: 10a8ade1b;  */

void FUN_10a8ade04(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a8ade1c; end: 10a8ade6b;  */

void FUN_10a8ade1c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_10a8ad420(puVar1 + 5);
    FUN_10a297544(puVar1 + 3);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      __ZdlPv(*puVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a8ade6c; end: 10a8ade93;  */

void FUN_10a8ade6c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a8ade94; end: 10a8adeb3;  */

void FUN_10a8ade94(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c253b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8adeb4; end: 10a8adec3;  */

void FUN_10a8adeb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a8adebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a8adec4; end: 10a8adf1b;  */

long FUN_10a8adec4(long param_1)

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



/* Entry: 10a8adf1c; end: 10a8ae54f;  */

/* WARNING: Removing unreachable block (ram,0x00010a8ae2a4) */
/* WARNING: Removing unreachable block (ram,0x00010a8ae338) */

void FUN_10a8adf1c(long *param_1,long param_2,long *param_3,long *param_4,code **param_5)

{
  long *plVar1;
  undefined **ppuVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined **ppuVar7;
  code **ppcVar8;
  code **ppcVar9;
  code **ppcVar10;
  code **ppcVar11;
  code *pcVar12;
  undefined *puVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  code *pcVar17;
  code **unaff_x21;
  code **ppcVar18;
  long *plVar19;
  code **unaff_x24;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  int aiStack_330 [2];
  undefined8 *puStack_328;
  undefined8 *apuStack_320 [2];
  undefined1 auStack_310 [16];
  undefined4 uStack_300;
  undefined8 **ppuStack_2f8;
  int aiStack_2f0 [2];
  long lStack_2e8;
  undefined8 **ppuStack_2e0;
  code *pcStack_2d8;
  undefined1 *puStack_2d0;
  undefined8 ***pppuStack_2c8;
  undefined8 **ppuStack_2c0;
  undefined8 uStack_2b8;
  code **ppcStack_2b0;
  long *plStack_2a8;
  code **ppcStack_2a0;
  code **ppcStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 *puStack_280;
  code *pcStack_278;
  code *pcStack_270;
  long *plStack_268;
  code **ppcStack_260;
  long *plStack_258;
  long alStack_250 [40];
  code *pcStack_110;
  code *pcStack_108;
  code *pcStack_100;
  long *plStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long lStack_b0;
  long *plStack_a8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  long *plStack_90;
  long lStack_58;
  
  ppcVar10 = &pcStack_270;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar17 = *(code **)(param_2 + 0x10);
  plStack_268 = (long *)param_1[1];
  pcStack_270 = (code *)*param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10a0f6c04(alStack_250,(long *)((long)pcVar17 + 0x38));
  plVar19 = (long *)((long)pcVar17 + 0x18);
  ppcVar9 = (code **)0x0;
  if (*plVar19 != 0) {
    ppcVar9 = (code **)(*plVar19 + 0x18);
  }
  FUN_10a0ff770(alStack_250);
  ppcVar18 = *(code ***)(*(long *)(pcStack_270 + 0x378) + 0x2f8);
  plVar15 = *(long **)(*(long *)(pcStack_270 + 0x378) + 0x300);
  if (plVar15 != (long *)0x0) {
    plVar16 = plVar15 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = *plVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppcVar11 = ppcVar9;
  ppcStack_260 = ppcVar18;
  plStack_258 = plVar15;
  if (ppcVar18 == (code **)0x0) goto LAB_10a8ae3d0;
  if (*(char *)(ppcVar18 + 8) == '\x01') {
    pcVar12 = *ppcVar18;
    pcStack_110 = pcStack_270;
    pcStack_108 = (code *)plStack_268;
    if (plStack_268 != (long *)0x0) {
      plVar16 = plStack_268 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = *plVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    ppuStack_98 = *(undefined ***)((long)pcVar17 + 0x20);
    pcStack_a0 = *(code **)((long)pcVar17 + 0x18);
    if (*(long *)((long)pcVar17 + 0x20) != 0) {
      plVar16 = (long *)(*(long *)((long)pcVar17 + 0x20) + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = *plVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plStack_a8 = *(long **)((long)pcVar17 + 0x30);
    lStack_b0 = *(long *)((long)pcVar17 + 0x28);
    if (*(long *)((long)pcVar17 + 0x30) != 0) {
      plVar16 = (long *)(*(long *)((long)pcVar17 + 0x30) + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = *plVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    ppcVar11 = &pcStack_a0;
    param_4 = &lStack_b0;
    param_5 = ppcVar18;
    (*pcVar12)(&pcStack_110,ppcVar11,pcVar17);
    plVar16 = plStack_a8;
    param_3 = (long *)pcVar17;
    if (plStack_a8 != (long *)0x0) {
      plVar1 = plStack_a8 + 1;
      do {
        lVar14 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        param_3 = (long *)pcVar17;
      }
    }
    ppuVar7 = ppuStack_98;
    if (ppuStack_98 != (undefined **)0x0) {
      ppuVar2 = ppuStack_98 + 1;
      do {
        puVar13 = *ppuVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar5) {
          *ppuVar2 = puVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuStack_98 + 0x10))(ppuStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
      }
    }
    pcVar17 = pcStack_108;
    if (pcStack_108 == (code *)0x0) goto LAB_10a8ae3d0;
    plVar16 = (long *)((long)pcStack_108 + 8);
    do {
      lVar14 = *plVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    if (*(char *)(ppcVar18 + 8) != '\x02') goto LAB_10a8ae3d0;
    ppcVar8 = ppcVar18;
    FUN_10a688b40();
    if (ppcVar8 != (code **)0x0) {
      *ppcVar8 = (code *)CONCAT44((int)((ulong)*ppcVar8 >> 0x20) + 1,(int)*ppcVar8 + 1);
      param_5 = (code **)((long)pcVar17 + 0x28);
      param_3 = plVar19;
      param_4 = (long *)pcVar17;
      FUN_10a8ae550(*ppcVar18,&pcStack_270,plVar19);
      iVar6 = *(int *)((long)ppcVar8 + 4) + -1;
      *(int *)((long)ppcVar8 + 4) = iVar6;
      ppcVar11 = ppcVar10;
      unaff_x24 = ppcVar8;
      if (iVar6 == 0) {
        *(undefined4 *)ppcVar8 = 0;
      }
      goto LAB_10a8ae3d0;
    }
    ppcVar11 = (code **)0x0;
    unaff_x21 = ppcVar9;
    if (ppcVar9 == (code **)0x0) goto LAB_10a8ae3d0;
    pcStack_108 = ppcVar18[1];
    pcStack_110 = *ppcVar18;
    if (ppcVar18[1] != (code *)0x0) {
      pcVar12 = ppcVar18[1] + 8;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
        if (bVar5) {
          *(long *)pcVar12 = *(long *)pcVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plStack_f8 = plStack_268;
    pcStack_100 = pcStack_270;
    if (plStack_268 != (long *)0x0) {
      plVar19 = plStack_268 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar5) {
          *plVar19 = *plVar19 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plStack_e8 = *(long **)((long)pcVar17 + 0x20);
    lStack_f0 = *(long *)((long)pcVar17 + 0x18);
    if (*(long *)((long)pcVar17 + 0x20) != 0) {
      plVar19 = (long *)(*(long *)((long)pcVar17 + 0x20) + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar5) {
          *plVar19 = *plVar19 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    unaff_x24 = &pcStack_110;
    if (*(char *)((long)pcVar17 + 0x17) < '\0') {
      param_3 = *(long **)((long)pcVar17 + 8);
      func_0x000107c3192c(&lStack_e0,*(long *)pcVar17,param_3);
    }
    else {
      lStack_d8 = *(long *)((long)pcVar17 + 8);
      lStack_e0 = *(long *)pcVar17;
      lStack_d0 = *(long *)((long)pcVar17 + 0x10);
    }
    plStack_c0 = *(long **)((long)pcVar17 + 0x30);
    lStack_c8 = *(long *)((long)pcVar17 + 0x28);
    if (*(long *)((long)pcVar17 + 0x30) != 0) {
      plVar19 = (long *)(*(long *)((long)pcVar17 + 0x30) + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar5) {
          *plVar19 = *plVar19 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pcStack_a0 = FUN_10a8ae878;
    ppuStack_98 = &PTR_FUN_110c253f0;
    plVar16 = (long *)0x58;
    __Znwm();
    plVar16[1] = (long)pcStack_108;
    *plVar16 = (long)pcStack_110;
    pcStack_110 = (code *)0x0;
    pcStack_108 = (code *)0x0;
    plVar16[3] = (long)plStack_f8;
    plVar16[2] = (long)pcStack_100;
    if (plStack_f8 != (long *)0x0) {
      plVar19 = plStack_f8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar5) {
          *plVar19 = *plVar19 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar19 = plVar16 + 4;
    plVar16[5] = (long)plStack_e8;
    *plVar19 = lStack_f0;
    if (plStack_e8 != (long *)0x0) {
      plVar1 = plStack_e8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar16[7] = lStack_d8;
    plVar16[6] = lStack_e0;
    plVar16[8] = lStack_d0;
    plVar16[10] = (long)plStack_c0;
    plVar16[9] = lStack_c8;
    if (plStack_c0 != (long *)0x0) {
      plVar1 = plStack_c0 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    ppcVar18 = &pcStack_a0;
    ppcVar11 = &pcStack_a0;
    plStack_90 = plVar16;
    FUN_10a4634ec(ppcVar9,ppcVar11);
    (*(code *)*ppuStack_98)(&ppuStack_98);
    plVar16 = plStack_c0;
    if (plStack_c0 != (long *)0x0) {
      plVar1 = plStack_c0 + 1;
      do {
        lVar14 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    plVar16 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar1 = plStack_e8 + 1;
      do {
        lVar14 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    plVar16 = plStack_f8;
    if (plStack_f8 != (long *)0x0) {
      plVar1 = plStack_f8 + 1;
      do {
        lVar14 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    pcVar17 = pcStack_108;
    if (pcStack_108 == (code *)0x0) goto LAB_10a8ae3d0;
    plVar16 = (long *)((long)pcStack_108 + 8);
    do {
      lVar14 = *plVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  pcVar17 = pcStack_108;
  if (lVar14 == 0) {
    (**(code **)(*(long *)pcStack_108 + 0x10))(pcStack_108);
    __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar17);
  }
LAB_10a8ae3d0:
  if (plVar15 != (long *)0x0) {
    plVar16 = plVar15 + 1;
    do {
      lVar14 = *plVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  plVar15 = alStack_250;
  func_0x00010a0f618c();
  plVar16 = plStack_268;
  if (plStack_268 != (long *)0x0) {
    plVar1 = plStack_268 + 1;
    do {
      lVar14 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_268 + 0x10))(plStack_268);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar15 = plVar16;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a297544(plVar19);
  FUN_10a5ca2e0(ppcVar18);
  func_0x00010a004dac(pcVar17);
  __ZdlPv();
  FUN_10a8ae830(&pcStack_110);
  func_0x00010a883768(&ppcStack_260);
  func_0x00010a0f618c(alStack_250);
  FUN_10a5ca2e0(&pcStack_270);
  plVar16 = plVar15;
  __Unwind_Resume();
  pcStack_278 = FUN_10a8ae550;
  ppcStack_2b0 = unaff_x24;
  plStack_2a8 = plVar19;
  ppcStack_2a0 = ppcVar18;
  ppcStack_298 = unaff_x21;
  plStack_290 = (long *)pcVar17;
  plStack_288 = plVar15;
  puStack_280 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(apuStack_320,plVar16 + 1,*plVar16);
  func_0x000109884820(&puStack_338,apuStack_320,*plVar16);
  if (apuStack_320[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_320[0])();
  }
  (**(code **)(*(long *)*plVar16 + 0x30))(&puStack_340);
  plVar16 = (long *)*plVar16;
  FUN_10a724820(apuStack_320,plVar16,ppcVar11);
  func_0x00010a5cc6a4(auStack_310,plVar16,param_3);
  uVar3 = param_4[1];
  plVar19 = (long *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_4 + 0x17);
    plVar19 = param_4;
  }
  (**(code **)(*plVar16 + 0x128))(&ppuStack_2e0,plVar16,plVar19,uVar3);
  uStack_300 = 6;
  ppuStack_2f8 = ppuStack_2e0;
  pcStack_2d8 = param_5[1];
  ppuStack_2e0 = (undefined8 **)*param_5;
  if (param_5[1] != (code *)0x0) {
    pcVar17 = param_5[1] + 8;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar17,0x10);
      if (bVar5) {
        *(long *)pcVar17 = *(long *)pcVar17 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppuStack_2c0 = (undefined8 **)&PTR_DAT_110c23cc8;
  func_0x000109899de4(aiStack_2f0,plVar16,&ppuStack_2e0,&ppuStack_2c0,0,0);
  pcVar17 = pcStack_2d8;
  if (pcStack_2d8 != (code *)0x0) {
    pcVar12 = pcStack_2d8 + 8;
    do {
      lVar14 = *(long *)pcVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
      if (bVar5) {
        *(long *)pcVar12 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*(long *)pcStack_2d8 + 0x10))(pcStack_2d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar17);
    }
  }
  ppuStack_2c0 = apuStack_320;
  uStack_2b8 = 4;
  (**(code **)(*plVar16 + 0x58))(plVar16);
  ppuStack_2e0 = &puStack_338;
  pcStack_2d8 = (code *)plVar16;
  puStack_2d0 = (undefined1 *)&puStack_340;
  pppuStack_2c8 = &ppuStack_2c0;
  func_0x0001098960c0(aiStack_330);
  if ((3 < aiStack_330[0]) && (puStack_328 != (undefined8 *)0x0)) {
    (**(code **)*puStack_328)();
  }
  lVar14 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_2f0 + lVar14)) &&
       (*(undefined8 **)((long)&lStack_2e8 + lVar14) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_2e8 + lVar14))();
    }
    lVar14 = lVar14 + -0x10;
  } while (lVar14 != -0x40);
  if (puStack_340 != (undefined8 *)0x0) {
    (**(code **)*puStack_340)();
  }
  if (puStack_338 != (undefined8 *)0x0) {
    (**(code **)*puStack_338)();
  }
  return;
}



/* Entry: 10a8ae550; end: 10a8ae82f;  */

void FUN_10a8ae550(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  int aiStack_c0 [2];
  undefined8 *puStack_b8;
  undefined8 *apuStack_b0 [2];
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined8 **ppuStack_88;
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 ***pppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  func_0x000109884c0c(apuStack_b0,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_c8,apuStack_b0,*param_1);
  if (apuStack_b0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_b0[0])();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_d0);
  plVar8 = (long *)*param_1;
  FUN_10a724820(apuStack_b0,plVar8,param_2);
  func_0x00010a5cc6a4(auStack_a0,plVar8,param_3);
  uVar3 = param_4[1];
  puVar6 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar6 = param_4;
  }
  (**(code **)(*plVar8 + 0x128))(&ppuStack_70,plVar8,puVar6,uVar3);
  uStack_90 = 6;
  ppuStack_88 = ppuStack_70;
  plStack_68 = (long *)param_5[1];
  ppuStack_70 = (undefined8 **)*param_5;
  if (param_5[1] != 0) {
    plVar1 = (long *)(param_5[1] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppuStack_50 = (undefined8 **)&PTR_DAT_110c23cc8;
  func_0x000109899de4(aiStack_80,plVar8,&ppuStack_70,&ppuStack_50,0,0);
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  ppuStack_50 = apuStack_b0;
  uStack_48 = 4;
  (**(code **)(*plVar8 + 0x58))(plVar8);
  ppuStack_70 = &puStack_c8;
  plStack_68 = plVar8;
  puStack_60 = (undefined1 *)&puStack_d0;
  pppuStack_58 = &ppuStack_50;
  func_0x0001098960c0(aiStack_c0);
  if ((3 < aiStack_c0[0]) && (puStack_b8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_b8)();
  }
  lVar7 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar7)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar7) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar7))();
    }
    lVar7 = lVar7 + -0x10;
  } while (lVar7 != -0x40);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a8ae830; end: 10a8ae877;  */

long FUN_10a8ae830(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a8adec4(param_1 + 0x48);
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  FUN_10a297544(param_1 + 0x20);
  FUN_10a5ca2e0(param_1 + 0x10);
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



/* Entry: 10a8ae878; end: 10a8ae88f;  */

void FUN_10a8ae878(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  int aiStack_c0 [2];
  undefined8 *puStack_b8;
  undefined8 *apuStack_b0 [2];
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined8 **ppuStack_88;
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 ***pppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  puVar6 = (undefined8 *)*puVar7;
  func_0x000109884c0c(apuStack_b0,puVar6 + 1,*puVar6);
  func_0x000109884820(&puStack_c8,apuStack_b0,*puVar6);
  if (apuStack_b0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_b0[0])();
  }
  (**(code **)(*(long *)*puVar6 + 0x30))(&puStack_d0);
  plVar9 = (long *)*puVar6;
  FUN_10a724820(apuStack_b0,plVar9,puVar7 + 2);
  func_0x00010a5cc6a4(auStack_a0,plVar9,puVar7 + 4);
  uVar3 = puVar7[7];
  plVar1 = (long *)puVar7[6];
  if (-1 < (char)*(byte *)((long)puVar7 + 0x47)) {
    uVar3 = (ulong)*(byte *)((long)puVar7 + 0x47);
    plVar1 = puVar7 + 6;
  }
  (**(code **)(*plVar9 + 0x128))(&ppuStack_70,plVar9,plVar1,uVar3);
  uStack_90 = 6;
  ppuStack_88 = ppuStack_70;
  plStack_68 = (long *)puVar7[10];
  ppuStack_70 = (undefined8 **)puVar7[9];
  if (puVar7[10] != 0) {
    plVar1 = (long *)(puVar7[10] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppuStack_50 = (undefined8 **)&PTR_DAT_110c23cc8;
  func_0x000109899de4(aiStack_80,plVar9,&ppuStack_70,&ppuStack_50,0,0);
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
    do {
      lVar8 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  ppuStack_50 = apuStack_b0;
  uStack_48 = 4;
  (**(code **)(*plVar9 + 0x58))(plVar9);
  ppuStack_70 = &puStack_c8;
  plStack_68 = plVar9;
  puStack_60 = (undefined1 *)&puStack_d0;
  pppuStack_58 = &ppuStack_50;
  func_0x0001098960c0(aiStack_c0);
  if ((3 < aiStack_c0[0]) && (puStack_b8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_b8)();
  }
  lVar8 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar8)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar8) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar8))();
    }
    lVar8 = lVar8 + -0x10;
  } while (lVar8 != -0x40);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a8ae890; end: 10a8ae8eb;  */

void FUN_10a8ae890(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_10a8adec4(lVar1 + 0x48);
    if (*(char *)(lVar1 + 0x47) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x30));
    }
    FUN_10a297544(lVar1 + 0x20);
    FUN_10a5ca2e0(lVar1 + 0x10);
    func_0x00010a004dac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a8ae8ec; end: 10a8ae903;  */

void FUN_10a8ae8ec(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a8ae904; end: 10a8ae963;  */

void FUN_10a8ae904(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    if (puVar1[7] != 0) {
      puVar1[8] = puVar1[7];
      __ZdlPv();
    }
    FUN_10a8adec4(puVar1 + 5);
    FUN_10a297544(puVar1 + 3);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      __ZdlPv(*puVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a8ae964; end: 10a8ae98b;  */

void FUN_10a8ae964(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a8ae98c; end: 10a8ae9ab;  */

void FUN_10a8ae98c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c25430;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8ae9ac; end: 10a8ae9bb;  */

void FUN_10a8ae9ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a8ae9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a8ae9bc; end: 10a8aea13;  */

long FUN_10a8ae9bc(long param_1)

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



/* Entry: 10a8aea14; end: 10a8aee37;  */

void FUN_10a8aea14(long *param_1,undefined ******param_2)

{
  undefined ******ppppppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined ****ppppuVar5;
  undefined ******ppppppuVar6;
  undefined ******ppppppuVar7;
  undefined *****pppppuVar8;
  undefined ******ppppppuVar9;
  undefined *****pppppuVar10;
  undefined ****ppppuVar11;
  undefined ******ppppppuVar12;
  long lVar13;
  undefined ******ppppppuVar14;
  undefined ******ppppppuVar15;
  undefined8 *puStack_190;
  undefined **ppuStack_188;
  int aiStack_180 [2];
  undefined8 *puStack_178;
  undefined *apuStack_170 [2];
  int aiStack_160 [2];
  long lStack_158;
  undefined ****ppppuStack_150;
  undefined ****ppppuStack_148;
  undefined1 *puStack_140;
  undefined ***pppuStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  undefined *****pppppuStack_120;
  undefined *****pppppuStack_118;
  undefined *****pppppuStack_110;
  undefined *****pppppuStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined ****ppppuStack_f0;
  undefined *****pppppuStack_e8;
  undefined ****ppppuStack_e0;
  undefined *****pppppuStack_d8;
  undefined *****pppppuStack_d0;
  undefined *****pppppuStack_c8;
  undefined ****ppppuStack_c0;
  undefined *****pppppuStack_b8;
  undefined ****ppppuStack_b0;
  undefined *****pppppuStack_a8;
  undefined ****ppppuStack_a0;
  undefined *****pppppuStack_98;
  undefined ****ppppuStack_90;
  undefined *****pppppuStack_88;
  undefined ****ppppuStack_80;
  undefined ****ppppuStack_78;
  undefined ****ppppuStack_70;
  undefined *****pppppuStack_68;
  undefined ****ppppuStack_60;
  undefined *****pppppuStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuStack_e8 = (undefined *****)param_1[1];
  ppppuStack_f0 = (undefined ****)*param_1;
  *param_1 = 0;
  param_1[1] = 0;
  ppppppuVar15 = param_2 + 2;
  ppppppuVar6 = (undefined ******)(*ppppppuVar15)[3];
  pppppuVar10 = *ppppppuVar15 + 5;
  ppppppuVar9 = (undefined ******)0x1;
  ppppuStack_e0 = ppppuStack_f0;
  pppppuStack_d8 = pppppuStack_e8;
  FUN_10ac9e388();
  ppppppuVar14 = (undefined ******)ppppuStack_f0[0x6f][0x65];
  ppppppuVar12 = (undefined ******)ppppuStack_f0[0x6f][0x66];
  if (ppppppuVar12 != (undefined ******)0x0) {
    ppppppuVar7 = ppppppuVar12 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
      if (bVar3) {
        *ppppppuVar7 = (undefined *****)((long)*ppppppuVar7 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pppppuVar8 = pppppuVar10;
  pppppuStack_d0 = (undefined *****)ppppppuVar14;
  pppppuStack_c8 = (undefined *****)ppppppuVar12;
  if (ppppppuVar14 == (undefined ******)0x0) goto LAB_10a8aed28;
  if (*(char *)(ppppppuVar14 + 8) == '\x01') {
    pppppuVar10 = *ppppppuVar14;
    pppppuStack_88 = pppppuStack_d8;
    ppppuStack_90 = ppppuStack_e0;
    if ((undefined ******)pppppuStack_d8 != (undefined ******)0x0) {
      ppppppuVar6 = (undefined ******)(pppppuStack_d8 + 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar3) {
          *ppppppuVar6 = (undefined *****)((long)*ppppppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppppuStack_b8 = param_2[3];
    ppppuStack_c0 = (undefined ****)param_2[2];
    if (param_2[3] != (undefined *****)0x0) {
      pppppuVar8 = param_2[3] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar8,0x10);
        if (bVar3) {
          *pppppuVar8 = (undefined ****)((long)*pppppuVar8 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuVar6 = (undefined ******)&ppppuStack_90;
    pppppuVar8 = &ppppuStack_c0;
    ppppppuVar9 = ppppppuVar14;
    (*(code *)pppppuVar10)(ppppppuVar6,pppppuVar8);
    ppppppuVar7 = (undefined ******)pppppuStack_b8;
    if ((undefined ******)pppppuStack_b8 != (undefined ******)0x0) {
      ppppppuVar1 = (undefined ******)(pppppuStack_b8 + 1);
      do {
        pppppuVar10 = *ppppppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
        if (bVar3) {
          *ppppppuVar1 = (undefined *****)((long)pppppuVar10 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppuVar10 == (undefined *****)0x0) {
        (*(code *)(*pppppuStack_b8)[2])(pppppuStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar6 = ppppppuVar7;
      }
    }
    param_2 = (undefined ******)pppppuStack_88;
    if ((undefined ******)pppppuStack_88 == (undefined ******)0x0) goto LAB_10a8aed28;
    ppppppuVar7 = (undefined ******)(pppppuStack_88 + 1);
    do {
      pppppuVar10 = *ppppppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
      if (bVar3) {
        *ppppppuVar7 = (undefined *****)((long)pppppuVar10 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (*(char *)(ppppppuVar14 + 8) != '\x02') goto LAB_10a8aed28;
    ppppppuVar7 = ppppppuVar14;
    FUN_10a688b40();
    if (ppppppuVar7 != (undefined ******)0x0) {
      *ppppppuVar7 = (undefined *****)
                     CONCAT44((int)((ulong)*ppppppuVar7 >> 0x20) + 1,(int)*ppppppuVar7 + 1);
      ppppppuVar6 = (undefined ******)*ppppppuVar14;
      pppppuVar8 = &ppppuStack_e0;
      ppppppuVar9 = ppppppuVar15;
      FUN_10a8aee38(ppppppuVar6,pppppuVar8);
      iVar4 = *(int *)((long)ppppppuVar7 + 4) + -1;
      *(int *)((long)ppppppuVar7 + 4) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)ppppppuVar7 = 0;
      }
      goto LAB_10a8aed28;
    }
    ppppppuVar6 = (undefined ******)0x0;
    pppppuVar8 = (undefined *****)0x0;
    if (pppppuVar10 == (undefined *****)0x0) goto LAB_10a8aed28;
    ppppuStack_78 = (undefined ****)ppppppuVar14[1];
    ppppuStack_80 = (undefined ****)*ppppppuVar14;
    if (ppppppuVar14[1] != (undefined *****)0x0) {
      pppppuVar8 = ppppppuVar14[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar8,0x10);
        if (bVar3) {
          *pppppuVar8 = (undefined ****)((long)*pppppuVar8 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_b0 = ppppuStack_e0;
    pppppuStack_a8 = pppppuStack_d8;
    if ((undefined ******)pppppuStack_d8 != (undefined ******)0x0) {
      ppppppuVar6 = (undefined ******)(pppppuStack_d8 + 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar3) {
          *ppppppuVar6 = (undefined *****)((long)*ppppppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_a0 = (undefined ****)param_2[2];
    ppppppuVar7 = (undefined ******)param_2[3];
    if (ppppppuVar7 != (undefined ******)0x0) {
      ppppppuVar6 = ppppppuVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar3) {
          *ppppppuVar6 = (undefined *****)((long)*ppppppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_90 = (undefined ****)FUN_10a8af0b0;
    pppppuStack_88 = (undefined *****)&PTR_FUN_110c25470;
    ppppuStack_c0 = (undefined ****)0x0;
    pppppuStack_b8 = (undefined *****)0x0;
    ppppuStack_70 = ppppuStack_e0;
    pppppuStack_68 = pppppuStack_d8;
    if ((undefined ******)pppppuStack_d8 != (undefined ******)0x0) {
      ppppppuVar6 = (undefined ******)(pppppuStack_d8 + 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar3) {
          *ppppppuVar6 = (undefined *****)((long)*ppppppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (ppppppuVar7 != (undefined ******)0x0) {
      ppppppuVar6 = ppppppuVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar3) {
          *ppppppuVar6 = (undefined *****)((long)*ppppppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuVar14 = (undefined ******)&ppppuStack_90;
    pppppuVar8 = &ppppuStack_90;
    pppppuStack_98 = (undefined *****)ppppppuVar7;
    ppppuStack_60 = ppppuStack_a0;
    pppppuStack_58 = (undefined *****)ppppppuVar7;
    FUN_10a4634ec(pppppuVar10,pppppuVar8);
    ppppppuVar6 = &pppppuStack_88;
    (*(code *)*pppppuStack_88)();
    if (ppppppuVar7 != (undefined ******)0x0) {
      ppppppuVar1 = ppppppuVar7 + 1;
      do {
        pppppuVar10 = *ppppppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
        if (bVar3) {
          *ppppppuVar1 = (undefined *****)((long)pppppuVar10 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppuVar10 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar7)[2])(ppppppuVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar6 = ppppppuVar7;
      }
    }
    ppppppuVar7 = (undefined ******)pppppuStack_a8;
    if ((undefined ******)pppppuStack_a8 != (undefined ******)0x0) {
      ppppppuVar1 = (undefined ******)(pppppuStack_a8 + 1);
      do {
        pppppuVar10 = *ppppppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
        if (bVar3) {
          *ppppppuVar1 = (undefined *****)((long)pppppuVar10 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppuVar10 == (undefined *****)0x0) {
        (*(code *)(*pppppuStack_a8)[2])(pppppuStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar6 = ppppppuVar7;
      }
    }
    param_2 = (undefined ******)pppppuStack_b8;
    if ((undefined ******)pppppuStack_b8 == (undefined ******)0x0) goto LAB_10a8aed28;
    ppppppuVar7 = (undefined ******)(pppppuStack_b8 + 1);
    do {
      pppppuVar10 = *ppppppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
      if (bVar3) {
        *ppppppuVar7 = (undefined *****)((long)pppppuVar10 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (pppppuVar10 == (undefined *****)0x0) {
    (*(code *)(*param_2)[2])(param_2);
    ppppppuVar6 = param_2;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
LAB_10a8aed28:
  if (ppppppuVar12 != (undefined ******)0x0) {
    ppppppuVar7 = ppppppuVar12 + 1;
    do {
      pppppuVar10 = *ppppppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
      if (bVar3) {
        *ppppppuVar7 = (undefined *****)((long)pppppuVar10 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (pppppuVar10 == (undefined *****)0x0) {
      (*(code *)(*ppppppuVar12)[2])(ppppppuVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppppppuVar6 = ppppppuVar12;
    }
  }
  ppppppuVar12 = (undefined ******)pppppuStack_d8;
  pppppuStack_108 = (undefined *****)ppppppuVar6;
  if ((undefined ******)pppppuStack_d8 != (undefined ******)0x0) {
    ppppppuVar6 = (undefined ******)(pppppuStack_d8 + 1);
    do {
      pppppuVar10 = *ppppppuVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
      if (bVar3) {
        *ppppppuVar6 = (undefined *****)((long)pppppuVar10 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (pppppuVar10 == (undefined *****)0x0) {
      (*(code *)(*pppppuStack_d8)[2])(pppppuStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppuStack_108 = (undefined *****)ppppppuVar12;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    (*(code *)*pppppuStack_88)(ppppppuVar14 + 1);
    FUN_10a8af080(&ppppuStack_c0);
    func_0x00010a883870(&pppppuStack_d0);
    FUN_10a5ca2e0(&ppppuStack_e0);
    ppppppuVar6 = (undefined ******)pppppuStack_108;
    __Unwind_Resume();
    pcStack_f8 = FUN_10a8aee38;
    pppppuStack_120 = (undefined *****)ppppppuVar15;
    pppppuStack_118 = (undefined *****)ppppppuVar14;
    pppppuStack_110 = (undefined *****)param_2;
    puStack_100 = &stack0xfffffffffffffff0;
    func_0x000109884c0c(&ppppuStack_150,ppppppuVar6 + 1,*ppppppuVar6);
    func_0x000109884820(&ppuStack_188,&ppppuStack_150,*ppppppuVar6);
    if (ppppuStack_150 != (undefined ****)0x0) {
      (*(code *)**ppppuStack_150)();
    }
    (*(code *)(**ppppppuVar6)[6])(&puStack_190);
    pppppuVar10 = *ppppppuVar6;
    FUN_10a724820(apuStack_170,pppppuVar10,pppppuVar8);
    ppppuStack_148 = (undefined ****)ppppppuVar9[1];
    ppppuStack_150 = (undefined ****)*ppppppuVar9;
    if (ppppppuVar9[1] != (undefined *****)0x0) {
      pppppuVar8 = ppppppuVar9[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar8,0x10);
        if (bVar3) {
          *pppppuVar8 = (undefined ****)((long)*pppppuVar8 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuStack_130 = &PTR_DAT_110c23e18;
    func_0x000109899de4(aiStack_160,pppppuVar10,&ppppuStack_150,&ppuStack_130,0,0);
    ppppuVar5 = ppppuStack_148;
    if ((undefined *****)ppppuStack_148 != (undefined *****)0x0) {
      pppppuVar8 = (undefined *****)(ppppuStack_148 + 1);
      do {
        ppppuVar11 = *pppppuVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar8,0x10);
        if (bVar3) {
          *pppppuVar8 = (undefined ****)((long)ppppuVar11 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppuVar11 == (undefined ****)0x0) {
        (*(code *)(*ppppuStack_148)[2])(ppppuStack_148);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar5);
      }
    }
    ppuStack_130 = apuStack_170;
    uStack_128 = 2;
    (*(code *)(*pppppuVar10)[0xb])(pppppuVar10);
    ppppuStack_150 = (undefined ****)&ppuStack_188;
    ppppuStack_148 = (undefined ****)pppppuVar10;
    puStack_140 = (undefined1 *)&puStack_190;
    pppuStack_138 = &ppuStack_130;
    func_0x0001098960c0(aiStack_180);
    if ((3 < aiStack_180[0]) && (puStack_178 != (undefined8 *)0x0)) {
      (**(code **)*puStack_178)();
    }
    lVar13 = 0;
    do {
      if ((3 < *(int *)((long)aiStack_160 + lVar13)) &&
         (*(undefined8 **)((long)&lStack_158 + lVar13) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)((long)&lStack_158 + lVar13))();
      }
      lVar13 = lVar13 + -0x10;
    } while (lVar13 != -0x20);
    if (puStack_190 != (undefined8 *)0x0) {
      (**(code **)*puStack_190)();
    }
    if ((undefined ***)ppuStack_188 != (undefined ***)0x0) {
      (**(code **)*ppuStack_188)();
    }
    return;
  }
  return;
}



/* Entry: 10a8aee38; end: 10a8af07f;  */

void FUN_10a8aee38(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined *apuStack_80 [2];
  int aiStack_70 [2];
  long lStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_98,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_a0);
  plVar6 = (long *)*param_1;
  FUN_10a724820(apuStack_80,plVar6,param_2);
  plStack_58 = (long *)param_3[1];
  ppuStack_60 = (undefined8 **)*param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c23e18;
  func_0x000109899de4(aiStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  ppuStack_40 = apuStack_80;
  uStack_38 = 2;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_98;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_a0;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar5 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar5)) &&
       (*(undefined8 **)((long)&lStack_68 + lVar5) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_68 + lVar5))();
    }
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != -0x20);
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10a8af080; end: 10a8af0af;  */

long FUN_10a8af080(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a8ae9bc(param_1 + 0x20);
  FUN_10a5ca2e0(param_1 + 0x10);
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



/* Entry: 10a8af0b0; end: 10a8af0c3;  */

void FUN_10a8af0b0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined *apuStack_80 [2];
  int aiStack_70 [2];
  long lStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_98,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_a0);
  plVar7 = (long *)*puVar5;
  FUN_10a724820(apuStack_80,plVar7,param_1 + 0x20);
  plStack_58 = *(long **)(param_1 + 0x38);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x38) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c23e18;
  func_0x000109899de4(aiStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  ppuStack_40 = apuStack_80;
  uStack_38 = 2;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_98;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_a0;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar6 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar6)) &&
       (*(undefined8 **)((long)&lStack_68 + lVar6) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_68 + lVar6))();
    }
    lVar6 = lVar6 + -0x10;
  } while (lVar6 != -0x20);
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10a8af0c4; end: 10a8af0f3;  */

long FUN_10a8af0c4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a8ae9bc(param_1 + 0x28);
  FUN_10a5ca2e0(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a8af0f4; end: 10a8af18b;  */

void FUN_10a8af0f4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c25470;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
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
  lVar4 = *(long *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
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
  return;
}



/* Entry: 10a8af18c; end: 10a8af1ab;  */

void FUN_10a8af18c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c254b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8af1ac; end: 10a8af1bb;  */

void FUN_10a8af1ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a8af1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a8af1bc; end: 10a8af213;  */

long FUN_10a8af1bc(long param_1)

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



/* Entry: 10a8af214; end: 10a8afdf7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a8af214(undefined8 *param_1,long param_2,undefined ********param_3,
                  undefined ********param_4,undefined ********param_5)

{
  undefined *******pppppppuVar1;
  long *plVar2;
  undefined ********ppppppppuVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  undefined ********ppppppppuVar10;
  undefined ********ppppppppuVar11;
  undefined ********ppppppppuVar12;
  undefined8 *puVar13;
  undefined ********ppppppppuVar14;
  undefined **ppuVar15;
  undefined ******ppppppuVar16;
  undefined *******pppppppuVar17;
  long lVar18;
  undefined ********unaff_x20;
  undefined ********ppppppppuVar19;
  undefined *******pppppppuVar20;
  undefined ********ppppppppuVar21;
  undefined ********ppppppppuVar22;
  undefined ********unaff_x24;
  undefined8 *puStack_260;
  undefined *****pppppuStack_258;
  int aiStack_250 [2];
  undefined8 *puStack_248;
  undefined8 *apuStack_240 [2];
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [16];
  int aiStack_210 [2];
  long lStack_208;
  undefined *******pppppppuStack_200;
  undefined *******pppppppuStack_1f8;
  undefined1 *puStack_1f0;
  undefined8 ***pppuStack_1e8;
  undefined8 **ppuStack_1e0;
  undefined8 uStack_1d8;
  undefined ********ppppppppuStack_1d0;
  undefined ********ppppppppuStack_1c8;
  undefined ********ppppppppuStack_1c0;
  undefined ********ppppppppuStack_1b8;
  undefined ********ppppppppuStack_1b0;
  undefined ********ppppppppuStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined *******pppppppuStack_188;
  undefined ********ppppppppuStack_180;
  undefined ********ppppppppuStack_178;
  undefined ********ppppppppuStack_170;
  undefined ********ppppppppuStack_168;
  undefined ********ppppppppuStack_160;
  undefined ********ppppppppuStack_158;
  undefined ********ppppppppuStack_150;
  undefined ********ppppppppuStack_148;
  undefined ********ppppppppuStack_140;
  undefined ********ppppppppuStack_138;
  undefined ********ppppppppuStack_130;
  undefined ********ppppppppuStack_128;
  undefined ********ppppppppuStack_120;
  undefined ********ppppppppuStack_118;
  undefined ********ppppppppuStack_110;
  undefined ********ppppppppuStack_108;
  undefined8 uStack_100;
  undefined ********ppppppppuStack_f8;
  undefined ********ppppppppuStack_f0;
  undefined ********ppppppppuStack_e8;
  undefined8 uStack_e0;
  undefined ********ppppppppuStack_d8;
  undefined *******pppppppuStack_d0;
  undefined ********ppppppppuStack_c8;
  undefined ********ppppppppuStack_c0;
  undefined ********ppppppppuStack_b8;
  undefined ********ppppppppuStack_b0;
  undefined ********ppppppppuStack_a8;
  undefined8 *puStack_a0;
  undefined ********ppppppppuStack_98;
  char cStack_90;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppppuStack_178 = (undefined ********)param_1[1];
  ppppppppuVar21 = (undefined ********)*param_1;
  *param_1 = 0;
  param_1[1] = 0;
  ppppppppuVar22 = (undefined ********)ppppppppuVar21[0xae];
  ppppppppuVar19 = (undefined ********)ppppppppuVar21[0xaf];
  if (ppppppppuVar19 != (undefined ********)0x0) {
    ppppppppuVar10 = ppppppppuVar19 + 1;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar10,0x10);
      if (bVar8) {
        *ppppppppuVar10 = (undefined *******)((long)*ppppppppuVar10 + 1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  ppppppppuVar14 = *(undefined *********)(param_2 + 0x10);
  ppppppppuVar10 = ppppppppuVar22 + 0xc;
  ppppppppuStack_180 = ppppppppuVar21;
  ppppppppuStack_130 = ppppppppuVar22;
  ppppppppuStack_128 = ppppppppuVar19;
  FUN_10a8aaad4();
  if (ppppppppuVar10 == (undefined ********)0x0) {
    ppuVar15 = &PTR_PTR_113303f20;
    ppppppppuVar12 = (undefined ********)ppuVar15;
    FUN_10ae079a0();
    FUN_10ae07cd4(ppppppppuVar12,&PTR_PTR_113303f20);
    goto joined_r0x00010a8af394;
  }
  ppppppppuStack_140 = (undefined ********)ppppppppuVar10[4][9];
  ppppppppuStack_138 = (undefined ********)ppppppppuVar10[4][10];
  if (ppppppppuStack_138 != (undefined ********)0x0) {
    ppppppppuVar19 = ppppppppuStack_138 + 1;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar19,0x10);
      if (bVar8) {
        *ppppppppuVar19 = (undefined *******)((long)*ppppppppuVar19 + 1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  pppppppuVar17 = ppppppppuVar21[0x46];
  bVar5 = *(byte *)((long)ppppppppuStack_140 + 0x47);
  ppppppppuVar19 = (undefined ********)ppppppppuStack_140[7];
  if (-1 < (char)bVar5) {
    ppppppppuVar19 = (undefined ********)(ulong)bVar5;
  }
  bVar6 = *(byte *)((long)pppppppuVar17 + 0x47);
  ppppppppuVar3 = (undefined ********)pppppppuVar17[7];
  if (-1 < (char)bVar6) {
    ppppppppuVar3 = (undefined ********)(ulong)bVar6;
  }
  ppppppppuVar12 = ppppppppuVar10;
  if (ppppppppuVar19 == ppppppppuVar3) {
    ppppppppuVar12 = (undefined ********)ppppppppuStack_140[6];
    if (-1 < (char)bVar5) {
      ppppppppuVar12 = ppppppppuStack_140 + 6;
    }
    ppppppppuVar14 = (undefined ********)pppppppuVar17[6];
    if (-1 < (char)bVar6) {
      ppppppppuVar14 = (undefined ********)(pppppppuVar17 + 6);
    }
    param_3 = ppppppppuVar19;
    _memcmp(ppppppppuVar12,ppppppppuVar14,ppppppppuVar19);
    if ((int)ppppppppuVar12 != 0) goto LAB_10a8af30c;
    FUN_10a8ace60(&ppppppppuStack_120,ppppppppuVar10[4] + 3,ppppppppuVar22[6] + 0x2d);
    ppppppppuVar19 = ppppppppuStack_118;
    if ((char)uStack_100 == '\x01') {
      ppppppppuStack_150 = ppppppppuStack_120;
      ppppppppuStack_148 = ppppppppuStack_118;
      if (ppppppppuStack_118 != (undefined ********)0x0) {
        ppppppppuVar21 = ppppppppuStack_118 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar21,0x10);
          if (bVar8) {
            *ppppppppuVar21 = (undefined *******)((long)*ppppppppuVar21 + 1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      if (ppppppppuStack_120 != (undefined ********)0x0) {
        FUN_10a5a2038(ppppppppuStack_120,param_2 + 0x10);
      }
      if (ppppppppuVar19 != (undefined ********)0x0) {
        ppppppppuVar21 = ppppppppuVar19 + 1;
        do {
          pppppppuVar17 = *ppppppppuVar21;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar21,0x10);
          if (bVar8) {
            *ppppppppuVar21 = (undefined *******)((long)pppppppuVar17 + -1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (pppppppuVar17 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuVar19)[2])(ppppppppuVar19);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar19);
        }
      }
    }
    ppppppppuVar12 = (undefined ********)&ppppppppuStack_b0;
    ppppppppuVar14 = (undefined ********)(ppppppppuVar10[4] + 3);
    param_3 = (undefined ********)(ppppppppuStack_130[6] + 0x4d);
    FUN_10a8ace60(ppppppppuVar12,ppppppppuVar14,param_3);
    ppppppppuVar19 = ppppppppuStack_a8;
    if (cStack_90 == '\x01') {
      ppppppppuStack_160 = ppppppppuStack_b0;
      ppppppppuStack_158 = ppppppppuStack_a8;
      if (ppppppppuStack_a8 != (undefined ********)0x0) {
        ppppppppuVar21 = ppppppppuStack_a8 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar21,0x10);
          if (bVar8) {
            *ppppppppuVar21 = (undefined *******)((long)*ppppppppuVar21 + 1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      ppppppppuVar12 = ppppppppuStack_b0;
      if (ppppppppuStack_b0 != (undefined ********)0x0) {
        ppppppppuVar14 = (undefined ********)(param_2 + 0x10);
        FUN_10a5a2038();
      }
      if (ppppppppuVar19 != (undefined ********)0x0) {
        ppppppppuVar21 = ppppppppuVar19 + 1;
        do {
          pppppppuVar17 = *ppppppppuVar21;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar21,0x10);
          if (bVar8) {
            *ppppppppuVar21 = (undefined *******)((long)pppppppuVar17 + -1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (pppppppuVar17 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuVar19)[2])(ppppppppuVar19);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppppuVar12 = ppppppppuVar19;
        }
      }
    }
    if (cStack_90 == '\x01') {
      if (ppppppppuStack_98 != (undefined ********)0x0) {
        ppppppppuVar19 = ppppppppuStack_98 + 1;
        do {
          pppppppuVar17 = *ppppppppuVar19;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar19,0x10);
          if (bVar8) {
            *ppppppppuVar19 = (undefined *******)((long)pppppppuVar17 + -1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (pppppppuVar17 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuStack_98)[2])(ppppppppuStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppppuVar12 = ppppppppuStack_98;
        }
      }
      ppppppppuVar19 = ppppppppuStack_a8;
      if (ppppppppuStack_a8 != (undefined ********)0x0) {
        ppppppppuVar21 = ppppppppuStack_a8 + 1;
        do {
          pppppppuVar17 = *ppppppppuVar21;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar21,0x10);
          if (bVar8) {
            *ppppppppuVar21 = (undefined *******)((long)pppppppuVar17 + -1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (pppppppuVar17 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuStack_a8)[2])(ppppppppuStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppppuVar12 = ppppppppuVar19;
        }
      }
    }
    ppppppppuVar19 = ppppppppuStack_108;
    if ((char)uStack_100 == '\x01') {
      if (ppppppppuStack_108 != (undefined ********)0x0) {
        ppppppppuVar21 = ppppppppuStack_108 + 1;
        do {
          pppppppuVar17 = *ppppppppuVar21;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar21,0x10);
          if (bVar8) {
            *ppppppppuVar21 = (undefined *******)((long)pppppppuVar17 + -1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (pppppppuVar17 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuStack_108)[2])(ppppppppuStack_108);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppppuVar12 = ppppppppuVar19;
        }
      }
      if (ppppppppuStack_118 == (undefined ********)0x0) goto LAB_10a8af78c;
      ppppppppuVar19 = ppppppppuStack_118 + 1;
      do {
        pppppppuVar17 = *ppppppppuVar19;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar19,0x10);
        if (bVar8) {
          *ppppppppuVar19 = (undefined *******)((long)pppppppuVar17 + -1);
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_10a8af770:
      ppppppppuVar19 = ppppppppuStack_118;
      if (pppppppuVar17 == (undefined *******)0x0) {
        (*(code *)(*ppppppppuStack_118)[2])(ppppppppuStack_118);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppppuVar12 = ppppppppuVar19;
      }
    }
  }
  else {
LAB_10a8af30c:
    if (ppppppppuVar19 == (undefined ********)0x0) {
      pppppppuVar17 = ppppppppuVar21[0xae];
      pppppppuVar20 = ppppppppuVar21[0xaf];
      if (pppppppuVar20 == (undefined *******)0x0) {
        FUN_10a8ace60(&ppppppppuStack_120,ppppppppuVar10[4] + 3,pppppppuVar17[6] + 0x3d);
      }
      else {
        pppppppuVar1 = pppppppuVar20 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pppppppuVar1,0x10);
          if (bVar8) {
            *pppppppuVar1 = (undefined ******)((long)*pppppppuVar1 + 1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        FUN_10a8ace60(&ppppppppuStack_120,ppppppppuVar10[4] + 3,pppppppuVar17[6] + 0x3d);
        do {
          ppppppuVar16 = *pppppppuVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pppppppuVar1,0x10);
          if (bVar8) {
            *pppppppuVar1 = (undefined ******)((long)ppppppuVar16 + -1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (ppppppuVar16 == (undefined ******)0x0) {
          (*(code *)(*pppppppuVar20)[2])(pppppppuVar20);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar20);
        }
      }
      ppppppppuVar19 = ppppppppuStack_118;
      if ((char)uStack_100 == '\x01') {
        ppppppppuStack_150 = ppppppppuStack_120;
        ppppppppuStack_148 = ppppppppuStack_118;
        if (ppppppppuStack_118 != (undefined ********)0x0) {
          ppppppppuVar21 = ppppppppuStack_118 + 1;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar21,0x10);
            if (bVar8) {
              *ppppppppuVar21 = (undefined *******)((long)*ppppppppuVar21 + 1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        if (ppppppppuStack_120 != (undefined ********)0x0) {
          FUN_10a5a2038(ppppppppuStack_120,param_2 + 0x10);
        }
        if (ppppppppuVar19 != (undefined ********)0x0) {
          ppppppppuVar21 = ppppppppuVar19 + 1;
          do {
            pppppppuVar17 = *ppppppppuVar21;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar21,0x10);
            if (bVar8) {
              *ppppppppuVar21 = (undefined *******)((long)pppppppuVar17 + -1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (pppppppuVar17 == (undefined *******)0x0) {
            (*(code *)(*ppppppppuVar19)[2])(ppppppppuVar19);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar19);
          }
        }
      }
      ppppppppuVar12 = (undefined ********)&ppppppppuStack_b0;
      ppppppppuVar14 = (undefined ********)(ppppppppuVar10[4] + 3);
      param_3 = (undefined ********)(ppppppppuStack_130[6] + 0x5d);
      FUN_10a8ace60(ppppppppuVar12,ppppppppuVar14,param_3);
      ppppppppuVar19 = ppppppppuStack_a8;
      if (cStack_90 == '\x01') {
        ppppppppuStack_160 = ppppppppuStack_b0;
        ppppppppuStack_158 = ppppppppuStack_a8;
        if (ppppppppuStack_a8 != (undefined ********)0x0) {
          ppppppppuVar21 = ppppppppuStack_a8 + 1;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar21,0x10);
            if (bVar8) {
              *ppppppppuVar21 = (undefined *******)((long)*ppppppppuVar21 + 1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        ppppppppuVar12 = ppppppppuStack_b0;
        if (ppppppppuStack_b0 != (undefined ********)0x0) {
          ppppppppuVar14 = (undefined ********)(param_2 + 0x10);
          FUN_10a5a2038();
        }
        if (ppppppppuVar19 != (undefined ********)0x0) {
          ppppppppuVar21 = ppppppppuVar19 + 1;
          do {
            pppppppuVar17 = *ppppppppuVar21;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar21,0x10);
            if (bVar8) {
              *ppppppppuVar21 = (undefined *******)((long)pppppppuVar17 + -1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (pppppppuVar17 == (undefined *******)0x0) {
            (*(code *)(*ppppppppuVar19)[2])(ppppppppuVar19);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppppuVar12 = ppppppppuVar19;
          }
        }
      }
      if (cStack_90 == '\x01') {
        if (ppppppppuStack_98 != (undefined ********)0x0) {
          ppppppppuVar19 = ppppppppuStack_98 + 1;
          do {
            pppppppuVar17 = *ppppppppuVar19;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar19,0x10);
            if (bVar8) {
              *ppppppppuVar19 = (undefined *******)((long)pppppppuVar17 + -1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (pppppppuVar17 == (undefined *******)0x0) {
            (*(code *)(*ppppppppuStack_98)[2])(ppppppppuStack_98);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppppuVar12 = ppppppppuStack_98;
          }
        }
        ppppppppuVar19 = ppppppppuStack_a8;
        if (ppppppppuStack_a8 != (undefined ********)0x0) {
          ppppppppuVar21 = ppppppppuStack_a8 + 1;
          do {
            pppppppuVar17 = *ppppppppuVar21;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar21,0x10);
            if (bVar8) {
              *ppppppppuVar21 = (undefined *******)((long)pppppppuVar17 + -1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (pppppppuVar17 == (undefined *******)0x0) {
            (*(code *)(*ppppppppuStack_a8)[2])(ppppppppuStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppppuVar12 = ppppppppuVar19;
          }
        }
      }
      ppppppppuVar19 = ppppppppuStack_108;
      if ((char)uStack_100 == '\x01') {
        if (ppppppppuStack_108 != (undefined ********)0x0) {
          ppppppppuVar21 = ppppppppuStack_108 + 1;
          do {
            pppppppuVar17 = *ppppppppuVar21;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar21,0x10);
            if (bVar8) {
              *ppppppppuVar21 = (undefined *******)((long)pppppppuVar17 + -1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (pppppppuVar17 == (undefined *******)0x0) {
            (*(code *)(*ppppppppuStack_108)[2])(ppppppppuStack_108);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppppuVar12 = ppppppppuVar19;
          }
        }
        if (ppppppppuStack_118 != (undefined ********)0x0) {
          ppppppppuVar19 = ppppppppuStack_118 + 1;
          do {
            pppppppuVar17 = *ppppppppuVar19;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar19,0x10);
            if (bVar8) {
              *ppppppppuVar19 = (undefined *******)((long)pppppppuVar17 + -1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          goto LAB_10a8af770;
        }
      }
    }
  }
LAB_10a8af78c:
  unaff_x24 = ppppppppuStack_180;
  ppppppppuVar21 = (undefined ********)ppppppppuStack_180[0x6f][99];
  unaff_x20 = (undefined ********)ppppppppuStack_180[0x6f][100];
  if (unaff_x20 != (undefined ********)0x0) {
    ppppppppuVar19 = unaff_x20 + 1;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar19,0x10);
      if (bVar8) {
        *ppppppppuVar19 = (undefined *******)((long)*ppppppppuVar19 + 1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  ppuVar15 = (undefined **)ppppppppuVar14;
  ppppppppuStack_170 = ppppppppuVar21;
  ppppppppuStack_168 = unaff_x20;
  if (ppppppppuVar21 != (undefined ********)0x0) {
    if (*(char *)(ppppppppuVar21 + 8) == '\x01') {
      pppppppuVar17 = *ppppppppuVar21;
      ppppppppuStack_120 = ppppppppuStack_180;
      ppppppppuStack_118 = ppppppppuStack_178;
      if (ppppppppuStack_178 != (undefined ********)0x0) {
        ppppppppuVar19 = ppppppppuStack_178 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar19,0x10);
          if (bVar8) {
            *ppppppppuVar19 = (undefined *******)((long)*ppppppppuVar19 + 1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      ppppppppuStack_a8 = *(undefined *********)(param_2 + 0x18);
      ppppppppuStack_b0 = *(undefined *********)(param_2 + 0x10);
      if (*(long *)(param_2 + 0x18) != 0) {
        plVar2 = (long *)(*(long *)(param_2 + 0x18) + 8);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = *plVar2 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      ppppppppuStack_b8 = ppppppppuStack_138;
      ppppppppuStack_c0 = ppppppppuStack_140;
      if (ppppppppuStack_138 != (undefined ********)0x0) {
        ppppppppuVar19 = ppppppppuStack_138 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar19,0x10);
          if (bVar8) {
            *ppppppppuVar19 = (undefined *******)((long)*ppppppppuVar19 + 1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      ppppppppuStack_c8 = *(undefined *********)(param_2 + 0x28);
      pppppppuStack_d0 = *(undefined ********)(param_2 + 0x20);
      if (*(long *)(param_2 + 0x28) != 0) {
        plVar2 = (long *)(*(long *)(param_2 + 0x28) + 8);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = *plVar2 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      ppppppppuVar12 = (undefined ********)&ppppppppuStack_120;
      ppuVar15 = (undefined **)&ppppppppuStack_b0;
      param_3 = (undefined ********)&ppppppppuStack_c0;
      param_4 = &pppppppuStack_d0;
      param_5 = ppppppppuVar21;
      (*(code *)pppppppuVar17)(ppppppppuVar12,ppuVar15,param_3);
      ppppppppuVar19 = ppppppppuStack_c8;
      if (ppppppppuStack_c8 != (undefined ********)0x0) {
        ppppppppuVar10 = ppppppppuStack_c8 + 1;
        do {
          pppppppuVar17 = *ppppppppuVar10;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar10,0x10);
          if (bVar8) {
            *ppppppppuVar10 = (undefined *******)((long)pppppppuVar17 + -1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (pppppppuVar17 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuStack_c8)[2])(ppppppppuStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppppuVar12 = ppppppppuVar19;
        }
      }
      ppppppppuVar19 = ppppppppuStack_b8;
      if (ppppppppuStack_b8 != (undefined ********)0x0) {
        ppppppppuVar10 = ppppppppuStack_b8 + 1;
        do {
          pppppppuVar17 = *ppppppppuVar10;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar10,0x10);
          if (bVar8) {
            *ppppppppuVar10 = (undefined *******)((long)pppppppuVar17 + -1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (pppppppuVar17 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuStack_b8)[2])(ppppppppuStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppppuVar12 = ppppppppuVar19;
        }
      }
      ppppppppuVar19 = ppppppppuStack_a8;
      if (ppppppppuStack_a8 != (undefined ********)0x0) {
        ppppppppuVar10 = ppppppppuStack_a8 + 1;
        do {
          pppppppuVar17 = *ppppppppuVar10;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar10,0x10);
          if (bVar8) {
            *ppppppppuVar10 = (undefined *******)((long)pppppppuVar17 + -1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (pppppppuVar17 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuStack_a8)[2])(ppppppppuStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppppuVar12 = ppppppppuVar19;
        }
      }
      if (ppppppppuStack_118 != (undefined ********)0x0) {
        ppppppppuVar19 = ppppppppuStack_118 + 1;
        do {
          pppppppuVar17 = *ppppppppuVar19;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar19,0x10);
          if (bVar8) {
            *ppppppppuVar19 = (undefined *******)((long)pppppppuVar17 + -1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
LAB_10a8af98c:
        ppppppppuVar19 = ppppppppuStack_118;
        if (pppppppuVar17 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuStack_118)[2])(ppppppppuStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppppuVar12 = ppppppppuVar19;
        }
      }
    }
    else if (*(char *)(ppppppppuVar21 + 8) == '\x02') {
      ppppppppuVar11 = ppppppppuVar21;
      FUN_10a688b40();
      ppppppppuVar10 = ppppppppuStack_138;
      ppppppppuVar3 = ppppppppuStack_140;
      ppppppppuVar19 = ppppppppuStack_178;
      if (ppppppppuVar11 == (undefined ********)0x0) {
        ppuVar15 = (undefined **)0x0;
        ppppppppuVar12 = (undefined ********)0x0;
        if (ppppppppuVar14 != (undefined ********)0x0) {
          pppppppuStack_188 = *ppppppppuVar21;
          pppppppuVar17 = ppppppppuVar21[1];
          if (pppppppuVar17 != (undefined *******)0x0) {
            pppppppuVar20 = pppppppuVar17 + 1;
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(pppppppuVar20,0x10);
              if (bVar8) {
                *pppppppuVar20 = (undefined ******)((long)*pppppppuVar20 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          ppppppppuStack_110 = unaff_x24;
          ppppppppuStack_108 = ppppppppuStack_178;
          if (ppppppppuStack_178 != (undefined ********)0x0) {
            ppppppppuVar22 = ppppppppuStack_178 + 1;
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar22,0x10);
              if (bVar8) {
                *ppppppppuVar22 = (undefined *******)((long)*ppppppppuVar22 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          uStack_190 = *(undefined8 *)(param_2 + 0x10);
          ppppppppuVar22 = *(undefined *********)(param_2 + 0x18);
          if (ppppppppuVar22 != (undefined ********)0x0) {
            ppppppppuVar21 = ppppppppuVar22 + 1;
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar21,0x10);
              if (bVar8) {
                *ppppppppuVar21 = (undefined *******)((long)*ppppppppuVar21 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          ppppppppuStack_f0 = ppppppppuStack_140;
          ppppppppuStack_e8 = ppppppppuStack_138;
          if (ppppppppuStack_138 != (undefined ********)0x0) {
            ppppppppuVar21 = ppppppppuStack_138 + 1;
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar21,0x10);
              if (bVar8) {
                *ppppppppuVar21 = (undefined *******)((long)*ppppppppuVar21 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          uVar4 = *(undefined8 *)(param_2 + 0x20);
          ppppppppuVar11 = *(undefined *********)(param_2 + 0x28);
          if (ppppppppuVar11 != (undefined ********)0x0) {
            ppppppppuVar21 = ppppppppuVar11 + 1;
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar21,0x10);
              if (bVar8) {
                *ppppppppuVar21 = (undefined *******)((long)*ppppppppuVar21 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          ppppppppuStack_b0 = (undefined ********)FUN_10a8b00b0;
          ppppppppuStack_a8 = (undefined ********)&PTR_FUN_110c254f0;
          puVar13 = (undefined8 *)0x50;
          ppppppppuStack_120 = (undefined ********)pppppppuStack_188;
          ppppppppuStack_118 = (undefined ********)pppppppuVar17;
          uStack_100 = uStack_190;
          ppppppppuStack_f8 = ppppppppuVar22;
          uStack_e0 = uVar4;
          ppppppppuStack_d8 = ppppppppuVar11;
          __Znwm();
          *puVar13 = pppppppuStack_188;
          puVar13[1] = pppppppuVar17;
          ppppppppuStack_120 = (undefined ********)0x0;
          ppppppppuStack_118 = (undefined ********)0x0;
          puVar13[2] = unaff_x24;
          puVar13[3] = ppppppppuVar19;
          if (ppppppppuVar19 != (undefined ********)0x0) {
            ppppppppuVar19 = ppppppppuVar19 + 1;
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar19,0x10);
              if (bVar8) {
                *ppppppppuVar19 = (undefined *******)((long)*ppppppppuVar19 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          puVar13[4] = uStack_190;
          puVar13[5] = ppppppppuVar22;
          if (ppppppppuVar22 != (undefined ********)0x0) {
            ppppppppuVar22 = ppppppppuVar22 + 1;
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar22,0x10);
              if (bVar8) {
                *ppppppppuVar22 = (undefined *******)((long)*ppppppppuVar22 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          puVar13[6] = ppppppppuVar3;
          puVar13[7] = ppppppppuVar10;
          if (ppppppppuVar10 != (undefined ********)0x0) {
            ppppppppuVar10 = ppppppppuVar10 + 1;
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar10,0x10);
              if (bVar8) {
                *ppppppppuVar10 = (undefined *******)((long)*ppppppppuVar10 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          puVar13[8] = uVar4;
          puVar13[9] = ppppppppuVar11;
          if (ppppppppuVar11 != (undefined ********)0x0) {
            ppppppppuVar22 = ppppppppuVar11 + 1;
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar22,0x10);
              if (bVar8) {
                *ppppppppuVar22 = (undefined *******)((long)*ppppppppuVar22 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          ppppppppuVar21 = (undefined ********)&ppppppppuStack_b0;
          ppuVar15 = (undefined **)&ppppppppuStack_b0;
          puStack_a0 = puVar13;
          FUN_10a4634ec(ppppppppuVar14,ppuVar15);
          ppppppppuVar12 = (undefined ********)&ppppppppuStack_a8;
          (*(code *)*ppppppppuStack_a8)();
          if (ppppppppuVar11 != (undefined ********)0x0) {
            ppppppppuVar22 = ppppppppuVar11 + 1;
            do {
              pppppppuVar17 = *ppppppppuVar22;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar22,0x10);
              if (bVar8) {
                *ppppppppuVar22 = (undefined *******)((long)pppppppuVar17 + -1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (pppppppuVar17 == (undefined *******)0x0) {
              (*(code *)(*ppppppppuVar11)[2])(ppppppppuVar11);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppppppppuVar12 = ppppppppuVar11;
            }
          }
          ppppppppuVar22 = ppppppppuStack_e8;
          if (ppppppppuStack_e8 != (undefined ********)0x0) {
            ppppppppuVar19 = ppppppppuStack_e8 + 1;
            do {
              pppppppuVar17 = *ppppppppuVar19;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar19,0x10);
              if (bVar8) {
                *ppppppppuVar19 = (undefined *******)((long)pppppppuVar17 + -1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (pppppppuVar17 == (undefined *******)0x0) {
              (*(code *)(*ppppppppuStack_e8)[2])(ppppppppuStack_e8);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppppppppuVar12 = ppppppppuVar22;
            }
          }
          ppppppppuVar22 = ppppppppuStack_f8;
          if (ppppppppuStack_f8 != (undefined ********)0x0) {
            ppppppppuVar19 = ppppppppuStack_f8 + 1;
            do {
              pppppppuVar17 = *ppppppppuVar19;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar19,0x10);
              if (bVar8) {
                *ppppppppuVar19 = (undefined *******)((long)pppppppuVar17 + -1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (pppppppuVar17 == (undefined *******)0x0) {
              (*(code *)(*ppppppppuStack_f8)[2])(ppppppppuStack_f8);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppppppppuVar12 = ppppppppuVar22;
            }
          }
          ppppppppuVar22 = ppppppppuStack_108;
          if (ppppppppuStack_108 != (undefined ********)0x0) {
            ppppppppuVar19 = ppppppppuStack_108 + 1;
            do {
              pppppppuVar17 = *ppppppppuVar19;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar19,0x10);
              if (bVar8) {
                *ppppppppuVar19 = (undefined *******)((long)pppppppuVar17 + -1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (pppppppuVar17 == (undefined *******)0x0) {
              (*(code *)(*ppppppppuStack_108)[2])(ppppppppuStack_108);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppppppppuVar12 = ppppppppuVar22;
            }
          }
          ppppppppuVar22 = ppppppppuVar3;
          if (ppppppppuStack_118 != (undefined ********)0x0) {
            ppppppppuVar19 = ppppppppuStack_118 + 1;
            do {
              pppppppuVar17 = *ppppppppuVar19;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar19,0x10);
              if (bVar8) {
                *ppppppppuVar19 = (undefined *******)((long)pppppppuVar17 + -1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            goto LAB_10a8af98c;
          }
        }
      }
      else {
        *ppppppppuVar11 =
             (undefined *******)
             CONCAT44((int)((ulong)*ppppppppuVar11 >> 0x20) + 1,(int)*ppppppppuVar11 + 1);
        ppppppppuVar12 = (undefined ********)*ppppppppuVar21;
        ppuVar15 = (undefined **)&ppppppppuStack_180;
        param_3 = (undefined ********)(param_2 + 0x10);
        param_4 = (undefined ********)&ppppppppuStack_140;
        param_5 = (undefined ********)(param_2 + 0x20);
        FUN_10a8afdf8(ppppppppuVar12,ppuVar15,param_3);
        iVar9 = *(int *)((long)ppppppppuVar11 + 4) + -1;
        *(int *)((long)ppppppppuVar11 + 4) = iVar9;
        ppppppppuVar22 = ppppppppuVar11;
        if (iVar9 == 0) {
          *(undefined4 *)ppppppppuVar11 = 0;
        }
      }
    }
  }
  if (unaff_x20 != (undefined ********)0x0) {
    ppppppppuVar19 = unaff_x20 + 1;
    do {
      pppppppuVar17 = *ppppppppuVar19;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar19,0x10);
      if (bVar8) {
        *ppppppppuVar19 = (undefined *******)((long)pppppppuVar17 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (pppppppuVar17 == (undefined *******)0x0) {
      (*(code *)(*unaff_x20)[2])(unaff_x20);
      ppppppppuVar12 = unaff_x20;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  ppppppppuVar10 = ppppppppuStack_138;
  ppppppppuVar19 = ppppppppuStack_128;
  if (ppppppppuStack_138 != (undefined ********)0x0) {
    ppppppppuVar14 = ppppppppuStack_138 + 1;
    do {
      pppppppuVar17 = *ppppppppuVar14;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar14,0x10);
      if (bVar8) {
        *ppppppppuVar14 = (undefined *******)((long)pppppppuVar17 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (pppppppuVar17 == (undefined *******)0x0) {
      (*(code *)(*ppppppppuStack_138)[2])(ppppppppuStack_138);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppppppppuVar19 = ppppppppuStack_128;
      ppppppppuVar12 = ppppppppuVar10;
    }
  }
joined_r0x00010a8af394:
  if (ppppppppuVar19 != (undefined ********)0x0) {
    ppppppppuVar10 = ppppppppuVar19 + 1;
    do {
      pppppppuVar17 = *ppppppppuVar10;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar10,0x10);
      if (bVar8) {
        *ppppppppuVar10 = (undefined *******)((long)pppppppuVar17 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (pppppppuVar17 == (undefined *******)0x0) {
      (*(code *)(*ppppppppuVar19)[2])(ppppppppuVar19);
      ppppppppuVar12 = ppppppppuVar19;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  ppppppppuVar10 = ppppppppuStack_178;
  ppppppppuStack_1a8 = ppppppppuVar12;
  if (ppppppppuStack_178 != (undefined ********)0x0) {
    ppppppppuVar14 = ppppppppuStack_178 + 1;
    do {
      pppppppuVar17 = *ppppppppuVar14;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar14,0x10);
      if (bVar8) {
        *ppppppppuVar14 = (undefined *******)((long)pppppppuVar17 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (pppppppuVar17 == (undefined *******)0x0) {
      (*(code *)(*ppppppppuStack_178)[2])(ppppppppuStack_178);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppppppppuStack_1a8 = ppppppppuVar10;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    (*(code *)*ppppppppuStack_a8)(ppppppppuVar21 + 1);
    FUN_10a8b0070(&ppppppppuStack_120);
    func_0x00010a883818(&ppppppppuStack_170);
    func_0x00010a5c92ec(&ppppppppuStack_140);
    FUN_10a8931d4(&ppppppppuStack_130);
    FUN_10a5ca2e0(&ppppppppuStack_180);
    ppppppppuVar10 = ppppppppuStack_1a8;
    __Unwind_Resume();
    pcStack_198 = FUN_10a8afdf8;
    ppppppppuStack_1d0 = unaff_x24;
    ppppppppuStack_1c8 = ppppppppuVar22;
    ppppppppuStack_1c0 = ppppppppuVar21;
    ppppppppuStack_1b8 = ppppppppuVar19;
    ppppppppuStack_1b0 = unaff_x20;
    puStack_1a0 = &stack0xfffffffffffffff0;
    func_0x000109884c0c(apuStack_240,ppppppppuVar10 + 1,*ppppppppuVar10);
    func_0x000109884820(&pppppuStack_258,apuStack_240,*ppppppppuVar10);
    if (apuStack_240[0] != (undefined8 *)0x0) {
      (**(code **)*apuStack_240[0])();
    }
    (*(code *)(**ppppppppuVar10)[6])(&puStack_260);
    pppppppuVar17 = *ppppppppuVar10;
    FUN_10a724820(apuStack_240,pppppppuVar17,ppuVar15);
    func_0x00010a5cc6a4(auStack_230,pppppppuVar17,param_3);
    func_0x00010a88aaac(auStack_220,pppppppuVar17,*param_4,param_4[1]);
    pppppppuStack_1f8 = param_5[1];
    pppppppuStack_200 = *param_5;
    if (param_5[1] != (undefined *******)0x0) {
      pppppppuVar20 = param_5[1] + 1;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pppppppuVar20,0x10);
        if (bVar8) {
          *pppppppuVar20 = (undefined ******)((long)*pppppppuVar20 + 1);
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    ppuStack_1e0 = (undefined8 **)&PTR_DAT_110c23da8;
    func_0x000109899de4(aiStack_210,pppppppuVar17,&pppppppuStack_200,&ppuStack_1e0,0,0);
    pppppppuVar20 = pppppppuStack_1f8;
    if (pppppppuStack_1f8 != (undefined *******)0x0) {
      pppppppuVar1 = pppppppuStack_1f8 + 1;
      do {
        ppppppuVar16 = *pppppppuVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pppppppuVar1,0x10);
        if (bVar8) {
          *pppppppuVar1 = (undefined ******)((long)ppppppuVar16 + -1);
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (ppppppuVar16 == (undefined ******)0x0) {
        (*(code *)(*pppppppuStack_1f8)[2])(pppppppuStack_1f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar20);
      }
    }
    ppuStack_1e0 = apuStack_240;
    uStack_1d8 = 4;
    (*(code *)(*pppppppuVar17)[0xb])(pppppppuVar17);
    pppppppuStack_200 = (undefined *******)&pppppuStack_258;
    pppppppuStack_1f8 = pppppppuVar17;
    puStack_1f0 = (undefined1 *)&puStack_260;
    pppuStack_1e8 = &ppuStack_1e0;
    func_0x0001098960c0(aiStack_250);
    if ((3 < aiStack_250[0]) && (puStack_248 != (undefined8 *)0x0)) {
      (**(code **)*puStack_248)();
    }
    lVar18 = 0;
    do {
      if ((3 < *(int *)((long)aiStack_210 + lVar18)) &&
         (*(undefined8 **)((long)&lStack_208 + lVar18) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)((long)&lStack_208 + lVar18))();
      }
      lVar18 = lVar18 + -0x10;
    } while (lVar18 != -0x40);
    if (puStack_260 != (undefined8 *)0x0) {
      (**(code **)*puStack_260)();
    }
    if (pppppuStack_258 != (undefined *****)0x0) {
      (*(code *)**pppppuStack_258)();
    }
    return;
  }
  return;
}



/* Entry: 10a8afdf8; end: 10a8b006f;  */

void FUN_10a8afdf8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  int aiStack_c0 [2];
  undefined8 *puStack_b8;
  undefined8 *apuStack_b0 [2];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 ***pppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  func_0x000109884c0c(apuStack_b0,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_c8,apuStack_b0,*param_1);
  if (apuStack_b0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_b0[0])();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_d0);
  plVar6 = (long *)*param_1;
  FUN_10a724820(apuStack_b0,plVar6,param_2);
  func_0x00010a5cc6a4(auStack_a0,plVar6,param_3);
  func_0x00010a88aaac(auStack_90,plVar6,*param_4,param_4[1]);
  plStack_68 = (long *)param_5[1];
  ppuStack_70 = (undefined8 **)*param_5;
  if (param_5[1] != 0) {
    plVar1 = (long *)(param_5[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_50 = (undefined8 **)&PTR_DAT_110c23da8;
  func_0x000109899de4(aiStack_80,plVar6,&ppuStack_70,&ppuStack_50,0,0);
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  ppuStack_50 = apuStack_b0;
  uStack_48 = 4;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_70 = &puStack_c8;
  plStack_68 = plVar6;
  puStack_60 = (undefined1 *)&puStack_d0;
  pppuStack_58 = &ppuStack_50;
  func_0x0001098960c0(aiStack_c0);
  if ((3 < aiStack_c0[0]) && (puStack_b8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_b8)();
  }
  lVar5 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar5)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar5) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar5))();
    }
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != -0x40);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a8b0070; end: 10a8b00af;  */

long FUN_10a8b0070(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a8af1bc(param_1 + 0x40);
  func_0x00010a5c92ec(param_1 + 0x30);
  FUN_10a297544(param_1 + 0x20);
  FUN_10a5ca2e0(param_1 + 0x10);
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



/* Entry: 10a8b00b0; end: 10a8b00c7;  */

void FUN_10a8b00b0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  int aiStack_c0 [2];
  undefined8 *puStack_b8;
  undefined8 *apuStack_b0 [2];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 ***pppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  puVar5 = (undefined8 *)*puVar6;
  func_0x000109884c0c(apuStack_b0,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_c8,apuStack_b0,*puVar5);
  if (apuStack_b0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_b0[0])();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_d0);
  plVar8 = (long *)*puVar5;
  FUN_10a724820(apuStack_b0,plVar8,puVar6 + 2);
  func_0x00010a5cc6a4(auStack_a0,plVar8,puVar6 + 4);
  func_0x00010a88aaac(auStack_90,plVar8,puVar6[6],puVar6[7]);
  plStack_68 = (long *)puVar6[9];
  ppuStack_70 = (undefined8 **)puVar6[8];
  if (puVar6[9] != 0) {
    plVar1 = (long *)(puVar6[9] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_50 = (undefined8 **)&PTR_DAT_110c23da8;
  func_0x000109899de4(aiStack_80,plVar8,&ppuStack_70,&ppuStack_50,0,0);
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  ppuStack_50 = apuStack_b0;
  uStack_48 = 4;
  (**(code **)(*plVar8 + 0x58))(plVar8);
  ppuStack_70 = &puStack_c8;
  plStack_68 = plVar8;
  puStack_60 = (undefined1 *)&puStack_d0;
  pppuStack_58 = &ppuStack_50;
  func_0x0001098960c0(aiStack_c0);
  if ((3 < aiStack_c0[0]) && (puStack_b8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_b8)();
  }
  lVar7 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar7)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar7) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar7))();
    }
    lVar7 = lVar7 + -0x10;
  } while (lVar7 != -0x40);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a8b00c8; end: 10a8b011b;  */

void FUN_10a8b00c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_10a8af1bc(lVar1 + 0x40);
    func_0x00010a5c92ec(lVar1 + 0x30);
    FUN_10a297544(lVar1 + 0x20);
    FUN_10a5ca2e0(lVar1 + 0x10);
    func_0x00010a004dac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a8b011c; end: 10a8b0133;  */

void FUN_10a8b011c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a8b0134; end: 10a8b015b;  */

long FUN_10a8b0134(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a8af1bc(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a8b015c; end: 10a8b0183;  */

void FUN_10a8b015c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110c25508;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 10a8b0184; end: 10a8b039f;  */

void FUN_10a8b0184(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 auStack_80 [2];
  char cStack_69;
  undefined8 uStack_68;
  long *plStack_60;
  undefined1 auStack_58 [8];
  long *plStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  char cStack_38;
  
  plVar7 = (long *)param_1[1];
  lVar6 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  lVar4 = *(long *)(lVar6 + 0x570);
  plVar5 = *(long **)(lVar6 + 0x578);
  if (plVar5 == (long *)0x0) {
    FUN_10a8ace60(auStack_58,param_2 + 0x10,*(undefined8 *)(lVar4 + 0x30));
  }
  else {
    plVar1 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_10a8ace60(auStack_58,param_2 + 0x10,*(undefined8 *)(lVar4 + 0x30));
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
  plVar5 = plStack_40;
  if (cStack_38 == '\x01') {
    uStack_68 = uStack_48;
    plStack_60 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a85ec74(auStack_80,*(undefined4 *)(param_2 + 0x28));
    FUN_10a8b03a0(uStack_48,auStack_80);
    if (cStack_69 < '\0') {
      __ZdlPv(auStack_80[0]);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  if (cStack_38 == '\x01') {
    if (plStack_40 != (long *)0x0) {
      plVar5 = plStack_40 + 1;
      do {
        lVar4 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
      }
    }
    if (plStack_50 != (long *)0x0) {
      plVar5 = plStack_50 + 1;
      do {
        lVar4 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
      }
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar5 = plVar7 + 1;
    do {
      lVar4 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10a8b03a0; end: 10a8b041b;  */

void FUN_10a8b03a0(long *param_1,code **param_2)

{
  undefined8 **ppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  code **ppcVar8;
  code **ppcVar9;
  undefined8 *puVar10;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  code **ppcStack_c0;
  undefined8 **ppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  code *pcStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  if (param_1 != (long *)0x0) {
    if ((char)param_1[8] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a8b03d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*param_1)(param_2,param_1);
      return;
    }
    if ((char)param_1[8] == '\x02') {
      lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar5 = param_1;
      ppcVar8 = param_2;
      FUN_10a688b40();
      if (plVar5 == (long *)0x0) {
        ppcVar9 = (code **)0x0;
        ppuVar6 = (undefined8 **)0x0;
        if (ppcVar8 != (code **)0x0) {
          ppuStack_98 = (undefined8 **)param_1[1];
          lStack_a0 = *param_1;
          if (param_1[1] != 0) {
            plVar5 = (long *)(param_1[1] + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar3) {
                *plVar5 = *plVar5 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (*(char *)((long)param_2 + 0x17) < '\0') {
            func_0x000107c3192c(&ppuStack_90,*param_2,param_2[1]);
          }
          else {
            pcStack_88 = param_2[1];
            ppuStack_90 = (undefined8 **)*param_2;
            pcStack_80 = param_2[2];
          }
          pcStack_78 = FUN_10a05aec4;
          param_2 = &pcStack_78;
          FUN_10a05af2c(apuStack_70,&PTR_FUN_110b9f388,&lStack_a0);
          ppcVar9 = &pcStack_78;
          FUN_10a4634ec(ppcVar8,ppcVar9);
          ppuVar6 = apuStack_70;
          (*(code *)*apuStack_70[0])();
          if ((long)pcStack_80 < 0) {
            ppuVar6 = ppuStack_90;
            __ZdlPv();
          }
          ppuVar7 = ppuStack_98;
          if (ppuStack_98 != (undefined8 **)0x0) {
            ppuVar1 = ppuStack_98 + 1;
            do {
              puVar10 = *ppuVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
              if (bVar3) {
                *ppuVar1 = (undefined8 *)((long)puVar10 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (puVar10 == (undefined8 *)0x0) {
              (*(code *)(*ppuStack_98)[2])(ppuStack_98);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppuVar6 = ppuVar7;
            }
          }
        }
      }
      else {
        *plVar5 = CONCAT44((int)((ulong)*plVar5 >> 0x20) + 1,(int)*plVar5 + 1);
        ppuVar6 = (undefined8 **)*param_1;
        ppcVar9 = param_2;
        FUN_10a05aca4(ppuVar6,param_2);
        iVar4 = *(int *)((long)plVar5 + 4) + -1;
        *(int *)((long)plVar5 + 4) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)plVar5 = 0;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010a004dac(&lStack_a0);
      ppuVar7 = ppuVar6;
      __Unwind_Resume();
      pcStack_a8 = FUN_10a05aca4;
      ppcStack_c0 = param_2;
      ppuStack_b8 = ppuVar6;
      puStack_b0 = &stack0xfffffffffffffff0;
      func_0x000109884c0c(&puStack_d0,ppuVar7 + 1,*ppuVar7);
      func_0x000109884820(&puStack_c8,&puStack_d0,*ppuVar7);
      if (puStack_d0 != (undefined8 *)0x0) {
        (**(code **)*puStack_d0)();
      }
      (**(code **)(**ppuVar7 + 0x30))(&puStack_d0);
      FUN_10a05adc0(*ppuVar7,&puStack_d0,&puStack_c8,ppcVar9);
      if (puStack_d0 != (undefined8 *)0x0) {
        (**(code **)*puStack_d0)();
      }
      if (puStack_c8 != (undefined8 *)0x0) {
        (**(code **)*puStack_c8)();
      }
      return;
    }
  }
  return;
}



/* Entry: 10a8b041c; end: 10a8b063f;  */

void FUN_10a8b041c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 auStack_80 [2];
  char cStack_69;
  undefined8 uStack_68;
  long *plStack_60;
  undefined1 auStack_58 [8];
  long *plStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  char cStack_38;
  
  plVar7 = (long *)param_1[1];
  lVar6 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  lVar4 = *(long *)(lVar6 + 0x570);
  plVar5 = *(long **)(lVar6 + 0x578);
  if (plVar5 == (long *)0x0) {
    FUN_10a8ace60(auStack_58,param_2 + 0x10,*(long *)(lVar4 + 0x30) + 0x80);
  }
  else {
    plVar1 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_10a8ace60(auStack_58,param_2 + 0x10,*(long *)(lVar4 + 0x30) + 0x80);
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
  plVar5 = plStack_40;
  if (cStack_38 == '\x01') {
    uStack_68 = uStack_48;
    plStack_60 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a85ec74(auStack_80,*(undefined4 *)(param_2 + 0x28));
    FUN_10a8b03a0(uStack_48,auStack_80);
    if (cStack_69 < '\0') {
      __ZdlPv(auStack_80[0]);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  if (cStack_38 == '\x01') {
    if (plStack_40 != (long *)0x0) {
      plVar5 = plStack_40 + 1;
      do {
        lVar4 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
      }
    }
    if (plStack_50 != (long *)0x0) {
      plVar5 = plStack_50 + 1;
      do {
        lVar4 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
      }
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar5 = plVar7 + 1;
    do {
      lVar4 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10a8b0640; end: 10a8b0683;  */

void FUN_10a8b0640(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10a8b0684; end: 10a8b0a4f;  */

void FUN_10a8b0684(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined7 uStack_80;
  char cStack_79;
  long *plStack_78;
  char cStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined1 auStack_58 [8];
  long *plStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  char cStack_38;
  
  plVar7 = (long *)param_1[1];
  lVar6 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  lVar4 = *(long *)(lVar6 + 0x570);
  plVar5 = *(long **)(lVar6 + 0x578);
  if (plVar5 == (long *)0x0) {
    FUN_10a8ace60(auStack_58,param_2 + 0x10,*(long *)(lVar4 + 0x30) + 0x168);
  }
  else {
    plVar1 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_10a8ace60(auStack_58,param_2 + 0x10,*(long *)(lVar4 + 0x30) + 0x168);
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
  plVar5 = plStack_40;
  if (cStack_38 == '\x01') {
    uStack_68 = uStack_48;
    plStack_60 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a85ec74(&uStack_90,*(undefined4 *)(param_2 + 0x28));
    FUN_10a8b03a0(uStack_48,&uStack_90);
    if (cStack_79 < '\0') {
      __ZdlPv(uStack_90);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  lVar4 = *(long *)(lVar6 + 0x570);
  plVar5 = *(long **)(lVar6 + 0x578);
  if (plVar5 == (long *)0x0) {
    FUN_10a8ace60(&uStack_90,param_2 + 0x10,*(long *)(lVar4 + 0x30) + 0x268);
  }
  else {
    plVar1 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_10a8ace60(&uStack_90,param_2 + 0x10,*(long *)(lVar4 + 0x30) + 0x268);
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
  plVar5 = plStack_78;
  if (cStack_70 == '\x01') {
    plStack_98 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a85ec74(auStack_b8,*(undefined4 *)(param_2 + 0x28));
    FUN_10a8b03a0(CONCAT17(cStack_79,uStack_80),auStack_b8);
    if (cStack_a1 < '\0') {
      __ZdlPv(auStack_b8[0]);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  if (cStack_70 == '\x01') {
    if (plStack_78 != (long *)0x0) {
      plVar5 = plStack_78 + 1;
      do {
        lVar4 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
      }
    }
    if (plStack_88 != (long *)0x0) {
      plVar5 = plStack_88 + 1;
      do {
        lVar4 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      }
    }
  }
  if (cStack_38 == '\x01') {
    if (plStack_40 != (long *)0x0) {
      plVar5 = plStack_40 + 1;
      do {
        lVar4 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
      }
    }
    if (plStack_50 != (long *)0x0) {
      plVar5 = plStack_50 + 1;
      do {
        lVar4 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
      }
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar5 = plVar7 + 1;
    do {
      lVar4 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10a8b0a50; end: 10a8b0a93;  */

void FUN_10a8b0a50(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10a8b0a94; end: 10a8b0e5f;  */

void FUN_10a8b0a94(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined7 uStack_80;
  char cStack_79;
  long *plStack_78;
  char cStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined1 auStack_58 [8];
  long *plStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  char cStack_38;
  
  plVar7 = (long *)param_1[1];
  lVar6 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  lVar4 = *(long *)(lVar6 + 0x570);
  plVar5 = *(long **)(lVar6 + 0x578);
  if (plVar5 == (long *)0x0) {
    FUN_10a8ace60(auStack_58,param_2 + 0x10,*(long *)(lVar4 + 0x30) + 0x268);
  }
  else {
    plVar1 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_10a8ace60(auStack_58,param_2 + 0x10,*(long *)(lVar4 + 0x30) + 0x268);
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
  plVar5 = plStack_40;
  if (cStack_38 == '\x01') {
    uStack_68 = uStack_48;
    plStack_60 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a85ec74(&uStack_90,*(undefined4 *)(param_2 + 0x28));
    FUN_10a8b03a0(uStack_48,&uStack_90);
    if (cStack_79 < '\0') {
      __ZdlPv(uStack_90);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  lVar4 = *(long *)(lVar6 + 0x570);
  plVar5 = *(long **)(lVar6 + 0x578);
  if (plVar5 == (long *)0x0) {
    FUN_10a8ace60(&uStack_90,param_2 + 0x10,*(long *)(lVar4 + 0x30) + 0x2e8);
  }
  else {
    plVar1 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_10a8ace60(&uStack_90,param_2 + 0x10,*(long *)(lVar4 + 0x30) + 0x2e8);
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
  plVar5 = plStack_78;
  if (cStack_70 == '\x01') {
    plStack_98 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a85ec74(auStack_b8,*(undefined4 *)(param_2 + 0x28));
    FUN_10a8b03a0(CONCAT17(cStack_79,uStack_80),auStack_b8);
    if (cStack_a1 < '\0') {
      __ZdlPv(auStack_b8[0]);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  if (cStack_70 == '\x01') {
    if (plStack_78 != (long *)0x0) {
      plVar5 = plStack_78 + 1;
      do {
        lVar4 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
      }
    }
    if (plStack_88 != (long *)0x0) {
      plVar5 = plStack_88 + 1;
      do {
        lVar4 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      }
    }
  }
  if (cStack_38 == '\x01') {
    if (plStack_40 != (long *)0x0) {
      plVar5 = plStack_40 + 1;
      do {
        lVar4 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
      }
    }
    if (plStack_50 != (long *)0x0) {
      plVar5 = plStack_50 + 1;
      do {
        lVar4 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
      }
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar5 = plVar7 + 1;
    do {
      lVar4 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10a8b0e60; end: 10a8b0ea3;  */

void FUN_10a8b0e60(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10a8b0ea4; end: 10a8b126f;  */

void FUN_10a8b0ea4(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined7 uStack_80;
  char cStack_79;
  long *plStack_78;
  char cStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined1 auStack_58 [8];
  long *plStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  char cStack_38;
  
  plVar7 = (long *)param_1[1];
  lVar6 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  lVar4 = *(long *)(lVar6 + 0x570);
  plVar5 = *(long **)(lVar6 + 0x578);
  if (plVar5 == (long *)0x0) {
    FUN_10a8ace60(auStack_58,param_2 + 0x10,*(long *)(lVar4 + 0x30) + 0x1e8);
  }
  else {
    plVar1 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_10a8ace60(auStack_58,param_2 + 0x10,*(long *)(lVar4 + 0x30) + 0x1e8);
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
  plVar5 = plStack_40;
  if (cStack_38 == '\x01') {
    uStack_68 = uStack_48;
    plStack_60 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a85ec74(&uStack_90,*(undefined4 *)(param_2 + 0x28));
    FUN_10a8b03a0(uStack_48,&uStack_90);
    if (cStack_79 < '\0') {
      __ZdlPv(uStack_90);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  lVar4 = *(long *)(lVar6 + 0x570);
  plVar5 = *(long **)(lVar6 + 0x578);
  if (plVar5 == (long *)0x0) {
    FUN_10a8ace60(&uStack_90,param_2 + 0x10,*(long *)(lVar4 + 0x30) + 0x2e8);
  }
  else {
    plVar1 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_10a8ace60(&uStack_90,param_2 + 0x10,*(long *)(lVar4 + 0x30) + 0x2e8);
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
  plVar5 = plStack_78;
  if (cStack_70 == '\x01') {
    plStack_98 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a85ec74(auStack_b8,*(undefined4 *)(param_2 + 0x28));
    FUN_10a8b03a0(CONCAT17(cStack_79,uStack_80),auStack_b8);
    if (cStack_a1 < '\0') {
      __ZdlPv(auStack_b8[0]);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  if (cStack_70 == '\x01') {
    if (plStack_78 != (long *)0x0) {
      plVar5 = plStack_78 + 1;
      do {
        lVar4 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
      }
    }
    if (plStack_88 != (long *)0x0) {
      plVar5 = plStack_88 + 1;
      do {
        lVar4 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      }
    }
  }
  if (cStack_38 == '\x01') {
    if (plStack_40 != (long *)0x0) {
      plVar5 = plStack_40 + 1;
      do {
        lVar4 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
      }
    }
    if (plStack_50 != (long *)0x0) {
      plVar5 = plStack_50 + 1;
      do {
        lVar4 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
      }
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar5 = plVar7 + 1;
    do {
      lVar4 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10a8b1270; end: 10a8b12b3;  */

void FUN_10a8b1270(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10a8b12b4; end: 10a8b1487;  */

void FUN_10a8b12b4(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  long lStack_b0;
  long *plStack_a8;
  undefined8 auStack_a0 [2];
  char cStack_89;
  long *aplStack_88 [2];
  char cStack_71;
  long alStack_70 [8];
  byte bStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_a8 = (long *)param_1[1];
  lStack_b0 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  lVar9 = *(long *)(lStack_b0 + 0x378);
  bStack_30 = 3;
  aplStack_88[0] = alStack_70;
  if (*(char *)(lVar9 + 0x388) == '\0') {
    bStack_30 = 0;
  }
  else {
    FUN_10a005398(aplStack_88,lVar9 + 0x348);
    bStack_30 = *(byte *)(lVar9 + 0x388);
  }
  uVar4 = *(int *)(param_2 + 0x28) - 1;
  if (uVar4 < 0x18) {
    puVar8 = (&PTR_DAT_110c25960)[uVar4];
  }
  else {
    puVar8 = &DAT_10f67ddf7;
  }
  func_0x000107c2b054(aplStack_88,puVar8);
  FUN_10a85ec74(auStack_a0,*(undefined4 *)(param_2 + 0x28));
  FUN_10a899ea0(alStack_70,&lStack_b0,aplStack_88,auStack_a0);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(aplStack_88[0]);
  }
  if (3 < (ulong)bStack_30) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a8b1470);
    (*pcVar5)();
  }
  plVar6 = alStack_70;
  (*(code *)(&PTR_FUN_110b9a040)[bStack_30])();
  plVar7 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar1 = plStack_a8 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar6 = plVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a5ca2e0(&lStack_b0);
  __Unwind_Resume(plVar6);
  func_0x000104bd46a0();
  if (-1 < *(char *)((long)plVar6 + 0x1f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar6[1]);
  return;
}



/* Entry: 10a8b1488; end: 10a8b14cb;  */

void FUN_10a8b1488(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10a8b14cc; end: 10a8b1587;  */

void FUN_10a8b14cc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a8b1648(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[3];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a8b1588; end: 10a8b1647;  */

void FUN_10a8b1588(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010a8b16b0(param_2,param_3);
  FUN_10a766348(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)(plVar4 + 3) = (int)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a8b1648; end: 10a8b1717;  */

void FUN_10a8b1648(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  
  ppuVar4 = param_1;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar4);
    param_2 = ppuVar4;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar4 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar5 = ppuVar4;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a053854(ppuVar4,ppuVar5);
    param_2 = ppuVar5;
    if (ppuVar4 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (ppuVar4 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar6 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar7 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  FUN_10a8b1648(plVar6,param_2);
  FUN_10a052e3c(param_4);
  iVar1 = *(int *)((long)plVar6 + 0x1c);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)iVar1;
  plVar6 = plVar7 + 0x4b;
  lVar8 = plVar7[0x59];
  uVar9 = lVar8 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar8 + 2];
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar6;
  lVar13 = plVar7[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar7[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_a8 = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar3 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar6 = lVar12;
          plVar7[0x4c] = lVar13 + uVar16 * 0x10;
          plVar7[0x4d] = lVar3 + uVar10 * 0x10;
          lStack_c8 = lVar8;
          lStack_c0 = lVar8;
          lStack_b8 = lVar8;
          lStack_b0 = lVar14;
          func_0x00010988c1b8(&lStack_c8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar7[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar7[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return;
}



/* Entry: 10a8b1718; end: 10a8b17d3;  */

void FUN_10a8b1718(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a8b1648(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar2 = *(int *)((long)param_2 + 0x1c);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a8b17d4; end: 10a8b1893;  */

void FUN_10a8b17d4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010a8b16b0(param_2,param_3);
  FUN_10a7686ac(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)((long)plVar4 + 0x1c) = (int)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a8b1894; end: 10a8b1973;  */

void FUN_10a8b1894(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a8b1648(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[5];
  plVar1 = (long *)plVar5[4];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x37)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x37);
    plVar1 = plVar5 + 4;
  }
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar1,uVar7);
  *param_1 = 6;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a8b1974; end: 10a8b1a6f;  */

void FUN_10a8b1974(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010a8b16b0(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (plVar4 + 4,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a8b1a70; end: 10a8b1b9f;  */

void FUN_10a8b1a70(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined **ppuStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  plVar5 = (long *)0x50;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110c17118;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plStack_40 = plVar5 + 3;
  *plStack_40 = (long)&PTR_FUN_110c256d8;
  plVar5[7] = 0;
  plVar5[6] = 0;
  plVar5[9] = 0;
  plVar5[8] = 0;
  ppuStack_48 = &PTR_DAT_110c24060;
  plStack_38 = plVar5;
  func_0x000109899de4(param_1,param_2,&plStack_40,&ppuStack_48,0,0);
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10a8b1ba0; end: 10a8b1c3f;  */

long * FUN_10a8b1ba0(long *param_1,int param_2)

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
    uVar3 = (ulong)param_2;
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
          if (*(int *)(plVar6 + 2) == param_2) {
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



/* Entry: 10a8b1c40; end: 10a8b1da3;  */

void FUN_10a8b1c40(undefined4 *param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8b1d90);
    (*pcVar1)();
  }
  puVar4 = (undefined8 *)0xa0;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = &PTR_FUN_110c24088;
  *puVar4 = &PTR_DAT_110c24a40;
  puVar4[0x11] = 0;
  puVar4[0x10] = 0;
  puVar4[0x13] = 0;
  puVar4[0x12] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[0xe] = 0;
  *(undefined4 *)(puVar4 + 0xf) = 1;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  *(undefined4 *)(puVar4 + 0x13) = 0;
  puVar4[0x12] = 0;
  plVar13 = (long *)plVar3[4];
  if (plVar13 == (long *)0x0) {
    func_0x000109899fd8(plVar3);
    plVar13 = (long *)plVar3[4];
  }
  plVar3[4] = *plVar13;
  *plVar13 = (long)&PTR_DAT_110b17478;
  plVar13[1] = (long)(puVar4 + 3);
  plVar13[2] = (long)puVar4;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar13,plVar5,&UNK_10989ba24,param_3);
  *param_1 = 7;
  plVar13 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar13[lVar6 + 2];
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar13;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar14 = lVar9 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar13;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar15 * 0x10);
          lVar10 = lVar11 + uVar14 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar13 = lVar10;
          plVar3[0x4c] = lVar11 + uVar15 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar15 * 0x10);
    plVar3[0x4c] = lVar11 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar7;
  return;
}



/* Entry: 10a8b1da4; end: 10a8b1e63;  */

void FUN_10a8b1da4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a8b1f1c(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a88acc4(param_1,param_2,plVar4[3],plVar4[4] - plVar4[3] >> 4);
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a8b1e64; end: 10a8b1f1b;  */

void FUN_10a8b1e64(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a8b1f84(param_1,param_2,FUN_10a8641d0,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a8b1f1c; end: 10a8b1f83;  */

void FUN_10a8b1f1c(undefined **param_1,undefined **param_2,undefined **param_3,ulong param_4,
                  undefined8 param_5,int *param_6,undefined8 param_7)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined ***pppuVar16;
  undefined8 extraout_x8;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined **ppuVar24;
  ulong uVar25;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long *plStack_168;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  int aiStack_b8 [2];
  undefined8 *puStack_b0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a052c2c();
    param_2 = ppuVar5;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c240d0;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar6 = (undefined4 *)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar5 = param_2;
  uVar15 = param_4;
  FUN_10a8b22a0(param_2,param_5);
  FUN_10a8b2308(param_7);
  if (*param_6 == 7) {
    ppuVar7 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_6 + 2));
    ppuVar24 = param_2;
    ppuStack_90 = ppuVar7;
    (**(code **)(*param_2 + 0x208))(param_2,&ppuStack_90);
    if (((ulong)ppuVar24 & 1) != 0) {
      ppuStack_98 = ppuStack_90;
      ppuVar7 = param_2;
      (**(code **)(*param_2 + 0x268))(param_2,&ppuStack_98);
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      FUN_10a860df0(&uStack_d0,ppuVar7);
      if (ppuVar7 != (undefined **)0x0) {
        ppuVar24 = (undefined **)0x0;
        do {
          (**(code **)(*param_2 + 0x288))(aiStack_b8,param_2,&ppuStack_98,ppuVar24);
          if (aiStack_b8[0] == 1) {
            ppuStack_a8 = (undefined **)0x0;
            plStack_a0 = (long *)0x0;
          }
          else {
            ppuVar8 = param_2;
            func_0x000109898688(param_2,aiStack_b8);
            if (ppuVar8 == (undefined **)0x0) {
              func_0x00010988bd28(&UNK_10f68f52e);
LAB_10a8b21fc:
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10a8b2200);
              (*pcVar3)();
            }
            func_0x00010989879c(&ppuStack_90);
            if ((ppuStack_90 == (undefined **)0x0) ||
               (ppuVar8 = ppuStack_90,
               ___dynamic_cast(ppuStack_90,&PTR_DAT_110b178e0,&PTR_DAT_110c23b78,0),
               ppuVar8 == (undefined **)0x0)) {
              pppuVar16 = &ppuStack_a8;
            }
            else {
              plStack_a0 = plStack_88;
              pppuVar16 = &ppuStack_90;
              ppuStack_a8 = ppuVar8;
            }
            *pppuVar16 = (undefined **)0x0;
            pppuVar16[1] = (undefined **)0x0;
            plVar12 = plStack_88;
            if (plStack_88 != (long *)0x0) {
              plVar11 = plStack_88 + 1;
              do {
                lVar18 = *plVar11;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar2) {
                  *plVar11 = lVar18 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar18 == 0) {
                (**(code **)(*plStack_88 + 0x10))(plStack_88);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
              }
            }
            if (ppuStack_a8 == (undefined **)0x0) {
              func_0x00010988bd28(&UNK_10f58251f);
              goto LAB_10a8b21fc;
            }
          }
          FUN_10a87f100(&uStack_d0,&ppuStack_a8);
          plVar12 = plStack_a0;
          if (plStack_a0 != (long *)0x0) {
            plVar11 = plStack_a0 + 1;
            do {
              lVar18 = *plVar11;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar2) {
                *plVar11 = lVar18 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar18 == 0) {
              (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
            }
          }
          if ((3 < aiStack_b8[0]) && (puStack_b0 != (undefined8 *)0x0)) {
            (**(code **)*puStack_b0)();
          }
          ppuVar24 = (undefined **)((long)ppuVar24 + 1);
        } while (ppuVar24 != ppuVar7);
      }
      if (ppuStack_98 != (undefined **)0x0) {
        (**(code **)*ppuStack_98)();
      }
      plVar12 = (long *)((long)ppuVar5 + ((long)param_4 >> 1));
      if ((param_4 & 1) != 0) {
        param_3 = *(undefined ***)(*plVar12 + ((ulong)param_3 & 0xffffffff));
      }
      (*(code *)param_3)(plVar12,&uStack_d0);
      func_0x00010a87edc4(&uStack_d0);
      *puVar6 = 0;
      return;
    }
    if (ppuStack_90 != (undefined **)0x0) {
      (**(code **)*ppuStack_90)();
    }
  }
  puVar9 = &UNK_10f58253c;
  func_0x00010988bd28();
  func_0x00010a87edc4(&uStack_d0);
  __Unwind_Resume();
  puVar10 = puVar9;
  func_0x000109898688();
  if (puVar10 != (undefined *)0x0) {
    FUN_10a053854(puVar9,puVar10);
    if (puVar9 != (undefined *)0x0) {
      uVar15 = 0;
      ___dynamic_cast();
      if (puVar9 != (undefined *)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar9 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar9 == 1) {
    return;
  }
  plVar11 = (long *)0x1;
  uVar14 = 0;
  FUN_10a052ee0(1,0,puVar9);
  plVar12 = plVar11;
  (**(code **)(*plVar11 + 0x58))();
  if ((ulong)plVar12[0x59] < 8) {
    plVar12[plVar12[0x59] + 0x4e] = plVar12[0x5a];
    plVar12[0x59] = plVar12[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar12 + 0x4b);
  }
  plVar13 = plVar11;
  FUN_10a8b1f1c(plVar11,uVar14);
  FUN_10a052e3c(uVar15);
  FUN_10a88acc4(extraout_x8,plVar11,plVar13[6],plVar13[7] - plVar13[6] >> 4);
  plVar11 = plVar12 + 0x4b;
  lVar18 = plVar12[0x59];
  uVar15 = lVar18 - 1;
  plVar12[0x59] = uVar15;
  if (uVar15 < 8) {
    uVar15 = plVar11[lVar18 + 2];
    if (plVar12[0x5a] == uVar15) {
      return;
    }
  }
  else {
    uVar15 = *(ulong *)(plVar12[0x57] + -8);
    plVar12[0x57] = plVar12[0x57] + -8;
    if (plVar12[0x5a] == uVar15) {
      return;
    }
  }
  lVar18 = *plVar11;
  lVar21 = plVar12[0x4c];
  lVar19 = lVar21 - lVar18;
  uVar23 = lVar19 >> 4;
  if (uVar23 < uVar15) {
    uVar25 = uVar15 - uVar23;
    lVar22 = plVar12[0x4d];
    if ((ulong)(lVar22 - lVar21 >> 4) < uVar25) {
      if (uVar15 >> 0x3c == 0) {
        uVar17 = lVar22 - lVar18 >> 3;
        if (uVar17 <= uVar15) {
          uVar17 = uVar15;
        }
        if (0x7fffffffffffffef < (ulong)(lVar22 - lVar18)) {
          uVar17 = 0xfffffffffffffff;
        }
        plStack_168 = plVar11;
        if (uVar17 >> 0x3c == 0) {
          lVar4 = uVar17 << 4;
          __Znwm();
          lVar21 = lVar4 + lVar19;
          _bzero(lVar21,uVar25 * 0x10);
          lVar20 = lVar21 + uVar23 * -0x10;
          _memcpy(lVar20,lVar18,lVar19);
          *plVar11 = lVar20;
          plVar12[0x4c] = lVar21 + uVar25 * 0x10;
          plVar12[0x4d] = lVar4 + uVar17 * 0x10;
          lStack_188 = lVar18;
          lStack_180 = lVar18;
          lStack_178 = lVar18;
          lStack_170 = lVar22;
          func_0x00010988c1b8(&lStack_188);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar21,uVar25 * 0x10);
    plVar12[0x4c] = lVar21 + uVar25 * 0x10;
  }
  else if (uVar15 < uVar23) {
    lVar18 = lVar18 + uVar15 * 0x10;
    while (lVar21 != lVar18) {
      lVar21 = lVar21 + -0x10;
      func_0x00010988c204(lVar21);
    }
    plVar12[0x4c] = lVar18;
  }
code_r0x00010988c138:
  plVar12[0x5a] = uVar15;
  return;
}



/* Entry: 10a8b1f84; end: 10a8b229f;  */

void FUN_10a8b1f84(undefined4 *param_1,long *param_2,code *param_3,ulong param_4,undefined8 param_5,
                  int *param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long **pplVar13;
  undefined8 extraout_x8;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long *plStack_148;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  int aiStack_98 [2];
  undefined8 *puStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  plVar6 = param_2;
  uVar12 = param_4;
  FUN_10a8b22a0(param_2,param_5);
  FUN_10a8b2308(param_7);
  if (*param_6 == 7) {
    plVar10 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_6 + 2));
    plVar21 = param_2;
    plStack_70 = plVar10;
    (**(code **)(*param_2 + 0x208))(param_2,&plStack_70);
    if (((ulong)plVar21 & 1) != 0) {
      plStack_78 = plStack_70;
      plVar10 = param_2;
      (**(code **)(*param_2 + 0x268))(param_2,&plStack_78);
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      FUN_10a860df0(&uStack_b0,plVar10);
      if (plVar10 != (long *)0x0) {
        plVar21 = (long *)0x0;
        do {
          (**(code **)(*param_2 + 0x288))(aiStack_98,param_2,&plStack_78,plVar21);
          if (aiStack_98[0] == 1) {
            plStack_88 = (long *)0x0;
            plStack_80 = (long *)0x0;
          }
          else {
            plVar7 = param_2;
            func_0x000109898688(param_2,aiStack_98);
            if (plVar7 == (long *)0x0) {
              func_0x00010988bd28(&UNK_10f68f52e);
LAB_10a8b21fc:
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8b2200);
              (*pcVar4)();
            }
            func_0x00010989879c(&plStack_70);
            if ((plStack_70 == (long *)0x0) ||
               (plVar7 = plStack_70,
               ___dynamic_cast(plStack_70,&PTR_DAT_110b178e0,&PTR_DAT_110c23b78,0),
               plVar7 == (long *)0x0)) {
              pplVar13 = &plStack_88;
            }
            else {
              plStack_80 = plStack_68;
              pplVar13 = &plStack_70;
              plStack_88 = plVar7;
            }
            *pplVar13 = (long *)0x0;
            pplVar13[1] = (long *)0x0;
            plVar7 = plStack_68;
            if (plStack_68 != (long *)0x0) {
              plVar1 = plStack_68 + 1;
              do {
                lVar15 = *plVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar15 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar15 == 0) {
                (**(code **)(*plStack_68 + 0x10))(plStack_68);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
              }
            }
            if (plStack_88 == (long *)0x0) {
              func_0x00010988bd28(&UNK_10f58251f);
              goto LAB_10a8b21fc;
            }
          }
          FUN_10a87f100(&uStack_b0,&plStack_88);
          plVar7 = plStack_80;
          if (plStack_80 != (long *)0x0) {
            plVar1 = plStack_80 + 1;
            do {
              lVar15 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar15 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plStack_80 + 0x10))(plStack_80);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          if ((3 < aiStack_98[0]) && (puStack_90 != (undefined8 *)0x0)) {
            (**(code **)*puStack_90)();
          }
          plVar21 = (long *)((long)plVar21 + 1);
        } while (plVar21 != plVar10);
      }
      if (plStack_78 != (long *)0x0) {
        (**(code **)*plStack_78)();
      }
      plVar6 = (long *)((long)plVar6 + ((long)param_4 >> 1));
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(*plVar6 + ((ulong)param_3 & 0xffffffff));
      }
      (*param_3)(plVar6,&uStack_b0);
      func_0x00010a87edc4(&uStack_b0);
      *param_1 = 0;
      return;
    }
    if (plStack_70 != (long *)0x0) {
      (**(code **)*plStack_70)();
    }
  }
  puVar8 = &UNK_10f58253c;
  func_0x00010988bd28();
  func_0x00010a87edc4(&uStack_b0);
  __Unwind_Resume();
  puVar9 = puVar8;
  func_0x000109898688();
  if (puVar9 != (undefined *)0x0) {
    FUN_10a053854(puVar8,puVar9);
    if (puVar8 != (undefined *)0x0) {
      uVar12 = 0;
      ___dynamic_cast();
      if (puVar8 != (undefined *)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar8 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar8 == 1) {
    return;
  }
  plVar10 = (long *)0x1;
  uVar11 = 0;
  FUN_10a052ee0(1,0,puVar8);
  plVar6 = plVar10;
  (**(code **)(*plVar10 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar21 = plVar10;
  FUN_10a8b1f1c(plVar10,uVar11);
  FUN_10a052e3c(uVar12);
  FUN_10a88acc4(extraout_x8,plVar10,plVar21[6],plVar21[7] - plVar21[6] >> 4);
  plVar10 = plVar6 + 0x4b;
  lVar15 = plVar6[0x59];
  uVar12 = lVar15 - 1;
  plVar6[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar10[lVar15 + 2];
    if (plVar6[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar12) {
      return;
    }
  }
  lVar15 = *plVar10;
  lVar18 = plVar6[0x4c];
  lVar16 = lVar18 - lVar15;
  uVar20 = lVar16 >> 4;
  if (uVar20 < uVar12) {
    uVar22 = uVar12 - uVar20;
    lVar19 = plVar6[0x4d];
    if ((ulong)(lVar19 - lVar18 >> 4) < uVar22) {
      if (uVar12 >> 0x3c == 0) {
        uVar14 = lVar19 - lVar15 >> 3;
        if (uVar14 <= uVar12) {
          uVar14 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - lVar15)) {
          uVar14 = 0xfffffffffffffff;
        }
        plStack_148 = plVar10;
        if (uVar14 >> 0x3c == 0) {
          lVar5 = uVar14 << 4;
          __Znwm();
          lVar18 = lVar5 + lVar16;
          _bzero(lVar18,uVar22 * 0x10);
          lVar17 = lVar18 + uVar20 * -0x10;
          _memcpy(lVar17,lVar15,lVar16);
          *plVar10 = lVar17;
          plVar6[0x4c] = lVar18 + uVar22 * 0x10;
          plVar6[0x4d] = lVar5 + uVar14 * 0x10;
          lStack_168 = lVar15;
          lStack_160 = lVar15;
          lStack_158 = lVar15;
          lStack_150 = lVar19;
          func_0x00010988c1b8(&lStack_168);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar18,uVar22 * 0x10);
    plVar6[0x4c] = lVar18 + uVar22 * 0x10;
  }
  else if (uVar12 < uVar20) {
    lVar15 = lVar15 + uVar12 * 0x10;
    while (lVar18 != lVar15) {
      lVar18 = lVar18 + -0x10;
      func_0x00010988c204(lVar18);
    }
    plVar6[0x4c] = lVar15;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar12;
  return;
}



/* Entry: 10a8b22a0; end: 10a8b2307;  */

void FUN_10a8b22a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  
  lVar8 = param_1;
  func_0x000109898688();
  if (lVar8 != 0) {
    FUN_10a053854(param_1,lVar8);
    if (param_1 != 0) {
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar3 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar3 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  uVar7 = 0;
  FUN_10a052ee0(1,0,puVar3);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = plVar4;
  FUN_10a8b1f1c(plVar4,uVar7);
  FUN_10a052e3c(param_4);
  FUN_10a88acc4(extraout_x8,plVar4,plVar6[6],plVar6[7] - plVar6[6] >> 4);
  plVar4 = plVar5 + 0x4b;
  lVar8 = plVar5[0x59];
  uVar9 = lVar8 - 1;
  plVar5[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar4[lVar8 + 2];
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar4;
  lVar13 = plVar5[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_98 = plVar4;
        if (uVar10 >> 0x3c == 0) {
          lVar2 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar2 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar4 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar2 + uVar10 * 0x10;
          lStack_b8 = lVar8;
          lStack_b0 = lVar8;
          lStack_a8 = lVar8;
          lStack_a0 = lVar14;
          func_0x00010988c1b8(&lStack_b8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar5[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar5[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar9;
  return;
}



/* Entry: 10a8b2308; end: 10a8b232b;  */

void FUN_10a8b2308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar6 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = plVar3;
  FUN_10a8b1f1c(plVar3,uVar6);
  FUN_10a052e3c(param_4);
  FUN_10a88acc4(extraout_x8,plVar3,plVar5[6],plVar5[7] - plVar5[6] >> 4);
  plVar3 = plVar4 + 0x4b;
  lVar7 = plVar4[0x59];
  uVar8 = lVar7 - 1;
  plVar4[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar3[lVar7 + 2];
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar3;
  lVar12 = plVar4[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar4[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar3 = lVar11;
          plVar4[0x4c] = lVar12 + uVar15 * 0x10;
          plVar4[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_98 = lVar7;
          lStack_90 = lVar7;
          lStack_88 = lVar7;
          lStack_80 = lVar13;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar4[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar4[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar8;
  return;
}



/* Entry: 10a8b232c; end: 10a8b23eb;  */

void FUN_10a8b232c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a8b1f1c(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a88acc4(param_1,param_2,plVar4[6],plVar4[7] - plVar4[6] >> 4);
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a8b23ec; end: 10a8b24a3;  */

void FUN_10a8b23ec(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a8b1f84(param_1,param_2,FUN_10a8644d0,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a8b24a4; end: 10a8b2563;  */

void FUN_10a8b24a4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a8b1f1c(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a88acc4(param_1,param_2,plVar4[9],plVar4[10] - plVar4[9] >> 4);
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a8b2564; end: 10a8b261b;  */

void FUN_10a8b2564(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a8b1f84(param_1,param_2,0x10a8644f4,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a8b261c; end: 10a8b26d7;  */

void FUN_10a8b261c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a8b1f1c(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0xc];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a8b26d8; end: 10a8b2797;  */

void FUN_10a8b26d8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a8b22a0(param_2,param_3);
  FUN_10a8b2798(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)(plVar4 + 0xc) = (int)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a8b2798; end: 10a8b27bb;  */

void FUN_10a8b2798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar6 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = plVar3;
  FUN_10a8b1f1c(plVar3,uVar6);
  FUN_10a052e3c(param_4);
  FUN_10a88acc4(extraout_x8,plVar3,plVar5[0xd],plVar5[0xe] - plVar5[0xd] >> 4);
  plVar3 = plVar4 + 0x4b;
  lVar7 = plVar4[0x59];
  uVar8 = lVar7 - 1;
  plVar4[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar3[lVar7 + 2];
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar3;
  lVar12 = plVar4[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar4[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar3 = lVar11;
          plVar4[0x4c] = lVar12 + uVar15 * 0x10;
          plVar4[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_98 = lVar7;
          lStack_90 = lVar7;
          lStack_88 = lVar7;
          lStack_80 = lVar13;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar4[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar4[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar8;
  return;
}



/* Entry: 10a8b27bc; end: 10a8b287b;  */

void FUN_10a8b27bc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a8b1f1c(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a88acc4(param_1,param_2,plVar4[0xd],plVar4[0xe] - plVar4[0xd] >> 4);
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a8b287c; end: 10a8b2933;  */

void FUN_10a8b287c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a8b1f84(param_1,param_2,0x10a864518,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a8b2934; end: 10a8b29ef;  */

void FUN_10a8b2934(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a8b1f1c(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0x10];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a8b29f0; end: 10a8b2aaf;  */

void FUN_10a8b29f0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a8b22a0(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)(plVar4 + 0x10) = (int)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a8b2ab0; end: 10a8b2b23;  */

void FUN_10a8b2ab0(undefined8 *param_1,undefined8 param_2,int param_3)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8b2b24);
  (*pcVar1)();
}



/* Entry: 10a8b2b24; end: 10a8b2c03;  */

void FUN_10a8b2b24(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a8b2c04(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[4];
  plVar1 = (long *)plVar5[3];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x2f)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x2f);
    plVar1 = plVar5 + 3;
  }
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar1,uVar7);
  *param_1 = 6;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}


