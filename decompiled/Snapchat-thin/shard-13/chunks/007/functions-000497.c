/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ac23dd0; end: 10ac23e2b;  */

void FUN_10ac23dd0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
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
  return;
}



/* Entry: 10ac23e2c; end: 10ac23ea7;  */

void FUN_10ac23e2c(long param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined1 uVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  char cVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  undefined *puVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  undefined8 *unaff_x22;
  undefined ***unaff_x23;
  ulong unaff_x26;
  double dVar23;
  double dVar24;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  ulong uStack_108;
  long *plStack_100;
  long lStack_f8;
  float fStack_f0;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = (undefined **)(param_1 + 0x38);
  FUN_10ac23dd0();
  ppuVar7 = (undefined **)(param_1 + 0xd0);
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    ppuVar5 = ppuVar7;
    func_0x00010a136de4();
    *(undefined1 *)(param_1 + 0xe8) = 0;
  }
  if (*(char *)(param_1 + 0xac) == '\x01') {
    ppuVar5 = *(undefined ***)(param_2 + 0x58);
    FUN_10aad301c(&ppuStack_c0,ppuVar5,param_1 + 0x48);
    uVar15 = uStack_a8;
    bVar1 = *(byte *)(param_1 + 0xe8);
    unaff_x22 = (undefined8 *)(uStack_a8 & 0xff);
    if (bVar1 == (byte)uStack_a8) {
      if ((bVar1 & 1) != 0) {
        func_0x00010a22b8d4(ppuVar7,&ppuStack_c0);
        *(long *)(param_1 + 0xe0) = lStack_b0;
        ppuVar5 = ppuVar7;
        if ((byte)uStack_a8 == '\x01') goto LAB_10ac2373c;
      }
    }
    else {
      if (bVar1 == 0) {
        *(undefined ***)(param_1 + 0xd8) = ppuStack_b8;
        *ppuVar7 = (undefined *)ppuStack_c0;
        ppuStack_c0 = (undefined **)0x0;
        ppuStack_b8 = (undefined **)0x0;
        *(long *)(param_1 + 0xe0) = lStack_b0;
        *(undefined1 *)(param_1 + 0xe8) = 1;
        ppuVar7 = ppuVar5;
      }
      else {
        func_0x00010a136de4();
        *(undefined1 *)(param_1 + 0xe8) = 0;
      }
      ppuVar5 = ppuVar7;
      if ((uVar15 & 1) != 0) {
LAB_10ac2373c:
        ppuVar6 = ppuStack_b8;
        ppuVar5 = ppuVar7;
        if (ppuStack_b8 != (undefined **)0x0) {
          ppuVar7 = ppuStack_b8 + 1;
          do {
            puVar17 = *ppuVar7;
            cVar13 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
            if (bVar2) {
              *ppuVar7 = puVar17 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if (puVar17 == (undefined *)0x0) {
            (**(code **)(*ppuStack_b8 + 0x10))(ppuStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppuVar5 = ppuVar6;
          }
        }
      }
    }
  }
  lVar21 = *(long *)(param_1 + 0x28);
  if ((*(long *)(lVar21 + 0x30) != 0) &&
     ((*(char *)(param_1 + 0xac) != '\x01' || (*(char *)(param_1 + 0xe8) == '\x01')))) {
    if (*(long *)(param_2 + 0x58) == 0) {
      if (*(int *)(*(long *)(param_1 + -0x1f8) + 0xe30) == 2) {
        uVar9 = 0;
        cVar13 = '\0';
        dVar23 = 0.0;
      }
      else {
        uVar9 = *(undefined1 *)(param_2 + 0x18);
        dVar23 = *(double *)(param_2 + 0x20);
        cVar13 = *(char *)(param_2 + 0x28);
      }
    }
    else {
      uVar9 = 0;
      cVar13 = '\x01';
      dVar23 = (double)*(long *)(*(long *)(param_2 + 0x58) + 8) / 1000000000.0;
    }
    if ((dVar23 != *(double *)(param_1 + 0xc0)) || (cVar13 != *(char *)(param_1 + 200))) {
      *(undefined1 *)(param_1 + 0xb8) = uVar9;
      *(double *)(param_1 + 0xc0) = dVar23;
      *(char *)(param_1 + 200) = cVar13;
      dVar24 = *(double *)(*(long *)(*(long *)(param_1 + -0x1f8) + 0x850) + 0x18);
      ppuVar7 = (undefined **)0x38;
      __Znwm();
      ppuVar7[1] = (undefined *)0x0;
      ppuVar7[2] = (undefined *)0x0;
      *ppuVar7 = (undefined *)&PTR_FUN_110c5e1b0;
      ppuVar7[4] = (undefined *)0x0;
      ppuVar7[5] = (undefined *)0x0;
      ppuStack_120 = ppuVar7 + 3;
      *ppuStack_120 = (undefined *)&PTR_FUN_110c173c8;
      ppuVar7[6] = (undefined *)(dVar23 - dVar24);
      uStack_108 = 0;
      puStack_110 = (undefined *)0x0;
      lStack_f8 = 0;
      plStack_100 = (long *)0x0;
      fStack_f0 = *(float *)(lVar21 + 0x38);
      ppuStack_118 = ppuVar7;
      FUN_10ac4c7c0(&puStack_110,*(undefined8 *)(lVar21 + 0x20));
      plVar22 = *(long **)(lVar21 + 0x28);
      if (plVar22 != (long *)0x0) {
        unaff_x23 = (undefined ***)0x9ddfea08eb382d69;
        do {
          uVar15 = uStack_108;
          uVar10 = plVar22[2];
          uVar18 = ((ulong)(uint)((int)uVar10 << 3) + 8 ^ uVar10 >> 0x20) * -0x622015f714c7d297;
          uVar18 = (uVar10 >> 0x20 ^ uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
          uVar18 = (uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297;
          if (uStack_108 != 0) {
            uVar14 = uStack_108 - 1;
            if ((uStack_108 & uVar14) == 0) {
              unaff_x26 = uVar18 & uVar14;
            }
            else {
              unaff_x26 = uVar18;
              if (uStack_108 <= uVar18) {
                uVar20 = 0;
                if (uStack_108 != 0) {
                  uVar20 = uVar18 / uStack_108;
                }
                unaff_x26 = uVar18 - uVar20 * uStack_108;
              }
            }
            plVar19 = *(long **)(puStack_110 + unaff_x26 * 8);
            if (plVar19 != (long *)0x0) {
              do {
                while( true ) {
                  plVar19 = (long *)*plVar19;
                  if (plVar19 == (long *)0x0) goto LAB_10ac2394c;
                  uVar20 = plVar19[1];
                  if (uVar20 != uVar18) break;
                  if (plVar19[2] == uVar10) goto LAB_10ac23aac;
                }
                if ((uStack_108 & uVar14) == 0) {
                  uVar20 = uVar20 & uVar14;
                }
                else if (uStack_108 <= uVar20) {
                  uVar4 = 0;
                  if (uStack_108 != 0) {
                    uVar4 = uVar20 / uStack_108;
                  }
                  uVar20 = uVar20 - uVar4 * uStack_108;
                }
              } while (uVar20 == unaff_x26);
            }
          }
LAB_10ac2394c:
          plVar19 = (long *)0x68;
          __Znwm();
          *plVar19 = 0;
          plVar19[1] = uVar18;
          lVar11 = plVar22[3];
          lVar8 = plVar22[2];
          plVar19[3] = plVar22[3];
          plVar19[2] = lVar8;
          if (lVar11 != 0) {
            plVar16 = (long *)(lVar11 + 8);
            do {
              cVar13 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar2) {
                *plVar16 = *plVar16 + 1;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
          }
          ppuStack_c0 = (undefined **)(plVar19 + 4);
          *(undefined1 *)(plVar19 + 0xc) = 3;
          if ((char)plVar22[0xc] == '\0') {
            uVar9 = 0;
          }
          else {
            FUN_10a005398(&ppuStack_c0,plVar22 + 4);
            uVar9 = (undefined1)plVar22[0xc];
          }
          *(undefined1 *)(plVar19 + 0xc) = uVar9;
          if ((uVar15 == 0) || (fStack_f0 * (float)uVar15 < (float)(lStack_f8 + 1))) {
            uVar10 = 1;
            if (2 < uVar15) {
              uVar10 = (ulong)((uVar15 & uVar15 - 1) != 0);
            }
            uVar10 = uVar10 | uVar15 << 1;
            uVar15 = (ulong)((float)(lStack_f8 + 1) / fStack_f0);
            if (uVar10 <= uVar15) {
              uVar10 = uVar15;
            }
            FUN_10ac4c7c0(&puStack_110,uVar10);
            uVar15 = uStack_108;
            if ((uStack_108 & uStack_108 - 1) == 0) {
              unaff_x26 = uStack_108 - 1 & uVar18;
            }
            else {
              unaff_x26 = uVar18;
              if (uStack_108 <= uVar18) {
                uVar10 = 0;
                if (uStack_108 != 0) {
                  uVar10 = uVar18 / uStack_108;
                }
                unaff_x26 = uVar18 - uVar10 * uStack_108;
              }
            }
          }
          plVar16 = *(long **)(puStack_110 + unaff_x26 * 8);
          if (plVar16 == (long *)0x0) {
            *plVar19 = (long)plStack_100;
            *(long ***)(puStack_110 + unaff_x26 * 8) = &plStack_100;
            plStack_100 = plVar19;
            if (*plVar19 != 0) {
              uVar10 = *(ulong *)(*plVar19 + 8);
              if ((uVar15 & uVar15 - 1) == 0) {
                uVar10 = uVar10 & uVar15 - 1;
              }
              else if (uVar15 <= uVar10) {
                uVar18 = 0;
                if (uVar15 != 0) {
                  uVar18 = uVar10 / uVar15;
                }
                uVar10 = uVar10 - uVar18 * uVar15;
              }
              *(long **)(puStack_110 + uVar10 * 8) = plVar19;
            }
          }
          else {
            *plVar19 = *plVar16;
            *plVar16 = (long)plVar19;
          }
          lStack_f8 = lStack_f8 + 1;
LAB_10ac23aac:
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
      unaff_x22 = (undefined8 *)0x0;
      if (plStack_100 == (long *)0x0) {
        ppuVar5 = &puStack_110;
        FUN_10ac4da60();
      }
      else {
        unaff_x22 = &uStack_e0;
        unaff_x23 = &ppuStack_c0;
        plVar22 = plStack_100;
        do {
          lVar8 = plVar22[2];
          lVar11 = lVar21 + 0x18;
          FUN_10ac4d1d0();
          if (lVar11 != 0) {
            if ((char)plVar22[0xc] == '\x01') {
              pcVar12 = (code *)plVar22[4];
              ppuStack_b8 = ppuStack_118;
              ppuStack_c0 = ppuStack_120;
              if (ppuStack_118 != (undefined **)0x0) {
                ppuVar7 = ppuStack_118 + 1;
                do {
                  cVar13 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
                  if (bVar2) {
                    *ppuVar7 = *ppuVar7 + 1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
              }
              (*pcVar12)(&ppuStack_c0,plVar22 + 4);
              if (ppuStack_b8 != (undefined **)0x0) {
                ppuVar7 = ppuStack_b8 + 1;
                do {
                  puVar17 = *ppuVar7;
                  cVar13 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
                  if (bVar2) {
                    *ppuVar7 = puVar17 + -1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                  ppuVar5 = ppuStack_b8;
                } while (cVar13 != '\0');
LAB_10ac23b8c:
                if (puVar17 == (undefined *)0x0) {
                  (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
                }
              }
            }
            else if ((char)plVar22[0xc] == '\x02') {
              plVar19 = plVar22 + 4;
              FUN_10a688b40();
              ppuVar7 = ppuStack_118;
              if (plVar19 == (long *)0x0) {
                if (lVar8 != 0) {
                  lStack_b0 = plVar22[4];
                  uStack_a8 = plVar22[5];
                  if (uStack_a8 != 0) {
                    plVar19 = (long *)(uStack_a8 + 8);
                    do {
                      cVar13 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                      if (bVar2) {
                        *plVar19 = *plVar19 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  ppuStack_d0 = ppuStack_120;
                  ppuStack_c8 = ppuStack_118;
                  if (ppuStack_118 == (undefined **)0x0) {
                    ppuStack_98 = (undefined **)0x0;
                  }
                  else {
                    ppuVar5 = ppuStack_118 + 1;
                    do {
                      cVar13 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                      if (bVar2) {
                        *ppuVar5 = *ppuVar5 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                    ppuStack_98 = ppuStack_118;
                    do {
                      cVar13 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                      if (bVar2) {
                        *ppuVar5 = *ppuVar5 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  ppuStack_a0 = ppuStack_120;
                  ppuStack_b8 = &PTR_FUN_110c5e1f0;
                  ppuStack_d8 = (undefined **)0x0;
                  uStack_e0 = 0;
                  ppuStack_c0 = (undefined **)FUN_10ac4dd84;
                  FUN_10a4634ec(lVar8,&ppuStack_c0);
                  (*(code *)*ppuStack_b8)(&ppuStack_b8);
                  if (ppuVar7 != (undefined **)0x0) {
                    ppuVar5 = ppuVar7 + 1;
                    do {
                      puVar17 = *ppuVar5;
                      cVar13 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                      if (bVar2) {
                        *ppuVar5 = puVar17 + -1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                    if (puVar17 == (undefined *)0x0) {
                      (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
                    }
                  }
                  if (ppuStack_d8 != (undefined **)0x0) {
                    ppuVar7 = ppuStack_d8 + 1;
                    do {
                      puVar17 = *ppuVar7;
                      cVar13 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
                      if (bVar2) {
                        *ppuVar7 = puVar17 + -1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                      ppuVar5 = ppuStack_d8;
                    } while (cVar13 != '\0');
                    goto LAB_10ac23b8c;
                  }
                }
              }
              else {
                *plVar19 = CONCAT44((int)((ulong)*plVar19 >> 0x20) + 1,(int)*plVar19 + 1);
                FUN_10ac4db80(plVar22[4],&ppuStack_120);
                iVar3 = *(int *)((long)plVar19 + 4) + -1;
                *(int *)((long)plVar19 + 4) = iVar3;
                if (iVar3 == 0) {
                  *(undefined4 *)plVar19 = 0;
                }
              }
            }
          }
          ppuVar7 = ppuStack_118;
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
        ppuVar5 = &puStack_110;
        FUN_10ac4da60();
        if (ppuVar7 == (undefined **)0x0) goto LAB_10ac23ce8;
      }
      ppuVar6 = ppuVar7 + 1;
      do {
        puVar17 = *ppuVar6;
        cVar13 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
        if (bVar2) {
          *ppuVar6 = puVar17 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (puVar17 == (undefined *)0x0) {
        (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar5 = ppuVar7;
      }
    }
  }
LAB_10ac23ce8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b8)(unaff_x23 + 1);
  FUN_10ac4db28(unaff_x22 + 2);
  func_0x00010a004dac(&uStack_e0);
  FUN_10ac4da60(&puStack_110);
  FUN_10ac4db28(&ppuStack_120);
  __Unwind_Resume();
  plVar22 = (long *)ppuVar5[1];
  *ppuVar5 = (undefined *)0x0;
  ppuVar5[1] = (undefined *)0x0;
  if (plVar22 != (long *)0x0) {
    plVar19 = plVar22 + 1;
    do {
      lVar21 = *plVar19;
      cVar13 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar2) {
        *plVar19 = lVar21 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar22);
      return;
    }
  }
  return;
}



/* Entry: 10ac23ea8; end: 10ac23f0f;  */

bool FUN_10ac23ea8(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x25) {
    iVar2 = 0xf69da84;
    _memcmp(&UNK_10f69da84,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x21) {
    iVar2 = 0xf69fa3d;
    _memcmp(&UNK_10f69fa3d,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x624f7265646e6552 && param_2[1] == 0x766f72507463656a) &&
      (int)param_2[2] == 0x72656469)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac23f10; end: 10ac23f17;  */

bool FUN_10ac23f10(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x25) {
    iVar2 = 0xf69da84;
    _memcmp(&UNK_10f69da84,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x21) {
    iVar2 = 0xf69fa3d;
    _memcmp(&UNK_10f69fa3d,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x624f7265646e6552 && param_2[1] == 0x766f72507463656a) &&
      (int)param_2[2] == 0x72656469)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac23f18; end: 10ac242d3;  */

/* WARNING: Removing unreachable block (ram,0x00010ac2417c) */

int * FUN_10ac23f18(int *param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined **ppuVar5;
  long lVar6;
  char *pcVar7;
  int aiStack_240 [14];
  undefined4 uStack_208;
  undefined4 uStack_200;
  undefined1 uStack_1fc;
  undefined1 uStack_1f8;
  undefined4 uStack_1f4;
  undefined1 uStack_1f0;
  undefined1 uStack_1ec;
  int aiStack_1e8 [22];
  char cStack_190;
  long lStack_188;
  int *piStack_180;
  int *piStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  int iStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  int iStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int iStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int iStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int iStack_50;
  long lStack_48;
  
  piVar2 = (int *)&uStack_160;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined ***)(param_1 + 0xa2) = &PTR_FUN_110c383b8;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  *(undefined2 *)(param_1 + 0xa8) = 0x100;
  piVar1 = param_1;
  FUN_10ac63ebc(param_1,&PTR_PTR_110c57358,param_2);
  *(undefined ***)piVar1 = &PTR_FUN_110c57190;
  *(undefined ***)(piVar1 + 4) = &PTR_FUN_110c57260;
  *(undefined ***)(piVar1 + 10) = &PTR_FUN_110c57290;
  *(undefined ***)(piVar1 + 0xa2) = &PTR_FUN_110c57318;
  piVar1[0x3e] = 0;
  *(undefined1 *)(piVar1 + 0x40) = 0;
  *(undefined2 *)((long)piVar1 + 0x102) = 0;
  piVar1[0x41] = 0x3f800000;
  piVar1[0x42] = 0x3f400000;
  piVar1[0x43] = 0x3f7ae148;
  piVar1[0x46] = 0;
  piVar1[0x47] = 0;
  piVar1[0x44] = 0;
  piVar1[0x45] = 0;
  piVar1[0x4a] = 0;
  piVar1[0x4b] = 0;
  piVar1[0x48] = 0;
  piVar1[0x49] = 0;
  piVar1[0x4e] = 0;
  piVar1[0x4f] = 0;
  piVar1[0x4c] = 0;
  piVar1[0x4d] = 0;
  piVar1[0x52] = 0;
  piVar1[0x53] = 0;
  piVar1[0x50] = 0;
  piVar1[0x51] = 0;
  piVar1[0x56] = 0;
  piVar1[0x57] = 0;
  piVar1[0x54] = 0;
  piVar1[0x55] = 0;
  piVar1[0x5a] = 0;
  piVar1[0x5b] = 0;
  piVar1[0x58] = 0;
  piVar1[0x59] = 0;
  piVar1[0x5e] = 0;
  piVar1[0x5f] = 0;
  piVar1[0x5c] = 0;
  piVar1[0x5d] = 0;
  piVar1[0x62] = 0;
  piVar1[99] = 0;
  piVar1[0x60] = 0;
  piVar1[0x61] = 0;
  piVar1[0x66] = 0;
  piVar1[0x67] = 0;
  piVar1[100] = 0;
  piVar1[0x65] = 0;
  piVar1[0x6a] = 0;
  piVar1[0x6b] = 0;
  piVar1[0x68] = 0;
  piVar1[0x69] = 0;
  piVar1[0x6e] = 0;
  piVar1[0x6f] = 0;
  piVar1[0x6c] = 0;
  piVar1[0x6d] = 0;
  piVar1[0x72] = 0;
  piVar1[0x73] = 0;
  piVar1[0x70] = 0;
  piVar1[0x71] = 0;
  FUN_10ab6e728();
  if (*(char *)((long)piVar1 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_160,*(undefined8 *)piVar1,*(undefined8 *)(piVar1 + 2));
  }
  else {
    uStack_158 = *(undefined8 *)(piVar1 + 2);
    uStack_160 = *(undefined8 *)piVar1;
    uStack_150 = *(undefined8 *)(piVar1 + 4);
    piVar2 = piVar1;
  }
  uStack_148 = *(undefined8 *)(piVar1 + 6);
  iStack_130 = piVar1[0xc];
  uStack_138 = *(undefined8 *)(piVar1 + 10);
  uStack_140 = *(undefined8 *)(piVar1 + 8);
  piVar1 = (int *)&uStack_128;
  FUN_10ab6e9d8();
  if (*(char *)((long)piVar2 + 0x17) < '\0') {
    func_0x000107c3192c(piVar1,*(undefined8 *)piVar2,*(undefined8 *)(piVar2 + 2));
  }
  else {
    uStack_118 = *(undefined8 *)(piVar2 + 4);
    uStack_120 = *(undefined8 *)(piVar2 + 2);
    uStack_128 = *(undefined8 *)piVar2;
    piVar1 = piVar2;
  }
  uStack_110 = *(undefined8 *)(piVar2 + 6);
  uStack_100 = *(undefined8 *)(piVar2 + 10);
  uStack_108 = *(undefined8 *)(piVar2 + 8);
  iStack_f8 = piVar2[0xc];
  piVar2 = (int *)&uStack_f0;
  FUN_10ab6eb18();
  if (*(char *)((long)piVar1 + 0x17) < '\0') {
    func_0x000107c3192c(piVar2,*(undefined8 *)piVar1,*(undefined8 *)(piVar1 + 2));
  }
  else {
    uStack_e0 = *(undefined8 *)(piVar1 + 4);
    uStack_e8 = *(undefined8 *)(piVar1 + 2);
    uStack_f0 = *(undefined8 *)piVar1;
    piVar2 = piVar1;
  }
  uStack_d8 = *(undefined8 *)(piVar1 + 6);
  uStack_c8 = *(undefined8 *)(piVar1 + 10);
  uStack_d0 = *(undefined8 *)(piVar1 + 8);
  iStack_c0 = piVar1[0xc];
  piVar1 = (int *)&uStack_b8;
  FUN_10ab6f020();
  if (*(char *)((long)piVar2 + 0x17) < '\0') {
    func_0x000107c3192c(piVar1,*(undefined8 *)piVar2,*(undefined8 *)(piVar2 + 2));
  }
  else {
    uStack_a8 = *(undefined8 *)(piVar2 + 4);
    uStack_b0 = *(undefined8 *)(piVar2 + 2);
    uStack_b8 = *(undefined8 *)piVar2;
    piVar1 = piVar2;
  }
  uStack_a0 = *(undefined8 *)(piVar2 + 6);
  uStack_90 = *(undefined8 *)(piVar2 + 10);
  uStack_98 = *(undefined8 *)(piVar2 + 8);
  iStack_88 = piVar2[0xc];
  FUN_10ab6ec58();
  if (*(char *)((long)piVar1 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_80,*(undefined8 *)piVar1,*(undefined8 *)(piVar1 + 2));
  }
  else {
    uStack_70 = *(undefined8 *)(piVar1 + 4);
    uStack_78 = *(undefined8 *)(piVar1 + 2);
    uStack_80 = *(undefined8 *)piVar1;
  }
  uStack_68 = *(undefined8 *)(piVar1 + 6);
  uStack_58 = *(undefined8 *)(piVar1 + 10);
  uStack_60 = *(undefined8 *)(piVar1 + 8);
  iStack_50 = piVar1[0xc];
  piVar1 = param_1 + 0x74;
  FUN_10ab6f520(piVar1,&uStack_160,5);
  lVar6 = 0x118;
  do {
    lVar6 = lVar6 + -0x38;
  } while (lVar6 != 0);
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar6 = -0x118;
  pcVar7 = (char *)((long)&uStack_70 + 7);
  do {
    if (*pcVar7 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar7 + -0x17));
    }
    lVar6 = lVar6 + 0x38;
    pcVar7 = pcVar7 + -0x38;
  } while (lVar6 != 0);
  if (*(long *)(param_1 + 0x6e) != 0) {
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x6e);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    *(long *)(param_1 + 0x6a) = *(long *)(param_1 + 0x68);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x62) != 0) {
    *(long *)(param_1 + 100) = *(long *)(param_1 + 0x62);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x5c) != 0) {
    *(long *)(param_1 + 0x5e) = *(long *)(param_1 + 0x5c);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x56) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x56);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    *(long *)(param_1 + 0x52) = *(long *)(param_1 + 0x50);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x4a) != 0) {
    *(long *)(param_1 + 0x4c) = *(long *)(param_1 + 0x4a);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x44) != 0) {
    *(long *)(param_1 + 0x46) = *(long *)(param_1 + 0x44);
    __ZdlPv();
  }
  FUN_10a3a75a8(param_1 + 0x3a);
  ppuVar5 = &PTR_PTR_110c57358;
  FUN_10a7cca1c(param_1,&PTR_PTR_110c57358);
  piVar3 = piVar1;
  __Unwind_Resume();
  piVar4 = aiStack_240;
  pcStack_168 = FUN_10ac242d4;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  aiStack_240[0] = 0;
  uStack_208 = 0;
  uStack_200 = 4;
  uStack_1fc = 0;
  uStack_1f8 = 0;
  uStack_1f4 = 0xffffffff;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  piVar2 = piVar3 + 0x3a;
  piStack_180 = piVar1;
  piStack_178 = param_1;
  puStack_170 = &stack0xfffffffffffffff0;
  FUN_10ab17db4(aiStack_1e8,aiStack_240,piVar2,(long)*(short *)((long)piVar3 + 0x102));
  if (cStack_190 == '\x01') {
    piVar2 = aiStack_1e8;
    FUN_10a4c3ba4(ppuVar5);
    if (cStack_190 == '\x01') {
      FUN_10a22d0f8(aiStack_1e8);
    }
  }
  FUN_10a22d0f8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return piVar4;
  }
  ___stack_chk_fail();
  if (cStack_190 == '\x01') {
    FUN_10a22d0f8(aiStack_1e8);
  }
  FUN_10a22d0f8(aiStack_240);
  __Unwind_Resume();
  piVar1 = piVar4 + 0x3a;
  func_0x00010ab17e00(piVar1,(long)*(short *)((long)piVar4 + 0x102));
  if (piVar2 != (int *)0x0) {
    piVar3 = *(int **)(piVar2 + 10);
    piVar2 = *(int **)(piVar2 + 0xc);
    if (piVar3 == piVar2) {
LAB_10ac24420:
      if ((piVar3 != piVar2) &&
         ((piVar3 != (int *)0x0 &&
          (0 < (piVar3[0x66] + piVar3[0x67]) - (piVar3[100] + piVar3[0x65]))))) {
        return piVar3 + 2;
      }
    }
    else {
      do {
        if ((*piVar3 == (int)piVar1) && (piVar3[1] == (int)((ulong)piVar1 >> 0x20)))
        goto LAB_10ac24420;
        piVar3 = piVar3 + 0x88;
      } while (piVar3 != piVar2);
    }
  }
  return (int *)0x0;
}



/* Entry: 10ac242d4; end: 10ac243c7;  */

int * FUN_10ac242d4(long param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined1 *puVar4;
  int aiStack_e0 [14];
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  undefined1 uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined1 uStack_8c;
  undefined1 auStack_88 [88];
  char cStack_30;
  long lStack_28;
  
  piVar2 = aiStack_e0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  aiStack_e0[0] = 0;
  uStack_a8 = 0;
  uStack_a0 = 4;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0xffffffff;
  uStack_90 = 0;
  uStack_8c = 0;
  puVar4 = (undefined1 *)(param_1 + 0xe8);
  FUN_10ab17db4(auStack_88,aiStack_e0,puVar4,(long)*(short *)(param_1 + 0x102));
  if (cStack_30 == '\x01') {
    puVar4 = auStack_88;
    FUN_10a4c3ba4(param_2);
    if (cStack_30 == '\x01') {
      FUN_10a22d0f8(auStack_88);
    }
  }
  FUN_10a22d0f8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return piVar2;
  }
  ___stack_chk_fail();
  if (cStack_30 == '\x01') {
    FUN_10a22d0f8(auStack_88);
  }
  FUN_10a22d0f8(aiStack_e0);
  __Unwind_Resume();
  piVar3 = piVar2 + 0x3a;
  func_0x00010ab17e00(piVar3,(long)*(short *)((long)piVar2 + 0x102));
  if (puVar4 != (undefined1 *)0x0) {
    piVar2 = *(int **)(puVar4 + 0x28);
    piVar1 = *(int **)(puVar4 + 0x30);
    if (piVar2 == piVar1) {
LAB_10ac24420:
      if ((piVar2 != piVar1) &&
         ((piVar2 != (int *)0x0 &&
          (0 < (piVar2[0x66] + piVar2[0x67]) - (piVar2[100] + piVar2[0x65]))))) {
        return piVar2 + 2;
      }
    }
    else {
      do {
        if ((*piVar2 == (int)piVar3) && (piVar2[1] == (int)((ulong)piVar3 >> 0x20)))
        goto LAB_10ac24420;
        piVar2 = piVar2 + 0x88;
      } while (piVar2 != piVar1);
    }
  }
  return (int *)0x0;
}



/* Entry: 10ac243c8; end: 10ac24467;  */

int * FUN_10ac243c8(long param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = param_1 + 0xe8;
  func_0x00010ab17e00(lVar2,(long)*(short *)(param_1 + 0x102));
  if (param_2 != 0) {
    piVar3 = *(int **)(param_2 + 0x28);
    piVar1 = *(int **)(param_2 + 0x30);
    if (piVar3 == piVar1) {
LAB_10ac24420:
      if ((piVar3 != piVar1) &&
         ((piVar3 != (int *)0x0 &&
          (0 < (piVar3[0x66] + piVar3[0x67]) - (piVar3[100] + piVar3[0x65]))))) {
        return piVar3 + 2;
      }
    }
    else {
      do {
        if ((*piVar3 == (int)lVar2) && (piVar3[1] == (int)((ulong)lVar2 >> 0x20)))
        goto LAB_10ac24420;
        piVar3 = piVar3 + 0x88;
      } while (piVar3 != piVar1);
    }
  }
  return (int *)0x0;
}



/* Entry: 10ac24468; end: 10ac24d0b;  */

long * FUN_10ac24468(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  bool bVar13;
  code *pcVar14;
  long *plVar15;
  long lVar16;
  undefined4 *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined4 *puVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  float extraout_s2;
  float extraout_s2_00;
  undefined1 auVar32 [16];
  float extraout_s3;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined1 auStack_a9 [9];
  
  if (param_2 != 0) {
    uVar27 = NEON_scvtf(*(undefined8 *)(param_2 + 0x180),4);
    uVar45 = NEON_fmov(0x3f800000,4);
    fVar29 = (float)uVar45 / (float)uVar27;
    fVar30 = (float)((ulong)uVar45 >> 0x20) / (float)((ulong)uVar27 >> 0x20);
    uVar31 = CONCAT44(fVar30 / fVar30,fVar30 / fVar29);
    param_1[0x23] = param_1[0x22];
    param_1[0x26] = param_1[0x25];
    param_1[0x32] = param_1[0x31];
    uVar27 = uVar31;
    fVar41 = fVar29;
    func_0x0001096dc9c0(param_2 + 0x110);
    bVar5 = *(byte *)(param_1 + 0x20);
    if ((((uint)bVar5 ^ (bVar5 & 2) >> 1) & 1) == 0) {
      lVar19 = 0;
      bVar8 = true;
      do {
        bVar13 = bVar8;
        uVar22 = 5;
        if (!bVar13) {
          uVar22 = 6;
        }
        if ((ulong)(*(long *)(param_2 + 0x158) - *(long *)(param_2 + 0x150) >> 4) <= uVar22)
        goto LAB_10ac24d04;
        fVar43 = *(float *)(*(long *)(param_2 + 0x150) + uVar22 * 0x10 + 0xc);
        fVar46 = *(float *)((long)param_1 + 0x104);
        param_1[0x29] = param_1[0x28];
        iVar26 = *(int *)(param_2 + 0x188 + lVar19 * 4);
        iVar6 = *(int *)(param_2 + 400 + lVar19 * 4);
        uVar22 = (long)iVar6 - (long)iVar26;
        if ((long)uVar22 < 0) goto LAB_10ac24d04;
        lVar19 = *(long *)(param_2 + 0x10);
        param_1[0x2c] = param_1[0x2b];
        param_1[0x2f] = param_1[0x2e];
        param_1[0x35] = param_1[0x34];
        if (iVar6 == iVar26) goto LAB_10ac24d04;
        puVar21 = (undefined4 *)(lVar19 + (long)iVar26 * 8);
        FUN_10a1f2004(param_1 + 0x2b,puVar21);
        if ((uVar22 < 3) || (uVar22 < 9)) goto LAB_10ac24d04;
        plVar15 = param_1;
        FUN_10ac24d0c(*puVar21,puVar21[1]);
        FUN_10aad7230(param_1 + 0x2b,param_1[0x2c],*plVar15,plVar15[1],plVar15[1] - *plVar15 >> 3);
        FUN_10a1f2004(param_1 + 0x2b,puVar21 + 0xe);
        uVar22 = (ulong)(uint)puVar21[8];
        uVar20 = (ulong)(uint)puVar21[9];
        plVar15 = param_1;
        FUN_10ac24d0c(*puVar21,puVar21[1]);
        FUN_10aad7230(param_1 + 0x2b,param_1[0x2c],*plVar15,plVar15[1],plVar15[1] - *plVar15 >> 3);
        FUN_10a1f2004(param_1 + 0x2b,puVar21 + 6);
        fVar38 = (float)uVar20;
        fVar39 = (float)uVar22;
        lVar19 = param_1[0x2b];
        if (param_1[0x2c] != lVar19) {
          uVar23 = 0;
          do {
            uVar28 = *(undefined8 *)(lVar19 + uVar23 * 8);
            uStack_c0 = CONCAT44(fVar30 * (float)((ulong)uVar28 >> 0x20),fVar29 * (float)uVar28);
            func_0x00010a558044(param_1 + 0x28,&uStack_c0);
            fVar38 = (float)uVar20;
            fVar39 = (float)uVar22;
            uVar23 = uVar23 + 1;
            lVar19 = param_1[0x2b];
          } while (uVar23 < (ulong)(param_1[0x2c] - lVar19 >> 3));
        }
        fVar50 = fVar29;
        FUN_10ac24e70((1.0 - fVar43) * fVar46,param_1,param_1 + 0x28,param_1 + 0x2e,param_1 + 0x34);
        if ((*(byte *)(param_1 + 0x20) >> 2 & 1) == 0) {
          uVar28 = uVar31;
          FUN_10ac25448(param_1,param_1 + 0x2e);
          fVar43 = (float)uVar28;
        }
        else {
          uVar28 = uVar31;
          fVar43 = -extraout_s2;
          FUN_10ac25170(param_1,param_1[0x2e],param_1[0x2f]);
          fVar50 = (float)uVar28;
        }
        FUN_10a14da7c(param_1 + 0x25,param_1[0x26],param_1[0x37],param_1[0x38],
                      param_1[0x38] - param_1[0x37] >> 3);
        plVar15 = param_1 + 0x22;
        FUN_10a14da7c(plVar15,param_1[0x23],param_1[0x2e],param_1[0x2f],
                      param_1[0x2f] - param_1[0x2e] >> 3);
        puVar21 = (undefined4 *)param_1[0x34];
        lVar19 = param_1[0x35] - (long)puVar21;
        if (0 < lVar19 >> 2) {
          lVar25 = param_1[0x32];
          if (param_1[0x33] - lVar25 < lVar19) {
            lVar18 = lVar25 - param_1[0x31];
            uVar22 = (lVar19 >> 2) + (lVar18 >> 2);
            if (uVar22 >> 0x3e != 0) {
              FUN_10a001cf8();
              fVar29 = extraout_s2_00 - fVar43;
              fVar46 = extraout_s3 - fVar50;
              fVar39 = fVar39 - fVar43;
              fVar38 = fVar38 - fVar50;
              fVar30 = SQRT(fVar29 * fVar29 + fVar46 * fVar46);
              fVar51 = SQRT(fVar39 * fVar39 + fVar38 * fVar38);
              fVar41 = (fVar29 * fVar39 + fVar46 * fVar38) / (fVar30 * fVar51);
              _acosf();
              func_0x0001096b5544(plVar15 + 0x4b,9);
              lVar19 = 0;
              uVar22 = 0;
              do {
                lVar25 = plVar15[0x4b];
                if ((ulong)(plVar15[0x4c] - lVar25 >> 3) <= uVar22) {
                    /* WARNING: Does not return */
                  pcVar14 = (code *)SoftwareBreakpoint(1,0x10ac24e70);
                  (*pcVar14)();
                }
                fVar53 = (float)(uVar22 & 0xffffffff) / 8.0;
                fVar42 = fVar51 * fVar53 + (1.0 - fVar53) * fVar30;
                fVar44 = fVar29 * (1.0 / fVar30) * fVar42 * 1.05;
                fVar54 = fVar41 * fVar53;
                fVar52 = fVar54;
                if (-(fVar46 * fVar39) + fVar38 * fVar29 <= 0.0) {
                  fVar52 = -(fVar41 * fVar53);
                }
                ___sincosf_stret();
                fVar53 = fVar46 * (1.0 / fVar30) * fVar42 * 1.05;
                pfVar3 = (float *)(lVar25 + lVar19);
                *pfVar3 = fVar43 + -(fVar53 * fVar52) + fVar54 * fVar44;
                pfVar3[1] = fVar50 + fVar54 * fVar53 + fVar52 * fVar44;
                uVar22 = uVar22 + 1;
                lVar19 = lVar19 + 8;
              } while (uVar22 != 9);
              return plVar15 + 0x4b;
            }
            uVar23 = param_1[0x33] - param_1[0x31];
            uVar20 = (long)uVar23 >> 1;
            if (uVar20 <= uVar22) {
              uVar20 = uVar22;
            }
            if (0x7ffffffffffffffb < uVar23) {
              uVar20 = 0x3fffffffffffffff;
            }
            if (uVar20 == 0) {
              plVar15 = (long *)0x0;
            }
            else {
              plVar15 = param_1 + 0x31;
              FUN_10a001d0c();
            }
            puVar2 = (undefined4 *)((long)plVar15 + lVar18);
            lVar18 = (long)puVar2 + lVar19;
            puVar17 = puVar2;
            do {
              *puVar17 = *puVar21;
              lVar19 = lVar19 + -4;
              puVar17 = puVar17 + 1;
              puVar21 = puVar21 + 1;
            } while (lVar19 != 0);
            _memcpy(lVar18,lVar25,param_1[0x32] - lVar25);
            lVar19 = param_1[0x32];
            param_1[0x32] = lVar25;
            lVar24 = (long)puVar2 - (lVar25 - param_1[0x31]);
            _memcpy(lVar24);
            lVar16 = param_1[0x31];
            param_1[0x31] = lVar24;
            param_1[0x32] = lVar18 + (lVar19 - lVar25);
            param_1[0x33] = (long)plVar15 + uVar20 * 4;
            if (lVar16 != 0) {
              __ZdlPv();
            }
          }
          else {
            if (puVar21 != (undefined4 *)param_1[0x35]) {
              _memmove(lVar25,puVar21,lVar19);
            }
            param_1[0x32] = lVar25 + lVar19;
          }
        }
        lVar19 = 1;
        bVar8 = false;
      } while (bVar13);
    }
    else {
      uVar22 = 5;
      if ((bVar5 & 1) == 0) {
        uVar22 = 6;
      }
      if ((ulong)(*(long *)(param_2 + 0x158) - *(long *)(param_2 + 0x150) >> 4) <= uVar22) {
LAB_10ac24d04:
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10ac24d08);
        (*pcVar14)();
      }
      fVar43 = *(float *)(*(long *)(param_2 + 0x150) + uVar22 * 0x10 + 0xc);
      fVar46 = *(float *)((long)param_1 + 0x104);
      param_1[0x29] = param_1[0x28];
      param_1[0x35] = param_1[0x34];
      lVar19 = param_2 + (ulong)((bVar5 & 1) == 0) * 4;
      iVar26 = *(int *)(lVar19 + 0x188);
      iVar6 = *(int *)(lVar19 + 400);
      uVar22 = (long)iVar6 - (long)iVar26;
      if ((long)uVar22 < 0) goto LAB_10ac24d04;
      lVar19 = *(long *)(param_2 + 0x10);
      param_1[0x2c] = param_1[0x2b];
      if (iVar6 == iVar26) goto LAB_10ac24d04;
      puVar21 = (undefined4 *)(lVar19 + (long)iVar26 * 8);
      FUN_10a1f2004(param_1 + 0x2b,puVar21);
      if ((uVar22 < 3) || (uVar22 < 9)) goto LAB_10ac24d04;
      plVar15 = param_1;
      FUN_10ac24d0c(*puVar21,puVar21[1]);
      FUN_10aad7230(param_1 + 0x2b,param_1[0x2c],*plVar15,plVar15[1],plVar15[1] - *plVar15 >> 3);
      FUN_10a1f2004(param_1 + 0x2b,puVar21 + 0xe);
      plVar15 = param_1;
      FUN_10ac24d0c(*puVar21,puVar21[1]);
      FUN_10aad7230(param_1 + 0x2b,param_1[0x2c],*plVar15,plVar15[1],plVar15[1] - *plVar15 >> 3);
      FUN_10a1f2004(param_1 + 0x2b,puVar21 + 6);
      lVar19 = param_1[0x2b];
      if (param_1[0x2c] != lVar19) {
        uVar22 = 0;
        do {
          uVar28 = *(undefined8 *)(lVar19 + uVar22 * 8);
          uStack_c0 = CONCAT44(fVar30 * (float)((ulong)uVar28 >> 0x20),fVar29 * (float)uVar28);
          func_0x00010a558044(param_1 + 0x28,&uStack_c0);
          uVar22 = uVar22 + 1;
          lVar19 = param_1[0x2b];
        } while (uVar22 < (ulong)(param_1[0x2c] - lVar19 >> 3));
      }
      FUN_10ac24e70((1.0 - fVar43) * fVar46,param_1,param_1 + 0x28,param_1 + 0x22,param_1 + 0x31);
      if ((*(byte *)(param_1 + 0x20) >> 2 & 1) == 0) {
        FUN_10ac25448(uVar31,param_1,param_1 + 0x22);
      }
      else {
        FUN_10ac25170(-extraout_s2,uVar31,param_1,param_1[0x22],param_1[0x23]);
      }
      FUN_10a14dca0(param_1 + 0x25,param_1[0x37],param_1[0x38],param_1[0x38] - param_1[0x37] >> 3);
    }
    plVar15 = param_1 + 0x43;
    lVar19 = param_1[0x43];
    if (lVar19 == 0) {
      FUN_10a0d0194(&uStack_c0,auStack_a9);
      func_0x00010a19b5ac(plVar15,&uStack_c0);
      if (plStack_b8 != (long *)0x0) {
        plVar1 = plStack_b8 + 1;
        do {
          lVar19 = *plVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar19 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
        }
      }
      FUN_10a177570(param_1[0x43] + 0xf0,param_1 + 0x3a);
      lVar19 = param_1[0x43];
      *(undefined8 *)(lVar19 + 0xe8) = 0;
      *(undefined4 *)(lVar19 + 0x144) = 0xbf800000;
      *(undefined8 *)(lVar19 + 0x148) = 0xbf800000;
      lVar19 = param_1[0x43];
      *(undefined8 *)(lVar19 + 0x138) = uVar45;
      *(undefined4 *)(lVar19 + 0x140) = 0;
      if (*(char *)((long)param_1 + 0xb9) != '\x01') {
        *(undefined1 *)((long)param_1 + 0xb9) = 1;
        (**(code **)(*param_1 + 0xa0))(param_1);
      }
      if (*(char *)((long)param_1 + 0xba) != '\x01') {
        *(undefined1 *)((long)param_1 + 0xba) = 1;
        (**(code **)(*param_1 + 0xa0))(param_1);
      }
      lVar19 = *plVar15;
    }
    fVar43 = extraout_s2 * -0.5;
    fVar41 = fVar41 * -0.5;
    fVar39 = 0.5;
    uVar31 = 0;
    fVar46 = (float)uVar27 * 0.5;
    ___sincosf_stret();
    uVar27 = uVar31;
    fVar30 = fVar39;
    ___sincosf_stret();
    fVar29 = fVar30;
    ___sincosf_stret();
    lVar25 = param_1[0x25];
    lVar16 = param_1[0x26];
    lVar18 = *(long *)(lVar19 + 0x10);
    iVar26 = (int)((ulong)(lVar16 - lVar25) >> 3);
    uVar22 = (ulong)(uint)((int)param_1[0x3a] * iVar26);
    uVar20 = *(long *)(lVar19 + 0x18) - lVar18;
    if (uVar22 < uVar20 || uVar22 - uVar20 == 0) {
      if (uVar22 < uVar20) {
        *(ulong *)(lVar19 + 0x18) = lVar18 + uVar22;
      }
    }
    else {
      func_0x000107c27d58((long *)(lVar19 + 0x10),uVar22 - uVar20);
      lVar18 = *(long *)(*plVar15 + 0x10);
    }
    if (0 < iVar26) {
      lVar19 = 0;
      uVar22 = 0;
      auVar34._4_4_ = fVar30;
      auVar34._0_4_ = fVar39;
      auVar34._8_8_ = uVar31;
      auVar33 = NEON_ext(auVar34,auVar34,4,1);
      fVar50 = fVar39 * auVar33._0_4_;
      auVar49._4_4_ = fVar46;
      auVar49._0_4_ = fVar29;
      auVar49._8_8_ = uVar27;
      fVar38 = -(fVar43 * fVar41);
      uVar27 = NEON_ext(CONCAT44(fVar30 * fVar43,fVar50),CONCAT44(-(fVar39 * fVar41),fVar38),4,1);
      auVar37 = NEON_rev64(auVar49,4);
      fVar51 = fVar29 * fVar38 + auVar37._0_4_ * fVar50;
      fVar52 = auVar37._0_4_ * -(fVar39 * fVar41) + fVar29 * fVar30 * fVar43;
      fVar53 = fVar46 * (float)uVar27 + auVar37._4_4_ * fVar39 * fVar41;
      fVar54 = auVar37._4_4_ * (float)((ulong)uVar27 >> 0x20) + fVar46 * fVar30 * auVar33._12_4_;
      auVar33._4_4_ = fVar52;
      auVar33._0_4_ = fVar51;
      auVar33._8_4_ = fVar53;
      auVar33._12_4_ = fVar54;
      auVar37._4_4_ = fVar52;
      auVar37._0_4_ = fVar51;
      auVar37._8_4_ = fVar53;
      auVar37._12_4_ = fVar54;
      auVar37 = NEON_ext(auVar33,auVar37,8,1);
      fVar30 = fVar51 * -0.0;
      fVar39 = auVar37._0_4_ + fVar30;
      fVar38 = fVar51 - fVar52 * 0.0;
      auVar35._0_4_ = -fVar52 + fVar51 * 0.0;
      auVar35._4_4_ = fVar53 * -0.0 + fVar52 * 0.0;
      auVar36._4_4_ = fVar52;
      auVar36._0_4_ = fVar51;
      auVar36._8_4_ = fVar53;
      auVar36._12_4_ = fVar54;
      auVar48._4_4_ = fVar52;
      auVar48._0_4_ = fVar51;
      auVar48._8_4_ = fVar53;
      auVar48._12_4_ = fVar54;
      auVar49 = NEON_ext(auVar36,auVar48,4,1);
      fVar29 = fVar46 * fVar43 * fVar41 + fVar29 * fVar50;
      auVar35._12_4_ = fVar38;
      auVar35._8_4_ = fVar39;
      fVar41 = -fVar53 + auVar49._0_4_ * 0.0;
      fVar50 = fVar30 + auVar49._4_4_ * 0.0;
      auVar32._4_4_ = auVar35._0_4_;
      auVar32._0_4_ = fVar51;
      auVar32._8_4_ = fVar53;
      auVar32._12_4_ = fVar39;
      auVar47._4_4_ = auVar35._0_4_;
      auVar47._0_4_ = auVar35._0_4_;
      auVar47._8_4_ = auVar35._4_4_;
      auVar47._12_4_ = auVar35._4_4_;
      auVar33 = NEON_ext(auVar32,auVar35,8,1);
      auVar36 = NEON_ext(auVar35,auVar35,8,1);
      auVar12._4_4_ = fVar52;
      auVar12._0_4_ = fVar51;
      auVar12._8_4_ = fVar53;
      auVar12._12_4_ = fVar54;
      auVar48 = NEON_ext(auVar47,auVar12,0xc,1);
      uVar27 = NEON_ext(CONCAT44(fVar38,auVar37._0_4_ - fVar30),CONCAT44(fVar50,fVar41),4,1);
      fVar30 = auVar36._0_4_ * fVar29 + fVar51 * -auVar35._0_4_ + auVar33._0_4_ * auVar48._0_4_;
      fVar43 = auVar36._8_4_ * fVar29 + fVar52 * -auVar35._4_4_ + auVar33._4_4_ * auVar48._4_4_;
      fVar46 = auVar35._4_4_ * fVar29 + fVar53 * -fVar39 + auVar33._8_4_ * auVar48._8_4_;
      fVar39 = fVar50 * fVar29 + fVar54 * -fVar38 + fVar41 * auVar48._12_4_;
      fVar41 = fVar29 * (float)uVar27 + auVar49._0_4_ * -fVar41 + fVar50 * fVar51;
      fVar29 = fVar29 * (float)((ulong)uVar27 >> 0x20) + auVar49._4_4_ * -fVar50 + fVar38 * fVar52;
      puVar21 = (undefined4 *)(lVar18 + 0x24);
      do {
        if ((((ulong)(param_1[0x23] - param_1[0x22] >> 3) <= uVar22) ||
            ((ulong)(param_1[0x26] - param_1[0x25] >> 3) <= uVar22)) ||
           ((ulong)(param_1[0x32] - param_1[0x31] >> 2) <= uVar22)) goto LAB_10ac24d04;
        uVar27 = *(undefined8 *)(param_1[0x22] + lVar19);
        dVar10 = (double)(float)uVar27 * 2.0 + -1.0;
        dVar11 = (double)(float)((ulong)uVar27 >> 0x20) * -2.0 + 1.0;
        auVar9._8_4_ = SUB84(dVar11,0);
        auVar9._0_8_ = dVar10;
        auVar9._12_4_ = (int)((ulong)dVar11 >> 0x20);
        puVar2 = (undefined4 *)(param_1[0x25] + lVar19);
        fVar38 = (float)puVar2[1];
        uVar40 = *(undefined4 *)(param_1[0x31] + uVar22 * 4);
        uVar4 = *puVar2;
        *(ulong *)(puVar21 + -9) = CONCAT44((float)auVar9._8_8_,(float)dVar10);
        puVar21[-7] = 0;
        *(ulong *)(puVar21 + -4) = CONCAT44(fVar39 + fVar39 + 1.0,fVar46 + fVar46 + 1.0);
        *(ulong *)(puVar21 + -6) = CONCAT44(fVar43 + fVar43 + 0.0,fVar30 + fVar30 + 0.0);
        *(ulong *)(puVar21 + -2) = CONCAT44(fVar29 + fVar29 + 0.0,fVar41 + fVar41 + 0.0);
        *puVar21 = 0x3f800000;
        *(ulong *)(lVar18 + lVar19 * 8 + 0x28) = CONCAT44(1.0 - fVar38,uVar4);
        *(undefined8 *)(puVar21 + 3) = uVar45;
        puVar21[5] = 0x3f800000;
        puVar21[6] = uVar40;
        uVar22 = uVar22 + 1;
        lVar19 = lVar19 + 8;
        puVar21 = puVar21 + 0x10;
      } while (((ulong)(lVar16 - lVar25) >> 3 & 0x7fffffff) != uVar22);
    }
    FUN_10ac645fc(param_1,plVar15);
  }
  return param_1;
}



/* Entry: 10ac24d0c; end: 10ac24e6f;  */

long FUN_10ac24d0c(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,long param_7)

{
  float *pfVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  param_3 = param_3 - param_1;
  param_4 = param_4 - param_2;
  param_5 = param_5 - param_1;
  param_6 = param_6 - param_2;
  fVar11 = SQRT(param_3 * param_3 + param_4 * param_4);
  fVar13 = SQRT(param_5 * param_5 + param_6 * param_6);
  fVar6 = (param_3 * param_5 + param_4 * param_6) / (fVar11 * fVar13);
  _acosf();
  func_0x0001096b5544(param_7 + 600,9);
  lVar3 = 0;
  uVar4 = 0;
  do {
    lVar5 = *(long *)(param_7 + 600);
    if ((ulong)(*(long *)(param_7 + 0x260) - lVar5 >> 3) <= uVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10ac24e70);
      (*pcVar2)();
    }
    fVar7 = (float)(uVar4 & 0xffffffff) / 8.0;
    fVar10 = fVar13 * fVar7 + (1.0 - fVar7) * fVar11;
    fVar12 = param_3 * (1.0 / fVar11) * fVar10 * 1.05;
    fVar9 = fVar6 * fVar7;
    fVar8 = fVar9;
    if (-(param_4 * param_5) + param_6 * param_3 <= 0.0) {
      fVar8 = -(fVar6 * fVar7);
    }
    ___sincosf_stret();
    fVar7 = param_4 * (1.0 / fVar11) * fVar10 * 1.05;
    pfVar1 = (float *)(lVar5 + lVar3);
    *pfVar1 = param_1 + -(fVar7 * fVar8) + fVar9 * fVar12;
    pfVar1[1] = param_2 + fVar9 * fVar7 + fVar8 * fVar12;
    uVar4 = uVar4 + 1;
    lVar3 = lVar3 + 8;
  } while (uVar4 != 9);
  return param_7 + 600;
}



/* Entry: 10ac24e70; end: 10ac2516f;  */

void FUN_10ac24e70(undefined4 param_1,long param_2,long *param_3,long *param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  puVar1 = (undefined8 *)*param_3;
  uStack_54 = param_1;
  if (param_3[1] - (long)puVar1 != 0) {
    func_0x0001096b5544(param_2 + 0x228,(param_3[1] - (long)puVar1 >> 3) + -1);
    func_0x0001096b5544(param_2 + 0x240,(param_3[1] - *param_3 >> 3) + -1);
    lVar5 = *(long *)(param_2 + 0x230) - *(long *)(param_2 + 0x228);
    uVar7 = lVar5 >> 3;
    if (lVar5 != 0) {
      fVar9 = *(float *)(param_2 + 0x10c);
      fVar10 = *(float *)(param_2 + 0x108);
      uVar4 = 0;
      do {
        uVar8 = uVar4 + 1;
        if (((ulong)(param_3[1] - *param_3 >> 3) <= uVar8) ||
           ((ulong)(*(long *)(param_2 + 0x230) - *(long *)(param_2 + 0x228) >> 3) <= uVar4))
        goto LAB_10ac2516c;
        uVar14 = *(undefined8 *)(*param_3 + uVar4 * 8 + 8);
        fVar11 = (float)*puVar1;
        fVar13 = (float)uVar14 - fVar11;
        fVar12 = (float)((ulong)*puVar1 >> 0x20);
        fVar15 = (float)((ulong)uVar14 >> 0x20) - fVar12;
        *(ulong *)(*(long *)(param_2 + 0x228) + uVar4 * 8) =
             CONCAT44(fVar12 + fVar15 * fVar10,fVar11 + fVar13 * fVar10);
        if ((ulong)(*(long *)(param_2 + 0x248) - *(long *)(param_2 + 0x240) >> 3) <= uVar4)
        goto LAB_10ac2516c;
        *(ulong *)(*(long *)(param_2 + 0x240) + uVar4 * 8) =
             CONCAT44(fVar12 + fVar15 * fVar9,fVar11 + fVar13 * fVar9);
        uVar4 = uVar8;
      } while (uVar7 != uVar8);
    }
    iVar6 = (int)uVar7;
    func_0x000107458bb4(param_4,(long)(iVar6 * 9));
    func_0x0001073b504c(param_5,param_4[1] - *param_4 >> 3);
    if (*(long *)(param_2 + 0x230) != *(long *)(param_2 + 0x228)) {
      lVar5 = 0;
      uVar7 = 0;
      do {
        FUN_10a1f2004(param_4,puVar1);
        if ((ulong)(*(long *)(param_2 + 0x230) - *(long *)(param_2 + 0x228) >> 3) <= uVar7)
        goto LAB_10ac2516c;
        FUN_10a1f2004(param_4,*(long *)(param_2 + 0x228) + lVar5);
        uVar4 = uVar7 + 1;
        iVar2 = 0;
        if (iVar6 != 0) {
          iVar2 = (int)uVar4 / iVar6;
        }
        uVar8 = (ulong)(uint)((int)uVar4 - iVar2 * iVar6);
        if ((ulong)(*(long *)(param_2 + 0x230) - *(long *)(param_2 + 0x228) >> 3) <= uVar8)
        goto LAB_10ac2516c;
        FUN_10a1f2004(param_4,*(long *)(param_2 + 0x228) + uVar8 * 8);
        if ((ulong)(*(long *)(param_2 + 0x230) - *(long *)(param_2 + 0x228) >> 3) <= uVar7)
        goto LAB_10ac2516c;
        FUN_10a1f2004(param_4,*(long *)(param_2 + 0x228) + lVar5);
        if ((ulong)(*(long *)(param_2 + 0x248) - *(long *)(param_2 + 0x240) >> 3) <= uVar7)
        goto LAB_10ac2516c;
        FUN_10a1f2004(param_4,*(long *)(param_2 + 0x240) + lVar5);
        if ((ulong)(*(long *)(param_2 + 0x248) - *(long *)(param_2 + 0x240) >> 3) <= uVar8)
        goto LAB_10ac2516c;
        FUN_10a1f2004(param_4,*(long *)(param_2 + 0x240) + uVar8 * 8);
        if ((ulong)(*(long *)(param_2 + 0x230) - *(long *)(param_2 + 0x228) >> 3) <= uVar8)
        goto LAB_10ac2516c;
        FUN_10a1f2004(param_4,*(long *)(param_2 + 0x228) + uVar8 * 8);
        if ((ulong)(*(long *)(param_2 + 0x230) - *(long *)(param_2 + 0x228) >> 3) <= uVar7)
        goto LAB_10ac2516c;
        FUN_10a1f2004(param_4,*(long *)(param_2 + 0x228) + lVar5);
        if ((ulong)(*(long *)(param_2 + 0x248) - *(long *)(param_2 + 0x240) >> 3) <= uVar8)
        goto LAB_10ac2516c;
        FUN_10a1f2004(param_4,*(long *)(param_2 + 0x240) + uVar8 * 8);
        FUN_10a0ca014(param_5,&uStack_54);
        FUN_10a0ca014(param_5,&uStack_54);
        FUN_10a0ca014(param_5,&uStack_54);
        FUN_10a0ca014(param_5,&uStack_54);
        uStack_58 = 0;
        FUN_10a001c34(param_5,&uStack_58);
        uStack_58 = 0;
        FUN_10a001c34(param_5,&uStack_58);
        FUN_10a0ca014(param_5,&uStack_54);
        FUN_10a0ca014(param_5,&uStack_54);
        uStack_58 = 0;
        FUN_10a001c34(param_5,&uStack_58);
        lVar5 = lVar5 + 8;
        uVar7 = uVar4;
      } while (uVar4 < (ulong)(*(long *)(param_2 + 0x230) - *(long *)(param_2 + 0x228) >> 3));
    }
    return;
  }
LAB_10ac2516c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ac25170);
  (*pcVar3)();
}



/* Entry: 10ac25170; end: 10ac25447;  */

void FUN_10ac25170(ulong param_1,undefined8 param_2,float *param_3,float *param_4,float *param_5)

{
  ulong uVar1;
  float *pfVar2;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulong uVar17;
  float fVar18;
  ulong uVar19;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  float *pfStack_d0;
  float *pfStack_c8;
  float *pfStack_c0;
  float *pfStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  float *pfVar3;
  
  pfVar7 = param_3;
  pfVar4 = param_4;
  uVar11 = param_2;
  ___sincosf_stret();
  if (param_4 == param_5) {
    uVar17 = 0x447a0000;
    fVar10 = 1000.0;
    fVar16 = -1000.0;
    fVar18 = fVar16;
  }
  else {
    fVar16 = -1000.0;
    pfVar6 = param_4;
    uVar1 = 0x447a0000;
    uVar8 = 0x447a0000;
    fVar18 = fVar16;
    do {
      pfVar5 = pfVar6 + 2;
      fVar9 = *pfVar6;
      fVar12 = pfVar6[1];
      uVar19 = (ulong)(uint)fVar9;
      if ((float)uVar8 <= fVar9) {
        uVar19 = uVar8;
      }
      fVar10 = (float)uVar19;
      uVar17 = (ulong)(uint)fVar12;
      if ((float)uVar1 <= fVar12) {
        uVar17 = uVar1;
      }
      if (fVar9 <= fVar16) {
        fVar9 = fVar16;
      }
      fVar16 = fVar9;
      if (fVar12 <= fVar18) {
        fVar12 = fVar18;
      }
      fVar18 = fVar12;
      pfVar6 = pfVar5;
      uVar1 = uVar17;
      uVar8 = uVar19;
    } while (pfVar5 != param_5);
  }
  uVar8 = (long)param_5 - (long)param_4;
  uVar1 = *(ulong *)(param_3 + 0xa0);
  pfVar6 = *(float **)(param_3 + 0x9c);
  uStack_90 = param_1;
  if (uVar1 - (long)pfVar6 < uVar8) {
    pfVar5 = param_3 + 0x9c;
    uVar8 = (long)uVar8 >> 3;
    uStack_a0 = uVar11;
    if (pfVar6 != (float *)0x0) {
      *(float **)(param_3 + 0x9e) = pfVar6;
      pfVar7 = pfVar6;
      __ZdlPv();
      uVar1 = 0;
      pfVar5[0] = 0.0;
      pfVar5[1] = 0.0;
      param_3[0x9e] = 0.0;
      param_3[0x9f] = 0.0;
      param_3[0xa0] = 0.0;
      param_3[0xa1] = 0.0;
    }
    fVar9 = (float)param_1;
    if (uVar8 >> 0x3d != 0) {
      FUN_10a050828();
      pcStack_a8 = FUN_10ac25448;
      pfVar5 = *(float **)pfVar4;
      if (pfVar5 == *(float **)(pfVar4 + 2)) {
        fVar16 = 1.0;
        fVar10 = 0.5;
        fVar18 = -1.0;
      }
      else {
        fVar18 = 0.0;
        fVar16 = 1.0;
        fVar10 = 1.0;
        fVar12 = 0.0;
        pfVar2 = pfVar5;
        do {
          pfVar3 = pfVar2 + 2;
          fVar13 = *pfVar2;
          fVar15 = pfVar2[1];
          fVar14 = fVar13;
          if (fVar16 <= fVar13) {
            fVar14 = fVar16;
          }
          fVar16 = fVar14;
          fVar14 = fVar15;
          if (fVar10 <= fVar15) {
            fVar14 = fVar10;
          }
          fVar10 = fVar14;
          if (fVar13 <= fVar18) {
            fVar13 = fVar18;
          }
          fVar18 = fVar13;
          if (fVar15 <= fVar12) {
            fVar15 = fVar12;
          }
          fVar12 = fVar15;
          pfVar2 = pfVar3;
        } while (pfVar3 != *(float **)(pfVar4 + 2));
        fVar10 = (fVar12 + fVar10) * 0.5;
        fVar18 = fVar18 - fVar16;
      }
      *(long *)(pfVar7 + 0x70) = *(long *)(pfVar7 + 0x6e);
      pfVar4 = *(float **)(pfVar4 + 2);
      if (pfVar5 != pfVar4) {
        uVar11 = NEON_fmov(0x3f800000,4);
        uStack_e0 = uVar17;
        uStack_d8 = param_2;
        pfStack_d0 = pfVar6;
        pfStack_c8 = param_4;
        pfStack_c0 = param_5;
        pfStack_b8 = param_3;
        puStack_b0 = &stack0xfffffffffffffff0;
        do {
          pfVar6 = pfVar5 + 2;
          uStack_e8 = CONCAT44(((float)((ulong)uVar11 >> 0x20) / ((fVar9 * fVar18) / 0.5625)) *
                               ((float)((ulong)*(undefined8 *)pfVar5 >> 0x20) - fVar10) + 0.5,
                               ((float)uVar11 / fVar18) * ((float)*(undefined8 *)pfVar5 - fVar16) +
                               0.0);
          FUN_10a1f2004(pfVar7 + 0x6e,&uStack_e8);
          pfVar5 = pfVar6;
        } while (pfVar6 != pfVar4);
      }
      return;
    }
    uVar19 = (long)uVar1 >> 2;
    if ((ulong)((long)uVar1 >> 2) <= uVar8) {
      uVar19 = uVar8;
    }
    if (0x7ffffffffffffff7 < uVar1) {
      uVar19 = 0x1fffffffffffffff;
    }
    FUN_10a0507f0(pfVar5,uVar19);
    fVar12 = (float)uStack_a0;
    fVar9 = (float)uStack_90;
    pfVar7 = *(float **)(param_3 + 0x9e);
    for (; param_4 != param_5; param_4 = param_4 + 2) {
      *(long *)pfVar7 = *(long *)param_4;
      pfVar7 = pfVar7 + 2;
    }
  }
  else {
    pfVar7 = *(float **)(param_3 + 0x9e);
    if ((ulong)((long)pfVar7 - (long)pfVar6) < uVar8) {
      pfVar4 = (float *)(((long)pfVar7 - (long)pfVar6) + (long)param_4);
      if (pfVar7 != pfVar6) {
        uStack_a0 = uVar11;
        _memmove(pfVar6,param_4);
        pfVar7 = *(float **)(param_3 + 0x9e);
        param_1 = uStack_90;
        uVar11 = uStack_a0;
      }
      fVar9 = (float)param_1;
      fVar12 = (float)uVar11;
      pfVar6 = pfVar7;
      for (; pfVar4 != param_5; pfVar4 = pfVar4 + 2) {
        *(long *)pfVar6 = *(long *)pfVar4;
        pfVar7 = pfVar7 + 2;
        pfVar6 = pfVar6 + 2;
      }
    }
    else {
      if (param_4 != param_5) {
        uStack_a0 = uVar11;
        _memmove(pfVar6,param_4,uVar8);
        param_1 = uStack_90;
        uVar11 = uStack_a0;
      }
      fVar9 = (float)param_1;
      fVar12 = (float)uVar11;
      pfVar7 = (float *)((long)pfVar6 + uVar8);
    }
  }
  *(float **)(param_3 + 0x9e) = pfVar7;
  fVar16 = (float)param_2 * (fVar16 + fVar10) * 0.5;
  fVar18 = (fVar18 + (float)uVar17) * 0.5;
  pfVar4 = *(float **)(param_3 + 0x9c);
  if (pfVar4 == pfVar7) {
    fVar10 = -2000.0;
  }
  else {
    fVar13 = -1000.0;
    fVar15 = 1000.0;
    do {
      fVar10 = (float)param_2 * *pfVar4 - fVar16;
      uVar11 = NEON_rev64(CONCAT44(pfVar4[1] - fVar18,fVar10),4);
      fVar10 = fVar16 + fVar10 * fVar12 + (float)uVar11 * fVar9;
      pfVar6 = pfVar4 + 2;
      *(long *)pfVar4 =
           CONCAT44(fVar18 + ((pfVar4[1] - fVar18) * fVar12 - (float)((ulong)uVar11 >> 0x20) * fVar9
                             ),fVar10);
      fVar14 = fVar10;
      if (fVar15 <= fVar10) {
        fVar14 = fVar15;
      }
      if (fVar10 <= fVar13) {
        fVar10 = fVar13;
      }
      pfVar4 = pfVar6;
      fVar13 = fVar10;
      fVar15 = fVar14;
    } while (pfVar6 != pfVar7);
    pfVar4 = *(float **)(param_3 + 0x9c);
    pfVar7 = *(float **)(param_3 + 0x9e);
    fVar10 = fVar10 - fVar14;
  }
  *(long *)(param_3 + 0x70) = *(long *)(param_3 + 0x6e);
  if (pfVar4 != pfVar7) {
    uStack_90 = (ulong)(uint)(1.0 / fVar10);
    uStack_88 = 0;
    do {
      pfVar6 = pfVar4 + 2;
      uStack_78 = CONCAT44(((float)((ulong)*(long *)pfVar4 >> 0x20) - fVar18) * (float)uStack_90 +
                           0.5,((float)*(long *)pfVar4 - fVar16) * (float)uStack_90 + 0.5);
      FUN_10a1f2004(param_3 + 0x6e,&uStack_78);
      pfVar4 = pfVar6;
    } while (pfVar6 != pfVar7);
  }
  return;
}



/* Entry: 10ac25448; end: 10ac25553;  */

void FUN_10ac25448(float param_1,long param_2,long *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_48;
  
  pfVar2 = (float *)*param_3;
  if (pfVar2 == (float *)param_3[1]) {
    fVar6 = 1.0;
    fVar9 = 0.5;
    fVar5 = -1.0;
  }
  else {
    fVar5 = 0.0;
    fVar10 = 0.0;
    pfVar3 = pfVar2;
    fVar9 = 1.0;
    fVar7 = 1.0;
    do {
      pfVar1 = pfVar3 + 2;
      fVar11 = *pfVar3;
      fVar12 = pfVar3[1];
      fVar6 = fVar11;
      if (fVar9 <= fVar11) {
        fVar6 = fVar9;
      }
      fVar8 = fVar12;
      if (fVar7 <= fVar12) {
        fVar8 = fVar7;
      }
      if (fVar11 <= fVar5) {
        fVar11 = fVar5;
      }
      fVar5 = fVar11;
      if (fVar12 <= fVar10) {
        fVar12 = fVar10;
      }
      fVar10 = fVar12;
      pfVar3 = pfVar1;
      fVar9 = fVar6;
      fVar7 = fVar8;
    } while (pfVar1 != (float *)param_3[1]);
    fVar9 = (fVar10 + fVar8) * 0.5;
    fVar5 = fVar5 - fVar6;
  }
  *(undefined8 *)(param_2 + 0x1c0) = *(undefined8 *)(param_2 + 0x1b8);
  pfVar3 = (float *)param_3[1];
  if (pfVar2 != pfVar3) {
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      pfVar1 = pfVar2 + 2;
      uStack_48 = CONCAT44(((float)((ulong)uVar4 >> 0x20) / ((param_1 * fVar5) / 0.5625)) *
                           ((float)((ulong)*(undefined8 *)pfVar2 >> 0x20) - fVar9) + 0.5,
                           ((float)uVar4 / fVar5) * ((float)*(undefined8 *)pfVar2 - fVar6) + 0.0);
      FUN_10a1f2004(param_2 + 0x1b8,&uStack_48);
      pfVar2 = pfVar1;
    } while (pfVar1 != pfVar3);
  }
  return;
}



/* Entry: 10ac25554; end: 10ac2577f;  */

undefined *** FUN_10ac25554(long param_1,undefined ***param_2)

{
  undefined ***pppuVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined **ppuVar7;
  byte bVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined **ppuStack_d0;
  undefined ***pppuStack_c8;
  undefined ***pppuStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_98;
  undefined ***pppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_38;
  
  *(undefined1 *)(param_1 + 0x100) = 0;
  pppuVar6 = param_2;
  (*(code *)(*param_2)[7])(param_2,&PTR_DAT_110c57390,0);
  *(short *)(param_1 + 0x102) = (short)pppuVar6;
  pppuVar6 = param_2;
  (*(code *)(*param_2)[7])(param_2,&PTR_DAT_110c573b0,0);
  bVar8 = 2;
  if (1 < (int)pppuVar6 - 1U) {
    bVar8 = 0;
  }
  bVar2 = *(byte *)(param_1 + 0x100) & 0xfc;
  if (((ulong)pppuVar6 & 0xfffffffd) == 0) {
    bVar2 = bVar2 + 1;
  }
  *(byte *)(param_1 + 0x100) = bVar2 | bVar8;
  uVar11 = 0x3f800000;
  (*(code *)(*param_2)[9])(param_2,&PTR_DAT_110c573d0);
  *(undefined4 *)(param_1 + 0x104) = uVar11;
  uVar11 = 0x3f400000;
  (*(code *)(*param_2)[9])(param_2,&PTR_DAT_110c573f0);
  *(undefined4 *)(param_1 + 0x108) = uVar11;
  uVar11 = 0x3f7ae148;
  (*(code *)(*param_2)[9])(param_2,&PTR_DAT_110c57410);
  *(undefined4 *)(param_1 + 0x10c) = uVar11;
  pppuVar6 = param_2;
  (*(code *)(*param_2)[0xb])(param_2,&PTR_DAT_110c57430,0);
  bVar8 = 4;
  if ((int)pppuVar6 == 0) {
    bVar8 = 0;
  }
  *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) & 0xfb | bVar8;
  ppuVar9 = &PTR_DAT_110bb3700;
  lStack_98 = param_1 + 0xe8;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109ffe064(&pppuStack_90,&DAT_10f644824,0xd);
  pcStack_78 = FUN_10a4c3464;
  ppuStack_70 = &PTR_FUN_110be74d8;
  lStack_68 = lStack_98;
  uStack_58 = uStack_88;
  pppuStack_60 = pppuStack_90;
  uStack_50 = lStack_80;
  pppuStack_90 = (undefined ***)0x0;
  uStack_88 = 0;
  lStack_80 = 0;
  pppuVar5 = param_2;
  FUN_10a1f46a0(param_2,&PTR_DAT_110bb3700,&pcStack_78,0);
  pppuVar6 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  if (lStack_80 < 0) {
    pppuVar6 = pppuStack_90;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_70)(&ppuStack_70);
    if (lStack_80 < 0) {
      __ZdlPv(pppuStack_90);
    }
    pppuVar5 = pppuVar6;
    __Unwind_Resume();
    pcStack_a8 = FUN_10a4c3464;
    ppuStack_d0 = *pppuVar5;
    pppuStack_c8 = (undefined ***)pppuVar5[1];
    *pppuVar5 = (undefined **)0x0;
    pppuVar5[1] = (undefined **)0x0;
    pppuStack_c0 = param_2;
    pppuStack_b8 = pppuVar6;
    puStack_b0 = &stack0xfffffffffffffff0;
    if (ppuStack_d0 != (undefined **)0x0) {
      puVar10 = ppuVar9[2];
      if (*(int *)(puVar10 + 0x10) != 0) {
        FUN_10a3a75a8(puVar10);
        *(undefined4 *)(puVar10 + 0x10) = 0;
        puVar10 = ppuVar9[2];
      }
      FUN_10a4c3578(puVar10,&ppuStack_d0);
      FUN_10a4c3630(ppuVar9[2],&ppuStack_d0);
      pppuVar5 = (undefined ***)ppuVar9[2];
      FUN_10a4c36e8(pppuVar5,&ppuStack_d0);
      if ((*(int *)(ppuVar9[2] + 0x10) == 0) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
        ppuVar7 = ppuVar9 + 3;
        if (*(char *)((long)ppuVar9 + 0x2f) < '\0') {
          ppuVar7 = (undefined **)*ppuVar7;
        }
        pppuVar5 = (undefined ***)0x1;
        func_0x00010ae06f08(1,2,&UNK_10f645a9c,&UNK_10f65cca5,0x30,&UNK_10f645c14,in_x6,in_x7,
                            ppuVar7);
      }
    }
    pppuVar6 = pppuStack_c8;
    if (pppuStack_c8 != (undefined ***)0x0) {
      pppuVar1 = pppuStack_c8 + 1;
      do {
        ppuVar9 = *pppuVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
        if (bVar4) {
          *pppuVar1 = (undefined **)((long)ppuVar9 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppuVar9 == (undefined **)0x0) {
        (*(code *)(*pppuStack_c8)[2])(pppuStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar6);
        pppuVar5 = pppuVar6;
      }
    }
    return pppuVar5;
  }
  return pppuVar5;
}



/* Entry: 10ac25780; end: 10ac2579f;  */

undefined1  [16] FUN_10ac25780(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x29;
  auVar1._0_8_ = &UNK_10f663150;
  return auVar1;
}



/* Entry: 10ac257a0; end: 10ac25807;  */

bool FUN_10ac257a0(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x29) {
    iVar2 = 0xf663150;
    _memcmp(&UNK_10f663150,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac25808; end: 10ac2580f;  */

bool FUN_10ac25808(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x29) {
    iVar2 = 0xf663150;
    _memcmp(&UNK_10f663150,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac25810; end: 10ac25d53;  */

void FUN_10ac25810(ulong param_1)

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
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f663150,0x29);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c5e408;
  pppuVar2 = (undefined8 ***)&UNK_10f69b9ca;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c5e408;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bb3788;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644162,FUN_10ac4ddfc,FUN_10ac4deb8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f36f23a,FUN_10ac4e06c,FUN_10ac4e144);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f644263,FUN_10ac4e220,FUN_10ac4e2d8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f657bf7,FUN_10ac4e398,FUN_10ac4e454);
  }
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f658209;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f69b9ca;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f69b9ca;
  uStack_40 = 0;
  uVar7 = param_1;
  FUN_10ac4e514(param_1,&ppuStack_a0);
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f415c4c;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f69b9ca;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  puStack_48 = &UNK_10f69b9ca;
  uStack_40 = 0;
  FUN_10ac4e514();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f657c08,FUN_10ac4e718,FUN_10ac4e7d4);
  }
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f658219;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f69b9ca;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f69b9ca;
  uStack_40 = 0;
  uVar7 = param_1;
  FUN_10ac4e894(param_1,&ppuStack_a0);
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f645894;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f69b9ca;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  puStack_48 = &UNK_10f69b9ca;
  uStack_40 = 0;
  FUN_10ac4e894();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64420f,FUN_10ac4ea68,FUN_10ac4eb20);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f651f9b,FUN_10ac4ecb8,FUN_10ac4ed70);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_78 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    puStack_48 = *(undefined **)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f663150,0x29);
      FUN_10a05431c(param_1);
    }
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&UNK_10f63f30b;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000064;
    puStack_78 = &UNK_10f69b9ca;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    puStack_48 = (undefined *)0x0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_a0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ac25d34;
      FUN_10a054dac(param_1,&UNK_10f69c4ce,FUN_10ac4ee28,0,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ac25d34;
      FUN_10a054dac(param_1,&UNK_10f69c4e5,FUN_10ac4eed8,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10ac25d34:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac25d38);
  (*pcVar6)();
}



/* Entry: 10ac25d54; end: 10ac25e53;  */

void FUN_10ac25d54(undefined8 param_1)

{
  undefined1 uStack_99;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f69c4fb;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x98;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ac25e54(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f69c50c;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x98;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_99 = 0;
  FUN_10ac25eac(param_1,&puStack_98,&uStack_99);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f69c513;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x98;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_99 = 1;
  FUN_10ac25eac(param_1,&puStack_98,&uStack_99);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10ac25e54; end: 10ac25eab;  */

ulong FUN_10ac25e54(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10ac25eac; end: 10ac25f03;  */

ulong FUN_10ac25eac(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10ac4ef88(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10ac25f04; end: 10ac25f13;  */

undefined8 * FUN_10ac25f04(long param_1,undefined8 *param_2)

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
  plVar5 = *(long **)(param_1 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2c0) = uVar7;
  *(undefined8 *)(param_1 + 0x2b8) = uVar6;
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
  return (undefined8 *)(param_1 + 0x2b8);
}



/* Entry: 10ac25f14; end: 10ac2607f;  */

undefined8 * FUN_10ac25f14(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  param_1[0x61] = &PTR_FUN_110c383b8;
  param_1[99] = 0;
  param_1[0x62] = 0;
  *(undefined2 *)(param_1 + 100) = 0x100;
  puVar1 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110c57710,param_2);
  *puVar1 = &PTR_FUN_110c57468;
  puVar1[2] = &PTR_FUN_110c575a8;
  puVar1[5] = &PTR_FUN_110c575d8;
  puVar1[0x61] = &PTR_FUN_110c576d0;
  puVar1[0x15] = &PTR_FUN_110c57630;
  puVar1[0x51] = &PTR_FUN_110c57650;
  puVar1[0x52] = &PTR_DAT_110c57678;
  *(undefined4 *)(puVar1 + 0x53) = 0x2e;
  *(undefined1 *)((long)puVar1 + 0x29c) = 0;
  puVar1[0x54] = 0;
  *(undefined2 *)(puVar1 + 0x55) = 0;
  *(undefined4 *)((long)puVar1 + 0x2ac) = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x56) = 0;
  *(undefined8 *)((long)puVar1 + 700) = 0;
  *(undefined8 *)((long)puVar1 + 0x2b4) = 0;
  *(undefined8 *)((long)puVar1 + 0x2cc) = 0;
  *(undefined8 *)((long)puVar1 + 0x2c4) = 0;
  *(undefined8 *)((long)puVar1 + 0x2dc) = 0;
  *(undefined8 *)((long)puVar1 + 0x2d4) = 0;
  *(undefined4 *)((long)puVar1 + 0x2e4) = 0;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[0x5d] = puVar1 + 3;
  param_1[0x5e] = puVar1;
  FUN_10a5cf1fc(param_1 + 0x5d);
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  FUN_10a5ae998(param_1[0x5d],&PTR_DAT_110c5e408,param_2,param_1);
  return param_1;
}



/* Entry: 10ac26080; end: 10ac260b3;  */

undefined4 FUN_10ac26080(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x2d8);
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
    uVar2 = 0;
    if (*plVar1 != 0) {
      uVar2 = 2;
    }
  }
  return uVar2;
}



/* Entry: 10ac260b4; end: 10ac262f7;  */

long * FUN_10ac260b4(float param_1,float param_2,long *param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined4 uVar13;
  long *plStack_168;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 *puStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  long *plStack_a8;
  code *pcStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = param_4;
  (**(code **)(*param_4 + 0x38))(param_4,&PTR_DAT_110c57738,0);
  *(char *)((long)param_3 + 0x29c) = (char)plVar2;
  uStack_c0 = 0;
  (**(code **)(*param_4 + 0xe0))(param_4,&PTR_DAT_110c57758,&uStack_c0);
  param_3[0x54] = CONCAT44((int)param_2,(int)param_1);
  plVar2 = param_4;
  (**(code **)(*param_4 + 0x58))(param_4,&PTR_DAT_110c57778,0);
  *(char *)(param_3 + 0x55) = (char)plVar2;
  plVar2 = param_4;
  (**(code **)(*param_4 + 0x38))(param_4,&PTR_DAT_110be0450,1);
  *(char *)((long)param_3 + 0x2a9) = (char)plVar2;
  uVar13 = 0x3f800000;
  (**(code **)(*param_4 + 0x48))(param_4,&PTR_DAT_110c57798);
  *(undefined4 *)((long)param_3 + 0x2ac) = uVar13;
  plVar2 = param_4;
  (**(code **)(*param_4 + 0x38))(param_4,&PTR_DAT_110c02188,0);
  *(char *)(param_3 + 0x56) = (char)plVar2;
  plVar2 = param_4;
  (**(code **)(*param_4 + 0xd0))(param_4,&PTR_DAT_110c577b8,0);
  *(int *)((long)param_3 + 0x2b4) = (int)plVar2;
  pcStack_78 = FUN_10ac4effc;
  ppuStack_70 = &PTR_DAT_110c5e208;
  plStack_68 = param_3;
  FUN_10a02d928(param_4,&PTR_DAT_110c56570,&pcStack_78,0);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  uStack_b8 = 0x10ac4f02c;
  ppuStack_b0 = &PTR_DAT_110c5e220;
  plStack_a8 = param_3;
  FUN_10a02d928(param_4,&PTR_DAT_110c577d8,&uStack_b8,0);
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  plVar10 = (long *)(ulong)*(uint *)(param_3 + 0x54);
  puVar11 = (undefined8 *)(ulong)*(uint *)((long)param_3 + 0x2a4);
  uVar12 = (ulong)*(uint *)(param_3 + 0x53);
  plVar2 = param_3;
  (**(code **)(*param_3 + 0xd0))(param_3);
  plVar4 = plVar10;
  FUN_10a1da3a4(param_3,plVar10,puVar11,0,0,uVar12,plVar2,0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_3;
  }
  ___stack_chk_fail();
  (**(code **)*puVar11)(puVar11);
  plVar2 = param_3;
  __Unwind_Resume();
  plVar3 = &uStack_100;
  pcStack_c8 = FUN_10ac262f8;
  uStack_100 = &UNK_10f69c51a;
  uStack_f8 = 0x54;
  uStack_f0 = uVar12;
  puStack_e8 = puVar11;
  plStack_e0 = plVar10;
  plStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  if (*(byte *)((long)plVar2 + 0x2a9) < 3) {
    uStack_100 = &UNK_10f663150;
    uStack_f8 = 0x29;
    (**(code **)(*plVar4 + 0x30))(plVar4,&PTR_DAT_110c5d550,&uStack_100);
    (**(code **)(*plVar4 + 0x40))(plVar4,&PTR_DAT_110c57738,*(undefined1 *)((long)plVar2 + 0x29c));
    uStack_100 = (undefined *)
                 CONCAT44((float)*(int *)((long)plVar2 + 0x2a4),(float)(int)plVar2[0x54]);
    (**(code **)(*plVar4 + 0x78))(plVar4,&PTR_DAT_110c57758,&uStack_100);
    (**(code **)(*plVar4 + 0x70))(plVar4,&PTR_DAT_110c57778,(char)plVar2[0x55]);
    (**(code **)(*plVar4 + 0x40))(plVar4,&PTR_DAT_110be0450,*(undefined1 *)((long)plVar2 + 0x2a9));
    (**(code **)(*plVar4 + 0x60))(*(undefined4 *)((long)plVar2 + 0x2ac),plVar4,&PTR_DAT_110c57798);
    (**(code **)(*plVar4 + 0x40))(plVar4,&PTR_DAT_110c02188,(char)plVar2[0x56]);
    (**(code **)(*plVar4 + 0x50))(plVar4,&PTR_DAT_110c577b8,*(undefined4 *)((long)plVar2 + 0x2b4));
    FUN_10a02e188(plVar4,&PTR_DAT_110c56570,plVar2 + 0x57,&UNK_10f633e9d,0xd);
    FUN_10a02e188(plVar4,&PTR_DAT_110c577d8,plVar2 + 0x59,&UNK_10f633e9d,0xd);
    return plVar4;
  }
  FUN_10a0edfc4();
  if (plVar4 == (long *)0x0) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0xd0))();
    iVar9 = (int)plVar2;
  }
  else if ((*(byte *)((long)plVar4 + 2) >> 2 & 1) == 0) {
    iVar8 = 4;
    if (*(char *)((long)plVar4 + 1) != '\x02') {
      iVar8 = 1;
    }
    iVar9 = 2;
    if (*(char *)((long)plVar4 + 1) != '\x01') {
      iVar9 = iVar8;
    }
  }
  else {
    iVar9 = 1;
  }
  if (plVar3[0x5b] != 0) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0xe0))();
    plVar4 = (long *)(plVar3[0x5b] + 8);
    (**(code **)(*plVar4 + 0xe0))();
    if (((int)plVar2 == (int)plVar4) &&
       ((plVar2 = plVar3, (**(code **)(*plVar3 + 0xd0))(), (int)plVar2 == 0 ||
        (plVar2 = plVar3, (**(code **)(*plVar3 + 0xd0))(), (int)plVar2 == iVar9))))
    goto LAB_10ac26654;
  }
  plVar5 = (long *)0x3a8;
  __Znwm();
  FUN_10abf70a0();
  plVar2 = plVar3;
  plStack_168 = plVar5;
  (**(code **)(*plVar3 + 0xb0))(plVar3);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0xb8))(plVar3);
  plVar10 = plVar3;
  (**(code **)(*plVar3 + 0xc0))(plVar3);
  plVar5 = plVar5 + 1;
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0xe0))(plVar5);
  lVar1 = plVar3[0x53];
  plVar7 = plVar5;
  (**(code **)(*plVar5 + 0xd0))(plVar5);
  (**(code **)(*plVar5 + 200))(plVar5);
  FUN_10a1da3a4(plVar3,plVar2,plVar4,plVar10,plVar6,(int)lVar1,plVar7,plVar5);
  FUN_10a1de578(plVar3 + 0x5b,&plStack_168);
  *(char *)(plVar3 + 0x40) = (char)iVar9;
  plVar2 = plStack_168;
  plStack_168 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
LAB_10ac26654:
  (**(code **)(*(long *)plVar3[0x5b] + 0x30))((long *)plVar3[0x5b],plVar3 + 0x54,(char)plVar3[0x55])
  ;
  (**(code **)(*(long *)plVar3[0x5b] + 0x20))((long *)plVar3[0x5b],(int)plVar3[0x53]);
  (**(code **)(*(long *)plVar3[0x5b] + 0x38))((long *)plVar3[0x5b],(int)plVar3[0x3e]);
  return (long *)plVar3[0x5b];
}



/* Entry: 10ac262f8; end: 10ac2648f;  */

long * FUN_10ac262f8(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  long *plStack_a8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar2 = &uStack_40;
  uStack_40 = &UNK_10f69c51a;
  uStack_38 = 0x54;
  if (*(byte *)(param_1 + 0x2a9) < 3) {
    uStack_40 = &UNK_10f663150;
    uStack_38 = 0x29;
    (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c5d550,&uStack_40);
    (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c57738,*(undefined1 *)(param_1 + 0x29c));
    uStack_40 = (undefined *)
                CONCAT44((float)*(int *)(param_1 + 0x2a4),(float)*(int *)(param_1 + 0x2a0));
    (**(code **)(*param_2 + 0x78))(param_2,&PTR_DAT_110c57758,&uStack_40);
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c57778,*(undefined1 *)(param_1 + 0x2a8));
    (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110be0450,*(undefined1 *)(param_1 + 0x2a9));
    (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x2ac),param_2,&PTR_DAT_110c57798);
    (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c02188,*(undefined1 *)(param_1 + 0x2b0));
    (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110c577b8,*(undefined4 *)(param_1 + 0x2b4));
    FUN_10a02e188(param_2,&PTR_DAT_110c56570,param_1 + 0x2b8,&UNK_10f633e9d,0xd);
    FUN_10a02e188(param_2,&PTR_DAT_110c577d8,param_1 + 0x2c8,&UNK_10f633e9d,0xd);
    return param_2;
  }
  FUN_10a0edfc4();
  if (param_2 == (long *)0x0) {
    plVar3 = plVar2;
    (**(code **)(*plVar2 + 0xd0))();
    iVar10 = (int)plVar3;
  }
  else if ((*(byte *)((long)param_2 + 2) >> 2 & 1) == 0) {
    iVar9 = 4;
    if (*(char *)((long)param_2 + 1) != '\x02') {
      iVar9 = 1;
    }
    iVar10 = 2;
    if (*(char *)((long)param_2 + 1) != '\x01') {
      iVar10 = iVar9;
    }
  }
  else {
    iVar10 = 1;
  }
  if (plVar2[0x5b] != 0) {
    plVar3 = plVar2;
    (**(code **)(*plVar2 + 0xe0))();
    plVar4 = (long *)(plVar2[0x5b] + 8);
    (**(code **)(*plVar4 + 0xe0))();
    if (((int)plVar3 == (int)plVar4) &&
       ((plVar3 = plVar2, (**(code **)(*plVar2 + 0xd0))(), (int)plVar3 == 0 ||
        (plVar3 = plVar2, (**(code **)(*plVar2 + 0xd0))(), (int)plVar3 == iVar10))))
    goto LAB_10ac26654;
  }
  plVar5 = (long *)0x3a8;
  __Znwm();
  FUN_10abf70a0();
  plVar3 = plVar2;
  plStack_a8 = plVar5;
  (**(code **)(*plVar2 + 0xb0))(plVar2);
  plVar4 = plVar2;
  (**(code **)(*plVar2 + 0xb8))(plVar2);
  plVar6 = plVar2;
  (**(code **)(*plVar2 + 0xc0))(plVar2);
  plVar5 = plVar5 + 1;
  plVar7 = plVar5;
  (**(code **)(*plVar5 + 0xe0))(plVar5);
  lVar1 = plVar2[0x53];
  plVar8 = plVar5;
  (**(code **)(*plVar5 + 0xd0))(plVar5);
  (**(code **)(*plVar5 + 200))(plVar5);
  FUN_10a1da3a4(plVar2,plVar3,plVar4,plVar6,plVar7,(int)lVar1,plVar8,plVar5);
  FUN_10a1de578(plVar2 + 0x5b,&plStack_a8);
  *(char *)(plVar2 + 0x40) = (char)iVar10;
  plVar3 = plStack_a8;
  plStack_a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
LAB_10ac26654:
  (**(code **)(*(long *)plVar2[0x5b] + 0x30))((long *)plVar2[0x5b],plVar2 + 0x54,(char)plVar2[0x55])
  ;
  (**(code **)(*(long *)plVar2[0x5b] + 0x20))((long *)plVar2[0x5b],(int)plVar2[0x53]);
  (**(code **)(*(long *)plVar2[0x5b] + 0x38))((long *)plVar2[0x5b],(int)plVar2[0x3e]);
  return (long *)plVar2[0x5b];
}



/* Entry: 10ac26490; end: 10ac266eb;  */

long FUN_10ac26490(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  long *plStack_68;
  
  if (param_2 == 0) {
    plVar2 = param_1;
    (**(code **)(*param_1 + 0xd0))();
    iVar9 = (int)plVar2;
  }
  else if ((*(byte *)(param_2 + 2) >> 2 & 1) == 0) {
    iVar8 = 4;
    if (*(char *)(param_2 + 1) != '\x02') {
      iVar8 = 1;
    }
    iVar9 = 2;
    if (*(char *)(param_2 + 1) != '\x01') {
      iVar9 = iVar8;
    }
  }
  else {
    iVar9 = 1;
  }
  if (param_1[0x5b] != 0) {
    plVar2 = param_1;
    (**(code **)(*param_1 + 0xe0))();
    plVar3 = (long *)(param_1[0x5b] + 8);
    (**(code **)(*plVar3 + 0xe0))();
    if (((int)plVar2 == (int)plVar3) &&
       ((plVar2 = param_1, (**(code **)(*param_1 + 0xd0))(), (int)plVar2 == 0 ||
        (plVar2 = param_1, (**(code **)(*param_1 + 0xd0))(), (int)plVar2 == iVar9))))
    goto LAB_10ac26654;
  }
  plVar4 = (long *)0x3a8;
  __Znwm();
  FUN_10abf70a0();
  plVar2 = param_1;
  plStack_68 = plVar4;
  (**(code **)(*param_1 + 0xb0))(param_1);
  plVar3 = param_1;
  (**(code **)(*param_1 + 0xb8))(param_1);
  plVar5 = param_1;
  (**(code **)(*param_1 + 0xc0))(param_1);
  plVar4 = plVar4 + 1;
  plVar6 = plVar4;
  (**(code **)(*plVar4 + 0xe0))(plVar4);
  lVar1 = param_1[0x53];
  plVar7 = plVar4;
  (**(code **)(*plVar4 + 0xd0))(plVar4);
  (**(code **)(*plVar4 + 200))(plVar4);
  FUN_10a1da3a4(param_1,plVar2,plVar3,plVar5,plVar6,(int)lVar1,plVar7,plVar4);
  FUN_10a1de578(param_1 + 0x5b,&plStack_68);
  plVar2 = plStack_68;
  *(char *)(param_1 + 0x40) = (char)iVar9;
  plStack_68 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
LAB_10ac26654:
  (**(code **)(*(long *)param_1[0x5b] + 0x30))
            ((long *)param_1[0x5b],param_1 + 0x54,(char)param_1[0x55]);
  (**(code **)(*(long *)param_1[0x5b] + 0x20))((long *)param_1[0x5b],(int)param_1[0x53]);
  (**(code **)(*(long *)param_1[0x5b] + 0x38))((long *)param_1[0x5b],(int)param_1[0x3e]);
  return param_1[0x5b];
}



/* Entry: 10ac266ec; end: 10ac2676f;  */

void FUN_10ac266ec(undefined8 param_1,long *param_2,undefined8 param_3)

{
  FUN_10ac26490(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010ac26728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x50))(param_2,param_1,0,param_3);
  return;
}



/* Entry: 10ac26770; end: 10ac268db;  */

void FUN_10ac26770(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  if (*(uint *)(param_1 + 0x54) == *param_2 && *(uint *)((long)param_1 + 0x2a4) == param_2[1]) {
    return;
  }
  lVar5 = param_1[0x12];
  FUN_10a2421c8();
  plVar6 = *(long **)(lVar5 + 0x228);
  (**(code **)(*plVar6 + 0x68))();
  lVar5 = plVar6[0x11];
  uVar2 = *param_2;
  func_0x000107c2b054(auStack_58,&UNK_10f644489);
  if ((uVar2 == 0) || (uVar1 = (int)lVar5 + 1, uVar1 <= uVar2)) {
    FUN_10a109200(auStack_58);
  }
  else {
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
    uVar2 = param_2[1];
    func_0x000107c2b054(auStack_58,&UNK_10f6444a5);
    if ((uVar2 != 0) && (uVar2 < uVar1)) {
      if (cStack_41 < '\0') {
        __ZdlPv(auStack_58[0]);
      }
      param_1[0x54] = *(long *)param_2;
      uVar2 = *param_2;
      uVar1 = param_2[1];
      lVar5 = param_1[0x3f];
      lVar3 = param_1[0x53];
      plVar6 = param_1;
      (**(code **)(*param_1 + 0xd0))(param_1);
      FUN_10a1da3a4(param_1,uVar2,uVar1,0,(int)lVar5,(int)lVar3,plVar6,0);
      plVar6 = (long *)param_1[0x5b];
      if (plVar6 == (long *)0x0) {
        return;
      }
      (**(code **)(*plVar6 + 0x30))(plVar6,param_1 + 0x54,(char)param_1[0x55]);
      return;
    }
    FUN_10a109200(auStack_58);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac268bc);
  (*pcVar4)();
}



/* Entry: 10ac268dc; end: 10ac268e7;  */

void FUN_10ac268dc(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  long lVar2;
  undefined1 *puStack_40;
  long lStack_38;
  char cStack_29;
  undefined1 uStack_21;
  
  func_0x00010988be94(&puStack_40,
                      *(ulong *)(*(long *)(*(long *)(param_2 + 0x28) + -8) + 8) & 0x7fffffffffffffff
                     );
  ppuVar1 = (undefined1 **)puStack_40;
  if (-1 < (long)cStack_29) {
    ppuVar1 = &puStack_40;
  }
  if (-1 < cStack_29) {
    lStack_38 = (long)cStack_29;
  }
  do {
    lVar2 = lStack_38;
    if (lVar2 == 0) {
      lVar2 = 0;
      break;
    }
    lStack_38 = lVar2 + -1;
  } while (*(char *)((long)ppuVar1 + lVar2 + -1) != ':');
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
            (param_1,&puStack_40,lVar2,0xffffffffffffffff,&uStack_21);
  if (cStack_29 < '\0') {
    __ZdlPv(puStack_40);
  }
  return;
}



/* Entry: 10ac268e8; end: 10ac26907;  */

void FUN_10ac268e8(long *param_1)

{
  FUN_10ac26490(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010ac26904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 10ac26908; end: 10ac26993;  */

undefined1  [16] FUN_10ac26908(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1d;
  auVar1._0_8_ = &UNK_10f662828;
  return auVar1;
}



/* Entry: 10ac26994; end: 10ac26aa3;  */

void FUN_10ac26994(undefined8 param_1)

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
  FUN_10ac26aa4(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f69c56f;
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
  FUN_10ac4f158();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f69c583;
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
  func_0x00010ac4f4cc(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f69c593;
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
  FUN_10ac4f74c(param_1,&puStack_88);
  FUN_10ac4f968(param_1);
  return;
}



/* Entry: 10ac26aa4; end: 10ac26b7b;  */

/* WARNING: Removing unreachable block (ram,0x00010ac26b3c) */

undefined1  [16] FUN_10ac26aa4(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f69e10e,0x16);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ac4f05c(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ac26b7c; end: 10ac26f27;  */

/* WARNING: Removing unreachable block (ram,0x00010ac26c80) */
/* WARNING: Removing unreachable block (ram,0x00010ac26f10) */

undefined8 * FUN_10ac26b7c(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_378 [16];
  undefined1 auStack_368 [272];
  undefined1 auStack_258 [8];
  undefined **appuStack_250 [2];
  undefined1 auStack_240 [272];
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *apuStack_50 [3];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000109887da8(apuStack_50,&UNK_10f662828,0x1d);
  param_1[0x36] = &PTR_DAT_110c5b438;
  ppuVar5 = (undefined **)&UNK_10f69b9ca;
  if (apuStack_50 != (undefined **)0x0) {
    ppuVar5 = apuStack_50;
  }
  func_0x000107c2c4dc(param_1 + 0x37,ppuVar5);
  ppuStack_b8 = (undefined **)0x0;
  uStack_b0 = 0;
  uStack_a0 = 0xffffffffffffffff;
  uStack_a8 = 0x100000064;
  uStack_90 = 0;
  puStack_98 = (undefined *)0x0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_60 = 0;
  ppuStack_c0 = apuStack_50;
  func_0x00010a052690(param_1 + 0x2d,&ppuStack_c0);
  puVar4 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar4 & 1) == 0) {
    ppuStack_d0 = &PTR_DAT_110c5b438;
    uStack_c8 = 0;
    ppuStack_c0 = &PTR_DAT_110bb3788;
    ppuStack_b8 = (undefined **)0x0;
    uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
    func_0x0001098949cc(param_1,apuStack_50,&ppuStack_d0,&ppuStack_c0);
  }
  puVar4 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if (((ulong)puVar4 & 1) == 0) {
    if ((*(byte *)(param_1 + 0xf) & 1) == 0) goto LAB_10ac26efc;
    FUN_10a054dac(param_1,&UNK_10f6535a3,FUN_10ac4fa24,1,param_1[8]);
  }
  puVar4 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if (((ulong)puVar4 & 1) == 0) {
    if ((*(byte *)(param_1 + 0xf) & 1) == 0) goto LAB_10ac26efc;
    FUN_10a054dac(param_1,&UNK_10f69c5ac,FUN_10ac4fb4c,1,param_1[8]);
  }
  puVar4 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if (((ulong)puVar4 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f69c5c9,FUN_10ac4fc14,0);
  }
  ppuVar5 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if ((*ppuVar5 == (undefined *)0x0) || (FUN_10a3c8488(), 0x110 < *(int *)(ppuVar5 + 3))) {
    apuStack_50[0] = &DAT_10f63959a;
    ppuStack_b8 = apuStack_50;
    ppuStack_c0 = (undefined **)&UNK_10f69c676;
    uStack_b0 = 1;
    uStack_a0 = 0xffffffffffffffff;
    uStack_a8 = 0x10000000064;
    puStack_98 = &UNK_10f69c689;
    uStack_90 = 0x22;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_88 = 0;
    uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010ac4ffe0(param_1,&ppuStack_c0);
  }
  else {
    apuStack_50[0] = &DAT_10f63959a;
    ppuStack_b8 = apuStack_50;
    ppuStack_c0 = (undefined **)&UNK_10f644efa;
    uStack_b0 = 1;
    uStack_a0 = 0xffffffffffffffff;
    uStack_a8 = 0x10000000064;
    uStack_90 = 0;
    puStack_98 = (undefined *)0x0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_78 = 0;
    uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010ac4ffe0(param_1,&ppuStack_c0);
  }
  param_1[0x36] = PTR___ZTIDn_1103469e8;
  lVar6 = param_1[0x2e];
  if (param_1[0x2d] != lVar6) {
    ppuStack_b8 = *(undefined ***)(lVar6 + -0x60);
    ppuStack_c0 = *(undefined ***)(lVar6 + -0x68);
    puStack_98 = *(undefined **)(lVar6 + -0x40);
    uVar10 = *(ulong *)(lVar6 + -0x48);
    uVar11 = *(ulong *)(lVar6 + -0x50);
    uStack_b0 = *(undefined8 *)(lVar6 + -0x58);
    uStack_88 = *(undefined8 *)(lVar6 + -0x30);
    uStack_90 = *(undefined8 *)(lVar6 + -0x38);
    uStack_78 = *(undefined8 *)(lVar6 + -0x20);
    uStack_80 = *(undefined8 *)(lVar6 + -0x28);
    uStack_60 = *(undefined8 *)(lVar6 + -8);
    uStack_68 = *(undefined8 *)(lVar6 + -0x10);
    uStack_70 = *(ulong *)(lVar6 + -0x18);
    param_1[0x2e] = lVar6 + -0x68;
    uStack_a8._4_4_ = (undefined4)(uVar11 >> 0x20);
    uVar1 = uStack_a8._4_4_;
    uStack_a0._4_4_ = (undefined4)(uVar10 >> 0x20);
    uVar2 = uStack_a0._4_4_;
    puVar4 = param_1;
    uStack_a8 = uVar11;
    uStack_a0 = uVar10;
    FUN_10a0051e8(param_1,uVar11 & 0xffffffff,uVar1,uStack_70 & 0xffffffff,uVar10 & 0xffffffff,uVar2
                 );
    if (((ulong)puVar4 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_c0,param_1 + 0x37,&UNK_10f662828,0x1d);
      FUN_10a05431c();
      puVar4 = param_1;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
      ___stack_chk_fail();
      __Unwind_Resume();
      *puVar4 = &PTR_FUN_110c57810;
      puVar4[2] = &PTR_FUN_110c57958;
      puVar4[5] = &PTR_DAT_110c57988;
      puVar4[0x66] = &PTR_DAT_110c57aa8;
      puVar8 = puVar4 + 0x15;
      *puVar8 = &PTR_DAT_110c579e0;
      puVar4[0x51] = &PTR_DAT_110c57a08;
      puVar4[0x56] = &PTR_DAT_110c57a50;
      func_0x00010ac4fd68(puVar4 + 99);
      FUN_10ac27b74(puVar4 + 0x62,0);
      func_0x00010a0523dc(puVar4 + 0x5b);
      FUN_10a00dc2c(puVar4 + 0x56);
      puVar4[0x51] = &PTR_DAT_110c5b388;
      puVar4[0x66] = &PTR_FUN_110c5b400;
      func_0x00010a004e5c(puVar4 + 0x54);
      func_0x00010a004e04(puVar4 + 0x52);
      *puVar4 = &PTR_FUN_110c5b0b8;
      puVar4[2] = &PTR_FUN_110bb3968;
      puVar4[5] = &PTR_DAT_110bb3998;
      puVar4[0x66] = &PTR_DAT_110c5b218;
      *puVar8 = &PTR_DAT_110bb39f0;
      FUN_10a042c0c(puVar4 + 0x4d);
      func_0x00010a042c64(puVar4 + 0x48);
      func_0x00010a0523dc(puVar4 + 0x45);
      if (*(char *)(puVar4 + 0x3c) == '\x01') {
        func_0x00010a042d30(puVar4 + 0x3a);
      }
      puVar4[0x15] = &PTR_FUN_110b9f768;
      FUN_10a1c00f4(puVar8);
      *puVar4 = &PTR_DAT_110c5b268;
      puVar4[2] = &PTR_FUN_110b9f848;
      puVar4[5] = &PTR_DAT_110b9f878;
      puVar4[0x66] = &PTR_DAT_110c5b338;
      FUN_10a042dcc(puVar4 + 0x13);
      *puVar4 = &PTR_DAT_110c60a00;
      puVar4[2] = &PTR_DAT_110c60a88;
      puVar4[5] = &PTR_DAT_110c60ab8;
      ppuVar5 = (undefined **)(puVar4 + 0xb);
      puVar9 = (undefined8 *)puVar4[0xc];
      for (puVar8 = (undefined8 *)*ppuVar5; puVar8 != puVar9; puVar8 = puVar8 + 1) {
        FUN_10a009538(auStack_378,&UNK_10f69ea0f);
        __ZNSt13runtime_errorC2ERKS_(appuStack_250,auStack_378);
        _memcpy(auStack_240,auStack_368,0x110);
        appuStack_250[0] = &PTR_FUN_110b99e70;
        FUN_10a05bde0(auStack_258,appuStack_250);
        __ZNSt13runtime_errorD2Ev(appuStack_250);
        func_0x000109d1b350(*puVar8,auStack_258);
        __ZNSt13exception_ptrD1Ev(auStack_258);
        __ZNSt13runtime_errorD2Ev(auStack_378);
      }
      FUN_10ac634b8(ppuVar5);
      plVar7 = puVar4 + 10;
      if ((*plVar7 != 0) && (*(undefined ***)(*(long *)(*plVar7 + 8) + 0x20) == &PTR_DAT_110b9f988))
      {
        FUN_10a5ae930();
      }
      FUN_10a3a743c(puVar4 + 3);
      if ((puVar4[0x12] != 0) && (lVar6 = *(long *)(puVar4[0x12] + 0x828), lVar6 != 0)) {
        FUN_10a1dfb2c(lVar6,puVar4);
      }
      if (*(char *)((long)puVar4 + 0x8f) < '\0') {
        __ZdlPv(puVar4[0xf]);
      }
      appuStack_250[0] = ppuVar5;
      FUN_10ac78cf4(appuStack_250);
      lVar6 = *plVar7;
      *plVar7 = 0;
      if (lVar6 != 0) {
        FUN_10ac7d690(plVar7);
      }
      if (puVar4[9] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      puVar4[5] = &PTR_DAT_110b17898;
      func_0x00010a004dac(puVar4 + 6);
      puVar4[2] = &PTR____cxa_pure_virtual_110bcfb60;
      func_0x00010a004e5c(puVar4 + 3);
      return puVar4;
    }
    return puVar4;
  }
LAB_10ac26efc:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ac26f00);
  (*pcVar3)();
}



/* Entry: 10ac26f28; end: 10ac2706f;  */

undefined8 * FUN_10ac26f28(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c57810;
  param_1[2] = &PTR_FUN_110c57958;
  param_1[5] = &PTR_DAT_110c57988;
  param_1[0x66] = &PTR_DAT_110c57aa8;
  puVar4 = param_1 + 0x15;
  *puVar4 = &PTR_DAT_110c579e0;
  param_1[0x51] = &PTR_DAT_110c57a08;
  param_1[0x56] = &PTR_DAT_110c57a50;
  func_0x00010ac4fd68(param_1 + 99);
  FUN_10ac27b74(param_1 + 0x62,0);
  func_0x00010a0523dc(param_1 + 0x5b);
  FUN_10a00dc2c(param_1 + 0x56);
  param_1[0x51] = &PTR_DAT_110c5b388;
  param_1[0x66] = &PTR_FUN_110c5b400;
  func_0x00010a004e5c(param_1 + 0x54);
  func_0x00010a004e04(param_1 + 0x52);
  *param_1 = &PTR_FUN_110c5b0b8;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x66] = &PTR_DAT_110c5b218;
  *puVar4 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar4);
  *param_1 = &PTR_DAT_110c5b268;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x66] = &PTR_DAT_110c5b338;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10ac27070; end: 10ac270ab;  */

undefined8 * FUN_10ac27070(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c57810;
  param_1[2] = &PTR_FUN_110c57958;
  param_1[5] = &PTR_DAT_110c57988;
  param_1[0x66] = &PTR_DAT_110c57aa8;
  puVar4 = param_1 + 0x15;
  *puVar4 = &PTR_DAT_110c579e0;
  param_1[0x51] = &PTR_DAT_110c57a08;
  param_1[0x56] = &PTR_DAT_110c57a50;
  func_0x00010ac4fd68(param_1 + 99);
  FUN_10ac27b74(param_1 + 0x62,0);
  func_0x00010a0523dc(param_1 + 0x5b);
  FUN_10a00dc2c(param_1 + 0x56);
  param_1[0x51] = &PTR_DAT_110c5b388;
  param_1[0x66] = &PTR_FUN_110c5b400;
  func_0x00010a004e5c(param_1 + 0x54);
  func_0x00010a004e04(param_1 + 0x52);
  *param_1 = &PTR_FUN_110c5b0b8;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x66] = &PTR_DAT_110c5b218;
  *puVar4 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar4);
  *param_1 = &PTR_DAT_110c5b268;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x66] = &PTR_DAT_110c5b338;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10ac270ac; end: 10ac27137;  */

void FUN_10ac270ac(void)

{
  FUN_10ac26f28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac27138; end: 10ac27167;  */

void FUN_10ac27138(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10ac26f28((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac27168; end: 10ac2735b;  */

undefined8 * FUN_10ac27168(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lStack_40;
  undefined2 uStack_34;
  undefined1 uStack_31;
  
  param_1[0x66] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x69) = 0x100;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  puVar3 = param_1;
  lStack_40 = param_2;
  FUN_10a1da04c(param_1,&PTR_PTR_110c57ae8,param_2);
  puVar3 = puVar3 + 0x51;
  FUN_10a0040d0(puVar3,&PTR_PTR_110c57b08);
  uStack_34 = 1;
  FUN_10a00db68(param_1 + 0x56,param_2,&uStack_34);
  *param_1 = &PTR_FUN_110c57810;
  param_1[2] = &PTR_FUN_110c57958;
  param_1[5] = &PTR_DAT_110c57988;
  param_1[0x66] = &PTR_DAT_110c57aa8;
  param_1[0x15] = &PTR_DAT_110c579e0;
  param_1[0x51] = &PTR_DAT_110c57a08;
  param_1[0x56] = &PTR_DAT_110c57a50;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0x3f800000;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0x3f800000;
  param_1[0x60] = 0;
  param_1[0x5f] = 0x3f800000;
  param_1[0x62] = 0;
  FUN_10ac4fdc0(param_1 + 99,&uStack_31,&lStack_40);
  lVar2 = lStack_40;
  *(undefined4 *)(param_1 + 0x65) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  plVar1 = (long *)((long)puVar3 + *(long *)(param_1[0x51] + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = lStack_40;
    if (lStack_40 != 0) {
      plVar1[1] = *(long *)(*(long *)(lStack_40 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  FUN_10a5ae998(param_1[0x54],&PTR_DAT_110b99f08,lVar2,puVar3);
  *(bool *)(param_1[99] + 0x50) = 0xa3 < *(int *)(*(long *)(lStack_40 + 0xa20) + 0x18);
  return param_1;
}



/* Entry: 10ac2735c; end: 10ac27467;  */

long FUN_10ac2735c(long param_1,float *param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  fVar11 = *param_2;
  if (0.0 <= fVar11) {
    bVar2 = false;
    bVar3 = false;
    if (param_2[1] < 1.0) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar11)) {
        bVar2 = fVar11 < 1.0;
        bVar3 = false;
      }
    }
    if ((bVar2 != bVar3) && (0.0 <= param_2[1])) {
      lVar5 = *(long *)(param_1 + 0x90);
      FUN_10ac27468();
      if ((*(long *)(lVar5 + 0x10) != 0) &&
         (uVar10 = (ulong)*(uint *)(lVar5 + 4), 2 < (int)*(uint *)(lVar5 + 4))) {
        do {
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      return lVar5;
    }
  }
  lVar6 = 0x120;
  ___cxa_allocate_exception();
  FUN_10a2e1840();
  lVar5 = lVar6;
  ___cxa_throw(lVar6,&PTR_DAT_110b99e48,FUN_10a002a90);
  ___cxa_free_exception(lVar6);
  lVar7 = lVar5;
  __Unwind_Resume();
  ppuVar8 = &puStack_50;
  pcStack_28 = FUN_10ac27468;
  lVar9 = *(long *)(*(long *)(lVar7 + 0x8c0) + 0x18);
  lStack_40 = lVar5;
  lStack_38 = lVar6;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((lVar9 == 0) || (lVar5 = *(long *)(lVar9 + 0x70), lVar5 == 0)) {
    if ((bRam0000000113835cd8 & 1) == 0) {
      iVar4 = 0x13835cd8;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        FUN_10ac41118(0x113835a40);
        ___cxa_guard_release(0x113835cd8);
        return 0x113835a40;
      }
    }
    lVar5 = 0x113835a40;
  }
  else {
    uVar1 = *(uint *)(*(long *)(*(long *)(lVar7 + 0x8c0) + 0x20) + 0xa0);
    puStack_50 = &UNK_10f69daec;
    uStack_48 = 0x20;
    if (1 < uVar1) {
      FUN_10a0edfc4();
      lVar5 = *(long *)((long)ppuVar8 + 0x90);
      FUN_10ac27468();
      if ((*(long *)(lVar5 + 0x10) != 0) &&
         (uVar10 = (ulong)*(uint *)(lVar5 + 4), 2 < (int)*(uint *)(lVar5 + 4))) {
        do {
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      return lVar5;
    }
    lVar5 = lVar5 + (ulong)uVar1 * 0x298;
  }
  return lVar5;
}



/* Entry: 10ac27468; end: 10ac2751b;  */

long FUN_10ac27468(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined **ppuVar3;
  long lVar4;
  ulong uVar5;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  ppuVar3 = &puStack_30;
  lVar4 = *(long *)(*(long *)(param_1 + 0x8c0) + 0x18);
  if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x70), lVar4 == 0)) {
    if ((bRam0000000113835cd8 & 1) == 0) {
      iVar2 = 0x13835cd8;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        FUN_10ac41118(0x113835a40);
        ___cxa_guard_release(0x113835cd8);
        return 0x113835a40;
      }
    }
    lVar4 = 0x113835a40;
  }
  else {
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x8c0) + 0x20) + 0xa0);
    puStack_30 = &UNK_10f69daec;
    uStack_28 = 0x20;
    if (1 < uVar1) {
      FUN_10a0edfc4();
      lVar4 = *(long *)((long)ppuVar3 + 0x90);
      FUN_10ac27468();
      if ((*(long *)(lVar4 + 0x10) != 0) &&
         (uVar5 = (ulong)*(uint *)(lVar4 + 4), 2 < (int)*(uint *)(lVar4 + 4))) {
        do {
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      return lVar4;
    }
    lVar4 = lVar4 + (ulong)uVar1 * 0x298;
  }
  return lVar4;
}



/* Entry: 10ac2751c; end: 10ac2757b;  */

undefined4 FUN_10ac2751c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  
  lVar1 = *(long *)(param_1 + 0x90);
  FUN_10ac27468();
  if (*(long *)(lVar1 + 0x10) != 0) {
    uVar2 = (ulong)*(uint *)(lVar1 + 4);
    if ((int)*(uint *)(lVar1 + 4) < 3) {
      lVar3 = (long)*(int *)(lVar1 + 0xc) * (long)*(int *)(lVar1 + 8);
    }
    else {
      lVar3 = 1;
      piVar4 = *(int **)(lVar1 + 0x40);
      do {
        lVar3 = lVar3 * *piVar4;
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 1;
      } while (uVar2 != 0);
    }
    if (lVar3 != 0) {
      return *(undefined4 *)(lVar1 + 0x1f8);
    }
  }
  return 0x3f800000;
}



/* Entry: 10ac2757c; end: 10ac2781f;  */

void FUN_10ac2757c(long *param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_40;
  long *plStack_38;
  
  *(undefined4 *)(param_1 + 0x65) = *(undefined4 *)(param_2 + 0x198);
  lVar5 = param_1[0x12];
  lVar10 = (long)*(int *)(*(long *)(*(long *)(lVar5 + 0x8c0) + 0x20) + 0xa0);
  FUN_10a2421c8();
  plVar6 = *(long **)(lVar5 + 0x228);
  (**(code **)(*plVar6 + 0x68))();
  lVar5 = *(long *)(param_2 + 0x70);
  if (lVar5 != 0) {
    bVar1 = *(byte *)((long)plVar6 + 0x83);
    FUN_10ac27820(lVar5,lVar10);
    if (((int)lVar5 != 0) && ((bVar1 & 1) != 0)) {
      *(undefined4 *)((long)param_1 + 0x74) = 2;
      if (*(char *)(param_1[0x12] + 0x1150) == '\x01') {
        if (*(char *)(param_1[0x12] + 0xff8) == '\x02') {
          FUN_10ace7374(&lStack_40);
          plVar6 = plStack_38;
        }
        else {
          FUN_10ace6e20(&lStack_40,*(undefined8 *)(param_2 + 0x70));
          plVar6 = plStack_38;
        }
      }
      else {
        FUN_10ace6d48(&lStack_40,*(undefined8 *)(param_2 + 0x70),lVar10);
        plVar6 = plStack_38;
      }
      if (*(long *)(lStack_40 + 8) == 0) {
        lVar5 = *(long *)(lStack_40 + 0x10) + 0x10;
      }
      else {
        lVar5 = *(long *)(lStack_40 + 8) + 8;
      }
      FUN_10a026ab4(param_1 + 0x5b,lVar5);
      if (*(long *)(lStack_40 + 8) == 0) {
        plVar7 = (long *)(*(long *)(lStack_40 + 0x10) + 0x30);
      }
      else {
        plVar7 = (long *)(*(long *)(lStack_40 + 8) + 0x38);
      }
      lVar10 = plVar7[1];
      lVar5 = *plVar7;
      lVar12 = plVar7[3];
      lVar11 = plVar7[2];
      *(int *)(param_1 + 0x61) = (int)plVar7[4];
      param_1[0x5e] = lVar10;
      param_1[0x5d] = lVar5;
      param_1[0x60] = lVar12;
      param_1[0x5f] = lVar11;
      if (plVar6 != (long *)0x0) {
        plVar7 = plVar6 + 1;
        do {
          lVar5 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      goto LAB_10ac27724;
    }
  }
  *(undefined4 *)((long)param_1 + 0x74) = 1;
  if (param_1[0x5b] == 0) {
    if ((bRam00000001137ec6c0 & 1) == 0) {
      iVar4 = 0x137ec6c0;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        uRam00000001137ec708 = 0x100000001;
        uRam00000001137ec700 = 0x100000000;
        uRam00000001137ec718 = 0x100000000;
        uRam00000001137ec710 = 0x23;
        uRam00000001137ec720 = 0;
        uRam00000001137ec728 = 0;
        puRam00000001137ec730 = &UNK_10e508388;
        ___cxa_guard_release(0x1137ec6c0);
      }
    }
    lVar5 = param_1[0x12];
    FUN_10a2421c8();
    plVar6 = *(long **)(lVar5 + 0x228);
    (**(code **)(*plVar6 + 0x20))(plVar6,0x1137ec700);
    FUN_10a099d88(param_1 + 0x5b,plVar6);
  }
LAB_10ac27724:
  (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
            ((long)param_1 + *(long *)(*param_1 + -0x18));
  plVar6 = (long *)param_1[0x5b];
  (**(code **)(*plVar6 + 0x28))();
  plVar7 = (long *)param_1[0x5b];
  (**(code **)(*plVar7 + 0x30))();
  plVar8 = (long *)param_1[0x5b];
  (**(code **)(*plVar8 + 0x50))();
  plVar9 = (long *)param_1[0x5b];
  (**(code **)(*plVar9 + 0x70))();
  FUN_10a1da3a4(param_1,plVar6,plVar7,0,0,plVar8,plVar9,0);
  return;
}



/* Entry: 10ac27820; end: 10ac278cf;  */

bool FUN_10ac27820(long param_1,ulong param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  
  if (param_2 < 2) {
    param_1 = param_1 + param_2 * 0x298;
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar2 = (ulong)*(uint *)(param_1 + 4);
      if ((int)*(uint *)(param_1 + 4) < 3) {
        lVar3 = (long)*(int *)(param_1 + 0xc) * (long)*(int *)(param_1 + 8);
      }
      else {
        lVar3 = 1;
        piVar4 = *(int **)(param_1 + 0x40);
        do {
          lVar3 = lVar3 * *piVar4;
          uVar2 = uVar2 - 1;
          piVar4 = piVar4 + 1;
        } while (uVar2 != 0);
      }
      return lVar3 != 0;
    }
  }
  else {
    func_0x00010ae02f70(0,param_2);
    ppuVar1 = &PTR_PTR_113306ee0;
    FUN_10ae079a0();
    func_0x00010ae02f80();
    FUN_10ae07cd4(ppuVar1,&PTR_PTR_113306ee0);
  }
  return false;
}



/* Entry: 10ac278d0; end: 10ac278d7;  */

void FUN_10ac278d0(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lStack_40;
  long *plStack_38;
  
  plVar10 = (long *)(param_1 + -0x288);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0x198);
  lVar5 = *(long *)(param_1 + -0x1f8);
  lVar12 = (long)*(int *)(*(long *)(*(long *)(lVar5 + 0x8c0) + 0x20) + 0xa0);
  FUN_10a2421c8();
  plVar6 = *(long **)(lVar5 + 0x228);
  (**(code **)(*plVar6 + 0x68))();
  lVar5 = *(long *)(param_2 + 0x70);
  if (lVar5 != 0) {
    bVar1 = *(byte *)((long)plVar6 + 0x83);
    FUN_10ac27820(lVar5,lVar12);
    if (((int)lVar5 != 0) && ((bVar1 & 1) != 0)) {
      *(undefined4 *)(param_1 + -0x214) = 2;
      if (*(char *)(*(long *)(param_1 + -0x1f8) + 0x1150) == '\x01') {
        if (*(char *)(*(long *)(param_1 + -0x1f8) + 0xff8) == '\x02') {
          FUN_10ace7374(&lStack_40);
          plVar6 = plStack_38;
        }
        else {
          FUN_10ace6e20(&lStack_40,*(undefined8 *)(param_2 + 0x70));
          plVar6 = plStack_38;
        }
      }
      else {
        FUN_10ace6d48(&lStack_40,*(undefined8 *)(param_2 + 0x70),lVar12);
        plVar6 = plStack_38;
      }
      if (*(long *)(lStack_40 + 8) == 0) {
        lVar5 = *(long *)(lStack_40 + 0x10) + 0x10;
      }
      else {
        lVar5 = *(long *)(lStack_40 + 8) + 8;
      }
      FUN_10a026ab4(param_1 + 0x50,lVar5);
      if (*(long *)(lStack_40 + 8) == 0) {
        puVar11 = (undefined8 *)(*(long *)(lStack_40 + 0x10) + 0x30);
      }
      else {
        puVar11 = (undefined8 *)(*(long *)(lStack_40 + 8) + 0x38);
      }
      uVar14 = puVar11[1];
      uVar13 = *puVar11;
      uVar16 = puVar11[3];
      uVar15 = puVar11[2];
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(puVar11 + 4);
      *(undefined8 *)(param_1 + 0x68) = uVar14;
      *(undefined8 *)(param_1 + 0x60) = uVar13;
      *(undefined8 *)(param_1 + 0x78) = uVar16;
      *(undefined8 *)(param_1 + 0x70) = uVar15;
      if (plVar6 != (long *)0x0) {
        plVar7 = plVar6 + 1;
        do {
          lVar5 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      goto LAB_10ac27724;
    }
  }
  *(undefined4 *)(param_1 + -0x214) = 1;
  if (*(long *)(param_1 + 0x50) == 0) {
    if ((bRam00000001137ec6c0 & 1) == 0) {
      iVar4 = 0x137ec6c0;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        uRam00000001137ec708 = 0x100000001;
        uRam00000001137ec700 = 0x100000000;
        uRam00000001137ec718 = 0x100000000;
        uRam00000001137ec710 = 0x23;
        uRam00000001137ec720 = 0;
        uRam00000001137ec728 = 0;
        puRam00000001137ec730 = &UNK_10e508388;
        ___cxa_guard_release(0x1137ec6c0);
      }
    }
    lVar5 = *(long *)(param_1 + -0x1f8);
    FUN_10a2421c8();
    plVar6 = *(long **)(lVar5 + 0x228);
    (**(code **)(*plVar6 + 0x20))(plVar6,0x1137ec700);
    FUN_10a099d88(param_1 + 0x50,plVar6);
  }
LAB_10ac27724:
  (**(code **)(*(long *)((long)plVar10 + *(long *)(*plVar10 + -0x18)) + 0x28))
            ((long)plVar10 + *(long *)(*plVar10 + -0x18));
  plVar6 = *(long **)(param_1 + 0x50);
  (**(code **)(*plVar6 + 0x28))();
  plVar7 = *(long **)(param_1 + 0x50);
  (**(code **)(*plVar7 + 0x30))();
  plVar8 = *(long **)(param_1 + 0x50);
  (**(code **)(*plVar8 + 0x50))();
  plVar9 = *(long **)(param_1 + 0x50);
  (**(code **)(*plVar9 + 0x70))();
  FUN_10a1da3a4(plVar10,plVar6,plVar7,0,0,plVar8,plVar9,0);
  return;
}



/* Entry: 10ac278d8; end: 10ac27b73;  */

void FUN_10ac278d8(undefined8 param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  undefined1 auStack_80 [8];
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  fVar7 = (float)param_1;
  for (plVar5 = param_2; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[0x13]) {
    plVar3 = plVar5;
    (**(code **)(*plVar5 + 0x80))();
    fVar7 = (float)param_1;
    if ((int)plVar3 != 2) {
      return;
    }
  }
  plVar5 = param_2 + 0x62;
  if ((*(byte *)(param_2[99] + 0x20) & 1) != 0) {
    if (*plVar5 == 0) {
      uVar4 = 0x30;
      __Znwm(0x30);
      FUN_10ab0b580();
      FUN_10ac27b74(plVar5,uVar4);
    }
    plVar5 = (long *)param_2[0x12];
    FUN_10a3dedfc();
    lStack_50 = *plVar5;
    plStack_48 = (long *)plVar5[1];
    if (plStack_48 != (long *)0x0) {
      plVar5 = plStack_48 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (lStack_50 != 0) {
      FUN_10a8d1228(auStack_60,param_2[0x12],&lStack_50);
      FUN_10a53daa8(&lStack_70,param_2[0x12],param_2 + 0x5b);
      (**(code **)(**(long **)(lStack_70 + 0x268) + 0x98))
                (*(long **)(lStack_70 + 0x268),param_2 + 0x5d);
      lVar6 = param_2[0x62];
      FUN_10ac2751c(param_2);
      FUN_10ab0c0a8(auStack_80,10.0 / fVar7,lVar6,param_3,auStack_60,&lStack_70);
      FUN_10a00e5c4(param_2 + 0x5b,auStack_80);
      if (plStack_78 != (long *)0x0) {
        plVar5 = plStack_78 + 1;
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
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
        }
      }
      param_2[0x5e] = 0;
      param_2[0x5d] = 0x3f800000;
      param_2[0x60] = 0;
      param_2[0x5f] = 0x3f800000;
      *(undefined4 *)(param_2 + 0x61) = 0x3f800000;
      if (plStack_68 != (long *)0x0) {
        plVar5 = plStack_68 + 1;
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
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
        }
      }
      if (plStack_58 != (long *)0x0) {
        plVar5 = plStack_58 + 1;
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
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
        }
      }
    }
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar3 = plStack_48 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    return;
  }
  lVar6 = *plVar5;
  *plVar5 = 0;
  if (lVar6 == 0) {
    return;
  }
  FUN_10ab0c040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac27b74; end: 10ac27b9b;  */

void FUN_10ac27b74(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10ab0c040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10ac27b9c; end: 10ac27bc3;  */

void FUN_10ac27b9c(undefined8 param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  undefined1 auStack_80 [8];
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  fVar7 = (float)param_1;
  for (plVar6 = (long *)(param_2 + -0x2b0); plVar6 != (long *)0x0; plVar6 = (long *)plVar6[0x13]) {
    plVar3 = plVar6;
    (**(code **)(*plVar6 + 0x80))();
    fVar7 = (float)param_1;
    if ((int)plVar3 != 2) {
      return;
    }
  }
  plVar6 = (long *)(param_2 + 0x60);
  if ((*(byte *)(*(long *)(param_2 + 0x68) + 0x20) & 1) != 0) {
    if (*plVar6 == 0) {
      uVar4 = 0x30;
      __Znwm(0x30);
      FUN_10ab0b580();
      FUN_10ac27b74(plVar6,uVar4);
    }
    plVar6 = *(long **)(param_2 + -0x220);
    FUN_10a3dedfc();
    lStack_50 = *plVar6;
    plStack_48 = (long *)plVar6[1];
    if (plStack_48 != (long *)0x0) {
      plVar6 = plStack_48 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (lStack_50 != 0) {
      FUN_10a8d1228(auStack_60,*(undefined8 *)(param_2 + -0x220),&lStack_50);
      FUN_10a53daa8(&lStack_70,*(undefined8 *)(param_2 + -0x220),param_2 + 0x28);
      (**(code **)(**(long **)(lStack_70 + 0x268) + 0x98))
                (*(long **)(lStack_70 + 0x268),(undefined8 *)(param_2 + 0x38));
      uVar4 = *(undefined8 *)(param_2 + 0x60);
      FUN_10ac2751c((long *)(param_2 + -0x2b0));
      FUN_10ab0c0a8(auStack_80,10.0 / fVar7,uVar4,param_3,auStack_60,&lStack_70);
      FUN_10a00e5c4(param_2 + 0x28,auStack_80);
      if (plStack_78 != (long *)0x0) {
        plVar6 = plStack_78 + 1;
        do {
          lVar5 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
        }
      }
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0x3f800000;
      *(undefined8 *)(param_2 + 0x50) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0x3f800000;
      *(undefined4 *)(param_2 + 0x58) = 0x3f800000;
      if (plStack_68 != (long *)0x0) {
        plVar6 = plStack_68 + 1;
        do {
          lVar5 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
        }
      }
      if (plStack_58 != (long *)0x0) {
        plVar6 = plStack_58 + 1;
        do {
          lVar5 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
        }
      }
    }
    plVar6 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar3 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    return;
  }
  lVar5 = *plVar6;
  *plVar6 = 0;
  if (lVar5 == 0) {
    return;
  }
  FUN_10ab0c040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac27bc4; end: 10ac27c3b;  */

void FUN_10ac27bc4(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x318);
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c57b28,0);
  FUN_10a4a215c(uVar3,plVar1);
  lVar2 = *(long *)(param_1 + 0x318);
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c57b48,0);
  *(char *)(lVar2 + 0x21) = (char)param_2;
  return;
}



/* Entry: 10ac27c3c; end: 10ac27ccf;  */

void FUN_10ac27c3c(long param_1,long *param_2)

{
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f662828;
  uStack_28 = 0x1d;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c5d550,&puStack_30);
  (**(code **)(*param_2 + 0x70))
            (param_2,&PTR_DAT_110c57b28,*(undefined1 *)(*(long *)(param_1 + 0x318) + 0x20));
  (**(code **)(*param_2 + 0x70))
            (param_2,&PTR_DAT_110c57b48,*(undefined1 *)(*(long *)(param_1 + 0x318) + 0x21));
  return;
}



/* Entry: 10ac27cd0; end: 10ac27da3;  */

void FUN_10ac27cd0(long param_1,long param_2)

{
  long lVar1;
  undefined1 uStack_50;
  undefined4 uStack_4f;
  undefined1 uStack_4b;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + 0x318);
  FUN_10ac27e40(lVar1);
  uStack_50 = *(undefined1 *)(lVar1 + 0x21);
  uStack_4f = 0;
  uStack_4b = 0;
  if (*(char *)(lVar1 + 0x4f) < '\0') {
    func_0x000107c3192c(&uStack_48,*(undefined8 *)(lVar1 + 0x38),*(undefined8 *)(lVar1 + 0x40));
  }
  else {
    uStack_40 = *(undefined8 *)(lVar1 + 0x40);
    uStack_48 = *(undefined8 *)(lVar1 + 0x38);
    lStack_38 = *(long *)(lVar1 + 0x48);
  }
  if ((*(char *)(*(long *)(param_1 + 0x318) + 0x50) == '\x01') && (*(int *)(param_1 + 0x328) == 1))
  {
    uStack_4f = CONCAT22(uStack_4f._2_2_,0x102);
  }
  FUN_10a113ca0(param_2 + 0x2d8,&uStack_50);
  if (lStack_38 < 0) {
    __ZdlPv(uStack_48);
  }
  return;
}



/* Entry: 10ac27da4; end: 10ac27dab;  */

void FUN_10ac27da4(long param_1,long param_2)

{
  long lVar1;
  undefined1 uStack_50;
  undefined4 uStack_4f;
  undefined1 uStack_4b;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + 0x90);
  FUN_10ac27e40(lVar1);
  uStack_50 = *(undefined1 *)(lVar1 + 0x21);
  uStack_4f = 0;
  uStack_4b = 0;
  if (*(char *)(lVar1 + 0x4f) < '\0') {
    func_0x000107c3192c(&uStack_48,*(undefined8 *)(lVar1 + 0x38),*(undefined8 *)(lVar1 + 0x40));
  }
  else {
    uStack_40 = *(undefined8 *)(lVar1 + 0x40);
    uStack_48 = *(undefined8 *)(lVar1 + 0x38);
    lStack_38 = *(long *)(lVar1 + 0x48);
  }
  if ((*(char *)(*(long *)(param_1 + 0x90) + 0x50) == '\x01') && (*(int *)(param_1 + 0xa0) == 1)) {
    uStack_4f = CONCAT22(uStack_4f._2_2_,0x102);
  }
  FUN_10a113ca0(param_2 + 0x2d8,&uStack_50);
  if (lStack_38 < 0) {
    __ZdlPv(uStack_48);
  }
  return;
}



/* Entry: 10ac27dac; end: 10ac27e3f;  */

void FUN_10ac27dac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x000107c2b054(auStack_48,&UNK_10f69c620);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  FUN_10a7f82b8(param_1 + 0x28,param_2);
  FUN_10ac27e40(param_1);
  return;
}



/* Entry: 10ac27e40; end: 10ac27eb7;  */

void FUN_10ac27e40(long param_1)

{
  long lVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 0x4f) < '\0') {
    if (*(long *)(param_1 + 0x40) != 0) {
      return;
    }
  }
  else if (*(char *)(param_1 + 0x4f) != '\0') {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if ((lVar1 != 0) && (func_0x00010aae9fd8(), lVar1 != 0)) {
    FUN_10a08d2e0(&uStack_38,lVar1 + 0x10);
    if (*(char *)(param_1 + 0x4f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x38));
    }
    *(undefined8 *)(param_1 + 0x40) = uStack_30;
    *(undefined8 *)(param_1 + 0x38) = uStack_38;
    *(undefined8 *)(param_1 + 0x48) = uStack_28;
  }
  return;
}



/* Entry: 10ac27eb8; end: 10ac27f3b;  */

void FUN_10ac27eb8(long param_1,undefined1 param_2)

{
  long lVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x000107c2b054(auStack_48,&UNK_10f69c6ac);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  *(undefined1 *)(param_1 + 0x20) = param_2;
  return;
}



/* Entry: 10ac27f3c; end: 10ac27fbf;  */

void FUN_10ac27f3c(long param_1,undefined1 param_2)

{
  long lVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x000107c2b054(auStack_48,&UNK_10f69c740);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  *(undefined1 *)(param_1 + 0x50) = param_2;
  return;
}



/* Entry: 10ac27fc0; end: 10ac27fdf;  */

undefined1  [16] FUN_10ac27fc0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x27;
  auVar1._0_8_ = &UNK_10f69db34;
  return auVar1;
}



/* Entry: 10ac27fe0; end: 10ac28047;  */

bool FUN_10ac27fe0(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x27) {
    iVar2 = 0xf69db34;
    _memcmp(&UNK_10f69db34,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x18) &&
     ((*param_2 == 0x72656469766f7250 && param_2[1] == 0x656c69466e69422e) &&
      param_2[2] == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac28048; end: 10ac2804f;  */

bool FUN_10ac28048(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x27) {
    iVar2 = 0xf69db34;
    _memcmp(&UNK_10f69db34,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x18) &&
     ((*param_2 == 0x72656469766f7250 && param_2[1] == 0x656c69466e69422e) &&
      param_2[2] == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac28050; end: 10ac280f7;  */

void FUN_10ac28050(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0x164;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10ac280f8(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f69c776;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x4000000064;
  puStack_60 = &UNK_10f69b9ca;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0xffffffff;
  puStack_30 = &UNK_10f69b9ca;
  uStack_28 = 0;
  FUN_10ac50214();
  FUN_10ac504e0(param_1);
  return;
}



/* Entry: 10ac280f8; end: 10ac281cf;  */

/* WARNING: Removing unreachable block (ram,0x00010ac28190) */

undefined1  [16] FUN_10ac280f8(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f69db34,0x27);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ac50118(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ac281d0; end: 10ac2820f;  */

undefined8 * FUN_10ac281d0(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  if (*(char *)((long)param_1 + 0x117) < '\0') {
    __ZdlPv(param_1[0x20]);
  }
  func_0x00010a0524e4(param_1 + 0x1e);
  *param_1 = &PTR_FUN_110c5b498;
  param_1[2] = &PTR_FUN_110c56668;
  param_1[5] = &PTR_DAT_110c56698;
  param_1[0x24] = &PTR_DAT_110c5b568;
  FUN_10a37d918(param_1 + 0x1c);
  if (*(char *)((long)param_1 + 0xd7) < '\0') {
    __ZdlPv(param_1[0x18]);
  }
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    __ZdlPv(param_1[0x15]);
  }
  *param_1 = &PTR_FUN_110c5b5b8;
  param_1[2] = &PTR_FUN_110c5d628;
  param_1[5] = &PTR_DAT_110c5d658;
  param_1[0x24] = &PTR_DAT_110c5b688;
  FUN_10ac40a18(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10ac28210; end: 10ac28233;  */

undefined8 * FUN_10ac28210(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  if (*(char *)((long)param_1 + 0x117) < '\0') {
    __ZdlPv(param_1[0x20]);
  }
  func_0x00010a0524e4(param_1 + 0x1e);
  *param_1 = &PTR_FUN_110c5b498;
  param_1[2] = &PTR_FUN_110c56668;
  param_1[5] = &PTR_DAT_110c56698;
  param_1[0x24] = &PTR_DAT_110c5b568;
  FUN_10a37d918(param_1 + 0x1c);
  if (*(char *)((long)param_1 + 0xd7) < '\0') {
    __ZdlPv(param_1[0x18]);
  }
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    __ZdlPv(param_1[0x15]);
  }
  *param_1 = &PTR_FUN_110c5b5b8;
  param_1[2] = &PTR_FUN_110c5d628;
  param_1[5] = &PTR_DAT_110c5d658;
  param_1[0x24] = &PTR_DAT_110c5b688;
  FUN_10ac40a18(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10ac28234; end: 10ac28277;  */

void FUN_10ac28234(void)

{
  FUN_10ac281d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac28278; end: 10ac282a7;  */

void FUN_10ac28278(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10ac281d0((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac282a8; end: 10ac2855b;  */

undefined *** FUN_10ac282a8(undefined ***param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined ***unaff_x20;
  undefined ***unaff_x21;
  undefined *puVar8;
  code **unaff_x23;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined ***pppuStack_b0;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined ***pppuStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar7 = param_1;
  if (param_1[0x1c] == (undefined **)0x0) {
    ppuVar5 = (undefined **)(long)*(char *)((long)param_1 + 0x117);
    if ((long)ppuVar5 < 0) {
      ppuVar5 = param_1[0x21];
    }
    unaff_x20 = param_1;
    if (ppuVar5 != (undefined **)0x0) {
      pppuVar6 = param_1 + 0x20;
      unaff_x21 = param_1;
      if (*(char *)(param_1 + 0x23) == '\x01') {
        do {
          pppuVar7 = unaff_x21;
          (*(code *)(*unaff_x21)[0x10])();
          iVar3 = (int)pppuVar7;
          if (iVar3 != 2) {
            if (iVar3 == 0) {
              if ((bRam000000011330a9e8 >> 3 & 1) == 0) break;
              if (*(char *)((long)param_1 + 0x117) < '\0') {
                pppuVar6 = (undefined ***)*pppuVar6;
              }
              puVar8 = &UNK_10f69c865;
              uVar4 = 0x1a;
            }
            else {
              if ((iVar3 != 1) || ((bRam000000011330a9e8 >> 3 & 1) == 0)) break;
              if (*(char *)((long)param_1 + 0x117) < '\0') {
                pppuVar6 = (undefined ***)*pppuVar6;
              }
              puVar8 = &UNK_10f69c823;
              uVar4 = 0x17;
            }
            pppuVar7 = (undefined ***)0x1;
            func_0x00010ae06f08(1,8,&UNK_10f69c77e,&UNK_10f69c7c7,uVar4,puVar8,in_x6,in_x7,pppuVar6)
            ;
            break;
          }
          unaff_x21 = (undefined ***)unaff_x21[0x13];
        } while (unaff_x21 != (undefined ***)0x0);
      }
      else {
        *(undefined1 *)(param_1 + 0x23) = 1;
        *(undefined4 *)((long)param_1 + 0x74) = 1;
        puVar8 = param_1[0x12][0x111];
        ppuStack_b8 = param_1[8];
        unaff_x20 = (undefined ***)param_1[9];
        if (unaff_x20 == (undefined ***)0x0) {
          pppuStack_70 = (undefined ***)0x0;
        }
        else {
          pppuVar7 = unaff_x20 + 2;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
            if (bVar2) {
              *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
            if (bVar2) {
              *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
            if (bVar2) {
              *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
              cVar1 = ExclusiveMonitorsStatus();
            }
            pppuStack_70 = unaff_x20;
          } while (cVar1 != '\0');
        }
        ppuStack_80 = &PTR_FUN_110c5e2e0;
        pcStack_88 = FUN_10ac5059c;
        unaff_x21 = &ppuStack_80;
        pcStack_c8 = FUN_10ac50878;
        ppuStack_c0 = &PTR_FUN_110c5e2f8;
        unaff_x23 = &pcStack_c8;
        pppuStack_b0 = unaff_x20;
        ppuStack_78 = ppuStack_b8;
        func_0x000107c2b054(auStack_e0,&UNK_10f69b9ca);
        FUN_10a76e51c(puVar8,pppuVar6,3,&pcStack_88,&pcStack_c8,auStack_e0);
        if (cStack_c9 < '\0') {
          __ZdlPv(auStack_e0[0]);
        }
        (*(code *)*ppuStack_c0)(&ppuStack_c0);
        pppuVar7 = unaff_x21;
        (*(code *)*ppuStack_80)();
        if (unaff_x20 != (undefined ***)0x0) {
          pppuVar7 = unaff_x20;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  if (cStack_c9 < '\0') {
    __ZdlPv(auStack_e0[0]);
  }
  (*(code *)*ppuStack_c0)(unaff_x23 + 1);
  (*(code *)*ppuStack_80)(unaff_x21);
  if (unaff_x20 != (undefined ***)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
  }
  __Unwind_Resume();
  if (pppuVar7 != (undefined ***)0x0) {
    do {
      pppuVar6 = pppuVar7;
      (*(code *)(*pppuVar7)[0x10])();
      if ((int)pppuVar6 != 2) {
        return pppuVar6;
      }
      pppuVar7 = (undefined ***)pppuVar7[0x13];
    } while (pppuVar7 != (undefined ***)0x0);
    return (undefined ***)0x2;
  }
  return (undefined ***)0x2;
}



/* Entry: 10ac2855c; end: 10ac285a7;  */

long * FUN_10ac2855c(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x2;
  }
  do {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x80))();
    if ((int)plVar1 != 2) {
      return plVar1;
    }
    param_1 = (long *)param_1[0x13];
  } while (param_1 != (long *)0x0);
  return (long *)0x2;
}



/* Entry: 10ac285a8; end: 10ac285af;  */

undefined *** FUN_10ac285a8(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar8;
  long *plVar9;
  undefined ***unaff_x20;
  undefined ***unaff_x21;
  code **unaff_x23;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined ***pppuStack_b0;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined ***pppuStack_70;
  long lStack_48;
  
  pppuVar5 = (undefined ***)(param_1 + -0x10);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0xd0) == 0) {
    lVar8 = (long)*(char *)(param_1 + 0x107);
    if (lVar8 < 0) {
      lVar8 = *(long *)(param_1 + 0xf8);
    }
    unaff_x20 = pppuVar5;
    if (lVar8 != 0) {
      plVar9 = (long *)(param_1 + 0xf0);
      unaff_x21 = pppuVar5;
      if (*(char *)(param_1 + 0x108) == '\x01') {
        do {
          pppuVar5 = unaff_x21;
          (*(code *)(*unaff_x21)[0x10])();
          iVar3 = (int)pppuVar5;
          if (iVar3 != 2) {
            if (iVar3 == 0) {
              if ((bRam000000011330a9e8 >> 3 & 1) == 0) break;
              if (*(char *)(param_1 + 0x107) < '\0') {
                plVar9 = (long *)*plVar9;
              }
              puVar7 = &UNK_10f69c865;
              uVar6 = 0x1a;
            }
            else {
              if ((iVar3 != 1) || ((bRam000000011330a9e8 >> 3 & 1) == 0)) break;
              if (*(char *)(param_1 + 0x107) < '\0') {
                plVar9 = (long *)*plVar9;
              }
              puVar7 = &UNK_10f69c823;
              uVar6 = 0x17;
            }
            pppuVar5 = (undefined ***)0x1;
            func_0x00010ae06f08(1,8,&UNK_10f69c77e,&UNK_10f69c7c7,uVar6,puVar7,in_x6,in_x7,plVar9);
            break;
          }
          unaff_x21 = (undefined ***)unaff_x21[0x13];
        } while (unaff_x21 != (undefined ***)0x0);
      }
      else {
        *(undefined1 *)(param_1 + 0x108) = 1;
        *(undefined4 *)(param_1 + 100) = 1;
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x888);
        uStack_b8 = *(undefined8 *)(param_1 + 0x30);
        unaff_x20 = *(undefined ****)(param_1 + 0x38);
        if (unaff_x20 == (undefined ***)0x0) {
          pppuStack_70 = (undefined ***)0x0;
        }
        else {
          pppuVar5 = unaff_x20 + 2;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
            if (bVar2) {
              *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
            if (bVar2) {
              *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
            if (bVar2) {
              *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
              cVar1 = ExclusiveMonitorsStatus();
            }
            pppuStack_70 = unaff_x20;
          } while (cVar1 != '\0');
        }
        ppuStack_80 = &PTR_FUN_110c5e2e0;
        pcStack_88 = FUN_10ac5059c;
        unaff_x21 = &ppuStack_80;
        pcStack_c8 = FUN_10ac50878;
        ppuStack_c0 = &PTR_FUN_110c5e2f8;
        unaff_x23 = &pcStack_c8;
        pppuStack_b0 = unaff_x20;
        uStack_78 = uStack_b8;
        func_0x000107c2b054(auStack_e0,&UNK_10f69b9ca);
        FUN_10a76e51c(uVar6,plVar9,3,&pcStack_88,&pcStack_c8,auStack_e0);
        if (cStack_c9 < '\0') {
          __ZdlPv(auStack_e0[0]);
        }
        (*(code *)*ppuStack_c0)(&ppuStack_c0);
        pppuVar5 = unaff_x21;
        (*(code *)*ppuStack_80)();
        if (unaff_x20 != (undefined ***)0x0) {
          pppuVar5 = unaff_x20;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  if (cStack_c9 < '\0') {
    __ZdlPv(auStack_e0[0]);
  }
  (*(code *)*ppuStack_c0)(unaff_x23 + 1);
  (*(code *)*ppuStack_80)(unaff_x21);
  if (unaff_x20 != (undefined ***)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
  }
  __Unwind_Resume();
  if (pppuVar5 != (undefined ***)0x0) {
    do {
      pppuVar4 = pppuVar5;
      (*(code *)(*pppuVar5)[0x10])();
      if ((int)pppuVar4 != 2) {
        return pppuVar4;
      }
      pppuVar5 = (undefined ***)pppuVar5[0x13];
    } while (pppuVar5 != (undefined ***)0x0);
    return (undefined ***)0x2;
  }
  return (undefined ***)0x2;
}



/* Entry: 10ac285b0; end: 10ac286af;  */

void FUN_10ac285b0(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010ac1ede0(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0x74) = 0;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x248))(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x78,plVar1);
  (**(code **)(*param_2 + 0xa8))(&uStack_38,param_2,&PTR_DAT_110c57b68,&UNK_10f69b9ca,0);
  if (*(char *)(param_1 + 0x117) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x100));
  }
  *(undefined8 *)(param_1 + 0x108) = uStack_30;
  *(undefined8 *)(param_1 + 0x100) = uStack_38;
  *(undefined8 *)(param_1 + 0x110) = uStack_28;
  return;
}



/* Entry: 10ac286b0; end: 10ac286cf;  */

undefined1  [16] FUN_10ac286b0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = &UNK_10f69db64;
  return auVar1;
}



/* Entry: 10ac286d0; end: 10ac28737;  */

bool FUN_10ac286d0(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x28) {
    iVar2 = 0xf69db64;
    _memcmp(&UNK_10f69db64,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x2b) {
    iVar2 = 0xf69faf7;
    _memcmp(&UNK_10f69faf7,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x21) {
    iVar2 = 0xf69fa3d;
    _memcmp(&UNK_10f69fa3d,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x624f7265646e6552 && param_2[1] == 0x766f72507463656a) &&
      (int)param_2[2] == 0x72656469)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac28738; end: 10ac2873f;  */

bool FUN_10ac28738(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x28) {
    iVar2 = 0xf69db64;
    _memcmp(&UNK_10f69db64,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x2b) {
    iVar2 = 0xf69faf7;
    _memcmp(&UNK_10f69faf7,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x21) {
    iVar2 = 0xf69fa3d;
    _memcmp(&UNK_10f69fa3d,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x624f7265646e6552 && param_2[1] == 0x766f72507463656a) &&
      (int)param_2[2] == 0x72656469)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac28740; end: 10ac2878b;  */

void FUN_10ac28740(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_18 = 0xffffffff;
  FUN_10ac2878c(param_1,&uStack_58);
  FUN_10ac50a68();
  return;
}



/* Entry: 10ac2878c; end: 10ac28863;  */

/* WARNING: Removing unreachable block (ram,0x00010ac28824) */

undefined1  [16] FUN_10ac2878c(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f69db64,0x28);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ac5096c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ac28864; end: 10ac288ef;  */

long * FUN_10ac28864(long *param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  lVar1 = *(long *)(param_2 + 8);
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110c68030;
  param_1[5] = (long)&PTR_DAT_110c68060;
  *(undefined8 *)((long)param_1 + *(long *)(lVar1 + -0x18)) = *(undefined8 *)(param_2 + 0x30);
  FUN_10a0cfe2c(param_1 + 0x1b);
  func_0x00010a1980a8(param_1 + 0x18);
  lVar1 = *(long *)(param_2 + 0x18);
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110bb3b30;
  param_1[5] = (long)&PTR_DAT_110bb3b60;
  *(undefined8 *)((long)param_1 + *(long *)(lVar1 + -0x18)) = *(undefined8 *)(param_2 + 0x20);
  func_0x00010a1f9d14(param_1 + 0x13);
  *param_1 = (long)&PTR_DAT_110c60a00;
  param_1[2] = (long)&PTR_DAT_110c60a88;
  param_1[5] = (long)&PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = (long)&PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = (long)&PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10ac288f0; end: 10ac28a3f;  */

long * FUN_10ac288f0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1e] = (long)&PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x21) = 0x100;
  plVar5 = (long *)param_3[1];
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
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
  }
  FUN_10ac75020(param_1,&PTR_PTR_110c57d68,param_2,&uStack_30);
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
  *param_1 = (long)&PTR_DAT_110c57ba0;
  param_1[2] = (long)&PTR_FUN_110c57c70;
  param_1[5] = (long)&PTR_DAT_110c57ca0;
  param_1[0x1e] = (long)&PTR_DAT_110c57d28;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  if (*(char *)((long)param_1 + 0xb9) != '\x01') {
    *(undefined1 *)((long)param_1 + 0xb9) = 1;
    func_0x00010ac6ece4(param_1);
  }
  if (*(char *)((long)param_1 + 0xba) != '\x01') {
    *(undefined1 *)((long)param_1 + 0xba) = 1;
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  func_0x00010ac6ec94(param_1);
  return param_1;
}



/* Entry: 10ac28a40; end: 10ac28ad3;  */

undefined8 FUN_10ac28a40(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  FUN_10a56327c(auStack_38,&uStack_21);
  FUN_10ac288f0(param_1,param_2,auStack_38);
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
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
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
    }
  }
  return param_1;
}



/* Entry: 10ac28ad4; end: 10ac28beb;  */

void FUN_10ac28ad4(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  FUN_10ac28bec(&plStack_28,param_2,&PTR_DAT_110c5d7b8);
  if (plStack_28 != (long *)0x0) {
    *(undefined1 *)(param_1 + 0xe8) = 1;
    FUN_10a54c73c(*(undefined8 *)(param_1 + 0xd8));
    plStack_38 = plStack_28;
    if (plStack_28 == (long *)0x0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = (long *)0x20;
      __Znwm();
      *plVar4 = (long)&PTR_FUN_110c1b548;
      plVar4[1] = 0;
      plVar4[2] = 0;
      plVar4[3] = (long)plStack_28;
    }
    plStack_28 = (long *)0x0;
    plStack_30 = plVar4;
    FUN_10ac645fc(param_1,&plStack_38);
    plVar4 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    plVar4 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  return;
}



/* Entry: 10ac28bec; end: 10ac28c8b;  */

void FUN_10ac28bec(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))();
  if (((ulong)plVar1 & 1) == 0) {
    *param_1 = 0;
  }
  else {
    uVar2 = 0x1b0;
    __Znwm();
    FUN_10ab46d7c();
    *param_1 = uVar2;
    (**(code **)(*param_2 + 0x1f0))(param_2,param_3,uVar2);
  }
  return;
}



/* Entry: 10ac28c8c; end: 10ac28d7b;  */

void FUN_10ac28c8c(long *param_1,long *param_2)

{
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f69db64;
  uStack_28 = 0x28;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c5d550,&puStack_30);
  if ((char)param_1[0x1d] == '\x01') {
    (**(code **)(*param_1 + 0x90))();
    (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c5d7b8,*param_1);
  }
  return;
}



/* Entry: 10ac28d7c; end: 10ac28d8b;  */

undefined1  [16] FUN_10ac28d7c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xf;
  auVar1._0_8_ = &UNK_10f69c8a2;
  return auVar1;
}



/* Entry: 10ac28d8c; end: 10ac2908b;  */

void FUN_10ac28d8c(ulong param_1)

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
  
  func_0x000109887da8(appuStack_d8,&UNK_10f69c8a2,0xf);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c5ef50;
  pppuVar2 = (undefined8 ***)&UNK_10f69b9ca;
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
  uStack_68 = 0xad;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c5ef50;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
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
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f69c8a2,0xf);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f69c8a2;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f69b9ca;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ac2906c;
      FUN_10a054dac(param_1,&UNK_10f69c8b2,FUN_10ac50b24,1,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ac2906c;
      FUN_10a054dac(param_1,&UNK_10f69c8c7,FUN_10ac50c54,1,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,0,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ac2906c;
      FUN_10a054dac(param_1,&UNK_10f69c8d8,FUN_10ac50e44,2,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10ac2906c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac29070);
  (*pcVar6)();
}



/* Entry: 10ac2908c; end: 10ac2914f;  */

void FUN_10ac2908c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c2b054(auStack_58,&UNK_10f69b9ca);
  func_0x000107c2b054(auStack_70,&UNK_10f69b9ca);
  FUN_10a00d0e0(&uStack_40,param_2,auStack_58,auStack_70);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return;
}



/* Entry: 10ac29150; end: 10ac292db;  */

void FUN_10ac29150(undefined8 param_1)

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
  puStack_88 = &UNK_10f69c8f7;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010ac29284(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f69c902;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_8c = 0;
  FUN_10ac292dc(param_1,&puStack_88,&uStack_8c);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f69c907;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_8c = 1;
  FUN_10ac292dc(param_1,&puStack_88,&uStack_8c);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f69c90f;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_8c = 2;
  FUN_10ac292dc(param_1,&puStack_88,&uStack_8c);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10ac292dc; end: 10ac29333;  */

ulong FUN_10ac292dc(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10ac51050(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10ac29334; end: 10ac294ab;  */

void FUN_10ac29334(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f69c916;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f69b9ca;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x11100000163;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f477b3c;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f69b9ca;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x11100000163;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ac294ac(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f477b2f;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f69b9ca;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x11100000163;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ac294ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f643ac2;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f69b9ca;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x11100000163;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ac294ac();
  FUN_10a003ff4();
  return;
}



/* Entry: 10ac294ac; end: 10ac2954f;  */

undefined8 * FUN_10ac294ac(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac29550);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10ac29550; end: 10ac2956f;  */

undefined1  [16] FUN_10ac29550(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x26;
  auVar1._0_8_ = &UNK_10f69db8d;
  return auVar1;
}



/* Entry: 10ac29570; end: 10ac295d7;  */

bool FUN_10ac29570(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x26) {
    iVar2 = 0xf69db8d;
    _memcmp(&UNK_10f69db8d,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac295d8; end: 10ac295df;  */

bool FUN_10ac295d8(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x26) {
    iVar2 = 0xf69db8d;
    _memcmp(&UNK_10f69db8d,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac295e0; end: 10ac29633;  */

void FUN_10ac295e0(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000002;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_1c = 0x13c00000124;
  FUN_10ac29634(param_1,&uStack_58);
  FUN_10ac511c0();
  return;
}



/* Entry: 10ac29634; end: 10ac2970b;  */

/* WARNING: Removing unreachable block (ram,0x00010ac296cc) */

undefined1  [16] FUN_10ac29634(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f69db8d,0x26);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ac510c4(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ac2970c; end: 10ac2978b;  */

undefined8 FUN_10ac2970c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  FUN_10ac2978c(param_1,param_2,&uStack_30);
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



/* Entry: 10ac2978c; end: 10ac29bcf;  */

undefined8 * FUN_10ac2978c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined2 auStack_68 [4];
  
  param_1[0xe6] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0xe9) = 0x100;
  param_1[0xe8] = 0;
  param_1[0xe7] = 0;
  puVar1 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110c58070,param_2);
  auStack_68[0] = 1;
  FUN_10a00db68(puVar1 + 0x51,param_2,auStack_68);
  FUN_10a03c0d0(param_1 + 0x56);
  *param_1 = &PTR_FUN_110c57dc8;
  param_1[2] = &PTR_FUN_110c57f08;
  param_1[5] = &PTR_FUN_110c57f38;
  param_1[0xe6] = &PTR_FUN_110c58030;
  param_1[0x15] = &PTR_FUN_110c57f90;
  param_1[0x51] = &PTR_FUN_110c57fb0;
  param_1[0x56] = &PTR_FUN_110c57fd8;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 99) = 0x20;
  param_1[0x62] = 0x2000000020;
  param_1[0x61] = 0x2000000020;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  _bzero(param_1 + 0x6b,0x278);
  *(undefined4 *)(param_1 + 0xba) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x5dc) = 0;
  *(undefined8 *)((long)param_1 + 0x5d4) = 0;
  *(undefined4 *)((long)param_1 + 0x5e4) = 0x3f800000;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbf) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x604) = 0;
  *(undefined8 *)((long)param_1 + 0x5fc) = 0;
  *(undefined8 *)((long)param_1 + 0x60c) = 0x3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0x61c) = 0;
  *(undefined8 *)((long)param_1 + 0x614) = 0;
  *(undefined4 *)((long)param_1 + 0x624) = 0x3f800000;
  param_1[0xc6] = 0;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 199) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x644) = 0;
  *(undefined8 *)((long)param_1 + 0x63c) = 0;
  *(undefined8 *)((long)param_1 + 0x64c) = 0x3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0x65c) = 0;
  *(undefined8 *)((long)param_1 + 0x654) = 0;
  *(undefined4 *)((long)param_1 + 0x664) = 0x3f800000;
  param_1[0xce] = 0;
  param_1[0xcd] = 0;
  *(undefined4 *)(param_1 + 0xcf) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x684) = 0;
  *(undefined8 *)((long)param_1 + 0x67c) = 0;
  *(undefined8 *)((long)param_1 + 0x68c) = 0x3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0x69c) = 0;
  *(undefined8 *)((long)param_1 + 0x694) = 0;
  *(undefined4 *)((long)param_1 + 0x6a4) = 0x3f800000;
  param_1[0xd6] = 0;
  param_1[0xd5] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x6c4) = 0;
  *(undefined8 *)((long)param_1 + 0x6bc) = 0;
  *(undefined8 *)((long)param_1 + 0x6d4) = 0x4220000000000000;
  *(undefined8 *)((long)param_1 + 0x6cc) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x6e4) = 0;
  *(undefined8 *)((long)param_1 + 0x6dc) = 0;
  *(undefined8 *)((long)param_1 + 0x6f4) = 0;
  *(undefined8 *)((long)param_1 + 0x6ec) = 0;
  *(undefined8 *)((long)param_1 + 0x704) = 0;
  *(undefined8 *)((long)param_1 + 0x6fc) = 0;
  param_1[0xe2] = 0;
  param_1[0xe1] = 0;
  uVar2 = *param_3;
  param_1[0xe4] = param_3[1];
  param_1[0xe3] = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0x10001;
  FUN_10a5ae998(param_1[0x57],&PTR_DAT_110b9f988,param_2,param_1 + 0x56);
  return param_1;
}



/* Entry: 10ac29bd0; end: 10ac29c7b;  */

void FUN_10ac29bd0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  FUN_10a2c8f88(param_1 + 0x718);
  lVar5 = *(long *)(param_1 + 0x708);
  if (lVar5 != 0) {
    uStack_30 = *(undefined8 *)(param_1 + 0x718);
    plStack_28 = *(long **)(param_1 + 0x720);
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10ac69b30(lVar5,&uStack_30);
    plVar1 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar2 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10ac29c7c; end: 10ac29f2f;  */

void FUN_10ac29c7c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lStack_50;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  *(undefined1 *)(param_1 + 0x72b) = 0;
  *(undefined8 *)(param_1 + 0x6fc) = 0;
  *(undefined8 *)(param_1 + 0x6f4) = 0;
  if ((*(char *)(param_1 + 0x2d0) == '\x02') ||
     ((*(char *)(param_1 + 0x2d0) == '\0' && (*(char *)(param_1 + 0x72a) == '\0')))) {
    iVar5 = 1;
LAB_10ac29d70:
    lVar6 = *(long *)(param_1 + 0x708);
    if (lVar6 != 0) {
      bVar7 = *(byte *)(lVar6 + 0x100) | 4;
      goto LAB_10ac29d80;
    }
  }
  else {
    lVar6 = *(long *)(*(long *)(param_1 + 0x90) + 0xa20);
    if (((*(byte *)(lVar6 + 0x1c) >> 4 & 1) == 0) && (*(int *)(lVar6 + 0x18) < 0xac)) {
      iVar5 = 0;
      goto LAB_10ac29d70;
    }
    lVar6 = *(long *)(param_1 + 0x708);
    if (lVar6 == 0) {
      lStack_50 = *(long *)(param_1 + 0x90);
      FUN_10a2e97f4(auStack_48,&uStack_31,&lStack_50,param_1 + 0x718);
      func_0x00010a2c8fec((long *)(param_1 + 0x708),auStack_48);
      if (plStack_40 != (long *)0x0) {
        plVar1 = plStack_40 + 1;
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
          (**(code **)(*plStack_40 + 0x10))(plStack_40);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
        }
      }
      iVar5 = 0;
      lVar6 = *(long *)(param_1 + 0x708);
    }
    else {
      iVar5 = *(int *)(lVar6 + 0xe8);
      if (iVar5 != 2) {
        iVar5 = 0;
      }
    }
    bVar7 = *(byte *)(lVar6 + 0x100) & 0xfb;
LAB_10ac29d80:
    *(byte *)(lVar6 + 0x100) = bVar7;
  }
  if (*(int *)(param_1 + 0x704) == iVar5) {
    return;
  }
  *(int *)(param_1 + 0x704) = iVar5;
  if (iVar5 != 0) {
    if (*(long *)(param_1 + 0x440) != 0) {
      FUN_10a02d8cc(param_1 + 0x440);
    }
    lVar6 = *(long *)(param_1 + 0x420);
    lVar8 = *(long *)(param_1 + 0x418);
    if (lVar6 - lVar8 != 0) {
      lVar9 = 0;
      uVar10 = 0;
      do {
        if ((ulong)(*(long *)(param_1 + 0x420) - *(long *)(param_1 + 0x418) >> 4) <= uVar10)
        goto LAB_10ac29f2c;
        FUN_10a02d8cc(*(long *)(param_1 + 0x418) + lVar9);
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x10;
      } while (lVar6 - lVar8 >> 4 != uVar10);
      lVar6 = *(long *)(param_1 + 0x420);
      lVar8 = *(long *)(param_1 + 0x418);
    }
    while (lVar6 != lVar8) {
      lVar6 = lVar6 + -0x10;
      func_0x00010a05248c();
    }
    *(long *)(param_1 + 0x420) = lVar8;
    FUN_10a02d8cc(param_1 + 0x430);
    lVar6 = *(long *)(param_1 + 0x540);
    lVar8 = *(long *)(param_1 + 0x538);
    if (lVar6 - lVar8 != 0) {
      lVar9 = 0;
      uVar10 = 0;
      do {
        if ((ulong)(*(long *)(param_1 + 0x540) - *(long *)(param_1 + 0x538) >> 4) <= uVar10)
        goto LAB_10ac29f2c;
        FUN_10a019700(*(long *)(param_1 + 0x538) + lVar9);
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x10;
      } while (lVar6 - lVar8 >> 4 != uVar10);
      lVar6 = *(long *)(param_1 + 0x540);
      lVar8 = *(long *)(param_1 + 0x538);
    }
    while (lVar6 != lVar8) {
      lVar6 = lVar6 + -0x10;
      FUN_10a0617bc();
    }
    *(long *)(param_1 + 0x540) = lVar8;
    lVar6 = *(long *)(param_1 + 0x558);
    lVar8 = *(long *)(param_1 + 0x550);
    if (lVar6 - lVar8 != 0) {
      lVar9 = 0;
      uVar10 = 0;
      do {
        if ((ulong)(*(long *)(param_1 + 0x558) - *(long *)(param_1 + 0x550) >> 4) <= uVar10) {
LAB_10ac29f2c:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac29f30);
          (*pcVar4)();
        }
        FUN_10a019700(*(long *)(param_1 + 0x550) + lVar9);
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x10;
      } while (lVar6 - lVar8 >> 4 != uVar10);
      lVar6 = *(long *)(param_1 + 0x558);
      lVar8 = *(long *)(param_1 + 0x550);
    }
    while (lVar6 != lVar8) {
      lVar6 = lVar6 + -0x10;
      FUN_10a0617bc();
    }
    *(long *)(param_1 + 0x558) = lVar8;
    FUN_10a019700(param_1 + 0x4e8);
    if (*(int *)(param_1 + 0x704) == 1) goto LAB_10ac29f10;
  }
  FUN_10a019700(param_1 + 0x4f8);
  if (*(int *)(param_1 + 0x704) == 2) {
    return;
  }
LAB_10ac29f10:
  FUN_10a019700(param_1 + 0x508);
  return;
}



/* Entry: 10ac29f30; end: 10ac29f8f;  */

void FUN_10ac29f30(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x8c0) + 0x18);
  if (lVar2 != 0) {
    bVar1 = *(int *)(lVar2 + 0x198) != 1;
    if ((bool)*(char *)(param_1 + 0x72a) != bVar1) {
      *(bool *)(param_1 + 0x72a) = bVar1;
      FUN_10ac29c7c(param_1);
    }
    *(bool *)(param_1 + 0x72b) = *(long *)(lVar2 + 0xd0) != 0;
  }
  return;
}



/* Entry: 10ac29f90; end: 10ac29f97;  */

void FUN_10ac29f90(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + -0x220) + 0x8c0) + 0x18);
  if (lVar2 != 0) {
    bVar1 = *(int *)(lVar2 + 0x198) != 1;
    if ((bool)*(char *)(param_1 + 0x47a) != bVar1) {
      *(bool *)(param_1 + 0x47a) = bVar1;
      FUN_10ac29c7c(param_1 + -0x2b0);
    }
    *(bool *)(param_1 + 0x47b) = *(long *)(lVar2 + 0xd0) != 0;
  }
  return;
}



/* Entry: 10ac29f98; end: 10ac2a1cf;  */

/* WARNING: Removing unreachable block (ram,0x00010ac2a0e8) */
/* WARNING: Removing unreachable block (ram,0x00010ac2a0ec) */
/* WARNING: Removing unreachable block (ram,0x00010ac2a0f4) */
/* WARNING: Removing unreachable block (ram,0x00010ac2a0fc) */
/* WARNING: Removing unreachable block (ram,0x00010ac2a100) */

void FUN_10ac29f98(undefined8 *param_1,undefined *param_2,undefined *param_3)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  long *plVar8;
  undefined ***pppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined **ppuVar15;
  undefined1 *unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar16;
  code *pcVar17;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined ***pppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = (undefined **)0x2c0;
  __Znwm();
  ppuVar6[1] = (undefined *)0x0;
  ppuVar6[2] = (undefined *)0x0;
  *ppuVar6 = (undefined *)&PTR_DAT_110b9fda0;
  ppuVar15 = ppuVar6 + 3;
  FUN_10ab6aaa0(ppuVar15,param_2,param_3);
  ppuStack_88 = ppuVar15;
  ppuStack_80 = ppuVar6;
  FUN_10a05b2a8(&ppuStack_88,ppuVar6 + 8,ppuVar15);
  FUN_10a05b04c(&uStack_98,&ppuStack_88);
  ppuVar6 = ppuStack_80;
  if (ppuStack_80 != (undefined **)0x0) {
    ppuVar11 = ppuStack_80 + 1;
    do {
      puVar10 = *ppuVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar4) {
        *ppuVar11 = puVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar10 == (undefined *)0x0) {
      (**(code **)(*ppuStack_80 + 0x10))(ppuStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
    }
  }
  if (pppuStack_90 == (undefined ***)0x0) {
    *param_1 = uStack_98;
    param_1[1] = 0;
  }
  else {
    pppuVar14 = pppuStack_90 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar14,0x10);
      if (bVar4) {
        *pppuVar14 = (undefined **)((long)*pppuVar14 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *param_1 = uStack_98;
    param_1[1] = pppuStack_90;
    if (pppuStack_90 != (undefined ***)0x0) {
      pppuVar14 = pppuStack_90 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar14,0x10);
        if (bVar4) {
          *pppuVar14 = (undefined **)((long)*pppuVar14 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  pppuVar14 = &ppuStack_80;
  param_1[2] = FUN_10ac5127c;
  param_1[3] = &PTR_DAT_110c5e310;
  param_1[4] = uStack_98;
  param_1[5] = pppuStack_90;
  uStack_70 = 0;
  uStack_78 = 0;
  ppuStack_88 = (undefined **)&UNK_1053a6a3c;
  ppuStack_80 = &PTR_DAT_110ae9180;
  FUN_10a044790(&ppuStack_88);
  pppuVar13 = pppuVar14;
  (*(code *)*ppuStack_80)();
  if (pppuStack_90 != (undefined ***)0x0) {
    pppuVar7 = pppuStack_90 + 1;
    do {
      ppuVar6 = *pppuVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
      if (bVar4) {
        *pppuVar7 = (undefined **)((long)ppuVar6 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar6 == (undefined **)0x0) {
      (*(code *)(*pppuStack_90)[2])(pppuStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar13 = pppuStack_90;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a05248c(&ppuStack_88);
  pcVar17 = FUN_10ac2a1d0;
  pppuVar7 = pppuVar13;
  __Unwind_Resume();
  puVar5 = auStack_a0;
  do {
    puVar16 = (undefined1 *)((long)register0x00000008 + -0x10);
    register0x00000008 = (BADSPACEBASE *)(puVar5 + -400);
    *(undefined8 *)(puVar5 + -0x70) = unaff_d11;
    *(undefined8 *)(puVar5 + -0x68) = unaff_d10;
    *(undefined8 *)(puVar5 + -0x60) = unaff_d9;
    *(undefined8 *)(puVar5 + -0x58) = unaff_d8;
    *(undefined8 *)(puVar5 + -0x50) = unaff_x28;
    *(undefined8 *)(puVar5 + -0x48) = unaff_x27;
    *(undefined1 **)(puVar5 + -0x40) = unaff_x24;
    *(undefined **)(puVar5 + -0x38) = param_2;
    *(undefined **)(puVar5 + -0x30) = param_3;
    *(undefined ***)(puVar5 + -0x28) = ppuVar15;
    *(undefined ****)(puVar5 + -0x20) = pppuVar14;
    *(undefined ****)(puVar5 + -0x18) = pppuVar13;
    *(undefined1 **)(puVar5 + -0x10) = puVar16;
    *(code **)(puVar5 + -8) = pcVar17;
    *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if (pppuVar7[0xe1] != (undefined **)0x0) {
      (**(code **)(*pppuVar7[0xe1] + 0x68))();
    }
    ppuVar15 = (undefined **)(puVar5 + -0xd0);
    pppuVar9 = pppuVar7;
    FUN_10ac2b0d0();
    param_2 = &UNK_10e508000;
    param_3 = &UNK_10dd6b000;
    if (*(int *)((long)pppuVar7 + 0x704) == 0) {
      ppuVar6 = pppuVar7[0x83];
      ppuVar11 = pppuVar7[0x84];
      if (ppuVar6 == ppuVar11) {
        unaff_x24 = puVar5 + -0xd0;
        unaff_d9 = 0x10000000080;
        *(undefined8 *)(puVar5 + -0x168) = 0x100000000;
        *(undefined8 *)(puVar5 + -0x170) = 0x400000001;
        do {
          if (ppuVar6 != ppuVar11) {
            plVar8 = *(long **)(ppuVar11[-2] + 0x268);
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0xb8))();
              if (1 < (uint)plVar8) goto LAB_10ac2ad10;
              ppuVar6 = pppuVar7[0x83];
              ppuVar11 = pppuVar7[0x84];
            }
            if (ppuVar6 == ppuVar11) {
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x10ac2b014);
              (*pcVar17)();
            }
            pppuVar9 = *(undefined ****)(ppuVar11[-2] + 0x268);
            if ((pppuVar9 == (undefined ***)0x0) ||
               ((*(code *)(*pppuVar9)[0x16])(), (uint)pppuVar9 < 2)) break;
          }
LAB_10ac2ad10:
          *(undefined8 *)(puVar5 + -0x110) = 0;
          *(undefined8 *)(puVar5 + -0x108) = 0;
          ppuVar6 = pppuVar7[0x12];
          FUN_10a2421c8();
          plVar8 = (long *)ppuVar6[0x45];
          *(undefined8 *)(puVar5 + -0xcc) = unaff_d9;
          *(undefined8 *)(puVar5 + -0xbc) = *(undefined8 *)(puVar5 + -0x168);
          *(undefined8 *)(puVar5 + -0xc4) = *(undefined8 *)(puVar5 + -0x170);
          *(undefined8 *)(puVar5 + -0xb4) = 0x100000001;
          *(undefined4 *)(puVar5 + -0xd0) = 0;
          *(undefined4 *)(puVar5 + -0xac) = 0;
          puVar5[-0xa8] = 0;
          *(undefined8 *)(puVar5 + -0xa0) = 0;
          (**(code **)(*plVar8 + 0x20))(plVar8,puVar5 + -0xd0);
          FUN_10a099d88(puVar5 + -0x110,plVar8);
          FUN_10ac29f98(puVar5 + -0xd0,pppuVar7[0x12],puVar5 + -0x110);
          func_0x00010a067b00(pppuVar7 + 0x83,puVar5 + -0xd0);
          FUN_10a044790(puVar5 + -0xc0);
          (*(code *)**(undefined8 **)(puVar5 + -0xb8))(puVar5 + -0xb8);
          plVar8 = *(long **)(puVar5 + -200);
          if (plVar8 != (long *)0x0) {
            plVar2 = plVar8 + 1;
            do {
              lVar12 = *plVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *plVar2 = lVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
          pppuVar14 = *(undefined ****)(puVar5 + -0x108);
          if (pppuVar14 != (undefined ***)0x0) {
            pppuVar13 = pppuVar14 + 1;
            do {
              ppuVar6 = *pppuVar13;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
              if (bVar4) {
                *pppuVar13 = (undefined **)((long)ppuVar6 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (ppuVar6 == (undefined **)0x0) {
              (*(code *)(*pppuVar14)[2])(pppuVar14);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar14);
            }
          }
          unaff_d9 = CONCAT44(((int)((ulong)unaff_d9 >> 0x20) + 1) / 2,((int)unaff_d9 + 1) / 2);
          ppuVar6 = pppuVar7[0x83];
          ppuVar11 = pppuVar7[0x84];
        } while( true );
      }
      if (pppuVar7[0x88] == (undefined **)0x0) {
        *(undefined8 *)(puVar5 + -0x110) = 0;
        *(undefined8 *)(puVar5 + -0x108) = 0;
        ppuVar6 = pppuVar7[0x12];
        FUN_10a2421c8();
        plVar8 = (long *)ppuVar6[0x45];
        *(section **)(puVar5 + -200) = &section_100000100;
        *(undefined8 *)(puVar5 + -0xd0) = 0x8000000000;
        *(undefined8 *)(puVar5 + -0xb8) = 0x100000009;
        *(undefined8 *)(puVar5 + -0xc0) = 4;
        *(undefined8 *)(puVar5 + -0xb0) = 3;
        puVar5[-0xa8] = 0;
        *(undefined8 *)(puVar5 + -0xa0) = 0;
        (**(code **)(*plVar8 + 0x20))(plVar8,puVar5 + -0xd0);
        FUN_10a099d88(puVar5 + -0x110,plVar8);
        FUN_10ac29f98(puVar5 + -0xd0,pppuVar7[0x12],puVar5 + -0x110);
        FUN_10a015bec(pppuVar7 + 0x88,puVar5 + -0xd0);
        FUN_10a044790(puVar5 + -0xc0);
        pppuVar9 = (undefined ***)(puVar5 + -0xb8);
        (*(code *)**(undefined8 **)(puVar5 + -0xb8))();
        pppuVar14 = *(undefined ****)(puVar5 + -200);
        if (pppuVar14 != (undefined ***)0x0) {
          pppuVar13 = pppuVar14 + 1;
          do {
            ppuVar6 = *pppuVar13;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
            if (bVar4) {
              *pppuVar13 = (undefined **)((long)ppuVar6 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppuVar6 == (undefined **)0x0) {
            (*(code *)(*pppuVar14)[2])(pppuVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppuVar9 = pppuVar14;
          }
        }
        pppuVar14 = *(undefined ****)(puVar5 + -0x108);
        if (pppuVar14 != (undefined ***)0x0) {
          pppuVar13 = pppuVar14 + 1;
          do {
            ppuVar6 = *pppuVar13;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
            if (bVar4) {
              *pppuVar13 = (undefined **)((long)ppuVar6 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppuVar6 == (undefined **)0x0) {
            (*(code *)(*pppuVar14)[2])(pppuVar14);
            pppuVar9 = pppuVar14;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
      }
      if (pppuVar7[0x86] == (undefined **)0x0) {
        *(undefined8 *)(puVar5 + -0x110) = 0;
        *(undefined8 *)(puVar5 + -0x108) = 0;
        ppuVar6 = pppuVar7[0x12];
        FUN_10a2421c8();
        plVar8 = (long *)ppuVar6[0x45];
        *(section **)(puVar5 + -200) = &section_100000100;
        *(undefined8 *)(puVar5 + -0xd0) = 0x8000000000;
        *(undefined8 *)(puVar5 + -0xb8) = 0x100000001;
        *(undefined8 *)(puVar5 + -0xc0) = 4;
        *(undefined8 *)(puVar5 + -0xb0) = 1;
        puVar5[-0xa8] = 0;
        *(undefined8 *)(puVar5 + -0xa0) = 0;
        (**(code **)(*plVar8 + 0x20))(plVar8,puVar5 + -0xd0);
        FUN_10a099d88(puVar5 + -0x110,plVar8);
        FUN_10ac29f98(puVar5 + -0xd0,pppuVar7[0x12],puVar5 + -0x110);
        FUN_10a015bec(pppuVar7 + 0x86,puVar5 + -0xd0);
        FUN_10a044790(puVar5 + -0xc0);
        pppuVar9 = (undefined ***)(puVar5 + -0xb8);
        (*(code *)**(undefined8 **)(puVar5 + -0xb8))();
        pppuVar14 = *(undefined ****)(puVar5 + -200);
        if (pppuVar14 != (undefined ***)0x0) {
          pppuVar13 = pppuVar14 + 1;
          do {
            ppuVar6 = *pppuVar13;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
            if (bVar4) {
              *pppuVar13 = (undefined **)((long)ppuVar6 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppuVar6 == (undefined **)0x0) {
            (*(code *)(*pppuVar14)[2])(pppuVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppuVar9 = pppuVar14;
          }
        }
        pppuVar14 = *(undefined ****)(puVar5 + -0x108);
        if (pppuVar14 != (undefined ***)0x0) {
          pppuVar13 = pppuVar14 + 1;
          do {
            ppuVar6 = *pppuVar13;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
            if (bVar4) {
              *pppuVar13 = (undefined **)((long)ppuVar6 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppuVar6 == (undefined **)0x0) {
            (*(code *)(*pppuVar14)[2])(pppuVar14);
            pppuVar9 = pppuVar14;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
      }
    }
    *(section **)(puVar5 + -0x188) = &section_100000100;
    *(undefined8 *)(puVar5 + -400) = 0x20000000000;
    *(undefined8 *)(puVar5 + -0x178) = 0x100000001;
    *(undefined8 *)(puVar5 + -0x180) = 4;
    *(section **)(puVar5 + -0x158) = &section_100000100;
    *(undefined8 *)(puVar5 + -0x160) = 0x20000000000;
    *(undefined8 *)(puVar5 + -0x148) = 0x100000001;
    *(undefined8 *)(puVar5 + -0x150) = 4;
    unaff_d8 = 1;
    *(undefined8 *)(puVar5 + -0x140) = 1;
    puVar5[-0x138] = 0;
    *(undefined8 *)(puVar5 + -0x130) = 0;
    if (pppuVar7[0x6b] == (undefined **)0x0) {
      *(undefined8 *)(puVar5 + -0x110) = 0;
      *(undefined8 *)(puVar5 + -0x108) = 0;
      ppuVar6 = pppuVar7[0x12];
      FUN_10a2421c8();
      plVar8 = (long *)ppuVar6[0x45];
      (**(code **)(*plVar8 + 0x20))(plVar8,puVar5 + -0x160);
      FUN_10a099d88(puVar5 + -0x110,plVar8);
      FUN_10ac29f98(puVar5 + -0xd0,pppuVar7[0x12],puVar5 + -0x110);
      FUN_10a015bec(pppuVar7 + 0x6b,puVar5 + -0xd0);
      FUN_10a044790(puVar5 + -0xc0);
      pppuVar9 = (undefined ***)(puVar5 + -0xb8);
      (*(code *)**(undefined8 **)(puVar5 + -0xb8))();
      pppuVar14 = *(undefined ****)(puVar5 + -200);
      if (pppuVar14 != (undefined ***)0x0) {
        pppuVar13 = pppuVar14 + 1;
        do {
          ppuVar6 = *pppuVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
          if (bVar4) {
            *pppuVar13 = (undefined **)((long)ppuVar6 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar6 == (undefined **)0x0) {
          (*(code *)(*pppuVar14)[2])(pppuVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar9 = pppuVar14;
        }
      }
      pppuVar14 = *(undefined ****)(puVar5 + -0x108);
      if (pppuVar14 != (undefined ***)0x0) {
        pppuVar13 = pppuVar14 + 1;
        do {
          ppuVar6 = *pppuVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
          if (bVar4) {
            *pppuVar13 = (undefined **)((long)ppuVar6 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar6 == (undefined **)0x0) {
          (*(code *)(*pppuVar14)[2])(pppuVar14);
          pppuVar9 = pppuVar14;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    if (pppuVar7[0x6d] == (undefined **)0x0) {
      *(undefined8 *)(puVar5 + -0x110) = 0;
      *(undefined8 *)(puVar5 + -0x108) = 0;
      ppuVar6 = pppuVar7[0x12];
      FUN_10a2421c8();
      plVar8 = (long *)ppuVar6[0x45];
      (**(code **)(*plVar8 + 0x20))(plVar8,puVar5 + -0x160);
      FUN_10a099d88(puVar5 + -0x110,plVar8);
      FUN_10ac29f98(puVar5 + -0xd0,pppuVar7[0x12],puVar5 + -0x110);
      FUN_10a015bec(pppuVar7 + 0x6d,puVar5 + -0xd0);
      FUN_10a044790(puVar5 + -0xc0);
      pppuVar9 = (undefined ***)(puVar5 + -0xb8);
      (*(code *)**(undefined8 **)(puVar5 + -0xb8))();
      pppuVar14 = *(undefined ****)(puVar5 + -200);
      if (pppuVar14 != (undefined ***)0x0) {
        pppuVar13 = pppuVar14 + 1;
        do {
          ppuVar6 = *pppuVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
          if (bVar4) {
            *pppuVar13 = (undefined **)((long)ppuVar6 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar6 == (undefined **)0x0) {
          (*(code *)(*pppuVar14)[2])(pppuVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar9 = pppuVar14;
        }
      }
      pppuVar14 = *(undefined ****)(puVar5 + -0x108);
      if (pppuVar14 != (undefined ***)0x0) {
        pppuVar13 = pppuVar14 + 1;
        do {
          ppuVar6 = *pppuVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
          if (bVar4) {
            *pppuVar13 = (undefined **)((long)ppuVar6 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar6 == (undefined **)0x0) {
          (*(code *)(*pppuVar14)[2])(pppuVar14);
          pppuVar9 = pppuVar14;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    if (pppuVar7[0x78] == pppuVar7[0x79]) {
      param_3 = (undefined *)0x0;
      param_2 = puVar5 + -0xd0;
      *(undefined8 *)(puVar5 + -0x168) = 0x100000000;
      *(undefined8 *)(puVar5 + -0x170) = 0x400000001;
      unaff_d10 = 0x100000001;
      unaff_d9 = uRam00000001137ec6c8;
      do {
        *(undefined8 *)(puVar5 + -0x110) = 0;
        *(undefined8 *)(puVar5 + -0x108) = 0;
        ppuVar6 = pppuVar7[0x12];
        FUN_10a2421c8();
        plVar8 = (long *)ppuVar6[0x45];
        *(undefined8 *)(puVar5 + -0xcc) = unaff_d9;
        *(undefined8 *)(puVar5 + -0xbc) = *(undefined8 *)(puVar5 + -0x168);
        *(undefined8 *)(puVar5 + -0xc4) = *(undefined8 *)(puVar5 + -0x170);
        *(undefined8 *)(puVar5 + -0xb4) = 0x100000001;
        *(undefined4 *)(puVar5 + -0xd0) = 0;
        *(undefined4 *)(puVar5 + -0xac) = 0;
        puVar5[-0xa8] = 0;
        *(undefined8 *)(puVar5 + -0xa0) = 0;
        (**(code **)(*plVar8 + 0x20))(plVar8,puVar5 + -0xd0);
        FUN_10a099d88(puVar5 + -0x110,plVar8);
        FUN_10ac29f98(puVar5 + -0xd0,pppuVar7[0x12],puVar5 + -0x110);
        func_0x00010a067b00(pppuVar7 + 0x78,puVar5 + -0xd0);
        FUN_10a044790(puVar5 + -0xc0);
        pppuVar9 = (undefined ***)(puVar5 + -0xb8);
        (*(code *)**(undefined8 **)(puVar5 + -0xb8))();
        pppuVar14 = *(undefined ****)(puVar5 + -200);
        if (pppuVar14 != (undefined ***)0x0) {
          pppuVar13 = pppuVar14 + 1;
          do {
            ppuVar6 = *pppuVar13;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
            if (bVar4) {
              *pppuVar13 = (undefined **)((long)ppuVar6 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppuVar6 == (undefined **)0x0) {
            (*(code *)(*pppuVar14)[2])(pppuVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppuVar9 = pppuVar14;
          }
        }
        pppuVar14 = *(undefined ****)(puVar5 + -0x108);
        if (pppuVar14 != (undefined ***)0x0) {
          pppuVar13 = pppuVar14 + 1;
          do {
            ppuVar6 = *pppuVar13;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
            if (bVar4) {
              *pppuVar13 = (undefined **)((long)ppuVar6 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppuVar6 == (undefined **)0x0) {
            (*(code *)(*pppuVar14)[2])(pppuVar14);
            pppuVar9 = pppuVar14;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        unaff_d9 = CONCAT44((int)((ulong)unaff_d9 >> 0x20) / 2,(int)unaff_d9 / 2);
        uVar1 = (int)param_3 + 1;
        param_3 = (undefined *)(ulong)uVar1;
      } while (uVar1 != 6);
    }
    *(undefined8 *)(puVar5 + -0x108) = 0x100000001;
    *(undefined8 *)(puVar5 + -0x110) = 0x100000000;
    *(undefined8 *)(puVar5 + -0xf8) = *(undefined8 *)(puVar5 + -0x178);
    *(undefined8 *)(puVar5 + -0x100) = *(undefined8 *)(puVar5 + -0x180);
    *(undefined8 *)(puVar5 + -0xf0) = 1;
    puVar5[-0xe8] = 0;
    *(undefined8 *)(puVar5 + -0xe0) = 0;
    if (pppuVar7[0x7b] == (undefined **)0x0) {
      ppuVar6 = pppuVar7[0x12];
      FUN_10a2421c8();
      plVar8 = (long *)ppuVar6[0x45];
      (**(code **)(*plVar8 + 0x20))(plVar8,puVar5 + -0x110);
      FUN_10a0a25e4(puVar5 + -0x120,plVar8);
      FUN_10ac29f98(puVar5 + -0xd0,pppuVar7[0x12],puVar5 + -0x120);
      FUN_10a015bec(pppuVar7 + 0x7b,puVar5 + -0xd0);
      FUN_10a044790(puVar5 + -0xc0);
      pppuVar9 = (undefined ***)(puVar5 + -0xb8);
      (*(code *)**(undefined8 **)(puVar5 + -0xb8))();
      pppuVar14 = *(undefined ****)(puVar5 + -200);
      if (pppuVar14 != (undefined ***)0x0) {
        pppuVar13 = pppuVar14 + 1;
        do {
          ppuVar6 = *pppuVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
          if (bVar4) {
            *pppuVar13 = (undefined **)((long)ppuVar6 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar6 == (undefined **)0x0) {
          (*(code *)(*pppuVar14)[2])(pppuVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar9 = pppuVar14;
        }
      }
      pppuVar14 = *(undefined ****)(puVar5 + -0x118);
      if (pppuVar14 != (undefined ***)0x0) {
        pppuVar13 = pppuVar14 + 1;
        do {
          ppuVar6 = *pppuVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
          if (bVar4) {
            *pppuVar13 = (undefined **)((long)ppuVar6 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar6 == (undefined **)0x0) {
          (*(code *)(*pppuVar14)[2])(pppuVar14);
          pppuVar9 = pppuVar14;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    if (pppuVar7[0x7d] == (undefined **)0x0) {
      ppuVar6 = pppuVar7[0x12];
      FUN_10a2421c8();
      plVar8 = (long *)ppuVar6[0x45];
      (**(code **)(*plVar8 + 0x20))(plVar8,puVar5 + -0x110);
      FUN_10a0a25e4(puVar5 + -0x120,plVar8);
      FUN_10ac29f98(puVar5 + -0xd0,pppuVar7[0x12],puVar5 + -0x120);
      FUN_10a015bec(pppuVar7 + 0x7d,puVar5 + -0xd0);
      FUN_10a044790(puVar5 + -0xc0);
      pppuVar9 = (undefined ***)(puVar5 + -0xb8);
      (*(code *)**(undefined8 **)(puVar5 + -0xb8))();
      pppuVar14 = *(undefined ****)(puVar5 + -200);
      if (pppuVar14 != (undefined ***)0x0) {
        pppuVar13 = pppuVar14 + 1;
        do {
          ppuVar6 = *pppuVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
          if (bVar4) {
            *pppuVar13 = (undefined **)((long)ppuVar6 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar6 == (undefined **)0x0) {
          (*(code *)(*pppuVar14)[2])(pppuVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar9 = pppuVar14;
        }
      }
      pppuVar14 = *(undefined ****)(puVar5 + -0x118);
      if (pppuVar14 != (undefined ***)0x0) {
        pppuVar13 = pppuVar14 + 1;
        do {
          ppuVar6 = *pppuVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
          if (bVar4) {
            *pppuVar13 = (undefined **)((long)ppuVar6 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar6 == (undefined **)0x0) {
          (*(code *)(*pppuVar14)[2])(pppuVar14);
          pppuVar9 = pppuVar14;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    if (pppuVar7[0x81] == (undefined **)0x0) {
      *(undefined8 *)(puVar5 + -0x120) = 0;
      *(undefined8 *)(puVar5 + -0x118) = 0;
      ppuVar6 = pppuVar7[0x12];
      FUN_10a2421c8();
      plVar8 = (long *)ppuVar6[0x45];
      *(undefined8 *)(puVar5 + -200) = *(undefined8 *)(puVar5 + -0x188);
      *(undefined8 *)(puVar5 + -0xd0) = *(undefined8 *)(puVar5 + -400);
      *(undefined8 *)(puVar5 + -0xb8) = *(undefined8 *)(puVar5 + -0x178);
      *(undefined8 *)(puVar5 + -0xc0) = *(undefined8 *)(puVar5 + -0x180);
      *(undefined8 *)(puVar5 + -0xb0) = 1;
      puVar5[-0xa8] = 0;
      *(undefined8 *)(puVar5 + -0xa0) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8,puVar5 + -0xd0);
      FUN_10a099d88(puVar5 + -0x120,plVar8);
      FUN_10ac29f98(puVar5 + -0xd0,pppuVar7[0x12],puVar5 + -0x120);
      FUN_10a015bec(pppuVar7 + 0x81,puVar5 + -0xd0);
      FUN_10a044790(puVar5 + -0xc0);
      pppuVar9 = (undefined ***)(puVar5 + -0xb8);
      (*(code *)**(undefined8 **)(puVar5 + -0xb8))();
      pppuVar14 = *(undefined ****)(puVar5 + -200);
      if (pppuVar14 != (undefined ***)0x0) {
        pppuVar13 = pppuVar14 + 1;
        do {
          ppuVar6 = *pppuVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
          if (bVar4) {
            *pppuVar13 = (undefined **)((long)ppuVar6 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar6 == (undefined **)0x0) {
          (*(code *)(*pppuVar14)[2])(pppuVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar9 = pppuVar14;
        }
      }
      pppuVar14 = *(undefined ****)(puVar5 + -0x118);
      if (pppuVar14 != (undefined ***)0x0) {
        pppuVar13 = pppuVar14 + 1;
        do {
          ppuVar6 = *pppuVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
          if (bVar4) {
            *pppuVar13 = (undefined **)((long)ppuVar6 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar6 == (undefined **)0x0) {
          (*(code *)(*pppuVar14)[2])(pppuVar14);
          pppuVar9 = pppuVar14;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    if (pppuVar7[0x6f] == (undefined **)0x0) {
      *(undefined8 *)(puVar5 + -0x110) = 0;
      *(undefined8 *)(puVar5 + -0x108) = 0;
      ppuVar6 = pppuVar7[0x12];
      FUN_10a2421c8();
      plVar8 = (long *)ppuVar6[0x45];
      (**(code **)(*plVar8 + 0x20))(plVar8,puVar5 + -0x160);
      FUN_10a099d88(puVar5 + -0x110,plVar8);
      FUN_10ac29f98(puVar5 + -0xd0,pppuVar7[0x12],puVar5 + -0x110);
      FUN_10a015bec(pppuVar7 + 0x6f,puVar5 + -0xd0);
      FUN_10a044790(puVar5 + -0xc0);
      pppuVar9 = (undefined ***)(puVar5 + -0xb8);
      (*(code *)**(undefined8 **)(puVar5 + -0xb8))();
      pppuVar14 = *(undefined ****)(puVar5 + -200);
      if (pppuVar14 != (undefined ***)0x0) {
        pppuVar13 = pppuVar14 + 1;
        do {
          ppuVar6 = *pppuVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
          if (bVar4) {
            *pppuVar13 = (undefined **)((long)ppuVar6 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar6 == (undefined **)0x0) {
          (*(code *)(*pppuVar14)[2])(pppuVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar9 = pppuVar14;
        }
      }
      pppuVar14 = *(undefined ****)(puVar5 + -0x108);
      if (pppuVar14 != (undefined ***)0x0) {
        pppuVar13 = pppuVar14 + 1;
        do {
          ppuVar6 = *pppuVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
          if (bVar4) {
            *pppuVar13 = (undefined **)((long)ppuVar6 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar6 == (undefined **)0x0) {
          (*(code *)(*pppuVar14)[2])(pppuVar14);
          pppuVar9 = pppuVar14;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    if (pppuVar7[0x8c] == pppuVar7[0x8d]) {
      param_3 = (undefined *)0x0;
      param_2 = puVar5 + -0xd0;
      unaff_d8 = 0x8000000100;
      *(undefined8 *)(puVar5 + -0x168) = 0x100000000;
      *(undefined8 *)(puVar5 + -0x170) = 0x400000001;
      unaff_d9 = 0x100000001;
      do {
        *(undefined8 *)(puVar5 + -0x110) = 0;
        *(undefined8 *)(puVar5 + -0x108) = 0;
        ppuVar6 = pppuVar7[0x12];
        FUN_10a2421c8();
        plVar8 = (long *)ppuVar6[0x45];
        *(undefined8 *)(puVar5 + -0xcc) = unaff_d8;
        *(undefined8 *)(puVar5 + -0xbc) = *(undefined8 *)(puVar5 + -0x168);
        *(undefined8 *)(puVar5 + -0xc4) = *(undefined8 *)(puVar5 + -0x170);
        *(undefined8 *)(puVar5 + -0xb4) = 0x100000001;
        *(undefined4 *)(puVar5 + -0xd0) = 0;
        *(undefined4 *)(puVar5 + -0xac) = 0;
        puVar5[-0xa8] = 0;
        *(undefined8 *)(puVar5 + -0xa0) = 0;
        (**(code **)(*plVar8 + 0x20))(plVar8,puVar5 + -0xd0);
        FUN_10a099d88(puVar5 + -0x110,plVar8);
        FUN_10ac29f98(puVar5 + -0xd0,pppuVar7[0x12],puVar5 + -0x110);
        func_0x00010a067b00(pppuVar7 + 0x8c,puVar5 + -0xd0);
        FUN_10a044790(puVar5 + -0xc0);
        pppuVar9 = (undefined ***)(puVar5 + -0xb8);
        (*(code *)**(undefined8 **)(puVar5 + -0xb8))();
        pppuVar14 = *(undefined ****)(puVar5 + -200);
        if (pppuVar14 != (undefined ***)0x0) {
          pppuVar13 = pppuVar14 + 1;
          do {
            ppuVar6 = *pppuVar13;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
            if (bVar4) {
              *pppuVar13 = (undefined **)((long)ppuVar6 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppuVar6 == (undefined **)0x0) {
            (*(code *)(*pppuVar14)[2])(pppuVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppuVar9 = pppuVar14;
          }
        }
        pppuVar14 = *(undefined ****)(puVar5 + -0x108);
        if (pppuVar14 != (undefined ***)0x0) {
          pppuVar13 = pppuVar14 + 1;
          do {
            ppuVar6 = *pppuVar13;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
            if (bVar4) {
              *pppuVar13 = (undefined **)((long)ppuVar6 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppuVar6 == (undefined **)0x0) {
            (*(code *)(*pppuVar14)[2])(pppuVar14);
            pppuVar9 = pppuVar14;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        unaff_d8 = CONCAT44(((int)((ulong)unaff_d8 >> 0x20) + 1) / 2,((int)unaff_d8 + 1) / 2);
        uVar1 = (int)param_3 + 1;
        param_3 = (undefined *)(ulong)uVar1;
      } while (uVar1 != 5);
    }
    if (pppuVar7[0x8a] == (undefined **)0x0) {
      *(undefined8 *)(puVar5 + -0x110) = 0;
      *(undefined8 *)(puVar5 + -0x108) = 0;
      ppuVar6 = pppuVar7[0x12];
      FUN_10a2421c8();
      plVar8 = (long *)ppuVar6[0x45];
      *(undefined8 *)(puVar5 + -200) = *(undefined8 *)(puVar5 + -0x188);
      *(undefined8 *)(puVar5 + -0xd0) = *(undefined8 *)(puVar5 + -400);
      *(undefined8 *)(puVar5 + -0xb8) = 0x100000009;
      *(undefined8 *)(puVar5 + -0xc0) = 4;
      *(undefined8 *)(puVar5 + -0xb0) = 3;
      puVar5[-0xa8] = 0;
      *(undefined8 *)(puVar5 + -0xa0) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8,puVar5 + -0xd0);
      FUN_10a099d88(puVar5 + -0x110,plVar8);
      FUN_10ac29f98(puVar5 + -0xd0,pppuVar7[0x12],puVar5 + -0x110);
      FUN_10a015bec(pppuVar7 + 0x8a,puVar5 + -0xd0);
      FUN_10a044790(puVar5 + -0xc0);
      pppuVar9 = (undefined ***)(puVar5 + -0xb8);
      (*(code *)**(undefined8 **)(puVar5 + -0xb8))();
      pppuVar14 = *(undefined ****)(puVar5 + -200);
      if (pppuVar14 != (undefined ***)0x0) {
        pppuVar13 = pppuVar14 + 1;
        do {
          ppuVar6 = *pppuVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
          if (bVar4) {
            *pppuVar13 = (undefined **)((long)ppuVar6 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar6 == (undefined **)0x0) {
          (*(code *)(*pppuVar14)[2])(pppuVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar9 = pppuVar14;
        }
      }
      pppuVar14 = *(undefined ****)(puVar5 + -0x108);
      if (pppuVar14 != (undefined ***)0x0) {
        pppuVar13 = pppuVar14 + 1;
        do {
          ppuVar6 = *pppuVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
          if (bVar4) {
            *pppuVar13 = (undefined **)((long)ppuVar6 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar6 == (undefined **)0x0) {
          (*(code *)(*pppuVar14)[2])(pppuVar14);
          pppuVar9 = pppuVar14;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    if (pppuVar7[0x8f] == (undefined **)0x0) {
      *(undefined8 *)(puVar5 + -0x110) = 0;
      *(undefined8 *)(puVar5 + -0x108) = 0;
      ppuVar6 = pppuVar7[0x12];
      FUN_10a2421c8();
      plVar8 = (long *)ppuVar6[0x45];
      *(undefined8 *)(puVar5 + -200) = *(undefined8 *)(puVar5 + -0x188);
      *(undefined8 *)(puVar5 + -0xd0) = *(undefined8 *)(puVar5 + -400);
      *(undefined8 *)(puVar5 + -0xb8) = 0x100000009;
      *(undefined8 *)(puVar5 + -0xc0) = 4;
      *(undefined8 *)(puVar5 + -0xb0) = 3;
      puVar5[-0xa8] = 0;
      *(undefined8 *)(puVar5 + -0xa0) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8,puVar5 + -0xd0);
      FUN_10a099d88(puVar5 + -0x110,plVar8);
      pppuVar14 = (undefined ***)(puVar5 + -0xd0);
      FUN_10ac29f98(puVar5 + -0xd0,pppuVar7[0x12],puVar5 + -0x110);
      FUN_10a015bec(pppuVar7 + 0x8f,puVar5 + -0xd0);
      FUN_10a044790(puVar5 + -0xc0);
      pppuVar9 = (undefined ***)(puVar5 + -0xb8);
      (*(code *)**(undefined8 **)(puVar5 + -0xb8))();
      pppuVar13 = *(undefined ****)(puVar5 + -200);
      if (pppuVar13 != (undefined ***)0x0) {
        pppuVar7 = pppuVar13 + 1;
        do {
          ppuVar6 = *pppuVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)ppuVar6 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar6 == (undefined **)0x0) {
          (*(code *)(*pppuVar13)[2])(pppuVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar9 = pppuVar13;
        }
      }
      pppuVar13 = *(undefined ****)(puVar5 + -0x108);
      if (pppuVar13 != (undefined ***)0x0) {
        pppuVar7 = pppuVar13 + 1;
        do {
          ppuVar6 = *pppuVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)ppuVar6 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar6 == (undefined **)0x0) {
          (*(code *)(*pppuVar13)[2])(pppuVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar9 = pppuVar13;
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar5 + -0x78)) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010a0523dc(puVar5 + -0x110);
    pppuVar13 = pppuVar9;
    __Unwind_Resume();
    *(undefined ****)(puVar5 + -0x1b0) = pppuVar14;
    *(undefined ****)(puVar5 + -0x1a8) = pppuVar9;
    *(undefined1 **)(puVar5 + -0x1a0) = puVar5 + -0x10;
    *(code **)(puVar5 + -0x198) = FUN_10ac2b0d0;
    *(undefined8 *)(puVar5 + -0x1b8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    pppuVar7 = pppuVar13;
    if (pppuVar13[0x97] == (undefined **)0x0) {
      *(undefined8 *)(puVar5 + -0x218) = 0;
      FUN_10a063b58(puVar5 + -0x208,puVar5 + -0x209,puVar5 + -0x218);
      pppuVar7 = pppuVar13 + 0x97;
      FUN_10a02bf24(pppuVar7,puVar5 + -0x208);
      pppuVar14 = *(undefined ****)(puVar5 + -0x200);
      if (pppuVar14 != (undefined ***)0x0) {
        pppuVar9 = pppuVar14 + 1;
        do {
          ppuVar6 = *pppuVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
          if (bVar4) {
            *pppuVar9 = (undefined **)((long)ppuVar6 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar6 == (undefined **)0x0) {
          (*(code *)(*pppuVar14)[2])(pppuVar14);
          pppuVar7 = pppuVar14;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    if (pppuVar13[0x99] == (undefined **)0x0) {
      *(undefined ***)(puVar5 + -0x218) = pppuVar13[0x12];
      pppuVar14 = (undefined ***)(puVar5 + -0x208);
      FUN_10a8d1380(puVar5 + -0x208,puVar5 + -0x218,pppuVar13 + 0x97);
      FUN_10a015bec(pppuVar13 + 0x99,puVar5 + -0x208);
      FUN_10a044790(puVar5 + -0x1f8);
      pppuVar7 = (undefined ***)(puVar5 + -0x1f0);
      (*(code *)**(undefined8 **)(puVar5 + -0x1f0))();
      pppuVar13 = *(undefined ****)(puVar5 + -0x200);
      if (pppuVar13 != (undefined ***)0x0) {
        pppuVar9 = pppuVar13 + 1;
        do {
          ppuVar6 = *pppuVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
          if (bVar4) {
            *pppuVar9 = (undefined **)((long)ppuVar6 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar6 == (undefined **)0x0) {
          (*(code *)(*pppuVar13)[2])(pppuVar13);
          pppuVar7 = pppuVar13;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar5 + -0x1b8)) {
      return;
    }
    pcVar17 = FUN_10ac2b208;
    ___stack_chk_fail();
    pppuVar7 = pppuVar7 + -2;
    puVar5 = puVar5 + -0x220;
  } while( true );
}



/* Entry: 10ac2a1d0; end: 10ac2b0cf;  */

void FUN_10ac2a1d0(long *param_1)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar9;
  undefined1 *unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d11;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d10;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if ((long *)param_1[0xe1] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0xe1] + 0x68))();
    }
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xd0);
    plVar6 = param_1;
    FUN_10ac2b0d0();
    unaff_x23 = &UNK_10e508000;
    unaff_x22 = &UNK_10dd6b000;
    if (*(int *)((long)param_1 + 0x704) == 0) {
      lVar7 = param_1[0x83];
      lVar8 = param_1[0x84];
      if (lVar7 == lVar8) {
        unaff_x24 = (undefined1 *)((long)register0x00000008 + -0xd0);
        unaff_d9 = 0x10000000080;
        *(undefined8 *)((long)register0x00000008 + -0x168) = 0x100000000;
        *(undefined8 *)((long)register0x00000008 + -0x170) = 0x400000001;
        do {
          if (lVar7 != lVar8) {
            plVar6 = *(long **)(*(long *)(lVar8 + -0x10) + 0x268);
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0xb8))();
              if (1 < (uint)plVar6) goto LAB_10ac2ad10;
              lVar7 = param_1[0x83];
              lVar8 = param_1[0x84];
            }
            if (lVar7 == lVar8) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10ac2b014);
              (*pcVar5)();
            }
            plVar6 = *(long **)(*(long *)(lVar8 + -0x10) + 0x268);
            if ((plVar6 == (long *)0x0) || ((**(code **)(*plVar6 + 0xb0))(), (uint)plVar6 < 2))
            break;
          }
LAB_10ac2ad10:
          *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
          lVar7 = param_1[0x12];
          FUN_10a2421c8();
          plVar6 = *(long **)(lVar7 + 0x228);
          *(undefined8 *)((long)register0x00000008 + -0xcc) = unaff_d9;
          *(undefined8 *)((long)register0x00000008 + -0xbc) =
               *(undefined8 *)((long)register0x00000008 + -0x168);
          *(undefined8 *)((long)register0x00000008 + -0xc4) =
               *(undefined8 *)((long)register0x00000008 + -0x170);
          *(undefined8 *)((long)register0x00000008 + -0xb4) = 0x100000001;
          *(undefined4 *)((long)register0x00000008 + -0xd0) = 0;
          *(undefined4 *)((long)register0x00000008 + -0xac) = 0;
          *(undefined1 *)((long)register0x00000008 + -0xa8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
          (**(code **)(*plVar6 + 0x20))(plVar6,(undefined1 *)((long)register0x00000008 + -0xd0));
          FUN_10a099d88((undefined1 *)((long)register0x00000008 + -0x110),plVar6);
          FUN_10ac29f98((undefined1 *)((long)register0x00000008 + -0xd0),param_1[0x12],
                        (undefined1 *)((long)register0x00000008 + -0x110));
          func_0x00010a067b00(param_1 + 0x83,(undefined1 *)((long)register0x00000008 + -0xd0));
          FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xc0));
          (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))
                    ((undefined1 *)((long)register0x00000008 + -0xb8));
          plVar6 = *(long **)((long)register0x00000008 + -200);
          if (plVar6 != (long *)0x0) {
            plVar9 = plVar6 + 1;
            do {
              lVar7 = *plVar9;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar4) {
                *plVar9 = lVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar7 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
          unaff_x20 = *(long **)((long)register0x00000008 + -0x108);
          if (unaff_x20 != (long *)0x0) {
            plVar6 = unaff_x20 + 1;
            do {
              lVar7 = *plVar6;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar4) {
                *plVar6 = lVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar7 == 0) {
              (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
              __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
            }
          }
          unaff_d9 = CONCAT44(((int)((ulong)unaff_d9 >> 0x20) + 1) / 2,((int)unaff_d9 + 1) / 2);
          lVar7 = param_1[0x83];
          lVar8 = param_1[0x84];
        } while( true );
      }
      if (param_1[0x88] == 0) {
        *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
        lVar7 = param_1[0x12];
        FUN_10a2421c8();
        plVar6 = *(long **)(lVar7 + 0x228);
        *(section **)((long)register0x00000008 + -200) = &section_100000100;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x8000000000;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x100000009;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = 4;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 3;
        *(undefined1 *)((long)register0x00000008 + -0xa8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
        (**(code **)(*plVar6 + 0x20))(plVar6,(undefined1 *)((long)register0x00000008 + -0xd0));
        FUN_10a099d88((undefined1 *)((long)register0x00000008 + -0x110),plVar6);
        FUN_10ac29f98((undefined1 *)((long)register0x00000008 + -0xd0),param_1[0x12],
                      (undefined1 *)((long)register0x00000008 + -0x110));
        FUN_10a015bec(param_1 + 0x88,(undefined1 *)((long)register0x00000008 + -0xd0));
        FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xc0));
        plVar6 = (long *)((long)register0x00000008 + -0xb8);
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))();
        plVar9 = *(long **)((long)register0x00000008 + -200);
        if (plVar9 != (long *)0x0) {
          plVar2 = plVar9 + 1;
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
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            plVar6 = plVar9;
          }
        }
        unaff_x20 = *(long **)((long)register0x00000008 + -0x108);
        if (unaff_x20 != (long *)0x0) {
          plVar9 = unaff_x20 + 1;
          do {
            lVar7 = *plVar9;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *plVar9 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
            plVar6 = unaff_x20;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
      }
      if (param_1[0x86] == 0) {
        *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
        lVar7 = param_1[0x12];
        FUN_10a2421c8();
        plVar6 = *(long **)(lVar7 + 0x228);
        *(section **)((long)register0x00000008 + -200) = &section_100000100;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x8000000000;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x100000001;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = 4;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 1;
        *(undefined1 *)((long)register0x00000008 + -0xa8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
        (**(code **)(*plVar6 + 0x20))(plVar6,(undefined1 *)((long)register0x00000008 + -0xd0));
        FUN_10a099d88((undefined1 *)((long)register0x00000008 + -0x110),plVar6);
        FUN_10ac29f98((undefined1 *)((long)register0x00000008 + -0xd0),param_1[0x12],
                      (undefined1 *)((long)register0x00000008 + -0x110));
        FUN_10a015bec(param_1 + 0x86,(undefined1 *)((long)register0x00000008 + -0xd0));
        FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xc0));
        plVar6 = (long *)((long)register0x00000008 + -0xb8);
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))();
        plVar9 = *(long **)((long)register0x00000008 + -200);
        if (plVar9 != (long *)0x0) {
          plVar2 = plVar9 + 1;
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
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            plVar6 = plVar9;
          }
        }
        unaff_x20 = *(long **)((long)register0x00000008 + -0x108);
        if (unaff_x20 != (long *)0x0) {
          plVar9 = unaff_x20 + 1;
          do {
            lVar7 = *plVar9;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *plVar9 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
            plVar6 = unaff_x20;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
      }
    }
    *(section **)((long)register0x00000008 + -0x188) = &section_100000100;
    *(undefined8 *)((long)register0x00000008 + -400) = 0x20000000000;
    *(undefined8 *)((long)register0x00000008 + -0x178) = 0x100000001;
    *(undefined8 *)((long)register0x00000008 + -0x180) = 4;
    *(section **)((long)register0x00000008 + -0x158) = &section_100000100;
    *(undefined8 *)((long)register0x00000008 + -0x160) = 0x20000000000;
    *(undefined8 *)((long)register0x00000008 + -0x148) = 0x100000001;
    *(undefined8 *)((long)register0x00000008 + -0x150) = 4;
    unaff_d8 = 1;
    *(undefined8 *)((long)register0x00000008 + -0x140) = 1;
    *(undefined1 *)((long)register0x00000008 + -0x138) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
    if (param_1[0x6b] == 0) {
      *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
      lVar7 = param_1[0x12];
      FUN_10a2421c8();
      plVar6 = *(long **)(lVar7 + 0x228);
      (**(code **)(*plVar6 + 0x20))(plVar6,(undefined1 *)((long)register0x00000008 + -0x160));
      FUN_10a099d88((undefined1 *)((long)register0x00000008 + -0x110),plVar6);
      FUN_10ac29f98((undefined1 *)((long)register0x00000008 + -0xd0),param_1[0x12],
                    (undefined1 *)((long)register0x00000008 + -0x110));
      FUN_10a015bec(param_1 + 0x6b,(undefined1 *)((long)register0x00000008 + -0xd0));
      FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xc0));
      plVar6 = (long *)((long)register0x00000008 + -0xb8);
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))();
      plVar9 = *(long **)((long)register0x00000008 + -200);
      if (plVar9 != (long *)0x0) {
        plVar2 = plVar9 + 1;
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
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar6 = plVar9;
        }
      }
      unaff_x20 = *(long **)((long)register0x00000008 + -0x108);
      if (unaff_x20 != (long *)0x0) {
        plVar9 = unaff_x20 + 1;
        do {
          lVar7 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
          plVar6 = unaff_x20;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    if (param_1[0x6d] == 0) {
      *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
      lVar7 = param_1[0x12];
      FUN_10a2421c8();
      plVar6 = *(long **)(lVar7 + 0x228);
      (**(code **)(*plVar6 + 0x20))(plVar6,(undefined1 *)((long)register0x00000008 + -0x160));
      FUN_10a099d88((undefined1 *)((long)register0x00000008 + -0x110),plVar6);
      FUN_10ac29f98((undefined1 *)((long)register0x00000008 + -0xd0),param_1[0x12],
                    (undefined1 *)((long)register0x00000008 + -0x110));
      FUN_10a015bec(param_1 + 0x6d,(undefined1 *)((long)register0x00000008 + -0xd0));
      FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xc0));
      plVar6 = (long *)((long)register0x00000008 + -0xb8);
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))();
      plVar9 = *(long **)((long)register0x00000008 + -200);
      if (plVar9 != (long *)0x0) {
        plVar2 = plVar9 + 1;
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
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar6 = plVar9;
        }
      }
      unaff_x20 = *(long **)((long)register0x00000008 + -0x108);
      if (unaff_x20 != (long *)0x0) {
        plVar9 = unaff_x20 + 1;
        do {
          lVar7 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
          plVar6 = unaff_x20;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    if (param_1[0x78] == param_1[0x79]) {
      unaff_x22 = (undefined *)0x0;
      unaff_x23 = (undefined *)((long)register0x00000008 + -0xd0);
      *(undefined8 *)((long)register0x00000008 + -0x168) = 0x100000000;
      *(undefined8 *)((long)register0x00000008 + -0x170) = 0x400000001;
      unaff_d10 = 0x100000001;
      unaff_d9 = uRam00000001137ec6c8;
      do {
        *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
        lVar7 = param_1[0x12];
        FUN_10a2421c8();
        plVar6 = *(long **)(lVar7 + 0x228);
        *(undefined8 *)((long)register0x00000008 + -0xcc) = unaff_d9;
        *(undefined8 *)((long)register0x00000008 + -0xbc) =
             *(undefined8 *)((long)register0x00000008 + -0x168);
        *(undefined8 *)((long)register0x00000008 + -0xc4) =
             *(undefined8 *)((long)register0x00000008 + -0x170);
        *(undefined8 *)((long)register0x00000008 + -0xb4) = 0x100000001;
        *(undefined4 *)((long)register0x00000008 + -0xd0) = 0;
        *(undefined4 *)((long)register0x00000008 + -0xac) = 0;
        *(undefined1 *)((long)register0x00000008 + -0xa8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
        (**(code **)(*plVar6 + 0x20))(plVar6,(undefined1 *)((long)register0x00000008 + -0xd0));
        FUN_10a099d88((undefined1 *)((long)register0x00000008 + -0x110),plVar6);
        FUN_10ac29f98((undefined1 *)((long)register0x00000008 + -0xd0),param_1[0x12],
                      (undefined1 *)((long)register0x00000008 + -0x110));
        func_0x00010a067b00(param_1 + 0x78,(undefined1 *)((long)register0x00000008 + -0xd0));
        FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xc0));
        plVar6 = (long *)((long)register0x00000008 + -0xb8);
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))();
        plVar9 = *(long **)((long)register0x00000008 + -200);
        if (plVar9 != (long *)0x0) {
          plVar2 = plVar9 + 1;
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
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            plVar6 = plVar9;
          }
        }
        unaff_x20 = *(long **)((long)register0x00000008 + -0x108);
        if (unaff_x20 != (long *)0x0) {
          plVar9 = unaff_x20 + 1;
          do {
            lVar7 = *plVar9;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *plVar9 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
            plVar6 = unaff_x20;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        unaff_d9 = CONCAT44((int)((ulong)unaff_d9 >> 0x20) / 2,(int)unaff_d9 / 2);
        uVar1 = (int)unaff_x22 + 1;
        unaff_x22 = (undefined *)(ulong)uVar1;
      } while (uVar1 != 6);
    }
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0x100000001;
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0x100000000;
    *(undefined8 *)((long)register0x00000008 + -0xf8) =
         *(undefined8 *)((long)register0x00000008 + -0x178);
    *(undefined8 *)((long)register0x00000008 + -0x100) =
         *(undefined8 *)((long)register0x00000008 + -0x180);
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 1;
    *(undefined1 *)((long)register0x00000008 + -0xe8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    if (param_1[0x7b] == 0) {
      lVar7 = param_1[0x12];
      FUN_10a2421c8();
      plVar6 = *(long **)(lVar7 + 0x228);
      (**(code **)(*plVar6 + 0x20))(plVar6,(undefined1 *)((long)register0x00000008 + -0x110));
      FUN_10a0a25e4((undefined1 *)((long)register0x00000008 + -0x120),plVar6);
      FUN_10ac29f98((undefined1 *)((long)register0x00000008 + -0xd0),param_1[0x12],
                    (undefined1 *)((long)register0x00000008 + -0x120));
      FUN_10a015bec(param_1 + 0x7b,(undefined1 *)((long)register0x00000008 + -0xd0));
      FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xc0));
      plVar6 = (long *)((long)register0x00000008 + -0xb8);
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))();
      plVar9 = *(long **)((long)register0x00000008 + -200);
      if (plVar9 != (long *)0x0) {
        plVar2 = plVar9 + 1;
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
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar6 = plVar9;
        }
      }
      unaff_x20 = *(long **)((long)register0x00000008 + -0x118);
      if (unaff_x20 != (long *)0x0) {
        plVar9 = unaff_x20 + 1;
        do {
          lVar7 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
          plVar6 = unaff_x20;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    if (param_1[0x7d] == 0) {
      lVar7 = param_1[0x12];
      FUN_10a2421c8();
      plVar6 = *(long **)(lVar7 + 0x228);
      (**(code **)(*plVar6 + 0x20))(plVar6,(undefined1 *)((long)register0x00000008 + -0x110));
      FUN_10a0a25e4((undefined1 *)((long)register0x00000008 + -0x120),plVar6);
      FUN_10ac29f98((undefined1 *)((long)register0x00000008 + -0xd0),param_1[0x12],
                    (undefined1 *)((long)register0x00000008 + -0x120));
      FUN_10a015bec(param_1 + 0x7d,(undefined1 *)((long)register0x00000008 + -0xd0));
      FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xc0));
      plVar6 = (long *)((long)register0x00000008 + -0xb8);
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))();
      plVar9 = *(long **)((long)register0x00000008 + -200);
      if (plVar9 != (long *)0x0) {
        plVar2 = plVar9 + 1;
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
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar6 = plVar9;
        }
      }
      unaff_x20 = *(long **)((long)register0x00000008 + -0x118);
      if (unaff_x20 != (long *)0x0) {
        plVar9 = unaff_x20 + 1;
        do {
          lVar7 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
          plVar6 = unaff_x20;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    if (param_1[0x81] == 0) {
      *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
      lVar7 = param_1[0x12];
      FUN_10a2421c8();
      plVar6 = *(long **)(lVar7 + 0x228);
      *(undefined8 *)((long)register0x00000008 + -200) =
           *(undefined8 *)((long)register0x00000008 + -0x188);
      *(undefined8 *)((long)register0x00000008 + -0xd0) =
           *(undefined8 *)((long)register0x00000008 + -400);
      *(undefined8 *)((long)register0x00000008 + -0xb8) =
           *(undefined8 *)((long)register0x00000008 + -0x178);
      *(undefined8 *)((long)register0x00000008 + -0xc0) =
           *(undefined8 *)((long)register0x00000008 + -0x180);
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 1;
      *(undefined1 *)((long)register0x00000008 + -0xa8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
      (**(code **)(*plVar6 + 0x20))(plVar6,(undefined1 *)((long)register0x00000008 + -0xd0));
      FUN_10a099d88((undefined1 *)((long)register0x00000008 + -0x120),plVar6);
      FUN_10ac29f98((undefined1 *)((long)register0x00000008 + -0xd0),param_1[0x12],
                    (undefined1 *)((long)register0x00000008 + -0x120));
      FUN_10a015bec(param_1 + 0x81,(undefined1 *)((long)register0x00000008 + -0xd0));
      FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xc0));
      plVar6 = (long *)((long)register0x00000008 + -0xb8);
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))();
      plVar9 = *(long **)((long)register0x00000008 + -200);
      if (plVar9 != (long *)0x0) {
        plVar2 = plVar9 + 1;
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
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar6 = plVar9;
        }
      }
      unaff_x20 = *(long **)((long)register0x00000008 + -0x118);
      if (unaff_x20 != (long *)0x0) {
        plVar9 = unaff_x20 + 1;
        do {
          lVar7 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
          plVar6 = unaff_x20;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    if (param_1[0x6f] == 0) {
      *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
      lVar7 = param_1[0x12];
      FUN_10a2421c8();
      plVar6 = *(long **)(lVar7 + 0x228);
      (**(code **)(*plVar6 + 0x20))(plVar6,(undefined1 *)((long)register0x00000008 + -0x160));
      FUN_10a099d88((undefined1 *)((long)register0x00000008 + -0x110),plVar6);
      FUN_10ac29f98((undefined1 *)((long)register0x00000008 + -0xd0),param_1[0x12],
                    (undefined1 *)((long)register0x00000008 + -0x110));
      FUN_10a015bec(param_1 + 0x6f,(undefined1 *)((long)register0x00000008 + -0xd0));
      FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xc0));
      plVar6 = (long *)((long)register0x00000008 + -0xb8);
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))();
      plVar9 = *(long **)((long)register0x00000008 + -200);
      if (plVar9 != (long *)0x0) {
        plVar2 = plVar9 + 1;
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
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar6 = plVar9;
        }
      }
      unaff_x20 = *(long **)((long)register0x00000008 + -0x108);
      if (unaff_x20 != (long *)0x0) {
        plVar9 = unaff_x20 + 1;
        do {
          lVar7 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
          plVar6 = unaff_x20;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    if (param_1[0x8c] == param_1[0x8d]) {
      unaff_x22 = (undefined *)0x0;
      unaff_x23 = (undefined *)((long)register0x00000008 + -0xd0);
      unaff_d8 = 0x8000000100;
      *(undefined8 *)((long)register0x00000008 + -0x168) = 0x100000000;
      *(undefined8 *)((long)register0x00000008 + -0x170) = 0x400000001;
      unaff_d9 = 0x100000001;
      do {
        *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
        lVar7 = param_1[0x12];
        FUN_10a2421c8();
        plVar6 = *(long **)(lVar7 + 0x228);
        *(undefined8 *)((long)register0x00000008 + -0xcc) = unaff_d8;
        *(undefined8 *)((long)register0x00000008 + -0xbc) =
             *(undefined8 *)((long)register0x00000008 + -0x168);
        *(undefined8 *)((long)register0x00000008 + -0xc4) =
             *(undefined8 *)((long)register0x00000008 + -0x170);
        *(undefined8 *)((long)register0x00000008 + -0xb4) = 0x100000001;
        *(undefined4 *)((long)register0x00000008 + -0xd0) = 0;
        *(undefined4 *)((long)register0x00000008 + -0xac) = 0;
        *(undefined1 *)((long)register0x00000008 + -0xa8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
        (**(code **)(*plVar6 + 0x20))(plVar6,(undefined1 *)((long)register0x00000008 + -0xd0));
        FUN_10a099d88((undefined1 *)((long)register0x00000008 + -0x110),plVar6);
        FUN_10ac29f98((undefined1 *)((long)register0x00000008 + -0xd0),param_1[0x12],
                      (undefined1 *)((long)register0x00000008 + -0x110));
        func_0x00010a067b00(param_1 + 0x8c,(undefined1 *)((long)register0x00000008 + -0xd0));
        FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xc0));
        plVar6 = (long *)((long)register0x00000008 + -0xb8);
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))();
        plVar9 = *(long **)((long)register0x00000008 + -200);
        if (plVar9 != (long *)0x0) {
          plVar2 = plVar9 + 1;
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
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            plVar6 = plVar9;
          }
        }
        unaff_x20 = *(long **)((long)register0x00000008 + -0x108);
        if (unaff_x20 != (long *)0x0) {
          plVar9 = unaff_x20 + 1;
          do {
            lVar7 = *plVar9;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *plVar9 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
            plVar6 = unaff_x20;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        unaff_d8 = CONCAT44(((int)((ulong)unaff_d8 >> 0x20) + 1) / 2,((int)unaff_d8 + 1) / 2);
        uVar1 = (int)unaff_x22 + 1;
        unaff_x22 = (undefined *)(ulong)uVar1;
      } while (uVar1 != 5);
    }
    if (param_1[0x8a] == 0) {
      *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
      lVar7 = param_1[0x12];
      FUN_10a2421c8();
      plVar6 = *(long **)(lVar7 + 0x228);
      *(undefined8 *)((long)register0x00000008 + -200) =
           *(undefined8 *)((long)register0x00000008 + -0x188);
      *(undefined8 *)((long)register0x00000008 + -0xd0) =
           *(undefined8 *)((long)register0x00000008 + -400);
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x100000009;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 4;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 3;
      *(undefined1 *)((long)register0x00000008 + -0xa8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
      (**(code **)(*plVar6 + 0x20))(plVar6,(undefined1 *)((long)register0x00000008 + -0xd0));
      FUN_10a099d88((undefined1 *)((long)register0x00000008 + -0x110),plVar6);
      FUN_10ac29f98((undefined1 *)((long)register0x00000008 + -0xd0),param_1[0x12],
                    (undefined1 *)((long)register0x00000008 + -0x110));
      FUN_10a015bec(param_1 + 0x8a,(undefined1 *)((long)register0x00000008 + -0xd0));
      FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xc0));
      plVar6 = (long *)((long)register0x00000008 + -0xb8);
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))();
      plVar9 = *(long **)((long)register0x00000008 + -200);
      if (plVar9 != (long *)0x0) {
        plVar2 = plVar9 + 1;
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
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar6 = plVar9;
        }
      }
      unaff_x20 = *(long **)((long)register0x00000008 + -0x108);
      if (unaff_x20 != (long *)0x0) {
        plVar9 = unaff_x20 + 1;
        do {
          lVar7 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
          plVar6 = unaff_x20;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    if (param_1[0x8f] == 0) {
      *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
      lVar7 = param_1[0x12];
      FUN_10a2421c8();
      plVar6 = *(long **)(lVar7 + 0x228);
      *(undefined8 *)((long)register0x00000008 + -200) =
           *(undefined8 *)((long)register0x00000008 + -0x188);
      *(undefined8 *)((long)register0x00000008 + -0xd0) =
           *(undefined8 *)((long)register0x00000008 + -400);
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x100000009;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 4;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 3;
      *(undefined1 *)((long)register0x00000008 + -0xa8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
      (**(code **)(*plVar6 + 0x20))(plVar6,(undefined1 *)((long)register0x00000008 + -0xd0));
      FUN_10a099d88((undefined1 *)((long)register0x00000008 + -0x110),plVar6);
      unaff_x20 = (long *)((long)register0x00000008 + -0xd0);
      FUN_10ac29f98((undefined1 *)((long)register0x00000008 + -0xd0),param_1[0x12],
                    (undefined1 *)((long)register0x00000008 + -0x110));
      FUN_10a015bec(param_1 + 0x8f,(undefined1 *)((long)register0x00000008 + -0xd0));
      FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xc0));
      plVar6 = (long *)((long)register0x00000008 + -0xb8);
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))();
      plVar9 = *(long **)((long)register0x00000008 + -200);
      if (plVar9 != (long *)0x0) {
        plVar2 = plVar9 + 1;
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
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar6 = plVar9;
        }
      }
      plVar9 = *(long **)((long)register0x00000008 + -0x108);
      if (plVar9 != (long *)0x0) {
        plVar2 = plVar9 + 1;
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
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar6 = plVar9;
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x78)) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010a0523dc((undefined1 *)((long)register0x00000008 + -0x110));
    unaff_x19 = plVar6;
    __Unwind_Resume();
    *(long **)((long)register0x00000008 + -0x1b0) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x1a8) = plVar6;
    *(undefined1 **)((long)register0x00000008 + -0x1a0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x198) = FUN_10ac2b0d0;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x1a0);
    *(undefined8 *)((long)register0x00000008 + -0x1b8) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    param_1 = unaff_x19;
    if (unaff_x19[0x97] == 0) {
      *(undefined8 *)((long)register0x00000008 + -0x218) = 0;
      FUN_10a063b58((undefined1 *)((long)register0x00000008 + -0x208),
                    (undefined1 *)((long)register0x00000008 + -0x209),
                    (undefined1 *)((long)register0x00000008 + -0x218));
      param_1 = unaff_x19 + 0x97;
      FUN_10a02bf24(param_1,(undefined1 *)((long)register0x00000008 + -0x208));
      unaff_x20 = *(long **)((long)register0x00000008 + -0x200);
      if (unaff_x20 != (long *)0x0) {
        plVar6 = unaff_x20 + 1;
        do {
          lVar7 = *plVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
          param_1 = unaff_x20;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    if (unaff_x19[0x99] == 0) {
      *(long *)((long)register0x00000008 + -0x218) = unaff_x19[0x12];
      unaff_x20 = (long *)((long)register0x00000008 + -0x208);
      FUN_10a8d1380((undefined1 *)((long)register0x00000008 + -0x208),
                    (undefined1 *)((long)register0x00000008 + -0x218),unaff_x19 + 0x97);
      FUN_10a015bec(unaff_x19 + 0x99,(undefined1 *)((long)register0x00000008 + -0x208));
      FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x1f8));
      param_1 = (long *)((long)register0x00000008 + -0x1f0);
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0x1f0))();
      unaff_x19 = *(long **)((long)register0x00000008 + -0x200);
      if (unaff_x19 != (long *)0x0) {
        plVar6 = unaff_x19 + 1;
        do {
          lVar7 = *plVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*unaff_x19 + 0x10))(unaff_x19);
          param_1 = unaff_x19;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x1b8)) {
      return;
    }
    unaff_x30 = FUN_10ac2b208;
    ___stack_chk_fail();
    param_1 = param_1 + -2;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x220);
  } while( true );
}


