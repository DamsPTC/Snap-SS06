/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a95aa00; end: 10a95abcf;  */

void FUN_10a95aa00(long *param_1,long *param_2)

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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a95ac20);
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



/* Entry: 10a95abd0; end: 10a95ac1f;  */

void FUN_10a95abd0(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a95ac20);
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



/* Entry: 10a95ac20; end: 10a95b21b;  */

/* WARNING: Possible PIC construction at 0x00010a95b210: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a95b214) */
/* WARNING: Removing unreachable block (ram,0x00010a95b234) */
/* WARNING: Removing unreachable block (ram,0x00010a95b244) */
/* WARNING: Removing unreachable block (ram,0x00010a95b26c) */
/* WARNING: Removing unreachable block (ram,0x00010a95b278) */
/* WARNING: Removing unreachable block (ram,0x00010a95b290) */
/* WARNING: Removing unreachable block (ram,0x00010a95b2c8) */
/* WARNING: Removing unreachable block (ram,0x00010a95b2f4) */
/* WARNING: Removing unreachable block (ram,0x00010a95b2e0) */
/* WARNING: Removing unreachable block (ram,0x00010a95b2e8) */
/* WARNING: Removing unreachable block (ram,0x00010a95b2f8) */
/* WARNING: Removing unreachable block (ram,0x00010a95b300) */
/* WARNING: Removing unreachable block (ram,0x00010a95b310) */
/* WARNING: Removing unreachable block (ram,0x00010a95b31c) */
/* WARNING: Removing unreachable block (ram,0x00010a95b33c) */
/* WARNING: Removing unreachable block (ram,0x00010a95b328) */
/* WARNING: Removing unreachable block (ram,0x00010a95b330) */
/* WARNING: Removing unreachable block (ram,0x00010a95b340) */
/* WARNING: Removing unreachable block (ram,0x00010a95b348) */
/* WARNING: Removing unreachable block (ram,0x00010a95b34c) */
/* WARNING: Removing unreachable block (ram,0x00010a95b370) */
/* WARNING: Removing unreachable block (ram,0x00010a95b358) */
/* WARNING: Removing unreachable block (ram,0x00010a95b364) */
/* WARNING: Removing unreachable block (ram,0x00010a95b374) */
/* WARNING: Removing unreachable block (ram,0x00010a95b37c) */
/* WARNING: Removing unreachable block (ram,0x00010a95b384) */
/* WARNING: Removing unreachable block (ram,0x00010a95b388) */
/* WARNING: Removing unreachable block (ram,0x00010a95b38c) */
/* WARNING: Removing unreachable block (ram,0x00010a95b3a8) */
/* WARNING: Removing unreachable block (ram,0x00010a95b394) */
/* WARNING: Removing unreachable block (ram,0x00010a95b39c) */
/* WARNING: Removing unreachable block (ram,0x00010a95b3ac) */
/* WARNING: Removing unreachable block (ram,0x00010a95b3b4) */
/* WARNING: Removing unreachable block (ram,0x00010a95b3c0) */
/* WARNING: Removing unreachable block (ram,0x00010a95b3dc) */
/* WARNING: Removing unreachable block (ram,0x00010a95b404) */
/* WARNING: Removing unreachable block (ram,0x00010a95b3ec) */
/* WARNING: Removing unreachable block (ram,0x00010a95b28c) */
/* WARNING: Removing unreachable block (ram,0x00010a95b260) */

void FUN_10a95ac20(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar17;
  long *unaff_x22;
  long lVar18;
  long lVar19;
  long *unaff_x23;
  long *plVar20;
  long lVar21;
  long *unaff_x24;
  long *plVar22;
  ulong unaff_x25;
  ulong uVar23;
  ulong unaff_x26;
  ulong uVar24;
  long *unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  byte bStack_70;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_2;
  uStack_e8 = param_1;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  FUN_10a95b21c(param_2,param_3);
  FUN_10a95b284(param_5);
  if (*param_4 == 7) {
    plVar11 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar12 = param_2;
    plStack_c0 = plVar11;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_c0);
    if ((int)plVar12 != 0) {
      plVar11 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar10 = plVar11[0x48];
      if ((lVar10 == 0) ||
         (___dynamic_cast(lVar10,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar11 = plStack_c0,
         lVar10 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a95b204;
      }
      plStack_c0 = (long *)0x0;
      lStack_a8 = CONCAT44(lStack_a8._4_4_,7);
      plStack_a0 = plVar11;
      plStack_b0 = param_2;
      FUN_10a688ac0(&plStack_e0,&plStack_b0,*(undefined8 *)(lVar10 + 8));
      if ((3 < (int)lStack_a8) && (plStack_a0 != (long *)0x0)) {
        (**(code **)*plStack_a0)();
      }
    }
    if (plStack_c0 != (long *)0x0) {
      (**(code **)*plStack_c0)();
    }
    if (((ulong)plVar12 & 1) != 0) {
      plStack_b0 = plStack_e0;
      lStack_a8 = lStack_d8;
      if (lStack_d8 != 0) {
        plVar11 = (long *)(lStack_d8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_98 = lStack_c8;
      plStack_a0 = plStack_d0;
      if (lStack_c8 != 0) {
        plVar11 = (long *)(lStack_c8 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      bStack_70 = 2;
      plVar11 = (long *)0x30;
      __Znwm();
      plVar12 = plVar11 + 1;
      *plVar12 = 0;
      plVar11[2] = 0;
      *plVar11 = (long)&PTR_FUN_110b9fc88;
      plVar22 = plVar11 + 3;
      *plVar22 = (long)&PTR_FUN_110c0f9b0;
      plVar11[4] = 0;
      plVar11[5] = 0;
      uVar14 = ((ulong)(uint)((int)plVar22 << 3) + 8 ^ (ulong)plVar22 >> 0x20) * -0x622015f714c7d297
      ;
      uVar14 = ((ulong)plVar22 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
      uVar24 = (uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297;
      uVar23 = plVar9[4];
      uVar14 = unaff_x28;
      plStack_c0 = plVar22;
      plStack_b8 = plVar11;
      if (uVar23 != 0) {
        uVar13 = uVar23 - 1;
        if ((uVar23 & uVar13) == 0) {
          uVar14 = uVar13 & uVar24;
        }
        else {
          uVar14 = uVar24;
          if (uVar23 <= uVar24) {
            uVar14 = 0;
            if (uVar23 != 0) {
              uVar14 = uVar24 / uVar23;
            }
            uVar14 = uVar24 - uVar14 * uVar23;
          }
        }
        puVar15 = *(undefined8 **)(plVar9[3] + uVar14 * 8);
        if (puVar15 != (undefined8 *)0x0) {
          for (plVar20 = (long *)*puVar15; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
            uVar16 = plVar20[1];
            if (uVar16 == uVar24) {
              if ((long *)plVar20[2] == plVar22) goto LAB_10a95afc0;
            }
            else {
              if ((uVar23 & uVar13) == 0) {
                uVar16 = uVar16 & uVar13;
              }
              else if (uVar23 <= uVar16) {
                uVar5 = 0;
                if (uVar23 != 0) {
                  uVar5 = uVar16 / uVar23;
                }
                uVar16 = uVar16 - uVar5 * uVar23;
              }
              if (uVar16 != uVar14) break;
            }
          }
        }
      }
      plVar20 = (long *)0x68;
      __Znwm();
      *plVar20 = 0;
      plVar20[1] = uVar24;
      plVar20[2] = (long)plVar22;
      plVar20[3] = (long)plVar11;
      plStack_c0 = (long *)0x0;
      plStack_b8 = (long *)0x0;
      *(undefined1 *)(plVar20 + 0xc) = 3;
      plVar20[4] = (long)plStack_e0;
      plVar20[5] = lStack_a8;
      if (lStack_a8 != 0) {
        plVar12 = (long *)(lStack_a8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar20[7] = lStack_98;
      plVar20[6] = (long)plStack_a0;
      if (lStack_98 != 0) {
        plVar12 = (long *)(lStack_98 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(byte *)(plVar20 + 0xc) = bStack_70;
      if ((uVar23 == 0) || (*(float *)(plVar9 + 7) * (float)uVar23 < (float)(plVar9[6] + 1))) {
        uVar14 = 1;
        if (2 < uVar23) {
          uVar14 = (ulong)((uVar23 & uVar23 - 1) != 0);
        }
        uVar14 = uVar14 | uVar23 << 1;
        uVar23 = (ulong)((float)(plVar9[6] + 1) / *(float *)(plVar9 + 7));
        if (uVar14 <= uVar23) {
          uVar14 = uVar23;
        }
        FUN_10a95aa00(plVar9 + 3,uVar14);
        uVar23 = plVar9[4];
        if ((uVar23 & uVar23 - 1) == 0) {
          uVar14 = uVar23 - 1 & uVar24;
        }
        else {
          uVar14 = uVar24;
          if (uVar23 <= uVar24) {
            uVar14 = 0;
            if (uVar23 != 0) {
              uVar14 = uVar24 / uVar23;
            }
            uVar14 = uVar24 - uVar14 * uVar23;
          }
        }
      }
      lVar10 = plVar9[3];
      plVar12 = *(long **)(lVar10 + uVar14 * 8);
      if (plVar12 == (long *)0x0) {
        plVar12 = plVar9 + 5;
        *plVar20 = *plVar12;
        *plVar12 = (long)plVar20;
        *(long **)(lVar10 + uVar14 * 8) = plVar12;
        if (*plVar20 != 0) {
          uVar13 = *(ulong *)(*plVar20 + 8);
          if ((uVar23 & uVar23 - 1) == 0) {
            uVar13 = uVar13 & uVar23 - 1;
          }
          else if (uVar23 <= uVar13) {
            uVar16 = 0;
            if (uVar23 != 0) {
              uVar16 = uVar13 / uVar23;
            }
            uVar13 = uVar13 - uVar16 * uVar23;
          }
          plVar12 = (long *)(plVar9[3] + uVar13 * 8);
          goto LAB_10a95b064;
        }
      }
      else {
        *plVar20 = *plVar12;
LAB_10a95b064:
        *plVar12 = (long)plVar20;
      }
      plVar9[6] = plVar9[6] + 1;
      goto LAB_10a95b074;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
  goto LAB_10a95b204;
LAB_10a95afc0:
  do {
    lVar10 = *plVar12;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *plVar12 = lVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar10 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
  }
LAB_10a95b074:
  if (*(char *)(plVar9[9] + 8) == '\x01') {
    (*(code *)plVar9[8])(plVar9);
  }
  plStack_b8 = (long *)plVar20[3];
  plStack_c0 = (long *)plVar20[2];
  if (plVar20[3] != 0) {
    plVar12 = (long *)(plVar20[3] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((ulong)bStack_70 < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[bStack_70])(&plStack_b0);
    FUN_10a688c1c(&plStack_e0);
    FUN_10a05ff7c(uStack_e8,param_2,&plStack_c0);
    plVar12 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar2 = plStack_b8 + 1;
      do {
        lVar10 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_2 = plVar12;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      FUN_10a95abd0(1,plVar20);
      FUN_10a004978(&plStack_c0);
      if (3 < (ulong)bStack_70) goto LAB_10a95b204;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_70])(&plStack_b0);
      FUN_10a688c1c(&plStack_e0);
      unaff_x30 = 0x10a95b214;
      register0x00000008 = (BADSPACEBASE *)auStack_f0;
      unaff_x19 = plVar8;
      unaff_x20 = param_2;
      unaff_x21 = plVar11;
      unaff_x22 = plVar9;
      unaff_x23 = plVar20;
      unaff_x24 = plVar22;
      unaff_x25 = uVar23;
      unaff_x26 = uVar24;
      unaff_x27 = plStack_e0;
      unaff_x28 = uVar14;
      unaff_x29 = puVar1;
    }
    plVar9 = plVar8 + 0x4b;
    lVar10 = plVar8[0x59];
    uVar14 = lVar10 - 1;
    plVar8[0x59] = uVar14;
    if (uVar14 < 8) {
      uVar14 = plVar9[lVar10 + 2];
      if (plVar8[0x5a] == uVar14) {
        return;
      }
    }
    else {
      uVar14 = *(ulong *)(plVar8[0x57] + -8);
      plVar8[0x57] = plVar8[0x57] + -8;
      if (plVar8[0x5a] == uVar14) {
        return;
      }
    }
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    lVar10 = *plVar9;
    lVar19 = plVar8[0x4c];
    lVar17 = lVar19 - lVar10;
    uVar23 = lVar17 >> 4;
    if (uVar23 < uVar14) {
      uVar24 = uVar14 - uVar23;
      lVar21 = plVar8[0x4d];
      if ((ulong)(lVar21 - lVar19 >> 4) < uVar24) {
        if (uVar14 >> 0x3c == 0) {
          uVar13 = lVar21 - lVar10 >> 3;
          if (uVar13 <= uVar14) {
            uVar13 = uVar14;
          }
          if (0x7fffffffffffffef < (ulong)(lVar21 - lVar10)) {
            uVar13 = 0xfffffffffffffff;
          }
          *(long **)((long)register0x00000008 + -0x68) = plVar9;
          if (uVar13 >> 0x3c == 0) {
            lVar7 = uVar13 << 4;
            __Znwm();
            lVar19 = lVar7 + lVar17;
            _bzero(lVar19,uVar24 * 0x10);
            lVar18 = lVar19 + uVar23 * -0x10;
            _memcpy(lVar18,lVar10,lVar17);
            *plVar9 = lVar18;
            plVar8[0x4c] = lVar19 + uVar24 * 0x10;
            plVar8[0x4d] = lVar7 + uVar13 * 0x10;
            *(long *)((long)register0x00000008 + -0x78) = lVar10;
            *(long *)((long)register0x00000008 + -0x70) = lVar21;
            *(long *)((long)register0x00000008 + -0x88) = lVar10;
            *(long *)((long)register0x00000008 + -0x80) = lVar10;
            func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
            goto code_r0x00010988c138;
          }
          func_0x000104c4f740();
        }
        else {
          func_0x00010988c1a4();
        }
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
        (*pcVar6)();
      }
      _bzero(lVar19,uVar24 * 0x10);
      plVar8[0x4c] = lVar19 + uVar24 * 0x10;
    }
    else if (uVar14 < uVar23) {
      lVar10 = lVar10 + uVar14 * 0x10;
      while (lVar19 != lVar10) {
        lVar19 = lVar19 + -0x10;
        func_0x00010988c204(lVar19);
      }
      plVar8[0x4c] = lVar10;
    }
code_r0x00010988c138:
    plVar8[0x5a] = uVar14;
    return;
  }
LAB_10a95b204:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a95b208);
  (*pcVar6)();
}



/* Entry: 10a95b21c; end: 10a95b283;  */

void FUN_10a95b21c(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar3 = param_1;
  func_0x000109898688();
  if (lVar3 != 0) {
    FUN_10a053854(param_1,lVar3);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar2 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar2 == 1) {
    return;
  }
  lVar3 = 1;
  puVar5 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,puVar2);
  plVar4 = (long *)(lVar3 + 0x18);
  FUN_10a95b410(plVar4,*puVar5);
  if (plVar4 == (long *)0x0) goto LAB_10a95b3dc;
  uVar8 = *(ulong *)(lVar3 + 0x20);
  lVar6 = *plVar4;
  uVar7 = plVar4[1];
  uVar9 = uVar8 - 1;
  if ((uVar8 & uVar9) == 0) {
    uVar7 = uVar9 & uVar7;
  }
  else if (uVar8 <= uVar7) {
    uVar11 = 0;
    if (uVar8 != 0) {
      uVar11 = uVar7 / uVar8;
    }
    uVar7 = uVar7 - uVar11 * uVar8;
  }
  plVar1 = *(long **)(*(long *)(lVar3 + 0x18) + uVar7 * 8);
  do {
    plVar10 = plVar1;
    plVar1 = (long *)*plVar10;
  } while ((long *)*plVar10 != plVar4);
  if (plVar10 == (long *)(lVar3 + 0x28)) {
LAB_10a95b348:
    if (lVar6 == 0) {
LAB_10a95b37c:
      *(undefined8 *)(*(long *)(lVar3 + 0x18) + uVar7 * 8) = 0;
      lVar6 = *plVar4;
      goto LAB_10a95b384;
    }
    uVar11 = *(ulong *)(lVar6 + 8);
    if ((uVar8 & uVar9) == 0) {
      uVar12 = uVar11 & uVar9;
    }
    else {
      uVar12 = uVar11;
      if (uVar8 <= uVar11) {
        uVar12 = 0;
        if (uVar8 != 0) {
          uVar12 = uVar11 / uVar8;
        }
        uVar12 = uVar11 - uVar12 * uVar8;
      }
    }
    if (uVar12 != uVar7) goto LAB_10a95b37c;
LAB_10a95b38c:
    if ((uVar8 & uVar9) == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar8 <= uVar11) {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar9 * uVar8;
    }
    if (uVar11 != uVar7) {
      *(long **)(*(long *)(lVar3 + 0x18) + uVar11 * 8) = plVar10;
      lVar6 = *plVar4;
    }
  }
  else {
    uVar11 = plVar10[1];
    if ((uVar8 & uVar9) == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar8 <= uVar11) {
      uVar12 = 0;
      if (uVar8 != 0) {
        uVar12 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar12 * uVar8;
    }
    if (uVar11 != uVar7) goto LAB_10a95b348;
LAB_10a95b384:
    if (lVar6 != 0) {
      uVar11 = *(ulong *)(lVar6 + 8);
      goto LAB_10a95b38c;
    }
  }
  *plVar10 = lVar6;
  *plVar4 = 0;
  *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + -1;
  FUN_10a95abd0(1);
LAB_10a95b3dc:
  if (*(char *)(*(long *)(lVar3 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a95b400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x40))(lVar3);
    return;
  }
  return;
}



/* Entry: 10a95b284; end: 10a95b2a7;  */

void FUN_10a95b284(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  
  if ((int)param_1 == 1) {
    return;
  }
  lVar2 = 1;
  puVar4 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,param_1);
  plVar3 = (long *)(lVar2 + 0x18);
  FUN_10a95b410(plVar3,*puVar4);
  if (plVar3 == (long *)0x0) goto LAB_10a95b3dc;
  uVar7 = *(ulong *)(lVar2 + 0x20);
  lVar5 = *plVar3;
  uVar6 = plVar3[1];
  uVar8 = uVar7 - 1;
  if ((uVar7 & uVar8) == 0) {
    uVar6 = uVar8 & uVar6;
  }
  else if (uVar7 <= uVar6) {
    uVar10 = 0;
    if (uVar7 != 0) {
      uVar10 = uVar6 / uVar7;
    }
    uVar6 = uVar6 - uVar10 * uVar7;
  }
  plVar1 = *(long **)(*(long *)(lVar2 + 0x18) + uVar6 * 8);
  do {
    plVar9 = plVar1;
    plVar1 = (long *)*plVar9;
  } while ((long *)*plVar9 != plVar3);
  if (plVar9 == (long *)(lVar2 + 0x28)) {
LAB_10a95b348:
    if (lVar5 == 0) {
LAB_10a95b37c:
      *(undefined8 *)(*(long *)(lVar2 + 0x18) + uVar6 * 8) = 0;
      lVar5 = *plVar3;
      goto LAB_10a95b384;
    }
    uVar10 = *(ulong *)(lVar5 + 8);
    if ((uVar7 & uVar8) == 0) {
      uVar11 = uVar10 & uVar8;
    }
    else {
      uVar11 = uVar10;
      if (uVar7 <= uVar10) {
        uVar11 = 0;
        if (uVar7 != 0) {
          uVar11 = uVar10 / uVar7;
        }
        uVar11 = uVar10 - uVar11 * uVar7;
      }
    }
    if (uVar11 != uVar6) goto LAB_10a95b37c;
LAB_10a95b38c:
    if ((uVar7 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar7 <= uVar10) {
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar8 * uVar7;
    }
    if (uVar10 != uVar6) {
      *(long **)(*(long *)(lVar2 + 0x18) + uVar10 * 8) = plVar9;
      lVar5 = *plVar3;
    }
  }
  else {
    uVar10 = plVar9[1];
    if ((uVar7 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar7 <= uVar10) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar11 * uVar7;
    }
    if (uVar10 != uVar6) goto LAB_10a95b348;
LAB_10a95b384:
    if (lVar5 != 0) {
      uVar10 = *(ulong *)(lVar5 + 8);
      goto LAB_10a95b38c;
    }
  }
  *plVar9 = lVar5;
  *plVar3 = 0;
  *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x30) + -1;
  FUN_10a95abd0(1);
LAB_10a95b3dc:
  if (*(char *)(*(long *)(lVar2 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a95b400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x40))(lVar2);
    return;
  }
  return;
}



/* Entry: 10a95b2a8; end: 10a95b40f;  */

void FUN_10a95b2a8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  plVar2 = (long *)(param_1 + 0x18);
  FUN_10a95b410(plVar2,*param_2);
  if (plVar2 == (long *)0x0) goto LAB_10a95b3dc;
  uVar5 = *(ulong *)(param_1 + 0x20);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + uVar4 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  if (plVar7 == (long *)(param_1 + 0x28)) {
LAB_10a95b348:
    if (lVar3 == 0) {
LAB_10a95b37c:
      *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_10a95b384;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
        uVar9 = uVar8 - uVar9 * uVar5;
      }
    }
    if (uVar9 != uVar4) goto LAB_10a95b37c;
LAB_10a95b38c:
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar6 * uVar5;
    }
    if (uVar8 != uVar4) {
      *(long **)(*(long *)(param_1 + 0x18) + uVar8 * 8) = plVar7;
      lVar3 = *plVar2;
    }
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar9 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a95b348;
LAB_10a95b384:
    if (lVar3 != 0) {
      uVar8 = *(ulong *)(lVar3 + 8);
      goto LAB_10a95b38c;
    }
  }
  *plVar7 = lVar3;
  *plVar2 = 0;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  FUN_10a95abd0(1);
LAB_10a95b3dc:
  if (*(char *)(*(long *)(param_1 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a95b400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(param_1);
    return;
  }
  return;
}



/* Entry: 10a95b410; end: 10a95b4e3;  */

long * FUN_10a95b410(long *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar4 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar4 = ((ulong)uVar2 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          if (plVar7[2] == param_2) {
            return plVar7;
          }
        }
        else {
          if ((uVar3 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar3 <= uVar8) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar1 * uVar3;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a95b4e4; end: 10a95b5ff;  */

void FUN_10a95b4e4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a95b21c(param_2,param_3);
  FUN_10a060490(param_5);
  FUN_10a0604b4(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a95b2a8(plVar6,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
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
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a95b600; end: 10a95b733;  */

void FUN_10a95b600(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
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
  plVar6 = param_2;
  FUN_10a95a6d8(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar16 = (long *)plVar6[0x10];
  if (plVar6[0x10] != 0) {
    plVar6 = (long *)(plVar6[0x10] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
  if (plVar16 != (long *)0x0) {
    plVar6 = plVar16 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
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
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a95b734; end: 10a95b7eb;  */

void FUN_10a95b734(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a95a6d8(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a3fd984(param_1,param_2,plVar4 + 0x11);
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



/* Entry: 10a95b7ec; end: 10a95b9f3;  */

void FUN_10a95b7ec(ulong param_1)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  code *pcVar9;
  ulong uVar10;
  undefined **appuStack_c0 [2];
  char cStack_a9;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109887da8(appuStack_c0,&UNK_10e4e5268,0x4d);
  pppuVar1 = (undefined ***)appuStack_c0[0];
  if (-1 < cStack_a9) {
    pppuVar1 = appuStack_c0;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c31000;
  ppuVar2 = (undefined **)&UNK_10f683c80;
  if (pppuVar1 != (undefined ***)0x0) {
    ppuVar2 = (undefined **)pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,ppuVar2);
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_a8 = (undefined **)pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c31000;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_40,&ppuStack_a8);
  }
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a95b9d4;
    FUN_10a054dac(param_1,&DAT_10f68571c,FUN_10a95c000,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a95b9d4;
    FUN_10a054dac(param_1,&DAT_10f685720,FUN_10a95c3fc,2,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar7 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar7) {
    uVar3 = *(undefined4 *)(lVar7 + -0x50);
    uVar5 = *(undefined4 *)(lVar7 + -0x4c);
    uVar4 = *(undefined4 *)(lVar7 + -0x48);
    uVar6 = *(undefined4 *)(lVar7 + -0x44);
    uVar8 = *(undefined4 *)(lVar7 + -0x18);
    *(long *)(param_1 + 0x170) = lVar7 + -0x68;
    uVar10 = param_1;
    FUN_10a0051e8(param_1,uVar3,uVar5,uVar8,uVar4,uVar6);
    if ((uVar10 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a95b9d4:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a95b9d8);
  (*pcVar9)();
}



/* Entry: 10a95b9f4; end: 10a95bddf;  */

void FUN_10a95b9f4(long *param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x25;
  long *plVar14;
  float fVar15;
  long lVar16;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte bStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = param_3[1];
  uStack_a0 = *param_3;
  if (param_3[1] != 0) {
    plVar5 = (long *)(param_3[1] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_88 = param_3[3];
  uStack_90 = param_3[2];
  if (param_3[3] != 0) {
    plVar5 = (long *)(param_3[3] + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  bStack_60 = 2;
  plVar5 = (long *)0x30;
  __Znwm();
  plVar6 = plVar5 + 1;
  *plVar6 = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110b9fc88;
  plVar14 = plVar5 + 3;
  *plVar14 = (long)&PTR_FUN_110c0f9b0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  uVar9 = ((ulong)(uint)((int)plVar14 << 3) + 8 ^ (ulong)plVar14 >> 0x20) * -0x622015f714c7d297;
  uVar9 = ((ulong)plVar14 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
  uVar13 = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
  uVar9 = *(ulong *)(param_2 + 0x20);
  plStack_b8 = plVar14;
  plStack_b0 = plVar5;
  if (uVar9 != 0) {
    uVar7 = uVar9 - 1;
    if ((uVar9 & uVar7) == 0) {
      unaff_x25 = uVar7 & uVar13;
    }
    else {
      unaff_x25 = uVar13;
      if (uVar9 <= uVar13) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar13 / uVar9;
        }
        unaff_x25 = uVar13 - uVar11 * uVar9;
      }
    }
    puVar10 = *(undefined8 **)(*(long *)(param_2 + 0x18) + unaff_x25 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (plVar12 = (long *)*puVar10; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        uVar11 = plVar12[1];
        if (uVar11 == uVar13) {
          if ((long *)plVar12[2] == plVar14) goto LAB_10a95bc3c;
        }
        else {
          if ((uVar9 & uVar7) == 0) {
            uVar11 = uVar11 & uVar7;
          }
          else if (uVar9 <= uVar11) {
            uVar3 = 0;
            if (uVar9 != 0) {
              uVar3 = uVar11 / uVar9;
            }
            uVar11 = uVar11 - uVar3 * uVar9;
          }
          if (uVar11 != unaff_x25) break;
        }
      }
    }
  }
  plVar12 = (long *)0x68;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = uVar13;
  plVar12[2] = (long)plVar14;
  plVar12[3] = (long)plVar5;
  plStack_b8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  plStack_a8 = plVar12 + 4;
  *(undefined1 *)(plVar12 + 0xc) = 3;
  FUN_10a05fae4(&plStack_a8,&uStack_a0,2);
  *(byte *)(plVar12 + 0xc) = bStack_60;
  fVar15 = (float)(*(long *)(param_2 + 0x30) + 1);
  if ((uVar9 == 0) || (*(float *)(param_2 + 0x38) * (float)uVar9 < fVar15)) {
    uVar7 = 1;
    if (2 < uVar9) {
      uVar7 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar7 = uVar7 | uVar9 << 1;
    uVar9 = (ulong)(fVar15 / *(float *)(param_2 + 0x38));
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    FUN_10a95bde0(param_2 + 0x18,uVar7);
    uVar9 = *(ulong *)(param_2 + 0x20);
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x25 = uVar9 - 1 & uVar13;
    }
    else {
      unaff_x25 = uVar13;
      if (uVar9 <= uVar13) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar13 / uVar9;
        }
        unaff_x25 = uVar13 - uVar7 * uVar9;
      }
    }
  }
  lVar8 = *(long *)(param_2 + 0x18);
  plVar5 = *(long **)(lVar8 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)(param_2 + 0x28);
    *plVar12 = *plVar5;
    *plVar5 = (long)plVar12;
    *(long **)(lVar8 + unaff_x25 * 8) = plVar5;
    if (*plVar12 != 0) {
      uVar13 = *(ulong *)(*plVar12 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar13 = uVar13 & uVar9 - 1;
      }
      else if (uVar9 <= uVar13) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar13 / uVar9;
        }
        uVar13 = uVar13 - uVar7 * uVar9;
      }
      plVar5 = (long *)(*(long *)(param_2 + 0x18) + uVar13 * 8);
      goto LAB_10a95bce0;
    }
  }
  else {
    *plVar12 = *plVar5;
LAB_10a95bce0:
    *plVar5 = (long)plVar12;
  }
  *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + 1;
LAB_10a95bcf0:
  if (*(char *)(*(long *)(param_2 + 0x48) + 8) == '\x01') {
    (**(code **)(param_2 + 0x40))(param_2);
  }
  lVar8 = plVar12[3];
  lVar16 = plVar12[2];
  param_1[1] = plVar12[3];
  *param_1 = lVar16;
  if (lVar8 != 0) {
    plVar5 = (long *)(lVar8 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((ulong)bStack_60 < 4) {
    puVar10 = &uStack_a0;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_60])(puVar10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
    FUN_10a95bfb0(1,plVar12);
    FUN_10a004978(&plStack_b8);
    if ((ulong)bStack_60 < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[bStack_60])(&uStack_a0);
      __Unwind_Resume(puVar10);
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a95bde0);
  (*pcVar4)();
LAB_10a95bc3c:
  do {
    lVar8 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar8 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  goto LAB_10a95bcf0;
}



/* Entry: 10a95bde0; end: 10a95bfaf;  */

void FUN_10a95bde0(long *param_1,long *param_2)

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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a95c000);
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



/* Entry: 10a95bfb0; end: 10a95bfff;  */

void FUN_10a95bfb0(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a95c000);
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



/* Entry: 10a95c000; end: 10a95c133;  */

void FUN_10a95c000(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a95c134(param_2,param_3);
  FUN_10a95c19c(param_5);
  FUN_10a07c4e4(&stack0xffffffffffffffa0,param_2,param_4);
  FUN_10a95b9f4(&lStack_70,plVar7,&stack0xffffffffffffffa0);
  FUN_10a688c1c(&stack0xffffffffffffffa0);
  FUN_10a05ff7c(param_1,param_2,&lStack_70);
  plVar7 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar10 + 2];
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  lVar10 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&lStack_88);
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
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10a95c134; end: 10a95c19b;  */

void FUN_10a95c134(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar3 = param_1;
  func_0x000109898688();
  if (lVar3 != 0) {
    FUN_10a053854(param_1,lVar3);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar2 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar2 == 1) {
    return;
  }
  lVar3 = 1;
  puVar5 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,puVar2);
  plVar4 = (long *)(lVar3 + 0x18);
  FUN_10a95c328(plVar4,*puVar5);
  if (plVar4 == (long *)0x0) goto LAB_10a95c2f4;
  uVar8 = *(ulong *)(lVar3 + 0x20);
  lVar6 = *plVar4;
  uVar7 = plVar4[1];
  uVar9 = uVar8 - 1;
  if ((uVar8 & uVar9) == 0) {
    uVar7 = uVar9 & uVar7;
  }
  else if (uVar8 <= uVar7) {
    uVar11 = 0;
    if (uVar8 != 0) {
      uVar11 = uVar7 / uVar8;
    }
    uVar7 = uVar7 - uVar11 * uVar8;
  }
  plVar1 = *(long **)(*(long *)(lVar3 + 0x18) + uVar7 * 8);
  do {
    plVar10 = plVar1;
    plVar1 = (long *)*plVar10;
  } while ((long *)*plVar10 != plVar4);
  if (plVar10 == (long *)(lVar3 + 0x28)) {
LAB_10a95c260:
    if (lVar6 == 0) {
LAB_10a95c294:
      *(undefined8 *)(*(long *)(lVar3 + 0x18) + uVar7 * 8) = 0;
      lVar6 = *plVar4;
      goto LAB_10a95c29c;
    }
    uVar11 = *(ulong *)(lVar6 + 8);
    if ((uVar8 & uVar9) == 0) {
      uVar12 = uVar11 & uVar9;
    }
    else {
      uVar12 = uVar11;
      if (uVar8 <= uVar11) {
        uVar12 = 0;
        if (uVar8 != 0) {
          uVar12 = uVar11 / uVar8;
        }
        uVar12 = uVar11 - uVar12 * uVar8;
      }
    }
    if (uVar12 != uVar7) goto LAB_10a95c294;
LAB_10a95c2a4:
    if ((uVar8 & uVar9) == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar8 <= uVar11) {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar9 * uVar8;
    }
    if (uVar11 != uVar7) {
      *(long **)(*(long *)(lVar3 + 0x18) + uVar11 * 8) = plVar10;
      lVar6 = *plVar4;
    }
  }
  else {
    uVar11 = plVar10[1];
    if ((uVar8 & uVar9) == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar8 <= uVar11) {
      uVar12 = 0;
      if (uVar8 != 0) {
        uVar12 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar12 * uVar8;
    }
    if (uVar11 != uVar7) goto LAB_10a95c260;
LAB_10a95c29c:
    if (lVar6 != 0) {
      uVar11 = *(ulong *)(lVar6 + 8);
      goto LAB_10a95c2a4;
    }
  }
  *plVar10 = lVar6;
  *plVar4 = 0;
  *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + -1;
  FUN_10a95bfb0(1);
LAB_10a95c2f4:
  if (*(char *)(*(long *)(lVar3 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a95c318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x40))(lVar3);
    return;
  }
  return;
}



/* Entry: 10a95c19c; end: 10a95c1bf;  */

void FUN_10a95c19c(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  
  if ((int)param_1 == 1) {
    return;
  }
  lVar2 = 1;
  puVar4 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,param_1);
  plVar3 = (long *)(lVar2 + 0x18);
  FUN_10a95c328(plVar3,*puVar4);
  if (plVar3 == (long *)0x0) goto LAB_10a95c2f4;
  uVar7 = *(ulong *)(lVar2 + 0x20);
  lVar5 = *plVar3;
  uVar6 = plVar3[1];
  uVar8 = uVar7 - 1;
  if ((uVar7 & uVar8) == 0) {
    uVar6 = uVar8 & uVar6;
  }
  else if (uVar7 <= uVar6) {
    uVar10 = 0;
    if (uVar7 != 0) {
      uVar10 = uVar6 / uVar7;
    }
    uVar6 = uVar6 - uVar10 * uVar7;
  }
  plVar1 = *(long **)(*(long *)(lVar2 + 0x18) + uVar6 * 8);
  do {
    plVar9 = plVar1;
    plVar1 = (long *)*plVar9;
  } while ((long *)*plVar9 != plVar3);
  if (plVar9 == (long *)(lVar2 + 0x28)) {
LAB_10a95c260:
    if (lVar5 == 0) {
LAB_10a95c294:
      *(undefined8 *)(*(long *)(lVar2 + 0x18) + uVar6 * 8) = 0;
      lVar5 = *plVar3;
      goto LAB_10a95c29c;
    }
    uVar10 = *(ulong *)(lVar5 + 8);
    if ((uVar7 & uVar8) == 0) {
      uVar11 = uVar10 & uVar8;
    }
    else {
      uVar11 = uVar10;
      if (uVar7 <= uVar10) {
        uVar11 = 0;
        if (uVar7 != 0) {
          uVar11 = uVar10 / uVar7;
        }
        uVar11 = uVar10 - uVar11 * uVar7;
      }
    }
    if (uVar11 != uVar6) goto LAB_10a95c294;
LAB_10a95c2a4:
    if ((uVar7 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar7 <= uVar10) {
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar8 * uVar7;
    }
    if (uVar10 != uVar6) {
      *(long **)(*(long *)(lVar2 + 0x18) + uVar10 * 8) = plVar9;
      lVar5 = *plVar3;
    }
  }
  else {
    uVar10 = plVar9[1];
    if ((uVar7 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar7 <= uVar10) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar11 * uVar7;
    }
    if (uVar10 != uVar6) goto LAB_10a95c260;
LAB_10a95c29c:
    if (lVar5 != 0) {
      uVar10 = *(ulong *)(lVar5 + 8);
      goto LAB_10a95c2a4;
    }
  }
  *plVar9 = lVar5;
  *plVar3 = 0;
  *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x30) + -1;
  FUN_10a95bfb0(1);
LAB_10a95c2f4:
  if (*(char *)(*(long *)(lVar2 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a95c318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x40))(lVar2);
    return;
  }
  return;
}



/* Entry: 10a95c1c0; end: 10a95c327;  */

void FUN_10a95c1c0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  plVar2 = (long *)(param_1 + 0x18);
  FUN_10a95c328(plVar2,*param_2);
  if (plVar2 == (long *)0x0) goto LAB_10a95c2f4;
  uVar5 = *(ulong *)(param_1 + 0x20);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + uVar4 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  if (plVar7 == (long *)(param_1 + 0x28)) {
LAB_10a95c260:
    if (lVar3 == 0) {
LAB_10a95c294:
      *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_10a95c29c;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
        uVar9 = uVar8 - uVar9 * uVar5;
      }
    }
    if (uVar9 != uVar4) goto LAB_10a95c294;
LAB_10a95c2a4:
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar6 * uVar5;
    }
    if (uVar8 != uVar4) {
      *(long **)(*(long *)(param_1 + 0x18) + uVar8 * 8) = plVar7;
      lVar3 = *plVar2;
    }
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar9 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a95c260;
LAB_10a95c29c:
    if (lVar3 != 0) {
      uVar8 = *(ulong *)(lVar3 + 8);
      goto LAB_10a95c2a4;
    }
  }
  *plVar7 = lVar3;
  *plVar2 = 0;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  FUN_10a95bfb0(1);
LAB_10a95c2f4:
  if (*(char *)(*(long *)(param_1 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a95c318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(param_1);
    return;
  }
  return;
}



/* Entry: 10a95c328; end: 10a95c3fb;  */

long * FUN_10a95c328(long *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar4 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar4 = ((ulong)uVar2 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          if (plVar7[2] == param_2) {
            return plVar7;
          }
        }
        else {
          if ((uVar3 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar3 <= uVar8) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar1 * uVar3;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a95c3fc; end: 10a95c517;  */

void FUN_10a95c3fc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a95c134(param_2,param_3);
  FUN_10a060490(param_5);
  FUN_10a0604b4(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a95c1c0(plVar6,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
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
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a95c518; end: 10a95c5cf;  */

void FUN_10a95c518(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a95a6d8(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a95c5d0(param_1,param_2,plVar4[0x13],plVar4[0x14]);
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



/* Entry: 10a95c5d0; end: 10a95c66f;  */

void FUN_10a95c5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  if (param_4 != (long *)0x0) {
    plVar1 = param_4 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_38 = &PTR_DAT_110c31000;
  uStack_30 = param_3;
  plStack_28 = param_4;
  func_0x000109899de4(param_1,param_2,&uStack_30,&ppuStack_38,0,0);
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



/* Entry: 10a95c670; end: 10a95c727;  */

void FUN_10a95c670(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a95a6d8(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a95c5d0(param_1,param_2,plVar4[0x15],plVar4[0x16]);
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



/* Entry: 10a95c728; end: 10a95c7df;  */

void FUN_10a95c728(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a95a6d8(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a05b924(param_1,param_2,plVar4 + 0x17);
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



/* Entry: 10a95c7e0; end: 10a95c7e3;  */

void FUN_10a95c7e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a95c7e4; end: 10a95c7f7;  */

void FUN_10a95c7e4(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a95c7f8; end: 10a95c80f;  */

void FUN_10a95c7f8(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a95c808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a95c810; end: 10a95c847;  */

undefined8 FUN_10a95c810(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c31078);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a95c848; end: 10a95c84b;  */

void FUN_10a95c848(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a95c84c; end: 10a95c8a3;  */

long FUN_10a95c84c(long param_1)

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



/* Entry: 10a95c8a4; end: 10a95c8b3;  */

void FUN_10a95c8a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c310a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a95c8b4; end: 10a95c8d3;  */

void FUN_10a95c8b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c310a0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a95c8d4; end: 10a95c8e3;  */

void FUN_10a95c8d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a95c8dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a95c8e4; end: 10a95c98b;  */

undefined8 * FUN_10a95c8e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c310f0;
  (**(code **)param_1[9])();
  FUN_10a95cb30(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a95c98c; end: 10a95c9ef;  */

bool FUN_10a95c98c(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x97) {
    iVar1 = 0xe4e5199;
    _memcmp(&UNK_10e4e5199);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a95c9f0; end: 10a95cb0f;  */

void FUN_10a95c9f0(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f683c80);
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010989f98c(&ppuStack_38,param_2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uStack_30;
    *param_1 = (long)ppuStack_38;
    param_1[2] = CONCAT17(bStack_21,uStack_28);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685178,7);
  __ZNSt3__19to_stringEm(&ppuStack_38,*(undefined8 *)(param_2 + 0x30));
  pppuVar2 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar2 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f684600,1);
  return;
}



/* Entry: 10a95cb10; end: 10a95cb1f;  */

undefined1  [16] FUN_10a95cb10(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x97;
  auVar1._0_8_ = &UNK_10e4e5199;
  return auVar1;
}



/* Entry: 10a95cb20; end: 10a95cb2f;  */

long * FUN_10a95cb20(undefined8 param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  func_0x000105277f8c();
  plVar1 = (long *)param_2[2];
  while( true ) {
    if (plVar1 == (long *)0x0) {
      lVar3 = *param_2;
      *param_2 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      return param_2;
    }
    if (3 < (ulong)*(byte *)(plVar1 + 0xc)) break;
    lVar3 = *plVar1;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar1 + 0xc)])(plVar1 + 4);
    FUN_10a004978(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a95cbb0);
  (*pcVar2)();
}



/* Entry: 10a95cb30; end: 10a95cbaf;  */

long * FUN_10a95cb30(long *param_1)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a95cbb0);
  (*pcVar2)();
}



/* Entry: 10a95cbb0; end: 10a95cc07;  */

long FUN_10a95cbb0(long param_1)

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



/* Entry: 10a95cc08; end: 10a95cc17;  */

void FUN_10a95cc08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c31148;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a95cc18; end: 10a95cc37;  */

void FUN_10a95cc18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c31148;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a95cc38; end: 10a95cc47;  */

void FUN_10a95cc38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a95cc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a95cc48; end: 10a95ccef;  */

undefined8 * FUN_10a95cc48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c31198;
  (**(code **)param_1[9])();
  FUN_10a95ce94(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a95ccf0; end: 10a95cd53;  */

bool FUN_10a95ccf0(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x4d) {
    iVar1 = 0xe4e5268;
    _memcmp(&UNK_10e4e5268);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a95cd54; end: 10a95ce73;  */

void FUN_10a95cd54(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f683c80);
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010989f98c(&ppuStack_38,param_2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uStack_30;
    *param_1 = (long)ppuStack_38;
    param_1[2] = CONCAT17(bStack_21,uStack_28);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685178,7);
  __ZNSt3__19to_stringEm(&ppuStack_38,*(undefined8 *)(param_2 + 0x30));
  pppuVar2 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar2 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f684600,1);
  return;
}



/* Entry: 10a95ce74; end: 10a95ce83;  */

undefined1  [16] FUN_10a95ce74(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4d;
  auVar1._0_8_ = &UNK_10e4e5268;
  return auVar1;
}



/* Entry: 10a95ce84; end: 10a95ce93;  */

long * FUN_10a95ce84(undefined8 param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  func_0x000105277f8c();
  plVar1 = (long *)param_2[2];
  while( true ) {
    if (plVar1 == (long *)0x0) {
      lVar3 = *param_2;
      *param_2 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      return param_2;
    }
    if (3 < (ulong)*(byte *)(plVar1 + 0xc)) break;
    lVar3 = *plVar1;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar1 + 0xc)])(plVar1 + 4);
    FUN_10a004978(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a95cf14);
  (*pcVar2)();
}



/* Entry: 10a95ce94; end: 10a95cf13;  */

long * FUN_10a95ce94(long *param_1)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a95cf14);
  (*pcVar2)();
}



/* Entry: 10a95cf14; end: 10a95cfb7;  */

void FUN_10a95cf14(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = param_2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)puVar1[8])();
    *puVar1 = &PTR_DAT_110c30750;
    puVar1[0x1d] = &PTR_FUN_110c307c8;
    func_0x00010a004e5c(puVar1 + 3);
    func_0x00010a004e04(puVar1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a95cfb8; end: 10a95d07f;  */

long * FUN_10a95cfb8(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x80;
  }
  else {
    if (uVar2 != 2) goto LAB_10a95d028;
    lVar3 = 0x100;
  }
  param_1[4] = lVar3;
LAB_10a95d028:
  if (puVar4 != puVar1) {
    do {
      puVar5 = puVar4 + 1;
      __ZdlPv(*puVar4);
      puVar4 = puVar5;
    } while (puVar5 != puVar1);
    lVar3 = param_1[2];
    if (lVar3 != param_1[1]) {
      param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a95d080; end: 10a95d0c3;  */

void FUN_10a95d080(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a95a074(lVar1 + 0x40);
    func_0x00010a061678(lVar1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a95d0c4; end: 10a95d1b7;  */

void FUN_10a95d0c4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar10 = *(long *)(param_1 + 0x10);
  plVar4 = *(long **)(lVar10 + 0x20);
  if (plVar4 != (long *)0x0) {
    uVar7 = *(undefined8 *)(lVar10 + 0x18);
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      lVar10 = *(long *)(lVar10 + 0xd8);
      plVar1 = (long *)(lVar10 + 0x10);
      do {
        lVar5 = *plVar1;
        if (lVar5 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            if (*(char *)(lVar10 + 0xa8) == '\x01') {
              func_0x00010a9592e8(lVar10 + 0x98);
            }
            *(undefined8 *)(lVar10 + 0x98) = uVar7;
            *(long **)(lVar10 + 0xa0) = plVar4;
            *(undefined1 *)(lVar10 + 0xa8) = 1;
            *(undefined8 *)(lVar10 + 0x10) = 2;
            uStack_78 = *(undefined8 *)(lVar10 + 0x60);
            uStack_80 = *(undefined8 *)(lVar10 + 0x58);
            uStack_68 = *(undefined8 *)(lVar10 + 0x70);
            uStack_70 = *(undefined8 *)(lVar10 + 0x68);
            uStack_58 = *(undefined8 *)(lVar10 + 0x80);
            uStack_60 = *(undefined8 *)(lVar10 + 0x78);
            uStack_c0 = *(undefined8 *)(lVar10 + 0x18);
            uStack_b8 = *(undefined8 *)(lVar10 + 0x20);
            uStack_a8 = *(undefined8 *)(lVar10 + 0x30);
            uStack_b0 = *(undefined8 *)(lVar10 + 0x28);
            *(undefined8 **)(lVar10 + 0x88) = (undefined8 *)(lVar10 + 0x18);
            *(undefined1 *)(lVar10 + 0x19) = 0;
            uStack_98 = *(undefined8 *)(lVar10 + 0x40);
            uStack_a0 = *(undefined8 *)(lVar10 + 0x38);
            uStack_88 = *(undefined8 *)(lVar10 + 0x50);
            uStack_90 = *(undefined8 *)(lVar10 + 0x48);
            puVar6 = &uStack_c0;
            do {
              uVar8 = (ulong)*(byte *)((long)puVar6 + 1);
              if (uVar8 != 0) {
                puVar11 = (undefined8 *)((long)puVar6 + 0x20);
                do {
                  uStack_48 = puVar11[-1];
                  uStack_50 = puVar11[-2];
                  uStack_40 = *puVar11;
                  (*(code *)**(undefined8 **)*puVar11)((undefined8 *)*puVar11,&uStack_50);
                  uVar8 = uVar8 - 1;
                  puVar11 = puVar11 + 3;
                } while (uVar8 != 0);
              }
              puVar9 = *(undefined1 **)((long)puVar6 + 8);
              if (puVar6 != &uStack_c0) {
                _free(puVar6);
              }
              puVar6 = (undefined8 *)puVar9;
            } while (puVar9 != (undefined1 *)0x0);
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar5 >> 1 & 1) == 0);
      plVar1 = plVar4 + 1;
      do {
        lVar10 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
        return;
      }
      return;
    }
  }
  FUN_10a043ecc();
  return;
}



/* Entry: 10a95d1b8; end: 10a95d1fb;  */

void FUN_10a95d1b8(void)

{
  return;
}



/* Entry: 10a95d1fc; end: 10a95d90f;  */

void FUN_10a95d1fc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined *puVar9;
  undefined1 uVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined **ppuVar16;
  long *plVar17;
  undefined **ppuVar18;
  long lVar19;
  undefined **unaff_x26;
  undefined **ppuVar20;
  undefined ***pppuStack_2f0;
  undefined ***pppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  long lStack_2c8;
  float fStack_2c0;
  undefined8 uStack_1c0;
  undefined ***pppuStack_1b8;
  undefined ***pppuStack_1b0;
  undefined ***pppuStack_1a8;
  undefined ***pppuStack_1a0;
  undefined ***pppuStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined ***pppuStack_180;
  undefined ***pppuStack_178;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = *(long *)(param_3 + 0x10);
  FUN_10a002a94(&ppuStack_2e0,param_1);
  ppuStack_2e0 = &PTR_FUN_110b99e70;
  __ZNSt13runtime_errorC2ERKS_(&pppuStack_1a0,&ppuStack_2e0);
  _memcpy(&ppuStack_190,&ppuStack_2d0,0x110);
  pppuStack_1a0 = (undefined ***)&PTR_FUN_110b99e70;
  FUN_10a05bde0(&uStack_1c0,&pppuStack_1a0);
  __ZNSt13runtime_errorD2Ev(&pppuStack_1a0);
  pppuVar7 = *(undefined ****)(lVar19 + 0xd8);
  func_0x000109d1b350(pppuVar7,&uStack_1c0);
  __ZNSt13exception_ptrD1Ev(&uStack_1c0);
  pppuVar8 = &ppuStack_2e0;
  __ZNSt13runtime_errorD2Ev(pppuVar8);
  if (((ulong)pppuVar7 & 1) == 0) {
    lVar19 = *(long *)(lVar19 + 0x78);
    pppuVar7 = (undefined ***)0x60;
    __Znwm();
    pppuVar7[1] = (undefined **)0x0;
    pppuVar7[2] = (undefined **)0x0;
    *pppuVar7 = &PTR_FUN_110c31280;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      func_0x000107c3192c(&pppuStack_1a0,*param_1,param_1[1]);
    }
    else {
      pppuStack_198 = (undefined ***)param_1[1];
      pppuStack_1a0 = (undefined ***)*param_1;
      ppuStack_190 = (undefined **)param_1[2];
    }
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(&ppuStack_2e0,*param_2,param_2[1]);
    }
    else {
      ppuStack_2d8 = (undefined **)param_2[1];
      ppuStack_2e0 = (undefined **)*param_2;
      ppuStack_2d0 = (undefined **)param_2[2];
    }
    pppuVar7[4] = (undefined **)0x0;
    pppuVar7[5] = (undefined **)0x0;
    pppuStack_2f0 = pppuVar7 + 3;
    *pppuStack_2f0 = &PTR_FUN_110c30118;
    pppuVar7[7] = (undefined **)pppuStack_198;
    pppuVar7[6] = (undefined **)pppuStack_1a0;
    pppuVar7[8] = ppuStack_190;
    pppuVar7[10] = ppuStack_2d8;
    pppuVar7[9] = ppuStack_2e0;
    pppuVar7[0xb] = ppuStack_2d0;
    ppuStack_2d8 = (undefined **)0x0;
    ppuStack_2e0 = (undefined **)0x0;
    lStack_2c8 = 0;
    ppuStack_2d0 = (undefined **)0x0;
    fStack_2c0 = *(float *)(lVar19 + 0x38);
    pppuStack_2e8 = pppuVar7;
    FUN_10a95aa00(&ppuStack_2e0,*(undefined8 *)(lVar19 + 0x20));
    plVar17 = *(long **)(lVar19 + 0x28);
    if (plVar17 != (long *)0x0) {
      do {
        ppuVar18 = ppuStack_2d8;
        uVar11 = plVar17[2];
        uVar14 = ((ulong)(uint)((int)uVar11 << 3) + 8 ^ uVar11 >> 0x20) * -0x622015f714c7d297;
        uVar14 = (uVar11 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
        ppuVar20 = (undefined **)((uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297);
        if (ppuStack_2d8 != (undefined **)0x0) {
          uVar14 = (long)ppuStack_2d8 - 1;
          if (((ulong)ppuStack_2d8 & uVar14) == 0) {
            unaff_x26 = (undefined **)((ulong)ppuVar20 & uVar14);
          }
          else {
            unaff_x26 = ppuVar20;
            if (ppuStack_2d8 <= ppuVar20) {
              uVar6 = 0;
              if (ppuStack_2d8 != (undefined **)0x0) {
                uVar6 = (ulong)ppuVar20 / (ulong)ppuStack_2d8;
              }
              unaff_x26 = (undefined **)((long)ppuVar20 - uVar6 * (long)ppuStack_2d8);
            }
          }
          puVar15 = (undefined8 *)ppuStack_2e0[(long)unaff_x26];
          if (puVar15 != (undefined8 *)0x0) {
            do {
              while( true ) {
                puVar15 = (undefined8 *)*puVar15;
                if (puVar15 == (undefined8 *)0x0) goto LAB_10a95d450;
                ppuVar16 = (undefined **)puVar15[1];
                if (ppuVar16 != ppuVar20) break;
                if (puVar15[2] == uVar11) goto LAB_10a95d5b0;
              }
              if (((ulong)ppuStack_2d8 & uVar14) == 0) {
                ppuVar16 = (undefined **)((ulong)ppuVar16 & uVar14);
              }
              else if (ppuStack_2d8 <= ppuVar16) {
                uVar6 = 0;
                if (ppuStack_2d8 != (undefined **)0x0) {
                  uVar6 = (ulong)ppuVar16 / (ulong)ppuStack_2d8;
                }
                ppuVar16 = (undefined **)((long)ppuVar16 - uVar6 * (long)ppuStack_2d8);
              }
            } while (ppuVar16 == unaff_x26);
          }
        }
LAB_10a95d450:
        ppuVar16 = (undefined **)0x68;
        __Znwm();
        *ppuVar16 = (undefined *)0x0;
        ppuVar16[1] = (undefined *)ppuVar20;
        lVar12 = plVar17[3];
        puVar9 = (undefined *)plVar17[2];
        ppuVar16[3] = (undefined *)plVar17[3];
        ppuVar16[2] = puVar9;
        if (lVar12 != 0) {
          plVar1 = (long *)(lVar12 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        pppuStack_1a0 = (undefined ***)(ppuVar16 + 4);
        *(undefined1 *)(ppuVar16 + 0xc) = 3;
        if ((char)plVar17[0xc] == '\0') {
          uVar10 = 0;
        }
        else {
          FUN_10a005398(&pppuStack_1a0,plVar17 + 4);
          uVar10 = (undefined1)plVar17[0xc];
        }
        *(undefined1 *)(ppuVar16 + 0xc) = uVar10;
        if ((ppuVar18 == (undefined **)0x0) ||
           (fStack_2c0 * (float)ppuVar18 < (float)(lStack_2c8 + 1))) {
          uVar11 = 1;
          if ((undefined **)0x2 < ppuVar18) {
            uVar11 = (ulong)(((ulong)ppuVar18 & (long)ppuVar18 - 1U) != 0);
          }
          uVar11 = uVar11 | (long)ppuVar18 << 1;
          uVar14 = (ulong)((float)(lStack_2c8 + 1) / fStack_2c0);
          if (uVar11 <= uVar14) {
            uVar11 = uVar14;
          }
          FUN_10a95aa00(&ppuStack_2e0,uVar11);
          ppuVar18 = ppuStack_2d8;
          if (((ulong)ppuStack_2d8 & (long)ppuStack_2d8 - 1U) == 0) {
            unaff_x26 = (undefined **)((long)ppuStack_2d8 - 1U & (ulong)ppuVar20);
          }
          else {
            unaff_x26 = ppuVar20;
            if (ppuStack_2d8 <= ppuVar20) {
              uVar11 = 0;
              if (ppuStack_2d8 != (undefined **)0x0) {
                uVar11 = (ulong)ppuVar20 / (ulong)ppuStack_2d8;
              }
              unaff_x26 = (undefined **)((long)ppuVar20 - uVar11 * (long)ppuStack_2d8);
            }
          }
        }
        puVar15 = (undefined8 *)ppuStack_2e0[(long)unaff_x26];
        if (puVar15 == (undefined8 *)0x0) {
          *ppuVar16 = (undefined *)ppuStack_2d0;
          ppuStack_2e0[(long)unaff_x26] = (undefined *)&ppuStack_2d0;
          ppuStack_2d0 = ppuVar16;
          if (*ppuVar16 != (undefined *)0x0) {
            ppuVar20 = *(undefined ***)(*ppuVar16 + 8);
            if (((ulong)ppuVar18 & (long)ppuVar18 - 1U) == 0) {
              ppuVar20 = (undefined **)((ulong)ppuVar20 & (long)ppuVar18 - 1U);
            }
            else if (ppuVar18 <= ppuVar20) {
              uVar11 = 0;
              if (ppuVar18 != (undefined **)0x0) {
                uVar11 = (ulong)ppuVar20 / (ulong)ppuVar18;
              }
              ppuVar20 = (undefined **)((long)ppuVar20 - uVar11 * (long)ppuVar18);
            }
            ppuStack_2e0[(long)ppuVar20] = (undefined *)ppuVar16;
          }
        }
        else {
          *ppuVar16 = (undefined *)*puVar15;
          *puVar15 = ppuVar16;
        }
        lStack_2c8 = lStack_2c8 + 1;
LAB_10a95d5b0:
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
    ppuVar18 = ppuStack_2d0;
    if (ppuStack_2d0 == (undefined **)0x0) {
      pppuVar8 = &ppuStack_2e0;
      FUN_10a95cb30(pppuVar8);
    }
    else {
      do {
        puVar9 = ppuVar18[2];
        lVar12 = lVar19 + 0x18;
        FUN_10a95b410();
        if (lVar12 != 0) {
          if (*(char *)(ppuVar18 + 0xc) == '\x01') {
            pcVar13 = (code *)ppuVar18[4];
            pppuStack_198 = pppuStack_2e8;
            pppuStack_1a0 = pppuStack_2f0;
            if (pppuStack_2e8 != (undefined ***)0x0) {
              pppuVar8 = pppuStack_2e8 + 1;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
                if (bVar4) {
                  *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            (*pcVar13)(&pppuStack_1a0,ppuVar18 + 4);
            if (pppuStack_198 != (undefined ***)0x0) {
              pppuVar8 = pppuStack_198 + 1;
              do {
                ppuVar20 = *pppuVar8;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
                if (bVar4) {
                  *pppuVar8 = (undefined **)((long)ppuVar20 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
                pppuVar7 = pppuStack_198;
              } while (cVar3 != '\0');
LAB_10a95d690:
              if (ppuVar20 == (undefined **)0x0) {
                (*(code *)(*pppuVar7)[2])(pppuVar7);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar7);
              }
            }
          }
          else if (*(char *)(ppuVar18 + 0xc) == '\x02') {
            ppuVar20 = ppuVar18 + 4;
            FUN_10a688b40();
            pppuVar8 = pppuStack_2e8;
            if (ppuVar20 == (undefined **)0x0) {
              if (puVar9 != (undefined *)0x0) {
                ppuStack_190 = (undefined **)ppuVar18[4];
                puStack_188 = ppuVar18[5];
                if (puStack_188 != (undefined *)0x0) {
                  plVar17 = (long *)(puStack_188 + 8);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                    if (bVar4) {
                      *plVar17 = *plVar17 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                pppuStack_1b0 = pppuStack_2f0;
                pppuStack_1a8 = pppuStack_2e8;
                if (pppuStack_2e8 == (undefined ***)0x0) {
                  pppuStack_178 = (undefined ***)0x0;
                }
                else {
                  pppuVar7 = pppuStack_2e8 + 1;
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
                    if (bVar4) {
                      *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  pppuStack_178 = pppuStack_2e8;
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
                    if (bVar4) {
                      *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                pppuStack_180 = pppuStack_2f0;
                pppuStack_198 = (undefined ***)&PTR_FUN_110c312c0;
                pppuStack_1b8 = (undefined ***)0x0;
                uStack_1c0 = 0;
                pppuStack_1a0 = (undefined ***)FUN_10a95f620;
                FUN_10a4634ec(puVar9,&pppuStack_1a0);
                (*(code *)*pppuStack_198)(&pppuStack_198);
                if (pppuVar8 != (undefined ***)0x0) {
                  pppuVar7 = pppuVar8 + 1;
                  do {
                    ppuVar20 = *pppuVar7;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
                    if (bVar4) {
                      *pppuVar7 = (undefined **)((long)ppuVar20 + -1);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (ppuVar20 == (undefined **)0x0) {
                    (*(code *)(*pppuVar8)[2])(pppuVar8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar8);
                  }
                }
                if (pppuStack_1b8 != (undefined ***)0x0) {
                  pppuVar8 = pppuStack_1b8 + 1;
                  do {
                    ppuVar20 = *pppuVar8;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
                    if (bVar4) {
                      *pppuVar8 = (undefined **)((long)ppuVar20 + -1);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                    pppuVar7 = pppuStack_1b8;
                  } while (cVar3 != '\0');
                  goto LAB_10a95d690;
                }
              }
            }
            else {
              *ppuVar20 = (undefined *)
                          CONCAT44((int)((ulong)*ppuVar20 >> 0x20) + 1,(int)*ppuVar20 + 1);
              FUN_10a95f41c(ppuVar18[4],&pppuStack_2f0);
              iVar5 = *(int *)((long)ppuVar20 + 4) + -1;
              *(int *)((long)ppuVar20 + 4) = iVar5;
              if (iVar5 == 0) {
                *(undefined4 *)ppuVar20 = 0;
              }
            }
          }
        }
        pppuVar7 = pppuStack_2e8;
        ppuVar18 = (undefined **)*ppuVar18;
      } while (ppuVar18 != (undefined **)0x0);
      pppuVar8 = &ppuStack_2e0;
      FUN_10a95cb30(pppuVar8);
      if (pppuVar7 == (undefined ***)0x0) goto LAB_10a95d7ec;
    }
    pppuVar2 = pppuVar7 + 1;
    do {
      ppuVar18 = *pppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
      if (bVar4) {
        *pppuVar2 = (undefined **)((long)ppuVar18 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar18 == (undefined **)0x0) {
      (*(code *)(*pppuVar7)[2])(pppuVar7);
      pppuVar8 = pppuVar7;
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar7);
    }
  }
LAB_10a95d7ec:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  if ((long)ppuStack_190 < 0) {
    __ZdlPv(pppuStack_1a0);
  }
  __ZNSt3__119__shared_weak_countD2Ev(pppuVar7);
  __ZdlPv();
  __Unwind_Resume(pppuVar8);
  return;
}



/* Entry: 10a95d910; end: 10a95d92b;  */

void FUN_10a95d910(void)

{
  return;
}



/* Entry: 10a95d92c; end: 10a95da3b;  */

void FUN_10a95d92c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [272];
  undefined1 auStack_158 [8];
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [272];
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(lVar5 + 0xf8);
  *(undefined1 *)(*(long *)(lVar5 + 0xf0) + 0x78) = 0;
  FUN_10a946a70(lVar4 + 0x18);
  *(undefined4 *)(lVar5 + 0x100) = 0;
  *(undefined8 *)(lVar5 + 0x108) = 0;
  *(undefined1 *)(*(long *)(lVar5 + 0x148) + 0x71) = 1;
  FUN_10a009538(auStack_278,&UNK_10f6847f7);
  __ZNSt13runtime_errorC2ERKS_(appuStack_150,auStack_278);
  _memcpy(auStack_140,auStack_268,0x110);
  appuStack_150[0] = &PTR_FUN_110b99e70;
  FUN_10a05bde0(auStack_158,appuStack_150);
  __ZNSt13runtime_errorD2Ev(appuStack_150);
  func_0x000109d1b350(*(undefined8 *)(lVar5 + 0xd8),auStack_158);
  __ZNSt13exception_ptrD1Ev(auStack_158);
  __ZNSt13runtime_errorD2Ev(auStack_278);
  FUN_10a07e58c(*(undefined8 *)(lVar5 + 0x88));
  lVar4 = *(long *)(lVar5 + 0xe8);
  plVar1 = (long *)(lVar4 + 0x10);
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar4 + 0x18);
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
      return;
    }
  } while( true );
}



/* Entry: 10a95da3c; end: 10a95da57;  */

void FUN_10a95da3c(void)

{
  return;
}



/* Entry: 10a95da58; end: 10a95e103;  */

void FUN_10a95da58(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong *puVar18;
  int *piVar19;
  int *piVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  undefined8 *puVar24;
  undefined8 *unaff_x22;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined7 uStack_98;
  undefined1 uStack_91;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *param_1;
  uStack_98 = (undefined7)param_1[1];
  uVar14 = *(undefined8 *)((long)param_1 + 0xf);
  uStack_91 = (undefined1)uVar14;
  cVar6 = *(char *)((long)param_1 + 0x17);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar24 = (undefined8 *)param_2[2];
  puVar10 = (undefined8 *)puVar24[0x23];
  if ((undefined8 *)puVar24[0x24] == puVar10) {
LAB_10a95dcbc:
    puVar10 = (undefined8 *)puVar24[0x19];
    FUN_10a94a9a0(puVar10,&UNK_10f68482d,0x31);
    if (cVar6 < '\0') {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(uVar3);
        return;
      }
      goto LAB_10a95e0bc;
    }
  }
  else {
    uVar17 = puVar24[0x26];
    puVar2 = puVar10 + (uVar17 >> 8);
    piVar19 = (int *)*puVar2;
    piVar1 = piVar19 + (uVar17 & 0xff) * 4;
    uVar22 = puVar24[0x27] + uVar17;
    piVar23 = (int *)(puVar10[uVar22 >> 8] + (uVar22 & 0xff) * 0x10);
    piVar20 = piVar1;
    puVar18 = puVar2;
    if (piVar1 != piVar23) {
      puVar26 = param_1 + 3;
      do {
        param_1 = *(undefined8 **)(piVar20 + 2);
        if (param_1 == (undefined8 *)*puVar26) goto LAB_10a95db24;
        piVar20 = piVar20 + 4;
        if ((long)piVar20 - (long)piVar19 == 0x1000) {
          puVar18 = puVar18 + 1;
          piVar20 = (int *)*puVar18;
          piVar19 = piVar20;
        }
      } while (piVar20 != piVar23);
      goto LAB_10a95dcbc;
    }
LAB_10a95db24:
    if (piVar20 == piVar23) goto LAB_10a95dcbc;
    lVar21 = (long)piVar20 - (long)piVar19 >> 4;
    if (lVar21 < 0) {
      puVar18 = puVar18 + -(0xfeU - lVar21 >> 8);
      uVar22 = *puVar18;
      piVar23 = (int *)(uVar22 + (ulong)(byte)~(byte)(0xfeU - lVar21) * 0x10);
    }
    else {
      puVar18 = puVar18 + (lVar21 + 1U >> 8);
      uVar22 = *puVar18;
      piVar23 = (int *)(uVar22 + (lVar21 + 1U & 0xff) * 0x10);
    }
    iVar5 = *piVar20;
    if ((puVar18 <= puVar2) && (puVar2 != puVar18 || piVar23 < piVar1)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10a95db84);
      (*pcVar9)();
    }
    if ((piVar23 != piVar1) &&
       (lVar21 = (((long)puVar18 - (long)puVar2) * 0x20 - (uVar17 & 0xff)) +
                 ((long)((long)piVar23 - uVar22) >> 4), 0 < lVar21)) {
      uVar17 = lVar21 + uVar17;
      puVar24[0x26] = uVar17;
      puVar24[0x27] = puVar24[0x27] - lVar21;
      while (0x1ff < uVar17) {
        param_1 = (undefined8 *)*puVar10;
        __ZdlPv(param_1);
        puVar10 = (undefined8 *)(puVar24[0x23] + 8);
        puVar24[0x23] = puVar10;
        uVar17 = puVar24[0x26] - 0x100;
        puVar24[0x26] = uVar17;
      }
    }
    if (iVar5 == -1) goto LAB_10a95dcbc;
    lVar21 = puVar24[0x29];
    puVar27 = *(undefined8 **)(lVar21 + 0x48);
    puVar26 = *(undefined8 **)(lVar21 + 0x50);
    puVar12 = (undefined8 *)((long)puVar26 - (long)puVar27);
    uVar22 = 0;
    if (puVar12 != (undefined8 *)0x0) {
      uVar22 = ((long)puVar26 - (long)puVar27) * 0x10 - 1;
    }
    uVar4 = *(ulong *)(lVar21 + 0x60);
    uVar17 = *(long *)(lVar21 + 0x68) + uVar4;
    puVar10 = param_1;
    unaff_x22 = puVar12;
    if (uVar22 == uVar17) {
      if (uVar4 < 0x80) {
        puVar15 = *(undefined8 **)(lVar21 + 0x58);
        puVar25 = *(undefined8 **)(lVar21 + 0x40);
        if (puVar12 < (undefined8 *)((long)puVar15 - (long)puVar25)) {
          puVar10 = (undefined8 *)0x1000;
          __Znwm();
          puVar24 = puVar10;
          if (puVar15 == puVar26) {
            param_1 = puVar10;
            if (puVar27 == puVar25) {
              puVar12 = (undefined8 *)((long)puVar15 - (long)puVar27 >> 2);
              if (puVar26 == puVar27) {
                puVar12 = (undefined8 *)0x1;
              }
              param_1 = puVar12;
              FUN_10a95a1d4();
              puVar27 = (undefined8 *)
                        ((long)param_1 + ((long)puVar12 * 2 + 6U & 0xfffffffffffffff8));
              lVar16 = *(long *)(lVar21 + 0x50) - (long)*(undefined8 **)(lVar21 + 0x48);
              puVar26 = puVar27;
              if (lVar16 != 0) {
                puVar26 = (undefined8 *)((long)puVar27 + lVar16);
                puVar12 = *(undefined8 **)(lVar21 + 0x48);
                puVar15 = puVar27;
                do {
                  *puVar15 = *puVar12;
                  lVar16 = lVar16 + -8;
                  puVar12 = puVar12 + 1;
                  puVar15 = puVar15 + 1;
                } while (lVar16 != 0);
              }
              puVar12 = *(undefined8 **)(lVar21 + 0x40);
              *(undefined8 **)(lVar21 + 0x40) = param_1;
              *(undefined8 **)(lVar21 + 0x48) = puVar27;
              *(undefined8 **)(lVar21 + 0x50) = puVar26;
              *(undefined8 **)(lVar21 + 0x58) = param_1 + (long)param_2;
              if (puVar12 != (undefined8 *)0x0) {
                __ZdlPv(puVar12);
                puVar27 = *(undefined8 **)(lVar21 + 0x48);
                param_1 = puVar12;
              }
            }
            puVar27[-1] = puVar10;
            puVar12 = *(undefined8 **)(lVar21 + 0x48);
            puVar26 = *(undefined8 **)(lVar21 + 0x50);
            puVar27 = puVar12 + -1;
            *(undefined8 **)(lVar21 + 0x48) = puVar27;
            goto LAB_10a95dc5c;
          }
          *puVar26 = puVar10;
          goto LAB_10a95de3c;
        }
        puVar10 = (undefined8 *)((long)puVar15 - (long)puVar25 >> 2);
        if (puVar15 == puVar25) {
          puVar10 = (undefined8 *)0x1;
        }
        FUN_10a95a1d4();
        uVar11 = 0x1000;
        puVar25 = param_2;
        __Znwm();
        unaff_x22 = (undefined8 *)((long)puVar10 + (long)puVar12);
        puVar15 = puVar10 + (long)param_2;
        puVar24 = puVar10;
        if (puVar12 == (undefined8 *)((long)param_2 * 8)) {
          if ((long)puVar12 < 1) {
            puVar12 = (undefined8 *)((long)unaff_x22 - (long)puVar10 >> 2);
            if (puVar26 == puVar27) {
              puVar12 = (undefined8 *)0x1;
            }
            puVar24 = puVar12;
            FUN_10a95a1d4();
            unaff_x22 = puVar24 + ((ulong)puVar12 >> 2);
            puVar15 = puVar24 + (long)puVar25;
            if (puVar10 != (undefined8 *)0x0) {
              __ZdlPv(puVar10);
            }
          }
          else {
            lVar16 = ((long)unaff_x22 - (long)puVar10 >> 3) + 1;
            unaff_x22 = unaff_x22 + -((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
          }
        }
        puVar26 = unaff_x22 + 1;
        *unaff_x22 = uVar11;
        puVar10 = *(undefined8 **)(lVar21 + 0x50);
        puVar27 = puVar24;
        if (puVar10 != *(undefined8 **)(lVar21 + 0x48)) {
          do {
            puVar24 = puVar27;
            puVar12 = unaff_x22;
            if (unaff_x22 == puVar27) {
              if (puVar26 < puVar15) {
                lVar16 = ((long)puVar15 - (long)puVar26 >> 3) + 1;
                lVar7 = (long)puVar26 - (long)puVar27;
                lVar8 = (long)puVar26 - (long)puVar27;
                puVar26 = puVar26 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
                puVar12 = (undefined8 *)((long)puVar26 - lVar7);
                if (lVar8 != 0) {
                  _memmove(puVar12,unaff_x22,lVar8);
                  puVar25 = unaff_x22;
                }
              }
              else {
                puVar12 = (undefined8 *)((long)puVar15 - (long)puVar27 >> 2);
                if ((long)puVar15 - (long)puVar27 == 0) {
                  puVar12 = (undefined8 *)0x1;
                }
                puVar24 = puVar12;
                FUN_10a95a1d4();
                puVar12 = (undefined8 *)
                          ((long)puVar24 + ((long)puVar12 * 2 + 6U & 0xfffffffffffffff8));
                lVar16 = (long)puVar26 - (long)puVar27;
                puVar26 = puVar12;
                if (lVar16 != 0) {
                  puVar26 = (undefined8 *)((long)puVar12 + lVar16);
                  puVar15 = puVar12;
                  do {
                    *puVar15 = *unaff_x22;
                    lVar16 = lVar16 + -8;
                    puVar15 = puVar15 + 1;
                    unaff_x22 = unaff_x22 + 1;
                  } while (lVar16 != 0);
                }
                puVar15 = puVar24 + (long)puVar25;
                if (puVar27 != (undefined8 *)0x0) {
                  __ZdlPv(puVar27);
                }
              }
            }
            puVar10 = puVar10 + -1;
            unaff_x22 = puVar12 + -1;
            *unaff_x22 = *puVar10;
            puVar27 = puVar24;
          } while (puVar10 != *(undefined8 **)(lVar21 + 0x48));
        }
        puVar10 = *(undefined8 **)(lVar21 + 0x40);
        *(undefined8 **)(lVar21 + 0x40) = puVar24;
        *(undefined8 **)(lVar21 + 0x48) = unaff_x22;
        *(undefined8 **)(lVar21 + 0x50) = puVar26;
        *(undefined8 **)(lVar21 + 0x58) = puVar15;
        if (puVar10 != (undefined8 *)0x0) {
          __ZdlPv();
        }
      }
      else {
        *(ulong *)(lVar21 + 0x60) = uVar4 - 0x80;
        puVar12 = puVar27 + 1;
LAB_10a95dc5c:
        unaff_x22 = (undefined8 *)*puVar27;
        *(undefined8 **)(lVar21 + 0x48) = puVar12;
        puVar10 = param_1;
        if (puVar26 == *(undefined8 **)(lVar21 + 0x58)) {
          puVar10 = *(undefined8 **)(lVar21 + 0x40);
          if (puVar12 < puVar10 || (long)puVar12 - (long)puVar10 == 0) {
            puVar24 = (undefined8 *)((long)puVar26 - (long)puVar10 >> 2);
            if ((long)puVar26 - (long)puVar10 == 0) {
              puVar24 = (undefined8 *)0x1;
            }
            puVar10 = puVar24;
            FUN_10a95a1d4();
            puVar27 = puVar10 + ((ulong)puVar24 >> 2);
            lVar16 = *(long *)(lVar21 + 0x50) - (long)*(undefined8 **)(lVar21 + 0x48);
            puVar26 = puVar27;
            if (lVar16 != 0) {
              puVar26 = (undefined8 *)((long)puVar27 + lVar16);
              puVar15 = *(undefined8 **)(lVar21 + 0x48);
              puVar25 = puVar27;
              do {
                *puVar25 = *puVar15;
                lVar16 = lVar16 + -8;
                puVar15 = puVar15 + 1;
                puVar25 = puVar25 + 1;
              } while (lVar16 != 0);
            }
            puVar15 = *(undefined8 **)(lVar21 + 0x40);
            *(undefined8 **)(lVar21 + 0x40) = puVar10;
            *(undefined8 **)(lVar21 + 0x48) = puVar27;
            *(undefined8 **)(lVar21 + 0x50) = puVar26;
            *(undefined8 **)(lVar21 + 0x58) = puVar10 + (long)puVar12;
            if (puVar15 != (undefined8 *)0x0) {
              __ZdlPv(puVar15);
              puVar26 = *(undefined8 **)(lVar21 + 0x50);
              puVar10 = puVar15;
            }
          }
          else {
            lVar16 = (((long)puVar12 - (long)puVar10 >> 3) + 1) / 2;
            puVar24 = puVar12 + -lVar16;
            lVar7 = (long)puVar26 - (long)puVar12;
            if (lVar7 != 0) {
              param_1 = puVar24;
              _memmove(puVar24,puVar12,lVar7);
              puVar12 = *(undefined8 **)(lVar21 + 0x48);
            }
            puVar26 = (undefined8 *)((long)puVar24 + lVar7);
            *(undefined8 **)(lVar21 + 0x48) = puVar12 + -lVar16;
            *(undefined8 **)(lVar21 + 0x50) = puVar26;
            puVar10 = param_1;
          }
        }
        *puVar26 = unaff_x22;
LAB_10a95de3c:
        *(long *)(lVar21 + 0x50) = *(long *)(lVar21 + 0x50) + 8;
      }
      puVar27 = *(undefined8 **)(lVar21 + 0x48);
      uVar17 = *(long *)(lVar21 + 0x68) + *(long *)(lVar21 + 0x60);
    }
    puVar26 = (undefined8 *)(puVar27[uVar17 >> 7] + (uVar17 & 0x7f) * 0x20);
    *puVar26 = uVar3;
    puVar26[1] = CONCAT17(uStack_91,uStack_98);
    *(undefined8 *)((long)puVar26 + 0xf) = uVar14;
    *(char *)((long)puVar26 + 0x17) = cVar6;
    *(int *)(puVar26 + 3) = iVar5;
    uVar22 = *(long *)(lVar21 + 0x68) + 1;
    *(ulong *)(lVar21 + 0x68) = uVar22;
    if (*(ulong *)(lVar21 + 0x28) < uVar22) {
      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
        func_0x00010ae06f08(1,2,&UNK_10f684446,&UNK_10f68449b,0x51,&UNK_10f6844f5,in_x6,in_x7,
                            *(undefined4 *)
                             (*(long *)(*(long *)(lVar21 + 0x48) +
                                       (*(ulong *)(lVar21 + 0x60) >> 7) * 8) +
                              (*(ulong *)(lVar21 + 0x60) & 0x7f) * 0x20 + 0x18),uVar22);
      }
      puVar10 = (undefined8 *)(lVar21 + 0x40);
      FUN_10a9488cc(puVar10);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
LAB_10a95e0bc:
  ___stack_chk_fail();
  __ZdlPv(unaff_x22);
  if (puVar24 != (undefined8 *)0x0) {
    __ZdlPv(puVar24);
  }
  if (cVar6 < '\0') {
    __ZdlPv(uVar3);
  }
  __Unwind_Resume(puVar10);
  return;
}



/* Entry: 10a95e104; end: 10a95e11f;  */

void FUN_10a95e104(void)

{
  return;
}



/* Entry: 10a95e120; end: 10a95f237;  */

/* WARNING: Removing unreachable block (ram,0x00010a95ef04) */
/* WARNING: Removing unreachable block (ram,0x00010a95ef08) */
/* WARNING: Removing unreachable block (ram,0x00010a95ef10) */
/* WARNING: Removing unreachable block (ram,0x00010a95ef18) */
/* WARNING: Removing unreachable block (ram,0x00010a95ef54) */
/* WARNING: Removing unreachable block (ram,0x00010a95ef7c) */

void FUN_10a95e120(long *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  long lVar10;
  uint uVar11;
  code *pcVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined **ppuVar16;
  undefined ***pppuVar17;
  long *plVar18;
  undefined4 uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  int *piVar23;
  ulong uVar24;
  long *plVar25;
  undefined8 *puVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 *puVar29;
  ulong uVar30;
  long lVar31;
  undefined8 *puVar32;
  int *piVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  long lVar36;
  long lVar37;
  undefined8 uStack_318;
  undefined **ppuStack_310;
  undefined8 uStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined8 uStack_2f0;
  uint uStack_2e8;
  uint uStack_2e4;
  long lStack_2e0;
  uint uStack_2d4;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  int iStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined4 uStack_280;
  undefined **ppuStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long *plStack_258;
  ulong uStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long *plStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_1f0;
  undefined2 uStack_1e8;
  undefined1 uStack_1e6;
  undefined1 uStack_1e5;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined4 uStack_140;
  char cStack_139;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar25 = (long *)param_1[1];
  lVar37 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  lVar36 = *(long *)(param_3 + 0x10);
  lVar31 = *(long *)(lVar36 + 200);
  if (*(char *)(lVar31 + 0x1e0) == '\x04') {
    *(int *)(lVar36 + 0x100) = *(int *)(lVar36 + 0x100) + 1;
    iVar13 = *(int *)(lVar31 + 0x88);
    if (iVar13 < 2) {
      iVar13 = 1;
    }
    puVar20 = param_2;
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (*(int *)(lVar36 + 0x100) < iVar13) {
      uVar6 = *(uint *)(lVar31 + 0x8c);
      if ((int)uVar6 < 2) {
        uVar6 = 1;
      }
      uVar11 = 0;
      if (uVar6 != 0) {
        uVar11 = (uint)(iVar13 * 1000) / uVar6;
      }
      if ((long)param_1 - *(long *)(lVar36 + 0x108) < (long)((ulong)uVar11 * 1000000))
      goto LAB_10a95eec4;
    }
    *(undefined4 *)(lVar36 + 0x100) = 0;
    *(long **)(lVar36 + 0x108) = param_1;
    if ((*(int *)(lVar36 + 0x140) != -1) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
      puVar20 = (undefined8 *)0x2;
      func_0x00010ae06f08(1,2,&UNK_10f6846d8,&UNK_10f684730,0x9f,&UNK_10f6847a0);
    }
    puVar32 = *(undefined8 **)(lVar36 + 0x118);
    puVar29 = *(undefined8 **)(lVar36 + 0x120);
    uVar24 = (long)puVar29 - (long)puVar32;
    iVar13 = *(int *)(lVar36 + 0x144);
    *(int *)(lVar36 + 0x144) = iVar13 + 1;
    *(int *)(lVar36 + 0x140) = iVar13;
    uVar28 = 0;
    if (uVar24 != 0) {
      uVar28 = ((long)puVar29 - (long)puVar32) * 0x20 - 1;
    }
    uVar27 = *(ulong *)(lVar36 + 0x130);
    lVar31 = *(long *)(lVar36 + 0x138);
    uVar30 = lVar31 + uVar27;
    if (uVar28 == uVar30) {
      if (uVar27 < 0x100) {
        puVar34 = *(undefined8 **)(lVar36 + 0x128);
        puVar35 = *(undefined8 **)(lVar36 + 0x110);
        if (uVar24 < (ulong)((long)puVar34 - (long)puVar35)) {
          uVar21 = 0x1000;
          __Znwm();
          if (puVar34 == puVar29) {
            if (puVar32 == puVar35) {
              lVar31 = (long)puVar34 - (long)puVar32 >> 2;
              if (puVar29 == puVar32) {
                lVar31 = 1;
              }
              lVar14 = lVar31;
              FUN_10a95f350();
              puVar32 = (undefined8 *)(lVar14 + (lVar31 * 2 + 6U & 0xfffffffffffffff8));
              lVar31 = *(long *)(lVar36 + 0x120) - (long)*(undefined8 **)(lVar36 + 0x118);
              puVar29 = puVar32;
              if (lVar31 != 0) {
                puVar29 = (undefined8 *)((long)puVar32 + lVar31);
                puVar34 = *(undefined8 **)(lVar36 + 0x118);
                puVar35 = puVar32;
                do {
                  *puVar35 = *puVar34;
                  lVar31 = lVar31 + -8;
                  puVar34 = puVar34 + 1;
                  puVar35 = puVar35 + 1;
                } while (lVar31 != 0);
              }
              lVar31 = *(long *)(lVar36 + 0x110);
              *(long *)(lVar36 + 0x110) = lVar14;
              *(undefined8 **)(lVar36 + 0x118) = puVar32;
              *(undefined8 **)(lVar36 + 0x120) = puVar29;
              *(long *)(lVar36 + 0x128) = lVar14 + (long)puVar20 * 8;
              if (lVar31 != 0) {
                __ZdlPv(lVar31);
                puVar32 = *(undefined8 **)(lVar36 + 0x118);
              }
            }
            puVar32[-1] = uVar21;
            puVar20 = *(undefined8 **)(lVar36 + 0x118);
            puVar32 = puVar20 + -1;
            *(undefined8 **)(lVar36 + 0x118) = puVar32;
            goto LAB_10a95e26c;
          }
          *puVar29 = uVar21;
          *(long *)(lVar36 + 0x120) = *(long *)(lVar36 + 0x120) + 8;
        }
        else {
          puVar26 = (undefined8 *)((long)puVar34 - (long)puVar35 >> 2);
          if (puVar34 == puVar35) {
            puVar26 = (undefined8 *)0x1;
          }
          FUN_10a95f350();
          uVar21 = 0x1000;
          puVar22 = puVar20;
          __Znwm();
          puVar34 = (undefined8 *)((long)puVar26 + uVar24);
          puVar35 = puVar26 + (long)puVar20;
          puVar15 = puVar26;
          if (uVar24 == (long)puVar20 * 8) {
            if ((long)uVar24 < 1) {
              puVar20 = (undefined8 *)((long)puVar34 - (long)puVar26 >> 2);
              if (puVar29 == puVar32) {
                puVar20 = (undefined8 *)0x1;
              }
              puVar15 = puVar20;
              FUN_10a95f350();
              puVar34 = puVar15 + ((ulong)puVar20 >> 2);
              puVar35 = puVar15 + (long)puVar22;
              if (puVar26 != (undefined8 *)0x0) {
                __ZdlPv(puVar26);
              }
            }
            else {
              lVar31 = ((long)puVar34 - (long)puVar26 >> 3) + 1;
              puVar34 = puVar34 + -((ulong)(lVar31 - (lVar31 >> 0x3f)) >> 1);
            }
          }
          puVar20 = puVar34 + 1;
          *puVar34 = uVar21;
          puVar32 = *(undefined8 **)(lVar36 + 0x120);
          puVar29 = puVar15;
          if (puVar32 != *(undefined8 **)(lVar36 + 0x118)) {
            do {
              puVar15 = puVar29;
              puVar26 = puVar34;
              if (puVar34 == puVar29) {
                if (puVar20 < puVar35) {
                  lVar31 = ((long)puVar35 - (long)puVar20 >> 3) + 1;
                  lVar14 = (long)puVar20 - (long)puVar29;
                  lVar10 = (long)puVar20 - (long)puVar29;
                  puVar20 = puVar20 + ((ulong)(lVar31 - (lVar31 >> 0x3f)) >> 1);
                  puVar26 = (undefined8 *)((long)puVar20 - lVar14);
                  if (lVar10 != 0) {
                    _memmove(puVar26,puVar34,lVar10);
                    puVar22 = puVar34;
                  }
                }
                else {
                  puVar26 = (undefined8 *)((long)puVar35 - (long)puVar29 >> 2);
                  if ((long)puVar35 - (long)puVar29 == 0) {
                    puVar26 = (undefined8 *)0x1;
                  }
                  puVar15 = puVar26;
                  FUN_10a95f350();
                  puVar26 = (undefined8 *)
                            ((long)puVar15 + ((long)puVar26 * 2 + 6U & 0xfffffffffffffff8));
                  lVar31 = (long)puVar20 - (long)puVar29;
                  puVar20 = puVar26;
                  if (lVar31 != 0) {
                    puVar20 = (undefined8 *)((long)puVar26 + lVar31);
                    puVar35 = puVar26;
                    do {
                      *puVar35 = *puVar34;
                      lVar31 = lVar31 + -8;
                      puVar35 = puVar35 + 1;
                      puVar34 = puVar34 + 1;
                    } while (lVar31 != 0);
                  }
                  puVar35 = puVar15 + (long)puVar22;
                  if (puVar29 != (undefined8 *)0x0) {
                    __ZdlPv(puVar29);
                  }
                }
              }
              puVar32 = puVar32 + -1;
              puVar34 = puVar26 + -1;
              *puVar34 = *puVar32;
              puVar29 = puVar15;
            } while (puVar32 != *(undefined8 **)(lVar36 + 0x118));
          }
          lVar31 = *(long *)(lVar36 + 0x110);
          *(undefined8 **)(lVar36 + 0x110) = puVar15;
          *(undefined8 **)(lVar36 + 0x118) = puVar34;
          *(undefined8 **)(lVar36 + 0x120) = puVar20;
          *(undefined8 **)(lVar36 + 0x128) = puVar35;
          if (lVar31 != 0) {
            __ZdlPv();
          }
        }
      }
      else {
        *(ulong *)(lVar36 + 0x130) = uVar27 - 0x100;
        puVar20 = puVar32 + 1;
LAB_10a95e26c:
        uVar21 = *puVar32;
        *(undefined8 **)(lVar36 + 0x118) = puVar20;
        FUN_10a95f254(lVar36 + 0x110,uVar21);
      }
      puVar32 = *(undefined8 **)(lVar36 + 0x118);
      uVar27 = *(ulong *)(lVar36 + 0x130);
      lVar31 = *(long *)(lVar36 + 0x138);
      uVar30 = lVar31 + uVar27;
    }
    piVar23 = (int *)(puVar32[uVar30 >> 8] + (uVar30 & 0xff) * 0x10);
    *piVar23 = iVar13;
    *(undefined8 **)(piVar23 + 2) = param_2;
    uVar28 = lVar31 + 1;
    *(ulong *)(lVar36 + 0x138) = uVar28;
    while (0x100 < uVar28) {
      uVar28 = uVar28 - 1;
      uVar27 = uVar27 + 1;
      *(ulong *)(lVar36 + 0x130) = uVar27;
      *(ulong *)(lVar36 + 0x138) = uVar28;
      if (0x1ff < uVar27) {
        __ZdlPv(*puVar32);
        puVar32 = (undefined8 *)(*(long *)(lVar36 + 0x118) + 8);
        *(undefined8 **)(lVar36 + 0x118) = puVar32;
        uVar28 = *(ulong *)(lVar36 + 0x138);
        uVar27 = *(long *)(lVar36 + 0x130) - 0x100;
        *(ulong *)(lVar36 + 0x130) = uVar27;
      }
    }
    piVar33 = *(int **)(lVar36 + 0xf8);
    piVar23 = (int *)(lVar37 + 0x10);
    iVar13 = (*piVar23 - *piVar33) / 2;
    iVar2 = (*(int *)(lVar37 + 0x14) - piVar33[1]) / 2;
    uStack_318 = (undefined **)((ulong)uStack_318._7_1_ << 0x38);
    iVar7 = piVar33[2];
    FUN_10a1b7d64(&uStack_2e8,piVar23,CONCAT44(iVar2,iVar13),
                  CONCAT44(piVar33[1] + iVar2,*piVar33 + iVar13),1);
    uVar19 = SUB84(piVar23,0);
    ppuVar16 = (undefined **)(ulong)uStack_2d4;
    FUN_10a12af1c();
    uStack_270 = (undefined **)CONCAT44(uStack_270._4_4_,uVar19);
    uVar19 = SUB84(&ppuStack_278,0);
    ppuStack_278 = ppuVar16;
    func_0x0001096f1ebc();
    ppuStack_e0 = ppuStack_278;
    ppuStack_d8 = (undefined **)CONCAT44(uStack_2e8,(int)uStack_270);
    uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,uStack_2e4);
    uStack_c0 = CONCAT44(uStack_2e4,uStack_2e8);
    lStack_b8 = lStack_2e0;
    uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar19);
    uStack_c8 = 1;
    if (puStack_2c8 == (undefined8 *)0x0) {
      FUN_10a12affc(&uStack_220,puStack_2d0,&ppuStack_e0);
    }
    else {
      iVar13 = (int)&ppuStack_278;
      func_0x0001096f1ebc();
      lStack_288 = lStack_b8;
      uStack_290 = uStack_c0;
      uStack_280 = (undefined4)uStack_b0;
      iStack_2a0 = iVar13 << 1;
      puStack_298 = puStack_2d0;
      puStack_2b8 = puStack_2c8;
      uStack_2b0 = CONCAT44(uStack_2e4 >> 1,uStack_2e8 >> 1);
      lStack_2a8 = lStack_2e0;
      ppuStack_148 = ppuStack_d8;
      ppuStack_150 = ppuStack_e0;
      uStack_140 = (undefined4)uStack_d0;
      uStack_138 = 1;
      lStack_128 = lStack_b8;
      uStack_130 = uStack_c0;
      lStack_120 = uStack_b0;
      FUN_10a12af50(&uStack_220,&puStack_298,&puStack_2b8,&ppuStack_150);
    }
    FUN_10a1a577c(&lStack_248,&uStack_220,iVar7);
    FUN_10a75761c(&lStack_260,lStack_248,lStack_240,lStack_240 - lStack_248);
    if (lStack_248 != 0) {
      lStack_240 = lStack_248;
      __ZdlPv();
    }
    uStack_318._0_7_ = (undefined7)uStack_250;
    plVar18 = plStack_258;
    if (-1 < (long)uStack_250) {
      plVar18 = (long *)(uStack_250 >> 0x38);
    }
    if (plVar18 == (long *)0x0) {
      ppuStack_300 = (undefined **)0x0;
      ppuStack_2f8 = (undefined **)0x0;
      uStack_2f0 = 0;
      if ((long)uStack_250 < 0) {
        __ZdlPv();
      }
LAB_10a95eebc:
      func_0x00010a94fa00(&ppuStack_300);
      goto LAB_10a95eec4;
    }
    uStack_220 = lStack_260;
    plStack_218 = plStack_258;
    uStack_210 = uStack_250;
    plVar18 = *(long **)(piVar33 + 8);
    puStack_208 = param_2;
    if (plVar18 < *(long **)(piVar33 + 10)) {
      plVar18[1] = (long)plStack_258;
      *plVar18 = lStack_260;
      plVar18[2] = uStack_250;
      plVar18[3] = (long)param_2;
      ppuVar16 = (undefined **)(plVar18 + 4);
      *(undefined ***)(piVar33 + 8) = ppuVar16;
    }
    else {
      ppuVar16 = (undefined **)(piVar33 + 6);
      FUN_10a94f844(ppuVar16,&uStack_220);
      *(undefined ***)(piVar33 + 8) = ppuVar16;
      if ((long)uStack_210 < 0) {
        __ZdlPv(uStack_220);
        ppuVar16 = *(undefined ***)(piVar33 + 8);
      }
    }
    ppuVar5 = *(undefined ***)(piVar33 + 6);
    if ((ulong)((long)ppuVar16 - (long)ppuVar5 >> 5) < *(ulong *)(piVar33 + 4)) {
      ppuStack_300 = (undefined **)0x0;
      ppuStack_2f8 = (undefined **)0x0;
      uStack_2f0 = 0;
      goto LAB_10a95eebc;
    }
    uVar21 = *(undefined8 *)(piVar33 + 10);
    piVar33[6] = 0;
    piVar33[7] = 0;
    piVar33[8] = 0;
    piVar33[9] = 0;
    piVar33[10] = 0;
    piVar33[0xb] = 0;
    plStack_218 = (long *)0x0;
    uStack_210 = 0;
    uStack_220 = 0;
    ppuStack_300 = ppuVar5;
    ppuStack_2f8 = ppuVar16;
    uStack_2f0 = uVar21;
    func_0x00010a94fa00(&uStack_220);
    if (ppuVar5 == ppuVar16) goto LAB_10a95eebc;
    lVar31 = *(long *)(lVar36 + 200);
    ppuStack_300 = (undefined **)0x0;
    ppuStack_2f8 = (undefined **)0x0;
    uStack_2f0 = 0;
    uStack_318 = ppuVar5;
    ppuStack_310 = ppuVar16;
    uStack_308 = uVar21;
    if (*(char *)(lVar31 + 0x1e0) == '\x04') {
      if ((*(byte *)(lVar31 + 0x208) & 1) == 0) goto LAB_10a95efec;
      cVar8 = *(char *)(lVar31 + 0x1e8);
      uVar3 = 6;
      if (cVar8 != '\x01') {
        uVar3 = 9;
      }
      if (*(char *)(lVar31 + 0x207) < '\0') {
        func_0x000107c3192c(&lStack_260,*(undefined8 *)(lVar31 + 0x1f0),
                            *(undefined8 *)(lVar31 + 0x1f8));
      }
      else {
        plStack_258 = *(long **)(lVar31 + 0x1f8);
        lStack_260 = *(long *)(lVar31 + 0x1f0);
        uStack_250 = *(ulong *)(lVar31 + 0x200);
      }
      ppuStack_310 = (undefined **)0x0;
      uStack_308 = 0;
      uStack_318 = (undefined **)0x0;
      puVar4 = &DAT_10f685300;
      if (cVar8 != '\x01') {
        puVar4 = &DAT_10f685307;
      }
      ppuStack_e0 = &PTR_DAT_110ae21a0;
      ppuStack_d8 = (undefined **)0x0;
      uStack_c8 = 0;
      lStack_b8 = 0;
      uStack_c0 = 0;
      uStack_b0 = 0;
      uStack_d0 = (long *)0x1;
      lVar36 = 0;
      ppuStack_278 = ppuVar5;
      uStack_270 = ppuVar16;
      uStack_268 = uVar21;
      func_0x00010922c4f0();
      uStack_b0 = lVar36;
      if (*(int *)(lVar36 + 0x34) == 1) {
        uVar28 = *(ulong *)(lVar36 + 0x28);
      }
      else {
        func_0x00010922bb2c(lVar36);
        *(undefined4 *)(lVar36 + 0x34) = 1;
        uVar28 = *(ulong *)(lVar36 + 8);
        if ((uVar28 & 1) != 0) {
          uVar28 = *(ulong *)(uVar28 & 0xfffffffffffffffe);
        }
        func_0x00010922c3f4();
        *(ulong *)(lVar36 + 0x28) = uVar28;
      }
      uVar24 = *(ulong *)(uVar28 + 8);
      if ((uVar24 & 1) != 0) {
        uVar24 = *(ulong *)(uVar24 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(uVar28 + 0x10,lVar31 + 0x18,uVar24);
      uVar24 = *(ulong *)(uVar28 + 8);
      if ((uVar24 & 1) != 0) {
        uVar24 = *(ulong *)(uVar24 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(uVar28 + 0x18,lVar31 + 0x30,uVar24);
      puVar20 = &uStack_c8;
      func_0x000107c303b0(puVar20,&UNK_10922c57c);
      puVar32 = puVar20 + 5;
      func_0x000107c303b0(puVar32,&UNK_10922c4b4);
      uStack_210 = CONCAT17(uVar3,(undefined7)uStack_210);
      _memcpy(&uStack_220,puVar4,uVar3);
      lVar36 = 6;
      if (cVar8 != '\x01') {
        lVar36 = 9;
      }
      *(undefined1 *)((long)&uStack_220 + lVar36) = 0;
      uVar28 = puVar32[1];
      if ((uVar28 & 1) != 0) {
        uVar28 = *(ulong *)(uVar28 & 0xfffffffffffffffe);
      }
      func_0x000107c3024c(puVar32 + 2,&uStack_220,uVar28);
      if ((long)uStack_210 < 0) {
        __ZdlPv(uStack_220);
      }
      if (*(int *)((long)puVar32 + 0x24) != 2) {
        func_0x00010922b52c(puVar32);
        *(undefined4 *)((long)puVar32 + 0x24) = 2;
        puVar32[3] = &DAT_11383d918;
      }
      uVar28 = puVar32[1];
      if ((uVar28 & 1) != 0) {
        uVar28 = *(ulong *)(uVar28 & 0xfffffffffffffffe);
      }
      func_0x000107c3024c(puVar32 + 3,&lStack_260,uVar28);
      for (ppuVar5 = ppuStack_278; ppuVar5 != ppuVar16; ppuVar5 = ppuVar5 + 4) {
        puVar32 = puVar20 + 5;
        func_0x000107c303b0(puVar32,&UNK_10922c4b4);
        uStack_210._7_1_ = '\x06';
        uStack_220 = CONCAT17(uStack_220._7_1_,0x73656d617266);
        uVar28 = puVar32[1];
        if ((uVar28 & 1) != 0) {
          uVar28 = *(ulong *)(uVar28 & 0xfffffffffffffffe);
        }
        func_0x000107c3024c(puVar32 + 2,&uStack_220,uVar28);
        if (uStack_210._7_1_ < '\0') {
          __ZdlPv(uStack_220);
        }
        if (*(int *)((long)puVar32 + 0x24) == 3) {
          uVar28 = puVar32[3];
        }
        else {
          func_0x00010922b52c(puVar32);
          *(undefined4 *)((long)puVar32 + 0x24) = 3;
          uVar28 = puVar32[1];
          if ((uVar28 & 1) != 0) {
            uVar28 = *(ulong *)(uVar28 & 0xfffffffffffffffe);
          }
          func_0x00010922c46c();
          puVar32[3] = uVar28;
        }
        uStack_210._7_1_ = '\x05';
        uStack_220 = CONCAT26(uStack_220._6_2_,0x656d617266);
        uVar24 = *(ulong *)(uVar28 + 8);
        if ((uVar24 & 1) != 0) {
          uVar24 = *(ulong *)(uVar24 & 0xfffffffffffffffe);
        }
        func_0x000107c3024c(uVar28 + 0x18,&uStack_220,uVar24);
        if (uStack_210._7_1_ < '\0') {
          __ZdlPv(uStack_220);
        }
        if (*(int *)(uVar28 + 0x30) != 7) {
          if (*(int *)(uVar28 + 0x30) - 2U < 6) {
            func_0x000107c30258(uVar28 + 0x28);
          }
          *(undefined4 *)(uVar28 + 0x30) = 7;
          *(undefined **)(uVar28 + 0x28) = &DAT_11383d918;
        }
        uVar24 = *(ulong *)(uVar28 + 8);
        if ((uVar24 & 1) != 0) {
          uVar24 = *(ulong *)(uVar24 & 0xfffffffffffffffe);
        }
        func_0x000107c3024c(uVar28 + 0x28,ppuVar5,uVar24);
        puVar32 = puVar20 + 5;
        func_0x000107c303b0(puVar32,&UNK_10922c4b4);
        uStack_210 = CONCAT17(0x12,(undefined7)uStack_210);
        plStack_218 = (long *)0x6d617473656d6974;
        uStack_220 = 0x5f65727574706163;
        uStack_210 = CONCAT53(uStack_210._3_5_,0x7370);
        uVar28 = puVar32[1];
        if ((uVar28 & 1) != 0) {
          uVar28 = *(ulong *)(uVar28 & 0xfffffffffffffffe);
        }
        func_0x000107c3024c(puVar32 + 2,&uStack_220,uVar28);
        if ((long)uStack_210 < 0) {
          __ZdlPv(uStack_220);
        }
        __ZNSt3__19to_stringEx(&uStack_220,ppuVar5[3]);
        if (*(int *)((long)puVar32 + 0x24) != 2) {
          func_0x00010922b52c(puVar32);
          *(undefined4 *)((long)puVar32 + 0x24) = 2;
          puVar32[3] = &DAT_11383d918;
        }
        uVar28 = puVar32[1];
        if ((uVar28 & 1) != 0) {
          uVar28 = *(ulong *)(uVar28 & 0xfffffffffffffffe);
        }
        func_0x000107c3024c(puVar32 + 3,&uStack_220,uVar28);
        if ((long)uStack_210 < 0) {
          __ZdlPv(uStack_220);
        }
      }
      pppuVar17 = &ppuStack_e0;
      func_0x00010922cbb4(pppuVar17);
      FUN_10a0dc020(&lStack_248,pppuVar17);
      lVar36 = lStack_248;
      pppuVar17 = &ppuStack_e0;
      (*(code *)ppuStack_e0[6])();
      uStack_220 = lVar36 + *(int *)((long)&ppuStack_e0 + (ulong)*(uint *)(pppuVar17 + 3));
      plStack_218 = (long *)0x0;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      uStack_1e6 = uRam000000011383d940;
      uStack_1e5 = 0;
      (*(code *)ppuStack_e0[7])(&ppuStack_e0,lVar36,&uStack_220);
      func_0x00010922ca20(&ppuStack_e0);
      lVar36 = (long)*(char *)(lVar31 + 0x287);
      if (lVar36 < 0) {
        lVar36 = *(long *)(lVar31 + 0x278);
      }
      if (lVar36 == 0) {
        if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
          func_0x00010ae06f08(1,2,&UNK_10f684963,&UNK_10f684d88,0x1fc,&UNK_10f684ded);
        }
      }
      else {
        puVar20 = (undefined8 *)0x28;
        __Znwm();
        lStack_288 = -0x7fffffffffffffd8;
        uStack_290 = 0x21;
        *(undefined2 *)(puVar20 + 4) = 0x6d;
        puVar20[1] = 0x6e6172742d6f6564;
        *puVar20 = 0x69762f2f3a707061;
        puVar20[3] = 0x61657274732f6e6f;
        puVar20[2] = 0x6974616d726f6673;
        plVar18 = (long *)0x18;
        puStack_298 = puVar20;
        __Znwm();
        lVar37 = lStack_240;
        lVar36 = lStack_248;
        *plVar18 = lStack_248;
        plVar18[2] = lStack_238;
        plVar18[1] = lStack_240;
        lStack_240 = 0;
        lStack_238 = 0;
        lStack_248 = 0;
        ppuStack_e0 = (undefined **)FUN_10a9605d4;
        ppuStack_d8 = &PTR_DAT_110c31388;
        uStack_d0 = plVar18;
        FUN_10a3bf6d0(&uStack_220,lVar36,lVar37 - lVar36,&ppuStack_e0);
        (*(code *)*ppuStack_d8)(&ppuStack_d8);
        puVar20 = (undefined8 *)0x20;
        __Znwm();
        lStack_2a8 = -0x7fffffffffffffe0;
        uStack_2b0 = 0x1a;
        puVar20[1] = 0x63736275735f7465;
        *puVar20 = 0x6b636f736265773a;
        *(undefined8 *)((long)puVar20 + 0x12) = 0x64695f6e6f697470;
        *(undefined8 *)((long)puVar20 + 10) = 0x697263736275735f;
        *(undefined1 *)((long)puVar20 + 0x1a) = 0;
        puStack_2b8 = puVar20;
        FUN_10a94fbd0(&ppuStack_150,&puStack_2b8,lVar31 + 0x270);
        func_0x000104bd4884(&uStack_2e8,&ppuStack_150,1);
        lStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_c8 = 0;
        uStack_d0 = (long *)0x0;
        ppuStack_e0 = (undefined **)FUN_10a282dc4;
        ppuStack_d8 = &PTR_DAT_110ae9180;
        FUN_10a960458(&lStack_230,&puStack_298,&uStack_220,6,&uStack_2e8,
                      *(long *)(*(long *)(lVar31 + 8) + 0x100) + 0x208,&ppuStack_e0);
        (*(code *)*ppuStack_d8)(&ppuStack_d8);
        func_0x000104c4f944(&uStack_2e8);
        if (lStack_128 < 0) {
          __ZdlPv(uStack_138);
        }
        if (cStack_139 < '\0') {
          __ZdlPv(ppuStack_150);
        }
        if (lStack_2a8 < 0) {
          __ZdlPv(puStack_2b8);
        }
        FUN_10a042634(&uStack_220);
        if (lStack_288 < 0) {
          __ZdlPv(puStack_298);
        }
        plVar18 = plStack_228;
        plStack_218 = plStack_228;
        uStack_220 = lStack_230;
        lStack_230 = 0;
        plStack_228 = (long *)0x0;
        FUN_10a25f3f4(*(undefined8 *)(*(long *)(lVar31 + 8) + 0x940),&uStack_220);
        if (plVar18 != (long *)0x0) {
          plVar1 = plVar18 + 1;
          do {
            lVar31 = *plVar1;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar9) {
              *plVar1 = lVar31 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar31 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
          }
        }
        plVar18 = plStack_228;
        if (plStack_228 != (long *)0x0) {
          plVar1 = plStack_228 + 1;
          do {
            lVar31 = *plVar1;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar9) {
              *plVar1 = lVar31 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar31 == 0) {
            (**(code **)(*plStack_228 + 0x10))(plStack_228);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
          }
        }
      }
      if (lStack_248 != 0) {
        lStack_240 = lStack_248;
        __ZdlPv();
      }
      func_0x00010a94fa00(&ppuStack_278);
      if ((long)uStack_250 < 0) {
        __ZdlPv(lStack_260);
      }
      func_0x00010a94fa00(&uStack_318);
      goto LAB_10a95eebc;
    }
  }
  else {
LAB_10a95eec4:
    if (plVar25 != (long *)0x0) {
      plVar18 = plVar25 + 1;
      do {
        lVar31 = *plVar18;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar9) {
          *plVar18 = lVar31 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar31 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a00946c(&UNK_10f684c02);
LAB_10a95efec:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x10a95eff0);
  (*pcVar12)();
}



/* Entry: 10a95f238; end: 10a95f253;  */

void FUN_10a95f238(void)

{
  return;
}



/* Entry: 10a95f254; end: 10a95f34f;  */

void FUN_10a95f254(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_10a95f350();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10a95f350; end: 10a95f383;  */

void FUN_10a95f350(undefined8 *param_1)

{
  if ((ulong)param_1 >> 0x3d == 0) {
    __Znwm((long)param_1 << 3);
    return;
  }
  func_0x000109ffded8();
  *param_1 = &PTR_FUN_110c31280;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a95f384; end: 10a95f393;  */

void FUN_10a95f384(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c31280;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a95f394; end: 10a95f3b3;  */

void FUN_10a95f394(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c31280;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a95f3b4; end: 10a95f3c3;  */

void FUN_10a95f3b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a95f3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a95f3c4; end: 10a95f41b;  */

long FUN_10a95f3c4(long param_1)

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



/* Entry: 10a95f41c; end: 10a95f61f;  */

void FUN_10a95f41c(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110c308d8;
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



/* Entry: 10a95f620; end: 10a95f62f;  */

void FUN_10a95f620(long param_1)

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
  ppuStack_40 = &PTR_DAT_110c308d8;
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



/* Entry: 10a95f630; end: 10a95f657;  */

long FUN_10a95f630(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a95f3c4(param_1 + 0x18);
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



/* Entry: 10a95f658; end: 10a95f6a7;  */

void FUN_10a95f658(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c312c0;
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



/* Entry: 10a95f6a8; end: 10a95f6c7;  */

void FUN_10a95f6a8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c312e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a95f6c8; end: 10a95f6ef;  */

void FUN_10a95f6c8(long param_1)

{
  func_0x00010a94bb20(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 10a95f6f0; end: 10a95f6f3;  */

void FUN_10a95f6f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a95f6f4; end: 10a95f74b;  */

long FUN_10a95f6f4(long param_1)

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



/* Entry: 10a95f74c; end: 10a95f78b;  */

void FUN_10a95f74c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined1 *)(lVar1 + 0x1e0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010a95f75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x160))(lVar1 + 0x160);
  return;
}



/* Entry: 10a95f78c; end: 10a95f7db;  */

void FUN_10a95f78c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x37) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x20));
    }
    if (*(char *)(lVar1 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a95f7dc; end: 10a95f7f3;  */

void FUN_10a95f7dc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a95f7f4; end: 10a95f90b;  */

undefined8 * FUN_10a95f7f4(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  lVar7 = *param_3;
  lVar2 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  ppuStack_90 = &PTR_DAT_110c31370;
  uStack_a0 = 0;
  uStack_98 = 0;
  plVar5 = (long *)0x48;
  lStack_88 = lVar7;
  lStack_80 = lVar2;
  __Znwm();
  plVar5[2] = (long)&PTR_DAT_110c31370;
  plVar5[3] = lVar7;
  plVar5[4] = lVar2;
  puVar6 = (undefined8 *)param_2[0xb];
  lVar7 = param_2[0xc];
  *plVar5 = (long)(param_2 + 10);
  plVar5[1] = (long)puVar6;
  *puVar6 = plVar5;
  param_2[0xb] = plVar5;
  param_2[0xc] = lVar7 + 1;
  puVar6 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar9 = param_2[1];
  uVar8 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = plVar5;
  param_1[2] = uVar9;
  param_1[1] = uVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar6;
  }
  ___stack_chk_fail();
  FUN_10a95f6f4(&lStack_88);
  FUN_10a95f6f4(&uStack_a0);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  __Unwind_Resume();
  plVar5 = (long *)puVar6[2];
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 != (long *)0x0) {
      if (puVar6[1] != 0) {
        FUN_10a05c0fc(puVar6[1],*puVar6);
      }
      plVar1 = plVar5 + 1;
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (puVar6[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return puVar6;
}



/* Entry: 10a95f90c; end: 10a95f98b;  */

undefined8 * FUN_10a95f90c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a95f98c; end: 10a9603f3;  */

void FUN_10a95f98c(long param_1,long param_2)

{
  byte *pbVar1;
  ulong *puVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  byte bVar8;
  char cVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  code *pcVar13;
  long *plVar14;
  undefined ***pppuVar15;
  ulong *puVar16;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong *puVar17;
  long lVar18;
  ulong uVar19;
  char *pcVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  ulong uVar23;
  long *plVar24;
  undefined1 *puVar25;
  long *plVar26;
  byte *pbVar27;
  undefined8 *puVar28;
  long lVar29;
  char *pcVar30;
  ulong *puVar31;
  byte *pbVar32;
  ulong uVar33;
  undefined8 uVar34;
  long lVar35;
  undefined1 *puVar36;
  ulong *puVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  ulong *puVar40;
  undefined1 uStack_208;
  undefined1 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  ulong *puStack_1d8;
  ulong *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  ulong uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  ulong uStack_170;
  ulong *puStack_168;
  ulong *puStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  ulong auStack_120 [19];
  ulong auStack_88 [2];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = *(long **)(param_2 + 0x20);
  if ((plVar14 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar14 == (long *)0x0)
     ) {
LAB_10a960288:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (*(long *)(param_2 + 0x18) == 0) {
LAB_10a960258:
      plVar24 = plVar14 + 1;
      do {
        lVar35 = *plVar24;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar10) {
          *plVar24 = lVar35 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar35 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
      goto LAB_10a960288;
    }
    lVar35 = *(long *)(param_2 + 0x10);
    iVar7 = *(int *)(param_1 + 0x30);
    if (iVar7 < 2) {
      if (iVar7 == 0) {
        uStack_208 = 0;
LAB_10a95ff20:
        uStack_200 = 0;
        uStack_1f0 = 0;
        uStack_1f8 = 0;
        uStack_1e0 = 0;
        lStack_1e8 = 0;
        puStack_1d0 = (ulong *)0x0;
        puStack_1d8 = (ulong *)0x0;
        uStack_1c0 = 0;
        uStack_1c8 = 0;
        lStack_1b8 = 0;
      }
      else {
        if (iVar7 != 1) {
LAB_10a95fea8:
          if ((bRam000000011330a9e8 & 1) != 0) {
            func_0x00010ae06f08(0,1,&UNK_10f684963,&UNK_10f685727,0x41,&UNK_10f6857c8,in_x6,in_x7,
                                iVar7);
          }
          uStack_208 = 2;
          uStack_200 = 0;
          uStack_1f0 = 0;
          uStack_1f8 = 0;
          uStack_1e0 = 0;
          lStack_1e8 = 0;
          puStack_1d0 = (ulong *)0x0;
          puStack_1d8 = (ulong *)0x0;
          if (-1 < *(char *)(param_1 + 0x2f)) goto LAB_10a95ffb4;
          func_0x000107c3192c(&uStack_1c8,*(undefined8 *)(param_1 + 0x18),
                              *(undefined8 *)(param_1 + 0x20));
          goto LAB_10a960004;
        }
        uStack_208 = 1;
        ppuStack_158 = &PTR_DAT_110ae2150;
        uStack_150 = 0;
        uStack_148 = 0;
        uStack_140 = 0;
        uStack_138 = 0;
        puStack_130 = &DAT_11383d918;
        uStack_128 = 0;
        if (*(ulong *)(param_1 + 0x80) >> 0x1f == 0) {
          pppuVar15 = &ppuStack_158;
          auStack_120[0] = *(ulong *)(param_1 + 0x38);
          auStack_120[1] = *(ulong *)(param_1 + 0x80);
          func_0x000107c30348(pppuVar15,auStack_120);
          if (((ulong)pppuVar15 & 1) == 0) goto LAB_10a95ffc8;
          uStack_190 = 0;
          uStack_180 = 0;
          uStack_188 = 0;
          uStack_170 = 0;
          lStack_178 = 0;
          puStack_160 = (ulong *)0x0;
          puStack_168 = (ulong *)0x0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&uStack_188,(ulong)puStack_130 & 0xfffffffffffffffc);
          uVar5 = (uint)uStack_128;
          if (5 < (uint)uStack_128) {
            uVar5 = 0;
          }
          uStack_190 = (undefined1)uVar5;
          puStack_1a8 = (undefined8 *)0x0;
          puStack_1a0 = (undefined8 *)0x0;
          uStack_198 = 0;
          puVar37 = &uStack_148;
          if ((uStack_148 & 1) != 0) {
            puVar37 = (ulong *)(uStack_148 + 7);
          }
          uVar23 = uStack_170;
          puVar40 = puStack_168;
          if ((int)uStack_140 == 0) {
LAB_10a9602e0:
            uStack_200 = uStack_190;
            uStack_1f0 = uStack_180;
            uStack_1f8 = uStack_188;
            lStack_1e8 = lStack_178;
            uStack_188 = 0;
            uStack_180 = 0;
            lStack_178 = 0;
            puStack_1d0 = puStack_160;
            puStack_168 = (ulong *)0x0;
            puStack_160 = (ulong *)0x0;
            uStack_170 = 0;
            uStack_1e0 = uVar23;
            puStack_1d8 = puVar40;
          }
          else {
            puVar40 = puVar37 + (int)uStack_140;
            do {
              puVar17 = (ulong *)(*puVar37 + 0x10);
              uVar23 = *puVar17;
              if ((uVar23 & 1) != 0) {
                puVar17 = (ulong *)(uVar23 + 7);
              }
              iVar7 = *(int *)(*puVar37 + 0x18);
              if (iVar7 != 0) {
                puVar2 = puVar17 + iVar7;
                do {
                  uVar23 = *puVar17;
                  plVar24 = (long *)(*(ulong *)(uVar23 + 0x18) & 0xfffffffffffffffc);
                  lVar18 = (long)*(char *)((long)plVar24 + 0x17);
                  plVar26 = plVar24;
                  lVar29 = lVar18;
                  if (lVar18 < 0) {
                    plVar26 = (long *)*plVar24;
                    lVar29 = plVar24[1];
                  }
                  if ((lVar29 == 0x12) &&
                     ((*plVar26 == 0x5f65727574706163 && plVar26[1] == 0x6d617473656d6974) &&
                      (short)plVar26[2] == 0x7370)) {
                    if (*(int *)(uVar23 + 0x30) != 7) goto LAB_10a9602c0;
                    pcVar20 = (char *)(*(ulong *)(uVar23 + 0x28) & 0xfffffffffffffffc);
                    uVar23 = (ulong)pcVar20[0x17];
                    if ((long)uVar23 < 0) {
                      pcVar30 = *(char **)pcVar20;
                      uVar23 = *(ulong *)(pcVar20 + 8);
                      if (uVar23 != 0) goto LAB_10a95fbd8;
LAB_10a95fbf8:
                      uVar19 = 0;
                    }
                    else {
                      pcVar30 = pcVar20;
                      if (uVar23 == 0) goto LAB_10a95fbf8;
LAB_10a95fbd8:
                      uVar19 = (ulong)(*pcVar30 == '-');
                    }
                    pbVar3 = (byte *)(pcVar30 + uVar23);
                    pbVar1 = (byte *)(pcVar30 + uVar19);
                    pbVar27 = pbVar1;
                    pbVar32 = pbVar3;
                    if (uVar23 == uVar19) {
LAB_10a95fc14:
                      if ((pbVar27 == pbVar3) || (pbVar32 = pbVar27, 9 < *pbVar27 - 0x30))
                      goto LAB_10a95fc9c;
                      lVar18 = 0x13;
                      while (lVar29 = lVar18, bVar8 = *pbVar27, 0xf5 < (byte)(bVar8 - 0x3a)) {
                        pbVar27 = pbVar27 + 1;
                        auStack_120[lVar29] = (ulong)(byte)(bVar8 - 0x30);
                        if ((lVar29 == 0) || (lVar18 = lVar29 + -1, pbVar27 == pbVar3))
                        goto LAB_10a95fd44;
                      }
                      lVar29 = lVar29 + 1;
LAB_10a95fd44:
                      uVar33 = auStack_120[(int)lVar29];
                      if ((int)lVar29 < 0x12) {
                        puVar16 = (ulong *)((long)auStack_120 + ((lVar29 << 0x20) >> 0x1d) + 8);
                        plVar24 = (long *)&UNK_10e00f6f0;
                        do {
                          puVar31 = puVar16 + 1;
                          uVar33 = uVar33 + *plVar24 * *puVar16;
                          puVar16 = puVar31;
                          plVar24 = plVar24 + 1;
                        } while (puVar31 < auStack_88);
                      }
                      uVar23 = auStack_88[0] *
                               *(ulong *)(&UNK_10e00f6e8 + (0x1300000000 - (lVar29 << 0x20) >> 0x1d)
                                         );
                      auVar11._8_8_ = 0;
                      auVar11._0_8_ = auStack_88[0];
                      auVar12._8_8_ = 0;
                      auVar12._0_8_ =
                           *(ulong *)(&UNK_10e00f6e8 + (0x1300000000 - (lVar29 << 0x20) >> 0x1d));
                      pbVar32 = pbVar27 + -(ulong)(SUB168(auVar11 * auVar12,8) != 0);
                      if (((pbVar32 != pbVar3) && (*pbVar32 - 0x30 < 10)) || (CARRY8(uVar33,uVar23))
                         ) goto LAB_10a9602c0;
                      uVar23 = uVar23 + uVar33;
                      if ((int)uVar19 != 0) {
                        if (uVar23 < 0x8000000000000001) goto LAB_10a95fdec;
                        goto LAB_10a9602c0;
                      }
                      if ((long)uVar23 < 0) goto LAB_10a9602c0;
                    }
                    else {
                      lVar18 = uVar23 - uVar19;
                      do {
                        if (*pbVar27 != 0x30) goto LAB_10a95fc14;
                        pbVar27 = pbVar27 + 1;
                        lVar18 = lVar18 + -1;
                      } while (lVar18 != 0);
LAB_10a95fc9c:
                      if (pbVar32 == pbVar1) goto LAB_10a9602c0;
                      uVar23 = 0;
                      if ((int)uVar19 != 0) {
LAB_10a95fdec:
                        uVar23 = -uVar23;
                      }
                    }
                    if (((long)uVar23 < 0) || (pbVar3 != pbVar32)) goto LAB_10a9602c0;
                    uStack_1b0 = uVar23;
                    FUN_10a946b98(&puStack_1a8,&uStack_1b0);
                  }
                  else {
                    if (*(char *)((long)plVar24 + 0x17) < '\0') {
                      lVar18 = plVar24[1];
                      plVar24 = (long *)*plVar24;
                    }
                    if ((lVar18 == 6) &&
                       ((int)*plVar24 == 0x6d617266 && *(short *)((long)plVar24 + 4) == 0x7365)) {
                      if (*(int *)(uVar23 + 0x30) != 7) goto LAB_10a9602c0;
                      puVar16 = *(ulong **)(uVar23 + 8);
                      if (((ulong)puVar16 & 1) != 0) {
                        puVar16 = *(ulong **)((ulong)puVar16 & 0xfffffffffffffffe);
                      }
                      if (((uint)*(ulong *)(uVar23 + 0x28) >> 1 & 1) == 0) {
                        if (puVar16 == (ulong *)0x0) {
                          puVar16 = (ulong *)0x18;
                          __Znwm();
                          uVar19 = 2;
                        }
                        else {
                          func_0x00010b4d80a4();
                          uVar19 = 3;
                        }
                        *puVar16 = 0;
                        puVar16[1] = 0;
                        puVar16[2] = 0;
                        *(ulong *)(uVar23 + 0x28) = uVar19 | (ulong)puVar16;
                      }
                      else {
                        puVar16 = (ulong *)(*(ulong *)(uVar23 + 0x28) & 0xfffffffffffffffc);
                      }
                      auStack_120[1] = puVar16[1];
                      uVar23 = *puVar16;
                      auStack_120[2] = puVar16[2];
                      auStack_120[0] = uVar23;
                      puVar16[1] = 0;
                      puVar16[2] = 0;
                      *puVar16 = 0;
                      auStack_120[3] = 0xffffffffffffffff;
                      if (puStack_168 < puStack_160) {
                        puStack_168[1] = auStack_120[1];
                        *puStack_168 = uVar23;
                        puStack_168[2] = auStack_120[2];
                        puStack_168[3] = 0xffffffffffffffff;
                        puStack_168 = puStack_168 + 4;
                      }
                      else {
                        puVar16 = &uStack_170;
                        FUN_10a94f844(puVar16,auStack_120);
                        puStack_168 = puVar16;
                        if ((long)auStack_120[2] < 0) {
                          __ZdlPv(auStack_120[0]);
                        }
                      }
                    }
                  }
                  puVar17 = puVar17 + 1;
                } while (puVar17 != puVar2);
              }
              puVar37 = puVar37 + 1;
            } while (puVar37 != puVar40);
            uVar23 = uStack_170;
            puVar40 = puStack_168;
            if (puStack_1a8 == puStack_1a0) goto LAB_10a9602e0;
            lVar18 = (long)puStack_1a0 - (long)puStack_1a8 >> 3;
            if (lVar18 == (long)((long)puStack_168 - uStack_170) >> 5) {
              puVar21 = puStack_1a8;
              puVar28 = (undefined8 *)(uStack_170 + 0x18);
              do {
                if (lVar18 == 0) goto LAB_10a960354;
                *puVar28 = *puVar21;
                lVar18 = lVar18 + -1;
                puVar21 = puVar21 + 1;
                puVar28 = puVar28 + 4;
              } while (lVar18 != 0);
              goto LAB_10a9602e0;
            }
LAB_10a9602c0:
            uStack_200 = 6;
            uStack_1f0 = 0;
            uStack_1f8 = 0;
            uStack_1e0 = 0;
            lStack_1e8 = 0;
            puStack_1d0 = (ulong *)0x0;
            puStack_1d8 = (ulong *)0x0;
          }
          if (puStack_1a8 != (undefined8 *)0x0) {
            puStack_1a0 = puStack_1a8;
            __ZdlPv();
          }
          func_0x00010a94fa00(&uStack_170);
          if (lStack_178 < 0) {
            __ZdlPv(uStack_188);
          }
        }
        else {
LAB_10a95ffc8:
          uStack_200 = 6;
          uStack_1f0 = 0;
          uStack_1f8 = 0;
          uStack_1e0 = 0;
          lStack_1e8 = 0;
          puStack_1d0 = (ulong *)0x0;
          puStack_1d8 = (ulong *)0x0;
        }
        func_0x00010922cd08(&ppuStack_158);
        uStack_1c0 = 0;
        lStack_1b8 = 0;
        uStack_1c8 = 0;
      }
    }
    else {
      if (iVar7 != 2) {
        if (iVar7 != 3) goto LAB_10a95fea8;
        uStack_208 = 3;
        goto LAB_10a95ff20;
      }
      if ((bRam000000011330a9e8 & 1) != 0) {
        plVar24 = (long *)*(long *)(param_1 + 0x18);
        if (-1 < *(char *)(param_1 + 0x2f)) {
          plVar24 = (long *)(param_1 + 0x18);
        }
        func_0x00010ae06f08(0,1,&UNK_10f684963,&UNK_10f685727,0x39,&UNK_10f685793,in_x6,in_x7,
                            plVar24);
      }
      uStack_208 = 2;
      uStack_200 = 0;
      uStack_1f0 = 0;
      uStack_1f8 = 0;
      uStack_1e0 = 0;
      lStack_1e8 = 0;
      puStack_1d0 = (ulong *)0x0;
      puStack_1d8 = (ulong *)0x0;
      if (*(char *)(param_1 + 0x2f) < '\0') {
        func_0x000107c3192c(&uStack_1c8,*(undefined8 *)(param_1 + 0x18),
                            *(undefined8 *)(param_1 + 0x20));
      }
      else {
LAB_10a95ffb4:
        puStack_1d0 = (ulong *)0x0;
        puStack_1d8 = (ulong *)0x0;
        uStack_1e0 = 0;
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1f8 = 0;
        uStack_200 = 0;
        uStack_208 = 2;
        uStack_1c0 = *(undefined8 *)(param_1 + 0x20);
        uStack_1c8 = *(undefined8 *)(param_1 + 0x18);
        lStack_1b8 = *(long *)(param_1 + 0x28);
      }
    }
LAB_10a960004:
    uVar34 = *(undefined8 *)(lVar35 + 0x18);
    __ZNSt3__15mutex4lockEv(uVar34);
    lVar35 = *(long *)(lVar35 + 0x18);
    if ((*(byte *)(lVar35 + 0x40) & 1) != 0) {
LAB_10a960224:
      __ZNSt3__15mutex6unlockEv(uVar34);
      if (lStack_1b8 < 0) {
        __ZdlPv(uStack_1c8);
      }
      func_0x00010a94fa00(&uStack_1e0);
      if (lStack_1e8 < 0) {
        __ZdlPv(uStack_1f8);
      }
      goto LAB_10a960258;
    }
    puVar22 = *(undefined1 **)(lVar35 + 0x50);
    if (puVar22 < *(undefined1 **)(lVar35 + 0x58)) {
      *puVar22 = uStack_208;
      puVar22[8] = uStack_200;
      *(long *)(puVar22 + 0x20) = lStack_1e8;
      *(undefined8 *)(puVar22 + 0x28) = 0;
      *(undefined8 *)(puVar22 + 0x18) = uStack_1f0;
      *(undefined8 *)(puVar22 + 0x10) = uStack_1f8;
      *(undefined8 *)(puVar22 + 0x30) = 0;
      *(undefined8 *)(puVar22 + 0x38) = 0;
      *(ulong **)(puVar22 + 0x30) = puStack_1d8;
      *(ulong *)(puVar22 + 0x28) = uStack_1e0;
      *(ulong **)(puVar22 + 0x38) = puStack_1d0;
      uStack_1e0 = 0;
      puStack_1d8 = (ulong *)0x0;
      puStack_1d0 = (ulong *)0x0;
      *(long *)(puVar22 + 0x50) = lStack_1b8;
      *(undefined8 *)(puVar22 + 0x48) = uStack_1c0;
      *(undefined8 *)(puVar22 + 0x40) = uStack_1c8;
      uStack_1c0 = 0;
      lStack_1b8 = 0;
      uStack_1c8 = 0;
      puVar22 = puVar22 + 0x58;
LAB_10a960220:
      lStack_1e8 = 0;
      uStack_1f8 = 0;
      *(undefined1 **)(lVar35 + 0x50) = puVar22;
      goto LAB_10a960224;
    }
    lVar18 = (long)puVar22 - *(long *)(lVar35 + 0x48);
    uVar23 = (lVar18 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
    if (uVar23 < 0x2e8ba2e8ba2e8bb) {
      lVar29 = (long)*(undefined1 **)(lVar35 + 0x58) - *(long *)(lVar35 + 0x48) >> 3;
      uVar19 = lVar29 * 0x5d1745d1745d1746;
      if (uVar19 < uVar23 || uVar19 - uVar23 == 0) {
        uVar19 = uVar23;
      }
      if (0x1745d1745d1745c < (ulong)(lVar29 * 0x2e8ba2e8ba2e8ba3)) {
        uVar19 = 0x2e8ba2e8ba2e8ba;
      }
      if (0x2e8ba2e8ba2e8ba < uVar19) {
        func_0x000109ffded8();
        goto LAB_10a960354;
      }
      lVar29 = uVar19 * 0x58;
      __Znwm();
      puVar4 = (undefined1 *)(lVar29 + lVar18);
      *puVar4 = uStack_208;
      puVar4[8] = uStack_200;
      *(undefined8 *)(puVar4 + 0x18) = uStack_1f0;
      *(undefined8 *)(puVar4 + 0x10) = uStack_1f8;
      *(long *)(puVar4 + 0x20) = lStack_1e8;
      *(ulong **)(puVar4 + 0x30) = puStack_1d8;
      *(ulong *)(puVar4 + 0x28) = uStack_1e0;
      *(ulong **)(puVar4 + 0x38) = puStack_1d0;
      uStack_1e0 = 0;
      puStack_1d8 = (ulong *)0x0;
      puStack_1d0 = (ulong *)0x0;
      *(long *)(puVar4 + 0x50) = lStack_1b8;
      *(undefined8 *)(puVar4 + 0x48) = uStack_1c0;
      *(undefined8 *)(puVar4 + 0x40) = uStack_1c8;
      uStack_1c0 = 0;
      lStack_1b8 = 0;
      uStack_1c8 = 0;
      puVar36 = *(undefined1 **)(lVar35 + 0x48);
      puVar6 = *(undefined1 **)(lVar35 + 0x50);
      lVar18 = (long)puVar36 - (long)puVar6;
      puVar22 = puVar36;
      puVar25 = puVar4 + lVar18;
      if (lVar18 != 0) {
        do {
          *puVar25 = *puVar22;
          puVar25[8] = puVar22[8];
          uVar39 = *(undefined8 *)(puVar22 + 0x18);
          uVar38 = *(undefined8 *)(puVar22 + 0x10);
          *(undefined8 *)(puVar25 + 0x20) = *(undefined8 *)(puVar22 + 0x20);
          *(undefined8 *)(puVar25 + 0x18) = uVar39;
          *(undefined8 *)(puVar25 + 0x10) = uVar38;
          *(undefined8 *)(puVar22 + 0x18) = 0;
          *(undefined8 *)(puVar22 + 0x20) = 0;
          *(undefined8 *)(puVar22 + 0x10) = 0;
          *(undefined8 *)(puVar25 + 0x30) = 0;
          *(undefined8 *)(puVar25 + 0x38) = 0;
          uVar38 = *(undefined8 *)(puVar22 + 0x28);
          *(undefined8 *)(puVar25 + 0x30) = *(undefined8 *)(puVar22 + 0x30);
          *(undefined8 *)(puVar25 + 0x28) = uVar38;
          *(undefined8 *)(puVar25 + 0x38) = *(undefined8 *)(puVar22 + 0x38);
          *(undefined8 *)(puVar22 + 0x28) = 0;
          *(undefined8 *)(puVar22 + 0x30) = 0;
          *(undefined8 *)(puVar22 + 0x38) = 0;
          uVar39 = *(undefined8 *)(puVar22 + 0x48);
          uVar38 = *(undefined8 *)(puVar22 + 0x40);
          *(undefined8 *)(puVar25 + 0x50) = *(undefined8 *)(puVar22 + 0x50);
          *(undefined8 *)(puVar25 + 0x48) = uVar39;
          *(undefined8 *)(puVar25 + 0x40) = uVar38;
          *(undefined8 *)(puVar22 + 0x48) = 0;
          *(undefined8 *)(puVar22 + 0x50) = 0;
          *(undefined8 *)(puVar22 + 0x40) = 0;
          puVar22 = puVar22 + 0x58;
          puVar25 = puVar25 + 0x58;
        } while (puVar22 != puVar6);
        do {
          FUN_10a94fc4c(puVar36);
          puVar36 = puVar36 + 0x58;
        } while (puVar36 != puVar6);
        puVar36 = *(undefined1 **)(lVar35 + 0x48);
      }
      puVar22 = puVar4 + 0x58;
      *(undefined1 **)(lVar35 + 0x48) = puVar4 + lVar18;
      *(undefined1 **)(lVar35 + 0x50) = puVar22;
      *(ulong *)(lVar35 + 0x58) = lVar29 + uVar19 * 0x58;
      if (puVar36 != (undefined1 *)0x0) {
        __ZdlPv(puVar36);
      }
      goto LAB_10a960220;
    }
  }
  FUN_10a9603f4();
LAB_10a960354:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10a960358);
  (*pcVar13)();
}



/* Entry: 10a9603f4; end: 10a960407;  */

undefined8 * FUN_10a9603f4(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar5 = &DAT_10f62a4d8;
  FUN_109ffde64();
  plVar4 = *(long **)(puVar5 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(puVar5 + 0x10) != 0) {
        FUN_10a05c0fc(*(long *)(puVar5 + 0x10),*(undefined8 *)(puVar5 + 8));
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (*(long *)(puVar5 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return (undefined8 *)(puVar5 + 8);
}



/* Entry: 10a960408; end: 10a960457;  */

undefined8 * FUN_10a960408(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10a05c0fc(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10a960458; end: 10a9605d3;  */

void FUN_10a960458(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_e8 [40];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [56];
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined8 *)0x138;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110b9f3b0;
  uVar1 = param_2[1];
  puVar5 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar5 = param_2;
  }
  uStack_c0 = *param_3;
  uStack_b8 = param_3[1];
  *param_3 = 0;
  (**(code **)(param_3[2] + 0x10))(auStack_b0);
  uStack_78 = param_3[9];
  FUN_10a0424c4(auStack_e8,param_5);
  uVar2 = param_6[1];
  puVar3 = (undefined8 *)*param_6;
  if (-1 < (char)*(byte *)((long)param_6 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_6 + 0x17);
    puVar3 = param_6;
  }
  FUN_10a05c494(puVar4 + 3,puVar5,uVar1,&UNK_10f647b49,4,&uStack_c0,param_4,auStack_e8,puVar3,uVar2,
                param_7);
  func_0x000104c4f944(auStack_e8);
  puVar5 = &uStack_c0;
  FUN_10a042634(puVar5);
  *param_1 = (long)(puVar4 + 3);
  param_1[1] = (long)puVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x000104c4f944(auStack_e8);
    FUN_10a042634(&uStack_c0);
    __ZNSt3__119__shared_weak_countD2Ev(puVar4);
    __ZdlPv();
    __Unwind_Resume(puVar5);
    return;
  }
  return;
}



/* Entry: 10a9605d4; end: 10a960607;  */

void FUN_10a9605d4(void)

{
  return;
}



/* Entry: 10a960608; end: 10a960637;  */

void FUN_10a960608(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a960638; end: 10a960733;  */

undefined1  [16] FUN_10a960638(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c308d8;
  puVar1 = &UNK_10f683c80;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c308d8;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a960734; end: 10a960787;  */

ulong FUN_10a960734(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a960788,0);
  }
  return param_1;
}



/* Entry: 10a960788; end: 10a960837;  */

void FUN_10a960788(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a960838(param_1,param_2,FUN_10a94cc1c,0,param_3,param_5);
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



/* Entry: 10a960838; end: 10a96095f;  */

undefined **
FUN_10a960838(undefined4 *param_1,undefined **param_2,code *param_3,ulong param_4,
             undefined **param_5,undefined8 param_6)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuStack_60;
  ulong uStack_58;
  byte bStack_49;
  undefined8 uStack_48;
  
  ppuVar2 = param_2;
  func_0x000109898688();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar3 = param_2;
    FUN_10a052c2c();
    param_5 = ppuVar2;
    if (ppuVar3 != (undefined **)0x0) {
      param_5 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (ppuVar3 != (undefined **)0x0) {
        FUN_10a052e3c(param_6);
        if ((param_4 & 1) != 0) {
          param_3 = *(code **)(*(long *)((long)ppuVar3 + ((long)param_4 >> 1)) +
                              ((ulong)param_3 & 0xffffffff));
        }
        (*param_3)(&ppuStack_60);
        pppuVar1 = (undefined ***)ppuStack_60;
        if (-1 < (char)bStack_49) {
          uStack_58 = (ulong)bStack_49;
          pppuVar1 = &ppuStack_60;
        }
        (**(code **)(*param_2 + 0x128))(&uStack_48,param_2,pppuVar1,uStack_58);
        *param_1 = 6;
        *(undefined8 *)(param_1 + 2) = uStack_48;
        if ((char)bStack_49 < '\0') {
          __ZdlPv(ppuStack_60);
          param_2 = ppuStack_60;
        }
        return param_2;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar2 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  if ((char)bStack_49 < '\0') {
    __ZdlPv(ppuStack_60);
  }
  __Unwind_Resume();
  ppuVar3 = ppuVar2;
  FUN_10a0051e8();
  if (((ulong)ppuVar3 & 1) == 0) {
    FUN_10a0605c4(ppuVar2,*param_5,FUN_10a9609b4,0);
  }
  return ppuVar2;
}



/* Entry: 10a960960; end: 10a9609b3;  */

ulong FUN_10a960960(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a9609b4,0);
  }
  return param_1;
}



/* Entry: 10a9609b4; end: 10a960a63;  */

void FUN_10a9609b4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a960838(param_1,param_2,0x10a94cc44,0,param_3,param_5);
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



/* Entry: 10a960a64; end: 10a960c3b;  */

void FUN_10a960a64(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
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
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f685425,0xe);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a960b20);
  (*pcVar4)();
}



/* Entry: 10a960c3c; end: 10a960c7f;  */

void FUN_10a960c3c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_DAT_110c313b0;
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
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



/* Entry: 10a960c80; end: 10a960cab;  */

void FUN_10a960c80(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a960cac; end: 10a960fc3;  */

void FUN_10a960cac(long param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long **pplStack_68;
  
  plVar5 = *(long **)(param_1 + 0x10);
  if ((plVar5 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0))
  {
    lVar11 = *(long *)(param_1 + 8);
    if (lVar11 != 0) {
      plStack_a0 = (long *)0x0;
      plStack_98 = (long *)0x0;
      plStack_90 = (long *)0x0;
      __ZNSt3__15mutex4lockEv(lVar11 + 0x98);
      plVar6 = *(long **)(lVar11 + 0xd8);
      plVar8 = *(long **)(lVar11 + 0xe0);
      if ((long)plVar8 - (long)plVar6 != 0) {
        plVar6 = (long *)((long)plVar8 - (long)plVar6 >> 4);
        if ((ulong)plVar6 >> 0x3c != 0) {
          FUN_10a94fe68();
LAB_10a960f7c:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a960f80);
          (*pcVar4)();
        }
        pplStack_68 = &plStack_a0;
        FUN_10a94fe7c();
        lVar10 = (long)param_2 * 2;
        plVar8 = (long *)((long)plVar6 - ((long)plStack_98 - (long)plStack_a0));
        param_2 = plStack_a0;
        _memcpy(plVar8);
        plStack_88 = plStack_a0;
        plStack_78 = plStack_a0;
        plStack_70 = plStack_90;
        plStack_80 = plStack_a0;
        plStack_a0 = plVar8;
        plStack_98 = plVar6;
        plStack_90 = plVar6 + lVar10;
        func_0x00010a94feb0(&plStack_88);
        plVar6 = *(long **)(lVar11 + 0xd8);
        plVar8 = *(long **)(lVar11 + 0xe0);
      }
      if (plVar6 != plVar8) {
        do {
          plVar8 = (long *)plVar6[1];
          if (plVar8 == (long *)0x0) {
            plVar8 = (long *)0x0;
LAB_10a960dc0:
            param_2 = *(long **)(lVar11 + 0xe0);
            if (param_2 == plVar6) goto LAB_10a960f7c;
            plVar9 = plVar6 + 2;
            FUN_10a94fe08(plVar9,param_2,plVar6);
            for (plVar12 = *(long **)(lVar11 + 0xe0); plVar12 != plVar9; plVar12 = plVar12 + -2) {
              if (plVar12[-1] != 0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
            }
            *(long **)(lVar11 + 0xe0) = plVar9;
            if (plVar8 != (long *)0x0) {
              plVar9 = plVar8 + 1;
              do {
                lVar10 = *plVar9;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar3) {
                  *plVar9 = lVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
              }
            }
          }
          else {
            __ZNSt3__119__shared_weak_count4lockEv();
            if ((plVar8 == (long *)0x0) || (lVar10 = *plVar6, lVar10 == 0)) goto LAB_10a960dc0;
            if (plStack_98 < plStack_90) {
              *plStack_98 = lVar10;
              plStack_98[1] = (long)plVar8;
              plVar8 = plStack_98 + 2;
            }
            else {
              lVar13 = (long)plStack_98 - (long)plStack_a0;
              uVar1 = (lVar13 >> 4) + 1;
              if (uVar1 >> 0x3c != 0) {
                FUN_10a94fe68();
                goto LAB_10a960f7c;
              }
              uVar7 = (long)plStack_90 - (long)plStack_a0 >> 3;
              if (uVar7 <= uVar1) {
                uVar7 = uVar1;
              }
              if (0x7fffffffffffffef < (ulong)((long)plStack_90 - (long)plStack_a0)) {
                uVar7 = 0xfffffffffffffff;
              }
              pplStack_68 = &plStack_a0;
              FUN_10a94fe7c();
              plVar9 = (long *)(uVar7 + lVar13);
              lVar13 = (long)param_2 * 0x10;
              *plVar9 = lVar10;
              plVar9[1] = (long)plVar8;
              plVar8 = plVar9 + 2;
              plVar9 = (long *)((long)plVar9 - ((long)plStack_98 - (long)plStack_a0));
              param_2 = plStack_a0;
              _memcpy(plVar9);
              plStack_88 = plStack_a0;
              plStack_78 = plStack_a0;
              plStack_70 = plStack_90;
              plStack_80 = plStack_a0;
              plStack_a0 = plVar9;
              plStack_98 = plVar8;
              plStack_90 = (long *)(uVar7 + lVar13);
              func_0x00010a94feb0(&plStack_88);
            }
            plVar6 = plVar6 + 2;
            plStack_98 = plVar8;
          }
        } while (plVar6 != *(long **)(lVar11 + 0xe0));
      }
      __ZNSt3__15mutex6unlockEv(lVar11 + 0x98);
      plVar6 = plStack_98;
      for (plVar8 = plStack_a0; plVar8 != plVar6; plVar8 = plVar8 + 2) {
        (**(code **)(*(long *)*plVar8 + 0x10))();
      }
      func_0x00010a94fefc(&plStack_a0);
    }
    plVar6 = plVar5 + 1;
    do {
      lVar11 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10a960fc4; end: 10a960fff;  */

long FUN_10a960fc4(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c31410);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a961000; end: 10a96100b;  */

undefined ** FUN_10a961000(void)

{
  return &PTR_DAT_110c31410;
}



/* Entry: 10a96100c; end: 10a961063;  */

long FUN_10a96100c(long param_1)

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


