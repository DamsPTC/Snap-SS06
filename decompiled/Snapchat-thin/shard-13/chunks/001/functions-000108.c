/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a12e6e0; end: 10a12e71f;  */

void FUN_10a12e6e0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110ba6d18;
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
  return;
}



/* Entry: 10a12e720; end: 10a12e7af;  */

long FUN_10a12e720(long param_1)

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



/* Entry: 10a12e7b0; end: 10a12e857;  */

void FUN_10a12e7b0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_41;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  lVar3 = param_1[1];
  lVar1 = lVar2;
  if (lVar3 != lVar2) {
    do {
      if (*(uint *)(lVar3 + -8) != 0xffffffff) {
        (*(code *)(&PTR_FUN_110ba6d30)[*(uint *)(lVar3 + -8)])(&uStack_41,lVar3 + -0x20);
      }
      *(undefined4 *)(lVar3 + -8) = 0xffffffff;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != lVar2);
    lVar1 = *param_1;
  }
  param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10a12e858; end: 10a12e877;  */

void FUN_10a12e858(void)

{
  return;
}



/* Entry: 10a12e878; end: 10a12e8e7;  */

/* WARNING: Removing unreachable block (ram,0x00010a12e8ac) */

void FUN_10a12e878(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  lVar3 = param_1[1];
  lVar1 = lVar2;
  if (lVar3 != lVar2) {
    do {
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != lVar2);
    lVar1 = *param_1;
  }
  param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10a12e8e8; end: 10a12e943;  */

void FUN_10a12e8e8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a142e50();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a12e944; end: 10a12f033;  */

void FUN_10a12e944(undefined **param_1,undefined ***param_2)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined1 uVar10;
  uint uVar11;
  ulong uVar12;
  code *pcVar13;
  undefined *puVar14;
  undefined ***pppuVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 *unaff_x21;
  undefined4 *unaff_x22;
  undefined8 *unaff_x23;
  long lVar25;
  long **unaff_x24;
  long *plVar26;
  undefined8 *unaff_x27;
  undefined8 *puVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  long lVar30;
  long *plStack_188;
  long *plStack_180;
  undefined4 uStack_174;
  long **pplStack_170;
  undefined8 *puStack_168;
  undefined4 *puStack_160;
  undefined8 *puStack_158;
  undefined **ppuStack_150;
  undefined8 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
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
  long lStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ushort *)param_2;
  if (uVar1 - 1 < 0x10) {
    unaff_x21 = (undefined8 *)*param_1;
    unaff_x22 = (undefined4 *)*unaff_x21;
    unaff_x23 = (undefined8 *)unaff_x21[1];
    uVar11 = 1;
    if (*(byte *)((long)param_2 + 2) == 2) {
      uVar11 = 2;
    }
    unaff_x24 = (long **)(ulong)uVar11;
    param_1 = (undefined **)0x48;
    __Znwm();
    param_1[1] = (undefined *)0x0;
    param_1[2] = (undefined *)0x0;
    *param_1 = (undefined *)&PTR_FUN_110ba6d80;
    uVar28 = *unaff_x22;
    puVar14 = (undefined *)*unaff_x23;
    param_1[4] = (undefined *)0x0;
    param_1[5] = (undefined *)0x0;
    ppuStack_120 = param_1 + 3;
    *ppuStack_120 = (undefined *)&PTR_FUN_110ba6858;
    *(undefined4 *)(param_1 + 6) = uVar28;
    param_1[7] = puVar14;
    *(ushort *)(param_1 + 8) = uVar1;
    *(char *)((long)param_1 + 0x42) = (char)uVar11;
    plVar24 = *(long **)unaff_x21[2];
    plStack_128 = (long *)((long *)unaff_x21[2])[1];
    ppuStack_118 = param_1;
    if (plVar24 != plStack_128) {
      unaff_x23 = (undefined8 *)0x9ddfea08eb382d69;
      unaff_x24 = &plStack_100;
      do {
        unaff_x22 = *(undefined4 **)(*plVar24 + 0x38);
        puStack_108 = (undefined8 *)0x0;
        puStack_110 = (undefined *)0x0;
        lStack_f8 = 0;
        plStack_100 = (long *)0x0;
        fStack_f0 = (float)unaff_x22[0xe];
        param_2 = *(undefined ****)(unaff_x22 + 8);
        FUN_10a1302b8(&puStack_110);
        puVar27 = puStack_108;
        for (plVar26 = *(long **)(unaff_x22 + 10); puStack_108 = puVar27, plVar18 = plStack_100,
            plVar26 != (long *)0x0; plVar26 = (long *)*plVar26) {
          uVar12 = plVar26[2];
          uVar17 = ((ulong)(uint)((int)uVar12 << 3) + 8 ^ uVar12 >> 0x20) * -0x622015f714c7d297;
          uVar17 = (uVar12 >> 0x20 ^ uVar17 >> 0x2f ^ uVar17) * -0x622015f714c7d297;
          unaff_x21 = (undefined8 *)((uVar17 ^ uVar17 >> 0x2f) * -0x622015f714c7d297);
          if (puVar27 != (undefined8 *)0x0) {
            uVar17 = (long)puVar27 - 1;
            if (((ulong)puVar27 & uVar17) == 0) {
              unaff_x27 = (undefined8 *)((ulong)unaff_x21 & uVar17);
            }
            else {
              unaff_x27 = unaff_x21;
              if (puVar27 <= unaff_x21) {
                uVar20 = 0;
                if (puVar27 != (undefined8 *)0x0) {
                  uVar20 = (ulong)unaff_x21 / (ulong)puVar27;
                }
                unaff_x27 = (undefined8 *)((long)unaff_x21 - uVar20 * (long)puVar27);
              }
            }
            plVar18 = *(long **)(puStack_110 + (long)unaff_x27 * 8);
            if (plVar18 != (long *)0x0) {
              do {
                while( true ) {
                  plVar18 = (long *)*plVar18;
                  if (plVar18 == (long *)0x0) goto LAB_10a12eafc;
                  puVar19 = (undefined8 *)plVar18[1];
                  if (puVar19 != unaff_x21) break;
                  if (plVar18[2] == uVar12) goto LAB_10a12ec5c;
                }
                if (((ulong)puVar27 & uVar17) == 0) {
                  puVar19 = (undefined8 *)((ulong)puVar19 & uVar17);
                }
                else if (puVar27 <= puVar19) {
                  uVar20 = 0;
                  if (puVar27 != (undefined8 *)0x0) {
                    uVar20 = (ulong)puVar19 / (ulong)puVar27;
                  }
                  puVar19 = (undefined8 *)((long)puVar19 - uVar20 * (long)puVar27);
                }
              } while (puVar19 == unaff_x27);
            }
          }
LAB_10a12eafc:
          plVar18 = (long *)0x68;
          __Znwm();
          *plVar18 = 0;
          plVar18[1] = (long)unaff_x21;
          lVar8 = plVar26[3];
          lVar30 = plVar26[2];
          plVar18[3] = plVar26[3];
          plVar18[2] = lVar30;
          if (lVar8 != 0) {
            plVar16 = (long *)(lVar8 + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar3) {
                *plVar16 = *plVar16 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          ppuStack_c0 = (undefined **)(plVar18 + 4);
          *(undefined1 *)(plVar18 + 0xc) = 3;
          if (*(char *)(plVar26 + 0xc) == '\0') {
            uVar10 = 0;
          }
          else {
            param_2 = (undefined ***)(plVar26 + 4);
            FUN_10a005398(&ppuStack_c0);
            uVar10 = *(undefined1 *)(plVar26 + 0xc);
          }
          *(undefined1 *)(plVar18 + 0xc) = uVar10;
          if ((puVar27 == (undefined8 *)0x0) ||
             (fStack_f0 * (float)puVar27 < (float)(lStack_f8 + 1))) {
            uVar12 = 1;
            if ((undefined8 *)0x2 < puVar27) {
              uVar12 = (ulong)(((ulong)puVar27 & (long)puVar27 - 1U) != 0);
            }
            param_2 = (undefined ***)(uVar12 | (long)puVar27 << 1);
            pppuVar15 = (undefined ***)(long)((float)(lStack_f8 + 1) / fStack_f0);
            if (param_2 <= pppuVar15) {
              param_2 = pppuVar15;
            }
            FUN_10a1302b8(&puStack_110);
            puVar27 = puStack_108;
            if (((ulong)puStack_108 & (long)puStack_108 - 1U) == 0) {
              unaff_x27 = (undefined8 *)((long)puStack_108 - 1U & (ulong)unaff_x21);
            }
            else {
              unaff_x27 = unaff_x21;
              if (puStack_108 <= unaff_x21) {
                uVar12 = 0;
                if (puStack_108 != (undefined8 *)0x0) {
                  uVar12 = (ulong)unaff_x21 / (ulong)puStack_108;
                }
                unaff_x27 = (undefined8 *)((long)unaff_x21 - uVar12 * (long)puStack_108);
              }
            }
          }
          plVar16 = *(long **)(puStack_110 + (long)unaff_x27 * 8);
          if (plVar16 == (long *)0x0) {
            *plVar18 = (long)plStack_100;
            *(long ***)(puStack_110 + (long)unaff_x27 * 8) = unaff_x24;
            plStack_100 = plVar18;
            if (*plVar18 != 0) {
              puVar19 = *(undefined8 **)(*plVar18 + 8);
              if (((ulong)puVar27 & (long)puVar27 - 1U) == 0) {
                puVar19 = (undefined8 *)((ulong)puVar19 & (long)puVar27 - 1U);
              }
              else if (puVar27 <= puVar19) {
                uVar12 = 0;
                if (puVar27 != (undefined8 *)0x0) {
                  uVar12 = (ulong)puVar19 / (ulong)puVar27;
                }
                puVar19 = (undefined8 *)((long)puVar19 - uVar12 * (long)puVar27);
              }
              *(long **)(puStack_110 + (long)puVar19 * 8) = plVar18;
            }
          }
          else {
            *plVar18 = *plVar16;
            *plVar16 = (long)plVar18;
          }
          lStack_f8 = lStack_f8 + 1;
LAB_10a12ec5c:
          puVar27 = puStack_108;
        }
        for (; plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
          uVar12 = *(ulong *)(unaff_x22 + 8);
          pppuVar15 = param_2;
          if (uVar12 != 0) {
            uVar17 = plVar18[2];
            uVar20 = ((ulong)(uint)((int)uVar17 << 3) + 8 ^ uVar17 >> 0x20) * -0x622015f714c7d297;
            uVar20 = (uVar17 >> 0x20 ^ uVar20 >> 0x2f ^ uVar20) * -0x622015f714c7d297;
            uVar20 = (uVar20 ^ uVar20 >> 0x2f) * -0x622015f714c7d297;
            uVar21 = uVar12 - 1;
            if ((uVar12 & uVar21) == 0) {
              uVar22 = uVar20 & uVar21;
            }
            else {
              uVar22 = uVar20;
              if (uVar12 <= uVar20) {
                uVar22 = 0;
                if (uVar12 != 0) {
                  uVar22 = uVar20 / uVar12;
                }
                uVar22 = uVar20 - uVar22 * uVar12;
              }
            }
            plVar26 = *(long **)(*(long *)(unaff_x22 + 6) + uVar22 * 8);
            if (plVar26 != (long *)0x0) {
LAB_10a12ecd4:
              while (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0) {
                uVar23 = plVar26[1];
                if (uVar23 != uVar20) goto LAB_10a12ecf8;
                if (plVar26[2] == uVar17) {
                  if ((char)plVar18[0xc] == '\x01') {
                    pcVar13 = (code *)plVar18[4];
                    if (ppuStack_118 != (undefined **)0x0) {
                      ppuVar7 = ppuStack_118 + 1;
                      do {
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
                        if (bVar3) {
                          *ppuVar7 = *ppuVar7 + 1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                    }
                    pppuVar15 = (undefined ***)(plVar18 + 4);
                    ppuStack_c0 = ppuStack_120;
                    ppuStack_b8 = ppuStack_118;
                    (*pcVar13)(&ppuStack_c0);
                    if (ppuStack_b8 != (undefined **)0x0) {
                      ppuVar7 = ppuStack_b8 + 1;
                      do {
                        puVar14 = *ppuVar7;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
                        if (bVar3) {
                          *ppuVar7 = puVar14 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                        ppuVar6 = ppuStack_b8;
                      } while (cVar2 != '\0');
                      goto LAB_10a12edc8;
                    }
                  }
                  else if ((char)plVar18[0xc] == '\x02') {
                    plVar26 = plVar18 + 4;
                    FUN_10a688b40();
                    ppuVar7 = ppuStack_118;
                    if (plVar26 == (long *)0x0) {
                      pppuVar15 = (undefined ***)0x0;
                      if (param_2 != (undefined ***)0x0) {
                        lStack_b0 = plVar18[4];
                        lStack_a8 = plVar18[5];
                        if (lStack_a8 != 0) {
                          plVar26 = (long *)(lStack_a8 + 8);
                          do {
                            cVar2 = '\x01';
                            bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                            if (bVar3) {
                              *plVar26 = *plVar26 + 1;
                              cVar2 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar2 != '\0');
                        }
                        ppuStack_d0 = ppuStack_120;
                        ppuStack_c8 = ppuStack_118;
                        if (ppuStack_118 == (undefined **)0x0) {
                          ppuStack_98 = (undefined **)0x0;
                        }
                        else {
                          ppuVar6 = ppuStack_118 + 1;
                          do {
                            cVar2 = '\x01';
                            bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                            if (bVar3) {
                              *ppuVar6 = *ppuVar6 + 1;
                              cVar2 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar2 != '\0');
                          ppuStack_98 = ppuStack_118;
                          do {
                            cVar2 = '\x01';
                            bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                            if (bVar3) {
                              *ppuVar6 = *ppuVar6 + 1;
                              cVar2 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar2 != '\0');
                        }
                        ppuStack_a0 = ppuStack_120;
                        ppuStack_b8 = &PTR_FUN_110ba6dc0;
                        ppuStack_d8 = (undefined **)0x0;
                        uStack_e0 = 0;
                        ppuStack_c0 = (undefined **)FUN_10a13075c;
                        pppuVar15 = &ppuStack_c0;
                        FUN_10a4634ec(param_2);
                        (*(code *)*ppuStack_b8)(&ppuStack_b8);
                        if (ppuVar7 != (undefined **)0x0) {
                          ppuVar6 = ppuVar7 + 1;
                          do {
                            puVar14 = *ppuVar6;
                            cVar2 = '\x01';
                            bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                            if (bVar3) {
                              *ppuVar6 = puVar14 + -1;
                              cVar2 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar2 != '\0');
                          if (puVar14 == (undefined *)0x0) {
                            (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
                            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
                          }
                        }
                        if (ppuStack_d8 != (undefined **)0x0) {
                          ppuVar7 = ppuStack_d8 + 1;
                          do {
                            puVar14 = *ppuVar7;
                            cVar2 = '\x01';
                            bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
                            if (bVar3) {
                              *ppuVar7 = puVar14 + -1;
                              cVar2 = ExclusiveMonitorsStatus();
                            }
                            ppuVar6 = ppuStack_d8;
                          } while (cVar2 != '\0');
LAB_10a12edc8:
                          if (puVar14 == (undefined *)0x0) {
                            (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
                            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
                          }
                        }
                      }
                    }
                    else {
                      *plVar26 = CONCAT44((int)((ulong)*plVar26 >> 0x20) + 1,(int)*plVar26 + 1);
                      pppuVar15 = &ppuStack_120;
                      FUN_10a130558(plVar18[4]);
                      iVar4 = *(int *)((long)plVar26 + 4) + -1;
                      *(int *)((long)plVar26 + 4) = iVar4;
                      if (iVar4 == 0) {
                        *(undefined4 *)plVar26 = 0;
                      }
                    }
                  }
                  break;
                }
              }
            }
          }
LAB_10a12eeec:
          param_2 = pppuVar15;
        }
        param_1 = &puStack_110;
        FUN_10a1304d8();
        plVar24 = plVar24 + 2;
      } while (plVar24 != plStack_128);
      if (ppuStack_118 == (undefined **)0x0) goto LAB_10a12ef4c;
    }
    ppuVar6 = ppuStack_118;
    ppuVar7 = ppuStack_118 + 1;
    do {
      puVar14 = *ppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
      if (bVar3) {
        *ppuVar7 = puVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar14 == (undefined *)0x0) {
      (**(code **)(*ppuStack_118 + 0x10))(ppuStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_1 = ppuVar6;
    }
  }
LAB_10a12ef4c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b8)(&ppuStack_b8);
  FUN_10a1307d4(&ppuStack_d0);
  func_0x00010a004dac(&uStack_e0);
  FUN_10a1304d8(&puStack_110);
  FUN_10a1307d4(&ppuStack_120);
  ppuVar7 = param_1;
  __Unwind_Resume();
  pcStack_138 = FUN_10a12f034;
  puVar19 = (undefined8 *)*ppuVar7;
  uVar28 = *(undefined4 *)*puVar19;
  lVar25 = *(long *)puVar19[1];
  puVar27 = (undefined8 *)puVar19[2];
  lVar30 = puVar19[3];
  lVar8 = puVar19[4];
  uVar11 = (uint)*(byte *)param_2;
  uStack_174 = uVar28;
  pplStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  puStack_160 = unaff_x22;
  puStack_158 = unaff_x21;
  ppuStack_150 = param_1;
  puStack_148 = &uStack_e0;
  puStack_140 = &stack0xfffffffffffffff0;
  if (*(byte *)param_2 < 5) {
    if (uVar11 - 1 < 2) {
      func_0x00010a143e48(lVar8,uVar28,&uStack_174);
      lVar9 = lVar30 + 0x80;
      func_0x00010a143d78(lVar9,uVar28,&uStack_174);
      lVar30 = lVar9 + 0x20;
      if ((*(char *)(lVar8 + 0x30) == '\x01') && (*(long *)(lVar8 + 0x28) != lVar25)) {
        FUN_10a1170c4(*(undefined4 *)(lVar9 + 0x20),*(undefined4 *)(lVar9 + 0x24),uVar28,
                      *(long *)(lVar8 + 0x28),0,*puVar27,puVar27[1]);
      }
      uVar28 = *(undefined4 *)((long)param_2 + 4);
      lVar9 = 0;
      if (*(byte *)param_2 != 1) {
        lVar9 = 4;
      }
    }
    else {
      if (1 < uVar11 - 3) {
        return;
      }
      lVar8 = lVar8 + 0x18;
      func_0x00010a143e48(lVar8,uVar28,&uStack_174);
      lVar30 = lVar30 + 0x80;
      func_0x00010a143d78(lVar30,uVar28,&uStack_174);
      if ((*(char *)(lVar8 + 0x30) == '\x01') && (*(long *)(lVar8 + 0x28) != lVar25)) {
        FUN_10a1170c4(*(undefined4 *)(lVar30 + 0x28),*(undefined4 *)(lVar30 + 0x2c),uVar28,
                      *(long *)(lVar8 + 0x28),1,*puVar27,puVar27[1]);
      }
      uVar28 = *(undefined4 *)((long)param_2 + 4);
      lVar9 = 0x28;
      if (*(byte *)param_2 != 3) {
        lVar9 = 0x2c;
      }
    }
    *(undefined4 *)(lVar30 + lVar9) = uVar28;
    *(long *)(lVar8 + 0x28) = lVar25;
    *(undefined1 *)(lVar8 + 0x30) = 1;
  }
  else {
    if (uVar11 == 5) {
      plVar18 = (long *)0x48;
      __Znwm();
      plVar16 = plVar18 + 1;
      *plVar16 = 0;
      plVar18[2] = 0;
      *plVar18 = (long)&PTR_FUN_110ba7540;
      uVar29 = *(undefined4 *)((long)param_2 + 4);
      plVar18[4] = 0;
      plVar18[5] = 0;
      plStack_188 = plVar18 + 3;
      *plStack_188 = (long)&PTR_FUN_110ba68c8;
      *(undefined4 *)(plVar18 + 6) = uVar28;
      plVar18[7] = lVar25;
      *(undefined1 *)(plVar18 + 8) = 0;
      *(undefined4 *)((long)plVar18 + 0x44) = uVar29;
      plVar26 = (long *)puVar27[1];
      plStack_180 = plVar18;
      for (plVar24 = (long *)*puVar27; plVar24 != plVar26; plVar24 = plVar24 + 2) {
        FUN_10a117798(*(undefined8 *)(*plVar24 + 0x48),&plStack_188);
      }
      do {
        lVar8 = *plVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      if (uVar11 != 6) {
        return;
      }
      plVar18 = (long *)0x48;
      __Znwm();
      plVar16 = plVar18 + 1;
      *plVar16 = 0;
      plVar18[2] = 0;
      *plVar18 = (long)&PTR_FUN_110ba7540;
      uVar29 = *(undefined4 *)((long)param_2 + 4);
      plVar18[4] = 0;
      plVar18[5] = 0;
      plStack_188 = plVar18 + 3;
      *plStack_188 = (long)&PTR_FUN_110ba68c8;
      *(undefined4 *)(plVar18 + 6) = uVar28;
      plVar18[7] = lVar25;
      *(undefined1 *)(plVar18 + 8) = 1;
      *(undefined4 *)((long)plVar18 + 0x44) = uVar29;
      plVar26 = (long *)puVar27[1];
      plStack_180 = plVar18;
      for (plVar24 = (long *)*puVar27; plVar24 != plVar26; plVar24 = plVar24 + 2) {
        FUN_10a117798(*(undefined8 *)(*plVar24 + 0x48),&plStack_188);
      }
      do {
        lVar8 = *plVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lVar8 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    }
  }
  return;
LAB_10a12ecf8:
  if ((uVar12 & uVar21) == 0) {
    uVar23 = uVar23 & uVar21;
  }
  else if (uVar12 <= uVar23) {
    uVar5 = 0;
    if (uVar12 != 0) {
      uVar5 = uVar23 / uVar12;
    }
    uVar23 = uVar23 - uVar5 * uVar12;
  }
  if (uVar23 != uVar22) goto LAB_10a12eeec;
  goto LAB_10a12ecd4;
}



/* Entry: 10a12f034; end: 10a12f2db;  */

void FUN_10a12f034(undefined8 *param_1,byte *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long *plStack_58;
  long *plStack_50;
  undefined4 uStack_44;
  
  param_1 = (undefined8 *)*param_1;
  uVar13 = *(undefined4 *)*param_1;
  lVar12 = *(long *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  lVar6 = param_1[3];
  lVar5 = param_1[4];
  uVar9 = (uint)*param_2;
  uStack_44 = uVar13;
  if (*param_2 < 5) {
    if (uVar9 - 1 < 2) {
      func_0x00010a143e48(lVar5,uVar13,&uStack_44);
      lVar8 = lVar6 + 0x80;
      func_0x00010a143d78(lVar8,uVar13,&uStack_44);
      lVar6 = lVar8 + 0x20;
      if ((*(char *)(lVar5 + 0x30) == '\x01') && (*(long *)(lVar5 + 0x28) != lVar12)) {
        FUN_10a1170c4(*(undefined4 *)(lVar8 + 0x20),*(undefined4 *)(lVar8 + 0x24),uVar13,
                      *(long *)(lVar5 + 0x28),0,*puVar1,puVar1[1]);
      }
      uVar13 = *(undefined4 *)(param_2 + 4);
      lVar8 = 0;
      if (*param_2 != 1) {
        lVar8 = 4;
      }
    }
    else {
      if (1 < uVar9 - 3) {
        return;
      }
      lVar5 = lVar5 + 0x18;
      func_0x00010a143e48(lVar5,uVar13,&uStack_44);
      lVar6 = lVar6 + 0x80;
      func_0x00010a143d78(lVar6,uVar13,&uStack_44);
      if ((*(char *)(lVar5 + 0x30) == '\x01') && (*(long *)(lVar5 + 0x28) != lVar12)) {
        FUN_10a1170c4(*(undefined4 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x2c),uVar13,
                      *(long *)(lVar5 + 0x28),1,*puVar1,puVar1[1]);
      }
      uVar13 = *(undefined4 *)(param_2 + 4);
      lVar8 = 0x28;
      if (*param_2 != 3) {
        lVar8 = 0x2c;
      }
    }
    *(undefined4 *)(lVar6 + lVar8) = uVar13;
    *(long *)(lVar5 + 0x28) = lVar12;
    *(undefined1 *)(lVar5 + 0x30) = 1;
  }
  else {
    if (uVar9 == 5) {
      plVar7 = (long *)0x48;
      __Znwm();
      plVar11 = plVar7 + 1;
      *plVar11 = 0;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_110ba7540;
      uVar14 = *(undefined4 *)(param_2 + 4);
      plVar7[4] = 0;
      plVar7[5] = 0;
      plStack_58 = plVar7 + 3;
      *plStack_58 = (long)&PTR_FUN_110ba68c8;
      *(undefined4 *)(plVar7 + 6) = uVar13;
      plVar7[7] = lVar12;
      *(undefined1 *)(plVar7 + 8) = 0;
      *(undefined4 *)((long)plVar7 + 0x44) = uVar14;
      plVar2 = (long *)puVar1[1];
      plStack_50 = plVar7;
      for (plVar10 = (long *)*puVar1; plVar10 != plVar2; plVar10 = plVar10 + 2) {
        FUN_10a117798(*(undefined8 *)(*plVar10 + 0x48),&plStack_58);
      }
      do {
        lVar5 = *plVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      if (uVar9 != 6) {
        return;
      }
      plVar7 = (long *)0x48;
      __Znwm();
      plVar11 = plVar7 + 1;
      *plVar11 = 0;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_110ba7540;
      uVar14 = *(undefined4 *)(param_2 + 4);
      plVar7[4] = 0;
      plVar7[5] = 0;
      plStack_58 = plVar7 + 3;
      *plStack_58 = (long)&PTR_FUN_110ba68c8;
      *(undefined4 *)(plVar7 + 6) = uVar13;
      plVar7[7] = lVar12;
      *(undefined1 *)(plVar7 + 8) = 1;
      *(undefined4 *)((long)plVar7 + 0x44) = uVar14;
      plVar2 = (long *)puVar1[1];
      plStack_50 = plVar7;
      for (plVar10 = (long *)*puVar1; plVar10 != plVar2; plVar10 = plVar10 + 2) {
        FUN_10a117798(*(undefined8 *)(*plVar10 + 0x48),&plStack_58);
      }
      do {
        lVar5 = *plVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (lVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10a12f2dc; end: 10a12f9b7;  */

void FUN_10a12f2dc(undefined8 *param_1,code *******param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  code *pcVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  code ******ppppppcVar12;
  code *******pppppppcVar13;
  code *******pppppppcVar14;
  undefined1 uVar15;
  ulong uVar16;
  code ****ppppcVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  code *******pppppppcVar21;
  code *****pppppcVar22;
  ulong uVar23;
  long *plVar24;
  code ******ppppppcVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined **ppuVar30;
  long *plVar31;
  code ******ppppppcVar32;
  code *******pppppppcVar33;
  long lVar34;
  undefined *puVar35;
  long *plVar36;
  code ******unaff_x27;
  code ******unaff_x28;
  code ******ppppppcVar37;
  long lVar38;
  code *****pppppcVar39;
  code ******ppppppcStack_270;
  code ******ppppppcStack_268;
  code ******ppppppcStack_260;
  code *****pppppcStack_258;
  code *****pppppcStack_250;
  code *****pppppcStack_240;
  code *****pppppcStack_238;
  code ****ppppcStack_230;
  long lStack_228;
  float fStack_220;
  undefined8 uStack_210;
  code ******ppppppcStack_208;
  code ******ppppppcStack_200;
  code ******ppppppcStack_1f8;
  code ******ppppppcStack_1f0;
  code ******ppppppcStack_1e8;
  code ******ppppppcStack_1e0;
  code *****pppppcStack_1d8;
  code ******ppppppcStack_1d0;
  code ******ppppppcStack_1c8;
  long lStack_1b0;
  code *****pppppcStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  code *****pppppcStack_108;
  long *plStack_100;
  long lStack_f8;
  float fStack_f0;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  code *****pppppcStack_d0;
  undefined **ppuStack_c8;
  code *****pppppcStack_c0;
  undefined **ppuStack_b8;
  long lStack_b0;
  long lStack_a8;
  code *****pppppcStack_a0;
  undefined **ppuStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = (undefined8 *)*param_1;
  uVar3 = *(undefined4 *)*param_1;
  puVar35 = *(undefined **)param_1[1];
  ppuVar10 = (undefined **)0x58;
  pppppppcVar13 = param_2;
  __Znwm();
  ppuVar10[1] = (undefined *)0x0;
  ppuVar10[2] = (undefined *)0x0;
  *ppuVar10 = (undefined *)&PTR_FUN_110ba6de8;
  ppuVar10[4] = (undefined *)0x0;
  ppuVar10[5] = (undefined *)0x0;
  pppppcStack_120 = (code *****)(ppuVar10 + 3);
  *pppppcStack_120 = (code ****)&PTR_FUN_110ba69a8;
  *(undefined4 *)(ppuVar10 + 6) = uVar3;
  ppuVar10[7] = puVar35;
  ppppppcVar12 = *param_2;
  ppuVar10[9] = (undefined *)param_2[1];
  ppuVar10[8] = (undefined *)ppppppcVar12;
  ppuVar10[10] = (undefined *)param_2[2];
  plVar31 = *(long **)param_1[2];
  plVar2 = (long *)((long *)param_1[2])[1];
  ppuStack_118 = ppuVar10;
  if (plVar31 == plVar2) {
LAB_10a12f8a0:
    ppuVar11 = ppuStack_118;
    ppuVar30 = ppuStack_118 + 1;
    do {
      puVar35 = *ppuVar30;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppuVar30,0x10);
      if (bVar6) {
        *ppuVar30 = puVar35 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar35 == (undefined *)0x0) {
      (**(code **)(*ppuStack_118 + 0x10))(ppuStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar10 = ppuVar11;
    }
  }
  else {
    do {
      lVar34 = *(long *)(*plVar31 + 0x68);
      pppppcStack_108 = (code *****)0x0;
      puStack_110 = (undefined *)0x0;
      lStack_f8 = 0;
      plStack_100 = (long *)0x0;
      fStack_f0 = *(float *)(lVar34 + 0x38);
      pppppppcVar13 = *(code ********)(lVar34 + 0x20);
      FUN_10a130874(&puStack_110);
      ppppppcVar12 = (code ******)pppppcStack_108;
      for (plVar36 = *(long **)(lVar34 + 0x28); pppppcStack_108 = (code *****)ppppppcVar12,
          plVar24 = plStack_100, plVar36 != (long *)0x0; plVar36 = (long *)*plVar36) {
        uVar16 = plVar36[2];
        uVar23 = ((ulong)(uint)((int)uVar16 << 3) + 8 ^ uVar16 >> 0x20) * -0x622015f714c7d297;
        uVar23 = (uVar16 >> 0x20 ^ uVar23 >> 0x2f ^ uVar23) * -0x622015f714c7d297;
        ppppppcVar32 = (code ******)((uVar23 ^ uVar23 >> 0x2f) * -0x622015f714c7d297);
        if (ppppppcVar12 != (code ******)0x0) {
          uVar23 = (long)ppppppcVar12 - 1;
          if (((ulong)ppppppcVar12 & uVar23) == 0) {
            unaff_x27 = (code ******)((ulong)ppppppcVar32 & uVar23);
          }
          else {
            unaff_x27 = ppppppcVar32;
            if (ppppppcVar12 <= ppppppcVar32) {
              uVar26 = 0;
              if (ppppppcVar12 != (code ******)0x0) {
                uVar26 = (ulong)ppppppcVar32 / (ulong)ppppppcVar12;
              }
              unaff_x27 = (code ******)((long)ppppppcVar32 - uVar26 * (long)ppppppcVar12);
            }
          }
          plVar24 = *(long **)(puStack_110 + (long)unaff_x27 * 8);
          if (plVar24 != (long *)0x0) {
            do {
              while( true ) {
                plVar24 = (long *)*plVar24;
                if (plVar24 == (long *)0x0) goto LAB_10a12f480;
                ppppppcVar25 = (code ******)plVar24[1];
                if (ppppppcVar25 != ppppppcVar32) break;
                if (plVar24[2] == uVar16) goto LAB_10a12f5e0;
              }
              if (((ulong)ppppppcVar12 & uVar23) == 0) {
                ppppppcVar25 = (code ******)((ulong)ppppppcVar25 & uVar23);
              }
              else if (ppppppcVar12 <= ppppppcVar25) {
                uVar26 = 0;
                if (ppppppcVar12 != (code ******)0x0) {
                  uVar26 = (ulong)ppppppcVar25 / (ulong)ppppppcVar12;
                }
                ppppppcVar25 = (code ******)((long)ppppppcVar25 - uVar26 * (long)ppppppcVar12);
              }
            } while (ppppppcVar25 == unaff_x27);
          }
        }
LAB_10a12f480:
        plVar24 = (long *)0x68;
        __Znwm();
        *plVar24 = 0;
        plVar24[1] = (long)ppppppcVar32;
        lVar18 = plVar36[3];
        lVar38 = plVar36[2];
        plVar24[3] = plVar36[3];
        plVar24[2] = lVar38;
        if (lVar18 != 0) {
          plVar19 = (long *)(lVar18 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar6) {
              *plVar19 = *plVar19 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        pppppcStack_c0 = (code *****)(plVar24 + 4);
        *(undefined1 *)(plVar24 + 0xc) = 3;
        if (*(char *)(plVar36 + 0xc) == '\0') {
          uVar15 = 0;
        }
        else {
          pppppppcVar13 = (code *******)(plVar36 + 4);
          FUN_10a005398(&pppppcStack_c0);
          uVar15 = *(undefined1 *)(plVar36 + 0xc);
        }
        *(undefined1 *)(plVar24 + 0xc) = uVar15;
        if ((ppppppcVar12 == (code ******)0x0) ||
           (fStack_f0 * (float)ppppppcVar12 < (float)(lStack_f8 + 1))) {
          uVar16 = 1;
          if ((code ******)0x2 < ppppppcVar12) {
            uVar16 = (ulong)(((ulong)ppppppcVar12 & (long)ppppppcVar12 - 1U) != 0);
          }
          pppppppcVar13 = (code *******)(uVar16 | (long)ppppppcVar12 << 1);
          pppppppcVar21 = (code *******)(long)((float)(lStack_f8 + 1) / fStack_f0);
          if (pppppppcVar13 <= pppppppcVar21) {
            pppppppcVar13 = pppppppcVar21;
          }
          FUN_10a130874(&puStack_110);
          ppppppcVar12 = (code ******)pppppcStack_108;
          if (((ulong)pppppcStack_108 & (long)pppppcStack_108 - 1U) == 0) {
            unaff_x27 = (code ******)((long)pppppcStack_108 - 1U & (ulong)ppppppcVar32);
          }
          else {
            unaff_x27 = ppppppcVar32;
            if (pppppcStack_108 <= ppppppcVar32) {
              uVar16 = 0;
              if ((code ******)pppppcStack_108 != (code ******)0x0) {
                uVar16 = (ulong)ppppppcVar32 / (ulong)pppppcStack_108;
              }
              unaff_x27 = (code ******)((long)ppppppcVar32 - uVar16 * (long)pppppcStack_108);
            }
          }
        }
        plVar19 = *(long **)(puStack_110 + (long)unaff_x27 * 8);
        if (plVar19 == (long *)0x0) {
          *plVar24 = (long)plStack_100;
          *(long ***)(puStack_110 + (long)unaff_x27 * 8) = &plStack_100;
          plStack_100 = plVar24;
          if (*plVar24 != 0) {
            ppppppcVar32 = *(code *******)(*plVar24 + 8);
            if (((ulong)ppppppcVar12 & (long)ppppppcVar12 - 1U) == 0) {
              ppppppcVar32 = (code ******)((ulong)ppppppcVar32 & (long)ppppppcVar12 - 1U);
            }
            else if (ppppppcVar12 <= ppppppcVar32) {
              uVar16 = 0;
              if (ppppppcVar12 != (code ******)0x0) {
                uVar16 = (ulong)ppppppcVar32 / (ulong)ppppppcVar12;
              }
              ppppppcVar32 = (code ******)((long)ppppppcVar32 - uVar16 * (long)ppppppcVar12);
            }
            *(long **)(puStack_110 + (long)ppppppcVar32 * 8) = plVar24;
          }
        }
        else {
          *plVar24 = *plVar19;
          *plVar19 = (long)plVar24;
        }
        lStack_f8 = lStack_f8 + 1;
LAB_10a12f5e0:
        unaff_x28 = ppppppcVar12;
        ppppppcVar12 = (code ******)pppppcStack_108;
      }
      for (; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        uVar16 = *(ulong *)(lVar34 + 0x20);
        pppppppcVar21 = pppppppcVar13;
        if (uVar16 != 0) {
          uVar23 = plVar24[2];
          uVar26 = ((ulong)(uint)((int)uVar23 << 3) + 8 ^ uVar23 >> 0x20) * -0x622015f714c7d297;
          uVar26 = (uVar23 >> 0x20 ^ uVar26 >> 0x2f ^ uVar26) * -0x622015f714c7d297;
          uVar26 = (uVar26 ^ uVar26 >> 0x2f) * -0x622015f714c7d297;
          uVar27 = uVar16 - 1;
          if ((uVar16 & uVar27) == 0) {
            uVar28 = uVar26 & uVar27;
          }
          else {
            uVar28 = uVar26;
            if (uVar16 <= uVar26) {
              uVar28 = 0;
              if (uVar16 != 0) {
                uVar28 = uVar26 / uVar16;
              }
              uVar28 = uVar26 - uVar28 * uVar16;
            }
          }
          plVar36 = *(long **)(*(long *)(lVar34 + 0x18) + uVar28 * 8);
          if (plVar36 != (long *)0x0) {
LAB_10a12f658:
            while (plVar36 = (long *)*plVar36, plVar36 != (long *)0x0) {
              uVar29 = plVar36[1];
              if (uVar29 != uVar26) goto LAB_10a12f67c;
              if (plVar36[2] == uVar23) {
                if ((char)plVar24[0xc] == '\x01') {
                  pcVar9 = (code *)plVar24[4];
                  if (ppuStack_118 != (undefined **)0x0) {
                    ppuVar10 = ppuStack_118 + 1;
                    do {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
                      if (bVar6) {
                        *ppuVar10 = *ppuVar10 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  }
                  pppppppcVar21 = (code *******)(plVar24 + 4);
                  pppppcStack_c0 = pppppcStack_120;
                  ppuStack_b8 = ppuStack_118;
                  (*pcVar9)(&pppppcStack_c0);
                  if (ppuStack_b8 != (undefined **)0x0) {
                    ppuVar10 = ppuStack_b8 + 1;
                    do {
                      puVar35 = *ppuVar10;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
                      if (bVar6) {
                        *ppuVar10 = puVar35 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                      ppuVar30 = ppuStack_b8;
                    } while (cVar5 != '\0');
                    goto LAB_10a12f74c;
                  }
                }
                else if ((char)plVar24[0xc] == '\x02') {
                  plVar36 = plVar24 + 4;
                  FUN_10a688b40();
                  ppuVar10 = ppuStack_118;
                  if (plVar36 == (long *)0x0) {
                    pppppppcVar21 = (code *******)0x0;
                    if (pppppppcVar13 != (code *******)0x0) {
                      lStack_b0 = plVar24[4];
                      lStack_a8 = plVar24[5];
                      if (lStack_a8 != 0) {
                        plVar36 = (long *)(lStack_a8 + 8);
                        do {
                          cVar5 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(plVar36,0x10);
                          if (bVar6) {
                            *plVar36 = *plVar36 + 1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                      }
                      pppppcStack_d0 = pppppcStack_120;
                      ppuStack_c8 = ppuStack_118;
                      if (ppuStack_118 == (undefined **)0x0) {
                        ppuStack_98 = (undefined **)0x0;
                      }
                      else {
                        ppuVar30 = ppuStack_118 + 1;
                        do {
                          cVar5 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(ppuVar30,0x10);
                          if (bVar6) {
                            *ppuVar30 = *ppuVar30 + 1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        ppuStack_98 = ppuStack_118;
                        do {
                          cVar5 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(ppuVar30,0x10);
                          if (bVar6) {
                            *ppuVar30 = *ppuVar30 + 1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                      }
                      pppppcStack_a0 = pppppcStack_120;
                      ppuStack_b8 = &PTR_FUN_110ba6e28;
                      ppuStack_d8 = (undefined **)0x0;
                      uStack_e0 = 0;
                      pppppcStack_c0 = (code *****)FUN_10a130d18;
                      pppppppcVar21 = (code *******)&pppppcStack_c0;
                      FUN_10a4634ec(pppppppcVar13);
                      (*(code *)*ppuStack_b8)(&ppuStack_b8);
                      if (ppuVar10 != (undefined **)0x0) {
                        ppuVar30 = ppuVar10 + 1;
                        do {
                          puVar35 = *ppuVar30;
                          cVar5 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(ppuVar30,0x10);
                          if (bVar6) {
                            *ppuVar30 = puVar35 + -1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        if (puVar35 == (undefined *)0x0) {
                          (**(code **)(*ppuVar10 + 0x10))(ppuVar10);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
                        }
                      }
                      if (ppuStack_d8 != (undefined **)0x0) {
                        ppuVar10 = ppuStack_d8 + 1;
                        do {
                          puVar35 = *ppuVar10;
                          cVar5 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
                          if (bVar6) {
                            *ppuVar10 = puVar35 + -1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                          ppuVar30 = ppuStack_d8;
                        } while (cVar5 != '\0');
LAB_10a12f74c:
                        if (puVar35 == (undefined *)0x0) {
                          (**(code **)(*ppuVar30 + 0x10))(ppuVar30);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar30);
                        }
                      }
                    }
                  }
                  else {
                    *plVar36 = CONCAT44((int)((ulong)*plVar36 >> 0x20) + 1,(int)*plVar36 + 1);
                    pppppppcVar21 = (code *******)&pppppcStack_120;
                    FUN_10a130b14(plVar24[4]);
                    iVar7 = *(int *)((long)plVar36 + 4) + -1;
                    *(int *)((long)plVar36 + 4) = iVar7;
                    if (iVar7 == 0) {
                      *(undefined4 *)plVar36 = 0;
                    }
                  }
                }
                break;
              }
            }
          }
        }
LAB_10a12f870:
        pppppppcVar13 = pppppppcVar21;
      }
      ppuVar10 = &puStack_110;
      FUN_10a130a94();
      plVar31 = plVar31 + 2;
    } while (plVar31 != plVar2);
    if (ppuStack_118 != (undefined **)0x0) goto LAB_10a12f8a0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b8)(&ppuStack_b8);
  FUN_10a130d90(&pppppcStack_d0);
  func_0x00010a004dac(&uStack_e0);
  FUN_10a130a94(&puStack_110);
  FUN_10a130d90(&pppppcStack_120);
  __Unwind_Resume();
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar20 = (undefined8 *)*ppuVar10;
  ppppppcStack_260 = (code ******)0x0;
  pppppcStack_258 = (code *****)0x0;
  pppppcStack_250 = (code *****)0x0;
  ppppppcVar12 = *pppppppcVar13;
  ppppppcVar32 = pppppppcVar13[1];
  pppppppcVar21 = pppppppcVar13;
  if ((long)ppppppcVar32 - (long)ppppppcVar12 != 0) {
    ppppppcVar12 = (code ******)((long)ppppppcVar32 - (long)ppppppcVar12 >> 4);
    if ((ulong)ppppppcVar12 >> 0x3c != 0) goto LAB_10a130194;
    ppppppcStack_1d0 = (code ******)&ppppppcStack_260;
    pppppppcVar14 = pppppppcVar13;
    FUN_10a12df48();
    pppppppcVar33 =
         (code *******)((long)ppppppcVar12 - ((long)pppppcStack_258 - (long)ppppppcStack_260));
    pppppppcVar21 = (code *******)ppppppcStack_260;
    _memcpy(pppppppcVar33);
    ppppppcStack_1e0 = ppppppcStack_260;
    pppppcStack_1d8 = pppppcStack_250;
    ppppppcStack_1f0 = ppppppcStack_260;
    ppppppcStack_1e8 = ppppppcStack_260;
    ppppppcStack_260 = (code ******)pppppppcVar33;
    pppppcStack_258 = (code *****)ppppppcVar12;
    pppppcStack_250 = (code *****)(ppppppcVar12 + (long)pppppppcVar14 * 2);
    func_0x00010a130de8(&ppppppcStack_1f0);
    ppppppcVar12 = *pppppppcVar13;
    ppppppcVar32 = pppppppcVar13[1];
  }
  if (ppppppcVar12 != ppppppcVar32) {
    do {
      bVar4 = *(byte *)((long)ppppppcVar12 + 0xc);
      if (bVar4 - 1 < 4) {
        ppppppcVar25 = (code ******)0x40;
        __Znwm();
        ppppppcVar25[1] = (code *****)0x0;
        ppppppcVar25[2] = (code *****)0x0;
        *ppppppcVar25 = (code *****)&PTR_FUN_110ba6e50;
        ppppppcVar37 = ppppppcVar25 + 3;
        *ppppppcVar37 = (code *****)&PTR_FUN_110ba6708;
        uVar3 = *(undefined4 *)(ppppppcVar12 + 1);
        pppppcVar39 = *ppppppcVar12;
        ppppppcVar25[4] = (code *****)0x0;
        ppppppcVar25[5] = (code *****)0x0;
        *(undefined4 *)(ppppppcVar25 + 6) = uVar3;
        *(byte *)((long)ppppppcVar25 + 0x34) = bVar4;
        ppppppcVar25[7] = pppppcVar39;
        pppppcStack_240 = (code *****)ppppppcVar37;
        pppppcStack_238 = (code *****)ppppppcVar25;
        if (pppppcStack_258 < pppppcStack_250) {
          *pppppcStack_258 = (code ****)ppppppcVar37;
          pppppcStack_258[1] = (code ****)ppppppcVar25;
          unaff_x28 = (code ******)(pppppcStack_258 + 2);
          pppppcStack_258 = (code *****)unaff_x28;
        }
        else {
          lVar34 = (long)pppppcStack_258 - (long)ppppppcStack_260;
          uVar16 = (lVar34 >> 4) + 1;
          if (uVar16 >> 0x3c != 0) {
            FUN_10a12df34();
            goto LAB_10a130198;
          }
          uVar23 = (long)pppppcStack_250 - (long)ppppppcStack_260 >> 3;
          if (uVar23 <= uVar16) {
            uVar23 = uVar16;
          }
          if (0x7fffffffffffffef < (ulong)((long)pppppcStack_250 - (long)ppppppcStack_260)) {
            uVar23 = 0xfffffffffffffff;
          }
          ppppppcStack_1d0 = (code ******)&ppppppcStack_260;
          FUN_10a12df48();
          puVar1 = (undefined8 *)(uVar23 + lVar34);
          lVar34 = (long)pppppppcVar21 * 0x10;
          *puVar1 = ppppppcVar37;
          puVar1[1] = ppppppcVar25;
          unaff_x28 = (code ******)(puVar1 + 2);
          pppppppcVar13 =
               (code *******)((long)puVar1 - ((long)pppppcStack_258 - (long)ppppppcStack_260));
          pppppppcVar21 = (code *******)ppppppcStack_260;
          _memcpy(pppppppcVar13);
          ppppppcStack_1e0 = ppppppcStack_260;
          pppppcStack_1d8 = pppppcStack_250;
          ppppppcStack_1f0 = ppppppcStack_260;
          ppppppcStack_1e8 = ppppppcStack_260;
          ppppppcStack_260 = (code ******)pppppppcVar13;
          pppppcStack_258 = (code *****)unaff_x28;
          pppppcStack_250 = (code *****)(uVar23 + lVar34);
          func_0x00010a130de8(&ppppppcStack_1f0);
          pppppcStack_258 = (code *****)unaff_x28;
        }
      }
      ppppppcVar12 = ppppppcVar12 + 2;
    } while (ppppppcVar12 != ppppppcVar32);
  }
  uVar3 = *(undefined4 *)*puVar20;
  ppppppcVar32 = *(code *******)puVar20[1];
  pppppppcVar13 = (code *******)0x58;
  __Znwm();
  pppppcVar22 = pppppcStack_250;
  pppppcVar39 = pppppcStack_258;
  ppppppcVar12 = ppppppcStack_260;
  pppppppcVar13[1] = (code ******)0x0;
  pppppppcVar13[2] = (code ******)0x0;
  *pppppppcVar13 = (code ******)&PTR_DAT_110ba6ea0;
  pppppcStack_258 = (code *****)0x0;
  pppppcStack_250 = (code *****)0x0;
  ppppppcStack_260 = (code ******)0x0;
  pppppppcVar13[4] = (code ******)0x0;
  pppppppcVar13[5] = (code ******)0x0;
  pppppppcVar21 = pppppppcVar13 + 3;
  *pppppppcVar21 = (code ******)&PTR_FUN_110ba6a18;
  *(undefined4 *)(pppppppcVar13 + 6) = uVar3;
  pppppppcVar13[7] = ppppppcVar32;
  pppppppcVar13[9] = (code ******)pppppcVar39;
  pppppppcVar13[8] = ppppppcVar12;
  pppppppcVar13[10] = (code ******)pppppcVar22;
  ppppppcStack_1e8 = (code ******)0x0;
  ppppppcStack_1e0 = (code ******)0x0;
  ppppppcStack_1f0 = (code ******)0x0;
  func_0x00010a12dfd4(&ppppppcStack_1f0);
  plVar31 = *(long **)puVar20[2];
  plVar2 = (long *)((long *)puVar20[2])[1];
  ppppppcStack_270 = (code ******)pppppppcVar21;
  ppppppcStack_268 = (code ******)pppppppcVar13;
  if (plVar31 == plVar2) {
LAB_10a130114:
    ppppppcVar12 = ppppppcStack_268;
    pppppppcVar13 = (code *******)(ppppppcStack_268 + 1);
    do {
      ppppppcVar32 = *pppppppcVar13;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar13,0x10);
      if (bVar6) {
        *pppppppcVar13 = (code ******)((long)ppppppcVar32 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppppppcVar32 == (code ******)0x0) {
      (*(code *)(*ppppppcStack_268)[2])(ppppppcStack_268);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar12);
    }
  }
  else {
    do {
      lVar34 = *(long *)(*plVar31 + 0x78);
      pppppcStack_238 = (code *****)0x0;
      pppppcStack_240 = (code *****)0x0;
      lStack_228 = 0;
      ppppcStack_230 = (code ****)0x0;
      fStack_220 = *(float *)(lVar34 + 0x38);
      pppppppcVar13 = *(code ********)(lVar34 + 0x20);
      FUN_10a130ee4(&pppppcStack_240);
      ppppppcVar12 = (code ******)pppppcStack_238;
      for (plVar36 = *(long **)(lVar34 + 0x28); pppppcStack_238 = (code *****)ppppppcVar12,
          pppppcVar39 = (code *****)ppppcStack_230, plVar36 != (long *)0x0;
          plVar36 = (long *)*plVar36) {
        ppppcVar17 = (code ****)plVar36[2];
        uVar16 = ((ulong)(uint)((int)ppppcVar17 << 3) + 8 ^ (ulong)ppppcVar17 >> 0x20) *
                 -0x622015f714c7d297;
        uVar16 = ((ulong)ppppcVar17 >> 0x20 ^ uVar16 >> 0x2f ^ uVar16) * -0x622015f714c7d297;
        ppppppcVar32 = (code ******)((uVar16 ^ uVar16 >> 0x2f) * -0x622015f714c7d297);
        if (ppppppcVar12 != (code ******)0x0) {
          uVar16 = (long)ppppppcVar12 - 1;
          if (((ulong)ppppppcVar12 & uVar16) == 0) {
            unaff_x28 = (code ******)((ulong)ppppppcVar32 & uVar16);
          }
          else {
            unaff_x28 = ppppppcVar32;
            if (ppppppcVar12 <= ppppppcVar32) {
              uVar23 = 0;
              if (ppppppcVar12 != (code ******)0x0) {
                uVar23 = (ulong)ppppppcVar32 / (ulong)ppppppcVar12;
              }
              unaff_x28 = (code ******)((long)ppppppcVar32 - uVar23 * (long)ppppppcVar12);
            }
          }
          pppppcVar39 = (code *****)pppppcStack_240[(long)unaff_x28];
          if (pppppcVar39 != (code *****)0x0) {
            do {
              while( true ) {
                pppppcVar39 = (code *****)*pppppcVar39;
                if (pppppcVar39 == (code *****)0x0) goto LAB_10a12fcfc;
                ppppppcVar25 = (code ******)pppppcVar39[1];
                if (ppppppcVar25 != ppppppcVar32) break;
                if (pppppcVar39[2] == ppppcVar17) goto LAB_10a12fe5c;
              }
              if (((ulong)ppppppcVar12 & uVar16) == 0) {
                ppppppcVar25 = (code ******)((ulong)ppppppcVar25 & uVar16);
              }
              else if (ppppppcVar12 <= ppppppcVar25) {
                uVar23 = 0;
                if (ppppppcVar12 != (code ******)0x0) {
                  uVar23 = (ulong)ppppppcVar25 / (ulong)ppppppcVar12;
                }
                ppppppcVar25 = (code ******)((long)ppppppcVar25 - uVar23 * (long)ppppppcVar12);
              }
            } while (ppppppcVar25 == unaff_x28);
          }
        }
LAB_10a12fcfc:
        pppppcVar39 = (code *****)0x68;
        __Znwm();
        *pppppcVar39 = (code ****)0x0;
        pppppcVar39[1] = (code ****)ppppppcVar32;
        lVar18 = plVar36[3];
        ppppcVar17 = (code ****)plVar36[2];
        pppppcVar39[3] = (code ****)plVar36[3];
        pppppcVar39[2] = ppppcVar17;
        if (lVar18 != 0) {
          plVar24 = (long *)(lVar18 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar6) {
              *plVar24 = *plVar24 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        ppppppcStack_1f0 = (code ******)(pppppcVar39 + 4);
        *(undefined1 *)(pppppcVar39 + 0xc) = 3;
        if (*(char *)(plVar36 + 0xc) == '\0') {
          uVar15 = 0;
        }
        else {
          pppppppcVar13 = (code *******)(plVar36 + 4);
          FUN_10a005398(&ppppppcStack_1f0);
          uVar15 = *(undefined1 *)(plVar36 + 0xc);
        }
        *(undefined1 *)(pppppcVar39 + 0xc) = uVar15;
        if ((ppppppcVar12 == (code ******)0x0) ||
           (fStack_220 * (float)ppppppcVar12 < (float)(lStack_228 + 1))) {
          uVar16 = 1;
          if ((code ******)0x2 < ppppppcVar12) {
            uVar16 = (ulong)(((ulong)ppppppcVar12 & (long)ppppppcVar12 - 1U) != 0);
          }
          pppppppcVar13 = (code *******)(uVar16 | (long)ppppppcVar12 << 1);
          pppppppcVar21 = (code *******)(long)((float)(lStack_228 + 1) / fStack_220);
          if (pppppppcVar13 <= pppppppcVar21) {
            pppppppcVar13 = pppppppcVar21;
          }
          FUN_10a130ee4(&pppppcStack_240);
          ppppppcVar12 = (code ******)pppppcStack_238;
          if (((ulong)pppppcStack_238 & (long)pppppcStack_238 - 1U) == 0) {
            unaff_x28 = (code ******)((long)pppppcStack_238 - 1U & (ulong)ppppppcVar32);
          }
          else {
            unaff_x28 = ppppppcVar32;
            if (pppppcStack_238 <= ppppppcVar32) {
              uVar16 = 0;
              if ((code ******)pppppcStack_238 != (code ******)0x0) {
                uVar16 = (ulong)ppppppcVar32 / (ulong)pppppcStack_238;
              }
              unaff_x28 = (code ******)((long)ppppppcVar32 - uVar16 * (long)pppppcStack_238);
            }
          }
        }
        pppppcVar22 = (code *****)pppppcStack_240[(long)unaff_x28];
        if (pppppcVar22 == (code *****)0x0) {
          *pppppcVar39 = ppppcStack_230;
          pppppcStack_240[(long)unaff_x28] = (code ****)&ppppcStack_230;
          ppppcStack_230 = (code ****)pppppcVar39;
          if (*pppppcVar39 != (code ****)0x0) {
            ppppppcVar32 = (code ******)(*pppppcVar39)[1];
            if (((ulong)ppppppcVar12 & (long)ppppppcVar12 - 1U) == 0) {
              ppppppcVar32 = (code ******)((ulong)ppppppcVar32 & (long)ppppppcVar12 - 1U);
            }
            else if (ppppppcVar12 <= ppppppcVar32) {
              uVar16 = 0;
              if (ppppppcVar12 != (code ******)0x0) {
                uVar16 = (ulong)ppppppcVar32 / (ulong)ppppppcVar12;
              }
              ppppppcVar32 = (code ******)((long)ppppppcVar32 - uVar16 * (long)ppppppcVar12);
            }
            pppppcStack_240[(long)ppppppcVar32] = (code ****)pppppcVar39;
          }
        }
        else {
          *pppppcVar39 = *pppppcVar22;
          *pppppcVar22 = (code ****)pppppcVar39;
        }
        lStack_228 = lStack_228 + 1;
LAB_10a12fe5c:
        ppppppcVar12 = (code ******)pppppcStack_238;
      }
      for (; pppppcVar39 != (code *****)0x0; pppppcVar39 = (code *****)*pppppcVar39) {
        uVar16 = *(ulong *)(lVar34 + 0x20);
        pppppppcVar21 = pppppppcVar13;
        if (uVar16 != 0) {
          ppppcVar17 = pppppcVar39[2];
          uVar23 = ((ulong)(uint)((int)ppppcVar17 << 3) + 8 ^ (ulong)ppppcVar17 >> 0x20) *
                   -0x622015f714c7d297;
          uVar23 = ((ulong)ppppcVar17 >> 0x20 ^ uVar23 >> 0x2f ^ uVar23) * -0x622015f714c7d297;
          uVar23 = (uVar23 ^ uVar23 >> 0x2f) * -0x622015f714c7d297;
          uVar26 = uVar16 - 1;
          if ((uVar16 & uVar26) == 0) {
            uVar27 = uVar23 & uVar26;
          }
          else {
            uVar27 = uVar23;
            if (uVar16 <= uVar23) {
              uVar27 = 0;
              if (uVar16 != 0) {
                uVar27 = uVar23 / uVar16;
              }
              uVar27 = uVar23 - uVar27 * uVar16;
            }
          }
          plVar36 = *(long **)(*(long *)(lVar34 + 0x18) + uVar27 * 8);
          if (plVar36 != (long *)0x0) {
LAB_10a12fed4:
            while (plVar36 = (long *)*plVar36, plVar36 != (long *)0x0) {
              uVar28 = plVar36[1];
              if (uVar28 != uVar23) goto LAB_10a12fef8;
              if ((code ****)plVar36[2] == ppppcVar17) {
                if (*(char *)(pppppcVar39 + 0xc) == '\x01') {
                  ppppcVar17 = pppppcVar39[4];
                  if ((code *******)ppppppcStack_268 != (code *******)0x0) {
                    pppppppcVar13 = (code *******)(ppppppcStack_268 + 1);
                    do {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar13,0x10);
                      if (bVar6) {
                        *pppppppcVar13 = (code ******)((long)*pppppppcVar13 + 1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  }
                  pppppppcVar21 = (code *******)(pppppcVar39 + 4);
                  ppppppcStack_1f0 = ppppppcStack_270;
                  ppppppcStack_1e8 = ppppppcStack_268;
                  (*(code *)ppppcVar17)(&ppppppcStack_1f0);
                  if ((code *******)ppppppcStack_1e8 != (code *******)0x0) {
                    pppppppcVar13 = (code *******)(ppppppcStack_1e8 + 1);
                    do {
                      ppppppcVar12 = *pppppppcVar13;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar13,0x10);
                      if (bVar6) {
                        *pppppppcVar13 = (code ******)((long)ppppppcVar12 + -1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                      pppppppcVar14 = (code *******)ppppppcStack_1e8;
                    } while (cVar5 != '\0');
                    goto LAB_10a12ffc8;
                  }
                }
                else if (*(char *)(pppppcVar39 + 0xc) == '\x02') {
                  pppppcVar22 = pppppcVar39 + 4;
                  FUN_10a688b40();
                  ppppppcVar12 = ppppppcStack_268;
                  if (pppppcVar22 == (code *****)0x0) {
                    pppppppcVar21 = (code *******)0x0;
                    if (pppppppcVar13 != (code *******)0x0) {
                      ppppppcStack_1e0 = (code ******)pppppcVar39[4];
                      pppppcStack_1d8 = (code *****)pppppcVar39[5];
                      if ((code ******)pppppcStack_1d8 != (code ******)0x0) {
                        ppppppcVar32 = (code ******)(pppppcStack_1d8 + 1);
                        do {
                          cVar5 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(ppppppcVar32,0x10);
                          if (bVar6) {
                            *ppppppcVar32 = (code *****)((long)*ppppppcVar32 + 1);
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                      }
                      ppppppcStack_200 = ppppppcStack_270;
                      ppppppcStack_1f8 = ppppppcStack_268;
                      if ((code *******)ppppppcStack_268 == (code *******)0x0) {
                        ppppppcStack_1c8 = (code ******)0x0;
                      }
                      else {
                        pppppppcVar21 = (code *******)(ppppppcStack_268 + 1);
                        do {
                          cVar5 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar21,0x10);
                          if (bVar6) {
                            *pppppppcVar21 = (code ******)((long)*pppppppcVar21 + 1);
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        ppppppcStack_1c8 = ppppppcStack_268;
                        do {
                          cVar5 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar21,0x10);
                          if (bVar6) {
                            *pppppppcVar21 = (code ******)((long)*pppppppcVar21 + 1);
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                      }
                      ppppppcStack_1d0 = ppppppcStack_270;
                      ppppppcStack_1e8 = (code ******)&PTR_FUN_110ba6ee0;
                      ppppppcStack_208 = (code ******)0x0;
                      uStack_210 = 0;
                      ppppppcStack_1f0 = (code ******)FUN_10a131388;
                      pppppppcVar21 = &ppppppcStack_1f0;
                      FUN_10a4634ec(pppppppcVar13);
                      (*(code *)*ppppppcStack_1e8)(&ppppppcStack_1e8);
                      if ((code *******)ppppppcVar12 != (code *******)0x0) {
                        pppppppcVar13 = (code *******)(ppppppcVar12 + 1);
                        do {
                          ppppppcVar32 = *pppppppcVar13;
                          cVar5 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar13,0x10);
                          if (bVar6) {
                            *pppppppcVar13 = (code ******)((long)ppppppcVar32 + -1);
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        if (ppppppcVar32 == (code ******)0x0) {
                          (*(code *)(*ppppppcVar12)[2])(ppppppcVar12);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar12);
                        }
                      }
                      if ((code *******)ppppppcStack_208 != (code *******)0x0) {
                        pppppppcVar13 = (code *******)(ppppppcStack_208 + 1);
                        do {
                          ppppppcVar12 = *pppppppcVar13;
                          cVar5 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar13,0x10);
                          if (bVar6) {
                            *pppppppcVar13 = (code ******)((long)ppppppcVar12 + -1);
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                          pppppppcVar14 = (code *******)ppppppcStack_208;
                        } while (cVar5 != '\0');
LAB_10a12ffc8:
                        if (ppppppcVar12 == (code ******)0x0) {
                          (*(code *)(*pppppppcVar14)[2])(pppppppcVar14);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar14);
                        }
                      }
                    }
                  }
                  else {
                    *pppppcVar22 = (code ****)
                                   CONCAT44((int)((ulong)*pppppcVar22 >> 0x20) + 1,
                                            (int)*pppppcVar22 + 1);
                    pppppppcVar21 = &ppppppcStack_270;
                    FUN_10a131184(pppppcVar39[4]);
                    iVar7 = *(int *)((long)pppppcVar22 + 4) + -1;
                    *(int *)((long)pppppcVar22 + 4) = iVar7;
                    if (iVar7 == 0) {
                      *(undefined4 *)pppppcVar22 = 0;
                    }
                  }
                }
                break;
              }
            }
          }
        }
LAB_10a1300ec:
        pppppppcVar13 = pppppppcVar21;
      }
      FUN_10a131104(&pppppcStack_240);
      plVar31 = plVar31 + 2;
    } while (plVar31 != plVar2);
    if ((code *******)ppppppcStack_268 != (code *******)0x0) goto LAB_10a130114;
  }
  func_0x00010a12dfd4(&ppppppcStack_260);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return;
  }
  ___stack_chk_fail();
LAB_10a130194:
  FUN_10a12df34();
LAB_10a130198:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a13019c);
  (*pcVar9)();
LAB_10a12f67c:
  if ((uVar16 & uVar27) == 0) {
    uVar29 = uVar29 & uVar27;
  }
  else if (uVar16 <= uVar29) {
    uVar8 = 0;
    if (uVar16 != 0) {
      uVar8 = uVar29 / uVar16;
    }
    uVar29 = uVar29 - uVar8 * uVar16;
  }
  if (uVar29 != uVar28) goto LAB_10a12f870;
  goto LAB_10a12f658;
LAB_10a12fef8:
  if ((uVar16 & uVar26) == 0) {
    uVar28 = uVar28 & uVar26;
  }
  else if (uVar16 <= uVar28) {
    uVar29 = 0;
    if (uVar16 != 0) {
      uVar29 = uVar28 / uVar16;
    }
    uVar28 = uVar28 - uVar29 * uVar16;
  }
  if (uVar28 != uVar27) goto LAB_10a1300ec;
  goto LAB_10a12fed4;
}



/* Entry: 10a12f9b8; end: 10a13026f;  */

void FUN_10a12f9b8(undefined8 *param_1,long ******param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  code *pcVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  long ******pppppplVar13;
  undefined1 uVar14;
  long ***ppplVar15;
  long lVar16;
  long ******pppppplVar17;
  long ****pppplVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  long ******pppppplVar25;
  long *****ppppplVar26;
  long *plVar27;
  long lVar28;
  long *****unaff_x28;
  long *****ppppplVar29;
  long ****pppplVar30;
  long *****ppppplStack_140;
  long *****ppppplStack_138;
  long *****ppppplStack_130;
  long ****pppplStack_128;
  long ****pppplStack_120;
  long ****pppplStack_110;
  long ****pppplStack_108;
  long ***ppplStack_100;
  long lStack_f8;
  float fStack_f0;
  undefined8 uStack_e0;
  long *****ppppplStack_d8;
  long *****ppppplStack_d0;
  long *****ppppplStack_c8;
  long *****ppppplStack_c0;
  long *****ppppplStack_b8;
  long *****ppppplStack_b0;
  long ****pppplStack_a8;
  long *****ppppplStack_a0;
  long *****ppppplStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = (undefined8 *)*param_1;
  ppppplStack_130 = (long *****)0x0;
  pppplStack_128 = (long ****)0x0;
  pppplStack_120 = (long ****)0x0;
  ppppplVar11 = *param_2;
  ppppplVar26 = param_2[1];
  pppppplVar13 = param_2;
  if ((long)ppppplVar26 - (long)ppppplVar11 != 0) {
    ppppplVar11 = (long *****)((long)ppppplVar26 - (long)ppppplVar11 >> 4);
    if ((ulong)ppppplVar11 >> 0x3c != 0) goto LAB_10a130194;
    ppppplStack_a0 = (long *****)&ppppplStack_130;
    pppppplVar17 = param_2;
    FUN_10a12df48();
    pppppplVar25 = (long ******)((long)ppppplVar11 - ((long)pppplStack_128 - (long)ppppplStack_130))
    ;
    pppppplVar13 = (long ******)ppppplStack_130;
    _memcpy(pppppplVar25);
    ppppplStack_b0 = ppppplStack_130;
    pppplStack_a8 = pppplStack_120;
    ppppplStack_c0 = ppppplStack_130;
    ppppplStack_b8 = ppppplStack_130;
    ppppplStack_130 = (long *****)pppppplVar25;
    pppplStack_128 = (long ****)ppppplVar11;
    pppplStack_120 = (long ****)(ppppplVar11 + (long)pppppplVar17 * 2);
    func_0x00010a130de8(&ppppplStack_c0);
    ppppplVar11 = *param_2;
    ppppplVar26 = param_2[1];
  }
  if (ppppplVar11 != ppppplVar26) {
    do {
      bVar5 = *(byte *)((long)ppppplVar11 + 0xc);
      if (bVar5 - 1 < 4) {
        ppppplVar12 = (long *****)0x40;
        __Znwm();
        ppppplVar12[1] = (long ****)0x0;
        ppppplVar12[2] = (long ****)0x0;
        *ppppplVar12 = (long ****)&PTR_FUN_110ba6e50;
        ppppplVar29 = ppppplVar12 + 3;
        *ppppplVar29 = (long ****)&PTR_FUN_110ba6708;
        uVar4 = *(undefined4 *)(ppppplVar11 + 1);
        pppplVar30 = *ppppplVar11;
        ppppplVar12[4] = (long ****)0x0;
        ppppplVar12[5] = (long ****)0x0;
        *(undefined4 *)(ppppplVar12 + 6) = uVar4;
        *(byte *)((long)ppppplVar12 + 0x34) = bVar5;
        ppppplVar12[7] = pppplVar30;
        pppplStack_110 = (long ****)ppppplVar29;
        pppplStack_108 = (long ****)ppppplVar12;
        if (pppplStack_128 < pppplStack_120) {
          *pppplStack_128 = (long ***)ppppplVar29;
          pppplStack_128[1] = (long ***)ppppplVar12;
          unaff_x28 = (long *****)(pppplStack_128 + 2);
          pppplStack_128 = (long ****)unaff_x28;
        }
        else {
          lVar28 = (long)pppplStack_128 - (long)ppppplStack_130;
          uVar19 = (lVar28 >> 4) + 1;
          if (uVar19 >> 0x3c != 0) {
            FUN_10a12df34();
            goto LAB_10a130198;
          }
          uVar20 = (long)pppplStack_120 - (long)ppppplStack_130 >> 3;
          if (uVar20 <= uVar19) {
            uVar20 = uVar19;
          }
          if (0x7fffffffffffffef < (ulong)((long)pppplStack_120 - (long)ppppplStack_130)) {
            uVar20 = 0xfffffffffffffff;
          }
          ppppplStack_a0 = (long *****)&ppppplStack_130;
          FUN_10a12df48();
          puVar2 = (undefined8 *)(uVar20 + lVar28);
          lVar28 = (long)pppppplVar13 * 0x10;
          *puVar2 = ppppplVar29;
          puVar2[1] = ppppplVar12;
          unaff_x28 = (long *****)(puVar2 + 2);
          pppppplVar17 = (long ******)
                         ((long)puVar2 - ((long)pppplStack_128 - (long)ppppplStack_130));
          pppppplVar13 = (long ******)ppppplStack_130;
          _memcpy(pppppplVar17);
          ppppplStack_b0 = ppppplStack_130;
          pppplStack_a8 = pppplStack_120;
          ppppplStack_c0 = ppppplStack_130;
          ppppplStack_b8 = ppppplStack_130;
          ppppplStack_130 = (long *****)pppppplVar17;
          pppplStack_128 = (long ****)unaff_x28;
          pppplStack_120 = (long ****)(uVar20 + lVar28);
          func_0x00010a130de8(&ppppplStack_c0);
          pppplStack_128 = (long ****)unaff_x28;
        }
      }
      ppppplVar11 = ppppplVar11 + 2;
    } while (ppppplVar11 != ppppplVar26);
  }
  uVar4 = *(undefined4 *)*param_1;
  ppppplVar26 = *(long ******)param_1[1];
  pppppplVar13 = (long ******)0x58;
  __Znwm();
  pppplVar18 = pppplStack_120;
  pppplVar30 = pppplStack_128;
  ppppplVar11 = ppppplStack_130;
  pppppplVar13[1] = (long *****)0x0;
  pppppplVar13[2] = (long *****)0x0;
  *pppppplVar13 = (long *****)&PTR_DAT_110ba6ea0;
  pppplStack_128 = (long ****)0x0;
  pppplStack_120 = (long ****)0x0;
  ppppplStack_130 = (long *****)0x0;
  pppppplVar13[4] = (long *****)0x0;
  pppppplVar13[5] = (long *****)0x0;
  pppppplVar17 = pppppplVar13 + 3;
  *pppppplVar17 = (long *****)&PTR_FUN_110ba6a18;
  *(undefined4 *)(pppppplVar13 + 6) = uVar4;
  pppppplVar13[7] = ppppplVar26;
  pppppplVar13[9] = (long *****)pppplVar30;
  pppppplVar13[8] = ppppplVar11;
  pppppplVar13[10] = (long *****)pppplVar18;
  ppppplStack_b8 = (long *****)0x0;
  ppppplStack_b0 = (long *****)0x0;
  ppppplStack_c0 = (long *****)0x0;
  func_0x00010a12dfd4(&ppppplStack_c0);
  plVar24 = *(long **)param_1[2];
  plVar3 = (long *)((long *)param_1[2])[1];
  ppppplStack_140 = (long *****)pppppplVar17;
  ppppplStack_138 = (long *****)pppppplVar13;
  if (plVar24 == plVar3) {
LAB_10a130114:
    ppppplVar11 = ppppplStack_138;
    pppppplVar13 = (long ******)(ppppplStack_138 + 1);
    do {
      ppppplVar26 = *pppppplVar13;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppppplVar13,0x10);
      if (bVar7) {
        *pppppplVar13 = (long *****)((long)ppppplVar26 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (ppppplVar26 == (long *****)0x0) {
      (*(code *)(*ppppplStack_138)[2])(ppppplStack_138);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar11);
    }
  }
  else {
    do {
      lVar28 = *(long *)(*plVar24 + 0x78);
      pppplStack_108 = (long ****)0x0;
      pppplStack_110 = (long ****)0x0;
      lStack_f8 = 0;
      ppplStack_100 = (long ***)0x0;
      fStack_f0 = *(float *)(lVar28 + 0x38);
      pppppplVar13 = *(long *******)(lVar28 + 0x20);
      FUN_10a130ee4(&pppplStack_110);
      ppppplVar11 = (long *****)pppplStack_108;
      for (plVar27 = *(long **)(lVar28 + 0x28); pppplStack_108 = (long ****)ppppplVar11,
          pppplVar30 = (long ****)ppplStack_100, plVar27 != (long *)0x0; plVar27 = (long *)*plVar27)
      {
        ppplVar15 = (long ***)plVar27[2];
        uVar19 = ((ulong)(uint)((int)ppplVar15 << 3) + 8 ^ (ulong)ppplVar15 >> 0x20) *
                 -0x622015f714c7d297;
        uVar19 = ((ulong)ppplVar15 >> 0x20 ^ uVar19 >> 0x2f ^ uVar19) * -0x622015f714c7d297;
        ppppplVar26 = (long *****)((uVar19 ^ uVar19 >> 0x2f) * -0x622015f714c7d297);
        if (ppppplVar11 != (long *****)0x0) {
          uVar19 = (long)ppppplVar11 - 1;
          if (((ulong)ppppplVar11 & uVar19) == 0) {
            unaff_x28 = (long *****)((ulong)ppppplVar26 & uVar19);
          }
          else {
            unaff_x28 = ppppplVar26;
            if (ppppplVar11 <= ppppplVar26) {
              uVar20 = 0;
              if (ppppplVar11 != (long *****)0x0) {
                uVar20 = (ulong)ppppplVar26 / (ulong)ppppplVar11;
              }
              unaff_x28 = (long *****)((long)ppppplVar26 - uVar20 * (long)ppppplVar11);
            }
          }
          pppplVar30 = (long ****)pppplStack_110[(long)unaff_x28];
          if (pppplVar30 != (long ****)0x0) {
            do {
              while( true ) {
                pppplVar30 = (long ****)*pppplVar30;
                if (pppplVar30 == (long ****)0x0) goto LAB_10a12fcfc;
                ppppplVar12 = (long *****)pppplVar30[1];
                if (ppppplVar12 != ppppplVar26) break;
                if (pppplVar30[2] == ppplVar15) goto LAB_10a12fe5c;
              }
              if (((ulong)ppppplVar11 & uVar19) == 0) {
                ppppplVar12 = (long *****)((ulong)ppppplVar12 & uVar19);
              }
              else if (ppppplVar11 <= ppppplVar12) {
                uVar20 = 0;
                if (ppppplVar11 != (long *****)0x0) {
                  uVar20 = (ulong)ppppplVar12 / (ulong)ppppplVar11;
                }
                ppppplVar12 = (long *****)((long)ppppplVar12 - uVar20 * (long)ppppplVar11);
              }
            } while (ppppplVar12 == unaff_x28);
          }
        }
LAB_10a12fcfc:
        pppplVar30 = (long ****)0x68;
        __Znwm();
        *pppplVar30 = (long ***)0x0;
        pppplVar30[1] = (long ***)ppppplVar26;
        lVar16 = plVar27[3];
        ppplVar15 = (long ***)plVar27[2];
        pppplVar30[3] = (long ***)plVar27[3];
        pppplVar30[2] = ppplVar15;
        if (lVar16 != 0) {
          plVar1 = (long *)(lVar16 + 8);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = *plVar1 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        ppppplStack_c0 = (long *****)(pppplVar30 + 4);
        *(undefined1 *)(pppplVar30 + 0xc) = 3;
        if (*(char *)(plVar27 + 0xc) == '\0') {
          uVar14 = 0;
        }
        else {
          pppppplVar13 = (long ******)(plVar27 + 4);
          FUN_10a005398(&ppppplStack_c0);
          uVar14 = *(undefined1 *)(plVar27 + 0xc);
        }
        *(undefined1 *)(pppplVar30 + 0xc) = uVar14;
        if ((ppppplVar11 == (long *****)0x0) ||
           (fStack_f0 * (float)ppppplVar11 < (float)(lStack_f8 + 1))) {
          uVar19 = 1;
          if ((long *****)0x2 < ppppplVar11) {
            uVar19 = (ulong)(((ulong)ppppplVar11 & (long)ppppplVar11 - 1U) != 0);
          }
          pppppplVar13 = (long ******)(uVar19 | (long)ppppplVar11 << 1);
          pppppplVar17 = (long ******)(long)((float)(lStack_f8 + 1) / fStack_f0);
          if (pppppplVar13 <= pppppplVar17) {
            pppppplVar13 = pppppplVar17;
          }
          FUN_10a130ee4(&pppplStack_110);
          ppppplVar11 = (long *****)pppplStack_108;
          if (((ulong)pppplStack_108 & (long)pppplStack_108 - 1U) == 0) {
            unaff_x28 = (long *****)((long)pppplStack_108 - 1U & (ulong)ppppplVar26);
          }
          else {
            unaff_x28 = ppppplVar26;
            if (pppplStack_108 <= ppppplVar26) {
              uVar19 = 0;
              if ((long *****)pppplStack_108 != (long *****)0x0) {
                uVar19 = (ulong)ppppplVar26 / (ulong)pppplStack_108;
              }
              unaff_x28 = (long *****)((long)ppppplVar26 - uVar19 * (long)pppplStack_108);
            }
          }
        }
        pppplVar18 = (long ****)pppplStack_110[(long)unaff_x28];
        if (pppplVar18 == (long ****)0x0) {
          *pppplVar30 = ppplStack_100;
          pppplStack_110[(long)unaff_x28] = (long ***)&ppplStack_100;
          ppplStack_100 = (long ***)pppplVar30;
          if (*pppplVar30 != (long ***)0x0) {
            ppppplVar26 = (long *****)(*pppplVar30)[1];
            if (((ulong)ppppplVar11 & (long)ppppplVar11 - 1U) == 0) {
              ppppplVar26 = (long *****)((ulong)ppppplVar26 & (long)ppppplVar11 - 1U);
            }
            else if (ppppplVar11 <= ppppplVar26) {
              uVar19 = 0;
              if (ppppplVar11 != (long *****)0x0) {
                uVar19 = (ulong)ppppplVar26 / (ulong)ppppplVar11;
              }
              ppppplVar26 = (long *****)((long)ppppplVar26 - uVar19 * (long)ppppplVar11);
            }
            pppplStack_110[(long)ppppplVar26] = (long ***)pppplVar30;
          }
        }
        else {
          *pppplVar30 = *pppplVar18;
          *pppplVar18 = (long ***)pppplVar30;
        }
        lStack_f8 = lStack_f8 + 1;
LAB_10a12fe5c:
        ppppplVar11 = (long *****)pppplStack_108;
      }
      for (; pppplVar30 != (long ****)0x0; pppplVar30 = (long ****)*pppplVar30) {
        uVar19 = *(ulong *)(lVar28 + 0x20);
        pppppplVar17 = pppppplVar13;
        if (uVar19 != 0) {
          ppplVar15 = pppplVar30[2];
          uVar20 = ((ulong)(uint)((int)ppplVar15 << 3) + 8 ^ (ulong)ppplVar15 >> 0x20) *
                   -0x622015f714c7d297;
          uVar20 = ((ulong)ppplVar15 >> 0x20 ^ uVar20 >> 0x2f ^ uVar20) * -0x622015f714c7d297;
          uVar20 = (uVar20 ^ uVar20 >> 0x2f) * -0x622015f714c7d297;
          uVar21 = uVar19 - 1;
          if ((uVar19 & uVar21) == 0) {
            uVar22 = uVar20 & uVar21;
          }
          else {
            uVar22 = uVar20;
            if (uVar19 <= uVar20) {
              uVar22 = 0;
              if (uVar19 != 0) {
                uVar22 = uVar20 / uVar19;
              }
              uVar22 = uVar20 - uVar22 * uVar19;
            }
          }
          plVar27 = *(long **)(*(long *)(lVar28 + 0x18) + uVar22 * 8);
          if (plVar27 != (long *)0x0) {
LAB_10a12fed4:
            while (plVar27 = (long *)*plVar27, plVar27 != (long *)0x0) {
              uVar23 = plVar27[1];
              if (uVar23 != uVar20) goto LAB_10a12fef8;
              if ((long ***)plVar27[2] == ppplVar15) {
                if (*(char *)(pppplVar30 + 0xc) == '\x01') {
                  ppplVar15 = pppplVar30[4];
                  if ((long ******)ppppplStack_138 != (long ******)0x0) {
                    pppppplVar13 = (long ******)(ppppplStack_138 + 1);
                    do {
                      cVar6 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(pppppplVar13,0x10);
                      if (bVar7) {
                        *pppppplVar13 = (long *****)((long)*pppppplVar13 + 1);
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                  }
                  pppppplVar17 = (long ******)(pppplVar30 + 4);
                  ppppplStack_c0 = ppppplStack_140;
                  ppppplStack_b8 = ppppplStack_138;
                  (*(code *)ppplVar15)(&ppppplStack_c0);
                  if ((long ******)ppppplStack_b8 != (long ******)0x0) {
                    pppppplVar13 = (long ******)(ppppplStack_b8 + 1);
                    do {
                      ppppplVar11 = *pppppplVar13;
                      cVar6 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(pppppplVar13,0x10);
                      if (bVar7) {
                        *pppppplVar13 = (long *****)((long)ppppplVar11 + -1);
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                      pppppplVar25 = (long ******)ppppplStack_b8;
                    } while (cVar6 != '\0');
                    goto LAB_10a12ffc8;
                  }
                }
                else if (*(char *)(pppplVar30 + 0xc) == '\x02') {
                  pppplVar18 = pppplVar30 + 4;
                  FUN_10a688b40();
                  ppppplVar11 = ppppplStack_138;
                  if (pppplVar18 == (long ****)0x0) {
                    pppppplVar17 = (long ******)0x0;
                    if (pppppplVar13 != (long ******)0x0) {
                      ppppplStack_b0 = (long *****)pppplVar30[4];
                      pppplStack_a8 = (long ****)pppplVar30[5];
                      if ((long *****)pppplStack_a8 != (long *****)0x0) {
                        ppppplVar26 = (long *****)(pppplStack_a8 + 1);
                        do {
                          cVar6 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                          if (bVar7) {
                            *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                      }
                      ppppplStack_d0 = ppppplStack_140;
                      ppppplStack_c8 = ppppplStack_138;
                      if ((long ******)ppppplStack_138 == (long ******)0x0) {
                        ppppplStack_98 = (long *****)0x0;
                      }
                      else {
                        pppppplVar17 = (long ******)(ppppplStack_138 + 1);
                        do {
                          cVar6 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(pppppplVar17,0x10);
                          if (bVar7) {
                            *pppppplVar17 = (long *****)((long)*pppppplVar17 + 1);
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                        ppppplStack_98 = ppppplStack_138;
                        do {
                          cVar6 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(pppppplVar17,0x10);
                          if (bVar7) {
                            *pppppplVar17 = (long *****)((long)*pppppplVar17 + 1);
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                      }
                      ppppplStack_a0 = ppppplStack_140;
                      ppppplStack_b8 = (long *****)&PTR_FUN_110ba6ee0;
                      ppppplStack_d8 = (long *****)0x0;
                      uStack_e0 = 0;
                      ppppplStack_c0 = (long *****)FUN_10a131388;
                      pppppplVar17 = &ppppplStack_c0;
                      FUN_10a4634ec(pppppplVar13);
                      (*(code *)*ppppplStack_b8)(&ppppplStack_b8);
                      if ((long ******)ppppplVar11 != (long ******)0x0) {
                        pppppplVar13 = (long ******)(ppppplVar11 + 1);
                        do {
                          ppppplVar26 = *pppppplVar13;
                          cVar6 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(pppppplVar13,0x10);
                          if (bVar7) {
                            *pppppplVar13 = (long *****)((long)ppppplVar26 + -1);
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                        if (ppppplVar26 == (long *****)0x0) {
                          (*(code *)(*ppppplVar11)[2])(ppppplVar11);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar11);
                        }
                      }
                      if ((long ******)ppppplStack_d8 != (long ******)0x0) {
                        pppppplVar13 = (long ******)(ppppplStack_d8 + 1);
                        do {
                          ppppplVar11 = *pppppplVar13;
                          cVar6 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(pppppplVar13,0x10);
                          if (bVar7) {
                            *pppppplVar13 = (long *****)((long)ppppplVar11 + -1);
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                          pppppplVar25 = (long ******)ppppplStack_d8;
                        } while (cVar6 != '\0');
LAB_10a12ffc8:
                        if (ppppplVar11 == (long *****)0x0) {
                          (*(code *)(*pppppplVar25)[2])(pppppplVar25);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar25);
                        }
                      }
                    }
                  }
                  else {
                    *pppplVar18 = (long ***)
                                  CONCAT44((int)((ulong)*pppplVar18 >> 0x20) + 1,
                                           (int)*pppplVar18 + 1);
                    pppppplVar17 = &ppppplStack_140;
                    FUN_10a131184(pppplVar30[4]);
                    iVar8 = *(int *)((long)pppplVar18 + 4) + -1;
                    *(int *)((long)pppplVar18 + 4) = iVar8;
                    if (iVar8 == 0) {
                      *(undefined4 *)pppplVar18 = 0;
                    }
                  }
                }
                break;
              }
            }
          }
        }
LAB_10a1300ec:
        pppppplVar13 = pppppplVar17;
      }
      FUN_10a131104(&pppplStack_110);
      plVar24 = plVar24 + 2;
    } while (plVar24 != plVar3);
    if ((long ******)ppppplStack_138 != (long ******)0x0) goto LAB_10a130114;
  }
  func_0x00010a12dfd4(&ppppplStack_130);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
LAB_10a130194:
  FUN_10a12df34();
LAB_10a130198:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10a13019c);
  (*pcVar10)();
LAB_10a12fef8:
  if ((uVar19 & uVar21) == 0) {
    uVar23 = uVar23 & uVar21;
  }
  else if (uVar19 <= uVar23) {
    uVar9 = 0;
    if (uVar19 != 0) {
      uVar9 = uVar23 / uVar19;
    }
    uVar23 = uVar23 - uVar9 * uVar19;
  }
  if (uVar23 != uVar22) goto LAB_10a1300ec;
  goto LAB_10a12fed4;
}



/* Entry: 10a130270; end: 10a13027f;  */

void FUN_10a130270(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba6d80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a130280; end: 10a13029f;  */

void FUN_10a130280(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba6d80;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1302a0; end: 10a1302b7;  */

long FUN_10a1302a0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x28);
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
  return param_1 + 0x20;
}



/* Entry: 10a1302b8; end: 10a130487;  */

void FUN_10a1302b8(long *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar5 = param_1;
  plVar7 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 > param_2 || param_2 == plVar10) {
    if (plVar10 <= param_2) {
      return;
    }
    plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar5) {
      plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar10 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar5 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar5 * 8) = 0;
      plVar5 = (long *)((long)plVar5 + 1);
    } while (param_2 != plVar5);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      plVar7 = (long *)plVar5[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        plVar7 = (long *)((ulong)plVar7 & uVar6);
      }
      else if (param_2 <= plVar7) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)param_2;
        }
        plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar5;
      while (plVar10 != (long *)0x0) {
        plVar9 = (long *)plVar10[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar6);
        }
        else if (param_2 <= plVar9) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)param_2;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
        }
        plVar8 = plVar10;
        if (plVar9 != plVar7) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar9 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar9 * 8) = plVar5;
            plVar7 = plVar9;
          }
          else {
            *plVar5 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar9 * 8);
            **(long **)(lVar3 + (long)plVar9 * 8) = (long)plVar10;
            plVar8 = plVar5;
          }
        }
        plVar5 = plVar8;
        plVar10 = (long *)*plVar8;
      }
    }
    return;
  }
  func_0x000109ffded8();
  if (((ulong)plVar5 & 1) != 0) {
    if (3 < (ulong)*(byte *)(plVar7 + 0xc)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a1304d8);
      (*pcVar2)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar7 + 0xc)])(plVar7 + 4);
    FUN_10a004978(plVar7 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar7);
  return;
}



/* Entry: 10a130488; end: 10a1304d7;  */

void FUN_10a130488(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1304d8);
      (*pcVar1)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
    FUN_10a004978(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a1304d8; end: 10a130557;  */

long * FUN_10a1304d8(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[2];
  while( true ) {
    if (plVar1 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    if (3 < (ulong)*(byte *)(plVar1 + 0xc)) break;
    lVar3 = *plVar1;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar1 + 0xc)])(plVar1 + 4);
    FUN_10a004978(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a130558);
  (*pcVar2)();
}



/* Entry: 10a130558; end: 10a13075b;  */

void FUN_10a130558(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110ba68a0;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
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
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a13075c; end: 10a13076b;  */

void FUN_10a13075c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110ba68a0;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
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
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a13076c; end: 10a130793;  */

long FUN_10a13076c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a1307d4(param_1 + 0x18);
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



/* Entry: 10a130794; end: 10a1307d3;  */

void FUN_10a130794(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110ba6dc0;
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
  return;
}



/* Entry: 10a1307d4; end: 10a13082b;  */

long FUN_10a1307d4(long param_1)

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



/* Entry: 10a13082c; end: 10a13083b;  */

void FUN_10a13082c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba6de8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a13083c; end: 10a13085b;  */

void FUN_10a13083c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba6de8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a13085c; end: 10a130873;  */

long FUN_10a13085c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x28);
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
  return param_1 + 0x20;
}



/* Entry: 10a130874; end: 10a130a43;  */

void FUN_10a130874(long *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar5 = param_1;
  plVar7 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 > param_2 || param_2 == plVar10) {
    if (plVar10 <= param_2) {
      return;
    }
    plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar5) {
      plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar10 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar5 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar5 * 8) = 0;
      plVar5 = (long *)((long)plVar5 + 1);
    } while (param_2 != plVar5);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      plVar7 = (long *)plVar5[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        plVar7 = (long *)((ulong)plVar7 & uVar6);
      }
      else if (param_2 <= plVar7) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)param_2;
        }
        plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar5;
      while (plVar10 != (long *)0x0) {
        plVar9 = (long *)plVar10[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar6);
        }
        else if (param_2 <= plVar9) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)param_2;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
        }
        plVar8 = plVar10;
        if (plVar9 != plVar7) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar9 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar9 * 8) = plVar5;
            plVar7 = plVar9;
          }
          else {
            *plVar5 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar9 * 8);
            **(long **)(lVar3 + (long)plVar9 * 8) = (long)plVar10;
            plVar8 = plVar5;
          }
        }
        plVar5 = plVar8;
        plVar10 = (long *)*plVar8;
      }
    }
    return;
  }
  func_0x000109ffded8();
  if (((ulong)plVar5 & 1) != 0) {
    if (3 < (ulong)*(byte *)(plVar7 + 0xc)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a130a94);
      (*pcVar2)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar7 + 0xc)])(plVar7 + 4);
    FUN_10a004978(plVar7 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar7);
  return;
}



/* Entry: 10a130a44; end: 10a130a93;  */

void FUN_10a130a44(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a130a94);
      (*pcVar1)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
    FUN_10a004978(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a130a94; end: 10a130b13;  */

long * FUN_10a130a94(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[2];
  while( true ) {
    if (plVar1 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    if (3 < (ulong)*(byte *)(plVar1 + 0xc)) break;
    lVar3 = *plVar1;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar1 + 0xc)])(plVar1 + 4);
    FUN_10a004978(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a130b14);
  (*pcVar2)();
}



/* Entry: 10a130b14; end: 10a130d17;  */

void FUN_10a130b14(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110ba69f0;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
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
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a130d18; end: 10a130d27;  */

void FUN_10a130d18(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110ba69f0;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
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
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a130d28; end: 10a130d4f;  */

long FUN_10a130d28(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a130d90(param_1 + 0x18);
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



/* Entry: 10a130d50; end: 10a130d8f;  */

void FUN_10a130d50(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110ba6e28;
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
  return;
}



/* Entry: 10a130d90; end: 10a130e33;  */

long FUN_10a130d90(long param_1)

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



/* Entry: 10a130e34; end: 10a130e43;  */

void FUN_10a130e34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba6e50;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a130e44; end: 10a130e63;  */

void FUN_10a130e44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba6e50;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a130e64; end: 10a130e8b;  */

long FUN_10a130e64(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x28);
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
  return param_1 + 0x20;
}



/* Entry: 10a130e8c; end: 10a130eab;  */

void FUN_10a130e8c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ba6ea0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a130eac; end: 10a130edf;  */

long FUN_10a130eac(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a12dfd4(param_1 + 0x40);
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x28);
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
  return param_1 + 0x20;
}



/* Entry: 10a130ee0; end: 10a130ee3;  */

void FUN_10a130ee0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a130ee4; end: 10a1310b3;  */

void FUN_10a130ee4(long *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar5 = param_1;
  plVar7 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 > param_2 || param_2 == plVar10) {
    if (plVar10 <= param_2) {
      return;
    }
    plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar5) {
      plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar10 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar5 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar5 * 8) = 0;
      plVar5 = (long *)((long)plVar5 + 1);
    } while (param_2 != plVar5);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      plVar7 = (long *)plVar5[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        plVar7 = (long *)((ulong)plVar7 & uVar6);
      }
      else if (param_2 <= plVar7) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)param_2;
        }
        plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar5;
      while (plVar10 != (long *)0x0) {
        plVar9 = (long *)plVar10[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar6);
        }
        else if (param_2 <= plVar9) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)param_2;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
        }
        plVar8 = plVar10;
        if (plVar9 != plVar7) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar9 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar9 * 8) = plVar5;
            plVar7 = plVar9;
          }
          else {
            *plVar5 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar9 * 8);
            **(long **)(lVar3 + (long)plVar9 * 8) = (long)plVar10;
            plVar8 = plVar5;
          }
        }
        plVar5 = plVar8;
        plVar10 = (long *)*plVar8;
      }
    }
    return;
  }
  func_0x000109ffded8();
  if (((ulong)plVar5 & 1) != 0) {
    if (3 < (ulong)*(byte *)(plVar7 + 0xc)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a131104);
      (*pcVar2)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar7 + 0xc)])(plVar7 + 4);
    FUN_10a004978(plVar7 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar7);
  return;
}



/* Entry: 10a1310b4; end: 10a131103;  */

void FUN_10a1310b4(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a131104);
      (*pcVar1)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
    FUN_10a004978(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a131104; end: 10a131183;  */

long * FUN_10a131104(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[2];
  while( true ) {
    if (plVar1 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    if (3 < (ulong)*(byte *)(plVar1 + 0xc)) break;
    lVar3 = *plVar1;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar1 + 0xc)])(plVar1 + 4);
    FUN_10a004978(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a131184);
  (*pcVar2)();
}



/* Entry: 10a131184; end: 10a131387;  */

void FUN_10a131184(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110ba6a60;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
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
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a131388; end: 10a131397;  */

void FUN_10a131388(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110ba6a60;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
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
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a131398; end: 10a1313bf;  */

long FUN_10a131398(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a131400(param_1 + 0x18);
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



/* Entry: 10a1313c0; end: 10a1313ff;  */

void FUN_10a1313c0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110ba6ee0;
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
  return;
}



/* Entry: 10a131400; end: 10a131457;  */

long FUN_10a131400(long param_1)

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



/* Entry: 10a131458; end: 10a13165f;  */

long * FUN_10a131458(long *param_1,long *param_2,long *param_3,undefined1 *param_4,long param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  
  plVar2 = param_2;
  if (0 < param_5) {
    puVar5 = (undefined1 *)param_1[1];
    if (param_1[2] - (long)puVar5 < param_5) {
      lVar7 = *param_1;
      puVar1 = puVar5 + (param_5 - lVar7);
      if ((long)puVar1 < 0) {
        FUN_109ffdf98();
        uVar3 = param_1[2];
        plVar16 = (long *)*param_1;
        plVar2 = param_1;
        if ((undefined1 *)(uVar3 - (long)plVar16) < param_4) {
          plVar4 = param_1;
          plVar14 = param_2;
          plVar15 = param_3;
          puVar5 = param_4;
          if (plVar16 != (long *)0x0) {
            param_1[1] = (long)plVar16;
            __ZdlPv();
            uVar3 = 0;
            *param_1 = 0;
            param_1[1] = 0;
            param_1[2] = 0;
            plVar4 = plVar16;
          }
          if ((long)param_4 < 0) {
            FUN_109ffdf98();
            plVar2 = plVar14;
            if (0 < param_5) {
              puVar1 = (undefined1 *)plVar4[1];
              if (plVar4[2] - (long)puVar1 < param_5) {
                lVar7 = *plVar4;
                puVar8 = puVar1 + (param_5 - lVar7);
                if ((long)puVar8 < 0) {
                  FUN_109ffdf98();
                  plVar2 = plVar4;
                  if (puVar5 != (undefined1 *)0x0) {
                    func_0x000107c2b04c();
                    puVar5 = (undefined1 *)plVar4[1];
                    for (; plVar14 != plVar15; plVar14 = (long *)((long)plVar14 + 1)) {
                      *puVar5 = (char)*plVar14;
                      puVar5 = puVar5 + 1;
                    }
                    plVar4[1] = (long)puVar5;
                  }
                  return plVar2;
                }
                uVar3 = plVar4[2] - lVar7;
                puVar5 = (undefined1 *)(uVar3 * 2);
                if (puVar5 < puVar8 || (long)puVar5 - (long)puVar8 == 0) {
                  puVar5 = puVar8;
                }
                if (0x3ffffffffffffffe < uVar3) {
                  puVar5 = (undefined1 *)0x7fffffffffffffff;
                }
                if (puVar5 == (undefined1 *)0x0) {
                  puVar8 = (undefined1 *)0x0;
                }
                else {
                  puVar8 = puVar5;
                  __Znwm();
                }
                plVar2 = (long *)((long)plVar14 + ((long)puVar8 - lVar7));
                puVar11 = (undefined1 *)((long)plVar2 + param_5);
                plVar16 = plVar2;
                do {
                  *(char *)plVar16 = (char)*plVar15;
                  param_5 = param_5 + -1;
                  plVar16 = (long *)((long)plVar16 + 1);
                  plVar15 = (long *)((long)plVar15 + 1);
                } while (param_5 != 0);
                _memcpy(puVar11,plVar14,(long)puVar1 - (long)plVar14);
                plVar4[1] = (long)plVar14;
                lVar7 = *plVar4;
                puVar6 = (undefined1 *)((long)plVar2 + (lVar7 - (long)plVar14));
                _memcpy(puVar6,lVar7,(long)plVar14 - lVar7);
                *plVar4 = (long)puVar6;
                plVar4[1] = (long)(puVar11 + ((long)puVar1 - (long)plVar14));
                plVar4[2] = (long)(puVar8 + (long)puVar5);
                if (lVar7 != 0) {
                  __ZdlPv(lVar7);
                }
              }
              else {
                lVar7 = (long)puVar1 - (long)plVar14;
                if (lVar7 < param_5) {
                  lVar10 = (long)puVar5 - (lVar7 + (long)plVar15);
                  if (lVar10 != 0) {
                    _memmove(puVar1,(undefined1 *)(lVar7 + (long)plVar15),lVar10);
                  }
                  puVar8 = puVar1 + lVar10;
                  plVar4[1] = (long)puVar8;
                  if (lVar7 < 1) {
                    return plVar14;
                  }
                  puVar11 = puVar8;
                  if (puVar8 + -param_5 < puVar1) {
                    lVar10 = (long)puVar5 - (long)(param_5 + (long)plVar15);
                    lVar13 = (long)puVar5 - (long)plVar15;
                    do {
                      *(undefined1 *)(lVar13 + (long)plVar14) =
                           *(undefined1 *)(lVar10 + (long)plVar14);
                      lVar10 = lVar10 + 1;
                      lVar13 = lVar13 + 1;
                    } while ((undefined1 *)(lVar10 + (long)plVar14) < puVar1);
                    puVar11 = (undefined1 *)(lVar13 + (long)plVar14);
                  }
                  plVar4[1] = (long)puVar11;
                  if (puVar8 != (undefined1 *)((long)plVar14 + param_5)) {
                    _memmove((undefined1 *)((long)plVar14 + param_5),plVar14);
                  }
                }
                else {
                  puVar5 = puVar1 + -param_5;
                  puVar8 = puVar1;
                  puVar11 = puVar1;
                  if (puVar1 + -param_5 < puVar1) {
                    do {
                      puVar6 = puVar5 + 1;
                      puVar11 = puVar8 + 1;
                      *puVar8 = *puVar5;
                      puVar5 = puVar6;
                      puVar8 = puVar11;
                    } while (puVar6 != puVar1);
                  }
                  plVar4[1] = (long)puVar11;
                  lVar7 = param_5;
                  if (puVar1 != (undefined1 *)((long)plVar14 + param_5)) {
                    _memmove((undefined1 *)((long)plVar14 + param_5),plVar14);
                  }
                }
                _memmove(plVar14,plVar15,lVar7);
              }
            }
            return plVar2;
          }
          puVar5 = (undefined1 *)(uVar3 * 2);
          if (puVar5 < param_4 || (long)puVar5 - (long)param_4 == 0) {
            puVar5 = param_4;
          }
          if (0x3ffffffffffffffe < uVar3) {
            puVar5 = (undefined1 *)0x7fffffffffffffff;
          }
          func_0x000107c2b04c(param_1,puVar5);
          plVar16 = (long *)param_1[1];
          for (; param_3 != param_2; param_2 = (long *)((long)param_2 + 1)) {
            *(char *)plVar16 = (char)*param_2;
            plVar16 = (long *)((long)plVar16 + 1);
          }
        }
        else {
          plVar4 = (long *)param_1[1];
          if ((undefined1 *)((long)plVar4 - (long)plVar16) < param_4) {
            plVar14 = (long *)((undefined1 *)((long)plVar4 - (long)plVar16) + (long)param_2);
            if (plVar4 != plVar16) {
              _memmove(plVar16,param_2);
              plVar4 = (long *)param_1[1];
              plVar2 = plVar16;
            }
            plVar16 = plVar4;
            if (plVar14 != param_3) {
              plVar16 = (long *)((undefined1 *)((long)plVar4 + (long)param_3) + -(long)plVar14);
              do {
                plVar15 = (long *)((long)plVar14 + 1);
                *(char *)plVar4 = (char)*plVar14;
                plVar4 = (long *)((long)plVar4 + 1);
                plVar14 = plVar15;
              } while (plVar15 != param_3);
            }
          }
          else {
            lVar7 = (long)param_3 - (long)param_2;
            if (lVar7 != 0) {
              plVar2 = plVar16;
              _memmove(plVar16,param_2,lVar7);
            }
            plVar16 = (long *)((long)plVar16 + lVar7);
          }
        }
        param_1[1] = (long)plVar16;
        return plVar2;
      }
      uVar3 = param_1[2] - lVar7;
      puVar8 = (undefined1 *)(uVar3 * 2);
      if (puVar8 < puVar1 || (long)puVar8 - (long)puVar1 == 0) {
        puVar8 = puVar1;
      }
      if (0x3ffffffffffffffe < uVar3) {
        puVar8 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar8 == (undefined1 *)0x0) {
        puVar1 = (undefined1 *)0x0;
      }
      else {
        puVar1 = puVar8;
        __Znwm();
      }
      plVar2 = (long *)((long)param_2 + ((long)puVar1 - lVar7));
      puVar11 = (undefined1 *)((long)plVar2 + param_5);
      plVar16 = plVar2;
      do {
        *(char *)plVar16 = (char)*param_3;
        param_5 = param_5 + -1;
        plVar16 = (long *)((long)plVar16 + 1);
        param_3 = (long *)((long)param_3 + 1);
      } while (param_5 != 0);
      _memcpy(puVar11,param_2,(long)puVar5 - (long)param_2);
      param_1[1] = (long)param_2;
      lVar7 = *param_1;
      puVar6 = (undefined1 *)((long)plVar2 + (lVar7 - (long)param_2));
      _memcpy(puVar6,lVar7,(long)param_2 - lVar7);
      *param_1 = (long)puVar6;
      param_1[1] = (long)(puVar11 + ((long)puVar5 - (long)param_2));
      param_1[2] = (long)(puVar1 + (long)puVar8);
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
      }
    }
    else {
      lVar7 = (long)puVar5 - (long)param_2;
      if (lVar7 < param_5) {
        puVar1 = (undefined1 *)(lVar7 + (long)param_3);
        puVar8 = puVar5;
        puVar11 = puVar5;
        if (puVar1 != param_4) {
          puVar6 = puVar5;
          puVar12 = puVar1;
          do {
            puVar9 = puVar12 + 1;
            *puVar6 = *puVar12;
            puVar8 = param_4 + (long)puVar5 + -(long)puVar1;
            puVar11 = puVar6 + 1;
            puVar6 = puVar6 + 1;
            puVar12 = puVar9;
          } while (puVar9 != param_4);
        }
        param_1[1] = (long)puVar8;
        if (lVar7 < 1) {
          return param_2;
        }
        puVar1 = puVar8 + -param_5;
        puVar6 = puVar8;
        if (puVar8 + -param_5 < puVar5) {
          do {
            puVar12 = puVar1 + 1;
            puVar8 = puVar6 + 1;
            *puVar6 = *puVar1;
            puVar1 = puVar12;
            puVar6 = puVar8;
          } while (puVar12 != puVar5);
        }
        param_1[1] = (long)puVar8;
        if (puVar11 != (undefined1 *)((long)param_2 + param_5)) {
          _memmove((undefined1 *)((long)param_2 + param_5),param_2);
        }
      }
      else {
        puVar1 = puVar5 + -param_5;
        puVar8 = puVar5;
        puVar11 = puVar5;
        if (puVar5 + -param_5 < puVar5) {
          do {
            puVar6 = puVar1 + 1;
            puVar11 = puVar8 + 1;
            *puVar8 = *puVar1;
            puVar1 = puVar6;
            puVar8 = puVar11;
          } while (puVar6 != puVar5);
        }
        param_1[1] = (long)puVar11;
        lVar7 = param_5;
        if (puVar5 != (undefined1 *)((long)param_2 + param_5)) {
          _memmove((undefined1 *)((long)param_2 + param_5),param_2);
        }
      }
      _memmove(param_2,param_3,lVar7);
    }
  }
  return plVar2;
}



/* Entry: 10a131660; end: 10a131793;  */

long * FUN_10a131660(long *param_1,long *param_2,long *param_3,ulong param_4,long param_5)

{
  long *plVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  
  uVar3 = param_1[2];
  plVar15 = (long *)*param_1;
  plVar1 = param_1;
  if (uVar3 - (long)plVar15 < param_4) {
    plVar4 = param_1;
    plVar13 = param_2;
    plVar14 = param_3;
    uVar6 = param_4;
    if (plVar15 != (long *)0x0) {
      param_1[1] = (long)plVar15;
      __ZdlPv();
      uVar3 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      plVar4 = plVar15;
    }
    if ((long)param_4 < 0) {
      FUN_109ffdf98();
      plVar1 = plVar13;
      if (0 < param_5) {
        puVar5 = (undefined1 *)plVar4[1];
        if (plVar4[2] - (long)puVar5 < param_5) {
          lVar8 = *plVar4;
          puVar2 = puVar5 + (param_5 - lVar8);
          if ((long)puVar2 < 0) {
            FUN_109ffdf98();
            plVar1 = plVar4;
            if (uVar6 != 0) {
              func_0x000107c2b04c();
              puVar5 = (undefined1 *)plVar4[1];
              for (; plVar13 != plVar14; plVar13 = (long *)((long)plVar13 + 1)) {
                *puVar5 = (char)*plVar13;
                puVar5 = puVar5 + 1;
              }
              plVar4[1] = (long)puVar5;
            }
            return plVar1;
          }
          uVar3 = plVar4[2] - lVar8;
          puVar9 = (undefined1 *)(uVar3 * 2);
          if (puVar9 < puVar2 || (long)puVar9 - (long)puVar2 == 0) {
            puVar9 = puVar2;
          }
          if (0x3ffffffffffffffe < uVar3) {
            puVar9 = (undefined1 *)0x7fffffffffffffff;
          }
          if (puVar9 == (undefined1 *)0x0) {
            puVar2 = (undefined1 *)0x0;
          }
          else {
            puVar2 = puVar9;
            __Znwm();
          }
          plVar1 = (long *)((long)plVar13 + ((long)puVar2 - lVar8));
          puVar11 = (undefined1 *)((long)plVar1 + param_5);
          plVar15 = plVar1;
          do {
            *(char *)plVar15 = (char)*plVar14;
            param_5 = param_5 + -1;
            plVar15 = (long *)((long)plVar15 + 1);
            plVar14 = (long *)((long)plVar14 + 1);
          } while (param_5 != 0);
          _memcpy(puVar11,plVar13,(long)puVar5 - (long)plVar13);
          plVar4[1] = (long)plVar13;
          lVar8 = *plVar4;
          puVar7 = (undefined1 *)((long)plVar1 + (lVar8 - (long)plVar13));
          _memcpy(puVar7,lVar8,(long)plVar13 - lVar8);
          *plVar4 = (long)puVar7;
          plVar4[1] = (long)(puVar11 + ((long)puVar5 - (long)plVar13));
          plVar4[2] = (long)(puVar2 + (long)puVar9);
          if (lVar8 != 0) {
            __ZdlPv(lVar8);
          }
        }
        else {
          lVar8 = (long)puVar5 - (long)plVar13;
          if (lVar8 < param_5) {
            lVar10 = uVar6 - (lVar8 + (long)plVar14);
            if (lVar10 != 0) {
              _memmove(puVar5,(undefined1 *)(lVar8 + (long)plVar14),lVar10);
            }
            puVar2 = puVar5 + lVar10;
            plVar4[1] = (long)puVar2;
            if (lVar8 < 1) {
              return plVar13;
            }
            puVar9 = puVar2;
            if (puVar2 + -param_5 < puVar5) {
              lVar10 = uVar6 - (long)(param_5 + (long)plVar14);
              lVar12 = uVar6 - (long)plVar14;
              do {
                *(undefined1 *)(lVar12 + (long)plVar13) = *(undefined1 *)(lVar10 + (long)plVar13);
                lVar10 = lVar10 + 1;
                lVar12 = lVar12 + 1;
              } while ((undefined1 *)(lVar10 + (long)plVar13) < puVar5);
              puVar9 = (undefined1 *)(lVar12 + (long)plVar13);
            }
            plVar4[1] = (long)puVar9;
            if (puVar2 != (undefined1 *)((long)plVar13 + param_5)) {
              _memmove((undefined1 *)((long)plVar13 + param_5),plVar13);
            }
          }
          else {
            puVar2 = puVar5 + -param_5;
            puVar9 = puVar5;
            puVar11 = puVar5;
            if (puVar5 + -param_5 < puVar5) {
              do {
                puVar7 = puVar2 + 1;
                puVar11 = puVar9 + 1;
                *puVar9 = *puVar2;
                puVar2 = puVar7;
                puVar9 = puVar11;
              } while (puVar7 != puVar5);
            }
            plVar4[1] = (long)puVar11;
            lVar8 = param_5;
            if (puVar5 != (undefined1 *)((long)plVar13 + param_5)) {
              _memmove((undefined1 *)((long)plVar13 + param_5),plVar13);
            }
          }
          _memmove(plVar13,plVar14,lVar8);
        }
      }
      return plVar1;
    }
    uVar6 = uVar3 * 2;
    if (uVar6 < param_4 || uVar6 - param_4 == 0) {
      uVar6 = param_4;
    }
    if (0x3ffffffffffffffe < uVar3) {
      uVar6 = 0x7fffffffffffffff;
    }
    func_0x000107c2b04c(param_1,uVar6);
    plVar15 = (long *)param_1[1];
    for (; param_3 != param_2; param_2 = (long *)((long)param_2 + 1)) {
      *(char *)plVar15 = (char)*param_2;
      plVar15 = (long *)((long)plVar15 + 1);
    }
  }
  else {
    plVar4 = (long *)param_1[1];
    if ((ulong)((long)plVar4 - (long)plVar15) < param_4) {
      plVar13 = (long *)(((long)plVar4 - (long)plVar15) + (long)param_2);
      if (plVar4 != plVar15) {
        _memmove(plVar15,param_2);
        plVar4 = (long *)param_1[1];
        plVar1 = plVar15;
      }
      plVar15 = plVar4;
      if (plVar13 != param_3) {
        plVar15 = (long *)((undefined1 *)((long)plVar4 + (long)param_3) + -(long)plVar13);
        do {
          plVar14 = (long *)((long)plVar13 + 1);
          *(char *)plVar4 = (char)*plVar13;
          plVar4 = (long *)((long)plVar4 + 1);
          plVar13 = plVar14;
        } while (plVar14 != param_3);
      }
    }
    else {
      lVar8 = (long)param_3 - (long)param_2;
      if (lVar8 != 0) {
        plVar1 = plVar15;
        _memmove(plVar15,param_2,lVar8);
      }
      plVar15 = (long *)((long)plVar15 + lVar8);
    }
  }
  param_1[1] = (long)plVar15;
  return plVar1;
}



/* Entry: 10a131794; end: 10a1319a3;  */

long * FUN_10a131794(long *param_1,long *param_2,long *param_3,long param_4,long param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  
  plVar2 = param_2;
  if (0 < param_5) {
    puVar5 = (undefined1 *)param_1[1];
    if (param_1[2] - (long)puVar5 < param_5) {
      lVar7 = *param_1;
      puVar1 = puVar5 + (param_5 - lVar7);
      if ((long)puVar1 < 0) {
        FUN_109ffdf98();
        plVar2 = param_1;
        if (param_4 != 0) {
          func_0x000107c2b04c();
          puVar5 = (undefined1 *)param_1[1];
          for (; param_2 != param_3; param_2 = (long *)((long)param_2 + 1)) {
            *puVar5 = (char)*param_2;
            puVar5 = puVar5 + 1;
          }
          param_1[1] = (long)puVar5;
        }
        return plVar2;
      }
      uVar3 = param_1[2] - lVar7;
      puVar8 = (undefined1 *)(uVar3 * 2);
      if (puVar8 < puVar1 || (long)puVar8 - (long)puVar1 == 0) {
        puVar8 = puVar1;
      }
      if (0x3ffffffffffffffe < uVar3) {
        puVar8 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar8 == (undefined1 *)0x0) {
        puVar1 = (undefined1 *)0x0;
      }
      else {
        puVar1 = puVar8;
        __Znwm();
      }
      plVar2 = (long *)((long)param_2 + ((long)puVar1 - lVar7));
      puVar10 = (undefined1 *)((long)plVar2 + param_5);
      plVar4 = plVar2;
      do {
        *(char *)plVar4 = (char)*param_3;
        param_5 = param_5 + -1;
        plVar4 = (long *)((long)plVar4 + 1);
        param_3 = (long *)((long)param_3 + 1);
      } while (param_5 != 0);
      _memcpy(puVar10,param_2,(long)puVar5 - (long)param_2);
      param_1[1] = (long)param_2;
      lVar7 = *param_1;
      puVar6 = (undefined1 *)((long)plVar2 + (lVar7 - (long)param_2));
      _memcpy(puVar6,lVar7,(long)param_2 - lVar7);
      *param_1 = (long)puVar6;
      param_1[1] = (long)(puVar10 + ((long)puVar5 - (long)param_2));
      param_1[2] = (long)(puVar1 + (long)puVar8);
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
      }
    }
    else {
      lVar7 = (long)puVar5 - (long)param_2;
      if (lVar7 < param_5) {
        lVar9 = param_4 - (lVar7 + (long)param_3);
        if (lVar9 != 0) {
          _memmove(puVar5,(undefined1 *)(lVar7 + (long)param_3),lVar9);
        }
        puVar1 = puVar5 + lVar9;
        param_1[1] = (long)puVar1;
        if (lVar7 < 1) {
          return param_2;
        }
        puVar8 = puVar1;
        if (puVar1 + -param_5 < puVar5) {
          lVar9 = param_4 - (long)(param_5 + (long)param_3);
          param_4 = param_4 - (long)param_3;
          do {
            *(undefined1 *)(param_4 + (long)param_2) = *(undefined1 *)(lVar9 + (long)param_2);
            lVar9 = lVar9 + 1;
            param_4 = param_4 + 1;
          } while ((undefined1 *)(lVar9 + (long)param_2) < puVar5);
          puVar8 = (undefined1 *)(param_4 + (long)param_2);
        }
        param_1[1] = (long)puVar8;
        if (puVar1 != (undefined1 *)((long)param_2 + param_5)) {
          _memmove((undefined1 *)((long)param_2 + param_5),param_2);
        }
      }
      else {
        puVar1 = puVar5 + -param_5;
        puVar8 = puVar5;
        puVar10 = puVar5;
        if (puVar5 + -param_5 < puVar5) {
          do {
            puVar6 = puVar1 + 1;
            puVar10 = puVar8 + 1;
            *puVar8 = *puVar1;
            puVar1 = puVar6;
            puVar8 = puVar10;
          } while (puVar6 != puVar5);
        }
        param_1[1] = (long)puVar10;
        lVar7 = param_5;
        if (puVar5 != (undefined1 *)((long)param_2 + param_5)) {
          _memmove((undefined1 *)((long)param_2 + param_5),param_2);
        }
      }
      _memmove(param_2,param_3,lVar7);
    }
  }
  return plVar2;
}



/* Entry: 10a1319a4; end: 10a131a13;  */

void FUN_10a1319a4(long param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    func_0x000107c2b04c(param_1,param_4);
    puVar1 = *(undefined1 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined1 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a131a14; end: 10a131ad7;  */

undefined8 * FUN_10a131a14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba7888;
  if ((*(char *)(param_1 + 0x16) == '\x01') && (param_1[0x13] != 0)) {
    param_1[0x14] = param_1[0x13];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a131ad8; end: 10a131b4f;  */

undefined1 FUN_10a131ad8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_10a131b50(param_1 + 0x98);
        *(undefined8 *)(param_1 + 0x10) = 2;
        FUN_109d1b4dc(param_1 + 0x18);
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 10a131b50; end: 10a131bff;  */

long * FUN_10a131b50(long *param_1,long *param_2)

{
  long lVar1;
  
  if (((char)param_1[3] == '\x01') && (*param_1 != 0)) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return param_1;
}



/* Entry: 10a131c00; end: 10a131c13;  */

void FUN_10a131c00(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&UNK_10f63e073;
  FUN_109ffde64();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000109ffded8();
  if (*(long *)*puVar1 != 0) {
    FUN_10a131c98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar1);
    return;
  }
  return;
}



/* Entry: 10a131c14; end: 10a131c97;  */

void FUN_10a131c14(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000109ffded8();
  if (*(long *)*param_1 != 0) {
    FUN_10a131c98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a131c98; end: 10a131ceb;  */

void FUN_10a131c98(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar2 = plVar3, plVar2 != plVar1) {
    plVar3 = plVar2 + -3;
    if (*plVar3 != 0) {
      plVar2[-2] = *plVar3;
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 10a131cec; end: 10a131cff;  */

undefined1  [16] FUN_10a131cec(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  FUN_109ffde64(&UNK_10f63e073);
  uVar1 = param_2 * 0x10 + 0x10;
  _malloc();
  if (uVar1 != 0) {
    *(ulong *)((uVar1 & 0xfffffffffffffff0) + 8) = uVar1;
    lVar7 = (uVar1 & 0xfffffffffffffff0) + 0x10;
    if (lVar7 != 0) {
      auVar8._8_8_ = param_2;
      auVar8._0_8_ = lVar7;
      return auVar8;
    }
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  puVar4 = PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
  plVar2 = (long *)&UNK_10f63e073;
  FUN_109ffde64();
  plVar6 = (long *)*plVar2;
  lVar7 = *plVar6;
  if (lVar7 != 0) {
    lVar5 = plVar6[1];
    lVar3 = lVar7;
    if (lVar5 != lVar7) {
      do {
        lVar5 = lVar5 + -0x30;
        FUN_10a131de4(lVar5);
      } while (lVar5 != lVar7);
      lVar3 = *(long *)*plVar2;
    }
    plVar6[1] = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    auVar10._8_8_ = puVar4;
    auVar10._0_8_ = lVar3;
    return auVar10;
  }
  auVar9._8_8_ = puVar4;
  auVar9._0_8_ = plVar2;
  return auVar9;
}



/* Entry: 10a131d00; end: 10a131d5f;  */

undefined1  [16] FUN_10a131d00(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar1 = param_2 * 0x10 + 0x10;
  _malloc();
  if (uVar1 != 0) {
    *(ulong *)((uVar1 & 0xfffffffffffffff0) + 8) = uVar1;
    lVar7 = (uVar1 & 0xfffffffffffffff0) + 0x10;
    if (lVar7 != 0) {
      auVar8._8_8_ = param_2;
      auVar8._0_8_ = lVar7;
      return auVar8;
    }
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  puVar4 = PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
  plVar2 = (long *)&UNK_10f63e073;
  FUN_109ffde64();
  plVar6 = (long *)*plVar2;
  lVar7 = *plVar6;
  if (lVar7 != 0) {
    lVar5 = plVar6[1];
    lVar3 = lVar7;
    if (lVar5 != lVar7) {
      do {
        lVar5 = lVar5 + -0x30;
        FUN_10a131de4(lVar5);
      } while (lVar5 != lVar7);
      lVar3 = *(long *)*plVar2;
    }
    plVar6[1] = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    auVar10._8_8_ = puVar4;
    auVar10._0_8_ = lVar3;
    return auVar10;
  }
  auVar9._8_8_ = puVar4;
  auVar9._0_8_ = plVar2;
  return auVar9;
}



/* Entry: 10a131d60; end: 10a131d73;  */

void FUN_10a131d60(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&UNK_10f63e073;
  FUN_109ffde64();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar3 = plVar4[1];
    lVar2 = lVar5;
    if (lVar3 != lVar5) {
      do {
        lVar3 = lVar3 + -0x30;
        FUN_10a131de4(lVar3);
      } while (lVar3 != lVar5);
      lVar2 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a131d74; end: 10a131de3;  */

void FUN_10a131d74(long *param_1)

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
        FUN_10a131de4(lVar2);
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



/* Entry: 10a131de4; end: 10a131e2b;  */

void FUN_10a131de4(long *param_1)

{
  long lVar1;
  
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    param_1[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar1 + -8));
    return;
  }
  return;
}



/* Entry: 10a131e2c; end: 10a131f53;  */

undefined1  [16] FUN_10a131e2c(undefined8 *param_1,ulong param_2,long param_3,ulong param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  uVar10 = param_1[2];
  puVar18 = (undefined8 *)*param_1;
  puVar3 = param_1;
  if ((ulong)((long)(uVar10 - (long)puVar18) >> 2) < param_4) {
    uVar9 = param_2;
    if (puVar18 != (undefined8 *)0x0) {
      param_1[1] = puVar18;
      __ZdlPv(puVar18);
      uVar10 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_4 >> 0x3e != 0) {
      FUN_109ffe1ac();
      plVar4 = (long *)&UNK_10f63e073;
      FUN_109ffde64();
      if ((ulong)plVar4 >> 0x3c == 0) {
        lVar5 = (long)plVar4 << 4;
        __Znwm(lVar5);
        auVar21._8_8_ = plVar4;
        auVar21._0_8_ = lVar5;
        return auVar21;
      }
      func_0x000109ffded8();
      plVar7 = (long *)plVar4[1];
      if ((ulong)(plVar4[2] - (long)plVar7 >> 4) < uVar9) {
        lVar5 = (long)plVar7 - *plVar4;
        uVar10 = uVar9 + (lVar5 >> 4);
        if (uVar10 >> 0x3c != 0) {
          FUN_10a131cec();
          plVar4 = (long *)&UNK_10f63e073;
          FUN_109ffde64();
          if (uVar9 >> 0x3c == 0) {
            lVar5 = uVar9 << 4;
            __Znwm(lVar5);
            auVar23._8_8_ = uVar9;
            auVar23._0_8_ = lVar5;
            return auVar23;
          }
          func_0x000109ffded8();
          plVar7 = (long *)plVar4[1];
          if ((ulong)((plVar4[2] - (long)plVar7 >> 2) * -0x5555555555555555) < uVar9) {
            lVar5 = (long)plVar7 - *plVar4;
            uVar10 = uVar9 + (lVar5 >> 2) * -0x5555555555555555;
            if (0x1555555555555555 < uVar10) {
              FUN_10a132248();
              puVar3 = (undefined8 *)&UNK_10f63e073;
              FUN_109ffde64();
              if (0x1555555555555555 < uVar9) {
                func_0x000109ffded8();
                *puVar3 = 0;
                puVar3[1] = 0;
                puVar3[2] = 0;
                lVar5 = 0;
                if (uVar9 != 0) {
                  FUN_10a051ac8(puVar3);
                  lVar16 = puVar3[1];
                  lVar13 = ((uVar9 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
                  lVar5 = lVar13;
                  _bzero(lVar16,lVar13);
                  puVar3[1] = lVar16 + lVar13;
                }
                auVar26._8_8_ = lVar5;
                auVar26._0_8_ = puVar3;
                return auVar26;
              }
              lVar5 = uVar9 * 0xc;
              __Znwm(lVar5);
              auVar25._8_8_ = uVar9;
              auVar25._0_8_ = lVar5;
              return auVar25;
            }
            lVar13 = plVar4[2] - *plVar4 >> 2;
            uVar14 = lVar13 * 0x5555555555555556;
            if (uVar14 < uVar10 || uVar14 - uVar10 == 0) {
              uVar14 = uVar10;
            }
            if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar13 * -0x5555555555555555)) {
              uVar14 = 0x1555555555555555;
            }
            if (uVar14 == 0) {
              plVar7 = (long *)0x0;
            }
            else {
              plVar7 = plVar4;
              FUN_10a13225c();
            }
            puVar2 = (undefined *)((long)plVar7 + lVar5);
            lVar16 = ((uVar9 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
            _bzero(puVar2,lVar16);
            lVar5 = *plVar4;
            lVar17 = (long)puVar2 - (plVar4[1] - lVar5);
            _memcpy(lVar17);
            lVar13 = *plVar4;
            *plVar4 = lVar17;
            plVar4[1] = (long)(puVar2 + lVar16);
            plVar4[2] = (long)((long)plVar7 + uVar14 * 0xc);
            plVar6 = (long *)0x0;
            if (lVar13 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR___ZdlPv_110352258)();
              auVar27._8_8_ = lVar5;
              auVar27._0_8_ = lVar13;
              return auVar27;
            }
          }
          else {
            lVar5 = 0;
            plVar6 = plVar4;
            if (uVar9 != 0) {
              lVar13 = ((uVar9 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
              plVar6 = plVar7;
              lVar5 = lVar13;
              _bzero(plVar7,lVar13);
              plVar7 = (long *)((long)plVar7 + lVar13);
            }
            plVar4[1] = (long)plVar7;
          }
          auVar24._8_8_ = lVar5;
          auVar24._0_8_ = plVar6;
          return auVar24;
        }
        uVar11 = plVar4[2] - *plVar4;
        uVar14 = (long)uVar11 >> 3;
        if (uVar14 <= uVar10) {
          uVar14 = uVar10;
        }
        if (0x7fffffffffffffef < uVar11) {
          uVar14 = 0xfffffffffffffff;
        }
        if (uVar14 == 0) {
          plVar7 = (long *)0x0;
        }
        else {
          plVar7 = plVar4;
          FUN_10a131d00();
        }
        plVar1 = (long *)((long)plVar7 + lVar5);
        lVar5 = uVar9 << 4;
        plVar6 = plVar1;
        _bzero(plVar1,lVar5);
        puVar18 = (undefined8 *)*plVar4;
        puVar19 = (undefined8 *)plVar4[1];
        puVar3 = (undefined8 *)((long)plVar1 + ((long)puVar18 - (long)puVar19));
        puVar15 = puVar3;
        if (puVar19 != puVar18) {
          do {
            puVar12 = puVar18 + 2;
            uVar8 = *puVar18;
            puVar15[1] = puVar18[1];
            *puVar15 = uVar8;
            puVar18 = puVar12;
            puVar15 = puVar15 + 2;
          } while (puVar12 != puVar19);
          puVar18 = (undefined8 *)*plVar4;
        }
        *plVar4 = (long)puVar3;
        plVar4[1] = (long)(plVar1 + uVar9 * 2);
        plVar4[2] = (long)(plVar7 + uVar14 * 2);
        if (puVar18 != (undefined8 *)0x0) {
          uVar8 = puVar18[-1];
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_11034c310)(uVar8);
          auVar28._8_8_ = lVar5;
          auVar28._0_8_ = uVar8;
          return auVar28;
        }
      }
      else {
        lVar5 = 0;
        plVar6 = plVar4;
        if (uVar9 != 0) {
          lVar5 = uVar9 << 4;
          plVar6 = plVar7;
          _bzero(plVar7,lVar5);
          plVar7 = plVar7 + uVar9 * 2;
        }
        plVar4[1] = (long)plVar7;
      }
      auVar22._8_8_ = lVar5;
      auVar22._0_8_ = plVar6;
      return auVar22;
    }
    uVar9 = (long)uVar10 >> 1;
    if ((ulong)((long)uVar10 >> 1) <= param_4) {
      uVar9 = param_4;
    }
    if (0x7ffffffffffffffb < uVar10) {
      uVar9 = 0x3fffffffffffffff;
    }
    FUN_109ffe174(param_1,uVar9);
    puVar18 = (undefined8 *)param_1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      puVar3 = puVar18;
      _memmove(puVar18,param_2,param_3);
      uVar9 = param_2;
    }
    param_3 = (long)puVar18 + param_3;
  }
  else {
    puVar19 = (undefined8 *)param_1[1];
    if ((ulong)((long)puVar19 - (long)puVar18 >> 2) < param_4) {
      uVar10 = param_2 + ((long)puVar19 - (long)puVar18);
      if (puVar19 != puVar18) {
        _memmove(puVar18,param_2);
        puVar19 = (undefined8 *)param_1[1];
        puVar3 = puVar18;
      }
      param_3 = param_3 - uVar10;
      uVar9 = param_2;
      if (param_3 != 0) {
        puVar3 = puVar19;
        _memmove(puVar19,uVar10,param_3);
        uVar9 = uVar10;
      }
      param_3 = (long)puVar19 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      uVar9 = param_2;
      if (param_3 != 0) {
        puVar3 = puVar18;
        _memmove(puVar18,param_2,param_3);
        uVar9 = param_2;
      }
      param_3 = (long)puVar18 + param_3;
    }
  }
  param_1[1] = param_3;
  auVar20._8_8_ = uVar9;
  auVar20._0_8_ = puVar3;
  return auVar20;
}



/* Entry: 10a131f54; end: 10a131f67;  */

undefined1  [16] FUN_10a131f54(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  plVar4 = (long *)&UNK_10f63e073;
  FUN_109ffde64();
  if ((ulong)plVar4 >> 0x3c == 0) {
    lVar5 = (long)plVar4 << 4;
    __Znwm(lVar5);
    auVar19._8_8_ = plVar4;
    auVar19._0_8_ = lVar5;
    return auVar19;
  }
  func_0x000109ffded8();
  plVar7 = (long *)plVar4[1];
  if ((ulong)(plVar4[2] - (long)plVar7 >> 4) < param_2) {
    lVar5 = (long)plVar7 - *plVar4;
    uVar15 = param_2 + (lVar5 >> 4);
    if (uVar15 >> 0x3c != 0) {
      FUN_10a131cec();
      plVar4 = (long *)&UNK_10f63e073;
      FUN_109ffde64();
      if (param_2 >> 0x3c == 0) {
        lVar5 = param_2 << 4;
        __Znwm(lVar5);
        auVar21._8_8_ = param_2;
        auVar21._0_8_ = lVar5;
        return auVar21;
      }
      func_0x000109ffded8();
      plVar7 = (long *)plVar4[1];
      if ((ulong)((plVar4[2] - (long)plVar7 >> 2) * -0x5555555555555555) < param_2) {
        lVar5 = (long)plVar7 - *plVar4;
        uVar15 = param_2 + (lVar5 >> 2) * -0x5555555555555555;
        if (0x1555555555555555 < uVar15) {
          FUN_10a132248();
          puVar9 = (undefined8 *)&UNK_10f63e073;
          FUN_109ffde64();
          if (0x1555555555555555 < param_2) {
            func_0x000109ffded8();
            *puVar9 = 0;
            puVar9[1] = 0;
            puVar9[2] = 0;
            lVar5 = 0;
            if (param_2 != 0) {
              FUN_10a051ac8(puVar9);
              lVar17 = puVar9[1];
              lVar13 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
              lVar5 = lVar13;
              _bzero(lVar17,lVar13);
              puVar9[1] = lVar17 + lVar13;
            }
            auVar24._8_8_ = lVar5;
            auVar24._0_8_ = puVar9;
            return auVar24;
          }
          lVar5 = param_2 * 0xc;
          __Znwm(lVar5);
          auVar23._8_8_ = param_2;
          auVar23._0_8_ = lVar5;
          return auVar23;
        }
        lVar13 = plVar4[2] - *plVar4 >> 2;
        uVar14 = lVar13 * 0x5555555555555556;
        if (uVar14 < uVar15 || uVar14 - uVar15 == 0) {
          uVar14 = uVar15;
        }
        if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar13 * -0x5555555555555555)) {
          uVar14 = 0x1555555555555555;
        }
        if (uVar14 == 0) {
          plVar7 = (long *)0x0;
        }
        else {
          plVar7 = plVar4;
          FUN_10a13225c();
        }
        puVar2 = (undefined *)((long)plVar7 + lVar5);
        lVar17 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
        _bzero(puVar2,lVar17);
        lVar5 = *plVar4;
        lVar18 = (long)puVar2 - (plVar4[1] - lVar5);
        _memcpy(lVar18);
        lVar13 = *plVar4;
        *plVar4 = lVar18;
        plVar4[1] = (long)(puVar2 + lVar17);
        plVar4[2] = (long)((long)plVar7 + uVar14 * 0xc);
        plVar6 = (long *)0x0;
        if (lVar13 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)();
          auVar25._8_8_ = lVar5;
          auVar25._0_8_ = lVar13;
          return auVar25;
        }
      }
      else {
        lVar5 = 0;
        plVar6 = plVar4;
        if (param_2 != 0) {
          lVar13 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
          plVar6 = plVar7;
          lVar5 = lVar13;
          _bzero(plVar7,lVar13);
          plVar7 = (long *)((long)plVar7 + lVar13);
        }
        plVar4[1] = (long)plVar7;
      }
      auVar22._8_8_ = lVar5;
      auVar22._0_8_ = plVar6;
      return auVar22;
    }
    uVar10 = plVar4[2] - *plVar4;
    uVar14 = (long)uVar10 >> 3;
    if (uVar14 <= uVar15) {
      uVar14 = uVar15;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar14 = 0xfffffffffffffff;
    }
    if (uVar14 == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = plVar4;
      FUN_10a131d00();
    }
    plVar1 = (long *)((long)plVar7 + lVar5);
    lVar5 = param_2 << 4;
    plVar6 = plVar1;
    _bzero(plVar1,lVar5);
    puVar12 = (undefined8 *)*plVar4;
    puVar3 = (undefined8 *)plVar4[1];
    puVar9 = (undefined8 *)((long)plVar1 + ((long)puVar12 - (long)puVar3));
    puVar16 = puVar9;
    if (puVar3 != puVar12) {
      do {
        puVar11 = puVar12 + 2;
        uVar8 = *puVar12;
        puVar16[1] = puVar12[1];
        *puVar16 = uVar8;
        puVar12 = puVar11;
        puVar16 = puVar16 + 2;
      } while (puVar11 != puVar3);
      puVar12 = (undefined8 *)*plVar4;
    }
    *plVar4 = (long)puVar9;
    plVar4[1] = (long)(plVar1 + param_2 * 2);
    plVar4[2] = (long)(plVar7 + uVar14 * 2);
    if (puVar12 != (undefined8 *)0x0) {
      uVar8 = puVar12[-1];
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(uVar8);
      auVar26._8_8_ = lVar5;
      auVar26._0_8_ = uVar8;
      return auVar26;
    }
  }
  else {
    lVar5 = 0;
    plVar6 = plVar4;
    if (param_2 != 0) {
      lVar5 = param_2 << 4;
      plVar6 = plVar7;
      _bzero(plVar7,lVar5);
      plVar7 = plVar7 + param_2 * 2;
    }
    plVar4[1] = (long)plVar7;
  }
  auVar20._8_8_ = lVar5;
  auVar20._0_8_ = plVar6;
  return auVar20;
}



/* Entry: 10a131f68; end: 10a131f9b;  */

undefined1  [16] FUN_10a131f68(long *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar3 = (long)param_1 << 4;
    __Znwm(lVar3);
    auVar18._8_8_ = param_1;
    auVar18._0_8_ = lVar3;
    return auVar18;
  }
  func_0x000109ffded8();
  plVar4 = (long *)param_1[1];
  if ((ulong)(param_1[2] - (long)plVar4 >> 4) < param_2) {
    lVar3 = (long)plVar4 - *param_1;
    uVar14 = param_2 + (lVar3 >> 4);
    if (uVar14 >> 0x3c != 0) {
      FUN_10a131cec();
      plVar4 = (long *)&UNK_10f63e073;
      FUN_109ffde64();
      if (param_2 >> 0x3c == 0) {
        lVar3 = param_2 << 4;
        __Znwm(lVar3);
        auVar20._8_8_ = param_2;
        auVar20._0_8_ = lVar3;
        return auVar20;
      }
      func_0x000109ffded8();
      plVar7 = (long *)plVar4[1];
      if ((ulong)((plVar4[2] - (long)plVar7 >> 2) * -0x5555555555555555) < param_2) {
        lVar3 = (long)plVar7 - *plVar4;
        uVar14 = param_2 + (lVar3 >> 2) * -0x5555555555555555;
        if (0x1555555555555555 < uVar14) {
          FUN_10a132248();
          puVar8 = (undefined8 *)&UNK_10f63e073;
          FUN_109ffde64();
          if (0x1555555555555555 < param_2) {
            func_0x000109ffded8();
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
            lVar3 = 0;
            if (param_2 != 0) {
              FUN_10a051ac8(puVar8);
              lVar16 = puVar8[1];
              lVar12 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
              lVar3 = lVar12;
              _bzero(lVar16,lVar12);
              puVar8[1] = lVar16 + lVar12;
            }
            auVar23._8_8_ = lVar3;
            auVar23._0_8_ = puVar8;
            return auVar23;
          }
          lVar3 = param_2 * 0xc;
          __Znwm(lVar3);
          auVar22._8_8_ = param_2;
          auVar22._0_8_ = lVar3;
          return auVar22;
        }
        lVar12 = plVar4[2] - *plVar4 >> 2;
        uVar13 = lVar12 * 0x5555555555555556;
        if (uVar13 < uVar14 || uVar13 - uVar14 == 0) {
          uVar13 = uVar14;
        }
        if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar12 * -0x5555555555555555)) {
          uVar13 = 0x1555555555555555;
        }
        if (uVar13 == 0) {
          plVar7 = (long *)0x0;
        }
        else {
          plVar7 = plVar4;
          FUN_10a13225c();
        }
        puVar1 = (undefined *)((long)plVar7 + lVar3);
        lVar16 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
        _bzero(puVar1,lVar16);
        lVar3 = *plVar4;
        lVar17 = (long)puVar1 - (plVar4[1] - lVar3);
        _memcpy(lVar17);
        lVar12 = *plVar4;
        *plVar4 = lVar17;
        plVar4[1] = (long)(puVar1 + lVar16);
        plVar4[2] = (long)((long)plVar7 + uVar13 * 0xc);
        plVar6 = (long *)0x0;
        if (lVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)();
          auVar24._8_8_ = lVar3;
          auVar24._0_8_ = lVar12;
          return auVar24;
        }
      }
      else {
        lVar3 = 0;
        plVar6 = plVar4;
        if (param_2 != 0) {
          lVar12 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
          plVar6 = plVar7;
          lVar3 = lVar12;
          _bzero(plVar7,lVar12);
          plVar7 = (long *)((long)plVar7 + lVar12);
        }
        plVar4[1] = (long)plVar7;
      }
      auVar21._8_8_ = lVar3;
      auVar21._0_8_ = plVar6;
      return auVar21;
    }
    uVar9 = param_1[2] - *param_1;
    uVar13 = (long)uVar9 >> 3;
    if (uVar13 <= uVar14) {
      uVar13 = uVar14;
    }
    if (0x7fffffffffffffef < uVar9) {
      uVar13 = 0xfffffffffffffff;
    }
    if (uVar13 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = param_1;
      FUN_10a131d00();
    }
    plVar6 = (long *)((long)plVar4 + lVar3);
    lVar3 = param_2 << 4;
    plVar7 = plVar6;
    _bzero(plVar6,lVar3);
    puVar11 = (undefined8 *)*param_1;
    puVar2 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)((long)plVar6 + ((long)puVar11 - (long)puVar2));
    puVar15 = puVar8;
    if (puVar2 != puVar11) {
      do {
        puVar10 = puVar11 + 2;
        uVar5 = *puVar11;
        puVar15[1] = puVar11[1];
        *puVar15 = uVar5;
        puVar11 = puVar10;
        puVar15 = puVar15 + 2;
      } while (puVar10 != puVar2);
      puVar11 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar8;
    param_1[1] = (long)(plVar6 + param_2 * 2);
    param_1[2] = (long)(plVar4 + uVar13 * 2);
    if (puVar11 != (undefined8 *)0x0) {
      uVar5 = puVar11[-1];
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(uVar5);
      auVar25._8_8_ = lVar3;
      auVar25._0_8_ = uVar5;
      return auVar25;
    }
  }
  else {
    lVar3 = 0;
    plVar7 = param_1;
    if (param_2 != 0) {
      lVar3 = param_2 << 4;
      plVar7 = plVar4;
      _bzero(plVar4,lVar3);
      plVar4 = plVar4 + param_2 * 2;
    }
    param_1[1] = (long)plVar4;
  }
  auVar19._8_8_ = lVar3;
  auVar19._0_8_ = plVar7;
  return auVar19;
}



/* Entry: 10a131f9c; end: 10a1320a3;  */

undefined1  [16] FUN_10a131f9c(long *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  plVar3 = (long *)param_1[1];
  if ((ulong)(param_1[2] - (long)plVar3 >> 4) < param_2) {
    lVar17 = (long)plVar3 - *param_1;
    uVar13 = param_2 + (lVar17 >> 4);
    if (uVar13 >> 0x3c != 0) {
      FUN_10a131cec();
      plVar3 = (long *)&UNK_10f63e073;
      FUN_109ffde64();
      if (param_2 >> 0x3c == 0) {
        lVar17 = param_2 << 4;
        __Znwm(lVar17);
        auVar19._8_8_ = param_2;
        auVar19._0_8_ = lVar17;
        return auVar19;
      }
      func_0x000109ffded8();
      plVar6 = (long *)plVar3[1];
      if ((ulong)((plVar3[2] - (long)plVar6 >> 2) * -0x5555555555555555) < param_2) {
        lVar17 = (long)plVar6 - *plVar3;
        uVar13 = param_2 + (lVar17 >> 2) * -0x5555555555555555;
        if (0x1555555555555555 < uVar13) {
          FUN_10a132248();
          puVar7 = (undefined8 *)&UNK_10f63e073;
          FUN_109ffde64();
          if (0x1555555555555555 < param_2) {
            func_0x000109ffded8();
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            lVar17 = 0;
            if (param_2 != 0) {
              FUN_10a051ac8(puVar7);
              lVar15 = puVar7[1];
              lVar11 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
              lVar17 = lVar11;
              _bzero(lVar15,lVar11);
              puVar7[1] = lVar15 + lVar11;
            }
            auVar22._8_8_ = lVar17;
            auVar22._0_8_ = puVar7;
            return auVar22;
          }
          lVar17 = param_2 * 0xc;
          __Znwm(lVar17);
          auVar21._8_8_ = param_2;
          auVar21._0_8_ = lVar17;
          return auVar21;
        }
        lVar11 = plVar3[2] - *plVar3 >> 2;
        uVar12 = lVar11 * 0x5555555555555556;
        if (uVar12 < uVar13 || uVar12 - uVar13 == 0) {
          uVar12 = uVar13;
        }
        if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar11 * -0x5555555555555555)) {
          uVar12 = 0x1555555555555555;
        }
        if (uVar12 == 0) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = plVar3;
          FUN_10a13225c();
        }
        puVar1 = (undefined *)((long)plVar6 + lVar17);
        lVar15 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
        _bzero(puVar1,lVar15);
        lVar17 = *plVar3;
        lVar16 = (long)puVar1 - (plVar3[1] - lVar17);
        _memcpy(lVar16);
        lVar11 = *plVar3;
        *plVar3 = lVar16;
        plVar3[1] = (long)(puVar1 + lVar15);
        plVar3[2] = (long)((long)plVar6 + uVar12 * 0xc);
        plVar5 = (long *)0x0;
        if (lVar11 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)();
          auVar23._8_8_ = lVar17;
          auVar23._0_8_ = lVar11;
          return auVar23;
        }
      }
      else {
        lVar17 = 0;
        plVar5 = plVar3;
        if (param_2 != 0) {
          lVar11 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
          plVar5 = plVar6;
          lVar17 = lVar11;
          _bzero(plVar6,lVar11);
          plVar6 = (long *)((long)plVar6 + lVar11);
        }
        plVar3[1] = (long)plVar6;
      }
      auVar20._8_8_ = lVar17;
      auVar20._0_8_ = plVar5;
      return auVar20;
    }
    uVar8 = param_1[2] - *param_1;
    uVar12 = (long)uVar8 >> 3;
    if (uVar12 <= uVar13) {
      uVar12 = uVar13;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar12 = 0xfffffffffffffff;
    }
    if (uVar12 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10a131d00();
    }
    plVar5 = (long *)((long)plVar3 + lVar17);
    lVar17 = param_2 << 4;
    plVar6 = plVar5;
    _bzero(plVar5,lVar17);
    puVar10 = (undefined8 *)*param_1;
    puVar2 = (undefined8 *)param_1[1];
    puVar7 = (undefined8 *)((long)plVar5 + ((long)puVar10 - (long)puVar2));
    puVar14 = puVar7;
    if (puVar2 != puVar10) {
      do {
        puVar9 = puVar10 + 2;
        uVar4 = *puVar10;
        puVar14[1] = puVar10[1];
        *puVar14 = uVar4;
        puVar10 = puVar9;
        puVar14 = puVar14 + 2;
      } while (puVar9 != puVar2);
      puVar10 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar7;
    param_1[1] = (long)(plVar5 + param_2 * 2);
    param_1[2] = (long)(plVar3 + uVar12 * 2);
    if (puVar10 != (undefined8 *)0x0) {
      uVar4 = puVar10[-1];
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(uVar4);
      auVar24._8_8_ = lVar17;
      auVar24._0_8_ = uVar4;
      return auVar24;
    }
  }
  else {
    lVar17 = 0;
    plVar6 = param_1;
    if (param_2 != 0) {
      lVar17 = param_2 << 4;
      plVar6 = plVar3;
      _bzero(plVar3,lVar17);
      plVar3 = plVar3 + param_2 * 2;
    }
    param_1[1] = (long)plVar3;
  }
  auVar18._8_8_ = lVar17;
  auVar18._0_8_ = plVar6;
  return auVar18;
}



/* Entry: 10a1320a4; end: 10a1320b7;  */

undefined1  [16] FUN_10a1320a4(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  plVar2 = (long *)&UNK_10f63e073;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar3 = param_2 << 4;
    __Znwm(lVar3);
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = lVar3;
    return auVar12;
  }
  func_0x000109ffded8();
  plVar5 = (long *)plVar2[1];
  if ((ulong)((plVar2[2] - (long)plVar5 >> 2) * -0x5555555555555555) < param_2) {
    lVar3 = (long)plVar5 - *plVar2;
    uVar8 = param_2 + (lVar3 >> 2) * -0x5555555555555555;
    if (0x1555555555555555 < uVar8) {
      FUN_10a132248();
      puVar6 = (undefined8 *)&UNK_10f63e073;
      FUN_109ffde64();
      if (param_2 < 0x1555555555555556) {
        lVar3 = param_2 * 0xc;
        __Znwm(lVar3);
        auVar14._8_8_ = param_2;
        auVar14._0_8_ = lVar3;
        return auVar14;
      }
      func_0x000109ffded8();
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      lVar3 = 0;
      if (param_2 != 0) {
        FUN_10a051ac8(puVar6);
        lVar10 = puVar6[1];
        lVar7 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
        lVar3 = lVar7;
        _bzero(lVar10,lVar7);
        puVar6[1] = lVar10 + lVar7;
      }
      auVar15._8_8_ = lVar3;
      auVar15._0_8_ = puVar6;
      return auVar15;
    }
    lVar7 = plVar2[2] - *plVar2 >> 2;
    uVar9 = lVar7 * 0x5555555555555556;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar9 = 0x1555555555555555;
    }
    if (uVar9 == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = plVar2;
      FUN_10a13225c();
    }
    puVar1 = (undefined *)((long)plVar5 + lVar3);
    lVar10 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
    _bzero(puVar1,lVar10);
    lVar3 = *plVar2;
    lVar11 = (long)puVar1 - (plVar2[1] - lVar3);
    _memcpy(lVar11);
    lVar7 = *plVar2;
    *plVar2 = lVar11;
    plVar2[1] = (long)(puVar1 + lVar10);
    plVar2[2] = (long)((long)plVar5 + uVar9 * 0xc);
    plVar4 = (long *)0x0;
    if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar16._8_8_ = lVar3;
      auVar16._0_8_ = lVar7;
      return auVar16;
    }
  }
  else {
    lVar3 = 0;
    plVar4 = plVar2;
    if (param_2 != 0) {
      lVar7 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
      plVar4 = plVar5;
      lVar3 = lVar7;
      _bzero(plVar5,lVar7);
      plVar5 = (long *)((long)plVar5 + lVar7);
    }
    plVar2[1] = (long)plVar5;
  }
  auVar13._8_8_ = lVar3;
  auVar13._0_8_ = plVar4;
  return auVar13;
}



/* Entry: 10a1320b8; end: 10a1320eb;  */

undefined1  [16] FUN_10a1320b8(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = lVar1;
    return auVar11;
  }
  func_0x000109ffded8();
  plVar3 = (long *)param_1[1];
  if ((ulong)((param_1[2] - (long)plVar3 >> 2) * -0x5555555555555555) < param_2) {
    lVar10 = (long)plVar3 - *param_1;
    uVar6 = param_2 + (lVar10 >> 2) * -0x5555555555555555;
    if (0x1555555555555555 < uVar6) {
      FUN_10a132248();
      puVar5 = (undefined8 *)&UNK_10f63e073;
      FUN_109ffde64();
      if (param_2 < 0x1555555555555556) {
        lVar1 = param_2 * 0xc;
        __Znwm(lVar1);
        auVar13._8_8_ = param_2;
        auVar13._0_8_ = lVar1;
        return auVar13;
      }
      func_0x000109ffded8();
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      lVar1 = 0;
      if (param_2 != 0) {
        FUN_10a051ac8(puVar5);
        lVar4 = puVar5[1];
        lVar10 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
        lVar1 = lVar10;
        _bzero(lVar4,lVar10);
        puVar5[1] = lVar4 + lVar10;
      }
      auVar14._8_8_ = lVar1;
      auVar14._0_8_ = puVar5;
      return auVar14;
    }
    lVar1 = param_1[2] - *param_1 >> 2;
    uVar7 = lVar1 * 0x5555555555555556;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar1 * -0x5555555555555555)) {
      uVar7 = 0x1555555555555555;
    }
    if (uVar7 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10a13225c();
    }
    lVar10 = (long)plVar3 + lVar10;
    lVar8 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
    _bzero(lVar10,lVar8);
    lVar1 = *param_1;
    lVar9 = lVar10 - (param_1[1] - lVar1);
    _memcpy(lVar9);
    lVar4 = *param_1;
    *param_1 = lVar9;
    param_1[1] = lVar10 + lVar8;
    param_1[2] = (long)plVar3 + uVar7 * 0xc;
    plVar2 = (long *)0x0;
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar15._8_8_ = lVar1;
      auVar15._0_8_ = lVar4;
      return auVar15;
    }
  }
  else {
    lVar1 = 0;
    plVar2 = param_1;
    if (param_2 != 0) {
      lVar10 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
      plVar2 = plVar3;
      lVar1 = lVar10;
      _bzero(plVar3,lVar10);
      plVar3 = (long *)((long)plVar3 + lVar10);
    }
    param_1[1] = (long)plVar3;
  }
  auVar12._8_8_ = lVar1;
  auVar12._0_8_ = plVar2;
  return auVar12;
}



/* Entry: 10a1320ec; end: 10a132247;  */

undefined1  [16] FUN_10a1320ec(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  plVar2 = (long *)param_1[1];
  if ((ulong)((param_1[2] - (long)plVar2 >> 2) * -0x5555555555555555) < param_2) {
    lVar10 = (long)plVar2 - *param_1;
    uVar6 = param_2 + (lVar10 >> 2) * -0x5555555555555555;
    if (0x1555555555555555 < uVar6) {
      FUN_10a132248();
      puVar4 = (undefined8 *)&UNK_10f63e073;
      FUN_109ffde64();
      if (param_2 < 0x1555555555555556) {
        lVar5 = param_2 * 0xc;
        __Znwm(lVar5);
        auVar12._8_8_ = param_2;
        auVar12._0_8_ = lVar5;
        return auVar12;
      }
      func_0x000109ffded8();
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      lVar5 = 0;
      if (param_2 != 0) {
        FUN_10a051ac8(puVar4);
        lVar3 = puVar4[1];
        lVar10 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
        lVar5 = lVar10;
        _bzero(lVar3,lVar10);
        puVar4[1] = lVar3 + lVar10;
      }
      auVar13._8_8_ = lVar5;
      auVar13._0_8_ = puVar4;
      return auVar13;
    }
    lVar5 = param_1[2] - *param_1 >> 2;
    uVar7 = lVar5 * 0x5555555555555556;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar7 = 0x1555555555555555;
    }
    if (uVar7 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10a13225c();
    }
    lVar10 = (long)plVar2 + lVar10;
    lVar8 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
    _bzero(lVar10,lVar8);
    lVar5 = *param_1;
    lVar9 = lVar10 - (param_1[1] - lVar5);
    _memcpy(lVar9);
    lVar3 = *param_1;
    *param_1 = lVar9;
    param_1[1] = lVar10 + lVar8;
    param_1[2] = (long)plVar2 + uVar7 * 0xc;
    plVar1 = (long *)0x0;
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar14._8_8_ = lVar5;
      auVar14._0_8_ = lVar3;
      return auVar14;
    }
  }
  else {
    lVar5 = 0;
    plVar1 = param_1;
    if (param_2 != 0) {
      lVar10 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
      plVar1 = plVar2;
      lVar5 = lVar10;
      _bzero(plVar2,lVar10);
      plVar2 = (long *)((long)plVar2 + lVar10);
    }
    param_1[1] = (long)plVar2;
  }
  auVar11._8_8_ = lVar5;
  auVar11._0_8_ = plVar1;
  return auVar11;
}



/* Entry: 10a132248; end: 10a13225b;  */

undefined1  [16] FUN_10a132248(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  puVar1 = (undefined8 *)&UNK_10f63e073;
  FUN_109ffde64();
  if (param_2 < 0x1555555555555556) {
    lVar2 = param_2 * 0xc;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  lVar2 = 0;
  if (param_2 != 0) {
    FUN_10a051ac8(puVar1);
    lVar4 = puVar1[1];
    lVar3 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
    lVar2 = lVar3;
    _bzero(lVar4,lVar3);
    puVar1[1] = lVar4 + lVar3;
  }
  auVar6._8_8_ = lVar2;
  auVar6._0_8_ = puVar1;
  return auVar6;
}



/* Entry: 10a13225c; end: 10a13229f;  */

undefined1  [16] FUN_10a13225c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 < 0x1555555555555556) {
    lVar1 = param_2 * 0xc;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000109ffded8();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = 0;
  if (param_2 != 0) {
    FUN_10a051ac8(param_1);
    lVar3 = param_1[1];
    lVar2 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
    lVar1 = lVar2;
    _bzero(lVar3,lVar2);
    param_1[1] = lVar3 + lVar2;
  }
  auVar5._8_8_ = lVar1;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10a1322a0; end: 10a132337;  */

undefined8 * FUN_10a1322a0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10a051ac8(param_1);
    lVar2 = param_1[1];
    lVar1 = ((param_2 * 0xc - 0xcU) / 0xc) * 0xc + 0xc;
    _bzero(lVar2,lVar1);
    param_1[1] = lVar2 + lVar1;
  }
  return param_1;
}



/* Entry: 10a132338; end: 10a13234b;  */

undefined1  [16] FUN_10a132338(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  puVar1 = (undefined8 *)&UNK_10f63e073;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  lVar2 = 0;
  if (param_2 != 0) {
    FUN_10a0ca600(puVar1);
    lVar3 = puVar1[1];
    lVar2 = param_2 << 2;
    _bzero(lVar3,lVar2);
    puVar1[1] = lVar3 + param_2 * 4;
  }
  auVar5._8_8_ = lVar2;
  auVar5._0_8_ = puVar1;
  return auVar5;
}



/* Entry: 10a13234c; end: 10a13237f;  */

undefined1  [16] FUN_10a13234c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = 0;
  if (param_2 != 0) {
    FUN_10a0ca600(param_1);
    lVar2 = param_1[1];
    lVar1 = param_2 << 2;
    _bzero(lVar2,lVar1);
    param_1[1] = lVar2 + param_2 * 4;
  }
  auVar4._8_8_ = lVar1;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a132380; end: 10a1323f3;  */

undefined8 * FUN_10a132380(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10a0ca600(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 2);
    param_1[1] = lVar1 + param_2 * 4;
  }
  return param_1;
}



/* Entry: 10a1323f4; end: 10a132407;  */

double FUN_10a1323f4(double param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5)

{
  double *pdVar1;
  undefined8 *puVar2;
  double *pdVar3;
  double *pdVar4;
  long *plVar5;
  long *plVar6;
  long **pplVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  double *pdVar12;
  double *pdVar13;
  long lVar14;
  long lVar15;
  double *pdVar16;
  undefined8 *puVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  long *plVar28;
  float fVar29;
  double unaff_d8;
  double dVar30;
  double dVar31;
  double dVar32;
  double dStack_e0;
  long *plStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  double *pdStack_c0;
  long lStack_b8;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 **ppuStack_60;
  code *pcStack_58;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  puVar2 = (undefined8 *)&UNK_10f63e073;
  FUN_109ffde64();
  pcStack_18 = FUN_10a132408;
  uVar8 = puVar2[2];
  puVar17 = (undefined8 *)*puVar2;
  if (param_5 <= (long *)((long)(uVar8 - (long)puVar17) >> 2)) {
    puVar9 = (undefined8 *)puVar2[1];
    if ((long *)((long)puVar9 - (long)puVar17 >> 2) < param_5) {
      plVar28 = (long *)(((long)puVar9 - (long)puVar17) + (long)param_3);
      puVar10 = puVar9;
      if (puVar9 != puVar17) {
        puStack_20 = &stack0xfffffffffffffff0;
        _memmove(puVar17,param_3);
        puVar9 = (undefined8 *)puVar2[1];
        puVar10 = puVar9;
      }
      for (; plVar28 != param_4; plVar28 = (long *)((long)plVar28 + 4)) {
        *(int *)puVar9 = (int)*plVar28;
        puVar9 = (undefined8 *)((long)puVar9 + 4);
        puVar10 = (undefined8 *)((long)puVar10 + 4);
      }
    }
    else {
      lVar14 = (long)param_4 - (long)param_3;
      if (lVar14 != 0) {
        puStack_20 = &stack0xfffffffffffffff0;
        _memmove(puVar17,param_3,lVar14);
      }
      puVar10 = (undefined8 *)((long)puVar17 + lVar14);
    }
LAB_10a132524:
    puVar2[1] = puVar10;
    return param_1;
  }
  plVar28 = param_3;
  plVar5 = param_4;
  plVar6 = param_5;
  puStack_20 = &stack0xfffffffffffffff0;
  if (puVar17 != (undefined8 *)0x0) {
    puVar2[1] = puVar17;
    puStack_20 = &stack0xfffffffffffffff0;
    __ZdlPv(puVar17);
    uVar8 = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  if ((ulong)param_5 >> 0x3e == 0) {
    plVar28 = (long *)((long)uVar8 >> 1);
    if ((long *)((long)uVar8 >> 1) <= param_5) {
      plVar28 = param_5;
    }
    if (0x7ffffffffffffffb < uVar8) {
      plVar28 = (long *)0x3fffffffffffffff;
    }
    FUN_109ffe268(puVar2,plVar28);
    puVar10 = (undefined8 *)puVar2[1];
    for (; param_4 != param_3; param_3 = (long *)((long)param_3 + 4)) {
      *(int *)puVar10 = (int)*param_3;
      puVar10 = (undefined8 *)((long)puVar10 + 4);
    }
    goto LAB_10a132524;
  }
  func_0x000109ffdfac();
  pcStack_58 = FUN_10a132540;
  puVar2 = (undefined8 *)&UNK_10f63e073;
  ppuStack_60 = &puStack_20;
  FUN_109ffde64();
  pcStack_68 = FUN_10a132554;
  pdVar1 = &dStack_e0;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = plVar6[2];
  puStack_70 = (undefined1 *)&ppuStack_60;
  if (uVar8 >> 0x3d == 0) {
    pdVar3 = (double *)(uVar8 << 3);
    puStack_70 = (undefined1 *)&ppuStack_60;
    if (uVar8 < 0x4001) goto LAB_10a1325d8;
    puStack_70 = (undefined1 *)&ppuStack_60;
    _malloc();
    param_4 = plVar6;
    param_3 = plVar28;
    param_5 = plVar5;
    puVar17 = puVar2;
    unaff_d8 = param_1;
    if (pdVar3 == (double *)0x0) goto LAB_10a1325b8;
  }
  else {
LAB_10a1325b8:
    param_1 = unaff_d8;
    puVar2 = puVar17;
    plVar5 = param_5;
    plVar28 = param_3;
    plVar6 = param_4;
    pdVar3 = (double *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_10a1325d8:
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar14 = -((long)pdVar3 + 0x1eU & 0xfffffffffffffff0);
    pdVar1 = (double *)((long)&dStack_e0 + lVar14);
    pdVar3 = (double *)((long)&dStack_e0 + lVar14);
    if (uVar8 == 0) goto LAB_10a132634;
  }
  uVar11 = 0;
  pdVar12 = (double *)*plVar6;
  lVar14 = *(long *)(plVar6[3] + 8);
  do {
    pdVar3[uVar11] = *pdVar12;
    uVar11 = uVar11 + 1;
    pdVar12 = pdVar12 + lVar14;
  } while (uVar8 != uVar11);
LAB_10a132634:
  pdVar12 = (double *)puVar2[1];
  pdVar4 = (double *)puVar2[2];
  uStack_c8 = *puVar2;
  lStack_d0 = plVar5[1];
  pplVar7 = &plStack_d8;
  plStack_d8 = plVar28;
  pdStack_c0 = pdVar12;
  func_0x000109909a3c(param_1,pdVar12,pdVar4,&uStack_c8,pplVar7,pdVar3,1);
  lVar14 = plVar6[2];
  if (0 < lVar14) {
    pdVar13 = (double *)*plVar6;
    lVar15 = *(long *)(plVar6[3] + 8);
    pdVar16 = pdVar3;
    do {
      param_1 = *pdVar16;
      *pdVar13 = param_1;
      pdVar13 = pdVar13 + lVar15;
      lVar14 = lVar14 + -1;
      pdVar16 = pdVar16 + 1;
    } while (lVar14 != 0);
  }
  if (0x4000 < uVar8) {
    pdVar12 = pdVar3;
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
    ___stack_chk_fail();
    if (0x4000 < uVar8) {
      _free(pdVar3);
    }
    pdVar13 = pdVar12;
    __Unwind_Resume();
    *(double **)((long)pdVar1 + -0x20) = pdVar12;
    *(double **)((long)pdVar1 + -0x18) = pdVar3;
    *(undefined1 ***)((long)pdVar1 + -0x10) = &puStack_70;
    *(code **)((long)pdVar1 + -8) = FUN_10a1326f8;
    if (pdVar13 == pdVar4) {
      pdVar12 = (double *)0x10;
      ___cxa_allocate_exception();
      __ZNSt13runtime_errorC1EPKc();
      pdVar3 = pdVar12;
      puVar2 = (undefined8 *)PTR___ZTISt13runtime_error_110346a40;
      puVar17 = (undefined8 *)PTR___ZNSt13runtime_errorD1Ev_1103461d8;
      ___cxa_throw();
      ___cxa_free_exception(pdVar12);
      __Unwind_Resume();
      if (puVar2 == puVar17) {
        dVar20 = 0.0;
        dVar21 = 0.0;
        dVar19 = 0.0;
        dVar22 = 0.0;
        dVar23 = 0.0;
        dVar24 = 0.0;
        dVar25 = 0.0;
        dVar26 = 0.0;
        dVar27 = 0.0;
      }
      else {
        plVar28 = *pplVar7;
        fVar18 = *(float *)(pplVar7 + 1);
        dVar20 = 0.0;
        dVar21 = 0.0;
        dVar19 = 0.0;
        dVar22 = 0.0;
        dVar23 = 0.0;
        dVar24 = 0.0;
        dVar25 = 0.0;
        dVar26 = 0.0;
        dVar27 = 0.0;
        puVar9 = puVar2;
        do {
          lVar14 = 0;
          fVar29 = *(float *)(puVar9 + 1);
          dVar30 = (double)((float)*puVar9 - SUB84(plVar28,0));
          dVar31 = (double)((float)((ulong)*puVar9 >> 0x20) - (float)((ulong)plVar28 >> 0x20));
          *(double *)((long)pdVar1 + -0x88) = dVar31;
          *(double *)((long)pdVar1 + -0x90) = dVar30;
          *(double *)((long)pdVar1 + -0x80) = (double)(fVar29 - fVar18);
          pdVar12 = (double *)((long)pdVar1 + -0x60);
          do {
            dVar32 = *(double *)((long)pdVar1 + lVar14 + -0x90);
            pdVar12[-1] = dVar31 * dVar32;
            pdVar12[-2] = dVar30 * dVar32;
            *pdVar12 = dVar32 * (double)(fVar29 - fVar18);
            lVar14 = lVar14 + 8;
            pdVar12 = pdVar12 + 3;
          } while (lVar14 != 0x18);
          dVar26 = dVar26 + *(double *)((long)pdVar1 + -0x70);
          dVar27 = dVar27 + *(double *)((long)pdVar1 + -0x68);
          dVar24 = dVar24 + *(double *)((long)pdVar1 + -0x60);
          dVar25 = dVar25 + *(double *)((long)pdVar1 + -0x58);
          dVar22 = dVar22 + *(double *)((long)pdVar1 + -0x50);
          dVar23 = dVar23 + *(double *)((long)pdVar1 + -0x48);
          dVar20 = dVar20 + *(double *)((long)pdVar1 + -0x40);
          dVar21 = dVar21 + *(double *)((long)pdVar1 + -0x38);
          dVar19 = dVar19 + *(double *)((long)pdVar1 + -0x30);
          puVar9 = (undefined8 *)((long)puVar9 + 0xc);
        } while (puVar9 != puVar17);
      }
      dVar30 = (double)(ulong)(((long)puVar17 - (long)puVar2 >> 2) * -0x5555555555555555);
      pdVar3[1] = dVar27 / dVar30;
      *pdVar3 = dVar26 / dVar30;
      pdVar3[3] = dVar25 / dVar30;
      pdVar3[2] = dVar24 / dVar30;
      pdVar3[5] = dVar23 / dVar30;
      pdVar3[4] = dVar22 / dVar30;
      pdVar3[7] = dVar21 / dVar30;
      pdVar3[6] = dVar20 / dVar30;
      pdVar3[8] = dVar19 / dVar30;
      return dVar19 / dVar30;
    }
    fVar18 = 0.0;
    pdVar1 = pdVar13;
    do {
      fVar18 = fVar18 + *(float *)pdVar1;
      pdVar1 = (double *)((long)pdVar1 + 0xc);
    } while (pdVar1 != pdVar4);
    return (double)(ulong)(uint)(fVar18 / (float)(ulong)(((long)pdVar4 - (long)pdVar13 >> 2) *
                                                        -0x5555555555555555));
  }
  return param_1;
}



/* Entry: 10a132408; end: 10a13253f;  */

double FUN_10a132408(double param_1,undefined8 *param_2,long *param_3,long *param_4,long *param_5)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  long *plVar4;
  long *plVar5;
  long **pplVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  double *pdVar11;
  double *pdVar12;
  long lVar13;
  long lVar14;
  double *pdVar15;
  undefined8 *puVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  long *plVar27;
  float fVar28;
  double unaff_d8;
  double dVar29;
  double dVar30;
  double dVar31;
  double dStack_d0;
  long *plStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  double *pdStack_b0;
  long lStack_a8;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  uVar7 = param_2[2];
  puVar16 = (undefined8 *)*param_2;
  if (param_5 <= (long *)((long)(uVar7 - (long)puVar16) >> 2)) {
    puVar8 = (undefined8 *)param_2[1];
    if ((long *)((long)puVar8 - (long)puVar16 >> 2) < param_5) {
      plVar27 = (long *)(((long)puVar8 - (long)puVar16) + (long)param_3);
      puVar9 = puVar8;
      if (puVar8 != puVar16) {
        _memmove(puVar16,param_3);
        puVar8 = (undefined8 *)param_2[1];
        puVar9 = puVar8;
      }
      for (; plVar27 != param_4; plVar27 = (long *)((long)plVar27 + 4)) {
        *(int *)puVar8 = (int)*plVar27;
        puVar8 = (undefined8 *)((long)puVar8 + 4);
        puVar9 = (undefined8 *)((long)puVar9 + 4);
      }
    }
    else {
      lVar13 = (long)param_4 - (long)param_3;
      if (lVar13 != 0) {
        _memmove(puVar16,param_3,lVar13);
      }
      puVar9 = (undefined8 *)((long)puVar16 + lVar13);
    }
LAB_10a132524:
    param_2[1] = puVar9;
    return param_1;
  }
  plVar27 = param_3;
  plVar4 = param_4;
  plVar5 = param_5;
  if (puVar16 != (undefined8 *)0x0) {
    param_2[1] = puVar16;
    __ZdlPv(puVar16);
    uVar7 = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  if ((ulong)param_5 >> 0x3e == 0) {
    plVar27 = (long *)((long)uVar7 >> 1);
    if ((long *)((long)uVar7 >> 1) <= param_5) {
      plVar27 = param_5;
    }
    if (0x7ffffffffffffffb < uVar7) {
      plVar27 = (long *)0x3fffffffffffffff;
    }
    FUN_109ffe268(param_2,plVar27);
    puVar9 = (undefined8 *)param_2[1];
    for (; param_4 != param_3; param_3 = (long *)((long)param_3 + 4)) {
      *(int *)puVar9 = (int)*param_3;
      puVar9 = (undefined8 *)((long)puVar9 + 4);
    }
    goto LAB_10a132524;
  }
  func_0x000109ffdfac();
  pcStack_48 = FUN_10a132540;
  puVar8 = (undefined8 *)&UNK_10f63e073;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_109ffde64();
  pcStack_58 = FUN_10a132554;
  pdVar1 = &dStack_d0;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = plVar5[2];
  puStack_60 = (undefined1 *)&puStack_50;
  if (uVar7 >> 0x3d == 0) {
    pdVar2 = (double *)(uVar7 << 3);
    puStack_60 = (undefined1 *)&puStack_50;
    if (uVar7 < 0x4001) goto LAB_10a1325d8;
    puStack_60 = (undefined1 *)&puStack_50;
    _malloc();
    param_4 = plVar5;
    param_3 = plVar27;
    param_5 = plVar4;
    puVar16 = puVar8;
    unaff_d8 = param_1;
    if (pdVar2 == (double *)0x0) goto LAB_10a1325b8;
  }
  else {
LAB_10a1325b8:
    param_1 = unaff_d8;
    puVar8 = puVar16;
    plVar4 = param_5;
    plVar27 = param_3;
    plVar5 = param_4;
    pdVar2 = (double *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_10a1325d8:
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar13 = -((long)pdVar2 + 0x1eU & 0xfffffffffffffff0);
    pdVar1 = (double *)((long)&dStack_d0 + lVar13);
    pdVar2 = (double *)((long)&dStack_d0 + lVar13);
    if (uVar7 == 0) goto LAB_10a132634;
  }
  uVar10 = 0;
  pdVar11 = (double *)*plVar5;
  lVar13 = *(long *)(plVar5[3] + 8);
  do {
    pdVar2[uVar10] = *pdVar11;
    uVar10 = uVar10 + 1;
    pdVar11 = pdVar11 + lVar13;
  } while (uVar7 != uVar10);
LAB_10a132634:
  pdVar11 = (double *)puVar8[1];
  pdVar3 = (double *)puVar8[2];
  uStack_b8 = *puVar8;
  lStack_c0 = plVar4[1];
  pplVar6 = &plStack_c8;
  plStack_c8 = plVar27;
  pdStack_b0 = pdVar11;
  func_0x000109909a3c(param_1,pdVar11,pdVar3,&uStack_b8,pplVar6,pdVar2,1);
  lVar13 = plVar5[2];
  if (0 < lVar13) {
    pdVar12 = (double *)*plVar5;
    lVar14 = *(long *)(plVar5[3] + 8);
    pdVar15 = pdVar2;
    do {
      param_1 = *pdVar15;
      *pdVar12 = param_1;
      pdVar12 = pdVar12 + lVar14;
      lVar13 = lVar13 + -1;
      pdVar15 = pdVar15 + 1;
    } while (lVar13 != 0);
  }
  if (0x4000 < uVar7) {
    pdVar11 = pdVar2;
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
    ___stack_chk_fail();
    if (0x4000 < uVar7) {
      _free(pdVar2);
    }
    pdVar12 = pdVar11;
    __Unwind_Resume();
    *(double **)((long)pdVar1 + -0x20) = pdVar11;
    *(double **)((long)pdVar1 + -0x18) = pdVar2;
    *(undefined1 ***)((long)pdVar1 + -0x10) = &puStack_60;
    *(code **)((long)pdVar1 + -8) = FUN_10a1326f8;
    if (pdVar12 == pdVar3) {
      pdVar11 = (double *)0x10;
      ___cxa_allocate_exception();
      __ZNSt13runtime_errorC1EPKc();
      pdVar2 = pdVar11;
      puVar16 = (undefined8 *)PTR___ZTISt13runtime_error_110346a40;
      puVar8 = (undefined8 *)PTR___ZNSt13runtime_errorD1Ev_1103461d8;
      ___cxa_throw();
      ___cxa_free_exception(pdVar11);
      __Unwind_Resume();
      if (puVar16 == puVar8) {
        dVar19 = 0.0;
        dVar20 = 0.0;
        dVar18 = 0.0;
        dVar21 = 0.0;
        dVar22 = 0.0;
        dVar23 = 0.0;
        dVar24 = 0.0;
        dVar25 = 0.0;
        dVar26 = 0.0;
      }
      else {
        plVar27 = *pplVar6;
        fVar17 = *(float *)(pplVar6 + 1);
        dVar19 = 0.0;
        dVar20 = 0.0;
        dVar18 = 0.0;
        dVar21 = 0.0;
        dVar22 = 0.0;
        dVar23 = 0.0;
        dVar24 = 0.0;
        dVar25 = 0.0;
        dVar26 = 0.0;
        puVar9 = puVar16;
        do {
          lVar13 = 0;
          fVar28 = *(float *)(puVar9 + 1);
          dVar29 = (double)((float)*puVar9 - SUB84(plVar27,0));
          dVar30 = (double)((float)((ulong)*puVar9 >> 0x20) - (float)((ulong)plVar27 >> 0x20));
          *(double *)((long)pdVar1 + -0x88) = dVar30;
          *(double *)((long)pdVar1 + -0x90) = dVar29;
          *(double *)((long)pdVar1 + -0x80) = (double)(fVar28 - fVar17);
          pdVar11 = (double *)((long)pdVar1 + -0x60);
          do {
            dVar31 = *(double *)((long)pdVar1 + lVar13 + -0x90);
            pdVar11[-1] = dVar30 * dVar31;
            pdVar11[-2] = dVar29 * dVar31;
            *pdVar11 = dVar31 * (double)(fVar28 - fVar17);
            lVar13 = lVar13 + 8;
            pdVar11 = pdVar11 + 3;
          } while (lVar13 != 0x18);
          dVar25 = dVar25 + *(double *)((long)pdVar1 + -0x70);
          dVar26 = dVar26 + *(double *)((long)pdVar1 + -0x68);
          dVar23 = dVar23 + *(double *)((long)pdVar1 + -0x60);
          dVar24 = dVar24 + *(double *)((long)pdVar1 + -0x58);
          dVar21 = dVar21 + *(double *)((long)pdVar1 + -0x50);
          dVar22 = dVar22 + *(double *)((long)pdVar1 + -0x48);
          dVar19 = dVar19 + *(double *)((long)pdVar1 + -0x40);
          dVar20 = dVar20 + *(double *)((long)pdVar1 + -0x38);
          dVar18 = dVar18 + *(double *)((long)pdVar1 + -0x30);
          puVar9 = (undefined8 *)((long)puVar9 + 0xc);
        } while (puVar9 != puVar8);
      }
      dVar29 = (double)(ulong)(((long)puVar8 - (long)puVar16 >> 2) * -0x5555555555555555);
      pdVar2[1] = dVar26 / dVar29;
      *pdVar2 = dVar25 / dVar29;
      pdVar2[3] = dVar24 / dVar29;
      pdVar2[2] = dVar23 / dVar29;
      pdVar2[5] = dVar22 / dVar29;
      pdVar2[4] = dVar21 / dVar29;
      pdVar2[7] = dVar20 / dVar29;
      pdVar2[6] = dVar19 / dVar29;
      pdVar2[8] = dVar18 / dVar29;
      return dVar18 / dVar29;
    }
    fVar17 = 0.0;
    pdVar1 = pdVar12;
    do {
      fVar17 = fVar17 + *(float *)pdVar1;
      pdVar1 = (double *)((long)pdVar1 + 0xc);
    } while (pdVar1 != pdVar3);
    return (double)(ulong)(uint)(fVar17 / (float)(ulong)(((long)pdVar3 - (long)pdVar12 >> 2) *
                                                        -0x5555555555555555));
  }
  return param_1;
}



/* Entry: 10a132540; end: 10a132553;  */

double FUN_10a132540(double param_1,undefined8 param_2,undefined8 param_3,long param_4,long *param_5
                    )

{
  double *pdVar1;
  undefined8 *puVar2;
  double *pdVar3;
  double *pdVar4;
  undefined8 *puVar5;
  double *pdVar6;
  ulong uVar7;
  double *pdVar8;
  double *pdVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  double *pdVar13;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  ulong uVar14;
  float fVar15;
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
  float fVar26;
  double unaff_d8;
  double dVar27;
  double dVar28;
  double dVar29;
  double adStack_90 [4];
  double *pdStack_70;
  long lStack_68;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  puVar2 = (undefined8 *)&UNK_10f63e073;
  FUN_109ffde64();
  pcStack_18 = FUN_10a132554;
  pdVar1 = adStack_90;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = param_5[2];
  puStack_20 = &stack0xfffffffffffffff0;
  if (uVar14 >> 0x3d == 0) {
    pdVar3 = (double *)(uVar14 << 3);
    puStack_20 = &stack0xfffffffffffffff0;
    if (uVar14 < 0x4001) goto LAB_10a1325d8;
    puStack_20 = &stack0xfffffffffffffff0;
    _malloc();
    unaff_x20 = param_5;
    unaff_x21 = param_3;
    unaff_x22 = param_4;
    unaff_x23 = puVar2;
    unaff_d8 = param_1;
    if (pdVar3 == (double *)0x0) goto LAB_10a1325b8;
  }
  else {
LAB_10a1325b8:
    param_1 = unaff_d8;
    puVar2 = unaff_x23;
    param_4 = unaff_x22;
    param_3 = unaff_x21;
    param_5 = unaff_x20;
    pdVar3 = (double *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_10a1325d8:
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar10 = -((long)pdVar3 + 0x1eU & 0xfffffffffffffff0);
    pdVar1 = (double *)((long)adStack_90 + lVar10);
    pdVar3 = (double *)((long)adStack_90 + lVar10);
    if (uVar14 == 0) goto LAB_10a132634;
  }
  uVar7 = 0;
  pdVar8 = (double *)*param_5;
  lVar10 = *(long *)(param_5[3] + 8);
  do {
    pdVar3[uVar7] = *pdVar8;
    uVar7 = uVar7 + 1;
    pdVar8 = pdVar8 + lVar10;
  } while (uVar14 != uVar7);
LAB_10a132634:
  pdVar8 = (double *)puVar2[1];
  pdVar4 = (double *)puVar2[2];
  adStack_90[3] = (double)*puVar2;
  adStack_90[2] = *(double *)(param_4 + 8);
  pdVar6 = adStack_90 + 1;
  adStack_90[1] = (double)param_3;
  pdStack_70 = pdVar8;
  func_0x000109909a3c(param_1,pdVar8,pdVar4,adStack_90 + 3,pdVar6,pdVar3,1);
  lVar10 = param_5[2];
  if (0 < lVar10) {
    pdVar9 = (double *)*param_5;
    lVar11 = *(long *)(param_5[3] + 8);
    pdVar13 = pdVar3;
    do {
      param_1 = *pdVar13;
      *pdVar9 = param_1;
      pdVar9 = pdVar9 + lVar11;
      lVar10 = lVar10 + -1;
      pdVar13 = pdVar13 + 1;
    } while (lVar10 != 0);
  }
  if (0x4000 < uVar14) {
    pdVar8 = pdVar3;
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if (0x4000 < uVar14) {
      _free(pdVar3);
    }
    pdVar9 = pdVar8;
    __Unwind_Resume();
    *(double **)((long)pdVar1 + -0x20) = pdVar8;
    *(double **)((long)pdVar1 + -0x18) = pdVar3;
    *(undefined1 ***)((long)pdVar1 + -0x10) = &puStack_20;
    *(code **)((long)pdVar1 + -8) = FUN_10a1326f8;
    if (pdVar9 == pdVar4) {
      pdVar8 = (double *)0x10;
      ___cxa_allocate_exception();
      __ZNSt13runtime_errorC1EPKc();
      pdVar3 = pdVar8;
      puVar2 = (undefined8 *)PTR___ZTISt13runtime_error_110346a40;
      puVar5 = (undefined8 *)PTR___ZNSt13runtime_errorD1Ev_1103461d8;
      ___cxa_throw();
      ___cxa_free_exception(pdVar8);
      __Unwind_Resume();
      if (puVar2 == puVar5) {
        dVar17 = 0.0;
        dVar18 = 0.0;
        dVar16 = 0.0;
        dVar19 = 0.0;
        dVar20 = 0.0;
        dVar21 = 0.0;
        dVar22 = 0.0;
        dVar23 = 0.0;
        dVar24 = 0.0;
      }
      else {
        dVar25 = *pdVar6;
        fVar15 = *(float *)(pdVar6 + 1);
        dVar17 = 0.0;
        dVar18 = 0.0;
        dVar16 = 0.0;
        dVar19 = 0.0;
        dVar20 = 0.0;
        dVar21 = 0.0;
        dVar22 = 0.0;
        dVar23 = 0.0;
        dVar24 = 0.0;
        puVar12 = puVar2;
        do {
          lVar10 = 0;
          fVar26 = *(float *)(puVar12 + 1);
          dVar27 = (double)((float)*puVar12 - SUB84(dVar25,0));
          dVar28 = (double)((float)((ulong)*puVar12 >> 0x20) - (float)((ulong)dVar25 >> 0x20));
          *(double *)((long)pdVar1 + -0x88) = dVar28;
          *(double *)((long)pdVar1 + -0x90) = dVar27;
          *(double *)((long)pdVar1 + -0x80) = (double)(fVar26 - fVar15);
          pdVar8 = (double *)((long)pdVar1 + -0x60);
          do {
            dVar29 = *(double *)((long)pdVar1 + lVar10 + -0x90);
            pdVar8[-1] = dVar28 * dVar29;
            pdVar8[-2] = dVar27 * dVar29;
            *pdVar8 = dVar29 * (double)(fVar26 - fVar15);
            lVar10 = lVar10 + 8;
            pdVar8 = pdVar8 + 3;
          } while (lVar10 != 0x18);
          dVar23 = dVar23 + *(double *)((long)pdVar1 + -0x70);
          dVar24 = dVar24 + *(double *)((long)pdVar1 + -0x68);
          dVar21 = dVar21 + *(double *)((long)pdVar1 + -0x60);
          dVar22 = dVar22 + *(double *)((long)pdVar1 + -0x58);
          dVar19 = dVar19 + *(double *)((long)pdVar1 + -0x50);
          dVar20 = dVar20 + *(double *)((long)pdVar1 + -0x48);
          dVar17 = dVar17 + *(double *)((long)pdVar1 + -0x40);
          dVar18 = dVar18 + *(double *)((long)pdVar1 + -0x38);
          dVar16 = dVar16 + *(double *)((long)pdVar1 + -0x30);
          puVar12 = (undefined8 *)((long)puVar12 + 0xc);
        } while (puVar12 != puVar5);
      }
      dVar25 = (double)(ulong)(((long)puVar5 - (long)puVar2 >> 2) * -0x5555555555555555);
      pdVar3[1] = dVar24 / dVar25;
      *pdVar3 = dVar23 / dVar25;
      pdVar3[3] = dVar22 / dVar25;
      pdVar3[2] = dVar21 / dVar25;
      pdVar3[5] = dVar20 / dVar25;
      pdVar3[4] = dVar19 / dVar25;
      pdVar3[7] = dVar18 / dVar25;
      pdVar3[6] = dVar17 / dVar25;
      pdVar3[8] = dVar16 / dVar25;
      return dVar16 / dVar25;
    }
    fVar15 = 0.0;
    pdVar1 = pdVar9;
    do {
      fVar15 = fVar15 + *(float *)pdVar1;
      pdVar1 = (double *)((long)pdVar1 + 0xc);
    } while (pdVar1 != pdVar4);
    return (double)(ulong)(uint)(fVar15 / (float)(ulong)(((long)pdVar4 - (long)pdVar9 >> 2) *
                                                        -0x5555555555555555));
  }
  return param_1;
}



/* Entry: 10a132554; end: 10a1326f7;  */

double FUN_10a132554(double param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                    long *param_5)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  double *pdVar6;
  ulong uVar7;
  double *pdVar8;
  double *pdVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  double *pdVar13;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  ulong uVar14;
  float fVar15;
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
  float fVar26;
  double unaff_d8;
  double dVar27;
  double dVar28;
  double dVar29;
  double adStack_80 [4];
  double *pdStack_60;
  long lStack_58;
  
  pdVar1 = adStack_80;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = param_5[2];
  if (uVar14 >> 0x3d == 0) {
    pdVar2 = (double *)(uVar14 << 3);
    if (uVar14 < 0x4001) goto LAB_10a1325d8;
    _malloc();
    unaff_x20 = param_5;
    unaff_x21 = param_3;
    unaff_x22 = param_4;
    unaff_x23 = param_2;
    unaff_d8 = param_1;
    if (pdVar2 == (double *)0x0) goto LAB_10a1325b8;
  }
  else {
LAB_10a1325b8:
    param_1 = unaff_d8;
    param_2 = unaff_x23;
    param_4 = unaff_x22;
    param_3 = unaff_x21;
    param_5 = unaff_x20;
    pdVar2 = (double *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_10a1325d8:
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar10 = -((long)pdVar2 + 0x1eU & 0xfffffffffffffff0);
    pdVar1 = (double *)((long)adStack_80 + lVar10);
    pdVar2 = (double *)((long)adStack_80 + lVar10);
    if (uVar14 == 0) goto LAB_10a132634;
  }
  uVar7 = 0;
  pdVar8 = (double *)*param_5;
  lVar10 = *(long *)(param_5[3] + 8);
  do {
    pdVar2[uVar7] = *pdVar8;
    uVar7 = uVar7 + 1;
    pdVar8 = pdVar8 + lVar10;
  } while (uVar14 != uVar7);
LAB_10a132634:
  pdVar8 = (double *)param_2[1];
  pdVar3 = (double *)param_2[2];
  adStack_80[3] = (double)*param_2;
  adStack_80[2] = *(double *)(param_4 + 8);
  pdVar6 = adStack_80 + 1;
  adStack_80[1] = (double)param_3;
  pdStack_60 = pdVar8;
  func_0x000109909a3c(param_1,pdVar8,pdVar3,adStack_80 + 3,pdVar6,pdVar2,1);
  lVar10 = param_5[2];
  if (0 < lVar10) {
    pdVar9 = (double *)*param_5;
    lVar11 = *(long *)(param_5[3] + 8);
    pdVar13 = pdVar2;
    do {
      param_1 = *pdVar13;
      *pdVar9 = param_1;
      pdVar9 = pdVar9 + lVar11;
      lVar10 = lVar10 + -1;
      pdVar13 = pdVar13 + 1;
    } while (lVar10 != 0);
  }
  if (0x4000 < uVar14) {
    pdVar8 = pdVar2;
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (0x4000 < uVar14) {
      _free(pdVar2);
    }
    pdVar9 = pdVar8;
    __Unwind_Resume();
    *(double **)((long)pdVar1 + -0x20) = pdVar8;
    *(double **)((long)pdVar1 + -0x18) = pdVar2;
    *(undefined1 **)((long)pdVar1 + -0x10) = &stack0xfffffffffffffff0;
    *(code **)((long)pdVar1 + -8) = FUN_10a1326f8;
    if (pdVar9 == pdVar3) {
      pdVar8 = (double *)0x10;
      ___cxa_allocate_exception();
      __ZNSt13runtime_errorC1EPKc();
      pdVar2 = pdVar8;
      puVar4 = (undefined8 *)PTR___ZTISt13runtime_error_110346a40;
      puVar5 = (undefined8 *)PTR___ZNSt13runtime_errorD1Ev_1103461d8;
      ___cxa_throw();
      ___cxa_free_exception(pdVar8);
      __Unwind_Resume();
      if (puVar4 == puVar5) {
        dVar17 = 0.0;
        dVar18 = 0.0;
        dVar16 = 0.0;
        dVar19 = 0.0;
        dVar20 = 0.0;
        dVar21 = 0.0;
        dVar22 = 0.0;
        dVar23 = 0.0;
        dVar24 = 0.0;
      }
      else {
        dVar25 = *pdVar6;
        fVar15 = *(float *)(pdVar6 + 1);
        dVar17 = 0.0;
        dVar18 = 0.0;
        dVar16 = 0.0;
        dVar19 = 0.0;
        dVar20 = 0.0;
        dVar21 = 0.0;
        dVar22 = 0.0;
        dVar23 = 0.0;
        dVar24 = 0.0;
        puVar12 = puVar4;
        do {
          lVar10 = 0;
          fVar26 = *(float *)(puVar12 + 1);
          dVar27 = (double)((float)*puVar12 - SUB84(dVar25,0));
          dVar28 = (double)((float)((ulong)*puVar12 >> 0x20) - (float)((ulong)dVar25 >> 0x20));
          *(double *)((long)pdVar1 + -0x88) = dVar28;
          *(double *)((long)pdVar1 + -0x90) = dVar27;
          *(double *)((long)pdVar1 + -0x80) = (double)(fVar26 - fVar15);
          pdVar8 = (double *)((long)pdVar1 + -0x60);
          do {
            dVar29 = *(double *)((long)pdVar1 + lVar10 + -0x90);
            pdVar8[-1] = dVar28 * dVar29;
            pdVar8[-2] = dVar27 * dVar29;
            *pdVar8 = dVar29 * (double)(fVar26 - fVar15);
            lVar10 = lVar10 + 8;
            pdVar8 = pdVar8 + 3;
          } while (lVar10 != 0x18);
          dVar23 = dVar23 + *(double *)((long)pdVar1 + -0x70);
          dVar24 = dVar24 + *(double *)((long)pdVar1 + -0x68);
          dVar21 = dVar21 + *(double *)((long)pdVar1 + -0x60);
          dVar22 = dVar22 + *(double *)((long)pdVar1 + -0x58);
          dVar19 = dVar19 + *(double *)((long)pdVar1 + -0x50);
          dVar20 = dVar20 + *(double *)((long)pdVar1 + -0x48);
          dVar17 = dVar17 + *(double *)((long)pdVar1 + -0x40);
          dVar18 = dVar18 + *(double *)((long)pdVar1 + -0x38);
          dVar16 = dVar16 + *(double *)((long)pdVar1 + -0x30);
          puVar12 = (undefined8 *)((long)puVar12 + 0xc);
        } while (puVar12 != puVar5);
      }
      dVar25 = (double)(ulong)(((long)puVar5 - (long)puVar4 >> 2) * -0x5555555555555555);
      pdVar2[1] = dVar24 / dVar25;
      *pdVar2 = dVar23 / dVar25;
      pdVar2[3] = dVar22 / dVar25;
      pdVar2[2] = dVar21 / dVar25;
      pdVar2[5] = dVar20 / dVar25;
      pdVar2[4] = dVar19 / dVar25;
      pdVar2[7] = dVar18 / dVar25;
      pdVar2[6] = dVar17 / dVar25;
      pdVar2[8] = dVar16 / dVar25;
      return dVar16 / dVar25;
    }
    fVar15 = 0.0;
    pdVar1 = pdVar9;
    do {
      fVar15 = fVar15 + *(float *)pdVar1;
      pdVar1 = (double *)((long)pdVar1 + 0xc);
    } while (pdVar1 != pdVar3);
    return (double)(ulong)(uint)(fVar15 / (float)(ulong)(((long)pdVar3 - (long)pdVar9 >> 2) *
                                                        -0x5555555555555555));
  }
  return param_1;
}



/* Entry: 10a1326f8; end: 10a1327af;  */

double FUN_10a1326f8(float *param_1,float *param_2,undefined8 param_3,undefined8 *param_4)

{
  double *pdVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined8 *puVar6;
  long lVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  float fVar19;
  double dVar20;
  double adStack_90 [4];
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  
  if (param_1 == param_2) {
    pdVar1 = (double *)0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC1EPKc();
    pdVar2 = pdVar1;
    puVar3 = (undefined8 *)PTR___ZTISt13runtime_error_110346a40;
    puVar4 = (undefined8 *)PTR___ZNSt13runtime_errorD1Ev_1103461d8;
    ___cxa_throw();
    ___cxa_free_exception(pdVar1);
    __Unwind_Resume();
    if (puVar3 == puVar4) {
      dVar10 = 0.0;
      dVar11 = 0.0;
      dVar9 = 0.0;
      dVar12 = 0.0;
      dVar13 = 0.0;
      dVar14 = 0.0;
      dVar15 = 0.0;
      dVar16 = 0.0;
      dVar17 = 0.0;
    }
    else {
      uVar18 = *param_4;
      fVar8 = *(float *)(param_4 + 1);
      dVar10 = 0.0;
      dVar11 = 0.0;
      dVar9 = 0.0;
      dVar12 = 0.0;
      dVar13 = 0.0;
      dVar14 = 0.0;
      dVar15 = 0.0;
      dVar16 = 0.0;
      dVar17 = 0.0;
      puVar6 = puVar3;
      do {
        lVar7 = 0;
        fVar19 = *(float *)(puVar6 + 1);
        adStack_90[0] = (double)((float)*puVar6 - (float)uVar18);
        adStack_90[1] = (double)((float)((ulong)*puVar6 >> 0x20) - (float)((ulong)uVar18 >> 0x20));
        adStack_90[2] = (double)(fVar19 - fVar8);
        pdVar1 = &dStack_60;
        do {
          dVar20 = *(double *)((long)adStack_90 + lVar7);
          pdVar1[-1] = adStack_90[1] * dVar20;
          pdVar1[-2] = adStack_90[0] * dVar20;
          *pdVar1 = dVar20 * (double)(fVar19 - fVar8);
          lVar7 = lVar7 + 8;
          pdVar1 = pdVar1 + 3;
        } while (lVar7 != 0x18);
        dVar16 = dVar16 + dStack_70;
        dVar17 = dVar17 + dStack_68;
        dVar14 = dVar14 + dStack_60;
        dVar15 = dVar15 + dStack_58;
        dVar12 = dVar12 + dStack_50;
        dVar13 = dVar13 + dStack_48;
        dVar10 = dVar10 + dStack_40;
        dVar11 = dVar11 + dStack_38;
        dVar9 = dVar9 + dStack_30;
        puVar6 = (undefined8 *)((long)puVar6 + 0xc);
      } while (puVar6 != puVar4);
    }
    dVar20 = (double)(ulong)(((long)puVar4 - (long)puVar3 >> 2) * -0x5555555555555555);
    pdVar2[1] = dVar17 / dVar20;
    *pdVar2 = dVar16 / dVar20;
    pdVar2[3] = dVar15 / dVar20;
    pdVar2[2] = dVar14 / dVar20;
    pdVar2[5] = dVar13 / dVar20;
    pdVar2[4] = dVar12 / dVar20;
    pdVar2[7] = dVar11 / dVar20;
    pdVar2[6] = dVar10 / dVar20;
    pdVar2[8] = dVar9 / dVar20;
    return dVar9 / dVar20;
  }
  fVar8 = 0.0;
  pfVar5 = param_1;
  do {
    fVar8 = fVar8 + *pfVar5;
    pfVar5 = pfVar5 + 3;
  } while (pfVar5 != param_2);
  return (double)(ulong)(uint)(fVar8 / (float)(ulong)(((long)param_2 - (long)param_1 >> 2) *
                                                     -0x5555555555555555));
}



/* Entry: 10a1327b0; end: 10a1328b7;  */

void FUN_10a1327b0(double *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double adStack_70 [4];
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  double dStack_10;
  
  if (param_2 == param_3) {
    dVar5 = 0.0;
    dVar6 = 0.0;
    dVar4 = 0.0;
    dVar7 = 0.0;
    dVar8 = 0.0;
    dVar9 = 0.0;
    dVar10 = 0.0;
    dVar11 = 0.0;
    dVar12 = 0.0;
  }
  else {
    uVar13 = *param_4;
    fVar14 = *(float *)(param_4 + 1);
    dVar5 = 0.0;
    dVar6 = 0.0;
    dVar4 = 0.0;
    dVar7 = 0.0;
    dVar8 = 0.0;
    dVar9 = 0.0;
    dVar10 = 0.0;
    dVar11 = 0.0;
    dVar12 = 0.0;
    puVar1 = param_2;
    do {
      lVar2 = 0;
      fVar15 = *(float *)(puVar1 + 1);
      adStack_70[0] = (double)((float)*puVar1 - (float)uVar13);
      adStack_70[1] = (double)((float)((ulong)*puVar1 >> 0x20) - (float)((ulong)uVar13 >> 0x20));
      adStack_70[2] = (double)(fVar15 - fVar14);
      pdVar3 = &dStack_40;
      do {
        dVar16 = *(double *)((long)adStack_70 + lVar2);
        pdVar3[-1] = adStack_70[1] * dVar16;
        pdVar3[-2] = adStack_70[0] * dVar16;
        *pdVar3 = dVar16 * (double)(fVar15 - fVar14);
        lVar2 = lVar2 + 8;
        pdVar3 = pdVar3 + 3;
      } while (lVar2 != 0x18);
      dVar11 = dVar11 + dStack_50;
      dVar12 = dVar12 + dStack_48;
      dVar9 = dVar9 + dStack_40;
      dVar10 = dVar10 + dStack_38;
      dVar7 = dVar7 + dStack_30;
      dVar8 = dVar8 + dStack_28;
      dVar5 = dVar5 + dStack_20;
      dVar6 = dVar6 + dStack_18;
      dVar4 = dVar4 + dStack_10;
      puVar1 = (undefined8 *)((long)puVar1 + 0xc);
    } while (puVar1 != param_3);
  }
  dVar16 = (double)(ulong)(((long)param_3 - (long)param_2 >> 2) * -0x5555555555555555);
  param_1[1] = dVar12 / dVar16;
  *param_1 = dVar11 / dVar16;
  param_1[3] = dVar10 / dVar16;
  param_1[2] = dVar9 / dVar16;
  param_1[5] = dVar8 / dVar16;
  param_1[4] = dVar7 / dVar16;
  param_1[7] = dVar6 / dVar16;
  param_1[6] = dVar5 / dVar16;
  param_1[8] = dVar4 / dVar16;
  return;
}



/* Entry: 10a1328b8; end: 10a1328bf;  */

void FUN_10a1328b8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1328bc);
  (*pcVar1)();
}



/* Entry: 10a1328c0; end: 10a1328e7;  */

void FUN_10a1328c0(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *extraout_x8;
  long *plVar6;
  
  FUN_109ffde64(&UNK_10f63e073);
  FUN_109ffde64(&UNK_10f63e073);
  lVar5 = 0x2d0;
  __Znwm();
  FUN_10a132950();
  *extraout_x8 = lVar5 + 0x18;
  extraout_x8[1] = lVar5;
  if (((long *)(lVar5 + 0x58) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x60), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar6 = (long *)extraout_x8[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = *(long *)(lVar5 + 0x60);
    }
    *(long *)(lVar5 + 0x58) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x60) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a1328e8; end: 10a13294f;  */

void FUN_10a1328e8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x2d0;
  __Znwm();
  FUN_10a132950();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x58) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x60), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = *(long *)(lVar5 + 0x60);
    }
    *(long *)(lVar5 + 0x58) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x60) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a132950; end: 10a13299b;  */

undefined8 * FUN_10a132950(undefined8 *param_1,undefined8 *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b9fcf0;
  FUN_10a1db5e8(param_1 + 3,*param_2);
  return param_1;
}



/* Entry: 10a13299c; end: 10a132a57;  */

void FUN_10a13299c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuStack_60;
  undefined1 *puStack_58;
  undefined8 *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  puVar1 = PTR___tlv_bootstrap_11340d750;
  ppuVar4 = &PTR___tlv_bootstrap_11340d750;
  ppuVar2 = ppuVar4;
  uStack_40 = param_2;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar3 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar2 & 1) == 0) {
    ppuVar2 = ppuVar3;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar2,0x100000000);
    (*(code *)puVar1)();
    *(undefined1 *)ppuVar4 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puStack_48 = ppuVar3[2];
  ppuStack_60 = &puStack_48;
  puStack_58 = &uStack_31;
  puStack_50 = &uStack_40;
  FUN_10a132a58(param_1,&ppuStack_60);
  return;
}



/* Entry: 10a132a58; end: 10a132a8f;  */

char * FUN_10a132a58(char *param_1,char *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uStack_48;
  
  puVar11 = (undefined8 *)**(long **)param_2;
  if (puVar11 == (undefined8 *)0x0) {
    *param_1 = '\0';
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    param_1[0x28] = '\0';
    return param_2;
  }
  uVar12 = **(undefined8 **)(param_2 + 0x10);
  cVar2 = *(char *)(puVar11[1] + 0x17);
  *param_1 = cVar2;
  param_1[2] = '\a';
  param_1[3] = '\0';
  *(undefined8 *)(param_1 + 8) = uVar12;
  ppuVar8 = &PTR___tlv_bootstrap_11340dd08;
  (*(code *)PTR___tlv_bootstrap_11340dd08)();
  iVar13 = *(int *)ppuVar8;
  if (*(int *)ppuVar8 == 0) {
    uStack_48 = 0;
    _pthread_threadid_np(0,&uStack_48);
    *(int *)ppuVar8 = (int)uStack_48;
    iVar13 = (int)uStack_48;
  }
  *(int *)(param_1 + 0x10) = iVar13;
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  param_1[0x28] = '\0';
  if ((cVar2 != '\0') && (puVar11 != (undefined8 *)0x0)) {
    if (((*(byte *)(puVar11[1] + 0x42) | *(byte *)(puVar11[1] + 0x43)) & 1) != 0) {
      uVar6 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      uVar15 = cntvct_el0;
      if (uVar6 != 1000000000) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar15 / uVar6;
        }
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar5 = ((uVar15 - uVar4 * uVar6) * 1000000000) / uVar6;
        }
        uVar15 = uVar5 + uVar4 * 1000000000;
      }
      *(ulong *)(param_1 + 0x18) = uVar15;
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = *(undefined2 *)(param_1 + 2);
      uVar12 = *(undefined8 *)(param_1 + 8);
      puVar9 = puVar11;
      FUN_10a1333cc();
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = uVar12;
        puVar9[1] = 0;
        puVar9[2] = uVar15;
        *(undefined4 *)(puVar9 + 3) = uVar1;
        *(undefined2 *)((long)puVar9 + 0x1c) = uVar3;
        *(undefined1 *)((long)puVar9 + 0x1e) = 3;
        if ((*(byte *)(puVar11 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10a1333cc);
          (*pcVar7)();
        }
        puVar11[0x18] = puVar11[0x18] + 1;
      }
    }
    if (*(char *)(puVar11[1] + 0x41) == '\x01') {
      plVar14 = (long *)puVar11[0xb];
      if (plVar14 != (long *)0x0) {
        plVar10 = plVar14;
        (**(code **)(*plVar14 + 0x10))(plVar14,*(undefined8 *)(param_1 + 8));
        *(long **)(param_1 + 0x20) = plVar10;
      }
      param_1[0x28] = plVar14 != (long *)0x0;
    }
  }
  return param_1;
}



/* Entry: 10a132a90; end: 10a132b1f;  */

void FUN_10a132a90(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  if (*param_1 != 0) {
    FUN_10a132b84(*(undefined8 *)(*param_1 + 0x10));
  }
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  FUN_10a132b20(param_1,&uStack_30);
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
  param_1[2] = 0;
  param_1[3] = -1;
  func_0x00010a13320c(param_1);
  return;
}



/* Entry: 10a132b20; end: 10a132b83;  */

undefined8 * FUN_10a132b20(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a132b84; end: 10a132c33;  */

void FUN_10a132b84(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = param_1;
  _pthread_self();
  __ZNSt3__15mutex4lockEv(param_1 + 0x148);
  lVar2 = *(long *)(param_1 + 400) - *(long *)(param_1 + 0x188);
  if (lVar2 != 0) {
    uVar5 = 0;
    do {
      if (lVar4 == *(long *)(*(long *)(param_1 + 0x188) + uVar5 * 8)) {
        lVar1 = *(long *)(param_1 + 0x1d8);
        if ((ulong)(*(long *)(param_1 + 0x1e0) - lVar1) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10a132c1c);
          (*pcVar3)();
        }
        if (*(char *)(lVar1 + uVar5) != '\0') {
          if (*(char *)(param_1 + 0x20b) == '\x01') {
            *(undefined1 *)(lVar1 + uVar5) = 0;
          }
          else {
            FUN_10a132c34(param_1);
          }
          break;
        }
      }
      uVar5 = uVar5 + 1;
    } while (lVar2 >> 3 != uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x148);
  return;
}



/* Entry: 10a132c34; end: 10a132dcf;  */

void FUN_10a132c34(long param_1,ulong param_2)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  
  uVar6 = (*(long *)(param_1 + 0x1b8) - *(long *)(param_1 + 0x1b0) >> 3) * -0x5555555555555555 - 1;
  if (uVar6 != param_2) {
    lVar11 = *(long *)(param_1 + 0x188);
    uVar8 = *(long *)(param_1 + 400) - lVar11 >> 3;
    if ((uVar8 <= param_2) || (uVar8 <= uVar6)) goto LAB_10a132d78;
    uVar9 = *(undefined8 *)(lVar11 + param_2 * 8);
    *(undefined8 *)(lVar11 + param_2 * 8) = *(undefined8 *)(lVar11 + uVar6 * 8);
    *(undefined8 *)(lVar11 + uVar6 * 8) = uVar9;
    lVar11 = *(long *)(param_1 + 0x1b0);
    uVar8 = (*(long *)(param_1 + 0x1b8) - lVar11 >> 3) * -0x5555555555555555;
    if ((uVar8 < param_2 || uVar8 - param_2 == 0) || (uVar8 < uVar6 || uVar8 - uVar6 == 0))
    goto LAB_10a132d78;
    puVar10 = (undefined8 *)(lVar11 + param_2 * 0x18);
    puVar7 = (undefined8 *)(lVar11 + uVar6 * 0x18);
    uVar9 = *puVar10;
    *puVar10 = *puVar7;
    *puVar7 = uVar9;
    uVar9 = puVar10[2];
    uVar12 = puVar7[1];
    puVar10[2] = puVar7[2];
    puVar10[1] = uVar12;
    puVar7[2] = uVar9;
    lVar11 = *(long *)(param_1 + 0x1d8);
    uVar8 = *(long *)(param_1 + 0x1e0) - lVar11;
    if ((uVar8 <= param_2) || (uVar8 <= uVar6)) goto LAB_10a132d78;
    uVar2 = *(undefined1 *)(lVar11 + param_2);
    *(undefined1 *)(lVar11 + param_2) = *(undefined1 *)(lVar11 + uVar6);
    *(undefined1 *)(lVar11 + uVar6) = uVar2;
  }
  if (*(long *)(param_1 + 0x188) != *(long *)(param_1 + 400)) {
    *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + -8;
    if (*(long *)(param_1 + 0x1b0) != *(long *)(param_1 + 0x1b8)) {
      lVar11 = *(long *)(param_1 + 0x1b8) + -0x18;
      func_0x00010a132d7c(lVar11,0);
      *(long *)(param_1 + 0x1b8) = lVar11;
      if (*(long *)(param_1 + 0x1d8) != *(long *)(param_1 + 0x1e0)) {
        *(long *)(param_1 + 0x1e0) = *(long *)(param_1 + 0x1e0) + -1;
        piVar1 = (int *)(param_1 + 0x218);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        return;
      }
    }
  }
LAB_10a132d78:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a132d7c);
  (*pcVar5)();
}



/* Entry: 10a132dd0; end: 10a132f6f;  */

long FUN_10a132dd0(long param_1)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plStack_48;
  
  if (*(char *)(param_1 + 0x1c0) == '\x01') {
    do {
      uVar6 = *(ulong *)(param_1 + 0x140);
      if ((uVar6 == *(ulong *)(param_1 + 0x180)) &&
         (*(ulong *)(param_1 + 0x180) = *(ulong *)(param_1 + 0xc0),
         uVar6 == *(ulong *)(param_1 + 0xc0))) {
        if (((*(byte *)(param_1 + 0x1c0) & 1) != 0) &&
           (lVar10 = *(long *)(param_1 + 0x88), lVar10 != 0)) {
          lVar7 = *(long *)(param_1 + 0x90);
          plVar9 = (long *)(*(long *)(param_1 + 0x80) + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *plVar9 = *plVar9 + lVar7 * -0x20;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          __ZdlPvSt11align_val_t(lVar10,0x20);
        }
        break;
      }
      lVar10 = *(long *)(param_1 + 0x88) + (*(long *)(param_1 + 0x90) - 1U & uVar6) * 0x20;
      plVar9 = *(long **)(lVar10 + 8);
      bVar2 = *(byte *)(lVar10 + 0x1e);
      *(ulong *)(param_1 + 0x140) = uVar6 + 1;
      if (bVar2 < 0x14) {
        uVar3 = 1 << (ulong)(bVar2 & 0x1f);
        if ((uVar3 & 0x892) == 0) {
          if ((uVar3 & 0xf0000) == 0) {
            if ((uVar3 & 0xe000) != 0 && plVar9 != (long *)0x0) {
              lVar10 = *(long *)(param_1 + 0x10);
              lVar7 = *plVar9;
              if (lVar7 != 0) {
                plVar9[1] = lVar7;
                lVar8 = plVar9[2];
                plVar1 = (long *)(plVar9[4] + 8);
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar5) {
                    *plVar1 = *plVar1 - (lVar8 - lVar7);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                __ZdlPv();
              }
              goto LAB_10a132ed8;
            }
          }
          else if (plVar9 != (long *)0x0) {
            lVar10 = *(long *)(param_1 + 0x10);
            FUN_10a1330f0(plVar9);
            lVar7 = 200;
            goto LAB_10a132edc;
          }
        }
        else if (plVar9 != (long *)0x0) {
          lVar10 = *(long *)(param_1 + 0x10);
          plStack_48 = plVar9;
          FUN_10a132f70(&plStack_48);
LAB_10a132ed8:
          lVar7 = 0x28;
LAB_10a132edc:
          plVar1 = (long *)(lVar10 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 - lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          __ZdlPv(plVar9);
        }
      }
    } while ((*(byte *)(param_1 + 0x1c0) & 1) != 0);
  }
  func_0x00010a1331b4(param_1 + 0x58);
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a132f70; end: 10a133003;  */

void FUN_10a132f70(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = (long *)*param_1;
  lVar7 = *plVar6;
  if (lVar7 != 0) {
    lVar5 = plVar6[1];
    lVar3 = lVar7;
    plVar4 = plVar6;
    if (lVar5 != lVar7) {
      do {
        lVar5 = lVar5 + -0x58;
        FUN_10a133004(lVar5);
      } while (lVar5 != lVar7);
      plVar4 = (long *)*param_1;
      lVar3 = *plVar4;
    }
    plVar6[1] = lVar7;
    lVar7 = plVar4[2];
    plVar6 = (long *)(plVar4[4] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 - (lVar7 - lVar3);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a133004; end: 10a13305f;  */

void FUN_10a133004(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  FUN_10a133060(param_1 + 5);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
  uVar4 = *param_1;
  uVar5 = param_1[2];
  plVar1 = (long *)(param_1[4] + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 - (uVar5 & 0x7fffffffffffffff);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar4);
  return;
}



/* Entry: 10a133060; end: 10a1330b3;  */

void FUN_10a133060(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110ba6f28)[*(uint *)(param_1 + 0x28)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 10a1330b4; end: 10a1330ef;  */

void FUN_10a1330b4(void)

{
  return;
}



/* Entry: 10a1330f0; end: 10a133263;  */

void FUN_10a1330f0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  lVar4 = param_1[0x13];
  if (lVar4 != 0) {
    param_1[0x14] = lVar4;
    lVar6 = param_1[0x15];
    plVar1 = (long *)(param_1[0x17] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 - (lVar6 - lVar4);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    __ZdlPv();
  }
  puStack_28 = param_1 + 0xd;
  FUN_10a132f70(&puStack_28);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    uVar5 = param_1[6];
    uVar7 = param_1[8];
    plVar1 = (long *)(param_1[10] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 - (uVar7 & 0x7fffffffffffffff);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    __ZdlPv(uVar5);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    uVar5 = *param_1;
    uVar7 = param_1[2];
    plVar1 = (long *)(param_1[4] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 - (uVar7 & 0x7fffffffffffffff);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    __ZdlPv(uVar5);
  }
  return;
}



/* Entry: 10a133264; end: 10a1333cb;  */

undefined1 * FUN_10a133264(undefined1 *param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uStack_48;
  
  *param_1 = (char)param_2;
  *(undefined2 *)(param_1 + 2) = 7;
  *(undefined8 *)(param_1 + 8) = param_4;
  ppuVar7 = &PTR___tlv_bootstrap_11340dd08;
  (*(code *)PTR___tlv_bootstrap_11340dd08)();
  iVar10 = *(int *)ppuVar7;
  if (*(int *)ppuVar7 == 0) {
    uStack_48 = 0;
    _pthread_threadid_np(0,&uStack_48);
    *(int *)ppuVar7 = (int)uStack_48;
    iVar10 = (int)uStack_48;
  }
  *(int *)(param_1 + 0x10) = iVar10;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x28] = 0;
  if ((param_2 != 0) && (param_3 != (undefined8 *)0x0)) {
    if (((*(byte *)(param_3[1] + 0x42) | *(byte *)(param_3[1] + 0x43)) & 1) != 0) {
      uVar5 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      uVar12 = cntvct_el0;
      if (uVar5 != 1000000000) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar12 / uVar5;
        }
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = ((uVar12 - uVar3 * uVar5) * 1000000000) / uVar5;
        }
        uVar12 = uVar4 + uVar3 * 1000000000;
      }
      *(ulong *)(param_1 + 0x18) = uVar12;
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = *(undefined2 *)(param_1 + 2);
      uVar13 = *(undefined8 *)(param_1 + 8);
      puVar8 = param_3;
      FUN_10a1333cc();
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = uVar13;
        puVar8[1] = 0;
        puVar8[2] = uVar12;
        *(undefined4 *)(puVar8 + 3) = uVar1;
        *(undefined2 *)((long)puVar8 + 0x1c) = uVar2;
        *(undefined1 *)((long)puVar8 + 0x1e) = 3;
        if ((*(byte *)(param_3 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1333cc);
          (*pcVar6)();
        }
        param_3[0x18] = param_3[0x18] + 1;
      }
    }
    if (*(char *)(param_3[1] + 0x41) == '\x01') {
      plVar11 = (long *)param_3[0xb];
      if (plVar11 != (long *)0x0) {
        plVar9 = plVar11;
        (**(code **)(*plVar11 + 0x10))(plVar11,*(undefined8 *)(param_1 + 8));
        *(long **)(param_1 + 0x20) = plVar9;
      }
      param_1[0x28] = plVar11 != (long *)0x0;
    }
  }
  return param_1;
}



/* Entry: 10a1333cc; end: 10a133567;  */

long FUN_10a1333cc(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lStack_38;
  
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    plVar5 = *(long **)(param_1 + 0x20);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return 0;
  }
  if ((*(byte *)(param_1 + 0x1c0) & 1) == 0) goto LAB_10a133560;
  uVar4 = *(ulong *)(param_1 + 0xc0);
  uVar6 = *(ulong *)(param_1 + 0x90);
  if (uVar4 - *(long *)(param_1 + 0x100) < uVar6) {
LAB_10a13342c:
    lVar7 = *(long *)(param_1 + 0x88);
    if (lVar7 != 0) {
LAB_10a133434:
      return lVar7 + (uVar6 - 1 & uVar4) * 0x20;
    }
  }
  else {
    *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0x140);
    uVar6 = *(ulong *)(param_1 + 0x90);
    if (uVar4 - *(long *)(param_1 + 0x140) < uVar6) goto LAB_10a13342c;
  }
  plVar5 = *(long **)(param_1 + 0x28);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  iVar8 = 3;
  do {
    _sched_yield();
    if ((*(byte *)(param_1 + 0x1c0) & 1) == 0) goto LAB_10a133560;
    uVar4 = *(ulong *)(param_1 + 0xc0);
    uVar6 = *(ulong *)(param_1 + 0x90);
    if (uVar4 - *(long *)(param_1 + 0x100) < uVar6) {
LAB_10a1334c8:
      lVar7 = *(long *)(param_1 + 0x88);
      if (lVar7 != 0) goto LAB_10a133434;
    }
    else {
      *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0x140);
      uVar6 = *(ulong *)(param_1 + 0x90);
      if (uVar4 - *(long *)(param_1 + 0x140) < uVar6) goto LAB_10a1334c8;
    }
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar8 = 4;
  lVar9 = 1;
  while( true ) {
    lStack_38 = lVar9 * 1000000;
    __ZNSt3__111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE
              (&lStack_38);
    if ((*(byte *)(param_1 + 0x1c0) & 1) == 0) break;
    uVar4 = *(ulong *)(param_1 + 0xc0);
    uVar6 = *(ulong *)(param_1 + 0x90);
    if (uVar4 - *(long *)(param_1 + 0x100) < uVar6) {
LAB_10a133534:
      lVar7 = *(long *)(param_1 + 0x88);
      if (lVar7 != 0) goto LAB_10a133434;
    }
    else {
      *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0x140);
      uVar6 = *(ulong *)(param_1 + 0x90);
      if (uVar4 - *(long *)(param_1 + 0x140) < uVar6) goto LAB_10a133534;
    }
    lVar9 = lVar9 << 1;
    iVar8 = iVar8 + -1;
    if (iVar8 == 0) {
      plVar5 = *(long **)(param_1 + 0x20);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      return 0;
    }
  }
LAB_10a133560:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a133564);
  (*pcVar3)();
}



/* Entry: 10a133568; end: 10a13357b;  */

/* WARNING: Removing unreachable block (ram,0x00010a1335b4) */

void FUN_10a133568(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&UNK_10f63e073;
  FUN_109ffde64();
  lVar3 = *plVar1;
  if (lVar3 == 0) {
    return;
  }
  lVar4 = plVar1[1];
  lVar2 = lVar3;
  if (lVar4 != lVar3) {
    do {
      lVar4 = lVar4 + -0x30;
    } while (lVar4 != lVar3);
    lVar2 = *plVar1;
  }
  plVar1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10a13357c; end: 10a1335eb;  */

/* WARNING: Removing unreachable block (ram,0x00010a1335b4) */

void FUN_10a13357c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  lVar3 = param_1[1];
  lVar1 = lVar2;
  if (lVar3 != lVar2) {
    do {
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != lVar2);
    lVar1 = *param_1;
  }
  param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}


