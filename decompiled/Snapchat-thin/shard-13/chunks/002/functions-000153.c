/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a25fd58; end: 10a25fdd7;  */

undefined8 * FUN_10a25fd58(undefined8 *param_1)

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



/* Entry: 10a25fdd8; end: 10a25ff5b;  */

void FUN_10a25fdd8(undefined8 param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar3 = *(long **)(*(long *)(*(long *)(param_2 + 0x28) + 0x100) + 0x1c8);
  (**(code **)(*plVar3 + 0x60))();
  plStack_40 = (long *)0x0;
  plStack_38 = (long *)0x0;
  plVar4 = (long *)plVar3[1];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_38 = plVar4;
    if (plVar4 != (long *)0x0) {
      plStack_40 = (long *)*plVar3;
      if (plStack_40 != (long *)0x0) {
        plStack_48 = (long *)param_3[1];
        uStack_50 = *param_3;
        if (param_3[1] != 0) {
          plVar3 = (long *)(param_3[1] + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar2) {
              *plVar3 = *plVar3 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        (**(code **)(*plStack_40 + 0x10))(param_1,plStack_40,&uStack_50);
        plVar3 = plStack_48;
        if (plStack_48 != (long *)0x0) {
          plVar4 = plStack_48 + 1;
          do {
            lVar5 = *plVar4;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = lVar5 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plStack_48 + 0x10))(plStack_48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
          }
        }
        goto LAB_10a25feec;
      }
    }
  }
  if ((bRam000000011330a9e8 & 1) != 0) {
    func_0x00010ae06f08(0,1,&UNK_10f647b4e,&UNK_10f647c27,0x68,&UNK_10f647be2);
  }
  func_0x000107c2b054(param_1,&UNK_10f64697a);
LAB_10a25feec:
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a25ff5c; end: 10a26006f;  */

void FUN_10a25ff5c(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  undefined8 uVar7;
  
  plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 0x28) + 0x100) + 0x1c8);
  (**(code **)(*plVar4 + 0x60))();
  uVar7 = 0;
  plVar5 = (long *)plVar4[1];
  plVar3 = (long *)0x0;
  if ((plVar5 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar3 = plVar5, plVar5 != (long *)0x0)) {
    plVar4 = (long *)*plVar4;
    uVar7 = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4,param_2);
      goto LAB_10a260008;
    }
  }
  plVar5 = plVar3;
  if ((bRam000000011330a9e8 & 1) != 0) {
    func_0x00010ae06f08(0,1,&UNK_10f647b4e,&UNK_10f647c90,0x71,&UNK_10f647be2,in_x6,in_x7,uVar7,
                        plVar5);
  }
  if (plVar5 == (long *)0x0) {
    return;
  }
LAB_10a260008:
  plVar3 = plVar5 + 1;
  do {
    lVar6 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 != 0) {
    return;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
  return;
}



/* Entry: 10a260070; end: 10a2600af;  */

undefined8 * FUN_10a260070(undefined8 *param_1)

{
  FUN_10a26ef68(param_1 + 5);
  func_0x00010a07a8a8(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a2600b0; end: 10a2608a3;  */

void FUN_10a2600b0(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong *param_5,
                  long *param_6,undefined8 *param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  float fVar20;
  undefined1 auStack_180 [8];
  long *plStack_178;
  long lStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined4 auStack_a8 [2];
  undefined8 *apuStack_a0 [7];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar16 = param_5[1];
  if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
    uVar16 = (ulong)*(byte *)((long)param_5 + 0x17);
  }
  if ((uVar16 == 0) || (puVar6 = param_5, FUN_10a25f7ec(), ((ulong)puVar6 & 1) != 0)) {
    FUN_10a25f96c(auStack_a8,param_2,param_6,*param_7,param_7[1]);
    if (*(char *)((long)param_5 + 0x17) < '\0') {
      if (param_5[1] != 0) {
        param_5 = (ulong *)*param_5;
        goto LAB_10a260198;
      }
LAB_10a2601a8:
      FUN_10a3bf120(auStack_f8);
    }
    else {
      if (*(char *)((long)param_5 + 0x17) == '\0') goto LAB_10a2601a8;
LAB_10a260198:
      FUN_10a3bf330(auStack_f8,param_5);
    }
    lVar18 = *(long *)(*(long *)(param_2 + 0x28) + 0x100);
    FUN_10a00ce20(&lStack_150,*(undefined8 *)(param_2 + 0x30),auStack_a8);
    FUN_10a295b40(auStack_180,param_3,param_4,auStack_f8,1,lVar18 + 0x208,&lStack_150);
    func_0x00010a05c07c(&lStack_150);
    FUN_10a25fdd8(param_1,param_2,auStack_180);
    lStack_138 = *param_6;
    plStack_130 = (long *)param_6[1];
    if (plStack_130 != (long *)0x0) {
      plVar17 = plStack_130 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar3) {
          *plVar17 = *plVar17 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar17 = (long *)*param_7;
    plVar19 = (long *)param_7[1];
    if (plVar19 != (long *)0x0) {
      plVar1 = plVar19 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_170 = lStack_138;
    plStack_168 = plStack_130;
    plStack_160 = plVar17;
    plStack_158 = plVar19;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      func_0x000107c3192c(&lStack_150,*param_1,param_1[1]);
    }
    else {
      lStack_148 = param_1[1];
      lStack_150 = *param_1;
      lStack_140 = param_1[2];
    }
    if (plStack_130 != (long *)0x0) {
      plVar1 = plStack_130 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (plVar19 != (long *)0x0) {
      plVar1 = plVar19 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar1 = (long *)(param_2 + 0x40);
    plVar10 = plVar1;
    plStack_128 = plVar17;
    plStack_120 = plVar19;
    func_0x000107c2b05c(plVar1,&lStack_150);
    plVar19 = *(long **)(param_2 + 0x48);
    if (plVar19 != (long *)0x0) {
      uVar16 = (long)plVar19 - 1;
      if (((ulong)plVar19 & uVar16) == 0) {
        plVar17 = (long *)(uVar16 & (ulong)plVar10);
      }
      else {
        plVar17 = plVar10;
        if (plVar19 <= plVar10) {
          uVar4 = 0;
          if (plVar19 != (long *)0x0) {
            uVar4 = (ulong)plVar10 / (ulong)plVar19;
          }
          plVar17 = (long *)((long)plVar10 - uVar4 * (long)plVar19);
        }
      }
      plVar8 = *(long **)(*plVar1 + (long)plVar17 * 8);
      if (plVar8 != (long *)0x0) {
        for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          plVar9 = (long *)plVar8[1];
          if (plVar9 == plVar10) {
            plVar9 = plVar1;
            func_0x000107c2b068(plVar1,plVar8 + 2,&lStack_150);
            if (((ulong)plVar9 & 1) != 0) goto LAB_10a260620;
          }
          else {
            if (((ulong)plVar19 & uVar16) == 0) {
              plVar9 = (long *)((ulong)plVar9 & uVar16);
            }
            else if (plVar19 <= plVar9) {
              uVar4 = 0;
              if (plVar19 != (long *)0x0) {
                uVar4 = (ulong)plVar9 / (ulong)plVar19;
              }
              plVar9 = (long *)((long)plVar9 - uVar4 * (long)plVar19);
            }
            if (plVar9 != plVar17) break;
          }
        }
      }
    }
    plVar8 = (long *)0x48;
    __Znwm();
    uStack_100 = 0;
    *plVar8 = 0;
    plVar8[1] = (long)plVar10;
    plStack_110 = plVar8;
    plStack_108 = plVar1;
    if (lStack_140 < 0) {
      func_0x000107c3192c(plVar8 + 2,lStack_150,lStack_148);
    }
    else {
      plVar8[3] = lStack_148;
      plVar8[2] = lStack_150;
      plVar8[4] = lStack_140;
    }
    plVar8[6] = (long)plStack_130;
    plVar8[5] = lStack_138;
    lStack_138 = 0;
    plStack_130 = (long *)0x0;
    plVar8[8] = (long)plStack_120;
    plVar8[7] = (long)plStack_128;
    plStack_128 = (long *)0x0;
    plStack_120 = (long *)0x0;
    uStack_100 = CONCAT71(uStack_100._1_7_,1);
    fVar20 = (float)(*(long *)(param_2 + 0x58) + 1);
    if ((plVar19 == (long *)0x0) || (*(float *)(param_2 + 0x60) * (float)plVar19 < fVar20)) {
      uVar16 = 1;
      if ((long *)0x2 < plVar19) {
        uVar16 = (ulong)(((ulong)plVar19 & (long)plVar19 - 1U) != 0);
      }
      plVar17 = (long *)(uVar16 | (long)plVar19 << 1);
      plVar19 = (long *)(long)(fVar20 / *(float *)(param_2 + 0x60));
      if (plVar17 <= plVar19) {
        plVar17 = plVar19;
      }
      if ((long)plVar17 - 1U == 0) {
        plVar17 = (long *)0x2;
      }
      else if (((ulong)plVar17 & (long)plVar17 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      plVar19 = *(long **)(param_2 + 0x48);
      if (plVar19 < plVar17) {
LAB_10a260434:
        if ((ulong)plVar17 >> 0x3d != 0) goto LAB_10a2607dc;
        lVar18 = (long)plVar17 << 3;
        __Znwm();
        lVar7 = *plVar1;
        *plVar1 = lVar18;
        if (lVar7 != 0) {
          __ZdlPv();
        }
        plVar19 = (long *)0x0;
        *(long **)(param_2 + 0x48) = plVar17;
        do {
          *(undefined8 *)(*plVar1 + (long)plVar19 * 8) = 0;
          plVar19 = (long *)((long)plVar19 + 1);
        } while (plVar17 != plVar19);
        plVar9 = *(long **)(param_2 + 0x50);
        plVar19 = plVar17;
        if (plVar9 != (long *)0x0) {
          plVar11 = (long *)plVar9[1];
          uVar16 = (long)plVar17 - 1;
          if (((ulong)plVar17 & uVar16) == 0) {
            plVar11 = (long *)((ulong)plVar11 & uVar16);
          }
          else if (plVar17 <= plVar11) {
            uVar4 = 0;
            if (plVar17 != (long *)0x0) {
              uVar4 = (ulong)plVar11 / (ulong)plVar17;
            }
            plVar11 = (long *)((long)plVar11 - uVar4 * (long)plVar17);
          }
          *(undefined8 **)(*plVar1 + (long)plVar11 * 8) = (undefined8 *)(param_2 + 0x50);
          plVar12 = (long *)*plVar9;
          while (plVar12 != (long *)0x0) {
            plVar14 = (long *)plVar12[1];
            if (((ulong)plVar17 & uVar16) == 0) {
              plVar14 = (long *)((ulong)plVar14 & uVar16);
            }
            else if (plVar17 <= plVar14) {
              uVar4 = 0;
              if (plVar17 != (long *)0x0) {
                uVar4 = (ulong)plVar14 / (ulong)plVar17;
              }
              plVar14 = (long *)((long)plVar14 - uVar4 * (long)plVar17);
            }
            plVar13 = plVar12;
            if (plVar14 != plVar11) {
              lVar18 = *plVar1;
              if (*(long *)(lVar18 + (long)plVar14 * 8) == 0) {
                *(long **)(lVar18 + (long)plVar14 * 8) = plVar9;
                plVar11 = plVar14;
              }
              else {
                *plVar9 = *plVar12;
                *plVar12 = **(undefined8 **)(lVar18 + (long)plVar14 * 8);
                **(long **)(lVar18 + (long)plVar14 * 8) = (long)plVar12;
                plVar13 = plVar9;
              }
            }
            plVar9 = plVar13;
            plVar12 = (long *)*plVar13;
          }
        }
      }
      else if (plVar17 < plVar19) {
        plVar9 = (long *)(long)((float)*(ulong *)(param_2 + 0x58) / *(float *)(param_2 + 0x60));
        if ((plVar19 < (long *)0x3) || (((ulong)plVar19 & (long)plVar19 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((long *)0x1 < plVar9) {
          plVar9 = (long *)(1L << (-LZCOUNT((long)plVar9 + -1) & 0x3fU));
        }
        if (plVar17 <= plVar9) {
          plVar17 = plVar9;
        }
        if (plVar17 < plVar19) {
          if (plVar17 != (long *)0x0) goto LAB_10a260434;
          lVar18 = *plVar1;
          *plVar1 = 0;
          if (lVar18 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(param_2 + 0x48) = 0;
          plVar19 = (long *)0x0;
        }
        else {
          plVar19 = *(long **)(param_2 + 0x48);
        }
      }
      if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
        plVar17 = (long *)((long)plVar19 - 1U & (ulong)plVar10);
      }
      else {
        plVar17 = plVar10;
        if (plVar19 <= plVar10) {
          uVar16 = 0;
          if (plVar19 != (long *)0x0) {
            uVar16 = (ulong)plVar10 / (ulong)plVar19;
          }
          plVar17 = (long *)((long)plVar10 - uVar16 * (long)plVar19);
        }
      }
    }
    lVar18 = *plVar1;
    plVar10 = *(long **)(lVar18 + (long)plVar17 * 8);
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)(param_2 + 0x50);
      *plVar8 = *plVar10;
      *plVar10 = (long)plVar8;
      *(long **)(lVar18 + (long)plVar17 * 8) = plVar10;
      if (*plVar8 != 0) {
        plVar17 = *(long **)(*plVar8 + 8);
        if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
          plVar17 = (long *)((ulong)plVar17 & (long)plVar19 - 1U);
        }
        else if (plVar19 <= plVar17) {
          uVar16 = 0;
          if (plVar19 != (long *)0x0) {
            uVar16 = (ulong)plVar17 / (ulong)plVar19;
          }
          plVar17 = (long *)((long)plVar17 - uVar16 * (long)plVar19);
        }
        *(long **)(*plVar1 + (long)plVar17 * 8) = plVar8;
      }
    }
    else {
      *plVar8 = *plVar10;
      *plVar10 = (long)plVar8;
    }
    *(long *)(param_2 + 0x58) = *(long *)(param_2 + 0x58) + 1;
LAB_10a260620:
    plVar17 = plStack_120;
    if (plStack_120 != (long *)0x0) {
      plVar19 = plStack_120 + 1;
      do {
        lVar18 = *plVar19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar3) {
          *plVar19 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_120 + 0x10))(plStack_120);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    plVar17 = plStack_130;
    if (plStack_130 != (long *)0x0) {
      plVar19 = plStack_130 + 1;
      do {
        lVar18 = *plVar19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar3) {
          *plVar19 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_130 + 0x10))(plStack_130);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    if (lStack_140 < 0) {
      __ZdlPv(lStack_150);
    }
    plVar17 = plStack_158;
    if (plStack_158 != (long *)0x0) {
      plVar19 = plStack_158 + 1;
      do {
        lVar18 = *plVar19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar3) {
          *plVar19 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_158 + 0x10))(plStack_158);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    plVar17 = plStack_168;
    if (plStack_168 != (long *)0x0) {
      plVar19 = plStack_168 + 1;
      do {
        lVar18 = *plVar19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar3) {
          *plVar19 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_168 + 0x10))(plStack_168);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    if (plStack_178 != (long *)0x0) {
      plVar17 = plStack_178 + 1;
      do {
        lVar18 = *plVar17;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar3) {
          *plVar17 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_178 + 0x10))(plStack_178);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_178);
      }
    }
    FUN_10a042634(auStack_f8);
    (*(code *)*apuStack_a0[0])(apuStack_a0);
  }
  else {
    uVar15 = *param_7;
    auStack_a8[0] = 400;
    func_0x000107c2b054(auStack_f8,&UNK_10f647c0d);
    FUN_10a25f92c(uVar15,auStack_a8,auStack_f8);
    if (cStack_e1 < '\0') {
      __ZdlPv(auStack_f8[0]);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_10a2607dc:
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a2607e4);
  (*pcVar5)();
}



/* Entry: 10a2608a4; end: 10a260bef;  */

void FUN_10a2608a4(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  
  plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 0x28) + 0x100) + 0x1c8);
  (**(code **)(*plVar4 + 0x60))();
  plVar5 = (long *)plVar4[1];
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if ((plVar5 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      uVar9 = param_1 + 0x40;
      func_0x000107c2b05c(uVar9,param_2);
      uVar13 = *(ulong *)(param_1 + 0x48);
      if (uVar13 != 0) {
        uVar14 = uVar13 - 1;
        if ((uVar13 & uVar14) == 0) {
          uVar11 = uVar14 & uVar9;
        }
        else {
          uVar7 = 0;
          if (uVar13 != 0) {
            uVar7 = uVar9 / uVar13;
          }
          uVar11 = uVar9;
          if (uVar13 <= uVar9) {
            uVar11 = uVar9 - uVar7 * uVar13;
          }
        }
        puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x40) + uVar11 * 8);
        if (puVar6 != (undefined8 *)0x0) {
          for (plVar12 = (long *)*puVar6; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
            uVar7 = plVar12[1];
            if (uVar7 == uVar9) {
              uVar7 = param_1 + 0x40;
              func_0x000107c2b068(uVar7,plVar12 + 2,param_2);
              if ((uVar7 & 1) != 0) {
                (**(code **)(*plVar4 + 8))(plVar4,param_2);
                uVar13 = *(ulong *)(param_1 + 0x48);
                lVar8 = *plVar12;
                uVar9 = plVar12[1];
                uVar14 = uVar13 - 1;
                if ((uVar13 & uVar14) == 0) {
                  uVar9 = uVar14 & uVar9;
                }
                else if (uVar13 <= uVar9) {
                  uVar11 = 0;
                  if (uVar13 != 0) {
                    uVar11 = uVar9 / uVar13;
                  }
                  uVar9 = uVar9 - uVar11 * uVar13;
                }
                plVar4 = *(long **)(*(long *)(param_1 + 0x40) + uVar9 * 8);
                do {
                  plVar10 = plVar4;
                  plVar4 = (long *)*plVar10;
                } while ((long *)*plVar10 != plVar12);
                if (plVar10 == (long *)(param_1 + 0x50)) {
LAB_10a260b38:
                  if (lVar8 == 0) {
LAB_10a260b6c:
                    *(undefined8 *)(*(long *)(param_1 + 0x40) + uVar9 * 8) = 0;
                    lVar8 = *plVar12;
                    goto LAB_10a260b74;
                  }
                  uVar11 = *(ulong *)(lVar8 + 8);
                  if ((uVar13 & uVar14) == 0) {
                    uVar7 = uVar11 & uVar14;
                  }
                  else {
                    uVar7 = uVar11;
                    if (uVar13 <= uVar11) {
                      uVar7 = 0;
                      if (uVar13 != 0) {
                        uVar7 = uVar11 / uVar13;
                      }
                      uVar7 = uVar11 - uVar7 * uVar13;
                    }
                  }
                  if (uVar7 != uVar9) goto LAB_10a260b6c;
LAB_10a260b7c:
                  if ((uVar13 & uVar14) == 0) {
                    uVar11 = uVar11 & uVar14;
                  }
                  else if (uVar13 <= uVar11) {
                    uVar14 = 0;
                    if (uVar13 != 0) {
                      uVar14 = uVar11 / uVar13;
                    }
                    uVar11 = uVar11 - uVar14 * uVar13;
                  }
                  if (uVar11 != uVar9) {
                    *(long **)(*(long *)(param_1 + 0x40) + uVar11 * 8) = plVar10;
                    lVar8 = *plVar12;
                  }
                }
                else {
                  uVar11 = plVar10[1];
                  if ((uVar13 & uVar14) == 0) {
                    uVar11 = uVar11 & uVar14;
                  }
                  else if (uVar13 <= uVar11) {
                    uVar7 = 0;
                    if (uVar13 != 0) {
                      uVar7 = uVar11 / uVar13;
                    }
                    uVar11 = uVar11 - uVar7 * uVar13;
                  }
                  if (uVar11 != uVar9) goto LAB_10a260b38;
LAB_10a260b74:
                  if (lVar8 != 0) {
                    uVar11 = *(ulong *)(lVar8 + 8);
                    goto LAB_10a260b7c;
                  }
                }
                *plVar10 = lVar8;
                *plVar12 = 0;
                *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + -1;
                FUN_10a26f33c(plVar12 + 2);
                __ZdlPv(plVar12);
                goto LAB_10a260984;
              }
            }
            else {
              if ((uVar13 & uVar14) == 0) {
                uVar7 = uVar7 & uVar14;
              }
              else if (uVar13 <= uVar7) {
                uVar3 = 0;
                if (uVar13 != 0) {
                  uVar3 = uVar7 / uVar13;
                }
                uVar7 = uVar7 - uVar3 * uVar13;
              }
              if (uVar7 != uVar11) break;
            }
          }
        }
      }
      if ((bRam000000011330a9e8 & 1) != 0) {
        plVar4 = (long *)*param_2;
        if (-1 < *(char *)((long)param_2 + 0x17)) {
          plVar4 = param_2;
        }
        func_0x00010ae06f08(0,1,&UNK_10f647b4e,&UNK_10f647ce5,0xa7,&UNK_10f647d35,in_x6,in_x7,plVar4
                           );
      }
      goto LAB_10a260984;
    }
  }
  if ((bRam000000011330a9e8 & 1) != 0) {
    func_0x00010ae06f08(0,1,&UNK_10f647b4e,&UNK_10f647ce5,0xa1,&UNK_10f647be2);
  }
  if (plVar5 == (long *)0x0) {
    return;
  }
LAB_10a260984:
  plVar4 = plVar5 + 1;
  do {
    lVar8 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar8 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
    return;
  }
  return;
}



/* Entry: 10a260bf0; end: 10a260d57;  */

void FUN_10a260bf0(undefined8 param_1)

{
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
  puStack_88 = &UNK_10e4a2318;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a004eb4(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10e4a2330;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a296430(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10e4a2348;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a296430(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10e4a2360;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a296430(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10e4a2390;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a296430(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10e4a2378;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a296430(param_1,&puStack_88);
  func_0x00010a004064();
  return;
}



/* Entry: 10a260d58; end: 10a260de3;  */

undefined1  [16] FUN_10a260d58(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f648b8b;
  return auVar1;
}



/* Entry: 10a260de4; end: 10a26699b;  */

undefined8 * FUN_10a260de4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined *puVar22;
  ulong uVar23;
  long *plVar24;
  undefined *puVar25;
  ulong uVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  long *plVar33;
  long *unaff_x28;
  long *plVar34;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  param_1[0x13] = &PTR_FUN_110c383b8;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0x100;
  *param_1 = &PTR_DAT_110b17898;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a0040d0(param_1 + 3,&PTR_PTR_110bb6508);
  *param_1 = &PTR_FUN_110bb63d8;
  param_1[3] = &PTR_DAT_110bb6450;
  param_1[0x13] = &PTR_DAT_110bb64c8;
  param_1[8] = param_2;
  plVar30 = param_1 + 9;
  param_1[10] = 0;
  *plVar30 = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  plVar31 = param_1 + 0xe;
  *plVar31 = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  puVar7 = (undefined8 *)0x98;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110bbaa38;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  puVar7[0x11] = 0;
  puVar7[0x10] = 0;
  puVar7[0x12] = 0;
  puVar7[3] = &PTR_FUN_110bbaa88;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  *(undefined4 *)(puVar7 + 10) = 0x3f800000;
  puVar7[0xb] = FUN_10a296ae4;
  puVar7[0xc] = &PTR_DAT_110ae9180;
  param_1[0x11] = puVar7 + 3;
  param_1[0x12] = puVar7;
  if ((*(byte *)(param_1 + 0x16) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x16) = 1;
    param_1[0x15] = param_2;
    if (param_2 != 0) {
      param_1[0x14] = *(undefined8 *)(*(long *)(param_2 + 0x850) + 0x2c);
    }
  }
  FUN_10a5ae998(param_1[6],&PTR_DAT_110b99f08,param_2,param_1 + 3);
  puVar8 = (undefined8 *)0x58;
  __Znwm();
  puVar8[1] = 0;
  puVar8[2] = 0;
  plVar9 = puVar8 + 3;
  *puVar8 = &PTR_FUN_110bb7be0;
  FUN_10a53dfe0(plVar9,param_2);
  puVar10 = (undefined8 *)0x50;
  __Znwm();
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar11 = puVar10 + 3;
  *puVar10 = &PTR_DAT_110bb7c30;
  FUN_10a539d40(puVar11,param_2);
  puVar12 = (undefined8 *)0x40;
  __Znwm();
  puVar12[1] = 0;
  puVar12[2] = 0;
  plVar13 = puVar12 + 3;
  *puVar12 = &PTR_DAT_110bb7c80;
  FUN_10a5387f0(plVar13,param_2);
  plVar14 = (long *)0xf0;
  __Znwm();
  plVar34 = plVar14 + 1;
  *plVar34 = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&PTR_DAT_110bb7cd0;
  plVar1 = plVar14 + 3;
  FUN_10a537e7c(plVar1,param_2);
  puVar15 = (undefined8 *)0xe0;
  __Znwm();
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &PTR_DAT_110bb7d20;
  puVar7 = puVar15 + 3;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar34,0x10);
    if (bVar5) {
      *plVar34 = *plVar34 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plStack_80 = (long *)CONCAT71(plStack_80._1_7_,1);
  plStack_90 = plVar1;
  plStack_88 = plVar14;
  FUN_10a536054(puVar7,param_2,&plStack_90);
  do {
    lVar19 = *plVar34;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar34,0x10);
    if (bVar5) {
      *plVar34 = lVar19 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar19 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
  }
  lVar19 = *(long *)(param_2 + 0xb68);
  plVar34 = *(long **)(param_2 + 0xb60);
  if (*(long *)(param_2 + 0xb68) != 0) {
    plVar16 = (long *)(*(long *)(param_2 + 0xb68) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = *plVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar9;
  plVar16[0xf] = (long)puVar8;
  if (puVar8 != (undefined8 *)0x0) {
    plVar18 = puVar8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb7d80;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f3acb95,8);
  plVar32 = (long *)param_1[10];
  plVar33 = plVar1;
  if (plVar32 != (long *)0x0) {
    uVar21 = (long)plVar32 - 1;
    if (((ulong)plVar32 & uVar21) == 0) {
      plVar33 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar33 = plVar18;
      if (plVar32 <= plVar18) {
        uVar26 = 0;
        if (plVar32 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar32;
        }
        plVar33 = (long *)((long)plVar18 - uVar26 * (long)plVar32);
      }
    }
    plVar24 = *(long **)(*plVar30 + (long)plVar33 * 8);
    if (plVar24 != (long *)0x0) {
      for (plVar24 = (long *)*plVar24; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        plVar27 = (long *)plVar24[1];
        if (plVar27 == plVar18) {
          if ((plVar24[3] == 8) && (*(long *)plVar24[2] == 0x656d616e72657355)) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a2612f0;
          }
        }
        else {
          if (((ulong)plVar32 & uVar21) == 0) {
            plVar27 = (long *)((ulong)plVar27 & uVar21);
          }
          else if (plVar32 <= plVar27) {
            uVar26 = 0;
            if (plVar32 != (long *)0x0) {
              uVar26 = (ulong)plVar27 / (ulong)plVar32;
            }
            plVar27 = (long *)((long)plVar27 - uVar26 * (long)plVar32);
          }
          if (plVar27 != plVar33) break;
        }
      }
    }
  }
  plVar24 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar24 = 0;
  plVar24[1] = (long)plVar18;
  plVar24[3] = 8;
  plVar24[2] = (long)&DAT_10f3acb95;
  plVar24[4] = (long)plVar16;
  if ((plVar32 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar32 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar32) {
      uVar21 = (ulong)(((ulong)plVar32 & (long)plVar32 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar32 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar24;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar32 = (long *)param_1[10];
    if (((ulong)plVar32 & (long)plVar32 - 1U) == 0) {
      plVar33 = (long *)((long)plVar32 - 1U & (ulong)plVar18);
    }
    else {
      plVar33 = plVar18;
      if (plVar32 <= plVar18) {
        uVar21 = 0;
        if (plVar32 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar32;
        }
        plVar33 = (long *)((long)plVar18 - uVar21 * (long)plVar32);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar33 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
    *(long **)(lVar20 + (long)plVar33 * 8) = plVar16;
    if (*plVar24 != 0) {
      plVar16 = *(long **)(*plVar24 + 8);
      if (((ulong)plVar32 & (long)plVar32 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar32 - 1U);
      }
      else if (plVar32 <= plVar16) {
        uVar21 = 0;
        if (plVar32 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar32;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar32);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar24;
    }
  }
  else {
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a2612f0:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar9;
  plVar16[0xf] = (long)puVar8;
  if (puVar8 != (undefined8 *)0x0) {
    plVar18 = puVar8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb7ee0;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f535b2b,0xb);
  plVar33 = (long *)param_1[10];
  if (plVar33 != (long *)0x0) {
    uVar21 = (long)plVar33 - 1;
    if (((ulong)plVar33 & uVar21) == 0) {
      plVar32 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar26 = 0;
        if (plVar33 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar26 * (long)plVar33);
      }
    }
    plVar24 = *(long **)(*plVar30 + (long)plVar32 * 8);
    if (plVar24 != (long *)0x0) {
      for (plVar24 = (long *)*plVar24; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        plVar27 = (long *)plVar24[1];
        if (plVar27 == plVar18) {
          if ((plVar24[3] == 0xb) &&
             (*(long *)plVar24[2] == 0x4e79616c70736944 &&
              *(long *)(plVar24[2] + 3) == 0x656d614e79616c70)) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a261564;
          }
        }
        else {
          if (((ulong)plVar33 & uVar21) == 0) {
            plVar27 = (long *)((ulong)plVar27 & uVar21);
          }
          else if (plVar33 <= plVar27) {
            uVar26 = 0;
            if (plVar33 != (long *)0x0) {
              uVar26 = (ulong)plVar27 / (ulong)plVar33;
            }
            plVar27 = (long *)((long)plVar27 - uVar26 * (long)plVar33);
          }
          if (plVar27 != plVar32) break;
        }
      }
    }
  }
  plVar24 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar24 = 0;
  plVar24[1] = (long)plVar18;
  plVar24[3] = 0xb;
  plVar24[2] = (long)&DAT_10f535b2b;
  plVar24[4] = (long)plVar16;
  if ((plVar33 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar33 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar33) {
      uVar21 = (ulong)(((ulong)plVar33 & (long)plVar33 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar33 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar24;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar33 = (long *)param_1[10];
    if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
      plVar32 = (long *)((long)plVar33 - 1U & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar21 * (long)plVar33);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar32 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
    *(long **)(lVar20 + (long)plVar32 * 8) = plVar16;
    if (*plVar24 != 0) {
      plVar16 = *(long **)(*plVar24 + 8);
      if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar33 - 1U);
      }
      else if (plVar33 <= plVar16) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar33;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar33);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar24;
    }
  }
  else {
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a261564:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar9;
  plVar16[0xf] = (long)puVar8;
  if (puVar8 != (undefined8 *)0x0) {
    plVar18 = puVar8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb7f58;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f3b95e5,9);
  plVar33 = (long *)param_1[10];
  if (plVar33 != (long *)0x0) {
    uVar21 = (long)plVar33 - 1;
    if (((ulong)plVar33 & uVar21) == 0) {
      plVar32 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar26 = 0;
        if (plVar33 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar26 * (long)plVar33);
      }
    }
    plVar24 = *(long **)(*plVar30 + (long)plVar32 * 8);
    if (plVar24 != (long *)0x0) {
      for (plVar24 = (long *)*plVar24; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        plVar27 = (long *)plVar24[1];
        if (plVar27 == plVar18) {
          if ((plVar24[3] == 9) &&
             (*(long *)plVar24[2] == 0x7461646874726942 && (char)((long *)plVar24[2])[1] == 'e')) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a2617cc;
          }
        }
        else {
          if (((ulong)plVar33 & uVar21) == 0) {
            plVar27 = (long *)((ulong)plVar27 & uVar21);
          }
          else if (plVar33 <= plVar27) {
            uVar26 = 0;
            if (plVar33 != (long *)0x0) {
              uVar26 = (ulong)plVar27 / (ulong)plVar33;
            }
            plVar27 = (long *)((long)plVar27 - uVar26 * (long)plVar33);
          }
          if (plVar27 != plVar32) break;
        }
      }
    }
  }
  plVar24 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar24 = 0;
  plVar24[1] = (long)plVar18;
  plVar24[3] = 9;
  plVar24[2] = (long)&DAT_10f3b95e5;
  plVar24[4] = (long)plVar16;
  if ((plVar33 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar33 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar33) {
      uVar21 = (ulong)(((ulong)plVar33 & (long)plVar33 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar33 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar24;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar33 = (long *)param_1[10];
    if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
      plVar32 = (long *)((long)plVar33 - 1U & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar21 * (long)plVar33);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar32 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
    *(long **)(lVar20 + (long)plVar32 * 8) = plVar16;
    if (*plVar24 != 0) {
      plVar16 = *(long **)(*plVar24 + 8);
      if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar33 - 1U);
      }
      else if (plVar33 <= plVar16) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar33;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar33);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar24;
    }
  }
  else {
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a2617cc:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar9;
  plVar16[0xf] = (long)puVar8;
  if (puVar8 != (undefined8 *)0x0) {
    plVar18 = puVar8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb80b8;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f6496be,6);
  plVar33 = (long *)param_1[10];
  if (plVar33 != (long *)0x0) {
    uVar21 = (long)plVar33 - 1;
    if (((ulong)plVar33 & uVar21) == 0) {
      plVar32 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar26 = 0;
        if (plVar33 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar26 * (long)plVar33);
      }
    }
    plVar24 = *(long **)(*plVar30 + (long)plVar32 * 8);
    if (plVar24 != (long *)0x0) {
      for (plVar24 = (long *)*plVar24; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        plVar27 = (long *)plVar24[1];
        if (plVar27 == plVar18) {
          if ((plVar24[3] == 6) &&
             (*(int *)plVar24[2] == 0x72657355 && (short)((int *)plVar24[2])[1] == 0x6449)) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a261a2c;
          }
        }
        else {
          if (((ulong)plVar33 & uVar21) == 0) {
            plVar27 = (long *)((ulong)plVar27 & uVar21);
          }
          else if (plVar33 <= plVar27) {
            uVar26 = 0;
            if (plVar33 != (long *)0x0) {
              uVar26 = (ulong)plVar27 / (ulong)plVar33;
            }
            plVar27 = (long *)((long)plVar27 - uVar26 * (long)plVar33);
          }
          if (plVar27 != plVar32) break;
        }
      }
    }
  }
  plVar24 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar24 = 0;
  plVar24[1] = (long)plVar18;
  plVar24[3] = 6;
  plVar24[2] = (long)&DAT_10f6496be;
  plVar24[4] = (long)plVar16;
  if ((plVar33 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar33 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar33) {
      uVar21 = (ulong)(((ulong)plVar33 & (long)plVar33 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar33 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar24;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar33 = (long *)param_1[10];
    if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
      plVar32 = (long *)((long)plVar33 - 1U & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar21 * (long)plVar33);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar32 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
    *(long **)(lVar20 + (long)plVar32 * 8) = plVar16;
    if (*plVar24 != 0) {
      plVar16 = *(long **)(*plVar24 + 8);
      if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar33 - 1U);
      }
      else if (plVar33 <= plVar16) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar33;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar33);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar24;
    }
  }
  else {
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a261a2c:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar9;
  plVar16[0xf] = (long)puVar8;
  if (puVar8 != (undefined8 *)0x0) {
    plVar18 = puVar8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb8130;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f6496c5,0xb);
  plVar24 = (long *)param_1[10];
  plVar33 = plVar9;
  if (plVar24 != (long *)0x0) {
    uVar21 = (long)plVar24 - 1;
    if (((ulong)plVar24 & uVar21) == 0) {
      plVar33 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar33 = plVar18;
      if (plVar24 <= plVar18) {
        uVar26 = 0;
        if (plVar24 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar24;
        }
        plVar33 = (long *)((long)plVar18 - uVar26 * (long)plVar24);
      }
    }
    plVar27 = *(long **)(*plVar30 + (long)plVar33 * 8);
    if (plVar27 != (long *)0x0) {
      for (plVar27 = (long *)*plVar27; plVar27 != (long *)0x0; plVar27 = (long *)*plVar27) {
        plVar28 = (long *)plVar27[1];
        if (plVar28 == plVar18) {
          if ((plVar27[3] == 0xb) &&
             (*(long *)plVar27[2] == 0x437972746e756f43 &&
              *(long *)(plVar27[2] + 3) == 0x65646f437972746e)) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a261ca0;
          }
        }
        else {
          if (((ulong)plVar24 & uVar21) == 0) {
            plVar28 = (long *)((ulong)plVar28 & uVar21);
          }
          else if (plVar24 <= plVar28) {
            uVar26 = 0;
            if (plVar24 != (long *)0x0) {
              uVar26 = (ulong)plVar28 / (ulong)plVar24;
            }
            plVar28 = (long *)((long)plVar28 - uVar26 * (long)plVar24);
          }
          if (plVar28 != plVar33) break;
        }
      }
    }
  }
  plVar27 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar27 = 0;
  plVar27[1] = (long)plVar18;
  plVar27[3] = 0xb;
  plVar27[2] = (long)&DAT_10f6496c5;
  plVar27[4] = (long)plVar16;
  if ((plVar24 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar24 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar24) {
      uVar21 = (ulong)(((ulong)plVar24 & (long)plVar24 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar24 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar27;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar24 = (long *)param_1[10];
    if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
      plVar33 = (long *)((long)plVar24 - 1U & (ulong)plVar18);
    }
    else {
      plVar33 = plVar18;
      if (plVar24 <= plVar18) {
        uVar21 = 0;
        if (plVar24 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar24;
        }
        plVar33 = (long *)((long)plVar18 - uVar21 * (long)plVar24);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar33 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar27 = *plVar16;
    *plVar16 = (long)plVar27;
    *(long **)(lVar20 + (long)plVar33 * 8) = plVar16;
    if (*plVar27 != 0) {
      plVar16 = *(long **)(*plVar27 + 8);
      if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar24 - 1U);
      }
      else if (plVar24 <= plVar16) {
        uVar21 = 0;
        if (plVar24 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar24;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar24);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar27;
    }
  }
  else {
    *plVar27 = *plVar16;
    *plVar16 = (long)plVar27;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a261ca0:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xf] = (long)puVar10;
  plVar16[0xe] = (long)puVar11;
  if (puVar10 != (undefined8 *)0x0) {
    plVar18 = puVar10 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb81a8;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f464b16,8);
  plVar24 = (long *)param_1[10];
  if (plVar24 != (long *)0x0) {
    uVar21 = (long)plVar24 - 1;
    if (((ulong)plVar24 & uVar21) == 0) {
      plVar33 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar33 = plVar18;
      if (plVar24 <= plVar18) {
        uVar26 = 0;
        if (plVar24 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar24;
        }
        plVar33 = (long *)((long)plVar18 - uVar26 * (long)plVar24);
      }
    }
    plVar27 = *(long **)(*plVar30 + (long)plVar33 * 8);
    if (plVar27 != (long *)0x0) {
      for (plVar27 = (long *)*plVar27; plVar27 != (long *)0x0; plVar27 = (long *)*plVar27) {
        plVar28 = (long *)plVar27[1];
        if (plVar28 == plVar18) {
          if ((plVar27[3] == 8) && (*(long *)plVar27[2] == 0x6564757469746c41)) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a261f08;
          }
        }
        else {
          if (((ulong)plVar24 & uVar21) == 0) {
            plVar28 = (long *)((ulong)plVar28 & uVar21);
          }
          else if (plVar24 <= plVar28) {
            uVar26 = 0;
            if (plVar24 != (long *)0x0) {
              uVar26 = (ulong)plVar28 / (ulong)plVar24;
            }
            plVar28 = (long *)((long)plVar28 - uVar26 * (long)plVar24);
          }
          if (plVar28 != plVar33) break;
        }
      }
    }
  }
  plVar27 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar27 = 0;
  plVar27[1] = (long)plVar18;
  plVar27[3] = 8;
  plVar27[2] = (long)&DAT_10f464b16;
  plVar27[4] = (long)plVar16;
  if ((plVar24 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar24 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar24) {
      uVar21 = (ulong)(((ulong)plVar24 & (long)plVar24 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar24 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar27;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar24 = (long *)param_1[10];
    if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
      plVar33 = (long *)((long)plVar24 - 1U & (ulong)plVar18);
    }
    else {
      plVar33 = plVar18;
      if (plVar24 <= plVar18) {
        uVar21 = 0;
        if (plVar24 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar24;
        }
        plVar33 = (long *)((long)plVar18 - uVar21 * (long)plVar24);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar33 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar27 = *plVar16;
    *plVar16 = (long)plVar27;
    *(long **)(lVar20 + (long)plVar33 * 8) = plVar16;
    if (*plVar27 != 0) {
      plVar16 = *(long **)(*plVar27 + 8);
      if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar24 - 1U);
      }
      else if (plVar24 <= plVar16) {
        uVar21 = 0;
        if (plVar24 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar24;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar24);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar27;
    }
  }
  else {
    *plVar27 = *plVar16;
    *plVar16 = (long)plVar27;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a261f08:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar13;
  plVar16[0xf] = (long)puVar12;
  if (puVar12 != (undefined8 *)0x0) {
    plVar18 = puVar12 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb8308;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f464ad0,0xb);
  plVar33 = (long *)param_1[10];
  if (plVar33 != (long *)0x0) {
    uVar21 = (long)plVar33 - 1;
    if (((ulong)plVar33 & uVar21) == 0) {
      plVar32 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar26 = 0;
        if (plVar33 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar26 * (long)plVar33);
      }
    }
    plVar24 = *(long **)(*plVar30 + (long)plVar32 * 8);
    if (plVar24 != (long *)0x0) {
      for (plVar24 = (long *)*plVar24; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        plVar27 = (long *)plVar24[1];
        if (plVar27 == plVar18) {
          if ((plVar24[3] == 0xb) &&
             (*(long *)plVar24[2] == 0x74617265706d6554 &&
              *(long *)(plVar24[2] + 3) == 0x6572757461726570)) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a262180;
          }
        }
        else {
          if (((ulong)plVar33 & uVar21) == 0) {
            plVar27 = (long *)((ulong)plVar27 & uVar21);
          }
          else if (plVar33 <= plVar27) {
            uVar26 = 0;
            if (plVar33 != (long *)0x0) {
              uVar26 = (ulong)plVar27 / (ulong)plVar33;
            }
            plVar27 = (long *)((long)plVar27 - uVar26 * (long)plVar33);
          }
          if (plVar27 != plVar32) break;
        }
      }
    }
  }
  plVar24 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar24 = 0;
  plVar24[1] = (long)plVar18;
  plVar24[3] = 0xb;
  plVar24[2] = (long)&DAT_10f464ad0;
  plVar24[4] = (long)plVar16;
  if ((plVar33 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar33 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar33) {
      uVar21 = (ulong)(((ulong)plVar33 & (long)plVar33 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar33 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar24;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar33 = (long *)param_1[10];
    if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
      plVar32 = (long *)((long)plVar33 - 1U & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar21 * (long)plVar33);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar32 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
    *(long **)(lVar20 + (long)plVar32 * 8) = plVar16;
    if (*plVar24 != 0) {
      plVar16 = *(long **)(*plVar24 + 8);
      if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar33 - 1U);
      }
      else if (plVar33 <= plVar16) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar33;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar33);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar24;
    }
  }
  else {
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a262180:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar13;
  plVar16[0xf] = (long)puVar12;
  if (puVar12 != (undefined8 *)0x0) {
    plVar18 = puVar12 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb83e8;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f6496d1,0x15);
  plVar33 = (long *)param_1[10];
  if (plVar33 != (long *)0x0) {
    uVar21 = (long)plVar33 - 1;
    if (((ulong)plVar33 & uVar21) == 0) {
      plVar32 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar26 = 0;
        if (plVar33 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar26 * (long)plVar33);
      }
    }
    plVar24 = *(long **)(*plVar30 + (long)plVar32 * 8);
    if (plVar24 != (long *)0x0) {
      for (plVar24 = (long *)*plVar24; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        plVar27 = (long *)plVar24[1];
        if (plVar27 == plVar18) {
          if ((plVar24[3] == 0x15) &&
             (plVar27 = (long *)plVar24[2],
             (*plVar27 == 0x74617265706d6554 && plVar27[1] == 0x6572686146657275) &&
             *(long *)((long)plVar27 + 0xd) == 0x746965686e657268)) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a262408;
          }
        }
        else {
          if (((ulong)plVar33 & uVar21) == 0) {
            plVar27 = (long *)((ulong)plVar27 & uVar21);
          }
          else if (plVar33 <= plVar27) {
            uVar26 = 0;
            if (plVar33 != (long *)0x0) {
              uVar26 = (ulong)plVar27 / (ulong)plVar33;
            }
            plVar27 = (long *)((long)plVar27 - uVar26 * (long)plVar33);
          }
          if (plVar27 != plVar32) break;
        }
      }
    }
  }
  plVar24 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar24 = 0;
  plVar24[1] = (long)plVar18;
  plVar24[3] = 0x15;
  plVar24[2] = (long)&DAT_10f6496d1;
  plVar24[4] = (long)plVar16;
  if ((plVar33 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar33 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar33) {
      uVar21 = (ulong)(((ulong)plVar33 & (long)plVar33 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar33 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar24;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar33 = (long *)param_1[10];
    if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
      plVar32 = (long *)((long)plVar33 - 1U & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar21 * (long)plVar33);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar32 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
    *(long **)(lVar20 + (long)plVar32 * 8) = plVar16;
    if (*plVar24 != 0) {
      plVar16 = *(long **)(*plVar24 + 8);
      if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar33 - 1U);
      }
      else if (plVar33 <= plVar16) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar33;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar33);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar24;
    }
  }
  else {
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a262408:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar13;
  plVar16[0xf] = (long)puVar12;
  if (puVar12 != (undefined8 *)0x0) {
    plVar18 = puVar12 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb8460;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f6496e7,0x10);
  plVar33 = (long *)param_1[10];
  if (plVar33 != (long *)0x0) {
    uVar21 = (long)plVar33 - 1;
    if (((ulong)plVar33 & uVar21) == 0) {
      plVar32 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar26 = 0;
        if (plVar33 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar26 * (long)plVar33);
      }
    }
    plVar24 = *(long **)(*plVar30 + (long)plVar32 * 8);
    if (plVar24 != (long *)0x0) {
      for (plVar24 = (long *)*plVar24; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        plVar27 = (long *)plVar24[1];
        if (plVar27 == plVar18) {
          if ((plVar24[3] == 0x10) &&
             (*(long *)plVar24[2] == 0x4372656874616557 &&
              ((long *)plVar24[2])[1] == 0x6e6f697469646e6f)) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a262678;
          }
        }
        else {
          if (((ulong)plVar33 & uVar21) == 0) {
            plVar27 = (long *)((ulong)plVar27 & uVar21);
          }
          else if (plVar33 <= plVar27) {
            uVar26 = 0;
            if (plVar33 != (long *)0x0) {
              uVar26 = (ulong)plVar27 / (ulong)plVar33;
            }
            plVar27 = (long *)((long)plVar27 - uVar26 * (long)plVar33);
          }
          if (plVar27 != plVar32) break;
        }
      }
    }
  }
  plVar24 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar24 = 0;
  plVar24[1] = (long)plVar18;
  plVar24[3] = 0x10;
  plVar24[2] = (long)&DAT_10f6496e7;
  plVar24[4] = (long)plVar16;
  if ((plVar33 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar33 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar33) {
      uVar21 = (ulong)(((ulong)plVar33 & (long)plVar33 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar33 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar24;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar33 = (long *)param_1[10];
    if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
      plVar32 = (long *)((long)plVar33 - 1U & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar21 * (long)plVar33);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar32 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
    *(long **)(lVar20 + (long)plVar32 * 8) = plVar16;
    if (*plVar24 != 0) {
      plVar16 = *(long **)(*plVar24 + 8);
      if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar33 - 1U);
      }
      else if (plVar33 <= plVar16) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar33;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar33);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar24;
    }
  }
  else {
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a262678:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar13;
  plVar16[0xf] = (long)puVar12;
  if (puVar12 != (undefined8 *)0x0) {
    plVar18 = puVar12 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb85c0;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f6496f8,4);
  plVar24 = (long *)param_1[10];
  plVar32 = plVar13;
  if (plVar24 != (long *)0x0) {
    uVar21 = (long)plVar24 - 1;
    if (((ulong)plVar24 & uVar21) == 0) {
      plVar32 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar24 <= plVar18) {
        uVar26 = 0;
        if (plVar24 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar24;
        }
        plVar32 = (long *)((long)plVar18 - uVar26 * (long)plVar24);
      }
    }
    plVar27 = *(long **)(*plVar30 + (long)plVar32 * 8);
    if (plVar27 != (long *)0x0) {
      for (plVar27 = (long *)*plVar27; plVar27 != (long *)0x0; plVar27 = (long *)*plVar27) {
        plVar28 = (long *)plVar27[1];
        if (plVar28 == plVar18) {
          if ((plVar27[3] == 4) && (*(int *)plVar27[2] == 0x79746943)) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a2628cc;
          }
        }
        else {
          if (((ulong)plVar24 & uVar21) == 0) {
            plVar28 = (long *)((ulong)plVar28 & uVar21);
          }
          else if (plVar24 <= plVar28) {
            uVar26 = 0;
            if (plVar24 != (long *)0x0) {
              uVar26 = (ulong)plVar28 / (ulong)plVar24;
            }
            plVar28 = (long *)((long)plVar28 - uVar26 * (long)plVar24);
          }
          if (plVar28 != plVar32) break;
        }
      }
    }
  }
  plVar27 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar27 = 0;
  plVar27[1] = (long)plVar18;
  plVar27[3] = 4;
  plVar27[2] = (long)&DAT_10f6496f8;
  plVar27[4] = (long)plVar16;
  if ((plVar24 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar24 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar24) {
      uVar21 = (ulong)(((ulong)plVar24 & (long)plVar24 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar24 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar27;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar24 = (long *)param_1[10];
    if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
      plVar32 = (long *)((long)plVar24 - 1U & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar24 <= plVar18) {
        uVar21 = 0;
        if (plVar24 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar24;
        }
        plVar32 = (long *)((long)plVar18 - uVar21 * (long)plVar24);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar32 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar27 = *plVar16;
    *plVar16 = (long)plVar27;
    *(long **)(lVar20 + (long)plVar32 * 8) = plVar16;
    if (*plVar27 != 0) {
      plVar16 = *(long **)(*plVar27 + 8);
      if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar24 - 1U);
      }
      else if (plVar24 <= plVar16) {
        uVar21 = 0;
        if (plVar24 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar24;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar24);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar27;
    }
  }
  else {
    *plVar27 = *plVar16;
    *plVar16 = (long)plVar27;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a2628cc:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar34;
  plVar16[0xf] = lVar19;
  if (lVar19 != 0) {
    plVar18 = (long *)(lVar19 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb86a0;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f6496fd,4);
  plVar32 = (long *)param_1[10];
  if (plVar32 != (long *)0x0) {
    uVar21 = (long)plVar32 - 1;
    if (((ulong)plVar32 & uVar21) == 0) {
      plVar33 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar33 = plVar18;
      if (plVar32 <= plVar18) {
        uVar26 = 0;
        if (plVar32 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar32;
        }
        plVar33 = (long *)((long)plVar18 - uVar26 * (long)plVar32);
      }
    }
    plVar24 = *(long **)(*plVar30 + (long)plVar33 * 8);
    if (plVar24 != (long *)0x0) {
      for (plVar24 = (long *)*plVar24; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        plVar27 = (long *)plVar24[1];
        if (plVar27 == plVar18) {
          if ((plVar24[3] == 4) && (*(int *)plVar24[2] == 0x656d6954)) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a262b24;
          }
        }
        else {
          if (((ulong)plVar32 & uVar21) == 0) {
            plVar27 = (long *)((ulong)plVar27 & uVar21);
          }
          else if (plVar32 <= plVar27) {
            uVar26 = 0;
            if (plVar32 != (long *)0x0) {
              uVar26 = (ulong)plVar27 / (ulong)plVar32;
            }
            plVar27 = (long *)((long)plVar27 - uVar26 * (long)plVar32);
          }
          if (plVar27 != plVar33) break;
        }
      }
    }
  }
  plVar24 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar24 = 0;
  plVar24[1] = (long)plVar18;
  plVar24[3] = 4;
  plVar24[2] = (long)&DAT_10f6496fd;
  plVar24[4] = (long)plVar16;
  if ((plVar32 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar32 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar32) {
      uVar21 = (ulong)(((ulong)plVar32 & (long)plVar32 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar32 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar24;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar32 = (long *)param_1[10];
    if (((ulong)plVar32 & (long)plVar32 - 1U) == 0) {
      plVar33 = (long *)((long)plVar32 - 1U & (ulong)plVar18);
    }
    else {
      plVar33 = plVar18;
      if (plVar32 <= plVar18) {
        uVar21 = 0;
        if (plVar32 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar32;
        }
        plVar33 = (long *)((long)plVar18 - uVar21 * (long)plVar32);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar33 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
    *(long **)(lVar20 + (long)plVar33 * 8) = plVar16;
    if (*plVar24 != 0) {
      plVar16 = *(long **)(*plVar24 + 8);
      if (((ulong)plVar32 & (long)plVar32 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar32 - 1U);
      }
      else if (plVar32 <= plVar16) {
        uVar21 = 0;
        if (plVar32 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar32;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar32);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar24;
    }
  }
  else {
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a262b24:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar34;
  plVar16[0xf] = lVar19;
  if (lVar19 != 0) {
    plVar18 = (long *)(lVar19 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb8798;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f45dba3,4);
  plVar32 = (long *)param_1[10];
  if (plVar32 != (long *)0x0) {
    uVar21 = (long)plVar32 - 1;
    if (((ulong)plVar32 & uVar21) == 0) {
      plVar33 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar33 = plVar18;
      if (plVar32 <= plVar18) {
        uVar26 = 0;
        if (plVar32 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar32;
        }
        plVar33 = (long *)((long)plVar18 - uVar26 * (long)plVar32);
      }
    }
    plVar24 = *(long **)(*plVar30 + (long)plVar33 * 8);
    if (plVar24 != (long *)0x0) {
      for (plVar24 = (long *)*plVar24; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        plVar27 = (long *)plVar24[1];
        if (plVar27 == plVar18) {
          if ((plVar24[3] == 4) && (*(int *)plVar24[2] == 0x65746144)) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a262d78;
          }
        }
        else {
          if (((ulong)plVar32 & uVar21) == 0) {
            plVar27 = (long *)((ulong)plVar27 & uVar21);
          }
          else if (plVar32 <= plVar27) {
            uVar26 = 0;
            if (plVar32 != (long *)0x0) {
              uVar26 = (ulong)plVar27 / (ulong)plVar32;
            }
            plVar27 = (long *)((long)plVar27 - uVar26 * (long)plVar32);
          }
          if (plVar27 != plVar33) break;
        }
      }
    }
  }
  plVar24 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar24 = 0;
  plVar24[1] = (long)plVar18;
  plVar24[3] = 4;
  plVar24[2] = (long)&DAT_10f45dba3;
  plVar24[4] = (long)plVar16;
  if ((plVar32 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar32 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar32) {
      uVar21 = (ulong)(((ulong)plVar32 & (long)plVar32 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar32 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar24;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar32 = (long *)param_1[10];
    if (((ulong)plVar32 & (long)plVar32 - 1U) == 0) {
      plVar33 = (long *)((long)plVar32 - 1U & (ulong)plVar18);
    }
    else {
      plVar33 = plVar18;
      if (plVar32 <= plVar18) {
        uVar21 = 0;
        if (plVar32 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar32;
        }
        plVar33 = (long *)((long)plVar18 - uVar21 * (long)plVar32);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar33 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
    *(long **)(lVar20 + (long)plVar33 * 8) = plVar16;
    if (*plVar24 != 0) {
      plVar16 = *(long **)(*plVar24 + 8);
      if (((ulong)plVar32 & (long)plVar32 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar32 - 1U);
      }
      else if (plVar32 <= plVar16) {
        uVar21 = 0;
        if (plVar32 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar32;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar32);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar24;
    }
  }
  else {
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a262d78:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar34;
  plVar16[0xf] = lVar19;
  if (lVar19 != 0) {
    plVar18 = (long *)(lVar19 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb8810;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f649702,9);
  plVar33 = (long *)param_1[10];
  if (plVar33 != (long *)0x0) {
    uVar21 = (long)plVar33 - 1;
    if (((ulong)plVar33 & uVar21) == 0) {
      plVar32 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar26 = 0;
        if (plVar33 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar26 * (long)plVar33);
      }
    }
    plVar24 = *(long **)(*plVar30 + (long)plVar32 * 8);
    if (plVar24 != (long *)0x0) {
      for (plVar24 = (long *)*plVar24; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        plVar27 = (long *)plVar24[1];
        if (plVar27 == plVar18) {
          if ((plVar24[3] == 9) &&
             (*(long *)plVar24[2] == 0x726f685365746144 && (char)((long *)plVar24[2])[1] == 't')) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a262fe0;
          }
        }
        else {
          if (((ulong)plVar33 & uVar21) == 0) {
            plVar27 = (long *)((ulong)plVar27 & uVar21);
          }
          else if (plVar33 <= plVar27) {
            uVar26 = 0;
            if (plVar33 != (long *)0x0) {
              uVar26 = (ulong)plVar27 / (ulong)plVar33;
            }
            plVar27 = (long *)((long)plVar27 - uVar26 * (long)plVar33);
          }
          if (plVar27 != plVar32) break;
        }
      }
    }
  }
  plVar24 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar24 = 0;
  plVar24[1] = (long)plVar18;
  plVar24[3] = 9;
  plVar24[2] = (long)&DAT_10f649702;
  plVar24[4] = (long)plVar16;
  if ((plVar33 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar33 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar33) {
      uVar21 = (ulong)(((ulong)plVar33 & (long)plVar33 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar33 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar24;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar33 = (long *)param_1[10];
    if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
      plVar32 = (long *)((long)plVar33 - 1U & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar21 * (long)plVar33);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar32 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
    *(long **)(lVar20 + (long)plVar32 * 8) = plVar16;
    if (*plVar24 != 0) {
      plVar16 = *(long **)(*plVar24 + 8);
      if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar33 - 1U);
      }
      else if (plVar33 <= plVar16) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar33;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar33);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar24;
    }
  }
  else {
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a262fe0:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar34;
  plVar16[0xf] = lVar19;
  if (lVar19 != 0) {
    plVar18 = (long *)(lVar19 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb8888;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f64970c,8);
  plVar32 = (long *)param_1[10];
  if (plVar32 != (long *)0x0) {
    uVar21 = (long)plVar32 - 1;
    if (((ulong)plVar32 & uVar21) == 0) {
      plVar33 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar33 = plVar18;
      if (plVar32 <= plVar18) {
        uVar26 = 0;
        if (plVar32 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar32;
        }
        plVar33 = (long *)((long)plVar18 - uVar26 * (long)plVar32);
      }
    }
    plVar24 = *(long **)(*plVar30 + (long)plVar33 * 8);
    if (plVar24 != (long *)0x0) {
      for (plVar24 = (long *)*plVar24; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        plVar27 = (long *)plVar24[1];
        if (plVar27 == plVar18) {
          if ((plVar24[3] == 8) && (*(long *)plVar24[2] == 0x656d695465746144)) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a26323c;
          }
        }
        else {
          if (((ulong)plVar32 & uVar21) == 0) {
            plVar27 = (long *)((ulong)plVar27 & uVar21);
          }
          else if (plVar32 <= plVar27) {
            uVar26 = 0;
            if (plVar32 != (long *)0x0) {
              uVar26 = (ulong)plVar27 / (ulong)plVar32;
            }
            plVar27 = (long *)((long)plVar27 - uVar26 * (long)plVar32);
          }
          if (plVar27 != plVar33) break;
        }
      }
    }
  }
  plVar24 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar24 = 0;
  plVar24[1] = (long)plVar18;
  plVar24[3] = 8;
  plVar24[2] = (long)&DAT_10f64970c;
  plVar24[4] = (long)plVar16;
  if ((plVar32 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar32 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar32) {
      uVar21 = (ulong)(((ulong)plVar32 & (long)plVar32 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar32 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar24;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar32 = (long *)param_1[10];
    if (((ulong)plVar32 & (long)plVar32 - 1U) == 0) {
      plVar33 = (long *)((long)plVar32 - 1U & (ulong)plVar18);
    }
    else {
      plVar33 = plVar18;
      if (plVar32 <= plVar18) {
        uVar21 = 0;
        if (plVar32 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar32;
        }
        plVar33 = (long *)((long)plVar18 - uVar21 * (long)plVar32);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar33 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
    *(long **)(lVar20 + (long)plVar33 * 8) = plVar16;
    if (*plVar24 != 0) {
      plVar16 = *(long **)(*plVar24 + 8);
      if (((ulong)plVar32 & (long)plVar32 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar32 - 1U);
      }
      else if (plVar32 <= plVar16) {
        uVar21 = 0;
        if (plVar32 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar32;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar32);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar24;
    }
  }
  else {
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a26323c:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar34;
  plVar16[0xf] = lVar19;
  if (lVar19 != 0) {
    plVar18 = (long *)(lVar19 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb8900;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f649715,5);
  plVar33 = (long *)param_1[10];
  if (plVar33 != (long *)0x0) {
    uVar21 = (long)plVar33 - 1;
    if (((ulong)plVar33 & uVar21) == 0) {
      plVar32 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar26 = 0;
        if (plVar33 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar26 * (long)plVar33);
      }
    }
    plVar24 = *(long **)(*plVar30 + (long)plVar32 * 8);
    if (plVar24 != (long *)0x0) {
      for (plVar24 = (long *)*plVar24; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        plVar27 = (long *)plVar24[1];
        if (plVar27 == plVar18) {
          if ((plVar24[3] == 5) &&
             (*(int *)plVar24[2] == 0x746e6f4d && (char)((int *)plVar24[2])[1] == 'h')) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a26349c;
          }
        }
        else {
          if (((ulong)plVar33 & uVar21) == 0) {
            plVar27 = (long *)((ulong)plVar27 & uVar21);
          }
          else if (plVar33 <= plVar27) {
            uVar26 = 0;
            if (plVar33 != (long *)0x0) {
              uVar26 = (ulong)plVar27 / (ulong)plVar33;
            }
            plVar27 = (long *)((long)plVar27 - uVar26 * (long)plVar33);
          }
          if (plVar27 != plVar32) break;
        }
      }
    }
  }
  plVar24 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar24 = 0;
  plVar24[1] = (long)plVar18;
  plVar24[3] = 5;
  plVar24[2] = (long)&DAT_10f649715;
  plVar24[4] = (long)plVar16;
  if ((plVar33 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar33 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar33) {
      uVar21 = (ulong)(((ulong)plVar33 & (long)plVar33 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar33 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar24;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar33 = (long *)param_1[10];
    if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
      plVar32 = (long *)((long)plVar33 - 1U & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar21 * (long)plVar33);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar32 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
    *(long **)(lVar20 + (long)plVar32 * 8) = plVar16;
    if (*plVar24 != 0) {
      plVar16 = *(long **)(*plVar24 + 8);
      if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar33 - 1U);
      }
      else if (plVar33 <= plVar16) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar33;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar33);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar24;
    }
  }
  else {
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a26349c:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar34;
  plVar16[0xf] = lVar19;
  if (lVar19 != 0) {
    plVar18 = (long *)(lVar19 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb8978;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f46860f,3);
  plVar24 = (long *)param_1[10];
  plVar33 = plVar34;
  if (plVar24 != (long *)0x0) {
    uVar21 = (long)plVar24 - 1;
    if (((ulong)plVar24 & uVar21) == 0) {
      plVar33 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar33 = plVar18;
      if (plVar24 <= plVar18) {
        uVar26 = 0;
        if (plVar24 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar24;
        }
        plVar33 = (long *)((long)plVar18 - uVar26 * (long)plVar24);
      }
    }
    plVar27 = *(long **)(*plVar30 + (long)plVar33 * 8);
    if (plVar27 != (long *)0x0) {
      for (plVar27 = (long *)*plVar27; plVar27 != (long *)0x0; plVar27 = (long *)*plVar27) {
        plVar28 = (long *)plVar27[1];
        if (plVar28 == plVar18) {
          if ((plVar27[3] == 3) &&
             (*(short *)plVar27[2] == 0x6144 && (char)((short *)plVar27[2])[1] == 'y')) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a2636f8;
          }
        }
        else {
          if (((ulong)plVar24 & uVar21) == 0) {
            plVar28 = (long *)((ulong)plVar28 & uVar21);
          }
          else if (plVar24 <= plVar28) {
            uVar26 = 0;
            if (plVar24 != (long *)0x0) {
              uVar26 = (ulong)plVar28 / (ulong)plVar24;
            }
            plVar28 = (long *)((long)plVar28 - uVar26 * (long)plVar24);
          }
          if (plVar28 != plVar33) break;
        }
      }
    }
  }
  plVar27 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar27 = 0;
  plVar27[1] = (long)plVar18;
  plVar27[3] = 3;
  plVar27[2] = (long)&DAT_10f46860f;
  plVar27[4] = (long)plVar16;
  if ((plVar24 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar24 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar24) {
      uVar21 = (ulong)(((ulong)plVar24 & (long)plVar24 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar24 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar27;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar24 = (long *)param_1[10];
    if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
      plVar33 = (long *)((long)plVar24 - 1U & (ulong)plVar18);
    }
    else {
      plVar33 = plVar18;
      if (plVar24 <= plVar18) {
        uVar21 = 0;
        if (plVar24 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar24;
        }
        plVar33 = (long *)((long)plVar18 - uVar21 * (long)plVar24);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar33 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar27 = *plVar16;
    *plVar16 = (long)plVar27;
    *(long **)(lVar20 + (long)plVar33 * 8) = plVar16;
    if (*plVar27 != 0) {
      plVar16 = *(long **)(*plVar27 + 8);
      if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar24 - 1U);
      }
      else if (plVar24 <= plVar16) {
        uVar21 = 0;
        if (plVar24 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar24;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar24);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar27;
    }
  }
  else {
    *plVar27 = *plVar16;
    *plVar16 = (long)plVar27;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a2636f8:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar1;
  plVar16[0xf] = (long)plVar14;
  if (plVar14 != (long *)0x0) {
    plVar18 = plVar14 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb89e0;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f359e34,10);
  plVar33 = (long *)param_1[10];
  if (plVar33 != (long *)0x0) {
    uVar21 = (long)plVar33 - 1;
    if (((ulong)plVar33 & uVar21) == 0) {
      plVar32 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar26 = 0;
        if (plVar33 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar26 * (long)plVar33);
      }
    }
    plVar24 = *(long **)(*plVar30 + (long)plVar32 * 8);
    if (plVar24 != (long *)0x0) {
      for (plVar24 = (long *)*plVar24; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        plVar27 = (long *)plVar24[1];
        if (plVar27 == plVar18) {
          if ((plVar24[3] == 10) &&
             (*(long *)plVar24[2] == 0x6e656972466c6c61 && (short)((long *)plVar24[2])[1] == 0x7364)
             ) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a263964;
          }
        }
        else {
          if (((ulong)plVar33 & uVar21) == 0) {
            plVar27 = (long *)((ulong)plVar27 & uVar21);
          }
          else if (plVar33 <= plVar27) {
            uVar26 = 0;
            if (plVar33 != (long *)0x0) {
              uVar26 = (ulong)plVar27 / (ulong)plVar33;
            }
            plVar27 = (long *)((long)plVar27 - uVar26 * (long)plVar33);
          }
          if (plVar27 != plVar32) break;
        }
      }
    }
  }
  plVar24 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar24 = 0;
  plVar24[1] = (long)plVar18;
  plVar24[3] = 10;
  plVar24[2] = (long)&DAT_10f359e34;
  plVar24[4] = (long)plVar16;
  if ((plVar33 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar33 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar33) {
      uVar21 = (ulong)(((ulong)plVar33 & (long)plVar33 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar33 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar24;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar33 = (long *)param_1[10];
    if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
      plVar32 = (long *)((long)plVar33 - 1U & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar21 * (long)plVar33);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar32 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
    *(long **)(lVar20 + (long)plVar32 * 8) = plVar16;
    if (*plVar24 != 0) {
      plVar16 = *(long **)(*plVar24 + 8);
      if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar33 - 1U);
      }
      else if (plVar33 <= plVar16) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar33;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar33);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar24;
    }
  }
  else {
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a263964:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar1;
  plVar16[0xf] = (long)plVar14;
  if (plVar14 != (long *)0x0) {
    plVar18 = plVar14 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb8b28;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f64971b,0xb);
  plVar33 = (long *)param_1[10];
  if (plVar33 != (long *)0x0) {
    uVar21 = (long)plVar33 - 1;
    if (((ulong)plVar33 & uVar21) == 0) {
      plVar32 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar26 = 0;
        if (plVar33 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar26 * (long)plVar33);
      }
    }
    plVar24 = *(long **)(*plVar30 + (long)plVar32 * 8);
    if (plVar24 != (long *)0x0) {
      for (plVar24 = (long *)*plVar24; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        plVar27 = (long *)plVar24[1];
        if (plVar27 == plVar18) {
          if ((plVar24[3] == 0xb) &&
             (*(long *)plVar24[2] == 0x6569724674736562 &&
              *(long *)(plVar24[2] + 3) == 0x73646e6569724674)) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a263bd8;
          }
        }
        else {
          if (((ulong)plVar33 & uVar21) == 0) {
            plVar27 = (long *)((ulong)plVar27 & uVar21);
          }
          else if (plVar33 <= plVar27) {
            uVar26 = 0;
            if (plVar33 != (long *)0x0) {
              uVar26 = (ulong)plVar27 / (ulong)plVar33;
            }
            plVar27 = (long *)((long)plVar27 - uVar26 * (long)plVar33);
          }
          if (plVar27 != plVar32) break;
        }
      }
    }
  }
  plVar24 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar24 = 0;
  plVar24[1] = (long)plVar18;
  plVar24[3] = 0xb;
  plVar24[2] = (long)&DAT_10f64971b;
  plVar24[4] = (long)plVar16;
  if ((plVar33 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar33 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar33) {
      uVar21 = (ulong)(((ulong)plVar33 & (long)plVar33 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar33 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar24;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar33 = (long *)param_1[10];
    if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
      plVar32 = (long *)((long)plVar33 - 1U & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar21 * (long)plVar33);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar32 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
    *(long **)(lVar20 + (long)plVar32 * 8) = plVar16;
    if (*plVar24 != 0) {
      plVar16 = *(long **)(*plVar24 + 8);
      if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar33 - 1U);
      }
      else if (plVar33 <= plVar16) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar33;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar33);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar24;
    }
  }
  else {
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a263bd8:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar1;
  plVar16[0xf] = (long)plVar14;
  if (plVar14 != (long *)0x0) {
    plVar18 = plVar14 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb8ba0;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f649727,0x10);
  plVar33 = (long *)param_1[10];
  if (plVar33 != (long *)0x0) {
    uVar21 = (long)plVar33 - 1;
    if (((ulong)plVar33 & uVar21) == 0) {
      plVar32 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar26 = 0;
        if (plVar33 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar26 * (long)plVar33);
      }
    }
    plVar24 = *(long **)(*plVar30 + (long)plVar32 * 8);
    if (plVar24 != (long *)0x0) {
      for (plVar24 = (long *)*plVar24; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        plVar27 = (long *)plVar24[1];
        if (plVar27 == plVar18) {
          if ((plVar24[3] == 0x10) &&
             (*(long *)plVar24[2] == 0x654264656e6e6970 &&
              ((long *)plVar24[2])[1] == 0x646e656972467473)) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a263e48;
          }
        }
        else {
          if (((ulong)plVar33 & uVar21) == 0) {
            plVar27 = (long *)((ulong)plVar27 & uVar21);
          }
          else if (plVar33 <= plVar27) {
            uVar26 = 0;
            if (plVar33 != (long *)0x0) {
              uVar26 = (ulong)plVar27 / (ulong)plVar33;
            }
            plVar27 = (long *)((long)plVar27 - uVar26 * (long)plVar33);
          }
          if (plVar27 != plVar32) break;
        }
      }
    }
  }
  plVar24 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar24 = 0;
  plVar24[1] = (long)plVar18;
  plVar24[3] = 0x10;
  plVar24[2] = (long)&DAT_10f649727;
  plVar24[4] = (long)plVar16;
  if ((plVar33 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar33 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar33) {
      uVar21 = (ulong)(((ulong)plVar33 & (long)plVar33 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar33 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar24;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar33 = (long *)param_1[10];
    if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
      plVar32 = (long *)((long)plVar33 - 1U & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar21 * (long)plVar33);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar32 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
    *(long **)(lVar20 + (long)plVar32 * 8) = plVar16;
    if (*plVar24 != 0) {
      plVar16 = *(long **)(*plVar24 + 8);
      if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar33 - 1U);
      }
      else if (plVar33 <= plVar16) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar33;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar33);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar24;
    }
  }
  else {
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a263e48:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar1;
  plVar16[0xf] = (long)plVar14;
  if (plVar14 != (long *)0x0) {
    plVar18 = plVar14 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb8c18;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f649738,0x12);
  plVar33 = (long *)param_1[10];
  if (plVar33 != (long *)0x0) {
    uVar21 = (long)plVar33 - 1;
    if (((ulong)plVar33 & uVar21) == 0) {
      plVar32 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar26 = 0;
        if (plVar33 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar26 * (long)plVar33);
      }
    }
    plVar24 = *(long **)(*plVar30 + (long)plVar32 * 8);
    if (plVar24 != (long *)0x0) {
      for (plVar24 = (long *)*plVar24; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        plVar27 = (long *)plVar24[1];
        if (plVar27 == plVar18) {
          if ((plVar24[3] == 0x12) &&
             (plVar27 = (long *)plVar24[2],
             (*plVar27 == 0x6e656972466c6c61 && plVar27[1] == 0x6e49656661537364) &&
             (short)plVar27[2] == 0x6f66)) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a2640c4;
          }
        }
        else {
          if (((ulong)plVar33 & uVar21) == 0) {
            plVar27 = (long *)((ulong)plVar27 & uVar21);
          }
          else if (plVar33 <= plVar27) {
            uVar26 = 0;
            if (plVar33 != (long *)0x0) {
              uVar26 = (ulong)plVar27 / (ulong)plVar33;
            }
            plVar27 = (long *)((long)plVar27 - uVar26 * (long)plVar33);
          }
          if (plVar27 != plVar32) break;
        }
      }
    }
  }
  plVar24 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar24 = 0;
  plVar24[1] = (long)plVar18;
  plVar24[3] = 0x12;
  plVar24[2] = (long)&DAT_10f649738;
  plVar24[4] = (long)plVar16;
  if ((plVar33 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar33 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar33) {
      uVar21 = (ulong)(((ulong)plVar33 & (long)plVar33 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar33 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar24;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar33 = (long *)param_1[10];
    if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
      plVar32 = (long *)((long)plVar33 - 1U & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar21 * (long)plVar33);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar32 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
    *(long **)(lVar20 + (long)plVar32 * 8) = plVar16;
    if (*plVar24 != 0) {
      plVar16 = *(long **)(*plVar24 + 8);
      if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar33 - 1U);
      }
      else if (plVar33 <= plVar16) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar33;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar33);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar24;
    }
  }
  else {
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a2640c4:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar1;
  plVar16[0xf] = (long)plVar14;
  if (plVar14 != (long *)0x0) {
    plVar18 = plVar14 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb8d78;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f64974b,0x13);
  plVar33 = (long *)param_1[10];
  if (plVar33 != (long *)0x0) {
    uVar21 = (long)plVar33 - 1;
    if (((ulong)plVar33 & uVar21) == 0) {
      plVar32 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar26 = 0;
        if (plVar33 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar26 * (long)plVar33);
      }
    }
    plVar24 = *(long **)(*plVar30 + (long)plVar32 * 8);
    if (plVar24 != (long *)0x0) {
      for (plVar24 = (long *)*plVar24; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        plVar27 = (long *)plVar24[1];
        if (plVar27 == plVar18) {
          if ((plVar24[3] == 0x13) &&
             (plVar27 = (long *)plVar24[2],
             (*plVar27 == 0x6569724674736562 && plVar27[1] == 0x496566615373646e) &&
             *(long *)((long)plVar27 + 0xb) == 0x6f666e4965666153)) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a26434c;
          }
        }
        else {
          if (((ulong)plVar33 & uVar21) == 0) {
            plVar27 = (long *)((ulong)plVar27 & uVar21);
          }
          else if (plVar33 <= plVar27) {
            uVar26 = 0;
            if (plVar33 != (long *)0x0) {
              uVar26 = (ulong)plVar27 / (ulong)plVar33;
            }
            plVar27 = (long *)((long)plVar27 - uVar26 * (long)plVar33);
          }
          if (plVar27 != plVar32) break;
        }
      }
    }
  }
  plVar24 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar24 = 0;
  plVar24[1] = (long)plVar18;
  plVar24[3] = 0x13;
  plVar24[2] = (long)&DAT_10f64974b;
  plVar24[4] = (long)plVar16;
  if ((plVar33 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar33 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar33) {
      uVar21 = (ulong)(((ulong)plVar33 & (long)plVar33 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar33 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar24;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar33 = (long *)param_1[10];
    if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
      plVar32 = (long *)((long)plVar33 - 1U & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar21 * (long)plVar33);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar32 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
    *(long **)(lVar20 + (long)plVar32 * 8) = plVar16;
    if (*plVar24 != 0) {
      plVar16 = *(long **)(*plVar24 + 8);
      if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar33 - 1U);
      }
      else if (plVar33 <= plVar16) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar33;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar33);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar24;
    }
  }
  else {
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a26434c:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar1;
  plVar16[0xf] = (long)plVar14;
  if (plVar14 != (long *)0x0) {
    plVar18 = plVar14 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb8df0;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f64975f,0x18);
  plVar24 = (long *)param_1[10];
  plVar33 = plVar1;
  if (plVar24 != (long *)0x0) {
    uVar21 = (long)plVar24 - 1;
    if (((ulong)plVar24 & uVar21) == 0) {
      plVar33 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar33 = plVar18;
      if (plVar24 <= plVar18) {
        uVar26 = 0;
        if (plVar24 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar24;
        }
        plVar33 = (long *)((long)plVar18 - uVar26 * (long)plVar24);
      }
    }
    plVar27 = *(long **)(*plVar30 + (long)plVar33 * 8);
    if (plVar27 != (long *)0x0) {
      for (plVar27 = (long *)*plVar27; plVar27 != (long *)0x0; plVar27 = (long *)*plVar27) {
        plVar28 = (long *)plVar27[1];
        if (plVar28 == plVar18) {
          if ((plVar27[3] == 0x18) &&
             (plVar28 = (long *)plVar27[2],
             (*plVar28 == 0x654264656e6e6970 && plVar28[1] == 0x646e656972467473) &&
             plVar28[2] == 0x6f666e4965666153)) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a2645d4;
          }
        }
        else {
          if (((ulong)plVar24 & uVar21) == 0) {
            plVar28 = (long *)((ulong)plVar28 & uVar21);
          }
          else if (plVar24 <= plVar28) {
            uVar26 = 0;
            if (plVar24 != (long *)0x0) {
              uVar26 = (ulong)plVar28 / (ulong)plVar24;
            }
            plVar28 = (long *)((long)plVar28 - uVar26 * (long)plVar24);
          }
          if (plVar28 != plVar33) break;
        }
      }
    }
  }
  plVar27 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar27 = 0;
  plVar27[1] = (long)plVar18;
  plVar27[3] = 0x18;
  plVar27[2] = (long)&DAT_10f64975f;
  plVar27[4] = (long)plVar16;
  if ((plVar24 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar24 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar24) {
      uVar21 = (ulong)(((ulong)plVar24 & (long)plVar24 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar24 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar27;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar24 = (long *)param_1[10];
    if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
      plVar33 = (long *)((long)plVar24 - 1U & (ulong)plVar18);
    }
    else {
      plVar33 = plVar18;
      if (plVar24 <= plVar18) {
        uVar21 = 0;
        if (plVar24 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar24;
        }
        plVar33 = (long *)((long)plVar18 - uVar21 * (long)plVar24);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar33 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar27 = *plVar16;
    *plVar16 = (long)plVar27;
    *(long **)(lVar20 + (long)plVar33 * 8) = plVar16;
    if (*plVar27 != 0) {
      plVar16 = *(long **)(*plVar27 + 8);
      if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar24 - 1U);
      }
      else if (plVar24 <= plVar16) {
        uVar21 = 0;
        if (plVar24 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar24;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar24);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar27;
    }
  }
  else {
    *plVar27 = *plVar16;
    *plVar16 = (long)plVar27;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a2645d4:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar1;
  plVar16[0xf] = (long)plVar14;
  if (plVar14 != (long *)0x0) {
    plVar18 = plVar14 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb8e68;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f649778,0x17);
  plVar33 = (long *)param_1[10];
  if (plVar33 != (long *)0x0) {
    uVar21 = (long)plVar33 - 1;
    if (((ulong)plVar33 & uVar21) == 0) {
      plVar32 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar26 = 0;
        if (plVar33 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar26 * (long)plVar33);
      }
    }
    plVar24 = *(long **)(*plVar30 + (long)plVar32 * 8);
    if (plVar24 != (long *)0x0) {
      for (plVar24 = (long *)*plVar24; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        plVar27 = (long *)plVar24[1];
        if (plVar27 == plVar18) {
          if ((plVar24[3] == 0x17) &&
             (plVar27 = (long *)plVar24[2],
             (*plVar27 == 0x4973646e65697266 && plVar27[1] == 0x746e65727275436e) &&
             *(long *)((long)plVar27 + 0xf) == 0x747865746e6f4374)) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a264860;
          }
        }
        else {
          if (((ulong)plVar33 & uVar21) == 0) {
            plVar27 = (long *)((ulong)plVar27 & uVar21);
          }
          else if (plVar33 <= plVar27) {
            uVar26 = 0;
            if (plVar33 != (long *)0x0) {
              uVar26 = (ulong)plVar27 / (ulong)plVar33;
            }
            plVar27 = (long *)((long)plVar27 - uVar26 * (long)plVar33);
          }
          if (plVar27 != plVar32) break;
        }
      }
    }
  }
  plVar24 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar24 = 0;
  plVar24[1] = (long)plVar18;
  plVar24[3] = 0x17;
  plVar24[2] = (long)&DAT_10f649778;
  plVar24[4] = (long)plVar16;
  if ((plVar33 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar33 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar33) {
      uVar21 = (ulong)(((ulong)plVar33 & (long)plVar33 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar33 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar24;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar33 = (long *)param_1[10];
    if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
      plVar32 = (long *)((long)plVar33 - 1U & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar21 * (long)plVar33);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar32 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
    *(long **)(lVar20 + (long)plVar32 * 8) = plVar16;
    if (*plVar24 != 0) {
      plVar16 = *(long **)(*plVar24 + 8);
      if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar33 - 1U);
      }
      else if (plVar33 <= plVar16) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar33;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar33);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar24;
    }
  }
  else {
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a264860:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar1;
  plVar16[0xf] = (long)plVar14;
  if (plVar14 != (long *)0x0) {
    plVar18 = plVar14 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb8ee0;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f649790,0x1f);
  plVar33 = (long *)param_1[10];
  if (plVar33 != (long *)0x0) {
    uVar21 = (long)plVar33 - 1;
    if (((ulong)plVar33 & uVar21) == 0) {
      plVar32 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar26 = 0;
        if (plVar33 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar26 * (long)plVar33);
      }
    }
    plVar24 = *(long **)(*plVar30 + (long)plVar32 * 8);
    if (plVar24 != (long *)0x0) {
      for (plVar24 = (long *)*plVar24; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        plVar27 = (long *)plVar24[1];
        if (plVar27 == plVar18) {
          if ((plVar24[3] == 0x1f) &&
             (plVar27 = (long *)plVar24[2],
             ((*plVar27 == 0x4973646e65697266 && plVar27[1] == 0x746e65727275436e) &&
             plVar27[2] == 0x53747865746e6f43) &&
             *(long *)((long)plVar27 + 0x17) == 0x6f666e4965666153)) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a264b00;
          }
        }
        else {
          if (((ulong)plVar33 & uVar21) == 0) {
            plVar27 = (long *)((ulong)plVar27 & uVar21);
          }
          else if (plVar33 <= plVar27) {
            uVar26 = 0;
            if (plVar33 != (long *)0x0) {
              uVar26 = (ulong)plVar27 / (ulong)plVar33;
            }
            plVar27 = (long *)((long)plVar27 - uVar26 * (long)plVar33);
          }
          if (plVar27 != plVar32) break;
        }
      }
    }
  }
  plVar24 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar24 = 0;
  plVar24[1] = (long)plVar18;
  plVar24[3] = 0x1f;
  plVar24[2] = (long)&DAT_10f649790;
  plVar24[4] = (long)plVar16;
  if ((plVar33 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar33 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar33) {
      uVar21 = (ulong)(((ulong)plVar33 & (long)plVar33 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar33 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar24;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar33 = (long *)param_1[10];
    if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
      plVar32 = (long *)((long)plVar33 - 1U & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar21 * (long)plVar33);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar32 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
    *(long **)(lVar20 + (long)plVar32 * 8) = plVar16;
    if (*plVar24 != 0) {
      plVar16 = *(long **)(*plVar24 + 8);
      if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar33 - 1U);
      }
      else if (plVar33 <= plVar16) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar33;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar33);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar24;
    }
  }
  else {
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a264b00:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar1;
  plVar16[0xf] = (long)plVar14;
  if (plVar14 != (long *)0x0) {
    plVar18 = plVar14 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb8f58;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f6497b0,0x18);
  plVar33 = (long *)param_1[10];
  if (plVar33 != (long *)0x0) {
    uVar21 = (long)plVar33 - 1;
    if (((ulong)plVar33 & uVar21) == 0) {
      plVar32 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar26 = 0;
        if (plVar33 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar26 * (long)plVar33);
      }
    }
    plVar24 = *(long **)(*plVar30 + (long)plVar32 * 8);
    if (plVar24 != (long *)0x0) {
      for (plVar24 = (long *)*plVar24; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        plVar27 = (long *)plVar24[1];
        if (plVar27 == plVar18) {
          if ((plVar24[3] == 0x18) &&
             (plVar27 = (long *)plVar24[2],
             (*plVar27 == 0x5773646e65697266 && plVar27[1] == 0x6573556e61436f68) &&
             plVar27[2] == 0x6569666c6553794d)) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a264d88;
          }
        }
        else {
          if (((ulong)plVar33 & uVar21) == 0) {
            plVar27 = (long *)((ulong)plVar27 & uVar21);
          }
          else if (plVar33 <= plVar27) {
            uVar26 = 0;
            if (plVar33 != (long *)0x0) {
              uVar26 = (ulong)plVar27 / (ulong)plVar33;
            }
            plVar27 = (long *)((long)plVar27 - uVar26 * (long)plVar33);
          }
          if (plVar27 != plVar32) break;
        }
      }
    }
  }
  plVar24 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar24 = 0;
  plVar24[1] = (long)plVar18;
  plVar24[3] = 0x18;
  plVar24[2] = (long)&DAT_10f6497b0;
  plVar24[4] = (long)plVar16;
  if ((plVar33 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar33 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar33) {
      uVar21 = (ulong)(((ulong)plVar33 & (long)plVar33 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar33 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar24;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar33 = (long *)param_1[10];
    if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
      plVar32 = (long *)((long)plVar33 - 1U & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar21 * (long)plVar33);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar32 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
    *(long **)(lVar20 + (long)plVar32 * 8) = plVar16;
    if (*plVar24 != 0) {
      plVar16 = *(long **)(*plVar24 + 8);
      if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar33 - 1U);
      }
      else if (plVar33 <= plVar16) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar33;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar33);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar24;
    }
  }
  else {
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a264d88:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar1;
  plVar16[0xf] = (long)plVar14;
  if (plVar14 != (long *)0x0) {
    plVar18 = plVar14 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb8fd0;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f6497c9,0x20);
  plVar33 = (long *)param_1[10];
  if (plVar33 != (long *)0x0) {
    uVar21 = (long)plVar33 - 1;
    if (((ulong)plVar33 & uVar21) == 0) {
      plVar32 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar26 = 0;
        if (plVar33 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar26 * (long)plVar33);
      }
    }
    plVar24 = *(long **)(*plVar30 + (long)plVar32 * 8);
    if (plVar24 != (long *)0x0) {
      for (plVar24 = (long *)*plVar24; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        plVar27 = (long *)plVar24[1];
        if (plVar27 == plVar18) {
          if ((plVar24[3] == 0x20) &&
             (plVar27 = (long *)plVar24[2],
             ((*plVar27 == 0x5773646e65697266 && plVar27[1] == 0x6573556e61436f68) &&
             plVar27[2] == 0x6569666c6553794d) && plVar27[3] == 0x6f666e4965666153)) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a265024;
          }
        }
        else {
          if (((ulong)plVar33 & uVar21) == 0) {
            plVar27 = (long *)((ulong)plVar27 & uVar21);
          }
          else if (plVar33 <= plVar27) {
            uVar26 = 0;
            if (plVar33 != (long *)0x0) {
              uVar26 = (ulong)plVar27 / (ulong)plVar33;
            }
            plVar27 = (long *)((long)plVar27 - uVar26 * (long)plVar33);
          }
          if (plVar27 != plVar32) break;
        }
      }
    }
  }
  plVar24 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar24 = 0;
  plVar24[1] = (long)plVar18;
  plVar24[3] = 0x20;
  plVar24[2] = (long)&DAT_10f6497c9;
  plVar24[4] = (long)plVar16;
  if ((plVar33 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar33 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar33) {
      uVar21 = (ulong)(((ulong)plVar33 & (long)plVar33 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar33 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar24;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar33 = (long *)param_1[10];
    if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
      plVar32 = (long *)((long)plVar33 - 1U & (ulong)plVar18);
    }
    else {
      plVar32 = plVar18;
      if (plVar33 <= plVar18) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar32 = (long *)((long)plVar18 - uVar21 * (long)plVar33);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar32 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
    *(long **)(lVar20 + (long)plVar32 * 8) = plVar16;
    if (*plVar24 != 0) {
      plVar16 = *(long **)(*plVar24 + 8);
      if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar33 - 1U);
      }
      else if (plVar33 <= plVar16) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar33;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar33);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar24;
    }
  }
  else {
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a265024:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar1;
  plVar16[0xf] = (long)plVar14;
  if (plVar14 != (long *)0x0) {
    plVar18 = plVar14 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb9048;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f6497ea,8);
  plVar32 = (long *)param_1[10];
  if (plVar32 != (long *)0x0) {
    uVar21 = (long)plVar32 - 1;
    if (((ulong)plVar32 & uVar21) == 0) {
      plVar33 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar33 = plVar18;
      if (plVar32 <= plVar18) {
        uVar26 = 0;
        if (plVar32 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar32;
        }
        plVar33 = (long *)((long)plVar18 - uVar26 * (long)plVar32);
      }
    }
    plVar24 = *(long **)(*plVar30 + (long)plVar33 * 8);
    if (plVar24 != (long *)0x0) {
      for (plVar24 = (long *)*plVar24; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        plVar27 = (long *)plVar24[1];
        if (plVar27 == plVar18) {
          if ((plVar24[3] == 8) && (*(long *)plVar24[2] == 0x726573554941794d)) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a265280;
          }
        }
        else {
          if (((ulong)plVar32 & uVar21) == 0) {
            plVar27 = (long *)((ulong)plVar27 & uVar21);
          }
          else if (plVar32 <= plVar27) {
            uVar26 = 0;
            if (plVar32 != (long *)0x0) {
              uVar26 = (ulong)plVar27 / (ulong)plVar32;
            }
            plVar27 = (long *)((long)plVar27 - uVar26 * (long)plVar32);
          }
          if (plVar27 != plVar33) break;
        }
      }
    }
  }
  plVar24 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar24 = 0;
  plVar24[1] = (long)plVar18;
  plVar24[3] = 8;
  plVar24[2] = (long)&DAT_10f6497ea;
  plVar24[4] = (long)plVar16;
  if ((plVar32 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar32 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar32) {
      uVar21 = (ulong)(((ulong)plVar32 & (long)plVar32 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar32 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar24;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar32 = (long *)param_1[10];
    if (((ulong)plVar32 & (long)plVar32 - 1U) == 0) {
      plVar33 = (long *)((long)plVar32 - 1U & (ulong)plVar18);
    }
    else {
      plVar33 = plVar18;
      if (plVar32 <= plVar18) {
        uVar21 = 0;
        if (plVar32 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar32;
        }
        plVar33 = (long *)((long)plVar18 - uVar21 * (long)plVar32);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar33 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
    *(long **)(lVar20 + (long)plVar33 * 8) = plVar16;
    if (*plVar24 != 0) {
      plVar16 = *(long **)(*plVar24 + 8);
      if (((ulong)plVar32 & (long)plVar32 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar32 - 1U);
      }
      else if (plVar32 <= plVar16) {
        uVar21 = 0;
        if (plVar32 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar32;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar32);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar24;
    }
  }
  else {
    *plVar24 = *plVar16;
    *plVar16 = (long)plVar24;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a265280:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)plVar1;
  plVar16[0xf] = (long)plVar14;
  if (plVar14 != (long *)0x0) {
    plVar18 = plVar14 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb91a8;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f6497f3,0x10);
  plVar24 = (long *)param_1[10];
  plVar33 = plVar1;
  if (plVar24 != (long *)0x0) {
    uVar21 = (long)plVar24 - 1;
    if (((ulong)plVar24 & uVar21) == 0) {
      plVar33 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar33 = plVar18;
      if (plVar24 <= plVar18) {
        uVar26 = 0;
        if (plVar24 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar24;
        }
        plVar33 = (long *)((long)plVar18 - uVar26 * (long)plVar24);
      }
    }
    plVar27 = *(long **)(*plVar30 + (long)plVar33 * 8);
    if (plVar27 != (long *)0x0) {
      for (plVar27 = (long *)*plVar27; plVar27 != (long *)0x0; plVar27 = (long *)*plVar27) {
        plVar28 = (long *)plVar27[1];
        if (plVar28 == plVar18) {
          if ((plVar27[3] == 0x10) &&
             (*(long *)plVar27[2] == 0x726573554941794d &&
              ((long *)plVar27[2])[1] == 0x6f666e4965666153)) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a2654f0;
          }
        }
        else {
          if (((ulong)plVar24 & uVar21) == 0) {
            plVar28 = (long *)((ulong)plVar28 & uVar21);
          }
          else if (plVar24 <= plVar28) {
            uVar26 = 0;
            if (plVar24 != (long *)0x0) {
              uVar26 = (ulong)plVar28 / (ulong)plVar24;
            }
            plVar28 = (long *)((long)plVar28 - uVar26 * (long)plVar24);
          }
          if (plVar28 != plVar33) break;
        }
      }
    }
  }
  plVar27 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar27 = 0;
  plVar27[1] = (long)plVar18;
  plVar27[3] = 0x10;
  plVar27[2] = (long)&DAT_10f6497f3;
  plVar27[4] = (long)plVar16;
  if ((plVar24 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar24 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar24) {
      uVar21 = (ulong)(((ulong)plVar24 & (long)plVar24 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar24 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar27;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar24 = (long *)param_1[10];
    if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
      plVar33 = (long *)((long)plVar24 - 1U & (ulong)plVar18);
    }
    else {
      plVar33 = plVar18;
      if (plVar24 <= plVar18) {
        uVar21 = 0;
        if (plVar24 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar24;
        }
        plVar33 = (long *)((long)plVar18 - uVar21 * (long)plVar24);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar33 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar27 = *plVar16;
    *plVar16 = (long)plVar27;
    *(long **)(lVar20 + (long)plVar33 * 8) = plVar16;
    if (*plVar27 != 0) {
      plVar16 = *(long **)(*plVar27 + 8);
      if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar24 - 1U);
      }
      else if (plVar24 <= plVar16) {
        uVar21 = 0;
        if (plVar24 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar24;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar24);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar27;
    }
  }
  else {
    *plVar27 = *plVar16;
    *plVar16 = (long)plVar27;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a2654f0:
  plVar16 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar16[2] = 0;
  plVar16[1] = 0;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[7] = lVar20;
  plVar16[9] = 0;
  plVar16[8] = 0;
  plVar16[0xb] = 0;
  plVar16[10] = 0;
  plVar16[0xd] = 0;
  plVar16[0xc] = 0;
  plVar16[0xe] = (long)puVar7;
  plVar16[0xf] = (long)puVar15;
  if (puVar15 != (undefined8 *)0x0) {
    plVar18 = puVar15 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar16 = (long)&PTR_FUN_110bb9308;
  plVar18 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f649804,10);
  plVar24 = (long *)param_1[10];
  if (plVar24 != (long *)0x0) {
    uVar21 = (long)plVar24 - 1;
    if (((ulong)plVar24 & uVar21) == 0) {
      plVar33 = (long *)(uVar21 & (ulong)plVar18);
    }
    else {
      plVar33 = plVar18;
      if (plVar24 <= plVar18) {
        uVar26 = 0;
        if (plVar24 != (long *)0x0) {
          uVar26 = (ulong)plVar18 / (ulong)plVar24;
        }
        plVar33 = (long *)((long)plVar18 - uVar26 * (long)plVar24);
      }
    }
    plVar27 = *(long **)(*plVar30 + (long)plVar33 * 8);
    if (plVar27 != (long *)0x0) {
      for (plVar27 = (long *)*plVar27; plVar27 != (long *)0x0; plVar27 = (long *)*plVar27) {
        plVar28 = (long *)plVar27[1];
        if (plVar28 == plVar18) {
          if ((plVar27[3] == 10) &&
             (*(long *)plVar27[2] == 0x756f724774616863 && (short)((long *)plVar27[2])[1] == 0x7370)
             ) {
            (**(code **)(*plVar16 + 8))(plVar16);
            goto LAB_10a265770;
          }
        }
        else {
          if (((ulong)plVar24 & uVar21) == 0) {
            plVar28 = (long *)((ulong)plVar28 & uVar21);
          }
          else if (plVar24 <= plVar28) {
            uVar26 = 0;
            if (plVar24 != (long *)0x0) {
              uVar26 = (ulong)plVar28 / (ulong)plVar24;
            }
            plVar28 = (long *)((long)plVar28 - uVar26 * (long)plVar24);
          }
          if (plVar28 != plVar33) break;
        }
      }
    }
  }
  plVar27 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar27 = 0;
  plVar27[1] = (long)plVar18;
  plVar27[3] = 10;
  plVar27[2] = (long)&DAT_10f649804;
  plVar27[4] = (long)plVar16;
  if ((plVar24 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar24 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar24) {
      uVar21 = (ulong)(((ulong)plVar24 & (long)plVar24 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar24 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = plVar27;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar24 = (long *)param_1[10];
    if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
      plVar33 = (long *)((long)plVar24 - 1U & (ulong)plVar18);
    }
    else {
      plVar33 = plVar18;
      if (plVar24 <= plVar18) {
        uVar21 = 0;
        if (plVar24 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar24;
        }
        plVar33 = (long *)((long)plVar18 - uVar21 * (long)plVar24);
      }
    }
  }
  lVar20 = *plVar30;
  plVar16 = *(long **)(lVar20 + (long)plVar33 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = param_1 + 0xb;
    *plVar27 = *plVar16;
    *plVar16 = (long)plVar27;
    *(long **)(lVar20 + (long)plVar33 * 8) = plVar16;
    if (*plVar27 != 0) {
      plVar16 = *(long **)(*plVar27 + 8);
      if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar24 - 1U);
      }
      else if (plVar24 <= plVar16) {
        uVar21 = 0;
        if (plVar24 != (long *)0x0) {
          uVar21 = (ulong)plVar16 / (ulong)plVar24;
        }
        plVar16 = (long *)((long)plVar16 - uVar21 * (long)plVar24);
      }
      *(long **)(*plVar30 + (long)plVar16 * 8) = plVar27;
    }
  }
  else {
    *plVar27 = *plVar16;
    *plVar16 = (long)plVar27;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a265770:
  puVar17 = (undefined8 *)0x70;
  __Znwm();
  plVar33 = puVar17 + 1;
  *plVar33 = 0;
  puVar17[2] = 0;
  *puVar17 = &PTR_DAT_110bb9458;
  plVar16 = puVar17 + 3;
  FUN_10a535d00(plVar16,param_2);
  plVar18 = (long *)0x80;
  __Znwm();
  lVar20 = param_1[8];
  plVar18[2] = 0;
  plVar18[1] = 0;
  plVar18[4] = 0;
  plVar18[3] = 0;
  plVar18[6] = 0;
  plVar18[5] = 0;
  plVar18[7] = lVar20;
  plVar18[9] = 0;
  plVar18[8] = 0;
  plVar18[0xb] = 0;
  plVar18[10] = 0;
  plVar18[0xd] = 0;
  plVar18[0xc] = 0;
  plVar18[0xe] = (long)plVar16;
  plVar18[0xf] = (long)puVar17;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar33,0x10);
    if (bVar5) {
      *plVar33 = *plVar33 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *plVar18 = (long)&PTR_FUN_110bb94b8;
  plVar24 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f64980f,0xf);
  plVar27 = (long *)param_1[10];
  if (plVar27 != (long *)0x0) {
    uVar21 = (long)plVar27 - 1;
    if (((ulong)plVar27 & uVar21) == 0) {
      plVar32 = (long *)(uVar21 & (ulong)plVar24);
    }
    else {
      plVar32 = plVar24;
      if (plVar27 <= plVar24) {
        uVar26 = 0;
        if (plVar27 != (long *)0x0) {
          uVar26 = (ulong)plVar24 / (ulong)plVar27;
        }
        plVar32 = (long *)((long)plVar24 - uVar26 * (long)plVar27);
      }
    }
    plVar28 = *(long **)(*plVar30 + (long)plVar32 * 8);
    if (plVar28 != (long *)0x0) {
      for (plVar28 = (long *)*plVar28; plVar28 != (long *)0x0; plVar28 = (long *)*plVar28) {
        plVar29 = (long *)plVar28[1];
        if (plVar29 == plVar24) {
          if ((plVar28[3] == 0xf) &&
             (*(long *)plVar28[2] == 0x41696a6f6d746942 &&
              *(long *)(plVar28[2] + 7) == 0x6449726174617641)) {
            (**(code **)(*plVar18 + 8))(plVar18);
            goto LAB_10a265a14;
          }
        }
        else {
          if (((ulong)plVar27 & uVar21) == 0) {
            plVar29 = (long *)((ulong)plVar29 & uVar21);
          }
          else if (plVar27 <= plVar29) {
            uVar26 = 0;
            if (plVar27 != (long *)0x0) {
              uVar26 = (ulong)plVar29 / (ulong)plVar27;
            }
            plVar29 = (long *)((long)plVar29 - uVar26 * (long)plVar27);
          }
          if (plVar29 != plVar32) break;
        }
      }
    }
  }
  unaff_x28 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *unaff_x28 = 0;
  unaff_x28[1] = (long)plVar24;
  unaff_x28[3] = 0xf;
  unaff_x28[2] = (long)&DAT_10f64980f;
  unaff_x28[4] = (long)plVar18;
  if ((plVar27 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar27 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar27) {
      uVar21 = (ulong)(((ulong)plVar27 & (long)plVar27 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar27 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = unaff_x28;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar27 = (long *)param_1[10];
    if (((ulong)plVar27 & (long)plVar27 - 1U) == 0) {
      plVar32 = (long *)((long)plVar27 - 1U & (ulong)plVar24);
    }
    else {
      plVar32 = plVar24;
      if (plVar27 <= plVar24) {
        uVar21 = 0;
        if (plVar27 != (long *)0x0) {
          uVar21 = (ulong)plVar24 / (ulong)plVar27;
        }
        plVar32 = (long *)((long)plVar24 - uVar21 * (long)plVar27);
      }
    }
  }
  lVar20 = *plVar30;
  plVar18 = *(long **)(lVar20 + (long)plVar32 * 8);
  if (plVar18 == (long *)0x0) {
    plVar18 = param_1 + 0xb;
    *unaff_x28 = *plVar18;
    *plVar18 = (long)unaff_x28;
    *(long **)(lVar20 + (long)plVar32 * 8) = plVar18;
    if (*unaff_x28 != 0) {
      plVar18 = *(long **)(*unaff_x28 + 8);
      if (((ulong)plVar27 & (long)plVar27 - 1U) == 0) {
        plVar18 = (long *)((ulong)plVar18 & (long)plVar27 - 1U);
      }
      else if (plVar27 <= plVar18) {
        uVar21 = 0;
        if (plVar27 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar27;
        }
        plVar18 = (long *)((long)plVar18 - uVar21 * (long)plVar27);
      }
      *(long **)(*plVar30 + (long)plVar18 * 8) = unaff_x28;
    }
  }
  else {
    *unaff_x28 = *plVar18;
    *plVar18 = (long)unaff_x28;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a265a14:
  plVar18 = (long *)0xa0;
  __Znwm();
  plVar18[6] = 0;
  plVar18[5] = 0;
  plVar18[4] = 0;
  plVar18[3] = 0;
  plVar18[2] = 0;
  plVar18[1] = 0;
  plVar18[7] = param_2;
  plVar18[9] = 0;
  plVar18[8] = 0;
  plVar18[0xb] = 0;
  plVar18[10] = 0;
  plVar18[0xd] = 0;
  plVar18[0xc] = 0;
  *plVar18 = (long)&PTR_DAT_110bb9608;
  plVar18[0xe] = (long)plVar9;
  plVar18[0xf] = (long)puVar8;
  if (puVar8 != (undefined8 *)0x0) {
    plVar32 = puVar8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar5) {
        *plVar32 = *plVar32 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar18 = (long)&PTR_FUN_110bb9588;
  plVar18[0x10] = 0;
  plVar18[0x11] = 0;
  plVar18[0x12] = (long)plVar16;
  plVar18[0x13] = (long)puVar17;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar33,0x10);
    if (bVar5) {
      *plVar33 = *plVar33 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar32 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f648b9d,0xb);
  plVar27 = (long *)param_1[10];
  plVar24 = plVar16;
  if (plVar27 != (long *)0x0) {
    uVar21 = (long)plVar27 - 1;
    if (((ulong)plVar27 & uVar21) == 0) {
      plVar24 = (long *)(uVar21 & (ulong)plVar32);
    }
    else {
      plVar24 = plVar32;
      if (plVar27 <= plVar32) {
        uVar26 = 0;
        if (plVar27 != (long *)0x0) {
          uVar26 = (ulong)plVar32 / (ulong)plVar27;
        }
        plVar24 = (long *)((long)plVar32 - uVar26 * (long)plVar27);
      }
    }
    plVar28 = *(long **)(*plVar30 + (long)plVar24 * 8);
    if (plVar28 != (long *)0x0) {
      for (plVar28 = (long *)*plVar28; plVar28 != (long *)0x0; plVar28 = (long *)*plVar28) {
        plVar29 = (long *)plVar28[1];
        if (plVar29 == plVar32) {
          if ((plVar28[3] == 0xb) &&
             (*(long *)plVar28[2] == 0x55746e6572727543 &&
              *(long *)(plVar28[2] + 3) == 0x72657355746e6572)) {
            (**(code **)(*plVar18 + 8))(plVar18);
            goto LAB_10a265cc0;
          }
        }
        else {
          if (((ulong)plVar27 & uVar21) == 0) {
            plVar29 = (long *)((ulong)plVar29 & uVar21);
          }
          else if (plVar27 <= plVar29) {
            uVar26 = 0;
            if (plVar27 != (long *)0x0) {
              uVar26 = (ulong)plVar29 / (ulong)plVar27;
            }
            plVar29 = (long *)((long)plVar29 - uVar26 * (long)plVar27);
          }
          if (plVar29 != plVar24) break;
        }
      }
    }
  }
  unaff_x28 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *unaff_x28 = 0;
  unaff_x28[1] = (long)plVar32;
  unaff_x28[3] = 0xb;
  unaff_x28[2] = (long)&DAT_10f648b9d;
  unaff_x28[4] = (long)plVar18;
  if ((plVar27 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar27 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar27) {
      uVar21 = (ulong)(((ulong)plVar27 & (long)plVar27 - 1U) != 0);
    }
    uVar21 = uVar21 | (long)plVar27 << 1;
    uVar26 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    plStack_90 = unaff_x28;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30,uVar21);
    plVar27 = (long *)param_1[10];
    if (((ulong)plVar27 & (long)plVar27 - 1U) == 0) {
      plVar24 = (long *)((long)plVar27 - 1U & (ulong)plVar32);
    }
    else {
      plVar24 = plVar32;
      if (plVar27 <= plVar32) {
        uVar21 = 0;
        if (plVar27 != (long *)0x0) {
          uVar21 = (ulong)plVar32 / (ulong)plVar27;
        }
        plVar24 = (long *)((long)plVar32 - uVar21 * (long)plVar27);
      }
    }
  }
  lVar20 = *plVar30;
  plVar18 = *(long **)(lVar20 + (long)plVar24 * 8);
  if (plVar18 == (long *)0x0) {
    plVar18 = param_1 + 0xb;
    *unaff_x28 = *plVar18;
    *plVar18 = (long)unaff_x28;
    *(long **)(lVar20 + (long)plVar24 * 8) = plVar18;
    if (*unaff_x28 != 0) {
      plVar18 = *(long **)(*unaff_x28 + 8);
      if (((ulong)plVar27 & (long)plVar27 - 1U) == 0) {
        plVar18 = (long *)((ulong)plVar18 & (long)plVar27 - 1U);
      }
      else if (plVar27 <= plVar18) {
        uVar21 = 0;
        if (plVar27 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar27;
        }
        plVar18 = (long *)((long)plVar18 - uVar21 * (long)plVar27);
      }
      *(long **)(*plVar30 + (long)plVar18 * 8) = unaff_x28;
    }
  }
  else {
    *unaff_x28 = *plVar18;
    *plVar18 = (long)unaff_x28;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a265cc0:
  plVar18 = (long *)0xa0;
  __Znwm();
  plVar18[6] = 0;
  plVar18[5] = 0;
  plVar18[4] = 0;
  plVar18[3] = 0;
  plVar18[2] = 0;
  plVar18[1] = 0;
  plVar18[7] = param_2;
  plVar18[9] = 0;
  plVar18[8] = 0;
  plVar18[0xb] = 0;
  plVar18[10] = 0;
  plVar18[0xd] = 0;
  plVar18[0xc] = 0;
  *plVar18 = (long)&PTR_DAT_110bb9740;
  plVar18[0xe] = (long)plVar9;
  plVar18[0xf] = (long)puVar8;
  if (puVar8 != (undefined8 *)0x0) {
    plVar32 = puVar8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar5) {
        *plVar32 = *plVar32 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar18 = (long)&PTR_FUN_110bb96c0;
  plVar18[0x10] = 0;
  plVar18[0x11] = 0;
  plVar18[0x12] = (long)plVar16;
  plVar18[0x13] = (long)puVar17;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar33,0x10);
    if (bVar5) {
      *plVar33 = *plVar33 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  puVar22 = &DAT_10f648ba9;
  plVar32 = plVar30;
  FUN_10a054838(plVar30,&DAT_10f648ba9,0x13);
  plVar33 = (long *)param_1[10];
  if (plVar33 != (long *)0x0) {
    uVar21 = (long)plVar33 - 1;
    if (((ulong)plVar33 & uVar21) == 0) {
      unaff_x28 = (long *)(uVar21 & (ulong)plVar32);
    }
    else {
      unaff_x28 = plVar32;
      if (plVar33 <= plVar32) {
        uVar26 = 0;
        if (plVar33 != (long *)0x0) {
          uVar26 = (ulong)plVar32 / (ulong)plVar33;
        }
        unaff_x28 = (long *)((long)plVar32 - uVar26 * (long)plVar33);
      }
    }
    plVar24 = *(long **)(*plVar30 + (long)unaff_x28 * 8);
    if (plVar24 != (long *)0x0) {
      for (plVar24 = (long *)*plVar24; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        plVar27 = (long *)plVar24[1];
        if (plVar27 == plVar32) {
          if ((plVar24[3] == 0x13) &&
             (plVar27 = (long *)plVar24[2],
             (*plVar27 == 0x55746e6572727543 && plVar27[1] == 0x4965666153726573) &&
             *(long *)((long)plVar27 + 0xb) == 0x6f666e4965666153)) {
            (**(code **)(*plVar18 + 8))(plVar18);
            goto LAB_10a265f70;
          }
        }
        else {
          if (((ulong)plVar33 & uVar21) == 0) {
            plVar27 = (long *)((ulong)plVar27 & uVar21);
          }
          else if (plVar33 <= plVar27) {
            uVar26 = 0;
            if (plVar33 != (long *)0x0) {
              uVar26 = (ulong)plVar27 / (ulong)plVar33;
            }
            plVar27 = (long *)((long)plVar27 - uVar26 * (long)plVar33);
          }
          if (plVar27 != unaff_x28) break;
        }
      }
    }
  }
  plVar24 = (long *)0x28;
  __Znwm();
  plStack_80 = (long *)0x1;
  *plVar24 = 0;
  plVar24[1] = (long)plVar32;
  plVar24[3] = 0x13;
  plVar24[2] = (long)&DAT_10f648ba9;
  plVar24[4] = (long)plVar18;
  if ((plVar33 == (long *)0x0) ||
     (plStack_88 = plVar30, *(float *)(param_1 + 0xd) * (float)plVar33 < (float)(param_1[0xc] + 1)))
  {
    uVar21 = 1;
    if ((long *)0x2 < plVar33) {
      uVar21 = (ulong)(((ulong)plVar33 & (long)plVar33 - 1U) != 0);
    }
    puVar22 = (undefined *)(uVar21 | (long)plVar33 << 1);
    puVar25 = (undefined *)(long)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (puVar22 <= puVar25) {
      puVar22 = puVar25;
    }
    plStack_90 = plVar24;
    plStack_88 = plVar30;
    FUN_10a296d40(plVar30);
    plVar33 = (long *)param_1[10];
    if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
      unaff_x28 = (long *)((long)plVar33 - 1U & (ulong)plVar32);
    }
    else {
      unaff_x28 = plVar32;
      if (plVar33 <= plVar32) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar32 / (ulong)plVar33;
        }
        unaff_x28 = (long *)((long)plVar32 - uVar21 * (long)plVar33);
      }
    }
  }
  lVar20 = *plVar30;
  plVar18 = *(long **)(lVar20 + (long)unaff_x28 * 8);
  if (plVar18 == (long *)0x0) {
    plVar18 = param_1 + 0xb;
    *plVar24 = *plVar18;
    *plVar18 = (long)plVar24;
    *(long **)(lVar20 + (long)unaff_x28 * 8) = plVar18;
    if (*plVar24 != 0) {
      plVar18 = *(long **)(*plVar24 + 8);
      if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
        plVar18 = (long *)((ulong)plVar18 & (long)plVar33 - 1U);
      }
      else if (plVar33 <= plVar18) {
        uVar21 = 0;
        if (plVar33 != (long *)0x0) {
          uVar21 = (ulong)plVar18 / (ulong)plVar33;
        }
        plVar18 = (long *)((long)plVar18 - uVar21 * (long)plVar33);
      }
      *(long **)(*plVar30 + (long)plVar18 * 8) = plVar24;
    }
  }
  else {
    *plVar24 = *plVar18;
    *plVar18 = (long)plVar24;
  }
  plStack_90 = (long *)0x0;
  param_1[0xc] = param_1[0xc] + 1;
  FUN_10a296f10(&plStack_90);
LAB_10a265f70:
  plVar30 = (long *)param_1[0xf];
  plVar18 = (long *)param_1[0x10];
  if (plVar30 < plVar18) {
    *plVar30 = (long)plVar16;
    plVar30[1] = (long)puVar17;
    plVar30 = plVar30 + 2;
    param_1[0xf] = plVar30;
    puVar25 = puVar22;
  }
  else {
    lVar20 = (long)plVar30 - *plVar31;
    uVar21 = (lVar20 >> 4) + 1;
    if (uVar21 >> 0x3c != 0) {
      FUN_10a26efc0();
      goto LAB_10a2666f8;
    }
    uVar23 = (long)plVar18 - *plVar31;
    uVar26 = (long)uVar23 >> 3;
    if (uVar26 <= uVar21) {
      uVar26 = uVar21;
    }
    if (0x7fffffffffffffef < uVar23) {
      uVar26 = 0xfffffffffffffff;
    }
    plStack_70 = plVar31;
    FUN_10a26efd4();
    puVar25 = (undefined *)param_1[0xe];
    lVar3 = param_1[0xf];
    puVar2 = (undefined8 *)(uVar26 + lVar20);
    *puVar2 = plVar16;
    puVar2[1] = puVar17;
    plVar30 = puVar2 + 2;
    lVar20 = (long)puVar2 - (lVar3 - (long)puVar25);
    _memcpy(lVar20);
    plStack_90 = (long *)param_1[0xe];
    param_1[0xe] = lVar20;
    param_1[0xf] = plVar30;
    uStack_78 = param_1[0x10];
    param_1[0x10] = uVar26 + (long)puVar22 * 0x10;
    plStack_88 = plStack_90;
    plStack_80 = plStack_90;
    func_0x00010a26f008(&plStack_90);
    param_1[0xf] = plVar30;
    plVar18 = (long *)param_1[0x10];
  }
  if (plVar30 < plVar18) {
    plVar16 = plVar30 + 2;
    *plVar30 = (long)plVar9;
    plVar30[1] = (long)puVar8;
    puVar22 = puVar25;
LAB_10a2660d4:
    param_1[0xf] = plVar16;
    if (plVar16 < plVar18) {
      plVar9 = plVar16 + 2;
      plVar16[1] = (long)puVar10;
      *plVar16 = (long)puVar11;
      puVar25 = puVar22;
    }
    else {
      lVar20 = (long)plVar16 - *plVar31;
      uVar21 = (lVar20 >> 4) + 1;
      if (uVar21 >> 0x3c != 0) goto LAB_10a2666ec;
      uVar23 = (long)plVar18 - *plVar31;
      uVar26 = (long)uVar23 >> 3;
      if (uVar26 <= uVar21) {
        uVar26 = uVar21;
      }
      if (0x7fffffffffffffef < uVar23) {
        uVar26 = 0xfffffffffffffff;
      }
      plStack_70 = plVar31;
      FUN_10a26efd4();
      puVar25 = (undefined *)param_1[0xe];
      plVar30 = (long *)(uVar26 + lVar20);
      lVar20 = (long)plVar30 - (param_1[0xf] - (long)puVar25);
      plVar9 = plVar30 + 2;
      plVar30[1] = (long)puVar10;
      *plVar30 = (long)puVar11;
      _memcpy(lVar20);
      plStack_90 = (long *)param_1[0xe];
      param_1[0xe] = lVar20;
      param_1[0xf] = plVar9;
      uStack_78 = param_1[0x10];
      param_1[0x10] = uVar26 + (long)puVar22 * 0x10;
      plStack_88 = plStack_90;
      plStack_80 = plStack_90;
      func_0x00010a26f008(&plStack_90);
      plVar18 = (long *)param_1[0x10];
    }
    param_1[0xf] = plVar9;
    if (plVar9 < plVar18) {
      plVar30 = plVar9 + 2;
      plVar9[1] = (long)puVar12;
      *plVar9 = (long)plVar13;
      puVar22 = puVar25;
    }
    else {
      lVar20 = (long)plVar9 - *plVar31;
      uVar21 = (lVar20 >> 4) + 1;
      if (uVar21 >> 0x3c != 0) goto LAB_10a2666ec;
      uVar23 = (long)plVar18 - *plVar31;
      uVar26 = (long)uVar23 >> 3;
      if (uVar26 <= uVar21) {
        uVar26 = uVar21;
      }
      if (0x7fffffffffffffef < uVar23) {
        uVar26 = 0xfffffffffffffff;
      }
      plStack_70 = plVar31;
      FUN_10a26efd4();
      puVar22 = (undefined *)param_1[0xe];
      puVar8 = (undefined8 *)(uVar26 + lVar20);
      lVar20 = (long)puVar8 - (param_1[0xf] - (long)puVar22);
      plVar30 = puVar8 + 2;
      puVar8[1] = puVar12;
      *puVar8 = plVar13;
      _memcpy(lVar20);
      plStack_90 = (long *)param_1[0xe];
      param_1[0xe] = lVar20;
      param_1[0xf] = plVar30;
      uStack_78 = param_1[0x10];
      param_1[0x10] = uVar26 + (long)puVar25 * 0x10;
      plStack_88 = plStack_90;
      plStack_80 = plStack_90;
      func_0x00010a26f008(&plStack_90);
      plVar18 = (long *)param_1[0x10];
    }
    param_1[0xf] = plVar30;
    if (plVar30 < plVar18) {
      plVar9 = plVar30 + 2;
      plVar30[1] = (long)plVar14;
      *plVar30 = (long)plVar1;
      puVar25 = puVar22;
    }
    else {
      lVar20 = (long)plVar30 - *plVar31;
      uVar21 = (lVar20 >> 4) + 1;
      if (uVar21 >> 0x3c != 0) goto LAB_10a2666ec;
      uVar23 = (long)plVar18 - *plVar31;
      uVar26 = (long)uVar23 >> 3;
      if (uVar26 <= uVar21) {
        uVar26 = uVar21;
      }
      if (0x7fffffffffffffef < uVar23) {
        uVar26 = 0xfffffffffffffff;
      }
      plStack_70 = plVar31;
      FUN_10a26efd4();
      puVar25 = (undefined *)param_1[0xe];
      puVar8 = (undefined8 *)(uVar26 + lVar20);
      lVar20 = (long)puVar8 - (param_1[0xf] - (long)puVar25);
      plVar9 = puVar8 + 2;
      puVar8[1] = plVar14;
      *puVar8 = plVar1;
      _memcpy(lVar20);
      plStack_90 = (long *)param_1[0xe];
      param_1[0xe] = lVar20;
      param_1[0xf] = plVar9;
      uStack_78 = param_1[0x10];
      param_1[0x10] = uVar26 + (long)puVar22 * 0x10;
      plStack_88 = plStack_90;
      plStack_80 = plStack_90;
      func_0x00010a26f008(&plStack_90);
      plVar18 = (long *)param_1[0x10];
    }
    param_1[0xf] = plVar9;
    if (plVar9 < plVar18) {
      *plVar9 = (long)puVar7;
      plVar9[1] = (long)puVar15;
      plVar9 = plVar9 + 2;
      puVar22 = puVar25;
    }
    else {
      lVar20 = (long)plVar9 - *plVar31;
      uVar21 = (lVar20 >> 4) + 1;
      if (uVar21 >> 0x3c != 0) goto LAB_10a2666ec;
      uVar23 = (long)plVar18 - *plVar31;
      uVar26 = (long)uVar23 >> 3;
      if (uVar26 <= uVar21) {
        uVar26 = uVar21;
      }
      if (0x7fffffffffffffef < uVar23) {
        uVar26 = 0xfffffffffffffff;
      }
      plStack_70 = plVar31;
      FUN_10a26efd4();
      puVar22 = (undefined *)param_1[0xe];
      lVar3 = param_1[0xf];
      plVar30 = (long *)(uVar26 + lVar20);
      *plVar30 = (long)puVar7;
      plVar30[1] = (long)puVar15;
      plVar9 = plVar30 + 2;
      lVar20 = (long)plVar30 - (lVar3 - (long)puVar22);
      _memcpy(lVar20);
      plStack_90 = (long *)param_1[0xe];
      param_1[0xe] = lVar20;
      param_1[0xf] = plVar9;
      uStack_78 = param_1[0x10];
      param_1[0x10] = uVar26 + (long)puVar25 * 0x10;
      plStack_88 = plStack_90;
      plStack_80 = plStack_90;
      func_0x00010a26f008(&plStack_90);
      plVar18 = (long *)param_1[0x10];
    }
    param_1[0xf] = plVar9;
    if (plVar9 < plVar18) {
      plVar31 = plVar9 + 2;
      plVar9[1] = lVar19;
      *plVar9 = (long)plVar34;
LAB_10a26643c:
      param_1[0xf] = plVar31;
      return param_1;
    }
    lVar20 = (long)plVar9 - *plVar31;
    uVar21 = (lVar20 >> 4) + 1;
    if (uVar21 >> 0x3c == 0) {
      uVar23 = (long)plVar18 - *plVar31;
      uVar26 = (long)uVar23 >> 3;
      if (uVar26 <= uVar21) {
        uVar26 = uVar21;
      }
      if (0x7fffffffffffffef < uVar23) {
        uVar26 = 0xfffffffffffffff;
      }
      plStack_70 = plVar31;
      FUN_10a26efd4();
      lVar3 = param_1[0xe];
      puVar7 = (undefined8 *)(uVar26 + lVar20);
      lVar20 = (long)puVar7 - (param_1[0xf] - lVar3);
      plVar31 = puVar7 + 2;
      puVar7[1] = lVar19;
      *puVar7 = plVar34;
      _memcpy(lVar20,lVar3);
      plStack_90 = (long *)param_1[0xe];
      param_1[0xe] = lVar20;
      param_1[0xf] = plVar31;
      uStack_78 = param_1[0x10];
      param_1[0x10] = uVar26 + (long)puVar22 * 0x10;
      plStack_88 = plStack_90;
      plStack_80 = plStack_90;
      func_0x00010a26f008(&plStack_90);
      goto LAB_10a26643c;
    }
  }
  else {
    lVar20 = (long)plVar30 - *plVar31;
    uVar21 = (lVar20 >> 4) + 1;
    if (uVar21 >> 0x3c == 0) {
      uVar23 = (long)plVar18 - *plVar31;
      uVar26 = (long)uVar23 >> 3;
      if (uVar26 <= uVar21) {
        uVar26 = uVar21;
      }
      if (0x7fffffffffffffef < uVar23) {
        uVar26 = 0xfffffffffffffff;
      }
      plStack_70 = plVar31;
      FUN_10a26efd4();
      puVar22 = (undefined *)param_1[0xe];
      lVar3 = param_1[0xf];
      puVar17 = (undefined8 *)(uVar26 + lVar20);
      *puVar17 = plVar9;
      puVar17[1] = puVar8;
      plVar16 = puVar17 + 2;
      lVar20 = (long)puVar17 - (lVar3 - (long)puVar22);
      _memcpy(lVar20);
      plStack_90 = (long *)param_1[0xe];
      param_1[0xe] = lVar20;
      param_1[0xf] = plVar16;
      uStack_78 = param_1[0x10];
      param_1[0x10] = uVar26 + (long)puVar25 * 0x10;
      plStack_88 = plStack_90;
      plStack_80 = plStack_90;
      func_0x00010a26f008(&plStack_90);
      plVar18 = (long *)param_1[0x10];
      goto LAB_10a2660d4;
    }
  }
LAB_10a2666ec:
  FUN_10a26efc0();
LAB_10a2666f8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2666fc);
  (*pcVar6)();
}



/* Entry: 10a26699c; end: 10a266a27;  */

undefined8 * FUN_10a26699c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb63d8;
  param_1[3] = &PTR_DAT_110bb6450;
  param_1[0x13] = &PTR_DAT_110bb64c8;
  func_0x00010a296810(param_1 + 0x11);
  func_0x00010a26f0ac(param_1 + 0xe);
  func_0x00010a296b94(param_1 + 9);
  param_1[3] = &PTR_DAT_110bb6970;
  param_1[0x13] = &PTR_FUN_110bb69e8;
  func_0x00010a004e5c(param_1 + 6);
  func_0x00010a004e04(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a266a28; end: 10a266a43;  */

undefined8 * FUN_10a266a28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb63d8;
  param_1[3] = &PTR_DAT_110bb6450;
  param_1[0x13] = &PTR_DAT_110bb64c8;
  func_0x00010a296810(param_1 + 0x11);
  func_0x00010a26f0ac(param_1 + 0xe);
  func_0x00010a296b94(param_1 + 9);
  param_1[3] = &PTR_DAT_110bb6970;
  param_1[0x13] = &PTR_FUN_110bb69e8;
  func_0x00010a004e5c(param_1 + 6);
  func_0x00010a004e04(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a266a44; end: 10a266a6f;  */

void FUN_10a266a44(void)

{
  FUN_10a26699c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a266a70; end: 10a266a9f;  */

void FUN_10a266a70(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a26699c((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a266aa0; end: 10a267577;  */

void FUN_10a266aa0(ulong param_1)

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
  char *pcStack_1a0;
  undefined **ppuStack_198;
  undefined1 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  char *pcStack_130;
  undefined8 **ppuStack_128;
  char **ppcStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  func_0x000109887da8(&ppuStack_128,&UNK_10f648b8b,0x11);
  pppuVar1 = (undefined8 ***)ppuStack_128;
  if (-1 < lStack_118) {
    pppuVar1 = &ppuStack_128;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb9c98;
  pppuVar2 = (undefined8 ***)&UNK_10f64697a;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_b8 = 0;
  uStack_a0 = 0xffffffffffffffff;
  uStack_a8 = 0x100000064;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_b0 = 0;
  uStack_78 = 0;
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_60 = 0;
  ppuStack_c0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_c0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_198 = &PTR_DAT_110bb9c98;
    puStack_190 = (undefined1 *)0x0;
    ppuStack_c0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_b8 = 0;
    uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_198,&ppuStack_c0);
  }
  if (lStack_118 < 0) {
    __ZdlPv(ppuStack_128);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f647d65,FUN_10a2a0b70,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x100,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f647d78,FUN_10a2a0da8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x100,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f647d89,FUN_10a2a13d8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f647da3,FUN_10a2a1694,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f647dbb,FUN_10a2a1a38,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f647dd4,FUN_10a2a1b00,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f647dee,FUN_10a2a1bc8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f647e0b,FUN_10a2a1c90,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f647e27,FUN_10a2a1d5c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f647e3f,FUN_10a2a222c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x100,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f647e57,FUN_10a2a22f4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,0x100,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f647e63,FUN_10a2a23bc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,0x100,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f647e71,FUN_10a2a2484,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x100,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f647e84,FUN_10a2a254c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,0x102,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f647e94,FUN_10a2a2614,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x100,0xffffffff,0xffffffff,0xb);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&DAT_10f647eab,FUN_10a2a28d0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x100,0xffffffff,0xffffffff,0xb);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&DAT_10f647eb9,FUN_10a2a2c74,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x100,0xffffffff,0xffffffff,0xb);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f647ec8,FUN_10a2a2d3c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xb);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f647edd,FUN_10a2a2ff8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xb);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f647ef3,FUN_10a2a339c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xb);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f647f0a,FUN_10a2a3464,2,*(undefined8 *)(param_1 + 0x40));
  }
  pcStack_130 = "callback";
  ppuStack_128 = (undefined8 **)&UNK_10f647f27;
  ppcStack_120 = &pcStack_130;
  uStack_108 = 0xbffffffff;
  uStack_110 = 0x10000000019;
  lStack_118 = 1;
  puStack_100 = &UNK_10f64697a;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d8 = 0xffffffff;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uVar7 = param_1;
  FUN_10a2a352c(param_1,&ppuStack_128);
  pcStack_1a0 = "callback";
  ppuStack_198 = (undefined **)&UNK_10f647f42;
  uStack_188 = 1;
  uStack_178 = 0xbffffffff;
  uStack_180 = 0x10000000064;
  puStack_170 = &UNK_10f647f5b;
  uStack_168 = 0x62;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_160 = 0;
  uStack_148 = 0xffffffff;
  uStack_140 = 0;
  uStack_138 = 0;
  puStack_190 = (undefined1 *)&pcStack_1a0;
  FUN_10a2a352c();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f647fbe,FUN_10a2a3658,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x100,0xffffffff,0xffffffff,0xb);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f647fdf,FUN_10a2a3720,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xb);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f647fff,FUN_10a2a37e8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x100,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&DAT_10f648027,FUN_10a2a3aa0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f648036,FUN_10a2a4090,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x100,0xffffffff,0xffffffff,0xb);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f64804d,FUN_10a2a46f8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xb);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f648059,FUN_10a2a4a68,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,0x100,0xffffffff,0xffffffff,0xb);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f64806d,FUN_10a2a4b34,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xb);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a267558;
    FUN_10a054dac(param_1,&UNK_10f64807b,FUN_10a2a4ff4,4,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_b8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_c0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_98 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_b0 = *(undefined8 *)(lVar3 + -0x58);
    uStack_88 = *(undefined8 *)(lVar3 + -0x30);
    uStack_90 = *(undefined8 *)(lVar3 + -0x38);
    uStack_78 = *(undefined8 *)(lVar3 + -0x20);
    uStack_80 = *(undefined8 *)(lVar3 + -0x28);
    uStack_60 = *(undefined8 *)(lVar3 + -8);
    uStack_68 = *(undefined8 *)(lVar3 + -0x10);
    uStack_70 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_a8._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_a8._4_4_;
    uStack_a0._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_a0._4_4_;
    uVar7 = param_1;
    uStack_a8 = uVar9;
    uStack_a0 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_70 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_c0,param_1 + 0x1b8,&UNK_10f648b8b,0x11);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a267558:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a26755c);
  (*pcVar6)();
}



/* Entry: 10a267578; end: 10a2677ab;  */

long FUN_10a267578(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  
  plVar4 = *(long **)(param_1 + 0x70);
  plVar1 = *(long **)(param_1 + 0x78);
  if (plVar4 == plVar1) {
    lVar3 = 0;
  }
  else {
    uVar5 = 0;
    do {
      plVar2 = (long *)*plVar4;
      if ((char)plVar2[2] == '\x01') {
        (**(code **)(*plVar2 + 0x20))();
        uVar5 = uVar5 | (uint)plVar2;
      }
      plVar4 = plVar4 + 2;
    } while (plVar4 != plVar1);
    lVar3 = (long)(int)uVar5;
  }
  return lVar3;
}



/* Entry: 10a2677ac; end: 10a2677b3;  */

void FUN_10a2677ac(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + -0x18);
  plVar2 = *(long **)(param_1 + 0x60);
  for (plVar4 = *(long **)(param_1 + 0x58); plVar4 != plVar2; plVar4 = plVar4 + 2) {
    plVar1 = (long *)*plVar4;
    if ((char)plVar1[2] == '\x01') {
      (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
    }
  }
  for (plVar4 = *(long **)(param_1 + 0x40); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    (**(code **)(*(long *)plVar4[4] + 0x10))();
    plVar2 = (long *)plVar4[4];
    (**(code **)(*plVar2 + 0x18))();
    if ((int)plVar2 != 0) {
      (**(code **)(*(long *)((long)plVar3 + *(long *)(*plVar3 + -0x18)) + 0x28))
                ((long)plVar3 + *(long *)(*plVar3 + -0x18));
    }
  }
  return;
}



/* Entry: 10a2677b4; end: 10a26783b;  */

void FUN_10a2677b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  FUN_10a2a5af0(auStack_58,param_1 + 0x18);
  for (plVar2 = (long *)lStack_48; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    lVar1 = param_1 + 0x18;
    FUN_10a2a6144(lVar1,plVar2 + 2);
    if (lVar1 != 0) {
      func_0x00010a2a621c(plVar2 + 4,param_2);
    }
  }
  FUN_10a296af4(auStack_58);
  return;
}



/* Entry: 10a26783c; end: 10a26787b;  */

long FUN_10a26783c(long param_1)

{
  func_0x00010a07a8a8(param_1 + 0x30);
  FUN_10a26f238(param_1 + 0x20);
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10a26787c; end: 10a2678ff;  */

undefined1  [16] FUN_10a26787c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = &UNK_10f648bbd;
  return auVar1;
}



/* Entry: 10a267900; end: 10a2679ef;  */

void FUN_10a267900(undefined8 param_1)

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
  FUN_10a2679f0(param_1,&puStack_88);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f64811b;
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
  FUN_10a2a7594();
  ppuStack_80 = &puStack_90;
  puStack_90 = &UNK_10f64813f;
  puStack_88 = &UNK_10f648130;
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
  FUN_10a2a7768(param_1,&puStack_88,0);
  FUN_10a2a78e4(param_1);
  return;
}



/* Entry: 10a2679f0; end: 10a267ac7;  */

/* WARNING: Removing unreachable block (ram,0x00010a267a88) */

undefined1  [16] FUN_10a2679f0(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f648bbd,0xe);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a2a7498(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a267ac8; end: 10a267e57;  */

void FUN_10a267ac8(ulong *param_1,undefined *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  ulong *puVar4;
  undefined *puVar5;
  ulong *extraout_x8;
  ulong *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long extraout_x10;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar6 = (ulong *)&UNK_110bb65b0;
  lVar8 = 0x48;
  do {
    if ((int)puVar6[-2] ==
        *(int *)(*(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0x100) + 0x1d8) + 0x1e0))
    goto LAB_10a267b1c;
    puVar6 = puVar6 + 3;
    lVar8 = lVar8 + -0x18;
  } while (lVar8 != 0);
  do {
    param_2 = &UNK_10f61d92d;
    FUN_10a26f290();
    puVar6 = extraout_x8;
    lVar8 = extraout_x10;
LAB_10a267b1c:
  } while (lVar8 == 0);
  uVar9 = *puVar6;
  if (0x7ffffffffffffff7 < uVar9) {
    func_0x000109ffde50();
    *(undefined ***)(param_2 + 0x1b0) = &PTR_DAT_110bbab00;
    if ((char)param_2[0x1cf] < '\0') {
      *(undefined8 *)(param_2 + 0x1c0) = 0x10;
      puVar7 = *(undefined8 **)(param_2 + 0x1b8);
    }
    else {
      param_2[0x1cf] = 0x10;
      puVar7 = (undefined8 *)(param_2 + 0x1b8);
    }
    puVar7[1] = 0x6f666e496e6f6974;
    *puVar7 = 0x61636f4c72657355;
    *(undefined1 *)(puVar7 + 2) = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    puStack_d0 = &DAT_10f3b5d28;
    uStack_b0 = 0xffffffffffffffff;
    uStack_b8 = 0x200000019;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_88 = 0;
    uStack_84 = 0x124;
    uStack_80 = 0x13c;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010a052690(param_2 + 0x168,&puStack_d0);
    puVar5 = param_2;
    FUN_10a0051e8(param_2,0x19,2,0x13c,0xffffffff,0xffffffff);
    if (((ulong)puVar5 & 1) == 0) {
      ppuStack_e0 = &PTR_DAT_110bbab00;
      uStack_d8 = 0;
      puStack_d0 = (undefined *)((ulong)puStack_d0 & 0xffffffffffffff00);
      uStack_c0 = uStack_c0 & 0xffffffffffffff00;
      func_0x0001098949cc(param_2,&DAT_10f3b5d28,&ppuStack_e0,&puStack_d0);
    }
    puVar5 = param_2;
    FUN_10a0051e8(param_2,0x19,0x100,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)puVar5 & 1) == 0) {
      FUN_10a0605c4(param_2,"latitude",FUN_10a2a79a0,0);
    }
    puVar5 = param_2;
    FUN_10a0051e8(param_2,0x19,0x100,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)puVar5 & 1) == 0) {
      FUN_10a0605c4(param_2,&DAT_10f648168,FUN_10a2a7ae4,0);
    }
    puVar5 = param_2;
    FUN_10a0051e8(param_2,0x19,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)puVar5 & 1) == 0) {
      FUN_10a0605c4(param_2,&DAT_10f32ed27,FUN_10a2a7b9c,0);
    }
    puVar5 = param_2;
    FUN_10a0051e8(param_2,0x19,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)puVar5 & 1) == 0) {
      FUN_10a0605c4(param_2,&DAT_10f3b5d1e,FUN_10a2a7c7c,0);
    }
    puVar5 = param_2;
    FUN_10a0051e8(param_2,0x19,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)puVar5 & 1) == 0) {
      FUN_10a0605c4(param_2,&DAT_10f3909e3,FUN_10a2a7d70,0);
    }
    *(undefined **)(param_2 + 0x1b0) = PTR___ZTIDn_1103469e8;
    lVar8 = *(long *)(param_2 + 0x170);
    if (*(long *)(param_2 + 0x168) == lVar8) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a267e58);
      (*pcVar3)();
    }
    uStack_c8 = *(undefined8 *)(lVar8 + -0x60);
    puStack_d0 = *(undefined **)(lVar8 + -0x68);
    uStack_a8 = *(undefined8 *)(lVar8 + -0x40);
    uVar9 = *(ulong *)(lVar8 + -0x48);
    uVar10 = *(ulong *)(lVar8 + -0x50);
    uStack_c0 = *(undefined8 *)(lVar8 + -0x58);
    uStack_98 = *(undefined8 *)(lVar8 + -0x30);
    uStack_a0 = *(undefined8 *)(lVar8 + -0x38);
    uStack_90 = *(undefined8 *)(lVar8 + -0x28);
    uStack_70 = *(undefined8 *)(lVar8 + -8);
    uStack_78 = *(undefined8 *)(lVar8 + -0x10);
    uVar11 = *(ulong *)(lVar8 + -0x18);
    uStack_88 = (undefined4)*(undefined8 *)(lVar8 + -0x20);
    uStack_84 = (undefined4)((ulong)*(undefined8 *)(lVar8 + -0x20) >> 0x20);
    uStack_80 = (undefined4)uVar11;
    uStack_7c = (undefined4)(uVar11 >> 0x20);
    *(long *)(param_2 + 0x170) = lVar8 + -0x68;
    uStack_b8._4_4_ = (undefined4)(uVar10 >> 0x20);
    uVar1 = uStack_b8._4_4_;
    uStack_b0._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar2 = uStack_b0._4_4_;
    puVar5 = param_2;
    uStack_b8 = uVar10;
    uStack_b0 = uVar9;
    FUN_10a0051e8(param_2,uVar10 & 0xffffffff,uVar1,uVar11 & 0xffffffff,uVar9 & 0xffffffff,uVar2);
    if (((ulong)puVar5 & 1) == 0) {
      func_0x000109894f40(param_2,0);
      FUN_10a054234(param_2,&puStack_d0,param_2 + 0x1b8,&DAT_10f3b5d28,0x10);
      FUN_10a05431c(param_2);
    }
    return;
  }
  uVar10 = puVar6[-1];
  if (uVar9 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar9;
    puVar4 = param_1;
    if (uVar9 == 0) goto LAB_10a267b80;
  }
  else {
    puVar6 = (ulong *)0x19;
    if ((uVar9 | 7) != 0x17) {
      puVar6 = (ulong *)((uVar9 | 7) + 1);
    }
    puVar4 = puVar6;
    __Znwm();
    param_1[1] = uVar9;
    param_1[2] = (ulong)puVar6 | 0x8000000000000000;
    *param_1 = (ulong)puVar4;
  }
  _memmove(puVar4,uVar10,uVar9);
  param_1 = puVar4;
LAB_10a267b80:
  *(undefined1 *)((long)param_1 + uVar9) = 0;
  return;
}



/* Entry: 10a267e58; end: 10a267eb3;  */

undefined8 * FUN_10a267e58(undefined8 *param_1)

{
  if ((*(char *)(param_1 + 0xb) == '\x01') && (*(char *)((long)param_1 + 0x57) < '\0')) {
    __ZdlPv(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a267eb4; end: 10a26841f;  */

void FUN_10a267eb4(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bbac50;
  if (*(char *)(param_1 + 0x1cf) < '\0') {
    *(undefined8 *)(param_1 + 0x1c0) = 0x11;
    puVar6 = *(undefined8 **)(param_1 + 0x1b8);
  }
  else {
    *(undefined1 *)(param_1 + 0x1cf) = 0x11;
    puVar6 = (undefined8 *)(param_1 + 0x1b8);
  }
  *(undefined2 *)(puVar6 + 2) = 0x6f;
  puVar6[1] = 0x666e49736978416e;
  *puVar6 = 0x6f69746169726156;
  uStack_98 = 0;
  uStack_90 = 0;
  puStack_a0 = &UNK_10f648bcc;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x174;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x00010a052690(param_1 + 0x168,&puStack_a0);
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bbac50;
    uStack_a8 = 0;
    puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    func_0x0001098949cc(param_1,&UNK_10f648bcc,&ppuStack_b0,&puStack_a0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2681c0;
    FUN_10a054dac(param_1,&DAT_10f648172,FUN_10a2a8460,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a0605c4(param_1,"tag",FUN_10a2a86c8,0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f68f148,FUN_10a2a8778,0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f3c8c84,FUN_10a2a8828,0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f3c8c2e,FUN_10a2a88e4,0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f3c8c7b,FUN_10a2a89a0,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_98 = *(undefined8 *)(lVar1 + -0x60);
    puStack_a0 = *(undefined **)(lVar1 + -0x68);
    uStack_78 = *(undefined8 *)(lVar1 + -0x40);
    uVar7 = *(ulong *)(lVar1 + -0x48);
    uVar8 = *(ulong *)(lVar1 + -0x50);
    uStack_90 = *(undefined8 *)(lVar1 + -0x58);
    uStack_68 = *(undefined8 *)(lVar1 + -0x30);
    uStack_70 = *(undefined8 *)(lVar1 + -0x38);
    uStack_58 = *(undefined8 *)(lVar1 + -0x20);
    uStack_60 = *(undefined8 *)(lVar1 + -0x28);
    uStack_40 = *(undefined8 *)(lVar1 + -8);
    uStack_48 = *(undefined8 *)(lVar1 + -0x10);
    uStack_50 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar2 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar3 = uStack_80._4_4_;
    uVar5 = param_1;
    uStack_88 = uVar8;
    uStack_80 = uVar7;
    FUN_10a0051e8(param_1,uVar8 & 0xffffffff,uVar2,uStack_50 & 0xffffffff,uVar7 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&puStack_a0,(undefined8 *)(param_1 + 0x1b8),&UNK_10f648bcc,0x11);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a2681c0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2681c4);
  (*pcVar4)();
}



/* Entry: 10a268420; end: 10a26851b;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a268420(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    lVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar2;
    param_1[2] = param_2[2];
    return;
  }
  lVar2 = *param_2;
  uVar1 = param_2[1];
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



/* Entry: 10a26851c; end: 10a2688bf;  */

void FUN_10a26851c(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb9a90;
  if (*(char *)(param_1 + 0x1cf) < '\0') {
    *(undefined8 *)(param_1 + 0x1c0) = 7;
    puVar6 = *(undefined4 **)(param_1 + 0x1b8);
  }
  else {
    *(undefined1 *)(param_1 + 0x1cf) = 7;
    puVar6 = (undefined4 *)(param_1 + 0x1b8);
  }
  *(undefined4 *)((long)puVar6 + 3) = 0x72656874;
  *puVar6 = 0x74616557;
  *(undefined1 *)((long)puVar6 + 7) = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  puStack_a0 = &DAT_10f3507df;
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
  func_0x00010a052690(param_1 + 0x168,&puStack_a0);
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bb9a90;
    uStack_a8 = 0;
    puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    func_0x0001098949cc(param_1,&DAT_10f3507df,&ppuStack_b0,&puStack_a0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f64817b,FUN_10a2a91c0,0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f648190,FUN_10a2a9318,0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f6481a8,FUN_10a2a93d4,0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6481b9,FUN_10a2a9490,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_98 = *(undefined8 *)(lVar1 + -0x60);
    puStack_a0 = *(undefined **)(lVar1 + -0x68);
    uStack_78 = *(undefined8 *)(lVar1 + -0x40);
    uVar7 = *(ulong *)(lVar1 + -0x48);
    uVar8 = *(ulong *)(lVar1 + -0x50);
    uStack_90 = *(undefined8 *)(lVar1 + -0x58);
    uStack_68 = *(undefined8 *)(lVar1 + -0x30);
    uStack_70 = *(undefined8 *)(lVar1 + -0x38);
    uStack_60 = *(undefined8 *)(lVar1 + -0x28);
    uStack_40 = *(undefined8 *)(lVar1 + -8);
    uStack_48 = *(undefined8 *)(lVar1 + -0x10);
    uVar9 = *(ulong *)(lVar1 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar1 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar1 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar9;
    uStack_4c = (undefined4)(uVar9 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar2 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar3 = uStack_80._4_4_;
    uVar5 = param_1;
    uStack_88 = uVar8;
    uStack_80 = uVar7;
    FUN_10a0051e8(param_1,uVar8 & 0xffffffff,uVar2,uVar9 & 0xffffffff,uVar7 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&puStack_a0,(undefined4 *)(param_1 + 0x1b8),&DAT_10f3507df,7);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2687b0);
  (*pcVar4)();
}



/* Entry: 10a2688c0; end: 10a268997;  */

/* WARNING: Removing unreachable block (ram,0x00010a268958) */

undefined1  [16] FUN_10a2688c0(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f648bf0,0xd);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a2a9570(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a268998; end: 10a268a9f;  */

undefined8 * FUN_10a268998(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 uStack_31;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110bb6630;
  param_1[2] = 0;
  param_1[3] = param_2;
  FUN_10a05a5d4(param_1 + 4,&uStack_31);
  param_1[7] = 0;
  param_1[6] = param_1 + 7;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = param_1 + 10;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  *puVar1 = &PTR_FUN_110bb9b28;
  puVar1[2] = puVar1 + 2;
  puVar1[3] = puVar1 + 2;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 9) = 0x3f800000;
  *(undefined4 *)(puVar1 + 1) = 0xf0;
  *(undefined1 *)(puVar1 + 10) = 0;
  param_1[0xc] = puVar1;
  param_1[0xd] = 0x32aaaba7;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  return param_1;
}



/* Entry: 10a268aa0; end: 10a268b67;  */

undefined8 * FUN_10a268aa0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = param_1 + 10;
  func_0x00010a2aaee8(param_1 + 9,*puVar2);
  param_1[9] = puVar2;
  *puVar2 = 0;
  puVar2 = param_1 + 7;
  param_1[0xb] = 0;
  func_0x00010a2aaea0(param_1 + 6,*puVar2);
  *puVar2 = 0;
  param_1[8] = 0;
  param_1[6] = puVar2;
  lVar3 = param_1[0xc];
  func_0x00010a2aa3e0(lVar3 + 0x28);
  func_0x000107c31960(lVar3 + 0x10);
  __ZNSt3__15mutexD1Ev(param_1 + 0xd);
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x00010a2aaee8(param_1 + 9,param_1[10]);
  func_0x00010a2aaea0(param_1 + 6,param_1[7]);
  func_0x00010a05a86c(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a268b68; end: 10a268b6b;  */

undefined8 * FUN_10a268b68(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = param_1 + 10;
  func_0x00010a2aaee8(param_1 + 9,*puVar2);
  param_1[9] = puVar2;
  *puVar2 = 0;
  puVar2 = param_1 + 7;
  param_1[0xb] = 0;
  func_0x00010a2aaea0(param_1 + 6,*puVar2);
  *puVar2 = 0;
  param_1[8] = 0;
  param_1[6] = puVar2;
  lVar3 = param_1[0xc];
  func_0x00010a2aa3e0(lVar3 + 0x28);
  func_0x000107c31960(lVar3 + 0x10);
  __ZNSt3__15mutexD1Ev(param_1 + 0xd);
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x00010a2aaee8(param_1 + 9,param_1[10]);
  func_0x00010a2aaea0(param_1 + 6,param_1[7]);
  func_0x00010a05a86c(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a268b6c; end: 10a268b7f;  */

void FUN_10a268b6c(void)

{
  FUN_10a268aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a268b80; end: 10a268e43;  */

void FUN_10a268b80(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,long *param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  char cStack_60;
  
  uVar5 = param_4[1];
  lVar7 = param_4[1];
  lVar6 = *param_4;
  puVar8 = (undefined8 *)(param_2 + 0x38);
  puVar4 = (undefined8 *)*puVar8;
  do {
    puVar9 = puVar8;
    if (puVar4 == (undefined8 *)0x0) {
LAB_10a268c00:
      puVar4 = (undefined8 *)0x30;
      __Znwm();
      puVar4[5] = lVar7;
      puVar4[4] = lVar6;
      if (uVar5 != 0) {
        plVar3 = (long *)(uVar5 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = puVar8;
      *puVar9 = puVar4;
      if (**(long **)(param_2 + 0x30) != 0) {
        *(long *)(param_2 + 0x30) = **(long **)(param_2 + 0x30);
        puVar4 = (undefined8 *)*puVar9;
      }
      func_0x000107c2b058(*(undefined8 *)(param_2 + 0x38),puVar4);
      *(long *)(param_2 + 0x40) = *(long *)(param_2 + 0x40) + 1;
LAB_10a268c64:
      FUN_10a2ab4f0(param_2 + 0x48,param_5,param_5);
      lVar6 = param_4[1];
      lStack_90 = param_4[1];
      lStack_98 = *param_4;
      if (lVar6 != 0) {
        plVar3 = (long *)(lVar6 + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      lVar7 = param_5[1];
      lStack_80 = param_5[1];
      lStack_88 = *param_5;
      if (lVar7 != 0) {
        plVar3 = (long *)(lVar7 + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (lVar6 != 0) {
        plVar3 = (long *)(lVar6 + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (lVar7 != 0) {
        plVar3 = (long *)(lVar7 + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      lStack_a0 = param_2;
      FUN_10a1ccb30(auStack_78,param_3);
      *param_1 = FUN_10a2ab618;
      param_1[1] = &PTR_DAT_110bb9b90;
      plVar3 = (long *)0x48;
      __Znwm();
      plVar3[1] = lStack_98;
      *plVar3 = lStack_a0;
      plVar3[2] = lStack_90;
      *(undefined8 *)((ulong)&lStack_a0 | 8) = 0;
      ((undefined8 *)((ulong)&lStack_a0 | 8))[1] = 0;
      plVar3[4] = lStack_80;
      plVar3[3] = lStack_88;
      lStack_88 = 0;
      lStack_80 = 0;
      FUN_10a1ccb30(plVar3 + 5,auStack_78);
      param_1[2] = plVar3;
      if ((cStack_60 == '\x01') && (cStack_61 < '\0')) {
        __ZdlPv(auStack_78[0]);
      }
      if (lStack_80 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (lStack_90 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (lVar7 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(lVar7);
      }
      if (lVar6 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(lVar6);
      }
      return;
    }
    while (puVar8 = puVar4, (ulong)puVar8[5] <= uVar5) {
      if (uVar5 <= (ulong)puVar8[5]) goto LAB_10a268c64;
      puVar4 = (undefined8 *)puVar8[1];
      if ((undefined8 *)puVar8[1] == (undefined8 *)0x0) {
        puVar9 = puVar8 + 1;
        goto LAB_10a268c00;
      }
    }
    puVar4 = (undefined8 *)*puVar8;
  } while( true );
}



/* Entry: 10a268e44; end: 10a269207;  */

undefined *** FUN_10a268e44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined ***pppuVar9;
  undefined8 in_x7;
  long *plVar10;
  long lVar11;
  long *plStack_1f0;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined **ppuStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  long alStack_188 [7];
  undefined8 uStack_150;
  undefined1 auStack_148 [80];
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_b8;
  long *plStack_b0;
  undefined1 auStack_a8 [56];
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1b8 = &PTR_DAT_110b1ba40;
  uStack_1b0 = 0;
  lStack_1a0 = 0;
  uStack_1a8 = 1;
  lVar5 = 0;
  func_0x0001098d2f00();
  *(undefined8 *)(lVar5 + 0x10) = param_1;
  *(undefined8 *)(lVar5 + 0x18) = param_2;
  lStack_1a0 = lVar5;
  FUN_10a3bf120(auStack_148);
  FUN_10a3bf4bc(&puStack_198,&ppuStack_1b8);
  lVar11 = *(long *)(*(long *)(param_3 + 0x18) + 0x100);
  FUN_10a00ce20(&uStack_1e0,*(undefined8 *)(param_3 + 0x20),param_4);
  plVar6 = (long *)0x138;
  __Znwm();
  puStack_b8 = puStack_198;
  plVar10 = plVar6 + 1;
  *plVar10 = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110b9f3b0;
  plVar1 = plVar6 + 3;
  puStack_198 = (undefined8 *)0x0;
  plStack_b0 = (long *)uStack_190;
  (**(code **)(alStack_188[0] + 0x10))(auStack_a8,alStack_188);
  uStack_70 = uStack_150;
  uVar2 = *(ulong *)(lVar11 + 0x210);
  lVar5 = *(long *)(lVar11 + 0x208);
  if (-1 < (char)*(byte *)(lVar11 + 0x21f)) {
    uVar2 = (ulong)*(byte *)(lVar11 + 0x21f);
    lVar5 = lVar11 + 0x208;
  }
  uStack_f8 = 0x10a05c39c;
  ppuStack_f0 = &PTR_FUN_110b9f370;
  uStack_e8 = uStack_1e0;
  uStack_d8 = uStack_1d0;
  uStack_e0 = uStack_1d8;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  FUN_10a23708c(plVar1,&UNK_10e4a23a8,0x2b,&UNK_10f647b45,3,&puStack_b8,0,in_x7,lVar5,uVar2,
                &uStack_f8);
  (*(code *)*ppuStack_f0)(&ppuStack_f0);
  FUN_10a042634(&puStack_b8);
  plStack_1c8 = plVar1;
  plStack_1c0 = plVar6;
  func_0x00010a05c07c(&uStack_1e0);
  FUN_10a042634(&puStack_198);
  plVar7 = *(long **)(*(long *)(*(long *)(param_3 + 0x18) + 0x100) + 0x1c8);
  (**(code **)(*plVar7 + 0x60))();
  puStack_b8 = (undefined8 *)0x0;
  plStack_b0 = (long *)0x0;
  plVar8 = (long *)plVar7[1];
  if (((plVar8 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b0 = plVar8, plVar8 == (long *)0x0)) ||
     (puStack_b8 = (undefined8 *)*plVar7, puStack_b8 == (undefined8 *)0x0)) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f648219,&UNK_10f648256,0x3c,&UNK_10f647be2);
    }
  }
  else {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plStack_1f0 = plVar1;
    plStack_1e8 = plVar6;
    (**(code **)*puStack_b8)(puStack_b8,&plStack_1f0);
    plVar1 = plStack_1e8;
    if (plStack_1e8 != (long *)0x0) {
      plVar6 = plStack_1e8 + 1;
      do {
        lVar5 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  plVar1 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    plVar6 = plStack_b0 + 1;
    do {
      lVar5 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_1c0;
  if (plStack_1c0 != (long *)0x0) {
    plVar6 = plStack_1c0 + 1;
    do {
      lVar5 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_10a042634(auStack_148);
  pppuVar9 = &ppuStack_1b8;
  func_0x0001098ddaec();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar9;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&plStack_1f0);
  func_0x00010a05a8c4(&puStack_b8);
  FUN_10a05bd88(&plStack_1c8);
  FUN_10a042634(auStack_148);
  func_0x0001098ddaec(&ppuStack_1b8);
  __Unwind_Resume();
  if ((*(char *)(pppuVar9 + 8) == '\x01') && (*(char *)((long)pppuVar9 + 0x3f) < '\0')) {
    __ZdlPv(pppuVar9[5]);
  }
  if (pppuVar9[4] != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (pppuVar9[2] != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return pppuVar9;
}



/* Entry: 10a269208; end: 10a2695f3;  */

long FUN_10a269208(long param_1)

{
  if ((*(char *)(param_1 + 0x40) == '\x01') && (*(char *)(param_1 + 0x3f) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a2695f4; end: 10a269683;  */

undefined8 FUN_10a2695f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10a269684; end: 10a269cdb;  */

undefined8 * FUN_10a269684(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a269cdc; end: 10a269cdf;  */

undefined8 * FUN_10a269cdc(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bb6310;
  func_0x00010a26df2c(param_1 + 0x26,0);
  if (param_1[0x22] != 0) {
    param_1[0x23] = param_1[0x22];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x1e;
  FUN_10a26e034(&puStack_28);
  puStack_28 = param_1 + 0x1b;
  FUN_10a26e034(&puStack_28);
  puStack_28 = param_1 + 0x18;
  FUN_10a26e034(&puStack_28);
  puStack_28 = param_1 + 0x15;
  FUN_10a26e034(&puStack_28);
  puStack_28 = param_1 + 0x11;
  func_0x00010a26e0a4(&puStack_28);
  puStack_28 = param_1 + 0xe;
  func_0x00010a26e0a4(&puStack_28);
  puStack_28 = param_1 + 0xb;
  func_0x00010a26e0a4(&puStack_28);
  puStack_28 = param_1 + 8;
  func_0x00010a26e0a4(&puStack_28);
  return param_1;
}



/* Entry: 10a269ce0; end: 10a269cf3;  */

void FUN_10a269ce0(void)

{
  FUN_10a2abe4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a269cf4; end: 10a269cfb;  */

void FUN_10a269cf4(void)

{
  return;
}



/* Entry: 10a269cfc; end: 10a269de3;  */

undefined8 * FUN_10a269cfc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(param_1 + 3,param_2[3],param_2[4]);
  }
  else {
    uVar6 = param_2[4];
    uVar5 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar6;
    param_1[3] = uVar5;
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  FUN_10a274fd4(param_1 + 8,param_2 + 8);
  lVar4 = param_2[0xe];
  uVar5 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar5;
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
  *(undefined1 *)(param_1 + 0xf) = 1;
  return param_1;
}



/* Entry: 10a269de4; end: 10a269e8f;  */

undefined4 * FUN_10a269de4(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_39 [9];
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  FUN_10a269e90(param_1 + 2,*(long *)(param_2 + 2),*(long *)(param_2 + 4),
                (*(long *)(param_2 + 4) - *(long *)(param_2 + 2) >> 3) * 0x6db6db6db6db6db7);
  uVar3 = *(undefined8 *)(param_2 + 10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar5 = *(undefined8 *)(param_2 + 0xe);
  uVar4 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 10) = uVar3;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0xe) = uVar5;
  *(undefined8 *)(param_1 + 0xc) = uVar4;
  puVar1 = auStack_39;
  FUN_10ab70918(puVar1,param_1);
  *(undefined1 **)(param_1 + 0x12) = puVar1;
  return param_1;
}



/* Entry: 10a269e90; end: 10a269f13;  */

void FUN_10a269e90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    func_0x00010a1905d4(param_1,param_4);
    lVar1 = param_1;
    FUN_10a190620(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a269f14; end: 10a269f6f;  */

void FUN_10a269f14(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x48) = param_2;
  FUN_10a049858(param_1);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 8);
  return;
}



/* Entry: 10a269f70; end: 10a269fcb;  */

long FUN_10a269f70(long param_1,long param_2)

{
  code *pcVar1;
  
  if (param_1 != param_2) {
    if (3 < (ulong)*(byte *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a269fcc);
      (*pcVar1)();
    }
    (*(code *)(&PTR_FUN_110bbab80)[*(byte *)(param_1 + 0x18)])(param_1);
    func_0x00010a26a000(param_1,param_2);
  }
  return param_1;
}



/* Entry: 10a269fcc; end: 10a26a073;  */

void FUN_10a269fcc(undefined8 *param_1)

{
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a26a074; end: 10a26a10f;  */

void FUN_10a26a074(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    FUN_10a26a110(param_1,param_4);
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



/* Entry: 10a26a110; end: 10a26a147;  */

undefined1  [16] FUN_10a26a110(long *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_2 >> 0x3c == 0) {
    plVar6 = param_1;
    FUN_10a26a15c();
    *param_1 = (long)plVar6;
    param_1[1] = (long)plVar6;
    param_1[2] = (long)(plVar6 + param_2 * 2);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = plVar6;
    return auVar7;
  }
  FUN_10a26a148();
  puVar4 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar5 = param_2 << 4;
    __Znwm(lVar5);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar5;
    return auVar8;
  }
  func_0x000109ffded8();
  plVar6 = *(long **)(puVar4 + 8);
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
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = puVar4;
  return auVar9;
}



/* Entry: 10a26a148; end: 10a26a15b;  */

undefined1  [16] FUN_10a26a148(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar4 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar5 = param_2 << 4;
    __Znwm(lVar5);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
  func_0x000109ffded8();
  plVar6 = *(long **)(puVar4 + 8);
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
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = puVar4;
  return auVar8;
}



/* Entry: 10a26a15c; end: 10a26a1e7;  */

undefined1  [16] FUN_10a26a15c(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar4 = param_2 << 4;
    __Znwm(lVar4);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar4;
    return auVar6;
  }
  func_0x000109ffded8();
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
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 10a26a1e8; end: 10a26a257;  */

void FUN_10a26a1e8(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a26a190();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a26a258; end: 10a26a2af;  */

undefined1 * FUN_10a26a258(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x40] = 0;
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_10a26a2b0(param_1);
    param_1[0x40] = 1;
  }
  return param_1;
}



/* Entry: 10a26a2b0; end: 10a26a30b;  */

long FUN_10a26a2b0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10a1ccb30();
  FUN_10a1ccb30(lVar1 + 0x20,param_2 + 0x20);
  return param_1;
}



/* Entry: 10a26a30c; end: 10a26a3c7;  */

undefined8 * FUN_10a26a30c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    if ((*(char *)(param_1 + 7) == '\x01') && (*(char *)((long)param_1 + 0x37) < '\0')) {
      __ZdlPv(param_1[4]);
    }
    if ((*(char *)(param_1 + 3) == '\x01') && (*(char *)((long)param_1 + 0x17) < '\0')) {
      __ZdlPv(*param_1);
    }
  }
  return param_1;
}



/* Entry: 10a26a3c8; end: 10a26a457;  */

void FUN_10a26a3c8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined1 *)(param_1 + 0x77) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(undefined1 *)(param_1 + 0x96) = 0;
  *(undefined1 *)(param_1 + 0x9f) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = NEON_fmov(0xbf800000,4);
  param_1[3] = uVar1;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)((long)param_1 + 0x22) = 0;
  return;
}



/* Entry: 10a26a458; end: 10a26a62b;  */

undefined8 * FUN_10a26a458(undefined8 *param_1)

{
  code *pcVar1;
  
  if ((ulong)*(byte *)(param_1 + 0xa9) < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0xa9)])(param_1 + 0xa1);
    if ((ulong)*(byte *)(param_1 + 0x9f) < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x9f)])(param_1 + 0x97);
      if ((ulong)*(byte *)(param_1 + 0x95) < 4) {
        (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x95)])(param_1 + 0x8d);
        if ((ulong)*(byte *)(param_1 + 0x8b) < 4) {
          (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x8b)])(param_1 + 0x83);
          if ((ulong)*(byte *)(param_1 + 0x81) < 4) {
            (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x81)])(param_1 + 0x79);
            if ((ulong)*(byte *)(param_1 + 0x77) < 4) {
              (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x77)])(param_1 + 0x6f);
              if ((ulong)*(byte *)(param_1 + 0x6d) < 4) {
                (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x6d)])(param_1 + 0x65);
                if ((ulong)*(byte *)(param_1 + 99) < 4) {
                  (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 99)])(param_1 + 0x5b);
                  if ((ulong)*(byte *)(param_1 + 0x59) < 4) {
                    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x59)])(param_1 + 0x51);
                    if ((ulong)*(byte *)(param_1 + 0x4f) < 4) {
                      (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x4f)])(param_1 + 0x47);
                      if ((ulong)*(byte *)(param_1 + 0x45) < 4) {
                        (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x45)])(param_1 + 0x3d);
                        if ((ulong)*(byte *)(param_1 + 0x3b) < 4) {
                          (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x3b)])(param_1 + 0x33)
                          ;
                          if ((ulong)*(byte *)(param_1 + 0x31) < 4) {
                            (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x31)])
                                      (param_1 + 0x29);
                            if ((ulong)*(byte *)(param_1 + 0x28) < 4) {
                              (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x28)])
                                        (param_1 + 0x20);
                              if ((ulong)*(byte *)(param_1 + 0x1f) < 4) {
                                (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x1f)])
                                          (param_1 + 0x17);
                                if ((ulong)*(byte *)(param_1 + 0x16) < 4) {
                                  (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x16)])
                                            (param_1 + 0xe);
                                  if ((ulong)*(byte *)(param_1 + 0xd) < 4) {
                                    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0xd)])
                                              (param_1 + 5);
                                    if (*(char *)((long)param_1 + 0x17) < '\0') {
                                      __ZdlPv(*param_1);
                                    }
                                    return param_1;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a26a62c);
  (*pcVar1)();
}



/* Entry: 10a26a62c; end: 10a26a673;  */

undefined8 FUN_10a26a62c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm(0x18);
  FUN_10a26a674();
  return uVar1;
}



/* Entry: 10a26a674; end: 10a26a70f;  */

/* WARNING: Possible PIC construction at 0x00010a26a818: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a26a81c) */

undefined1  [16] FUN_10a26a674(ulong *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 **ppuVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 *puStack_d0;
  ulong *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined1 auStack_a0 [8];
  ulong *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  puVar8 = (undefined8 *)param_2[1];
  if ((undefined8 *)0x7ffffffffffffff7 < puVar8) {
    func_0x000109ffde50();
    ppuVar1 = (undefined8 **)auStack_a0;
    pcStack_48 = FUN_10a26a710;
    ppuVar11 = &puStack_50;
    lVar10 = param_1[1] - *param_1;
    uVar6 = (lVar10 >> 4) * 0x6db6db6db6db6db7 + 1;
    puStack_50 = &stack0xfffffffffffffff0;
    if (uVar6 < 0x24924924924924a) {
      lVar4 = (long)(param_1[2] - *param_1) >> 4;
      uVar7 = lVar4 * -0x2492492492492492;
      if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
        uVar7 = uVar6;
      }
      if (0x124924924924923 < (ulong)(lVar4 * 0x6db6db6db6db6db7)) {
        uVar7 = 0x249249249249249;
      }
      puStack_78 = param_1;
      if (uVar7 == 0) {
        puVar2 = (ulong *)0x0;
      }
      else {
        puVar2 = param_1;
        FUN_10a26a880();
      }
      puStack_90 = (undefined8 *)((long)puVar2 + lVar10);
      puStack_80 = puVar2 + uVar7 * 0xe;
      uVar12 = param_2[3];
      uVar5 = param_2[2];
      uVar14 = param_2[5];
      uVar13 = param_2[4];
      uVar15 = param_2[6];
      uVar17 = param_2[9];
      uVar16 = param_2[8];
      puStack_90[7] = param_2[7];
      puStack_90[6] = uVar15;
      puStack_90[9] = uVar17;
      puStack_90[8] = uVar16;
      puStack_90[5] = uVar14;
      puStack_90[4] = uVar13;
      uVar13 = *param_2;
      puStack_90[1] = param_2[1];
      *puStack_90 = uVar13;
      puStack_90[3] = uVar12;
      puStack_90[2] = uVar5;
      uVar5 = param_2[10];
      puStack_90[0xb] = param_2[0xb];
      puStack_90[10] = uVar5;
      param_2[10] = 0;
      param_2[0xb] = 0;
      uVar5 = param_2[0xc];
      *(undefined4 *)(puStack_90 + 0xd) = *(undefined4 *)(param_2 + 0xd);
      puStack_90[0xc] = uVar5;
      puVar8 = puStack_90 + 0xe;
      param_2 = (long *)*param_1;
      param_3 = (undefined8 *)param_1[1];
      param_4 = (undefined8 *)((long)puStack_90 + ((long)param_2 - (long)param_3));
      uVar5 = 0x10a26a81c;
      puVar3 = param_1;
      puStack_98 = puVar2;
      puStack_88 = puVar8;
    }
    else {
      FUN_10a26a86c();
      func_0x00010a26a94c(&puStack_98);
      __Unwind_Resume(param_1);
      pcStack_a8 = FUN_10a26a86c;
      puVar3 = (ulong *)&DAT_10f62a4d8;
      ppuStack_b0 = ppuVar11;
      FUN_109ffde64(&DAT_10f62a4d8);
      ppuVar1 = &puStack_d0;
      pcStack_b8 = FUN_10a26a880;
      ppuVar11 = &puStack_c0;
      puStack_d0 = puVar8;
      puStack_c8 = param_1;
      if (param_2 < (undefined8 *)0x24924924924924a) {
        lVar10 = (long)param_2 * 0x70;
        puStack_c0 = (undefined1 *)&ppuStack_b0;
        __Znwm(lVar10);
        auVar19._8_8_ = param_2;
        auVar19._0_8_ = lVar10;
        return auVar19;
      }
      uVar5 = 0x10a26a8c8;
      puStack_c0 = (undefined1 *)&ppuStack_b0;
      func_0x000109ffded8();
    }
    if (param_2 != param_3) {
      *(undefined8 **)((long)ppuVar1 + -0x20) = puVar8;
      *(ulong **)((long)ppuVar1 + -0x18) = param_1;
      *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar11;
      *(undefined8 *)((long)ppuVar1 + -8) = uVar5;
      puVar8 = param_2;
      do {
        uVar5 = *puVar8;
        param_4[1] = puVar8[1];
        *param_4 = uVar5;
        uVar12 = puVar8[3];
        uVar5 = puVar8[2];
        uVar14 = puVar8[5];
        uVar13 = puVar8[4];
        uVar15 = puVar8[6];
        uVar17 = puVar8[9];
        uVar16 = puVar8[8];
        param_4[7] = puVar8[7];
        param_4[6] = uVar15;
        param_4[9] = uVar17;
        param_4[8] = uVar16;
        param_4[3] = uVar12;
        param_4[2] = uVar5;
        param_4[5] = uVar14;
        param_4[4] = uVar13;
        uVar5 = puVar8[10];
        param_4[0xb] = puVar8[0xb];
        param_4[10] = uVar5;
        puVar8[10] = 0;
        puVar8[0xb] = 0;
        uVar5 = puVar8[0xc];
        *(undefined4 *)(param_4 + 0xd) = *(undefined4 *)(puVar8 + 0xd);
        param_4[0xc] = uVar5;
        puVar8 = puVar8 + 0xe;
        param_4 = param_4 + 0xe;
        puVar9 = param_2;
      } while (puVar8 != param_3);
      do {
        puVar3 = puVar9 + 10;
        FUN_10a1d37cc(puVar3);
        puVar9 = puVar9 + 0xe;
      } while (puVar9 != param_3);
    }
    auVar20._8_8_ = param_2;
    auVar20._0_8_ = puVar3;
    return auVar20;
  }
  lVar10 = *param_2;
  if (puVar8 < (undefined8 *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar8;
    puVar2 = param_1;
    if (puVar8 == (undefined8 *)0x0) goto LAB_10a26a6f0;
  }
  else {
    puVar3 = (ulong *)0x19;
    if (((ulong)puVar8 | 7) != 0x17) {
      puVar3 = (ulong *)(((ulong)puVar8 | 7) + 1);
    }
    puVar2 = puVar3;
    __Znwm();
    param_1[1] = (ulong)puVar8;
    param_1[2] = (ulong)puVar3 | 0x8000000000000000;
    *param_1 = (ulong)puVar2;
  }
  _memmove(puVar2,lVar10,puVar8);
  param_2 = (long *)lVar10;
LAB_10a26a6f0:
  *(undefined1 *)((long)puVar2 + (long)puVar8) = 0;
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = param_1;
  return auVar18;
}



/* Entry: 10a26a710; end: 10a26a86b;  */

/* WARNING: Possible PIC construction at 0x00010a26a818: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a26a81c) */

void FUN_10a26a710(ulong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *unaff_x20;
  long lVar8;
  undefined1 **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  ulong *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  ulong *puStack_40;
  ulong *puStack_38;
  
  puVar1 = auStack_60;
  ppuVar9 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar8 = param_1[1] - *param_1;
  uVar6 = (lVar8 >> 4) * 0x6db6db6db6db6db7 + 1;
  if (uVar6 < 0x24924924924924a) {
    lVar4 = (long)(param_1[2] - *param_1) >> 4;
    uVar7 = lVar4 * -0x2492492492492492;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0x124924924924923 < (ulong)(lVar4 * 0x6db6db6db6db6db7)) {
      uVar7 = 0x249249249249249;
    }
    puStack_38 = param_1;
    if (uVar7 == 0) {
      puVar2 = (ulong *)0x0;
    }
    else {
      puVar2 = param_1;
      FUN_10a26a880();
    }
    puStack_50 = (undefined8 *)((long)puVar2 + lVar8);
    puStack_40 = puVar2 + uVar7 * 0xe;
    uVar10 = param_2[3];
    uVar5 = param_2[2];
    uVar12 = param_2[5];
    uVar11 = param_2[4];
    uVar13 = param_2[6];
    uVar15 = param_2[9];
    uVar14 = param_2[8];
    puStack_50[7] = param_2[7];
    puStack_50[6] = uVar13;
    puStack_50[9] = uVar15;
    puStack_50[8] = uVar14;
    puStack_50[5] = uVar12;
    puStack_50[4] = uVar11;
    uVar11 = *param_2;
    puStack_50[1] = param_2[1];
    *puStack_50 = uVar11;
    puStack_50[3] = uVar10;
    puStack_50[2] = uVar5;
    uVar5 = param_2[10];
    puStack_50[0xb] = param_2[0xb];
    puStack_50[10] = uVar5;
    param_2[10] = 0;
    param_2[0xb] = 0;
    uVar5 = param_2[0xc];
    *(undefined4 *)(puStack_50 + 0xd) = *(undefined4 *)(param_2 + 0xd);
    puStack_50[0xc] = uVar5;
    unaff_x20 = puStack_50 + 0xe;
    param_2 = (undefined8 *)*param_1;
    param_3 = (undefined8 *)param_1[1];
    param_4 = (undefined8 *)((long)puStack_50 + ((long)param_2 - (long)param_3));
    uVar5 = 0x10a26a81c;
    puStack_58 = puVar2;
    puStack_48 = unaff_x20;
  }
  else {
    FUN_10a26a86c();
    func_0x00010a26a94c(&puStack_58);
    __Unwind_Resume(param_1);
    pcStack_68 = FUN_10a26a86c;
    ppuStack_70 = ppuVar9;
    FUN_109ffde64(&DAT_10f62a4d8);
    puVar1 = &stack0xffffffffffffff70;
    pcStack_78 = FUN_10a26a880;
    ppuVar9 = &puStack_80;
    if (param_2 < (undefined8 *)0x24924924924924a) {
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm((long)param_2 * 0x70);
      return;
    }
    uVar5 = 0x10a26a8c8;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000109ffded8();
  }
  if (param_2 != param_3) {
    *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
    *(ulong **)(puVar1 + -0x18) = param_1;
    *(undefined1 ***)(puVar1 + -0x10) = ppuVar9;
    *(undefined8 *)(puVar1 + -8) = uVar5;
    puVar3 = param_2;
    do {
      uVar5 = *puVar3;
      param_4[1] = puVar3[1];
      *param_4 = uVar5;
      uVar10 = puVar3[3];
      uVar5 = puVar3[2];
      uVar12 = puVar3[5];
      uVar11 = puVar3[4];
      uVar13 = puVar3[6];
      uVar15 = puVar3[9];
      uVar14 = puVar3[8];
      param_4[7] = puVar3[7];
      param_4[6] = uVar13;
      param_4[9] = uVar15;
      param_4[8] = uVar14;
      param_4[3] = uVar10;
      param_4[2] = uVar5;
      param_4[5] = uVar12;
      param_4[4] = uVar11;
      uVar5 = puVar3[10];
      param_4[0xb] = puVar3[0xb];
      param_4[10] = uVar5;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      uVar5 = puVar3[0xc];
      *(undefined4 *)(param_4 + 0xd) = *(undefined4 *)(puVar3 + 0xd);
      param_4[0xc] = uVar5;
      puVar3 = puVar3 + 0xe;
      param_4 = param_4 + 0xe;
    } while (puVar3 != param_3);
    do {
      FUN_10a1d37cc(param_2 + 10);
      param_2 = param_2 + 0xe;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 10a26a86c; end: 10a26a87f;  */

void FUN_10a26a86c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if ((undefined8 *)0x249249249249249 < param_2) {
    func_0x000109ffded8();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar2 = *puVar1;
        param_4[1] = puVar1[1];
        *param_4 = uVar2;
        uVar3 = puVar1[3];
        uVar2 = puVar1[2];
        uVar5 = puVar1[5];
        uVar4 = puVar1[4];
        uVar6 = puVar1[6];
        uVar8 = puVar1[9];
        uVar7 = puVar1[8];
        param_4[7] = puVar1[7];
        param_4[6] = uVar6;
        param_4[9] = uVar8;
        param_4[8] = uVar7;
        param_4[3] = uVar3;
        param_4[2] = uVar2;
        param_4[5] = uVar5;
        param_4[4] = uVar4;
        uVar2 = puVar1[10];
        param_4[0xb] = puVar1[0xb];
        param_4[10] = uVar2;
        puVar1[10] = 0;
        puVar1[0xb] = 0;
        uVar2 = puVar1[0xc];
        *(undefined4 *)(param_4 + 0xd) = *(undefined4 *)(puVar1 + 0xd);
        param_4[0xc] = uVar2;
        puVar1 = puVar1 + 0xe;
        param_4 = param_4 + 0xe;
      } while (puVar1 != param_3);
      do {
        FUN_10a1d37cc(param_2 + 10);
        param_2 = param_2 + 0xe;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x70);
  return;
}



/* Entry: 10a26a880; end: 10a26a99b;  */

void FUN_10a26a880(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((undefined8 *)0x249249249249249 < param_2) {
    func_0x000109ffded8();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar2 = *puVar1;
        param_4[1] = puVar1[1];
        *param_4 = uVar2;
        uVar3 = puVar1[3];
        uVar2 = puVar1[2];
        uVar5 = puVar1[5];
        uVar4 = puVar1[4];
        uVar6 = puVar1[6];
        uVar8 = puVar1[9];
        uVar7 = puVar1[8];
        param_4[7] = puVar1[7];
        param_4[6] = uVar6;
        param_4[9] = uVar8;
        param_4[8] = uVar7;
        param_4[3] = uVar3;
        param_4[2] = uVar2;
        param_4[5] = uVar5;
        param_4[4] = uVar4;
        uVar2 = puVar1[10];
        param_4[0xb] = puVar1[0xb];
        param_4[10] = uVar2;
        puVar1[10] = 0;
        puVar1[0xb] = 0;
        uVar2 = puVar1[0xc];
        *(undefined4 *)(param_4 + 0xd) = *(undefined4 *)(puVar1 + 0xd);
        param_4[0xc] = uVar2;
        puVar1 = puVar1 + 0xe;
        param_4 = param_4 + 0xe;
      } while (puVar1 != param_3);
      do {
        FUN_10a1d37cc(param_2 + 10);
        param_2 = param_2 + 0xe;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x70);
  return;
}



/* Entry: 10a26a99c; end: 10a26aa0f;  */

void FUN_10a26a99c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    lVar1 = plVar2[1];
    if (plVar2[1] != lVar3) {
      do {
        lVar4 = lVar1 + -0x70;
        FUN_10a1d37cc(lVar1 + -0x20);
        lVar1 = lVar4;
      } while (lVar4 != lVar3);
      lVar4 = *(long *)*param_1;
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar4);
    return;
  }
  return;
}



/* Entry: 10a26aa10; end: 10a26ab03;  */

undefined8 * FUN_10a26aa10(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10a0ca588(param_1 + 1,param_2[1],param_2[2],(long)(param_2[2] - param_2[1]) >> 2);
  param_1[4] = param_2[4];
  uVar6 = param_2[6];
  uVar5 = param_2[5];
  param_1[7] = 0;
  param_1[6] = uVar6;
  param_1[5] = uVar5;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_10a0e9a40();
  lVar4 = param_2[0xb];
  uVar5 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
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
  uVar5 = param_2[0xc];
  uVar7 = param_2[0xf];
  uVar6 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xf] = uVar7;
  param_1[0xe] = uVar6;
  uVar6 = param_2[0x13];
  uVar5 = param_2[0x12];
  uVar8 = param_2[0x15];
  uVar7 = param_2[0x14];
  uVar10 = param_2[0x17];
  uVar9 = param_2[0x16];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  param_1[0x15] = uVar8;
  param_1[0x14] = uVar7;
  param_1[0x17] = uVar10;
  param_1[0x16] = uVar9;
  param_1[0x13] = uVar6;
  param_1[0x12] = uVar5;
  uVar5 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar5;
  *(undefined1 *)(param_1 + 0x19) = 1;
  return param_1;
}



/* Entry: 10a26ab04; end: 10a26ab17;  */

long * FUN_10a26ab04(undefined8 param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  plVar6 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  uVar2 = plVar6[1];
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
    plVar6 = *(long **)(*plVar6 + uVar5 * 8);
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



/* Entry: 10a26ab18; end: 10a26abb7;  */

long * FUN_10a26ab18(long *param_1,int param_2)

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



/* Entry: 10a26abb8; end: 10a26ac47;  */

undefined8 * FUN_10a26abb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb6ac0;
  FUN_10a26ac48(param_1 + 0xd);
  FUN_10a26aca4(param_1 + 10);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10a26ac48; end: 10a26aca3;  */

long * FUN_10a26ac48(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a049e40(plVar1 + 7);
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



/* Entry: 10a26aca4; end: 10a26acff;  */

void FUN_10a26aca4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar1 = (long *)plVar1[1];
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a26ad00; end: 10a26ada3;  */

void FUN_10a26ad00(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  cVar1 = *(char *)(param_1 + 6);
  if (cVar1 == *(char *)(param_2 + 6)) {
    if (cVar1 != '\0') {
      uVar2 = param_1[3];
      uVar5 = param_1[2];
      uVar4 = param_1[1];
      uVar3 = param_2[3];
      uVar6 = param_2[1];
      param_1[2] = param_2[2];
      param_1[1] = uVar6;
      param_1[3] = uVar3;
      param_2[2] = uVar5;
      param_2[1] = uVar4;
      param_2[3] = uVar2;
      uVar2 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar2;
      return;
    }
  }
  else {
    if (cVar1 != '\0') {
      FUN_10a0f1ea0();
      *(undefined1 *)(param_1 + 6) = 0;
      return;
    }
    uVar2 = *param_2;
    *param_2 = 0;
    *param_1 = uVar2;
    uVar3 = param_2[2];
    uVar2 = param_2[1];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    param_1[1] = uVar2;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return;
}



/* Entry: 10a26ada4; end: 10a26af2f;  */

void FUN_10a26ada4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  func_0x00010a26ae98(*plVar6);
  plVar4 = (long *)*plVar6;
  *plVar6 = 0;
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,plVar6);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a26af30; end: 10a26b13b;  */

void FUN_10a26af30(char *param_1)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined **ppuVar13;
  undefined1 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  ulong uVar18;
  int iVar19;
  undefined8 uStack_48;
  
  puVar7 = PTR___tlv_bootstrap_11340d750;
  ppuVar13 = &PTR___tlv_bootstrap_11340d750;
  ppuVar9 = ppuVar13;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar10 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar9 & 1) == 0) {
    ppuVar9 = ppuVar10;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar9,0x100000000);
    (*(code *)puVar7)();
    *(undefined1 *)ppuVar13 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar16 = (undefined8 *)ppuVar10[2];
  if (puVar16 == (undefined8 *)0x0) {
    *param_1 = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\0';
  }
  else {
    cVar2 = *(char *)(puVar16[1] + 0x17);
    *param_1 = cVar2;
    param_1[2] = '\a';
    param_1[3] = '\0';
    ppuVar13 = &PTR___tlv_bootstrap_11340dd08;
    (*(code *)PTR___tlv_bootstrap_11340dd08)();
    iVar19 = *(int *)ppuVar13;
    if (*(int *)ppuVar13 == 0) {
      uStack_48 = 0;
      _pthread_threadid_np(0,&uStack_48);
      *(int *)ppuVar13 = (int)uStack_48;
      iVar19 = (int)uStack_48;
    }
    *(int *)(param_1 + 4) = iVar19;
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\0';
    if (cVar2 != '\0') {
      lVar15 = puVar16[1];
      bVar6 = *(byte *)(lVar15 + 0x42) | *(byte *)(lVar15 + 0x43);
      if (((bVar6 & 1) != 0) || (*(char *)(lVar15 + 0x40) == '\x01')) {
        uVar5 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        uVar18 = cntvct_el0;
        if (uVar5 != 1000000000) {
          uVar3 = 0;
          if (uVar5 != 0) {
            uVar3 = uVar18 / uVar5;
          }
          uVar4 = 0;
          if (uVar5 != 0) {
            uVar4 = ((uVar18 - uVar3 * uVar5) * 1000000000) / uVar5;
          }
          uVar18 = uVar4 + uVar3 * 1000000000;
        }
        *(ulong *)(param_1 + 8) = uVar18;
        lVar15 = lRam00000001137eade0;
        if ((bVar6 & 1) != 0) {
          puVar11 = puVar16;
          FUN_10a1333cc();
          if (puVar11 != (undefined8 *)0x0) {
            uVar14 = 3;
            if (lRam00000001137eade0 != lVar15) {
              uVar14 = 5;
            }
            lVar1 = 0;
            if (lRam00000001137eade0 != lVar15) {
              lVar1 = lVar15;
            }
            *puVar11 = &UNK_10f648672;
            puVar11[1] = lVar1;
            puVar11[2] = uVar18;
            *(int *)(puVar11 + 3) = iVar19;
            *(undefined2 *)((long)puVar11 + 0x1c) = 7;
            *(undefined1 *)((long)puVar11 + 0x1e) = uVar14;
            if ((*(byte *)(puVar16 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10a26b13c);
              (*pcVar8)();
            }
            puVar16[0x18] = puVar16[0x18] + 1;
          }
        }
      }
      if (*(char *)(puVar16[1] + 0x41) == '\x01') {
        plVar17 = (long *)puVar16[0xb];
        if (plVar17 != (long *)0x0) {
          plVar12 = plVar17;
          (**(code **)(*plVar17 + 0x10))(plVar17,&UNK_10f648672);
          *(long **)(param_1 + 0x10) = plVar12;
        }
        param_1[0x18] = plVar17 != (long *)0x0;
      }
    }
  }
  return;
}



/* Entry: 10a26b13c; end: 10a26b1b3;  */

undefined8 * FUN_10a26b13c(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined4 uVar3;
  undefined *puVar4;
  
  if (((uint)*(undefined8 *)(param_1[10] + 0x10) >> 1 & 1) == 0) {
    return param_1;
  }
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    if (param_2 == 0) {
      uVar3 = 0;
      puVar4 = &UNK_10f64697a;
    }
    else {
      puVar4 = *(undefined **)(param_2 + 8);
      uVar3 = *(undefined4 *)(param_2 + 0x10);
    }
    param_1 = (undefined8 *)0x1;
    func_0x00010ae06f08(1,8,&DAT_10f647544,&UNK_10f648816,0x4e,&UNK_10f648886,in_x6,in_x7,puVar4,
                        uVar3);
  }
  FUN_10a26b1f4();
  iVar1 = *(int *)(param_1 + 1);
  puVar2 = param_1;
  __ZSt19uncaught_exceptionsv();
  if (iVar1 < (int)puVar2) {
    FUN_10a26bf60(*(undefined8 *)*param_1);
  }
  return param_1;
}



/* Entry: 10a26b1b4; end: 10a26b1f3;  */

undefined8 * FUN_10a26b1b4(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = *(int *)(param_1 + 1);
  puVar2 = param_1;
  __ZSt19uncaught_exceptionsv();
  if (iVar1 < (int)puVar2) {
    FUN_10a26bf60(*(undefined8 *)*param_1);
  }
  return param_1;
}



/* Entry: 10a26b1f4; end: 10a26b2c7;  */

void FUN_10a26b1f4(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [264];
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a009538(appuStack_150,&UNK_10f6488cd);
  appuStack_150[0] = &PTR_FUN_110bb6b60;
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110bb6b60;
  ___cxa_throw(puVar2,&PTR_DAT_110bb6230,FUN_10a26b2c8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a26b2b0);
  (*pcVar1)();
}



/* Entry: 10a26b2c8; end: 10a26b2cb;  */

void FUN_10a26b2c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a26b2cc; end: 10a26b2df;  */

void FUN_10a26b2cc(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a26b2e0; end: 10a26b3af;  */

void FUN_10a26b2e0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [264];
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a002a94(appuStack_150,param_1);
  appuStack_150[0] = &PTR_FUN_110bb6ba0;
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110bb6ba0;
  ___cxa_throw(puVar2,&PTR_DAT_110bb6b78,FUN_10a26b3b0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a26b398);
  (*pcVar1)();
}



/* Entry: 10a26b3b0; end: 10a26b3b3;  */

void FUN_10a26b3b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a26b3b4; end: 10a26b3c7;  */

void FUN_10a26b3b4(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a26b3c8; end: 10a26b3f7;  */

void FUN_10a26b3c8(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  FUN_10a26b3f8();
                    /* WARNING: Could not recover jumptable at 0x00010a26b3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a26b3f8; end: 10a26ba9f;  */

void FUN_10a26b3f8(long *param_1)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lStack_d8;
  long *plStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined4 uStack_ac;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
LAB_10a26b9a4:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10a26b9a8);
    (*pcVar8)();
  }
  lVar13 = param_1[4];
  param_1[4] = 0;
  puVar14 = (undefined8 *)*param_1;
  plStack_b8 = (long *)param_1[1];
  if (plStack_b8 != (long *)0x0) {
    plVar9 = plStack_b8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lStack_c8 = lVar13;
  puStack_c0 = puVar14;
  FUN_10a26b13c(puVar14,&PTR_DAT_110bb6c28);
  plVar9 = (long *)*puVar14;
  (**(code **)(*plVar9 + 0x20))(plVar9,puVar14 + 1);
  FUN_10a0a25e4(&lStack_d8,plVar9);
  if (lStack_d8 == 0) {
    func_0x00010b0ae4b8(&iStack_80,&UNK_10f648975,0x5f);
    FUN_10a26bd5c(&iStack_80);
    goto LAB_10a26b9a4;
  }
  FUN_10a26b13c(puVar14,&PTR_DAT_110bb6c40);
  plVar9 = (long *)puVar14[0xd];
  if ((plVar9 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar9 != (long *)0x0))
  {
    if ((puVar14[0xc] == 0) || ((*(byte *)(puVar14[0xc] + 0x6c) & 1) == 0)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    plVar1 = plVar9 + 1;
    do {
      lVar12 = *plVar1;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
    puVar14 = puStack_c0;
    if (!bVar5) goto LAB_10a26b804;
  }
  if (*(int *)puVar14[8] != 0) goto LAB_10a26b804;
  piVar11 = (int *)0x113835028;
  FUN_10a1c6264();
  if (*piVar11 == 0) goto LAB_10a26b804;
  plVar9 = (long *)puVar14[0xd];
  if (plVar9 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    uStack_78 = SUB84(plVar9,0);
    uStack_74 = (undefined4)((ulong)plVar9 >> 0x20);
    if (plVar9 != (long *)0x0) {
      lVar12 = puVar14[0xc];
      iStack_80 = (int)lVar12;
      uStack_7c = (undefined4)((ulong)lVar12 >> 0x20);
      if (lVar12 != 0) {
        lVar15 = puVar14[8];
        uVar7 = *(undefined8 *)(lVar15 + 0x30);
        uVar6 = *(undefined8 *)(lVar15 + 0x30);
        lVar10 = lVar15;
        FUN_10a318aa8();
        cVar4 = *(char *)(lVar15 + 0x28);
        if (cVar4 == '\0') {
          lVar2 = *(long *)(lVar15 + 0x18);
          plStack_88 = *(long **)(lVar15 + 0x20);
          if (plStack_88 != (long *)0x0) {
            plVar9 = plStack_88 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = *plVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lStack_90 = lVar2;
          if (lVar2 == 0) {
            cVar4 = *(char *)(lVar15 + 0x28);
            goto LAB_10a26b560;
          }
          lVar15 = puVar14[0x14];
          if (lVar15 == 0) {
            lVar15 = *(long *)(lVar2 + 0x40);
            if (lVar15 == 0) {
              lVar15 = *(long *)(lVar2 + 0x18) * (long)*(int *)(lVar2 + 0x14);
            }
            plVar9 = (long *)(lVar2 + 0x28);
          }
          else {
            plVar9 = puVar14 + 0x13;
          }
          if ((lVar15 == 0) || (*plVar9 == 0)) goto LAB_10a26b780;
          FUN_10a1b29f0(lVar15);
          _memcpy();
          FUN_10a26be44(&lStack_a0,lVar15,*(undefined8 *)(lVar2 + 0x10),
                        *(undefined8 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x24));
          __ZNSt3__15mutex4lockEv(lVar12);
          FUN_10a16b1ec(lVar12 + 0x40,&lStack_a0);
          *(undefined8 *)(lVar12 + 0x60) = uVar7;
          *(int *)(lVar12 + 0x68) = (int)lVar10;
          __ZNSt3__15mutex6unlockEv(lVar12);
          plVar9 = plStack_98;
          if (plStack_98 == (long *)0x0) goto LAB_10a26b780;
          plVar1 = plStack_98 + 1;
          do {
            lVar12 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar12 != 0) goto LAB_10a26b780;
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
LAB_10a26b77c:
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
        else {
          lStack_90 = 0;
          plStack_88 = (long *)0x0;
LAB_10a26b560:
          if (cVar4 == '\x02') {
            lVar2 = *(long *)(lVar15 + 0x18);
            plVar9 = *(long **)(lVar15 + 0x20);
            if (plVar9 != (long *)0x0) {
              plVar1 = plVar9 + 1;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *plVar1 = *plVar1 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            lStack_a0 = lVar2;
            plStack_98 = plVar9;
            if (lVar2 != 0) {
              lVar15 = *(long *)(lVar2 + 0x60);
              plVar1 = (long *)(lVar2 + 0x58);
              if (puVar14[0x14] != 0) {
                plVar1 = puVar14 + 0x13;
              }
              lVar16 = *plVar1;
              FUN_10a1b70c8(&plStack_a8,*(undefined4 *)(lVar2 + 0x10),
                            *(undefined4 *)(puVar14[8] + 0x4c));
              if ((lVar15 != 0) && (lVar16 != 0)) {
                if (plStack_a8 == (long *)0x0) goto LAB_10a26b64c;
                uStack_ac = *(undefined4 *)(lVar2 + 0x10);
                FUN_10a1b7634(plStack_a8,*(undefined4 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0xc),
                              &uStack_ac,lVar15);
                _memcpy(plStack_a8[0xb],lVar16,lVar15);
                *(undefined4 *)((long)plStack_a8 + 0x14) = *(undefined4 *)(lVar2 + 0x14);
                __ZNSt3__15mutex4lockEv(lVar12);
                FUN_10a26bcc8(lVar12 + 0x50,&plStack_a8);
                *(undefined8 *)(lVar12 + 0x60) = uVar6;
                *(int *)(lVar12 + 0x68) = (int)lVar10;
                __ZNSt3__15mutex6unlockEv(lVar12);
              }
              plVar1 = plStack_a8;
              plStack_a8 = (long *)0x0;
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 0x30))();
              }
            }
LAB_10a26b64c:
            if (plVar9 != (long *)0x0) {
              plVar1 = plVar9 + 1;
              do {
                lVar12 = *plVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *plVar1 = lVar12 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar12 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
                goto LAB_10a26b77c;
              }
            }
          }
        }
LAB_10a26b780:
        plVar9 = plStack_88;
        if (plStack_88 != (long *)0x0) {
          plVar1 = plStack_88 + 1;
          do {
            lVar12 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        plVar9 = (long *)CONCAT44(uStack_74,uStack_78);
        if (plVar9 == (long *)0x0) goto LAB_10a26b7f0;
      }
      plVar1 = plVar9 + 1;
      do {
        lVar12 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
  }
LAB_10a26b7f0:
  puVar14 = puStack_c0;
  FUN_10a26b13c(puStack_c0,&PTR_DAT_110bb6c58);
LAB_10a26b804:
  if (((long *)puVar14[0x10] != (long *)0x0) && (puVar14[0x14] != 0)) {
    (**(code **)(*(long *)puVar14[0x10] + 0x38))();
    puVar14[0x13] = 0;
    puVar14[0x14] = 0;
  }
  piVar11 = (int *)puVar14[8];
  if (*piVar11 == 0) {
    (**(code **)(*(long *)puVar14[0xb] + 0x10))
              ((long *)puVar14[0xb],&lStack_d8,piVar11 + 6,(char)piVar11[0x14],puVar14[0x10],
               *(undefined4 *)(puVar14 + 0x12));
  }
  else {
    iStack_80 = piVar11[0xe];
    uStack_74 = (undefined4)*(undefined8 *)(piVar11 + 0x12);
    uStack_70 = (undefined4)((ulong)*(undefined8 *)(piVar11 + 0x12) >> 0x20);
    uStack_7c = (undefined4)*(undefined8 *)(piVar11 + 0xf);
    uStack_78 = (undefined4)((ulong)*(undefined8 *)(piVar11 + 0xf) >> 0x20);
    (**(code **)(*(long *)puVar14[0xb] + 0x18))
              ((long *)puVar14[0xb],&lStack_d8,piVar11 + 6,&iStack_80,puVar14[0x10],
               *(undefined4 *)(puVar14 + 0x12));
  }
  FUN_10a26bf60(puVar14);
  plVar9 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar1 = plStack_b8 + 1;
    do {
      lVar12 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  func_0x00010a26ae98(lVar13,&lStack_d8);
  if (plStack_d0 != (long *)0x0) {
    plVar9 = plStack_d0 + 1;
    do {
      lVar13 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d0);
    }
  }
  if ((char)param_1[3] == '\x01') {
    FUN_10a258650(param_1);
    *(undefined1 *)(param_1 + 3) = 0;
  }
  lVar13 = lStack_c8;
  lStack_c8 = 0;
  if ((lVar13 != 0) && (func_0x0001092b4274(&lStack_c8), lStack_c8 != 0)) {
    func_0x0001092b4274(&lStack_c8);
  }
  return;
}



/* Entry: 10a26baa0; end: 10a26bcc7;  */

undefined8 * FUN_10a26baa0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb6bc8;
  if (param_1[0x1a] != 0) {
    func_0x0001092b4274();
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    FUN_10a258650(param_1 + 0x16);
  }
  *param_1 = &PTR_DAT_110bb6af8;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    func_0x00010a0523dc(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a26bcc8; end: 10a26bd5b;  */

long * FUN_10a26bcc8(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *param_2;
  if (lVar6 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)0x20;
    __Znwm();
    *puVar4 = &PTR_FUN_110bab7a0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = lVar6;
  }
  *param_2 = 0;
  plVar5 = (long *)param_1[1];
  *param_1 = lVar6;
  param_1[1] = (long)puVar4;
  if (plVar5 != (long *)0x0) {
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
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a26bd5c; end: 10a26be2b;  */

void FUN_10a26bd5c(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [264];
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a002a94(appuStack_150,param_1);
  appuStack_150[0] = &PTR_FUN_110bb6c98;
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110bb6c98;
  ___cxa_throw(puVar2,&PTR_DAT_110bb6c70,FUN_10a26be2c);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a26be14);
  (*pcVar1)();
}



/* Entry: 10a26be2c; end: 10a26be2f;  */

void FUN_10a26be2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a26be30; end: 10a26be43;  */

void FUN_10a26be30(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a26be44; end: 10a26bf5f;  */

void FUN_10a26be44(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  code *pcStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined8 *)0xa8;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110baa4d8;
  uStack_98 = 0x109d138c8;
  ppuStack_90 = &PTR_DAT_110b3e838;
  pcStack_88 = FUN_10a1b1e10;
  FUN_10a1b2668(puVar4 + 3,param_2,param_3,param_4,param_5,&uStack_98,0,0);
  pppuVar5 = &ppuStack_90;
  (*(code *)*ppuStack_90)();
  *param_1 = (long)(puVar4 + 3);
  param_1[1] = (long)puVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_90)(&ppuStack_90);
  __ZNSt3__119__shared_weak_countD2Ev(puVar4);
  __ZdlPv();
  __Unwind_Resume();
  ppuVar6 = pppuVar5[0x10];
  if (ppuVar6 != (undefined **)0x0) {
    if (pppuVar5[0x14] != (undefined **)0x0) {
      (**(code **)(*ppuVar6 + 0x38))();
      pppuVar5[0x13] = (undefined **)0x0;
      pppuVar5[0x14] = (undefined **)0x0;
    }
    ppuVar6 = pppuVar5[0x11];
    pppuVar5[0x10] = (undefined **)0x0;
    pppuVar5[0x11] = (undefined **)0x0;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar1 = ppuVar6 + 1;
      do {
        puVar7 = *ppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar3) {
          *ppuVar1 = puVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar7 == (undefined *)0x0) {
        (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(ppuVar6);
        return;
      }
    }
    return;
  }
  return;
}



/* Entry: 10a26bf60; end: 10a26bfaf;  */

void FUN_10a26bf60(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x80);
  if (plVar4 == (long *)0x0) {
    return;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    (**(code **)(*plVar4 + 0x38))();
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  plVar4 = *(long **)(param_1 + 0x88);
  *(long *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a26bfb0; end: 10a26c1af;  */

char * FUN_10a26bfb0(char *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long *plVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined1 uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  
  puVar7 = PTR___tlv_bootstrap_11340d750;
  if (*param_1 == '\x01') {
    ppuVar12 = &PTR___tlv_bootstrap_11340d750;
    ppuVar9 = ppuVar12;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar10 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar9 & 1) == 0) {
      ppuVar9 = ppuVar10;
      (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,ppuVar9,0x100000000);
      (*(code *)puVar7)();
      *(undefined1 *)ppuVar12 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    plVar15 = (long *)ppuVar10[2];
    if (plVar15 != (long *)0x0) {
      lVar13 = plVar15[1];
      bVar6 = *(byte *)(lVar13 + 0x42) | *(byte *)(lVar13 + 0x43);
      if ((((bVar6 & 1) != 0) || ((*(byte *)(lVar13 + 0x3f) & 1) != 0)) ||
         (*(char *)(lVar13 + 0x40) == '\x01')) {
        uVar17 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        uVar16 = cntvct_el0;
        if (uVar17 != 1000000000) {
          uVar4 = 0;
          if (uVar17 != 0) {
            uVar4 = uVar16 / uVar17;
          }
          uVar5 = 0;
          if (uVar17 != 0) {
            uVar5 = ((uVar16 - uVar4 * uVar17) * 1000000000) / uVar17;
          }
          uVar16 = uVar5 + uVar4 * 1000000000;
        }
        if (*(char *)(plVar15[1] + 0x40) == '\x01') {
          uVar17 = *(ulong *)(param_1 + 8);
          if (uVar17 <= uVar16) {
            lVar13 = *plVar15;
            __ZNSt3__15mutex4lockEv(lVar13 + 0xe00);
            FUN_10a15387c((double)(uVar16 - uVar17),lVar13,lVar13 + 0xe00,uVar17,uVar16);
            __ZNSt3__15mutex6unlockEv(lVar13 + 0xe00);
          }
        }
        lVar13 = lRam00000001137eade0;
        if ((bVar6 & 1) != 0) {
          uVar2 = *(undefined4 *)(param_1 + 4);
          uVar3 = *(undefined2 *)(param_1 + 2);
          plVar11 = plVar15;
          FUN_10a1333cc();
          if (plVar11 != (long *)0x0) {
            uVar14 = 6;
            if (lRam00000001137eade0 != lVar13) {
              uVar14 = 8;
            }
            lVar1 = 0;
            if (lRam00000001137eade0 != lVar13) {
              lVar1 = lVar13;
            }
            *plVar11 = (long)&UNK_10f648672;
            plVar11[1] = lVar1;
            plVar11[2] = uVar16;
            *(undefined4 *)(plVar11 + 3) = uVar2;
            *(undefined2 *)((long)plVar11 + 0x1c) = uVar3;
            *(undefined1 *)((long)plVar11 + 0x1e) = uVar14;
            if ((*(byte *)(plVar15 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10a26c1a8);
              (*pcVar8)();
            }
            plVar15[0x18] = plVar15[0x18] + 1;
          }
        }
      }
      if (((*(char *)(plVar15[1] + 0x41) == '\x01') && (param_1[0x18] == '\x01')) &&
         (plVar15 = (long *)plVar15[0xb], plVar15 != (long *)0x0)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,*(undefined8 *)(param_1 + 0x10));
      }
    }
  }
  return param_1;
}



/* Entry: 10a26c1b0; end: 10a26c683;  */

void FUN_10a26c1b0(long *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  uVar12 = *param_2;
  puVar5 = (undefined8 *)0x78;
  __Znwm();
  *puVar5 = FUN_10a2aca54;
  puVar5[1] = FUN_10a2aceb4;
  puVar5[0xc] = param_2;
  puVar5[0xd] = uVar12;
  func_0x0001092ba17c(puVar5 + 2);
  lVar8 = puVar5[7];
  if (lVar8 != 0) {
    plVar6 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar8;
  puVar5[0xb] = 0;
  *(undefined1 *)(puVar5 + 0xe) = 0;
  puVar7 = puVar5 + 0xb;
  FUN_10a057268(puVar7,puVar5);
  if (((ulong)puVar7 & 1) != 0) {
    return;
  }
  puVar5[10] = puVar5[0xb];
  puVar5[0xb] = 0;
  plVar6 = (long *)(puVar5[0xc] + 0x10);
  FUN_109d16cc4(puVar5 + 9,plVar6,puVar5 + 10);
  plVar11 = (long *)puVar5[10];
  if (plVar11 != (long *)0x0) {
    puVar1 = (ulong *)(plVar11 + 1);
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar9 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      plVar6 = plVar11;
      (**(code **)(*plVar11 + 0x10))();
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar11 + 8))();
        plVar6 = plVar11;
      }
    }
  }
  plVar11 = (long *)puVar5[0xb];
  if (plVar11 != (long *)0x0) {
    puVar1 = (ulong *)(plVar11 + 1);
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar9 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      plVar6 = plVar11;
      (**(code **)(*plVar11 + 0x10))();
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar11 + 8))();
        plVar6 = plVar11;
      }
    }
  }
  if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 1 & 1) == 0) {
    lVar8 = puVar5[0xc];
    __ZNSt3__16chrono12steady_clock3nowEv();
    lVar8 = *(long *)(lVar8 + 0x28);
    if ((long)plVar6 < lVar8) {
      FUN_109d1a80c();
      FUN_109d16728(puVar5 + 0xb,puVar5 + 9,lVar8,plVar6[0x12]);
      puVar5[10] = puVar5[0xb];
      plVar6 = (long *)(puVar5[0xb] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((uint)*(undefined8 *)(puVar5[10] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(puVar5 + 0xe) = 1;
        lVar8 = puVar5[10];
        plVar6 = (long *)(lVar8 + 0x10);
        uStack_38 = puVar5[3];
        do {
          lVar10 = *plVar6;
          if (lVar10 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              uStack_48 = 0;
              puStack_40 = puVar5;
              func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
              *(undefined8 *)(lVar8 + 0x10) = 0;
              return;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar10 >> 1 & 1) == 0);
      }
      plVar6 = (long *)puVar5[10];
      if (((uint)*(undefined8 *)(puVar5[10] + 0x10) >> 5 & 1) != 0) {
        func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a26c554);
        (*pcVar4)();
      }
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      plVar6 = (long *)puVar5[0xb];
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
    }
    FUN_10a26c684(puVar5[0xd] + 0x50,*(undefined4 *)(puVar5[0xc] + 8));
    puVar7 = *(undefined8 **)(puVar5[0xc] + 0x18);
    if (puVar7 == (undefined8 *)0x0 || *(char *)(puVar7 + 8) != '\x02') {
      if (puVar7 != (undefined8 *)0x0 && *(char *)(puVar7 + 8) == '\x01') {
        (*(code *)*puVar7)();
      }
    }
    else {
      FUN_10a05e614();
    }
  }
  plVar6 = (long *)puVar5[9];
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar9 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  func_0x0001092ba100(puVar5 + 2);
  func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar5);
  return;
}



/* Entry: 10a26c684; end: 10a26c6bb;  */

void FUN_10a26c684(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  
  plVar5 = param_1;
  FUN_10a26c6bc();
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar9 = param_1[1];
  lVar7 = *plVar5;
  uVar8 = plVar5[1];
  uVar10 = uVar9 - 1;
  if ((uVar9 & uVar10) == 0) {
    uVar8 = uVar10 & uVar8;
  }
  else if (uVar9 <= uVar8) {
    uVar12 = 0;
    if (uVar9 != 0) {
      uVar12 = uVar8 / uVar9;
    }
    uVar8 = uVar8 - uVar12 * uVar9;
  }
  plVar6 = *(long **)(*param_1 + uVar8 * 8);
  do {
    plVar11 = plVar6;
    plVar6 = (long *)*plVar11;
  } while ((long *)*plVar11 != plVar5);
  if (plVar11 == param_1 + 2) {
LAB_10a26c7dc:
    if (lVar7 == 0) {
LAB_10a26c80c:
      *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
      lVar7 = *plVar5;
      goto LAB_10a26c814;
    }
    uVar12 = *(ulong *)(lVar7 + 8);
    if ((uVar9 & uVar10) == 0) {
      uVar12 = uVar12 & uVar10;
    }
    else if (uVar9 <= uVar12) {
      uVar4 = 0;
      if (uVar9 != 0) {
        uVar4 = uVar12 / uVar9;
      }
      uVar12 = uVar12 - uVar4 * uVar9;
    }
    if (uVar12 != uVar8) goto LAB_10a26c80c;
  }
  else {
    uVar12 = plVar11[1];
    if ((uVar9 & uVar10) == 0) {
      uVar12 = uVar12 & uVar10;
    }
    else if (uVar9 <= uVar12) {
      uVar4 = 0;
      if (uVar9 != 0) {
        uVar4 = uVar12 / uVar9;
      }
      uVar12 = uVar12 - uVar4 * uVar9;
    }
    if (uVar12 != uVar8) goto LAB_10a26c7dc;
LAB_10a26c814:
    if (lVar7 == 0) goto LAB_10a26c850;
  }
  uVar12 = *(ulong *)(lVar7 + 8);
  if ((uVar9 & uVar10) == 0) {
    uVar12 = uVar12 & uVar10;
  }
  else if (uVar9 <= uVar12) {
    uVar10 = 0;
    if (uVar9 != 0) {
      uVar10 = uVar12 / uVar9;
    }
    uVar12 = uVar12 - uVar10 * uVar9;
  }
  if (uVar12 != uVar8) {
    *(long **)(*param_1 + uVar12 * 8) = plVar11;
    lVar7 = *plVar5;
  }
LAB_10a26c850:
  *plVar11 = lVar7;
  *plVar5 = 0;
  param_1[3] = param_1[3] + -1;
  plVar6 = (long *)plVar5[3];
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar8 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar8 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar8 >> 0x21 == 1) {
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar5);
  return;
}



/* Entry: 10a26c6bc; end: 10a26c86b;  */

long * FUN_10a26c6bc(long *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = (ulong)param_2;
    uVar6 = uVar4 - 1;
    uVar3 = (uint)uVar4;
    if ((uVar4 & uVar6) == 0) {
      uVar7 = (ulong)(uVar3 - 1 & param_2);
    }
    else {
      uVar7 = uVar5;
      if (uVar4 <= uVar5) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = param_2 / uVar3;
        }
        uVar7 = (ulong)(param_2 - uVar1 * uVar3);
      }
    }
    plVar8 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)*plVar8;
      do {
        if (plVar8 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar9 = plVar8[1];
        if (uVar9 == uVar5) {
          if (*(uint *)(plVar8 + 2) == param_2) {
            return plVar8;
          }
        }
        else {
          if ((uVar4 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar4 <= uVar9) {
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar2 * uVar4;
          }
          if (uVar9 != uVar7) {
            return (long *)0x0;
          }
        }
        plVar8 = (long *)*plVar8;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a26c86c; end: 10a26c8db;  */

void FUN_10a26c86c(ulong param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (((param_1 & 1) != 0) && (plVar4 = *(long **)(param_2 + 0x18), plVar4 != (long *)0x0)) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar5 >> 0x21 == 1) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a26c8dc; end: 10a26c8f7;  */

void FUN_10a26c8dc(void)

{
  return;
}



/* Entry: 10a26c8f8; end: 10a26c99f;  */

undefined8 * FUN_10a26c8f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb6cd8;
  (**(code **)param_1[0x10])();
  (**(code **)param_1[8])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a26c9a0; end: 10a26cbf7;  */

/* WARNING: Removing unreachable block (ram,0x00010a26cb8c) */
/* WARNING: Removing unreachable block (ram,0x00010a26cb90) */
/* WARNING: Removing unreachable block (ram,0x00010a26cb98) */
/* WARNING: Removing unreachable block (ram,0x00010a26cba0) */
/* WARNING: Removing unreachable block (ram,0x00010a26cba4) */

void FUN_10a26c9a0(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 in_x7;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar6 = (undefined8 *)0x1d8;
  __Znwm();
  lVar8 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar8 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *puVar6 = &PTR_DAT_110bb9d48;
  func_0x0001098bae4c(puVar6,&UNK_10e4a6801,0x1a,param_3,lVar8,puVar6 + 0x19,puVar6 + 0x31,in_x7,0,0
                      ,&uStack_50);
  plVar1 = plStack_48;
  puVar2 = (undefined8 *)(param_2 + 0x28);
  if (plStack_48 != (long *)0x0) {
    plVar3 = plStack_48 + 1;
    do {
      lVar8 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar6[0x1c] = 0;
  puVar6[0x1b] = 0;
  puVar6[0x1e] = 0;
  puVar6[0x1d] = 0;
  puVar6[0x20] = 0;
  puVar6[0x1f] = 0;
  *puVar6 = &PTR_DAT_110bb9d48;
  *(undefined1 *)(puVar6 + 0x1a) = 0;
  puVar6[0x19] = &PTR_FUN_110bb9d98;
  puVar6[0x21] = 0;
  puVar6[0x23] = 0;
  puVar6[0x22] = 0;
  puVar6[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar6 + 0x27) = 0x40000000;
  puVar6[0x24] = &PTR_DAT_110bb9e50;
  puVar6[0x25] = &UNK_110bb9e20;
  *(undefined1 *)((long)puVar6 + 0x13c) = 0;
  *(undefined1 *)((long)puVar6 + 0x144) = 0;
  puVar6[0x2b] = 0x4000000040000000;
  *(undefined4 *)(puVar6 + 0x2c) = 0x40000000;
  puVar6[0x29] = &PTR_DAT_110bb9e50;
  puVar6[0x2a] = &UNK_110bb9e20;
  *(undefined1 *)((long)puVar6 + 0x164) = 0;
  *(undefined1 *)((long)puVar6 + 0x16c) = 0;
  *(undefined1 *)(puVar6 + 0x2e) = 0;
  *(undefined1 *)(puVar6 + 0x30) = 0;
  lVar8 = puVar6[0xc];
  if (lVar8 == 0) {
    bVar5 = false;
    puVar9 = puVar2;
  }
  else {
    bVar5 = lVar8 != puVar6[0xb];
    puVar9 = (undefined8 *)0x0;
    if (!bVar5) {
      puVar9 = puVar2;
    }
  }
  *(undefined2 *)(puVar6 + 0x32) = 0;
  puVar6[0x35] = 0x10a26d640;
  puVar6[0x36] = &UNK_110bb9eb0;
  puVar6[0x37] = 0;
  puVar6[0x38] = 0;
  puVar6[0x39] = 0;
  puVar6[0x3a] = 0;
  puVar6[0x31] = &PTR_FUN_110bb9e90;
  if ((!bVar5) && (*(char *)(puVar9[3] + 8) == '\x01')) {
    puVar6[0x3a] = puVar9 + 2;
  }
  if ((lVar8 == 0) || (lVar8 == puVar6[0xb])) {
    uVar7 = *puVar2;
    *(undefined1 *)(puVar6 + 0x30) = 1;
    puVar6[0x2e] = param_3;
    puVar6[0x2f] = uVar7;
  }
  *param_1 = puVar6;
  return;
}



/* Entry: 10a26cbf8; end: 10a26cc07;  */

void FUN_10a26cbf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb9cf8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a26cc08; end: 10a26cc27;  */

void FUN_10a26cc08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb9cf8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a26cc28; end: 10a26cc37;  */

void FUN_10a26cc28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a26cc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x20))();
  return;
}



/* Entry: 10a26cc38; end: 10a26cd63;  */

long FUN_10a26cc38(long param_1)

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



/* Entry: 10a26cd64; end: 10a26cd67;  */

void FUN_10a26cd64(void)

{
  return;
}


