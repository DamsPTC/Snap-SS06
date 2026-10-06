/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a329c24; end: 10a329ce7;  */

void FUN_10a329c24(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  
  FUN_10a329d10(&lStack_40,param_2,param_3,0,1);
  *(undefined1 *)(lStack_40 + 8) = 1;
  lVar4 = lStack_40 + 400;
  for (lVar5 = *(long *)(lStack_40 + 0x198); lVar5 != lVar4; lVar5 = *(long *)(lVar5 + 8)) {
    FUN_10a3e7798(*(undefined8 *)(lVar5 + 0x10),1);
  }
  *param_1 = lStack_40;
  param_1[1] = (long)plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a329ce8; end: 10a329d0f;  */

void FUN_10a329ce8(code **param_1,code **param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code **ppcVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  code **ppcVar8;
  code **ppcVar9;
  code *pcVar10;
  code *pcVar11;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  code **ppcStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
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
      pcVar10 = *param_1;
      pcVar11 = param_2[1];
      if (param_2[1] != (code *)0x0) {
        pcVar1 = param_2[1] + 0x10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar3) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      (*pcVar10)(&stack0xffffffffffffffd0,param_1);
      if (pcVar11 != (code *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      return;
    }
    return;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar5 = param_1;
  ppcVar8 = param_2;
  FUN_10a688b40();
  if (ppcVar5 == (code **)0x0) {
    ppcVar9 = (code **)0x0;
    pppuStack_b8 = (undefined ***)0x0;
    if (ppcVar8 != (code **)0x0) {
      pcStack_60 = param_1[1];
      pcStack_68 = *param_1;
      if (param_1[1] != (code *)0x0) {
        pcVar10 = param_1[1] + 8;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar10,0x10);
          if (bVar3) {
            *(long *)pcVar10 = *(long *)pcVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pcStack_88 = *param_2;
      pppuVar6 = (undefined ***)param_2[1];
      if (pppuVar6 != (undefined ***)0x0) {
        pppuVar7 = pppuVar6 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar3) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pcStack_78 = FUN_10a35bf14;
      ppuStack_70 = &PTR_FUN_110bc87c0;
      uStack_98 = 0;
      uStack_90 = 0;
      if (pppuVar6 != (undefined ***)0x0) {
        pppuVar7 = pppuVar6 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar3) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      ppcVar5 = &pcStack_78;
      ppcVar9 = &pcStack_78;
      pppuStack_80 = pppuVar6;
      pcStack_58 = pcStack_88;
      pppuStack_50 = pppuVar6;
      FUN_10a4634ec(ppcVar8,ppcVar9);
      pppuVar7 = &ppuStack_70;
      (*(code *)*ppuStack_70)();
      pppuStack_b8 = pppuVar7;
      if (pppuVar6 != (undefined ***)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppuStack_b8 = pppuVar6;
      }
    }
  }
  else {
    *ppcVar5 = (code *)CONCAT44((int)((ulong)*ppcVar5 >> 0x20) + 1,(int)*ppcVar5 + 1);
    pppuVar6 = (undefined ***)*param_1;
    FUN_10a35bd1c(pppuVar6,param_2);
    iVar4 = *(int *)((long)ppcVar5 + 4) + -1;
    *(int *)((long)ppcVar5 + 4) = iVar4;
    pppuStack_b8 = pppuVar6;
    ppcVar9 = param_2;
    if (iVar4 == 0) {
      *(undefined4 *)ppcVar5 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(ppcVar5 + 1);
  FUN_10a35be08(&uStack_98);
  pppuVar6 = pppuStack_b8;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a35bd1c;
  ppcStack_c0 = ppcVar5;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_d0,pppuVar6 + 1,*pppuVar6);
  func_0x000109884820(&puStack_c8,&puStack_d0,*pppuVar6);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  (**(code **)(**pppuVar6 + 0x30))(&puStack_d0);
  FUN_10a35be34(*pppuVar6,&puStack_d0,&puStack_c8,ppcVar9);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a329d10; end: 10a32a38b;  */

long * FUN_10a329d10(undefined8 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  ulong uVar16;
  undefined *extraout_x8;
  long lVar17;
  ulong uVar18;
  undefined *puVar19;
  long *plVar20;
  long *unaff_x24;
  long *plVar21;
  undefined8 uVar22;
  ulong uVar23;
  long lStack_c8;
  long *plStack_c0;
  char cStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  undefined **ppuStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  plVar10 = *(long **)(param_2 + 0x50);
  plVar20 = param_3;
  FUN_10a3dd220();
  if (*(long *)(param_2 + 0xe0) == *(long *)(param_2 + 0xe8)) {
    FUN_10a35b718();
    func_0x00010a05253c(param_1);
    (**(code **)(*unaff_x24 + 8))();
    if (cStack_b8 == '\x01') {
      __ZNSt3__15mutex6unlockEv(plStack_c0);
    }
    __Unwind_Resume();
    lVar17 = plVar20[1];
    lVar13 = *plVar20;
    *plVar20 = 0;
    plVar20[1] = 0;
    plVar20 = (long *)plVar10[1];
    plVar10[1] = lVar17;
    *plVar10 = lVar13;
    if (plVar20 != (long *)0x0) {
      plVar4 = plVar20 + 1;
      do {
        lVar13 = *plVar4;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar8) {
          *plVar4 = lVar13 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
    return plVar10;
  }
  FUN_10a3c2fa8(&lStack_c8,*(undefined8 *)(param_2 + 0x50));
  lVar13 = lStack_c8;
  if (*(long *)(param_2 + 0x138) != 0) {
    plVar20 = *(long **)(param_2 + 0x148);
    do {
      if (plVar20 == *(long **)(param_2 + 0x150)) goto LAB_10a329f30;
      lVar17 = *plVar20;
      plVar20 = plVar20 + 2;
    } while (lVar17 != 0);
    ppuStack_80 = &PTR_DAT_110bc5a40;
    uStack_70 = 0x3f66666600000000;
    pppuVar2 = (undefined ***)0x0;
    if (param_4 != 0) {
      pppuVar2 = &ppuStack_80;
    }
    uVar22 = *(undefined8 *)(*(long *)(param_2 + 0x50) + 0x858);
    plStack_78 = (long *)param_4;
    FUN_10a3c1f6c(uVar22,lStack_c8,param_2 + 0xf8,pppuVar2,param_5);
    uVar23 = *(ulong *)(param_2 + 0x138);
    if (uVar23 != 0) {
      uVar18 = 0;
      uVar16 = uVar23;
      do {
        if ((ulong)(*(long *)(param_2 + 0x150) - *(long *)(param_2 + 0x148) >> 4) <= uVar18)
        goto LAB_10a32a2d0;
        if (*(long *)(*(long *)(param_2 + 0x148) + uVar18 * 0x10) == 0) {
          if ((ulong)(*(long *)(param_2 + 0x1a8) - *(long *)(param_2 + 0x1a0) >> 4) <= uVar18)
          goto LAB_10a32a2d0;
          puVar1 = (undefined8 *)(*(long *)(param_2 + 0x1a0) + uVar18 * 0x10);
          FUN_10a3c37bc(&ppuStack_90,uVar22,*puVar1,puVar1[1]);
          if (ppuStack_90 != (undefined **)0x0) {
            if ((ulong)(*(long *)(param_2 + 0x150) - *(long *)(param_2 + 0x148) >> 4) <= uVar18)
            goto LAB_10a32a2d0;
            FUN_10a32a38c(*(long *)(param_2 + 0x148) + uVar18 * 0x10,&ppuStack_90);
          }
          plVar20 = plStack_88;
          if (plStack_88 != (long *)0x0) {
            plVar10 = plStack_88 + 1;
            do {
              lVar17 = *plVar10;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar8) {
                *plVar10 = lVar17 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar17 == 0) {
              (**(code **)(*plStack_88 + 0x10))(plStack_88);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
            }
          }
          uVar16 = *(ulong *)(param_2 + 0x138);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar16);
    }
    if (((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 8), lVar13 != 0)) && (uVar23 != 0)) {
      lVar17 = 0;
      uVar23 = 0;
      do {
        if ((ulong)(*(long *)(param_2 + 0x150) - *(long *)(param_2 + 0x148) >> 4) <= uVar23) {
LAB_10a32a2d0:
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10a32a2d4);
          (*pcVar9)();
        }
        lVar14 = *(long *)(*(long *)(param_2 + 0x148) + lVar17);
        if (lVar14 != 0) {
          plStack_88 = *(long **)(lVar14 + 0x48);
          ppuStack_90 = *(undefined ***)(lVar14 + 0x40);
          lVar14 = lVar13 + 8;
          func_0x00010a35bf90(lVar14,&ppuStack_90);
          if (lVar14 != 0) {
            lVar3 = *(long *)(param_2 + 0x1a0);
            if ((ulong)(*(long *)(param_2 + 0x1a8) - lVar3 >> 4) <= uVar23) goto LAB_10a32a2d0;
            lVar11 = param_2 + 0x178;
            uVar18 = lVar14 + 0x20;
            FUN_10a35c038(lVar11,uVar18,lVar14 + 0x20,lVar3 + lVar17);
            if ((uVar18 & 1) == 0) {
              uVar22 = *(undefined8 *)(lVar3 + lVar17);
              *(undefined8 *)(lVar11 + 0x28) = ((undefined8 *)(lVar3 + lVar17))[1];
              *(undefined8 *)(lVar11 + 0x20) = uVar22;
            }
          }
        }
        uVar23 = uVar23 + 1;
        lVar17 = lVar17 + 0x10;
      } while (uVar23 != *(ulong *)(param_2 + 0x138));
    }
  }
LAB_10a329f30:
  plVar10 = (long *)0x158;
  __Znwm();
  FUN_10a0f6cac();
  *plVar10 = (long)&PTR_FUN_110bc6158;
  plVar10[0xf] = (long)&PTR_FUN_110bc63d0;
  plVar10[0x29] = 0;
  plVar10[0x2a] = 0;
  plVar10[0x28] = 0;
  *(undefined1 *)plVar10[1] = 1;
  plVar4 = *(long **)(param_2 + 0x168);
  for (plVar20 = *(long **)(param_2 + 0x160); plVar20 != plVar4; plVar20 = plVar20 + 2) {
    ppuStack_80 = (undefined **)0x0;
    plStack_78 = (long *)0x0;
    plVar12 = (long *)plVar20[1];
    if (plVar12 == (long *)0x0) {
LAB_10a32a008:
      plVar12 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar21 = plStack_78 + 1;
        do {
          lVar13 = *plVar21;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar8) {
            *plVar21 = lVar13 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar12 != (long *)0x0) {
        ppuStack_80 = (undefined **)*plVar20;
        plStack_78 = plVar12;
        if (ppuStack_80 != (undefined **)0x0) {
          lVar13 = plVar10[1];
          puVar19 = ppuStack_80[8];
          puVar5 = ppuStack_80[9];
          plVar21 = plVar12 + 1;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar8) {
              *plVar21 = *plVar21 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          ppuStack_90 = ppuStack_80;
          plStack_88 = plVar12;
          FUN_10a571164(lVar13,puVar19,puVar5,&ppuStack_90);
          plVar12 = plStack_88;
          if (plStack_88 != (long *)0x0) {
            plVar21 = plStack_88 + 1;
            do {
              lVar13 = *plVar21;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar8) {
                *plVar21 = lVar13 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plStack_88 + 0x10))(plStack_88);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
            }
          }
        }
        goto LAB_10a32a008;
      }
    }
  }
  plVar20 = *(long **)(param_2 + 0x148);
  plVar4 = *(long **)(param_2 + 0x150);
  do {
    if (plVar20 == plVar4) {
      ppuStack_80 = &PTR_DAT_110bc5a40;
      plStack_78 = (long *)0x0;
      uStack_70 = 0x3f80000000000000;
      if ((param_4 != 0) && (lVar13 = *(long *)(param_2 + 0x1c0), lVar13 != 0)) {
        uStack_70 = 0x3dcccccd3f666666;
        plVar10[0x2a] = (long)&ppuStack_80;
        plVar10[0x28] = lVar13;
        plStack_78 = (long *)param_4;
      }
      FUN_10a34ada8(param_1,plVar10,0);
      (**(code **)(*plVar10 + 0x238))(plVar10,param_5);
      if (lStack_c8 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = *(long *)(lStack_c8 + 8);
      }
      lVar17 = plVar10[1];
      if ((int)param_5 == 0) {
        lVar14 = *(long *)(param_2 + 0x50);
        FUN_10a3cfa0c();
        if (lVar14 != 0) {
          if (lVar13 != 0) {
            FUN_10a571240(lVar13,lVar14 + 0x98);
          }
          if (lVar17 != 0) {
            FUN_10a571240(lVar17,lVar14 + 0x98);
          }
        }
      }
      if (lVar13 != 0) {
        FUN_10a57120c(lVar13);
      }
      if (lVar17 != 0) {
        FUN_10a57120c(lVar17);
      }
      if ((((*(byte *)(param_2 + 0x1c9) & 1) == 0) && (*(char *)(param_2 + 0x1c8) == '\x01')) &&
         (*(char *)(param_2 + 0x1b8) == '\x01')) {
        lVar13 = *(long *)(param_2 + 0x148);
        lVar17 = *(long *)(param_2 + 0x150);
        while (lVar17 != lVar13) {
          lVar17 = lVar17 + -0x10;
          func_0x00010a052384();
        }
        *(long *)(param_2 + 0x150) = lVar13;
        FUN_10a3281fc(param_2 + 0x148,*(undefined8 *)(param_2 + 0x138));
      }
      if (param_3 != (long *)0x0) {
        FUN_10a0c3500(*param_1,param_3);
      }
      (**(code **)(*plVar10 + 8))(plVar10);
      if (cStack_b8 == '\x01') {
        __ZNSt3__15mutex6unlockEv(plStack_c0);
        plVar10 = plStack_c0;
      }
      if ((int)param_5 == 1) {
        ppuVar15 = &PTR___tlv_bootstrap_11340df48;
        (*(code *)PTR___tlv_bootstrap_11340df48)(*(undefined8 *)(param_2 + 0x50));
        puVar19 = *ppuVar15;
        *ppuVar15 = extraout_x8;
        plVar10 = (long *)(extraout_x8 + 0x200);
        FUN_10a5b44b8(plVar10);
        *ppuVar15 = puVar19;
      }
      return plVar10;
    }
    lVar13 = *plVar20;
    if (lVar13 != 0) {
      plStack_78 = *(long **)(lVar13 + 0x48);
      ppuStack_80 = *(undefined ***)(lVar13 + 0x40);
      lVar13 = param_2 + 0x178;
      FUN_10a35c254(lVar13,&ppuStack_80);
      if (lVar13 == 0) {
        lVar13 = plVar10[1];
        lStack_b0 = *plVar20;
        plStack_a8 = (long *)plVar20[1];
        uVar22 = *(undefined8 *)(lStack_b0 + 0x40);
        uVar6 = *(undefined8 *)(lStack_b0 + 0x48);
        if (plStack_a8 != (long *)0x0) {
          plVar12 = plStack_a8 + 1;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar8) {
              *plVar12 = *plVar12 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        FUN_10a571164(lVar13,uVar22,uVar6,&lStack_b0);
        if (plStack_a8 != (long *)0x0) {
          plVar12 = plStack_a8 + 1;
          do {
            lVar13 = *plVar12;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar8) {
              *plVar12 = lVar13 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            plVar21 = plStack_a8;
          } while (cVar7 != '\0');
          goto LAB_10a32a118;
        }
      }
      else {
        lVar17 = plVar10[1];
        uVar22 = *(undefined8 *)(lVar13 + 0x20);
        uVar6 = *(undefined8 *)(lVar13 + 0x28);
        plStack_98 = (long *)plVar20[1];
        lStack_a0 = *plVar20;
        if (plVar20[1] != 0) {
          plVar12 = (long *)(plVar20[1] + 8);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar8) {
              *plVar12 = *plVar12 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        FUN_10a571164(lVar17,uVar22,uVar6,&lStack_a0);
        if (plStack_98 != (long *)0x0) {
          plVar12 = plStack_98 + 1;
          do {
            lVar13 = *plVar12;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar8) {
              *plVar12 = lVar13 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            plVar21 = plStack_98;
          } while (cVar7 != '\0');
LAB_10a32a118:
          if (lVar13 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
          }
        }
      }
    }
    plVar20 = plVar20 + 2;
  } while( true );
}



/* Entry: 10a32a38c; end: 10a32a42f;  */

undefined8 * FUN_10a32a38c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a32a430; end: 10a32a4c7;  */

undefined8 FUN_10a32a430(void)

{
  return 0x10000;
}



/* Entry: 10a32a4c8; end: 10a32a7d3;  */

void FUN_10a32a4c8(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f64c852,0x19);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bc8020;
  pppuVar2 = (undefined8 ***)&UNK_10f64efef;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x4000000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x111;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bc8020;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c46558;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64f3ef,FUN_10a35c354,FUN_10a35c428);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64f3fb,FUN_10a35c690,FUN_10a35c764);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64f408,FUN_10a35c81c,FUN_10a35c8f0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64f417,FUN_10a35c9a8,FUN_10a35ca7c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64f426,FUN_10a35cb34,FUN_10a35cbf8);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f64c852,0x19);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a32a7b8);
  (*pcVar6)();
}



/* Entry: 10a32a7d4; end: 10a32a937;  */

/* WARNING: Possible PIC construction at 0x00010a32b264: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a32b268) */
/* WARNING: Removing unreachable block (ram,0x00010a32b270) */
/* WARNING: Removing unreachable block (ram,0x00010a32b278) */
/* WARNING: Removing unreachable block (ram,0x00010a32c18c) */
/* WARNING: Removing unreachable block (ram,0x00010a32bef8) */
/* WARNING: Removing unreachable block (ram,0x00010a32be4c) */
/* WARNING: Removing unreachable block (ram,0x00010a32b92c) */
/* WARNING: Removing unreachable block (ram,0x00010a32b694) */
/* WARNING: Removing unreachable block (ram,0x00010a32b5f0) */
/* WARNING: Removing unreachable block (ram,0x00010a32b544) */
/* WARNING: Removing unreachable block (ram,0x00010a32b39c) */
/* WARNING: Removing unreachable block (ram,0x00010a32accc) */
/* WARNING: Removing unreachable block (ram,0x00010a32aa08) */
/* WARNING: Removing unreachable block (ram,0x00010a32aab4) */
/* WARNING: Removing unreachable block (ram,0x00010a32b450) */
/* WARNING: Removing unreachable block (ram,0x00010a32b59c) */
/* WARNING: Removing unreachable block (ram,0x00010a32b644) */
/* WARNING: Removing unreachable block (ram,0x00010a32b780) */
/* WARNING: Removing unreachable block (ram,0x00010a32be3c) */
/* WARNING: Removing unreachable block (ram,0x00010a32bea4) */
/* WARNING: Removing unreachable block (ram,0x00010a32bf4c) */
/* WARNING: Removing unreachable block (ram,0x00010a32c1c0) */
/* WARNING: Removing unreachable block (ram,0x00010a32aafc) */
/* WARNING: Removing unreachable block (ram,0x00010a32adec) */
/* WARNING: Removing unreachable block (ram,0x00010a32ab3c) */
/* WARNING: Removing unreachable block (ram,0x00010a32ab84) */
/* WARNING: Removing unreachable block (ram,0x00010a32abcc) */
/* WARNING: Removing unreachable block (ram,0x00010a32ac14) */
/* WARNING: Removing unreachable block (ram,0x00010a32ad9c) */

long * FUN_10a32a7d4(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  code *pcVar4;
  undefined1 *puVar5;
  bool bVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  double *pdVar10;
  long *plVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  long *plVar15;
  uint uVar16;
  undefined4 uVar17;
  long lVar18;
  uint *puVar19;
  ushort *puVar20;
  short *psVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long *unaff_x19;
  int *piVar25;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  ulong uVar26;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  undefined1 *puVar27;
  undefined8 uVar28;
  float fVar29;
  undefined8 uVar30;
  long lVar31;
  float fVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  
  puVar27 = &stack0xfffffffffffffff0;
  lVar18 = *param_1;
  if ((long *)(param_1[2] - lVar18 >> 6) < param_2) {
    if ((ulong)param_2 >> 0x3a != 0) {
      uVar28 = 0x10a32a860;
      FUN_10a0435cc();
      puVar5 = &stack0xffffffffffffffd0;
SUB_10a32a860:
      *(long **)(puVar5 + -0x30) = unaff_x22;
      *(long **)(puVar5 + -0x28) = unaff_x21;
      *(long *)(puVar5 + -0x20) = unaff_x20;
      *(long **)(puVar5 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar5 + -0x10) = puVar27;
      *(undefined8 *)(puVar5 + -8) = uVar28;
      plVar9 = (long *)param_1[1];
      if (plVar9 < (long *)param_1[2]) {
        lVar22 = param_2[1];
        lVar18 = *param_2;
        lVar33 = param_2[3];
        lVar31 = param_2[2];
        lVar34 = param_2[4];
        lVar36 = param_2[7];
        lVar35 = param_2[6];
        plVar9[5] = param_2[5];
        plVar9[4] = lVar34;
        plVar9[7] = lVar36;
        plVar9[6] = lVar35;
        plVar9[1] = lVar22;
        *plVar9 = lVar18;
        plVar9[3] = lVar33;
        plVar9[2] = lVar31;
        plVar9 = plVar9 + 8;
        plVar7 = param_1;
      }
      else {
        lVar18 = (long)plVar9 - *param_1;
        uVar26 = (lVar18 >> 6) + 1;
        if (uVar26 >> 0x3a != 0) {
          plVar9 = param_1;
          plVar7 = param_2;
          FUN_10a0435cc();
          *(long *)(puVar5 + -0x90) = unaff_x28;
          *(long **)(puVar5 + -0x88) = unaff_x27;
          *(undefined8 *)(puVar5 + -0x80) = unaff_x26;
          *(undefined8 *)(puVar5 + -0x78) = unaff_x25;
          *(long **)(puVar5 + -0x70) = unaff_x24;
          *(long **)(puVar5 + -0x68) = unaff_x23;
          *(long **)(puVar5 + -0x60) = unaff_x22;
          *(long *)(puVar5 + -0x58) = lVar18;
          *(long **)(puVar5 + -0x50) = param_2;
          *(long **)(puVar5 + -0x48) = param_1;
          *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
          *(code **)(puVar5 + -0x38) = FUN_10a32a938;
          puVar27 = puVar5 + -0x40;
          *(undefined8 *)(puVar5 + -0xa8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar26 = plVar7[1];
          if (-1 < (char)*(byte *)((long)plVar7 + 0x17)) {
            uVar26 = (ulong)*(byte *)((long)plVar7 + 0x17);
          }
          unaff_x22 = (long *)(puVar5 + -0xf0);
          FUN_10a003c90(puVar5 + -0xf0,uVar26 + 1,puVar5 + -0x1b8);
          if (uVar26 != 0) {
            plVar11 = (long *)*plVar7;
            if (-1 < *(char *)((long)plVar7 + 0x17)) {
              plVar11 = plVar7;
            }
            _memmove(unaff_x22,plVar11,uVar26);
          }
          *(undefined2 *)((long)unaff_x22 + uVar26) = 0x2f;
          puVar14 = &UNK_10f64f440;
          puVar8 = (undefined8 *)(puVar5 + -0xf0);
          plVar15 = (long *)0xe;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar8,&UNK_10f64f440,0xe);
          uVar30 = puVar8[1];
          uVar28 = *puVar8;
          *(undefined8 *)(puVar5 + -0x160) = puVar8[2];
          *(undefined8 *)(puVar5 + -0x168) = uVar30;
          *(undefined8 *)(puVar5 + -0x170) = uVar28;
          puVar8[1] = 0;
          puVar8[2] = 0;
          *puVar8 = 0;
          plVar11 = (long *)(puVar5 + -0x170);
          FUN_10ad01a04();
          if ((int)plVar11 != 0) {
            FUN_10ad01b0c(puVar5 + -0x188,puVar5 + -0x170);
            *(undefined1 **)(puVar5 + -0x1b8) = puVar5 + -0x1b0;
            *(undefined8 *)(puVar5 + -0x1b0) = 0;
            *(undefined1 **)(puVar5 + -0x260) = puVar5 + -0x1b0;
            *(undefined8 *)(puVar5 + -0x1a8) = 0;
            *(undefined8 *)(puVar5 + -0x1a0) = 0;
            *(undefined8 *)(puVar5 + -0x198) = 0;
            *(undefined8 *)(puVar5 + -400) = 0;
            func_0x00010983a984(puVar5 + -0x1b8,puVar5 + -0x188);
            puVar8 = (undefined8 *)0x20;
            __Znwm();
            *(undefined8 **)(puVar5 + -0xf0) = puVar8;
            *(undefined8 *)(puVar5 + -0xe0) = 0x8000000000000020;
            *(undefined8 *)(puVar5 + -0xe8) = 0x1e;
            puVar8[1] = 0x626f5f666f5f7265;
            *puVar8 = 0x626d756e5f78616d;
            *(undefined8 *)((long)puVar8 + 0x16) = 0x6b636172745f6f74;
            *(undefined8 *)((long)puVar8 + 0xe) = 0x5f737463656a626f;
            *(undefined1 *)((long)puVar8 + 0x1e) = 0;
            *(double *)(puVar5 + -0x1e8) = (double)*(int *)((long)plVar9 + 0x1c);
            pdVar10 = (double *)(puVar5 + -0x1b8);
            FUN_10a32c3a8(pdVar10,puVar5 + -0xf0,puVar5 + -0x1e8);
            *(int *)((long)plVar9 + 0x1c) = (int)*pdVar10;
            puVar5[-0xd9] = 0xc;
            *(undefined4 *)(puVar5 + -0xe8) = 0x736c6562;
            *(undefined8 *)(puVar5 + -0xf0) = 0x616c5f746e657665;
            puVar5[-0xe4] = 0;
            FUN_10a32c428(puVar5 + -0x1b8,puVar5 + -0xf0,plVar9 + 8);
            puVar5[-0xd9] = 6;
            *(undefined4 *)(puVar5 + -0xf0) = 0x6562616c;
            *(undefined2 *)(puVar5 + -0xec) = 0x736c;
            puVar5[-0xea] = 0;
            FUN_10a32c428(puVar5 + -0x1b8,puVar5 + -0xf0,plVar9 + 5);
            puVar5[-0xd9] = 0xf;
            *(undefined8 *)(puVar5 + -0xf0) = 0x6b72616d646e616c;
            *(undefined8 *)(puVar5 + -0xe9) = 0x736c6562616c5f6b;
            puVar5[-0xe1] = 0;
            FUN_10a32c428(puVar5 + -0x1b8,puVar5 + -0xf0,plVar9 + 0xb);
            puVar5[-0xd9] = 0xf;
            *(undefined8 *)(puVar5 + -0xf0) = 0x6e6f697461746f72;
            *(undefined8 *)(puVar5 + -0xe9) = 0x736c6562616c5f6e;
            puVar5[-0xe1] = 0;
            FUN_10a32c428(puVar5 + -0x1b8,puVar5 + -0xf0,plVar9 + 0xe);
            puVar5[-0xd9] = 0xc;
            *(undefined4 *)(puVar5 + -0xe8) = 0x736c6562;
            *(undefined8 *)(puVar5 + -0xf0) = 0x616c5f736b73616d;
            puVar5[-0xe4] = 0;
            FUN_10a32c428(puVar5 + -0x1b8,puVar5 + -0xf0,plVar9 + 0x11);
            *(long **)(puVar5 + -0x240) = plVar9 + 0x14;
            func_0x00010a35ced0();
            func_0x000107c2b054(puVar5 + -0x110,&UNK_10f64f44f);
            *(undefined1 **)(puVar5 + -0xf0) = puVar5 + -0xe8;
            *(undefined8 *)(puVar5 + -0xe8) = 0;
            *(undefined8 *)(puVar5 + -0xe0) = 0;
            *(undefined8 *)(puVar5 + -0xd8) = 0;
            *(undefined8 *)(puVar5 + -0xd0) = 0;
            *(undefined8 *)(puVar5 + -200) = 0;
            puVar13 = puVar5 + -0x1b8;
            FUN_10a10a278(puVar13,puVar5 + -0x110);
            if ((*(undefined1 **)(puVar5 + -0x260) == puVar13) || (**(int **)(puVar13 + 0x38) != 5))
            {
              puVar13 = puVar5 + -0xf0;
              unaff_x19 = unaff_x22;
            }
            else {
              puVar13 = puVar5 + -0x1b8;
              FUN_10a10a278(puVar13,puVar5 + -0x110);
              unaff_x19 = *(long **)(puVar13 + 0x38);
              func_0x0001098390a4(&UNK_10f63c7bf,0x1e5,&UNK_10f6514b1,(int)*unaff_x19 == 5);
              puVar13 = (undefined1 *)unaff_x19[1];
            }
            func_0x00010983a670(puVar5 + -0x1e8,puVar13);
            func_0x000109839668(puVar5 + -0xf0);
            if (*(long *)(puVar5 + -0x1d8) == 0) {
              *(undefined8 *)(puVar5 + -0x110) = 0;
              *(undefined8 *)(puVar5 + -0x108) = 0;
              *(undefined8 *)(puVar5 + -0x100) = 0;
              *(undefined8 *)(puVar5 + -0x130) = 0;
              *(undefined8 *)(puVar5 + -0x128) = 0;
              *(undefined8 *)(puVar5 + -0x120) = 0;
              puVar8 = (undefined8 *)0x20;
              __Znwm();
              *(undefined8 **)(puVar5 + -0xf0) = puVar8;
              *(undefined8 *)(puVar5 + -0xe0) = 0x8000000000000020;
              *(undefined8 *)(puVar5 + -0xe8) = 0x19;
              puVar8[1] = 0x746e696f705f746e;
              *puVar8 = 0x656d686361747461;
              *(undefined8 *)((long)puVar8 + 0x11) = 0x656d616e5f64335f;
              *(undefined8 *)((long)puVar8 + 9) = 0x73746e696f705f74;
              *(undefined1 *)((long)puVar8 + 0x19) = 0;
              FUN_10a32c428(puVar5 + -0x1b8,puVar5 + -0xf0,puVar5 + -0x110);
              puVar8 = (undefined8 *)0x28;
              __Znwm();
              *(undefined8 **)(puVar5 + -0xf0) = puVar8;
              *(undefined8 *)(puVar5 + -0xe0) = 0x8000000000000028;
              *(undefined8 *)(puVar5 + -0xe8) = 0x20;
              puVar8[1] = 0x746e696f705f746e;
              *puVar8 = 0x656d686361747461;
              puVar8[3] = 0x656d616e5f746e65;
              puVar8[2] = 0x7261705f64335f73;
              *(undefined1 *)(puVar8 + 4) = 0;
              FUN_10a32c428(puVar5 + -0x1b8,puVar5 + -0xf0,puVar5 + -0x130);
              *(undefined8 *)(puVar5 + -0xf0) = 0;
              *(undefined8 *)(puVar5 + -0xe8) = 0;
              *(undefined8 *)(puVar5 + -0xe0) = 0;
              FUN_10a0cf0cc(puVar5 + -0xf0,*(long *)(puVar5 + -0x110),*(long *)(puVar5 + -0x108),
                            (*(long *)(puVar5 + -0x108) - *(long *)(puVar5 + -0x110) >> 3) *
                            -0x5555555555555555);
              *(undefined8 *)(puVar5 + -0xd8) = 0;
              *(undefined8 *)(puVar5 + -0xd0) = 0;
              *(undefined8 *)(puVar5 + -200) = 0;
              FUN_10a0cf0cc(puVar5 + -0xd8,*(long *)(puVar5 + -0x130),*(long *)(puVar5 + -0x128),
                            (*(long *)(puVar5 + -0x128) - *(long *)(puVar5 + -0x130) >> 3) *
                            -0x5555555555555555);
              *(undefined8 *)(puVar5 + -0xc0) = 0;
              *(undefined8 *)(puVar5 + -0xb8) = 0;
              *(undefined8 *)(puVar5 + -0xb0) = 0;
              FUN_10a35cf24(*(undefined8 *)(puVar5 + -0x240),puVar5 + -0xf0);
              if (*(long *)(puVar5 + -0xc0) != 0) {
                *(long *)(puVar5 + -0xb8) = *(long *)(puVar5 + -0xc0);
                __ZdlPv();
              }
              *(undefined1 **)(puVar5 + -0x150) = puVar5 + -0xd8;
              FUN_10a0426d8(puVar5 + -0x150);
              *(undefined1 **)(puVar5 + -0x150) = puVar5 + -0xf0;
              FUN_10a0426d8(puVar5 + -0x150);
              *(undefined1 **)(puVar5 + -0xf0) = puVar5 + -0x130;
              FUN_10a0426d8(puVar5 + -0xf0);
              *(undefined1 **)(puVar5 + -0xf0) = puVar5 + -0x110;
              FUN_10a0426d8(puVar5 + -0xf0);
            }
            else {
              func_0x000109839e84(puVar5 + -0x200,puVar5 + -0x1e8);
              *(undefined8 *)(puVar5 + -0xd8) = 0;
              func_0x0001094749d8(puVar5 + -0x110,puVar5 + -0x200,puVar5 + -0xf0,1,0);
              func_0x000109380c8c(puVar5 + -0x220,puVar5 + -0x110);
              func_0x000109380ffc(puVar5 + -0x108,puVar5[-0x110]);
              plVar7 = *(long **)(puVar5 + -0xd8);
              if (plVar7 == (long *)(puVar5 + -0xf0)) {
                lVar18 = 0x20;
LAB_10a32aeac:
                (**(code **)(*plVar7 + lVar18))();
              }
              else if (plVar7 != (long *)0x0) {
                lVar18 = 0x28;
                goto LAB_10a32aeac;
              }
              *(long **)(puVar5 + -0x248) = plVar9;
              func_0x0001094a72dc(puVar5 + -0x130,puVar5 + -0x220);
              unaff_x21 = *(long **)(puVar5 + -0x130);
              *(long **)(puVar5 + -0x250) = *(long **)(puVar5 + -0x128);
              if (unaff_x21 != *(long **)(puVar5 + -0x128)) {
                *(long *)(puVar5 + -600) = *(long *)(puVar5 + -0x248) + 0xb0;
                unaff_x25 = 0xaaaaaaaaaaaaaaab;
                unaff_x26 = 0x18;
                do {
                  func_0x0001094a68cc(puVar5 + -0x110,puVar5 + -0x220,unaff_x21);
                  func_0x0001094cb264(puVar5 + -0x138,puVar5 + -0x110);
                  func_0x000109380f8c(puVar5 + -0x110);
                  *(undefined8 *)(puVar5 + -0x148) = 0;
                  *(undefined8 *)(puVar5 + -0x140) = 0;
                  *(undefined8 *)(puVar5 + -0x150) = 0;
                  lVar18 = **(long **)(puVar5 + -0x138);
                  lVar22 = (*(long **)(puVar5 + -0x138))[1];
                  func_0x0001094cd180(puVar5 + -0x150,lVar18,lVar22,
                                      (lVar22 - lVar18 >> 3) * -0x79435e50d79435e5);
                  unaff_x20 = *(long *)(puVar5 + -0x150);
                  lVar18 = *(long *)(puVar5 + -0x148);
                  plVar9 = *(long **)(puVar5 + -0x240);
                  func_0x000107c2b05c(plVar9,unaff_x21);
                  unaff_x27 = *(long **)(*(long *)(puVar5 + -0x248) + 0xa8);
                  if (unaff_x27 != (long *)0x0) {
                    uVar26 = (long)unaff_x27 - 1;
                    if (((ulong)unaff_x27 & uVar26) == 0) {
                      unaff_x19 = (long *)(uVar26 & (ulong)plVar9);
                    }
                    else {
                      unaff_x19 = plVar9;
                      if (unaff_x27 <= plVar9) {
                        uVar24 = 0;
                        if (unaff_x27 != (long *)0x0) {
                          uVar24 = (ulong)plVar9 / (ulong)unaff_x27;
                        }
                        unaff_x19 = (long *)((long)plVar9 - uVar24 * (long)unaff_x27);
                      }
                    }
                    unaff_x28 = lVar18;
                    if (*(undefined8 **)(**(long **)(puVar5 + -0x240) + (long)unaff_x19 * 8) !=
                        (undefined8 *)0x0) {
                      for (unaff_x22 = (long *)**(undefined8 **)
                                                 (**(long **)(puVar5 + -0x240) + (long)unaff_x19 * 8
                                                 ); unaff_x22 != (long *)0x0;
                          unaff_x22 = (long *)*unaff_x22) {
                        plVar7 = (long *)unaff_x22[1];
                        if (plVar7 == plVar9) {
                          uVar24 = *(ulong *)(puVar5 + -0x240);
                          func_0x000107c2b068(uVar24,unaff_x22 + 2,unaff_x21);
                          if ((uVar24 & 1) != 0) goto LAB_10a32b17c;
                        }
                        else {
                          if (((ulong)unaff_x27 & uVar26) == 0) {
                            plVar7 = (long *)((ulong)plVar7 & uVar26);
                          }
                          else if (unaff_x27 <= plVar7) {
                            uVar24 = 0;
                            if (unaff_x27 != (long *)0x0) {
                              uVar24 = (ulong)plVar7 / (ulong)unaff_x27;
                            }
                            plVar7 = (long *)((long)plVar7 - uVar24 * (long)unaff_x27);
                          }
                          if (plVar7 != unaff_x19) break;
                        }
                      }
                    }
                  }
                  unaff_x22 = (long *)0x70;
                  __Znwm();
                  *(long **)(puVar5 + -0x110) = unaff_x22;
                  *(undefined8 *)(puVar5 + -0x108) = *(undefined8 *)(puVar5 + -0x240);
                  *(undefined8 *)(puVar5 + -0x100) = 0;
                  *unaff_x22 = 0;
                  unaff_x22[1] = (long)plVar9;
                  if (*(char *)((long)unaff_x21 + 0x17) < '\0') {
                    func_0x000107c3192c(unaff_x22 + 2,*unaff_x21,unaff_x21[1]);
                  }
                  else {
                    lVar31 = unaff_x21[1];
                    lVar22 = *unaff_x21;
                    unaff_x22[4] = unaff_x21[2];
                    unaff_x22[3] = lVar31;
                    unaff_x22[2] = lVar22;
                  }
                  unaff_x22[0xd] = 0;
                  unaff_x22[0xc] = 0;
                  unaff_x22[0xb] = 0;
                  unaff_x22[10] = 0;
                  unaff_x22[9] = 0;
                  unaff_x22[8] = 0;
                  unaff_x22[7] = 0;
                  unaff_x22[6] = 0;
                  unaff_x22[5] = 0;
                  puVar5[-0x100] = 1;
                  fVar29 = (float)(*(long *)(*(long *)(puVar5 + -0x248) + 0xb8) + 1);
                  fVar32 = *(float *)(*(long *)(puVar5 + -0x248) + 0xc0);
                  if ((unaff_x27 == (long *)0x0) || (fVar32 * (float)unaff_x27 < fVar29)) {
                    uVar26 = 1;
                    if ((long *)0x2 < unaff_x27) {
                      uVar26 = (ulong)(((ulong)unaff_x27 & (long)unaff_x27 - 1U) != 0);
                    }
                    uVar26 = uVar26 | (long)unaff_x27 << 1;
                    uVar24 = (ulong)(fVar29 / fVar32);
                    if (uVar26 <= uVar24) {
                      uVar26 = uVar24;
                    }
                    FUN_10a35ccb8(*(undefined8 *)(puVar5 + -0x240),uVar26);
                    unaff_x27 = *(long **)(*(long *)(puVar5 + -0x248) + 0xa8);
                    if (((ulong)unaff_x27 & (long)unaff_x27 - 1U) == 0) {
                      unaff_x19 = (long *)((long)unaff_x27 - 1U & (ulong)plVar9);
                    }
                    else {
                      unaff_x19 = plVar9;
                      if (unaff_x27 <= plVar9) {
                        uVar26 = 0;
                        if (unaff_x27 != (long *)0x0) {
                          uVar26 = (ulong)plVar9 / (ulong)unaff_x27;
                        }
                        unaff_x19 = (long *)((long)plVar9 - uVar26 * (long)unaff_x27);
                      }
                    }
                  }
                  lVar22 = **(long **)(puVar5 + -0x240);
                  plVar9 = *(long **)(lVar22 + (long)unaff_x19 * 8);
                  if (plVar9 == (long *)0x0) {
                    plVar9 = *(long **)(puVar5 + -600);
                    *unaff_x22 = *plVar9;
                    *plVar9 = (long)unaff_x22;
                    *(long **)(lVar22 + (long)unaff_x19 * 8) = plVar9;
                    if (*unaff_x22 != 0) {
                      plVar9 = *(long **)(*unaff_x22 + 8);
                      if (((ulong)unaff_x27 & (long)unaff_x27 - 1U) == 0) {
                        plVar9 = (long *)((ulong)plVar9 & (long)unaff_x27 - 1U);
                      }
                      else if (unaff_x27 <= plVar9) {
                        uVar26 = 0;
                        if (unaff_x27 != (long *)0x0) {
                          uVar26 = (ulong)plVar9 / (ulong)unaff_x27;
                        }
                        plVar9 = (long *)((long)plVar9 - uVar26 * (long)unaff_x27);
                      }
                      *(long **)(**(long **)(puVar5 + -0x240) + (long)plVar9 * 8) = unaff_x22;
                    }
                  }
                  else {
                    *unaff_x22 = *plVar9;
                    *plVar9 = (long)unaff_x22;
                  }
                  *(long *)(*(long *)(puVar5 + -0x248) + 0xb8) =
                       *(long *)(*(long *)(puVar5 + -0x248) + 0xb8) + 1;
LAB_10a32b17c:
                  lVar18 = (lVar18 - unaff_x20 >> 3) * -0x79435e50d79435e5;
                  FUN_10a042718(unaff_x22 + 5);
                  func_0x000107c31930(unaff_x22 + 5,lVar18);
                  FUN_10a042718(unaff_x22 + 8);
                  func_0x000107c31930(unaff_x22 + 8,lVar18);
                  param_1 = unaff_x22 + 0xb;
                  unaff_x22[0xc] = *param_1;
                  FUN_10a32a7d4(param_1,lVar18);
                  unaff_x19 = *(long **)(puVar5 + -0x150);
                  unaff_x24 = *(long **)(puVar5 + -0x148);
                  if (unaff_x19 != unaff_x24) goto code_r0x00010a32b1e4;
                  *(undefined1 **)(puVar5 + -0x110) = puVar5 + -0x150;
                  FUN_10a34e6f0(puVar5 + -0x110);
                  lVar18 = *(long *)(puVar5 + -0x138);
                  *(undefined8 *)(puVar5 + -0x138) = 0;
                  if (lVar18 != 0) {
                    func_0x0001094cf2b0(puVar5 + -0x138);
                  }
                  unaff_x21 = unaff_x21 + 3;
                  if (unaff_x21 == *(long **)(puVar5 + -0x250)) break;
                } while( true );
              }
              *(undefined1 **)(puVar5 + -0x110) = puVar5 + -0x130;
              FUN_10a0426d8(puVar5 + -0x110);
              func_0x000109380f8c(puVar5 + -0x220);
              if ((char)puVar5[-0x1e9] < '\0') {
                __ZdlPv(*(undefined8 *)(puVar5 + -0x200));
              }
              plVar9 = *(long **)(puVar5 + -0x248);
            }
            *(undefined8 *)(puVar5 + -0xf0) = 0;
            *(undefined8 *)(puVar5 + -0xe8) = 0;
            func_0x00010a32c640(plVar9 + 0x19,puVar5 + -0xf0);
            plVar7 = *(long **)(puVar5 + -0xe8);
            if (plVar7 != (long *)0x0) {
              plVar11 = plVar7 + 1;
              do {
                lVar18 = *plVar11;
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar6) {
                  *plVar11 = lVar18 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar18 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
              }
            }
            puVar5[-0xd9] = 0xd;
            *(undefined8 *)(puVar5 + -0xf0) = 0x665f646564697567;
            plVar7 = (long *)0x7265746c69665f64;
            *(undefined8 *)(puVar5 + -0xeb) = 0x7265746c69665f64;
            puVar5[-0xe3] = 0;
            puVar13 = puVar5 + -0x1b8;
            FUN_10a10a278(puVar13,puVar5 + -0xf0);
            if (*(undefined1 **)(puVar5 + -0x260) == puVar13) {
              uVar26 = 0;
            }
            else {
              uVar26 = (ulong)(**(int **)(puVar13 + 0x38) == 5);
            }
            if ((int)uVar26 != 0) {
              puVar5[-0xf9] = 0xd;
              *(undefined8 *)(puVar5 + -0x110) = 0x665f646564697567;
              *(undefined8 *)(puVar5 + -0x10b) = 0x7265746c69665f64;
              puVar5[-0x103] = 0;
              puVar13 = puVar5 + -0x1b8;
              FUN_10a10a278(puVar13,puVar5 + -0x110);
              if (*(undefined1 **)(puVar5 + -0x260) == puVar13) {
                bVar6 = false;
              }
              else {
                bVar6 = **(int **)(puVar13 + 0x38) == 5;
              }
              func_0x0001098390a4(&UNK_10f63c7bf,0x18b,&UNK_10f63cc4d,bVar6);
              puVar13 = puVar5 + -0x1b8;
              func_0x00010983b55c(puVar13,puVar5 + -0x110);
              piVar25 = *(int **)(puVar13 + 0x38);
              func_0x0001098390a4(&UNK_10f63c7bf,0x1e5,&UNK_10f6514b1,*piVar25 == 5);
              func_0x00010983a670(puVar5 + -0xf0,*(undefined8 *)(piVar25 + 2));
              puVar8 = (undefined8 *)0x48;
              __Znwm();
              puVar8[1] = 0;
              puVar8[2] = 0;
              *puVar8 = &PTR_FUN_110bc66a8;
              puVar8[4] = 0x10000000080;
              puVar8[3] = 0x8000000000;
              puVar8[5] = 0x3bf5c28f00000100;
              puVar8[6] = 0x3f80000000000000;
              puVar8[7] = 0x200000002;
              *(undefined4 *)(puVar8 + 8) = 1;
              *(undefined8 **)(puVar5 + -0x110) = puVar8 + 3;
              *(undefined8 **)(puVar5 + -0x108) = puVar8;
              func_0x00010a32c640(plVar9 + 0x19,puVar5 + -0x110);
              plVar7 = *(long **)(puVar5 + -0x108);
              if (plVar7 != (long *)0x0) {
                plVar11 = plVar7 + 1;
                do {
                  lVar18 = *plVar11;
                  cVar3 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar6) {
                    *plVar11 = lVar18 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar18 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
                }
              }
              *(undefined1 *)plVar9[0x19] = 1;
              puVar5[-0xf9] = 0x14;
              *(undefined4 *)(puVar5 + -0x100) = 0x68746469;
              *(undefined8 *)(puVar5 + -0x108) = 0x775f676e69737365;
              *(undefined8 *)(puVar5 + -0x110) = 0x636f72705f6e696d;
              puVar5[-0xfc] = 0;
              pdVar10 = (double *)(puVar5 + -0xf0);
              func_0x00010a32c6a4(pdVar10,puVar5 + -0x110);
              *(int *)(plVar9[0x19] + 4) = (int)*pdVar10;
              puVar5[-0xf9] = 0x15;
              *(undefined8 *)(puVar5 + -0x108) = 0x685f676e69737365;
              *(undefined8 *)(puVar5 + -0x110) = 0x636f72705f6e696d;
              *(undefined8 *)(puVar5 + -0x103) = 0x7468676965685f67;
              puVar5[-0xfb] = 0;
              pdVar10 = (double *)(puVar5 + -0xf0);
              func_0x00010a32c6a4(pdVar10,puVar5 + -0x110);
              *(int *)(plVar9[0x19] + 8) = (int)*pdVar10;
              puVar5[-0xf9] = 0x14;
              *(undefined4 *)(puVar5 + -0x100) = 0x68746469;
              *(undefined8 *)(puVar5 + -0x108) = 0x775f657275747865;
              *(undefined8 *)(puVar5 + -0x110) = 0x745f74757074756f;
              puVar5[-0xfc] = 0;
              pdVar10 = (double *)(puVar5 + -0xf0);
              func_0x00010a32c6a4(pdVar10,puVar5 + -0x110);
              *(int *)(plVar9[0x19] + 0xc) = (int)*pdVar10;
              puVar5[-0xf9] = 0x15;
              *(undefined8 *)(puVar5 + -0x108) = 0x685f657275747865;
              *(undefined8 *)(puVar5 + -0x110) = 0x745f74757074756f;
              *(undefined8 *)(puVar5 + -0x103) = 0x7468676965685f65;
              puVar5[-0xfb] = 0;
              pdVar10 = (double *)(puVar5 + -0xf0);
              func_0x00010a32c6a4(pdVar10,puVar5 + -0x110);
              *(int *)(plVar9[0x19] + 0x10) = (int)*pdVar10;
              puVar5[-0xf9] = 10;
              *(undefined2 *)(puVar5 + -0x108) = 0x7173;
              *(undefined8 *)(puVar5 + -0x110) = 0x5f6e6f6c69737065;
              puVar5[-0x106] = 0;
              pdVar10 = (double *)(puVar5 + -0xf0);
              func_0x00010a32c6a4(pdVar10,puVar5 + -0x110);
              *(float *)(plVar9[0x19] + 0x14) = (float)*pdVar10;
              puVar5[-0x119] = 0x14;
              *(undefined4 *)(puVar5 + -0x120) = 0x65707974;
              *(undefined8 *)(puVar5 + -0x128) = 0x5f676e6973736563;
              *(undefined8 *)(puVar5 + -0x130) = 0x6f72705f6b73616d;
              puVar5[-0x11c] = 0;
              puVar13 = puVar5 + -0xf0;
              FUN_10a10a278(puVar13,puVar5 + -0x130);
              if (puVar5 + -0xe8 == puVar13) {
                bVar6 = false;
              }
              else {
                bVar6 = **(int **)(puVar13 + 0x38) == 1;
              }
              func_0x0001098390a4(&UNK_10f63c7bf,0x18b,&UNK_10f63cc4d,bVar6);
              puVar13 = puVar5 + -0xf0;
              func_0x00010983b55c(puVar13,puVar5 + -0x130);
              piVar25 = *(int **)(puVar13 + 0x38);
              func_0x0001098390a4(&UNK_10f63c7bf,0x1d3,&UNK_10f580d70,*piVar25 == 1);
              puVar8 = *(undefined8 **)(piVar25 + 2);
              if (*(char *)((long)puVar8 + 0x17) < '\0') {
                func_0x000107c3192c(puVar5 + -0x110,*puVar8,puVar8[1]);
              }
              else {
                uVar30 = puVar8[1];
                uVar28 = *puVar8;
                *(undefined8 *)(puVar5 + -0x100) = puVar8[2];
                *(undefined8 *)(puVar5 + -0x108) = uVar30;
                *(undefined8 *)(puVar5 + -0x110) = uVar28;
              }
              lVar18 = plVar9[0x19];
              *(undefined4 *)(lVar18 + 0x18) = 0;
              cVar3 = puVar5[-0xf9];
              if (cVar3 < '\0') {
                lVar22 = *(long *)(puVar5 + -0x108);
                if (lVar22 != 5) {
                  if (lVar22 == 6) {
                    if (**(int **)(puVar5 + -0x110) == 0x6f6f6d73 &&
                        (short)(*(int **)(puVar5 + -0x110))[1] == 0x6874) goto LAB_10a32b898;
                  }
                  else if ((lVar22 == 0xe) &&
                          (**(long **)(puVar5 + -0x110) == 0x696c7069746c756d &&
                           *(long *)((long)*(long **)(puVar5 + -0x110) + 6) == 0x6e6f69746163696c))
                  goto LAB_10a32b840;
                  goto LAB_10a32b934;
                }
                piVar25 = *(int **)(puVar5 + -0x110);
LAB_10a32b8a8:
                if (*piVar25 == 0x6c616373 && (char)piVar25[1] == 'e') {
                  *(undefined4 *)(lVar18 + 0x18) = 3;
                  puVar8 = (undefined8 *)0x20;
                  __Znwm();
                  *(undefined8 **)(puVar5 + -0x130) = puVar8;
                  *(undefined8 *)(puVar5 + -0x120) = 0x8000000000000020;
                  *(undefined8 *)(puVar5 + -0x128) = 0x1a;
                  puVar8[1] = 0x5f676e6973736563;
                  *puVar8 = 0x6f72705f6b73616d;
                  *(undefined8 *)((long)puVar8 + 0x12) = 0x7265696c7069746c;
                  *(undefined8 *)((long)puVar8 + 10) = 0x756d5f676e697373;
                  *(undefined1 *)((long)puVar8 + 0x1a) = 0;
                  pdVar10 = (double *)(puVar5 + -0xf0);
                  func_0x00010a32c6a4(pdVar10,puVar5 + -0x130);
                  *(float *)(plVar9[0x19] + 0x1c) = (float)*pdVar10;
                }
              }
              else {
                if (cVar3 == '\x05') {
                  piVar25 = (int *)(puVar5 + -0x110);
                  goto LAB_10a32b8a8;
                }
                if (cVar3 == '\x06') {
                  if (*(int *)(puVar5 + -0x110) == 0x6f6f6d73 &&
                      *(short *)(puVar5 + -0x10c) == 0x6874) {
LAB_10a32b898:
                    uVar17 = 1;
                    goto LAB_10a32b89c;
                  }
                }
                else if ((cVar3 == '\x0e') &&
                        (*(long *)(puVar5 + -0x110) == 0x696c7069746c756d &&
                         *(long *)(puVar5 + -0x10a) == 0x6e6f69746163696c)) {
LAB_10a32b840:
                  uVar17 = 2;
LAB_10a32b89c:
                  *(undefined4 *)(lVar18 + 0x18) = uVar17;
                }
              }
LAB_10a32b934:
              puVar8 = (undefined8 *)0x20;
              __Znwm();
              *(undefined8 **)(puVar5 + -0x150) = puVar8;
              *(undefined8 *)(puVar5 + -0x140) = 0x8000000000000020;
              *(undefined8 *)(puVar5 + -0x148) = 0x18;
              puVar8[1] = 0x697665645f64696f;
              *puVar8 = 0x72646e615f6e696d;
              puVar8[2] = 0x7373616c635f6563;
              *(undefined1 *)(puVar8 + 3) = 0;
              func_0x000107c2b054(puVar5 + -0x200,&UNK_10f64efef);
              puVar8 = (undefined8 *)(puVar5 + -0xf0);
              func_0x00010a32c744(puVar8,puVar5 + -0x150,puVar5 + -0x200);
              if (*(char *)((long)puVar8 + 0x17) < '\0') {
                func_0x000107c3192c(puVar5 + -0x130,*puVar8,puVar8[1]);
              }
              else {
                uVar30 = puVar8[1];
                uVar28 = *puVar8;
                *(undefined8 *)(puVar5 + -0x120) = puVar8[2];
                *(undefined8 *)(puVar5 + -0x128) = uVar30;
                *(undefined8 *)(puVar5 + -0x130) = uVar28;
              }
              if ((char)puVar5[-0x1e9] < '\0') {
                __ZdlPv(*(undefined8 *)(puVar5 + -0x200));
              }
              if ((char)puVar5[-0x139] < '\0') {
                __ZdlPv(*(undefined8 *)(puVar5 + -0x150));
              }
              cVar3 = puVar5[-0x119];
              if (cVar3 < '\0') {
                if (*(long *)(puVar5 + -0x128) == 3) {
                  puVar20 = *(ushort **)(puVar5 + -0x130);
                  if (*puVar20 != 0x6f6c || (char)puVar20[1] != 'w') {
                    uVar16 = *puVar20 ^ 0x696d | (byte)puVar20[1] ^ 100;
                    goto LAB_10a32bab8;
                  }
LAB_10a32bc04:
                  uVar17 = 1;
                }
                else {
                  if (*(long *)(puVar5 + -0x128) == 4) {
                    puVar19 = *(uint **)(puVar5 + -0x130);
                    goto LAB_10a32ba10;
                  }
LAB_10a32ba38:
                  uVar17 = 0xffffffff;
                }
              }
              else {
                if (cVar3 == '\x03') {
                  if (*(short *)(puVar5 + -0x130) == 0x6f6c && puVar5[-0x12e] == 'w')
                  goto LAB_10a32bc04;
                  uVar16 = *(ushort *)(puVar5 + -0x130) ^ 0x696d | (byte)puVar5[-0x12e] ^ 100;
LAB_10a32bab8:
                  uVar17 = 2;
                }
                else {
                  if (cVar3 != '\x04') goto LAB_10a32ba38;
                  puVar19 = (uint *)(puVar5 + -0x130);
LAB_10a32ba10:
                  uVar16 = (*puVar19 & 0xff00ff00) >> 8 | (*puVar19 & 0xff00ff) << 8;
                  uVar2 = uVar16 >> 0x10 | uVar16 << 0x10;
                  uVar16 = (uint)(0x68696768 < uVar2);
                  if (uVar2 < 0x68696768) {
                    uVar16 = 0xffffffff;
                  }
                  uVar17 = 3;
                }
                if (uVar16 != 0) {
                  uVar17 = 0xffffffff;
                }
              }
              *(undefined4 *)(plVar9[0x19] + 0x20) = uVar17;
              puVar5[-0x1e9] = 0x14;
              *(undefined4 *)(puVar5 + -0x1f0) = 0x7373616c;
              *(undefined8 *)(puVar5 + -0x1f8) = 0x635f656369766564;
              *(undefined8 *)(puVar5 + -0x200) = 0x5f736f695f6e696d;
              puVar5[-0x1ec] = 0;
              func_0x000107c2b054(puVar5 + -0x220,&UNK_10f64efef);
              puVar8 = (undefined8 *)(puVar5 + -0xf0);
              func_0x00010a32c744(puVar8,puVar5 + -0x200,puVar5 + -0x220);
              if (*(char *)((long)puVar8 + 0x17) < '\0') {
                func_0x000107c3192c(puVar5 + -0x150,*puVar8,puVar8[1]);
              }
              else {
                uVar30 = puVar8[1];
                uVar28 = *puVar8;
                *(undefined8 *)(puVar5 + -0x140) = puVar8[2];
                *(undefined8 *)(puVar5 + -0x148) = uVar30;
                *(undefined8 *)(puVar5 + -0x150) = uVar28;
              }
              if ((char)puVar5[-0x209] < '\0') {
                __ZdlPv(*(undefined8 *)(puVar5 + -0x220));
              }
              if ((char)puVar5[-0x1e9] < '\0') {
                __ZdlPv(*(undefined8 *)(puVar5 + -0x200));
              }
              cVar3 = puVar5[-0x139];
              if (cVar3 < '\0') {
                if (*(long *)(puVar5 + -0x148) == 3) {
                  puVar20 = *(ushort **)(puVar5 + -0x150);
                  if (*puVar20 != 0x6f6c || (char)puVar20[1] != 'w') {
                    uVar16 = *puVar20 ^ 0x696d | (byte)puVar20[1] ^ 100;
                    goto LAB_10a32bc48;
                  }
LAB_10a32bda4:
                  uVar17 = 1;
                }
                else {
                  if (*(long *)(puVar5 + -0x148) == 4) {
                    puVar19 = *(uint **)(puVar5 + -0x150);
                    goto LAB_10a32bb98;
                  }
LAB_10a32bbc0:
                  uVar17 = 0xffffffff;
                }
              }
              else {
                if (cVar3 == '\x03') {
                  if (*(short *)(puVar5 + -0x150) == 0x6f6c && puVar5[-0x14e] == 'w')
                  goto LAB_10a32bda4;
                  uVar16 = *(ushort *)(puVar5 + -0x150) ^ 0x696d | (byte)puVar5[-0x14e] ^ 100;
LAB_10a32bc48:
                  uVar17 = 2;
                }
                else {
                  if (cVar3 != '\x04') goto LAB_10a32bbc0;
                  puVar19 = (uint *)(puVar5 + -0x150);
LAB_10a32bb98:
                  uVar16 = (*puVar19 & 0xff00ff00) >> 8 | (*puVar19 & 0xff00ff) << 8;
                  uVar2 = uVar16 >> 0x10 | uVar16 << 0x10;
                  uVar16 = (uint)(0x68696768 < uVar2);
                  if (uVar2 < 0x68696768) {
                    uVar16 = 0xffffffff;
                  }
                  uVar17 = 3;
                }
                if (uVar16 != 0) {
                  uVar17 = 0xffffffff;
                }
              }
              *(undefined4 *)(plVar9[0x19] + 0x24) = uVar17;
              *(undefined8 *)(puVar5 + -0x218) = 0x6563697665645f72;
              *(undefined8 *)(puVar5 + -0x220) = 0x6568746f5f6e696d;
              *(undefined8 *)(puVar5 + -0x212) = 0x7373616c635f6563;
              *(undefined2 *)(puVar5 + -0x20a) = 0x1600;
              func_0x000107c2b054(puVar5 + -0x238,&UNK_10f64efef);
              puVar8 = (undefined8 *)(puVar5 + -0xf0);
              func_0x00010a32c744(puVar8,puVar5 + -0x220,puVar5 + -0x238);
              if (*(char *)((long)puVar8 + 0x17) < '\0') {
                func_0x000107c3192c(puVar5 + -0x200,*puVar8,puVar8[1]);
              }
              else {
                uVar30 = puVar8[1];
                uVar28 = *puVar8;
                *(undefined8 *)(puVar5 + -0x1f0) = puVar8[2];
                *(undefined8 *)(puVar5 + -0x1f8) = uVar30;
                *(undefined8 *)(puVar5 + -0x200) = uVar28;
              }
              if ((char)puVar5[-0x221] < '\0') {
                __ZdlPv(*(undefined8 *)(puVar5 + -0x238));
              }
              if ((char)puVar5[-0x209] < '\0') {
                __ZdlPv(*(undefined8 *)(puVar5 + -0x220));
              }
              cVar3 = puVar5[-0x1e9];
              if (cVar3 < '\0') {
                if (*(long *)(puVar5 + -0x1f8) == 3) {
                  psVar21 = *(short **)(puVar5 + -0x200);
                  if (*psVar21 == 0x6f6c && (char)psVar21[1] == 'w') {
                    uVar17 = 1;
                  }
                  else {
                    uVar17 = 2;
                    if (*psVar21 != 0x696d || (char)psVar21[1] != 'd') {
                      uVar17 = 0xffffffff;
                    }
                  }
                }
                else {
                  if (*(long *)(puVar5 + -0x1f8) == 4) {
                    puVar19 = *(uint **)(puVar5 + -0x200);
                    goto LAB_10a32bd1c;
                  }
                  uVar17 = 0xffffffff;
                }
                *(undefined4 *)(plVar9[0x19] + 0x28) = uVar17;
LAB_10a32be1c:
                __ZdlPv(*(undefined8 *)(puVar5 + -0x200));
              }
              else {
                if (cVar3 == '\x03') {
                  if (*(short *)(puVar5 + -0x200) == 0x6f6c && puVar5[-0x1fe] == 'w') {
                    uVar17 = 1;
                  }
                  else {
                    uVar17 = 2;
                    if (*(short *)(puVar5 + -0x200) != 0x696d || puVar5[-0x1fe] != 'd') {
                      uVar17 = 0xffffffff;
                    }
                  }
                }
                else {
                  if (cVar3 == '\x04') {
                    puVar19 = (uint *)(puVar5 + -0x200);
LAB_10a32bd1c:
                    uVar16 = (*puVar19 & 0xff00ff00) >> 8 | (*puVar19 & 0xff00ff) << 8;
                    uVar2 = uVar16 >> 0x10 | uVar16 << 0x10;
                    uVar16 = (uint)(0x68696768 < uVar2);
                    if (uVar2 < 0x68696768) {
                      uVar16 = 0xffffffff;
                    }
                    uVar17 = 3;
                    if (uVar16 != 0) {
                      uVar17 = 0xffffffff;
                    }
                    *(undefined4 *)(plVar9[0x19] + 0x28) = uVar17;
                    if (cVar3 < '\0') goto LAB_10a32be1c;
                    goto LAB_10a32be24;
                  }
                  uVar17 = 0xffffffff;
                }
                *(undefined4 *)(plVar9[0x19] + 0x28) = uVar17;
              }
LAB_10a32be24:
              if ((char)puVar5[-0x139] < '\0') {
                __ZdlPv(*(undefined8 *)(puVar5 + -0x150));
              }
              func_0x000109839668(puVar5 + -0xf0);
            }
            puVar5[-0xd9] = 8;
            *(undefined8 *)(puVar5 + -0xf0) = 0x64695f7465737361;
            puVar5[-0xe8] = 0;
            *(undefined8 *)(puVar5 + -0x110) = 0;
            pdVar10 = (double *)(puVar5 + -0x1b8);
            FUN_10a32c3a8(pdVar10,puVar5 + -0xf0,puVar5 + -0x110);
            *(int *)(plVar9 + 4) = (int)*pdVar10;
            puVar5[-0xd9] = 0x12;
            *(undefined2 *)(puVar5 + -0xe0) = 0x6465;
            *(undefined8 *)(puVar5 + -0xe8) = 0x7269757165725f6f;
            *(undefined8 *)(puVar5 + -0xf0) = 0x65726574735f7369;
            puVar5[-0xde] = 0;
            puVar5[-0x110] = 0;
            puVar13 = puVar5 + -0x1b8;
            func_0x00010a32c7cc(puVar13,puVar5 + -0xf0,puVar5 + -0x110);
            *(undefined1 *)(plVar9 + 0x1b) = *puVar13;
            puVar5[-0xd9] = 0x12;
            *(undefined2 *)(puVar5 + -0xe0) = 0x7475;
            *(undefined8 *)(puVar5 + -0xe8) = 0x706e695f656c6163;
            *(undefined8 *)(puVar5 + -0xf0) = 0x73796172675f7369;
            puVar5[-0xde] = 0;
            puVar5[-0x110] = 0;
            puVar13 = puVar5 + -0x1b8;
            puVar14 = puVar5 + -0xf0;
            plVar15 = (long *)(puVar5 + -0x110);
            func_0x00010a32c7cc(puVar13,puVar14,plVar15);
            *(undefined1 *)((long)plVar9 + 0xd9) = *puVar13;
            *(undefined1 *)(plVar9 + 3) = 1;
            plVar9 = (long *)plVar9[0x16];
            if (plVar9 != (long *)0x0) {
              puVar12 = &UNK_10f64f465;
              do {
                lVar18 = plVar9[8];
                if ((plVar9[6] - plVar9[5] != plVar9[9] - lVar18) ||
                   (plVar9[0xc] - plVar9[0xb] != 0 &&
                    (plVar9[6] - plVar9[5] >> 3) * -0x5555555555555555 -
                    (plVar9[0xc] - plVar9[0xb] >> 6) != 0)) {
LAB_10a32c03c:
                  FUN_10a00946c(puVar12);
LAB_10a32c040:
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a32c044);
                  (*pcVar4)();
                }
                if (lVar18 != plVar9[9]) {
                  lVar22 = (long)*(char *)(lVar18 + 0x17);
                  if (lVar22 < 0) {
                    lVar22 = *(long *)(lVar18 + 8);
                  }
                  if (lVar22 != 0) {
                    puVar12 = &UNK_10f64f4ca;
                    goto LAB_10a32c03c;
                  }
                }
                plVar9 = (long *)*plVar9;
              } while (plVar9 != (long *)0x0);
            }
            func_0x000109839668(puVar5 + -0x1e8);
            plVar11 = (long *)(puVar5 + -0x1b8);
            func_0x000109839668();
            if ((char)puVar5[-0x171] < '\0') {
              plVar11 = *(long **)(puVar5 + -0x188);
              __ZdlPv();
            }
          }
          if ((char)puVar5[-0x159] < '\0') {
            plVar11 = *(long **)(puVar5 + -0x170);
            __ZdlPv();
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar5 + -0xa8)) {
            ___stack_chk_fail();
            func_0x000109839668(puVar5 + -0xf0);
            func_0x000109839668(puVar5 + -0x1e8);
            func_0x000109839668(puVar5 + -0x1b8);
            if ((char)puVar5[-0x171] < '\0') {
              __ZdlPv(*(undefined8 *)(puVar5 + -0x188));
            }
            if ((char)puVar5[-0x159] < '\0') {
              __ZdlPv(*(undefined8 *)(puVar5 + -0x170));
            }
            plVar9 = plVar11;
            __Unwind_Resume();
            *(long **)(puVar5 + -0x290) = unaff_x22;
            *(ulong *)(puVar5 + -0x288) = uVar26;
            *(long **)(puVar5 + -0x280) = plVar7;
            *(long **)(puVar5 + -0x278) = plVar11;
            *(undefined1 **)(puVar5 + -0x270) = puVar27;
            *(code **)(puVar5 + -0x268) = FUN_10a32c3a8;
            plVar7 = plVar9;
            FUN_10a10a278();
            if ((plVar9 + 1 != plVar7) && (*(int *)plVar7[7] == 0)) {
              FUN_10a10a278(plVar9,puVar14);
              plVar15 = (long *)((int *)plVar9[7] + 2);
              func_0x0001098390a4(&UNK_10f63c7bf,0x1d9,&UNK_10f6514a4,*(int *)plVar9[7] == 0);
            }
            return plVar15;
          }
          return plVar11;
        }
        uVar23 = param_1[2] - *param_1;
        uVar24 = (long)uVar23 >> 5;
        if (uVar24 <= uVar26) {
          uVar24 = uVar26;
        }
        if (0x7fffffffffffffbf < uVar23) {
          uVar24 = 0x3ffffffffffffff;
        }
        plVar11 = param_1;
        FUN_10a0435e0();
        plVar7 = (long *)((long)plVar11 + lVar18);
        lVar18 = param_2[4];
        lVar31 = param_2[7];
        lVar22 = param_2[6];
        lVar36 = param_2[1];
        lVar35 = *param_2;
        lVar34 = param_2[3];
        lVar33 = param_2[2];
        plVar7[5] = param_2[5];
        plVar7[4] = lVar18;
        plVar7[7] = lVar31;
        plVar7[6] = lVar22;
        plVar7[1] = lVar36;
        *plVar7 = lVar35;
        plVar7[3] = lVar34;
        plVar7[2] = lVar33;
        plVar9 = plVar7 + 8;
        lVar18 = (long)plVar7 - (param_1[1] - *param_1);
        _memcpy(lVar18);
        plVar7 = (long *)*param_1;
        *param_1 = lVar18;
        param_1[1] = (long)plVar9;
        param_1[2] = (long)(plVar11 + uVar24 * 8);
        if (plVar7 != (long *)0x0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)plVar9;
      return plVar7;
    }
    lVar22 = param_1[1];
    plVar9 = param_1;
    FUN_10a0435e0();
    lVar18 = (long)plVar9 + (lVar22 - lVar18);
    lVar22 = lVar18 - (param_1[1] - *param_1);
    _memcpy(lVar22);
    plVar7 = (long *)*param_1;
    *param_1 = lVar22;
    param_1[1] = lVar18;
    param_1[2] = (long)(plVar9 + (long)param_2 * 8);
    param_1 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar7;
    }
  }
  return param_1;
code_r0x00010a32b1e4:
  FUN_10a0b4ec0(unaff_x22 + 5,unaff_x19 + 2);
  iVar1 = *(int *)((long)unaff_x19 + 4);
  if (iVar1 == -1) {
    *(undefined8 *)(puVar5 + -0x110) = 0;
    *(undefined8 *)(puVar5 + -0x108) = 0;
    *(undefined8 *)(puVar5 + -0x100) = 0;
  }
  else {
    uVar26 = (unaff_x22[6] - unaff_x22[5] >> 3) * -0x5555555555555555;
    if (uVar26 < (ulong)(long)iVar1 || uVar26 - (long)iVar1 == 0) goto LAB_10a32c040;
    puVar8 = (undefined8 *)(unaff_x22[5] + (long)iVar1 * 0x18);
    if (*(char *)((long)puVar8 + 0x17) < '\0') {
      func_0x000107c3192c(puVar5 + -0x110,*puVar8,puVar8[1]);
    }
    else {
      uVar30 = puVar8[1];
      uVar28 = *puVar8;
      *(undefined8 *)(puVar5 + -0x100) = puVar8[2];
      *(undefined8 *)(puVar5 + -0x108) = uVar30;
      *(undefined8 *)(puVar5 + -0x110) = uVar28;
    }
  }
  FUN_10a0b4ec0(unaff_x22 + 8,puVar5 + -0x110);
  param_2 = unaff_x19 + 0xb;
  uVar28 = 0x10a32b268;
  puVar5 = puVar5 + -0x260;
  unaff_x23 = param_1;
  goto SUB_10a32a860;
}



/* Entry: 10a32a938; end: 10a32c3a7;  */

/* WARNING: Removing unreachable block (ram,0x00010a32c18c) */
/* WARNING: Removing unreachable block (ram,0x00010a32bef8) */
/* WARNING: Removing unreachable block (ram,0x00010a32be4c) */
/* WARNING: Removing unreachable block (ram,0x00010a32b92c) */
/* WARNING: Removing unreachable block (ram,0x00010a32b694) */
/* WARNING: Removing unreachable block (ram,0x00010a32b5f0) */
/* WARNING: Removing unreachable block (ram,0x00010a32b544) */
/* WARNING: Removing unreachable block (ram,0x00010a32b39c) */
/* WARNING: Removing unreachable block (ram,0x00010a32ad9c) */
/* WARNING: Removing unreachable block (ram,0x00010a32accc) */
/* WARNING: Removing unreachable block (ram,0x00010a32abcc) */
/* WARNING: Removing unreachable block (ram,0x00010a32ab3c) */
/* WARNING: Removing unreachable block (ram,0x00010a32aab4) */
/* WARNING: Removing unreachable block (ram,0x00010a32aa08) */
/* WARNING: Removing unreachable block (ram,0x00010a32aafc) */
/* WARNING: Removing unreachable block (ram,0x00010a32ab84) */
/* WARNING: Removing unreachable block (ram,0x00010a32ac14) */
/* WARNING: Removing unreachable block (ram,0x00010a32b270) */
/* WARNING: Removing unreachable block (ram,0x00010a32adec) */
/* WARNING: Removing unreachable block (ram,0x00010a32b450) */
/* WARNING: Removing unreachable block (ram,0x00010a32b59c) */
/* WARNING: Removing unreachable block (ram,0x00010a32b644) */
/* WARNING: Removing unreachable block (ram,0x00010a32b780) */
/* WARNING: Removing unreachable block (ram,0x00010a32be3c) */
/* WARNING: Removing unreachable block (ram,0x00010a32bea4) */
/* WARNING: Removing unreachable block (ram,0x00010a32bf4c) */
/* WARNING: Removing unreachable block (ram,0x00010a32c1c0) */

int ******* FUN_10a32a938(long param_1,long *param_2)

{
  undefined8 ******ppppppuVar1;
  undefined8 ****ppppuVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  undefined8 ******ppppppuVar6;
  code *pcVar7;
  bool bVar8;
  int *******pppppppiVar9;
  undefined8 *puVar10;
  undefined8 *******pppppppuVar11;
  undefined8 ******ppppppuVar12;
  double *pdVar13;
  uint *puVar14;
  undefined *puVar15;
  int *******pppppppiVar16;
  undefined8 *****pppppuVar17;
  int *******pppppppiVar18;
  uint uVar19;
  undefined4 uVar20;
  long lVar21;
  undefined8 ******ppppppuVar22;
  undefined8 *****pppppuVar23;
  undefined8 **ppuVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  long *plVar27;
  ulong uVar28;
  undefined8 ****ppppuVar29;
  long lVar30;
  undefined8 ******ppppppuVar31;
  int *piVar32;
  uint *puVar33;
  undefined8 ****ppppuVar34;
  ulong uVar35;
  undefined8 ******ppppppuVar36;
  float fVar37;
  undefined8 ***pppuVar38;
  undefined8 **ppuVar39;
  undefined8 uVar40;
  undefined8 ***pppuVar41;
  undefined8 **ppuVar42;
  undefined8 uVar43;
  undefined8 auStack_208 [2];
  char cStack_1f1;
  undefined8 uStack_1f0;
  undefined6 uStack_1e8;
  undefined2 uStack_1e2;
  undefined6 uStack_1e0;
  undefined2 uStack_1da;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  double adStack_1b8 [2];
  long lStack_1a8;
  undefined8 ******ppppppuStack_188;
  undefined8 *****pppppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  int ******appppppiStack_158 [2];
  char cStack_141;
  int ******ppppppiStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 *****pppppuStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  uint *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  undefined1 uStack_d6;
  undefined2 uStack_d5;
  undefined1 uStack_d3;
  undefined2 uStack_d2;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  undefined1 uStack_ca;
  char cStack_c9;
  undefined8 uStack_c0;
  uint uStack_b8;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar35 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar35 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  ppppppuVar31 = (undefined8 ******)&uStack_c0;
  FUN_10a003c90(&uStack_c0,uVar35 + 1,&ppppppuStack_188);
  if (uVar35 != 0) {
    plVar27 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar27 = param_2;
    }
    _memmove(ppppppuVar31,plVar27,uVar35);
  }
  *(undefined2 *)((long)ppppppuVar31 + uVar35) = 0x2f;
  puVar10 = (undefined8 *)&UNK_10f64f440;
  plVar27 = &uStack_c0;
  pppppppiVar18 = (int *******)0xe;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar27,&UNK_10f64f440,0xe);
  lStack_138 = plVar27[1];
  ppppppiStack_140 = (int ******)*plVar27;
  lStack_130 = plVar27[2];
  plVar27[1] = 0;
  plVar27[2] = 0;
  *plVar27 = 0;
  pppppppiVar9 = &ppppppiStack_140;
  FUN_10ad01a04();
  if ((int)pppppppiVar9 == 0) goto LAB_10a32bff0;
  FUN_10ad01b0c(appppppiStack_158,&ppppppiStack_140);
  pppppuStack_180 = (undefined8 ******)0x0;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  ppppppuStack_188 = &pppppuStack_180;
  func_0x00010983a984(&ppppppuStack_188,appppppiStack_158);
  puVar10 = (undefined8 *)0x20;
  __Znwm();
  uStack_c0._0_4_ = (uint)puVar10;
  uStack_c0._4_1_ = (undefined1)((ulong)puVar10 >> 0x20);
  uStack_c0._5_1_ = (undefined1)((ulong)puVar10 >> 0x28);
  uStack_c0._6_1_ = (undefined1)((ulong)puVar10 >> 0x30);
  uStack_c0._7_1_ = (undefined1)((ulong)puVar10 >> 0x38);
  uStack_b0 = 0x8000000000000020;
  uStack_b8 = 0x1e;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b1 = 0;
  puVar10[1] = 0x626f5f666f5f7265;
  *puVar10 = 0x626d756e5f78616d;
  *(undefined8 *)((long)puVar10 + 0x16) = 0x6b636172745f6f74;
  *(undefined8 *)((long)puVar10 + 0xe) = 0x5f737463656a626f;
  *(undefined1 *)((long)puVar10 + 0x1e) = 0;
  adStack_1b8[0] = (double)*(int *)(param_1 + 0x1c);
  pppppppuVar11 = &ppppppuStack_188;
  FUN_10a32c3a8(pppppppuVar11,&uStack_c0,adStack_1b8);
  *(int *)(param_1 + 0x1c) = (int)(double)*pppppppuVar11;
  uStack_b0 = CONCAT17(0xc,(undefined7)uStack_b0);
  uStack_b8 = 0x736c6562;
  uStack_c0._0_4_ = 0x6e657665;
  uStack_c0._4_1_ = 0x74;
  uStack_c0._5_1_ = 0x5f;
  uStack_c0._6_1_ = 0x6c;
  uStack_c0._7_1_ = 0x61;
  uStack_b4 = 0;
  FUN_10a32c428(&ppppppuStack_188,&uStack_c0,param_1 + 0x40);
  uStack_b0 = CONCAT17(6,(undefined7)uStack_b0);
  uStack_c0._0_4_ = 0x6562616c;
  uStack_c0._4_1_ = 0x6c;
  uStack_c0._5_1_ = 0x73;
  uStack_c0._6_1_ = 0;
  FUN_10a32c428(&ppppppuStack_188,&uStack_c0,param_1 + 0x28);
  uStack_b0 = CONCAT17(0xf,(undefined7)uStack_b0);
  uStack_c0._0_4_ = 0x646e616c;
  uStack_c0._4_1_ = 0x6d;
  uStack_c0._5_1_ = 0x61;
  uStack_c0._6_1_ = 0x72;
  uStack_c0._7_1_ = 0x6b;
  uStack_b8 = 0x62616c5f;
  uStack_b4 = 0x65;
  uStack_b3 = 0x6c;
  uStack_b2 = 0x73;
  uStack_b1 = 0;
  FUN_10a32c428(&ppppppuStack_188,&uStack_c0,param_1 + 0x58);
  uStack_b0 = CONCAT17(0xf,(undefined7)uStack_b0);
  uStack_c0._0_4_ = 0x61746f72;
  uStack_c0._4_1_ = 0x74;
  uStack_c0._5_1_ = 0x69;
  uStack_c0._6_1_ = 0x6f;
  uStack_c0._7_1_ = 0x6e;
  uStack_b8 = 0x62616c5f;
  uStack_b4 = 0x65;
  uStack_b3 = 0x6c;
  uStack_b2 = 0x73;
  uStack_b1 = 0;
  FUN_10a32c428(&ppppppuStack_188,&uStack_c0,param_1 + 0x70);
  uStack_b0 = CONCAT17(0xc,(undefined7)uStack_b0);
  uStack_b8 = 0x736c6562;
  uStack_c0._0_4_ = 0x6b73616d;
  uStack_c0._4_1_ = 0x73;
  uStack_c0._5_1_ = 0x5f;
  uStack_c0._6_1_ = 0x6c;
  uStack_c0._7_1_ = 0x61;
  uStack_b4 = 0;
  FUN_10a32c428(&ppppppuStack_188,&uStack_c0,param_1 + 0x88);
  ppppppuVar1 = (undefined8 ******)(param_1 + 0xa0);
  func_0x00010a35ced0();
  func_0x000107c2b054(&uStack_e0,&UNK_10f64f44f);
  uStack_c0._0_4_ = (uint)&uStack_b8;
  uStack_c0._4_1_ = (undefined1)((ulong)&uStack_b8 >> 0x20);
  uStack_c0._5_1_ = (undefined1)((ulong)&uStack_b8 >> 0x28);
  uStack_c0._6_1_ = (undefined1)((ulong)&uStack_b8 >> 0x30);
  uStack_c0._7_1_ = (undefined1)((ulong)&uStack_b8 >> 0x38);
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b1 = 0;
  uStack_b0 = 0;
  pppuStack_a8 = (undefined8 ***)0x0;
  uStack_a0 = 0;
  uStack_98 = 0;
  pppppppuVar11 = &ppppppuStack_188;
  FUN_10a10a278(pppppppuVar11,&uStack_e0);
  if (((undefined8 *******)&pppppuStack_180 == pppppppuVar11) || (*(int *)pppppppuVar11[7] != 5)) {
    pppppuVar17 = (undefined8 *****)&uStack_c0;
  }
  else {
    pppppppuVar11 = &ppppppuStack_188;
    FUN_10a10a278(pppppppuVar11,&uStack_e0);
    ppppppuVar31 = pppppppuVar11[7];
    func_0x0001098390a4(&UNK_10f63c7bf,0x1e5,&UNK_10f6514b1,*(uint *)ppppppuVar31 == 5);
    pppppuVar17 = ppppppuVar31[1];
  }
  func_0x00010983a670(adStack_1b8,pppppuVar17);
  func_0x000109839668(&uStack_c0);
  if (lStack_1a8 == 0) {
    uStack_e0._0_4_ = 0;
    uStack_e0._4_1_ = 0;
    uStack_e0._5_1_ = 0;
    uStack_e0._6_2_ = 0;
    uStack_d8 = 0;
    uStack_d6 = 0;
    uStack_d5 = 0;
    uStack_d3 = 0;
    uStack_d2 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_cb = 0;
    uStack_ca = 0;
    cStack_c9 = '\0';
    uStack_100 = (uint *)0x0;
    puStack_f8 = (uint *)0x0;
    uStack_f0 = 0;
    puVar10 = (undefined8 *)0x20;
    __Znwm();
    uStack_c0._0_4_ = (uint)puVar10;
    uStack_c0._4_1_ = (undefined1)((ulong)puVar10 >> 0x20);
    uStack_c0._5_1_ = (undefined1)((ulong)puVar10 >> 0x28);
    uStack_c0._6_1_ = (undefined1)((ulong)puVar10 >> 0x30);
    uStack_c0._7_1_ = (undefined1)((ulong)puVar10 >> 0x38);
    uStack_b0 = 0x8000000000000020;
    uStack_b8 = 0x19;
    uStack_b4 = 0;
    uStack_b3 = 0;
    uStack_b2 = 0;
    uStack_b1 = 0;
    puVar10[1] = 0x746e696f705f746e;
    *puVar10 = 0x656d686361747461;
    *(undefined8 *)((long)puVar10 + 0x11) = 0x656d616e5f64335f;
    *(undefined8 *)((long)puVar10 + 9) = 0x73746e696f705f74;
    *(undefined1 *)((long)puVar10 + 0x19) = 0;
    FUN_10a32c428(&ppppppuStack_188,&uStack_c0,&uStack_e0);
    puVar10 = (undefined8 *)0x28;
    __Znwm();
    uStack_c0._0_4_ = (uint)puVar10;
    uStack_c0._4_1_ = (undefined1)((ulong)puVar10 >> 0x20);
    uStack_c0._5_1_ = (undefined1)((ulong)puVar10 >> 0x28);
    uStack_c0._6_1_ = (undefined1)((ulong)puVar10 >> 0x30);
    uStack_c0._7_1_ = (undefined1)((ulong)puVar10 >> 0x38);
    uStack_b0 = 0x8000000000000028;
    uStack_b8 = 0x20;
    uStack_b4 = 0;
    uStack_b3 = 0;
    uStack_b2 = 0;
    uStack_b1 = 0;
    puVar10[1] = 0x746e696f705f746e;
    *puVar10 = 0x656d686361747461;
    puVar10[3] = 0x656d616e5f746e65;
    puVar10[2] = 0x7261705f64335f73;
    *(undefined1 *)(puVar10 + 4) = 0;
    FUN_10a32c428(&ppppppuStack_188,&uStack_c0,&uStack_100);
    uStack_c0._0_4_ = 0;
    uStack_c0._4_1_ = 0;
    uStack_c0._5_1_ = 0;
    uStack_c0._6_1_ = 0;
    uStack_c0._7_1_ = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b3 = 0;
    uStack_b2 = 0;
    uStack_b1 = 0;
    uStack_b0 = 0;
    lVar21 = CONCAT26(uStack_e0._6_2_,
                      CONCAT15(uStack_e0._5_1_,CONCAT14(uStack_e0._4_1_,(uint)uStack_e0)));
    lVar30 = CONCAT26(uStack_d2,
                      CONCAT15(uStack_d3,CONCAT23(uStack_d5,CONCAT12(uStack_d6,uStack_d8))));
    FUN_10a0cf0cc(&uStack_c0,lVar21,lVar30,(lVar30 - lVar21 >> 3) * -0x5555555555555555);
    pppuStack_a8 = (undefined8 ***)0x0;
    uStack_a0 = 0;
    uStack_98 = 0;
    FUN_10a0cf0cc(&pppuStack_a8,uStack_100,puStack_f8,
                  ((long)puStack_f8 - (long)uStack_100 >> 3) * -0x5555555555555555);
    lStack_90 = 0;
    lStack_88 = 0;
    uStack_80 = 0;
    FUN_10a35cf24(ppppppuVar1,&uStack_c0);
    if (lStack_90 != 0) {
      lStack_88 = lStack_90;
      __ZdlPv();
    }
    uStack_120 = (undefined8 ******)&pppuStack_a8;
    FUN_10a0426d8(&uStack_120);
    uStack_120 = (undefined8 ******)&uStack_c0;
    FUN_10a0426d8(&uStack_120);
    uStack_c0._0_4_ = (uint)&uStack_100;
    uStack_c0._4_1_ = (undefined1)((ulong)&uStack_100 >> 0x20);
    uStack_c0._5_1_ = (undefined1)((ulong)&uStack_100 >> 0x28);
    uStack_c0._6_1_ = (undefined1)((ulong)&uStack_100 >> 0x30);
    uStack_c0._7_1_ = (undefined1)((ulong)&uStack_100 >> 0x38);
    FUN_10a0426d8(&uStack_c0);
    uStack_c0._0_4_ = (uint)&uStack_e0;
    uStack_c0._4_1_ = (undefined1)((ulong)&uStack_e0 >> 0x20);
    uStack_c0._5_1_ = (undefined1)((ulong)&uStack_e0 >> 0x28);
    uStack_c0._6_1_ = (undefined1)((ulong)&uStack_e0 >> 0x30);
    uStack_c0._7_1_ = (undefined1)((ulong)&uStack_e0 >> 0x38);
    FUN_10a0426d8(&uStack_c0);
  }
  else {
    func_0x000109839e84(&uStack_1d0,adStack_1b8);
    pppuStack_a8 = (undefined8 ***)0x0;
    func_0x0001094749d8(&uStack_e0,&uStack_1d0,&uStack_c0,1,0);
    func_0x000109380c8c(&uStack_1f0,&uStack_e0);
    func_0x000109380ffc(&uStack_d8,(undefined1)uStack_e0);
    if (pppuStack_a8 == (undefined8 ***)&uStack_c0) {
      lVar21 = 0x20;
LAB_10a32aeac:
      (**(code **)((long)*pppuStack_a8 + lVar21))();
    }
    else if (pppuStack_a8 != (undefined8 ***)0x0) {
      lVar21 = 0x28;
      goto LAB_10a32aeac;
    }
    func_0x0001094a72dc(&uStack_100,&uStack_1f0);
    puVar14 = puStack_f8;
    if (uStack_100 != puStack_f8) {
      ppppuVar2 = (undefined8 ****)(param_1 + 0xb0);
      puVar33 = uStack_100;
      do {
        func_0x0001094a68cc(&uStack_e0,&uStack_1f0,puVar33);
        func_0x0001094cb264(&plStack_108,&uStack_e0);
        func_0x000109380f8c(&uStack_e0);
        pppppuStack_118 = (undefined8 ******)0x0;
        uStack_110 = 0;
        uStack_120 = (undefined8 ******)0x0;
        func_0x0001094cd180(&uStack_120,*plStack_108,plStack_108[1],
                            (plStack_108[1] - *plStack_108 >> 3) * -0x79435e50d79435e5);
        pppppuVar17 = pppppuStack_118;
        ppppppuVar6 = uStack_120;
        ppppppuVar12 = ppppppuVar1;
        func_0x000107c2b05c(ppppppuVar1,puVar33);
        ppppppuVar36 = *(undefined8 *******)(param_1 + 0xa8);
        if (ppppppuVar36 != (undefined8 ******)0x0) {
          uVar35 = (long)ppppppuVar36 - 1;
          if (((ulong)ppppppuVar36 & uVar35) == 0) {
            ppppppuVar31 = (undefined8 ******)(uVar35 & (ulong)ppppppuVar12);
          }
          else {
            ppppppuVar31 = ppppppuVar12;
            if (ppppppuVar36 <= ppppppuVar12) {
              uVar28 = 0;
              if (ppppppuVar36 != (undefined8 ******)0x0) {
                uVar28 = (ulong)ppppppuVar12 / (ulong)ppppppuVar36;
              }
              ppppppuVar31 = (undefined8 ******)((long)ppppppuVar12 - uVar28 * (long)ppppppuVar36);
            }
          }
          if ((*ppppppuVar1)[(long)ppppppuVar31] != (undefined8 ****)0x0) {
            for (ppppuVar34 = (undefined8 ****)*(*ppppppuVar1)[(long)ppppppuVar31];
                ppppuVar34 != (undefined8 ****)0x0; ppppuVar34 = (undefined8 ****)*ppppuVar34) {
              ppppppuVar22 = (undefined8 ******)ppppuVar34[1];
              if (ppppppuVar22 == ppppppuVar12) {
                ppppppuVar22 = ppppppuVar1;
                func_0x000107c2b068(ppppppuVar1,ppppuVar34 + 2,puVar33);
                if (((ulong)ppppppuVar22 & 1) != 0) goto LAB_10a32b17c;
              }
              else {
                if (((ulong)ppppppuVar36 & uVar35) == 0) {
                  ppppppuVar22 = (undefined8 ******)((ulong)ppppppuVar22 & uVar35);
                }
                else if (ppppppuVar36 <= ppppppuVar22) {
                  uVar28 = 0;
                  if (ppppppuVar36 != (undefined8 ******)0x0) {
                    uVar28 = (ulong)ppppppuVar22 / (ulong)ppppppuVar36;
                  }
                  ppppppuVar22 = (undefined8 ******)
                                 ((long)ppppppuVar22 - uVar28 * (long)ppppppuVar36);
                }
                if (ppppppuVar22 != ppppppuVar31) break;
              }
            }
          }
        }
        ppppuVar34 = (undefined8 ****)0x70;
        __Znwm();
        uStack_e0._0_4_ = (uint)ppppuVar34;
        uStack_e0._4_1_ = (undefined1)((ulong)ppppuVar34 >> 0x20);
        uStack_e0._5_1_ = (undefined1)((ulong)ppppuVar34 >> 0x28);
        uStack_e0._6_2_ = (undefined2)((ulong)ppppuVar34 >> 0x30);
        uStack_d8 = SUB82(ppppppuVar1,0);
        uStack_d6 = (undefined1)((ulong)ppppppuVar1 >> 0x10);
        uStack_d5 = (undefined2)((ulong)ppppppuVar1 >> 0x18);
        uStack_d3 = (undefined1)((ulong)ppppppuVar1 >> 0x28);
        uStack_d2 = (undefined2)((ulong)ppppppuVar1 >> 0x30);
        uStack_d0 = 0;
        uStack_cc = 0;
        uStack_cb = 0;
        uStack_ca = 0;
        cStack_c9 = '\0';
        *ppppuVar34 = (undefined8 ***)0x0;
        ppppuVar34[1] = ppppppuVar12;
        if (*(char *)((long)puVar33 + 0x17) < '\0') {
          func_0x000107c3192c(ppppuVar34 + 2,*(undefined8 *)puVar33,*(undefined8 *)(puVar33 + 2));
        }
        else {
          pppuVar41 = *(undefined8 ****)(puVar33 + 2);
          pppuVar38 = *(undefined8 ****)puVar33;
          ppppuVar34[4] = *(undefined8 ****)(puVar33 + 4);
          ppppuVar34[3] = pppuVar41;
          ppppuVar34[2] = pppuVar38;
        }
        ppppuVar34[0xd] = (undefined8 ***)0x0;
        ppppuVar34[0xc] = (undefined8 ***)0x0;
        ppppuVar34[0xb] = (undefined8 ***)0x0;
        ppppuVar34[10] = (undefined8 ***)0x0;
        ppppuVar34[9] = (undefined8 ***)0x0;
        ppppuVar34[8] = (undefined8 ***)0x0;
        ppppuVar34[7] = (undefined8 ***)0x0;
        ppppuVar34[6] = (undefined8 ***)0x0;
        ppppuVar34[5] = (undefined8 ***)0x0;
        uStack_d0 = CONCAT31(uStack_d0._1_3_,1);
        fVar37 = (float)(*(long *)(param_1 + 0xb8) + 1);
        if ((ppppppuVar36 == (undefined8 ******)0x0) ||
           (*(float *)(param_1 + 0xc0) * (float)ppppppuVar36 < fVar37)) {
          uVar35 = 1;
          if ((undefined8 ******)0x2 < ppppppuVar36) {
            uVar35 = (ulong)(((ulong)ppppppuVar36 & (long)ppppppuVar36 - 1U) != 0);
          }
          uVar35 = uVar35 | (long)ppppppuVar36 << 1;
          uVar28 = (ulong)(fVar37 / *(float *)(param_1 + 0xc0));
          if (uVar35 <= uVar28) {
            uVar35 = uVar28;
          }
          FUN_10a35ccb8(ppppppuVar1,uVar35);
          ppppppuVar36 = *(undefined8 *******)(param_1 + 0xa8);
          if (((ulong)ppppppuVar36 & (long)ppppppuVar36 - 1U) == 0) {
            ppppppuVar31 = (undefined8 ******)((long)ppppppuVar36 - 1U & (ulong)ppppppuVar12);
          }
          else {
            ppppppuVar31 = ppppppuVar12;
            if (ppppppuVar36 <= ppppppuVar12) {
              uVar35 = 0;
              if (ppppppuVar36 != (undefined8 ******)0x0) {
                uVar35 = (ulong)ppppppuVar12 / (ulong)ppppppuVar36;
              }
              ppppppuVar31 = (undefined8 ******)((long)ppppppuVar12 - uVar35 * (long)ppppppuVar36);
            }
          }
        }
        pppppuVar23 = *ppppppuVar1;
        ppppuVar29 = pppppuVar23[(long)ppppppuVar31];
        if (ppppuVar29 == (undefined8 ****)0x0) {
          *ppppuVar34 = *ppppuVar2;
          *ppppuVar2 = ppppuVar34;
          pppppuVar23[(long)ppppppuVar31] = ppppuVar2;
          if (*ppppuVar34 != (undefined8 ***)0x0) {
            ppppppuVar31 = (undefined8 ******)(*ppppuVar34)[1];
            if (((ulong)ppppppuVar36 & (long)ppppppuVar36 - 1U) == 0) {
              ppppppuVar31 = (undefined8 ******)((ulong)ppppppuVar31 & (long)ppppppuVar36 - 1U);
            }
            else if (ppppppuVar36 <= ppppppuVar31) {
              uVar35 = 0;
              if (ppppppuVar36 != (undefined8 ******)0x0) {
                uVar35 = (ulong)ppppppuVar31 / (ulong)ppppppuVar36;
              }
              ppppppuVar31 = (undefined8 ******)((long)ppppppuVar31 - uVar35 * (long)ppppppuVar36);
            }
            (*ppppppuVar1)[(long)ppppppuVar31] = ppppuVar34;
          }
        }
        else {
          *ppppuVar34 = *ppppuVar29;
          *ppppuVar29 = ppppuVar34;
        }
        *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
LAB_10a32b17c:
        lVar21 = ((long)pppppuVar17 - (long)ppppppuVar6 >> 3) * -0x79435e50d79435e5;
        FUN_10a042718(ppppuVar34 + 5);
        func_0x000107c31930(ppppuVar34 + 5,lVar21);
        FUN_10a042718(ppppuVar34 + 8);
        func_0x000107c31930(ppppuVar34 + 8,lVar21);
        ppppuVar29 = ppppuVar34 + 0xb;
        ppppuVar34[0xc] = *ppppuVar29;
        FUN_10a32a7d4(ppppuVar29,lVar21);
        pppppuVar17 = pppppuStack_118;
        for (ppppppuVar31 = uStack_120; ppppppuVar31 != (undefined8 ******)pppppuVar17;
            ppppppuVar31 = ppppppuVar31 + 0x13) {
          FUN_10a0b4ec0(ppppuVar34 + 5,ppppppuVar31 + 2);
          uVar19 = *(uint *)((long)ppppppuVar31 + 4);
          if (uVar19 == 0xffffffff) {
            uStack_e0._0_4_ = 0;
            uStack_e0._4_1_ = 0;
            uStack_e0._5_1_ = 0;
            uStack_e0._6_2_ = 0;
            uStack_d8 = 0;
            uStack_d6 = 0;
            uStack_d5 = 0;
            uStack_d3 = 0;
            uStack_d2 = 0;
            uStack_d0 = 0;
            uStack_cc = 0;
            uStack_cb = 0;
            uStack_ca = 0;
            cStack_c9 = '\0';
          }
          else {
            uVar35 = ((long)ppppuVar34[6] - (long)ppppuVar34[5] >> 3) * -0x5555555555555555;
            if (uVar35 < (ulong)(long)(int)uVar19 || uVar35 - (long)(int)uVar19 == 0)
            goto LAB_10a32c040;
            pppuVar38 = ppppuVar34[5] + (long)(int)uVar19 * 3;
            if (*(char *)((long)pppuVar38 + 0x17) < '\0') {
              func_0x000107c3192c(&uStack_e0,*pppuVar38,pppuVar38[1]);
            }
            else {
              ppuVar42 = pppuVar38[1];
              ppuVar39 = *pppuVar38;
              ppuVar24 = pppuVar38[2];
              uStack_d0 = SUB84(ppuVar24,0);
              uStack_cc = (undefined1)((ulong)ppuVar24 >> 0x20);
              uStack_cb = (undefined1)((ulong)ppuVar24 >> 0x28);
              uStack_ca = (undefined1)((ulong)ppuVar24 >> 0x30);
              cStack_c9 = (char)((ulong)ppuVar24 >> 0x38);
              uStack_d8 = SUB82(ppuVar42,0);
              uStack_d6 = (undefined1)((ulong)ppuVar42 >> 0x10);
              uStack_d5 = (undefined2)((ulong)ppuVar42 >> 0x18);
              uStack_d3 = (undefined1)((ulong)ppuVar42 >> 0x28);
              uStack_d2 = (undefined2)((ulong)ppuVar42 >> 0x30);
              uStack_e0._0_4_ = (uint)ppuVar39;
              uStack_e0._4_1_ = (undefined1)((ulong)ppuVar39 >> 0x20);
              uStack_e0._5_1_ = (undefined1)((ulong)ppuVar39 >> 0x28);
              uStack_e0._6_2_ = (undefined2)((ulong)ppuVar39 >> 0x30);
            }
          }
          FUN_10a0b4ec0(ppppuVar34 + 8,&uStack_e0);
          func_0x00010a32a860(ppppuVar29,ppppppuVar31 + 0xb);
        }
        uStack_e0._0_4_ = (uint)&uStack_120;
        uStack_e0._4_1_ = (undefined1)((ulong)&uStack_120 >> 0x20);
        uStack_e0._5_1_ = (undefined1)((ulong)&uStack_120 >> 0x28);
        uStack_e0._6_2_ = (undefined2)((ulong)&uStack_120 >> 0x30);
        FUN_10a34e6f0(&uStack_e0);
        plVar27 = plStack_108;
        plStack_108 = (long *)0x0;
        if (plVar27 != (long *)0x0) {
          func_0x0001094cf2b0(&plStack_108);
        }
        puVar33 = puVar33 + 6;
      } while (puVar33 != puVar14);
    }
    uStack_e0._0_4_ = (uint)&uStack_100;
    uStack_e0._4_1_ = (undefined1)((ulong)&uStack_100 >> 0x20);
    uStack_e0._5_1_ = (undefined1)((ulong)&uStack_100 >> 0x28);
    uStack_e0._6_2_ = (undefined2)((ulong)&uStack_100 >> 0x30);
    FUN_10a0426d8(&uStack_e0);
    func_0x000109380f8c(&uStack_1f0);
    if (uStack_1c0 < 0) {
      __ZdlPv(uStack_1d0);
    }
  }
  uStack_c0._0_4_ = 0;
  uStack_c0._4_1_ = 0;
  uStack_c0._5_1_ = 0;
  uStack_c0._6_1_ = 0;
  uStack_c0._7_1_ = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b1 = 0;
  func_0x00010a32c640(param_1 + 200,&uStack_c0);
  plVar27 = (long *)CONCAT17(uStack_b1,
                             CONCAT16(uStack_b2,CONCAT15(uStack_b3,CONCAT14(uStack_b4,uStack_b8))));
  if (plVar27 != (long *)0x0) {
    plVar3 = plVar27 + 1;
    do {
      lVar21 = *plVar3;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *plVar3 = lVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
    }
  }
  uStack_b0 = CONCAT17(0xd,(undefined7)uStack_b0);
  uStack_c0._0_4_ = 0x64697567;
  uStack_c0._4_1_ = 0x65;
  uStack_c0._5_1_ = 100;
  uStack_c0._6_1_ = 0x5f;
  uStack_c0._7_1_ = 0x66;
  uStack_b8 = 0x65746c69;
  uStack_b4 = 0x72;
  uStack_b3 = 0;
  pppppppuVar11 = &ppppppuStack_188;
  FUN_10a10a278(pppppppuVar11,&uStack_c0);
  if ((undefined8 *******)&pppppuStack_180 == pppppppuVar11) {
    bVar8 = false;
  }
  else {
    bVar8 = *(int *)pppppppuVar11[7] == 5;
  }
  if (bVar8) {
    cStack_c9 = 0xd;
    uStack_e0._0_4_ = 0x64697567;
    uStack_e0._4_1_ = 0x65;
    uStack_e0._5_1_ = 100;
    uStack_e0._6_2_ = 0x665f;
    uStack_d8 = 0x6c69;
    uStack_d6 = 0x74;
    uStack_d5 = 0x7265;
    uStack_d3 = 0;
    pppppppuVar11 = &ppppppuStack_188;
    FUN_10a10a278(pppppppuVar11,&uStack_e0);
    if ((undefined8 *******)&pppppuStack_180 == pppppppuVar11) {
      bVar8 = false;
    }
    else {
      bVar8 = *(int *)pppppppuVar11[7] == 5;
    }
    func_0x0001098390a4(&UNK_10f63c7bf,0x18b,&UNK_10f63cc4d,bVar8);
    pppppppuVar11 = &ppppppuStack_188;
    func_0x00010983b55c(pppppppuVar11,&uStack_e0);
    ppppppuVar31 = pppppppuVar11[7];
    func_0x0001098390a4(&UNK_10f63c7bf,0x1e5,&UNK_10f6514b1,*(int *)ppppppuVar31 == 5);
    func_0x00010983a670(&uStack_c0,ppppppuVar31[1]);
    puVar10 = (undefined8 *)0x48;
    __Znwm();
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_FUN_110bc66a8;
    puVar25 = puVar10 + 3;
    puVar10[4] = 0x10000000080;
    *puVar25 = 0x8000000000;
    puVar10[5] = 0x3bf5c28f00000100;
    puVar10[6] = 0x3f80000000000000;
    puVar10[7] = 0x200000002;
    *(undefined4 *)(puVar10 + 8) = 1;
    uStack_e0._0_4_ = (uint)puVar25;
    uStack_e0._4_1_ = (undefined1)((ulong)puVar25 >> 0x20);
    uStack_e0._5_1_ = (undefined1)((ulong)puVar25 >> 0x28);
    uStack_e0._6_2_ = (undefined2)((ulong)puVar25 >> 0x30);
    uStack_d8 = SUB82(puVar10,0);
    uStack_d6 = (undefined1)((ulong)puVar10 >> 0x10);
    uStack_d5 = (undefined2)((ulong)puVar10 >> 0x18);
    uStack_d3 = (undefined1)((ulong)puVar10 >> 0x28);
    uStack_d2 = (undefined2)((ulong)puVar10 >> 0x30);
    func_0x00010a32c640(param_1 + 200,&uStack_e0);
    plVar27 = (long *)CONCAT26(uStack_d2,
                               CONCAT15(uStack_d3,CONCAT23(uStack_d5,CONCAT12(uStack_d6,uStack_d8)))
                              );
    if (plVar27 != (long *)0x0) {
      plVar3 = plVar27 + 1;
      do {
        lVar21 = *plVar3;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar8) {
          *plVar3 = lVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
      }
    }
    **(undefined1 **)(param_1 + 200) = 1;
    cStack_c9 = 0x14;
    uStack_d0 = 0x68746469;
    uStack_d8 = 0x7365;
    uStack_d6 = 0x73;
    uStack_d5 = 0x6e69;
    uStack_d3 = 0x67;
    uStack_d2 = 0x775f;
    uStack_e0._0_4_ = 0x5f6e696d;
    uStack_e0._4_1_ = 0x70;
    uStack_e0._5_1_ = 0x72;
    uStack_e0._6_2_ = 0x636f;
    uStack_cc = 0;
    pdVar13 = (double *)&uStack_c0;
    func_0x00010a32c6a4(pdVar13,&uStack_e0);
    *(int *)(*(long *)(param_1 + 200) + 4) = (int)*pdVar13;
    cStack_c9 = 0x15;
    uStack_d8 = 0x7365;
    uStack_d6 = 0x73;
    uStack_d5 = 0x6e69;
    uStack_e0._0_4_ = 0x5f6e696d;
    uStack_e0._4_1_ = 0x70;
    uStack_e0._5_1_ = 0x72;
    uStack_e0._6_2_ = 0x636f;
    uStack_d3 = 0x67;
    uStack_d2 = 0x685f;
    uStack_d0 = 0x68676965;
    uStack_cc = 0x74;
    uStack_cb = 0;
    pdVar13 = (double *)&uStack_c0;
    func_0x00010a32c6a4(pdVar13,&uStack_e0);
    *(int *)(*(long *)(param_1 + 200) + 8) = (int)*pdVar13;
    cStack_c9 = 0x14;
    uStack_d0 = 0x68746469;
    uStack_d8 = 0x7865;
    uStack_d6 = 0x74;
    uStack_d5 = 0x7275;
    uStack_d3 = 0x65;
    uStack_d2 = 0x775f;
    uStack_e0._0_4_ = 0x7074756f;
    uStack_e0._4_1_ = 0x75;
    uStack_e0._5_1_ = 0x74;
    uStack_e0._6_2_ = 0x745f;
    uStack_cc = 0;
    pdVar13 = (double *)&uStack_c0;
    func_0x00010a32c6a4(pdVar13,&uStack_e0);
    *(int *)(*(long *)(param_1 + 200) + 0xc) = (int)*pdVar13;
    cStack_c9 = 0x15;
    uStack_d8 = 0x7865;
    uStack_d6 = 0x74;
    uStack_d5 = 0x7275;
    uStack_e0._0_4_ = 0x7074756f;
    uStack_e0._4_1_ = 0x75;
    uStack_e0._5_1_ = 0x74;
    uStack_e0._6_2_ = 0x745f;
    uStack_d3 = 0x65;
    uStack_d2 = 0x685f;
    uStack_d0 = 0x68676965;
    uStack_cc = 0x74;
    uStack_cb = 0;
    pdVar13 = (double *)&uStack_c0;
    func_0x00010a32c6a4(pdVar13,&uStack_e0);
    *(int *)(*(long *)(param_1 + 200) + 0x10) = (int)*pdVar13;
    cStack_c9 = '\n';
    uStack_d8 = 0x7173;
    uStack_e0._0_4_ = 0x69737065;
    uStack_e0._4_1_ = 0x6c;
    uStack_e0._5_1_ = 0x6f;
    uStack_e0._6_2_ = 0x5f6e;
    uStack_d6 = 0;
    pdVar13 = (double *)&uStack_c0;
    func_0x00010a32c6a4(pdVar13,&uStack_e0);
    *(float *)(*(long *)(param_1 + 200) + 0x14) = (float)*pdVar13;
    uStack_f0 = CONCAT17(0x14,(undefined7)uStack_f0);
    puStack_f8 = (uint *)0x5f676e6973736563;
    uStack_100 = (uint *)0x6f72705f6b73616d;
    uStack_f0 = CONCAT35(uStack_f0._5_3_,0x65707974);
    puVar14 = (uint *)&uStack_c0;
    FUN_10a10a278(puVar14,&uStack_100);
    if (&uStack_b8 == puVar14) {
      bVar8 = false;
    }
    else {
      bVar8 = **(int **)(puVar14 + 0xe) == 1;
    }
    func_0x0001098390a4(&UNK_10f63c7bf,0x18b,&UNK_10f63cc4d,bVar8);
    puVar10 = &uStack_c0;
    func_0x00010983b55c(puVar10,&uStack_100);
    piVar32 = (int *)puVar10[7];
    func_0x0001098390a4(&UNK_10f63c7bf,0x1d3,&UNK_10f580d70,*piVar32 == 1);
    puVar10 = *(undefined8 **)(piVar32 + 2);
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_e0,*puVar10,puVar10[1]);
    }
    else {
      uVar43 = puVar10[1];
      uVar40 = *puVar10;
      uVar26 = puVar10[2];
      uStack_d0 = (undefined4)uVar26;
      uStack_cc = (undefined1)((ulong)uVar26 >> 0x20);
      uStack_cb = (undefined1)((ulong)uVar26 >> 0x28);
      uStack_ca = (undefined1)((ulong)uVar26 >> 0x30);
      cStack_c9 = (char)((ulong)uVar26 >> 0x38);
      uStack_d8 = (undefined2)uVar43;
      uStack_d6 = (undefined1)((ulong)uVar43 >> 0x10);
      uStack_d5 = (undefined2)((ulong)uVar43 >> 0x18);
      uStack_d3 = (undefined1)((ulong)uVar43 >> 0x28);
      uStack_d2 = (undefined2)((ulong)uVar43 >> 0x30);
      uStack_e0._0_4_ = (uint)uVar40;
      uStack_e0._4_1_ = (undefined1)((ulong)uVar40 >> 0x20);
      uStack_e0._5_1_ = (undefined1)((ulong)uVar40 >> 0x28);
      uStack_e0._6_2_ = (undefined2)((ulong)uVar40 >> 0x30);
    }
    lVar21 = *(long *)(param_1 + 200);
    *(undefined4 *)(lVar21 + 0x18) = 0;
    if (cStack_c9 < '\0') {
      lVar30 = CONCAT26(uStack_d2,
                        CONCAT15(uStack_d3,CONCAT23(uStack_d5,CONCAT12(uStack_d6,uStack_d8))));
      if (lVar30 != 5) {
        if (lVar30 == 6) {
          piVar32 = (int *)CONCAT26(uStack_e0._6_2_,
                                    CONCAT15(uStack_e0._5_1_,
                                             CONCAT14(uStack_e0._4_1_,(uint)uStack_e0)));
          if (*piVar32 == 0x6f6f6d73 && (short)piVar32[1] == 0x6874) goto LAB_10a32b898;
        }
        else if ((lVar30 == 0xe) &&
                (plVar27 = (long *)CONCAT26(uStack_e0._6_2_,
                                            CONCAT15(uStack_e0._5_1_,
                                                     CONCAT14(uStack_e0._4_1_,(uint)uStack_e0))),
                *plVar27 == 0x696c7069746c756d && *(long *)((long)plVar27 + 6) == 0x6e6f69746163696c
                )) goto LAB_10a32b840;
        goto LAB_10a32b934;
      }
      piVar32 = (int *)CONCAT26(uStack_e0._6_2_,
                                CONCAT15(uStack_e0._5_1_,CONCAT14(uStack_e0._4_1_,(uint)uStack_e0)))
      ;
LAB_10a32b8a8:
      if (*piVar32 == 0x6c616373 && (char)piVar32[1] == 'e') {
        *(undefined4 *)(lVar21 + 0x18) = 3;
        puVar14 = (uint *)0x20;
        __Znwm();
        uStack_f0 = -0x7fffffffffffffe0;
        puStack_f8 = (uint *)0x1a;
        puVar14[2] = 0x73736563;
        puVar14[3] = 0x5f676e69;
        puVar14[0] = 0x6b73616d;
        puVar14[1] = 0x6f72705f;
        *(undefined8 *)((long)puVar14 + 0x12) = 0x7265696c7069746c;
        *(undefined8 *)((long)puVar14 + 10) = 0x756d5f676e697373;
        *(undefined1 *)((long)puVar14 + 0x1a) = 0;
        pdVar13 = (double *)&uStack_c0;
        uStack_100 = puVar14;
        func_0x00010a32c6a4(pdVar13,&uStack_100);
        *(float *)(*(long *)(param_1 + 200) + 0x1c) = (float)*pdVar13;
      }
    }
    else {
      if (cStack_c9 == '\x05') {
        piVar32 = (int *)&uStack_e0;
        goto LAB_10a32b8a8;
      }
      if (cStack_c9 == '\x06') {
        if ((uint)uStack_e0 == 0x6f6f6d73 && CONCAT11(uStack_e0._5_1_,uStack_e0._4_1_) == 0x6874) {
LAB_10a32b898:
          uVar20 = 1;
          goto LAB_10a32b89c;
        }
      }
      else if ((cStack_c9 == '\x0e') &&
              (CONCAT26(uStack_e0._6_2_,
                        CONCAT15(uStack_e0._5_1_,CONCAT14(uStack_e0._4_1_,(uint)uStack_e0))) ==
               0x696c7069746c756d &&
               CONCAT17(uStack_d3,
                        CONCAT25(uStack_d5,CONCAT14(uStack_d6,CONCAT22(uStack_d8,uStack_e0._6_2_))))
               == 0x6e6f69746163696c)) {
LAB_10a32b840:
        uVar20 = 2;
LAB_10a32b89c:
        *(undefined4 *)(lVar21 + 0x18) = uVar20;
      }
    }
LAB_10a32b934:
    ppppppuVar31 = (undefined8 ******)0x20;
    __Znwm();
    uStack_110 = -0x7fffffffffffffe0;
    pppppuStack_118 = (undefined8 ******)0x18;
    ppppppuVar31[1] = (undefined8 *****)0x697665645f64696f;
    *ppppppuVar31 = (undefined8 *****)0x72646e615f6e696d;
    ppppppuVar31[2] = (undefined8 *****)0x7373616c635f6563;
    *(undefined1 *)(ppppppuVar31 + 3) = 0;
    uStack_120 = ppppppuVar31;
    func_0x000107c2b054(&uStack_1d0,&UNK_10f64efef);
    puVar10 = &uStack_c0;
    func_0x00010a32c744(puVar10,&uStack_120,&uStack_1d0);
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_100,*puVar10,puVar10[1]);
    }
    else {
      uStack_f0 = puVar10[2];
      puStack_f8 = (uint *)puVar10[1];
      uStack_100 = (uint *)*puVar10;
    }
    if (uStack_1c0 < 0) {
      __ZdlPv(uStack_1d0);
    }
    if (uStack_110 < 0) {
      __ZdlPv(uStack_120);
    }
    if (uStack_f0 < 0) {
      if (puStack_f8 == (uint *)0x3) {
        if ((short)*uStack_100 == 0x6f6c && *(char *)((long)uStack_100 + 2) == 'w')
        goto LAB_10a32bc04;
        uVar19 = (ushort)*uStack_100 ^ 0x696d | *(byte *)((long)uStack_100 + 2) ^ 100;
LAB_10a32bab8:
        uVar20 = 2;
      }
      else {
        puVar14 = uStack_100;
        if (puStack_f8 != (uint *)0x4) goto LAB_10a32ba38;
LAB_10a32ba10:
        uVar19 = (*puVar14 & 0xff00ff00) >> 8 | (*puVar14 & 0xff00ff) << 8;
        uVar4 = uVar19 >> 0x10 | uVar19 << 0x10;
        uVar19 = (uint)(0x68696768 < uVar4);
        if (uVar4 < 0x68696768) {
          uVar19 = 0xffffffff;
        }
        uVar20 = 3;
      }
      if (uVar19 != 0) {
        uVar20 = 0xffffffff;
      }
    }
    else if (uStack_f0._7_1_ == '\x03') {
      if ((ushort)uStack_100 != 0x6f6c || uStack_100._2_1_ != 0x77) {
        uVar19 = (ushort)uStack_100 ^ 0x696d | uStack_100._2_1_ ^ 100;
        goto LAB_10a32bab8;
      }
LAB_10a32bc04:
      uVar20 = 1;
    }
    else {
      if (uStack_f0._7_1_ == '\x04') {
        puVar14 = (uint *)&uStack_100;
        goto LAB_10a32ba10;
      }
LAB_10a32ba38:
      uVar20 = 0xffffffff;
    }
    *(undefined4 *)(*(long *)(param_1 + 200) + 0x20) = uVar20;
    uStack_1c0 = CONCAT17(0x14,(undefined7)uStack_1c0);
    lStack_1c8 = 0x635f656369766564;
    uStack_1d0 = (uint *)0x5f736f695f6e696d;
    uStack_1c0 = CONCAT35(uStack_1c0._5_3_,0x7373616c);
    func_0x000107c2b054(&uStack_1f0,&UNK_10f64efef);
    puVar10 = &uStack_c0;
    func_0x00010a32c744(puVar10,&uStack_1d0,&uStack_1f0);
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_120,*puVar10,puVar10[1]);
    }
    else {
      uStack_110 = puVar10[2];
      pppppuStack_118 = (undefined8 ******)puVar10[1];
      uStack_120 = (undefined8 ******)*puVar10;
    }
    if (uStack_1da._1_1_ < '\0') {
      __ZdlPv(uStack_1f0);
    }
    if (uStack_1c0 < 0) {
      __ZdlPv(uStack_1d0);
    }
    if (uStack_110 < 0) {
      if ((undefined8 ******)pppppuStack_118 == (undefined8 ******)0x3) {
        if (*(short *)uStack_120 == 0x6f6c && *(char *)((long)uStack_120 + 2) == 'w')
        goto LAB_10a32bda4;
        uVar19 = *(ushort *)uStack_120 ^ 0x696d | *(byte *)((long)uStack_120 + 2) ^ 100;
LAB_10a32bc48:
        uVar20 = 2;
      }
      else {
        ppppppuVar31 = uStack_120;
        if ((undefined8 ******)pppppuStack_118 != (undefined8 ******)0x4) goto LAB_10a32bbc0;
LAB_10a32bb98:
        uVar19 = (*(uint *)ppppppuVar31 & 0xff00ff00) >> 8 | (*(uint *)ppppppuVar31 & 0xff00ff) << 8
        ;
        uVar4 = uVar19 >> 0x10 | uVar19 << 0x10;
        uVar19 = (uint)(0x68696768 < uVar4);
        if (uVar4 < 0x68696768) {
          uVar19 = 0xffffffff;
        }
        uVar20 = 3;
      }
      if (uVar19 != 0) {
        uVar20 = 0xffffffff;
      }
    }
    else if (uStack_110._7_1_ == '\x03') {
      if ((ushort)uStack_120 != 0x6f6c || uStack_120._2_1_ != 0x77) {
        uVar19 = (ushort)uStack_120 ^ 0x696d | uStack_120._2_1_ ^ 100;
        goto LAB_10a32bc48;
      }
LAB_10a32bda4:
      uVar20 = 1;
    }
    else {
      if (uStack_110._7_1_ == '\x04') {
        ppppppuVar31 = (undefined8 ******)&uStack_120;
        goto LAB_10a32bb98;
      }
LAB_10a32bbc0:
      uVar20 = 0xffffffff;
    }
    *(undefined4 *)(*(long *)(param_1 + 200) + 0x24) = uVar20;
    uStack_1e8 = 0x697665645f72;
    uStack_1f0 = 0x6568746f5f6e696d;
    uStack_1e2 = 0x6563;
    uStack_1e0 = 0x7373616c635f;
    uStack_1da = 0x1600;
    func_0x000107c2b054(auStack_208,&UNK_10f64efef);
    puVar10 = &uStack_c0;
    func_0x00010a32c744(puVar10,&uStack_1f0,auStack_208);
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_1d0,*puVar10,puVar10[1]);
    }
    else {
      uStack_1c0 = puVar10[2];
      lStack_1c8 = puVar10[1];
      uStack_1d0 = (uint *)*puVar10;
    }
    if (cStack_1f1 < '\0') {
      __ZdlPv(auStack_208[0]);
    }
    if (uStack_1da < 0) {
      __ZdlPv(uStack_1f0);
    }
    if (uStack_1c0 < 0) {
      if (lStack_1c8 == 3) {
        if ((short)*uStack_1d0 == 0x6f6c && *(char *)((long)uStack_1d0 + 2) == 'w') {
          uVar20 = 1;
        }
        else {
          uVar20 = 2;
          if ((short)*uStack_1d0 != 0x696d || *(char *)((long)uStack_1d0 + 2) != 'd') {
            uVar20 = 0xffffffff;
          }
        }
      }
      else {
        puVar14 = uStack_1d0;
        if (lStack_1c8 == 4) goto LAB_10a32bd1c;
        uVar20 = 0xffffffff;
      }
      *(undefined4 *)(*(long *)(param_1 + 200) + 0x28) = uVar20;
LAB_10a32be1c:
      __ZdlPv(uStack_1d0);
    }
    else {
      if (uStack_1c0._7_1_ == '\x03') {
        if ((short)uStack_1d0 == 0x6f6c && uStack_1d0._2_1_ == 'w') {
          uVar20 = 1;
        }
        else {
          uVar20 = 2;
          if ((short)uStack_1d0 != 0x696d || uStack_1d0._2_1_ != 'd') {
            uVar20 = 0xffffffff;
          }
        }
      }
      else {
        if (uStack_1c0._7_1_ == '\x04') {
          puVar14 = (uint *)&uStack_1d0;
LAB_10a32bd1c:
          uVar19 = (*puVar14 & 0xff00ff00) >> 8 | (*puVar14 & 0xff00ff) << 8;
          uVar4 = uVar19 >> 0x10 | uVar19 << 0x10;
          uVar19 = (uint)(0x68696768 < uVar4);
          if (uVar4 < 0x68696768) {
            uVar19 = 0xffffffff;
          }
          uVar20 = 3;
          if (uVar19 != 0) {
            uVar20 = 0xffffffff;
          }
          *(undefined4 *)(*(long *)(param_1 + 200) + 0x28) = uVar20;
          if (uStack_1c0 < 0) goto LAB_10a32be1c;
          goto LAB_10a32be24;
        }
        uVar20 = 0xffffffff;
      }
      *(undefined4 *)(*(long *)(param_1 + 200) + 0x28) = uVar20;
    }
LAB_10a32be24:
    if (uStack_110 < 0) {
      __ZdlPv(uStack_120);
    }
    func_0x000109839668(&uStack_c0);
  }
  uStack_b0 = CONCAT17(8,(undefined7)uStack_b0);
  uStack_c0._0_4_ = 0x65737361;
  uStack_c0._4_1_ = 0x74;
  uStack_c0._5_1_ = 0x5f;
  uStack_c0._6_1_ = 0x69;
  uStack_c0._7_1_ = 100;
  uStack_b8 = uStack_b8 & 0xffffff00;
  uStack_e0._0_4_ = 0;
  uStack_e0._4_1_ = 0;
  uStack_e0._5_1_ = 0;
  uStack_e0._6_2_ = 0;
  pppppppuVar11 = &ppppppuStack_188;
  FUN_10a32c3a8(pppppppuVar11,&uStack_c0,&uStack_e0);
  *(int *)(param_1 + 0x20) = (int)(double)*pppppppuVar11;
  uStack_b0 = CONCAT17(0x12,(undefined7)uStack_b0);
  uStack_b8 = 0x65725f6f;
  uStack_b4 = 0x71;
  uStack_b3 = 0x75;
  uStack_b2 = 0x69;
  uStack_b1 = 0x72;
  uStack_c0._0_4_ = 0x735f7369;
  uStack_c0._4_1_ = 0x74;
  uStack_c0._5_1_ = 0x65;
  uStack_c0._6_1_ = 0x72;
  uStack_c0._7_1_ = 0x65;
  uStack_b0 = CONCAT53(uStack_b0._3_5_,0x6465);
  uStack_e0._0_4_ = (uint)uStack_e0 & 0xffffff00;
  pppppppuVar11 = &ppppppuStack_188;
  func_0x00010a32c7cc(pppppppuVar11,&uStack_c0,&uStack_e0);
  *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)pppppppuVar11;
  uStack_b0 = CONCAT17(0x12,(undefined7)uStack_b0);
  uStack_b8 = 0x656c6163;
  uStack_b4 = 0x5f;
  uStack_b3 = 0x69;
  uStack_b2 = 0x6e;
  uStack_b1 = 0x70;
  uStack_c0._0_4_ = 0x675f7369;
  uStack_c0._4_1_ = 0x72;
  uStack_c0._5_1_ = 0x61;
  uStack_c0._6_1_ = 0x79;
  uStack_c0._7_1_ = 0x73;
  uStack_b0 = CONCAT53(uStack_b0._3_5_,0x7475);
  uStack_e0._0_4_ = (uint)uStack_e0 & 0xffffff00;
  pppppppuVar11 = &ppppppuStack_188;
  puVar10 = &uStack_c0;
  pppppppiVar18 = (int *******)&uStack_e0;
  func_0x00010a32c7cc(pppppppuVar11,puVar10,pppppppiVar18);
  *(undefined1 *)(param_1 + 0xd9) = *(undefined1 *)pppppppuVar11;
  *(undefined1 *)(param_1 + 0x18) = 1;
  plVar27 = *(long **)(param_1 + 0xb0);
  if (plVar27 != (long *)0x0) {
    puVar15 = &UNK_10f64f465;
    do {
      lVar21 = plVar27[8];
      if ((plVar27[6] - plVar27[5] != plVar27[9] - lVar21) ||
         (plVar27[0xc] - plVar27[0xb] != 0 &&
          (plVar27[6] - plVar27[5] >> 3) * -0x5555555555555555 - (plVar27[0xc] - plVar27[0xb] >> 6)
          != 0)) {
LAB_10a32c03c:
        FUN_10a00946c(puVar15);
LAB_10a32c040:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10a32c044);
        (*pcVar7)();
      }
      if (lVar21 != plVar27[9]) {
        lVar30 = (long)*(char *)(lVar21 + 0x17);
        if (lVar30 < 0) {
          lVar30 = *(long *)(lVar21 + 8);
        }
        if (lVar30 != 0) {
          puVar15 = &UNK_10f64f4ca;
          goto LAB_10a32c03c;
        }
      }
      plVar27 = (long *)*plVar27;
    } while (plVar27 != (long *)0x0);
  }
  func_0x000109839668(adStack_1b8);
  pppppppiVar9 = (int *******)&ppppppuStack_188;
  func_0x000109839668();
  if (cStack_141 < '\0') {
    pppppppiVar9 = (int *******)appppppiStack_158[0];
    __ZdlPv();
  }
LAB_10a32bff0:
  if (lStack_130 < 0) {
    pppppppiVar9 = (int *******)ppppppiStack_140;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return pppppppiVar9;
  }
  ___stack_chk_fail();
  func_0x000109839668(&uStack_c0);
  func_0x000109839668(adStack_1b8);
  func_0x000109839668(&ppppppuStack_188);
  if (cStack_141 < '\0') {
    __ZdlPv(appppppiStack_158[0]);
  }
  if (lStack_130 < 0) {
    __ZdlPv(ppppppiStack_140);
  }
  __Unwind_Resume();
  pppppppiVar16 = pppppppiVar9;
  FUN_10a10a278();
  if ((pppppppiVar9 + 1 != pppppppiVar16) && (*(int *)pppppppiVar16[7] == 0)) {
    FUN_10a10a278(pppppppiVar9,puVar10);
    pppppppiVar18 = (int *******)(pppppppiVar9[7] + 1);
    func_0x0001098390a4(&UNK_10f63c7bf,0x1d9,&UNK_10f6514a4,*(int *)pppppppiVar9[7] == 0);
  }
  return pppppppiVar18;
}



/* Entry: 10a32c3a8; end: 10a32c427;  */

int * FUN_10a32c3a8(long param_1,undefined8 param_2,int *param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10a10a278();
  if ((param_1 + 8 != lVar1) && (**(int **)(lVar1 + 0x38) == 0)) {
    FUN_10a10a278(param_1,param_2);
    param_3 = *(int **)(param_1 + 0x38) + 2;
    func_0x0001098390a4(&UNK_10f63c7bf,0x1d9,&UNK_10f6514a4,**(int **)(param_1 + 0x38) == 0);
  }
  return param_3;
}



/* Entry: 10a32c428; end: 10a32c5eb;  */

void FUN_10a32c428(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  long lStack_58;
  long lStack_50;
  
  FUN_10a042718(param_3);
  lVar4 = param_1;
  FUN_10a10a278(param_1,param_2);
  if ((param_1 + 8 != lVar4) && (**(int **)(lVar4 + 0x38) == 4)) {
    lVar4 = param_1;
    FUN_10a10a278(param_1,param_2);
    if (param_1 + 8 == lVar4) {
      bVar3 = false;
    }
    else {
      bVar3 = **(int **)(lVar4 + 0x38) == 4;
    }
    func_0x0001098390a4(&UNK_10f63c7bf,0x191,&UNK_10f63cc4d,bVar3);
    FUN_10a10a278(param_1,param_2);
    piVar5 = *(int **)(param_1 + 0x38);
    func_0x0001098390a4(&UNK_10f63c7bf,0x1df,&UNK_10f650e2b,*piVar5 == 4);
    func_0x00010983aa58(&lStack_58,*(undefined8 *)(piVar5 + 2));
    func_0x000107c31930(param_3,lStack_50 - lStack_58 >> 3);
    if (lStack_50 != lStack_58) {
      uVar1 = 1;
      uVar7 = 0;
      do {
        uVar6 = uVar1;
        func_0x0001098390a4(&UNK_10f63c7bf,0x16d,&UNK_10f650e37,1);
        if ((ulong)(lStack_50 - lStack_58 >> 3) <= uVar7) {
          FUN_10a34e7b4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a32c5d0);
          (*pcVar2)();
        }
        piVar5 = *(int **)(lStack_58 + uVar7 * 8);
        func_0x0001098390a4(&UNK_10f63c7bf,0x1d3,&UNK_10f580d70,*piVar5 == 1);
        FUN_10a0b4ec0(param_3,*(undefined8 *)(piVar5 + 2));
        uVar1 = (ulong)((int)uVar6 + 1);
        uVar7 = uVar6;
      } while (uVar6 < (ulong)(lStack_50 - lStack_58 >> 3));
    }
    func_0x000109839c54(&lStack_58);
  }
  return;
}



/* Entry: 10a32c5ec; end: 10a32c6a3;  */

long FUN_10a32c5ec(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x18;
  FUN_10a0426d8(&lStack_28);
  lStack_28 = param_1;
  FUN_10a0426d8(&lStack_28);
  return param_1;
}



/* Entry: 10a32c6a4; end: 10a32c84f;  */

int * FUN_10a32c6a4(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = param_1;
  FUN_10a10a278();
  if (param_1 + 8 == lVar2) {
    bVar1 = false;
  }
  else {
    bVar1 = **(int **)(lVar2 + 0x38) == 0;
  }
  func_0x0001098390a4(&UNK_10f63c7bf,0x18b,&UNK_10f63cc4d,bVar1);
  func_0x00010983b55c(param_1,param_2);
  piVar3 = *(int **)(param_1 + 0x38);
  func_0x0001098390a4(&UNK_10f63c7bf,0x1d9,&UNK_10f6514a4,*piVar3 == 0);
  return piVar3 + 2;
}



/* Entry: 10a32c850; end: 10a32c8df;  */

byte FUN_10a32c850(long param_1)

{
  byte bVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = (long)*(char *)(param_1 + 0x17);
    if (lVar2 < 0) {
      lVar2 = *(long *)(param_1 + 8);
    }
    bVar1 = 0;
    if (lVar2 != 0) {
      FUN_10a32a938(param_1,param_1);
      bVar1 = *(byte *)(param_1 + 0x18);
    }
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Entry: 10a32c8e0; end: 10a32c9a7;  */

long FUN_10a32c8e0(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  func_0x00010a32c8a0();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    if (param_2[1] != 0) {
      func_0x000107c3192c(&uStack_40,*param_2);
      goto LAB_10a32c944;
    }
  }
  else if (*(char *)((long)param_2 + 0x17) != '\0') {
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
    lStack_30 = param_2[2];
    goto LAB_10a32c944;
  }
  func_0x000107c2b054(&uStack_40,&UNK_10f64f517);
LAB_10a32c944:
  param_1 = param_1 + 400;
  func_0x00010a35d2e4(param_1,&uStack_40);
  if (param_1 != 0) {
    if (lStack_30 < 0) {
      __ZdlPv(uStack_40);
    }
    return param_1 + 0x28;
  }
  FUN_109ffdddc(&UNK_10f6514cc);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a32c98c);
  (*pcVar1)();
}



/* Entry: 10a32c9a8; end: 10a32ca6f;  */

long FUN_10a32c9a8(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  func_0x00010a32c8a0();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    if (param_2[1] != 0) {
      func_0x000107c3192c(&uStack_40,*param_2);
      goto LAB_10a32ca0c;
    }
  }
  else if (*(char *)((long)param_2 + 0x17) != '\0') {
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
    lStack_30 = param_2[2];
    goto LAB_10a32ca0c;
  }
  func_0x000107c2b054(&uStack_40,&UNK_10f64f517);
LAB_10a32ca0c:
  param_1 = param_1 + 400;
  func_0x00010a35d2e4(param_1,&uStack_40);
  if (param_1 != 0) {
    if (lStack_30 < 0) {
      __ZdlPv(uStack_40);
    }
    return param_1 + 0x40;
  }
  FUN_109ffdddc(&UNK_10f6514cc);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a32ca54);
  (*pcVar1)();
}



/* Entry: 10a32ca70; end: 10a32cb37;  */

long FUN_10a32ca70(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  func_0x00010a32c8a0();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    if (param_2[1] != 0) {
      func_0x000107c3192c(&uStack_40,*param_2);
      goto LAB_10a32cad4;
    }
  }
  else if (*(char *)((long)param_2 + 0x17) != '\0') {
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
    lStack_30 = param_2[2];
    goto LAB_10a32cad4;
  }
  func_0x000107c2b054(&uStack_40,&UNK_10f64f517);
LAB_10a32cad4:
  param_1 = param_1 + 400;
  func_0x00010a35d2e4(param_1,&uStack_40);
  if (param_1 != 0) {
    if (lStack_30 < 0) {
      __ZdlPv(uStack_40);
    }
    return param_1 + 0x58;
  }
  FUN_109ffdddc(&UNK_10f6514cc);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a32cb1c);
  (*pcVar1)();
}



/* Entry: 10a32cb38; end: 10a32cbf7;  */

/* WARNING: Removing unreachable block (ram,0x00010a105e38) */

long * FUN_10a32cb38(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 unaff_x23;
  
  plVar2 = (long *)(param_1 + 0x118);
  if (plVar2 == param_2) {
    return plVar2;
  }
  lVar7 = *param_2;
  lVar1 = param_2[1];
  lVar6 = lVar1 - lVar7 >> 3;
  uVar3 = lVar6 * -0x5555555555555555;
  plVar8 = (long *)*plVar2;
  if ((ulong)((*(long *)(param_1 + 0x128) - (long)plVar8 >> 3) * -0x5555555555555555) < uVar3) {
    plVar8 = plVar2;
    func_0x000107c3193c();
    if (0xaaaaaaaaaaaaaaa < uVar3) {
      FUN_10a05a0c0();
      *(undefined8 *)(param_1 + 0x120) = unaff_x23;
      __Unwind_Resume();
      *(undefined8 *)(param_1 + 0x120) = 0xaaaaaaaaaaaaaaa;
      __Unwind_Resume();
      plVar2 = (long *)plVar8[1];
      *plVar8 = (long)&PTR_DAT_110ba4b28;
      plVar8[1] = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      return plVar8;
    }
    lVar4 = *(long *)(param_1 + 0x128) - *plVar2 >> 3;
    uVar5 = lVar4 * 0x5555555555555556;
    if (uVar5 < uVar3 || uVar5 + lVar6 * 0x5555555555555555 == 0) {
      uVar5 = uVar3;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar5 = 0xaaaaaaaaaaaaaaa;
    }
    FUN_10a0cf150(plVar2,uVar5);
    FUN_10a0cf198(plVar2,lVar7,lVar1,*(undefined8 *)(param_1 + 0x120));
  }
  else {
    plVar9 = *(long **)(param_1 + 0x120);
    lVar6 = (long)plVar9 - (long)plVar8;
    if (uVar3 <= (ulong)((lVar6 >> 3) * -0x5555555555555555)) {
      if (lVar7 != lVar1) {
        do {
          plVar2 = plVar8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar8,lVar7);
          lVar7 = lVar7 + 0x18;
          plVar8 = plVar8 + 3;
        } while (lVar7 != lVar1);
        plVar9 = *(long **)(param_1 + 0x120);
      }
      for (; plVar9 != plVar8; plVar9 = plVar9 + -3) {
      }
      *(long **)(param_1 + 0x120) = plVar8;
      return plVar2;
    }
    lVar10 = lVar7;
    lVar4 = lVar6;
    if (plVar9 != plVar8) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar8,lVar10);
        plVar8 = plVar8 + 3;
        lVar4 = lVar4 + -0x18;
        lVar10 = lVar10 + 0x18;
      } while (lVar4 != 0);
      plVar9 = *(long **)(param_1 + 0x120);
    }
    FUN_10a0cf198(plVar2,lVar7 + lVar6,lVar1,plVar9);
  }
  *(long **)(param_1 + 0x120) = plVar2;
  return plVar2;
}



/* Entry: 10a32cbf8; end: 10a32ccf3;  */

undefined8 * FUN_10a32cbf8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *in_x4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  FUN_10aa7093c();
  *puVar4 = &PTR_DAT_110c46238;
  puVar4[2] = &PTR_DAT_110c462d8;
  puVar4[7] = &PTR_DAT_110c46330;
  lVar5 = in_x4[1];
  uVar6 = *in_x4;
  puVar4[0x1d] = in_x4[1];
  puVar4[0x1c] = uVar6;
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
  *param_1 = &PTR_FUN_110bc7c78;
  param_1[2] = &PTR_DAT_110bc7d18;
  param_1[0x1e] = 0;
  param_1[7] = &PTR_DAT_110bc7d70;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined8 *)((long)param_1 + 0x10c) = 1;
  param_1[0x35] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0x3f800000;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined2 *)(param_1 + 0x39) = 0;
  FUN_10a32ccf4(param_1);
  return param_1;
}



/* Entry: 10a32ccf4; end: 10a32cebf;  */

void FUN_10a32ccf4(long param_1)

{
  long lVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  func_0x00010aae9fd8();
  if (lVar1 != 0) {
    FUN_10a08d2e0(&uStack_38,lVar1 + 0x10);
    if (*(char *)(param_1 + 0x107) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0xf0));
    }
    *(undefined8 *)(param_1 + 0xf8) = uStack_30;
    *(undefined8 *)(param_1 + 0xf0) = uStack_38;
    *(undefined8 *)(param_1 + 0x100) = uStack_28;
  }
  return;
}



/* Entry: 10a32cec0; end: 10a32ced3;  */

void FUN_10a32cec0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bc7c78;
  param_1[2] = &PTR_DAT_110bc7d18;
  param_1[7] = &PTR_DAT_110bc7d70;
  FUN_10a35c2fc(param_1 + 0x37);
  FUN_10a34e840(param_1 + 0x32);
  puStack_28 = param_1 + 0x2f;
  FUN_10a0426d8(&puStack_28);
  puStack_28 = param_1 + 0x2c;
  FUN_10a0426d8(&puStack_28);
  puStack_28 = param_1 + 0x29;
  FUN_10a0426d8(&puStack_28);
  puStack_28 = param_1 + 0x26;
  FUN_10a0426d8(&puStack_28);
  puStack_28 = param_1 + 0x23;
  FUN_10a0426d8(&puStack_28);
  if (*(char *)((long)param_1 + 0x107) < '\0') {
    __ZdlPv(param_1[0x1e]);
  }
  *param_1 = &PTR_DAT_110c46238;
  param_1[2] = &PTR_DAT_110c462d8;
  param_1[7] = &PTR_DAT_110c46330;
  FUN_10a3786c8(param_1 + 0x1c);
  func_0x00010aa71c88(param_1);
  return;
}



/* Entry: 10a32ced4; end: 10a32cf17;  */

void FUN_10a32ced4(void)

{
  func_0x00010a32cde4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a32cf18; end: 10a32cfb7;  */

void FUN_10a32cf18(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *param_1 = puVar1;
  param_1[2] = 0x8000000000000020;
  param_1[1] = 0x19;
  puVar1[1] = 0x636172547463656a;
  *puVar1 = 0x624f2e7465737341;
  *(undefined8 *)((long)puVar1 + 0x11) = 0x7465737341676e69;
  *(undefined8 *)((long)puVar1 + 9) = 0x6b63617254746365;
  *(undefined1 *)((long)puVar1 + 0x19) = 0;
  return;
}



/* Entry: 10a32cfb8; end: 10a32d3f3;  */

void FUN_10a32cfb8(long *param_1,long param_2)

{
  undefined2 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  FUN_10a2e2708(&lStack_90,*(undefined8 *)(param_2 + 0x50),param_2 + 0xe0);
  *(undefined1 *)(lStack_90 + 0x108) = *(undefined1 *)(param_2 + 0x108);
  *(undefined4 *)(lStack_90 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  if (lStack_90 != param_2) {
    FUN_10a105cdc(lStack_90 + 0x130,*(long *)(param_2 + 0x130),*(long *)(param_2 + 0x138),
                  (*(long *)(param_2 + 0x138) - *(long *)(param_2 + 0x130) >> 3) *
                  -0x5555555555555555);
  }
  if (lStack_90 != param_2) {
    FUN_10a105cdc(lStack_90 + 0x118,*(long *)(param_2 + 0x118),*(long *)(param_2 + 0x120),
                  (*(long *)(param_2 + 0x120) - *(long *)(param_2 + 0x118) >> 3) *
                  -0x5555555555555555);
  }
  if (lStack_90 != param_2) {
    FUN_10a105cdc(lStack_90 + 0x148,*(long *)(param_2 + 0x148),*(long *)(param_2 + 0x150),
                  (*(long *)(param_2 + 0x150) - *(long *)(param_2 + 0x148) >> 3) *
                  -0x5555555555555555);
  }
  if (lStack_90 != param_2) {
    FUN_10a105cdc(lStack_90 + 0x160,*(long *)(param_2 + 0x160),*(long *)(param_2 + 0x168),
                  (*(long *)(param_2 + 0x168) - *(long *)(param_2 + 0x160) >> 3) *
                  -0x5555555555555555);
  }
  if (lStack_90 != param_2) {
    FUN_10a105cdc(lStack_90 + 0x178,*(long *)(param_2 + 0x178),*(long *)(param_2 + 0x180),
                  (*(long *)(param_2 + 0x180) - *(long *)(param_2 + 0x178) >> 3) *
                  -0x5555555555555555);
  }
  if (lStack_90 != param_2) {
    plVar4 = (long *)(lStack_90 + 400);
    *(undefined4 *)(lStack_90 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
    plVar9 = *(long **)(param_2 + 0x1a0);
    lVar5 = *(long *)(lStack_90 + 0x198);
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        *(undefined8 *)(*plVar4 + lVar6 * 8) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
      plVar7 = *(long **)(lStack_90 + 0x1a0);
      *(undefined8 *)(lStack_90 + 0x1a0) = 0;
      *(undefined8 *)(lStack_90 + 0x1a8) = 0;
      if (plVar7 != (long *)0x0 && plVar9 != (long *)0x0) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (plVar7 + 2,plVar9 + 2);
          if (plVar7 != plVar9) {
            FUN_10a105cdc(plVar7 + 5,plVar9[5],plVar9[6],
                          (plVar9[6] - plVar9[5] >> 3) * -0x5555555555555555);
            FUN_10a105cdc(plVar7 + 8,plVar9[8],plVar9[9],
                          (plVar9[9] - plVar9[8] >> 3) * -0x5555555555555555);
            FUN_10a35d800(plVar7 + 0xb,plVar9[0xb],plVar9[0xc],plVar9[0xc] - plVar9[0xb] >> 6);
          }
          plVar8 = (long *)*plVar7;
          FUN_10a35d3c8(plVar4,plVar7);
          plVar9 = (long *)*plVar9;
          plVar7 = plVar8;
        } while ((plVar8 != (long *)0x0) && (plVar9 != (long *)0x0));
      }
      func_0x00010a34e878(plVar4,plVar7);
    }
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      plVar7 = (long *)0x70;
      __Znwm();
      uStack_70 = 0;
      *plVar7 = 0;
      plVar7[1] = 0;
      plStack_80 = plVar7;
      plStack_78 = plVar4;
      if (*(char *)((long)plVar9 + 0x27) < '\0') {
        func_0x000107c3192c(plVar7 + 2,plVar9[2],plVar9[3]);
      }
      else {
        lVar6 = plVar9[3];
        lVar5 = plVar9[2];
        plVar7[4] = plVar9[4];
        plVar7[3] = lVar6;
        plVar7[2] = lVar5;
      }
      plVar7[5] = 0;
      plVar7[6] = 0;
      plVar7[7] = 0;
      FUN_10a0cf0cc(plVar7 + 5,plVar9[5],plVar9[6],
                    (plVar9[6] - plVar9[5] >> 3) * -0x5555555555555555);
      plVar7[8] = 0;
      plVar7[9] = 0;
      plVar7[10] = 0;
      FUN_10a0cf0cc(plVar7 + 8,plVar9[8],plVar9[9],
                    (plVar9[9] - plVar9[8] >> 3) * -0x5555555555555555);
      plVar7[0xb] = 0;
      plVar7[0xc] = 0;
      plVar7[0xd] = 0;
      FUN_10a34e7c8();
      uStack_70 = CONCAT71(uStack_70._1_7_,1);
      plVar8 = plVar4;
      func_0x000107c2b05c(plVar4,plVar7 + 2);
      plVar7[1] = (long)plVar8;
      FUN_10a35d3c8(plVar4,plVar7);
    }
  }
  lVar5 = lStack_90;
  *(undefined4 *)(lStack_90 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
  plVar9 = *(long **)(param_2 + 0x1b8);
  plVar4 = (long *)0x48;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110bc66a8;
  plStack_80 = plVar4 + 3;
  lVar10 = plVar9[1];
  lVar6 = *plVar9;
  lVar12 = plVar9[3];
  lVar11 = plVar9[2];
  uVar13 = *(undefined8 *)((long)plVar9 + 0x1c);
  *(undefined8 *)((long)plVar4 + 0x3c) = *(undefined8 *)((long)plVar9 + 0x24);
  *(undefined8 *)((long)plVar4 + 0x34) = uVar13;
  plVar4[6] = lVar12;
  plVar4[5] = lVar11;
  plVar4[4] = lVar10;
  plVar4[3] = lVar6;
  plStack_78 = plVar4;
  func_0x00010a32c640(lVar5 + 0x1b8,&plStack_80);
  plVar4 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar9 = plStack_78 + 1;
    do {
      lVar5 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  uVar1 = *(undefined2 *)(param_2 + 0x1c8);
  param_1[1] = lStack_88;
  *param_1 = lStack_90;
  *(undefined2 *)(lStack_90 + 0x1c8) = uVar1;
  return;
}



/* Entry: 10a32d3f4; end: 10a32dd1f;  */

/* WARNING: Removing unreachable block (ram,0x00010a32d824) */
/* WARNING: Removing unreachable block (ram,0x00010a32d9fc) */

void FUN_10a32d3f4(long param_1,long *param_2)

{
  long ****pppplVar1;
  long **pplVar2;
  long *plVar3;
  long *****ppppplVar4;
  long ****pppplVar5;
  long ***ppplVar6;
  long ****pppplVar7;
  ulong uVar8;
  long **pplVar9;
  long *plVar10;
  long ****pppplVar11;
  int iVar12;
  ulong uVar13;
  long ****pppplVar14;
  float fVar15;
  long lStack_148;
  long lStack_140;
  long **pplStack_130;
  long lStack_128;
  long ****pppplStack_118;
  long lStack_110;
  long ****pppplStack_100;
  long ***ppplStack_f8;
  long ***ppplStack_f0;
  long ***ppplStack_e8;
  long ***ppplStack_e0;
  long ***ppplStack_d8;
  long ***ppplStack_d0;
  long ***ppplStack_c8;
  long ***ppplStack_c0;
  long ****pppplStack_b0;
  long ***ppplStack_a8;
  long ***ppplStack_a0;
  long ****pppplStack_90;
  long ***ppplStack_88;
  long ***ppplStack_80;
  
  FUN_10aae9ef4();
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_options_110bc4a50);
  plVar3 = param_2;
  (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110bc4a30,0);
  *(int *)(param_1 + 0x110) = (int)plVar3;
  (**(code **)(*param_2 + 0x60))(&pppplStack_100,param_2,&PTR_DAT_110bc4990);
  func_0x000107c3193c(param_1 + 0x130);
  *(long ****)(param_1 + 0x138) = ppplStack_f8;
  *(long *****)(param_1 + 0x130) = pppplStack_100;
  *(long ****)(param_1 + 0x140) = ppplStack_f0;
  ppplStack_f8 = (long ***)0x0;
  ppplStack_f0 = (long ***)0x0;
  pppplStack_100 = (long ****)0x0;
  pppplStack_90 = (long ****)&pppplStack_100;
  FUN_10a0426d8(&pppplStack_90);
  (**(code **)(*param_2 + 0x60))(&pppplStack_100,param_2,&PTR_DAT_110bc49b0);
  func_0x000107c3193c((undefined8 *)(param_1 + 0x118));
  *(long ****)(param_1 + 0x120) = ppplStack_f8;
  *(undefined8 *)(param_1 + 0x118) = pppplStack_100;
  *(long ****)(param_1 + 0x128) = ppplStack_f0;
  ppplStack_f8 = (long ***)0x0;
  ppplStack_f0 = (long ***)0x0;
  pppplStack_100 = (long ****)0x0;
  pppplStack_90 = (long ****)&pppplStack_100;
  FUN_10a0426d8(&pppplStack_90);
  (**(code **)(*param_2 + 0x60))(&pppplStack_100,param_2,&PTR_DAT_110bc49d0);
  func_0x000107c3193c(param_1 + 0x148);
  *(long ****)(param_1 + 0x150) = ppplStack_f8;
  *(long *****)(param_1 + 0x148) = pppplStack_100;
  *(long ****)(param_1 + 0x158) = ppplStack_f0;
  ppplStack_f8 = (long ***)0x0;
  ppplStack_f0 = (long ***)0x0;
  pppplStack_100 = (long ****)0x0;
  pppplStack_90 = (long ****)&pppplStack_100;
  FUN_10a0426d8(&pppplStack_90);
  (**(code **)(*param_2 + 0x60))(&pppplStack_100,param_2,&PTR_DAT_110bc49f0);
  func_0x000107c3193c(param_1 + 0x160);
  *(long ****)(param_1 + 0x168) = ppplStack_f8;
  *(long *****)(param_1 + 0x160) = pppplStack_100;
  *(long ****)(param_1 + 0x170) = ppplStack_f0;
  ppplStack_f8 = (long ***)0x0;
  ppplStack_f0 = (long ***)0x0;
  pppplStack_100 = (long ****)0x0;
  pppplStack_90 = (long ****)&pppplStack_100;
  FUN_10a0426d8(&pppplStack_90);
  pppplStack_90 = (long ****)0x0;
  ppplStack_88 = (long ***)0x0;
  ppplStack_80 = (long ***)0x0;
  (**(code **)(*param_2 + 0x68))(&pppplStack_100,param_2,&PTR_DAT_110bc4a10,&pppplStack_90);
  func_0x000107c3193c(param_1 + 0x178);
  *(long ****)(param_1 + 0x180) = ppplStack_f8;
  *(long *****)(param_1 + 0x178) = pppplStack_100;
  *(long ****)(param_1 + 0x188) = ppplStack_f0;
  ppplStack_f8 = (long ***)0x0;
  ppplStack_f0 = (long ***)0x0;
  pppplStack_100 = (long ****)0x0;
  pppplStack_b0 = (long ****)&pppplStack_100;
  FUN_10a0426d8(&pppplStack_b0);
  pppplStack_b0 = (long ****)&pppplStack_90;
  FUN_10a0426d8(&pppplStack_b0);
  pppplVar1 = (long ****)(param_1 + 400);
  func_0x00010a35ced0(pppplVar1);
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bc4a70);
  if (((ulong)plVar3 & 1) == 0) {
    pppplStack_90 = (long ****)0x0;
    ppplStack_88 = (long ***)0x0;
    ppplStack_80 = (long ***)0x0;
    pppplStack_b0 = (long ****)0x0;
    ppplStack_a8 = (long ***)0x0;
    ppplStack_a0 = (long ***)0x0;
    plVar3 = param_2;
    (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bc4a90);
    if ((int)plVar3 != 0) {
      (**(code **)(*param_2 + 0x60))(&pppplStack_100,param_2,&PTR_DAT_110bc4a90);
      func_0x000107c3193c(&pppplStack_90);
      ppplStack_88 = ppplStack_f8;
      pppplStack_90 = pppplStack_100;
      ppplStack_80 = ppplStack_f0;
      ppplStack_f8 = (long ***)0x0;
      ppplStack_f0 = (long ***)0x0;
      pppplStack_100 = (long ****)0x0;
      pppplStack_118 = (long ****)&pppplStack_100;
      FUN_10a0426d8(&pppplStack_118);
    }
    plVar3 = param_2;
    (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bc4ab0);
    if ((int)plVar3 != 0) {
      (**(code **)(*param_2 + 0x60))(&pppplStack_100,param_2,&PTR_DAT_110bc4ab0);
      func_0x000107c3193c(&pppplStack_b0);
      ppplStack_a8 = ppplStack_f8;
      pppplStack_b0 = pppplStack_100;
      ppplStack_a0 = ppplStack_f0;
      ppplStack_f8 = (long ***)0x0;
      ppplStack_f0 = (long ***)0x0;
      pppplStack_100 = (long ****)0x0;
      pppplStack_118 = (long ****)&pppplStack_100;
      FUN_10a0426d8(&pppplStack_118);
    }
    pppplStack_100 = (long ****)0x0;
    ppplStack_f8 = (long ***)0x0;
    ppplStack_f0 = (long ***)0x0;
    FUN_10a0cf0cc(&pppplStack_100,pppplStack_90,ppplStack_88,
                  ((long)ppplStack_88 - (long)pppplStack_90 >> 3) * -0x5555555555555555);
    ppplStack_e8 = (long ***)0x0;
    ppplStack_e0 = (long ***)0x0;
    ppplStack_d8 = (long ***)0x0;
    FUN_10a0cf0cc(&ppplStack_e8,pppplStack_b0,ppplStack_a8,
                  ((long)ppplStack_a8 - (long)pppplStack_b0 >> 3) * -0x5555555555555555);
    ppplStack_d0 = (long ***)0x0;
    ppplStack_c8 = (long ***)0x0;
    ppplStack_c0 = (long ***)0x0;
    FUN_10a35cf24(pppplVar1,&pppplStack_100);
    if ((long ****)ppplStack_d0 != (long ****)0x0) {
      ppplStack_c8 = ppplStack_d0;
      __ZdlPv();
    }
    pppplStack_118 = &ppplStack_e8;
    FUN_10a0426d8(&pppplStack_118);
    pppplStack_118 = (long ****)&pppplStack_100;
    FUN_10a0426d8(&pppplStack_118);
    pppplStack_100 = (long ****)&pppplStack_b0;
    FUN_10a0426d8(&pppplStack_100);
    pppplStack_100 = (long ****)&pppplStack_90;
    FUN_10a0426d8(&pppplStack_100);
  }
  else {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110bc4a70);
    plVar3 = param_2;
    (**(code **)(*param_2 + 0x208))();
    if (0 < (int)plVar3) {
      iVar12 = 0;
      pplVar2 = (long **)(param_1 + 0x1a0);
      do {
        pppplVar11 = (long ****)0xaaaaaaaaaaaaaaab;
        (**(code **)(*param_2 + 0x218))(param_2,iVar12);
        (**(code **)(*param_2 + 0xa0))(&pppplStack_b0,param_2,&PTR_DAT_110bc4ad0);
        (**(code **)(*param_2 + 0x60))(&pppplStack_118,param_2,&PTR_DAT_110bc4a90);
        (**(code **)(*param_2 + 0x60))(&pplStack_130,param_2,&PTR_DAT_110bc4ab0);
        FUN_10a32dd20(&lStack_148,param_2,&PTR_DAT_110bc4af0);
        pppplStack_100 = (long ****)0x0;
        ppplStack_f8 = (long ***)0x0;
        ppplStack_f0 = (long ***)0x0;
        FUN_10a0cf0cc(&pppplStack_100,pppplStack_118,lStack_110,
                      (lStack_110 - (long)pppplStack_118 >> 3) * -0x5555555555555555);
        ppplStack_e8 = (long ***)0x0;
        ppplStack_e0 = (long ***)0x0;
        ppplStack_d8 = (long ***)0x0;
        FUN_10a0cf0cc(&ppplStack_e8,pplStack_130,lStack_128,
                      (lStack_128 - (long)pplStack_130 >> 3) * -0x5555555555555555);
        ppplStack_d0 = (long ***)0x0;
        ppplStack_c8 = (long ***)0x0;
        ppplStack_c0 = (long ***)0x0;
        FUN_10a34e7c8(&ppplStack_d0,lStack_148,lStack_140,lStack_140 - lStack_148 >> 6);
        pppplVar7 = pppplVar1;
        func_0x000107c2b05c(pppplVar1,&pppplStack_b0);
        pppplVar14 = *(long *****)(param_1 + 0x198);
        if (pppplVar14 != (long ****)0x0) {
          uVar13 = (long)pppplVar14 - 1;
          if (((ulong)pppplVar14 & uVar13) == 0) {
            pppplVar11 = (long ****)(uVar13 & (ulong)pppplVar7);
          }
          else {
            pppplVar11 = pppplVar7;
            if (pppplVar14 <= pppplVar7) {
              uVar8 = 0;
              if (pppplVar14 != (long ****)0x0) {
                uVar8 = (ulong)pppplVar7 / (ulong)pppplVar14;
              }
              pppplVar11 = (long ****)((long)pppplVar7 - uVar8 * (long)pppplVar14);
            }
          }
          if ((*pppplVar1)[(long)pppplVar11] != (long **)0x0) {
            for (plVar10 = *(*pppplVar1)[(long)pppplVar11]; plVar10 != (long *)0x0;
                plVar10 = (long *)*plVar10) {
              pppplVar5 = (long ****)plVar10[1];
              if (pppplVar5 == pppplVar7) {
                pppplVar5 = pppplVar1;
                func_0x000107c2b068(pppplVar1,plVar10 + 2,&pppplStack_b0);
                if (((ulong)pppplVar5 & 1) != 0) goto LAB_10a32d980;
              }
              else {
                if (((ulong)pppplVar14 & uVar13) == 0) {
                  pppplVar5 = (long ****)((ulong)pppplVar5 & uVar13);
                }
                else if (pppplVar14 <= pppplVar5) {
                  uVar8 = 0;
                  if (pppplVar14 != (long ****)0x0) {
                    uVar8 = (ulong)pppplVar5 / (ulong)pppplVar14;
                  }
                  pppplVar5 = (long ****)((long)pppplVar5 - uVar8 * (long)pppplVar14);
                }
                if (pppplVar5 != pppplVar11) break;
              }
            }
          }
        }
        ppppplVar4 = (long *****)0x70;
        __Znwm();
        *ppppplVar4 = (long ****)0x0;
        ppppplVar4[1] = pppplVar7;
        ppppplVar4[3] = (long ****)ppplStack_a8;
        ppppplVar4[2] = pppplStack_b0;
        ppppplVar4[4] = (long ****)ppplStack_a0;
        ppppplVar4[6] = (long ****)ppplStack_f8;
        ppppplVar4[5] = pppplStack_100;
        ppppplVar4[7] = (long ****)ppplStack_f0;
        ppplStack_f8 = (long ***)0x0;
        ppplStack_f0 = (long ***)0x0;
        pppplStack_100 = (long ****)0x0;
        ppppplVar4[9] = (long ****)ppplStack_e0;
        ppppplVar4[8] = (long ****)ppplStack_e8;
        ppppplVar4[10] = (long ****)ppplStack_d8;
        ppplStack_e0 = (long ***)0x0;
        ppplStack_d8 = (long ***)0x0;
        ppplStack_e8 = (long ***)0x0;
        ppppplVar4[0xc] = (long ****)ppplStack_c8;
        ppppplVar4[0xb] = (long ****)ppplStack_d0;
        ppppplVar4[0xd] = (long ****)ppplStack_c0;
        ppplStack_c8 = (long ***)0x0;
        ppplStack_c0 = (long ***)0x0;
        ppplStack_d0 = (long ***)0x0;
        ppplStack_80 = (long ***)0x1;
        fVar15 = (float)(*(long *)(param_1 + 0x1a8) + 1);
        pppplStack_90 = (long ****)ppppplVar4;
        ppplStack_88 = (long ***)pppplVar1;
        if ((pppplVar14 == (long ****)0x0) ||
           (*(float *)(param_1 + 0x1b0) * (float)pppplVar14 < fVar15)) {
          uVar13 = 1;
          if ((long ****)0x2 < pppplVar14) {
            uVar13 = (ulong)(((ulong)pppplVar14 & (long)pppplVar14 - 1U) != 0);
          }
          uVar13 = uVar13 | (long)pppplVar14 << 1;
          uVar8 = (ulong)(fVar15 / *(float *)(param_1 + 0x1b0));
          if (uVar13 <= uVar8) {
            uVar13 = uVar8;
          }
          FUN_10a35ccb8(pppplVar1,uVar13);
          pppplVar14 = *(long *****)(param_1 + 0x198);
          if (((ulong)pppplVar14 & (long)pppplVar14 - 1U) == 0) {
            pppplVar11 = (long ****)((long)pppplVar14 - 1U & (ulong)pppplVar7);
          }
          else {
            pppplVar11 = pppplVar7;
            if (pppplVar14 <= pppplVar7) {
              uVar13 = 0;
              if (pppplVar14 != (long ****)0x0) {
                uVar13 = (ulong)pppplVar7 / (ulong)pppplVar14;
              }
              pppplVar11 = (long ****)((long)pppplVar7 - uVar13 * (long)pppplVar14);
            }
          }
        }
        ppplVar6 = *pppplVar1;
        pplVar9 = ppplVar6[(long)pppplVar11];
        if (pplVar9 == (long **)0x0) {
          *ppppplVar4 = (long ****)*pplVar2;
          *pplVar2 = (long *)ppppplVar4;
          ppplVar6[(long)pppplVar11] = pplVar2;
          if (*ppppplVar4 != (long ****)0x0) {
            pppplVar7 = (long ****)(*ppppplVar4)[1];
            if (((ulong)pppplVar14 & (long)pppplVar14 - 1U) == 0) {
              pppplVar7 = (long ****)((ulong)pppplVar7 & (long)pppplVar14 - 1U);
            }
            else if (pppplVar14 <= pppplVar7) {
              uVar13 = 0;
              if (pppplVar14 != (long ****)0x0) {
                uVar13 = (ulong)pppplVar7 / (ulong)pppplVar14;
              }
              pppplVar7 = (long ****)((long)pppplVar7 - uVar13 * (long)pppplVar14);
            }
            (*pppplVar1)[(long)pppplVar7] = (long **)ppppplVar4;
          }
        }
        else {
          *ppppplVar4 = (long ****)*pplVar9;
          *pplVar9 = (long *)ppppplVar4;
        }
        *(long *)(param_1 + 0x1a8) = *(long *)(param_1 + 0x1a8) + 1;
LAB_10a32d980:
        if ((long ****)ppplStack_d0 != (long ****)0x0) {
          ppplStack_c8 = ppplStack_d0;
          __ZdlPv();
        }
        pppplStack_90 = &ppplStack_e8;
        FUN_10a0426d8(&pppplStack_90);
        pppplStack_90 = (long ****)&pppplStack_100;
        FUN_10a0426d8(&pppplStack_90);
        (**(code **)(*param_2 + 0x220))(param_2);
        if (lStack_148 != 0) {
          lStack_140 = lStack_148;
          __ZdlPv();
        }
        pppplStack_100 = (long ****)&pplStack_130;
        FUN_10a0426d8(&pppplStack_100);
        pppplStack_100 = (long ****)&pppplStack_118;
        FUN_10a0426d8(&pppplStack_100);
        iVar12 = iVar12 + 1;
      } while (iVar12 != (int)plVar3);
    }
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  (**(code **)(*param_2 + 0x220))(param_2);
  FUN_10a32ccf4(param_1);
  return;
}



/* Entry: 10a32dd20; end: 10a32dd8b;  */

void FUN_10a32dd20(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uStack_38;
  ulong uStack_30;
  byte bStack_28;
  
  FUN_10a35d928(&uStack_38);
  if ((bStack_28 & 1) != 0) {
    if (uStack_30 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      FUN_10a187130(param_1,uStack_30 >> 6);
      if ((bStack_28 & 1) == 0) goto LAB_10a32dd88;
      _memcpy(*param_1,uStack_38,uStack_30);
    }
    return;
  }
LAB_10a32dd88:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a32dd8c);
  (*pcVar1)();
}



/* Entry: 10a32dd8c; end: 10a32df83;  */

void FUN_10a32dd8c(long param_1,long *param_2)

{
  long *plVar1;
  
  func_0x00010aa70b70();
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c44818,*(undefined8 *)(param_1 + 0xe0));
  FUN_10a32c850(param_1 + 0xf0);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_s_options_110bc4a50);
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110bc4a30,*(undefined4 *)(param_1 + 0x110));
  (**(code **)(*param_2 + 0x138))(param_2,&PTR_DAT_110bc4990,param_1 + 0x130);
  (**(code **)(*param_2 + 0x138))(param_2,&PTR_DAT_110bc49b0,param_1 + 0x118);
  (**(code **)(*param_2 + 0x138))(param_2,&PTR_DAT_110bc49d0,param_1 + 0x148);
  (**(code **)(*param_2 + 0x138))(param_2,&PTR_DAT_110bc49f0,param_1 + 0x160);
  (**(code **)(*param_2 + 0x138))(param_2,&PTR_DAT_110bc4a10,param_1 + 0x178);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bc4a70);
  for (plVar1 = *(long **)(param_1 + 0x1a0); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a00d760(param_2,&PTR_DAT_110bc4ad0,plVar1 + 2);
    (**(code **)(*param_2 + 0x138))(param_2,&PTR_DAT_110bc4a90,plVar1 + 5);
    (**(code **)(*param_2 + 0x138))(param_2,&PTR_DAT_110bc4ab0,plVar1 + 8);
    (**(code **)(*param_2 + 0x28))(param_2,&PTR_DAT_110bc4af0,plVar1[0xb],plVar1[0xc] - plVar1[0xb])
    ;
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010a32df80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10a32df84; end: 10a32e0db;  */

void FUN_10a32df84(long param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if ((param_2 == 0) || (lVar1 = param_2, func_0x00010aae9fd8(), lVar1 == 0)) {
    if (*(char *)(param_1 + 0x37) < '\0') {
      **(undefined1 **)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x20) = 0;
      *(undefined1 *)(param_1 + 0x37) = 0;
    }
    if (*(char *)(param_1 + 0x1f) < '\0') {
      **(undefined1 **)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 8) = 0;
      *(undefined1 *)(param_1 + 0x1f) = 0;
    }
    uVar2 = 0;
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  else {
    FUN_10a08d2e0(&uStack_50,lVar1 + 0x10);
    if (*(char *)(param_1 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 8));
    }
    *(long *)(param_1 + 0x18) = lStack_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    *(undefined8 *)(param_1 + 8) = uStack_50;
    func_0x00010a32c8a0(param_2);
    if (*(int *)(param_2 + 0x110) == 0) {
      if (*(char *)(lVar1 + 0x27) < '\0') {
        func_0x000107c3192c(&uStack_50,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18));
      }
      else {
        uStack_48 = *(undefined8 *)(lVar1 + 0x18);
        uStack_50 = *(undefined8 *)(lVar1 + 0x10);
        lStack_40 = *(long *)(lVar1 + 0x20);
      }
    }
    else {
      __ZNSt3__19to_stringEj(&uStack_50);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_1 + 0x20,&uStack_50);
    if (lStack_40 < 0) {
      __ZdlPv(uStack_50);
    }
    func_0x00010a32c8a0(param_2);
    *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x1c8);
    func_0x00010a32c8a0(param_2);
    uVar2 = *(undefined1 *)(param_2 + 0x1c9);
  }
  *(undefined1 *)(param_1 + 0x69) = uVar2;
  return;
}



/* Entry: 10a32e0dc; end: 10a32e12b;  */

undefined1  [16] FUN_10a32e0dc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xc;
  auVar1._0_8_ = &UNK_10f650fd1;
  return auVar1;
}



/* Entry: 10a32e12c; end: 10a32e21b;  */

void FUN_10a32e12c(undefined8 param_1)

{
  undefined *puStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
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
  ppuStack_80 = (undefined **)0xffffffff00000002;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x124;
  uStack_48 = 0x13c;
  FUN_10a32e21c(param_1,&puStack_88);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f64f52d;
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
  FUN_10a35dbf0();
  ppuStack_80 = &puStack_90;
  puStack_90 = &UNK_10f64f54d;
  puStack_88 = &UNK_10f64f53c;
  uStack_78 = 1;
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
  func_0x00010a35dda0(param_1,&puStack_88,0);
  FUN_10a35e728(param_1);
  return;
}



/* Entry: 10a32e21c; end: 10a32e2f3;  */

/* WARNING: Removing unreachable block (ram,0x00010a32e2b4) */

undefined1  [16] FUN_10a32e21c(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f650fd1,0xc);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a35daf4(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a32e2f4; end: 10a32e373;  */

undefined8 * FUN_10a32e2f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110bc4b20;
  puVar1 = (undefined8 *)param_1[0x16];
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = *(long *)*puVar1;
    if (*(code **)(puVar1[1] + 0x18) != (code *)0x0) {
      (**(code **)(puVar1[1] + 0x18))(puVar1);
    }
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110c48fd8;
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
  }
  func_0x00010a34e918(param_1 + 10,param_1[0xb]);
  func_0x00010a1ff0cc(param_1 + 8);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a32e374; end: 10a32e3d7;  */

undefined8 * FUN_10a32e374(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c48fd8;
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
  }
  func_0x00010a34e918(param_1 + 10,param_1[0xb]);
  func_0x00010a1ff0cc(param_1 + 8);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a32e3d8; end: 10a32e3db;  */

undefined8 * FUN_10a32e3d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110bc4b20;
  puVar1 = (undefined8 *)param_1[0x16];
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = *(long *)*puVar1;
    if (*(code **)(puVar1[1] + 0x18) != (code *)0x0) {
      (**(code **)(puVar1[1] + 0x18))(puVar1);
    }
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110c48fd8;
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
  }
  func_0x00010a34e918(param_1 + 10,param_1[0xb]);
  func_0x00010a1ff0cc(param_1 + 8);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a32e3dc; end: 10a32e3ef;  */

void FUN_10a32e3dc(void)

{
  FUN_10a32e2f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a32e3f0; end: 10a32e56b;  */

undefined8 * FUN_10a32e3f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  puVar2 = param_1;
  FUN_10a32e56c();
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  *puVar2 = &PTR_FUN_110bc4b20;
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  puVar2[0x17] = 0;
  if (*(int *)(param_4 + 0x90) == 0x6f75746c) {
    lVar5 = param_4;
    func_0x000109759698(param_4,param_1 + 0x16);
    if ((int)lVar5 == 0) {
      func_0x000109758358(param_4 + 200,&lStack_50);
      param_1[3] = (long)((float)lStack_50 / 64.0);
      param_1[4] = (long)((float)lStack_48 / 64.0);
      param_1[5] = (long)((float)lStack_40 / 64.0);
      param_1[6] = (long)((float)lStack_38 / 64.0);
      lVar5 = *(long *)(param_4 + 0x88);
      *(float *)(param_1 + 7) = (float)*(long *)(param_4 + 0x80) / 64.0;
      *(float *)((long)param_1 + 0x3c) = (float)lVar5 / 64.0;
      lVar5 = *(long *)(param_4 + 0x40);
      *(float *)(param_1 + 0x17) = (float)lVar5 / 64.0;
      *(float *)((long)param_1 + 0xbc) = (float)*(long *)(param_4 + 0x48) / 64.0;
      uVar3 = (uint)*(ushort *)(param_1[0x16] + 0x2a);
      if (uVar3 != 0) {
        uVar4 = 0;
        plVar6 = *(long **)(param_1[0x16] + 0x30);
        do {
          *plVar6 = *plVar6 + (long)((float)(long)-((float)lVar5 * 0.015625) * 64.0);
          uVar4 = uVar4 + 1;
          plVar6 = plVar6 + 2;
        } while (uVar4 < uVar3);
      }
      return param_1;
    }
    FUN_10a00946c(&UNK_10f64f596);
  }
  else {
    FUN_10a00946c(&UNK_10f64f563);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a32e538);
  (*pcVar1)();
}



/* Entry: 10a32e56c; end: 10a32e63b;  */

undefined8 * FUN_10a32e56c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c48fd8;
  param_1[0xb] = 0;
  param_1[10] = param_1 + 0xb;
  param_1[0xc] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0xd,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[0xf] = param_2[2];
    param_1[0xe] = uVar2;
    param_1[0xd] = uVar1;
  }
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return param_1;
}



/* Entry: 10a32e63c; end: 10a32e88b;  */

undefined *** FUN_10a32e63c(undefined ***param_1)

{
  char cVar1;
  bool bVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  undefined8 *extraout_x8;
  undefined **ppuVar6;
  undefined ***unaff_x20;
  undefined1 auStack_2c0 [8];
  undefined ***pppuStack_2b8;
  undefined ***pppuStack_2b0;
  undefined ***pppuStack_2a8;
  undefined1 *puStack_2a0;
  code *pcStack_298;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined1 auStack_278 [56];
  undefined8 uStack_240;
  char cStack_229;
  undefined **appuStack_218 [19];
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_149;
  undefined8 uStack_148;
  undefined **ppuStack_140;
  undefined ***pppuStack_138;
  code *pcStack_108;
  undefined **ppuStack_100;
  undefined ***pppuStack_f8;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined ***pppuStack_b8;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined ***pppuStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = param_1;
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    if (param_1[0x14] != (undefined **)0x0) goto LAB_10a32e830;
  }
  else if (*(char *)((long)param_1 + 0xaf) != '\0') goto LAB_10a32e830;
  ppuVar6 = param_1[0x16];
  FUN_109fed7e0(&ppuStack_288);
  uStack_148 = 0x10a34e9bc;
  ppuStack_140 = &PTR_FUN_110bc5a80;
  pcStack_108 = FUN_10a34ea60;
  ppuStack_100 = &PTR_FUN_110bc5aa0;
  pcStack_c8 = FUN_10a34eb04;
  ppuStack_c0 = &PTR_FUN_110bc5ac0;
  pcStack_88 = FUN_10a34ebe4;
  ppuStack_80 = &PTR_FUN_110bc5ae0;
  ppuStack_180 = (undefined **)FUN_10a34ecf8;
  ppuStack_178 = (undefined **)0x10a34ed2c;
  ppuStack_170 = (undefined **)0x10a34ed60;
  uStack_168 = 0x10a34eda8;
  uStack_160 = 0;
  uStack_158 = 0;
  ppuVar6 = ppuVar6 + 5;
  pppuStack_138 = &ppuStack_288;
  pppuStack_f8 = &ppuStack_288;
  pppuStack_b8 = &ppuStack_288;
  pppuStack_78 = &ppuStack_288;
  func_0x00010975687c(ppuVar6,&ppuStack_180,&uStack_148);
  if ((int)ppuVar6 == 0) {
    func_0x00010a002480(&ppuStack_180,&ppuStack_280,&uStack_149);
  }
  else {
    func_0x000107c2b054(&ppuStack_180,&UNK_10f64efef);
  }
  (*(code *)*ppuStack_80)(&ppuStack_80);
  (*(code *)*ppuStack_c0)(&ppuStack_c0);
  (*(code *)*ppuStack_100)(&ppuStack_100);
  (*(code *)*ppuStack_140)(&ppuStack_140);
  unaff_x20 = &ppuStack_288;
  appuStack_218[0] = &PTR_DAT_11088d708;
  ppuStack_288 = &PTR_DAT_11088d6e0;
  ppuStack_280 = &PTR_DAT_11088d7b0;
  if (cStack_229 < '\0') {
    __ZdlPv(uStack_240);
  }
  ppuStack_280 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_278);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_288,&PTR_PTR_11088d720);
  pppuVar3 = appuStack_218;
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    pppuVar3 = (undefined ***)param_1[0x13];
    __ZdlPv();
  }
  param_1[0x14] = ppuStack_178;
  param_1[0x13] = ppuStack_180;
  param_1[0x15] = ppuStack_170;
LAB_10a32e830:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pppuVar4 = pppuVar3;
    __Unwind_Resume(pppuVar3);
    pcStack_298 = FUN_10a32e88c;
    pppuStack_2b0 = unaff_x20;
    pppuStack_2a8 = pppuVar3;
    puStack_2a0 = &stack0xfffffffffffffff0;
    FUN_10a35da5c(auStack_2c0,pppuVar4 + 0x11);
    puVar5 = (undefined8 *)0xc0;
    __Znwm();
    puVar5[1] = 0;
    puVar5[2] = 0;
    pppuVar3 = (undefined ***)(puVar5 + 3);
    *puVar5 = &PTR_FUN_110bc66f8;
    FUN_10a554094(pppuVar3,auStack_2c0);
    *extraout_x8 = pppuVar3;
    extraout_x8[1] = puVar5;
    if (pppuStack_2b8 != (undefined ***)0x0) {
      pppuVar4 = pppuStack_2b8 + 1;
      do {
        ppuVar6 = *pppuVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
        if (bVar2) {
          *pppuVar4 = (undefined **)((long)ppuVar6 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (ppuVar6 == (undefined **)0x0) {
        (*(code *)(*pppuStack_2b8)[2])(pppuStack_2b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_2b8);
        pppuVar3 = pppuStack_2b8;
      }
    }
    return pppuVar3;
  }
  return param_1 + 0x13;
}



/* Entry: 10a32e88c; end: 10a32e947;  */

void FUN_10a32e88c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  FUN_10a35da5c(auStack_30,param_2 + 0x88);
  puVar4 = (undefined8 *)0xc0;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar5 = puVar4 + 3;
  *puVar4 = &PTR_FUN_110bc66f8;
  FUN_10a554094(puVar5,auStack_30);
  *param_1 = puVar5;
  param_1[1] = puVar4;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}



/* Entry: 10a32e948; end: 10a32ea6b;  */

/* WARNING: Removing unreachable block (ram,0x00010a32ea08) */

void FUN_10a32e948(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x00010989f98c(auStack_38);
  FUN_10ab29268(auStack_68,param_2);
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar2,&UNK_10f64f5aa,0xf);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  lStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  FUN_10a32e63c();
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  puVar3 = &uStack_50;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar3,puVar2,uVar1);
  uVar4 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar4;
  param_1[2] = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  return;
}



/* Entry: 10a32ea6c; end: 10a32eaa7;  */

void FUN_10a32ea6c(long param_1,int param_2)

{
  code *pcVar1;
  long lVar2;
  
  if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) <= (ulong)(long)param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a32eaa8);
    (*pcVar1)();
  }
  lVar2 = *(long *)(*(long *)(param_1 + 8) + (long)param_2 * 8);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR____dynamic_cast_110346c00)(lVar2,&PTR_DAT_110baa1c8,&PTR_DAT_110c54588,0);
    return;
  }
  return;
}



/* Entry: 10a32eaa8; end: 10a32edf3;  */

void FUN_10a32eaa8(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_b0;
  undefined1 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  if ((bRam00000001137eafc8 & 1) == 0) {
    iVar6 = 0x137eafc8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107c2b07c(0x1137eaff0,&UNK_10f64f5ba);
      ___cxa_atexit(FUN_10a32edf4,0x1137eaff0,0x100000000);
      ___cxa_guard_release(0x1137eafc8);
    }
  }
  if (*(long *)(param_2 + 0x120) == 0) {
    uStack_50 = 0;
    plStack_48 = (long *)0x0;
    FUN_10a32ee24(&lStack_40,&uStack_50,&UNK_10e4ac858);
    FUN_10a32efa8(param_2 + 0x120,&lStack_40);
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar7 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
    plVar1 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar2 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  if ((param_3 == 0) || (lVar7 = *(long *)(param_2 + 0xf0), lVar7 == 0)) {
    lVar7 = *(long *)(param_2 + 0x128);
    uVar8 = *(undefined8 *)(param_2 + 0x120);
    param_1[1] = *(undefined8 *)(param_2 + 0x128);
    *param_1 = uVar8;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    lStack_40 = *(long *)(lVar7 + 0x110);
    plStack_38 = *(long **)(lVar7 + 0x118);
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (lStack_40 == 0) {
      lVar7 = *(long *)(param_2 + 0x128);
      uVar9 = *(undefined8 *)(param_2 + 0x128);
      uVar8 = *(undefined8 *)(param_2 + 0x120);
    }
    else {
      if (*(long *)(param_2 + 0x110) == 0) {
        puVar3 = (undefined8 *)&UNK_10e4ac858;
        if (*(int *)(*(long *)(param_2 + 0xf0) + 0x120) != 0) {
          puVar3 = (undefined8 *)&UNK_10e4ac880;
        }
        uStack_78 = puVar3[1];
        uStack_80 = *puVar3;
        uStack_68 = puVar3[3];
        uStack_70 = puVar3[2];
        uStack_60 = puVar3[4];
        if (plStack_38 != (long *)0x0) {
          plVar1 = plStack_38 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lStack_a0 = lStack_40;
        plStack_98 = plStack_38;
        FUN_10a32ee24(auStack_90,&lStack_a0,&uStack_80);
        FUN_10a32f00c(param_2 + 0x110,auStack_90);
        if (plStack_88 != (long *)0x0) {
          plVar1 = plStack_88 + 1;
          do {
            lVar7 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar7 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
          }
        }
        plVar1 = plStack_98;
        if (plStack_98 != (long *)0x0) {
          plVar2 = plStack_98 + 1;
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
            (**(code **)(*plStack_98 + 0x10))(plStack_98);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
      }
      else {
        uStack_a8 = 0;
        lStack_b0 = param_2 + 0x110;
        FUN_10a32f140(*(long *)(param_2 + 0x110),&lStack_40);
        FUN_10a35f194(&lStack_b0);
      }
      lVar7 = *(long *)(param_2 + 0x118);
      uVar9 = *(undefined8 *)(param_2 + 0x118);
      uVar8 = *(undefined8 *)(param_2 + 0x110);
    }
    plVar1 = plStack_38;
    param_1[1] = uVar9;
    *param_1 = uVar8;
    if (lVar7 != 0) {
      plVar2 = (long *)(lVar7 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (plStack_38 != (long *)0x0) {
      plVar2 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a32edf4; end: 10a32ee23;  */

undefined8 * FUN_10a32edf4(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a32ee24; end: 10a32efa7;  */

undefined *** FUN_10a32ee24(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined ***pppuVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  undefined1 uStack_70;
  long lStack_48;
  
  puVar7 = &uStack_b0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined8 *)0x1e0;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110bc5b10;
  puVar1 = puVar5 + 3;
  FUN_10a34effc(puVar1,0x1137eaff0,0xd);
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar5;
  FUN_10a34f708(param_1,puVar5 + 5,puVar1);
  lVar8 = *param_1;
  lStack_78 = lVar8 + 0x20;
  uVar2 = *(ushort *)(lVar8 + 0x109);
  *(ushort *)(lVar8 + 0x109) = uVar2 & 0xff80 | uVar2 + 1 & 0x7f;
  *(ushort *)(lVar8 + 0x50) =
       *(ushort *)(lVar8 + 0x50) & 0xff80 | *(ushort *)(lVar8 + 0x50) + 1 & 0x7f;
  uStack_70 = 1;
  pcStack_88 = FUN_10a1d3648;
  ppuStack_80 = &PTR_FUN_110bad818;
  FUN_10a32f140(*param_1,param_2);
  uStack_a8 = param_3[1];
  uStack_b0 = *param_3;
  uStack_98 = param_3[3];
  uStack_a0 = param_3[2];
  uStack_90 = param_3[4];
  FUN_10a351a84(*param_1 + 0x198);
  FUN_10a044790(&pcStack_88);
  pppuVar6 = &ppuStack_80;
  (*(code *)*ppuStack_80)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar6;
  }
  ___stack_chk_fail();
  __ZNSt3__119__shared_weak_countD2Ev(&pcStack_88);
  __ZdlPv();
  __Unwind_Resume();
  ppuVar12 = (undefined **)puVar7[1];
  ppuVar11 = (undefined **)*puVar7;
  *puVar7 = 0;
  puVar7[1] = 0;
  ppuVar10 = pppuVar6[1];
  pppuVar6[1] = ppuVar12;
  *pppuVar6 = ppuVar11;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar11 = ppuVar10 + 1;
    do {
      puVar9 = *ppuVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar4) {
        *ppuVar11 = puVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar9 == (undefined *)0x0) {
      (**(code **)(*ppuVar10 + 0x10))(ppuVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
    }
  }
  return pppuVar6;
}



/* Entry: 10a32efa8; end: 10a32f00b;  */

undefined8 * FUN_10a32efa8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a32f00c; end: 10a32f13f;  */

long * FUN_10a32f00c(long *param_1,long *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_38;
  
  puVar3 = &uStack_90;
  uVar4 = 0;
  if (*param_1 != *param_2) {
    FUN_10a32efa8(param_1);
    func_0x00010a1bd170();
    uVar2 = uRam000000011330175c;
    uVar1 = *(ushort *)((long)param_1 + (0x71 - (ulong)uRam000000011330175c));
    if ((uVar1 >> 8 & 1) == 0) {
      if (((*(long *)((long)param_1 + (0x48 - (ulong)uRam000000011330175c)) != 0) ||
          ((uVar1 >> 9 & 1) != 0)) ||
         (*(long *)((long)param_1 + (0x68 - (ulong)uRam000000011330175c)) != 0)) {
        func_0x00010a1bd170();
        if ((uVar4 & 1) != 0) {
          return param_1;
        }
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        ppuStack_38 = &PTR_DAT_110bc6738;
        uVar4 = (ulong)&uStack_90 | 8;
        FUN_10a0dad0c(uVar4,&ppuStack_38);
        uVar5 = (ulong)uRam000000011330175c;
        if ((*(ushort *)((long)param_1 + (0x71 - uVar5)) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          uVar5 = (ulong)uRam000000011330175c;
          if (uVar4 != 0) {
            FUN_10a1bd648();
            uVar5 = (ulong)uRam000000011330175c;
          }
        }
        FUN_10a1c054c((long)param_1 + (0x18 - uVar5),&uStack_90);
        return param_1;
      }
      *(long *)((long)param_1 + (0x28 - (ulong)uRam000000011330175c)) =
           *(long *)((long)param_1 + (0x28 - (ulong)uRam000000011330175c)) + 1;
    }
    if ((*(undefined ***)((long)param_1 + (0x78 - (ulong)uVar2)) != &PTR_DAT_110bc6738) &&
       (FUN_10a1bd5e0(), puVar3 != (undefined8 *)0x0)) {
      FUN_10a1bd648();
      *(undefined ***)((long)param_1 + (0x78 - (ulong)uVar2)) = &PTR_DAT_110bc6738;
    }
  }
  return param_1;
}



/* Entry: 10a32f140; end: 10a32f1db;  */

void FUN_10a32f140(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
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
  func_0x00010a34f7b8(param_1 + 0x188,&uStack_30);
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
  return;
}



/* Entry: 10a32f1dc; end: 10a32f2bf;  */

undefined8 * FUN_10a32f1dc(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_DAT_110bc4b88;
  param_1[1] = &PTR_FUN_110bc4bb0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 2,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_1[4] = param_2[2];
    param_1[3] = uVar3;
    param_1[2] = uVar2;
  }
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(param_1 + 5,param_2[3],param_2[4]);
  }
  else {
    uVar3 = param_2[4];
    uVar2 = param_2[3];
    param_1[7] = param_2[5];
    param_1[6] = uVar3;
    param_1[5] = uVar2;
  }
  uVar1 = *(undefined4 *)(param_2 + 6);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 8) = uVar1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_10a1319a4(param_1 + 9,param_3,param_3 + param_4,param_4);
  return param_1;
}



/* Entry: 10a32f2c0; end: 10a32f33b;  */

undefined1  [16] FUN_10a32f2c0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10f650fea;
  return auVar1;
}



/* Entry: 10a32f33c; end: 10a32f38f;  */

void FUN_10a32f33c(undefined8 param_1)

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
  FUN_10a32f390(param_1,&uStack_58);
  FUN_10a35f444();
  return;
}



/* Entry: 10a32f390; end: 10a32f467;  */

/* WARNING: Removing unreachable block (ram,0x00010a32f428) */

undefined1  [16] FUN_10a32f390(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f650fea,0x14);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a35f348(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a32f468; end: 10a32f4ef;  */

undefined8 * FUN_10a32f468(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  uVar6 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar4,uVar6);
  *param_1 = &PTR_FUN_110bc7d90;
  param_1[2] = &PTR_DAT_110bc7e38;
  param_1[7] = &PTR_DAT_110bc7e90;
  lVar5 = param_3[1];
  uVar6 = *param_3;
  param_1[0x1d] = param_3[1];
  param_1[0x1c] = uVar6;
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
  return param_1;
}



/* Entry: 10a32f4f0; end: 10a32f5ff;  */

undefined8 * FUN_10a32f4f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc7d90;
  param_1[2] = &PTR_DAT_110bc7e38;
  param_1[7] = &PTR_DAT_110bc7e90;
  FUN_10a35f2f0(param_1 + 0x1c);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a32f600; end: 10a32f60f;  */

void FUN_10a32f600(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_110bc7d90;
  *param_1 = &PTR_DAT_110bc7e38;
  param_1[5] = &PTR_DAT_110bc7e90;
  FUN_10a35f2f0(param_1 + 0x1a);
  func_0x00010aa71c88(param_1 + -2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a32f610; end: 10a32f963;  */

void FUN_10a32f610(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar6 = *(long *)(param_2 + 0x50);
  if (lVar6 == 0) {
    plVar3 = (long *)0x108;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110bc67f0;
    plVar5 = plVar3 + 3;
    FUN_10a32f468(plVar5,0,param_2 + 0xe0);
    plStack_50 = plVar5;
    plStack_48 = plVar3;
    FUN_10a35f664(&plStack_50,plVar3 + 8,plVar5);
    FUN_10a35f500(&plStack_90,&plStack_50);
    if (plStack_48 == (long *)0x0) goto LAB_10a32f898;
    plVar5 = plStack_48 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar3 = plStack_48;
    } while (cVar1 != '\0');
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x858);
    plVar5 = *(long **)(lVar6 + 0x860);
    if (plVar5 != (long *)0x0) {
      plVar3 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0xf0;
    lStack_80 = lVar7;
    plStack_78 = plVar5;
    __Znwm();
    FUN_10a32f468();
    lStack_70 = lVar7;
    plStack_68 = plVar5;
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    plVar4 = (long *)0x30;
    lStack_60 = lVar7;
    plStack_58 = plVar5;
    plStack_50 = plVar3;
    __Znwm();
    lStack_60 = 0;
    plStack_58 = (long *)0x0;
    *plVar4 = (long)&PTR_DAT_110bc6790;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar5;
    plStack_48 = plVar4;
    FUN_10a35f664(&plStack_50,plVar3 + 5,plVar3);
    FUN_10a35f500(&plStack_90,&plStack_50);
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
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar5 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar3 = plStack_68 + 1;
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
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if ((lStack_80 != 0) && (plStack_90 != (long *)0x0)) {
      plStack_50 = plStack_90;
      plStack_48 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar5 = plStack_88 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa88c30(lStack_80,&plStack_50);
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
    }
    if (plStack_78 == (long *)0x0) goto LAB_10a32f898;
    plVar5 = plStack_78 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar3 = plStack_78;
    } while (cVar1 != '\0');
  }
  if (lVar6 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
  }
LAB_10a32f898:
  param_1[1] = plStack_88;
  *param_1 = plStack_90;
  return;
}



/* Entry: 10a32f964; end: 10a32fb13;  */

void FUN_10a32f964(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_provider_110bc4bd0);
  (**(code **)(*param_2 + 600))(&lStack_40,param_2,0);
  plVar3 = &lStack_50;
  if ((lStack_40 != 0) &&
     (___dynamic_cast(lStack_40,&PTR_DAT_110b9fe10,&PTR_DAT_110bc88e0,0), plVar3 = &lStack_50,
     lStack_40 != 0)) {
    plStack_48 = plStack_38;
    plVar3 = &lStack_40;
    lStack_50 = lStack_40;
  }
  *plVar3 = 0;
  plVar3[1] = 0;
  if (plStack_38 != (long *)0x0) {
    plVar3 = plStack_38 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  plVar3 = plStack_48;
  lVar4 = lStack_50;
  lStack_50 = 0;
  plStack_48 = (long *)0x0;
  plVar5 = *(long **)(param_1 + 0xe8);
  *(long **)(param_1 + 0xe8) = plVar3;
  *(long *)(param_1 + 0xe0) = lVar4;
  if (plVar5 != (long *)0x0) {
    plVar3 = plVar5 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar3 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar5 = plStack_48 + 1;
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  (**(code **)(*param_2 + 0x220))(param_2);
  return;
}



/* Entry: 10a32fb14; end: 10a32fb4f;  */

void FUN_10a32fb14(long param_1,long *param_2)

{
  func_0x00010aa70b70();
                    /* WARNING: Could not recover jumptable at 0x00010a32fb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_s_provider_110bc4bd0,*(undefined8 *)(param_1 + 0xe0))
  ;
  return;
}



/* Entry: 10a32fb50; end: 10a32fb77;  */

ulong FUN_10a32fb50(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0xe0);
  FUN_10a35f844(uVar1);
  return uVar1 & 0xffffffff;
}



/* Entry: 10a32fb78; end: 10a32fc03;  */

undefined1  [16] FUN_10a32fb78(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 10;
  auVar1._0_8_ = &UNK_10f650fff;
  return auVar1;
}



/* Entry: 10a32fc04; end: 10a3303e7;  */

void FUN_10a32fc04(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f650fff,10);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bc7ac8;
  pppuVar2 = (undefined8 ***)&UNK_10f64efef;
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
    ppuStack_b0 = &PTR_DAT_110bc7ac8;
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
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a3303c8;
    FUN_10a054dac(param_1,&UNK_10f64f5cc,FUN_10a35fa3c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a3303c8;
    FUN_10a054dac(param_1,&UNK_10f64f5d2,FUN_10a35fca0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a3303c8;
    FUN_10a054dac(param_1,&UNK_10f64f5dc,FUN_10a35fd50,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a3303c8;
    FUN_10a054dac(param_1,&UNK_10f64f5f5,FUN_10a3605bc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f148,FUN_10a360758,FUN_10a360838);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f683c86,FUN_10a36099c,FUN_10a360a54);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f27c,FUN_10a360b1c,FUN_10a360bd4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68f286,FUN_10a360c9c,FUN_10a360d54);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64f60a,FUN_10a360e1c,FUN_10a360ed8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f683c94,FUN_10a360fe0,FUN_10a3610b0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f683c9e,FUN_10a3613a8,FUN_10a361464);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64f616,FUN_10a361558,FUN_10a361614);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64f625,FUN_10a361704,FUN_10a3617dc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64f634,FUN_10a3618ac,FUN_10a361980);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f683ca8,FUN_10a361a4c,FUN_10a361b08);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64f643,FUN_10a361bf4,FUN_10a361cb0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64f653,FUN_10a361db8,FUN_10a361e84);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64f661,FUN_10a361f48,FUN_10a362004);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68e5aa,FUN_10a3620cc,FUN_10a36218c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f414faa,FUN_10a3622c4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f334,FUN_10a362458,FUN_10a362598);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64f66f,FUN_10a362834,FUN_10a362974);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64f67c,FUN_10a362c0c,FUN_10a362ce4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64f688,FUN_10a362dcc,FUN_10a362e88);
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
      func_0x000109894f40(param_1,1);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f650fff,10);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a3303c8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a3303cc);
  (*pcVar6)();
}



/* Entry: 10a3303e8; end: 10a33055f;  */

void FUN_10a3303e8(ulong param_1)

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
  puStack_a8 = &UNK_10f64f694;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64efef;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
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
  puStack_a8 = &UNK_10f6442b5;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64efef;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a330560(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f64f6a4;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64efef;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a330560();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f64f6ab;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64efef;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a330560();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a330560; end: 10a330607;  */

undefined8 * FUN_10a330560(undefined8 *param_1,undefined8 *param_2,byte param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a330608);
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



/* Entry: 10a330608; end: 10a330777;  */

void FUN_10a330608(ulong param_1)

{
  ulong uVar1;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "CullMode";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64efef;
  uStack_78 = 0;
  puStack_70 = &UNK_10f64efef;
  uStack_68 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Front";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64efef;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a330778(param_1,&pcStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Back";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64efef;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a330778();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "FrontAndBack";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64efef;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a330778();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a330778; end: 10a33081f;  */

undefined8 * FUN_10a330778(undefined8 *param_1,undefined8 *param_2,byte param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a330820);
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



/* Entry: 10a330820; end: 10a330adf;  */

void FUN_10a330820(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64f6d7;
  uStack_78 = 0xcffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f64efef;
  uStack_68 = 0;
  puStack_60 = &UNK_10f64efef;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_4c = 0x17d;
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
  puStack_98 = &UNK_10f64f6e3;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f64efef;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_4c = 0x17d;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a330ae0(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64f6eb;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f64efef;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x17d;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a330ae0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64f6f3;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f64efef;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x17d;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a330ae0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64f6fb;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f64efef;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x17d;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a330ae0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64f703;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f64efef;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x17d;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a330ae0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64f70b;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f64efef;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x17d;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a330ae0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64f713;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f64efef;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x17d;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a330ae0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64f71b;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f64efef;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x17d;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a330ae0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64f723;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f64efef;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x17d;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a330ae0();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a330ae0; end: 10a330b87;  */

undefined8 * FUN_10a330ae0(undefined8 *param_1,undefined8 *param_2,byte param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a330b88);
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



/* Entry: 10a330b88; end: 10a331267;  */

undefined8 *
FUN_10a330b88(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = &UNK_10e52b660;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) & 0xfe00;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[8] = &PTR_DAT_110bc4d20;
  param_1[0x1d] = &UNK_10e52b660;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = &UNK_10e52b660;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  *(ushort *)((long)param_1 + 0x129) = *(ushort *)((long)param_1 + 0x129) & 0xfc00 | 1;
  *param_1 = &PTR_FUN_110bc4c00;
  param_1[2] = &PTR_FUN_110bc4c88;
  param_1[3] = &PTR_DAT_110bc4cc8;
  param_1[0x19] = 0;
  param_1[0x1a] = &PTR_DAT_110bc4d50;
  plVar3 = (long *)0x168;
  __Znwm();
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110bc7ee0;
  plVar4 = plVar3 + 3;
  FUN_10ac5c330(plVar4,param_2,param_3,param_4);
  plStack_80 = plVar4;
  plStack_78 = plVar3;
  FUN_10a363034(&plStack_80,plVar3 + 0xb,plVar4);
  plStack_68 = plStack_78;
  plStack_70 = plStack_80;
  plStack_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  FUN_10a363194(param_1 + 0x31,param_1,&plStack_70);
  plVar4 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar3 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar3 = plStack_78 + 1;
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
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  param_1[0x33] = param_2;
  func_0x000107c2b054(param_1 + 0x34,&UNK_10f64efef);
  plVar4 = (long *)0x30;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110bc68a8;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plStack_90 = plVar4 + 3;
  *plStack_90 = (long)(plVar4 + 4);
  plStack_88 = plVar4;
  FUN_10a36320c(param_1 + 0x37,param_1,&plStack_90);
  plVar4 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar3 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  do {
    lVar6 = lRam0000000113301700;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113301700,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      lRam0000000113301700 = lRam0000000113301700 + 1;
    }
  } while (cVar1 != '\0');
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = lVar6;
  param_1[0x3a] = param_1 + 0x3b;
  if ((bRam00000001137eafac & 1) == 0) {
    bRam00000001137eafac = 1;
  }
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3d] = param_1 + 0x3e;
  if ((bRam00000001137eafae & 1) == 0) {
    bRam00000001137eafae = 1;
  }
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = param_1 + 0x41;
  *(undefined1 *)(param_1 + 0x43) = 0;
  if ((bRam00000001137eafb0 & 1) == 0) {
    bRam00000001137eafb0 = 1;
  }
  func_0x00010a1bd170(&plStack_80);
  *(undefined1 *)((long)param_1 + 0x219) = 1;
  if ((bRam00000001137eafb2 & 1) == 0) {
    bRam00000001137eafb2 = 1;
  }
  func_0x00010a1bd170(&plStack_80);
  *(undefined1 *)((long)param_1 + 0x21a) = 1;
  if ((bRam00000001137eafb4 & 1) == 0) {
    bRam00000001137eafb4 = 1;
  }
  func_0x00010a1bd170(&plStack_80);
  *(undefined2 *)((long)param_1 + 0x21b) = 0x300;
  if ((bRam00000001137eafb6 & 1) == 0) {
    bRam00000001137eafb6 = 1;
  }
  func_0x00010a1bd170(&plStack_80);
  *(undefined1 *)((long)param_1 + 0x21d) = 0;
  if ((bRam00000001137eafb8 & 1) == 0) {
    bRam00000001137eafb8 = 1;
  }
  func_0x00010a1bd170(&plStack_80);
  *(undefined4 *)((long)param_1 + 0x21e) = 0x10101;
  *(undefined4 *)((long)param_1 + 0x224) = 0x3f800000;
  if ((bRam00000001137eafba & 1) == 0) {
    bRam00000001137eafba = 1;
  }
  func_0x00010a1bd170(&plStack_80);
  param_1[0x46] = 0x7f7fffff7f7fffff;
  param_1[0x45] = 0x7f7fffff00000000;
  param_1[0x47] = 0xff7fffffff7fffff;
  *(undefined4 *)(param_1 + 0x48) = 0xff7fffff;
  *(undefined1 *)((long)param_1 + 0x244) = 1;
  if ((bRam00000001137eafbc & 1) == 0) {
    bRam00000001137eafbc = 1;
  }
  func_0x00010a1bd170(&plStack_80);
  *(undefined1 *)((long)param_1 + 0x245) = 0;
  if ((bRam00000001137eafbe & 1) == 0) {
    bRam00000001137eafbe = 1;
  }
  func_0x00010a1bd170(&plStack_80);
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 1;
  if ((bRam00000001137eafc0 & 1) == 0) {
    bRam00000001137eafc0 = 1;
  }
  func_0x00010a1bd170(&plStack_80);
  puVar5 = (undefined8 *)0x70;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110bc8478;
  *(undefined1 *)(puVar5 + 4) = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[3] = &PTR_FUN_110c448e0;
  puVar5[5] = &PTR_FUN_110c44940;
  *(undefined2 *)(puVar5 + 8) = 6;
  *(undefined1 *)((long)puVar5 + 0x42) = 0;
  *(undefined8 *)((long)puVar5 + 0x4c) = 0;
  *(undefined8 *)((long)puVar5 + 0x44) = 0;
  *(undefined8 *)((long)puVar5 + 0x5c) = 0;
  *(undefined8 *)((long)puVar5 + 0x54) = 0;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  param_1[0x4b] = puVar5 + 3;
  param_1[0x4c] = puVar5;
  puVar5 = (undefined8 *)0x58;
  __Znwm();
  puVar5[2] = 0;
  puVar5[1] = 0;
  *puVar5 = &PTR_FUN_110bc8818;
  *(undefined1 *)(puVar5 + 4) = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[3] = &PTR_FUN_110c4df80;
  puVar5[5] = &PTR_FUN_110c4dfe0;
  *(undefined4 *)(puVar5 + 8) = 0;
  *(undefined2 *)((long)puVar5 + 0x44) = 0;
  puVar5[9] = 0xff00000000;
  *(undefined4 *)(puVar5 + 10) = 0xff;
  param_1[0x4d] = puVar5 + 3;
  param_1[0x4e] = puVar5;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  if ((bRam00000001137eafc2 & 1) == 0) {
    bRam00000001137eafc2 = 1;
  }
  func_0x00010a1bd170(&plStack_80);
  *(undefined1 *)((long)param_1 + 0x279) = 0;
  puVar5 = (undefined8 *)0x20;
  __Znwm();
  puVar5[2] = 0;
  puVar5[1] = 0;
  *puVar5 = &PTR_DAT_110b3f0e8;
  *(undefined4 *)(puVar5 + 3) = 1;
  param_1[0x50] = puVar5 + 3;
  param_1[0x51] = puVar5;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = param_1 + 0x53;
  if ((bRam00000001137eafa8 & 1) == 0) {
    bRam00000001137eafa8 = 1;
  }
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = param_1 + 0x56;
  if ((bRam00000001137eafaa & 1) == 0) {
    bRam00000001137eafaa = 1;
  }
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  FUN_10a331268(param_1);
  return param_1;
}



/* Entry: 10a331268; end: 10a3314af;  */

void FUN_10a331268(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined7 uStack_a0;
  char cStack_99;
  ulong uStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  
  auVar11 = NEON_fmov(0x3f800000,4);
  lStack_68 = auVar11._8_8_;
  lStack_70 = auVar11._0_8_;
  plVar5 = (long *)0x80;
  __Znwm();
  plVar9 = plVar5 + 1;
  *plVar9 = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_DAT_110ba1f48;
  func_0x000107c2b074(&uStack_b0,&PTR_DAT_110bc5b50);
  plVar1 = plVar5 + 3;
  FUN_10a0dae70(plVar1,&uStack_b0,&lStack_70);
  if (cStack_99 < '\0') {
    __ZdlPv(uStack_b0);
  }
  lVar8 = *(long *)(param_1 + 0x1b8);
  plStack_80 = plVar1;
  plStack_78 = plVar5;
  func_0x000107c2b074(&uStack_b0,&PTR_DAT_110bc5b50);
  uVar4 = uStack_98;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = *plVar9 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar9 = (long *)(lVar8 + 8);
  plVar7 = (long *)*plVar9;
  do {
    plVar10 = plVar9;
    plStack_88 = plVar5;
    plStack_90 = plVar1;
    if (plVar7 == (long *)0x0) {
LAB_10a331364:
      lVar6 = 0x50;
      __Znwm();
      uStack_60 = 0;
      lStack_70 = lVar6;
      lStack_68 = lVar8;
      if (cStack_99 < '\0') {
        func_0x000107c3192c(lVar6 + 0x20,uStack_b0,uStack_a8);
      }
      else {
        *(undefined8 *)(lVar6 + 0x28) = uStack_a8;
        *(undefined8 *)(lVar6 + 0x20) = uStack_b0;
        *(ulong *)(lVar6 + 0x30) = CONCAT17(cStack_99,uStack_a0);
        plStack_88 = plVar5;
        plStack_90 = plVar1;
        uStack_98 = uVar4;
      }
      *(ulong *)(lVar6 + 0x38) = uStack_98;
      *(long **)(lVar6 + 0x40) = plStack_90;
      *(long **)(lVar6 + 0x48) = plStack_88;
      plStack_90 = (long *)0x0;
      plStack_88 = (long *)0x0;
      FUN_10a0da7d4(lVar8,plVar9,plVar10,lVar6);
      if (plStack_88 != (long *)0x0) {
LAB_10a3313d0:
        plVar5 = plStack_88;
        plVar1 = plStack_88 + 1;
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
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      if (cStack_99 < '\0') {
        __ZdlPv(uStack_b0);
      }
      plVar1 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar5 = plStack_78 + 1;
        do {
          lVar8 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      return;
    }
    while (plVar9 = plVar7, (ulong)plVar9[7] <= uStack_98) {
      if (uStack_98 <= (ulong)plVar9[7]) goto LAB_10a3313d0;
      plVar7 = (long *)plVar9[1];
      if ((long *)plVar9[1] == (long *)0x0) {
        plVar10 = plVar9 + 1;
        goto LAB_10a331364;
      }
    }
    plVar7 = (long *)*plVar9;
  } while( true );
}



/* Entry: 10a3314b0; end: 10a331aeb;  */

undefined8 * FUN_10a3314b0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined1 auStack_68 [8];
  
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = &UNK_10e52b660;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) & 0xfe00;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[8] = &PTR_DAT_110bc4d20;
  param_1[0x1d] = &UNK_10e52b660;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = &UNK_10e52b660;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  *(ushort *)((long)param_1 + 0x129) = *(ushort *)((long)param_1 + 0x129) & 0xfc00 | 1;
  *param_1 = &PTR_FUN_110bc4c00;
  param_1[2] = &PTR_FUN_110bc4c88;
  param_1[3] = &PTR_DAT_110bc4cc8;
  param_1[0x19] = 0;
  param_1[0x1a] = &PTR_DAT_110bc4d50;
  plStack_78 = (long *)param_2[1];
  uStack_80 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10a363194(param_1 + 0x31,param_1,&uStack_80);
  plVar4 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
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
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  param_1[0x33] = *(undefined8 *)(param_1[0x31] + 0x90);
  func_0x000107c2b054(param_1 + 0x34,&UNK_10f64efef);
  plVar4 = (long *)0x30;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110bc68a8;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plStack_90 = plVar4 + 3;
  *plStack_90 = (long)(plVar4 + 4);
  plStack_88 = plVar4;
  FUN_10a36320c(param_1 + 0x37,param_1,&plStack_90);
  plVar4 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  do {
    lVar6 = lRam0000000113301700;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x113301700,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      lRam0000000113301700 = lRam0000000113301700 + 1;
    }
  } while (cVar2 != '\0');
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = lVar6;
  param_1[0x3a] = param_1 + 0x3b;
  if ((bRam00000001137eafac & 1) == 0) {
    bRam00000001137eafac = 1;
  }
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3d] = param_1 + 0x3e;
  if ((bRam00000001137eafae & 1) == 0) {
    bRam00000001137eafae = 1;
  }
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = param_1 + 0x41;
  *(undefined1 *)(param_1 + 0x43) = 0;
  if ((bRam00000001137eafb0 & 1) == 0) {
    bRam00000001137eafb0 = 1;
  }
  func_0x00010a1bd170(auStack_68);
  *(undefined1 *)((long)param_1 + 0x219) = 1;
  if ((bRam00000001137eafb2 & 1) == 0) {
    bRam00000001137eafb2 = 1;
  }
  func_0x00010a1bd170(auStack_68);
  *(undefined1 *)((long)param_1 + 0x21a) = 1;
  if ((bRam00000001137eafb4 & 1) == 0) {
    bRam00000001137eafb4 = 1;
  }
  func_0x00010a1bd170(auStack_68);
  *(undefined2 *)((long)param_1 + 0x21b) = 0x300;
  if ((bRam00000001137eafb6 & 1) == 0) {
    bRam00000001137eafb6 = 1;
  }
  func_0x00010a1bd170(auStack_68);
  *(undefined1 *)((long)param_1 + 0x21d) = 0;
  if ((bRam00000001137eafb8 & 1) == 0) {
    bRam00000001137eafb8 = 1;
  }
  func_0x00010a1bd170(auStack_68);
  *(undefined4 *)((long)param_1 + 0x21e) = 0x10101;
  *(undefined4 *)((long)param_1 + 0x224) = 0x3f800000;
  if ((bRam00000001137eafba & 1) == 0) {
    bRam00000001137eafba = 1;
  }
  func_0x00010a1bd170(auStack_68);
  param_1[0x46] = 0x7f7fffff7f7fffff;
  param_1[0x45] = 0x7f7fffff00000000;
  param_1[0x47] = 0xff7fffffff7fffff;
  *(undefined4 *)(param_1 + 0x48) = 0xff7fffff;
  *(undefined1 *)((long)param_1 + 0x244) = 1;
  if ((bRam00000001137eafbc & 1) == 0) {
    bRam00000001137eafbc = 1;
  }
  func_0x00010a1bd170(auStack_68);
  *(undefined1 *)((long)param_1 + 0x245) = 0;
  if ((bRam00000001137eafbe & 1) == 0) {
    bRam00000001137eafbe = 1;
  }
  func_0x00010a1bd170(auStack_68);
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 1;
  if ((bRam00000001137eafc0 & 1) == 0) {
    bRam00000001137eafc0 = 1;
  }
  func_0x00010a1bd170(auStack_68);
  puVar5 = (undefined8 *)0x70;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110bc8478;
  *(undefined1 *)(puVar5 + 4) = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[3] = &PTR_FUN_110c448e0;
  puVar5[5] = &PTR_FUN_110c44940;
  *(undefined2 *)(puVar5 + 8) = 6;
  *(undefined1 *)((long)puVar5 + 0x42) = 0;
  *(undefined8 *)((long)puVar5 + 0x4c) = 0;
  *(undefined8 *)((long)puVar5 + 0x44) = 0;
  *(undefined8 *)((long)puVar5 + 0x5c) = 0;
  *(undefined8 *)((long)puVar5 + 0x54) = 0;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  param_1[0x4b] = puVar5 + 3;
  param_1[0x4c] = puVar5;
  puVar5 = (undefined8 *)0x58;
  __Znwm();
  puVar5[2] = 0;
  puVar5[1] = 0;
  *puVar5 = &PTR_FUN_110bc8818;
  *(undefined1 *)(puVar5 + 4) = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[3] = &PTR_FUN_110c4df80;
  puVar5[5] = &PTR_FUN_110c4dfe0;
  *(undefined4 *)(puVar5 + 8) = 0;
  *(undefined2 *)((long)puVar5 + 0x44) = 0;
  puVar5[9] = 0xff00000000;
  *(undefined4 *)(puVar5 + 10) = 0xff;
  param_1[0x4d] = puVar5 + 3;
  param_1[0x4e] = puVar5;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  if ((bRam00000001137eafc2 & 1) == 0) {
    bRam00000001137eafc2 = 1;
  }
  func_0x00010a1bd170(auStack_68);
  *(undefined1 *)((long)param_1 + 0x279) = 0;
  puVar5 = (undefined8 *)0x20;
  __Znwm();
  puVar5[2] = 0;
  puVar5[1] = 0;
  *puVar5 = &PTR_DAT_110b3f0e8;
  *(undefined4 *)(puVar5 + 3) = 1;
  param_1[0x50] = puVar5 + 3;
  param_1[0x51] = puVar5;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = param_1 + 0x53;
  if ((bRam00000001137eafa8 & 1) == 0) {
    bRam00000001137eafa8 = 1;
  }
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = param_1 + 0x56;
  if ((bRam00000001137eafaa & 1) == 0) {
    bRam00000001137eafaa = 1;
  }
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  FUN_10a331268(param_1);
  return param_1;
}



/* Entry: 10a331aec; end: 10a33209b;  */

undefined8 * FUN_10a331aec(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plStack_68;
  long *plStack_60;
  undefined1 auStack_58 [8];
  
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = &UNK_10e52b660;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) & 0xfe00;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[8] = &PTR_DAT_110bc4d20;
  param_1[0x1d] = &UNK_10e52b660;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = &UNK_10e52b660;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  *(ushort *)((long)param_1 + 0x129) = *(ushort *)((long)param_1 + 0x129) & 0xfc00 | 1;
  *param_1 = &PTR_FUN_110bc4c00;
  param_1[2] = &PTR_FUN_110bc4c88;
  param_1[3] = &PTR_DAT_110bc4cc8;
  param_1[0x19] = 0;
  param_1[0x1a] = &PTR_DAT_110bc4d50;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  if (sRam0000000113301c20 == -1) {
    sRam0000000113301c20 = 0x188;
  }
  param_1[0x33] = 0;
  func_0x000107c2b054(param_1 + 0x34,&UNK_10f64efef);
  plVar4 = (long *)0x30;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110bc68a8;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plStack_68 = plVar4 + 3;
  *plStack_68 = (long)(plVar4 + 4);
  plStack_60 = plVar4;
  FUN_10a36320c(param_1 + 0x37,param_1,&plStack_68);
  plVar4 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    plVar1 = plStack_60 + 1;
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
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  do {
    lVar6 = lRam0000000113301700;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x113301700,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      lRam0000000113301700 = lRam0000000113301700 + 1;
    }
  } while (cVar2 != '\0');
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = lVar6;
  param_1[0x3a] = param_1 + 0x3b;
  if ((bRam00000001137eafac & 1) == 0) {
    bRam00000001137eafac = 1;
  }
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3d] = param_1 + 0x3e;
  if ((bRam00000001137eafae & 1) == 0) {
    bRam00000001137eafae = 1;
  }
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = param_1 + 0x41;
  *(undefined1 *)(param_1 + 0x43) = 0;
  if ((bRam00000001137eafb0 & 1) == 0) {
    bRam00000001137eafb0 = 1;
  }
  func_0x00010a1bd170(auStack_58);
  *(undefined1 *)((long)param_1 + 0x219) = 1;
  if ((bRam00000001137eafb2 & 1) == 0) {
    bRam00000001137eafb2 = 1;
  }
  func_0x00010a1bd170(auStack_58);
  *(undefined1 *)((long)param_1 + 0x21a) = 1;
  if ((bRam00000001137eafb4 & 1) == 0) {
    bRam00000001137eafb4 = 1;
  }
  func_0x00010a1bd170(auStack_58);
  *(undefined2 *)((long)param_1 + 0x21b) = 0x300;
  if ((bRam00000001137eafb6 & 1) == 0) {
    bRam00000001137eafb6 = 1;
  }
  func_0x00010a1bd170(auStack_58);
  *(undefined1 *)((long)param_1 + 0x21d) = 0;
  if ((bRam00000001137eafb8 & 1) == 0) {
    bRam00000001137eafb8 = 1;
  }
  func_0x00010a1bd170(auStack_58);
  *(undefined4 *)((long)param_1 + 0x21e) = 0x10101;
  *(undefined4 *)((long)param_1 + 0x224) = 0x3f800000;
  if ((bRam00000001137eafba & 1) == 0) {
    bRam00000001137eafba = 1;
  }
  func_0x00010a1bd170(auStack_58);
  param_1[0x46] = 0x7f7fffff7f7fffff;
  param_1[0x45] = 0x7f7fffff00000000;
  param_1[0x47] = 0xff7fffffff7fffff;
  *(undefined4 *)(param_1 + 0x48) = 0xff7fffff;
  *(undefined1 *)((long)param_1 + 0x244) = 1;
  if ((bRam00000001137eafbc & 1) == 0) {
    bRam00000001137eafbc = 1;
  }
  func_0x00010a1bd170(auStack_58);
  *(undefined1 *)((long)param_1 + 0x245) = 0;
  if ((bRam00000001137eafbe & 1) == 0) {
    bRam00000001137eafbe = 1;
  }
  func_0x00010a1bd170(auStack_58);
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 1;
  if ((bRam00000001137eafc0 & 1) == 0) {
    bRam00000001137eafc0 = 1;
  }
  func_0x00010a1bd170(auStack_58);
  puVar5 = (undefined8 *)0x70;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110bc8478;
  *(undefined1 *)(puVar5 + 4) = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[3] = &PTR_FUN_110c448e0;
  puVar5[5] = &PTR_FUN_110c44940;
  *(undefined2 *)(puVar5 + 8) = 6;
  *(undefined1 *)((long)puVar5 + 0x42) = 0;
  *(undefined8 *)((long)puVar5 + 0x4c) = 0;
  *(undefined8 *)((long)puVar5 + 0x44) = 0;
  *(undefined8 *)((long)puVar5 + 0x5c) = 0;
  *(undefined8 *)((long)puVar5 + 0x54) = 0;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  param_1[0x4b] = puVar5 + 3;
  param_1[0x4c] = puVar5;
  puVar5 = (undefined8 *)0x58;
  __Znwm();
  puVar5[2] = 0;
  puVar5[1] = 0;
  *puVar5 = &PTR_FUN_110bc8818;
  *(undefined1 *)(puVar5 + 4) = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[3] = &PTR_FUN_110c4df80;
  puVar5[5] = &PTR_FUN_110c4dfe0;
  *(undefined4 *)(puVar5 + 8) = 0;
  *(undefined2 *)((long)puVar5 + 0x44) = 0;
  puVar5[9] = 0xff00000000;
  *(undefined4 *)(puVar5 + 10) = 0xff;
  param_1[0x4d] = puVar5 + 3;
  param_1[0x4e] = puVar5;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  if ((bRam00000001137eafc2 & 1) == 0) {
    bRam00000001137eafc2 = 1;
  }
  func_0x00010a1bd170(auStack_58);
  *(undefined1 *)((long)param_1 + 0x279) = 0;
  puVar5 = (undefined8 *)0x20;
  __Znwm();
  puVar5[2] = 0;
  puVar5[1] = 0;
  *puVar5 = &PTR_DAT_110b3f0e8;
  *(undefined4 *)(puVar5 + 3) = 1;
  param_1[0x50] = puVar5 + 3;
  param_1[0x51] = puVar5;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = param_1 + 0x53;
  if ((bRam00000001137eafa8 & 1) == 0) {
    bRam00000001137eafa8 = 1;
  }
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = param_1 + 0x56;
  if ((bRam00000001137eafaa & 1) == 0) {
    bRam00000001137eafaa = 1;
  }
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  param_1[0x33] = param_2;
  return param_1;
}



/* Entry: 10a33209c; end: 10a3320d3;  */

undefined8 * FUN_10a33209c(undefined8 *param_1)

{
  func_0x00010a0daa60(param_1 + 4);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a3320d4; end: 10a3321c3;  */

long FUN_10a3320d4(long param_1)

{
  undefined8 *puVar1;
  
  if (*(long **)(param_1 + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x188) + 0x50))();
  }
  FUN_10a047524(param_1 + 0x2c0);
  func_0x00010a363560(param_1 + 0x2a8,*(undefined8 *)(param_1 + 0x2b0));
  func_0x00010a363518(param_1 + 0x290,*(undefined8 *)(param_1 + 0x298));
  func_0x00010a084504(param_1 + 0x280);
  FUN_10a363478(param_1 + 0x268);
  func_0x00010a3633d8(param_1 + 600);
  FUN_10a0da1b8(param_1 + 0x200,*(undefined8 *)(param_1 + 0x208));
  func_0x00010a363354(param_1 + 0x1e8,*(undefined8 *)(param_1 + 0x1f0));
  func_0x00010a362fa4(param_1 + 0x1d0,*(undefined8 *)(param_1 + 0x1d8));
  FUN_10a363274(param_1 + 0x1b8);
  if (*(char *)(param_1 + 0x1b7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x1a0));
  }
  func_0x00010a36313c(param_1 + 0x188);
  puVar1 = (undefined8 *)(param_1 + 0x40);
  *puVar1 = &PTR_FUN_110bc6858;
  *(undefined ***)(param_1 + 0xd0) = &PTR_DAT_110bc6888;
  FUN_10a1c0a9c();
  if (puVar1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x20);
  return param_1;
}



/* Entry: 10a3321c4; end: 10a3321e7;  */

long FUN_10a3321c4(long param_1)

{
  undefined8 *puVar1;
  
  if (*(long **)(param_1 + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x188) + 0x50))();
  }
  FUN_10a047524(param_1 + 0x2c0);
  func_0x00010a363560(param_1 + 0x2a8,*(undefined8 *)(param_1 + 0x2b0));
  func_0x00010a363518(param_1 + 0x290,*(undefined8 *)(param_1 + 0x298));
  func_0x00010a084504(param_1 + 0x280);
  FUN_10a363478(param_1 + 0x268);
  func_0x00010a3633d8(param_1 + 600);
  FUN_10a0da1b8(param_1 + 0x200,*(undefined8 *)(param_1 + 0x208));
  func_0x00010a363354(param_1 + 0x1e8,*(undefined8 *)(param_1 + 0x1f0));
  func_0x00010a362fa4(param_1 + 0x1d0,*(undefined8 *)(param_1 + 0x1d8));
  FUN_10a363274(param_1 + 0x1b8);
  if (*(char *)(param_1 + 0x1b7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x1a0));
  }
  func_0x00010a36313c(param_1 + 0x188);
  puVar1 = (undefined8 *)(param_1 + 0x40);
  *puVar1 = &PTR_FUN_110bc6858;
  *(undefined ***)(param_1 + 0xd0) = &PTR_DAT_110bc6888;
  FUN_10a1c0a9c();
  if (puVar1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x20);
  return param_1;
}



/* Entry: 10a3321e8; end: 10a33225b;  */

void FUN_10a3321e8(void)

{
  FUN_10a3320d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a33225c; end: 10a3322af;  */

long FUN_10a33225c(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x1b8) + 8);
  plVar3 = (long *)*plVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = plVar2;
    do {
      lVar1 = 8;
      if (*(ulong *)(param_2 + 0x18) <= (ulong)plVar3[7]) {
        lVar1 = 0;
        plVar4 = plVar3;
      }
      plVar3 = *(long **)((long)plVar3 + lVar1);
    } while (plVar3 != (long *)0x0);
    if ((plVar4 != plVar2) && ((ulong)plVar4[7] <= *(ulong *)(param_2 + 0x18))) {
      return plVar4[8];
    }
  }
  return 0;
}



/* Entry: 10a3322b0; end: 10a3323f3;  */

long * FUN_10a3322b0(long param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  if (*(long *)(param_1 + 0x198) == 0) {
    bVar2 = true;
  }
  else {
    bVar2 = 0x71 < *(int *)(*(long *)(*(long *)(param_1 + 0x198) + 0xa20) + 0x18);
  }
  plVar6 = (long *)&UNK_10e4ac730;
  if (*(long *)(param_1 + 0x1f8) != 0) {
    plVar3 = (long *)(param_1 + 0x1e8);
    FUN_10a351fbc(plVar3,&PTR_DAT_110bc5ed8);
    plVar7 = plVar3;
    if ((long *)(param_1 + 0x1f0) == plVar3) {
      plVar7 = (long *)(param_1 + 0x1e8);
      FUN_10a351fbc(plVar7,&PTR_DAT_110bc5ef0);
      if (plVar3 != plVar7) {
        bVar2 = true;
      }
      if (!bVar2) {
        plVar7 = *(long **)(param_1 + 0x1e8);
        plVar4 = plVar7;
        plVar1 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) {
          do {
            plVar5 = (long *)plVar4[2];
            bVar2 = (long *)*plVar5 != plVar4;
            plVar4 = plVar5;
          } while (bVar2);
        }
        else {
          do {
            plVar5 = plVar1;
            plVar1 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
        while (plVar5 != plVar3) {
          plVar4 = plVar5 + 4;
          FUN_10a003e3c(plVar4,plVar7 + 4);
          plVar1 = plVar5;
          if (-1 < (char)plVar4) {
            plVar1 = plVar7;
          }
          plVar4 = (long *)plVar5[1];
          plVar8 = plVar5;
          plVar7 = plVar1;
          if ((long *)plVar5[1] == (long *)0x0) {
            do {
              plVar5 = (long *)plVar8[2];
              bVar2 = (long *)*plVar5 != plVar8;
              plVar8 = plVar5;
            } while (bVar2);
          }
          else {
            do {
              plVar5 = plVar4;
              plVar4 = (long *)*plVar5;
            } while ((long *)*plVar5 != (long *)0x0);
          }
        }
      }
    }
    if (plVar7 != (long *)(param_1 + 0x1f0)) {
      plVar6 = plVar7 + 8;
    }
  }
  return plVar6;
}



/* Entry: 10a3323f4; end: 10a3324af;  */

undefined8 FUN_10a3323f4(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_38 [24];
  
  lVar3 = *(long *)(param_1 + 0x1f0);
  if (lVar3 != 0) {
    lVar4 = param_1 + 0x1f0;
    do {
      lVar1 = 8;
      if (*(ulong *)(param_2 + 0x18) <= *(ulong *)(lVar3 + 0x38)) {
        lVar1 = 0;
        lVar4 = lVar3;
      }
      lVar3 = *(long *)(lVar3 + lVar1);
    } while (lVar3 != 0);
    if ((lVar4 != param_1 + 0x1f0) && (*(ulong *)(lVar4 + 0x38) <= *(ulong *)(param_2 + 0x18))) {
      return *(undefined8 *)(*(long *)(lVar4 + 0x40) + 0x188);
    }
  }
  FUN_10a0ee900(auStack_38,&UNK_10f64f72b,0x20);
  FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a332494);
  (*pcVar2)();
}



/* Entry: 10a3324b0; end: 10a33256b;  */

long FUN_10a3324b0(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_38 [24];
  
  lVar3 = *(long *)(param_1 + 0x1f0);
  if (lVar3 != 0) {
    lVar4 = param_1 + 0x1f0;
    do {
      lVar1 = 8;
      if (*(ulong *)(param_2 + 0x18) <= *(ulong *)(lVar3 + 0x38)) {
        lVar1 = 0;
        lVar4 = lVar3;
      }
      lVar3 = *(long *)(lVar3 + lVar1);
    } while (lVar3 != 0);
    if ((lVar4 != param_1 + 0x1f0) && (*(ulong *)(lVar4 + 0x38) <= *(ulong *)(param_2 + 0x18))) {
      return *(long *)(lVar4 + 0x40) + 0x188;
    }
  }
  FUN_10a0ee900(auStack_38,&UNK_10f64f72b,0x20);
  FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a332550);
  (*pcVar2)();
}



/* Entry: 10a33256c; end: 10a332817;  */

void FUN_10a33256c(long param_1,uint param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ushort uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
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
  undefined8 uStack_80;
  undefined **ppuStack_78;
  
  if (2 < param_2) {
    puVar2 = &UNK_10f64f74c;
    FUN_10a00946c();
    if ((byte)puVar2[0x278] == param_2) {
      return;
    }
    puVar2[0x278] = (char)param_2;
    func_0x00010a1bd170(&stack0xffffffffffffffa8);
    puVar2 = puVar2 + 0x278;
    uVar3 = 0;
    lVar1 = -0x278;
    if (cRam00000001137eafc2 == '\0') {
      lVar1 = -0xffff;
    }
    if ((*(ushort *)(puVar2 + lVar1 + 0x129) >> 8 & 1) == 0) {
      if ((((*(long *)(puVar2 + lVar1 + 0x100) != 0) ||
           ((*(ushort *)(puVar2 + lVar1 + 0x129) >> 9 & 1) != 0)) ||
          (*(long *)(puVar2 + lVar1 + 0x120) != 0)) ||
         ((*(ushort *)(puVar2 + lVar1 + 0x70) >> 8 & 1) == 0)) {
LAB_10a3638fc:
        func_0x00010a1bd170();
        if ((uVar3 & 1) != 0) {
          return;
        }
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        ppuStack_78 = &PTR_DAT_110bc6918;
        puVar4 = (undefined *)((ulong)&uStack_d0 | 8);
        FUN_10a0dad0c(puVar4,&ppuStack_78);
        lVar1 = -0x278;
        if (cRam00000001137eafc2 == '\0') {
          lVar1 = -0xffff;
        }
        uVar5 = *(ushort *)(puVar2 + lVar1 + 0x70);
        if (((uVar5 & 0x7f) == 0) && ((*(ushort *)(puVar2 + lVar1 + 0x129) & 0x7f) == 0)) {
          if ((uVar5 >> 8 & 1) == 0) {
            puVar4 = puVar2 + lVar1 + 0x40;
            FUN_10a1bfe94(puVar4,&uStack_d0);
          }
          else {
            FUN_10a1bd5e0();
            if (puVar4 != (undefined *)0x0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar5 >> 7 & 1) == 0) {
            *(undefined8 *)(puVar2 + lVar1 + 0x80) = uStack_d0;
            *(ushort *)(puVar2 + lVar1 + 0x70) = uVar5 | 0x80;
          }
          puVar4 = puVar2 + lVar1 + 0x80;
          FUN_10a1bd398(puVar4,&uStack_d0);
        }
        uVar5 = 0x278;
        if (cRam00000001137eafc2 == '\0') {
          uVar5 = 0xffff;
        }
        lVar1 = 0x278;
        if (cRam00000001137eafc2 == '\0') {
          lVar1 = 0xffff;
        }
        if ((*(ushort *)(puVar2 + (0x129 - lVar1)) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          uVar5 = 0x278;
          if (cRam00000001137eafc2 == '\0') {
            uVar5 = 0xffff;
          }
          if (puVar4 != (undefined *)0x0) {
            FUN_10a1bd648();
            uVar5 = 0x278;
            if (cRam00000001137eafc2 == '\0') {
              uVar5 = 0xffff;
            }
          }
        }
        FUN_10a1c054c(puVar2 + (0xd0 - (ulong)uVar5),&uStack_d0);
        return;
      }
      *(long *)(puVar2 + lVar1 + 0xe0) = *(long *)(puVar2 + lVar1 + 0xe0) + 1;
    }
    else if ((*(ushort *)(puVar2 + lVar1 + 0x70) >> 8 & 1) == 0) goto LAB_10a3638fc;
    ppuVar7 = *(undefined ***)(puVar2 + lVar1 + 0x130);
    ppuVar6 = *(undefined ***)(puVar2 + lVar1 + 0x78);
    if ((ppuVar7 != &PTR_DAT_110bc6918 || ppuVar6 != &PTR_DAT_110bc6918) &&
       (puVar4 = puVar2, FUN_10a1bd5e0(), puVar4 != (undefined *)0x0)) {
      if (ppuVar7 != &PTR_DAT_110bc6918) {
        FUN_10a1bd648(puVar4,puVar2 + lVar1 + 0xd0,&PTR_DAT_110bc6918);
        *(undefined ***)(puVar2 + lVar1 + 0x130) = &PTR_DAT_110bc6918;
      }
      if (ppuVar6 != &PTR_DAT_110bc6918) {
        FUN_10a1bd7d8(puVar4,puVar2 + lVar1 + 0x40,&PTR_DAT_110bc6918);
        *(undefined ***)(puVar2 + lVar1 + 0x78) = &PTR_DAT_110bc6918;
      }
    }
    return;
  }
  if (*(byte *)(param_1 + 0x244) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x244) = (char)param_2;
  func_0x00010a1bd170(&stack0xffffffffffffffd8);
  param_1 = param_1 + 0x244;
  uVar3 = 0;
  lVar1 = -0x244;
  if (cRam00000001137eafbc == '\0') {
    lVar1 = -0xffff;
  }
  lVar1 = param_1 + lVar1;
  if ((*(ushort *)(lVar1 + 0x129) >> 8 & 1) == 0) {
    if ((((*(long *)(lVar1 + 0x100) != 0) || ((*(ushort *)(lVar1 + 0x129) >> 9 & 1) != 0)) ||
        (*(long *)(lVar1 + 0x120) != 0)) || ((*(ushort *)(lVar1 + 0x70) >> 8 & 1) == 0)) {
LAB_10a3636c4:
      func_0x00010a1bd170();
      if ((uVar3 & 1) != 0) {
        return;
      }
      uStack_88 = 0;
      uStack_90 = 0;
      ppuStack_78 = (undefined **)0x0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uVar3 = (ulong)&uStack_a0 | 8;
      FUN_10a0dad0c(uVar3,&stack0xffffffffffffffb8);
      lVar1 = -0x244;
      if (cRam00000001137eafbc == '\0') {
        lVar1 = -0xffff;
      }
      lVar1 = param_1 + lVar1;
      uVar5 = *(ushort *)(lVar1 + 0x70);
      if (((uVar5 & 0x7f) == 0) && ((*(ushort *)(lVar1 + 0x129) & 0x7f) == 0)) {
        if ((uVar5 >> 8 & 1) == 0) {
          uVar3 = lVar1 + 0x40;
          FUN_10a1bfe94(uVar3,&uStack_a0);
        }
        else {
          FUN_10a1bd5e0();
          if (uVar3 != 0) {
            FUN_10a1bd7d8();
          }
        }
      }
      else {
        if ((uVar5 >> 7 & 1) == 0) {
          *(undefined8 *)(lVar1 + 0x80) = uStack_a0;
          *(ushort *)(lVar1 + 0x70) = uVar5 | 0x80;
        }
        uVar3 = lVar1 + 0x80;
        FUN_10a1bd398(uVar3,&uStack_a0);
      }
      uVar5 = 0x244;
      if (cRam00000001137eafbc == '\0') {
        uVar5 = 0xffff;
      }
      lVar1 = 0x244;
      if (cRam00000001137eafbc == '\0') {
        lVar1 = 0xffff;
      }
      if ((*(ushort *)((param_1 - lVar1) + 0x129) >> 8 & 1) != 0) {
        FUN_10a1bd5e0();
        uVar5 = 0x244;
        if (cRam00000001137eafbc == '\0') {
          uVar5 = 0xffff;
        }
        if (uVar3 != 0) {
          FUN_10a1bd648();
          uVar5 = 0x244;
          if (cRam00000001137eafbc == '\0') {
            uVar5 = 0xffff;
          }
        }
      }
      FUN_10a1c054c((param_1 - (ulong)uVar5) + 0xd0,&uStack_a0);
      return;
    }
    *(long *)(lVar1 + 0xe0) = *(long *)(lVar1 + 0xe0) + 1;
  }
  else if ((*(ushort *)(lVar1 + 0x70) >> 8 & 1) == 0) goto LAB_10a3636c4;
  ppuVar7 = *(undefined ***)(lVar1 + 0x130);
  ppuVar6 = *(undefined ***)(lVar1 + 0x78);
  if ((ppuVar7 != &PTR_DAT_110bc6900 || ppuVar6 != &PTR_DAT_110bc6900) &&
     (FUN_10a1bd5e0(), param_1 != 0)) {
    if (ppuVar7 != &PTR_DAT_110bc6900) {
      FUN_10a1bd648(param_1,lVar1 + 0xd0,&PTR_DAT_110bc6900);
      *(undefined ***)(lVar1 + 0x130) = &PTR_DAT_110bc6900;
    }
    if (ppuVar6 != &PTR_DAT_110bc6900) {
      FUN_10a1bd7d8(param_1,lVar1 + 0x40,&PTR_DAT_110bc6900);
      *(undefined ***)(lVar1 + 0x78) = &PTR_DAT_110bc6900;
    }
  }
  return;
}



/* Entry: 10a332818; end: 10a3328b7;  */

void FUN_10a332818(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  long lStack_30;
  undefined1 uStack_21;
  
  plStack_38 = *(long **)(param_1 + 0x288);
  uStack_40 = *(undefined8 *)(param_1 + 0x280);
  if (*(long *)(param_1 + 0x288) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x288) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_30 = param_1;
  FUN_10a364c7c(&uStack_21,&uStack_40);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a3328b8; end: 10a3329f7;  */

long * FUN_10a3328b8(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long alStack_50 [2];
  long lStack_40;
  long *plStack_38;
  long lStack_28;
  
  plVar7 = alStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_1 + 1;
  plVar6 = (long *)*plVar3;
  if (plVar6 != (long *)0x0) {
    plVar4 = plVar3;
    do {
      lVar5 = 8;
      if ((ulong)param_2[3] <= (ulong)plVar6[7]) {
        lVar5 = 0;
        plVar4 = plVar6;
      }
      plVar6 = *(long **)((long)plVar6 + lVar5);
    } while (plVar6 != (long *)0x0);
    if ((plVar4 != plVar3) && ((ulong)plVar4[7] <= (ulong)param_2[3])) {
      plStack_38 = (long *)plVar4[9];
      lStack_40 = plVar4[8];
      if (plVar4[9] != 0) {
        plVar3 = (long *)(plVar4[9] + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10a336c44(alStack_50,param_1,0,0,&lStack_40,1);
      func_0x00010a364f58(alStack_50[0]);
      FUN_10a365790();
      plVar3 = plStack_38;
      param_1 = plVar7;
      if (plStack_38 != (long *)0x0) {
        plVar7 = plStack_38 + 1;
        do {
          lVar5 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          param_1 = plVar3;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    FUN_10a365790(alStack_50);
    func_0x00010a35e8d4(&lStack_40);
    __Unwind_Resume();
    lVar8 = param_2[1];
    lVar5 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    plVar7 = (long *)param_1[1];
    param_1[1] = lVar8;
    *param_1 = lVar5;
    if (plVar7 != (long *)0x0) {
      plVar3 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 10a3329f8; end: 10a332b77;  */

undefined8 * FUN_10a3329f8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a332b78; end: 10a332c1b;  */

void FUN_10a332b78(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  uStack_30 = *(undefined8 *)(param_1 + 0x188);
  plStack_28 = *(long **)(param_1 + 400);
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
  FUN_10a332c1c(param_1,&uStack_30,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar1);
      return;
    }
  }
  return;
}



/* Entry: 10a332c1c; end: 10a334d33;  */

void FUN_10a332c1c(undefined8 *param_1,undefined **param_2,undefined8 *param_3,int param_4)

{
  long *plVar1;
  undefined ***pppuVar2;
  undefined8 **ppuVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 *puVar6;
  code *pcVar7;
  bool bVar8;
  undefined **ppuVar9;
  undefined ***pppuVar10;
  long *plVar11;
  undefined **ppuVar12;
  ulong uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined ***pppuVar16;
  undefined8 **ppuVar17;
  undefined8 **ppuVar18;
  ushort uVar19;
  undefined **ppuVar20;
  undefined8 *extraout_x8;
  long lVar21;
  undefined *puVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  undefined **ppuVar29;
  undefined *puVar30;
  undefined **unaff_x20;
  undefined **ppuVar31;
  undefined8 *puVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined8 uStack_210;
  undefined8 **ppuStack_208;
  undefined1 auStack_200 [8];
  undefined8 *apuStack_1f8 [8];
  long lStack_1b8;
  undefined **ppuStack_1b0;
  undefined ***pppuStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined8 *puStack_188;
  undefined **ppuStack_180;
  int iStack_174;
  undefined8 uStack_170;
  long *plStack_168;
  undefined **ppuStack_160;
  undefined ***pppuStack_158;
  undefined1 uStack_149;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = (undefined **)0x2e8;
  iStack_174 = param_4;
  __Znwm();
  plStack_168 = (long *)param_3[1];
  uStack_170 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  FUN_10a3314b0();
  pppuVar10 = (undefined ***)0x20;
  ppuStack_160 = ppuVar9;
  __Znwm();
  *pppuVar10 = &PTR_FUN_110bc6a50;
  pppuVar10[1] = (undefined **)0x0;
  pppuVar10[2] = (undefined **)0x0;
  pppuVar10[3] = ppuVar9;
  pppuStack_158 = pppuVar10;
  FUN_10a190d60(&ppuStack_160,ppuVar9 + 6,ppuVar9);
  plVar11 = plStack_168;
  if (plStack_168 != (long *)0x0) {
    plVar1 = plStack_168 + 1;
    do {
      lVar21 = *plVar1;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_168 + 0x10))(plStack_168);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  puStack_d8 = ppuStack_160[7];
  puStack_e0 = ppuStack_160[6];
  if (ppuStack_160[7] != (undefined *)0x0) {
    plVar11 = (long *)(ppuStack_160[7] + 0x10);
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar8) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puStack_f0 = (undefined *)0x10a3635a8;
  ppuStack_e8 = &PTR_FUN_110bc68e8;
  puStack_188 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (ppuStack_160 + 0x34,param_2 + 0x34);
  ppuVar9 = ppuStack_160;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (ppuStack_160 + 0x34,param_2 + 0x34);
  if (ppuVar9 != param_2) {
    FUN_10a1f503c(ppuVar9 + 0x40,param_2[0x40],param_2 + 0x41);
  }
  if (*(char *)(ppuVar9 + 0x43) != *(char *)(param_2 + 0x43)) {
    *(char *)(ppuVar9 + 0x43) = *(char *)(param_2 + 0x43);
    func_0x00010a1bd170(&ppuStack_140);
    func_0x00010a363f2c(ppuVar9 + 0x43);
  }
  if (*(char *)((long)ppuVar9 + 0x21a) != *(char *)((long)param_2 + 0x21a)) {
    *(char *)((long)ppuVar9 + 0x21a) = *(char *)((long)param_2 + 0x21a);
    func_0x00010a1bd170(&ppuStack_140);
    func_0x00010a364164((long)ppuVar9 + 0x21a);
  }
  if (*(char *)((long)ppuVar9 + 0x219) != *(char *)((long)param_2 + 0x219)) {
    *(char *)((long)ppuVar9 + 0x219) = *(char *)((long)param_2 + 0x219);
    func_0x00010a1bd170(&ppuStack_140);
    func_0x00010a36439c((long)ppuVar9 + 0x219);
  }
  *(undefined4 *)((long)ppuVar9 + 0x21e) = *(undefined4 *)((long)param_2 + 0x21e);
  ppuVar9[0x49] = param_2[0x49];
  if (*(char *)((long)ppuVar9 + 0x244) != *(char *)((long)param_2 + 0x244)) {
    *(char *)((long)ppuVar9 + 0x244) = *(char *)((long)param_2 + 0x244);
    func_0x00010a1bd170(&ppuStack_140);
    func_0x00010a36364c((long)ppuVar9 + 0x244);
  }
  puVar30 = param_2[0x4b];
  plVar11 = (long *)0x70;
  __Znwm();
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&PTR_FUN_110bc8478;
  *(undefined1 *)(plVar11 + 4) = 0;
  ppuStack_140 = (undefined **)(plVar11 + 3);
  *ppuStack_140 = (undefined *)&PTR_FUN_110c448e0;
  plVar11[6] = 0;
  plVar11[7] = 0;
  plVar11[5] = (long)&PTR_FUN_110c44940;
  lVar33 = *(long *)(puVar30 + 0x50);
  lVar21 = *(long *)(puVar30 + 0x48);
  lVar35 = *(long *)(puVar30 + 0x40);
  lVar34 = *(long *)(puVar30 + 0x38);
  lVar36 = *(long *)(puVar30 + 0x28);
  plVar11[9] = *(long *)(puVar30 + 0x30);
  plVar11[8] = lVar36;
  plVar11[0xb] = lVar35;
  plVar11[10] = lVar34;
  plVar11[0xd] = lVar33;
  plVar11[0xc] = lVar21;
  ppuStack_138 = (undefined **)plVar11;
  FUN_10a3329f8(ppuVar9 + 0x4b,&ppuStack_140);
  ppuVar12 = ppuStack_138;
  if (ppuStack_138 != (undefined **)0x0) {
    plVar11 = (long *)(ppuStack_138 + 1);
    do {
      lVar21 = *plVar11;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar8) {
        *plVar11 = lVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar21 == 0) {
      (**(code **)((long)*ppuStack_138 + 0x10))(ppuStack_138);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar12);
    }
  }
  puVar30 = param_2[0x4d];
  ppuVar12 = (undefined **)0x58;
  __Znwm();
  ppuVar12[1] = (undefined *)0x0;
  ppuVar12[2] = (undefined *)0x0;
  *ppuVar12 = (undefined *)&PTR_FUN_110bc8818;
  *(undefined1 *)(ppuVar12 + 4) = 0;
  ppuVar12[6] = (undefined *)0x0;
  ppuVar12[7] = (undefined *)0x0;
  ppuStack_140 = ppuVar12 + 3;
  *ppuStack_140 = (undefined *)&PTR_FUN_110c4df80;
  ppuVar12[5] = (undefined *)&PTR_FUN_110c4dfe0;
  uVar4 = *(undefined4 *)(puVar30 + 0x38);
  puVar22 = *(undefined **)(puVar30 + 0x28);
  ppuVar12[9] = *(undefined **)(puVar30 + 0x30);
  ppuVar12[8] = puVar22;
  *(undefined4 *)(ppuVar12 + 10) = uVar4;
  ppuStack_138 = ppuVar12;
  func_0x00010a332a5c(ppuVar9 + 0x4d,&ppuStack_140);
  ppuVar12 = ppuStack_138;
  if (ppuStack_138 != (undefined **)0x0) {
    ppuVar23 = ppuStack_138 + 1;
    do {
      puVar30 = *ppuVar23;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar23,0x10);
      if (bVar8) {
        *ppuVar23 = puVar30 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar30 == (undefined *)0x0) {
      (**(code **)(*ppuStack_138 + 0x10))(ppuStack_138);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar12);
    }
  }
  if (*(char *)(ppuVar9 + 0x4f) != *(char *)(param_2 + 0x4f)) {
    *(char *)(ppuVar9 + 0x4f) = *(char *)(param_2 + 0x4f);
    func_0x00010a1bd170(&ppuStack_140);
    func_0x00010a363884(ppuVar9 + 0x4f);
  }
  if (*(float *)((long)ppuVar9 + 0x224) != *(float *)((long)param_2 + 0x224)) {
    *(float *)((long)ppuVar9 + 0x224) = *(float *)((long)param_2 + 0x224);
    func_0x00010a1bd170(&ppuStack_140);
    func_0x00010a363abc((float *)((long)ppuVar9 + 0x224));
  }
  if (*(char *)((long)ppuVar9 + 0x21c) != *(char *)((long)param_2 + 0x21c)) {
    *(char *)((long)ppuVar9 + 0x21c) = *(char *)((long)param_2 + 0x21c);
    func_0x00010a1bd170(&ppuStack_140);
    func_0x00010a3645d4((long)ppuVar9 + 0x21c);
  }
  if (*(char *)((long)ppuVar9 + 0x21d) != *(char *)((long)param_2 + 0x21d)) {
    *(char *)((long)ppuVar9 + 0x21d) = *(char *)((long)param_2 + 0x21d);
    func_0x00010a1bd170(&ppuStack_140);
    func_0x00010a36480c((long)ppuVar9 + 0x21d);
  }
  if (*(char *)((long)ppuVar9 + 0x245) != *(char *)((long)param_2 + 0x245)) {
    *(char *)((long)ppuVar9 + 0x245) = *(char *)((long)param_2 + 0x245);
    func_0x00010a1bd170(&ppuStack_140);
    func_0x00010a364a44((long)ppuVar9 + 0x245);
  }
  *(undefined4 *)(ppuVar9 + 0x45) = *(undefined4 *)(param_2 + 0x45);
  *(undefined1 *)((long)ppuVar9 + 0x21b) = *(undefined1 *)((long)param_2 + 0x21b);
  if (*(int *)(ppuVar9 + 0x4a) != *(int *)(param_2 + 0x4a)) {
    *(int *)(ppuVar9 + 0x4a) = *(int *)(param_2 + 0x4a);
    func_0x00010a1bd170(&ppuStack_140);
    func_0x00010a363cf4(ppuVar9 + 0x4a);
  }
  ppuVar12 = ppuVar9 + 0x52;
  if (ppuVar9[0x54] == param_2[0x54]) {
    ppuVar23 = (undefined **)ppuVar9[0x52];
    if (ppuVar23 != ppuVar9 + 0x53) {
      puVar25 = (undefined8 *)param_2[0x52];
      do {
        if (ppuVar23[7] != (undefined *)puVar25[7] || ppuVar23[8] != (undefined *)puVar25[8])
        goto LAB_10a3330c8;
        ppuVar24 = (undefined **)ppuVar23[1];
        ppuVar31 = ppuVar23;
        if ((undefined **)ppuVar23[1] == (undefined **)0x0) {
          do {
            ppuVar23 = (undefined **)ppuVar31[2];
            bVar8 = (undefined **)*ppuVar23 != ppuVar31;
            ppuVar31 = ppuVar23;
          } while (bVar8);
        }
        else {
          do {
            ppuVar23 = ppuVar24;
            ppuVar24 = (undefined **)*ppuVar23;
          } while ((undefined **)*ppuVar23 != (undefined **)0x0);
        }
        puVar26 = puVar25;
        puVar6 = (undefined8 *)puVar25[1];
        if ((undefined8 *)puVar25[1] == (undefined8 *)0x0) {
          do {
            puVar25 = (undefined8 *)puVar26[2];
            bVar8 = (undefined8 *)*puVar25 != puVar26;
            puVar26 = puVar25;
          } while (bVar8);
        }
        else {
          do {
            puVar25 = puVar6;
            puVar6 = (undefined8 *)*puVar25;
          } while ((undefined8 *)*puVar25 != (undefined8 *)0x0);
        }
      } while (ppuVar23 != ppuVar9 + 0x53);
    }
  }
  else {
LAB_10a3330c8:
    if (ppuVar9 != param_2) {
      ppuVar24 = (undefined **)param_2[0x52];
      ppuVar23 = param_2 + 0x53;
      if (ppuVar9[0x54] != (undefined *)0x0) {
        ppuVar14 = (undefined **)ppuVar9[0x52];
        ppuVar31 = ppuVar9 + 0x53;
        ppuVar9[0x52] = (undefined *)ppuVar31;
        *(undefined8 *)(ppuVar9[0x53] + 0x10) = 0;
        ppuVar9[0x54] = (undefined *)0x0;
        *ppuVar31 = (undefined *)0x0;
        ppuVar20 = (undefined **)ppuVar14[1];
        if (ppuVar20 != (undefined **)0x0) {
          ppuVar14 = ppuVar20;
        }
        ppuStack_140 = ppuVar12;
        ppuStack_138 = ppuVar14;
        ppuStack_130 = ppuVar14;
        if (ppuVar14 != (undefined **)0x0) {
          ppuVar20 = ppuVar14;
          FUN_10a3650c0();
          ppuStack_138 = ppuVar20;
          do {
            if (ppuVar24 == ppuVar23) break;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (ppuVar14 + 4,ppuVar24 + 4);
            ppuVar14[7] = ppuVar24[7];
            FUN_10a339448(ppuVar14 + 8,ppuVar24[8],ppuVar24[9]);
            ppuVar14 = ppuVar31;
            ppuVar20 = ppuVar31;
            if ((undefined **)*ppuVar31 != (undefined **)0x0) {
              ppuVar15 = (undefined **)*ppuVar31;
              do {
                while (ppuVar14 = ppuVar15, ppuStack_130[7] < ppuVar14[7]) {
                  ppuVar20 = ppuVar14;
                  ppuVar15 = (undefined **)*ppuVar14;
                  if ((undefined **)*ppuVar14 == (undefined **)0x0) goto LAB_10a333188;
                }
                ppuVar15 = (undefined **)ppuVar14[1];
              } while ((undefined **)ppuVar14[1] != (undefined **)0x0);
              ppuVar20 = ppuVar14 + 1;
            }
LAB_10a333188:
            FUN_10a35ea58(ppuVar12,ppuVar14,ppuVar20);
            ppuVar14 = ppuStack_138;
            ppuStack_130 = ppuStack_138;
            if (ppuStack_138 != (undefined **)0x0) {
              func_0x00010a3650c4();
            }
            ppuVar20 = (undefined **)ppuVar24[1];
            ppuVar15 = ppuVar24;
            if ((undefined **)ppuVar24[1] == (undefined **)0x0) {
              do {
                ppuVar24 = (undefined **)ppuVar15[2];
                bVar8 = (undefined **)*ppuVar24 != ppuVar15;
                ppuVar15 = ppuVar24;
              } while (bVar8);
            }
            else {
              do {
                ppuVar24 = ppuVar20;
                ppuVar20 = (undefined **)*ppuVar24;
              } while ((undefined **)*ppuVar24 != (undefined **)0x0);
            }
          } while (ppuVar14 != (undefined **)0x0);
        }
        FUN_10a365118(&ppuStack_140);
      }
      if (ppuVar24 != ppuVar23) {
        ppuVar31 = ppuVar9 + 0x53;
        do {
          ppuVar14 = (undefined **)0x50;
          __Znwm();
          ppuStack_130 = (undefined **)0x0;
          ppuStack_140 = ppuVar14;
          ppuStack_138 = ppuVar12;
          if (*(char *)((long)ppuVar24 + 0x37) < '\0') {
            func_0x000107c3192c(ppuVar14 + 4,ppuVar24[4],ppuVar24[5]);
          }
          else {
            puVar22 = ppuVar24[5];
            puVar30 = ppuVar24[4];
            ppuVar14[6] = ppuVar24[6];
            ppuVar14[5] = puVar22;
            ppuVar14[4] = puVar30;
          }
          ppuVar14[7] = ppuVar24[7];
          puVar30 = ppuVar24[9];
          puVar22 = ppuVar24[8];
          ppuVar14[9] = ppuVar24[9];
          ppuVar14[8] = puVar22;
          if (puVar30 != (undefined *)0x0) {
            plVar11 = (long *)(puVar30 + 8);
            do {
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar8) {
                *plVar11 = *plVar11 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          ppuVar20 = ppuVar31;
          ppuVar15 = ppuVar31;
          if ((undefined **)*ppuVar31 != (undefined **)0x0) {
            ppuVar27 = (undefined **)*ppuVar31;
            do {
              while (ppuVar20 = ppuVar27, ppuVar14[7] < ppuVar20[7]) {
                ppuVar15 = ppuVar20;
                ppuVar27 = (undefined **)*ppuVar20;
                if ((undefined **)*ppuVar20 == (undefined **)0x0) goto LAB_10a3332ac;
              }
              ppuVar27 = (undefined **)ppuVar20[1];
            } while ((undefined **)ppuVar20[1] != (undefined **)0x0);
            ppuVar15 = ppuVar20 + 1;
          }
LAB_10a3332ac:
          FUN_10a35ea58(ppuVar12,ppuVar20,ppuVar15,ppuVar14);
          ppuVar14 = (undefined **)ppuVar24[1];
          ppuVar20 = ppuVar24;
          if ((undefined **)ppuVar24[1] == (undefined **)0x0) {
            do {
              ppuVar24 = (undefined **)ppuVar20[2];
              bVar8 = (undefined **)*ppuVar24 != ppuVar20;
              ppuVar20 = ppuVar24;
            } while (bVar8);
          }
          else {
            do {
              ppuVar24 = ppuVar14;
              ppuVar14 = (undefined **)*ppuVar24;
            } while ((undefined **)*ppuVar24 != (undefined **)0x0);
          }
        } while (ppuVar24 != ppuVar23);
      }
    }
    pppuVar10 = &ppuStack_140;
    func_0x00010a1bd170();
    lVar21 = -0x290;
    if (cRam00000001137eafa8 == '\0') {
      lVar21 = -0xffff;
    }
    uVar19 = *(ushort *)((long)ppuVar12 + lVar21 + 0x129);
    if ((uVar19 >> 8 & 1) == 0) {
      if ((((*(long *)((long)ppuVar12 + lVar21 + 0x100) != 0) || ((uVar19 >> 9 & 1) != 0)) ||
          (*(long *)((long)ppuVar12 + lVar21 + 0x120) != 0)) ||
         ((*(ushort *)((long)ppuVar12 + lVar21 + 0x70) >> 8 & 1) == 0)) {
LAB_10a333354:
        uVar13 = 0;
        func_0x00010a1bd170();
        if ((uVar13 & 1) == 0) {
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_128 = 0;
          ppuStack_130 = (undefined **)0x0;
          uStack_118 = 0;
          uStack_120 = 0;
          ppuStack_138 = (undefined **)0x0;
          ppuStack_140 = (undefined **)0x0;
          ppuStack_80 = &PTR_DAT_110bc6750;
          uVar13 = (ulong)&ppuStack_140 | 8;
          FUN_10a0dad0c(uVar13,&ppuStack_80);
          lVar21 = -0x290;
          if (cRam00000001137eafa8 == '\0') {
            lVar21 = -0xffff;
          }
          uVar19 = *(ushort *)((long)ppuVar12 + lVar21 + 0x70);
          if (((uVar19 & 0x7f) == 0) && ((*(ushort *)((long)ppuVar12 + lVar21 + 0x129) & 0x7f) == 0)
             ) {
            if ((uVar19 >> 8 & 1) == 0) {
              uVar13 = (long)ppuVar12 + lVar21 + 0x40;
              FUN_10a1bfe94(uVar13,&ppuStack_140);
            }
            else {
              FUN_10a1bd5e0();
              if (uVar13 != 0) {
                FUN_10a1bd7d8();
              }
            }
          }
          else {
            if ((uVar19 >> 7 & 1) == 0) {
              *(undefined ***)((long)ppuVar12 + lVar21 + 0x80) = ppuStack_140;
              *(ushort *)((long)ppuVar12 + lVar21 + 0x70) = uVar19 | 0x80;
            }
            uVar13 = (long)ppuVar12 + lVar21 + 0x80;
            FUN_10a1bd398(uVar13,&ppuStack_140);
          }
          uVar19 = 0x290;
          if (cRam00000001137eafa8 == '\0') {
            uVar19 = 0xffff;
          }
          lVar21 = 0x290;
          if (cRam00000001137eafa8 == '\0') {
            lVar21 = 0xffff;
          }
          if ((*(ushort *)((long)ppuVar12 + (0x129 - lVar21)) >> 8 & 1) != 0) {
            FUN_10a1bd5e0();
            uVar19 = 0x290;
            if (cRam00000001137eafa8 == '\0') {
              uVar19 = 0xffff;
            }
            if (uVar13 != 0) {
              FUN_10a1bd648();
              uVar19 = 0x290;
              if (cRam00000001137eafa8 == '\0') {
                uVar19 = 0xffff;
              }
            }
          }
          FUN_10a1c054c((long)ppuVar12 + (0xd0 - (ulong)uVar19),&ppuStack_140);
        }
        goto LAB_10a3334c8;
      }
      *(long *)((long)ppuVar12 + lVar21 + 0xe0) = *(long *)((long)ppuVar12 + lVar21 + 0xe0) + 1;
    }
    else if ((*(ushort *)((long)ppuVar12 + lVar21 + 0x70) >> 8 & 1) == 0) goto LAB_10a333354;
    unaff_x20 = *(undefined ***)((long)ppuVar12 + lVar21 + 0x130);
    ppuVar23 = *(undefined ***)((long)ppuVar12 + lVar21 + 0x78);
    if ((unaff_x20 != &PTR_DAT_110bc6750 || ppuVar23 != &PTR_DAT_110bc6750) &&
       (FUN_10a1bd5e0(), pppuVar10 != (undefined ***)0x0)) {
      if (unaff_x20 != &PTR_DAT_110bc6750) {
        FUN_10a1bd648(pppuVar10,(long)ppuVar12 + lVar21 + 0xd0,&PTR_DAT_110bc6750);
        *(undefined ***)((long)ppuVar12 + lVar21 + 0x130) = &PTR_DAT_110bc6750;
      }
      if (ppuVar23 != &PTR_DAT_110bc6750) {
        FUN_10a1bd7d8(pppuVar10,(long)ppuVar12 + lVar21 + 0x40,&PTR_DAT_110bc6750);
        *(undefined ***)((long)ppuVar12 + lVar21 + 0x78) = &PTR_DAT_110bc6750;
      }
    }
  }
LAB_10a3334c8:
  puVar26 = (undefined8 *)((long)param_2[0x37] + 8);
  puVar25 = *(undefined8 **)param_2[0x37];
  ppuStack_180 = param_2;
  if (puVar25 != puVar26) {
    do {
      FUN_10a36516c(&ppuStack_140,&ppuStack_80,puVar25[8]);
      do {
        puVar30 = puRam0000000113301700;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(0x113301700,0x10);
        if (bVar8) {
          cVar5 = ExclusiveMonitorsStatus();
          puRam0000000113301700 = puRam0000000113301700 + 1;
        }
      } while (cVar5 != '\0');
      ppuVar9[0x39] = puVar30;
      ppuStack_88 = ppuStack_138;
      ppuStack_90 = ppuStack_140;
      if (ppuStack_138 != (undefined **)0x0) {
        ppuVar23 = ppuStack_138 + 1;
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppuVar23,0x10);
          if (bVar8) {
            *ppuVar23 = *ppuVar23 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      func_0x00010a1bd170(&ppuStack_a0);
      ppuStack_78 = (undefined **)((ulong)ppuStack_78 & 0xffffffffffffff00);
      ppuStack_80 = ppuVar9 + 0x37;
      func_0x00010a1bd170(&ppuStack_a0);
      puVar30 = ppuVar9[0x37];
      ppuStack_a0 = (undefined **)(puVar25 + 4);
      FUN_10a0da6b4(puVar30,puVar25 + 4,&UNK_10dd5b8f9,&ppuStack_a0,&ppuStack_b0);
      FUN_10a334e90(puVar30 + 0x40,&ppuStack_140);
      FUN_10a365458(&ppuStack_80);
      ppuVar23 = ppuStack_88;
      if (ppuStack_88 != (undefined **)0x0) {
        ppuVar24 = ppuStack_88 + 1;
        do {
          puVar30 = *ppuVar24;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppuVar24,0x10);
          if (bVar8) {
            *ppuVar24 = puVar30 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar30 == (undefined *)0x0) {
          (**(code **)(*ppuStack_88 + 0x10))(ppuStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar23);
        }
      }
      ppuVar23 = ppuStack_138;
      if (ppuStack_138 != (undefined **)0x0) {
        ppuVar24 = ppuStack_138 + 1;
        do {
          puVar30 = *ppuVar24;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppuVar24,0x10);
          if (bVar8) {
            *ppuVar24 = puVar30 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar30 == (undefined *)0x0) {
          (**(code **)(*ppuStack_138 + 0x10))(ppuStack_138);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar23);
        }
      }
      puVar6 = (undefined8 *)puVar25[1];
      puVar32 = puVar25;
      if ((undefined8 *)puVar25[1] == (undefined8 *)0x0) {
        do {
          puVar25 = (undefined8 *)puVar32[2];
          bVar8 = (undefined8 *)*puVar25 != puVar32;
          puVar32 = puVar25;
        } while (bVar8);
      }
      else {
        do {
          puVar25 = puVar6;
          puVar6 = (undefined8 *)*puVar25;
        } while ((undefined8 *)*puVar25 != (undefined8 *)0x0);
      }
    } while (puVar25 != puVar26);
  }
  ppuVar23 = ppuStack_180;
  if (ppuVar9[0x3c] == ppuStack_180[0x3c]) {
    ppuVar24 = (undefined **)ppuVar9[0x3a];
    if (ppuVar24 != ppuVar9 + 0x3b) {
      puVar25 = (undefined8 *)ppuStack_180[0x3a];
      do {
        if (ppuVar24[7] != (undefined *)puVar25[7] ||
            *(int *)(ppuVar24 + 8) != *(int *)(puVar25 + 8)) goto LAB_10a3336dc;
        ppuVar31 = (undefined **)ppuVar24[1];
        ppuVar14 = ppuVar24;
        if ((undefined **)ppuVar24[1] == (undefined **)0x0) {
          do {
            ppuVar24 = (undefined **)ppuVar14[2];
            bVar8 = (undefined **)*ppuVar24 != ppuVar14;
            ppuVar14 = ppuVar24;
          } while (bVar8);
        }
        else {
          do {
            ppuVar24 = ppuVar31;
            ppuVar31 = (undefined **)*ppuVar24;
          } while ((undefined **)*ppuVar24 != (undefined **)0x0);
        }
        puVar26 = puVar25;
        puVar6 = (undefined8 *)puVar25[1];
        if ((undefined8 *)puVar25[1] == (undefined8 *)0x0) {
          do {
            puVar25 = (undefined8 *)puVar26[2];
            bVar8 = (undefined8 *)*puVar25 != puVar26;
            puVar26 = puVar25;
          } while (bVar8);
        }
        else {
          do {
            puVar25 = puVar6;
            puVar6 = (undefined8 *)*puVar25;
          } while ((undefined8 *)*puVar25 != (undefined8 *)0x0);
        }
      } while (ppuVar24 != ppuVar9 + 0x3b);
    }
    goto LAB_10a333ab0;
  }
LAB_10a3336dc:
  ppuVar24 = ppuVar9 + 0x3a;
  if (ppuVar9 != ppuStack_180) {
    ppuVar14 = (undefined **)ppuStack_180[0x3a];
    ppuVar31 = ppuStack_180 + 0x3b;
    if (ppuVar9[0x3c] != (undefined *)0x0) {
      ppuVar23 = ppuVar9 + 0x3b;
      ppuVar20 = (undefined **)ppuVar9[0x3a];
      ppuVar9[0x3a] = (undefined *)ppuVar23;
      *(undefined8 *)(ppuVar9[0x3b] + 0x10) = 0;
      ppuVar9[0x3b] = (undefined *)0x0;
      ppuVar9[0x3c] = (undefined *)0x0;
      ppuVar15 = (undefined **)ppuVar20[1];
      if (ppuVar15 != (undefined **)0x0) {
        ppuVar20 = ppuVar15;
      }
      ppuStack_140 = ppuVar24;
      ppuStack_138 = ppuVar20;
      ppuStack_130 = ppuVar20;
      if (ppuVar20 != (undefined **)0x0) {
        ppuVar15 = ppuVar20;
        FUN_10a365638();
        ppuStack_138 = ppuVar15;
        do {
          if (ppuVar14 == ppuVar31) break;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (ppuVar20 + 4,ppuVar14 + 4);
          ppuVar20[7] = ppuVar14[7];
          *(undefined4 *)(ppuVar20 + 8) = *(undefined4 *)(ppuVar14 + 8);
          ppuVar20 = ppuVar23;
          ppuVar15 = ppuVar23;
          if ((undefined **)*ppuVar23 != (undefined **)0x0) {
            ppuVar27 = (undefined **)*ppuVar23;
            do {
              while (ppuVar20 = ppuVar27, ppuStack_130[7] < ppuVar20[7]) {
                ppuVar15 = ppuVar20;
                ppuVar27 = (undefined **)*ppuVar20;
                if ((undefined **)*ppuVar20 == (undefined **)0x0) goto LAB_10a333794;
              }
              ppuVar27 = (undefined **)ppuVar20[1];
            } while ((undefined **)ppuVar20[1] != (undefined **)0x0);
            ppuVar15 = ppuVar20 + 1;
          }
LAB_10a333794:
          FUN_10a362f50(ppuVar24,ppuVar20,ppuVar15);
          ppuVar20 = ppuStack_138;
          ppuStack_130 = ppuStack_138;
          if (ppuStack_138 != (undefined **)0x0) {
            FUN_10a365638();
          }
          ppuVar15 = (undefined **)ppuVar14[1];
          ppuVar27 = ppuVar14;
          if ((undefined **)ppuVar14[1] == (undefined **)0x0) {
            do {
              ppuVar14 = (undefined **)ppuVar27[2];
              bVar8 = (undefined **)*ppuVar14 != ppuVar27;
              ppuVar27 = ppuVar14;
            } while (bVar8);
          }
          else {
            do {
              ppuVar14 = ppuVar15;
              ppuVar15 = (undefined **)*ppuVar14;
            } while ((undefined **)*ppuVar14 != (undefined **)0x0);
          }
        } while (ppuVar20 != (undefined **)0x0);
      }
      FUN_10a36568c(&ppuStack_140);
    }
    ppuVar23 = ppuStack_180;
    if (ppuVar14 != ppuVar31) {
      do {
        lVar21 = 0x48;
        __Znwm();
        if (*(char *)((long)ppuVar14 + 0x37) < '\0') {
          func_0x000107c3192c(lVar21 + 0x20,ppuVar14[4],ppuVar14[5]);
        }
        else {
          puVar22 = ppuVar14[5];
          puVar30 = ppuVar14[4];
          *(undefined **)(lVar21 + 0x30) = ppuVar14[6];
          *(undefined **)(lVar21 + 0x28) = puVar22;
          *(undefined **)(lVar21 + 0x20) = puVar30;
        }
        puVar30 = ppuVar14[7];
        *(undefined **)(lVar21 + 0x38) = puVar30;
        *(undefined4 *)(lVar21 + 0x40) = *(undefined4 *)(ppuVar14 + 8);
        ppuVar15 = (undefined **)ppuVar9[0x3b];
        ppuVar20 = ppuVar9 + 0x3b;
        while (ppuVar27 = ppuVar20, ppuVar15 != (undefined **)0x0) {
          while (ppuVar20 = ppuVar15, ppuVar20[7] <= puVar30) {
            ppuVar15 = (undefined **)ppuVar20[1];
            if ((undefined **)ppuVar20[1] == (undefined **)0x0) {
              ppuVar27 = ppuVar20 + 1;
              goto LAB_10a333894;
            }
          }
          ppuVar15 = (undefined **)*ppuVar20;
        }
LAB_10a333894:
        FUN_10a362f50(ppuVar24,ppuVar20,ppuVar27,lVar21);
        ppuVar20 = (undefined **)ppuVar14[1];
        ppuVar15 = ppuVar14;
        if ((undefined **)ppuVar14[1] == (undefined **)0x0) {
          do {
            ppuVar14 = (undefined **)ppuVar15[2];
            bVar8 = (undefined **)*ppuVar14 != ppuVar15;
            ppuVar15 = ppuVar14;
          } while (bVar8);
        }
        else {
          do {
            ppuVar14 = ppuVar20;
            ppuVar20 = (undefined **)*ppuVar14;
          } while ((undefined **)*ppuVar14 != (undefined **)0x0);
        }
      } while (ppuVar14 != ppuVar31);
    }
  }
  pppuVar10 = &ppuStack_140;
  func_0x00010a1bd170();
  lVar21 = -0x1d0;
  if (cRam00000001137eafac == '\0') {
    lVar21 = -0xffff;
  }
  uVar19 = *(ushort *)((long)ppuVar24 + lVar21 + 0x129);
  if ((uVar19 >> 8 & 1) == 0) {
    if ((((*(long *)((long)ppuVar24 + lVar21 + 0x100) != 0) || ((uVar19 >> 9 & 1) != 0)) ||
        (*(long *)((long)ppuVar24 + lVar21 + 0x120) != 0)) ||
       ((*(ushort *)((long)ppuVar24 + lVar21 + 0x70) >> 8 & 1) == 0)) {
LAB_10a33393c:
      uVar13 = 0;
      func_0x00010a1bd170();
      if ((uVar13 & 1) == 0) {
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_128 = 0;
        ppuStack_130 = (undefined **)0x0;
        uStack_118 = 0;
        uStack_120 = 0;
        ppuStack_138 = (undefined **)0x0;
        ppuStack_140 = (undefined **)0x0;
        ppuStack_80 = &PTR_DAT_110bc6830;
        uVar13 = (ulong)&ppuStack_140 | 8;
        FUN_10a0dad0c(uVar13,&ppuStack_80);
        lVar21 = -0x1d0;
        if (cRam00000001137eafac == '\0') {
          lVar21 = -0xffff;
        }
        uVar19 = *(ushort *)((long)ppuVar24 + lVar21 + 0x70);
        if (((uVar19 & 0x7f) == 0) && ((*(ushort *)((long)ppuVar24 + lVar21 + 0x129) & 0x7f) == 0))
        {
          if ((uVar19 >> 8 & 1) == 0) {
            uVar13 = (long)ppuVar24 + lVar21 + 0x40;
            FUN_10a1bfe94(uVar13,&ppuStack_140);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar13 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar19 >> 7 & 1) == 0) {
            *(undefined ***)((long)ppuVar24 + lVar21 + 0x80) = ppuStack_140;
            *(ushort *)((long)ppuVar24 + lVar21 + 0x70) = uVar19 | 0x80;
          }
          uVar13 = (long)ppuVar24 + lVar21 + 0x80;
          FUN_10a1bd398(uVar13,&ppuStack_140);
        }
        uVar19 = 0x1d0;
        if (cRam00000001137eafac == '\0') {
          uVar19 = 0xffff;
        }
        lVar21 = 0x1d0;
        if (cRam00000001137eafac == '\0') {
          lVar21 = 0xffff;
        }
        if ((*(ushort *)((long)ppuVar24 + (0x129 - lVar21)) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          uVar19 = 0x1d0;
          if (cRam00000001137eafac == '\0') {
            uVar19 = 0xffff;
          }
          if (uVar13 != 0) {
            FUN_10a1bd648();
            uVar19 = 0x1d0;
            if (cRam00000001137eafac == '\0') {
              uVar19 = 0xffff;
            }
          }
        }
        FUN_10a1c054c((long)ppuVar24 + (0xd0 - (ulong)uVar19),&ppuStack_140);
      }
      goto LAB_10a333ab0;
    }
    *(long *)((long)ppuVar24 + lVar21 + 0xe0) = *(long *)((long)ppuVar24 + lVar21 + 0xe0) + 1;
  }
  else if ((*(ushort *)((long)ppuVar24 + lVar21 + 0x70) >> 8 & 1) == 0) goto LAB_10a33393c;
  unaff_x20 = *(undefined ***)((long)ppuVar24 + lVar21 + 0x130);
  ppuVar31 = *(undefined ***)((long)ppuVar24 + lVar21 + 0x78);
  if ((unaff_x20 != &PTR_DAT_110bc6830 || ppuVar31 != &PTR_DAT_110bc6830) &&
     (FUN_10a1bd5e0(), pppuVar10 != (undefined ***)0x0)) {
    if (unaff_x20 != &PTR_DAT_110bc6830) {
      FUN_10a1bd648(pppuVar10,(long)ppuVar24 + lVar21 + 0xd0,&PTR_DAT_110bc6830);
      *(undefined ***)((long)ppuVar24 + lVar21 + 0x130) = &PTR_DAT_110bc6830;
    }
    if (ppuVar31 != &PTR_DAT_110bc6830) {
      FUN_10a1bd7d8(pppuVar10,(long)ppuVar24 + lVar21 + 0x40,&PTR_DAT_110bc6830);
      *(undefined ***)((long)ppuVar24 + lVar21 + 0x78) = &PTR_DAT_110bc6830;
    }
  }
LAB_10a333ab0:
  ppuVar24 = (undefined **)ppuVar23[0x3d];
  if (ppuVar24 != ppuVar23 + 0x3e) {
    ppuVar31 = ppuVar9 + 0x3e;
LAB_10a333ad0:
    if (iStack_174 == 0) {
      FUN_10a34fcb0(&ppuStack_80,ppuVar24[8]);
    }
    else {
      FUN_10a34fa80(&ppuStack_80);
    }
    FUN_10a3500ac(&ppuStack_140,&ppuStack_80);
    ppuVar14 = ppuStack_80;
    ppuStack_80 = (undefined **)0x0;
    if (ppuVar14 != (undefined **)0x0) {
      (**(code **)(*ppuVar14 + 8))();
    }
    ppuVar14 = ppuVar24 + 4;
    ppuVar20 = (undefined **)*ppuVar31;
    if (ppuVar20 != (undefined **)0x0) {
      puVar30 = ppuVar24[7];
      ppuVar15 = ppuVar31;
      ppuVar27 = ppuVar20;
      do {
        lVar21 = 8;
        if (puVar30 <= ppuVar27[7]) {
          lVar21 = 0;
          ppuVar15 = ppuVar27;
        }
        ppuVar27 = *(undefined ***)((long)ppuVar27 + lVar21);
      } while (ppuVar27 != (undefined **)0x0);
      if ((ppuVar15 != ppuVar31) && (ppuVar15[7] <= puVar30)) {
        do {
          if (puVar30 < ppuVar20[7]) {
            ppuVar20 = (undefined **)*ppuVar20;
          }
          else {
            if (puVar30 <= ppuVar20[7]) goto LAB_10a333c34;
            ppuVar20 = (undefined **)ppuVar20[1];
          }
          if (ppuVar20 == (undefined **)0x0) {
            FUN_109ffdddc("map::at:  key not found");
            goto LAB_10a3349a0;
          }
        } while( true );
      }
    }
    ppuStack_88 = ppuStack_138;
    ppuStack_90 = ppuStack_140;
    if (ppuStack_138 != (undefined **)0x0) {
      ppuVar20 = ppuStack_138 + 1;
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
        if (bVar8) {
          *ppuVar20 = *ppuVar20 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    FUN_10a336c44(&ppuStack_80,ppuVar9 + 0x3d,&ppuStack_90,1,0,0);
    ppuVar20 = ppuStack_80;
    ppuStack_a0 = ppuVar14;
    FUN_10a36599c(ppuStack_80,ppuVar14,&UNK_10dd5b8f9,&ppuStack_a0,&ppuStack_b0);
    FUN_10a336cdc(ppuVar20 + 8,ppuStack_140,ppuStack_138);
    FUN_10a365790(&ppuStack_80);
    if (ppuStack_88 != (undefined **)0x0) {
      ppuVar14 = ppuStack_88 + 1;
      do {
        puVar30 = *ppuVar14;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
        if (bVar8) {
          *ppuVar14 = puVar30 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        ppuVar20 = ppuStack_88;
      } while (cVar5 != '\0');
      goto LAB_10a333be8;
    }
    goto LAB_10a333d70;
  }
LAB_10a333de0:
  ppuVar24 = (undefined **)ppuStack_180[0x52];
  ppuVar23 = ppuStack_180 + 0x53;
  if (ppuVar24 != ppuVar23) {
    ppuVar31 = ppuVar9 + 0x53;
LAB_10a333dfc:
    puVar30 = ppuVar24[8];
    if (iStack_174 == 0) {
      ppuVar14 = (undefined **)0x138;
      __Znwm();
      FUN_10a3502b4();
      if (ppuVar14[0x22] != *(undefined **)(puVar30 + 0x110)) {
        func_0x00010a350d34(ppuVar14 + 0x22,puVar30 + 0x110);
        func_0x00010a1bd170(&ppuStack_140);
        FUN_10a350b14(ppuVar14 + 0x22);
      }
      func_0x00010a35023c(ppuVar14 + 0x25,puVar30 + 0x128);
    }
    else {
      ppuStack_140 = (undefined **)0x0;
      ppuStack_138 = (undefined **)0x0;
      plVar11 = *(long **)(puVar30 + 0xf0);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x48))(&ppuStack_80,plVar11,0,0);
        ppuStack_138 = ppuStack_78;
        ppuStack_140 = ppuStack_80;
      }
      ppuVar14 = (undefined **)0x138;
      __Znwm();
      FUN_10a3502b4();
      ppuStack_80 = (undefined **)0x0;
      ppuStack_78 = (undefined **)0x0;
      if (*(long *)(puVar30 + 0x110) != 0) {
        unaff_x20 = (undefined **)0x78;
        __Znwm();
        ppuVar15 = unaff_x20 + 1;
        *ppuVar15 = (undefined *)0x0;
        unaff_x20[2] = (undefined *)0x0;
        ppuVar20 = unaff_x20 + 3;
        *unaff_x20 = (undefined *)&PTR_FUN_110bc82f0;
        FUN_10a350878(ppuVar20,puVar30 + 0x110);
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
          if (bVar8) {
            *ppuVar15 = *ppuVar15 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          ppuStack_80 = ppuVar20;
          ppuStack_78 = unaff_x20;
        } while (cVar5 != '\0');
      }
      ppuStack_90 = ppuStack_80;
      ppuStack_88 = ppuStack_78;
      func_0x00010a3501ec(ppuVar14 + 0x22,&ppuStack_90);
      ppuVar20 = ppuStack_88;
      if (ppuStack_88 != (undefined **)0x0) {
        ppuVar15 = ppuStack_88 + 1;
        do {
          puVar22 = *ppuVar15;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
          if (bVar8) {
            *ppuVar15 = puVar22 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar22 == (undefined *)0x0) {
          (**(code **)(*ppuStack_88 + 0x10))(ppuStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar20);
        }
      }
      func_0x00010a35023c(ppuVar14 + 0x25,puVar30 + 0x128);
      ppuVar20 = ppuStack_78;
      if (ppuStack_78 != (undefined **)0x0) {
        ppuVar15 = ppuStack_78 + 1;
        do {
          puVar30 = *ppuVar15;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
          if (bVar8) {
            *ppuVar15 = puVar30 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar30 == (undefined *)0x0) {
          (**(code **)(*ppuStack_78 + 0x10))(ppuStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar20);
        }
      }
      ppuVar20 = ppuStack_138;
      if (ppuStack_138 != (undefined **)0x0) {
        ppuVar15 = ppuStack_138 + 1;
        do {
          puVar30 = *ppuVar15;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
          if (bVar8) {
            *ppuVar15 = puVar30 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar30 == (undefined *)0x0) {
          (**(code **)(*ppuStack_138 + 0x10))(ppuStack_138);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar20);
        }
      }
    }
    ppuVar15 = (undefined **)0x20;
    ppuStack_a0 = ppuVar14;
    __Znwm();
    ppuVar27 = ppuVar15 + 1;
    *ppuVar27 = (undefined *)0x0;
    *ppuVar15 = (undefined *)&PTR_FUN_110bc5c38;
    ppuVar15[2] = (undefined *)0x0;
    ppuVar15[3] = (undefined *)ppuVar14;
    ppuStack_98 = ppuVar15;
    func_0x00010a350db0(&ppuStack_a0,ppuVar14 + 1,ppuVar14);
    ppuVar20 = ppuStack_a0;
    ppuVar14 = (undefined **)*ppuVar31;
    if (ppuVar14 != (undefined **)0x0) {
      puVar30 = ppuVar24[7];
      ppuVar29 = ppuVar31;
      ppuVar28 = ppuVar14;
      do {
        lVar21 = 8;
        if (puVar30 <= ppuVar28[7]) {
          lVar21 = 0;
          ppuVar29 = ppuVar28;
        }
        ppuVar28 = *(undefined ***)((long)ppuVar28 + lVar21);
      } while (ppuVar28 != (undefined **)0x0);
      if ((ppuVar29 != ppuVar31) && (ppuVar29[7] <= puVar30)) {
        do {
          if (puVar30 < ppuVar14[7]) {
            ppuVar14 = (undefined **)*ppuVar14;
          }
          else {
            if (puVar30 <= ppuVar14[7]) goto LAB_10a334108;
            ppuVar14 = (undefined **)ppuVar14[1];
          }
          if (ppuVar14 == (undefined **)0x0) {
            FUN_109ffdddc("map::at:  key not found");
            goto LAB_10a3349a0;
          }
        } while( true );
      }
    }
    ppuStack_80 = ppuStack_a0;
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar27,0x10);
      if (bVar8) {
        *ppuVar27 = *ppuVar27 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    ppuStack_78 = ppuVar15;
    FUN_10a3394bc(&ppuStack_140,ppuVar12,&ppuStack_80,1,0,0);
    ppuVar14 = ppuStack_140;
    FUN_10a35e960(ppuStack_140,ppuVar24[7],ppuVar24 + 4);
    FUN_10a339448(ppuVar14 + 8,ppuVar20,ppuVar15);
    FUN_10a35eb88(&ppuStack_140);
    if (ppuStack_78 != (undefined **)0x0) {
      ppuVar14 = ppuStack_78 + 1;
      do {
        puVar30 = *ppuVar14;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
        if (bVar8) {
          *ppuVar14 = puVar30 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        ppuVar20 = ppuStack_78;
      } while (cVar5 != '\0');
      goto LAB_10a3340bc;
    }
    goto LAB_10a334250;
  }
LAB_10a3342c0:
  ppuVar24 = (undefined **)ppuStack_180[0x55];
  ppuVar23 = ppuStack_180 + 0x56;
  if (ppuVar24 == ppuVar23) {
LAB_10a3347f0:
    puStack_188[1] = pppuStack_158;
    *puStack_188 = ppuStack_160;
    if (pppuStack_158 != (undefined ***)0x0) {
      pppuVar10 = pppuStack_158 + 1;
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
        if (bVar8) {
          *pppuVar10 = (undefined **)((long)*pppuVar10 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    puStack_188[2] = puStack_f0;
    (*(code *)ppuStack_e8[2])(puStack_188 + 3,&ppuStack_e8);
    puStack_f0 = &UNK_1053a6a3c;
    (*(code *)*ppuStack_e8)(&ppuStack_e8);
    ppuStack_e8 = &PTR_DAT_110ae9180;
    FUN_10a044790(&puStack_f0);
    pppuVar10 = &ppuStack_e8;
    (*(code *)*ppuStack_e8)();
    pppuVar16 = pppuStack_158;
    if (pppuStack_158 != (undefined ***)0x0) {
      pppuVar2 = pppuStack_158 + 1;
      do {
        ppuVar9 = *pppuVar2;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
        if (bVar8) {
          *pppuVar2 = (undefined **)((long)ppuVar9 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppuVar9 == (undefined **)0x0) {
        (*(code *)(*pppuStack_158)[2])(pppuStack_158);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppuVar10 = pppuVar16;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
    FUN_10a3320d4(ppuVar12);
    __ZdlPv();
    func_0x00010a36313c(&uStack_170);
    __Unwind_Resume(pppuVar10);
    pcStack_198 = FUN_10a334d34;
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_1b0 = unaff_x20;
    pppuStack_1a8 = pppuVar10;
    puStack_1a0 = &stack0xfffffffffffffff0;
    FUN_10a334dec(&uStack_210);
    extraout_x8[1] = ppuStack_208;
    *extraout_x8 = uStack_210;
    uStack_210 = 0;
    ppuStack_208 = (undefined8 **)0x0;
    FUN_10a044790(auStack_200);
    ppuVar17 = apuStack_1f8;
    (*(code *)*apuStack_1f8[0])();
    ppuVar18 = ppuStack_208;
    if (ppuStack_208 != (undefined8 **)0x0) {
      ppuVar3 = ppuStack_208 + 1;
      do {
        puVar25 = *ppuVar3;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
        if (bVar8) {
          *ppuVar3 = (undefined8 *)((long)puVar25 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (puVar25 == (undefined8 *)0x0) {
        (*(code *)(*ppuStack_208)[2])(ppuStack_208);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar17 = ppuVar18;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
      return;
    }
    ___stack_chk_fail();
    plVar11 = ppuVar17[0x32];
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 1;
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    FUN_10a332c1c();
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 1;
      do {
        lVar21 = *plVar1;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar11);
        return;
      }
    }
    return;
  }
  ppuVar31 = ppuVar9 + 0x56;
LAB_10a3342e4:
  puVar30 = ppuVar24[8];
  if (iStack_174 == 0) {
    ppuVar14 = (undefined **)0x130;
    __Znwm();
    FUN_10a350fa4();
    if (*(long *)(puVar30 + 0x110) == 0) {
      ppuStack_80 = (undefined **)0x0;
    }
    else {
      FUN_10a34fcb0(&ppuStack_80);
    }
    FUN_10a3500ac(&ppuStack_140,&ppuStack_80);
    FUN_10a32f00c(ppuVar14 + 0x22,&ppuStack_140);
    ppuVar12 = ppuStack_138;
    if (ppuStack_138 != (undefined **)0x0) {
      ppuVar20 = ppuStack_138 + 1;
      do {
        puVar22 = *ppuVar20;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
        if (bVar8) {
          *ppuVar20 = puVar22 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (puVar22 == (undefined *)0x0) {
        (**(code **)(*ppuStack_138 + 0x10))(ppuStack_138);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar12);
      }
    }
    ppuVar12 = ppuStack_80;
    ppuStack_80 = (undefined **)0x0;
    if (ppuVar12 != (undefined **)0x0) {
      (**(code **)(*ppuVar12 + 8))();
    }
    if (*(long *)(puVar30 + 0x120) == 0) {
      ppuStack_80 = (undefined **)0x0;
    }
    else {
      FUN_10a34fcb0(&ppuStack_80);
    }
    func_0x00010a350f2c(ppuVar14 + 0x24,&ppuStack_80);
    ppuVar12 = ppuStack_80;
    ppuStack_80 = (undefined **)0x0;
    if (ppuVar12 != (undefined **)0x0) {
      (**(code **)(*ppuVar12 + 8))();
    }
  }
  else {
    ppuStack_140 = (undefined **)0x0;
    ppuStack_138 = (undefined **)0x0;
    plVar11 = *(long **)(puVar30 + 0xf0);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x48))(&ppuStack_80,plVar11,0,0);
      ppuStack_138 = ppuStack_78;
      ppuStack_140 = ppuStack_80;
    }
    ppuVar14 = (undefined **)0x130;
    __Znwm();
    FUN_10a350fa4();
    if (*(long *)(puVar30 + 0x110) == 0) {
      ppuStack_a0 = (undefined **)0x0;
    }
    else {
      FUN_10a34fa80(&ppuStack_a0);
    }
    FUN_10a3500ac(&ppuStack_80,&ppuStack_a0);
    FUN_10a32f00c(ppuVar14 + 0x22,&ppuStack_80);
    ppuVar12 = ppuStack_78;
    if (ppuStack_78 != (undefined **)0x0) {
      ppuVar20 = ppuStack_78 + 1;
      do {
        puVar22 = *ppuVar20;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
        if (bVar8) {
          *ppuVar20 = puVar22 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (puVar22 == (undefined *)0x0) {
        (**(code **)(*ppuStack_78 + 0x10))(ppuStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar12);
      }
    }
    ppuVar12 = ppuStack_a0;
    ppuStack_a0 = (undefined **)0x0;
    if (ppuVar12 != (undefined **)0x0) {
      (**(code **)(*ppuVar12 + 8))();
    }
    if (*(long *)(puVar30 + 0x120) == 0) {
      ppuStack_a0 = (undefined **)0x0;
    }
    else {
      FUN_10a34fa80(&ppuStack_a0);
    }
    func_0x00010a350f2c(ppuVar14 + 0x24,&ppuStack_a0);
    ppuVar12 = ppuStack_a0;
    ppuStack_a0 = (undefined **)0x0;
    if (ppuVar12 != (undefined **)0x0) {
      (**(code **)(*ppuVar12 + 8))();
    }
    ppuVar12 = ppuStack_138;
    if (ppuStack_138 != (undefined **)0x0) {
      ppuVar20 = ppuStack_138 + 1;
      do {
        puVar30 = *ppuVar20;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
        if (bVar8) {
          *ppuVar20 = puVar30 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (puVar30 == (undefined *)0x0) {
        (**(code **)(*ppuStack_138 + 0x10))(ppuStack_138);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar12);
      }
    }
  }
  ppuVar12 = (undefined **)0x20;
  ppuStack_90 = ppuVar14;
  __Znwm();
  ppuVar15 = ppuVar12 + 1;
  *ppuVar15 = (undefined *)0x0;
  *ppuVar12 = (undefined *)&PTR_FUN_110bc5d68;
  ppuVar12[2] = (undefined *)0x0;
  ppuVar12[3] = (undefined *)ppuVar14;
  ppuStack_88 = ppuVar12;
  FUN_10a3514bc(&ppuStack_90,ppuVar14 + 1,ppuVar14);
  ppuVar20 = ppuStack_90;
  ppuVar14 = (undefined **)*ppuVar31;
  if (ppuVar14 != (undefined **)0x0) {
    puVar30 = ppuVar24[7];
    ppuVar27 = ppuVar31;
    ppuVar29 = ppuVar14;
    do {
      lVar21 = 8;
      if (puVar30 <= ppuVar29[7]) {
        lVar21 = 0;
        ppuVar27 = ppuVar29;
      }
      ppuVar29 = *(undefined ***)((long)ppuVar29 + lVar21);
    } while (ppuVar29 != (undefined **)0x0);
    if ((ppuVar27 != ppuVar31) && (ppuVar27[7] <= puVar30)) {
      do {
        if (puVar30 < ppuVar14[7]) {
          ppuVar14 = (undefined **)*ppuVar14;
        }
        else {
          if (puVar30 <= ppuVar14[7]) goto LAB_10a334638;
          ppuVar14 = (undefined **)ppuVar14[1];
        }
        if (ppuVar14 == (undefined **)0x0) {
          FUN_109ffdddc("map::at:  key not found");
LAB_10a3349a0:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10a3349a4);
          (*pcVar7)();
        }
      } while( true );
    }
  }
  ppuStack_80 = ppuStack_90;
  do {
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
    if (bVar8) {
      *ppuVar15 = *ppuVar15 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  ppuStack_78 = ppuVar12;
  FUN_10a339800(&ppuStack_140,ppuVar9 + 0x55,&ppuStack_80,1,0,0);
  ppuVar14 = ppuStack_140;
  FUN_10a35edac(ppuStack_140,ppuVar24[7],ppuVar24 + 4);
  FUN_10a3395c0(ppuVar14 + 8,ppuVar20,ppuVar12);
  FUN_10a35efa4(&ppuStack_140);
  if (ppuStack_78 != (undefined **)0x0) {
    ppuVar14 = ppuStack_78 + 1;
    do {
      puVar30 = *ppuVar14;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
      if (bVar8) {
        *ppuVar14 = puVar30 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      ppuVar20 = ppuStack_78;
    } while (cVar5 != '\0');
    goto LAB_10a3345ec;
  }
  goto LAB_10a334780;
LAB_10a333c34:
  ppuStack_b0 = (undefined **)ppuVar20[8];
  ppuStack_a8 = (undefined **)ppuVar20[9];
  if (ppuStack_a8 != (undefined **)0x0) {
    ppuVar20 = ppuStack_a8 + 1;
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
      if (bVar8) {
        *ppuVar20 = *ppuVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  ppuStack_98 = ppuStack_138;
  ppuStack_a0 = ppuStack_140;
  if (ppuStack_138 != (undefined **)0x0) {
    ppuVar20 = ppuStack_138 + 1;
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
      if (bVar8) {
        *ppuVar20 = *ppuVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (ppuStack_a8 != (undefined **)0x0) {
    ppuVar20 = ppuStack_a8 + 1;
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
      if (bVar8) {
        *ppuVar20 = *ppuVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  ppuStack_80 = ppuStack_b0;
  ppuStack_78 = ppuStack_a8;
  FUN_10a336c44(&ppuStack_90,ppuVar9 + 0x3d,&ppuStack_a0,1,&ppuStack_b0,1);
  ppuVar20 = ppuStack_90;
  ppuStack_148 = ppuVar14;
  FUN_10a36599c(ppuStack_90,ppuVar14,&UNK_10dd5b8f9,&ppuStack_148,&uStack_149);
  FUN_10a336cdc(ppuVar20 + 8,ppuStack_140,ppuStack_138);
  FUN_10a365790(&ppuStack_90);
  ppuVar14 = ppuStack_a8;
  if (ppuStack_a8 != (undefined **)0x0) {
    ppuVar20 = ppuStack_a8 + 1;
    do {
      puVar30 = *ppuVar20;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
      if (bVar8) {
        *ppuVar20 = puVar30 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar30 == (undefined *)0x0) {
      (**(code **)(*ppuStack_a8 + 0x10))(ppuStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
    }
  }
  ppuVar14 = ppuStack_98;
  if (ppuStack_98 != (undefined **)0x0) {
    ppuVar20 = ppuStack_98 + 1;
    do {
      puVar30 = *ppuVar20;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
      if (bVar8) {
        *ppuVar20 = puVar30 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar30 == (undefined *)0x0) {
      (**(code **)(*ppuStack_98 + 0x10))(ppuStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
    }
  }
  if (ppuStack_78 != (undefined **)0x0) {
    ppuVar14 = ppuStack_78 + 1;
    do {
      puVar30 = *ppuVar14;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
      if (bVar8) {
        *ppuVar14 = puVar30 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      ppuVar20 = ppuStack_78;
    } while (cVar5 != '\0');
LAB_10a333be8:
    if (puVar30 == (undefined *)0x0) {
      (**(code **)(*ppuVar20 + 0x10))(ppuVar20);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar20);
    }
  }
LAB_10a333d70:
  ppuVar14 = ppuStack_138;
  if (ppuStack_138 != (undefined **)0x0) {
    ppuVar20 = ppuStack_138 + 1;
    do {
      puVar30 = *ppuVar20;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
      if (bVar8) {
        *ppuVar20 = puVar30 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar30 == (undefined *)0x0) {
      (**(code **)(*ppuStack_138 + 0x10))(ppuStack_138);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
    }
  }
  ppuVar14 = (undefined **)ppuVar24[1];
  ppuVar20 = ppuVar24;
  if ((undefined **)ppuVar24[1] == (undefined **)0x0) {
    do {
      ppuVar24 = (undefined **)ppuVar20[2];
      bVar8 = (undefined **)*ppuVar24 != ppuVar20;
      ppuVar20 = ppuVar24;
    } while (bVar8);
  }
  else {
    do {
      ppuVar24 = ppuVar14;
      ppuVar14 = (undefined **)*ppuVar24;
    } while ((undefined **)*ppuVar24 != (undefined **)0x0);
  }
  if (ppuVar24 == ppuVar23 + 0x3e) goto LAB_10a333de0;
  goto LAB_10a333ad0;
LAB_10a334108:
  ppuStack_140 = (undefined **)ppuVar14[8];
  ppuStack_138 = (undefined **)ppuVar14[9];
  if (ppuStack_138 == (undefined **)0x0) {
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar27,0x10);
      if (bVar8) {
        *ppuVar27 = *ppuVar27 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    ppuStack_a8 = (undefined **)0x0;
  }
  else {
    ppuVar14 = ppuStack_138 + 1;
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
      if (bVar8) {
        *ppuVar14 = *ppuVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar27,0x10);
      if (bVar8) {
        *ppuVar27 = *ppuVar27 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
      if (bVar8) {
        *ppuVar14 = *ppuVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      ppuStack_a8 = ppuStack_138;
    } while (cVar5 != '\0');
  }
  ppuStack_90 = ppuStack_a0;
  ppuStack_b0 = ppuStack_140;
  ppuStack_88 = ppuVar15;
  FUN_10a3394bc(&ppuStack_80,ppuVar12,&ppuStack_90,1,&ppuStack_b0,1);
  ppuVar14 = ppuStack_80;
  FUN_10a35e960(ppuStack_80,ppuVar24[7],ppuVar24 + 4);
  FUN_10a339448(ppuVar14 + 8,ppuVar20,ppuVar15);
  FUN_10a35eb88(&ppuStack_80);
  ppuVar14 = ppuStack_a8;
  if (ppuStack_a8 != (undefined **)0x0) {
    ppuVar20 = ppuStack_a8 + 1;
    do {
      puVar30 = *ppuVar20;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
      if (bVar8) {
        *ppuVar20 = puVar30 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar30 == (undefined *)0x0) {
      (**(code **)(*ppuStack_a8 + 0x10))(ppuStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
    }
  }
  ppuVar14 = ppuStack_88;
  if (ppuStack_88 != (undefined **)0x0) {
    ppuVar20 = ppuStack_88 + 1;
    do {
      puVar30 = *ppuVar20;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
      if (bVar8) {
        *ppuVar20 = puVar30 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar30 == (undefined *)0x0) {
      (**(code **)(*ppuStack_88 + 0x10))(ppuStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
    }
  }
  if (ppuStack_138 != (undefined **)0x0) {
    ppuVar14 = ppuStack_138 + 1;
    do {
      puVar30 = *ppuVar14;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
      if (bVar8) {
        *ppuVar14 = puVar30 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      ppuVar20 = ppuStack_138;
    } while (cVar5 != '\0');
LAB_10a3340bc:
    if (puVar30 == (undefined *)0x0) {
      (**(code **)(*ppuVar20 + 0x10))(ppuVar20);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar20);
    }
  }
LAB_10a334250:
  ppuVar14 = ppuStack_98;
  if (ppuStack_98 != (undefined **)0x0) {
    ppuVar20 = ppuStack_98 + 1;
    do {
      puVar30 = *ppuVar20;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
      if (bVar8) {
        *ppuVar20 = puVar30 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar30 == (undefined *)0x0) {
      (**(code **)(*ppuStack_98 + 0x10))(ppuStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
    }
  }
  ppuVar14 = (undefined **)ppuVar24[1];
  ppuVar20 = ppuVar24;
  if ((undefined **)ppuVar24[1] == (undefined **)0x0) {
    do {
      ppuVar24 = (undefined **)ppuVar20[2];
      bVar8 = (undefined **)*ppuVar24 != ppuVar20;
      ppuVar20 = ppuVar24;
    } while (bVar8);
  }
  else {
    do {
      ppuVar24 = ppuVar14;
      ppuVar14 = (undefined **)*ppuVar24;
    } while ((undefined **)*ppuVar24 != (undefined **)0x0);
  }
  if (ppuVar24 == ppuVar23) goto LAB_10a3342c0;
  goto LAB_10a333dfc;
LAB_10a334638:
  ppuStack_140 = (undefined **)ppuVar14[8];
  ppuStack_138 = (undefined **)ppuVar14[9];
  if (ppuStack_138 == (undefined **)0x0) {
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
      if (bVar8) {
        *ppuVar15 = *ppuVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    ppuStack_a8 = (undefined **)0x0;
  }
  else {
    ppuVar14 = ppuStack_138 + 1;
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
      if (bVar8) {
        *ppuVar14 = *ppuVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
      if (bVar8) {
        *ppuVar15 = *ppuVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
      if (bVar8) {
        *ppuVar14 = *ppuVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      ppuStack_a8 = ppuStack_138;
    } while (cVar5 != '\0');
  }
  ppuStack_a0 = ppuStack_90;
  ppuStack_b0 = ppuStack_140;
  ppuStack_98 = ppuVar12;
  FUN_10a339800(&ppuStack_80,ppuVar9 + 0x55,&ppuStack_a0,1,&ppuStack_b0,1);
  ppuVar14 = ppuStack_80;
  FUN_10a35edac(ppuStack_80,ppuVar24[7],ppuVar24 + 4);
  FUN_10a3395c0(ppuVar14 + 8,ppuVar20,ppuVar12);
  FUN_10a35efa4(&ppuStack_80);
  ppuVar14 = ppuStack_a8;
  if (ppuStack_a8 != (undefined **)0x0) {
    ppuVar20 = ppuStack_a8 + 1;
    do {
      puVar30 = *ppuVar20;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
      if (bVar8) {
        *ppuVar20 = puVar30 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar30 == (undefined *)0x0) {
      (**(code **)(*ppuStack_a8 + 0x10))(ppuStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
    }
  }
  ppuVar14 = ppuStack_98;
  if (ppuStack_98 != (undefined **)0x0) {
    ppuVar20 = ppuStack_98 + 1;
    do {
      puVar30 = *ppuVar20;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
      if (bVar8) {
        *ppuVar20 = puVar30 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar30 == (undefined *)0x0) {
      (**(code **)(*ppuStack_98 + 0x10))(ppuStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
    }
  }
  if (ppuStack_138 != (undefined **)0x0) {
    ppuVar14 = ppuStack_138 + 1;
    do {
      puVar30 = *ppuVar14;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
      if (bVar8) {
        *ppuVar14 = puVar30 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      ppuVar20 = ppuStack_138;
    } while (cVar5 != '\0');
LAB_10a3345ec:
    if (puVar30 == (undefined *)0x0) {
      (**(code **)(*ppuVar20 + 0x10))(ppuVar20);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar20);
    }
  }
LAB_10a334780:
  ppuVar14 = ppuStack_88;
  if (ppuStack_88 != (undefined **)0x0) {
    ppuVar20 = ppuStack_88 + 1;
    do {
      puVar30 = *ppuVar20;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
      if (bVar8) {
        *ppuVar20 = puVar30 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar30 == (undefined *)0x0) {
      (**(code **)(*ppuStack_88 + 0x10))(ppuStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
    }
  }
  ppuVar14 = (undefined **)ppuVar24[1];
  ppuVar20 = ppuVar24;
  if ((undefined **)ppuVar24[1] == (undefined **)0x0) {
    do {
      ppuVar24 = (undefined **)ppuVar20[2];
      bVar8 = (undefined **)*ppuVar24 != ppuVar20;
      ppuVar20 = ppuVar24;
    } while (bVar8);
  }
  else {
    do {
      ppuVar24 = ppuVar14;
      ppuVar14 = (undefined **)*ppuVar24;
    } while ((undefined **)*ppuVar24 != (undefined **)0x0);
  }
  if (ppuVar24 == ppuVar23) goto LAB_10a3347f0;
  goto LAB_10a3342e4;
}



/* Entry: 10a334d34; end: 10a334deb;  */

void FUN_10a334d34(undefined8 *param_1)

{
  undefined8 **ppuVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined1 auStack_70 [8];
  undefined8 *apuStack_68 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a334dec(&uStack_80);
  param_1[1] = ppuStack_78;
  *param_1 = uStack_80;
  uStack_80 = 0;
  ppuStack_78 = (undefined8 **)0x0;
  FUN_10a044790(auStack_70);
  ppuVar6 = apuStack_68;
  (*(code *)*apuStack_68[0])();
  ppuVar7 = ppuStack_78;
  if (ppuStack_78 != (undefined8 **)0x0) {
    ppuVar1 = ppuStack_78 + 1;
    do {
      puVar8 = *ppuVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar5) {
        *ppuVar1 = (undefined8 *)((long)puVar8 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar8 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_78)[2])(ppuStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar6 = ppuVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  plVar3 = ppuVar6[0x32];
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10a332c1c();
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar3 + 1;
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
      (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
      return;
    }
  }
  return;
}



/* Entry: 10a334dec; end: 10a334e8f;  */

void FUN_10a334dec(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  uStack_30 = *(undefined8 *)(param_1 + 0x188);
  plStack_28 = *(long **)(param_1 + 400);
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
  FUN_10a332c1c(param_1,&uStack_30,1);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar1);
      return;
    }
  }
  return;
}



/* Entry: 10a334e90; end: 10a334f0b;  */

undefined8 * FUN_10a334e90(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a334f0c; end: 10a33506b;  */

undefined *** FUN_10a334f0c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 auStack_b8 [8];
  undefined8 *puStack_b0;
  undefined ***pppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_78 = (long *)param_2[1];
  uStack_80 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10a33506c(param_1 + 0x188,&uStack_80);
  plVar2 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  FUN_10a331268(param_1);
  puVar7 = (undefined8 *)(param_1 + 0x30);
  FUN_10a365df8(&lStack_90);
  uStack_50 = *(undefined8 *)(lStack_90 + 0x38);
  uStack_58 = *(undefined8 *)(lStack_90 + 0x30);
  if (*(long *)(lStack_90 + 0x38) != 0) {
    plVar2 = (long *)(*(long *)(lStack_90 + 0x38) + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_68 = 0x10a3635a8;
  ppuStack_60 = &PTR_FUN_110bc68e8;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  FUN_10a044790(&uStack_68);
  pppuVar5 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  func_0x00010a36313c(&uStack_80);
  pppuVar6 = pppuVar5;
  __Unwind_Resume();
  pcStack_98 = FUN_10a33506c;
  if (*pppuVar6 != (undefined **)*puVar7) {
    puStack_b0 = &uStack_68;
    pppuStack_a8 = pppuVar5;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x00010a365bb0(pppuVar6);
    func_0x00010a1bd170(auStack_b8);
    FUN_10a365c14(pppuVar6);
  }
  return pppuVar6;
}



/* Entry: 10a33506c; end: 10a3350bb;  */

long * FUN_10a33506c(long *param_1,long *param_2)

{
  undefined1 auStack_28 [8];
  
  if (*param_1 != *param_2) {
    func_0x00010a365bb0(param_1);
    func_0x00010a1bd170(auStack_28);
    FUN_10a365c14(param_1);
  }
  return param_1;
}



/* Entry: 10a3350bc; end: 10a33682f;  */

void FUN_10a3350bc(ulong param_1)

{
  undefined8 *******pppppppuVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  uint **ppuVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  long lVar11;
  undefined8 *******pppppppuVar12;
  uint *puVar13;
  uint **ppuVar14;
  uint *puVar15;
  long **pplVar16;
  undefined8 uVar17;
  undefined1 uVar18;
  int iVar19;
  long *plVar20;
  long lVar21;
  float *pfVar22;
  ulong uVar23;
  long *plVar24;
  long lVar25;
  float *pfVar26;
  undefined8 *puVar27;
  ulong uVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  long *plVar33;
  long **pplVar34;
  long *plVar35;
  long **pplVar36;
  long *plVar37;
  long *plVar38;
  long *plVar39;
  long **pplVar40;
  undefined8 *puVar41;
  long lVar42;
  float fVar43;
  uint uVar44;
  float fVar46;
  uint *puStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  ulong uStack_1e8;
  float fStack_1e0;
  long *plStack_1d0;
  long *plStack_1c8;
  uint *puStack_1c0;
  long *plStack_1b8;
  undefined8 *puStack_1b0;
  long lStack_1a8;
  float fStack_1a0;
  undefined8 ******ppppppuStack_190;
  long *plStack_188;
  undefined8 uStack_180;
  undefined8 ******ppppppuStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  float *pfStack_160;
  float *pfStack_158;
  undefined8 uStack_150;
  long *plStack_140;
  long *plStack_138;
  uint uStack_130;
  uint uStack_12c;
  undefined4 uStack_128;
  undefined2 uStack_124;
  undefined2 uStack_122;
  undefined6 uStack_120;
  undefined1 uStack_11a;
  char cStack_119;
  long *plStack_118;
  undefined8 ******ppppppuStack_110;
  long *plStack_108;
  ulong uStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  float *pfStack_e8;
  undefined8 uStack_e0;
  byte bStack_d8;
  uint uStack_d0;
  uint uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 ******ppppppuStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  long *plStack_98;
  byte bStack_90;
  long lStack_78;
  float *pfVar45;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = (uint **)CONCAT44(uStack_c8._4_4_,(uint)uStack_c8);
  if (((*(long *)(param_1 + 0x198) != 0) &&
      (ppuVar5 = (uint **)CONCAT44(uStack_c8._4_4_,(uint)uStack_c8),
      0x178 < *(int *)(*(long *)(*(long *)(param_1 + 0x198) + 0xa20) + 0x18))) &&
     (plVar38 = *(long **)(param_1 + 0x188),
     ppuVar5 = (uint **)CONCAT44(uStack_c8._4_4_,(uint)uStack_c8), plVar38 != (long *)0x0)) {
    (**(code **)(*plVar38 + 0x68))(plVar38,2);
    plVar30 = plVar38;
    (**(code **)(*plVar38 + 0x98))();
    uStack_130 = 0x5f53474e;
    uStack_12c = 0x47414c46;
    uStack_128 = 0x5441425f;
    uStack_124 = 0x4843;
    uStack_122 = 0x445f;
    uStack_120 = 0x544c55414645;
    uStack_11a = 0;
    cStack_119 = '\x16';
    plStack_118 = (long *)0x0;
    func_0x000107c2b080(&uStack_130);
    FUN_10a203c54(plVar30,&uStack_130);
    ppuVar5 = (uint **)CONCAT44(uStack_c8._4_4_,(uint)uStack_c8);
    if (cStack_119 < '\0') {
      __ZdlPv(CONCAT44(uStack_12c,uStack_130));
      ppuVar5 = (uint **)CONCAT44(uStack_c8._4_4_,(uint)uStack_c8);
    }
    if (plVar30 != (long *)0x0) {
      (**(code **)(*plVar38 + 0xa8))(&plStack_1d0,plVar38);
      if (plStack_1d0 != (long *)0x0) {
        plVar38 = (long *)plVar30[8];
        pfVar45 = (float *)0x0;
        plStack_1f8 = (long *)0x0;
        puStack_200 = (uint *)0x0;
        uStack_1e8 = 0;
        plStack_1f0 = (long *)0x0;
        fStack_1e0 = 1.0;
        plStack_1b8 = (long *)0x0;
        puStack_1c0 = (uint *)0x0;
        lStack_1a8 = 0;
        puStack_1b0 = (undefined8 *)0x0;
        fStack_1a0 = 1.0;
        if (plVar38 != (long *)0x0) {
          do {
            plStack_138 = (long *)(long)*(char *)((long)plVar38 + 0x27);
            if ((long)plStack_138 < 0) {
              plStack_140 = (long *)plVar38[2];
              plStack_138 = (long *)plVar38[3];
            }
            else {
              plStack_140 = plVar38 + 2;
            }
            pplVar40 = &plStack_140;
            FUN_10a3515d4(pplVar40,&DAT_10f6025a4,0);
            plVar33 = plStack_138;
            plVar30 = plStack_140;
            if ((pplVar40 == (long **)0xffffffffffffffff) && (plStack_138 != (long *)0x0)) {
              plVar31 = plStack_140;
              _memchr(plStack_140,0x3d,plStack_138);
              if ((plVar31 == (long *)0x0) ||
                 (plVar35 = (long *)((long)plVar31 - (long)plVar30),
                 plVar35 == (long *)0xffffffffffffffff)) goto LAB_10a33522c;
              plVar37 = plVar33;
              if (plVar35 <= plVar33) {
                plVar37 = plVar35;
              }
              if (plVar33 <= plVar35) goto LAB_10a33669c;
              if (plVar31 == plVar30) goto LAB_10a33522c;
              uVar28 = 0;
              plVar35 = (long *)((long)plVar35 + 1);
              lVar42 = (long)plVar30 + (long)plVar35;
              lVar25 = -1;
              do {
                if ((long)plVar37 + uVar28 == 0) goto LAB_10a33522c;
                lVar21 = (long)plVar30 + (long)plVar37 + uVar28;
                uVar28 = uVar28 - 1;
                lVar25 = lVar25 + 1;
              } while (*(char *)(lVar21 + -1) != '.');
              plVar31 = (long *)((long)plVar37 + uVar28);
              if ((long *)0xfffffffffffffffe < plVar31) goto LAB_10a33522c;
              plVar24 = plVar37;
              if (plVar31 <= plVar37) {
                plVar24 = plVar31;
              }
              if (plVar37 <= plVar31) goto LAB_10a33669c;
              if (((plVar33 == plVar35) || (plVar31 == (long *)0x0)) ||
                 (uVar28 == 0xffffffffffffffff)) goto LAB_10a33522c;
              plVar31 = (long *)0x0;
              plVar20 = (long *)~uVar28;
              pfStack_160 = (float *)0x0;
              pfStack_158 = (float *)0x0;
              uStack_150 = 0;
              plVar39 = plVar30;
              bVar6 = bStack_d8;
              do {
                ppuVar5 = (uint **)(((long)plVar33 - (long)plVar35) - (long)plVar31);
                if ((long *)((long)plVar33 - (long)plVar35) < plVar31) goto LAB_10a33547c;
                if (ppuVar5 == (uint **)0x0) {
                  lVar21 = -1;
                }
                else {
                  lVar11 = lVar42 + (long)plVar31;
                  _memchr(lVar11,0x2c,ppuVar5);
                  lVar21 = lVar11 - lVar42;
                  if (lVar11 == 0) {
                    lVar21 = -1;
                  }
                }
                ppuVar14 = ppuVar5;
                if ((uint **)(lVar21 - (long)plVar31) <= ppuVar5) {
                  ppuVar14 = (uint **)(lVar21 - (long)plVar31);
                }
                if (lVar21 != -1) {
                  ppuVar5 = ppuVar14;
                }
                if (ppuVar5 == (uint **)0x0) goto LAB_10a3354bc;
                if ((uint **)0x7ffffffffffffff7 < ppuVar5) {
                  uStack_130 = uStack_130 & 0xffffff00;
                  bStack_d8 = bVar6;
                  func_0x000109ffde50();
                  goto LAB_10a33682c;
                }
                if (ppuVar5 < (uint **)0x17) {
                  uStack_c0 = CONCAT17((char)ppuVar5,(undefined7)uStack_c0);
                  puVar15 = &uStack_d0;
                }
                else {
                  puVar13 = (uint *)0x19;
                  if (((ulong)ppuVar5 | 7) != 0x17) {
                    puVar13 = (uint *)(((ulong)ppuVar5 | 7) + 1);
                  }
                  puVar15 = puVar13;
                  __Znwm();
                  uStack_c0 = (ulong)puVar13 | 0x8000000000000000;
                  uStack_d0 = (uint)puVar15;
                  uStack_cc = (uint)((ulong)puVar15 >> 0x20);
                  plVar39 = plVar31;
                  uStack_c8 = ppuVar5;
                }
                _memmove(puVar15,lVar42 + (long)plVar31,ppuVar5);
                *(undefined1 *)((long)puVar15 + (long)ppuVar5) = 0;
                ppppppuStack_178 = (undefined8 *******)0x0;
                _strtof(&uStack_d0,&ppppppuStack_178);
                ppppppuStack_190 = (undefined8 ******)CONCAT44(ppppppuStack_190._4_4_,(uint)pfVar45)
                ;
                ppuVar5 = uStack_c8;
                puVar13 = (uint *)CONCAT44(uStack_cc,uStack_d0);
                if (-1 < (char)uStack_c0._7_1_) {
                  ppuVar5 = (uint **)(ulong)uStack_c0._7_1_;
                  puVar13 = &uStack_d0;
                }
                iVar19 = 1;
                if (((undefined8 *******)ppppppuStack_178 ==
                     (undefined8 *******)((long)puVar13 + (long)ppuVar5)) &&
                   (((uint)pfVar45 & 0x7fffffff) < 0x7f800000)) {
                  FUN_10a0ca014(&pfStack_160,&ppppppuStack_190);
                  if (lVar21 != -1) {
                    plVar31 = (long *)(lVar21 + 1);
                  }
                  iVar19 = 3;
                  if (lVar21 != -1) {
                    iVar19 = 0;
                  }
                  if ((long)uStack_c0 < 0) {
LAB_10a335468:
                    __ZdlPv(CONCAT44(uStack_cc,uStack_d0));
                  }
                }
                else {
                  bVar6 = 0;
                  if (((uint)(int)(char)uStack_c0._7_1_ >> 7 & 1) != 0) goto LAB_10a335468;
                }
              } while (iVar19 == 0);
              bStack_d8 = bVar6;
              if (iVar19 == 3) {
LAB_10a33547c:
                bStack_d8 = bVar6;
                uStack_130 = uStack_130 & 0xffffff00;
                plVar39 = plVar24;
                if (pfStack_160 == pfStack_158) {
LAB_10a3354bc:
                  bStack_d8 = 0;
                  goto LAB_10a3354d8;
                }
                if ((long *)0x7ffffffffffffff7 < plVar24) {
                  func_0x000109ffde50();
                  goto LAB_10a33682c;
                }
                if (plVar24 < (long *)0x17) {
                  uStack_168 = CONCAT17((char)plVar24,(undefined7)uStack_168);
                  pppppppuVar12 = &ppppppuStack_178;
                }
                else {
                  pppppppuVar1 = (undefined8 *******)0x19;
                  if (((ulong)plVar24 | 7) != 0x17) {
                    pppppppuVar1 = (undefined8 *******)(((ulong)plVar24 | 7) + 1);
                  }
                  pppppppuVar12 = pppppppuVar1;
                  __Znwm();
                  uStack_168 = (ulong)pppppppuVar1 | 0x8000000000000000;
                  ppppppuStack_178 = pppppppuVar12;
                  plStack_170 = plVar24;
                }
                _memmove(pppppppuVar12,plVar30,plVar24);
                *(undefined1 *)((long)pppppppuVar12 + (long)plVar24) = 0;
                uStack_c8._0_4_ = (uint)plStack_170;
                uStack_c8._4_4_ = (uint)((ulong)plStack_170 >> 0x20);
                uStack_d0 = (uint)ppppppuStack_178;
                uStack_cc = (uint)((ulong)ppppppuStack_178 >> 0x20);
                uStack_c0 = uStack_168;
                plStack_b8 = (long *)0x0;
                func_0x000107c2b080(&uStack_d0);
                if ((long *)0x7ffffffffffffff7 < plVar20) {
                  func_0x000109ffde50();
                  goto LAB_10a33682c;
                }
                if (plVar20 < (long *)0x17) {
                  uStack_180 = CONCAT17((char)plVar20,(undefined7)uStack_180);
                  pppppppuVar12 = &ppppppuStack_190;
                }
                else {
                  pppppppuVar1 = (undefined8 *******)0x19;
                  if (((ulong)plVar20 | 7) != 0x17) {
                    pppppppuVar1 = (undefined8 *******)(((ulong)plVar20 | 7) + 1);
                  }
                  pppppppuVar12 = pppppppuVar1;
                  __Znwm();
                  uStack_180 = (ulong)pppppppuVar1 | 0x8000000000000000;
                  ppppppuStack_190 = pppppppuVar12;
                  plStack_188 = plVar20;
                }
                _memmove(pppppppuVar12,(long)plVar30 + (long)plVar37 + uVar28 + 1,plVar20);
                *(undefined1 *)((long)pppppppuVar12 + lVar25) = 0;
                plStack_a8 = plStack_188;
                ppppppuStack_b0 = ppppppuStack_190;
                uStack_a0 = uStack_180;
                plStack_98 = (long *)0x0;
                func_0x000107c2b080(&ppppppuStack_b0);
                uVar28 = uStack_c0;
                uStack_128 = (uint)uStack_c8;
                uStack_124 = (undefined2)uStack_c8._4_4_;
                uStack_122 = (undefined2)(uStack_c8._4_4_ >> 0x10);
                uStack_130 = uStack_d0;
                uStack_12c = uStack_cc;
                uStack_d0 = 0;
                uStack_cc = 0;
                uStack_c8 = (uint **)0x0;
                uStack_c0 = 0;
                uStack_120 = (undefined6)uVar28;
                uStack_11a = (undefined1)(uVar28 >> 0x30);
                cStack_119 = (char)(uVar28 >> 0x38);
                plStack_118 = plStack_b8;
                plStack_108 = plStack_a8;
                ppppppuStack_110 = ppppppuStack_b0;
                uStack_100 = uStack_a0;
                ppppppuStack_b0 = (undefined8 ******)0x0;
                plStack_a8 = (long *)0x0;
                uStack_a0 = 0;
                plStack_f8 = plStack_98;
                pfStack_e8 = pfStack_158;
                uStack_f0 = pfStack_160;
                uStack_e0 = uStack_150;
                bStack_d8 = 1;
                plVar39 = plVar20;
                pfVar45 = pfStack_160;
LAB_10a335628:
                plVar33 = plStack_118;
                plVar30 = plStack_1f8;
                if (plStack_1f8 != (long *)0x0) {
                  uVar28 = (long)plStack_1f8 - 1;
                  if (((ulong)plStack_1f8 & uVar28) == 0) {
                    plVar39 = (long *)(uVar28 & (ulong)plStack_118);
                  }
                  else {
                    plVar39 = plStack_118;
                    if (plStack_1f8 <= plStack_118) {
                      uVar23 = 0;
                      if (plStack_1f8 != (long *)0x0) {
                        uVar23 = (ulong)plStack_118 / (ulong)plStack_1f8;
                      }
                      plVar39 = (long *)((long)plStack_118 - uVar23 * (long)plStack_1f8);
                    }
                  }
                  if (*(undefined8 **)(puStack_200 + (long)plVar39 * 2) != (undefined8 *)0x0) {
                    for (plVar31 = (long *)**(undefined8 **)(puStack_200 + (long)plVar39 * 2);
                        plVar31 != (long *)0x0; plVar31 = (long *)*plVar31) {
                      plVar35 = (long *)plVar31[1];
                      if (plVar35 == plStack_118) {
                        if ((long *)plVar31[5] == plStack_118) goto LAB_10a33599c;
                      }
                      else {
                        if (((ulong)plStack_1f8 & uVar28) == 0) {
                          plVar35 = (long *)((ulong)plVar35 & uVar28);
                        }
                        else if (plStack_1f8 <= plVar35) {
                          uVar23 = 0;
                          if (plStack_1f8 != (long *)0x0) {
                            uVar23 = (ulong)plVar35 / (ulong)plStack_1f8;
                          }
                          plVar35 = (long *)((long)plVar35 - uVar23 * (long)plStack_1f8);
                        }
                        if (plVar35 != plVar39) break;
                      }
                    }
                  }
                }
                plVar31 = (long *)0x58;
                __Znwm();
                uStack_c8 = &puStack_200;
                uStack_d0 = (uint)plVar31;
                uStack_cc = (uint)((ulong)plVar31 >> 0x20);
                uStack_c0 = 0;
                *plVar31 = 0;
                plVar31[1] = (long)plVar33;
                if (cStack_119 < '\0') {
                  func_0x000107c3192c(plVar31 + 2,CONCAT44(uStack_12c,uStack_130),
                                      CONCAT26(uStack_122,CONCAT24(uStack_124,uStack_128)));
                  plVar35 = plStack_118;
                }
                else {
                  plVar31[3] = CONCAT26(uStack_122,CONCAT24(uStack_124,uStack_128));
                  plVar31[2] = CONCAT44(uStack_12c,uStack_130);
                  plVar31[4] = CONCAT17(cStack_119,CONCAT16(uStack_11a,uStack_120));
                  plVar35 = plVar33;
                }
                plVar31[5] = (long)plVar35;
                plVar31[7] = 0;
                plVar31[6] = 0;
                plVar31[9] = 0;
                plVar31[8] = 0;
                *(undefined4 *)(plVar31 + 10) = 0x3f800000;
                uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
                fVar43 = (float)(uStack_1e8 + 1);
                pfVar45 = (float *)(ulong)(uint)fVar43;
                if ((plVar30 == (long *)0x0) || (fStack_1e0 * (float)plVar30 < fVar43)) {
                  uVar28 = 1;
                  if ((long *)0x2 < plVar30) {
                    uVar28 = (ulong)(((ulong)plVar30 & (long)plVar30 - 1U) != 0);
                  }
                  plVar30 = (long *)(uVar28 | (long)plVar30 << 1);
                  pfVar45 = (float *)(ulong)(uint)(fVar43 / fStack_1e0);
                  plVar35 = (long *)(long)(fVar43 / fStack_1e0);
                  if (plVar30 <= plVar35) {
                    plVar30 = plVar35;
                  }
                  if ((long)plVar30 - 1U == 0) {
                    plVar30 = (long *)0x2;
                  }
                  else if (((ulong)plVar30 & (long)plVar30 - 1U) != 0) {
                    __ZNSt3__112__next_primeEm();
                  }
                  plVar35 = plStack_1f8;
                  if (plStack_1f8 < plVar30) {
LAB_10a3357a8:
                    if ((ulong)plVar30 >> 0x3d != 0) {
                      func_0x000109ffded8();
                      goto LAB_10a33682c;
                    }
                    puVar13 = (uint *)((long)plVar30 << 3);
                    __Znwm();
                    bVar4 = puStack_200 != (uint *)0x0;
                    puStack_200 = puVar13;
                    if (bVar4) {
                      __ZdlPv();
                    }
                    plVar35 = (long *)0x0;
                    do {
                      (puStack_200 + (long)plVar35 * 2)[0] = 0;
                      (puStack_200 + (long)plVar35 * 2)[1] = 0;
                      plVar35 = (long *)((long)plVar35 + 1);
                    } while (plVar30 != plVar35);
                    plStack_1f8 = plVar30;
                    if (plStack_1f0 != (long *)0x0) {
                      plVar35 = (long *)plStack_1f0[1];
                      uVar28 = (long)plVar30 - 1;
                      if (((ulong)plVar30 & uVar28) == 0) {
                        plVar35 = (long *)((ulong)plVar35 & uVar28);
                      }
                      else if (plVar30 <= plVar35) {
                        uVar23 = 0;
                        if (plVar30 != (long *)0x0) {
                          uVar23 = (ulong)plVar35 / (ulong)plVar30;
                        }
                        plVar35 = (long *)((long)plVar35 - uVar23 * (long)plVar30);
                      }
                      *(long ***)(puStack_200 + (long)plVar35 * 2) = &plStack_1f0;
                      plVar37 = (long *)*plStack_1f0;
                      plVar24 = plStack_1f0;
                      while (plVar37 != (long *)0x0) {
                        plVar39 = (long *)plVar37[1];
                        if (((ulong)plVar30 & uVar28) == 0) {
                          plVar39 = (long *)((ulong)plVar39 & uVar28);
                        }
                        else if (plVar30 <= plVar39) {
                          uVar23 = 0;
                          if (plVar30 != (long *)0x0) {
                            uVar23 = (ulong)plVar39 / (ulong)plVar30;
                          }
                          plVar39 = (long *)((long)plVar39 - uVar23 * (long)plVar30);
                        }
                        plVar20 = plVar37;
                        if (plVar39 != plVar35) {
                          if (*(long *)(puStack_200 + (long)plVar39 * 2) == 0) {
                            *(long **)(puStack_200 + (long)plVar39 * 2) = plVar24;
                            plVar35 = plVar39;
                          }
                          else {
                            *plVar24 = *plVar37;
                            *plVar37 = **(long **)(puStack_200 + (long)plVar39 * 2);
                            **(undefined8 **)(puStack_200 + (long)plVar39 * 2) = plVar37;
                            plVar20 = plVar24;
                          }
                        }
                        plVar24 = plVar20;
                        plVar37 = (long *)*plVar20;
                      }
                    }
                  }
                  else if (plVar30 < plStack_1f8) {
                    pfVar45 = (float *)(ulong)(uint)((float)uStack_1e8 / fStack_1e0);
                    plVar37 = (long *)(long)((float)uStack_1e8 / fStack_1e0);
                    if ((plStack_1f8 < (long *)0x3) ||
                       (((ulong)plStack_1f8 & (long)plStack_1f8 - 1U) != 0)) {
                      __ZNSt3__112__next_primeEm();
                    }
                    else if ((long *)0x1 < plVar37) {
                      plVar37 = (long *)(1L << (-LZCOUNT((long)plVar37 + -1) & 0x3fU));
                    }
                    puVar13 = puStack_200;
                    if (plVar30 <= plVar37) {
                      plVar30 = plVar37;
                    }
                    if (plVar30 < plVar35) {
                      if (plVar30 != (long *)0x0) goto LAB_10a3357a8;
                      puStack_200 = (uint *)0x0;
                      if (puVar13 != (uint *)0x0) {
                        __ZdlPv();
                      }
                      plStack_1f8 = (long *)0x0;
                    }
                  }
                  plVar30 = plStack_1f8;
                  if (((ulong)plStack_1f8 & (long)plStack_1f8 - 1U) == 0) {
                    plVar39 = (long *)((long)plStack_1f8 - 1U & (ulong)plVar33);
                  }
                  else {
                    plVar39 = plVar33;
                    if (plStack_1f8 <= plVar33) {
                      uVar28 = 0;
                      if (plStack_1f8 != (long *)0x0) {
                        uVar28 = (ulong)plVar33 / (ulong)plStack_1f8;
                      }
                      plVar39 = (long *)((long)plVar33 - uVar28 * (long)plStack_1f8);
                    }
                  }
                }
                plVar33 = *(long **)(puStack_200 + (long)plVar39 * 2);
                if (plVar33 == (long *)0x0) {
                  *plVar31 = (long)plStack_1f0;
                  *(long ***)(puStack_200 + (long)plVar39 * 2) = &plStack_1f0;
                  plStack_1f0 = plVar31;
                  if (*plVar31 != 0) {
                    plVar33 = *(long **)(*plVar31 + 8);
                    if (((ulong)plVar30 & (long)plVar30 - 1U) == 0) {
                      plVar33 = (long *)((ulong)plVar33 & (long)plVar30 - 1U);
                    }
                    else if (plVar30 <= plVar33) {
                      uVar28 = 0;
                      if (plVar30 != (long *)0x0) {
                        uVar28 = (ulong)plVar33 / (ulong)plVar30;
                      }
                      plVar33 = (long *)((long)plVar33 - uVar28 * (long)plVar30);
                    }
                    *(long **)(puStack_200 + (long)plVar33 * 2) = plVar31;
                  }
                }
                else {
                  *plVar31 = *plVar33;
                  *plVar33 = (long)plVar31;
                }
                uStack_1e8 = uStack_1e8 + 1;
                if ((bStack_d8 & 1) == 0) goto LAB_10a33682c;
LAB_10a33599c:
                plVar35 = plStack_f8;
                ppuVar5 = (uint **)(plVar31 + 6);
                ppuVar14 = ppuVar5;
                FUN_10a351760(ppuVar5,plStack_f8);
                plVar33 = plStack_118;
                plVar30 = plStack_1b8;
                if (ppuVar14 == (uint **)0x0) {
                  plVar30 = (long *)plVar31[7];
                  if (plVar30 != (long *)0x0) {
                    uVar28 = (long)plVar30 - 1;
                    if (((ulong)plVar30 & uVar28) == 0) {
                      plVar39 = (long *)(uVar28 & (ulong)plVar35);
                    }
                    else {
                      plVar39 = plVar35;
                      if (plVar30 <= plVar35) {
                        uVar23 = 0;
                        if (plVar30 != (long *)0x0) {
                          uVar23 = (ulong)plVar35 / (ulong)plVar30;
                        }
                        plVar39 = (long *)((long)plVar35 - uVar23 * (long)plVar30);
                      }
                    }
                    plVar33 = *(long **)(*ppuVar5 + (long)plVar39 * 2);
                    if (plVar33 != (long *)0x0) {
                      do {
                        while( true ) {
                          plVar33 = (long *)*plVar33;
                          if (plVar33 == (long *)0x0) goto LAB_10a335bdc;
                          plVar37 = (long *)plVar33[1];
                          if (plVar37 != plVar35) break;
                          if ((long *)plVar33[5] == plVar35) goto LAB_10a335234;
                        }
                        if (((ulong)plVar30 & uVar28) == 0) {
                          plVar37 = (long *)((ulong)plVar37 & uVar28);
                        }
                        else if (plVar30 <= plVar37) {
                          uVar23 = 0;
                          if (plVar30 != (long *)0x0) {
                            uVar23 = (ulong)plVar37 / (ulong)plVar30;
                          }
                          plVar37 = (long *)((long)plVar37 - uVar23 * (long)plVar30);
                        }
                      } while (plVar37 == plVar39);
                    }
                  }
LAB_10a335bdc:
                  plVar33 = (long *)0x48;
                  __Znwm();
                  uStack_d0 = (uint)plVar33;
                  uStack_cc = (uint)((ulong)plVar33 >> 0x20);
                  uStack_c0 = 0;
                  *plVar33 = 0;
                  plVar33[1] = (long)plVar35;
                  uStack_c8 = ppuVar5;
                  if ((long)uStack_100 < 0) {
                    func_0x000107c3192c(plVar33 + 2,ppppppuStack_110,plStack_108);
                    plVar37 = plStack_f8;
                  }
                  else {
                    plVar33[3] = (long)plStack_108;
                    plVar33[2] = (long)ppppppuStack_110;
                    plVar33[4] = uStack_100;
                    plVar37 = plVar35;
                  }
                  plVar33[6] = 0;
                  plVar33[5] = (long)plVar37;
                  plVar33[7] = 0;
                  plVar33[8] = 0;
                  FUN_10a0ca588();
                  uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
                  fVar43 = (float)(plVar31[9] + 1);
                  pfVar45 = (float *)(ulong)(uint)fVar43;
                  if ((plVar30 == (long *)0x0) ||
                     (*(float *)(plVar31 + 10) * (float)plVar30 < fVar43)) {
                    uVar28 = 1;
                    if ((long *)0x2 < plVar30) {
                      uVar28 = (ulong)(((ulong)plVar30 & (long)plVar30 - 1U) != 0);
                    }
                    plVar37 = (long *)(uVar28 | (long)plVar30 << 1);
                    fVar43 = fVar43 / *(float *)(plVar31 + 10);
                    pfVar45 = (float *)(ulong)(uint)fVar43;
                    plVar30 = (long *)(long)fVar43;
                    if (plVar37 <= plVar30) {
                      plVar37 = plVar30;
                    }
                    if ((long)plVar37 - 1U == 0) {
                      plVar37 = (long *)0x2;
                    }
                    else if (((ulong)plVar37 & (long)plVar37 - 1U) != 0) {
                      __ZNSt3__112__next_primeEm();
                    }
                    plVar30 = (long *)plVar31[7];
                    if (plVar30 < plVar37) {
LAB_10a335cd4:
                      if ((ulong)plVar37 >> 0x3d != 0) {
                        func_0x000109ffded8();
                        goto LAB_10a33682c;
                      }
                      puVar13 = (uint *)((long)plVar37 << 3);
                      __Znwm();
                      puVar15 = *ppuVar5;
                      *ppuVar5 = puVar13;
                      if (puVar15 != (uint *)0x0) {
                        __ZdlPv();
                      }
                      plVar30 = (long *)0x0;
                      plVar31[7] = (long)plVar37;
                      do {
                        puVar13 = *ppuVar5;
                        (puVar13 + (long)plVar30 * 2)[0] = 0;
                        (puVar13 + (long)plVar30 * 2)[1] = 0;
                        plVar30 = (long *)((long)plVar30 + 1);
                      } while (plVar37 != plVar30);
                      plVar24 = (long *)plVar31[8];
                      plVar30 = plVar37;
                      if (plVar24 != (long *)0x0) {
                        plVar39 = (long *)plVar24[1];
                        uVar28 = (long)plVar37 - 1;
                        if (((ulong)plVar37 & uVar28) == 0) {
                          plVar39 = (long *)((ulong)plVar39 & uVar28);
                        }
                        else if (plVar37 <= plVar39) {
                          uVar23 = 0;
                          if (plVar37 != (long *)0x0) {
                            uVar23 = (ulong)plVar39 / (ulong)plVar37;
                          }
                          plVar39 = (long *)((long)plVar39 - uVar23 * (long)plVar37);
                        }
                        *(long **)(*ppuVar5 + (long)plVar39 * 2) = plVar31 + 8;
                        plVar20 = (long *)*plVar24;
                        while (plVar20 != (long *)0x0) {
                          plVar32 = (long *)plVar20[1];
                          if (((ulong)plVar37 & uVar28) == 0) {
                            plVar32 = (long *)((ulong)plVar32 & uVar28);
                          }
                          else if (plVar37 <= plVar32) {
                            uVar23 = 0;
                            if (plVar37 != (long *)0x0) {
                              uVar23 = (ulong)plVar32 / (ulong)plVar37;
                            }
                            plVar32 = (long *)((long)plVar32 - uVar23 * (long)plVar37);
                          }
                          plVar29 = plVar20;
                          if (plVar32 != plVar39) {
                            puVar13 = *ppuVar5;
                            if (*(long *)(puVar13 + (long)plVar32 * 2) == 0) {
                              *(long **)(puVar13 + (long)plVar32 * 2) = plVar24;
                              plVar39 = plVar32;
                            }
                            else {
                              *plVar24 = *plVar20;
                              *plVar20 = **(undefined8 **)(puVar13 + (long)plVar32 * 2);
                              **(long **)(puVar13 + (long)plVar32 * 2) = (long)plVar20;
                              plVar29 = plVar24;
                            }
                          }
                          plVar24 = plVar29;
                          plVar20 = (long *)*plVar29;
                        }
                      }
                    }
                    else if (plVar37 < plVar30) {
                      pfVar45 = (float *)(ulong)(uint)((float)(ulong)plVar31[9] /
                                                      *(float *)(plVar31 + 10));
                      plVar24 = (long *)(long)((float)(ulong)plVar31[9] / *(float *)(plVar31 + 10));
                      if ((plVar30 < (long *)0x3) || (((ulong)plVar30 & (long)plVar30 - 1U) != 0)) {
                        __ZNSt3__112__next_primeEm();
                      }
                      else if ((long *)0x1 < plVar24) {
                        plVar24 = (long *)(1L << (-LZCOUNT((long)plVar24 + -1) & 0x3fU));
                      }
                      if (plVar37 <= plVar24) {
                        plVar37 = plVar24;
                      }
                      if (plVar37 < plVar30) {
                        if (plVar37 != (long *)0x0) goto LAB_10a335cd4;
                        puVar13 = *ppuVar5;
                        *ppuVar5 = (uint *)0x0;
                        if (puVar13 != (uint *)0x0) {
                          __ZdlPv();
                        }
                        plVar31[7] = 0;
                        plVar30 = (long *)0x0;
                      }
                      else {
                        plVar30 = (long *)plVar31[7];
                      }
                    }
                    if (((ulong)plVar30 & (long)plVar30 - 1U) == 0) {
                      plVar39 = (long *)((long)plVar30 - 1U & (ulong)plVar35);
                    }
                    else {
                      plVar39 = plVar35;
                      if (plVar30 <= plVar35) {
                        uVar28 = 0;
                        if (plVar30 != (long *)0x0) {
                          uVar28 = (ulong)plVar35 / (ulong)plVar30;
                        }
                        plVar39 = (long *)((long)plVar35 - uVar28 * (long)plVar30);
                      }
                    }
                  }
                  puVar13 = *ppuVar5;
                  plVar35 = *(long **)(puVar13 + (long)plVar39 * 2);
                  if (plVar35 == (long *)0x0) {
                    plVar35 = plVar31 + 8;
                    *plVar33 = *plVar35;
                    *plVar35 = (long)plVar33;
                    *(long **)(puVar13 + (long)plVar39 * 2) = plVar35;
                    if (*plVar33 != 0) {
                      plVar35 = *(long **)(*plVar33 + 8);
                      if (((ulong)plVar30 & (long)plVar30 - 1U) == 0) {
                        plVar35 = (long *)((ulong)plVar35 & (long)plVar30 - 1U);
                      }
                      else if (plVar30 <= plVar35) {
                        uVar28 = 0;
                        if (plVar30 != (long *)0x0) {
                          uVar28 = (ulong)plVar35 / (ulong)plVar30;
                        }
                        plVar35 = (long *)((long)plVar35 - uVar28 * (long)plVar30);
                      }
                      *(long **)(*ppuVar5 + (long)plVar35 * 2) = plVar33;
                    }
                  }
                  else {
                    *plVar33 = *plVar35;
                    *plVar35 = (long)plVar33;
                  }
                  plVar31[9] = plVar31[9] + 1;
                }
                else {
                  pfVar22 = (float *)ppuVar14[6];
                  pfVar26 = uStack_f0;
                  if ((long)ppuVar14[7] - (long)ppuVar14[6] == (long)pfStack_e8 - (long)uStack_f0) {
                    do {
                      if (pfVar22 == (float *)ppuVar14[7]) goto LAB_10a335234;
                      fVar43 = *pfVar22;
                      pfVar45 = (float *)(ulong)(uint)fVar43;
                      fVar46 = *pfVar26;
                      pfVar22 = pfVar22 + 1;
                      pfVar26 = pfVar26 + 1;
                    } while (fVar43 == fVar46);
                  }
                  if (plStack_1b8 != (long *)0x0) {
                    uVar28 = (long)plStack_1b8 - 1;
                    if (((ulong)plStack_1b8 & uVar28) == 0) {
                      plVar35 = (long *)(uVar28 & (ulong)plStack_118);
                    }
                    else {
                      plVar35 = plStack_118;
                      if (plStack_1b8 <= plStack_118) {
                        uVar23 = 0;
                        if (plStack_1b8 != (long *)0x0) {
                          uVar23 = (ulong)plStack_118 / (ulong)plStack_1b8;
                        }
                        plVar35 = (long *)((long)plStack_118 - uVar23 * (long)plStack_1b8);
                      }
                    }
                    plVar31 = *(long **)(puStack_1c0 + (long)plVar35 * 2);
                    if (plVar31 != (long *)0x0) {
                      do {
                        while( true ) {
                          plVar31 = (long *)*plVar31;
                          if (plVar31 == (long *)0x0) goto LAB_10a335a9c;
                          plVar37 = (long *)plVar31[1];
                          if (plVar37 != plStack_118) break;
                          if ((long *)plVar31[5] == plStack_118) goto LAB_10a335e64;
                        }
                        if (((ulong)plStack_1b8 & uVar28) == 0) {
                          plVar37 = (long *)((ulong)plVar37 & uVar28);
                        }
                        else if (plStack_1b8 <= plVar37) {
                          uVar23 = 0;
                          if (plStack_1b8 != (long *)0x0) {
                            uVar23 = (ulong)plVar37 / (ulong)plStack_1b8;
                          }
                          plVar37 = (long *)((long)plVar37 - uVar23 * (long)plStack_1b8);
                        }
                      } while (plVar37 == plVar35);
                    }
                  }
LAB_10a335a9c:
                  puVar41 = (undefined8 *)0x58;
                  __Znwm();
                  uStack_c8 = &puStack_1c0;
                  uStack_d0 = (uint)puVar41;
                  uStack_cc = (uint)((ulong)puVar41 >> 0x20);
                  uStack_c0 = 0;
                  *puVar41 = 0;
                  puVar41[1] = plVar33;
                  if (cStack_119 < '\0') {
                    func_0x000107c3192c(puVar41 + 2,CONCAT44(uStack_12c,uStack_130),
                                        CONCAT26(uStack_122,CONCAT24(uStack_124,uStack_128)));
                    plVar31 = plStack_118;
                  }
                  else {
                    puVar41[3] = CONCAT26(uStack_122,CONCAT24(uStack_124,uStack_128));
                    puVar41[2] = CONCAT44(uStack_12c,uStack_130);
                    puVar41[4] = CONCAT17(cStack_119,CONCAT16(uStack_11a,uStack_120));
                    plVar31 = plVar33;
                  }
                  puVar41[5] = plVar31;
                  puVar41[7] = 0;
                  puVar41[6] = 0;
                  puVar41[9] = 0;
                  puVar41[8] = 0;
                  *(undefined4 *)(puVar41 + 10) = 0x3f800000;
                  uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
                  fVar43 = (float)(lStack_1a8 + 1);
                  pfVar45 = (float *)(ulong)(uint)fVar43;
                  if ((plVar30 == (long *)0x0) || (fStack_1a0 * (float)plVar30 < fVar43)) {
                    uVar28 = 1;
                    if ((long *)0x2 < plVar30) {
                      uVar28 = (ulong)(((ulong)plVar30 & (long)plVar30 - 1U) != 0);
                    }
                    uVar28 = uVar28 | (long)plVar30 << 1;
                    pfVar45 = (float *)(ulong)(uint)(fVar43 / fStack_1a0);
                    uVar23 = (ulong)(fVar43 / fStack_1a0);
                    if (uVar28 <= uVar23) {
                      uVar28 = uVar23;
                    }
                    FUN_10a275048(&puStack_1c0,uVar28);
                    plVar30 = plStack_1b8;
                    if (((ulong)plStack_1b8 & (long)plStack_1b8 - 1U) == 0) {
                      plVar35 = (long *)((long)plStack_1b8 - 1U & (ulong)plVar33);
                    }
                    else {
                      plVar35 = plVar33;
                      if (plStack_1b8 <= plVar33) {
                        uVar28 = 0;
                        if (plStack_1b8 != (long *)0x0) {
                          uVar28 = (ulong)plVar33 / (ulong)plStack_1b8;
                        }
                        plVar35 = (long *)((long)plVar33 - uVar28 * (long)plStack_1b8);
                      }
                    }
                  }
                  puVar27 = *(undefined8 **)(puStack_1c0 + (long)plVar35 * 2);
                  puVar41 = (undefined8 *)CONCAT44(uStack_cc,uStack_d0);
                  if (puVar27 == (undefined8 *)0x0) {
                    *puVar41 = puStack_1b0;
                    *(undefined8 ***)(puStack_1c0 + (long)plVar35 * 2) = &puStack_1b0;
                    lVar25 = *(long *)CONCAT44(uStack_cc,uStack_d0);
                    puStack_1b0 = puVar41;
                    if (lVar25 != 0) {
                      plVar33 = *(long **)(lVar25 + 8);
                      if (((ulong)plVar30 & (long)plVar30 - 1U) == 0) {
                        plVar33 = (long *)((ulong)plVar33 & (long)plVar30 - 1U);
                      }
                      else if (plVar30 <= plVar33) {
                        uVar28 = 0;
                        if (plVar30 != (long *)0x0) {
                          uVar28 = (ulong)plVar33 / (ulong)plVar30;
                        }
                        plVar33 = (long *)((long)plVar33 - uVar28 * (long)plVar30);
                      }
                      *(long **)(puStack_1c0 + (long)plVar33 * 2) =
                           (long *)CONCAT44(uStack_cc,uStack_d0);
                    }
                  }
                  else {
                    *puVar41 = *puVar27;
                    *puVar27 = puVar41;
                  }
                  plVar31 = (long *)CONCAT44(uStack_cc,uStack_d0);
                  lStack_1a8 = lStack_1a8 + 1;
                  if ((bStack_d8 & 1) == 0) goto LAB_10a33682c;
LAB_10a335e64:
                  FUN_10a2757c4((long)plVar31 + 0x30,&ppppppuStack_110,&ppppppuStack_110);
                }
              }
              else {
LAB_10a3354d8:
                uStack_130 = uStack_130 & 0xffffff00;
                if (pfStack_160 != (float *)0x0) {
                  pfStack_158 = pfStack_160;
                  __ZdlPv();
                }
                if ((bStack_d8 & 1) != 0) goto LAB_10a335628;
              }
            }
            else {
LAB_10a33522c:
              uStack_130 = uStack_130 & 0xffffff00;
              bStack_d8 = 0;
            }
LAB_10a335234:
            func_0x00010a351844(&uStack_130);
            plVar38 = (long *)*plVar38;
          } while (plVar38 != (long *)0x0);
          puVar41 = puStack_1b0;
          if (puStack_1b0 != (undefined8 *)0x0) {
LAB_10a335ffc:
            if (plStack_1f8 != (long *)0x0) {
              plVar38 = (long *)puVar41[5];
              uVar28 = (long)plStack_1f8 - 1;
              if (((ulong)plStack_1f8 & uVar28) == 0) {
                plVar30 = (long *)(uVar28 & (ulong)plVar38);
              }
              else {
                plVar30 = plVar38;
                if (plStack_1f8 <= plVar38) {
                  uVar23 = 0;
                  if (plStack_1f8 != (long *)0x0) {
                    uVar23 = (ulong)plVar38 / (ulong)plStack_1f8;
                  }
                  plVar30 = (long *)((long)plVar38 - uVar23 * (long)plStack_1f8);
                }
              }
              if (*(undefined8 **)(puStack_200 + (long)plVar30 * 2) != (undefined8 *)0x0) {
                for (pplVar40 = (long **)**(undefined8 **)(puStack_200 + (long)plVar30 * 2);
                    pplVar40 != (long **)0x0; pplVar40 = (long **)*pplVar40) {
                  plVar33 = pplVar40[1];
                  if (plVar33 == plVar38) {
                    if (pplVar40[5] == plVar38) {
                      plVar38 = (long *)puVar41[8];
                      if (plVar38 == (long *)0x0) goto LAB_10a3361d4;
                      goto LAB_10a3360a0;
                    }
                  }
                  else {
                    if (((ulong)plStack_1f8 & uVar28) == 0) {
                      plVar33 = (long *)((ulong)plVar33 & uVar28);
                    }
                    else if (plStack_1f8 <= plVar33) {
                      uVar23 = 0;
                      if (plStack_1f8 != (long *)0x0) {
                        uVar23 = (ulong)plVar33 / (ulong)plStack_1f8;
                      }
                      plVar33 = (long *)((long)plVar33 - uVar23 * (long)plStack_1f8);
                    }
                    if (plVar33 != plVar30) break;
                  }
                }
              }
            }
            goto LAB_10a3362f8;
          }
        }
LAB_10a336300:
        FUN_10a1f7334(&puStack_1c0);
        if (plStack_1f0 != (long *)0x0) {
          plVar38 = plStack_1f0;
          do {
            lVar25 = *plStack_1d0;
            if (lVar25 != plStack_1d0[1]) {
LAB_10a33633c:
              if (*(long *)(lVar25 + 0x18) != plVar38[5]) goto code_r0x00010a336348;
              for (plVar30 = (long *)plVar38[8]; plVar30 != (long *)0x0; plVar30 = (long *)*plVar30)
              {
                uVar28 = param_1;
                FUN_10a336830(param_1,plVar30 + 2);
                if ((uVar28 & 1) == 0) {
                  lVar42 = *(long *)(lVar25 + 0x20);
                  if (lVar42 != *(long *)(lVar25 + 0x28)) {
                    do {
                      if (*(long *)(lVar42 + 0x18) == plVar30[5]) {
                        puVar13 = (uint *)plVar30[6];
                        lVar21 = plVar30[7] - (long)puVar13;
                        ppuVar5 = uStack_c8;
                        if (lVar21 == 0) {
LAB_10a336504:
                          uStack_130 = uStack_130 & 0xffffff00;
                          uStack_f0._0_5_ = (uint5)(uint)uStack_f0;
                        }
                        else {
                          uVar2 = *(ushort *)(lVar42 + 0x20);
                          uVar44 = *puVar13;
                          ppuVar14 = (uint **)CONCAT44(uStack_c8._4_4_,uVar44);
                          if (uVar2 < 8) {
                            if (uVar2 == 3) {
                              if (lVar21 == 4) {
                                uStack_f0 = (float *)((ulong)uStack_f0._1_7_ << 8);
LAB_10a336610:
                                uStack_f0._0_5_ = CONCAT14(1,(uint)uStack_f0);
                                uStack_130 = uVar44;
                                goto LAB_10a33650c;
                              }
                            }
                            else if (uVar2 == 7) {
                              if (lVar21 == 4) {
                                bStack_90 = 3;
                                uVar17 = 3;
                                uStack_cc = uVar44;
                                ppuVar14 = uStack_c8;
                                goto LAB_10a3364b8;
                              }
                              if (lVar21 == 8) {
                                uStack_12c = puVar13[1];
                                uVar18 = 3;
                                goto LAB_10a3364fc;
                              }
                            }
                            goto LAB_10a336504;
                          }
                          if (uVar2 == 8) {
                            if (lVar21 != 4) {
                              if (lVar21 == 0xc) {
                                uStack_12c = (uint)*(undefined8 *)(puVar13 + 1);
                                uStack_128 = (undefined4)
                                             ((ulong)*(undefined8 *)(puVar13 + 1) >> 0x20);
                                uVar18 = 4;
LAB_10a3364fc:
                                uStack_f0 = (float *)CONCAT71(uStack_f0._1_7_,uVar18);
                                goto LAB_10a336610;
                              }
                              goto LAB_10a336504;
                            }
                            bStack_90 = 4;
                            uVar17 = 4;
                            uStack_cc = uVar44;
                          }
                          else {
                            if (uVar2 != 9) goto LAB_10a336504;
                            uVar7 = uVar44;
                            uVar8 = uVar44;
                            uVar9 = uVar44;
                            if (lVar21 != 4) {
                              if (lVar21 >> 2 == 4) {
                                uStack_12c = (uint)*(undefined8 *)(puVar13 + 1);
                                uStack_128 = (undefined4)
                                             ((ulong)*(undefined8 *)(puVar13 + 1) >> 0x20);
                                uStack_124 = (undefined2)puVar13[3];
                                uStack_122 = (undefined2)(puVar13[3] >> 0x10);
                                uStack_f0 = (float *)CONCAT71(uStack_f0._1_7_,5);
                                goto LAB_10a336610;
                              }
                              if (lVar21 >> 2 != 3) goto LAB_10a336504;
                              uStack_cc = (uint)*(undefined8 *)(puVar13 + 1);
                              uStack_c8._0_4_ = (uint)((ulong)*(undefined8 *)(puVar13 + 1) >> 0x20);
                              uStack_c8._4_4_ = 0;
                              uVar7 = uStack_cc;
                              uVar8 = (uint)uStack_c8;
                              uVar9 = uStack_c8._4_4_;
                            }
                            uStack_c8._4_4_ = uVar9;
                            uStack_c8._0_4_ = uVar8;
                            uStack_cc = uVar7;
                            ppuVar14 = (uint **)CONCAT44(uStack_c8._4_4_,(uint)uStack_c8);
                            bStack_90 = 5;
                            uVar17 = 5;
                          }
LAB_10a3364b8:
                          uStack_f0._0_1_ = 0x10;
                          puStack_1c0 = &uStack_130;
                          uStack_d0 = uVar44;
                          uStack_c8 = ppuVar14;
                          FUN_10a351904(&puStack_1c0,&uStack_d0,uVar17);
                          uStack_f0 = (float *)CONCAT71(uStack_f0._1_7_,bStack_90);
                          uVar17 = uStack_f0;
                          uStack_f0._0_4_ = (uint)uVar17;
                          uStack_f0._0_5_ = CONCAT14(1,(uint)uStack_f0);
                          if (0x10 < (ulong)bStack_90) goto LAB_10a33682c;
                          (*(code *)(&PTR_FUN_110ba1f88)[bStack_90])(&uStack_d0);
                          ppuVar5 = uStack_c8;
                        }
LAB_10a33650c:
                        uStack_c8._4_4_ = (uint)((ulong)ppuVar5 >> 0x20);
                        if (uStack_f0._4_1_ == '\x01') {
                          uVar2 = *(ushort *)(lVar42 + 0x20);
                          uStack_c8 = ppuVar5;
                          if (uVar2 < 8) {
                            if (uVar2 == 3) {
                              FUN_10a0d9bd4(param_1,plVar30 + 2,&uStack_130);
                              ppuVar5 = uStack_c8;
                            }
                            else if (uVar2 == 7) {
                              FUN_10a0da430(param_1,plVar30 + 2,&uStack_130);
                              ppuVar5 = uStack_c8;
                            }
                          }
                          else if (uVar2 == 8) {
                            FUN_10a0d9d6c(param_1,plVar30 + 2,&uStack_130);
                            ppuVar5 = uStack_c8;
                          }
                          else if (uVar2 == 9) {
                            puVar41 = (undefined8 *)plVar30[6];
                            if (plVar30[7] - (long)puVar41 == 0xc) {
                              uStack_c8._0_4_ = *(uint *)(puVar41 + 1);
                              uStack_d0 = (uint)*puVar41;
                              uStack_cc = (uint)((ulong)*puVar41 >> 0x20);
                              FUN_10a0d9d6c(param_1,plVar30 + 2,&uStack_d0);
                              ppuVar5 = (uint **)CONCAT44(uStack_c8._4_4_,(uint)uStack_c8);
                            }
                            else {
                              FUN_10a0d9a1c(param_1,plVar30 + 2,&uStack_130);
                              ppuVar5 = uStack_c8;
                            }
                          }
                        }
                        uStack_c8 = ppuVar5;
                        if (uStack_f0._4_1_ == '\x01') {
                          if (0x10 < ((ulong)uStack_f0 & 0xff)) goto LAB_10a33682c;
                          (*(code *)(&PTR_FUN_110ba1f88)[(ulong)uStack_f0 & 0xff])(&uStack_130);
                        }
                        break;
                      }
                      lVar42 = lVar42 + 0x30;
                    } while (lVar42 != *(long *)(lVar25 + 0x28));
                  }
                }
              }
            }
LAB_10a336618:
            plVar38 = (long *)*plVar38;
          } while (plVar38 != (long *)0x0);
        }
        FUN_10a35f9e0(&puStack_200);
      }
      ppuVar5 = uStack_c8;
      if (plStack_1c8 != (long *)0x0) {
        plVar38 = plStack_1c8 + 1;
        do {
          lVar25 = *plVar38;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar38,0x10);
          if (bVar4) {
            *plVar38 = lVar25 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1c8);
          ppuVar5 = uStack_c8;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  uStack_c8 = ppuVar5;
  ___stack_chk_fail();
LAB_10a33669c:
  FUN_109ffdddc(&UNK_10f2fca6e);
LAB_10a33682c:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10a336830);
  (*pcVar10)();
LAB_10a3360a0:
  do {
    pplVar16 = pplVar40 + 6;
    FUN_10a351760(pplVar16,plVar38[5]);
    if (pplVar16 != (long **)0x0) {
      plVar33 = pplVar40[7];
      plVar30 = pplVar16[1];
      uVar28 = (long)plVar33 - 1;
      if (((ulong)plVar33 & uVar28) == 0) {
        plVar30 = (long *)(uVar28 & (ulong)plVar30);
      }
      else if (plVar33 <= plVar30) {
        uVar23 = 0;
        if (plVar33 != (long *)0x0) {
          uVar23 = (ulong)plVar30 / (ulong)plVar33;
        }
        plVar30 = (long *)((long)plVar30 - uVar23 * (long)plVar33);
      }
      plVar31 = *pplVar16;
      pplVar36 = (long **)pplVar40[6][(long)plVar30];
      do {
        pplVar34 = pplVar36;
        pplVar36 = (long **)*pplVar34;
      } while ((long **)*pplVar34 != pplVar16);
      if (pplVar34 == pplVar40 + 8) {
LAB_10a336130:
        if (plVar31 == (long *)0x0) {
LAB_10a336164:
          pplVar40[6][(long)plVar30] = 0;
          plVar31 = *pplVar16;
          goto LAB_10a33616c;
        }
        plVar35 = (long *)plVar31[1];
        if (((ulong)plVar33 & uVar28) == 0) {
          plVar37 = (long *)((ulong)plVar35 & uVar28);
        }
        else {
          plVar37 = plVar35;
          if (plVar33 <= plVar35) {
            uVar23 = 0;
            if (plVar33 != (long *)0x0) {
              uVar23 = (ulong)plVar35 / (ulong)plVar33;
            }
            plVar37 = (long *)((long)plVar35 - uVar23 * (long)plVar33);
          }
        }
        if (plVar37 != plVar30) goto LAB_10a336164;
LAB_10a336174:
        if (((ulong)plVar33 & uVar28) == 0) {
          plVar35 = (long *)((ulong)plVar35 & uVar28);
        }
        else if (plVar33 <= plVar35) {
          uVar28 = 0;
          if (plVar33 != (long *)0x0) {
            uVar28 = (ulong)plVar35 / (ulong)plVar33;
          }
          plVar35 = (long *)((long)plVar35 - uVar28 * (long)plVar33);
        }
        if (plVar35 != plVar30) {
          pplVar40[6][(long)plVar35] = (long)pplVar34;
          plVar31 = *pplVar16;
        }
      }
      else {
        plVar35 = pplVar34[1];
        if (((ulong)plVar33 & uVar28) == 0) {
          plVar35 = (long *)((ulong)plVar35 & uVar28);
        }
        else if (plVar33 <= plVar35) {
          uVar23 = 0;
          if (plVar33 != (long *)0x0) {
            uVar23 = (ulong)plVar35 / (ulong)plVar33;
          }
          plVar35 = (long *)((long)plVar35 - uVar23 * (long)plVar33);
        }
        if (plVar35 != plVar30) goto LAB_10a336130;
LAB_10a33616c:
        if (plVar31 != (long *)0x0) {
          plVar35 = (long *)plVar31[1];
          goto LAB_10a336174;
        }
      }
      *pplVar34 = plVar31;
      *pplVar16 = (long *)0x0;
      pplVar40[9] = (long *)((long)pplVar40[9] + -1);
      FUN_10a35171c(pplVar16 + 2);
      __ZdlPv(pplVar16);
    }
    plVar38 = (long *)*plVar38;
  } while (plVar38 != (long *)0x0);
LAB_10a3361d4:
  if (pplVar40[9] != (long *)0x0) goto LAB_10a3362f8;
  plVar38 = pplVar40[1];
  uVar28 = (long)plStack_1f8 - 1;
  if (((ulong)plStack_1f8 & uVar28) == 0) {
    plVar38 = (long *)(uVar28 & (ulong)plVar38);
  }
  else if (plStack_1f8 <= plVar38) {
    uVar23 = 0;
    if (plStack_1f8 != (long *)0x0) {
      uVar23 = (ulong)plVar38 / (ulong)plStack_1f8;
    }
    plVar38 = (long *)((long)plVar38 - uVar23 * (long)plStack_1f8);
  }
  plVar30 = *pplVar40;
  pplVar16 = *(long ***)(puStack_200 + (long)plVar38 * 2);
  do {
    pplVar36 = pplVar16;
    pplVar16 = (long **)*pplVar36;
  } while ((long **)*pplVar36 != pplVar40);
  if (pplVar36 == &plStack_1f0) {
LAB_10a33625c:
    if (plVar30 == (long *)0x0) {
LAB_10a336290:
      (puStack_200 + (long)plVar38 * 2)[0] = 0;
      (puStack_200 + (long)plVar38 * 2)[1] = 0;
      plVar30 = *pplVar40;
      goto LAB_10a336298;
    }
    plVar33 = (long *)plVar30[1];
    if (((ulong)plStack_1f8 & uVar28) == 0) {
      plVar31 = (long *)((ulong)plVar33 & uVar28);
    }
    else {
      plVar31 = plVar33;
      if (plStack_1f8 <= plVar33) {
        uVar23 = 0;
        if (plStack_1f8 != (long *)0x0) {
          uVar23 = (ulong)plVar33 / (ulong)plStack_1f8;
        }
        plVar31 = (long *)((long)plVar33 - uVar23 * (long)plStack_1f8);
      }
    }
    if (plVar31 != plVar38) goto LAB_10a336290;
LAB_10a3362a0:
    if (((ulong)plStack_1f8 & uVar28) == 0) {
      plVar33 = (long *)((ulong)plVar33 & uVar28);
    }
    else if (plStack_1f8 <= plVar33) {
      uVar28 = 0;
      if (plStack_1f8 != (long *)0x0) {
        uVar28 = (ulong)plVar33 / (ulong)plStack_1f8;
      }
      plVar33 = (long *)((long)plVar33 - uVar28 * (long)plStack_1f8);
    }
    if (plVar33 != plVar38) {
      *(long ***)(puStack_200 + (long)plVar33 * 2) = pplVar36;
      plVar30 = *pplVar40;
    }
  }
  else {
    plVar33 = pplVar36[1];
    if (((ulong)plStack_1f8 & uVar28) == 0) {
      plVar33 = (long *)((ulong)plVar33 & uVar28);
    }
    else if (plStack_1f8 <= plVar33) {
      uVar23 = 0;
      if (plStack_1f8 != (long *)0x0) {
        uVar23 = (ulong)plVar33 / (ulong)plStack_1f8;
      }
      plVar33 = (long *)((long)plVar33 - uVar23 * (long)plStack_1f8);
    }
    if (plVar33 != plVar38) goto LAB_10a33625c;
LAB_10a336298:
    if (plVar30 != (long *)0x0) {
      plVar33 = (long *)plVar30[1];
      goto LAB_10a3362a0;
    }
  }
  *pplVar36 = plVar30;
  *pplVar40 = (long *)0x0;
  uStack_1e8 = uStack_1e8 - 1;
  FUN_10a3516a8(pplVar40 + 2);
  __ZdlPv(pplVar40);
LAB_10a3362f8:
  puVar41 = (undefined8 *)*puVar41;
  if (puVar41 == (undefined8 *)0x0) goto LAB_10a336300;
  goto LAB_10a335ffc;
code_r0x00010a336348:
  lVar25 = lVar25 + 0x48;
  if (lVar25 == plStack_1d0[1]) goto LAB_10a336618;
  goto LAB_10a33633c;
}



/* Entry: 10a336830; end: 10a3368cf;  */

bool FUN_10a336830(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar3 = (long *)(*(long *)(param_1 + 0x1b8) + 8);
  plVar5 = (long *)*plVar3;
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar3;
    do {
      lVar1 = 8;
      if (*(ulong *)(param_2 + 0x18) <= (ulong)plVar5[7]) {
        lVar1 = 0;
        plVar6 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar1);
    } while (plVar5 != (long *)0x0);
    if ((plVar6 != plVar3) && ((ulong)plVar6[7] <= *(ulong *)(param_2 + 0x18))) {
      return true;
    }
  }
  lVar1 = param_1 + 0x1d8;
  lVar7 = *(long *)(param_1 + 0x1d8);
  if (lVar7 != 0) {
    lVar4 = lVar1;
    do {
      lVar2 = 8;
      if (*(ulong *)(param_2 + 0x18) <= *(ulong *)(lVar7 + 0x38)) {
        lVar2 = 0;
        lVar4 = lVar7;
      }
      lVar7 = *(long *)(lVar7 + lVar2);
    } while (lVar7 != 0);
    if ((lVar4 != lVar1) && (*(ulong *)(lVar4 + 0x38) <= *(ulong *)(param_2 + 0x18)))
    goto LAB_10a3368bc;
  }
  lVar4 = lVar1;
LAB_10a3368bc:
  return lVar4 != lVar1;
}



/* Entry: 10a3368d0; end: 10a336c43;  */

void FUN_10a3368d0(long param_1,code *param_2,undefined8 param_3,long *param_4,undefined8 param_5)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plStack_130;
  long *plStack_128;
  long lStack_120;
  undefined1 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 uStack_d9;
  code *pcStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  undefined1 uStack_90;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x1e8;
  uStack_118 = 0;
  lVar7 = param_1;
  lStack_120 = param_1;
  pcStack_a8 = param_2;
  FUN_10a36599c(param_1,param_2,&UNK_10dd5b8f9,&pcStack_a8,&lStack_110);
  plVar5 = *(long **)(lVar7 + 0x40);
  if ((plVar5 == (long *)0x0) || ((**(code **)(*plVar5 + 0x28))(), (int)plVar5 == (int)param_5)) {
    uStack_118 = 1;
    plVar6 = (long *)0x1e0;
    __Znwm();
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110bc5b10;
    plVar5 = plVar6 + 3;
    FUN_10a34effc(plVar5,param_2,param_5);
    plStack_130 = plVar5;
    plStack_128 = plVar6;
    FUN_10a34f708(&plStack_130,plVar6 + 5,plVar5);
    plStack_98 = plStack_130 + 4;
    uVar1 = *(ushort *)((long)plStack_130 + 0x109);
    *(ushort *)((long)plStack_130 + 0x109) = uVar1 & 0xff80 | uVar1 + 1 & 0x7f;
    *(ushort *)(plStack_130 + 10) =
         *(ushort *)(plStack_130 + 10) & 0xff80 | *(ushort *)(plStack_130 + 10) + 1 & 0x7f;
    uStack_90 = 1;
    pcStack_a8 = FUN_10a1d3648;
    ppuStack_a0 = &PTR_FUN_110bad818;
    FUN_10a32f140(plStack_130,param_3);
    lStack_108 = param_4[1];
    lStack_110 = *param_4;
    lStack_f8 = param_4[3];
    lStack_100 = param_4[2];
    lStack_f0 = param_4[4];
    FUN_10a351a84(plStack_130 + 0x33,&lStack_110);
    plStack_b8 = plStack_128;
    plStack_c0 = plStack_130;
    if (plStack_128 != (long *)0x0) {
      plVar5 = plStack_128 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plStack_c8 = *(long **)(lVar7 + 0x48);
    uStack_d0 = *(undefined8 *)(lVar7 + 0x40);
    if (*(long *)(lVar7 + 0x48) != 0) {
      plVar5 = (long *)(*(long *)(lVar7 + 0x48) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a336c44(&lStack_110,param_1,&plStack_c0,1,&uStack_d0,1);
    lVar7 = lStack_110;
    pcStack_d8 = param_2;
    FUN_10a36599c(lStack_110,param_2,&UNK_10dd5b8f9,&pcStack_d8,&uStack_d9);
    FUN_10a336cdc(lVar7 + 0x40,plStack_130,plStack_128);
    FUN_10a365790(&lStack_110);
    plVar5 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      plVar6 = plStack_c8 + 1;
      do {
        lVar7 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar6 = plStack_b8 + 1;
      do {
        lVar7 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    FUN_10a044790(&pcStack_a8);
    (*(code *)*ppuStack_a0)(&ppuStack_a0);
    plVar5 = plStack_128;
    if (plStack_128 != (long *)0x0) {
      plVar6 = plStack_128 + 1;
      do {
        lVar7 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_128 + 0x10))(plStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    FUN_10a365e38(&lStack_120);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a00946c(&UNK_10f64f7bf);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a336bc8);
  (*pcVar4)();
}



/* Entry: 10a336c44; end: 10a336cdb;  */

void FUN_10a336c44(long *param_1,long param_2,long *param_3,long param_4,long *param_5,long param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  
  iVar3 = (int)auStack_48;
  func_0x00010a1bd170();
  if (iVar3 == 0) {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    iVar3 = (int)auStack_48;
    func_0x00010a1bd170();
    plVar4 = (long *)0x0;
    if (iVar3 == 0) {
      plVar4 = param_3;
    }
    lVar5 = 0;
    if (iVar3 == 0) {
      lVar5 = param_4;
    }
  }
  else {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    func_0x00010a1bd170(auStack_48);
    plVar4 = (long *)0x0;
    lVar5 = 0;
  }
  lVar1 = -0x1e8;
  if (cRam00000001137eafae == '\0') {
    lVar1 = -0xffff;
  }
  lVar1 = *param_1 + lVar1;
  if (param_6 != 0) {
    lVar2 = 0;
    if (*param_1 != 0) {
      lVar2 = lVar1 + 0x40;
    }
    param_6 = param_6 << 4;
    do {
      if (*param_5 != 0) {
        func_0x00010a1bf190(*param_5 + 0xb0,lVar2);
      }
      param_5 = param_5 + 2;
      param_6 = param_6 + -0x10;
    } while (param_6 != 0);
  }
  if (lVar5 != 0) {
    lVar5 = lVar5 << 4;
    do {
      if (*plVar4 != 0) {
        func_0x00010a1bf34c(*plVar4 + 0xb0,lVar1 + 0x40);
      }
      plVar4 = plVar4 + 2;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 10a336cdc; end: 10a336d4f;  */

undefined8 * FUN_10a336cdc(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10a336d50; end: 10a336e0b;  */

undefined * FUN_10a336d50(long param_1,uint param_2)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_58;
  
  bVar2 = *(byte *)(param_1 + 0x245);
  uVar8 = (uint)bVar2;
  if (bVar2 == 2) {
    iVar9 = 0;
    uVar8 = 0;
    do {
      if (uVar8 == 0) {
        fVar12 = *(float *)(param_1 + 0x238) -
                 (*(float *)(param_1 + 0x22c) + *(float *)(param_1 + 0x238)) * 0.5;
        if (iVar9 == 1) {
          fVar12 = *(float *)(param_1 + 0x23c) -
                   (*(float *)(param_1 + 0x230) + *(float *)(param_1 + 0x23c)) * 0.5;
        }
        fVar13 = *(float *)(param_1 + 0x240) -
                 (*(float *)(param_1 + 0x234) + *(float *)(param_1 + 0x240)) * 0.5;
        if (iVar9 != 2) {
          fVar13 = fVar12;
        }
        uVar8 = (uint)(fVar13 < 0.0);
      }
      else {
        uVar8 = 1;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != 3);
    uVar8 = uVar8 ^ 1;
  }
  else if (bVar2 != 1) {
    if (bVar2 != 0) {
      puVar3 = &UNK_10f64f802;
      FUN_10a0ee06c();
      puVar3[0x21b] = (byte)param_2 ^ 1;
      if ((byte)puVar3[0x245] == param_2) {
        return puVar3;
      }
      puVar3[0x245] = (byte)param_2;
      func_0x00010a1bd170(&stack0xffffffffffffffc8);
      puVar3 = puVar3 + 0x245;
      puVar4 = &uStack_b0;
      lVar1 = -0x245;
      if (cRam00000001137eafbe == '\0') {
        lVar1 = -0xffff;
      }
      if ((*(ushort *)(puVar3 + lVar1 + 0x129) >> 8 & 1) == 0) {
        if ((((*(long *)(puVar3 + lVar1 + 0x100) != 0) ||
             ((*(ushort *)(puVar3 + lVar1 + 0x129) >> 9 & 1) != 0)) ||
            (*(long *)(puVar3 + lVar1 + 0x120) != 0)) ||
           ((*(ushort *)(puVar3 + lVar1 + 0x70) >> 8 & 1) == 0)) {
LAB_10a364abc:
          func_0x00010a1bd170();
          if (((ulong)puVar4 & 1) != 0) {
            return (undefined *)puVar4;
          }
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          ppuStack_58 = &PTR_DAT_110bc69d8;
          puVar5 = (undefined *)((ulong)&uStack_b0 | 8);
          FUN_10a0dad0c(puVar5,&ppuStack_58);
          lVar1 = -0x245;
          if (cRam00000001137eafbe == '\0') {
            lVar1 = -0xffff;
          }
          uVar7 = *(ushort *)(puVar3 + lVar1 + 0x70);
          if (((uVar7 & 0x7f) == 0) && ((*(ushort *)(puVar3 + lVar1 + 0x129) & 0x7f) == 0)) {
            if ((uVar7 >> 8 & 1) == 0) {
              puVar5 = puVar3 + lVar1 + 0x40;
              FUN_10a1bfe94(puVar5,&uStack_b0);
            }
            else {
              FUN_10a1bd5e0();
              if (puVar5 != (undefined *)0x0) {
                FUN_10a1bd7d8();
              }
            }
          }
          else {
            if ((uVar7 >> 7 & 1) == 0) {
              *(undefined8 *)(puVar3 + lVar1 + 0x80) = uStack_b0;
              *(ushort *)(puVar3 + lVar1 + 0x70) = uVar7 | 0x80;
            }
            puVar5 = puVar3 + lVar1 + 0x80;
            FUN_10a1bd398(puVar5,&uStack_b0);
          }
          uVar7 = 0x245;
          if (cRam00000001137eafbe == '\0') {
            uVar7 = 0xffff;
          }
          lVar1 = 0x245;
          if (cRam00000001137eafbe == '\0') {
            lVar1 = 0xffff;
          }
          if ((*(ushort *)(puVar3 + (0x129 - lVar1)) >> 8 & 1) != 0) {
            FUN_10a1bd5e0();
            uVar7 = 0x245;
            if (cRam00000001137eafbe == '\0') {
              uVar7 = 0xffff;
            }
            if (puVar5 != (undefined *)0x0) {
              FUN_10a1bd648();
              uVar7 = 0x245;
              if (cRam00000001137eafbe == '\0') {
                uVar7 = 0xffff;
              }
            }
          }
          puVar3 = puVar3 + (0xd0 - (ulong)uVar7);
          FUN_10a1c054c(puVar3,&uStack_b0);
          return puVar3;
        }
        *(long *)(puVar3 + lVar1 + 0xe0) = *(long *)(puVar3 + lVar1 + 0xe0) + 1;
      }
      else if ((*(ushort *)(puVar3 + lVar1 + 0x70) >> 8 & 1) == 0) goto LAB_10a364abc;
      ppuVar11 = *(undefined ***)(puVar3 + lVar1 + 0x130);
      ppuVar10 = *(undefined ***)(puVar3 + lVar1 + 0x78);
      puVar5 = puVar3;
      if ((ppuVar11 != &PTR_DAT_110bc69d8 || ppuVar10 != &PTR_DAT_110bc69d8) &&
         (puVar6 = puVar3, FUN_10a1bd5e0(), puVar5 = puVar6, puVar6 != (undefined *)0x0)) {
        if (ppuVar11 != &PTR_DAT_110bc69d8) {
          FUN_10a1bd648(puVar6,puVar3 + lVar1 + 0xd0,&PTR_DAT_110bc69d8);
          *(undefined ***)(puVar3 + lVar1 + 0x130) = &PTR_DAT_110bc69d8;
        }
        if (ppuVar10 != &PTR_DAT_110bc69d8) {
          FUN_10a1bd7d8(puVar6,puVar3 + lVar1 + 0x40,&PTR_DAT_110bc69d8);
          *(undefined ***)(puVar3 + lVar1 + 0x78) = &PTR_DAT_110bc69d8;
          puVar5 = puVar6;
        }
      }
      return puVar5;
    }
    uVar8 = *(byte *)(param_1 + 0x21b) ^ 1;
  }
  return (undefined *)(ulong)(uVar8 & 1);
}



/* Entry: 10a336e0c; end: 10a336e57;  */

void FUN_10a336e0c(long param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  ushort uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  *(byte *)(param_1 + 0x21b) = (byte)param_2 ^ 1;
  if (*(byte *)(param_1 + 0x245) == param_2) {
    return;
  }
  *(byte *)(param_1 + 0x245) = (byte)param_2;
  func_0x00010a1bd170(&stack0xffffffffffffffd8);
  param_1 = param_1 + 0x245;
  uVar2 = 0;
  lVar1 = -0x245;
  if (cRam00000001137eafbe == '\0') {
    lVar1 = -0xffff;
  }
  lVar1 = param_1 + lVar1;
  if ((*(ushort *)(lVar1 + 0x129) >> 8 & 1) == 0) {
    if ((((*(long *)(lVar1 + 0x100) != 0) || ((*(ushort *)(lVar1 + 0x129) >> 9 & 1) != 0)) ||
        (*(long *)(lVar1 + 0x120) != 0)) || ((*(ushort *)(lVar1 + 0x70) >> 8 & 1) == 0)) {
LAB_10a364abc:
      func_0x00010a1bd170();
      if ((uVar2 & 1) != 0) {
        return;
      }
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      ppuStack_48 = &PTR_DAT_110bc69d8;
      uVar2 = (ulong)&uStack_a0 | 8;
      FUN_10a0dad0c(uVar2,&ppuStack_48);
      lVar1 = -0x245;
      if (cRam00000001137eafbe == '\0') {
        lVar1 = -0xffff;
      }
      lVar1 = param_1 + lVar1;
      uVar3 = *(ushort *)(lVar1 + 0x70);
      if (((uVar3 & 0x7f) == 0) && ((*(ushort *)(lVar1 + 0x129) & 0x7f) == 0)) {
        if ((uVar3 >> 8 & 1) == 0) {
          uVar2 = lVar1 + 0x40;
          FUN_10a1bfe94(uVar2,&uStack_a0);
        }
        else {
          FUN_10a1bd5e0();
          if (uVar2 != 0) {
            FUN_10a1bd7d8();
          }
        }
      }
      else {
        if ((uVar3 >> 7 & 1) == 0) {
          *(undefined8 *)(lVar1 + 0x80) = uStack_a0;
          *(ushort *)(lVar1 + 0x70) = uVar3 | 0x80;
        }
        uVar2 = lVar1 + 0x80;
        FUN_10a1bd398(uVar2,&uStack_a0);
      }
      uVar3 = 0x245;
      if (cRam00000001137eafbe == '\0') {
        uVar3 = 0xffff;
      }
      lVar1 = 0x245;
      if (cRam00000001137eafbe == '\0') {
        lVar1 = 0xffff;
      }
      if ((*(ushort *)((param_1 - lVar1) + 0x129) >> 8 & 1) != 0) {
        FUN_10a1bd5e0();
        uVar3 = 0x245;
        if (cRam00000001137eafbe == '\0') {
          uVar3 = 0xffff;
        }
        if (uVar2 != 0) {
          FUN_10a1bd648();
          uVar3 = 0x245;
          if (cRam00000001137eafbe == '\0') {
            uVar3 = 0xffff;
          }
        }
      }
      FUN_10a1c054c((param_1 - (ulong)uVar3) + 0xd0,&uStack_a0);
      return;
    }
    *(long *)(lVar1 + 0xe0) = *(long *)(lVar1 + 0xe0) + 1;
  }
  else if ((*(ushort *)(lVar1 + 0x70) >> 8 & 1) == 0) goto LAB_10a364abc;
  ppuVar5 = *(undefined ***)(lVar1 + 0x130);
  ppuVar4 = *(undefined ***)(lVar1 + 0x78);
  if ((ppuVar5 != &PTR_DAT_110bc69d8 || ppuVar4 != &PTR_DAT_110bc69d8) &&
     (FUN_10a1bd5e0(), param_1 != 0)) {
    if (ppuVar5 != &PTR_DAT_110bc69d8) {
      FUN_10a1bd648(param_1,lVar1 + 0xd0,&PTR_DAT_110bc69d8);
      *(undefined ***)(lVar1 + 0x130) = &PTR_DAT_110bc69d8;
    }
    if (ppuVar4 != &PTR_DAT_110bc69d8) {
      FUN_10a1bd7d8(param_1,lVar1 + 0x40,&PTR_DAT_110bc69d8);
      *(undefined ***)(lVar1 + 0x78) = &PTR_DAT_110bc69d8;
    }
  }
  return;
}



/* Entry: 10a336e58; end: 10a339447;  */

/* WARNING: Removing unreachable block (ram,0x00010a338e48) */
/* WARNING: Removing unreachable block (ram,0x00010a337448) */
/* WARNING: Removing unreachable block (ram,0x00010a338688) */
/* WARNING: Removing unreachable block (ram,0x00010a338e58) */
/* WARNING: Type propagation algorithm not settling */

code *******
FUN_10a336e58(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             code *******param_5,code *******param_6)

{
  code *******pppppppcVar1;
  code *******pppppppcVar2;
  code *******pppppppcVar3;
  code *******pppppppcVar4;
  long *plVar5;
  long *plVar6;
  code *******pppppppcVar7;
  code ******ppppppcVar8;
  ulong uVar9;
  ushort uVar10;
  char cVar11;
  bool bVar12;
  code *pcVar13;
  byte bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  code *******pppppppcVar17;
  code *******pppppppcVar18;
  code *******pppppppcVar19;
  undefined8 *puVar20;
  code ******ppppppcVar21;
  code *******pppppppcVar22;
  code *******pppppppcVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined4 uVar26;
  code *******pppppppcVar27;
  long lVar28;
  code *****pppppcVar29;
  code *******pppppppcVar30;
  int iVar31;
  bool bVar32;
  undefined **unaff_x25;
  code *******pppppppcVar33;
  undefined4 uVar34;
  undefined *puStack_2e8;
  code *******pppppppcStack_290;
  code *******pppppppcStack_288;
  code *******pppppppcStack_280;
  code *******pppppppcStack_278;
  code *******pppppppcStack_270;
  code *******pppppppcStack_268;
  code *******pppppppcStack_260;
  long lStack_258;
  code ******ppppppcStack_250;
  code ******ppppppcStack_248;
  undefined7 uStack_240;
  char cStack_239;
  code ******ppppppcStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  byte bStack_219;
  code *******pppppppcStack_218;
  code *******pppppppcStack_210;
  undefined1 auStack_208 [8];
  code *******pppppppcStack_200;
  code *******pppppppcStack_1f8;
  char cStack_1e9;
  undefined8 uStack_1e0;
  undefined **ppuStack_1d8;
  code *******pppppppcStack_1d0;
  code *******pppppppcStack_1c8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  code *******pppppppcStack_160;
  code *******pppppppcStack_158;
  code *******pppppppcStack_150;
  undefined **ppuStack_148;
  code *******pppppppcStack_140;
  code *******pppppppcStack_138;
  undefined8 uStack_110;
  undefined8 uStack_108;
  code *******pppppppcStack_100;
  code *******pppppppcStack_f8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (*(code *)(*param_6)[0x15])(&uStack_110,param_6,&PTR_DAT_110bc5db8,&UNK_10f64efef,0);
  if (*(char *)((long)param_5 + 0x1b7) < '\0') {
    __ZdlPv(param_5[0x34]);
  }
  param_5[0x35] = (code ******)uStack_108;
  param_5[0x34] = (code ******)uStack_110;
  param_5[0x36] = (code ******)pppppppcStack_100;
  uStack_108 = (undefined **)((ulong)uStack_108 & 0xffffffffffffff00);
  pppppppcVar17 = param_6;
  ppppppcVar21 = (code ******)uStack_110;
  uStack_110 = (code *)(param_5 + 0x43);
  (*(code *)(*param_6)[0xb])(param_6,&PTR_DAT_110bc4d60,*(undefined1 *)(param_5 + 0x43));
  uVar34 = SUB84(ppppppcVar21,0);
  *(char *)(param_5 + 0x43) = (char)pppppppcVar17;
  FUN_10a3660c8(&uStack_110);
  uStack_110 = (code *)((long)param_5 + 0x21a);
  uStack_108 = (undefined **)((ulong)uStack_108 & 0xffffffffffffff00);
  pppppppcVar17 = param_6;
  (*(code *)(*param_6)[0xb])(param_6,&PTR_DAT_110bc4d80,*(undefined *)((long)param_5 + 0x21a));
  *(char *)((long)param_5 + 0x21a) = (char)pppppppcVar17;
  FUN_10a366358(&uStack_110);
  uStack_108 = (undefined **)((ulong)uStack_108 & 0xffffffffffffff00);
  pppppppcVar17 = param_6;
  uStack_110 = (code *)((long)param_5 + 0x219);
  (*(code *)(*param_6)[0xb])(param_6,&PTR_DAT_110bc4da0,*(undefined *)((long)param_5 + 0x219));
  *(char *)((long)param_5 + 0x219) = (char)pppppppcVar17;
  FUN_10a3665e8(&uStack_110);
  pppppppcVar17 = param_6;
  (*(code *)(*param_6)[0x40])(param_6,&PTR_DAT_110bc4dc0);
  if ((int)pppppppcVar17 == 0) {
    uVar34 = 0x10101;
    uStack_110 = (code *)CONCAT44(uStack_110._4_4_,0x10101);
    pppppppcVar17 = param_6;
    (*(code *)(*param_6)[0x30])(param_6,&PTR_DAT_110bc4de0,&uStack_110);
    uVar26 = SUB84(pppppppcVar17,0);
  }
  else {
    pppppppcVar17 = param_6;
    (*(code *)(*param_6)[0xb])(param_6,&PTR_DAT_110bc4dc0,1);
    uVar26 = 0x1010101;
    if ((int)pppppppcVar17 == 0) {
      uVar26 = 0;
    }
  }
  *(undefined4 *)((long)param_5 + 0x21e) = uVar26;
  uStack_110 = (code *)0x0;
  (*(code *)(*param_6)[0x1c])(param_6,&PTR_DAT_110bc4e00,&uStack_110);
  *(undefined4 *)(param_5 + 0x49) = uVar34;
  *(undefined4 *)((long)param_5 + 0x24c) = param_2;
  pppppppcVar17 = param_6;
  (*(code *)(*param_6)[0x1a])(param_6,&PTR_DAT_110bc4e20,1);
  func_0x00010a332658(param_5,pppppppcVar17);
  (*(code *)(*param_6)[0x3c])(param_6,param_5[0x4b]);
  (*(code *)(*param_6)[0x3c])(param_6,param_5[0x4d]);
  uStack_110 = (code *)((long)param_5 + 0x244);
  uStack_108 = (undefined **)((ulong)uStack_108 & 0xffffffffffffff00);
  pppppppcVar17 = param_6;
  (*(code *)(*param_6)[7])(param_6,&PTR_DAT_110bc4e40,*(undefined *)((long)param_5 + 0x244));
  *(char *)((long)param_5 + 0x244) = (char)pppppppcVar17;
  FUN_10a366878(&uStack_110);
  uStack_110 = (code *)((long)param_5 + 0x21c);
  uStack_108 = (undefined **)((ulong)uStack_108 & 0xffffffffffffff00);
  pppppppcVar17 = param_6;
  (*(code *)(*param_6)[7])(param_6,&PTR_DAT_110bc4e60,*(undefined *)((long)param_5 + 0x21c));
  *(char *)((long)param_5 + 0x21c) = (char)pppppppcVar17;
  FUN_10a366b08(&uStack_110);
  uStack_108 = (undefined **)((ulong)uStack_108 & 0xffffffffffffff00);
  ppuVar25 = (undefined **)(ulong)*(byte *)((long)param_5 + 0x21d);
  pppppppcVar17 = param_6;
  uStack_110 = (code *)((long)param_5 + 0x21d);
  (*(code *)(*param_6)[7])(param_6,&PTR_DAT_110bc4e80);
  *(char *)((long)param_5 + 0x21d) = (char)pppppppcVar17;
  FUN_10a366d98(&uStack_110);
  pppppppcVar17 = param_6;
  (*(code *)(*param_6)[0x40])(param_6,&PTR_DAT_110bc4ea0);
  if ((int)pppppppcVar17 == 0) {
    pppppppcVar17 = param_6;
    (*(code *)(*param_6)[0x40])(param_6,&PTR_DAT_110bc4ee0);
    if ((int)pppppppcVar17 == 0) {
      *(undefined1 *)((long)param_5 + 0x21b) = 1;
      if (*(char *)((long)param_5 + 0x245) != '\0') {
        *(undefined1 *)((long)param_5 + 0x245) = 0;
        goto LAB_10a3371d8;
      }
    }
    else {
      ppuVar25 = (undefined **)0x0;
      pppppppcVar17 = param_6;
      (*(code *)(*param_6)[0xb])(param_6,&PTR_DAT_110bc4ee0);
      bVar14 = (byte)pppppppcVar17;
      *(byte *)((long)param_5 + 0x21b) = bVar14 ^ 1;
      if ((uint)*(byte *)((long)param_5 + 0x245) != (uint)pppppppcVar17) goto LAB_10a3371b8;
    }
  }
  else {
    pppppppcVar17 = param_6;
    (*(code *)(*param_6)[0xb])(param_6,&PTR_DAT_110bc4ec0,0);
    *(char *)((long)param_5 + 0x21b) = (char)pppppppcVar17;
    ppuVar25 = (undefined **)(ulong)*(byte *)((long)param_5 + 0x245);
    pppppppcVar17 = param_6;
    (*(code *)(*param_6)[7])(param_6,&PTR_DAT_110bc4ea0);
    bVar14 = (byte)pppppppcVar17;
    if ((uint)*(byte *)((long)param_5 + 0x245) != ((uint)pppppppcVar17 & 0xff)) {
LAB_10a3371b8:
      *(byte *)((long)param_5 + 0x245) = bVar14;
LAB_10a3371d8:
      func_0x00010a1bd170(&uStack_110);
      func_0x00010a364a44((undefined *)((long)param_5 + 0x245));
    }
  }
  uVar34 = 0;
  (*(code *)(*param_6)[9])(param_6,&PTR_DAT_110bc4f00);
  *(undefined4 *)(param_5 + 0x45) = uVar34;
  *(undefined8 *)((long)param_5 + 0x234) = 0xff7fffff7f7fffff;
  *(undefined8 *)((long)param_5 + 0x22c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)((long)param_5 + 0x23c) = 0xff7fffffff7fffff;
  pppppppcVar17 = param_6;
  (*(code *)(*param_6)[0x40])(param_6,&PTR_DAT_110bc4f20);
  if ((int)pppppppcVar17 != 0) {
    (*(code *)(*param_6)[0xc])(&uStack_b0,param_6,&PTR_DAT_110bc4f20);
    unaff_x25 = uStack_a8;
    if ((undefined **)uStack_b0 != uStack_a8) {
      pppppppcVar17 = param_5 + 0x40;
      pppppppcVar22 = (code *******)uStack_b0;
      do {
        pppppppcVar18 = (code *******)0x40;
        __Znwm();
        pppppppcStack_100 = (code *******)0x0;
        uStack_110 = (code *)pppppppcVar18;
        uStack_108 = (undefined **)pppppppcVar17;
        FUN_10a0d09b4(pppppppcVar18 + 4,pppppppcVar22);
        pppppppcStack_100 = (code *******)CONCAT71(pppppppcStack_100._1_7_,1);
        ppuVar25 = (undefined **)pppppppcVar17;
        FUN_10a0da010(pppppppcVar17,param_5 + 0x41,&pppppppcStack_150,&uStack_1a0,pppppppcVar18 + 4)
        ;
        pppppppcVar18 = (code *******)uStack_110;
        if ((code ******)*ppuVar25 == (code ******)0x0) {
          func_0x00010a0479ec(pppppppcVar17,pppppppcStack_150,ppuVar25,uStack_110);
        }
        else {
          uStack_110 = (code *)0x0;
          if (pppppppcVar18 != (code *******)0x0) {
            func_0x00010a047a40(&uStack_108);
          }
        }
        pppppppcVar22 = pppppppcVar22 + 3;
      } while (pppppppcVar22 != (code *******)unaff_x25);
    }
    uStack_110 = (code *)&uStack_b0;
    FUN_10a0426d8(&uStack_110);
  }
  pppppppcVar17 = param_6;
  (*(code *)(*param_6)[0x40])(param_6,&PTR_DAT_110bc4f40);
  if ((int)pppppppcVar17 != 0) {
    (*(code *)(*param_6)[0x42])(param_6,&PTR_DAT_110bc4f40);
    pppppppcVar17 = param_6;
    (*(code *)(*param_6)[0x41])();
    if ((int)pppppppcVar17 != 0) {
      iVar31 = 0;
      pppppppcVar22 = param_5 + 0x55;
      pppppppcVar18 = param_5 + 0x56;
      pppppppcVar23 = param_5 + 0x52;
      pppppppcVar1 = param_5 + 0x53;
      pppppppcVar2 = param_5 + 0x3d;
      pppppppcVar3 = param_5 + 0x3e;
      pppppppcVar4 = param_5 + 0x3a;
      puStack_2e8 = &UNK_10f64f819;
      pppppppcVar33 = pppppppcVar17;
      do {
        (*(code *)(*param_6)[0x43])(param_6,iVar31);
        pppppppcStack_218 = (code *******)0x0;
        pppppppcStack_210 = (code *******)0x0;
        (*(code *)(*param_6)[0x14])(&uStack_230,param_6,&PTR_DAT_110bc5db8);
        pppppppcVar30 = param_6;
        (*(code *)(*param_6)[0x1a])(param_6,&PTR_DAT_110bc4f60,1);
        FUN_10a0d09b4(&ppppppcStack_250,&uStack_230);
        (*(code *)(*param_6)[0x15])(&uStack_110,param_6,&PTR_DAT_110bc5dd8,&UNK_10f64efef,0);
        pppppppcStack_260 = pppppppcStack_100;
        pppppppcVar19 = (code *******)uStack_110;
        pppppppcStack_268 = (code *******)uStack_108;
        pppppppcStack_270 = (code *******)uStack_110;
        uStack_108 = (undefined **)0x0;
        pppppppcStack_100 = (code *******)0x0;
        uStack_110 = (code *)0x0;
        lStack_258 = 0;
        func_0x000107c2b080(&pppppppcStack_270);
        uVar34 = SUB84(pppppppcVar19,0);
        if (1 < (uint)pppppppcVar30) {
          uStack_108 = (undefined **)((ulong)uStack_108 & 0xffffffffffffff00);
          ppuVar25 = (undefined **)&ppppppcStack_250;
          pppppppcVar19 = pppppppcVar4;
          uStack_110 = (code *)pppppppcVar4;
          FUN_10a3672b8(pppppppcVar4,ppppppcStack_238);
          *(uint *)(pppppppcVar19 + 8) = (uint)pppppppcVar30;
          FUN_10a367028(&uStack_110);
          pppppppcVar19 = pppppppcStack_210;
          goto LAB_10a338ac8;
        }
        if (lStack_258 < 0xcfec4463167) {
          if (lStack_258 < 0x35af72e120) {
            if (lStack_258 < 0x342df2e120) {
              if (lStack_258 == 0x28ee779466) {
                pppppppcVar19 = param_6;
                (*(code *)(*param_6)[6])(param_6,&PTR_s_value_110bc5df8);
                uStack_110 = (code *)CONCAT44(uStack_110._4_4_,(int)pppppppcVar19);
                pppppppcVar19 = (code *******)0x80;
                __Znwm();
                pppppppcVar19[2] = (code ******)0x0;
                pppppppcVar30 = pppppppcVar19 + 3;
                *pppppppcVar19 = (code ******)&PTR_DAT_110ba1f48;
                pppppppcVar19[1] = (code ******)0x0;
                ppuVar25 = (undefined **)&uStack_110;
                FUN_10a3673a4(pppppppcVar30,&ppppppcStack_250);
                pppppppcStack_218 = pppppppcVar30;
                if (pppppppcStack_210 != (code *******)0x0) {
                  pppppppcVar30 = pppppppcStack_210 + 1;
                  do {
                    ppppppcVar21 = *pppppppcVar30;
                    cVar11 = '\x01';
                    bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                    if (bVar32) {
                      *pppppppcVar30 = (code ******)((long)ppppppcVar21 + -1);
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                    pppppppcVar27 = pppppppcStack_210;
                  } while (cVar11 != '\0');
                  goto LAB_10a338aac;
                }
              }
              else {
                if (lStack_258 != 0x34298f2267) goto LAB_10a338edc;
                (*(code *)(*param_6)[0x1b])(param_6,&PTR_s_value_110bc5df8);
                uStack_110 = (code *)CONCAT44(param_2,uVar34);
                pppppppcVar19 = (code *******)0x80;
                __Znwm();
                pppppppcVar19[2] = (code ******)0x0;
                pppppppcVar30 = pppppppcVar19 + 3;
                *pppppppcVar19 = (code ******)&PTR_DAT_110ba1f48;
                pppppppcVar19[1] = (code ******)0x0;
                ppuVar25 = (undefined **)&uStack_110;
                FUN_10a0da984(pppppppcVar30,&ppppppcStack_250);
                pppppppcStack_218 = pppppppcVar30;
                if (pppppppcStack_210 != (code *******)0x0) {
                  pppppppcVar30 = pppppppcStack_210 + 1;
                  do {
                    ppppppcVar21 = *pppppppcVar30;
                    cVar11 = '\x01';
                    bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                    if (bVar32) {
                      *pppppppcVar30 = (code ******)((long)ppppppcVar21 + -1);
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                    pppppppcVar27 = pppppppcStack_210;
                  } while (cVar11 != '\0');
                  goto LAB_10a338aac;
                }
              }
            }
            else if (lStack_258 == 0x342df2e120) {
              (*(code *)(*param_6)[0x37])(param_6,&PTR_s_value_110bc5df8);
              uStack_110 = (code *)CONCAT44(param_2,uVar34);
              uStack_108 = (undefined **)CONCAT44(param_4,param_3);
              pppppppcVar19 = (code *******)0x80;
              __Znwm();
              pppppppcVar19[2] = (code ******)0x0;
              pppppppcVar30 = pppppppcVar19 + 3;
              *pppppppcVar19 = (code ******)&PTR_DAT_110ba1f48;
              pppppppcVar19[1] = (code ******)0x0;
              ppuVar25 = (undefined **)&uStack_110;
              FUN_10a367840(pppppppcVar30,&ppppppcStack_250);
              pppppppcStack_218 = pppppppcVar30;
              if (pppppppcStack_210 != (code *******)0x0) {
                pppppppcVar30 = pppppppcStack_210 + 1;
                do {
                  ppppppcVar21 = *pppppppcVar30;
                  cVar11 = '\x01';
                  bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                  if (bVar32) {
                    *pppppppcVar30 = (code ******)((long)ppppppcVar21 + -1);
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                  pppppppcVar27 = pppppppcStack_210;
                } while (cVar11 != '\0');
                goto LAB_10a338aac;
              }
            }
            else {
              if (lStack_258 != 0x35ab0f2267) goto LAB_10a338edc;
              (*(code *)(*param_6)[0x21])(param_6,&PTR_s_value_110bc5df8);
              uStack_110 = (code *)CONCAT44(param_2,uVar34);
              uStack_108 = (undefined **)CONCAT44(param_4,param_3);
              pppppppcVar19 = (code *******)0x80;
              __Znwm();
              pppppppcVar19[2] = (code ******)0x0;
              pppppppcVar30 = pppppppcVar19 + 3;
              *pppppppcVar19 = (code ******)&PTR_DAT_110ba1f48;
              pppppppcVar19[1] = (code ******)0x0;
              ppuVar25 = (undefined **)&uStack_110;
              FUN_10a0dae70(pppppppcVar30,&ppppppcStack_250);
              pppppppcStack_218 = pppppppcVar30;
              if (pppppppcStack_210 != (code *******)0x0) {
                pppppppcVar30 = pppppppcStack_210 + 1;
                do {
                  ppppppcVar21 = *pppppppcVar30;
                  cVar11 = '\x01';
                  bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                  if (bVar32) {
                    *pppppppcVar30 = (code ******)((long)ppppppcVar21 + -1);
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                  pppppppcVar27 = pppppppcStack_210;
                } while (cVar11 != '\0');
                goto LAB_10a338aac;
              }
            }
          }
          else if (lStack_258 < 0x35ec32e120) {
            if (lStack_258 == 0x35af72e120) {
              (*(code *)(*param_6)[0x35])(&uStack_110,param_6,&PTR_s_value_110bc5df8);
              pppppppcVar19 = (code *******)0x80;
              __Znwm();
              pppppppcVar19[2] = (code ******)0x0;
              pppppppcVar30 = pppppppcVar19 + 3;
              *pppppppcVar19 = (code ******)&PTR_DAT_110ba1f48;
              pppppppcVar19[1] = (code ******)0x0;
              ppuVar25 = (undefined **)&uStack_110;
              FUN_10a367954(pppppppcVar30,&ppppppcStack_250);
              pppppppcStack_218 = pppppppcVar30;
              if (pppppppcStack_210 != (code *******)0x0) {
                pppppppcVar30 = pppppppcStack_210 + 1;
                do {
                  ppppppcVar21 = *pppppppcVar30;
                  cVar11 = '\x01';
                  bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                  if (bVar32) {
                    *pppppppcVar30 = (code ******)((long)ppppppcVar21 + -1);
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                  pppppppcVar27 = pppppppcStack_210;
                } while (cVar11 != '\0');
                goto LAB_10a338aac;
              }
            }
            else {
              if (lStack_258 != 0x35e8cf2267) goto LAB_10a338edc;
              (*(code *)(*param_6)[0x1d])(param_6,&PTR_s_value_110bc5df8);
              uStack_110 = (code *)CONCAT44(param_2,uVar34);
              uStack_108 = (undefined **)CONCAT44(uStack_108._4_4_,param_3);
              pppppppcVar19 = (code *******)0x80;
              __Znwm();
              pppppppcVar19[2] = (code ******)0x0;
              pppppppcVar30 = pppppppcVar19 + 3;
              *pppppppcVar19 = (code ******)&PTR_DAT_110ba1f48;
              pppppppcVar19[1] = (code ******)0x0;
              ppuVar25 = (undefined **)&uStack_110;
              FUN_10a0db098(pppppppcVar30,&ppppppcStack_250);
              pppppppcStack_218 = pppppppcVar30;
              if (pppppppcStack_210 != (code *******)0x0) {
                pppppppcVar30 = pppppppcStack_210 + 1;
                do {
                  ppppppcVar21 = *pppppppcVar30;
                  cVar11 = '\x01';
                  bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                  if (bVar32) {
                    *pppppppcVar30 = (code ******)((long)ppppppcVar21 + -1);
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                  pppppppcVar27 = pppppppcStack_210;
                } while (cVar11 != '\0');
                goto LAB_10a338aac;
              }
            }
          }
          else if (lStack_258 == 0x35ec32e120) {
            (*(code *)(*param_6)[0x39])(&uStack_110,param_6,&PTR_s_value_110bc5df8);
            pppppppcVar19 = (code *******)0x80;
            __Znwm();
            pppppppcVar19[2] = (code ******)0x0;
            pppppppcVar30 = pppppppcVar19 + 3;
            *pppppppcVar19 = (code ******)&PTR_DAT_110ba1f48;
            pppppppcVar19[1] = (code ******)0x0;
            ppuVar25 = (undefined **)&uStack_110;
            FUN_10a3678c4(pppppppcVar30,&ppppppcStack_250);
            pppppppcStack_218 = pppppppcVar30;
            if (pppppppcStack_210 != (code *******)0x0) {
              pppppppcVar30 = pppppppcStack_210 + 1;
              do {
                ppppppcVar21 = *pppppppcVar30;
                cVar11 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                if (bVar32) {
                  *pppppppcVar30 = (code ******)((long)ppppppcVar21 + -1);
                  cVar11 = ExclusiveMonitorsStatus();
                }
                pppppppcVar27 = pppppppcStack_210;
              } while (cVar11 != '\0');
              goto LAB_10a338aac;
            }
          }
          else if (lStack_258 == 0x42803d93d8) {
            pppppppcVar19 = param_6;
            (*(code *)(*param_6)[10])(param_6,&PTR_s_value_110bc5df8);
            uStack_110 = (code *)CONCAT71(uStack_110._1_7_,(char)pppppppcVar19);
            pppppppcVar19 = (code *******)0x80;
            __Znwm();
            pppppppcVar19[2] = (code ******)0x0;
            pppppppcVar30 = pppppppcVar19 + 3;
            *pppppppcVar19 = (code ******)&PTR_DAT_110ba1f48;
            pppppppcVar19[1] = (code ******)0x0;
            ppuVar25 = (undefined **)&uStack_110;
            FUN_10a36749c(pppppppcVar30,&ppppppcStack_250);
            pppppppcStack_218 = pppppppcVar30;
            if (pppppppcStack_210 != (code *******)0x0) {
              pppppppcVar30 = pppppppcStack_210 + 1;
              do {
                ppppppcVar21 = *pppppppcVar30;
                cVar11 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                if (bVar32) {
                  *pppppppcVar30 = (code ******)((long)ppppppcVar21 + -1);
                  cVar11 = ExclusiveMonitorsStatus();
                }
                pppppppcVar27 = pppppppcStack_210;
              } while (cVar11 != '\0');
              goto LAB_10a338aac;
            }
          }
          else {
            if (lStack_258 != 0x449efc5d26) goto LAB_10a338edc;
            pppppppcVar19 = param_6;
            (*(code *)(*param_6)[0x19])(param_6,&PTR_s_value_110bc5df8);
            uStack_110 = (code *)CONCAT44(uStack_110._4_4_,(int)pppppppcVar19);
            pppppppcVar19 = (code *******)0x80;
            __Znwm();
            pppppppcVar19[2] = (code ******)0x0;
            pppppppcVar30 = pppppppcVar19 + 3;
            *pppppppcVar19 = (code ******)&PTR_DAT_110ba1f48;
            pppppppcVar19[1] = (code ******)0x0;
            ppuVar25 = (undefined **)&uStack_110;
            FUN_10a367420(pppppppcVar30,&ppppppcStack_250);
            pppppppcStack_218 = pppppppcVar30;
            if (pppppppcStack_210 != (code *******)0x0) {
              pppppppcVar30 = pppppppcStack_210 + 1;
              do {
                ppppppcVar21 = *pppppppcVar30;
                cVar11 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                if (bVar32) {
                  *pppppppcVar30 = (code ******)((long)ppppppcVar21 + -1);
                  cVar11 = ExclusiveMonitorsStatus();
                }
                pppppppcVar27 = pppppppcStack_210;
              } while (cVar11 != '\0');
              goto LAB_10a338aac;
            }
          }
          goto LAB_10a338ac8;
        }
        if (lStack_258 < 0xd7b44464e64) {
          if (lStack_258 < 0xd3a04463167) {
            if (lStack_258 == 0xcfec4463167) {
              pppppppcVar30 = param_6;
              (*(code *)(*param_6)[0x29])(param_6,&PTR_s_value_110bc5df8);
              pppppppcVar19 = (code *******)0x80;
              uStack_110 = (code *)pppppppcVar30;
              __Znwm();
              pppppppcVar19[2] = (code ******)0x0;
              pppppppcVar30 = pppppppcVar19 + 3;
              *pppppppcVar19 = (code ******)&PTR_DAT_110ba1f48;
              pppppppcVar19[1] = (code ******)0x0;
              ppuVar25 = (undefined **)&uStack_110;
              FUN_10a3676ac(pppppppcVar30,&ppppppcStack_250);
              pppppppcStack_218 = pppppppcVar30;
              if (pppppppcStack_210 != (code *******)0x0) {
                pppppppcVar30 = pppppppcStack_210 + 1;
                do {
                  ppppppcVar21 = *pppppppcVar30;
                  cVar11 = '\x01';
                  bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                  if (bVar32) {
                    *pppppppcVar30 = (code ******)((long)ppppppcVar21 + -1);
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                  pppppppcVar27 = pppppppcStack_210;
                } while (cVar11 != '\0');
                goto LAB_10a338aac;
              }
            }
            else {
              if (lStack_258 != 0xcfec4464e64) goto LAB_10a338edc;
              pppppppcVar30 = param_6;
              (*(code *)(*param_6)[0x23])(param_6,&PTR_s_value_110bc5df8);
              pppppppcVar19 = (code *******)0x80;
              uStack_110 = (code *)pppppppcVar30;
              __Znwm();
              pppppppcVar19[2] = (code ******)0x0;
              pppppppcVar30 = pppppppcVar19 + 3;
              *pppppppcVar19 = (code ******)&PTR_DAT_110ba1f48;
              pppppppcVar19[1] = (code ******)0x0;
              ppuVar25 = (undefined **)&uStack_110;
              FUN_10a367518(pppppppcVar30,&ppppppcStack_250);
              pppppppcStack_218 = pppppppcVar30;
              if (pppppppcStack_210 != (code *******)0x0) {
                pppppppcVar30 = pppppppcStack_210 + 1;
                do {
                  ppppppcVar21 = *pppppppcVar30;
                  cVar11 = '\x01';
                  bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                  if (bVar32) {
                    *pppppppcVar30 = (code ******)((long)ppppppcVar21 + -1);
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                  pppppppcVar27 = pppppppcStack_210;
                } while (cVar11 != '\0');
                goto LAB_10a338aac;
              }
            }
          }
          else if (lStack_258 == 0xd3a04463167) {
            uVar34 = 0x10bc5df8;
            pppppppcVar30 = param_6;
            (*(code *)(*param_6)[0x2b])();
            uStack_108 = (undefined **)CONCAT44(uStack_108._4_4_,uVar34);
            pppppppcVar19 = (code *******)0x80;
            uStack_110 = (code *)pppppppcVar30;
            __Znwm();
            pppppppcVar19[2] = (code ******)0x0;
            pppppppcVar30 = pppppppcVar19 + 3;
            *pppppppcVar19 = (code ******)&PTR_DAT_110ba1f48;
            pppppppcVar19[1] = (code ******)0x0;
            ppuVar25 = (undefined **)&uStack_110;
            FUN_10a367730(pppppppcVar30,&ppppppcStack_250);
            pppppppcStack_218 = pppppppcVar30;
            if (pppppppcStack_210 != (code *******)0x0) {
              pppppppcVar30 = pppppppcStack_210 + 1;
              do {
                ppppppcVar21 = *pppppppcVar30;
                cVar11 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                if (bVar32) {
                  *pppppppcVar30 = (code ******)((long)ppppppcVar21 + -1);
                  cVar11 = ExclusiveMonitorsStatus();
                }
                pppppppcVar27 = pppppppcStack_210;
              } while (cVar11 != '\0');
              goto LAB_10a338aac;
            }
          }
          else if (lStack_258 == 0xd3a04464e64) {
            uVar34 = 0x10bc5df8;
            pppppppcVar30 = param_6;
            (*(code *)(*param_6)[0x25])();
            uStack_108 = (undefined **)CONCAT44(uStack_108._4_4_,uVar34);
            pppppppcVar19 = (code *******)0x80;
            uStack_110 = (code *)pppppppcVar30;
            __Znwm();
            pppppppcVar19[2] = (code ******)0x0;
            pppppppcVar30 = pppppppcVar19 + 3;
            *pppppppcVar19 = (code ******)&PTR_DAT_110ba1f48;
            pppppppcVar19[1] = (code ******)0x0;
            ppuVar25 = (undefined **)&uStack_110;
            FUN_10a36759c(pppppppcVar30,&ppppppcStack_250);
            pppppppcStack_218 = pppppppcVar30;
            if (pppppppcStack_210 != (code *******)0x0) {
              pppppppcVar30 = pppppppcStack_210 + 1;
              do {
                ppppppcVar21 = *pppppppcVar30;
                cVar11 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                if (bVar32) {
                  *pppppppcVar30 = (code ******)((long)ppppppcVar21 + -1);
                  cVar11 = ExclusiveMonitorsStatus();
                }
                pppppppcVar27 = pppppppcStack_210;
              } while (cVar11 != '\0');
              goto LAB_10a338aac;
            }
          }
          else {
            if (lStack_258 != 0xd7b44463167) goto LAB_10a338edc;
            ppuVar25 = &PTR_s_value_110bc5df8;
            pppppppcVar30 = param_6;
            (*(code *)(*param_6)[0x2d])();
            pppppppcVar19 = (code *******)0x80;
            uStack_110 = (code *)pppppppcVar30;
            uStack_108 = ppuVar25;
            __Znwm();
            pppppppcVar19[2] = (code ******)0x0;
            pppppppcVar30 = pppppppcVar19 + 3;
            *pppppppcVar19 = (code ******)&PTR_DAT_110ba1f48;
            pppppppcVar19[1] = (code ******)0x0;
            ppuVar25 = (undefined **)&uStack_110;
            FUN_10a3677bc(pppppppcVar30,&ppppppcStack_250);
            pppppppcStack_218 = pppppppcVar30;
            if (pppppppcStack_210 != (code *******)0x0) {
              pppppppcVar30 = pppppppcStack_210 + 1;
              do {
                ppppppcVar21 = *pppppppcVar30;
                cVar11 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                if (bVar32) {
                  *pppppppcVar30 = (code ******)((long)ppppppcVar21 + -1);
                  cVar11 = ExclusiveMonitorsStatus();
                }
                pppppppcVar27 = pppppppcStack_210;
              } while (cVar11 != '\0');
              goto LAB_10a338aac;
            }
          }
        }
        else if (lStack_258 < 0x1d29387c5d1a) {
          if (lStack_258 == 0xd7b44464e64) {
            ppuVar25 = &PTR_s_value_110bc5df8;
            pppppppcVar30 = param_6;
            (*(code *)(*param_6)[0x27])();
            pppppppcVar19 = (code *******)0x80;
            uStack_110 = (code *)pppppppcVar30;
            uStack_108 = ppuVar25;
            __Znwm();
            pppppppcVar19[2] = (code ******)0x0;
            pppppppcVar30 = pppppppcVar19 + 3;
            *pppppppcVar19 = (code ******)&PTR_DAT_110ba1f48;
            pppppppcVar19[1] = (code ******)0x0;
            ppuVar25 = (undefined **)&uStack_110;
            FUN_10a367628(pppppppcVar30,&ppppppcStack_250);
            pppppppcStack_218 = pppppppcVar30;
            if (pppppppcStack_210 != (code *******)0x0) {
              pppppppcVar30 = pppppppcStack_210 + 1;
              do {
                ppppppcVar21 = *pppppppcVar30;
                cVar11 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                if (bVar32) {
                  *pppppppcVar30 = (code ******)((long)ppppppcVar21 + -1);
                  cVar11 = ExclusiveMonitorsStatus();
                }
                pppppppcVar27 = pppppppcStack_210;
              } while (cVar11 != '\0');
              goto LAB_10a338aac;
            }
            goto LAB_10a338ac8;
          }
          if (lStack_258 != 0x19f959745399) goto LAB_10a338edc;
          pppppppcStack_160 = (code *******)0x0;
          pppppppcStack_158 = (code *******)0x0;
          pppppppcVar19 = (code *******)*pppppppcVar1;
          pppppppcVar33 = pppppppcVar1;
          if (pppppppcVar19 == (code *******)0x0) {
LAB_10a3378e4:
            pppppppcVar33 = (code *******)0x150;
            __Znwm();
            pppppppcVar33[1] = (code ******)0x0;
            pppppppcVar33[2] = (code ******)0x0;
            *pppppppcVar33 = (code ******)&PTR_DAT_110bc6af8;
            pppppppcStack_200 = (code *******)0x0;
            pppppppcStack_1f8 = (code *******)0x0;
            pppppppcVar33[4] = (code ******)0x0;
            pppppppcVar33[5] = (code ******)0x0;
            pppppppcVar33[7] = (code ******)0x0;
            pppppppcVar33[8] = (code ******)0x0;
            pppppppcVar33[9] = (code ******)&UNK_10e52b660;
            pppppppcVar33[10] = (code ******)0x0;
            pppppppcVar33[0xb] = (code ******)0x0;
            pppppppcVar33[0xc] = (code ******)0x0;
            pppppppcVar33[0x13] = (code ******)0x0;
            pppppppcVar33[0x12] = (code ******)0x0;
            pppppppcVar33[0x15] = (code ******)0x0;
            pppppppcVar33[0x14] = (code ******)0x0;
            pppppppcVar33[0x17] = (code ******)0x0;
            pppppppcVar33[0x16] = (code ******)0x0;
            pppppppcVar33[0x19] = (code ******)0x0;
            pppppppcVar33[0x18] = (code ******)0x0;
            pppppppcVar33[0x1b] = (code ******)0x0;
            pppppppcVar33[0x1a] = (code ******)0x0;
            pppppppcVar33[0x1c] = (code ******)0x0;
            pppppppcVar33[0xd] = (code ******)&UNK_10e52b660;
            pppppppcVar33[0xe] = (code ******)0x0;
            pppppppcVar33[0xf] = (code ******)0x0;
            pppppppcVar33[0x10] = (code ******)0x0;
            *(undefined4 *)((long)pppppppcVar33 + 0x87) = 0;
            pppppppcVar19 = pppppppcVar33 + 3;
            *pppppppcVar19 = (code ******)&PTR_FUN_110bc5bd8;
            pppppppcVar33[6] = (code ******)&PTR_DAT_110bc5bf8;
            if (cStack_239 < '\0') {
              func_0x000107c3192c(pppppppcVar33 + 0x1d,ppppppcStack_250,ppppppcStack_248);
            }
            else {
              pppppppcVar33[0x1e] = ppppppcStack_248;
              pppppppcVar33[0x1d] = ppppppcStack_250;
              pppppppcVar33[0x1f] = (code ******)CONCAT17(cStack_239,uStack_240);
            }
            pppppppcVar33[0x20] = ppppppcStack_238;
            uStack_110 = (code *)0x0;
            uStack_108 = (undefined **)0x0;
            FUN_10a35076c(pppppppcVar33 + 0x21,pppppppcVar19,&uStack_110);
            plVar6 = (long *)uStack_108;
            if (uStack_108 != (undefined **)0x0) {
              plVar5 = (long *)(uStack_108 + 1);
              do {
                lVar28 = *plVar5;
                cVar11 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                if (bVar32) {
                  *plVar5 = lVar28 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (lVar28 == 0) {
                (**(code **)((long)*uStack_108 + 0x10))(uStack_108);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
              }
            }
            ppppppcVar21 = (code ******)0x58;
            __Znwm();
            ppppppcVar21[1] = (code *****)0x0;
            ppppppcVar21[2] = (code *****)0x0;
            *ppppppcVar21 = (code *****)&PTR_DAT_110bf7fc8;
            ppppppcVar21[8] = (code *****)0x0;
            ppppppcVar21[7] = (code *****)0x0;
            ppppppcVar21[6] = (code *****)0x0;
            ppppppcVar21[5] = (code *****)0x0;
            *(undefined8 *)((long)ppppppcVar21 + 0x4d) = 0;
            *(undefined8 *)((long)ppppppcVar21 + 0x45) = 0;
            ppppppcVar21[4] = (code *****)0x0;
            ppppppcVar21[3] = (code *****)0x0;
            pppppppcVar33[0x23] = ppppppcVar21 + 3;
            pppppppcVar33[0x24] = ppppppcVar21;
            FUN_10a5cf1fc(pppppppcVar33 + 0x23);
            uStack_b0 = (code *)0x0;
            uStack_a8 = (undefined **)0x0;
            FUN_10a3507d4(pppppppcVar33 + 0x25,pppppppcVar19,&uStack_b0);
            plVar6 = (long *)uStack_a8;
            if (uStack_a8 != (undefined **)0x0) {
              plVar5 = (long *)(uStack_a8 + 1);
              do {
                lVar28 = *plVar5;
                cVar11 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                if (bVar32) {
                  *plVar5 = lVar28 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (lVar28 == 0) {
                (**(code **)((long)*uStack_a8 + 0x10))(uStack_a8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
              }
            }
            *(undefined4 *)(pppppppcVar33 + 0x27) = 1;
            *(undefined1 *)((long)pppppppcVar33 + 0x13c) = 0;
            pppppppcVar33[0x28] = (code ******)0x0;
            *(undefined4 *)(pppppppcVar33 + 0x29) = 0;
            if (sRam0000000113301c22 == -1) {
              sRam0000000113301c22 = 0x128;
            }
            func_0x00010a1bd170(auStack_208);
            pppppppcVar30 = pppppppcStack_1f8;
            if (pppppppcStack_1f8 != (code *******)0x0) {
              pppppppcVar27 = pppppppcStack_1f8 + 1;
              do {
                ppppppcVar21 = *pppppppcVar27;
                cVar11 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar27,0x10);
                if (bVar32) {
                  *pppppppcVar27 = (code ******)((long)ppppppcVar21 + -1);
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (ppppppcVar21 == (code ******)0x0) {
                (*(code *)(*pppppppcStack_1f8)[2])(pppppppcStack_1f8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar30);
              }
            }
            pppppppcStack_280 = pppppppcVar19;
            pppppppcStack_278 = pppppppcVar33;
            func_0x00010a350db0(&pppppppcStack_280,pppppppcVar33 + 4,pppppppcVar19);
            pppppppcVar30 = pppppppcStack_158;
            pppppppcStack_280 = (code *******)0x0;
            pppppppcStack_278 = (code *******)0x0;
            pppppppcStack_160 = pppppppcVar19;
            if (pppppppcStack_158 != (code *******)0x0) {
              pppppppcVar19 = pppppppcStack_158 + 1;
              do {
                ppppppcVar21 = *pppppppcVar19;
                cVar11 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar19,0x10);
                if (bVar32) {
                  *pppppppcVar19 = (code ******)((long)ppppppcVar21 + -1);
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (ppppppcVar21 == (code ******)0x0) {
                ppppppcVar21 = *pppppppcStack_158;
                pppppppcStack_158 = pppppppcVar33;
                (*(code *)ppppppcVar21[2])(pppppppcVar30);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar30);
                pppppppcVar33 = pppppppcStack_158;
              }
            }
            pppppppcStack_158 = pppppppcVar33;
            pppppppcVar33 = pppppppcStack_278;
            if (pppppppcStack_278 != (code *******)0x0) {
              plVar6 = (long *)(pppppppcStack_278 + 1);
              do {
                lVar28 = *plVar6;
                cVar11 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar32) {
                  *plVar6 = lVar28 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (lVar28 == 0) {
                (**(code **)((long)*pppppppcStack_278 + 0x10))(pppppppcStack_278);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar33);
              }
            }
            bVar32 = true;
          }
          else {
            do {
              lVar28 = 8;
              if (ppppppcStack_238 <= pppppppcVar19[7]) {
                lVar28 = 0;
                pppppppcVar33 = pppppppcVar19;
              }
              pppppppcVar19 = *(code ********)((long)pppppppcVar19 + lVar28);
            } while (pppppppcVar19 != (code *******)0x0);
            if ((pppppppcVar33 == pppppppcVar1) || (ppppppcStack_238 < pppppppcVar33[7]))
            goto LAB_10a3378e4;
            FUN_10a339448(&pppppppcStack_160,pppppppcVar33[8],pppppppcVar33[9]);
            bVar32 = false;
          }
          pppppppcVar30 = pppppppcStack_158;
          pppppppcVar19 = pppppppcStack_160;
          if (pppppppcStack_158 != (code *******)0x0) {
            pppppppcVar33 = pppppppcStack_158 + 1;
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppppppcVar33,0x10);
              if (bVar12) {
                *pppppppcVar33 = (code ******)((long)*pppppppcVar33 + 1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          uStack_1a0 = 0x10a367d78;
          ppuStack_198 = &PTR_DAT_110bc6b50;
          pppppppcStack_280 = (code *******)0x0;
          pppppppcStack_278 = (code *******)0x0;
          uStack_110 = (code *)0x10a367d78;
          uStack_108 = &PTR_DAT_110bc6b50;
          pppppppcStack_100 = pppppppcStack_160;
          pppppppcStack_f8 = pppppppcStack_158;
          uStack_190 = 0;
          uStack_188 = 0;
          uStack_c0 = CONCAT17(5,(undefined7)uStack_c0);
          uStack_d0 = CONCAT26(uStack_d0._6_2_,0x65756c6176);
          uStack_b0 = FUN_10a367b38;
          uStack_a8 = &PTR_FUN_110bc6b38;
          puVar20 = (undefined8 *)0x58;
          __Znwm();
          *puVar20 = 0x10a367d78;
          puVar20[1] = &PTR_DAT_110bc6b50;
          puVar20[2] = pppppppcVar19;
          puVar20[3] = pppppppcVar30;
          pppppppcStack_100 = (code *******)0x0;
          pppppppcStack_f8 = (code *******)0x0;
          puVar20[9] = uStack_c8;
          puVar20[8] = uStack_d0;
          puVar20[10] = uStack_c0;
          uStack_d0 = 0;
          uStack_c8 = 0;
          uStack_c0 = 0;
          uStack_a0 = puVar20;
          func_0x000107c2b054(&pppppppcStack_200,&UNK_10f64efef);
          (*(code *)(*param_6)[0x4a])
                    (param_6,&PTR_s_value_110bc5df8,&uStack_b0,0,&pppppppcStack_200);
          pppppppcVar33 = (code *******)((ulong)pppppppcVar17 & 0xffffffff);
          if (cStack_1e9 < '\0') {
            __ZdlPv(pppppppcStack_200);
          }
          (*(code *)*uStack_a8)(&uStack_a8);
          (*(code *)*uStack_108)(&uStack_108);
          (*(code *)*ppuStack_198)(&ppuStack_198);
          if (bVar32) {
            uStack_b0 = (code *)pppppppcVar19;
            uStack_a8 = (undefined **)pppppppcVar30;
            if (pppppppcVar30 != (code *******)0x0) {
              pppppppcVar27 = pppppppcVar30 + 1;
              do {
                cVar11 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar27,0x10);
                if (bVar32) {
                  *pppppppcVar27 = (code ******)((long)*pppppppcVar27 + 1);
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
            }
            FUN_10a3394bc(&uStack_110,pppppppcVar23,&uStack_b0,1,0,0);
            pppppppcVar27 = (code *******)uStack_110;
            FUN_10a35e960(uStack_110,ppppppcStack_238,&ppppppcStack_250);
            FUN_10a339448(pppppppcVar27 + 8,pppppppcVar19);
            FUN_10a35eb88(&uStack_110);
            pppppppcVar19 = (code *******)uStack_a8;
            ppuVar25 = (undefined **)pppppppcVar30;
            pppppppcVar27 = pppppppcStack_158;
            if ((code *******)uStack_a8 != (code *******)0x0) {
              pppppppcVar7 = (code *******)(uStack_a8 + 1);
              do {
                ppppppcVar21 = *pppppppcVar7;
                cVar11 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar7,0x10);
                if (bVar32) {
                  *pppppppcVar7 = (code ******)((long)ppppppcVar21 + -1);
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (ppppppcVar21 == (code ******)0x0) {
                (*(code *)*(code ******)((long)*uStack_a8 + 0x10))(uStack_a8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar19);
                ppuVar25 = (undefined **)pppppppcVar30;
                pppppppcVar27 = pppppppcStack_158;
              }
            }
          }
          else {
            uStack_108 = (undefined **)((ulong)uStack_108 & 0xffffffffffffff00);
            pppppppcVar27 = pppppppcVar23;
            uStack_110 = (code *)pppppppcVar23;
            FUN_10a35e960(pppppppcVar23,ppppppcStack_238,&ppppppcStack_250);
            ppuVar25 = (undefined **)pppppppcVar30;
            FUN_10a339448(pppppppcVar27 + 8,pppppppcVar19);
            FUN_10a35e92c(&uStack_110);
            pppppppcVar27 = pppppppcVar30;
          }
          unaff_x25 = (undefined **)pppppppcVar27;
          pppppppcVar19 = pppppppcStack_210;
          if (pppppppcVar27 != (code *******)0x0) {
            pppppppcVar30 = pppppppcVar27 + 1;
            do {
              ppppppcVar21 = *pppppppcVar30;
              cVar11 = '\x01';
              bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
              if (bVar32) {
                *pppppppcVar30 = (code ******)((long)ppppppcVar21 + -1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (ppppppcVar21 == (code ******)0x0) {
              (*(code *)(*pppppppcVar27)[2])(pppppppcVar27);
              goto LAB_10a338ac4;
            }
          }
        }
        else {
          if (lStack_258 == 0x1d29387c5d1a) {
            (*(code *)(*param_6)[8])(param_6,&PTR_s_value_110bc5df8);
            uStack_110 = (code *)CONCAT44(uStack_110._4_4_,uVar34);
            pppppppcVar19 = (code *******)0x80;
            __Znwm();
            pppppppcVar19[2] = (code ******)0x0;
            pppppppcVar30 = pppppppcVar19 + 3;
            *pppppppcVar19 = (code ******)&PTR_DAT_110ba1f48;
            pppppppcVar19[1] = (code ******)0x0;
            ppuVar25 = (undefined **)&uStack_110;
            FUN_10a0daf68(pppppppcVar30,&ppppppcStack_250);
            pppppppcStack_218 = pppppppcVar30;
            if (pppppppcStack_210 != (code *******)0x0) {
              pppppppcVar30 = pppppppcStack_210 + 1;
              do {
                ppppppcVar21 = *pppppppcVar30;
                cVar11 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                if (bVar32) {
                  *pppppppcVar30 = (code ******)((long)ppppppcVar21 + -1);
                  cVar11 = ExclusiveMonitorsStatus();
                }
                pppppppcVar27 = pppppppcStack_210;
              } while (cVar11 != '\0');
              goto LAB_10a338aac;
            }
            goto LAB_10a338ac8;
          }
          if (lStack_258 != 0x13443e4ef45c6f8e) {
            if (lStack_258 != 0x19108854dc74e3e6) goto LAB_10a338edc;
            pppppppcVar30 = param_6;
            (*(code *)(*param_6)[7])(param_6,&PTR_DAT_110bc4f80,0xd);
            pppppppcStack_200 = (code *******)0x0;
            pppppppcStack_1f8 = (code *******)0x0;
            pppppppcVar27 = (code *******)*pppppppcVar3;
            pppppppcVar33 = pppppppcVar3;
            if (pppppppcVar27 == (code *******)0x0) {
LAB_10a337fc8:
              pppppppcVar19 = (code *******)0x1e0;
              __Znwm();
              pppppppcVar19[1] = (code ******)0x0;
              pppppppcVar19[2] = (code ******)0x0;
              pppppppcVar33 = pppppppcVar19 + 3;
              *pppppppcVar19 = (code ******)&PTR_FUN_110bc5b10;
              FUN_10a34effc(pppppppcVar33,&ppppppcStack_250,(int)(short)pppppppcVar30);
              uStack_110 = (code *)pppppppcVar33;
              uStack_108 = (undefined **)pppppppcVar19;
              FUN_10a34f708(&uStack_110,pppppppcVar19 + 5,pppppppcVar33);
              pppppppcStack_1f8 = (code *******)uStack_108;
              pppppppcStack_200 = (code *******)uStack_110;
              bVar32 = true;
            }
            else {
              do {
                lVar28 = 8;
                if (ppppppcStack_238 <= pppppppcVar27[7]) {
                  lVar28 = 0;
                  pppppppcVar33 = pppppppcVar27;
                }
                pppppppcVar27 = *(code ********)((long)pppppppcVar27 + lVar28);
              } while (pppppppcVar27 != (code *******)0x0);
              if ((pppppppcVar33 == pppppppcVar3) || (ppppppcStack_238 < pppppppcVar33[7]))
              goto LAB_10a337fc8;
              ppppppcVar21 = pppppppcVar33[8];
              (*(code *)(*ppppppcVar21)[5])();
              if (((uint)ppppppcVar21 & 0xffff) != ((uint)pppppppcVar30 & 0xffff))
              goto LAB_10a337fc8;
              FUN_10a336cdc(&pppppppcStack_200,pppppppcVar33[8],pppppppcVar33[9]);
              bVar32 = false;
              uStack_110 = (code *)pppppppcVar19;
            }
            pppppppcVar33 = pppppppcStack_1f8;
            unaff_x25 = (undefined **)pppppppcStack_200;
            uVar34 = SUB84(uStack_110,0);
            pppppppcStack_100 = pppppppcStack_200 + 4;
            uVar10 = *(ushort *)((long)pppppppcStack_200 + 0x109);
            *(ushort *)((long)pppppppcStack_200 + 0x109) = uVar10 & 0xff80 | uVar10 + 1 & 0x7f;
            *(ushort *)(pppppppcStack_200 + 10) =
                 *(ushort *)(pppppppcStack_200 + 10) & 0xff80 |
                 *(ushort *)(pppppppcStack_200 + 10) + 1 & 0x7f;
            pppppppcStack_f8 = (code *******)CONCAT71(pppppppcStack_f8._1_7_,1);
            uStack_110 = FUN_10a1d3648;
            uStack_108 = &PTR_FUN_110bad818;
            if (pppppppcStack_1f8 != (code *******)0x0) {
              pppppppcVar19 = pppppppcStack_1f8 + 1;
              do {
                cVar11 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(pppppppcVar19,0x10);
                if (bVar12) {
                  *pppppppcVar19 = (code ******)((long)*pppppppcVar19 + 1);
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
            }
            pppppppcStack_150 = (code *******)FUN_10a3679e8;
            ppuStack_148 = &PTR_FUN_110bc6ad0;
            uStack_b0 = (code *)0x0;
            uStack_a8 = (undefined **)0x0;
            pppppppcStack_140 = pppppppcStack_200;
            pppppppcStack_138 = pppppppcStack_1f8;
            FUN_10a02d928(param_6,&PTR_s_value_110bc5df8,&pppppppcStack_150,0);
            (*(code *)*ppuStack_148)(&ppuStack_148);
            pppppppcVar19 = param_6;
            (*(code *)(*param_6)[7])(param_6,&PTR_DAT_110bc4fa0,2);
            pppppppcVar30 = param_6;
            (*(code *)(*param_6)[0x40])(param_6,&PTR_DAT_110bc4fc0);
            if (((int)pppppppcVar30 == 0) ||
               (pppppppcVar30 = param_6, (*(code *)(*param_6)[0x40])(param_6,&PTR_DAT_110bc4fe0),
               (int)pppppppcVar30 == 0)) {
              pppppppcVar30 = param_6;
              (*(code *)(*param_6)[7])(param_6,&PTR_DAT_110bc5020,1);
              uVar15 = SUB84(pppppppcVar30,0);
              uVar26 = uVar15;
              uVar16 = uVar15;
            }
            else {
              pppppppcVar30 = param_6;
              (*(code *)(*param_6)[6])(param_6,&PTR_DAT_110bc4fc0);
              uVar15 = SUB84(pppppppcVar30,0);
              pppppppcVar30 = param_6;
              (*(code *)(*param_6)[6])(param_6,&PTR_DAT_110bc4fe0);
              pppppppcVar27 = param_6;
              (*(code *)(*param_6)[7])(param_6,&PTR_DAT_110bc5000,1);
              uVar26 = (int)pppppppcVar30;
              uVar16 = (int)pppppppcVar27;
            }
            pppppppcVar30 = param_6;
            (*(code *)(*param_6)[0xb])(param_6,&PTR_DAT_110bc5040,0);
            uStack_b0 = (code *)0x0;
            uStack_a8 = (undefined **)0x0;
            (*(code *)(*param_6)[0x22])(param_6,&PTR_DAT_110bc5060,&uStack_b0);
            uStack_b0 = (code *)CONCAT71(uStack_b0._1_7_,(char)pppppppcVar30);
            uStack_b0 = (code *)CONCAT44((int)pppppppcVar19,(undefined4)uStack_b0);
            uStack_a8 = (undefined **)CONCAT44(uVar26,uVar15);
            uStack_a0 = (undefined8 *)CONCAT44(uVar34,uVar16);
            uStack_8c = 0x3e80000;
            uStack_98 = param_2;
            uStack_94 = param_3;
            uStack_90 = param_4;
            FUN_10a351a84(unaff_x25 + 0x33,&uStack_b0);
            pppppppcVar19 = pppppppcStack_200;
            if (bVar32) {
              pppppppcStack_160 = pppppppcStack_200;
              if (pppppppcVar33 != (code *******)0x0) {
                pppppppcVar30 = pppppppcVar33 + 1;
                do {
                  cVar11 = '\x01';
                  bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                  if (bVar32) {
                    *pppppppcVar30 = (code ******)((long)*pppppppcVar30 + 1);
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
              }
              pppppppcStack_158 = pppppppcVar33;
              FUN_10a336c44(&uStack_b0,pppppppcVar2,&pppppppcStack_160,1,0,0);
              pppppppcStack_280 = &ppppppcStack_250;
              pppppppcVar30 = (code *******)uStack_b0;
              FUN_10a36599c(uStack_b0,&ppppppcStack_250,&UNK_10dd5b8f9,&pppppppcStack_280,
                            auStack_208);
              FUN_10a336cdc(pppppppcVar30 + 8,pppppppcVar19);
              FUN_10a365790(&uStack_b0);
              pppppppcVar19 = pppppppcStack_158;
              ppuVar25 = (undefined **)pppppppcVar33;
              pppppppcVar27 = pppppppcStack_1f8;
              if (pppppppcStack_158 != (code *******)0x0) {
                pppppppcVar30 = pppppppcStack_158 + 1;
                do {
                  ppppppcVar21 = *pppppppcVar30;
                  cVar11 = '\x01';
                  bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                  if (bVar32) {
                    *pppppppcVar30 = (code ******)((long)ppppppcVar21 + -1);
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                if (ppppppcVar21 == (code ******)0x0) {
                  (*(code *)(*pppppppcStack_158)[2])(pppppppcStack_158);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar19);
                  ppuVar25 = (undefined **)pppppppcVar33;
                  pppppppcVar27 = pppppppcStack_1f8;
                }
              }
            }
            else {
              uStack_a8 = (undefined **)((ulong)uStack_a8 & 0xffffffffffffff00);
              pppppppcStack_160 = &ppppppcStack_250;
              pppppppcVar19 = pppppppcVar2;
              uStack_b0 = (code *)pppppppcVar2;
              FUN_10a36599c(pppppppcVar2,&ppppppcStack_250,&UNK_10dd5b8f9,&pppppppcStack_160,
                            &pppppppcStack_280);
              ppuVar25 = (undefined **)pppppppcVar33;
              FUN_10a336cdc(pppppppcVar19 + 8,pppppppcStack_200);
              FUN_10a365e38(&uStack_b0);
              pppppppcVar27 = pppppppcVar33;
            }
            pppppppcVar33 = (code *******)((ulong)pppppppcVar17 & 0xffffffff);
            FUN_10a044790(&uStack_110);
            (*(code *)*uStack_108)(&uStack_108);
            pppppppcVar19 = pppppppcStack_210;
            if (pppppppcVar27 != (code *******)0x0) {
              pppppppcVar30 = pppppppcVar27 + 1;
              do {
                ppppppcVar21 = *pppppppcVar30;
                cVar11 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                if (bVar32) {
                  *pppppppcVar30 = (code ******)((long)ppppppcVar21 + -1);
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              goto LAB_10a338aac;
            }
            goto LAB_10a338ac8;
          }
          pppppppcStack_200 = (code *******)0x0;
          pppppppcStack_1f8 = (code *******)0x0;
          pppppppcVar30 = (code *******)*pppppppcVar18;
          pppppppcVar19 = pppppppcVar18;
          if (pppppppcVar30 == (code *******)0x0) {
LAB_10a337b64:
            pppppppcVar19 = (code *******)0x148;
            __Znwm();
            pppppppcVar19[1] = (code ******)0x0;
            pppppppcVar19[2] = (code ******)0x0;
            *pppppppcVar19 = (code ******)&PTR_DAT_110bc6b78;
            pppppppcVar19[4] = (code ******)0x0;
            pppppppcVar19[5] = (code ******)0x0;
            pppppppcVar19[7] = (code ******)0x0;
            pppppppcVar19[8] = (code ******)0x0;
            pppppppcVar19[9] = (code ******)&UNK_10e52b660;
            pppppppcVar19[10] = (code ******)0x0;
            pppppppcVar19[0xb] = (code ******)0x0;
            pppppppcVar19[0xc] = (code ******)0x0;
            pppppppcVar19[0x13] = (code ******)0x0;
            pppppppcVar19[0x12] = (code ******)0x0;
            pppppppcVar19[0x15] = (code ******)0x0;
            pppppppcVar19[0x14] = (code ******)0x0;
            pppppppcVar19[0x17] = (code ******)0x0;
            pppppppcVar19[0x16] = (code ******)0x0;
            pppppppcVar19[0x19] = (code ******)0x0;
            pppppppcVar19[0x18] = (code ******)0x0;
            pppppppcVar19[0x1b] = (code ******)0x0;
            pppppppcVar19[0x1a] = (code ******)0x0;
            pppppppcVar19[0x1c] = (code ******)0x0;
            pppppppcVar19[0xd] = (code ******)&UNK_10e52b660;
            pppppppcVar19[0xe] = (code ******)0x0;
            pppppppcVar19[0xf] = (code ******)0x0;
            pppppppcVar19[0x10] = (code ******)0x0;
            *(undefined4 *)((long)pppppppcVar19 + 0x87) = 0;
            pppppppcVar30 = pppppppcVar19 + 3;
            *pppppppcVar30 = (code ******)&PTR_FUN_110bc5c98;
            pppppppcVar19[6] = (code ******)&PTR_DAT_110bc5cb8;
            if (cStack_239 < '\0') {
              func_0x000107c3192c(pppppppcVar19 + 0x1d,ppppppcStack_250,ppppppcStack_248);
            }
            else {
              pppppppcVar19[0x1e] = ppppppcStack_248;
              pppppppcVar19[0x1d] = ppppppcStack_250;
              pppppppcVar19[0x1f] = (code ******)CONCAT17(cStack_239,uStack_240);
            }
            pppppppcVar19[0x20] = ppppppcStack_238;
            uStack_110 = (code *)0x0;
            uStack_108 = (undefined **)0x0;
            FUN_10a3513ec(pppppppcVar19 + 0x21,pppppppcVar30,&uStack_110);
            plVar6 = (long *)uStack_108;
            if (uStack_108 != (undefined **)0x0) {
              plVar5 = (long *)(uStack_108 + 1);
              do {
                lVar28 = *plVar5;
                cVar11 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                if (bVar32) {
                  *plVar5 = lVar28 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (lVar28 == 0) {
                (**(code **)((long)*uStack_108 + 0x10))(uStack_108);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
              }
            }
            ppppppcVar21 = (code ******)0x58;
            __Znwm();
            ppppppcVar21[1] = (code *****)0x0;
            ppppppcVar21[2] = (code *****)0x0;
            *ppppppcVar21 = (code *****)&PTR_DAT_110bf7fc8;
            ppppppcVar21[8] = (code *****)0x0;
            ppppppcVar21[7] = (code *****)0x0;
            ppppppcVar21[6] = (code *****)0x0;
            ppppppcVar21[5] = (code *****)0x0;
            *(undefined8 *)((long)ppppppcVar21 + 0x4d) = 0;
            *(undefined8 *)((long)ppppppcVar21 + 0x45) = 0;
            ppppppcVar21[4] = (code *****)0x0;
            ppppppcVar21[3] = (code *****)0x0;
            pppppppcVar19[0x23] = ppppppcVar21 + 3;
            pppppppcVar19[0x24] = ppppppcVar21;
            FUN_10a5cf1fc(pppppppcVar19 + 0x23);
            uStack_b0 = (code *)0x0;
            uStack_a8 = (undefined **)0x0;
            FUN_10a351454(pppppppcVar19 + 0x25,pppppppcVar30,&uStack_b0);
            pppppppcVar27 = (code *******)uStack_a8;
            pppppppcVar33 = (code *******)((ulong)pppppppcVar17 & 0xffffffff);
            if ((code *******)uStack_a8 != (code *******)0x0) {
              pppppppcVar7 = (code *******)(uStack_a8 + 1);
              do {
                ppppppcVar21 = *pppppppcVar7;
                cVar11 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar7,0x10);
                if (bVar32) {
                  *pppppppcVar7 = (code ******)((long)ppppppcVar21 + -1);
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (ppppppcVar21 == (code ******)0x0) {
                (*(code *)*(code ******)((long)*uStack_a8 + 0x10))(uStack_a8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar27);
              }
            }
            pppppppcVar19[0x27] = (code ******)0x0;
            pppppppcVar19[0x28] = (code ******)0x0;
            pppppppcStack_160 = pppppppcVar30;
            pppppppcStack_158 = pppppppcVar19;
            FUN_10a3514bc(&pppppppcStack_160,pppppppcVar19 + 4,pppppppcVar30);
            pppppppcVar27 = pppppppcStack_1f8;
            pppppppcStack_160 = (code *******)0x0;
            pppppppcStack_158 = (code *******)0x0;
            pppppppcStack_200 = pppppppcVar30;
            if (pppppppcStack_1f8 != (code *******)0x0) {
              pppppppcVar30 = pppppppcStack_1f8 + 1;
              do {
                ppppppcVar21 = *pppppppcVar30;
                cVar11 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                if (bVar32) {
                  *pppppppcVar30 = (code ******)((long)ppppppcVar21 + -1);
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (ppppppcVar21 == (code ******)0x0) {
                ppppppcVar21 = *pppppppcStack_1f8;
                pppppppcStack_1f8 = pppppppcVar19;
                (*(code *)ppppppcVar21[2])(pppppppcVar27);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar27);
                pppppppcVar19 = pppppppcStack_1f8;
              }
            }
            pppppppcStack_1f8 = pppppppcVar19;
            pppppppcVar19 = pppppppcStack_158;
            if (pppppppcStack_158 != (code *******)0x0) {
              pppppppcVar30 = pppppppcStack_158 + 1;
              do {
                ppppppcVar21 = *pppppppcVar30;
                cVar11 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                if (bVar32) {
                  *pppppppcVar30 = (code ******)((long)ppppppcVar21 + -1);
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (ppppppcVar21 == (code ******)0x0) {
                (*(code *)(*pppppppcStack_158)[2])(pppppppcStack_158);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar19);
              }
            }
            bVar32 = true;
          }
          else {
            do {
              lVar28 = 8;
              if (ppppppcStack_238 <= pppppppcVar30[7]) {
                lVar28 = 0;
                pppppppcVar19 = pppppppcVar30;
              }
              pppppppcVar30 = *(code ********)((long)pppppppcVar30 + lVar28);
            } while (pppppppcVar30 != (code *******)0x0);
            if ((pppppppcVar19 == pppppppcVar18) || (ppppppcStack_238 < pppppppcVar19[7]))
            goto LAB_10a337b64;
            FUN_10a3395c0(&pppppppcStack_200,pppppppcVar19[8],pppppppcVar19[9]);
            bVar32 = false;
          }
          pppppppcVar19 = pppppppcStack_1f8;
          unaff_x25 = (undefined **)pppppppcStack_200;
          if (pppppppcStack_1f8 != (code *******)0x0) {
            pppppppcVar30 = pppppppcStack_1f8 + 1;
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
              if (bVar12) {
                *pppppppcVar30 = (code ******)((long)*pppppppcVar30 + 1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          uStack_1e0 = 0x10a3680a8;
          ppuStack_1d8 = &PTR_DAT_110bc6bd0;
          pppppppcStack_1d0 = pppppppcStack_200;
          pppppppcStack_1c8 = pppppppcStack_1f8;
          uStack_110 = (code *)0x0;
          uStack_108 = (undefined **)0x0;
          FUN_10a339634(param_6,&PTR_s_value_110bc5df8,&uStack_1e0,0);
          (*(code *)*ppuStack_1d8)(&ppuStack_1d8);
          if (bVar32) {
            uStack_b0 = (code *)unaff_x25;
            uStack_a8 = (undefined **)pppppppcVar19;
            if (pppppppcVar19 != (code *******)0x0) {
              pppppppcVar30 = pppppppcVar19 + 1;
              do {
                cVar11 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                if (bVar32) {
                  *pppppppcVar30 = (code ******)((long)*pppppppcVar30 + 1);
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
            }
            FUN_10a339800(&uStack_110,pppppppcVar22,&uStack_b0,1,0,0);
            pppppppcVar30 = (code *******)uStack_110;
            FUN_10a35edac(uStack_110,ppppppcStack_238,&ppppppcStack_250);
            FUN_10a3395c0(pppppppcVar30 + 8,unaff_x25);
            FUN_10a35efa4(&uStack_110);
            pppppppcVar30 = (code *******)uStack_a8;
            ppuVar25 = (undefined **)pppppppcVar19;
            pppppppcVar27 = pppppppcStack_1f8;
            if ((code *******)uStack_a8 != (code *******)0x0) {
              pppppppcVar7 = (code *******)(uStack_a8 + 1);
              do {
                ppppppcVar21 = *pppppppcVar7;
                cVar11 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar7,0x10);
                if (bVar32) {
                  *pppppppcVar7 = (code ******)((long)ppppppcVar21 + -1);
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (ppppppcVar21 == (code ******)0x0) {
                (*(code *)*(code ******)((long)*uStack_a8 + 0x10))(uStack_a8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar30);
                ppuVar25 = (undefined **)pppppppcVar19;
                pppppppcVar27 = pppppppcStack_1f8;
              }
            }
          }
          else {
            uStack_108 = (undefined **)((ulong)uStack_108 & 0xffffffffffffff00);
            pppppppcVar30 = pppppppcVar22;
            uStack_110 = (code *)pppppppcVar22;
            FUN_10a35edac(pppppppcVar22,ppppppcStack_238,&ppppppcStack_250);
            ppuVar25 = (undefined **)pppppppcVar19;
            FUN_10a3395c0(pppppppcVar30 + 8,unaff_x25);
            FUN_10a35ed78(&uStack_110);
            pppppppcVar27 = pppppppcVar19;
          }
          pppppppcVar19 = pppppppcStack_210;
          if (pppppppcVar27 != (code *******)0x0) {
            pppppppcVar30 = pppppppcVar27 + 1;
            do {
              ppppppcVar21 = *pppppppcVar30;
              cVar11 = '\x01';
              bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
              if (bVar32) {
                *pppppppcVar30 = (code ******)((long)ppppppcVar21 + -1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
LAB_10a338aac:
            pppppppcStack_210 = pppppppcVar19;
            pppppppcVar19 = pppppppcStack_210;
            if (ppppppcVar21 == (code ******)0x0) {
              (*(code *)(*pppppppcVar27)[2])(pppppppcVar27);
LAB_10a338ac4:
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar27);
              pppppppcVar19 = pppppppcStack_210;
            }
          }
        }
LAB_10a338ac8:
        pppppppcStack_210 = pppppppcVar19;
        pppppppcVar19 = pppppppcStack_210;
        if (pppppppcStack_218 != (code *******)0x0) {
          uVar9 = uStack_228;
          if (-1 < (char)bStack_219) {
            uVar9 = (ulong)bStack_219;
          }
          if (uVar9 == 0) {
            puStack_2e8 = &UNK_10f64f84c;
LAB_10a338edc:
            FUN_10a00946c(puStack_2e8);
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10a339274);
            (*pcVar13)();
          }
          do {
            ppppppcVar21 = ppppppcRam0000000113301700;
            cVar11 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(0x113301700,0x10);
            if (bVar32) {
              cVar11 = ExclusiveMonitorsStatus();
              ppppppcRam0000000113301700 = (code ******)((long)ppppppcRam0000000113301700 + 1);
            }
          } while (cVar11 != '\0');
          param_5[0x39] = ppppppcVar21;
          uStack_b0 = (code *)pppppppcStack_218;
          uStack_a8 = (undefined **)pppppppcStack_210;
          if (pppppppcStack_210 != (code *******)0x0) {
            pppppppcVar30 = pppppppcStack_210 + 1;
            do {
              cVar11 = '\x01';
              bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
              if (bVar32) {
                *pppppppcVar30 = (code ******)((long)*pppppppcVar30 + 1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          func_0x00010a1bd170(&pppppppcStack_200);
          uStack_108 = (undefined **)((ulong)uStack_108 & 0xffffffffffffff00);
          uStack_110 = (code *)(param_5 + 0x37);
          func_0x00010a1bd170(&pppppppcStack_200);
          ppppppcVar21 = param_5[0x37];
          pppppppcStack_200 = &ppppppcStack_250;
          ppuVar25 = (undefined **)&UNK_10dd5b8f9;
          FUN_10a0da6b4(ppppppcVar21,&ppppppcStack_250,&UNK_10dd5b8f9,&pppppppcStack_200,
                        &pppppppcStack_160);
          FUN_10a334e90(ppppppcVar21 + 8,&pppppppcStack_218);
          FUN_10a365458(&uStack_110);
          if (pppppppcVar19 != (code *******)0x0) {
            pppppppcVar30 = pppppppcVar19 + 1;
            do {
              ppppppcVar21 = *pppppppcVar30;
              cVar11 = '\x01';
              bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
              if (bVar32) {
                *pppppppcVar30 = (code ******)((long)ppppppcVar21 + -1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (ppppppcVar21 == (code ******)0x0) {
              (*(code *)(*pppppppcVar19)[2])(pppppppcVar19);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar19);
            }
          }
        }
        (*(code *)(*param_6)[0x44])(param_6);
        if ((long)pppppppcStack_260 < 0) {
          __ZdlPv(pppppppcStack_270);
        }
        if (cStack_239 < '\0') {
          __ZdlPv(ppppppcStack_250);
        }
        if ((char)bStack_219 < '\0') {
          __ZdlPv(uStack_230);
        }
        pppppppcVar19 = pppppppcStack_210;
        if (pppppppcStack_210 != (code *******)0x0) {
          pppppppcVar30 = pppppppcStack_210 + 1;
          do {
            ppppppcVar21 = *pppppppcVar30;
            cVar11 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
            if (bVar32) {
              *pppppppcVar30 = (code ******)((long)ppppppcVar21 + -1);
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (ppppppcVar21 == (code ******)0x0) {
            (*(code *)(*pppppppcStack_210)[2])(pppppppcStack_210);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar19);
          }
        }
        iVar31 = iVar31 + 1;
      } while (iVar31 != (int)pppppppcVar33);
    }
    (*(code *)(*param_6)[0x44])(param_6);
  }
  (*(code *)(*param_6)[0x42])(param_6,&PTR_s_provider_110bc4bd0);
  (*(code *)(*param_6)[0x4b])(&uStack_110,param_6,0);
  if ((code *******)uStack_110 != (code *******)0x0) {
    ppuVar25 = &PTR_DAT_110bb3230;
    pppppppcVar17 = (code *******)uStack_110;
    ___dynamic_cast(uStack_110,&PTR_DAT_110b9fe10,&PTR_DAT_110bb3230,0);
    if (pppppppcVar17 != (code *******)0x0) {
      pppppppcStack_288 = (code *******)uStack_108;
      pppppppcVar22 = (code *******)&uStack_110;
      pppppppcStack_290 = pppppppcVar17;
      goto LAB_10a338ccc;
    }
  }
  pppppppcVar22 = (code *******)&pppppppcStack_290;
LAB_10a338ccc:
  *pppppppcVar22 = (code ******)0x0;
  pppppppcVar22[1] = (code ******)0x0;
  pppppppcVar17 = (code *******)uStack_108;
  if ((code *******)uStack_108 != (code *******)0x0) {
    pppppppcVar22 = (code *******)(uStack_108 + 1);
    do {
      ppppppcVar21 = *pppppppcVar22;
      cVar11 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar22,0x10);
      if (bVar32) {
        *pppppppcVar22 = (code ******)((long)ppppppcVar21 + -1);
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (ppppppcVar21 == (code ******)0x0) {
      (*(code *)*(code ******)((long)*uStack_108 + 0x10))(uStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar17);
    }
  }
  FUN_10a33506c(param_5 + 0x31,&pppppppcStack_290);
  pppppppcVar17 = pppppppcStack_288;
  if (pppppppcStack_288 != (code *******)0x0) {
    pppppppcVar22 = pppppppcStack_288 + 1;
    do {
      ppppppcVar21 = *pppppppcVar22;
      cVar11 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar22,0x10);
      if (bVar32) {
        *pppppppcVar22 = (code ******)((long)ppppppcVar21 + -1);
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (ppppppcVar21 == (code ******)0x0) {
      (*(code *)(*pppppppcStack_288)[2])(pppppppcStack_288);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar17);
    }
  }
  (*(code *)(*param_6)[0x44])(param_6);
  ppuVar24 = &PTR_DAT_110bc5080;
  pppppppcVar17 = param_6;
  (*(code *)(*param_6)[0x40])();
  if ((int)pppppppcVar17 != 0) {
    ppuVar24 = &PTR_DAT_110bc5080;
    (*(code *)(*param_6)[0x42])(param_6);
    pppppppcVar22 = param_6;
    (*(code *)(*param_6)[0x41])();
    pppppppcVar17 = param_5 + 0x3a;
    ppuStack_148 = (undefined **)((ulong)ppuStack_148 & 0xffffffffffffff00);
    pppppppcStack_150 = pppppppcVar17;
    if ((int)pppppppcVar22 != 0) {
      iVar31 = 0;
      unaff_x25 = &PTR_DAT_110bc4f60;
      do {
        (*(code *)(*param_6)[0x43])(param_6,iVar31);
        (*(code *)(*param_6)[0x14])(&uStack_b0,param_6,&PTR_DAT_110bc5db8);
        pppppppcVar18 = param_6;
        (*(code *)(*param_6)[0x1a])(param_6,&PTR_DAT_110bc4f60,1);
        FUN_10a0d09b4(&uStack_110,&uStack_b0);
        ppuVar25 = (undefined **)&uStack_110;
        pppppppcVar23 = pppppppcVar17;
        ppuVar24 = (undefined **)pppppppcStack_f8;
        FUN_10a3672b8();
        *(int *)(pppppppcVar23 + 8) = (int)pppppppcVar18;
        (*(code *)(*param_6)[0x44])(param_6);
        iVar31 = iVar31 + 1;
      } while ((int)pppppppcVar22 != iVar31);
    }
    (*(code *)(*param_6)[0x44])(param_6);
    pppppppcVar17 = (code *******)&pppppppcStack_150;
    FUN_10a367028();
  }
  if (*(int *)(param_6 + 0xd) < 0x179) {
    FUN_10a331268();
    pppppppcVar17 = param_5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppppppcVar17;
  }
  ___stack_chk_fail();
  unaff_x25[6] = (undefined *)&PTR_FUN_110bc5c18;
  FUN_10a1c00f4(unaff_x25 + 6);
  if ((code ******)unaff_x25[5] != (code ******)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a35e824(&pppppppcStack_200);
  __ZNSt3__119__shared_weak_countD2Ev(unaff_x25);
  __ZdlPv();
  func_0x00010a35eb30(&pppppppcStack_160);
  if ((long)pppppppcStack_260 < 0) {
    __ZdlPv(pppppppcStack_270);
  }
  if (cStack_239 < '\0') {
    __ZdlPv(ppppppcStack_250);
  }
  if ((char)bStack_219 < '\0') {
    __ZdlPv(uStack_230);
  }
  func_0x00010a0daa60(&pppppppcStack_218);
  __Unwind_Resume();
  if ((code *******)ppuVar25 != (code *******)0x0) {
    pppppppcVar22 = (code *******)(ppuVar25 + 1);
    do {
      cVar11 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(pppppppcVar22,0x10);
      if (bVar32) {
        *pppppppcVar22 = (code ******)((long)*pppppppcVar22 + 1);
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  ppppppcVar21 = pppppppcVar17[1];
  *pppppppcVar17 = (code ******)ppuVar24;
  pppppppcVar17[1] = (code ******)ppuVar25;
  if (ppppppcVar21 != (code ******)0x0) {
    ppppppcVar8 = ppppppcVar21 + 1;
    do {
      pppppcVar29 = *ppppppcVar8;
      cVar11 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(ppppppcVar8,0x10);
      if (bVar32) {
        *ppppppcVar8 = (code *****)((long)pppppcVar29 + -1);
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (pppppcVar29 == (code *****)0x0) {
      (*(code *)(*ppppppcVar21)[2])(ppppppcVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar21);
    }
  }
  return pppppppcVar17;
}



/* Entry: 10a339448; end: 10a3394bb;  */

undefined8 * FUN_10a339448(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10a3394bc; end: 10a3395bf;  */

void FUN_10a3394bc(long *param_1,long param_2,long *param_3,long param_4,long *param_5,long param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_48 [8];
  
  iVar3 = (int)auStack_48;
  func_0x00010a1bd170();
  if (iVar3 == 0) {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    iVar3 = (int)auStack_48;
    func_0x00010a1bd170();
    plVar5 = (long *)0x0;
    if (iVar3 == 0) {
      plVar5 = param_3;
    }
    lVar4 = 0;
    if (iVar3 == 0) {
      lVar4 = param_4;
    }
  }
  else {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    func_0x00010a1bd170(auStack_48);
    plVar5 = (long *)0x0;
    lVar4 = 0;
  }
  lVar1 = -0x290;
  if (cRam00000001137eafa8 == '\0') {
    lVar1 = -0xffff;
  }
  if (param_6 != 0) {
    lVar2 = 0;
    if (param_2 != 0) {
      lVar2 = param_2 + lVar1 + 0x40;
    }
    param_6 = param_6 << 4;
    do {
      if (*param_5 != 0) {
        func_0x00010a1bf190(*param_5 + 0x18,lVar2);
      }
      param_5 = param_5 + 2;
      param_6 = param_6 + -0x10;
    } while (param_6 != 0);
  }
  if (lVar4 != 0) {
    lVar4 = lVar4 << 4;
    do {
      if (*plVar5 != 0) {
        func_0x00010a1bf34c(*plVar5 + 0x18,param_2 + lVar1 + 0x40);
      }
      plVar5 = plVar5 + 2;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 10a3395c0; end: 10a339633;  */

undefined8 * FUN_10a3395c0(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10a339634; end: 10a3397ff;  */

code * FUN_10a339634(code *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                    undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  code **ppcVar10;
  long *plVar11;
  long lVar12;
  code **ppcVar13;
  undefined1 auStack_158 [8];
  code **ppcStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  code *pcStack_138;
  undefined8 *puStack_130;
  undefined8 **ppuStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long alStack_108 [2];
  char cStack_f1;
  undefined8 uStack_f0;
  undefined8 *apuStack_e8 [7];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f0 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_e8,param_3 + 1);
  FUN_109ffe064(&uStack_b0,*param_2,param_2[1]);
  pcStack_98 = FUN_10a367dec;
  ppuStack_90 = &PTR_FUN_110bc6bb8;
  puVar5 = (undefined8 *)0x58;
  __Znwm();
  *puVar5 = uStack_f0;
  (*(code *)apuStack_e8[0][2])(puVar5 + 1,apuStack_e8);
  puVar5[9] = uStack_a8;
  puVar5[8] = uStack_b0;
  puVar5[10] = lStack_a0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  uStack_b0 = 0;
  puStack_88 = puVar5;
  func_0x000107c2b054(alStack_108,&UNK_10f64efef);
  ppcVar10 = &pcStack_98;
  plVar11 = alStack_108;
  pcVar6 = param_1;
  puVar9 = param_2;
  (**(code **)(*(long *)param_1 + 0x250))(param_1);
  if (cStack_f1 < '\0') {
    __ZdlPv(alStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  ppuVar7 = apuStack_e8;
  (*(code *)*apuStack_e8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (cStack_f1 < '\0') {
      __ZdlPv(alStack_108[0]);
    }
    (*(code *)*ppuStack_90)(&ppuStack_90);
    if (lStack_a0 < 0) {
      __ZdlPv(uStack_b0);
    }
    (*(code *)*apuStack_e8[0])(apuStack_e8);
    ppuVar8 = ppuVar7;
    __Unwind_Resume();
    pcStack_118 = FUN_10a339800;
    iVar4 = (int)auStack_158;
    ppcStack_150 = &pcStack_98;
    puStack_148 = &uStack_f0;
    puStack_140 = puVar5;
    pcStack_138 = param_1;
    puStack_130 = param_2;
    ppuStack_128 = ppuVar7;
    puStack_120 = &stack0xfffffffffffffff0;
    func_0x00010a1bd170();
    if (iVar4 == 0) {
      *ppuVar8 = puVar9;
      *(undefined1 *)(ppuVar8 + 1) = 0;
      pcVar6 = (code *)auStack_158;
      func_0x00010a1bd170();
      bVar3 = (int)pcVar6 == 0;
      ppcVar13 = (code **)0x0;
      if (bVar3) {
        ppcVar13 = ppcVar10;
      }
      lVar12 = 0;
      if (bVar3) {
        lVar12 = param_4;
      }
    }
    else {
      *ppuVar8 = puVar9;
      *(undefined1 *)(ppuVar8 + 1) = 0;
      pcVar6 = (code *)auStack_158;
      func_0x00010a1bd170(pcVar6);
      ppcVar13 = (code **)0x0;
      lVar12 = 0;
    }
    lVar1 = -0x2a8;
    if (cRam00000001137eafaa == '\0') {
      lVar1 = -0xffff;
    }
    if (param_6 != 0) {
      lVar2 = 0;
      if (puVar9 != (undefined8 *)0x0) {
        lVar2 = (long)puVar9 + lVar1 + 0x40;
      }
      param_6 = param_6 << 4;
      do {
        if (*plVar11 != 0) {
          pcVar6 = (code *)(*plVar11 + 0x18);
          func_0x00010a1bf190(pcVar6,lVar2);
        }
        plVar11 = plVar11 + 2;
        param_6 = param_6 + -0x10;
      } while (param_6 != 0);
    }
    if (lVar12 != 0) {
      lVar12 = lVar12 << 4;
      do {
        if (*ppcVar13 != (code *)0x0) {
          pcVar6 = *ppcVar13 + 0x18;
          func_0x00010a1bf34c(pcVar6,(long)puVar9 + lVar1 + 0x40);
        }
        ppcVar13 = ppcVar13 + 2;
        lVar12 = lVar12 + -0x10;
      } while (lVar12 != 0);
    }
    return pcVar6;
  }
  return pcVar6;
}


