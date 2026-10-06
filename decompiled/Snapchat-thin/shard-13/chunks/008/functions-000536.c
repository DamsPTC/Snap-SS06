/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ad3fac4; end: 10ad3fb53;  */

void FUN_10ad3fac4(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar2 + 0xa1) != param_2) && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    puVar1 = &UNK_10f6a6d63;
    if (param_2 == 0) {
      puVar1 = &UNK_10f6a6d67;
    }
    func_0x00010ae06f08(1,4,&UNK_10f6a6c80,&UNK_10f6a6d08,0x212,&UNK_10f6a6d3c,in_x6,in_x7,puVar1);
    lVar2 = *(long *)(param_1 + 8);
  }
  *(char *)(lVar2 + 0xa1) = (char)param_2;
  return;
}



/* Entry: 10ad3fb54; end: 10ad3fb8b;  */

void FUN_10ad3fb54(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)(param_1 + 8);
  uVar7 = param_2[1];
  uVar6 = *param_2;
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
  lVar4 = *(long *)(lVar5 + 0x358);
  *(undefined8 *)(lVar5 + 0x358) = uVar7;
  *(undefined8 *)(lVar5 + 0x350) = uVar6;
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10ad3fb8c; end: 10ad3fc03;  */

void FUN_10ad3fb8c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long lStack_28;
  
  lVar4 = *(long *)(param_1 + 8);
  lStack_28 = param_2[1];
  uStack_30 = *param_2;
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
  FUN_10ad3fc04(lVar4 + 0x248,&uStack_30);
  if (lStack_28 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10ad3fc04; end: 10ad3fc4f;  */

void FUN_10ad3fc04(long param_1,undefined8 param_2)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x20);
  FUN_10ad454d0(param_1 + 8,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x20);
  return;
}



/* Entry: 10ad3fc50; end: 10ad3ff57;  */

void FUN_10ad3fc50(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)(param_1 + 8);
  uVar7 = param_2[1];
  uVar6 = *param_2;
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
  lVar4 = *(long *)(lVar5 + 0x378);
  *(undefined8 *)(lVar5 + 0x378) = uVar7;
  *(undefined8 *)(lVar5 + 0x370) = uVar6;
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10ad3ff58; end: 10ad40967;  */

/* WARNING: Removing unreachable block (ram,0x00010ad40020) */
/* WARNING: Removing unreachable block (ram,0x00010ad40038) */

void FUN_10ad3ff58(long param_1,long *param_2,byte param_3)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  byte bVar22;
  long *plVar23;
  ulong uVar24;
  undefined1 auStack_138 [24];
  long lStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long lStack_100;
  byte bStack_f8;
  ulong uStack_f0;
  undefined8 *apuStack_e8 [7];
  undefined8 uStack_b0;
  undefined8 *apuStack_a8 [7];
  long lStack_70;
  long *plVar15;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bStack_f8 = 0;
  plVar18 = (long *)*param_2;
  plVar23 = (long *)param_2[1];
  plVar16 = plVar18;
  lStack_100 = param_1;
  if (plVar18 == plVar23) {
LAB_10ad40004:
    if (plVar23 < plVar18) goto LAB_10ad40874;
    if (plVar18 != plVar23) {
      while (plVar23 != plVar18) {
        plVar23 = plVar23 + -2;
        FUN_10a22b2a4(plVar23);
      }
      param_2[1] = (long)plVar18;
      plVar23 = plVar18;
    }
    plVar18 = (long *)*param_2;
  }
  else {
    do {
      if (*plVar16 == 0) {
        plVar18 = plVar16;
        if ((plVar16 != plVar23) && (plVar19 = plVar16 + 2, plVar19 != plVar23)) {
          do {
            if (*plVar19 != 0) {
              func_0x00010ad45628(plVar16,plVar19);
              plVar16 = plVar16 + 2;
            }
            plVar19 = plVar19 + 2;
          } while (plVar19 != plVar23);
          plVar23 = (long *)param_2[1];
          plVar18 = plVar16;
        }
        goto LAB_10ad40004;
      }
      plVar16 = plVar16 + 2;
    } while (plVar16 != plVar23);
  }
  lVar21 = *(long *)(param_1 + 8);
  uVar24 = (long)plVar23 - (long)plVar18;
  if (uVar24 == 0) {
    puVar17 = *(undefined8 **)(lVar21 + 0x620);
    puVar8 = *(undefined8 **)(lVar21 + 0x628);
    if (puVar17 != puVar8) {
      do {
        lVar10 = lVar21 + 0xc0;
        FUN_10ad47d78(lVar10,*puVar17);
        if (lVar21 + 200 == lVar10) {
          plVar16 = (long *)0x0;
          uStack_b0 = 0;
          apuStack_a8[0] = (undefined8 *)0x0;
        }
        else {
          plVar16 = *(long **)(lVar10 + 0x40);
          apuStack_a8[0] = *(undefined8 **)(lVar10 + 0x40);
          uStack_b0 = *(undefined8 *)(lVar10 + 0x38);
          if (plVar16 != (long *)0x0) {
            plVar18 = plVar16 + 1;
            do {
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar6) {
                *plVar18 = *plVar18 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
        }
        FUN_10ad40968(param_1,*puVar17);
        if (plVar16 != (long *)0x0) {
          plVar18 = plVar16 + 1;
          do {
            lVar21 = *plVar18;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar6) {
              *plVar18 = lVar21 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar21 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
          }
        }
        puVar17 = puVar17 + 2;
        lVar21 = *(long *)(param_1 + 8);
        puVar8 = *(undefined8 **)(lVar21 + 0x628);
      } while (puVar17 != puVar8);
      puVar17 = *(undefined8 **)(lVar21 + 0x620);
    }
    while (puVar8 != puVar17) {
      puVar8 = puVar8 + -2;
      FUN_10a22b2a4();
    }
    *(undefined8 **)(lVar21 + 0x628) = puVar17;
LAB_10ad407ec:
    if ((bStack_f8 & 1) == 0) {
      plVar16 = (long *)(lStack_100 + 8);
      FUN_10ad48084(*plVar16 + 0x158);
      FUN_10ad3da64(*plVar16 + 0x178);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    plVar16 = (long *)(lVar21 + 0x620);
    plVar7 = *(long **)(lVar21 + 0x628);
    plVar19 = *(long **)(lVar21 + 0x620);
    uVar11 = (long)plVar7 - (long)plVar19;
    plVar9 = plVar19;
    plVar14 = plVar18;
    if (uVar24 == uVar11) {
      do {
        plVar15 = plVar14 + 2;
        if (*plVar14 != *plVar9) goto LAB_10ad400b0;
        plVar9 = plVar9 + 2;
        plVar14 = plVar15;
      } while (plVar15 != plVar23);
    }
    else {
LAB_10ad400b0:
      *(undefined4 *)(lVar21 + 0x61c) = 0;
    }
    lVar10 = lVar21;
    if (plVar16 == param_2) {
joined_r0x00010ad402dc:
      while ((plVar16 = plVar7, plVar19 != plVar7 &&
             (plVar16 = plVar19, (*(byte *)(*plVar19 + 0x30) & 1) == 0))) {
        plVar19 = plVar19 + 2;
      }
      *(bool *)(lVar10 + 0x10c) = plVar16 != plVar7;
      plVar16 = (long *)*param_2;
      plVar18 = (long *)param_2[1];
      if (plVar16 == plVar18) {
LAB_10ad40388:
        if (*(long *)(lVar10 + 0xb8) != 0) {
          lVar12 = lVar10 + 0xa8;
          FUN_10ad40cb0(lVar12,lVar10 + 0x620);
          lVar10 = *(long *)(param_1 + 8);
          if ((int)lVar12 != 0) {
            FUN_10ad46b40(lVar10 + 0xd8);
            lVar21 = *(long *)(param_1 + 8);
            *(undefined1 *)(lVar21 + 0x150) = 0;
            FUN_10ad473c8(lVar21 + 0xa8,lVar21 + 0x620);
            goto LAB_10ad407ec;
          }
        }
      }
      else {
        bVar22 = 0;
        do {
          bVar1 = *(byte *)(*plVar16 + 0x61);
          lVar10 = param_1;
          FUN_10ad3f994();
          if (lVar10 != 0) {
            FUN_10a5ad6d0();
          }
          bVar22 = bVar1 | bVar22;
          plVar16 = plVar16 + 2;
        } while (plVar16 != plVar18);
        lVar10 = *(long *)(param_1 + 8);
        if ((bVar22 & 1) == 0) goto LAB_10ad40388;
      }
      if (*(long *)(lVar10 + 0xe8) != 0) {
        uVar24 = lVar10 + 0xd8;
        FUN_10ad40cb0(uVar24,lVar10 + 0x620);
        if ((uVar24 & 1) != 0) goto LAB_10ad407ec;
        lVar10 = *(long *)(param_1 + 8);
      }
      FUN_10ad46b40(lVar10 + 0xd8);
      FUN_10a042718(*(long *)(param_1 + 8) + 0x138);
      lVar10 = *(long *)(param_1 + 8);
      *(undefined1 *)(lVar10 + 0x150) = 0;
      plVar16 = *(long **)(lVar10 + 0xa8);
      if (plVar16 != (long *)(lVar10 + 0xb0)) {
        do {
          lVar12 = *(long *)(lVar10 + 0x620);
          if (*(long *)(lVar10 + 0x628) != lVar12) {
            lVar20 = 0;
            uVar24 = 0;
LAB_10ad40428:
            uVar11 = plVar16[5];
            FUN_10a5ad8fc(uVar11,*(undefined8 *)(lVar12 + lVar20));
            if ((uVar11 & 1) == 0) goto code_r0x00010ad40438;
            plVar18 = (long *)plVar16[1];
            plVar23 = plVar16;
            if ((long *)plVar16[1] == (long *)0x0) {
              do {
                plVar16 = (long *)plVar23[2];
                bVar6 = (long *)*plVar16 != plVar23;
                plVar23 = plVar16;
              } while (bVar6);
            }
            else {
              do {
                plVar16 = plVar18;
                plVar18 = (long *)*plVar16;
              } while ((long *)*plVar16 != (long *)0x0);
            }
            goto LAB_10ad4051c;
          }
LAB_10ad40458:
          if (((param_3 ^ 1 | *(byte *)(lVar10 + 0x10c)) & 1) == 0) {
            FUN_10a0b4ec0(lVar10 + 0x138,*(long *)(plVar16[5] + 0xf8) + 0x208);
            plVar18 = (long *)plVar16[1];
            plVar23 = plVar16;
            if ((long *)plVar16[1] == (long *)0x0) {
              do {
                plVar16 = (long *)plVar23[2];
                bVar6 = (long *)*plVar16 != plVar23;
                plVar23 = plVar16;
              } while (bVar6);
            }
            else {
              do {
                plVar16 = plVar18;
                plVar18 = (long *)*plVar16;
              } while ((long *)*plVar16 != (long *)0x0);
            }
          }
          else {
            plVar18 = (long *)plVar16[1];
            plVar23 = plVar16;
            if ((long *)plVar16[1] == (long *)0x0) {
              do {
                plVar19 = (long *)plVar23[2];
                bVar6 = (long *)*plVar19 != plVar23;
                plVar23 = plVar19;
              } while (bVar6);
            }
            else {
              do {
                plVar19 = plVar18;
                plVar18 = (long *)*plVar19;
              } while ((long *)*plVar19 != (long *)0x0);
            }
            FUN_10ad40968(param_1,*(long *)(plVar16[5] + 0xf8) + 0x208);
            plVar16 = plVar19;
          }
LAB_10ad4051c:
          lVar10 = *(long *)(param_1 + 8);
        } while (plVar16 != (long *)(lVar10 + 0xb0));
      }
      plStack_110 = *(long **)(lVar10 + 0x5f8);
      plStack_108 = *(long **)(lVar10 + 0x600);
      if (plStack_108 != (long *)0x0) {
        plVar16 = plStack_108 + 1;
        do {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar6) {
            *plVar16 = *plVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      (**(code **)(*plStack_110 + 0x38))(&uStack_b0);
      lVar12 = *(long *)(param_1 + 8);
      lVar10 = *(long *)(lVar12 + 0x620);
      if (*(long *)(lVar12 + 0x628) != lVar10) {
        uVar24 = 0;
        bVar6 = false;
        do {
          plVar16 = (long *)(lVar10 + uVar24 * 0x10);
          lVar20 = *plVar16;
          lVar10 = lVar12 + 0xc0;
          FUN_10ad47d78(lVar10,lVar20);
          if (lVar12 + 200 == lVar10) {
LAB_10ad40698:
            if ((*(int *)(*plVar16 + 0x58) == -1) && (*(int *)(*plVar16 + 0x5c) == -1)) {
              *(undefined1 *)(*(long *)(param_1 + 8) + 0x150) = 1;
            }
            (**(code **)(*plStack_110 + 0x30))(&uStack_f0);
            FUN_10ad40df8(&lStack_120,param_1,*plVar16,lVar21 + 0x120);
            if (lStack_120 == 0) {
              __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                        (auStack_138,&UNK_10f6a6d6a,*plVar16 + 0x18);
              FUN_10ad46898(auStack_138);
              goto LAB_10ad40874;
            }
            FUN_10ad46c08(*(long *)(param_1 + 8) + 0xd8,&lStack_120);
            plVar16 = plStack_118;
            if (plStack_118 != (long *)0x0) {
              plVar18 = plStack_118 + 1;
              do {
                lVar10 = *plVar18;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *plVar18 = lVar10 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plStack_118 + 0x10))(plStack_118);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
              }
            }
            FUN_10a044790(&uStack_f0);
            (*(code *)*apuStack_e8[0])(apuStack_e8);
          }
          else {
            lVar12 = *(long *)(param_1 + 8);
            lVar10 = lVar12 + 0xc0;
            FUN_10ad47d78(lVar10,lVar20);
            if (lVar12 + 200 == lVar10) {
              plVar18 = (long *)0x0;
              uStack_f0 = 0;
              apuStack_e8[0] = (undefined8 *)0x0;
            }
            else {
              plVar18 = *(long **)(lVar10 + 0x40);
              apuStack_e8[0] = *(undefined8 **)(lVar10 + 0x40);
              uStack_f0 = *(ulong *)(lVar10 + 0x38);
              if (plVar18 != (long *)0x0) {
                plVar23 = plVar18 + 1;
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                  if (bVar4) {
                    *plVar23 = *plVar23 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
            }
            uVar11 = uStack_f0;
            uVar13 = uStack_f0;
            FUN_10a5ad8fc(uStack_f0,*plVar16);
            lVar10 = *plVar16;
            if ((int)uVar13 == 0) {
              bVar4 = false;
            }
            else {
              bVar4 = *(int *)(lVar10 + 0x58) != (int)*(undefined8 *)(uVar11 + 0x158) ||
                      *(int *)(lVar10 + 0x5c) !=
                      (int)((ulong)*(undefined8 *)(uVar11 + 0x158) >> 0x20);
            }
            if (*(char *)(lVar10 + 0x61) == '\x01') {
              FUN_10a0b4ec0(*(long *)(param_1 + 8) + 0x138,lVar20);
              uVar13 = 0;
              *(undefined1 *)(*plVar16 + 0x61) = 0;
            }
            if (plVar18 != (long *)0x0) {
              plVar23 = plVar18 + 1;
              do {
                lVar10 = *plVar23;
                cVar3 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                if (bVar2) {
                  *plVar23 = lVar10 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
              }
            }
            bVar6 = (bool)(bVar4 | bVar6);
            if ((uVar13 & 1) == 0) goto LAB_10ad40698;
          }
          uVar24 = uVar24 + 1;
          lVar12 = *(long *)(param_1 + 8);
          lVar10 = *(long *)(lVar12 + 0x620);
        } while (uVar24 < (ulong)(*(long *)(lVar12 + 0x628) - lVar10 >> 4));
        if (bVar6) {
          FUN_10ad473c8(lVar12 + 0xa8,lVar12 + 0x620);
          lVar12 = *(long *)(param_1 + 8);
        }
      }
      if (*(char *)(lVar12 + 0x10c) == '\x01') {
        FUN_10ad41150(param_1,*(undefined8 *)(lVar12 + 0x110));
      }
      FUN_10a044790(&uStack_b0);
      (*(code *)*apuStack_a8[0])(apuStack_a8);
      plVar16 = plStack_108;
      if (plStack_108 != (long *)0x0) {
        plVar18 = plStack_108 + 1;
        do {
          lVar21 = *plVar18;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar6) {
            *plVar18 = lVar21 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plStack_108 + 0x10))(plStack_108);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      goto LAB_10ad407ec;
    }
    uVar13 = *(ulong *)(lVar21 + 0x630);
    if (uVar24 <= uVar13 - (long)plVar19) {
      if (uVar11 < uVar24) {
        plVar16 = (long *)((long)plVar18 + uVar11);
        if (plVar7 != plVar19) {
          do {
            plVar9 = plVar18 + 2;
            func_0x00010ad4568c(plVar19,*plVar18,plVar18[1]);
            plVar19 = plVar19 + 2;
            plVar18 = plVar9;
          } while (plVar9 != plVar16);
          plVar7 = *(long **)(lVar21 + 0x628);
        }
        for (; plVar19 = plVar7, plVar16 != plVar23; plVar16 = plVar16 + 2) {
          lVar10 = plVar16[1];
          lVar12 = *plVar16;
          plVar19[1] = plVar16[1];
          *plVar19 = lVar12;
          if (lVar10 != 0) {
            plVar18 = (long *)(lVar10 + 8);
            do {
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar6) {
                *plVar18 = *plVar18 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          plVar7 = plVar19 + 2;
        }
      }
      else {
        do {
          plVar16 = plVar18 + 2;
          func_0x00010ad4568c(plVar19,*plVar18,plVar18[1]);
          plVar19 = plVar19 + 2;
          plVar18 = plVar16;
        } while (plVar16 != plVar23);
        plVar16 = *(long **)(lVar21 + 0x628);
        while (plVar19 != plVar16) {
          plVar16 = plVar16 + -2;
          FUN_10a22b2a4();
        }
      }
LAB_10ad402c4:
      *(long **)(lVar21 + 0x628) = plVar19;
      lVar10 = *(long *)(param_1 + 8);
      plVar19 = *(long **)(lVar10 + 0x620);
      plVar7 = *(long **)(lVar10 + 0x628);
      goto joined_r0x00010ad402dc;
    }
    uVar24 = (long)uVar24 >> 4;
    if (plVar19 != (long *)0x0) {
      plVar9 = plVar19;
      if (plVar7 != plVar19) {
        do {
          plVar7 = plVar7 + -2;
          FUN_10a22b2a4();
        } while (plVar7 != plVar19);
        plVar9 = (long *)*plVar16;
      }
      *(long **)(lVar21 + 0x628) = plVar19;
      __ZdlPv(plVar9);
      uVar13 = 0;
      *plVar16 = 0;
      *(undefined8 *)(lVar21 + 0x628) = 0;
      *(undefined8 *)(lVar21 + 0x630) = 0;
    }
    if (uVar24 >> 0x3c == 0) {
      uVar11 = (long)uVar13 >> 3;
      if ((ulong)((long)uVar13 >> 3) <= uVar24) {
        uVar11 = uVar24;
      }
      if (0x7fffffffffffffef < uVar13) {
        uVar11 = 0xfffffffffffffff;
      }
      FUN_10a22b1b4(plVar16,uVar11);
      plVar19 = *(long **)(lVar21 + 0x628);
      do {
        lVar10 = plVar18[1];
        lVar12 = *plVar18;
        plVar19[1] = plVar18[1];
        *plVar19 = lVar12;
        if (lVar10 != 0) {
          plVar16 = (long *)(lVar10 + 8);
          do {
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar6) {
              *plVar16 = *plVar16 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plVar18 = plVar18 + 2;
        plVar19 = plVar19 + 2;
      } while (plVar18 != plVar23);
      goto LAB_10ad402c4;
    }
  }
  FUN_10a22b1ec();
LAB_10ad40874:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ad40878);
  (*pcVar5)();
code_r0x00010ad40438:
  uVar24 = uVar24 + 1;
  lVar10 = *(long *)(param_1 + 8);
  lVar12 = *(long *)(lVar10 + 0x620);
  lVar20 = lVar20 + 0x10;
  if ((ulong)(*(long *)(lVar10 + 0x628) - lVar12 >> 4) <= uVar24) goto LAB_10ad40458;
  goto LAB_10ad40428;
}



/* Entry: 10ad40968; end: 10ad40caf;  */

undefined ** FUN_10ad40968(long param_1,long *param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = (undefined **)0xd0;
  __Znwm();
  ppuVar6[1] = (undefined *)0x0;
  ppuVar6[2] = (undefined *)0x0;
  *ppuVar6 = (undefined *)&PTR_DAT_110ae90f0;
  ppuVar7 = ppuVar6 + 3;
  ppuStack_80 = &PTR_PTR_1132fed50;
  puStack_78 = &UNK_1053a6a3c;
  ppuStack_70 = &PTR_DAT_110ae9180;
  func_0x000109d18d1c(ppuVar7,&UNK_10f6a6e7b,0x12,&ppuStack_80);
  func_0x0001092ba41c(&ppuStack_80);
  ppuStack_90 = ppuVar7;
  ppuStack_88 = ppuVar6;
  FUN_109d188b8(&ppuStack_80,ppuVar7);
  uStack_a0 = 0;
  ppuStack_98 = (undefined **)0x0;
  lVar11 = *(long *)(param_1 + 8);
  lVar9 = lVar11 + 0xc0;
  FUN_10ad47d78(lVar9,param_2);
  lVar12 = *(long *)(param_1 + 8);
  if (lVar11 + 200 == lVar9) {
    ppuVar7 = (undefined **)(lVar12 + 0xf0);
    plVar8 = param_2;
    FUN_10ad47d78();
    if ((undefined **)(lVar12 + 0xf8) == ppuVar7) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        plVar13 = (long *)*param_2;
        if (-1 < *(char *)((long)param_2 + 0x17)) {
          plVar13 = param_2;
        }
        ppuVar7 = (undefined **)0x0;
        plVar8 = (long *)0x1;
        func_0x00010ae06f08(0,1,&UNK_10f6a6c80,&UNK_10f6a6e8e,0x667,&UNK_10f6a6ec4,in_x6,in_x7,
                            plVar13);
      }
      goto LAB_10ad40b74;
    }
    lVar11 = *(long *)(param_1 + 8);
    lVar9 = lVar11 + 0xf0;
    FUN_10ad47d78(lVar9,param_2);
    if (lVar11 + 0xf8 != lVar9) {
      uStack_a0 = *(undefined8 *)(lVar9 + 0x38);
      ppuVar6 = *(undefined ***)(lVar9 + 0x40);
      lVar9 = 0xd8;
      goto joined_r0x00010ad40a8c;
    }
    uStack_a0 = 0;
    ppuVar6 = (undefined **)0x0;
    lVar9 = 0xd8;
  }
  else {
    lVar9 = lVar12 + 0xc0;
    FUN_10ad47d78(lVar9,param_2);
    if (lVar12 + 200 == lVar9) {
      uStack_a0 = 0;
      ppuVar6 = (undefined **)0x0;
      lVar9 = 0xa8;
    }
    else {
      uStack_a0 = *(undefined8 *)(lVar9 + 0x38);
      ppuVar6 = *(undefined ***)(lVar9 + 0x40);
      lVar9 = 0xa8;
joined_r0x00010ad40a8c:
      if (ppuVar6 != (undefined **)0x0) {
        ppuVar7 = ppuVar6 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
          if (bVar5) {
            *ppuVar7 = *ppuVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
  }
  ppuStack_98 = ppuVar6;
  FUN_10ad47010(*(long *)(param_1 + 8) + lVar9);
  FUN_10ad48084(*(long *)(param_1 + 8) + 0x158);
  ppuVar7 = (undefined **)(*(long *)(param_1 + 8) + 0x178);
  FUN_10ad3da64();
  uStack_a0 = 0;
  ppuStack_98 = (undefined **)0x0;
  plVar8 = param_2;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar1 = ppuVar6 + 1;
    do {
      puVar10 = *ppuVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar5) {
        *ppuVar1 = puVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar10 == (undefined *)0x0) {
      (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar7 = ppuVar6;
      plVar8 = param_2;
    }
  }
LAB_10ad40b74:
  ppuVar6 = ppuStack_98;
  if (ppuStack_98 != (undefined **)0x0) {
    ppuVar1 = ppuStack_98 + 1;
    do {
      puVar10 = *ppuVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar5) {
        *ppuVar1 = puVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar10 == (undefined *)0x0) {
      (**(code **)(*ppuStack_98 + 0x10))(ppuStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar7 = ppuVar6;
    }
  }
  if (ppuStack_80 != (undefined **)0x0) {
    ppuVar7 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)(puStack_78);
    *ppuVar7 = extraout_x8;
    ppuVar7 = ppuStack_70;
    if (ppuStack_70 != (undefined **)0x0) {
      plVar8 = (long *)0x0;
      (**(code **)(*ppuStack_70 + 0x30))();
    }
  }
  ppuVar6 = ppuStack_88;
  if (ppuStack_88 != (undefined **)0x0) {
    ppuVar1 = ppuStack_88 + 1;
    do {
      puVar10 = *ppuVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar5) {
        *ppuVar1 = puVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar10 == (undefined *)0x0) {
      (**(code **)(*ppuStack_88 + 0x10))(ppuStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar7 = ppuVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar7;
  }
  ___stack_chk_fail();
  func_0x00010ad460c0(&uStack_a0);
  if (ppuStack_80 != (undefined **)0x0) {
    ppuVar6 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)(puStack_78);
    *ppuVar6 = extraout_x8_00;
    if (ppuStack_70 != (undefined **)0x0) {
      plVar8 = (long *)0x0;
      (**(code **)(*ppuStack_70 + 0x30))();
    }
  }
  func_0x00010a061620(&ppuStack_90);
  __Unwind_Resume();
  lVar9 = *plVar8;
  if (ppuVar7[2] == (undefined *)(plVar8[1] - lVar9 >> 4)) {
    if (plVar8[1] != lVar9) {
      uVar14 = 0;
      do {
        puVar3 = (undefined8 *)(lVar9 + uVar14 * 0x10);
        ppuVar6 = ppuVar7 + 3;
        FUN_10ad47d78(ppuVar6,*puVar3);
        if (ppuVar7 + 4 == ppuVar6) goto LAB_10ad40dc8;
        puVar10 = ppuVar6[7];
        plVar13 = (long *)ppuVar6[8];
        if (plVar13 != (long *)0x0) {
          plVar2 = plVar13 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = *plVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if ((puVar10 == (undefined *)0x0) ||
           (FUN_10a5ad8fc(puVar10,*puVar3), ((ulong)puVar10 & 1) == 0)) {
          if (plVar13 != (long *)0x0) {
            plVar8 = plVar13 + 1;
            do {
              lVar9 = *plVar8;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar5) {
                *plVar8 = lVar9 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
            }
          }
          goto LAB_10ad40dc8;
        }
        if (plVar13 != (long *)0x0) {
          plVar2 = plVar13 + 1;
          do {
            lVar9 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        uVar14 = uVar14 + 1;
        lVar9 = *plVar8;
      } while (uVar14 < (ulong)(plVar8[1] - lVar9 >> 4));
    }
    ppuVar7 = (undefined **)0x1;
  }
  else {
LAB_10ad40dc8:
    ppuVar7 = (undefined **)0x0;
  }
  return ppuVar7;
}



/* Entry: 10ad40cb0; end: 10ad40df7;  */

undefined8 FUN_10ad40cb0(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  
  lVar7 = *param_2;
  if (*(long *)(param_1 + 0x10) == param_2[1] - lVar7 >> 4) {
    if (param_2[1] != lVar7) {
      uVar9 = 0;
      do {
        puVar2 = (undefined8 *)(lVar7 + uVar9 * 0x10);
        lVar7 = param_1 + 0x18;
        FUN_10ad47d78(lVar7,*puVar2);
        if (param_1 + 0x20 == lVar7) goto LAB_10ad40dc8;
        uVar5 = *(ulong *)(lVar7 + 0x38);
        plVar8 = *(long **)(lVar7 + 0x40);
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if ((uVar5 == 0) || (FUN_10a5ad8fc(uVar5,*puVar2), (uVar5 & 1) == 0)) {
          if (plVar8 != (long *)0x0) {
            plVar1 = plVar8 + 1;
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
              (**(code **)(*plVar8 + 0x10))(plVar8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
          goto LAB_10ad40dc8;
        }
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 1;
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
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        uVar9 = uVar9 + 1;
        lVar7 = *param_2;
      } while (uVar9 < (ulong)(param_2[1] - lVar7 >> 4));
    }
    uVar6 = 1;
  }
  else {
LAB_10ad40dc8:
    uVar6 = 0;
  }
  return uVar6;
}



/* Entry: 10ad40df8; end: 10ad4114f;  */

void FUN_10ad40df8(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long *plStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 auStack_150 [48];
  long *plStack_120;
  long *plStack_118;
  undefined8 *puStack_110;
  long lStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_b0 = *(long **)(*(long *)(param_2 + 8) + 0x520);
  lStack_90 = *(long *)(*(long *)(param_2 + 8) + 0x528);
  if (lStack_90 != 0) {
    plVar13 = (long *)(lStack_90 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar2) {
        *plVar13 = *plVar13 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_d0 = 0;
  uStack_c8 = 0;
  plStack_a8 = (long *)&UNK_109896774;
  ppuStack_a0 = &PTR_DAT_110b17068;
  plVar4 = (long *)0xd0;
  plStack_98 = plStack_b0;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_DAT_110ae90f0;
  plVar13 = plVar4 + 3;
  func_0x000109d18d1c(plVar13,&UNK_10f6a6e51,0x11,&plStack_b0);
  plStack_c0 = plVar13;
  plStack_b8 = plVar4;
  func_0x0001092ba41c(&plStack_b0);
  lVar15 = *(long *)(param_2 + 8);
  uVar14 = *(undefined8 *)(lVar15 + 0x5f8);
  plVar5 = (long *)0x2c8;
  __Znwm();
  lVar11 = lVar15 + 0x530;
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110c70230;
  plVar10 = plVar5 + 3;
  plStack_c0 = (long *)0x0;
  plStack_b8 = (long *)0x0;
  if (*(char *)(lVar15 + 0x5e8) == '\0') {
    lVar11 = 0;
  }
  plStack_b0 = plVar13;
  plStack_a8 = plVar4;
  FUN_10a3c9384(plVar10,param_2,param_3,&plStack_b0,lVar11,param_4,uVar14,
                *(undefined8 *)(lVar15 + 0x5f0));
  plVar13 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar4 = plStack_a8 + 1;
    do {
      lVar11 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  lVar11 = *(long *)(param_2 + 8);
  puVar6 = (undefined8 *)0x1c8;
  plStack_e0 = plVar10;
  plStack_d8 = plVar5;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_110c70280;
  puVar12 = puVar6 + 3;
  plStack_e0 = (long *)0x0;
  plStack_d8 = (long *)0x0;
  plStack_b0 = plVar10;
  plStack_a8 = plVar5;
  FUN_10a5a21a8(puVar12,&plStack_b0,*(undefined8 *)(lVar11 + 0x130));
  plVar13 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar4 = plStack_a8 + 1;
    do {
      lVar11 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  *param_1 = (long)puVar12;
  param_1[1] = (long)puVar6;
  if (*(char *)(param_3 + 0x60) == '\x01') {
    FUN_10a5ad6d0(puVar12,1);
  }
  if ((*(byte *)(param_3 + 0x74) & 1) == 0) {
    plVar4 = (long *)puVar6[0x24];
  }
  else {
    plVar4 = (long *)puVar6[0x24];
    *(undefined4 *)(plVar4[0x115] + 0x80) = *(undefined4 *)(param_3 + 0x70);
  }
  uVar8 = (ulong)*(byte *)(*(long *)(param_2 + 8) + 0xa0);
  FUN_10a3dfabc(plVar4,uVar8);
  plVar5 = plStack_d8;
  puVar6[0x2e] = *(undefined8 *)(param_3 + 0x58);
  if (plStack_d8 != (long *)0x0) {
    plVar7 = plStack_d8 + 1;
    do {
      lVar11 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar4 = plVar5;
    }
  }
  plVar5 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar7 = plStack_b8 + 1;
    do {
      lVar11 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      plVar4 = plVar5;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    FUN_10a3f5e88(&plStack_b0);
    __ZNSt3__119__shared_weak_countD2Ev(puVar6);
    __ZdlPv();
    FUN_10a3f5e88(&plStack_e0);
    func_0x00010a061620(&plStack_c0);
    plVar7 = plVar4;
    __Unwind_Resume();
    plStack_118 = plVar13;
    plStack_f8 = plVar5;
    pcStack_e8 = FUN_10ad41150;
    if (*(long *)(plVar7[1] + 0xe8) != 0) {
      plStack_120 = plVar10;
      puStack_110 = puVar6;
      lStack_108 = param_2;
      plStack_100 = plVar4;
      puStack_f0 = &stack0xfffffffffffffff0;
      FUN_10a13299c(auStack_150,&UNK_10f6a6dbb);
      FUN_10ad47800(plVar7[1] + 0xd8,FUN_10a5a3c3c,0);
      iVar3 = (int)plVar7[1] + 0xd8;
      FUN_10ad47354();
      if (iVar3 != 0) {
        lVar9 = plVar7[1];
        lVar11 = *(long *)(lVar9 + 0x138);
        lVar15 = *(long *)(lVar9 + 0x140);
        if (lVar11 != lVar15) {
          do {
            FUN_10ad40968(plVar7,lVar11);
            lVar11 = lVar11 + 0x18;
          } while (lVar11 != lVar15);
          lVar9 = plVar7[1];
        }
        FUN_10a042718(lVar9 + 0x138);
        lVar11 = plVar7[1];
        plVar13 = *(long **)(lVar11 + 0xd8);
        if (plVar13 != (long *)(lVar11 + 0xe0)) {
          do {
            FUN_10a3dfabc(*(undefined8 *)(plVar13[5] + 0x108),*(undefined1 *)(plVar7[1] + 0xa0));
            if ((*(byte *)(plVar13[5] + 0x157) & 1) == 0) {
              FUN_10ad41fb8(plVar7,plVar13[5],uVar8);
            }
            plVar10 = (long *)plVar13[1];
            plVar4 = plVar13;
            if ((long *)plVar13[1] == (long *)0x0) {
              do {
                plVar13 = (long *)plVar4[2];
                bVar2 = (long *)*plVar13 != plVar4;
                plVar4 = plVar13;
              } while (bVar2);
            }
            else {
              do {
                plVar13 = plVar10;
                plVar10 = (long *)*plVar13;
              } while ((long *)*plVar13 != (long *)0x0);
            }
          } while (plVar13 != (long *)(lVar11 + 0xe0));
          lVar11 = plVar7[1];
        }
        puVar12 = (undefined8 *)(lVar11 + 0xf8);
        func_0x00010ad45864(lVar11 + 0xf0,*puVar12);
        *(undefined8 **)(lVar11 + 0xf0) = puVar12;
        *puVar12 = 0;
        plVar10 = (long *)(lVar11 + 0xe0);
        lStack_160 = *plVar10;
        *(undefined8 *)(lVar11 + 0x100) = 0;
        plVar13 = *(long **)(lVar11 + 0xd8);
        lStack_158 = *(long *)(lVar11 + 0xe8);
        plStack_168 = &lStack_160;
        if (lStack_158 != 0) {
          *(long **)(lStack_160 + 0x10) = &lStack_160;
          *(long **)(lVar11 + 0xd8) = plVar10;
          *plVar10 = 0;
          *(undefined8 *)(lVar11 + 0xe8) = 0;
          plStack_168 = plVar13;
          while (plVar13 != &lStack_160) {
            FUN_10ad46c08(plVar7[1] + 0xa8,plVar13 + 5);
            plVar10 = (long *)plVar13[1];
            plVar4 = plVar13;
            if ((long *)plVar13[1] == (long *)0x0) {
              do {
                plVar13 = (long *)plVar4[2];
                bVar2 = (long *)*plVar13 != plVar4;
                plVar4 = plVar13;
              } while (bVar2);
            }
            else {
              do {
                plVar13 = plVar10;
                plVar10 = (long *)*plVar13;
              } while ((long *)*plVar13 != (long *)0x0);
            }
          }
        }
        lVar11 = plVar7[1];
        if ((*(byte *)(lVar11 + 0x150) & 1) != 0) {
          FUN_10ad473c8(lVar11 + 0xa8,lVar11 + 0x620);
          *(undefined1 *)(plVar7[1] + 0x150) = 0;
        }
        FUN_10ad46020(&plStack_168,lStack_160);
      }
      FUN_10a144868(auStack_150);
    }
    return;
  }
  return;
}



/* Entry: 10ad41150; end: 10ad41387;  */

void FUN_10ad41150(long param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [48];
  
  if (*(long *)(*(long *)(param_1 + 8) + 0xe8) != 0) {
    FUN_10a13299c(auStack_70,&UNK_10f6a6dbb);
    FUN_10ad47800(*(long *)(param_1 + 8) + 0xd8,FUN_10a5a3c3c,0);
    iVar3 = (int)*(undefined8 *)(param_1 + 8) + 0xd8;
    FUN_10ad47354();
    if (iVar3 != 0) {
      lVar4 = *(long *)(param_1 + 8);
      lVar9 = *(long *)(lVar4 + 0x138);
      lVar1 = *(long *)(lVar4 + 0x140);
      if (lVar9 != lVar1) {
        do {
          FUN_10ad40968(param_1,lVar9);
          lVar9 = lVar9 + 0x18;
        } while (lVar9 != lVar1);
        lVar4 = *(long *)(param_1 + 8);
      }
      FUN_10a042718(lVar4 + 0x138);
      lVar9 = *(long *)(param_1 + 8);
      plVar8 = *(long **)(lVar9 + 0xd8);
      if (plVar8 != (long *)(lVar9 + 0xe0)) {
        do {
          FUN_10a3dfabc(*(undefined8 *)(plVar8[5] + 0x108),
                        *(undefined1 *)(*(long *)(param_1 + 8) + 0xa0));
          if ((*(byte *)(plVar8[5] + 0x157) & 1) == 0) {
            FUN_10ad41fb8(param_1,plVar8[5],param_2);
          }
          plVar5 = (long *)plVar8[1];
          plVar7 = plVar8;
          if ((long *)plVar8[1] == (long *)0x0) {
            do {
              plVar8 = (long *)plVar7[2];
              bVar2 = (long *)*plVar8 != plVar7;
              plVar7 = plVar8;
            } while (bVar2);
          }
          else {
            do {
              plVar8 = plVar5;
              plVar5 = (long *)*plVar8;
            } while ((long *)*plVar8 != (long *)0x0);
          }
        } while (plVar8 != (long *)(lVar9 + 0xe0));
        lVar9 = *(long *)(param_1 + 8);
      }
      puVar6 = (undefined8 *)(lVar9 + 0xf8);
      func_0x00010ad45864(lVar9 + 0xf0,*puVar6);
      *(undefined8 **)(lVar9 + 0xf0) = puVar6;
      *puVar6 = 0;
      plVar5 = (long *)(lVar9 + 0xe0);
      lStack_80 = *plVar5;
      *(undefined8 *)(lVar9 + 0x100) = 0;
      plVar8 = *(long **)(lVar9 + 0xd8);
      lStack_78 = *(long *)(lVar9 + 0xe8);
      plStack_88 = &lStack_80;
      if (lStack_78 != 0) {
        *(long **)(lStack_80 + 0x10) = &lStack_80;
        *(long **)(lVar9 + 0xd8) = plVar5;
        *plVar5 = 0;
        *(undefined8 *)(lVar9 + 0xe8) = 0;
        plStack_88 = plVar8;
        while (plVar8 != &lStack_80) {
          FUN_10ad46c08(*(long *)(param_1 + 8) + 0xa8,plVar8 + 5);
          plVar5 = (long *)plVar8[1];
          plVar7 = plVar8;
          if ((long *)plVar8[1] == (long *)0x0) {
            do {
              plVar8 = (long *)plVar7[2];
              bVar2 = (long *)*plVar8 != plVar7;
              plVar7 = plVar8;
            } while (bVar2);
          }
          else {
            do {
              plVar8 = plVar5;
              plVar5 = (long *)*plVar8;
            } while ((long *)*plVar8 != (long *)0x0);
          }
        }
      }
      lVar9 = *(long *)(param_1 + 8);
      if ((*(byte *)(lVar9 + 0x150) & 1) != 0) {
        FUN_10ad473c8(lVar9 + 0xa8,lVar9 + 0x620);
        *(undefined1 *)(*(long *)(param_1 + 8) + 0x150) = 0;
      }
      FUN_10ad46020(&plStack_88,lStack_80);
    }
    FUN_10a144868(auStack_70);
  }
  return;
}



/* Entry: 10ad41388; end: 10ad413d3;  */

long * FUN_10ad41388(long *param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    *(undefined1 *)(param_1 + 1) = 1;
    lVar1 = *param_1;
    FUN_10ad48084(*(long *)(lVar1 + 8) + 0x158);
    FUN_10ad3da64(*(long *)(lVar1 + 8) + 0x178);
  }
  return param_1;
}



/* Entry: 10ad413d4; end: 10ad416d7;  */

void FUN_10ad413d4(long param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  byte bVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_60;
  long *plStack_58;
  
  lVar15 = *(long *)(param_1 + 8);
  puVar12 = *(undefined8 **)(lVar15 + 0x138);
  puVar14 = *(undefined8 **)(lVar15 + 0x140);
  puVar7 = puVar12;
  if (puVar12 != puVar14) {
    puVar16 = (undefined8 *)*param_2;
    bVar11 = *(byte *)((long)puVar16 + 0x17);
    uVar2 = puVar16[1];
    if (-1 < (char)bVar11) {
      uVar2 = (ulong)bVar11;
    }
    do {
      bVar4 = *(byte *)((long)puVar12 + 0x17);
      uVar3 = puVar12[1];
      if (-1 < (char)bVar4) {
        uVar3 = (ulong)bVar4;
      }
      if (uVar2 == uVar3) {
        puVar7 = (undefined8 *)*puVar16;
        if (-1 < (char)bVar11) {
          puVar7 = puVar16;
        }
        puVar1 = (undefined8 *)*puVar12;
        if (-1 < (char)bVar4) {
          puVar1 = puVar12;
        }
        _memcmp(puVar7,puVar1,uVar2);
        if ((int)puVar7 == 0) {
          puVar7 = puVar12;
          if ((puVar12 != puVar14) && (puVar16 = puVar12 + 3, puVar16 != puVar14))
          goto LAB_10ad41488;
          break;
        }
      }
      puVar12 = puVar12 + 3;
      puVar7 = puVar14;
    } while (puVar12 != puVar14);
  }
  goto LAB_10ad41514;
LAB_10ad41488:
  do {
    plVar10 = (long *)*param_2;
    bVar11 = *(byte *)((long)plVar10 + 0x17);
    uVar2 = plVar10[1];
    if (-1 < (char)bVar11) {
      uVar2 = (ulong)bVar11;
    }
    bVar4 = *(byte *)((long)puVar16 + 0x17);
    uVar3 = puVar16[1];
    if (-1 < (char)bVar4) {
      uVar3 = (ulong)bVar4;
    }
    if (uVar2 == uVar3) {
      plVar8 = (long *)*plVar10;
      if (-1 < (char)bVar11) {
        plVar8 = plVar10;
      }
      puVar7 = (undefined8 *)*puVar16;
      if (-1 < (char)bVar4) {
        puVar7 = puVar16;
      }
      _memcmp(plVar8,puVar7);
      puVar7 = puVar12;
      if ((int)plVar8 != 0) goto LAB_10ad414dc;
    }
    else {
LAB_10ad414dc:
      if (*(char *)((long)puVar12 + 0x17) < '\0') {
        __ZdlPv(*puVar12);
      }
      uVar18 = puVar16[1];
      uVar17 = *puVar16;
      puVar12[2] = puVar16[2];
      puVar7 = puVar12 + 3;
      puVar12[1] = uVar18;
      *puVar12 = uVar17;
      *(undefined1 *)((long)puVar16 + 0x17) = 0;
      *(undefined1 *)puVar16 = 0;
    }
    puVar16 = puVar16 + 3;
    puVar12 = puVar7;
  } while (puVar16 != puVar14);
  puVar14 = *(undefined8 **)(lVar15 + 0x140);
LAB_10ad41514:
  func_0x000107c2846c(lVar15 + 0x138,puVar7,puVar14);
  lVar13 = *(long *)(param_1 + 8);
  if (*(long *)(lVar13 + 0xe8) == 0) {
    lVar9 = lVar13 + 0xc0;
    FUN_10ad47d78(lVar9,*param_2);
    if (lVar13 + 200 != lVar9) {
      return;
    }
    FUN_10ad45700(*(long *)(param_1 + 8) + 0x620,param_2);
    FUN_10ad40df8(&uStack_60,param_1,*param_2,lVar15 + 0x120);
    lVar15 = *(long *)(param_1 + 8);
    bVar11 = *(byte *)(*param_2 + 0x30);
    if (*(long *)(lVar15 + 0xb8) != 0) {
      bVar11 = *(byte *)(lVar15 + 0x10c) | bVar11;
    }
    *(byte *)(lVar15 + 0x10c) = bVar11;
    FUN_10ad46c08(lVar15 + 0xa8,&uStack_60);
    FUN_10a5a3c3c(uStack_60);
    if (plStack_58 == (long *)0x0) goto LAB_10ad41658;
    plVar10 = plStack_58 + 1;
    do {
      lVar15 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      plVar8 = plStack_58;
    } while (cVar5 != '\0');
  }
  else {
    lVar9 = lVar13 + 0xf0;
    FUN_10ad47d78(lVar9,*param_2);
    if (lVar13 + 0xf8 != lVar9) {
      return;
    }
    FUN_10ad40df8(&uStack_60,param_1,*param_2,lVar15 + 0x120);
    FUN_10ad46c08(*(long *)(param_1 + 8) + 0xd8,&uStack_60);
    FUN_10ad45700(*(long *)(param_1 + 8) + 0x620,param_2);
    *(byte *)(*(long *)(param_1 + 8) + 0x10c) =
         *(byte *)(*(long *)(param_1 + 8) + 0x10c) | *(byte *)(*param_2 + 0x30);
    if (plStack_58 == (long *)0x0) goto LAB_10ad41658;
    plVar10 = plStack_58 + 1;
    do {
      lVar15 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      plVar8 = plStack_58;
    } while (cVar5 != '\0');
  }
  if (lVar15 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
LAB_10ad41658:
  FUN_10ad48084(*(long *)(param_1 + 8) + 0x158);
  FUN_10ad3da64(*(long *)(param_1 + 8) + 0x178);
  return;
}



/* Entry: 10ad416d8; end: 10ad41733;  */

void FUN_10ad416d8(undefined8 *param_1)

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



/* Entry: 10ad41734; end: 10ad41a27;  */

long ** FUN_10ad41734(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  long **pplVar4;
  long lVar5;
  undefined *extraout_x8;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  plVar7 = *(long **)(lVar5 + 0xa8);
  plStack_d0 = &lStack_c8;
  plVar6 = (long *)(lVar5 + 0xb0);
  lStack_c8 = *plVar6;
  lStack_c0 = *(long *)(lVar5 + 0xb8);
  if (lStack_c0 != 0) {
    *(long **)(lStack_c8 + 0x10) = plStack_d0;
    *(long **)(lVar5 + 0xa8) = plVar6;
    *plVar6 = 0;
    *(undefined8 *)(lVar5 + 0xb8) = 0;
    plStack_d0 = plVar7;
  }
  plVar6 = (long *)(lVar5 + 200);
  lStack_b0 = *plVar6;
  plVar7 = *(long **)(lVar5 + 0xc0);
  plStack_b8 = &lStack_b0;
  lStack_a8 = *(long *)(lVar5 + 0xd0);
  if (lStack_a8 != 0) {
    *(long **)(lStack_b0 + 0x10) = plStack_b8;
    *(long **)(lVar5 + 0xc0) = plVar6;
    *plVar6 = 0;
    *(undefined8 *)(lVar5 + 0xd0) = 0;
    plStack_b8 = plVar7;
  }
  lVar5 = *(long *)(param_1 + 8);
  plVar7 = *(long **)(lVar5 + 0xd8);
  plStack_100 = &lStack_f8;
  plVar6 = (long *)(lVar5 + 0xe0);
  lStack_f8 = *plVar6;
  lStack_f0 = *(long *)(lVar5 + 0xe8);
  if (lStack_f0 != 0) {
    *(long **)(lStack_f8 + 0x10) = plStack_100;
    *(long **)(lVar5 + 0xd8) = plVar6;
    *plVar6 = 0;
    *(undefined8 *)(lVar5 + 0xe8) = 0;
    plStack_100 = plVar7;
  }
  plVar6 = (long *)(lVar5 + 0xf8);
  lStack_e0 = *plVar6;
  plVar7 = *(long **)(lVar5 + 0xf0);
  plStack_e8 = &lStack_e0;
  lStack_d8 = *(long *)(lVar5 + 0x100);
  if (lStack_d8 != 0) {
    *(long **)(lStack_e0 + 0x10) = plStack_e8;
    *(long **)(lVar5 + 0xf0) = plVar6;
    *plVar6 = 0;
    *(undefined8 *)(lVar5 + 0x100) = 0;
    plStack_e8 = plVar7;
  }
  plVar7 = (long *)0xd0;
  __Znwm();
  plVar8 = plVar7 + 1;
  *plVar8 = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_DAT_110ae90f0;
  plVar6 = plVar7 + 3;
  ppuStack_a0 = &PTR_PTR_1132fed50;
  puStack_98 = &UNK_1053a6a3c;
  ppuStack_90 = &PTR_DAT_110ae9180;
  func_0x000109d18d1c(plVar6,&UNK_10f6a6d83,0x11,&ppuStack_a0);
  func_0x0001092ba41c(&ppuStack_a0);
  plStack_110 = plVar6;
  plStack_108 = plVar7;
  FUN_109d188b8(&ppuStack_a0,plVar6);
  FUN_10ad46b40(&plStack_d0);
  FUN_10ad46b40(&plStack_100);
  lVar5 = *(long *)(param_1 + 8);
  *(undefined1 *)(lVar5 + 0x150) = 0;
  FUN_10ad48084(lVar5 + 0x158);
  FUN_10ad3da64(*(long *)(param_1 + 8) + 0x178);
  if (ppuStack_a0 != (undefined **)0x0) {
    ppuVar3 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)(puStack_98);
    *ppuVar3 = extraout_x8;
    if (ppuStack_90 != (undefined **)0x0) {
      (**(code **)(*ppuStack_90 + 0x30))(ppuStack_90,0);
    }
  }
  do {
    lVar5 = *plVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
  func_0x00010ad45864(&plStack_e8,lStack_e0);
  FUN_10ad46020(&plStack_100,lStack_f8);
  func_0x00010ad45864(&plStack_b8,lStack_b0);
  pplVar4 = &plStack_d0;
  FUN_10ad46020(pplVar4,lStack_c8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010a061620(&plStack_110);
    FUN_10ad41a28(&plStack_100);
    FUN_10ad41a28(&plStack_d0);
    __Unwind_Resume();
    func_0x00010ad45864(pplVar4 + 3,pplVar4[4]);
    FUN_10ad46020(pplVar4,pplVar4[1]);
    return pplVar4;
  }
  return pplVar4;
}



/* Entry: 10ad41a28; end: 10ad41a5f;  */

long FUN_10ad41a28(long param_1)

{
  func_0x00010ad45864(param_1 + 0x18,*(undefined8 *)(param_1 + 0x20));
  FUN_10ad46020(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10ad41a60; end: 10ad41b9b;  */

ulong FUN_10ad41a60(long param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = *(long **)(*(long *)(param_1 + 8) + 0xa8);
  plVar1 = (long *)(*(long *)(param_1 + 8) + 0xb0);
  if (plVar7 == plVar1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      lVar5 = plVar7[5];
      if ((*(byte *)(lVar5 + 0x157) & 1) == 0) {
        if ((*(byte *)(lVar5 + 0x155) & 1) == 0) {
          uVar4 = *(ulong *)(*(long *)(lVar5 + 0x108) + 0x8c0);
          FUN_10a25cb84(uVar4);
        }
        else {
          uVar4 = 0;
        }
        uVar6 = uVar4 | uVar6;
      }
      plVar2 = (long *)plVar7[1];
      plVar8 = plVar7;
      if ((long *)plVar7[1] == (long *)0x0) {
        do {
          plVar7 = (long *)plVar8[2];
          bVar3 = (long *)*plVar7 != plVar8;
          plVar8 = plVar7;
        } while (bVar3);
      }
      else {
        do {
          plVar7 = plVar2;
          plVar2 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    } while (plVar7 != plVar1);
  }
  return uVar6;
}



/* Entry: 10ad41b9c; end: 10ad41be7;  */

void FUN_10ad41b9c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_28 = 0;
  uStack_30 = param_1;
  FUN_10ad41734();
  FUN_10ad41be8(&uStack_30);
  return;
}



/* Entry: 10ad41be8; end: 10ad41cdf;  */

long * FUN_10ad41be8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_40;
  long *plStack_38;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    *(undefined1 *)(param_1 + 1) = 1;
    lVar6 = *param_1;
    func_0x00010ad46118(*(long *)(lVar6 + 8) + 0x38);
    uStack_40 = 0;
    plStack_38 = (long *)0x0;
    func_0x00010ad458e8(*(long *)(lVar6 + 8) + 0x68,&uStack_40);
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
    uStack_40 = 0;
    plStack_38 = (long *)0x0;
    func_0x00010ad458e8(*(long *)(lVar6 + 8) + 0x78,&uStack_40);
    plVar4 = plStack_38;
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    FUN_10a30f97c();
    FUN_10a3103d8();
    FUN_10a3ca004();
    FUN_10a3ca7a4();
  }
  return param_1;
}



/* Entry: 10ad41ce0; end: 10ad41eef;  */

undefined8 FUN_10ad41ce0(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x348);
}



/* Entry: 10ad41ef0; end: 10ad41fb7;  */

/* WARNING: Removing unreachable block (ram,0x00010ad16cf8) */
/* WARNING: Removing unreachable block (ram,0x00010ad16cfc) */
/* WARNING: Removing unreachable block (ram,0x00010ad16d04) */
/* WARNING: Removing unreachable block (ram,0x00010ad16d0c) */
/* WARNING: Removing unreachable block (ram,0x00010ad16d10) */
/* WARNING: Removing unreachable block (ram,0x00010ad16ad4) */
/* WARNING: Removing unreachable block (ram,0x00010ad16ad8) */
/* WARNING: Removing unreachable block (ram,0x00010ad16ae0) */
/* WARNING: Removing unreachable block (ram,0x00010ad16ae8) */
/* WARNING: Removing unreachable block (ram,0x00010ad16af4) */
/* WARNING: Removing unreachable block (ram,0x00010ad16afc) */
/* WARNING: Removing unreachable block (ram,0x00010ad16b04) */
/* WARNING: Removing unreachable block (ram,0x00010ad16b08) */
/* WARNING: Removing unreachable block (ram,0x00010ad16c68) */
/* WARNING: Removing unreachable block (ram,0x00010ad16c6c) */
/* WARNING: Removing unreachable block (ram,0x00010ad16c74) */
/* WARNING: Removing unreachable block (ram,0x00010ad16c7c) */
/* WARNING: Removing unreachable block (ram,0x00010ad16c88) */
/* WARNING: Removing unreachable block (ram,0x00010ad16c90) */
/* WARNING: Removing unreachable block (ram,0x00010ad16c98) */
/* WARNING: Removing unreachable block (ram,0x00010ad16c9c) */
/* WARNING: Removing unreachable block (ram,0x00010ad16d30) */
/* WARNING: Removing unreachable block (ram,0x00010ad16d34) */
/* WARNING: Removing unreachable block (ram,0x00010ad16d3c) */
/* WARNING: Removing unreachable block (ram,0x00010ad16d44) */
/* WARNING: Removing unreachable block (ram,0x00010ad16d48) */

void FUN_10ad41ef0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long *plStack_90;
  long *plStack_88;
  code *pcStack_80;
  code *pcStack_78;
  long *plStack_70;
  long *plStack_68;
  
  lVar13 = *(long *)(param_1 + 8);
  plVar8 = *(long **)(lVar13 + 0x418);
  if ((plVar8 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar8 != (long *)0x0))
  {
    plVar9 = *(long **)(lVar13 + 0x410);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x80))(plVar9,param_2,param_3);
    }
    plVar9 = plVar8 + 1;
    do {
      lVar13 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  lVar13 = *(long *)(*(long *)(param_1 + 8) + 0x2e8);
  uVar4 = (undefined1)param_2;
  *(undefined1 *)(lVar13 + 0x30) = uVar4;
  __ZNSt3__15mutex4lockEv(lVar13 + 0x38);
  puVar12 = *(undefined8 **)(lVar13 + 0x18);
  if (puVar12 != *(undefined8 **)(lVar13 + 0x20)) {
    do {
      plVar8 = (long *)puVar12[1];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
LAB_10ad16b4c:
        if (*(undefined8 **)(lVar13 + 0x20) == puVar12) {
LAB_10ad16dd8:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10ad16ddc);
          (*pcVar5)();
        }
        puVar7 = puVar12 + 2;
        FUN_10ad16eb8(puVar7,*(undefined8 **)(lVar13 + 0x20),puVar12);
        for (puVar14 = *(undefined8 **)(lVar13 + 0x20); puVar14 != puVar7; puVar14 = puVar14 + -2) {
          if (puVar14[-1] != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        *(undefined8 **)(lVar13 + 0x20) = puVar7;
        if (plVar8 != (long *)0x0) {
          plVar9 = plVar8 + 1;
          do {
            lVar11 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
      }
      else {
        __ZNSt3__119__shared_weak_count4lockEv();
        if ((plVar8 == (long *)0x0) || (plVar9 = (long *)*puVar12, plVar9 == (long *)0x0))
        goto LAB_10ad16b4c;
        plVar6 = plVar9;
        (**(code **)(*plVar9 + 0xa8))();
        plVar16 = (long *)plVar6[2];
        plStack_88 = (long *)0x0;
        if (plVar16 == (long *)0x0) {
          plStack_90 = (long *)0xd0;
          __Znwm();
          plStack_90[2] = 0;
          plStack_90[1] = 0x200000006;
          *(undefined2 *)(plStack_90 + 3) = 4;
          plStack_90[5] = 0;
          plStack_90[4] = 0;
          plStack_90[7] = 0;
          plStack_90[6] = 0;
          plStack_90[9] = 0;
          plStack_90[8] = 0;
          plStack_90[0xb] = 0;
          plStack_90[10] = 0;
          plStack_90[0xd] = 0;
          plStack_90[0xc] = 0;
          plStack_90[0xf] = 0;
          plStack_90[0xe] = 0;
          plStack_90[0x10] = 0;
          plStack_90[0x11] = (long)(plStack_90 + 3);
          plStack_90[0x12] = 0;
          *(undefined2 *)(plStack_90 + 0x13) = 0;
          *plStack_90 = (long)&PTR_DAT_110c6e558;
          plVar15 = plStack_90 + 0x14;
          *plVar15 = (long)plVar9;
          plStack_90[0x15] = (long)plVar8;
          *(undefined1 *)(plStack_90 + 0x16) = uVar4;
          *(undefined1 *)(plStack_90 + 0x18) = 1;
          plStack_90[0x19] = 0;
          pcStack_80 = FUN_10ad16fc8;
          plStack_88 = plStack_90;
        }
        else {
          pcStack_78 = (code *)0x0;
          (**(code **)(*plVar16 + 0x28))(plVar16,0,&pcStack_78);
          if (pcStack_78 != (code *)0x0) {
            func_0x0001092af97c(&pcStack_78);
            goto LAB_10ad16dd8;
          }
          plStack_90 = (long *)0xd8;
          __Znwm();
          plStack_90[2] = 0;
          plStack_90[1] = 0x200000006;
          *(undefined2 *)(plStack_90 + 3) = 4;
          plStack_90[5] = 0;
          plStack_90[4] = 0;
          plStack_90[7] = 0;
          plStack_90[6] = 0;
          plStack_90[9] = 0;
          plStack_90[8] = 0;
          plStack_90[0xb] = 0;
          plStack_90[10] = 0;
          plStack_90[0xd] = 0;
          plStack_90[0xc] = 0;
          plStack_90[0xf] = 0;
          plStack_90[0xe] = 0;
          plStack_90[0x10] = 0;
          plStack_90[0x11] = (long)(plStack_90 + 3);
          plStack_90[0x12] = 0;
          *(undefined2 *)(plStack_90 + 0x13) = 0;
          *plStack_90 = (long)&PTR_FUN_110c6e520;
          plVar15 = plStack_90 + 0x14;
          *plVar15 = (long)plVar9;
          plStack_90[0x15] = (long)plVar8;
          *(undefined1 *)(plStack_90 + 0x16) = uVar4;
          *(undefined1 *)(plStack_90 + 0x18) = 1;
          plStack_90[0x19] = 0;
          plStack_90[0x1a] = (long)plVar16;
          if (plStack_88 != (long *)0x0) {
            func_0x0001092b4274(&plStack_88);
          }
          pcStack_80 = FUN_10ad16f98;
          plStack_88 = plStack_90;
          __ZNSt13exception_ptrD1Ev(&pcStack_78);
        }
        if (plVar15[5] != 0) {
          func_0x0001092b4274();
        }
        plVar15[5] = (long)plStack_88;
        plStack_88 = (long *)0x0;
        pcStack_78 = pcStack_80;
        plStack_70 = plVar15;
        plStack_68 = plVar6;
        (**(code **)*plVar6)(plVar6,&pcStack_78);
        if (plStack_88 != (long *)0x0) {
          func_0x0001092b4274(&plStack_88);
        }
        if (plStack_90 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_90 + 1);
          do {
            uVar10 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar10 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar10 & 0x1fffffffc) == 4) {
            do {
              uVar10 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar10 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar10 - 1 == 0) {
              (**(code **)(*plStack_90 + 8))(plStack_90);
            }
          }
        }
        puVar12 = puVar12 + 2;
      }
    } while (puVar12 != *(undefined8 **)(lVar13 + 0x20));
  }
  __ZNSt3__15mutex6unlockEv(lVar13 + 0x38);
  return;
}



/* Entry: 10ad41fb8; end: 10ad420ff;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10ad41fb8(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  undefined8 *puVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined8 *puVar11;
  long ******pppppplVar12;
  long *******ppppppplVar13;
  long *******ppppppplVar14;
  undefined1 *puVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  long ****pppplVar21;
  ulong uVar22;
  long *****ppppplVar23;
  int *piVar24;
  undefined1 *puVar25;
  long lVar26;
  long *plVar27;
  long ******pppppplVar28;
  long *******ppppppplVar29;
  undefined8 *puVar30;
  byte bVar31;
  long *plVar32;
  long *plVar33;
  ulong uVar34;
  undefined8 uVar35;
  long *****ppppplVar36;
  undefined8 uVar37;
  long *****ppppplVar38;
  long *****ppppplVar39;
  long *****ppppplVar40;
  long *****ppppplVar41;
  long *******appppppplStack_9d0 [2];
  long *******ppppppplStack_9c0;
  long ******pppppplStack_9b8;
  long *******ppppppplStack_9b0;
  long ******pppppplStack_9a8;
  long ******pppppplStack_9a0;
  long *plStack_998;
  undefined8 uStack_990;
  long *plStack_988;
  undefined1 auStack_980 [8];
  undefined8 uStack_978;
  undefined8 uStack_960;
  undefined8 uStack_958;
  long lStack_950;
  long lStack_940;
  long *plStack_938;
  long lStack_930;
  long *plStack_928;
  long *******ppppppplStack_920;
  long ******pppppplStack_918;
  long *******ppppppplStack_910;
  long ******pppppplStack_908;
  long lStack_900;
  long *plStack_8f8;
  long ******pppppplStack_8f0;
  long *****ppppplStack_8e8;
  long lStack_8e0;
  undefined1 uStack_8d8;
  undefined1 uStack_8d0;
  undefined7 uStack_8cf;
  long ******pppppplStack_8c8;
  long *******ppppppplStack_8c0;
  long ******pppppplStack_8b8;
  long alStack_8b0 [2];
  undefined8 *puStack_8a0;
  undefined8 auStack_898 [2];
  undefined1 uStack_888;
  byte bStack_880;
  undefined1 auStack_878 [600];
  byte bStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  byte bStack_601;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  long alStack_5d8 [118];
  undefined1 auStack_228 [144];
  long lStack_198;
  long *plStack_190;
  long lStack_188;
  long *plStack_180;
  long lStack_178;
  long *plStack_170;
  long lStack_168;
  long *plStack_160;
  undefined1 uStack_158;
  long *******ppppppplStack_150;
  long ******pppppplStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 auStack_a8 [6];
  undefined1 auStack_78 [8];
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a13299c(auStack_a8,&UNK_10f6a6d95);
  FUN_10a296138(auStack_78,*(undefined8 *)(param_2 + 0xf8),&UNK_10f6a6da4,0x16);
  plVar17 = (long *)(ulong)*(byte *)(*(long *)(param_1 + 8) + 0x10d);
  FUN_10a5aae4c(param_2);
  FUN_10a044790(auStack_78);
  (*(code *)*apuStack_70[0])(apuStack_70);
  puVar11 = auStack_a8;
  FUN_10a144868();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_3 != 0) {
    FUN_10a044790(auStack_78);
    (*(code *)*apuStack_70[0])(apuStack_70);
    FUN_10a144868(auStack_a8);
    ___cxa_begin_catch(puVar11);
    FUN_10ad40968(auStack_78,*(long *)(param_2 + 0xf8) + 0x208);
    ___cxa_rethrow();
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad420dc);
    (*pcVar7)();
  }
  __Unwind_Resume(puVar11);
  func_0x000104bd46a0();
  lVar26 = plVar17[0x4b];
  lStack_198 = *plVar17;
  plStack_190 = (long *)plVar17[1];
  if (plStack_190 != (long *)0x0) {
    plVar27 = plStack_190 + 1;
    do {
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar10) {
        *plVar27 = *plVar27 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plStack_170 = (long *)plVar17[3];
  lStack_178 = plVar17[2];
  if (plVar17[3] != 0) {
    plVar27 = (long *)(plVar17[3] + 8);
    do {
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar10) {
        *plVar27 = *plVar27 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plStack_160 = (long *)plVar17[5];
  lStack_168 = plVar17[4];
  if (plVar17[5] != 0) {
    plVar27 = (long *)(plVar17[5] + 8);
    do {
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar10) {
        *plVar27 = *plVar27 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uStack_158 = (undefined1)plVar17[6];
  if (plStack_190 != (long *)0x0) {
    plVar27 = plStack_190 + 1;
    do {
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar10) {
        *plVar27 = *plVar27 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar18 = 0;
  lStack_188 = lStack_198;
  plStack_180 = plStack_190;
  do {
    *(undefined8 *)((long)alStack_5d8 + lVar18) = 0;
    lVar18 = lVar18 + 0x88;
  } while (lVar18 != 0x440);
  uStack_5e8 = 0;
  uStack_5f0 = 0;
  uStack_5f8 = 0;
  uStack_600 = 0;
  bVar9 = *(long *)(*(long *)(param_3 + 8) + 0xb8) == 0;
  bVar10 = !bVar9;
  FUN_10a13299c(auStack_878,&UNK_10f6a6dce);
  plVar32 = *(long **)(*(long *)(param_3 + 8) + 0xa8);
  plVar27 = (long *)(*(long *)(param_3 + 8) + 0xb0);
  if (plVar32 == plVar27) {
    uVar34 = 0;
  }
  else {
    uVar34 = 0;
    do {
      lVar18 = plVar32[5];
      if ((*(byte *)(lVar18 + 0x157) & 1) == 0) {
        lVar16 = lVar18;
        if (1 < *(byte *)(lVar18 + 0x1a8) - 3) {
          FUN_10a5acbc4();
          lVar16 = plVar32[5];
          if ((int)lVar18 != 0) {
            FUN_10ad41fb8(param_3,lVar16,plVar17[10]);
            lVar16 = plVar32[5];
          }
        }
        if (*(byte *)(lVar16 + 0x1a8) - 3 < 2) {
          iVar4 = *(int *)((long)plVar32 + 0x24);
          bVar9 = true;
          bVar8 = false;
          if (iVar4 != -1) {
            bVar8 = SBORROW4((int)uVar34,1);
            bVar9 = (int)uVar34 + -1 < 0;
          }
          if (bVar9 == bVar8) {
            lVar18 = 0;
            piVar24 = (int *)&uStack_600;
            do {
              if (lVar18 == 0x440) goto LAB_10ad432b4;
              if (*piVar24 == iVar4) goto LAB_10ad422dc;
              lVar18 = lVar18 + 0x88;
              piVar24 = piVar24 + 1;
            } while (uVar34 * 0x88 - lVar18 != 0);
          }
          if (7 < uVar34) goto LAB_10ad432b4;
          *(int *)((long)&uStack_600 + uVar34 * 4) = iVar4;
          lVar18 = uVar34 * 0x88;
          uVar34 = uVar34 + 1;
LAB_10ad422dc:
          plVar19 = (long *)((long)alStack_5d8 + lVar18);
          lVar18 = *plVar19;
          plVar19[lVar18 * 2 + 1] = lVar16;
          lVar16 = plVar32[6];
          plVar19[lVar18 * 2 + 2] = lVar16;
          if (lVar16 != 0) {
            plVar33 = (long *)(lVar16 + 8);
            do {
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar33,0x10);
              if (bVar9) {
                *plVar33 = *plVar33 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            lVar18 = *plVar19;
          }
          *plVar19 = lVar18 + 1;
          bVar10 = (bool)(bVar10 & *(byte *)(*(long *)(*(long *)(plVar32[5] + 0x108) + 0x910) + 0x25
                                            ));
        }
      }
      plVar19 = (long *)plVar32[1];
      plVar33 = plVar32;
      if ((long *)plVar32[1] == (long *)0x0) {
        do {
          plVar32 = (long *)plVar33[2];
          bVar9 = (long *)*plVar32 != plVar33;
          plVar33 = plVar32;
        } while (bVar9);
      }
      else {
        do {
          plVar32 = plVar19;
          plVar19 = (long *)*plVar32;
        } while ((long *)*plVar32 != (long *)0x0);
      }
    } while (plVar32 != plVar27);
    bVar9 = (bool)(bVar10 ^ 1);
  }
  *(bool *)(plVar17 + 9) = bVar9;
  FUN_10a144868(auStack_878);
  if (uVar34 == 0) {
    FUN_10ad4365c(puVar11,&lStack_198);
    goto LAB_10ad4339c;
  }
  func_0x000107c2b054(&uStack_618,&DAT_10f387e68);
  lVar18 = *(long *)(param_3 + 8);
  if (*(long **)(lVar18 + 0x48) != (long *)0x0) {
    plVar27 = *(long **)(lVar18 + 0x48);
    do {
      while( true ) {
        lVar16 = lVar18 + 0xc0;
        FUN_10ad47d78(lVar16,plVar27 + 2);
        if (lVar18 + 200 == lVar16) break;
        plVar27 = (long *)*plVar27;
        if (plVar27 == (long *)0x0) goto LAB_10ad423d4;
      }
      plVar32 = (long *)(lVar18 + 0x38);
      func_0x00010ad4594c(plVar32,plVar27);
      plVar27 = plVar32;
    } while (plVar32 != (long *)0x0);
LAB_10ad423d4:
    lVar18 = *(long *)(param_3 + 8);
  }
  *(undefined1 *)(lVar18 + 0x60) = 1;
  auStack_878[0] = 0;
  bStack_620 = 0;
  uStack_8d0 = 0;
  bStack_880 = 0;
  FUN_10ad4365c(&ppppppplStack_920,&lStack_188);
  if (0 < (int)uVar34) {
    uVar22 = 0;
    do {
      if (uVar22 == 8) {
LAB_10ad432b4:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad432b8);
        (*pcVar7)();
      }
      plVar27 = alStack_5d8 + uVar22 * 0x11 + 1;
      lStack_930 = *plVar27;
      plStack_928 = (long *)alStack_5d8[uVar22 * 0x11 + 2];
      if (plStack_928 != (long *)0x0) {
        plVar32 = plStack_928 + 1;
        do {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar10) {
            *plVar32 = *plVar32 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uVar1 = uVar22 + 1;
      if (uVar1 == uVar34) {
        lStack_940 = 0;
        plStack_938 = (long *)0x0;
      }
      else {
        if (uVar22 == 7) goto LAB_10ad432b4;
        plStack_938 = (long *)alStack_5d8[uVar1 * 0x11 + 2];
        lStack_940 = alStack_5d8[uVar1 * 0x11 + 1];
        if (alStack_5d8[uVar1 * 0x11 + 2] != 0) {
          plVar32 = (long *)(alStack_5d8[uVar1 * 0x11 + 2] + 8);
          do {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar32,0x10);
            if (bVar10) {
              *plVar32 = *plVar32 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      if ((*(byte *)(lStack_930 + 0x1a4) & 1) == 0) {
        bVar31 = 0;
      }
      else {
        bVar31 = *(byte *)(lStack_930 + 0x180);
      }
      if (((lStack_940 != 0) && ((bStack_620 & 1) == 0)) &&
         (*(int *)(lStack_930 + 0x158) == *(int *)(lStack_940 + 0x158))) {
        FUN_10ad4519c(auStack_878,plVar17);
        bStack_620 = 1;
      }
      if (((bVar31 | bStack_880) & 1) == 0) {
        pppppplStack_9a8 = (long ******)plVar17[1];
        ppppppplStack_9b0 = (long *******)*plVar17;
        if (plVar17[1] != 0) {
          plVar32 = (long *)(plVar17[1] + 8);
          do {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar32,0x10);
            if (bVar10) {
              *plVar32 = *plVar32 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plStack_998 = (long *)plVar17[3];
        pppppplStack_9a0 = (long ******)plVar17[2];
        if (plVar17[3] != 0) {
          plVar32 = (long *)(plVar17[3] + 8);
          do {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar32,0x10);
            if (bVar10) {
              *plVar32 = *plVar32 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plStack_988 = (long *)plVar17[5];
        uStack_990 = plVar17[4];
        if (plVar17[5] != 0) {
          plVar32 = (long *)(plVar17[5] + 8);
          do {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar32,0x10);
            if (bVar10) {
              *plVar32 = *plVar32 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        auStack_980[0] = (undefined1)plVar17[6];
        FUN_10ad4374c(&uStack_990);
        FUN_10ad4374c(&ppppppplStack_9b0);
        plVar32 = plStack_998;
        if (plVar17[2] == *plVar17) {
          pppppplStack_9a0 = (long ******)0x0;
          plStack_998 = (long *)0x0;
          if (plVar32 != (long *)0x0) {
            plVar19 = plVar32 + 1;
            do {
              lVar18 = *plVar19;
              cVar5 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar10) {
                *plVar19 = lVar18 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar18 == 0) {
              (**(code **)(*plVar32 + 0x10))(plVar32);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
            }
          }
        }
        else {
          FUN_10ad4374c(&pppppplStack_9a0);
        }
        pppppplStack_148 = (long ******)0x0;
        uStack_140 = 0;
        ppppppplStack_150 = &pppppplStack_148;
        func_0x00010ad44274(&uStack_8d0);
        FUN_10a5bd168(&uStack_8d0,&ppppppplStack_9b0,&pppppplStack_9a0,&uStack_990,
                      &ppppppplStack_150,1);
        bStack_880 = 1;
        FUN_10a22ba60(&ppppppplStack_150,pppppplStack_148);
        plVar32 = plStack_988;
        if (plStack_988 != (long *)0x0) {
          plVar19 = plStack_988 + 1;
          do {
            lVar18 = *plVar19;
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar10) {
              *plVar19 = lVar18 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plStack_988 + 0x10))(plStack_988);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
          }
        }
        plVar32 = plStack_998;
        if (plStack_998 != (long *)0x0) {
          plVar19 = plStack_998 + 1;
          do {
            lVar18 = *plVar19;
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar10) {
              *plVar19 = lVar18 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plStack_998 + 0x10))(plStack_998);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
          }
        }
        pppppplVar28 = pppppplStack_9a8;
        if (pppppplStack_9a8 != (long ******)0x0) {
          pppppplVar12 = pppppplStack_9a8 + 1;
          do {
            ppppplVar23 = *pppppplVar12;
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(pppppplVar12,0x10);
            if (bVar10) {
              *pppppplVar12 = (long *****)((long)ppppplVar23 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppppplVar23 == (long *****)0x0) {
            (*(code *)(*pppppplStack_9a8)[2])(pppppplStack_9a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar28);
          }
        }
      }
      if ((char)bStack_601 < '\0') {
        func_0x000107c3192c(&uStack_960,uStack_618,uStack_610);
      }
      else {
        uStack_958 = uStack_610;
        uStack_960 = uStack_618;
        lStack_950 = (ulong)bStack_601 << 0x38;
      }
      lVar18 = alStack_5d8[uVar22 * 0x11];
      if (lVar18 != 0) {
        do {
          if ((bStack_620 == 1) && (*plVar27 == lStack_930)) {
            FUN_10ad43894(&ppppppplStack_9b0,*(undefined8 *)(param_3 + 8),auStack_878,&uStack_960,
                          lVar26,plVar27);
            FUN_10a22438c(&ppppppplStack_920,&ppppppplStack_9b0);
            FUN_10a22ba60(auStack_980,uStack_978);
            plVar32 = plStack_988;
            if (plStack_988 != (long *)0x0) {
              plVar19 = plStack_988 + 1;
              do {
                lVar16 = *plVar19;
                cVar5 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar10) {
                  *plVar19 = lVar16 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar16 == 0) {
                (**(code **)(*plStack_988 + 0x10))(plStack_988);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
              }
            }
            plVar32 = plStack_998;
            if (plStack_998 != (long *)0x0) {
              plVar19 = plStack_998 + 1;
              do {
                lVar16 = *plVar19;
                cVar5 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar10) {
                  *plVar19 = lVar16 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar16 == 0) {
                (**(code **)(*plStack_998 + 0x10))(plStack_998);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
              }
            }
            if (pppppplStack_9a8 != (long ******)0x0) {
              pppppplVar28 = pppppplStack_9a8 + 1;
              do {
                ppppplVar23 = *pppppplVar28;
                cVar5 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
                if (bVar10) {
                  *pppppplVar28 = (long *****)((long)ppppplVar23 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
LAB_10ad427e0:
              pppppplVar28 = pppppplStack_9a8;
              if (ppppplVar23 == (long *****)0x0) {
                (*(code *)(*pppppplStack_9a8)[2])(pppppplStack_9a8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar28);
              }
            }
          }
          else {
            FUN_10ad43894(&ppppppplStack_9b0,*(undefined8 *)(param_3 + 8),plVar17,&uStack_960,lVar26
                          ,plVar27);
            if ((*(byte *)(*plVar27 + 0x155) & 1) == 0) {
              FUN_10a22438c(&ppppppplStack_920,&ppppppplStack_9b0);
              FUN_10ad43fdc(plVar17,&ppppppplStack_920);
            }
            FUN_10a22ba60(auStack_980,uStack_978);
            plVar32 = plStack_988;
            if (plStack_988 != (long *)0x0) {
              plVar19 = plStack_988 + 1;
              do {
                lVar16 = *plVar19;
                cVar5 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar10) {
                  *plVar19 = lVar16 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar16 == 0) {
                (**(code **)(*plStack_988 + 0x10))(plStack_988);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
              }
            }
            plVar32 = plStack_998;
            if (plStack_998 != (long *)0x0) {
              plVar19 = plStack_998 + 1;
              do {
                lVar16 = *plVar19;
                cVar5 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar10) {
                  *plVar19 = lVar16 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar16 == 0) {
                (**(code **)(*plStack_998 + 0x10))(plStack_998);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
              }
            }
            if (pppppplStack_9a8 != (long ******)0x0) {
              pppppplVar28 = pppppplStack_9a8 + 1;
              do {
                ppppplVar23 = *pppppplVar28;
                cVar5 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
                if (bVar10) {
                  *pppppplVar28 = (long *****)((long)ppppplVar23 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              goto LAB_10ad427e0;
            }
          }
          lVar16 = *(long *)(*plVar27 + 0xf8);
          uVar2 = *(ulong *)(lVar16 + 0x210);
          if (-1 < (char)*(byte *)(lVar16 + 0x21f)) {
            uVar2 = (ulong)*(byte *)(lVar16 + 0x21f);
          }
          FUN_10a003c90(&ppppppplStack_9b0,uVar2 + 1,&ppppppplStack_150);
          ppppppplVar29 = ppppppplStack_9b0;
          if (-1 < (long)pppppplStack_9a0) {
            ppppppplVar29 = (long *******)&ppppppplStack_9b0;
          }
          if (uVar2 != 0) {
            lVar3 = *(long *)(lVar16 + 0x208);
            if (-1 < *(char *)(lVar16 + 0x21f)) {
              lVar3 = lVar16 + 0x208;
            }
            _memmove(ppppppplVar29,lVar3,uVar2);
          }
          *(undefined2 *)((long)ppppppplVar29 + uVar2) = 0x7c;
          pppppplVar28 = pppppplStack_9a8;
          ppppppplVar29 = ppppppplStack_9b0;
          if (-1 < (long)pppppplStack_9a0) {
            pppppplVar28 = (long ******)((ulong)pppppplStack_9a0 >> 0x38);
            ppppppplVar29 = (long *******)&ppppppplStack_9b0;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&uStack_960,ppppppplVar29,pppppplVar28);
          if ((long)pppppplStack_9a0 < 0) {
            __ZdlPv(ppppppplStack_9b0);
          }
          plVar27 = plVar27 + 2;
        } while (plVar27 != alStack_5d8 + uVar22 * 0x11 + lVar18 * 2 + 1);
      }
      pppppplVar28 = pppppplStack_8b8;
      if ((bVar31 & 1) == 0) {
        if (ppppppplStack_910 == (long *******)0x0) {
          if ((bStack_880 & 1) == 0) goto LAB_10ad432b4;
          if (ppppppplStack_8c0 != (long *******)0x0) {
            ppppppplStack_9c0 = ppppppplStack_8c0;
            pppppplStack_9b8 = pppppplStack_8b8;
            if (pppppplStack_8b8 != (long ******)0x0) {
              pppppplVar12 = pppppplStack_8b8 + 1;
              do {
                cVar5 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(pppppplVar12,0x10);
                if (bVar10) {
                  *pppppplVar12 = (long *****)((long)*pppppplVar12 + 1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            if (ppppppplStack_920 != (long *******)0x0) {
              pppppplStack_9a8 = *(long *******)(lStack_930 + 0x168);
              ppppppplStack_9b0 = *(long ********)(lStack_930 + 0x160);
              plStack_998 = *(long **)(lStack_930 + 0x178);
              pppppplStack_9a0 = *(long *******)(lStack_930 + 0x170);
              uStack_990 = CONCAT44(uStack_990._4_4_,*(undefined4 *)(lStack_930 + 0x180));
              pppppplStack_148 = *(long *******)(lStack_930 + 0x18c);
              ppppppplStack_150 = *(long ********)(lStack_930 + 0x184);
              uStack_138 = *(undefined8 *)(lStack_930 + 0x19c);
              uStack_140 = *(undefined8 *)(lStack_930 + 0x194);
              uStack_130 = *(undefined4 *)(lStack_930 + 0x1a4);
              FUN_10ad44770(param_3,&ppppppplStack_920,&ppppppplStack_9b0,&ppppppplStack_9c0,
                            &ppppppplStack_150);
            }
            if (pppppplVar28 != (long ******)0x0) {
              pppppplVar12 = pppppplVar28 + 1;
              do {
                ppppplVar23 = *pppppplVar12;
                cVar5 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(pppppplVar12,0x10);
                if (bVar10) {
                  *pppppplVar12 = (long *****)((long)ppppplVar23 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              goto LAB_10ad42bb4;
            }
          }
        }
        else {
          if ((bStack_880 & 1) == 0) goto LAB_10ad432b4;
          ppppppplVar29 = ppppppplStack_910;
          pppppplVar28 = pppppplStack_908;
          if (ppppppplStack_8c0 == (long *******)0x0) {
            FUN_10a0996a4(&ppppppplStack_9b0,&uStack_8d0);
            func_0x00010a3df030(&ppppppplStack_8c0,&ppppppplStack_9b0);
            pppppplVar28 = pppppplStack_9a8;
            if (pppppplStack_9a8 != (long ******)0x0) {
              pppppplVar12 = pppppplStack_9a8 + 1;
              do {
                ppppplVar23 = *pppppplVar12;
                cVar5 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(pppppplVar12,0x10);
                if (bVar10) {
                  *pppppplVar12 = (long *****)((long)ppppplVar23 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (ppppplVar23 == (long *****)0x0) {
                (*(code *)(*pppppplStack_9a8)[2])(pppppplStack_9a8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar28);
              }
            }
            ppppppplVar29 = ppppppplStack_910;
            pppppplVar28 = pppppplStack_908;
            if (ppppppplStack_910 == (long *******)0x0) {
              ppppppplVar29 = ppppppplStack_920;
              pppppplVar28 = pppppplStack_918;
            }
          }
          pppppplStack_9b8 = pppppplVar28;
          ppppppplStack_9c0 = ppppppplVar29;
          if (pppppplStack_9b8 != (long ******)0x0) {
            pppppplVar28 = pppppplStack_9b8 + 1;
            do {
              cVar5 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
              if (bVar10) {
                *pppppplVar28 = (long *****)((long)*pppppplVar28 + 1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if ((bStack_880 & 1) == 0) goto LAB_10ad432b4;
          appppppplStack_9d0[0] = ppppppplStack_8c0;
          pppppplVar28 = pppppplStack_8b8;
          if (ppppppplStack_8c0 == (long *******)0x0) {
            appppppplStack_9d0[0] = (long *******)CONCAT71(uStack_8cf,uStack_8d0);
            pppppplVar28 = pppppplStack_8c8;
          }
          if (pppppplVar28 != (long ******)0x0) {
            pppppplVar12 = pppppplVar28 + 1;
            do {
              cVar5 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(pppppplVar12,0x10);
              if (bVar10) {
                *pppppplVar12 = (long *****)((long)*pppppplVar12 + 1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if (ppppppplStack_9c0 != (long *******)0x0) {
            pppppplStack_9a8 = *(long *******)(lStack_930 + 0x168);
            ppppppplStack_9b0 = *(long ********)(lStack_930 + 0x160);
            plStack_998 = *(long **)(lStack_930 + 0x178);
            pppppplStack_9a0 = *(long *******)(lStack_930 + 0x170);
            uStack_990._4_4_ = (undefined4)((ulong)uStack_990 >> 0x20);
            uStack_990 = CONCAT44(uStack_990._4_4_,*(undefined4 *)(lStack_930 + 0x180));
            pppppplStack_148 = *(long *******)(lStack_930 + 0x18c);
            ppppppplStack_150 = *(long ********)(lStack_930 + 0x184);
            uStack_138 = *(undefined8 *)(lStack_930 + 0x19c);
            uStack_140 = *(undefined8 *)(lStack_930 + 0x194);
            uStack_130 = *(undefined4 *)(lStack_930 + 0x1a4);
            FUN_10ad44770(param_3,&ppppppplStack_9c0,&ppppppplStack_9b0,appppppplStack_9d0,
                          &ppppppplStack_150);
          }
          if (pppppplVar28 != (long ******)0x0) {
            pppppplVar12 = pppppplVar28 + 1;
            do {
              ppppplVar23 = *pppppplVar12;
              cVar5 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(pppppplVar12,0x10);
              if (bVar10) {
                *pppppplVar12 = (long *****)((long)ppppplVar23 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (ppppplVar23 == (long *****)0x0) {
              (*(code *)(*pppppplVar28)[2])(pppppplVar28);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar28);
            }
          }
          if (pppppplStack_9b8 != (long ******)0x0) {
            pppppplVar12 = pppppplStack_9b8 + 1;
            do {
              ppppplVar23 = *pppppplVar12;
              cVar5 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(pppppplVar12,0x10);
              if (bVar10) {
                *pppppplVar12 = (long *****)((long)ppppplVar23 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
              pppppplVar28 = pppppplStack_9b8;
            } while (cVar5 != '\0');
LAB_10ad42bb4:
            if (ppppplVar23 == (long *****)0x0) {
              (*(code *)(*pppppplVar28)[2])(pppppplVar28);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar28);
            }
          }
        }
        if ((bStack_880 & 1) == 0) goto LAB_10ad432b4;
        if (ppppppplStack_920 != (long *******)0x0) {
          pppppplStack_9a8 = *(long *******)(lStack_930 + 0x168);
          ppppppplStack_9b0 = *(long ********)(lStack_930 + 0x160);
          plStack_998 = *(long **)(lStack_930 + 0x178);
          pppppplStack_9a0 = *(long *******)(lStack_930 + 0x170);
          uStack_990 = CONCAT44(uStack_990._4_4_,*(undefined4 *)(lStack_930 + 0x180));
          pppppplStack_148 = *(long *******)(lStack_930 + 0x18c);
          ppppppplStack_150 = *(long ********)(lStack_930 + 0x184);
          uStack_138 = *(undefined8 *)(lStack_930 + 0x19c);
          uStack_140 = *(undefined8 *)(lStack_930 + 0x194);
          uStack_130 = *(undefined4 *)(lStack_930 + 0x1a4);
          FUN_10ad44770(param_3,&ppppppplStack_920,&ppppppplStack_9b0,&uStack_8d0,&ppppppplStack_150
                       );
        }
        if (lStack_900 != 0) {
          if ((bStack_880 & 1) == 0) goto LAB_10ad432b4;
          if (alStack_8b0[0] == 0) {
            func_0x00010a3df030(alStack_8b0,&lStack_900);
          }
          else {
            pppppplStack_9a8 = *(long *******)(lStack_930 + 0x168);
            ppppppplStack_9b0 = *(long ********)(lStack_930 + 0x160);
            plStack_998 = *(long **)(lStack_930 + 0x178);
            pppppplStack_9a0 = *(long *******)(lStack_930 + 0x170);
            uStack_990 = CONCAT44(uStack_990._4_4_,*(undefined4 *)(lStack_930 + 0x180));
            pppppplStack_148 = *(long *******)(lStack_930 + 0x18c);
            ppppppplStack_150 = *(long ********)(lStack_930 + 0x184);
            uStack_138 = *(undefined8 *)(lStack_930 + 0x19c);
            uStack_140 = *(undefined8 *)(lStack_930 + 0x194);
            uStack_130 = *(undefined4 *)(lStack_930 + 0x1a4);
            FUN_10ad44770(param_3,&lStack_900,&ppppppplStack_9b0,alStack_8b0,&ppppppplStack_150);
          }
        }
        if ((bStack_880 & 1) == 0) goto LAB_10ad432b4;
        uStack_888 = uStack_8d8;
        func_0x00010a3df030(&ppppppplStack_920,&uStack_8d0);
        func_0x00010a3df030(&ppppppplStack_910,&ppppppplStack_8c0);
        func_0x00010a3df030(&lStack_900,alStack_8b0);
        puVar20 = puStack_8a0;
        bVar10 = lStack_8e0 != 0;
        lStack_8e0 = 0;
        if (bVar10) {
          ppppplStack_8e8[2] = (long ****)0x0;
          ppppplStack_8e8 = (long *****)0x0;
          lStack_8e0 = 0;
          pppppplVar28 = pppppplStack_8f0;
          if ((long ******)pppppplStack_8f0[1] != (long ******)0x0) {
            pppppplVar28 = (long ******)pppppplStack_8f0[1];
          }
          ppppppplStack_9b0 = &pppppplStack_8f0;
          pppppplStack_9a8 = pppppplVar28;
          pppppplStack_9a0 = pppppplVar28;
          pppppplStack_8f0 = &ppppplStack_8e8;
          if (pppppplVar28 != (long ******)0x0) {
            pppppplVar12 = pppppplVar28;
            func_0x00010ad45dbc();
            pppppplStack_9a8 = pppppplVar12;
            do {
              if (puVar20 == auStack_898) break;
              ppppplVar23 = (long *****)puVar20[4];
              pppppplVar28[5] = (long *****)puVar20[5];
              pppppplVar28[4] = ppppplVar23;
              ppppplVar39 = (long *****)puVar20[0xd];
              ppppplVar38 = (long *****)puVar20[0xc];
              ppppplVar36 = (long *****)puVar20[0xf];
              ppppplVar23 = (long *****)puVar20[0xe];
              ppppplVar41 = (long *****)puVar20[0xb];
              ppppplVar40 = (long *****)puVar20[10];
              *(undefined4 *)(pppppplVar28 + 0x10) = *(undefined4 *)(puVar20 + 0x10);
              pppppplVar28[0xd] = ppppplVar39;
              pppppplVar28[0xc] = ppppplVar38;
              pppppplVar28[0xf] = ppppplVar36;
              pppppplVar28[0xe] = ppppplVar23;
              pppppplVar28[0xb] = ppppplVar41;
              pppppplVar28[10] = ppppplVar40;
              ppppplVar23 = (long *****)puVar20[6];
              ppppplVar38 = (long *****)puVar20[9];
              ppppplVar36 = (long *****)puVar20[8];
              pppppplVar28[7] = (long *****)puVar20[7];
              pppppplVar28[6] = ppppplVar23;
              pppppplVar28[9] = ppppplVar38;
              pppppplVar28[8] = ppppplVar36;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (pppppplVar28 + 0x11,puVar20 + 0x11);
              ppppplVar23 = (long *****)puVar20[0x14];
              *(undefined4 *)(pppppplVar28 + 0x15) = *(undefined4 *)(puVar20 + 0x15);
              pppppplVar28[0x14] = ppppplVar23;
              cVar5 = *(char *)(pppppplVar28 + 0x1c);
              if (cVar5 == *(char *)(puVar20 + 0x1c)) {
                if (cVar5 != '\0') {
                  func_0x00010a3df030(pppppplVar28 + 0x16,puVar20 + 0x16);
                  uVar37 = *(undefined8 *)((long)puVar20 + 0xd1);
                  uVar35 = *(undefined8 *)((long)puVar20 + 0xc9);
                  ppppplVar23 = (long *****)puVar20[0x18];
                  pppppplVar28[0x19] = (long *****)puVar20[0x19];
                  pppppplVar28[0x18] = ppppplVar23;
                  *(undefined8 *)((long)pppppplVar28 + 0xd1) = uVar37;
                  *(undefined8 *)((long)pppppplVar28 + 0xc9) = uVar35;
                }
              }
              else if (cVar5 == '\0') {
                lVar18 = puVar20[0x17];
                ppppplVar23 = (long *****)puVar20[0x16];
                pppppplVar28[0x17] = (long *****)puVar20[0x17];
                pppppplVar28[0x16] = ppppplVar23;
                if (lVar18 != 0) {
                  plVar27 = (long *)(lVar18 + 8);
                  do {
                    cVar5 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                    if (bVar10) {
                      *plVar27 = *plVar27 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                }
                ppppplVar36 = (long *****)puVar20[0x19];
                ppppplVar23 = (long *****)puVar20[0x18];
                uVar35 = *(undefined8 *)((long)puVar20 + 0xc9);
                *(undefined8 *)((long)pppppplVar28 + 0xd1) = *(undefined8 *)((long)puVar20 + 0xd1);
                *(undefined8 *)((long)pppppplVar28 + 0xc9) = uVar35;
                pppppplVar28[0x19] = ppppplVar36;
                pppppplVar28[0x18] = ppppplVar23;
                *(undefined1 *)(pppppplVar28 + 0x1c) = 1;
              }
              else {
                func_0x00010a09db64(pppppplVar28 + 0x16);
                *(undefined1 *)(pppppplVar28 + 0x1c) = 0;
              }
              pppppplVar28 = pppppplStack_9a0;
              ppppppplVar13 = &pppppplStack_8f0;
              func_0x00010ad45d54(&pppppplStack_8f0,&ppppppplStack_150,pppppplStack_9a0[4],
                                  pppppplStack_9a0[5]);
              ppppppplVar29 = ppppppplStack_150;
              *pppppplVar28 = (long *****)0x0;
              pppppplVar28[1] = (long *****)0x0;
              pppppplVar28[2] = (long *****)ppppppplVar29;
              *ppppppplVar13 = pppppplVar28;
              if ((long ******)*pppppplStack_8f0 != (long ******)0x0) {
                pppppplVar28 = *ppppppplVar13;
                pppppplStack_8f0 = (long ******)*pppppplStack_8f0;
              }
              func_0x000107c2b058(ppppplStack_8e8,pppppplVar28);
              pppppplVar28 = pppppplStack_9a8;
              lStack_8e0 = lStack_8e0 + 1;
              pppppplStack_9a0 = pppppplStack_9a8;
              if (pppppplStack_9a8 != (long ******)0x0) {
                func_0x00010ad45dbc();
              }
              puVar6 = (undefined8 *)puVar20[1];
              puVar30 = puVar20;
              if ((undefined8 *)puVar20[1] == (undefined8 *)0x0) {
                do {
                  puVar20 = (undefined8 *)puVar30[2];
                  bVar10 = (undefined8 *)*puVar20 != puVar30;
                  puVar30 = puVar20;
                } while (bVar10);
              }
              else {
                do {
                  puVar20 = puVar6;
                  puVar6 = (undefined8 *)*puVar20;
                } while ((undefined8 *)*puVar20 != (undefined8 *)0x0);
              }
            } while (pppppplVar28 != (long ******)0x0);
          }
          FUN_10ad45e10(&ppppppplStack_9b0);
        }
        while (puVar20 != auStack_898) {
          FUN_10a5bd520(&ppppppplStack_9b0,&pppppplStack_8f0,puVar20 + 4);
          ppppppplVar29 = ppppppplStack_9b0;
          ppppppplVar14 = &pppppplStack_8f0;
          func_0x00010ad45d54(&pppppplStack_8f0,&ppppppplStack_150,ppppppplStack_9b0[4],
                              ppppppplStack_9b0[5]);
          ppppppplVar13 = ppppppplStack_150;
          *ppppppplVar29 = (long ******)0x0;
          ppppppplVar29[1] = (long ******)0x0;
          ppppppplVar29[2] = (long ******)ppppppplVar13;
          *ppppppplVar14 = (long ******)ppppppplVar29;
          if ((long ******)*pppppplStack_8f0 != (long ******)0x0) {
            ppppppplVar29 = (long *******)*ppppppplVar14;
            pppppplStack_8f0 = (long ******)*pppppplStack_8f0;
          }
          func_0x000107c2b058(ppppplStack_8e8,ppppppplVar29);
          lStack_8e0 = lStack_8e0 + 1;
          puVar6 = (undefined8 *)puVar20[1];
          puVar30 = puVar20;
          if ((undefined8 *)puVar20[1] == (undefined8 *)0x0) {
            do {
              puVar20 = (undefined8 *)puVar30[2];
              bVar10 = (undefined8 *)*puVar20 != puVar30;
              puVar30 = puVar20;
            } while (bVar10);
          }
          else {
            do {
              puVar20 = puVar6;
              puVar6 = (undefined8 *)*puVar20;
            } while ((undefined8 *)*puVar20 != (undefined8 *)0x0);
          }
        }
        uStack_8d8 = uStack_888;
        FUN_10ad43fdc(plVar17,&ppppppplStack_920);
      }
      if ((lStack_940 != 0) && (*(int *)(lStack_930 + 0x158) != *(int *)(lStack_940 + 0x158))) {
        func_0x00010ad441f0(auStack_878);
        if ((bVar31 & 1) == 0) {
          *(undefined1 *)(*(long *)(param_3 + 8) + 0x60) = 0;
          func_0x00010ad44274(&uStack_8d0);
        }
        else {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&uStack_618,&uStack_960);
        }
      }
      if (lStack_950 < 0) {
        __ZdlPv(uStack_960);
      }
      plVar27 = plStack_938;
      if (plStack_938 != (long *)0x0) {
        plVar32 = plStack_938 + 1;
        do {
          lVar18 = *plVar32;
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar10) {
            *plVar32 = lVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_938 + 0x10))(plStack_938);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
        }
      }
      plVar27 = plStack_928;
      if (plStack_928 != (long *)0x0) {
        plVar32 = plStack_928 + 1;
        do {
          lVar18 = *plVar32;
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar10) {
            *plVar32 = lVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_928 + 0x10))(plStack_928);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
        }
      }
      uVar22 = uVar1;
    } while (uVar1 != uVar34);
  }
  func_0x00010ad441f0(auStack_878);
  func_0x00010ad44274(&uStack_8d0);
  pppppplVar28 = pppppplStack_918;
  ppppppplVar29 = ppppppplStack_920;
  if ((lStack_900 == 0) || ((*(byte *)(plVar17 + 0x15) & 1) != 0)) {
    if (lStack_198 == 0) {
      ppppppplStack_920 = (long *******)0x0;
      pppppplStack_918 = (long ******)0x0;
      puVar11[1] = pppppplVar28;
      *puVar11 = ppppppplVar29;
      puVar11[3] = pppppplStack_908;
      puVar11[2] = ppppppplStack_910;
      ppppppplStack_910 = (long *******)0x0;
      pppppplStack_908 = (long ******)0x0;
      puVar11[4] = lStack_900;
      puVar11[5] = plStack_8f8;
      lStack_900 = 0;
      plStack_8f8 = (long *)0x0;
      puVar11[6] = pppppplStack_8f0;
      pppplVar21 = (long ****)(puVar11 + 7);
      *pppplVar21 = (long ***)ppppplStack_8e8;
      puVar11[8] = lStack_8e0;
      if (lStack_8e0 == 0) {
        puVar11[6] = pppplVar21;
      }
      else {
        ppppplStack_8e8[2] = pppplVar21;
        pppppplStack_8f0 = &ppppplStack_8e8;
        ppppplStack_8e8 = (long *****)0x0;
        lStack_8e0 = 0;
      }
      *(undefined1 *)(puVar11 + 9) = uStack_8d8;
    }
    else {
      if (ppppppplStack_910 == (long *******)0x0) {
        ppppppplStack_9b0 = (long *******)0x0;
        pppppplStack_9a8 = (long ******)0x0;
      }
      else {
        ppppppplStack_9b0 = ppppppplStack_910;
        pppppplStack_9a8 = pppppplStack_908;
        if (pppppplStack_908 != (long ******)0x0) {
          pppppplVar28 = pppppplStack_908 + 1;
          do {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
            if (bVar10) {
              *pppppplVar28 = (long *****)((long)*pppppplVar28 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      FUN_10a5bd168(puVar11,&ppppppplStack_920,&ppppppplStack_9b0,&lStack_900,&pppppplStack_8f0,1);
      if (pppppplStack_9a8 != (long ******)0x0) {
        pppppplVar28 = pppppplStack_9a8 + 1;
        do {
          ppppplVar23 = *pppppplVar28;
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
          if (bVar10) {
            *pppppplVar28 = (long *****)((long)ppppplVar23 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        goto LAB_10ad43294;
      }
    }
  }
  else {
    pppppplStack_9a8 = pppppplStack_918;
    if (ppppppplStack_910 != (long *******)0x0) {
      pppppplStack_9a8 = pppppplStack_908;
    }
    if (pppppplStack_9a8 != (long ******)0x0) {
      pppppplVar28 = pppppplStack_9a8 + 1;
      do {
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
        if (bVar10) {
          *pppppplVar28 = (long *****)((long)*pppppplVar28 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    FUN_10ad442c4(&ppppppplStack_150,&ppppppplStack_9b0,&lStack_900,1);
    pppppplVar12 = pppppplStack_148;
    ppppppplStack_9b0 = ppppppplStack_150;
    pppppplVar28 = pppppplStack_9a8;
    ppppppplStack_150 = (long *******)0x0;
    pppppplStack_148 = (long ******)0x0;
    pppppplStack_9a8 = pppppplVar12;
    if (pppppplVar28 != (long ******)0x0) {
      pppppplVar12 = pppppplVar28 + 1;
      do {
        ppppplVar23 = *pppppplVar12;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pppppplVar12,0x10);
        if (bVar10) {
          *pppppplVar12 = (long *****)((long)ppppplVar23 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppppplVar23 == (long *****)0x0) {
        (*(code *)(*pppppplVar28)[2])(pppppplVar28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar28);
      }
    }
    pppppplVar28 = pppppplStack_148;
    if (pppppplStack_148 != (long ******)0x0) {
      pppppplVar12 = pppppplStack_148 + 1;
      do {
        ppppplVar23 = *pppppplVar12;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pppppplVar12,0x10);
        if (bVar10) {
          *pppppplVar12 = (long *****)((long)ppppplVar23 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppppplVar23 == (long *****)0x0) {
        (*(code *)(*pppppplStack_148)[2])(pppppplStack_148);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar28);
      }
    }
    ppppppplStack_150 = (long *******)0x0;
    pppppplStack_148 = (long ******)0x0;
    FUN_10a5bd168(puVar11,&ppppppplStack_920,&ppppppplStack_9b0,&ppppppplStack_150,&pppppplStack_8f0
                  ,uStack_8d8);
    pppppplVar28 = pppppplStack_148;
    if (pppppplStack_148 != (long ******)0x0) {
      pppppplVar12 = pppppplStack_148 + 1;
      do {
        ppppplVar23 = *pppppplVar12;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pppppplVar12,0x10);
        if (bVar10) {
          *pppppplVar12 = (long *****)((long)ppppplVar23 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppppplVar23 == (long *****)0x0) {
        (*(code *)(*pppppplStack_148)[2])(pppppplStack_148);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar28);
      }
    }
    if (pppppplStack_9a8 != (long ******)0x0) {
      pppppplVar28 = pppppplStack_9a8 + 1;
      do {
        ppppplVar23 = *pppppplVar28;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
        if (bVar10) {
          *pppppplVar28 = (long *****)((long)ppppplVar23 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_10ad43294:
      pppppplVar28 = pppppplStack_9a8;
      if (ppppplVar23 == (long *****)0x0) {
        (*(code *)(*pppppplStack_9a8)[2])(pppppplStack_9a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar28);
      }
    }
  }
  FUN_10a22ba60(&pppppplStack_8f0,ppppplStack_8e8);
  plVar17 = plStack_8f8;
  if (plStack_8f8 != (long *)0x0) {
    plVar27 = plStack_8f8 + 1;
    do {
      lVar26 = *plVar27;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar10) {
        *plVar27 = lVar26 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plStack_8f8 + 0x10))(plStack_8f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  pppppplVar28 = pppppplStack_908;
  if (pppppplStack_908 != (long ******)0x0) {
    pppppplVar12 = pppppplStack_908 + 1;
    do {
      ppppplVar23 = *pppppplVar12;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pppppplVar12,0x10);
      if (bVar10) {
        *pppppplVar12 = (long *****)((long)ppppplVar23 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppppplVar23 == (long *****)0x0) {
      (*(code *)(*pppppplStack_908)[2])(pppppplStack_908);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar28);
    }
  }
  pppppplVar28 = pppppplStack_918;
  if (pppppplStack_918 != (long ******)0x0) {
    pppppplVar12 = pppppplStack_918 + 1;
    do {
      ppppplVar23 = *pppppplVar12;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pppppplVar12,0x10);
      if (bVar10) {
        *pppppplVar12 = (long *****)((long)ppppplVar23 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppppplVar23 == (long *****)0x0) {
      (*(code *)(*pppppplStack_918)[2])(pppppplStack_918);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar28);
    }
  }
  func_0x00010ad45eac(&uStack_8d0);
  func_0x00010ad45efc(auStack_878);
  if ((char)bStack_601 < '\0') {
    __ZdlPv(uStack_618);
  }
LAB_10ad4339c:
  plVar17 = &lStack_198;
  puVar25 = auStack_228;
  do {
    plVar17 = plVar17 + -0x11;
    lVar26 = *plVar17;
    if (lVar26 != 0) {
      puVar15 = puVar25 + lVar26 * 0x10;
      do {
        lVar26 = lVar26 + -1;
        func_0x00010ad460c0(puVar15);
        puVar15 = puVar15 + -0x10;
      } while (lVar26 != 0);
    }
    plVar27 = plStack_190;
    puVar25 = puVar25 + -0x88;
  } while (plVar17 != alStack_5d8);
  if (plStack_190 != (long *)0x0) {
    plVar17 = plStack_190 + 1;
    do {
      lVar26 = *plVar17;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar26 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plStack_190 + 0x10))(plStack_190);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
    }
  }
  plVar17 = plStack_160;
  if (plStack_160 != (long *)0x0) {
    plVar27 = plStack_160 + 1;
    do {
      lVar26 = *plVar27;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar10) {
        *plVar27 = lVar26 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plStack_160 + 0x10))(plStack_160);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  plVar17 = plStack_170;
  if (plStack_170 != (long *)0x0) {
    plVar27 = plStack_170 + 1;
    do {
      lVar26 = *plVar27;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar10) {
        *plVar27 = lVar26 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plStack_170 + 0x10))(plStack_170);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  plVar17 = plStack_180;
  if (plStack_180 != (long *)0x0) {
    plVar27 = plStack_180 + 1;
    do {
      lVar26 = *plVar27;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar10) {
        *plVar27 = lVar26 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plStack_180 + 0x10))(plStack_180);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  return;
}



/* Entry: 10ad42100; end: 10ad4365b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10ad42100(undefined8 *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  undefined8 *puVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  long ******pppppplVar11;
  long *******ppppppplVar12;
  long *******ppppppplVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  long ****pppplVar19;
  ulong uVar20;
  long *****ppppplVar21;
  int *piVar22;
  undefined1 *puVar23;
  long lVar24;
  long *plVar25;
  long ******pppppplVar26;
  long *******ppppppplVar27;
  undefined8 *puVar28;
  byte bVar29;
  long *plVar30;
  long *plVar31;
  ulong uVar32;
  undefined8 uVar33;
  long *****ppppplVar34;
  undefined8 uVar35;
  long *****ppppplVar36;
  long *****ppppplVar37;
  long *****ppppplVar38;
  long *****ppppplVar39;
  long *******appppppplStack_920 [2];
  long *******ppppppplStack_910;
  long ******pppppplStack_908;
  long *******ppppppplStack_900;
  long ******pppppplStack_8f8;
  long ******pppppplStack_8f0;
  long *plStack_8e8;
  undefined8 uStack_8e0;
  long *plStack_8d8;
  undefined1 auStack_8d0 [8];
  undefined8 uStack_8c8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  long lStack_8a0;
  long lStack_890;
  long *plStack_888;
  long lStack_880;
  long *plStack_878;
  long *******ppppppplStack_870;
  long ******pppppplStack_868;
  long *******ppppppplStack_860;
  long ******pppppplStack_858;
  long lStack_850;
  long *plStack_848;
  long ******pppppplStack_840;
  long *****ppppplStack_838;
  long lStack_830;
  undefined1 uStack_828;
  undefined1 uStack_820;
  undefined7 uStack_81f;
  long ******pppppplStack_818;
  long *******ppppppplStack_810;
  long ******pppppplStack_808;
  long alStack_800 [2];
  undefined8 *puStack_7f0;
  undefined8 auStack_7e8 [2];
  undefined1 uStack_7d8;
  byte bStack_7d0;
  undefined1 auStack_7c8 [600];
  byte bStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  byte bStack_551;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  long alStack_528 [118];
  undefined1 auStack_178 [144];
  long lStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined1 uStack_a8;
  long *******ppppppplStack_a0;
  long ******pppppplStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  lVar24 = param_3[0x4b];
  lStack_e8 = *param_3;
  plStack_e0 = (long *)param_3[1];
  if (plStack_e0 != (long *)0x0) {
    plVar25 = plStack_e0 + 1;
    do {
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *plVar25 = *plVar25 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plStack_c0 = (long *)param_3[3];
  lStack_c8 = param_3[2];
  if (param_3[3] != 0) {
    plVar25 = (long *)(param_3[3] + 8);
    do {
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *plVar25 = *plVar25 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plStack_b0 = (long *)param_3[5];
  lStack_b8 = param_3[4];
  if (param_3[5] != 0) {
    plVar25 = (long *)(param_3[5] + 8);
    do {
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *plVar25 = *plVar25 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uStack_a8 = (undefined1)param_3[6];
  if (plStack_e0 != (long *)0x0) {
    plVar25 = plStack_e0 + 1;
    do {
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *plVar25 = *plVar25 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar16 = 0;
  lStack_d8 = lStack_e8;
  plStack_d0 = plStack_e0;
  do {
    *(undefined8 *)((long)alStack_528 + lVar16) = 0;
    lVar16 = lVar16 + 0x88;
  } while (lVar16 != 0x440);
  uStack_538 = 0;
  uStack_540 = 0;
  uStack_548 = 0;
  uStack_550 = 0;
  bVar9 = *(long *)(*(long *)(param_2 + 8) + 0xb8) == 0;
  bVar10 = !bVar9;
  FUN_10a13299c(auStack_7c8,&UNK_10f6a6dce);
  plVar30 = *(long **)(*(long *)(param_2 + 8) + 0xa8);
  plVar25 = (long *)(*(long *)(param_2 + 8) + 0xb0);
  if (plVar30 == plVar25) {
    uVar32 = 0;
  }
  else {
    uVar32 = 0;
    do {
      lVar16 = plVar30[5];
      if ((*(byte *)(lVar16 + 0x157) & 1) == 0) {
        lVar15 = lVar16;
        if (1 < *(byte *)(lVar16 + 0x1a8) - 3) {
          FUN_10a5acbc4();
          lVar15 = plVar30[5];
          if ((int)lVar16 != 0) {
            FUN_10ad41fb8(param_2,lVar15,param_3[10]);
            lVar15 = plVar30[5];
          }
        }
        if (*(byte *)(lVar15 + 0x1a8) - 3 < 2) {
          iVar4 = *(int *)((long)plVar30 + 0x24);
          bVar9 = true;
          bVar8 = false;
          if (iVar4 != -1) {
            bVar8 = SBORROW4((int)uVar32,1);
            bVar9 = (int)uVar32 + -1 < 0;
          }
          if (bVar9 == bVar8) {
            lVar16 = 0;
            piVar22 = (int *)&uStack_550;
            do {
              if (lVar16 == 0x440) goto LAB_10ad432b4;
              if (*piVar22 == iVar4) goto LAB_10ad422dc;
              lVar16 = lVar16 + 0x88;
              piVar22 = piVar22 + 1;
            } while (uVar32 * 0x88 - lVar16 != 0);
          }
          if (7 < uVar32) goto LAB_10ad432b4;
          *(int *)((long)&uStack_550 + uVar32 * 4) = iVar4;
          lVar16 = uVar32 * 0x88;
          uVar32 = uVar32 + 1;
LAB_10ad422dc:
          plVar17 = (long *)((long)alStack_528 + lVar16);
          lVar16 = *plVar17;
          plVar17[lVar16 * 2 + 1] = lVar15;
          lVar15 = plVar30[6];
          plVar17[lVar16 * 2 + 2] = lVar15;
          if (lVar15 != 0) {
            plVar31 = (long *)(lVar15 + 8);
            do {
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar9) {
                *plVar31 = *plVar31 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            lVar16 = *plVar17;
          }
          *plVar17 = lVar16 + 1;
          bVar10 = (bool)(bVar10 & *(byte *)(*(long *)(*(long *)(plVar30[5] + 0x108) + 0x910) + 0x25
                                            ));
        }
      }
      plVar17 = (long *)plVar30[1];
      plVar31 = plVar30;
      if ((long *)plVar30[1] == (long *)0x0) {
        do {
          plVar30 = (long *)plVar31[2];
          bVar9 = (long *)*plVar30 != plVar31;
          plVar31 = plVar30;
        } while (bVar9);
      }
      else {
        do {
          plVar30 = plVar17;
          plVar17 = (long *)*plVar30;
        } while ((long *)*plVar30 != (long *)0x0);
      }
    } while (plVar30 != plVar25);
    bVar9 = (bool)(bVar10 ^ 1);
  }
  *(bool *)(param_3 + 9) = bVar9;
  FUN_10a144868(auStack_7c8);
  if (uVar32 == 0) {
    FUN_10ad4365c(param_1,&lStack_e8);
    goto LAB_10ad4339c;
  }
  func_0x000107c2b054(&uStack_568,&DAT_10f387e68);
  lVar16 = *(long *)(param_2 + 8);
  if (*(long **)(lVar16 + 0x48) != (long *)0x0) {
    plVar25 = *(long **)(lVar16 + 0x48);
    do {
      while( true ) {
        lVar15 = lVar16 + 0xc0;
        FUN_10ad47d78(lVar15,plVar25 + 2);
        if (lVar16 + 200 == lVar15) break;
        plVar25 = (long *)*plVar25;
        if (plVar25 == (long *)0x0) goto LAB_10ad423d4;
      }
      plVar30 = (long *)(lVar16 + 0x38);
      func_0x00010ad4594c(plVar30,plVar25);
      plVar25 = plVar30;
    } while (plVar30 != (long *)0x0);
LAB_10ad423d4:
    lVar16 = *(long *)(param_2 + 8);
  }
  *(undefined1 *)(lVar16 + 0x60) = 1;
  auStack_7c8[0] = 0;
  bStack_570 = 0;
  uStack_820 = 0;
  bStack_7d0 = 0;
  FUN_10ad4365c(&ppppppplStack_870,&lStack_d8);
  if (0 < (int)uVar32) {
    uVar20 = 0;
    do {
      if (uVar20 == 8) {
LAB_10ad432b4:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad432b8);
        (*pcVar7)();
      }
      plVar25 = alStack_528 + uVar20 * 0x11 + 1;
      lStack_880 = *plVar25;
      plStack_878 = (long *)alStack_528[uVar20 * 0x11 + 2];
      if (plStack_878 != (long *)0x0) {
        plVar30 = plStack_878 + 1;
        do {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar30,0x10);
          if (bVar10) {
            *plVar30 = *plVar30 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uVar1 = uVar20 + 1;
      if (uVar1 == uVar32) {
        lStack_890 = 0;
        plStack_888 = (long *)0x0;
      }
      else {
        if (uVar20 == 7) goto LAB_10ad432b4;
        plStack_888 = (long *)alStack_528[uVar1 * 0x11 + 2];
        lStack_890 = alStack_528[uVar1 * 0x11 + 1];
        if (alStack_528[uVar1 * 0x11 + 2] != 0) {
          plVar30 = (long *)(alStack_528[uVar1 * 0x11 + 2] + 8);
          do {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar30,0x10);
            if (bVar10) {
              *plVar30 = *plVar30 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      if ((*(byte *)(lStack_880 + 0x1a4) & 1) == 0) {
        bVar29 = 0;
      }
      else {
        bVar29 = *(byte *)(lStack_880 + 0x180);
      }
      if (((lStack_890 != 0) && ((bStack_570 & 1) == 0)) &&
         (*(int *)(lStack_880 + 0x158) == *(int *)(lStack_890 + 0x158))) {
        FUN_10ad4519c(auStack_7c8,param_3);
        bStack_570 = 1;
      }
      if (((bVar29 | bStack_7d0) & 1) == 0) {
        pppppplStack_8f8 = (long ******)param_3[1];
        ppppppplStack_900 = (long *******)*param_3;
        if (param_3[1] != 0) {
          plVar30 = (long *)(param_3[1] + 8);
          do {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar30,0x10);
            if (bVar10) {
              *plVar30 = *plVar30 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plStack_8e8 = (long *)param_3[3];
        pppppplStack_8f0 = (long ******)param_3[2];
        if (param_3[3] != 0) {
          plVar30 = (long *)(param_3[3] + 8);
          do {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar30,0x10);
            if (bVar10) {
              *plVar30 = *plVar30 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plStack_8d8 = (long *)param_3[5];
        uStack_8e0 = param_3[4];
        if (param_3[5] != 0) {
          plVar30 = (long *)(param_3[5] + 8);
          do {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar30,0x10);
            if (bVar10) {
              *plVar30 = *plVar30 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        auStack_8d0[0] = (undefined1)param_3[6];
        FUN_10ad4374c(&uStack_8e0);
        FUN_10ad4374c(&ppppppplStack_900);
        plVar30 = plStack_8e8;
        if (param_3[2] == *param_3) {
          pppppplStack_8f0 = (long ******)0x0;
          plStack_8e8 = (long *)0x0;
          if (plVar30 != (long *)0x0) {
            plVar17 = plVar30 + 1;
            do {
              lVar16 = *plVar17;
              cVar5 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar10) {
                *plVar17 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plVar30 + 0x10))(plVar30);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
            }
          }
        }
        else {
          FUN_10ad4374c(&pppppplStack_8f0);
        }
        pppppplStack_98 = (long ******)0x0;
        uStack_90 = 0;
        ppppppplStack_a0 = &pppppplStack_98;
        func_0x00010ad44274(&uStack_820);
        FUN_10a5bd168(&uStack_820,&ppppppplStack_900,&pppppplStack_8f0,&uStack_8e0,&ppppppplStack_a0
                      ,1);
        bStack_7d0 = 1;
        FUN_10a22ba60(&ppppppplStack_a0,pppppplStack_98);
        plVar30 = plStack_8d8;
        if (plStack_8d8 != (long *)0x0) {
          plVar17 = plStack_8d8 + 1;
          do {
            lVar16 = *plVar17;
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar10) {
              *plVar17 = lVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_8d8 + 0x10))(plStack_8d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
          }
        }
        plVar30 = plStack_8e8;
        if (plStack_8e8 != (long *)0x0) {
          plVar17 = plStack_8e8 + 1;
          do {
            lVar16 = *plVar17;
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar10) {
              *plVar17 = lVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_8e8 + 0x10))(plStack_8e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
          }
        }
        pppppplVar26 = pppppplStack_8f8;
        if (pppppplStack_8f8 != (long ******)0x0) {
          pppppplVar11 = pppppplStack_8f8 + 1;
          do {
            ppppplVar21 = *pppppplVar11;
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(pppppplVar11,0x10);
            if (bVar10) {
              *pppppplVar11 = (long *****)((long)ppppplVar21 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppppplVar21 == (long *****)0x0) {
            (*(code *)(*pppppplStack_8f8)[2])(pppppplStack_8f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar26);
          }
        }
      }
      if ((char)bStack_551 < '\0') {
        func_0x000107c3192c(&uStack_8b0,uStack_568,uStack_560);
      }
      else {
        uStack_8a8 = uStack_560;
        uStack_8b0 = uStack_568;
        lStack_8a0 = (ulong)bStack_551 << 0x38;
      }
      lVar16 = alStack_528[uVar20 * 0x11];
      if (lVar16 != 0) {
        do {
          if ((bStack_570 == 1) && (*plVar25 == lStack_880)) {
            FUN_10ad43894(&ppppppplStack_900,*(undefined8 *)(param_2 + 8),auStack_7c8,&uStack_8b0,
                          lVar24,plVar25);
            FUN_10a22438c(&ppppppplStack_870,&ppppppplStack_900);
            FUN_10a22ba60(auStack_8d0,uStack_8c8);
            plVar30 = plStack_8d8;
            if (plStack_8d8 != (long *)0x0) {
              plVar17 = plStack_8d8 + 1;
              do {
                lVar15 = *plVar17;
                cVar5 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar10) {
                  *plVar17 = lVar15 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar15 == 0) {
                (**(code **)(*plStack_8d8 + 0x10))(plStack_8d8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
              }
            }
            plVar30 = plStack_8e8;
            if (plStack_8e8 != (long *)0x0) {
              plVar17 = plStack_8e8 + 1;
              do {
                lVar15 = *plVar17;
                cVar5 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar10) {
                  *plVar17 = lVar15 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar15 == 0) {
                (**(code **)(*plStack_8e8 + 0x10))(plStack_8e8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
              }
            }
            if (pppppplStack_8f8 != (long ******)0x0) {
              pppppplVar26 = pppppplStack_8f8 + 1;
              do {
                ppppplVar21 = *pppppplVar26;
                cVar5 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
                if (bVar10) {
                  *pppppplVar26 = (long *****)((long)ppppplVar21 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
LAB_10ad427e0:
              pppppplVar26 = pppppplStack_8f8;
              if (ppppplVar21 == (long *****)0x0) {
                (*(code *)(*pppppplStack_8f8)[2])(pppppplStack_8f8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar26);
              }
            }
          }
          else {
            FUN_10ad43894(&ppppppplStack_900,*(undefined8 *)(param_2 + 8),param_3,&uStack_8b0,lVar24
                          ,plVar25);
            if ((*(byte *)(*plVar25 + 0x155) & 1) == 0) {
              FUN_10a22438c(&ppppppplStack_870,&ppppppplStack_900);
              FUN_10ad43fdc(param_3,&ppppppplStack_870);
            }
            FUN_10a22ba60(auStack_8d0,uStack_8c8);
            plVar30 = plStack_8d8;
            if (plStack_8d8 != (long *)0x0) {
              plVar17 = plStack_8d8 + 1;
              do {
                lVar15 = *plVar17;
                cVar5 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar10) {
                  *plVar17 = lVar15 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar15 == 0) {
                (**(code **)(*plStack_8d8 + 0x10))(plStack_8d8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
              }
            }
            plVar30 = plStack_8e8;
            if (plStack_8e8 != (long *)0x0) {
              plVar17 = plStack_8e8 + 1;
              do {
                lVar15 = *plVar17;
                cVar5 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar10) {
                  *plVar17 = lVar15 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar15 == 0) {
                (**(code **)(*plStack_8e8 + 0x10))(plStack_8e8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
              }
            }
            if (pppppplStack_8f8 != (long ******)0x0) {
              pppppplVar26 = pppppplStack_8f8 + 1;
              do {
                ppppplVar21 = *pppppplVar26;
                cVar5 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
                if (bVar10) {
                  *pppppplVar26 = (long *****)((long)ppppplVar21 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              goto LAB_10ad427e0;
            }
          }
          lVar15 = *(long *)(*plVar25 + 0xf8);
          uVar2 = *(ulong *)(lVar15 + 0x210);
          if (-1 < (char)*(byte *)(lVar15 + 0x21f)) {
            uVar2 = (ulong)*(byte *)(lVar15 + 0x21f);
          }
          FUN_10a003c90(&ppppppplStack_900,uVar2 + 1,&ppppppplStack_a0);
          ppppppplVar27 = ppppppplStack_900;
          if (-1 < (long)pppppplStack_8f0) {
            ppppppplVar27 = (long *******)&ppppppplStack_900;
          }
          if (uVar2 != 0) {
            lVar3 = *(long *)(lVar15 + 0x208);
            if (-1 < *(char *)(lVar15 + 0x21f)) {
              lVar3 = lVar15 + 0x208;
            }
            _memmove(ppppppplVar27,lVar3,uVar2);
          }
          *(undefined2 *)((long)ppppppplVar27 + uVar2) = 0x7c;
          pppppplVar26 = pppppplStack_8f8;
          ppppppplVar27 = ppppppplStack_900;
          if (-1 < (long)pppppplStack_8f0) {
            pppppplVar26 = (long ******)((ulong)pppppplStack_8f0 >> 0x38);
            ppppppplVar27 = (long *******)&ppppppplStack_900;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&uStack_8b0,ppppppplVar27,pppppplVar26);
          if ((long)pppppplStack_8f0 < 0) {
            __ZdlPv(ppppppplStack_900);
          }
          plVar25 = plVar25 + 2;
        } while (plVar25 != alStack_528 + uVar20 * 0x11 + lVar16 * 2 + 1);
      }
      pppppplVar26 = pppppplStack_808;
      if ((bVar29 & 1) == 0) {
        if (ppppppplStack_860 == (long *******)0x0) {
          if ((bStack_7d0 & 1) == 0) goto LAB_10ad432b4;
          if (ppppppplStack_810 != (long *******)0x0) {
            ppppppplStack_910 = ppppppplStack_810;
            pppppplStack_908 = pppppplStack_808;
            if (pppppplStack_808 != (long ******)0x0) {
              pppppplVar11 = pppppplStack_808 + 1;
              do {
                cVar5 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(pppppplVar11,0x10);
                if (bVar10) {
                  *pppppplVar11 = (long *****)((long)*pppppplVar11 + 1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            if (ppppppplStack_870 != (long *******)0x0) {
              pppppplStack_8f8 = *(long *******)(lStack_880 + 0x168);
              ppppppplStack_900 = *(long ********)(lStack_880 + 0x160);
              plStack_8e8 = *(long **)(lStack_880 + 0x178);
              pppppplStack_8f0 = *(long *******)(lStack_880 + 0x170);
              uStack_8e0 = CONCAT44(uStack_8e0._4_4_,*(undefined4 *)(lStack_880 + 0x180));
              pppppplStack_98 = *(long *******)(lStack_880 + 0x18c);
              ppppppplStack_a0 = *(long ********)(lStack_880 + 0x184);
              uStack_88 = *(undefined8 *)(lStack_880 + 0x19c);
              uStack_90 = *(undefined8 *)(lStack_880 + 0x194);
              uStack_80 = *(undefined4 *)(lStack_880 + 0x1a4);
              FUN_10ad44770(param_2,&ppppppplStack_870,&ppppppplStack_900,&ppppppplStack_910,
                            &ppppppplStack_a0);
            }
            if (pppppplVar26 != (long ******)0x0) {
              pppppplVar11 = pppppplVar26 + 1;
              do {
                ppppplVar21 = *pppppplVar11;
                cVar5 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(pppppplVar11,0x10);
                if (bVar10) {
                  *pppppplVar11 = (long *****)((long)ppppplVar21 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              goto LAB_10ad42bb4;
            }
          }
        }
        else {
          if ((bStack_7d0 & 1) == 0) goto LAB_10ad432b4;
          ppppppplVar27 = ppppppplStack_860;
          pppppplVar26 = pppppplStack_858;
          if (ppppppplStack_810 == (long *******)0x0) {
            FUN_10a0996a4(&ppppppplStack_900,&uStack_820);
            func_0x00010a3df030(&ppppppplStack_810,&ppppppplStack_900);
            pppppplVar26 = pppppplStack_8f8;
            if (pppppplStack_8f8 != (long ******)0x0) {
              pppppplVar11 = pppppplStack_8f8 + 1;
              do {
                ppppplVar21 = *pppppplVar11;
                cVar5 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(pppppplVar11,0x10);
                if (bVar10) {
                  *pppppplVar11 = (long *****)((long)ppppplVar21 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (ppppplVar21 == (long *****)0x0) {
                (*(code *)(*pppppplStack_8f8)[2])(pppppplStack_8f8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar26);
              }
            }
            ppppppplVar27 = ppppppplStack_860;
            pppppplVar26 = pppppplStack_858;
            if (ppppppplStack_860 == (long *******)0x0) {
              ppppppplVar27 = ppppppplStack_870;
              pppppplVar26 = pppppplStack_868;
            }
          }
          pppppplStack_908 = pppppplVar26;
          ppppppplStack_910 = ppppppplVar27;
          if (pppppplStack_908 != (long ******)0x0) {
            pppppplVar26 = pppppplStack_908 + 1;
            do {
              cVar5 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
              if (bVar10) {
                *pppppplVar26 = (long *****)((long)*pppppplVar26 + 1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if ((bStack_7d0 & 1) == 0) goto LAB_10ad432b4;
          appppppplStack_920[0] = ppppppplStack_810;
          pppppplVar26 = pppppplStack_808;
          if (ppppppplStack_810 == (long *******)0x0) {
            appppppplStack_920[0] = (long *******)CONCAT71(uStack_81f,uStack_820);
            pppppplVar26 = pppppplStack_818;
          }
          if (pppppplVar26 != (long ******)0x0) {
            pppppplVar11 = pppppplVar26 + 1;
            do {
              cVar5 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(pppppplVar11,0x10);
              if (bVar10) {
                *pppppplVar11 = (long *****)((long)*pppppplVar11 + 1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if (ppppppplStack_910 != (long *******)0x0) {
            pppppplStack_8f8 = *(long *******)(lStack_880 + 0x168);
            ppppppplStack_900 = *(long ********)(lStack_880 + 0x160);
            plStack_8e8 = *(long **)(lStack_880 + 0x178);
            pppppplStack_8f0 = *(long *******)(lStack_880 + 0x170);
            uStack_8e0._4_4_ = (undefined4)((ulong)uStack_8e0 >> 0x20);
            uStack_8e0 = CONCAT44(uStack_8e0._4_4_,*(undefined4 *)(lStack_880 + 0x180));
            pppppplStack_98 = *(long *******)(lStack_880 + 0x18c);
            ppppppplStack_a0 = *(long ********)(lStack_880 + 0x184);
            uStack_88 = *(undefined8 *)(lStack_880 + 0x19c);
            uStack_90 = *(undefined8 *)(lStack_880 + 0x194);
            uStack_80 = *(undefined4 *)(lStack_880 + 0x1a4);
            FUN_10ad44770(param_2,&ppppppplStack_910,&ppppppplStack_900,appppppplStack_920,
                          &ppppppplStack_a0);
          }
          if (pppppplVar26 != (long ******)0x0) {
            pppppplVar11 = pppppplVar26 + 1;
            do {
              ppppplVar21 = *pppppplVar11;
              cVar5 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(pppppplVar11,0x10);
              if (bVar10) {
                *pppppplVar11 = (long *****)((long)ppppplVar21 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (ppppplVar21 == (long *****)0x0) {
              (*(code *)(*pppppplVar26)[2])(pppppplVar26);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar26);
            }
          }
          if (pppppplStack_908 != (long ******)0x0) {
            pppppplVar11 = pppppplStack_908 + 1;
            do {
              ppppplVar21 = *pppppplVar11;
              cVar5 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(pppppplVar11,0x10);
              if (bVar10) {
                *pppppplVar11 = (long *****)((long)ppppplVar21 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
              pppppplVar26 = pppppplStack_908;
            } while (cVar5 != '\0');
LAB_10ad42bb4:
            if (ppppplVar21 == (long *****)0x0) {
              (*(code *)(*pppppplVar26)[2])(pppppplVar26);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar26);
            }
          }
        }
        if ((bStack_7d0 & 1) == 0) goto LAB_10ad432b4;
        if (ppppppplStack_870 != (long *******)0x0) {
          pppppplStack_8f8 = *(long *******)(lStack_880 + 0x168);
          ppppppplStack_900 = *(long ********)(lStack_880 + 0x160);
          plStack_8e8 = *(long **)(lStack_880 + 0x178);
          pppppplStack_8f0 = *(long *******)(lStack_880 + 0x170);
          uStack_8e0 = CONCAT44(uStack_8e0._4_4_,*(undefined4 *)(lStack_880 + 0x180));
          pppppplStack_98 = *(long *******)(lStack_880 + 0x18c);
          ppppppplStack_a0 = *(long ********)(lStack_880 + 0x184);
          uStack_88 = *(undefined8 *)(lStack_880 + 0x19c);
          uStack_90 = *(undefined8 *)(lStack_880 + 0x194);
          uStack_80 = *(undefined4 *)(lStack_880 + 0x1a4);
          FUN_10ad44770(param_2,&ppppppplStack_870,&ppppppplStack_900,&uStack_820,&ppppppplStack_a0)
          ;
        }
        if (lStack_850 != 0) {
          if ((bStack_7d0 & 1) == 0) goto LAB_10ad432b4;
          if (alStack_800[0] == 0) {
            func_0x00010a3df030(alStack_800,&lStack_850);
          }
          else {
            pppppplStack_8f8 = *(long *******)(lStack_880 + 0x168);
            ppppppplStack_900 = *(long ********)(lStack_880 + 0x160);
            plStack_8e8 = *(long **)(lStack_880 + 0x178);
            pppppplStack_8f0 = *(long *******)(lStack_880 + 0x170);
            uStack_8e0 = CONCAT44(uStack_8e0._4_4_,*(undefined4 *)(lStack_880 + 0x180));
            pppppplStack_98 = *(long *******)(lStack_880 + 0x18c);
            ppppppplStack_a0 = *(long ********)(lStack_880 + 0x184);
            uStack_88 = *(undefined8 *)(lStack_880 + 0x19c);
            uStack_90 = *(undefined8 *)(lStack_880 + 0x194);
            uStack_80 = *(undefined4 *)(lStack_880 + 0x1a4);
            FUN_10ad44770(param_2,&lStack_850,&ppppppplStack_900,alStack_800,&ppppppplStack_a0);
          }
        }
        if ((bStack_7d0 & 1) == 0) goto LAB_10ad432b4;
        uStack_7d8 = uStack_828;
        func_0x00010a3df030(&ppppppplStack_870,&uStack_820);
        func_0x00010a3df030(&ppppppplStack_860,&ppppppplStack_810);
        func_0x00010a3df030(&lStack_850,alStack_800);
        puVar18 = puStack_7f0;
        bVar10 = lStack_830 != 0;
        lStack_830 = 0;
        if (bVar10) {
          ppppplStack_838[2] = (long ****)0x0;
          ppppplStack_838 = (long *****)0x0;
          lStack_830 = 0;
          pppppplVar26 = pppppplStack_840;
          if ((long ******)pppppplStack_840[1] != (long ******)0x0) {
            pppppplVar26 = (long ******)pppppplStack_840[1];
          }
          ppppppplStack_900 = &pppppplStack_840;
          pppppplStack_8f8 = pppppplVar26;
          pppppplStack_8f0 = pppppplVar26;
          pppppplStack_840 = &ppppplStack_838;
          if (pppppplVar26 != (long ******)0x0) {
            pppppplVar11 = pppppplVar26;
            func_0x00010ad45dbc();
            pppppplStack_8f8 = pppppplVar11;
            do {
              if (puVar18 == auStack_7e8) break;
              ppppplVar21 = (long *****)puVar18[4];
              pppppplVar26[5] = (long *****)puVar18[5];
              pppppplVar26[4] = ppppplVar21;
              ppppplVar37 = (long *****)puVar18[0xd];
              ppppplVar36 = (long *****)puVar18[0xc];
              ppppplVar34 = (long *****)puVar18[0xf];
              ppppplVar21 = (long *****)puVar18[0xe];
              ppppplVar39 = (long *****)puVar18[0xb];
              ppppplVar38 = (long *****)puVar18[10];
              *(undefined4 *)(pppppplVar26 + 0x10) = *(undefined4 *)(puVar18 + 0x10);
              pppppplVar26[0xd] = ppppplVar37;
              pppppplVar26[0xc] = ppppplVar36;
              pppppplVar26[0xf] = ppppplVar34;
              pppppplVar26[0xe] = ppppplVar21;
              pppppplVar26[0xb] = ppppplVar39;
              pppppplVar26[10] = ppppplVar38;
              ppppplVar21 = (long *****)puVar18[6];
              ppppplVar36 = (long *****)puVar18[9];
              ppppplVar34 = (long *****)puVar18[8];
              pppppplVar26[7] = (long *****)puVar18[7];
              pppppplVar26[6] = ppppplVar21;
              pppppplVar26[9] = ppppplVar36;
              pppppplVar26[8] = ppppplVar34;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (pppppplVar26 + 0x11,puVar18 + 0x11);
              ppppplVar21 = (long *****)puVar18[0x14];
              *(undefined4 *)(pppppplVar26 + 0x15) = *(undefined4 *)(puVar18 + 0x15);
              pppppplVar26[0x14] = ppppplVar21;
              cVar5 = *(char *)(pppppplVar26 + 0x1c);
              if (cVar5 == *(char *)(puVar18 + 0x1c)) {
                if (cVar5 != '\0') {
                  func_0x00010a3df030(pppppplVar26 + 0x16,puVar18 + 0x16);
                  uVar35 = *(undefined8 *)((long)puVar18 + 0xd1);
                  uVar33 = *(undefined8 *)((long)puVar18 + 0xc9);
                  ppppplVar21 = (long *****)puVar18[0x18];
                  pppppplVar26[0x19] = (long *****)puVar18[0x19];
                  pppppplVar26[0x18] = ppppplVar21;
                  *(undefined8 *)((long)pppppplVar26 + 0xd1) = uVar35;
                  *(undefined8 *)((long)pppppplVar26 + 0xc9) = uVar33;
                }
              }
              else if (cVar5 == '\0') {
                lVar16 = puVar18[0x17];
                ppppplVar21 = (long *****)puVar18[0x16];
                pppppplVar26[0x17] = (long *****)puVar18[0x17];
                pppppplVar26[0x16] = ppppplVar21;
                if (lVar16 != 0) {
                  plVar25 = (long *)(lVar16 + 8);
                  do {
                    cVar5 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar10) {
                      *plVar25 = *plVar25 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                }
                ppppplVar34 = (long *****)puVar18[0x19];
                ppppplVar21 = (long *****)puVar18[0x18];
                uVar33 = *(undefined8 *)((long)puVar18 + 0xc9);
                *(undefined8 *)((long)pppppplVar26 + 0xd1) = *(undefined8 *)((long)puVar18 + 0xd1);
                *(undefined8 *)((long)pppppplVar26 + 0xc9) = uVar33;
                pppppplVar26[0x19] = ppppplVar34;
                pppppplVar26[0x18] = ppppplVar21;
                *(undefined1 *)(pppppplVar26 + 0x1c) = 1;
              }
              else {
                func_0x00010a09db64(pppppplVar26 + 0x16);
                *(undefined1 *)(pppppplVar26 + 0x1c) = 0;
              }
              pppppplVar26 = pppppplStack_8f0;
              ppppppplVar12 = &pppppplStack_840;
              func_0x00010ad45d54(&pppppplStack_840,&ppppppplStack_a0,pppppplStack_8f0[4],
                                  pppppplStack_8f0[5]);
              ppppppplVar27 = ppppppplStack_a0;
              *pppppplVar26 = (long *****)0x0;
              pppppplVar26[1] = (long *****)0x0;
              pppppplVar26[2] = (long *****)ppppppplVar27;
              *ppppppplVar12 = pppppplVar26;
              if ((long ******)*pppppplStack_840 != (long ******)0x0) {
                pppppplVar26 = *ppppppplVar12;
                pppppplStack_840 = (long ******)*pppppplStack_840;
              }
              func_0x000107c2b058(ppppplStack_838,pppppplVar26);
              pppppplVar26 = pppppplStack_8f8;
              lStack_830 = lStack_830 + 1;
              pppppplStack_8f0 = pppppplStack_8f8;
              if (pppppplStack_8f8 != (long ******)0x0) {
                func_0x00010ad45dbc();
              }
              puVar6 = (undefined8 *)puVar18[1];
              puVar28 = puVar18;
              if ((undefined8 *)puVar18[1] == (undefined8 *)0x0) {
                do {
                  puVar18 = (undefined8 *)puVar28[2];
                  bVar10 = (undefined8 *)*puVar18 != puVar28;
                  puVar28 = puVar18;
                } while (bVar10);
              }
              else {
                do {
                  puVar18 = puVar6;
                  puVar6 = (undefined8 *)*puVar18;
                } while ((undefined8 *)*puVar18 != (undefined8 *)0x0);
              }
            } while (pppppplVar26 != (long ******)0x0);
          }
          FUN_10ad45e10(&ppppppplStack_900);
        }
        while (puVar18 != auStack_7e8) {
          FUN_10a5bd520(&ppppppplStack_900,&pppppplStack_840,puVar18 + 4);
          ppppppplVar27 = ppppppplStack_900;
          ppppppplVar13 = &pppppplStack_840;
          func_0x00010ad45d54(&pppppplStack_840,&ppppppplStack_a0,ppppppplStack_900[4],
                              ppppppplStack_900[5]);
          ppppppplVar12 = ppppppplStack_a0;
          *ppppppplVar27 = (long ******)0x0;
          ppppppplVar27[1] = (long ******)0x0;
          ppppppplVar27[2] = (long ******)ppppppplVar12;
          *ppppppplVar13 = (long ******)ppppppplVar27;
          if ((long ******)*pppppplStack_840 != (long ******)0x0) {
            ppppppplVar27 = (long *******)*ppppppplVar13;
            pppppplStack_840 = (long ******)*pppppplStack_840;
          }
          func_0x000107c2b058(ppppplStack_838,ppppppplVar27);
          lStack_830 = lStack_830 + 1;
          puVar6 = (undefined8 *)puVar18[1];
          puVar28 = puVar18;
          if ((undefined8 *)puVar18[1] == (undefined8 *)0x0) {
            do {
              puVar18 = (undefined8 *)puVar28[2];
              bVar10 = (undefined8 *)*puVar18 != puVar28;
              puVar28 = puVar18;
            } while (bVar10);
          }
          else {
            do {
              puVar18 = puVar6;
              puVar6 = (undefined8 *)*puVar18;
            } while ((undefined8 *)*puVar18 != (undefined8 *)0x0);
          }
        }
        uStack_828 = uStack_7d8;
        FUN_10ad43fdc(param_3,&ppppppplStack_870);
      }
      if ((lStack_890 != 0) && (*(int *)(lStack_880 + 0x158) != *(int *)(lStack_890 + 0x158))) {
        func_0x00010ad441f0(auStack_7c8);
        if ((bVar29 & 1) == 0) {
          *(undefined1 *)(*(long *)(param_2 + 8) + 0x60) = 0;
          func_0x00010ad44274(&uStack_820);
        }
        else {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&uStack_568,&uStack_8b0);
        }
      }
      if (lStack_8a0 < 0) {
        __ZdlPv(uStack_8b0);
      }
      plVar25 = plStack_888;
      if (plStack_888 != (long *)0x0) {
        plVar30 = plStack_888 + 1;
        do {
          lVar16 = *plVar30;
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar30,0x10);
          if (bVar10) {
            *plVar30 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_888 + 0x10))(plStack_888);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
        }
      }
      plVar25 = plStack_878;
      if (plStack_878 != (long *)0x0) {
        plVar30 = plStack_878 + 1;
        do {
          lVar16 = *plVar30;
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar30,0x10);
          if (bVar10) {
            *plVar30 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_878 + 0x10))(plStack_878);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
        }
      }
      uVar20 = uVar1;
    } while (uVar1 != uVar32);
  }
  func_0x00010ad441f0(auStack_7c8);
  func_0x00010ad44274(&uStack_820);
  pppppplVar26 = pppppplStack_868;
  ppppppplVar27 = ppppppplStack_870;
  if ((lStack_850 == 0) || ((*(byte *)(param_3 + 0x15) & 1) != 0)) {
    if (lStack_e8 == 0) {
      ppppppplStack_870 = (long *******)0x0;
      pppppplStack_868 = (long ******)0x0;
      param_1[1] = pppppplVar26;
      *param_1 = ppppppplVar27;
      param_1[3] = pppppplStack_858;
      param_1[2] = ppppppplStack_860;
      ppppppplStack_860 = (long *******)0x0;
      pppppplStack_858 = (long ******)0x0;
      param_1[4] = lStack_850;
      param_1[5] = plStack_848;
      lStack_850 = 0;
      plStack_848 = (long *)0x0;
      param_1[6] = pppppplStack_840;
      pppplVar19 = (long ****)(param_1 + 7);
      *pppplVar19 = (long ***)ppppplStack_838;
      param_1[8] = lStack_830;
      if (lStack_830 == 0) {
        param_1[6] = pppplVar19;
      }
      else {
        ppppplStack_838[2] = pppplVar19;
        pppppplStack_840 = &ppppplStack_838;
        ppppplStack_838 = (long *****)0x0;
        lStack_830 = 0;
      }
      *(undefined1 *)(param_1 + 9) = uStack_828;
    }
    else {
      if (ppppppplStack_860 == (long *******)0x0) {
        ppppppplStack_900 = (long *******)0x0;
        pppppplStack_8f8 = (long ******)0x0;
      }
      else {
        ppppppplStack_900 = ppppppplStack_860;
        pppppplStack_8f8 = pppppplStack_858;
        if (pppppplStack_858 != (long ******)0x0) {
          pppppplVar26 = pppppplStack_858 + 1;
          do {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
            if (bVar10) {
              *pppppplVar26 = (long *****)((long)*pppppplVar26 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      FUN_10a5bd168(param_1,&ppppppplStack_870,&ppppppplStack_900,&lStack_850,&pppppplStack_840,1);
      if (pppppplStack_8f8 != (long ******)0x0) {
        pppppplVar26 = pppppplStack_8f8 + 1;
        do {
          ppppplVar21 = *pppppplVar26;
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
          if (bVar10) {
            *pppppplVar26 = (long *****)((long)ppppplVar21 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        goto LAB_10ad43294;
      }
    }
  }
  else {
    pppppplStack_8f8 = pppppplStack_868;
    if (ppppppplStack_860 != (long *******)0x0) {
      pppppplStack_8f8 = pppppplStack_858;
    }
    if (pppppplStack_8f8 != (long ******)0x0) {
      pppppplVar26 = pppppplStack_8f8 + 1;
      do {
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
        if (bVar10) {
          *pppppplVar26 = (long *****)((long)*pppppplVar26 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    FUN_10ad442c4(&ppppppplStack_a0,&ppppppplStack_900,&lStack_850,1);
    pppppplVar11 = pppppplStack_98;
    ppppppplStack_900 = ppppppplStack_a0;
    pppppplVar26 = pppppplStack_8f8;
    ppppppplStack_a0 = (long *******)0x0;
    pppppplStack_98 = (long ******)0x0;
    pppppplStack_8f8 = pppppplVar11;
    if (pppppplVar26 != (long ******)0x0) {
      pppppplVar11 = pppppplVar26 + 1;
      do {
        ppppplVar21 = *pppppplVar11;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pppppplVar11,0x10);
        if (bVar10) {
          *pppppplVar11 = (long *****)((long)ppppplVar21 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppppplVar21 == (long *****)0x0) {
        (*(code *)(*pppppplVar26)[2])(pppppplVar26);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar26);
      }
    }
    pppppplVar26 = pppppplStack_98;
    if (pppppplStack_98 != (long ******)0x0) {
      pppppplVar11 = pppppplStack_98 + 1;
      do {
        ppppplVar21 = *pppppplVar11;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pppppplVar11,0x10);
        if (bVar10) {
          *pppppplVar11 = (long *****)((long)ppppplVar21 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppppplVar21 == (long *****)0x0) {
        (*(code *)(*pppppplStack_98)[2])(pppppplStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar26);
      }
    }
    ppppppplStack_a0 = (long *******)0x0;
    pppppplStack_98 = (long ******)0x0;
    FUN_10a5bd168(param_1,&ppppppplStack_870,&ppppppplStack_900,&ppppppplStack_a0,&pppppplStack_840,
                  uStack_828);
    pppppplVar26 = pppppplStack_98;
    if (pppppplStack_98 != (long ******)0x0) {
      pppppplVar11 = pppppplStack_98 + 1;
      do {
        ppppplVar21 = *pppppplVar11;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pppppplVar11,0x10);
        if (bVar10) {
          *pppppplVar11 = (long *****)((long)ppppplVar21 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppppplVar21 == (long *****)0x0) {
        (*(code *)(*pppppplStack_98)[2])(pppppplStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar26);
      }
    }
    if (pppppplStack_8f8 != (long ******)0x0) {
      pppppplVar26 = pppppplStack_8f8 + 1;
      do {
        ppppplVar21 = *pppppplVar26;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
        if (bVar10) {
          *pppppplVar26 = (long *****)((long)ppppplVar21 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_10ad43294:
      pppppplVar26 = pppppplStack_8f8;
      if (ppppplVar21 == (long *****)0x0) {
        (*(code *)(*pppppplStack_8f8)[2])(pppppplStack_8f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar26);
      }
    }
  }
  FUN_10a22ba60(&pppppplStack_840,ppppplStack_838);
  plVar25 = plStack_848;
  if (plStack_848 != (long *)0x0) {
    plVar30 = plStack_848 + 1;
    do {
      lVar24 = *plVar30;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar10) {
        *plVar30 = lVar24 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plStack_848 + 0x10))(plStack_848);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  pppppplVar26 = pppppplStack_858;
  if (pppppplStack_858 != (long ******)0x0) {
    pppppplVar11 = pppppplStack_858 + 1;
    do {
      ppppplVar21 = *pppppplVar11;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pppppplVar11,0x10);
      if (bVar10) {
        *pppppplVar11 = (long *****)((long)ppppplVar21 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppppplVar21 == (long *****)0x0) {
      (*(code *)(*pppppplStack_858)[2])(pppppplStack_858);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar26);
    }
  }
  pppppplVar26 = pppppplStack_868;
  if (pppppplStack_868 != (long ******)0x0) {
    pppppplVar11 = pppppplStack_868 + 1;
    do {
      ppppplVar21 = *pppppplVar11;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pppppplVar11,0x10);
      if (bVar10) {
        *pppppplVar11 = (long *****)((long)ppppplVar21 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppppplVar21 == (long *****)0x0) {
      (*(code *)(*pppppplStack_868)[2])(pppppplStack_868);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar26);
    }
  }
  func_0x00010ad45eac(&uStack_820);
  func_0x00010ad45efc(auStack_7c8);
  if ((char)bStack_551 < '\0') {
    __ZdlPv(uStack_568);
  }
LAB_10ad4339c:
  plVar25 = &lStack_e8;
  puVar23 = auStack_178;
  do {
    plVar25 = plVar25 + -0x11;
    lVar24 = *plVar25;
    if (lVar24 != 0) {
      puVar14 = puVar23 + lVar24 * 0x10;
      do {
        lVar24 = lVar24 + -1;
        func_0x00010ad460c0(puVar14);
        puVar14 = puVar14 + -0x10;
      } while (lVar24 != 0);
    }
    plVar30 = plStack_e0;
    puVar23 = puVar23 + -0x88;
  } while (plVar25 != alStack_528);
  if (plStack_e0 != (long *)0x0) {
    plVar25 = plStack_e0 + 1;
    do {
      lVar24 = *plVar25;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *plVar25 = lVar24 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
    }
  }
  plVar25 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    plVar30 = plStack_b0 + 1;
    do {
      lVar24 = *plVar30;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar10) {
        *plVar30 = lVar24 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  plVar25 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    plVar30 = plStack_c0 + 1;
    do {
      lVar24 = *plVar30;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar10) {
        *plVar30 = lVar24 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  plVar25 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    plVar30 = plStack_d0 + 1;
    do {
      lVar24 = *plVar30;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar10) {
        *plVar30 = lVar24 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  return;
}



/* Entry: 10ad4365c; end: 10ad4374b;  */

void FUN_10ad4365c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a5bd168(param_1,param_2,&uStack_30,&uStack_40,&puStack_58,1);
  FUN_10a22ba60(&puStack_58,uStack_50);
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



/* Entry: 10ad4374c; end: 10ad43893;  */

void FUN_10ad4374c(long *param_1)

{
  long *plVar1;
  float *pfVar2;
  float *pfVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  ulong uVar8;
  float *pfVar9;
  long *plVar10;
  float fVar11;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
  }
  if (*(long *)(lVar5 + 8) == 0) {
    lVar5 = *(long *)(lVar5 + 0x10) + 0x30;
  }
  else {
    lVar5 = *(long *)(lVar5 + 8) + 0x38;
  }
  bVar7 = false;
  uVar6 = 0;
  do {
    uVar8 = 0;
    pfVar9 = (float *)(lVar5 + uVar6 * 0xc);
    do {
      pfVar2 = pfVar9;
      if ((int)uVar8 == 1) {
        pfVar2 = pfVar9 + 1;
      }
      pfVar3 = pfVar9 + 2;
      if ((int)uVar8 != 2) {
        pfVar3 = pfVar2;
      }
      fVar11 = 1.0;
      if (uVar6 != uVar8) {
        fVar11 = 0.0;
      }
      if (1e-06 < ABS(*pfVar3 - fVar11)) {
        if (!bVar7) {
          FUN_10a098ba8(auStack_30,param_1);
          FUN_10a22b994(param_1,auStack_30);
          if (plStack_28 == (long *)0x0) {
            return;
          }
          plVar1 = plStack_28 + 1;
          do {
            lVar5 = *plVar1;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar5 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            plVar10 = plStack_28;
          } while (cVar4 != '\0');
          goto LAB_10ad43868;
        }
        goto LAB_10ad437fc;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != 3);
    uVar8 = uVar6 + 1;
    bVar7 = 1 < uVar6;
    uVar6 = uVar8;
    if (uVar8 == 3) {
LAB_10ad437fc:
      FUN_10a0996a4(auStack_30,param_1);
      FUN_10a22b994(param_1,auStack_30);
      if (plStack_28 == (long *)0x0) {
        return;
      }
      plVar1 = plStack_28 + 1;
      do {
        lVar5 = *plVar1;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar5 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        plVar10 = plStack_28;
      } while (cVar4 != '\0');
LAB_10ad43868:
      if (lVar5 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        return;
      }
      return;
    }
  } while( true );
}



/* Entry: 10ad43894; end: 10ad43fdb;  */

void FUN_10ad43894(undefined8 param_1,long param_2,long param_3,ulong *param_4,undefined8 param_5,
                  long *param_6)

{
  ulong *puVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  long *unaff_x28;
  float fVar22;
  long lVar23;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined1 auStack_118 [8];
  long *plStack_110;
  long *plStack_100;
  long *plStack_f0;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 *apuStack_a8 [7];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = *(long *)(*param_6 + 0xf8);
  FUN_10a296138(auStack_b0,lVar19,&UNK_10f6a703f,0x15);
  plVar13 = (long *)(lVar19 + 0x208);
  if ((((*(char *)(param_2 + 0x61) == '\x01') && (*(char *)(param_2 + 0x60) == '\x01')) &&
      (*(char *)(param_3 + 0xf0) == '\x01')) && (*(double *)(param_3 + 0xe8) == 0.0)) {
    lVar10 = param_2 + 0x38;
    FUN_10ad45b98(lVar10,plVar13);
    if (lVar10 == 0) {
LAB_10ad43998:
      bVar5 = true;
      goto LAB_10ad439c0;
    }
    bVar2 = *(byte *)(lVar10 + 0x3f);
    uVar20 = *(ulong *)(lVar10 + 0x30);
    if (-1 < (char)bVar2) {
      uVar20 = (ulong)bVar2;
    }
    bVar3 = *(byte *)((long)param_4 + 0x17);
    uVar6 = param_4[1];
    if (-1 < (char)bVar3) {
      uVar6 = (ulong)bVar3;
    }
    if (uVar20 != uVar6) goto LAB_10ad43998;
    plVar8 = (long *)*(long *)(lVar10 + 0x28);
    if (-1 < (char)bVar2) {
      plVar8 = (long *)(lVar10 + 0x28);
    }
    puVar1 = (ulong *)*param_4;
    if (-1 < (char)bVar3) {
      puVar1 = param_4;
    }
    _memcmp(plVar8,puVar1);
    if ((int)plVar8 != 0) goto LAB_10ad43998;
    FUN_10a5aad60(*param_6);
    FUN_10ad45c7c(param_1,lVar10 + 0x40);
  }
  else {
    lVar10 = param_2 + 0x38;
    FUN_10ad45b98(lVar10,plVar13);
    if (lVar10 != 0) {
      func_0x00010ad4594c(param_2 + 0x38,lVar10);
    }
    bVar5 = false;
LAB_10ad439c0:
    FUN_10a5a5e28(param_1,*param_6,param_3,param_5);
    if (bVar5) {
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_130,*param_4,param_4[1]);
      }
      else {
        uStack_128 = param_4[1];
        uStack_130 = *param_4;
        uStack_120 = param_4[2];
      }
      FUN_10ad45c7c(auStack_118,param_1);
      plVar8 = (long *)(param_2 + 0x38);
      plVar9 = plVar8;
      func_0x000107c2b05c(plVar8,plVar13);
      plVar21 = *(long **)(param_2 + 0x40);
      if (plVar21 != (long *)0x0) {
        uVar20 = (long)plVar21 - 1;
        if (((ulong)plVar21 & uVar20) == 0) {
          unaff_x28 = (long *)(uVar20 & (ulong)plVar9);
        }
        else {
          unaff_x28 = plVar9;
          if (plVar21 <= plVar9) {
            uVar6 = 0;
            if (plVar21 != (long *)0x0) {
              uVar6 = (ulong)plVar9 / (ulong)plVar21;
            }
            unaff_x28 = (long *)((long)plVar9 - uVar6 * (long)plVar21);
          }
        }
        puVar11 = *(undefined8 **)(*plVar8 + (long)unaff_x28 * 8);
        if (puVar11 != (undefined8 *)0x0) {
          for (plVar18 = (long *)*puVar11; plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
            plVar12 = (long *)plVar18[1];
            if (plVar12 == plVar9) {
              plVar12 = plVar8;
              func_0x000107c2b068(plVar8,plVar18 + 2,plVar13);
              if (((ulong)plVar12 & 1) != 0) goto LAB_10ad43da4;
            }
            else {
              if (((ulong)plVar21 & uVar20) == 0) {
                plVar12 = (long *)((ulong)plVar12 & uVar20);
              }
              else if (plVar21 <= plVar12) {
                uVar6 = 0;
                if (plVar21 != (long *)0x0) {
                  uVar6 = (ulong)plVar12 / (ulong)plVar21;
                }
                plVar12 = (long *)((long)plVar12 - uVar6 * (long)plVar21);
              }
              if (plVar12 != unaff_x28) break;
            }
          }
        }
      }
      plVar18 = (long *)0x90;
      __Znwm();
      uStack_b8 = 0;
      *plVar18 = 0;
      plVar18[1] = (long)plVar9;
      plStack_c8 = plVar18;
      plStack_c0 = plVar8;
      if (*(char *)(lVar19 + 0x21f) < '\0') {
        func_0x000107c3192c(plVar18 + 2,*(undefined8 *)(lVar19 + 0x208),
                            *(undefined8 *)(lVar19 + 0x210));
      }
      else {
        lVar23 = *(long *)(lVar19 + 0x210);
        lVar10 = *plVar13;
        plVar18[4] = *(long *)(lVar19 + 0x218);
        plVar18[3] = lVar23;
        plVar18[2] = lVar10;
      }
      plVar18[0x10] = 0;
      plVar18[0xf] = 0;
      plVar18[0xc] = 0;
      plVar18[0xb] = 0;
      plVar18[0xe] = 0;
      plVar18[0xd] = 0;
      plVar18[0x11] = 0;
      plVar18[8] = 0;
      plVar18[7] = 0;
      plVar18[10] = 0;
      plVar18[9] = 0;
      plVar18[6] = 0;
      plVar18[5] = 0;
      plVar18[0xe] = (long)(plVar18 + 0xf);
      *(undefined1 *)(plVar18 + 0x11) = 1;
      uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
      fVar22 = (float)(*(long *)(param_2 + 0x50) + 1);
      if ((plVar21 == (long *)0x0) || (*(float *)(param_2 + 0x58) * (float)plVar21 < fVar22)) {
        uVar20 = 1;
        if ((long *)0x2 < plVar21) {
          uVar20 = (ulong)(((ulong)plVar21 & (long)plVar21 - 1U) != 0);
        }
        plVar13 = (long *)(uVar20 | (long)plVar21 << 1);
        plVar21 = (long *)(long)(fVar22 / *(float *)(param_2 + 0x58));
        if (plVar13 <= plVar21) {
          plVar13 = plVar21;
        }
        if ((long)plVar13 - 1U == 0) {
          plVar13 = (long *)0x2;
        }
        else if (((ulong)plVar13 & (long)plVar13 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        plVar21 = *(long **)(param_2 + 0x40);
        if (plVar21 < plVar13) {
LAB_10ad43bb8:
          if ((ulong)plVar13 >> 0x3d != 0) goto LAB_10ad43f54;
          lVar19 = (long)plVar13 << 3;
          __Znwm();
          lVar10 = *plVar8;
          *plVar8 = lVar19;
          if (lVar10 != 0) {
            __ZdlPv();
          }
          plVar21 = (long *)0x0;
          *(long **)(param_2 + 0x40) = plVar13;
          do {
            *(undefined8 *)(*plVar8 + (long)plVar21 * 8) = 0;
            plVar21 = (long *)((long)plVar21 + 1);
          } while (plVar13 != plVar21);
          plVar12 = *(long **)(param_2 + 0x48);
          plVar21 = plVar13;
          if (plVar12 != (long *)0x0) {
            plVar14 = (long *)plVar12[1];
            uVar20 = (long)plVar13 - 1;
            if (((ulong)plVar13 & uVar20) == 0) {
              plVar14 = (long *)((ulong)plVar14 & uVar20);
            }
            else if (plVar13 <= plVar14) {
              uVar6 = 0;
              if (plVar13 != (long *)0x0) {
                uVar6 = (ulong)plVar14 / (ulong)plVar13;
              }
              plVar14 = (long *)((long)plVar14 - uVar6 * (long)plVar13);
            }
            *(undefined8 **)(*plVar8 + (long)plVar14 * 8) = (undefined8 *)(param_2 + 0x48);
            plVar15 = (long *)*plVar12;
            while (plVar15 != (long *)0x0) {
              plVar17 = (long *)plVar15[1];
              if (((ulong)plVar13 & uVar20) == 0) {
                plVar17 = (long *)((ulong)plVar17 & uVar20);
              }
              else if (plVar13 <= plVar17) {
                uVar6 = 0;
                if (plVar13 != (long *)0x0) {
                  uVar6 = (ulong)plVar17 / (ulong)plVar13;
                }
                plVar17 = (long *)((long)plVar17 - uVar6 * (long)plVar13);
              }
              plVar16 = plVar15;
              if (plVar17 != plVar14) {
                lVar19 = *plVar8;
                if (*(long *)(lVar19 + (long)plVar17 * 8) == 0) {
                  *(long **)(lVar19 + (long)plVar17 * 8) = plVar12;
                  plVar14 = plVar17;
                }
                else {
                  *plVar12 = *plVar15;
                  *plVar15 = **(undefined8 **)(lVar19 + (long)plVar17 * 8);
                  **(long **)(lVar19 + (long)plVar17 * 8) = (long)plVar15;
                  plVar16 = plVar12;
                }
              }
              plVar12 = plVar16;
              plVar15 = (long *)*plVar16;
            }
          }
        }
        else if (plVar13 < plVar21) {
          plVar12 = (long *)(long)((float)*(ulong *)(param_2 + 0x50) / *(float *)(param_2 + 0x58));
          if ((plVar21 < (long *)0x3) || (((ulong)plVar21 & (long)plVar21 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar12) {
            plVar12 = (long *)(1L << (-LZCOUNT((long)plVar12 + -1) & 0x3fU));
          }
          if (plVar13 <= plVar12) {
            plVar13 = plVar12;
          }
          if (plVar13 < plVar21) {
            if (plVar13 != (long *)0x0) goto LAB_10ad43bb8;
            lVar19 = *plVar8;
            *plVar8 = 0;
            if (lVar19 != 0) {
              __ZdlPv();
            }
            *(undefined8 *)(param_2 + 0x40) = 0;
            plVar21 = (long *)0x0;
          }
          else {
            plVar21 = *(long **)(param_2 + 0x40);
          }
        }
        if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
          unaff_x28 = (long *)((long)plVar21 - 1U & (ulong)plVar9);
        }
        else {
          unaff_x28 = plVar9;
          if (plVar21 <= plVar9) {
            uVar20 = 0;
            if (plVar21 != (long *)0x0) {
              uVar20 = (ulong)plVar9 / (ulong)plVar21;
            }
            unaff_x28 = (long *)((long)plVar9 - uVar20 * (long)plVar21);
          }
        }
      }
      lVar19 = *plVar8;
      plVar13 = *(long **)(lVar19 + (long)unaff_x28 * 8);
      if (plVar13 == (long *)0x0) {
        plVar13 = (long *)(param_2 + 0x48);
        *plVar18 = *plVar13;
        *plVar13 = (long)plVar18;
        *(long **)(lVar19 + (long)unaff_x28 * 8) = plVar13;
        if (*plVar18 != 0) {
          plVar13 = *(long **)(*plVar18 + 8);
          if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
            plVar13 = (long *)((ulong)plVar13 & (long)plVar21 - 1U);
          }
          else if (plVar21 <= plVar13) {
            uVar20 = 0;
            if (plVar21 != (long *)0x0) {
              uVar20 = (ulong)plVar13 / (ulong)plVar21;
            }
            plVar13 = (long *)((long)plVar13 - uVar20 * (long)plVar21);
          }
          *(long **)(*plVar8 + (long)plVar13 * 8) = plVar18;
        }
      }
      else {
        *plVar18 = *plVar13;
        *plVar13 = (long)plVar18;
      }
      *(long *)(param_2 + 0x50) = *(long *)(param_2 + 0x50) + 1;
LAB_10ad43da4:
      if (*(char *)((long)plVar18 + 0x3f) < '\0') {
        __ZdlPv(plVar18[5]);
      }
      plVar18[6] = uStack_128;
      plVar18[5] = uStack_130;
      plVar18[7] = uStack_120;
      uStack_120 = uStack_120 & 0xffffffffffffff;
      uStack_130 = uStack_130 & 0xffffffffffffff00;
      FUN_10a22438c(plVar18 + 8,auStack_118);
      FUN_10a22ba60(auStack_e8,uStack_e0);
      if (plStack_f0 != (long *)0x0) {
        plVar13 = plStack_f0 + 1;
        do {
          lVar19 = *plVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = lVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f0);
        }
      }
      if (plStack_100 != (long *)0x0) {
        plVar13 = plStack_100 + 1;
        do {
          lVar19 = *plVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = lVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_100 + 0x10))(plStack_100);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_100);
        }
      }
      if (plStack_110 != (long *)0x0) {
        plVar13 = plStack_110 + 1;
        do {
          lVar19 = *plVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = lVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_110 + 0x10))(plStack_110);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_110);
        }
      }
      if ((long)uStack_120 < 0) {
        __ZdlPv(uStack_130);
      }
    }
  }
  FUN_10a044790(auStack_b0);
  (*(code *)*apuStack_a8[0])(apuStack_a8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_10ad43f54:
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad43f5c);
  (*pcVar7)();
}



/* Entry: 10ad43fdc; end: 10ad441ef;  */

void FUN_10ad43fdc(long param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  undefined1 uStack_40;
  
  bVar2 = *(byte *)(param_1 + 0x48);
  *(byte *)(param_1 + 0x48) = *(byte *)(param_2 + 9) | bVar2;
  plStack_68 = (long *)param_2[1];
  lStack_70 = *param_2;
  if (param_2[1] != 0) {
    plVar6 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_60 = param_2[2];
  if (lStack_60 == 0) {
    plVar6 = (long *)param_2[1];
    lStack_60 = *param_2;
    plStack_58 = (long *)param_2[1];
  }
  else {
    plVar6 = (long *)param_2[3];
    plStack_58 = plVar6;
  }
  if (plVar6 != (long *)0x0) {
    plVar6 = plVar6 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_48 = (long *)param_2[5];
  lStack_50 = param_2[4];
  if (param_2[5] != 0) {
    plVar6 = (long *)(param_2[5] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_40 = 0;
  FUN_10ad45110(param_1,&lStack_70);
  plVar6 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if ((bVar2 == 0) && ((*(byte *)(param_2 + 9) & 1) != 0)) {
    if (*(char *)(param_1 + 0x80) == '\x01') {
      plVar6 = (long *)(param_1 + (ulong)*(byte *)(param_1 + 0xd0) * 0x10);
      lVar7 = *plVar6;
      if ((lVar7 != 0) && (lVar7 != *(long *)(param_1 + 0x60))) {
        FUN_10a098af4(*(long *)(param_1 + 0x60),lVar7,1);
        if ((*(byte *)(param_1 + 0x80) & 1) == 0) goto LAB_10ad441ec;
        func_0x00010a3df030(plVar6,param_1 + 0x60);
      }
    }
    if (((*(char *)(param_1 + 0xa8) == '\x01') && (lVar7 = *(long *)(param_1 + 0x20), lVar7 != 0))
       && (lVar7 != *(long *)(param_1 + 0x88))) {
      FUN_10a098af4(*(long *)(param_1 + 0x88),lVar7,1);
      if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
LAB_10ad441ec:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10ad441f0);
        (*pcVar5)();
      }
      func_0x00010a3df030(param_1 + 0x20,param_1 + 0x88);
    }
  }
  return;
}



/* Entry: 10ad441f0; end: 10ad442c3;  */

void FUN_10ad441f0(long param_1)

{
  if (*(char *)(param_1 + 600) == '\x01') {
    FUN_10a22b938(param_1 + 0xb0);
    if (*(char *)(param_1 + 0xa8) == '\x01') {
      func_0x00010a09db64(param_1 + 0x88);
    }
    if (*(char *)(param_1 + 0x80) == '\x01') {
      func_0x00010a09db64(param_1 + 0x60);
    }
    func_0x00010a234f7c(param_1 + 0x50);
    func_0x00010a09db64(param_1 + 0x38);
    func_0x00010a09db64(param_1 + 0x20);
    func_0x00010a09db64(param_1 + 0x10);
    func_0x00010a09db64(param_1);
    *(undefined1 *)(param_1 + 600) = 0;
  }
  return;
}



/* Entry: 10ad442c4; end: 10ad4476f;  */

void FUN_10ad442c4(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  undefined1 (*pauVar1) [12];
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  code *pcVar7;
  undefined **ppuVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  float fVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  float fVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar39;
  float fVar40;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined *puStack_3b8;
  long *plStack_3b0;
  undefined1 uStack_220;
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [24];
  undefined1 uStack_1f8;
  undefined8 uStack_1f4;
  undefined8 uStack_1e8;
  undefined1 uStack_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [80];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  float fStack_60;
  undefined1 *puStack_58;
  undefined4 uStack_50;
  undefined1 uStack_41;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  
  lVar13 = *param_2;
  if (*param_3 == 0) {
    lVar12 = param_2[1];
    *param_1 = lVar13;
    param_1[1] = lVar12;
    if (lVar12 != 0) {
      plVar9 = (long *)(lVar12 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    lVar12 = param_3[1];
    *param_1 = *param_3;
    param_1[1] = lVar12;
    if (lVar13 == 0) {
      if (lVar12 != 0) {
        plVar9 = (long *)(lVar12 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    else {
      if (lVar12 != 0) {
        plVar9 = (long *)(lVar12 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if ((param_4 & 1) == 0) {
        FUN_10a098ba8(&puStack_3b8,param_3);
        FUN_10a22b994(param_1,&puStack_3b8);
        if (plStack_3b0 != (long *)0x0) {
          plVar9 = plStack_3b0 + 1;
          do {
            lVar13 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_3b0);
          }
        }
      }
      ppuVar8 = &PTR___tlv_bootstrap_11340de10;
      (*(code *)PTR___tlv_bootstrap_11340de10)();
      puStack_3b8 = &UNK_10f6a7055;
      plStack_3b0 = (long *)0x3c;
      if (*ppuVar8 == (undefined *)0x0) {
        FUN_10a0edfc4(&puStack_3b8);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad4470c);
        (*pcVar7)();
      }
      plVar9 = (long *)*param_1;
      FUN_10a098908();
      plVar9 = (long *)*plVar9;
      (**(code **)(*plVar9 + 0x30))();
      lVar13 = plVar9[3];
      if (*(int *)(lVar13 + 0x734) == 1) {
        plVar9 = (long *)0xbe2;
        _glIsEnabled();
        uStack_41 = (int)plVar9 == 0;
      }
      else {
        uStack_41 = false;
      }
      uVar17 = SUB84(plVar9,0);
      puStack_58 = &uStack_41;
      __ZSt19uncaught_exceptionsv();
      plVar9 = param_2;
      uStack_50 = uVar17;
      FUN_10a099004();
      plVar10 = param_1;
      FUN_10a099004();
      dVar19 = (double)((int)((ulong)plVar10 >> 0x20) * (int)plVar9) /
               (double)((int)plVar10 * (int)((ulong)plVar9 >> 0x20));
      dVar30 = (double)NEON_fminnm(1.0 / dVar19,0x3ff0000000000000);
      dVar19 = (double)NEON_fminnm(dVar19,0x3ff0000000000000);
      fVar18 = (float)dVar30;
      fVar22 = (float)dVar19;
      lVar12 = *(long *)(*param_2 + 8);
      if (lVar12 == 0) {
        puVar11 = (undefined8 *)(*(long *)(*param_2 + 0x10) + 0x30);
      }
      else {
        puVar11 = (undefined8 *)(lVar12 + 0x38);
      }
      fVar29 = (1.0 - fVar18) * 0.5;
      fVar31 = (1.0 - fVar22) * 0.5;
      lVar12 = *(long *)(*param_1 + 8);
      if (lVar12 == 0) {
        pfVar14 = (float *)(*(long *)(*param_1 + 0x10) + 0x30);
      }
      else {
        pfVar14 = (float *)(lVar12 + 0x38);
      }
      fVar32 = pfVar14[2];
      fVar34 = pfVar14[3];
      fVar41 = pfVar14[6];
      fVar36 = pfVar14[7];
      fVar46 = pfVar14[8];
      fVar50 = pfVar14[4];
      fVar49 = pfVar14[5];
      fVar52 = *pfVar14;
      fVar51 = pfVar14[1];
      fVar53 = -(fVar50 * fVar32) + fVar49 * fVar51;
      fVar54 = -(fVar36 * fVar49) + fVar46 * fVar50;
      fVar55 = 1.0 / (-(fVar34 * (-(fVar36 * fVar32) + fVar46 * fVar51)) + fVar54 * fVar52 +
                     fVar53 * fVar41);
      fVar45 = -(fVar41 * fVar50) + fVar36 * fVar34;
      fVar35 = -(fVar34 * fVar46) - -(fVar41 * fVar49);
      fVar42 = fVar45 * fVar55;
      fVar43 = (-(fVar52 * fVar36) - -(fVar41 * fVar51)) * fVar55;
      fVar44 = (-(fVar34 * fVar51) + fVar50 * fVar52) * fVar55;
      fVar45 = fVar45 * fVar55;
      fVar50 = fVar54 * fVar55;
      fVar33 = (-(fVar51 * fVar46) - -(fVar36 * fVar32)) * fVar55;
      fVar53 = fVar53 * fVar55;
      fVar54 = fVar54 * fVar55;
      fVar36 = fVar35 * fVar55;
      fVar39 = (-(fVar41 * fVar32) + fVar46 * fVar52) * fVar55;
      fVar40 = (-(fVar52 * fVar49) - -(fVar34 * fVar32)) * fVar55;
      fVar35 = fVar35 * fVar55;
      fVar34 = fVar42 + fVar36 * fVar31 + fVar50 * fVar29;
      fVar41 = fVar43 + fVar39 * fVar31 + fVar33 * fVar29;
      fVar46 = fVar44 + fVar40 * fVar31 + fVar53 * fVar29;
      fVar49 = fVar36 * fVar22 + fVar50 * 0.0 + fVar42 * 0.0;
      fVar51 = fVar39 * fVar22 + fVar33 * 0.0 + fVar43 * 0.0;
      fVar52 = fVar40 * fVar22 + fVar53 * 0.0 + fVar44 * 0.0;
      fVar36 = fVar36 * 0.0 + fVar50 * fVar18 + fVar42 * 0.0;
      fVar32 = fVar39 * 0.0 + fVar33 * fVar18 + fVar43 * 0.0;
      fVar50 = fVar40 * 0.0 + fVar53 * fVar18 + fVar44 * 0.0;
      fVar53 = (float)puVar11[1];
      fVar33 = (float)*puVar11;
      uVar17 = (undefined4)((ulong)*puVar11 >> 0x20);
      auVar37._0_8_ = puVar11[2];
      auVar37._8_8_ = 0;
      auVar20._4_4_ = uVar17;
      auVar20._0_4_ = uVar17;
      auVar20._8_4_ = uVar17;
      auVar20._12_4_ = uVar17;
      auVar21 = NEON_ext(auVar20,auVar37,4,1);
      fStack_80 = auVar21._0_4_ * fVar49 + fVar33 * fVar36 + fVar53 * fVar34;
      fStack_7c = auVar21._4_4_ * fVar51 + fVar33 * fVar32 + fVar53 * fVar41;
      fStack_78 = auVar21._8_4_ * fVar52 + fVar33 * fVar50 + fVar53 * fVar46;
      fStack_74 = auVar21._12_4_ * (fVar35 * fVar22 + fVar54 * 0.0 + fVar45 * 0.0) +
                  (float)((ulong)puVar11[1] >> 0x20) *
                  (fVar35 * 0.0 + fVar54 * fVar18 + fVar45 * 0.0) +
                  (float)(auVar37._0_8_ >> 0x20) * (fVar45 + fVar35 * fVar31 + fVar54 * fVar29);
      pauVar1 = (undefined1 (*) [12])((long)puVar11 + 0x14);
      uVar15 = *(undefined8 *)((long)puVar11 + 0x1c);
      fVar33 = (float)uVar15;
      uVar17 = (undefined4)((ulong)uVar15 >> 0x20);
      fVar45 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      auVar47._4_4_ = fVar33;
      auVar47._0_4_ = (float)auVar37._0_8_;
      auVar47._8_8_ = 0;
      auVar21 = NEON_rev64(auVar47,4);
      auVar48._12_4_ = uVar17;
      auVar48._0_12_ = *pauVar1;
      auVar4._12_4_ = uVar17;
      auVar4._0_12_ = *pauVar1;
      auVar38 = NEON_ext(auVar48,auVar4,4,1);
      fVar18 = auVar38._12_4_;
      auVar5._4_4_ = fVar45;
      auVar5._0_4_ = *(float *)((long)puVar11 + 0xc);
      auVar5._8_4_ = fVar33;
      auVar5._12_4_ = uVar17;
      auVar48 = NEON_rev64(auVar5,4);
      fStack_60 = *(float *)((long)puVar11 + 0x1c) * fVar52 + *(float *)(puVar11 + 3) * fVar50 +
                  *(float *)(puVar11 + 4) * fVar46;
      fVar22 = fVar49 * auVar21._0_4_ + auVar48._0_4_ * fVar36 + auVar38._8_4_ * fVar34;
      fVar29 = fVar51 * (float)auVar37._0_8_ + *(float *)((long)puVar11 + 0xc) * fVar32 +
               fVar18 * fVar41;
      fVar31 = fVar52 * auVar21._4_4_ + auVar48._4_4_ * fVar50 + fVar18 * fVar46;
      fVar18 = fVar51 * fVar33 + fVar45 * fVar32 +
               (float)(CONCAT17((char)((ulong)uVar15 >> 0x38),
                                CONCAT16((char)((ulong)uVar15 >> 0x30),
                                         CONCAT15((char)((ulong)uVar15 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar15 >> 0x20),fVar18))))
                      >> 0x20) * fVar41;
      auVar21._4_4_ = fVar29;
      auVar21._0_4_ = fVar22;
      auVar21._8_4_ = fVar31;
      auVar21._12_4_ = fVar18;
      auVar38._4_4_ = fVar29;
      auVar38._0_4_ = fVar22;
      auVar38._8_4_ = fVar31;
      auVar38._12_4_ = fVar18;
      auVar21 = NEON_ext(auVar21,auVar38,0xc,1);
      auVar23._0_8_ = auVar21._4_8_ << 0x20;
      auVar23._12_4_ = auVar21._12_4_;
      auVar23._8_4_ = fVar29;
      auVar6._4_8_ = auVar23._8_8_;
      auVar6._0_4_ = auVar21._0_4_;
      auVar24._0_12_ = auVar6 << 0x20;
      uVar17 = auVar21._4_4_;
      auVar24._12_4_ = uVar17;
      auVar25._4_12_ = auVar24._4_12_;
      auVar25._0_4_ = fVar29;
      auVar27._0_8_ = auVar25._0_8_;
      auVar27._8_4_ = uVar17;
      auVar27._12_4_ = uVar17;
      auVar26._8_8_ = auVar27._8_8_;
      auVar26._0_8_ = CONCAT44(fVar31,fVar29);
      auVar28._0_12_ = auVar26._0_12_;
      auVar28._12_4_ = fVar18;
      uStack_68 = auVar28._8_8_;
      uStack_70 = auVar26._0_8_;
      FUN_10a0e3e64(auStack_218,lVar13);
      uStack_f0 = 1;
      uStack_1f8 = 1;
      uStack_1e8 = 0x100000009;
      uStack_1f4 = 0x100000009;
      puVar11 = (undefined8 *)*param_2;
      FUN_10a098908();
      uVar15 = *puVar11;
      puVar11 = (undefined8 *)*param_1;
      FUN_10a098908();
      uVar16 = *puVar11;
      FUN_10a156fa0(&puStack_3b8,auStack_218);
      uStack_220 = 1;
      func_0x00010a0e3828(uVar15,uVar16,&fStack_80,&puStack_3b8);
      FUN_10a09d158(&puStack_3b8);
      puStack_3b8 = auStack_d0;
      FUN_10a09d1bc(&puStack_3b8);
      puStack_3b8 = auStack_e8;
      FUN_10a09d284(&puStack_3b8);
      puStack_3b8 = auStack_210;
      func_0x00010a09d2f4(&puStack_3b8);
      func_0x00010ad45e64(&puStack_58);
    }
  }
  return;
}



/* Entry: 10ad44770; end: 10ad44cb3;  */

void FUN_10ad44770(long param_1,long *param_2,undefined8 *param_3,long *param_4,undefined8 *param_5)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  int *piVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float *pfVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  undefined *puVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  uint uStack_218;
  undefined1 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  if ((bRam00000001138367d0 & 1) == 0) {
    pbVar5 = (byte *)0x113836510;
    FUN_10ad0621c();
    if ((*pbVar5 >> 6 & 1) == 0) {
      piVar6 = (int *)0x113836510;
      FUN_10ad0621c();
      if (*piVar6 == 0) {
        uVar14 = *(undefined8 *)(param_1 + 8);
        lVar12 = *(long *)(*param_4 + 8);
        if (lVar12 == 0) {
          puVar10 = (undefined8 *)(*(long *)(*param_4 + 0x10) + 0x10);
        }
        else {
          puVar10 = (undefined8 *)(lVar12 + 8);
        }
        plVar16 = (long *)*puVar10;
        plVar15 = plVar16;
        (**(code **)(*plVar16 + 0x28))();
        uVar3 = (uint)plVar15;
        if (uVar3 < 2) {
          uVar3 = 1;
        }
        (**(code **)(*plVar16 + 0x30))();
        uVar4 = (uint)plVar16;
        if (uVar4 < 2) {
          uVar4 = 1;
        }
        puStack_240 = (undefined *)CONCAT44(uVar4,uVar3);
        FUN_10ad44cb4(uVar14,&puStack_240);
        uStack_80 = 0;
        uStack_78 = 0;
        fStack_68 = (float)((uint)fStack_68 & 0xffffff00);
        fStack_70 = 0.0;
        fStack_6c = 0.0;
        if (*(char *)(*(long *)(param_1 + 8) + 0x62) == '\x01') {
          ppuVar7 = &PTR___tlv_bootstrap_11340de10;
          (*(code *)PTR___tlv_bootstrap_11340de10)();
          lVar12 = *(long *)(*param_4 + 8);
          if (lVar12 == 0) {
            puVar10 = (undefined8 *)(*(long *)(*param_4 + 0x10) + 0x10);
          }
          else {
            puVar10 = (undefined8 *)(lVar12 + 8);
          }
          puVar17 = *ppuVar7;
          plVar16 = (long *)*puVar10;
          plVar15 = plVar16;
          (**(code **)(*plVar16 + 0x28))();
          uVar3 = (uint)plVar15;
          if (uVar3 < 2) {
            uVar3 = 1;
          }
          (**(code **)(*plVar16 + 0x30))(plVar16);
          lVar12 = *(long *)(*param_4 + 8);
          if (lVar12 == 0) {
            puVar10 = (undefined8 *)(*(long *)(*param_4 + 0x10) + 0x10);
          }
          else {
            puVar10 = (undefined8 *)(lVar12 + 8);
          }
          plVar15 = (long *)*puVar10;
          (**(code **)(*plVar15 + 0x28))(plVar15);
          (**(code **)(*plVar15 + 0x30))();
          uVar4 = (uint)plVar15;
          if (uVar4 < 2) {
            uVar4 = 1;
          }
          lVar12 = *(long *)(puVar17 + 0x10);
          puStack_240 = &UNK_10f635282;
          uStack_238 = 0x2b;
          if (lVar12 == 0) {
            FUN_10a0edfc4(&puStack_240);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad44c84);
            (*pcVar2)();
          }
          FUN_10ab9c9b0(&puStack_240,plVar16,0,0);
          uVar8 = 0x8ca9;
          if (uStack_218 < 2) {
            uVar8 = 0x8d40;
          }
          FUN_10ab9cbe8(&fStack_a0,lVar12 + 0x50,uVar8,&puStack_240,0,CONCAT44(uVar4,uVar3),0);
          FUN_10ab9b224(&uStack_80,&fStack_a0);
          FUN_10ab9ce18(&fStack_a0);
        }
        else {
          lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x78);
          _glBindFramebuffer(0x8d40,*(undefined4 *)(lVar12 + 0x10));
          _glViewport(0,0,*(undefined4 *)(lVar12 + 8),*(undefined4 *)(lVar12 + 0xc));
          lVar13 = *(long *)(*(long *)(param_1 + 8) + 0x78);
          lVar12 = *param_4;
          FUN_10a0988c8();
          *(int *)(lVar13 + 0x14) = (int)lVar12;
          *(undefined4 *)(lVar13 + 0x1c) = 0xde1;
          *(undefined1 *)(lVar13 + 0x30) = 0;
          _glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,lVar12,0);
        }
        fStack_230 = (float)param_5[2];
        fStack_22c = (float)((ulong)param_5[2] >> 0x20);
        fStack_228 = (float)param_5[3];
        fStack_224 = (float)((ulong)param_5[3] >> 0x20);
        fVar18 = (float)*param_5;
        fVar19 = (float)((ulong)*param_5 >> 0x20);
        fVar21 = (float)param_5[1];
        fVar22 = (float)((ulong)param_5[1] >> 0x20);
        auVar20 = NEON_fmov(0xbf800000,4);
        puStack_240 = (undefined *)
                      CONCAT44(fVar19 + fVar19 + auVar20._4_4_,fVar18 + fVar18 + auVar20._0_4_);
        uStack_238 = CONCAT44(fVar22 + fVar22 + auVar20._12_4_,fVar21 + fVar21 + auVar20._8_4_);
        _fStack_228 = CONCAT44(fStack_224 + fStack_224 + auVar20._12_4_,
                               fStack_228 + fStack_228 + auVar20._8_4_);
        _fStack_230 = CONCAT44(fStack_22c + fStack_22c + auVar20._4_4_,
                               fStack_230 + fStack_230 + auVar20._0_4_);
        fStack_88 = (float)param_3[3];
        fStack_84 = (float)((ulong)param_3[3] >> 0x20);
        fStack_90 = (float)param_3[2];
        fStack_8c = (float)((ulong)param_3[2] >> 0x20);
        lVar12 = *(long *)(*param_2 + 8);
        if (lVar12 == 0) {
          pfVar11 = (float *)(*(long *)(*param_2 + 0x10) + 0x30);
        }
        else {
          pfVar11 = (float *)(lVar12 + 0x38);
        }
        fStack_a0 = (float)*param_3;
        fStack_9c = (float)((ulong)*param_3 >> 0x20);
        fStack_98 = (float)param_3[1];
        fStack_94 = (float)((ulong)param_3[1] >> 0x20);
        fVar23 = pfVar11[6];
        uVar14 = *(undefined8 *)(pfVar11 + 6);
        fVar26 = pfVar11[3];
        fVar24 = pfVar11[4];
        fVar27 = *pfVar11;
        fVar25 = pfVar11[1];
        fVar18 = fStack_90 * fVar25;
        fVar19 = fStack_88 * fVar25;
        fVar21 = (float)uVar14;
        fStack_90 = fVar21 + fStack_8c * fVar26 + fStack_90 * fVar27;
        fVar22 = (float)((ulong)uVar14 >> 0x20);
        fStack_8c = fVar22 + fStack_8c * fVar24 + fVar18;
        fStack_88 = fVar23 + fStack_84 * fVar26 + fStack_88 * fVar27;
        fStack_84 = pfVar11[7] + fStack_84 * fVar24 + fVar19;
        _fStack_98 = CONCAT44(pfVar11[7] + fStack_94 * fVar24 + fStack_98 * fVar25,
                              fVar23 + fStack_94 * fVar26 + fStack_98 * fVar27);
        _fStack_a0 = CONCAT44(fVar22 + fStack_9c * fVar24 + fStack_a0 * fVar25,
                              fVar21 + fStack_9c * fVar26 + fStack_a0 * fVar27);
        FUN_10a0988c8();
        FUN_10ad4b940(0);
        FUN_10a301788();
        if (*(char *)(*(long *)(param_1 + 8) + 0x62) == '\x01') {
          uStack_258 = 0;
          uStack_260 = 0;
          uStack_248 = 0;
          uStack_250 = 0;
          FUN_10ab9b224(&uStack_80,&uStack_260);
          FUN_10ab9ce18(&uStack_260);
        }
        else {
          func_0x00010a301a5c(*(undefined8 *)(*(long *)(param_1 + 8) + 0x78),0x8d40);
          func_0x00010a301a24(*(undefined8 *)(*(long *)(param_1 + 8) + 0x78),0x8d40);
        }
        FUN_10ab9ce18(&uStack_80);
        return;
      }
    }
  }
  uVar14 = *(undefined8 *)(param_1 + 8);
  lVar12 = *(long *)(*param_4 + 8);
  if (lVar12 == 0) {
    puVar10 = (undefined8 *)(*(long *)(*param_4 + 0x10) + 0x10);
  }
  else {
    puVar10 = (undefined8 *)(lVar12 + 8);
  }
  plVar16 = (long *)*puVar10;
  plVar15 = plVar16;
  (**(code **)(*plVar16 + 0x28))();
  uVar3 = (uint)plVar15;
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  (**(code **)(*plVar16 + 0x30))();
  uVar4 = (uint)plVar16;
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  puStack_240 = (undefined *)CONCAT44(uVar4,uVar3);
  FUN_10ad44cb4(uVar14,&puStack_240);
  fStack_68 = (float)param_5[3];
  fStack_64 = (float)((ulong)param_5[3] >> 0x20);
  fStack_70 = (float)param_5[2];
  fStack_6c = (float)((ulong)param_5[2] >> 0x20);
  fVar18 = (float)*param_5;
  fVar19 = (float)((ulong)*param_5 >> 0x20);
  fVar21 = (float)param_5[1];
  fVar22 = (float)((ulong)param_5[1] >> 0x20);
  auVar20 = NEON_fmov(0xbf800000,4);
  uStack_80 = CONCAT44(fVar19 + fVar19 + auVar20._4_4_,fVar18 + fVar18 + auVar20._0_4_);
  uStack_78 = CONCAT44(fVar22 + fVar22 + auVar20._12_4_,fVar21 + fVar21 + auVar20._8_4_);
  fStack_88 = (float)param_3[3];
  fStack_84 = (float)((ulong)param_3[3] >> 0x20);
  fStack_90 = (float)param_3[2];
  fStack_8c = (float)((ulong)param_3[2] >> 0x20);
  lVar12 = *param_2;
  lVar13 = *(long *)(lVar12 + 8);
  if (lVar13 == 0) {
    pfVar11 = (float *)(*(long *)(lVar12 + 0x10) + 0x30);
  }
  else {
    pfVar11 = (float *)(lVar13 + 0x38);
  }
  fStack_a0 = (float)*param_3;
  fStack_9c = (float)((ulong)*param_3 >> 0x20);
  fStack_98 = (float)param_3[1];
  fStack_94 = (float)((ulong)param_3[1] >> 0x20);
  fVar21 = pfVar11[6];
  uVar14 = *(undefined8 *)(pfVar11 + 6);
  fVar23 = pfVar11[3];
  fVar22 = pfVar11[4];
  fVar26 = *pfVar11;
  fVar24 = pfVar11[1];
  fVar18 = (float)uVar14;
  fVar19 = (float)((ulong)uVar14 >> 0x20);
  _fStack_98 = CONCAT44(pfVar11[7] + fStack_94 * fVar22 + fStack_98 * fVar24,
                        fVar21 + fStack_94 * fVar23 + fStack_98 * fVar26);
  _fStack_a0 = CONCAT44(fVar19 + fStack_9c * fVar22 + fStack_a0 * fVar24,
                        fVar18 + fStack_9c * fVar23 + fStack_a0 * fVar26);
  auVar1._4_4_ = fStack_6c + fStack_6c + auVar20._4_4_;
  auVar1._0_4_ = fStack_70 + fStack_70 + auVar20._0_4_;
  auVar1._8_4_ = fStack_68 + fStack_68 + auVar20._8_4_;
  auVar1._12_4_ = fStack_64 + fStack_64 + auVar20._12_4_;
  auVar20 = NEON_ext(auVar1,auVar1,8,1);
  fStack_68 = auVar20._8_4_;
  fStack_64 = auVar20._12_4_;
  fStack_70 = auVar20._0_4_;
  fStack_6c = auVar20._4_4_;
  auVar20._4_4_ = fVar19 + fStack_8c * fVar22 + fStack_90 * fVar24;
  auVar20._0_4_ = fVar18 + fStack_8c * fVar23 + fStack_90 * fVar26;
  auVar20._8_4_ = fVar21 + fStack_84 * fVar23 + fStack_88 * fVar26;
  auVar20._12_4_ = pfVar11[7] + fStack_84 * fVar22 + fStack_88 * fVar24;
  auVar20 = NEON_ext(auVar20,auVar20,8,1);
  fStack_88 = auVar20._8_4_;
  fStack_84 = auVar20._12_4_;
  fStack_90 = auVar20._0_4_;
  fStack_8c = auVar20._4_4_;
  if (lVar13 == 0) {
    puVar10 = (undefined8 *)(*(long *)(lVar12 + 0x10) + 0x10);
  }
  else {
    puVar10 = (undefined8 *)(lVar13 + 8);
  }
  lVar12 = *(long *)(*param_4 + 8);
  if (lVar12 == 0) {
    puVar9 = (undefined8 *)(*(long *)(*param_4 + 0x10) + 0x10);
  }
  else {
    puVar9 = (undefined8 *)(lVar12 + 8);
  }
  puStack_240 = (undefined *)((ulong)puStack_240 & 0xffffffffffffff00);
  uStack_a8 = 0;
  func_0x00010a0e3c04(*puVar10,*puVar9,&fStack_a0,4,&uStack_80,4,1,&puStack_240);
  FUN_10a09d158(&puStack_240);
  return;
}



/* Entry: 10ad44cb4; end: 10ad44d9b;  */

void FUN_10ad44cb4(long param_1,uint *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uStack_30;
  long *plStack_28;
  
  if (((bRam00000001138367d0 & 1) == 0) && ((*(byte *)(param_1 + 0x62) & 1) == 0)) {
    lVar6 = *(long *)(param_1 + 0x78);
    if ((lVar6 == 0) || (*param_2 != *(uint *)(lVar6 + 8) || param_2[1] != *(uint *)(lVar6 + 0xc)))
    {
      uVar4 = (ulong)*param_2;
      FUN_10a301918(uVar4,param_2[1],0);
      plVar5 = (long *)0x20;
      uStack_30 = uVar4;
      __Znwm();
      *plVar5 = (long)&PTR_FUN_110ba08f8;
      plVar5[1] = 0;
      plVar5[2] = 0;
      plVar5[3] = uVar4;
      plStack_28 = plVar5;
      func_0x00010ad458e8((long *)(param_1 + 0x78),&uStack_30);
      plVar5 = plStack_28;
      if (plStack_28 != (long *)0x0) {
        plVar1 = plStack_28 + 1;
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
          (**(code **)(*plStack_28 + 0x10))(plStack_28);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
  }
  return;
}



/* Entry: 10ad44d9c; end: 10ad44f03;  */

void FUN_10ad44d9c(long param_1)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  FUN_10a5bbb4c(*(long *)(param_1 + 8) + 0x120);
  lVar3 = *(long *)(param_1 + 8);
  plVar5 = *(long **)(lVar3 + 0xa8);
  if (plVar5 != (long *)(lVar3 + 0xb0)) {
    do {
      if ((plVar5[5] != 0) && (lVar4 = *(long *)(plVar5[5] + 0xf8), lVar4 != 0)) {
        FUN_10a5bbb4c(lVar4 + 0x250,*(long *)(param_1 + 8) + 0x120);
      }
      plVar1 = (long *)plVar5[1];
      plVar6 = plVar5;
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar6[2];
          bVar2 = (long *)*plVar5 != plVar6;
          plVar6 = plVar5;
        } while (bVar2);
      }
      else {
        do {
          plVar5 = plVar1;
          plVar1 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
    } while (plVar5 != (long *)(lVar3 + 0xb0));
    lVar3 = *(long *)(param_1 + 8);
  }
  plVar5 = *(long **)(lVar3 + 0xd8);
  while (plVar5 != (long *)(lVar3 + 0xe0)) {
    if ((plVar5[5] != 0) && (lVar4 = *(long *)(plVar5[5] + 0xf8), lVar4 != 0)) {
      FUN_10a5bbb4c(lVar4 + 0x250,*(long *)(param_1 + 8) + 0x120);
    }
    plVar1 = (long *)plVar5[1];
    plVar6 = plVar5;
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar6[2];
        bVar2 = (long *)*plVar5 != plVar6;
        plVar6 = plVar5;
      } while (bVar2);
    }
    else {
      do {
        plVar5 = plVar1;
        plVar1 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10ad44f04; end: 10ad44f67;  */

undefined8 * FUN_10ad44f04(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10ad44f68; end: 10ad4506f;  */

void FUN_10ad44f68(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = lVar2 + 0xc0;
  FUN_10ad47a58();
  if (lVar2 + 200 != lVar1) {
    lVar1 = *(long *)(lVar1 + 0x38);
    uVar4 = param_3[1];
    uVar3 = *param_3;
    uVar6 = param_3[3];
    uVar5 = param_3[2];
    *(undefined1 *)(lVar1 + 0x180) = *(undefined1 *)(param_3 + 4);
    *(undefined8 *)(lVar1 + 0x168) = uVar4;
    *(undefined8 *)(lVar1 + 0x160) = uVar3;
    *(undefined8 *)(lVar1 + 0x178) = uVar6;
    *(undefined8 *)(lVar1 + 0x170) = uVar5;
  }
  lVar1 = lVar2 + 0xf0;
  FUN_10ad47a58(lVar1,param_2);
  if (lVar2 + 0xf8 != lVar1) {
    lVar1 = *(long *)(lVar1 + 0x38);
    uVar4 = param_3[1];
    uVar3 = *param_3;
    uVar6 = param_3[3];
    uVar5 = param_3[2];
    *(undefined1 *)(lVar1 + 0x180) = *(undefined1 *)(param_3 + 4);
    *(undefined8 *)(lVar1 + 0x168) = uVar4;
    *(undefined8 *)(lVar1 + 0x160) = uVar3;
    *(undefined8 *)(lVar1 + 0x178) = uVar6;
    *(undefined8 *)(lVar1 + 0x170) = uVar5;
  }
  return;
}



/* Entry: 10ad45070; end: 10ad4509f;  */

bool FUN_10ad45070(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uStack_24;
  
  lVar2 = *(long *)(param_1 + 8) + 0x178;
  lVar1 = *(long *)(param_1 + 8) + 0x1a0;
  uStack_24 = param_2;
  __ZNSt3__119__shared_mutex_base11lock_sharedEv(lVar1);
  FUN_10ad3db74(lVar2,&uStack_24);
  __ZNSt3__119__shared_mutex_base13unlock_sharedEv(lVar1);
  return lVar2 != 0;
}



/* Entry: 10ad450a0; end: 10ad4510f;  */

/* WARNING: Possible PIC construction at 0x00010ad450c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ad450ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ad450fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ad450f0) */
/* WARNING: Removing unreachable block (ram,0x00010ad45100) */

long FUN_10ad450a0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a22b938(param_1 + 0xb0);
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    param_1 = param_1 + 0x88;
  }
  else {
    if (*(char *)(param_1 + 0x80) == '\x01') {
      func_0x00010a09db64(param_1 + 0x60);
    }
    func_0x00010a234f7c(param_1 + 0x50);
    param_1 = param_1 + 0x38;
  }
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



/* Entry: 10ad45110; end: 10ad4519b;  */

/* WARNING: Possible PIC construction at 0x00010ad45128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ad45144: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ad4512c) */
/* WARNING: Removing unreachable block (ram,0x00010ad45148) */
/* WARNING: Removing unreachable block (ram,0x00010ad45170) */
/* WARNING: Removing unreachable block (ram,0x00010ad45184) */
/* WARNING: Removing unreachable block (ram,0x00010ad45160) */

undefined8 * FUN_10ad45110(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10ad4519c; end: 10ad453eb;  */

undefined8 * FUN_10ad4519c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uStack_41;
  
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar5 = param_2[3];
  uVar6 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar5 = param_2[5];
  uVar6 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar2 = *(undefined1 *)(param_2 + 6);
  lVar5 = param_2[8];
  uVar6 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar6;
  *(undefined1 *)(param_1 + 6) = uVar2;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
  lVar5 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (*(char *)(param_2 + 0x10) == '\x01') {
    lVar5 = param_2[0xd];
    uVar6 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar6;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar6 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar6;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  if (*(char *)(param_2 + 0x15) == '\x01') {
    lVar5 = param_2[0x12];
    uVar6 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar6;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar6 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar6;
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  FUN_10ad3e320(param_1 + 0x16,param_2 + 0x16,&uStack_41);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  param_1[0x1b] = &PTR_DAT_110ba5598;
  uVar6 = param_2[0x1d];
  uVar2 = *(undefined1 *)(param_2 + 0x1e);
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x1e) = uVar2;
  param_1[0x1d] = uVar6;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  if (*(char *)(param_2 + 0x4a) == '\x01') {
    func_0x00010a5bdc68(param_1 + 0x1f,param_2 + 0x1f);
    *(undefined1 *)(param_1 + 0x4a) = 1;
  }
  return param_1;
}



/* Entry: 10ad453ec; end: 10ad45487;  */

void FUN_10ad453ec(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    FUN_10a22b1b4(param_1,param_4);
    puVar4 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar5 = param_2[1];
      uVar6 = *param_2;
      puVar4[1] = param_2[1];
      *puVar4 = uVar6;
      if (lVar5 != 0) {
        plVar1 = (long *)(lVar5 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar4 = puVar4 + 2;
    }
    *(undefined8 **)(param_1 + 8) = puVar4;
  }
  return;
}



/* Entry: 10ad45488; end: 10ad4549b;  */

undefined1  [16] FUN_10ad45488(undefined8 param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  plVar2 = (long *)&UNK_10f6a7038;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm(lVar3);
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = lVar3;
    return auVar12;
  }
  func_0x000109ffded8();
  plVar5 = (long *)plVar2[1];
  if (plVar5 < (long *)plVar2[2]) {
    lVar3 = *param_2;
    plVar10 = plVar5 + 2;
    plVar5[1] = param_2[1];
    *plVar5 = lVar3;
    *param_2 = 0;
    param_2[1] = 0;
    plVar5 = plVar2;
LAB_10ad45594:
    plVar2[1] = (long)plVar10;
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = plVar5;
    return auVar13;
  }
  lVar3 = (long)plVar5 - *plVar2;
  uVar1 = (lVar3 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar7 = plVar2[2] - *plVar2;
    uVar8 = (long)uVar7 >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar8 = 0xfffffffffffffff;
    }
    if (uVar8 >> 0x3c == 0) {
      lVar4 = uVar8 << 4;
      __Znwm();
      plVar5 = (long *)(lVar4 + lVar3);
      lVar11 = param_2[1];
      lVar3 = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
      plVar6 = (long *)*plVar2;
      plVar9 = (long *)((long)plVar5 - (plVar2[1] - (long)plVar6));
      plVar10 = plVar5 + 2;
      plVar5[1] = lVar11;
      *plVar5 = lVar3;
      plVar5 = plVar9;
      param_2 = plVar6;
      _memcpy(plVar9,plVar6);
      *plVar2 = (long)plVar9;
      plVar2[1] = (long)plVar10;
      plVar2[2] = lVar4 + uVar8 * 0x10;
      if (plVar6 != (long *)0x0) {
        __ZdlPv(plVar6);
        plVar5 = plVar6;
      }
      goto LAB_10ad45594;
    }
  }
  else {
    FUN_10ad455b4();
  }
  func_0x000109ffded8();
  plVar2 = (long *)&UNK_10f6a7038;
  FUN_109ffde64();
  plVar5 = param_2;
  for (; plVar2 != param_2; plVar2 = plVar2 + 2) {
    lVar11 = plVar2[1];
    lVar4 = *plVar2;
    *plVar2 = 0;
    plVar2[1] = 0;
    lVar3 = param_3[1];
    param_3[1] = lVar11;
    *param_3 = lVar4;
    if (lVar3 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    param_3 = param_3 + 2;
  }
  auVar14._8_8_ = plVar5;
  auVar14._0_8_ = param_3;
  return auVar14;
}



/* Entry: 10ad4549c; end: 10ad454cf;  */

undefined1  [16] FUN_10ad4549c(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = lVar2;
    return auVar11;
  }
  func_0x000109ffded8();
  plVar5 = (long *)param_1[1];
  if (plVar5 < (long *)param_1[2]) {
    lVar2 = *param_2;
    plVar9 = plVar5 + 2;
    plVar5[1] = param_2[1];
    *plVar5 = lVar2;
    *param_2 = 0;
    param_2[1] = 0;
    plVar5 = param_1;
LAB_10ad45594:
    param_1[1] = (long)plVar9;
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = plVar5;
    return auVar12;
  }
  lVar2 = (long)plVar5 - *param_1;
  uVar1 = (lVar2 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 3;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar7 = 0xfffffffffffffff;
    }
    if (uVar7 >> 0x3c == 0) {
      lVar3 = uVar7 << 4;
      __Znwm();
      plVar5 = (long *)(lVar3 + lVar2);
      lVar10 = param_2[1];
      lVar2 = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
      plVar4 = (long *)*param_1;
      plVar8 = (long *)((long)plVar5 - (param_1[1] - (long)plVar4));
      plVar9 = plVar5 + 2;
      plVar5[1] = lVar10;
      *plVar5 = lVar2;
      plVar5 = plVar8;
      param_2 = plVar4;
      _memcpy(plVar8,plVar4);
      *param_1 = (long)plVar8;
      param_1[1] = (long)plVar9;
      param_1[2] = lVar3 + uVar7 * 0x10;
      if (plVar4 != (long *)0x0) {
        __ZdlPv(plVar4);
        plVar5 = plVar4;
      }
      goto LAB_10ad45594;
    }
  }
  else {
    FUN_10ad455b4();
  }
  func_0x000109ffded8();
  plVar5 = (long *)&UNK_10f6a7038;
  FUN_109ffde64();
  plVar4 = param_2;
  for (; plVar5 != param_2; plVar5 = plVar5 + 2) {
    lVar10 = plVar5[1];
    lVar3 = *plVar5;
    *plVar5 = 0;
    plVar5[1] = 0;
    lVar2 = param_3[1];
    param_3[1] = lVar10;
    *param_3 = lVar3;
    if (lVar2 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    param_3 = param_3 + 2;
  }
  auVar13._8_8_ = plVar4;
  auVar13._0_8_ = param_3;
  return auVar13;
}



/* Entry: 10ad454d0; end: 10ad455b3;  */

long * FUN_10ad454d0(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  plVar4 = (long *)param_1[1];
  if (plVar4 < (long *)param_1[2]) {
    lVar7 = *param_2;
    plVar9 = plVar4 + 2;
    plVar4[1] = param_2[1];
    *plVar4 = lVar7;
    *param_2 = 0;
    param_2[1] = 0;
    plVar4 = param_1;
LAB_10ad45594:
    param_1[1] = (long)plVar9;
    return plVar4;
  }
  lVar7 = (long)plVar4 - *param_1;
  uVar1 = (lVar7 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 3;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar6 = 0xfffffffffffffff;
    }
    if (uVar6 >> 0x3c == 0) {
      lVar2 = uVar6 << 4;
      __Znwm();
      plVar4 = (long *)(lVar2 + lVar7);
      lVar10 = param_2[1];
      lVar7 = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
      plVar3 = (long *)*param_1;
      plVar8 = (long *)((long)plVar4 - (param_1[1] - (long)plVar3));
      plVar9 = plVar4 + 2;
      plVar4[1] = lVar10;
      *plVar4 = lVar7;
      plVar4 = plVar8;
      _memcpy(plVar8,plVar3);
      *param_1 = (long)plVar8;
      param_1[1] = (long)plVar9;
      param_1[2] = lVar2 + uVar6 * 0x10;
      if (plVar3 != (long *)0x0) {
        __ZdlPv(plVar3);
        plVar4 = plVar3;
      }
      goto LAB_10ad45594;
    }
  }
  else {
    FUN_10ad455b4();
  }
  func_0x000109ffded8();
  plVar4 = (long *)&UNK_10f6a7038;
  FUN_109ffde64();
  for (; plVar4 != param_2; plVar4 = plVar4 + 2) {
    lVar10 = plVar4[1];
    lVar2 = *plVar4;
    *plVar4 = 0;
    plVar4[1] = 0;
    lVar7 = param_3[1];
    param_3[1] = lVar10;
    *param_3 = lVar2;
    if (lVar7 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    param_3 = param_3 + 2;
  }
  return param_3;
}



/* Entry: 10ad455b4; end: 10ad455c7;  */

undefined8 * FUN_10ad455b4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)&UNK_10f6a7038;
  FUN_109ffde64();
  for (; puVar1 != param_2; puVar1 = puVar1 + 2) {
    uVar4 = puVar1[1];
    uVar3 = *puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    lVar2 = param_3[1];
    param_3[1] = uVar4;
    *param_3 = uVar3;
    if (lVar2 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    param_3 = param_3 + 2;
  }
  return param_3;
}



/* Entry: 10ad455c8; end: 10ad45627;  */

undefined8 * FUN_10ad455c8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    uVar3 = param_1[1];
    uVar2 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    lVar1 = param_3[1];
    param_3[1] = uVar3;
    *param_3 = uVar2;
    if (lVar1 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    param_3 = param_3 + 2;
  }
  return param_3;
}



/* Entry: 10ad45628; end: 10ad456ff;  */

undefined8 * FUN_10ad45628(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10ad45700; end: 10ad45817;  */

long * FUN_10ad45700(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 < (undefined8 *)param_1[2]) {
    lVar8 = param_2[1];
    uVar12 = *param_2;
    puVar11[1] = param_2[1];
    *puVar11 = uVar12;
    if (lVar8 != 0) {
      plVar6 = (long *)(lVar8 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = *plVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar11 = puVar11 + 2;
    plVar6 = param_1;
  }
  else {
    lVar8 = (long)puVar11 - *param_1;
    uVar1 = (lVar8 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a22b1ec();
      lVar8 = param_1[1];
      lVar7 = param_1[2];
      while (lVar7 != lVar8) {
        param_1[2] = lVar7 + -0x10;
        FUN_10a22b2a4();
        lVar7 = param_1[2];
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    uVar9 = param_1[2] - *param_1;
    uVar10 = (long)uVar9 >> 3;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7fffffffffffffef < uVar9) {
      uVar10 = 0xfffffffffffffff;
    }
    plVar6 = param_1;
    plStack_38 = param_1;
    FUN_10a22b200();
    puVar3 = (undefined8 *)((long)plVar6 + lVar8);
    lVar8 = param_2[1];
    uVar12 = *param_2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar12;
    if (lVar8 != 0) {
      plVar2 = (long *)(lVar8 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar11 = puVar3 + 2;
    lVar8 = (long)puVar3 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lStack_58 = *param_1;
    *param_1 = lVar8;
    param_1[1] = (long)puVar11;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar6 + uVar10 * 2);
    plVar6 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    FUN_10ad45818(plVar6);
  }
  param_1[1] = (long)puVar11;
  return plVar6;
}



/* Entry: 10ad45818; end: 10ad45b97;  */

long * FUN_10ad45818(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_10a22b2a4();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ad45b98; end: 10ad45c7b;  */

long FUN_10ad45b98(long *param_1,undefined8 param_2)

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
        if (plVar4 == plVar2) {
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



/* Entry: 10ad45c7c; end: 10ad45d53;  */

undefined8 * FUN_10ad45c7c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
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
  lVar4 = param_2[3];
  uVar5 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar5;
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
  lVar4 = param_2[5];
  uVar5 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
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
  FUN_10a5bd23c(param_1 + 6,param_2 + 6);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  return param_1;
}



/* Entry: 10ad45d54; end: 10ad45e0f;  */

long * FUN_10ad45d54(long param_1,long *param_2,long param_3,long param_4)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  plVar2 = (long *)*plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    do {
      while( true ) {
        plVar3 = plVar2;
        bVar1 = param_3 < plVar3[4];
        if (param_3 == plVar3[4]) {
          bVar1 = param_4 != plVar3[5] && param_4 < plVar3[5];
        }
        if (!bVar1) break;
        plVar4 = plVar3;
        plVar2 = (long *)*plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_10ad45db0;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar4 = plVar3 + 1;
  }
LAB_10ad45db0:
  *param_2 = (long)plVar3;
  return plVar4;
}



/* Entry: 10ad45e10; end: 10ad45f7f;  */

undefined8 * FUN_10ad45e10(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_10a22ba60(*param_1,param_1[2]);
  if (param_1[1] != 0) {
    lVar1 = *(long *)(param_1[1] + 0x10);
    if (lVar1 != 0) {
      do {
        lVar2 = lVar1;
        lVar1 = *(long *)(lVar2 + 0x10);
      } while (lVar1 != 0);
      param_1[1] = lVar2;
    }
    FUN_10a22ba60(*param_1);
  }
  return param_1;
}



/* Entry: 10ad45f80; end: 10ad4601f;  */

undefined1 * FUN_10ad45f80(undefined1 *param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  long lStack_38;
  
  puVar2 = &uStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _strlen(param_2);
  puStack_78 = &UNK_1053a6a3c;
  ppuStack_70 = &PTR_DAT_110ae9180;
  uStack_80 = param_3;
  func_0x000109d18d1c(param_1,param_2,puVar1,&uStack_80);
  func_0x0001092ba41c(&uStack_80);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (param_2 != (undefined1 *)0x0) {
    FUN_10ad46020();
    FUN_10ad46020(puVar2,*(undefined8 *)(param_2 + 8));
    func_0x00010ad460c0(param_2 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return param_2;
  }
  return (undefined1 *)puVar2;
}



/* Entry: 10ad46020; end: 10ad46217;  */

void FUN_10ad46020(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10ad46020(param_1,*param_2);
    FUN_10ad46020(param_1,param_2[1]);
    func_0x00010ad460c0(param_2 + 5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10ad46218; end: 10ad4621b;  */

undefined8 * FUN_10ad46218(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c700c0;
  puStack_28 = param_1 + 0xc4;
  FUN_10a22b234(&puStack_28);
  if (param_1[0xc2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a235404(param_1 + 0xbf);
  if (*(char *)(param_1 + 0xbd) == '\x01') {
    func_0x000109d18f34(param_1 + 0xa6);
  }
  func_0x00010a06e274(param_1 + 0xa4);
  if (param_1[0xa3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0xa1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x9f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x9d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x9b] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x99] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x97] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x95] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x93] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x91] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x8f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x8d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x8b] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x89] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x87] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x85] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x83] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x81] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a05a8c4(param_1 + 0x7e);
  if (param_1[0x7d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x7b] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x79] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x77] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x75] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x73] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x71] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x6f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x6d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x6b] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x68] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x66] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[100] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x62] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a7ab6f8(param_1 + 0x5f);
  func_0x00010ad46068(param_1 + 0x5d);
  func_0x00010ac472b8(param_1 + 0x5b);
  if (param_1[0x5a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x58] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x56] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x4d);
  FUN_10ad46434(param_1 + 0x4a);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x42);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x3c);
  __ZNSt3__15mutexD1Ev(param_1 + 0x34);
  FUN_10ad3daf4(param_1 + 0x2f);
  FUN_10ad464a0(param_1 + 0x2c);
  puStack_28 = param_1 + 0x27;
  FUN_10a0426d8(&puStack_28);
  func_0x00010a3f5df8(param_1 + 0x24);
  func_0x00010a234f7c(param_1 + 0x22);
  func_0x00010ad45864(param_1 + 0x1e,param_1[0x1f]);
  func_0x00010ad46020(param_1 + 0x1b,param_1[0x1c]);
  func_0x00010ad45864(param_1 + 0x18,param_1[0x19]);
  func_0x00010ad46020(param_1 + 0x15,param_1[0x16]);
  func_0x00010a3b4a6c(param_1 + 0x12);
  FUN_10a0a258c(param_1 + 0xf);
  FUN_10a0a258c(param_1 + 0xd);
  func_0x00010ad464f8(param_1 + 7);
  func_0x000107c2826c(param_1 + 2);
  return param_1;
}



/* Entry: 10ad4621c; end: 10ad4622f;  */

void FUN_10ad4621c(void)

{
  func_0x00010ad46530();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad46230; end: 10ad4625f;  */

void FUN_10ad46230(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0x20);
  FUN_10ad46434(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ad46260; end: 10ad463a3;  */

void FUN_10ad46260(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x20);
  plVar7 = *(long **)(param_1 + 8);
  while( true ) {
    if (plVar7 == *(long **)(param_1 + 0x10)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x20);
      return;
    }
    plVar4 = (long *)plVar7[1];
    if (plVar4 != (long *)0x0) break;
    plVar4 = (long *)0x0;
LAB_10ad462e8:
    if (*(long **)(param_1 + 0x10) == plVar7) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad46388);
      (*pcVar3)();
    }
    plVar5 = plVar7 + 2;
    FUN_10ad455c8(plVar5,*(long **)(param_1 + 0x10),plVar7);
    for (plVar8 = *(long **)(param_1 + 0x10); plVar8 != plVar5; plVar8 = plVar8 + -2) {
      if (plVar8[-1] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    *(long **)(param_1 + 0x10) = plVar5;
    if (plVar4 != (long *)0x0) {
LAB_10ad46330:
      plVar5 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  __ZNSt3__119__shared_weak_count4lockEv();
  if ((plVar4 == (long *)0x0) || (plVar5 = (long *)*plVar7, plVar5 == (long *)0x0))
  goto LAB_10ad462e8;
  (**(code **)(*plVar5 + 0x10))(plVar5,param_2,param_3);
  plVar7 = plVar7 + 2;
  goto LAB_10ad46330;
}



/* Entry: 10ad463a4; end: 10ad463fb;  */

long FUN_10ad463a4(long param_1)

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



/* Entry: 10ad463fc; end: 10ad4640b;  */

void FUN_10ad463fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c70140;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad4640c; end: 10ad4642b;  */

void FUN_10ad4640c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c70140;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad4642c; end: 10ad46433;  */

void FUN_10ad4642c(void)

{
  return;
}



/* Entry: 10ad46434; end: 10ad4649f;  */

void FUN_10ad46434(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        if (*(long *)(lVar3 + -8) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        lVar3 = lVar3 + -0x10;
      } while (lVar3 != lVar2);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10ad464a0; end: 10ad46817;  */

long FUN_10ad464a0(long param_1)

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



/* Entry: 10ad46818; end: 10ad46827;  */

void FUN_10ad46818(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c70190;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad46828; end: 10ad46847;  */

void FUN_10ad46828(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c70190;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad46848; end: 10ad46867;  */

void FUN_10ad46848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ad46850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10ad46868; end: 10ad46887;  */

void FUN_10ad46868(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c701e0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad46888; end: 10ad46897;  */

void FUN_10ad46888(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ad46890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10ad46898; end: 10ad46ac7;  */

void FUN_10ad46898(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_308 [264];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  undefined8 auStack_1c8 [2];
  char cStack_1b1;
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [264];
  char cStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c2b054(auStack_1c8,"");
  func_0x000107c2b054(auStack_1e0,"");
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  lStack_1f0 = param_1[2];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a1b95dc(auStack_1b0,auStack_1c8,0,auStack_1e0,&uStack_200);
  if (lStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  if (cStack_1c9 < '\0') {
    __ZdlPv(auStack_1e0[0]);
  }
  if (cStack_1b1 < '\0') {
    __ZdlPv(auStack_1c8[0]);
  }
  func_0x00010a0ec6dc(auStack_308,1);
  if (cStack_98 == '\x01') {
    _memcpy(auStack_1a0,auStack_308,0x104);
  }
  else {
    _memcpy(auStack_1a0,auStack_308,0x108);
    cStack_98 = '\x01';
  }
  puVar2 = (undefined8 *)0x170;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_1a0,0x110);
  *puVar2 = &PTR_FUN_110bacb58;
  puVar2[0x26] = uStack_80;
  puVar2[0x25] = uStack_88;
  puVar2[0x24] = uStack_90;
  uStack_88 = 0;
  uStack_90 = 0;
  *(undefined4 *)(puVar2 + 0x27) = uStack_78;
  puVar2[0x2a] = uStack_60;
  puVar2[0x29] = uStack_68;
  puVar2[0x28] = uStack_70;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  puVar2[0x2d] = uStack_48;
  puVar2[0x2c] = uStack_50;
  puVar2[0x2b] = uStack_58;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  ___cxa_throw(puVar2,&PTR_DAT_110bacb30,FUN_10a1b9580);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad46a34);
  (*pcVar1)();
}



/* Entry: 10ad46ac8; end: 10ad46ad7;  */

void FUN_10ad46ac8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c70230;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad46ad8; end: 10ad46af7;  */

void FUN_10ad46ad8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c70230;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad46af8; end: 10ad46b13;  */

long FUN_10ad46af8(long param_1)

{
  if (*(char *)(param_1 + 0xf8) == '\x01') {
    (**(code **)(**(long **)(param_1 + 0x1e8) + 0x28))(*(long **)(param_1 + 0x1e8),param_1 + 0x58);
  }
  (**(code **)(**(long **)(param_1 + 0x1e8) + 0x28))
            (*(long **)(param_1 + 0x1e8),*(long *)(param_1 + 0x28) + 0x18);
  (**(code **)(**(long **)(param_1 + 0x1e8) + 0x28))(*(long **)(param_1 + 0x1e8),param_1 + 0x1b8);
  (**(code **)(**(long **)(param_1 + 0x1e8) + 0x28))(*(long **)(param_1 + 0x1e8),param_1 + 0x118);
  FUN_10a009414(param_1 + 0x2b0);
  func_0x00010a2349b4(param_1 + 0x290);
  FUN_10a3f23d0(param_1 + 0x280);
  func_0x00010a3f5df8(param_1 + 0x268);
  FUN_10a15206c(param_1 + 0x250);
  if (*(char *)(param_1 + 0x24f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x238));
  }
  if (*(char *)(param_1 + 0x237) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x220));
  }
  FUN_10a3f5ba8(param_1 + 0x218);
  func_0x00010a3f5b50(param_1 + 0x208);
  FUN_10a3f599c(param_1 + 0x1f8);
  FUN_10a3f5c74(param_1 + 0x1f0);
  func_0x00010ad0070c(param_1 + 0x1b8);
  func_0x000109d18f34(param_1 + 0x100);
  if (*(char *)(param_1 + 0xf8) == '\x01') {
    func_0x000109d18f34(param_1 + 0x40);
  }
  func_0x00010a061620((long *)(param_1 + 0x28));
  return param_1 + 0x18;
}



/* Entry: 10ad46b14; end: 10ad46b33;  */

void FUN_10ad46b14(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c70280;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad46b34; end: 10ad46b3f;  */

long * FUN_10ad46b34(long param_1)

{
  long lVar1;
  
  FUN_10a5cd600(param_1 + 0x158,0);
  FUN_10a5cd658(param_1 + 0x150,0);
  FUN_10a3f5e88(param_1 + 0x140);
  FUN_10a5ad678(param_1 + 0x138,0);
  func_0x00010a3f61b0(param_1 + 0x120);
  FUN_10a3f5e88(param_1 + 0x110);
  if (*(long *)(param_1 + 0x48) != 0) {
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x48);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x20) = lVar1;
    __ZdlPv();
  }
  return (long *)(param_1 + 0x18);
}



/* Entry: 10ad46b40; end: 10ad46bb7;  */

void FUN_10ad46b40(undefined8 *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)*param_1;
  while (puVar3 != param_1 + 1) {
    FUN_10a5ab514(puVar3[5]);
    puVar1 = (undefined8 *)puVar3[1];
    puVar4 = puVar3;
    if ((undefined8 *)puVar3[1] == (undefined8 *)0x0) {
      do {
        puVar3 = (undefined8 *)puVar4[2];
        bVar2 = (undefined8 *)*puVar3 != puVar4;
        puVar4 = puVar3;
      } while (bVar2);
    }
    else {
      do {
        puVar3 = puVar1;
        puVar1 = (undefined8 *)*puVar3;
      } while ((undefined8 *)*puVar3 != (undefined8 *)0x0);
    }
  }
  puVar3 = param_1 + 1;
  FUN_10ad46020(param_1,*puVar3);
  *param_1 = puVar3;
  param_1[2] = 0;
  *puVar3 = 0;
  puVar3 = param_1 + 4;
  func_0x00010ad45864(param_1 + 3,*puVar3);
  param_1[3] = puVar3;
  param_1[5] = 0;
  *puVar3 = 0;
  return;
}



/* Entry: 10ad46bb8; end: 10ad46c07;  */

void FUN_10ad46bb8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  FUN_10ad46020(param_1,*puVar1);
  *param_1 = puVar1;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1 = param_1 + 4;
  func_0x00010ad45864(param_1 + 3,*puVar1);
  param_1[3] = puVar1;
  param_1[5] = 0;
  *puVar1 = 0;
  return;
}



/* Entry: 10ad46c08; end: 10ad46f9b;  */

long * FUN_10ad46c08(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  code *pcVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  long *plStack_68;
  
  if (*param_2 != 0) {
    puStack_88 = *(undefined8 **)(*param_2 + 0x158);
    if ((puStack_88 == (undefined8 *)0xffffffffffffffff) &&
       (puStack_88 = (undefined8 *)0x0, param_1[2] != 0)) {
      plVar13 = (long *)*param_1;
      if (plVar13 == param_1 + 1) {
        puStack_88 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      else {
        iVar10 = 0;
        iVar12 = 0;
        do {
          if (iVar10 <= (int)plVar13[4]) {
            iVar10 = (int)plVar13[4];
          }
          if (iVar12 <= *(int *)((long)plVar13 + 0x24)) {
            iVar12 = *(int *)((long)plVar13 + 0x24);
          }
          plVar14 = plVar13;
          plVar9 = (long *)plVar13[1];
          if ((long *)plVar13[1] == (long *)0x0) {
            do {
              plVar13 = (long *)plVar14[2];
              bVar4 = (long *)*plVar13 != plVar14;
              plVar14 = plVar13;
            } while (bVar4);
          }
          else {
            do {
              plVar13 = plVar9;
              plVar9 = (long *)*plVar13;
            } while ((long *)*plVar13 != (long *)0x0);
          }
        } while (plVar13 != param_1 + 1);
        puStack_88 = (undefined8 *)CONCAT44(iVar12 + 1,iVar10 + 1);
      }
    }
    plVar13 = param_1;
    FUN_10ad479a4(param_1,&puStack_88);
    while (param_1 + 1 != plVar13) {
      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
        func_0x00010ae06f08(1,2,&UNK_10f6a70b3,&UNK_10f6a70e1,0x42,&UNK_10f6a7143,in_x6,in_x7,
                            (ulong)puStack_88 & 0xffffffff,(ulong)puStack_88 >> 0x20);
      }
      puStack_88 = (undefined8 *)CONCAT44(puStack_88._4_4_,(int)puStack_88 + 1);
      plVar13 = param_1;
      FUN_10ad479a4(param_1,&puStack_88);
    }
    *(undefined8 **)(*param_2 + 0x158) = puStack_88;
    plVar13 = param_1 + 3;
    plVar9 = plVar13;
    FUN_10ad47a58(plVar13,*(long *)(*param_2 + 0xf8) + 0x208);
    puVar1 = puStack_88;
    plVar14 = param_1 + 4;
    if (plVar14 != plVar9) {
      plVar13 = (long *)0x120;
      ___cxa_allocate_exception();
      FUN_10a2e1840();
      ppuVar7 = &PTR_DAT_110b99e48;
      pcVar8 = FUN_10a002a90;
      ___cxa_throw();
      func_0x00010ad47ba0(&puStack_78);
      __Unwind_Resume();
      if (pcVar8 != (code *)0x0) {
        pcVar2 = pcVar8 + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar4) {
            *(long *)pcVar2 = *(long *)pcVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar14 = (long *)plVar13[1];
      *plVar13 = (long)ppuVar7;
      plVar13[1] = (long)pcVar8;
      if (plVar14 != (long *)0x0) {
        plVar9 = plVar14 + 1;
        do {
          lVar11 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
      }
      return plVar13;
    }
    plVar9 = (long *)*param_2;
    plVar15 = (long *)param_2[1];
    puStack_78 = puStack_88;
    if (plVar15 != (long *)0x0) {
      plVar5 = plVar15 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = *plVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar5 = param_1;
    plStack_70 = plVar9;
    plStack_68 = plVar15;
    FUN_10ad47ad4(param_1,&uStack_80,puStack_88,(ulong)puStack_88 >> 0x20);
    if (*plVar5 == 0) {
      lVar11 = 0x38;
      __Znwm();
      *(undefined8 **)(lVar11 + 0x20) = puVar1;
      *(long **)(lVar11 + 0x28) = plVar9;
      *(long **)(lVar11 + 0x30) = plVar15;
      FUN_10ad47b4c(param_1,uStack_80,plVar5,lVar11);
    }
    else if (plVar15 != (long *)0x0) {
      plVar9 = plVar15 + 1;
      do {
        lVar11 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
    lVar11 = *(long *)(*param_2 + 0xf8);
    puVar1 = (undefined8 *)(lVar11 + 0x208);
    plVar9 = (long *)*plVar14;
    while (plVar15 = plVar14, plVar9 != (long *)0x0) {
      while (plVar14 = plVar9, puVar6 = puVar1, FUN_10a003e3c(puVar1,plVar14 + 4),
            ((uint)puVar6 >> 7 & 1) == 0) {
        plVar9 = plVar14 + 4;
        FUN_10a003e3c(plVar9,puVar1);
        if (((uint)plVar9 >> 7 & 1) == 0) {
          puVar6 = (undefined8 *)*plVar15;
          if (puVar6 == (undefined8 *)0x0) goto LAB_10ad46e80;
          goto LAB_10ad46f00;
        }
        plVar15 = plVar14 + 1;
        plVar9 = (long *)*plVar15;
        if ((long *)*plVar15 == (long *)0x0) goto LAB_10ad46e80;
      }
      plVar9 = (long *)*plVar14;
    }
LAB_10ad46e80:
    puVar6 = (undefined8 *)0x48;
    __Znwm();
    plStack_68 = (long *)0x0;
    puStack_78 = puVar6;
    plStack_70 = plVar13;
    if (*(char *)(lVar11 + 0x21f) < '\0') {
      func_0x000107c3192c(puVar6 + 4,*(undefined8 *)(lVar11 + 0x208),*(undefined8 *)(lVar11 + 0x210)
                         );
    }
    else {
      uVar17 = *(undefined8 *)(lVar11 + 0x210);
      uVar16 = *puVar1;
      puVar6[6] = *(undefined8 *)(lVar11 + 0x218);
      puVar6[5] = uVar17;
      puVar6[4] = uVar16;
    }
    puVar6[7] = 0;
    puVar6[8] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = plVar14;
    *plVar15 = (long)puVar6;
    if (*(long *)*plVar13 != 0) {
      *plVar13 = *(long *)*plVar13;
      puVar6 = (undefined8 *)*plVar15;
    }
    func_0x000107c2b058(param_1[4],puVar6);
    param_1[5] = param_1[5] + 1;
    puVar6 = puStack_78;
LAB_10ad46f00:
    param_1 = puVar6 + 7;
    FUN_10ad46f9c(param_1,*param_2,param_2[1]);
  }
  return param_1;
}



/* Entry: 10ad46f9c; end: 10ad4700f;  */

undefined8 * FUN_10ad46f9c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10ad47010; end: 10ad470d7;  */

void FUN_10ad47010(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x18;
  FUN_10ad47a58();
  if (param_1 + 0x20 != lVar1) {
    FUN_10a5ab514(*(undefined8 *)(lVar1 + 0x38));
    uStack_38 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + 0x158);
    func_0x00010ad47be8(param_1,&uStack_38);
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_50,*param_2,param_2[1]);
    }
    else {
      uStack_48 = param_2[1];
      uStack_50 = *param_2;
      lStack_40 = param_2[2];
    }
    func_0x00010ad47cb0(param_1 + 0x18,&uStack_50);
    if (lStack_40 < 0) {
      __ZdlPv(uStack_50);
    }
  }
  return;
}



/* Entry: 10ad470d8; end: 10ad471fb;  */

void FUN_10ad470d8(undefined8 **param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined *unaff_x21;
  undefined8 **unaff_x22;
  undefined8 **ppuVar7;
  undefined1 *unaff_x23;
  undefined8 **ppuVar8;
  undefined1 auStack_118 [8];
  undefined8 *apuStack_110 [7];
  long lStack_d8;
  undefined8 **ppuStack_d0;
  undefined1 *puStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 **ppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_88 [8];
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_1 + 1;
  ppuVar8 = (undefined8 **)*param_1;
  puVar4 = param_2;
  if (ppuVar8 != ppuVar6) {
    unaff_x23 = auStack_88;
    unaff_x21 = &UNK_10f6a7264;
    do {
      unaff_x22 = ppuVar8 + 5;
      FUN_10a296138(auStack_88,(*unaff_x22)[0x1f],&UNK_10f6a7264,0x1b);
      puVar4 = param_2;
      (*(code *)*param_2)(unaff_x22);
      FUN_10a044790(auStack_88);
      param_1 = apuStack_80;
      (*(code *)*apuStack_80[0])();
      ppuVar7 = (undefined8 **)ppuVar8[1];
      ppuVar3 = ppuVar8;
      if ((undefined8 **)ppuVar8[1] == (undefined8 **)0x0) {
        do {
          ppuVar8 = (undefined8 **)ppuVar3[2];
          bVar1 = (undefined8 **)*ppuVar8 != ppuVar3;
          ppuVar3 = ppuVar8;
        } while (bVar1);
      }
      else {
        do {
          ppuVar8 = ppuVar7;
          ppuVar7 = (undefined8 **)*ppuVar8;
        } while ((undefined8 **)*ppuVar8 != (undefined8 **)0x0);
      }
    } while (ppuVar8 != ppuVar6);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  ppuVar3 = param_1;
  __Unwind_Resume();
  pcStack_98 = FUN_10ad471fc;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = ppuVar3 + 1;
  ppuVar7 = ppuVar3;
  ppuStack_d0 = ppuVar8;
  puStack_c8 = unaff_x23;
  ppuStack_c0 = unaff_x22;
  puStack_b8 = unaff_x21;
  ppuStack_b0 = ppuVar6;
  ppuStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (ppuVar5 != (undefined8 **)*ppuVar3) {
    do {
      ppuVar8 = (undefined8 **)*ppuVar5;
      ppuVar6 = ppuVar5;
      if ((undefined8 **)*ppuVar5 == (undefined8 **)0x0) {
        do {
          ppuVar7 = (undefined8 **)ppuVar6[2];
          bVar1 = (undefined8 **)*ppuVar7 == ppuVar6;
          ppuVar6 = ppuVar7;
        } while (bVar1);
      }
      else {
        do {
          ppuVar7 = ppuVar8;
          ppuVar8 = (undefined8 **)ppuVar7[1];
        } while ((undefined8 **)ppuVar7[1] != (undefined8 **)0x0);
      }
      FUN_10a296138(auStack_118,ppuVar7[5][0x1f],&UNK_10f6a7264,0x1b);
      (*(code *)*puVar4)(ppuVar7 + 5,puVar4);
      FUN_10a044790(auStack_118);
      ppuVar7 = apuStack_110;
      (*(code *)*apuStack_110[0])();
      ppuVar8 = (undefined8 **)*ppuVar5;
      ppuVar6 = ppuVar5;
      if ((undefined8 **)*ppuVar5 == (undefined8 **)0x0) {
        do {
          ppuVar5 = (undefined8 **)ppuVar6[2];
          bVar1 = (undefined8 **)*ppuVar5 == ppuVar6;
          ppuVar6 = ppuVar5;
        } while (bVar1);
      }
      else {
        do {
          ppuVar5 = ppuVar8;
          ppuVar8 = (undefined8 **)ppuVar5[1];
        } while ((undefined8 **)ppuVar5[1] != (undefined8 **)0x0);
      }
    } while (ppuVar5 != (undefined8 **)*ppuVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    __Unwind_Resume();
    ppuVar8 = (undefined8 **)*ppuVar7;
    while( true ) {
      if (ppuVar8 == ppuVar7 + 1) {
        return;
      }
      iVar2 = (int)ppuVar8[5];
      FUN_10a5acbc4();
      if (iVar2 == 0) break;
      ppuVar6 = (undefined8 **)ppuVar8[1];
      ppuVar3 = ppuVar8;
      if ((undefined8 **)ppuVar8[1] == (undefined8 **)0x0) {
        do {
          ppuVar8 = (undefined8 **)ppuVar3[2];
          bVar1 = (undefined8 **)*ppuVar8 != ppuVar3;
          ppuVar3 = ppuVar8;
        } while (bVar1);
      }
      else {
        do {
          ppuVar8 = ppuVar6;
          ppuVar6 = (undefined8 **)*ppuVar8;
        } while ((undefined8 **)*ppuVar8 != (undefined8 **)0x0);
      }
    }
    return;
  }
  return;
}



/* Entry: 10ad471fc; end: 10ad47353;  */

void FUN_10ad471fc(undefined8 **param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined1 auStack_88 [8];
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = param_1 + 1;
  ppuVar3 = param_1;
  if (ppuVar5 != (undefined8 **)*param_1) {
    do {
      ppuVar3 = (undefined8 **)*ppuVar5;
      ppuVar4 = ppuVar5;
      if ((undefined8 **)*ppuVar5 == (undefined8 **)0x0) {
        do {
          ppuVar6 = (undefined8 **)ppuVar4[2];
          bVar1 = (undefined8 **)*ppuVar6 == ppuVar4;
          ppuVar4 = ppuVar6;
        } while (bVar1);
      }
      else {
        do {
          ppuVar6 = ppuVar3;
          ppuVar3 = (undefined8 **)ppuVar6[1];
        } while ((undefined8 **)ppuVar6[1] != (undefined8 **)0x0);
      }
      FUN_10a296138(auStack_88,ppuVar6[5][0x1f],&UNK_10f6a7264,0x1b);
      (*(code *)*param_2)(ppuVar6 + 5,param_2);
      FUN_10a044790(auStack_88);
      ppuVar3 = apuStack_80;
      (*(code *)*apuStack_80[0])();
      ppuVar4 = (undefined8 **)*ppuVar5;
      ppuVar6 = ppuVar5;
      if ((undefined8 **)*ppuVar5 == (undefined8 **)0x0) {
        do {
          ppuVar5 = (undefined8 **)ppuVar6[2];
          bVar1 = (undefined8 **)*ppuVar5 == ppuVar6;
          ppuVar6 = ppuVar5;
        } while (bVar1);
      }
      else {
        do {
          ppuVar5 = ppuVar4;
          ppuVar4 = (undefined8 **)ppuVar5[1];
        } while ((undefined8 **)ppuVar5[1] != (undefined8 **)0x0);
      }
    } while (ppuVar5 != (undefined8 **)*param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    __Unwind_Resume();
    ppuVar5 = (undefined8 **)*ppuVar3;
    while( true ) {
      if (ppuVar5 == ppuVar3 + 1) {
        return;
      }
      iVar2 = (int)ppuVar5[5];
      FUN_10a5acbc4();
      if (iVar2 == 0) break;
      ppuVar4 = (undefined8 **)ppuVar5[1];
      ppuVar6 = ppuVar5;
      if ((undefined8 **)ppuVar5[1] == (undefined8 **)0x0) {
        do {
          ppuVar5 = (undefined8 **)ppuVar6[2];
          bVar1 = (undefined8 **)*ppuVar5 != ppuVar6;
          ppuVar6 = ppuVar5;
        } while (bVar1);
      }
      else {
        do {
          ppuVar5 = ppuVar4;
          ppuVar4 = (undefined8 **)*ppuVar5;
        } while ((undefined8 **)*ppuVar5 != (undefined8 **)0x0);
      }
    }
    return;
  }
  return;
}



/* Entry: 10ad47354; end: 10ad473c7;  */

void FUN_10ad47354(long *param_1)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)*param_1;
  while( true ) {
    if (plVar4 == param_1 + 1) {
      return;
    }
    iVar3 = (int)plVar4[5];
    FUN_10a5acbc4();
    if (iVar3 == 0) break;
    plVar1 = (long *)plVar4[1];
    plVar5 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar2 = (long *)*plVar4 != plVar5;
        plVar5 = plVar4;
      } while (bVar2);
    }
    else {
      do {
        plVar4 = plVar1;
        plVar1 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10ad473c8; end: 10ad4769f;  */

void FUN_10ad473c8(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  bool bVar5;
  long *plVar6;
  long **pplVar7;
  long *plVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_98 = 0;
  plVar11 = (long *)*param_2;
  plVar1 = (long *)param_2[1];
  plStack_90 = &lStack_88;
  if (plVar11 != plVar1) {
    if (*(int *)(*plVar11 + 0x58) == -1) {
      bVar5 = false;
    }
    else {
      bVar5 = *(int *)(*plVar11 + 0x5c) != -1;
    }
    do {
      plVar6 = param_1 + 3;
      FUN_10ad47d78(plVar6,*plVar11);
      if (param_1 + 4 != plVar6) {
        lVar9 = plVar6[7];
        plVar6 = (long *)plVar6[8];
        if (plVar6 != (long *)0x0) {
          plVar10 = plVar6 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = *plVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (lVar9 != 0) {
          if (bVar5) {
            uStack_98 = *(ulong *)(*plVar11 + 0x58);
            plVar10 = param_1;
            FUN_10ad479a4(param_1,&uStack_98);
            while (param_1 + 1 != plVar10) {
              if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
                func_0x00010ae06f08(1,2,&UNK_10f6a70b3,&UNK_10f6a71c4,0xe3,&UNK_10f6a7220,in_x6,
                                    in_x7,uStack_98 & 0xffffffff,uStack_98 >> 0x20);
              }
              uStack_98 = CONCAT44(uStack_98._4_4_,(int)uStack_98 + 1);
              plVar10 = param_1;
              FUN_10ad479a4(param_1,&uStack_98);
            }
          }
          uVar4 = uStack_98;
          *(ulong *)(lVar9 + 0x158) = uStack_98;
          pplVar7 = &plStack_90;
          FUN_10ad47ad4(pplVar7,&uStack_78,uStack_98,uStack_98 >> 0x20);
          plVar10 = *pplVar7;
          if (plVar10 == (long *)0x0) {
            plVar10 = (long *)0x38;
            __Znwm();
            plVar10[5] = 0;
            plVar10[6] = 0;
            plVar10[4] = uVar4;
            *plVar10 = 0;
            plVar10[1] = 0;
            plVar10[2] = uStack_78;
            *pplVar7 = plVar10;
            plVar8 = plVar10;
            if ((long *)*plStack_90 != (long *)0x0) {
              plVar8 = *pplVar7;
              plStack_90 = (long *)*plStack_90;
            }
            func_0x000107c2b058(lStack_88,plVar8);
            lStack_80 = lStack_80 + 1;
          }
          FUN_10ad46f9c(plVar10 + 5,lVar9,plVar6);
          if (!bVar5) {
            uStack_98 = CONCAT44((int)(uStack_98 >> 0x20) + 1,(int)uStack_98 + 1);
          }
        }
        if (plVar6 != (long *)0x0) {
          plVar10 = plVar6 + 1;
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
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
      }
      plVar11 = plVar11 + 2;
    } while (plVar11 != plVar1);
  }
  plVar11 = param_1 + 1;
  FUN_10ad46020(param_1,*plVar11);
  *param_1 = (long)plStack_90;
  *plVar11 = lStack_88;
  param_1[2] = lStack_80;
  if (lStack_80 == 0) {
    *param_1 = (long)plVar11;
  }
  else {
    *(long **)(lStack_88 + 0x10) = plVar11;
    lStack_88 = 0;
    lStack_80 = 0;
    plStack_90 = &lStack_88;
  }
  FUN_10ad46020(&plStack_90,lStack_88);
  return;
}



/* Entry: 10ad476a0; end: 10ad477ff;  */

void FUN_10ad476a0(undefined8 **param_1,code *param_2,ulong param_3,byte *param_4)

{
  bool bVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  int iVar4;
  code *pcVar5;
  ulong uVar6;
  code *pcVar7;
  code *pcVar8;
  ulong unaff_x20;
  code *unaff_x21;
  undefined *unaff_x23;
  undefined8 **unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  ulong unaff_x28;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined8 *apuStack_150 [7];
  long lStack_118;
  ulong uStack_110;
  undefined8 **ppuStack_108;
  ulong uStack_100;
  long lStack_f8;
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 **ppuStack_e0;
  code *pcStack_d8;
  ulong uStack_d0;
  undefined8 **ppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_a8 [8];
  undefined8 *apuStack_a0 [7];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = param_1 + 1;
  ppuVar9 = (undefined8 **)*param_1;
  pcVar5 = param_2;
  uVar6 = param_3;
  if (ppuVar9 != ppuVar11) {
    unaff_x25 = (long)param_3 >> 1;
    unaff_x26 = (ulong)param_2 & 0xffffffff;
    unaff_x23 = &UNK_10f6a7264;
    do {
      bVar1 = (param_3 & 1) == 0;
      unaff_x28 = (ulong)bVar1;
      unaff_x24 = ppuVar9 + 5;
      uVar6 = 0x1b;
      FUN_10a296138(auStack_a8,(*unaff_x24)[0x1f],&UNK_10f6a7264);
      pcVar7 = param_2;
      if (!bVar1) {
        pcVar7 = *(code **)(*(long *)((long)*unaff_x24 + unaff_x25) + unaff_x26);
      }
      pcVar5 = (code *)(ulong)*param_4;
      (*pcVar7)((long)*unaff_x24 + unaff_x25);
      FUN_10a044790(auStack_a8);
      param_1 = apuStack_a0;
      (*(code *)*apuStack_a0[0])();
      ppuVar3 = (undefined8 **)ppuVar9[1];
      ppuVar2 = ppuVar9;
      if ((undefined8 **)ppuVar9[1] == (undefined8 **)0x0) {
        do {
          ppuVar9 = (undefined8 **)ppuVar2[2];
          bVar1 = (undefined8 **)*ppuVar9 != ppuVar2;
          ppuVar2 = ppuVar9;
        } while (bVar1);
      }
      else {
        do {
          ppuVar9 = ppuVar3;
          ppuVar3 = (undefined8 **)*ppuVar9;
        } while ((undefined8 **)*ppuVar9 != (undefined8 **)0x0);
      }
      unaff_x20 = param_3;
      unaff_x21 = param_2;
    } while (ppuVar9 != ppuVar11);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    ppuVar2 = param_1;
    __Unwind_Resume();
    pcStack_b8 = FUN_10ad47800;
    lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar10 = (undefined8 **)*ppuVar2;
    ppuVar3 = ppuVar2;
    pcVar7 = pcVar5;
    uStack_110 = unaff_x28;
    ppuStack_108 = ppuVar9;
    uStack_100 = unaff_x26;
    lStack_f8 = unaff_x25;
    ppuStack_f0 = unaff_x24;
    puStack_e8 = unaff_x23;
    ppuStack_e0 = ppuVar11;
    pcStack_d8 = unaff_x21;
    uStack_d0 = unaff_x20;
    ppuStack_c8 = param_1;
    puStack_c0 = &stack0xfffffffffffffff0;
    if (ppuVar10 != ppuVar2 + 1) {
      do {
        pcVar7 = (code *)&UNK_10f6a7264;
        FUN_10a296138(auStack_158,ppuVar10[5][0x1f],&UNK_10f6a7264,0x1b);
        pcVar8 = pcVar5;
        if ((uVar6 & 1) != 0) {
          pcVar8 = *(code **)(*(long *)((long)ppuVar10[5] + ((long)uVar6 >> 1)) +
                             ((ulong)pcVar5 & 0xffffffff));
        }
        (*pcVar8)((long)ppuVar10[5] + ((long)uVar6 >> 1));
        FUN_10a044790(auStack_158);
        ppuVar3 = apuStack_150;
        (*(code *)*apuStack_150[0])();
        ppuVar9 = (undefined8 **)ppuVar10[1];
        ppuVar11 = ppuVar10;
        if ((undefined8 **)ppuVar10[1] == (undefined8 **)0x0) {
          do {
            ppuVar10 = (undefined8 **)ppuVar11[2];
            bVar1 = (undefined8 **)*ppuVar10 != ppuVar11;
            ppuVar11 = ppuVar10;
          } while (bVar1);
        }
        else {
          do {
            ppuVar10 = ppuVar9;
            ppuVar9 = (undefined8 **)*ppuVar10;
          } while ((undefined8 **)*ppuVar10 != (undefined8 **)0x0);
        }
        param_1 = ppuVar2;
      } while (ppuVar10 != ppuVar2 + 1);
    }
    iVar4 = (int)pcVar7;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
      ___stack_chk_fail();
      if (iVar4 == 0) {
        __Unwind_Resume(ppuVar3);
        func_0x000104bd46a0();
        FUN_10ad47a10();
        return;
      }
      ___cxa_begin_catch(ppuVar3);
      FUN_10ad46b40(param_1);
      __ZSt17current_exceptionv(auStack_160);
      __ZSt17rethrow_exceptionSt13exception_ptr(auStack_160);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10ad47970);
      (*pcVar5)();
    }
    return;
  }
  return;
}



/* Entry: 10ad47800; end: 10ad479a3;  */

void FUN_10ad47800(undefined8 **param_1,code *param_2,ulong param_3)

{
  undefined8 **ppuVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  int iVar5;
  code *pcVar6;
  undefined8 **unaff_x19;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 *apuStack_a0 [7];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = (undefined8 **)*param_1;
  ppuVar4 = param_1;
  pcVar2 = param_2;
  if (ppuVar7 != param_1 + 1) {
    do {
      pcVar2 = (code *)&UNK_10f6a7264;
      FUN_10a296138(auStack_a8,ppuVar7[5][0x1f],&UNK_10f6a7264,0x1b);
      pcVar6 = param_2;
      if ((param_3 & 1) != 0) {
        pcVar6 = *(code **)(*(long *)((long)ppuVar7[5] + ((long)param_3 >> 1)) +
                           ((ulong)param_2 & 0xffffffff));
      }
      (*pcVar6)((long)ppuVar7[5] + ((long)param_3 >> 1));
      FUN_10a044790(auStack_a8);
      ppuVar4 = apuStack_a0;
      (*(code *)*apuStack_a0[0])();
      ppuVar1 = (undefined8 **)ppuVar7[1];
      ppuVar8 = ppuVar7;
      if ((undefined8 **)ppuVar7[1] == (undefined8 **)0x0) {
        do {
          ppuVar7 = (undefined8 **)ppuVar8[2];
          bVar3 = (undefined8 **)*ppuVar7 != ppuVar8;
          ppuVar8 = ppuVar7;
        } while (bVar3);
      }
      else {
        do {
          ppuVar7 = ppuVar1;
          ppuVar1 = (undefined8 **)*ppuVar7;
        } while ((undefined8 **)*ppuVar7 != (undefined8 **)0x0);
      }
      unaff_x19 = param_1;
    } while (ppuVar7 != param_1 + 1);
  }
  iVar5 = (int)pcVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume(ppuVar4);
      func_0x000104bd46a0();
      FUN_10ad47a10();
      return;
    }
    ___cxa_begin_catch(ppuVar4);
    FUN_10ad46b40(unaff_x19);
    __ZSt17current_exceptionv(auStack_b0);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_b0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad47970);
    (*pcVar2)();
  }
  return;
}



/* Entry: 10ad479a4; end: 10ad47a0f;  */

void FUN_10ad479a4(long param_1,undefined8 param_2)

{
  FUN_10ad47a10(param_1,param_2,*(undefined8 *)(param_1 + 8),(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10ad47a10; end: 10ad47a57;  */

long FUN_10ad47a10(undefined8 param_1,int *param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_3 != 0) {
    lVar2 = param_4;
    do {
      uVar3 = 0xff;
      if (*param_2 <= *(int *)(param_3 + 0x20)) {
        uVar3 = 0;
      }
      if (*(int *)(param_3 + 0x20) == *param_2) {
        uVar1 = 0xff;
        if (param_2[1] <= *(int *)(param_3 + 0x24)) {
          uVar1 = 0;
        }
        uVar3 = 0;
        if (*(int *)(param_3 + 0x24) != param_2[1]) {
          uVar3 = uVar1;
        }
      }
      param_4 = param_3;
      if ((uVar3 & 0x80) != 0) {
        param_4 = lVar2;
      }
      param_3 = *(long *)(param_3 + ((uVar3 & 0x80) >> 4));
      lVar2 = param_4;
    } while (param_3 != 0);
  }
  return param_4;
}



/* Entry: 10ad47a58; end: 10ad47ad3;  */

long * FUN_10ad47a58(long param_1,undefined8 param_2)

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



/* Entry: 10ad47ad4; end: 10ad47b4b;  */

long * FUN_10ad47ad4(long param_1,undefined8 *param_2,int param_3,int param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
joined_r0x00010ad47ad8:
  if (plVar4 != (long *)0x0) {
    do {
      plVar3 = plVar4;
      iVar1 = (int)plVar3[4];
      if (param_3 == iVar1) {
        iVar1 = *(int *)((long)plVar3 + 0x24);
        if (iVar1 <= param_4) goto code_r0x00010ad47afc;
      }
      else if (iVar1 <= param_3) {
        if (iVar1 < param_3) goto LAB_10ad47b30;
        break;
      }
      plVar2 = plVar3;
      plVar4 = (long *)*plVar3;
      if ((long *)*plVar3 == (long *)0x0) break;
    } while( true );
  }
  goto LAB_10ad47b44;
code_r0x00010ad47afc:
  if (iVar1 == param_4 || param_4 <= iVar1) {
LAB_10ad47b44:
    *param_2 = plVar3;
    return plVar2;
  }
LAB_10ad47b30:
  plVar2 = plVar3 + 1;
  plVar4 = (long *)*plVar2;
  goto joined_r0x00010ad47ad8;
}



/* Entry: 10ad47b4c; end: 10ad47d77;  */

void FUN_10ad47b4c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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



/* Entry: 10ad47d78; end: 10ad47df3;  */

long * FUN_10ad47d78(long param_1,undefined8 param_2)

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



/* Entry: 10ad47df4; end: 10ad47f53;  */

void FUN_10ad47df4(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  code **ppcVar5;
  code **ppcVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  code *pcVar10;
  code **ppcStack_108;
  code **ppcStack_100;
  code **ppcStack_f8;
  code **ppcStack_f0;
  code **ppcStack_e8;
  long lStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_79;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 *puStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  FUN_10ad47f54(&uStack_98,*(undefined8 *)(*(long *)(*param_1 + 8) + 0xb8));
  pcStack_78 = FUN_10ad485c0;
  ppuStack_70 = &PTR_FUN_110c702c0;
  puStack_68 = &uStack_98;
  FUN_10ad471fc(*(long *)(*param_1 + 8) + 0xa8,&pcStack_78);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  FUN_10ad487fc(&lStack_a8,&uStack_79,&uStack_98);
  plVar7 = &lStack_a8;
  FUN_10ad4802c(param_1 + 1);
  if (plStack_a0 != (long *)0x0) {
    plVar1 = plStack_a0 + 1;
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
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
    }
  }
  pcStack_78 = (code *)&uStack_98;
  ppcVar5 = &pcStack_78;
  func_0x00010ad4852c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_10ad464a0(&lStack_a8);
  pcStack_78 = (code *)&uStack_98;
  func_0x00010ad4852c(&pcStack_78);
  __Unwind_Resume();
  pcVar8 = *ppcVar5;
  if ((long *)(((long)ppcVar5[2] - (long)pcVar8 >> 3) * -0x5555555555555555) < plVar7) {
    if ((long *)0xaaaaaaaaaaaaaaa < plVar7) {
      FUN_10ad48310();
      func_0x00010ad484a0(&ppcStack_108);
      __Unwind_Resume();
      ppcVar6 = ppcVar5;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      pcVar8 = *ppcVar5;
      *ppcVar5 = (code *)*plVar7;
      *plVar7 = (long)pcVar8;
      pcVar8 = ppcVar5[1];
      ppcVar5[1] = (code *)plVar7[1];
      plVar7[1] = (long)pcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(ppcVar6);
      return;
    }
    pcVar10 = ppcVar5[1];
    ppcVar6 = ppcVar5;
    ppcStack_e8 = ppcVar5;
    FUN_10ad48324();
    pcVar8 = (code *)((long)ppcVar6 + ((long)pcVar10 - (long)pcVar8));
    pcVar10 = *ppcVar5;
    pcVar2 = ppcVar5[1];
    ppcStack_108 = ppcVar6;
    ppcStack_100 = (code **)pcVar8;
    ppcStack_f8 = (code **)pcVar8;
    ppcStack_f0 = ppcVar6 + (long)plVar7 * 3;
    func_0x00010ad48368(ppcVar5,pcVar10,pcVar2,pcVar8 + ((long)pcVar10 - (long)pcVar2));
    ppcStack_108 = (code **)*ppcVar5;
    *ppcVar5 = pcVar8 + ((long)pcVar10 - (long)pcVar2);
    ppcVar5[1] = pcVar8;
    ppcStack_f0 = (code **)ppcVar5[2];
    ppcVar5[2] = (code *)(ppcVar6 + (long)plVar7 * 3);
    ppcStack_100 = ppcStack_108;
    ppcStack_f8 = ppcStack_108;
    func_0x00010ad484a0(&ppcStack_108);
  }
  return;
}



/* Entry: 10ad47f54; end: 10ad4802b;  */

void FUN_10ad47f54(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar2 = *param_1;
  if ((long *)((param_1[2] - lVar2 >> 3) * -0x5555555555555555) < param_2) {
    if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
      FUN_10ad48310();
      func_0x00010ad484a0(&plStack_58);
      __Unwind_Resume();
      plVar1 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar2 = *param_1;
      *param_1 = *param_2;
      *param_2 = lVar2;
      lVar2 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar1);
      return;
    }
    lVar3 = param_1[1];
    plVar1 = param_1;
    plStack_38 = param_1;
    FUN_10ad48324();
    lVar2 = (long)plVar1 + (lVar3 - lVar2);
    lVar3 = lVar2 + (*param_1 - param_1[1]);
    plStack_58 = plVar1;
    plStack_50 = (long *)lVar2;
    plStack_48 = (long *)lVar2;
    plStack_40 = plVar1 + (long)param_2 * 3;
    func_0x00010ad48368(param_1,*param_1,param_1[1],lVar3);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar3;
    param_1[1] = lVar2;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar1 + (long)param_2 * 3);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x00010ad484a0(&plStack_58);
  }
  return;
}



/* Entry: 10ad4802c; end: 10ad48083;  */

void FUN_10ad4802c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 10ad48084; end: 10ad480ff;  */

void FUN_10ad48084(long param_1)

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
  FUN_10ad4802c(param_1 + 8,&uStack_30);
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



/* Entry: 10ad48100; end: 10ad48157;  */

undefined8 FUN_10ad48100(long *param_1,float *param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  
  pfVar3 = (float *)*param_1;
  if (pfVar3 != (float *)param_1[1]) {
    fVar4 = param_2[1];
    do {
      if (((uint)pfVar3[4] & param_3) == 0) {
        fVar5 = pfVar3[1];
        bVar1 = false;
        bVar2 = true;
        if (*pfVar3 <= *param_2) {
          bVar1 = false;
          bVar2 = true;
          if (!NAN(fVar5) && !NAN(fVar4)) {
            bVar1 = fVar5 == fVar4;
            bVar2 = fVar4 <= fVar5;
          }
        }
        if (!bVar2 || bVar1) {
          fVar5 = pfVar3[3];
          bVar1 = false;
          bVar2 = true;
          if (*param_2 <= pfVar3[2]) {
            bVar1 = false;
            bVar2 = true;
            if (!NAN(fVar4) && !NAN(fVar5)) {
              bVar1 = fVar4 == fVar5;
              bVar2 = fVar5 <= fVar4;
            }
          }
          if (!bVar2 || bVar1) {
            return 1;
          }
        }
      }
      pfVar3 = pfVar3 + 5;
    } while (pfVar3 != (float *)param_1[1]);
  }
  return 0;
}



/* Entry: 10ad48158; end: 10ad4825b;  */

void FUN_10ad48158(long *param_1,undefined8 param_2,code **param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  undefined ***pppuVar3;
  undefined *puVar4;
  code **ppcVar5;
  code **ppcVar6;
  code *pcVar7;
  undefined *puStack_190;
  long **pplStack_188;
  long **pplStack_180;
  undefined1 uStack_178;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  undefined ***pppuStack_158;
  undefined1 **ppuStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  undefined ***pppuStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined1 uStack_109;
  code *pcStack_108;
  undefined **appuStack_100 [2];
  undefined1 *puStack_f0;
  long lStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  long *plStack_58;
  undefined8 **ppuStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a1d6598(&lStack_80);
  ppuStack_50 = &puStack_98;
  puStack_98 = &uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_68 = FUN_10ad48c6c;
  ppuStack_60 = &PTR_FUN_110c70330;
  plStack_58 = &lStack_80;
  FUN_10ad471fc(*(long *)(*param_1 + 8) + 0xa8,&pcStack_68);
  (*(code *)*ppuStack_60)(&ppuStack_60);
  FUN_10a1ce910(&puStack_98,uStack_90);
  plVar1 = &lStack_80;
  FUN_10a1ce910(plVar1,uStack_78);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  FUN_10a1ce910(&puStack_98,uStack_90);
  FUN_10a1ce910(&lStack_80);
  plVar2 = plVar1;
  __Unwind_Resume();
  pcStack_a8 = FUN_10ad4825c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_109 = 0;
  pcStack_108 = FUN_10ad48fb8;
  appuStack_100[0] = &PTR_FUN_110c70350;
  puStack_f0 = &uStack_109;
  ppcVar5 = &pcStack_108;
  plStack_c0 = &lStack_80;
  plStack_b8 = plVar1;
  puStack_b0 = &stack0xfffffffffffffff0;
  FUN_10ad471fc(*(long *)(*plVar2 + 8) + 0xa8);
  pppuVar3 = appuStack_100;
  (*(code *)*appuStack_100[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    (*(code *)*appuStack_100[0])(appuStack_100);
    __Unwind_Resume(pppuVar3);
    pcStack_118 = FUN_10ad48310;
    puVar4 = &UNK_10f6a7280;
    ppuStack_120 = &puStack_b0;
    FUN_109ffde64();
    pcStack_128 = FUN_10ad48324;
    plStack_140 = &lStack_80;
    pppuStack_138 = pppuVar3;
    if ((code **)0xaaaaaaaaaaaaaaa < ppcVar5) {
      puStack_130 = (undefined1 *)&ppuStack_120;
      func_0x000109ffded8();
      uStack_148 = 0x10ad48368;
      pplStack_188 = &plStack_170;
      pplStack_180 = &plStack_168;
      plStack_168 = param_4;
      ppcVar6 = ppcVar5;
      puStack_190 = puVar4;
      plStack_170 = param_4;
      plStack_160 = &lStack_80;
      pppuStack_158 = pppuVar3;
      ppuStack_150 = &puStack_130;
      if (ppcVar5 == param_3) {
        uStack_178 = 1;
      }
      else {
        do {
          *plStack_168 = 0;
          plStack_168[1] = 0;
          plStack_168[2] = 0;
          pcVar7 = *ppcVar6;
          plStack_168[1] = (long)ppcVar6[1];
          *plStack_168 = (long)pcVar7;
          plStack_168[2] = (long)ppcVar6[2];
          *ppcVar6 = (code *)0x0;
          ppcVar6[1] = (code *)0x0;
          ppcVar6[2] = (code *)0x0;
          ppcVar6 = ppcVar6 + 3;
          plStack_168 = plStack_168 + 3;
        } while (ppcVar6 != param_3);
        uStack_178 = 1;
        do {
          if (*ppcVar5 != (code *)0x0) {
            ppcVar5[1] = *ppcVar5;
            __ZdlPv();
          }
          ppcVar5 = ppcVar5 + 3;
        } while (ppcVar5 != param_3);
      }
      FUN_10ad48420(&puStack_190);
      return;
    }
    puStack_130 = (undefined1 *)&ppuStack_120;
    __Znwm((long)ppcVar5 * 0x18);
    return;
  }
  return;
}



/* Entry: 10ad4825c; end: 10ad4830f;  */

void FUN_10ad4825c(long *param_1,undefined8 param_2,code **param_3,long *param_4)

{
  undefined ***pppuVar1;
  undefined *puVar2;
  code **ppcVar3;
  code **ppcVar4;
  code *pcVar5;
  undefined *puStack_f0;
  long **pplStack_e8;
  long **pplStack_e0;
  undefined1 uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 uStack_69;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_69 = 0;
  pcStack_68 = FUN_10ad48fb8;
  ppuStack_60 = &PTR_FUN_110c70350;
  puStack_50 = &uStack_69;
  ppcVar3 = &pcStack_68;
  uStack_58 = param_2;
  FUN_10ad471fc(*(long *)(*param_1 + 8) + 0xa8);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar1);
  puVar2 = &UNK_10f6a7280;
  FUN_109ffde64();
  if ((code **)0xaaaaaaaaaaaaaaa < ppcVar3) {
    func_0x000109ffded8();
    pplStack_e8 = &plStack_d0;
    pplStack_e0 = &plStack_c8;
    plStack_c8 = param_4;
    ppcVar4 = ppcVar3;
    puStack_f0 = puVar2;
    plStack_d0 = param_4;
    if (ppcVar3 == param_3) {
      uStack_d8 = 1;
    }
    else {
      do {
        *plStack_c8 = 0;
        plStack_c8[1] = 0;
        plStack_c8[2] = 0;
        pcVar5 = *ppcVar4;
        plStack_c8[1] = (long)ppcVar4[1];
        *plStack_c8 = (long)pcVar5;
        plStack_c8[2] = (long)ppcVar4[2];
        *ppcVar4 = (code *)0x0;
        ppcVar4[1] = (code *)0x0;
        ppcVar4[2] = (code *)0x0;
        ppcVar4 = ppcVar4 + 3;
        plStack_c8 = plStack_c8 + 3;
      } while (ppcVar4 != param_3);
      uStack_d8 = 1;
      do {
        if (*ppcVar3 != (code *)0x0) {
          ppcVar3[1] = *ppcVar3;
          __ZdlPv();
        }
        ppcVar3 = ppcVar3 + 3;
      } while (ppcVar3 != param_3);
    }
    FUN_10ad48420(&puStack_f0);
    return;
  }
  __Znwm((long)ppcVar3 * 0x18);
  return;
}



/* Entry: 10ad48310; end: 10ad48323;  */

void FUN_10ad48310(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined *puStack_80;
  long **pplStack_78;
  long **pplStack_70;
  undefined1 uStack_68;
  long *plStack_60;
  long *plStack_58;
  
  puVar1 = &UNK_10f6a7280;
  FUN_109ffde64();
  if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
    func_0x000109ffded8();
    pplStack_78 = &plStack_60;
    pplStack_70 = &plStack_58;
    plStack_58 = param_4;
    plVar2 = param_2;
    puStack_80 = puVar1;
    plStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        *plStack_58 = 0;
        plStack_58[1] = 0;
        plStack_58[2] = 0;
        lVar3 = *plVar2;
        plStack_58[1] = plVar2[1];
        *plStack_58 = lVar3;
        plStack_58[2] = plVar2[2];
        *plVar2 = 0;
        plVar2[1] = 0;
        plVar2[2] = 0;
        plVar2 = plVar2 + 3;
        plStack_58 = plStack_58 + 3;
      } while (plVar2 != param_3);
      uStack_68 = 1;
      do {
        if (*param_2 != 0) {
          param_2[1] = *param_2;
          __ZdlPv();
        }
        param_2 = param_2 + 3;
      } while (param_2 != param_3);
    }
    FUN_10ad48420(&puStack_80);
    return;
  }
  __Znwm((long)param_2 * 0x18);
  return;
}



/* Entry: 10ad48324; end: 10ad4841f;  */

void FUN_10ad48324(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_70;
  long **pplStack_68;
  long **pplStack_60;
  undefined1 uStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
    func_0x000109ffded8();
    pplStack_68 = &plStack_50;
    pplStack_60 = &plStack_48;
    plStack_48 = param_4;
    plVar1 = param_2;
    uStack_70 = param_1;
    plStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        *plStack_48 = 0;
        plStack_48[1] = 0;
        plStack_48[2] = 0;
        lVar2 = *plVar1;
        plStack_48[1] = plVar1[1];
        *plStack_48 = lVar2;
        plStack_48[2] = plVar1[2];
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1[2] = 0;
        plVar1 = plVar1 + 3;
        plStack_48 = plStack_48 + 3;
      } while (plVar1 != param_3);
      uStack_58 = 1;
      do {
        if (*param_2 != 0) {
          param_2[1] = *param_2;
          __ZdlPv();
        }
        param_2 = param_2 + 3;
      } while (param_2 != param_3);
    }
    FUN_10ad48420(&uStack_70);
    return;
  }
  __Znwm((long)param_2 * 0x18);
  return;
}



/* Entry: 10ad48420; end: 10ad48453;  */

long FUN_10ad48420(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10ad48454(param_1);
  }
  return param_1;
}


