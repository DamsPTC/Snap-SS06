/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ac71158; end: 10ac71203;  */

void FUN_10ac71158(float param_1,float param_2,float param_3,float param_4,undefined *param_5,
                  uint param_6)

{
  float *pfVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined4 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  float *pfVar17;
  undefined4 uStack_d4;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  
  if (*(uint *)(param_5 + 0x138) < 2) {
    *(uint *)(param_5 + 0x138) = param_6;
    __ZNSt3__15mutex4lockEv(param_5 + 0x1d0);
    if (*(long *)(param_5 + 0xd0) != 0) {
      *(uint *)(*(long *)(*(long *)(param_5 + 0xd0) + 0x50) + 0x1c) = (uint)(param_6 != 0);
    }
  }
  else {
    param_5 = &UNK_10f63b8ac;
    FUN_10a00946c();
    if (0x7f < param_6) {
      plVar5 = (long *)&UNK_10f652c32;
      FUN_10a00946c();
      lVar16 = *plVar5;
      if (((uint)*(undefined8 *)(*(long *)(lVar16 + 0x50) + 0x10) >> 1 & 1) != 0) {
        return;
      }
      __ZNSt3__15mutex4lockEv(lVar16 + 0x1d0);
      if (*(long *)(lVar16 + 0xe8) != 0) {
        uVar8 = (ulong)*(uint *)(lVar16 + 0xdc);
        if ((int)*(uint *)(lVar16 + 0xdc) < 3) {
          lVar9 = (long)*(int *)(lVar16 + 0xe4) * (long)*(int *)(lVar16 + 0xe0);
        }
        else {
          lVar9 = 1;
          piVar11 = *(int **)(lVar16 + 0x118);
          do {
            lVar9 = lVar9 * *piVar11;
            uVar8 = uVar8 - 1;
            piVar11 = piVar11 + 1;
          } while (uVar8 != 0);
        }
        if (lVar9 != 0) {
          if ((char)plVar5[1] == '\x01') {
            FUN_10aab71cc(*(undefined8 *)(*(long *)(lVar16 + 0x10) + 8));
          }
          FUN_10aab233c(&plStack_b8,*(undefined8 *)(lVar16 + 0x10),lVar16 + 0xd8);
          if (plStack_b8 == (long *)0x0) {
            __ZNSt3__15mutex6unlockEv(lVar16 + 0x1d0);
            return;
          }
          uVar8 = (plStack_b8[6] - plStack_b8[5] >> 5) * -0xf0f0f0f0f0f0f0f;
          iVar12 = (int)uVar8;
          lStack_d0 = 0;
          lStack_c8 = 0;
          uStack_c0 = 0;
          plStack_b0 = &lStack_d0;
          plStack_a8 = (long *)((ulong)plStack_a8 & 0xffffffffffffff00);
          if ((uVar8 & 0xffffffff) != 0) {
            FUN_10a0010cc(&lStack_d0,(long)iVar12);
            lVar9 = lStack_c8;
            lVar15 = (((long)iVar12 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
            _bzero(lStack_c8,lVar15);
            lStack_c8 = lVar9 + lVar15;
          }
          func_0x00010983d048(lVar16 + 0x140,(long)iVar12);
          if (0 < iVar12) {
            uVar14 = 0;
            do {
              uVar10 = (plStack_b8[6] - plStack_b8[5] >> 5) * -0xf0f0f0f0f0f0f0f;
              if (uVar10 < uVar14 || uVar10 - uVar14 == 0) goto LAB_10ac71580;
              FUN_10a14c660(plStack_b8[5] + uVar14 * 0x220 + 8);
              if ((ulong)(*(long *)(lVar16 + 0x148) - *(long *)(lVar16 + 0x140) >> 4) <= uVar14)
              goto LAB_10ac71580;
              param_4 = param_4 - param_2;
              param_3 = param_3 - param_1;
              pfVar17 = (float *)(*(long *)(lVar16 + 0x140) + uVar14 * 0x10);
              *pfVar17 = param_1;
              pfVar17[1] = param_2;
              pfVar17[2] = param_3;
              pfVar17[3] = param_4;
              uVar10 = (plStack_b8[6] - plStack_b8[5] >> 5) * -0xf0f0f0f0f0f0f0f;
              if ((uVar10 < uVar14 || uVar10 - uVar14 == 0) ||
                 (uVar10 = (lStack_c8 - lStack_d0 >> 3) * -0x5555555555555555,
                 uVar10 < uVar14 || uVar10 - uVar14 == 0)) goto LAB_10ac71580;
              lVar9 = plStack_b8[5] + uVar14 * 0x220;
              func_0x0001092c8954(lStack_d0 + uVar14 * 0x18,
                                  *(long *)(lVar9 + 0x20) - *(long *)(lVar9 + 0x18) >> 3);
              pfVar1 = *(float **)(lVar9 + 0x20);
              for (pfVar17 = *(float **)(lVar9 + 0x18); pfVar17 != pfVar1; pfVar17 = pfVar17 + 2) {
                uVar10 = (lStack_c8 - lStack_d0 >> 3) * -0x5555555555555555;
                if (uVar10 < uVar14 || uVar10 - uVar14 == 0) goto LAB_10ac71580;
                puVar13 = (undefined4 *)(lStack_d0 + uVar14 * 0x18);
                plStack_b0 = (long *)CONCAT44(plStack_b0._4_4_,(int)(long)(float)(int)*pfVar17);
                param_1 = (float)(int)pfVar17[1];
                uStack_d4 = (undefined4)(long)param_1;
                puVar6 = *(undefined4 **)(puVar13 + 2);
                if (puVar6 < *(undefined4 **)(puVar13 + 4)) {
                  *puVar6 = (int)(long)(float)(int)*pfVar17;
                  puVar6[1] = uStack_d4;
                  puVar6 = puVar6 + 2;
                }
                else {
                  puVar6 = puVar13;
                  func_0x0001094c5dd8(puVar13,&plStack_b0,&uStack_d4);
                }
                *(undefined4 **)(puVar13 + 2) = puVar6;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 != (uVar8 & 0x7fffffff));
          }
          func_0x0001094a9694(*(undefined8 *)(*(long *)(lVar16 + 0xd0) + 0x50),lVar16 + 0xd8,
                              &lStack_d0);
          __ZNSt3__15mutex6unlockEv(lVar16 + 0x1d0);
          plVar7 = (long *)plVar5[3];
          if ((plVar7 != (long *)0x0) &&
             (__ZNSt3__119__shared_weak_count4lockEv(), plStack_a8 = plVar7, plVar7 != (long *)0x0))
          {
            plStack_b0 = (long *)plVar5[2];
            if (plStack_b0 != (long *)0x0) {
              if ((char)plStack_b0[8] == '\x01') {
                (*(code *)*plStack_b0)();
              }
              else if ((char)plStack_b0[8] == '\x02') {
                FUN_10a05e614();
              }
            }
            plVar5 = plVar7 + 1;
            do {
              lVar16 = *plVar5;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar3) {
                *plVar5 = lVar16 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          plStack_b0 = &lStack_d0;
          func_0x00010a001298(&plStack_b0);
          plVar5 = plStack_b8;
          plStack_b8 = (long *)0x0;
          if (plVar5 == (long *)0x0) {
            return;
          }
          (**(code **)(*plVar5 + 8))();
          return;
        }
      }
      FUN_10a00946c(&UNK_10f63b8ac);
LAB_10ac71580:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac71584);
      (*pcVar4)();
    }
    *(uint *)(param_5 + 0x13c) = param_6;
    __ZNSt3__15mutex4lockEv(param_5 + 0x1d0);
    *(undefined4 *)(*(long *)(param_5 + 0x10) + 0x14) = *(undefined4 *)(param_5 + 0x13c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_5 + 0x1d0);
  return;
}



/* Entry: 10ac71204; end: 10ac71607;  */

void FUN_10ac71204(float param_1,float param_2,float param_3,float param_4,long *param_5)

{
  long *plVar1;
  float *pfVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  float *pfVar17;
  undefined4 uStack_94;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  lVar16 = *param_5;
  if (((uint)*(undefined8 *)(*(long *)(lVar16 + 0x50) + 0x10) >> 1 & 1) != 0) {
    return;
  }
  __ZNSt3__15mutex4lockEv(lVar16 + 0x1d0);
  if (*(long *)(lVar16 + 0xe8) != 0) {
    uVar8 = (ulong)*(uint *)(lVar16 + 0xdc);
    if ((int)*(uint *)(lVar16 + 0xdc) < 3) {
      lVar9 = (long)*(int *)(lVar16 + 0xe4) * (long)*(int *)(lVar16 + 0xe0);
    }
    else {
      lVar9 = 1;
      piVar11 = *(int **)(lVar16 + 0x118);
      do {
        lVar9 = lVar9 * *piVar11;
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 1;
      } while (uVar8 != 0);
    }
    if (lVar9 != 0) {
      if ((char)param_5[1] == '\x01') {
        FUN_10aab71cc(*(undefined8 *)(*(long *)(lVar16 + 0x10) + 8));
      }
      FUN_10aab233c(&plStack_78,*(undefined8 *)(lVar16 + 0x10),lVar16 + 0xd8);
      if (plStack_78 == (long *)0x0) {
        __ZNSt3__15mutex6unlockEv(lVar16 + 0x1d0);
        return;
      }
      uVar8 = (plStack_78[6] - plStack_78[5] >> 5) * -0xf0f0f0f0f0f0f0f;
      iVar12 = (int)uVar8;
      lStack_90 = 0;
      lStack_88 = 0;
      uStack_80 = 0;
      plStack_70 = &lStack_90;
      plStack_68 = (long *)((ulong)plStack_68 & 0xffffffffffffff00);
      if ((uVar8 & 0xffffffff) != 0) {
        FUN_10a0010cc(&lStack_90,(long)iVar12);
        lVar9 = lStack_88;
        lVar15 = (((long)iVar12 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
        _bzero(lStack_88,lVar15);
        lStack_88 = lVar9 + lVar15;
      }
      func_0x00010983d048(lVar16 + 0x140,(long)iVar12);
      if (0 < iVar12) {
        uVar14 = 0;
        do {
          uVar10 = (plStack_78[6] - plStack_78[5] >> 5) * -0xf0f0f0f0f0f0f0f;
          if (uVar10 < uVar14 || uVar10 - uVar14 == 0) goto LAB_10ac71580;
          FUN_10a14c660(plStack_78[5] + uVar14 * 0x220 + 8);
          if ((ulong)(*(long *)(lVar16 + 0x148) - *(long *)(lVar16 + 0x140) >> 4) <= uVar14)
          goto LAB_10ac71580;
          param_4 = param_4 - param_2;
          param_3 = param_3 - param_1;
          pfVar17 = (float *)(*(long *)(lVar16 + 0x140) + uVar14 * 0x10);
          *pfVar17 = param_1;
          pfVar17[1] = param_2;
          pfVar17[2] = param_3;
          pfVar17[3] = param_4;
          uVar10 = (plStack_78[6] - plStack_78[5] >> 5) * -0xf0f0f0f0f0f0f0f;
          if ((uVar10 < uVar14 || uVar10 - uVar14 == 0) ||
             (uVar10 = (lStack_88 - lStack_90 >> 3) * -0x5555555555555555,
             uVar10 < uVar14 || uVar10 - uVar14 == 0)) goto LAB_10ac71580;
          lVar9 = plStack_78[5] + uVar14 * 0x220;
          func_0x0001092c8954(lStack_90 + uVar14 * 0x18,
                              *(long *)(lVar9 + 0x20) - *(long *)(lVar9 + 0x18) >> 3);
          pfVar2 = *(float **)(lVar9 + 0x20);
          for (pfVar17 = *(float **)(lVar9 + 0x18); pfVar17 != pfVar2; pfVar17 = pfVar17 + 2) {
            uVar10 = (lStack_88 - lStack_90 >> 3) * -0x5555555555555555;
            if (uVar10 < uVar14 || uVar10 - uVar14 == 0) goto LAB_10ac71580;
            puVar13 = (undefined4 *)(lStack_90 + uVar14 * 0x18);
            plStack_70 = (long *)CONCAT44(plStack_70._4_4_,(int)(long)(float)(int)*pfVar17);
            param_1 = (float)(int)pfVar17[1];
            uStack_94 = (undefined4)(long)param_1;
            puVar6 = *(undefined4 **)(puVar13 + 2);
            if (puVar6 < *(undefined4 **)(puVar13 + 4)) {
              *puVar6 = (int)(long)(float)(int)*pfVar17;
              puVar6[1] = uStack_94;
              puVar6 = puVar6 + 2;
            }
            else {
              puVar6 = puVar13;
              func_0x0001094c5dd8(puVar13,&plStack_70,&uStack_94);
            }
            *(undefined4 **)(puVar13 + 2) = puVar6;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != (uVar8 & 0x7fffffff));
      }
      func_0x0001094a9694(*(undefined8 *)(*(long *)(lVar16 + 0xd0) + 0x50),lVar16 + 0xd8,&lStack_90)
      ;
      __ZNSt3__15mutex6unlockEv(lVar16 + 0x1d0);
      plVar7 = (long *)param_5[3];
      if ((plVar7 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_68 = plVar7, plVar7 != (long *)0x0)) {
        plStack_70 = (long *)param_5[2];
        if (plStack_70 != (long *)0x0) {
          if ((char)plStack_70[8] == '\x01') {
            (*(code *)*plStack_70)();
          }
          else if ((char)plStack_70[8] == '\x02') {
            FUN_10a05e614();
          }
        }
        plVar1 = plVar7 + 1;
        do {
          lVar16 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar16 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      plStack_70 = &lStack_90;
      func_0x00010a001298(&plStack_70);
      plVar7 = plStack_78;
      plStack_78 = (long *)0x0;
      if (plVar7 == (long *)0x0) {
        return;
      }
      (**(code **)(*plVar7 + 8))();
      return;
    }
  }
  FUN_10a00946c(&UNK_10f63b8ac);
LAB_10ac71580:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ac71584);
  (*pcVar5)();
}



/* Entry: 10ac71608; end: 10ac71d5b;  */

void FUN_10ac71608(long *param_1,float *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  float **ppfVar10;
  long *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float fVar26;
  float *pfStack_128;
  float *pfStack_120;
  float *pfStack_118;
  long *plStack_110;
  long *plStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined ***pppuStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = *param_1;
  pfStack_128 = (float *)0x0;
  pfStack_120 = (float *)0x0;
  pfStack_118 = (float *)0x0;
  if (((uint)*(undefined8 *)(*(long *)(lVar19 + 0x50) + 0x10) >> 1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(lVar19 + 0x210);
    puVar15 = *(undefined8 **)(lVar19 + 0x170);
    if (puVar15 != (undefined8 *)0x0) {
      uVar13 = *(uint *)(lVar19 + 0x164);
      uVar14 = (ulong)uVar13;
      if ((int)uVar13 < 3) {
        lVar16 = (long)*(int *)(lVar19 + 0x16c) * (long)*(int *)(lVar19 + 0x168);
      }
      else {
        lVar16 = 1;
        piVar18 = *(int **)(lVar19 + 0x1a0);
        do {
          lVar16 = lVar16 * *piVar18;
          uVar14 = uVar14 - 1;
          piVar18 = piVar18 + 1;
        } while (uVar14 != 0);
      }
      if (lVar16 != 0) {
        uVar6 = *(uint *)(lVar19 + 0x160);
        uStack_e0 = (code *)CONCAT44(uVar13,uVar6);
        pppuStack_a0 = &ppuStack_d8;
        ppuStack_d8 = *(undefined ***)(lVar19 + 0x168);
        uStack_c0 = *(undefined8 *)(lVar19 + 0x180);
        uStack_c8 = *(undefined8 *)(lVar19 + 0x178);
        uStack_b0 = *(undefined8 *)(lVar19 + 400);
        uStack_b8 = *(undefined8 *)(lVar19 + 0x188);
        lStack_a8 = *(long *)(lVar19 + 0x198);
        uStack_90 = 0;
        uStack_88 = 0;
        if (lStack_a8 != 0) {
          piVar18 = (int *)(lStack_a8 + 0x14);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar8) {
              *piVar18 = *piVar18 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          uVar13 = *(uint *)(lVar19 + 0x164);
        }
        puStack_d0 = puVar15;
        puStack_98 = &uStack_90;
        if ((int)uVar13 < 3) {
          uStack_90 = **(undefined8 **)(lVar19 + 0x1a8);
          uStack_88 = (*(undefined8 **)(lVar19 + 0x1a8))[1];
        }
        else {
          uStack_e0 = (code *)(ulong)uVar6;
          func_0x000109a84868(&uStack_e0,lVar19 + 0x160);
        }
        __ZNSt3__15mutex6unlockEv(lVar19 + 0x210);
        __ZNSt3__15mutex4lockEv(lVar19 + 0x1d0);
        FUN_10aab71cc(*(undefined8 *)(*(long *)(lVar19 + 0x10) + 8));
        param_2 = (float *)&uStack_e0;
        FUN_10aab233c(&plStack_110,*(undefined8 *)(lVar19 + 0x10));
        __ZNSt3__15mutex6unlockEv(lVar19 + 0x1d0);
        if (plStack_110 == (long *)0x0) {
LAB_10ac71958:
          if (lStack_a8 != 0) {
            piVar18 = (int *)(lStack_a8 + 0x14);
            do {
              iVar5 = *piVar18;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar8) {
                *piVar18 = iVar5 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar5 + -1 == 0) {
              func_0x000109a848d4(&uStack_e0);
            }
          }
          lStack_a8 = 0;
          uStack_c8 = 0;
          puStack_d0 = (undefined8 *)0x0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          if (0 < uStack_e0._4_4_) {
            lVar19 = 0;
            do {
              *(undefined4 *)((long)pppuStack_a0 + lVar19 * 4) = 0;
              lVar19 = lVar19 + 1;
            } while (lVar19 < uStack_e0._4_4_);
          }
          if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
            _free(puStack_98[-1]);
          }
          goto LAB_10ac719cc;
        }
        iVar5 = (int)param_1[1];
        uVar14 = (plStack_110[6] - plStack_110[5] >> 5) * -0xf0f0f0f0f0f0f0f;
        plVar11 = plStack_110;
        if (uVar14 < (ulong)(long)iVar5 || uVar14 - (long)iVar5 == 0) {
LAB_10ac7194c:
          plStack_110 = (long *)0x0;
          (**(code **)(*plVar11 + 8))();
          goto LAB_10ac71958;
        }
        lVar19 = plStack_110[5] + (long)iVar5 * 0x220;
        if ((*(long *)(lVar19 + 0x20) != *(long *)(lVar19 + 0x18)) &&
           (0x218 < (ulong)(*(long *)(lVar19 + 0x20) - *(long *)(lVar19 + 0x18)))) {
          param_2 = (float *)0x88;
          func_0x0001073b504c(&pfStack_128);
          lVar16 = 0;
          uVar14 = 0;
          do {
            pfVar23 = pfStack_118;
            lVar21 = *(long *)(lVar19 + 0x18);
            if ((ulong)(*(long *)(lVar19 + 0x20) - lVar21 >> 3) <= uVar14) goto LAB_10ac71c30;
            fVar26 = *(float *)(lVar21 + lVar16) / (float)*(int *)(lVar19 + 0x188);
            if (pfStack_120 < pfStack_118) {
              pfVar24 = pfStack_120 + 1;
              *pfStack_120 = fVar26;
            }
            else {
              lVar20 = (long)pfStack_120 - (long)pfStack_128;
              uVar1 = (lVar20 >> 2) + 1;
              if (uVar1 >> 0x3e != 0) {
                FUN_10a001cf8();
                goto LAB_10ac71c30;
              }
              uVar17 = (long)pfStack_118 - (long)pfStack_128 >> 1;
              if (uVar17 <= uVar1) {
                uVar17 = uVar1;
              }
              if (0x7ffffffffffffffb < (ulong)((long)pfStack_118 - (long)pfStack_128)) {
                uVar17 = 0x3fffffffffffffff;
              }
              ppfVar10 = &pfStack_128;
              FUN_10a001d0c();
              param_2 = pfStack_128;
              pfVar4 = (float *)((long)ppfVar10 + lVar20);
              pfVar23 = (float *)((long)ppfVar10 + uVar17 * 4);
              pfVar22 = (float *)((long)pfVar4 - ((long)pfStack_120 - (long)pfStack_128));
              pfVar24 = pfVar4 + 1;
              *pfVar4 = fVar26;
              _memcpy(pfVar22);
              bVar8 = pfStack_128 != (float *)0x0;
              pfStack_128 = pfVar22;
              pfStack_118 = pfVar23;
              if (bVar8) {
                pfStack_120 = pfVar24;
                __ZdlPv();
                pfVar23 = pfStack_118;
              }
            }
            fVar26 = *(float *)(lVar21 + lVar16 + 4) / (float)*(int *)(lVar19 + 0x18c);
            if (pfVar24 < pfVar23) {
              pfVar25 = pfVar24 + 1;
              *pfVar24 = fVar26;
            }
            else {
              lVar21 = (long)pfVar24 - (long)pfStack_128;
              uVar1 = (lVar21 >> 2) + 1;
              pfStack_120 = pfVar24;
              if (uVar1 >> 0x3e != 0) {
                FUN_10a001cf8();
                goto LAB_10ac71c30;
              }
              uVar17 = (long)pfVar23 - (long)pfStack_128 >> 1;
              if (uVar17 <= uVar1) {
                uVar17 = uVar1;
              }
              if (0x7ffffffffffffffb < (ulong)((long)pfVar23 - (long)pfStack_128)) {
                uVar17 = 0x3fffffffffffffff;
              }
              ppfVar10 = &pfStack_128;
              FUN_10a001d0c();
              pfVar23 = (float *)((long)ppfVar10 + lVar21);
              pfVar4 = (float *)((long)ppfVar10 + uVar17 * 4);
              pfVar22 = (float *)((long)pfVar23 - ((long)pfStack_120 - (long)pfStack_128));
              pfVar25 = pfVar23 + 1;
              *pfVar23 = fVar26;
              param_2 = pfStack_128;
              _memcpy(pfVar22);
              bVar8 = pfStack_128 != (float *)0x0;
              pfStack_128 = pfVar22;
              pfStack_118 = pfVar4;
              if (bVar8) {
                pfStack_120 = pfVar25;
                __ZdlPv();
              }
            }
            plVar11 = plStack_110;
            uVar14 = uVar14 + 1;
            lVar16 = lVar16 + 8;
            pfStack_120 = pfVar25;
          } while (lVar16 != 0x220);
          plStack_110 = (long *)0x0;
          if (plVar11 == (long *)0x0) goto LAB_10ac71958;
          goto LAB_10ac7194c;
        }
        goto LAB_10ac71c24;
      }
    }
    FUN_10a00946c(&UNK_10f63b8ac);
  }
  else {
LAB_10ac719cc:
    plVar11 = (long *)param_1[3];
    if ((plVar11 != (long *)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), plVar11 != (long *)0x0)) {
      puVar15 = (undefined8 *)param_1[2];
      if (puVar15 != (undefined8 *)0x0) {
        if (*(char *)(puVar15 + 8) == '\x01') {
          pcVar9 = (code *)*puVar15;
          uStack_e0 = (code *)0x0;
          ppuStack_d8 = (undefined **)0x0;
          puStack_d0 = (undefined8 *)0x0;
          FUN_10a0ca588(&uStack_e0,pfStack_128,pfStack_120,
                        (long)pfStack_120 - (long)pfStack_128 >> 2);
          (*pcVar9)(&uStack_e0,puVar15);
          if ((undefined **)uStack_e0 != (undefined **)0x0) {
            ppuStack_d8 = (undefined **)uStack_e0;
            __ZdlPv();
          }
        }
        else if (*(char *)(puVar15 + 8) == '\x02') {
          puVar12 = puVar15;
          FUN_10a688b40();
          if (puVar12 == (undefined8 *)0x0) {
            if (param_2 != (float *)0x0) {
              plStack_108 = (long *)puVar15[1];
              plStack_110 = (long *)*puVar15;
              if (puVar15[1] != 0) {
                plVar2 = (long *)(puVar15[1] + 8);
                do {
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar8) {
                    *plVar2 = *plVar2 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
              lStack_100 = 0;
              lStack_f8 = 0;
              uStack_f0 = 0;
              FUN_10a0ca588(&lStack_100,pfStack_128,pfStack_120,
                            (long)pfStack_120 - (long)pfStack_128 >> 2);
              uStack_e0 = FUN_10ac7a6dc;
              ppuStack_d8 = &PTR_FUN_110c66f58;
              puVar15 = (undefined8 *)0x28;
              __Znwm();
              puVar15[1] = plStack_108;
              *puVar15 = plStack_110;
              plStack_110 = (long *)0x0;
              plStack_108 = (long *)0x0;
              puVar15[3] = 0;
              puVar15[4] = 0;
              puVar15[2] = 0;
              FUN_10a0ca588();
              puStack_d0 = puVar15;
              FUN_10a4634ec(param_2,&uStack_e0);
              (*(code *)*ppuStack_d8)(&ppuStack_d8);
              if (lStack_100 != 0) {
                lStack_f8 = lStack_100;
                __ZdlPv();
              }
              plVar2 = plStack_108;
              if (plStack_108 != (long *)0x0) {
                plVar3 = plStack_108 + 1;
                do {
                  lVar19 = *plVar3;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                  if (bVar8) {
                    *plVar3 = lVar19 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (lVar19 == 0) {
                  (**(code **)(*plStack_108 + 0x10))(plStack_108);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
                }
              }
            }
          }
          else {
            *puVar12 = CONCAT44((int)((ulong)*puVar12 >> 0x20) + 1,(int)*puVar12 + 1);
            FUN_10ac7a50c(*puVar15,&pfStack_128);
            iVar5 = *(int *)((long)puVar12 + 4) + -1;
            *(int *)((long)puVar12 + 4) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)puVar12 = 0;
            }
          }
        }
      }
      plVar2 = plVar11 + 1;
      do {
        lVar19 = *plVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = lVar19 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    if (pfStack_128 != (float *)0x0) {
      pfStack_120 = pfStack_128;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
    ___stack_chk_fail();
LAB_10ac71c24:
    FUN_10a00946c(&UNK_10f63b8ac);
  }
LAB_10ac71c30:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10ac71c34);
  (*pcVar9)();
}



/* Entry: 10ac71d5c; end: 10ac71d93;  */

long FUN_10ac71d5c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10ac71d94; end: 10ac72193;  */

void FUN_10ac71d94(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined8 uStack_130;
  undefined4 auStack_128 [2];
  uint *puStack_120;
  undefined8 uStack_118;
  uint uStack_110;
  uint uStack_10c;
  int iStack_108;
  int iStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long lStack_d8;
  int *piStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  int *piStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((*(byte *)(param_1 + 0x158) & 1) == 0) {
    return;
  }
  __ZNSt3__15mutex4lockEv(param_1 + 0x210);
  uStack_a8 = *(undefined8 *)(param_1 + 0x168);
  uStack_b0 = *(ulong *)(param_1 + 0x160);
  uStack_98 = *(undefined8 *)(param_1 + 0x178);
  lStack_a0 = *(long *)(param_1 + 0x170);
  piStack_70 = (int *)((ulong)&uStack_b0 | 8);
  iVar1 = *(int *)(param_1 + 0x164);
  uStack_88 = *(undefined8 *)(param_1 + 0x188);
  uStack_90 = *(undefined8 *)(param_1 + 0x180);
  lStack_78 = *(long *)(param_1 + 0x198);
  uStack_80 = *(undefined8 *)(param_1 + 400);
  uStack_60 = 0;
  uStack_58 = 0;
  if (*(long *)(param_1 + 0x198) != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0x198) + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = *piVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    iVar1 = *(int *)(param_1 + 0x164);
  }
  puStack_68 = &uStack_60;
  if (iVar1 < 3) {
    uStack_60 = **(undefined8 **)(param_1 + 0x1a8);
    uStack_58 = (*(undefined8 **)(param_1 + 0x1a8))[1];
  }
  else {
    uStack_b0 = uStack_b0 & 0xffffffff;
    func_0x000109a84868(&uStack_b0,param_1 + 0x160);
  }
  *(undefined1 *)(param_1 + 0x158) = 0;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x210);
  if (lStack_a0 != 0) {
    uVar6 = (ulong)uStack_b0._4_4_;
    if ((int)uStack_b0._4_4_ < 3) {
      lVar7 = (long)uStack_a8._4_4_ * (long)(int)uStack_a8;
    }
    else {
      lVar7 = 1;
      piVar8 = piStack_70;
      do {
        lVar7 = lVar7 * *piVar8;
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 1;
      } while (uVar6 != 0);
    }
    if (lVar7 != 0) {
      uStack_110 = 0x42ff0000;
      iStack_104 = 0;
      uStack_100 = 0;
      uStack_10c = 0;
      iStack_108 = 0;
      piStack_d0 = &iStack_108;
      uStack_f4 = 0;
      uStack_f0 = 0;
      uStack_fc = 0;
      uStack_f8 = 0;
      uStack_e4 = 0;
      uStack_ec = 0;
      uStack_e8 = 0;
      lStack_d8 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_160 = 0x1010000;
      uStack_158 = (uint *)&uStack_b0;
      uStack_150 = 0;
      uStack_14c = 0;
      auStack_128[0] = 0x2010000;
      uStack_118 = 0;
      puStack_120 = &uStack_110;
      puStack_c8 = &uStack_c0;
      func_0x000109a491e0(&uStack_160,auStack_128,0);
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_160 = 0x1010000;
      auStack_128[0] = 0x2010000;
      uStack_118 = 0;
      puStack_120 = &uStack_110;
      uStack_158 = &uStack_110;
      func_0x000109ac9fc8(&uStack_160,auStack_128,0,0);
      if (CONCAT44(uStack_fc,uStack_100) != 0) {
        uVar6 = (ulong)uStack_10c;
        if ((int)uStack_10c < 3) {
          lVar7 = (long)iStack_104 * (long)iStack_108;
        }
        else {
          lVar7 = 1;
          piVar8 = piStack_d0;
          do {
            lVar7 = lVar7 * *piVar8;
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 1;
          } while (uVar6 != 0);
        }
        if ((lVar7 != 0) && ((uStack_110 & 0xff8) == 0x18)) {
          plVar5 = *(long **)(param_1 + 0x1c0);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x28))();
            if ((int)plVar5 == iStack_104) {
              plVar5 = *(long **)(param_1 + 0x1c0);
              (**(code **)(*plVar5 + 0x30))();
              if ((int)plVar5 == iStack_108) {
                plVar5 = *(long **)(param_1 + 0x1c0);
                (**(code **)(*plVar5 + 0x50))();
                if ((int)plVar5 == 4) goto LAB_10ac72000;
              }
            }
          }
          lVar7 = *(long *)(param_1 + 8);
          FUN_10a2421c8();
          plVar5 = *(long **)(lVar7 + 0x228);
          uStack_160 = 0;
          uVar9 = NEON_rev64(CONCAT44(iStack_104,iStack_108),4);
          uStack_15c = (undefined4)uVar9;
          uStack_158._0_4_ = (undefined4)((ulong)uVar9 >> 0x20);
          uStack_14c = 0;
          uStack_148 = 0;
          uStack_158._4_4_ = 1;
          uStack_150 = 4;
          uStack_144 = 1;
          uStack_130 = 0;
          uStack_140 = 0;
          uStack_138 = 0;
          (**(code **)(*plVar5 + 0x20))(plVar5,&uStack_160);
          FUN_10a099d88(param_1 + 0x1c0,plVar5);
LAB_10ac72000:
          *(undefined4 *)(param_1 + 0x280) = 2;
          (**(code **)(**(long **)(param_1 + 0x1c0) + 0x98))
                    (*(long **)(param_1 + 0x1c0),CONCAT44(uStack_fc,uStack_100),0,0);
          if (lStack_d8 != 0) {
            piVar8 = (int *)(lStack_d8 + 0x14);
            do {
              iVar1 = *piVar8;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
              if (bVar3) {
                *piVar8 = iVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar1 + -1 == 0) {
              func_0x000109a848d4(&uStack_110);
            }
          }
          lStack_d8 = 0;
          uStack_f8 = 0;
          uStack_f4 = 0;
          uStack_100 = 0;
          uStack_fc = 0;
          uStack_e8 = 0;
          uStack_e4 = 0;
          uStack_f0 = 0;
          uStack_ec = 0;
          if (0 < (int)uStack_10c) {
            lVar7 = 0;
            do {
              piStack_d0[lVar7] = 0;
              lVar7 = lVar7 + 1;
            } while (lVar7 < (int)uStack_10c);
          }
          if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
            _free(puStack_c8[-1]);
          }
          if (lStack_78 != 0) {
            piVar8 = (int *)(lStack_78 + 0x14);
            do {
              iVar1 = *piVar8;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
              if (bVar3) {
                *piVar8 = iVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar1 + -1 == 0) {
              func_0x000109a848d4(&uStack_b0);
            }
          }
          lStack_78 = 0;
          uStack_98 = 0;
          lStack_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          if (0 < (int)uStack_b0._4_4_) {
            lVar7 = 0;
            do {
              piStack_70[lVar7] = 0;
              lVar7 = lVar7 + 1;
            } while (lVar7 < (int)uStack_b0._4_4_);
          }
          if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
            _free(puStack_68[-1]);
          }
          return;
        }
      }
      FUN_10a00946c(&UNK_10f63b8ac);
      goto LAB_10ac72148;
    }
  }
  FUN_10a00946c(&UNK_10f63b8ac);
LAB_10ac72148:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac7214c);
  (*pcVar4)();
}



/* Entry: 10ac72194; end: 10ac722ab;  */

undefined8 ** FUN_10ac72194(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  long *plStack_f0;
  undefined8 **ppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 auStack_c8 [8];
  undefined8 *apuStack_c0 [7];
  undefined1 auStack_88 [72];
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10ac85664();
  FUN_10ac856ac(auStack_c8,param_2);
  FUN_10ac8640c(param_1,param_3,auStack_c8);
  if (lStack_40 != 0) {
    func_0x0001092b4274(&lStack_40);
  }
  iVar9 = (int)lStack_40;
  func_0x0001092ba41c(auStack_88);
  ppuVar7 = apuStack_c0;
  (*(code *)*apuStack_c0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar7;
  }
  ___stack_chk_fail();
  if (iVar9 != 0) {
    ___cxa_begin_catch(ppuVar7);
    if (param_3 != (long *)0x0) {
      (**(code **)(*param_3 + 8))(param_3);
    }
    ___cxa_rethrow();
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac72288);
    (*pcVar6)();
  }
  __Unwind_Resume(ppuVar7);
  ppuVar8 = ppuVar7;
  func_0x000104bd46a0();
  pcStack_d8 = FUN_10ac722ac;
  plStack_f0 = param_3;
  ppuStack_e8 = ppuVar7;
  puStack_e0 = &stack0xfffffffffffffff0;
  FUN_10ac866fc(&puStack_100);
  puVar4 = puStack_100;
  plVar11 = ppuVar8[1];
  puStack_100 = *ppuVar8;
  puVar5 = ppuVar8[1];
  ppuVar8[1] = puStack_f8;
  puStack_f8 = puVar5;
  *ppuVar8 = puVar4;
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
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
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  return ppuVar8;
}



/* Entry: 10ac722ac; end: 10ac72323;  */

undefined8 * FUN_10ac722ac(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10ac866fc(&uStack_30);
  plVar5 = (long *)param_1[1];
  uVar7 = param_1[1];
  uVar6 = *param_1;
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
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
      uStack_30 = uVar6;
      uStack_28 = uVar7;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10ac72324; end: 10ac7251b;  */

long * FUN_10ac72324(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_478 [16];
  undefined1 auStack_468 [272];
  undefined1 auStack_358 [8];
  undefined **appuStack_350 [2];
  undefined1 auStack_340 [272];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  code *pcStack_168;
  undefined **appuStack_160 [7];
  long lStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_e0 [152];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[0x53] = (long)&PTR_FUN_110c383b8;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  *(undefined2 *)(param_1 + 0x56) = 0x100;
  plVar4 = param_1;
  lStack_1b8 = param_2;
  FUN_10a1da04c(param_1,&PTR_PTR_110c62350,param_2);
  *plVar4 = (long)&PTR_FUN_110c62108;
  plVar4[2] = (long)&PTR_FUN_110c62238;
  plVar4[5] = (long)&PTR_DAT_110c62268;
  plVar4[0x53] = (long)&PTR_DAT_110c62310;
  plVar4[0x15] = (long)&PTR_DAT_110c622c0;
  plVar7 = plVar4 + 0x51;
  plVar4[0x52] = 0;
  *plVar7 = 0;
  lVar5 = *(long *)(param_2 + 0x870);
  lStack_1b0 = *(long *)(lVar5 + 0x38);
  if (lStack_1b0 == 0) {
    lStack_1b0 = *(long *)(lVar5 + 0x28);
    lStack_108 = *(long *)(lVar5 + 0x30);
  }
  else {
    lStack_108 = *(long *)(lVar5 + 0x40);
  }
  if (lStack_108 != 0) {
    plVar4 = (long *)(lStack_108 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  pcStack_168 = FUN_10ac864c0;
  appuStack_160[0] = &PTR_DAT_110c67310;
  puStack_120 = &UNK_109896774;
  ppuStack_118 = &PTR_DAT_110b17068;
  uStack_198 = 0;
  uStack_190 = 0;
  puStack_1a8 = &UNK_1053a6a3c;
  ppuStack_1a0 = &PTR_DAT_110ae9180;
  lStack_128 = lStack_1b0;
  lStack_110 = lStack_1b0;
  FUN_10ac72194(auStack_e0,&pcStack_168,&lStack_1b8);
  FUN_10ac722ac(plVar7,auStack_e0);
  FUN_10ac864dc(auStack_e0);
  func_0x0001092ba41c(&lStack_128);
  (*(code *)*appuStack_160[0])(appuStack_160);
  plVar4 = &lStack_1b0;
  func_0x0001092ba41c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10ac864dc(auStack_e0);
  func_0x0001092ba41c(&lStack_128);
  (*(code *)*appuStack_160[0])(appuStack_160);
  func_0x0001092ba41c(&lStack_1b0);
  func_0x00010a06e274(&uStack_1c8);
  func_0x00010ac852c0(plVar7);
  FUN_10a00dc70(param_1,&PTR_PTR_110c62350);
  __Unwind_Resume();
  *plVar4 = (long)&PTR_FUN_110c62108;
  plVar4[2] = (long)&PTR_FUN_110c62238;
  plVar4[5] = (long)&PTR_DAT_110c62268;
  plVar4[0x53] = (long)&PTR_DAT_110c62310;
  plVar4[0x15] = (long)&PTR_DAT_110c622c0;
  lVar5 = plVar4[0x51];
  func_0x00010a94f7e8(lVar5 + 0x250);
  func_0x00010a94f7e8(lVar5 + 0x260);
  plVar7 = *(long **)(lVar5 + 0x278);
  *(undefined8 *)(lVar5 + 0x278) = 0;
  *(undefined8 *)(lVar5 + 0x270) = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  func_0x00010ac852c0(plVar4 + 0x51);
  *plVar4 = (long)&PTR_FUN_110c65f38;
  plVar4[2] = (long)&PTR_FUN_110bb3968;
  plVar4[5] = (long)&PTR_DAT_110bb3998;
  plVar4[0x53] = (long)&PTR_DAT_110c66098;
  plVar4[0x15] = (long)&PTR_DAT_110bb39f0;
  FUN_10a042c0c(plVar4 + 0x4d);
  func_0x00010a042c64(plVar4 + 0x48);
  func_0x00010a0523dc(plVar4 + 0x45);
  if ((char)plVar4[0x3c] == '\x01') {
    func_0x00010a042d30(plVar4 + 0x3a);
  }
  plVar4[0x15] = (long)&PTR_FUN_110b9f768;
  FUN_10a1c00f4(plVar4 + 0x15);
  *plVar4 = (long)&PTR_DAT_110c660e8;
  plVar4[2] = (long)&PTR_FUN_110b9f848;
  plVar4[5] = (long)&PTR_DAT_110b9f878;
  plVar4[0x53] = (long)&PTR_DAT_110c661b8;
  FUN_10a042dcc(plVar4 + 0x13);
  *plVar4 = (long)&PTR_DAT_110c60a00;
  plVar4[2] = (long)&PTR_DAT_110c60a88;
  plVar4[5] = (long)&PTR_DAT_110c60ab8;
  ppuVar6 = (undefined **)(plVar4 + 0xb);
  puVar9 = (undefined8 *)plVar4[0xc];
  for (puVar8 = (undefined8 *)*ppuVar6; puVar8 != puVar9; puVar8 = puVar8 + 1) {
    FUN_10a009538(auStack_478,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_350,auStack_478);
    _memcpy(auStack_340,auStack_468,0x110);
    appuStack_350[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_358,appuStack_350);
    __ZNSt13runtime_errorD2Ev(appuStack_350);
    func_0x000109d1b350(*puVar8,auStack_358);
    __ZNSt13exception_ptrD1Ev(auStack_358);
    __ZNSt13runtime_errorD2Ev(auStack_478);
  }
  FUN_10ac634b8(ppuVar6);
  plVar7 = plVar4 + 10;
  if ((*plVar7 != 0) && (*(undefined ***)(*(long *)(*plVar7 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(plVar4 + 3);
  if ((plVar4[0x12] != 0) && (lVar5 = *(long *)(plVar4[0x12] + 0x828), lVar5 != 0)) {
    FUN_10a1dfb2c(lVar5,plVar4);
  }
  if (*(char *)((long)plVar4 + 0x8f) < '\0') {
    __ZdlPv(plVar4[0xf]);
  }
  appuStack_350[0] = ppuVar6;
  FUN_10ac78cf4(appuStack_350);
  lVar5 = *plVar7;
  *plVar7 = 0;
  if (lVar5 != 0) {
    FUN_10ac7d690(plVar7);
  }
  if (plVar4[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar4[5] = (long)&PTR_DAT_110b17898;
  func_0x00010a004dac(plVar4 + 6);
  plVar4[2] = (long)&PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(plVar4 + 3);
  return plVar4;
}



/* Entry: 10ac7251c; end: 10ac7266f;  */

undefined8 * FUN_10ac7251c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c62108;
  param_1[2] = &PTR_FUN_110c62238;
  param_1[5] = &PTR_DAT_110c62268;
  param_1[0x53] = &PTR_DAT_110c62310;
  param_1[0x15] = &PTR_DAT_110c622c0;
  lVar7 = param_1[0x51];
  func_0x00010a94f7e8(lVar7 + 0x250);
  func_0x00010a94f7e8(lVar7 + 0x260);
  plVar5 = *(long **)(lVar7 + 0x278);
  *(undefined8 *)(lVar7 + 0x278) = 0;
  *(undefined8 *)(lVar7 + 0x270) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x00010ac852c0(param_1 + 0x51);
  *param_1 = &PTR_FUN_110c65f38;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x53] = &PTR_DAT_110c66098;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c660e8;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x53] = &PTR_DAT_110c661b8;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar4 = (undefined **)(param_1 + 0xb);
  puVar8 = (undefined8 *)param_1[0xc];
  for (puVar6 = (undefined8 *)*ppuVar4; puVar6 != puVar8; puVar6 = puVar6 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar6,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar4);
  plVar5 = param_1 + 10;
  if ((*plVar5 != 0) && (*(undefined ***)(*(long *)(*plVar5 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar7 = *(long *)(param_1[0x12] + 0x828), lVar7 != 0)) {
    FUN_10a1dfb2c(lVar7,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar4;
  FUN_10ac78cf4(appuStack_180);
  lVar7 = *plVar5;
  *plVar5 = 0;
  if (lVar7 != 0) {
    FUN_10ac7d690(plVar5);
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



/* Entry: 10ac72670; end: 10ac7269b;  */

undefined8 * FUN_10ac72670(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c62108;
  param_1[2] = &PTR_FUN_110c62238;
  param_1[5] = &PTR_DAT_110c62268;
  param_1[0x53] = &PTR_DAT_110c62310;
  param_1[0x15] = &PTR_DAT_110c622c0;
  lVar7 = param_1[0x51];
  func_0x00010a94f7e8(lVar7 + 0x250);
  func_0x00010a94f7e8(lVar7 + 0x260);
  plVar5 = *(long **)(lVar7 + 0x278);
  *(undefined8 *)(lVar7 + 0x278) = 0;
  *(undefined8 *)(lVar7 + 0x270) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x00010ac852c0(param_1 + 0x51);
  *param_1 = &PTR_FUN_110c65f38;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x53] = &PTR_DAT_110c66098;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c660e8;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x53] = &PTR_DAT_110c661b8;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar4 = (undefined **)(param_1 + 0xb);
  puVar8 = (undefined8 *)param_1[0xc];
  for (puVar6 = (undefined8 *)*ppuVar4; puVar6 != puVar8; puVar6 = puVar6 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar6,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar4);
  plVar5 = param_1 + 10;
  if ((*plVar5 != 0) && (*(undefined ***)(*(long *)(*plVar5 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar7 = *(long *)(param_1[0x12] + 0x828), lVar7 != 0)) {
    FUN_10a1dfb2c(lVar7,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar4;
  FUN_10ac78cf4(appuStack_180);
  lVar7 = *plVar5;
  *plVar5 = 0;
  if (lVar7 != 0) {
    FUN_10ac7d690(plVar5);
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



/* Entry: 10ac7269c; end: 10ac726f7;  */

void FUN_10ac7269c(void)

{
  FUN_10ac7251c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac726f8; end: 10ac72727;  */

void FUN_10ac726f8(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10ac7251c((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac72728; end: 10ac7290b;  */

void FUN_10ac72728(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined4 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *extraout_x8;
  ulong uVar13;
  int *piVar14;
  long unaff_x20;
  undefined *puVar15;
  long *plVar16;
  long lVar17;
  undefined *puStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  code *pcStack_118;
  long *plStack_110;
  undefined8 *puStack_108;
  undefined4 auStack_d0 [2];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [4];
  int iStack_b4;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined1 auStack_68 [16];
  undefined4 auStack_58 [2];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar16 = param_2;
  if ((*param_2 != 0) && (plVar11 = *(long **)(*param_2 + 0x268), plVar11 != (long *)0x0)) {
    unaff_x20 = *(long *)(param_1 + 0x288);
    (**(code **)(*plVar11 + 0xe8))();
    if ((int)plVar11 == 4) {
      uVar13 = (ulong)*(byte *)(*(long *)(unaff_x20 + 8) + 0x29);
      if (uVar13 < 6) {
        FUN_10aba1500(&lStack_40,*(undefined8 *)(*(long *)(unaff_x20 + 8) + uVar13 * 8 + 0x30),
                      *param_2,0);
        __ZNSt3__15mutex4lockEv(unaff_x20 + 0x1d0);
        iVar3 = *(int *)(lStack_40 + 0x24);
        FUN_10a0f3910(auStack_b8,lStack_40 + 0x10,0);
        uVar10 = 3;
        if (iVar3 != 5) {
          uVar10 = 1;
        }
        uStack_48 = 0;
        auStack_58[0] = 0x1010000;
        lStack_c8 = unaff_x20 + 0xd8;
        auStack_d0[0] = 0x2010000;
        uStack_c0 = 0;
        puStack_50 = auStack_b8;
        func_0x000109ac9fc8(auStack_58,auStack_d0,uVar10,0);
        if (lStack_80 != 0) {
          piVar14 = (int *)(lStack_80 + 0x14);
          do {
            iVar3 = *piVar14;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar6) {
              *piVar14 = iVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar3 + -1 == 0) {
            func_0x000109a848d4(auStack_b8);
          }
        }
        lStack_80 = 0;
        uStack_a0 = 0;
        uStack_a8 = 0;
        uStack_90 = 0;
        uStack_98 = 0;
        if (0 < iStack_b4) {
          lVar12 = 0;
          do {
            *(undefined4 *)(lStack_78 + lVar12 * 4) = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < iStack_b4);
        }
        if (puStack_70 != auStack_68 && puStack_70 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_70 + -8));
        }
        __ZNSt3__15mutex6unlockEv(unaff_x20 + 0x1d0);
        if (plStack_38 != (long *)0x0) {
          plVar16 = plStack_38 + 1;
          do {
            lVar12 = *plVar16;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar6) {
              *plVar16 = lVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_38 + 0x10))(plStack_38);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
          }
        }
        return;
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10ac728c8);
      (*pcVar7)();
    }
  }
  puVar8 = &UNK_10f63b8ac;
  FUN_10a00946c();
  func_0x000104bd46a0();
  func_0x00010567aa40(auStack_b8);
  __ZNSt3__15mutex6unlockEv(unaff_x20 + 0x1d0);
  func_0x00010a136de4(&lStack_40);
  puVar15 = puVar8;
  __Unwind_Resume();
  ppuVar9 = &puStack_140;
  puVar15 = *(undefined **)(puVar15 + 0x288);
  if (*(int *)(puVar15 + 0x280) == 0) {
    *(undefined4 *)(puVar15 + 0x280) = 1;
  }
  puStack_140 = &UNK_10f69f4e1;
  uStack_138 = 0x1b;
  if (*plVar16 != 0) {
    if (*(long *)(puVar15 + 0xe8) == 0) {
      puStack_140 = &UNK_10f69f4fd;
      uStack_138 = 0x15;
    }
    else {
      uVar13 = (ulong)*(uint *)(puVar15 + 0xdc);
      if ((int)*(uint *)(puVar15 + 0xdc) < 3) {
        lVar12 = (long)*(int *)(puVar15 + 0xe4) * (long)*(int *)(puVar15 + 0xe0);
      }
      else {
        lVar12 = 1;
        piVar14 = *(int **)(puVar15 + 0x118);
        do {
          lVar12 = lVar12 * *piVar14;
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 1;
        } while (uVar13 != 0);
      }
      puStack_140 = &UNK_10f69f4fd;
      uStack_138 = 0x15;
      if (lVar12 != 0) {
        func_0x00010a2e268c(puVar15 + 0x250);
        bVar4 = *(byte *)(*(long *)(puVar15 + 8) + 0xe2d);
        lVar17 = *(long *)(puVar15 + 0x250);
        lVar12 = *(long *)(puVar15 + 600);
        if (lVar12 != 0) {
          plVar16 = (long *)(lVar12 + 0x10);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar6) {
              *plVar16 = *plVar16 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar6) {
              *plVar16 = *plVar16 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        uStack_138 = CONCAT71(uStack_138._1_7_,(bVar4 & 0xfd) != 0);
        puStack_140 = puVar15;
        lStack_130 = lVar17;
        lStack_128 = lVar12;
        if (*(int *)(puVar15 + 0x138) == 0) {
          FUN_10ac71204(&puStack_140);
        }
        else {
          puVar1 = (undefined8 *)(puVar15 + 0x18);
          plVar16 = *(long **)(puVar15 + 0x28);
          puStack_108 = puVar1;
          if (plVar16 == (long *)0x0) {
            plVar16 = (long *)0x30;
            __Znwm();
            *plVar16 = (long)puStack_140;
            *(undefined1 *)(plVar16 + 1) = (undefined1)uStack_138;
            plVar16[2] = lVar17;
            plVar16[3] = lVar12;
            if (lVar12 != 0) {
              plVar11 = (long *)(lVar12 + 0x10);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar6) {
                  *plVar11 = *plVar11 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            plVar16[5] = 0x10ac851b8;
            pcStack_118 = FUN_10ac85148;
            plStack_110 = plVar16;
            (**(code **)*puVar1)(puVar1,&pcStack_118);
          }
          else {
            lStack_120 = 0;
            (**(code **)(*plVar16 + 0x28))(plVar16,0,&lStack_120);
            if (lStack_120 != 0) {
              func_0x0001092af97c(&lStack_120);
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10ac72b4c);
              (*pcVar7)();
            }
            plVar11 = (long *)0x38;
            __Znwm();
            *plVar11 = (long)puStack_140;
            *(undefined1 *)(plVar11 + 1) = (undefined1)uStack_138;
            plVar11[2] = lVar17;
            plVar11[3] = lVar12;
            if (lVar12 != 0) {
              plVar2 = (long *)(lVar12 + 0x10);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar6) {
                  *plVar2 = *plVar2 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            plVar11[5] = (long)FUN_10ac85184;
            plVar11[6] = (long)plVar16;
            pcStack_118 = (code *)0x10ac85118;
            plStack_110 = plVar11;
            (**(code **)*puVar1)(puVar1,&pcStack_118);
            __ZNSt13exception_ptrD1Ev(&lStack_120);
          }
          lStack_120 = 0;
          __ZNSt13exception_ptrD1Ev(&lStack_120);
        }
        if (lVar12 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv(lVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(lVar12);
        }
        return;
      }
    }
  }
  FUN_10a0edfc4();
  if (puVar8 != (undefined *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(puVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(puVar8);
  }
  __Unwind_Resume();
  lVar12 = *(long *)((long)ppuVar9 + 0x288);
  __ZNSt3__15mutex4lockEv(lVar12 + 0x1d0);
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  FUN_10ac7a494(extraout_x8,*(long *)(lVar12 + 0x140),*(long *)(lVar12 + 0x148),
                *(long *)(lVar12 + 0x148) - *(long *)(lVar12 + 0x140) >> 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar12 + 0x1d0);
  return;
}



/* Entry: 10ac7290c; end: 10ac72b97;  */

void FUN_10ac7290c(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 *extraout_x8;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  undefined *puVar12;
  long *plVar13;
  long lVar14;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  code *pcStack_48;
  long *plStack_40;
  undefined8 *puStack_38;
  
  ppuVar8 = &puStack_70;
  puVar12 = *(undefined **)(param_1 + 0x288);
  if (*(int *)(puVar12 + 0x280) == 0) {
    *(undefined4 *)(puVar12 + 0x280) = 1;
  }
  puStack_70 = &UNK_10f69f4e1;
  uStack_68 = 0x1b;
  if (*param_2 != 0) {
    if (*(long *)(puVar12 + 0xe8) == 0) {
      puStack_70 = &UNK_10f69f4fd;
      uStack_68 = 0x15;
    }
    else {
      uVar10 = (ulong)*(uint *)(puVar12 + 0xdc);
      if ((int)*(uint *)(puVar12 + 0xdc) < 3) {
        lVar9 = (long)*(int *)(puVar12 + 0xe4) * (long)*(int *)(puVar12 + 0xe0);
      }
      else {
        lVar9 = 1;
        piVar11 = *(int **)(puVar12 + 0x118);
        do {
          lVar9 = lVar9 * *piVar11;
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 1;
        } while (uVar10 != 0);
      }
      puStack_70 = &UNK_10f69f4fd;
      uStack_68 = 0x15;
      if (lVar9 != 0) {
        func_0x00010a2e268c(puVar12 + 0x250);
        bVar3 = *(byte *)(*(long *)(puVar12 + 8) + 0xe2d);
        lVar14 = *(long *)(puVar12 + 0x250);
        lVar9 = *(long *)(puVar12 + 600);
        if (lVar9 != 0) {
          plVar13 = (long *)(lVar9 + 0x10);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = *plVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = *plVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uStack_68 = CONCAT71(uStack_68._1_7_,(bVar3 & 0xfd) != 0);
        puStack_70 = puVar12;
        lStack_60 = lVar14;
        lStack_58 = lVar9;
        if (*(int *)(puVar12 + 0x138) == 0) {
          FUN_10ac71204(&puStack_70);
        }
        else {
          puVar1 = (undefined8 *)(puVar12 + 0x18);
          plVar13 = *(long **)(puVar12 + 0x28);
          puStack_38 = puVar1;
          if (plVar13 == (long *)0x0) {
            plVar13 = (long *)0x30;
            __Znwm();
            *plVar13 = (long)puStack_70;
            *(undefined1 *)(plVar13 + 1) = (undefined1)uStack_68;
            plVar13[2] = lVar14;
            plVar13[3] = lVar9;
            if (lVar9 != 0) {
              plVar7 = (long *)(lVar9 + 0x10);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar5) {
                  *plVar7 = *plVar7 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            plVar13[5] = 0x10ac851b8;
            pcStack_48 = FUN_10ac85148;
            plStack_40 = plVar13;
            (**(code **)*puVar1)(puVar1,&pcStack_48);
          }
          else {
            lStack_50 = 0;
            (**(code **)(*plVar13 + 0x28))(plVar13,0,&lStack_50);
            if (lStack_50 != 0) {
              func_0x0001092af97c(&lStack_50);
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac72b4c);
              (*pcVar6)();
            }
            plVar7 = (long *)0x38;
            __Znwm();
            *plVar7 = (long)puStack_70;
            *(undefined1 *)(plVar7 + 1) = (undefined1)uStack_68;
            plVar7[2] = lVar14;
            plVar7[3] = lVar9;
            if (lVar9 != 0) {
              plVar2 = (long *)(lVar9 + 0x10);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *plVar2 = *plVar2 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            plVar7[5] = (long)FUN_10ac85184;
            plVar7[6] = (long)plVar13;
            pcStack_48 = (code *)0x10ac85118;
            plStack_40 = plVar7;
            (**(code **)*puVar1)(puVar1,&pcStack_48);
            __ZNSt13exception_ptrD1Ev(&lStack_50);
          }
          lStack_50 = 0;
          __ZNSt13exception_ptrD1Ev(&lStack_50);
        }
        if (lVar9 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv(lVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(lVar9);
        }
        return;
      }
    }
  }
  FUN_10a0edfc4();
  if (unaff_x19 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __Unwind_Resume();
  lVar9 = *(long *)((long)ppuVar8 + 0x288);
  __ZNSt3__15mutex4lockEv(lVar9 + 0x1d0);
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  FUN_10ac7a494(extraout_x8,*(long *)(lVar9 + 0x140),*(long *)(lVar9 + 0x148),
                *(long *)(lVar9 + 0x148) - *(long *)(lVar9 + 0x140) >> 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar9 + 0x1d0);
  return;
}



/* Entry: 10ac72b98; end: 10ac72bf3;  */

void FUN_10ac72b98(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x288);
  __ZNSt3__15mutex4lockEv(lVar1 + 0x1d0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10ac7a494(param_1,*(long *)(lVar1 + 0x140),*(long *)(lVar1 + 0x148),
                *(long *)(lVar1 + 0x148) - *(long *)(lVar1 + 0x140) >> 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar1 + 0x1d0);
  return;
}



/* Entry: 10ac72bf4; end: 10ac72c5b;  */

void FUN_10ac72bf4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x288);
  __ZNSt3__15mutex4lockEv(lVar3 + 0x1d0);
  plVar2 = *(long **)(lVar3 + 0xd0);
  (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
  if (((ulong)plVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar3 + 0x1d0);
    return;
  }
  FUN_10a00946c(&UNK_10f63b8ac);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac72c48);
  (*pcVar1)();
}



/* Entry: 10ac72c5c; end: 10ac72d37;  */

void FUN_10ac72c5c(long param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x288);
  __ZNSt3__15mutex4lockEv(lVar5 + 0x1d0);
  if (((-1 < (int)param_2) &&
      ((param_2 & 0xffffffff) < (ulong)(*(long *)(lVar5 + 0x148) - *(long *)(lVar5 + 0x140) >> 4)))
     && (*(long *)(lVar5 + 0xe8) != 0)) {
    uVar2 = (ulong)*(uint *)(lVar5 + 0xdc);
    if ((int)*(uint *)(lVar5 + 0xdc) < 3) {
      lVar3 = (long)*(int *)(lVar5 + 0xe4) * (long)*(int *)(lVar5 + 0xe0);
    }
    else {
      lVar3 = 1;
      piVar4 = *(int **)(lVar5 + 0x118);
      do {
        lVar3 = lVar3 * *piVar4;
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 1;
      } while (uVar2 != 0);
    }
    if (lVar3 != 0) {
      uVar2 = *(ulong *)(*(long *)(lVar5 + 0xd0) + 0x50);
      func_0x0001094aae8c(uVar2,param_2,param_3);
      if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar5 + 0x1d0);
        return;
      }
      FUN_10a00946c(&UNK_10f63b8ac);
      goto LAB_10ac72d1c;
    }
  }
  FUN_10a00946c(&UNK_10f63b8ac);
LAB_10ac72d1c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac72d20);
  (*pcVar1)();
}



/* Entry: 10ac72d38; end: 10ac72f17;  */

void FUN_10ac72d38(long param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined ***pppuVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  int *piVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined **ppuVar12;
  long lVar13;
  long lStack_98;
  undefined ***pppuStack_90;
  undefined8 uStack_88;
  undefined ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  undefined ***pppuStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(param_1 + 0x288);
  pppuVar10 = *(undefined ****)(param_1 + 0x290);
  if (pppuVar10 != (undefined ***)0x0) {
    pppuVar11 = pppuVar10 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar11,0x10);
      if (bVar3) {
        *pppuVar11 = (undefined **)((long)*pppuVar11 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*param_2 != 0) {
    func_0x00010a2e268c(lVar13 + 0x260);
    if (*(long *)(lVar13 + 0xe8) != 0) {
      uVar6 = (ulong)*(uint *)(lVar13 + 0xdc);
      if ((int)*(uint *)(lVar13 + 0xdc) < 3) {
        lVar7 = (long)*(int *)(lVar13 + 0xe4) * (long)*(int *)(lVar13 + 0xe0);
      }
      else {
        lVar7 = 1;
        piVar9 = *(int **)(lVar13 + 0x118);
        do {
          lVar7 = lVar7 * *piVar9;
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 1;
        } while (uVar6 != 0);
      }
      if (lVar7 != 0) {
        uStack_88 = *(undefined8 *)(lVar13 + 0x260);
        pppuVar11 = *(undefined ****)(lVar13 + 0x268);
        if (pppuVar11 != (undefined ***)0x0) {
          pppuVar5 = pppuVar11 + 2;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
            if (bVar3) {
              *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
            if (bVar3) {
              *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lVar7 = *(long *)(lVar13 + 0xd0);
        pcStack_78 = FUN_10ac85318;
        ppuStack_70 = &PTR_FUN_110c672c0;
        if (pppuVar10 != (undefined ***)0x0) {
          pppuVar5 = pppuVar10 + 2;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
            if (bVar3) {
              *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (pppuVar11 != (undefined ***)0x0) {
          pppuVar5 = pppuVar11 + 2;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
            if (bVar3) {
              *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lStack_98 = lVar13;
        pppuStack_90 = pppuVar10;
        pppuStack_80 = pppuVar11;
        lStack_68 = lVar13;
        pppuStack_60 = pppuVar10;
        uStack_58 = uStack_88;
        pppuStack_50 = pppuVar11;
        func_0x0001094ab4f4(*(undefined8 *)(lVar7 + 0x50),&pcStack_78);
        pppuVar5 = &ppuStack_70;
        (*(code *)*ppuStack_70)();
        if (pppuVar11 != (undefined ***)0x0) {
          pppuVar5 = pppuVar11;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (pppuVar10 != (undefined ***)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar5 = pppuVar10;
        }
        if (pppuVar11 != (undefined ***)0x0) {
          pppuVar5 = pppuVar11;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
          return;
        }
        ___stack_chk_fail();
        (*(code *)*ppuStack_70)(&ppuStack_70);
        FUN_10ac71d5c(&lStack_98);
        if (pppuVar11 != (undefined ***)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar11);
        }
        __Unwind_Resume();
        ppuVar12 = pppuVar5[0x51];
        *(undefined4 *)(ppuVar12 + 0x50) = 0;
        FUN_10a18cbd8(ppuVar12 + 0x38);
        __ZNSt3__15mutex4lockEv(ppuVar12 + 0x3a);
        if (ppuVar12[0x22] != (undefined *)0x0) {
          piVar9 = (int *)(ppuVar12[0x22] + 0x14);
          do {
            iVar1 = *piVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar3) {
              *piVar9 = iVar1 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar1 + -1 == 0) {
            func_0x000109a848d4(ppuVar12 + 0x1b);
          }
        }
        ppuVar12[0x22] = (undefined *)0x0;
        ppuVar12[0x1e] = (undefined *)0x0;
        ppuVar12[0x1d] = (undefined *)0x0;
        ppuVar12[0x20] = (undefined *)0x0;
        ppuVar12[0x1f] = (undefined *)0x0;
        if (0 < *(int *)((long)ppuVar12 + 0xdc)) {
          lVar13 = 0;
          puVar8 = ppuVar12[0x23];
          do {
            *(undefined4 *)(puVar8 + lVar13 * 4) = 0;
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(int *)((long)ppuVar12 + 0xdc));
        }
        ppuVar12[0x29] = ppuVar12[0x28];
        __ZNSt3__15mutex6unlockEv(ppuVar12 + 0x3a);
        __ZNSt3__15mutex4lockEv(ppuVar12 + 0x42);
        *(undefined1 *)(ppuVar12 + 0x2b) = 0;
        if (ppuVar12[0x33] != (undefined *)0x0) {
          piVar9 = (int *)(ppuVar12[0x33] + 0x14);
          do {
            iVar1 = *piVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar3) {
              *piVar9 = iVar1 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar1 + -1 == 0) {
            func_0x000109a848d4(ppuVar12 + 0x2c);
          }
        }
        ppuVar12[0x33] = (undefined *)0x0;
        ppuVar12[0x2f] = (undefined *)0x0;
        ppuVar12[0x2e] = (undefined *)0x0;
        ppuVar12[0x31] = (undefined *)0x0;
        ppuVar12[0x30] = (undefined *)0x0;
        if (0 < *(int *)((long)ppuVar12 + 0x164)) {
          lVar13 = 0;
          puVar8 = ppuVar12[0x34];
          do {
            *(undefined4 *)(puVar8 + lVar13 * 4) = 0;
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(int *)((long)ppuVar12 + 0x164));
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(ppuVar12 + 0x42);
        return;
      }
    }
  }
  FUN_10a00946c(&UNK_10f63b8ac);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac72ed0);
  (*pcVar4)();
}



/* Entry: 10ac72f18; end: 10ac73043;  */

void FUN_10ac72f18(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x288);
  *(undefined4 *)(lVar7 + 0x280) = 0;
  FUN_10a18cbd8(lVar7 + 0x1c0);
  __ZNSt3__15mutex4lockEv(lVar7 + 0x1d0);
  if (*(long *)(lVar7 + 0x110) != 0) {
    piVar1 = (int *)(*(long *)(lVar7 + 0x110) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(lVar7 + 0xd8);
    }
  }
  *(undefined8 *)(lVar7 + 0x110) = 0;
  *(undefined8 *)(lVar7 + 0xf0) = 0;
  *(undefined8 *)(lVar7 + 0xe8) = 0;
  *(undefined8 *)(lVar7 + 0x100) = 0;
  *(undefined8 *)(lVar7 + 0xf8) = 0;
  if (0 < *(int *)(lVar7 + 0xdc)) {
    lVar5 = 0;
    lVar6 = *(long *)(lVar7 + 0x118);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(lVar7 + 0xdc));
  }
  *(undefined8 *)(lVar7 + 0x148) = *(undefined8 *)(lVar7 + 0x140);
  __ZNSt3__15mutex6unlockEv(lVar7 + 0x1d0);
  __ZNSt3__15mutex4lockEv(lVar7 + 0x210);
  *(undefined1 *)(lVar7 + 0x158) = 0;
  if (*(long *)(lVar7 + 0x198) != 0) {
    piVar1 = (int *)(*(long *)(lVar7 + 0x198) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(lVar7 + 0x160);
    }
  }
  *(undefined8 *)(lVar7 + 0x198) = 0;
  *(undefined8 *)(lVar7 + 0x178) = 0;
  *(undefined8 *)(lVar7 + 0x170) = 0;
  *(undefined8 *)(lVar7 + 0x188) = 0;
  *(undefined8 *)(lVar7 + 0x180) = 0;
  if (0 < *(int *)(lVar7 + 0x164)) {
    lVar5 = 0;
    lVar6 = *(long *)(lVar7 + 0x1a0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(lVar7 + 0x164));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar7 + 0x210);
  return;
}



/* Entry: 10ac73044; end: 10ac7305f;  */

void FUN_10ac73044(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined8 uStack_130;
  undefined4 auStack_128 [2];
  uint *puStack_120;
  undefined8 uStack_118;
  uint uStack_110;
  uint uStack_10c;
  int iStack_108;
  int iStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long lStack_d8;
  int *piStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  int *piStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = *(long *)(param_1 + 0x288);
  if ((*(byte *)(lVar6 + 0x158) & 1) == 0) {
    return;
  }
  __ZNSt3__15mutex4lockEv(lVar6 + 0x210);
  uStack_a8 = *(undefined8 *)(lVar6 + 0x168);
  uStack_b0 = *(ulong *)(lVar6 + 0x160);
  uStack_98 = *(undefined8 *)(lVar6 + 0x178);
  lStack_a0 = *(long *)(lVar6 + 0x170);
  piStack_70 = (int *)((ulong)&uStack_b0 | 8);
  iVar1 = *(int *)(lVar6 + 0x164);
  uStack_88 = *(undefined8 *)(lVar6 + 0x188);
  uStack_90 = *(undefined8 *)(lVar6 + 0x180);
  lStack_78 = *(long *)(lVar6 + 0x198);
  uStack_80 = *(undefined8 *)(lVar6 + 400);
  uStack_60 = 0;
  uStack_58 = 0;
  if (*(long *)(lVar6 + 0x198) != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0x198) + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar3) {
        *piVar9 = *piVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    iVar1 = *(int *)(lVar6 + 0x164);
  }
  puStack_68 = &uStack_60;
  if (iVar1 < 3) {
    uStack_60 = **(undefined8 **)(lVar6 + 0x1a8);
    uStack_58 = (*(undefined8 **)(lVar6 + 0x1a8))[1];
  }
  else {
    uStack_b0 = uStack_b0 & 0xffffffff;
    func_0x000109a84868(&uStack_b0,lVar6 + 0x160);
  }
  *(undefined1 *)(lVar6 + 0x158) = 0;
  __ZNSt3__15mutex6unlockEv(lVar6 + 0x210);
  if (lStack_a0 != 0) {
    uVar7 = (ulong)uStack_b0._4_4_;
    if ((int)uStack_b0._4_4_ < 3) {
      lVar8 = (long)uStack_a8._4_4_ * (long)(int)uStack_a8;
    }
    else {
      lVar8 = 1;
      piVar9 = piStack_70;
      do {
        lVar8 = lVar8 * *piVar9;
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 1;
      } while (uVar7 != 0);
    }
    if (lVar8 != 0) {
      uStack_110 = 0x42ff0000;
      iStack_104 = 0;
      uStack_100 = 0;
      uStack_10c = 0;
      iStack_108 = 0;
      piStack_d0 = &iStack_108;
      uStack_f4 = 0;
      uStack_f0 = 0;
      uStack_fc = 0;
      uStack_f8 = 0;
      uStack_e4 = 0;
      uStack_ec = 0;
      uStack_e8 = 0;
      lStack_d8 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_160 = 0x1010000;
      uStack_158 = (uint *)&uStack_b0;
      uStack_150 = 0;
      uStack_14c = 0;
      auStack_128[0] = 0x2010000;
      uStack_118 = 0;
      puStack_120 = &uStack_110;
      puStack_c8 = &uStack_c0;
      func_0x000109a491e0(&uStack_160,auStack_128,0);
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_160 = 0x1010000;
      auStack_128[0] = 0x2010000;
      uStack_118 = 0;
      puStack_120 = &uStack_110;
      uStack_158 = &uStack_110;
      func_0x000109ac9fc8(&uStack_160,auStack_128,0,0);
      if (CONCAT44(uStack_fc,uStack_100) != 0) {
        uVar7 = (ulong)uStack_10c;
        if ((int)uStack_10c < 3) {
          lVar8 = (long)iStack_104 * (long)iStack_108;
        }
        else {
          lVar8 = 1;
          piVar9 = piStack_d0;
          do {
            lVar8 = lVar8 * *piVar9;
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 1;
          } while (uVar7 != 0);
        }
        if ((lVar8 != 0) && ((uStack_110 & 0xff8) == 0x18)) {
          plVar5 = *(long **)(lVar6 + 0x1c0);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x28))();
            if ((int)plVar5 == iStack_104) {
              plVar5 = *(long **)(lVar6 + 0x1c0);
              (**(code **)(*plVar5 + 0x30))();
              if ((int)plVar5 == iStack_108) {
                plVar5 = *(long **)(lVar6 + 0x1c0);
                (**(code **)(*plVar5 + 0x50))();
                if ((int)plVar5 == 4) goto LAB_10ac72000;
              }
            }
          }
          lVar8 = *(long *)(lVar6 + 8);
          FUN_10a2421c8();
          plVar5 = *(long **)(lVar8 + 0x228);
          uStack_160 = 0;
          uVar10 = NEON_rev64(CONCAT44(iStack_104,iStack_108),4);
          uStack_15c = (undefined4)uVar10;
          uStack_158._0_4_ = (undefined4)((ulong)uVar10 >> 0x20);
          uStack_14c = 0;
          uStack_148 = 0;
          uStack_158._4_4_ = 1;
          uStack_150 = 4;
          uStack_144 = 1;
          uStack_130 = 0;
          uStack_140 = 0;
          uStack_138 = 0;
          (**(code **)(*plVar5 + 0x20))(plVar5,&uStack_160);
          FUN_10a099d88(lVar6 + 0x1c0,plVar5);
LAB_10ac72000:
          *(undefined4 *)(lVar6 + 0x280) = 2;
          (**(code **)(**(long **)(lVar6 + 0x1c0) + 0x98))
                    (*(long **)(lVar6 + 0x1c0),CONCAT44(uStack_fc,uStack_100),0,0);
          if (lStack_d8 != 0) {
            piVar9 = (int *)(lStack_d8 + 0x14);
            do {
              iVar1 = *piVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar3) {
                *piVar9 = iVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar1 + -1 == 0) {
              func_0x000109a848d4(&uStack_110);
            }
          }
          lStack_d8 = 0;
          uStack_f8 = 0;
          uStack_f4 = 0;
          uStack_100 = 0;
          uStack_fc = 0;
          uStack_e8 = 0;
          uStack_e4 = 0;
          uStack_f0 = 0;
          uStack_ec = 0;
          if (0 < (int)uStack_10c) {
            lVar6 = 0;
            do {
              piStack_d0[lVar6] = 0;
              lVar6 = lVar6 + 1;
            } while (lVar6 < (int)uStack_10c);
          }
          if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
            _free(puStack_c8[-1]);
          }
          if (lStack_78 != 0) {
            piVar9 = (int *)(lStack_78 + 0x14);
            do {
              iVar1 = *piVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar3) {
                *piVar9 = iVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar1 + -1 == 0) {
              func_0x000109a848d4(&uStack_b0);
            }
          }
          lStack_78 = 0;
          uStack_98 = 0;
          lStack_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          if (0 < (int)uStack_b0._4_4_) {
            lVar6 = 0;
            do {
              piStack_70[lVar6] = 0;
              lVar6 = lVar6 + 1;
            } while (lVar6 < (int)uStack_b0._4_4_);
          }
          if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
            _free(puStack_68[-1]);
          }
          return;
        }
      }
      FUN_10a00946c(&UNK_10f63b8ac);
      goto LAB_10ac72148;
    }
  }
  FUN_10a00946c(&UNK_10f63b8ac);
LAB_10ac72148:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac7214c);
  (*pcVar4)();
}



/* Entry: 10ac73060; end: 10ac7309f;  */

void FUN_10ac73060(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x288);
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c620d0,0);
  *(int *)(lVar1 + 0x13c) = (int)param_2;
  return;
}



/* Entry: 10ac730a0; end: 10ac730cf;  */

void FUN_10ac730a0(long param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010ac730c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))
            (param_2,&PTR_DAT_110c620d0,*(undefined4 *)(*(long *)(param_1 + 0x288) + 0x13c));
  return;
}



/* Entry: 10ac730d0; end: 10ac739b7;  */

/* WARNING: Removing unreachable block (ram,0x00010ac73720) */
/* WARNING: Removing unreachable block (ram,0x00010ac73750) */
/* WARNING: Removing unreachable block (ram,0x00010ac739a8) */

void FUN_10ac730d0(undefined8 param_1,long param_2)

{
  int *piVar1;
  ulong uVar2;
  int iVar3;
  byte bVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *puVar12;
  undefined1 *unaff_x20;
  ulong unaff_x21;
  undefined8 *puVar13;
  undefined1 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  long lVar14;
  undefined8 *unaff_x25;
  undefined1 *unaff_x26;
  byte *unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar15;
  undefined8 uVar16;
  
code_r0x00010ac730d0:
  *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(byte **)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined1 **)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x1d0) = param_1;
  *(undefined8 *)((long)register0x00000008 + -0x70) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *(long *)((long)register0x00000008 + -0x1c8) = param_2;
  func_0x00010989f98c((undefined1 *)((long)register0x00000008 + -200),param_2 + 0x28);
  *(undefined4 *)((long)register0x00000008 + -0xb0) = 0;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xa8),&UNK_10f69f4ca);
  *(undefined4 *)((long)register0x00000008 + -0x90) = 1;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x88),&UNK_10f69f4cf);
  puVar13 = (undefined8 *)0x0;
  lVar14 = 0;
  *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0xd8);
  *(undefined8 **)((long)register0x00000008 + -0xe0) = puVar9;
  puVar8 = puVar9;
  do {
    piVar1 = (int *)((long)register0x00000008 + lVar14 + -0xb0);
    iVar3 = *piVar1;
    puVar10 = puVar9;
    puVar12 = puVar9;
    puVar11 = puVar9;
    if (puVar8 == puVar9) {
LAB_10ac73200:
      puVar8 = (undefined8 *)((long)register0x00000008 + -0xe0);
      if (puVar13 != (undefined8 *)0x0) {
        puVar12 = puVar10 + 1;
        puVar8 = puVar10;
        puVar11 = puVar10;
      }
      if (puVar8[1] == 0) goto LAB_10ac7321c;
    }
    else {
      puVar8 = puVar9;
      puVar6 = puVar13;
      if (puVar13 == (undefined8 *)0x0) {
        do {
          puVar10 = (undefined8 *)puVar8[2];
          bVar7 = (undefined8 *)*puVar10 == puVar8;
          puVar8 = puVar10;
        } while (bVar7);
        if (*(int *)(puVar10 + 4) < iVar3) goto LAB_10ac73200;
      }
      else {
        do {
          puVar10 = puVar6;
          puVar6 = (undefined8 *)puVar10[1];
        } while ((undefined8 *)puVar10[1] != (undefined8 *)0x0);
        if (*(int *)(puVar10 + 4) < iVar3) goto LAB_10ac73200;
        do {
          while (puVar11 = puVar13, iVar3 < *(int *)(puVar11 + 4)) {
            puVar13 = (undefined8 *)*puVar11;
            puVar12 = puVar11;
            if ((undefined8 *)*puVar11 == (undefined8 *)0x0) goto LAB_10ac7321c;
          }
          if (iVar3 <= *(int *)(puVar11 + 4)) goto LAB_10ac7328c;
          puVar13 = (undefined8 *)puVar11[1];
        } while ((undefined8 *)puVar11[1] != (undefined8 *)0x0);
        puVar12 = puVar11 + 1;
      }
LAB_10ac7321c:
      puVar8 = (undefined8 *)0x40;
      __Znwm();
      *(int *)(puVar8 + 4) = iVar3;
      if (*(char *)((long)piVar1 + 0x1f) < '\0') {
        func_0x000107c3192c(puVar8 + 5,*(undefined8 *)(piVar1 + 2),*(undefined8 *)(piVar1 + 4));
      }
      else {
        uVar15 = *(undefined8 *)(piVar1 + 2);
        puVar8[6] = *(undefined8 *)(piVar1 + 4);
        puVar8[5] = uVar15;
        puVar8[7] = *(undefined8 *)(piVar1 + 6);
      }
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = puVar11;
      *puVar12 = puVar8;
      if (**(long **)((long)register0x00000008 + -0xe0) != 0) {
        *(long *)((long)register0x00000008 + -0xe0) = **(long **)((long)register0x00000008 + -0xe0);
        puVar8 = (undefined8 *)*puVar12;
      }
      func_0x000107c2b058(*(undefined8 *)((long)register0x00000008 + -0xd8),puVar8);
      *(long *)((long)register0x00000008 + -0xd0) = *(long *)((long)register0x00000008 + -0xd0) + 1;
    }
LAB_10ac7328c:
    lVar14 = lVar14 + 0x20;
    if (lVar14 == 0x40) break;
    puVar8 = *(undefined8 **)((long)register0x00000008 + -0xe0);
    puVar13 = *(undefined8 **)((long)register0x00000008 + -0xd8);
  } while( true );
  lVar14 = 0;
  do {
    if (*(char *)((long)register0x00000008 + lVar14 + -0x71) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + lVar14 + -0x88));
    }
    lVar14 = lVar14 + -0x20;
  } while (lVar14 != -0x40);
  puVar8 = *(undefined8 **)((long)register0x00000008 + -0xd8);
  if (puVar8 != (undefined8 *)0x0) {
    puVar13 = puVar9;
    do {
      lVar14 = 8;
      if (*(int *)(*(long *)(*(long *)((long)register0x00000008 + -0x1c8) + 0x288) + 0x138) <=
          *(int *)(puVar8 + 4)) {
        lVar14 = 0;
        puVar13 = puVar8;
      }
      puVar8 = *(undefined8 **)((long)puVar8 + lVar14);
    } while (puVar8 != (undefined8 *)0x0);
    if ((puVar13 != puVar9) &&
       (*(int *)(puVar13 + 4) <=
        *(int *)(*(long *)(*(long *)((long)register0x00000008 + -0x1c8) + 0x288) + 0x138))) {
      if (*(char *)((long)puVar13 + 0x3f) < '\0') {
        func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x100),puVar13[5],puVar13[6])
        ;
      }
      else {
        uVar15 = puVar13[5];
        *(undefined8 *)((long)register0x00000008 + -0xf8) = puVar13[6];
        *(undefined8 *)((long)register0x00000008 + -0x100) = uVar15;
        *(undefined8 *)((long)register0x00000008 + -0xf0) = puVar13[7];
      }
      goto LAB_10ac73320;
    }
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x100),&UNK_10f69f513);
LAB_10ac73320:
  *(undefined1 *)((long)register0x00000008 + -0xb0) = 1;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xa8),&DAT_10f464af4);
  *(undefined1 *)((long)register0x00000008 + -0x90) = 0;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x88),&UNK_10f69f52c);
  puVar8 = (undefined8 *)0x0;
  lVar14 = 0;
  unaff_x25 = (undefined8 *)((long)register0x00000008 + -0x118);
  *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
  unaff_x23 = (undefined8 *)((long)register0x00000008 + -0x110);
  *(undefined8 **)((long)register0x00000008 + -0x118) = unaff_x23;
  unaff_x26 = (undefined1 *)((long)register0x00000008 + -0xb0);
  puVar9 = unaff_x23;
  do {
    unaff_x27 = unaff_x26 + lVar14;
    bVar4 = *unaff_x27;
    unaff_x28 = (ulong)bVar4;
    puVar11 = unaff_x23;
    puVar13 = unaff_x23;
    puVar12 = unaff_x23;
    if (puVar9 == unaff_x23) {
LAB_10ac7340c:
      puVar9 = unaff_x25;
      if (puVar8 != (undefined8 *)0x0) {
        puVar13 = puVar11 + 1;
        puVar9 = puVar11;
        puVar12 = puVar11;
      }
      if (puVar9[1] == 0) goto LAB_10ac73428;
    }
    else {
      puVar9 = unaff_x23;
      puVar10 = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        do {
          puVar11 = (undefined8 *)puVar9[2];
          bVar7 = (undefined8 *)*puVar11 == puVar9;
          puVar9 = puVar11;
        } while (bVar7);
        if (*(byte *)(puVar11 + 4) < bVar4) goto LAB_10ac7340c;
      }
      else {
        do {
          puVar11 = puVar10;
          puVar10 = (undefined8 *)puVar11[1];
        } while ((undefined8 *)puVar11[1] != (undefined8 *)0x0);
        if (*(byte *)(puVar11 + 4) < bVar4) goto LAB_10ac7340c;
        do {
          while (puVar12 = puVar8, bVar4 < *(byte *)(puVar12 + 4)) {
            puVar8 = (undefined8 *)*puVar12;
            puVar13 = puVar12;
            if ((undefined8 *)*puVar12 == (undefined8 *)0x0) goto LAB_10ac73428;
          }
          if (bVar4 <= *(byte *)(puVar12 + 4)) goto LAB_10ac73498;
          puVar8 = (undefined8 *)puVar12[1];
        } while ((undefined8 *)puVar12[1] != (undefined8 *)0x0);
        puVar13 = puVar12 + 1;
      }
LAB_10ac73428:
      puVar9 = (undefined8 *)0x40;
      __Znwm();
      *(byte *)(puVar9 + 4) = bVar4;
      if ((char)unaff_x27[0x1f] < '\0') {
        func_0x000107c3192c(puVar9 + 5,*(undefined8 *)(unaff_x27 + 8),
                            *(undefined8 *)(unaff_x27 + 0x10));
      }
      else {
        uVar15 = *(undefined8 *)(unaff_x27 + 8);
        puVar9[6] = *(undefined8 *)(unaff_x27 + 0x10);
        puVar9[5] = uVar15;
        puVar9[7] = *(undefined8 *)(unaff_x27 + 0x18);
      }
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = puVar12;
      *puVar13 = puVar9;
      if (**(long **)((long)register0x00000008 + -0x118) != 0) {
        *(long *)((long)register0x00000008 + -0x118) =
             **(long **)((long)register0x00000008 + -0x118);
        puVar9 = (undefined8 *)*puVar13;
      }
      func_0x000107c2b058(*(undefined8 *)((long)register0x00000008 + -0x110),puVar9);
      *(long *)((long)register0x00000008 + -0x108) =
           *(long *)((long)register0x00000008 + -0x108) + 1;
    }
LAB_10ac73498:
    lVar14 = lVar14 + 0x20;
    if (lVar14 == 0x40) break;
    puVar9 = *(undefined8 **)((long)register0x00000008 + -0x118);
    puVar8 = *(undefined8 **)((long)register0x00000008 + -0x110);
  } while( true );
  lVar14 = 0;
  unaff_x20 = (undefined1 *)((long)register0x00000008 + -0xb0);
  do {
    if ((char)unaff_x20[lVar14 + 0x3f] < '\0') {
      __ZdlPv(*(undefined8 *)(unaff_x20 + lVar14 + 0x28));
    }
    lVar14 = lVar14 + -0x20;
  } while (lVar14 != -0x40);
  puVar8 = *(undefined8 **)((long)register0x00000008 + -0x110);
  puVar9 = unaff_x23;
  if (puVar8 != (undefined8 *)0x0) {
    do {
      lVar14 = 8;
      if (*(char *)(puVar8 + 4) != '\0') {
        lVar14 = 0;
        puVar9 = puVar8;
      }
      puVar8 = *(undefined8 **)((long)puVar8 + lVar14);
    } while (puVar8 != (undefined8 *)0x0);
    if ((puVar9 != unaff_x23) && (*(byte *)(puVar9 + 4) < 2)) {
      if (*(char *)((long)puVar9 + 0x3f) < '\0') {
        func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0xb0),puVar9[5],puVar9[6]);
      }
      else {
        uVar15 = puVar9[5];
        *(undefined8 *)((long)register0x00000008 + -0xa8) = puVar9[6];
        *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar15;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = puVar9[7];
      }
      goto LAB_10ac73520;
    }
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xb0),&UNK_10f69f534);
LAB_10ac73520:
  unaff_x21 = *(ulong *)((long)register0x00000008 + -0xc0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0xb1)) {
    unaff_x21 = (ulong)*(byte *)((long)register0x00000008 + -0xb1);
  }
  FUN_10a003c90((undefined1 *)((long)register0x00000008 + -0x1a8),unaff_x21 + 0x10,
                (undefined1 *)((long)register0x00000008 + -0x1c0));
  unaff_x22 = *(undefined1 **)((long)register0x00000008 + -0x1a8);
  if (-1 < *(char *)((long)register0x00000008 + -0x191)) {
    unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x1a8);
  }
  if (unaff_x21 != 0) {
    _memmove(unaff_x22,(undefined1 *)((long)register0x00000008 + -200),unaff_x21);
  }
  puVar9 = (undefined8 *)(unaff_x22 + unaff_x21);
  puVar9[1] = 0x203a736563614666;
  *puVar9 = 0x4f7265626d756e20;
  *(undefined1 *)(puVar9 + 2) = 0;
  __ZNSt3__19to_stringEi
            ((undefined1 *)((long)register0x00000008 + -0x1c0),
             *(undefined4 *)
              (*(long *)(*(long *)((long)register0x00000008 + -0x1c8) + 0x288) + 0x13c));
  uVar2 = *(ulong *)((long)register0x00000008 + -0x1b8);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x1c0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x1a9)) {
    uVar2 = (ulong)*(byte *)((long)register0x00000008 + -0x1a9);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x1c0);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x1a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar5,uVar2);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x180) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x188) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -400) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -400);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f69f55c,0x12);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x160) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x168) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x170) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  uVar2 = *(ulong *)((long)register0x00000008 + -0xf8);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x100);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0xe9)) {
    uVar2 = (ulong)*(byte *)((long)register0x00000008 + -0xe9);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x100);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x170);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar5,uVar2);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x140) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x148) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x150) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x150);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f69f56f,0x14);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x120) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x128) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x130) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  uVar2 = *(ulong *)((long)register0x00000008 + -0xa8);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0xb0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x99)) {
    uVar2 = (ulong)*(byte *)((long)register0x00000008 + -0x99);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0xb0);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x130);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar5,uVar2);
  uVar15 = *puVar9;
  puVar8 = *(undefined8 **)((long)register0x00000008 + -0x1d0);
  puVar8[1] = puVar9[1];
  *puVar8 = uVar15;
  puVar8[2] = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  if (*(char *)((long)register0x00000008 + -0x119) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x130));
  }
  if (*(char *)((long)register0x00000008 + -0x139) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x150));
  }
  if (*(char *)((long)register0x00000008 + -0x159) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x170));
  }
  if (*(char *)((long)register0x00000008 + -0x179) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -400));
  }
  if (*(char *)((long)register0x00000008 + -0x1a9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1c0));
  }
  if (*(char *)((long)register0x00000008 + -0x191) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1a8));
  }
  func_0x00010ac86a0c(*(undefined8 *)((long)register0x00000008 + -0x110));
  if (*(char *)((long)register0x00000008 + -0xe9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x100));
  }
  unaff_x19 = *(long *)((long)register0x00000008 + -0xd8);
  func_0x00010ac869c4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70)) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ac86a0c(*(undefined8 *)((long)register0x00000008 + -0x110));
  if (*(char *)((long)register0x00000008 + -0xe9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x100));
  }
  func_0x00010ac869c4(*(undefined8 *)((long)register0x00000008 + -0xd8));
  unaff_x30 = FUN_10ac739b8;
  param_2 = unaff_x19;
  __Unwind_Resume();
  param_2 = param_2 + -0x28;
  unaff_x24 = 0x40;
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x1d0);
  param_1 = extraout_x8;
  goto code_r0x00010ac730d0;
}



/* Entry: 10ac739b8; end: 10ac739df;  */

/* WARNING: Removing unreachable block (ram,0x00010ac73720) */
/* WARNING: Removing unreachable block (ram,0x00010ac73750) */
/* WARNING: Removing unreachable block (ram,0x00010ac739a8) */

void FUN_10ac739b8(undefined8 param_1,long param_2)

{
  int *piVar1;
  ulong uVar2;
  int iVar3;
  byte bVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 extraout_x8;
  undefined8 *puVar12;
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined8 *puVar13;
  ulong unaff_x21;
  undefined1 *unaff_x22;
  undefined8 *unaff_x23;
  long lVar14;
  undefined8 unaff_x24;
  undefined8 *unaff_x25;
  undefined1 *unaff_x26;
  byte *unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar15;
  undefined8 uVar16;
  
FUN_10ac730d0:
  *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(byte **)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined1 **)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x1d0) = param_1;
  *(undefined8 *)((long)register0x00000008 + -0x70) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *(long *)((long)register0x00000008 + -0x1c8) = param_2 + -0x28;
  func_0x00010989f98c((undefined1 *)((long)register0x00000008 + -200),param_2);
  *(undefined4 *)((long)register0x00000008 + -0xb0) = 0;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xa8),&UNK_10f69f4ca);
  *(undefined4 *)((long)register0x00000008 + -0x90) = 1;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x88),&UNK_10f69f4cf);
  puVar13 = (undefined8 *)0x0;
  lVar14 = 0;
  *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0xd8);
  *(undefined8 **)((long)register0x00000008 + -0xe0) = puVar9;
  puVar8 = puVar9;
  do {
    piVar1 = (int *)((long)register0x00000008 + lVar14 + -0xb0);
    iVar3 = *piVar1;
    puVar10 = puVar9;
    puVar12 = puVar9;
    puVar11 = puVar9;
    if (puVar8 == puVar9) {
LAB_10ac73200:
      puVar8 = (undefined8 *)((long)register0x00000008 + -0xe0);
      if (puVar13 != (undefined8 *)0x0) {
        puVar12 = puVar10 + 1;
        puVar8 = puVar10;
        puVar11 = puVar10;
      }
      if (puVar8[1] == 0) goto LAB_10ac7321c;
    }
    else {
      puVar8 = puVar9;
      puVar6 = puVar13;
      if (puVar13 == (undefined8 *)0x0) {
        do {
          puVar10 = (undefined8 *)puVar8[2];
          bVar7 = (undefined8 *)*puVar10 == puVar8;
          puVar8 = puVar10;
        } while (bVar7);
        if (*(int *)(puVar10 + 4) < iVar3) goto LAB_10ac73200;
      }
      else {
        do {
          puVar10 = puVar6;
          puVar6 = (undefined8 *)puVar10[1];
        } while ((undefined8 *)puVar10[1] != (undefined8 *)0x0);
        if (*(int *)(puVar10 + 4) < iVar3) goto LAB_10ac73200;
        do {
          while (puVar11 = puVar13, iVar3 < *(int *)(puVar11 + 4)) {
            puVar13 = (undefined8 *)*puVar11;
            puVar12 = puVar11;
            if ((undefined8 *)*puVar11 == (undefined8 *)0x0) goto LAB_10ac7321c;
          }
          if (iVar3 <= *(int *)(puVar11 + 4)) goto LAB_10ac7328c;
          puVar13 = (undefined8 *)puVar11[1];
        } while ((undefined8 *)puVar11[1] != (undefined8 *)0x0);
        puVar12 = puVar11 + 1;
      }
LAB_10ac7321c:
      puVar8 = (undefined8 *)0x40;
      __Znwm();
      *(int *)(puVar8 + 4) = iVar3;
      if (*(char *)((long)piVar1 + 0x1f) < '\0') {
        func_0x000107c3192c(puVar8 + 5,*(undefined8 *)(piVar1 + 2),*(undefined8 *)(piVar1 + 4));
      }
      else {
        uVar15 = *(undefined8 *)(piVar1 + 2);
        puVar8[6] = *(undefined8 *)(piVar1 + 4);
        puVar8[5] = uVar15;
        puVar8[7] = *(undefined8 *)(piVar1 + 6);
      }
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = puVar11;
      *puVar12 = puVar8;
      if (**(long **)((long)register0x00000008 + -0xe0) != 0) {
        *(long *)((long)register0x00000008 + -0xe0) = **(long **)((long)register0x00000008 + -0xe0);
        puVar8 = (undefined8 *)*puVar12;
      }
      func_0x000107c2b058(*(undefined8 *)((long)register0x00000008 + -0xd8),puVar8);
      *(long *)((long)register0x00000008 + -0xd0) = *(long *)((long)register0x00000008 + -0xd0) + 1;
    }
LAB_10ac7328c:
    lVar14 = lVar14 + 0x20;
    if (lVar14 == 0x40) break;
    puVar8 = *(undefined8 **)((long)register0x00000008 + -0xe0);
    puVar13 = *(undefined8 **)((long)register0x00000008 + -0xd8);
  } while( true );
  lVar14 = 0;
  do {
    if (*(char *)((long)register0x00000008 + lVar14 + -0x71) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + lVar14 + -0x88));
    }
    lVar14 = lVar14 + -0x20;
  } while (lVar14 != -0x40);
  puVar8 = *(undefined8 **)((long)register0x00000008 + -0xd8);
  if (puVar8 != (undefined8 *)0x0) {
    puVar13 = puVar9;
    do {
      lVar14 = 8;
      if (*(int *)(*(long *)(*(long *)((long)register0x00000008 + -0x1c8) + 0x288) + 0x138) <=
          *(int *)(puVar8 + 4)) {
        lVar14 = 0;
        puVar13 = puVar8;
      }
      puVar8 = *(undefined8 **)((long)puVar8 + lVar14);
    } while (puVar8 != (undefined8 *)0x0);
    if ((puVar13 != puVar9) &&
       (*(int *)(puVar13 + 4) <=
        *(int *)(*(long *)(*(long *)((long)register0x00000008 + -0x1c8) + 0x288) + 0x138))) {
      if (*(char *)((long)puVar13 + 0x3f) < '\0') {
        func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x100),puVar13[5],puVar13[6])
        ;
      }
      else {
        uVar15 = puVar13[5];
        *(undefined8 *)((long)register0x00000008 + -0xf8) = puVar13[6];
        *(undefined8 *)((long)register0x00000008 + -0x100) = uVar15;
        *(undefined8 *)((long)register0x00000008 + -0xf0) = puVar13[7];
      }
      goto LAB_10ac73320;
    }
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x100),&UNK_10f69f513);
LAB_10ac73320:
  *(undefined1 *)((long)register0x00000008 + -0xb0) = 1;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xa8),&DAT_10f464af4);
  *(undefined1 *)((long)register0x00000008 + -0x90) = 0;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x88),&UNK_10f69f52c);
  puVar8 = (undefined8 *)0x0;
  lVar14 = 0;
  unaff_x25 = (undefined8 *)((long)register0x00000008 + -0x118);
  *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
  unaff_x23 = (undefined8 *)((long)register0x00000008 + -0x110);
  *(undefined8 **)((long)register0x00000008 + -0x118) = unaff_x23;
  unaff_x26 = (undefined1 *)((long)register0x00000008 + -0xb0);
  puVar9 = unaff_x23;
  do {
    unaff_x27 = unaff_x26 + lVar14;
    bVar4 = *unaff_x27;
    unaff_x28 = (ulong)bVar4;
    puVar11 = unaff_x23;
    puVar13 = unaff_x23;
    puVar12 = unaff_x23;
    if (puVar9 == unaff_x23) {
LAB_10ac7340c:
      puVar9 = unaff_x25;
      if (puVar8 != (undefined8 *)0x0) {
        puVar13 = puVar11 + 1;
        puVar9 = puVar11;
        puVar12 = puVar11;
      }
      if (puVar9[1] == 0) goto LAB_10ac73428;
    }
    else {
      puVar9 = unaff_x23;
      puVar10 = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        do {
          puVar11 = (undefined8 *)puVar9[2];
          bVar7 = (undefined8 *)*puVar11 == puVar9;
          puVar9 = puVar11;
        } while (bVar7);
        if (*(byte *)(puVar11 + 4) < bVar4) goto LAB_10ac7340c;
      }
      else {
        do {
          puVar11 = puVar10;
          puVar10 = (undefined8 *)puVar11[1];
        } while ((undefined8 *)puVar11[1] != (undefined8 *)0x0);
        if (*(byte *)(puVar11 + 4) < bVar4) goto LAB_10ac7340c;
        do {
          while (puVar12 = puVar8, bVar4 < *(byte *)(puVar12 + 4)) {
            puVar8 = (undefined8 *)*puVar12;
            puVar13 = puVar12;
            if ((undefined8 *)*puVar12 == (undefined8 *)0x0) goto LAB_10ac73428;
          }
          if (bVar4 <= *(byte *)(puVar12 + 4)) goto LAB_10ac73498;
          puVar8 = (undefined8 *)puVar12[1];
        } while ((undefined8 *)puVar12[1] != (undefined8 *)0x0);
        puVar13 = puVar12 + 1;
      }
LAB_10ac73428:
      puVar9 = (undefined8 *)0x40;
      __Znwm();
      *(byte *)(puVar9 + 4) = bVar4;
      if ((char)unaff_x27[0x1f] < '\0') {
        func_0x000107c3192c(puVar9 + 5,*(undefined8 *)(unaff_x27 + 8),
                            *(undefined8 *)(unaff_x27 + 0x10));
      }
      else {
        uVar15 = *(undefined8 *)(unaff_x27 + 8);
        puVar9[6] = *(undefined8 *)(unaff_x27 + 0x10);
        puVar9[5] = uVar15;
        puVar9[7] = *(undefined8 *)(unaff_x27 + 0x18);
      }
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = puVar12;
      *puVar13 = puVar9;
      if (**(long **)((long)register0x00000008 + -0x118) != 0) {
        *(long *)((long)register0x00000008 + -0x118) =
             **(long **)((long)register0x00000008 + -0x118);
        puVar9 = (undefined8 *)*puVar13;
      }
      func_0x000107c2b058(*(undefined8 *)((long)register0x00000008 + -0x110),puVar9);
      *(long *)((long)register0x00000008 + -0x108) =
           *(long *)((long)register0x00000008 + -0x108) + 1;
    }
LAB_10ac73498:
    lVar14 = lVar14 + 0x20;
    if (lVar14 == 0x40) break;
    puVar9 = *(undefined8 **)((long)register0x00000008 + -0x118);
    puVar8 = *(undefined8 **)((long)register0x00000008 + -0x110);
  } while( true );
  lVar14 = 0;
  unaff_x20 = (undefined1 *)((long)register0x00000008 + -0xb0);
  do {
    if ((char)unaff_x20[lVar14 + 0x3f] < '\0') {
      __ZdlPv(*(undefined8 *)(unaff_x20 + lVar14 + 0x28));
    }
    lVar14 = lVar14 + -0x20;
  } while (lVar14 != -0x40);
  puVar8 = *(undefined8 **)((long)register0x00000008 + -0x110);
  puVar9 = unaff_x23;
  if (puVar8 != (undefined8 *)0x0) {
    do {
      lVar14 = 8;
      if (*(char *)(puVar8 + 4) != '\0') {
        lVar14 = 0;
        puVar9 = puVar8;
      }
      puVar8 = *(undefined8 **)((long)puVar8 + lVar14);
    } while (puVar8 != (undefined8 *)0x0);
    if ((puVar9 != unaff_x23) && (*(byte *)(puVar9 + 4) < 2)) {
      if (*(char *)((long)puVar9 + 0x3f) < '\0') {
        func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0xb0),puVar9[5],puVar9[6]);
      }
      else {
        uVar15 = puVar9[5];
        *(undefined8 *)((long)register0x00000008 + -0xa8) = puVar9[6];
        *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar15;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = puVar9[7];
      }
      goto LAB_10ac73520;
    }
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xb0),&UNK_10f69f534);
LAB_10ac73520:
  unaff_x21 = *(ulong *)((long)register0x00000008 + -0xc0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0xb1)) {
    unaff_x21 = (ulong)*(byte *)((long)register0x00000008 + -0xb1);
  }
  FUN_10a003c90((undefined1 *)((long)register0x00000008 + -0x1a8),unaff_x21 + 0x10,
                (undefined1 *)((long)register0x00000008 + -0x1c0));
  unaff_x22 = *(undefined1 **)((long)register0x00000008 + -0x1a8);
  if (-1 < *(char *)((long)register0x00000008 + -0x191)) {
    unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x1a8);
  }
  if (unaff_x21 != 0) {
    _memmove(unaff_x22,(undefined1 *)((long)register0x00000008 + -200),unaff_x21);
  }
  puVar9 = (undefined8 *)(unaff_x22 + unaff_x21);
  puVar9[1] = 0x203a736563614666;
  *puVar9 = 0x4f7265626d756e20;
  *(undefined1 *)(puVar9 + 2) = 0;
  __ZNSt3__19to_stringEi
            ((undefined1 *)((long)register0x00000008 + -0x1c0),
             *(undefined4 *)
              (*(long *)(*(long *)((long)register0x00000008 + -0x1c8) + 0x288) + 0x13c));
  uVar2 = *(ulong *)((long)register0x00000008 + -0x1b8);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x1c0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x1a9)) {
    uVar2 = (ulong)*(byte *)((long)register0x00000008 + -0x1a9);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x1c0);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x1a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar5,uVar2);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x180) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x188) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -400) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -400);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f69f55c,0x12);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x160) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x168) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x170) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  uVar2 = *(ulong *)((long)register0x00000008 + -0xf8);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0x100);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0xe9)) {
    uVar2 = (ulong)*(byte *)((long)register0x00000008 + -0xe9);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x100);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x170);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar5,uVar2);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x140) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x148) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x150) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x150);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f69f56f,0x14);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x120) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x128) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x130) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  uVar2 = *(ulong *)((long)register0x00000008 + -0xa8);
  puVar5 = *(undefined1 **)((long)register0x00000008 + -0xb0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x99)) {
    uVar2 = (ulong)*(byte *)((long)register0x00000008 + -0x99);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0xb0);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x130);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar5,uVar2);
  uVar15 = *puVar9;
  puVar8 = *(undefined8 **)((long)register0x00000008 + -0x1d0);
  puVar8[1] = puVar9[1];
  *puVar8 = uVar15;
  puVar8[2] = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  if (*(char *)((long)register0x00000008 + -0x119) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x130));
  }
  if (*(char *)((long)register0x00000008 + -0x139) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x150));
  }
  if (*(char *)((long)register0x00000008 + -0x159) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x170));
  }
  if (*(char *)((long)register0x00000008 + -0x179) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -400));
  }
  if (*(char *)((long)register0x00000008 + -0x1a9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1c0));
  }
  if (*(char *)((long)register0x00000008 + -0x191) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1a8));
  }
  func_0x00010ac86a0c(*(undefined8 *)((long)register0x00000008 + -0x110));
  if (*(char *)((long)register0x00000008 + -0xe9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x100));
  }
  unaff_x19 = *(long *)((long)register0x00000008 + -0xd8);
  func_0x00010ac869c4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70)) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ac86a0c(*(undefined8 *)((long)register0x00000008 + -0x110));
  if (*(char *)((long)register0x00000008 + -0xe9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x100));
  }
  func_0x00010ac869c4(*(undefined8 *)((long)register0x00000008 + -0xd8));
  unaff_x30 = FUN_10ac739b8;
  param_2 = unaff_x19;
  __Unwind_Resume();
  unaff_x24 = 0x40;
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x1d0);
  param_1 = extraout_x8;
  goto FUN_10ac730d0;
}



/* Entry: 10ac739e0; end: 10ac73a47;  */

bool FUN_10ac739e0(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x28) {
    iVar2 = 0xf663469;
    _memcmp(&UNK_10f663469,param_2);
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



/* Entry: 10ac73a48; end: 10ac73a4f;  */

bool FUN_10ac73a48(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x28) {
    iVar2 = 0xf663469;
    _memcmp(&UNK_10f663469,param_2);
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



/* Entry: 10ac73a50; end: 10ac73d23;  */

void FUN_10ac73a50(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f663469,0x28);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c664d8;
  pppuVar2 = (undefined8 ***)&UNK_10f69e32c;
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
    ppuStack_b0 = &PTR_DAT_110c664d8;
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
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac73d04;
    FUN_10a054dac(param_1,&DAT_10f309588,FUN_10ac86a54,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f69f58e,FUN_10ac86bd8,FUN_10ac86c94);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f311774,FUN_10ac86dd8,FUN_10ac86e90);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2e5c64,FUN_10ac86fbc,FUN_10ac87074);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f663469,0x28);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10ac73d04:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac73d08);
  (*pcVar6)();
}



/* Entry: 10ac73d24; end: 10ac73d87;  */

undefined8 * FUN_10ac73d24(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10ac73d88; end: 10ac73f0f;  */

undefined8 * FUN_10ac73d88(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  param_1[0x66] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x69) = 0x100;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  puVar4 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110c625d8,param_2);
  *puVar4 = &PTR_DAT_110c62390;
  puVar4[2] = &PTR_FUN_110c624c0;
  puVar4[5] = &PTR_FUN_110c624f0;
  puVar4[0x66] = &PTR_FUN_110c62598;
  puVar4[0x15] = &PTR_FUN_110c62548;
  plVar7 = puVar4 + 0x51;
  puVar4[0x52] = 0;
  *plVar7 = 0;
  *(undefined4 *)(puVar4 + 0x53) = 0;
  puVar4[0x55] = 0;
  puVar4[0x54] = 0;
  puVar4[0x57] = 0;
  puVar4[0x56] = 0;
  puVar4[0x58] = 0x32aaaba7;
  puVar4[0x5a] = 0;
  puVar4[0x59] = 0;
  puVar4[0x5c] = 0;
  puVar4[0x5b] = 0;
  puVar4[0x5e] = 0;
  puVar4[0x5d] = 0;
  puVar4[0x60] = 0;
  puVar4[0x5f] = 0;
  puVar4[0x62] = 0;
  puVar4[0x61] = 0;
  puVar4[100] = 0;
  puVar4[99] = 0;
  puVar4[0x65] = 0;
  FUN_10ac871e8(auStack_48,&uStack_31);
  plVar5 = plVar7;
  FUN_10ac73d24(plVar7,auStack_48);
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
      plVar5 = plStack_40;
    }
  }
  plVar7 = (long *)*plVar7;
  func_0x00010ad031c0();
  (**(code **)(*plVar7 + 0x20))(plVar7,plVar5);
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  return param_1;
}



/* Entry: 10ac73f10; end: 10ac73f17;  */

void FUN_10ac73f10(void)

{
  return;
}



/* Entry: 10ac73f18; end: 10ac74277;  */

undefined8 * FUN_10ac73f18(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined4 auStack_118 [2];
  uint *puStack_110;
  undefined8 uStack_108;
  uint uStack_100;
  uint uStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long lStack_c8;
  int *piStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [4];
  uint uStack_9c;
  int iStack_98;
  int iStack_94;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  int *piStack_60;
  undefined1 *puStack_58;
  undefined1 auStack_50 [16];
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x2c0);
  func_0x0001094ca074(auStack_a0,*(undefined8 *)(param_1 + 0x288));
  if (lStack_90 != 0) {
    uVar7 = (ulong)uStack_9c;
    if ((int)uStack_9c < 3) {
      lVar8 = (long)iStack_94 * (long)iStack_98;
    }
    else {
      lVar8 = 1;
      piVar9 = piStack_60;
      do {
        lVar8 = lVar8 * *piVar9;
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 1;
      } while (uVar7 != 0);
    }
    if (lVar8 != 0) {
      uStack_100 = 0x42ff0000;
      puStack_110 = &uStack_100;
      iStack_f4 = 0;
      uStack_f0 = 0;
      uStack_fc = 0;
      iStack_f8 = 0;
      piStack_c0 = &iStack_f8;
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_ec = 0;
      uStack_e8 = 0;
      uStack_d4 = 0;
      uStack_dc = 0;
      uStack_d8 = 0;
      lStack_c8 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_150 = 0x1010000;
      uStack_148 = auStack_a0;
      uStack_140 = 0;
      uStack_13c = 0;
      auStack_118[0] = 0x2010000;
      uStack_108 = 0;
      puStack_b8 = &uStack_b0;
      func_0x000109ac9fc8(&uStack_150,auStack_118,0,0);
      if (CONCAT44(uStack_ec,uStack_f0) != 0) {
        uVar7 = (ulong)uStack_fc;
        if ((int)uStack_fc < 3) {
          lVar8 = (long)iStack_f4 * (long)iStack_f8;
        }
        else {
          lVar8 = 1;
          piVar9 = piStack_c0;
          do {
            lVar8 = lVar8 * *piVar9;
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 1;
          } while (uVar7 != 0);
        }
        if ((lVar8 != 0) && ((uStack_100 & 0xff8) == 0x18)) {
          puVar1 = (undefined8 *)(param_1 + 0x300);
          plVar6 = *(long **)(param_1 + 0x300);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x28))();
            if ((int)plVar6 == iStack_f4) {
              plVar6 = (long *)*puVar1;
              (**(code **)(*plVar6 + 0x30))();
              if ((int)plVar6 == iStack_f8) {
                plVar6 = (long *)*puVar1;
                (**(code **)(*plVar6 + 0x50))();
                if ((int)plVar6 == 4) goto LAB_10ac740e4;
              }
            }
          }
          lVar8 = *(long *)(param_1 + 0x90);
          FUN_10a2421c8();
          plVar6 = *(long **)(lVar8 + 0x228);
          uStack_150 = 0;
          uVar10 = NEON_rev64(CONCAT44(iStack_f4,iStack_f8),4);
          uStack_14c = (undefined4)uVar10;
          uStack_148._0_4_ = (undefined4)((ulong)uVar10 >> 0x20);
          uStack_13c = 0;
          uStack_138 = 0;
          uStack_148._4_4_ = 1;
          uStack_140 = 4;
          uStack_134 = 1;
          uStack_120 = 0;
          uStack_130 = 0;
          uStack_128 = 0;
          (**(code **)(*plVar6 + 0x20))(plVar6,&uStack_150);
          FUN_10a099d88(puVar1,plVar6);
LAB_10ac740e4:
          (**(code **)(*(long *)*puVar1 + 0x98))((long *)*puVar1,CONCAT44(uStack_ec,uStack_f0),0,0);
          if (lStack_c8 != 0) {
            piVar9 = (int *)(lStack_c8 + 0x14);
            do {
              iVar2 = *piVar9;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar4) {
                *piVar9 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&uStack_100);
            }
          }
          lStack_c8 = 0;
          uStack_e8 = 0;
          uStack_e4 = 0;
          uStack_f0 = 0;
          uStack_ec = 0;
          uStack_d8 = 0;
          uStack_d4 = 0;
          uStack_e0 = 0;
          uStack_dc = 0;
          if (0 < (int)uStack_fc) {
            lVar8 = 0;
            do {
              piStack_c0[lVar8] = 0;
              lVar8 = lVar8 + 1;
            } while (lVar8 < (int)uStack_fc);
          }
          if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
            _free(puStack_b8[-1]);
          }
          if (lStack_68 != 0) {
            piVar9 = (int *)(lStack_68 + 0x14);
            do {
              iVar2 = *piVar9;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar4) {
                *piVar9 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(auStack_a0);
            }
          }
          lStack_68 = 0;
          uStack_88 = 0;
          lStack_90 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          if (0 < (int)uStack_9c) {
            lVar8 = 0;
            do {
              piStack_60[lVar8] = 0;
              lVar8 = lVar8 + 1;
            } while (lVar8 < (int)uStack_9c);
          }
          if (puStack_58 != auStack_50 && puStack_58 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_58 + -8));
          }
          __ZNSt3__15mutex6unlockEv(param_1 + 0x2c0);
          return puVar1;
        }
      }
      FUN_10a00946c(&UNK_10f63b8ac);
      goto LAB_10ac74230;
    }
  }
  FUN_10a00946c(&UNK_10f63b8ac);
LAB_10ac74230:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ac74234);
  (*pcVar5)();
}



/* Entry: 10ac74278; end: 10ac74497;  */

void FUN_10ac74278(long *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  undefined1 uStack_138;
  undefined7 uStack_137;
  long lStack_130;
  undefined7 uStack_128;
  char cStack_121;
  undefined8 uStack_120;
  long *plStack_118;
  long lStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  long *plStack_a8;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 *puStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = param_2;
  (**(code **)(*param_2 + 0x248))(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0xf,plVar11);
  uStack_c8 = 0;
  plStack_c0 = (long *)0x0;
  lStack_d8 = 0;
  plStack_d0 = (long *)0x0;
  pcStack_78 = FUN_10ac873a4;
  ppuStack_70 = &PTR_DAT_110c67448;
  puStack_68 = &uStack_c8;
  FUN_10a02d928(param_2,&PTR_DAT_110c66f70,&pcStack_78,0);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  uStack_b8 = 0x10ac873d0;
  ppuStack_b0 = &PTR_DAT_110c67460;
  plStack_a8 = &lStack_d8;
  FUN_10a7e353c(param_2,&PTR_DAT_110c66f90,&uStack_b8,0);
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  __ZNSt3__15mutex4lockEv(param_1 + 0x58);
  func_0x00010a04a704(param_1 + 0x54,&uStack_c8);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x58);
  (**(code **)(*param_2 + 200))(param_2,&PTR_DAT_110c62600);
  if (0x2c0 < (int)param_2 - 0x10U) {
    FUN_10a00946c(&UNK_10f63b8ac);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10ac74454);
    (*pcVar7)();
  }
  *(int *)(param_1 + 0x53) = (int)param_2;
  plVar11 = &lStack_d8;
  FUN_10ac74498();
  plVar10 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    plVar1 = plStack_d0 + 1;
    do {
      lVar13 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_1 = plVar10;
    }
  }
  plVar10 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    plVar1 = plStack_c0 + 1;
    do {
      lVar13 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_1 = plVar10;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  func_0x00010a0524e4(&lStack_d8);
  func_0x00010a05248c(&uStack_c8);
  __Unwind_Resume();
  if (*plVar11 == 0) {
LAB_10ac746cc:
    FUN_10a00946c(&UNK_10f63b8ac);
  }
  else {
    FUN_10a7f82b8(param_1 + 0x56);
    lVar13 = *plVar11;
    func_0x00010aae9fd8();
    if (lVar13 == 0) goto LAB_10ac746cc;
    FUN_10a08d2e0(&uStack_138,lVar13 + 0x10);
    plVar11 = (long *)0x38;
    __Znwm();
    plVar11[1] = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&PTR_DAT_110bb3748;
    uStack_120 = plVar11 + 3;
    *uStack_120 = (long)&PTR_FUN_110ba56f0;
    plVar11[5] = lStack_130;
    plVar11[4] = CONCAT71(uStack_137,uStack_138);
    plVar11[6] = CONCAT17(cStack_121,uStack_128);
    cStack_121 = '\0';
    uStack_138 = 0;
    plStack_118 = plVar11;
    func_0x00010ac1c284(param_1 + 100,&uStack_120);
    plVar11 = plStack_118;
    if (plStack_118 != (long *)0x0) {
      plVar10 = plStack_118 + 1;
      do {
        lVar13 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_118 + 0x10))(plStack_118);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    if (cStack_121 < '\0') {
      __ZdlPv(CONCAT71(uStack_137,uStack_138));
    }
    __ZNSt3__15mutex4lockEv(param_1 + 0x58);
    plVar11 = (long *)param_1[0x51];
    func_0x000107c2b054(&uStack_138,&UNK_10f69d9f9);
    (**(code **)(*plVar11 + 0x18))(plVar11,&uStack_138);
    if (cStack_121 < '\0') {
      __ZdlPv(CONCAT71(uStack_137,uStack_138));
    }
    if ((param_1[0x54] != 0) && ((int)param_1[0x53] != 0)) {
      iVar8 = (int)*(undefined8 *)(param_1[0x54] + 0x268);
      puVar12 = (undefined8 *)0x1;
      FUN_10a088744();
      if (puVar12 == (undefined8 *)0x0) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = (long *)*puVar12;
      }
      if (iVar8 == 2) {
        plVar10 = plVar11;
        (**(code **)(*plVar11 + 0x28))();
        (**(code **)(*plVar11 + 0x30))();
        uVar2 = *(uint *)(param_1 + 0x53);
        uVar9 = (uint)plVar11;
        uVar14 = (uint)plVar10;
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = (uVar2 * uVar14) / uVar9;
        }
        if ((int)uVar14 <= (int)uVar9) {
          uVar5 = uVar2;
        }
        uVar6 = 0;
        if (uVar14 != 0) {
          uVar6 = (uVar2 * uVar9) / uVar14;
        }
        if ((int)uVar14 <= (int)uVar9) {
          uVar2 = uVar6;
        }
        uStack_120 = (long *)CONCAT44(uVar2,uVar5);
        (**(code **)(*(long *)param_1[0x51] + 0x30))((long *)param_1[0x51],&uStack_120);
        plVar11 = (long *)param_1[0x51];
        func_0x000107c2b054(&uStack_138,&UNK_10f69d9f9);
        (**(code **)(*plVar11 + 0x10))(plVar11,&uStack_138,param_1 + 100);
        if (cStack_121 < '\0') {
          __ZdlPv(CONCAT71(uStack_137,uStack_138));
        }
        lVar13 = param_1[0x51];
        func_0x000107c2b054(&uStack_138,&UNK_10f69d9f9);
        func_0x0001094c9d80(lVar13,&uStack_138);
        if (cStack_121 < '\0') {
          __ZdlPv(CONCAT71(uStack_137,uStack_138));
        }
        __ZNSt3__15mutex6unlockEv(param_1 + 0x58);
        return;
      }
      FUN_10a00946c(&UNK_10f63b8ac);
      goto LAB_10ac746f4;
    }
  }
  FUN_10a00946c(&UNK_10f63b8ac);
LAB_10ac746f4:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10ac746f8);
  (*pcVar7)();
}



/* Entry: 10ac74498; end: 10ac74757;  */

void FUN_10ac74498(long param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined1 uStack_58;
  undefined7 uStack_57;
  long lStack_50;
  undefined7 uStack_48;
  char cStack_41;
  undefined8 uStack_40;
  long *plStack_38;
  
  if (*param_2 == 0) {
LAB_10ac746cc:
    FUN_10a00946c(&UNK_10f63b8ac);
  }
  else {
    FUN_10a7f82b8(param_1 + 0x2b0);
    lVar9 = *param_2;
    func_0x00010aae9fd8();
    if (lVar9 == 0) goto LAB_10ac746cc;
    FUN_10a08d2e0(&uStack_58,lVar9 + 0x10);
    plVar10 = (long *)0x38;
    __Znwm();
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)&PTR_DAT_110bb3748;
    uStack_40 = plVar10 + 3;
    *uStack_40 = (long)&PTR_FUN_110ba56f0;
    plVar10[5] = lStack_50;
    plVar10[4] = CONCAT71(uStack_57,uStack_58);
    plVar10[6] = CONCAT17(cStack_41,uStack_48);
    cStack_41 = '\0';
    uStack_58 = 0;
    plStack_38 = plVar10;
    func_0x00010ac1c284(param_1 + 800,&uStack_40);
    plVar10 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar11 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if (cStack_41 < '\0') {
      __ZdlPv(CONCAT71(uStack_57,uStack_58));
    }
    __ZNSt3__15mutex4lockEv(param_1 + 0x2c0);
    plVar10 = *(long **)(param_1 + 0x288);
    func_0x000107c2b054(&uStack_58,&UNK_10f69d9f9);
    (**(code **)(*plVar10 + 0x18))(plVar10,&uStack_58);
    if (cStack_41 < '\0') {
      __ZdlPv(CONCAT71(uStack_57,uStack_58));
    }
    if ((*(long *)(param_1 + 0x2a0) != 0) && (*(int *)(param_1 + 0x298) != 0)) {
      iVar7 = (int)*(undefined8 *)(*(long *)(param_1 + 0x2a0) + 0x268);
      puVar12 = (undefined8 *)0x1;
      FUN_10a088744();
      if (puVar12 == (undefined8 *)0x0) {
        plVar10 = (long *)0x0;
      }
      else {
        plVar10 = (long *)*puVar12;
      }
      if (iVar7 == 2) {
        plVar11 = plVar10;
        (**(code **)(*plVar10 + 0x28))();
        (**(code **)(*plVar10 + 0x30))();
        uVar1 = *(uint *)(param_1 + 0x298);
        uVar8 = (uint)plVar10;
        uVar14 = (uint)plVar11;
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = (uVar1 * uVar14) / uVar8;
        }
        if ((int)uVar14 <= (int)uVar8) {
          uVar4 = uVar1;
        }
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = (uVar1 * uVar8) / uVar14;
        }
        if ((int)uVar14 <= (int)uVar8) {
          uVar1 = uVar5;
        }
        uStack_40 = (long *)CONCAT44(uVar1,uVar4);
        (**(code **)(**(long **)(param_1 + 0x288) + 0x30))(*(long **)(param_1 + 0x288),&uStack_40);
        plVar10 = *(long **)(param_1 + 0x288);
        func_0x000107c2b054(&uStack_58,&UNK_10f69d9f9);
        (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_58,param_1 + 800);
        if (cStack_41 < '\0') {
          __ZdlPv(CONCAT71(uStack_57,uStack_58));
        }
        uVar13 = *(undefined8 *)(param_1 + 0x288);
        func_0x000107c2b054(&uStack_58,&UNK_10f69d9f9);
        func_0x0001094c9d80(uVar13,&uStack_58);
        if (cStack_41 < '\0') {
          __ZdlPv(CONCAT71(uStack_57,uStack_58));
        }
        __ZNSt3__15mutex6unlockEv(param_1 + 0x2c0);
        return;
      }
      FUN_10a00946c(&UNK_10f63b8ac);
      goto LAB_10ac746f4;
    }
  }
  FUN_10a00946c(&UNK_10f63b8ac);
LAB_10ac746f4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac746f8);
  (*pcVar6)();
}



/* Entry: 10ac74758; end: 10ac747cf;  */

void FUN_10ac74758(long param_1,long *param_2)

{
  FUN_10a02e188(param_2,&PTR_DAT_110c66f70,param_1 + 0x2a0,&UNK_10f633e9d,0xd);
  FUN_10a009b20(param_2,&PTR_DAT_110c66f90,param_1 + 0x2b0,&UNK_10f63349d,0xe);
                    /* WARNING: Could not recover jumptable at 0x00010ac747cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110c62600,*(undefined4 *)(param_1 + 0x298));
  return;
}



/* Entry: 10ac747d0; end: 10ac74823;  */

void FUN_10ac747d0(long param_1)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x2c0);
  (**(code **)(**(long **)(param_1 + 0x288) + 0x40))();
  FUN_10a18cbd8(param_1 + 0x300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x2c0);
  return;
}



/* Entry: 10ac74824; end: 10ac74e33;  */

undefined *** FUN_10ac74824(undefined ***param_1,undefined8 *param_2)

{
  undefined **ppuVar1;
  int *piVar2;
  undefined ***pppuVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined ***pppuVar7;
  long *plVar8;
  undefined ***pppuVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined ***pppuVar18;
  undefined8 *unaff_x24;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined ***pppuStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 auStack_180 [2];
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  int iStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  long lStack_130;
  undefined4 *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined ***pppuStack_100;
  long lStack_f8;
  undefined ***pppuStack_f0;
  int iStack_e8;
  undefined8 uStack_e0;
  undefined ***pppuStack_d8;
  long lStack_d0;
  undefined ***pppuStack_c8;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined ***pppuStack_a0;
  undefined ***pppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = (undefined **)*param_2;
  if (ppuVar13 == (undefined **)0x0) {
    FUN_10a00946c(&UNK_10f63b8ac);
  }
  else {
    ppuVar15 = (undefined **)param_2[1];
    if (ppuVar15 != (undefined **)0x0) {
      ppuVar1 = ppuVar15 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar5) {
          *ppuVar1 = *ppuVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    param_1[0x62] = ppuVar13;
    ppuVar13 = param_1[99];
    param_1[99] = ppuVar15;
    if (ppuVar13 != (undefined **)0x0) {
      ppuVar15 = ppuVar13 + 1;
      do {
        puVar16 = *ppuVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
        if (bVar5) {
          *ppuVar15 = puVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar16 == (undefined *)0x0) {
        (**(code **)(*ppuVar13 + 0x10))(ppuVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
      }
    }
    FUN_10ac45bf0(&lStack_d0,param_1 + 8);
    pppuVar18 = param_1;
    if (lStack_d0 != 0) {
      do {
        pppuVar7 = pppuVar18;
        (*(code *)(*pppuVar18)[0x10])();
        if ((int)pppuVar7 != 2) {
          *(undefined4 *)((long)param_1 + 0x74) = 1;
          break;
        }
        pppuVar18 = (undefined ***)pppuVar18[0x13];
      } while (pppuVar18 != (undefined ***)0x0);
      uStack_168 = 0xf69f596;
      uStack_160 = 0xd;
      if (param_1[0x56] != (undefined **)0x0) {
        uStack_168 = 0xf69f5a4;
        uStack_160 = 0x11;
        if (*(int *)(param_1 + 0x53) != 0) {
          uStack_168 = 0xf69f5b6;
          iStack_164 = 1;
          uStack_160 = 0x15;
          uStack_15c = 0;
          if (param_1[0x54] != (undefined **)0x0) {
            pppuVar7 = (undefined ***)param_1[0x54][0x4d];
            puVar11 = (undefined8 *)0x1;
            FUN_10a088744();
            iStack_e8 = (int)pppuVar7;
            if (puVar11 == (undefined8 *)0x0) {
              uStack_e0 = 0;
              pppuStack_d8 = (undefined ***)0x0;
            }
            else {
              pppuStack_d8 = (undefined ***)puVar11[1];
              uStack_e0 = *puVar11;
              if (puVar11[1] != 0) {
                plVar8 = (long *)(puVar11[1] + 8);
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                  if (bVar5) {
                    *plVar8 = *plVar8 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
            }
            if (iStack_e8 != 2) {
              *(undefined4 *)((long)param_1 + 0x74) = 1;
LAB_10ac74ca0:
              pppuVar9 = pppuStack_d8;
              iVar10 = (int)puVar11;
              if (pppuStack_d8 != (undefined ***)0x0) {
                pppuVar3 = pppuStack_d8 + 1;
                do {
                  ppuVar13 = *pppuVar3;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
                  if (bVar5) {
                    *pppuVar3 = (undefined **)((long)ppuVar13 + -1);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (ppuVar13 == (undefined **)0x0) {
                  (*(code *)(*pppuStack_d8)[2])(pppuStack_d8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                  pppuVar7 = pppuVar9;
                }
              }
              if (pppuStack_c8 != (undefined ***)0x0) {
                pppuVar9 = pppuStack_c8 + 1;
                do {
                  ppuVar13 = *pppuVar9;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
                  if (bVar5) {
                    *pppuVar9 = (undefined **)((long)ppuVar13 + -1);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (ppuVar13 == (undefined **)0x0) {
                  (*(code *)(*pppuStack_c8)[2])(pppuStack_c8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                  pppuVar7 = pppuStack_c8;
                }
              }
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                return pppuVar7;
              }
              ___stack_chk_fail();
              if (iVar10 != 0) {
                func_0x000104bd46a0();
                (*(code *)*ppuStack_b0)(unaff_x24 + 1);
                FUN_10ac74e34(&uStack_1a8);
                if (pppuVar18 != (undefined ***)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar18);
                }
                func_0x00010567aa40(&uStack_168);
                func_0x00010a136de4(&lStack_108);
                func_0x00010a05248c(&lStack_f8);
                func_0x00010a0523dc(&uStack_e0);
                FUN_10ac805c8(&lStack_d0);
              }
              __Unwind_Resume();
              if (pppuVar7[4] != (undefined **)0x0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              ppuVar13 = pppuVar7[1];
              if (ppuVar13 != (undefined **)0x0) {
                ppuVar15 = ppuVar13 + 1;
                do {
                  puVar16 = *ppuVar15;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
                  if (bVar5) {
                    *ppuVar15 = puVar16 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (puVar16 == (undefined *)0x0) {
                  (**(code **)(*ppuVar13 + 0x10))(ppuVar13);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
                }
              }
              return pppuVar7;
            }
            FUN_10a53daa8(&lStack_f8,param_1[0x12],&uStack_e0);
            plVar8 = *(long **)(lStack_f8 + 0x268);
            if ((plVar8 == (long *)0x0) || ((**(code **)(*plVar8 + 0xe8))(), (int)plVar8 != 4)) {
              FUN_10a00946c(&UNK_10f63b8ac);
            }
            else {
              uVar17 = (ulong)*(byte *)((long)param_1[0x12] + 0x29);
              if (uVar17 < 6) {
                FUN_10aba1500(&lStack_108,param_1[0x12][uVar17 + 6],lStack_f8,0);
                iVar10 = *(int *)(lStack_108 + 0x24);
                uStack_168 = 0x42ff0000;
                puStack_128 = &uStack_160;
                uStack_15c = 0;
                uStack_158 = 0;
                iStack_164 = 0;
                uStack_160 = 0;
                uStack_14c = 0;
                uStack_148 = 0;
                uStack_154 = 0;
                uStack_150 = 0;
                uStack_13c = 0;
                uStack_144 = 0;
                uStack_140 = 0;
                lStack_130 = 0;
                uStack_138 = 0;
                uStack_134 = 0;
                uStack_118 = 0;
                uStack_110 = 0;
                puStack_120 = &uStack_118;
                FUN_10a0f3910(&uStack_b8,lStack_108 + 0x10,0);
                uVar12 = 3;
                if (iVar10 != 5) {
                  uVar12 = 1;
                }
                pppuStack_198 = (undefined ***)0x0;
                uStack_1a8 = CONCAT44(uStack_1a8._4_4_,0x1010000);
                auStack_180[0] = 0x2010000;
                uStack_170 = 0;
                puStack_1a0 = &uStack_b8;
                puStack_178 = (undefined8 *)&uStack_168;
                func_0x000109ac9fc8(&uStack_1a8,auStack_180,uVar12,0);
                if (lStack_80 != 0) {
                  piVar2 = (int *)(lStack_80 + 0x14);
                  do {
                    iVar10 = *piVar2;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar5) {
                      *piVar2 = iVar10 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar10 + -1 == 0) {
                    func_0x000109a848d4(&uStack_b8);
                  }
                }
                lStack_80 = 0;
                pppuStack_a0 = (undefined ***)0x0;
                lStack_a8 = 0;
                ppuStack_90 = (undefined **)0x0;
                pppuStack_98 = (undefined ***)0x0;
                if (0 < uStack_b8._4_4_) {
                  lVar14 = 0;
                  do {
                    *(undefined4 *)(lStack_78 + lVar14 * 4) = 0;
                    lVar14 = lVar14 + 1;
                  } while (lVar14 < uStack_b8._4_4_);
                }
                if (puStack_70 != auStack_68 && puStack_70 != (undefined1 *)0x0) {
                  _free(*(undefined8 *)(puStack_70 + -8));
                }
                func_0x0001094c9f6c(param_1[0x51],&uStack_168);
                pppuVar18 = (undefined ***)param_1[99];
                ppuStack_88 = param_1[99];
                ppuStack_90 = param_1[0x62];
                if (pppuVar18 != (undefined ***)0x0) {
                  pppuVar7 = pppuVar18 + 2;
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
                    if (bVar5) {
                      *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                ppuVar13 = param_1[0x51];
                if (pppuStack_c8 != (undefined ***)0x0) {
                  pppuVar7 = pppuStack_c8 + 1;
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
                    if (bVar5) {
                      *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                if (pppuVar18 != (undefined ***)0x0) {
                  pppuVar7 = pppuVar18 + 2;
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
                    if (bVar5) {
                      *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                uStack_b8 = FUN_10ac873fc;
                ppuStack_b0 = &PTR_FUN_110c67478;
                unaff_x24 = &uStack_b8;
                pppuStack_a0 = pppuStack_c8;
                lStack_a8 = lStack_d0;
                uStack_1a8 = 0;
                puStack_1a0 = (undefined8 *)0x0;
                uStack_190 = 0;
                uStack_188 = 0;
                puVar11 = &uStack_b8;
                pppuStack_198 = param_1;
                pppuStack_98 = param_1;
                func_0x0001094ca118(ppuVar13);
                pppuVar7 = &ppuStack_b0;
                (*(code *)*ppuStack_b0)();
                if (pppuVar18 != (undefined ***)0x0) {
                  pppuVar7 = pppuVar18;
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                if (lStack_130 != 0) {
                  piVar2 = (int *)(lStack_130 + 0x14);
                  do {
                    iVar10 = *piVar2;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar5) {
                      *piVar2 = iVar10 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar10 + -1 == 0) {
                    pppuVar7 = (undefined ***)&uStack_168;
                    func_0x000109a848d4();
                  }
                }
                lStack_130 = 0;
                uStack_150 = 0;
                uStack_14c = 0;
                uStack_158 = 0;
                uStack_154 = 0;
                uStack_140 = 0;
                uStack_13c = 0;
                uStack_148 = 0;
                uStack_144 = 0;
                if (0 < iStack_164) {
                  lVar14 = 0;
                  do {
                    puStack_128[lVar14] = 0;
                    lVar14 = lVar14 + 1;
                  } while (lVar14 < iStack_164);
                }
                if (puStack_120 != &uStack_118 && puStack_120 != (undefined8 *)0x0) {
                  pppuVar7 = (undefined ***)puStack_120[-1];
                  _free();
                }
                if (pppuStack_100 != (undefined ***)0x0) {
                  pppuVar9 = pppuStack_100 + 1;
                  do {
                    ppuVar13 = *pppuVar9;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
                    if (bVar5) {
                      *pppuVar9 = (undefined **)((long)ppuVar13 + -1);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (ppuVar13 == (undefined **)0x0) {
                    (*(code *)(*pppuStack_100)[2])(pppuStack_100);
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                    pppuVar7 = pppuStack_100;
                  }
                }
                if (pppuStack_f0 != (undefined ***)0x0) {
                  pppuVar9 = pppuStack_f0 + 1;
                  do {
                    ppuVar13 = *pppuVar9;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
                    if (bVar5) {
                      *pppuVar9 = (undefined **)((long)ppuVar13 + -1);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (ppuVar13 == (undefined **)0x0) {
                    (*(code *)(*pppuStack_f0)[2])(pppuStack_f0);
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                    pppuVar7 = pppuStack_f0;
                  }
                }
                goto LAB_10ac74ca0;
              }
            }
            goto LAB_10ac74d78;
          }
        }
      }
      uStack_15c = 0;
      iStack_164 = 1;
      FUN_10a0edfc4(&uStack_168);
      goto LAB_10ac74d78;
    }
  }
  FUN_10a00946c(&UNK_10f63b8ac);
LAB_10ac74d78:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac74d7c);
  (*pcVar6)();
}



/* Entry: 10ac74e34; end: 10ac74e5f;  */

long FUN_10ac74e34(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
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



/* Entry: 10ac74e60; end: 10ac74e7f;  */

undefined1  [16] FUN_10ac74e60(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x2b;
  auVar1._0_8_ = &UNK_10f69faf7;
  return auVar1;
}



/* Entry: 10ac74e80; end: 10ac74ee7;  */

bool FUN_10ac74e80(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
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



/* Entry: 10ac74ee8; end: 10ac74eef;  */

bool FUN_10ac74ee8(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
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



/* Entry: 10ac74ef0; end: 10ac74f47;  */

void FUN_10ac74ef0(undefined8 param_1)

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
  puStack_40 = &UNK_10f69e32c;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10ac74f48(param_1,&uStack_58);
  FUN_10ac87600();
  return;
}



/* Entry: 10ac74f48; end: 10ac7501f;  */

/* WARNING: Removing unreachable block (ram,0x00010ac74fe0) */

undefined1  [16] FUN_10ac74f48(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f69faf7,0x2b);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ac87504(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ac75020; end: 10ac75163;  */

long * FUN_10ac75020(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  
  plStack_38 = (long *)param_4[1];
  uStack_40 = *param_4;
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
  FUN_10ac6e994(param_1,param_2 + 1,param_3,1,&uStack_40);
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
  lVar5 = *param_2;
  *param_1 = lVar5;
  param_1[2] = (long)&PTR_FUN_110c62708;
  param_1[5] = (long)&PTR_DAT_110c62738;
  *(long *)((long)param_1 + *(long *)(lVar5 + -0x18)) = param_2[7];
  if (*(char *)((long)param_1 + 0xb9) != '\x01') {
    *(undefined1 *)((long)param_1 + 0xb9) = 1;
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  if (*(char *)((long)param_1 + 0xba) != '\x01') {
    *(undefined1 *)((long)param_1 + 0xba) = 1;
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  func_0x00010ac6ec94(param_1);
  return param_1;
}



/* Entry: 10ac75164; end: 10ac752b7;  */

long * FUN_10ac75164(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1d] = (long)&PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x20) = 0x100;
  plStack_28 = (long *)param_3[1];
  uStack_30 = *param_3;
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
  FUN_10ac6e994(param_1,&PTR_PTR_110c67eb8,param_2,1,&uStack_30);
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
  *param_1 = (long)&PTR_FUN_110c62638;
  param_1[2] = (long)&PTR_FUN_110c62708;
  param_1[5] = (long)&PTR_DAT_110c62738;
  param_1[0x1d] = (long)&PTR_DAT_110c627c0;
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



/* Entry: 10ac752b8; end: 10ac752bb;  */

void FUN_10ac752b8(void)

{
  return;
}



/* Entry: 10ac752bc; end: 10ac752ff;  */

void FUN_10ac752bc(undefined8 param_1,long *param_2)

{
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_20 = &UNK_10f69faf7;
  uStack_18 = 0x2b;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c66928,&puStack_20);
  return;
}



/* Entry: 10ac75300; end: 10ac7539f;  */

undefined8 * FUN_10ac75300(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c62808;
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10ac753a0; end: 10ac753a3;  */

undefined8 * FUN_10ac753a0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c5f360;
  param_1[2] = &PTR_FUN_110c5f4a0;
  param_1[5] = &PTR_FUN_110c5f4d0;
  param_1[0x75] = &PTR_FUN_110c5f5f0;
  param_1[0x15] = &PTR_FUN_110c5f528;
  param_1[0x51] = &PTR_FUN_110c5f550;
  param_1[0x56] = &PTR_FUN_110c5f598;
  FUN_10ac78198(param_1 + 0x71);
  FUN_10ac78198(param_1 + 0x6f);
  FUN_10ac78198(param_1 + 0x6d);
  FUN_10ac78198(param_1 + 0x6b);
  FUN_10ac78198(param_1 + 0x69);
  FUN_10ac78198(param_1 + 0x67);
  FUN_10a0617bc(param_1 + 0x65);
  func_0x00010a061678(param_1 + 99);
  func_0x00010a0cfa6c(param_1 + 0x61);
  func_0x00010a0523dc(param_1 + 0x5f);
  func_0x00010a05248c(param_1 + 0x5d);
  plVar2 = (long *)param_1[0x5b];
  param_1[0x5b] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a00dc2c(param_1 + 0x56);
  param_1[0x51] = &PTR_DAT_110c62b60;
  param_1[0x75] = &PTR_FUN_110c62bd8;
  func_0x00010a004e5c(param_1 + 0x54);
  func_0x00010a004e04(param_1 + 0x52);
  *param_1 = &PTR_FUN_110c62880;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x75] = &PTR_DAT_110c629e0;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c62a30;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x75] = &PTR_DAT_110c62b00;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar3; puVar4 != puVar5; puVar4 = puVar4 + 1) {
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
  FUN_10ac634b8(ppuVar3);
  plVar2 = param_1 + 10;
  if ((*plVar2 != 0) && (*(undefined ***)(*(long *)(*plVar2 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar2;
  *plVar2 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar2);
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



/* Entry: 10ac753a4; end: 10ac753b7;  */

void FUN_10ac753a4(void)

{
  FUN_10ac7a744();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac753b8; end: 10ac753c7;  */

long FUN_10ac753b8(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10ac753c8; end: 10ac753df;  */

void FUN_10ac753c8(long param_1)

{
  FUN_10ac7a744(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac753e0; end: 10ac753e7;  */

undefined8 * FUN_10ac753e0(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = param_1 + -5;
  *puVar2 = &PTR_FUN_110c5f360;
  param_1[-3] = &PTR_FUN_110c5f4a0;
  *param_1 = &PTR_FUN_110c5f4d0;
  param_1[0x70] = &PTR_FUN_110c5f5f0;
  param_1[0x10] = &PTR_FUN_110c5f528;
  param_1[0x4c] = &PTR_FUN_110c5f550;
  param_1[0x51] = &PTR_FUN_110c5f598;
  FUN_10ac78198(param_1 + 0x6c);
  FUN_10ac78198(param_1 + 0x6a);
  FUN_10ac78198(param_1 + 0x68);
  FUN_10ac78198(param_1 + 0x66);
  FUN_10ac78198(param_1 + 100);
  FUN_10ac78198(param_1 + 0x62);
  FUN_10a0617bc(param_1 + 0x60);
  func_0x00010a061678(param_1 + 0x5e);
  func_0x00010a0cfa6c(param_1 + 0x5c);
  func_0x00010a0523dc(param_1 + 0x5a);
  func_0x00010a05248c(param_1 + 0x58);
  plVar3 = (long *)param_1[0x56];
  param_1[0x56] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_10a00dc2c(param_1 + 0x51);
  param_1[0x4c] = &PTR_DAT_110c62b60;
  param_1[0x70] = &PTR_FUN_110c62bd8;
  func_0x00010a004e5c(param_1 + 0x4f);
  func_0x00010a004e04(param_1 + 0x4d);
  *puVar2 = &PTR_FUN_110c62880;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x70] = &PTR_DAT_110c629e0;
  param_1[0x10] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x10);
  *puVar2 = &PTR_DAT_110c62a30;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x70] = &PTR_DAT_110c62b00;
  FUN_10a042dcc(param_1 + 0xe);
  *puVar2 = &PTR_DAT_110c60a00;
  param_1[-3] = &PTR_DAT_110c60a88;
  *param_1 = &PTR_DAT_110c60ab8;
  ppuVar4 = (undefined **)(param_1 + 6);
  puVar6 = (undefined8 *)param_1[7];
  for (puVar5 = (undefined8 *)*ppuVar4; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar4);
  plVar3 = param_1 + 5;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -2);
  if ((param_1[0xd] != 0) && (lVar1 = *(long *)(param_1[0xd] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar4;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar2;
}



/* Entry: 10ac753e8; end: 10ac753ff;  */

void FUN_10ac753e8(long param_1)

{
  FUN_10ac7a744(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac75400; end: 10ac75407;  */

undefined8 * FUN_10ac75400(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = param_1 + -0x15;
  *puVar2 = &PTR_FUN_110c5f360;
  param_1[-0x13] = &PTR_FUN_110c5f4a0;
  param_1[-0x10] = &PTR_FUN_110c5f4d0;
  param_1[0x60] = &PTR_FUN_110c5f5f0;
  *param_1 = &PTR_FUN_110c5f528;
  param_1[0x3c] = &PTR_FUN_110c5f550;
  param_1[0x41] = &PTR_FUN_110c5f598;
  FUN_10ac78198(param_1 + 0x5c);
  FUN_10ac78198(param_1 + 0x5a);
  FUN_10ac78198(param_1 + 0x58);
  FUN_10ac78198(param_1 + 0x56);
  FUN_10ac78198(param_1 + 0x54);
  FUN_10ac78198(param_1 + 0x52);
  FUN_10a0617bc(param_1 + 0x50);
  func_0x00010a061678(param_1 + 0x4e);
  func_0x00010a0cfa6c(param_1 + 0x4c);
  func_0x00010a0523dc(param_1 + 0x4a);
  func_0x00010a05248c(param_1 + 0x48);
  plVar3 = (long *)param_1[0x46];
  param_1[0x46] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_10a00dc2c(param_1 + 0x41);
  param_1[0x3c] = &PTR_DAT_110c62b60;
  param_1[0x60] = &PTR_FUN_110c62bd8;
  func_0x00010a004e5c(param_1 + 0x3f);
  func_0x00010a004e04(param_1 + 0x3d);
  *puVar2 = &PTR_FUN_110c62880;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x60] = &PTR_DAT_110c629e0;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar2 = &PTR_DAT_110c62a30;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x60] = &PTR_DAT_110c62b00;
  FUN_10a042dcc(param_1 + -2);
  *puVar2 = &PTR_DAT_110c60a00;
  param_1[-0x13] = &PTR_DAT_110c60a88;
  param_1[-0x10] = &PTR_DAT_110c60ab8;
  ppuVar4 = (undefined **)(param_1 + -10);
  puVar6 = (undefined8 *)param_1[-9];
  for (puVar5 = (undefined8 *)*ppuVar4; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar4);
  plVar3 = param_1 + -0xb;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x12);
  if ((param_1[-3] != 0) && (lVar1 = *(long *)(param_1[-3] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)param_1 + -0x19) < '\0') {
    __ZdlPv(param_1[-6]);
  }
  appuStack_180[0] = ppuVar4;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[-0xc] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0xf);
  param_1[-0x13] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x12);
  return puVar2;
}



/* Entry: 10ac75408; end: 10ac7541f;  */

void FUN_10ac75408(long param_1)

{
  FUN_10ac7a744(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac75420; end: 10ac75427;  */

undefined8 * FUN_10ac75420(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = param_1 + -0x51;
  *puVar2 = &PTR_FUN_110c5f360;
  param_1[-0x4f] = &PTR_FUN_110c5f4a0;
  param_1[-0x4c] = &PTR_FUN_110c5f4d0;
  param_1[0x24] = &PTR_FUN_110c5f5f0;
  param_1[-0x3c] = &PTR_FUN_110c5f528;
  *param_1 = &PTR_FUN_110c5f550;
  param_1[5] = &PTR_FUN_110c5f598;
  FUN_10ac78198(param_1 + 0x20);
  FUN_10ac78198(param_1 + 0x1e);
  FUN_10ac78198(param_1 + 0x1c);
  FUN_10ac78198(param_1 + 0x1a);
  FUN_10ac78198(param_1 + 0x18);
  FUN_10ac78198(param_1 + 0x16);
  FUN_10a0617bc(param_1 + 0x14);
  func_0x00010a061678(param_1 + 0x12);
  func_0x00010a0cfa6c(param_1 + 0x10);
  func_0x00010a0523dc(param_1 + 0xe);
  func_0x00010a05248c(param_1 + 0xc);
  plVar3 = (long *)param_1[10];
  param_1[10] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_10a00dc2c(param_1 + 5);
  *param_1 = &PTR_DAT_110c62b60;
  param_1[0x24] = &PTR_FUN_110c62bd8;
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
  *puVar2 = &PTR_FUN_110c62880;
  param_1[-0x4f] = &PTR_FUN_110bb3968;
  param_1[-0x4c] = &PTR_DAT_110bb3998;
  param_1[0x24] = &PTR_DAT_110c629e0;
  param_1[-0x3c] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -4);
  func_0x00010a042c64(param_1 + -9);
  func_0x00010a0523dc(param_1 + -0xc);
  if (*(char *)(param_1 + -0x15) == '\x01') {
    func_0x00010a042d30(param_1 + -0x17);
  }
  param_1[-0x3c] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x3c);
  *puVar2 = &PTR_DAT_110c62a30;
  param_1[-0x4f] = &PTR_FUN_110b9f848;
  param_1[-0x4c] = &PTR_DAT_110b9f878;
  param_1[0x24] = &PTR_DAT_110c62b00;
  FUN_10a042dcc(param_1 + -0x3e);
  *puVar2 = &PTR_DAT_110c60a00;
  param_1[-0x4f] = &PTR_DAT_110c60a88;
  param_1[-0x4c] = &PTR_DAT_110c60ab8;
  ppuVar4 = (undefined **)(param_1 + -0x46);
  puVar6 = (undefined8 *)param_1[-0x45];
  for (puVar5 = (undefined8 *)*ppuVar4; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar4);
  plVar3 = param_1 + -0x47;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x4e);
  if ((param_1[-0x3f] != 0) && (lVar1 = *(long *)(param_1[-0x3f] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)param_1 + -0x1f9) < '\0') {
    __ZdlPv(param_1[-0x42]);
  }
  appuStack_180[0] = ppuVar4;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[-0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x4c] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x4b);
  param_1[-0x4f] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x4e);
  return puVar2;
}



/* Entry: 10ac75428; end: 10ac7543f;  */

void FUN_10ac75428(long param_1)

{
  FUN_10ac7a744(param_1 + -0x288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac75440; end: 10ac75447;  */

undefined8 * FUN_10ac75440(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = param_1 + -0x56;
  *puVar2 = &PTR_FUN_110c5f360;
  param_1[-0x54] = &PTR_FUN_110c5f4a0;
  param_1[-0x51] = &PTR_FUN_110c5f4d0;
  param_1[0x1f] = &PTR_FUN_110c5f5f0;
  param_1[-0x41] = &PTR_FUN_110c5f528;
  param_1[-5] = &PTR_FUN_110c5f550;
  *param_1 = &PTR_FUN_110c5f598;
  FUN_10ac78198(param_1 + 0x1b);
  FUN_10ac78198(param_1 + 0x19);
  FUN_10ac78198(param_1 + 0x17);
  FUN_10ac78198(param_1 + 0x15);
  FUN_10ac78198(param_1 + 0x13);
  FUN_10ac78198(param_1 + 0x11);
  FUN_10a0617bc(param_1 + 0xf);
  func_0x00010a061678(param_1 + 0xd);
  func_0x00010a0cfa6c(param_1 + 0xb);
  func_0x00010a0523dc(param_1 + 9);
  func_0x00010a05248c(param_1 + 7);
  plVar3 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_10a00dc2c(param_1);
  param_1[-5] = &PTR_DAT_110c62b60;
  param_1[0x1f] = &PTR_FUN_110c62bd8;
  func_0x00010a004e5c(param_1 + -2);
  func_0x00010a004e04(param_1 + -4);
  *puVar2 = &PTR_FUN_110c62880;
  param_1[-0x54] = &PTR_FUN_110bb3968;
  param_1[-0x51] = &PTR_DAT_110bb3998;
  param_1[0x1f] = &PTR_DAT_110c629e0;
  param_1[-0x41] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -9);
  func_0x00010a042c64(param_1 + -0xe);
  func_0x00010a0523dc(param_1 + -0x11);
  if (*(char *)(param_1 + -0x1a) == '\x01') {
    func_0x00010a042d30(param_1 + -0x1c);
  }
  param_1[-0x41] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x41);
  *puVar2 = &PTR_DAT_110c62a30;
  param_1[-0x54] = &PTR_FUN_110b9f848;
  param_1[-0x51] = &PTR_DAT_110b9f878;
  param_1[0x1f] = &PTR_DAT_110c62b00;
  FUN_10a042dcc(param_1 + -0x43);
  *puVar2 = &PTR_DAT_110c60a00;
  param_1[-0x54] = &PTR_DAT_110c60a88;
  param_1[-0x51] = &PTR_DAT_110c60ab8;
  ppuVar4 = (undefined **)(param_1 + -0x4b);
  puVar6 = (undefined8 *)param_1[-0x4a];
  for (puVar5 = (undefined8 *)*ppuVar4; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar4);
  plVar3 = param_1 + -0x4c;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x53);
  if ((param_1[-0x44] != 0) && (lVar1 = *(long *)(param_1[-0x44] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)param_1 + -0x221) < '\0') {
    __ZdlPv(param_1[-0x47]);
  }
  appuStack_180[0] = ppuVar4;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[-0x4d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x51] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x50);
  param_1[-0x54] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x53);
  return puVar2;
}



/* Entry: 10ac75448; end: 10ac7545f;  */

void FUN_10ac75448(long param_1)

{
  FUN_10ac7a744(param_1 + -0x2b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac75460; end: 10ac7546f;  */

undefined8 * FUN_10ac75460(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110c5f360;
  puVar1[2] = &PTR_FUN_110c5f4a0;
  puVar1[5] = &PTR_FUN_110c5f4d0;
  puVar1[0x75] = &PTR_FUN_110c5f5f0;
  puVar1[0x15] = &PTR_FUN_110c5f528;
  puVar1[0x51] = &PTR_FUN_110c5f550;
  puVar1[0x56] = &PTR_FUN_110c5f598;
  FUN_10ac78198(puVar1 + 0x71);
  FUN_10ac78198(puVar1 + 0x6f);
  FUN_10ac78198(puVar1 + 0x6d);
  FUN_10ac78198(puVar1 + 0x6b);
  FUN_10ac78198(puVar1 + 0x69);
  FUN_10ac78198(puVar1 + 0x67);
  FUN_10a0617bc(puVar1 + 0x65);
  func_0x00010a061678(puVar1 + 99);
  func_0x00010a0cfa6c(puVar1 + 0x61);
  func_0x00010a0523dc(puVar1 + 0x5f);
  func_0x00010a05248c(puVar1 + 0x5d);
  plVar3 = (long *)puVar1[0x5b];
  puVar1[0x5b] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_10a00dc2c(puVar1 + 0x56);
  puVar1[0x51] = &PTR_DAT_110c62b60;
  puVar1[0x75] = &PTR_FUN_110c62bd8;
  func_0x00010a004e5c(puVar1 + 0x54);
  func_0x00010a004e04(puVar1 + 0x52);
  *puVar1 = &PTR_FUN_110c62880;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0x75] = &PTR_DAT_110c629e0;
  puVar1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar1 + 0x15);
  *puVar1 = &PTR_DAT_110c62a30;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0x75] = &PTR_DAT_110c62b00;
  FUN_10a042dcc(puVar1 + 0x13);
  *puVar1 = &PTR_DAT_110c60a00;
  puVar1[2] = &PTR_DAT_110c60a88;
  puVar1[5] = &PTR_DAT_110c60ab8;
  ppuVar4 = (undefined **)(puVar1 + 0xb);
  puVar6 = (undefined8 *)puVar1[0xc];
  for (puVar5 = (undefined8 *)*ppuVar4; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar4);
  plVar3 = puVar1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(puVar1 + 3);
  if ((puVar1[0x12] != 0) && (lVar2 = *(long *)(puVar1[0x12] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)puVar1 + 0x8f) < '\0') {
    __ZdlPv(puVar1[0xf]);
  }
  appuStack_180[0] = ppuVar4;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar3;
  *plVar3 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (puVar1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 6);
  puVar1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(puVar1 + 3);
  return puVar1;
}



/* Entry: 10ac75470; end: 10ac75ffb;  */

void FUN_10ac75470(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10ac7a744((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac75ffc; end: 10ac76003;  */

void FUN_10ac75ffc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac76000);
  (*pcVar1)();
}



/* Entry: 10ac76004; end: 10ac7614f;  */

long * FUN_10ac76004(long *param_1)

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



/* Entry: 10ac76150; end: 10ac76193;  */

undefined4 FUN_10ac76150(long param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}



/* Entry: 10ac76194; end: 10ac76817;  */

void FUN_10ac76194(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + -0x10);
  do {
    plVar1 = plVar2;
    (**(code **)(*plVar2 + 0x80))();
    if ((int)plVar1 != 2) {
      return;
    }
    plVar2 = (long *)plVar2[0x13];
  } while (plVar2 != (long *)0x0);
  return;
}



/* Entry: 10ac76818; end: 10ac7685f;  */

long FUN_10ac76818(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10ac76860; end: 10ac76943;  */

void FUN_10ac76860(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uStack_40;
  long *plStack_38;
  long *plStack_30;
  undefined4 uStack_28;
  
  FUN_10ac607ec(param_1,1);
  plVar6 = *(long **)(param_1 + 0x300);
  if (plVar6 == (long *)0x0) {
    return;
  }
  if (*plVar6 != 0) {
    plVar5 = plVar6;
    plStack_30 = plVar6;
    __ZSt19uncaught_exceptionsv();
    uStack_28 = SUB84(plVar5,0);
    FUN_109d1a244(plVar6);
    func_0x0001092af8bc(plVar6);
    lVar7 = *plVar6;
    if ((*(byte *)(lVar7 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a25449c);
      (*pcVar4)();
    }
    plVar10 = *(long **)(lVar7 + 0xa0);
    uVar9 = *(undefined8 *)(lVar7 + 0x98);
    *(undefined8 *)(lVar7 + 0x98) = 0;
    *(undefined8 *)(lVar7 + 0xa0) = 0;
    plVar5 = (long *)*plVar6;
    *plVar6 = 0;
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    uStack_40 = uVar9;
    plStack_38 = plVar10;
    FUN_10a00e5c4(plVar6 + 2,&uStack_40);
    plVar6 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar5 = plStack_38 + 1;
      do {
        lVar7 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    func_0x00010a258714(&plStack_30);
  }
  return;
}



/* Entry: 10ac76944; end: 10ac76953;  */

void FUN_10ac76944(void)

{
  return;
}



/* Entry: 10ac76954; end: 10ac76a43;  */

void FUN_10ac76954(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *param_1 = puVar1;
  param_1[2] = 0x8000000000000020;
  param_1[1] = 0x19;
  puVar1[1] = 0x746144726961482e;
  *puVar1 = 0x72656469766f7250;
  *(undefined8 *)((long)puVar1 + 0x11) = 0x72656469766f7250;
  *(undefined8 *)((long)puVar1 + 9) = 0x6174614472696148;
  *(undefined1 *)((long)puVar1 + 0x19) = 0;
  return;
}



/* Entry: 10ac76a44; end: 10ac76a6b;  */

void FUN_10ac76a44(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac76a48);
  (*pcVar1)();
}



/* Entry: 10ac76a6c; end: 10ac76a8b;  */

void FUN_10ac76a6c(long param_1)

{
  FUN_10ac6e4cc(param_1 + -0x10,&PTR_PTR_110c67ef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac76a8c; end: 10ac76a9b;  */

undefined8 * FUN_10ac76a8c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = param_1 + -5;
  *puVar2 = &PTR_FUN_110c64578;
  param_1[-3] = &PTR_FUN_110c61720;
  *param_1 = &PTR_DAT_110c61750;
  param_1[0xc1] = &PTR_DAT_110c64708;
  param_1[0x10] = &PTR_DAT_110c617a8;
  param_1[0x4c] = &PTR_DAT_110c617c8;
  param_1[0x4d] = &PTR_DAT_110c61810;
  param_1[0x97] = &PTR_DAT_110c61838;
  FUN_10a7c9c00(*(long *)(param_1[0xd] + 3000) + 0x78,&stack0xffffffffffffffc8);
  func_0x00010a05a86c(param_1 + 0xbe);
  func_0x00010ac51d18(param_1 + 0xbc);
  FUN_10a05b1b0(param_1 + 0xba);
  func_0x00010a042b54(param_1 + 0xb8);
  if (param_1[0xb4] != 0) {
    param_1[0xb5] = param_1[0xb4];
    __ZdlPv();
  }
  func_0x00010a042b54(param_1 + 0xb0);
  func_0x00010a042b54(param_1 + 0xae);
  FUN_10a05b1b0(param_1 + 0xac);
  func_0x00010a0523dc(param_1 + 0xa9);
  FUN_10ac827e8(param_1 + 0xa7);
  FUN_10a37b878(param_1 + 0xa5);
  FUN_10a05b1b0(param_1 + 0xa3);
  if (*(char *)((long)param_1 + 0x517) < '\0') {
    __ZdlPv(param_1[0xa0]);
  }
  param_1[0x97] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x9a] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x9a] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x98);
  FUN_10ac3b3c8(param_1 + 0x4d);
  *puVar2 = &PTR_FUN_110c64758;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0xc1] = &PTR_DAT_110c648b8;
  param_1[0x10] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x10);
  *puVar2 = &PTR_DAT_110c64908;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0xc1] = &PTR_DAT_110c649d8;
  FUN_10a042dcc(param_1 + 0xe);
  *puVar2 = &PTR_DAT_110c60a00;
  param_1[-3] = &PTR_DAT_110c60a88;
  *param_1 = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 6);
  puVar6 = (undefined8 *)param_1[7];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + 5;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -2);
  if ((param_1[0xd] != 0) && (lVar1 = *(long *)(param_1[0xd] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar4;
  *plVar4 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar2;
}



/* Entry: 10ac76a9c; end: 10ac76abb;  */

void FUN_10ac76a9c(long param_1)

{
  FUN_10ac6e4cc(param_1 + -0x28,&PTR_PTR_110c67ef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac76abc; end: 10ac76acb;  */

undefined8 * FUN_10ac76abc(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = param_1 + -0x15;
  *puVar2 = &PTR_FUN_110c64578;
  param_1[-0x13] = &PTR_FUN_110c61720;
  param_1[-0x10] = &PTR_DAT_110c61750;
  param_1[0xb1] = &PTR_DAT_110c64708;
  *param_1 = &PTR_DAT_110c617a8;
  param_1[0x3c] = &PTR_DAT_110c617c8;
  param_1[0x3d] = &PTR_DAT_110c61810;
  param_1[0x87] = &PTR_DAT_110c61838;
  FUN_10a7c9c00(*(long *)(param_1[-3] + 3000) + 0x78,&stack0xffffffffffffffc8);
  func_0x00010a05a86c(param_1 + 0xae);
  func_0x00010ac51d18(param_1 + 0xac);
  FUN_10a05b1b0(param_1 + 0xaa);
  func_0x00010a042b54(param_1 + 0xa8);
  if (param_1[0xa4] != 0) {
    param_1[0xa5] = param_1[0xa4];
    __ZdlPv();
  }
  func_0x00010a042b54(param_1 + 0xa0);
  func_0x00010a042b54(param_1 + 0x9e);
  FUN_10a05b1b0(param_1 + 0x9c);
  func_0x00010a0523dc(param_1 + 0x99);
  FUN_10ac827e8(param_1 + 0x97);
  FUN_10a37b878(param_1 + 0x95);
  FUN_10a05b1b0(param_1 + 0x93);
  if (*(char *)((long)param_1 + 0x497) < '\0') {
    __ZdlPv(param_1[0x90]);
  }
  param_1[0x87] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x8a] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x8a] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x88);
  FUN_10ac3b3c8(param_1 + 0x3d);
  *puVar2 = &PTR_FUN_110c64758;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0xb1] = &PTR_DAT_110c648b8;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar2 = &PTR_DAT_110c64908;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0xb1] = &PTR_DAT_110c649d8;
  FUN_10a042dcc(param_1 + -2);
  *puVar2 = &PTR_DAT_110c60a00;
  param_1[-0x13] = &PTR_DAT_110c60a88;
  param_1[-0x10] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -10);
  puVar6 = (undefined8 *)param_1[-9];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0xb;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x12);
  if ((param_1[-3] != 0) && (lVar1 = *(long *)(param_1[-3] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)param_1 + -0x19) < '\0') {
    __ZdlPv(param_1[-6]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar4;
  *plVar4 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0xc] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0xf);
  param_1[-0x13] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x12);
  return puVar2;
}



/* Entry: 10ac76acc; end: 10ac76aeb;  */

void FUN_10ac76acc(long param_1)

{
  FUN_10ac6e4cc(param_1 + -0xa8,&PTR_PTR_110c67ef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac76aec; end: 10ac76afb;  */

undefined8 * FUN_10ac76aec(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = param_1 + -0x51;
  *puVar2 = &PTR_FUN_110c64578;
  param_1[-0x4f] = &PTR_FUN_110c61720;
  param_1[-0x4c] = &PTR_DAT_110c61750;
  param_1[0x75] = &PTR_DAT_110c64708;
  param_1[-0x3c] = &PTR_DAT_110c617a8;
  *param_1 = &PTR_DAT_110c617c8;
  param_1[1] = &PTR_DAT_110c61810;
  param_1[0x4b] = &PTR_DAT_110c61838;
  FUN_10a7c9c00(*(long *)(param_1[-0x3f] + 3000) + 0x78,&stack0xffffffffffffffc8);
  func_0x00010a05a86c(param_1 + 0x72);
  func_0x00010ac51d18(param_1 + 0x70);
  FUN_10a05b1b0(param_1 + 0x6e);
  func_0x00010a042b54(param_1 + 0x6c);
  if (param_1[0x68] != 0) {
    param_1[0x69] = param_1[0x68];
    __ZdlPv();
  }
  func_0x00010a042b54(param_1 + 100);
  func_0x00010a042b54(param_1 + 0x62);
  FUN_10a05b1b0(param_1 + 0x60);
  func_0x00010a0523dc(param_1 + 0x5d);
  FUN_10ac827e8(param_1 + 0x5b);
  FUN_10a37b878(param_1 + 0x59);
  FUN_10a05b1b0(param_1 + 0x57);
  if (*(char *)((long)param_1 + 0x2b7) < '\0') {
    __ZdlPv(param_1[0x54]);
  }
  param_1[0x4b] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x4e] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x4e] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x4c);
  FUN_10ac3b3c8(param_1 + 1);
  *puVar2 = &PTR_FUN_110c64758;
  param_1[-0x4f] = &PTR_FUN_110bb3968;
  param_1[-0x4c] = &PTR_DAT_110bb3998;
  param_1[0x75] = &PTR_DAT_110c648b8;
  param_1[-0x3c] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -4);
  func_0x00010a042c64(param_1 + -9);
  func_0x00010a0523dc(param_1 + -0xc);
  if (*(char *)(param_1 + -0x15) == '\x01') {
    func_0x00010a042d30(param_1 + -0x17);
  }
  param_1[-0x3c] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x3c);
  *puVar2 = &PTR_DAT_110c64908;
  param_1[-0x4f] = &PTR_FUN_110b9f848;
  param_1[-0x4c] = &PTR_DAT_110b9f878;
  param_1[0x75] = &PTR_DAT_110c649d8;
  FUN_10a042dcc(param_1 + -0x3e);
  *puVar2 = &PTR_DAT_110c60a00;
  param_1[-0x4f] = &PTR_DAT_110c60a88;
  param_1[-0x4c] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x46);
  puVar6 = (undefined8 *)param_1[-0x45];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0x47;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x4e);
  if ((param_1[-0x3f] != 0) && (lVar1 = *(long *)(param_1[-0x3f] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)param_1 + -0x1f9) < '\0') {
    __ZdlPv(param_1[-0x42]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar4;
  *plVar4 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x4c] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x4b);
  param_1[-0x4f] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x4e);
  return puVar2;
}



/* Entry: 10ac76afc; end: 10ac76b1b;  */

void FUN_10ac76afc(long param_1)

{
  FUN_10ac6e4cc(param_1 + -0x288,&PTR_PTR_110c67ef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac76b1c; end: 10ac76b2b;  */

undefined8 * FUN_10ac76b1c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = param_1 + -0x52;
  *puVar2 = &PTR_FUN_110c64578;
  param_1[-0x50] = &PTR_FUN_110c61720;
  param_1[-0x4d] = &PTR_DAT_110c61750;
  param_1[0x74] = &PTR_DAT_110c64708;
  param_1[-0x3d] = &PTR_DAT_110c617a8;
  param_1[-1] = &PTR_DAT_110c617c8;
  *param_1 = &PTR_DAT_110c61810;
  param_1[0x4a] = &PTR_DAT_110c61838;
  FUN_10a7c9c00(*(long *)(param_1[-0x40] + 3000) + 0x78,&stack0xffffffffffffffc8);
  func_0x00010a05a86c(param_1 + 0x71);
  func_0x00010ac51d18(param_1 + 0x6f);
  FUN_10a05b1b0(param_1 + 0x6d);
  func_0x00010a042b54(param_1 + 0x6b);
  if (param_1[0x67] != 0) {
    param_1[0x68] = param_1[0x67];
    __ZdlPv();
  }
  func_0x00010a042b54(param_1 + 99);
  func_0x00010a042b54(param_1 + 0x61);
  FUN_10a05b1b0(param_1 + 0x5f);
  func_0x00010a0523dc(param_1 + 0x5c);
  FUN_10ac827e8(param_1 + 0x5a);
  FUN_10a37b878(param_1 + 0x58);
  FUN_10a05b1b0(param_1 + 0x56);
  if (*(char *)((long)param_1 + 0x2af) < '\0') {
    __ZdlPv(param_1[0x53]);
  }
  param_1[0x4a] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x4d] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x4d] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x4b);
  FUN_10ac3b3c8(param_1);
  *puVar2 = &PTR_FUN_110c64758;
  param_1[-0x50] = &PTR_FUN_110bb3968;
  param_1[-0x4d] = &PTR_DAT_110bb3998;
  param_1[0x74] = &PTR_DAT_110c648b8;
  param_1[-0x3d] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -5);
  func_0x00010a042c64(param_1 + -10);
  func_0x00010a0523dc(param_1 + -0xd);
  if (*(char *)(param_1 + -0x16) == '\x01') {
    func_0x00010a042d30(param_1 + -0x18);
  }
  param_1[-0x3d] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x3d);
  *puVar2 = &PTR_DAT_110c64908;
  param_1[-0x50] = &PTR_FUN_110b9f848;
  param_1[-0x4d] = &PTR_DAT_110b9f878;
  param_1[0x74] = &PTR_DAT_110c649d8;
  FUN_10a042dcc(param_1 + -0x3f);
  *puVar2 = &PTR_DAT_110c60a00;
  param_1[-0x50] = &PTR_DAT_110c60a88;
  param_1[-0x4d] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x47);
  puVar6 = (undefined8 *)param_1[-0x46];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0x48;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x4f);
  if ((param_1[-0x40] != 0) && (lVar1 = *(long *)(param_1[-0x40] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)param_1 + -0x201) < '\0') {
    __ZdlPv(param_1[-0x43]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar4;
  *plVar4 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x49] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x4d] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x4c);
  param_1[-0x50] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x4f);
  return puVar2;
}



/* Entry: 10ac76b2c; end: 10ac76b4b;  */

void FUN_10ac76b2c(long param_1)

{
  FUN_10ac6e4cc(param_1 + -0x290,&PTR_PTR_110c67ef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac76b4c; end: 10ac76b5b;  */

undefined8 * FUN_10ac76b4c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = param_1 + -0x9c;
  *puVar2 = &PTR_FUN_110c64578;
  param_1[-0x9a] = &PTR_FUN_110c61720;
  param_1[-0x97] = &PTR_DAT_110c61750;
  param_1[0x2a] = &PTR_DAT_110c64708;
  param_1[-0x87] = &PTR_DAT_110c617a8;
  param_1[-0x4b] = &PTR_DAT_110c617c8;
  param_1[-0x4a] = &PTR_DAT_110c61810;
  *param_1 = &PTR_DAT_110c61838;
  FUN_10a7c9c00(*(long *)(param_1[-0x8a] + 3000) + 0x78,&stack0xffffffffffffffc8);
  func_0x00010a05a86c(param_1 + 0x27);
  func_0x00010ac51d18(param_1 + 0x25);
  FUN_10a05b1b0(param_1 + 0x23);
  func_0x00010a042b54(param_1 + 0x21);
  if (param_1[0x1d] != 0) {
    param_1[0x1e] = param_1[0x1d];
    __ZdlPv();
  }
  func_0x00010a042b54(param_1 + 0x19);
  func_0x00010a042b54(param_1 + 0x17);
  FUN_10a05b1b0(param_1 + 0x15);
  func_0x00010a0523dc(param_1 + 0x12);
  FUN_10ac827e8(param_1 + 0x10);
  FUN_10a37b878(param_1 + 0xe);
  FUN_10a05b1b0(param_1 + 0xc);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  *param_1 = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  FUN_10ac3b3c8(param_1 + -0x4a);
  *puVar2 = &PTR_FUN_110c64758;
  param_1[-0x9a] = &PTR_FUN_110bb3968;
  param_1[-0x97] = &PTR_DAT_110bb3998;
  param_1[0x2a] = &PTR_DAT_110c648b8;
  param_1[-0x87] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -0x4f);
  func_0x00010a042c64(param_1 + -0x54);
  func_0x00010a0523dc(param_1 + -0x57);
  if (*(char *)(param_1 + -0x60) == '\x01') {
    func_0x00010a042d30(param_1 + -0x62);
  }
  param_1[-0x87] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x87);
  *puVar2 = &PTR_DAT_110c64908;
  param_1[-0x9a] = &PTR_FUN_110b9f848;
  param_1[-0x97] = &PTR_DAT_110b9f878;
  param_1[0x2a] = &PTR_DAT_110c649d8;
  FUN_10a042dcc(param_1 + -0x89);
  *puVar2 = &PTR_DAT_110c60a00;
  param_1[-0x9a] = &PTR_DAT_110c60a88;
  param_1[-0x97] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x91);
  puVar6 = (undefined8 *)param_1[-0x90];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0x92;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x99);
  if ((param_1[-0x8a] != 0) && (lVar1 = *(long *)(param_1[-0x8a] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)param_1 + -0x451) < '\0') {
    __ZdlPv(param_1[-0x8d]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar4;
  *plVar4 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x93] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x97] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x96);
  param_1[-0x9a] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x99);
  return puVar2;
}



/* Entry: 10ac76b5c; end: 10ac76b8f;  */

void FUN_10ac76b5c(long param_1)

{
  FUN_10ac6e4cc(param_1 + -0x4e0,&PTR_PTR_110c67ef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac76b90; end: 10ac76b97;  */

undefined8 * FUN_10ac76b90(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = param_1 + -2;
  *puVar2 = &PTR_FUN_110c60b18;
  *param_1 = &PTR_FUN_110c60be8;
  param_1[3] = &PTR_FUN_110c60c18;
  param_1[0x3a] = &PTR_FUN_110c60ca0;
  FUN_10a0cfe2c(param_1 + 0x38);
  if (param_1[0x35] != 0) {
    param_1[0x36] = param_1[0x35];
    __ZdlPv();
  }
  if (param_1[0x32] != 0) {
    param_1[0x33] = param_1[0x32];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 399) < '\0') {
    __ZdlPv(param_1[0x2f]);
  }
  if (*(char *)((long)param_1 + 0x177) < '\0') {
    __ZdlPv(param_1[0x2c]);
  }
  if (param_1[0x29] != 0) {
    param_1[0x2a] = param_1[0x29];
    __ZdlPv();
  }
  if (param_1[0x26] != 0) {
    param_1[0x27] = param_1[0x26];
    __ZdlPv();
  }
  if (param_1[0x23] != 0) {
    param_1[0x24] = param_1[0x23];
    __ZdlPv();
  }
  if (param_1[0x20] != 0) {
    param_1[0x21] = param_1[0x20];
    __ZdlPv();
  }
  FUN_10a3a75a8(param_1 + 0x1b);
  *puVar2 = &PTR_FUN_110c64a28;
  *param_1 = &PTR_FUN_110c68030;
  param_1[3] = &PTR_DAT_110c68060;
  param_1[0x3a] = &PTR_FUN_110c64b28;
  FUN_10a0cfe2c(param_1 + 0x19);
  func_0x00010a1980a8(param_1 + 0x16);
  *puVar2 = &PTR_FUN_110c64cc0;
  *param_1 = &PTR_FUN_110bb3b30;
  param_1[3] = &PTR_DAT_110bb3b60;
  param_1[0x3a] = &PTR_DAT_110c64d90;
  func_0x00010a1f9d14(param_1 + 0x11);
  *puVar2 = &PTR_DAT_110c60a00;
  *param_1 = &PTR_DAT_110c60a88;
  param_1[3] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 9);
  puVar6 = (undefined8 *)param_1[10];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + 8;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 1);
  if ((param_1[0x10] != 0) && (lVar1 = *(long *)(param_1[0x10] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar4;
  *plVar4 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[7] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[3] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 4);
  *param_1 = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 1);
  return puVar2;
}



/* Entry: 10ac76b98; end: 10ac76baf;  */

void FUN_10ac76b98(long param_1)

{
  FUN_10ac644bc(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac76bb0; end: 10ac76bb7;  */

undefined8 * FUN_10ac76bb0(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = param_1 + -5;
  *puVar2 = &PTR_FUN_110c60b18;
  param_1[-3] = &PTR_FUN_110c60be8;
  *param_1 = &PTR_FUN_110c60c18;
  param_1[0x37] = &PTR_FUN_110c60ca0;
  FUN_10a0cfe2c(param_1 + 0x35);
  if (param_1[0x32] != 0) {
    param_1[0x33] = param_1[0x32];
    __ZdlPv();
  }
  if (param_1[0x2f] != 0) {
    param_1[0x30] = param_1[0x2f];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x177) < '\0') {
    __ZdlPv(param_1[0x2c]);
  }
  if (*(char *)((long)param_1 + 0x15f) < '\0') {
    __ZdlPv(param_1[0x29]);
  }
  if (param_1[0x26] != 0) {
    param_1[0x27] = param_1[0x26];
    __ZdlPv();
  }
  if (param_1[0x23] != 0) {
    param_1[0x24] = param_1[0x23];
    __ZdlPv();
  }
  if (param_1[0x20] != 0) {
    param_1[0x21] = param_1[0x20];
    __ZdlPv();
  }
  if (param_1[0x1d] != 0) {
    param_1[0x1e] = param_1[0x1d];
    __ZdlPv();
  }
  FUN_10a3a75a8(param_1 + 0x18);
  *puVar2 = &PTR_FUN_110c64a28;
  param_1[-3] = &PTR_FUN_110c68030;
  *param_1 = &PTR_DAT_110c68060;
  param_1[0x37] = &PTR_FUN_110c64b28;
  FUN_10a0cfe2c(param_1 + 0x16);
  func_0x00010a1980a8(param_1 + 0x13);
  *puVar2 = &PTR_FUN_110c64cc0;
  param_1[-3] = &PTR_FUN_110bb3b30;
  *param_1 = &PTR_DAT_110bb3b60;
  param_1[0x37] = &PTR_DAT_110c64d90;
  func_0x00010a1f9d14(param_1 + 0xe);
  *puVar2 = &PTR_DAT_110c60a00;
  param_1[-3] = &PTR_DAT_110c60a88;
  *param_1 = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 6);
  puVar6 = (undefined8 *)param_1[7];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + 5;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -2);
  if ((param_1[0xd] != 0) && (lVar1 = *(long *)(param_1[0xd] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar4;
  *plVar4 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar2;
}



/* Entry: 10ac76bb8; end: 10ac76bcf;  */

void FUN_10ac76bb8(long param_1)

{
  FUN_10ac644bc(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac76bd0; end: 10ac76bdf;  */

undefined8 * FUN_10ac76bd0(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110c60b18;
  puVar1[2] = &PTR_FUN_110c60be8;
  puVar1[5] = &PTR_FUN_110c60c18;
  puVar1[0x3c] = &PTR_FUN_110c60ca0;
  FUN_10a0cfe2c(puVar1 + 0x3a);
  if (puVar1[0x37] != 0) {
    puVar1[0x38] = puVar1[0x37];
    __ZdlPv();
  }
  if (puVar1[0x34] != 0) {
    puVar1[0x35] = puVar1[0x34];
    __ZdlPv();
  }
  if (*(char *)((long)puVar1 + 0x19f) < '\0') {
    __ZdlPv(puVar1[0x31]);
  }
  if (*(char *)((long)puVar1 + 0x187) < '\0') {
    __ZdlPv(puVar1[0x2e]);
  }
  if (puVar1[0x2b] != 0) {
    puVar1[0x2c] = puVar1[0x2b];
    __ZdlPv();
  }
  if (puVar1[0x28] != 0) {
    puVar1[0x29] = puVar1[0x28];
    __ZdlPv();
  }
  if (puVar1[0x25] != 0) {
    puVar1[0x26] = puVar1[0x25];
    __ZdlPv();
  }
  if (puVar1[0x22] != 0) {
    puVar1[0x23] = puVar1[0x22];
    __ZdlPv();
  }
  FUN_10a3a75a8(puVar1 + 0x1d);
  *puVar1 = &PTR_FUN_110c64a28;
  puVar1[2] = &PTR_FUN_110c68030;
  puVar1[5] = &PTR_DAT_110c68060;
  puVar1[0x3c] = &PTR_FUN_110c64b28;
  FUN_10a0cfe2c(puVar1 + 0x1b);
  func_0x00010a1980a8(puVar1 + 0x18);
  *puVar1 = &PTR_FUN_110c64cc0;
  puVar1[2] = &PTR_FUN_110bb3b30;
  puVar1[5] = &PTR_DAT_110bb3b60;
  puVar1[0x3c] = &PTR_DAT_110c64d90;
  func_0x00010a1f9d14(puVar1 + 0x13);
  *puVar1 = &PTR_DAT_110c60a00;
  puVar1[2] = &PTR_DAT_110c60a88;
  puVar1[5] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(puVar1 + 0xb);
  puVar6 = (undefined8 *)puVar1[0xc];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = puVar1 + 10;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(puVar1 + 3);
  if ((puVar1[0x12] != 0) && (lVar2 = *(long *)(puVar1[0x12] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)puVar1 + 0x8f) < '\0') {
    __ZdlPv(puVar1[0xf]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (puVar1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 6);
  puVar1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(puVar1 + 3);
  return puVar1;
}



/* Entry: 10ac76be0; end: 10ac76c0f;  */

void FUN_10ac76be0(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10ac644bc((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac76c10; end: 10ac76c13;  */

undefined8 * FUN_10ac76c10(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110c60e50;
  param_1[2] = &PTR_FUN_110c60f30;
  param_1[5] = &PTR_FUN_110c60f60;
  param_1[0x29] = &PTR_FUN_110c61038;
  param_1[0x1d] = &PTR_FUN_110c60fc0;
  if (param_1[0x26] != 0) {
    param_1[0x27] = param_1[0x26];
    __ZdlPv();
  }
  FUN_10a0e3194(param_1 + 0x22);
  param_1[0x1d] = &PTR_DAT_110c651b0;
  param_1[0x29] = &PTR_FUN_110c65228;
  func_0x00010a004e5c(param_1 + 0x20);
  func_0x00010a004e04(param_1 + 0x1e);
  *param_1 = &PTR_FUN_110c64df8;
  param_1[2] = &PTR_FUN_110c68030;
  param_1[5] = &PTR_DAT_110c68060;
  param_1[0x29] = &PTR_FUN_110c64ef8;
  FUN_10a0cfe2c(param_1 + 0x1b);
  func_0x00010a1980a8(param_1 + 0x18);
  *param_1 = &PTR_FUN_110c65090;
  param_1[2] = &PTR_FUN_110bb3b30;
  param_1[5] = &PTR_DAT_110bb3b60;
  param_1[0x29] = &PTR_DAT_110c65160;
  func_0x00010a1f9d14(param_1 + 0x13);
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



/* Entry: 10ac76c14; end: 10ac76c27;  */

void FUN_10ac76c14(void)

{
  func_0x00010ac7a8e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac76c28; end: 10ac76c2f;  */

undefined8 * FUN_10ac76c28(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = param_1 + -2;
  *puVar2 = &PTR_FUN_110c60e50;
  *param_1 = &PTR_FUN_110c60f30;
  param_1[3] = &PTR_FUN_110c60f60;
  param_1[0x27] = &PTR_FUN_110c61038;
  param_1[0x1b] = &PTR_FUN_110c60fc0;
  if (param_1[0x24] != 0) {
    param_1[0x25] = param_1[0x24];
    __ZdlPv();
  }
  FUN_10a0e3194(param_1 + 0x20);
  param_1[0x1b] = &PTR_DAT_110c651b0;
  param_1[0x27] = &PTR_FUN_110c65228;
  func_0x00010a004e5c(param_1 + 0x1e);
  func_0x00010a004e04(param_1 + 0x1c);
  *puVar2 = &PTR_FUN_110c64df8;
  *param_1 = &PTR_FUN_110c68030;
  param_1[3] = &PTR_DAT_110c68060;
  param_1[0x27] = &PTR_FUN_110c64ef8;
  FUN_10a0cfe2c(param_1 + 0x19);
  func_0x00010a1980a8(param_1 + 0x16);
  *puVar2 = &PTR_FUN_110c65090;
  *param_1 = &PTR_FUN_110bb3b30;
  param_1[3] = &PTR_DAT_110bb3b60;
  param_1[0x27] = &PTR_DAT_110c65160;
  func_0x00010a1f9d14(param_1 + 0x11);
  *puVar2 = &PTR_DAT_110c60a00;
  *param_1 = &PTR_DAT_110c60a88;
  param_1[3] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 9);
  puVar6 = (undefined8 *)param_1[10];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + 8;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 1);
  if ((param_1[0x10] != 0) && (lVar1 = *(long *)(param_1[0x10] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar4;
  *plVar4 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[7] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[3] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 4);
  *param_1 = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 1);
  return puVar2;
}



/* Entry: 10ac76c30; end: 10ac76c47;  */

void FUN_10ac76c30(long param_1)

{
  func_0x00010ac7a8e0(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac76c48; end: 10ac76c4f;  */

undefined8 * FUN_10ac76c48(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = param_1 + -5;
  *puVar2 = &PTR_FUN_110c60e50;
  param_1[-3] = &PTR_FUN_110c60f30;
  *param_1 = &PTR_FUN_110c60f60;
  param_1[0x24] = &PTR_FUN_110c61038;
  param_1[0x18] = &PTR_FUN_110c60fc0;
  if (param_1[0x21] != 0) {
    param_1[0x22] = param_1[0x21];
    __ZdlPv();
  }
  FUN_10a0e3194(param_1 + 0x1d);
  param_1[0x18] = &PTR_DAT_110c651b0;
  param_1[0x24] = &PTR_FUN_110c65228;
  func_0x00010a004e5c(param_1 + 0x1b);
  func_0x00010a004e04(param_1 + 0x19);
  *puVar2 = &PTR_FUN_110c64df8;
  param_1[-3] = &PTR_FUN_110c68030;
  *param_1 = &PTR_DAT_110c68060;
  param_1[0x24] = &PTR_FUN_110c64ef8;
  FUN_10a0cfe2c(param_1 + 0x16);
  func_0x00010a1980a8(param_1 + 0x13);
  *puVar2 = &PTR_FUN_110c65090;
  param_1[-3] = &PTR_FUN_110bb3b30;
  *param_1 = &PTR_DAT_110bb3b60;
  param_1[0x24] = &PTR_DAT_110c65160;
  func_0x00010a1f9d14(param_1 + 0xe);
  *puVar2 = &PTR_DAT_110c60a00;
  param_1[-3] = &PTR_DAT_110c60a88;
  *param_1 = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 6);
  puVar6 = (undefined8 *)param_1[7];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + 5;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -2);
  if ((param_1[0xd] != 0) && (lVar1 = *(long *)(param_1[0xd] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar4;
  *plVar4 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar2;
}



/* Entry: 10ac76c50; end: 10ac76c67;  */

void FUN_10ac76c50(long param_1)

{
  func_0x00010ac7a8e0(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac76c68; end: 10ac76c6f;  */

undefined8 * FUN_10ac76c68(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = param_1 + -0x1d;
  *puVar2 = &PTR_FUN_110c60e50;
  param_1[-0x1b] = &PTR_FUN_110c60f30;
  param_1[-0x18] = &PTR_FUN_110c60f60;
  param_1[0xc] = &PTR_FUN_110c61038;
  *param_1 = &PTR_FUN_110c60fc0;
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  FUN_10a0e3194(param_1 + 5);
  *param_1 = &PTR_DAT_110c651b0;
  param_1[0xc] = &PTR_FUN_110c65228;
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
  *puVar2 = &PTR_FUN_110c64df8;
  param_1[-0x1b] = &PTR_FUN_110c68030;
  param_1[-0x18] = &PTR_DAT_110c68060;
  param_1[0xc] = &PTR_FUN_110c64ef8;
  FUN_10a0cfe2c(param_1 + -2);
  func_0x00010a1980a8(param_1 + -5);
  *puVar2 = &PTR_FUN_110c65090;
  param_1[-0x1b] = &PTR_FUN_110bb3b30;
  param_1[-0x18] = &PTR_DAT_110bb3b60;
  param_1[0xc] = &PTR_DAT_110c65160;
  func_0x00010a1f9d14(param_1 + -10);
  *puVar2 = &PTR_DAT_110c60a00;
  param_1[-0x1b] = &PTR_DAT_110c60a88;
  param_1[-0x18] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x12);
  puVar6 = (undefined8 *)param_1[-0x11];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0x13;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x1a);
  if ((param_1[-0xb] != 0) && (lVar1 = *(long *)(param_1[-0xb] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)param_1 + -0x59) < '\0') {
    __ZdlPv(param_1[-0xe]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar4;
  *plVar4 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x18] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x17);
  param_1[-0x1b] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x1a);
  return puVar2;
}



/* Entry: 10ac76c70; end: 10ac76c87;  */

void FUN_10ac76c70(long param_1)

{
  func_0x00010ac7a8e0(param_1 + -0xe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac76c88; end: 10ac76c97;  */

undefined8 * FUN_10ac76c88(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110c60e50;
  puVar1[2] = &PTR_FUN_110c60f30;
  puVar1[5] = &PTR_FUN_110c60f60;
  puVar1[0x29] = &PTR_FUN_110c61038;
  puVar1[0x1d] = &PTR_FUN_110c60fc0;
  if (puVar1[0x26] != 0) {
    puVar1[0x27] = puVar1[0x26];
    __ZdlPv();
  }
  FUN_10a0e3194(puVar1 + 0x22);
  puVar1[0x1d] = &PTR_DAT_110c651b0;
  puVar1[0x29] = &PTR_FUN_110c65228;
  func_0x00010a004e5c(puVar1 + 0x20);
  func_0x00010a004e04(puVar1 + 0x1e);
  *puVar1 = &PTR_FUN_110c64df8;
  puVar1[2] = &PTR_FUN_110c68030;
  puVar1[5] = &PTR_DAT_110c68060;
  puVar1[0x29] = &PTR_FUN_110c64ef8;
  FUN_10a0cfe2c(puVar1 + 0x1b);
  func_0x00010a1980a8(puVar1 + 0x18);
  *puVar1 = &PTR_FUN_110c65090;
  puVar1[2] = &PTR_FUN_110bb3b30;
  puVar1[5] = &PTR_DAT_110bb3b60;
  puVar1[0x29] = &PTR_DAT_110c65160;
  func_0x00010a1f9d14(puVar1 + 0x13);
  *puVar1 = &PTR_DAT_110c60a00;
  puVar1[2] = &PTR_DAT_110c60a88;
  puVar1[5] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(puVar1 + 0xb);
  puVar6 = (undefined8 *)puVar1[0xc];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = puVar1 + 10;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(puVar1 + 3);
  if ((puVar1[0x12] != 0) && (lVar2 = *(long *)(puVar1[0x12] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)puVar1 + 0x8f) < '\0') {
    __ZdlPv(puVar1[0xf]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (puVar1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 6);
  puVar1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(puVar1 + 3);
  return puVar1;
}



/* Entry: 10ac76c98; end: 10ac76cc7;  */

void FUN_10ac76c98(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010ac7a8e0((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac76cc8; end: 10ac76ccf;  */

void FUN_10ac76cc8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac76ccc);
  (*pcVar1)();
}



/* Entry: 10ac76cd0; end: 10ac76e0f;  */

long * FUN_10ac76cd0(long *param_1)

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



/* Entry: 10ac76e10; end: 10ac76e2f;  */

undefined4 FUN_10ac76e10(long param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}


