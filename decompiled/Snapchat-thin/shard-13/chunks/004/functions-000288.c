/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a5a079c; end: 10a5a080f;  */

undefined8 * FUN_10a5a079c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
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
  *param_1 = param_2;
  param_1[1] = param_3;
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



/* Entry: 10a5a0810; end: 10a5a0823;  */

undefined8 * FUN_10a5a0810(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar6 = *(long *)(param_1 + 0x48);
  uVar2 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = *(long **)(lVar6 + 0x40);
  *(undefined8 *)(lVar6 + 0x38) = uVar2;
  *(long *)(lVar6 + 0x40) = lVar5;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return (undefined8 *)(lVar6 + 0x38);
}



/* Entry: 10a5a0824; end: 10a5a0aaf;  */

void FUN_10a5a0824(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined8 *puVar4;
  char cVar5;
  code *pcVar6;
  undefined8 ***pppuVar7;
  long lVar8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined8 **ppuStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 **ppuStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_1 + 0x48);
  *(undefined1 *)(lVar8 + 0x68) = 1;
  FUN_10a5bb88c();
  if (cRam00000001137eb4b7 < '\0') {
    func_0x000107c3192c(&ppuStack_90,pppuRam00000001137eb4a0,uRam00000001137eb4a8);
  }
  else {
    uStack_88 = uRam00000001137eb4a8;
    ppuStack_90 = pppuRam00000001137eb4a0;
    uStack_80 = CONCAT17(cRam00000001137eb4b7,uRam00000001137eb4b0);
  }
  if (*(char *)(lVar8 + 0x87) < '\0') {
    func_0x000107c3192c(&ppuStack_b0,*(undefined8 *)(lVar8 + 0x70),*(undefined8 *)(lVar8 + 0x78));
  }
  else {
    uStack_a8 = *(ulong *)(lVar8 + 0x78);
    ppuStack_b0 = *(undefined8 ***)(lVar8 + 0x70);
    uStack_a0 = *(ulong *)(lVar8 + 0x80);
  }
  uVar1 = uStack_88;
  if (-1 < (long)uStack_80) {
    uVar1 = uStack_80 >> 0x38;
  }
  uVar2 = uStack_a8;
  if (-1 < (long)uStack_a0) {
    uVar2 = uStack_a0 >> 0x38;
  }
  if (uVar1 == uVar2) {
    pppuVar7 = (undefined8 ***)ppuStack_90;
    if (-1 < (long)uStack_80) {
      pppuVar7 = &ppuStack_90;
    }
    pppuVar3 = (undefined8 ***)ppuStack_b0;
    if (-1 < (long)uStack_a0) {
      pppuVar3 = &ppuStack_b0;
    }
    _memcmp(pppuVar7,pppuVar3);
    if ((int)pppuVar7 != 0) goto LAB_10a5a090c;
  }
  else {
LAB_10a5a090c:
    FUN_10ad00b0c(&ppuStack_90);
    pppuVar7 = &ppuStack_b0;
    FUN_10ad00fd8(pppuVar7,&ppuStack_90);
    if (((ulong)pppuVar7 & 1) == 0) goto LAB_10a5a0a30;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar8 + 0x70,&ppuStack_90);
  *(undefined1 *)(lVar8 + 0x120) = 1;
  FUN_10a5bb744(auStack_e0,lVar8);
  FUN_10ad03508(appuStack_c8,auStack_e0);
  ppuStack_70 = appuStack_c8[0];
  if (-1 < cStack_b1) {
    ppuStack_70 = appuStack_c8;
  }
  pppuVar7 = (undefined8 ***)ppuStack_70;
  _strlen(ppuStack_70);
  func_0x00010b0adfa4(ppuStack_70,pppuVar7,5);
  puStack_68 = &UNK_1092bf448;
  ppuStack_60 = &PTR_DAT_110ae93c0;
  puStack_58 = PTR__fclose_11034c270;
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  if (cStack_c9 < '\0') {
    __ZdlPv(auStack_e0[0]);
  }
  cVar5 = *(char *)((long)param_2 + 0x17);
  puVar4 = (undefined8 *)*param_2;
  if (-1 < (long)cVar5) {
    puVar4 = param_2;
  }
  lVar8 = param_2[1];
  if (-1 < cVar5) {
    lVar8 = (long)cVar5;
  }
  func_0x00010b0ae0b0(&ppuStack_70,puVar4,lVar8);
  FUN_10a09a0e4(&ppuStack_70);
  if ((long)uStack_a0 < 0) {
    __ZdlPv(ppuStack_b0);
  }
  if ((long)uStack_80 < 0) {
    __ZdlPv(ppuStack_90);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
LAB_10a5a0a30:
  FUN_10a00946c(&UNK_10f666b8a);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a5a0a40);
  (*pcVar6)();
}



/* Entry: 10a5a0ab0; end: 10a5a0b2f;  */

void FUN_10a5a0ab0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  ulong uVar27;
  long *unaff_x27;
  long *plVar28;
  ulong unaff_x28;
  long lStack_d0;
  ulong uStack_c8;
  long *plStack_c0;
  ulong uStack_b8;
  float fStack_b0;
  int iStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
            ((long)param_1 + *(long *)(*param_1 + -0x18));
  plVar9 = (long *)param_1[9];
  if (*(long *)(param_2 + 0x108) != 0) {
    lVar14 = *(long *)(param_2 + 0x108) + 0x10;
    FUN_10a507e80(lVar14,plVar9 + 0xd);
    if (lVar14 == 0) {
      uStack_c8 = 0;
      lStack_d0 = 0;
      uStack_b8 = 0;
      plStack_c0 = (long *)0x0;
      fStack_b0 = 1.0;
    }
    else {
      puVar22 = *(undefined8 **)(lVar14 + 0x80);
      puVar1 = *(undefined8 **)(lVar14 + 0x88);
      uStack_c8 = 0;
      lStack_d0 = 0;
      uStack_b8 = 0;
      plStack_c0 = (long *)0x0;
      fStack_b0 = 1.0;
      if (puVar1 != puVar22) {
        do {
          uVar15 = uStack_c8;
          unaff_x27 = (long *)*puVar22;
          iVar2 = (int)unaff_x27[3];
          plVar25 = (long *)puVar22[1];
          if (plVar25 != (long *)0x0) {
            plVar13 = plVar25 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar5) {
                *plVar13 = *plVar13 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uVar27 = (ulong)iVar2;
          iStack_a0 = iVar2;
          plStack_98 = unaff_x27;
          plStack_90 = plVar25;
          if (uStack_c8 != 0) {
            uVar10 = uStack_c8 - 1;
            if ((uStack_c8 & uVar10) == 0) {
              unaff_x28 = uVar10 & uVar27;
            }
            else {
              unaff_x28 = uVar27;
              if (uStack_c8 <= uVar27) {
                uVar17 = 0;
                if (uStack_c8 != 0) {
                  uVar17 = uVar27 / uStack_c8;
                }
                unaff_x28 = uVar27 - uVar17 * uStack_c8;
              }
            }
            plVar13 = *(long **)(lStack_d0 + unaff_x28 * 8);
            if (plVar13 != (long *)0x0) {
              do {
                while( true ) {
                  plVar13 = (long *)*plVar13;
                  if (plVar13 == (long *)0x0) goto LAB_10a59f758;
                  uVar17 = plVar13[1];
                  if (uVar17 != uVar27) break;
                  if (*(int *)(plVar13 + 2) == iVar2) {
                    if (plVar25 != (long *)0x0) {
                      plVar13 = plVar25 + 1;
                      do {
                        lVar14 = *plVar13;
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                        if (bVar5) {
                          *plVar13 = lVar14 + -1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if (lVar14 == 0) {
                        (**(code **)(*plVar25 + 0x10))(plVar25);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
                      }
                    }
                    goto LAB_10a59f9f4;
                  }
                }
                if ((uStack_c8 & uVar10) == 0) {
                  uVar17 = uVar17 & uVar10;
                }
                else if (uStack_c8 <= uVar17) {
                  uVar23 = 0;
                  if (uStack_c8 != 0) {
                    uVar23 = uVar17 / uStack_c8;
                  }
                  uVar17 = uVar17 - uVar23 * uStack_c8;
                }
              } while (uVar17 == unaff_x28);
            }
          }
LAB_10a59f758:
          plVar13 = (long *)0x28;
          __Znwm();
          plStack_70 = &lStack_d0;
          uStack_68 = 1;
          *plVar13 = 0;
          plVar13[1] = uVar27;
          *(int *)(plVar13 + 2) = iVar2;
          plVar13[3] = (long)unaff_x27;
          plVar13[4] = (long)plVar25;
          plStack_98 = (long *)0x0;
          plStack_90 = (long *)0x0;
          plStack_78 = plVar13;
          if ((uVar15 == 0) || (fStack_b0 * (float)uVar15 < (float)(uStack_b8 + 1))) {
            uVar10 = 1;
            if (2 < uVar15) {
              uVar10 = (ulong)((uVar15 & uVar15 - 1) != 0);
            }
            uVar10 = uVar10 | uVar15 << 1;
            uVar17 = (ulong)((float)(uStack_b8 + 1) / fStack_b0);
            if (uVar10 <= uVar17) {
              uVar10 = uVar17;
            }
            uVar17 = uVar15;
            if (uVar10 - 1 == 0) {
              uVar10 = 2;
            }
            else if ((uVar10 & uVar10 - 1) != 0) {
              __ZNSt3__112__next_primeEm();
              uVar17 = uStack_c8;
            }
            if (uVar17 < uVar10) {
LAB_10a59f80c:
              if (uVar10 >> 0x3d != 0) {
                func_0x000109ffded8();
                goto LAB_10a5a0218;
              }
              lVar14 = uVar10 << 3;
              __Znwm();
              bVar5 = lStack_d0 != 0;
              lStack_d0 = lVar14;
              if (bVar5) {
                __ZdlPv();
              }
              uVar15 = 0;
              do {
                *(undefined8 *)(lStack_d0 + uVar15 * 8) = 0;
                uVar15 = uVar15 + 1;
              } while (uVar10 != uVar15);
              uVar15 = uVar10;
              uStack_c8 = uVar10;
              if (plStack_c0 != (long *)0x0) {
                uVar17 = plStack_c0[1];
                uVar23 = uVar10 - 1;
                if ((uVar10 & uVar23) == 0) {
                  uVar17 = uVar17 & uVar23;
                }
                else if (uVar10 <= uVar17) {
                  uVar20 = 0;
                  if (uVar10 != 0) {
                    uVar20 = uVar17 / uVar10;
                  }
                  uVar17 = uVar17 - uVar20 * uVar10;
                }
                *(long ***)(lStack_d0 + uVar17 * 8) = &plStack_c0;
                plVar25 = (long *)*plStack_c0;
                plVar11 = plStack_c0;
                while (plVar25 != (long *)0x0) {
                  uVar20 = plVar25[1];
                  if ((uVar10 & uVar23) == 0) {
                    uVar20 = uVar20 & uVar23;
                  }
                  else if (uVar10 <= uVar20) {
                    uVar6 = 0;
                    if (uVar10 != 0) {
                      uVar6 = uVar20 / uVar10;
                    }
                    uVar20 = uVar20 - uVar6 * uVar10;
                  }
                  plVar12 = plVar25;
                  if (uVar20 != uVar17) {
                    if (*(long *)(lStack_d0 + uVar20 * 8) == 0) {
                      *(long **)(lStack_d0 + uVar20 * 8) = plVar11;
                      uVar17 = uVar20;
                    }
                    else {
                      *plVar11 = *plVar25;
                      *plVar25 = **(long **)(lStack_d0 + uVar20 * 8);
                      **(undefined8 **)(lStack_d0 + uVar20 * 8) = plVar25;
                      plVar12 = plVar11;
                    }
                  }
                  plVar11 = plVar12;
                  plVar25 = (long *)*plVar12;
                }
              }
            }
            else {
              uVar15 = uVar17;
              if (uVar10 < uVar17) {
                uVar15 = (ulong)((float)uStack_b8 / fStack_b0);
                if ((uVar17 < 3) || ((uVar17 & uVar17 - 1) != 0)) {
                  __ZNSt3__112__next_primeEm();
                }
                else if (1 < uVar15) {
                  uVar15 = 1L << (-LZCOUNT(uVar15 - 1) & 0x3fU);
                }
                lVar14 = lStack_d0;
                if (uVar10 <= uVar15) {
                  uVar10 = uVar15;
                }
                uVar15 = uStack_c8;
                if (uVar10 < uVar17) {
                  if (uVar10 != 0) goto LAB_10a59f80c;
                  lStack_d0 = 0;
                  if (lVar14 != 0) {
                    __ZdlPv();
                  }
                  uStack_c8 = 0;
                  uVar15 = 0;
                }
              }
            }
            if ((uVar15 & uVar15 - 1) == 0) {
              unaff_x28 = uVar15 - 1 & uVar27;
            }
            else {
              unaff_x28 = uVar27;
              if (uVar15 <= uVar27) {
                uVar10 = 0;
                if (uVar15 != 0) {
                  uVar10 = uVar27 / uVar15;
                }
                unaff_x28 = uVar27 - uVar10 * uVar15;
              }
            }
          }
          plVar25 = *(long **)(lStack_d0 + unaff_x28 * 8);
          if (plVar25 == (long *)0x0) {
            *plVar13 = (long)plStack_c0;
            *(long ***)(lStack_d0 + unaff_x28 * 8) = &plStack_c0;
            plStack_c0 = plVar13;
            if (*plVar13 != 0) {
              uVar27 = *(ulong *)(*plVar13 + 8);
              if ((uVar15 & uVar15 - 1) == 0) {
                uVar27 = uVar27 & uVar15 - 1;
              }
              else if (uVar15 <= uVar27) {
                uVar10 = 0;
                if (uVar15 != 0) {
                  uVar10 = uVar27 / uVar15;
                }
                uVar27 = uVar27 - uVar10 * uVar15;
              }
              plVar25 = (long *)(lStack_d0 + uVar27 * 8);
              goto LAB_10a59f9e4;
            }
          }
          else {
            *plVar13 = *plVar25;
LAB_10a59f9e4:
            *plVar25 = (long)plVar13;
          }
          uStack_b8 = uStack_b8 + 1;
LAB_10a59f9f4:
          puVar22 = puVar22 + 2;
        } while (puVar22 != puVar1);
      }
    }
    plVar11 = plVar9 + 2;
    plVar25 = (long *)*plVar11;
    plVar13 = plStack_c0;
    while (plStack_c0 = plVar13, plVar25 != (long *)0x0) {
      plVar12 = plVar25 + 3;
      if (*(long *)(*plVar12 + 0x18) == 0) {
LAB_10a59fbb0:
        plVar25 = (long *)*plVar25;
      }
      else {
        if (uStack_c8 != 0) {
          uVar15 = (ulong)(int)plVar25[2];
          uVar27 = uStack_c8 - 1;
          if ((uStack_c8 & uVar27) == 0) {
            uVar10 = uVar27 & uVar15;
          }
          else {
            uVar10 = uVar15;
            if (uStack_c8 <= uVar15) {
              uVar10 = 0;
              if (uStack_c8 != 0) {
                uVar10 = uVar15 / uStack_c8;
              }
              uVar10 = uVar15 - uVar10 * uStack_c8;
            }
          }
          plVar21 = *(long **)(lStack_d0 + uVar10 * 8);
          if (plVar21 != (long *)0x0) {
            do {
              while( true ) {
                plVar21 = (long *)*plVar21;
                if (plVar21 == (long *)0x0) goto LAB_10a59fb34;
                uVar17 = plVar21[1];
                if (uVar17 != uVar15) break;
                if (*(int *)(plVar21 + 2) == (int)plVar25[2]) goto LAB_10a59fbb0;
              }
              if ((uStack_c8 & uVar27) == 0) {
                uVar17 = uVar17 & uVar27;
              }
              else if (uStack_c8 <= uVar17) {
                uVar23 = 0;
                if (uStack_c8 != 0) {
                  uVar23 = uVar17 / uStack_c8;
                }
                uVar17 = uVar17 - uVar23 * uStack_c8;
              }
            } while (uVar17 == uVar10);
          }
        }
LAB_10a59fb34:
        plStack_78 = (long *)0x0;
        plStack_70 = (long *)0x0;
        func_0x00010acb1720((long *)(*plVar12 + 0x18),&plStack_78);
        plVar13 = plStack_70;
        if (plStack_70 != (long *)0x0) {
          plVar21 = plStack_70 + 1;
          do {
            lVar14 = *plVar21;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar5) {
              *plVar21 = lVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_70 + 0x10))(plStack_70);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        if (plVar9[7] != 0) {
          FUN_10a5bb214(plVar9[7],plVar12);
        }
        uVar27 = plVar9[1];
        uVar15 = plVar25[1];
        uVar10 = uVar27 - 1;
        if ((uVar27 & uVar10) == 0) {
          uVar15 = uVar10 & uVar15;
        }
        else if (uVar27 <= uVar15) {
          uVar17 = 0;
          if (uVar27 != 0) {
            uVar17 = uVar15 / uVar27;
          }
          uVar15 = uVar15 - uVar17 * uVar27;
        }
        plVar21 = (long *)*plVar25;
        plVar13 = *(long **)(*plVar9 + uVar15 * 8);
        do {
          plVar18 = plVar13;
          plVar13 = (long *)*plVar18;
        } while ((long *)*plVar18 != plVar25);
        plVar13 = plVar21;
        if (plVar18 == plVar11) {
LAB_10a59fc14:
          if (plVar21 == (long *)0x0) {
LAB_10a59fc4c:
            *(undefined8 *)(*plVar9 + uVar15 * 8) = 0;
            plVar13 = (long *)*plVar25;
            goto LAB_10a59fc54;
          }
          uVar17 = plVar21[1];
          if ((uVar27 & uVar10) == 0) {
            uVar23 = uVar17 & uVar10;
          }
          else {
            uVar23 = uVar17;
            if (uVar27 <= uVar17) {
              uVar23 = 0;
              if (uVar27 != 0) {
                uVar23 = uVar17 / uVar27;
              }
              uVar23 = uVar17 - uVar23 * uVar27;
            }
          }
          if (uVar23 != uVar15) goto LAB_10a59fc4c;
LAB_10a59fc5c:
          if ((uVar27 & uVar10) == 0) {
            uVar17 = uVar17 & uVar10;
          }
          else if (uVar27 <= uVar17) {
            uVar10 = 0;
            if (uVar27 != 0) {
              uVar10 = uVar17 / uVar27;
            }
            uVar17 = uVar17 - uVar10 * uVar27;
          }
          if (uVar17 != uVar15) {
            *(long **)(*plVar9 + uVar17 * 8) = plVar18;
            plVar13 = (long *)*plVar25;
          }
        }
        else {
          uVar17 = plVar18[1];
          if ((uVar27 & uVar10) == 0) {
            uVar17 = uVar17 & uVar10;
          }
          else if (uVar27 <= uVar17) {
            uVar23 = 0;
            if (uVar27 != 0) {
              uVar23 = uVar17 / uVar27;
            }
            uVar17 = uVar17 - uVar23 * uVar27;
          }
          if (uVar17 != uVar15) goto LAB_10a59fc14;
LAB_10a59fc54:
          if (plVar13 != (long *)0x0) {
            uVar17 = plVar13[1];
            goto LAB_10a59fc5c;
          }
        }
        *plVar18 = (long)plVar13;
        *plVar25 = 0;
        plVar9[3] = plVar9[3] + -1;
        func_0x00010a1340b4(plVar12);
        __ZdlPv(plVar25);
        plVar25 = plVar21;
        plVar13 = plStack_c0;
      }
    }
    if (plVar13 != (long *)0x0) {
LAB_10a59fcc4:
      uVar15 = plVar9[1];
      if (uVar15 != 0) {
        uVar27 = (ulong)(int)plVar13[2];
        uVar10 = uVar15 - 1;
        if ((uVar15 & uVar10) == 0) {
          uVar17 = uVar10 & uVar27;
        }
        else {
          uVar17 = uVar27;
          if (uVar15 <= uVar27) {
            uVar17 = 0;
            if (uVar15 != 0) {
              uVar17 = uVar27 / uVar15;
            }
            uVar17 = uVar27 - uVar17 * uVar15;
          }
        }
        puVar22 = *(undefined8 **)(*plVar9 + uVar17 * 8);
        if (puVar22 != (undefined8 *)0x0) {
          for (plVar25 = (long *)*puVar22; plVar25 != (long *)0x0; plVar25 = (long *)*plVar25) {
            uVar23 = plVar25[1];
            if (uVar23 == uVar27) {
              if ((int)plVar25[2] == (int)plVar13[2]) {
                lVar14 = *(long *)(plVar25[3] + 0x18);
                func_0x00010acb1720((long *)(plVar25[3] + 0x18),plVar13 + 3);
                if (lVar14 != 0) goto LAB_10a5a019c;
                goto LAB_10a5a018c;
              }
            }
            else {
              if ((uVar15 & uVar10) == 0) {
                uVar23 = uVar23 & uVar10;
              }
              else if (uVar15 <= uVar23) {
                uVar20 = 0;
                if (uVar15 != 0) {
                  uVar20 = uVar23 / uVar15;
                }
                uVar23 = uVar23 - uVar20 * uVar15;
              }
              if (uVar23 != uVar17) break;
            }
          }
        }
      }
      lVar14 = plVar13[3];
      uVar3 = *(undefined4 *)(lVar14 + 0x18);
      plVar21 = (long *)0x70;
      __Znwm();
      plVar18 = plVar21 + 1;
      *plVar18 = 0;
      plVar21[2] = 0;
      *plVar21 = (long)&PTR_DAT_110ba7638;
      plVar12 = plVar21 + 3;
      FUN_10acb13b8(plVar12,uVar3,lVar14 + 0x20);
      iVar2 = (int)plVar13[2];
      plVar26 = (long *)(long)iVar2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = *plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar28 = (long *)plVar9[1];
      iStack_a0 = iVar2;
      plStack_98 = plVar12;
      plStack_90 = plVar21;
      plStack_88 = plVar12;
      plStack_80 = plVar21;
      if (plVar28 != (long *)0x0) {
        uVar15 = (long)plVar28 - 1;
        if (((ulong)plVar28 & uVar15) == 0) {
          unaff_x27 = (long *)(uVar15 & (ulong)plVar26);
        }
        else {
          unaff_x27 = plVar26;
          if (plVar28 <= plVar26) {
            uVar27 = 0;
            if (plVar28 != (long *)0x0) {
              uVar27 = (ulong)plVar26 / (ulong)plVar28;
            }
            unaff_x27 = (long *)((long)plVar26 - uVar27 * (long)plVar28);
          }
        }
        puVar22 = *(undefined8 **)(*plVar9 + (long)unaff_x27 * 8);
        if (puVar22 != (undefined8 *)0x0) {
          for (plVar25 = (long *)*puVar22; plVar25 != (long *)0x0; plVar25 = (long *)*plVar25) {
            plVar16 = (long *)plVar25[1];
            if (plVar16 == plVar26) {
              if ((int)plVar25[2] == iVar2) goto LAB_10a59fee4;
            }
            else {
              if (((ulong)plVar28 & uVar15) == 0) {
                plVar16 = (long *)((ulong)plVar16 & uVar15);
              }
              else if (plVar28 <= plVar16) {
                uVar27 = 0;
                if (plVar28 != (long *)0x0) {
                  uVar27 = (ulong)plVar16 / (ulong)plVar28;
                }
                plVar16 = (long *)((long)plVar16 - uVar27 * (long)plVar28);
              }
              if (plVar16 != unaff_x27) break;
            }
          }
        }
      }
      plVar25 = (long *)0x28;
      __Znwm();
      uStack_68 = 1;
      *plVar25 = 0;
      plVar25[1] = (long)plVar26;
      *(int *)(plVar25 + 2) = iVar2;
      plVar25[3] = (long)plVar12;
      plVar25[4] = (long)plVar21;
      plStack_98 = (long *)0x0;
      plStack_90 = (long *)0x0;
      plStack_78 = plVar25;
      plStack_70 = plVar9;
      if ((plVar28 == (long *)0x0) ||
         (*(float *)(plVar9 + 4) * (float)plVar28 < (float)(plVar9[3] + 1))) {
        uVar15 = 1;
        if ((long *)0x2 < plVar28) {
          uVar15 = (ulong)(((ulong)plVar28 & (long)plVar28 - 1U) != 0);
        }
        plVar12 = (long *)(uVar15 | (long)plVar28 << 1);
        plVar21 = (long *)(long)((float)(plVar9[3] + 1) / *(float *)(plVar9 + 4));
        if (plVar12 <= plVar21) {
          plVar12 = plVar21;
        }
        if ((long)plVar12 - 1U == 0) {
          plVar12 = (long *)0x2;
        }
        else if (((ulong)plVar12 & (long)plVar12 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          plVar28 = (long *)plVar9[1];
        }
        if (plVar28 < plVar12) {
LAB_10a59ff38:
          if ((ulong)plVar12 >> 0x3d != 0) {
            func_0x000109ffded8();
LAB_10a5a0218:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10a5a021c);
            (*pcVar7)();
          }
          lVar14 = (long)plVar12 << 3;
          __Znwm();
          lVar8 = *plVar9;
          *plVar9 = lVar14;
          if (lVar8 != 0) {
            __ZdlPv();
          }
          plVar21 = (long *)0x0;
          plVar9[1] = (long)plVar12;
          do {
            *(undefined8 *)(*plVar9 + (long)plVar21 * 8) = 0;
            plVar21 = (long *)((long)plVar21 + 1);
          } while (plVar12 != plVar21);
          plVar21 = (long *)*plVar11;
          plVar28 = plVar12;
          if (plVar21 != (long *)0x0) {
            plVar18 = (long *)plVar21[1];
            uVar15 = (long)plVar12 - 1;
            if (((ulong)plVar12 & uVar15) == 0) {
              plVar18 = (long *)((ulong)plVar18 & uVar15);
            }
            else if (plVar12 <= plVar18) {
              uVar27 = 0;
              if (plVar12 != (long *)0x0) {
                uVar27 = (ulong)plVar18 / (ulong)plVar12;
              }
              plVar18 = (long *)((long)plVar18 - uVar27 * (long)plVar12);
            }
            *(long **)(*plVar9 + (long)plVar18 * 8) = plVar11;
            plVar16 = (long *)*plVar21;
            while (plVar16 != (long *)0x0) {
              plVar24 = (long *)plVar16[1];
              if (((ulong)plVar12 & uVar15) == 0) {
                plVar24 = (long *)((ulong)plVar24 & uVar15);
              }
              else if (plVar12 <= plVar24) {
                uVar27 = 0;
                if (plVar12 != (long *)0x0) {
                  uVar27 = (ulong)plVar24 / (ulong)plVar12;
                }
                plVar24 = (long *)((long)plVar24 - uVar27 * (long)plVar12);
              }
              plVar19 = plVar16;
              if (plVar24 != plVar18) {
                lVar14 = *plVar9;
                if (*(long *)(lVar14 + (long)plVar24 * 8) == 0) {
                  *(long **)(lVar14 + (long)plVar24 * 8) = plVar21;
                  plVar18 = plVar24;
                }
                else {
                  *plVar21 = *plVar16;
                  *plVar16 = **(undefined8 **)(lVar14 + (long)plVar24 * 8);
                  **(long **)(lVar14 + (long)plVar24 * 8) = (long)plVar16;
                  plVar19 = plVar21;
                }
              }
              plVar21 = plVar19;
              plVar16 = (long *)*plVar19;
            }
          }
        }
        else if (plVar12 < plVar28) {
          plVar21 = (long *)(long)((float)(ulong)plVar9[3] / *(float *)(plVar9 + 4));
          if ((plVar28 < (long *)0x3) || (((ulong)plVar28 & (long)plVar28 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar21) {
            plVar21 = (long *)(1L << (-LZCOUNT((long)plVar21 + -1) & 0x3fU));
          }
          if (plVar12 <= plVar21) {
            plVar12 = plVar21;
          }
          if (plVar12 < plVar28) {
            if (plVar12 != (long *)0x0) goto LAB_10a59ff38;
            lVar14 = *plVar9;
            *plVar9 = 0;
            if (lVar14 != 0) {
              __ZdlPv();
            }
            plVar9[1] = 0;
            plVar28 = (long *)0x0;
          }
          else {
            plVar28 = (long *)plVar9[1];
          }
        }
        if (((ulong)plVar28 & (long)plVar28 - 1U) == 0) {
          unaff_x27 = (long *)((long)plVar28 - 1U & (ulong)plVar26);
        }
        else {
          unaff_x27 = plVar26;
          if (plVar28 <= plVar26) {
            uVar15 = 0;
            if (plVar28 != (long *)0x0) {
              uVar15 = (ulong)plVar26 / (ulong)plVar28;
            }
            unaff_x27 = (long *)((long)plVar26 - uVar15 * (long)plVar28);
          }
        }
      }
      lVar14 = *plVar9;
      plVar12 = *(long **)(lVar14 + (long)unaff_x27 * 8);
      if (plVar12 == (long *)0x0) {
        *plVar25 = *plVar11;
        *plVar11 = (long)plVar25;
        *(long **)(lVar14 + (long)unaff_x27 * 8) = plVar11;
        if (*plVar25 != 0) {
          plVar12 = *(long **)(*plVar25 + 8);
          if (((ulong)plVar28 & (long)plVar28 - 1U) == 0) {
            plVar12 = (long *)((ulong)plVar12 & (long)plVar28 - 1U);
          }
          else if (plVar28 <= plVar12) {
            uVar15 = 0;
            if (plVar28 != (long *)0x0) {
              uVar15 = (ulong)plVar12 / (ulong)plVar28;
            }
            plVar12 = (long *)((long)plVar12 - uVar15 * (long)plVar28);
          }
          plVar12 = (long *)(*plVar9 + (long)plVar12 * 8);
          goto LAB_10a5a0134;
        }
      }
      else {
        *plVar25 = *plVar12;
LAB_10a5a0134:
        *plVar12 = (long)plVar25;
      }
      plVar9[3] = plVar9[3] + 1;
      goto LAB_10a5a0144;
    }
LAB_10a5a01e4:
    FUN_10a5cbe10(&lStack_d0);
  }
  return;
LAB_10a59fee4:
  do {
    lVar14 = *plVar18;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar5) {
      *plVar18 = lVar14 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar14 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
  }
LAB_10a5a0144:
  plVar12 = plStack_80;
  if (plStack_80 != (long *)0x0) {
    plVar21 = plStack_80 + 1;
    do {
      lVar14 = *plVar21;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  func_0x00010acb1720(plVar25[3] + 0x18,plVar13 + 3);
LAB_10a5a018c:
  if (plVar9[5] != 0) {
    FUN_10a5bb214(plVar9[5],plVar25 + 3);
  }
LAB_10a5a019c:
  plVar13 = (long *)*plVar13;
  if (plVar13 == (long *)0x0) goto LAB_10a5a01e4;
  goto LAB_10a59fcc4;
}



/* Entry: 10a5a0b30; end: 10a5a0bc7;  */

undefined1  [16] FUN_10a5a0b30(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10f666bc7;
  return auVar1;
}



/* Entry: 10a5a0bc8; end: 10a5a0ee7;  */

void FUN_10a5a0bc8(ulong param_1)

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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f666bc7,0x17);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bf8128;
  pppuVar2 = (undefined8 ***)&UNK_10f66429f;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bf8128;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5a0ec8;
    FUN_10a054dac(param_1,&UNK_10f66518b,FUN_10a5cc130,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5a0ec8;
    FUN_10a054dac(param_1,&UNK_10f66519e,FUN_10a5cc584,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5a0ec8;
    FUN_10a054dac(param_1,&UNK_10f6651b9,FUN_10a5cc740,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f368b64,FUN_10a5cc584,FUN_10a5cc740);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6651cc,FUN_10a5cc880,FUN_10a5cc9b4);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f666bc7,0x17);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a5a0ec8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a5a0ecc);
  (*pcVar6)();
}



/* Entry: 10a5a0ee8; end: 10a5a1087;  */

undefined8 * FUN_10a5a0ee8(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  ushort uVar5;
  
  *param_1 = &PTR_DAT_110b17898;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a03e114(param_1 + 3);
  *param_1 = &PTR_DAT_110bf83a8;
  param_1[3] = &PTR_DAT_110bf8408;
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_DAT_1109e6c08;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 3) = 1;
  param_1[10] = 0;
  param_1[9] = 0;
  puVar2[2] = 0;
  param_1[7] = puVar2 + 3;
  param_1[8] = puVar2;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x19000;
  param_1[0x11] = param_2;
  *(undefined2 *)(param_1 + 0x12) = 0;
  if (((param_2 == 0) || (lVar4 = *(long *)(*(long *)(param_2 + 0x100) + 0x268), lVar4 == 0)) ||
     (uVar1 = *(uint *)(lVar4 + 0x98), 8 < uVar1)) {
    uVar3 = 0;
    uVar5 = 0;
  }
  else if (uVar1 - 7 < 2) {
    uVar3 = 1;
    uVar5 = 1;
  }
  else {
    uVar3 = 0;
    uVar5 = (ushort)(uVar1 == 4);
  }
  *(ushort *)((long)param_1 + 0x92) = uVar3 | uVar5 << 8;
  *(undefined1 *)((long)param_1 + 0x94) = 0;
  FUN_10a5ae998(param_1[4],&PTR_DAT_110b9fab0,param_2,param_1 + 3);
  return param_1;
}



/* Entry: 10a5a1088; end: 10a5a1187;  */

void FUN_10a5a1088(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bf7358);
  if ((((ulong)plVar2 & 1) == 0) &&
     (plVar2 = param_2, (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bf7378),
     ((ulong)plVar2 & 1) == 0)) {
    lVar1 = 0;
    if (*(long *)(param_1 + 0x48) != 0) {
      lVar1 = *(long *)(param_1 + 0x48) + 0x18;
    }
                    /* WARNING: Could not recover jumptable at 0x00010a5a1184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x1e0))(param_2,lVar1);
    return;
  }
  lVar1 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar1 = *(long *)(param_1 + 0x48) + 0x18;
  }
  (**(code **)(*param_2 + 0x1f8))(param_2,&PTR_DAT_110bf7358,lVar1);
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bf7378);
  if (((int)plVar2 != 0) && (*(char *)(param_1 + 0x93) == '\x01')) {
    lVar1 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar1 = *(long *)(param_1 + 0x70) + 0x18;
    }
                    /* WARNING: Could not recover jumptable at 0x00010a5a1150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110bf7378,lVar1);
    return;
  }
  return;
}



/* Entry: 10a5a1188; end: 10a5a12c3;  */

long FUN_10a5a1188(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar6 = *(long *)(param_1 + 0x48);
  if ((lVar6 != 0) && ((*(long *)(lVar6 + 0x50) != 0 || ((*(byte *)(param_1 + 0x90) & 1) == 0)))) {
    (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110bf7358,lVar6 + 0x18);
  }
  lVar6 = *(long *)(param_2[3] + 8);
  lVar3 = *(long *)(param_2[3] + 0x10);
  lVar1 = *(long *)(param_2[5] + 8);
  lVar4 = *(long *)(param_2[5] + 0x10);
  lVar2 = *(long *)(param_2[7] + 8);
  lVar5 = *(long *)(param_2[7] + 0x10);
  lVar13 = *(long *)(param_1 + 0x70);
  lVar7 = lVar2;
  lVar8 = lVar5;
  lVar9 = lVar6;
  lVar10 = lVar1;
  lVar11 = lVar3;
  lVar12 = lVar4;
  if ((lVar13 != 0) && ((*(long *)(lVar13 + 0x50) != 0 || ((*(byte *)(param_1 + 0x91) & 1) == 0))))
  {
    (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110bf7378,lVar13 + 0x18);
    lVar7 = *(long *)(param_2[7] + 8);
    lVar8 = *(long *)(param_2[7] + 0x10);
    lVar9 = *(long *)(param_2[3] + 8);
    lVar10 = *(long *)(param_2[5] + 8);
    lVar11 = *(long *)(param_2[3] + 0x10);
    lVar12 = *(long *)(param_2[5] + 0x10);
  }
  lVar7 = (lVar11 + lVar12 + lVar8) - (lVar9 + lVar10 + lVar7);
  if ((long)(ulong)(*(int *)(param_1 + 0x80) + 0x200) <
      (lVar3 + lVar4 + lVar5) - (lVar6 + lVar1 + lVar2)) {
    lVar7 = -1;
  }
  return lVar7;
}



/* Entry: 10a5a12c4; end: 10a5a1713;  */

void FUN_10a5a12c4(long param_1)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined ***pppuVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined ***pppuVar12;
  ulong uVar13;
  long lVar14;
  undefined ***pppuVar15;
  undefined ***unaff_x27;
  long *plVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **appuStack_b8 [2];
  undefined **appuStack_a8 [2];
  undefined **appuStack_98 [3];
  long *plStack_80;
  undefined **ppuStack_78;
  undefined ***pppuStack_70;
  undefined8 uStack_68;
  
  FUN_10a0f984c(&ppuStack_c8);
  lVar6 = param_1;
  FUN_10a5a1188(param_1,&ppuStack_c8);
  if (lVar6 < 1) {
    if (lVar6 < 0) {
      func_0x00010ae06f08(1,0x14,&UNK_10f66429f,&UNK_10f66429f,0xffffffff,&UNK_10f6651d9,in_x6,in_x7
                          ,*(undefined4 *)(param_1 + 0x80));
    }
  }
  else {
    lStack_e0 = 0;
    lStack_d8 = 0;
    uStack_d0 = 0;
    pppuVar8 = &ppuStack_c8;
    func_0x00010a0fb0f4(pppuVar8,&lStack_e0);
    FUN_10a3ca004();
    FUN_10a3ca8ac();
    lVar14 = *(long *)(*(long *)(param_1 + 0x88) + 0x100);
    puVar1 = (undefined8 *)(lVar14 + 0x208);
    pppuVar2 = pppuVar8 + 1;
    FUN_10a05be70(pppuVar2,puVar1);
    lVar5 = lStack_d8;
    lVar6 = lStack_e0;
    pppuVar12 = pppuVar2;
    func_0x000107c2b05c(pppuVar2,puVar1);
    pppuVar15 = (undefined ***)pppuVar8[2];
    if (pppuVar15 != (undefined ***)0x0) {
      uVar13 = (long)pppuVar15 - 1;
      if (((ulong)pppuVar15 & uVar13) == 0) {
        unaff_x27 = (undefined ***)(uVar13 & (ulong)pppuVar12);
      }
      else {
        unaff_x27 = pppuVar12;
        if (pppuVar15 <= pppuVar12) {
          uVar10 = 0;
          if (pppuVar15 != (undefined ***)0x0) {
            uVar10 = (ulong)pppuVar12 / (ulong)pppuVar15;
          }
          unaff_x27 = (undefined ***)((long)pppuVar12 - uVar10 * (long)pppuVar15);
        }
      }
      if ((long *)(*pppuVar2)[(long)unaff_x27] != (long *)0x0) {
        for (plVar16 = *(long **)(*pppuVar2)[(long)unaff_x27]; plVar16 != (long *)0x0;
            plVar16 = (long *)*plVar16) {
          pppuVar9 = (undefined ***)plVar16[1];
          if (pppuVar9 == pppuVar12) {
            pppuVar9 = pppuVar2;
            func_0x000107c2b068(pppuVar2,plVar16 + 2,puVar1);
            if (((ulong)pppuVar9 & 1) != 0) goto LAB_10a5a1594;
          }
          else {
            if (((ulong)pppuVar15 & uVar13) == 0) {
              pppuVar9 = (undefined ***)((ulong)pppuVar9 & uVar13);
            }
            else if (pppuVar15 <= pppuVar9) {
              uVar10 = 0;
              if (pppuVar15 != (undefined ***)0x0) {
                uVar10 = (ulong)pppuVar9 / (ulong)pppuVar15;
              }
              pppuVar9 = (undefined ***)((long)pppuVar9 - uVar10 * (long)pppuVar15);
            }
            if (pppuVar9 != unaff_x27) break;
          }
        }
      }
    }
    ppuVar7 = (undefined **)0x40;
    __Znwm();
    uStack_68 = 0;
    *ppuVar7 = (undefined *)0x0;
    ppuVar7[1] = (undefined *)pppuVar12;
    ppuStack_78 = ppuVar7;
    pppuStack_70 = pppuVar2;
    if (*(char *)(lVar14 + 0x21f) < '\0') {
      func_0x000107c3192c(ppuVar7 + 2,*(undefined8 *)(lVar14 + 0x208),
                          *(undefined8 *)(lVar14 + 0x210));
    }
    else {
      puVar18 = *(undefined **)(lVar14 + 0x210);
      puVar17 = (undefined *)*puVar1;
      ppuVar7[4] = *(undefined **)(lVar14 + 0x218);
      ppuVar7[3] = puVar18;
      ppuVar7[2] = puVar17;
    }
    FUN_109ffe064(ppuVar7 + 5,lVar6,lVar5 - lVar6);
    uStack_68 = CONCAT71(uStack_68._1_7_,1);
    if ((pppuVar15 == (undefined ***)0x0) ||
       (*(float *)(pppuVar8 + 5) * (float)pppuVar15 < (float)((long)pppuVar8[4] + 1))) {
      uVar13 = 1;
      if ((undefined ***)0x2 < pppuVar15) {
        uVar13 = (ulong)(((ulong)pppuVar15 & (long)pppuVar15 - 1U) != 0);
      }
      uVar13 = uVar13 | (long)pppuVar15 << 1;
      uVar10 = (ulong)((float)((long)pppuVar8[4] + 1) / *(float *)(pppuVar8 + 5));
      if (uVar13 <= uVar10) {
        uVar13 = uVar10;
      }
      func_0x000104c4f9b8(pppuVar2,uVar13);
      pppuVar15 = (undefined ***)pppuVar8[2];
      if (((ulong)pppuVar15 & (long)pppuVar15 - 1U) == 0) {
        unaff_x27 = (undefined ***)((long)pppuVar15 - 1U & (ulong)pppuVar12);
      }
      else {
        unaff_x27 = pppuVar12;
        if (pppuVar15 <= pppuVar12) {
          uVar13 = 0;
          if (pppuVar15 != (undefined ***)0x0) {
            uVar13 = (ulong)pppuVar12 / (ulong)pppuVar15;
          }
          unaff_x27 = (undefined ***)((long)pppuVar12 - uVar13 * (long)pppuVar15);
        }
      }
    }
    ppuVar7 = *pppuVar2;
    puVar11 = (undefined8 *)ppuVar7[(long)unaff_x27];
    if (puVar11 == (undefined8 *)0x0) {
      pppuVar12 = pppuVar8 + 3;
      *ppuStack_78 = (undefined *)*pppuVar12;
      *pppuVar12 = ppuStack_78;
      ppuVar7[(long)unaff_x27] = (undefined *)pppuVar12;
      if (*ppuStack_78 != (undefined *)0x0) {
        pppuVar12 = *(undefined ****)(*ppuStack_78 + 8);
        if (((ulong)pppuVar15 & (long)pppuVar15 - 1U) == 0) {
          pppuVar12 = (undefined ***)((ulong)pppuVar12 & (long)pppuVar15 - 1U);
        }
        else if (pppuVar15 <= pppuVar12) {
          uVar13 = 0;
          if (pppuVar15 != (undefined ***)0x0) {
            uVar13 = (ulong)pppuVar12 / (ulong)pppuVar15;
          }
          pppuVar12 = (undefined ***)((long)pppuVar12 - uVar13 * (long)pppuVar15);
        }
        (*pppuVar2)[(long)pppuVar12] = (undefined *)ppuStack_78;
      }
    }
    else {
      *ppuStack_78 = (undefined *)*puVar11;
      *puVar11 = ppuStack_78;
    }
    pppuVar8[4] = (undefined **)((long)pppuVar8[4] + 1);
LAB_10a5a1594:
    plVar16 = *(long **)(lVar14 + 0x1c8);
    (**(code **)(*plVar16 + 0x58))();
    pppuVar8 = (undefined ***)plVar16[1];
    if ((pppuVar8 != (undefined ***)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), pppuStack_70 = pppuVar8,
       pppuVar8 != (undefined ***)0x0)) {
      ppuStack_78 = (undefined **)*plVar16;
      if (ppuStack_78 != (undefined **)0x0) {
        (**(code **)(*ppuStack_78 + 0x18))(ppuStack_78,puVar1,&lStack_e0);
      }
      pppuVar2 = pppuVar8 + 1;
      do {
        ppuVar7 = *pppuVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
        if (bVar4) {
          *pppuVar2 = (undefined **)((long)ppuVar7 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppuVar7 == (undefined **)0x0) {
        (*(code *)(*pppuVar8)[2])(pppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar8);
      }
    }
    if (lStack_e0 != 0) {
      lStack_d8 = lStack_e0;
      __ZdlPv();
    }
  }
  plVar16 = plStack_80;
  ppuStack_c8 = &PTR_FUN_110ba53b0;
  ppuStack_c0 = &PTR_FUN_110ba5578;
  plStack_80 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 8))();
  }
  appuStack_98[0] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(appuStack_98);
  appuStack_a8[0] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(appuStack_a8);
  appuStack_b8[0] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(appuStack_b8);
  return;
}



/* Entry: 10a5a1714; end: 10a5a1897;  */

void FUN_10a5a1714(long param_1)

{
  func_0x00010a5a1738();
  *(undefined1 *)(param_1 + 0x94) = 0;
  return;
}



/* Entry: 10a5a1898; end: 10a5a1c3b;  */

void FUN_10a5a1898(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  code ***pppcVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  code *pcStack_1f8;
  long *plStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  long lStack_1d8;
  code **ppcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1e8 = (undefined **)FUN_10a5cd4b8;
  ppuStack_1e0 = &PTR_FUN_110bf7e38;
  ppcStack_a8 = (code **)FUN_10a5cd554;
  ppuStack_a0 = &PTR_FUN_110bf7e58;
  lStack_1d8 = param_1;
  lStack_98 = param_1;
  FUN_10a5ccd2c(&pcStack_1f8,0,&ppuStack_1e8,&ppcStack_a8);
  FUN_10a4a09f8(param_1 + 0x48,&pcStack_1f8);
  if (plStack_1f0 != (long *)0x0) {
    plVar5 = plStack_1f0 + 1;
    do {
      lVar9 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1f0);
    }
  }
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  (*(code *)*ppuStack_1e0)(&ppuStack_1e0);
  if (*(uint *)(param_1 + 0x80) <= *(int *)(*(long *)(param_1 + 0x48) + 100) - 1U) {
    *(uint *)(*(long *)(param_1 + 0x48) + 100) = *(uint *)(param_1 + 0x80);
    FUN_10a5bb9e8();
  }
  ppuStack_1e8 = (undefined **)FUN_10a5cd4b8;
  ppuStack_1e0 = &PTR_FUN_110bf7e38;
  ppcStack_a8 = (code **)FUN_10a5cd554;
  ppuStack_a0 = &PTR_FUN_110bf7e58;
  uVar11 = *(undefined8 *)(param_1 + 0x88);
  plVar5 = (long *)0x1a0;
  lStack_1d8 = param_1;
  lStack_98 = param_1;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110bf8458;
  ppuVar10 = (undefined **)(plVar5 + 3);
  FUN_10ac9b354(ppuVar10,uVar11,&ppuStack_1e8,&ppcStack_a8);
  pcStack_1f8 = (code *)ppuVar10;
  plStack_1f0 = plVar5;
  FUN_10a5ccf30(&pcStack_1f8,plVar5 + 8,ppuVar10);
  pppuVar8 = (undefined ***)&pcStack_1f8;
  func_0x00010a5a1834(param_1 + 0x70);
  plVar5 = plStack_1f0;
  if (plStack_1f0 != (long *)0x0) {
    plVar1 = plStack_1f0 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  (*(code *)*ppuStack_1e0)(&ppuStack_1e0);
  uVar2 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if (uVar2 != 0) {
    FUN_10a0f62f4(&ppuStack_1e8,param_2);
    pppuVar8 = &ppuStack_1e8;
    FUN_10a5a1088(param_1);
    func_0x00010a0f618c(&ppuStack_1e8);
  }
  while( true ) {
    if (*(long *)(*(long *)(param_1 + 0x48) + 0x50) == 0) {
      *(undefined1 *)(param_1 + 0x90) = 1;
    }
    if (*(long *)(*(long *)(param_1 + 0x70) + 0x50) == 0) {
      *(undefined1 *)(param_1 + 0x91) = 1;
    }
    ppuVar10 = *(undefined ***)(param_1 + 0x58);
    lStack_1d8 = *(undefined8 *)(param_1 + 0x68);
    ppuVar12 = *(undefined ***)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    pppuVar7 = pppuVar8;
    ppuStack_1e8 = ppuVar10;
    ppuStack_1e0 = ppuVar12;
    for (; ppuVar10 != ppuVar12; ppuVar10 = ppuVar10 + 2) {
      pppuVar7 = (undefined ***)*ppuVar10;
      FUN_10a5a1c3c(param_1 + 0x48);
    }
    ppcStack_a8 = (code **)&ppuStack_1e8;
    pppcVar6 = &ppcStack_a8;
    FUN_10a5bb920();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) break;
    ___stack_chk_fail();
    pppuVar8 = pppuVar7;
    func_0x00010a0f618c(&ppuStack_1e8);
    if ((int)pppuVar7 != 1) {
      __Unwind_Resume(pppcVar6);
      FUN_10a5a2038(pppuVar8,pppcVar6);
      return;
    }
    ___cxa_begin_catch(pppcVar6);
    if ((bRam000000011330a9e8 & 1) != 0) {
      pppuVar8 = (undefined ***)0x1;
      func_0x00010ae06f08(0,1,&UNK_10f665249,&UNK_10f665290,0x94,&UNK_10f6652f9);
    }
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 10a5a1c3c; end: 10a5a1cfb;  */

void FUN_10a5a1c3c(undefined8 param_1,undefined8 param_2)

{
  FUN_10a5a2038(param_2,param_1);
  return;
}



/* Entry: 10a5a1cfc; end: 10a5a1e3f;  */

code ** FUN_10a5a1cfc(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code **ppcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  code **ppcVar10;
  code *pcVar11;
  code **ppcVar12;
  code **ppcVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  code *pcVar17;
  code *pcVar18;
  long lStack_118;
  long *plStack_110;
  code *pcStack_108;
  undefined **ppuStack_100;
  code **ppcStack_f8;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  code **ppcStack_b8;
  long lStack_88;
  code **ppcStack_80;
  code **ppcStack_78;
  code **ppcStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  ppcVar6 = (code **)(param_1 + 0x48);
  ppcVar13 = (code **)*param_2;
  if (*ppcVar6 != (code *)0x0) {
    FUN_10a5a2038(ppcVar13,ppcVar6);
    return ppcVar13;
  }
  if (ppcVar13 == (code **)0x0) {
    return ppcVar6;
  }
  lVar16 = param_2[1];
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  if (*(undefined8 **)(param_1 + 0x68) <= puVar15) {
    ppcVar10 = *(code ***)(param_1 + 0x58);
    ppcVar12 = (code **)((long)puVar15 - (long)ppcVar10);
    lVar14 = (long)ppcVar12 >> 4;
    uVar2 = lVar14 + 1;
    if (uVar2 >> 0x3c == 0) {
      uVar8 = (long)*(undefined8 **)(param_1 + 0x68) - (long)ppcVar10;
      uVar9 = (long)uVar8 >> 3;
      if (uVar9 <= uVar2) {
        uVar9 = uVar2;
      }
      if (0x7fffffffffffffef < uVar8) {
        uVar9 = 0xfffffffffffffff;
      }
      if (uVar9 >> 0x3c == 0) {
        lVar7 = uVar9 << 4;
        __Znwm();
        puVar3 = (undefined8 *)(lVar7 + (long)ppcVar12);
        *puVar3 = ppcVar13;
        puVar3[1] = lVar16;
        if (lVar16 != 0) {
          plVar1 = (long *)(lVar16 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          ppcVar10 = *(code ***)(param_1 + 0x58);
          ppcVar12 = (code **)(*(long *)(param_1 + 0x60) - (long)ppcVar10);
          lVar14 = (long)ppcVar12 >> 4;
        }
        puVar15 = puVar3 + 2;
        ppcVar13 = (code **)(puVar3 + lVar14 * -2);
        ppcVar6 = ppcVar13;
        _memcpy(ppcVar13,ppcVar10,ppcVar12);
        *(code ***)(param_1 + 0x58) = ppcVar13;
        *(undefined8 **)(param_1 + 0x60) = puVar15;
        *(ulong *)(param_1 + 0x68) = lVar7 + uVar9 * 0x10;
        if (ppcVar10 != (code **)0x0) {
          __ZdlPv(ppcVar10);
          ppcVar6 = ppcVar10;
        }
        goto LAB_10a5a1e1c;
      }
    }
    else {
      FUN_10a5bbb38();
    }
    func_0x000109ffded8();
    pcStack_58 = FUN_10a5a1e40;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppcStack_80 = ppcVar13;
    ppcStack_78 = ppcVar12;
    ppcStack_70 = ppcVar10;
    lStack_68 = param_1;
    puStack_60 = &stack0xfffffffffffffff0;
    if ((*param_2 == 0) && (ppcVar6[9] != (code *)0x0)) {
      ppcVar12 = &pcStack_c8;
      pcStack_c8 = FUN_10a5cd4b8;
      ppuStack_c0 = &PTR_FUN_110bf7e38;
      ppcVar13 = &pcStack_108;
      pcStack_108 = FUN_10a5cd554;
      ppuStack_100 = &PTR_FUN_110bf7e58;
      ppcStack_f8 = ppcVar6;
      ppcStack_b8 = ppcVar6;
      FUN_10a5ccd2c(&lStack_118,0,&pcStack_c8,&pcStack_108);
      param_2 = &lStack_118;
      FUN_10a4a09f8(ppcVar6 + 9);
      if (plStack_110 != (long *)0x0) {
        plVar1 = plStack_110 + 1;
        do {
          lVar16 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_110 + 0x10))(plStack_110);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_110);
        }
      }
      (*(code *)*ppuStack_100)(&ppuStack_100);
      (*(code *)*ppuStack_c0)(&ppuStack_c0);
    }
    else {
      FUN_10a5a1fbc(ppcVar6 + 9);
    }
    ppcVar10 = (code **)ppcVar6[9];
    if (*(uint *)(ppcVar6 + 0x10) <= *(int *)((long)ppcVar10 + 100) - 1U) {
      *(uint *)((long)ppcVar10 + 100) = *(uint *)(ppcVar6 + 0x10);
      FUN_10a5bb9e8();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      (*(code *)*ppuStack_100)(ppcVar13 + 1);
      (*(code *)*ppuStack_c0)(ppcVar12 + 1);
      __Unwind_Resume();
      pcVar18 = (code *)param_2[1];
      pcVar17 = (code *)*param_2;
      if (param_2[1] != 0) {
        plVar1 = (long *)(param_2[1] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pcVar11 = ppcVar10[1];
      ppcVar10[1] = pcVar18;
      *ppcVar10 = pcVar17;
      if (pcVar11 != (code *)0x0) {
        pcVar17 = pcVar11 + 8;
        do {
          lVar16 = *(long *)pcVar17;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pcVar17,0x10);
          if (bVar5) {
            *(long *)pcVar17 = lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*(long *)pcVar11 + 0x10))(pcVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar11);
        }
      }
      return ppcVar10;
    }
    return ppcVar10;
  }
  *puVar15 = ppcVar13;
  puVar15[1] = lVar16;
  if (lVar16 != 0) {
    plVar1 = (long *)(lVar16 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar15 = puVar15 + 2;
LAB_10a5a1e1c:
  *(undefined8 **)(param_1 + 0x60) = puVar15;
  return ppcVar6;
}



/* Entry: 10a5a1e40; end: 10a5a1fbb;  */

long * FUN_10a5a1e40(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  code **unaff_x21;
  code **unaff_x22;
  long lVar7;
  long lStack_c8;
  long *plStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_2 == 0) {
    if (*(long *)(param_1 + 0x48) != 0) {
      unaff_x21 = &pcStack_78;
      pcStack_78 = FUN_10a5cd4b8;
      ppuStack_70 = &PTR_FUN_110bf7e38;
      unaff_x22 = &pcStack_b8;
      pcStack_b8 = FUN_10a5cd554;
      ppuStack_b0 = &PTR_FUN_110bf7e58;
      lStack_a8 = param_1;
      lStack_68 = param_1;
      FUN_10a5ccd2c(&lStack_c8,0,&pcStack_78,&pcStack_b8);
      param_2 = &lStack_c8;
      FUN_10a4a09f8((long *)(param_1 + 0x48));
      if (plStack_c0 != (long *)0x0) {
        plVar4 = plStack_c0 + 1;
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
          (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c0);
        }
      }
      (*(code *)*ppuStack_b0)(&ppuStack_b0);
      (*(code *)*ppuStack_70)(&ppuStack_70);
      goto LAB_10a5a1f38;
    }
  }
  FUN_10a5a1fbc(param_1 + 0x48);
LAB_10a5a1f38:
  plVar4 = *(long **)(param_1 + 0x48);
  if (*(uint *)(param_1 + 0x80) <= *(int *)((long)plVar4 + 100) - 1U) {
    *(uint *)((long)plVar4 + 100) = *(uint *)(param_1 + 0x80);
    FUN_10a5bb9e8();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar4;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b0)(unaff_x22 + 1);
  (*(code *)*ppuStack_70)(unaff_x21 + 1);
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



/* Entry: 10a5a1fbc; end: 10a5a2037;  */

undefined8 * FUN_10a5a1fbc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a5a2038; end: 10a5a205f;  */

void FUN_10a5a2038(code **param_1,code **param_2)

{
  code *pcVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code **ppcVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  code **ppcVar9;
  code **ppcVar10;
  code *pcVar11;
  long lVar12;
  undefined **ppuVar13;
  code *pcVar14;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  code **ppcStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  code *pcStack_98;
  undefined ***pppuStack_90;
  code *pcStack_88;
  undefined ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined ***pppuStack_50;
  long lStack_38;
  
  if ((param_1 == (code **)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
    if ((param_1 != (code **)0x0) && (*(char *)(param_1 + 8) == '\x01')) {
      pcVar11 = *param_1;
      pcVar14 = param_2[1];
      if (param_2[1] != (code *)0x0) {
        pcVar1 = param_2[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar4) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      (*pcVar11)(&stack0xffffffffffffffd0,param_1);
      if (pcVar14 != (code *)0x0) {
        pcVar11 = pcVar14 + 8;
        do {
          lVar12 = *(long *)pcVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
          if (bVar4) {
            *(long *)pcVar11 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*(long *)pcVar14 + 0x10))(pcVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar14);
        }
      }
      return;
    }
    return;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar6 = param_1;
  ppcVar9 = param_2;
  FUN_10a688b40();
  if (ppcVar6 == (code **)0x0) {
    ppcVar10 = (code **)0x0;
    pppuVar7 = (undefined ***)0x0;
    if (ppcVar9 != (code **)0x0) {
      pcStack_60 = param_1[1];
      pcStack_68 = *param_1;
      if (param_1[1] != (code *)0x0) {
        pcVar11 = param_1[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
          if (bVar4) {
            *(long *)pcVar11 = *(long *)pcVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_88 = *param_2;
      pppuVar8 = (undefined ***)param_2[1];
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar7 = pppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_78 = FUN_10a5cd440;
      ppuStack_70 = &PTR_FUN_110bf8368;
      pcStack_98 = (code *)0x0;
      pppuStack_90 = (undefined ***)0x0;
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar7 = pppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppcVar6 = &pcStack_98;
      param_1 = &pcStack_78;
      ppcVar10 = &pcStack_78;
      pppuStack_80 = pppuVar8;
      pcStack_58 = pcStack_88;
      pppuStack_50 = pppuVar8;
      FUN_10a4634ec(ppcVar9,ppcVar10);
      pppuVar7 = &ppuStack_70;
      (*(code *)*ppuStack_70)();
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar2 = pppuVar8 + 1;
        do {
          ppuVar13 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar13 == (undefined **)0x0) {
          (*(code *)(*pppuVar8)[2])(pppuVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar8;
        }
      }
      pppuVar8 = pppuStack_90;
      if (pppuStack_90 != (undefined ***)0x0) {
        pppuVar2 = pppuStack_90 + 1;
        do {
          ppuVar13 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar13 == (undefined **)0x0) {
          (*(code *)(*pppuStack_90)[2])(pppuStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar8;
        }
      }
    }
  }
  else {
    *ppcVar6 = (code *)CONCAT44((int)((ulong)*ppcVar6 >> 0x20) + 1,(int)*ppcVar6 + 1);
    pppuVar7 = (undefined ***)*param_1;
    FUN_10a5cd274(pppuVar7,param_2);
    iVar5 = *(int *)((long)ppcVar6 + 4) + -1;
    *(int *)((long)ppcVar6 + 4) = iVar5;
    ppcVar10 = param_2;
    if (iVar5 == 0) {
      *(undefined4 *)ppcVar6 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(param_1 + 1);
  FUN_10a297544(ppcVar6 + 2);
  func_0x00010a004dac(&pcStack_98);
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a5cd274;
  ppcStack_c0 = ppcVar6;
  pppuStack_b8 = pppuVar7;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_d0,pppuVar8 + 1,*pppuVar8);
  func_0x000109884820(&puStack_c8,&puStack_d0,*pppuVar8);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  (**(code **)(**pppuVar8 + 0x30))(&puStack_d0);
  FUN_10a5cd360(*pppuVar8,&puStack_d0,&puStack_c8,ppcVar10);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a5a2060; end: 10a5a21a7;  */

void FUN_10a5a2060(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plStack_50;
  long *plStack_48;
  
  lVar4 = *param_2;
  if ((lVar4 == 0) && (*(long *)(param_1 + 0x70) != 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x88);
    plVar3 = (long *)0x1a0;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_FUN_110bf8458;
    plVar6 = plVar3 + 3;
    FUN_10ac9b108(plVar6,uVar7);
    plStack_50 = plVar6;
    plStack_48 = plVar3;
    FUN_10a5ccf30(&plStack_50,plVar3 + 8,plVar6);
    func_0x00010a5a1834((long *)(param_1 + 0x70),&plStack_50);
    if (plStack_48 == (long *)0x0) goto LAB_10a5a2158;
    plVar3 = plStack_48 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_48;
    } while (cVar1 != '\0');
  }
  else {
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar6 = *(long **)(param_1 + 0x78);
    *(long *)(param_1 + 0x70) = lVar4;
    *(long *)(param_1 + 0x78) = lVar5;
    if (plVar6 == (long *)0x0) goto LAB_10a5a2158;
    plVar3 = plVar6 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (lVar4 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
LAB_10a5a2158:
  if (*(uint *)(param_1 + 0x80) <= *(int *)(*(long *)(param_1 + 0x70) + 100) - 1U) {
    *(uint *)(*(long *)(param_1 + 0x70) + 100) = *(uint *)(param_1 + 0x80);
    FUN_10a5bb9e8();
  }
  return;
}



/* Entry: 10a5a21a8; end: 10a5a353b;  */

undefined1 ** FUN_10a5a21a8(undefined1 **param_1,long *param_2,long param_3)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  bool bVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined1 **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  undefined1 *puVar20;
  undefined1 uVar21;
  long lVar22;
  undefined8 extraout_x9;
  undefined2 uVar23;
  undefined1 **ppuVar24;
  undefined *puVar25;
  long *plVar26;
  ulong uVar27;
  undefined4 uVar28;
  long *plVar29;
  undefined *puStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  long *plStack_c8;
  undefined *puStack_b8;
  long *plStack_b0;
  undefined1 *puStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined4 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[1] = (undefined1 *)0x0;
  *param_1 = (undefined1 *)0x0;
  param_1[3] = (undefined1 *)0x0;
  param_1[2] = (undefined1 *)0x0;
  param_1[5] = (undefined1 *)0x0;
  param_1[4] = (undefined1 *)0x0;
  param_1[7] = (undefined1 *)0x0;
  param_1[6] = (undefined1 *)0x0;
  *(undefined8 *)((long)param_1 + 0x41) = 0;
  *(undefined8 *)((long)param_1 + 0x39) = 0;
  puVar20 = (undefined1 *)*param_2;
  ppuVar24 = param_1 + 0x1f;
  param_1[0x20] = (undefined1 *)param_2[1];
  *ppuVar24 = puVar20;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((long)param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[0x21] = (undefined1 *)0x0;
  param_1[0x22] = (undefined1 *)0x0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x25] = (undefined1 *)0x0;
  param_1[0x24] = (undefined1 *)0x0;
  param_1[0x27] = (undefined1 *)0x0;
  param_1[0x26] = (undefined1 *)0x0;
  puVar11 = (undefined8 *)0x10;
  __Znwm();
  *puVar11 = 0;
  *(undefined1 *)(puVar11 + 1) = 1;
  param_1[0x28] = (undefined1 *)puVar11;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined2 *)((long)param_1 + 0x14c) = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 1;
  param_1[0x2b] = (undefined1 *)0xffffffffffffffff;
  param_1[0x2c] = (undefined1 *)0x0;
  param_1[0x2d] = (undefined1 *)0x3f800000;
  param_1[0x2e] = (undefined1 *)0x3f8000003f800000;
  param_1[0x2f] = (undefined1 *)0x3f80000000000000;
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined8 *)((long)param_1 + 0x184) = 0;
  *(undefined8 *)((long)param_1 + 0x18c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x194) = 0x3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0x19c) = 0x3f80000000000000;
  *(undefined1 *)((long)param_1 + 0x1a4) = 1;
  *(undefined2 *)(param_1 + 0x35) = 0;
  puVar20 = param_1[0x1f];
  puStack_a8 = &UNK_10f665409;
  plStack_a0 = (long *)0x1d;
  if (puVar20 == (undefined1 *)0x0) {
    FUN_10a0edfc4(&puStack_a8);
  }
  else {
    if ((param_3 == 0) && (*(long *)(puVar20 + 0x250) == 0)) {
      plStack_a0 = (long *)0x3;
      if ((~(uint)*(undefined8 *)(puVar20 + 0x248) & 5) != 0) {
        plStack_a0 = (long *)0x1;
      }
      puStack_a8 = (undefined *)0xfffffff0;
      plStack_90 = (long *)0x0;
      uStack_98 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      lStack_78 = 0;
      uStack_70 = 100;
      FUN_10ad6816c(&puStack_b8,*(undefined8 *)(puVar20 + 0x248),&puStack_a8);
      if (puStack_b8 != (undefined *)0x0) {
        FUN_10a5bbb4c(*ppuVar24 + 0x250,&puStack_b8);
      }
      if (plStack_b0 != (long *)0x0) {
        plVar26 = plStack_b0 + 1;
        do {
          lVar22 = *plVar26;
          cVar2 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar10) {
            *plVar26 = lVar22 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar22 == 0) {
          (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b0);
        }
      }
      if (lStack_78 < 0) {
        __ZdlPv(uStack_88);
      }
      plVar26 = plStack_90;
      if (plStack_90 != (long *)0x0) {
        plVar15 = plStack_90 + 1;
        do {
          lVar22 = *plVar15;
          cVar2 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar10) {
            *plVar15 = lVar22 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar22 == 0) {
          (**(code **)(*plStack_90 + 0x10))(plStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
        }
      }
      puVar20 = *ppuVar24;
    }
    puVar25 = *(undefined **)(puVar20 + 0x250);
    plStack_b0 = *(long **)(puVar20 + 600);
    if (plStack_b0 != (long *)0x0) {
      plVar26 = plStack_b0 + 1;
      do {
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar10) {
          *plVar26 = *plVar26 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_b8 = puVar25;
    if (puVar25 != (undefined *)0x0) {
      func_0x00010a152370(&puStack_a8,puVar25);
      puStack_d0 = (undefined *)0x0;
      plStack_c8 = (long *)0x0;
      if (plStack_a0 != (long *)0x0) {
        plVar26 = plStack_a0;
        __ZNSt3__119__shared_weak_count4lockEv();
        if (plVar26 != (long *)0x0) {
          puStack_d0 = puStack_a8;
        }
        plStack_c8 = plVar26;
        if (plStack_a0 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        puVar8 = PTR___tlv_bootstrap_11340d750;
        if (puStack_d0 != (undefined *)0x0) {
          ppuVar18 = &PTR___tlv_bootstrap_11340d750;
          ppuVar12 = ppuVar18;
          (*(code *)PTR___tlv_bootstrap_11340d750)();
          ppuVar17 = &PTR___tlv_bootstrap_11340d738;
          if (((ulong)*ppuVar12 & 1) == 0) {
            ppuVar12 = ppuVar17;
            (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
            __tlv_atexit(0x10a132a8c,ppuVar12,0x100000000);
            ppuVar12 = ppuVar18;
            (*(code *)puVar8)();
            *(undefined1 *)ppuVar12 = 1;
          }
          puVar7 = PTR___tlv_bootstrap_11340d738;
          ppuVar12 = ppuVar17;
          (*(code *)PTR___tlv_bootstrap_11340d738)();
          FUN_10a15217c();
          func_0x00010a5a3574(&puStack_e0,puVar25);
          puStack_a8 = (undefined *)0x0;
          if (plStack_d8 != (long *)0x0) {
            plVar26 = plStack_d8;
            __ZNSt3__119__shared_weak_count4lockEv();
            if (plVar26 == (long *)0x0) {
              puVar25 = (undefined *)0x0;
            }
            else {
              puStack_a8 = puStack_e0;
              puVar25 = puStack_e0;
            }
            plStack_a0 = plVar26;
            if (plStack_d8 != (long *)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            if ((puVar25 != (undefined *)0x0) && ((puVar25[0x1c1] & 1) == 0)) {
              ppuVar13 = ppuVar18;
              (*(code *)puVar8)();
              if (((ulong)*ppuVar13 & 1) == 0) {
                (*(code *)puVar7)(&PTR___tlv_bootstrap_11340d738);
                __tlv_atexit(0x10a132a8c,ppuVar17,0x100000000);
                (*(code *)puVar8)();
                *(undefined1 *)ppuVar18 = 1;
              }
              puVar11 = (undefined8 *)ppuVar12[2];
              if (puVar11 == (undefined8 *)0x0) {
                uVar23 = 0;
                uVar28 = 0;
                uVar27 = 0;
                plVar15 = (long *)0x0;
                bVar10 = false;
                uVar21 = 0;
              }
              else {
                lVar22 = puVar11[1];
                uVar28 = 0x90bf7999;
                if (*(char *)(lVar22 + 0x17) == '\x01') {
                  bVar6 = *(byte *)(lVar22 + 0x42) | *(byte *)(lVar22 + 0x43);
                  if ((((bVar6 & 1) == 0) && ((*(byte *)(lVar22 + 0x40) & 1) == 0)) &&
                     (*(char *)(lVar22 + 0x3f) != '\x01')) {
                    uVar27 = 0;
                  }
                  else {
                    uVar5 = cntfrq_el0;
                    InstructionSynchronizationBarrier();
                    uVar27 = cntvct_el0;
                    if (uVar5 != 1000000000) {
                      uVar3 = 0;
                      if (uVar5 != 0) {
                        uVar3 = uVar27 / uVar5;
                      }
                      uVar4 = 0;
                      if (uVar5 != 0) {
                        uVar4 = ((uVar27 - uVar3 * uVar5) * 1000000000) / uVar5;
                      }
                      uVar27 = uVar4 + uVar3 * 1000000000;
                    }
                    if ((bVar6 & 1) != 0) {
                      FUN_10a192960(puVar11,0x90bf7999,&DAT_10f666beb);
                      lVar22 = lRam00000001137eb468;
                      puVar14 = puVar11;
                      FUN_10a1333cc();
                      if (puVar14 != (undefined8 *)0x0) {
                        uVar21 = 3;
                        if (lRam00000001137eb468 != lVar22) {
                          uVar21 = 5;
                        }
                        lVar1 = 0;
                        if (lRam00000001137eb468 != lVar22) {
                          lVar1 = lVar22;
                        }
                        *puVar14 = &DAT_10f666beb;
                        puVar14[1] = lVar1;
                        puVar14[2] = uVar27;
                        *(undefined4 *)(puVar14 + 3) = 0x90bf7999;
                        *(undefined2 *)((long)puVar14 + 0x1c) = 7;
                        *(undefined1 *)((long)puVar14 + 0x1e) = uVar21;
                        if ((*(byte *)(puVar11 + 0x38) & 1) == 0) goto LAB_10a5a3448;
                        puVar11[0x18] = puVar11[0x18] + 1;
                      }
                    }
                  }
                  if (*(char *)(puVar11[1] + 0x41) == '\x01') {
                    plVar29 = (long *)puVar11[0xb];
                    if (plVar29 == (long *)0x0) {
                      plVar15 = (long *)0x0;
                    }
                    else {
                      plVar15 = plVar29;
                      (**(code **)(*plVar29 + 0x28))(plVar29,&DAT_10f666beb);
                    }
                    bVar10 = plVar29 != (long *)0x0;
                  }
                  else {
                    plVar15 = (long *)0x0;
                    bVar10 = false;
                  }
                  uVar21 = 1;
                }
                else {
                  uVar27 = 0;
                  plVar15 = (long *)0x0;
                  bVar10 = false;
                  uVar21 = 0;
                }
                uVar23 = 7;
              }
              *puVar25 = uVar21;
              puVar25[1] = 0;
              *(undefined2 *)(puVar25 + 2) = uVar23;
              *(undefined4 *)(puVar25 + 4) = uVar28;
              *(ulong *)(puVar25 + 8) = uVar27;
              *(long **)(puVar25 + 0x10) = plVar15;
              puVar25[0x18] = bVar10;
              ppuVar18 = &PTR___tlv_bootstrap_11340d750;
              if ((puVar25[0x1c1] & 1) == 0) {
                *(undefined2 *)(puVar25 + 0x1c0) = 0x100;
                ppuVar17 = ppuVar18;
                (*(code *)puVar8)();
                if (((ulong)*ppuVar17 & 1) == 0) {
                  uVar19 = extraout_x9;
                  (*(code *)puVar7)(extraout_x9);
                  __tlv_atexit(0x10a132a8c,uVar19,0x100000000);
                  (*(code *)puVar8)();
                  *(undefined1 *)ppuVar18 = 1;
                }
                puVar11 = (undefined8 *)ppuVar12[2];
                if (puVar11 == (undefined8 *)0x0) {
                  plVar15 = (long *)0x0;
                  bVar10 = false;
                  uVar27 = 0;
                  uVar28 = 0;
                  uVar23 = 0;
                  uVar21 = 0;
                }
                else {
                  lVar22 = puVar11[1];
                  uVar28 = 0x90bf79a9;
                  if (*(char *)(lVar22 + 0x17) == '\x01') {
                    bVar6 = *(byte *)(lVar22 + 0x42) | *(byte *)(lVar22 + 0x43);
                    if ((((bVar6 & 1) == 0) && ((*(byte *)(lVar22 + 0x40) & 1) == 0)) &&
                       (*(char *)(lVar22 + 0x3f) != '\x01')) {
                      uVar27 = 0;
                    }
                    else {
                      uVar5 = cntfrq_el0;
                      InstructionSynchronizationBarrier();
                      uVar27 = cntvct_el0;
                      if (uVar5 != 1000000000) {
                        uVar3 = 0;
                        if (uVar5 != 0) {
                          uVar3 = uVar27 / uVar5;
                        }
                        uVar4 = 0;
                        if (uVar5 != 0) {
                          uVar4 = ((uVar27 - uVar3 * uVar5) * 1000000000) / uVar5;
                        }
                        uVar27 = uVar4 + uVar3 * 1000000000;
                      }
                      if ((bVar6 & 1) != 0) {
                        FUN_10a192960(puVar11,0x90bf79a9,&DAT_10f3acbad);
                        lVar22 = lRam00000001137eb468;
                        puVar14 = puVar11;
                        FUN_10a1333cc();
                        if (puVar14 != (undefined8 *)0x0) {
                          uVar21 = 3;
                          if (lRam00000001137eb468 != lVar22) {
                            uVar21 = 5;
                          }
                          lVar1 = 0;
                          if (lRam00000001137eb468 != lVar22) {
                            lVar1 = lVar22;
                          }
                          *puVar14 = &UNK_10f666c01;
                          puVar14[1] = lVar1;
                          puVar14[2] = uVar27;
                          *(undefined4 *)(puVar14 + 3) = 0x90bf79a9;
                          *(undefined2 *)((long)puVar14 + 0x1c) = 7;
                          *(undefined1 *)((long)puVar14 + 0x1e) = uVar21;
                          if ((*(byte *)(puVar11 + 0x38) & 1) == 0) goto LAB_10a5a3448;
                          puVar11[0x18] = puVar11[0x18] + 1;
                        }
                      }
                    }
                    if (*(char *)(puVar11[1] + 0x41) == '\x01') {
                      plVar29 = (long *)puVar11[0xb];
                      if (plVar29 == (long *)0x0) {
                        plVar15 = (long *)0x0;
                      }
                      else {
                        plVar15 = plVar29;
                        (**(code **)(*plVar29 + 0x28))(plVar29,&UNK_10f666c01);
                      }
                      bVar10 = plVar29 != (long *)0x0;
                    }
                    else {
                      plVar15 = (long *)0x0;
                      bVar10 = false;
                    }
                    uVar21 = 1;
                  }
                  else {
                    plVar15 = (long *)0x0;
                    bVar10 = false;
                    uVar27 = 0;
                    uVar21 = 0;
                  }
                  uVar23 = 7;
                }
                puVar25[0xa0] = uVar21;
                puVar25[0xa1] = 0;
                *(undefined2 *)(puVar25 + 0xa2) = uVar23;
                *(undefined4 *)(puVar25 + 0xa4) = uVar28;
                *(ulong *)(puVar25 + 0xa8) = uVar27;
                *(long **)(puVar25 + 0xb0) = plVar15;
                puVar25[0xb8] = bVar10;
                ppuVar18 = &PTR___tlv_bootstrap_11340d750;
                ppuVar17 = ppuVar18;
                (*(code *)puVar8)();
                if (((ulong)*ppuVar17 & 1) == 0) {
                  ppuVar17 = &PTR___tlv_bootstrap_11340d738;
                  (*(code *)puVar7)(&PTR___tlv_bootstrap_11340d738);
                  __tlv_atexit(0x10a132a8c,ppuVar17,0x100000000);
                  (*(code *)puVar8)();
                  *(undefined1 *)ppuVar18 = 1;
                }
                puVar11 = (undefined8 *)ppuVar12[2];
                if (puVar11 == (undefined8 *)0x0) {
                  uVar21 = 0;
                  uVar23 = 0;
                  uVar28 = 0;
                  uVar27 = 0;
                  plVar15 = (long *)0x0;
                  bVar10 = false;
                }
                else {
                  lVar22 = puVar11[1];
                  uVar28 = 0x90bf79a9;
                  if (*(char *)(lVar22 + 0x17) == '\x01') {
                    bVar6 = *(byte *)(lVar22 + 0x42) | *(byte *)(lVar22 + 0x43);
                    if ((((bVar6 & 1) == 0) && ((*(byte *)(lVar22 + 0x40) & 1) == 0)) &&
                       (*(char *)(lVar22 + 0x3f) != '\x01')) {
                      uVar27 = 0;
                    }
                    else {
                      uVar5 = cntfrq_el0;
                      InstructionSynchronizationBarrier();
                      uVar27 = cntvct_el0;
                      if (uVar5 != 1000000000) {
                        uVar3 = 0;
                        if (uVar5 != 0) {
                          uVar3 = uVar27 / uVar5;
                        }
                        uVar4 = 0;
                        if (uVar5 != 0) {
                          uVar4 = ((uVar27 - uVar3 * uVar5) * 1000000000) / uVar5;
                        }
                        uVar27 = uVar4 + uVar3 * 1000000000;
                      }
                      if ((bVar6 & 1) != 0) {
                        FUN_10a192960(puVar11,0x90bf79a9,&DAT_10f3acbad);
                        lVar22 = lRam00000001137eb468;
                        puVar14 = puVar11;
                        FUN_10a1333cc();
                        if (puVar14 != (undefined8 *)0x0) {
                          uVar21 = 3;
                          if (lRam00000001137eb468 != lVar22) {
                            uVar21 = 5;
                          }
                          lVar1 = 0;
                          if (lRam00000001137eb468 != lVar22) {
                            lVar1 = lVar22;
                          }
                          *puVar14 = &UNK_10f666c08;
                          puVar14[1] = lVar1;
                          puVar14[2] = uVar27;
                          *(undefined4 *)(puVar14 + 3) = 0x90bf79a9;
                          *(undefined2 *)((long)puVar14 + 0x1c) = 7;
                          *(undefined1 *)((long)puVar14 + 0x1e) = uVar21;
                          if ((*(byte *)(puVar11 + 0x38) & 1) == 0) goto LAB_10a5a3448;
                          puVar11[0x18] = puVar11[0x18] + 1;
                        }
                      }
                    }
                    if (*(char *)(puVar11[1] + 0x41) == '\x01') {
                      plVar29 = (long *)puVar11[0xb];
                      if (plVar29 == (long *)0x0) {
                        plVar15 = (long *)0x0;
                      }
                      else {
                        plVar15 = plVar29;
                        (**(code **)(*plVar29 + 0x28))(plVar29,&UNK_10f666c08);
                      }
                      bVar10 = plVar29 != (long *)0x0;
                    }
                    else {
                      plVar15 = (long *)0x0;
                      bVar10 = false;
                    }
                    uVar23 = 7;
                    uVar21 = 1;
                  }
                  else {
                    uVar21 = 0;
                    uVar27 = 0;
                    plVar15 = (long *)0x0;
                    bVar10 = false;
                    uVar23 = 7;
                  }
                }
                puVar25[0x80] = uVar21;
                puVar25[0x81] = 0;
                *(undefined2 *)(puVar25 + 0x82) = uVar23;
                *(undefined4 *)(puVar25 + 0x84) = uVar28;
                *(ulong *)(puVar25 + 0x88) = uVar27;
                *(long **)(puVar25 + 0x90) = plVar15;
                puVar25[0x98] = bVar10;
                ppuVar18 = &PTR___tlv_bootstrap_11340d750;
                ppuVar17 = ppuVar18;
                (*(code *)puVar8)();
                if (((ulong)*ppuVar17 & 1) == 0) {
                  ppuVar17 = &PTR___tlv_bootstrap_11340d738;
                  (*(code *)puVar7)(&PTR___tlv_bootstrap_11340d738);
                  __tlv_atexit(0x10a132a8c,ppuVar17,0x100000000);
                  (*(code *)puVar8)();
                  *(undefined1 *)ppuVar18 = 1;
                }
                puVar11 = (undefined8 *)ppuVar12[2];
                if (puVar11 == (undefined8 *)0x0) {
                  uVar21 = 0;
                  uVar23 = 0;
                  uVar28 = 0;
                  uVar27 = 0;
                  plVar15 = (long *)0x0;
                  bVar10 = false;
                }
                else {
                  lVar22 = puVar11[1];
                  uVar28 = 0x90bf79a9;
                  if (*(char *)(lVar22 + 0x17) == '\x01') {
                    bVar6 = *(byte *)(lVar22 + 0x42) | *(byte *)(lVar22 + 0x43);
                    if ((((bVar6 & 1) == 0) && ((*(byte *)(lVar22 + 0x40) & 1) == 0)) &&
                       (*(char *)(lVar22 + 0x3f) != '\x01')) {
                      uVar27 = 0;
                    }
                    else {
                      uVar5 = cntfrq_el0;
                      InstructionSynchronizationBarrier();
                      uVar27 = cntvct_el0;
                      if (uVar5 != 1000000000) {
                        uVar3 = 0;
                        if (uVar5 != 0) {
                          uVar3 = uVar27 / uVar5;
                        }
                        uVar4 = 0;
                        if (uVar5 != 0) {
                          uVar4 = ((uVar27 - uVar3 * uVar5) * 1000000000) / uVar5;
                        }
                        uVar27 = uVar4 + uVar3 * 1000000000;
                      }
                      if ((bVar6 & 1) != 0) {
                        FUN_10a192960(puVar11,0x90bf79a9,&DAT_10f3acbad);
                        lVar22 = lRam00000001137eb468;
                        puVar14 = puVar11;
                        FUN_10a1333cc();
                        if (puVar14 != (undefined8 *)0x0) {
                          uVar21 = 3;
                          if (lRam00000001137eb468 != lVar22) {
                            uVar21 = 5;
                          }
                          lVar1 = 0;
                          if (lRam00000001137eb468 != lVar22) {
                            lVar1 = lVar22;
                          }
                          *puVar14 = &UNK_10f666c0f;
                          puVar14[1] = lVar1;
                          puVar14[2] = uVar27;
                          *(undefined4 *)(puVar14 + 3) = 0x90bf79a9;
                          *(undefined2 *)((long)puVar14 + 0x1c) = 7;
                          *(undefined1 *)((long)puVar14 + 0x1e) = uVar21;
                          if ((*(byte *)(puVar11 + 0x38) & 1) == 0) goto LAB_10a5a3448;
                          puVar11[0x18] = puVar11[0x18] + 1;
                        }
                      }
                    }
                    if (*(char *)(puVar11[1] + 0x41) == '\x01') {
                      plVar29 = (long *)puVar11[0xb];
                      if (plVar29 == (long *)0x0) {
                        plVar15 = (long *)0x0;
                      }
                      else {
                        plVar15 = plVar29;
                        (**(code **)(*plVar29 + 0x28))(plVar29,&UNK_10f666c0f);
                      }
                      bVar10 = plVar29 != (long *)0x0;
                    }
                    else {
                      plVar15 = (long *)0x0;
                      bVar10 = false;
                    }
                    uVar23 = 7;
                    uVar21 = 1;
                  }
                  else {
                    uVar21 = 0;
                    uVar27 = 0;
                    plVar15 = (long *)0x0;
                    bVar10 = false;
                    uVar23 = 7;
                  }
                }
                puVar25[0x60] = uVar21;
                puVar25[0x61] = 0;
                *(undefined2 *)(puVar25 + 0x62) = uVar23;
                *(undefined4 *)(puVar25 + 100) = uVar28;
                *(ulong *)(puVar25 + 0x68) = uVar27;
                *(long **)(puVar25 + 0x70) = plVar15;
                puVar25[0x78] = bVar10;
                ppuVar18 = &PTR___tlv_bootstrap_11340d750;
                ppuVar17 = ppuVar18;
                (*(code *)puVar8)();
                if (((ulong)*ppuVar17 & 1) == 0) {
                  ppuVar17 = &PTR___tlv_bootstrap_11340d738;
                  (*(code *)puVar7)(&PTR___tlv_bootstrap_11340d738);
                  __tlv_atexit(0x10a132a8c,ppuVar17,0x100000000);
                  (*(code *)puVar8)();
                  *(undefined1 *)ppuVar18 = 1;
                }
                puVar11 = (undefined8 *)ppuVar12[2];
                if (puVar11 == (undefined8 *)0x0) {
                  uVar21 = 0;
                  uVar23 = 0;
                  uVar28 = 0;
                  uVar27 = 0;
                  plVar15 = (long *)0x0;
                  bVar10 = false;
                }
                else {
                  lVar22 = puVar11[1];
                  uVar28 = 0x90bf79a9;
                  if (*(char *)(lVar22 + 0x17) == '\x01') {
                    bVar6 = *(byte *)(lVar22 + 0x42) | *(byte *)(lVar22 + 0x43);
                    if ((((bVar6 & 1) == 0) && ((*(byte *)(lVar22 + 0x40) & 1) == 0)) &&
                       (*(char *)(lVar22 + 0x3f) != '\x01')) {
                      uVar27 = 0;
                    }
                    else {
                      uVar5 = cntfrq_el0;
                      InstructionSynchronizationBarrier();
                      uVar27 = cntvct_el0;
                      if (uVar5 != 1000000000) {
                        uVar3 = 0;
                        if (uVar5 != 0) {
                          uVar3 = uVar27 / uVar5;
                        }
                        uVar4 = 0;
                        if (uVar5 != 0) {
                          uVar4 = ((uVar27 - uVar3 * uVar5) * 1000000000) / uVar5;
                        }
                        uVar27 = uVar4 + uVar3 * 1000000000;
                      }
                      if ((bVar6 & 1) != 0) {
                        FUN_10a192960(puVar11,0x90bf79a9,&DAT_10f3acbad);
                        lVar22 = lRam00000001137eb468;
                        puVar14 = puVar11;
                        FUN_10a1333cc();
                        if (puVar14 != (undefined8 *)0x0) {
                          uVar21 = 3;
                          if (lRam00000001137eb468 != lVar22) {
                            uVar21 = 5;
                          }
                          lVar1 = 0;
                          if (lRam00000001137eb468 != lVar22) {
                            lVar1 = lVar22;
                          }
                          *puVar14 = &UNK_10f666c16;
                          puVar14[1] = lVar1;
                          puVar14[2] = uVar27;
                          *(undefined4 *)(puVar14 + 3) = 0x90bf79a9;
                          *(undefined2 *)((long)puVar14 + 0x1c) = 7;
                          *(undefined1 *)((long)puVar14 + 0x1e) = uVar21;
                          if ((*(byte *)(puVar11 + 0x38) & 1) == 0) goto LAB_10a5a3448;
                          puVar11[0x18] = puVar11[0x18] + 1;
                        }
                      }
                    }
                    if (*(char *)(puVar11[1] + 0x41) == '\x01') {
                      plVar29 = (long *)puVar11[0xb];
                      if (plVar29 == (long *)0x0) {
                        plVar15 = (long *)0x0;
                      }
                      else {
                        plVar15 = plVar29;
                        (**(code **)(*plVar29 + 0x28))(plVar29,&UNK_10f666c16);
                      }
                      bVar10 = plVar29 != (long *)0x0;
                    }
                    else {
                      plVar15 = (long *)0x0;
                      bVar10 = false;
                    }
                    uVar23 = 7;
                    uVar21 = 1;
                  }
                  else {
                    uVar21 = 0;
                    uVar27 = 0;
                    plVar15 = (long *)0x0;
                    bVar10 = false;
                    uVar23 = 7;
                  }
                }
                puVar25[0x40] = uVar21;
                puVar25[0x41] = 0;
                *(undefined2 *)(puVar25 + 0x42) = uVar23;
                *(undefined4 *)(puVar25 + 0x44) = uVar28;
                *(ulong *)(puVar25 + 0x48) = uVar27;
                *(long **)(puVar25 + 0x50) = plVar15;
                puVar25[0x58] = bVar10;
                ppuVar18 = &PTR___tlv_bootstrap_11340d750;
                ppuVar17 = ppuVar18;
                (*(code *)puVar8)();
                if (((ulong)*ppuVar17 & 1) == 0) {
                  ppuVar17 = &PTR___tlv_bootstrap_11340d738;
                  (*(code *)puVar7)(&PTR___tlv_bootstrap_11340d738);
                  __tlv_atexit(0x10a132a8c,ppuVar17,0x100000000);
                  (*(code *)puVar8)();
                  *(undefined1 *)ppuVar18 = 1;
                }
                puVar11 = (undefined8 *)ppuVar12[2];
                if (puVar11 == (undefined8 *)0x0) {
                  uVar21 = 0;
                  uVar23 = 0;
                  uVar28 = 0;
                  uVar27 = 0;
                  plVar15 = (long *)0x0;
                  bVar10 = false;
                }
                else {
                  lVar22 = puVar11[1];
                  uVar28 = 0x90bf79a9;
                  if (*(char *)(lVar22 + 0x17) == '\x01') {
                    bVar6 = *(byte *)(lVar22 + 0x42) | *(byte *)(lVar22 + 0x43);
                    if ((((bVar6 & 1) == 0) && ((*(byte *)(lVar22 + 0x40) & 1) == 0)) &&
                       (*(char *)(lVar22 + 0x3f) != '\x01')) {
                      uVar27 = 0;
                    }
                    else {
                      uVar5 = cntfrq_el0;
                      InstructionSynchronizationBarrier();
                      uVar27 = cntvct_el0;
                      if (uVar5 != 1000000000) {
                        uVar3 = 0;
                        if (uVar5 != 0) {
                          uVar3 = uVar27 / uVar5;
                        }
                        uVar4 = 0;
                        if (uVar5 != 0) {
                          uVar4 = ((uVar27 - uVar3 * uVar5) * 1000000000) / uVar5;
                        }
                        uVar27 = uVar4 + uVar3 * 1000000000;
                      }
                      if ((bVar6 & 1) != 0) {
                        FUN_10a192960(puVar11,0x90bf79a9,&DAT_10f3acbad);
                        lVar22 = lRam00000001137eb468;
                        puVar14 = puVar11;
                        FUN_10a1333cc();
                        if (puVar14 != (undefined8 *)0x0) {
                          uVar21 = 3;
                          if (lRam00000001137eb468 != lVar22) {
                            uVar21 = 5;
                          }
                          lVar1 = 0;
                          if (lRam00000001137eb468 != lVar22) {
                            lVar1 = lVar22;
                          }
                          *puVar14 = &UNK_10f666c1d;
                          puVar14[1] = lVar1;
                          puVar14[2] = uVar27;
                          *(undefined4 *)(puVar14 + 3) = 0x90bf79a9;
                          *(undefined2 *)((long)puVar14 + 0x1c) = 7;
                          *(undefined1 *)((long)puVar14 + 0x1e) = uVar21;
                          if ((*(byte *)(puVar11 + 0x38) & 1) == 0) goto LAB_10a5a3448;
                          puVar11[0x18] = puVar11[0x18] + 1;
                        }
                      }
                    }
                    if (*(char *)(puVar11[1] + 0x41) == '\x01') {
                      plVar29 = (long *)puVar11[0xb];
                      if (plVar29 == (long *)0x0) {
                        plVar15 = (long *)0x0;
                      }
                      else {
                        plVar15 = plVar29;
                        (**(code **)(*plVar29 + 0x28))(plVar29,&UNK_10f666c1d);
                      }
                      bVar10 = plVar29 != (long *)0x0;
                    }
                    else {
                      plVar15 = (long *)0x0;
                      bVar10 = false;
                    }
                    uVar23 = 7;
                    uVar21 = 1;
                  }
                  else {
                    uVar21 = 0;
                    uVar27 = 0;
                    plVar15 = (long *)0x0;
                    bVar10 = false;
                    uVar23 = 7;
                  }
                }
                puVar25[0x20] = uVar21;
                puVar25[0x21] = 0;
                *(undefined2 *)(puVar25 + 0x22) = uVar23;
                *(undefined4 *)(puVar25 + 0x24) = uVar28;
                *(ulong *)(puVar25 + 0x28) = uVar27;
                *(long **)(puVar25 + 0x30) = plVar15;
                puVar25[0x38] = bVar10;
              }
            }
            if (plVar26 != (long *)0x0) {
              plVar15 = plVar26 + 1;
              do {
                lVar22 = *plVar15;
                cVar2 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar10) {
                  *plVar15 = lVar22 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar22 == 0) {
                (**(code **)(*plVar26 + 0x10))(plVar26);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
              }
            }
          }
        }
      }
      plVar26 = plStack_c8;
      if (plStack_c8 != (long *)0x0) {
        plVar15 = plStack_c8 + 1;
        do {
          lVar22 = *plVar15;
          cVar2 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar10) {
            *plVar15 = lVar22 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar22 == 0) {
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
        }
      }
    }
    plVar26 = plStack_b0;
    if (plStack_b0 != (long *)0x0) {
      plVar15 = plStack_b0 + 1;
      do {
        lVar22 = *plVar15;
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar10) {
          *plVar15 = lVar22 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar22 == 0) {
        (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
      }
    }
    FUN_10a5a363c(&puStack_a8,*ppuVar24);
    plStack_c8 = (long *)param_1[0x20];
    puStack_d0 = param_1[0x1f];
    if (param_1[0x20] != (undefined1 *)0x0) {
      plVar26 = (long *)(param_1[0x20] + 8);
      do {
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar10) {
          *plVar26 = *plVar26 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3ca90c(&puStack_e0,&puStack_d0);
    if (param_1[0x21] != puStack_e0) {
      FUN_10a5ad678(param_1 + 0x24,0);
      if (plStack_d8 != (long *)0x0) {
        plVar26 = plStack_d8 + 1;
        do {
          cVar2 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar10) {
            *plVar26 = *plVar26 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar26 = (long *)param_1[0x22];
      param_1[0x22] = (undefined1 *)plStack_d8;
      param_1[0x21] = puStack_e0;
      if (plVar26 != (long *)0x0) {
        plVar15 = plVar26 + 1;
        do {
          lVar22 = *plVar15;
          cVar2 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar10) {
            *plVar15 = lVar22 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar22 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
        }
      }
      puVar20 = param_1[0x21];
      lVar22 = 0x690;
      __Znwm();
      FUN_10a5e2bb8();
      puVar11 = (undefined8 *)0x260;
      __Znwm();
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = &PTR_FUN_110bf7f10;
      *(undefined1 *)(puVar11 + 3) = 0;
      puVar11[4] = puVar20;
      puVar11[5] = lVar22;
      puVar11[0x14] = 0;
      puVar11[0x13] = 0;
      puVar11[8] = 0;
      puVar11[7] = 0;
      puVar11[10] = 0;
      puVar11[9] = 0;
      puVar11[0xc] = 0;
      puVar11[0xb] = 0;
      puVar11[0xe] = 0;
      puVar11[0xd] = 0;
      puVar11[0x10] = 0;
      puVar11[0xf] = 0;
      puVar11[0x11] = 0;
      puVar11[0x12] = puVar11 + 0x13;
      puVar11[0x16] = 0;
      puVar11[0x15] = 0;
      puVar11[0x18] = 0;
      puVar11[0x17] = 0;
      *(undefined4 *)(puVar11 + 0x19) = 0x3f800000;
      puVar11[0x1b] = 0;
      puVar11[0x1a] = 0;
      puVar11[0x1d] = 0;
      puVar11[0x1c] = 0;
      *(undefined4 *)(puVar11 + 0x1e) = 0x3f800000;
      *(undefined2 *)(puVar11 + 0x1f) = 0;
      *(undefined4 *)((long)puVar11 + 0xfc) = 0;
      *(undefined4 *)((long)puVar11 + 0xff) = 0;
      puVar11[0x25] = 0;
      puVar11[0x26] = 0;
      puVar11[0x21] = 0;
      puVar11[0x22] = 0;
      puVar11[0x23] = 0;
      puVar11[0x24] = puVar11 + 0x25;
      puVar11[0x28] = 0;
      puVar11[0x27] = 0;
      puVar11[0x2a] = 0;
      puVar11[0x29] = 0;
      *(undefined4 *)(puVar11 + 0x2b) = 0x3f800000;
      puVar11[0x2d] = 0;
      puVar11[0x2c] = 0;
      puVar11[0x2f] = 0;
      puVar11[0x2e] = 0;
      *(undefined4 *)(puVar11 + 0x30) = 0x3f800000;
      *(undefined1 *)(puVar11 + 0x3f) = 0;
      puVar11[0x32] = 0;
      puVar11[0x31] = 0;
      puVar11[0x34] = 0;
      puVar11[0x33] = 0;
      puVar11[0x36] = 0;
      puVar11[0x35] = 0;
      puVar11[0x38] = 0;
      puVar11[0x37] = 0;
      puVar11[0x3a] = 0;
      puVar11[0x39] = 0;
      puVar11[0x3c] = 0;
      puVar11[0x3b] = 0;
      puVar11[0x3e] = 0;
      puVar11[0x3d] = 0;
      puVar11[0x49] = 0;
      puVar11[0x48] = 0;
      puVar11[0x4b] = 0;
      puVar11[0x4a] = 0;
      puVar11[0x45] = 0;
      puVar11[0x44] = 0;
      puVar11[0x47] = 0;
      puVar11[0x46] = 0;
      puVar11[0x41] = 0;
      puVar11[0x40] = 0;
      puVar11[0x43] = 0;
      puVar11[0x42] = 0;
      *(undefined8 **)(lVar22 + 0x670) = puVar11 + 3;
      *(undefined8 **)(lVar22 + 0x678) = puVar11;
      *(undefined8 *)(lVar22 + 0x688) = 0xffefffffffffffff;
      *(undefined8 *)(lVar22 + 0x680) = 0xffefffffffffffff;
      puStack_b8 = (undefined *)0x0;
      FUN_10a5ad678(param_1 + 0x24,lVar22);
      FUN_10a5ad678(&puStack_b8,0);
    }
    FUN_10a5a398c(param_1,0);
    puStack_b8 = &UNK_10f653c20;
    plStack_b0 = (long *)0x21;
    if (*(long *)(param_1[0x1f] + 0x260) != 0) {
      lVar22 = *(long *)(*(long *)(param_1[0x1f] + 0x260) + 0x230);
      if (lVar22 != 0) {
        *(undefined1 *)(lVar22 + 0x850) = 0;
      }
      if (plStack_d8 != (long *)0x0) {
        plVar26 = plStack_d8 + 1;
        do {
          lVar22 = *plVar26;
          cVar2 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar10) {
            *plVar26 = lVar22 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar22 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
        }
      }
      plVar26 = plStack_c8;
      if (plStack_c8 != (long *)0x0) {
        plVar15 = plStack_c8 + 1;
        do {
          lVar22 = *plVar15;
          cVar2 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar10) {
            *plVar15 = lVar22 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar22 == 0) {
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
        }
      }
      ppuVar16 = &puStack_a8;
      FUN_10a5a39f8();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
        ___stack_chk_fail();
        func_0x00010a5cd6b0(&puStack_a8);
        func_0x00010a13320c(&puStack_d0);
        func_0x00010a3f5df8(&puStack_b8);
        FUN_10a5cd600(param_1 + 0x28,0);
        FUN_10a5cd658(param_1 + 0x27,0);
        FUN_10a3f5e88(param_1 + 0x25);
        FUN_10a5ad678(param_1 + 0x24,0);
        func_0x00010a3f61b0(param_1 + 0x21);
        FUN_10a3f5e88(ppuVar24);
        FUN_10a5a3b60(param_1);
        __Unwind_Resume();
        if (*(char *)((long)ppuVar16 + 0x37) < '\0') {
          __ZdlPv(ppuVar16[4]);
        }
        func_0x00010a1331b4(ppuVar16 + 2);
        return ppuVar16;
      }
      return param_1;
    }
    FUN_10a0edfc4(&puStack_b8);
  }
LAB_10a5a3448:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a5a344c);
  (*pcVar9)();
}



/* Entry: 10a5a353c; end: 10a5a363b;  */

long FUN_10a5a353c(long param_1)

{
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  func_0x00010a1331b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10a5a363c; end: 10a5a398b;  */

long FUN_10a5a363c(long param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 *******pppppppuVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *extraout_x8;
  long lVar9;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 ******ppppppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_10a3ca6e8(param_1 + 0x18);
  *(long *)(param_1 + 0x38) = param_2;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x30) = 0;
  if (*(char *)(param_2 + 0x290) == '\x05') {
    return param_1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    ppuVar7 = &PTR___tlv_bootstrap_11340df00;
    (*(code *)PTR___tlv_bootstrap_11340df00)();
    puVar8 = *ppuVar7;
  }
  else {
    ppuVar7 = &PTR___tlv_bootstrap_11340df00;
    (*(code *)PTR___tlv_bootstrap_11340df00)(*(undefined8 *)(param_1 + 8));
    *ppuVar7 = extraout_x8;
    *(undefined1 *)(param_1 + 0x10) = 0;
    puVar8 = extraout_x8;
  }
  *(undefined **)(param_1 + 8) = puVar8;
  puVar8 = (undefined *)0x1;
  FUN_10a303694();
  *ppuVar7 = puVar8;
  *(undefined1 *)(param_1 + 0x10) = 1;
  bVar1 = *(byte *)(param_2 + 0x290);
  uVar2 = bVar1 - 2;
  if (2 < uVar2) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      lVar9 = *(long *)(param_1 + 0x20);
      FUN_10a5bbc70(lVar9);
      *(undefined1 *)(lVar9 + 0x270) = 0;
      *(undefined1 *)(param_1 + 0x28) = 0;
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    lVar9 = 1;
    FUN_10a303694();
    *(long *)(param_1 + 0x20) = lVar9;
    FUN_10a5bbc70();
    *(undefined1 *)(lVar9 + 0x270) = 1;
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  lVar9 = 0;
  FUN_10a303694();
  bVar5 = (uVar2 & 0xff) < 3;
  if (lVar9 == 0) {
    if (bVar5) goto LAB_10a5a3834;
  }
  else if ((bVar5) || (*(int *)(lVar9 + 0x278) == 0)) {
LAB_10a5a3834:
    if (1 < (uVar2 & 0xff)) {
      return param_1;
    }
    ppuVar7 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    puVar8 = *ppuVar7;
    if (puVar8 == (undefined *)0x0) {
      return param_1;
    }
    if (puVar8[0xc0] != '\x01') {
      return param_1;
    }
    if (*(long *)(puVar8 + 0x80) == 0) {
      return param_1;
    }
    lVar9 = *(long *)(*(long *)(puVar8 + 0x80) + 0x18);
    if (lVar9 == 0) {
      return param_1;
    }
    iVar6 = *(int *)(lVar9 + 0x734);
    if (bVar1 == 3) {
      if (iVar6 == 2 || iVar6 == 7) {
        return param_1;
      }
    }
    else if (iVar6 == 3 || iVar6 == 8) {
      return param_1;
    }
    FUN_10a08e2f4(0);
    return param_1;
  }
  if (*(char *)(param_1 + 0x31) == '\x01') {
    FUN_10a5bc8e8();
    *(undefined1 *)(param_1 + 0x31) = 0;
  }
  FUN_10ad4bc5c();
  if ((uint)lVar9 != 0) {
    FUN_10a185264(&ppppppuStack_58,0x400);
    puStack_68 = &UNK_10f66429f;
    uStack_60 = 0;
    FUN_10a304b28(&ppppppuStack_58,&puStack_68,0,0,lVar9);
    pppppppuVar3 = (undefined8 *******)ppppppuStack_58;
    if (-1 < (char)bStack_41) {
      uStack_50 = (ulong)bStack_41;
      pppppppuVar3 = &ppppppuStack_58;
    }
    FUN_10ae03140(0,pppppppuVar3,uStack_50);
    ppuVar7 = &PTR_PTR_113300cb8;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar7,&PTR_PTR_113300cb8);
    iVar6 = (int)ppuVar7;
    __ZSt19uncaught_exceptionsv();
    if (iVar6 == 0) {
      if (((uint)lVar9 >> 5 & 1) == 0) {
        FUN_10a5bcb00(&ppppppuStack_58);
      }
      else {
        FUN_10a31bdc4(&ppppppuStack_58);
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5a38dc);
      (*pcVar4)();
    }
    if ((char)bStack_41 < '\0') {
      __ZdlPv(ppppppuStack_58);
    }
  }
  *(undefined1 *)(param_1 + 0x31) = 1;
  return param_1;
}



/* Entry: 10a5a398c; end: 10a5a39f7;  */

void FUN_10a5a398c(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0xf8) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0xf8) + 0x1c8);
    (**(code **)(*plVar1 + 0xd0))();
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return;
}



/* Entry: 10a5a39f8; end: 10a5a3b5f;  */

long FUN_10a5a39f8(long param_1)

{
  byte *pbVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *extraout_x8;
  undefined1 auStack_60 [48];
  
  FUN_10a18eadc(auStack_60,&UNK_10f666c24);
  pbVar1 = (byte *)0x113836510;
  FUN_10ad0621c();
  if ((*pbVar1 >> 5 & 1) == 0) {
    lVar2 = 0;
    FUN_10a303694();
    if (lVar2 != 0) {
      func_0x00010a5bbca8();
    }
  }
  FUN_10a1988cc(auStack_60);
  FUN_10a5bbbc8(param_1 + 0x38);
  if (*(char *)(param_1 + 0x31) == '\x01') {
    FUN_10a5bc8e8();
  }
  if (*(char *)(param_1 + 0x28) == '\x01') {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010a5bbc70(lVar2);
    *(undefined1 *)(lVar2 + 0x270) = 0;
  }
  func_0x00010a3f5ee0(param_1 + 0x18,0);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    ppuVar3 = &PTR___tlv_bootstrap_11340df00;
    (*(code *)PTR___tlv_bootstrap_11340df00)(*(undefined8 *)(param_1 + 8));
    *ppuVar3 = extraout_x8;
  }
  return param_1;
}



/* Entry: 10a5a3b60; end: 10a5a3c3b;  */

long * FUN_10a5a3b60(long *param_1)

{
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
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



/* Entry: 10a5a3c3c; end: 10a5a4c2f;  */

void FUN_10a5a3c3c(long *****param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long *****ppppplVar7;
  long ******pppppplVar8;
  char *pcVar9;
  long *****ppppplVar10;
  long *plVar11;
  undefined1 uVar12;
  undefined *extraout_x8;
  long ****pppplVar13;
  long *****ppppplVar14;
  long *****unaff_x19;
  long ***ppplVar15;
  long ****pppplVar16;
  long *****unaff_x27;
  long ****pppplStack_230;
  undefined1 uStack_222;
  undefined1 uStack_221;
  long *****ppppplStack_220;
  long *****ppppplStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  long *****ppppplStack_200;
  long *****ppppplStack_1f8;
  undefined8 uStack_1f0;
  long *****ppppplStack_1e0;
  long *****ppppplStack_1d8;
  undefined8 uStack_1d0;
  long ****pppplStack_1c0;
  long *plStack_1b8;
  long ****pppplStack_1b0;
  long ****pppplStack_1a8;
  long ****pppplStack_1a0;
  undefined1 auStack_193 [3];
  long **pplStack_190;
  undefined *puStack_188;
  long *****ppppplStack_180;
  long *****ppppplStack_178;
  undefined8 uStack_170;
  long *****ppppplStack_168;
  long *****ppppplStack_160;
  long *****ppppplStack_158;
  long **pplStack_150;
  undefined8 uStack_148;
  code *pcStack_138;
  undefined **ppuStack_130;
  long ****pppplStack_128;
  undefined1 auStack_f8 [64];
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 0x35) == '\0') {
    unaff_x19 = (long *****)param_1[0x1f][0x54];
    if (unaff_x19 == (long *****)0x0) {
      pppplStack_230 = (long ****)0x0;
    }
    else {
      ppppplVar7 = unaff_x19 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
        if (bVar2) {
          *ppppplVar7 = (long ****)((long)*ppppplVar7 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
        if (bVar2) {
          *ppppplVar7 = (long ****)((long)*ppppplVar7 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
        pppplStack_230 = (long ****)unaff_x19;
      } while (cVar1 != '\0');
    }
    FUN_10a0095ac();
    (*(code *)PTR___tlv_bootstrap_11340dde0)();
    FUN_10a3ee340();
    uStack_221 = 0;
    if ((long *****)pppplStack_230 != (long *****)0x0) {
      ppppplVar7 = (long *****)(pppplStack_230 + 1);
      do {
        pppplVar13 = *ppppplVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
        if (bVar2) {
          *ppppplVar7 = (long ****)((long)pppplVar13 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (pppplVar13 == (long ****)0x0) {
        (*(code *)(*pppplStack_230)[2])(pppplStack_230);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppplStack_230);
      }
    }
    pppplVar13 = param_1[0x21];
    ppuVar5 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)();
    pppplVar16 = (long ****)*ppuVar5;
    if (pppplVar16 == pppplVar13) {
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      ppuStack_a8 = (undefined **)0x0;
      ppuStack_b0 = &PTR_DAT_110ae9180;
      pcStack_b8 = (code *)&UNK_1053a6a3c;
    }
    else {
      ppuVar6 = (undefined **)0x8;
      __Znwm();
      *ppuVar6 = (undefined *)pppplVar16;
      *ppuVar5 = (undefined *)pppplVar13;
      ppuStack_b0 = &PTR_FUN_110bd2ad0;
      pcStack_b8 = FUN_10a3fa23c;
      ppuVar5 = ppuVar6;
      ppuStack_a8 = ppuVar6;
    }
    pplStack_190 = (long **)pppplVar13[0x17a];
    FUN_10a1bd024();
    puStack_188 = ppuVar5[8];
    FUN_10a1bd024();
    ppuVar5[8] = extraout_x8;
    FUN_10a5a363c(auStack_f8,param_1[0x1f]);
    ppppplVar7 = param_1;
    FUN_10a5a52cc();
    FUN_10a5aa6a8(auStack_193,param_1[0x1f]);
    FUN_10ad62e88(param_1[0x21][0x1a8]);
    pcStack_138 = FUN_10a5cde24;
    ppuStack_130 = &PTR_DAT_110bf7e98;
    pppplVar16 = param_1[0x1f];
    uStack_170 = (long *****)CONCAT17(9,(undefined7)uStack_170);
    ppppplStack_180 = (long *****)0x63732e656e656373;
    ppppplStack_178 = (long *****)CONCAT62(ppppplStack_178._2_6_,0x6e);
    ppplVar15 = pppplVar16[0x45];
    pppplVar13 = (long ****)pppplVar16[0x44];
    if (-1 < (char)*(byte *)((long)pppplVar16 + 0x237)) {
      ppplVar15 = (long ***)(ulong)*(byte *)((long)pppplVar16 + 0x237);
      pppplVar13 = pppplVar16 + 0x44;
    }
    pppppplVar8 = &ppppplStack_180;
    pppplStack_128 = (long ****)param_1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (pppppplVar8,0,pppplVar13,ppplVar15);
    unaff_x27 = &pppplStack_1b0;
    pppplStack_1a8 = (long ****)pppppplVar8[1];
    pppplStack_1b0 = (long ****)*pppppplVar8;
    pppplStack_1a0 = (long ****)pppppplVar8[2];
    pppppplVar8[1] = (long *****)0x0;
    pppppplVar8[2] = (long *****)0x0;
    *pppppplVar8 = (long *****)0x0;
    if ((long)uStack_170 < 0) {
      __ZdlPv(ppppplStack_180);
    }
    FUN_10a3cfb08(&plStack_1b8,param_1[0x21],&pppplStack_1b0);
    FUN_10a044790(&pcStack_138);
    pcVar9 = (char *)0x113834e90;
    FUN_10a08f69c();
    if (*pcVar9 == '\x01') {
      ppppplStack_158 = (long *****)0xc;
      ppppplStack_160 = (long *****)&DAT_10f655dca;
      uStack_148 = 0x8cd7758300000000;
      pplStack_150 = (long **)0xe3c94d21701523c3;
      plVar11 = plStack_1b8;
      (**(code **)(*plStack_1b8 + 0x38))(plStack_1b8,&ppppplStack_160,0x40);
      FUN_10a3ce374(param_1[0x21],plVar11);
      if (((ulong)param_1[0x21][0x35] & 1) == 0) goto LAB_10a5a4bf8;
      ppplVar15 = param_1[0x21][0x2c];
      pppplVar13 = (long ****)ppplVar15[2];
      ppppplStack_178 = (long *****)0x0;
      uStack_170 = (long *****)0x0;
      if (pppplVar13 == (long ****)0x0) {
        ppppplVar10 = (long *****)0xc0;
        __Znwm();
        ppppplVar10[2] = (long ****)0x0;
        ppppplVar10[1] = (long ****)0x200000006;
        *(undefined2 *)(ppppplVar10 + 3) = 4;
        ppppplVar10[5] = (long ****)0x0;
        ppppplVar10[4] = (long ****)0x0;
        ppppplVar10[7] = (long ****)0x0;
        ppppplVar10[6] = (long ****)0x0;
        ppppplVar10[9] = (long ****)0x0;
        ppppplVar10[8] = (long ****)0x0;
        ppppplVar10[0xb] = (long ****)0x0;
        ppppplVar10[10] = (long ****)0x0;
        ppppplVar10[0xd] = (long ****)0x0;
        ppppplVar10[0xc] = (long ****)0x0;
        ppppplVar10[0xf] = (long ****)0x0;
        ppppplVar10[0xe] = (long ****)0x0;
        ppppplVar10[0x10] = (long ****)0x0;
        ppppplVar10[0x11] = (long ****)(ppppplVar10 + 3);
        ppppplVar10[0x12] = (long ****)0x0;
        *(undefined2 *)(ppppplVar10 + 0x13) = 0;
        *ppppplVar10 = (long ****)&PTR_DAT_110bf7b08;
        ppppplStack_180 = ppppplVar10 + 0x14;
        *ppppplStack_180 = (long ****)param_1;
        *(undefined1 *)(ppppplVar10 + 0x16) = 1;
        ppppplVar10[0x17] = (long ****)0x0;
        ppppplStack_168 = (long *****)FUN_10a5bd90c;
        ppppplStack_178 = ppppplVar10;
        uStack_170 = ppppplVar10;
      }
      else {
        ppppplStack_220 = (long *****)0x0;
        (*(code *)(*pppplVar13)[5])(pppplVar13,0,&ppppplStack_220);
        if ((long ******)ppppplStack_220 != (long ******)0x0) {
          func_0x0001092af97c(&ppppplStack_220);
          goto LAB_10a5a4bf8;
        }
        ppppplVar10 = (long *****)0xc8;
        __Znwm();
        ppppplVar10[2] = (long ****)0x0;
        ppppplVar10[1] = (long ****)0x200000006;
        *(undefined2 *)(ppppplVar10 + 3) = 4;
        ppppplVar10[5] = (long ****)0x0;
        ppppplVar10[4] = (long ****)0x0;
        ppppplVar10[7] = (long ****)0x0;
        ppppplVar10[6] = (long ****)0x0;
        ppppplVar10[9] = (long ****)0x0;
        ppppplVar10[8] = (long ****)0x0;
        ppppplVar10[0xb] = (long ****)0x0;
        ppppplVar10[10] = (long ****)0x0;
        ppppplVar10[0xd] = (long ****)0x0;
        ppppplVar10[0xc] = (long ****)0x0;
        ppppplVar10[0xf] = (long ****)0x0;
        ppppplVar10[0xe] = (long ****)0x0;
        ppppplVar10[0x10] = (long ****)0x0;
        ppppplVar10[0x11] = (long ****)(ppppplVar10 + 3);
        ppppplVar10[0x12] = (long ****)0x0;
        *(undefined2 *)(ppppplVar10 + 0x13) = 0;
        ppppplVar10[0x14] = (long ****)param_1;
        *ppppplVar10 = (long ****)&PTR_FUN_110bf7ad0;
        *(undefined1 *)(ppppplVar10 + 0x16) = 1;
        ppppplVar10[0x17] = (long ****)0x0;
        ppppplVar10[0x18] = pppplVar13;
        if ((long ******)ppppplStack_178 != (long ******)0x0) {
          pppppplVar8 = (long ******)(ppppplStack_178 + 1);
          do {
            ppppplVar14 = *pppppplVar8;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppppplVar8,0x10);
            if (bVar2) {
              *pppppplVar8 = (long *****)((long)ppppplVar14 + -4);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (((ulong)ppppplVar14 & 0x1fffffffc) == 4) {
            do {
              ppppplVar14 = *pppppplVar8;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(pppppplVar8,0x10);
              if (bVar2) {
                *pppppplVar8 = (long *****)((long)ppppplVar14 + -1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if ((long *****)((long)ppppplVar14 + -1) == (long *****)0x0) {
              (*(code *)(*ppppplStack_178)[1])();
            }
          }
        }
        ppppplStack_178 = ppppplVar10;
        if (uStack_170 != (long *****)0x0) {
          func_0x0001092b4274(&uStack_170);
        }
        ppppplStack_168 = (long *****)0x10a5bd8dc;
        ppppplStack_180 = ppppplVar10 + 0x14;
        uStack_170 = ppppplVar10;
        __ZNSt13exception_ptrD1Ev(&ppppplStack_220);
      }
      ppppplVar10 = ppppplStack_180;
      if ((long *****)ppppplStack_180[3] != (long *****)0x0) {
        func_0x0001092b4274();
      }
      ppppplVar10[3] = (long ****)uStack_170;
      uStack_170 = (long *****)0x0;
      ppppplStack_220 = ppppplStack_168;
      ppppplStack_218 = ppppplStack_180;
      uStack_210 = ppplVar15;
      (*(code *)**ppplVar15)(ppplVar15,&ppppplStack_220);
      ppppplVar10 = ppppplStack_178;
      pppplStack_1c0 = (long ****)ppppplStack_178;
      ppppplStack_178 = (long *****)0x0;
      if ((uStack_170 != (long *****)0x0) &&
         (func_0x0001092b4274(&uStack_170), (long ******)ppppplStack_178 != (long ******)0x0)) {
        pppppplVar8 = (long ******)(ppppplStack_178 + 1);
        do {
          ppppplVar14 = *pppppplVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pppppplVar8,0x10);
          if (bVar2) {
            *pppppplVar8 = (long *****)((long)ppppplVar14 + -4);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (((ulong)ppppplVar14 & 0x1fffffffc) == 4) {
          do {
            ppppplVar14 = *pppppplVar8;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppppplVar8,0x10);
            if (bVar2) {
              *pppppplVar8 = (long *****)((long)ppppplVar14 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if ((long *****)((long)ppppplVar14 + -1) == (long *****)0x0) {
            (*(code *)(*ppppplStack_178)[1])();
          }
        }
      }
      FUN_10a5ab9b4(param_1,&plStack_1b8);
      FUN_10a1bffb8(&pplStack_190);
      iVar4 = (int)&pcStack_b8;
      FUN_10a044790();
      FUN_10ad055a0();
      if (iVar4 != 0) {
        ppuVar5 = &PTR___tlv_bootstrap_11340dfd8;
        (*(code *)PTR___tlv_bootstrap_11340dfd8)();
        if (*ppuVar5 == (undefined *)0x0) {
          ppuVar5 = &PTR___tlv_bootstrap_11340dd98;
          (*(code *)PTR___tlv_bootstrap_11340dd98)();
          plVar11 = (long *)*ppuVar5;
          if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0)
             ) goto LAB_10a5a41fc;
          plVar11 = plVar11 + 7;
        }
        else {
          plVar11 = (long *)(*ppuVar5 + 8);
        }
        if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
          func_0x000107c2b054(&ppppplStack_1e0,&UNK_10f665925);
          pppplVar13 = param_1[0x1f];
          if (*(char *)((long)pppplVar13 + 0x21f) < '\0') {
            func_0x000107c3192c(&ppppplStack_200,pppplVar13[0x41],pppplVar13[0x42]);
          }
          else {
            ppppplStack_1f8 = (long *****)pppplVar13[0x42];
            ppppplStack_200 = (long *****)pppplVar13[0x41];
            uStack_1f0 = pppplVar13[0x43];
          }
          if ((long)uStack_1d0 < 0) {
            ppppplStack_180 = (long *****)"null";
            if ((long ******)ppppplStack_1d8 != (long ******)0x0) {
              ppppplStack_180 = ppppplStack_1e0;
            }
          }
          else {
            ppppplStack_180 = (long *****)"null";
            if (uStack_1d0._7_1_ != '\0') {
              ppppplStack_180 = (long *****)&ppppplStack_1e0;
            }
          }
          if ((long)uStack_1f0 < 0) {
            ppppplStack_220 = (long *****)"null";
            if ((long ******)ppppplStack_1f8 != (long ******)0x0) {
              ppppplStack_220 = ppppplStack_200;
            }
          }
          else {
            ppppplStack_220 = (long *****)"null";
            if (uStack_1f0._7_1_ != '\0') {
              ppppplStack_220 = (long *****)&ppppplStack_200;
            }
          }
          FUN_10a224324(&ppppplStack_180,&ppppplStack_220);
          if ((long)uStack_1d0 < 0) {
            if ((long ******)ppppplStack_1d8 != (long ******)0x0) {
              func_0x000107c3192c(&ppppplStack_180,ppppplStack_1e0);
              goto LAB_10a5a4794;
            }
LAB_10a5a4708:
            uVar12 = 0;
            ppppplStack_180 = (long *****)((ulong)ppppplStack_180 & 0xffffffffffffff00);
          }
          else {
            if (uStack_1d0._7_1_ == '\0') goto LAB_10a5a4708;
            ppppplStack_178 = ppppplStack_1d8;
            ppppplStack_180 = ppppplStack_1e0;
            uStack_170 = (long *****)uStack_1d0;
LAB_10a5a4794:
            uVar12 = 1;
          }
          ppppplStack_168 = (long *****)CONCAT71(ppppplStack_168._1_7_,uVar12);
          if ((long)uStack_1f0 < 0) {
            if ((long ******)ppppplStack_1f8 != (long ******)0x0) {
              func_0x000107c3192c(&ppppplStack_220,ppppplStack_200);
              goto LAB_10a5a4804;
            }
LAB_10a5a47c0:
            uStack_208 = 0;
            ppppplStack_220 = (long *****)((ulong)ppppplStack_220 & 0xffffffffffffff00);
          }
          else {
            if (uStack_1f0._7_1_ == '\0') goto LAB_10a5a47c0;
            ppppplStack_218 = ppppplStack_1f8;
            ppppplStack_220 = ppppplStack_200;
            uStack_210 = uStack_1f0;
LAB_10a5a4804:
            uStack_208 = 1;
          }
          FUN_10a234a0c(&ppppplStack_180,&ppppplStack_220);
          goto LAB_10a5a4bf8;
        }
      }
LAB_10a5a41fc:
      iVar4 = (int)&pppplStack_1c0;
      FUN_109d1a244();
      if (ppppplVar10 != (long *****)0x0) {
        ppppplVar14 = ppppplVar10 + 1;
        do {
          pppplVar13 = *ppppplVar14;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppplVar14,0x10);
          if (bVar2) {
            *ppppplVar14 = (long ****)((long)pppplVar13 + -4);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (((ulong)pppplVar13 & 0x1fffffffc) == 4) {
          do {
            pppplVar13 = *ppppplVar14;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppppplVar14,0x10);
            if (bVar2) {
              *ppppplVar14 = (long ****)((long)pppplVar13 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if ((long ****)((long)pppplVar13 + -1) == (long ****)0x0) {
            (*(code *)(*ppppplVar10)[1])();
            iVar4 = (int)ppppplVar10;
          }
        }
      }
    }
    else {
      FUN_10a5ab9b4(param_1,&plStack_1b8);
      FUN_10a1bffb8(&pplStack_190);
      iVar4 = (int)&pcStack_b8;
      FUN_10a044790();
      FUN_10ad055a0();
      if (iVar4 != 0) {
        ppuVar5 = &PTR___tlv_bootstrap_11340dfd8;
        (*(code *)PTR___tlv_bootstrap_11340dfd8)();
        if (*ppuVar5 == (undefined *)0x0) {
          ppuVar5 = &PTR___tlv_bootstrap_11340dd98;
          (*(code *)PTR___tlv_bootstrap_11340dd98)();
          plVar11 = (long *)*ppuVar5;
          if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0)
             ) goto LAB_10a5a408c;
          plVar11 = plVar11 + 7;
        }
        else {
          plVar11 = (long *)(*ppuVar5 + 8);
        }
        if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
          func_0x000107c2b054(&ppppplStack_220,&UNK_10f665925);
          pppplVar13 = param_1[0x1f];
          if (*(char *)((long)pppplVar13 + 0x21f) < '\0') {
            func_0x000107c3192c(&ppppplStack_1e0,pppplVar13[0x41],pppplVar13[0x42]);
          }
          else {
            ppppplStack_1d8 = (long *****)pppplVar13[0x42];
            ppppplStack_1e0 = (long *****)pppplVar13[0x41];
            uStack_1d0 = pppplVar13[0x43];
          }
          if ((long)uStack_210 < 0) {
            ppppplStack_180 = (long *****)"null";
            if ((long ******)ppppplStack_218 != (long ******)0x0) {
              ppppplStack_180 = ppppplStack_220;
            }
          }
          else {
            ppppplStack_180 = (long *****)"null";
            if (uStack_210._7_1_ != '\0') {
              ppppplStack_180 = (long *****)&ppppplStack_220;
            }
          }
          if ((long)uStack_1d0 < 0) {
            ppppplStack_160 = (long *****)"null";
            if ((long ******)ppppplStack_1d8 != (long ******)0x0) {
              ppppplStack_160 = ppppplStack_1e0;
            }
          }
          else {
            ppppplStack_160 = (long *****)"null";
            if (uStack_1d0._7_1_ != '\0') {
              ppppplStack_160 = (long *****)&ppppplStack_1e0;
            }
          }
          FUN_10a224324(&ppppplStack_180,&ppppplStack_160);
          if ((long)uStack_210 < 0) {
            if ((long ******)ppppplStack_218 != (long ******)0x0) {
              func_0x000107c3192c(&ppppplStack_180,ppppplStack_220);
              goto LAB_10a5a474c;
            }
LAB_10a5a4634:
            uVar12 = 0;
            ppppplStack_180 = (long *****)((ulong)ppppplStack_180 & 0xffffffffffffff00);
          }
          else {
            if (uStack_210._7_1_ == '\0') goto LAB_10a5a4634;
            ppppplStack_178 = ppppplStack_218;
            ppppplStack_180 = ppppplStack_220;
            uStack_170 = (long *****)uStack_210;
LAB_10a5a474c:
            uVar12 = 1;
          }
          ppppplStack_168 = (long *****)CONCAT71(ppppplStack_168._1_7_,uVar12);
          if ((long)uStack_1d0 < 0) {
            if ((long ******)ppppplStack_1d8 != (long ******)0x0) {
              func_0x000107c3192c(&ppppplStack_160,ppppplStack_1e0);
              goto LAB_10a5a47dc;
            }
LAB_10a5a4778:
            uVar12 = 0;
            ppppplStack_160 = (long *****)((ulong)ppppplStack_160 & 0xffffffffffffff00);
          }
          else {
            if (uStack_1d0._7_1_ == '\0') goto LAB_10a5a4778;
            ppppplStack_158 = ppppplStack_1d8;
            ppppplStack_160 = ppppplStack_1e0;
            pplStack_150 = (long **)uStack_1d0;
LAB_10a5a47dc:
            uVar12 = 1;
          }
          uStack_148 = CONCAT71(uStack_148._1_7_,uVar12);
          FUN_10a234a0c(&ppppplStack_180,&ppppplStack_160);
          goto LAB_10a5a4bf8;
        }
      }
LAB_10a5a408c:
      iVar4 = (int)param_1[0x21];
      FUN_10a3d0da0();
    }
    FUN_10ad055a0();
    if (iVar4 == 0) {
LAB_10a5a4280:
      if (*(char *)(param_1[0x1f] + 0x52) == '\x03') {
        (*(code *)(*ppppplVar7)[0x1f])(ppppplVar7,param_1[0x21][0x20] + 0x44);
      }
      if (plStack_1b8 != (long *)0x0) {
        (**(code **)(*plStack_1b8 + 8))();
      }
      if ((long)pppplStack_1a0 < 0) {
        __ZdlPv(pppplStack_1b0);
      }
      FUN_10a044790(&pcStack_138);
      (*(code *)*ppuStack_130)(&ppuStack_130);
      FUN_10a5aab60(auStack_193);
      FUN_10a5a39f8(auStack_f8);
      FUN_10a1bff04(&pplStack_190);
      FUN_10a044790(&pcStack_b8);
      (*(code *)*ppuStack_b0)(&ppuStack_b0);
      func_0x00010a5bce48(&uStack_222);
      if (unaff_x19 != (long *****)0x0) {
        ppppplVar7 = unaff_x19 + 1;
        do {
          pppplVar13 = *ppppplVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
          if (bVar2) {
            *ppppplVar7 = (long ****)((long)pppplVar13 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (pppplVar13 == (long ****)0x0) {
          (*(code *)(*unaff_x19)[2])(unaff_x19);
          __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x19);
        }
      }
      goto LAB_10a5a3c74;
    }
    ppuVar5 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar5 == (undefined *)0x0) {
      ppuVar5 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar5;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5a4280;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar5 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) == 0) goto LAB_10a5a4280;
  }
  else {
LAB_10a5a3c74:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
    param_1 = unaff_x19;
  }
  func_0x000107c2b054(&ppppplStack_220,&UNK_10f665947);
  pppplVar13 = param_1[0x1f];
  if (*(char *)((long)pppplVar13 + 0x21f) < '\0') {
    func_0x000107c3192c(&ppppplStack_1e0,pppplVar13[0x41],pppplVar13[0x42]);
  }
  else {
    ppppplStack_1d8 = (long *****)pppplVar13[0x42];
    ppppplStack_1e0 = (long *****)pppplVar13[0x41];
    uStack_1d0 = pppplVar13[0x43];
  }
  if ((long)uStack_210 < 0) {
    ppppplStack_180 = (long *****)"null";
    if ((long ******)ppppplStack_218 != (long ******)0x0) {
      ppppplStack_180 = ppppplStack_220;
    }
  }
  else {
    ppppplStack_180 = (long *****)"null";
    if (uStack_210._7_1_ != '\0') {
      ppppplStack_180 = (long *****)&ppppplStack_220;
    }
  }
  if ((long)uStack_1d0 < 0) {
    ppppplStack_160 = (long *****)"null";
    if ((long ******)ppppplStack_1d8 != (long ******)0x0) {
      ppppplStack_160 = ppppplStack_1e0;
    }
  }
  else {
    ppppplStack_160 = (long *****)"null";
    if (uStack_1d0._7_1_ != '\0') {
      ppppplStack_160 = (long *****)&ppppplStack_1e0;
    }
  }
  FUN_10a224324(&ppppplStack_180,&ppppplStack_160);
  if ((long)uStack_210 < 0) {
    if ((long ******)ppppplStack_218 != (long ******)0x0) {
      func_0x000107c3192c(&ppppplStack_180,ppppplStack_220);
      goto LAB_10a5a4650;
    }
LAB_10a5a4540:
    uVar12 = 0;
    ppppplStack_180 = (long *****)((ulong)ppppplStack_180 & 0xffffffffffffff00);
  }
  else {
    if (uStack_210._7_1_ == '\0') goto LAB_10a5a4540;
    unaff_x27[7] = (long ****)ppppplStack_218;
    unaff_x27[6] = (long ****)ppppplStack_220;
    uStack_170 = (long *****)uStack_210;
LAB_10a5a4650:
    uVar12 = 1;
  }
  ppppplStack_168 = (long *****)CONCAT71(ppppplStack_168._1_7_,uVar12);
  if ((long)uStack_1d0 < 0) {
    if ((long ******)ppppplStack_1d8 != (long ******)0x0) {
      func_0x000107c3192c(&ppppplStack_160,ppppplStack_1e0);
      goto LAB_10a5a4724;
    }
LAB_10a5a467c:
    uVar12 = 0;
    ppppplStack_160 = (long *****)((ulong)ppppplStack_160 & 0xffffffffffffff00);
  }
  else {
    if (uStack_1d0._7_1_ == '\0') goto LAB_10a5a467c;
    unaff_x27[0xb] = (long ****)ppppplStack_1d8;
    unaff_x27[10] = (long ****)ppppplStack_1e0;
    pplStack_150 = (long **)uStack_1d0;
LAB_10a5a4724:
    uVar12 = 1;
  }
  uStack_148 = CONCAT71(uStack_148._1_7_,uVar12);
  FUN_10a234a0c(&ppppplStack_180,&ppppplStack_160);
LAB_10a5a4bf8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a5a4bfc);
  (*pcVar3)();
}



/* Entry: 10a5a4c30; end: 10a5a4e53;  */

void FUN_10a5a4c30(undefined8 *param_1,long param_2,long *param_3,long param_4,long param_5)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  code *pcVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if ((char)param_3[4] != '\x01') {
    uStack_a0 = 0;
    plStack_98 = (long *)0x0;
    lStack_88 = 0;
    lStack_90 = param_4;
    lStack_80 = param_4;
    FUN_10a00e5c4(param_1,&uStack_a0);
    param_1[3] = lStack_88;
    param_1[2] = lStack_90;
    param_1[4] = lStack_80;
    if (plStack_98 == (long *)0x0) {
      return;
    }
    plVar7 = plStack_98 + 1;
    do {
      lVar8 = *plVar7;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_10a5a4dfc;
  }
  lVar8 = *(long *)(*param_3 + 8);
  if (lVar8 == 0) {
    puVar11 = (undefined8 *)(*(long *)(*param_3 + 0x10) + 0x10);
  }
  else {
    puVar11 = (undefined8 *)(lVar8 + 8);
  }
  bVar1 = *(byte *)(param_5 + 0x250);
  cVar2 = *(char *)(param_5 + 0xf8);
  plVar9 = (long *)*puVar11;
  plVar7 = plVar9;
  (**(code **)(*plVar9 + 0x28))();
  (**(code **)(*plVar9 + 0x30))();
  uVar10 = (uint)plVar7;
  if (uVar10 < 2) {
    uVar10 = 1;
  }
  uVar6 = (uint)plVar9;
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  if ((*(byte *)(param_3 + 4) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a5a4e3c);
    (*pcVar5)();
  }
  bVar1 = bVar1 ^ 1;
  lStack_68 = param_3[3];
  lStack_70 = param_3[2];
  if ((*(byte *)(param_5 + 0x48) & 1) == 0) {
    bVar3 = *(byte *)(*(long *)(*(long *)(param_2 + 0x108) + 0x910) + 0x25);
    if ((((bVar3 | bVar1) & 1) == 0) && (cVar2 == '\x02')) goto LAB_10a5a4d6c;
    if (bVar3 == 0) goto LAB_10a5a4d90;
LAB_10a5a4d84:
    uStack_a0 = 0;
    plStack_98 = (long *)0x0;
  }
  else {
    if ((bVar1 & 1) == 0 && cVar2 == '\x02') {
LAB_10a5a4d6c:
      plVar7 = (long *)*puVar11;
      (**(code **)(*plVar7 + 0x48))();
      if ((uint)plVar7 < 2) goto LAB_10a5a4d84;
    }
LAB_10a5a4d90:
    plStack_98 = (long *)puVar11[1];
    uStack_a0 = *puVar11;
    if (puVar11[1] != 0) {
      plVar7 = (long *)(puVar11[1] + 8);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  lStack_90 = CONCAT44(uVar6,uVar10);
  lStack_80 = lStack_68;
  lStack_88 = lStack_70;
  FUN_10a00e5c4(param_1,&uStack_a0);
  param_1[3] = lStack_88;
  param_1[2] = lStack_90;
  param_1[4] = lStack_80;
  if (plStack_98 == (long *)0x0) {
    return;
  }
  plVar7 = plStack_98 + 1;
  do {
    lVar8 = *plVar7;
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_10a5a4dfc:
  plVar7 = plStack_98;
  if (lVar8 == 0) {
    (**(code **)(*plStack_98 + 0x10))(plStack_98);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
  return;
}



/* Entry: 10a5a4e54; end: 10a5a4fcf;  */

void FUN_10a5a4e54(long param_1,long *param_2,int param_3)

{
  uint uVar1;
  ulong *puVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined1 uVar12;
  uint uVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  if (((param_1 == 0) || (plVar11 = *(long **)(param_1 + 0x268), plVar11 == (long *)0x0)) ||
     (___dynamic_cast(plVar11,&PTR_DAT_110bb3788,&PTR_DAT_110bb2dc8,0), plVar11 == (long *)0x0)) {
    return;
  }
  FUN_10a1de1fc();
  if (*param_2 == 0) {
    if (param_3 != 0) {
      *(undefined1 *)((long)plVar11 + 0x2fc) = 1;
    }
    puVar2 = (ulong *)(param_2 + 2);
    if (*(char *)((long)plVar11 + 0x2fc) != '\x02') {
      FUN_10a1ddf50(plVar11,*puVar2);
      lVar15 = plVar11[0x12];
      FUN_10a2421c8();
      plVar6 = *(long **)(lVar15 + 0x228);
      (**(code **)(*plVar6 + 0x68))();
      if (*(char *)((long)plVar11 + 0x2fc) == '\0') {
        uVar16 = (uint)(*(float *)(plVar11 + 0x60) * (float)(int)*puVar2);
        uVar13 = (uint)(*(float *)(plVar11 + 0x60) * (float)*(int *)((long)param_2 + 0x14));
        uVar18 = CONCAT44(uVar13,uVar16);
        bVar4 = true;
        do {
          bVar3 = bVar4;
          uVar1 = uVar16;
          if (!bVar3) {
            uVar1 = uVar13;
          }
          if (uVar1 != 1) {
            uVar17 = 0x100000001;
            uVar19 = 0x100000001;
            if (0 < (int)uVar1) {
              uVar17 = uVar18;
              uVar19 = uVar18;
            }
            break;
          }
          uVar17 = (ulong)uVar16;
          uVar19 = uVar18;
          bVar4 = false;
        } while (bVar3);
      }
      else {
        uVar17 = *puVar2;
        uVar19 = *puVar2;
      }
      uVar13 = (uint)uVar17;
      uVar16 = (uint)(uVar19 >> 0x20);
      if (*(uint *)((long)plVar11 + 700) != uVar13 || *(uint *)(plVar11 + 0x58) != uVar16) {
        lVar15 = plVar6[0x11];
        func_0x000107c2b054(&uStack_68,&UNK_10f644489);
        if ((uVar13 == 0) || (uVar1 = (int)lVar15 + 1, uVar1 <= uVar13)) {
          FUN_10a109200(&uStack_68);
        }
        else {
          if (uStack_58 < 0) {
            __ZdlPv(uStack_68);
          }
          func_0x000107c2b054(&uStack_68,&UNK_10f6444a5);
          if ((uVar19 >> 0x20 != 0) && (uVar16 < uVar1)) {
            if (uStack_58._7_1_ < '\0') {
              __ZdlPv(uStack_68);
            }
            *(ulong *)((long)plVar11 + 700) = uVar19;
            lVar15 = plVar11[0x3f];
            plVar6 = plVar11;
            (**(code **)(*plVar11 + 0xe8))(plVar11);
            plVar14 = plVar11;
            (**(code **)(*plVar11 + 0xd0))(plVar11);
            plVar7 = plVar11;
            (**(code **)(*plVar11 + 200))(plVar11);
            FUN_10a1da3a4(plVar11,uVar17,uVar19 >> 0x20,0,(int)lVar15,plVar6,plVar14,plVar7);
            plVar6 = (long *)plVar11[0x70];
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x30))
                        (plVar6,(ulong *)((long)plVar11 + 700),*(byte *)(plVar11 + 0x57) & 1);
            }
            if ((char)plVar11[0x5f] != '\x01') {
              return;
            }
            *(undefined1 *)(plVar11 + 0x5f) = 0;
            return;
          }
          FUN_10a109200(&uStack_68);
        }
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1de1dc);
        (*pcVar5)();
      }
    }
    return;
  }
  if (plVar11[0x70] != 0) {
    plVar6 = (long *)*param_2;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))();
      plVar14 = plVar11;
      (**(code **)(*plVar11 + 0xe0))();
      if ((int)plVar6 != (int)plVar14) goto LAB_10a1de384;
    }
    plVar6 = plVar11;
    (**(code **)(*plVar11 + 0xd0))();
    if (((int)plVar6 == 0) || (plVar6 = (long *)*param_2, plVar6 == (long *)0x0))
    goto LAB_10a1de430;
    (**(code **)(*plVar6 + 0x70))();
    plVar14 = plVar11;
    (**(code **)(*plVar11 + 0xd0))();
    if ((int)plVar6 == (int)plVar14) goto LAB_10a1de430;
  }
LAB_10a1de384:
  plVar6 = plVar11;
  if ((long *)*param_2 == (long *)0x0) {
    lVar15 = 0xd0;
  }
  else {
    (**(code **)(*(long *)*param_2 + 0x20))();
    plVar14 = (long *)*param_2;
    if (plVar14 != (long *)0x0) {
      plVar6 = plVar14;
    }
    lVar15 = 0xd0;
    if (plVar14 != (long *)0x0) {
      lVar15 = 0x70;
    }
  }
  (**(code **)(*plVar6 + lVar15))();
  plVar14 = (long *)0x3a8;
  __Znwm();
  FUN_10abf70a0();
  plStack_60 = plVar14;
  FUN_10a1de578(plVar11 + 0x70,&plStack_60);
  plVar14 = plStack_60;
  *(char *)(plVar11 + 0x40) = (char)plVar6;
  plStack_60 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
LAB_10a1de430:
  (**(code **)(*(long *)plVar11[0x70] + 0x48))((long *)plVar11[0x70],param_2);
  uVar12 = 1;
  if (*param_2 != 0) {
    uVar12 = 2;
  }
  *(undefined1 *)((long)plVar11 + 0x2fc) = uVar12;
  plStack_60 = (long *)0x0;
  uStack_58 = 0;
  FUN_10a1de1fc(plVar11,&plStack_60);
  plVar6 = (long *)*param_2;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x28))();
    plVar14 = (long *)*param_2;
    (**(code **)(*plVar14 + 0x30))();
    plVar7 = (long *)*param_2;
    (**(code **)(*plVar7 + 0x38))();
    plVar8 = (long *)*param_2;
    (**(code **)(*plVar8 + 0x20))();
    plVar9 = (long *)*param_2;
    (**(code **)(*plVar9 + 0x50))();
    plVar10 = (long *)*param_2;
    (**(code **)(*plVar10 + 0x70))();
    param_2 = (long *)*param_2;
    (**(code **)(*param_2 + 0x48))();
    FUN_10a1da3a4(plVar11,plVar6,plVar14,plVar7,plVar8,plVar9,plVar10,param_2);
  }
  if ((char)plVar11[0x5f] == '\x01') {
    *(undefined1 *)(plVar11 + 0x5f) = 0;
  }
  return;
}



/* Entry: 10a5a4fd0; end: 10a5a52cb;  */

void FUN_10a5a4fd0(long param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  uint *puVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined1 uStack_90;
  undefined8 uStack_80;
  long *plStack_78;
  undefined1 auStack_70 [48];
  
  FUN_10a18eadc(auStack_70,&UNK_10f665441);
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x108) + 0x850) + 0x2c) == 1) {
    puVar6 = (uint *)0x1138350e8;
    FUN_10a1d5d54();
    uVar2 = *puVar6;
    if (uRam00000001138350e0 != 0) {
      uVar2 = uRam00000001138350e0;
    }
    if ((uVar2 >> 3 & 1) != 0) {
      func_0x00010a5a4ef4(param_1);
    }
  }
  lVar7 = param_1;
  FUN_10a5a52cc(param_1);
  uStack_b0._7_1_ = '\x01';
  uStack_c0 = CONCAT62(uStack_c0._2_6_,0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar7 + 8,&uStack_c0);
  if (uStack_b0._7_1_ < '\0') {
    __ZdlPv(uStack_c0);
  }
  lVar7 = *(long *)(param_1 + 0x108);
  pcVar10 = *(char **)(lVar7 + 0xa70);
  if (*pcVar10 == '\x01') {
    *(int *)(pcVar10 + 4) = *(int *)(pcVar10 + 4) + -1;
  }
  uStack_80 = 0;
  plStack_78 = (long *)0x0;
  uStack_90 = 0;
  plStack_a8 = (long *)0x0;
  uStack_b0 = 0;
  plStack_98 = (long *)0x0;
  uStack_a0 = 0;
  plStack_b8 = (long *)0x0;
  uStack_c0 = 0;
  func_0x00010a3defdc(lVar7,&uStack_80,&uStack_c0);
  plVar5 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar1 = plStack_98 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar1 = plStack_a8 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar1 = plStack_b8 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  piVar8 = (int *)0x1138350e8;
  FUN_10a1d5d54();
  if ((*(long *)(param_1 + 0x108) != 0) && (uRam00000001138350e0 != 0 || *piVar8 != 0)) {
    lVar7 = *(long *)(param_1 + 0x108) + 0xd48;
    FUN_10a5aeb74(lVar7,&PTR_DAT_110bcfb40);
    lVar13 = *(long *)(lVar7 + 8);
    if (lVar13 != lVar7) {
      lVar11 = 0;
      do {
        lVar9 = *(long *)(lVar13 + 0x28);
        if ((lVar9 != 0) &&
           (___dynamic_cast(lVar9,&PTR_DAT_110bcfb40,&PTR_DAT_110c681a0,0x10), lVar9 != 0)) {
          lVar11 = lVar11 + (ulong)*(uint *)(lVar9 + 0x358);
          *(undefined4 *)(lVar9 + 0x358) = 0;
        }
        lVar13 = *(long *)(lVar13 + 8);
      } while (lVar13 != lVar7);
      if (lVar11 != 0) {
        uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x108) + 0x8d8);
        func_0x000107c2b054(&uStack_c0,&UNK_10f665abf);
        FUN_10a76bd40(uVar12,&uStack_c0,lVar11);
        if (uStack_b0 < 0) {
          __ZdlPv(uStack_c0);
        }
      }
    }
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x108) + 0x8c0);
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined4 *)(lVar7 + 0x38) = 0;
  *(undefined4 *)(lVar7 + 0xa0) = 0;
  FUN_10a1988cc(auStack_70);
  return;
}



/* Entry: 10a5a52cc; end: 10a5a5353;  */

undefined8 **
FUN_10a5a52cc(long param_1,ulong param_2,long param_3,undefined8 param_4,long param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 **ppuVar2;
  long *plVar3;
  undefined8 ****ppppuVar4;
  ulong uVar5;
  char cVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 **ppuVar9;
  undefined *puVar10;
  undefined8 **ppuVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 uStack_e8;
  undefined8 **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 ***apppuStack_c0 [2];
  char cStack_a9;
  undefined8 *puStack_a8;
  undefined8 auStack_a0 [2];
  undefined *puStack_30;
  undefined8 uStack_28;
  
  ppuVar9 = *(undefined8 ***)(*(long *)(param_1 + 0xf8) + 0x260);
  puStack_30 = &UNK_10f653c20;
  uStack_28 = 0x21;
  if (ppuVar9 == (undefined8 **)0x0) {
    FUN_10a0edfc4(&puStack_30);
  }
  else {
    ppuVar11 = (undefined8 **)ppuVar9[0x46];
    if (((undefined8 **)ppuVar9[0x46] != (undefined8 **)0x0 &&
         *(byte *)(*(long *)(param_1 + 0xf8) + 0x290) - 2 < 3) ||
       (FUN_10a244d68(), ppuVar11 = ppuVar9, ppuVar9 != (undefined8 **)0x0)) {
      return ppuVar11;
    }
  }
  FUN_10a5acb70(*(undefined1 *)(*(long *)(param_1 + 0xf8) + 0x290));
  puVar10 = &UNK_10f66596f;
  FUN_10a0ee06c();
  lVar12 = *(long *)(puVar10 + 0x108);
  lVar18 = *(long *)(lVar12 + 0xbe8);
  lVar19 = *(long *)(lVar12 + 0xbd8);
  uVar16 = *(undefined8 *)(lVar12 + 0xbf8);
  uStack_e8 = 0;
  ppuStack_e0 = (undefined8 **)0x0;
  uStack_d8 = *(undefined8 *)(param_3 + 0x10);
  uStack_c8 = *(undefined8 *)(param_3 + 0x20);
  uStack_d0 = *(undefined8 *)(param_3 + 0x18);
  if ((lVar18 == 0) || ((param_2 & 1) == 0)) {
    FUN_10a5a4e54(lVar19,param_3,0);
  }
  else {
    FUN_10a5a4e54(lVar18,param_3,0);
    lVar18 = lVar19;
  }
  FUN_10a5a4e54(lVar18,&uStack_e8,0);
  FUN_10a5a4e54(uVar16,param_4,1);
  lVar18 = *(long *)(puVar10 + 0x108);
  FUN_10a3f7714(lVar18 + 0xc30,*(undefined8 *)(lVar18 + 0xc38));
  *(undefined8 **)(lVar18 + 0xc30) = (undefined8 *)(lVar18 + 0xc38);
  *(undefined8 *)(lVar18 + 0xc40) = 0;
  *(undefined8 *)(lVar18 + 0xc38) = 0;
  FUN_10a9d79f4(&puStack_a8,*(undefined8 *)(*(long *)(puVar10 + 0x108) + 0xaf0));
  if (puStack_a8 != auStack_a0) {
    plVar1 = (long *)(param_5 + 8);
    puVar13 = puStack_a8;
    do {
      plVar14 = (long *)*plVar1;
      if (plVar14 != (long *)0x0) {
        plVar17 = puVar13 + 4;
        lVar18 = *plVar17;
        lVar12 = puVar13[5];
        plVar20 = plVar1;
        do {
          uVar15 = 0xff;
          if (lVar18 <= plVar14[4]) {
            uVar15 = 0;
          }
          if (plVar14[4] == lVar18) {
            uVar5 = 0xff;
            if (lVar12 <= plVar14[5]) {
              uVar5 = 0;
            }
            uVar15 = 0;
            if (plVar14[5] != lVar12) {
              uVar15 = uVar5;
            }
          }
          plVar3 = plVar14;
          if ((uVar15 & 0x80) != 0) {
            plVar3 = plVar20;
          }
          plVar14 = *(long **)((long)plVar14 + ((uVar15 & 0x80) >> 4));
          plVar20 = plVar3;
        } while (plVar14 != (long *)0x0);
        if (plVar1 != plVar3) {
          bVar8 = lVar18 < plVar3[4];
          if (lVar18 == plVar3[4]) {
            bVar8 = lVar12 != plVar3[5] && lVar12 < plVar3[5];
          }
          if (!bVar8) {
            if ((puVar13[10] == 0) || (puVar13[0xb] == puVar13[0xc])) {
              if ((bRam000000011330a9e8 & 1) != 0) {
                FUN_10a0ffca4(apppuStack_c0,plVar17);
                ppppuVar4 = (undefined8 ****)apppuStack_c0[0];
                if (-1 < cStack_a9) {
                  ppppuVar4 = apppuStack_c0;
                }
                func_0x00010ae06f08(0,1,&UNK_10f665450,&UNK_10f665489,0x378,&UNK_10f66552c,param_7,
                                    param_8,ppppuVar4);
LAB_10a5a55dc:
                if (cStack_a9 < '\0') {
                  __ZdlPv(apppuStack_c0[0]);
                }
              }
            }
            else {
              lVar12 = puVar13[9];
              lVar18 = *(long *)(lVar12 + 0x1f0);
              if ((((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x268), lVar18 == 0)) ||
                  (___dynamic_cast(lVar18,&PTR_DAT_110bb3788,&PTR_DAT_110bb2dc8,0), lVar18 == 0)) ||
                 (FUN_10a1de1fc(), plVar3[6] == 0)) {
                if ((bRam000000011330a9e8 & 1) != 0) {
                  FUN_10a0ffca4(apppuStack_c0,plVar17);
                  ppppuVar4 = (undefined8 ****)apppuStack_c0[0];
                  if (-1 < cStack_a9) {
                    ppppuVar4 = apppuStack_c0;
                  }
                  func_0x00010ae06f08(0,1,&UNK_10f665450,&UNK_10f665489,899,&UNK_10f66558c,param_7,
                                      param_8,ppppuVar4);
                  goto LAB_10a5a55dc;
                }
              }
              else {
                FUN_10a1de2e4(lVar18,plVar3 + 6);
                FUN_10a3ded64(*(undefined8 *)(puVar10 + 0x108),plVar17,lVar12 + 0x1f0);
              }
            }
          }
        }
      }
      puVar7 = (undefined8 *)puVar13[1];
      puVar21 = puVar13;
      if ((undefined8 *)puVar13[1] == (undefined8 *)0x0) {
        do {
          puVar13 = (undefined8 *)puVar21[2];
          bVar8 = (undefined8 *)*puVar13 != puVar21;
          puVar21 = puVar13;
        } while (bVar8);
      }
      else {
        do {
          puVar13 = puVar7;
          puVar7 = (undefined8 *)*puVar13;
        } while ((undefined8 *)*puVar13 != (undefined8 *)0x0);
      }
    } while (puVar13 != auStack_a0);
  }
  ppuVar9 = &puStack_a8;
  FUN_10a5cd8d0(ppuVar9,auStack_a0[0]);
  ppuVar11 = ppuStack_e0;
  if (ppuStack_e0 != (undefined8 **)0x0) {
    ppuVar2 = ppuStack_e0 + 1;
    do {
      puVar13 = *ppuVar2;
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar8) {
        *ppuVar2 = (undefined8 *)((long)puVar13 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (puVar13 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_e0)[2])(ppuStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar11);
      ppuVar9 = ppuVar11;
    }
  }
  return ppuVar9;
}



/* Entry: 10a5a5354; end: 10a5a56d3;  */

void FUN_10a5a5354(long param_1,ulong param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  undefined8 ****ppppuVar3;
  ulong uVar4;
  char cVar5;
  undefined8 *puVar6;
  bool bVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 ***apppuStack_90 [2];
  char cStack_79;
  undefined8 *puStack_78;
  undefined8 auStack_70 [2];
  
  lVar8 = *(long *)(param_1 + 0x108);
  lVar14 = *(long *)(lVar8 + 0xbe8);
  lVar15 = *(long *)(lVar8 + 0xbd8);
  uVar12 = *(undefined8 *)(lVar8 + 0xbf8);
  uStack_b8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_a8 = *(undefined8 *)(param_3 + 0x10);
  uStack_98 = *(undefined8 *)(param_3 + 0x20);
  uStack_a0 = *(undefined8 *)(param_3 + 0x18);
  if ((lVar14 == 0) || ((param_2 & 1) == 0)) {
    FUN_10a5a4e54(lVar15,param_3,0);
  }
  else {
    FUN_10a5a4e54(lVar14,param_3,0);
    lVar14 = lVar15;
  }
  FUN_10a5a4e54(lVar14,&uStack_b8,0);
  FUN_10a5a4e54(uVar12,param_4,1);
  lVar14 = *(long *)(param_1 + 0x108);
  FUN_10a3f7714(lVar14 + 0xc30,*(undefined8 *)(lVar14 + 0xc38));
  *(undefined8 **)(lVar14 + 0xc30) = (undefined8 *)(lVar14 + 0xc38);
  *(undefined8 *)(lVar14 + 0xc40) = 0;
  *(undefined8 *)(lVar14 + 0xc38) = 0;
  FUN_10a9d79f4(&puStack_78,*(undefined8 *)(*(long *)(param_1 + 0x108) + 0xaf0));
  if (puStack_78 != auStack_70) {
    plVar1 = (long *)(param_5 + 8);
    puVar9 = puStack_78;
    do {
      plVar10 = (long *)*plVar1;
      if (plVar10 != (long *)0x0) {
        plVar13 = puVar9 + 4;
        lVar14 = *plVar13;
        lVar8 = puVar9[5];
        plVar16 = plVar1;
        do {
          uVar11 = 0xff;
          if (lVar14 <= plVar10[4]) {
            uVar11 = 0;
          }
          if (plVar10[4] == lVar14) {
            uVar4 = 0xff;
            if (lVar8 <= plVar10[5]) {
              uVar4 = 0;
            }
            uVar11 = 0;
            if (plVar10[5] != lVar8) {
              uVar11 = uVar4;
            }
          }
          plVar2 = plVar10;
          if ((uVar11 & 0x80) != 0) {
            plVar2 = plVar16;
          }
          plVar10 = *(long **)((long)plVar10 + ((uVar11 & 0x80) >> 4));
          plVar16 = plVar2;
        } while (plVar10 != (long *)0x0);
        if (plVar1 != plVar2) {
          bVar7 = lVar14 < plVar2[4];
          if (lVar14 == plVar2[4]) {
            bVar7 = lVar8 != plVar2[5] && lVar8 < plVar2[5];
          }
          if (!bVar7) {
            if ((puVar9[10] == 0) || (puVar9[0xb] == puVar9[0xc])) {
              if ((bRam000000011330a9e8 & 1) != 0) {
                FUN_10a0ffca4(apppuStack_90,plVar13);
                ppppuVar3 = (undefined8 ****)apppuStack_90[0];
                if (-1 < cStack_79) {
                  ppppuVar3 = apppuStack_90;
                }
                func_0x00010ae06f08(0,1,&UNK_10f665450,&UNK_10f665489,0x378,&UNK_10f66552c,param_7,
                                    param_8,ppppuVar3);
LAB_10a5a55dc:
                if (cStack_79 < '\0') {
                  __ZdlPv(apppuStack_90[0]);
                }
              }
            }
            else {
              lVar8 = puVar9[9];
              lVar14 = *(long *)(lVar8 + 0x1f0);
              if ((((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x268), lVar14 == 0)) ||
                  (___dynamic_cast(lVar14,&PTR_DAT_110bb3788,&PTR_DAT_110bb2dc8,0), lVar14 == 0)) ||
                 (FUN_10a1de1fc(), plVar2[6] == 0)) {
                if ((bRam000000011330a9e8 & 1) != 0) {
                  FUN_10a0ffca4(apppuStack_90,plVar13);
                  ppppuVar3 = (undefined8 ****)apppuStack_90[0];
                  if (-1 < cStack_79) {
                    ppppuVar3 = apppuStack_90;
                  }
                  func_0x00010ae06f08(0,1,&UNK_10f665450,&UNK_10f665489,899,&UNK_10f66558c,param_7,
                                      param_8,ppppuVar3);
                  goto LAB_10a5a55dc;
                }
              }
              else {
                FUN_10a1de2e4(lVar14,plVar2 + 6);
                FUN_10a3ded64(*(undefined8 *)(param_1 + 0x108),plVar13,lVar8 + 0x1f0);
              }
            }
          }
        }
      }
      puVar6 = (undefined8 *)puVar9[1];
      puVar17 = puVar9;
      if ((undefined8 *)puVar9[1] == (undefined8 *)0x0) {
        do {
          puVar9 = (undefined8 *)puVar17[2];
          bVar7 = (undefined8 *)*puVar9 != puVar17;
          puVar17 = puVar9;
        } while (bVar7);
      }
      else {
        do {
          puVar9 = puVar6;
          puVar6 = (undefined8 *)*puVar9;
        } while ((undefined8 *)*puVar9 != (undefined8 *)0x0);
      }
    } while (puVar9 != auStack_70);
  }
  FUN_10a5cd8d0(&puStack_78,auStack_70[0]);
  plVar1 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    plVar10 = plStack_b0 + 1;
    do {
      lVar14 = *plVar10;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a5a56d4; end: 10a5a570f;  */

long FUN_10a5a56d4(long param_1)

{
  FUN_10a5bcdcc(param_1 + 0xa0);
  func_0x00010a5bcd0c(param_1 + 0x78);
  func_0x00010a5bcccc(param_1 + 0x60,*(undefined8 *)(param_1 + 0x68));
  return param_1;
}



/* Entry: 10a5a5710; end: 10a5a577b;  */

undefined8 * FUN_10a5a5710(undefined8 *param_1)

{
  undefined1 auStack_50 [48];
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    *(undefined1 *)(param_1 + 1) = 1;
    FUN_10a18eadc(auStack_50,&UNK_10f666c38);
    FUN_10a5dc690(*param_1);
    FUN_10a1988cc(auStack_50);
  }
  return param_1;
}



/* Entry: 10a5a577c; end: 10a5a5917;  */

void FUN_10a5a577c(undefined8 *param_1,long *param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lStack_50;
  long *plStack_48;
  
  plVar6 = param_2;
  if (param_2 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  do {
    plVar3 = plVar6;
    (**(code **)(*plVar6 + 0x80))();
    if ((int)plVar3 != 2) goto LAB_10a5a5844;
    plVar3 = plVar6 + 0x13;
    plVar6 = (long *)*plVar3;
  } while ((long *)*plVar3 != (long *)0x0);
  plVar6 = (long *)0x1;
  FUN_10a088744(param_2);
  if (plVar6 == (long *)0x0) {
LAB_10a5a5844:
    lStack_50 = 0;
    plStack_48 = (long *)0x0;
  }
  else {
    lStack_50 = *plVar6;
    plVar6 = (long *)plVar6[1];
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plStack_48 = plVar6;
    if (lStack_50 != 0) {
      if (*(char *)(param_4 + 0x158) == '\x01') {
        puVar4 = (undefined8 *)0x30;
        __Znwm();
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar5 = puVar4 + 3;
        *puVar4 = &PTR_FUN_110bf7a48;
        FUN_10a097fe0(puVar5,&lStack_50,param_3);
        puVar4[3] = &PTR_DAT_110bf7a98;
      }
      else {
        puVar4 = (undefined8 *)0x30;
        __Znwm();
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar5 = puVar4 + 3;
        *puVar4 = &PTR_DAT_110ba0c30;
        FUN_10a097fe0(puVar5,&lStack_50,param_3);
      }
      *param_1 = puVar5;
      param_1[1] = puVar4;
      goto joined_r0x00010a5a5850;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  plVar6 = plStack_48;
joined_r0x00010a5a5850:
  if (plVar6 != (long *)0x0) {
    plVar3 = plVar6 + 1;
    do {
      lVar7 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
      return;
    }
  }
  return;
}



/* Entry: 10a5a5918; end: 10a5a594f;  */

/* WARNING: Possible PIC construction at 0x00010a5a5934: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a5a5938) */

long FUN_10a5a5918(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a5cd948(*(undefined8 *)(param_1 + 0x38));
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



/* Entry: 10a5a5950; end: 10a5a5e27;  */

void FUN_10a5a5950(long *param_1,long param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 *****pppppuVar2;
  ulong uVar3;
  undefined8 ****ppppuVar4;
  long *plVar5;
  long lVar6;
  char cVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar12;
  undefined8 *****pppppuVar13;
  int iVar14;
  ulong uVar15;
  undefined8 ****ppppuVar16;
  long lVar17;
  long lVar18;
  undefined8 *****pppppuVar19;
  long *plVar20;
  long *plVar21;
  uint uVar22;
  char *pcVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 ****ppppuStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 ****appppuStack_a0 [2];
  
  FUN_10a9d79f4(auStack_a8,*(undefined8 *)(param_2 + 0xaf0));
  plVar12 = param_1 + 1;
  *plVar12 = 0;
  param_1[2] = 0;
  *param_1 = (long)plVar12;
  pcVar23 = (char *)*param_3;
  plVar20 = (long *)param_3[1];
  cVar7 = *pcVar23;
  while (cVar7 < -1) {
    uVar24 = *(undefined8 *)pcVar23;
    uVar15 = CONCAT17(-(-2 < (char)((ulong)uVar24 >> 0x38)),
                      CONCAT16(-(-2 < (char)((ulong)uVar24 >> 0x30)),
                               CONCAT15(-(-2 < (char)((ulong)uVar24 >> 0x28)),
                                        CONCAT14(-(-2 < (char)((ulong)uVar24 >> 0x20)),
                                                 CONCAT13(-(-2 < (char)((ulong)uVar24 >> 0x18)),
                                                          CONCAT12(-(-2 < (char)((ulong)uVar24 >>
                                                                                0x10)),
                                                                   CONCAT11(-(-2 < (char)((ulong)
                                                  uVar24 >> 8)),-(-2 < (char)uVar24))))))));
    uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
    uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
    uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    uVar15 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20);
    pcVar23 = pcVar23 + (uVar15 >> 3);
    plVar20 = plVar20 + (uVar15 >> 3) * 6;
    cVar7 = *pcVar23;
  }
  if (cVar7 != -1) {
    do {
      if ((undefined8 *****)appppuStack_a0[0] == (undefined8 *****)0x0) {
LAB_10a5a5ac4:
        if ((bRam000000011330a9e8 & 1) != 0) {
          FUN_10a0ffca4(&ppppuStack_d0,plVar20);
          pppppuVar13 = (undefined8 *****)ppppuStack_d0;
          if (-1 < lStack_c0) {
            pppppuVar13 = &ppppuStack_d0;
          }
          func_0x00010ae06f08(0,1,&UNK_10f665450,&UNK_10f665630,0x4af,&UNK_10f6656f6,in_x6,in_x7,
                              pppppuVar13);
LAB_10a5a5b0c:
          if (lStack_c0 < 0) {
            __ZdlPv(ppppuStack_d0);
          }
        }
      }
      else {
        ppppuVar16 = (undefined8 ****)*plVar20;
        ppppuVar4 = (undefined8 ****)plVar20[1];
        pppppuVar13 = appppuStack_a0;
        pppppuVar19 = (undefined8 *****)appppuStack_a0[0];
        do {
          uVar15 = 0xff;
          if ((long)ppppuVar16 <= (long)pppppuVar19[4]) {
            uVar15 = 0;
          }
          if (pppppuVar19[4] == ppppuVar16) {
            uVar3 = 0xff;
            if ((long)ppppuVar4 <= (long)pppppuVar19[5]) {
              uVar3 = 0;
            }
            uVar15 = 0;
            if (pppppuVar19[5] != ppppuVar4) {
              uVar15 = uVar3;
            }
          }
          pppppuVar2 = pppppuVar19;
          if ((uVar15 & 0x80) != 0) {
            pppppuVar2 = pppppuVar13;
          }
          pppppuVar19 = *(undefined8 ******)((long)pppppuVar19 + ((uVar15 & 0x80) >> 4));
          pppppuVar13 = pppppuVar2;
        } while (pppppuVar19 != (undefined8 *****)0x0);
        if (appppuStack_a0 == pppppuVar2) goto LAB_10a5a5ac4;
        bVar1 = (long)ppppuVar16 < (long)pppppuVar2[4];
        if (ppppuVar16 == pppppuVar2[4]) {
          bVar1 = ppppuVar4 != pppppuVar2[5] && (long)ppppuVar4 < (long)pppppuVar2[5];
        }
        if (bVar1) goto LAB_10a5a5ac4;
        ppppuVar16 = pppppuVar2[10];
        if ((ppppuVar16 == (undefined8 ****)0x0) || (pppppuVar2[0xb] == pppppuVar2[0xc])) {
          if ((bRam000000011330a9e8 & 1) == 0) goto LAB_10a5a5d50;
          FUN_10a0ffca4(&ppppuStack_d0,plVar20);
          pppppuVar13 = (undefined8 *****)ppppuStack_d0;
          if (-1 < lStack_c0) {
            pppppuVar13 = &ppppuStack_d0;
          }
          func_0x00010ae06f08(0,1,&UNK_10f665450,&UNK_10f665630,0x4b5,&UNK_10f665751,in_x6,in_x7,
                              pppppuVar13);
          goto LAB_10a5a5b0c;
        }
        lVar17 = *(long *)(plVar20[2] + 8);
        if (lVar17 == 0) {
          puVar11 = (undefined8 *)(*(long *)(plVar20[2] + 0x10) + 0x10);
        }
        else {
          puVar11 = (undefined8 *)(lVar17 + 8);
        }
        fVar25 = *(float *)(ppppuVar16 + 0x45);
        fVar26 = *(float *)((long)ppppuVar16 + 0x22c);
        fVar28 = *(float *)(ppppuVar16 + 0x46);
        fVar27 = *(float *)((long)ppppuVar16 + 0x234);
        plVar21 = (long *)*puVar11;
        plVar10 = plVar21;
        (**(code **)(*plVar21 + 0x28))();
        (**(code **)(*plVar21 + 0x30))();
        fVar28 = fVar28 - fVar25;
        if ((fVar28 <= 0.0) || (fVar27 = fVar27 - fVar26, fVar27 <= 0.0)) {
          lStack_b8 = plVar20[4];
          uStack_b0 = plVar20[5];
        }
        else {
          iVar14 = (int)fVar25;
          lStack_b8 = CONCAT44((int)fVar26,iVar14);
          uStack_b0 = lStack_b8 + ((ulong)(uint)(int)fVar27 << 0x20) & 0xffffffff00000000 |
                      (ulong)(uint)((int)fVar28 + iVar14);
        }
        pppppuVar13 = (undefined8 *****)*puVar11;
        plVar5 = (long *)puVar11[1];
        if (plVar5 != (long *)0x0) {
          plVar8 = plVar5 + 1;
          do {
            cVar7 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar1) {
              *plVar8 = *plVar8 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        uVar9 = (uint)plVar21;
        if (uVar9 < 2) {
          uVar9 = 1;
        }
        uVar22 = (uint)plVar10;
        if (uVar22 < 2) {
          uVar22 = 1;
        }
        lStack_c0 = CONCAT44(uVar9,uVar22);
        plVar10 = plVar12;
        plVar21 = plVar12;
        ppppuStack_d0 = pppppuVar13;
        plStack_c8 = plVar5;
        if ((long *)*plVar12 != (long *)0x0) {
          lVar17 = *plVar20;
          lVar6 = plVar20[1];
          plVar8 = (long *)*plVar12;
          do {
            while (plVar10 = plVar8, lVar18 = plVar10[4], lVar17 != lVar18) {
              if (lVar17 < lVar18) goto LAB_10a5a5c74;
              if (lVar17 <= lVar18) goto LAB_10a5a5d08;
LAB_10a5a5c90:
              plVar8 = (long *)plVar10[1];
              if ((long *)plVar10[1] == (long *)0x0) {
                plVar21 = plVar10 + 1;
                goto LAB_10a5a5c9c;
              }
            }
            lVar18 = plVar10[5];
            if (lVar18 <= lVar6) {
              if (lVar18 != lVar6 && lVar18 < lVar6) goto LAB_10a5a5c90;
              goto LAB_10a5a5d08;
            }
LAB_10a5a5c74:
            plVar8 = (long *)*plVar10;
            plVar21 = plVar10;
          } while ((long *)*plVar10 != (long *)0x0);
        }
LAB_10a5a5c9c:
        puVar11 = (undefined8 *)0x58;
        __Znwm();
        lVar17 = *plVar20;
        puVar11[5] = plVar20[1];
        puVar11[4] = lVar17;
        puVar11[6] = pppppuVar13;
        puVar11[7] = plVar5;
        ppppuStack_d0 = (undefined8 *****)0x0;
        plStack_c8 = (long *)0x0;
        puVar11[9] = lStack_b8;
        puVar11[8] = lStack_c0;
        puVar11[10] = uStack_b0;
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = plVar10;
        *plVar21 = (long)puVar11;
        if (*(long *)*param_1 != 0) {
          *param_1 = *(long *)*param_1;
          puVar11 = (undefined8 *)*plVar21;
        }
        func_0x000107c2b058(param_1[1],puVar11);
        param_1[2] = param_1[2] + 1;
LAB_10a5a5d08:
        plVar10 = plStack_c8;
        if (plStack_c8 != (long *)0x0) {
          plVar21 = plStack_c8 + 1;
          do {
            lVar17 = *plVar21;
            cVar7 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar1) {
              *plVar21 = lVar17 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
      }
LAB_10a5a5d50:
      pcVar23 = pcVar23 + 1;
      plVar20 = plVar20 + 6;
      cVar7 = *pcVar23;
      while (cVar7 < -1) {
        uVar24 = *(undefined8 *)pcVar23;
        uVar15 = CONCAT17(-(-2 < (char)((ulong)uVar24 >> 0x38)),
                          CONCAT16(-(-2 < (char)((ulong)uVar24 >> 0x30)),
                                   CONCAT15(-(-2 < (char)((ulong)uVar24 >> 0x28)),
                                            CONCAT14(-(-2 < (char)((ulong)uVar24 >> 0x20)),
                                                     CONCAT13(-(-2 < (char)((ulong)uVar24 >> 0x18)),
                                                              CONCAT12(-(-2 < (char)((ulong)uVar24
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-2 < (char)((ulong
                                                  )uVar24 >> 8)),-(-2 < (char)uVar24))))))));
        uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar15 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20);
        pcVar23 = pcVar23 + (uVar15 >> 3);
        plVar20 = plVar20 + (uVar15 >> 3) * 6;
        cVar7 = *pcVar23;
      }
    } while (cVar7 != -1);
  }
  FUN_10a5cd8d0(auStack_a8,appppuStack_a0[0]);
  return;
}



/* Entry: 10a5aa6a8; end: 10a5aa7d3;  */

long * FUN_10a5aa6a8(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  uint extraout_w8;
  uint uVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  long *plStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_210 [4];
  int iStack_20c;
  int iStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined8 uStack_1a0;
  long *plStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined8 uStack_12c;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_ac;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  ppuVar6 = &puStack_40;
  *(char *)((long)param_1 + 2) = '\0';
  cVar2 = *(char *)(param_2 + 0x290);
  *(char *)param_1 = cVar2;
  *(bool *)((long)param_1 + 1) = cVar2 == '\x05';
  if (cVar2 != '\x05') {
    ppuVar4 = &PTR___tlv_bootstrap_11340de10;
    lVar5 = param_2;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    plVar11 = (long *)*ppuVar4;
    puStack_40 = &UNK_10f666c58;
    uStack_38 = 0x32;
    if (plVar11 == (long *)0x0) {
LAB_10a5aa7cc:
      FUN_10a0edfc4();
      FUN_10a320ac0(lVar5,0);
      FUN_10a4cb5a0(&fStack_2b0);
      uStack_c0 = fStack_260;
      uStack_c8 = uStack_268;
      uStack_d0 = uStack_270;
      uStack_ac = CONCAT44(uStack_248,uStack_24c);
      uStack_108 = CONCAT44(fStack_2a4,fStack_2a8);
      uStack_110 = CONCAT44(fStack_2ac,fStack_2b0);
      uStack_f8 = uStack_298;
      uStack_100 = uStack_2a0;
      uStack_e8 = uStack_288;
      uStack_f0 = uStack_290;
      uStack_d8 = uStack_278;
      uStack_e0 = uStack_280;
      plStack_98 = plStack_238;
      uStack_a0 = uStack_240;
      if (plStack_238 != (long *)0x0) {
        plVar11 = plStack_238 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = *plVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if ((0 < *(int *)(lVar5 + 0x94)) && (0 < *(int *)(lVar5 + 0x98))) {
        FUN_10a2288e0(&uStack_110,*(undefined8 *)(lVar5 + 0x94));
      }
      plVar11 = plStack_98;
      uStack_1c8 = (undefined4)uStack_268;
      uStack_1c4 = (undefined4)((ulong)uStack_268 >> 0x20);
      uStack_1d0 = (undefined4)uStack_270;
      uStack_1cc = (undefined4)((ulong)uStack_270 >> 0x20);
      uStack_1c0 = fStack_260;
      iStack_208 = (int)fStack_2a8;
      iStack_20c = (int)fStack_2ac;
      uStack_1f8 = uStack_298;
      uStack_200 = uStack_2a0;
      uStack_1e8 = (undefined4)uStack_288;
      uStack_1e4 = (undefined4)((ulong)uStack_288 >> 0x20);
      uStack_1f0 = (undefined4)uStack_290;
      uStack_1ec = (undefined4)((ulong)uStack_290 >> 0x20);
      uStack_1d8 = (undefined4)uStack_278;
      uStack_1d4 = (undefined4)((ulong)uStack_278 >> 0x20);
      uStack_1e0 = (undefined4)uStack_280;
      uStack_1dc = (undefined4)((ulong)uStack_280 >> 0x20);
      plStack_198 = plStack_238;
      uStack_1a0 = uStack_240;
      if (plStack_238 != (long *)0x0) {
        plVar10 = plStack_238 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = *plVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_148 = (undefined4)uStack_c8;
      uStack_144 = (undefined4)((ulong)uStack_c8 >> 0x20);
      uStack_150 = (undefined4)uStack_d0;
      uStack_14c = (undefined4)((ulong)uStack_d0 >> 0x20);
      uStack_140 = uStack_c0;
      uStack_12c = uStack_ac;
      uStack_188 = uStack_108;
      uStack_190 = uStack_110;
      uStack_178 = uStack_f8;
      uStack_180 = uStack_100;
      uStack_168 = (undefined4)uStack_e8;
      uStack_164 = (undefined4)((ulong)uStack_e8 >> 0x20);
      uStack_170 = (undefined4)uStack_f0;
      uStack_16c = (undefined4)((ulong)uStack_f0 >> 0x20);
      uStack_158 = (undefined4)uStack_d8;
      uStack_154 = (undefined4)((ulong)uStack_d8 >> 0x20);
      uStack_160 = (undefined4)uStack_e0;
      uStack_15c = (undefined4)((ulong)uStack_e0 >> 0x20);
      plStack_118 = plStack_98;
      uStack_120 = uStack_a0;
      if (plStack_98 != (long *)0x0) {
        plVar10 = plStack_98 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = *plVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (plStack_98 != (long *)0x0) {
          plVar10 = plStack_98 + 1;
          do {
            lVar9 = *plVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_98 + 0x10))(plStack_98);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
      }
      if (plStack_238 != (long *)0x0) {
        plVar11 = plStack_238 + 1;
        do {
          lVar9 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_238 + 0x10))(plStack_238);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_238);
        }
      }
      plVar10 = *(long **)((long)ppuVar6 + 0x108);
      fStack_2b0 = (float)iStack_20c / (float)iStack_208;
      fStack_2ac = (float)uStack_200 * 0.017453292;
      fStack_2a8 = fStack_2b0;
      fStack_2a4 = fStack_2ac;
      func_0x00010a0ecd94(auStack_210);
      uStack_298 = CONCAT44(uStack_1e0,uStack_1e4);
      uStack_2a0 = CONCAT44(uStack_1e8,uStack_1ec);
      uStack_288 = CONCAT44(uStack_1d0,uStack_1d4);
      uStack_290 = CONCAT44(uStack_1d8,uStack_1dc);
      uStack_278 = CONCAT44(uStack_1c0,uStack_1c4);
      uStack_280 = CONCAT44(uStack_1c8,uStack_1cc);
      fStack_260 = (float)uStack_190._4_4_ / (float)(int)uStack_188;
      fStack_25c = (float)uStack_180 * 0.017453292;
      fStack_258 = fStack_260;
      fStack_254 = fStack_25c;
      func_0x00010a0ecd94(&uStack_190);
      plStack_238 = (long *)CONCAT44(uStack_150,uStack_154);
      uStack_240 = CONCAT44(uStack_158,uStack_15c);
      uStack_248 = uStack_164;
      uStack_244 = uStack_160;
      uStack_250 = uStack_16c;
      uStack_24c = uStack_168;
      uStack_228 = CONCAT44(uStack_140,uStack_144);
      uStack_230 = CONCAT44(uStack_148,uStack_14c);
      FUN_10a3df0ac(plVar10,&fStack_2b0);
      plVar11 = plStack_118;
      *(undefined4 *)(*(long *)(*(long *)((long)ppuVar6 + 0x108) + 0x8e8) + 0x50) =
           *(undefined4 *)(lVar5 + 0x9c);
      if (plStack_118 != (long *)0x0) {
        plVar1 = plStack_118 + 1;
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
          (**(code **)(*plStack_118 + 0x10))(plStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          plVar10 = plVar11;
        }
      }
      plVar11 = plStack_198;
      if (plStack_198 != (long *)0x0) {
        plVar1 = plStack_198 + 1;
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
          (**(code **)(*plStack_198 + 0x10))(plStack_198);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          plVar10 = plVar11;
        }
      }
      return plVar10;
    }
    *(char *)((long)param_1 + 2) = *(char *)((long)plVar11 + 0x139);
    *(undefined1 *)((long)plVar11 + 0x139) = 1;
    uVar7 = extraout_w8;
    if (extraout_w8 == 2) {
      puStack_40 = &UNK_10f666c8b;
      uStack_38 = 0x50;
      if (*(long *)(*plVar11 + 0x10) == 0) goto LAB_10a5aa7cc;
      FUN_10a08d3ec(plVar11 + 3,*(long *)(*plVar11 + 0x10) + 0x10);
      uVar7 = (uint)*(byte *)(param_2 + 0x290);
    }
    if (uVar7 == 0) {
      puVar8 = *ppuVar4;
      if (((puVar8 != (undefined *)0x0) && (puVar8[0xc0] == '\x01')) &&
         (*(long *)(puVar8 + 0x80) != 0)) {
        FUN_10a08dbac(puVar8 + 0x18);
      }
      if ((*(long **)(*plVar11 + 8) != (long *)0x0) && (**(long **)(*plVar11 + 8) != 0)) {
        func_0x000109297280();
      }
      lVar5 = 0;
      FUN_10a303694();
      if (lVar5 != 0) {
        func_0x00010a5bbca8();
      }
    }
    lVar5 = 0;
    FUN_10a2421c8();
    if (*(long *)(lVar5 + 0x230) != 0) {
      *(undefined1 *)(*(long *)(lVar5 + 0x230) + 0xb1c) = 0;
    }
  }
  return param_1;
}



/* Entry: 10a5aa7d4; end: 10a5aaae3;  */

void FUN_10a5aa7d4(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d0 [4];
  int iStack_1cc;
  int iStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined8 uStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 uStack_ec;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_6c;
  undefined8 uStack_60;
  long *plStack_58;
  
  FUN_10a320ac0(param_2,0);
  FUN_10a4cb5a0(&fStack_270);
  uStack_80 = fStack_220;
  uStack_88 = uStack_228;
  uStack_90 = uStack_230;
  uStack_6c = CONCAT44(uStack_208,uStack_20c);
  uStack_c8 = CONCAT44(fStack_264,fStack_268);
  uStack_d0 = CONCAT44(fStack_26c,fStack_270);
  uStack_b8 = uStack_258;
  uStack_c0 = uStack_260;
  uStack_a8 = uStack_248;
  uStack_b0 = uStack_250;
  uStack_98 = uStack_238;
  uStack_a0 = uStack_240;
  plStack_58 = plStack_1f8;
  uStack_60 = uStack_200;
  if (plStack_1f8 != (long *)0x0) {
    plVar1 = plStack_1f8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((0 < *(int *)(param_2 + 0x94)) && (0 < *(int *)(param_2 + 0x98))) {
    FUN_10a2288e0(&uStack_d0,*(undefined8 *)(param_2 + 0x94));
  }
  plVar1 = plStack_58;
  uStack_188 = (undefined4)uStack_228;
  uStack_184 = (undefined4)((ulong)uStack_228 >> 0x20);
  uStack_190 = (undefined4)uStack_230;
  uStack_18c = (undefined4)((ulong)uStack_230 >> 0x20);
  uStack_180 = fStack_220;
  iStack_1c8 = (int)fStack_268;
  iStack_1cc = (int)fStack_26c;
  uStack_1b8 = uStack_258;
  uStack_1c0 = uStack_260;
  uStack_1a8 = (undefined4)uStack_248;
  uStack_1a4 = (undefined4)((ulong)uStack_248 >> 0x20);
  uStack_1b0 = (undefined4)uStack_250;
  uStack_1ac = (undefined4)((ulong)uStack_250 >> 0x20);
  uStack_198 = (undefined4)uStack_238;
  uStack_194 = (undefined4)((ulong)uStack_238 >> 0x20);
  uStack_1a0 = (undefined4)uStack_240;
  uStack_19c = (undefined4)((ulong)uStack_240 >> 0x20);
  plStack_158 = plStack_1f8;
  uStack_160 = uStack_200;
  if (plStack_1f8 != (long *)0x0) {
    plVar2 = plStack_1f8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_108 = (undefined4)uStack_88;
  uStack_104 = (undefined4)((ulong)uStack_88 >> 0x20);
  uStack_110 = (undefined4)uStack_90;
  uStack_10c = (undefined4)((ulong)uStack_90 >> 0x20);
  uStack_100 = uStack_80;
  uStack_ec = uStack_6c;
  uStack_148 = uStack_c8;
  uStack_150 = uStack_d0;
  uStack_138 = uStack_b8;
  uStack_140 = uStack_c0;
  uStack_128 = (undefined4)uStack_a8;
  uStack_124 = (undefined4)((ulong)uStack_a8 >> 0x20);
  uStack_130 = (undefined4)uStack_b0;
  uStack_12c = (undefined4)((ulong)uStack_b0 >> 0x20);
  uStack_118 = (undefined4)uStack_98;
  uStack_114 = (undefined4)((ulong)uStack_98 >> 0x20);
  uStack_120 = (undefined4)uStack_a0;
  uStack_11c = (undefined4)((ulong)uStack_a0 >> 0x20);
  plStack_d8 = plStack_58;
  uStack_e0 = uStack_60;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
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
  }
  if (plStack_1f8 != (long *)0x0) {
    plVar1 = plStack_1f8 + 1;
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
      (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1f8);
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0x108);
  fStack_270 = (float)iStack_1cc / (float)iStack_1c8;
  fStack_26c = (float)uStack_1c0 * 0.017453292;
  fStack_268 = fStack_270;
  fStack_264 = fStack_26c;
  func_0x00010a0ecd94(auStack_1d0);
  uStack_258 = CONCAT44(uStack_1a0,uStack_1a4);
  uStack_260 = CONCAT44(uStack_1a8,uStack_1ac);
  uStack_248 = CONCAT44(uStack_190,uStack_194);
  uStack_250 = CONCAT44(uStack_198,uStack_19c);
  uStack_238 = CONCAT44(uStack_180,uStack_184);
  uStack_240 = CONCAT44(uStack_188,uStack_18c);
  fStack_220 = (float)uStack_150._4_4_ / (float)(int)uStack_148;
  fStack_21c = (float)uStack_140 * 0.017453292;
  fStack_218 = fStack_220;
  fStack_214 = fStack_21c;
  func_0x00010a0ecd94(&uStack_150);
  plStack_1f8 = (long *)CONCAT44(uStack_110,uStack_114);
  uStack_200 = CONCAT44(uStack_118,uStack_11c);
  uStack_208 = uStack_124;
  uStack_204 = uStack_120;
  uStack_210 = uStack_12c;
  uStack_20c = uStack_128;
  uStack_1e8 = CONCAT44(uStack_100,uStack_104);
  uStack_1f0 = CONCAT44(uStack_108,uStack_10c);
  FUN_10a3df0ac(uVar6,&fStack_270);
  plVar1 = plStack_d8;
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x108) + 0x8e8) + 0x50) =
       *(undefined4 *)(param_2 + 0x9c);
  if (plStack_d8 != (long *)0x0) {
    plVar2 = plStack_d8 + 1;
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
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    plVar2 = plStack_158 + 1;
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
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a5aaae4; end: 10a5aab5f;  */

long * FUN_10a5aaae4(long *param_1)

{
  long lVar1;
  undefined1 auStack_50 [48];
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    *(undefined1 *)(param_1 + 1) = 1;
    lVar1 = *param_1;
    FUN_10a1cc18c(auStack_50,&UNK_10f666cdc);
    lVar1 = *(long *)(lVar1 + 0x108);
    func_0x00010a3c8b44(lVar1 + 0x4f8);
    func_0x00010a3c8c20(lVar1 + 0x4f8);
    FUN_10a1d33b4(auStack_50);
  }
  return param_1;
}



/* Entry: 10a5aab60; end: 10a5aad1b;  */

byte * FUN_10a5aab60(byte *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  byte *pbVar4;
  long *extraout_x8;
  undefined *puVar5;
  undefined1 auStack_b0 [48];
  undefined **ppuStack_80;
  long *plStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [48];
  
  FUN_10a18eadc(auStack_60,&UNK_10f666cf3);
  if ((param_1[1] & 1) == 0) {
    lVar1 = 0;
    FUN_10a2421c8();
    lVar1 = *(long *)(lVar1 + 0x230);
    lStack_68 = 0;
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0xb1c) = 1;
      lStack_68 = lVar1;
    }
    ppuVar2 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    puStack_70 = *ppuVar2;
    ppuStack_80 = &puStack_70;
    plStack_78 = &lStack_68;
    if (puStack_70 != (undefined *)0x0) {
      if ((param_1[2] & 1) == 0) {
        puStack_70[0x139] = 0;
      }
      if ((extraout_x8 != (long *)0x0) &&
         (plVar3 = extraout_x8, (**(code **)(*extraout_x8 + 0xe0))(), plVar3 != (long *)0x0)) {
        func_0x00010a08f1bc();
        FUN_10a155404(*plVar3);
      }
    }
    pbVar4 = (byte *)0x113836510;
    FUN_10ad0621c();
    if (((*pbVar4 >> 5 & 1) == 0) || ((*param_1 & 0xfe) == 2)) {
      FUN_10a13299c(auStack_b0,&UNK_10f666d07);
      puVar5 = *ppuVar2;
      if ((puVar5 != (undefined *)0x0) &&
         ((puVar5[0xc0] == '\x01' && (*(long *)(puVar5 + 0x80) != 0)))) {
        FUN_10a08dbac(puVar5 + 0x18);
      }
      FUN_10a144868(auStack_b0);
    }
    FUN_10a5bd0f8(&ppuStack_80);
  }
  FUN_10a1988cc(auStack_60);
  return param_1;
}



/* Entry: 10a5aad1c; end: 10a5aad5f;  */

long FUN_10a5aad1c(long param_1)

{
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    func_0x00010a09db64(param_1 + 0x80);
  }
  if (*(char *)(param_1 + 0x6f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x58));
  }
  return param_1;
}



/* Entry: 10a5aad60; end: 10a5aae4b;  */

void FUN_10a5aad60(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  
  if ((*(byte *)(param_1 + 0x156) & 1) == 0) {
    if (*(long *)(*(long *)(param_1 + 0xf8) + 0x250) != 0) {
      func_0x00010a5a3574(&lStack_50);
      lStack_40 = 0;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48;
        __ZNSt3__119__shared_weak_count4lockEv();
        if (plVar4 == (long *)0x0) {
          lVar5 = 0;
        }
        else {
          lStack_40 = lStack_50;
          lVar5 = lStack_50;
        }
        if (plStack_48 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (lVar5 != 0) {
          FUN_10a5bdcf4(lVar5);
        }
        if (plVar4 != (long *)0x0) {
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
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
    }
    lVar5 = param_1;
    FUN_10a5a398c(param_1,3);
    if ((int)lVar5 != 0) {
      *(undefined1 *)(param_1 + 0x156) = 1;
    }
  }
  return;
}



/* Entry: 10a5aae4c; end: 10a5ab513;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a5aae4c(long param_1,ulong param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plStack_118;
  undefined1 uStack_10a;
  undefined1 uStack_109;
  undefined8 uStack_108;
  long *plStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  ulong auStack_d0 [3];
  undefined1 auStack_b3 [3];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (1 < *(byte *)(param_1 + 0x1a8) - 3) {
    if (param_2 == 0) {
      uVar14 = 0x2d0;
      uVar13 = 0x500;
    }
    else {
      uVar13 = param_2;
      FUN_10a320ac0(param_2,0);
      uVar14 = uVar13;
      FUN_10a0ec6f0();
      bVar6 = (uVar14 & 1) != 0;
      uVar2 = *(uint *)(uVar13 + 4);
      if (bVar6) {
        uVar2 = *(uint *)(uVar13 + 8);
      }
      uVar14 = (ulong)uVar2;
      uVar2 = *(uint *)(uVar13 + 8);
      if (bVar6) {
        uVar2 = *(uint *)(uVar13 + 4);
      }
      uVar13 = (ulong)uVar2;
    }
    lVar16 = *(long *)(param_1 + 0xf8);
    uVar3 = *(ulong *)(lVar16 + 0x210);
    lVar12 = *(long *)(lVar16 + 0x208);
    if (-1 < (char)*(byte *)(lVar16 + 0x21f)) {
      uVar3 = (ulong)*(byte *)(lVar16 + 0x21f);
      lVar12 = lVar16 + 0x208;
    }
    FUN_10ae03140(0,lVar12,uVar3);
    ppuVar10 = &PTR_PTR_113302a48;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar10,&PTR_PTR_113302a48);
    plVar11 = *(long **)(*(long *)(param_1 + 0xf8) + 0x2a0);
    if (plVar11 == (long *)0x0) {
      plStack_118 = (long *)0x0;
    }
    else {
      plVar8 = plVar11 + 1;
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        plStack_118 = plVar11;
      } while (cVar4 != '\0');
    }
    FUN_10a0095ac();
    (*(code *)PTR___tlv_bootstrap_11340dde0)();
    FUN_10a3ee340();
    uStack_109 = 0;
    if (plStack_118 != (long *)0x0) {
      plVar8 = plStack_118 + 1;
      do {
        lVar12 = *plVar8;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_118 + 0x10))(plStack_118);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_118);
      }
    }
    puStack_b0 = &UNK_10f6657d5;
    uStack_a8 = 0x1f;
    if (*(char *)(param_1 + 0x1a8) != '\x02' && *(char *)(param_1 + 0x1a8) != '\x05')
    goto LAB_10a5ab44c;
    FUN_10a5a363c(&puStack_b0,*(undefined8 *)(param_1 + 0xf8));
    FUN_10a5aa6a8(auStack_b3,*(undefined8 *)(param_1 + 0xf8));
    FUN_10ad636bc(*(undefined8 *)(*(long *)(param_1 + 0x108) + 0xd40));
    if (param_3 != 0) {
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x108) + 0x850) + 0x18) = 0;
      *(undefined1 *)(param_1 + 0x154) = 0;
    }
    *(undefined4 *)(param_1 + 0x150) = 0;
    *(undefined1 *)(param_1 + 0x1a9) = 0;
    if (param_2 != 0) {
      FUN_10a5aa7d4(param_1,param_2);
      lVar12 = *(long *)(param_1 + 0x108);
      *(undefined4 *)(*(long *)(lVar12 + 0x8e8) + 0x50) = *(undefined4 *)(param_2 + 0x9c);
      lVar12 = lVar12 + 0xd48;
      FUN_10a5aeb74(lVar12,&PTR_DAT_110bb2dc8);
      uStack_f8 = uVar14 | uVar13 << 0x20;
      uStack_e0 = 0;
      plStack_d8 = (long *)0x0;
      auStack_d0[1] = 0;
      auStack_d0[0] = uStack_f8;
      auStack_d0[2] = uStack_f8;
      if ((*(int *)(param_2 + 0x94) < 1) || (*(int *)(param_2 + 0x98) < 1)) {
        func_0x00010ae02ecc(0,uVar14);
        func_0x00010ae02ecc();
        ppuVar10 = &PTR_PTR_113302ae8;
        FUN_10ae079a0();
        func_0x00010ae02edc();
        func_0x00010ae02edc();
        FUN_10ae07cd4(ppuVar10,&PTR_PTR_113302ae8);
      }
      else {
        uStack_f8 = CONCAT44(*(int *)(param_2 + 0x98),*(int *)(param_2 + 0x94));
      }
      uStack_108 = 0;
      plStack_100 = (long *)0x0;
      uStack_f0 = 0;
      lVar16 = *(long *)(param_1 + 0x108);
      lVar17 = *(long *)(lVar12 + 8);
      uStack_e8 = uStack_f8;
      if (lVar17 != lVar12) {
        lVar16 = *(long *)(lVar16 + 0xbf8);
        do {
          lVar15 = *(long *)(lVar17 + 0x28);
          if (lVar16 == 0) {
LAB_10a5ab144:
            if (*(char *)(lVar15 + 0x2fc) == '\0') {
              FUN_10a1de1fc(lVar15,auStack_d0 + 1);
              FUN_10a1ddfe4(lVar15,auStack_d0);
            }
          }
          else {
            lVar7 = *(long *)(lVar16 + 0x268);
            if (lVar7 != 0) {
              ___dynamic_cast(lVar7,&PTR_DAT_110bb3788,&PTR_DAT_110bb2dc8,0);
            }
            if (lVar15 != lVar7) goto LAB_10a5ab144;
            FUN_10a5a4e54(lVar16,&uStack_108,1);
            plVar8 = *(long **)(lVar16 + 0x268);
            if (plVar8 == (long *)0x0) {
              plVar8 = (long *)0x0;
            }
            else {
              (**(code **)(*plVar8 + 0xb0))();
              if (*(long **)(lVar16 + 0x268) != (long *)0x0) {
                (**(code **)(**(long **)(lVar16 + 0x268) + 0xb8))();
              }
            }
            func_0x00010ae02f4c(0,plVar8);
            func_0x00010ae02f4c();
            ppuVar10 = &PTR_PTR_1133029e8;
            FUN_10ae079a0();
            func_0x00010ae02f5c();
            func_0x00010ae02f5c();
            FUN_10ae07cd4(ppuVar10,&PTR_PTR_1133029e8);
          }
          lVar17 = *(long *)(lVar17 + 8);
        } while (lVar17 != lVar12);
        lVar16 = *(long *)(param_1 + 0x108);
      }
      lVar12 = *(long *)(lVar16 + 0xbd8);
      if (lVar12 != 0) {
        plVar8 = *(long **)(lVar12 + 0x268);
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)0x0;
        }
        else {
          (**(code **)(*plVar8 + 0xb0))();
          if (*(long **)(lVar12 + 0x268) != (long *)0x0) {
            (**(code **)(**(long **)(lVar12 + 0x268) + 0xb8))();
          }
        }
        func_0x00010ae02f4c(0,plVar8);
        func_0x00010ae02f4c();
        ppuVar10 = &PTR_PTR_113302a18;
        FUN_10ae079a0();
        func_0x00010ae02f5c();
        func_0x00010ae02f5c();
        FUN_10ae07cd4(ppuVar10,&PTR_PTR_113302a18);
      }
      plVar8 = plStack_100;
      if (plStack_100 != (long *)0x0) {
        plVar1 = plStack_100 + 1;
        do {
          lVar12 = *plVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_100 + 0x10))(plStack_100);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        plVar1 = plStack_d8 + 1;
        do {
          lVar12 = *plVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
    FUN_10a3dc450(*(undefined8 *)(param_1 + 0x108));
    if ((*(byte *)(param_1 + 0x155) & 1) == 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x1f0);
      lVar12 = *(long *)(*(long *)(param_1 + 0x108) + 0x830);
      plStack_d8 = *(long **)(lVar12 + 0x20);
      uStack_e0 = *(undefined8 *)(lVar12 + 0x18);
      if (*(long *)(lVar12 + 0x20) != 0) {
        plVar8 = (long *)(*(long *)(lVar12 + 0x20) + 8);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = *plVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_10ad49974(uVar9,&uStack_e0,&uStack_e0);
      plVar8 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        plVar1 = plStack_d8 + 1;
        do {
          lVar12 = *plVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      FUN_10a5a398c(param_1,1);
      if (*(int *)(*(long *)(param_1 + 0x108) + 0x278) == 4) {
        FUN_10a5a398c(param_1,8);
      }
    }
    FUN_10ad637b4(*(undefined8 *)(*(long *)(param_1 + 0x108) + 0xd40));
    *(undefined1 *)(param_1 + 0x1a8) = 3;
    FUN_10a5aab60(auStack_b3);
    FUN_10a5a39f8(&puStack_b0);
    func_0x00010a5bce48(&uStack_10a);
    if (plVar11 != (long *)0x0) {
      plVar8 = plVar11 + 1;
      do {
        lVar12 = *plVar8;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_10a5ab44c:
  FUN_10a0edfc4(&puStack_b0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a5ab458);
  (*pcVar5)();
}



/* Entry: 10a5ab514; end: 10a5ab9b3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a5ab514(long *param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  undefined **ppuVar11;
  int *piVar12;
  uint *puVar13;
  undefined **ppuVar14;
  undefined8 *****pppppuVar15;
  undefined1 uVar16;
  long lVar17;
  long extraout_x8;
  long lVar18;
  undefined8 *****pppppuVar19;
  ulong uVar20;
  undefined8 *****pppppuVar21;
  undefined8 ******ppppppuVar22;
  undefined8 *****pppppuVar23;
  long **unaff_x22;
  long lVar24;
  uint uStack_674;
  undefined8 *******pppppppuStack_670;
  undefined8 *****pppppuStack_668;
  undefined8 uStack_660;
  undefined1 uStack_658;
  undefined8 *******pppppppuStack_650;
  long lStack_648;
  undefined1 uStack_638;
  undefined8 *******pppppppuStack_630;
  undefined8 *****pppppuStack_628;
  undefined8 uStack_620;
  undefined8 *******pppppppuStack_618;
  long lStack_610;
  char cStack_601;
  undefined8 *******pppppppuStack_600;
  undefined8 *****pppppuStack_5f8;
  long *plStack_5f0;
  undefined8 uStack_5e8;
  undefined4 uStack_5e0;
  undefined8 uStack_568;
  long *plStack_560;
  undefined8 uStack_558;
  long *plStack_550;
  undefined1 auStack_542 [2];
  long *plStack_540;
  long *plStack_538;
  undefined1 auStack_52b [3];
  long *aplStack_528 [3];
  int iStack_510;
  long alStack_1f0 [32];
  long lStack_f0;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(byte *)(param_1 + 0x35) - 3 < 2) {
    uStack_568 = *(undefined8 *)(param_1[0x1f] + 0x298);
    plStack_560 = *(long **)(param_1[0x1f] + 0x2a0);
    if (plStack_560 == (long *)0x0) {
      plStack_550 = (long *)0x0;
    }
    else {
      plVar9 = plStack_560 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        plStack_550 = plStack_560;
      } while (cVar3 != '\0');
    }
    uStack_558 = uStack_568;
    FUN_10a0095ac();
    (*(code *)PTR___tlv_bootstrap_11340dde0)();
    FUN_10a3ee340();
    plVar9 = plStack_550;
    auStack_542[1] = 0;
    if (plStack_550 != (long *)0x0) {
      plVar10 = plStack_550 + 1;
      do {
        lVar18 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar18 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_550 + 0x10))(plStack_550);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    FUN_10a5a363c(aplStack_528,param_1[0x1f]);
    FUN_10a5aa6a8(auStack_52b,param_1[0x1f]);
    uVar8 = *(undefined8 *)(param_1[0x1f] + 0x1f0);
    lVar18 = *(long *)(param_1[0x21] + 0x830);
    plStack_538 = *(long **)(lVar18 + 0x20);
    plStack_540 = *(long **)(lVar18 + 0x18);
    if (*(long *)(lVar18 + 0x20) != 0) {
      plVar9 = (long *)(*(long *)(lVar18 + 0x20) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x00010ad49ddc(uVar8,&plStack_540);
    plVar9 = plStack_538;
    if (plStack_538 != (long *)0x0) {
      plVar10 = plStack_538 + 1;
      do {
        lVar18 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar18 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_538 + 0x10))(plStack_538);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    FUN_10a3dcd3c(param_1[0x21]);
    FUN_10a5aab60(auStack_52b);
    FUN_10a5a39f8(aplStack_528);
    *(undefined1 *)(param_1 + 0x35) = 5;
    lVar18 = param_1[0x1f];
    if ((*(byte *)(lVar18 + 0x248) & 1) == 0) {
      plVar9 = *(long **)(lVar18 + 0x1c8);
      (**(code **)(*plVar9 + 0xe8))();
      plVar10 = (long *)plVar9[1];
      if ((plVar10 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_538 = plVar10, plVar10 != (long *)0x0))
      {
        plVar9 = (long *)*plVar9;
        plStack_540 = plVar9;
        if (plVar9 != (long *)0x0) {
          aplStack_528[0] = (long *)0x0;
          uStack_88 = 0;
          uStack_80 = 0;
          unaff_x22 = aplStack_528;
          uStack_70 = 0;
          uStack_78 = 0;
          uStack_60 = 0;
          uStack_68 = 0;
          uStack_58 = 0x3f800000;
          uStack_50 = 0;
          FUN_10ad67034(aplStack_528 + 1);
          if (*(long *)(param_1[0x1f] + 0x250) != 0) {
            FUN_10ad670e4(aplStack_528 + 1);
          }
          lVar17 = (long)iStack_510;
          lVar24 = 0;
          lVar18 = 0x338;
          do {
            lVar17 = *(long *)((long)unaff_x22 + lVar18) + lVar17;
            lVar24 = *(long *)((long)aplStack_528 + lVar18 + 8U) + lVar24;
            lVar18 = lVar18 + 0x10;
          } while (lVar18 != 0x428);
          if (lStack_f0 == 0 && lVar17 + lVar24 != 0) {
            lVar17 = param_1[0x1f];
            lVar18 = (long)*(char *)(lVar17 + 0x21f);
            if (lVar18 < 0) {
              lVar24 = *(long *)(lVar17 + 0x208);
              lVar18 = *(long *)(lVar17 + 0x210);
            }
            else {
              lVar24 = lVar17 + 0x208;
            }
            (**(code **)(*plVar9 + 0x10))(plVar9,lVar24,lVar18,aplStack_528);
          }
          func_0x00010a5bd7c8(&uStack_78);
        }
        plVar9 = plVar10 + 1;
        do {
          lVar18 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar18 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      lVar18 = param_1[0x1f];
    }
    plVar9 = *(long **)(lVar18 + 0x1c8);
    (**(code **)(*plVar9 + 0xe0))();
    plVar10 = (long *)plVar9[1];
    if ((plVar10 != (long *)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), aplStack_528[1] = plVar10, plVar10 != (long *)0x0)
       ) {
      aplStack_528[0] = (long *)*plVar9;
      if (aplStack_528[0] != (long *)0x0) {
        (**(code **)*aplStack_528[0])
                  (aplStack_528[0],*(undefined8 *)(param_1[0x1f] + 0x1e0),param_1[0x1f] + 0x208);
      }
      plVar9 = plVar10 + 1;
      do {
        lVar18 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar18 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    param_2 = 2;
    FUN_10a5a398c(param_1,2);
    param_1 = (long *)auStack_542;
    func_0x00010a5bce48();
    plVar9 = plStack_560;
    if (plStack_560 != (long *)0x0) {
      plVar10 = plStack_560 + 1;
      do {
        lVar18 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar18 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_560 + 0x10))(plStack_560);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = plVar9;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a5bd7c8(unaff_x22 + 0x96);
  FUN_10a5bd82c(&plStack_540);
  func_0x00010a5bce48(auStack_542);
  FUN_10a009414(&uStack_568);
  __Unwind_Resume();
  pppppppuStack_600 = (undefined8 *******)&UNK_10f6657d5;
  pppppuStack_5f8 = (undefined8 *****)0x1f;
  if ((char)param_1[0x35] != '\0') {
    FUN_10a0edfc4(&pppppppuStack_600);
    lVar18 = extraout_x8;
LAB_10a5ac170:
    pppppuStack_628 = *(undefined8 ******)(lVar18 + 0x210);
    pppppppuStack_630 = *(undefined8 ********)(lVar18 + 0x208);
    uStack_620 = *(long **)(lVar18 + 0x218);
LAB_10a5ac184:
    if (cStack_601 < '\0') {
      pppppppuStack_650 = (undefined8 *******)"null";
      if (lStack_610 != 0) {
        pppppppuStack_650 = pppppppuStack_618;
      }
    }
    else {
      pppppppuStack_650 = (undefined8 *******)"null";
      if (cStack_601 != '\0') {
        pppppppuStack_650 = &pppppppuStack_618;
      }
    }
    if ((long)uStack_620 < 0) {
      pppppppuStack_670 = (undefined8 *******)"null";
      if (pppppuStack_628 != (undefined8 *****)0x0) {
        pppppppuStack_670 = pppppppuStack_630;
      }
    }
    else {
      pppppppuStack_670 = (undefined8 *******)"null";
      if (uStack_620._7_1_ != '\0') {
        pppppppuStack_670 = &pppppppuStack_630;
      }
    }
    FUN_10a224324(&pppppppuStack_650,&pppppppuStack_670);
    if (cStack_601 < '\0') {
      if (lStack_610 != 0) {
        func_0x000107c3192c(&pppppppuStack_650,pppppppuStack_618);
        goto LAB_10a5ac54c;
      }
LAB_10a5ac28c:
      uStack_638 = 0;
      pppppppuStack_650 = (undefined8 *******)((ulong)pppppppuStack_650 & 0xffffffffffffff00);
    }
    else {
      if (cStack_601 == '\0') goto LAB_10a5ac28c;
      lStack_648 = lStack_610;
      pppppppuStack_650 = pppppppuStack_618;
LAB_10a5ac54c:
      uStack_638 = 1;
    }
    if ((long)uStack_620 < 0) {
      if (pppppuStack_628 != (undefined8 *****)0x0) {
        func_0x000107c3192c(&pppppppuStack_670,pppppppuStack_630);
        goto LAB_10a5ac594;
      }
LAB_10a5ac578:
      uStack_658 = 0;
      pppppppuStack_670 = (undefined8 *******)((ulong)pppppppuStack_670 & 0xffffffffffffff00);
    }
    else {
      if (uStack_620._7_1_ == '\0') goto LAB_10a5ac578;
      pppppuStack_668 = pppppuStack_628;
      pppppppuStack_670 = pppppppuStack_630;
      uStack_660 = uStack_620;
LAB_10a5ac594:
      uStack_658 = 1;
    }
    FUN_10a234a0c(&pppppppuStack_650,&pppppppuStack_670);
    goto LAB_10a5ac9ec;
  }
  FUN_10ad63168(*(undefined8 *)(param_1[0x21] + 0xd40));
  FUN_10a3cff8c(param_1[0x21],param_2);
  iVar7 = (int)*(undefined8 *)(param_1[0x21] + 0xd40);
  FUN_10ad63258();
  FUN_10ad055a0();
  if (iVar7 != 0) {
    ppuVar11 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar11 == (undefined *)0x0) {
      ppuVar11 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar9 = (long *)*ppuVar11;
      if ((plVar9 == (long *)0x0) || ((**(code **)(*plVar9 + 0x18))(), plVar9 == (long *)0x0))
      goto LAB_10a5aba4c;
      plVar9 = plVar9 + 7;
    }
    else {
      plVar9 = (long *)(*ppuVar11 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar9 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppuStack_670,&UNK_10f6659a0);
      plVar9 = (long *)(param_1[0x1f] + 0x208);
      if (*(char *)(param_1[0x1f] + 0x21f) < '\0') {
        plVar9 = (long *)*plVar9;
      }
      func_0x000107c2b054(&pppppppuStack_618,plVar9);
      if ((long)uStack_660 < 0) {
        pppppppuStack_600 = (undefined8 *******)"null";
        if (pppppuStack_668 != (undefined8 *****)0x0) {
          pppppppuStack_600 = pppppppuStack_670;
        }
      }
      else {
        pppppppuStack_600 = (undefined8 *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppuStack_600 = &pppppppuStack_670;
        }
      }
      if (cStack_601 < '\0') {
        pppppppuStack_650 = (undefined8 *******)"null";
        if (lStack_610 != 0) {
          pppppppuStack_650 = pppppppuStack_618;
        }
      }
      else {
        pppppppuStack_650 = (undefined8 *******)"null";
        if (cStack_601 != '\0') {
          pppppppuStack_650 = &pppppppuStack_618;
        }
      }
      FUN_10a224324(&pppppppuStack_600,&pppppppuStack_650);
      if ((long)uStack_660 < 0) {
        if (pppppuStack_668 != (undefined8 *****)0x0) {
          func_0x000107c3192c(&pppppppuStack_600,pppppppuStack_670);
          goto LAB_10a5ac920;
        }
LAB_10a5ac878:
        uVar16 = 0;
        pppppppuStack_600 = (undefined8 *******)((ulong)pppppppuStack_600 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5ac878;
        pppppuStack_5f8 = pppppuStack_668;
        pppppppuStack_600 = pppppppuStack_670;
        plStack_5f0 = uStack_660;
LAB_10a5ac920:
        uVar16 = 1;
      }
      uStack_5e8 = CONCAT71(uStack_5e8._1_7_,uVar16);
      if (cStack_601 < '\0') {
        if (lStack_610 != 0) {
          func_0x000107c3192c(&pppppppuStack_650,pppppppuStack_618);
          goto LAB_10a5ac9b0;
        }
LAB_10a5ac94c:
        uStack_638 = 0;
        pppppppuStack_650 = (undefined8 *******)((ulong)pppppppuStack_650 & 0xffffffffffffff00);
      }
      else {
        if (cStack_601 == '\0') goto LAB_10a5ac94c;
        lStack_648 = lStack_610;
        pppppppuStack_650 = pppppppuStack_618;
LAB_10a5ac9b0:
        uStack_638 = 1;
      }
      FUN_10a234a0c(&pppppppuStack_600,&pppppppuStack_650);
      goto LAB_10a5ac9ec;
    }
  }
LAB_10a5aba4c:
  FUN_10ad63308(*(undefined8 *)(param_1[0x21] + 0xd40));
  piVar12 = (int *)0x1138350e8;
  FUN_10a1d5d54();
  bVar2 = *(byte *)(param_1[0x1f] + 8);
  lVar18 = param_1[0x21];
  if (((*(char *)(lVar18 + 0xe2d) != '\0' & bVar2) == 0) &&
     (uRam00000001138350e0 != 0 || *piVar12 != 0)) {
    lVar18 = lVar18 + 0xd48;
    FUN_10a5aeb74(lVar18,&PTR_DAT_110bcfb40);
    pppppuStack_5f8 = (undefined8 *****)0x0;
    pppppppuStack_600 = (undefined8 *******)0x0;
    uStack_5e8 = 0;
    plStack_5f0 = (long *)0x0;
    uStack_5e0 = 0x3f800000;
    lVar17 = *(long *)(lVar18 + 8);
    if (lVar17 != lVar18) {
      ppuVar11 = &PTR___tlv_bootstrap_11340dfd8;
      (*(code *)PTR___tlv_bootstrap_11340dfd8)();
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      do {
        plVar10 = *(long **)(lVar17 + 0x28);
        plVar9 = plVar10;
        ___dynamic_cast(plVar10,&PTR_DAT_110bcfb40,&PTR_DAT_110c681a0,0x10);
        if ((plVar9 == (long *)0x0) || (FUN_10ac604d8(), (int)plVar9 == 0)) {
          (**(code **)(*plVar10 + 8))(plVar10,0);
          iVar7 = (int)plVar10;
          FUN_10ad055a0();
          if (iVar7 != 0) {
            if (*ppuVar11 == (undefined *)0x0) {
              plVar9 = (long *)*ppuVar14;
              if ((plVar9 == (long *)0x0) ||
                 ((**(code **)(*plVar9 + 0x18))(), plVar9 == (long *)0x0)) goto LAB_10a5abb7c;
              plVar9 = plVar9 + 7;
            }
            else {
              plVar9 = (long *)(*ppuVar11 + 8);
            }
            if (((uint)*(undefined8 *)(*plVar9 + 0x10) >> 1 & 1) != 0) {
              func_0x000107c2b054(&pppppppuStack_618,&UNK_10f665a01);
              lVar18 = param_1[0x1f];
              if (*(char *)(lVar18 + 0x21f) < '\0') {
                func_0x000107c3192c(&pppppppuStack_630,*(undefined8 *)(lVar18 + 0x208),
                                    *(undefined8 *)(lVar18 + 0x210));
              }
              else {
                pppppuStack_628 = *(undefined8 ******)(lVar18 + 0x210);
                pppppppuStack_630 = *(undefined8 ********)(lVar18 + 0x208);
                uStack_620 = *(long **)(lVar18 + 0x218);
              }
              if (cStack_601 < '\0') {
                pppppppuStack_650 = (undefined8 *******)"null";
                if (lStack_610 != 0) {
                  pppppppuStack_650 = pppppppuStack_618;
                }
              }
              else {
                pppppppuStack_650 = (undefined8 *******)"null";
                if (cStack_601 != '\0') {
                  pppppppuStack_650 = &pppppppuStack_618;
                }
              }
              if ((long)uStack_620 < 0) {
                pppppppuStack_670 = (undefined8 *******)"null";
                if (pppppuStack_628 != (undefined8 *****)0x0) {
                  pppppppuStack_670 = pppppppuStack_630;
                }
              }
              else {
                pppppppuStack_670 = (undefined8 *******)"null";
                if (uStack_620._7_1_ != '\0') {
                  pppppppuStack_670 = &pppppppuStack_630;
                }
              }
              FUN_10a224324(&pppppppuStack_650,&pppppppuStack_670);
              if (cStack_601 < '\0') {
                if (lStack_610 != 0) {
                  func_0x000107c3192c(&pppppppuStack_650,pppppppuStack_618);
                  goto LAB_10a5ac5bc;
                }
LAB_10a5ac318:
                uStack_638 = 0;
                pppppppuStack_650 =
                     (undefined8 *******)((ulong)pppppppuStack_650 & 0xffffffffffffff00);
              }
              else {
                if (cStack_601 == '\0') goto LAB_10a5ac318;
                lStack_648 = lStack_610;
                pppppppuStack_650 = pppppppuStack_618;
LAB_10a5ac5bc:
                uStack_638 = 1;
              }
              if ((long)uStack_620 < 0) {
                if (pppppuStack_628 != (undefined8 *****)0x0) {
                  func_0x000107c3192c(&pppppppuStack_670,pppppppuStack_630);
                  goto LAB_10a5ac6d8;
                }
LAB_10a5ac5e8:
                uStack_658 = 0;
                pppppppuStack_670 =
                     (undefined8 *******)((ulong)pppppppuStack_670 & 0xffffffffffffff00);
              }
              else {
                if (uStack_620._7_1_ == '\0') goto LAB_10a5ac5e8;
                pppppuStack_668 = pppppuStack_628;
                pppppppuStack_670 = pppppppuStack_630;
                uStack_660 = uStack_620;
LAB_10a5ac6d8:
                uStack_658 = 1;
              }
              FUN_10a234a0c(&pppppppuStack_650,&pppppppuStack_670);
              goto LAB_10a5ac9ec;
            }
          }
        }
        else {
          FUN_10a5ce050(&pppppppuStack_600,plVar10,plVar10);
        }
LAB_10a5abb7c:
        lVar17 = *(long *)(lVar17 + 8);
      } while (lVar17 != lVar18);
    }
    if ((*(byte *)(param_1[0x21] + 0xe2a) & 1) == 0) {
      puVar13 = (uint *)0x1138350e8;
      FUN_10a1d5d54();
      plVar9 = plStack_5f0;
      uVar1 = *puVar13;
      if (uRam00000001138350e0 != 0) {
        uVar1 = uRam00000001138350e0;
      }
      if (((uVar1 >> 2 & 1) != 0) && (plStack_5f0 != (long *)0x0)) {
        ppuVar11 = &PTR___tlv_bootstrap_11340dfd8;
        (*(code *)PTR___tlv_bootstrap_11340dfd8)();
        ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
        (*(code *)PTR___tlv_bootstrap_11340dd98)();
        do {
          lVar18 = 0;
          if (plVar9[2] != 0) {
            lVar18 = plVar9[2] + -0x10;
          }
          FUN_10ac607ec(lVar18,0);
          iVar7 = (int)lVar18;
          FUN_10ad055a0();
          if (iVar7 != 0) {
            if (*ppuVar11 == (undefined *)0x0) {
              plVar10 = (long *)*ppuVar14;
              if ((plVar10 == (long *)0x0) ||
                 ((**(code **)(*plVar10 + 0x18))(), plVar10 == (long *)0x0)) goto LAB_10a5abc60;
              plVar10 = plVar10 + 7;
            }
            else {
              plVar10 = (long *)(*ppuVar11 + 8);
            }
            if (((uint)*(undefined8 *)(*plVar10 + 0x10) >> 1 & 1) != 0) {
              func_0x000107c2b054(&pppppppuStack_618,&UNK_10f665a26);
              lVar18 = param_1[0x1f];
              if (*(char *)(lVar18 + 0x21f) < '\0') {
                func_0x000107c3192c(&pppppppuStack_630,*(undefined8 *)(lVar18 + 0x208),
                                    *(undefined8 *)(lVar18 + 0x210));
              }
              else {
                pppppuStack_628 = *(undefined8 ******)(lVar18 + 0x210);
                pppppppuStack_630 = *(undefined8 ********)(lVar18 + 0x208);
                uStack_620 = *(long **)(lVar18 + 0x218);
              }
              if (cStack_601 < '\0') {
                pppppppuStack_650 = (undefined8 *******)"null";
                if (lStack_610 != 0) {
                  pppppppuStack_650 = pppppppuStack_618;
                }
              }
              else {
                pppppppuStack_650 = (undefined8 *******)"null";
                if (cStack_601 != '\0') {
                  pppppppuStack_650 = &pppppppuStack_618;
                }
              }
              if ((long)uStack_620 < 0) {
                pppppppuStack_670 = (undefined8 *******)"null";
                if (pppppuStack_628 != (undefined8 *****)0x0) {
                  pppppppuStack_670 = pppppppuStack_630;
                }
              }
              else {
                pppppppuStack_670 = (undefined8 *******)"null";
                if (uStack_620._7_1_ != '\0') {
                  pppppppuStack_670 = &pppppppuStack_630;
                }
              }
              FUN_10a224324(&pppppppuStack_650,&pppppppuStack_670);
              if (cStack_601 < '\0') {
                if (lStack_610 != 0) {
                  func_0x000107c3192c(&pppppppuStack_650,pppppppuStack_618);
                  goto LAB_10a5ac728;
                }
LAB_10a5ac530:
                uStack_638 = 0;
                pppppppuStack_650 =
                     (undefined8 *******)((ulong)pppppppuStack_650 & 0xffffffffffffff00);
              }
              else {
                if (cStack_601 == '\0') goto LAB_10a5ac530;
                lStack_648 = lStack_610;
                pppppppuStack_650 = pppppppuStack_618;
LAB_10a5ac728:
                uStack_638 = 1;
              }
              if ((long)uStack_620 < 0) {
                if (pppppuStack_628 != (undefined8 *****)0x0) {
                  func_0x000107c3192c(&pppppppuStack_670,pppppppuStack_630);
                  goto LAB_10a5ac770;
                }
LAB_10a5ac754:
                uStack_658 = 0;
                pppppppuStack_670 =
                     (undefined8 *******)((ulong)pppppppuStack_670 & 0xffffffffffffff00);
              }
              else {
                if (uStack_620._7_1_ == '\0') goto LAB_10a5ac754;
                pppppuStack_668 = pppppuStack_628;
                pppppppuStack_670 = pppppppuStack_630;
                uStack_660 = uStack_620;
LAB_10a5ac770:
                uStack_658 = 1;
              }
              FUN_10a234a0c(&pppppppuStack_650,&pppppppuStack_670);
              goto LAB_10a5ac9ec;
            }
          }
LAB_10a5abc60:
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  else {
    if ((bVar2 & 1) == 0) {
      uStack_674 = 0;
    }
    else if ((*(byte *)(lVar18 + 0xe2a) & 1) == 0) {
      puVar13 = (uint *)0x1138350e8;
      FUN_10a1d5d54();
      uVar1 = *puVar13;
      if (uRam00000001138350e0 != 0) {
        uVar1 = uRam00000001138350e0;
      }
      uStack_674 = uVar1 >> 6 & 1;
      lVar18 = param_1[0x21];
    }
    else {
      uStack_674 = 1;
    }
    pppppuStack_5f8 = (undefined8 *****)0x0;
    pppppppuStack_600 = (undefined8 *******)0x0;
    uStack_5e8 = 0;
    plStack_5f0 = (long *)0x0;
    uStack_5e0 = 0x3f800000;
    lVar18 = lVar18 + 0xd48;
    FUN_10a5aeb74(lVar18,&PTR_DAT_110bcfb40);
    lVar17 = *(long *)(lVar18 + 8);
    if (lVar17 != lVar18) {
      ppuVar11 = &PTR___tlv_bootstrap_11340dfd8;
      (*(code *)PTR___tlv_bootstrap_11340dfd8)();
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      do {
        plVar9 = *(long **)(lVar17 + 0x28);
        if ((((bVar2 & 1) == 0) || (plVar9 == (long *)0x0)) ||
           (plVar10 = plVar9, ___dynamic_cast(plVar9,&PTR_DAT_110bcfb40,&PTR_DAT_110c681a0,0x10),
           plVar10 == (long *)0x0)) {
          (**(code **)(*plVar9 + 8))(plVar9,0);
          iVar7 = (int)plVar9;
          FUN_10ad055a0();
          if (iVar7 != 0) {
            if (*ppuVar11 == (undefined *)0x0) {
              plVar9 = (long *)*ppuVar14;
              if ((plVar9 == (long *)0x0) ||
                 ((**(code **)(*plVar9 + 0x18))(), plVar9 == (long *)0x0)) goto LAB_10a5abe1c;
              plVar9 = plVar9 + 7;
            }
            else {
              plVar9 = (long *)(*ppuVar11 + 8);
            }
            if (((uint)*(undefined8 *)(*plVar9 + 0x10) >> 1 & 1) != 0) {
              func_0x000107c2b054(&pppppppuStack_618,&UNK_10f665a72);
              lVar18 = param_1[0x1f];
              if (*(char *)(lVar18 + 0x21f) < '\0') {
                func_0x000107c3192c(&pppppppuStack_630,*(undefined8 *)(lVar18 + 0x208),
                                    *(undefined8 *)(lVar18 + 0x210));
              }
              else {
                pppppuStack_628 = *(undefined8 ******)(lVar18 + 0x210);
                pppppppuStack_630 = *(undefined8 ********)(lVar18 + 0x208);
                uStack_620 = *(long **)(lVar18 + 0x218);
              }
              if (cStack_601 < '\0') {
                pppppppuStack_650 = (undefined8 *******)"null";
                if (lStack_610 != 0) {
                  pppppppuStack_650 = pppppppuStack_618;
                }
              }
              else {
                pppppppuStack_650 = (undefined8 *******)"null";
                if (cStack_601 != '\0') {
                  pppppppuStack_650 = &pppppppuStack_618;
                }
              }
              if ((long)uStack_620 < 0) {
                pppppppuStack_670 = (undefined8 *******)"null";
                if (pppppuStack_628 != (undefined8 *****)0x0) {
                  pppppppuStack_670 = pppppppuStack_630;
                }
              }
              else {
                pppppppuStack_670 = (undefined8 *******)"null";
                if (uStack_620._7_1_ != '\0') {
                  pppppppuStack_670 = &pppppppuStack_630;
                }
              }
              FUN_10a224324(&pppppppuStack_650,&pppppppuStack_670);
              if (cStack_601 < '\0') {
                if (lStack_610 != 0) {
                  func_0x000107c3192c(&pppppppuStack_650,pppppppuStack_618);
                  goto LAB_10a5ac604;
                }
LAB_10a5ac3a4:
                uStack_638 = 0;
                pppppppuStack_650 =
                     (undefined8 *******)((ulong)pppppppuStack_650 & 0xffffffffffffff00);
              }
              else {
                if (cStack_601 == '\0') goto LAB_10a5ac3a4;
                lStack_648 = lStack_610;
                pppppppuStack_650 = pppppppuStack_618;
LAB_10a5ac604:
                uStack_638 = 1;
              }
              if ((long)uStack_620 < 0) {
                if (pppppuStack_628 != (undefined8 *****)0x0) {
                  func_0x000107c3192c(&pppppppuStack_670,pppppppuStack_630);
                  goto LAB_10a5ac700;
                }
LAB_10a5ac630:
                uStack_658 = 0;
                pppppppuStack_670 =
                     (undefined8 *******)((ulong)pppppppuStack_670 & 0xffffffffffffff00);
              }
              else {
                if (uStack_620._7_1_ == '\0') goto LAB_10a5ac630;
                pppppuStack_668 = pppppuStack_628;
                pppppppuStack_670 = pppppppuStack_630;
                uStack_660 = uStack_620;
LAB_10a5ac700:
                uStack_658 = 1;
              }
              FUN_10a234a0c(&pppppppuStack_650,&pppppppuStack_670);
              goto LAB_10a5ac9ec;
            }
          }
        }
        else {
          if (uStack_674 == 0) {
            FUN_10ac607ec(plVar10,0);
          }
          else {
            FUN_10ac607ec(plVar10,1);
            plVar10 = (long *)plVar10[0x60];
            if (plVar10 != (long *)0x0) {
              FUN_10a254398();
            }
          }
          iVar7 = (int)plVar10;
          FUN_10ad055a0();
          if (iVar7 != 0) {
            if (*ppuVar11 == (undefined *)0x0) {
              plVar10 = (long *)*ppuVar14;
              if ((plVar10 == (long *)0x0) ||
                 ((**(code **)(*plVar10 + 0x18))(), plVar10 == (long *)0x0)) goto LAB_10a5abe0c;
              plVar10 = plVar10 + 7;
            }
            else {
              plVar10 = (long *)(*ppuVar11 + 8);
            }
            if (((uint)*(undefined8 *)(*plVar10 + 0x10) >> 1 & 1) != 0) {
              func_0x000107c2b054(&pppppppuStack_618,&UNK_10f665a50);
              lVar18 = param_1[0x1f];
              if (*(char *)(lVar18 + 0x21f) < '\0') {
                func_0x000107c3192c(&pppppppuStack_630,*(undefined8 *)(lVar18 + 0x208),
                                    *(undefined8 *)(lVar18 + 0x210));
              }
              else {
                pppppuStack_628 = *(undefined8 ******)(lVar18 + 0x210);
                pppppppuStack_630 = *(undefined8 ********)(lVar18 + 0x208);
                uStack_620 = *(long **)(lVar18 + 0x218);
              }
              if (cStack_601 < '\0') {
                pppppppuStack_650 = (undefined8 *******)"null";
                if (lStack_610 != 0) {
                  pppppppuStack_650 = pppppppuStack_618;
                }
              }
              else {
                pppppppuStack_650 = (undefined8 *******)"null";
                if (cStack_601 != '\0') {
                  pppppppuStack_650 = &pppppppuStack_618;
                }
              }
              if ((long)uStack_620 < 0) {
                pppppppuStack_670 = (undefined8 *******)"null";
                if (pppppuStack_628 != (undefined8 *****)0x0) {
                  pppppppuStack_670 = pppppppuStack_630;
                }
              }
              else {
                pppppppuStack_670 = (undefined8 *******)"null";
                if (uStack_620._7_1_ != '\0') {
                  pppppppuStack_670 = &pppppppuStack_630;
                }
              }
              FUN_10a224324(&pppppppuStack_650,&pppppppuStack_670);
              if (cStack_601 < '\0') {
                if (lStack_610 != 0) {
                  func_0x000107c3192c(&pppppppuStack_650,pppppppuStack_618);
                  goto LAB_10a5ac798;
                }
LAB_10a5ac6bc:
                uStack_638 = 0;
                pppppppuStack_650 =
                     (undefined8 *******)((ulong)pppppppuStack_650 & 0xffffffffffffff00);
              }
              else {
                if (cStack_601 == '\0') goto LAB_10a5ac6bc;
                lStack_648 = lStack_610;
                pppppppuStack_650 = pppppppuStack_618;
LAB_10a5ac798:
                uStack_638 = 1;
              }
              if ((long)uStack_620 < 0) {
                if (pppppuStack_628 != (undefined8 *****)0x0) {
                  func_0x000107c3192c(&pppppppuStack_670,pppppppuStack_630);
                  goto LAB_10a5ac7e0;
                }
LAB_10a5ac7c4:
                uStack_658 = 0;
                pppppppuStack_670 =
                     (undefined8 *******)((ulong)pppppppuStack_670 & 0xffffffffffffff00);
              }
              else {
                if (uStack_620._7_1_ == '\0') goto LAB_10a5ac7c4;
                pppppuStack_668 = pppppuStack_628;
                pppppppuStack_670 = pppppppuStack_630;
                uStack_660 = uStack_620;
LAB_10a5ac7e0:
                uStack_658 = 1;
              }
              FUN_10a234a0c(&pppppppuStack_650,&pppppppuStack_670);
              goto LAB_10a5ac9ec;
            }
          }
LAB_10a5abe0c:
          FUN_10a5ce050(&pppppppuStack_600,plVar9,plVar9);
        }
LAB_10a5abe1c:
        lVar17 = *(long *)(lVar17 + 8);
      } while (lVar17 != lVar18);
      lVar17 = *(long *)(lVar18 + 8);
    }
    if (((bVar2 & 1) != 0) && (lVar17 != lVar18)) {
      ppuVar11 = &PTR___tlv_bootstrap_11340dfd8;
      (*(code *)PTR___tlv_bootstrap_11340dfd8)();
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      do {
        pppppuVar15 = *(undefined8 ******)(lVar17 + 0x28);
        if (pppppuStack_5f8 != (undefined8 *****)0x0) {
          uVar20 = ((ulong)(uint)((int)pppppuVar15 << 3) + 8 ^ (ulong)pppppuVar15 >> 0x20) *
                   -0x622015f714c7d297;
          uVar20 = ((ulong)pppppuVar15 >> 0x20 ^ uVar20 >> 0x2f ^ uVar20) * -0x622015f714c7d297;
          pppppuVar19 = (undefined8 *****)((uVar20 ^ uVar20 >> 0x2f) * -0x622015f714c7d297);
          uVar20 = (long)pppppuStack_5f8 - 1;
          if (((ulong)pppppuStack_5f8 & uVar20) == 0) {
            pppppuVar21 = (undefined8 *****)((ulong)pppppuVar19 & uVar20);
          }
          else {
            pppppuVar21 = pppppuVar19;
            if (pppppuStack_5f8 <= pppppuVar19) {
              uVar5 = 0;
              if (pppppuStack_5f8 != (undefined8 *****)0x0) {
                uVar5 = (ulong)pppppuVar19 / (ulong)pppppuStack_5f8;
              }
              pppppuVar21 = (undefined8 *****)((long)pppppuVar19 - uVar5 * (long)pppppuStack_5f8);
            }
          }
          ppppppuVar22 = pppppppuStack_600[(long)pppppuVar21];
          if (ppppppuVar22 != (undefined8 ******)0x0) {
            do {
              while( true ) {
                ppppppuVar22 = (undefined8 ******)*ppppppuVar22;
                if (ppppppuVar22 == (undefined8 ******)0x0) goto LAB_10a5abf68;
                pppppuVar23 = ppppppuVar22[1];
                if ((long)pppppuVar19 - (long)pppppuVar23 != 0) break;
                if (ppppppuVar22[2] == pppppuVar15) {
                  if ((uStack_674 == 0) &&
                     (pppppuVar15 = (undefined8 *****)pppppuVar15[0x5e],
                     pppppuVar15 != (undefined8 *****)0x0)) {
                    FUN_10a254398();
                  }
                  goto LAB_10a5abf78;
                }
              }
              if (((ulong)pppppuStack_5f8 & uVar20) == 0) {
                pppppuVar23 = (undefined8 *****)((ulong)pppppuVar23 & uVar20);
              }
              else if (pppppuStack_5f8 <= pppppuVar23) {
                uVar5 = 0;
                if (pppppuStack_5f8 != (undefined8 *****)0x0) {
                  uVar5 = (ulong)pppppuVar23 / (ulong)pppppuStack_5f8;
                }
                pppppuVar23 = (undefined8 *****)((long)pppppuVar23 - uVar5 * (long)pppppuStack_5f8);
              }
            } while (pppppuVar23 == pppppuVar21);
          }
        }
LAB_10a5abf68:
        (*(code *)(*pppppuVar15)[1])(pppppuVar15,1);
LAB_10a5abf78:
        iVar7 = (int)pppppuVar15;
        FUN_10ad055a0();
        if (iVar7 != 0) {
          if (*ppuVar11 == (undefined *)0x0) {
            plVar9 = (long *)*ppuVar14;
            if ((plVar9 == (long *)0x0) || ((**(code **)(*plVar9 + 0x18))(), plVar9 == (long *)0x0))
            goto LAB_10a5abf9c;
            plVar9 = plVar9 + 7;
          }
          else {
            plVar9 = (long *)(*ppuVar11 + 8);
          }
          if (((uint)*(undefined8 *)(*plVar9 + 0x10) >> 1 & 1) != 0) {
            func_0x000107c2b054(&pppppppuStack_618,&UNK_10f665a9c);
            lVar18 = param_1[0x1f];
            if (-1 < *(char *)(lVar18 + 0x21f)) goto LAB_10a5ac170;
            func_0x000107c3192c(&pppppppuStack_630,*(undefined8 *)(lVar18 + 0x208),
                                *(undefined8 *)(lVar18 + 0x210));
            goto LAB_10a5ac184;
          }
        }
LAB_10a5abf9c:
        lVar17 = *(long *)(lVar17 + 8);
      } while (lVar17 != lVar18);
    }
  }
  iVar7 = (int)&pppppppuStack_600;
  FUN_10a5ce008();
  FUN_10ad055a0();
  if (iVar7 == 0) {
LAB_10a5ac020:
    *(undefined1 *)(param_1 + 0x35) = 1;
    return;
  }
  ppuVar11 = &PTR___tlv_bootstrap_11340dfd8;
  (*(code *)PTR___tlv_bootstrap_11340dfd8)();
  if (*ppuVar11 == (undefined *)0x0) {
    ppuVar11 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    plVar9 = (long *)*ppuVar11;
    if ((plVar9 == (long *)0x0) || ((**(code **)(*plVar9 + 0x18))(), plVar9 == (long *)0x0))
    goto LAB_10a5ac020;
    plVar9 = plVar9 + 7;
  }
  else {
    plVar9 = (long *)(*ppuVar11 + 8);
  }
  if (((uint)*(undefined8 *)(*plVar9 + 0x10) >> 1 & 1) == 0) goto LAB_10a5ac020;
  func_0x000107c2b054(&pppppppuStack_670,&UNK_10f6659c2);
  plVar9 = (long *)(param_1[0x1f] + 0x208);
  if (*(char *)(param_1[0x1f] + 0x21f) < '\0') {
    plVar9 = (long *)*plVar9;
  }
  func_0x000107c2b054(&pppppppuStack_618,plVar9);
  if ((long)uStack_660 < 0) {
    pppppppuStack_600 = (undefined8 *******)"null";
    if (pppppuStack_668 != (undefined8 *****)0x0) {
      pppppppuStack_600 = pppppppuStack_670;
    }
  }
  else {
    pppppppuStack_600 = (undefined8 *******)"null";
    if (uStack_660._7_1_ != '\0') {
      pppppppuStack_600 = &pppppppuStack_670;
    }
  }
  if (cStack_601 < '\0') {
    pppppppuStack_650 = (undefined8 *******)"null";
    if (lStack_610 != 0) {
      pppppppuStack_650 = pppppppuStack_618;
    }
  }
  else {
    pppppppuStack_650 = (undefined8 *******)"null";
    if (cStack_601 != '\0') {
      pppppppuStack_650 = &pppppppuStack_618;
    }
  }
  FUN_10a224324(&pppppppuStack_600,&pppppppuStack_650);
  if ((long)uStack_660 < 0) {
    if (pppppuStack_668 != (undefined8 *****)0x0) {
      func_0x000107c3192c(&pppppppuStack_600,pppppppuStack_670);
      goto LAB_10a5ac968;
    }
LAB_10a5ac904:
    uVar16 = 0;
    pppppppuStack_600 = (undefined8 *******)((ulong)pppppppuStack_600 & 0xffffffffffffff00);
  }
  else {
    if (uStack_660._7_1_ == '\0') goto LAB_10a5ac904;
    pppppuStack_5f8 = pppppuStack_668;
    pppppppuStack_600 = pppppppuStack_670;
    plStack_5f0 = uStack_660;
LAB_10a5ac968:
    uVar16 = 1;
  }
  uStack_5e8 = CONCAT71(uStack_5e8._1_7_,uVar16);
  if (cStack_601 < '\0') {
    if (lStack_610 != 0) {
      func_0x000107c3192c(&pppppppuStack_650,pppppppuStack_618);
      goto LAB_10a5ac9d8;
    }
LAB_10a5ac994:
    uStack_638 = 0;
    pppppppuStack_650 = (undefined8 *******)((ulong)pppppppuStack_650 & 0xffffffffffffff00);
  }
  else {
    if (cStack_601 == '\0') goto LAB_10a5ac994;
    lStack_648 = lStack_610;
    pppppppuStack_650 = pppppppuStack_618;
LAB_10a5ac9d8:
    uStack_638 = 1;
  }
  FUN_10a234a0c(&pppppppuStack_600,&pppppppuStack_650);
LAB_10a5ac9ec:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a5ac9f0);
  (*pcVar6)();
}



/* Entry: 10a5ab9b4; end: 10a5acb6f;  */

void FUN_10a5ab9b4(long param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  code *pcVar4;
  int iVar5;
  undefined **ppuVar6;
  int *piVar7;
  uint *puVar8;
  undefined **ppuVar9;
  undefined8 ****ppppuVar10;
  undefined1 uVar11;
  long lVar12;
  long extraout_x8;
  undefined8 ****ppppuVar13;
  ulong uVar14;
  undefined8 ****ppppuVar15;
  undefined8 *****pppppuVar16;
  undefined8 ****ppppuVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  uint uStack_104;
  undefined8 *****pppppuStack_100;
  undefined8 ***pppuStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined8 *****pppppuStack_e0;
  long lStack_d8;
  undefined1 uStack_c8;
  undefined8 *****pppppuStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 uStack_b0;
  undefined8 *****pppppuStack_a8;
  long lStack_a0;
  char cStack_91;
  undefined8 *****pppppuStack_90;
  undefined8 ***pppuStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  pppppuStack_90 = (undefined8 *****)&UNK_10f6657d5;
  pppuStack_88 = (undefined8 ****)0x1f;
  if (*(char *)(param_1 + 0x1a8) != '\0') {
    FUN_10a0edfc4(&pppppuStack_90);
    lVar12 = extraout_x8;
LAB_10a5ac170:
    pppuStack_b8 = *(undefined8 ****)(lVar12 + 0x210);
    pppppuStack_c0 = *(undefined8 ******)(lVar12 + 0x208);
    uStack_b0 = *(long **)(lVar12 + 0x218);
LAB_10a5ac184:
    if (cStack_91 < '\0') {
      pppppuStack_e0 = (undefined8 *****)"null";
      if (lStack_a0 != 0) {
        pppppuStack_e0 = pppppuStack_a8;
      }
    }
    else {
      pppppuStack_e0 = (undefined8 *****)"null";
      if (cStack_91 != '\0') {
        pppppuStack_e0 = &pppppuStack_a8;
      }
    }
    if ((long)uStack_b0 < 0) {
      pppppuStack_100 = (undefined8 *****)"null";
      if ((undefined8 ****)pppuStack_b8 != (undefined8 ****)0x0) {
        pppppuStack_100 = pppppuStack_c0;
      }
    }
    else {
      pppppuStack_100 = (undefined8 *****)"null";
      if (uStack_b0._7_1_ != '\0') {
        pppppuStack_100 = &pppppuStack_c0;
      }
    }
    FUN_10a224324(&pppppuStack_e0,&pppppuStack_100);
    if (cStack_91 < '\0') {
      if (lStack_a0 == 0) goto LAB_10a5ac28c;
      func_0x000107c3192c(&pppppuStack_e0,pppppuStack_a8);
LAB_10a5ac54c:
      uStack_c8 = 1;
    }
    else {
      if (cStack_91 != '\0') {
        lStack_d8 = lStack_a0;
        pppppuStack_e0 = pppppuStack_a8;
        goto LAB_10a5ac54c;
      }
LAB_10a5ac28c:
      uStack_c8 = 0;
      pppppuStack_e0 = (undefined8 *****)((ulong)pppppuStack_e0 & 0xffffffffffffff00);
    }
    if ((long)uStack_b0 < 0) {
      if ((undefined8 ****)pppuStack_b8 == (undefined8 ****)0x0) goto LAB_10a5ac578;
      func_0x000107c3192c(&pppppuStack_100,pppppuStack_c0);
LAB_10a5ac594:
      uStack_e8 = 1;
    }
    else {
      if (uStack_b0._7_1_ != '\0') {
        pppuStack_f8 = pppuStack_b8;
        pppppuStack_100 = pppppuStack_c0;
        uStack_f0 = uStack_b0;
        goto LAB_10a5ac594;
      }
LAB_10a5ac578:
      uStack_e8 = 0;
      pppppuStack_100 = (undefined8 *****)((ulong)pppppuStack_100 & 0xffffffffffffff00);
    }
    FUN_10a234a0c(&pppppuStack_e0,&pppppuStack_100);
    goto LAB_10a5ac9ec;
  }
  FUN_10ad63168(*(undefined8 *)(*(long *)(param_1 + 0x108) + 0xd40));
  FUN_10a3cff8c(*(undefined8 *)(param_1 + 0x108),param_2);
  iVar5 = (int)*(undefined8 *)(*(long *)(param_1 + 0x108) + 0xd40);
  FUN_10ad63258();
  FUN_10ad055a0();
  if (iVar5 != 0) {
    ppuVar6 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar6 == (undefined *)0x0) {
      ppuVar6 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar18 = (long *)*ppuVar6;
      if ((plVar18 == (long *)0x0) || ((**(code **)(*plVar18 + 0x18))(), plVar18 == (long *)0x0))
      goto LAB_10a5aba4c;
      plVar18 = plVar18 + 7;
    }
    else {
      plVar18 = (long *)(*ppuVar6 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar18 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppuStack_100,&UNK_10f6659a0);
      plVar18 = (long *)(*(long *)(param_1 + 0xf8) + 0x208);
      if (*(char *)(*(long *)(param_1 + 0xf8) + 0x21f) < '\0') {
        plVar18 = (long *)*plVar18;
      }
      func_0x000107c2b054(&pppppuStack_a8,plVar18);
      if ((long)uStack_f0 < 0) {
        pppppuStack_90 = (undefined8 *****)"null";
        if ((undefined8 ****)pppuStack_f8 != (undefined8 ****)0x0) {
          pppppuStack_90 = pppppuStack_100;
        }
      }
      else {
        pppppuStack_90 = (undefined8 *****)"null";
        if (uStack_f0._7_1_ != '\0') {
          pppppuStack_90 = &pppppuStack_100;
        }
      }
      if (cStack_91 < '\0') {
        pppppuStack_e0 = (undefined8 *****)"null";
        if (lStack_a0 != 0) {
          pppppuStack_e0 = pppppuStack_a8;
        }
      }
      else {
        pppppuStack_e0 = (undefined8 *****)"null";
        if (cStack_91 != '\0') {
          pppppuStack_e0 = &pppppuStack_a8;
        }
      }
      FUN_10a224324(&pppppuStack_90,&pppppuStack_e0);
      if ((long)uStack_f0 < 0) {
        if ((undefined8 ****)pppuStack_f8 == (undefined8 ****)0x0) goto LAB_10a5ac878;
        func_0x000107c3192c(&pppppuStack_90,pppppuStack_100);
LAB_10a5ac920:
        uVar11 = 1;
      }
      else {
        if (uStack_f0._7_1_ != '\0') {
          pppuStack_88 = pppuStack_f8;
          pppppuStack_90 = pppppuStack_100;
          plStack_80 = uStack_f0;
          goto LAB_10a5ac920;
        }
LAB_10a5ac878:
        uVar11 = 0;
        pppppuStack_90 = (undefined8 *****)((ulong)pppppuStack_90 & 0xffffffffffffff00);
      }
      uStack_78 = CONCAT71(uStack_78._1_7_,uVar11);
      if (cStack_91 < '\0') {
        if (lStack_a0 == 0) goto LAB_10a5ac94c;
        func_0x000107c3192c(&pppppuStack_e0,pppppuStack_a8);
LAB_10a5ac9b0:
        uStack_c8 = 1;
      }
      else {
        if (cStack_91 != '\0') {
          lStack_d8 = lStack_a0;
          pppppuStack_e0 = pppppuStack_a8;
          goto LAB_10a5ac9b0;
        }
LAB_10a5ac94c:
        uStack_c8 = 0;
        pppppuStack_e0 = (undefined8 *****)((ulong)pppppuStack_e0 & 0xffffffffffffff00);
      }
      FUN_10a234a0c(&pppppuStack_90,&pppppuStack_e0);
      goto LAB_10a5ac9ec;
    }
  }
LAB_10a5aba4c:
  FUN_10ad63308(*(undefined8 *)(*(long *)(param_1 + 0x108) + 0xd40));
  piVar7 = (int *)0x1138350e8;
  FUN_10a1d5d54();
  bVar2 = *(byte *)(*(long *)(param_1 + 0xf8) + 8);
  lVar12 = *(long *)(param_1 + 0x108);
  if (((*(char *)(lVar12 + 0xe2d) != '\0' & bVar2) == 0) &&
     (uRam00000001138350e0 != 0 || *piVar7 != 0)) {
    lVar12 = lVar12 + 0xd48;
    FUN_10a5aeb74(lVar12,&PTR_DAT_110bcfb40);
    pppuStack_88 = (undefined8 ****)0x0;
    pppppuStack_90 = (undefined8 ******)0x0;
    uStack_78 = 0;
    plStack_80 = (long *)0x0;
    uStack_70 = 0x3f800000;
    lVar20 = *(long *)(lVar12 + 8);
    if (lVar20 != lVar12) {
      ppuVar6 = &PTR___tlv_bootstrap_11340dfd8;
      (*(code *)PTR___tlv_bootstrap_11340dfd8)();
      ppuVar9 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      do {
        plVar19 = *(long **)(lVar20 + 0x28);
        plVar18 = plVar19;
        ___dynamic_cast(plVar19,&PTR_DAT_110bcfb40,&PTR_DAT_110c681a0,0x10);
        if ((plVar18 == (long *)0x0) || (FUN_10ac604d8(), (int)plVar18 == 0)) {
          (**(code **)(*plVar19 + 8))(plVar19,0);
          iVar5 = (int)plVar19;
          FUN_10ad055a0();
          if (iVar5 != 0) {
            if (*ppuVar6 == (undefined *)0x0) {
              plVar18 = (long *)*ppuVar9;
              if ((plVar18 == (long *)0x0) ||
                 ((**(code **)(*plVar18 + 0x18))(), plVar18 == (long *)0x0)) goto LAB_10a5abb7c;
              plVar18 = plVar18 + 7;
            }
            else {
              plVar18 = (long *)(*ppuVar6 + 8);
            }
            if (((uint)*(undefined8 *)(*plVar18 + 0x10) >> 1 & 1) != 0) {
              func_0x000107c2b054(&pppppuStack_a8,&UNK_10f665a01);
              lVar12 = *(long *)(param_1 + 0xf8);
              if (*(char *)(lVar12 + 0x21f) < '\0') {
                func_0x000107c3192c(&pppppuStack_c0,*(undefined8 *)(lVar12 + 0x208),
                                    *(undefined8 *)(lVar12 + 0x210));
              }
              else {
                pppuStack_b8 = *(undefined8 ****)(lVar12 + 0x210);
                pppppuStack_c0 = *(undefined8 ******)(lVar12 + 0x208);
                uStack_b0 = *(long **)(lVar12 + 0x218);
              }
              if (cStack_91 < '\0') {
                pppppuStack_e0 = (undefined8 *****)"null";
                if (lStack_a0 != 0) {
                  pppppuStack_e0 = pppppuStack_a8;
                }
              }
              else {
                pppppuStack_e0 = (undefined8 *****)"null";
                if (cStack_91 != '\0') {
                  pppppuStack_e0 = &pppppuStack_a8;
                }
              }
              if ((long)uStack_b0 < 0) {
                pppppuStack_100 = (undefined8 *****)"null";
                if ((undefined8 ****)pppuStack_b8 != (undefined8 ****)0x0) {
                  pppppuStack_100 = pppppuStack_c0;
                }
              }
              else {
                pppppuStack_100 = (undefined8 *****)"null";
                if (uStack_b0._7_1_ != '\0') {
                  pppppuStack_100 = &pppppuStack_c0;
                }
              }
              FUN_10a224324(&pppppuStack_e0,&pppppuStack_100);
              if (cStack_91 < '\0') {
                if (lStack_a0 == 0) goto LAB_10a5ac318;
                func_0x000107c3192c(&pppppuStack_e0,pppppuStack_a8);
LAB_10a5ac5bc:
                uStack_c8 = 1;
              }
              else {
                if (cStack_91 != '\0') {
                  lStack_d8 = lStack_a0;
                  pppppuStack_e0 = pppppuStack_a8;
                  goto LAB_10a5ac5bc;
                }
LAB_10a5ac318:
                uStack_c8 = 0;
                pppppuStack_e0 = (undefined8 *****)((ulong)pppppuStack_e0 & 0xffffffffffffff00);
              }
              if ((long)uStack_b0 < 0) {
                if ((undefined8 ****)pppuStack_b8 == (undefined8 ****)0x0) goto LAB_10a5ac5e8;
                func_0x000107c3192c(&pppppuStack_100,pppppuStack_c0);
LAB_10a5ac6d8:
                uStack_e8 = 1;
              }
              else {
                if (uStack_b0._7_1_ != '\0') {
                  pppuStack_f8 = pppuStack_b8;
                  pppppuStack_100 = pppppuStack_c0;
                  uStack_f0 = uStack_b0;
                  goto LAB_10a5ac6d8;
                }
LAB_10a5ac5e8:
                uStack_e8 = 0;
                pppppuStack_100 = (undefined8 *****)((ulong)pppppuStack_100 & 0xffffffffffffff00);
              }
              FUN_10a234a0c(&pppppuStack_e0,&pppppuStack_100);
              goto LAB_10a5ac9ec;
            }
          }
        }
        else {
          FUN_10a5ce050(&pppppuStack_90,plVar19,plVar19);
        }
LAB_10a5abb7c:
        lVar20 = *(long *)(lVar20 + 8);
      } while (lVar20 != lVar12);
    }
    if ((*(byte *)(*(long *)(param_1 + 0x108) + 0xe2a) & 1) == 0) {
      puVar8 = (uint *)0x1138350e8;
      FUN_10a1d5d54();
      plVar18 = plStack_80;
      uVar1 = *puVar8;
      if (uRam00000001138350e0 != 0) {
        uVar1 = uRam00000001138350e0;
      }
      if (((uVar1 >> 2 & 1) != 0) && (plStack_80 != (long *)0x0)) {
        ppuVar6 = &PTR___tlv_bootstrap_11340dfd8;
        (*(code *)PTR___tlv_bootstrap_11340dfd8)();
        ppuVar9 = &PTR___tlv_bootstrap_11340dd98;
        (*(code *)PTR___tlv_bootstrap_11340dd98)();
        do {
          lVar12 = 0;
          if (plVar18[2] != 0) {
            lVar12 = plVar18[2] + -0x10;
          }
          FUN_10ac607ec(lVar12,0);
          iVar5 = (int)lVar12;
          FUN_10ad055a0();
          if (iVar5 != 0) {
            if (*ppuVar6 == (undefined *)0x0) {
              plVar19 = (long *)*ppuVar9;
              if ((plVar19 == (long *)0x0) ||
                 ((**(code **)(*plVar19 + 0x18))(), plVar19 == (long *)0x0)) goto LAB_10a5abc60;
              plVar19 = plVar19 + 7;
            }
            else {
              plVar19 = (long *)(*ppuVar6 + 8);
            }
            if (((uint)*(undefined8 *)(*plVar19 + 0x10) >> 1 & 1) != 0) {
              func_0x000107c2b054(&pppppuStack_a8,&UNK_10f665a26);
              lVar12 = *(long *)(param_1 + 0xf8);
              if (*(char *)(lVar12 + 0x21f) < '\0') {
                func_0x000107c3192c(&pppppuStack_c0,*(undefined8 *)(lVar12 + 0x208),
                                    *(undefined8 *)(lVar12 + 0x210));
              }
              else {
                pppuStack_b8 = *(undefined8 ****)(lVar12 + 0x210);
                pppppuStack_c0 = *(undefined8 ******)(lVar12 + 0x208);
                uStack_b0 = *(long **)(lVar12 + 0x218);
              }
              if (cStack_91 < '\0') {
                pppppuStack_e0 = (undefined8 *****)"null";
                if (lStack_a0 != 0) {
                  pppppuStack_e0 = pppppuStack_a8;
                }
              }
              else {
                pppppuStack_e0 = (undefined8 *****)"null";
                if (cStack_91 != '\0') {
                  pppppuStack_e0 = &pppppuStack_a8;
                }
              }
              if ((long)uStack_b0 < 0) {
                pppppuStack_100 = (undefined8 *****)"null";
                if ((undefined8 ****)pppuStack_b8 != (undefined8 ****)0x0) {
                  pppppuStack_100 = pppppuStack_c0;
                }
              }
              else {
                pppppuStack_100 = (undefined8 *****)"null";
                if (uStack_b0._7_1_ != '\0') {
                  pppppuStack_100 = &pppppuStack_c0;
                }
              }
              FUN_10a224324(&pppppuStack_e0,&pppppuStack_100);
              if (cStack_91 < '\0') {
                if (lStack_a0 == 0) goto LAB_10a5ac530;
                func_0x000107c3192c(&pppppuStack_e0,pppppuStack_a8);
LAB_10a5ac728:
                uStack_c8 = 1;
              }
              else {
                if (cStack_91 != '\0') {
                  lStack_d8 = lStack_a0;
                  pppppuStack_e0 = pppppuStack_a8;
                  goto LAB_10a5ac728;
                }
LAB_10a5ac530:
                uStack_c8 = 0;
                pppppuStack_e0 = (undefined8 *****)((ulong)pppppuStack_e0 & 0xffffffffffffff00);
              }
              if ((long)uStack_b0 < 0) {
                if ((undefined8 ****)pppuStack_b8 == (undefined8 ****)0x0) goto LAB_10a5ac754;
                func_0x000107c3192c(&pppppuStack_100,pppppuStack_c0);
LAB_10a5ac770:
                uStack_e8 = 1;
              }
              else {
                if (uStack_b0._7_1_ != '\0') {
                  pppuStack_f8 = pppuStack_b8;
                  pppppuStack_100 = pppppuStack_c0;
                  uStack_f0 = uStack_b0;
                  goto LAB_10a5ac770;
                }
LAB_10a5ac754:
                uStack_e8 = 0;
                pppppuStack_100 = (undefined8 *****)((ulong)pppppuStack_100 & 0xffffffffffffff00);
              }
              FUN_10a234a0c(&pppppuStack_e0,&pppppuStack_100);
              goto LAB_10a5ac9ec;
            }
          }
LAB_10a5abc60:
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
  else {
    if ((bVar2 & 1) == 0) {
      uStack_104 = 0;
    }
    else if ((*(byte *)(lVar12 + 0xe2a) & 1) == 0) {
      puVar8 = (uint *)0x1138350e8;
      FUN_10a1d5d54();
      uVar1 = *puVar8;
      if (uRam00000001138350e0 != 0) {
        uVar1 = uRam00000001138350e0;
      }
      uStack_104 = uVar1 >> 6 & 1;
      lVar12 = *(long *)(param_1 + 0x108);
    }
    else {
      uStack_104 = 1;
    }
    pppuStack_88 = (undefined8 ****)0x0;
    pppppuStack_90 = (undefined8 ******)0x0;
    uStack_78 = 0;
    plStack_80 = (long *)0x0;
    uStack_70 = 0x3f800000;
    lVar12 = lVar12 + 0xd48;
    FUN_10a5aeb74(lVar12,&PTR_DAT_110bcfb40);
    lVar20 = *(long *)(lVar12 + 8);
    if (lVar20 != lVar12) {
      ppuVar6 = &PTR___tlv_bootstrap_11340dfd8;
      (*(code *)PTR___tlv_bootstrap_11340dfd8)();
      ppuVar9 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      do {
        plVar18 = *(long **)(lVar20 + 0x28);
        if ((((bVar2 & 1) == 0) || (plVar18 == (long *)0x0)) ||
           (plVar19 = plVar18, ___dynamic_cast(plVar18,&PTR_DAT_110bcfb40,&PTR_DAT_110c681a0,0x10),
           plVar19 == (long *)0x0)) {
          (**(code **)(*plVar18 + 8))(plVar18,0);
          iVar5 = (int)plVar18;
          FUN_10ad055a0();
          if (iVar5 != 0) {
            if (*ppuVar6 == (undefined *)0x0) {
              plVar18 = (long *)*ppuVar9;
              if ((plVar18 == (long *)0x0) ||
                 ((**(code **)(*plVar18 + 0x18))(), plVar18 == (long *)0x0)) goto LAB_10a5abe1c;
              plVar18 = plVar18 + 7;
            }
            else {
              plVar18 = (long *)(*ppuVar6 + 8);
            }
            if (((uint)*(undefined8 *)(*plVar18 + 0x10) >> 1 & 1) != 0) {
              func_0x000107c2b054(&pppppuStack_a8,&UNK_10f665a72);
              lVar12 = *(long *)(param_1 + 0xf8);
              if (*(char *)(lVar12 + 0x21f) < '\0') {
                func_0x000107c3192c(&pppppuStack_c0,*(undefined8 *)(lVar12 + 0x208),
                                    *(undefined8 *)(lVar12 + 0x210));
              }
              else {
                pppuStack_b8 = *(undefined8 ****)(lVar12 + 0x210);
                pppppuStack_c0 = *(undefined8 ******)(lVar12 + 0x208);
                uStack_b0 = *(long **)(lVar12 + 0x218);
              }
              if (cStack_91 < '\0') {
                pppppuStack_e0 = (undefined8 *****)"null";
                if (lStack_a0 != 0) {
                  pppppuStack_e0 = pppppuStack_a8;
                }
              }
              else {
                pppppuStack_e0 = (undefined8 *****)"null";
                if (cStack_91 != '\0') {
                  pppppuStack_e0 = &pppppuStack_a8;
                }
              }
              if ((long)uStack_b0 < 0) {
                pppppuStack_100 = (undefined8 *****)"null";
                if ((undefined8 ****)pppuStack_b8 != (undefined8 ****)0x0) {
                  pppppuStack_100 = pppppuStack_c0;
                }
              }
              else {
                pppppuStack_100 = (undefined8 *****)"null";
                if (uStack_b0._7_1_ != '\0') {
                  pppppuStack_100 = &pppppuStack_c0;
                }
              }
              FUN_10a224324(&pppppuStack_e0,&pppppuStack_100);
              if (cStack_91 < '\0') {
                if (lStack_a0 == 0) goto LAB_10a5ac3a4;
                func_0x000107c3192c(&pppppuStack_e0,pppppuStack_a8);
LAB_10a5ac604:
                uStack_c8 = 1;
              }
              else {
                if (cStack_91 != '\0') {
                  lStack_d8 = lStack_a0;
                  pppppuStack_e0 = pppppuStack_a8;
                  goto LAB_10a5ac604;
                }
LAB_10a5ac3a4:
                uStack_c8 = 0;
                pppppuStack_e0 = (undefined8 *****)((ulong)pppppuStack_e0 & 0xffffffffffffff00);
              }
              if ((long)uStack_b0 < 0) {
                if ((undefined8 ****)pppuStack_b8 == (undefined8 ****)0x0) goto LAB_10a5ac630;
                func_0x000107c3192c(&pppppuStack_100,pppppuStack_c0);
LAB_10a5ac700:
                uStack_e8 = 1;
              }
              else {
                if (uStack_b0._7_1_ != '\0') {
                  pppuStack_f8 = pppuStack_b8;
                  pppppuStack_100 = pppppuStack_c0;
                  uStack_f0 = uStack_b0;
                  goto LAB_10a5ac700;
                }
LAB_10a5ac630:
                uStack_e8 = 0;
                pppppuStack_100 = (undefined8 *****)((ulong)pppppuStack_100 & 0xffffffffffffff00);
              }
              FUN_10a234a0c(&pppppuStack_e0,&pppppuStack_100);
              goto LAB_10a5ac9ec;
            }
          }
        }
        else {
          if (uStack_104 == 0) {
            FUN_10ac607ec(plVar19,0);
          }
          else {
            FUN_10ac607ec(plVar19,1);
            plVar19 = (long *)plVar19[0x60];
            if (plVar19 != (long *)0x0) {
              FUN_10a254398();
            }
          }
          iVar5 = (int)plVar19;
          FUN_10ad055a0();
          if (iVar5 != 0) {
            if (*ppuVar6 == (undefined *)0x0) {
              plVar19 = (long *)*ppuVar9;
              if ((plVar19 == (long *)0x0) ||
                 ((**(code **)(*plVar19 + 0x18))(), plVar19 == (long *)0x0)) goto LAB_10a5abe0c;
              plVar19 = plVar19 + 7;
            }
            else {
              plVar19 = (long *)(*ppuVar6 + 8);
            }
            if (((uint)*(undefined8 *)(*plVar19 + 0x10) >> 1 & 1) != 0) {
              func_0x000107c2b054(&pppppuStack_a8,&UNK_10f665a50);
              lVar12 = *(long *)(param_1 + 0xf8);
              if (*(char *)(lVar12 + 0x21f) < '\0') {
                func_0x000107c3192c(&pppppuStack_c0,*(undefined8 *)(lVar12 + 0x208),
                                    *(undefined8 *)(lVar12 + 0x210));
              }
              else {
                pppuStack_b8 = *(undefined8 ****)(lVar12 + 0x210);
                pppppuStack_c0 = *(undefined8 ******)(lVar12 + 0x208);
                uStack_b0 = *(long **)(lVar12 + 0x218);
              }
              if (cStack_91 < '\0') {
                pppppuStack_e0 = (undefined8 *****)"null";
                if (lStack_a0 != 0) {
                  pppppuStack_e0 = pppppuStack_a8;
                }
              }
              else {
                pppppuStack_e0 = (undefined8 *****)"null";
                if (cStack_91 != '\0') {
                  pppppuStack_e0 = &pppppuStack_a8;
                }
              }
              if ((long)uStack_b0 < 0) {
                pppppuStack_100 = (undefined8 *****)"null";
                if ((undefined8 ****)pppuStack_b8 != (undefined8 ****)0x0) {
                  pppppuStack_100 = pppppuStack_c0;
                }
              }
              else {
                pppppuStack_100 = (undefined8 *****)"null";
                if (uStack_b0._7_1_ != '\0') {
                  pppppuStack_100 = &pppppuStack_c0;
                }
              }
              FUN_10a224324(&pppppuStack_e0,&pppppuStack_100);
              if (cStack_91 < '\0') {
                if (lStack_a0 == 0) goto LAB_10a5ac6bc;
                func_0x000107c3192c(&pppppuStack_e0,pppppuStack_a8);
LAB_10a5ac798:
                uStack_c8 = 1;
              }
              else {
                if (cStack_91 != '\0') {
                  lStack_d8 = lStack_a0;
                  pppppuStack_e0 = pppppuStack_a8;
                  goto LAB_10a5ac798;
                }
LAB_10a5ac6bc:
                uStack_c8 = 0;
                pppppuStack_e0 = (undefined8 *****)((ulong)pppppuStack_e0 & 0xffffffffffffff00);
              }
              if ((long)uStack_b0 < 0) {
                if ((undefined8 ****)pppuStack_b8 == (undefined8 ****)0x0) goto LAB_10a5ac7c4;
                func_0x000107c3192c(&pppppuStack_100,pppppuStack_c0);
LAB_10a5ac7e0:
                uStack_e8 = 1;
              }
              else {
                if (uStack_b0._7_1_ != '\0') {
                  pppuStack_f8 = pppuStack_b8;
                  pppppuStack_100 = pppppuStack_c0;
                  uStack_f0 = uStack_b0;
                  goto LAB_10a5ac7e0;
                }
LAB_10a5ac7c4:
                uStack_e8 = 0;
                pppppuStack_100 = (undefined8 *****)((ulong)pppppuStack_100 & 0xffffffffffffff00);
              }
              FUN_10a234a0c(&pppppuStack_e0,&pppppuStack_100);
              goto LAB_10a5ac9ec;
            }
          }
LAB_10a5abe0c:
          FUN_10a5ce050(&pppppuStack_90,plVar18,plVar18);
        }
LAB_10a5abe1c:
        lVar20 = *(long *)(lVar20 + 8);
      } while (lVar20 != lVar12);
      lVar20 = *(long *)(lVar12 + 8);
    }
    if (((bVar2 & 1) != 0) && (lVar20 != lVar12)) {
      ppuVar6 = &PTR___tlv_bootstrap_11340dfd8;
      (*(code *)PTR___tlv_bootstrap_11340dfd8)();
      ppuVar9 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      do {
        ppppuVar10 = *(undefined8 *****)(lVar20 + 0x28);
        if ((undefined8 ****)pppuStack_88 != (undefined8 ****)0x0) {
          uVar14 = ((ulong)(uint)((int)ppppuVar10 << 3) + 8 ^ (ulong)ppppuVar10 >> 0x20) *
                   -0x622015f714c7d297;
          uVar14 = ((ulong)ppppuVar10 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
          ppppuVar13 = (undefined8 ****)((uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297);
          uVar14 = (long)pppuStack_88 - 1;
          if (((ulong)pppuStack_88 & uVar14) == 0) {
            ppppuVar15 = (undefined8 ****)((ulong)ppppuVar13 & uVar14);
          }
          else {
            ppppuVar15 = ppppuVar13;
            if (pppuStack_88 <= ppppuVar13) {
              uVar3 = 0;
              if ((undefined8 ****)pppuStack_88 != (undefined8 ****)0x0) {
                uVar3 = (ulong)ppppuVar13 / (ulong)pppuStack_88;
              }
              ppppuVar15 = (undefined8 ****)((long)ppppuVar13 - uVar3 * (long)pppuStack_88);
            }
          }
          pppppuVar16 = (undefined8 *****)pppppuStack_90[(long)ppppuVar15];
          if (pppppuVar16 != (undefined8 *****)0x0) {
            do {
              while( true ) {
                pppppuVar16 = (undefined8 *****)*pppppuVar16;
                if (pppppuVar16 == (undefined8 *****)0x0) goto LAB_10a5abf68;
                ppppuVar17 = pppppuVar16[1];
                if ((long)ppppuVar13 - (long)ppppuVar17 != 0) break;
                if (pppppuVar16[2] == ppppuVar10) {
                  if ((uStack_104 == 0) &&
                     (ppppuVar10 = (undefined8 ****)ppppuVar10[0x5e],
                     ppppuVar10 != (undefined8 ****)0x0)) {
                    FUN_10a254398();
                  }
                  goto LAB_10a5abf78;
                }
              }
              if (((ulong)pppuStack_88 & uVar14) == 0) {
                ppppuVar17 = (undefined8 ****)((ulong)ppppuVar17 & uVar14);
              }
              else if (pppuStack_88 <= ppppuVar17) {
                uVar3 = 0;
                if ((undefined8 ****)pppuStack_88 != (undefined8 ****)0x0) {
                  uVar3 = (ulong)ppppuVar17 / (ulong)pppuStack_88;
                }
                ppppuVar17 = (undefined8 ****)((long)ppppuVar17 - uVar3 * (long)pppuStack_88);
              }
            } while (ppppuVar17 == ppppuVar15);
          }
        }
LAB_10a5abf68:
        (*(code *)(*ppppuVar10)[1])(ppppuVar10,1);
LAB_10a5abf78:
        iVar5 = (int)ppppuVar10;
        FUN_10ad055a0();
        if (iVar5 != 0) {
          if (*ppuVar6 == (undefined *)0x0) {
            plVar18 = (long *)*ppuVar9;
            if ((plVar18 == (long *)0x0) ||
               ((**(code **)(*plVar18 + 0x18))(), plVar18 == (long *)0x0)) goto LAB_10a5abf9c;
            plVar18 = plVar18 + 7;
          }
          else {
            plVar18 = (long *)(*ppuVar6 + 8);
          }
          if (((uint)*(undefined8 *)(*plVar18 + 0x10) >> 1 & 1) != 0) {
            func_0x000107c2b054(&pppppuStack_a8,&UNK_10f665a9c);
            lVar12 = *(long *)(param_1 + 0xf8);
            if (-1 < *(char *)(lVar12 + 0x21f)) goto LAB_10a5ac170;
            func_0x000107c3192c(&pppppuStack_c0,*(undefined8 *)(lVar12 + 0x208),
                                *(undefined8 *)(lVar12 + 0x210));
            goto LAB_10a5ac184;
          }
        }
LAB_10a5abf9c:
        lVar20 = *(long *)(lVar20 + 8);
      } while (lVar20 != lVar12);
    }
  }
  iVar5 = (int)&pppppuStack_90;
  FUN_10a5ce008();
  FUN_10ad055a0();
  if (iVar5 == 0) {
LAB_10a5ac020:
    *(undefined1 *)(param_1 + 0x1a8) = 1;
    return;
  }
  ppuVar6 = &PTR___tlv_bootstrap_11340dfd8;
  (*(code *)PTR___tlv_bootstrap_11340dfd8)();
  if (*ppuVar6 == (undefined *)0x0) {
    ppuVar6 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    plVar18 = (long *)*ppuVar6;
    if ((plVar18 == (long *)0x0) || ((**(code **)(*plVar18 + 0x18))(), plVar18 == (long *)0x0))
    goto LAB_10a5ac020;
    plVar18 = plVar18 + 7;
  }
  else {
    plVar18 = (long *)(*ppuVar6 + 8);
  }
  if (((uint)*(undefined8 *)(*plVar18 + 0x10) >> 1 & 1) == 0) goto LAB_10a5ac020;
  func_0x000107c2b054(&pppppuStack_100,&UNK_10f6659c2);
  plVar18 = (long *)(*(long *)(param_1 + 0xf8) + 0x208);
  if (*(char *)(*(long *)(param_1 + 0xf8) + 0x21f) < '\0') {
    plVar18 = (long *)*plVar18;
  }
  func_0x000107c2b054(&pppppuStack_a8,plVar18);
  if ((long)uStack_f0 < 0) {
    pppppuStack_90 = (undefined8 *****)"null";
    if ((undefined8 ****)pppuStack_f8 != (undefined8 ****)0x0) {
      pppppuStack_90 = pppppuStack_100;
    }
  }
  else {
    pppppuStack_90 = (undefined8 *****)"null";
    if (uStack_f0._7_1_ != '\0') {
      pppppuStack_90 = &pppppuStack_100;
    }
  }
  if (cStack_91 < '\0') {
    pppppuStack_e0 = (undefined8 *****)"null";
    if (lStack_a0 != 0) {
      pppppuStack_e0 = pppppuStack_a8;
    }
  }
  else {
    pppppuStack_e0 = (undefined8 *****)"null";
    if (cStack_91 != '\0') {
      pppppuStack_e0 = &pppppuStack_a8;
    }
  }
  FUN_10a224324(&pppppuStack_90,&pppppuStack_e0);
  if ((long)uStack_f0 < 0) {
    if ((undefined8 ****)pppuStack_f8 == (undefined8 ****)0x0) goto LAB_10a5ac904;
    func_0x000107c3192c(&pppppuStack_90,pppppuStack_100);
LAB_10a5ac968:
    uVar11 = 1;
  }
  else {
    if (uStack_f0._7_1_ != '\0') {
      pppuStack_88 = pppuStack_f8;
      pppppuStack_90 = pppppuStack_100;
      plStack_80 = uStack_f0;
      goto LAB_10a5ac968;
    }
LAB_10a5ac904:
    uVar11 = 0;
    pppppuStack_90 = (undefined8 *****)((ulong)pppppuStack_90 & 0xffffffffffffff00);
  }
  uStack_78 = CONCAT71(uStack_78._1_7_,uVar11);
  if (cStack_91 < '\0') {
    if (lStack_a0 == 0) goto LAB_10a5ac994;
    func_0x000107c3192c(&pppppuStack_e0,pppppuStack_a8);
LAB_10a5ac9d8:
    uStack_c8 = 1;
  }
  else {
    if (cStack_91 != '\0') {
      lStack_d8 = lStack_a0;
      pppppuStack_e0 = pppppuStack_a8;
      goto LAB_10a5ac9d8;
    }
LAB_10a5ac994:
    uStack_c8 = 0;
    pppppuStack_e0 = (undefined8 *****)((ulong)pppppuStack_e0 & 0xffffffffffffff00);
  }
  FUN_10a234a0c(&pppppuStack_90,&pppppuStack_e0);
LAB_10a5ac9ec:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5ac9f0);
  (*pcVar4)();
}



/* Entry: 10a5acb70; end: 10a5acbc3;  */

undefined * FUN_10a5acb70(undefined1 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  func_0x00010ae02f14(0,param_1);
  ppuVar6 = &PTR_PTR_113302970;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0();
  func_0x00010ae02f1c();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10a5acbc4; end: 10a5acc33;  */

undefined8 FUN_10a5acbc4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x1a8) == '\x02') {
    return 1;
  }
  lVar2 = param_1;
  FUN_10a5acc34();
  if ((int)lVar2 == 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x108) + 0xd40) + 0x18);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      *(int *)(lVar2 + 0x78) = *(int *)(lVar2 + 0x78) + 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x1a8) = 2;
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10a5acc34; end: 10a5acda3;  */

undefined8 FUN_10a5acc34(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  lVar1 = *(long *)(param_1 + 0x108) + 0xd48;
  FUN_10a5aeb74(lVar1,&PTR_DAT_110bcfb40);
  lVar5 = *(long *)(lVar1 + 8);
  if (lVar5 == lVar1) {
    FUN_10ad6355c(*(undefined8 *)(*(long *)(param_1 + 0x108) + 0xd40));
    FUN_10ad6360c(*(undefined8 *)(*(long *)(param_1 + 0x108) + 0xd40));
LAB_10a5acd78:
    FUN_10ad634ac(*(undefined8 *)(*(long *)(param_1 + 0x108) + 0xd40));
    uVar3 = 1;
  }
  else {
    iVar7 = 2;
    bVar8 = true;
    iVar6 = 2;
    do {
      while( true ) {
        puVar4 = *(undefined8 **)(lVar5 + 0x28);
        puVar2 = puVar4;
        (**(code **)*puVar4)();
        if ((int)puVar2 == 1) break;
LAB_10a5accf0:
        lVar5 = *(long *)(lVar5 + 8);
        if (lVar5 == lVar1) {
          if (bVar8) {
            FUN_10ad6355c(*(undefined8 *)(*(long *)(param_1 + 0x108) + 0xd40));
          }
          if (iVar6 == 2) {
            FUN_10ad6360c(*(undefined8 *)(*(long *)(param_1 + 0x108) + 0xd40));
          }
          if (iVar7 != 2) goto LAB_10a5acd58;
          goto LAB_10a5acd78;
        }
      }
      puVar2 = puVar4;
      ___dynamic_cast(puVar4,&PTR_DAT_110bcfb40,&PTR_DAT_110bb3788,0x10);
      if (puVar2 == (undefined8 *)0x0) {
        ___dynamic_cast(puVar4,&PTR_DAT_110bcfb40,&PTR_DAT_110c5ede8,0x10);
        if (puVar4 != (undefined8 *)0x0) {
          iVar6 = 1;
        }
        iVar7 = 1;
        goto LAB_10a5accf0;
      }
      bVar8 = false;
      lVar5 = *(long *)(lVar5 + 8);
      iVar7 = 1;
    } while (lVar5 != lVar1);
    if (iVar6 == 2) {
      FUN_10ad6360c(*(undefined8 *)(*(long *)(param_1 + 0x108) + 0xd40));
    }
LAB_10a5acd58:
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10a5acda4; end: 10a5ace6b;  */

void FUN_10a5acda4(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  lVar6 = *(long *)(param_2 + 0x180);
  if (lVar6 != 0) {
    plVar7 = (long *)(param_2 + 0x10);
    lVar8 = 0x10;
    do {
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a5ace6c);
        (*pcVar5)();
      }
      if ((undefined *)plVar7[-2] == &UNK_10e4ce7b0) {
        lVar6 = plVar7[-1];
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          *param_1 = lVar6;
          param_1[1] = 0;
          return;
        }
        plVar1 = plVar7 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        *param_1 = lVar6;
        param_1[1] = (long)plVar7;
        plVar2 = plVar7 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          lVar6 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 != 0) {
          return;
        }
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
        return;
      }
      plVar7 = plVar7 + 3;
      lVar8 = lVar8 + -1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a5ace6c; end: 10a5acf83;  */

void FUN_10a5ace6c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [48];
  long lStack_40;
  long *plStack_38;
  
  FUN_10a18eadc(auStack_70,&UNK_10f6659f1);
  lVar7 = param_1;
  FUN_10a5a52cc();
  puVar5 = *(undefined8 **)(lVar7 + 0x848);
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 4) = 0;
  *(undefined1 *)(puVar5[2] + 0x174) = 0;
  lVar6 = *(long *)(*(long *)(param_1 + 0x108) + 0xd40);
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined4 *)(lVar6 + 0x20) = 0;
  if (*(long *)(*(long *)(param_1 + 0xf8) + 0x250) != 0) {
    func_0x00010a152370(&lStack_40);
    if (plStack_38 != (long *)0x0) {
      plVar4 = plStack_38;
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plStack_38 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if ((plVar4 == (long *)0x0) || (lStack_40 == 0)) {
        if (plVar4 == (long *)0x0) goto LAB_10a5acf54;
      }
      else if (((*(byte *)(*(long *)(lStack_40 + 0x10) + 0x42) & 1) != 0) ||
              (*(char *)(*(long *)(lStack_40 + 0x10) + 0x43) == '\x01')) {
        *(undefined8 *)(*(long *)(lVar7 + 0x848) + 8) = 0;
      }
      plVar1 = plVar4 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
LAB_10a5acf54:
  FUN_10a1988cc(auStack_70);
  return;
}



/* Entry: 10a5acf84; end: 10a5ad36b;  */

void FUN_10a5acf84(long *param_1,undefined8 *param_2,long *param_3,uint param_4)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  char cVar4;
  code *pcVar5;
  undefined **ppuVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puStack_88;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  
  ppuVar6 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  if (*ppuVar6 != (undefined *)0x0) {
    FUN_10a08e1c8(*ppuVar6 + 0x18);
  }
  plVar7 = (long *)*param_2;
  (**(code **)(*plVar7 + 0x28))();
  plVar8 = (long *)*param_2;
  (**(code **)(*plVar8 + 0x30))();
  lVar17 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = lVar17;
  *param_3 = 0;
  param_3[1] = 0;
  iVar13 = (int)plVar8;
  if (lVar17 == 0) {
    lVar17 = 0;
    FUN_10a2421c8();
    uVar16 = *(undefined8 *)(lVar17 + 0x1e0);
    plVar8 = (long *)*param_2;
    (**(code **)(*plVar8 + 0x50))();
    FUN_10a048e7c(&puStack_88,uVar16,0,plVar7,iVar13 * param_4,1,plVar8,3,0,2);
    FUN_10a00e5c4(param_1,&puStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar8 = plStack_80 + 1;
      do {
        lVar17 = *plVar8;
        cVar4 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
      }
    }
  }
  plVar8 = (long *)*ppuVar6;
  puStack_88 = &UNK_10f666dfc;
  plStack_80 = (long *)0x39;
  if (plVar8 == (long *)0x0) {
    FUN_10a0edfc4(&puStack_88);
  }
  else {
    lVar17 = 0;
    if ((char)plVar8[0x2c] == '\0') {
      lVar17 = 8;
    }
    puVar9 = *(undefined8 **)(*plVar8 + lVar17);
    puStack_88 = &UNK_10f666e36;
    plStack_80 = (long *)0x3b;
    if (puVar9 != (undefined8 *)0x0) {
      uVar14 = *puVar9;
      uVar16 = puVar9[2];
      uVar3 = puVar9[3];
      __ZNSt3__115recursive_mutex4lockEv(uVar3);
      FUN_10a012fec(&plStack_70,uVar14,uVar16);
      __ZNSt3__115recursive_mutex6unlockEv(uVar3);
      plVar8 = plStack_70;
      (**(code **)(*plStack_70 + 0x48))();
      puStack_88 = (undefined *)0x0;
      plStack_80 = (long *)0x0;
      lStack_78 = 0;
      if (param_4 != 0) {
        if ((int)param_4 < 0) {
          FUN_10a186f18();
          goto LAB_10a5ad308;
        }
        lVar17 = (long)(int)param_4;
        ppuVar6 = &puStack_88;
        FUN_10a186f2c();
        lVar17 = (long)ppuVar6 + lVar17 * 0x2c;
        _bzero();
        puVar1 = (undefined *)
                 ((long)ppuVar6 + (((long)(int)param_4 * 0x2c - 0x2cU) / 0x2c) * 0x2c + 0x2c);
        puVar15 = (undefined *)((long)ppuVar6 - ((long)plStack_80 - (long)puStack_88));
        _memcpy(puVar15);
        bVar2 = puStack_88 != (undefined *)0x0;
        puStack_88 = puVar15;
        plStack_80 = (long *)puVar1;
        lStack_78 = lVar17;
        if (bVar2) {
          __ZdlPv();
        }
        uVar10 = 0;
        iVar11 = iVar13 * (param_4 - 1);
        puVar12 = (undefined4 *)(puStack_88 + 0x14);
        do {
          if (((long)plStack_80 - (long)puStack_88 >> 2) * 0x2e8ba2e8ba2e8ba3 - uVar10 == 0)
          goto LAB_10a5ad308;
          *(undefined8 *)(puVar12 + -4) = 0;
          puVar12[-2] = (int)uVar10;
          *puVar12 = 0;
          puVar12[1] = iVar11;
          puVar12[2] = 0;
          puVar12[3] = (int)plVar7;
          uVar10 = uVar10 + 1;
          iVar11 = iVar11 - iVar13;
          puVar12[4] = iVar13;
          puVar12[5] = 1;
          puVar12 = puVar12 + 0xb;
        } while (param_4 != uVar10);
      }
      (**(code **)(*plVar8 + 0x48))(plVar8);
      plVar7 = (long *)*param_2;
      (**(code **)(*plVar7 + 0xb8))();
      param_1 = (long *)*param_1;
      (**(code **)(*param_1 + 0xb8))();
      (**(code **)(*plVar8 + 0x70))
                (plVar8,plVar7,param_1,puStack_88,
                 ((long)plStack_80 - (long)puStack_88 >> 2) * 0x2e8ba2e8ba2e8ba3,6,7);
      (**(code **)(*plVar8 + 0x40))(plVar8);
      FUN_10a08e2f4(plStack_70);
      if (puStack_88 != (undefined *)0x0) {
        plStack_80 = (long *)puStack_88;
        __ZdlPv();
      }
      if (plStack_68 != (long *)0x0) {
        plVar7 = plStack_68 + 1;
        do {
          lVar17 = *plVar7;
          cVar4 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
        }
      }
      return;
    }
    FUN_10a0edfc4(&puStack_88);
  }
LAB_10a5ad308:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a5ad30c);
  (*pcVar5)();
}



/* Entry: 10a5ad36c; end: 10a5ad677;  */

void FUN_10a5ad36c(undefined8 *param_1,long param_2,undefined1 (*param_3) [16],long *param_4)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  undefined1 (*pauVar4) [16];
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  
  if (param_2 == 0) {
    plVar6 = (long *)*param_4;
    if (plVar6 == (long *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    uStack_48 = 0;
    uStack_50 = 0x3f800000;
    fStack_38 = 0.0;
    fStack_34 = 0.0;
    fStack_40 = 1.0;
    fStack_3c = 0.0;
    fStack_30 = 1.0;
  }
  else {
    lVar10 = *(long *)(param_2 + 8);
    if (lVar10 == 0) {
      puVar7 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x30);
    }
    else {
      puVar7 = (undefined8 *)(lVar10 + 0x38);
    }
    auVar16 = *param_3;
    pauVar4 = param_3 + 1;
    fVar14 = (float)*(undefined8 *)*pauVar4;
    fVar13 = *(float *)param_3[2];
    auVar22 = NEON_ext(auVar16,*pauVar4,0xc,1);
    auVar15._0_8_ = puVar7[2];
    auVar15._8_8_ = 0;
    uVar18 = (undefined4)((ulong)*puVar7 >> 0x20);
    auVar21._4_4_ = uVar18;
    auVar21._0_4_ = uVar18;
    auVar21._8_4_ = uVar18;
    auVar21._12_4_ = uVar18;
    auVar23 = NEON_ext(auVar21,auVar15,4,1);
    fVar20 = auVar16._0_4_;
    fVar17 = (float)*puVar7;
    auVar21 = NEON_rev64(*pauVar4,4);
    fVar19 = (float)puVar7[1];
    uStack_48 = CONCAT44(auVar16._12_4_ * auVar23._12_4_ +
                         (float)((ulong)puVar7[1] >> 0x20) * fVar20 +
                         (float)(auVar15._0_8_ >> 0x20) * auVar21._12_4_,
                         auVar22._8_4_ * auVar23._8_4_ + fVar17 * auVar16._8_4_ + fVar19 * fVar13);
    uStack_50 = CONCAT44(auVar22._4_4_ * auVar23._4_4_ + fVar17 * auVar16._4_4_ +
                         fVar19 * auVar21._8_4_,
                         auVar22._0_4_ * auVar23._0_4_ + fVar17 * fVar20 +
                         fVar19 * (float)*(undefined8 *)(param_3[1] + 8));
    auVar21 = *(undefined1 (*) [16])((long)puVar7 + 0x14);
    fStack_40 = fVar14 * (float)auVar15._0_8_ +
                *(float *)((long)puVar7 + 0xc) * *(float *)(*param_3 + 4) +
                auVar21._0_4_ * *(float *)(param_3[1] + 0xc);
    fVar19 = (float)*(undefined8 *)(param_3[1] + 4);
    auVar16 = NEON_ext(auVar21,auVar21,8,1);
    fVar17 = (float)*(undefined8 *)(*param_3 + 8);
    fStack_3c = fVar19 * (float)auVar15._0_8_ + *(float *)((long)puVar7 + 0xc) * fVar17 +
                auVar21._0_4_ * fVar13;
    fStack_38 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20) * auVar21._8_4_ +
                auVar21._4_4_ * fVar20 +
                auVar16._4_4_ * (float)((ulong)*(undefined8 *)(param_3[1] + 4) >> 0x20);
    fStack_34 = *(float *)((long)puVar7 + 0x1c) * fVar14 +
                *(float *)(puVar7 + 3) * *(float *)(*param_3 + 4) +
                *(float *)(puVar7 + 4) * *(float *)(param_3[1] + 0xc);
    fStack_30 = *(float *)((long)puVar7 + 0x1c) * fVar19 + *(float *)(puVar7 + 3) * fVar17 +
                *(float *)(puVar7 + 4) * fVar13;
    if (lVar10 == 0) {
      param_4 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    else {
      param_4 = (long *)(lVar10 + 8);
    }
    plVar6 = (long *)*param_4;
  }
  plStack_58 = (long *)param_4[1];
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_60 = plVar6;
  (**(code **)(*plVar6 + 0x70))();
  if ((int)plVar6 == 2) {
    bVar9 = false;
    puVar7 = &uStack_50;
    puVar11 = &UNK_10e482b00;
    uVar12 = 0;
    do {
      lVar10 = 0;
      do {
        fVar13 = ABS(*(float *)((long)puVar7 + lVar10) - *(float *)(puVar11 + lVar10));
        bVar5 = lVar10 != 8;
        lVar10 = lVar10 + 4;
      } while (fVar13 <= 1.1920929e-07 && bVar5);
      if (1.1920929e-07 < fVar13) break;
      uVar2 = uVar12 + 1;
      bVar9 = 1 < uVar12;
      puVar7 = (undefined8 *)((long)puVar7 + 0xc);
      puVar11 = puVar11 + 0xc;
      uVar12 = uVar2;
    } while (uVar2 != 3);
    if (bVar9) {
      FUN_10a094d88(&plStack_70,&plStack_60,10);
      plVar6 = plStack_58;
      plStack_58 = plStack_68;
      plStack_60 = plStack_70;
      plStack_70 = (long *)0x0;
      plStack_68 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 1;
        do {
          lVar10 = *plVar1;
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar1 = plStack_68 + 1;
        do {
          lVar10 = *plVar1;
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
  }
  puVar7 = (undefined8 *)0x30;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar8 = puVar7 + 3;
  *puVar7 = &PTR_DAT_110ba0c30;
  FUN_10a098148(puVar8,&plStack_60,&uStack_50);
  plVar6 = plStack_58;
  *param_1 = puVar8;
  param_1[1] = puVar7;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 10a5ad678; end: 10a5ad6c3;  */

void FUN_10a5ad678(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a5ce420(lVar1 + 0x670);
    FUN_10a5d2ad8();
    FUN_10a5e8b68(lVar1 + 0xb8);
    FUN_10a5e8d14(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a5ad6c4; end: 10a5ad6cf;  */

void FUN_10a5ad6c4(long param_1,char param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  lVar2 = *(long *)(param_1 + 0x108);
  if (param_2 == '\x02') {
    if (*(char *)(lVar2 + 0xe2d) != '\x02') {
      FUN_10a3dd9ac(&uStack_48,lVar2);
      FUN_10a77281c(uStack_48);
      if (cStack_38 == '\x01') {
        __ZNSt3__15mutex6unlockEv(uStack_40);
      }
      lVar1 = lVar2 + 0xd48;
      FUN_10a5aeb74(lVar1,&PTR_DAT_110bbbb40);
      for (lVar3 = *(long *)(lVar1 + 8); lVar3 != lVar1; lVar3 = *(long *)(lVar3 + 8)) {
        (**(code **)**(undefined8 **)(lVar3 + 0x28))();
      }
    }
  }
  else if (*(char *)(lVar2 + 0xe2d) == '\x02') {
    FUN_10a3dd9ac(&uStack_48,lVar2);
    FUN_10a772878(uStack_48);
    if (cStack_38 == '\x01') {
      __ZNSt3__15mutex6unlockEv(uStack_40);
    }
    lVar1 = lVar2 + 0xd48;
    FUN_10a5aeb74(lVar1,&PTR_DAT_110bbbb40);
    for (lVar3 = *(long *)(lVar1 + 8); lVar3 != lVar1; lVar3 = *(long *)(lVar3 + 8)) {
      (**(code **)(**(long **)(lVar3 + 0x28) + 8))();
    }
  }
  *(char *)(lVar2 + 0xe2d) = param_2;
  return;
}



/* Entry: 10a5ad6d0; end: 10a5ad827;  */

void FUN_10a5ad6d0(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  if (*(byte *)(param_1 + 0x155) != param_2) {
    *(char *)(param_1 + 0x155) = (char)param_2;
    if (param_2 == 0) {
      FUN_10a3dce84(*(undefined8 *)(param_1 + 0x108));
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x1f0);
      lVar6 = *(long *)(*(long *)(param_1 + 0x108) + 0x830);
      plStack_28 = *(long **)(lVar6 + 0x20);
      uStack_30 = *(undefined8 *)(lVar6 + 0x18);
      if (*(long *)(lVar6 + 0x20) != 0) {
        plVar1 = (long *)(*(long *)(lVar6 + 0x20) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10ad49974(uVar5,&uStack_30,&uStack_30);
      plVar1 = plStack_28;
      if (plStack_28 != (long *)0x0) {
        plVar2 = plStack_28 + 1;
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
          (**(code **)(*plStack_28 + 0x10))(plStack_28);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      FUN_10a5a398c(param_1,1);
    }
    else {
      FUN_10a3dce20();
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x1f0);
      lVar6 = *(long *)(*(long *)(param_1 + 0x108) + 0x830);
      plStack_28 = *(long **)(lVar6 + 0x20);
      uStack_30 = *(undefined8 *)(lVar6 + 0x18);
      if (*(long *)(lVar6 + 0x20) != 0) {
        plVar1 = (long *)(*(long *)(lVar6 + 0x20) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      func_0x00010ad49ddc(uVar5,&uStack_30);
      plVar1 = plStack_28;
      if (plStack_28 != (long *)0x0) {
        plVar2 = plStack_28 + 1;
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
          (**(code **)(*plStack_28 + 0x10))(plStack_28);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
    }
  }
  return;
}



/* Entry: 10a5ad828; end: 10a5ad8fb;  */

bool FUN_10a5ad828(long param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  long lVar7;
  
  if ((*(byte *)(param_1 + 0x155) & 1) != 0) {
    return false;
  }
  plVar4 = *(long **)(*(long *)(param_1 + 0xf8) + 0x1c8);
  (**(code **)(*plVar4 + 0xf0))();
  plVar5 = (long *)plVar4[1];
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if ((plVar5 != (long *)0x0) && (*plVar4 != 0)) {
      bVar3 = *(int *)(*(long *)(*plVar4 + 0x78) + 4) != 0;
      goto LAB_10a5ad8bc;
    }
  }
  ppuVar6 = &PTR_PTR_1133029b0;
  FUN_10ae079a0(0,&PTR_PTR_1133029b0);
  FUN_10ae07cd4(ppuVar6,&PTR_PTR_1133029b0);
  bVar3 = false;
  if (plVar5 == (long *)0x0) {
    return false;
  }
LAB_10a5ad8bc:
  plVar4 = plVar5 + 1;
  do {
    lVar7 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar7 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  return bVar3;
}



/* Entry: 10a5ad8fc; end: 10a5adb1f;  */

ulong FUN_10a5ad8fc(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined1 **ppuVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  undefined1 *puStack_80;
  ulong uStack_78;
  byte bStack_69;
  long lStack_68;
  long *plStack_60;
  undefined1 uStack_51;
  
  uVar11 = *(ulong *)(*(long *)(param_1 + 0xf8) + 0x268);
  plVar7 = param_2;
  FUN_10a3c9efc();
  lVar10 = *plVar7;
  plVar7 = (long *)plVar7[1];
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uVar12 = param_2[4];
  if (-1 < (char)*(byte *)((long)param_2 + 0x2f)) {
    uVar12 = (ulong)*(byte *)((long)param_2 + 0x2f);
  }
  lStack_68 = lVar10;
  plStack_60 = plVar7;
  FUN_10a003c90(&puStack_80,uVar12 + 1,&uStack_51);
  ppuVar8 = (undefined1 **)puStack_80;
  if (-1 < (char)bStack_69) {
    ppuVar8 = &puStack_80;
  }
  if (uVar12 != 0) {
    plVar9 = (long *)param_2[3];
    if (-1 < *(char *)((long)param_2 + 0x2f)) {
      plVar9 = param_2 + 3;
    }
    _memmove(ppuVar8,plVar9,uVar12);
  }
  *(undefined2 *)((long)ppuVar8 + uVar12) = 0x2f;
  lVar14 = *(long *)(param_1 + 0xf8);
  uVar13 = (uint)(char)bStack_69;
  if (-1 < (int)uVar13) {
    uStack_78 = (ulong)bStack_69;
  }
  bVar3 = *(byte *)(lVar14 + 0x237);
  uVar12 = *(ulong *)(lVar14 + 0x228);
  if (-1 < (char)bVar3) {
    uVar12 = (ulong)bVar3;
  }
  if (uStack_78 == uVar12) {
    ppuVar8 = (undefined1 **)puStack_80;
    if (-1 < (int)uVar13) {
      ppuVar8 = &puStack_80;
    }
    lVar2 = *(long *)(lVar14 + 0x220);
    if (-1 < (char)bVar3) {
      lVar2 = lVar14 + 0x220;
    }
    _memcmp(ppuVar8,lVar2);
    if ((int)ppuVar8 == 0) {
      bVar3 = *(byte *)((long)param_2 + 0x17);
      uVar12 = param_2[1];
      if (-1 < (char)bVar3) {
        uVar12 = (ulong)bVar3;
      }
      bVar4 = *(byte *)(lVar14 + 0x21f);
      uVar1 = *(ulong *)(lVar14 + 0x210);
      if (-1 < (char)bVar4) {
        uVar1 = (ulong)bVar4;
      }
      if (uVar12 == uVar1) {
        plVar9 = (long *)*param_2;
        if (-1 < (char)bVar3) {
          plVar9 = param_2;
        }
        lVar2 = *(long *)(lVar14 + 0x208);
        if (-1 < (char)bVar4) {
          lVar2 = lVar14 + 0x208;
        }
        _memcmp(plVar9,lVar2);
        if ((int)plVar9 == 0) {
          uVar12 = (ulong)(uVar11 == 0 && lVar10 == 0);
          if ((uVar11 != 0) && (lVar10 != 0)) {
            func_0x0001098e2128(uVar11,lVar10);
            uVar13 = (uint)bStack_69;
            uVar12 = uVar11;
          }
          goto LAB_10a5ada68;
        }
      }
    }
  }
  uVar12 = 0;
LAB_10a5ada68:
  if ((uVar13 >> 7 & 1) != 0) {
    __ZdlPv(puStack_80);
  }
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 1;
    do {
      lVar10 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return uVar12;
}



/* Entry: 10a5adb20; end: 10a5adb77;  */

void FUN_10a5adb20(long param_1,long param_2)

{
  FUN_10ad67034(param_1);
  *(undefined8 *)(param_1 + 0x48c) = 0;
  *(undefined8 *)(param_1 + 0x484) = 0;
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x480) = 0;
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x438) = 0;
  if (*(long *)(*(long *)(param_2 + 0xf8) + 0x250) != 0) {
    FUN_10ad67524(param_1);
  }
  return;
}



/* Entry: 10a5adb78; end: 10a5adbfb;  */

undefined1  [16] FUN_10a5adb78(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xb;
  auVar1._0_8_ = &UNK_10f63f2b4;
  return auVar1;
}



/* Entry: 10a5adbfc; end: 10a5adf03;  */

void FUN_10a5adbfc(ulong param_1)

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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f63f2b4,0xb);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bf8190;
  pppuVar2 = (undefined8 ***)&UNK_10f66429f;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bf8190;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f665b09,FUN_10a5ce630,FUN_10a5ce6ec);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f665b25,FUN_10a5ce8fc,FUN_10a5ce9b8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f665b3a,FUN_10a5cea9c,FUN_10a5ceb58);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f665b4f,FUN_10a5cec3c,FUN_10a5cecf8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f665b68,FUN_10a5ceddc,FUN_10a5cee94);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f63f2b4,0xb);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a5adee8);
  (*pcVar6)();
}



/* Entry: 10a5adf04; end: 10a5ae057;  */

void FUN_10a5adf04(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f665b81;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x200000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_4c._4_4_,
                uStack_78 & 0xffffffff,uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f665b9d;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a5ae058(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f665baf;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a5ae058();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f665bc4;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a5ae058();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a5ae058; end: 10a5ae0ff;  */

undefined8 * FUN_10a5ae058(undefined8 *param_1,undefined8 *param_2,char param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5ae100);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)(int)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a5ae100; end: 10a5ae1ff;  */

void FUN_10a5ae100(undefined8 param_1)

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
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f665bd5;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x200000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a5ae200(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f665bea;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_99 = 0;
  FUN_10a5ae258(param_1,&puStack_98,&uStack_99);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f665bfe;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_99 = 1;
  FUN_10a5ae258(param_1,&puStack_98,&uStack_99);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a5ae200; end: 10a5ae257;  */

ulong FUN_10a5ae200(ulong param_1,undefined8 *param_2)

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



/* Entry: 10a5ae258; end: 10a5ae2af;  */

ulong FUN_10a5ae258(ulong param_1,undefined8 *param_2,char *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a5cef54(param_1,*param_2,(long)*param_3);
  }
  return param_1;
}



/* Entry: 10a5ae2b0; end: 10a5ae3af;  */

void FUN_10a5ae2b0(undefined8 param_1)

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
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f665c12;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x200000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a5ae3b0(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f665c27;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_99 = 0;
  FUN_10a5ae408(param_1,&puStack_98,&uStack_99);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f665c3c;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_99 = 1;
  FUN_10a5ae408(param_1,&puStack_98,&uStack_99);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a5ae3b0; end: 10a5ae407;  */

ulong FUN_10a5ae3b0(ulong param_1,undefined8 *param_2)

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



/* Entry: 10a5ae408; end: 10a5ae45f;  */

ulong FUN_10a5ae408(ulong param_1,undefined8 *param_2,char *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010a5cefc8(param_1,*param_2,(long)*param_3);
  }
  return param_1;
}



/* Entry: 10a5ae460; end: 10a5ae55f;  */

void FUN_10a5ae460(undefined8 param_1)

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
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f665c51;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x200000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a5ae560(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f665c6a;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_99 = 0;
  FUN_10a5ae5b8(param_1,&puStack_98,&uStack_99);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f665c78;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_99 = 1;
  FUN_10a5ae5b8(param_1,&puStack_98,&uStack_99);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a5ae560; end: 10a5ae5b7;  */

ulong FUN_10a5ae560(ulong param_1,undefined8 *param_2)

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



/* Entry: 10a5ae5b8; end: 10a5ae60f;  */

ulong FUN_10a5ae5b8(ulong param_1,undefined8 *param_2,char *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010a5cf03c(param_1,*param_2,(long)*param_3);
  }
  return param_1;
}



/* Entry: 10a5ae610; end: 10a5ae6cb;  */

undefined8 * FUN_10a5ae610(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_110bf73c8;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110bf7430;
  *(undefined4 *)((long)param_1 + 0x21) = 0;
  *(undefined1 *)((long)param_1 + 0x25) = 0;
  puVar1 = (undefined8 *)0x78;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110bf7f78;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0x3f800000;
  param_1[5] = puVar1 + 3;
  param_1[6] = puVar1;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  return param_1;
}



/* Entry: 10a5ae6cc; end: 10a5ae7af;  */

undefined8 * FUN_10a5ae6cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf73c8;
  param_1[3] = &PTR_DAT_110bf7430;
  FUN_10a5cf0b0(param_1 + 5);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a5ae7b0; end: 10a5ae7b7;  */

void FUN_10a5ae7b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -3;
  *puVar1 = &PTR_FUN_110bf73c8;
  *param_1 = &PTR_DAT_110bf7430;
  FUN_10a5cf0b0(param_1 + 2);
  *puVar1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 10a5ae7b8; end: 10a5ae877;  */

void FUN_10a5ae7b8(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bf7468,0);
  *(char *)(param_1 + 0x21) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bf7488,0);
  *(char *)(param_1 + 0x22) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bf74a8,0);
  *(char *)(param_1 + 0x23) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bf74c8,0);
  *(char *)(param_1 + 0x24) = (char)plVar1;
  (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110bf74e8,0);
  *(int *)(param_1 + 0x3c) = (int)param_2;
  return;
}



/* Entry: 10a5ae878; end: 10a5ae87f;  */

void FUN_10a5ae878(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bf7468,0);
  *(char *)(param_1 + 9) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bf7488,0);
  *(char *)(param_1 + 10) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bf74a8,0);
  *(char *)(param_1 + 0xb) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bf74c8,0);
  *(char *)(param_1 + 0xc) = (char)plVar1;
  (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110bf74e8,0);
  *(int *)(param_1 + 0x24) = (int)param_2;
  return;
}



/* Entry: 10a5ae880; end: 10a5ae927;  */

void FUN_10a5ae880(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bf7468,(long)*(char *)(param_1 + 0x21));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bf7488,(long)*(char *)(param_1 + 0x22));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bf74a8,(long)*(char *)(param_1 + 0x23));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bf74c8,(long)*(char *)(param_1 + 0x24));
                    /* WARNING: Could not recover jumptable at 0x00010a5ae924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110bf74e8,*(undefined4 *)(param_1 + 0x3c));
  return;
}



/* Entry: 10a5ae928; end: 10a5ae92f;  */

void FUN_10a5ae928(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bf7468,(long)*(char *)(param_1 + 9));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bf7488,(long)*(char *)(param_1 + 10));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bf74a8,(long)*(char *)(param_1 + 0xb));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bf74c8,(long)*(char *)(param_1 + 0xc));
                    /* WARNING: Could not recover jumptable at 0x00010a5ae924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110bf74e8,*(undefined4 *)(param_1 + 0x24));
  return;
}



/* Entry: 10a5ae930; end: 10a5ae997;  */

void FUN_10a5ae930(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  if (*(char *)((long)param_1 + 0x3c) == '\x01') {
    FUN_10a3cf620(param_1[6],(int)param_1[7],param_1);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  else {
    if (*(char *)((long)param_1 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *param_1;
    plVar2 = (long *)param_1[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  return;
}



/* Entry: 10a5ae998; end: 10a5aea7b;  */

void FUN_10a5ae998(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    *(undefined8 *)(param_1 + 0x30) = param_3;
    lStack_28 = *(long *)(param_1 + 0x18);
    uStack_30 = *(undefined8 *)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(param_3,&uStack_30,param_2);
    if (lStack_28 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)param_3 != 0) {
      *(int *)(param_1 + 0x38) = (int)param_3;
      *(undefined1 *)(param_1 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a5aea7c; end: 10a5aeb3f;  */

void FUN_10a5aea7c(long *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lStack_48;
  undefined1 uStack_39;
  long *plStack_38;
  
  if (param_1[4] == 0) {
    plStack_38 = &lStack_48;
    param_3 = param_3 + 0xd48;
    lStack_48 = param_2;
    FUN_10a5cf2ac(param_3,&lStack_48,&UNK_10dd5b8f9,&plStack_38,&uStack_39);
    plVar1 = (long *)(param_3 + 0x18);
    lVar2 = *plVar1;
    *plVar1 = (long)param_1;
    *(long **)(lVar2 + 8) = param_1;
    *param_1 = lVar2;
    param_1[1] = (long)plVar1;
    param_1[4] = param_2;
    param_1[5] = param_4;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    *(undefined1 *)((long)param_1 + 0x3c) = 2;
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665d39,0x89,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a5aeb40; end: 10a5aeb73;  */

void FUN_10a5aeb40(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  while (puVar1 != param_1) {
    puVar2 = (undefined8 *)puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined1 *)((long)puVar1 + 0x3c) = 0;
    puVar1 = puVar2;
  }
  *param_1 = param_1;
  param_1[1] = param_1;
  return;
}



/* Entry: 10a5aeb74; end: 10a5aec1f;  */

long FUN_10a5aeb74(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10a5cf77c(param_1,&uStack_18);
  if ((bRam0000000113835400 & 1) == 0) {
    iVar2 = 0x13835400;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uRam00000001138353f0 = 0x1138353f0;
      uRam00000001138353f8 = 0x1138353f0;
      ___cxa_atexit(FUN_10a5aeb40,0x1138353f0,0x100000000);
      ___cxa_guard_release(0x113835400);
    }
  }
  lVar1 = 0x1138353f0;
  if (param_1 != 0) {
    lVar1 = param_1 + 0x18;
  }
  return lVar1;
}



/* Entry: 10a5aec20; end: 10a5aecb7;  */

undefined1  [16] FUN_10a5aec20(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10f666e8c;
  return auVar1;
}



/* Entry: 10a5aecb8; end: 10a5aefe3;  */

void FUN_10a5aecb8(ulong param_1)

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
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f666e8c,0x17);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bf8178;
  pppuVar2 = (undefined8 ***)&UNK_10f66429f;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0x13c;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bf8178;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5aefc4;
    FUN_10a054dac(param_1,"start",FUN_10a5cf870,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5aefc4;
    FUN_10a054dac(param_1,&UNK_10f665da0,FUN_10a5cfab0,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5aefc4;
    FUN_10a054dac(param_1,&DAT_10f684680,FUN_10a5cfc74,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a5aefc4;
    FUN_10a054dac(param_1,&UNK_10f665db8,FUN_10a5cfd28,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f665dc7,FUN_10a5d0434,FUN_10a5d053c);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f666e8c,0x17);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a5aefc4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a5aefc8);
  (*pcVar6)();
}



/* Entry: 10a5aefe4; end: 10a5af087;  */

undefined8 * FUN_10a5aefe4(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uStack_31;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110bf7518;
  param_1[2] = 0;
  param_1[3] = param_2;
  FUN_10a05a5d4(param_1 + 4,&uStack_31);
  param_1[7] = 0;
  param_1[6] = param_1 + 7;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = param_1 + 10;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0x3c;
  return param_1;
}



/* Entry: 10a5af088; end: 10a5af0f3;  */

undefined8 * FUN_10a5af088(undefined8 *param_1)

{
  FUN_10a5af0f4();
  func_0x00010a07a8a8(param_1 + 0xe);
  func_0x00010a07a8a8(param_1 + 0xc);
  func_0x00010a2aaee8(param_1 + 9,param_1[10]);
  FUN_10a5d05fc(param_1 + 6,param_1[7]);
  func_0x00010a05a86c(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a5af0f4; end: 10a5af3fb;  */

undefined8 * FUN_10a5af0f4(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long alStack_128 [7];
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined1 auStack_98 [56];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10a3bf120(&uStack_138);
    lVar7 = *(long *)(param_1[3] + 0x100);
    plVar5 = (long *)0x138;
    __Znwm();
    uStack_a8 = uStack_138;
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110b9f3b0;
    uStack_138 = 0;
    plStack_a0 = (long *)uStack_130;
    (**(code **)(alStack_128[0] + 0x10))(auStack_98,alStack_128);
    uStack_60 = uStack_f0;
    uVar2 = *(ulong *)(lVar7 + 0x210);
    lVar6 = *(long *)(lVar7 + 0x208);
    if (-1 < (char)*(byte *)(lVar7 + 0x21f)) {
      uVar2 = (ulong)*(byte *)(lVar7 + 0x21f);
      lVar6 = lVar7 + 0x208;
    }
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    pcStack_e8 = FUN_10a282dc4;
    ppuStack_e0 = &PTR_DAT_110ae9180;
    FUN_10a23708c(plVar5 + 3,&UNK_10f665f08,0xf,"POST",4,&uStack_a8,4,in_x7,lVar6,uVar2,&pcStack_e8)
    ;
    (*(code *)*ppuStack_e0)(&ppuStack_e0);
    FUN_10a042634(&uStack_a8);
    uStack_a8 = 0;
    plStack_a0 = (long *)0x0;
    plStack_150 = plVar5 + 3;
    plStack_148 = plVar5;
    FUN_10a5afaac(param_1 + 0xc,&uStack_a8);
    plVar5 = plStack_a0;
    if (plStack_a0 != (long *)0x0) {
      plVar1 = plStack_a0 + 1;
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
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    uStack_a8 = 0;
    plStack_a0 = (long *)0x0;
    FUN_10a5afaac(param_1 + 0xe,&uStack_a8);
    plVar5 = plStack_a0;
    if (plStack_a0 != (long *)0x0) {
      plVar1 = plStack_a0 + 1;
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
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = plStack_148;
    *(undefined1 *)(param_1 + 0x10) = 0;
    plStack_158 = plStack_148;
    plStack_160 = plStack_150;
    if (plStack_148 != (long *)0x0) {
      plVar1 = plStack_148 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a5afb10(*(undefined8 *)(*(long *)(param_1[3] + 0x100) + 0x1c8),&plStack_160);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = plStack_148;
    if (plStack_148 != (long *)0x0) {
      plVar1 = plStack_148 + 1;
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
        (**(code **)(*plStack_148 + 0x10))(plStack_148);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    param_1 = &uStack_138;
    FUN_10a042634();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_10a05bd88(&plStack_160);
    FUN_10a05bd88(&plStack_150);
    FUN_10a042634(&uStack_138);
    __Unwind_Resume();
    FUN_10a5af0f4();
    func_0x00010a07a8a8(param_1 + 0xe);
    func_0x00010a07a8a8(param_1 + 0xc);
    func_0x00010a2aaee8(param_1 + 9,param_1[10]);
    FUN_10a5d05fc(param_1 + 6,param_1[7]);
    func_0x00010a05a86c(param_1 + 4);
    *param_1 = &PTR_DAT_110b17898;
    func_0x00010a004dac(param_1 + 1);
    return param_1;
  }
  return param_1;
}



/* Entry: 10a5af3fc; end: 10a5af3ff;  */

undefined8 * FUN_10a5af3fc(undefined8 *param_1)

{
  FUN_10a5af0f4();
  func_0x00010a07a8a8(param_1 + 0xe);
  func_0x00010a07a8a8(param_1 + 0xc);
  func_0x00010a2aaee8(param_1 + 9,param_1[10]);
  FUN_10a5d05fc(param_1 + 6,param_1[7]);
  func_0x00010a05a86c(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a5af400; end: 10a5af413;  */

void FUN_10a5af400(void)

{
  FUN_10a5af088();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5af414; end: 10a5afaab;  */

/* WARNING: Removing unreachable block (ram,0x00010a5af658) */

undefined *** FUN_10a5af414(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined *****pppppuVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined ******ppppppuVar7;
  long *plVar8;
  long *plVar9;
  long ****pppplVar10;
  undefined ***pppuVar11;
  long *****ppppplVar12;
  undefined8 in_x7;
  long ***ppplVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  long *plVar16;
  long lVar17;
  long ****pppplVar18;
  long ***ppplStack_2d8;
  long *plStack_2d0;
  undefined8 auStack_2c8 [2];
  char cStack_2b1;
  long ***ppplStack_2b0;
  long *plStack_2a8;
  long ****pppplStack_2a0;
  ulong uStack_298;
  byte bStack_289;
  undefined7 uStack_288;
  undefined1 uStack_281;
  undefined7 uStack_280;
  undefined1 uStack_279;
  undefined7 uStack_278;
  char cStack_271;
  undefined7 uStack_270;
  undefined1 uStack_269;
  undefined7 uStack_268;
  undefined1 uStack_261;
  undefined8 uStack_260;
  undefined *****pppppuStack_258;
  long ****pppplStack_250;
  undefined7 uStack_248;
  char cStack_241;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined **ppuStack_200;
  long lStack_1f8;
  undefined *****pppppuStack_1c8;
  long ****pppplStack_1c0;
  undefined1 auStack_1b8 [56];
  undefined8 uStack_180;
  char cStack_169;
  undefined **appuStack_158 [19];
  undefined *****pppppuStack_c0;
  long ****pppplStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a5afc68(param_1 + 0x60,param_3);
  FUN_10a5afc68(param_1 + 0x70,param_4);
  pcStack_208 = FUN_10a5d0644;
  ppuStack_200 = &PTR_FUN_110bf8008;
  uStack_288 = 0;
  uStack_281 = 0;
  uStack_280 = 0;
  uStack_279 = 0;
  uStack_278 = 0;
  cStack_271 = '\0';
  lStack_1f8 = param_1;
  if (*param_2 == param_2[1]) {
    cStack_271 = '\x0f';
    uStack_288 = 0x7865746e6f633f;
    uStack_281 = 0x74;
    uStack_280 = 0x79687069673d73;
    goto LAB_10a5af670;
  }
  func_0x000107c2b054(&pppplStack_2a0,&DAT_10f68e8ee);
  FUN_109fed7e0(&pppppuStack_1c8);
  lVar17 = *param_2;
  lVar4 = param_2[1];
  pppppuStack_258 = (undefined *****)&pppppuStack_1c8;
  pppplStack_250 = pppplStack_2a0;
  if (-1 < (char)bStack_289) {
    pppplStack_250 = (long ****)&pppplStack_2a0;
  }
  for (; lVar17 != lVar4; lVar17 = lVar17 + 0x18) {
    FUN_10a5bdf1c(&pppppuStack_258,lVar17);
  }
  func_0x00010a002480(&pppppuStack_258,&pppplStack_1c0,&ppplStack_2b0);
  if ((long)cStack_241 < 0) {
    ppppplVar12 = (long *****)pppplStack_250;
    if ((long *****)pppplStack_250 == (long *****)0x0) goto LAB_10a5af57c;
LAB_10a5af510:
    uVar2 = uStack_298;
    if (-1 < (char)bStack_289) {
      uVar2 = (ulong)bStack_289;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (&pppppuStack_c0,&pppppuStack_258,0,(long)ppppplVar12 - uVar2,&ppplStack_2b0);
    if (cStack_241 < '\0') {
      __ZdlPv(pppppuStack_258);
    }
  }
  else {
    ppppplVar12 = (long *****)(long)cStack_241;
    if (cStack_241 != '\0') goto LAB_10a5af510;
LAB_10a5af57c:
    pppplStack_b8 = pppplStack_250;
    pppppuStack_c0 = pppppuStack_258;
  }
  appuStack_158[0] = &PTR_DAT_11088d708;
  pppppuStack_1c8 = (undefined *****)&PTR_DAT_11088d6e0;
  pppplStack_1c0 = (long ****)&PTR_DAT_11088d7b0;
  if (cStack_169 < '\0') {
    __ZdlPv(uStack_180);
  }
  pppplStack_1c0 =
       (long ****)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_1b8);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&pppppuStack_1c8,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_158);
  ppppppuVar7 = &pppppuStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (ppppppuVar7,0,&UNK_10f665df4,10);
  pppppuVar3 = *ppppppuVar7;
  uStack_270 = SUB87(ppppppuVar7[1],0);
  uStack_269 = (undefined1)*(undefined8 *)((long)ppppppuVar7 + 0xf);
  uStack_268 = (undefined7)((ulong)*(undefined8 *)((long)ppppppuVar7 + 0xf) >> 8);
  cVar5 = *(char *)((long)ppppppuVar7 + 0x17);
  ppppppuVar7[1] = (undefined *****)0x0;
  ppppppuVar7[2] = (undefined *****)0x0;
  *ppppppuVar7 = (undefined *****)0x0;
  if (cStack_271 < '\0') {
    __ZdlPv(CONCAT17(uStack_281,uStack_288));
  }
  uStack_288 = SUB87(pppppuVar3,0);
  uStack_281 = (undefined1)((ulong)pppppuVar3 >> 0x38);
  uStack_280 = uStack_270;
  uStack_279 = uStack_269;
  uStack_278 = uStack_268;
  cStack_271 = cVar5;
  if ((char)bStack_289 < '\0') {
    __ZdlPv(pppplStack_2a0);
  }
LAB_10a5af670:
  FUN_10a3bf120(&pppppuStack_258);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&pppplStack_2a0,&UNK_10f665dff,&uStack_288);
  lVar17 = *(long *)(*(long *)(param_1 + 0x18) + 0x100);
  FUN_10a00ce20(&uStack_270,*(undefined8 *)(param_1 + 0x20),&pcStack_208);
  plVar8 = (long *)0x138;
  __Znwm();
  pppppuStack_1c8 = pppppuStack_258;
  plVar16 = plVar8 + 1;
  *plVar16 = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_110b9f3b0;
  pppplVar18 = (long ****)(plVar8 + 3);
  ppppplVar12 = (long *****)pppplStack_2a0;
  if (-1 < (char)bStack_289) {
    uStack_298 = (ulong)bStack_289;
    ppppplVar12 = &pppplStack_2a0;
  }
  pppppuStack_258 = (undefined *****)0x0;
  pppplStack_1c0 = pppplStack_250;
  (**(code **)(CONCAT17(cStack_241,uStack_248) + 0x10))(auStack_1b8,&uStack_248);
  uStack_180 = uStack_210;
  uVar2 = *(ulong *)(lVar17 + 0x210);
  lVar4 = *(long *)(lVar17 + 0x208);
  if (-1 < (char)*(byte *)(lVar17 + 0x21f)) {
    uVar2 = (ulong)*(byte *)(lVar17 + 0x21f);
    lVar4 = lVar17 + 0x208;
  }
  pppppuStack_c0 = (undefined *****)0x10a05c39c;
  pppplStack_b8 = (long ****)&PTR_FUN_110b9f370;
  uStack_b0 = CONCAT17(uStack_269,uStack_270);
  uStack_a8 = CONCAT17(uStack_261,uStack_268);
  uStack_a0 = uStack_260;
  uStack_268 = 0;
  uStack_261 = 0;
  uStack_260 = 0;
  FUN_10a23708c(pppplVar18,ppppplVar12,uStack_298,"POST",4,&pppppuStack_1c8,4,in_x7,lVar4,uVar2,
                &pppppuStack_c0);
  (*(code *)*pppplStack_b8)(&pppplStack_b8);
  FUN_10a042634(&pppppuStack_1c8);
  ppplStack_2b0 = (long ***)pppplVar18;
  plStack_2a8 = plVar8;
  func_0x00010a05c07c(&uStack_270);
  if ((char)bStack_289 < '\0') {
    __ZdlPv(pppplStack_2a0);
  }
  plVar9 = *(long **)(*(long *)(*(long *)(param_1 + 0x18) + 0x100) + 0x1c8);
  (**(code **)(*plVar9 + 0x60))();
  pppppuStack_1c8 = (undefined *****)0x0;
  pppplStack_1c0 = (long ****)0x0;
  pppplVar10 = (long ****)plVar9[1];
  if (((pppplVar10 == (long ****)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), pppplStack_1c0 = pppplVar10,
      pppplVar10 == (long ****)0x0)) ||
     (pppppuStack_1c8 = (undefined *****)*plVar9, pppppuStack_1c8 == (undefined *****)0x0)) {
    pppplVar18 = pppplStack_1c0;
    if ((bRam000000011330a9e8 & 1) != 0) {
      ppppplVar12 = (long *****)0x1;
      func_0x00010ae06f08(0,1,&UNK_10f665e10,&UNK_10f665e69,0x40,&UNK_10f66488a);
    }
  }
  else {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = *plVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    ppppplVar12 = (long *****)&ppplStack_2d8;
    ppplStack_2d8 = (long ***)pppplVar18;
    plStack_2d0 = plVar8;
    (*(code *)(*pppppuStack_1c8)[2])(auStack_2c8);
    if (cStack_2b1 < '\0') {
      __ZdlPv(auStack_2c8[0]);
    }
    plVar8 = plStack_2d0;
    if (plStack_2d0 != (long *)0x0) {
      plVar16 = plStack_2d0 + 1;
      do {
        lVar17 = *plVar16;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *plVar16 = lVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_2d0 + 0x10))(plStack_2d0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    *(undefined1 *)(param_1 + 0x80) = 1;
    pppplVar18 = pppplStack_1c0;
  }
  if (pppplVar18 != (long ****)0x0) {
    pppplVar10 = pppplVar18 + 1;
    do {
      ppplVar13 = *pppplVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppplVar10,0x10);
      if (bVar6) {
        *pppplVar10 = (long ***)((long)ppplVar13 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppplVar13 == (long ***)0x0) {
      (*(code *)(*pppplVar18)[2])(pppplVar18);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar18);
    }
  }
  plVar8 = plStack_2a8;
  if (plStack_2a8 != (long *)0x0) {
    plVar16 = plStack_2a8 + 1;
    do {
      lVar17 = *plVar16;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_2a8 + 0x10))(plStack_2a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  FUN_10a042634(&pppppuStack_258);
  if (cStack_271 < '\0') {
    __ZdlPv(CONCAT17(uStack_281,uStack_288));
  }
  pppuVar11 = &ppuStack_200;
  (*(code *)*ppuStack_200)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return pppuVar11;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&ppplStack_2d8);
  func_0x00010a05a8c4(&pppppuStack_1c8);
  FUN_10a05bd88(&ppplStack_2b0);
  FUN_10a042634(&pppppuStack_258);
  if (cStack_271 < '\0') {
    __ZdlPv(CONCAT17(uStack_281,uStack_288));
  }
  (*(code *)*ppuStack_200)(&ppuStack_200);
  __Unwind_Resume();
  pppplVar10 = ppppplVar12[1];
  pppplVar18 = *ppppplVar12;
  *ppppplVar12 = (long ****)0x0;
  ppppplVar12[1] = (long ****)0x0;
  ppuVar15 = pppuVar11[1];
  pppuVar11[1] = (undefined **)pppplVar10;
  *pppuVar11 = (undefined **)pppplVar18;
  if (ppuVar15 != (undefined **)0x0) {
    ppuVar1 = ppuVar15 + 1;
    do {
      puVar14 = *ppuVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar6) {
        *ppuVar1 = puVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar14 == (undefined *)0x0) {
      (**(code **)(*ppuVar15 + 0x10))(ppuVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar15);
    }
  }
  return pppuVar11;
}



/* Entry: 10a5afaac; end: 10a5afb0f;  */

undefined8 * FUN_10a5afaac(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a5afb10; end: 10a5afc67;  */

void FUN_10a5afb10(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 *puStack_30;
  long *plStack_28;
  
  (**(code **)(*param_1 + 0x60))();
  puStack_30 = (undefined8 *)0x0;
  plStack_28 = (long *)0x0;
  plVar4 = (long *)param_1[1];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_28 = plVar4;
    if (plVar4 != (long *)0x0) {
      puStack_30 = (undefined8 *)*param_1;
      if (puStack_30 != (undefined8 *)0x0) {
        plStack_38 = (long *)param_2[1];
        uStack_40 = *param_2;
        if (param_2[1] != 0) {
          plVar4 = (long *)(param_2[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        (**(code **)*puStack_30)(puStack_30,&uStack_40);
        plVar4 = plStack_38;
        if (plStack_38 != (long *)0x0) {
          plVar1 = plStack_38 + 1;
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
            (**(code **)(*plStack_38 + 0x10))(plStack_38);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        goto LAB_10a5afbfc;
      }
    }
  }
  if ((bRam000000011330a9e8 & 1) != 0) {
    func_0x00010ae06f08(0,1,&UNK_10f665e10,&UNK_10f665f6a,0xbd,&UNK_10f66488a);
  }
LAB_10a5afbfc:
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
  return;
}



/* Entry: 10a5afc68; end: 10a5afce3;  */

undefined8 * FUN_10a5afc68(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a5afce4; end: 10a5afd9f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a5afce4(undefined **param_1)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  code *******pppppppcVar13;
  undefined **ppuVar14;
  long lVar15;
  code *******pppppppcVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  int extraout_w8;
  undefined *extraout_x8;
  code ******extraout_x8_00;
  undefined *puVar19;
  code *******pppppppcVar20;
  code *****pppppcVar21;
  code *****pppppcVar22;
  long lVar23;
  code *******pppppppcVar24;
  long *plVar25;
  code *******pppppppcVar26;
  undefined *puVar27;
  code ******ppppppcVar28;
  long *plVar29;
  code ******ppppppcVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 *puVar33;
  ulong uVar34;
  ulong uVar35;
  undefined8 *puVar36;
  code *******pppppppcStack_700;
  code *******pppppppcStack_6f8;
  undefined8 uStack_6f0;
  undefined1 uStack_6e8;
  code *******pppppppcStack_6d0;
  code *******pppppppcStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined4 uStack_6a8;
  long lStack_6a0;
  code ******ppppppcStack_698;
  code *******pppppppcStack_690;
  code *******pppppppcStack_688;
  undefined8 uStack_680;
  undefined1 uStack_678;
  code *******pppppppcStack_670;
  code *******pppppppcStack_668;
  undefined8 uStack_660;
  undefined1 uStack_658;
  code *******pppppppcStack_650;
  code *******pppppppcStack_648;
  undefined8 uStack_640;
  code *******pppppppcStack_630;
  code *******pppppppcStack_628;
  undefined8 uStack_620;
  code *******pppppppcStack_610;
  code *******pppppppcStack_608;
  undefined8 uStack_600;
  code *******pppppppcStack_5f0;
  code *******pppppppcStack_5e8;
  undefined8 uStack_5e0;
  undefined *puStack_5d8;
  code *******pppppppcStack_5a0;
  code *******pppppppcStack_598;
  code *******pppppppcStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined *puStack_558;
  undefined8 uStack_550;
  undefined **ppuStack_548;
  undefined *puStack_540;
  undefined *puStack_510;
  undefined8 uStack_508;
  undefined **ppuStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4c8;
  undefined8 uStack_4c0;
  undefined **ppuStack_4b8;
  undefined *puStack_4b0;
  undefined1 auStack_490 [16];
  code *******apppppppcStack_480 [2];
  code *******pppppppcStack_470;
  long alStack_468 [129];
  
  if ((*(ushort *)(param_1[1] + 0xd1e) & 1) != 0) {
    FUN_10a5afda0();
    return;
  }
  alStack_468[0x7e] = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar14 = param_1;
  FUN_10ad055a0();
  ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
  if ((int)ppuVar14 != 0) {
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar8 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      ppuVar14 = (undefined **)*ppuVar14;
      if ((ppuVar14 == (undefined **)0x0) ||
         ((**(code **)(*ppuVar14 + 0x18))(), ppuVar14 == (undefined **)0x0)) goto LAB_10a5afe0c;
      ppuVar9 = ppuVar14 + 7;
    }
    else {
      ppuVar9 = (undefined **)(*ppuVar8 + 8);
      ppuVar14 = ppuVar8;
    }
    if (((uint)*(undefined8 *)(*ppuVar9 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_5f0,&UNK_10f66622d);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_6d0,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_6c8 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_6d0 = *(code ********)(lVar23 + 0x208);
        uStack_6c0 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_5e0 < 0) {
        apppppppcStack_480[0] = (code *******)0x10f29b0c6;
        if (pppppppcStack_5e8 != (code *******)0x0) {
          apppppppcStack_480[0] = pppppppcStack_5f0;
        }
      }
      else {
        apppppppcStack_480[0] = (code *******)"null";
        if (uStack_5e0._7_1_ != '\0') {
          apppppppcStack_480[0] = (code *******)&pppppppcStack_5f0;
        }
      }
      if ((long)uStack_6c0 < 0) {
        pppppppcStack_5a0 = (code *******)"null";
        if (pppppppcStack_6c8 != (code *******)0x0) {
          pppppppcStack_5a0 = pppppppcStack_6d0;
        }
      }
      else {
        pppppppcStack_5a0 = (code *******)"null";
        if (uStack_6c0._7_1_ != '\0') {
          pppppppcStack_5a0 = (code *******)&pppppppcStack_6d0;
        }
      }
      FUN_10a224324(apppppppcStack_480,&pppppppcStack_5a0);
      if ((long)uStack_5e0 < 0) {
        if (pppppppcStack_5e8 != (code *******)0x0) {
          func_0x000107c3192c(apppppppcStack_480,pppppppcStack_5f0);
          goto LAB_10a5b3488;
        }
LAB_10a5b2a60:
        uVar17 = 0;
        apppppppcStack_480[0] = (code *******)((ulong)apppppppcStack_480[0] & 0xffffffffffffff00);
      }
      else {
        if (uStack_5e0._7_1_ == '\0') goto LAB_10a5b2a60;
        apppppppcStack_480[1] = pppppppcStack_5e8;
        apppppppcStack_480[0] = pppppppcStack_5f0;
        pppppppcStack_470 = (code *******)uStack_5e0;
LAB_10a5b3488:
        uVar17 = 1;
      }
      alStack_468[0] = CONCAT71(alStack_468[0]._1_7_,uVar17);
      if ((long)uStack_6c0 < 0) {
        if (pppppppcStack_6c8 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_5a0,pppppppcStack_6d0);
          goto LAB_10a5b3998;
        }
LAB_10a5b34b4:
        uVar17 = 0;
        pppppppcStack_5a0 = (code *******)((ulong)pppppppcStack_5a0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_6c0._7_1_ == '\0') goto LAB_10a5b34b4;
        pppppppcStack_598 = pppppppcStack_6c8;
        pppppppcStack_5a0 = pppppppcStack_6d0;
        pppppppcStack_590 = uStack_6c0;
LAB_10a5b3998:
        uVar17 = 1;
      }
      uStack_588 = CONCAT71(uStack_588._1_7_,uVar17);
      FUN_10a234a0c(apppppppcStack_480,&pppppppcStack_5a0);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5afe0c:
  if (*(int *)(*(long *)(param_1[1] + 0xa20) + 0x18) < 0x167) {
    FUN_10a1cc18c(apppppppcStack_480,&UNK_10f666253);
    FUN_10a3e0f90(param_1[1]);
    pppppppcVar20 = (code *******)apppppppcStack_480;
    FUN_10a1d33b4();
    lStack_6a0 = *(long *)(param_1[1] + 0xbd0);
    *(undefined1 *)(lStack_6a0 + 0x124) = 1;
    FUN_10a1bd024();
    ppppppcStack_698 = pppppppcVar20[8];
    FUN_10a1bd024();
    pppppppcVar20[8] = extraout_x8_00;
  }
  else {
    lStack_6a0 = *(long *)(param_1[1] + 0xbd0);
    *(undefined1 *)(lStack_6a0 + 0x124) = 1;
    FUN_10a1bd024();
    ppppppcStack_698 = (code ******)ppuVar14[8];
    FUN_10a1bd024();
    ppuVar14[8] = extraout_x8;
    FUN_10a1cc18c(apppppppcStack_480,&UNK_10f666253);
    FUN_10a463658(*(undefined8 *)(param_1[1] + 0x870));
    FUN_10a3e0f90(param_1[1]);
    FUN_10a1d33b4(apppppppcStack_480);
  }
  FUN_10a1cc18c(apppppppcStack_480,&UNK_10f666269);
  FUN_10a3c3be8(*(undefined8 *)(param_1[1] + 0x858));
  FUN_10a25e2f4(*(undefined8 *)(param_1[1] + 0x8c0));
  iVar6 = (int)apppppppcStack_480;
  FUN_10a1d33b4();
  puVar19 = param_1[1];
  if ((*(ushort *)(puVar19 + 0xd1e) >> 4 & 1) != 0) {
    *(ushort *)(puVar19 + 0xd1e) = *(ushort *)(puVar19 + 0xd1e) & 0xffef;
    *(int *)(puVar19 + 0x780) = *(int *)(puVar19 + 0x780) + 1;
    puStack_4c8 = puVar19 + 0x7a0;
    uStack_4c0 = 0x10a5d1a94;
    ppuStack_4b8 = &PTR_DAT_110bf8090;
    puStack_4b0 = puVar19 + 0x780;
    puVar36 = *(undefined8 **)(puVar19 + 0x7a0);
    if (puVar36 != (undefined8 *)(puVar19 + 0x7a8)) {
      do {
        pppppppcVar26 = (code *******)(puVar36 + 5);
        pppppppcVar20 = (code *******)*pppppppcVar26;
        if (pppppppcVar20 != (code *******)puVar36[6]) {
          lVar23 = 0;
          pppppppcStack_5a0 = (code *******)&pppppppcStack_5a0;
          pppppppcStack_598 = (code *******)&pppppppcStack_5a0;
          do {
            lVar1 = (long)apppppppcStack_480 + lVar23;
            lVar15 = (long)alStack_468 + lVar23 + -8;
            *(long *)lVar1 = lVar1;
            *(long *)((long)apppppppcStack_480 + lVar23 + 8U) = lVar1;
            *(long *)((long)alStack_468 + lVar23 + -8) = lVar15;
            *(long *)((long)alStack_468 + lVar23) = lVar15;
            lVar23 = lVar23 + 0x20;
          } while (lVar23 != 0x400);
          uVar32 = 0;
          if ((pppppppcVar20 != (code *******)0x0) && (pppppppcVar20 != pppppppcVar26)) {
            uVar32 = 0;
            do {
              pppppppcVar24 = (code *******)*pppppppcVar20;
              if (pppppppcVar20 != pppppppcStack_5a0 && pppppppcVar24 != pppppppcStack_5a0) {
                ppppppcVar28 = pppppppcStack_5a0[1];
                ppppppcVar30 = pppppppcVar20[1];
                *ppppppcVar28 = (code *****)pppppppcVar20;
                *pppppppcVar20 = (code ******)pppppppcStack_5a0;
                pppppppcVar20[1] = ppppppcVar28;
                pppppppcStack_5a0[1] = (code ******)pppppppcVar20;
                pppppppcVar24[1] = ppppppcVar30;
                *ppppppcVar30 = (code *****)pppppppcVar24;
              }
              uVar31 = (uint)uVar32;
              if (uVar31 == 0) {
                uVar35 = 0;
              }
              else {
                uVar34 = 0;
                pppppppcVar20 = (code *******)apppppppcStack_480;
                do {
                  uVar35 = uVar34;
                  if ((code *******)*pppppppcVar20 == (code *******)0x0 ||
                      pppppppcVar20 == (code *******)*pppppppcVar20) break;
                  FUN_10a5d1ba4(pppppppcVar20,&pppppppcStack_5a0);
                  uVar34 = uVar34 + 1;
                  func_0x00010a5d1c9c(&pppppppcStack_5a0,pppppppcVar20);
                  pppppppcVar20 = pppppppcVar20 + 2;
                  uVar35 = uVar32;
                } while (uVar32 != uVar34);
              }
              func_0x00010a5d1c9c(&pppppppcStack_5a0,apppppppcStack_480 + (uVar35 & 0xffffffff) * 2)
              ;
              if ((uint)uVar35 == uVar31) {
                uVar31 = uVar31 + 1;
              }
              uVar32 = (ulong)uVar31;
              pppppppcVar20 = (code *******)*pppppppcVar26;
            } while (pppppppcVar20 != (code *******)0x0 && pppppppcVar20 != pppppppcVar26);
            if (1 < uVar31) {
              lVar23 = uVar32 - 1;
              pppppppcVar20 = (code *******)apppppppcStack_480;
              do {
                pppppppcVar20 = pppppppcVar20 + 2;
                FUN_10a5d1ba4(pppppppcVar20);
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
            }
          }
          func_0x00010a5d1c9c(pppppppcVar26,auStack_490 + uVar32 * 0x10);
          lVar23 = 0;
          plVar11 = alStack_468 + 0x7d;
          do {
            plVar25 = plVar11 + -2;
            plVar3 = (long *)*plVar25;
            while (plVar3 != plVar25) {
              plVar29 = (long *)*plVar3;
              *plVar3 = 0;
              plVar3[1] = 0;
              plVar3 = plVar29;
            }
            *plVar25 = 0;
            plVar11[-1] = 0;
            lVar23 = lVar23 + 1;
            plVar11 = plVar25;
            pppppppcVar20 = pppppppcStack_5a0;
          } while (lVar23 != 0x40);
          while ((code ********)pppppppcVar20 != &pppppppcStack_5a0) {
            pppppppcVar26 = (code *******)*pppppppcVar20;
            *pppppppcVar20 = (code ******)0x0;
            pppppppcVar20[1] = (code ******)0x0;
            pppppppcVar20 = pppppppcVar26;
          }
        }
        puVar12 = (undefined8 *)puVar36[1];
        puVar33 = puVar36;
        if ((undefined8 *)puVar36[1] == (undefined8 *)0x0) {
          do {
            puVar36 = (undefined8 *)puVar33[2];
            bVar5 = (undefined8 *)*puVar36 != puVar33;
            puVar33 = puVar36;
          } while (bVar5);
        }
        else {
          do {
            puVar36 = puVar12;
            puVar12 = (undefined8 *)*puVar36;
          } while ((undefined8 *)*puVar36 != (undefined8 *)0x0);
        }
      } while (puVar36 != (undefined8 *)(puVar19 + 0x7a8));
    }
    FUN_10a044790(&uStack_4c0);
    (*(code *)*ppuStack_4b8)(&ppuStack_4b8);
    puVar19 = param_1[1];
    *(int *)(puVar19 + 0x7b8) = *(int *)(puVar19 + 0x7b8) + 1;
    puStack_510 = puVar19 + 0x7d8;
    uStack_508 = 0x10a5d1d34;
    ppuStack_500 = &PTR_DAT_110bf80a8;
    puStack_4f8 = puVar19 + 0x7b8;
    puVar36 = *(undefined8 **)(puVar19 + 0x7d8);
    if (puVar36 != (undefined8 *)(puVar19 + 0x7e0)) {
      do {
        pppppppcVar26 = (code *******)(puVar36 + 5);
        pppppppcVar20 = (code *******)*pppppppcVar26;
        if (pppppppcVar20 != (code *******)puVar36[6]) {
          lVar23 = 0;
          pppppppcStack_5a0 = (code *******)&pppppppcStack_5a0;
          pppppppcStack_598 = (code *******)&pppppppcStack_5a0;
          do {
            lVar1 = (long)apppppppcStack_480 + lVar23;
            lVar15 = (long)alStack_468 + lVar23 + -8;
            *(long *)lVar1 = lVar1;
            *(long *)((long)apppppppcStack_480 + lVar23 + 8U) = lVar1;
            *(long *)((long)alStack_468 + lVar23 + -8) = lVar15;
            *(long *)((long)alStack_468 + lVar23) = lVar15;
            lVar23 = lVar23 + 0x20;
          } while (lVar23 != 0x400);
          uVar32 = 0;
          if ((pppppppcVar20 != (code *******)0x0) && (pppppppcVar20 != pppppppcVar26)) {
            uVar32 = 0;
            do {
              pppppppcVar24 = (code *******)*pppppppcVar20;
              if (pppppppcVar20 != pppppppcStack_5a0 && pppppppcVar24 != pppppppcStack_5a0) {
                ppppppcVar28 = pppppppcStack_5a0[1];
                ppppppcVar30 = pppppppcVar20[1];
                *ppppppcVar28 = (code *****)pppppppcVar20;
                *pppppppcVar20 = (code ******)pppppppcStack_5a0;
                pppppppcVar20[1] = ppppppcVar28;
                pppppppcStack_5a0[1] = (code ******)pppppppcVar20;
                pppppppcVar24[1] = ppppppcVar30;
                *ppppppcVar30 = (code *****)pppppppcVar24;
              }
              uVar31 = (uint)uVar32;
              if (uVar31 == 0) {
                uVar35 = 0;
              }
              else {
                uVar34 = 0;
                pppppppcVar20 = (code *******)apppppppcStack_480;
                do {
                  uVar35 = uVar34;
                  if ((code *******)*pppppppcVar20 == (code *******)0x0 ||
                      pppppppcVar20 == (code *******)*pppppppcVar20) break;
                  func_0x00010a5d1d6c(pppppppcVar20,&pppppppcStack_5a0);
                  uVar34 = uVar34 + 1;
                  func_0x00010a5d1c9c(&pppppppcStack_5a0,pppppppcVar20);
                  pppppppcVar20 = pppppppcVar20 + 2;
                  uVar35 = uVar32;
                } while (uVar32 != uVar34);
              }
              func_0x00010a5d1c9c(&pppppppcStack_5a0,apppppppcStack_480 + (uVar35 & 0xffffffff) * 2)
              ;
              if ((uint)uVar35 == uVar31) {
                uVar31 = uVar31 + 1;
              }
              uVar32 = (ulong)uVar31;
              pppppppcVar20 = (code *******)*pppppppcVar26;
            } while (pppppppcVar20 != (code *******)0x0 && pppppppcVar20 != pppppppcVar26);
            if (1 < uVar31) {
              lVar23 = uVar32 - 1;
              pppppppcVar20 = (code *******)apppppppcStack_480;
              do {
                pppppppcVar20 = pppppppcVar20 + 2;
                func_0x00010a5d1d6c(pppppppcVar20);
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
            }
          }
          func_0x00010a5d1c9c(pppppppcVar26,auStack_490 + uVar32 * 0x10);
          lVar23 = 0;
          plVar11 = alStack_468 + 0x7d;
          do {
            plVar25 = plVar11 + -2;
            plVar3 = (long *)*plVar25;
            while (plVar3 != plVar25) {
              plVar29 = (long *)*plVar3;
              *plVar3 = 0;
              plVar3[1] = 0;
              plVar3 = plVar29;
            }
            *plVar25 = 0;
            plVar11[-1] = 0;
            lVar23 = lVar23 + 1;
            plVar11 = plVar25;
            pppppppcVar20 = pppppppcStack_5a0;
          } while (lVar23 != 0x40);
          while ((code ********)pppppppcVar20 != &pppppppcStack_5a0) {
            pppppppcVar26 = (code *******)*pppppppcVar20;
            *pppppppcVar20 = (code ******)0x0;
            pppppppcVar20[1] = (code ******)0x0;
            pppppppcVar20 = pppppppcVar26;
          }
        }
        puVar12 = (undefined8 *)puVar36[1];
        puVar33 = puVar36;
        if ((undefined8 *)puVar36[1] == (undefined8 *)0x0) {
          do {
            puVar36 = (undefined8 *)puVar33[2];
            bVar5 = (undefined8 *)*puVar36 != puVar33;
            puVar33 = puVar36;
          } while (bVar5);
        }
        else {
          do {
            puVar36 = puVar12;
            puVar12 = (undefined8 *)*puVar36;
          } while ((undefined8 *)*puVar36 != (undefined8 *)0x0);
        }
      } while (puVar36 != (undefined8 *)(puVar19 + 0x7e0));
    }
    FUN_10a044790(&uStack_508);
    (*(code *)*ppuStack_500)(&ppuStack_500);
    puVar19 = param_1[1];
    *(int *)(puVar19 + 0x7f0) = *(int *)(puVar19 + 0x7f0) + 1;
    puStack_558 = puVar19 + 0x810;
    uStack_550 = 0x10a5d1e64;
    ppuStack_548 = &PTR_DAT_110bf80c0;
    puStack_540 = puVar19 + 0x7f0;
    puVar36 = *(undefined8 **)(puVar19 + 0x810);
    if (puVar36 != (undefined8 *)(puVar19 + 0x818)) {
      do {
        pppppppcVar26 = (code *******)(puVar36 + 5);
        pppppppcVar20 = (code *******)*pppppppcVar26;
        if (pppppppcVar20 != (code *******)puVar36[6]) {
          lVar23 = 0;
          pppppppcStack_5a0 = (code *******)&pppppppcStack_5a0;
          pppppppcStack_598 = (code *******)&pppppppcStack_5a0;
          do {
            lVar1 = (long)apppppppcStack_480 + lVar23;
            lVar15 = (long)alStack_468 + lVar23 + -8;
            *(long *)lVar1 = lVar1;
            *(long *)((long)apppppppcStack_480 + lVar23 + 8U) = lVar1;
            *(long *)((long)alStack_468 + lVar23 + -8) = lVar15;
            *(long *)((long)alStack_468 + lVar23) = lVar15;
            lVar23 = lVar23 + 0x20;
          } while (lVar23 != 0x400);
          uVar32 = 0;
          if ((pppppppcVar20 != (code *******)0x0) && (pppppppcVar20 != pppppppcVar26)) {
            uVar32 = 0;
            do {
              pppppppcVar24 = (code *******)*pppppppcVar20;
              if (pppppppcVar20 != pppppppcStack_5a0 && pppppppcVar24 != pppppppcStack_5a0) {
                ppppppcVar28 = pppppppcStack_5a0[1];
                ppppppcVar30 = pppppppcVar20[1];
                *ppppppcVar28 = (code *****)pppppppcVar20;
                *pppppppcVar20 = (code ******)pppppppcStack_5a0;
                pppppppcVar20[1] = ppppppcVar28;
                pppppppcStack_5a0[1] = (code ******)pppppppcVar20;
                pppppppcVar24[1] = ppppppcVar30;
                *ppppppcVar30 = (code *****)pppppppcVar24;
              }
              uVar31 = (uint)uVar32;
              if (uVar31 == 0) {
                uVar35 = 0;
              }
              else {
                uVar34 = 0;
                pppppppcVar20 = (code *******)apppppppcStack_480;
                do {
                  uVar35 = uVar34;
                  if ((code *******)*pppppppcVar20 == (code *******)0x0 ||
                      pppppppcVar20 == (code *******)*pppppppcVar20) break;
                  func_0x00010a5d1e9c(pppppppcVar20,&pppppppcStack_5a0);
                  uVar34 = uVar34 + 1;
                  func_0x00010a5d1c9c(&pppppppcStack_5a0,pppppppcVar20);
                  pppppppcVar20 = pppppppcVar20 + 2;
                  uVar35 = uVar32;
                } while (uVar32 != uVar34);
              }
              func_0x00010a5d1c9c(&pppppppcStack_5a0,apppppppcStack_480 + (uVar35 & 0xffffffff) * 2)
              ;
              if ((uint)uVar35 == uVar31) {
                uVar31 = uVar31 + 1;
              }
              uVar32 = (ulong)uVar31;
              pppppppcVar20 = (code *******)*pppppppcVar26;
            } while (pppppppcVar20 != (code *******)0x0 && pppppppcVar20 != pppppppcVar26);
            if (1 < uVar31) {
              lVar23 = uVar32 - 1;
              pppppppcVar20 = (code *******)apppppppcStack_480;
              do {
                pppppppcVar20 = pppppppcVar20 + 2;
                func_0x00010a5d1e9c(pppppppcVar20);
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
            }
          }
          func_0x00010a5d1c9c(pppppppcVar26,auStack_490 + uVar32 * 0x10);
          lVar23 = 0;
          plVar11 = alStack_468 + 0x7d;
          do {
            plVar25 = plVar11 + -2;
            plVar3 = (long *)*plVar25;
            while (plVar3 != plVar25) {
              plVar29 = (long *)*plVar3;
              *plVar3 = 0;
              plVar3[1] = 0;
              plVar3 = plVar29;
            }
            *plVar25 = 0;
            plVar11[-1] = 0;
            lVar23 = lVar23 + 1;
            plVar11 = plVar25;
            pppppppcVar20 = pppppppcStack_5a0;
          } while (lVar23 != 0x40);
          while ((code ********)pppppppcVar20 != &pppppppcStack_5a0) {
            pppppppcVar26 = (code *******)*pppppppcVar20;
            *pppppppcVar20 = (code ******)0x0;
            pppppppcVar20[1] = (code ******)0x0;
            pppppppcVar20 = pppppppcVar26;
          }
        }
        puVar12 = (undefined8 *)puVar36[1];
        puVar33 = puVar36;
        if ((undefined8 *)puVar36[1] == (undefined8 *)0x0) {
          do {
            puVar36 = (undefined8 *)puVar33[2];
            bVar5 = (undefined8 *)*puVar36 != puVar33;
            puVar33 = puVar36;
          } while (bVar5);
        }
        else {
          do {
            puVar36 = puVar12;
            puVar12 = (undefined8 *)*puVar36;
          } while ((undefined8 *)*puVar36 != (undefined8 *)0x0);
        }
      } while (puVar36 != (undefined8 *)(puVar19 + 0x818));
    }
    FUN_10a044790(&uStack_550);
    iVar6 = (int)&ppuStack_548;
    (*(code *)*ppuStack_548)();
  }
  ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
  FUN_10ad055a0();
  if (iVar6 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar14;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b05e4;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_5f0,&UNK_10f66627f);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_6d0,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_6c8 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_6d0 = *(code ********)(lVar23 + 0x208);
        uStack_6c0 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_5e0 < 0) {
        apppppppcStack_480[0] = (code *******)0x10f29b0c6;
        if (pppppppcStack_5e8 != (code *******)0x0) {
          apppppppcStack_480[0] = pppppppcStack_5f0;
        }
      }
      else {
        apppppppcStack_480[0] = (code *******)"null";
        if (uStack_5e0._7_1_ != '\0') {
          apppppppcStack_480[0] = (code *******)&pppppppcStack_5f0;
        }
      }
      if ((long)uStack_6c0 < 0) {
        pppppppcStack_5a0 = (code *******)"null";
        if (pppppppcStack_6c8 != (code *******)0x0) {
          pppppppcStack_5a0 = pppppppcStack_6d0;
        }
      }
      else {
        pppppppcStack_5a0 = (code *******)"null";
        if (uStack_6c0._7_1_ != '\0') {
          pppppppcStack_5a0 = (code *******)&pppppppcStack_6d0;
        }
      }
      FUN_10a224324(apppppppcStack_480,&pppppppcStack_5a0);
      if ((long)uStack_5e0 < 0) {
        if (pppppppcStack_5e8 != (code *******)0x0) {
          func_0x000107c3192c(apppppppcStack_480,pppppppcStack_5f0);
          goto LAB_10a5b34d0;
        }
LAB_10a5b2aec:
        uVar17 = 0;
        apppppppcStack_480[0] = (code *******)((ulong)apppppppcStack_480[0] & 0xffffffffffffff00);
      }
      else {
        if (uStack_5e0._7_1_ == '\0') goto LAB_10a5b2aec;
        apppppppcStack_480[1] = pppppppcStack_5e8;
        apppppppcStack_480[0] = pppppppcStack_5f0;
        pppppppcStack_470 = (code *******)uStack_5e0;
LAB_10a5b34d0:
        uVar17 = 1;
      }
      alStack_468[0] = CONCAT71(alStack_468[0]._1_7_,uVar17);
      if ((long)uStack_6c0 < 0) {
        if (pppppppcStack_6c8 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_5a0,pppppppcStack_6d0);
          goto LAB_10a5b39c0;
        }
LAB_10a5b34fc:
        uVar17 = 0;
        pppppppcStack_5a0 = (code *******)((ulong)pppppppcStack_5a0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_6c0._7_1_ == '\0') goto LAB_10a5b34fc;
        pppppppcStack_598 = pppppppcStack_6c8;
        pppppppcStack_5a0 = pppppppcStack_6d0;
        pppppppcStack_590 = uStack_6c0;
LAB_10a5b39c0:
        uVar17 = 1;
      }
      uStack_588 = CONCAT71(uStack_588._1_7_,uVar17);
      FUN_10a234a0c(apppppppcStack_480,&pppppppcStack_5a0);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b05e4:
  alStack_468[5] = 0;
  alStack_468[4] = 0;
  alStack_468[3] = 0;
  alStack_468[2] = 0;
  alStack_468[1] = 0;
  alStack_468[0] = 0;
  apppppppcStack_480[1] = (code *******)&UNK_1053a6a3c;
  pppppppcStack_470 = (code *******)&PTR_DAT_110ae9180;
  uStack_560 = 0;
  uStack_568 = 0;
  uStack_570 = 0;
  uStack_578 = 0;
  uStack_580 = 0;
  uStack_588 = 0;
  pppppppcStack_598 = (code *******)&UNK_1053a6a3c;
  pppppppcStack_590 = (code *******)&PTR_DAT_110ae9180;
  puVar19 = param_1[1];
  if (*(int *)(*(long *)(puVar19 + 0xa20) + 0x18) < 0x135) {
    puStack_5d8 = puVar19 + 0x7b8;
    *(int *)(puVar19 + 0x7b8) = *(int *)(puVar19 + 0x7b8) + 1;
    pppppppcStack_5f0 = (code *******)(puVar19 + 0x7d8);
    pppppppcStack_5e8 = (code *******)0x10a5d1d34;
    uStack_5e0 = &PTR_DAT_110bf80a8;
    apppppppcStack_480[0] = pppppppcStack_5f0;
    func_0x00010a108320(apppppppcStack_480 + 1,&pppppppcStack_5e8);
    FUN_10a044790(&pppppppcStack_5e8);
    (*(code *)*uStack_5e0)(&uStack_5e0);
    puVar19 = param_1[1];
    puStack_5d8 = puVar19 + 0x7f0;
    *(int *)(puVar19 + 0x7f0) = *(int *)(puVar19 + 0x7f0) + 1;
    pppppppcStack_5f0 = (code *******)(puVar19 + 0x810);
    pppppppcStack_5e8 = (code *******)0x10a5d1e64;
    uStack_5e0 = &PTR_DAT_110bf80c0;
    pppppppcStack_5a0 = pppppppcStack_5f0;
    func_0x00010a108320(&pppppppcStack_598,&pppppppcStack_5e8);
    FUN_10a044790(&pppppppcStack_5e8);
    (*(code *)*uStack_5e0)(&uStack_5e0);
  }
  iVar6 = 0xf6662bf;
  FUN_10a1cc18c(&pppppppcStack_5f0);
  FUN_10ad055a0();
  if (iVar6 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar14;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b0730;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_670,&UNK_10f6662cc);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
        uStack_680 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_690;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b3518;
        }
LAB_10a5b2b78:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b2b78;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b3518:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
          goto LAB_10a5b39e8;
        }
LAB_10a5b3544:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b3544;
        pppppppcStack_6f8 = pppppppcStack_688;
        pppppppcStack_700 = pppppppcStack_690;
        uStack_6f0 = uStack_680;
LAB_10a5b39e8:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b0730:
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_10a5b4968(param_1,1);
  puVar19 = param_1[1] + 0xd48;
  FUN_10a5aeb74(puVar19,&PTR_DAT_110bf80d8);
  uVar32 = 0xffffffffffffffff;
  lVar23 = 8;
  puVar27 = puVar19;
  do {
    puVar27 = *(undefined **)(puVar27 + 8);
    lVar23 = lVar23 + -8;
    uVar32 = uVar32 + 1;
  } while (puVar27 != puVar19);
  pppppppcStack_670 = (code *******)0x0;
  pppppppcStack_668 = (code *******)0x0;
  uStack_660 = (code *******)0x0;
  if (uVar32 == 0) {
    pppppppcVar20 = (code *******)0x0;
  }
  else {
    if (uVar32 >> 0x3d != 0) {
      FUN_10a5d1f94();
      goto LAB_10a5b3cc4;
    }
    pppppppcVar20 = (code *******)-lVar23;
    __Znwm();
    pppppppcStack_670 = pppppppcVar20;
    uStack_660 = (code *******)((long)pppppppcVar20 - lVar23);
    _bzero();
    pppppppcStack_668 = (code *******)((long)pppppppcVar20 - lVar23);
  }
  pppppppcVar24 = pppppppcStack_668;
  pppppppcVar26 = pppppppcVar20;
  for (puVar27 = *(undefined **)(puVar19 + 8); puVar27 != puVar19;
      puVar27 = *(undefined **)(puVar27 + 8)) {
    ppppppcVar28 = *(code *******)(puVar27 + 0x28);
    if (ppppppcVar28 != (code ******)0x0) {
      *pppppppcVar26 = ppppppcVar28;
      ppppppcVar28[3] = (code *****)pppppppcVar26;
    }
    pppppppcVar26 = pppppppcVar26 + 1;
  }
  if (pppppppcVar20 != pppppppcStack_668) {
    ppuVar9 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    do {
      ppppppcVar28 = *pppppppcVar20;
      if (ppppppcVar28 != (code ******)0x0) {
        if (((ulong)ppppppcVar28[4] & 1) == 0) {
          *(undefined1 *)(ppppppcVar28 + 4) = 1;
          (*(code *)(*ppppppcVar28)[2])();
        }
        iVar6 = (int)ppppppcVar28;
        FUN_10ad055a0();
        if (iVar6 != 0) {
          if (*ppuVar9 == (undefined *)0x0) {
            plVar11 = (long *)*ppuVar14;
            if ((plVar11 == (long *)0x0) ||
               ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0)) goto LAB_10a5b0868;
            plVar11 = plVar11 + 7;
          }
          else {
            plVar11 = (long *)(*ppuVar9 + 8);
          }
          if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
            func_0x000107c2b054(&pppppppcStack_690,&UNK_10f666312);
            lVar23 = *(long *)(param_1[1] + 0x100);
            if (*(char *)(lVar23 + 0x21f) < '\0') {
              func_0x000107c3192c(&pppppppcStack_610,*(undefined8 *)(lVar23 + 0x208),
                                  *(undefined8 *)(lVar23 + 0x210));
            }
            else {
              pppppppcStack_608 = *(code ********)(lVar23 + 0x210);
              pppppppcStack_610 = *(code ********)(lVar23 + 0x208);
              uStack_600 = *(code ********)(lVar23 + 0x218);
            }
            iVar6 = (int)uStack_680._7_1_;
            if (-1 < (long)uStack_680) goto LAB_10a5b1e1c;
            pppppppcStack_6d0 = (code *******)"null";
            if (pppppppcStack_688 != (code *******)0x0) {
              pppppppcStack_6d0 = pppppppcStack_690;
            }
            goto LAB_10a5b1e30;
          }
        }
      }
LAB_10a5b0868:
      pppppppcVar20 = pppppppcVar20 + 1;
    } while (pppppppcVar20 != pppppppcVar24);
  }
  puVar19 = param_1[1];
  uVar10 = *(undefined8 *)(puVar19 + 0xba8);
  FUN_10a9f0a60(uVar10,puVar19,*(undefined8 *)(puVar19 + 0x830),*(undefined8 *)(puVar19 + 0x840));
  iVar6 = (int)uVar10;
  FUN_10ad055a0();
  if (iVar6 != 0) {
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar8 == (undefined *)0x0) {
      ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar8;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b08dc;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar8 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_690,&UNK_10f66634b);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_610,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_608 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_610 = *(code ********)(lVar23 + 0x208);
        uStack_600 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_690;
        }
      }
      if ((long)uStack_600 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_608 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_610;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_600._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_610;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_690);
          goto LAB_10a5b3560;
        }
LAB_10a5b2c04:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b2c04;
        pppppppcStack_6c8 = pppppppcStack_688;
        pppppppcStack_6d0 = pppppppcStack_690;
        uStack_6c0 = uStack_680;
LAB_10a5b3560:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_600 < 0) {
        if (pppppppcStack_608 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_610);
          goto LAB_10a5b3a10;
        }
LAB_10a5b358c:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_600._7_1_ == '\0') goto LAB_10a5b358c;
        pppppppcStack_6f8 = pppppppcStack_608;
        pppppppcStack_700 = pppppppcStack_610;
        uStack_6f0 = uStack_600;
LAB_10a5b3a10:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b08dc:
  FUN_10a5d1fa8(&pppppppcStack_670);
  FUN_10a1d33b4(&pppppppcStack_5f0);
  puVar19 = param_1[1];
  cVar2 = puVar19[0xe29];
  if (cVar2 != puVar19[0xe28]) {
    uVar18 = 7;
    if (cVar2 == '\0') {
      uVar18 = 2;
    }
    *(undefined4 *)(puVar19 + 0x278) = uVar18;
    lVar23 = 0xd88;
    if (cVar2 == '\0') {
      lVar23 = 0xd98;
    }
    FUN_10a07e58c(*(undefined8 *)(puVar19 + lVar23));
    puVar19[0xe28] = cVar2;
    puVar19 = param_1[1];
  }
  if (0x134 < *(int *)(*(long *)(puVar19 + 0xa20) + 0x18)) {
    puStack_5d8 = puVar19 + 0x7b8;
    *(int *)(puVar19 + 0x7b8) = *(int *)(puVar19 + 0x7b8) + 1;
    pppppppcStack_5f0 = (code *******)(puVar19 + 0x7d8);
    pppppppcStack_5e8 = (code *******)0x10a5d1d34;
    uStack_5e0 = &PTR_DAT_110bf80a8;
    apppppppcStack_480[0] = pppppppcStack_5f0;
    func_0x00010a108320(apppppppcStack_480 + 1,&pppppppcStack_5e8);
    FUN_10a044790(&pppppppcStack_5e8);
    (*(code *)*uStack_5e0)(&uStack_5e0);
    puVar19 = param_1[1];
    puStack_5d8 = puVar19 + 0x7f0;
    *(int *)(puVar19 + 0x7f0) = *(int *)(puVar19 + 0x7f0) + 1;
    pppppppcStack_5f0 = (code *******)(puVar19 + 0x810);
    pppppppcStack_5e8 = (code *******)0x10a5d1e64;
    uStack_5e0 = &PTR_DAT_110bf80c0;
    pppppppcStack_5a0 = pppppppcStack_5f0;
    func_0x00010a108320(&pppppppcStack_598,&pppppppcStack_5e8);
    FUN_10a044790(&pppppppcStack_5e8);
    (*(code *)*uStack_5e0)(&uStack_5e0);
  }
  FUN_10a1cc18c(&pppppppcStack_5f0,&UNK_10f666390);
  *(undefined4 *)(param_1 + 2) = 2;
  pppppppcVar26 = apppppppcStack_480[0] + 1;
  pppppppcVar20 = (code *******)*apppppppcStack_480[0];
  if (pppppppcVar20 != pppppppcVar26) {
    ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    do {
      for (pppppppcVar24 = (code *******)pppppppcVar20[5]; pppppppcVar24 != pppppppcVar20 + 5;
          pppppppcVar24 = (code *******)*pppppppcVar24) {
        if ((*(ushort *)(pppppppcVar24 + 0x20) >> 4 & 1) == 0) {
          pppppppcVar16 = pppppppcVar24 + -0x10;
          pppppppcVar13 = pppppppcVar16;
          FUN_10a3c7074();
          iVar6 = (int)pppppppcVar13;
          FUN_10ad055a0();
          if (iVar6 != 0) {
            if (*ppuVar8 == (undefined *)0x0) {
              plVar11 = (long *)*ppuVar14;
              if ((plVar11 == (long *)0x0) ||
                 ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0)) goto LAB_10a5b0a8c;
              plVar11 = plVar11 + 7;
            }
            else {
              plVar11 = (long *)(*ppuVar8 + 8);
            }
            if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
              pppppppcVar20 = (code *******)&UNK_10f66639e;
              func_0x000107c2b054(&pppppppcStack_6d0);
              (*(code *)(*pppppppcVar16)[7])();
              pppppppcStack_690 = pppppppcVar16;
              pppppppcStack_688 = pppppppcVar20;
              func_0x0001098998d4(&pppppppcStack_700,&pppppppcStack_690);
              pppppppcVar20 = pppppppcStack_6f8;
              pppppppcVar26 = pppppppcStack_700;
              if (-1 < (long)uStack_6f0) {
                pppppppcVar20 = (code *******)((ulong)uStack_6f0 >> 0x38);
                pppppppcVar26 = (code *******)&pppppppcStack_700;
              }
              pppppppcVar24 = (code *******)&pppppppcStack_6d0;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (pppppppcVar24,pppppppcVar26,pppppppcVar20);
              pppppppcStack_668 = (code *******)pppppppcVar24[1];
              pppppppcStack_670 = (code *******)*pppppppcVar24;
              uStack_660 = (code *******)pppppppcVar24[2];
              pppppppcVar24[1] = (code ******)0x0;
              pppppppcVar24[2] = (code ******)0x0;
              *pppppppcVar24 = (code ******)0x0;
              if ((long)uStack_6f0 < 0) {
                __ZdlPv(pppppppcStack_700);
              }
              if ((long)uStack_6c0 < 0) {
                __ZdlPv(pppppppcStack_6d0);
              }
              lVar23 = *(long *)(param_1[1] + 0x100);
              if (*(char *)(lVar23 + 0x21f) < '\0') {
                func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                                    *(undefined8 *)(lVar23 + 0x210));
              }
              else {
                pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
                pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
                uStack_680 = *(code ********)(lVar23 + 0x218);
              }
              if ((long)uStack_660 < 0) {
                pppppppcStack_6d0 = (code *******)"null";
                if (pppppppcStack_668 != (code *******)0x0) {
                  pppppppcStack_6d0 = pppppppcStack_670;
                }
              }
              else {
                pppppppcStack_6d0 = (code *******)"null";
                if (uStack_660._7_1_ != '\0') {
                  pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
                }
              }
              if ((long)uStack_680 < 0) {
                pppppppcStack_700 = (code *******)"null";
                if (pppppppcStack_688 != (code *******)0x0) {
                  pppppppcStack_700 = pppppppcStack_690;
                }
              }
              else {
                pppppppcStack_700 = (code *******)"null";
                if (uStack_680._7_1_ != '\0') {
                  pppppppcStack_700 = (code *******)&pppppppcStack_690;
                }
              }
              FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
              if ((long)uStack_660 < 0) {
                if (pppppppcStack_668 != (code *******)0x0) {
                  func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
                  goto LAB_10a5b1c74;
                }
LAB_10a5b1b2c:
                uVar17 = 0;
                pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
              }
              else {
                if (uStack_660._7_1_ == '\0') goto LAB_10a5b1b2c;
                pppppppcStack_6c8 = pppppppcStack_668;
                pppppppcStack_6d0 = pppppppcStack_670;
                uStack_6c0 = uStack_660;
LAB_10a5b1c74:
                uVar17 = 1;
              }
              uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
              if ((long)uStack_680 < 0) {
                if (pppppppcStack_688 != (code *******)0x0) {
                  func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
                  goto LAB_10a5b1d04;
                }
LAB_10a5b1ca0:
                uStack_6e8 = 0;
                pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
              }
              else {
                if (uStack_680._7_1_ == '\0') goto LAB_10a5b1ca0;
                pppppppcStack_6f8 = pppppppcStack_688;
                pppppppcStack_700 = pppppppcStack_690;
                uStack_6f0 = uStack_680;
LAB_10a5b1d04:
                uStack_6e8 = 1;
              }
              FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
              goto LAB_10a5b3cc4;
            }
          }
        }
LAB_10a5b0a8c:
      }
      pppppppcVar24 = (code *******)pppppppcVar20[1];
      pppppppcVar13 = pppppppcVar20;
      if ((code *******)pppppppcVar20[1] == (code *******)0x0) {
        do {
          pppppppcVar20 = (code *******)pppppppcVar13[2];
          bVar5 = (code *******)*pppppppcVar20 != pppppppcVar13;
          pppppppcVar13 = pppppppcVar20;
        } while (bVar5);
      }
      else {
        do {
          pppppppcVar20 = pppppppcVar24;
          pppppppcVar24 = (code *******)*pppppppcVar20;
        } while ((code *******)*pppppppcVar20 != (code *******)0x0);
      }
    } while (pppppppcVar20 != pppppppcVar26);
  }
  FUN_10a5b4968(param_1,0);
  puVar19 = param_1[1] + 0xd48;
  FUN_10a5aeb74(puVar19,&PTR_DAT_110b9f988);
  ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
  uVar32 = 0xffffffffffffffff;
  lVar23 = 8;
  puVar27 = puVar19;
  do {
    puVar27 = *(undefined **)(puVar27 + 8);
    lVar23 = lVar23 + -8;
    uVar32 = uVar32 + 1;
  } while (puVar27 != puVar19);
  pppppppcStack_670 = (code *******)0x0;
  pppppppcStack_668 = (code *******)0x0;
  uStack_660 = (code *******)0x0;
  if (uVar32 == 0) {
    pppppppcVar20 = (code *******)0x0;
  }
  else {
    if (uVar32 >> 0x3d != 0) {
      FUN_10a5d2000();
      goto LAB_10a5b3cc4;
    }
    pppppppcVar20 = (code *******)-lVar23;
    __Znwm();
    pppppppcStack_670 = pppppppcVar20;
    uStack_660 = (code *******)((long)pppppppcVar20 - lVar23);
    _bzero();
    pppppppcStack_668 = (code *******)((long)pppppppcVar20 - lVar23);
  }
  pppppppcVar24 = pppppppcStack_668;
  pppppppcVar26 = pppppppcVar20;
  for (puVar27 = *(undefined **)(puVar19 + 8); puVar27 != puVar19;
      puVar27 = *(undefined **)(puVar27 + 8)) {
    ppppppcVar28 = *(code *******)(puVar27 + 0x28);
    if (ppppppcVar28 != (code ******)0x0) {
      *pppppppcVar26 = ppppppcVar28;
      ppppppcVar28[3] = (code *****)pppppppcVar26;
    }
    pppppppcVar26 = pppppppcVar26 + 1;
  }
  if (pppppppcVar20 != pppppppcStack_668) {
    ppuVar9 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    do {
      ppppppcVar28 = *pppppppcVar20;
      if (ppppppcVar28 != (code ******)0x0) {
        (*(code *)(*ppppppcVar28)[2])();
        iVar6 = (int)ppppppcVar28;
        FUN_10ad055a0();
        if (iVar6 != 0) {
          if (*ppuVar9 == (undefined *)0x0) {
            plVar11 = (long *)*ppuVar14;
            if ((plVar11 == (long *)0x0) ||
               ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0)) goto LAB_10a5b0c14;
            plVar11 = plVar11 + 7;
          }
          else {
            plVar11 = (long *)(*ppuVar9 + 8);
          }
          if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
            func_0x000107c2b054(&pppppppcStack_690,&UNK_10f6663dc);
            lVar23 = *(long *)(param_1[1] + 0x100);
            if (*(char *)(lVar23 + 0x21f) < '\0') {
              func_0x000107c3192c(&pppppppcStack_610,*(undefined8 *)(lVar23 + 0x208),
                                  *(undefined8 *)(lVar23 + 0x210));
            }
            else {
              pppppppcStack_608 = *(code ********)(lVar23 + 0x210);
              pppppppcStack_610 = *(code ********)(lVar23 + 0x208);
              uStack_600 = *(code ********)(lVar23 + 0x218);
            }
            if ((long)uStack_680 < 0) {
              pppppppcStack_6d0 = (code *******)"null";
              if (pppppppcStack_688 != (code *******)0x0) {
                pppppppcStack_6d0 = pppppppcStack_690;
              }
            }
            else {
              pppppppcStack_6d0 = (code *******)"null";
              if (uStack_680._7_1_ != '\0') {
                pppppppcStack_6d0 = (code *******)&pppppppcStack_690;
              }
            }
            if ((long)uStack_600 < 0) {
              pppppppcStack_700 = (code *******)"null";
              if (pppppppcStack_608 != (code *******)0x0) {
                pppppppcStack_700 = pppppppcStack_610;
              }
            }
            else {
              pppppppcStack_700 = (code *******)"null";
              if (uStack_600._7_1_ != '\0') {
                pppppppcStack_700 = (code *******)&pppppppcStack_610;
              }
            }
            FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
            if ((long)uStack_680 < 0) {
              if (pppppppcStack_688 != (code *******)0x0) {
                func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_690);
                goto LAB_10a5b2064;
              }
LAB_10a5b1f28:
              uVar17 = 0;
              pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
            }
            else {
              if (uStack_680._7_1_ == '\0') goto LAB_10a5b1f28;
              pppppppcStack_6c8 = pppppppcStack_688;
              pppppppcStack_6d0 = pppppppcStack_690;
              uStack_6c0 = uStack_680;
LAB_10a5b2064:
              uVar17 = 1;
            }
            uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
            if ((long)uStack_600 < 0) {
              if (pppppppcStack_608 != (code *******)0x0) {
                func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_610);
                goto LAB_10a5b21a8;
              }
LAB_10a5b2090:
              uStack_6e8 = 0;
              pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
            }
            else {
              if (uStack_600._7_1_ == '\0') goto LAB_10a5b2090;
              pppppppcStack_6f8 = pppppppcStack_608;
              pppppppcStack_700 = pppppppcStack_610;
              uStack_6f0 = uStack_600;
LAB_10a5b21a8:
              uStack_6e8 = 1;
            }
            FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
            goto LAB_10a5b3cc4;
          }
        }
      }
LAB_10a5b0c14:
      pppppppcVar20 = pppppppcVar20 + 1;
    } while (pppppppcVar20 != pppppppcVar24);
  }
  FUN_10a5d2014(&pppppppcStack_670);
  FUN_10a1d33b4(&pppppppcStack_5f0);
  FUN_10a1cc18c(&pppppppcStack_5f0,&UNK_10f666417);
  iVar6 = (int)*(undefined8 *)(param_1[1] + 0xb58);
  FUN_10a25b29c();
  FUN_10ad055a0();
  if (iVar6 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar14;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b0ca0;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_670,&UNK_10f66642d);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
        uStack_680 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_690;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b35a8;
        }
LAB_10a5b2c90:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b2c90;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b35a8:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
          goto LAB_10a5b3a38;
        }
LAB_10a5b35d4:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b35d4;
        pppppppcStack_6f8 = pppppppcStack_688;
        pppppppcStack_700 = pppppppcStack_690;
        uStack_6f0 = uStack_680;
LAB_10a5b3a38:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b0ca0:
  FUN_10a1d33b4(&pppppppcStack_5f0);
  FUN_10a1cc18c(&pppppppcStack_5f0,&UNK_10f666469);
  iVar6 = (int)*(undefined8 *)(param_1[1] + 0x870);
  FUN_10a463658();
  FUN_10ad055a0();
  if (iVar6 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar14;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b0cf4;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_670,&UNK_10f666480);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
        uStack_680 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_690;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b35f0;
        }
LAB_10a5b2d1c:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b2d1c;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b35f0:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
          goto LAB_10a5b3a60;
        }
LAB_10a5b361c:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b361c;
        pppppppcStack_6f8 = pppppppcStack_688;
        pppppppcStack_700 = pppppppcStack_690;
        uStack_6f0 = uStack_680;
LAB_10a5b3a60:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b0cf4:
  FUN_10a1d33b4(&pppppppcStack_5f0);
  iVar6 = (int)param_1[1];
  FUN_10a3dda64();
  FUN_10ad055a0();
  if (iVar6 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar14;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b0d34;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_700,&UNK_10f6664c0);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_670,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_668 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_670 = *(code ********)(lVar23 + 0x208);
        uStack_660 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_6f0 < 0) {
        pppppppcStack_5f0 = (code *******)"null";
        if (pppppppcStack_6f8 != (code *******)0x0) {
          pppppppcStack_5f0 = pppppppcStack_700;
        }
      }
      else {
        pppppppcStack_5f0 = (code *******)"null";
        if (uStack_6f0._7_1_ != '\0') {
          pppppppcStack_5f0 = (code *******)&pppppppcStack_700;
        }
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      FUN_10a224324(&pppppppcStack_5f0,&pppppppcStack_6d0);
      if ((long)uStack_6f0 < 0) {
        if (pppppppcStack_6f8 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_5f0,pppppppcStack_700);
          goto LAB_10a5b3638;
        }
LAB_10a5b2da8:
        uVar17 = 0;
        pppppppcStack_5f0 = (code *******)((ulong)pppppppcStack_5f0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_6f0._7_1_ == '\0') goto LAB_10a5b2da8;
        pppppppcStack_5e8 = pppppppcStack_6f8;
        pppppppcStack_5f0 = pppppppcStack_700;
        uStack_5e0 = (undefined **)uStack_6f0;
LAB_10a5b3638:
        uVar17 = 1;
      }
      puStack_5d8 = (undefined *)CONCAT71(puStack_5d8._1_7_,uVar17);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b3a88;
        }
LAB_10a5b3664:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b3664;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b3a88:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      FUN_10a234a0c(&pppppppcStack_5f0,&pppppppcStack_6d0);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b0d34:
  FUN_10a1cc18c(&pppppppcStack_5f0,&UNK_10f666508);
  iVar6 = (int)*(undefined8 *)(param_1[1] + 0xbb0);
  FUN_10a76c52c();
  FUN_10ad055a0();
  if (iVar6 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar14;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b0d80;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_670,&UNK_10f66651f);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
        uStack_680 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_690;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b3680;
        }
LAB_10a5b2e34:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b2e34;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b3680:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
          goto LAB_10a5b3ab0;
        }
LAB_10a5b36ac:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b36ac;
        pppppppcStack_6f8 = pppppppcStack_688;
        pppppppcStack_700 = pppppppcStack_690;
        uStack_6f0 = uStack_680;
LAB_10a5b3ab0:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b0d80:
  FUN_10a1d33b4(&pppppppcStack_5f0);
  FUN_10a1cc18c(&pppppppcStack_5f0,&UNK_10f66655c);
  iVar6 = (int)*(undefined8 *)(param_1[1] + 0xbc8);
  FUN_10a9d91fc();
  FUN_10ad055a0();
  if (iVar6 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar14;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b0dd4;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_670,&UNK_10f66656f);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
        uStack_680 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_690;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b36c8;
        }
LAB_10a5b2ec0:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b2ec0;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b36c8:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
          goto LAB_10a5b3ad8;
        }
LAB_10a5b36f4:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b36f4;
        pppppppcStack_6f8 = pppppppcStack_688;
        pppppppcStack_700 = pppppppcStack_690;
        uStack_6f0 = uStack_680;
LAB_10a5b3ad8:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b0dd4:
  FUN_10a1d33b4(&pppppppcStack_5f0);
  puVar36 = (undefined8 *)(param_1[1] + 0xd48);
  FUN_10a5aeb74(puVar36,&PTR_DAT_110bf8080);
  puVar12 = puVar36;
  for (puVar33 = (undefined8 *)puVar36[1]; iVar6 = (int)puVar12, puVar33 != puVar36;
      puVar33 = (undefined8 *)puVar33[1]) {
    puVar12 = (undefined8 *)puVar33[5];
    (**(code **)*puVar12)();
  }
  FUN_10ad055a0();
  if (iVar6 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar14;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b0e48;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_700,&UNK_10f6665b1);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_670,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_668 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_670 = *(code ********)(lVar23 + 0x208);
        uStack_660 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_6f0 < 0) {
        pppppppcStack_5f0 = (code *******)"null";
        if (pppppppcStack_6f8 != (code *******)0x0) {
          pppppppcStack_5f0 = pppppppcStack_700;
        }
      }
      else {
        pppppppcStack_5f0 = (code *******)"null";
        if (uStack_6f0._7_1_ != '\0') {
          pppppppcStack_5f0 = (code *******)&pppppppcStack_700;
        }
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      FUN_10a224324(&pppppppcStack_5f0,&pppppppcStack_6d0);
      if ((long)uStack_6f0 < 0) {
        if (pppppppcStack_6f8 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_5f0,pppppppcStack_700);
          goto LAB_10a5b3710;
        }
LAB_10a5b2f4c:
        uVar17 = 0;
        pppppppcStack_5f0 = (code *******)((ulong)pppppppcStack_5f0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_6f0._7_1_ == '\0') goto LAB_10a5b2f4c;
        pppppppcStack_5e8 = pppppppcStack_6f8;
        pppppppcStack_5f0 = pppppppcStack_700;
        uStack_5e0 = (undefined **)uStack_6f0;
LAB_10a5b3710:
        uVar17 = 1;
      }
      puStack_5d8 = (undefined *)CONCAT71(puStack_5d8._1_7_,uVar17);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b3b00;
        }
LAB_10a5b373c:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b373c;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b3b00:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      FUN_10a234a0c(&pppppppcStack_5f0,&pppppppcStack_6d0);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b0e48:
  FUN_10a1cc18c(&pppppppcStack_5f0,&UNK_10f6665ed);
  iVar6 = (int)*(undefined8 *)(param_1[1] + 0xac0);
  FUN_10aa35008((float)*(double *)(*(long *)(param_1[1] + 0x850) + 0x10));
  FUN_10ad055a0();
  if (iVar6 != 0) {
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar8 == (undefined *)0x0) {
      ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar8;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b0ea0;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar8 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_670,&UNK_10f666602);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
        uStack_680 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_690;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b3758;
        }
LAB_10a5b2fd8:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b2fd8;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b3758:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
          goto LAB_10a5b3b28;
        }
LAB_10a5b3784:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b3784;
        pppppppcStack_6f8 = pppppppcStack_688;
        pppppppcStack_700 = pppppppcStack_690;
        uStack_6f0 = uStack_680;
LAB_10a5b3b28:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b0ea0:
  FUN_10a1d33b4(&pppppppcStack_5f0);
  puVar19 = param_1[1];
  FUN_10a3c8a24(puVar19 + 0x4f8);
  func_0x00010a3c8b00(puVar19 + 0x4f8);
  FUN_10a1cc18c(&pppppppcStack_5f0,&UNK_10f66663d);
  *(undefined4 *)(param_1 + 2) = 3;
  pppppppcVar26 = pppppppcStack_5a0 + 1;
  pppppppcVar20 = (code *******)*pppppppcStack_5a0;
  if (pppppppcVar20 != pppppppcVar26) {
    ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    do {
      for (pppppppcVar24 = (code *******)pppppppcVar20[5]; pppppppcVar24 != pppppppcVar20 + 5;
          pppppppcVar24 = (code *******)*pppppppcVar24) {
        if ((*(ushort *)(pppppppcVar24 + 0x1e) >> 4 & 1) == 0) {
          pppppppcVar16 = pppppppcVar24 + -0x12;
          pppppppcVar13 = pppppppcVar16;
          FUN_10a3c7100();
          iVar6 = (int)pppppppcVar13;
          FUN_10ad055a0();
          if (iVar6 != 0) {
            if (*ppuVar8 == (undefined *)0x0) {
              plVar11 = (long *)*ppuVar14;
              if ((plVar11 == (long *)0x0) ||
                 ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0)) goto LAB_10a5b0f54;
              plVar11 = plVar11 + 7;
            }
            else {
              plVar11 = (long *)(*ppuVar8 + 8);
            }
            if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
              pppppppcVar20 = (code *******)&UNK_10f66664f;
              func_0x000107c2b054(&pppppppcStack_6d0);
              (*(code *)(*pppppppcVar16)[7])();
              pppppppcStack_690 = pppppppcVar16;
              pppppppcStack_688 = pppppppcVar20;
              func_0x0001098998d4(&pppppppcStack_700,&pppppppcStack_690);
              pppppppcVar20 = pppppppcStack_6f8;
              pppppppcVar26 = pppppppcStack_700;
              if (-1 < (long)uStack_6f0) {
                pppppppcVar20 = (code *******)((ulong)uStack_6f0 >> 0x38);
                pppppppcVar26 = (code *******)&pppppppcStack_700;
              }
              pppppppcVar24 = (code *******)&pppppppcStack_6d0;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (pppppppcVar24,pppppppcVar26,pppppppcVar20);
              pppppppcStack_668 = (code *******)pppppppcVar24[1];
              pppppppcStack_670 = (code *******)*pppppppcVar24;
              uStack_660 = (code *******)pppppppcVar24[2];
              pppppppcVar24[1] = (code ******)0x0;
              pppppppcVar24[2] = (code ******)0x0;
              *pppppppcVar24 = (code ******)0x0;
              if ((long)uStack_6f0 < 0) {
                __ZdlPv(pppppppcStack_700);
              }
              if ((long)uStack_6c0 < 0) {
                __ZdlPv(pppppppcStack_6d0);
              }
              lVar23 = *(long *)(param_1[1] + 0x100);
              if (*(char *)(lVar23 + 0x21f) < '\0') {
                func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                                    *(undefined8 *)(lVar23 + 0x210));
              }
              else {
                pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
                pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
                uStack_680 = *(code ********)(lVar23 + 0x218);
              }
              if ((long)uStack_660 < 0) {
                pppppppcStack_6d0 = (code *******)"null";
                if (pppppppcStack_668 != (code *******)0x0) {
                  pppppppcStack_6d0 = pppppppcStack_670;
                }
              }
              else {
                pppppppcStack_6d0 = (code *******)"null";
                if (uStack_660._7_1_ != '\0') {
                  pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
                }
              }
              if ((long)uStack_680 < 0) {
                pppppppcStack_700 = (code *******)"null";
                if (pppppppcStack_688 != (code *******)0x0) {
                  pppppppcStack_700 = pppppppcStack_690;
                }
              }
              else {
                pppppppcStack_700 = (code *******)"null";
                if (uStack_680._7_1_ != '\0') {
                  pppppppcStack_700 = (code *******)&pppppppcStack_690;
                }
              }
              FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
              if ((long)uStack_660 < 0) {
                if (pppppppcStack_668 != (code *******)0x0) {
                  func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
                  goto LAB_10a5b1cbc;
                }
LAB_10a5b1bb8:
                uVar17 = 0;
                pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
              }
              else {
                if (uStack_660._7_1_ == '\0') goto LAB_10a5b1bb8;
                pppppppcStack_6c8 = pppppppcStack_668;
                pppppppcStack_6d0 = pppppppcStack_670;
                uStack_6c0 = uStack_660;
LAB_10a5b1cbc:
                uVar17 = 1;
              }
              uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
              if ((long)uStack_680 < 0) {
                if (pppppppcStack_688 != (code *******)0x0) {
                  func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
                  goto LAB_10a5b1d2c;
                }
LAB_10a5b1ce8:
                uStack_6e8 = 0;
                pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
              }
              else {
                if (uStack_680._7_1_ == '\0') goto LAB_10a5b1ce8;
                pppppppcStack_6f8 = pppppppcStack_688;
                pppppppcStack_700 = pppppppcStack_690;
                uStack_6f0 = uStack_680;
LAB_10a5b1d2c:
                uStack_6e8 = 1;
              }
              FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
              goto LAB_10a5b3cc4;
            }
          }
        }
LAB_10a5b0f54:
      }
      pppppppcVar24 = (code *******)pppppppcVar20[1];
      pppppppcVar13 = pppppppcVar20;
      if ((code *******)pppppppcVar20[1] == (code *******)0x0) {
        do {
          pppppppcVar20 = (code *******)pppppppcVar13[2];
          bVar5 = (code *******)*pppppppcVar20 != pppppppcVar13;
          pppppppcVar13 = pppppppcVar20;
        } while (bVar5);
      }
      else {
        do {
          pppppppcVar20 = pppppppcVar24;
          pppppppcVar24 = (code *******)*pppppppcVar20;
        } while ((code *******)*pppppppcVar20 != (code *******)0x0);
      }
    } while (pppppppcVar20 != pppppppcVar26);
  }
  FUN_10a5b4968(param_1,0);
  ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
  lVar23 = *(long *)(param_1[1] + 0x870);
  if (lVar23 != 0) {
    FUN_10a463658();
    iVar6 = (int)lVar23;
    FUN_10ad055a0();
    if (iVar6 != 0) {
      ppuVar14 = ppuVar8;
      (*(code *)PTR___tlv_bootstrap_11340dfd8)();
      if (*ppuVar14 == (undefined *)0x0) {
        ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
        (*(code *)PTR___tlv_bootstrap_11340dd98)();
        plVar11 = (long *)*ppuVar14;
        if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
        goto LAB_10a5b1008;
        plVar11 = plVar11 + 7;
      }
      else {
        plVar11 = (long *)(*ppuVar14 + 8);
      }
      if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
        func_0x000107c2b054(&pppppppcStack_670,&UNK_10f666695);
        lVar23 = *(long *)(param_1[1] + 0x100);
        if (*(char *)(lVar23 + 0x21f) < '\0') {
          func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                              *(undefined8 *)(lVar23 + 0x210));
        }
        else {
          pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
          pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
          uStack_680 = *(code ********)(lVar23 + 0x218);
        }
        if ((long)uStack_660 < 0) {
          pppppppcStack_6d0 = (code *******)"null";
          if (pppppppcStack_668 != (code *******)0x0) {
            pppppppcStack_6d0 = pppppppcStack_670;
          }
        }
        else {
          pppppppcStack_6d0 = (code *******)"null";
          if (uStack_660._7_1_ != '\0') {
            pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
          }
        }
        if ((long)uStack_680 < 0) {
          pppppppcStack_700 = (code *******)"null";
          if (pppppppcStack_688 != (code *******)0x0) {
            pppppppcStack_700 = pppppppcStack_690;
          }
        }
        else {
          pppppppcStack_700 = (code *******)"null";
          if (uStack_680._7_1_ != '\0') {
            pppppppcStack_700 = (code *******)&pppppppcStack_690;
          }
        }
        FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
        if ((long)uStack_660 < 0) {
          if (pppppppcStack_668 != (code *******)0x0) {
            func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
            goto LAB_10a5b3c68;
          }
LAB_10a5b346c:
          uVar17 = 0;
          pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
        }
        else {
          if (uStack_660._7_1_ == '\0') goto LAB_10a5b346c;
          pppppppcStack_6c8 = pppppppcStack_668;
          pppppppcStack_6d0 = pppppppcStack_670;
          uStack_6c0 = uStack_660;
LAB_10a5b3c68:
          uVar17 = 1;
        }
        uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
        if ((long)uStack_680 < 0) {
          if (pppppppcStack_688 != (code *******)0x0) {
            func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
            goto LAB_10a5b3cb0;
          }
LAB_10a5b3c94:
          uStack_6e8 = 0;
          pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
        }
        else {
          if (uStack_680._7_1_ == '\0') goto LAB_10a5b3c94;
          pppppppcStack_6f8 = pppppppcStack_688;
          pppppppcStack_700 = pppppppcStack_690;
          uStack_6f0 = uStack_680;
LAB_10a5b3cb0:
          uStack_6e8 = 1;
        }
        FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
        goto LAB_10a5b3cc4;
      }
    }
  }
LAB_10a5b1008:
  iVar6 = (int)param_1[1];
  FUN_10a3dda64();
  FUN_10ad055a0();
  if (iVar6 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar14;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b1040;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_670,&UNK_10f6666cf);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
        uStack_680 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_690;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b37a0;
        }
LAB_10a5b3064:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b3064;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b37a0:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
          goto LAB_10a5b3b50;
        }
LAB_10a5b37cc:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b37cc;
        pppppppcStack_6f8 = pppppppcStack_688;
        pppppppcStack_700 = pppppppcStack_690;
        uStack_6f0 = uStack_680;
LAB_10a5b3b50:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b1040:
  iVar6 = (int)*(undefined8 *)(param_1[1] + 0xad0);
  FUN_10a59854c();
  FUN_10ad055a0();
  if (iVar6 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar14;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b107c;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_670,&UNK_10f666722);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
        uStack_680 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_690;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b37e8;
        }
LAB_10a5b30f0:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b30f0;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b37e8:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
          goto LAB_10a5b3b78;
        }
LAB_10a5b3814:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b3814;
        pppppppcStack_6f8 = pppppppcStack_688;
        pppppppcStack_700 = pppppppcStack_690;
        uStack_6f0 = uStack_680;
LAB_10a5b3b78:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b107c:
  iVar6 = (int)*(undefined8 *)(param_1[1] + 0xae0);
  FUN_10a9ef934();
  FUN_10ad055a0();
  if (iVar6 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar14;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b10b8;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_670,&UNK_10f66675d);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
        uStack_680 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_690;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b3830;
        }
LAB_10a5b317c:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b317c;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b3830:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
          goto LAB_10a5b3ba0;
        }
LAB_10a5b385c:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b385c;
        pppppppcStack_6f8 = pppppppcStack_688;
        pppppppcStack_700 = pppppppcStack_690;
        uStack_6f0 = uStack_680;
LAB_10a5b3ba0:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b10b8:
  ppuVar14 = *(undefined ***)(param_1[1] + 0xc48);
  FUN_10a259a24();
  FUN_10ad055a0();
  if ((int)ppuVar14 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      ppuVar14 = (undefined **)*ppuVar14;
      if ((ppuVar14 == (undefined **)0x0) ||
         ((**(code **)(*ppuVar14 + 0x18))(), ppuVar14 == (undefined **)0x0)) goto LAB_10a5b10f4;
      ppuVar9 = ppuVar14 + 7;
    }
    else {
      ppuVar9 = (undefined **)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*ppuVar9 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_670,&UNK_10f6667a1);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
        uStack_680 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_690;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b3878;
        }
LAB_10a5b3284:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b3284;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b3878:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
          goto LAB_10a5b3bc8;
        }
LAB_10a5b38a4:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b38a4;
        pppppppcStack_6f8 = pppppppcStack_688;
        pppppppcStack_700 = pppppppcStack_690;
        uStack_6f0 = uStack_680;
LAB_10a5b3bc8:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b10f4:
  iVar6 = (int)ppuVar14;
  FUN_10ad055a0();
  if (iVar6 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar14;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b1124;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_670,&UNK_10f6667dc);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
        uStack_680 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_690;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b38c0;
        }
LAB_10a5b3294:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b3294;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b38c0:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
          goto LAB_10a5b3bf0;
        }
LAB_10a5b38ec:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b38ec;
        pppppppcStack_6f8 = pppppppcStack_688;
        pppppppcStack_700 = pppppppcStack_690;
        uStack_6f0 = uStack_680;
LAB_10a5b3bf0:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b1124:
  FUN_10a1d33b4(&pppppppcStack_5f0);
  iVar6 = 0xf666820;
  FUN_10a1cc18c(&pppppppcStack_5f0);
  lVar23 = *(long *)(param_1[1] + 0x8a8);
  if ((*(char *)(lVar23 + 0x92) == '\x01') && (*(char *)(lVar23 + 0x94) == '\x01')) {
    lVar15 = lVar23;
    FUN_10a5a12c4();
    iVar6 = (int)lVar15;
    *(undefined1 *)(lVar23 + 0x94) = 0;
  }
  FUN_10ad055a0();
  if (iVar6 != 0) {
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar8 == (undefined *)0x0) {
      ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar8;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b1198;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar8 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_670,&UNK_10f666839);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
        uStack_680 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_690;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b3908;
        }
LAB_10a5b3320:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b3320;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b3908:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
          goto LAB_10a5b3c18;
        }
LAB_10a5b3934:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b3934;
        pppppppcStack_6f8 = pppppppcStack_688;
        pppppppcStack_700 = pppppppcStack_690;
        uStack_6f0 = uStack_680;
LAB_10a5b3c18:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b1198:
  FUN_10a1d33b4(&pppppppcStack_5f0);
  pppppppcStack_6d0 = (code *******)param_1[1];
  uStack_6c0 = (code *******)0x0;
  pppppppcStack_6c8 = (code *******)0x0;
  uStack_6b0 = 0;
  uStack_6b8 = 0;
  uStack_6a8 = 0x3f800000;
  pppppppcStack_6d0[0x1af] = (code ******)&pppppppcStack_6d0;
  FUN_10a1cc18c(&pppppppcStack_700,&UNK_10f66687e);
  pppppppcVar20 = (code *******)(param_1[1] + 0xd48);
  FUN_10a5aeb74(pppppppcVar20,&PTR_DAT_110bd9dd0);
  pppppppcVar24 = (code *******)pppppppcVar20[1];
  pppppppcVar26 = pppppppcVar20;
  if (pppppppcVar24 != pppppppcVar20) {
    iVar6 = *(int *)(*(long *)(param_1[1] + 0x850) + 0x30);
    ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    pppppppcVar26 = (code *******)ppuVar14;
    do {
      ppppppcVar28 = pppppppcVar24[5];
      if ((((ulong)ppppppcVar28[0x30] & 0x17) == 0) &&
         ((*(char *)((long)ppppppcVar28 + 0x25c) != '\x01' ||
          (*(int *)(ppppppcVar28 + 0x4b) != iVar6)))) {
        pppppcVar22 = ppppppcVar28[0x2d];
        do {
          pppppcVar21 = pppppcVar22;
          pppppcVar22 = (code *****)pppppcVar21[0x31];
        } while (pppppcVar22 != (code *****)0x0);
        pppppppcStack_610 = (code *******)0x0;
        pppppppcStack_608 = (code *******)0x0;
        uStack_600 = (code *******)0x0;
        pppppppcStack_5f0 = (code *******)FUN_10a5d20d8;
        pppppppcStack_5e8 = (code *******)&PTR_FUN_110bf80e8;
        puStack_5d8 = (undefined *)CONCAT44(puStack_5d8._4_4_,iVar6);
        uStack_5e0 = (undefined **)&pppppppcStack_610;
        FUN_10a3e75d4(pppppcVar21,&pppppppcStack_5f0,0);
        iVar7 = (int)&pppppppcStack_5e8;
        (*(code *)*pppppppcStack_5e8)();
        FUN_10ad055a0();
        if (iVar7 != 0) {
          if (*ppuVar8 == (undefined *)0x0) {
            ppppppcVar28 = (code ******)*ppuVar14;
            if ((ppppppcVar28 == (code ******)0x0) ||
               ((*(code *)(*ppppppcVar28)[3])(), ppppppcVar28 == (code ******)0x0))
            goto LAB_10a5b12d8;
            ppppppcVar28 = ppppppcVar28 + 7;
          }
          else {
            ppppppcVar28 = (code ******)(*ppuVar8 + 8);
          }
          if (((uint)(*ppppppcVar28)[2] >> 1 & 1) != 0) {
            func_0x000107c2b054(&pppppppcStack_630,&UNK_10f666959);
            lVar23 = *(long *)(param_1[1] + 0x100);
            if (*(char *)(lVar23 + 0x21f) < '\0') {
              func_0x000107c3192c(&pppppppcStack_650,*(undefined8 *)(lVar23 + 0x208),
                                  *(undefined8 *)(lVar23 + 0x210));
            }
            else {
              pppppppcStack_648 = *(code ********)(lVar23 + 0x210);
              pppppppcStack_650 = *(code ********)(lVar23 + 0x208);
              uStack_640 = *(code ********)(lVar23 + 0x218);
            }
            if ((long)uStack_620 < 0) {
              pppppppcStack_670 = (code *******)"null";
              if (pppppppcStack_628 != (code *******)0x0) {
                pppppppcStack_670 = pppppppcStack_630;
              }
            }
            else {
              pppppppcStack_670 = (code *******)"null";
              if (uStack_620._7_1_ != '\0') {
                pppppppcStack_670 = (code *******)&pppppppcStack_630;
              }
            }
            if ((long)uStack_640 < 0) {
              pppppppcStack_690 = (code *******)"null";
              if (pppppppcStack_648 != (code *******)0x0) {
                pppppppcStack_690 = pppppppcStack_650;
              }
            }
            else {
              pppppppcStack_690 = (code *******)"null";
              if (uStack_640._7_1_ != '\0') {
                pppppppcStack_690 = (code *******)&pppppppcStack_650;
              }
            }
            FUN_10a224324(&pppppppcStack_670,&pppppppcStack_690);
            if ((long)uStack_620 < 0) {
              if (pppppppcStack_628 != (code *******)0x0) {
                func_0x000107c3192c(&pppppppcStack_670,pppppppcStack_630);
                goto LAB_10a5b25d8;
              }
LAB_10a5b2164:
              uStack_658 = 0;
              pppppppcStack_670 = (code *******)((ulong)pppppppcStack_670 & 0xffffffffffffff00);
            }
            else {
              if (uStack_620._7_1_ == '\0') goto LAB_10a5b2164;
              pppppppcStack_668 = pppppppcStack_628;
              pppppppcStack_670 = pppppppcStack_630;
              uStack_660 = uStack_620;
LAB_10a5b25d8:
              uStack_658 = 1;
            }
            if ((long)uStack_640 < 0) {
              if (pppppppcStack_648 != (code *******)0x0) {
                func_0x000107c3192c(&pppppppcStack_690,pppppppcStack_650);
                goto LAB_10a5b2620;
              }
LAB_10a5b2604:
              uStack_678 = 0;
              pppppppcStack_690 = (code *******)((ulong)pppppppcStack_690 & 0xffffffffffffff00);
            }
            else {
              if (uStack_640._7_1_ == '\0') goto LAB_10a5b2604;
              pppppppcStack_688 = pppppppcStack_648;
              pppppppcStack_690 = pppppppcStack_650;
              uStack_680 = uStack_640;
LAB_10a5b2620:
              uStack_678 = 1;
            }
            FUN_10a234a0c(&pppppppcStack_670,&pppppppcStack_690);
            goto LAB_10a5b3cc4;
          }
        }
LAB_10a5b12d8:
        pppppppcVar26 = pppppppcStack_610;
        if (pppppppcStack_610 != (code *******)0x0) {
          pppppppcStack_608 = pppppppcStack_610;
          __ZdlPv();
        }
      }
      pppppppcVar24 = (code *******)pppppppcVar24[1];
    } while (pppppppcVar24 != pppppppcVar20);
  }
  iVar6 = (int)pppppppcVar26;
  FUN_10ad055a0();
  ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
  if (iVar6 != 0) {
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar8 == (undefined *)0x0) {
      ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar8;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b135c;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar8 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_690,&UNK_10f666896);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_610,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_608 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_610 = *(code ********)(lVar23 + 0x208);
        uStack_600 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_5f0 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_5f0 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_5f0 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_5f0 = (code *******)&pppppppcStack_690;
        }
      }
      if ((long)uStack_600 < 0) {
        pppppppcStack_670 = (code *******)"null";
        if (pppppppcStack_608 != (code *******)0x0) {
          pppppppcStack_670 = pppppppcStack_610;
        }
      }
      else {
        pppppppcStack_670 = (code *******)"null";
        if (uStack_600._7_1_ != '\0') {
          pppppppcStack_670 = (code *******)&pppppppcStack_610;
        }
      }
      FUN_10a224324(&pppppppcStack_5f0,&pppppppcStack_670);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_5f0,pppppppcStack_690);
          goto LAB_10a5b3950;
        }
LAB_10a5b33ac:
        uVar17 = 0;
        pppppppcStack_5f0 = (code *******)((ulong)pppppppcStack_5f0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b33ac;
        pppppppcStack_5e8 = pppppppcStack_688;
        pppppppcStack_5f0 = pppppppcStack_690;
        uStack_5e0 = (undefined **)uStack_680;
LAB_10a5b3950:
        uVar17 = 1;
      }
      puStack_5d8 = (undefined *)CONCAT71(puStack_5d8._1_7_,uVar17);
      if ((long)uStack_600 < 0) {
        if (pppppppcStack_608 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_670,pppppppcStack_610);
          goto LAB_10a5b3c40;
        }
LAB_10a5b397c:
        uStack_658 = 0;
        pppppppcStack_670 = (code *******)((ulong)pppppppcStack_670 & 0xffffffffffffff00);
      }
      else {
        if (uStack_600._7_1_ == '\0') goto LAB_10a5b397c;
        pppppppcStack_668 = pppppppcStack_608;
        pppppppcStack_670 = pppppppcStack_610;
        uStack_660 = uStack_600;
LAB_10a5b3c40:
        uStack_658 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_5f0,&pppppppcStack_670);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b135c:
  FUN_10a1d33b4(&pppppppcStack_700);
  FUN_10a1cc18c(&pppppppcStack_5f0,&UNK_10f6668db);
  puVar19 = param_1[1] + 0xd48;
  FUN_10a5aeb74(puVar19,&PTR_DAT_110bcfa10);
  uVar32 = 0xffffffffffffffff;
  lVar23 = 8;
  puVar27 = puVar19;
  do {
    puVar27 = *(undefined **)(puVar27 + 8);
    lVar23 = lVar23 + -8;
    uVar32 = uVar32 + 1;
  } while (puVar27 != puVar19);
  pppppppcStack_690 = (code *******)0x0;
  pppppppcStack_688 = (code *******)0x0;
  uStack_680 = (code *******)0x0;
  if (uVar32 == 0) {
    pppppppcVar20 = (code *******)0x0;
  }
  else {
    if (uVar32 >> 0x3d != 0) {
      FUN_10a5d206c();
      goto LAB_10a5b3cc4;
    }
    pppppppcVar20 = (code *******)-lVar23;
    __Znwm();
    pppppppcStack_690 = pppppppcVar20;
    uStack_680 = (code *******)((long)pppppppcVar20 - lVar23);
    _bzero();
    pppppppcStack_688 = (code *******)((long)pppppppcVar20 - lVar23);
  }
  pppppppcVar24 = pppppppcStack_688;
  pppppppcVar26 = pppppppcVar20;
  for (puVar27 = *(undefined **)(puVar19 + 8); puVar27 != puVar19;
      puVar27 = *(undefined **)(puVar27 + 8)) {
    ppppppcVar28 = *(code *******)(puVar27 + 0x28);
    if (ppppppcVar28 != (code ******)0x0) {
      *pppppppcVar26 = ppppppcVar28;
      ppppppcVar28[3] = (code *****)pppppppcVar26;
    }
    pppppppcVar26 = pppppppcVar26 + 1;
  }
  if (pppppppcVar20 != pppppppcStack_688) {
    ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    do {
      ppppppcVar28 = *pppppppcVar20;
      if (ppppppcVar28 != (code ******)0x0) {
        (*(code *)(*ppppppcVar28)[2])();
        iVar6 = (int)ppppppcVar28;
        FUN_10ad055a0();
        if (iVar6 != 0) {
          if (*ppuVar8 == (undefined *)0x0) {
            plVar11 = (long *)*ppuVar14;
            if ((plVar11 == (long *)0x0) ||
               ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0)) goto LAB_10a5b148c;
            plVar11 = plVar11 + 7;
          }
          else {
            plVar11 = (long *)(*ppuVar8 + 8);
          }
          if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
            func_0x000107c2b054(&pppppppcStack_610,&UNK_10f6668f3);
            lVar23 = *(long *)(param_1[1] + 0x100);
            if (*(char *)(lVar23 + 0x21f) < '\0') {
              func_0x000107c3192c(&pppppppcStack_630,*(undefined8 *)(lVar23 + 0x208),
                                  *(undefined8 *)(lVar23 + 0x210));
            }
            else {
              pppppppcStack_628 = *(code ********)(lVar23 + 0x210);
              pppppppcStack_630 = *(code ********)(lVar23 + 0x208);
              uStack_620 = *(code ********)(lVar23 + 0x218);
            }
            if ((long)uStack_600 < 0) {
              pppppppcStack_700 = (code *******)"null";
              if (pppppppcStack_608 != (code *******)0x0) {
                pppppppcStack_700 = pppppppcStack_610;
              }
            }
            else {
              pppppppcStack_700 = (code *******)"null";
              if (uStack_600._7_1_ != '\0') {
                pppppppcStack_700 = (code *******)&pppppppcStack_610;
              }
            }
            if ((long)uStack_620 < 0) {
              pppppppcStack_670 = (code *******)"null";
              if (pppppppcStack_628 != (code *******)0x0) {
                pppppppcStack_670 = pppppppcStack_630;
              }
            }
            else {
              pppppppcStack_670 = (code *******)"null";
              if (uStack_620._7_1_ != '\0') {
                pppppppcStack_670 = (code *******)&pppppppcStack_630;
              }
            }
            FUN_10a224324(&pppppppcStack_700,&pppppppcStack_670);
            if ((long)uStack_600 < 0) {
              if (pppppppcStack_608 != (code *******)0x0) {
                func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_610);
                goto LAB_10a5b20ac;
              }
LAB_10a5b1fb4:
              uStack_6e8 = 0;
              pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
            }
            else {
              if (uStack_600._7_1_ == '\0') goto LAB_10a5b1fb4;
              pppppppcStack_6f8 = pppppppcStack_608;
              pppppppcStack_700 = pppppppcStack_610;
              uStack_6f0 = uStack_600;
LAB_10a5b20ac:
              uStack_6e8 = 1;
            }
            if ((long)uStack_620 < 0) {
              if (pppppppcStack_628 != (code *******)0x0) {
                func_0x000107c3192c(&pppppppcStack_670,pppppppcStack_630);
                goto LAB_10a5b21d0;
              }
LAB_10a5b20d8:
              uStack_658 = 0;
              pppppppcStack_670 = (code *******)((ulong)pppppppcStack_670 & 0xffffffffffffff00);
            }
            else {
              if (uStack_620._7_1_ == '\0') goto LAB_10a5b20d8;
              pppppppcStack_668 = pppppppcStack_628;
              pppppppcStack_670 = pppppppcStack_630;
              uStack_660 = uStack_620;
LAB_10a5b21d0:
              uStack_658 = 1;
            }
            FUN_10a234a0c(&pppppppcStack_700,&pppppppcStack_670);
            goto LAB_10a5b3cc4;
          }
        }
      }
LAB_10a5b148c:
      pppppppcVar20 = pppppppcVar20 + 1;
    } while (pppppppcVar20 != pppppppcVar24);
  }
  FUN_10a5d2080(&pppppppcStack_690);
  FUN_10a1d33b4(&pppppppcStack_5f0);
  pppppppcStack_6d0[0x1af] = (code ******)0x0;
  func_0x00010a679538(&pppppppcStack_6c8);
  FUN_10a044790(&pppppppcStack_598);
  (*(code *)*pppppppcStack_590)(&pppppppcStack_590);
  FUN_10a044790(apppppppcStack_480 + 1);
  (*(code *)*pppppppcStack_470)(&pppppppcStack_470);
  FUN_10a1bff04(&lStack_6a0);
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_468[0x7e]) {
    return;
  }
  ___stack_chk_fail();
  iVar6 = extraout_w8;
LAB_10a5b1e1c:
  pppppppcStack_6d0 = (code *******)"null";
  if (iVar6 != 0) {
    pppppppcStack_6d0 = (code *******)&pppppppcStack_690;
  }
LAB_10a5b1e30:
  if ((long)uStack_600 < 0) {
    pppppppcStack_700 = (code *******)"null";
    if (pppppppcStack_608 != (code *******)0x0) {
      pppppppcStack_700 = pppppppcStack_610;
    }
  }
  else {
    pppppppcStack_700 = (code *******)"null";
    if (uStack_600._7_1_ != '\0') {
      pppppppcStack_700 = (code *******)&pppppppcStack_610;
    }
  }
  FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
  if ((long)uStack_680 < 0) {
    if (pppppppcStack_688 != (code *******)0x0) {
      func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_690);
      goto LAB_10a5b201c;
    }
LAB_10a5b1e9c:
    uVar17 = 0;
    pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
  }
  else {
    if (uStack_680._7_1_ == '\0') goto LAB_10a5b1e9c;
    pppppppcStack_6c8 = pppppppcStack_688;
    pppppppcStack_6d0 = pppppppcStack_690;
    uStack_6c0 = uStack_680;
LAB_10a5b201c:
    uVar17 = 1;
  }
  uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
  if ((long)uStack_600 < 0) {
    if (pppppppcStack_608 != (code *******)0x0) {
      func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_610);
      goto LAB_10a5b2180;
    }
LAB_10a5b2048:
    uStack_6e8 = 0;
    pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
  }
  else {
    if (uStack_600._7_1_ == '\0') goto LAB_10a5b2048;
    pppppppcStack_6f8 = pppppppcStack_608;
    pppppppcStack_700 = pppppppcStack_610;
    uStack_6f0 = uStack_600;
LAB_10a5b2180:
    uStack_6e8 = 1;
  }
  FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
LAB_10a5b3cc4:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5b3cc8);
  (*pcVar4)();
}



/* Entry: 10a5afda0; end: 10a5b44b7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a5afda0(undefined **param_1)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  code *******pppppppcVar13;
  undefined **ppuVar14;
  long lVar15;
  code *******pppppppcVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  int extraout_w8;
  undefined *extraout_x8;
  code ******extraout_x8_00;
  undefined *puVar19;
  code *******pppppppcVar20;
  code *****pppppcVar21;
  code *****pppppcVar22;
  long lVar23;
  code *******pppppppcVar24;
  long *plVar25;
  code *******pppppppcVar26;
  undefined *puVar27;
  code ******ppppppcVar28;
  long *plVar29;
  code ******ppppppcVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 *puVar33;
  ulong uVar34;
  ulong uVar35;
  undefined8 *puVar36;
  code *******pppppppcStack_700;
  code *******pppppppcStack_6f8;
  undefined8 uStack_6f0;
  undefined1 uStack_6e8;
  code *******pppppppcStack_6d0;
  code *******pppppppcStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined4 uStack_6a8;
  long lStack_6a0;
  code ******ppppppcStack_698;
  code *******pppppppcStack_690;
  code *******pppppppcStack_688;
  undefined8 uStack_680;
  undefined1 uStack_678;
  code *******pppppppcStack_670;
  code *******pppppppcStack_668;
  undefined8 uStack_660;
  undefined1 uStack_658;
  code *******pppppppcStack_650;
  code *******pppppppcStack_648;
  undefined8 uStack_640;
  code *******pppppppcStack_630;
  code *******pppppppcStack_628;
  undefined8 uStack_620;
  code *******pppppppcStack_610;
  code *******pppppppcStack_608;
  undefined8 uStack_600;
  code *******pppppppcStack_5f0;
  code *******pppppppcStack_5e8;
  undefined8 uStack_5e0;
  undefined *puStack_5d8;
  code *******pppppppcStack_5a0;
  code *******pppppppcStack_598;
  code *******pppppppcStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined *puStack_558;
  undefined8 uStack_550;
  undefined **ppuStack_548;
  undefined *puStack_540;
  undefined *puStack_510;
  undefined8 uStack_508;
  undefined **ppuStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4c8;
  undefined8 uStack_4c0;
  undefined **ppuStack_4b8;
  undefined *puStack_4b0;
  undefined1 auStack_490 [16];
  code *******apppppppcStack_480 [2];
  code *******pppppppcStack_470;
  long alStack_468 [129];
  
  alStack_468[0x7e] = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar14 = param_1;
  FUN_10ad055a0();
  ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
  if ((int)ppuVar14 != 0) {
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar8 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      ppuVar14 = (undefined **)*ppuVar14;
      if ((ppuVar14 == (undefined **)0x0) ||
         ((**(code **)(*ppuVar14 + 0x18))(), ppuVar14 == (undefined **)0x0)) goto LAB_10a5afe0c;
      ppuVar9 = ppuVar14 + 7;
    }
    else {
      ppuVar9 = (undefined **)(*ppuVar8 + 8);
      ppuVar14 = ppuVar8;
    }
    if (((uint)*(undefined8 *)(*ppuVar9 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_5f0,&UNK_10f66622d);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_6d0,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_6c8 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_6d0 = *(code ********)(lVar23 + 0x208);
        uStack_6c0 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_5e0 < 0) {
        apppppppcStack_480[0] = (code *******)0x10f29b0c6;
        if (pppppppcStack_5e8 != (code *******)0x0) {
          apppppppcStack_480[0] = pppppppcStack_5f0;
        }
      }
      else {
        apppppppcStack_480[0] = (code *******)"null";
        if (uStack_5e0._7_1_ != '\0') {
          apppppppcStack_480[0] = (code *******)&pppppppcStack_5f0;
        }
      }
      if ((long)uStack_6c0 < 0) {
        pppppppcStack_5a0 = (code *******)"null";
        if (pppppppcStack_6c8 != (code *******)0x0) {
          pppppppcStack_5a0 = pppppppcStack_6d0;
        }
      }
      else {
        pppppppcStack_5a0 = (code *******)"null";
        if (uStack_6c0._7_1_ != '\0') {
          pppppppcStack_5a0 = (code *******)&pppppppcStack_6d0;
        }
      }
      FUN_10a224324(apppppppcStack_480,&pppppppcStack_5a0);
      if ((long)uStack_5e0 < 0) {
        if (pppppppcStack_5e8 != (code *******)0x0) {
          func_0x000107c3192c(apppppppcStack_480,pppppppcStack_5f0);
          goto LAB_10a5b3488;
        }
LAB_10a5b2a60:
        uVar17 = 0;
        apppppppcStack_480[0] = (code *******)((ulong)apppppppcStack_480[0] & 0xffffffffffffff00);
      }
      else {
        if (uStack_5e0._7_1_ == '\0') goto LAB_10a5b2a60;
        apppppppcStack_480[1] = pppppppcStack_5e8;
        apppppppcStack_480[0] = pppppppcStack_5f0;
        pppppppcStack_470 = (code *******)uStack_5e0;
LAB_10a5b3488:
        uVar17 = 1;
      }
      alStack_468[0] = CONCAT71(alStack_468[0]._1_7_,uVar17);
      if ((long)uStack_6c0 < 0) {
        if (pppppppcStack_6c8 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_5a0,pppppppcStack_6d0);
          goto LAB_10a5b3998;
        }
LAB_10a5b34b4:
        uVar17 = 0;
        pppppppcStack_5a0 = (code *******)((ulong)pppppppcStack_5a0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_6c0._7_1_ == '\0') goto LAB_10a5b34b4;
        pppppppcStack_598 = pppppppcStack_6c8;
        pppppppcStack_5a0 = pppppppcStack_6d0;
        pppppppcStack_590 = uStack_6c0;
LAB_10a5b3998:
        uVar17 = 1;
      }
      uStack_588 = CONCAT71(uStack_588._1_7_,uVar17);
      FUN_10a234a0c(apppppppcStack_480,&pppppppcStack_5a0);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5afe0c:
  if (*(int *)(*(long *)(param_1[1] + 0xa20) + 0x18) < 0x167) {
    FUN_10a1cc18c(apppppppcStack_480,&UNK_10f666253);
    FUN_10a3e0f90(param_1[1]);
    pppppppcVar20 = (code *******)apppppppcStack_480;
    FUN_10a1d33b4();
    lStack_6a0 = *(long *)(param_1[1] + 0xbd0);
    *(undefined1 *)(lStack_6a0 + 0x124) = 1;
    FUN_10a1bd024();
    ppppppcStack_698 = pppppppcVar20[8];
    FUN_10a1bd024();
    pppppppcVar20[8] = extraout_x8_00;
  }
  else {
    lStack_6a0 = *(long *)(param_1[1] + 0xbd0);
    *(undefined1 *)(lStack_6a0 + 0x124) = 1;
    FUN_10a1bd024();
    ppppppcStack_698 = (code ******)ppuVar14[8];
    FUN_10a1bd024();
    ppuVar14[8] = extraout_x8;
    FUN_10a1cc18c(apppppppcStack_480,&UNK_10f666253);
    FUN_10a463658(*(undefined8 *)(param_1[1] + 0x870));
    FUN_10a3e0f90(param_1[1]);
    FUN_10a1d33b4(apppppppcStack_480);
  }
  FUN_10a1cc18c(apppppppcStack_480,&UNK_10f666269);
  FUN_10a3c3be8(*(undefined8 *)(param_1[1] + 0x858));
  FUN_10a25e2f4(*(undefined8 *)(param_1[1] + 0x8c0));
  iVar6 = (int)apppppppcStack_480;
  FUN_10a1d33b4();
  puVar19 = param_1[1];
  if ((*(ushort *)(puVar19 + 0xd1e) >> 4 & 1) != 0) {
    *(ushort *)(puVar19 + 0xd1e) = *(ushort *)(puVar19 + 0xd1e) & 0xffef;
    *(int *)(puVar19 + 0x780) = *(int *)(puVar19 + 0x780) + 1;
    puStack_4c8 = puVar19 + 0x7a0;
    uStack_4c0 = 0x10a5d1a94;
    ppuStack_4b8 = &PTR_DAT_110bf8090;
    puStack_4b0 = puVar19 + 0x780;
    puVar36 = *(undefined8 **)(puVar19 + 0x7a0);
    if (puVar36 != (undefined8 *)(puVar19 + 0x7a8)) {
      do {
        pppppppcVar26 = (code *******)(puVar36 + 5);
        pppppppcVar20 = (code *******)*pppppppcVar26;
        if (pppppppcVar20 != (code *******)puVar36[6]) {
          lVar23 = 0;
          pppppppcStack_5a0 = (code *******)&pppppppcStack_5a0;
          pppppppcStack_598 = (code *******)&pppppppcStack_5a0;
          do {
            lVar1 = (long)apppppppcStack_480 + lVar23;
            lVar15 = (long)alStack_468 + lVar23 + -8;
            *(long *)lVar1 = lVar1;
            *(long *)((long)apppppppcStack_480 + lVar23 + 8U) = lVar1;
            *(long *)((long)alStack_468 + lVar23 + -8) = lVar15;
            *(long *)((long)alStack_468 + lVar23) = lVar15;
            lVar23 = lVar23 + 0x20;
          } while (lVar23 != 0x400);
          uVar32 = 0;
          if ((pppppppcVar20 != (code *******)0x0) && (pppppppcVar20 != pppppppcVar26)) {
            uVar32 = 0;
            do {
              pppppppcVar24 = (code *******)*pppppppcVar20;
              if (pppppppcVar20 != pppppppcStack_5a0 && pppppppcVar24 != pppppppcStack_5a0) {
                ppppppcVar28 = pppppppcStack_5a0[1];
                ppppppcVar30 = pppppppcVar20[1];
                *ppppppcVar28 = (code *****)pppppppcVar20;
                *pppppppcVar20 = (code ******)pppppppcStack_5a0;
                pppppppcVar20[1] = ppppppcVar28;
                pppppppcStack_5a0[1] = (code ******)pppppppcVar20;
                pppppppcVar24[1] = ppppppcVar30;
                *ppppppcVar30 = (code *****)pppppppcVar24;
              }
              uVar31 = (uint)uVar32;
              if (uVar31 == 0) {
                uVar35 = 0;
              }
              else {
                uVar34 = 0;
                pppppppcVar20 = (code *******)apppppppcStack_480;
                do {
                  uVar35 = uVar34;
                  if ((code *******)*pppppppcVar20 == (code *******)0x0 ||
                      pppppppcVar20 == (code *******)*pppppppcVar20) break;
                  FUN_10a5d1ba4(pppppppcVar20,&pppppppcStack_5a0);
                  uVar34 = uVar34 + 1;
                  func_0x00010a5d1c9c(&pppppppcStack_5a0,pppppppcVar20);
                  pppppppcVar20 = pppppppcVar20 + 2;
                  uVar35 = uVar32;
                } while (uVar32 != uVar34);
              }
              func_0x00010a5d1c9c(&pppppppcStack_5a0,apppppppcStack_480 + (uVar35 & 0xffffffff) * 2)
              ;
              if ((uint)uVar35 == uVar31) {
                uVar31 = uVar31 + 1;
              }
              uVar32 = (ulong)uVar31;
              pppppppcVar20 = (code *******)*pppppppcVar26;
            } while (pppppppcVar20 != (code *******)0x0 && pppppppcVar20 != pppppppcVar26);
            if (1 < uVar31) {
              lVar23 = uVar32 - 1;
              pppppppcVar20 = (code *******)apppppppcStack_480;
              do {
                pppppppcVar20 = pppppppcVar20 + 2;
                FUN_10a5d1ba4(pppppppcVar20);
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
            }
          }
          func_0x00010a5d1c9c(pppppppcVar26,auStack_490 + uVar32 * 0x10);
          lVar23 = 0;
          plVar11 = alStack_468 + 0x7d;
          do {
            plVar25 = plVar11 + -2;
            plVar3 = (long *)*plVar25;
            while (plVar3 != plVar25) {
              plVar29 = (long *)*plVar3;
              *plVar3 = 0;
              plVar3[1] = 0;
              plVar3 = plVar29;
            }
            *plVar25 = 0;
            plVar11[-1] = 0;
            lVar23 = lVar23 + 1;
            plVar11 = plVar25;
            pppppppcVar20 = pppppppcStack_5a0;
          } while (lVar23 != 0x40);
          while ((code ********)pppppppcVar20 != &pppppppcStack_5a0) {
            pppppppcVar26 = (code *******)*pppppppcVar20;
            *pppppppcVar20 = (code ******)0x0;
            pppppppcVar20[1] = (code ******)0x0;
            pppppppcVar20 = pppppppcVar26;
          }
        }
        puVar12 = (undefined8 *)puVar36[1];
        puVar33 = puVar36;
        if ((undefined8 *)puVar36[1] == (undefined8 *)0x0) {
          do {
            puVar36 = (undefined8 *)puVar33[2];
            bVar5 = (undefined8 *)*puVar36 != puVar33;
            puVar33 = puVar36;
          } while (bVar5);
        }
        else {
          do {
            puVar36 = puVar12;
            puVar12 = (undefined8 *)*puVar36;
          } while ((undefined8 *)*puVar36 != (undefined8 *)0x0);
        }
      } while (puVar36 != (undefined8 *)(puVar19 + 0x7a8));
    }
    FUN_10a044790(&uStack_4c0);
    (*(code *)*ppuStack_4b8)(&ppuStack_4b8);
    puVar19 = param_1[1];
    *(int *)(puVar19 + 0x7b8) = *(int *)(puVar19 + 0x7b8) + 1;
    puStack_510 = puVar19 + 0x7d8;
    uStack_508 = 0x10a5d1d34;
    ppuStack_500 = &PTR_DAT_110bf80a8;
    puStack_4f8 = puVar19 + 0x7b8;
    puVar36 = *(undefined8 **)(puVar19 + 0x7d8);
    if (puVar36 != (undefined8 *)(puVar19 + 0x7e0)) {
      do {
        pppppppcVar26 = (code *******)(puVar36 + 5);
        pppppppcVar20 = (code *******)*pppppppcVar26;
        if (pppppppcVar20 != (code *******)puVar36[6]) {
          lVar23 = 0;
          pppppppcStack_5a0 = (code *******)&pppppppcStack_5a0;
          pppppppcStack_598 = (code *******)&pppppppcStack_5a0;
          do {
            lVar1 = (long)apppppppcStack_480 + lVar23;
            lVar15 = (long)alStack_468 + lVar23 + -8;
            *(long *)lVar1 = lVar1;
            *(long *)((long)apppppppcStack_480 + lVar23 + 8U) = lVar1;
            *(long *)((long)alStack_468 + lVar23 + -8) = lVar15;
            *(long *)((long)alStack_468 + lVar23) = lVar15;
            lVar23 = lVar23 + 0x20;
          } while (lVar23 != 0x400);
          uVar32 = 0;
          if ((pppppppcVar20 != (code *******)0x0) && (pppppppcVar20 != pppppppcVar26)) {
            uVar32 = 0;
            do {
              pppppppcVar24 = (code *******)*pppppppcVar20;
              if (pppppppcVar20 != pppppppcStack_5a0 && pppppppcVar24 != pppppppcStack_5a0) {
                ppppppcVar28 = pppppppcStack_5a0[1];
                ppppppcVar30 = pppppppcVar20[1];
                *ppppppcVar28 = (code *****)pppppppcVar20;
                *pppppppcVar20 = (code ******)pppppppcStack_5a0;
                pppppppcVar20[1] = ppppppcVar28;
                pppppppcStack_5a0[1] = (code ******)pppppppcVar20;
                pppppppcVar24[1] = ppppppcVar30;
                *ppppppcVar30 = (code *****)pppppppcVar24;
              }
              uVar31 = (uint)uVar32;
              if (uVar31 == 0) {
                uVar35 = 0;
              }
              else {
                uVar34 = 0;
                pppppppcVar20 = (code *******)apppppppcStack_480;
                do {
                  uVar35 = uVar34;
                  if ((code *******)*pppppppcVar20 == (code *******)0x0 ||
                      pppppppcVar20 == (code *******)*pppppppcVar20) break;
                  func_0x00010a5d1d6c(pppppppcVar20,&pppppppcStack_5a0);
                  uVar34 = uVar34 + 1;
                  func_0x00010a5d1c9c(&pppppppcStack_5a0,pppppppcVar20);
                  pppppppcVar20 = pppppppcVar20 + 2;
                  uVar35 = uVar32;
                } while (uVar32 != uVar34);
              }
              func_0x00010a5d1c9c(&pppppppcStack_5a0,apppppppcStack_480 + (uVar35 & 0xffffffff) * 2)
              ;
              if ((uint)uVar35 == uVar31) {
                uVar31 = uVar31 + 1;
              }
              uVar32 = (ulong)uVar31;
              pppppppcVar20 = (code *******)*pppppppcVar26;
            } while (pppppppcVar20 != (code *******)0x0 && pppppppcVar20 != pppppppcVar26);
            if (1 < uVar31) {
              lVar23 = uVar32 - 1;
              pppppppcVar20 = (code *******)apppppppcStack_480;
              do {
                pppppppcVar20 = pppppppcVar20 + 2;
                func_0x00010a5d1d6c(pppppppcVar20);
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
            }
          }
          func_0x00010a5d1c9c(pppppppcVar26,auStack_490 + uVar32 * 0x10);
          lVar23 = 0;
          plVar11 = alStack_468 + 0x7d;
          do {
            plVar25 = plVar11 + -2;
            plVar3 = (long *)*plVar25;
            while (plVar3 != plVar25) {
              plVar29 = (long *)*plVar3;
              *plVar3 = 0;
              plVar3[1] = 0;
              plVar3 = plVar29;
            }
            *plVar25 = 0;
            plVar11[-1] = 0;
            lVar23 = lVar23 + 1;
            plVar11 = plVar25;
            pppppppcVar20 = pppppppcStack_5a0;
          } while (lVar23 != 0x40);
          while ((code ********)pppppppcVar20 != &pppppppcStack_5a0) {
            pppppppcVar26 = (code *******)*pppppppcVar20;
            *pppppppcVar20 = (code ******)0x0;
            pppppppcVar20[1] = (code ******)0x0;
            pppppppcVar20 = pppppppcVar26;
          }
        }
        puVar12 = (undefined8 *)puVar36[1];
        puVar33 = puVar36;
        if ((undefined8 *)puVar36[1] == (undefined8 *)0x0) {
          do {
            puVar36 = (undefined8 *)puVar33[2];
            bVar5 = (undefined8 *)*puVar36 != puVar33;
            puVar33 = puVar36;
          } while (bVar5);
        }
        else {
          do {
            puVar36 = puVar12;
            puVar12 = (undefined8 *)*puVar36;
          } while ((undefined8 *)*puVar36 != (undefined8 *)0x0);
        }
      } while (puVar36 != (undefined8 *)(puVar19 + 0x7e0));
    }
    FUN_10a044790(&uStack_508);
    (*(code *)*ppuStack_500)(&ppuStack_500);
    puVar19 = param_1[1];
    *(int *)(puVar19 + 0x7f0) = *(int *)(puVar19 + 0x7f0) + 1;
    puStack_558 = puVar19 + 0x810;
    uStack_550 = 0x10a5d1e64;
    ppuStack_548 = &PTR_DAT_110bf80c0;
    puStack_540 = puVar19 + 0x7f0;
    puVar36 = *(undefined8 **)(puVar19 + 0x810);
    if (puVar36 != (undefined8 *)(puVar19 + 0x818)) {
      do {
        pppppppcVar26 = (code *******)(puVar36 + 5);
        pppppppcVar20 = (code *******)*pppppppcVar26;
        if (pppppppcVar20 != (code *******)puVar36[6]) {
          lVar23 = 0;
          pppppppcStack_5a0 = (code *******)&pppppppcStack_5a0;
          pppppppcStack_598 = (code *******)&pppppppcStack_5a0;
          do {
            lVar1 = (long)apppppppcStack_480 + lVar23;
            lVar15 = (long)alStack_468 + lVar23 + -8;
            *(long *)lVar1 = lVar1;
            *(long *)((long)apppppppcStack_480 + lVar23 + 8U) = lVar1;
            *(long *)((long)alStack_468 + lVar23 + -8) = lVar15;
            *(long *)((long)alStack_468 + lVar23) = lVar15;
            lVar23 = lVar23 + 0x20;
          } while (lVar23 != 0x400);
          uVar32 = 0;
          if ((pppppppcVar20 != (code *******)0x0) && (pppppppcVar20 != pppppppcVar26)) {
            uVar32 = 0;
            do {
              pppppppcVar24 = (code *******)*pppppppcVar20;
              if (pppppppcVar20 != pppppppcStack_5a0 && pppppppcVar24 != pppppppcStack_5a0) {
                ppppppcVar28 = pppppppcStack_5a0[1];
                ppppppcVar30 = pppppppcVar20[1];
                *ppppppcVar28 = (code *****)pppppppcVar20;
                *pppppppcVar20 = (code ******)pppppppcStack_5a0;
                pppppppcVar20[1] = ppppppcVar28;
                pppppppcStack_5a0[1] = (code ******)pppppppcVar20;
                pppppppcVar24[1] = ppppppcVar30;
                *ppppppcVar30 = (code *****)pppppppcVar24;
              }
              uVar31 = (uint)uVar32;
              if (uVar31 == 0) {
                uVar35 = 0;
              }
              else {
                uVar34 = 0;
                pppppppcVar20 = (code *******)apppppppcStack_480;
                do {
                  uVar35 = uVar34;
                  if ((code *******)*pppppppcVar20 == (code *******)0x0 ||
                      pppppppcVar20 == (code *******)*pppppppcVar20) break;
                  func_0x00010a5d1e9c(pppppppcVar20,&pppppppcStack_5a0);
                  uVar34 = uVar34 + 1;
                  func_0x00010a5d1c9c(&pppppppcStack_5a0,pppppppcVar20);
                  pppppppcVar20 = pppppppcVar20 + 2;
                  uVar35 = uVar32;
                } while (uVar32 != uVar34);
              }
              func_0x00010a5d1c9c(&pppppppcStack_5a0,apppppppcStack_480 + (uVar35 & 0xffffffff) * 2)
              ;
              if ((uint)uVar35 == uVar31) {
                uVar31 = uVar31 + 1;
              }
              uVar32 = (ulong)uVar31;
              pppppppcVar20 = (code *******)*pppppppcVar26;
            } while (pppppppcVar20 != (code *******)0x0 && pppppppcVar20 != pppppppcVar26);
            if (1 < uVar31) {
              lVar23 = uVar32 - 1;
              pppppppcVar20 = (code *******)apppppppcStack_480;
              do {
                pppppppcVar20 = pppppppcVar20 + 2;
                func_0x00010a5d1e9c(pppppppcVar20);
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
            }
          }
          func_0x00010a5d1c9c(pppppppcVar26,auStack_490 + uVar32 * 0x10);
          lVar23 = 0;
          plVar11 = alStack_468 + 0x7d;
          do {
            plVar25 = plVar11 + -2;
            plVar3 = (long *)*plVar25;
            while (plVar3 != plVar25) {
              plVar29 = (long *)*plVar3;
              *plVar3 = 0;
              plVar3[1] = 0;
              plVar3 = plVar29;
            }
            *plVar25 = 0;
            plVar11[-1] = 0;
            lVar23 = lVar23 + 1;
            plVar11 = plVar25;
            pppppppcVar20 = pppppppcStack_5a0;
          } while (lVar23 != 0x40);
          while ((code ********)pppppppcVar20 != &pppppppcStack_5a0) {
            pppppppcVar26 = (code *******)*pppppppcVar20;
            *pppppppcVar20 = (code ******)0x0;
            pppppppcVar20[1] = (code ******)0x0;
            pppppppcVar20 = pppppppcVar26;
          }
        }
        puVar12 = (undefined8 *)puVar36[1];
        puVar33 = puVar36;
        if ((undefined8 *)puVar36[1] == (undefined8 *)0x0) {
          do {
            puVar36 = (undefined8 *)puVar33[2];
            bVar5 = (undefined8 *)*puVar36 != puVar33;
            puVar33 = puVar36;
          } while (bVar5);
        }
        else {
          do {
            puVar36 = puVar12;
            puVar12 = (undefined8 *)*puVar36;
          } while ((undefined8 *)*puVar36 != (undefined8 *)0x0);
        }
      } while (puVar36 != (undefined8 *)(puVar19 + 0x818));
    }
    FUN_10a044790(&uStack_550);
    iVar6 = (int)&ppuStack_548;
    (*(code *)*ppuStack_548)();
  }
  ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
  FUN_10ad055a0();
  if (iVar6 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar14;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b05e4;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_5f0,&UNK_10f66627f);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_6d0,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_6c8 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_6d0 = *(code ********)(lVar23 + 0x208);
        uStack_6c0 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_5e0 < 0) {
        apppppppcStack_480[0] = (code *******)0x10f29b0c6;
        if (pppppppcStack_5e8 != (code *******)0x0) {
          apppppppcStack_480[0] = pppppppcStack_5f0;
        }
      }
      else {
        apppppppcStack_480[0] = (code *******)"null";
        if (uStack_5e0._7_1_ != '\0') {
          apppppppcStack_480[0] = (code *******)&pppppppcStack_5f0;
        }
      }
      if ((long)uStack_6c0 < 0) {
        pppppppcStack_5a0 = (code *******)"null";
        if (pppppppcStack_6c8 != (code *******)0x0) {
          pppppppcStack_5a0 = pppppppcStack_6d0;
        }
      }
      else {
        pppppppcStack_5a0 = (code *******)"null";
        if (uStack_6c0._7_1_ != '\0') {
          pppppppcStack_5a0 = (code *******)&pppppppcStack_6d0;
        }
      }
      FUN_10a224324(apppppppcStack_480,&pppppppcStack_5a0);
      if ((long)uStack_5e0 < 0) {
        if (pppppppcStack_5e8 != (code *******)0x0) {
          func_0x000107c3192c(apppppppcStack_480,pppppppcStack_5f0);
          goto LAB_10a5b34d0;
        }
LAB_10a5b2aec:
        uVar17 = 0;
        apppppppcStack_480[0] = (code *******)((ulong)apppppppcStack_480[0] & 0xffffffffffffff00);
      }
      else {
        if (uStack_5e0._7_1_ == '\0') goto LAB_10a5b2aec;
        apppppppcStack_480[1] = pppppppcStack_5e8;
        apppppppcStack_480[0] = pppppppcStack_5f0;
        pppppppcStack_470 = (code *******)uStack_5e0;
LAB_10a5b34d0:
        uVar17 = 1;
      }
      alStack_468[0] = CONCAT71(alStack_468[0]._1_7_,uVar17);
      if ((long)uStack_6c0 < 0) {
        if (pppppppcStack_6c8 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_5a0,pppppppcStack_6d0);
          goto LAB_10a5b39c0;
        }
LAB_10a5b34fc:
        uVar17 = 0;
        pppppppcStack_5a0 = (code *******)((ulong)pppppppcStack_5a0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_6c0._7_1_ == '\0') goto LAB_10a5b34fc;
        pppppppcStack_598 = pppppppcStack_6c8;
        pppppppcStack_5a0 = pppppppcStack_6d0;
        pppppppcStack_590 = uStack_6c0;
LAB_10a5b39c0:
        uVar17 = 1;
      }
      uStack_588 = CONCAT71(uStack_588._1_7_,uVar17);
      FUN_10a234a0c(apppppppcStack_480,&pppppppcStack_5a0);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b05e4:
  alStack_468[5] = 0;
  alStack_468[4] = 0;
  alStack_468[3] = 0;
  alStack_468[2] = 0;
  alStack_468[1] = 0;
  alStack_468[0] = 0;
  apppppppcStack_480[1] = (code *******)&UNK_1053a6a3c;
  pppppppcStack_470 = (code *******)&PTR_DAT_110ae9180;
  uStack_560 = 0;
  uStack_568 = 0;
  uStack_570 = 0;
  uStack_578 = 0;
  uStack_580 = 0;
  uStack_588 = 0;
  pppppppcStack_598 = (code *******)&UNK_1053a6a3c;
  pppppppcStack_590 = (code *******)&PTR_DAT_110ae9180;
  puVar19 = param_1[1];
  if (*(int *)(*(long *)(puVar19 + 0xa20) + 0x18) < 0x135) {
    puStack_5d8 = puVar19 + 0x7b8;
    *(int *)(puVar19 + 0x7b8) = *(int *)(puVar19 + 0x7b8) + 1;
    pppppppcStack_5f0 = (code *******)(puVar19 + 0x7d8);
    pppppppcStack_5e8 = (code *******)0x10a5d1d34;
    uStack_5e0 = &PTR_DAT_110bf80a8;
    apppppppcStack_480[0] = pppppppcStack_5f0;
    func_0x00010a108320(apppppppcStack_480 + 1,&pppppppcStack_5e8);
    FUN_10a044790(&pppppppcStack_5e8);
    (*(code *)*uStack_5e0)(&uStack_5e0);
    puVar19 = param_1[1];
    puStack_5d8 = puVar19 + 0x7f0;
    *(int *)(puVar19 + 0x7f0) = *(int *)(puVar19 + 0x7f0) + 1;
    pppppppcStack_5f0 = (code *******)(puVar19 + 0x810);
    pppppppcStack_5e8 = (code *******)0x10a5d1e64;
    uStack_5e0 = &PTR_DAT_110bf80c0;
    pppppppcStack_5a0 = pppppppcStack_5f0;
    func_0x00010a108320(&pppppppcStack_598,&pppppppcStack_5e8);
    FUN_10a044790(&pppppppcStack_5e8);
    (*(code *)*uStack_5e0)(&uStack_5e0);
  }
  iVar6 = 0xf6662bf;
  FUN_10a1cc18c(&pppppppcStack_5f0);
  FUN_10ad055a0();
  if (iVar6 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar14;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b0730;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_670,&UNK_10f6662cc);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
        uStack_680 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_690;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b3518;
        }
LAB_10a5b2b78:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b2b78;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b3518:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
          goto LAB_10a5b39e8;
        }
LAB_10a5b3544:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b3544;
        pppppppcStack_6f8 = pppppppcStack_688;
        pppppppcStack_700 = pppppppcStack_690;
        uStack_6f0 = uStack_680;
LAB_10a5b39e8:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b0730:
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_10a5b4968(param_1,1);
  puVar19 = param_1[1] + 0xd48;
  FUN_10a5aeb74(puVar19,&PTR_DAT_110bf80d8);
  uVar32 = 0xffffffffffffffff;
  lVar23 = 8;
  puVar27 = puVar19;
  do {
    puVar27 = *(undefined **)(puVar27 + 8);
    lVar23 = lVar23 + -8;
    uVar32 = uVar32 + 1;
  } while (puVar27 != puVar19);
  pppppppcStack_670 = (code *******)0x0;
  pppppppcStack_668 = (code *******)0x0;
  uStack_660 = (code *******)0x0;
  if (uVar32 == 0) {
    pppppppcVar20 = (code *******)0x0;
  }
  else {
    if (uVar32 >> 0x3d != 0) {
      FUN_10a5d1f94();
      goto LAB_10a5b3cc4;
    }
    pppppppcVar20 = (code *******)-lVar23;
    __Znwm();
    pppppppcStack_670 = pppppppcVar20;
    uStack_660 = (code *******)((long)pppppppcVar20 - lVar23);
    _bzero();
    pppppppcStack_668 = (code *******)((long)pppppppcVar20 - lVar23);
  }
  pppppppcVar24 = pppppppcStack_668;
  pppppppcVar26 = pppppppcVar20;
  for (puVar27 = *(undefined **)(puVar19 + 8); puVar27 != puVar19;
      puVar27 = *(undefined **)(puVar27 + 8)) {
    ppppppcVar28 = *(code *******)(puVar27 + 0x28);
    if (ppppppcVar28 != (code ******)0x0) {
      *pppppppcVar26 = ppppppcVar28;
      ppppppcVar28[3] = (code *****)pppppppcVar26;
    }
    pppppppcVar26 = pppppppcVar26 + 1;
  }
  if (pppppppcVar20 != pppppppcStack_668) {
    ppuVar9 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    do {
      ppppppcVar28 = *pppppppcVar20;
      if (ppppppcVar28 != (code ******)0x0) {
        if (((ulong)ppppppcVar28[4] & 1) == 0) {
          *(undefined1 *)(ppppppcVar28 + 4) = 1;
          (*(code *)(*ppppppcVar28)[2])();
        }
        iVar6 = (int)ppppppcVar28;
        FUN_10ad055a0();
        if (iVar6 != 0) {
          if (*ppuVar9 == (undefined *)0x0) {
            plVar11 = (long *)*ppuVar14;
            if ((plVar11 == (long *)0x0) ||
               ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0)) goto LAB_10a5b0868;
            plVar11 = plVar11 + 7;
          }
          else {
            plVar11 = (long *)(*ppuVar9 + 8);
          }
          if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
            func_0x000107c2b054(&pppppppcStack_690,&UNK_10f666312);
            lVar23 = *(long *)(param_1[1] + 0x100);
            if (*(char *)(lVar23 + 0x21f) < '\0') {
              func_0x000107c3192c(&pppppppcStack_610,*(undefined8 *)(lVar23 + 0x208),
                                  *(undefined8 *)(lVar23 + 0x210));
            }
            else {
              pppppppcStack_608 = *(code ********)(lVar23 + 0x210);
              pppppppcStack_610 = *(code ********)(lVar23 + 0x208);
              uStack_600 = *(code ********)(lVar23 + 0x218);
            }
            iVar6 = (int)uStack_680._7_1_;
            if (-1 < (long)uStack_680) goto LAB_10a5b1e1c;
            pppppppcStack_6d0 = (code *******)"null";
            if (pppppppcStack_688 != (code *******)0x0) {
              pppppppcStack_6d0 = pppppppcStack_690;
            }
            goto LAB_10a5b1e30;
          }
        }
      }
LAB_10a5b0868:
      pppppppcVar20 = pppppppcVar20 + 1;
    } while (pppppppcVar20 != pppppppcVar24);
  }
  puVar19 = param_1[1];
  uVar10 = *(undefined8 *)(puVar19 + 0xba8);
  FUN_10a9f0a60(uVar10,puVar19,*(undefined8 *)(puVar19 + 0x830),*(undefined8 *)(puVar19 + 0x840));
  iVar6 = (int)uVar10;
  FUN_10ad055a0();
  if (iVar6 != 0) {
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar8 == (undefined *)0x0) {
      ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar8;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b08dc;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar8 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_690,&UNK_10f66634b);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_610,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_608 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_610 = *(code ********)(lVar23 + 0x208);
        uStack_600 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_690;
        }
      }
      if ((long)uStack_600 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_608 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_610;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_600._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_610;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_690);
          goto LAB_10a5b3560;
        }
LAB_10a5b2c04:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b2c04;
        pppppppcStack_6c8 = pppppppcStack_688;
        pppppppcStack_6d0 = pppppppcStack_690;
        uStack_6c0 = uStack_680;
LAB_10a5b3560:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_600 < 0) {
        if (pppppppcStack_608 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_610);
          goto LAB_10a5b3a10;
        }
LAB_10a5b358c:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_600._7_1_ == '\0') goto LAB_10a5b358c;
        pppppppcStack_6f8 = pppppppcStack_608;
        pppppppcStack_700 = pppppppcStack_610;
        uStack_6f0 = uStack_600;
LAB_10a5b3a10:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b08dc:
  FUN_10a5d1fa8(&pppppppcStack_670);
  FUN_10a1d33b4(&pppppppcStack_5f0);
  puVar19 = param_1[1];
  cVar2 = puVar19[0xe29];
  if (cVar2 != puVar19[0xe28]) {
    uVar18 = 7;
    if (cVar2 == '\0') {
      uVar18 = 2;
    }
    *(undefined4 *)(puVar19 + 0x278) = uVar18;
    lVar23 = 0xd88;
    if (cVar2 == '\0') {
      lVar23 = 0xd98;
    }
    FUN_10a07e58c(*(undefined8 *)(puVar19 + lVar23));
    puVar19[0xe28] = cVar2;
    puVar19 = param_1[1];
  }
  if (0x134 < *(int *)(*(long *)(puVar19 + 0xa20) + 0x18)) {
    puStack_5d8 = puVar19 + 0x7b8;
    *(int *)(puVar19 + 0x7b8) = *(int *)(puVar19 + 0x7b8) + 1;
    pppppppcStack_5f0 = (code *******)(puVar19 + 0x7d8);
    pppppppcStack_5e8 = (code *******)0x10a5d1d34;
    uStack_5e0 = &PTR_DAT_110bf80a8;
    apppppppcStack_480[0] = pppppppcStack_5f0;
    func_0x00010a108320(apppppppcStack_480 + 1,&pppppppcStack_5e8);
    FUN_10a044790(&pppppppcStack_5e8);
    (*(code *)*uStack_5e0)(&uStack_5e0);
    puVar19 = param_1[1];
    puStack_5d8 = puVar19 + 0x7f0;
    *(int *)(puVar19 + 0x7f0) = *(int *)(puVar19 + 0x7f0) + 1;
    pppppppcStack_5f0 = (code *******)(puVar19 + 0x810);
    pppppppcStack_5e8 = (code *******)0x10a5d1e64;
    uStack_5e0 = &PTR_DAT_110bf80c0;
    pppppppcStack_5a0 = pppppppcStack_5f0;
    func_0x00010a108320(&pppppppcStack_598,&pppppppcStack_5e8);
    FUN_10a044790(&pppppppcStack_5e8);
    (*(code *)*uStack_5e0)(&uStack_5e0);
  }
  FUN_10a1cc18c(&pppppppcStack_5f0,&UNK_10f666390);
  *(undefined4 *)(param_1 + 2) = 2;
  pppppppcVar26 = apppppppcStack_480[0] + 1;
  pppppppcVar20 = (code *******)*apppppppcStack_480[0];
  if (pppppppcVar20 != pppppppcVar26) {
    ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    do {
      for (pppppppcVar24 = (code *******)pppppppcVar20[5]; pppppppcVar24 != pppppppcVar20 + 5;
          pppppppcVar24 = (code *******)*pppppppcVar24) {
        if ((*(ushort *)(pppppppcVar24 + 0x20) >> 4 & 1) == 0) {
          pppppppcVar16 = pppppppcVar24 + -0x10;
          pppppppcVar13 = pppppppcVar16;
          FUN_10a3c7074();
          iVar6 = (int)pppppppcVar13;
          FUN_10ad055a0();
          if (iVar6 != 0) {
            if (*ppuVar8 == (undefined *)0x0) {
              plVar11 = (long *)*ppuVar14;
              if ((plVar11 == (long *)0x0) ||
                 ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0)) goto LAB_10a5b0a8c;
              plVar11 = plVar11 + 7;
            }
            else {
              plVar11 = (long *)(*ppuVar8 + 8);
            }
            if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
              pppppppcVar20 = (code *******)&UNK_10f66639e;
              func_0x000107c2b054(&pppppppcStack_6d0);
              (*(code *)(*pppppppcVar16)[7])();
              pppppppcStack_690 = pppppppcVar16;
              pppppppcStack_688 = pppppppcVar20;
              func_0x0001098998d4(&pppppppcStack_700,&pppppppcStack_690);
              pppppppcVar20 = pppppppcStack_6f8;
              pppppppcVar26 = pppppppcStack_700;
              if (-1 < (long)uStack_6f0) {
                pppppppcVar20 = (code *******)((ulong)uStack_6f0 >> 0x38);
                pppppppcVar26 = (code *******)&pppppppcStack_700;
              }
              pppppppcVar24 = (code *******)&pppppppcStack_6d0;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (pppppppcVar24,pppppppcVar26,pppppppcVar20);
              pppppppcStack_668 = (code *******)pppppppcVar24[1];
              pppppppcStack_670 = (code *******)*pppppppcVar24;
              uStack_660 = (code *******)pppppppcVar24[2];
              pppppppcVar24[1] = (code ******)0x0;
              pppppppcVar24[2] = (code ******)0x0;
              *pppppppcVar24 = (code ******)0x0;
              if ((long)uStack_6f0 < 0) {
                __ZdlPv(pppppppcStack_700);
              }
              if ((long)uStack_6c0 < 0) {
                __ZdlPv(pppppppcStack_6d0);
              }
              lVar23 = *(long *)(param_1[1] + 0x100);
              if (*(char *)(lVar23 + 0x21f) < '\0') {
                func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                                    *(undefined8 *)(lVar23 + 0x210));
              }
              else {
                pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
                pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
                uStack_680 = *(code ********)(lVar23 + 0x218);
              }
              if ((long)uStack_660 < 0) {
                pppppppcStack_6d0 = (code *******)"null";
                if (pppppppcStack_668 != (code *******)0x0) {
                  pppppppcStack_6d0 = pppppppcStack_670;
                }
              }
              else {
                pppppppcStack_6d0 = (code *******)"null";
                if (uStack_660._7_1_ != '\0') {
                  pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
                }
              }
              if ((long)uStack_680 < 0) {
                pppppppcStack_700 = (code *******)"null";
                if (pppppppcStack_688 != (code *******)0x0) {
                  pppppppcStack_700 = pppppppcStack_690;
                }
              }
              else {
                pppppppcStack_700 = (code *******)"null";
                if (uStack_680._7_1_ != '\0') {
                  pppppppcStack_700 = (code *******)&pppppppcStack_690;
                }
              }
              FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
              if ((long)uStack_660 < 0) {
                if (pppppppcStack_668 != (code *******)0x0) {
                  func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
                  goto LAB_10a5b1c74;
                }
LAB_10a5b1b2c:
                uVar17 = 0;
                pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
              }
              else {
                if (uStack_660._7_1_ == '\0') goto LAB_10a5b1b2c;
                pppppppcStack_6c8 = pppppppcStack_668;
                pppppppcStack_6d0 = pppppppcStack_670;
                uStack_6c0 = uStack_660;
LAB_10a5b1c74:
                uVar17 = 1;
              }
              uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
              if ((long)uStack_680 < 0) {
                if (pppppppcStack_688 != (code *******)0x0) {
                  func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
                  goto LAB_10a5b1d04;
                }
LAB_10a5b1ca0:
                uStack_6e8 = 0;
                pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
              }
              else {
                if (uStack_680._7_1_ == '\0') goto LAB_10a5b1ca0;
                pppppppcStack_6f8 = pppppppcStack_688;
                pppppppcStack_700 = pppppppcStack_690;
                uStack_6f0 = uStack_680;
LAB_10a5b1d04:
                uStack_6e8 = 1;
              }
              FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
              goto LAB_10a5b3cc4;
            }
          }
        }
LAB_10a5b0a8c:
      }
      pppppppcVar24 = (code *******)pppppppcVar20[1];
      pppppppcVar13 = pppppppcVar20;
      if ((code *******)pppppppcVar20[1] == (code *******)0x0) {
        do {
          pppppppcVar20 = (code *******)pppppppcVar13[2];
          bVar5 = (code *******)*pppppppcVar20 != pppppppcVar13;
          pppppppcVar13 = pppppppcVar20;
        } while (bVar5);
      }
      else {
        do {
          pppppppcVar20 = pppppppcVar24;
          pppppppcVar24 = (code *******)*pppppppcVar20;
        } while ((code *******)*pppppppcVar20 != (code *******)0x0);
      }
    } while (pppppppcVar20 != pppppppcVar26);
  }
  FUN_10a5b4968(param_1,0);
  puVar19 = param_1[1] + 0xd48;
  FUN_10a5aeb74(puVar19,&PTR_DAT_110b9f988);
  ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
  uVar32 = 0xffffffffffffffff;
  lVar23 = 8;
  puVar27 = puVar19;
  do {
    puVar27 = *(undefined **)(puVar27 + 8);
    lVar23 = lVar23 + -8;
    uVar32 = uVar32 + 1;
  } while (puVar27 != puVar19);
  pppppppcStack_670 = (code *******)0x0;
  pppppppcStack_668 = (code *******)0x0;
  uStack_660 = (code *******)0x0;
  if (uVar32 == 0) {
    pppppppcVar20 = (code *******)0x0;
  }
  else {
    if (uVar32 >> 0x3d != 0) {
      FUN_10a5d2000();
      goto LAB_10a5b3cc4;
    }
    pppppppcVar20 = (code *******)-lVar23;
    __Znwm();
    pppppppcStack_670 = pppppppcVar20;
    uStack_660 = (code *******)((long)pppppppcVar20 - lVar23);
    _bzero();
    pppppppcStack_668 = (code *******)((long)pppppppcVar20 - lVar23);
  }
  pppppppcVar24 = pppppppcStack_668;
  pppppppcVar26 = pppppppcVar20;
  for (puVar27 = *(undefined **)(puVar19 + 8); puVar27 != puVar19;
      puVar27 = *(undefined **)(puVar27 + 8)) {
    ppppppcVar28 = *(code *******)(puVar27 + 0x28);
    if (ppppppcVar28 != (code ******)0x0) {
      *pppppppcVar26 = ppppppcVar28;
      ppppppcVar28[3] = (code *****)pppppppcVar26;
    }
    pppppppcVar26 = pppppppcVar26 + 1;
  }
  if (pppppppcVar20 != pppppppcStack_668) {
    ppuVar9 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    do {
      ppppppcVar28 = *pppppppcVar20;
      if (ppppppcVar28 != (code ******)0x0) {
        (*(code *)(*ppppppcVar28)[2])();
        iVar6 = (int)ppppppcVar28;
        FUN_10ad055a0();
        if (iVar6 != 0) {
          if (*ppuVar9 == (undefined *)0x0) {
            plVar11 = (long *)*ppuVar14;
            if ((plVar11 == (long *)0x0) ||
               ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0)) goto LAB_10a5b0c14;
            plVar11 = plVar11 + 7;
          }
          else {
            plVar11 = (long *)(*ppuVar9 + 8);
          }
          if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
            func_0x000107c2b054(&pppppppcStack_690,&UNK_10f6663dc);
            lVar23 = *(long *)(param_1[1] + 0x100);
            if (*(char *)(lVar23 + 0x21f) < '\0') {
              func_0x000107c3192c(&pppppppcStack_610,*(undefined8 *)(lVar23 + 0x208),
                                  *(undefined8 *)(lVar23 + 0x210));
            }
            else {
              pppppppcStack_608 = *(code ********)(lVar23 + 0x210);
              pppppppcStack_610 = *(code ********)(lVar23 + 0x208);
              uStack_600 = *(code ********)(lVar23 + 0x218);
            }
            if ((long)uStack_680 < 0) {
              pppppppcStack_6d0 = (code *******)"null";
              if (pppppppcStack_688 != (code *******)0x0) {
                pppppppcStack_6d0 = pppppppcStack_690;
              }
            }
            else {
              pppppppcStack_6d0 = (code *******)"null";
              if (uStack_680._7_1_ != '\0') {
                pppppppcStack_6d0 = (code *******)&pppppppcStack_690;
              }
            }
            if ((long)uStack_600 < 0) {
              pppppppcStack_700 = (code *******)"null";
              if (pppppppcStack_608 != (code *******)0x0) {
                pppppppcStack_700 = pppppppcStack_610;
              }
            }
            else {
              pppppppcStack_700 = (code *******)"null";
              if (uStack_600._7_1_ != '\0') {
                pppppppcStack_700 = (code *******)&pppppppcStack_610;
              }
            }
            FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
            if ((long)uStack_680 < 0) {
              if (pppppppcStack_688 != (code *******)0x0) {
                func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_690);
                goto LAB_10a5b2064;
              }
LAB_10a5b1f28:
              uVar17 = 0;
              pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
            }
            else {
              if (uStack_680._7_1_ == '\0') goto LAB_10a5b1f28;
              pppppppcStack_6c8 = pppppppcStack_688;
              pppppppcStack_6d0 = pppppppcStack_690;
              uStack_6c0 = uStack_680;
LAB_10a5b2064:
              uVar17 = 1;
            }
            uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
            if ((long)uStack_600 < 0) {
              if (pppppppcStack_608 != (code *******)0x0) {
                func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_610);
                goto LAB_10a5b21a8;
              }
LAB_10a5b2090:
              uStack_6e8 = 0;
              pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
            }
            else {
              if (uStack_600._7_1_ == '\0') goto LAB_10a5b2090;
              pppppppcStack_6f8 = pppppppcStack_608;
              pppppppcStack_700 = pppppppcStack_610;
              uStack_6f0 = uStack_600;
LAB_10a5b21a8:
              uStack_6e8 = 1;
            }
            FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
            goto LAB_10a5b3cc4;
          }
        }
      }
LAB_10a5b0c14:
      pppppppcVar20 = pppppppcVar20 + 1;
    } while (pppppppcVar20 != pppppppcVar24);
  }
  FUN_10a5d2014(&pppppppcStack_670);
  FUN_10a1d33b4(&pppppppcStack_5f0);
  FUN_10a1cc18c(&pppppppcStack_5f0,&UNK_10f666417);
  iVar6 = (int)*(undefined8 *)(param_1[1] + 0xb58);
  FUN_10a25b29c();
  FUN_10ad055a0();
  if (iVar6 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar14;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b0ca0;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_670,&UNK_10f66642d);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
        uStack_680 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_690;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b35a8;
        }
LAB_10a5b2c90:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b2c90;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b35a8:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
          goto LAB_10a5b3a38;
        }
LAB_10a5b35d4:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b35d4;
        pppppppcStack_6f8 = pppppppcStack_688;
        pppppppcStack_700 = pppppppcStack_690;
        uStack_6f0 = uStack_680;
LAB_10a5b3a38:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b0ca0:
  FUN_10a1d33b4(&pppppppcStack_5f0);
  FUN_10a1cc18c(&pppppppcStack_5f0,&UNK_10f666469);
  iVar6 = (int)*(undefined8 *)(param_1[1] + 0x870);
  FUN_10a463658();
  FUN_10ad055a0();
  if (iVar6 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar14;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b0cf4;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_670,&UNK_10f666480);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
        uStack_680 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_690;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b35f0;
        }
LAB_10a5b2d1c:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b2d1c;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b35f0:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
          goto LAB_10a5b3a60;
        }
LAB_10a5b361c:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b361c;
        pppppppcStack_6f8 = pppppppcStack_688;
        pppppppcStack_700 = pppppppcStack_690;
        uStack_6f0 = uStack_680;
LAB_10a5b3a60:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b0cf4:
  FUN_10a1d33b4(&pppppppcStack_5f0);
  iVar6 = (int)param_1[1];
  FUN_10a3dda64();
  FUN_10ad055a0();
  if (iVar6 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar14;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b0d34;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_700,&UNK_10f6664c0);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_670,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_668 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_670 = *(code ********)(lVar23 + 0x208);
        uStack_660 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_6f0 < 0) {
        pppppppcStack_5f0 = (code *******)"null";
        if (pppppppcStack_6f8 != (code *******)0x0) {
          pppppppcStack_5f0 = pppppppcStack_700;
        }
      }
      else {
        pppppppcStack_5f0 = (code *******)"null";
        if (uStack_6f0._7_1_ != '\0') {
          pppppppcStack_5f0 = (code *******)&pppppppcStack_700;
        }
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      FUN_10a224324(&pppppppcStack_5f0,&pppppppcStack_6d0);
      if ((long)uStack_6f0 < 0) {
        if (pppppppcStack_6f8 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_5f0,pppppppcStack_700);
          goto LAB_10a5b3638;
        }
LAB_10a5b2da8:
        uVar17 = 0;
        pppppppcStack_5f0 = (code *******)((ulong)pppppppcStack_5f0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_6f0._7_1_ == '\0') goto LAB_10a5b2da8;
        pppppppcStack_5e8 = pppppppcStack_6f8;
        pppppppcStack_5f0 = pppppppcStack_700;
        uStack_5e0 = (undefined **)uStack_6f0;
LAB_10a5b3638:
        uVar17 = 1;
      }
      puStack_5d8 = (undefined *)CONCAT71(puStack_5d8._1_7_,uVar17);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b3a88;
        }
LAB_10a5b3664:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b3664;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b3a88:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      FUN_10a234a0c(&pppppppcStack_5f0,&pppppppcStack_6d0);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b0d34:
  FUN_10a1cc18c(&pppppppcStack_5f0,&UNK_10f666508);
  iVar6 = (int)*(undefined8 *)(param_1[1] + 0xbb0);
  FUN_10a76c52c();
  FUN_10ad055a0();
  if (iVar6 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar14;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b0d80;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_670,&UNK_10f66651f);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
        uStack_680 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_690;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b3680;
        }
LAB_10a5b2e34:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b2e34;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b3680:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
          goto LAB_10a5b3ab0;
        }
LAB_10a5b36ac:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b36ac;
        pppppppcStack_6f8 = pppppppcStack_688;
        pppppppcStack_700 = pppppppcStack_690;
        uStack_6f0 = uStack_680;
LAB_10a5b3ab0:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b0d80:
  FUN_10a1d33b4(&pppppppcStack_5f0);
  FUN_10a1cc18c(&pppppppcStack_5f0,&UNK_10f66655c);
  iVar6 = (int)*(undefined8 *)(param_1[1] + 0xbc8);
  FUN_10a9d91fc();
  FUN_10ad055a0();
  if (iVar6 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar14;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b0dd4;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_670,&UNK_10f66656f);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
        uStack_680 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_690;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b36c8;
        }
LAB_10a5b2ec0:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b2ec0;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b36c8:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
          goto LAB_10a5b3ad8;
        }
LAB_10a5b36f4:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b36f4;
        pppppppcStack_6f8 = pppppppcStack_688;
        pppppppcStack_700 = pppppppcStack_690;
        uStack_6f0 = uStack_680;
LAB_10a5b3ad8:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b0dd4:
  FUN_10a1d33b4(&pppppppcStack_5f0);
  puVar36 = (undefined8 *)(param_1[1] + 0xd48);
  FUN_10a5aeb74(puVar36,&PTR_DAT_110bf8080);
  puVar12 = puVar36;
  for (puVar33 = (undefined8 *)puVar36[1]; iVar6 = (int)puVar12, puVar33 != puVar36;
      puVar33 = (undefined8 *)puVar33[1]) {
    puVar12 = (undefined8 *)puVar33[5];
    (**(code **)*puVar12)();
  }
  FUN_10ad055a0();
  if (iVar6 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar14;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b0e48;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_700,&UNK_10f6665b1);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_670,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_668 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_670 = *(code ********)(lVar23 + 0x208);
        uStack_660 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_6f0 < 0) {
        pppppppcStack_5f0 = (code *******)"null";
        if (pppppppcStack_6f8 != (code *******)0x0) {
          pppppppcStack_5f0 = pppppppcStack_700;
        }
      }
      else {
        pppppppcStack_5f0 = (code *******)"null";
        if (uStack_6f0._7_1_ != '\0') {
          pppppppcStack_5f0 = (code *******)&pppppppcStack_700;
        }
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      FUN_10a224324(&pppppppcStack_5f0,&pppppppcStack_6d0);
      if ((long)uStack_6f0 < 0) {
        if (pppppppcStack_6f8 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_5f0,pppppppcStack_700);
          goto LAB_10a5b3710;
        }
LAB_10a5b2f4c:
        uVar17 = 0;
        pppppppcStack_5f0 = (code *******)((ulong)pppppppcStack_5f0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_6f0._7_1_ == '\0') goto LAB_10a5b2f4c;
        pppppppcStack_5e8 = pppppppcStack_6f8;
        pppppppcStack_5f0 = pppppppcStack_700;
        uStack_5e0 = (undefined **)uStack_6f0;
LAB_10a5b3710:
        uVar17 = 1;
      }
      puStack_5d8 = (undefined *)CONCAT71(puStack_5d8._1_7_,uVar17);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b3b00;
        }
LAB_10a5b373c:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b373c;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b3b00:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      FUN_10a234a0c(&pppppppcStack_5f0,&pppppppcStack_6d0);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b0e48:
  FUN_10a1cc18c(&pppppppcStack_5f0,&UNK_10f6665ed);
  iVar6 = (int)*(undefined8 *)(param_1[1] + 0xac0);
  FUN_10aa35008((float)*(double *)(*(long *)(param_1[1] + 0x850) + 0x10));
  FUN_10ad055a0();
  if (iVar6 != 0) {
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar8 == (undefined *)0x0) {
      ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar8;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b0ea0;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar8 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_670,&UNK_10f666602);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
        uStack_680 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_690;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b3758;
        }
LAB_10a5b2fd8:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b2fd8;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b3758:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
          goto LAB_10a5b3b28;
        }
LAB_10a5b3784:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b3784;
        pppppppcStack_6f8 = pppppppcStack_688;
        pppppppcStack_700 = pppppppcStack_690;
        uStack_6f0 = uStack_680;
LAB_10a5b3b28:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b0ea0:
  FUN_10a1d33b4(&pppppppcStack_5f0);
  puVar19 = param_1[1];
  FUN_10a3c8a24(puVar19 + 0x4f8);
  func_0x00010a3c8b00(puVar19 + 0x4f8);
  FUN_10a1cc18c(&pppppppcStack_5f0,&UNK_10f66663d);
  *(undefined4 *)(param_1 + 2) = 3;
  pppppppcVar26 = pppppppcStack_5a0 + 1;
  pppppppcVar20 = (code *******)*pppppppcStack_5a0;
  if (pppppppcVar20 != pppppppcVar26) {
    ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    do {
      for (pppppppcVar24 = (code *******)pppppppcVar20[5]; pppppppcVar24 != pppppppcVar20 + 5;
          pppppppcVar24 = (code *******)*pppppppcVar24) {
        if ((*(ushort *)(pppppppcVar24 + 0x1e) >> 4 & 1) == 0) {
          pppppppcVar16 = pppppppcVar24 + -0x12;
          pppppppcVar13 = pppppppcVar16;
          FUN_10a3c7100();
          iVar6 = (int)pppppppcVar13;
          FUN_10ad055a0();
          if (iVar6 != 0) {
            if (*ppuVar8 == (undefined *)0x0) {
              plVar11 = (long *)*ppuVar14;
              if ((plVar11 == (long *)0x0) ||
                 ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0)) goto LAB_10a5b0f54;
              plVar11 = plVar11 + 7;
            }
            else {
              plVar11 = (long *)(*ppuVar8 + 8);
            }
            if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
              pppppppcVar20 = (code *******)&UNK_10f66664f;
              func_0x000107c2b054(&pppppppcStack_6d0);
              (*(code *)(*pppppppcVar16)[7])();
              pppppppcStack_690 = pppppppcVar16;
              pppppppcStack_688 = pppppppcVar20;
              func_0x0001098998d4(&pppppppcStack_700,&pppppppcStack_690);
              pppppppcVar20 = pppppppcStack_6f8;
              pppppppcVar26 = pppppppcStack_700;
              if (-1 < (long)uStack_6f0) {
                pppppppcVar20 = (code *******)((ulong)uStack_6f0 >> 0x38);
                pppppppcVar26 = (code *******)&pppppppcStack_700;
              }
              pppppppcVar24 = (code *******)&pppppppcStack_6d0;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (pppppppcVar24,pppppppcVar26,pppppppcVar20);
              pppppppcStack_668 = (code *******)pppppppcVar24[1];
              pppppppcStack_670 = (code *******)*pppppppcVar24;
              uStack_660 = (code *******)pppppppcVar24[2];
              pppppppcVar24[1] = (code ******)0x0;
              pppppppcVar24[2] = (code ******)0x0;
              *pppppppcVar24 = (code ******)0x0;
              if ((long)uStack_6f0 < 0) {
                __ZdlPv(pppppppcStack_700);
              }
              if ((long)uStack_6c0 < 0) {
                __ZdlPv(pppppppcStack_6d0);
              }
              lVar23 = *(long *)(param_1[1] + 0x100);
              if (*(char *)(lVar23 + 0x21f) < '\0') {
                func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                                    *(undefined8 *)(lVar23 + 0x210));
              }
              else {
                pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
                pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
                uStack_680 = *(code ********)(lVar23 + 0x218);
              }
              if ((long)uStack_660 < 0) {
                pppppppcStack_6d0 = (code *******)"null";
                if (pppppppcStack_668 != (code *******)0x0) {
                  pppppppcStack_6d0 = pppppppcStack_670;
                }
              }
              else {
                pppppppcStack_6d0 = (code *******)"null";
                if (uStack_660._7_1_ != '\0') {
                  pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
                }
              }
              if ((long)uStack_680 < 0) {
                pppppppcStack_700 = (code *******)"null";
                if (pppppppcStack_688 != (code *******)0x0) {
                  pppppppcStack_700 = pppppppcStack_690;
                }
              }
              else {
                pppppppcStack_700 = (code *******)"null";
                if (uStack_680._7_1_ != '\0') {
                  pppppppcStack_700 = (code *******)&pppppppcStack_690;
                }
              }
              FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
              if ((long)uStack_660 < 0) {
                if (pppppppcStack_668 != (code *******)0x0) {
                  func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
                  goto LAB_10a5b1cbc;
                }
LAB_10a5b1bb8:
                uVar17 = 0;
                pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
              }
              else {
                if (uStack_660._7_1_ == '\0') goto LAB_10a5b1bb8;
                pppppppcStack_6c8 = pppppppcStack_668;
                pppppppcStack_6d0 = pppppppcStack_670;
                uStack_6c0 = uStack_660;
LAB_10a5b1cbc:
                uVar17 = 1;
              }
              uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
              if ((long)uStack_680 < 0) {
                if (pppppppcStack_688 != (code *******)0x0) {
                  func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
                  goto LAB_10a5b1d2c;
                }
LAB_10a5b1ce8:
                uStack_6e8 = 0;
                pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
              }
              else {
                if (uStack_680._7_1_ == '\0') goto LAB_10a5b1ce8;
                pppppppcStack_6f8 = pppppppcStack_688;
                pppppppcStack_700 = pppppppcStack_690;
                uStack_6f0 = uStack_680;
LAB_10a5b1d2c:
                uStack_6e8 = 1;
              }
              FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
              goto LAB_10a5b3cc4;
            }
          }
        }
LAB_10a5b0f54:
      }
      pppppppcVar24 = (code *******)pppppppcVar20[1];
      pppppppcVar13 = pppppppcVar20;
      if ((code *******)pppppppcVar20[1] == (code *******)0x0) {
        do {
          pppppppcVar20 = (code *******)pppppppcVar13[2];
          bVar5 = (code *******)*pppppppcVar20 != pppppppcVar13;
          pppppppcVar13 = pppppppcVar20;
        } while (bVar5);
      }
      else {
        do {
          pppppppcVar20 = pppppppcVar24;
          pppppppcVar24 = (code *******)*pppppppcVar20;
        } while ((code *******)*pppppppcVar20 != (code *******)0x0);
      }
    } while (pppppppcVar20 != pppppppcVar26);
  }
  FUN_10a5b4968(param_1,0);
  ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
  lVar23 = *(long *)(param_1[1] + 0x870);
  if (lVar23 != 0) {
    FUN_10a463658();
    iVar6 = (int)lVar23;
    FUN_10ad055a0();
    if (iVar6 != 0) {
      ppuVar14 = ppuVar8;
      (*(code *)PTR___tlv_bootstrap_11340dfd8)();
      if (*ppuVar14 == (undefined *)0x0) {
        ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
        (*(code *)PTR___tlv_bootstrap_11340dd98)();
        plVar11 = (long *)*ppuVar14;
        if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
        goto LAB_10a5b1008;
        plVar11 = plVar11 + 7;
      }
      else {
        plVar11 = (long *)(*ppuVar14 + 8);
      }
      if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
        func_0x000107c2b054(&pppppppcStack_670,&UNK_10f666695);
        lVar23 = *(long *)(param_1[1] + 0x100);
        if (*(char *)(lVar23 + 0x21f) < '\0') {
          func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                              *(undefined8 *)(lVar23 + 0x210));
        }
        else {
          pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
          pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
          uStack_680 = *(code ********)(lVar23 + 0x218);
        }
        if ((long)uStack_660 < 0) {
          pppppppcStack_6d0 = (code *******)"null";
          if (pppppppcStack_668 != (code *******)0x0) {
            pppppppcStack_6d0 = pppppppcStack_670;
          }
        }
        else {
          pppppppcStack_6d0 = (code *******)"null";
          if (uStack_660._7_1_ != '\0') {
            pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
          }
        }
        if ((long)uStack_680 < 0) {
          pppppppcStack_700 = (code *******)"null";
          if (pppppppcStack_688 != (code *******)0x0) {
            pppppppcStack_700 = pppppppcStack_690;
          }
        }
        else {
          pppppppcStack_700 = (code *******)"null";
          if (uStack_680._7_1_ != '\0') {
            pppppppcStack_700 = (code *******)&pppppppcStack_690;
          }
        }
        FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
        if ((long)uStack_660 < 0) {
          if (pppppppcStack_668 != (code *******)0x0) {
            func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
            goto LAB_10a5b3c68;
          }
LAB_10a5b346c:
          uVar17 = 0;
          pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
        }
        else {
          if (uStack_660._7_1_ == '\0') goto LAB_10a5b346c;
          pppppppcStack_6c8 = pppppppcStack_668;
          pppppppcStack_6d0 = pppppppcStack_670;
          uStack_6c0 = uStack_660;
LAB_10a5b3c68:
          uVar17 = 1;
        }
        uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
        if ((long)uStack_680 < 0) {
          if (pppppppcStack_688 != (code *******)0x0) {
            func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
            goto LAB_10a5b3cb0;
          }
LAB_10a5b3c94:
          uStack_6e8 = 0;
          pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
        }
        else {
          if (uStack_680._7_1_ == '\0') goto LAB_10a5b3c94;
          pppppppcStack_6f8 = pppppppcStack_688;
          pppppppcStack_700 = pppppppcStack_690;
          uStack_6f0 = uStack_680;
LAB_10a5b3cb0:
          uStack_6e8 = 1;
        }
        FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
        goto LAB_10a5b3cc4;
      }
    }
  }
LAB_10a5b1008:
  iVar6 = (int)param_1[1];
  FUN_10a3dda64();
  FUN_10ad055a0();
  if (iVar6 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar14;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b1040;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_670,&UNK_10f6666cf);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
        uStack_680 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_690;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b37a0;
        }
LAB_10a5b3064:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b3064;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b37a0:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
          goto LAB_10a5b3b50;
        }
LAB_10a5b37cc:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b37cc;
        pppppppcStack_6f8 = pppppppcStack_688;
        pppppppcStack_700 = pppppppcStack_690;
        uStack_6f0 = uStack_680;
LAB_10a5b3b50:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b1040:
  iVar6 = (int)*(undefined8 *)(param_1[1] + 0xad0);
  FUN_10a59854c();
  FUN_10ad055a0();
  if (iVar6 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar14;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b107c;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_670,&UNK_10f666722);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
        uStack_680 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_690;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b37e8;
        }
LAB_10a5b30f0:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b30f0;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b37e8:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
          goto LAB_10a5b3b78;
        }
LAB_10a5b3814:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b3814;
        pppppppcStack_6f8 = pppppppcStack_688;
        pppppppcStack_700 = pppppppcStack_690;
        uStack_6f0 = uStack_680;
LAB_10a5b3b78:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b107c:
  iVar6 = (int)*(undefined8 *)(param_1[1] + 0xae0);
  FUN_10a9ef934();
  FUN_10ad055a0();
  if (iVar6 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar14;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b10b8;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_670,&UNK_10f66675d);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
        uStack_680 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_690;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b3830;
        }
LAB_10a5b317c:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b317c;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b3830:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
          goto LAB_10a5b3ba0;
        }
LAB_10a5b385c:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b385c;
        pppppppcStack_6f8 = pppppppcStack_688;
        pppppppcStack_700 = pppppppcStack_690;
        uStack_6f0 = uStack_680;
LAB_10a5b3ba0:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b10b8:
  ppuVar14 = *(undefined ***)(param_1[1] + 0xc48);
  FUN_10a259a24();
  FUN_10ad055a0();
  if ((int)ppuVar14 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      ppuVar14 = (undefined **)*ppuVar14;
      if ((ppuVar14 == (undefined **)0x0) ||
         ((**(code **)(*ppuVar14 + 0x18))(), ppuVar14 == (undefined **)0x0)) goto LAB_10a5b10f4;
      ppuVar9 = ppuVar14 + 7;
    }
    else {
      ppuVar9 = (undefined **)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*ppuVar9 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_670,&UNK_10f6667a1);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
        uStack_680 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_690;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b3878;
        }
LAB_10a5b3284:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b3284;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b3878:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
          goto LAB_10a5b3bc8;
        }
LAB_10a5b38a4:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b38a4;
        pppppppcStack_6f8 = pppppppcStack_688;
        pppppppcStack_700 = pppppppcStack_690;
        uStack_6f0 = uStack_680;
LAB_10a5b3bc8:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b10f4:
  iVar6 = (int)ppuVar14;
  FUN_10ad055a0();
  if (iVar6 != 0) {
    ppuVar14 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar14;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b1124;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar14 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_670,&UNK_10f6667dc);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
        uStack_680 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_690;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b38c0;
        }
LAB_10a5b3294:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b3294;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b38c0:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
          goto LAB_10a5b3bf0;
        }
LAB_10a5b38ec:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b38ec;
        pppppppcStack_6f8 = pppppppcStack_688;
        pppppppcStack_700 = pppppppcStack_690;
        uStack_6f0 = uStack_680;
LAB_10a5b3bf0:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b1124:
  FUN_10a1d33b4(&pppppppcStack_5f0);
  iVar6 = 0xf666820;
  FUN_10a1cc18c(&pppppppcStack_5f0);
  lVar23 = *(long *)(param_1[1] + 0x8a8);
  if ((*(char *)(lVar23 + 0x92) == '\x01') && (*(char *)(lVar23 + 0x94) == '\x01')) {
    lVar15 = lVar23;
    FUN_10a5a12c4();
    iVar6 = (int)lVar15;
    *(undefined1 *)(lVar23 + 0x94) = 0;
  }
  FUN_10ad055a0();
  if (iVar6 != 0) {
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar8 == (undefined *)0x0) {
      ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar8;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b1198;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar8 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_670,&UNK_10f666839);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_690,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_688 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_690 = *(code ********)(lVar23 + 0x208);
        uStack_680 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_660 < 0) {
        pppppppcStack_6d0 = (code *******)"null";
        if (pppppppcStack_668 != (code *******)0x0) {
          pppppppcStack_6d0 = pppppppcStack_670;
        }
      }
      else {
        pppppppcStack_6d0 = (code *******)"null";
        if (uStack_660._7_1_ != '\0') {
          pppppppcStack_6d0 = (code *******)&pppppppcStack_670;
        }
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_700 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_700 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_700 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_700 = (code *******)&pppppppcStack_690;
        }
      }
      FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
      if ((long)uStack_660 < 0) {
        if (pppppppcStack_668 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_670);
          goto LAB_10a5b3908;
        }
LAB_10a5b3320:
        uVar17 = 0;
        pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_660._7_1_ == '\0') goto LAB_10a5b3320;
        pppppppcStack_6c8 = pppppppcStack_668;
        pppppppcStack_6d0 = pppppppcStack_670;
        uStack_6c0 = uStack_660;
LAB_10a5b3908:
        uVar17 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_690);
          goto LAB_10a5b3c18;
        }
LAB_10a5b3934:
        uStack_6e8 = 0;
        pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b3934;
        pppppppcStack_6f8 = pppppppcStack_688;
        pppppppcStack_700 = pppppppcStack_690;
        uStack_6f0 = uStack_680;
LAB_10a5b3c18:
        uStack_6e8 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b1198:
  FUN_10a1d33b4(&pppppppcStack_5f0);
  pppppppcStack_6d0 = (code *******)param_1[1];
  uStack_6c0 = (code *******)0x0;
  pppppppcStack_6c8 = (code *******)0x0;
  uStack_6b0 = 0;
  uStack_6b8 = 0;
  uStack_6a8 = 0x3f800000;
  pppppppcStack_6d0[0x1af] = (code ******)&pppppppcStack_6d0;
  FUN_10a1cc18c(&pppppppcStack_700,&UNK_10f66687e);
  pppppppcVar20 = (code *******)(param_1[1] + 0xd48);
  FUN_10a5aeb74(pppppppcVar20,&PTR_DAT_110bd9dd0);
  pppppppcVar24 = (code *******)pppppppcVar20[1];
  pppppppcVar26 = pppppppcVar20;
  if (pppppppcVar24 != pppppppcVar20) {
    iVar6 = *(int *)(*(long *)(param_1[1] + 0x850) + 0x30);
    ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    pppppppcVar26 = (code *******)ppuVar14;
    do {
      ppppppcVar28 = pppppppcVar24[5];
      if ((((ulong)ppppppcVar28[0x30] & 0x17) == 0) &&
         ((*(char *)((long)ppppppcVar28 + 0x25c) != '\x01' ||
          (*(int *)(ppppppcVar28 + 0x4b) != iVar6)))) {
        pppppcVar22 = ppppppcVar28[0x2d];
        do {
          pppppcVar21 = pppppcVar22;
          pppppcVar22 = (code *****)pppppcVar21[0x31];
        } while (pppppcVar22 != (code *****)0x0);
        pppppppcStack_610 = (code *******)0x0;
        pppppppcStack_608 = (code *******)0x0;
        uStack_600 = (code *******)0x0;
        pppppppcStack_5f0 = (code *******)FUN_10a5d20d8;
        pppppppcStack_5e8 = (code *******)&PTR_FUN_110bf80e8;
        puStack_5d8 = (undefined *)CONCAT44(puStack_5d8._4_4_,iVar6);
        uStack_5e0 = (undefined **)&pppppppcStack_610;
        FUN_10a3e75d4(pppppcVar21,&pppppppcStack_5f0,0);
        iVar7 = (int)&pppppppcStack_5e8;
        (*(code *)*pppppppcStack_5e8)();
        FUN_10ad055a0();
        if (iVar7 != 0) {
          if (*ppuVar8 == (undefined *)0x0) {
            ppppppcVar28 = (code ******)*ppuVar14;
            if ((ppppppcVar28 == (code ******)0x0) ||
               ((*(code *)(*ppppppcVar28)[3])(), ppppppcVar28 == (code ******)0x0))
            goto LAB_10a5b12d8;
            ppppppcVar28 = ppppppcVar28 + 7;
          }
          else {
            ppppppcVar28 = (code ******)(*ppuVar8 + 8);
          }
          if (((uint)(*ppppppcVar28)[2] >> 1 & 1) != 0) {
            func_0x000107c2b054(&pppppppcStack_630,&UNK_10f666959);
            lVar23 = *(long *)(param_1[1] + 0x100);
            if (*(char *)(lVar23 + 0x21f) < '\0') {
              func_0x000107c3192c(&pppppppcStack_650,*(undefined8 *)(lVar23 + 0x208),
                                  *(undefined8 *)(lVar23 + 0x210));
            }
            else {
              pppppppcStack_648 = *(code ********)(lVar23 + 0x210);
              pppppppcStack_650 = *(code ********)(lVar23 + 0x208);
              uStack_640 = *(code ********)(lVar23 + 0x218);
            }
            if ((long)uStack_620 < 0) {
              pppppppcStack_670 = (code *******)"null";
              if (pppppppcStack_628 != (code *******)0x0) {
                pppppppcStack_670 = pppppppcStack_630;
              }
            }
            else {
              pppppppcStack_670 = (code *******)"null";
              if (uStack_620._7_1_ != '\0') {
                pppppppcStack_670 = (code *******)&pppppppcStack_630;
              }
            }
            if ((long)uStack_640 < 0) {
              pppppppcStack_690 = (code *******)"null";
              if (pppppppcStack_648 != (code *******)0x0) {
                pppppppcStack_690 = pppppppcStack_650;
              }
            }
            else {
              pppppppcStack_690 = (code *******)"null";
              if (uStack_640._7_1_ != '\0') {
                pppppppcStack_690 = (code *******)&pppppppcStack_650;
              }
            }
            FUN_10a224324(&pppppppcStack_670,&pppppppcStack_690);
            if ((long)uStack_620 < 0) {
              if (pppppppcStack_628 != (code *******)0x0) {
                func_0x000107c3192c(&pppppppcStack_670,pppppppcStack_630);
                goto LAB_10a5b25d8;
              }
LAB_10a5b2164:
              uStack_658 = 0;
              pppppppcStack_670 = (code *******)((ulong)pppppppcStack_670 & 0xffffffffffffff00);
            }
            else {
              if (uStack_620._7_1_ == '\0') goto LAB_10a5b2164;
              pppppppcStack_668 = pppppppcStack_628;
              pppppppcStack_670 = pppppppcStack_630;
              uStack_660 = uStack_620;
LAB_10a5b25d8:
              uStack_658 = 1;
            }
            if ((long)uStack_640 < 0) {
              if (pppppppcStack_648 != (code *******)0x0) {
                func_0x000107c3192c(&pppppppcStack_690,pppppppcStack_650);
                goto LAB_10a5b2620;
              }
LAB_10a5b2604:
              uStack_678 = 0;
              pppppppcStack_690 = (code *******)((ulong)pppppppcStack_690 & 0xffffffffffffff00);
            }
            else {
              if (uStack_640._7_1_ == '\0') goto LAB_10a5b2604;
              pppppppcStack_688 = pppppppcStack_648;
              pppppppcStack_690 = pppppppcStack_650;
              uStack_680 = uStack_640;
LAB_10a5b2620:
              uStack_678 = 1;
            }
            FUN_10a234a0c(&pppppppcStack_670,&pppppppcStack_690);
            goto LAB_10a5b3cc4;
          }
        }
LAB_10a5b12d8:
        pppppppcVar26 = pppppppcStack_610;
        if (pppppppcStack_610 != (code *******)0x0) {
          pppppppcStack_608 = pppppppcStack_610;
          __ZdlPv();
        }
      }
      pppppppcVar24 = (code *******)pppppppcVar24[1];
    } while (pppppppcVar24 != pppppppcVar20);
  }
  iVar6 = (int)pppppppcVar26;
  FUN_10ad055a0();
  ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
  if (iVar6 != 0) {
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar8 == (undefined *)0x0) {
      ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar11 = (long *)*ppuVar8;
      if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0))
      goto LAB_10a5b135c;
      plVar11 = plVar11 + 7;
    }
    else {
      plVar11 = (long *)(*ppuVar8 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppcStack_690,&UNK_10f666896);
      lVar23 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar23 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppcStack_610,*(undefined8 *)(lVar23 + 0x208),
                            *(undefined8 *)(lVar23 + 0x210));
      }
      else {
        pppppppcStack_608 = *(code ********)(lVar23 + 0x210);
        pppppppcStack_610 = *(code ********)(lVar23 + 0x208);
        uStack_600 = *(code ********)(lVar23 + 0x218);
      }
      if ((long)uStack_680 < 0) {
        pppppppcStack_5f0 = (code *******)"null";
        if (pppppppcStack_688 != (code *******)0x0) {
          pppppppcStack_5f0 = pppppppcStack_690;
        }
      }
      else {
        pppppppcStack_5f0 = (code *******)"null";
        if (uStack_680._7_1_ != '\0') {
          pppppppcStack_5f0 = (code *******)&pppppppcStack_690;
        }
      }
      if ((long)uStack_600 < 0) {
        pppppppcStack_670 = (code *******)"null";
        if (pppppppcStack_608 != (code *******)0x0) {
          pppppppcStack_670 = pppppppcStack_610;
        }
      }
      else {
        pppppppcStack_670 = (code *******)"null";
        if (uStack_600._7_1_ != '\0') {
          pppppppcStack_670 = (code *******)&pppppppcStack_610;
        }
      }
      FUN_10a224324(&pppppppcStack_5f0,&pppppppcStack_670);
      if ((long)uStack_680 < 0) {
        if (pppppppcStack_688 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_5f0,pppppppcStack_690);
          goto LAB_10a5b3950;
        }
LAB_10a5b33ac:
        uVar17 = 0;
        pppppppcStack_5f0 = (code *******)((ulong)pppppppcStack_5f0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_680._7_1_ == '\0') goto LAB_10a5b33ac;
        pppppppcStack_5e8 = pppppppcStack_688;
        pppppppcStack_5f0 = pppppppcStack_690;
        uStack_5e0 = (undefined **)uStack_680;
LAB_10a5b3950:
        uVar17 = 1;
      }
      puStack_5d8 = (undefined *)CONCAT71(puStack_5d8._1_7_,uVar17);
      if ((long)uStack_600 < 0) {
        if (pppppppcStack_608 != (code *******)0x0) {
          func_0x000107c3192c(&pppppppcStack_670,pppppppcStack_610);
          goto LAB_10a5b3c40;
        }
LAB_10a5b397c:
        uStack_658 = 0;
        pppppppcStack_670 = (code *******)((ulong)pppppppcStack_670 & 0xffffffffffffff00);
      }
      else {
        if (uStack_600._7_1_ == '\0') goto LAB_10a5b397c;
        pppppppcStack_668 = pppppppcStack_608;
        pppppppcStack_670 = pppppppcStack_610;
        uStack_660 = uStack_600;
LAB_10a5b3c40:
        uStack_658 = 1;
      }
      FUN_10a234a0c(&pppppppcStack_5f0,&pppppppcStack_670);
      goto LAB_10a5b3cc4;
    }
  }
LAB_10a5b135c:
  FUN_10a1d33b4(&pppppppcStack_700);
  FUN_10a1cc18c(&pppppppcStack_5f0,&UNK_10f6668db);
  puVar19 = param_1[1] + 0xd48;
  FUN_10a5aeb74(puVar19,&PTR_DAT_110bcfa10);
  uVar32 = 0xffffffffffffffff;
  lVar23 = 8;
  puVar27 = puVar19;
  do {
    puVar27 = *(undefined **)(puVar27 + 8);
    lVar23 = lVar23 + -8;
    uVar32 = uVar32 + 1;
  } while (puVar27 != puVar19);
  pppppppcStack_690 = (code *******)0x0;
  pppppppcStack_688 = (code *******)0x0;
  uStack_680 = (code *******)0x0;
  if (uVar32 == 0) {
    pppppppcVar20 = (code *******)0x0;
  }
  else {
    if (uVar32 >> 0x3d != 0) {
      FUN_10a5d206c();
      goto LAB_10a5b3cc4;
    }
    pppppppcVar20 = (code *******)-lVar23;
    __Znwm();
    pppppppcStack_690 = pppppppcVar20;
    uStack_680 = (code *******)((long)pppppppcVar20 - lVar23);
    _bzero();
    pppppppcStack_688 = (code *******)((long)pppppppcVar20 - lVar23);
  }
  pppppppcVar24 = pppppppcStack_688;
  pppppppcVar26 = pppppppcVar20;
  for (puVar27 = *(undefined **)(puVar19 + 8); puVar27 != puVar19;
      puVar27 = *(undefined **)(puVar27 + 8)) {
    ppppppcVar28 = *(code *******)(puVar27 + 0x28);
    if (ppppppcVar28 != (code ******)0x0) {
      *pppppppcVar26 = ppppppcVar28;
      ppppppcVar28[3] = (code *****)pppppppcVar26;
    }
    pppppppcVar26 = pppppppcVar26 + 1;
  }
  if (pppppppcVar20 != pppppppcStack_688) {
    ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    ppuVar14 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    do {
      ppppppcVar28 = *pppppppcVar20;
      if (ppppppcVar28 != (code ******)0x0) {
        (*(code *)(*ppppppcVar28)[2])();
        iVar6 = (int)ppppppcVar28;
        FUN_10ad055a0();
        if (iVar6 != 0) {
          if (*ppuVar8 == (undefined *)0x0) {
            plVar11 = (long *)*ppuVar14;
            if ((plVar11 == (long *)0x0) ||
               ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0)) goto LAB_10a5b148c;
            plVar11 = plVar11 + 7;
          }
          else {
            plVar11 = (long *)(*ppuVar8 + 8);
          }
          if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
            func_0x000107c2b054(&pppppppcStack_610,&UNK_10f6668f3);
            lVar23 = *(long *)(param_1[1] + 0x100);
            if (*(char *)(lVar23 + 0x21f) < '\0') {
              func_0x000107c3192c(&pppppppcStack_630,*(undefined8 *)(lVar23 + 0x208),
                                  *(undefined8 *)(lVar23 + 0x210));
            }
            else {
              pppppppcStack_628 = *(code ********)(lVar23 + 0x210);
              pppppppcStack_630 = *(code ********)(lVar23 + 0x208);
              uStack_620 = *(code ********)(lVar23 + 0x218);
            }
            if ((long)uStack_600 < 0) {
              pppppppcStack_700 = (code *******)"null";
              if (pppppppcStack_608 != (code *******)0x0) {
                pppppppcStack_700 = pppppppcStack_610;
              }
            }
            else {
              pppppppcStack_700 = (code *******)"null";
              if (uStack_600._7_1_ != '\0') {
                pppppppcStack_700 = (code *******)&pppppppcStack_610;
              }
            }
            if ((long)uStack_620 < 0) {
              pppppppcStack_670 = (code *******)"null";
              if (pppppppcStack_628 != (code *******)0x0) {
                pppppppcStack_670 = pppppppcStack_630;
              }
            }
            else {
              pppppppcStack_670 = (code *******)"null";
              if (uStack_620._7_1_ != '\0') {
                pppppppcStack_670 = (code *******)&pppppppcStack_630;
              }
            }
            FUN_10a224324(&pppppppcStack_700,&pppppppcStack_670);
            if ((long)uStack_600 < 0) {
              if (pppppppcStack_608 != (code *******)0x0) {
                func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_610);
                goto LAB_10a5b20ac;
              }
LAB_10a5b1fb4:
              uStack_6e8 = 0;
              pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
            }
            else {
              if (uStack_600._7_1_ == '\0') goto LAB_10a5b1fb4;
              pppppppcStack_6f8 = pppppppcStack_608;
              pppppppcStack_700 = pppppppcStack_610;
              uStack_6f0 = uStack_600;
LAB_10a5b20ac:
              uStack_6e8 = 1;
            }
            if ((long)uStack_620 < 0) {
              if (pppppppcStack_628 != (code *******)0x0) {
                func_0x000107c3192c(&pppppppcStack_670,pppppppcStack_630);
                goto LAB_10a5b21d0;
              }
LAB_10a5b20d8:
              uStack_658 = 0;
              pppppppcStack_670 = (code *******)((ulong)pppppppcStack_670 & 0xffffffffffffff00);
            }
            else {
              if (uStack_620._7_1_ == '\0') goto LAB_10a5b20d8;
              pppppppcStack_668 = pppppppcStack_628;
              pppppppcStack_670 = pppppppcStack_630;
              uStack_660 = uStack_620;
LAB_10a5b21d0:
              uStack_658 = 1;
            }
            FUN_10a234a0c(&pppppppcStack_700,&pppppppcStack_670);
            goto LAB_10a5b3cc4;
          }
        }
      }
LAB_10a5b148c:
      pppppppcVar20 = pppppppcVar20 + 1;
    } while (pppppppcVar20 != pppppppcVar24);
  }
  FUN_10a5d2080(&pppppppcStack_690);
  FUN_10a1d33b4(&pppppppcStack_5f0);
  pppppppcStack_6d0[0x1af] = (code ******)0x0;
  func_0x00010a679538(&pppppppcStack_6c8);
  FUN_10a044790(&pppppppcStack_598);
  (*(code *)*pppppppcStack_590)(&pppppppcStack_590);
  FUN_10a044790(apppppppcStack_480 + 1);
  (*(code *)*pppppppcStack_470)(&pppppppcStack_470);
  FUN_10a1bff04(&lStack_6a0);
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_468[0x7e]) {
    return;
  }
  ___stack_chk_fail();
  iVar6 = extraout_w8;
LAB_10a5b1e1c:
  pppppppcStack_6d0 = (code *******)"null";
  if (iVar6 != 0) {
    pppppppcStack_6d0 = (code *******)&pppppppcStack_690;
  }
LAB_10a5b1e30:
  if ((long)uStack_600 < 0) {
    pppppppcStack_700 = (code *******)"null";
    if (pppppppcStack_608 != (code *******)0x0) {
      pppppppcStack_700 = pppppppcStack_610;
    }
  }
  else {
    pppppppcStack_700 = (code *******)"null";
    if (uStack_600._7_1_ != '\0') {
      pppppppcStack_700 = (code *******)&pppppppcStack_610;
    }
  }
  FUN_10a224324(&pppppppcStack_6d0,&pppppppcStack_700);
  if ((long)uStack_680 < 0) {
    if (pppppppcStack_688 != (code *******)0x0) {
      func_0x000107c3192c(&pppppppcStack_6d0,pppppppcStack_690);
      goto LAB_10a5b201c;
    }
LAB_10a5b1e9c:
    uVar17 = 0;
    pppppppcStack_6d0 = (code *******)((ulong)pppppppcStack_6d0 & 0xffffffffffffff00);
  }
  else {
    if (uStack_680._7_1_ == '\0') goto LAB_10a5b1e9c;
    pppppppcStack_6c8 = pppppppcStack_688;
    pppppppcStack_6d0 = pppppppcStack_690;
    uStack_6c0 = uStack_680;
LAB_10a5b201c:
    uVar17 = 1;
  }
  uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar17);
  if ((long)uStack_600 < 0) {
    if (pppppppcStack_608 != (code *******)0x0) {
      func_0x000107c3192c(&pppppppcStack_700,pppppppcStack_610);
      goto LAB_10a5b2180;
    }
LAB_10a5b2048:
    uStack_6e8 = 0;
    pppppppcStack_700 = (code *******)((ulong)pppppppcStack_700 & 0xffffffffffffff00);
  }
  else {
    if (uStack_600._7_1_ == '\0') goto LAB_10a5b2048;
    pppppppcStack_6f8 = pppppppcStack_608;
    pppppppcStack_700 = pppppppcStack_610;
    uStack_6f0 = uStack_600;
LAB_10a5b2180:
    uStack_6e8 = 1;
  }
  FUN_10a234a0c(&pppppppcStack_6d0,&pppppppcStack_700);
LAB_10a5b3cc4:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5b3cc8);
  (*pcVar4)();
}



/* Entry: 10a5b44b8; end: 10a5b4967;  */

void FUN_10a5b44b8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  int iVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long *plVar11;
  undefined8 ****ppppuVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 **ppuVar16;
  long ****pppplVar17;
  undefined8 ***pppuVar18;
  long ***ppplStack_100;
  undefined *puStack_f8;
  ulong uStack_f0;
  undefined1 uStack_e8;
  undefined8 ***pppuStack_e0;
  long **pplStack_d8;
  long **pplStack_d0;
  undefined1 uStack_c8;
  long ***ppplStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 ***pppuStack_a0;
  long **pplStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long ****pppplVar10;
  
  FUN_10a3c3be8(*(undefined8 *)(*(long *)(param_1 + 8) + 0x858));
  lVar14 = *(long *)(param_1 + 8);
  if (0x91 < *(int *)(*(long *)(lVar14 + 0xa20) + 0x18)) {
    plStack_68 = *(long **)(lVar14 + 0x4e0);
    uStack_70 = 0;
    uStack_58 = *(undefined8 *)(lVar14 + 0x4f0);
    plStack_60 = *(long **)(lVar14 + 0x4e8);
    *(undefined8 *)(lVar14 + 0x4e0) = 0;
    *(undefined8 *)(lVar14 + 0x4e8) = 0;
    *(undefined8 *)(lVar14 + 0x4f0) = 0;
    puStack_80 = (undefined8 *)0x0;
    puStack_78 = (undefined8 *)0x0;
    FUN_10a3ec498(&puStack_80,(long)plStack_60 - (long)plStack_68 >> 4);
    plVar11 = plStack_60;
    for (ppuVar16 = (undefined8 **)plStack_68; ppuVar16 != (undefined8 **)plVar11;
        ppuVar16 = ppuVar16 + 2) {
      plVar7 = ppuVar16[1];
      if ((plVar7 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
        pppuVar18 = (undefined8 ***)*ppuVar16;
        plVar1 = plVar7 + 1;
        do {
          lVar14 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
        pppuStack_e0 = pppuVar18;
        if (pppuVar18 != (undefined8 ***)0x0) {
          FUN_10a3e4750(&puStack_80,&pppuStack_e0);
        }
      }
    }
    lVar14 = 0;
    if (puStack_78 != puStack_80) {
      lVar14 = LZCOUNT((long)puStack_78 - (long)puStack_80 >> 3) * -2 + 0x7e;
    }
    FUN_10a5bdf88(puStack_80,puStack_78,lVar14,1);
    puVar4 = puStack_78;
    puVar15 = puStack_80;
    if (puStack_80 != puStack_78) {
      ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
      (*(code *)PTR___tlv_bootstrap_11340dfd8)();
      ppuVar9 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      do {
        pppplVar17 = (long ****)*puVar15;
        if (((ulong)pppplVar17[0x30] & 0x50) == 0) {
          pppplVar10 = pppplVar17;
          FUN_10a3c6bf8();
          iVar6 = (int)pppplVar10;
          FUN_10ad055a0();
          if (iVar6 != 0) {
            if (*ppuVar8 == (undefined *)0x0) {
              plVar11 = (long *)*ppuVar9;
              if ((plVar11 == (long *)0x0) ||
                 ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0)) goto LAB_10a5b463c;
              plVar11 = plVar11 + 7;
            }
            else {
              plVar11 = (long *)(*ppuVar8 + 8);
            }
            if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
              puVar13 = &UNK_10f66606b;
              func_0x000107c2b054(&pppuStack_e0);
              (*(code *)(*pppplVar17)[7])();
              ppplStack_c0 = (long ***)pppplVar17;
              puStack_b8 = puVar13;
              func_0x0001098998d4(&ppplStack_100,&ppplStack_c0);
              puVar13 = puStack_f8;
              pppplVar17 = (long ****)ppplStack_100;
              if (-1 < (long)uStack_f0) {
                puVar13 = (undefined *)(uStack_f0 >> 0x38);
                pppplVar17 = &ppplStack_100;
              }
              ppppuVar12 = &pppuStack_e0;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (ppppuVar12,pppplVar17,puVar13);
              pplStack_98 = (long **)ppppuVar12[1];
              pppuStack_a0 = *ppppuVar12;
              uStack_90 = ppppuVar12[2];
              ppppuVar12[1] = (undefined8 ***)0x0;
              ppppuVar12[2] = (undefined8 ***)0x0;
              *ppppuVar12 = (undefined8 ***)0x0;
              if ((long)uStack_f0 < 0) {
                __ZdlPv(ppplStack_100);
              }
              if ((long)pplStack_d0 < 0) {
                __ZdlPv(pppuStack_e0);
              }
              lVar14 = *(long *)(*(long *)(param_1 + 8) + 0x100);
              if (*(char *)(lVar14 + 0x21f) < '\0') {
                func_0x000107c3192c(&ppplStack_c0,*(undefined8 *)(lVar14 + 0x208),
                                    *(undefined8 *)(lVar14 + 0x210));
              }
              else {
                puStack_b8 = *(undefined **)(lVar14 + 0x210);
                ppplStack_c0 = *(long ****)(lVar14 + 0x208);
                uStack_b0 = *(ulong *)(lVar14 + 0x218);
              }
              if ((long)uStack_90 < 0) {
                pppuStack_e0 = (undefined8 ***)"null";
                if ((undefined8 ***)pplStack_98 != (undefined8 ***)0x0) {
                  pppuStack_e0 = pppuStack_a0;
                }
              }
              else {
                pppuStack_e0 = (undefined8 ***)"null";
                if (uStack_90._7_1_ != '\0') {
                  pppuStack_e0 = &pppuStack_a0;
                }
              }
              if ((long)uStack_b0 < 0) {
                ppplStack_100 = (long ***)"null";
                if (puStack_b8 != (undefined *)0x0) {
                  ppplStack_100 = ppplStack_c0;
                }
              }
              else {
                ppplStack_100 = (long ***)"null";
                if (uStack_b0._7_1_ != '\0') {
                  ppplStack_100 = (long ***)&ppplStack_c0;
                }
              }
              FUN_10a224324(&pppuStack_e0,&ppplStack_100);
              if ((long)uStack_90 < 0) {
                if ((undefined8 ***)pplStack_98 != (undefined8 ***)0x0) {
                  func_0x000107c3192c(&pppuStack_e0,pppuStack_a0);
                  goto LAB_10a5b482c;
                }
LAB_10a5b4810:
                uStack_c8 = 0;
                pppuStack_e0 = (undefined8 ***)((ulong)pppuStack_e0 & 0xffffffffffffff00);
              }
              else {
                if (uStack_90._7_1_ == '\0') goto LAB_10a5b4810;
                pplStack_d8 = pplStack_98;
                pppuStack_e0 = pppuStack_a0;
                pplStack_d0 = (long **)uStack_90;
LAB_10a5b482c:
                uStack_c8 = 1;
              }
              if ((long)uStack_b0 < 0) {
                if (puStack_b8 == (undefined *)0x0) {
LAB_10a5b4858:
                  uStack_e8 = 0;
                  ppplStack_100 = (long ***)((ulong)ppplStack_100 & 0xffffffffffffff00);
                  goto LAB_10a5b4878;
                }
                func_0x000107c3192c(&ppplStack_100,ppplStack_c0);
              }
              else {
                if (uStack_b0._7_1_ == '\0') goto LAB_10a5b4858;
                puStack_f8 = puStack_b8;
                ppplStack_100 = ppplStack_c0;
                uStack_f0 = uStack_b0;
              }
              uStack_e8 = 1;
LAB_10a5b4878:
              FUN_10a234a0c(&pppuStack_e0,&ppplStack_100);
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10a5b488c);
              (*pcVar5)();
            }
          }
        }
LAB_10a5b463c:
        puVar15 = puVar15 + 1;
      } while (puVar15 != puVar4);
    }
    if (puStack_80 != (undefined8 *)0x0) {
      puStack_78 = puStack_80;
      __ZdlPv(puStack_80);
    }
    pppuStack_e0 = (undefined8 ***)&plStack_68;
    FUN_10a0d80a4(&pppuStack_e0);
  }
  return;
}



/* Entry: 10a5b4968; end: 10a5b4ecf;  */

void FUN_10a5b4968(long param_1,ulong param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long *plVar7;
  long ****pppplVar8;
  undefined *puVar9;
  long ****pppplVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long ***ppplStack_130;
  undefined *puStack_128;
  ulong uStack_120;
  undefined1 uStack_118;
  long ***ppplStack_110;
  undefined8 **ppuStack_108;
  undefined8 **ppuStack_100;
  undefined1 uStack_f8;
  long ***ppplStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long ***ppplStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 uStack_c0;
  long ***ppplStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(*(long *)(*(long *)(param_1 + 8) + 0xa20) + 0x18) < 0x135) {
    bVar1 = 0;
    if ((param_2 & 1) != 0) goto LAB_10a5b4a4c;
LAB_10a5b4a44:
    if ((bVar1 & 1) != 0) goto LAB_10a5b4a4c;
  }
  else {
    ppuVar5 = &PTR___tlv_bootstrap_11340de28;
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    ppplStack_b8 = (long ***)&UNK_10f63b699;
    uStack_b0 = 0x28;
    if (*ppuVar5 == (undefined *)0x0) goto LAB_10a5b4dec;
    pppplVar10 = (long ****)(*ppuVar5 + 0x10);
    if ((*pppplVar10 != (long ***)0x0) &&
       (ppplStack_130 = (long ***)pppplVar10, lRam00000001137eb450 != -1)) {
      ppplStack_b8 = (long ***)&ppplStack_130;
      ppplStack_110 = (long ***)&ppplStack_b8;
      __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137eb450,&ppplStack_110,FUN_10a5bf3a4);
    }
    bVar1 = bRam00000001133028c0;
    if ((param_2 & 1) == 0) goto LAB_10a5b4a44;
LAB_10a5b4a4c:
    ppuVar5 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    ppuVar6 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    uVar15 = 0;
    while( true ) {
      lVar11 = *(long *)(param_1 + 8);
      lStack_a0 = lVar11 + 0x780;
      *(int *)(lVar11 + 0x780) = *(int *)(lVar11 + 0x780) + 1;
      ppplStack_b8 = (long ***)(lVar11 + 0x7a0);
      uStack_b0 = 0x10a5d1a94;
      ppuStack_a8 = &PTR_DAT_110bf8090;
      plVar16 = *(long **)(lVar11 + 0x7a0);
      if (plVar16 == (long *)(lVar11 + 0x7a8)) break;
      uVar13 = 0;
      do {
        for (plVar14 = (long *)plVar16[5]; plVar14 != plVar16 + 5; plVar14 = (long *)*plVar14) {
          if ((*(ushort *)(plVar14 + 0x22) >> 4 & 1) == 0) {
            pppplVar8 = (long ****)(plVar14 + -0xe);
            pppplVar10 = pppplVar8;
            FUN_10a3c6f84();
            uVar4 = uVar12;
            FUN_10ad055a0();
            uVar12 = (uint)pppplVar10;
            uVar13 = uVar13 | uVar12;
            if (uVar4 != 0) {
              if (*ppuVar5 == (undefined *)0x0) {
                plVar7 = (long *)*ppuVar6;
                if ((plVar7 == (long *)0x0) ||
                   ((**(code **)(*plVar7 + 0x18))(), plVar7 == (long *)0x0)) goto LAB_10a5b4b10;
                plVar7 = plVar7 + 7;
              }
              else {
                plVar7 = (long *)(*ppuVar5 + 8);
              }
              if (((uint)*(undefined8 *)(*plVar7 + 0x10) >> 1 & 1) != 0) {
                puVar9 = &UNK_10f666096;
                func_0x000107c2b054(&ppplStack_110);
                (*(code *)(*pppplVar8)[7])();
                ppplStack_f0 = (long ***)pppplVar8;
                puStack_e8 = puVar9;
                func_0x0001098998d4(&ppplStack_130,&ppplStack_f0);
                puVar9 = puStack_128;
                pppplVar10 = (long ****)ppplStack_130;
                if (-1 < (long)uStack_120) {
                  puVar9 = (undefined *)(uStack_120 >> 0x38);
                  pppplVar10 = &ppplStack_130;
                }
                pppplVar8 = &ppplStack_110;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (pppplVar8,pppplVar10,puVar9);
                ppuStack_c8 = pppplVar8[1];
                ppplStack_d0 = *pppplVar8;
                uStack_c0 = pppplVar8[2];
                pppplVar8[1] = (long ***)0x0;
                pppplVar8[2] = (long ***)0x0;
                *pppplVar8 = (long ***)0x0;
                if ((long)uStack_120 < 0) {
                  __ZdlPv(ppplStack_130);
                }
                if ((long)ppuStack_100 < 0) {
                  __ZdlPv(ppplStack_110);
                }
                lVar11 = *(long *)(*(long *)(param_1 + 8) + 0x100);
                if (*(char *)(lVar11 + 0x21f) < '\0') {
                  func_0x000107c3192c(&ppplStack_f0,*(undefined8 *)(lVar11 + 0x208),
                                      *(undefined8 *)(lVar11 + 0x210));
                }
                else {
                  puStack_e8 = *(undefined **)(lVar11 + 0x210);
                  ppplStack_f0 = *(long ****)(lVar11 + 0x208);
                  uStack_e0 = *(ulong *)(lVar11 + 0x218);
                }
                if ((long)uStack_c0 < 0) {
                  ppplStack_110 = (long ***)"null";
                  if ((long ***)ppuStack_c8 != (long ***)0x0) {
                    ppplStack_110 = ppplStack_d0;
                  }
                }
                else {
                  ppplStack_110 = (long ***)"null";
                  if (uStack_c0._7_1_ != '\0') {
                    ppplStack_110 = (long ***)&ppplStack_d0;
                  }
                }
                if ((long)uStack_e0 < 0) {
                  ppplStack_130 = (long ***)"null";
                  if (puStack_e8 != (undefined *)0x0) {
                    ppplStack_130 = ppplStack_f0;
                  }
                }
                else {
                  ppplStack_130 = (long ***)"null";
                  if (uStack_e0._7_1_ != '\0') {
                    ppplStack_130 = (long ***)&ppplStack_f0;
                  }
                }
                FUN_10a224324(&ppplStack_110,&ppplStack_130);
                if ((long)uStack_c0 < 0) {
                  if ((long ***)ppuStack_c8 != (long ***)0x0) {
                    func_0x000107c3192c(&ppplStack_110,ppplStack_d0);
                    goto LAB_10a5b4d88;
                  }
LAB_10a5b4d6c:
                  uStack_f8 = 0;
                  ppplStack_110 = (long ***)((ulong)ppplStack_110 & 0xffffffffffffff00);
                }
                else {
                  if (uStack_c0._7_1_ == '\0') goto LAB_10a5b4d6c;
                  ppuStack_108 = ppuStack_c8;
                  ppplStack_110 = ppplStack_d0;
                  ppuStack_100 = uStack_c0;
LAB_10a5b4d88:
                  uStack_f8 = 1;
                }
                if ((long)uStack_e0 < 0) {
                  if (puStack_e8 != (undefined *)0x0) {
                    func_0x000107c3192c(&ppplStack_130,ppplStack_f0);
                    goto LAB_10a5b4dd0;
                  }
LAB_10a5b4db4:
                  uStack_118 = 0;
                  ppplStack_130 = (long ***)((ulong)ppplStack_130 & 0xffffffffffffff00);
                }
                else {
                  if (uStack_e0._7_1_ == '\0') goto LAB_10a5b4db4;
                  puStack_128 = puStack_e8;
                  ppplStack_130 = ppplStack_f0;
                  uStack_120 = uStack_e0;
LAB_10a5b4dd0:
                  uStack_118 = 1;
                }
                FUN_10a234a0c(&ppplStack_110,&ppplStack_130);
                goto LAB_10a5b4df4;
              }
            }
          }
LAB_10a5b4b10:
        }
        plVar14 = (long *)plVar16[1];
        plVar7 = plVar16;
        if ((long *)plVar16[1] == (long *)0x0) {
          do {
            plVar16 = (long *)plVar7[2];
            bVar3 = (long *)*plVar16 != plVar7;
            plVar7 = plVar16;
          } while (bVar3);
        }
        else {
          do {
            plVar16 = plVar14;
            plVar14 = (long *)*plVar16;
          } while ((long *)*plVar16 != (long *)0x0);
        }
      } while (plVar16 != (long *)(lVar11 + 0x7a8));
      FUN_10a044790(&uStack_b0);
      (*(code *)*ppuStack_a8)(&ppuStack_a8);
      if (((uVar13 & 1) == 0) || (bVar3 = uVar15 < 99, uVar15 = uVar15 + 1, (bVar1 & bVar3) != 1))
      goto LAB_10a5b4bcc;
    }
    FUN_10a044790(&uStack_b0);
    (*(code *)*ppuStack_a8)(&ppuStack_a8);
  }
LAB_10a5b4bcc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_10a5b4dec:
  FUN_10a0edfc4(&ppplStack_b8);
LAB_10a5b4df4:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5b4df8);
  (*pcVar2)();
}



/* Entry: 10a5b4ed0; end: 10a5b63d7;  */

/* WARNING: Removing unreachable block (ram,0x00010a5b5740) */

void FUN_10a5b4ed0(undefined **param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  undefined ********ppppppppuVar5;
  undefined ********ppppppppuVar6;
  undefined ********ppppppppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long *plVar12;
  undefined1 uVar13;
  int extraout_w8;
  undefined *****pppppuVar14;
  long lVar15;
  long extraout_x8;
  ulong uVar16;
  undefined *******pppppppuVar17;
  undefined *puVar18;
  undefined *******pppppppuVar19;
  long lVar20;
  undefined ********ppppppppuVar21;
  undefined ********ppppppppuVar22;
  undefined ******ppppppuVar23;
  undefined **ppuVar24;
  undefined *******pppppppuStack_160;
  undefined *******pppppppuStack_158;
  undefined8 uStack_150;
  undefined *******pppppppuStack_140;
  undefined *******pppppppuStack_138;
  undefined8 uStack_130;
  undefined *******pppppppuStack_120;
  undefined *******pppppppuStack_118;
  undefined8 uStack_110;
  undefined *******pppppppuStack_108;
  undefined *******pppppppuStack_100;
  undefined7 uStack_f8;
  char cStack_f1;
  undefined *******pppppppuStack_f0;
  undefined *******pppppppuStack_e8;
  undefined *******pppppppuStack_e0;
  undefined *******pppppppuStack_d8;
  undefined *******pppppppuStack_d0;
  undefined *******pppppppuStack_b0;
  undefined *******pppppppuStack_a8;
  undefined *******pppppppuStack_a0;
  undefined *******pppppppuStack_98;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar24 = param_1;
  FUN_10ad055a0();
  ppuVar10 = &PTR___tlv_bootstrap_11340dfd8;
  ppuVar11 = &PTR___tlv_bootstrap_11340dd98;
  if ((int)ppuVar24 != 0) {
    ppuVar24 = ppuVar10;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar24 == (undefined *)0x0) {
      ppuVar24 = ppuVar11;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      ppuVar24 = (undefined **)*ppuVar24;
      if ((ppuVar24 == (undefined **)0x0) ||
         ((**(code **)(*ppuVar24 + 0x18))(), ppuVar24 == (undefined **)0x0)) goto LAB_10a5b4f44;
      ppuVar8 = ppuVar24 + 7;
    }
    else {
      ppuVar8 = (undefined **)(*ppuVar24 + 8);
    }
    if (((uint)*(undefined8 *)(*ppuVar8 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppuStack_108,&UNK_10f6660c6);
      lVar20 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar20 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppuStack_120,*(undefined8 *)(lVar20 + 0x208),
                            *(undefined8 *)(lVar20 + 0x210));
      }
      else {
        pppppppuStack_118 = *(undefined ********)(lVar20 + 0x210);
        pppppppuStack_120 = *(undefined ********)(lVar20 + 0x208);
        uStack_110 = *(undefined *********)(lVar20 + 0x218);
      }
      if (cStack_f1 < '\0') {
        pppppppuStack_b0 = (undefined *******)"null";
        if ((undefined ********)pppppppuStack_100 != (undefined ********)0x0) {
          pppppppuStack_b0 = pppppppuStack_108;
        }
      }
      else {
        pppppppuStack_b0 = (undefined *******)"null";
        if (cStack_f1 != '\0') {
          pppppppuStack_b0 = (undefined *******)&pppppppuStack_108;
        }
      }
      if ((long)uStack_110 < 0) {
        pppppppuStack_f0 = (undefined *******)"null";
        if ((undefined ********)pppppppuStack_118 != (undefined ********)0x0) {
          pppppppuStack_f0 = pppppppuStack_120;
        }
      }
      else {
        pppppppuStack_f0 = (undefined *******)"null";
        if (uStack_110._7_1_ != '\0') {
          pppppppuStack_f0 = (undefined *******)&pppppppuStack_120;
        }
      }
      FUN_10a224324(&pppppppuStack_b0,&pppppppuStack_f0);
      if (cStack_f1 < '\0') {
        if ((undefined ********)pppppppuStack_100 == (undefined ********)0x0) goto LAB_10a5b5c94;
        func_0x000107c3192c(&pppppppuStack_b0,pppppppuStack_108);
LAB_10a5b5ee0:
        uVar13 = 1;
      }
      else {
        if (cStack_f1 != '\0') {
          pppppppuStack_a8 = pppppppuStack_100;
          pppppppuStack_b0 = pppppppuStack_108;
          pppppppuStack_a0 = (undefined *******)CONCAT17(cStack_f1,uStack_f8);
          goto LAB_10a5b5ee0;
        }
LAB_10a5b5c94:
        uVar13 = 0;
        pppppppuStack_b0 = (undefined *******)((ulong)pppppppuStack_b0 & 0xffffffffffffff00);
      }
      pppppppuStack_98 = (undefined *******)CONCAT71(pppppppuStack_98._1_7_,uVar13);
      if ((long)uStack_110 < 0) {
        if ((undefined ********)pppppppuStack_118 == (undefined ********)0x0) goto LAB_10a5b5f0c;
        func_0x000107c3192c(&pppppppuStack_f0,pppppppuStack_120);
LAB_10a5b6048:
        uVar13 = 1;
      }
      else {
        if (uStack_110._7_1_ != '\0') {
          pppppppuStack_e8 = pppppppuStack_118;
          pppppppuStack_f0 = pppppppuStack_120;
          pppppppuStack_e0 = (undefined *******)uStack_110;
          goto LAB_10a5b6048;
        }
LAB_10a5b5f0c:
        uVar13 = 0;
        pppppppuStack_f0 = (undefined *******)((ulong)pppppppuStack_f0 & 0xffffffffffffff00);
      }
      pppppppuStack_d8 = (undefined *******)CONCAT71(pppppppuStack_d8._1_7_,uVar13);
      FUN_10a234a0c(&pppppppuStack_b0,&pppppppuStack_f0);
      goto LAB_10a5b60fc;
    }
  }
LAB_10a5b4f44:
  ppppppppuVar21 = *(undefined *********)(param_1[1] + 0x8a8);
  ppppppppuVar22 = (undefined ********)ppppppppuVar21[7];
  ppppppppuVar6 = (undefined ********)ppppppppuVar21[8];
  if (ppppppppuVar6 != (undefined ********)0x0) {
    ppppppppuVar7 = ppppppppuVar6 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppppuVar7,0x10);
      if (bVar2) {
        *ppppppppuVar7 = (undefined *******)((long)*ppppppppuVar7 + 1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppppuVar7,0x10);
      if (bVar2) {
        *ppppppppuVar7 = (undefined *******)((long)*ppppppppuVar7 + 1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10a3ca004();
  FUN_10a3ca8ac();
  ppppppuVar23 = ppppppppuVar21[0x11][0x20];
  pppppppuStack_f0 = (undefined *******)FUN_10a5ccc08;
  pppppppuStack_e8 = (undefined *******)&PTR_FUN_110bf7e18;
  if (ppppppppuVar6 != (undefined ********)0x0) {
    ppppppppuVar7 = ppppppppuVar6 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppppuVar7,0x10);
      if (bVar2) {
        *ppppppppuVar7 = (undefined *******)((long)*ppppppppuVar7 + 1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuVar24 = ppuVar24 + 1;
  pppppppuStack_e0 = (undefined *******)ppppppppuVar21;
  pppppppuStack_d8 = (undefined *******)ppppppppuVar22;
  pppppppuStack_d0 = (undefined *******)ppppppppuVar6;
  func_0x000104c5e210(ppuVar24,ppppppuVar23 + 0x41);
  if (ppuVar24 == (undefined **)0x0) {
    pppppuVar14 = ppppppuVar23[0x4d];
    if ((pppppuVar14 != (undefined *****)0x0) && ((*(byte *)(pppppuVar14 + 2) >> 3 & 1) != 0)) {
      ppuVar24 = (undefined **)((ulong)pppppuVar14[0xf][2] & 0xfffffffffffffffc);
      goto LAB_10a5b4fd4;
    }
    pppppuVar14 = ppppppuVar23[0x39];
    (*(code *)(*pppppuVar14)[0xb])();
    ppppppppuVar22 = (undefined ********)pppppuVar14[1];
    if ((ppppppppuVar22 != (undefined ********)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(),
       pppppppuStack_100 = (undefined *******)ppppppppuVar22,
       ppppppppuVar22 != (undefined ********)0x0)) {
      ppppppppuVar21 = (undefined ********)*pppppuVar14;
      pppppppuStack_108 = (undefined *******)ppppppppuVar21;
      if (ppppppppuVar21 != (undefined ********)0x0) {
        pppppppuStack_b0 = pppppppuStack_f0;
        (*(code *)pppppppuStack_e8[3])(&pppppppuStack_a8,&pppppppuStack_e8);
        (*(code *)(*ppppppppuVar21)[2])(ppppppppuVar21,ppppppuVar23 + 0x41,&pppppppuStack_b0);
        (*(code *)*pppppppuStack_a8)(&pppppppuStack_a8);
      }
      ppppppppuVar21 = ppppppppuVar22 + 1;
      do {
        pppppppuVar17 = *ppppppppuVar21;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppppuVar21,0x10);
        if (bVar2) {
          *ppppppppuVar21 = (undefined *******)((long)pppppppuVar17 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (pppppppuVar17 == (undefined *******)0x0) {
        (*(code *)(*ppppppppuVar22)[2])(ppppppppuVar22);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar22);
      }
    }
    ppppppppuVar7 = &pppppppuStack_e8;
    (*(code *)*pppppppuStack_e8)();
  }
  else {
    ppuVar24 = ppuVar24 + 5;
LAB_10a5b4fd4:
    ppppppppuVar7 = &pppppppuStack_e8;
    (*(code *)*pppppppuStack_e8)();
    if ((ppppppppuVar6 != (undefined ********)0x0) &&
       (ppppppppuVar5 = ppppppppuVar6, __ZNSt3__119__shared_weak_count4lockEv(),
       ppppppppuVar7 = ppppppppuVar5, pppppppuStack_a8 = (undefined *******)ppppppppuVar5,
       ppppppppuVar5 != (undefined ********)0x0)) {
      pppppppuStack_b0 = (undefined *******)ppppppppuVar22;
      if (ppppppppuVar22 != (undefined ********)0x0) {
        FUN_10a5a1898(ppppppppuVar21,ppuVar24);
        ppppppppuVar7 = ppppppppuVar21;
      }
      ppppppppuVar22 = ppppppppuVar5 + 1;
      do {
        pppppppuVar17 = *ppppppppuVar22;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppppuVar22,0x10);
        if (bVar2) {
          *ppppppppuVar22 = (undefined *******)((long)pppppppuVar17 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (pppppppuVar17 == (undefined *******)0x0) {
        (*(code *)(*ppppppppuVar5)[2])(ppppppppuVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppppuVar7 = ppppppppuVar5;
      }
    }
  }
  if (ppppppppuVar6 != (undefined ********)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppppuVar7 = ppppppppuVar6;
  }
  FUN_10ad055a0();
  if ((int)ppppppppuVar7 != 0) {
    ppppppppuVar7 = (undefined ********)ppuVar10;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppppppppuVar7 == (undefined *******)0x0) {
      ppuVar24 = ppuVar11;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      ppppppppuVar7 = (undefined ********)*ppuVar24;
      if ((ppppppppuVar7 == (undefined ********)0x0) ||
         ((*(code *)(*ppppppppuVar7)[3])(), ppppppppuVar7 == (undefined ********)0x0))
      goto LAB_10a5b5154;
      ppppppppuVar22 = ppppppppuVar7 + 7;
    }
    else {
      ppppppppuVar22 = (undefined ********)(*ppppppppuVar7 + 1);
    }
    if (((uint)(*ppppppppuVar22)[2] >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppuStack_108,&UNK_10f6660e4);
      lVar20 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar20 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppuStack_120,*(undefined8 *)(lVar20 + 0x208),
                            *(undefined8 *)(lVar20 + 0x210));
      }
      else {
        pppppppuStack_118 = *(undefined ********)(lVar20 + 0x210);
        pppppppuStack_120 = *(undefined ********)(lVar20 + 0x208);
        uStack_110 = *(undefined *********)(lVar20 + 0x218);
      }
      if (cStack_f1 < '\0') {
        pppppppuStack_b0 = (undefined *******)"null";
        if ((undefined ********)pppppppuStack_100 != (undefined ********)0x0) {
          pppppppuStack_b0 = pppppppuStack_108;
        }
      }
      else {
        pppppppuStack_b0 = (undefined *******)"null";
        if (cStack_f1 != '\0') {
          pppppppuStack_b0 = (undefined *******)&pppppppuStack_108;
        }
      }
      if ((long)uStack_110 < 0) {
        pppppppuStack_f0 = (undefined *******)"null";
        if ((undefined ********)pppppppuStack_118 != (undefined ********)0x0) {
          pppppppuStack_f0 = pppppppuStack_120;
        }
      }
      else {
        pppppppuStack_f0 = (undefined *******)"null";
        if (uStack_110._7_1_ != '\0') {
          pppppppuStack_f0 = (undefined *******)&pppppppuStack_120;
        }
      }
      FUN_10a224324(&pppppppuStack_b0,&pppppppuStack_f0);
      if (cStack_f1 < '\0') {
        if ((undefined ********)pppppppuStack_100 == (undefined ********)0x0) goto LAB_10a5b5d20;
        func_0x000107c3192c(&pppppppuStack_b0,pppppppuStack_108);
LAB_10a5b5f28:
        uVar13 = 1;
      }
      else {
        if (cStack_f1 != '\0') {
          pppppppuStack_a8 = pppppppuStack_100;
          pppppppuStack_b0 = pppppppuStack_108;
          pppppppuStack_a0 = (undefined *******)CONCAT17(cStack_f1,uStack_f8);
          goto LAB_10a5b5f28;
        }
LAB_10a5b5d20:
        uVar13 = 0;
        pppppppuStack_b0 = (undefined *******)((ulong)pppppppuStack_b0 & 0xffffffffffffff00);
      }
      pppppppuStack_98 = (undefined *******)CONCAT71(pppppppuStack_98._1_7_,uVar13);
      if ((long)uStack_110 < 0) {
        if ((undefined ********)pppppppuStack_118 == (undefined ********)0x0) goto LAB_10a5b5f54;
        func_0x000107c3192c(&pppppppuStack_f0,pppppppuStack_120);
LAB_10a5b6070:
        uVar13 = 1;
      }
      else {
        if (uStack_110._7_1_ != '\0') {
          pppppppuStack_e8 = pppppppuStack_118;
          pppppppuStack_f0 = pppppppuStack_120;
          pppppppuStack_e0 = (undefined *******)uStack_110;
          goto LAB_10a5b6070;
        }
LAB_10a5b5f54:
        uVar13 = 0;
        pppppppuStack_f0 = (undefined *******)((ulong)pppppppuStack_f0 & 0xffffffffffffff00);
      }
      pppppppuStack_d8 = (undefined *******)CONCAT71(pppppppuStack_d8._1_7_,uVar13);
      FUN_10a234a0c(&pppppppuStack_b0,&pppppppuStack_f0);
      goto LAB_10a5b60fc;
    }
  }
LAB_10a5b5154:
  iVar4 = (int)ppppppppuVar7;
  lVar20 = *(long *)(param_1[1] + 0x990);
  if (lVar20 != 0) {
    if (*(char *)(lVar20 + 0x2f) < '\0') {
      if (*(long *)(lVar20 + 0x20) == 0) goto LAB_10a5b51fc;
    }
    else if (*(char *)(lVar20 + 0x2f) == '\0') {
LAB_10a5b51fc:
      FUN_10a59d7a4();
      iVar4 = (int)lVar20;
      goto LAB_10a5b5364;
    }
    (**(code **)(**(long **)(lVar20 + 0x30) + 0x10))(*(long **)(lVar20 + 0x30),lVar20 + 0x18);
    (**(code **)(**(long **)(lVar20 + 0x38) + 0x10))(*(long **)(lVar20 + 0x38),lVar20 + 0x18);
    lVar15 = *(long *)(*(long *)(lVar20 + 0x10) + 0x100);
    pppppppuStack_f0 = *(undefined ********)(lVar15 + 0x250);
    pppppppuStack_e8 = *(undefined ********)(lVar15 + 600);
    if ((undefined ********)pppppppuStack_e8 != (undefined ********)0x0) {
      ppppppppuVar22 = (undefined ********)(pppppppuStack_e8 + 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppppuVar22,0x10);
        if (bVar2) {
          *ppppppppuVar22 = (undefined *******)((long)*ppppppppuVar22 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    iVar4 = 0;
    if ((undefined ********)pppppppuStack_f0 != (undefined ********)0x0) {
      FUN_10a59d994(&pppppppuStack_b0);
      pppppppuStack_108 = (undefined *******)0x0;
      ppppppppuVar22 = (undefined ********)pppppppuStack_a8;
      if ((undefined ********)pppppppuStack_a8 != (undefined ********)0x0) {
        ppppppppuVar6 = (undefined ********)pppppppuStack_a8;
        __ZNSt3__119__shared_weak_count4lockEv();
        if (ppppppppuVar6 == (undefined ********)0x0) {
          ppppppppuVar21 = (undefined ********)0x0;
        }
        else {
          pppppppuStack_108 = pppppppuStack_b0;
          ppppppppuVar21 = (undefined ********)pppppppuStack_b0;
        }
        ppppppppuVar22 = (undefined ********)pppppppuStack_a8;
        pppppppuStack_100 = (undefined *******)ppppppppuVar6;
        if ((undefined ********)pppppppuStack_a8 != (undefined ********)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (ppppppppuVar21 != (undefined ********)0x0) {
          pppppppuStack_a0 = *(undefined ********)(lVar20 + 0x40);
          pppppppuStack_a8 = *(undefined ********)(lVar20 + 0x38);
          if (*(long *)(lVar20 + 0x40) != 0) {
            plVar12 = (long *)(*(long *)(lVar20 + 0x40) + 0x10);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar2) {
                *plVar12 = *plVar12 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          pppppppuStack_b0 = (undefined *******)&PTR_DAT_110bf7d18;
          pppppppuStack_98 = (undefined *******)&pppppppuStack_b0;
          FUN_10a59da5c(ppppppppuVar21,&pppppppuStack_b0);
          ppppppppuVar22 = (undefined ********)pppppppuStack_98;
          if ((undefined ********)pppppppuStack_98 == &pppppppuStack_b0) {
            lVar15 = 0x20;
LAB_10a5b52e4:
            (**(code **)((long)*pppppppuStack_98 + lVar15))();
          }
          else if ((undefined ********)pppppppuStack_98 != (undefined ********)0x0) {
            lVar15 = 0x28;
            goto LAB_10a5b52e4;
          }
          *(undefined1 *)(lVar20 + 0x48) = 1;
        }
        if (ppppppppuVar6 != (undefined ********)0x0) {
          ppppppppuVar21 = ppppppppuVar6 + 1;
          do {
            pppppppuVar17 = *ppppppppuVar21;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppppppppuVar21,0x10);
            if (bVar2) {
              *ppppppppuVar21 = (undefined *******)((long)pppppppuVar17 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (pppppppuVar17 == (undefined *******)0x0) {
            (*(code *)(*ppppppppuVar6)[2])(ppppppppuVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppppuVar22 = ppppppppuVar6;
          }
        }
      }
      iVar4 = (int)ppppppppuVar22;
    }
    ppppppppuVar22 = (undefined ********)pppppppuStack_e8;
    if ((undefined ********)pppppppuStack_e8 != (undefined ********)0x0) {
      ppppppppuVar6 = (undefined ********)(pppppppuStack_e8 + 1);
      do {
        pppppppuVar17 = *ppppppppuVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppppuVar6,0x10);
        if (bVar2) {
          *ppppppppuVar6 = (undefined *******)((long)pppppppuVar17 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (pppppppuVar17 == (undefined *******)0x0) {
        (*(code *)(*pppppppuStack_e8)[2])(pppppppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        iVar4 = (int)ppppppppuVar22;
      }
    }
  }
LAB_10a5b5364:
  FUN_10ad055a0();
  if (iVar4 != 0) {
    ppuVar24 = ppuVar10;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar24 == (undefined *)0x0) {
      ppuVar24 = ppuVar11;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar12 = (long *)*ppuVar24;
      if ((plVar12 == (long *)0x0) || ((**(code **)(*plVar12 + 0x18))(), plVar12 == (long *)0x0))
      goto LAB_10a5b5394;
      plVar12 = plVar12 + 7;
    }
    else {
      plVar12 = (long *)(*ppuVar24 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar12 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppuStack_108,&UNK_10f66612a);
      lVar20 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar20 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppuStack_120,*(undefined8 *)(lVar20 + 0x208),
                            *(undefined8 *)(lVar20 + 0x210));
      }
      else {
        pppppppuStack_118 = *(undefined ********)(lVar20 + 0x210);
        pppppppuStack_120 = *(undefined ********)(lVar20 + 0x208);
        uStack_110 = *(undefined *********)(lVar20 + 0x218);
      }
      if (cStack_f1 < '\0') {
        pppppppuStack_b0 = (undefined *******)"null";
        if ((undefined ********)pppppppuStack_100 != (undefined ********)0x0) {
          pppppppuStack_b0 = pppppppuStack_108;
        }
      }
      else {
        pppppppuStack_b0 = (undefined *******)"null";
        if (cStack_f1 != '\0') {
          pppppppuStack_b0 = (undefined *******)&pppppppuStack_108;
        }
      }
      if ((long)uStack_110 < 0) {
        pppppppuStack_f0 = (undefined *******)"null";
        if ((undefined ********)pppppppuStack_118 != (undefined ********)0x0) {
          pppppppuStack_f0 = pppppppuStack_120;
        }
      }
      else {
        pppppppuStack_f0 = (undefined *******)"null";
        if (uStack_110._7_1_ != '\0') {
          pppppppuStack_f0 = (undefined *******)&pppppppuStack_120;
        }
      }
      FUN_10a224324(&pppppppuStack_b0,&pppppppuStack_f0);
      if (cStack_f1 < '\0') {
        if ((undefined ********)pppppppuStack_100 == (undefined ********)0x0) goto LAB_10a5b5dac;
        func_0x000107c3192c(&pppppppuStack_b0,pppppppuStack_108);
LAB_10a5b5f70:
        uVar13 = 1;
      }
      else {
        if (cStack_f1 != '\0') {
          pppppppuStack_a8 = pppppppuStack_100;
          pppppppuStack_b0 = pppppppuStack_108;
          pppppppuStack_a0 = (undefined *******)CONCAT17(cStack_f1,uStack_f8);
          goto LAB_10a5b5f70;
        }
LAB_10a5b5dac:
        uVar13 = 0;
        pppppppuStack_b0 = (undefined *******)((ulong)pppppppuStack_b0 & 0xffffffffffffff00);
      }
      pppppppuStack_98 = (undefined *******)CONCAT71(pppppppuStack_98._1_7_,uVar13);
      if ((long)uStack_110 < 0) {
        if ((undefined ********)pppppppuStack_118 == (undefined ********)0x0) goto LAB_10a5b5f9c;
        func_0x000107c3192c(&pppppppuStack_f0,pppppppuStack_120);
LAB_10a5b6098:
        uVar13 = 1;
      }
      else {
        if (uStack_110._7_1_ != '\0') {
          pppppppuStack_e8 = pppppppuStack_118;
          pppppppuStack_f0 = pppppppuStack_120;
          pppppppuStack_e0 = (undefined *******)uStack_110;
          goto LAB_10a5b6098;
        }
LAB_10a5b5f9c:
        uVar13 = 0;
        pppppppuStack_f0 = (undefined *******)((ulong)pppppppuStack_f0 & 0xffffffffffffff00);
      }
      pppppppuStack_d8 = (undefined *******)CONCAT71(pppppppuStack_d8._1_7_,uVar13);
      FUN_10a234a0c(&pppppppuStack_b0,&pppppppuStack_f0);
      goto LAB_10a5b60fc;
    }
  }
LAB_10a5b5394:
  ppuVar24 = param_1;
  FUN_10a5b44b8();
  iVar4 = (int)ppuVar24;
  FUN_10ad055a0();
  if (iVar4 != 0) {
    ppuVar24 = ppuVar10;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar24 == (undefined *)0x0) {
      ppuVar24 = ppuVar11;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar12 = (long *)*ppuVar24;
      if ((plVar12 == (long *)0x0) || ((**(code **)(*plVar12 + 0x18))(), plVar12 == (long *)0x0))
      goto LAB_10a5b53cc;
      plVar12 = plVar12 + 7;
    }
    else {
      plVar12 = (long *)(*ppuVar24 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar12 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppuStack_108,&UNK_10f66615d);
      lVar20 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar20 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppuStack_120,*(undefined8 *)(lVar20 + 0x208),
                            *(undefined8 *)(lVar20 + 0x210));
      }
      else {
        pppppppuStack_118 = *(undefined ********)(lVar20 + 0x210);
        pppppppuStack_120 = *(undefined ********)(lVar20 + 0x208);
        uStack_110 = *(undefined *********)(lVar20 + 0x218);
      }
      if (cStack_f1 < '\0') {
        pppppppuStack_b0 = (undefined *******)"null";
        if ((undefined ********)pppppppuStack_100 != (undefined ********)0x0) {
          pppppppuStack_b0 = pppppppuStack_108;
        }
      }
      else {
        pppppppuStack_b0 = (undefined *******)"null";
        if (cStack_f1 != '\0') {
          pppppppuStack_b0 = (undefined *******)&pppppppuStack_108;
        }
      }
      if ((long)uStack_110 < 0) {
        pppppppuStack_f0 = (undefined *******)"null";
        if ((undefined ********)pppppppuStack_118 != (undefined ********)0x0) {
          pppppppuStack_f0 = pppppppuStack_120;
        }
      }
      else {
        pppppppuStack_f0 = (undefined *******)"null";
        if (uStack_110._7_1_ != '\0') {
          pppppppuStack_f0 = (undefined *******)&pppppppuStack_120;
        }
      }
      FUN_10a224324(&pppppppuStack_b0,&pppppppuStack_f0);
      if (cStack_f1 < '\0') {
        if ((undefined ********)pppppppuStack_100 == (undefined ********)0x0) goto LAB_10a5b5e38;
        func_0x000107c3192c(&pppppppuStack_b0,pppppppuStack_108);
LAB_10a5b5fb8:
        uVar13 = 1;
      }
      else {
        if (cStack_f1 != '\0') {
          pppppppuStack_a8 = pppppppuStack_100;
          pppppppuStack_b0 = pppppppuStack_108;
          pppppppuStack_a0 = (undefined *******)CONCAT17(cStack_f1,uStack_f8);
          goto LAB_10a5b5fb8;
        }
LAB_10a5b5e38:
        uVar13 = 0;
        pppppppuStack_b0 = (undefined *******)((ulong)pppppppuStack_b0 & 0xffffffffffffff00);
      }
      pppppppuStack_98 = (undefined *******)CONCAT71(pppppppuStack_98._1_7_,uVar13);
      if ((long)uStack_110 < 0) {
        if ((undefined ********)pppppppuStack_118 == (undefined ********)0x0) goto LAB_10a5b5fe4;
        func_0x000107c3192c(&pppppppuStack_f0,pppppppuStack_120);
LAB_10a5b60c0:
        uVar13 = 1;
      }
      else {
        if (uStack_110._7_1_ != '\0') {
          pppppppuStack_e8 = pppppppuStack_118;
          pppppppuStack_f0 = pppppppuStack_120;
          pppppppuStack_e0 = (undefined *******)uStack_110;
          goto LAB_10a5b60c0;
        }
LAB_10a5b5fe4:
        uVar13 = 0;
        pppppppuStack_f0 = (undefined *******)((ulong)pppppppuStack_f0 & 0xffffffffffffff00);
      }
      pppppppuStack_d8 = (undefined *******)CONCAT71(pppppppuStack_d8._1_7_,uVar13);
      FUN_10a234a0c(&pppppppuStack_b0,&pppppppuStack_f0);
      goto LAB_10a5b60fc;
    }
  }
LAB_10a5b53cc:
  FUN_10a5b63d8(&pppppppuStack_108,param_1);
  ppppppppuVar22 = (undefined ********)pppppppuStack_100;
  if (CONCAT17(cStack_f1,uStack_f8) != 0) {
    ppuVar24 = ppuVar10;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    ppuVar8 = ppuVar11;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    lVar20 = extraout_x8 << 3;
    do {
      iVar4 = (int)*ppppppppuVar22;
      FUN_10a3c718c();
      FUN_10ad055a0();
      if (iVar4 != 0) {
        if (*ppuVar24 == (undefined *)0x0) {
          plVar12 = (long *)*ppuVar8;
          if ((plVar12 == (long *)0x0) || ((**(code **)(*plVar12 + 0x18))(), plVar12 == (long *)0x0)
             ) goto LAB_10a5b5434;
          plVar12 = plVar12 + 7;
        }
        else {
          plVar12 = (long *)(*ppuVar24 + 8);
        }
        if (((uint)*(undefined8 *)(*plVar12 + 0x10) >> 1 & 1) != 0) {
          func_0x000107c2b054(&pppppppuStack_b0,&UNK_10f66618f);
          FUN_10a3c829c(&pppppppuStack_f0,*ppppppppuVar22);
          ppppppppuVar22 = (undefined ********)pppppppuStack_e8;
          ppppppppuVar6 = (undefined ********)pppppppuStack_f0;
          if (-1 < (long)pppppppuStack_e0) {
            ppppppppuVar22 = (undefined ********)((ulong)pppppppuStack_e0 >> 0x38);
            ppppppppuVar6 = &pppppppuStack_f0;
          }
          ppppppppuVar21 = &pppppppuStack_b0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppppppuVar21,ppppppppuVar6,ppppppppuVar22);
          pppppppuStack_118 = ppppppppuVar21[1];
          pppppppuStack_120 = *ppppppppuVar21;
          uStack_110 = (undefined ********)ppppppppuVar21[2];
          ppppppppuVar21[1] = (undefined *******)0x0;
          ppppppppuVar21[2] = (undefined *******)0x0;
          *ppppppppuVar21 = (undefined *******)0x0;
          if ((long)pppppppuStack_e0 < 0) {
            __ZdlPv(pppppppuStack_f0);
          }
          lVar20 = *(long *)(param_1[1] + 0x100);
          if (*(char *)(lVar20 + 0x21f) < '\0') {
            func_0x000107c3192c(&pppppppuStack_140,*(undefined8 *)(lVar20 + 0x208),
                                *(undefined8 *)(lVar20 + 0x210));
          }
          else {
            pppppppuStack_138 = *(undefined ********)(lVar20 + 0x210);
            pppppppuStack_140 = *(undefined ********)(lVar20 + 0x208);
            uStack_130 = *(undefined *********)(lVar20 + 0x218);
          }
          if ((long)uStack_110 < 0) {
            pppppppuStack_b0 = (undefined *******)"null";
            if ((undefined ********)pppppppuStack_118 != (undefined ********)0x0) {
              pppppppuStack_b0 = pppppppuStack_120;
            }
          }
          else {
            pppppppuStack_b0 = (undefined *******)"null";
            if (uStack_110._7_1_ != '\0') {
              pppppppuStack_b0 = (undefined *******)&pppppppuStack_120;
            }
          }
          if ((long)uStack_130 < 0) {
            pppppppuStack_f0 = (undefined *******)"null";
            if ((undefined ********)pppppppuStack_138 != (undefined ********)0x0) {
              pppppppuStack_f0 = pppppppuStack_140;
            }
          }
          else {
            pppppppuStack_f0 = (undefined *******)"null";
            if (uStack_130._7_1_ != '\0') {
              pppppppuStack_f0 = (undefined *******)&pppppppuStack_140;
            }
          }
          FUN_10a224324(&pppppppuStack_b0,&pppppppuStack_f0);
          if ((long)uStack_110 < 0) {
            if ((undefined ********)pppppppuStack_118 == (undefined ********)0x0)
            goto LAB_10a5b5a94;
            func_0x000107c3192c(&pppppppuStack_b0,pppppppuStack_120);
LAB_10a5b5ab0:
            uVar13 = 1;
          }
          else {
            if (uStack_110._7_1_ != '\0') {
              pppppppuStack_a8 = pppppppuStack_118;
              pppppppuStack_b0 = pppppppuStack_120;
              pppppppuStack_a0 = (undefined *******)uStack_110;
              goto LAB_10a5b5ab0;
            }
LAB_10a5b5a94:
            uVar13 = 0;
            pppppppuStack_b0 = (undefined *******)((ulong)pppppppuStack_b0 & 0xffffffffffffff00);
          }
          pppppppuStack_98 = (undefined *******)CONCAT71(pppppppuStack_98._1_7_,uVar13);
          if ((long)uStack_130 < 0) {
            if ((undefined ********)pppppppuStack_138 == (undefined ********)0x0)
            goto LAB_10a5b5adc;
            func_0x000107c3192c(&pppppppuStack_f0,pppppppuStack_140);
LAB_10a5b5af8:
            uVar13 = 1;
          }
          else {
            if (uStack_130._7_1_ != '\0') {
              pppppppuStack_e8 = pppppppuStack_138;
              pppppppuStack_f0 = pppppppuStack_140;
              pppppppuStack_e0 = (undefined *******)uStack_130;
              goto LAB_10a5b5af8;
            }
LAB_10a5b5adc:
            uVar13 = 0;
            pppppppuStack_f0 = (undefined *******)((ulong)pppppppuStack_f0 & 0xffffffffffffff00);
          }
          pppppppuStack_d8 = (undefined *******)CONCAT71(pppppppuStack_d8._1_7_,uVar13);
          FUN_10a234a0c(&pppppppuStack_b0,&pppppppuStack_f0);
          goto LAB_10a5b60fc;
        }
      }
LAB_10a5b5434:
      ppppppppuVar22 = ppppppppuVar22 + 1;
      lVar20 = lVar20 + -8;
    } while (lVar20 != 0);
  }
  puVar9 = param_1[1] + 0xd48;
  FUN_10a5aeb74(puVar9,&PTR_DAT_110bd3150);
  uVar16 = 0xffffffffffffffff;
  lVar20 = 8;
  puVar18 = puVar9;
  do {
    puVar18 = *(undefined **)(puVar18 + 8);
    lVar20 = lVar20 + -8;
    uVar16 = uVar16 + 1;
  } while (puVar18 != puVar9);
  pppppppuStack_120 = (undefined *******)0x0;
  pppppppuStack_118 = (undefined *******)0x0;
  uStack_110 = (undefined ********)0x0;
  if (uVar16 == 0) {
    ppppppppuVar22 = (undefined ********)0x0;
  }
  else {
    if (uVar16 >> 0x3d != 0) {
      FUN_10a5d1acc();
      goto LAB_10a5b60fc;
    }
    ppppppppuVar22 = (undefined ********)-lVar20;
    __Znwm();
    pppppppuStack_120 = (undefined *******)ppppppppuVar22;
    uStack_110 = (undefined ********)((long)ppppppppuVar22 - lVar20);
    _bzero();
    pppppppuStack_118 = (undefined *******)((long)ppppppppuVar22 - lVar20);
  }
  pppppppuVar17 = pppppppuStack_118;
  ppppppppuVar6 = ppppppppuVar22;
  for (puVar18 = *(undefined **)(puVar9 + 8); puVar18 != puVar9;
      puVar18 = *(undefined **)(puVar18 + 8)) {
    pppppppuVar19 = *(undefined ********)(puVar18 + 0x28);
    if (pppppppuVar19 != (undefined *******)0x0) {
      *ppppppppuVar6 = pppppppuVar19;
      pppppppuVar19[3] = (undefined ******)ppppppppuVar6;
    }
    ppppppppuVar6 = ppppppppuVar6 + 1;
  }
  if (ppppppppuVar22 != (undefined ********)pppppppuStack_118) {
    ppuVar24 = ppuVar10;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    ppuVar8 = ppuVar11;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    do {
      pppppppuVar19 = *ppppppppuVar22;
      if (pppppppuVar19 != (undefined *******)0x0) {
        (*(code *)(*pppppppuVar19)[2])();
        iVar4 = (int)pppppppuVar19;
        FUN_10ad055a0();
        if (iVar4 != 0) {
          if (*ppuVar24 == (undefined *)0x0) {
            plVar12 = (long *)*ppuVar8;
            if ((plVar12 == (long *)0x0) ||
               ((**(code **)(*plVar12 + 0x18))(), plVar12 == (long *)0x0)) goto LAB_10a5b5574;
            plVar12 = plVar12 + 7;
          }
          else {
            plVar12 = (long *)(*ppuVar24 + 8);
          }
          if (((uint)*(undefined8 *)(*plVar12 + 0x10) >> 1 & 1) != 0) {
            func_0x000107c2b054(&pppppppuStack_140,&UNK_10f6661b7);
            lVar20 = *(long *)(param_1[1] + 0x100);
            if (*(char *)(lVar20 + 0x21f) < '\0') {
              func_0x000107c3192c(&pppppppuStack_160,*(undefined8 *)(lVar20 + 0x208),
                                  *(undefined8 *)(lVar20 + 0x210));
            }
            else {
              pppppppuStack_158 = *(undefined ********)(lVar20 + 0x210);
              pppppppuStack_160 = *(undefined ********)(lVar20 + 0x208);
              uStack_150 = *(undefined *********)(lVar20 + 0x218);
            }
            iVar4 = (int)uStack_130._7_1_;
            if (-1 < (long)uStack_130) goto LAB_10a5b57d8;
            pppppppuStack_b0 = (undefined *******)"null";
            if ((undefined ********)pppppppuStack_138 != (undefined ********)0x0) {
              pppppppuStack_b0 = pppppppuStack_140;
            }
            goto LAB_10a5b57ec;
          }
        }
      }
LAB_10a5b5574:
      ppppppppuVar22 = ppppppppuVar22 + 1;
    } while (ppppppppuVar22 != (undefined ********)pppppppuVar17);
  }
  FUN_10a5d1ae0(&pppppppuStack_120);
  lVar20 = *(long *)(param_1[1] + 0x870);
  if (0xd4 < *(int *)(*(long *)(*(long *)(lVar20 + 0x10) + 0xa20) + 0x18)) {
    FUN_10a463658();
  }
  iVar4 = (int)lVar20;
  FUN_10ad055a0();
  if (iVar4 != 0) {
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar10 == (undefined *)0x0) {
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar12 = (long *)*ppuVar11;
      if ((plVar12 == (long *)0x0) || ((**(code **)(*plVar12 + 0x18))(), plVar12 == (long *)0x0))
      goto LAB_10a5b55fc;
      plVar12 = plVar12 + 7;
    }
    else {
      plVar12 = (long *)(*ppuVar10 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar12 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppppuStack_120,&UNK_10f6661dc);
      lVar20 = *(long *)(param_1[1] + 0x100);
      if (*(char *)(lVar20 + 0x21f) < '\0') {
        func_0x000107c3192c(&pppppppuStack_140,*(undefined8 *)(lVar20 + 0x208),
                            *(undefined8 *)(lVar20 + 0x210));
      }
      else {
        pppppppuStack_138 = *(undefined ********)(lVar20 + 0x210);
        pppppppuStack_140 = *(undefined ********)(lVar20 + 0x208);
        uStack_130 = *(undefined *********)(lVar20 + 0x218);
      }
      if ((long)uStack_110 < 0) {
        pppppppuStack_b0 = (undefined *******)"null";
        if ((undefined ********)pppppppuStack_118 != (undefined ********)0x0) {
          pppppppuStack_b0 = pppppppuStack_120;
        }
      }
      else {
        pppppppuStack_b0 = (undefined *******)"null";
        if (uStack_110._7_1_ != '\0') {
          pppppppuStack_b0 = (undefined *******)&pppppppuStack_120;
        }
      }
      if ((long)uStack_130 < 0) {
        pppppppuStack_f0 = (undefined *******)"null";
        if ((undefined ********)pppppppuStack_138 != (undefined ********)0x0) {
          pppppppuStack_f0 = pppppppuStack_140;
        }
      }
      else {
        pppppppuStack_f0 = (undefined *******)"null";
        if (uStack_130._7_1_ != '\0') {
          pppppppuStack_f0 = (undefined *******)&pppppppuStack_140;
        }
      }
      FUN_10a224324(&pppppppuStack_b0,&pppppppuStack_f0);
      if ((long)uStack_110 < 0) {
        if ((undefined ********)pppppppuStack_118 == (undefined ********)0x0) goto LAB_10a5b5ec4;
        func_0x000107c3192c(&pppppppuStack_b0,pppppppuStack_120);
LAB_10a5b6000:
        uVar13 = 1;
      }
      else {
        if (uStack_110._7_1_ != '\0') {
          pppppppuStack_a8 = pppppppuStack_118;
          pppppppuStack_b0 = pppppppuStack_120;
          pppppppuStack_a0 = (undefined *******)uStack_110;
          goto LAB_10a5b6000;
        }
LAB_10a5b5ec4:
        uVar13 = 0;
        pppppppuStack_b0 = (undefined *******)((ulong)pppppppuStack_b0 & 0xffffffffffffff00);
      }
      pppppppuStack_98 = (undefined *******)CONCAT71(pppppppuStack_98._1_7_,uVar13);
      if ((long)uStack_130 < 0) {
        if ((undefined ********)pppppppuStack_138 == (undefined ********)0x0) goto LAB_10a5b602c;
        func_0x000107c3192c(&pppppppuStack_f0,pppppppuStack_140);
LAB_10a5b60e8:
        uVar13 = 1;
      }
      else {
        if (uStack_130._7_1_ != '\0') {
          pppppppuStack_e8 = pppppppuStack_138;
          pppppppuStack_f0 = pppppppuStack_140;
          pppppppuStack_e0 = (undefined *******)uStack_130;
          goto LAB_10a5b60e8;
        }
LAB_10a5b602c:
        uVar13 = 0;
        pppppppuStack_f0 = (undefined *******)((ulong)pppppppuStack_f0 & 0xffffffffffffff00);
      }
      pppppppuStack_d8 = (undefined *******)CONCAT71(pppppppuStack_d8._1_7_,uVar13);
      FUN_10a234a0c(&pppppppuStack_b0,&pppppppuStack_f0);
      goto LAB_10a5b60fc;
    }
  }
LAB_10a5b55fc:
  if ((undefined ********)pppppppuStack_108 != (undefined ********)0x0) {
    *(undefined1 *)((long)pppppppuStack_108 + 0x14) = 0;
    pppppppuStack_108[4] = pppppppuStack_108[3];
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  iVar4 = extraout_w8;
LAB_10a5b57d8:
  pppppppuStack_b0 = (undefined *******)"null";
  if (iVar4 != 0) {
    pppppppuStack_b0 = (undefined *******)&pppppppuStack_140;
  }
LAB_10a5b57ec:
  if ((long)uStack_150 < 0) {
    pppppppuStack_f0 = (undefined *******)"null";
    if ((undefined ********)pppppppuStack_158 != (undefined ********)0x0) {
      pppppppuStack_f0 = pppppppuStack_160;
    }
  }
  else {
    pppppppuStack_f0 = (undefined *******)"null";
    if (uStack_150._7_1_ != '\0') {
      pppppppuStack_f0 = (undefined *******)&pppppppuStack_160;
    }
  }
  FUN_10a224324(&pppppppuStack_b0,&pppppppuStack_f0);
  if ((long)uStack_130 < 0) {
    if ((undefined ********)pppppppuStack_138 == (undefined ********)0x0) goto LAB_10a5b5858;
    func_0x000107c3192c(&pppppppuStack_b0,pppppppuStack_140);
LAB_10a5b58b0:
    uVar13 = 1;
  }
  else {
    if (uStack_130._7_1_ != '\0') {
      pppppppuStack_a8 = pppppppuStack_138;
      pppppppuStack_b0 = pppppppuStack_140;
      pppppppuStack_a0 = (undefined *******)uStack_130;
      goto LAB_10a5b58b0;
    }
LAB_10a5b5858:
    uVar13 = 0;
    pppppppuStack_b0 = (undefined *******)((ulong)pppppppuStack_b0 & 0xffffffffffffff00);
  }
  pppppppuStack_98 = (undefined *******)CONCAT71(pppppppuStack_98._1_7_,uVar13);
  if ((long)uStack_150 < 0) {
    if ((undefined ********)pppppppuStack_158 == (undefined ********)0x0) goto LAB_10a5b58dc;
    func_0x000107c3192c(&pppppppuStack_f0,pppppppuStack_160);
LAB_10a5b58f8:
    uVar13 = 1;
  }
  else {
    if (uStack_150._7_1_ != '\0') {
      pppppppuStack_e8 = pppppppuStack_158;
      pppppppuStack_f0 = pppppppuStack_160;
      pppppppuStack_e0 = (undefined *******)uStack_150;
      goto LAB_10a5b58f8;
    }
LAB_10a5b58dc:
    uVar13 = 0;
    pppppppuStack_f0 = (undefined *******)((ulong)pppppppuStack_f0 & 0xffffffffffffff00);
  }
  pppppppuStack_d8 = (undefined *******)CONCAT71(pppppppuStack_d8._1_7_,uVar13);
  FUN_10a234a0c(&pppppppuStack_b0,&pppppppuStack_f0);
LAB_10a5b60fc:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a5b6100);
  (*pcVar3)();
}



/* Entry: 10a5b63d8; end: 10a5b644f;  */

void FUN_10a5b63d8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  FUN_10a5b6c0c(*(undefined8 *)(param_2 + 8),param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  lVar2 = 0;
  if (lVar3 != lVar1) {
    lVar2 = LZCOUNT(lVar3 - lVar1 >> 3) * -2 + 0x7e;
  }
  FUN_10a5c08ec(lVar1,lVar3,lVar2,1);
  *(undefined1 *)(param_2 + 0x14) = 1;
  lVar2 = *(long *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  *param_1 = param_2;
  param_1[1] = lVar2;
  param_1[2] = lVar1 - lVar2 >> 3;
  return;
}



/* Entry: 10a5b6450; end: 10a5b676f;  */

void FUN_10a5b6450(long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined1 auStack_98 [16];
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  FUN_10a5b63d8(&lStack_70,param_1);
  FUN_10a463ca4(*(undefined8 *)(*(long *)(param_1 + 8) + 0x870));
  if (lStack_60 != 0) {
    lVar7 = lStack_60 << 3;
    puVar6 = puStack_68;
    do {
      FUN_10a3c7238(*puVar6);
      puVar6 = puVar6 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  lVar7 = *(long *)(param_1 + 8) + 0xd48;
  FUN_10a5aeb74(lVar7,&PTR_DAT_110b9fab0);
  uVar4 = 0xffffffffffffffff;
  lVar9 = 8;
  lVar5 = lVar7;
  do {
    lVar5 = *(long *)(lVar5 + 8);
    lVar9 = lVar9 + -8;
    uVar4 = uVar4 + 1;
  } while (lVar5 != lVar7);
  plStack_88 = (long *)0x0;
  plStack_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  if (uVar4 == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    if (uVar4 >> 0x3d != 0) {
      FUN_10a5d1b38();
      goto LAB_10a5b6668;
    }
    plVar8 = (long *)-lVar9;
    __Znwm();
    plStack_88 = plVar8;
    plStack_78 = (long *)((long)plVar8 - lVar9);
    _bzero();
    plStack_80 = (long *)((long)plVar8 - lVar9);
  }
  plVar2 = plStack_80;
  plVar1 = plVar8;
  for (lVar5 = *(long *)(lVar7 + 8); lVar5 != lVar7; lVar5 = *(long *)(lVar5 + 8)) {
    lVar9 = *(long *)(lVar5 + 0x28);
    if (lVar9 != 0) {
      *plVar1 = lVar9;
      *(long **)(lVar9 + 0x18) = plVar1;
    }
    plVar1 = plVar1 + 1;
  }
  for (; plVar8 != plVar2; plVar8 = plVar8 + 1) {
    (**(code **)(*(long *)*plVar8 + 0x10))();
  }
  FUN_10a5d1b4c(&plStack_88);
  FUN_10a463658(*(undefined8 *)(*(long *)(param_1 + 8) + 0x870));
  if ((ulong)(lStack_50 - lStack_58) < 9) {
    if (lStack_50 - lStack_58 != 8) {
      if (lStack_70 != 0) {
        *(undefined1 *)(lStack_70 + 0x14) = 0;
        *(undefined8 *)(lStack_70 + 0x20) = *(undefined8 *)(lStack_70 + 0x18);
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      FUN_10a5bf46c(&lStack_58);
      return;
    }
    if (lStack_58 != lStack_50) {
      __ZNSt13exception_ptrC1ERKS_(auStack_98);
      __ZSt17rethrow_exceptionSt13exception_ptr(auStack_98);
    }
  }
  else {
    FUN_10a00946c(&UNK_10f666207);
  }
LAB_10a5b6668:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a5b666c);
  (*pcVar3)();
}


