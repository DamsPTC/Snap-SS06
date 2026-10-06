/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aa79e18; end: 10aa7a24f;  */

undefined *******
FUN_10aa79e18(float param_1,undefined *******param_2,undefined *******param_3,
             undefined ******param_4)

{
  undefined *******pppppppuVar1;
  char cVar2;
  bool bVar3;
  undefined *******pppppppuVar4;
  long *plVar5;
  undefined *******pppppppuVar6;
  undefined *puVar7;
  int iVar8;
  undefined ******ppppppuVar9;
  undefined *****pppppuVar10;
  undefined *******pppppppuVar11;
  undefined ******ppppppuVar12;
  undefined *******pppppppuVar13;
  undefined ******ppppppuVar14;
  long lVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined *****pppppuStack_f0;
  undefined ******ppppppuStack_e8;
  undefined *****pppppuStack_e0;
  undefined ******ppppppuStack_d8;
  undefined ****ppppuStack_d0;
  undefined ******ppppppuStack_c8;
  undefined ******ppppppuStack_c0;
  undefined *****pppppuStack_b8;
  undefined *****pppppuStack_b0;
  undefined *****pppppuStack_a8;
  undefined ******ppppppuStack_a0;
  undefined *****pppppuStack_90;
  undefined ******ppppppuStack_88;
  long *plStack_80;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar4 = (undefined *******)param_2[0x18];
  pppppppuVar13 = param_3;
  if ((pppppppuVar4 == (undefined *******)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), pppppppuVar13 = param_3,
     ppppppuStack_d8 = (undefined ******)pppppppuVar4, pppppppuVar4 == (undefined *******)0x0))
  goto LAB_10aa7a190;
  pppppuStack_e0 = (undefined *****)param_2[0x17];
  if ((undefined ******)pppppuStack_e0 != (undefined ******)0x0) {
    pppppppuVar6 = param_2 + 6;
    ppppppuVar14 = *pppppppuVar6;
    if (ppppppuVar14 != (undefined ******)0x0) {
      pppppppuVar11 = (undefined *******)param_2[7];
      pppppuStack_f0 = (undefined *****)ppppppuVar14;
      ppppppuStack_e8 = (undefined ******)pppppppuVar11;
      if (pppppppuVar11 == (undefined *******)0x0) {
        *pppppppuVar6 = (undefined ******)0x0;
        param_2[7] = (undefined ******)0x0;
      }
      else {
        pppppppuVar13 = pppppppuVar11 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar13,0x10);
          if (bVar3) {
            *pppppppuVar13 = (undefined ******)((long)*pppppppuVar13 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        pppppppuVar13 = (undefined *******)param_2[7];
        *pppppppuVar6 = (undefined ******)0x0;
        param_2[7] = (undefined ******)0x0;
        if (pppppppuVar13 != (undefined *******)0x0) {
          pppppppuVar6 = pppppppuVar13 + 1;
          do {
            ppppppuVar9 = *pppppppuVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
            if (bVar3) {
              *pppppppuVar6 = (undefined ******)((long)ppppppuVar9 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (ppppppuVar9 == (undefined ******)0x0) {
            (*(code *)(*pppppppuVar13)[2])(pppppppuVar13);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppppppuVar4 = pppppppuVar13;
          }
        }
      }
      if (*(char *)(ppppppuVar14 + 8) == '\x01') {
        pppppuVar10 = *ppppppuVar14;
        ppppppuStack_88 = ppppppuStack_d8;
        pppppuStack_90 = pppppuStack_e0;
        if ((undefined *******)ppppppuStack_d8 != (undefined *******)0x0) {
          pppppppuVar13 = (undefined *******)(ppppppuStack_d8 + 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar13,0x10);
            if (bVar3) {
              *pppppppuVar13 = (undefined ******)((long)*pppppppuVar13 + 1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pppppppuVar4 = param_2 + 10;
        pppppppuVar13 = (undefined *******)&pppppuStack_90;
        ppppppuVar9 = (undefined ******)pppppuStack_e0;
        (*(code *)pppppuVar10)();
        param_1 = SUB84(ppppppuVar9,0);
        param_4 = ppppppuVar14;
        param_2 = (undefined *******)ppppppuStack_88;
        if ((undefined *******)ppppppuStack_88 != (undefined *******)0x0) {
          pppppppuVar6 = (undefined *******)(ppppppuStack_88 + 1);
          do {
            ppppppuVar9 = *pppppppuVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
            if (bVar3) {
              *pppppppuVar6 = (undefined ******)((long)ppppppuVar9 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
LAB_10aa79f88:
          param_4 = ppppppuVar14;
          if (ppppppuVar9 == (undefined ******)0x0) {
            (*(code *)(*param_2)[2])(param_2);
            pppppppuVar4 = param_2;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            param_4 = ppppppuVar14;
          }
        }
      }
      else {
        pppppppuVar13 = param_3;
        if (*(char *)(ppppppuVar14 + 8) == '\x02') {
          ppppppuVar9 = ppppppuVar14;
          FUN_10a688b40();
          if (ppppppuVar9 == (undefined ******)0x0) {
            pppppppuVar4 = (undefined *******)0x0;
            pppppppuVar13 = (undefined *******)0x0;
            if (param_3 != (undefined *******)0x0) {
              ppppppuStack_c8 = (undefined ******)ppppppuVar14[1];
              ppppuStack_d0 = (undefined ****)*ppppppuVar14;
              if (ppppppuVar14[1] != (undefined *****)0x0) {
                pppppuVar10 = ppppppuVar14[1] + 1;
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pppppuVar10,0x10);
                  if (bVar3) {
                    *pppppuVar10 = (undefined ****)((long)*pppppuVar10 + 1);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              if (*(char *)((long)param_2 + 0x67) < '\0') {
                ppppppuVar14 = param_2[0xb];
                func_0x000107c3192c(&ppppppuStack_c0,param_2[10]);
              }
              else {
                pppppuStack_b8 = (undefined *****)param_2[0xb];
                ppppppuStack_c0 = param_2[10];
                pppppuStack_b0 = (undefined *****)param_2[0xc];
                ppppppuVar14 = param_4;
              }
              ppppppuStack_a0 = ppppppuStack_d8;
              pppppuStack_a8 = pppppuStack_e0;
              if ((undefined *******)ppppppuStack_d8 != (undefined *******)0x0) {
                pppppppuVar13 = (undefined *******)(ppppppuStack_d8 + 1);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar13,0x10);
                  if (bVar3) {
                    *pppppppuVar13 = (undefined ******)((long)*pppppppuVar13 + 1);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              pppppuStack_90 = (undefined *****)FUN_10aa9d68c;
              ppppppuStack_88 = (undefined ******)&PTR_FUN_110c40320;
              plVar5 = (long *)0x38;
              __Znwm();
              plVar5[1] = (long)ppppppuStack_c8;
              *plVar5 = (long)ppppuStack_d0;
              ppppuStack_d0 = (undefined ****)0x0;
              ppppppuStack_c8 = (undefined ******)0x0;
              if ((long)pppppuStack_b0 < 0) {
                ppppppuVar14 = (undefined ******)pppppuStack_b8;
                func_0x000107c3192c(plVar5 + 2,ppppppuStack_c0);
              }
              else {
                plVar5[3] = (long)pppppuStack_b8;
                plVar5[2] = (long)ppppppuStack_c0;
                plVar5[4] = (long)pppppuStack_b0;
              }
              plVar5[6] = (long)ppppppuStack_a0;
              plVar5[5] = (long)pppppuStack_a8;
              if ((undefined *******)ppppppuStack_a0 != (undefined *******)0x0) {
                pppppppuVar13 = (undefined *******)(ppppppuStack_a0 + 1);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar13,0x10);
                  if (bVar3) {
                    *pppppppuVar13 = (undefined ******)((long)*pppppppuVar13 + 1);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              pppppppuVar13 = (undefined *******)&pppppuStack_90;
              ppppppuVar9 = (undefined ******)pppppuStack_a8;
              plStack_80 = plVar5;
              FUN_10a4634ec(param_3);
              param_1 = SUB84(ppppppuVar9,0);
              pppppppuVar4 = &ppppppuStack_88;
              (*(code *)*ppppppuStack_88)();
              pppppppuVar6 = (undefined *******)ppppppuStack_a0;
              if ((undefined *******)ppppppuStack_a0 != (undefined *******)0x0) {
                pppppppuVar1 = (undefined *******)(ppppppuStack_a0 + 1);
                do {
                  ppppppuVar9 = *pppppppuVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar1,0x10);
                  if (bVar3) {
                    *pppppppuVar1 = (undefined ******)((long)ppppppuVar9 + -1);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (ppppppuVar9 == (undefined ******)0x0) {
                  (*(code *)(*ppppppuStack_a0)[2])(ppppppuStack_a0);
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                  pppppppuVar4 = pppppppuVar6;
                }
              }
              if ((long)pppppuStack_b0 < 0) {
                pppppppuVar4 = (undefined *******)ppppppuStack_c0;
                __ZdlPv();
              }
              param_4 = ppppppuVar14;
              param_2 = (undefined *******)ppppppuStack_c8;
              if ((undefined *******)ppppppuStack_c8 != (undefined *******)0x0) {
                pppppppuVar6 = (undefined *******)(ppppppuStack_c8 + 1);
                do {
                  ppppppuVar9 = *pppppppuVar6;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
                  if (bVar3) {
                    *pppppppuVar6 = (undefined ******)((long)ppppppuVar9 + -1);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                goto LAB_10aa79f88;
              }
            }
          }
          else {
            pppppuVar10 = (undefined *****)
                          CONCAT44((int)((ulong)*ppppppuVar9 >> 0x20) + 1,(int)*ppppppuVar9 + 1);
            *ppppppuVar9 = pppppuVar10;
            pppppppuVar4 = (undefined *******)*ppppppuVar14;
            pppppppuVar13 = param_2 + 10;
            param_4 = &pppppuStack_e0;
            FUN_10aa9d3d8();
            param_1 = SUB84(pppppuVar10,0);
            iVar8 = *(int *)((long)ppppppuVar9 + 4) + -1;
            *(int *)((long)ppppppuVar9 + 4) = iVar8;
            if (iVar8 == 0) {
              *(undefined4 *)ppppppuVar9 = 0;
            }
          }
        }
      }
      if (pppppppuVar11 != (undefined *******)0x0) {
        pppppppuVar6 = pppppppuVar11 + 1;
        do {
          ppppppuVar14 = *pppppppuVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
          if (bVar3) {
            *pppppppuVar6 = (undefined ******)((long)ppppppuVar14 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppppppuVar14 == (undefined ******)0x0) {
          (*(code *)(*pppppppuVar11)[2])(pppppppuVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppppppuVar4 = pppppppuVar11;
        }
      }
      if ((undefined *******)ppppppuStack_d8 == (undefined *******)0x0) goto LAB_10aa7a190;
    }
  }
  pppppppuVar11 = (undefined *******)ppppppuStack_d8;
  pppppppuVar6 = (undefined *******)(ppppppuStack_d8 + 1);
  do {
    ppppppuVar14 = *pppppppuVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
    if (bVar3) {
      *pppppppuVar6 = (undefined ******)((long)ppppppuVar14 + -1);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (ppppppuVar14 == (undefined ******)0x0) {
    (*(code *)(*ppppppuStack_d8)[2])(ppppppuStack_d8);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    pppppppuVar4 = pppppppuVar11;
  }
LAB_10aa7a190:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppppuVar4;
  }
  ___stack_chk_fail();
  func_0x00010a004dac(param_2);
  __ZdlPv();
  FUN_10aa9d654(&ppppuStack_d0);
  func_0x00010a43c2c4(&pppppuStack_f0);
  FUN_10a0d74a8(&pppppuStack_e0);
  __Unwind_Resume();
  if (param_1 < 0.0) {
    FUN_10a00946c(&UNK_10f68c835);
  }
  else {
    iVar8 = (int)pppppppuVar13;
    if ((0 < iVar8) || (iVar8 == -1)) {
      fVar16 = *(float *)(pppppppuVar4 + 0x11);
      dVar17 = (double)(ulong)(uint)fVar16;
      if (*(int *)((long)pppppppuVar4 + 0xac) == 0) {
        fVar18 = *(float *)((long)pppppppuVar4 + 0x8c);
        fVar20 = fVar16;
        fVar19 = fVar18;
      }
      else {
        fVar18 = *(float *)((long)pppppppuVar4 + 0x8c);
        fVar20 = fVar16 * (1.0 / *(float *)(pppppppuVar4 + 0x12));
        fVar19 = (1.0 / *(float *)(pppppppuVar4 + 0x12)) * fVar18;
      }
      if (0.0 < fVar19 - fVar20) {
        *(float *)((long)pppppppuVar4[0x19] + 0x34) = fVar19 - fVar20;
      }
      if ((fVar18 <= fVar16) && ((bRam000000011330a9e8 & 1) != 0)) {
        dVar17 = (double)fVar16;
        func_0x00010ae06f08(0,1,&UNK_10f68c87c,&UNK_10f68c8bb,0x84,&UNK_10f68c912);
      }
      pppppppuVar13 = (undefined *******)pppppppuVar4[0x19];
      *(undefined2 *)(pppppppuVar13 + 4) = 1;
      *(undefined2 *)(pppppppuVar13 + 2) = 0;
      *(undefined4 *)((long)pppppppuVar13 + 0x2c) = 0;
      (*(code *)(*pppppppuVar13[1])[2])();
      *(float *)(pppppppuVar13 + 6) = (float)dVar17 - param_1;
      *(float *)((long)pppppppuVar13 + 0x3c) = (float)dVar17 - param_1;
      FUN_10acdc738(pppppppuVar13);
      *(int *)(pppppppuVar4[0x19] + 5) = iVar8;
      *(int *)((long)pppppppuVar4 + 0x9c) = iVar8;
      *(float *)(pppppppuVar4 + 0x1a) = param_1;
      return pppppppuVar13;
    }
  }
  puVar7 = &UNK_10f68c85b;
  FUN_10a00946c();
  if (param_1 < 0.0) {
    FUN_10a00946c(&UNK_10f68c835);
  }
  else {
    iVar8 = (int)pppppppuVar13;
    if ((0 < iVar8) || (iVar8 == -1)) {
      fVar16 = *(float *)(puVar7 + 0x88);
      if (*(int *)(puVar7 + 0xac) == 0) {
        fVar19 = *(float *)(puVar7 + 0x8c);
      }
      else {
        fVar16 = fVar16 * (1.0 / *(float *)(puVar7 + 0x90));
        fVar19 = (1.0 / *(float *)(puVar7 + 0x90)) * *(float *)(puVar7 + 0x8c);
      }
      fVar19 = fVar19 - fVar16;
      dVar17 = (double)(ulong)(uint)fVar19;
      lVar15 = *(long *)(puVar7 + 200);
      if (0.0 < fVar19) {
        *(float *)(lVar15 + 0x34) = fVar19;
      }
      *(undefined2 *)(lVar15 + 0x20) = 1;
      *(undefined2 *)(lVar15 + 0x10) = 0;
      *(undefined4 *)(lVar15 + 0x2c) = 0;
      (**(code **)(**(long **)(lVar15 + 8) + 0x10))();
      *(float *)(lVar15 + 0x30) = (float)dVar17 - param_1;
      *(float *)(lVar15 + 0x3c) = (float)dVar17 - param_1;
      FUN_10acdc738(lVar15);
      pppppppuVar4 = *(undefined ********)(puVar7 + 0xc0);
      *(int *)(*(long *)(puVar7 + 200) + 0x28) = iVar8;
      *(float *)(puVar7 + 0xd0) = param_1;
      pppppppuVar13 = pppppppuVar4;
      if ((pppppppuVar4 != (undefined *******)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), pppppppuVar13 = pppppppuVar4,
         pppppppuVar4 != (undefined *******)0x0)) {
        if (*(long *)(puVar7 + 0xb8) != 0) {
          pppppppuVar13 = (undefined *******)(puVar7 + 0x30);
          FUN_10aa7a4f4(pppppppuVar13,param_4);
        }
        pppppppuVar6 = pppppppuVar4 + 1;
        do {
          ppppppuVar14 = *pppppppuVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
          if (bVar3) {
            *pppppppuVar6 = (undefined ******)((long)ppppppuVar14 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppppppuVar14 == (undefined ******)0x0) {
          (*(code *)(*pppppppuVar4)[2])(pppppppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(pppppppuVar4);
          return pppppppuVar4;
        }
      }
      return pppppppuVar13;
    }
  }
  pppppppuVar4 = (undefined *******)&UNK_10f68c85b;
  FUN_10a00946c();
  ppppppuVar9 = pppppppuVar13[1];
  ppppppuVar14 = *pppppppuVar13;
  if (pppppppuVar13[1] != (undefined ******)0x0) {
    ppppppuVar12 = pppppppuVar13[1] + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar12,0x10);
      if (bVar3) {
        *ppppppuVar12 = (undefined *****)((long)*ppppppuVar12 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppppppuVar12 = pppppppuVar4[1];
  pppppppuVar4[1] = ppppppuVar9;
  *pppppppuVar4 = ppppppuVar14;
  if (ppppppuVar12 != (undefined ******)0x0) {
    ppppppuVar14 = ppppppuVar12 + 1;
    do {
      pppppuVar10 = *ppppppuVar14;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar14,0x10);
      if (bVar3) {
        *ppppppuVar14 = (undefined *****)((long)pppppuVar10 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (pppppuVar10 == (undefined *****)0x0) {
      (*(code *)(*ppppppuVar12)[2])(ppppppuVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar12);
    }
  }
  return pppppppuVar4;
}



/* Entry: 10aa7a250; end: 10aa7a4f3;  */

long * FUN_10aa7a250(float param_1,long param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  double dVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (param_1 < 0.0) {
    FUN_10a00946c(&UNK_10f68c835);
  }
  else {
    iVar5 = (int)param_3;
    if ((0 < iVar5) || (iVar5 == -1)) {
      fVar9 = *(float *)(param_2 + 0x88);
      dVar10 = (double)(ulong)(uint)fVar9;
      if (*(int *)(param_2 + 0xac) == 0) {
        fVar12 = *(float *)(param_2 + 0x8c);
        fVar13 = fVar9;
        fVar14 = fVar12;
      }
      else {
        fVar12 = *(float *)(param_2 + 0x8c);
        fVar14 = 1.0 / *(float *)(param_2 + 0x90);
        fVar13 = fVar9 * fVar14;
        fVar14 = fVar14 * fVar12;
      }
      if (0.0 < fVar14 - fVar13) {
        *(float *)(*(long *)(param_2 + 200) + 0x34) = fVar14 - fVar13;
      }
      if ((fVar12 <= fVar9) && ((bRam000000011330a9e8 & 1) != 0)) {
        dVar10 = (double)fVar9;
        func_0x00010ae06f08(0,1,&UNK_10f68c87c,&UNK_10f68c8bb,0x84,&UNK_10f68c912);
      }
      plVar7 = *(long **)(param_2 + 200);
      *(undefined2 *)(plVar7 + 4) = 1;
      *(undefined2 *)(plVar7 + 2) = 0;
      *(undefined4 *)((long)plVar7 + 0x2c) = 0;
      (**(code **)(*(long *)plVar7[1] + 0x10))();
      *(float *)(plVar7 + 6) = (float)dVar10 - param_1;
      *(float *)((long)plVar7 + 0x3c) = (float)dVar10 - param_1;
      FUN_10acdc738(plVar7);
      *(int *)(*(long *)(param_2 + 200) + 0x28) = iVar5;
      *(int *)(param_2 + 0x9c) = iVar5;
      *(float *)(param_2 + 0xd0) = param_1;
      return plVar7;
    }
  }
  puVar4 = &UNK_10f68c85b;
  FUN_10a00946c();
  if (param_1 < 0.0) {
    FUN_10a00946c(&UNK_10f68c835);
  }
  else {
    iVar5 = (int)param_3;
    if ((0 < iVar5) || (iVar5 == -1)) {
      fVar9 = *(float *)(puVar4 + 0x88);
      if (*(int *)(puVar4 + 0xac) == 0) {
        fVar14 = *(float *)(puVar4 + 0x8c);
      }
      else {
        fVar9 = fVar9 * (1.0 / *(float *)(puVar4 + 0x90));
        fVar14 = (1.0 / *(float *)(puVar4 + 0x90)) * *(float *)(puVar4 + 0x8c);
      }
      fVar14 = fVar14 - fVar9;
      dVar10 = (double)(ulong)(uint)fVar14;
      lVar8 = *(long *)(puVar4 + 200);
      if (0.0 < fVar14) {
        *(float *)(lVar8 + 0x34) = fVar14;
      }
      *(undefined2 *)(lVar8 + 0x20) = 1;
      *(undefined2 *)(lVar8 + 0x10) = 0;
      *(undefined4 *)(lVar8 + 0x2c) = 0;
      (**(code **)(**(long **)(lVar8 + 8) + 0x10))();
      *(float *)(lVar8 + 0x30) = (float)dVar10 - param_1;
      *(float *)(lVar8 + 0x3c) = (float)dVar10 - param_1;
      FUN_10acdc738(lVar8);
      plVar6 = *(long **)(puVar4 + 0xc0);
      *(int *)(*(long *)(puVar4 + 200) + 0x28) = iVar5;
      *(float *)(puVar4 + 0xd0) = param_1;
      plVar7 = plVar6;
      if ((plVar6 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 = plVar6, plVar6 != (long *)0x0)) {
        if (*(long *)(puVar4 + 0xb8) != 0) {
          plVar7 = (long *)(puVar4 + 0x30);
          FUN_10aa7a4f4(plVar7,param_4);
        }
        plVar1 = plVar6 + 1;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
          return plVar6;
        }
      }
      return plVar7;
    }
  }
  plVar7 = (long *)&UNK_10f68c85b;
  FUN_10a00946c();
  lVar11 = param_3[1];
  lVar8 = *param_3;
  if (param_3[1] != 0) {
    plVar6 = (long *)(param_3[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = (long *)plVar7[1];
  plVar7[1] = lVar11;
  *plVar7 = lVar8;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return plVar7;
}



/* Entry: 10aa7a4f4; end: 10aa7a56f;  */

undefined8 * FUN_10aa7a4f4(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
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



/* Entry: 10aa7a570; end: 10aa7a613;  */

void FUN_10aa7a570(float param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  plVar4 = *(long **)(param_2 + 0xc0);
  __ZNSt3__119__shared_weak_count4lockEv();
  fVar6 = 1.0;
  if (param_1 <= 1.0) {
    fVar6 = param_1;
  }
  fVar7 = 0.0;
  if (0.0 <= param_1) {
    fVar7 = fVar6;
  }
  if (0xe8 < *(int *)(*(long *)(*(long *)(*(long *)(param_2 + 0xb8) + 0x170) + 0xa20) + 0x18)) {
    param_1 = fVar7;
  }
  *(float *)(param_2 + 0x80) = param_1;
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
  if (lVar5 != 0) {
    return;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
  return;
}



/* Entry: 10aa7a614; end: 10aa7a63f;  */

void FUN_10aa7a614(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar3 = (int)param_2;
  if ((iVar3 < 1) && (iVar3 != -1)) {
    puVar1 = &UNK_10f68c941;
    FUN_10a00946c();
    (**(code **)(*param_2 + 0xa0))(&uStack_48,param_2,&PTR_DAT_110c3fbe8);
    if ((char)puVar1[0x67] < '\0') {
      __ZdlPv(*(undefined8 *)(puVar1 + 0x50));
    }
    *(undefined8 *)(puVar1 + 0x58) = uStack_40;
    *(undefined8 *)(puVar1 + 0x50) = uStack_48;
    *(undefined8 *)(puVar1 + 0x60) = uStack_38;
    FUN_10a49e934(param_2,&PTR_DAT_110c3fc88,puVar1 + 0x68);
    uVar6 = *(undefined4 *)(puVar1 + 0x80);
    (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c3dd48);
    *(undefined4 *)(puVar1 + 0x80) = uVar6;
    uVar6 = *(undefined4 *)(puVar1 + 0x84);
    (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c3dd68);
    *(undefined4 *)(puVar1 + 0x84) = uVar6;
    uVar6 = *(undefined4 *)(puVar1 + 0x88);
    (**(code **)(*param_2 + 0x48))(param_2,&PTR_s_from_110c3fca8);
    *(undefined4 *)(puVar1 + 0x88) = uVar6;
    uVar6 = 0;
    (**(code **)(*param_2 + 0x48))(param_2,&PTR_s_to_110c3fcc8);
    *(undefined4 *)(puVar1 + 0x8c) = uVar6;
    uVar6 = *(undefined4 *)(puVar1 + 0x90);
    (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c3fce8);
    *(undefined4 *)(puVar1 + 0x90) = uVar6;
    uVar6 = *(undefined4 *)(puVar1 + 0x94);
    (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c3dd88);
    *(undefined4 *)(puVar1 + 0x94) = uVar6;
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c3dda8,puVar1[0x98]);
    puVar1[0x98] = (char)plVar2;
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c3ddc8,*(undefined4 *)(puVar1 + 0xac));
    *(int *)(puVar1 + 0xac) = (int)plVar2;
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c3dde8,*(undefined4 *)(puVar1 + 0xb0));
    *(int *)(puVar1 + 0xb0) = (int)plVar2;
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c3de08,*(undefined4 *)(puVar1 + 0x9c));
    *(int *)(puVar1 + 0x9c) = (int)plVar2;
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c3dc08,2);
    *(int *)(puVar1 + 0xa4) = (int)plVar2;
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c3dc28,*(undefined4 *)(puVar1 + 0xa8));
    *(int *)(puVar1 + 0xa8) = (int)plVar2;
    (**(code **)(*param_2 + 0x58))(param_2,&PTR_s_disabled_110c3de28,puVar1[0xa0]);
    puVar1[0xa0] = (char)param_2;
    FUN_10aa79c8c(puVar1);
    return;
  }
  *(int *)(param_1 + 0x9c) = iVar3;
  fVar5 = *(float *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0xac) == 0) {
    fVar7 = *(float *)(param_1 + 0x8c);
  }
  else {
    fVar7 = 1.0 / *(float *)(param_1 + 0x90);
    fVar5 = fVar5 * fVar7;
    fVar7 = fVar7 * *(float *)(param_1 + 0x8c);
  }
  lVar4 = *(long *)(param_1 + 200);
  if (0.0 < fVar7 - fVar5) {
    *(float *)(lVar4 + 0x34) = fVar7 - fVar5;
  }
  *(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(param_1 + 0x9c);
  FUN_10aa79d14(*(undefined4 *)(param_1 + 0x84),param_1);
  lVar4 = *(long *)(param_1 + 200);
  *(bool *)(lVar4 + 0x23) = *(int *)(param_1 + 0xb0) == 1;
  *(undefined1 *)(lVar4 + 0x24) = *(undefined1 *)(param_1 + 0x98);
  return;
}



/* Entry: 10aa7a640; end: 10aa7a85f;  */

void FUN_10aa7a640(long param_1,long *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(*param_2 + 0xa0))(&uStack_38,param_2,&PTR_DAT_110c3fbe8);
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  *(undefined8 *)(param_1 + 0x58) = uStack_30;
  *(undefined8 *)(param_1 + 0x50) = uStack_38;
  *(undefined8 *)(param_1 + 0x60) = uStack_28;
  FUN_10a49e934(param_2,&PTR_DAT_110c3fc88,param_1 + 0x68);
  uVar2 = *(undefined4 *)(param_1 + 0x80);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c3dd48);
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x84);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c3dd68);
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x88);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_s_from_110c3fca8);
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  uVar2 = 0;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_s_to_110c3fcc8);
  *(undefined4 *)(param_1 + 0x8c) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x90);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c3fce8);
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x94);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c3dd88);
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c3dda8,*(undefined1 *)(param_1 + 0x98));
  *(char *)(param_1 + 0x98) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c3ddc8,*(undefined4 *)(param_1 + 0xac));
  *(int *)(param_1 + 0xac) = (int)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c3dde8,*(undefined4 *)(param_1 + 0xb0));
  *(int *)(param_1 + 0xb0) = (int)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c3de08,*(undefined4 *)(param_1 + 0x9c));
  *(int *)(param_1 + 0x9c) = (int)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c3dc08,2);
  *(int *)(param_1 + 0xa4) = (int)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c3dc28,*(undefined4 *)(param_1 + 0xa8));
  *(int *)(param_1 + 0xa8) = (int)plVar1;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_s_disabled_110c3de28,*(undefined1 *)(param_1 + 0xa0));
  *(char *)(param_1 + 0xa0) = (char)param_2;
  FUN_10aa79c8c(param_1);
  return;
}



/* Entry: 10aa7a860; end: 10aa7a867;  */

void FUN_10aa7a860(long param_1,long *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(*param_2 + 0xa0))(&uStack_38,param_2,&PTR_DAT_110c3fbe8);
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  *(undefined8 *)(param_1 + 0x50) = uStack_30;
  *(undefined8 *)(param_1 + 0x48) = uStack_38;
  *(undefined8 *)(param_1 + 0x58) = uStack_28;
  FUN_10a49e934(param_2,&PTR_DAT_110c3fc88,param_1 + 0x60);
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c3dd48);
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c3dd68);
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x80);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_s_from_110c3fca8);
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  uVar2 = 0;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_s_to_110c3fcc8);
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x88);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c3fce8);
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x8c);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c3dd88);
  *(undefined4 *)(param_1 + 0x8c) = uVar2;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c3dda8,*(undefined1 *)(param_1 + 0x90));
  *(char *)(param_1 + 0x90) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c3ddc8,*(undefined4 *)(param_1 + 0xa4));
  *(int *)(param_1 + 0xa4) = (int)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c3dde8,*(undefined4 *)(param_1 + 0xa8));
  *(int *)(param_1 + 0xa8) = (int)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c3de08,*(undefined4 *)(param_1 + 0x94));
  *(int *)(param_1 + 0x94) = (int)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c3dc08,2);
  *(int *)(param_1 + 0x9c) = (int)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c3dc28,*(undefined4 *)(param_1 + 0xa0));
  *(int *)(param_1 + 0xa0) = (int)plVar1;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_s_disabled_110c3de28,*(undefined1 *)(param_1 + 0x98));
  *(char *)(param_1 + 0x98) = (char)param_2;
  FUN_10aa79c8c(param_1 + -8);
  return;
}



/* Entry: 10aa7a868; end: 10aa7aa17;  */

void FUN_10aa7a868(long param_1,long *param_2)

{
  FUN_10a00d760(param_2,&PTR_DAT_110c3fbe8,param_1 + 0x50);
  FUN_10a00d760(param_2,&PTR_DAT_110c3fc88,param_1 + 0x68);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x80),param_2,&PTR_DAT_110c3dd48);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x84),param_2,&PTR_DAT_110c3dd68);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x88),param_2,&PTR_s_from_110c3fca8);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x8c),param_2,&PTR_s_to_110c3fcc8);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x90),param_2,&PTR_DAT_110c3fce8);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x94),param_2,&PTR_DAT_110c3dd88);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c3dda8,*(undefined1 *)(param_1 + 0x98));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c3ddc8,*(undefined4 *)(param_1 + 0xac));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c3dde8,*(undefined4 *)(param_1 + 0xb0));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c3de08,*(undefined4 *)(param_1 + 0x9c));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c3dc08,*(undefined4 *)(param_1 + 0xa4));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c3dc28,*(undefined4 *)(param_1 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010aa7aa14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_s_disabled_110c3de28,*(undefined1 *)(param_1 + 0xa0));
  return;
}



/* Entry: 10aa7aa18; end: 10aa7aa1f;  */

void FUN_10aa7aa18(long param_1,long *param_2)

{
  FUN_10a00d760(param_2,&PTR_DAT_110c3fbe8,param_1 + 0x48);
  FUN_10a00d760(param_2,&PTR_DAT_110c3fc88,param_1 + 0x60);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x78),param_2,&PTR_DAT_110c3dd48);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x7c),param_2,&PTR_DAT_110c3dd68);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x80),param_2,&PTR_s_from_110c3fca8);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x84),param_2,&PTR_s_to_110c3fcc8);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x88),param_2,&PTR_DAT_110c3fce8);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x8c),param_2,&PTR_DAT_110c3dd88);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c3dda8,*(undefined1 *)(param_1 + 0x90));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c3ddc8,*(undefined4 *)(param_1 + 0xa4));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c3dde8,*(undefined4 *)(param_1 + 0xa8));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c3de08,*(undefined4 *)(param_1 + 0x94));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c3dc08,*(undefined4 *)(param_1 + 0x9c));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c3dc28,*(undefined4 *)(param_1 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010aa7aa14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_s_disabled_110c3de28,*(undefined1 *)(param_1 + 0x98));
  return;
}



/* Entry: 10aa7aa20; end: 10aa7aaa3;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10aa7aa20(long param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *extraout_x8;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  if (1 < param_2) {
    puVar3 = &UNK_10f68c985;
    FUN_10a00946c();
    if (-1 < (char)puVar3[0x7f]) {
      uVar6 = *(undefined8 *)(puVar3 + 0x68);
      extraout_x8[1] = *(undefined8 *)(puVar3 + 0x70);
      *extraout_x8 = uVar6;
      extraout_x8[2] = *(undefined8 *)(puVar3 + 0x78);
      return;
    }
    lVar4 = *(long *)(puVar3 + 0x68);
    uVar1 = *(ulong *)(puVar3 + 0x70);
    if (uVar1 < 0x17) {
      *(char *)((long)extraout_x8 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memmove_11034c660)(extraout_x8,lVar4,uVar1 + 1);
      return;
    }
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar4 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar4 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar4);
    return;
  }
  uVar2 = *(uint *)(param_1 + 0xac);
  if (uVar2 == param_2) {
    return;
  }
  fVar5 = *(float *)(param_1 + 0x88);
  if (param_2 == 0) {
    if (uVar2 == 0) goto LAB_10aa7aa7c;
    fVar7 = 1.0 / *(float *)(param_1 + 0x90);
    fVar8 = *(float *)(param_1 + 0x8c) * fVar7;
  }
  else {
    if (uVar2 == 1) {
LAB_10aa7aa7c:
      fVar7 = *(float *)(param_1 + 0x94);
      goto LAB_10aa7aa80;
    }
    fVar7 = *(float *)(param_1 + 0x90);
    fVar8 = fVar7 * *(float *)(param_1 + 0x8c);
  }
  fVar5 = fVar5 * fVar7;
  *(float *)(param_1 + 0x8c) = fVar8;
  fVar7 = fVar7 * *(float *)(param_1 + 0x94);
LAB_10aa7aa80:
  *(float *)(param_1 + 0x88) = fVar5;
  *(float *)(param_1 + 0x94) = fVar7;
  *(uint *)(param_1 + 0xac) = param_2;
  return;
}



/* Entry: 10aa7aaa4; end: 10aa7aacb;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10aa7aaa4(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (-1 < *(char *)(param_2 + 0x7f)) {
    uVar3 = *(undefined8 *)(param_2 + 0x68);
    param_1[1] = *(undefined8 *)(param_2 + 0x70);
    *param_1 = uVar3;
    param_1[2] = *(undefined8 *)(param_2 + 0x78);
    return;
  }
  lVar2 = *(long *)(param_2 + 0x68);
  uVar1 = *(ulong *)(param_2 + 0x70);
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar2 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar2 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar2);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
  return;
}



/* Entry: 10aa7aacc; end: 10aa7ab63;  */

void FUN_10aa7aacc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 extraout_x8;
  undefined7 uStack_48;
  undefined1 uStack_41;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *param_2;
  uStack_48 = (undefined7)param_2[1];
  uVar10 = *(undefined8 *)((long)param_2 + 0xf);
  uStack_41 = (undefined1)uVar10;
  uVar3 = *(undefined1 *)((long)param_2 + 0x17);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  lVar7 = param_1;
  if (*(char *)(param_1 + 0x7f) < '\0') {
    lVar7 = *(long *)(param_1 + 0x68);
    __ZdlPv();
  }
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(ulong *)(param_1 + 0x70) = CONCAT17(uStack_41,uStack_48);
  *(undefined8 *)(param_1 + 0x77) = uVar10;
  *(undefined1 *)(param_1 + 0x7f) = uVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  plVar8 = *(long **)(lVar7 + 0xc0);
  if (plVar8 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar8 != (long *)0x0) {
      if (*(long *)(lVar7 + 0xb8) != 0) {
        FUN_10a413b90(extraout_x8,*(long *)(lVar7 + 0xb8),lVar7 + 0x50,param_2);
        plVar1 = plVar8 + 1;
        do {
          lVar7 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 != 0) {
          return;
        }
        (**(code **)(*plVar8 + 0x10))(plVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar8);
        return;
      }
    }
  }
  FUN_10a00946c(&UNK_10f68c9ac);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa7ac20);
  (*pcVar6)();
}



/* Entry: 10aa7ab64; end: 10aa7ac33;  */

void FUN_10aa7ab64(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(param_2 + 0xc0);
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 != (long *)0x0) {
      if (*(long *)(param_2 + 0xb8) != 0) {
        FUN_10a413b90(param_1,*(long *)(param_2 + 0xb8),param_2 + 0x50,param_3);
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
        if (lVar6 != 0) {
          return;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  FUN_10a00946c(&UNK_10f68c9ac);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa7ac20);
  (*pcVar4)();
}



/* Entry: 10aa7ac34; end: 10aa7bf67;  */

/* WARNING: Removing unreachable block (ram,0x00010aa7b9c8) */
/* WARNING: Removing unreachable block (ram,0x00010aa7b9f8) */
/* WARNING: Removing unreachable block (ram,0x00010aa7ba08) */
/* WARNING: Removing unreachable block (ram,0x00010aa7be80) */
/* WARNING: Removing unreachable block (ram,0x00010aa7bf48) */
/* WARNING: Removing unreachable block (ram,0x00010aa7bf58) */

void FUN_10aa7ac34(undefined8 param_1,long param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 extraout_x8;
  undefined8 *puVar11;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 *unaff_x22;
  undefined8 *unaff_x23;
  ulong unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *puVar14;
  undefined1 *unaff_x26;
  undefined8 unaff_x27;
  long lVar15;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar16;
  undefined8 uVar17;
  
code_r0x00010aa7ac34:
  *(undefined8 **)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined1 **)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x560) = param_1;
  *(undefined8 *)((long)register0x00000008 + -0x70) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010989f98c((undefined1 *)((long)register0x00000008 + -0xe8),param_2 + 0x18);
  pcVar8 = "false";
  if ((*(char *)(*(long *)(param_2 + 200) + 0x20) == '\x01') &&
     (*(char *)(*(long *)(param_2 + 200) + 0x10) == '\0')) {
    pcVar8 = "true";
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x100),pcVar8);
  *(long *)((long)register0x00000008 + -0x558) = param_2;
  *(undefined4 *)((long)register0x00000008 + -0xd0) = 0;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -200),&UNK_10f68c9c6);
  *(undefined4 *)((long)register0x00000008 + -0xb0) = 0;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xa8),&UNK_10f68c9cc);
  *(undefined4 *)((long)register0x00000008 + -0x90) = 1;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x88),&UNK_10f68c9da);
  puVar12 = (undefined8 *)0x0;
  lVar15 = 0;
  *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x110);
  *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
  *(undefined8 **)((long)register0x00000008 + -0x118) = puVar13;
  puVar11 = puVar13;
  do {
    puVar1 = (uint *)((long)register0x00000008 + lVar15 + -0xd0);
    uVar4 = *puVar1;
    puVar9 = puVar13;
    puVar10 = puVar13;
    puVar14 = puVar13;
    if (puVar11 == puVar13) {
LAB_10aa7adc0:
      puVar11 = (undefined8 *)((long)register0x00000008 + -0x118);
      if (puVar12 != (undefined8 *)0x0) {
        puVar10 = puVar9 + 1;
        puVar11 = puVar9;
        puVar14 = puVar9;
      }
      if (puVar11[1] == 0) goto LAB_10aa7addc;
    }
    else {
      puVar11 = puVar13;
      puVar6 = puVar12;
      if (puVar12 == (undefined8 *)0x0) {
        do {
          puVar9 = (undefined8 *)puVar11[2];
          bVar7 = (undefined8 *)*puVar9 == puVar11;
          puVar11 = puVar9;
        } while (bVar7);
        if (*(uint *)(puVar9 + 4) < uVar4) goto LAB_10aa7adc0;
      }
      else {
        do {
          puVar9 = puVar6;
          puVar6 = (undefined8 *)puVar9[1];
        } while ((undefined8 *)puVar9[1] != (undefined8 *)0x0);
        if (*(uint *)(puVar9 + 4) < uVar4) goto LAB_10aa7adc0;
        do {
          while (puVar14 = puVar12, *(uint *)(puVar14 + 4) <= uVar4) {
            if (uVar4 <= *(uint *)(puVar14 + 4)) goto LAB_10aa7ae4c;
            puVar12 = (undefined8 *)puVar14[1];
            if ((undefined8 *)puVar14[1] == (undefined8 *)0x0) {
              puVar10 = puVar14 + 1;
              goto LAB_10aa7addc;
            }
          }
          puVar12 = (undefined8 *)*puVar14;
          puVar10 = puVar14;
        } while ((undefined8 *)*puVar14 != (undefined8 *)0x0);
      }
LAB_10aa7addc:
      puVar12 = (undefined8 *)0x40;
      __Znwm();
      *(uint *)(puVar12 + 4) = uVar4;
      if (*(char *)((long)puVar1 + 0x1f) < '\0') {
        func_0x000107c3192c(puVar12 + 5,*(undefined8 *)(puVar1 + 2),*(undefined8 *)(puVar1 + 4));
      }
      else {
        uVar16 = *(undefined8 *)(puVar1 + 2);
        puVar12[6] = *(undefined8 *)(puVar1 + 4);
        puVar12[5] = uVar16;
        puVar12[7] = *(undefined8 *)(puVar1 + 6);
      }
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = puVar14;
      *puVar10 = puVar12;
      if (**(long **)((long)register0x00000008 + -0x118) != 0) {
        *(long *)((long)register0x00000008 + -0x118) =
             **(long **)((long)register0x00000008 + -0x118);
        puVar12 = (undefined8 *)*puVar10;
      }
      func_0x000107c2b058(*(undefined8 *)((long)register0x00000008 + -0x110),puVar12);
      *(long *)((long)register0x00000008 + -0x108) =
           *(long *)((long)register0x00000008 + -0x108) + 1;
    }
LAB_10aa7ae4c:
    lVar15 = lVar15 + 0x20;
    if (lVar15 == 0x60) break;
    puVar12 = *(undefined8 **)((long)register0x00000008 + -0x110);
    puVar11 = *(undefined8 **)((long)register0x00000008 + -0x118);
  } while( true );
  lVar15 = 0;
  do {
    if (*(char *)((long)register0x00000008 + lVar15 + -0x71) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + lVar15 + -0x88));
    }
    lVar15 = lVar15 + -0x20;
  } while (lVar15 != -0x60);
  puVar12 = *(undefined8 **)((long)register0x00000008 + -0x110);
  if (puVar12 != (undefined8 *)0x0) {
    puVar11 = puVar13;
    do {
      lVar15 = 8;
      if (*(uint *)(*(long *)((long)register0x00000008 + -0x558) + 0xac) <= *(uint *)(puVar12 + 4))
      {
        lVar15 = 0;
        puVar11 = puVar12;
      }
      puVar12 = *(undefined8 **)((long)puVar12 + lVar15);
    } while (puVar12 != (undefined8 *)0x0);
    if ((puVar11 != puVar13) &&
       (*(uint *)(puVar11 + 4) <= *(uint *)(*(long *)((long)register0x00000008 + -0x558) + 0xac))) {
      if (*(char *)((long)puVar11 + 0x3f) < '\0') {
        func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x130),puVar11[5],puVar11[6])
        ;
      }
      else {
        uVar16 = puVar11[5];
        *(undefined8 *)((long)register0x00000008 + -0x128) = puVar11[6];
        *(undefined8 *)((long)register0x00000008 + -0x130) = uVar16;
        *(undefined8 *)((long)register0x00000008 + -0x120) = puVar11[7];
      }
      goto LAB_10aa7aee0;
    }
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x130),&UNK_10f68c9e5);
LAB_10aa7aee0:
  *(undefined4 *)((long)register0x00000008 + -0xd0) = 0;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -200),&UNK_10f68c9c6);
  *(undefined4 *)((long)register0x00000008 + -0xb0) = 0;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xa8),&UNK_10f68c792);
  unaff_x26 = (undefined1 *)((long)register0x00000008 + -0xd0);
  *(undefined4 *)((long)register0x00000008 + -0x90) = 1;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x88),&UNK_10f68c798);
  puVar13 = (undefined8 *)0x0;
  lVar15 = 0;
  unaff_x28 = (undefined8 *)((long)register0x00000008 + -0x148);
  *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
  unaff_x25 = (undefined8 *)((long)register0x00000008 + -0x140);
  *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
  *(undefined8 **)((long)register0x00000008 + -0x148) = unaff_x25;
  puVar12 = unaff_x25;
  do {
    puVar1 = (uint *)(unaff_x26 + lVar15);
    uVar4 = *puVar1;
    unaff_x24 = (ulong)uVar4;
    puVar10 = unaff_x25;
    puVar11 = unaff_x25;
    unaff_x23 = unaff_x25;
    if (puVar12 == unaff_x25) {
LAB_10aa7afec:
      puVar12 = unaff_x28;
      if (puVar13 != (undefined8 *)0x0) {
        puVar11 = puVar10 + 1;
        puVar12 = puVar10;
        unaff_x23 = puVar10;
      }
      if (puVar12[1] == 0) goto LAB_10aa7b008;
    }
    else {
      puVar12 = unaff_x25;
      puVar14 = puVar13;
      if (puVar13 == (undefined8 *)0x0) {
        do {
          puVar10 = (undefined8 *)puVar12[2];
          bVar7 = (undefined8 *)*puVar10 == puVar12;
          puVar12 = puVar10;
        } while (bVar7);
        if (*(uint *)(puVar10 + 4) < uVar4) goto LAB_10aa7afec;
      }
      else {
        do {
          puVar10 = puVar14;
          puVar14 = (undefined8 *)puVar10[1];
        } while ((undefined8 *)puVar10[1] != (undefined8 *)0x0);
        if (*(uint *)(puVar10 + 4) < uVar4) goto LAB_10aa7afec;
        do {
          while (unaff_x23 = puVar13, *(uint *)(unaff_x23 + 4) <= uVar4) {
            if (uVar4 <= *(uint *)(unaff_x23 + 4)) goto LAB_10aa7b078;
            puVar13 = (undefined8 *)unaff_x23[1];
            if ((undefined8 *)unaff_x23[1] == (undefined8 *)0x0) {
              puVar11 = unaff_x23 + 1;
              goto LAB_10aa7b008;
            }
          }
          puVar13 = (undefined8 *)*unaff_x23;
          puVar11 = unaff_x23;
        } while ((undefined8 *)*unaff_x23 != (undefined8 *)0x0);
      }
LAB_10aa7b008:
      puVar13 = (undefined8 *)0x40;
      __Znwm();
      *(uint *)(puVar13 + 4) = uVar4;
      if (*(char *)((long)puVar1 + 0x1f) < '\0') {
        func_0x000107c3192c(puVar13 + 5,*(undefined8 *)(puVar1 + 2),*(undefined8 *)(puVar1 + 4));
      }
      else {
        uVar16 = *(undefined8 *)(puVar1 + 2);
        puVar13[6] = *(undefined8 *)(puVar1 + 4);
        puVar13[5] = uVar16;
        puVar13[7] = *(undefined8 *)(puVar1 + 6);
      }
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = unaff_x23;
      *puVar11 = puVar13;
      if (**(long **)((long)register0x00000008 + -0x148) != 0) {
        *(long *)((long)register0x00000008 + -0x148) =
             **(long **)((long)register0x00000008 + -0x148);
        puVar13 = (undefined8 *)*puVar11;
      }
      func_0x000107c2b058(*(undefined8 *)((long)register0x00000008 + -0x140),puVar13);
      *(long *)((long)register0x00000008 + -0x138) =
           *(long *)((long)register0x00000008 + -0x138) + 1;
    }
LAB_10aa7b078:
    lVar15 = lVar15 + 0x20;
    if (lVar15 == 0x60) break;
    puVar13 = *(undefined8 **)((long)register0x00000008 + -0x140);
    puVar12 = *(undefined8 **)((long)register0x00000008 + -0x148);
  } while( true );
  lVar15 = 0;
  do {
    if (*(char *)((long)register0x00000008 + lVar15 + -0x71) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + lVar15 + -0x88));
    }
    lVar15 = lVar15 + -0x20;
  } while (lVar15 != -0x60);
  puVar13 = *(undefined8 **)((long)register0x00000008 + -0x140);
  unaff_x20 = *(long *)((long)register0x00000008 + -0x558);
  if (puVar13 != (undefined8 *)0x0) {
    puVar12 = unaff_x25;
    do {
      lVar15 = 8;
      if (*(uint *)(unaff_x20 + 0xb0) <= *(uint *)(puVar13 + 4)) {
        lVar15 = 0;
        puVar12 = puVar13;
      }
      puVar13 = *(undefined8 **)((long)puVar13 + lVar15);
    } while (puVar13 != (undefined8 *)0x0);
    if ((puVar12 != unaff_x25) && (*(uint *)(puVar12 + 4) <= *(uint *)(unaff_x20 + 0xb0))) {
      if (*(char *)((long)puVar12 + 0x3f) < '\0') {
        func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0xd0),puVar12[5],puVar12[6]);
      }
      else {
        uVar16 = puVar12[5];
        *(undefined8 *)((long)register0x00000008 + -200) = puVar12[6];
        *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar16;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = puVar12[7];
      }
      goto LAB_10aa7b11c;
    }
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xd0),&UNK_10f68c9f9);
LAB_10aa7b11c:
  pcVar8 = "true";
  if (*(char *)(unaff_x20 + 0x98) == '\0') {
    pcVar8 = "false";
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x160),pcVar8);
  pcVar8 = "true";
  if (*(char *)(unaff_x20 + 0xa0) == '\0') {
    pcVar8 = "false";
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x178),pcVar8);
  unaff_x21 = *(ulong *)((long)register0x00000008 + -0xe0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0xd1)) {
    unaff_x21 = (ulong)*(byte *)((long)register0x00000008 + -0xd1);
  }
  FUN_10a003c90((undefined1 *)((long)register0x00000008 + -0x488),unaff_x21 + 7,
                (undefined1 *)((long)register0x00000008 + -0x4a0));
  unaff_x22 = *(undefined1 **)((long)register0x00000008 + -0x488);
  if (-1 < *(char *)((long)register0x00000008 + -0x471)) {
    unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x488);
  }
  if (unaff_x21 != 0) {
    _memmove(unaff_x22,(undefined1 *)((long)register0x00000008 + -0xe8),unaff_x21);
  }
  puVar2 = (undefined4 *)(unaff_x22 + unaff_x21);
  *(undefined4 *)((long)puVar2 + 3) = 0x203a656d;
  *puVar2 = 0x6d616e20;
  *(undefined1 *)((long)puVar2 + 7) = 0;
  if (*(char *)(unaff_x20 + 0x67) < '\0') {
    func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x4a0),
                        *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  }
  else {
    uVar16 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined8 *)((long)register0x00000008 + -0x498) = *(undefined8 *)(unaff_x20 + 0x58);
    *(undefined8 *)((long)register0x00000008 + -0x4a0) = uVar16;
    *(undefined8 *)((long)register0x00000008 + -0x490) = *(undefined8 *)(unaff_x20 + 0x60);
  }
  uVar3 = *(ulong *)((long)register0x00000008 + -0x498);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x4a0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x489)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x489);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x4a0);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x488);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x460) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x468) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x470) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x470);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar13,&UNK_10f68ca10,0x16);
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x440) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x448) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x450) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  if (*(char *)(unaff_x20 + 0x7f) < '\0') {
    func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x4c0),
                        *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70));
  }
  else {
    uVar16 = *(undefined8 *)(unaff_x20 + 0x68);
    *(undefined8 *)((long)register0x00000008 + -0x4b8) = *(undefined8 *)(unaff_x20 + 0x70);
    *(undefined8 *)((long)register0x00000008 + -0x4c0) = uVar16;
    *(undefined8 *)((long)register0x00000008 + -0x4b0) = *(undefined8 *)(unaff_x20 + 0x78);
  }
  uVar3 = *(ulong *)((long)register0x00000008 + -0x4b8);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x4c0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x4a9)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x4a9);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x4c0);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x450);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x420) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x428) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x430) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x430);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar13,&UNK_10f68ca27,10);
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x400) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x408) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x410) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  __ZNSt3__19to_stringEf
            ((undefined1 *)((long)register0x00000008 + -0x4d8),*(undefined4 *)(unaff_x20 + 0x80));
  uVar3 = *(ulong *)((long)register0x00000008 + -0x4d0);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x4d8);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x4c1)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x4c1);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x4d8);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x410);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x3e0) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -1000) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x3f0) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x3f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar13,&UNK_10f656986,0xe);
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x3c0) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x3c8) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x3d0) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  __ZNSt3__19to_stringEf
            ((undefined1 *)((long)register0x00000008 + -0x4f0),*(undefined4 *)(unaff_x20 + 0x84));
  uVar3 = *(ulong *)((long)register0x00000008 + -0x4e8);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x4f0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x4d9)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x4d9);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x4f0);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x3d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x3a0) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x3a8) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x3b0) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x3b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar13,&UNK_10f68ca32,0xd);
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x380) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x388) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x390) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  uVar3 = *(ulong *)((long)register0x00000008 + -0xf8);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x100);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0xe9)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0xe9);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x100);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x390);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x360) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x368) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x370) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x370);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar13,&UNK_10f68ca40,0xc);
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x340) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x348) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x350) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  __ZNSt3__19to_stringEf
            ((undefined1 *)((long)register0x00000008 + -0x508),
             *(undefined4 *)(*(long *)(unaff_x20 + 200) + 0x34));
  uVar3 = *(ulong *)((long)register0x00000008 + -0x500);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x508);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x4f1)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x4f1);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x508);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x350);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -800) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x328) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x330) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x330);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar13,&UNK_10f68ca4d,8);
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x300) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x308) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x310) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  FUN_10acdc738(*(undefined8 *)(unaff_x20 + 200));
  __ZNSt3__19to_stringEf((undefined1 *)((long)register0x00000008 + -0x520));
  uVar3 = *(ulong *)((long)register0x00000008 + -0x518);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x520);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x509)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x509);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x520);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x310);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x2e0) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x2e8) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x2f0) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x2f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar13,&UNK_10f68ca56,7);
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x2c0) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x2c8) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x2d0) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  __ZNSt3__19to_stringEf
            ((undefined1 *)((long)register0x00000008 + -0x538),*(undefined4 *)(unaff_x20 + 0x90));
  uVar3 = *(ulong *)((long)register0x00000008 + -0x530);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x538);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x521)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x521);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x538);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x2d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x2a0) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x2a8) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x2b0) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x2b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar13,&UNK_10f68ca5e,0xd);
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x280) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x288) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x290) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  uVar3 = *(ulong *)((long)register0x00000008 + -0x128);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x130);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x119)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x119);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x130);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x290);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x260) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x268) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x270) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x270);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar13,&UNK_10f68ca6c,10);
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x240) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x248) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x250) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  __ZNSt3__19to_stringEi
            ((undefined1 *)((long)register0x00000008 + -0x550),
             *(undefined4 *)(*(long *)(unaff_x20 + 200) + 0x28));
  uVar3 = *(ulong *)((long)register0x00000008 + -0x548);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x550);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x539)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x539);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x550);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x250);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x220) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x228) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x230) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x230);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar13,&UNK_10f68ca77,0x10);
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x200) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x208) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x210) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  uVar3 = *(ulong *)((long)register0x00000008 + -200);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0xd0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0xb9)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0xb9);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0xd0);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x210);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x1e0) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x1e8) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x1f0) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x1f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar13,&UNK_10f68ca88,0xe);
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x1c0) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x1c8) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x1d0) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  uVar3 = *(ulong *)((long)register0x00000008 + -0x158);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x160);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x149)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x149);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x160);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x1d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x1a0) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x1a8) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x1b0) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x1b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar13,&UNK_10f68ca97,0xe);
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x180) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x188) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -400) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  uVar3 = *(ulong *)((long)register0x00000008 + -0x170);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x178);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x161)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x161);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x178);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -400);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar16 = *puVar13;
  puVar12 = *(undefined8 **)((long)register0x00000008 + -0x560);
  puVar12[1] = puVar13[1];
  *puVar12 = uVar16;
  puVar12[2] = puVar13[2];
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  if (*(char *)((long)register0x00000008 + -0x179) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -400));
  }
  if (*(char *)((long)register0x00000008 + -0x199) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1b0));
  }
  if (*(char *)((long)register0x00000008 + -0x1b9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1d0));
  }
  if (*(char *)((long)register0x00000008 + -0x1d9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1f0));
  }
  if (*(char *)((long)register0x00000008 + -0x1f9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x210));
  }
  if (*(char *)((long)register0x00000008 + -0x219) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x230));
  }
  if (*(char *)((long)register0x00000008 + -0x539) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x550));
  }
  if (*(char *)((long)register0x00000008 + -0x239) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x250));
  }
  if (*(char *)((long)register0x00000008 + -0x259) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x270));
  }
  if (*(char *)((long)register0x00000008 + -0x279) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x290));
  }
  if (*(char *)((long)register0x00000008 + -0x299) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2b0));
  }
  if (*(char *)((long)register0x00000008 + -0x521) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x538));
  }
  if (*(char *)((long)register0x00000008 + -0x2b9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2d0));
  }
  if (*(char *)((long)register0x00000008 + -0x2d9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2f0));
  }
  if (*(char *)((long)register0x00000008 + -0x509) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x520));
  }
  if (*(char *)((long)register0x00000008 + -0x2f9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x310));
  }
  if (*(char *)((long)register0x00000008 + -0x319) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x330));
  }
  if (*(char *)((long)register0x00000008 + -0x4f1) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x508));
  }
  if (*(char *)((long)register0x00000008 + -0x339) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x350));
  }
  if (*(char *)((long)register0x00000008 + -0x359) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x370));
  }
  if (*(char *)((long)register0x00000008 + -0x379) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x390));
  }
  if (*(char *)((long)register0x00000008 + -0x399) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x3b0));
  }
  if (*(char *)((long)register0x00000008 + -0x4d9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x4f0));
  }
  if (*(char *)((long)register0x00000008 + -0x3b9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x3d0));
  }
  if (*(char *)((long)register0x00000008 + -0x3d9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x3f0));
  }
  if (*(char *)((long)register0x00000008 + -0x4c1) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x4d8));
  }
  if (*(char *)((long)register0x00000008 + -0x3f9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x410));
  }
  if (*(char *)((long)register0x00000008 + -0x419) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x430));
  }
  if (*(char *)((long)register0x00000008 + -0x4a9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x4c0));
  }
  if (*(char *)((long)register0x00000008 + -0x439) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x450));
  }
  if (*(char *)((long)register0x00000008 + -0x459) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x470));
  }
  if (*(char *)((long)register0x00000008 + -0x489) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x4a0));
  }
  if (*(char *)((long)register0x00000008 + -0x471) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x488));
  }
  if (*(char *)((long)register0x00000008 + -0x161) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x178));
  }
  if (*(char *)((long)register0x00000008 + -0x149) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x160));
  }
  func_0x00010aa9d748(*(undefined8 *)((long)register0x00000008 + -0x140));
  if (*(char *)((long)register0x00000008 + -0x119) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x130));
  }
  unaff_x19 = *(long *)((long)register0x00000008 + -0x110);
  func_0x00010aa9d700();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70)) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)((long)register0x00000008 + -0x439) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x450));
  }
  if (*(char *)((long)register0x00000008 + -0x459) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x470));
  }
  if (*(char *)((long)register0x00000008 + -0x489) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x4a0));
  }
  if (*(char *)((long)register0x00000008 + -0x471) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x488));
  }
  if (*(char *)((long)register0x00000008 + -0x161) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x178));
  }
  if (*(char *)((long)register0x00000008 + -0x149) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x160));
  }
  func_0x00010aa9d748(*(undefined8 *)((long)register0x00000008 + -0x140));
  if (*(char *)((long)register0x00000008 + -0x119) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x130));
  }
  func_0x00010aa9d700(*(undefined8 *)((long)register0x00000008 + -0x110));
  unaff_x30 = FUN_10aa7bf68;
  param_2 = unaff_x19;
  __Unwind_Resume();
  param_2 = param_2 + -0x18;
  unaff_x27 = 0x60;
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x560);
  param_1 = extraout_x8;
  goto code_r0x00010aa7ac34;
}



/* Entry: 10aa7bf68; end: 10aa7c013;  */

/* WARNING: Removing unreachable block (ram,0x00010aa7b9c8) */
/* WARNING: Removing unreachable block (ram,0x00010aa7b9f8) */
/* WARNING: Removing unreachable block (ram,0x00010aa7ba08) */
/* WARNING: Removing unreachable block (ram,0x00010aa7be80) */
/* WARNING: Removing unreachable block (ram,0x00010aa7bf48) */
/* WARNING: Removing unreachable block (ram,0x00010aa7bf58) */

void FUN_10aa7bf68(undefined8 param_1,long param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 extraout_x8;
  undefined8 *puVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong unaff_x21;
  undefined1 *unaff_x22;
  undefined8 *unaff_x23;
  ulong unaff_x24;
  undefined8 *puVar14;
  undefined8 *unaff_x25;
  undefined1 *unaff_x26;
  long lVar15;
  undefined8 unaff_x27;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar16;
  undefined8 uVar17;
  
FUN_10aa7ac34:
  *(undefined8 **)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined1 **)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x560) = param_1;
  *(undefined8 *)((long)register0x00000008 + -0x70) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010989f98c((undefined1 *)((long)register0x00000008 + -0xe8),param_2);
  pcVar8 = "false";
  if ((*(char *)(*(long *)(param_2 + 0xb0) + 0x20) == '\x01') &&
     (*(char *)(*(long *)(param_2 + 0xb0) + 0x10) == '\0')) {
    pcVar8 = "true";
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x100),pcVar8);
  *(long *)((long)register0x00000008 + -0x558) = param_2 + -0x18;
  *(undefined4 *)((long)register0x00000008 + -0xd0) = 0;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -200),&UNK_10f68c9c6);
  *(undefined4 *)((long)register0x00000008 + -0xb0) = 0;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xa8),&UNK_10f68c9cc);
  *(undefined4 *)((long)register0x00000008 + -0x90) = 1;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x88),&UNK_10f68c9da);
  puVar12 = (undefined8 *)0x0;
  lVar15 = 0;
  *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x110);
  *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
  *(undefined8 **)((long)register0x00000008 + -0x118) = puVar13;
  puVar11 = puVar13;
  do {
    puVar1 = (uint *)((long)register0x00000008 + lVar15 + -0xd0);
    uVar4 = *puVar1;
    puVar9 = puVar13;
    puVar10 = puVar13;
    puVar14 = puVar13;
    if (puVar11 == puVar13) {
LAB_10aa7adc0:
      puVar11 = (undefined8 *)((long)register0x00000008 + -0x118);
      if (puVar12 != (undefined8 *)0x0) {
        puVar10 = puVar9 + 1;
        puVar11 = puVar9;
        puVar14 = puVar9;
      }
      if (puVar11[1] == 0) goto LAB_10aa7addc;
    }
    else {
      puVar11 = puVar13;
      puVar6 = puVar12;
      if (puVar12 == (undefined8 *)0x0) {
        do {
          puVar9 = (undefined8 *)puVar11[2];
          bVar7 = (undefined8 *)*puVar9 == puVar11;
          puVar11 = puVar9;
        } while (bVar7);
        if (*(uint *)(puVar9 + 4) < uVar4) goto LAB_10aa7adc0;
      }
      else {
        do {
          puVar9 = puVar6;
          puVar6 = (undefined8 *)puVar9[1];
        } while ((undefined8 *)puVar9[1] != (undefined8 *)0x0);
        if (*(uint *)(puVar9 + 4) < uVar4) goto LAB_10aa7adc0;
        do {
          while (puVar14 = puVar12, *(uint *)(puVar14 + 4) <= uVar4) {
            if (uVar4 <= *(uint *)(puVar14 + 4)) goto LAB_10aa7ae4c;
            puVar12 = (undefined8 *)puVar14[1];
            if ((undefined8 *)puVar14[1] == (undefined8 *)0x0) {
              puVar10 = puVar14 + 1;
              goto LAB_10aa7addc;
            }
          }
          puVar12 = (undefined8 *)*puVar14;
          puVar10 = puVar14;
        } while ((undefined8 *)*puVar14 != (undefined8 *)0x0);
      }
LAB_10aa7addc:
      puVar12 = (undefined8 *)0x40;
      __Znwm();
      *(uint *)(puVar12 + 4) = uVar4;
      if (*(char *)((long)puVar1 + 0x1f) < '\0') {
        func_0x000107c3192c(puVar12 + 5,*(undefined8 *)(puVar1 + 2),*(undefined8 *)(puVar1 + 4));
      }
      else {
        uVar16 = *(undefined8 *)(puVar1 + 2);
        puVar12[6] = *(undefined8 *)(puVar1 + 4);
        puVar12[5] = uVar16;
        puVar12[7] = *(undefined8 *)(puVar1 + 6);
      }
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = puVar14;
      *puVar10 = puVar12;
      if (**(long **)((long)register0x00000008 + -0x118) != 0) {
        *(long *)((long)register0x00000008 + -0x118) =
             **(long **)((long)register0x00000008 + -0x118);
        puVar12 = (undefined8 *)*puVar10;
      }
      func_0x000107c2b058(*(undefined8 *)((long)register0x00000008 + -0x110),puVar12);
      *(long *)((long)register0x00000008 + -0x108) =
           *(long *)((long)register0x00000008 + -0x108) + 1;
    }
LAB_10aa7ae4c:
    lVar15 = lVar15 + 0x20;
    if (lVar15 == 0x60) break;
    puVar12 = *(undefined8 **)((long)register0x00000008 + -0x110);
    puVar11 = *(undefined8 **)((long)register0x00000008 + -0x118);
  } while( true );
  lVar15 = 0;
  do {
    if (*(char *)((long)register0x00000008 + lVar15 + -0x71) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + lVar15 + -0x88));
    }
    lVar15 = lVar15 + -0x20;
  } while (lVar15 != -0x60);
  puVar12 = *(undefined8 **)((long)register0x00000008 + -0x110);
  if (puVar12 != (undefined8 *)0x0) {
    puVar11 = puVar13;
    do {
      lVar15 = 8;
      if (*(uint *)(*(long *)((long)register0x00000008 + -0x558) + 0xac) <= *(uint *)(puVar12 + 4))
      {
        lVar15 = 0;
        puVar11 = puVar12;
      }
      puVar12 = *(undefined8 **)((long)puVar12 + lVar15);
    } while (puVar12 != (undefined8 *)0x0);
    if ((puVar11 != puVar13) &&
       (*(uint *)(puVar11 + 4) <= *(uint *)(*(long *)((long)register0x00000008 + -0x558) + 0xac))) {
      if (*(char *)((long)puVar11 + 0x3f) < '\0') {
        func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x130),puVar11[5],puVar11[6])
        ;
      }
      else {
        uVar16 = puVar11[5];
        *(undefined8 *)((long)register0x00000008 + -0x128) = puVar11[6];
        *(undefined8 *)((long)register0x00000008 + -0x130) = uVar16;
        *(undefined8 *)((long)register0x00000008 + -0x120) = puVar11[7];
      }
      goto LAB_10aa7aee0;
    }
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x130),&UNK_10f68c9e5);
LAB_10aa7aee0:
  *(undefined4 *)((long)register0x00000008 + -0xd0) = 0;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -200),&UNK_10f68c9c6);
  *(undefined4 *)((long)register0x00000008 + -0xb0) = 0;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xa8),&UNK_10f68c792);
  unaff_x26 = (undefined1 *)((long)register0x00000008 + -0xd0);
  *(undefined4 *)((long)register0x00000008 + -0x90) = 1;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x88),&UNK_10f68c798);
  puVar13 = (undefined8 *)0x0;
  lVar15 = 0;
  unaff_x28 = (undefined8 *)((long)register0x00000008 + -0x148);
  *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
  unaff_x25 = (undefined8 *)((long)register0x00000008 + -0x140);
  *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
  *(undefined8 **)((long)register0x00000008 + -0x148) = unaff_x25;
  puVar12 = unaff_x25;
  do {
    puVar1 = (uint *)(unaff_x26 + lVar15);
    uVar4 = *puVar1;
    unaff_x24 = (ulong)uVar4;
    puVar10 = unaff_x25;
    puVar11 = unaff_x25;
    unaff_x23 = unaff_x25;
    if (puVar12 == unaff_x25) {
LAB_10aa7afec:
      puVar12 = unaff_x28;
      if (puVar13 != (undefined8 *)0x0) {
        puVar11 = puVar10 + 1;
        puVar12 = puVar10;
        unaff_x23 = puVar10;
      }
      if (puVar12[1] == 0) goto LAB_10aa7b008;
    }
    else {
      puVar12 = unaff_x25;
      puVar14 = puVar13;
      if (puVar13 == (undefined8 *)0x0) {
        do {
          puVar10 = (undefined8 *)puVar12[2];
          bVar7 = (undefined8 *)*puVar10 == puVar12;
          puVar12 = puVar10;
        } while (bVar7);
        if (*(uint *)(puVar10 + 4) < uVar4) goto LAB_10aa7afec;
      }
      else {
        do {
          puVar10 = puVar14;
          puVar14 = (undefined8 *)puVar10[1];
        } while ((undefined8 *)puVar10[1] != (undefined8 *)0x0);
        if (*(uint *)(puVar10 + 4) < uVar4) goto LAB_10aa7afec;
        do {
          while (unaff_x23 = puVar13, *(uint *)(unaff_x23 + 4) <= uVar4) {
            if (uVar4 <= *(uint *)(unaff_x23 + 4)) goto LAB_10aa7b078;
            puVar13 = (undefined8 *)unaff_x23[1];
            if ((undefined8 *)unaff_x23[1] == (undefined8 *)0x0) {
              puVar11 = unaff_x23 + 1;
              goto LAB_10aa7b008;
            }
          }
          puVar13 = (undefined8 *)*unaff_x23;
          puVar11 = unaff_x23;
        } while ((undefined8 *)*unaff_x23 != (undefined8 *)0x0);
      }
LAB_10aa7b008:
      puVar13 = (undefined8 *)0x40;
      __Znwm();
      *(uint *)(puVar13 + 4) = uVar4;
      if (*(char *)((long)puVar1 + 0x1f) < '\0') {
        func_0x000107c3192c(puVar13 + 5,*(undefined8 *)(puVar1 + 2),*(undefined8 *)(puVar1 + 4));
      }
      else {
        uVar16 = *(undefined8 *)(puVar1 + 2);
        puVar13[6] = *(undefined8 *)(puVar1 + 4);
        puVar13[5] = uVar16;
        puVar13[7] = *(undefined8 *)(puVar1 + 6);
      }
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = unaff_x23;
      *puVar11 = puVar13;
      if (**(long **)((long)register0x00000008 + -0x148) != 0) {
        *(long *)((long)register0x00000008 + -0x148) =
             **(long **)((long)register0x00000008 + -0x148);
        puVar13 = (undefined8 *)*puVar11;
      }
      func_0x000107c2b058(*(undefined8 *)((long)register0x00000008 + -0x140),puVar13);
      *(long *)((long)register0x00000008 + -0x138) =
           *(long *)((long)register0x00000008 + -0x138) + 1;
    }
LAB_10aa7b078:
    lVar15 = lVar15 + 0x20;
    if (lVar15 == 0x60) break;
    puVar13 = *(undefined8 **)((long)register0x00000008 + -0x140);
    puVar12 = *(undefined8 **)((long)register0x00000008 + -0x148);
  } while( true );
  lVar15 = 0;
  do {
    if (*(char *)((long)register0x00000008 + lVar15 + -0x71) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + lVar15 + -0x88));
    }
    lVar15 = lVar15 + -0x20;
  } while (lVar15 != -0x60);
  puVar13 = *(undefined8 **)((long)register0x00000008 + -0x140);
  unaff_x20 = *(long *)((long)register0x00000008 + -0x558);
  if (puVar13 != (undefined8 *)0x0) {
    puVar12 = unaff_x25;
    do {
      lVar15 = 8;
      if (*(uint *)(unaff_x20 + 0xb0) <= *(uint *)(puVar13 + 4)) {
        lVar15 = 0;
        puVar12 = puVar13;
      }
      puVar13 = *(undefined8 **)((long)puVar13 + lVar15);
    } while (puVar13 != (undefined8 *)0x0);
    if ((puVar12 != unaff_x25) && (*(uint *)(puVar12 + 4) <= *(uint *)(unaff_x20 + 0xb0))) {
      if (*(char *)((long)puVar12 + 0x3f) < '\0') {
        func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0xd0),puVar12[5],puVar12[6]);
      }
      else {
        uVar16 = puVar12[5];
        *(undefined8 *)((long)register0x00000008 + -200) = puVar12[6];
        *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar16;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = puVar12[7];
      }
      goto LAB_10aa7b11c;
    }
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xd0),&UNK_10f68c9f9);
LAB_10aa7b11c:
  pcVar8 = "true";
  if (*(char *)(unaff_x20 + 0x98) == '\0') {
    pcVar8 = "false";
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x160),pcVar8);
  pcVar8 = "true";
  if (*(char *)(unaff_x20 + 0xa0) == '\0') {
    pcVar8 = "false";
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x178),pcVar8);
  unaff_x21 = *(ulong *)((long)register0x00000008 + -0xe0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0xd1)) {
    unaff_x21 = (ulong)*(byte *)((long)register0x00000008 + -0xd1);
  }
  FUN_10a003c90((undefined1 *)((long)register0x00000008 + -0x488),unaff_x21 + 7,
                (undefined1 *)((long)register0x00000008 + -0x4a0));
  unaff_x22 = *(undefined1 **)((long)register0x00000008 + -0x488);
  if (-1 < *(char *)((long)register0x00000008 + -0x471)) {
    unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x488);
  }
  if (unaff_x21 != 0) {
    _memmove(unaff_x22,(undefined1 *)((long)register0x00000008 + -0xe8),unaff_x21);
  }
  puVar2 = (undefined4 *)(unaff_x22 + unaff_x21);
  *(undefined4 *)((long)puVar2 + 3) = 0x203a656d;
  *puVar2 = 0x6d616e20;
  *(undefined1 *)((long)puVar2 + 7) = 0;
  if (*(char *)(unaff_x20 + 0x67) < '\0') {
    func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x4a0),
                        *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  }
  else {
    uVar16 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined8 *)((long)register0x00000008 + -0x498) = *(undefined8 *)(unaff_x20 + 0x58);
    *(undefined8 *)((long)register0x00000008 + -0x4a0) = uVar16;
    *(undefined8 *)((long)register0x00000008 + -0x490) = *(undefined8 *)(unaff_x20 + 0x60);
  }
  uVar3 = *(ulong *)((long)register0x00000008 + -0x498);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x4a0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x489)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x489);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x4a0);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x488);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x460) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x468) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x470) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x470);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar13,&UNK_10f68ca10,0x16);
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x440) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x448) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x450) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  if (*(char *)(unaff_x20 + 0x7f) < '\0') {
    func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x4c0),
                        *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70));
  }
  else {
    uVar16 = *(undefined8 *)(unaff_x20 + 0x68);
    *(undefined8 *)((long)register0x00000008 + -0x4b8) = *(undefined8 *)(unaff_x20 + 0x70);
    *(undefined8 *)((long)register0x00000008 + -0x4c0) = uVar16;
    *(undefined8 *)((long)register0x00000008 + -0x4b0) = *(undefined8 *)(unaff_x20 + 0x78);
  }
  uVar3 = *(ulong *)((long)register0x00000008 + -0x4b8);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x4c0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x4a9)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x4a9);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x4c0);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x450);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x420) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x428) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x430) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x430);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar13,&UNK_10f68ca27,10);
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x400) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x408) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x410) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  __ZNSt3__19to_stringEf
            ((undefined1 *)((long)register0x00000008 + -0x4d8),*(undefined4 *)(unaff_x20 + 0x80));
  uVar3 = *(ulong *)((long)register0x00000008 + -0x4d0);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x4d8);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x4c1)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x4c1);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x4d8);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x410);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x3e0) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -1000) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x3f0) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x3f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar13,&UNK_10f656986,0xe);
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x3c0) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x3c8) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x3d0) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  __ZNSt3__19to_stringEf
            ((undefined1 *)((long)register0x00000008 + -0x4f0),*(undefined4 *)(unaff_x20 + 0x84));
  uVar3 = *(ulong *)((long)register0x00000008 + -0x4e8);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x4f0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x4d9)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x4d9);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x4f0);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x3d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x3a0) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x3a8) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x3b0) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x3b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar13,&UNK_10f68ca32,0xd);
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x380) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x388) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x390) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  uVar3 = *(ulong *)((long)register0x00000008 + -0xf8);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x100);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0xe9)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0xe9);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x100);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x390);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x360) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x368) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x370) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x370);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar13,&UNK_10f68ca40,0xc);
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x340) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x348) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x350) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  __ZNSt3__19to_stringEf
            ((undefined1 *)((long)register0x00000008 + -0x508),
             *(undefined4 *)(*(long *)(unaff_x20 + 200) + 0x34));
  uVar3 = *(ulong *)((long)register0x00000008 + -0x500);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x508);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x4f1)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x4f1);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x508);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x350);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -800) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x328) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x330) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x330);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar13,&UNK_10f68ca4d,8);
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x300) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x308) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x310) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  FUN_10acdc738(*(undefined8 *)(unaff_x20 + 200));
  __ZNSt3__19to_stringEf((undefined1 *)((long)register0x00000008 + -0x520));
  uVar3 = *(ulong *)((long)register0x00000008 + -0x518);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x520);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x509)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x509);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x520);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x310);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x2e0) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x2e8) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x2f0) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x2f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar13,&UNK_10f68ca56,7);
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x2c0) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x2c8) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x2d0) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  __ZNSt3__19to_stringEf
            ((undefined1 *)((long)register0x00000008 + -0x538),*(undefined4 *)(unaff_x20 + 0x90));
  uVar3 = *(ulong *)((long)register0x00000008 + -0x530);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x538);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x521)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x521);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x538);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x2d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x2a0) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x2a8) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x2b0) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x2b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar13,&UNK_10f68ca5e,0xd);
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x280) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x288) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x290) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  uVar3 = *(ulong *)((long)register0x00000008 + -0x128);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x130);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x119)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x119);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x130);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x290);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x260) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x268) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x270) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x270);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar13,&UNK_10f68ca6c,10);
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x240) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x248) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x250) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  __ZNSt3__19to_stringEi
            ((undefined1 *)((long)register0x00000008 + -0x550),
             *(undefined4 *)(*(long *)(unaff_x20 + 200) + 0x28));
  uVar3 = *(ulong *)((long)register0x00000008 + -0x548);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x550);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x539)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x539);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x550);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x250);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x220) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x228) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x230) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x230);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar13,&UNK_10f68ca77,0x10);
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x200) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x208) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x210) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  uVar3 = *(ulong *)((long)register0x00000008 + -200);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0xd0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0xb9)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0xb9);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0xd0);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x210);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x1e0) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x1e8) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x1f0) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x1f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar13,&UNK_10f68ca88,0xe);
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x1c0) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x1c8) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x1d0) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  uVar3 = *(ulong *)((long)register0x00000008 + -0x158);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x160);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x149)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x149);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x160);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x1d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x1a0) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x1a8) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x1b0) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)((long)register0x00000008 + -0x1b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar13,&UNK_10f68ca97,0xe);
  uVar17 = puVar13[1];
  uVar16 = *puVar13;
  *(undefined8 *)((long)register0x00000008 + -0x180) = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x188) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -400) = uVar16;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  uVar3 = *(ulong *)((long)register0x00000008 + -0x170);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x178);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x161)) {
    uVar3 = (ulong)*(byte *)((long)register0x00000008 + -0x161);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x178);
  }
  puVar13 = (undefined8 *)((long)register0x00000008 + -400);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar13,puVar5,uVar3)
  ;
  uVar16 = *puVar13;
  puVar12 = *(undefined8 **)((long)register0x00000008 + -0x560);
  puVar12[1] = puVar13[1];
  *puVar12 = uVar16;
  puVar12[2] = puVar13[2];
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  if (*(char *)((long)register0x00000008 + -0x179) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -400));
  }
  if (*(char *)((long)register0x00000008 + -0x199) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1b0));
  }
  if (*(char *)((long)register0x00000008 + -0x1b9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1d0));
  }
  if (*(char *)((long)register0x00000008 + -0x1d9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1f0));
  }
  if (*(char *)((long)register0x00000008 + -0x1f9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x210));
  }
  if (*(char *)((long)register0x00000008 + -0x219) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x230));
  }
  if (*(char *)((long)register0x00000008 + -0x539) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x550));
  }
  if (*(char *)((long)register0x00000008 + -0x239) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x250));
  }
  if (*(char *)((long)register0x00000008 + -0x259) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x270));
  }
  if (*(char *)((long)register0x00000008 + -0x279) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x290));
  }
  if (*(char *)((long)register0x00000008 + -0x299) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2b0));
  }
  if (*(char *)((long)register0x00000008 + -0x521) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x538));
  }
  if (*(char *)((long)register0x00000008 + -0x2b9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2d0));
  }
  if (*(char *)((long)register0x00000008 + -0x2d9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2f0));
  }
  if (*(char *)((long)register0x00000008 + -0x509) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x520));
  }
  if (*(char *)((long)register0x00000008 + -0x2f9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x310));
  }
  if (*(char *)((long)register0x00000008 + -0x319) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x330));
  }
  if (*(char *)((long)register0x00000008 + -0x4f1) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x508));
  }
  if (*(char *)((long)register0x00000008 + -0x339) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x350));
  }
  if (*(char *)((long)register0x00000008 + -0x359) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x370));
  }
  if (*(char *)((long)register0x00000008 + -0x379) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x390));
  }
  if (*(char *)((long)register0x00000008 + -0x399) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x3b0));
  }
  if (*(char *)((long)register0x00000008 + -0x4d9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x4f0));
  }
  if (*(char *)((long)register0x00000008 + -0x3b9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x3d0));
  }
  if (*(char *)((long)register0x00000008 + -0x3d9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x3f0));
  }
  if (*(char *)((long)register0x00000008 + -0x4c1) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x4d8));
  }
  if (*(char *)((long)register0x00000008 + -0x3f9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x410));
  }
  if (*(char *)((long)register0x00000008 + -0x419) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x430));
  }
  if (*(char *)((long)register0x00000008 + -0x4a9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x4c0));
  }
  if (*(char *)((long)register0x00000008 + -0x439) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x450));
  }
  if (*(char *)((long)register0x00000008 + -0x459) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x470));
  }
  if (*(char *)((long)register0x00000008 + -0x489) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x4a0));
  }
  if (*(char *)((long)register0x00000008 + -0x471) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x488));
  }
  if (*(char *)((long)register0x00000008 + -0x161) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x178));
  }
  if (*(char *)((long)register0x00000008 + -0x149) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x160));
  }
  func_0x00010aa9d748(*(undefined8 *)((long)register0x00000008 + -0x140));
  if (*(char *)((long)register0x00000008 + -0x119) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x130));
  }
  unaff_x19 = *(long *)((long)register0x00000008 + -0x110);
  func_0x00010aa9d700();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70)) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)((long)register0x00000008 + -0x439) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x450));
  }
  if (*(char *)((long)register0x00000008 + -0x459) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x470));
  }
  if (*(char *)((long)register0x00000008 + -0x489) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x4a0));
  }
  if (*(char *)((long)register0x00000008 + -0x471) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x488));
  }
  if (*(char *)((long)register0x00000008 + -0x161) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x178));
  }
  if (*(char *)((long)register0x00000008 + -0x149) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x160));
  }
  func_0x00010aa9d748(*(undefined8 *)((long)register0x00000008 + -0x140));
  if (*(char *)((long)register0x00000008 + -0x119) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x130));
  }
  func_0x00010aa9d700(*(undefined8 *)((long)register0x00000008 + -0x110));
  unaff_x30 = FUN_10aa7bf68;
  param_2 = unaff_x19;
  __Unwind_Resume();
  unaff_x27 = 0x60;
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x560);
  param_1 = extraout_x8;
  goto FUN_10aa7ac34;
}



/* Entry: 10aa7c014; end: 10aa7c0af;  */

void FUN_10aa7c014(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000002;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x124;
  uStack_48 = 0x13c;
  FUN_10aa7c0b0(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f68c0db;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10aa9d88c();
  FUN_10aa9da6c(param_1);
  return;
}



/* Entry: 10aa7c0b0; end: 10aa7c187;  */

/* WARNING: Removing unreachable block (ram,0x00010aa7c148) */

undefined1  [16] FUN_10aa7c0b0(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d243,0x19);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aa9d790(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa7c188; end: 10aa7c233;  */

undefined1  [16] FUN_10aa7c188(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x16;
  auVar1._0_8_ = &UNK_10f68cae2;
  return auVar1;
}



/* Entry: 10aa7c234; end: 10aa7c953;  */

void FUN_10aa7c234(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000109887da8(appuStack_d8,&UNK_10f68cae2,0x16);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f1a8;
  pppuVar2 = (undefined8 ***)&UNK_10f68c0c1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_68 = 0xfd;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c3f1a8;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa7c934;
    FUN_10a054dac(param_1,&UNK_10f68c384,FUN_10aa9db28,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa7c934;
    FUN_10a054dac(param_1,&UNK_10f68c390,FUN_10aa9dd70,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa7c934;
    FUN_10a054dac(param_1,&UNK_10f68caa6,FUN_10aa9e3c0,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa7c934;
    FUN_10a054dac(param_1,&UNK_10f68cab8,FUN_10aa9eb00,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa7c934;
    FUN_10a054dac(param_1,&UNK_10f68cac7,FUN_10aa9f538,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa7c934;
    FUN_10a054dac(param_1,&UNK_10f68c5a0,FUN_10aa9f634,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa7c934;
    FUN_10a054dac(param_1,&UNK_10f68c5b3,FUN_10aa9f814,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f20c,FUN_10aa9fad8,FUN_10aa9fb88);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2c46ae,FUN_10aa9ffdc,FUN_10aaa0118);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"scale",FUN_10aaa0368,FUN_10aaa0418);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2ff52c,FUN_10aaa04d0,FUN_10aaa060c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68cad6,FUN_10aaa0920,FUN_10aaa0a3c);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    puStack_78 = *(undefined **)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f68cae2,0x16);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f68cae2;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f68c0c1;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_78 = &UNK_10f68c0c1;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10aa7c934;
      FUN_10a054dac(param_1,&DAT_10f68efec,FUN_10aaa0bc8,0,*(long *)(param_1 + 0x18) + -8);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f68caf9;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f68c0c1;
    puStack_78 = (undefined *)0x0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60._0_4_ = 0xffffffff;
    uStack_58 = 0;
    uStack_50 = 0;
    FUN_10a2ad5cc(param_1,&ppuStack_b0,&PTR_DAT_110c3dea0);
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f68cb0b;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f68c0c1;
    puStack_78 = (undefined *)0x0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60._0_4_ = 0xffffffff;
    uStack_58 = 0;
    uStack_50 = 0;
    FUN_10a2ad5cc(param_1,&ppuStack_b0,&PTR_DAT_110c3deb0);
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f68cb1d;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f68c0c1;
    puStack_78 = (undefined *)0x0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60._0_4_ = 0xffffffff;
    uStack_58 = 0;
    uStack_50 = 0;
    FUN_10a2ad5cc(param_1,&ppuStack_b0,&PTR_DAT_110c3dec0);
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&DAT_10f68cb2c;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f68c0c1;
    puStack_78 = (undefined *)0x0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60._0_4_ = 0xffffffff;
    uStack_58 = 0;
    uStack_50 = 0;
    FUN_10a2ad5cc(param_1,&ppuStack_b0,&PTR_DAT_110c3ded0);
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&DAT_10f68c70a;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f68c0c1;
    puStack_78 = (undefined *)0x0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60._0_4_ = 0xffffffff;
    uStack_58 = 0;
    uStack_50 = 0;
    FUN_10a2ad5cc(param_1,&ppuStack_b0,&PTR_DAT_110c3dee0);
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&DAT_10f65ba39;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f68c0c1;
    puStack_78 = (undefined *)0x0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    FUN_10a2ad5cc(param_1,&ppuStack_b0,&PTR_DAT_110c3def0);
    func_0x00010a004064(param_1);
    return;
  }
LAB_10aa7c934:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa7c938);
  (*pcVar6)();
}



/* Entry: 10aa7c954; end: 10aa7cad3;  */

void FUN_10aa7c954(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c3dfb0);
  for (plVar3 = *(long **)(param_1 + 0xb0); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    plVar2 = plVar3 + 2;
    (**(code **)(*param_2 + 0x10))(param_2);
    if (*(char *)((long)plVar3 + 0x27) < '\0') {
      plVar2 = (long *)*plVar2;
    }
    FUN_10a33a5cc(param_2,&PTR_DAT_110c3fbe8,plVar2);
    (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c3fd08,plVar3[6]);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c3dfd0);
  for (plVar3 = *(long **)(param_1 + 0x88); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    if (plVar3[6] != 0) {
      plVar2 = plVar3 + 2;
      (**(code **)(*param_2 + 0x10))(param_2);
      if (*(char *)((long)plVar3 + 0x27) < '\0') {
        plVar2 = (long *)*plVar2;
      }
      FUN_10a33a5cc(param_2,&PTR_DAT_110c3dff0,plVar2);
      lVar1 = 0;
      if (plVar3[6] != 0) {
        lVar1 = plVar3[6] + 0x38;
      }
      (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c3fd08,lVar1);
      (**(code **)(*param_2 + 0x20))(param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010aa7cad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10aa7cad4; end: 10aa7d547;  */

void FUN_10aa7cad4(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  long *plVar17;
  float fVar18;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long lStack_68;
  
  if (*(long *)(param_1 + 0xb8) != 0) {
    func_0x00010aa920e4(*(undefined8 *)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0xb0) = 0;
    lVar9 = *(long *)(param_1 + 0xa8);
    if (lVar9 != 0) {
      lVar11 = 0;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar11 * 8) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar9 != lVar11);
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c3dfb0);
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x208))();
  if ((int)plVar5 != 0) {
    iVar16 = 0;
    do {
      (**(code **)(*param_2 + 0x218))(param_2,iVar16);
      (**(code **)(*param_2 + 0xa0))(&plStack_98,param_2,&PTR_DAT_110c3fbe8);
      lStack_70 = lStack_88;
      plStack_78 = plStack_90;
      plStack_80 = plStack_98;
      plStack_90 = (long *)0x0;
      lStack_88 = 0;
      plStack_98 = (long *)0x0;
      lStack_68 = 0;
      func_0x000107c2b080(&plStack_80);
      if (lStack_88 < 0) {
        __ZdlPv(plStack_98);
      }
      if (lStack_68 < 0x19facd8c290d) {
        if (lStack_68 == -0x5a78b37b9db58ec1) {
          plVar6 = (long *)0x80;
          __Znwm();
          plVar6[1] = 0;
          plVar6[2] = 0;
          *plVar6 = (long)&PTR_FUN_110ba1da8;
          plVar6[5] = 0;
          plVar6[4] = 0;
          plVar6[7] = 0;
          plVar6[6] = 0;
          plVar6[9] = 0;
          plVar6[8] = 0;
          *(undefined1 *)(plVar6 + 0xc) = 0;
          plVar6[0xe] = 0;
          plVar6[0xf] = 0;
          plStack_98 = plVar6 + 3;
          *plStack_98 = (long)&PTR_FUN_110c3e500;
          plVar6[10] = 0;
          plVar6[0xb] = (long)&PTR_FUN_110c3e568;
          plVar6[0xd] = (long)&PTR_FUN_110c3e5d8;
          plStack_90 = plVar6;
          func_0x00010aa7d548(param_1 + 0x28,&plStack_98);
          plVar6 = plStack_90;
          if (plStack_90 != (long *)0x0) {
            plVar1 = plStack_90 + 1;
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
              (**(code **)(*plStack_90 + 0x10))(plStack_90);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
          lVar9 = 0;
          if (*(long *)(param_1 + 0x28) != 0) {
            lVar9 = *(long *)(param_1 + 0x28) + 0x40;
          }
          (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3fd08,lVar9);
          lVar9 = param_1 + 0xa0;
          FUN_10aaa0d10(lVar9,lStack_68,&plStack_80);
          lVar11 = param_1 + 0x28;
          goto LAB_10aa7d078;
        }
        if (lStack_68 == -0x5a78b31e50f59de3) {
          puVar7 = (undefined8 *)0x88;
          __Znwm();
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = &PTR_FUN_110ba1df8;
          puVar7[5] = 0;
          puVar7[4] = 0;
          puVar7[7] = 0;
          puVar7[6] = 0;
          puVar7[9] = 0;
          puVar7[8] = 0;
          *(undefined4 *)(puVar7 + 10) = 0;
          *(undefined8 *)((long)puVar7 + 0x54) = 0x3f800000;
          *(undefined1 *)(puVar7 + 0xd) = 0;
          puVar7[0xf] = 0;
          puVar7[0x10] = 0;
          puVar7[3] = &PTR_FUN_110c3e758;
          puVar7[0xc] = &PTR_FUN_110c3e7c0;
          puVar7[0xe] = &PTR_FUN_110c3e830;
          plVar6 = *(long **)(param_1 + 0x40);
          *(undefined8 **)(param_1 + 0x38) = puVar7 + 3;
          *(undefined8 **)(param_1 + 0x40) = puVar7;
          if (plVar6 != (long *)0x0) {
            plVar1 = plVar6 + 1;
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
              (**(code **)(*plVar6 + 0x10))(plVar6);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
          lVar9 = 0;
          if (*(long *)(param_1 + 0x38) != 0) {
            lVar9 = *(long *)(param_1 + 0x38) + 0x48;
          }
          (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3fd08,lVar9);
          lVar9 = param_1 + 0xa0;
          FUN_10aaa0d10(lVar9,lStack_68,&plStack_80);
          func_0x00010aa7d630(lVar9 + 0x30,param_1 + 0x38);
        }
        else {
LAB_10aa7d080:
          lVar9 = param_1 + 0xa0;
          FUN_10aaa0d10(lVar9,lStack_68,&plStack_80);
          plVar6 = (long *)0x40;
          __Znwm();
          plVar6[1] = 0;
          plVar6[2] = 0;
          *plVar6 = (long)&PTR_DAT_110c403e8;
          *(undefined1 *)(plVar6 + 4) = 0;
          plStack_98 = plVar6 + 3;
          *plStack_98 = (long)&PTR_DAT_110c3e0c0;
          plVar6[6] = 0;
          plVar6[7] = 0;
          plVar6[5] = (long)&PTR_DAT_110c3e130;
          plStack_90 = plVar6;
          func_0x00010aa7d81c(lVar9 + 0x30,&plStack_98);
          plVar6 = plStack_90;
          if (plStack_90 != (long *)0x0) {
            plVar1 = plStack_90 + 1;
            do {
              lVar11 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar11 == 0) {
              (**(code **)(*plStack_90 + 0x10))(plStack_90);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
          (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3fd08,*(undefined8 *)(lVar9 + 0x30));
        }
      }
      else if (lStack_68 == 0x19facd8c290d) {
        plVar6 = (long *)0x80;
        __Znwm();
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = (long)&PTR_FUN_110ba1da8;
        plVar6[5] = 0;
        plVar6[4] = 0;
        plVar6[7] = 0;
        plVar6[6] = 0;
        plVar6[9] = 0;
        plVar6[8] = 0;
        *(undefined1 *)(plVar6 + 0xc) = 0;
        plVar6[0xe] = 0;
        plVar6[0xf] = 0;
        plStack_98 = plVar6 + 3;
        *plStack_98 = (long)&PTR_FUN_110c3e500;
        plVar6[10] = 0;
        plVar6[0xb] = (long)&PTR_FUN_110c3e568;
        plVar6[0xd] = (long)&PTR_FUN_110c3e5d8;
        plStack_90 = plVar6;
        func_0x00010aa7d548(param_1 + 0x48,&plStack_98);
        plVar6 = plStack_90;
        if (plStack_90 != (long *)0x0) {
          plVar1 = plStack_90 + 1;
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
            (**(code **)(*plStack_90 + 0x10))(plStack_90);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        lVar9 = 0;
        if (*(long *)(param_1 + 0x48) != 0) {
          lVar9 = *(long *)(param_1 + 0x48) + 0x40;
        }
        (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3fd08,lVar9);
        lVar9 = param_1 + 0xa0;
        FUN_10aaa0d10(lVar9,lStack_68,&plStack_80);
        lVar11 = param_1 + 0x48;
LAB_10aa7d078:
        func_0x00010aa7d5ac(lVar9 + 0x30,lVar11);
      }
      else if (lStack_68 == 0x1155feca4086800d) {
        puVar7 = (undefined8 *)0x78;
        __Znwm();
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = &PTR_FUN_110c40398;
        puVar7[0xb] = 0;
        puVar7[10] = 0;
        puVar7[0xd] = 0;
        puVar7[0xc] = 0;
        puVar7[5] = 0;
        puVar7[4] = 0;
        puVar7[7] = 0;
        puVar7[6] = 0;
        puVar7[9] = 0;
        puVar7[8] = 0;
        puVar7[0xe] = 0;
        puVar7[3] = &PTR_SUB_110c3f5e0;
        puVar7[10] = &PTR_FUN_110c3f648;
        puVar7[0xc] = &PTR_FUN_110c3f6b8;
        plVar6 = *(long **)(param_1 + 0x60);
        *(undefined8 **)(param_1 + 0x58) = puVar7 + 3;
        *(undefined8 **)(param_1 + 0x60) = puVar7;
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 1;
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
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        lVar9 = 0;
        if (*(long *)(param_1 + 0x58) != 0) {
          lVar9 = *(long *)(param_1 + 0x58) + 0x38;
        }
        (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3fd08,lVar9);
        lVar9 = param_1 + 0xa0;
        FUN_10aaa0d10(lVar9,lStack_68,&plStack_80);
        func_0x00010aa7d79c(lVar9 + 0x30,*(undefined8 *)(param_1 + 0x58),
                            *(undefined8 *)(param_1 + 0x60));
      }
      else {
        if (lStack_68 != 0x1512edce44bb0cf8) goto LAB_10aa7d080;
        plVar6 = (long *)0x78;
        __Znwm();
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = (long)&PTR_FUN_110ba1e48;
        plVar6[0xb] = 0;
        plVar6[10] = 0;
        plVar6[0xd] = 0;
        plVar6[0xc] = 0;
        plVar6[5] = 0;
        plVar6[4] = 0;
        plVar6[7] = 0;
        plVar6[6] = 0;
        plVar6[9] = 0;
        plVar6[8] = 0;
        plVar6[0xe] = 0;
        plStack_98 = plVar6 + 3;
        *plStack_98 = (long)&PTR_FUN_110c3f428;
        plVar6[10] = (long)&PTR_FUN_110c3f490;
        plVar6[0xc] = (long)&PTR_FUN_110c3f500;
        plStack_90 = plVar6;
        func_0x00010aa7d6b4(param_1 + 0x68,&plStack_98);
        plVar6 = plStack_90;
        if (plStack_90 != (long *)0x0) {
          plVar1 = plStack_90 + 1;
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
            (**(code **)(*plStack_90 + 0x10))(plStack_90);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        lVar9 = 0;
        if (*(long *)(param_1 + 0x68) != 0) {
          lVar9 = *(long *)(param_1 + 0x68) + 0x38;
        }
        (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3fd08,lVar9);
        lVar9 = param_1 + 0xa0;
        FUN_10aaa0d10(lVar9,lStack_68,&plStack_80);
        func_0x00010aa7d718(lVar9 + 0x30,param_1 + 0x68);
      }
      (**(code **)(*param_2 + 0x220))(param_2);
      if (lStack_70 < 0) {
        __ZdlPv(plStack_80);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 != (int)plVar5);
  }
  (**(code **)(*param_2 + 0x220))(param_2);
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c3dfd0);
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x208))();
  if ((int)plVar5 != 0) {
    iVar16 = 0;
    plVar6 = (long *)(param_1 + 0x78);
    plVar1 = (long *)(param_1 + 0x88);
    do {
      (**(code **)(*param_2 + 0x218))(param_2,iVar16);
      (**(code **)(*param_2 + 0xa0))(&plStack_98,param_2,&PTR_DAT_110c3dff0);
      puVar7 = (undefined8 *)0x78;
      __Znwm();
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_FUN_110ba1e48;
      puVar7[3] = &PTR_FUN_110c3f428;
      puVar7[0xb] = 0;
      puVar7[10] = 0;
      puVar7[0xd] = 0;
      puVar7[0xc] = 0;
      puVar7[5] = 0;
      puVar7[4] = 0;
      puVar7[7] = 0;
      puVar7[6] = 0;
      puVar7[9] = 0;
      puVar7[8] = 0;
      puVar7[0xe] = 0;
      puVar7[10] = &PTR_FUN_110c3f490;
      puVar7[0xc] = &PTR_FUN_110c3f500;
      plVar8 = (long *)0x40;
      __Znwm();
      lStack_70 = 0;
      *plVar8 = 0;
      plVar8[1] = 0;
      plStack_80 = plVar8;
      plStack_78 = plVar6;
      FUN_10a0d09b4(plVar8 + 2,&plStack_98);
      plVar8[6] = (long)(puVar7 + 3);
      plVar8[7] = (long)puVar7;
      lStack_70 = CONCAT71(lStack_70._1_7_,1);
      uVar12 = plVar8[5];
      plVar8[1] = uVar12;
      uVar10 = *(ulong *)(param_1 + 0x80);
      if (uVar10 != 0) {
        uVar13 = uVar10 - 1;
        if ((uVar10 & uVar13) == 0) {
          uVar14 = uVar13 & uVar12;
        }
        else {
          uVar14 = uVar12;
          if (uVar10 <= uVar12) {
            uVar14 = 0;
            if (uVar10 != 0) {
              uVar14 = uVar12 / uVar10;
            }
            uVar14 = uVar12 - uVar14 * uVar10;
          }
        }
        puVar7 = *(undefined8 **)(*plVar6 + uVar14 * 8);
        if (puVar7 != (undefined8 *)0x0) {
          for (plVar17 = (long *)*puVar7; plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
            uVar15 = plVar17[1];
            if (uVar15 == uVar12) {
              if (plVar17[5] == uVar12) {
                FUN_10aa921b8(plVar8 + 2);
                __ZdlPv(plVar8);
                plVar8 = plVar17;
                goto LAB_10aa7d3dc;
              }
            }
            else {
              if ((uVar10 & uVar13) == 0) {
                uVar15 = uVar15 & uVar13;
              }
              else if (uVar10 <= uVar15) {
                uVar4 = 0;
                if (uVar10 != 0) {
                  uVar4 = uVar15 / uVar10;
                }
                uVar15 = uVar15 - uVar4 * uVar10;
              }
              if (uVar15 != uVar14) break;
            }
          }
        }
      }
      fVar18 = (float)(*(long *)(param_1 + 0x90) + 1);
      if ((uVar10 == 0) || (*(float *)(param_1 + 0x98) * (float)uVar10 < fVar18)) {
        uVar12 = 1;
        if (2 < uVar10) {
          uVar12 = (ulong)((uVar10 & uVar10 - 1) != 0);
        }
        uVar12 = uVar12 | uVar10 << 1;
        uVar10 = (ulong)(fVar18 / *(float *)(param_1 + 0x98));
        if (uVar12 <= uVar10) {
          uVar12 = uVar10;
        }
        FUN_10aaa1230(plVar6,uVar12);
        uVar10 = *(ulong *)(param_1 + 0x80);
        uVar12 = plVar8[1];
      }
      uVar13 = uVar10 - 1;
      if ((uVar10 & uVar13) == 0) {
        uVar12 = uVar13 & uVar12;
      }
      else if (uVar10 <= uVar12) {
        uVar14 = 0;
        if (uVar10 != 0) {
          uVar14 = uVar12 / uVar10;
        }
        uVar12 = uVar12 - uVar14 * uVar10;
      }
      lVar9 = *plVar6;
      plVar17 = *(long **)(lVar9 + uVar12 * 8);
      if (plVar17 == (long *)0x0) {
        *plVar8 = *plVar1;
        *plVar1 = (long)plVar8;
        *(long **)(lVar9 + uVar12 * 8) = plVar1;
        if (*plVar8 != 0) {
          uVar12 = *(ulong *)(*plVar8 + 8);
          if ((uVar10 & uVar13) == 0) {
            uVar12 = uVar12 & uVar13;
          }
          else if (uVar10 <= uVar12) {
            uVar13 = 0;
            if (uVar10 != 0) {
              uVar13 = uVar12 / uVar10;
            }
            uVar12 = uVar12 - uVar13 * uVar10;
          }
          plVar17 = (long *)(*plVar6 + uVar12 * 8);
          goto LAB_10aa7d3cc;
        }
      }
      else {
        *plVar8 = *plVar17;
LAB_10aa7d3cc:
        *plVar17 = (long)plVar8;
      }
      *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
LAB_10aa7d3dc:
      lVar9 = plVar8[6];
      plVar8 = (long *)plVar8[7];
      if (plVar8 != (long *)0x0) {
        plVar17 = plVar8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar3) {
            *plVar17 = *plVar17 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar11 = 0;
      if (lVar9 != 0) {
        lVar11 = lVar9 + 0x38;
      }
      (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3fd08,lVar11);
      (**(code **)(*param_2 + 0x220))(param_2);
      if (plVar8 != (long *)0x0) {
        plVar17 = plVar8 + 1;
        do {
          lVar9 = *plVar17;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar3) {
            *plVar17 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (lStack_88 < 0) {
        __ZdlPv(plStack_98);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 != (int)plVar5);
  }
  (**(code **)(*param_2 + 0x220))(param_2);
  return;
}



/* Entry: 10aa7d548; end: 10aa7d87f;  */

undefined8 * FUN_10aa7d548(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10aa7d880; end: 10aa7da9f;  */

void FUN_10aa7d880(long *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 uStack_60;
  undefined8 auStack_58 [2];
  char cStack_41;
  ulong uStack_40;
  char cStack_38;
  
  FUN_10aa7daa0(auStack_58);
  if (cStack_38 == '\x01') {
    uVar5 = *(ulong *)(param_2 + 0x80);
    if (uVar5 != 0) {
      uVar8 = uVar5 - 1;
      if ((uVar5 & uVar8) == 0) {
        uVar9 = uVar8 & uStack_40;
      }
      else {
        uVar9 = uStack_40;
        if (uVar5 <= uStack_40) {
          uVar9 = 0;
          if (uVar5 != 0) {
            uVar9 = uStack_40 / uVar5;
          }
          uVar9 = uStack_40 - uVar9 * uVar5;
        }
      }
      plVar10 = *(long **)(*(long *)(param_2 + 0x78) + uVar9 * 8);
      if (plVar10 != (long *)0x0) {
        do {
          while( true ) {
            plVar10 = (long *)*plVar10;
            if (plVar10 == (long *)0x0) goto LAB_10aa7d9ec;
            uVar11 = plVar10[1];
            if (uStack_40 != uVar11) break;
            if (plVar10[5] == uStack_40) {
              param_2 = param_2 + 0x78;
              FUN_10aaa1448();
              if (param_2 == 0) {
                FUN_109ffdddc(&UNK_10f68d549);
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa7da84);
                (*pcVar4)();
              }
              lVar6 = *(long *)(param_2 + 0x38);
              lVar7 = 0;
              if (*(long *)(param_2 + 0x30) != 0) {
                lVar7 = *(long *)(param_2 + 0x30) + 0x38;
              }
              *param_1 = lVar7;
              param_1[1] = lVar6;
              if (lVar6 != 0) {
                plVar10 = (long *)(lVar6 + 8);
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar2) {
                    *plVar10 = *plVar10 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              goto LAB_10aa7d9f0;
            }
          }
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
        } while (uVar11 == uVar9);
      }
    }
LAB_10aa7d9ec:
    *param_1 = 0;
    param_1[1] = 0;
LAB_10aa7d9f0:
    if (cStack_41 < '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(auStack_58[0]);
      return;
    }
  }
  else {
    FUN_10a0d09b4(auStack_78,param_3);
    lVar7 = param_2 + 0xa0;
    func_0x00010aaa14e4(lVar7,uStack_60);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    if (lVar7 == 0) {
      FUN_10a0d09b4(auStack_78,param_3);
      param_2 = param_2 + 200;
      func_0x00010aaa1580(param_2,uStack_60);
      if (cStack_61 < '\0') {
        __ZdlPv(auStack_78[0]);
      }
      if (param_2 == 0) {
        *param_1 = 0;
        param_1[1] = 0;
      }
      else {
        lVar7 = *(long *)(param_2 + 0x38);
        lVar6 = *(long *)(param_2 + 0x30);
        param_1[1] = *(long *)(param_2 + 0x38);
        *param_1 = lVar6;
        if (lVar7 != 0) {
          plVar10 = (long *)(lVar7 + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar2) {
              *plVar10 = *plVar10 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
    }
    else {
      lVar6 = *(long *)(lVar7 + 0x38);
      lVar12 = *(long *)(lVar7 + 0x30);
      param_1[1] = *(long *)(lVar7 + 0x38);
      *param_1 = lVar12;
      if (lVar6 != 0) {
        plVar10 = (long *)(lVar6 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *plVar10 = *plVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
  }
  return;
}



/* Entry: 10aa7daa0; end: 10aa7dc2b;  */

void FUN_10aa7daa0(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  ulong uVar2;
  char cVar3;
  code *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  ushort uVar8;
  char *pcStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(ulong *)(param_2 + 8);
  pcVar6 = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    uVar2 = (ulong)(byte)param_2[0x17];
    pcVar6 = param_2;
  }
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
  plStack_58 = (long *)0x0;
  if (uVar2 == 0) {
LAB_10aa7db60:
    if (((long)plStack_50 - (long)plStack_58 == 0x20) &&
       ((plStack_58[1] == 0xb &&
        (*(long *)*plStack_58 == 0x616853646e656c42 &&
         *(long *)(*plStack_58 + 3) == 0x736570616853646e)))) {
      FUN_10a0db864(&pcStack_78,plStack_58[2],plStack_58[3]);
      param_1[1] = lStack_70;
      *param_1 = pcStack_78;
      param_1[2] = uStack_68;
      param_1[3] = uStack_60;
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (plStack_58 != (long *)0x0) {
      plStack_50 = plStack_58;
      __ZdlPv();
    }
    return;
  }
  pcVar1 = pcVar6 + uVar2;
  pcVar5 = pcVar6;
LAB_10aa7daf0:
  do {
    cVar3 = *pcVar6;
    uVar8 = NEON_umaxv(CONCAT26(-(ushort)(cVar3 == '\r'),
                                CONCAT24(-(ushort)(cVar3 == '\n'),
                                         CONCAT22(-(ushort)(cVar3 == '\t'),-(ushort)(cVar3 == ' ')))
                               ),2);
    pcVar7 = pcVar6;
    if ((uVar8 & 1) == 0) {
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar1;
      if (pcVar6 != pcVar1) goto LAB_10aa7daf0;
    }
    if (pcVar5 != pcVar7) {
      lStack_70 = (long)pcVar7 - (long)pcVar5;
      pcStack_78 = pcVar5;
      if (lStack_70 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa7dc10);
        (*pcVar4)();
      }
      FUN_10a043080(&plStack_58,&pcStack_78);
    }
    if ((pcVar7 == pcVar1) || (pcVar6 = pcVar7 + 1, pcVar5 = pcVar6, pcVar6 == pcVar1))
    goto LAB_10aa7db60;
  } while( true );
}



/* Entry: 10aa7dc2c; end: 10aa7dc63;  */

undefined8 * FUN_10aa7dc2c(undefined8 *param_1)

{
  func_0x00010a0ccba4(param_1 + 4);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10aa7dc64; end: 10aa7de13;  */

void FUN_10aa7dc64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char cStack_59;
  undefined8 uStack_58;
  char cStack_50;
  long alStack_48 [2];
  char cStack_38;
  
  FUN_10aa7daa0(&uStack_70);
  if (cStack_50 == '\x01') {
    if (cStack_59 < '\0') {
      func_0x000107c3192c(&uStack_90,uStack_70,uStack_68);
    }
    else {
      uStack_88 = uStack_68;
      uStack_90 = uStack_70;
      uStack_80._7_1_ = cStack_59;
    }
    uStack_78 = uStack_58;
    lVar1 = param_1 + 0x78;
    FUN_10aaa1448();
    if ((lVar1 != 0) && (FUN_10aaa1a6c(alStack_48,param_1 + 0x78,lVar1), alStack_48[0] != 0)) {
      if (cStack_38 == '\x01') {
        FUN_10aa921b8(alStack_48[0] + 0x10);
      }
      __ZdlPv(alStack_48[0]);
    }
    if (uStack_80._7_1_ < '\0') {
      __ZdlPv(uStack_90);
    }
  }
  else {
    FUN_10a0d09b4(&uStack_90,param_2);
    lVar1 = param_1 + 0xa0;
    func_0x00010aaa14e4(lVar1,uStack_78);
    if ((lVar1 != 0) &&
       (FUN_10aaa1bd0(alStack_48,param_1 + 0xa0,lVar1), lVar1 = alStack_48[0], alStack_48[0] != 0))
    {
      if (cStack_38 == '\x01') {
        func_0x00010aa92120(alStack_48[0] + 0x10);
      }
      __ZdlPv(lVar1);
    }
    if (uStack_80 < 0) {
      __ZdlPv(uStack_90);
    }
    FUN_10a0d09b4(&uStack_90,param_2);
    lVar1 = param_1 + 200;
    func_0x00010aaa1580(lVar1,uStack_78);
    uStack_70 = uStack_90;
    cStack_59 = uStack_80._7_1_;
    if ((lVar1 != 0) &&
       (FUN_10aaa1d34(alStack_48,param_1 + 200,lVar1), uStack_70 = uStack_90,
       cStack_59 = uStack_80._7_1_, alStack_48[0] != 0)) {
      if (cStack_38 == '\x01') {
        func_0x00010aa92068(alStack_48[0] + 0x10);
      }
      __ZdlPv(alStack_48[0]);
      uStack_70 = uStack_90;
      cStack_59 = uStack_80._7_1_;
    }
  }
  if (cStack_59 < '\0') {
    __ZdlPv(uStack_70);
  }
  return;
}



/* Entry: 10aa7de14; end: 10aa7df07;  */

long FUN_10aa7de14(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 auStack_40 [2];
  char cStack_29;
  
  func_0x000107c2b074(auStack_40,&PTR_DAT_110c3e010);
  lVar2 = param_1 + 0xa0;
  FUN_10aaa1e98(lVar2,auStack_40);
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
  }
  else {
    func_0x000107c2b074(auStack_40,&PTR_DAT_110c3e010);
    param_1 = param_1 + 0xa0;
    FUN_10aaa1e98(param_1,auStack_40);
    if (param_1 == 0) {
      FUN_109ffdddc(&UNK_10f68d549);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa7dee8);
      (*pcVar1)();
    }
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      ___dynamic_cast(lVar2,&PTR_DAT_110c41a40,&PTR_DAT_110ba1ad8,0xfffffffffffffffe);
    }
    if (cStack_29 < '\0') {
      __ZdlPv(auStack_40[0]);
    }
  }
  return lVar2;
}



/* Entry: 10aa7df08; end: 10aa7dffb;  */

long FUN_10aa7df08(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 auStack_40 [2];
  char cStack_29;
  
  func_0x000107c2b074(auStack_40,&PTR_DAT_110c3e028);
  lVar2 = param_1 + 0xa0;
  FUN_10aaa1e98(lVar2,auStack_40);
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x48);
  }
  else {
    func_0x000107c2b074(auStack_40,&PTR_DAT_110c3e028);
    param_1 = param_1 + 0xa0;
    FUN_10aaa1e98(param_1,auStack_40);
    if (param_1 == 0) {
      FUN_109ffdddc(&UNK_10f68d549);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa7dfdc);
      (*pcVar1)();
    }
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      ___dynamic_cast(lVar2,&PTR_DAT_110c41a40,&PTR_DAT_110ba1ad8,0xfffffffffffffffe);
    }
    if (cStack_29 < '\0') {
      __ZdlPv(auStack_40[0]);
    }
  }
  return lVar2;
}



/* Entry: 10aa7dffc; end: 10aa7e0ef;  */

long FUN_10aa7dffc(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 auStack_40 [2];
  char cStack_29;
  
  func_0x000107c2b074(auStack_40,&PTR_DAT_110c3e040);
  lVar2 = param_1 + 0xa0;
  FUN_10aaa1e98(lVar2,auStack_40);
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x38);
  }
  else {
    func_0x000107c2b074(auStack_40,&PTR_DAT_110c3e040);
    param_1 = param_1 + 0xa0;
    FUN_10aaa1e98(param_1,auStack_40);
    if (param_1 == 0) {
      FUN_109ffdddc(&UNK_10f68d549);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa7e0d0);
      (*pcVar1)();
    }
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      ___dynamic_cast(lVar2,&PTR_DAT_110c41a40,&PTR_DAT_110ba1ae8,0xfffffffffffffffe);
    }
    if (cStack_29 < '\0') {
      __ZdlPv(auStack_40[0]);
    }
  }
  return lVar2;
}



/* Entry: 10aa7e0f0; end: 10aa7e117;  */

void FUN_10aa7e0f0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  param_1[1] = *(undefined8 *)(param_2 + 0x30);
  *param_1 = uVar5;
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



/* Entry: 10aa7e118; end: 10aa7e1db;  */

long * FUN_10aa7e118(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *aplStack_60 [2];
  char cStack_49;
  undefined1 uStack_39;
  undefined1 *puStack_38;
  
  lVar5 = *param_2;
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x10) != *(long *)(lVar5 + 8)) {
      FUN_10aa7e1dc(param_1 + 5);
      func_0x000107c2b074(aplStack_60,&PTR_DAT_110c3fd28);
      param_1 = param_1 + 0x14;
      puStack_38 = (undefined1 *)aplStack_60;
      FUN_10aaa1834(param_1,aplStack_60,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
      param_1 = param_1 + 6;
      func_0x00010aa7d5ac(param_1,param_2);
      if (cStack_49 < '\0') {
        __ZdlPv(aplStack_60[0]);
        param_1 = aplStack_60[0];
      }
    }
    return param_1;
  }
  plVar4 = (long *)&UNK_10f68cc62;
  FUN_10a00946c();
  if (cStack_49 < '\0') {
    __ZdlPv(aplStack_60[0]);
  }
  __Unwind_Resume();
  lVar7 = param_2[1];
  lVar5 = *param_2;
  if (param_2[1] != 0) {
    plVar6 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = (long *)plVar4[1];
  plVar4[1] = lVar7;
  *plVar4 = lVar5;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return plVar4;
}



/* Entry: 10aa7e1dc; end: 10aa7e257;  */

undefined8 * FUN_10aa7e1dc(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
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



/* Entry: 10aa7e258; end: 10aa7e31b;  */

long * FUN_10aa7e258(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *aplStack_60 [2];
  char cStack_49;
  undefined1 uStack_39;
  undefined1 *puStack_38;
  
  lVar5 = *param_2;
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x10) != *(long *)(lVar5 + 8)) {
      FUN_10aa7e31c(param_1 + 7);
      func_0x000107c2b074(aplStack_60,&PTR_DAT_110c3fd40);
      param_1 = param_1 + 0x14;
      puStack_38 = (undefined1 *)aplStack_60;
      FUN_10aaa1834(param_1,aplStack_60,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
      param_1 = param_1 + 6;
      func_0x00010aa7d630(param_1,param_2);
      if (cStack_49 < '\0') {
        __ZdlPv(aplStack_60[0]);
        param_1 = aplStack_60[0];
      }
    }
    return param_1;
  }
  plVar4 = (long *)&UNK_10f68cc9b;
  FUN_10a00946c();
  if (cStack_49 < '\0') {
    __ZdlPv(aplStack_60[0]);
  }
  __Unwind_Resume();
  lVar7 = param_2[1];
  lVar5 = *param_2;
  if (param_2[1] != 0) {
    plVar6 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = (long *)plVar4[1];
  plVar4[1] = lVar7;
  *plVar4 = lVar5;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return plVar4;
}



/* Entry: 10aa7e31c; end: 10aa7e397;  */

undefined8 * FUN_10aa7e31c(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
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



/* Entry: 10aa7e398; end: 10aa7e3bf;  */

void FUN_10aa7e398(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x50);
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  param_1[1] = *(undefined8 *)(param_2 + 0x50);
  *param_1 = uVar5;
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



/* Entry: 10aa7e3c0; end: 10aa7e483;  */

long * FUN_10aa7e3c0(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *aplStack_c0 [2];
  char cStack_a9;
  undefined1 uStack_99;
  undefined1 *puStack_98;
  long *aplStack_60 [2];
  char cStack_49;
  undefined1 uStack_39;
  undefined1 *puStack_38;
  
  lVar5 = *param_2;
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x10) != *(long *)(lVar5 + 8)) {
      FUN_10aa7e1dc(param_1 + 9);
      func_0x000107c2b074(aplStack_60,&PTR_DAT_110c3fd58);
      param_1 = param_1 + 0x14;
      puStack_38 = (undefined1 *)aplStack_60;
      FUN_10aaa1834(param_1,aplStack_60,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
      param_1 = param_1 + 6;
      func_0x00010aa7d5ac(param_1,param_2);
      if (cStack_49 < '\0') {
        __ZdlPv(aplStack_60[0]);
        param_1 = aplStack_60[0];
      }
    }
    return param_1;
  }
  plVar4 = (long *)&UNK_10f68ccd4;
  FUN_10a00946c();
  if (cStack_49 < '\0') {
    __ZdlPv(aplStack_60[0]);
  }
  __Unwind_Resume(plVar4);
  lVar5 = *param_2;
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x10) != *(long *)(lVar5 + 8)) {
      FUN_10aa7e548(plVar4 + 0xd);
      func_0x000107c2b074(aplStack_c0,&PTR_DAT_110c3fd70);
      plVar4 = plVar4 + 0x14;
      puStack_98 = (undefined1 *)aplStack_c0;
      FUN_10aaa1834(plVar4,aplStack_c0,&UNK_10dd5b8f9,&puStack_98,&uStack_99);
      plVar4 = plVar4 + 6;
      func_0x00010aa7d718(plVar4,param_2);
      if (cStack_a9 < '\0') {
        __ZdlPv(aplStack_c0[0]);
        plVar4 = aplStack_c0[0];
      }
    }
    return plVar4;
  }
  plVar4 = (long *)&UNK_10f68cd45;
  FUN_10a00946c();
  if (cStack_a9 < '\0') {
    __ZdlPv(aplStack_c0[0]);
  }
  __Unwind_Resume();
  lVar7 = param_2[1];
  lVar5 = *param_2;
  if (param_2[1] != 0) {
    plVar6 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = (long *)plVar4[1];
  plVar4[1] = lVar7;
  *plVar4 = lVar5;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return plVar4;
}



/* Entry: 10aa7e484; end: 10aa7e547;  */

long * FUN_10aa7e484(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *aplStack_60 [2];
  char cStack_49;
  undefined1 uStack_39;
  undefined1 *puStack_38;
  
  lVar5 = *param_2;
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x10) != *(long *)(lVar5 + 8)) {
      FUN_10aa7e548(param_1 + 0xd);
      func_0x000107c2b074(aplStack_60,&PTR_DAT_110c3fd70);
      param_1 = param_1 + 0x14;
      puStack_38 = (undefined1 *)aplStack_60;
      FUN_10aaa1834(param_1,aplStack_60,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
      param_1 = param_1 + 6;
      func_0x00010aa7d718(param_1,param_2);
      if (cStack_49 < '\0') {
        __ZdlPv(aplStack_60[0]);
        param_1 = aplStack_60[0];
      }
    }
    return param_1;
  }
  plVar4 = (long *)&UNK_10f68cd45;
  FUN_10a00946c();
  if (cStack_49 < '\0') {
    __ZdlPv(aplStack_60[0]);
  }
  __Unwind_Resume();
  lVar7 = param_2[1];
  lVar5 = *param_2;
  if (param_2[1] != 0) {
    plVar6 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = (long *)plVar4[1];
  plVar4[1] = lVar7;
  *plVar4 = lVar5;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return plVar4;
}



/* Entry: 10aa7e548; end: 10aa7e5c3;  */

undefined8 * FUN_10aa7e548(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
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



/* Entry: 10aa7e5c4; end: 10aa7e66f;  */

void FUN_10aa7e5c4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined1 uStack_39;
  undefined1 *puStack_38;
  
  FUN_10a0d09b4(auStack_60);
  param_2 = param_2 + 0x78;
  puStack_38 = (undefined1 *)auStack_60;
  FUN_10aaa1f38(param_2,auStack_60,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
  lVar4 = *(long *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  param_1[1] = *(undefined8 *)(param_2 + 0x38);
  *param_1 = uVar5;
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
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  return;
}



/* Entry: 10aa7e670; end: 10aa7e76b;  */

undefined1  [16] FUN_10aa7e670(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long alStack_60 [2];
  char cStack_49;
  undefined1 uStack_39;
  undefined1 *puStack_38;
  
  if (*param_3 != 0) {
    FUN_10a0d09b4(alStack_60);
    lVar1 = param_1 + 0x78;
    puStack_38 = (undefined1 *)alStack_60;
    FUN_10aaa1f38(lVar1,alStack_60,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
    FUN_10aa7e548(lVar1 + 0x30,param_3);
    if (cStack_49 < '\0') {
      __ZdlPv(alStack_60[0]);
    }
    FUN_10a0d09b4(alStack_60,param_2);
    param_1 = param_1 + 0xa0;
    puStack_38 = (undefined1 *)alStack_60;
    FUN_10aaa1834(param_1,alStack_60,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
    param_1 = param_1 + 0x30;
    func_0x00010aa7d718(param_1,param_3);
    if (cStack_49 < '\0') {
      __ZdlPv(alStack_60[0]);
      param_1 = alStack_60[0];
    }
    auVar3._8_8_ = param_3;
    auVar3._0_8_ = param_1;
    return auVar3;
  }
  puVar2 = &UNK_10f68cd81;
  FUN_10a00946c(&UNK_10f68cd81);
  if (cStack_49 < '\0') {
    __ZdlPv(alStack_60[0]);
  }
  __Unwind_Resume(puVar2);
  auVar4._8_8_ = 0x22;
  auVar4._0_8_ = &UNK_10f68d25d;
  return auVar4;
}



/* Entry: 10aa7e76c; end: 10aa7e77b;  */

undefined1  [16] FUN_10aa7e76c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x22;
  auVar1._0_8_ = &UNK_10f68d25d;
  return auVar1;
}



/* Entry: 10aa7e77c; end: 10aa7e7df;  */

bool FUN_10aa7e77c(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x22) {
    iVar1 = 0xf68d25d;
    _memcmp(&UNK_10f68d25d);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10aa7e7e0; end: 10aa7ef53;  */

undefined1  [16] FUN_10aa7e7e0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x16;
  auVar1._0_8_ = &UNK_10f68cddf;
  return auVar1;
}



/* Entry: 10aa7ef54; end: 10aa7efab;  */

void FUN_10aa7ef54(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68c0c1;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10aa7efac(param_1,&uStack_58);
  FUN_10aaa226c();
  return;
}



/* Entry: 10aa7efac; end: 10aa7f083;  */

/* WARNING: Removing unreachable block (ram,0x00010aa7f044) */

undefined1  [16] FUN_10aa7efac(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d25d,0x22);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aaa2170(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa7f084; end: 10aa7f4ef;  */

void FUN_10aa7f084(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000109887da8(appuStack_d8,&UNK_10f68cddf,0x16);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c41a40;
  pppuVar2 = (undefined8 ***)&UNK_10f68c0c1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c41a40;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa7f4d0;
    FUN_10a054dac(param_1,&UNK_10f68cdc4,FUN_10aaa2328,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa7f4d0;
    FUN_10a054dac(param_1,&UNK_10f68cdd0,FUN_10aaa2afc,2,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    uStack_78 = *(undefined8 *)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f68cddf,0x16);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f68cddf;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f68c0c1;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10aa7f4d0;
      FUN_10a054dac(param_1,&UNK_10f68cdf6,FUN_10aaa2bf8,2,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10aa7f4d0;
      FUN_10a054dac(param_1,&UNK_10f68ce0b,FUN_10aaa2e40,3,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10aa7f4d0;
      FUN_10a054dac(param_1,&UNK_10f68ce20,FUN_10aaa3104,4,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10aa7f4d0;
      FUN_10a054dac(param_1,&UNK_10f68ce35,FUN_10aaa343c,1,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10aa7f4d0;
      FUN_10a054dac(param_1,&UNK_10f68ce4b,FUN_10aaa3610,3,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10aa7f4d0;
      FUN_10a054dac(param_1,&UNK_10f68ce60,FUN_10aaa3a50,3,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10aa7f4d0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa7f4d4);
  (*pcVar6)();
}



/* Entry: 10aa7f4f0; end: 10aa7f63b;  */

void FUN_10aa7f4f0(undefined8 param_1)

{
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  ppuStack_a0 = (undefined **)0xffffffff00000001;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  FUN_10aa7f63c(param_1,&puStack_a8);
  puStack_b8 = &UNK_10f68c0db;
  puStack_b0 = &UNK_10f68c44b;
  puStack_a8 = &UNK_10f68c442;
  uStack_98 = 2;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000019;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_5c = 299;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_a0 = &puStack_b8;
  FUN_10aaa3d6c();
  puStack_b8 = &UNK_10f68c0ce;
  puStack_a8 = &UNK_10f68c455;
  uStack_98 = 1;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000019;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_5c = 299;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_a0 = &puStack_b8;
  func_0x00010aaa3fb8(param_1,&puStack_a8,0);
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68c0db;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000019;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10aaa4108(param_1,&puStack_a8);
  FUN_10aaa42e8(param_1);
  return;
}



/* Entry: 10aa7f63c; end: 10aa7f713;  */

/* WARNING: Removing unreachable block (ram,0x00010aa7f6d4) */

undefined1  [16] FUN_10aa7f63c(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d280,0x12);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aaa3c70(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa7f714; end: 10aa7f777;  */

void FUN_10aa7f714(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_50 = 0xffffffff00000001;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68c0c1;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0x17d;
  uStack_18 = 0xffffffff;
  FUN_10aa7f778(param_1,&uStack_58);
  FUN_10aaa44a0();
  return;
}



/* Entry: 10aa7f778; end: 10aa7f84f;  */

/* WARNING: Removing unreachable block (ram,0x00010aa7f810) */

undefined1  [16] FUN_10aa7f778(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d293,0x1f);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aaa43a4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa7f850; end: 10aa7f8a7;  */

void FUN_10aa7f850(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68c0c1;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10aa7f8a8(param_1,&uStack_58);
  FUN_10aaa4658();
  return;
}



/* Entry: 10aa7f8a8; end: 10aa7f97f;  */

/* WARNING: Removing unreachable block (ram,0x00010aa7f940) */

undefined1  [16] FUN_10aa7f8a8(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d2b3,0x1f);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aaa455c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa7f980; end: 10aa7f9e3;  */

void FUN_10aa7f980(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_50 = 0xffffffff00000001;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68c0c1;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0x17d;
  uStack_18 = 0xffffffff;
  FUN_10aa7f9e4(param_1,&uStack_58);
  FUN_10aaa4810();
  return;
}



/* Entry: 10aa7f9e4; end: 10aa7fabb;  */

/* WARNING: Removing unreachable block (ram,0x00010aa7fa7c) */

undefined1  [16] FUN_10aa7f9e4(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d2d3,0x1f);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aaa4714(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa7fabc; end: 10aa7fb13;  */

void FUN_10aa7fabc(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68c0c1;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10aa7fb14(param_1,&uStack_58);
  FUN_10aaa49c8();
  return;
}



/* Entry: 10aa7fb14; end: 10aa7fbeb;  */

/* WARNING: Removing unreachable block (ram,0x00010aa7fbac) */

undefined1  [16] FUN_10aa7fb14(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d2f3,0x1a);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aaa48cc(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa7fbec; end: 10aa7fc43;  */

void FUN_10aa7fbec(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68c0c1;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10aa7fc44(param_1,&uStack_58);
  FUN_10aaa4b80();
  return;
}



/* Entry: 10aa7fc44; end: 10aa7fd1b;  */

/* WARNING: Removing unreachable block (ram,0x00010aa7fcdc) */

undefined1  [16] FUN_10aa7fc44(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d30e,0x20);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aaa4a84(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa7fd1c; end: 10aa7fd73;  */

void FUN_10aa7fd1c(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68c0c1;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10aa7fd74(param_1,&uStack_58);
  FUN_10aaa4d38();
  return;
}



/* Entry: 10aa7fd74; end: 10aa7fe4b;  */

/* WARNING: Removing unreachable block (ram,0x00010aa7fe0c) */

undefined1  [16] FUN_10aa7fd74(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d32f,0x1a);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aaa4c3c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa7fe4c; end: 10aa7feaf;  */

void FUN_10aa7fe4c(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_50 = 0xffffffff00000001;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68c0c1;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0x17d;
  uStack_18 = 0xffffffff;
  FUN_10aa7feb0(param_1,&uStack_58);
  FUN_10aaa4ef0();
  return;
}



/* Entry: 10aa7feb0; end: 10aa7ff87;  */

/* WARNING: Removing unreachable block (ram,0x00010aa7ff48) */

undefined1  [16] FUN_10aa7feb0(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d34a,0x1f);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aaa4df4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa7ff88; end: 10aa7ffdf;  */

void FUN_10aa7ff88(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68c0c1;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10aa7ffe0(param_1,&uStack_58);
  FUN_10aaa50a8();
  return;
}



/* Entry: 10aa7ffe0; end: 10aa800b7;  */

/* WARNING: Removing unreachable block (ram,0x00010aa80078) */

undefined1  [16] FUN_10aa7ffe0(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d36a,0x1b);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aaa4fac(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa800b8; end: 10aa8010f;  */

void FUN_10aa800b8(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68c0c1;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10aa80110(param_1,&uStack_58);
  FUN_10aaa5260();
  return;
}



/* Entry: 10aa80110; end: 10aa801e7;  */

/* WARNING: Removing unreachable block (ram,0x00010aa801a8) */

undefined1  [16] FUN_10aa80110(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d386,0x19);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aaa5164(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa801e8; end: 10aa8023f;  */

void FUN_10aa801e8(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68c0c1;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10aa80240(param_1,&uStack_58);
  FUN_10aaa5418();
  return;
}



/* Entry: 10aa80240; end: 10aa80317;  */

/* WARNING: Removing unreachable block (ram,0x00010aa802d8) */

undefined1  [16] FUN_10aa80240(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d3a0,0x1d);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aaa531c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa80318; end: 10aa8031f;  */

void FUN_10aa80318(void)

{
  return;
}



/* Entry: 10aa80320; end: 10aa80607;  */

void FUN_10aa80320(long param_1,float *param_2)

{
  float *pfVar1;
  code *pcVar2;
  float *pfVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  ulong *puVar10;
  long unaff_x23;
  ulong *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 auStack_98 [2];
  char cStack_81;
  float *pfStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  puVar10 = (ulong *)(param_1 + 8);
  pfVar3 = (float *)*puVar10;
  pfVar1 = *(float **)(param_1 + 0x10);
  lVar5 = (long)pfVar1 - (long)pfVar3 >> 2;
  pfVar8 = pfVar1;
  if ((long)pfVar1 - (long)pfVar3 != 0) {
    uVar4 = lVar5 * -0x3333333333333333;
    pfVar7 = pfVar3;
    do {
      uVar6 = uVar4 >> 1;
      pfVar8 = pfVar7 + uVar6 * 5 + 5;
      uVar4 = uVar4 + (uVar4 >> 1 ^ 0xffffffffffffffff);
      if (*param_2 <= pfVar7[uVar6 * 5]) {
        pfVar8 = pfVar7;
        uVar4 = uVar6;
      }
      pfVar7 = pfVar8;
    } while (uVar4 != 0);
  }
  if (pfVar1 < *(float **)(param_1 + 0x18)) {
    if (pfVar8 == pfVar1) {
      uVar17 = *(undefined8 *)(param_2 + 2);
      uVar16 = *(undefined8 *)param_2;
      pfVar1[4] = param_2[4];
      *(undefined8 *)(pfVar1 + 2) = uVar17;
      *(undefined8 *)pfVar1 = uVar16;
      *(float **)(param_1 + 0x10) = pfVar1 + 5;
    }
    else {
      pfVar3 = pfVar1;
      if (pfVar1 + -5 < pfVar1) {
        pfVar1[4] = pfVar1[-1];
        *(undefined8 *)(pfVar1 + 2) = *(undefined8 *)(pfVar1 + -3);
        *(undefined8 *)pfVar1 = *(undefined8 *)(pfVar1 + -5);
        pfVar3 = pfVar1 + 5;
      }
      *(float **)(param_1 + 0x10) = pfVar3;
      if (pfVar1 != pfVar8 + 5) {
        _memmove(pfVar8 + 5,pfVar8);
        pfVar3 = *(float **)(param_1 + 0x10);
      }
      if (pfVar3 < pfVar8) goto LAB_10aa805e8;
      lVar5 = 0x14;
      if (pfVar3 <= param_2 || param_2 < pfVar8) {
        lVar5 = 0;
      }
      puVar13 = (undefined8 *)((long)param_2 + lVar5);
      uVar17 = puVar13[1];
      uVar16 = *puVar13;
      pfVar8[4] = *(float *)(puVar13 + 2);
      *(undefined8 *)(pfVar8 + 2) = uVar17;
      *(undefined8 *)pfVar8 = uVar16;
    }
  }
  else {
    uVar4 = lVar5 * -0x3333333333333333 + 1;
    if (0xccccccccccccccc < uVar4) {
      FUN_10a0cc118();
      if (unaff_x23 != 0) {
        __ZdlPv();
      }
      lVar5 = param_1;
      __Unwind_Resume();
      pcStack_68 = FUN_10aa80608;
      if (*(long *)(lVar5 + 0x10) == *(long *)(lVar5 + 8)) {
        pfStack_80 = pfVar8;
        lStack_78 = param_1;
        puStack_70 = &stack0xfffffffffffffff0;
        func_0x000107c2b054(auStack_98,&DAT_10f519150);
        FUN_10aa806c0(0xff7fffff,lVar5,auStack_98);
        if (cStack_81 < '\0') {
          __ZdlPv(auStack_98[0]);
        }
        func_0x000107c2b054(auStack_98,&DAT_10f68c461);
        FUN_10aa806c0(0x7f7fffff,lVar5,auStack_98);
        if (cStack_81 < '\0') {
          __ZdlPv(auStack_98[0]);
        }
      }
      return;
    }
    lVar14 = (long)pfVar8 - (long)pfVar3;
    lVar5 = (long)*(float **)(param_1 + 0x18) - (long)pfVar3 >> 2;
    uVar6 = lVar5 * -0x6666666666666666;
    if (uVar6 < uVar4 || uVar6 - uVar4 == 0) {
      uVar6 = uVar4;
    }
    if (0x666666666666665 < (ulong)(lVar5 * -0x3333333333333333)) {
      uVar6 = 0xccccccccccccccc;
    }
    if (uVar6 == 0) {
      puVar11 = (ulong *)0x0;
      lVar5 = 0;
    }
    else {
      puVar11 = puVar10;
      FUN_10a0cc12c();
      lVar5 = uVar6 * 0x14;
    }
    puVar13 = (undefined8 *)((long)puVar11 + lVar14);
    lVar12 = (long)puVar11 + lVar5;
    if (lVar14 == lVar5) {
      if (lVar14 < 1) {
        uVar4 = 1;
        if (pfVar8 != pfVar3) {
          uVar4 = ((ulong)-lVar14 >> 2) * 0x6666666666666666;
        }
        uVar6 = uVar4;
        FUN_10a0cc12c();
        puVar13 = (undefined8 *)((long)puVar10 + (uVar4 >> 2) * 0x14);
        lVar12 = (long)puVar10 + uVar6 * 0x14;
        if (puVar11 != (ulong *)0x0) {
          __ZdlPv(puVar11);
        }
      }
      else {
        lVar5 = ((long)puVar13 - (long)puVar11 >> 2) * -0x3333333333333333 + 1;
        puVar13 = (undefined8 *)((long)puVar13 + ((ulong)(lVar5 - (lVar5 >> 0x3f)) >> 1) * -0x14);
      }
    }
    uVar17 = *(undefined8 *)(param_2 + 2);
    uVar16 = *(undefined8 *)param_2;
    *(float *)(puVar13 + 2) = param_2[4];
    puVar13[1] = uVar17;
    *puVar13 = uVar16;
    _memcpy((long)puVar13 + 0x14,pfVar8,*(long *)(param_1 + 0x10) - (long)pfVar8);
    lVar5 = *(long *)(param_1 + 0x10);
    *(float **)(param_1 + 0x10) = pfVar8;
    lVar9 = (long)puVar13 - ((long)pfVar8 - *(long *)(param_1 + 8));
    _memcpy(lVar9);
    lVar14 = *(long *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar9;
    *(long *)(param_1 + 0x10) = (long)puVar13 + 0x14 + (lVar5 - (long)pfVar8);
    *(long *)(param_1 + 0x18) = lVar12;
    if (lVar14 != 0) {
      __ZdlPv();
    }
  }
  if (*(undefined4 **)(param_1 + 8) != *(undefined4 **)(param_1 + 0x10)) {
    *(undefined4 *)(param_1 + 0x20) = (*(undefined4 **)(param_1 + 0x10))[-5];
    uVar15 = **(undefined4 **)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = uVar15;
    *(undefined4 *)(param_1 + 0x40) = 0;
    return;
  }
LAB_10aa805e8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa805ec);
  (*pcVar2)();
}



/* Entry: 10aa80608; end: 10aa806bf;  */

void FUN_10aa80608(long param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    func_0x000107c2b054(auStack_38,&DAT_10f519150);
    FUN_10aa806c0(0xff7fffff,param_1,auStack_38);
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
    func_0x000107c2b054(auStack_38,&DAT_10f68c461);
    FUN_10aa806c0(0x7f7fffff,param_1,auStack_38);
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  return;
}



/* Entry: 10aa806c0; end: 10aa8082f;  */

void FUN_10aa806c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_88 [16];
  long *plStack_78;
  undefined8 uStack_70;
  char cStack_59;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  plVar4 = (long *)0x30;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_DAT_110c405c8;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plStack_58 = plVar4 + 3;
  *plStack_58 = (long)&PTR_DAT_110c3e068;
  plStack_50 = plVar4;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_48,*param_3,param_3[1]);
  }
  else {
    uStack_40 = param_3[1];
    uStack_48 = *param_3;
    lStack_38 = param_3[2];
  }
  FUN_10aaa58c0(param_1,auStack_88,&plStack_58);
  FUN_10aa80948(param_2,auStack_88);
  if (cStack_59 < '\0') {
    __ZdlPv(uStack_70);
  }
  if (plStack_78 != (long *)0x0) {
    plVar4 = plStack_78 + 1;
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
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  if (lStack_38 < 0) {
    __ZdlPv(uStack_48);
  }
  plVar4 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    plVar1 = plStack_50 + 1;
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
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10aa80830; end: 10aa80947;  */

undefined8 * FUN_10aa80830(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_110c3fdb0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  func_0x000107c2b054(param_1 + 9,&UNK_10f68c0c1);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = &PTR_FUN_110c3e9b0;
  param_1[0xd] = &PTR_FUN_110c3ea18;
  param_1[0xf] = &PTR_FUN_110c3ea88;
  func_0x000107c2b054(param_1 + 0x12,&UNK_10f68c0c1);
  FUN_10aa80608(param_1);
  return param_1;
}



/* Entry: 10aa80948; end: 10aa80d5b;  */

/* WARNING: Removing unreachable block (ram,0x00010aa80a58) */

float ** FUN_10aa80948(float *param_1,float *param_2)

{
  code *pcVar1;
  float *pfVar2;
  float **ppfVar3;
  float *pfVar4;
  float *pfVar5;
  ulong uVar6;
  float *pfVar7;
  undefined8 uVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  float *pfVar12;
  float *pfVar13;
  long lVar14;
  ulong uVar15;
  float fVar16;
  undefined8 uVar17;
  float *pfStack_a0;
  float *pfStack_98;
  float *pfStack_90;
  float *pfStack_88;
  float *pfStack_80;
  float *pfStack_78;
  float *pfStack_70;
  float *pfStack_68;
  float *pfStack_60;
  float *pfStack_58;
  
  ppfVar3 = &pfStack_a0;
  pfVar13 = param_1 + 2;
  pfVar7 = *(float **)pfVar13;
  pfVar5 = *(float **)(param_1 + 4);
  lVar9 = (long)pfVar5 - (long)pfVar7 >> 4;
  pfVar4 = pfVar5;
  if ((long)pfVar5 - (long)pfVar7 != 0) {
    uVar6 = lVar9 * -0x5555555555555555;
    pfVar2 = pfVar7;
    do {
      uVar11 = uVar6 >> 1;
      pfVar4 = pfVar2 + uVar11 * 0xc + 0xc;
      uVar6 = uVar6 + (uVar6 >> 1 ^ 0xffffffffffffffff);
      if (*param_2 <= pfVar2[uVar11 * 0xc]) {
        pfVar4 = pfVar2;
        uVar6 = uVar11;
      }
      pfVar2 = pfVar4;
    } while (uVar6 != 0);
  }
  if (pfVar5 < *(float **)(param_1 + 6)) {
    if ((long)pfVar4 - (long)pfVar5 == 0) {
      ppfVar3 = (float **)pfVar5;
      FUN_10a4365a4(pfVar5,param_2);
      *(float **)(param_1 + 4) = pfVar5 + 0xc;
    }
    else {
      pfVar7 = pfVar5;
      if (pfVar5 + -0xc < pfVar5) {
        pfVar7 = pfVar5 + 0xc;
        *pfVar5 = pfVar5[-0xc];
        *(undefined8 *)(pfVar5 + 4) = *(undefined8 *)(pfVar5 + -8);
        *(undefined8 *)(pfVar5 + 2) = *(undefined8 *)(pfVar5 + -10);
        pfVar5[-10] = 0.0;
        pfVar5[-9] = 0.0;
        pfVar5[-8] = 0.0;
        pfVar5[-7] = 0.0;
        *(undefined8 *)(pfVar5 + 10) = *(undefined8 *)(pfVar5 + -2);
        *(undefined8 *)(pfVar5 + 8) = *(undefined8 *)(pfVar5 + -4);
        *(undefined8 *)(pfVar5 + 6) = *(undefined8 *)(pfVar5 + -6);
        pfVar5[-4] = 0.0;
        pfVar5[-3] = 0.0;
        pfVar5[-2] = 0.0;
        pfVar5[-1] = 0.0;
        pfVar5[-6] = 0.0;
        pfVar5[-5] = 0.0;
      }
      *(float **)(param_1 + 4) = pfVar7;
      if (pfVar5 != pfVar4 + 0xc) {
        lVar9 = 0;
        do {
          *(undefined4 *)((long)pfVar5 + lVar9 + -0x30) =
               *(undefined4 *)((long)pfVar5 + lVar9 + -0x60);
          FUN_10aaa574c((undefined1 *)((long)pfVar5 + lVar9 + -0x28),
                        (undefined1 *)((long)pfVar5 + lVar9 + -0x58));
          lVar14 = lVar9 + -0x30;
          *(undefined8 *)((long)pfVar5 + lVar9 + -8) = *(undefined8 *)((long)pfVar5 + lVar9 + -0x38)
          ;
          *(undefined8 *)((long)pfVar5 + lVar9 + -0x10) =
               *(undefined8 *)((long)pfVar5 + lVar9 + -0x40);
          *(undefined8 *)((long)pfVar5 + lVar9 + -0x18) =
               *(undefined8 *)((long)pfVar5 + lVar9 + -0x48);
          *(undefined1 *)((long)pfVar5 + lVar9 + -0x31) = 0;
          *(undefined1 *)((long)pfVar5 + lVar9 + -0x48) = 0;
          lVar9 = lVar14;
        } while (((long)pfVar4 - (long)pfVar5) + 0x30 != lVar14);
        pfVar7 = *(float **)(param_1 + 4);
      }
      if (pfVar7 < pfVar4) goto LAB_10aa80d34;
      lVar9 = 0x30;
      if (pfVar7 <= param_2 || param_2 < pfVar4) {
        lVar9 = 0;
      }
      param_2 = (float *)((long)param_2 + lVar9);
      ppfVar3 = (float **)(pfVar4 + 6);
      *pfVar4 = *param_2;
      func_0x00010aaa57b0(pfVar4 + 2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(ppfVar3,param_2 + 6);
    }
  }
  else {
    uVar6 = lVar9 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar6) {
      pfVar4 = param_1;
      FUN_10a43668c();
      *(float **)(param_1 + 4) = pfVar5;
      __Unwind_Resume();
      if (*(char *)((long)pfVar4 + 0x2f) < '\0') {
        __ZdlPv(*(undefined8 *)(pfVar4 + 6));
      }
      FUN_10a436634(pfVar4 + 2);
      return (float **)pfVar4;
    }
    uVar15 = (long)pfVar4 - (long)pfVar7;
    lVar9 = (long)*(float **)(param_1 + 6) - (long)pfVar7 >> 4;
    uVar11 = lVar9 * 0x5555555555555556;
    if (uVar11 < uVar6 || uVar11 - uVar6 == 0) {
      uVar11 = uVar6;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar11 = 0x555555555555555;
    }
    pfStack_80 = pfVar13;
    if (uVar11 == 0) {
      pfVar5 = (float *)0x0;
      uVar11 = 0;
    }
    else {
      pfVar5 = pfVar13;
      FUN_10a4366a0();
      uVar11 = uVar11 * 0x30;
    }
    pfVar2 = (float *)((long)pfVar5 + uVar15);
    pfStack_88 = (float *)((long)pfVar5 + uVar11);
    pfStack_a0 = pfVar5;
    pfStack_98 = pfVar2;
    pfStack_90 = pfVar2;
    if (uVar15 == uVar11) {
      if ((long)uVar15 < 1) {
        uVar6 = 1;
        if (pfVar4 != pfVar7) {
          uVar6 = (-uVar15 >> 4) * -0x5555555555555556;
        }
        pfVar5 = pfVar13;
        uVar11 = uVar6;
        pfStack_58 = pfVar13;
        FUN_10a4366a0();
        pfVar2 = pfVar5 + (uVar6 >> 2) * 0xc;
        pfVar7 = pfVar2;
        if ((long)pfStack_90 - (long)pfStack_98 != 0) {
          pfVar7 = (float *)((long)pfVar2 + ((long)pfStack_90 - (long)pfStack_98));
          pfVar10 = pfStack_98;
          pfVar12 = pfVar2;
          do {
            *pfVar12 = *pfVar10;
            uVar8 = *(undefined8 *)(pfVar10 + 2);
            *(undefined8 *)(pfVar12 + 4) = *(undefined8 *)(pfVar10 + 4);
            *(undefined8 *)(pfVar12 + 2) = uVar8;
            pfVar10[2] = 0.0;
            pfVar10[3] = 0.0;
            pfVar10[4] = 0.0;
            pfVar10[5] = 0.0;
            uVar17 = *(undefined8 *)(pfVar10 + 8);
            uVar8 = *(undefined8 *)(pfVar10 + 6);
            *(undefined8 *)(pfVar12 + 10) = *(undefined8 *)(pfVar10 + 10);
            *(undefined8 *)(pfVar12 + 8) = uVar17;
            *(undefined8 *)(pfVar12 + 6) = uVar8;
            pfVar10[8] = 0.0;
            pfVar10[9] = 0.0;
            pfVar10[10] = 0.0;
            pfVar10[0xb] = 0.0;
            pfVar10[6] = 0.0;
            pfVar10[7] = 0.0;
            pfVar12 = pfVar12 + 0xc;
            pfVar10 = pfVar10 + 0xc;
          } while (pfVar12 != pfVar7);
        }
        pfStack_78 = pfStack_a0;
        pfStack_68 = pfStack_90;
        pfStack_70 = pfStack_98;
        pfStack_60 = pfStack_88;
        pfStack_a0 = pfVar5;
        pfStack_98 = pfVar2;
        pfStack_90 = pfVar7;
        pfStack_88 = pfVar5 + uVar11 * 0xc;
        func_0x00010a436790(&pfStack_78);
      }
      else {
        pfVar7 = pfVar2 + ((uVar15 >> 4) * -0x5555555555555555 + 1 >> 1) * -0xc;
        FUN_10aaa5824(pfVar2,pfVar2,pfVar7);
        pfStack_98 = pfVar7;
        pfStack_90 = pfVar2;
      }
    }
    FUN_10a4365a4();
    pfStack_90 = pfStack_90 + 0xc;
    func_0x00010a4366e4(pfVar13,pfVar4,*(undefined8 *)(param_1 + 4));
    pfStack_90 = (float *)((long)pfStack_90 + (*(long *)(param_1 + 4) - (long)pfVar4));
    *(float **)(param_1 + 4) = pfVar4;
    lVar9 = (long)pfStack_98 + (*(long *)(param_1 + 2) - (long)pfVar4);
    func_0x00010a4366e4(pfVar13,*(long *)(param_1 + 2),pfVar4,lVar9);
    pfStack_a0 = *(float **)(param_1 + 2);
    *(long *)(param_1 + 2) = lVar9;
    uVar8 = *(undefined8 *)(param_1 + 6);
    *(float **)(param_1 + 6) = pfStack_88;
    *(float **)(param_1 + 4) = pfStack_90;
    pfStack_98 = pfStack_a0;
    pfStack_90 = pfStack_a0;
    pfStack_88 = (float *)uVar8;
    func_0x00010a436790(&pfStack_a0);
  }
  if (*(float **)(param_1 + 2) != *(float **)(param_1 + 4)) {
    param_1[8] = (*(float **)(param_1 + 4))[-0xc];
    fVar16 = **(float **)(param_1 + 2);
    param_1[9] = 0.0;
    param_1[10] = fVar16;
    param_1[0x18] = 0.0;
    return ppfVar3;
  }
LAB_10aa80d34:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa80d38);
  (*pcVar1)();
}



/* Entry: 10aa80d5c; end: 10aa80dc3;  */

long FUN_10aa80d5c(long param_1)

{
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  FUN_10a436634(param_1 + 8);
  return param_1;
}



/* Entry: 10aa80dc4; end: 10aa81067;  */

void FUN_10aa80dc4(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [16];
  long *plStack_a8;
  undefined8 uStack_a0;
  char cStack_89;
  undefined8 uStack_88;
  undefined8 uStack_80;
  byte bStack_71;
  
  lVar6 = *(long *)(param_2 + 8);
  lVar7 = *(long *)(param_2 + 0x10);
  while (lVar7 != lVar6) {
    lVar7 = lVar7 + -0x30;
    func_0x00010a436760(lVar7);
  }
  *(long *)(param_2 + 0x10) = lVar6;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0x7f7fffff;
  *(undefined4 *)(param_2 + 0x60) = 0;
  (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110c3ead0);
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x208))();
  if ((int)plVar4 != 0) {
    iVar8 = 0;
    do {
      (**(code **)(*param_3 + 0x218))(param_3,iVar8);
      (**(code **)(*param_3 + 0xa0))(&uStack_88,param_3,&PTR_s_event_110c3fdd0);
      (**(code **)(*param_3 + 0x40))(param_3,&PTR_DAT_110c3eaf0);
      plVar5 = (long *)0x30;
      __Znwm();
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_DAT_110c405c8;
      plVar5[4] = 0;
      plVar5[5] = 0;
      plStack_e0 = plVar5 + 3;
      *plStack_e0 = (long)&PTR_DAT_110c3e068;
      plStack_d8 = plVar5;
      if ((char)bStack_71 < '\0') {
        func_0x000107c3192c(&uStack_d0,uStack_88,uStack_80);
      }
      else {
        uStack_c8 = uStack_80;
        uStack_d0 = uStack_88;
        lStack_c0 = (ulong)bStack_71 << 0x38;
      }
      FUN_10aaa58c0(param_1,auStack_b8,&plStack_e0);
      FUN_10aa80948(param_2,auStack_b8);
      if (cStack_89 < '\0') {
        __ZdlPv(uStack_a0);
      }
      plVar5 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar1 = plStack_a8 + 1;
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
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      if (lStack_c0 < 0) {
        __ZdlPv(uStack_d0);
      }
      plVar5 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        plVar1 = plStack_d8 + 1;
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
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      (**(code **)(*param_3 + 0x220))(param_3);
      if ((char)bStack_71 < '\0') {
        __ZdlPv(uStack_88);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != (int)plVar4);
  }
  (**(code **)(*param_3 + 0x220))(param_3);
  FUN_10aa80608(param_2);
  return;
}



/* Entry: 10aa81068; end: 10aa8106f;  */

void FUN_10aa81068(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [16];
  long *plStack_a8;
  undefined8 uStack_a0;
  char cStack_89;
  undefined8 uStack_88;
  undefined8 uStack_80;
  byte bStack_71;
  
  lVar6 = *(long *)(param_2 + -0x60);
  lVar7 = *(long *)(param_2 + -0x58);
  while (lVar7 != lVar6) {
    lVar7 = lVar7 + -0x30;
    func_0x00010a436760(lVar7);
  }
  *(long *)(param_2 + -0x58) = lVar6;
  *(undefined8 *)(param_2 + -0x48) = 0;
  *(undefined4 *)(param_2 + -0x40) = 0x7f7fffff;
  *(undefined4 *)(param_2 + -8) = 0;
  (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110c3ead0);
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x208))();
  if ((int)plVar4 != 0) {
    iVar8 = 0;
    do {
      (**(code **)(*param_3 + 0x218))(param_3,iVar8);
      (**(code **)(*param_3 + 0xa0))(&uStack_88,param_3,&PTR_s_event_110c3fdd0);
      (**(code **)(*param_3 + 0x40))(param_3,&PTR_DAT_110c3eaf0);
      plVar5 = (long *)0x30;
      __Znwm();
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_DAT_110c405c8;
      plVar5[4] = 0;
      plVar5[5] = 0;
      plStack_e0 = plVar5 + 3;
      *plStack_e0 = (long)&PTR_DAT_110c3e068;
      plStack_d8 = plVar5;
      if ((char)bStack_71 < '\0') {
        func_0x000107c3192c(&uStack_d0,uStack_88,uStack_80);
      }
      else {
        uStack_c8 = uStack_80;
        uStack_d0 = uStack_88;
        lStack_c0 = (ulong)bStack_71 << 0x38;
      }
      FUN_10aaa58c0(param_1,auStack_b8,&plStack_e0);
      FUN_10aa80948(param_2 + -0x68,auStack_b8);
      if (cStack_89 < '\0') {
        __ZdlPv(uStack_a0);
      }
      plVar5 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar1 = plStack_a8 + 1;
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
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      if (lStack_c0 < 0) {
        __ZdlPv(uStack_d0);
      }
      plVar5 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        plVar1 = plStack_d8 + 1;
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
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      (**(code **)(*param_3 + 0x220))(param_3);
      if ((char)bStack_71 < '\0') {
        __ZdlPv(uStack_88);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != (int)plVar4);
  }
  (**(code **)(*param_3 + 0x220))(param_3);
  FUN_10aa80608(param_2 + -0x68);
  return;
}



/* Entry: 10aa81070; end: 10aa81133;  */

void FUN_10aa81070(long param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_10aa80608();
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c3ead0);
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  for (puVar2 = *(undefined4 **)(param_1 + 8); puVar2 != puVar1; puVar2 = puVar2 + 0xc) {
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a00d760(param_2,&PTR_s_event_110c3fdd0,puVar2 + 6);
    (**(code **)(*param_2 + 0x60))(*puVar2,param_2,&PTR_DAT_110c3eaf0);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010aa81130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10aa81134; end: 10aa8113b;  */

void FUN_10aa81134(long param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_10aa80608();
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c3ead0);
  puVar1 = *(undefined4 **)(param_1 + -0x58);
  for (puVar2 = *(undefined4 **)(param_1 + -0x60); puVar2 != puVar1; puVar2 = puVar2 + 0xc) {
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a00d760(param_2,&PTR_s_event_110c3fdd0,puVar2 + 6);
    (**(code **)(*param_2 + 0x60))(*puVar2,param_2,&PTR_DAT_110c3eaf0);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010aa81130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10aa8113c; end: 10aa8121b;  */

undefined1  [16] FUN_10aa8113c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  
  lVar5 = *(long *)(param_3 + 8);
  lVar2 = *(long *)(param_3 + 0x10) - lVar5;
  if (lVar2 != 0) {
    uVar7 = param_3;
    FUN_10aa8121c(param_2);
    FUN_10aa8121c(param_1);
    if (((int)uVar7 != (int)param_3) || (uVar7 >> 0x20 != param_3 >> 0x20)) {
      uVar8 = (uint)(uVar7 >> 0x20);
      uVar6 = (uint)(param_3 >> 0x20);
      uVar1 = uVar8;
      if ((float)param_1 <= (float)param_2) {
        uVar1 = uVar6;
      }
      if ((float)param_1 <= (float)param_2) {
        uVar6 = uVar8;
      }
      if ((-1 < (int)uVar1) &&
         (uVar7 = (lVar2 >> 4) * -0x5555555555555555,
         ((int)uVar6 <= (int)uVar7 && uVar6 != uVar1) &&
         ((int)uVar7 < (int)uVar6 || (int)uVar1 <= (int)uVar6))) {
        if (uVar7 < uVar1) {
LAB_10aa81208:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa8120c);
          (*pcVar3)();
        }
        uVar6 = uVar6 - uVar1;
        uVar7 = uVar7 - uVar1;
        if ((uVar6 != 0xffffffff) && (bVar4 = uVar7 < uVar6, uVar7 = (ulong)uVar6, bVar4))
        goto LAB_10aa81208;
        lVar5 = lVar5 + (ulong)uVar1 * 0x30;
        goto LAB_10aa811d0;
      }
    }
  }
  uVar7 = 0;
  lVar5 = 0;
LAB_10aa811d0:
  auVar9._8_8_ = uVar7;
  auVar9._0_8_ = lVar5;
  return auVar9;
}



/* Entry: 10aa8121c; end: 10aa81263;  */

undefined * FUN_10aa8121c(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *extraout_x8;
  float *pfVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  float *pfVar12;
  ulong uVar13;
  long lVar14;
  float fVar15;
  ulong uVar11;
  
  lVar6 = *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8);
  if ((ulong)((lVar6 >> 4) * -0x5555555555555555) < 2) {
    puVar4 = &UNK_10f68d5a4;
    FUN_10a00946c(&UNK_10f68d5a4);
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    return puVar4;
  }
  if (lVar6 == 0x60) {
    return (undefined *)0x100000000;
  }
  iVar5 = *(int *)(param_2 + 0x60);
  if (iVar5 == 0) {
    fVar15 = (float)(ulong)((*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 4) *
                           -0x5555555555555555);
    _logf();
    iVar5 = (int)fVar15;
    if (iVar5 < 2) {
      iVar5 = 1;
    }
    *(int *)(param_2 + 0x60) = iVar5;
  }
  uVar9 = *(uint *)(param_2 + 0x24);
  uVar10 = (ulong)uVar9;
  if (*(float *)(param_2 + 0x28) <= param_1) {
    uVar10 = (long)(int)uVar9 + 1;
    pfVar7 = *(float **)(param_2 + 8);
    lVar6 = *(long *)(param_2 + 0x10);
    uVar8 = (lVar6 - (long)pfVar7 >> 4) * -0x5555555555555555;
    uVar2 = (int)uVar8 - 1;
    uVar13 = (ulong)uVar2;
    uVar9 = (int)uVar10 + iVar5;
    if ((int)uVar2 <= (int)uVar9) {
      uVar9 = uVar2;
    }
    uVar11 = uVar10;
    if ((int)uVar10 < (int)uVar9) {
      pfVar12 = pfVar7 + uVar10 * 0xc;
      lVar14 = 0;
      if (uVar10 <= uVar8) {
        lVar14 = uVar8 - uVar10;
      }
      do {
        if (lVar14 == 0) goto LAB_10aaa5b98;
        uVar11 = uVar10;
        if (param_1 < *pfVar12) break;
        uVar1 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar1;
        uVar11 = (ulong)uVar9;
        pfVar12 = pfVar12 + 0xc;
        lVar14 = lVar14 + -1;
      } while (uVar9 != uVar1);
    }
    uVar9 = (uint)uVar11;
    if (uVar9 != uVar2) {
      if (uVar8 < (ulong)(long)(int)uVar9 || uVar8 - (long)(int)uVar9 == 0) goto LAB_10aaa5b98;
      uVar13 = uVar11;
      if (pfVar7[(long)(int)uVar9 * 0xc] <= param_1) goto LAB_10aaa5adc;
    }
  }
  else {
    uVar2 = uVar9 - iVar5 & ((int)(uVar9 - iVar5) >> 0x1f ^ 0xffffffffU);
    uVar13 = uVar10;
    if ((int)uVar2 < (int)uVar9) {
      uVar8 = (*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 4) * -0x5555555555555555;
      pfVar7 = (float *)(*(long *)(param_2 + 8) + (ulong)uVar9 * 0x30);
      do {
        if (uVar8 < uVar10 || uVar8 - uVar10 == 0) goto LAB_10aaa5b98;
        uVar13 = uVar10;
      } while ((param_1 <= *pfVar7) &&
              (uVar10 = uVar10 - 1, uVar13 = (ulong)uVar2, pfVar7 = pfVar7 + -0xc,
              (long)(ulong)uVar2 < (long)uVar10));
    }
    iVar5 = (int)uVar13;
    if (iVar5 == 0) {
      pfVar7 = *(float **)(param_2 + 8);
      lVar6 = *(long *)(param_2 + 0x10);
    }
    else {
      pfVar7 = *(float **)(param_2 + 8);
      lVar6 = *(long *)(param_2 + 0x10);
      uVar10 = (lVar6 - (long)pfVar7 >> 4) * -0x5555555555555555;
      if (uVar10 < (ulong)(long)iVar5 || uVar10 - (long)iVar5 == 0) goto LAB_10aaa5b98;
      if (param_1 <= pfVar7[(long)iVar5 * 0xc]) {
LAB_10aaa5adc:
        *(float *)(param_2 + 0x30) = param_1;
        lVar14 = (lVar6 + -0x30) - (long)pfVar7;
        pfVar12 = pfVar7;
        if (lVar14 != 0) {
          uVar10 = (lVar14 >> 4) * -0x5555555555555555;
          do {
            uVar8 = uVar10 >> 1;
            uVar13 = uVar10 + (uVar10 >> 1 ^ 0xffffffffffffffff);
            uVar10 = uVar8;
            if (pfVar12[uVar8 * 0xc] <= param_1) {
              uVar10 = uVar13;
              pfVar12 = pfVar12 + uVar8 * 0xc + 0xc;
            }
          } while (uVar10 != 0);
        }
        uVar13 = (ulong)(uint)((int)((ulong)((long)pfVar12 - (long)pfVar7) >> 4) * -0x55555555);
        goto LAB_10aaa5b50;
      }
    }
    uVar13 = (ulong)(iVar5 + 1);
  }
LAB_10aaa5b50:
  uVar9 = (int)uVar13 - 1;
  uVar10 = (lVar6 - (long)pfVar7 >> 4) * -0x5555555555555555;
  if ((ulong)(long)(int)uVar9 <= uVar10 && uVar10 - (long)(int)uVar9 != 0) {
    fVar15 = pfVar7[(long)(int)uVar9 * 0xc];
    *(uint *)(param_2 + 0x24) = uVar9;
    *(float *)(param_2 + 0x28) = fVar15;
    return (undefined *)((ulong)uVar9 | uVar13 << 0x20);
  }
LAB_10aaa5b98:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10aaa5b9c);
  (*pcVar3)();
}



/* Entry: 10aa81264; end: 10aa8126f;  */

void FUN_10aa81264(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10aa81270; end: 10aa812c7;  */

undefined1  [16] FUN_10aa81270(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  (**(code **)**(undefined8 **)(param_2 + 0x30))();
  (**(code **)**(undefined8 **)(param_2 + 0x40))(param_1);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 10aa812c8; end: 10aa814fb;  */

void FUN_10aa812c8(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [8];
  long *plStack_48;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  if (param_2[1] - *param_2 == 0xa0) {
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    FUN_10aaa5b9c(auStack_40);
    FUN_10ac99870(uVar7,auStack_40);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
    if (1 < (ulong)((param_2[1] - *param_2 >> 4) * -0x3333333333333333)) {
      uVar7 = *(undefined8 *)(param_1 + 0x40);
      FUN_10aaa5b9c(auStack_50,*param_2 + 0x50);
      FUN_10ac99870(uVar7,auStack_50);
      if (plStack_48 != (long *)0x0) {
        plVar1 = plStack_48 + 1;
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
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
      return;
    }
  }
  else {
    puStack_c8 = &UNK_10f68d293;
    uStack_c0 = 0x1f;
    func_0x0001098998d4(auStack_b8,&puStack_c8);
    FUN_109feb280(auStack_a0,&UNK_10f68cf8a,auStack_b8);
    FUN_10a012db0(auStack_88,auStack_a0,&UNK_10f68cfac);
    __ZNSt3__19to_stringEm(&puStack_e0,2);
    if (-1 < (char)bStack_c9) {
      uStack_d8 = (ulong)bStack_c9;
      puStack_e0 = (undefined1 *)&puStack_e0;
    }
    puVar5 = auStack_88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,puStack_e0,uStack_d8);
    uStack_68 = puVar5[1];
    uStack_70 = *puVar5;
    uStack_60 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_10a0029c0(&uStack_70);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa81464);
  (*pcVar4)();
}



/* Entry: 10aa814fc; end: 10aa81503;  */

void FUN_10aa814fc(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [8];
  long *plStack_48;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  if (param_2[1] - *param_2 == 0xa0) {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    FUN_10aaa5b9c(auStack_40);
    FUN_10ac99870(uVar7,auStack_40);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
    if (1 < (ulong)((param_2[1] - *param_2 >> 4) * -0x3333333333333333)) {
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      FUN_10aaa5b9c(auStack_50,*param_2 + 0x50);
      FUN_10ac99870(uVar7,auStack_50);
      if (plStack_48 != (long *)0x0) {
        plVar1 = plStack_48 + 1;
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
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
      return;
    }
  }
  else {
    puStack_c8 = &UNK_10f68d293;
    uStack_c0 = 0x1f;
    func_0x0001098998d4(auStack_b8,&puStack_c8);
    FUN_109feb280(auStack_a0,&UNK_10f68cf8a,auStack_b8);
    FUN_10a012db0(auStack_88,auStack_a0,&UNK_10f68cfac);
    __ZNSt3__19to_stringEm(&puStack_e0,2);
    if (-1 < (char)bStack_c9) {
      uStack_d8 = (ulong)bStack_c9;
      puStack_e0 = (undefined1 *)&puStack_e0;
    }
    puVar5 = auStack_88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,puStack_e0,uStack_d8);
    uStack_68 = puVar5[1];
    uStack_70 = *puVar5;
    uStack_60 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_10a0029c0(&uStack_70);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa81464);
  (*pcVar4)();
}



/* Entry: 10aa81504; end: 10aa8158b;  */

void FUN_10aa81504(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    FUN_10ac99f74(param_1,*(undefined8 *)(param_2 + 0x30 + lVar1));
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x20);
  return;
}



/* Entry: 10aa8158c; end: 10aa81663;  */

void FUN_10aa8158c(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar1 = *(long *)(param_1 + 0x30) + 0x58;
  }
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c3eb10,lVar1);
  lVar1 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar1 = *(long *)(param_1 + 0x40) + 0x58;
  }
                    /* WARNING: Could not recover jumptable at 0x00010aa815f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c3eb30,lVar1);
  return;
}



/* Entry: 10aa81664; end: 10aa81743;  */

void FUN_10aa81664(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  lVar6 = 0x30;
  do {
    func_0x00010a493ed0(auStack_48,&uStack_31);
    FUN_10a468bcc(param_1 + lVar6,auStack_48);
    plVar4 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x50);
  lVar6 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar6 = *(long *)(param_1 + 0x30) + 0x58;
  }
  (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3eb10,lVar6);
  lVar6 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar6 = *(long *)(param_1 + 0x40) + 0x58;
  }
  (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3eb30,lVar6);
  return;
}



/* Entry: 10aa81744; end: 10aa8174b;  */

void FUN_10aa81744(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  lVar6 = 0x30;
  do {
    func_0x00010a493ed0(auStack_48,&uStack_31);
    FUN_10a468bcc(param_1 + -8 + lVar6,auStack_48);
    plVar4 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x50);
  lVar6 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar6 = *(long *)(param_1 + 0x28) + 0x58;
  }
  (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3eb10,lVar6);
  lVar6 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar6 = *(long *)(param_1 + 0x38) + 0x58;
  }
  (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3eb30,lVar6);
  return;
}



/* Entry: 10aa8174c; end: 10aa817c7;  */

undefined8 FUN_10aa8174c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  (**(code **)**(undefined8 **)(param_2 + 0x30))();
  (**(code **)**(undefined8 **)(param_2 + 0x40))(param_1);
  (**(code **)**(undefined8 **)(param_2 + 0x50))(param_1);
  return uVar1;
}



/* Entry: 10aa817c8; end: 10aa81a7b;  */

void FUN_10aa817c8(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 auStack_98 [3];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  if (param_2[1] - *param_2 == 0xf0) {
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    FUN_10aaa5b9c(auStack_40);
    FUN_10ac99870(uVar7,auStack_40);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
    if (1 < (ulong)((param_2[1] - *param_2 >> 4) * -0x3333333333333333)) {
      uVar7 = *(undefined8 *)(param_1 + 0x40);
      FUN_10aaa5b9c(auStack_50,*param_2 + 0x50);
      FUN_10ac99870(uVar7,auStack_50);
      if (plStack_48 != (long *)0x0) {
        plVar1 = plStack_48 + 1;
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
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
      if (2 < (ulong)((param_2[1] - *param_2 >> 4) * -0x3333333333333333)) {
        uVar7 = *(undefined8 *)(param_1 + 0x50);
        FUN_10aaa5b9c(auStack_60,*param_2 + 0xa0);
        FUN_10ac99870(uVar7,auStack_60);
        if (plStack_58 != (long *)0x0) {
          plVar1 = plStack_58 + 1;
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
            (**(code **)(*plStack_58 + 0x10))(plStack_58);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
          }
        }
        return;
      }
    }
  }
  else {
    puStack_d8 = &UNK_10f68d2b3;
    uStack_d0 = 0x1f;
    func_0x0001098998d4(auStack_c8,&puStack_d8);
    FUN_109feb280(auStack_b0,&UNK_10f68cf8a,auStack_c8);
    FUN_10a012db0(auStack_98,auStack_b0,&UNK_10f68cfac);
    __ZNSt3__19to_stringEm(&puStack_f0,3);
    if (-1 < (char)bStack_d9) {
      uStack_e8 = (ulong)bStack_d9;
      puStack_f0 = (undefined1 *)&puStack_f0;
    }
    puVar5 = auStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,puStack_f0,uStack_e8);
    uStack_78 = puVar5[1];
    uStack_80 = *puVar5;
    uStack_70 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_10a0029c0(&uStack_80);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa819d8);
  (*pcVar4)();
}



/* Entry: 10aa81a7c; end: 10aa81a83;  */

void FUN_10aa81a7c(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 auStack_98 [3];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  if (param_2[1] - *param_2 == 0xf0) {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    FUN_10aaa5b9c(auStack_40);
    FUN_10ac99870(uVar7,auStack_40);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
    if (1 < (ulong)((param_2[1] - *param_2 >> 4) * -0x3333333333333333)) {
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      FUN_10aaa5b9c(auStack_50,*param_2 + 0x50);
      FUN_10ac99870(uVar7,auStack_50);
      if (plStack_48 != (long *)0x0) {
        plVar1 = plStack_48 + 1;
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
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
      if (2 < (ulong)((param_2[1] - *param_2 >> 4) * -0x3333333333333333)) {
        uVar7 = *(undefined8 *)(param_1 + 0x48);
        FUN_10aaa5b9c(auStack_60,*param_2 + 0xa0);
        FUN_10ac99870(uVar7,auStack_60);
        if (plStack_58 != (long *)0x0) {
          plVar1 = plStack_58 + 1;
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
            (**(code **)(*plStack_58 + 0x10))(plStack_58);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
          }
        }
        return;
      }
    }
  }
  else {
    puStack_d8 = &UNK_10f68d2b3;
    uStack_d0 = 0x1f;
    func_0x0001098998d4(auStack_c8,&puStack_d8);
    FUN_109feb280(auStack_b0,&UNK_10f68cf8a,auStack_c8);
    FUN_10a012db0(auStack_98,auStack_b0,&UNK_10f68cfac);
    __ZNSt3__19to_stringEm(&puStack_f0,3);
    if (-1 < (char)bStack_d9) {
      uStack_e8 = (ulong)bStack_d9;
      puStack_f0 = (undefined1 *)&puStack_f0;
    }
    puVar5 = auStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,puStack_f0,uStack_e8);
    uStack_78 = puVar5[1];
    uStack_80 = *puVar5;
    uStack_70 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_10a0029c0(&uStack_80);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa819d8);
  (*pcVar4)();
}



/* Entry: 10aa81a84; end: 10aa81b0b;  */

void FUN_10aa81a84(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    FUN_10ac99f74(param_1,*(undefined8 *)(param_2 + 0x30 + lVar1));
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x30);
  return;
}



/* Entry: 10aa81b0c; end: 10aa81b9f;  */

void FUN_10aa81b0c(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar1 = *(long *)(param_1 + 0x30) + 0x58;
  }
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c3eb10,lVar1);
  lVar1 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar1 = *(long *)(param_1 + 0x40) + 0x58;
  }
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c3eb30,lVar1);
  lVar1 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar1 = *(long *)(param_1 + 0x50) + 0x58;
  }
                    /* WARNING: Could not recover jumptable at 0x00010aa81b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c3eb50,lVar1);
  return;
}



/* Entry: 10aa81ba0; end: 10aa81ba7;  */

void FUN_10aa81ba0(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar1 = *(long *)(param_1 + 0x28) + 0x58;
  }
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c3eb10,lVar1);
  lVar1 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar1 = *(long *)(param_1 + 0x38) + 0x58;
  }
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c3eb30,lVar1);
  lVar1 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar1 = *(long *)(param_1 + 0x48) + 0x58;
  }
                    /* WARNING: Could not recover jumptable at 0x00010aa81b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c3eb50,lVar1);
  return;
}



/* Entry: 10aa81ba8; end: 10aa81caf;  */

void FUN_10aa81ba8(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  lVar6 = 0x30;
  do {
    func_0x00010a493ed0(auStack_48,&uStack_31);
    FUN_10a468bcc(param_1 + lVar6,auStack_48);
    plVar4 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x60);
  lVar6 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar6 = *(long *)(param_1 + 0x30) + 0x58;
  }
  (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3eb10,lVar6);
  lVar6 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar6 = *(long *)(param_1 + 0x40) + 0x58;
  }
  (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3eb30,lVar6);
  lVar6 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar6 = *(long *)(param_1 + 0x50) + 0x58;
  }
  (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3eb50,lVar6);
  return;
}



/* Entry: 10aa81cb0; end: 10aa81cb7;  */

void FUN_10aa81cb0(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  lVar6 = 0x30;
  do {
    func_0x00010a493ed0(auStack_48,&uStack_31);
    FUN_10a468bcc(param_1 + -8 + lVar6,auStack_48);
    plVar4 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x60);
  lVar6 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar6 = *(long *)(param_1 + 0x28) + 0x58;
  }
  (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3eb10,lVar6);
  lVar6 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar6 = *(long *)(param_1 + 0x38) + 0x58;
  }
  (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3eb30,lVar6);
  lVar6 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar6 = *(long *)(param_1 + 0x48) + 0x58;
  }
  (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3eb50,lVar6);
  return;
}



/* Entry: 10aa81cb8; end: 10aa81d4f;  */

undefined8 FUN_10aa81cb8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  (**(code **)**(undefined8 **)(param_2 + 0x30))();
  (**(code **)**(undefined8 **)(param_2 + 0x40))(param_1);
  (**(code **)**(undefined8 **)(param_2 + 0x50))(param_1);
  (**(code **)**(undefined8 **)(param_2 + 0x60))(param_1);
  return uVar1;
}



/* Entry: 10aa81d50; end: 10aa82083;  */

void FUN_10aa81d50(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puStack_100;
  ulong uStack_f8;
  byte bStack_e9;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 auStack_a8 [3];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [8];
  long *plStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  if (param_2[1] - *param_2 == 0x140) {
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    FUN_10aaa5b9c(auStack_40);
    FUN_10ac99870(uVar7,auStack_40);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
    if (1 < (ulong)((param_2[1] - *param_2 >> 4) * -0x3333333333333333)) {
      uVar7 = *(undefined8 *)(param_1 + 0x40);
      FUN_10aaa5b9c(auStack_50,*param_2 + 0x50);
      FUN_10ac99870(uVar7,auStack_50);
      if (plStack_48 != (long *)0x0) {
        plVar1 = plStack_48 + 1;
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
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
      if (2 < (ulong)((param_2[1] - *param_2 >> 4) * -0x3333333333333333)) {
        uVar7 = *(undefined8 *)(param_1 + 0x50);
        FUN_10aaa5b9c(auStack_60,*param_2 + 0xa0);
        FUN_10ac99870(uVar7,auStack_60);
        if (plStack_58 != (long *)0x0) {
          plVar1 = plStack_58 + 1;
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
            (**(code **)(*plStack_58 + 0x10))(plStack_58);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
          }
        }
        if (3 < (ulong)((param_2[1] - *param_2 >> 4) * -0x3333333333333333)) {
          uVar7 = *(undefined8 *)(param_1 + 0x60);
          FUN_10aaa5b9c(auStack_70,*param_2 + 0xf0);
          FUN_10ac99870(uVar7,auStack_70);
          if (plStack_68 != (long *)0x0) {
            plVar1 = plStack_68 + 1;
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
              (**(code **)(*plStack_68 + 0x10))(plStack_68);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
            }
          }
          return;
        }
      }
    }
  }
  else {
    puStack_e8 = &UNK_10f68d2d3;
    uStack_e0 = 0x1f;
    func_0x0001098998d4(auStack_d8,&puStack_e8);
    FUN_109feb280(auStack_c0,&UNK_10f68cf8a,auStack_d8);
    FUN_10a012db0(auStack_a8,auStack_c0,&UNK_10f68cfac);
    __ZNSt3__19to_stringEm(&puStack_100,4);
    if (-1 < (char)bStack_e9) {
      uStack_f8 = (ulong)bStack_e9;
      puStack_100 = (undefined1 *)&puStack_100;
    }
    puVar5 = auStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,puStack_100,uStack_f8);
    uStack_88 = puVar5[1];
    uStack_90 = *puVar5;
    uStack_80 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_10a0029c0(&uStack_90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa81fd4);
  (*pcVar4)();
}



/* Entry: 10aa82084; end: 10aa8208b;  */

void FUN_10aa82084(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puStack_100;
  ulong uStack_f8;
  byte bStack_e9;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 auStack_a8 [3];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [8];
  long *plStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  if (param_2[1] - *param_2 == 0x140) {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    FUN_10aaa5b9c(auStack_40);
    FUN_10ac99870(uVar7,auStack_40);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
    if (1 < (ulong)((param_2[1] - *param_2 >> 4) * -0x3333333333333333)) {
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      FUN_10aaa5b9c(auStack_50,*param_2 + 0x50);
      FUN_10ac99870(uVar7,auStack_50);
      if (plStack_48 != (long *)0x0) {
        plVar1 = plStack_48 + 1;
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
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
      if (2 < (ulong)((param_2[1] - *param_2 >> 4) * -0x3333333333333333)) {
        uVar7 = *(undefined8 *)(param_1 + 0x48);
        FUN_10aaa5b9c(auStack_60,*param_2 + 0xa0);
        FUN_10ac99870(uVar7,auStack_60);
        if (plStack_58 != (long *)0x0) {
          plVar1 = plStack_58 + 1;
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
            (**(code **)(*plStack_58 + 0x10))(plStack_58);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
          }
        }
        if (3 < (ulong)((param_2[1] - *param_2 >> 4) * -0x3333333333333333)) {
          uVar7 = *(undefined8 *)(param_1 + 0x58);
          FUN_10aaa5b9c(auStack_70,*param_2 + 0xf0);
          FUN_10ac99870(uVar7,auStack_70);
          if (plStack_68 != (long *)0x0) {
            plVar1 = plStack_68 + 1;
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
              (**(code **)(*plStack_68 + 0x10))(plStack_68);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
            }
          }
          return;
        }
      }
    }
  }
  else {
    puStack_e8 = &UNK_10f68d2d3;
    uStack_e0 = 0x1f;
    func_0x0001098998d4(auStack_d8,&puStack_e8);
    FUN_109feb280(auStack_c0,&UNK_10f68cf8a,auStack_d8);
    FUN_10a012db0(auStack_a8,auStack_c0,&UNK_10f68cfac);
    __ZNSt3__19to_stringEm(&puStack_100,4);
    if (-1 < (char)bStack_e9) {
      uStack_f8 = (ulong)bStack_e9;
      puStack_100 = (undefined1 *)&puStack_100;
    }
    puVar5 = auStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,puStack_100,uStack_f8);
    uStack_88 = puVar5[1];
    uStack_90 = *puVar5;
    uStack_80 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_10a0029c0(&uStack_90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa81fd4);
  (*pcVar4)();
}


