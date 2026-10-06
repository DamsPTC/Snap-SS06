/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a9036d0; end: 10a9036d7;  */

void FUN_10a9036d0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  FUN_10a42212c();
  if (param_2[9] != 0) {
    lVar6 = param_2[9] << 3;
    do {
      param_2 = param_2 + 1;
      if ((undefined **)*param_2 == &PTR_DAT_110bc32d8) {
        plVar7 = *(long **)(param_1 + 0x4f0);
        if (plVar7 == (long *)(param_1 + 0x4f8)) {
          return;
        }
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x130);
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x138);
        do {
          plVar5 = (long *)plVar7[8];
          if ((plVar5 != (long *)0x0) &&
             (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0)) {
            if (plVar7[7] != 0) {
              FUN_10a3e41f0(plVar7[7] + 0x130,uVar1,uVar2);
            }
            plVar8 = plVar5 + 1;
            do {
              lVar6 = *plVar8;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar4) {
                *plVar8 = lVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar6 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            }
          }
          plVar5 = (long *)plVar7[1];
          plVar8 = plVar7;
          if ((long *)plVar7[1] == (long *)0x0) {
            do {
              plVar7 = (long *)plVar8[2];
              bVar4 = (long *)*plVar7 != plVar8;
              plVar8 = plVar7;
            } while (bVar4);
          }
          else {
            do {
              plVar7 = plVar5;
              plVar5 = (long *)*plVar7;
            } while ((long *)*plVar7 != (long *)0x0);
          }
        } while (plVar7 != (long *)(param_1 + 0x4f8));
        return;
      }
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  return;
}



/* Entry: 10a9036d8; end: 10a9037e3;  */

void FUN_10a9036d8(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  FUN_10a3c73cc(param_1,2);
  lVar5 = 0x560;
  do {
    plVar6 = *(long **)(param_1 + lVar5);
    while (plVar6 != (long *)(param_1 + lVar5) + 1) {
      plVar3 = (long *)plVar6[8];
      if ((plVar3 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar3 != (long *)0x0)) {
        lVar4 = plVar6[7];
        if ((lVar4 != 0) && (*(long *)(lVar4 + 0x188) == 0)) {
          func_0x00010a3e4590(lVar4,1);
        }
        plVar7 = plVar3 + 1;
        do {
          lVar4 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
      plVar3 = (long *)plVar6[1];
      plVar7 = plVar6;
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar7[2];
          bVar2 = (long *)*plVar6 != plVar7;
          plVar7 = plVar6;
        } while (bVar2);
      }
      else {
        do {
          plVar6 = plVar3;
          plVar3 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    }
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0x5c0);
  return;
}



/* Entry: 10a9037e4; end: 10a9037eb;  */

void FUN_10a9037e4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  FUN_10a3c73cc(param_1 + -0x68,2);
  lVar6 = 0x560;
  do {
    plVar1 = (long *)(param_1 + -0x68 + lVar6);
    plVar7 = (long *)*plVar1;
    while (plVar7 != plVar1 + 1) {
      plVar4 = (long *)plVar7[8];
      if ((plVar4 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)) {
        lVar5 = plVar7[7];
        if ((lVar5 != 0) && (*(long *)(lVar5 + 0x188) == 0)) {
          func_0x00010a3e4590(lVar5,1);
        }
        plVar8 = plVar4 + 1;
        do {
          lVar5 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      plVar4 = (long *)plVar7[1];
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
          plVar7 = plVar4;
          plVar4 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    }
    lVar6 = lVar6 + 0x18;
  } while (lVar6 != 0x5c0);
  return;
}



/* Entry: 10a9037ec; end: 10a9038f7;  */

void FUN_10a9037ec(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  FUN_10a3c73cc(param_1,2);
  lVar5 = 0x560;
  do {
    plVar6 = *(long **)(param_1 + lVar5);
    while (plVar6 != (long *)(param_1 + lVar5) + 1) {
      plVar3 = (long *)plVar6[8];
      if ((plVar3 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar3 != (long *)0x0)) {
        lVar4 = plVar6[7];
        if ((lVar4 != 0) && (*(long *)(lVar4 + 0x188) == 0)) {
          func_0x00010a3e4590(lVar4,0);
        }
        plVar7 = plVar3 + 1;
        do {
          lVar4 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
      plVar3 = (long *)plVar6[1];
      plVar7 = plVar6;
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar7[2];
          bVar2 = (long *)*plVar6 != plVar7;
          plVar7 = plVar6;
        } while (bVar2);
      }
      else {
        do {
          plVar6 = plVar3;
          plVar3 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    }
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0x5c0);
  return;
}



/* Entry: 10a9038f8; end: 10a9038ff;  */

void FUN_10a9038f8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  FUN_10a3c73cc(param_1 + -0x68,2);
  lVar6 = 0x560;
  do {
    plVar1 = (long *)(param_1 + -0x68 + lVar6);
    plVar7 = (long *)*plVar1;
    while (plVar7 != plVar1 + 1) {
      plVar4 = (long *)plVar7[8];
      if ((plVar4 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)) {
        lVar5 = plVar7[7];
        if ((lVar5 != 0) && (*(long *)(lVar5 + 0x188) == 0)) {
          func_0x00010a3e4590(lVar5,0);
        }
        plVar8 = plVar4 + 1;
        do {
          lVar5 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      plVar4 = (long *)plVar7[1];
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
          plVar7 = plVar4;
          plVar4 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    }
    lVar6 = lVar6 + 0x18;
  } while (lVar6 != 0x5c0);
  return;
}



/* Entry: 10a903900; end: 10a904937;  */

/* WARNING: Removing unreachable block (ram,0x00010a903a50) */
/* WARNING: Removing unreachable block (ram,0x00010a903ac8) */

void FUN_10a903900(long *****param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  long *plVar7;
  long *****ppppplVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long ****pppplVar12;
  undefined8 uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long *****ppppplVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  long *****ppppplVar24;
  long *plVar25;
  float fVar26;
  undefined4 uVar27;
  long ****pppplVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  long ****pppplStack_160;
  long ****pppplStack_158;
  long ****pppplStack_150;
  long ****pppplStack_148;
  long ****pppplStack_140;
  long ****pppplStack_138;
  long ****pppplStack_130;
  undefined4 uStack_11c;
  undefined8 *apuStack_118 [3];
  long ****pppplStack_100;
  long ****pppplStack_f8;
  char cStack_e9;
  long *plStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long ****pppplStack_c0;
  long ****pppplStack_b8;
  long ****pppplStack_b0;
  long lStack_a8;
  long *plStack_a0;
  
  if (*(long *)(param_2 + 0x4f0) != 0) {
    FUN_10a904938();
    lVar19 = *(long *)(param_2 + 0x4f0);
    fVar35 = *(float *)(lVar19 + 0x120);
    cVar3 = *(char *)(lVar19 + 0x124);
    fVar34 = *(float *)(lVar19 + 0x128);
    if (*(int *)(*(long *)(*(long *)(param_2 + 0x170) + 0xa20) + 0x18) < 0x178) {
      lStack_a8 = 0;
      plStack_a0 = (long *)0x0;
      plVar23 = *(long **)(param_2 + 0x5c8);
      if (((plVar23 != (long *)0x0) &&
          (__ZNSt3__119__shared_weak_count4lockEv(), plStack_a0 = plVar23, plVar23 != (long *)0x0))
         && (lVar19 = *(long *)(param_2 + 0x5c0), lStack_a8 = lVar19, lVar19 != 0)) {
        *(undefined1 *)(*(long *)(param_2 + 0x758) + 0x50) = *(undefined1 *)(param_2 + 0x528);
        func_0x000107c2b054(&pppplStack_160,&UNK_10f682501);
        FUN_10a39a09c(lVar19,&pppplStack_160,param_2 + 0x838);
        if ((long)pppplStack_150 < 0) {
          __ZdlPv(pppplStack_160);
        }
        *(undefined1 *)(*(long *)(param_2 + 0x768) + 0x50) = *(undefined1 *)(param_2 + 0x529);
        func_0x000107c2b054(&pppplStack_160,&UNK_10f68250e);
        FUN_10a39a09c(lVar19,&pppplStack_160,param_2 + 0x870);
        if ((long)pppplStack_150 < 0) {
          __ZdlPv(pppplStack_160);
        }
        plVar23 = *(long **)(lVar19 + 0x18);
        plVar7 = *(long **)(lVar19 + 0x20);
        if (plVar7 != (long *)0x0) {
          plVar20 = plVar7 + 1;
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar6) {
              *plVar20 = *plVar20 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plStack_e8 = plVar23;
        plStack_e0 = plVar7;
        if ((plVar23 != (long *)0x0) && ((int)plVar23[1] == 7)) {
          ppppplVar8 = (long *****)*plVar23;
          (*(code *)(*ppppplVar8)[0x13])(ppppplVar8,plVar23[2]);
          plVar20 = (long *)*plVar23;
          pppplStack_160 = (long ****)ppppplVar8;
          (**(code **)(*plVar20 + 0xb8))(&pppplStack_c0,plVar20,&UNK_10f68251c,0xc);
          (**(code **)(*plVar20 + 0x1b8))(plVar20,&pppplStack_160,&pppplStack_c0);
          if ((long *****)pppplStack_c0 != (long *****)0x0) {
            (*(code *)**pppplStack_c0)();
          }
          if ((long *****)pppplStack_160 != (long *****)0x0) {
            (*(code *)**pppplStack_160)();
          }
          if ((int)plVar20 != 0) {
            ppppplVar8 = (long *****)*plVar23;
            func_0x000109884c0c(&pppplStack_100,plVar23 + 1,ppppplVar8);
            plVar23 = (long *)*plVar23;
            (**(code **)(*plVar23 + 0xb8))(apuStack_118,plVar23,&UNK_10f68251c,0xc);
            (**(code **)(*plVar23 + 0x1a0))(&pppplStack_c0,plVar23,&pppplStack_100,apuStack_118);
            pppplStack_158 = (long ****)CONCAT44(pppplStack_158._4_4_,(int)pppplStack_c0);
            if ((int)pppplStack_c0 == 3) {
              pppplStack_150 = pppplStack_b8;
              param_1 = (long *****)pppplStack_b8;
            }
            else if ((int)pppplStack_c0 == 2) {
              pppplStack_150 = (long ****)CONCAT71(pppplStack_150._1_7_,pppplStack_b8._0_1_);
            }
            else if (3 < (int)pppplStack_c0) {
              pppplStack_150 = pppplStack_b8;
              pppplStack_b8 = (long ****)0x0;
            }
            uVar27 = SUB84(param_1,0);
            pppplStack_c0 = (long ****)((ulong)pppplStack_c0 & 0xffffffff00000000);
            pppplStack_160 = (long ****)ppppplVar8;
            if (apuStack_118[0] != (undefined8 *)0x0) {
              (**(code **)*apuStack_118[0])();
            }
            if ((long *****)pppplStack_100 != (long *****)0x0) {
              (*(code *)**pppplStack_100)();
            }
            FUN_10a36be44(&pppplStack_160);
            *(undefined4 *)(param_2 + 0x52c) = uVar27;
            if ((3 < (int)pppplStack_158) && ((long *****)pppplStack_150 != (long *****)0x0)) {
              (*(code *)**pppplStack_150)();
            }
          }
        }
        if (plVar7 != (long *)0x0) {
          plVar23 = plVar7 + 1;
          do {
            lVar22 = *plVar23;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar6) {
              *plVar23 = lVar22 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar22 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        *(float *)(*(long *)(param_2 + 0x778) + 0x50) = fVar35;
        func_0x000107c2b054(&pppplStack_160,&UNK_10f682529);
        FUN_10a39a09c(lVar19,&pppplStack_160,param_2 + 0x8a8);
        if ((long)pppplStack_150 < 0) {
          __ZdlPv(pppplStack_160);
        }
        *(char *)(*(long *)(param_2 + 0x788) + 0x50) = cVar3;
        func_0x000107c2b054(&pppplStack_160,&DAT_10f682403);
        FUN_10a39a09c(lVar19,&pppplStack_160,param_2 + 0x950);
        if ((long)pppplStack_150 < 0) {
          __ZdlPv(pppplStack_160);
        }
        *(float *)(*(long *)(param_2 + 0x798) + 0x50) = fVar34;
        func_0x000107c2b054(&pppplStack_160,&DAT_10f682415);
        FUN_10a39a09c(lVar19,&pppplStack_160,param_2 + 0x988);
        if ((long)pppplStack_150 < 0) {
          __ZdlPv(pppplStack_160);
        }
        lVar22 = *(long *)(param_2 + 0x7a8);
        uVar13 = *(undefined8 *)(param_2 + 0x530);
        *(undefined4 *)(lVar22 + 0x58) = *(undefined4 *)(param_2 + 0x538);
        *(undefined8 *)(lVar22 + 0x50) = uVar13;
        func_0x000107c2b054(&pppplStack_160,&UNK_10f6824b2);
        FUN_10a39a09c(lVar19,&pppplStack_160,param_2 + 0x8e0);
        if ((long)pppplStack_150 < 0) {
          __ZdlPv(pppplStack_160);
        }
        lVar22 = *(long *)(param_2 + 0x7b8);
        uVar13 = *(undefined8 *)(param_2 + 0x53c);
        *(undefined4 *)(lVar22 + 0x58) = *(undefined4 *)(param_2 + 0x544);
        *(undefined8 *)(lVar22 + 0x50) = uVar13;
        func_0x000107c2b054(&pppplStack_160,&UNK_10f6824c4);
        FUN_10a39a09c(lVar19,&pppplStack_160,param_2 + 0x918);
        if ((long)pppplStack_150 < 0) {
          __ZdlPv(pppplStack_160);
        }
        if (*(int *)(*(long *)(*(long *)(param_2 + 0x170) + 0xa20) + 0x18) < 0x15c) {
          plVar23 = *(long **)(*(long *)(param_2 + 0x4f0) + 0xe0);
          if ((plVar23 != *(long **)(*(long *)(param_2 + 0x4f0) + 0xe8)) && (*plVar23 != 0)) {
            func_0x000107c2b054(&pppplStack_c0,&UNK_10f68253a);
            plVar7 = (long *)(lVar19 + 0x230);
            plVar20 = plVar7;
            func_0x000107c2b05c(plVar7,&pppplStack_c0);
            plVar21 = *(long **)(lVar19 + 0x238);
            if (plVar21 != (long *)0x0) {
              uVar11 = (long)plVar21 - 1;
              if (((ulong)plVar21 & uVar11) == 0) {
                plVar25 = (long *)(uVar11 & (ulong)plVar20);
              }
              else {
                uVar14 = 0;
                if (plVar21 != (long *)0x0) {
                  uVar14 = (ulong)plVar20 / (ulong)plVar21;
                }
                plVar25 = plVar20;
                if (plVar21 <= plVar20) {
                  plVar25 = (long *)((long)plVar20 - uVar14 * (long)plVar21);
                }
              }
              plVar9 = *(long **)(*plVar7 + (long)plVar25 * 8);
              if (plVar9 != (long *)0x0) {
                for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
                  plVar10 = (long *)plVar9[1];
                  if (plVar20 == plVar10) {
                    plVar10 = plVar7;
                    func_0x000107c2b068(plVar7,plVar9 + 2,&pppplStack_c0);
                    if (((ulong)plVar10 & 1) != 0) {
                      plStack_e8 = (long *)0x0;
                      plStack_e0 = (long *)0x0;
                      plVar7 = (long *)plVar9[9];
                      if ((plVar7 == (long *)0x0) ||
                         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_e0 = plVar7,
                         plVar7 == (long *)0x0)) goto LAB_10a904538;
                      plStack_e8 = (long *)plVar9[8];
                      ppppplVar8 = (long *****)*plVar23;
                      if ((plStack_e8 == (long *)0x0) ||
                         ((long ****)plStack_e8[8] != ppppplVar8[8] ||
                          (long ****)plStack_e8[9] != ppppplVar8[9])) goto LAB_10a90453c;
                      goto LAB_10a904668;
                    }
                  }
                  else {
                    if (((ulong)plVar21 & uVar11) == 0) {
                      plVar10 = (long *)((ulong)plVar10 & uVar11);
                    }
                    else if (plVar21 <= plVar10) {
                      uVar14 = 0;
                      if (plVar21 != (long *)0x0) {
                        uVar14 = (ulong)plVar10 / (ulong)plVar21;
                      }
                      plVar10 = (long *)((long)plVar10 - uVar14 * (long)plVar21);
                    }
                    if (plVar10 != plVar25) break;
                  }
                }
              }
            }
            plStack_e8 = (long *)0x0;
            plStack_e0 = (long *)0x0;
LAB_10a904538:
            ppppplVar8 = (long *****)*plVar23;
LAB_10a90453c:
            pppplStack_140 = (long ****)plVar23[1];
            if ((long *****)pppplStack_140 != (long *****)0x0) {
              ppppplVar24 = (long *****)(pppplStack_140 + 1);
              do {
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppplVar24,0x10);
                if (bVar6) {
                  *ppppplVar24 = (long ****)((long)*ppppplVar24 + 1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              ppppplVar17 = (long *****)(pppplStack_140 + 2);
              do {
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppplVar17,0x10);
                if (bVar6) {
                  *ppppplVar17 = (long ****)((long)*ppppplVar17 + 1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              do {
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppplVar24,0x10);
                if (bVar6) {
                  *ppppplVar24 = (long ****)((long)*ppppplVar24 + 1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            pppplStack_150 = (long ****)0x1000000000000000;
            pppplStack_158 = (long ****)0x6873654d7265646e;
            pppplStack_160 = (long ****)0x65522e7465737341;
            pppplStack_148 = (long ****)ppppplVar8;
            pppplStack_138 = (long ****)ppppplVar8;
            pppplStack_130 = pppplStack_140;
            pppplStack_100 = (long ****)ppppplVar8;
            pppplStack_f8 = pppplStack_140;
            FUN_10a39a09c(lVar19,&pppplStack_c0,&pppplStack_160);
            pppplVar28 = pppplStack_130;
            if ((long *****)pppplStack_130 != (long *****)0x0) {
              ppppplVar8 = (long *****)(pppplStack_130 + 1);
              do {
                pppplVar12 = *ppppplVar8;
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppplVar8,0x10);
                if (bVar6) {
                  *ppppplVar8 = (long ****)((long)pppplVar12 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (pppplVar12 == (long ****)0x0) {
                (*(code *)(*pppplStack_130)[2])(pppplStack_130);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar28);
              }
            }
            if ((long *****)pppplStack_140 != (long *****)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            if ((long)pppplStack_150 < 0) {
              __ZdlPv(pppplStack_160);
            }
            pppplVar28 = pppplStack_f8;
            if ((long *****)pppplStack_f8 != (long *****)0x0) {
              ppppplVar8 = (long *****)(pppplStack_f8 + 1);
              do {
                pppplVar12 = *ppppplVar8;
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppplVar8,0x10);
                if (bVar6) {
                  *ppppplVar8 = (long ****)((long)pppplVar12 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (pppplVar12 == (long ****)0x0) {
                (*(code *)(*pppplStack_f8)[2])(pppplStack_f8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar28);
              }
            }
            if (plStack_e0 != (long *)0x0) {
LAB_10a904668:
              plVar7 = plStack_e0;
              plVar23 = plStack_e0 + 1;
              do {
                lVar19 = *plVar23;
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                if (bVar6) {
                  *plVar23 = lVar19 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar19 == 0) {
                (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
              }
            }
            if ((long)pppplStack_b0 < 0) {
              __ZdlPv(pppplStack_c0);
            }
          }
        }
        else {
          if (*(long *)(param_2 + 0x660) != 0) {
            pppplStack_c0 = (long ****)0x0;
            pppplStack_b8 = (long ****)0x0;
            pppplStack_b0 = (long ****)0x0;
            lVar19 = *(long *)(param_2 + 0x4f0);
            FUN_10a904f5c(&pppplStack_c0,*(long *)(lVar19 + 0xe8) - *(long *)(lVar19 + 0xe0) >> 4);
            puVar18 = *(undefined8 **)(lVar19 + 0xe0);
            puVar2 = *(undefined8 **)(lVar19 + 0xe8);
            if (puVar18 != puVar2) {
              do {
                if (pppplStack_b8 < pppplStack_b0) {
                  lVar19 = puVar18[1];
                  pppplVar28 = (long ****)*puVar18;
                  pppplStack_b8[1] = (long ***)puVar18[1];
                  *pppplStack_b8 = (long ***)pppplVar28;
                  if (lVar19 != 0) {
                    plVar23 = (long *)(lVar19 + 0x10);
                    do {
                      cVar3 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                      if (bVar6) {
                        *plVar23 = *plVar23 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                  ppppplVar24 = (long *****)(pppplStack_b8 + 2);
                }
                else {
                  lVar19 = (long)pppplStack_b8 - (long)pppplStack_c0;
                  uVar11 = (lVar19 >> 4) + 1;
                  if (uVar11 >> 0x3c != 0) {
                    FUN_10a34d61c();
                    goto LAB_10a9047e4;
                  }
                  uVar14 = (long)pppplStack_b0 - (long)pppplStack_c0 >> 3;
                  if (uVar14 <= uVar11) {
                    uVar14 = uVar11;
                  }
                  if (0x7fffffffffffffef < (ulong)((long)pppplStack_b0 - (long)pppplStack_c0)) {
                    uVar14 = 0xfffffffffffffff;
                  }
                  ppppplVar8 = &pppplStack_c0;
                  pppplStack_140 = (long ****)&pppplStack_c0;
                  FUN_10a34d630();
                  puVar1 = (undefined8 *)((long)ppppplVar8 + lVar19);
                  lVar19 = puVar18[1];
                  uVar13 = *puVar18;
                  puVar1[1] = puVar18[1];
                  *puVar1 = uVar13;
                  if (lVar19 != 0) {
                    plVar23 = (long *)(lVar19 + 0x10);
                    do {
                      cVar3 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                      if (bVar6) {
                        *plVar23 = *plVar23 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                  ppppplVar24 = (long *****)(puVar1 + 2);
                  ppppplVar17 = (long *****)
                                ((long)puVar1 - ((long)pppplStack_b8 - (long)pppplStack_c0));
                  _memcpy(ppppplVar17);
                  pppplStack_150 = pppplStack_c0;
                  pppplStack_148 = pppplStack_b0;
                  pppplStack_160 = pppplStack_c0;
                  pppplStack_158 = pppplStack_c0;
                  pppplStack_c0 = (long ****)ppppplVar17;
                  pppplStack_b8 = (long ****)ppppplVar24;
                  pppplStack_b0 = (long ****)(ppppplVar8 + uVar14 * 2);
                  FUN_10a35a1bc(&pppplStack_160);
                }
                puVar18 = puVar18 + 2;
                pppplStack_b8 = (long ****)ppppplVar24;
              } while (puVar18 != puVar2);
            }
            if ((long *****)(*(long *)(param_2 + 0x660) + 0x50) != &pppplStack_c0) {
              FUN_10a34d2ec();
            }
            pppplStack_160 = (long ****)&pppplStack_c0;
            FUN_10a34c804(&pppplStack_160);
          }
          FUN_10a8fc8e8(&pppplStack_160,*(undefined8 *)(param_2 + 0x4f0));
          if ((long *****)pppplStack_160 != &pppplStack_158) {
            ppppplVar8 = (long *****)pppplStack_160;
            do {
              lVar22 = *(long *)(param_2 + 0x4f0);
              lVar19 = lVar22 + 0xf8;
              FUN_10a9176b0(lVar19,ppppplVar8 + 4);
              if (lVar22 + 0x100 != lVar19) {
                lVar22 = *(long *)(lVar19 + 0x38);
                plStack_c8 = *(long **)(lVar19 + 0x40);
                if (plStack_c8 != (long *)0x0) {
                  plVar23 = plStack_c8 + 1;
                  do {
                    cVar3 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                    if (bVar6) {
                      *plVar23 = *plVar23 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                lStack_d0 = lVar22;
                if (lVar22 != 0) {
                  pppplStack_c0 = (long ****)0x0;
                  pppplStack_b8 = (long ****)0x0;
                  pppplStack_b0 = (long ****)0x0;
                  plStack_e8 = (long *)0x0;
                  plStack_e0 = (long *)0x0;
                  uStack_d8 = 0;
                  func_0x000107c27e9c(&pppplStack_c0,
                                      *(long *)(lVar22 + 0x50) - *(long *)(lVar22 + 0x48) >> 4);
                  func_0x000104becb10(&plStack_e8,
                                      *(long *)(lVar22 + 0x50) - *(long *)(lVar22 + 0x48) >> 4);
                  if (*(long *)(lVar22 + 0x50) != *(long *)(lVar22 + 0x48)) {
                    uVar11 = 0;
                    do {
                      FUN_10a942378(&pppplStack_100,lStack_d0,uVar11);
                      FUN_10a904d90(apuStack_118,param_2,ppppplVar8 + 4,&pppplStack_100);
                      uStack_11c = SUB84(apuStack_118[1],0);
                      FUN_109febd04(&pppplStack_c0,&uStack_11c);
                      func_0x0001078db3d4(&plStack_e8,apuStack_118);
                      if (cStack_e9 < '\0') {
                        __ZdlPv(pppplStack_100);
                      }
                      uVar11 = uVar11 + 1;
                    } while (uVar11 < (ulong)(*(long *)(lVar22 + 0x50) - *(long *)(lVar22 + 0x48) >>
                                             4));
                  }
                  if ((*(long *)(param_2 + 0x6a8) != 0) &&
                     ((long *****)(*(long *)(param_2 + 0x6a8) + 0x50) != &pppplStack_c0)) {
                    FUN_10a0ea4a0();
                  }
                  if (*(long *)(param_2 + 0x6f0) != 0) {
                    func_0x000108b0402c(*(long *)(param_2 + 0x6f0) + 0x50,&plStack_e8);
                  }
                  if (plStack_e8 != (long *)0x0) {
                    __ZdlPv();
                  }
                  if ((long *****)pppplStack_c0 != (long *****)0x0) {
                    pppplStack_b8 = pppplStack_c0;
                    __ZdlPv();
                  }
                }
                plVar23 = plStack_c8;
                if (plStack_c8 != (long *)0x0) {
                  plVar7 = plStack_c8 + 1;
                  do {
                    lVar19 = *plVar7;
                    cVar3 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                    if (bVar6) {
                      *plVar7 = lVar19 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar19 == 0) {
                    (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
                  }
                }
              }
              ppppplVar24 = (long *****)ppppplVar8[1];
              ppppplVar17 = ppppplVar8;
              if ((long *****)ppppplVar8[1] == (long *****)0x0) {
                do {
                  ppppplVar8 = (long *****)ppppplVar17[2];
                  bVar6 = (long *****)*ppppplVar8 != ppppplVar17;
                  ppppplVar17 = ppppplVar8;
                } while (bVar6);
              }
              else {
                do {
                  ppppplVar8 = ppppplVar24;
                  ppppplVar24 = (long *****)*ppppplVar8;
                } while ((long *****)*ppppplVar8 != (long *****)0x0);
              }
            } while (ppppplVar8 != &pppplStack_158);
          }
          func_0x000107c27bf0(&pppplStack_160,pppplStack_158);
        }
      }
      plVar23 = plStack_a0;
      if (plStack_a0 != (long *)0x0) {
        plVar7 = plStack_a0 + 1;
        do {
          lVar19 = *plVar7;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar6) {
            *plVar7 = lVar19 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
        }
      }
    }
    else {
      plVar23 = *(long **)(param_2 + 0x548);
      if (plVar23 != (long *)(param_2 + 0x550)) {
        fVar36 = 0.01;
        do {
          plStack_e8 = (long *)0x0;
          plStack_e0 = (long *)0x0;
          plVar7 = (long *)plVar23[8];
          if ((plVar7 == (long *)0x0) ||
             (__ZNSt3__119__shared_weak_count4lockEv(), plStack_e0 = plVar7, plVar7 == (long *)0x0))
          {
            plVar7 = (long *)0x0;
          }
          else {
            plVar7 = (long *)plVar23[7];
            plStack_e8 = plVar7;
          }
          if (((*(byte *)((long)plVar23 + 0x4c) & 1) == 0) ||
             (uVar11 = (ulong)*(uint *)(plVar23 + 9), 0x1f < *(uint *)(plVar23 + 9))) {
LAB_10a9047e4:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9047e8);
            (*pcVar5)();
          }
          *(undefined1 *)((long)plVar7 + uVar11 + 0x340) = *(undefined1 *)(param_2 + 0x529);
          *(undefined1 *)((long)plVar7 + uVar11 + 0x360) = *(undefined1 *)(param_2 + 0x528);
          *(undefined4 *)(param_2 + 0x52c) = *(undefined4 *)((long)plVar7 + uVar11 * 4 + 0x278);
          if (fVar35 != 1.0) {
            *(float *)(plVar7 + 0x2a4) = fVar35;
          }
          if (cVar3 != '\0') {
            *(undefined1 *)(plVar7 + 0x2a3) = 1;
          }
          if (fVar34 != 0.0) {
            *(float *)((long)plVar7 + 0x151c) = fVar34;
          }
          fVar30 = *(float *)(param_2 + 0x53c);
          fVar29 = *(float *)(param_2 + 0x540);
          fVar26 = *(float *)(param_2 + 0x544);
          if (*(char *)((long)plVar7 + 0x14fc) == '\x01') {
            iVar15 = 0;
            fVar31 = *(float *)(param_2 + 0x534);
            fVar32 = *(float *)(param_2 + 0x538);
            while ((fVar33 = fVar31, iVar15 == 1 ||
                   (fVar33 = *(float *)(param_2 + 0x530), iVar15 != 2))) {
              bVar6 = fVar33 != 0.0;
              while (iVar15 = iVar15 + 1, bVar6) {
                if (iVar15 == 2) goto LAB_10a903aa8;
                bVar6 = true;
              }
            }
            if ((fVar32 != 0.0) || ((char)plVar7[0x2a0] == '\x01')) {
LAB_10a903aa8:
              *(float *)(plVar7 + 0x29e) = *(float *)(param_2 + 0x530);
              *(float *)((long)plVar7 + 0x14f4) = fVar31;
              *(float *)(plVar7 + 0x29f) = fVar32;
              *(undefined1 *)(plVar7 + 0x2a0) = 1;
            }
          }
          iVar15 = 0;
          while ((fVar31 = fVar29, iVar15 == 1 || (fVar31 = fVar30, iVar15 != 2))) {
            bVar6 = fVar31 != 0.0;
            while (iVar15 = iVar15 + 1, bVar6) {
              if (iVar15 == 2) goto LAB_10a903b14;
              bVar6 = true;
            }
          }
          if (fVar26 != 0.0) {
LAB_10a903b14:
            fVar31 = fVar36;
            if (0.01 <= fVar30) {
              fVar31 = fVar30;
            }
            fVar30 = fVar36;
            if (0.01 <= fVar29) {
              fVar30 = fVar29;
            }
            fVar29 = fVar36;
            if (0.01 <= fVar26) {
              fVar29 = fVar26;
            }
            *(float *)((long)plVar7 + 0x1504) =
                 SQRT(fVar29 * fVar29 + fVar31 * fVar31 + fVar30 * fVar30) * 0.5;
            if (*(char *)((long)plVar7 + 0x1514) == '\x01') {
              *(float *)(plVar7 + 0x2a1) = fVar31 * 0.5;
              *(float *)((long)plVar7 + 0x150c) = fVar30 * 0.5;
              *(float *)(plVar7 + 0x2a2) = fVar29 * 0.5;
            }
          }
          lVar16 = *(long *)(param_2 + 0x4f0);
          lVar22 = lVar16 + 0xf8;
          FUN_10a9176b0(lVar22,plVar23 + 4);
          plVar7 = plStack_e8;
          if (lVar16 + 0x100 != lVar22) {
            pppplStack_100 = *(long *****)(lVar22 + 0x38);
            pppplStack_f8 = *(long *****)(lVar22 + 0x40);
            if ((long *****)pppplStack_f8 != (long *****)0x0) {
              ppppplVar8 = (long *****)(pppplStack_f8 + 1);
              do {
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppplVar8,0x10);
                if (bVar6) {
                  *ppppplVar8 = (long ****)((long)*ppppplVar8 + 1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            if (((long *****)pppplStack_100 != (long *****)0x0) &&
               (lVar22 = plStack_e8[0xc], plStack_e8[0xd] != lVar22)) {
              uVar11 = 0;
              do {
                if (uVar11 < (ulong)(*(long *)(lVar19 + 0xe8) - *(long *)(lVar19 + 0xe0) >> 4)) {
                  plVar20 = (long *)(*(long *)(lVar19 + 0xe0) + uVar11 * 0x10);
                  pppplStack_158 = (long ****)plVar20[1];
                  pppplStack_160 = (long ****)*plVar20;
                  if (plVar20[1] != 0) {
                    plVar20 = (long *)(plVar20[1] + 8);
                    do {
                      cVar4 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                      if (bVar6) {
                        *plVar20 = *plVar20 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                  }
                }
                else {
                  pppplStack_160 = (long ****)0x0;
                  pppplStack_158 = (long ****)0x0;
                }
                lVar22 = lVar22 + uVar11 * 0x90;
                FUN_10a19ad28(lVar22 + 0x38,&pppplStack_160);
                pppplVar28 = pppplStack_158;
                if ((long *****)pppplStack_158 != (long *****)0x0) {
                  ppppplVar8 = (long *****)(pppplStack_158 + 1);
                  do {
                    pppplVar12 = *ppppplVar8;
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(ppppplVar8,0x10);
                    if (bVar6) {
                      *ppppplVar8 = (long ****)((long)pppplVar12 + -1);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (pppplVar12 == (long ****)0x0) {
                    (*(code *)(*pppplStack_158)[2])(pppplStack_158);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar28);
                  }
                }
                FUN_10a942378(&pppplStack_160,pppplStack_100,uVar11);
                FUN_10a904d90(&pppplStack_c0,param_2,plVar23 + 4,&pppplStack_160);
                *(long *****)(lVar22 + 0x70) = pppplStack_b8;
                *(undefined1 *)(lVar22 + 0x78) = pppplStack_c0._0_1_;
                if ((long)pppplStack_150 < 0) {
                  __ZdlPv(pppplStack_160);
                }
                uVar11 = uVar11 + 1;
                lVar22 = plVar7[0xc];
              } while (uVar11 < (ulong)((plVar7[0xd] - lVar22 >> 4) * -0x71c71c71c71c71c7));
            }
            pppplVar28 = pppplStack_f8;
            if ((long *****)pppplStack_f8 != (long *****)0x0) {
              ppppplVar8 = (long *****)(pppplStack_f8 + 1);
              do {
                pppplVar12 = *ppppplVar8;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppplVar8,0x10);
                if (bVar6) {
                  *ppppplVar8 = (long ****)((long)pppplVar12 + -1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (pppplVar12 == (long ****)0x0) {
                (*(code *)(*pppplStack_f8)[2])(pppplStack_f8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar28);
              }
            }
          }
          plVar7 = plStack_e0;
          if (plStack_e0 != (long *)0x0) {
            plVar20 = plStack_e0 + 1;
            do {
              lVar22 = *plVar20;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar6) {
                *plVar20 = lVar22 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar22 == 0) {
              (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          plVar7 = (long *)plVar23[1];
          plVar20 = plVar23;
          if ((long *)plVar23[1] == (long *)0x0) {
            do {
              plVar23 = (long *)plVar20[2];
              bVar6 = (long *)*plVar23 != plVar20;
              plVar20 = plVar23;
            } while (bVar6);
          }
          else {
            do {
              plVar23 = plVar7;
              plVar7 = (long *)*plVar23;
            } while ((long *)*plVar23 != (long *)0x0);
          }
        } while (plVar23 != (long *)(param_2 + 0x550));
      }
    }
  }
  return;
}



/* Entry: 10a904938; end: 10a904d8f;  */

void FUN_10a904938(long param_1)

{
  char cVar1;
  undefined8 *puVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  long *plStack_d0;
  undefined8 *puStack_c8;
  undefined8 auStack_c0 [2];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  
  if (*(long *)(param_1 + 0x4f0) != 0) {
    if (*(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18) < 0x178) {
      lVar5 = 0x560;
      do {
        plVar9 = *(long **)(param_1 + lVar5);
        while (plVar9 != (long *)(param_1 + lVar5) + 1) {
          plVar4 = (long *)plVar9[8];
          if ((plVar4 != (long *)0x0) &&
             (__ZNSt3__119__shared_weak_count4lockEv(), plStack_68 = plVar4, plVar4 != (long *)0x0))
          {
            lStack_70 = plVar9[7];
            if ((lStack_70 != 0) &&
               ((*(long *)(lStack_70 + 0x188) != 0 &&
                (*(long *)(*(long *)(lStack_70 + 0x188) + 0x248) != 0)))) {
              FUN_10a908df0(&uStack_b0,param_1);
              FUN_10a8fc8e8(&puStack_c8,*(undefined8 *)(param_1 + 0x4f0));
              puVar6 = puStack_c8;
              if (puStack_c8 == auStack_c0) {
                func_0x000107c27bf0(&puStack_c8,auStack_c0[0]);
              }
              else {
                do {
                  lVar7 = *(long *)(param_1 + 0x4f0);
                  lVar8 = lVar7 + 0xf8;
                  FUN_10a9176b0(lVar8,puVar6 + 4);
                  if (lVar7 + 0x100 == lVar8) {
                    lStack_d8 = 0;
                    plStack_d0 = (long *)0x0;
                  }
                  else {
                    lStack_d8 = *(long *)(lVar8 + 0x38);
                    plStack_d0 = *(long **)(lVar8 + 0x40);
                    if (plStack_d0 != (long *)0x0) {
                      plVar4 = plStack_d0 + 1;
                      do {
                        cVar1 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                        if (bVar3) {
                          *plVar4 = *plVar4 + 1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                    }
                    if (((lStack_d8 != 0) &&
                        (plVar4 = *(long **)(param_1 + 0x5c8), plVar4 != (long *)0x0)) &&
                       (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)) {
                      lVar8 = *(long *)(param_1 + 0x5c0);
                      plVar10 = plVar4 + 1;
                      do {
                        lVar7 = *plVar10;
                        cVar1 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                        if (bVar3) {
                          *plVar10 = lVar7 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      if (lVar7 == 0) {
                        (**(code **)(*plVar4 + 0x10))(plVar4);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
                      }
                      if (lVar8 != 0) {
                        *(undefined1 *)(*(long *)(param_1 + 0x738) + 0x50) = 1;
                        func_0x000107c2b054(auStack_f0,&UNK_10f682627);
                        FUN_10a39a09c(lVar8,auStack_f0,param_1 + 0x7c8);
                        if (cStack_d9 < '\0') {
                          __ZdlPv(auStack_f0[0]);
                        }
                        lVar7 = *(long *)(param_1 + 0x748);
                        *(undefined8 *)(lVar7 + 0x58) = uStack_a8;
                        *(undefined8 *)(lVar7 + 0x50) = uStack_b0;
                        *(undefined8 *)(lVar7 + 0x68) = uStack_98;
                        *(undefined8 *)(lVar7 + 0x60) = uStack_a0;
                        *(undefined8 *)(lVar7 + 0x78) = uStack_88;
                        *(undefined8 *)(lVar7 + 0x70) = uStack_90;
                        *(undefined8 *)(lVar7 + 0x88) = uStack_78;
                        *(undefined8 *)(lVar7 + 0x80) = uStack_80;
                        func_0x000107c2b054(auStack_f0,&UNK_10f68263c);
                        FUN_10a39a09c(lVar8,auStack_f0,param_1 + 0x800);
                        if (cStack_d9 < '\0') {
                          __ZdlPv(auStack_f0[0]);
                        }
                      }
                    }
                  }
                  plVar4 = plStack_d0;
                  if (plStack_d0 != (long *)0x0) {
                    plVar10 = plStack_d0 + 1;
                    do {
                      lVar8 = *plVar10;
                      cVar1 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                      if (bVar3) {
                        *plVar10 = lVar8 + -1;
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar1 != '\0');
                    if (lVar8 == 0) {
                      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
                    }
                  }
                  plVar4 = plStack_68;
                  puVar2 = (undefined8 *)puVar6[1];
                  puVar11 = puVar6;
                  if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) {
                    do {
                      puVar6 = (undefined8 *)puVar11[2];
                      bVar3 = (undefined8 *)*puVar6 != puVar11;
                      puVar11 = puVar6;
                    } while (bVar3);
                  }
                  else {
                    do {
                      puVar6 = puVar2;
                      puVar2 = (undefined8 *)*puVar6;
                    } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
                  }
                } while (puVar6 != auStack_c0);
                func_0x000107c27bf0(&puStack_c8,auStack_c0[0]);
                if (plVar4 == (long *)0x0) goto LAB_10a904cd0;
              }
            }
            plVar10 = plVar4 + 1;
            do {
              lVar8 = *plVar10;
              cVar1 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar3) {
                *plVar10 = lVar8 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar8 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
            }
          }
LAB_10a904cd0:
          plVar4 = (long *)plVar9[1];
          plVar10 = plVar9;
          if ((long *)plVar9[1] == (long *)0x0) {
            do {
              plVar9 = (long *)plVar10[2];
              bVar3 = (long *)*plVar9 != plVar10;
              plVar10 = plVar9;
            } while (bVar3);
          }
          else {
            do {
              plVar9 = plVar4;
              plVar4 = (long *)*plVar9;
            } while ((long *)*plVar9 != (long *)0x0);
          }
        }
        lVar5 = lVar5 + 0x18;
      } while (lVar5 != 0x5c0);
    }
    else if ((*(long *)(param_1 + 0x558) != 0) &&
            (*(long *)(*(long *)(param_1 + 0x168) + 0x248) != 0)) {
      FUN_10a908df0(&uStack_b0,param_1);
      plVar9 = *(long **)(param_1 + 0x548);
      while (plVar9 != (long *)(param_1 + 0x550)) {
        plVar4 = (long *)plVar9[8];
        if ((plVar4 != (long *)0x0) &&
           (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)) {
          if ((plVar9[7] != 0) && ((plVar9[9] & 0x1ffffffe0U) == 0x100000000)) {
            lVar5 = plVar9[7] + (plVar9[9] & 0x1fU) * 0x44;
            *(undefined8 *)(lVar5 + 0x3a8) = uStack_88;
            *(undefined8 *)(lVar5 + 0x3a0) = uStack_90;
            *(undefined8 *)(lVar5 + 0x3b8) = uStack_78;
            *(undefined8 *)(lVar5 + 0x3b0) = uStack_80;
            *(undefined8 *)(lVar5 + 0x388) = uStack_a8;
            *(undefined8 *)(lVar5 + 0x380) = uStack_b0;
            *(undefined8 *)(lVar5 + 0x398) = uStack_98;
            *(undefined8 *)(lVar5 + 0x390) = uStack_a0;
            if ((*(byte *)(lVar5 + 0x3c0) & 1) == 0) {
              *(undefined1 *)(lVar5 + 0x3c0) = 1;
            }
          }
          plVar10 = plVar4 + 1;
          do {
            lVar5 = *plVar10;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = lVar5 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        plVar4 = (long *)plVar9[1];
        plVar10 = plVar9;
        if ((long *)plVar9[1] == (long *)0x0) {
          do {
            plVar9 = (long *)plVar10[2];
            bVar3 = (long *)*plVar9 != plVar10;
            plVar10 = plVar9;
          } while (bVar3);
        }
        else {
          do {
            plVar9 = plVar4;
            plVar4 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
      }
    }
  }
  return;
}



/* Entry: 10a904d90; end: 10a904f53;  */

void FUN_10a904d90(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  
  plVar5 = (long *)(param_2 + 0x500);
  plVar2 = plVar5;
  func_0x000107c2b05c(plVar5,param_3);
  plVar9 = *(long **)(param_2 + 0x508);
  if (plVar9 != (long *)0x0) {
    uVar11 = (long)plVar9 - 1;
    if (((ulong)plVar9 & uVar11) == 0) {
      plVar12 = (long *)(uVar11 & (ulong)plVar2);
    }
    else {
      plVar12 = plVar2;
      if (plVar9 <= plVar2) {
        uVar7 = 0;
        if (plVar9 != (long *)0x0) {
          uVar7 = (ulong)plVar2 / (ulong)plVar9;
        }
        plVar12 = (long *)((long)plVar2 - uVar7 * (long)plVar9);
      }
    }
    plVar3 = *(long **)(*plVar5 + (long)plVar12 * 8);
    if (plVar3 != (long *)0x0) {
      for (plVar3 = (long *)*plVar3; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar2) {
          plVar4 = plVar5;
          func_0x000107c2b068(plVar5,plVar3 + 2,param_3);
          if (((ulong)plVar4 & 1) != 0) {
            uVar11 = (ulong)(plVar3 + 5);
            func_0x000107c2b05c(uVar11,param_4);
            uVar7 = plVar3[6];
            if (uVar7 != 0) {
              uVar8 = uVar7 - 1;
              if ((uVar7 & uVar8) == 0) {
                uVar10 = uVar8 & uVar11;
              }
              else {
                uVar10 = uVar11;
                if (uVar7 <= uVar11) {
                  uVar10 = 0;
                  if (uVar7 != 0) {
                    uVar10 = uVar11 / uVar7;
                  }
                  uVar10 = uVar11 - uVar10 * uVar7;
                }
              }
              plVar5 = *(long **)(plVar3[5] + uVar10 * 8);
              if (plVar5 != (long *)0x0) {
                plVar5 = (long *)*plVar5;
                goto joined_r0x00010a904ee4;
              }
            }
            break;
          }
        }
        else {
          if (((ulong)plVar9 & uVar11) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar11);
          }
          else if (plVar9 <= plVar4) {
            uVar7 = 0;
            if (plVar9 != (long *)0x0) {
              uVar7 = (ulong)plVar4 / (ulong)plVar9;
            }
            plVar4 = (long *)((long)plVar4 - uVar7 * (long)plVar9);
          }
          if (plVar4 != plVar12) break;
        }
      }
    }
  }
LAB_10a904e68:
  *(undefined1 *)param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 1;
  return;
joined_r0x00010a904ee4:
  if (plVar5 == (long *)0x0) goto LAB_10a904e68;
  uVar6 = plVar5[1];
  if (uVar6 == uVar11) {
    uVar6 = (ulong)(plVar3 + 5);
    func_0x000107c2b068(uVar6,plVar5 + 2,param_4);
    if ((uVar6 & 1) != 0) {
      uVar13 = plVar5[5];
      param_1[1] = plVar5[6];
      *param_1 = uVar13;
      param_1[2] = plVar5[7];
      return;
    }
  }
  else {
    if ((uVar7 & uVar8) == 0) {
      uVar6 = uVar6 & uVar8;
    }
    else if (uVar7 <= uVar6) {
      uVar1 = 0;
      if (uVar7 != 0) {
        uVar1 = uVar6 / uVar7;
      }
      uVar6 = uVar6 - uVar1 * uVar7;
    }
    if (uVar6 != uVar10) goto LAB_10a904e68;
  }
  plVar5 = (long *)*plVar5;
  goto joined_r0x00010a904ee4;
}



/* Entry: 10a904f54; end: 10a904f5b;  */

/* WARNING: Removing unreachable block (ram,0x00010a903a50) */
/* WARNING: Removing unreachable block (ram,0x00010a903ac8) */

void FUN_10a904f54(long *****param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  long *plVar7;
  long *****ppppplVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long ****pppplVar12;
  undefined8 uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long *****ppppplVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  long *****ppppplVar24;
  long *plVar25;
  float fVar26;
  undefined4 uVar27;
  long ****pppplVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  long ****pppplStack_160;
  long ****pppplStack_158;
  long ****pppplStack_150;
  long ****pppplStack_148;
  long ****pppplStack_140;
  long ****pppplStack_138;
  long ****pppplStack_130;
  undefined4 uStack_11c;
  undefined8 *apuStack_118 [3];
  long ****pppplStack_100;
  long ****pppplStack_f8;
  char cStack_e9;
  long *plStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long ****pppplStack_c0;
  long ****pppplStack_b8;
  long ****pppplStack_b0;
  long lStack_a8;
  long *plStack_a0;
  
  if (*(long *)(param_2 + 0x488) != 0) {
    FUN_10a904938();
    lVar19 = *(long *)(param_2 + 0x488);
    fVar35 = *(float *)(lVar19 + 0x120);
    cVar3 = *(char *)(lVar19 + 0x124);
    fVar34 = *(float *)(lVar19 + 0x128);
    if (*(int *)(*(long *)(*(long *)(param_2 + 0x108) + 0xa20) + 0x18) < 0x178) {
      lStack_a8 = 0;
      plStack_a0 = (long *)0x0;
      plVar23 = *(long **)(param_2 + 0x560);
      if (((plVar23 != (long *)0x0) &&
          (__ZNSt3__119__shared_weak_count4lockEv(), plStack_a0 = plVar23, plVar23 != (long *)0x0))
         && (lVar19 = *(long *)(param_2 + 0x558), lStack_a8 = lVar19, lVar19 != 0)) {
        *(undefined1 *)(*(long *)(param_2 + 0x6f0) + 0x50) = *(undefined1 *)(param_2 + 0x4c0);
        func_0x000107c2b054(&pppplStack_160,&UNK_10f682501);
        FUN_10a39a09c(lVar19,&pppplStack_160,param_2 + 2000);
        if ((long)pppplStack_150 < 0) {
          __ZdlPv(pppplStack_160);
        }
        *(undefined1 *)(*(long *)(param_2 + 0x700) + 0x50) = *(undefined1 *)(param_2 + 0x4c1);
        func_0x000107c2b054(&pppplStack_160,&UNK_10f68250e);
        FUN_10a39a09c(lVar19,&pppplStack_160,param_2 + 0x808);
        if ((long)pppplStack_150 < 0) {
          __ZdlPv(pppplStack_160);
        }
        plVar23 = *(long **)(lVar19 + 0x18);
        plVar7 = *(long **)(lVar19 + 0x20);
        if (plVar7 != (long *)0x0) {
          plVar20 = plVar7 + 1;
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar6) {
              *plVar20 = *plVar20 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plStack_e8 = plVar23;
        plStack_e0 = plVar7;
        if ((plVar23 != (long *)0x0) && ((int)plVar23[1] == 7)) {
          ppppplVar8 = (long *****)*plVar23;
          (*(code *)(*ppppplVar8)[0x13])(ppppplVar8,plVar23[2]);
          plVar20 = (long *)*plVar23;
          pppplStack_160 = (long ****)ppppplVar8;
          (**(code **)(*plVar20 + 0xb8))(&pppplStack_c0,plVar20,&UNK_10f68251c,0xc);
          (**(code **)(*plVar20 + 0x1b8))(plVar20,&pppplStack_160,&pppplStack_c0);
          if ((long *****)pppplStack_c0 != (long *****)0x0) {
            (*(code *)**pppplStack_c0)();
          }
          if ((long *****)pppplStack_160 != (long *****)0x0) {
            (*(code *)**pppplStack_160)();
          }
          if ((int)plVar20 != 0) {
            ppppplVar8 = (long *****)*plVar23;
            func_0x000109884c0c(&pppplStack_100,plVar23 + 1,ppppplVar8);
            plVar23 = (long *)*plVar23;
            (**(code **)(*plVar23 + 0xb8))(apuStack_118,plVar23,&UNK_10f68251c,0xc);
            (**(code **)(*plVar23 + 0x1a0))(&pppplStack_c0,plVar23,&pppplStack_100,apuStack_118);
            pppplStack_158 = (long ****)CONCAT44(pppplStack_158._4_4_,(int)pppplStack_c0);
            if ((int)pppplStack_c0 == 3) {
              pppplStack_150 = pppplStack_b8;
              param_1 = (long *****)pppplStack_b8;
            }
            else if ((int)pppplStack_c0 == 2) {
              pppplStack_150 = (long ****)CONCAT71(pppplStack_150._1_7_,pppplStack_b8._0_1_);
            }
            else if (3 < (int)pppplStack_c0) {
              pppplStack_150 = pppplStack_b8;
              pppplStack_b8 = (long ****)0x0;
            }
            uVar27 = SUB84(param_1,0);
            pppplStack_c0 = (long ****)((ulong)pppplStack_c0 & 0xffffffff00000000);
            pppplStack_160 = (long ****)ppppplVar8;
            if (apuStack_118[0] != (undefined8 *)0x0) {
              (**(code **)*apuStack_118[0])();
            }
            if ((long *****)pppplStack_100 != (long *****)0x0) {
              (*(code *)**pppplStack_100)();
            }
            FUN_10a36be44(&pppplStack_160);
            *(undefined4 *)(param_2 + 0x4c4) = uVar27;
            if ((3 < (int)pppplStack_158) && ((long *****)pppplStack_150 != (long *****)0x0)) {
              (*(code *)**pppplStack_150)();
            }
          }
        }
        if (plVar7 != (long *)0x0) {
          plVar23 = plVar7 + 1;
          do {
            lVar22 = *plVar23;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar6) {
              *plVar23 = lVar22 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar22 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        *(float *)(*(long *)(param_2 + 0x710) + 0x50) = fVar35;
        func_0x000107c2b054(&pppplStack_160,&UNK_10f682529);
        FUN_10a39a09c(lVar19,&pppplStack_160,param_2 + 0x840);
        if ((long)pppplStack_150 < 0) {
          __ZdlPv(pppplStack_160);
        }
        *(char *)(*(long *)(param_2 + 0x720) + 0x50) = cVar3;
        func_0x000107c2b054(&pppplStack_160,&DAT_10f682403);
        FUN_10a39a09c(lVar19,&pppplStack_160,param_2 + 0x8e8);
        if ((long)pppplStack_150 < 0) {
          __ZdlPv(pppplStack_160);
        }
        *(float *)(*(long *)(param_2 + 0x730) + 0x50) = fVar34;
        func_0x000107c2b054(&pppplStack_160,&DAT_10f682415);
        FUN_10a39a09c(lVar19,&pppplStack_160,param_2 + 0x920);
        if ((long)pppplStack_150 < 0) {
          __ZdlPv(pppplStack_160);
        }
        lVar22 = *(long *)(param_2 + 0x740);
        uVar13 = *(undefined8 *)(param_2 + 0x4c8);
        *(undefined4 *)(lVar22 + 0x58) = *(undefined4 *)(param_2 + 0x4d0);
        *(undefined8 *)(lVar22 + 0x50) = uVar13;
        func_0x000107c2b054(&pppplStack_160,&UNK_10f6824b2);
        FUN_10a39a09c(lVar19,&pppplStack_160,param_2 + 0x878);
        if ((long)pppplStack_150 < 0) {
          __ZdlPv(pppplStack_160);
        }
        lVar22 = *(long *)(param_2 + 0x750);
        uVar13 = *(undefined8 *)(param_2 + 0x4d4);
        *(undefined4 *)(lVar22 + 0x58) = *(undefined4 *)(param_2 + 0x4dc);
        *(undefined8 *)(lVar22 + 0x50) = uVar13;
        func_0x000107c2b054(&pppplStack_160,&UNK_10f6824c4);
        FUN_10a39a09c(lVar19,&pppplStack_160,param_2 + 0x8b0);
        if ((long)pppplStack_150 < 0) {
          __ZdlPv(pppplStack_160);
        }
        if (*(int *)(*(long *)(*(long *)(param_2 + 0x108) + 0xa20) + 0x18) < 0x15c) {
          plVar23 = *(long **)(*(long *)(param_2 + 0x488) + 0xe0);
          if ((plVar23 != *(long **)(*(long *)(param_2 + 0x488) + 0xe8)) && (*plVar23 != 0)) {
            func_0x000107c2b054(&pppplStack_c0,&UNK_10f68253a);
            plVar7 = (long *)(lVar19 + 0x230);
            plVar20 = plVar7;
            func_0x000107c2b05c(plVar7,&pppplStack_c0);
            plVar21 = *(long **)(lVar19 + 0x238);
            if (plVar21 != (long *)0x0) {
              uVar11 = (long)plVar21 - 1;
              if (((ulong)plVar21 & uVar11) == 0) {
                plVar25 = (long *)(uVar11 & (ulong)plVar20);
              }
              else {
                uVar14 = 0;
                if (plVar21 != (long *)0x0) {
                  uVar14 = (ulong)plVar20 / (ulong)plVar21;
                }
                plVar25 = plVar20;
                if (plVar21 <= plVar20) {
                  plVar25 = (long *)((long)plVar20 - uVar14 * (long)plVar21);
                }
              }
              plVar9 = *(long **)(*plVar7 + (long)plVar25 * 8);
              if (plVar9 != (long *)0x0) {
                for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
                  plVar10 = (long *)plVar9[1];
                  if (plVar20 == plVar10) {
                    plVar10 = plVar7;
                    func_0x000107c2b068(plVar7,plVar9 + 2,&pppplStack_c0);
                    if (((ulong)plVar10 & 1) != 0) {
                      plStack_e8 = (long *)0x0;
                      plStack_e0 = (long *)0x0;
                      plVar7 = (long *)plVar9[9];
                      if ((plVar7 == (long *)0x0) ||
                         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_e0 = plVar7,
                         plVar7 == (long *)0x0)) goto LAB_10a904538;
                      plStack_e8 = (long *)plVar9[8];
                      ppppplVar8 = (long *****)*plVar23;
                      if ((plStack_e8 == (long *)0x0) ||
                         ((long ****)plStack_e8[8] != ppppplVar8[8] ||
                          (long ****)plStack_e8[9] != ppppplVar8[9])) goto LAB_10a90453c;
                      goto LAB_10a904668;
                    }
                  }
                  else {
                    if (((ulong)plVar21 & uVar11) == 0) {
                      plVar10 = (long *)((ulong)plVar10 & uVar11);
                    }
                    else if (plVar21 <= plVar10) {
                      uVar14 = 0;
                      if (plVar21 != (long *)0x0) {
                        uVar14 = (ulong)plVar10 / (ulong)plVar21;
                      }
                      plVar10 = (long *)((long)plVar10 - uVar14 * (long)plVar21);
                    }
                    if (plVar10 != plVar25) break;
                  }
                }
              }
            }
            plStack_e8 = (long *)0x0;
            plStack_e0 = (long *)0x0;
LAB_10a904538:
            ppppplVar8 = (long *****)*plVar23;
LAB_10a90453c:
            pppplStack_140 = (long ****)plVar23[1];
            if ((long *****)pppplStack_140 != (long *****)0x0) {
              ppppplVar24 = (long *****)(pppplStack_140 + 1);
              do {
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppplVar24,0x10);
                if (bVar6) {
                  *ppppplVar24 = (long ****)((long)*ppppplVar24 + 1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              ppppplVar17 = (long *****)(pppplStack_140 + 2);
              do {
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppplVar17,0x10);
                if (bVar6) {
                  *ppppplVar17 = (long ****)((long)*ppppplVar17 + 1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              do {
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppplVar24,0x10);
                if (bVar6) {
                  *ppppplVar24 = (long ****)((long)*ppppplVar24 + 1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            pppplStack_150 = (long ****)0x1000000000000000;
            pppplStack_158 = (long ****)0x6873654d7265646e;
            pppplStack_160 = (long ****)0x65522e7465737341;
            pppplStack_148 = (long ****)ppppplVar8;
            pppplStack_138 = (long ****)ppppplVar8;
            pppplStack_130 = pppplStack_140;
            pppplStack_100 = (long ****)ppppplVar8;
            pppplStack_f8 = pppplStack_140;
            FUN_10a39a09c(lVar19,&pppplStack_c0,&pppplStack_160);
            pppplVar28 = pppplStack_130;
            if ((long *****)pppplStack_130 != (long *****)0x0) {
              ppppplVar8 = (long *****)(pppplStack_130 + 1);
              do {
                pppplVar12 = *ppppplVar8;
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppplVar8,0x10);
                if (bVar6) {
                  *ppppplVar8 = (long ****)((long)pppplVar12 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (pppplVar12 == (long ****)0x0) {
                (*(code *)(*pppplStack_130)[2])(pppplStack_130);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar28);
              }
            }
            if ((long *****)pppplStack_140 != (long *****)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            if ((long)pppplStack_150 < 0) {
              __ZdlPv(pppplStack_160);
            }
            pppplVar28 = pppplStack_f8;
            if ((long *****)pppplStack_f8 != (long *****)0x0) {
              ppppplVar8 = (long *****)(pppplStack_f8 + 1);
              do {
                pppplVar12 = *ppppplVar8;
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppplVar8,0x10);
                if (bVar6) {
                  *ppppplVar8 = (long ****)((long)pppplVar12 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (pppplVar12 == (long ****)0x0) {
                (*(code *)(*pppplStack_f8)[2])(pppplStack_f8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar28);
              }
            }
            if (plStack_e0 != (long *)0x0) {
LAB_10a904668:
              plVar7 = plStack_e0;
              plVar23 = plStack_e0 + 1;
              do {
                lVar19 = *plVar23;
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                if (bVar6) {
                  *plVar23 = lVar19 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar19 == 0) {
                (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
              }
            }
            if ((long)pppplStack_b0 < 0) {
              __ZdlPv(pppplStack_c0);
            }
          }
        }
        else {
          if (*(long *)(param_2 + 0x5f8) != 0) {
            pppplStack_c0 = (long ****)0x0;
            pppplStack_b8 = (long ****)0x0;
            pppplStack_b0 = (long ****)0x0;
            lVar19 = *(long *)(param_2 + 0x488);
            FUN_10a904f5c(&pppplStack_c0,*(long *)(lVar19 + 0xe8) - *(long *)(lVar19 + 0xe0) >> 4);
            puVar18 = *(undefined8 **)(lVar19 + 0xe0);
            puVar2 = *(undefined8 **)(lVar19 + 0xe8);
            if (puVar18 != puVar2) {
              do {
                if (pppplStack_b8 < pppplStack_b0) {
                  lVar19 = puVar18[1];
                  pppplVar28 = (long ****)*puVar18;
                  pppplStack_b8[1] = (long ***)puVar18[1];
                  *pppplStack_b8 = (long ***)pppplVar28;
                  if (lVar19 != 0) {
                    plVar23 = (long *)(lVar19 + 0x10);
                    do {
                      cVar3 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                      if (bVar6) {
                        *plVar23 = *plVar23 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                  ppppplVar24 = (long *****)(pppplStack_b8 + 2);
                }
                else {
                  lVar19 = (long)pppplStack_b8 - (long)pppplStack_c0;
                  uVar11 = (lVar19 >> 4) + 1;
                  if (uVar11 >> 0x3c != 0) {
                    FUN_10a34d61c();
                    goto LAB_10a9047e4;
                  }
                  uVar14 = (long)pppplStack_b0 - (long)pppplStack_c0 >> 3;
                  if (uVar14 <= uVar11) {
                    uVar14 = uVar11;
                  }
                  if (0x7fffffffffffffef < (ulong)((long)pppplStack_b0 - (long)pppplStack_c0)) {
                    uVar14 = 0xfffffffffffffff;
                  }
                  ppppplVar8 = &pppplStack_c0;
                  pppplStack_140 = (long ****)&pppplStack_c0;
                  FUN_10a34d630();
                  puVar1 = (undefined8 *)((long)ppppplVar8 + lVar19);
                  lVar19 = puVar18[1];
                  uVar13 = *puVar18;
                  puVar1[1] = puVar18[1];
                  *puVar1 = uVar13;
                  if (lVar19 != 0) {
                    plVar23 = (long *)(lVar19 + 0x10);
                    do {
                      cVar3 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                      if (bVar6) {
                        *plVar23 = *plVar23 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                  ppppplVar24 = (long *****)(puVar1 + 2);
                  ppppplVar17 = (long *****)
                                ((long)puVar1 - ((long)pppplStack_b8 - (long)pppplStack_c0));
                  _memcpy(ppppplVar17);
                  pppplStack_150 = pppplStack_c0;
                  pppplStack_148 = pppplStack_b0;
                  pppplStack_160 = pppplStack_c0;
                  pppplStack_158 = pppplStack_c0;
                  pppplStack_c0 = (long ****)ppppplVar17;
                  pppplStack_b8 = (long ****)ppppplVar24;
                  pppplStack_b0 = (long ****)(ppppplVar8 + uVar14 * 2);
                  FUN_10a35a1bc(&pppplStack_160);
                }
                puVar18 = puVar18 + 2;
                pppplStack_b8 = (long ****)ppppplVar24;
              } while (puVar18 != puVar2);
            }
            if ((long *****)(*(long *)(param_2 + 0x5f8) + 0x50) != &pppplStack_c0) {
              FUN_10a34d2ec();
            }
            pppplStack_160 = (long ****)&pppplStack_c0;
            FUN_10a34c804(&pppplStack_160);
          }
          FUN_10a8fc8e8(&pppplStack_160,*(undefined8 *)(param_2 + 0x488));
          if ((long *****)pppplStack_160 != &pppplStack_158) {
            ppppplVar8 = (long *****)pppplStack_160;
            do {
              lVar22 = *(long *)(param_2 + 0x488);
              lVar19 = lVar22 + 0xf8;
              FUN_10a9176b0(lVar19,ppppplVar8 + 4);
              if (lVar22 + 0x100 != lVar19) {
                lVar22 = *(long *)(lVar19 + 0x38);
                plStack_c8 = *(long **)(lVar19 + 0x40);
                if (plStack_c8 != (long *)0x0) {
                  plVar23 = plStack_c8 + 1;
                  do {
                    cVar3 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                    if (bVar6) {
                      *plVar23 = *plVar23 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                lStack_d0 = lVar22;
                if (lVar22 != 0) {
                  pppplStack_c0 = (long ****)0x0;
                  pppplStack_b8 = (long ****)0x0;
                  pppplStack_b0 = (long ****)0x0;
                  plStack_e8 = (long *)0x0;
                  plStack_e0 = (long *)0x0;
                  uStack_d8 = 0;
                  func_0x000107c27e9c(&pppplStack_c0,
                                      *(long *)(lVar22 + 0x50) - *(long *)(lVar22 + 0x48) >> 4);
                  func_0x000104becb10(&plStack_e8,
                                      *(long *)(lVar22 + 0x50) - *(long *)(lVar22 + 0x48) >> 4);
                  if (*(long *)(lVar22 + 0x50) != *(long *)(lVar22 + 0x48)) {
                    uVar11 = 0;
                    do {
                      FUN_10a942378(&pppplStack_100,lStack_d0,uVar11);
                      FUN_10a904d90(apuStack_118,param_2 + -0x68,ppppplVar8 + 4,&pppplStack_100);
                      uStack_11c = SUB84(apuStack_118[1],0);
                      FUN_109febd04(&pppplStack_c0,&uStack_11c);
                      func_0x0001078db3d4(&plStack_e8,apuStack_118);
                      if (cStack_e9 < '\0') {
                        __ZdlPv(pppplStack_100);
                      }
                      uVar11 = uVar11 + 1;
                    } while (uVar11 < (ulong)(*(long *)(lVar22 + 0x50) - *(long *)(lVar22 + 0x48) >>
                                             4));
                  }
                  if ((*(long *)(param_2 + 0x640) != 0) &&
                     ((long *****)(*(long *)(param_2 + 0x640) + 0x50) != &pppplStack_c0)) {
                    FUN_10a0ea4a0();
                  }
                  if (*(long *)(param_2 + 0x688) != 0) {
                    func_0x000108b0402c(*(long *)(param_2 + 0x688) + 0x50,&plStack_e8);
                  }
                  if (plStack_e8 != (long *)0x0) {
                    __ZdlPv();
                  }
                  if ((long *****)pppplStack_c0 != (long *****)0x0) {
                    pppplStack_b8 = pppplStack_c0;
                    __ZdlPv();
                  }
                }
                plVar23 = plStack_c8;
                if (plStack_c8 != (long *)0x0) {
                  plVar7 = plStack_c8 + 1;
                  do {
                    lVar19 = *plVar7;
                    cVar3 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                    if (bVar6) {
                      *plVar7 = lVar19 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar19 == 0) {
                    (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
                  }
                }
              }
              ppppplVar24 = (long *****)ppppplVar8[1];
              ppppplVar17 = ppppplVar8;
              if ((long *****)ppppplVar8[1] == (long *****)0x0) {
                do {
                  ppppplVar8 = (long *****)ppppplVar17[2];
                  bVar6 = (long *****)*ppppplVar8 != ppppplVar17;
                  ppppplVar17 = ppppplVar8;
                } while (bVar6);
              }
              else {
                do {
                  ppppplVar8 = ppppplVar24;
                  ppppplVar24 = (long *****)*ppppplVar8;
                } while ((long *****)*ppppplVar8 != (long *****)0x0);
              }
            } while (ppppplVar8 != &pppplStack_158);
          }
          func_0x000107c27bf0(&pppplStack_160,pppplStack_158);
        }
      }
      plVar23 = plStack_a0;
      if (plStack_a0 != (long *)0x0) {
        plVar7 = plStack_a0 + 1;
        do {
          lVar19 = *plVar7;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar6) {
            *plVar7 = lVar19 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
        }
      }
    }
    else {
      plVar23 = *(long **)(param_2 + 0x4e0);
      if (plVar23 != (long *)(param_2 + 0x4e8)) {
        fVar36 = 0.01;
        do {
          plStack_e8 = (long *)0x0;
          plStack_e0 = (long *)0x0;
          plVar7 = (long *)plVar23[8];
          if ((plVar7 == (long *)0x0) ||
             (__ZNSt3__119__shared_weak_count4lockEv(), plStack_e0 = plVar7, plVar7 == (long *)0x0))
          {
            plVar7 = (long *)0x0;
          }
          else {
            plVar7 = (long *)plVar23[7];
            plStack_e8 = plVar7;
          }
          if (((*(byte *)((long)plVar23 + 0x4c) & 1) == 0) ||
             (uVar11 = (ulong)*(uint *)(plVar23 + 9), 0x1f < *(uint *)(plVar23 + 9))) {
LAB_10a9047e4:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9047e8);
            (*pcVar5)();
          }
          *(undefined1 *)((long)plVar7 + uVar11 + 0x340) = *(undefined1 *)(param_2 + 0x4c1);
          *(undefined1 *)((long)plVar7 + uVar11 + 0x360) = *(undefined1 *)(param_2 + 0x4c0);
          *(undefined4 *)(param_2 + 0x4c4) = *(undefined4 *)((long)plVar7 + uVar11 * 4 + 0x278);
          if (fVar35 != 1.0) {
            *(float *)(plVar7 + 0x2a4) = fVar35;
          }
          if (cVar3 != '\0') {
            *(undefined1 *)(plVar7 + 0x2a3) = 1;
          }
          if (fVar34 != 0.0) {
            *(float *)((long)plVar7 + 0x151c) = fVar34;
          }
          fVar30 = *(float *)(param_2 + 0x4d4);
          fVar29 = *(float *)(param_2 + 0x4d8);
          fVar26 = *(float *)(param_2 + 0x4dc);
          if (*(char *)((long)plVar7 + 0x14fc) == '\x01') {
            iVar15 = 0;
            fVar31 = *(float *)(param_2 + 0x4cc);
            fVar32 = *(float *)(param_2 + 0x4d0);
            while ((fVar33 = fVar31, iVar15 == 1 ||
                   (fVar33 = *(float *)(param_2 + 0x4c8), iVar15 != 2))) {
              bVar6 = fVar33 != 0.0;
              while (iVar15 = iVar15 + 1, bVar6) {
                if (iVar15 == 2) goto LAB_10a903aa8;
                bVar6 = true;
              }
            }
            if ((fVar32 != 0.0) || ((char)plVar7[0x2a0] == '\x01')) {
LAB_10a903aa8:
              *(float *)(plVar7 + 0x29e) = *(float *)(param_2 + 0x4c8);
              *(float *)((long)plVar7 + 0x14f4) = fVar31;
              *(float *)(plVar7 + 0x29f) = fVar32;
              *(undefined1 *)(plVar7 + 0x2a0) = 1;
            }
          }
          iVar15 = 0;
          while ((fVar31 = fVar29, iVar15 == 1 || (fVar31 = fVar30, iVar15 != 2))) {
            bVar6 = fVar31 != 0.0;
            while (iVar15 = iVar15 + 1, bVar6) {
              if (iVar15 == 2) goto LAB_10a903b14;
              bVar6 = true;
            }
          }
          if (fVar26 != 0.0) {
LAB_10a903b14:
            fVar31 = fVar36;
            if (0.01 <= fVar30) {
              fVar31 = fVar30;
            }
            fVar30 = fVar36;
            if (0.01 <= fVar29) {
              fVar30 = fVar29;
            }
            fVar29 = fVar36;
            if (0.01 <= fVar26) {
              fVar29 = fVar26;
            }
            *(float *)((long)plVar7 + 0x1504) =
                 SQRT(fVar29 * fVar29 + fVar31 * fVar31 + fVar30 * fVar30) * 0.5;
            if (*(char *)((long)plVar7 + 0x1514) == '\x01') {
              *(float *)(plVar7 + 0x2a1) = fVar31 * 0.5;
              *(float *)((long)plVar7 + 0x150c) = fVar30 * 0.5;
              *(float *)(plVar7 + 0x2a2) = fVar29 * 0.5;
            }
          }
          lVar16 = *(long *)(param_2 + 0x488);
          lVar22 = lVar16 + 0xf8;
          FUN_10a9176b0(lVar22,plVar23 + 4);
          plVar7 = plStack_e8;
          if (lVar16 + 0x100 != lVar22) {
            pppplStack_100 = *(long *****)(lVar22 + 0x38);
            pppplStack_f8 = *(long *****)(lVar22 + 0x40);
            if ((long *****)pppplStack_f8 != (long *****)0x0) {
              ppppplVar8 = (long *****)(pppplStack_f8 + 1);
              do {
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppplVar8,0x10);
                if (bVar6) {
                  *ppppplVar8 = (long ****)((long)*ppppplVar8 + 1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            if (((long *****)pppplStack_100 != (long *****)0x0) &&
               (lVar22 = plStack_e8[0xc], plStack_e8[0xd] != lVar22)) {
              uVar11 = 0;
              do {
                if (uVar11 < (ulong)(*(long *)(lVar19 + 0xe8) - *(long *)(lVar19 + 0xe0) >> 4)) {
                  plVar20 = (long *)(*(long *)(lVar19 + 0xe0) + uVar11 * 0x10);
                  pppplStack_158 = (long ****)plVar20[1];
                  pppplStack_160 = (long ****)*plVar20;
                  if (plVar20[1] != 0) {
                    plVar20 = (long *)(plVar20[1] + 8);
                    do {
                      cVar4 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                      if (bVar6) {
                        *plVar20 = *plVar20 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                  }
                }
                else {
                  pppplStack_160 = (long ****)0x0;
                  pppplStack_158 = (long ****)0x0;
                }
                lVar22 = lVar22 + uVar11 * 0x90;
                FUN_10a19ad28(lVar22 + 0x38,&pppplStack_160);
                pppplVar28 = pppplStack_158;
                if ((long *****)pppplStack_158 != (long *****)0x0) {
                  ppppplVar8 = (long *****)(pppplStack_158 + 1);
                  do {
                    pppplVar12 = *ppppplVar8;
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(ppppplVar8,0x10);
                    if (bVar6) {
                      *ppppplVar8 = (long ****)((long)pppplVar12 + -1);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (pppplVar12 == (long ****)0x0) {
                    (*(code *)(*pppplStack_158)[2])(pppplStack_158);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar28);
                  }
                }
                FUN_10a942378(&pppplStack_160,pppplStack_100,uVar11);
                FUN_10a904d90(&pppplStack_c0,param_2 + -0x68,plVar23 + 4,&pppplStack_160);
                *(long *****)(lVar22 + 0x70) = pppplStack_b8;
                *(undefined1 *)(lVar22 + 0x78) = pppplStack_c0._0_1_;
                if ((long)pppplStack_150 < 0) {
                  __ZdlPv(pppplStack_160);
                }
                uVar11 = uVar11 + 1;
                lVar22 = plVar7[0xc];
              } while (uVar11 < (ulong)((plVar7[0xd] - lVar22 >> 4) * -0x71c71c71c71c71c7));
            }
            pppplVar28 = pppplStack_f8;
            if ((long *****)pppplStack_f8 != (long *****)0x0) {
              ppppplVar8 = (long *****)(pppplStack_f8 + 1);
              do {
                pppplVar12 = *ppppplVar8;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppplVar8,0x10);
                if (bVar6) {
                  *ppppplVar8 = (long ****)((long)pppplVar12 + -1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (pppplVar12 == (long ****)0x0) {
                (*(code *)(*pppplStack_f8)[2])(pppplStack_f8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar28);
              }
            }
          }
          plVar7 = plStack_e0;
          if (plStack_e0 != (long *)0x0) {
            plVar20 = plStack_e0 + 1;
            do {
              lVar22 = *plVar20;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar6) {
                *plVar20 = lVar22 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar22 == 0) {
              (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          plVar7 = (long *)plVar23[1];
          plVar20 = plVar23;
          if ((long *)plVar23[1] == (long *)0x0) {
            do {
              plVar23 = (long *)plVar20[2];
              bVar6 = (long *)*plVar23 != plVar20;
              plVar20 = plVar23;
            } while (bVar6);
          }
          else {
            do {
              plVar23 = plVar7;
              plVar7 = (long *)*plVar23;
            } while ((long *)*plVar23 != (long *)0x0);
          }
        } while (plVar23 != (long *)(param_2 + 0x4e8));
      }
    }
  }
  return;
}



/* Entry: 10a904f5c; end: 10a904ff3;  */

/* WARNING: Removing unreachable block (ram,0x00010a906128) */
/* WARNING: Removing unreachable block (ram,0x00010a905a0c) */
/* WARNING: Removing unreachable block (ram,0x00010a9059a0) */
/* WARNING: Removing unreachable block (ram,0x00010a907420) */
/* WARNING: Removing unreachable block (ram,0x00010a906a94) */
/* WARNING: Removing unreachable block (ram,0x00010a905684) */
/* WARNING: Removing unreachable block (ram,0x00010a9053e0) */
/* WARNING: Removing unreachable block (ram,0x00010a905260) */
/* WARNING: Removing unreachable block (ram,0x00010a905518) */
/* WARNING: Removing unreachable block (ram,0x00010a9068ec) */
/* WARNING: Removing unreachable block (ram,0x00010a906ff4) */
/* WARNING: Removing unreachable block (ram,0x00010a9078d0) */
/* WARNING: Removing unreachable block (ram,0x00010a9071c8) */
/* WARNING: Removing unreachable block (ram,0x00010a907678) */
/* WARNING: Removing unreachable block (ram,0x00010a905d84) */
/* WARNING: Removing unreachable block (ram,0x00010a9072f4) */
/* WARNING: Removing unreachable block (ram,0x00010a905df0) */
/* WARNING: Removing unreachable block (ram,0x00010a9060bc) */
/* WARNING: Removing unreachable block (ram,0x00010a906460) */
/* WARNING: Removing unreachable block (ram,0x00010a9064cc) */
/* WARNING: Removing unreachable block (ram,0x00010a9067ec) */
/* WARNING: Removing unreachable block (ram,0x00010a906858) */
/* WARNING: Removing unreachable block (ram,0x00010a90754c) */
/* WARNING: Removing unreachable block (ram,0x00010a9077a4) */
/* WARNING: Removing unreachable block (ram,0x00010a9079fc) */

void FUN_10a904f5c(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *******ppppppplVar13;
  long *plVar14;
  ulong *puVar15;
  char cVar16;
  long lVar17;
  long ******pppppplVar18;
  code *pcVar19;
  bool bVar20;
  undefined **ppuVar21;
  byte *pbVar22;
  long *plVar23;
  undefined8 *puVar24;
  long *******ppppppplVar25;
  long *******ppppppplVar26;
  undefined8 *puVar27;
  long ******pppppplVar28;
  undefined1 *puVar29;
  undefined4 *puVar30;
  undefined8 *puVar31;
  long lVar32;
  undefined *puVar33;
  undefined8 *puVar34;
  long lVar35;
  long ******pppppplVar36;
  long ******pppppplVar37;
  ulong uVar38;
  long lVar39;
  undefined8 uVar40;
  long *plVar41;
  ulong uVar42;
  long *plVar43;
  long *******ppppppplVar44;
  long *******ppppppplVar45;
  long *plStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  long *plStack_290;
  long *plStack_288;
  long *plStack_280;
  long *plStack_278;
  long *plStack_270;
  long ******pppppplStack_268;
  long ******pppppplStack_260;
  long *plStack_258;
  long *plStack_250;
  long ******pppppplStack_248;
  long ******pppppplStack_240;
  long ******pppppplStack_238;
  long ******pppppplStack_230;
  long ******pppppplStack_228;
  long ******pppppplStack_220;
  long *****ppppplStack_218;
  long *plStack_210;
  undefined4 uStack_204;
  long ******pppppplStack_200;
  long ******pppppplStack_1f8;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1c8;
  long *plStack_1c0;
  long ******pppppplStack_1b8;
  long ******pppppplStack_1b0;
  long ******pppppplStack_1a8;
  long ******pppppplStack_1a0;
  long ******pppppplStack_198;
  long ******pppppplStack_190;
  long ******pppppplStack_188;
  long ******pppppplStack_180;
  long ******pppppplStack_178;
  long ******pppppplStack_170;
  long ******pppppplStack_168;
  long *****ppppplStack_158;
  long *plStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 *puStack_138;
  undefined8 auStack_130 [2];
  undefined1 uStack_120;
  undefined5 uStack_11f;
  undefined2 uStack_11a;
  undefined6 uStack_118;
  undefined2 uStack_112;
  long ******pppppplStack_110;
  long ******pppppplStack_108;
  long ******pppppplStack_100;
  long ******pppppplStack_f8;
  long ******pppppplStack_f0;
  undefined8 uStack_e8;
  long lStack_d8;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar32 = *param_1;
  if (param_2 <= (ulong)(param_1[2] - lVar32 >> 4)) {
    return;
  }
  if (param_2 >> 0x3c == 0) {
    lVar35 = param_1[1];
    plVar23 = param_1;
    plStack_38 = param_1;
    FUN_10a34d630();
    lVar32 = (long)plVar23 + (lVar35 - lVar32);
    lVar35 = lVar32 - (param_1[1] - *param_1);
    _memcpy(lVar35);
    lStack_58 = *param_1;
    *param_1 = lVar35;
    param_1[1] = lVar32;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar23 + param_2 * 2);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    FUN_10a35a1bc(&lStack_58);
    return;
  }
  FUN_10a34d61c();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a9085f8();
  lVar32 = param_1[0x2d];
  if (param_1[0x2e] == 0) {
    ppuVar21 = &PTR___tlv_bootstrap_11340dee8;
    (*(code *)PTR___tlv_bootstrap_11340dee8)();
    puVar33 = *ppuVar21;
    if (puVar33 != (undefined *)0x0) goto LAB_10a9050c8;
    FUN_10a3ca004();
    pbVar22 = (byte *)0x113836510;
    FUN_10ad0621c();
    uVar42 = (ulong)(*pbVar22 >> 4 & 4);
    puVar33 = ppuVar21[uVar42 + 7];
    if (puVar33 != (undefined *)0x0) goto LAB_10a9050c8;
    FUN_10a3ca05c(ppuVar21,uVar42);
    puVar33 = ppuVar21[uVar42 + 7];
    uStack_120 = 0x35;
    uStack_11f = 0x10f646d;
    uStack_11a = 0;
    uStack_118 = 0x26;
    uStack_112 = 0;
    if (puVar33 != (undefined *)0x0) goto LAB_10a9050c8;
  }
  else {
    puVar33 = *(undefined **)(*(long *)(param_1[0x2e] + 0x100) + 0x260);
    uStack_120 = 0x20;
    uStack_11f = 0x10f653c;
    uStack_11a = 0;
    uStack_118 = 0x21;
    uStack_112 = 0;
    if (puVar33 == (undefined *)0x0) {
      FUN_10a0edfc4(&uStack_120);
      goto LAB_10a907c3c;
    }
LAB_10a9050c8:
    plVar23 = *(long **)(puVar33 + 0x228);
    (**(code **)(*plVar23 + 0x68))();
    if (0xf < *(int *)((long)plVar23 + 0x8c)) {
      FUN_10a8fc8e8(&puStack_138,param_1[0x9e]);
      if (puStack_138 != auStack_130) {
        plVar23 = param_1 + 0xbc;
        plVar1 = param_1 + 0xc3;
        plVar2 = param_1 + 0xc5;
        plVar3 = param_1 + 0xcc;
        plVar4 = param_1 + 0xce;
        plVar5 = param_1 + 0xd7;
        plVar6 = param_1 + 0xe0;
        plVar7 = param_1 + 0xeb;
        plVar8 = param_1 + 0xed;
        plVar9 = param_1 + 0xef;
        plVar10 = param_1 + 0xf1;
        plVar11 = param_1 + 0xf3;
        plVar12 = param_1 + 0xf5;
        puVar34 = puStack_138;
        do {
          ppppppplVar13 = (long *******)(puVar34 + 4);
          lVar39 = param_1[0x9e];
          lVar35 = lVar39 + 0xf8;
          FUN_10a9176b0(lVar35,ppppppplVar13);
          if (lVar39 + 0x100 != lVar35) {
            lStack_148 = *(long *)(lVar35 + 0x38);
            plStack_140 = *(long **)(lVar35 + 0x40);
            if (plStack_140 != (long *)0x0) {
              plVar41 = plStack_140 + 1;
              do {
                cVar16 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                if (bVar20) {
                  *plVar41 = *plVar41 + 1;
                  cVar16 = ExclusiveMonitorsStatus();
                }
              } while (cVar16 != '\0');
            }
            if (lStack_148 != 0) {
              ppppplStack_158 = *(long ******)(lStack_148 + 0x18);
              plStack_150 = *(long **)(lStack_148 + 0x20);
              if (plStack_150 != (long *)0x0) {
                plVar41 = plStack_150 + 1;
                do {
                  cVar16 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                  if (bVar20) {
                    *plVar41 = *plVar41 + 1;
                    cVar16 = ExclusiveMonitorsStatus();
                  }
                } while (cVar16 != '\0');
              }
              if ((long ******)ppppplStack_158 != (long ******)0x0) {
                lVar39 = param_1[0x2e];
                ppppppplVar25 = ppppppplVar13;
                __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                          (&uStack_120,&UNK_10f682546,ppppppplVar13);
                lVar35 = lVar39;
                FUN_10a3dd220(lVar39);
                func_0x00010a0fda30();
                FUN_10a3dd268(lVar39,lVar35,ppppppplVar25,&uStack_120);
                FUN_10a0c3500(lVar39,lVar32);
                func_0x00010a3e4590(lVar39,0);
                ppppppplVar25 = &pppppplStack_188;
                puVar33 = &UNK_10f6821fc;
                func_0x000107c2b054(ppppppplVar25,&UNK_10f6821fc);
                uVar40 = *(undefined8 *)(lVar39 + 0x120);
                func_0x00010a0fda30();
                FUN_10a3b8ecc(&pppppplStack_170,uVar40,ppppppplVar25,puVar33);
                ppppppplVar25 = (long *******)pppppplStack_188;
                ppppppplVar26 = (long *******)pppppplStack_180;
                if (-1 < (long)pppppplStack_178) {
                  ppppppplVar25 = &pppppplStack_188;
                  ppppppplVar26 = (long *******)((ulong)pppppplStack_178 >> 0x38);
                }
                func_0x000107c2c4d8(pppppplStack_170 + 0x2a,ppppppplVar25,ppppppplVar26);
                pppppplStack_1f8 = pppppplStack_168;
                pppppplStack_200 = pppppplStack_170;
                if ((long *******)pppppplStack_168 != (long *******)0x0) {
                  ppppppplVar25 = (long *******)(pppppplStack_168 + 1);
                  do {
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                    if (bVar20) {
                      *ppppppplVar25 = (long ******)((long)*ppppppplVar25 + 1);
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                }
                pppppplStack_f8 = (long ******)0x0;
                pppppplStack_100 = (long ******)0x0;
                uStack_e8 = 0;
                pppppplStack_f0 = (long ******)0x0;
                pppppplStack_108 = (long ******)0x0;
                pppppplStack_110 = (long ******)0x0;
                uStack_120 = 0x18;
                uStack_11f = 0x10a0d4f;
                uStack_11a = 0;
                uStack_118 = 0x110950c70;
                uStack_112 = 0;
                FUN_10a3e4814(lVar39,&pppppplStack_200,&uStack_120);
                (**(code **)CONCAT26(uStack_112,uStack_118))(&uStack_118);
                pppppplVar37 = pppppplStack_1f8;
                if ((long *******)pppppplStack_1f8 != (long *******)0x0) {
                  ppppppplVar25 = (long *******)(pppppplStack_1f8 + 1);
                  do {
                    pppppplVar36 = *ppppppplVar25;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                    if (bVar20) {
                      *ppppppplVar25 = (long ******)((long)pppppplVar36 + -1);
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (pppppplVar36 == (long ******)0x0) {
                    (*(code *)(*pppppplStack_1f8)[2])(pppppplStack_1f8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                  }
                }
                if ((long)pppppplStack_178 < 0) {
                  __ZdlPv(pppppplStack_188);
                }
                (*(code *)(*pppppplStack_170)[0xd])(pppppplStack_170,0);
                pppppplVar37 = pppppplStack_170;
                __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                          (&uStack_120,"system",ppppppplVar13);
                puVar29 = (undefined1 *)CONCAT26(uStack_11a,CONCAT51(uStack_11f,uStack_120));
                uVar42 = CONCAT26(uStack_112,uStack_118);
                if (-1 < (long)pppppplStack_110) {
                  puVar29 = &uStack_120;
                  uVar42 = (ulong)pppppplStack_110 >> 0x38;
                }
                func_0x000107c2c4d8(pppppplVar37 + 0x2a,puVar29,uVar42);
                *(undefined1 *)(pppppplStack_170 + 1) = 1;
                ppppppplVar25 = (long *******)&ppppplStack_158;
                ppppppplVar26 = (long *******)pppppplStack_170;
                FUN_10a39c6b8();
                lVar35 = lStack_148;
                pppppplVar37 = pppppplStack_170;
                if (*(long *)(lStack_148 + 0x28) != 0) {
                  func_0x000107c2b054(&pppppplStack_188,&UNK_10f682551);
                  pppppplStack_198 = *(long *******)(lVar35 + 0x28);
                  pppppplStack_190 = *(long *******)(lVar35 + 0x30);
                  if ((long *******)pppppplStack_190 == (long *******)0x0) {
                    pppppplStack_100 = (long ******)0x0;
                  }
                  else {
                    ppppppplVar25 = (long *******)(pppppplStack_190 + 1);
                    do {
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                      if (bVar20) {
                        *ppppppplVar25 = (long ******)((long)*ppppppplVar25 + 1);
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    ppppppplVar26 = (long *******)(pppppplStack_190 + 2);
                    do {
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
                      if (bVar20) {
                        *ppppppplVar26 = (long ******)((long)*ppppppplVar26 + 1);
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    do {
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                      if (bVar20) {
                        *ppppppplVar25 = (long ******)((long)*ppppppplVar25 + 1);
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                      pppppplStack_100 = pppppplStack_190;
                    } while (cVar16 != '\0');
                  }
                  pppppplStack_110 = (long ******)0xe00000000000000;
                  uStack_112 = 0;
                  uStack_118 = 0x6c6169726574;
                  uStack_11a = 0x614d;
                  uStack_11f = 0x2e74657373;
                  uStack_120 = 0x41;
                  ppppppplVar25 = &pppppplStack_188;
                  pppppplStack_108 = pppppplStack_198;
                  pppppplStack_f8 = pppppplStack_198;
                  pppppplStack_f0 = pppppplStack_190;
                  FUN_10a39a09c(pppppplVar37,ppppppplVar25,&uStack_120);
                  pppppplVar37 = pppppplStack_f0;
                  if ((long *******)pppppplStack_f0 != (long *******)0x0) {
                    ppppppplVar26 = (long *******)(pppppplStack_f0 + 1);
                    do {
                      pppppplVar36 = *ppppppplVar26;
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
                      if (bVar20) {
                        *ppppppplVar26 = (long ******)((long)pppppplVar36 + -1);
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    if (pppppplVar36 == (long ******)0x0) {
                      (*(code *)(*pppppplStack_f0)[2])(pppppplStack_f0);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                    }
                  }
                  ppppppplVar26 = (long *******)pppppplStack_100;
                  if ((long *******)pppppplStack_100 != (long *******)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  ppppppplVar44 = (long *******)pppppplStack_190;
                  if ((long *******)pppppplStack_190 != (long *******)0x0) {
                    ppppppplVar45 = (long *******)(pppppplStack_190 + 1);
                    do {
                      pppppplVar37 = *ppppppplVar45;
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar45,0x10);
                      if (bVar20) {
                        *ppppppplVar45 = (long ******)((long)pppppplVar37 + -1);
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    if (pppppplVar37 == (long ******)0x0) {
                      (*(code *)(*pppppplStack_190)[2])(pppppplStack_190);
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                      ppppppplVar26 = ppppppplVar44;
                    }
                  }
                  if ((long)pppppplStack_178 < 0) {
                    ppppppplVar26 = (long *******)pppppplStack_188;
                    __ZdlPv();
                  }
                }
                lVar35 = lStack_148;
                pppppplVar37 = pppppplStack_170;
                if (*(long *)(lStack_148 + 0x38) != 0) {
                  func_0x000107c2b054(&pppppplStack_188,&UNK_10f682563);
                  pppppplStack_1a8 = *(long *******)(lVar35 + 0x38);
                  pppppplStack_1a0 = *(long *******)(lVar35 + 0x40);
                  if ((long *******)pppppplStack_1a0 == (long *******)0x0) {
                    pppppplStack_100 = (long ******)0x0;
                  }
                  else {
                    ppppppplVar25 = (long *******)(pppppplStack_1a0 + 1);
                    do {
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                      if (bVar20) {
                        *ppppppplVar25 = (long ******)((long)*ppppppplVar25 + 1);
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    ppppppplVar26 = (long *******)(pppppplStack_1a0 + 2);
                    do {
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
                      if (bVar20) {
                        *ppppppplVar26 = (long ******)((long)*ppppppplVar26 + 1);
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    do {
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                      if (bVar20) {
                        *ppppppplVar25 = (long ******)((long)*ppppppplVar25 + 1);
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                      pppppplStack_100 = pppppplStack_1a0;
                    } while (cVar16 != '\0');
                  }
                  pppppplStack_110 = (long ******)0xe00000000000000;
                  uStack_112 = 0;
                  uStack_118 = 0x6c6169726574;
                  uStack_11a = 0x614d;
                  uStack_11f = 0x2e74657373;
                  uStack_120 = 0x41;
                  ppppppplVar25 = &pppppplStack_188;
                  pppppplStack_108 = pppppplStack_1a8;
                  pppppplStack_f8 = pppppplStack_1a8;
                  pppppplStack_f0 = pppppplStack_1a0;
                  FUN_10a39a09c(pppppplVar37,ppppppplVar25,&uStack_120);
                  pppppplVar37 = pppppplStack_f0;
                  if ((long *******)pppppplStack_f0 != (long *******)0x0) {
                    ppppppplVar26 = (long *******)(pppppplStack_f0 + 1);
                    do {
                      pppppplVar36 = *ppppppplVar26;
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
                      if (bVar20) {
                        *ppppppplVar26 = (long ******)((long)pppppplVar36 + -1);
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    if (pppppplVar36 == (long ******)0x0) {
                      (*(code *)(*pppppplStack_f0)[2])(pppppplStack_f0);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                    }
                  }
                  ppppppplVar26 = (long *******)pppppplStack_100;
                  if ((long *******)pppppplStack_100 != (long *******)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  ppppppplVar44 = (long *******)pppppplStack_1a0;
                  if ((long *******)pppppplStack_1a0 != (long *******)0x0) {
                    ppppppplVar45 = (long *******)(pppppplStack_1a0 + 1);
                    do {
                      pppppplVar37 = *ppppppplVar45;
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar45,0x10);
                      if (bVar20) {
                        *ppppppplVar45 = (long ******)((long)pppppplVar37 + -1);
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    if (pppppplVar37 == (long ******)0x0) {
                      (*(code *)(*pppppplStack_1a0)[2])(pppppplStack_1a0);
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                      ppppppplVar26 = ppppppplVar44;
                    }
                  }
                  if ((long)pppppplStack_178 < 0) {
                    ppppppplVar26 = (long *******)pppppplStack_188;
                    __ZdlPv();
                  }
                }
                pppppplVar37 = pppppplStack_170;
                if (*(int *)(*(long *)(param_1[0x2e] + 0xa20) + 0x18) < 0x15c) {
                  puVar15 = *(ulong **)(lStack_148 + 0x48);
                  if (*(ulong **)(lStack_148 + 0x50) != puVar15) {
                    ppppppplVar25 = (long *******)*puVar15;
                    ppppppplVar26 = (long *******)puVar15[1];
                    if (ppppppplVar26 != (long *******)0x0) {
                      ppppppplVar44 = ppppppplVar26 + 1;
                      do {
                        cVar16 = '\x01';
                        bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar44,0x10);
                        if (bVar20) {
                          *ppppppplVar44 = (long ******)((long)*ppppppplVar44 + 1);
                          cVar16 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar16 != '\0');
                    }
                    pppppplStack_200 = (long ******)ppppppplVar25;
                    pppppplStack_1f8 = (long ******)ppppppplVar26;
                    if (ppppppplVar25 != (long *******)0x0) {
                      func_0x000107c2b054(&pppppplStack_188,&UNK_10f682589);
                      if (ppppppplVar26 == (long *******)0x0) {
                        pppppplStack_100 = (long ******)0x0;
                      }
                      else {
                        ppppppplVar44 = ppppppplVar26 + 1;
                        do {
                          cVar16 = '\x01';
                          bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar44,0x10);
                          if (bVar20) {
                            *ppppppplVar44 = (long ******)((long)*ppppppplVar44 + 1);
                            cVar16 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar16 != '\0');
                        ppppppplVar45 = ppppppplVar26 + 2;
                        do {
                          cVar16 = '\x01';
                          bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar45,0x10);
                          if (bVar20) {
                            *ppppppplVar45 = (long ******)((long)*ppppppplVar45 + 1);
                            cVar16 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar16 != '\0');
                        do {
                          cVar16 = '\x01';
                          bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar44,0x10);
                          if (bVar20) {
                            *ppppppplVar44 = (long ******)((long)*ppppppplVar44 + 1);
                            cVar16 = ExclusiveMonitorsStatus();
                          }
                          pppppplStack_100 = (long ******)ppppppplVar26;
                        } while (cVar16 != '\0');
                      }
                      pppppplStack_110 = (long ******)0xe00000000000000;
                      uStack_112 = 0;
                      uStack_118 = 0x6c6169726574;
                      uStack_11a = 0x614d;
                      uStack_11f = 0x2e74657373;
                      uStack_120 = 0x41;
                      pppppplStack_238 = (long ******)ppppppplVar25;
                      pppppplStack_230 = (long ******)ppppppplVar26;
                      pppppplStack_108 = (long ******)ppppppplVar25;
                      pppppplStack_f8 = (long ******)ppppppplVar25;
                      pppppplStack_f0 = (long ******)ppppppplVar26;
                      FUN_10a39a09c(pppppplVar37,&pppppplStack_188,&uStack_120);
                      pppppplVar37 = pppppplStack_f0;
                      if ((long *******)pppppplStack_f0 != (long *******)0x0) {
                        ppppppplVar25 = (long *******)(pppppplStack_f0 + 1);
                        do {
                          pppppplVar36 = *ppppppplVar25;
                          cVar16 = '\x01';
                          bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                          if (bVar20) {
                            *ppppppplVar25 = (long ******)((long)pppppplVar36 + -1);
                            cVar16 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar16 != '\0');
                        if (pppppplVar36 == (long ******)0x0) {
                          (*(code *)(*pppppplStack_f0)[2])(pppppplStack_f0);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                        }
                      }
                      if ((long *******)pppppplStack_100 != (long *******)0x0) {
                        __ZNSt3__119__shared_weak_count14__release_weakEv();
                      }
                      pppppplVar37 = pppppplStack_230;
                      if ((long *******)pppppplStack_230 != (long *******)0x0) {
                        ppppppplVar25 = (long *******)(pppppplStack_230 + 1);
                        do {
                          pppppplVar36 = *ppppppplVar25;
                          cVar16 = '\x01';
                          bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                          if (bVar20) {
                            *ppppppplVar25 = (long ******)((long)pppppplVar36 + -1);
                            cVar16 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar16 != '\0');
                        if (pppppplVar36 == (long ******)0x0) {
                          (*(code *)(*pppppplStack_230)[2])(pppppplStack_230);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                        }
                      }
                      if ((long)pppppplStack_178 < 0) {
                        __ZdlPv(pppppplStack_188);
                      }
                    }
                    pppppplVar37 = pppppplStack_1f8;
                    if ((long *******)pppppplStack_1f8 != (long *******)0x0) {
                      ppppppplVar25 = (long *******)(pppppplStack_1f8 + 1);
                      do {
                        pppppplVar36 = *ppppppplVar25;
                        cVar16 = '\x01';
                        bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                        if (bVar20) {
                          *ppppppplVar25 = (long ******)((long)pppppplVar36 + -1);
                          cVar16 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar16 != '\0');
                      if (pppppplVar36 == (long ******)0x0) {
                        (*(code *)(*pppppplStack_1f8)[2])(pppppplStack_1f8);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                      }
                    }
                  }
                  pppppplVar37 = pppppplStack_170;
                  lVar35 = param_1[0x9e];
                  if ((*(long **)(lVar35 + 0xe0) != *(long **)(lVar35 + 0xe8)) &&
                     (**(long **)(lVar35 + 0xe0) != 0)) {
                    func_0x000107c2b054(&pppppplStack_188,&UNK_10f68253a);
                    puVar15 = *(ulong **)(lVar35 + 0xe0);
                    if (*(ulong **)(lVar35 + 0xe8) == puVar15) goto LAB_10a907c3c;
                    pppppplStack_248 = (long ******)*puVar15;
                    pppppplStack_240 = (long ******)puVar15[1];
                    if ((long *******)pppppplStack_240 == (long *******)0x0) {
                      pppppplStack_100 = (long ******)0x0;
                    }
                    else {
                      ppppppplVar25 = (long *******)(pppppplStack_240 + 1);
                      do {
                        cVar16 = '\x01';
                        bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                        if (bVar20) {
                          *ppppppplVar25 = (long ******)((long)*ppppppplVar25 + 1);
                          cVar16 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar16 != '\0');
                      ppppppplVar26 = (long *******)(pppppplStack_240 + 2);
                      do {
                        cVar16 = '\x01';
                        bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
                        if (bVar20) {
                          *ppppppplVar26 = (long ******)((long)*ppppppplVar26 + 1);
                          cVar16 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar16 != '\0');
                      do {
                        cVar16 = '\x01';
                        bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                        if (bVar20) {
                          *ppppppplVar25 = (long ******)((long)*ppppppplVar25 + 1);
                          cVar16 = ExclusiveMonitorsStatus();
                        }
                        pppppplStack_100 = pppppplStack_240;
                      } while (cVar16 != '\0');
                    }
                    pppppplStack_110 = (long ******)0x1000000000000000;
                    uStack_112 = 0x6873;
                    uStack_118 = 0x654d7265646e;
                    uStack_11a = 0x6552;
                    uStack_11f = 0x2e74657373;
                    uStack_120 = 0x41;
                    pppppplStack_108 = pppppplStack_248;
                    pppppplStack_f8 = pppppplStack_248;
                    pppppplStack_f0 = pppppplStack_240;
                    FUN_10a39a09c(pppppplVar37,&pppppplStack_188,&uStack_120);
                    pppppplVar37 = pppppplStack_f0;
                    if ((long *******)pppppplStack_f0 != (long *******)0x0) {
                      ppppppplVar25 = (long *******)(pppppplStack_f0 + 1);
                      do {
                        pppppplVar36 = *ppppppplVar25;
                        cVar16 = '\x01';
                        bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                        if (bVar20) {
                          *ppppppplVar25 = (long ******)((long)pppppplVar36 + -1);
                          cVar16 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar16 != '\0');
                      if (pppppplVar36 == (long ******)0x0) {
                        (*(code *)(*pppppplStack_f0)[2])(pppppplStack_f0);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                      }
                    }
                    if ((long *******)pppppplStack_100 != (long *******)0x0) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                    }
                    pppppplVar37 = pppppplStack_240;
                    if ((long *******)pppppplStack_240 != (long *******)0x0) {
                      ppppppplVar25 = (long *******)(pppppplStack_240 + 1);
                      do {
                        pppppplVar36 = *ppppppplVar25;
                        cVar16 = '\x01';
                        bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                        if (bVar20) {
                          *ppppppplVar25 = (long ******)((long)pppppplVar36 + -1);
                          cVar16 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar16 != '\0');
                      if (pppppplVar36 == (long ******)0x0) {
                        (*(code *)(*pppppplStack_240)[2])(pppppplStack_240);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                      }
                    }
                    if ((long)pppppplStack_178 < 0) {
                      __ZdlPv(pppppplStack_188);
                    }
                  }
                }
                else {
                  func_0x00010a0fda30();
                  puVar24 = (undefined8 *)0x80;
                  __Znwm();
                  puVar24[1] = 0;
                  puVar24[2] = 0;
                  *puVar24 = &PTR_FUN_110bde0d8;
                  *(undefined1 *)(puVar24 + 4) = 0;
                  puVar24[7] = 0;
                  puVar24[6] = 0;
                  puVar27 = puVar24 + 8;
                  puVar24[9] = 0;
                  *puVar27 = 0;
                  puVar24[0xc] = ppppppplVar25;
                  puVar24[0xd] = 0;
                  puVar24[0xe] = 0;
                  puVar24[0xf] = 0;
                  puVar31 = puVar24 + 3;
                  *puVar31 = &PTR_DAT_110bdb408;
                  puVar24[5] = &PTR_FUN_110bdb490;
                  puVar24[10] = &PTR_FUN_110bdb4e8;
                  puVar24[0xb] = ppppppplVar26;
                  uStack_120 = SUB81(puVar31,0);
                  uStack_11f = (undefined5)((ulong)puVar31 >> 8);
                  uStack_11a = (undefined2)((ulong)puVar31 >> 0x30);
                  uStack_118 = SUB86(puVar24,0);
                  uStack_112 = (undefined2)((ulong)puVar24 >> 0x30);
                  FUN_10a4951fc(&uStack_120);
                  lVar17 = CONCAT26(uStack_112,uStack_118);
                  lVar35 = CONCAT26(uStack_11a,CONCAT51(uStack_11f,uStack_120));
                  uStack_120 = 0;
                  uStack_11f = 0;
                  uStack_11a = 0;
                  uStack_118 = 0;
                  uStack_112 = 0;
                  plVar41 = (long *)param_1[0xbb];
                  param_1[0xbb] = lVar17;
                  param_1[0xba] = lVar35;
                  if (plVar41 != (long *)0x0) {
                    plVar43 = plVar41 + 1;
                    do {
                      lVar35 = *plVar43;
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar20) {
                        *plVar43 = lVar35 + -1;
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    if (lVar35 == 0) {
                      (**(code **)(*plVar41 + 0x10))(plVar41);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    }
                  }
                  plVar41 = (long *)CONCAT26(uStack_112,uStack_118);
                  if (plVar41 != (long *)0x0) {
                    plVar43 = plVar41 + 1;
                    do {
                      lVar35 = *plVar43;
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar20) {
                        *plVar43 = lVar35 + -1;
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    if (lVar35 == 0) {
                      (**(code **)(*plVar41 + 0x10))(plVar41);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    }
                  }
                  ppppppplVar25 = (long *******)param_1[0xba];
                  if (ppppppplVar25 + 10 != (long *******)(lStack_148 + 0x60)) {
                    puVar27 = *(undefined8 **)(lStack_148 + 0x60);
                    FUN_10a105cdc(ppppppplVar25 + 10,puVar27,*(long *)(lStack_148 + 0x68),
                                  (*(long *)(lStack_148 + 0x68) - (long)puVar27 >> 3) *
                                  -0x5555555555555555);
                    ppppppplVar25 = (long *******)param_1[0xba];
                  }
                  pppppplStack_1b0 = (long ******)param_1[0xbb];
                  ppppppplVar26 = ppppppplVar25;
                  if ((long *******)pppppplStack_1b0 != (long *******)0x0) {
                    ppppppplVar26 = (long *******)(pppppplStack_1b0 + 1);
                    do {
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
                      if (bVar20) {
                        *ppppppplVar26 = (long ******)((long)*ppppppplVar26 + 1);
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    ppppppplVar26 = (long *******)param_1[0xba];
                  }
                  pppppplStack_1b8 = (long ******)ppppppplVar25;
                  (*(code *)(*ppppppplVar26)[7])();
                  uStack_118 = 0;
                  uStack_112 = 0;
                  uStack_120 = 0;
                  uStack_11f = 0;
                  uStack_11a = 0;
                  pppppplStack_108 = (long ******)0x0;
                  pppppplStack_110 = (long ******)0x0;
                  pppppplStack_f8 = (long ******)0x0;
                  pppppplStack_100 = (long ******)0x0;
                  pppppplStack_f0 = (long ******)0x0;
                  func_0x000107c2c4d8(&uStack_120,ppppppplVar26,puVar27);
                  pppppplVar18 = pppppplStack_100;
                  pppppplVar36 = pppppplStack_1b0;
                  pppppplVar37 = pppppplStack_1b8;
                  if ((long *******)pppppplStack_1b0 != (long *******)0x0) {
                    ppppppplVar25 = (long *******)(pppppplStack_1b0 + 2);
                    do {
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                      if (bVar20) {
                        *ppppppplVar25 = (long ******)((long)*ppppppplVar25 + 1);
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                  }
                  pppppplStack_108 = pppppplStack_1b8;
                  pppppplStack_100 = pppppplStack_1b0;
                  if (pppppplVar18 != (long ******)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  ppppppplVar25 = (long *******)(pppppplVar37 + 2);
                  (*(code *)(*ppppppplVar25)[3])();
                  pppppplVar18 = pppppplStack_f0;
                  if (((ulong)ppppppplVar25 & 1) == 0) {
                    if ((long *******)pppppplVar36 != (long *******)0x0) {
                      ppppppplVar25 = (long *******)(pppppplVar36 + 1);
                      do {
                        cVar16 = '\x01';
                        bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                        if (bVar20) {
                          *ppppppplVar25 = (long ******)((long)*ppppppplVar25 + 1);
                          cVar16 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar16 != '\0');
                    }
                    pppppplStack_f8 = pppppplVar37;
                    pppppplStack_f0 = pppppplVar36;
                    if ((long *******)pppppplVar18 != (long *******)0x0) {
                      ppppppplVar25 = (long *******)(pppppplVar18 + 1);
                      do {
                        pppppplVar37 = *ppppppplVar25;
                        cVar16 = '\x01';
                        bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                        if (bVar20) {
                          *ppppppplVar25 = (long ******)((long)pppppplVar37 + -1);
                          cVar16 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar16 != '\0');
                      if (pppppplVar37 == (long ******)0x0) {
                        (*(code *)(*pppppplVar18)[2])(pppppplVar18);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar18);
                      }
                    }
                  }
                  if (*(char *)((long)param_1 + 0x5f7) < '\0') {
                    __ZdlPv(*plVar23);
                  }
                  pppppplVar36 = pppppplStack_100;
                  pppppplVar37 = pppppplStack_108;
                  param_1[0xbd] = CONCAT26(uStack_112,uStack_118);
                  *plVar23 = CONCAT26(uStack_11a,CONCAT51(uStack_11f,uStack_120));
                  param_1[0xbe] = (long)pppppplStack_110;
                  pppppplStack_110 = (long ******)((ulong)pppppplStack_110 & 0xffffffffffffff);
                  uStack_120 = 0;
                  pppppplStack_108 = (long ******)0x0;
                  pppppplStack_100 = (long ******)0x0;
                  lVar35 = param_1[0xc0];
                  param_1[0xc0] = (long)pppppplVar36;
                  param_1[0xbf] = (long)pppppplVar37;
                  if (lVar35 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  func_0x00010a328268(param_1 + 0xc1,&pppppplStack_f8);
                  pppppplVar37 = pppppplStack_f0;
                  if ((long *******)pppppplStack_f0 != (long *******)0x0) {
                    ppppppplVar25 = (long *******)(pppppplStack_f0 + 1);
                    do {
                      pppppplVar36 = *ppppppplVar25;
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                      if (bVar20) {
                        *ppppppplVar25 = (long ******)((long)pppppplVar36 + -1);
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    if (pppppplVar36 == (long ******)0x0) {
                      (*(code *)(*pppppplStack_f0)[2])(pppppplStack_f0);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                    }
                  }
                  if ((long *******)pppppplStack_100 != (long *******)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  pppppplVar37 = pppppplStack_1b0;
                  if ((long *******)pppppplStack_1b0 != (long *******)0x0) {
                    ppppppplVar25 = (long *******)(pppppplStack_1b0 + 1);
                    do {
                      pppppplVar36 = *ppppppplVar25;
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                      if (bVar20) {
                        *ppppppplVar25 = (long ******)((long)pppppplVar36 + -1);
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    if (pppppplVar36 == (long ******)0x0) {
                      (*(code *)(*pppppplStack_1b0)[2])(pppppplStack_1b0);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                    }
                  }
                  ppppppplVar25 = (long *******)pppppplStack_170;
                  func_0x000107c2b054(&uStack_120,&UNK_10f682575);
                  puVar29 = &uStack_120;
                  FUN_10a39a09c(ppppppplVar25,puVar29,plVar23);
                  func_0x00010a0fda30();
                  FUN_10a91a250(&uStack_120,ppppppplVar25,puVar29);
                  FUN_10a908708(plVar1,&uStack_120);
                  plVar41 = (long *)CONCAT26(uStack_112,uStack_118);
                  if (plVar41 != (long *)0x0) {
                    plVar43 = plVar41 + 1;
                    do {
                      lVar35 = *plVar43;
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar20) {
                        *plVar43 = lVar35 + -1;
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    if (lVar35 == 0) {
                      (**(code **)(*plVar41 + 0x10))(plVar41);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    }
                  }
                  lVar35 = lStack_148;
                  pppppplStack_180 = (long ******)0x0;
                  pppppplStack_188 = (long ******)0x0;
                  pppppplStack_178 = (long ******)0x0;
                  ppppppplVar25 =
                       (long *******)
                       (*(long *)(lStack_148 + 0x50) - *(long *)(lStack_148 + 0x48) >> 4);
                  FUN_10a904f5c(&pppppplStack_188,ppppppplVar25);
                  puVar24 = *(undefined8 **)(lVar35 + 0x50);
                  ppppppplVar26 = (long *******)pppppplStack_188;
                  for (puVar27 = *(undefined8 **)(lVar35 + 0x48);
                      pppppplStack_188 = (long ******)ppppppplVar26, puVar27 != puVar24;
                      puVar27 = puVar27 + 2) {
                    if (pppppplStack_180 < pppppplStack_178) {
                      lVar35 = puVar27[1];
                      pppppplVar37 = (long ******)*puVar27;
                      pppppplStack_180[1] = (long *****)puVar27[1];
                      *pppppplStack_180 = (long *****)pppppplVar37;
                      if (lVar35 != 0) {
                        plVar41 = (long *)(lVar35 + 0x10);
                        do {
                          cVar16 = '\x01';
                          bVar20 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                          if (bVar20) {
                            *plVar41 = *plVar41 + 1;
                            cVar16 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar16 != '\0');
                      }
                      ppppppplVar44 = (long *******)(pppppplStack_180 + 2);
                    }
                    else {
                      lVar35 = (long)pppppplStack_180 - (long)ppppppplVar26;
                      uVar42 = (lVar35 >> 4) + 1;
                      if (uVar42 >> 0x3c != 0) {
                        FUN_10a34d61c();
                        goto LAB_10a907c3c;
                      }
                      uVar38 = (long)pppppplStack_178 - (long)ppppppplVar26 >> 3;
                      if (uVar38 <= uVar42) {
                        uVar38 = uVar42;
                      }
                      if (0x7fffffffffffffef < (ulong)((long)pppppplStack_178 - (long)ppppppplVar26)
                         ) {
                        uVar38 = 0xfffffffffffffff;
                      }
                      pppppplStack_100 = (long ******)&pppppplStack_188;
                      ppppppplVar26 = &pppppplStack_188;
                      FUN_10a34d630();
                      puVar31 = (undefined8 *)((long)ppppppplVar26 + lVar35);
                      lVar35 = puVar27[1];
                      uVar40 = *puVar27;
                      puVar31[1] = puVar27[1];
                      *puVar31 = uVar40;
                      if (lVar35 != 0) {
                        plVar41 = (long *)(lVar35 + 0x10);
                        do {
                          cVar16 = '\x01';
                          bVar20 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                          if (bVar20) {
                            *plVar41 = *plVar41 + 1;
                            cVar16 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar16 != '\0');
                      }
                      ppppppplVar44 = (long *******)(puVar31 + 2);
                      ppppppplVar45 =
                           (long *******)
                           ((long)puVar31 - ((long)pppppplStack_180 - (long)pppppplStack_188));
                      ppppppplVar25 = (long *******)pppppplStack_188;
                      _memcpy(ppppppplVar45);
                      pppppplStack_110 = pppppplStack_188;
                      pppppplStack_108 = pppppplStack_178;
                      uStack_120 = SUB81(pppppplStack_188,0);
                      uStack_11f = (undefined5)((ulong)pppppplStack_188 >> 8);
                      uStack_11a = (undefined2)((ulong)pppppplStack_188 >> 0x30);
                      uStack_118 = SUB86(pppppplStack_188,0);
                      pppppplStack_188 = (long ******)ppppppplVar45;
                      pppppplStack_180 = (long ******)ppppppplVar44;
                      pppppplStack_178 = (long ******)(ppppppplVar26 + uVar38 * 2);
                      uStack_112 = uStack_11a;
                      FUN_10a35a1bc(&uStack_120);
                    }
                    ppppppplVar26 = (long *******)pppppplStack_188;
                    pppppplStack_180 = (long ******)ppppppplVar44;
                  }
                  if ((long *******)(*plVar1 + 0x50) != &pppppplStack_188) {
                    FUN_10a34d2ec();
                    ppppppplVar25 = ppppppplVar26;
                  }
                  uStack_120 = SUB81(&pppppplStack_188,0);
                  uStack_11f = (undefined5)((ulong)&pppppplStack_188 >> 8);
                  uStack_11a = (undefined2)((ulong)&pppppplStack_188 >> 0x30);
                  FUN_10a34c804(&uStack_120);
                  plStack_1c8 = (long *)param_1[0xc3];
                  plStack_1c0 = (long *)param_1[0xc4];
                  plVar41 = plStack_1c8;
                  if (plStack_1c0 != (long *)0x0) {
                    plVar41 = plStack_1c0 + 1;
                    do {
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                      if (bVar20) {
                        *plVar41 = *plVar41 + 1;
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    plVar41 = (long *)*plVar1;
                  }
                  (**(code **)(*plVar41 + 0x38))();
                  FUN_10a90876c(&uStack_120,&plStack_1c8,plVar41,ppppppplVar25);
                  if (*(char *)((long)param_1 + 0x63f) < '\0') {
                    __ZdlPv(*plVar2);
                  }
                  pppppplVar36 = pppppplStack_100;
                  pppppplVar37 = pppppplStack_108;
                  param_1[0xc6] = CONCAT26(uStack_112,uStack_118);
                  *plVar2 = CONCAT26(uStack_11a,CONCAT51(uStack_11f,uStack_120));
                  param_1[199] = (long)pppppplStack_110;
                  pppppplStack_110 = (long ******)((ulong)pppppplStack_110 & 0xffffffffffffff);
                  uStack_120 = 0;
                  pppppplStack_108 = (long ******)0x0;
                  pppppplStack_100 = (long ******)0x0;
                  lVar35 = param_1[0xc9];
                  param_1[0xc9] = (long)pppppplVar36;
                  param_1[200] = (long)pppppplVar37;
                  if (lVar35 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  func_0x00010a328268(param_1 + 0xca,&pppppplStack_f8);
                  pppppplVar37 = pppppplStack_f0;
                  if ((long *******)pppppplStack_f0 != (long *******)0x0) {
                    ppppppplVar25 = (long *******)(pppppplStack_f0 + 1);
                    do {
                      pppppplVar36 = *ppppppplVar25;
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                      if (bVar20) {
                        *ppppppplVar25 = (long ******)((long)pppppplVar36 + -1);
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    if (pppppplVar36 == (long ******)0x0) {
                      (*(code *)(*pppppplStack_f0)[2])(pppppplStack_f0);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                    }
                  }
                  if ((long *******)pppppplStack_100 != (long *******)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  plVar41 = plStack_1c0;
                  if (plStack_1c0 != (long *)0x0) {
                    plVar43 = plStack_1c0 + 1;
                    do {
                      lVar35 = *plVar43;
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar20) {
                        *plVar43 = lVar35 + -1;
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    if (lVar35 == 0) {
                      (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    }
                  }
                  ppppppplVar25 = (long *******)pppppplStack_170;
                  func_0x000107c2b054(&uStack_120,&UNK_10f682589);
                  puVar29 = &uStack_120;
                  FUN_10a39a09c(ppppppplVar25,puVar29,plVar2);
                  func_0x00010a0fda30();
                  FUN_10a91a250(&uStack_120,ppppppplVar25,puVar29);
                  FUN_10a908708(plVar3,&uStack_120);
                  plVar41 = (long *)CONCAT26(uStack_112,uStack_118);
                  if (plVar41 != (long *)0x0) {
                    plVar43 = plVar41 + 1;
                    do {
                      lVar35 = *plVar43;
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar20) {
                        *plVar43 = lVar35 + -1;
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    if (lVar35 == 0) {
                      (**(code **)(*plVar41 + 0x10))(plVar41);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    }
                  }
                  pppppplStack_180 = (long ******)0x0;
                  pppppplStack_188 = (long ******)0x0;
                  pppppplStack_178 = (long ******)0x0;
                  lVar35 = param_1[0x9e];
                  ppppppplVar25 =
                       (long *******)(*(long *)(lVar35 + 0xe8) - *(long *)(lVar35 + 0xe0) >> 4);
                  FUN_10a904f5c(&pppppplStack_188,ppppppplVar25);
                  puVar24 = *(undefined8 **)(lVar35 + 0xe8);
                  ppppppplVar26 = (long *******)pppppplStack_188;
                  for (puVar27 = *(undefined8 **)(lVar35 + 0xe0);
                      pppppplStack_188 = (long ******)ppppppplVar26, puVar27 != puVar24;
                      puVar27 = puVar27 + 2) {
                    if (pppppplStack_180 < pppppplStack_178) {
                      lVar35 = puVar27[1];
                      pppppplVar37 = (long ******)*puVar27;
                      pppppplStack_180[1] = (long *****)puVar27[1];
                      *pppppplStack_180 = (long *****)pppppplVar37;
                      if (lVar35 != 0) {
                        plVar41 = (long *)(lVar35 + 0x10);
                        do {
                          cVar16 = '\x01';
                          bVar20 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                          if (bVar20) {
                            *plVar41 = *plVar41 + 1;
                            cVar16 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar16 != '\0');
                      }
                      ppppppplVar44 = (long *******)(pppppplStack_180 + 2);
                    }
                    else {
                      lVar35 = (long)pppppplStack_180 - (long)ppppppplVar26;
                      uVar42 = (lVar35 >> 4) + 1;
                      if (uVar42 >> 0x3c != 0) {
                        FUN_10a34d61c();
                        goto LAB_10a907c3c;
                      }
                      uVar38 = (long)pppppplStack_178 - (long)ppppppplVar26 >> 3;
                      if (uVar38 <= uVar42) {
                        uVar38 = uVar42;
                      }
                      if (0x7fffffffffffffef < (ulong)((long)pppppplStack_178 - (long)ppppppplVar26)
                         ) {
                        uVar38 = 0xfffffffffffffff;
                      }
                      pppppplStack_100 = (long ******)&pppppplStack_188;
                      ppppppplVar26 = &pppppplStack_188;
                      FUN_10a34d630();
                      puVar31 = (undefined8 *)((long)ppppppplVar26 + lVar35);
                      lVar35 = puVar27[1];
                      uVar40 = *puVar27;
                      puVar31[1] = puVar27[1];
                      *puVar31 = uVar40;
                      if (lVar35 != 0) {
                        plVar41 = (long *)(lVar35 + 0x10);
                        do {
                          cVar16 = '\x01';
                          bVar20 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                          if (bVar20) {
                            *plVar41 = *plVar41 + 1;
                            cVar16 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar16 != '\0');
                      }
                      ppppppplVar44 = (long *******)(puVar31 + 2);
                      ppppppplVar45 =
                           (long *******)
                           ((long)puVar31 - ((long)pppppplStack_180 - (long)pppppplStack_188));
                      ppppppplVar25 = (long *******)pppppplStack_188;
                      _memcpy(ppppppplVar45);
                      pppppplStack_110 = pppppplStack_188;
                      pppppplStack_108 = pppppplStack_178;
                      uStack_120 = SUB81(pppppplStack_188,0);
                      uStack_11f = (undefined5)((ulong)pppppplStack_188 >> 8);
                      uStack_11a = (undefined2)((ulong)pppppplStack_188 >> 0x30);
                      uStack_118 = SUB86(pppppplStack_188,0);
                      pppppplStack_188 = (long ******)ppppppplVar45;
                      pppppplStack_180 = (long ******)ppppppplVar44;
                      pppppplStack_178 = (long ******)(ppppppplVar26 + uVar38 * 2);
                      uStack_112 = uStack_11a;
                      FUN_10a35a1bc(&uStack_120);
                    }
                    ppppppplVar26 = (long *******)pppppplStack_188;
                    pppppplStack_180 = (long ******)ppppppplVar44;
                  }
                  if ((long *******)(*plVar3 + 0x50) != &pppppplStack_188) {
                    FUN_10a34d2ec();
                    ppppppplVar25 = ppppppplVar26;
                  }
                  uStack_120 = SUB81(&pppppplStack_188,0);
                  uStack_11f = (undefined5)((ulong)&pppppplStack_188 >> 8);
                  uStack_11a = (undefined2)((ulong)&pppppplStack_188 >> 0x30);
                  FUN_10a34c804(&uStack_120);
                  plStack_1d8 = (long *)param_1[0xcd];
                  plStack_1e0 = (long *)param_1[0xcc];
                  plVar41 = plStack_1e0;
                  if (param_1[0xcd] != 0) {
                    plVar41 = (long *)(param_1[0xcd] + 8);
                    do {
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                      if (bVar20) {
                        *plVar41 = *plVar41 + 1;
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    plVar41 = (long *)*plVar3;
                  }
                  (**(code **)(*plVar41 + 0x38))();
                  FUN_10a90876c(&uStack_120,&plStack_1e0,plVar41,ppppppplVar25);
                  if (*(char *)((long)param_1 + 0x687) < '\0') {
                    __ZdlPv(*plVar4);
                  }
                  pppppplVar36 = pppppplStack_100;
                  pppppplVar37 = pppppplStack_108;
                  param_1[0xcf] = CONCAT26(uStack_112,uStack_118);
                  *plVar4 = CONCAT26(uStack_11a,CONCAT51(uStack_11f,uStack_120));
                  param_1[0xd0] = (long)pppppplStack_110;
                  pppppplStack_110 = (long ******)((ulong)pppppplStack_110 & 0xffffffffffffff);
                  uStack_120 = 0;
                  pppppplStack_108 = (long ******)0x0;
                  pppppplStack_100 = (long ******)0x0;
                  lVar35 = param_1[0xd2];
                  param_1[0xd2] = (long)pppppplVar36;
                  param_1[0xd1] = (long)pppppplVar37;
                  if (lVar35 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  func_0x00010a328268(param_1 + 0xd3,&pppppplStack_f8);
                  pppppplVar37 = pppppplStack_f0;
                  if ((long *******)pppppplStack_f0 != (long *******)0x0) {
                    ppppppplVar25 = (long *******)(pppppplStack_f0 + 1);
                    do {
                      pppppplVar36 = *ppppppplVar25;
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                      if (bVar20) {
                        *ppppppplVar25 = (long ******)((long)pppppplVar36 + -1);
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    if (pppppplVar36 == (long ******)0x0) {
                      (*(code *)(*pppppplStack_f0)[2])(pppppplStack_f0);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                    }
                  }
                  if (pppppplStack_100 != (long ******)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  plVar41 = plStack_1d8;
                  if (plStack_1d8 != (long *)0x0) {
                    plVar43 = plStack_1d8 + 1;
                    do {
                      lVar35 = *plVar43;
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar20) {
                        *plVar43 = lVar35 + -1;
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    if (lVar35 == 0) {
                      (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    }
                  }
                  ppppppplVar25 = (long *******)pppppplStack_170;
                  func_0x000107c2b054(&uStack_120,&UNK_10f682599);
                  puVar29 = &uStack_120;
                  FUN_10a39a09c(ppppppplVar25,puVar29,plVar4);
                  func_0x00010a0fda30();
                  puVar27 = (undefined8 *)0x80;
                  __Znwm();
                  puVar27[1] = 0;
                  puVar27[2] = 0;
                  *puVar27 = &PTR_FUN_110bddf98;
                  *(undefined1 *)(puVar27 + 4) = 0;
                  puVar27[7] = 0;
                  puVar27[6] = 0;
                  puVar27[9] = 0;
                  puVar27[8] = 0;
                  puVar27[0xc] = puVar29;
                  puVar27[0xd] = 0;
                  puVar27[0xe] = 0;
                  puVar27[0xf] = 0;
                  puVar24 = puVar27 + 3;
                  *puVar24 = &PTR_DAT_110bdade8;
                  puVar27[5] = &PTR_DAT_110bdae70;
                  puVar27[10] = &PTR_FUN_110bdaec8;
                  puVar27[0xb] = ppppppplVar25;
                  uStack_120 = SUB81(puVar24,0);
                  uStack_11f = (undefined5)((ulong)puVar24 >> 8);
                  uStack_11a = (undefined2)((ulong)puVar24 >> 0x30);
                  uStack_118 = SUB86(puVar27,0);
                  uStack_112 = (undefined2)((ulong)puVar27 >> 0x30);
                  FUN_10a494be0(&uStack_120);
                  lVar17 = CONCAT26(uStack_112,uStack_118);
                  lVar35 = CONCAT26(uStack_11a,CONCAT51(uStack_11f,uStack_120));
                  uStack_120 = 0;
                  uStack_11f = 0;
                  uStack_11a = 0;
                  uStack_118 = 0;
                  uStack_112 = 0;
                  plVar41 = (long *)param_1[0xd6];
                  param_1[0xd6] = lVar17;
                  param_1[0xd5] = lVar35;
                  if (plVar41 != (long *)0x0) {
                    plVar43 = plVar41 + 1;
                    do {
                      lVar35 = *plVar43;
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar20) {
                        *plVar43 = lVar35 + -1;
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    if (lVar35 == 0) {
                      (**(code **)(*plVar41 + 0x10))(plVar41);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    }
                  }
                  plVar41 = (long *)CONCAT26(uStack_112,uStack_118);
                  if (plVar41 != (long *)0x0) {
                    plVar43 = plVar41 + 1;
                    do {
                      lVar35 = *plVar43;
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar20) {
                        *plVar43 = lVar35 + -1;
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    if (lVar35 == 0) {
                      (**(code **)(*plVar41 + 0x10))(plVar41);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    }
                  }
                  lVar35 = lStack_148;
                  uStack_120 = 0;
                  uStack_11f = 0;
                  uStack_11a = 0;
                  uStack_118 = 0;
                  uStack_112 = 0;
                  pppppplStack_110 = (long ******)0x0;
                  puVar30 = (undefined4 *)
                            (*(long *)(lStack_148 + 0x50) - *(long *)(lStack_148 + 0x48) >> 4);
                  func_0x000107c27e9c(&uStack_120,puVar30);
                  if (*(long *)(lVar35 + 0x50) != *(long *)(lVar35 + 0x48)) {
                    uVar42 = 0;
                    do {
                      FUN_10a942378(&pppppplStack_188,lStack_148,uVar42);
                      FUN_10a904d90(&pppppplStack_200,param_1,ppppppplVar13,&pppppplStack_188);
                      uStack_204 = SUB84(pppppplStack_1f8,0);
                      puVar30 = &uStack_204;
                      FUN_109febd04(&uStack_120,puVar30);
                      if ((long)pppppplStack_178 < 0) {
                        __ZdlPv(pppppplStack_188);
                      }
                      uVar42 = uVar42 + 1;
                    } while (uVar42 < (ulong)(*(long *)(lVar35 + 0x50) - *(long *)(lVar35 + 0x48) >>
                                             4));
                  }
                  if ((undefined1 *)(param_1[0xd5] + 0x50) != &uStack_120) {
                    puVar30 = (undefined4 *)CONCAT26(uStack_11a,CONCAT51(uStack_11f,uStack_120));
                    FUN_10a0ea4a0();
                  }
                  if (CONCAT26(uStack_11a,CONCAT51(uStack_11f,uStack_120)) != 0) {
                    uStack_112 = uStack_11a;
                    uStack_118 = CONCAT51(uStack_11f,uStack_120);
                    __ZdlPv();
                  }
                  pppppplVar36 = (long ******)param_1[0xd5];
                  plVar41 = (long *)param_1[0xd6];
                  pppppplVar37 = pppppplVar36;
                  if (plVar41 != (long *)0x0) {
                    plVar43 = plVar41 + 1;
                    do {
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar20) {
                        *plVar43 = *plVar43 + 1;
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    pppppplVar37 = (long ******)param_1[0xd5];
                  }
                  ppppplStack_218 = (long *****)pppppplVar36;
                  plStack_210 = plVar41;
                  (*(code *)(*pppppplVar37)[7])();
                  uStack_118 = 0;
                  uStack_112 = 0;
                  uStack_120 = 0;
                  uStack_11f = 0;
                  uStack_11a = 0;
                  pppppplStack_108 = (long ******)0x0;
                  pppppplStack_110 = (long ******)0x0;
                  pppppplStack_f8 = (long ******)0x0;
                  pppppplStack_100 = (long ******)0x0;
                  pppppplStack_f0 = (long ******)0x0;
                  func_0x000107c2c4d8(&uStack_120,pppppplVar37,puVar30);
                  if (plVar41 != (long *)0x0) {
                    plVar43 = plVar41 + 2;
                    do {
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar20) {
                        *plVar43 = *plVar43 + 1;
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                  }
                  bVar20 = pppppplStack_100 != (long ******)0x0;
                  pppppplStack_108 = pppppplVar36;
                  pppppplStack_100 = (long ******)plVar41;
                  if (bVar20) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  pppppplVar28 = pppppplVar36 + 2;
                  (*(code *)(*pppppplVar28)[3])();
                  pppppplVar37 = pppppplStack_f0;
                  pppppplVar18 = pppppplStack_f0;
                  if (((ulong)pppppplVar28 & 1) == 0) {
                    if (plVar41 != (long *)0x0) {
                      plVar43 = plVar41 + 1;
                      do {
                        cVar16 = '\x01';
                        bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                        if (bVar20) {
                          *plVar43 = *plVar43 + 1;
                          cVar16 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar16 != '\0');
                    }
                    pppppplStack_f8 = pppppplVar36;
                    pppppplVar18 = (long ******)plVar41;
                    if (pppppplStack_f0 != (long ******)0x0) {
                      plVar43 = (long *)(pppppplStack_f0 + 1);
                      do {
                        lVar35 = *plVar43;
                        cVar16 = '\x01';
                        bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                        if (bVar20) {
                          *plVar43 = lVar35 + -1;
                          cVar16 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar16 != '\0');
                      if (lVar35 == 0) {
                        lVar35 = (long)*pppppplStack_f0;
                        pppppplStack_f0 = (long ******)plVar41;
                        (**(code **)(lVar35 + 0x10))(pppppplVar37);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                        pppppplVar18 = pppppplStack_f0;
                      }
                    }
                  }
                  pppppplStack_f0 = pppppplVar18;
                  if (*(char *)((long)param_1 + 0x6cf) < '\0') {
                    __ZdlPv(*plVar5);
                  }
                  pppppplVar36 = pppppplStack_100;
                  pppppplVar37 = pppppplStack_108;
                  param_1[0xd8] = CONCAT26(uStack_112,uStack_118);
                  *plVar5 = CONCAT26(uStack_11a,CONCAT51(uStack_11f,uStack_120));
                  param_1[0xd9] = (long)pppppplStack_110;
                  pppppplStack_110 = (long ******)((ulong)pppppplStack_110 & 0xffffffffffffff);
                  uStack_120 = 0;
                  pppppplStack_108 = (long ******)0x0;
                  pppppplStack_100 = (long ******)0x0;
                  lVar35 = param_1[0xdb];
                  param_1[0xdb] = (long)pppppplVar36;
                  param_1[0xda] = (long)pppppplVar37;
                  if (lVar35 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  func_0x00010a328268(param_1 + 0xdc,&pppppplStack_f8);
                  pppppplVar37 = pppppplStack_f0;
                  if (pppppplStack_f0 != (long ******)0x0) {
                    plVar41 = (long *)(pppppplStack_f0 + 1);
                    do {
                      lVar35 = *plVar41;
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                      if (bVar20) {
                        *plVar41 = lVar35 + -1;
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    if (lVar35 == 0) {
                      (**(code **)((long)*pppppplStack_f0 + 0x10))(pppppplStack_f0);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                    }
                  }
                  if (pppppplStack_100 != (long ******)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  plVar41 = plStack_210;
                  if (plStack_210 != (long *)0x0) {
                    plVar43 = plStack_210 + 1;
                    do {
                      lVar35 = *plVar43;
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar20) {
                        *plVar43 = lVar35 + -1;
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    if (lVar35 == 0) {
                      (**(code **)(*plStack_210 + 0x10))(plStack_210);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    }
                  }
                  ppppppplVar25 = (long *******)pppppplStack_170;
                  func_0x000107c2b054(&uStack_120,&UNK_10f6825a7);
                  puVar29 = &uStack_120;
                  FUN_10a39a09c(ppppppplVar25,puVar29,plVar5);
                  func_0x00010a0fda30();
                  puVar27 = (undefined8 *)0x80;
                  __Znwm();
                  puVar27[1] = 0;
                  puVar27[2] = 0;
                  *puVar27 = &PTR_FUN_110bddfe8;
                  *(undefined1 *)(puVar27 + 4) = 0;
                  puVar27[7] = 0;
                  puVar27[6] = 0;
                  puVar27[9] = 0;
                  puVar27[8] = 0;
                  puVar27[0xc] = puVar29;
                  puVar27[0xd] = 0;
                  puVar27[0xe] = 0;
                  puVar27[0xf] = 0;
                  puVar24 = puVar27 + 3;
                  *puVar24 = &PTR_DAT_110bdaee8;
                  puVar27[5] = &PTR_DAT_110bdaf70;
                  puVar27[10] = &PTR_FUN_110bdafc8;
                  puVar27[0xb] = ppppppplVar25;
                  uStack_120 = SUB81(puVar24,0);
                  uStack_11f = (undefined5)((ulong)puVar24 >> 8);
                  uStack_11a = (undefined2)((ulong)puVar24 >> 0x30);
                  uStack_118 = SUB86(puVar27,0);
                  uStack_112 = (undefined2)((ulong)puVar27 >> 0x30);
                  FUN_10a494d28(&uStack_120);
                  lVar17 = CONCAT26(uStack_112,uStack_118);
                  lVar35 = CONCAT26(uStack_11a,CONCAT51(uStack_11f,uStack_120));
                  uStack_120 = 0;
                  uStack_11f = 0;
                  uStack_11a = 0;
                  uStack_118 = 0;
                  uStack_112 = 0;
                  plVar41 = (long *)param_1[0xdf];
                  param_1[0xdf] = lVar17;
                  param_1[0xde] = lVar35;
                  if (plVar41 != (long *)0x0) {
                    plVar43 = plVar41 + 1;
                    do {
                      lVar35 = *plVar43;
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar20) {
                        *plVar43 = lVar35 + -1;
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    if (lVar35 == 0) {
                      (**(code **)(*plVar41 + 0x10))(plVar41);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    }
                  }
                  plVar41 = (long *)CONCAT26(uStack_112,uStack_118);
                  if (plVar41 != (long *)0x0) {
                    plVar43 = plVar41 + 1;
                    do {
                      lVar35 = *plVar43;
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar20) {
                        *plVar43 = lVar35 + -1;
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    if (lVar35 == 0) {
                      (**(code **)(*plVar41 + 0x10))(plVar41);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    }
                  }
                  lVar35 = lStack_148;
                  uStack_120 = 0;
                  uStack_11f = 0;
                  uStack_11a = 0;
                  uStack_118 = 0;
                  uStack_112 = 0;
                  pppppplStack_110 = (long ******)0x0;
                  func_0x000104becb10(&uStack_120,
                                      *(long *)(lStack_148 + 0x50) - *(long *)(lStack_148 + 0x48) >>
                                      4);
                  if (*(long *)(lVar35 + 0x50) != *(long *)(lVar35 + 0x48)) {
                    uVar42 = 0;
                    do {
                      FUN_10a942378(&pppppplStack_188,lStack_148,uVar42);
                      FUN_10a904d90(&pppppplStack_200,param_1,ppppppplVar13,&pppppplStack_188);
                      func_0x0001078db3d4(&uStack_120,&pppppplStack_200);
                      if ((long)pppppplStack_178 < 0) {
                        __ZdlPv(pppppplStack_188);
                      }
                      uVar42 = uVar42 + 1;
                    } while (uVar42 < (ulong)(*(long *)(lVar35 + 0x50) - *(long *)(lVar35 + 0x48) >>
                                             4));
                  }
                  puVar29 = &uStack_120;
                  func_0x000108b0402c(param_1[0xde] + 0x50,puVar29);
                  if (CONCAT26(uStack_11a,CONCAT51(uStack_11f,uStack_120)) != 0) {
                    __ZdlPv();
                  }
                  ppppppplVar26 = (long *******)param_1[0xde];
                  ppppppplVar44 = (long *******)param_1[0xdf];
                  ppppppplVar25 = ppppppplVar26;
                  if (ppppppplVar44 != (long *******)0x0) {
                    ppppppplVar25 = ppppppplVar44 + 1;
                    do {
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                      if (bVar20) {
                        *ppppppplVar25 = (long ******)((long)*ppppppplVar25 + 1);
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    ppppppplVar25 = (long *******)param_1[0xde];
                  }
                  pppppplStack_228 = (long ******)ppppppplVar26;
                  pppppplStack_220 = (long ******)ppppppplVar44;
                  (*(code *)(*ppppppplVar25)[7])();
                  uStack_118 = 0;
                  uStack_112 = 0;
                  uStack_120 = 0;
                  uStack_11f = 0;
                  uStack_11a = 0;
                  pppppplStack_108 = (long ******)0x0;
                  pppppplStack_110 = (long ******)0x0;
                  pppppplStack_f8 = (long ******)0x0;
                  pppppplStack_100 = (long ******)0x0;
                  pppppplStack_f0 = (long ******)0x0;
                  func_0x000107c2c4d8(&uStack_120,ppppppplVar25,puVar29);
                  if (ppppppplVar44 != (long *******)0x0) {
                    ppppppplVar25 = ppppppplVar44 + 2;
                    do {
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                      if (bVar20) {
                        *ppppppplVar25 = (long ******)((long)*ppppppplVar25 + 1);
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                  }
                  bVar20 = pppppplStack_100 != (long ******)0x0;
                  pppppplStack_108 = (long ******)ppppppplVar26;
                  pppppplStack_100 = (long ******)ppppppplVar44;
                  if (bVar20) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  ppppppplVar45 = ppppppplVar26 + 2;
                  (*(code *)(*ppppppplVar45)[3])();
                  pppppplVar37 = pppppplStack_f0;
                  ppppppplVar25 = (long *******)pppppplStack_f0;
                  if (((ulong)ppppppplVar45 & 1) == 0) {
                    if (ppppppplVar44 != (long *******)0x0) {
                      ppppppplVar25 = ppppppplVar44 + 1;
                      do {
                        cVar16 = '\x01';
                        bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                        if (bVar20) {
                          *ppppppplVar25 = (long ******)((long)*ppppppplVar25 + 1);
                          cVar16 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar16 != '\0');
                    }
                    pppppplStack_f8 = (long ******)ppppppplVar26;
                    ppppppplVar25 = ppppppplVar44;
                    if ((long *******)pppppplStack_f0 != (long *******)0x0) {
                      ppppppplVar26 = (long *******)(pppppplStack_f0 + 1);
                      do {
                        pppppplVar36 = *ppppppplVar26;
                        cVar16 = '\x01';
                        bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
                        if (bVar20) {
                          *ppppppplVar26 = (long ******)((long)pppppplVar36 + -1);
                          cVar16 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar16 != '\0');
                      if (pppppplVar36 == (long ******)0x0) {
                        pppppplVar36 = (long ******)*pppppplStack_f0;
                        pppppplStack_f0 = (long ******)ppppppplVar44;
                        (*(code *)pppppplVar36[2])(pppppplVar37);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                        ppppppplVar25 = (long *******)pppppplStack_f0;
                      }
                    }
                  }
                  pppppplStack_f0 = (long ******)ppppppplVar25;
                  if (*(char *)((long)param_1 + 0x717) < '\0') {
                    __ZdlPv(*plVar6);
                  }
                  pppppplVar36 = pppppplStack_100;
                  pppppplVar37 = pppppplStack_108;
                  param_1[0xe1] = CONCAT26(uStack_112,uStack_118);
                  *plVar6 = CONCAT26(uStack_11a,CONCAT51(uStack_11f,uStack_120));
                  param_1[0xe2] = (long)pppppplStack_110;
                  pppppplStack_110 = (long ******)((ulong)pppppplStack_110 & 0xffffffffffffff);
                  uStack_120 = 0;
                  pppppplStack_108 = (long ******)0x0;
                  pppppplStack_100 = (long ******)0x0;
                  lVar35 = param_1[0xe4];
                  param_1[0xe4] = (long)pppppplVar36;
                  param_1[0xe3] = (long)pppppplVar37;
                  if (lVar35 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  func_0x00010a328268(param_1 + 0xe5,&pppppplStack_f8);
                  pppppplVar37 = pppppplStack_f0;
                  if ((long *******)pppppplStack_f0 != (long *******)0x0) {
                    ppppppplVar25 = (long *******)(pppppplStack_f0 + 1);
                    do {
                      pppppplVar36 = *ppppppplVar25;
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                      if (bVar20) {
                        *ppppppplVar25 = (long ******)((long)pppppplVar36 + -1);
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    if (pppppplVar36 == (long ******)0x0) {
                      (*(code *)(*pppppplStack_f0)[2])(pppppplStack_f0);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                    }
                  }
                  if ((long *******)pppppplStack_100 != (long *******)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  pppppplVar37 = pppppplStack_220;
                  if ((long *******)pppppplStack_220 != (long *******)0x0) {
                    ppppppplVar25 = (long *******)(pppppplStack_220 + 1);
                    do {
                      pppppplVar36 = *ppppppplVar25;
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                      if (bVar20) {
                        *ppppppplVar25 = (long ******)((long)pppppplVar36 + -1);
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    if (pppppplVar36 == (long ******)0x0) {
                      (*(code *)(*pppppplStack_220)[2])(pppppplStack_220);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                    }
                  }
                  pppppplVar37 = pppppplStack_170;
                  func_0x000107c2b054(&uStack_120,&UNK_10f6825b5);
                  FUN_10a39a09c(pppppplVar37,&uStack_120,plVar6);
                }
                (*(code *)(*pppppplStack_170)[0xd])(pppppplStack_170,1);
                uVar40 = 1;
                lVar35 = lVar39;
                func_0x00010a3e4590(lVar39,1);
                func_0x00010a0fda30();
                func_0x00010a91a2e0(&uStack_120,lVar35,uVar40);
                puVar29 = &uStack_120;
                plVar43 = param_1 + 0xe7;
                FUN_10a908864();
                plVar41 = (long *)CONCAT26(uStack_112,uStack_118);
                if (plVar41 != (long *)0x0) {
                  plVar14 = plVar41 + 1;
                  do {
                    lVar35 = *plVar14;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar20) {
                      *plVar14 = lVar35 + -1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (lVar35 == 0) {
                    (**(code **)(*plVar41 + 0x10))(plVar41);
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                    plVar43 = plVar41;
                  }
                }
                func_0x00010a0fda30();
                puVar27 = (undefined8 *)0xa8;
                __Znwm();
                puVar27[0xe] = 0;
                puVar27[0xd] = 0x3f800000;
                puVar27[0x10] = 0;
                puVar27[0xf] = 0x3f80000000000000;
                puVar27[0x12] = 0x3f800000;
                puVar27[0x11] = 0;
                puVar27[1] = 0;
                puVar27[2] = 0;
                *puVar27 = &PTR_DAT_110bdde08;
                *(undefined1 *)(puVar27 + 4) = 0;
                puVar27[7] = 0;
                puVar27[6] = 0;
                puVar24 = puVar27 + 8;
                puVar27[9] = 0;
                *puVar24 = 0;
                puVar27[0xb] = plVar43;
                puVar27[0xc] = puVar29;
                puVar27[0x14] = 0x3f80000000000000;
                puVar27[0x13] = 0;
                puVar31 = puVar27 + 3;
                *puVar31 = &PTR_FUN_110bda668;
                puVar27[5] = &PTR_FUN_110bda6f0;
                puVar27[10] = &PTR_DAT_110bda748;
                uStack_120 = SUB81(puVar31,0);
                uStack_11f = (undefined5)((ulong)puVar31 >> 8);
                uStack_11a = (undefined2)((ulong)puVar31 >> 0x30);
                uStack_118 = SUB86(puVar27,0);
                uStack_112 = (undefined2)((ulong)puVar27 >> 0x30);
                plVar41 = (long *)&uStack_120;
                FUN_10a4945bc(plVar41);
                lVar17 = CONCAT26(uStack_112,uStack_118);
                lVar35 = CONCAT26(uStack_11a,CONCAT51(uStack_11f,uStack_120));
                uStack_120 = 0;
                uStack_11f = 0;
                uStack_11a = 0;
                uStack_118 = 0;
                uStack_112 = 0;
                plVar43 = (long *)param_1[0xea];
                param_1[0xea] = lVar17;
                param_1[0xe9] = lVar35;
                if (plVar43 != (long *)0x0) {
                  plVar14 = plVar43 + 1;
                  do {
                    lVar35 = *plVar14;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar20) {
                      *plVar14 = lVar35 + -1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (lVar35 == 0) {
                    (**(code **)(*plVar43 + 0x10))(plVar43);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar43);
                    plVar41 = plVar43;
                  }
                }
                plVar43 = (long *)CONCAT26(uStack_112,uStack_118);
                if (plVar43 != (long *)0x0) {
                  plVar14 = plVar43 + 1;
                  do {
                    lVar35 = *plVar14;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar20) {
                      *plVar14 = lVar35 + -1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (lVar35 == 0) {
                    (**(code **)(*plVar43 + 0x10))(plVar43);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar43);
                    plVar41 = plVar43;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a2e0(&uStack_120,plVar41,puVar24);
                puVar29 = &uStack_120;
                plVar43 = plVar7;
                FUN_10a908864(plVar7,puVar29);
                plVar41 = (long *)CONCAT26(uStack_112,uStack_118);
                if (plVar41 != (long *)0x0) {
                  plVar14 = plVar41 + 1;
                  do {
                    lVar35 = *plVar14;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar20) {
                      *plVar14 = lVar35 + -1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (lVar35 == 0) {
                    (**(code **)(*plVar41 + 0x10))(plVar41);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    plVar43 = plVar41;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a2e0(&uStack_120,plVar43,puVar29);
                puVar29 = &uStack_120;
                plVar43 = plVar8;
                FUN_10a908864(plVar8,puVar29);
                plVar41 = (long *)CONCAT26(uStack_112,uStack_118);
                if (plVar41 != (long *)0x0) {
                  plVar14 = plVar41 + 1;
                  do {
                    lVar35 = *plVar14;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar20) {
                      *plVar14 = lVar35 + -1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (lVar35 == 0) {
                    (**(code **)(*plVar41 + 0x10))(plVar41);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    plVar43 = plVar41;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a368(&uStack_120,plVar43,puVar29);
                puVar29 = &uStack_120;
                plVar43 = plVar9;
                func_0x00010a9088c8(plVar9,puVar29);
                plVar41 = (long *)CONCAT26(uStack_112,uStack_118);
                if (plVar41 != (long *)0x0) {
                  plVar14 = plVar41 + 1;
                  do {
                    lVar35 = *plVar14;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar20) {
                      *plVar14 = lVar35 + -1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (lVar35 == 0) {
                    (**(code **)(*plVar41 + 0x10))(plVar41);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    plVar43 = plVar41;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a2e0(&uStack_120,plVar43,puVar29);
                puVar29 = &uStack_120;
                plVar43 = plVar10;
                FUN_10a908864(plVar10,puVar29);
                plVar41 = (long *)CONCAT26(uStack_112,uStack_118);
                if (plVar41 != (long *)0x0) {
                  plVar14 = plVar41 + 1;
                  do {
                    lVar35 = *plVar14;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar20) {
                      *plVar14 = lVar35 + -1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (lVar35 == 0) {
                    (**(code **)(*plVar41 + 0x10))(plVar41);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    plVar43 = plVar41;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a368(&uStack_120,plVar43,puVar29);
                puVar29 = &uStack_120;
                plVar43 = plVar11;
                func_0x00010a9088c8(plVar11,puVar29);
                plVar41 = (long *)CONCAT26(uStack_112,uStack_118);
                if (plVar41 != (long *)0x0) {
                  plVar14 = plVar41 + 1;
                  do {
                    lVar35 = *plVar14;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar20) {
                      *plVar14 = lVar35 + -1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (lVar35 == 0) {
                    (**(code **)(*plVar41 + 0x10))(plVar41);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    plVar43 = plVar41;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a3f0(&uStack_120,plVar43,puVar29);
                puVar29 = &uStack_120;
                plVar43 = plVar12;
                func_0x00010a90892c(plVar12,puVar29);
                plVar41 = (long *)CONCAT26(uStack_112,uStack_118);
                if (plVar41 != (long *)0x0) {
                  plVar14 = plVar41 + 1;
                  do {
                    lVar35 = *plVar14;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar20) {
                      *plVar14 = lVar35 + -1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (lVar35 == 0) {
                    (**(code **)(*plVar41 + 0x10))(plVar41);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    plVar43 = plVar41;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a3f0(&uStack_120,plVar43,puVar29);
                puVar29 = &uStack_120;
                func_0x00010a90892c(param_1 + 0xf7,puVar29);
                plVar41 = (long *)CONCAT26(uStack_112,uStack_118);
                if (plVar41 != (long *)0x0) {
                  plVar43 = plVar41 + 1;
                  do {
                    lVar35 = *plVar43;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                    if (bVar20) {
                      *plVar43 = lVar35 + -1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (lVar35 == 0) {
                    (**(code **)(*plVar41 + 0x10))(plVar41);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                  }
                }
                plStack_258 = (long *)param_1[0xe7];
                plStack_250 = (long *)param_1[0xe8];
                plVar41 = plStack_258;
                if (plStack_250 != (long *)0x0) {
                  plVar41 = plStack_250 + 1;
                  do {
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                    if (bVar20) {
                      *plVar41 = *plVar41 + 1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  plVar41 = (long *)param_1[0xe7];
                }
                (**(code **)(*plVar41 + 0x38))();
                FUN_10a908990(&uStack_120,&plStack_258,plVar41,puVar29);
                if (*(char *)((long)param_1 + 0x7df) < '\0') {
                  __ZdlPv(param_1[0xf9]);
                }
                pppppplVar36 = pppppplStack_100;
                pppppplVar37 = pppppplStack_108;
                param_1[0xfa] = CONCAT26(uStack_112,uStack_118);
                param_1[0xf9] = CONCAT26(uStack_11a,CONCAT51(uStack_11f,uStack_120));
                param_1[0xfb] = (long)pppppplStack_110;
                pppppplStack_110 = (long ******)((ulong)pppppplStack_110 & 0xffffffffffffff);
                uStack_120 = 0;
                pppppplStack_108 = (long ******)0x0;
                pppppplStack_100 = (long ******)0x0;
                lVar35 = param_1[0xfd];
                param_1[0xfd] = (long)pppppplVar36;
                param_1[0xfc] = (long)pppppplVar37;
                if (lVar35 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                ppppppplVar25 = &pppppplStack_f8;
                func_0x00010a328268(param_1 + 0xfe,ppppppplVar25);
                pppppplVar37 = pppppplStack_f0;
                if ((long *******)pppppplStack_f0 != (long *******)0x0) {
                  ppppppplVar26 = (long *******)(pppppplStack_f0 + 1);
                  do {
                    pppppplVar36 = *ppppppplVar26;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
                    if (bVar20) {
                      *ppppppplVar26 = (long ******)((long)pppppplVar36 + -1);
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (pppppplVar36 == (long ******)0x0) {
                    (*(code *)(*pppppplStack_f0)[2])(pppppplStack_f0);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                  }
                }
                if (pppppplStack_100 != (long ******)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                plVar41 = plStack_250;
                if (plStack_250 != (long *)0x0) {
                  plVar43 = plStack_250 + 1;
                  do {
                    lVar35 = *plVar43;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                    if (bVar20) {
                      *plVar43 = lVar35 + -1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (lVar35 == 0) {
                    (**(code **)(*plStack_250 + 0x10))(plStack_250);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                  }
                }
                ppppppplVar44 = (long *******)param_1[0xe9];
                ppppppplVar45 = (long *******)param_1[0xea];
                ppppppplVar26 = ppppppplVar44;
                if (ppppppplVar45 != (long *******)0x0) {
                  ppppppplVar26 = ppppppplVar45 + 1;
                  do {
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
                    if (bVar20) {
                      *ppppppplVar26 = (long ******)((long)*ppppppplVar26 + 1);
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  ppppppplVar26 = (long *******)param_1[0xe9];
                }
                pppppplStack_268 = (long ******)ppppppplVar44;
                pppppplStack_260 = (long ******)ppppppplVar45;
                (*(code *)(*ppppppplVar26)[7])();
                uStack_118 = 0;
                uStack_112 = 0;
                uStack_120 = 0;
                uStack_11f = 0;
                uStack_11a = 0;
                pppppplStack_108 = (long ******)0x0;
                pppppplStack_110 = (long ******)0x0;
                pppppplStack_f8 = (long ******)0x0;
                pppppplStack_100 = (long ******)0x0;
                pppppplStack_f0 = (long ******)0x0;
                func_0x000107c2c4d8(&uStack_120,ppppppplVar26,ppppppplVar25);
                if (ppppppplVar45 != (long *******)0x0) {
                  ppppppplVar25 = ppppppplVar45 + 2;
                  do {
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                    if (bVar20) {
                      *ppppppplVar25 = (long ******)((long)*ppppppplVar25 + 1);
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                }
                bVar20 = pppppplStack_100 != (long ******)0x0;
                pppppplStack_108 = (long ******)ppppppplVar44;
                pppppplStack_100 = (long ******)ppppppplVar45;
                if (bVar20) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                ppppppplVar26 = ppppppplVar44 + 2;
                (*(code *)(*ppppppplVar26)[3])();
                pppppplVar37 = pppppplStack_f0;
                ppppppplVar25 = (long *******)pppppplStack_f0;
                if (((ulong)ppppppplVar26 & 1) == 0) {
                  if (ppppppplVar45 != (long *******)0x0) {
                    ppppppplVar25 = ppppppplVar45 + 1;
                    do {
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                      if (bVar20) {
                        *ppppppplVar25 = (long ******)((long)*ppppppplVar25 + 1);
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                  }
                  pppppplStack_f8 = (long ******)ppppppplVar44;
                  ppppppplVar25 = ppppppplVar45;
                  if ((long *******)pppppplStack_f0 != (long *******)0x0) {
                    ppppppplVar26 = (long *******)(pppppplStack_f0 + 1);
                    do {
                      pppppplVar36 = *ppppppplVar26;
                      cVar16 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
                      if (bVar20) {
                        *ppppppplVar26 = (long ******)((long)pppppplVar36 + -1);
                        cVar16 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar16 != '\0');
                    if (pppppplVar36 == (long ******)0x0) {
                      pppppplVar36 = (long ******)*pppppplStack_f0;
                      pppppplStack_f0 = (long ******)ppppppplVar45;
                      (*(code *)pppppplVar36[2])(pppppplVar37);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                      ppppppplVar25 = (long *******)pppppplStack_f0;
                    }
                  }
                }
                pppppplStack_f0 = (long ******)ppppppplVar25;
                if (*(char *)((long)param_1 + 0x817) < '\0') {
                  __ZdlPv(param_1[0x100]);
                }
                pppppplVar36 = pppppplStack_100;
                pppppplVar37 = pppppplStack_108;
                param_1[0x101] = CONCAT26(uStack_112,uStack_118);
                param_1[0x100] = CONCAT26(uStack_11a,CONCAT51(uStack_11f,uStack_120));
                param_1[0x102] = (long)pppppplStack_110;
                pppppplStack_110 = (long ******)((ulong)pppppplStack_110 & 0xffffffffffffff);
                uStack_120 = 0;
                pppppplStack_108 = (long ******)0x0;
                pppppplStack_100 = (long ******)0x0;
                lVar35 = param_1[0x104];
                param_1[0x104] = (long)pppppplVar36;
                param_1[0x103] = (long)pppppplVar37;
                if (lVar35 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                ppppppplVar25 = &pppppplStack_f8;
                func_0x00010a328268(param_1 + 0x105,ppppppplVar25);
                pppppplVar37 = pppppplStack_f0;
                if ((long *******)pppppplStack_f0 != (long *******)0x0) {
                  ppppppplVar26 = (long *******)(pppppplStack_f0 + 1);
                  do {
                    pppppplVar36 = *ppppppplVar26;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
                    if (bVar20) {
                      *ppppppplVar26 = (long ******)((long)pppppplVar36 + -1);
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (pppppplVar36 == (long ******)0x0) {
                    (*(code *)(*pppppplStack_f0)[2])(pppppplStack_f0);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                  }
                }
                if (pppppplStack_100 != (long ******)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                pppppplVar37 = pppppplStack_260;
                if ((long *******)pppppplStack_260 != (long *******)0x0) {
                  ppppppplVar26 = (long *******)(pppppplStack_260 + 1);
                  do {
                    pppppplVar36 = *ppppppplVar26;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
                    if (bVar20) {
                      *ppppppplVar26 = (long ******)((long)pppppplVar36 + -1);
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (pppppplVar36 == (long ******)0x0) {
                    (*(code *)(*pppppplStack_260)[2])(pppppplStack_260);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                  }
                }
                plStack_278 = (long *)param_1[0xeb];
                plStack_270 = (long *)param_1[0xec];
                plVar41 = plStack_278;
                if (plStack_270 != (long *)0x0) {
                  plVar41 = plStack_270 + 1;
                  do {
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                    if (bVar20) {
                      *plVar41 = *plVar41 + 1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  plVar41 = (long *)*plVar7;
                }
                (**(code **)(*plVar41 + 0x38))();
                FUN_10a908990(&uStack_120,&plStack_278,plVar41,ppppppplVar25);
                if (*(char *)((long)param_1 + 0x84f) < '\0') {
                  __ZdlPv(param_1[0x107]);
                }
                pppppplVar36 = pppppplStack_100;
                pppppplVar37 = pppppplStack_108;
                param_1[0x108] = CONCAT26(uStack_112,uStack_118);
                param_1[0x107] = CONCAT26(uStack_11a,CONCAT51(uStack_11f,uStack_120));
                param_1[0x109] = (long)pppppplStack_110;
                pppppplStack_110 = (long ******)((ulong)pppppplStack_110 & 0xffffffffffffff);
                uStack_120 = 0;
                pppppplStack_108 = (long ******)0x0;
                pppppplStack_100 = (long ******)0x0;
                lVar35 = param_1[0x10b];
                param_1[0x10b] = (long)pppppplVar36;
                param_1[0x10a] = (long)pppppplVar37;
                if (lVar35 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                ppppppplVar25 = &pppppplStack_f8;
                func_0x00010a328268(param_1 + 0x10c,ppppppplVar25);
                pppppplVar37 = pppppplStack_f0;
                if ((long *******)pppppplStack_f0 != (long *******)0x0) {
                  ppppppplVar26 = (long *******)(pppppplStack_f0 + 1);
                  do {
                    pppppplVar36 = *ppppppplVar26;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
                    if (bVar20) {
                      *ppppppplVar26 = (long ******)((long)pppppplVar36 + -1);
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (pppppplVar36 == (long ******)0x0) {
                    (*(code *)(*pppppplStack_f0)[2])(pppppplStack_f0);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                  }
                }
                if (pppppplStack_100 != (long ******)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                plVar41 = plStack_270;
                if (plStack_270 != (long *)0x0) {
                  plVar43 = plStack_270 + 1;
                  do {
                    lVar35 = *plVar43;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                    if (bVar20) {
                      *plVar43 = lVar35 + -1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (lVar35 == 0) {
                    (**(code **)(*plStack_270 + 0x10))(plStack_270);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                  }
                }
                plStack_288 = (long *)param_1[0xed];
                plStack_280 = (long *)param_1[0xee];
                plVar41 = plStack_288;
                if (plStack_280 != (long *)0x0) {
                  plVar41 = plStack_280 + 1;
                  do {
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                    if (bVar20) {
                      *plVar41 = *plVar41 + 1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  plVar41 = (long *)*plVar8;
                }
                (**(code **)(*plVar41 + 0x38))();
                FUN_10a908990(&uStack_120,&plStack_288,plVar41,ppppppplVar25);
                if (*(char *)((long)param_1 + 0x887) < '\0') {
                  __ZdlPv(param_1[0x10e]);
                }
                pppppplVar36 = pppppplStack_100;
                pppppplVar37 = pppppplStack_108;
                param_1[0x10f] = CONCAT26(uStack_112,uStack_118);
                param_1[0x10e] = CONCAT26(uStack_11a,CONCAT51(uStack_11f,uStack_120));
                param_1[0x110] = (long)pppppplStack_110;
                pppppplStack_110 = (long ******)((ulong)pppppplStack_110 & 0xffffffffffffff);
                uStack_120 = 0;
                pppppplStack_108 = (long ******)0x0;
                pppppplStack_100 = (long ******)0x0;
                lVar35 = param_1[0x112];
                param_1[0x112] = (long)pppppplVar36;
                param_1[0x111] = (long)pppppplVar37;
                if (lVar35 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                ppppppplVar25 = &pppppplStack_f8;
                func_0x00010a328268(param_1 + 0x113,ppppppplVar25);
                pppppplVar37 = pppppplStack_f0;
                if ((long *******)pppppplStack_f0 != (long *******)0x0) {
                  ppppppplVar26 = (long *******)(pppppplStack_f0 + 1);
                  do {
                    pppppplVar36 = *ppppppplVar26;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
                    if (bVar20) {
                      *ppppppplVar26 = (long ******)((long)pppppplVar36 + -1);
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (pppppplVar36 == (long ******)0x0) {
                    (*(code *)(*pppppplStack_f0)[2])(pppppplStack_f0);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                  }
                }
                if (pppppplStack_100 != (long ******)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                plVar41 = plStack_280;
                if (plStack_280 != (long *)0x0) {
                  plVar43 = plStack_280 + 1;
                  do {
                    lVar35 = *plVar43;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                    if (bVar20) {
                      *plVar43 = lVar35 + -1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (lVar35 == 0) {
                    (**(code **)(*plStack_280 + 0x10))(plStack_280);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                  }
                }
                plStack_298 = (long *)param_1[0xef];
                plStack_290 = (long *)param_1[0xf0];
                plVar41 = plStack_298;
                if (plStack_290 != (long *)0x0) {
                  plVar41 = plStack_290 + 1;
                  do {
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                    if (bVar20) {
                      *plVar41 = *plVar41 + 1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  plVar41 = (long *)*plVar9;
                }
                (**(code **)(*plVar41 + 0x38))();
                FUN_10a908a88(&uStack_120,&plStack_298,plVar41,ppppppplVar25);
                if (*(char *)((long)param_1 + 0x8bf) < '\0') {
                  __ZdlPv(param_1[0x115]);
                }
                pppppplVar36 = pppppplStack_100;
                pppppplVar37 = pppppplStack_108;
                param_1[0x116] = CONCAT26(uStack_112,uStack_118);
                param_1[0x115] = CONCAT26(uStack_11a,CONCAT51(uStack_11f,uStack_120));
                param_1[0x117] = (long)pppppplStack_110;
                pppppplStack_110 = (long ******)((ulong)pppppplStack_110 & 0xffffffffffffff);
                uStack_120 = 0;
                pppppplStack_108 = (long ******)0x0;
                pppppplStack_100 = (long ******)0x0;
                lVar35 = param_1[0x119];
                param_1[0x119] = (long)pppppplVar36;
                param_1[0x118] = (long)pppppplVar37;
                if (lVar35 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                ppppppplVar25 = &pppppplStack_f8;
                func_0x00010a328268(param_1 + 0x11a,ppppppplVar25);
                pppppplVar37 = pppppplStack_f0;
                if ((long *******)pppppplStack_f0 != (long *******)0x0) {
                  ppppppplVar26 = (long *******)(pppppplStack_f0 + 1);
                  do {
                    pppppplVar36 = *ppppppplVar26;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
                    if (bVar20) {
                      *ppppppplVar26 = (long ******)((long)pppppplVar36 + -1);
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (pppppplVar36 == (long ******)0x0) {
                    (*(code *)(*pppppplStack_f0)[2])(pppppplStack_f0);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                  }
                }
                if (pppppplStack_100 != (long ******)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                plVar41 = plStack_290;
                if (plStack_290 != (long *)0x0) {
                  plVar43 = plStack_290 + 1;
                  do {
                    lVar35 = *plVar43;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                    if (bVar20) {
                      *plVar43 = lVar35 + -1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (lVar35 == 0) {
                    (**(code **)(*plStack_290 + 0x10))(plStack_290);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                  }
                }
                plStack_2a8 = (long *)param_1[0xf1];
                plStack_2a0 = (long *)param_1[0xf2];
                plVar41 = plStack_2a8;
                if (plStack_2a0 != (long *)0x0) {
                  plVar41 = plStack_2a0 + 1;
                  do {
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                    if (bVar20) {
                      *plVar41 = *plVar41 + 1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  plVar41 = (long *)*plVar10;
                }
                (**(code **)(*plVar41 + 0x38))();
                FUN_10a908990(&uStack_120,&plStack_2a8,plVar41,ppppppplVar25);
                if (*(char *)((long)param_1 + 0x967) < '\0') {
                  __ZdlPv(param_1[0x12a]);
                }
                pppppplVar36 = pppppplStack_100;
                pppppplVar37 = pppppplStack_108;
                param_1[299] = CONCAT26(uStack_112,uStack_118);
                param_1[0x12a] = CONCAT26(uStack_11a,CONCAT51(uStack_11f,uStack_120));
                param_1[300] = (long)pppppplStack_110;
                pppppplStack_110 = (long ******)((ulong)pppppplStack_110 & 0xffffffffffffff);
                uStack_120 = 0;
                pppppplStack_108 = (long ******)0x0;
                pppppplStack_100 = (long ******)0x0;
                lVar35 = param_1[0x12e];
                param_1[0x12e] = (long)pppppplVar36;
                param_1[0x12d] = (long)pppppplVar37;
                if (lVar35 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                ppppppplVar25 = &pppppplStack_f8;
                func_0x00010a328268(param_1 + 0x12f,ppppppplVar25);
                pppppplVar37 = pppppplStack_f0;
                if ((long *******)pppppplStack_f0 != (long *******)0x0) {
                  ppppppplVar26 = (long *******)(pppppplStack_f0 + 1);
                  do {
                    pppppplVar36 = *ppppppplVar26;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
                    if (bVar20) {
                      *ppppppplVar26 = (long ******)((long)pppppplVar36 + -1);
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (pppppplVar36 == (long ******)0x0) {
                    (*(code *)(*pppppplStack_f0)[2])(pppppplStack_f0);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                  }
                }
                if (pppppplStack_100 != (long ******)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                plVar41 = plStack_2a0;
                if (plStack_2a0 != (long *)0x0) {
                  plVar43 = plStack_2a0 + 1;
                  do {
                    lVar35 = *plVar43;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                    if (bVar20) {
                      *plVar43 = lVar35 + -1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (lVar35 == 0) {
                    (**(code **)(*plStack_2a0 + 0x10))(plStack_2a0);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                  }
                }
                plStack_2b8 = (long *)param_1[0xf3];
                plStack_2b0 = (long *)param_1[0xf4];
                plVar41 = plStack_2b8;
                if (plStack_2b0 != (long *)0x0) {
                  plVar41 = plStack_2b0 + 1;
                  do {
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                    if (bVar20) {
                      *plVar41 = *plVar41 + 1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  plVar41 = (long *)*plVar11;
                }
                (**(code **)(*plVar41 + 0x38))();
                FUN_10a908a88(&uStack_120,&plStack_2b8,plVar41,ppppppplVar25);
                if (*(char *)((long)param_1 + 0x99f) < '\0') {
                  __ZdlPv(param_1[0x131]);
                }
                pppppplVar36 = pppppplStack_100;
                pppppplVar37 = pppppplStack_108;
                param_1[0x132] = CONCAT26(uStack_112,uStack_118);
                param_1[0x131] = CONCAT26(uStack_11a,CONCAT51(uStack_11f,uStack_120));
                param_1[0x133] = (long)pppppplStack_110;
                pppppplStack_110 = (long ******)((ulong)pppppplStack_110 & 0xffffffffffffff);
                uStack_120 = 0;
                pppppplStack_108 = (long ******)0x0;
                pppppplStack_100 = (long ******)0x0;
                lVar35 = param_1[0x135];
                param_1[0x135] = (long)pppppplVar36;
                param_1[0x134] = (long)pppppplVar37;
                if (lVar35 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                ppppppplVar25 = &pppppplStack_f8;
                func_0x00010a328268(param_1 + 0x136,ppppppplVar25);
                pppppplVar37 = pppppplStack_f0;
                if ((long *******)pppppplStack_f0 != (long *******)0x0) {
                  ppppppplVar26 = (long *******)(pppppplStack_f0 + 1);
                  do {
                    pppppplVar36 = *ppppppplVar26;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
                    if (bVar20) {
                      *ppppppplVar26 = (long ******)((long)pppppplVar36 + -1);
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (pppppplVar36 == (long ******)0x0) {
                    (*(code *)(*pppppplStack_f0)[2])(pppppplStack_f0);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                  }
                }
                if (pppppplStack_100 != (long ******)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                plVar41 = plStack_2b0;
                if (plStack_2b0 != (long *)0x0) {
                  plVar43 = plStack_2b0 + 1;
                  do {
                    lVar35 = *plVar43;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                    if (bVar20) {
                      *plVar43 = lVar35 + -1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (lVar35 == 0) {
                    (**(code **)(*plStack_2b0 + 0x10))(plStack_2b0);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                  }
                }
                plStack_2c8 = (long *)param_1[0xf5];
                plStack_2c0 = (long *)param_1[0xf6];
                plVar41 = plStack_2c8;
                if (plStack_2c0 != (long *)0x0) {
                  plVar41 = plStack_2c0 + 1;
                  do {
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                    if (bVar20) {
                      *plVar41 = *plVar41 + 1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  plVar41 = (long *)*plVar12;
                }
                (**(code **)(*plVar41 + 0x38))();
                FUN_10a908b80(&uStack_120,&plStack_2c8,plVar41,ppppppplVar25);
                if (*(char *)((long)param_1 + 0x8f7) < '\0') {
                  __ZdlPv(param_1[0x11c]);
                }
                pppppplVar36 = pppppplStack_100;
                pppppplVar37 = pppppplStack_108;
                param_1[0x11d] = CONCAT26(uStack_112,uStack_118);
                param_1[0x11c] = CONCAT26(uStack_11a,CONCAT51(uStack_11f,uStack_120));
                param_1[0x11e] = (long)pppppplStack_110;
                pppppplStack_110 = (long ******)((ulong)pppppplStack_110 & 0xffffffffffffff);
                uStack_120 = 0;
                pppppplStack_108 = (long ******)0x0;
                pppppplStack_100 = (long ******)0x0;
                lVar35 = param_1[0x120];
                param_1[0x120] = (long)pppppplVar36;
                param_1[0x11f] = (long)pppppplVar37;
                if (lVar35 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                ppppppplVar25 = &pppppplStack_f8;
                func_0x00010a328268(param_1 + 0x121,ppppppplVar25);
                pppppplVar37 = pppppplStack_f0;
                if ((long *******)pppppplStack_f0 != (long *******)0x0) {
                  ppppppplVar26 = (long *******)(pppppplStack_f0 + 1);
                  do {
                    pppppplVar36 = *ppppppplVar26;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
                    if (bVar20) {
                      *ppppppplVar26 = (long ******)((long)pppppplVar36 + -1);
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (pppppplVar36 == (long ******)0x0) {
                    (*(code *)(*pppppplStack_f0)[2])(pppppplStack_f0);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                  }
                }
                if (pppppplStack_100 != (long ******)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                plVar41 = plStack_2c0;
                if (plStack_2c0 != (long *)0x0) {
                  plVar43 = plStack_2c0 + 1;
                  do {
                    lVar35 = *plVar43;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                    if (bVar20) {
                      *plVar43 = lVar35 + -1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (lVar35 == 0) {
                    (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                  }
                }
                plStack_2d8 = (long *)param_1[0xf7];
                plStack_2d0 = (long *)param_1[0xf8];
                plVar41 = plStack_2d8;
                if (plStack_2d0 != (long *)0x0) {
                  plVar41 = plStack_2d0 + 1;
                  do {
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                    if (bVar20) {
                      *plVar41 = *plVar41 + 1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  plVar41 = (long *)param_1[0xf7];
                }
                (**(code **)(*plVar41 + 0x38))();
                FUN_10a908b80(&uStack_120,&plStack_2d8,plVar41,ppppppplVar25);
                if (*(char *)((long)param_1 + 0x92f) < '\0') {
                  __ZdlPv(param_1[0x123]);
                }
                pppppplVar36 = pppppplStack_100;
                pppppplVar37 = pppppplStack_108;
                param_1[0x124] = CONCAT26(uStack_112,uStack_118);
                param_1[0x123] = CONCAT26(uStack_11a,CONCAT51(uStack_11f,uStack_120));
                param_1[0x125] = (long)pppppplStack_110;
                pppppplStack_110 = (long ******)((ulong)pppppplStack_110 & 0xffffffffffffff);
                uStack_120 = 0;
                pppppplStack_108 = (long ******)0x0;
                pppppplStack_100 = (long ******)0x0;
                lVar35 = param_1[0x127];
                param_1[0x127] = (long)pppppplVar36;
                param_1[0x126] = (long)pppppplVar37;
                if (lVar35 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                func_0x00010a328268(param_1 + 0x128,&pppppplStack_f8);
                pppppplVar37 = pppppplStack_f0;
                if ((long *******)pppppplStack_f0 != (long *******)0x0) {
                  ppppppplVar25 = (long *******)(pppppplStack_f0 + 1);
                  do {
                    pppppplVar36 = *ppppppplVar25;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                    if (bVar20) {
                      *ppppppplVar25 = (long ******)((long)pppppplVar36 + -1);
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (pppppplVar36 == (long ******)0x0) {
                    (*(code *)(*pppppplStack_f0)[2])(pppppplStack_f0);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                  }
                }
                if ((long *******)pppppplStack_100 != (long *******)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                plVar41 = plStack_2d0;
                if (plStack_2d0 != (long *)0x0) {
                  plVar43 = plStack_2d0 + 1;
                  do {
                    lVar35 = *plVar43;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                    if (bVar20) {
                      *plVar43 = lVar35 + -1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (lVar35 == 0) {
                    (**(code **)(*plStack_2d0 + 0x10))(plStack_2d0);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                  }
                }
                if ((long *******)pppppplStack_168 != (long *******)0x0) {
                  ppppppplVar25 = (long *******)(pppppplStack_168 + 2);
                  do {
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                    if (bVar20) {
                      *ppppppplVar25 = (long ******)((long)*ppppppplVar25 + 1);
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                }
                lVar35 = param_1[0xb9];
                param_1[0xb9] = (long)pppppplStack_168;
                param_1[0xb8] = (long)pppppplStack_170;
                if (lVar35 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                func_0x00010a0d77bc(&uStack_120,lVar39);
                plVar41 = param_1 + 0xac;
                pppppplStack_188 = (long ******)ppppppplVar13;
                FUN_10a91a478(plVar41,ppppppplVar13,&pppppplStack_188);
                plVar43 = (long *)CONCAT26(uStack_112,uStack_118);
                if (plVar43 != (long *)0x0) {
                  plVar14 = plVar43 + 2;
                  do {
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar20) {
                      *plVar14 = *plVar14 + 1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                }
                lVar35 = plVar41[8];
                plVar41[8] = CONCAT26(uStack_112,uStack_118);
                plVar41[7] = CONCAT26(uStack_11a,CONCAT51(uStack_11f,uStack_120));
                if (lVar35 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv(lVar35);
                  plVar43 = (long *)CONCAT26(uStack_112,uStack_118);
                }
                if (plVar43 != (long *)0x0) {
                  plVar41 = plVar43 + 1;
                  do {
                    lVar35 = *plVar41;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                    if (bVar20) {
                      *plVar41 = lVar35 + -1;
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (lVar35 == 0) {
                    (**(code **)(*plVar43 + 0x10))(plVar43);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar43);
                  }
                }
                pppppplVar37 = pppppplStack_168;
                if ((long *******)pppppplStack_168 != (long *******)0x0) {
                  ppppppplVar13 = (long *******)(pppppplStack_168 + 1);
                  do {
                    pppppplVar36 = *ppppppplVar13;
                    cVar16 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar13,0x10);
                    if (bVar20) {
                      *ppppppplVar13 = (long ******)((long)pppppplVar36 + -1);
                      cVar16 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar16 != '\0');
                  if (pppppplVar36 == (long ******)0x0) {
                    (*(code *)(*pppppplStack_168)[2])(pppppplStack_168);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar37);
                  }
                }
              }
              plVar41 = plStack_150;
              if (plStack_150 != (long *)0x0) {
                plVar43 = plStack_150 + 1;
                do {
                  lVar35 = *plVar43;
                  cVar16 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                  if (bVar20) {
                    *plVar43 = lVar35 + -1;
                    cVar16 = ExclusiveMonitorsStatus();
                  }
                } while (cVar16 != '\0');
                if (lVar35 == 0) {
                  (**(code **)(*plStack_150 + 0x10))(plStack_150);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                }
              }
            }
            plVar41 = plStack_140;
            if (plStack_140 != (long *)0x0) {
              plVar43 = plStack_140 + 1;
              do {
                lVar35 = *plVar43;
                cVar16 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                if (bVar20) {
                  *plVar43 = lVar35 + -1;
                  cVar16 = ExclusiveMonitorsStatus();
                }
              } while (cVar16 != '\0');
              if (lVar35 == 0) {
                (**(code **)(*plStack_140 + 0x10))(plStack_140);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
              }
            }
          }
          puVar27 = (undefined8 *)puVar34[1];
          puVar24 = puVar34;
          if ((undefined8 *)puVar34[1] == (undefined8 *)0x0) {
            do {
              puVar34 = (undefined8 *)puVar24[2];
              bVar20 = (undefined8 *)*puVar34 != puVar24;
              puVar24 = puVar34;
            } while (bVar20);
          }
          else {
            do {
              puVar34 = puVar27;
              puVar27 = (undefined8 *)*puVar34;
            } while ((undefined8 *)*puVar34 != (undefined8 *)0x0);
          }
        } while (puVar34 != auStack_130);
      }
      func_0x000107c27bf0(&puStack_138,auStack_130[0]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a0edfc4(&uStack_120);
LAB_10a907c3c:
                    /* WARNING: Does not return */
  pcVar19 = (code *)SoftwareBreakpoint(1,0x10a907c40);
  (*pcVar19)();
}



/* Entry: 10a904ff4; end: 10a907f7f;  */

/* WARNING: Removing unreachable block (ram,0x00010a906128) */
/* WARNING: Removing unreachable block (ram,0x00010a905a0c) */
/* WARNING: Removing unreachable block (ram,0x00010a9059a0) */
/* WARNING: Removing unreachable block (ram,0x00010a907420) */
/* WARNING: Removing unreachable block (ram,0x00010a906a94) */
/* WARNING: Removing unreachable block (ram,0x00010a905684) */
/* WARNING: Removing unreachable block (ram,0x00010a9053e0) */
/* WARNING: Removing unreachable block (ram,0x00010a905260) */
/* WARNING: Removing unreachable block (ram,0x00010a905518) */
/* WARNING: Removing unreachable block (ram,0x00010a9068ec) */
/* WARNING: Removing unreachable block (ram,0x00010a906ff4) */
/* WARNING: Removing unreachable block (ram,0x00010a9078d0) */
/* WARNING: Removing unreachable block (ram,0x00010a9071c8) */
/* WARNING: Removing unreachable block (ram,0x00010a907678) */
/* WARNING: Removing unreachable block (ram,0x00010a905d84) */
/* WARNING: Removing unreachable block (ram,0x00010a9072f4) */
/* WARNING: Removing unreachable block (ram,0x00010a905df0) */
/* WARNING: Removing unreachable block (ram,0x00010a9060bc) */
/* WARNING: Removing unreachable block (ram,0x00010a906460) */
/* WARNING: Removing unreachable block (ram,0x00010a9064cc) */
/* WARNING: Removing unreachable block (ram,0x00010a9067ec) */
/* WARNING: Removing unreachable block (ram,0x00010a906858) */
/* WARNING: Removing unreachable block (ram,0x00010a90754c) */
/* WARNING: Removing unreachable block (ram,0x00010a9077a4) */
/* WARNING: Removing unreachable block (ram,0x00010a9079fc) */

void FUN_10a904ff4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *****ppppplVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong *puVar16;
  char cVar17;
  undefined8 uVar18;
  long ****pppplVar19;
  code *pcVar20;
  bool bVar21;
  undefined **ppuVar22;
  byte *pbVar23;
  long *plVar24;
  undefined8 *puVar25;
  long *****ppppplVar26;
  long *****ppppplVar27;
  undefined8 *puVar28;
  long ****pppplVar29;
  undefined1 *puVar30;
  undefined4 *puVar31;
  undefined8 *puVar32;
  undefined *puVar33;
  undefined8 *puVar34;
  long ****pppplVar35;
  long ****pppplVar36;
  long lVar37;
  ulong uVar38;
  long lVar39;
  undefined8 uVar40;
  long *plVar41;
  ulong uVar42;
  long *plVar43;
  long *****ppppplVar44;
  long *****ppppplVar45;
  long *plStack_278;
  long *plStack_270;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  long *plStack_230;
  long *plStack_228;
  long *plStack_220;
  long *plStack_218;
  long *plStack_210;
  long ****pppplStack_208;
  long ****pppplStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long ****pppplStack_1e8;
  long ****pppplStack_1e0;
  long ****pppplStack_1d8;
  long ****pppplStack_1d0;
  long ****pppplStack_1c8;
  long ****pppplStack_1c0;
  long ***ppplStack_1b8;
  long *plStack_1b0;
  undefined4 uStack_1a4;
  long ****pppplStack_1a0;
  long ****pppplStack_198;
  long *plStack_180;
  long *plStack_178;
  long *plStack_168;
  long *plStack_160;
  long ****pppplStack_158;
  long ****pppplStack_150;
  long ****pppplStack_148;
  long ****pppplStack_140;
  long ****pppplStack_138;
  long ****pppplStack_130;
  long ****pppplStack_128;
  long ****pppplStack_120;
  long ****pppplStack_118;
  long ****pppplStack_110;
  long ****pppplStack_108;
  long ***ppplStack_f8;
  long *plStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 *puStack_d8;
  undefined8 auStack_d0 [2];
  undefined1 uStack_c0;
  undefined5 uStack_bf;
  undefined2 uStack_ba;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  long ****pppplStack_b0;
  long ****pppplStack_a8;
  long ****pppplStack_a0;
  long ****pppplStack_98;
  long ****pppplStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a9085f8();
  uVar15 = *(undefined8 *)(param_1 + 0x168);
  if (*(long *)(param_1 + 0x170) == 0) {
    ppuVar22 = &PTR___tlv_bootstrap_11340dee8;
    (*(code *)PTR___tlv_bootstrap_11340dee8)();
    puVar33 = *ppuVar22;
    if (puVar33 != (undefined *)0x0) goto LAB_10a9050c8;
    FUN_10a3ca004();
    pbVar23 = (byte *)0x113836510;
    FUN_10ad0621c();
    uVar42 = (ulong)(*pbVar23 >> 4 & 4);
    puVar33 = ppuVar22[uVar42 + 7];
    if (puVar33 != (undefined *)0x0) goto LAB_10a9050c8;
    FUN_10a3ca05c(ppuVar22,uVar42);
    puVar33 = ppuVar22[uVar42 + 7];
    uStack_c0 = 0x35;
    uStack_bf = 0x10f646d;
    uStack_ba = 0;
    uStack_b8 = 0x26;
    uStack_b2 = 0;
    if (puVar33 != (undefined *)0x0) goto LAB_10a9050c8;
  }
  else {
    puVar33 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x170) + 0x100) + 0x260);
    uStack_c0 = 0x20;
    uStack_bf = 0x10f653c;
    uStack_ba = 0;
    uStack_b8 = 0x21;
    uStack_b2 = 0;
    if (puVar33 == (undefined *)0x0) {
      FUN_10a0edfc4(&uStack_c0);
      goto LAB_10a907c3c;
    }
LAB_10a9050c8:
    plVar24 = *(long **)(puVar33 + 0x228);
    (**(code **)(*plVar24 + 0x68))();
    if (0xf < *(int *)((long)plVar24 + 0x8c)) {
      FUN_10a8fc8e8(&puStack_d8,*(undefined8 *)(param_1 + 0x4f0));
      if (puStack_d8 != auStack_d0) {
        puVar1 = (undefined8 *)(param_1 + 0x5e0);
        plVar24 = (long *)(param_1 + 0x618);
        puVar2 = (undefined8 *)(param_1 + 0x628);
        plVar3 = (long *)(param_1 + 0x660);
        puVar4 = (undefined8 *)(param_1 + 0x670);
        puVar5 = (undefined8 *)(param_1 + 0x6b8);
        puVar6 = (undefined8 *)(param_1 + 0x700);
        plVar7 = (long *)(param_1 + 0x758);
        plVar8 = (long *)(param_1 + 0x768);
        plVar9 = (long *)(param_1 + 0x778);
        plVar10 = (long *)(param_1 + 0x788);
        plVar11 = (long *)(param_1 + 0x798);
        plVar12 = (long *)(param_1 + 0x7a8);
        puVar34 = puStack_d8;
        do {
          ppppplVar13 = (long *****)(puVar34 + 4);
          lVar39 = *(long *)(param_1 + 0x4f0);
          lVar37 = lVar39 + 0xf8;
          FUN_10a9176b0(lVar37,ppppplVar13);
          if (lVar39 + 0x100 != lVar37) {
            lStack_e8 = *(long *)(lVar37 + 0x38);
            plStack_e0 = *(long **)(lVar37 + 0x40);
            if (plStack_e0 != (long *)0x0) {
              plVar41 = plStack_e0 + 1;
              do {
                cVar17 = '\x01';
                bVar21 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                if (bVar21) {
                  *plVar41 = *plVar41 + 1;
                  cVar17 = ExclusiveMonitorsStatus();
                }
              } while (cVar17 != '\0');
            }
            if (lStack_e8 != 0) {
              ppplStack_f8 = *(long ****)(lStack_e8 + 0x18);
              plStack_f0 = *(long **)(lStack_e8 + 0x20);
              if (plStack_f0 != (long *)0x0) {
                plVar41 = plStack_f0 + 1;
                do {
                  cVar17 = '\x01';
                  bVar21 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                  if (bVar21) {
                    *plVar41 = *plVar41 + 1;
                    cVar17 = ExclusiveMonitorsStatus();
                  }
                } while (cVar17 != '\0');
              }
              if ((long ****)ppplStack_f8 != (long ****)0x0) {
                lVar39 = *(long *)(param_1 + 0x170);
                ppppplVar26 = ppppplVar13;
                __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                          (&uStack_c0,&UNK_10f682546,ppppplVar13);
                lVar37 = lVar39;
                FUN_10a3dd220(lVar39);
                func_0x00010a0fda30();
                FUN_10a3dd268(lVar39,lVar37,ppppplVar26,&uStack_c0);
                FUN_10a0c3500(lVar39,uVar15);
                func_0x00010a3e4590(lVar39,0);
                ppppplVar26 = &pppplStack_128;
                puVar33 = &UNK_10f6821fc;
                func_0x000107c2b054(ppppplVar26,&UNK_10f6821fc);
                uVar40 = *(undefined8 *)(lVar39 + 0x120);
                func_0x00010a0fda30();
                FUN_10a3b8ecc(&pppplStack_110,uVar40,ppppplVar26,puVar33);
                ppppplVar26 = (long *****)pppplStack_128;
                ppppplVar27 = (long *****)pppplStack_120;
                if (-1 < (long)pppplStack_118) {
                  ppppplVar26 = &pppplStack_128;
                  ppppplVar27 = (long *****)((ulong)pppplStack_118 >> 0x38);
                }
                func_0x000107c2c4d8(pppplStack_110 + 0x2a,ppppplVar26,ppppplVar27);
                pppplStack_198 = pppplStack_108;
                pppplStack_1a0 = pppplStack_110;
                if ((long *****)pppplStack_108 != (long *****)0x0) {
                  ppppplVar26 = (long *****)(pppplStack_108 + 1);
                  do {
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                    if (bVar21) {
                      *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                }
                pppplStack_98 = (long ****)0x0;
                pppplStack_a0 = (long ****)0x0;
                uStack_88 = 0;
                pppplStack_90 = (long ****)0x0;
                pppplStack_a8 = (long ****)0x0;
                pppplStack_b0 = (long ****)0x0;
                uStack_c0 = 0x18;
                uStack_bf = 0x10a0d4f;
                uStack_ba = 0;
                uStack_b8 = 0x110950c70;
                uStack_b2 = 0;
                FUN_10a3e4814(lVar39,&pppplStack_1a0,&uStack_c0);
                (**(code **)CONCAT26(uStack_b2,uStack_b8))(&uStack_b8);
                pppplVar36 = pppplStack_198;
                if ((long *****)pppplStack_198 != (long *****)0x0) {
                  ppppplVar26 = (long *****)(pppplStack_198 + 1);
                  do {
                    pppplVar35 = *ppppplVar26;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                    if (bVar21) {
                      *ppppplVar26 = (long ****)((long)pppplVar35 + -1);
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (pppplVar35 == (long ****)0x0) {
                    (*(code *)(*pppplStack_198)[2])(pppplStack_198);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                  }
                }
                if ((long)pppplStack_118 < 0) {
                  __ZdlPv(pppplStack_128);
                }
                (*(code *)(*pppplStack_110)[0xd])(pppplStack_110,0);
                pppplVar36 = pppplStack_110;
                __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                          (&uStack_c0,"system",ppppplVar13);
                puVar30 = (undefined1 *)CONCAT26(uStack_ba,CONCAT51(uStack_bf,uStack_c0));
                uVar42 = CONCAT26(uStack_b2,uStack_b8);
                if (-1 < (long)pppplStack_b0) {
                  puVar30 = &uStack_c0;
                  uVar42 = (ulong)pppplStack_b0 >> 0x38;
                }
                func_0x000107c2c4d8(pppplVar36 + 0x2a,puVar30,uVar42);
                *(undefined1 *)(pppplStack_110 + 1) = 1;
                ppppplVar26 = (long *****)&ppplStack_f8;
                ppppplVar27 = (long *****)pppplStack_110;
                FUN_10a39c6b8();
                lVar37 = lStack_e8;
                pppplVar36 = pppplStack_110;
                if (*(long *)(lStack_e8 + 0x28) != 0) {
                  func_0x000107c2b054(&pppplStack_128,&UNK_10f682551);
                  pppplStack_138 = *(long *****)(lVar37 + 0x28);
                  pppplStack_130 = *(long *****)(lVar37 + 0x30);
                  if ((long *****)pppplStack_130 == (long *****)0x0) {
                    pppplStack_a0 = (long ****)0x0;
                  }
                  else {
                    ppppplVar26 = (long *****)(pppplStack_130 + 1);
                    do {
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                      if (bVar21) {
                        *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    ppppplVar27 = (long *****)(pppplStack_130 + 2);
                    do {
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(ppppplVar27,0x10);
                      if (bVar21) {
                        *ppppplVar27 = (long ****)((long)*ppppplVar27 + 1);
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    do {
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                      if (bVar21) {
                        *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                      pppplStack_a0 = pppplStack_130;
                    } while (cVar17 != '\0');
                  }
                  pppplStack_b0 = (long ****)0xe00000000000000;
                  uStack_b2 = 0;
                  uStack_b8 = 0x6c6169726574;
                  uStack_ba = 0x614d;
                  uStack_bf = 0x2e74657373;
                  uStack_c0 = 0x41;
                  ppppplVar26 = &pppplStack_128;
                  pppplStack_a8 = pppplStack_138;
                  pppplStack_98 = pppplStack_138;
                  pppplStack_90 = pppplStack_130;
                  FUN_10a39a09c(pppplVar36,ppppplVar26,&uStack_c0);
                  pppplVar36 = pppplStack_90;
                  if ((long *****)pppplStack_90 != (long *****)0x0) {
                    ppppplVar27 = (long *****)(pppplStack_90 + 1);
                    do {
                      pppplVar35 = *ppppplVar27;
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(ppppplVar27,0x10);
                      if (bVar21) {
                        *ppppplVar27 = (long ****)((long)pppplVar35 + -1);
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    if (pppplVar35 == (long ****)0x0) {
                      (*(code *)(*pppplStack_90)[2])(pppplStack_90);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                    }
                  }
                  ppppplVar27 = (long *****)pppplStack_a0;
                  if ((long *****)pppplStack_a0 != (long *****)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  ppppplVar44 = (long *****)pppplStack_130;
                  if ((long *****)pppplStack_130 != (long *****)0x0) {
                    ppppplVar45 = (long *****)(pppplStack_130 + 1);
                    do {
                      pppplVar36 = *ppppplVar45;
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(ppppplVar45,0x10);
                      if (bVar21) {
                        *ppppplVar45 = (long ****)((long)pppplVar36 + -1);
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    if (pppplVar36 == (long ****)0x0) {
                      (*(code *)(*pppplStack_130)[2])(pppplStack_130);
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                      ppppplVar27 = ppppplVar44;
                    }
                  }
                  if ((long)pppplStack_118 < 0) {
                    ppppplVar27 = (long *****)pppplStack_128;
                    __ZdlPv();
                  }
                }
                lVar37 = lStack_e8;
                pppplVar36 = pppplStack_110;
                if (*(long *)(lStack_e8 + 0x38) != 0) {
                  func_0x000107c2b054(&pppplStack_128,&UNK_10f682563);
                  pppplStack_148 = *(long *****)(lVar37 + 0x38);
                  pppplStack_140 = *(long *****)(lVar37 + 0x40);
                  if ((long *****)pppplStack_140 == (long *****)0x0) {
                    pppplStack_a0 = (long ****)0x0;
                  }
                  else {
                    ppppplVar26 = (long *****)(pppplStack_140 + 1);
                    do {
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                      if (bVar21) {
                        *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    ppppplVar27 = (long *****)(pppplStack_140 + 2);
                    do {
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(ppppplVar27,0x10);
                      if (bVar21) {
                        *ppppplVar27 = (long ****)((long)*ppppplVar27 + 1);
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    do {
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                      if (bVar21) {
                        *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                      pppplStack_a0 = pppplStack_140;
                    } while (cVar17 != '\0');
                  }
                  pppplStack_b0 = (long ****)0xe00000000000000;
                  uStack_b2 = 0;
                  uStack_b8 = 0x6c6169726574;
                  uStack_ba = 0x614d;
                  uStack_bf = 0x2e74657373;
                  uStack_c0 = 0x41;
                  ppppplVar26 = &pppplStack_128;
                  pppplStack_a8 = pppplStack_148;
                  pppplStack_98 = pppplStack_148;
                  pppplStack_90 = pppplStack_140;
                  FUN_10a39a09c(pppplVar36,ppppplVar26,&uStack_c0);
                  pppplVar36 = pppplStack_90;
                  if ((long *****)pppplStack_90 != (long *****)0x0) {
                    ppppplVar27 = (long *****)(pppplStack_90 + 1);
                    do {
                      pppplVar35 = *ppppplVar27;
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(ppppplVar27,0x10);
                      if (bVar21) {
                        *ppppplVar27 = (long ****)((long)pppplVar35 + -1);
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    if (pppplVar35 == (long ****)0x0) {
                      (*(code *)(*pppplStack_90)[2])(pppplStack_90);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                    }
                  }
                  ppppplVar27 = (long *****)pppplStack_a0;
                  if ((long *****)pppplStack_a0 != (long *****)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  ppppplVar44 = (long *****)pppplStack_140;
                  if ((long *****)pppplStack_140 != (long *****)0x0) {
                    ppppplVar45 = (long *****)(pppplStack_140 + 1);
                    do {
                      pppplVar36 = *ppppplVar45;
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(ppppplVar45,0x10);
                      if (bVar21) {
                        *ppppplVar45 = (long ****)((long)pppplVar36 + -1);
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    if (pppplVar36 == (long ****)0x0) {
                      (*(code *)(*pppplStack_140)[2])(pppplStack_140);
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                      ppppplVar27 = ppppplVar44;
                    }
                  }
                  if ((long)pppplStack_118 < 0) {
                    ppppplVar27 = (long *****)pppplStack_128;
                    __ZdlPv();
                  }
                }
                pppplVar36 = pppplStack_110;
                if (*(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18) < 0x15c) {
                  puVar16 = *(ulong **)(lStack_e8 + 0x48);
                  if (*(ulong **)(lStack_e8 + 0x50) != puVar16) {
                    ppppplVar26 = (long *****)*puVar16;
                    ppppplVar27 = (long *****)puVar16[1];
                    if (ppppplVar27 != (long *****)0x0) {
                      ppppplVar44 = ppppplVar27 + 1;
                      do {
                        cVar17 = '\x01';
                        bVar21 = (bool)ExclusiveMonitorPass(ppppplVar44,0x10);
                        if (bVar21) {
                          *ppppplVar44 = (long ****)((long)*ppppplVar44 + 1);
                          cVar17 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar17 != '\0');
                    }
                    pppplStack_1a0 = (long ****)ppppplVar26;
                    pppplStack_198 = (long ****)ppppplVar27;
                    if (ppppplVar26 != (long *****)0x0) {
                      func_0x000107c2b054(&pppplStack_128,&UNK_10f682589);
                      if (ppppplVar27 == (long *****)0x0) {
                        pppplStack_a0 = (long ****)0x0;
                      }
                      else {
                        ppppplVar44 = ppppplVar27 + 1;
                        do {
                          cVar17 = '\x01';
                          bVar21 = (bool)ExclusiveMonitorPass(ppppplVar44,0x10);
                          if (bVar21) {
                            *ppppplVar44 = (long ****)((long)*ppppplVar44 + 1);
                            cVar17 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar17 != '\0');
                        ppppplVar45 = ppppplVar27 + 2;
                        do {
                          cVar17 = '\x01';
                          bVar21 = (bool)ExclusiveMonitorPass(ppppplVar45,0x10);
                          if (bVar21) {
                            *ppppplVar45 = (long ****)((long)*ppppplVar45 + 1);
                            cVar17 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar17 != '\0');
                        do {
                          cVar17 = '\x01';
                          bVar21 = (bool)ExclusiveMonitorPass(ppppplVar44,0x10);
                          if (bVar21) {
                            *ppppplVar44 = (long ****)((long)*ppppplVar44 + 1);
                            cVar17 = ExclusiveMonitorsStatus();
                          }
                          pppplStack_a0 = (long ****)ppppplVar27;
                        } while (cVar17 != '\0');
                      }
                      pppplStack_b0 = (long ****)0xe00000000000000;
                      uStack_b2 = 0;
                      uStack_b8 = 0x6c6169726574;
                      uStack_ba = 0x614d;
                      uStack_bf = 0x2e74657373;
                      uStack_c0 = 0x41;
                      pppplStack_1d8 = (long ****)ppppplVar26;
                      pppplStack_1d0 = (long ****)ppppplVar27;
                      pppplStack_a8 = (long ****)ppppplVar26;
                      pppplStack_98 = (long ****)ppppplVar26;
                      pppplStack_90 = (long ****)ppppplVar27;
                      FUN_10a39a09c(pppplVar36,&pppplStack_128,&uStack_c0);
                      pppplVar36 = pppplStack_90;
                      if ((long *****)pppplStack_90 != (long *****)0x0) {
                        ppppplVar26 = (long *****)(pppplStack_90 + 1);
                        do {
                          pppplVar35 = *ppppplVar26;
                          cVar17 = '\x01';
                          bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                          if (bVar21) {
                            *ppppplVar26 = (long ****)((long)pppplVar35 + -1);
                            cVar17 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar17 != '\0');
                        if (pppplVar35 == (long ****)0x0) {
                          (*(code *)(*pppplStack_90)[2])(pppplStack_90);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                        }
                      }
                      if ((long *****)pppplStack_a0 != (long *****)0x0) {
                        __ZNSt3__119__shared_weak_count14__release_weakEv();
                      }
                      pppplVar36 = pppplStack_1d0;
                      if ((long *****)pppplStack_1d0 != (long *****)0x0) {
                        ppppplVar26 = (long *****)(pppplStack_1d0 + 1);
                        do {
                          pppplVar35 = *ppppplVar26;
                          cVar17 = '\x01';
                          bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                          if (bVar21) {
                            *ppppplVar26 = (long ****)((long)pppplVar35 + -1);
                            cVar17 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar17 != '\0');
                        if (pppplVar35 == (long ****)0x0) {
                          (*(code *)(*pppplStack_1d0)[2])(pppplStack_1d0);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                        }
                      }
                      if ((long)pppplStack_118 < 0) {
                        __ZdlPv(pppplStack_128);
                      }
                    }
                    pppplVar36 = pppplStack_198;
                    if ((long *****)pppplStack_198 != (long *****)0x0) {
                      ppppplVar26 = (long *****)(pppplStack_198 + 1);
                      do {
                        pppplVar35 = *ppppplVar26;
                        cVar17 = '\x01';
                        bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                        if (bVar21) {
                          *ppppplVar26 = (long ****)((long)pppplVar35 + -1);
                          cVar17 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar17 != '\0');
                      if (pppplVar35 == (long ****)0x0) {
                        (*(code *)(*pppplStack_198)[2])(pppplStack_198);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                      }
                    }
                  }
                  pppplVar36 = pppplStack_110;
                  lVar37 = *(long *)(param_1 + 0x4f0);
                  if ((*(long **)(lVar37 + 0xe0) != *(long **)(lVar37 + 0xe8)) &&
                     (**(long **)(lVar37 + 0xe0) != 0)) {
                    func_0x000107c2b054(&pppplStack_128,&UNK_10f68253a);
                    puVar16 = *(ulong **)(lVar37 + 0xe0);
                    if (*(ulong **)(lVar37 + 0xe8) == puVar16) goto LAB_10a907c3c;
                    pppplStack_1e8 = (long ****)*puVar16;
                    pppplStack_1e0 = (long ****)puVar16[1];
                    if ((long *****)pppplStack_1e0 == (long *****)0x0) {
                      pppplStack_a0 = (long ****)0x0;
                    }
                    else {
                      ppppplVar26 = (long *****)(pppplStack_1e0 + 1);
                      do {
                        cVar17 = '\x01';
                        bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                        if (bVar21) {
                          *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
                          cVar17 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar17 != '\0');
                      ppppplVar27 = (long *****)(pppplStack_1e0 + 2);
                      do {
                        cVar17 = '\x01';
                        bVar21 = (bool)ExclusiveMonitorPass(ppppplVar27,0x10);
                        if (bVar21) {
                          *ppppplVar27 = (long ****)((long)*ppppplVar27 + 1);
                          cVar17 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar17 != '\0');
                      do {
                        cVar17 = '\x01';
                        bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                        if (bVar21) {
                          *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
                          cVar17 = ExclusiveMonitorsStatus();
                        }
                        pppplStack_a0 = pppplStack_1e0;
                      } while (cVar17 != '\0');
                    }
                    pppplStack_b0 = (long ****)0x1000000000000000;
                    uStack_b2 = 0x6873;
                    uStack_b8 = 0x654d7265646e;
                    uStack_ba = 0x6552;
                    uStack_bf = 0x2e74657373;
                    uStack_c0 = 0x41;
                    pppplStack_a8 = pppplStack_1e8;
                    pppplStack_98 = pppplStack_1e8;
                    pppplStack_90 = pppplStack_1e0;
                    FUN_10a39a09c(pppplVar36,&pppplStack_128,&uStack_c0);
                    pppplVar36 = pppplStack_90;
                    if ((long *****)pppplStack_90 != (long *****)0x0) {
                      ppppplVar26 = (long *****)(pppplStack_90 + 1);
                      do {
                        pppplVar35 = *ppppplVar26;
                        cVar17 = '\x01';
                        bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                        if (bVar21) {
                          *ppppplVar26 = (long ****)((long)pppplVar35 + -1);
                          cVar17 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar17 != '\0');
                      if (pppplVar35 == (long ****)0x0) {
                        (*(code *)(*pppplStack_90)[2])(pppplStack_90);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                      }
                    }
                    if ((long *****)pppplStack_a0 != (long *****)0x0) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                    }
                    pppplVar36 = pppplStack_1e0;
                    if ((long *****)pppplStack_1e0 != (long *****)0x0) {
                      ppppplVar26 = (long *****)(pppplStack_1e0 + 1);
                      do {
                        pppplVar35 = *ppppplVar26;
                        cVar17 = '\x01';
                        bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                        if (bVar21) {
                          *ppppplVar26 = (long ****)((long)pppplVar35 + -1);
                          cVar17 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar17 != '\0');
                      if (pppplVar35 == (long ****)0x0) {
                        (*(code *)(*pppplStack_1e0)[2])(pppplStack_1e0);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                      }
                    }
                    if ((long)pppplStack_118 < 0) {
                      __ZdlPv(pppplStack_128);
                    }
                  }
                }
                else {
                  func_0x00010a0fda30();
                  puVar25 = (undefined8 *)0x80;
                  __Znwm();
                  puVar25[1] = 0;
                  puVar25[2] = 0;
                  *puVar25 = &PTR_FUN_110bde0d8;
                  *(undefined1 *)(puVar25 + 4) = 0;
                  puVar25[7] = 0;
                  puVar25[6] = 0;
                  puVar28 = puVar25 + 8;
                  puVar25[9] = 0;
                  *puVar28 = 0;
                  puVar25[0xc] = ppppplVar26;
                  puVar25[0xd] = 0;
                  puVar25[0xe] = 0;
                  puVar25[0xf] = 0;
                  puVar32 = puVar25 + 3;
                  *puVar32 = &PTR_DAT_110bdb408;
                  puVar25[5] = &PTR_FUN_110bdb490;
                  puVar25[10] = &PTR_FUN_110bdb4e8;
                  puVar25[0xb] = ppppplVar27;
                  uStack_c0 = SUB81(puVar32,0);
                  uStack_bf = (undefined5)((ulong)puVar32 >> 8);
                  uStack_ba = (undefined2)((ulong)puVar32 >> 0x30);
                  uStack_b8 = SUB86(puVar25,0);
                  uStack_b2 = (undefined2)((ulong)puVar25 >> 0x30);
                  FUN_10a4951fc(&uStack_c0);
                  uVar18 = CONCAT26(uStack_b2,uStack_b8);
                  uVar40 = CONCAT26(uStack_ba,CONCAT51(uStack_bf,uStack_c0));
                  uStack_c0 = 0;
                  uStack_bf = 0;
                  uStack_ba = 0;
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  plVar41 = *(long **)(param_1 + 0x5d8);
                  *(undefined8 *)(param_1 + 0x5d8) = uVar18;
                  *(undefined8 *)(param_1 + 0x5d0) = uVar40;
                  if (plVar41 != (long *)0x0) {
                    plVar43 = plVar41 + 1;
                    do {
                      lVar37 = *plVar43;
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar21) {
                        *plVar43 = lVar37 + -1;
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    if (lVar37 == 0) {
                      (**(code **)(*plVar41 + 0x10))(plVar41);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    }
                  }
                  plVar41 = (long *)CONCAT26(uStack_b2,uStack_b8);
                  if (plVar41 != (long *)0x0) {
                    plVar43 = plVar41 + 1;
                    do {
                      lVar37 = *plVar43;
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar21) {
                        *plVar43 = lVar37 + -1;
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    if (lVar37 == 0) {
                      (**(code **)(*plVar41 + 0x10))(plVar41);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    }
                  }
                  ppppplVar26 = *(long ******)(param_1 + 0x5d0);
                  if (ppppplVar26 + 10 != (long *****)(lStack_e8 + 0x60)) {
                    puVar28 = *(undefined8 **)(lStack_e8 + 0x60);
                    FUN_10a105cdc(ppppplVar26 + 10,puVar28,*(long *)(lStack_e8 + 0x68),
                                  (*(long *)(lStack_e8 + 0x68) - (long)puVar28 >> 3) *
                                  -0x5555555555555555);
                    ppppplVar26 = *(long ******)(param_1 + 0x5d0);
                  }
                  pppplStack_150 = *(long *****)(param_1 + 0x5d8);
                  ppppplVar27 = ppppplVar26;
                  if ((long *****)pppplStack_150 != (long *****)0x0) {
                    ppppplVar27 = (long *****)(pppplStack_150 + 1);
                    do {
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(ppppplVar27,0x10);
                      if (bVar21) {
                        *ppppplVar27 = (long ****)((long)*ppppplVar27 + 1);
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    ppppplVar27 = *(long ******)(param_1 + 0x5d0);
                  }
                  pppplStack_158 = (long ****)ppppplVar26;
                  (*(code *)(*ppppplVar27)[7])();
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  uStack_c0 = 0;
                  uStack_bf = 0;
                  uStack_ba = 0;
                  pppplStack_a8 = (long ****)0x0;
                  pppplStack_b0 = (long ****)0x0;
                  pppplStack_98 = (long ****)0x0;
                  pppplStack_a0 = (long ****)0x0;
                  pppplStack_90 = (long ****)0x0;
                  func_0x000107c2c4d8(&uStack_c0,ppppplVar27,puVar28);
                  pppplVar19 = pppplStack_a0;
                  pppplVar35 = pppplStack_150;
                  pppplVar36 = pppplStack_158;
                  if ((long *****)pppplStack_150 != (long *****)0x0) {
                    ppppplVar26 = (long *****)(pppplStack_150 + 2);
                    do {
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                      if (bVar21) {
                        *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                  }
                  pppplStack_a8 = pppplStack_158;
                  pppplStack_a0 = pppplStack_150;
                  if (pppplVar19 != (long ****)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  ppppplVar26 = (long *****)(pppplVar36 + 2);
                  (*(code *)(*ppppplVar26)[3])();
                  pppplVar19 = pppplStack_90;
                  if (((ulong)ppppplVar26 & 1) == 0) {
                    if ((long *****)pppplVar35 != (long *****)0x0) {
                      ppppplVar26 = (long *****)(pppplVar35 + 1);
                      do {
                        cVar17 = '\x01';
                        bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                        if (bVar21) {
                          *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
                          cVar17 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar17 != '\0');
                    }
                    pppplStack_98 = pppplVar36;
                    pppplStack_90 = pppplVar35;
                    if ((long *****)pppplVar19 != (long *****)0x0) {
                      ppppplVar26 = (long *****)(pppplVar19 + 1);
                      do {
                        pppplVar36 = *ppppplVar26;
                        cVar17 = '\x01';
                        bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                        if (bVar21) {
                          *ppppplVar26 = (long ****)((long)pppplVar36 + -1);
                          cVar17 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar17 != '\0');
                      if (pppplVar36 == (long ****)0x0) {
                        (*(code *)(*pppplVar19)[2])(pppplVar19);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar19);
                      }
                    }
                  }
                  if (*(char *)(param_1 + 0x5f7) < '\0') {
                    __ZdlPv(*puVar1);
                  }
                  pppplVar35 = pppplStack_a0;
                  pppplVar36 = pppplStack_a8;
                  *(ulong *)(param_1 + 0x5e8) = CONCAT26(uStack_b2,uStack_b8);
                  *puVar1 = CONCAT26(uStack_ba,CONCAT51(uStack_bf,uStack_c0));
                  *(long *****)(param_1 + 0x5f0) = pppplStack_b0;
                  pppplStack_b0 = (long ****)((ulong)pppplStack_b0 & 0xffffffffffffff);
                  uStack_c0 = 0;
                  pppplStack_a8 = (long ****)0x0;
                  pppplStack_a0 = (long ****)0x0;
                  lVar37 = *(long *)(param_1 + 0x600);
                  *(long *****)(param_1 + 0x600) = pppplVar35;
                  *(long *****)(param_1 + 0x5f8) = pppplVar36;
                  if (lVar37 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  func_0x00010a328268(param_1 + 0x608,&pppplStack_98);
                  pppplVar36 = pppplStack_90;
                  if ((long *****)pppplStack_90 != (long *****)0x0) {
                    ppppplVar26 = (long *****)(pppplStack_90 + 1);
                    do {
                      pppplVar35 = *ppppplVar26;
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                      if (bVar21) {
                        *ppppplVar26 = (long ****)((long)pppplVar35 + -1);
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    if (pppplVar35 == (long ****)0x0) {
                      (*(code *)(*pppplStack_90)[2])(pppplStack_90);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                    }
                  }
                  if ((long *****)pppplStack_a0 != (long *****)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  pppplVar36 = pppplStack_150;
                  if ((long *****)pppplStack_150 != (long *****)0x0) {
                    ppppplVar26 = (long *****)(pppplStack_150 + 1);
                    do {
                      pppplVar35 = *ppppplVar26;
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                      if (bVar21) {
                        *ppppplVar26 = (long ****)((long)pppplVar35 + -1);
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    if (pppplVar35 == (long ****)0x0) {
                      (*(code *)(*pppplStack_150)[2])(pppplStack_150);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                    }
                  }
                  ppppplVar26 = (long *****)pppplStack_110;
                  func_0x000107c2b054(&uStack_c0,&UNK_10f682575);
                  puVar30 = &uStack_c0;
                  FUN_10a39a09c(ppppplVar26,puVar30,puVar1);
                  func_0x00010a0fda30();
                  FUN_10a91a250(&uStack_c0,ppppplVar26,puVar30);
                  FUN_10a908708(plVar24,&uStack_c0);
                  plVar41 = (long *)CONCAT26(uStack_b2,uStack_b8);
                  if (plVar41 != (long *)0x0) {
                    plVar43 = plVar41 + 1;
                    do {
                      lVar37 = *plVar43;
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar21) {
                        *plVar43 = lVar37 + -1;
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    if (lVar37 == 0) {
                      (**(code **)(*plVar41 + 0x10))(plVar41);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    }
                  }
                  lVar37 = lStack_e8;
                  pppplStack_120 = (long ****)0x0;
                  pppplStack_128 = (long ****)0x0;
                  pppplStack_118 = (long ****)0x0;
                  ppppplVar26 = (long *****)
                                (*(long *)(lStack_e8 + 0x50) - *(long *)(lStack_e8 + 0x48) >> 4);
                  FUN_10a904f5c(&pppplStack_128,ppppplVar26);
                  puVar25 = *(undefined8 **)(lVar37 + 0x50);
                  ppppplVar27 = (long *****)pppplStack_128;
                  for (puVar28 = *(undefined8 **)(lVar37 + 0x48);
                      pppplStack_128 = (long ****)ppppplVar27, puVar28 != puVar25;
                      puVar28 = puVar28 + 2) {
                    if (pppplStack_120 < pppplStack_118) {
                      lVar37 = puVar28[1];
                      pppplVar36 = (long ****)*puVar28;
                      pppplStack_120[1] = (long ***)puVar28[1];
                      *pppplStack_120 = (long ***)pppplVar36;
                      if (lVar37 != 0) {
                        plVar41 = (long *)(lVar37 + 0x10);
                        do {
                          cVar17 = '\x01';
                          bVar21 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                          if (bVar21) {
                            *plVar41 = *plVar41 + 1;
                            cVar17 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar17 != '\0');
                      }
                      ppppplVar44 = (long *****)(pppplStack_120 + 2);
                    }
                    else {
                      lVar37 = (long)pppplStack_120 - (long)ppppplVar27;
                      uVar42 = (lVar37 >> 4) + 1;
                      if (uVar42 >> 0x3c != 0) {
                        FUN_10a34d61c();
                        goto LAB_10a907c3c;
                      }
                      uVar38 = (long)pppplStack_118 - (long)ppppplVar27 >> 3;
                      if (uVar38 <= uVar42) {
                        uVar38 = uVar42;
                      }
                      if (0x7fffffffffffffef < (ulong)((long)pppplStack_118 - (long)ppppplVar27)) {
                        uVar38 = 0xfffffffffffffff;
                      }
                      pppplStack_a0 = (long ****)&pppplStack_128;
                      ppppplVar27 = &pppplStack_128;
                      FUN_10a34d630();
                      puVar32 = (undefined8 *)((long)ppppplVar27 + lVar37);
                      lVar37 = puVar28[1];
                      uVar40 = *puVar28;
                      puVar32[1] = puVar28[1];
                      *puVar32 = uVar40;
                      if (lVar37 != 0) {
                        plVar41 = (long *)(lVar37 + 0x10);
                        do {
                          cVar17 = '\x01';
                          bVar21 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                          if (bVar21) {
                            *plVar41 = *plVar41 + 1;
                            cVar17 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar17 != '\0');
                      }
                      ppppplVar44 = (long *****)(puVar32 + 2);
                      ppppplVar45 = (long *****)
                                    ((long)puVar32 - ((long)pppplStack_120 - (long)pppplStack_128));
                      ppppplVar26 = (long *****)pppplStack_128;
                      _memcpy(ppppplVar45);
                      pppplStack_b0 = pppplStack_128;
                      pppplStack_a8 = pppplStack_118;
                      uStack_c0 = SUB81(pppplStack_128,0);
                      uStack_bf = (undefined5)((ulong)pppplStack_128 >> 8);
                      uStack_ba = (undefined2)((ulong)pppplStack_128 >> 0x30);
                      uStack_b8 = SUB86(pppplStack_128,0);
                      pppplStack_128 = (long ****)ppppplVar45;
                      pppplStack_120 = (long ****)ppppplVar44;
                      pppplStack_118 = (long ****)(ppppplVar27 + uVar38 * 2);
                      uStack_b2 = uStack_ba;
                      FUN_10a35a1bc(&uStack_c0);
                    }
                    ppppplVar27 = (long *****)pppplStack_128;
                    pppplStack_120 = (long ****)ppppplVar44;
                  }
                  if ((long *****)(*plVar24 + 0x50) != &pppplStack_128) {
                    FUN_10a34d2ec();
                    ppppplVar26 = ppppplVar27;
                  }
                  uStack_c0 = SUB81(&pppplStack_128,0);
                  uStack_bf = (undefined5)((ulong)&pppplStack_128 >> 8);
                  uStack_ba = (undefined2)((ulong)&pppplStack_128 >> 0x30);
                  FUN_10a34c804(&uStack_c0);
                  plStack_168 = *(long **)(param_1 + 0x618);
                  plStack_160 = *(long **)(param_1 + 0x620);
                  plVar41 = plStack_168;
                  if (plStack_160 != (long *)0x0) {
                    plVar41 = plStack_160 + 1;
                    do {
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                      if (bVar21) {
                        *plVar41 = *plVar41 + 1;
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    plVar41 = (long *)*plVar24;
                  }
                  (**(code **)(*plVar41 + 0x38))();
                  FUN_10a90876c(&uStack_c0,&plStack_168,plVar41,ppppplVar26);
                  if (*(char *)(param_1 + 0x63f) < '\0') {
                    __ZdlPv(*puVar2);
                  }
                  pppplVar35 = pppplStack_a0;
                  pppplVar36 = pppplStack_a8;
                  *(ulong *)(param_1 + 0x630) = CONCAT26(uStack_b2,uStack_b8);
                  *puVar2 = CONCAT26(uStack_ba,CONCAT51(uStack_bf,uStack_c0));
                  *(long *****)(param_1 + 0x638) = pppplStack_b0;
                  pppplStack_b0 = (long ****)((ulong)pppplStack_b0 & 0xffffffffffffff);
                  uStack_c0 = 0;
                  pppplStack_a8 = (long ****)0x0;
                  pppplStack_a0 = (long ****)0x0;
                  lVar37 = *(long *)(param_1 + 0x648);
                  *(long *****)(param_1 + 0x648) = pppplVar35;
                  *(long *****)(param_1 + 0x640) = pppplVar36;
                  if (lVar37 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  func_0x00010a328268(param_1 + 0x650,&pppplStack_98);
                  pppplVar36 = pppplStack_90;
                  if ((long *****)pppplStack_90 != (long *****)0x0) {
                    ppppplVar26 = (long *****)(pppplStack_90 + 1);
                    do {
                      pppplVar35 = *ppppplVar26;
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                      if (bVar21) {
                        *ppppplVar26 = (long ****)((long)pppplVar35 + -1);
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    if (pppplVar35 == (long ****)0x0) {
                      (*(code *)(*pppplStack_90)[2])(pppplStack_90);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                    }
                  }
                  if ((long *****)pppplStack_a0 != (long *****)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  plVar41 = plStack_160;
                  if (plStack_160 != (long *)0x0) {
                    plVar43 = plStack_160 + 1;
                    do {
                      lVar37 = *plVar43;
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar21) {
                        *plVar43 = lVar37 + -1;
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    if (lVar37 == 0) {
                      (**(code **)(*plStack_160 + 0x10))(plStack_160);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    }
                  }
                  ppppplVar26 = (long *****)pppplStack_110;
                  func_0x000107c2b054(&uStack_c0,&UNK_10f682589);
                  puVar30 = &uStack_c0;
                  FUN_10a39a09c(ppppplVar26,puVar30,puVar2);
                  func_0x00010a0fda30();
                  FUN_10a91a250(&uStack_c0,ppppplVar26,puVar30);
                  FUN_10a908708(plVar3,&uStack_c0);
                  plVar41 = (long *)CONCAT26(uStack_b2,uStack_b8);
                  if (plVar41 != (long *)0x0) {
                    plVar43 = plVar41 + 1;
                    do {
                      lVar37 = *plVar43;
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar21) {
                        *plVar43 = lVar37 + -1;
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    if (lVar37 == 0) {
                      (**(code **)(*plVar41 + 0x10))(plVar41);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    }
                  }
                  pppplStack_120 = (long ****)0x0;
                  pppplStack_128 = (long ****)0x0;
                  pppplStack_118 = (long ****)0x0;
                  lVar37 = *(long *)(param_1 + 0x4f0);
                  ppppplVar26 = (long *****)
                                (*(long *)(lVar37 + 0xe8) - *(long *)(lVar37 + 0xe0) >> 4);
                  FUN_10a904f5c(&pppplStack_128,ppppplVar26);
                  puVar25 = *(undefined8 **)(lVar37 + 0xe8);
                  ppppplVar27 = (long *****)pppplStack_128;
                  for (puVar28 = *(undefined8 **)(lVar37 + 0xe0);
                      pppplStack_128 = (long ****)ppppplVar27, puVar28 != puVar25;
                      puVar28 = puVar28 + 2) {
                    if (pppplStack_120 < pppplStack_118) {
                      lVar37 = puVar28[1];
                      pppplVar36 = (long ****)*puVar28;
                      pppplStack_120[1] = (long ***)puVar28[1];
                      *pppplStack_120 = (long ***)pppplVar36;
                      if (lVar37 != 0) {
                        plVar41 = (long *)(lVar37 + 0x10);
                        do {
                          cVar17 = '\x01';
                          bVar21 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                          if (bVar21) {
                            *plVar41 = *plVar41 + 1;
                            cVar17 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar17 != '\0');
                      }
                      ppppplVar44 = (long *****)(pppplStack_120 + 2);
                    }
                    else {
                      lVar37 = (long)pppplStack_120 - (long)ppppplVar27;
                      uVar42 = (lVar37 >> 4) + 1;
                      if (uVar42 >> 0x3c != 0) {
                        FUN_10a34d61c();
                        goto LAB_10a907c3c;
                      }
                      uVar38 = (long)pppplStack_118 - (long)ppppplVar27 >> 3;
                      if (uVar38 <= uVar42) {
                        uVar38 = uVar42;
                      }
                      if (0x7fffffffffffffef < (ulong)((long)pppplStack_118 - (long)ppppplVar27)) {
                        uVar38 = 0xfffffffffffffff;
                      }
                      pppplStack_a0 = (long ****)&pppplStack_128;
                      ppppplVar27 = &pppplStack_128;
                      FUN_10a34d630();
                      puVar32 = (undefined8 *)((long)ppppplVar27 + lVar37);
                      lVar37 = puVar28[1];
                      uVar40 = *puVar28;
                      puVar32[1] = puVar28[1];
                      *puVar32 = uVar40;
                      if (lVar37 != 0) {
                        plVar41 = (long *)(lVar37 + 0x10);
                        do {
                          cVar17 = '\x01';
                          bVar21 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                          if (bVar21) {
                            *plVar41 = *plVar41 + 1;
                            cVar17 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar17 != '\0');
                      }
                      ppppplVar44 = (long *****)(puVar32 + 2);
                      ppppplVar45 = (long *****)
                                    ((long)puVar32 - ((long)pppplStack_120 - (long)pppplStack_128));
                      ppppplVar26 = (long *****)pppplStack_128;
                      _memcpy(ppppplVar45);
                      pppplStack_b0 = pppplStack_128;
                      pppplStack_a8 = pppplStack_118;
                      uStack_c0 = SUB81(pppplStack_128,0);
                      uStack_bf = (undefined5)((ulong)pppplStack_128 >> 8);
                      uStack_ba = (undefined2)((ulong)pppplStack_128 >> 0x30);
                      uStack_b8 = SUB86(pppplStack_128,0);
                      pppplStack_128 = (long ****)ppppplVar45;
                      pppplStack_120 = (long ****)ppppplVar44;
                      pppplStack_118 = (long ****)(ppppplVar27 + uVar38 * 2);
                      uStack_b2 = uStack_ba;
                      FUN_10a35a1bc(&uStack_c0);
                    }
                    ppppplVar27 = (long *****)pppplStack_128;
                    pppplStack_120 = (long ****)ppppplVar44;
                  }
                  if ((long *****)(*plVar3 + 0x50) != &pppplStack_128) {
                    FUN_10a34d2ec();
                    ppppplVar26 = ppppplVar27;
                  }
                  uStack_c0 = SUB81(&pppplStack_128,0);
                  uStack_bf = (undefined5)((ulong)&pppplStack_128 >> 8);
                  uStack_ba = (undefined2)((ulong)&pppplStack_128 >> 0x30);
                  FUN_10a34c804(&uStack_c0);
                  plStack_178 = *(long **)(param_1 + 0x668);
                  plStack_180 = *(long **)(param_1 + 0x660);
                  plVar41 = plStack_180;
                  if (*(long *)(param_1 + 0x668) != 0) {
                    plVar41 = (long *)(*(long *)(param_1 + 0x668) + 8);
                    do {
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                      if (bVar21) {
                        *plVar41 = *plVar41 + 1;
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    plVar41 = (long *)*plVar3;
                  }
                  (**(code **)(*plVar41 + 0x38))();
                  FUN_10a90876c(&uStack_c0,&plStack_180,plVar41,ppppplVar26);
                  if (*(char *)(param_1 + 0x687) < '\0') {
                    __ZdlPv(*puVar4);
                  }
                  pppplVar35 = pppplStack_a0;
                  pppplVar36 = pppplStack_a8;
                  *(ulong *)(param_1 + 0x678) = CONCAT26(uStack_b2,uStack_b8);
                  *puVar4 = CONCAT26(uStack_ba,CONCAT51(uStack_bf,uStack_c0));
                  *(long *****)(param_1 + 0x680) = pppplStack_b0;
                  pppplStack_b0 = (long ****)((ulong)pppplStack_b0 & 0xffffffffffffff);
                  uStack_c0 = 0;
                  pppplStack_a8 = (long ****)0x0;
                  pppplStack_a0 = (long ****)0x0;
                  lVar37 = *(long *)(param_1 + 0x690);
                  *(long *****)(param_1 + 0x690) = pppplVar35;
                  *(long *****)(param_1 + 0x688) = pppplVar36;
                  if (lVar37 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  func_0x00010a328268(param_1 + 0x698,&pppplStack_98);
                  pppplVar36 = pppplStack_90;
                  if ((long *****)pppplStack_90 != (long *****)0x0) {
                    ppppplVar26 = (long *****)(pppplStack_90 + 1);
                    do {
                      pppplVar35 = *ppppplVar26;
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                      if (bVar21) {
                        *ppppplVar26 = (long ****)((long)pppplVar35 + -1);
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    if (pppplVar35 == (long ****)0x0) {
                      (*(code *)(*pppplStack_90)[2])(pppplStack_90);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                    }
                  }
                  if (pppplStack_a0 != (long ****)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  plVar41 = plStack_178;
                  if (plStack_178 != (long *)0x0) {
                    plVar43 = plStack_178 + 1;
                    do {
                      lVar37 = *plVar43;
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar21) {
                        *plVar43 = lVar37 + -1;
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    if (lVar37 == 0) {
                      (**(code **)(*plStack_178 + 0x10))(plStack_178);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    }
                  }
                  ppppplVar26 = (long *****)pppplStack_110;
                  func_0x000107c2b054(&uStack_c0,&UNK_10f682599);
                  puVar30 = &uStack_c0;
                  FUN_10a39a09c(ppppplVar26,puVar30,puVar4);
                  func_0x00010a0fda30();
                  puVar28 = (undefined8 *)0x80;
                  __Znwm();
                  puVar28[1] = 0;
                  puVar28[2] = 0;
                  *puVar28 = &PTR_FUN_110bddf98;
                  *(undefined1 *)(puVar28 + 4) = 0;
                  puVar28[7] = 0;
                  puVar28[6] = 0;
                  puVar28[9] = 0;
                  puVar28[8] = 0;
                  puVar28[0xc] = puVar30;
                  puVar28[0xd] = 0;
                  puVar28[0xe] = 0;
                  puVar28[0xf] = 0;
                  puVar25 = puVar28 + 3;
                  *puVar25 = &PTR_DAT_110bdade8;
                  puVar28[5] = &PTR_DAT_110bdae70;
                  puVar28[10] = &PTR_FUN_110bdaec8;
                  puVar28[0xb] = ppppplVar26;
                  uStack_c0 = SUB81(puVar25,0);
                  uStack_bf = (undefined5)((ulong)puVar25 >> 8);
                  uStack_ba = (undefined2)((ulong)puVar25 >> 0x30);
                  uStack_b8 = SUB86(puVar28,0);
                  uStack_b2 = (undefined2)((ulong)puVar28 >> 0x30);
                  FUN_10a494be0(&uStack_c0);
                  uVar18 = CONCAT26(uStack_b2,uStack_b8);
                  uVar40 = CONCAT26(uStack_ba,CONCAT51(uStack_bf,uStack_c0));
                  uStack_c0 = 0;
                  uStack_bf = 0;
                  uStack_ba = 0;
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  plVar41 = *(long **)(param_1 + 0x6b0);
                  *(undefined8 *)(param_1 + 0x6b0) = uVar18;
                  *(undefined8 *)(param_1 + 0x6a8) = uVar40;
                  if (plVar41 != (long *)0x0) {
                    plVar43 = plVar41 + 1;
                    do {
                      lVar37 = *plVar43;
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar21) {
                        *plVar43 = lVar37 + -1;
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    if (lVar37 == 0) {
                      (**(code **)(*plVar41 + 0x10))(plVar41);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    }
                  }
                  plVar41 = (long *)CONCAT26(uStack_b2,uStack_b8);
                  if (plVar41 != (long *)0x0) {
                    plVar43 = plVar41 + 1;
                    do {
                      lVar37 = *plVar43;
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar21) {
                        *plVar43 = lVar37 + -1;
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    if (lVar37 == 0) {
                      (**(code **)(*plVar41 + 0x10))(plVar41);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    }
                  }
                  lVar37 = lStack_e8;
                  uStack_c0 = 0;
                  uStack_bf = 0;
                  uStack_ba = 0;
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  pppplStack_b0 = (long ****)0x0;
                  puVar31 = (undefined4 *)
                            (*(long *)(lStack_e8 + 0x50) - *(long *)(lStack_e8 + 0x48) >> 4);
                  func_0x000107c27e9c(&uStack_c0,puVar31);
                  if (*(long *)(lVar37 + 0x50) != *(long *)(lVar37 + 0x48)) {
                    uVar42 = 0;
                    do {
                      FUN_10a942378(&pppplStack_128,lStack_e8,uVar42);
                      FUN_10a904d90(&pppplStack_1a0,param_1,ppppplVar13,&pppplStack_128);
                      uStack_1a4 = SUB84(pppplStack_198,0);
                      puVar31 = &uStack_1a4;
                      FUN_109febd04(&uStack_c0,puVar31);
                      if ((long)pppplStack_118 < 0) {
                        __ZdlPv(pppplStack_128);
                      }
                      uVar42 = uVar42 + 1;
                    } while (uVar42 < (ulong)(*(long *)(lVar37 + 0x50) - *(long *)(lVar37 + 0x48) >>
                                             4));
                  }
                  if ((undefined1 *)(*(long *)(param_1 + 0x6a8) + 0x50) != &uStack_c0) {
                    puVar31 = (undefined4 *)CONCAT26(uStack_ba,CONCAT51(uStack_bf,uStack_c0));
                    FUN_10a0ea4a0();
                  }
                  if (CONCAT26(uStack_ba,CONCAT51(uStack_bf,uStack_c0)) != 0) {
                    uStack_b2 = uStack_ba;
                    uStack_b8 = CONCAT51(uStack_bf,uStack_c0);
                    __ZdlPv();
                  }
                  pppplVar35 = *(long *****)(param_1 + 0x6a8);
                  plVar41 = *(long **)(param_1 + 0x6b0);
                  pppplVar36 = pppplVar35;
                  if (plVar41 != (long *)0x0) {
                    plVar43 = plVar41 + 1;
                    do {
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar21) {
                        *plVar43 = *plVar43 + 1;
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    pppplVar36 = *(long *****)(param_1 + 0x6a8);
                  }
                  ppplStack_1b8 = (long ***)pppplVar35;
                  plStack_1b0 = plVar41;
                  (*(code *)(*pppplVar36)[7])();
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  uStack_c0 = 0;
                  uStack_bf = 0;
                  uStack_ba = 0;
                  pppplStack_a8 = (long ****)0x0;
                  pppplStack_b0 = (long ****)0x0;
                  pppplStack_98 = (long ****)0x0;
                  pppplStack_a0 = (long ****)0x0;
                  pppplStack_90 = (long ****)0x0;
                  func_0x000107c2c4d8(&uStack_c0,pppplVar36,puVar31);
                  if (plVar41 != (long *)0x0) {
                    plVar43 = plVar41 + 2;
                    do {
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar21) {
                        *plVar43 = *plVar43 + 1;
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                  }
                  bVar21 = pppplStack_a0 != (long ****)0x0;
                  pppplStack_a8 = pppplVar35;
                  pppplStack_a0 = (long ****)plVar41;
                  if (bVar21) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  pppplVar29 = pppplVar35 + 2;
                  (*(code *)(*pppplVar29)[3])();
                  pppplVar36 = pppplStack_90;
                  pppplVar19 = pppplStack_90;
                  if (((ulong)pppplVar29 & 1) == 0) {
                    if (plVar41 != (long *)0x0) {
                      plVar43 = plVar41 + 1;
                      do {
                        cVar17 = '\x01';
                        bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                        if (bVar21) {
                          *plVar43 = *plVar43 + 1;
                          cVar17 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar17 != '\0');
                    }
                    pppplStack_98 = pppplVar35;
                    pppplVar19 = (long ****)plVar41;
                    if (pppplStack_90 != (long ****)0x0) {
                      plVar43 = (long *)(pppplStack_90 + 1);
                      do {
                        lVar37 = *plVar43;
                        cVar17 = '\x01';
                        bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                        if (bVar21) {
                          *plVar43 = lVar37 + -1;
                          cVar17 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar17 != '\0');
                      if (lVar37 == 0) {
                        lVar37 = (long)*pppplStack_90;
                        pppplStack_90 = (long ****)plVar41;
                        (**(code **)(lVar37 + 0x10))(pppplVar36);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                        pppplVar19 = pppplStack_90;
                      }
                    }
                  }
                  pppplStack_90 = pppplVar19;
                  if (*(char *)(param_1 + 0x6cf) < '\0') {
                    __ZdlPv(*puVar5);
                  }
                  pppplVar35 = pppplStack_a0;
                  pppplVar36 = pppplStack_a8;
                  *(ulong *)(param_1 + 0x6c0) = CONCAT26(uStack_b2,uStack_b8);
                  *puVar5 = CONCAT26(uStack_ba,CONCAT51(uStack_bf,uStack_c0));
                  *(long *****)(param_1 + 0x6c8) = pppplStack_b0;
                  pppplStack_b0 = (long ****)((ulong)pppplStack_b0 & 0xffffffffffffff);
                  uStack_c0 = 0;
                  pppplStack_a8 = (long ****)0x0;
                  pppplStack_a0 = (long ****)0x0;
                  lVar37 = *(long *)(param_1 + 0x6d8);
                  *(long *****)(param_1 + 0x6d8) = pppplVar35;
                  *(long *****)(param_1 + 0x6d0) = pppplVar36;
                  if (lVar37 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  func_0x00010a328268(param_1 + 0x6e0,&pppplStack_98);
                  pppplVar36 = pppplStack_90;
                  if (pppplStack_90 != (long ****)0x0) {
                    plVar41 = (long *)(pppplStack_90 + 1);
                    do {
                      lVar37 = *plVar41;
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                      if (bVar21) {
                        *plVar41 = lVar37 + -1;
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    if (lVar37 == 0) {
                      (**(code **)((long)*pppplStack_90 + 0x10))(pppplStack_90);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                    }
                  }
                  if (pppplStack_a0 != (long ****)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  plVar41 = plStack_1b0;
                  if (plStack_1b0 != (long *)0x0) {
                    plVar43 = plStack_1b0 + 1;
                    do {
                      lVar37 = *plVar43;
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar21) {
                        *plVar43 = lVar37 + -1;
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    if (lVar37 == 0) {
                      (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    }
                  }
                  ppppplVar26 = (long *****)pppplStack_110;
                  func_0x000107c2b054(&uStack_c0,&UNK_10f6825a7);
                  puVar30 = &uStack_c0;
                  FUN_10a39a09c(ppppplVar26,puVar30,puVar5);
                  func_0x00010a0fda30();
                  puVar28 = (undefined8 *)0x80;
                  __Znwm();
                  puVar28[1] = 0;
                  puVar28[2] = 0;
                  *puVar28 = &PTR_FUN_110bddfe8;
                  *(undefined1 *)(puVar28 + 4) = 0;
                  puVar28[7] = 0;
                  puVar28[6] = 0;
                  puVar28[9] = 0;
                  puVar28[8] = 0;
                  puVar28[0xc] = puVar30;
                  puVar28[0xd] = 0;
                  puVar28[0xe] = 0;
                  puVar28[0xf] = 0;
                  puVar25 = puVar28 + 3;
                  *puVar25 = &PTR_DAT_110bdaee8;
                  puVar28[5] = &PTR_DAT_110bdaf70;
                  puVar28[10] = &PTR_FUN_110bdafc8;
                  puVar28[0xb] = ppppplVar26;
                  uStack_c0 = SUB81(puVar25,0);
                  uStack_bf = (undefined5)((ulong)puVar25 >> 8);
                  uStack_ba = (undefined2)((ulong)puVar25 >> 0x30);
                  uStack_b8 = SUB86(puVar28,0);
                  uStack_b2 = (undefined2)((ulong)puVar28 >> 0x30);
                  FUN_10a494d28(&uStack_c0);
                  uVar18 = CONCAT26(uStack_b2,uStack_b8);
                  uVar40 = CONCAT26(uStack_ba,CONCAT51(uStack_bf,uStack_c0));
                  uStack_c0 = 0;
                  uStack_bf = 0;
                  uStack_ba = 0;
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  plVar41 = *(long **)(param_1 + 0x6f8);
                  *(undefined8 *)(param_1 + 0x6f8) = uVar18;
                  *(undefined8 *)(param_1 + 0x6f0) = uVar40;
                  if (plVar41 != (long *)0x0) {
                    plVar43 = plVar41 + 1;
                    do {
                      lVar37 = *plVar43;
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar21) {
                        *plVar43 = lVar37 + -1;
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    if (lVar37 == 0) {
                      (**(code **)(*plVar41 + 0x10))(plVar41);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    }
                  }
                  plVar41 = (long *)CONCAT26(uStack_b2,uStack_b8);
                  if (plVar41 != (long *)0x0) {
                    plVar43 = plVar41 + 1;
                    do {
                      lVar37 = *plVar43;
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                      if (bVar21) {
                        *plVar43 = lVar37 + -1;
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    if (lVar37 == 0) {
                      (**(code **)(*plVar41 + 0x10))(plVar41);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    }
                  }
                  lVar37 = lStack_e8;
                  uStack_c0 = 0;
                  uStack_bf = 0;
                  uStack_ba = 0;
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  pppplStack_b0 = (long ****)0x0;
                  func_0x000104becb10(&uStack_c0,
                                      *(long *)(lStack_e8 + 0x50) - *(long *)(lStack_e8 + 0x48) >> 4
                                     );
                  if (*(long *)(lVar37 + 0x50) != *(long *)(lVar37 + 0x48)) {
                    uVar42 = 0;
                    do {
                      FUN_10a942378(&pppplStack_128,lStack_e8,uVar42);
                      FUN_10a904d90(&pppplStack_1a0,param_1,ppppplVar13,&pppplStack_128);
                      func_0x0001078db3d4(&uStack_c0,&pppplStack_1a0);
                      if ((long)pppplStack_118 < 0) {
                        __ZdlPv(pppplStack_128);
                      }
                      uVar42 = uVar42 + 1;
                    } while (uVar42 < (ulong)(*(long *)(lVar37 + 0x50) - *(long *)(lVar37 + 0x48) >>
                                             4));
                  }
                  puVar30 = &uStack_c0;
                  func_0x000108b0402c(*(long *)(param_1 + 0x6f0) + 0x50,puVar30);
                  if (CONCAT26(uStack_ba,CONCAT51(uStack_bf,uStack_c0)) != 0) {
                    __ZdlPv();
                  }
                  ppppplVar27 = *(long ******)(param_1 + 0x6f0);
                  ppppplVar44 = *(long ******)(param_1 + 0x6f8);
                  ppppplVar26 = ppppplVar27;
                  if (ppppplVar44 != (long *****)0x0) {
                    ppppplVar26 = ppppplVar44 + 1;
                    do {
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                      if (bVar21) {
                        *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    ppppplVar26 = *(long ******)(param_1 + 0x6f0);
                  }
                  pppplStack_1c8 = (long ****)ppppplVar27;
                  pppplStack_1c0 = (long ****)ppppplVar44;
                  (*(code *)(*ppppplVar26)[7])();
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  uStack_c0 = 0;
                  uStack_bf = 0;
                  uStack_ba = 0;
                  pppplStack_a8 = (long ****)0x0;
                  pppplStack_b0 = (long ****)0x0;
                  pppplStack_98 = (long ****)0x0;
                  pppplStack_a0 = (long ****)0x0;
                  pppplStack_90 = (long ****)0x0;
                  func_0x000107c2c4d8(&uStack_c0,ppppplVar26,puVar30);
                  if (ppppplVar44 != (long *****)0x0) {
                    ppppplVar26 = ppppplVar44 + 2;
                    do {
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                      if (bVar21) {
                        *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                  }
                  bVar21 = pppplStack_a0 != (long ****)0x0;
                  pppplStack_a8 = (long ****)ppppplVar27;
                  pppplStack_a0 = (long ****)ppppplVar44;
                  if (bVar21) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  ppppplVar45 = ppppplVar27 + 2;
                  (*(code *)(*ppppplVar45)[3])();
                  pppplVar36 = pppplStack_90;
                  ppppplVar26 = (long *****)pppplStack_90;
                  if (((ulong)ppppplVar45 & 1) == 0) {
                    if (ppppplVar44 != (long *****)0x0) {
                      ppppplVar26 = ppppplVar44 + 1;
                      do {
                        cVar17 = '\x01';
                        bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                        if (bVar21) {
                          *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
                          cVar17 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar17 != '\0');
                    }
                    pppplStack_98 = (long ****)ppppplVar27;
                    ppppplVar26 = ppppplVar44;
                    if ((long *****)pppplStack_90 != (long *****)0x0) {
                      ppppplVar27 = (long *****)(pppplStack_90 + 1);
                      do {
                        pppplVar35 = *ppppplVar27;
                        cVar17 = '\x01';
                        bVar21 = (bool)ExclusiveMonitorPass(ppppplVar27,0x10);
                        if (bVar21) {
                          *ppppplVar27 = (long ****)((long)pppplVar35 + -1);
                          cVar17 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar17 != '\0');
                      if (pppplVar35 == (long ****)0x0) {
                        pppplVar35 = (long ****)*pppplStack_90;
                        pppplStack_90 = (long ****)ppppplVar44;
                        (*(code *)pppplVar35[2])(pppplVar36);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                        ppppplVar26 = (long *****)pppplStack_90;
                      }
                    }
                  }
                  pppplStack_90 = (long ****)ppppplVar26;
                  if (*(char *)(param_1 + 0x717) < '\0') {
                    __ZdlPv(*puVar6);
                  }
                  pppplVar35 = pppplStack_a0;
                  pppplVar36 = pppplStack_a8;
                  *(ulong *)(param_1 + 0x708) = CONCAT26(uStack_b2,uStack_b8);
                  *puVar6 = CONCAT26(uStack_ba,CONCAT51(uStack_bf,uStack_c0));
                  *(long *****)(param_1 + 0x710) = pppplStack_b0;
                  pppplStack_b0 = (long ****)((ulong)pppplStack_b0 & 0xffffffffffffff);
                  uStack_c0 = 0;
                  pppplStack_a8 = (long ****)0x0;
                  pppplStack_a0 = (long ****)0x0;
                  lVar37 = *(long *)(param_1 + 0x720);
                  *(long *****)(param_1 + 0x720) = pppplVar35;
                  *(long *****)(param_1 + 0x718) = pppplVar36;
                  if (lVar37 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  func_0x00010a328268(param_1 + 0x728,&pppplStack_98);
                  pppplVar36 = pppplStack_90;
                  if ((long *****)pppplStack_90 != (long *****)0x0) {
                    ppppplVar26 = (long *****)(pppplStack_90 + 1);
                    do {
                      pppplVar35 = *ppppplVar26;
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                      if (bVar21) {
                        *ppppplVar26 = (long ****)((long)pppplVar35 + -1);
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    if (pppplVar35 == (long ****)0x0) {
                      (*(code *)(*pppplStack_90)[2])(pppplStack_90);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                    }
                  }
                  if ((long *****)pppplStack_a0 != (long *****)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  pppplVar36 = pppplStack_1c0;
                  if ((long *****)pppplStack_1c0 != (long *****)0x0) {
                    ppppplVar26 = (long *****)(pppplStack_1c0 + 1);
                    do {
                      pppplVar35 = *ppppplVar26;
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                      if (bVar21) {
                        *ppppplVar26 = (long ****)((long)pppplVar35 + -1);
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    if (pppplVar35 == (long ****)0x0) {
                      (*(code *)(*pppplStack_1c0)[2])(pppplStack_1c0);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                    }
                  }
                  pppplVar36 = pppplStack_110;
                  func_0x000107c2b054(&uStack_c0,&UNK_10f6825b5);
                  FUN_10a39a09c(pppplVar36,&uStack_c0,puVar6);
                }
                (*(code *)(*pppplStack_110)[0xd])(pppplStack_110,1);
                uVar40 = 1;
                lVar37 = lVar39;
                func_0x00010a3e4590(lVar39,1);
                func_0x00010a0fda30();
                func_0x00010a91a2e0(&uStack_c0,lVar37,uVar40);
                puVar30 = &uStack_c0;
                plVar43 = (long *)(param_1 + 0x738);
                FUN_10a908864();
                plVar41 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar41 != (long *)0x0) {
                  plVar14 = plVar41 + 1;
                  do {
                    lVar37 = *plVar14;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar21) {
                      *plVar14 = lVar37 + -1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (lVar37 == 0) {
                    (**(code **)(*plVar41 + 0x10))(plVar41);
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                    plVar43 = plVar41;
                  }
                }
                func_0x00010a0fda30();
                puVar28 = (undefined8 *)0xa8;
                __Znwm();
                puVar28[0xe] = 0;
                puVar28[0xd] = 0x3f800000;
                puVar28[0x10] = 0;
                puVar28[0xf] = 0x3f80000000000000;
                puVar28[0x12] = 0x3f800000;
                puVar28[0x11] = 0;
                puVar28[1] = 0;
                puVar28[2] = 0;
                *puVar28 = &PTR_DAT_110bdde08;
                *(undefined1 *)(puVar28 + 4) = 0;
                puVar28[7] = 0;
                puVar28[6] = 0;
                puVar25 = puVar28 + 8;
                puVar28[9] = 0;
                *puVar25 = 0;
                puVar28[0xb] = plVar43;
                puVar28[0xc] = puVar30;
                puVar28[0x14] = 0x3f80000000000000;
                puVar28[0x13] = 0;
                puVar32 = puVar28 + 3;
                *puVar32 = &PTR_FUN_110bda668;
                puVar28[5] = &PTR_FUN_110bda6f0;
                puVar28[10] = &PTR_DAT_110bda748;
                uStack_c0 = SUB81(puVar32,0);
                uStack_bf = (undefined5)((ulong)puVar32 >> 8);
                uStack_ba = (undefined2)((ulong)puVar32 >> 0x30);
                uStack_b8 = SUB86(puVar28,0);
                uStack_b2 = (undefined2)((ulong)puVar28 >> 0x30);
                plVar41 = (long *)&uStack_c0;
                FUN_10a4945bc(plVar41);
                uVar18 = CONCAT26(uStack_b2,uStack_b8);
                uVar40 = CONCAT26(uStack_ba,CONCAT51(uStack_bf,uStack_c0));
                uStack_c0 = 0;
                uStack_bf = 0;
                uStack_ba = 0;
                uStack_b8 = 0;
                uStack_b2 = 0;
                plVar43 = *(long **)(param_1 + 0x750);
                *(undefined8 *)(param_1 + 0x750) = uVar18;
                *(undefined8 *)(param_1 + 0x748) = uVar40;
                if (plVar43 != (long *)0x0) {
                  plVar14 = plVar43 + 1;
                  do {
                    lVar37 = *plVar14;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar21) {
                      *plVar14 = lVar37 + -1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (lVar37 == 0) {
                    (**(code **)(*plVar43 + 0x10))(plVar43);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar43);
                    plVar41 = plVar43;
                  }
                }
                plVar43 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar43 != (long *)0x0) {
                  plVar14 = plVar43 + 1;
                  do {
                    lVar37 = *plVar14;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar21) {
                      *plVar14 = lVar37 + -1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (lVar37 == 0) {
                    (**(code **)(*plVar43 + 0x10))(plVar43);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar43);
                    plVar41 = plVar43;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a2e0(&uStack_c0,plVar41,puVar25);
                puVar30 = &uStack_c0;
                plVar43 = plVar7;
                FUN_10a908864(plVar7,puVar30);
                plVar41 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar41 != (long *)0x0) {
                  plVar14 = plVar41 + 1;
                  do {
                    lVar37 = *plVar14;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar21) {
                      *plVar14 = lVar37 + -1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (lVar37 == 0) {
                    (**(code **)(*plVar41 + 0x10))(plVar41);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    plVar43 = plVar41;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a2e0(&uStack_c0,plVar43,puVar30);
                puVar30 = &uStack_c0;
                plVar43 = plVar8;
                FUN_10a908864(plVar8,puVar30);
                plVar41 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar41 != (long *)0x0) {
                  plVar14 = plVar41 + 1;
                  do {
                    lVar37 = *plVar14;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar21) {
                      *plVar14 = lVar37 + -1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (lVar37 == 0) {
                    (**(code **)(*plVar41 + 0x10))(plVar41);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    plVar43 = plVar41;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a368(&uStack_c0,plVar43,puVar30);
                puVar30 = &uStack_c0;
                plVar43 = plVar9;
                func_0x00010a9088c8(plVar9,puVar30);
                plVar41 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar41 != (long *)0x0) {
                  plVar14 = plVar41 + 1;
                  do {
                    lVar37 = *plVar14;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar21) {
                      *plVar14 = lVar37 + -1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (lVar37 == 0) {
                    (**(code **)(*plVar41 + 0x10))(plVar41);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    plVar43 = plVar41;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a2e0(&uStack_c0,plVar43,puVar30);
                puVar30 = &uStack_c0;
                plVar43 = plVar10;
                FUN_10a908864(plVar10,puVar30);
                plVar41 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar41 != (long *)0x0) {
                  plVar14 = plVar41 + 1;
                  do {
                    lVar37 = *plVar14;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar21) {
                      *plVar14 = lVar37 + -1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (lVar37 == 0) {
                    (**(code **)(*plVar41 + 0x10))(plVar41);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    plVar43 = plVar41;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a368(&uStack_c0,plVar43,puVar30);
                puVar30 = &uStack_c0;
                plVar43 = plVar11;
                func_0x00010a9088c8(plVar11,puVar30);
                plVar41 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar41 != (long *)0x0) {
                  plVar14 = plVar41 + 1;
                  do {
                    lVar37 = *plVar14;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar21) {
                      *plVar14 = lVar37 + -1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (lVar37 == 0) {
                    (**(code **)(*plVar41 + 0x10))(plVar41);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    plVar43 = plVar41;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a3f0(&uStack_c0,plVar43,puVar30);
                puVar30 = &uStack_c0;
                plVar43 = plVar12;
                func_0x00010a90892c(plVar12,puVar30);
                plVar41 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar41 != (long *)0x0) {
                  plVar14 = plVar41 + 1;
                  do {
                    lVar37 = *plVar14;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar21) {
                      *plVar14 = lVar37 + -1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (lVar37 == 0) {
                    (**(code **)(*plVar41 + 0x10))(plVar41);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                    plVar43 = plVar41;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a3f0(&uStack_c0,plVar43,puVar30);
                puVar30 = &uStack_c0;
                func_0x00010a90892c((undefined8 *)(param_1 + 0x7b8),puVar30);
                plVar41 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar41 != (long *)0x0) {
                  plVar43 = plVar41 + 1;
                  do {
                    lVar37 = *plVar43;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                    if (bVar21) {
                      *plVar43 = lVar37 + -1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (lVar37 == 0) {
                    (**(code **)(*plVar41 + 0x10))(plVar41);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                  }
                }
                plStack_1f8 = *(long **)(param_1 + 0x738);
                plStack_1f0 = *(long **)(param_1 + 0x740);
                plVar41 = plStack_1f8;
                if (plStack_1f0 != (long *)0x0) {
                  plVar41 = plStack_1f0 + 1;
                  do {
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                    if (bVar21) {
                      *plVar41 = *plVar41 + 1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  plVar41 = *(long **)(param_1 + 0x738);
                }
                (**(code **)(*plVar41 + 0x38))();
                FUN_10a908990(&uStack_c0,&plStack_1f8,plVar41,puVar30);
                if (*(char *)(param_1 + 0x7df) < '\0') {
                  __ZdlPv(*(undefined8 *)(param_1 + 0x7c8));
                }
                pppplVar35 = pppplStack_a0;
                pppplVar36 = pppplStack_a8;
                *(ulong *)(param_1 + 2000) = CONCAT26(uStack_b2,uStack_b8);
                *(undefined8 *)(param_1 + 0x7c8) = CONCAT26(uStack_ba,CONCAT51(uStack_bf,uStack_c0))
                ;
                *(long *****)(param_1 + 0x7d8) = pppplStack_b0;
                pppplStack_b0 = (long ****)((ulong)pppplStack_b0 & 0xffffffffffffff);
                uStack_c0 = 0;
                pppplStack_a8 = (long ****)0x0;
                pppplStack_a0 = (long ****)0x0;
                lVar37 = *(long *)(param_1 + 0x7e8);
                *(long *****)(param_1 + 0x7e8) = pppplVar35;
                *(long *****)(param_1 + 0x7e0) = pppplVar36;
                if (lVar37 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                ppppplVar26 = &pppplStack_98;
                func_0x00010a328268(param_1 + 0x7f0,ppppplVar26);
                pppplVar36 = pppplStack_90;
                if ((long *****)pppplStack_90 != (long *****)0x0) {
                  ppppplVar27 = (long *****)(pppplStack_90 + 1);
                  do {
                    pppplVar35 = *ppppplVar27;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(ppppplVar27,0x10);
                    if (bVar21) {
                      *ppppplVar27 = (long ****)((long)pppplVar35 + -1);
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (pppplVar35 == (long ****)0x0) {
                    (*(code *)(*pppplStack_90)[2])(pppplStack_90);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                  }
                }
                if (pppplStack_a0 != (long ****)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                plVar41 = plStack_1f0;
                if (plStack_1f0 != (long *)0x0) {
                  plVar43 = plStack_1f0 + 1;
                  do {
                    lVar37 = *plVar43;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                    if (bVar21) {
                      *plVar43 = lVar37 + -1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (lVar37 == 0) {
                    (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                  }
                }
                ppppplVar44 = *(long ******)(param_1 + 0x748);
                ppppplVar45 = *(long ******)(param_1 + 0x750);
                ppppplVar27 = ppppplVar44;
                if (ppppplVar45 != (long *****)0x0) {
                  ppppplVar27 = ppppplVar45 + 1;
                  do {
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(ppppplVar27,0x10);
                    if (bVar21) {
                      *ppppplVar27 = (long ****)((long)*ppppplVar27 + 1);
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  ppppplVar27 = *(long ******)(param_1 + 0x748);
                }
                pppplStack_208 = (long ****)ppppplVar44;
                pppplStack_200 = (long ****)ppppplVar45;
                (*(code *)(*ppppplVar27)[7])();
                uStack_b8 = 0;
                uStack_b2 = 0;
                uStack_c0 = 0;
                uStack_bf = 0;
                uStack_ba = 0;
                pppplStack_a8 = (long ****)0x0;
                pppplStack_b0 = (long ****)0x0;
                pppplStack_98 = (long ****)0x0;
                pppplStack_a0 = (long ****)0x0;
                pppplStack_90 = (long ****)0x0;
                func_0x000107c2c4d8(&uStack_c0,ppppplVar27,ppppplVar26);
                if (ppppplVar45 != (long *****)0x0) {
                  ppppplVar26 = ppppplVar45 + 2;
                  do {
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                    if (bVar21) {
                      *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                }
                bVar21 = pppplStack_a0 != (long ****)0x0;
                pppplStack_a8 = (long ****)ppppplVar44;
                pppplStack_a0 = (long ****)ppppplVar45;
                if (bVar21) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                ppppplVar27 = ppppplVar44 + 2;
                (*(code *)(*ppppplVar27)[3])();
                pppplVar36 = pppplStack_90;
                ppppplVar26 = (long *****)pppplStack_90;
                if (((ulong)ppppplVar27 & 1) == 0) {
                  if (ppppplVar45 != (long *****)0x0) {
                    ppppplVar26 = ppppplVar45 + 1;
                    do {
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                      if (bVar21) {
                        *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                  }
                  pppplStack_98 = (long ****)ppppplVar44;
                  ppppplVar26 = ppppplVar45;
                  if ((long *****)pppplStack_90 != (long *****)0x0) {
                    ppppplVar27 = (long *****)(pppplStack_90 + 1);
                    do {
                      pppplVar35 = *ppppplVar27;
                      cVar17 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(ppppplVar27,0x10);
                      if (bVar21) {
                        *ppppplVar27 = (long ****)((long)pppplVar35 + -1);
                        cVar17 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar17 != '\0');
                    if (pppplVar35 == (long ****)0x0) {
                      pppplVar35 = (long ****)*pppplStack_90;
                      pppplStack_90 = (long ****)ppppplVar45;
                      (*(code *)pppplVar35[2])(pppplVar36);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                      ppppplVar26 = (long *****)pppplStack_90;
                    }
                  }
                }
                pppplStack_90 = (long ****)ppppplVar26;
                if (*(char *)(param_1 + 0x817) < '\0') {
                  __ZdlPv(*(undefined8 *)(param_1 + 0x800));
                }
                pppplVar35 = pppplStack_a0;
                pppplVar36 = pppplStack_a8;
                *(ulong *)(param_1 + 0x808) = CONCAT26(uStack_b2,uStack_b8);
                *(undefined8 *)(param_1 + 0x800) = CONCAT26(uStack_ba,CONCAT51(uStack_bf,uStack_c0))
                ;
                *(long *****)(param_1 + 0x810) = pppplStack_b0;
                pppplStack_b0 = (long ****)((ulong)pppplStack_b0 & 0xffffffffffffff);
                uStack_c0 = 0;
                pppplStack_a8 = (long ****)0x0;
                pppplStack_a0 = (long ****)0x0;
                lVar37 = *(long *)(param_1 + 0x820);
                *(long *****)(param_1 + 0x820) = pppplVar35;
                *(long *****)(param_1 + 0x818) = pppplVar36;
                if (lVar37 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                ppppplVar26 = &pppplStack_98;
                func_0x00010a328268(param_1 + 0x828,ppppplVar26);
                pppplVar36 = pppplStack_90;
                if ((long *****)pppplStack_90 != (long *****)0x0) {
                  ppppplVar27 = (long *****)(pppplStack_90 + 1);
                  do {
                    pppplVar35 = *ppppplVar27;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(ppppplVar27,0x10);
                    if (bVar21) {
                      *ppppplVar27 = (long ****)((long)pppplVar35 + -1);
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (pppplVar35 == (long ****)0x0) {
                    (*(code *)(*pppplStack_90)[2])(pppplStack_90);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                  }
                }
                if (pppplStack_a0 != (long ****)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                pppplVar36 = pppplStack_200;
                if ((long *****)pppplStack_200 != (long *****)0x0) {
                  ppppplVar27 = (long *****)(pppplStack_200 + 1);
                  do {
                    pppplVar35 = *ppppplVar27;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(ppppplVar27,0x10);
                    if (bVar21) {
                      *ppppplVar27 = (long ****)((long)pppplVar35 + -1);
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (pppplVar35 == (long ****)0x0) {
                    (*(code *)(*pppplStack_200)[2])(pppplStack_200);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                  }
                }
                plStack_218 = *(long **)(param_1 + 0x758);
                plStack_210 = *(long **)(param_1 + 0x760);
                plVar41 = plStack_218;
                if (plStack_210 != (long *)0x0) {
                  plVar41 = plStack_210 + 1;
                  do {
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                    if (bVar21) {
                      *plVar41 = *plVar41 + 1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  plVar41 = (long *)*plVar7;
                }
                (**(code **)(*plVar41 + 0x38))();
                FUN_10a908990(&uStack_c0,&plStack_218,plVar41,ppppplVar26);
                if (*(char *)(param_1 + 0x84f) < '\0') {
                  __ZdlPv(*(undefined8 *)(param_1 + 0x838));
                }
                pppplVar35 = pppplStack_a0;
                pppplVar36 = pppplStack_a8;
                *(ulong *)(param_1 + 0x840) = CONCAT26(uStack_b2,uStack_b8);
                *(undefined8 *)(param_1 + 0x838) = CONCAT26(uStack_ba,CONCAT51(uStack_bf,uStack_c0))
                ;
                *(long *****)(param_1 + 0x848) = pppplStack_b0;
                pppplStack_b0 = (long ****)((ulong)pppplStack_b0 & 0xffffffffffffff);
                uStack_c0 = 0;
                pppplStack_a8 = (long ****)0x0;
                pppplStack_a0 = (long ****)0x0;
                lVar37 = *(long *)(param_1 + 0x858);
                *(long *****)(param_1 + 0x858) = pppplVar35;
                *(long *****)(param_1 + 0x850) = pppplVar36;
                if (lVar37 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                ppppplVar26 = &pppplStack_98;
                func_0x00010a328268(param_1 + 0x860,ppppplVar26);
                pppplVar36 = pppplStack_90;
                if ((long *****)pppplStack_90 != (long *****)0x0) {
                  ppppplVar27 = (long *****)(pppplStack_90 + 1);
                  do {
                    pppplVar35 = *ppppplVar27;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(ppppplVar27,0x10);
                    if (bVar21) {
                      *ppppplVar27 = (long ****)((long)pppplVar35 + -1);
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (pppplVar35 == (long ****)0x0) {
                    (*(code *)(*pppplStack_90)[2])(pppplStack_90);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                  }
                }
                if (pppplStack_a0 != (long ****)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                plVar41 = plStack_210;
                if (plStack_210 != (long *)0x0) {
                  plVar43 = plStack_210 + 1;
                  do {
                    lVar37 = *plVar43;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                    if (bVar21) {
                      *plVar43 = lVar37 + -1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (lVar37 == 0) {
                    (**(code **)(*plStack_210 + 0x10))(plStack_210);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                  }
                }
                plStack_228 = *(long **)(param_1 + 0x768);
                plStack_220 = *(long **)(param_1 + 0x770);
                plVar41 = plStack_228;
                if (plStack_220 != (long *)0x0) {
                  plVar41 = plStack_220 + 1;
                  do {
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                    if (bVar21) {
                      *plVar41 = *plVar41 + 1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  plVar41 = (long *)*plVar8;
                }
                (**(code **)(*plVar41 + 0x38))();
                FUN_10a908990(&uStack_c0,&plStack_228,plVar41,ppppplVar26);
                if (*(char *)(param_1 + 0x887) < '\0') {
                  __ZdlPv(*(undefined8 *)(param_1 + 0x870));
                }
                pppplVar35 = pppplStack_a0;
                pppplVar36 = pppplStack_a8;
                *(ulong *)(param_1 + 0x878) = CONCAT26(uStack_b2,uStack_b8);
                *(undefined8 *)(param_1 + 0x870) = CONCAT26(uStack_ba,CONCAT51(uStack_bf,uStack_c0))
                ;
                *(long *****)(param_1 + 0x880) = pppplStack_b0;
                pppplStack_b0 = (long ****)((ulong)pppplStack_b0 & 0xffffffffffffff);
                uStack_c0 = 0;
                pppplStack_a8 = (long ****)0x0;
                pppplStack_a0 = (long ****)0x0;
                lVar37 = *(long *)(param_1 + 0x890);
                *(long *****)(param_1 + 0x890) = pppplVar35;
                *(long *****)(param_1 + 0x888) = pppplVar36;
                if (lVar37 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                ppppplVar26 = &pppplStack_98;
                func_0x00010a328268(param_1 + 0x898,ppppplVar26);
                pppplVar36 = pppplStack_90;
                if ((long *****)pppplStack_90 != (long *****)0x0) {
                  ppppplVar27 = (long *****)(pppplStack_90 + 1);
                  do {
                    pppplVar35 = *ppppplVar27;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(ppppplVar27,0x10);
                    if (bVar21) {
                      *ppppplVar27 = (long ****)((long)pppplVar35 + -1);
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (pppplVar35 == (long ****)0x0) {
                    (*(code *)(*pppplStack_90)[2])(pppplStack_90);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                  }
                }
                if (pppplStack_a0 != (long ****)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                plVar41 = plStack_220;
                if (plStack_220 != (long *)0x0) {
                  plVar43 = plStack_220 + 1;
                  do {
                    lVar37 = *plVar43;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                    if (bVar21) {
                      *plVar43 = lVar37 + -1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (lVar37 == 0) {
                    (**(code **)(*plStack_220 + 0x10))(plStack_220);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                  }
                }
                plStack_238 = *(long **)(param_1 + 0x778);
                plStack_230 = *(long **)(param_1 + 0x780);
                plVar41 = plStack_238;
                if (plStack_230 != (long *)0x0) {
                  plVar41 = plStack_230 + 1;
                  do {
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                    if (bVar21) {
                      *plVar41 = *plVar41 + 1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  plVar41 = (long *)*plVar9;
                }
                (**(code **)(*plVar41 + 0x38))();
                FUN_10a908a88(&uStack_c0,&plStack_238,plVar41,ppppplVar26);
                if (*(char *)(param_1 + 0x8bf) < '\0') {
                  __ZdlPv(*(undefined8 *)(param_1 + 0x8a8));
                }
                pppplVar35 = pppplStack_a0;
                pppplVar36 = pppplStack_a8;
                *(ulong *)(param_1 + 0x8b0) = CONCAT26(uStack_b2,uStack_b8);
                *(undefined8 *)(param_1 + 0x8a8) = CONCAT26(uStack_ba,CONCAT51(uStack_bf,uStack_c0))
                ;
                *(long *****)(param_1 + 0x8b8) = pppplStack_b0;
                pppplStack_b0 = (long ****)((ulong)pppplStack_b0 & 0xffffffffffffff);
                uStack_c0 = 0;
                pppplStack_a8 = (long ****)0x0;
                pppplStack_a0 = (long ****)0x0;
                lVar37 = *(long *)(param_1 + 0x8c8);
                *(long *****)(param_1 + 0x8c8) = pppplVar35;
                *(long *****)(param_1 + 0x8c0) = pppplVar36;
                if (lVar37 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                ppppplVar26 = &pppplStack_98;
                func_0x00010a328268(param_1 + 0x8d0,ppppplVar26);
                pppplVar36 = pppplStack_90;
                if ((long *****)pppplStack_90 != (long *****)0x0) {
                  ppppplVar27 = (long *****)(pppplStack_90 + 1);
                  do {
                    pppplVar35 = *ppppplVar27;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(ppppplVar27,0x10);
                    if (bVar21) {
                      *ppppplVar27 = (long ****)((long)pppplVar35 + -1);
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (pppplVar35 == (long ****)0x0) {
                    (*(code *)(*pppplStack_90)[2])(pppplStack_90);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                  }
                }
                if (pppplStack_a0 != (long ****)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                plVar41 = plStack_230;
                if (plStack_230 != (long *)0x0) {
                  plVar43 = plStack_230 + 1;
                  do {
                    lVar37 = *plVar43;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                    if (bVar21) {
                      *plVar43 = lVar37 + -1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (lVar37 == 0) {
                    (**(code **)(*plStack_230 + 0x10))(plStack_230);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                  }
                }
                plStack_248 = *(long **)(param_1 + 0x788);
                plStack_240 = *(long **)(param_1 + 0x790);
                plVar41 = plStack_248;
                if (plStack_240 != (long *)0x0) {
                  plVar41 = plStack_240 + 1;
                  do {
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                    if (bVar21) {
                      *plVar41 = *plVar41 + 1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  plVar41 = (long *)*plVar10;
                }
                (**(code **)(*plVar41 + 0x38))();
                FUN_10a908990(&uStack_c0,&plStack_248,plVar41,ppppplVar26);
                if (*(char *)(param_1 + 0x967) < '\0') {
                  __ZdlPv(*(undefined8 *)(param_1 + 0x950));
                }
                pppplVar35 = pppplStack_a0;
                pppplVar36 = pppplStack_a8;
                *(ulong *)(param_1 + 0x958) = CONCAT26(uStack_b2,uStack_b8);
                *(undefined8 *)(param_1 + 0x950) = CONCAT26(uStack_ba,CONCAT51(uStack_bf,uStack_c0))
                ;
                *(long *****)(param_1 + 0x960) = pppplStack_b0;
                pppplStack_b0 = (long ****)((ulong)pppplStack_b0 & 0xffffffffffffff);
                uStack_c0 = 0;
                pppplStack_a8 = (long ****)0x0;
                pppplStack_a0 = (long ****)0x0;
                lVar37 = *(long *)(param_1 + 0x970);
                *(long *****)(param_1 + 0x970) = pppplVar35;
                *(long *****)(param_1 + 0x968) = pppplVar36;
                if (lVar37 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                ppppplVar26 = &pppplStack_98;
                func_0x00010a328268(param_1 + 0x978,ppppplVar26);
                pppplVar36 = pppplStack_90;
                if ((long *****)pppplStack_90 != (long *****)0x0) {
                  ppppplVar27 = (long *****)(pppplStack_90 + 1);
                  do {
                    pppplVar35 = *ppppplVar27;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(ppppplVar27,0x10);
                    if (bVar21) {
                      *ppppplVar27 = (long ****)((long)pppplVar35 + -1);
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (pppplVar35 == (long ****)0x0) {
                    (*(code *)(*pppplStack_90)[2])(pppplStack_90);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                  }
                }
                if (pppplStack_a0 != (long ****)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                plVar41 = plStack_240;
                if (plStack_240 != (long *)0x0) {
                  plVar43 = plStack_240 + 1;
                  do {
                    lVar37 = *plVar43;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                    if (bVar21) {
                      *plVar43 = lVar37 + -1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (lVar37 == 0) {
                    (**(code **)(*plStack_240 + 0x10))(plStack_240);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                  }
                }
                plStack_258 = *(long **)(param_1 + 0x798);
                plStack_250 = *(long **)(param_1 + 0x7a0);
                plVar41 = plStack_258;
                if (plStack_250 != (long *)0x0) {
                  plVar41 = plStack_250 + 1;
                  do {
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                    if (bVar21) {
                      *plVar41 = *plVar41 + 1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  plVar41 = (long *)*plVar11;
                }
                (**(code **)(*plVar41 + 0x38))();
                FUN_10a908a88(&uStack_c0,&plStack_258,plVar41,ppppplVar26);
                if (*(char *)(param_1 + 0x99f) < '\0') {
                  __ZdlPv(*(undefined8 *)(param_1 + 0x988));
                }
                pppplVar35 = pppplStack_a0;
                pppplVar36 = pppplStack_a8;
                *(ulong *)(param_1 + 0x990) = CONCAT26(uStack_b2,uStack_b8);
                *(undefined8 *)(param_1 + 0x988) = CONCAT26(uStack_ba,CONCAT51(uStack_bf,uStack_c0))
                ;
                *(long *****)(param_1 + 0x998) = pppplStack_b0;
                pppplStack_b0 = (long ****)((ulong)pppplStack_b0 & 0xffffffffffffff);
                uStack_c0 = 0;
                pppplStack_a8 = (long ****)0x0;
                pppplStack_a0 = (long ****)0x0;
                lVar37 = *(long *)(param_1 + 0x9a8);
                *(long *****)(param_1 + 0x9a8) = pppplVar35;
                *(long *****)(param_1 + 0x9a0) = pppplVar36;
                if (lVar37 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                ppppplVar26 = &pppplStack_98;
                func_0x00010a328268(param_1 + 0x9b0,ppppplVar26);
                pppplVar36 = pppplStack_90;
                if ((long *****)pppplStack_90 != (long *****)0x0) {
                  ppppplVar27 = (long *****)(pppplStack_90 + 1);
                  do {
                    pppplVar35 = *ppppplVar27;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(ppppplVar27,0x10);
                    if (bVar21) {
                      *ppppplVar27 = (long ****)((long)pppplVar35 + -1);
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (pppplVar35 == (long ****)0x0) {
                    (*(code *)(*pppplStack_90)[2])(pppplStack_90);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                  }
                }
                if (pppplStack_a0 != (long ****)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                plVar41 = plStack_250;
                if (plStack_250 != (long *)0x0) {
                  plVar43 = plStack_250 + 1;
                  do {
                    lVar37 = *plVar43;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                    if (bVar21) {
                      *plVar43 = lVar37 + -1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (lVar37 == 0) {
                    (**(code **)(*plStack_250 + 0x10))(plStack_250);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                  }
                }
                plStack_268 = *(long **)(param_1 + 0x7a8);
                plStack_260 = *(long **)(param_1 + 0x7b0);
                plVar41 = plStack_268;
                if (plStack_260 != (long *)0x0) {
                  plVar41 = plStack_260 + 1;
                  do {
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                    if (bVar21) {
                      *plVar41 = *plVar41 + 1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  plVar41 = (long *)*plVar12;
                }
                (**(code **)(*plVar41 + 0x38))();
                FUN_10a908b80(&uStack_c0,&plStack_268,plVar41,ppppplVar26);
                if (*(char *)(param_1 + 0x8f7) < '\0') {
                  __ZdlPv(*(undefined8 *)(param_1 + 0x8e0));
                }
                pppplVar35 = pppplStack_a0;
                pppplVar36 = pppplStack_a8;
                *(ulong *)(param_1 + 0x8e8) = CONCAT26(uStack_b2,uStack_b8);
                *(undefined8 *)(param_1 + 0x8e0) = CONCAT26(uStack_ba,CONCAT51(uStack_bf,uStack_c0))
                ;
                *(long *****)(param_1 + 0x8f0) = pppplStack_b0;
                pppplStack_b0 = (long ****)((ulong)pppplStack_b0 & 0xffffffffffffff);
                uStack_c0 = 0;
                pppplStack_a8 = (long ****)0x0;
                pppplStack_a0 = (long ****)0x0;
                lVar37 = *(long *)(param_1 + 0x900);
                *(long *****)(param_1 + 0x900) = pppplVar35;
                *(long *****)(param_1 + 0x8f8) = pppplVar36;
                if (lVar37 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                ppppplVar26 = &pppplStack_98;
                func_0x00010a328268(param_1 + 0x908,ppppplVar26);
                pppplVar36 = pppplStack_90;
                if ((long *****)pppplStack_90 != (long *****)0x0) {
                  ppppplVar27 = (long *****)(pppplStack_90 + 1);
                  do {
                    pppplVar35 = *ppppplVar27;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(ppppplVar27,0x10);
                    if (bVar21) {
                      *ppppplVar27 = (long ****)((long)pppplVar35 + -1);
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (pppplVar35 == (long ****)0x0) {
                    (*(code *)(*pppplStack_90)[2])(pppplStack_90);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                  }
                }
                if (pppplStack_a0 != (long ****)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                plVar41 = plStack_260;
                if (plStack_260 != (long *)0x0) {
                  plVar43 = plStack_260 + 1;
                  do {
                    lVar37 = *plVar43;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                    if (bVar21) {
                      *plVar43 = lVar37 + -1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (lVar37 == 0) {
                    (**(code **)(*plStack_260 + 0x10))(plStack_260);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                  }
                }
                plStack_278 = *(long **)(param_1 + 0x7b8);
                plStack_270 = *(long **)(param_1 + 0x7c0);
                plVar41 = plStack_278;
                if (plStack_270 != (long *)0x0) {
                  plVar41 = plStack_270 + 1;
                  do {
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                    if (bVar21) {
                      *plVar41 = *plVar41 + 1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  plVar41 = *(long **)(param_1 + 0x7b8);
                }
                (**(code **)(*plVar41 + 0x38))();
                FUN_10a908b80(&uStack_c0,&plStack_278,plVar41,ppppplVar26);
                if (*(char *)(param_1 + 0x92f) < '\0') {
                  __ZdlPv(*(undefined8 *)(param_1 + 0x918));
                }
                pppplVar35 = pppplStack_a0;
                pppplVar36 = pppplStack_a8;
                *(ulong *)(param_1 + 0x920) = CONCAT26(uStack_b2,uStack_b8);
                *(undefined8 *)(param_1 + 0x918) = CONCAT26(uStack_ba,CONCAT51(uStack_bf,uStack_c0))
                ;
                *(long *****)(param_1 + 0x928) = pppplStack_b0;
                pppplStack_b0 = (long ****)((ulong)pppplStack_b0 & 0xffffffffffffff);
                uStack_c0 = 0;
                pppplStack_a8 = (long ****)0x0;
                pppplStack_a0 = (long ****)0x0;
                lVar37 = *(long *)(param_1 + 0x938);
                *(long *****)(param_1 + 0x938) = pppplVar35;
                *(long *****)(param_1 + 0x930) = pppplVar36;
                if (lVar37 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                func_0x00010a328268(param_1 + 0x940,&pppplStack_98);
                pppplVar36 = pppplStack_90;
                if ((long *****)pppplStack_90 != (long *****)0x0) {
                  ppppplVar26 = (long *****)(pppplStack_90 + 1);
                  do {
                    pppplVar35 = *ppppplVar26;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                    if (bVar21) {
                      *ppppplVar26 = (long ****)((long)pppplVar35 + -1);
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (pppplVar35 == (long ****)0x0) {
                    (*(code *)(*pppplStack_90)[2])(pppplStack_90);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                  }
                }
                if ((long *****)pppplStack_a0 != (long *****)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                plVar41 = plStack_270;
                if (plStack_270 != (long *)0x0) {
                  plVar43 = plStack_270 + 1;
                  do {
                    lVar37 = *plVar43;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                    if (bVar21) {
                      *plVar43 = lVar37 + -1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (lVar37 == 0) {
                    (**(code **)(*plStack_270 + 0x10))(plStack_270);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                  }
                }
                if ((long *****)pppplStack_108 != (long *****)0x0) {
                  ppppplVar26 = (long *****)(pppplStack_108 + 2);
                  do {
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
                    if (bVar21) {
                      *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                }
                lVar37 = *(long *)(param_1 + 0x5c8);
                *(long *****)(param_1 + 0x5c8) = pppplStack_108;
                *(long *****)(param_1 + 0x5c0) = pppplStack_110;
                if (lVar37 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                func_0x00010a0d77bc(&uStack_c0,lVar39);
                lVar37 = param_1 + 0x560;
                pppplStack_128 = (long ****)ppppplVar13;
                FUN_10a91a478(lVar37,ppppplVar13,&pppplStack_128);
                plVar41 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar41 != (long *)0x0) {
                  plVar43 = plVar41 + 2;
                  do {
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                    if (bVar21) {
                      *plVar43 = *plVar43 + 1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                }
                lVar39 = *(long *)(lVar37 + 0x40);
                *(ulong *)(lVar37 + 0x40) = CONCAT26(uStack_b2,uStack_b8);
                *(ulong *)(lVar37 + 0x38) = CONCAT26(uStack_ba,CONCAT51(uStack_bf,uStack_c0));
                if (lVar39 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv(lVar39);
                  plVar41 = (long *)CONCAT26(uStack_b2,uStack_b8);
                }
                if (plVar41 != (long *)0x0) {
                  plVar43 = plVar41 + 1;
                  do {
                    lVar37 = *plVar43;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                    if (bVar21) {
                      *plVar43 = lVar37 + -1;
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (lVar37 == 0) {
                    (**(code **)(*plVar41 + 0x10))(plVar41);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                  }
                }
                pppplVar36 = pppplStack_108;
                if ((long *****)pppplStack_108 != (long *****)0x0) {
                  ppppplVar13 = (long *****)(pppplStack_108 + 1);
                  do {
                    pppplVar35 = *ppppplVar13;
                    cVar17 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(ppppplVar13,0x10);
                    if (bVar21) {
                      *ppppplVar13 = (long ****)((long)pppplVar35 + -1);
                      cVar17 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar17 != '\0');
                  if (pppplVar35 == (long ****)0x0) {
                    (*(code *)(*pppplStack_108)[2])(pppplStack_108);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar36);
                  }
                }
              }
              plVar41 = plStack_f0;
              if (plStack_f0 != (long *)0x0) {
                plVar43 = plStack_f0 + 1;
                do {
                  lVar37 = *plVar43;
                  cVar17 = '\x01';
                  bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                  if (bVar21) {
                    *plVar43 = lVar37 + -1;
                    cVar17 = ExclusiveMonitorsStatus();
                  }
                } while (cVar17 != '\0');
                if (lVar37 == 0) {
                  (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                }
              }
            }
            plVar41 = plStack_e0;
            if (plStack_e0 != (long *)0x0) {
              plVar43 = plStack_e0 + 1;
              do {
                lVar37 = *plVar43;
                cVar17 = '\x01';
                bVar21 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                if (bVar21) {
                  *plVar43 = lVar37 + -1;
                  cVar17 = ExclusiveMonitorsStatus();
                }
              } while (cVar17 != '\0');
              if (lVar37 == 0) {
                (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
              }
            }
          }
          puVar28 = (undefined8 *)puVar34[1];
          puVar25 = puVar34;
          if ((undefined8 *)puVar34[1] == (undefined8 *)0x0) {
            do {
              puVar34 = (undefined8 *)puVar25[2];
              bVar21 = (undefined8 *)*puVar34 != puVar25;
              puVar25 = puVar34;
            } while (bVar21);
          }
          else {
            do {
              puVar34 = puVar28;
              puVar28 = (undefined8 *)*puVar34;
            } while ((undefined8 *)*puVar34 != (undefined8 *)0x0);
          }
        } while (puVar34 != auStack_d0);
      }
      func_0x000107c27bf0(&puStack_d8,auStack_d0[0]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a0edfc4(&uStack_c0);
LAB_10a907c3c:
                    /* WARNING: Does not return */
  pcVar20 = (code *)SoftwareBreakpoint(1,0x10a907c40);
  (*pcVar20)();
}



/* Entry: 10a907f80; end: 10a9085f7;  */

/* WARNING: Removing unreachable block (ram,0x00010a90819c) */
/* WARNING: Removing unreachable block (ram,0x00010a9080f0) */
/* WARNING: Removing unreachable block (ram,0x00010a90830c) */
/* WARNING: Removing unreachable block (ram,0x00010a908310) */
/* WARNING: Removing unreachable block (ram,0x00010a90832c) */

void FUN_10a907f80(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  long *plVar5;
  code *pcVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long *plVar22;
  uint *puVar23;
  long *plVar24;
  ulong uVar25;
  ulong *puVar26;
  long *plVar27;
  ulong *puVar28;
  ulong *puVar29;
  uint *puVar30;
  long *plVar31;
  uint uStack_64;
  
  lVar10 = *(long *)(*(long *)(param_1 + 0x170) + 0xc58);
  if (lVar10 != 0) {
    plVar31 = *(long **)(param_1 + 0x548);
    while (plVar31 != (long *)(param_1 + 0x550)) {
      plVar8 = (long *)plVar31[8];
      if ((plVar8 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar8 != (long *)0x0)) {
        uVar25 = plVar31[7];
        if ((uVar25 != 0) && (*(char *)((long)plVar31 + 0x4c) == '\x01')) {
          uVar2 = *(uint *)(plVar31 + 9);
          if (uVar2 < 0x20) {
            puVar11 = *(uint **)(uVar25 + 0x310);
            puVar13 = *(uint **)(uVar25 + 0x318);
            if (puVar11 == puVar13) {
LAB_10a908040:
              if (puVar11 != puVar13) {
                uStack_64 = uStack_64 & 0xffffff00;
                func_0x00010a90a404(uVar25,*(long *)(lVar10 + 0x78) + (ulong)uVar2 * 0x20 + 0x2800,
                                    &uStack_64);
                puVar23 = *(uint **)(uVar25 + 0x318);
                puVar30 = *(uint **)(uVar25 + 0x310);
                puVar13 = puVar23;
                puVar11 = puVar30;
                uStack_64 = uVar2;
                if (puVar30 != puVar23) {
LAB_10a908084:
                  if (*puVar11 != uVar2) goto code_r0x00010a908090;
                  puVar12 = puVar11;
                  if (puVar11 != puVar23) {
                    while (puVar12 = puVar12 + 1, puVar12 != puVar23) {
                      if (*puVar12 != uVar2) {
                        *puVar11 = *puVar12;
                        puVar11 = puVar11 + 1;
                      }
                    }
                  }
                  if (puVar23 < puVar11) goto LAB_10a9085e0;
                  if (puVar11 != puVar23) {
                    *(uint **)(uVar25 + 0x318) = puVar11;
                    puVar13 = puVar11;
                  }
                }
LAB_10a90810c:
                if ((long)puVar23 - (long)puVar30 != (long)puVar13 - (long)puVar30) {
                  puVar13 = *(uint **)(uVar25 + 0x330);
                  puVar11 = *(uint **)(uVar25 + 0x328);
                  if (puVar11 != puVar13) {
LAB_10a908134:
                    if (*puVar11 != uVar2) goto code_r0x00010a908140;
                    puVar30 = puVar11;
                    if (puVar11 != puVar13) {
                      while (puVar30 = puVar30 + 1, puVar30 != puVar13) {
                        if (*puVar30 != uVar2) {
                          *puVar11 = *puVar30;
                          puVar11 = puVar11 + 1;
                        }
                      }
                    }
                    if (puVar13 < puVar11) {
LAB_10a9085e0:
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a9085e4);
                      (*pcVar6)();
                    }
                    if (puVar11 != puVar13) {
                      *(uint **)(uVar25 + 0x330) = puVar11;
                    }
                  }
LAB_10a9081b0:
                  FUN_10a8fd8d0(uVar25,uVar2);
                  puVar11 = *(uint **)(uVar25 + 0x300);
                  lVar15 = (long)puVar11 - (long)*(uint **)(uVar25 + 0x2f8);
                  if (lVar15 != 0) {
                    uVar14 = lVar15 >> 2;
                    puVar13 = *(uint **)(uVar25 + 0x2f8);
                    do {
                      uVar16 = uVar14 >> 1;
                      puVar11 = puVar13 + uVar16 + 1;
                      uVar14 = uVar14 + (uVar14 >> 1 ^ 0xffffffffffffffff);
                      if (puVar13[uVar16] <= uVar2) {
                        puVar11 = puVar13;
                        uVar14 = uVar16;
                      }
                      puVar13 = puVar11;
                    } while (uVar14 != 0);
                  }
                  FUN_10a18f698(uVar25 + 0x2f8,puVar11,&uStack_64);
                  puVar13 = *(uint **)(uVar25 + 0x318);
                  puVar30 = *(uint **)(uVar25 + 0x310);
                }
                if (((param_2 & 1) == 0) && ((int)((ulong)((long)puVar13 - (long)puVar30) >> 2) < 1)
                   ) {
                  FUN_10a8fd980(lVar10 + 0x68,uVar25 + 0x58);
                  lVar15 = *(long *)(uVar25 + 0x60);
                  lVar9 = *(long *)(uVar25 + 0x68);
                  while (lVar9 != lVar15) {
                    lVar9 = lVar9 + -0x90;
                    FUN_10a8fdc18();
                  }
                  *(long *)(uVar25 + 0x68) = lVar15;
                  func_0x00010a941380(uVar25 + 0x1418);
                  plVar1 = *(long **)(lVar10 + 0x38);
                  for (plVar24 = *(long **)(lVar10 + 0x30); plVar24 != plVar1; plVar24 = plVar24 + 1
                      ) {
                    lVar15 = *plVar24;
                    puVar26 = *(ulong **)(lVar15 + 200);
                    puVar28 = *(ulong **)(lVar15 + 0xd0);
                    if (puVar26 != puVar28) {
LAB_10a908298:
                      if (*puVar26 != uVar25) goto code_r0x00010a9082a4;
                      if ((puVar26 != puVar28) && (puVar29 = puVar26 + 2, puVar29 != puVar28)) {
                        do {
                          if (*puVar29 != uVar25) {
                            FUN_10a90a2d0(puVar26,puVar29);
                            puVar26 = puVar26 + 2;
                          }
                          puVar29 = puVar29 + 2;
                        } while (puVar29 != puVar28);
                        puVar28 = *(ulong **)(lVar15 + 0xd0);
                      }
                      if (puVar28 < puVar26) goto LAB_10a9085e0;
                      if (puVar26 != puVar28) {
                        while (puVar28 != puVar26) {
                          puVar28 = puVar28 + -2;
                          FUN_10a91a1f8(puVar28);
                        }
                        *(ulong **)(lVar15 + 0xd0) = puVar26;
                      }
                    }
LAB_10a90834c:
                    lVar15 = *plVar24;
                    uVar14 = *(ulong *)(lVar15 + 0x100);
                    if (uVar14 != 0) {
                      uVar16 = ((ulong)(uint)((int)uVar25 << 3) + 8 ^ uVar25 >> 0x20) *
                               -0x622015f714c7d297;
                      uVar16 = (uVar25 >> 0x20 ^ uVar16 >> 0x2f ^ uVar16) * -0x622015f714c7d297;
                      uVar16 = (uVar16 ^ uVar16 >> 0x2f) * -0x622015f714c7d297;
                      uVar17 = uVar14 - 1;
                      if ((uVar14 & uVar17) == 0) {
                        uVar18 = uVar16 & uVar17;
                      }
                      else {
                        uVar18 = uVar16;
                        if (uVar14 <= uVar16) {
                          uVar18 = 0;
                          if (uVar14 != 0) {
                            uVar18 = uVar16 / uVar14;
                          }
                          uVar18 = uVar16 - uVar18 * uVar14;
                        }
                      }
                      lVar9 = *(long *)(lVar15 + 0xf8);
                      puVar20 = *(undefined8 **)(lVar9 + uVar18 * 8);
                      if ((puVar20 != (undefined8 *)0x0) &&
                         (plVar27 = (long *)*puVar20, plVar27 != (long *)0x0)) {
LAB_10a9083c0:
                        uVar21 = plVar27[1];
                        if (uVar21 == uVar16) {
                          if (plVar27[2] != uVar25) goto LAB_10a908404;
                          if ((uVar14 & uVar17) == 0) {
                            uVar16 = uVar16 & uVar17;
                          }
                          else if (uVar14 <= uVar16) {
                            uVar18 = 0;
                            if (uVar14 != 0) {
                              uVar18 = uVar16 / uVar14;
                            }
                            uVar16 = uVar16 - uVar18 * uVar14;
                          }
                          lVar19 = *plVar27;
                          plVar5 = *(long **)(lVar9 + uVar16 * 8);
                          do {
                            plVar22 = plVar5;
                            plVar5 = (long *)*plVar22;
                          } while ((long *)*plVar22 != plVar27);
                          if (plVar22 == (long *)(lVar15 + 0x108)) {
LAB_10a908484:
                            if (lVar19 == 0) {
LAB_10a9084b8:
                              *(undefined8 *)(lVar9 + uVar16 * 8) = 0;
                              lVar19 = *plVar27;
                              goto LAB_10a9084c0;
                            }
                            uVar18 = *(ulong *)(lVar19 + 8);
                            if ((uVar14 & uVar17) == 0) {
                              uVar21 = uVar18 & uVar17;
                            }
                            else {
                              uVar21 = uVar18;
                              if (uVar14 <= uVar18) {
                                uVar21 = 0;
                                if (uVar14 != 0) {
                                  uVar21 = uVar18 / uVar14;
                                }
                                uVar21 = uVar18 - uVar21 * uVar14;
                              }
                            }
                            if (uVar21 != uVar16) goto LAB_10a9084b8;
LAB_10a9084c8:
                            if ((uVar14 & uVar17) == 0) {
                              uVar18 = uVar18 & uVar17;
                            }
                            else if (uVar14 <= uVar18) {
                              uVar17 = 0;
                              if (uVar14 != 0) {
                                uVar17 = uVar18 / uVar14;
                              }
                              uVar18 = uVar18 - uVar17 * uVar14;
                            }
                            if (uVar18 != uVar16) {
                              *(long **)(*(long *)(lVar15 + 0xf8) + uVar18 * 8) = plVar22;
                              lVar19 = *plVar27;
                            }
                          }
                          else {
                            uVar18 = plVar22[1];
                            if ((uVar14 & uVar17) == 0) {
                              uVar18 = uVar18 & uVar17;
                            }
                            else if (uVar14 <= uVar18) {
                              uVar21 = 0;
                              if (uVar14 != 0) {
                                uVar21 = uVar18 / uVar14;
                              }
                              uVar18 = uVar18 - uVar21 * uVar14;
                            }
                            if (uVar18 != uVar16) goto LAB_10a908484;
LAB_10a9084c0:
                            if (lVar19 != 0) {
                              uVar18 = *(ulong *)(lVar19 + 8);
                              goto LAB_10a9084c8;
                            }
                          }
                          *plVar22 = lVar19;
                          *plVar27 = 0;
                          *(long *)(lVar15 + 0x110) = *(long *)(lVar15 + 0x110) + -1;
                          FUN_10a91a1f8(plVar27 + 2);
                          __ZdlPv(plVar27);
                        }
                        else {
                          if ((uVar14 & uVar17) == 0) {
                            uVar21 = uVar21 & uVar17;
                          }
                          else if (uVar14 <= uVar21) {
                            uVar4 = 0;
                            if (uVar14 != 0) {
                              uVar4 = uVar21 / uVar14;
                            }
                            uVar21 = uVar21 - uVar4 * uVar14;
                          }
                          if (uVar21 == uVar18) goto LAB_10a908404;
                        }
                      }
                    }
LAB_10a90851c:
                  }
                }
              }
            }
            else {
              do {
                if (*puVar11 == uVar2) goto LAB_10a908040;
                puVar11 = puVar11 + 1;
              } while (puVar11 != puVar13);
            }
          }
          if (plVar8 == (long *)0x0) goto LAB_10a90855c;
        }
        plVar24 = plVar8 + 1;
        do {
          lVar15 = *plVar24;
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar7) {
            *plVar24 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
LAB_10a90855c:
      plVar8 = (long *)plVar31[1];
      plVar24 = plVar31;
      if ((long *)plVar31[1] == (long *)0x0) {
        do {
          plVar31 = (long *)plVar24[2];
          bVar7 = (long *)*plVar31 != plVar24;
          plVar24 = plVar31;
        } while (bVar7);
      }
      else {
        do {
          plVar31 = plVar8;
          plVar8 = (long *)*plVar31;
        } while ((long *)*plVar31 != (long *)0x0);
      }
    }
  }
  func_0x00010a9195cc(*(undefined8 *)(param_1 + 0x550));
  *(long *)(param_1 + 0x548) = param_1 + 0x550;
  *(undefined8 *)(param_1 + 0x558) = 0;
  *(undefined8 *)(param_1 + 0x550) = 0;
  return;
code_r0x00010a908090:
  puVar11 = puVar11 + 1;
  if (puVar11 == puVar23) goto LAB_10a90810c;
  goto LAB_10a908084;
code_r0x00010a908140:
  puVar11 = puVar11 + 1;
  if (puVar11 == puVar13) goto LAB_10a9081b0;
  goto LAB_10a908134;
code_r0x00010a9082a4:
  puVar26 = puVar26 + 2;
  if (puVar26 == puVar28) goto LAB_10a90834c;
  goto LAB_10a908298;
LAB_10a908404:
  plVar27 = (long *)*plVar27;
  if (plVar27 == (long *)0x0) goto LAB_10a90851c;
  goto LAB_10a9083c0;
}



/* Entry: 10a9085f8; end: 10a908707;  */

void FUN_10a9085f8(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar6 = (long *)(param_1 + 0x560);
  lVar5 = 0x560;
  do {
    plVar7 = (long *)*plVar6;
    while (plVar7 != plVar6 + 1) {
      plVar3 = (long *)plVar7[8];
      if ((plVar3 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar3 != (long *)0x0)) {
        if (plVar7[7] != 0) {
          FUN_10a3e00f4();
        }
        plVar8 = plVar3 + 1;
        do {
          lVar4 = *plVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = lVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
      plVar3 = (long *)plVar7[1];
      plVar8 = plVar7;
      if ((long *)plVar7[1] == (long *)0x0) {
        do {
          plVar7 = (long *)plVar8[2];
          bVar2 = (long *)*plVar7 != plVar8;
          plVar8 = plVar7;
        } while (bVar2);
      }
      else {
        do {
          plVar7 = plVar3;
          plVar3 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    }
    func_0x00010a9102c4(plVar6[1]);
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)(plVar6 + 1);
    lVar5 = lVar5 + 0x18;
    plVar6 = (long *)(param_1 + lVar5);
  } while (lVar5 != 0x5c0);
  return;
}



/* Entry: 10a908708; end: 10a90876b;  */

undefined8 * FUN_10a908708(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a90876c; end: 10a908863;  */

void FUN_10a90876c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  func_0x000107c2c4d8(param_1,param_3,param_4);
  lVar7 = param_2[1];
  lVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = param_1[4];
  param_1[4] = lVar7;
  param_1[3] = lVar6;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar5 = (long *)(*param_2 + 0x10);
  (**(code **)(*plVar5 + 0x18))();
  if (((ulong)plVar5 & 1) == 0) {
    lVar7 = param_2[1];
    lVar6 = *param_2;
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
    plVar5 = (long *)param_1[6];
    param_1[6] = lVar7;
    param_1[5] = lVar6;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a908864; end: 10a90898f;  */

undefined8 * FUN_10a908864(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a908990; end: 10a908a87;  */

void FUN_10a908990(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  func_0x000107c2c4d8(param_1,param_3,param_4);
  lVar7 = param_2[1];
  lVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = param_1[4];
  param_1[4] = lVar7;
  param_1[3] = lVar6;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar5 = (long *)(*param_2 + 0x10);
  (**(code **)(*plVar5 + 0x18))();
  if (((ulong)plVar5 & 1) == 0) {
    lVar7 = param_2[1];
    lVar6 = *param_2;
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
    plVar5 = (long *)param_1[6];
    param_1[6] = lVar7;
    param_1[5] = lVar6;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a908a88; end: 10a908b7f;  */

void FUN_10a908a88(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  func_0x000107c2c4d8(param_1,param_3,param_4);
  lVar7 = param_2[1];
  lVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = param_1[4];
  param_1[4] = lVar7;
  param_1[3] = lVar6;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar5 = (long *)(*param_2 + 0x10);
  (**(code **)(*plVar5 + 0x18))();
  if (((ulong)plVar5 & 1) == 0) {
    lVar7 = param_2[1];
    lVar6 = *param_2;
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
    plVar5 = (long *)param_1[6];
    param_1[6] = lVar7;
    param_1[5] = lVar6;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a908b80; end: 10a908c77;  */

void FUN_10a908b80(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  func_0x000107c2c4d8(param_1,param_3,param_4);
  lVar7 = param_2[1];
  lVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = param_1[4];
  param_1[4] = lVar7;
  param_1[3] = lVar6;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar5 = (long *)(*param_2 + 0x10);
  (**(code **)(*plVar5 + 0x18))();
  if (((ulong)plVar5 & 1) == 0) {
    lVar7 = param_2[1];
    lVar6 = *param_2;
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
    plVar5 = (long *)param_1[6];
    param_1[6] = lVar7;
    param_1[5] = lVar6;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a908c78; end: 10a908d3b;  */

long * FUN_10a908c78(long *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar11 = puVar2 + 1;
    *puVar2 = *param_2;
    plVar6 = param_1;
  }
  else {
    lVar10 = (long)puVar2 - *param_1;
    uVar1 = (lVar10 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10a3ebd38();
      if (param_3 != 0) {
        plVar9 = (long *)(param_3 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = *plVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar9 = (long *)param_1[1];
      *param_1 = (long)param_2;
      param_1[1] = param_3;
      if (plVar9 != (long *)0x0) {
        plVar6 = plVar9 + 1;
        do {
          lVar10 = *plVar6;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar5) {
            *plVar6 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      return param_1;
    }
    uVar7 = param_1[2] - *param_1;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    plVar9 = param_1;
    FUN_10a3ebd4c();
    lVar3 = *param_1;
    puVar2 = (undefined8 *)((long)plVar9 + lVar10);
    lVar10 = (long)puVar2 - (param_1[1] - lVar3);
    puVar11 = puVar2 + 1;
    *puVar2 = *param_2;
    _memcpy(lVar10,lVar3);
    plVar6 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = (long)puVar11;
    param_1[2] = (long)(plVar9 + uVar8);
    if (plVar6 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar11;
  return plVar6;
}



/* Entry: 10a908d3c; end: 10a908def;  */

undefined8 * FUN_10a908d3c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10a908df0; end: 10a909003;  */

void FUN_10a908df0(undefined4 param_1,float param_2,float *param_3,long param_4,long param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined4 uStack_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long *plStack_70;
  float afStack_68 [5];
  float fStack_54;
  
  uVar5 = *(undefined8 *)(*(long *)(param_4 + 0x170) + 0xa20);
  FUN_10a394a64(param_5);
  func_0x00010acae698(param_5 + 0x268);
  uStack_b8 = param_1;
  fStack_b4 = param_2;
  FUN_10a394a64(param_5);
  FUN_10a3962dc(afStack_68,0x3f800000,uVar5,&uStack_b8,param_5 + 0x2a0,param_4 + 0x308,
                &UNK_10e4e3440,&UNK_10e4e344c,0);
  fVar8 = fStack_54 * 0.0;
  fVar9 = (float)afStack_68._12_8_ * 0.0;
  fVar10 = SUB84(afStack_68._12_8_,4) * 0.0;
  uVar11 = NEON_rev64(CONCAT44(fVar10,fVar9),4);
  fVar9 = fVar9 + fVar10;
  param_3[0xe] = fStack_54 + fVar9 + 0.0;
  param_3[0xf] = fVar9 + fVar8 + 1.0;
  fVar9 = afStack_68[0] * 0.0;
  *param_3 = afStack_68[0];
  param_3[1] = fVar9;
  param_3[2] = fVar9;
  param_3[3] = fVar9;
  fVar9 = (float)afStack_68._4_8_ * 0.0;
  fVar10 = SUB84(afStack_68._4_8_,4) * 0.0;
  *(ulong *)(param_3 + 4) = CONCAT44((float)afStack_68._4_8_,fVar9);
  *(ulong *)(param_3 + 8) = CONCAT44(fVar10,fVar10);
  *(ulong *)(param_3 + 6) = CONCAT44(fVar9,fVar9);
  uVar5 = CONCAT44(fVar10,SUB84(afStack_68._4_8_,4));
  *(undefined8 *)(param_3 + 10) = uVar5;
  *(ulong *)(param_3 + 0xc) =
       CONCAT44(SUB84(afStack_68._12_8_,4) + (float)((ulong)uVar11 >> 0x20) + fVar8 + 0.0,
                (float)afStack_68._12_8_ + (float)uVar11 + fVar8 + 0.0);
  lStack_78 = 0;
  plStack_70 = (long *)0x0;
  plVar4 = *(long **)(param_4 + 0x250);
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    uVar7 = (undefined4)uVar5;
    plStack_70 = plVar4;
    if (plVar4 != (long *)0x0) {
      lVar6 = *(long *)(param_4 + 0x248);
      lStack_78 = lVar6;
      if (lVar6 != 0) {
        FUN_10a394a64(param_5);
        lVar6 = *(long *)(lVar6 + 0x1f0);
        func_0x00010acae698(param_5 + 0x268);
        uStack_b8 = uVar7;
        fStack_b4 = fVar9;
        FUN_10a423d54(lVar6 + 0x24,lVar6 + 0x2c,&uStack_b8,&UNK_10e4e3440,&UNK_10e4e344c,param_3);
      }
    }
  }
  lVar6 = *(long *)(*(long *)(param_4 + 0x168) + 0x140);
  if ((*(byte *)(lVar6 + 0x2a) & 0x24) != 0) {
    FUN_10a3e8fd4(lVar6);
  }
  func_0x000109519fd0(&uStack_b8,lVar6 + 0xc0,param_3);
  *(undefined8 *)(param_3 + 2) = uStack_b0;
  *(ulong *)param_3 = CONCAT44(fStack_b4,uStack_b8);
  *(undefined8 *)(param_3 + 6) = uStack_a0;
  *(undefined8 *)(param_3 + 4) = uStack_a8;
  *(undefined8 *)(param_3 + 10) = uStack_90;
  *(undefined8 *)(param_3 + 8) = uStack_98;
  *(undefined8 *)(param_3 + 0xe) = uStack_80;
  *(undefined8 *)(param_3 + 0xc) = uStack_88;
  if (plVar4 != (long *)0x0) {
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
  return;
}



/* Entry: 10a909004; end: 10a909123;  */

void FUN_10a909004(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  long *plStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar6 = *(long **)(param_2 + 0x5a8);
  while (plVar6 != (long *)(param_2 + 0x5b0)) {
    plVar3 = (long *)plVar6[8];
    if ((plVar3 != (long *)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar3, plVar3 != (long *)0x0)) {
      plVar4 = (long *)plVar6[7];
      plStack_40 = plVar4;
      if ((plVar4 != (long *)0x0) && (FUN_10a909124(), plVar4 != (long *)0x0)) {
        (**(code **)(*plVar4 + 400))(auStack_70);
        FUN_10a01e958(&uStack_58,param_1,auStack_70);
        param_1[1] = uStack_50;
        *param_1 = uStack_58;
        param_1[2] = uStack_48;
      }
      plVar4 = plVar3 + 1;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    plVar3 = (long *)plVar6[1];
    plVar4 = plVar6;
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar6 = (long *)plVar4[2];
        bVar2 = (long *)*plVar6 != plVar4;
        plVar4 = plVar6;
      } while (bVar2);
    }
    else {
      do {
        plVar6 = plVar3;
        plVar3 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a909124; end: 10a90918f;  */

void FUN_10a909124(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x158);
  while ((lVar2 != param_1 + 0x150 &&
         ((lVar1 = *(long *)(lVar2 + 0x10), lVar1 == 0 ||
          (___dynamic_cast(lVar1,&PTR_DAT_110bd31d8,&PTR_DAT_110bd9df0,0), lVar1 == 0))))) {
    lVar2 = *(long *)(lVar2 + 8);
  }
  return;
}



/* Entry: 10a909190; end: 10a9091e3;  */

void FUN_10a909190(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_10a909004(auStack_38);
  lVar1 = *(long *)(param_2 + 0x178);
  if ((*(byte *)(lVar1 + 0x2a) >> 6 & 1) != 0) {
    func_0x00010a3e933c(lVar1);
  }
  FUN_10a005448(param_1,auStack_38,lVar1 + 0x100);
  return;
}



/* Entry: 10a9091e4; end: 10a9092a3;  */

void FUN_10a9091e4(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 auStack_60 [2];
  char cStack_49;
  
  lVar1 = *param_1;
  if (((lVar1 != 0) && (*(long **)(lVar1 + 0x228) != *(long **)(lVar1 + 0x230))) &&
     (lVar1 = **(long **)(lVar1 + 0x228), lVar1 != 0)) {
    ppuVar2 = &PTR_DAT_110c2dcf0;
    lVar3 = 4;
    do {
      func_0x000107c2b074(auStack_60,ppuVar2);
      FUN_10a8fe820(lVar1,auStack_60,param_2,param_3);
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
      }
      param_2 = param_2 + 0x10;
      ppuVar2 = ppuVar2 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 10a9092a4; end: 10a90937b;  */

void FUN_10a9092a4(long param_1,float *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  lVar6 = 0;
  uStack_38 = CONCAT44((int)param_2[1],(int)*param_2);
  do {
    if (*(long *)(param_1 + lVar6 * 0x10) != 0) {
      FUN_10a1f2d1c(&lStack_48);
      if (lStack_48 != 0) {
        FUN_10a1ddfe4(lStack_48,&uStack_38);
        uStack_58 = 0;
        uStack_50 = uStack_38;
        FUN_10a1de1fc(lStack_48,&uStack_58);
      }
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
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 4);
  return;
}



/* Entry: 10a90937c; end: 10a90947f;  */

void FUN_10a90937c(float param_1,float param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  uStack_38 = CONCAT44((int)param_2,(int)param_1);
  if (param_3[1] - *param_3 != 0) {
    uVar8 = 0;
    uVar6 = param_3[1] - *param_3 >> 4;
    if (3 < uVar6) {
      uVar6 = 4;
    }
    do {
      if ((ulong)(param_3[1] - *param_3 >> 4) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a909468);
        (*pcVar5)();
      }
      if (*(long *)(*param_3 + uVar8 * 0x10) != 0) {
        FUN_10a1f2d1c(&lStack_48);
        if (lStack_48 != 0) {
          FUN_10a1ddfe4(lStack_48,&uStack_38);
          uStack_58 = 0;
          uStack_50 = uStack_38;
          FUN_10a1de1fc(lStack_48,&uStack_58);
        }
        plVar4 = plStack_40;
        if (plStack_40 != (long *)0x0) {
          plVar1 = plStack_40 + 1;
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
            (**(code **)(*plStack_40 + 0x10))(plStack_40);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar6);
  }
  return;
}



/* Entry: 10a909480; end: 10a909817;  */

/* WARNING: Removing unreachable block (ram,0x00010a9095cc) */
/* WARNING: Removing unreachable block (ram,0x00010a909584) */
/* WARNING: Removing unreachable block (ram,0x00010a9095dc) */

void FUN_10a909480(float param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_150;
  long *plStack_148;
  float fStack_140;
  float fStack_13c;
  undefined4 uStack_138;
  undefined8 uStack_134;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  float fStack_120;
  float fStack_11c;
  undefined4 uStack_118;
  undefined8 uStack_114;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  float fStack_100;
  float fStack_fc;
  undefined4 uStack_f8;
  undefined8 uStack_f4;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  float fStack_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined4 uStack_70;
  
  puVar3 = &uStack_1a0;
  puVar4 = &uStack_1a0;
  fVar9 = -param_1;
  uStack_134 = 0;
  uStack_12c = 0x3f800000;
  uStack_128 = 0x3f80000000000000;
  uStack_114 = 0;
  uStack_10c = 0x3f800000;
  uStack_108 = 0;
  uStack_f4 = 0;
  uStack_ec = 0x3f800000;
  uStack_e8 = 0x3f800000;
  uStack_cc = 0x3f800000;
  uStack_d4 = 0;
  uStack_c8 = 0x3f8000003f800000;
  fStack_140 = fVar9;
  fStack_13c = param_1;
  uStack_138 = param_2;
  fStack_120 = fVar9;
  fStack_11c = fVar9;
  uStack_118 = param_2;
  fStack_100 = param_1;
  fStack_fc = fVar9;
  uStack_f8 = param_2;
  fStack_e0 = param_1;
  fStack_dc = param_1;
  uStack_d8 = param_2;
  FUN_10a0d0194(&lStack_150,&uStack_1a0);
  lStack_198 = 0;
  lStack_190 = 0;
  uStack_188 = 0;
  uStack_178 = 0xffffffffffffffff;
  uStack_180 = 0xffffffffffffffff;
  uStack_168 = 0xffffffffffffffff;
  uStack_170 = 0xffffffffffffffff;
  uStack_160 = 0xffffffff;
  uStack_1a0 = (ulong)uStack_1a0._4_4_ << 0x20;
  FUN_10ab6e728();
  FUN_10ab6f958(&lStack_198,puVar3);
  FUN_10ab6f86c(&uStack_1a0);
  func_0x000107c2b074(&plStack_c0,&PTR_s_normal_110c2de88);
  uStack_98 = uStack_b8;
  plStack_a0 = plStack_c0;
  uStack_88 = uStack_a8;
  uStack_80 = 0x500000000;
  uStack_78 = 3;
  uStack_74 = 1;
  uStack_70 = 0;
  FUN_10ab6f9a8(&uStack_1a0,&plStack_a0);
  FUN_10ab6f020();
  FUN_10ab6f958(&lStack_198,puVar4);
  FUN_10ab6f86c(&uStack_1a0);
  lVar6 = lStack_150;
  *(undefined4 *)(lStack_150 + 0xf0) = (undefined4)uStack_1a0;
  if ((undefined8 *)(lStack_150 + 0xf0) != &uStack_1a0) {
    FUN_10a1903c4(lStack_150 + 0xf8,lStack_198,lStack_190,
                  (lStack_190 - lStack_198 >> 3) * 0x6db6db6db6db6db7);
  }
  *(undefined8 *)(lVar6 + 0x118) = uStack_178;
  *(undefined8 *)(lVar6 + 0x110) = uStack_180;
  *(undefined8 *)(lVar6 + 0x128) = uStack_168;
  *(undefined8 *)(lVar6 + 0x120) = uStack_170;
  *(undefined8 *)(lVar6 + 0x130) = uStack_160;
  plStack_a0 = &lStack_198;
  func_0x00010a190844(&plStack_a0);
  *(undefined8 *)(lStack_150 + 0xe8) = 1;
  uStack_1a0 = 0;
  lStack_198 = 0;
  lStack_190 = 0;
  func_0x000107c2b048(&uStack_1a0,&fStack_140,&plStack_c0,0x80);
  lVar6 = lStack_150;
  plVar7 = (long *)(lStack_150 + 0x10);
  lVar5 = *plVar7;
  if (lVar5 != 0) {
    *(long *)(lStack_150 + 0x18) = lVar5;
    __ZdlPv();
    *plVar7 = 0;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    *(undefined8 *)(lVar6 + 0x20) = 0;
  }
  *(long *)(lVar6 + 0x18) = lStack_198;
  *(long *)(lVar6 + 0x10) = uStack_1a0;
  *(long *)(lVar6 + 0x20) = lStack_190;
  uStack_1a0 = 0;
  lStack_198 = 0;
  lStack_190 = 0;
  func_0x000107c2b048(&uStack_1a0,&UNK_10e4e3458,&DAT_10e4e3464,0xc);
  lVar6 = lStack_150;
  plVar7 = (long *)(lStack_150 + 0x28);
  lVar5 = *plVar7;
  if (lVar5 != 0) {
    *(long *)(lStack_150 + 0x30) = lVar5;
    __ZdlPv();
    *plVar7 = 0;
    *(undefined8 *)(lVar6 + 0x30) = 0;
    *(undefined8 *)(lVar6 + 0x38) = 0;
  }
  *(long *)(lVar6 + 0x30) = lStack_198;
  *(long *)(lVar6 + 0x28) = uStack_1a0;
  *(long *)(lVar6 + 0x38) = lStack_190;
  fVar8 = param_1;
  if (0.0 <= param_1) {
    fVar8 = fVar9;
  }
  *(float *)(lStack_150 + 0x144) = fVar8;
  *(float *)(lStack_150 + 0x148) = fVar8;
  *(undefined4 *)(lStack_150 + 0x14c) = param_2;
  if (param_1 <= 0.0) {
    param_1 = fVar9;
  }
  *(float *)(lStack_150 + 0x138) = param_1;
  *(float *)(lStack_150 + 0x13c) = param_1;
  *(undefined4 *)(lStack_150 + 0x140) = param_2;
  *(undefined8 *)(lStack_150 + 0x158) = 0x3f8000003f800000;
  *(undefined8 *)(lStack_150 + 0x150) = 0;
  uStack_1a0 = 0;
  FUN_10a0cf7c4(param_3,&uStack_1a0,&lStack_150);
  if (plStack_148 != (long *)0x0) {
    plVar7 = plStack_148 + 1;
    do {
      lVar6 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_148);
    }
  }
  return;
}



/* Entry: 10a909818; end: 10a909ac3;  */

undefined8 ***** FUN_10a909818(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined8 ****ppppuVar9;
  long lVar10;
  undefined8 ****ppppuVar11;
  ulong uVar12;
  undefined8 ****ppppuVar13;
  undefined8 ***pppuVar14;
  ulong uVar15;
  long lVar16;
  undefined8 ****ppppuVar17;
  undefined8 ****ppppuStack_110;
  ulong uStack_108;
  byte bStack_f9;
  undefined8 ****ppppuStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 ****ppppuStack_e0;
  undefined8 ***pppuStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 ****ppppuStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 ***pppuStack_a8;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined7 uStack_98;
  undefined1 uStack_91;
  ulong uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  long lStack_78;
  
  lVar16 = 0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar8 = (undefined8 *****)0x19;
  if ((param_3 | 7) != 0x17) {
    pppppuVar8 = (undefined8 *****)((param_3 | 7) + 1);
  }
  do {
    if (0x7ffffffffffffff7 < param_3) {
      func_0x000109ffde50();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a909a54);
      (*pcVar5)();
    }
    if (param_3 < 0x17) {
      uStack_e8 = CONCAT17((char)param_3,(undefined7)uStack_e8);
      pppppuVar7 = &ppppuStack_f8;
      if (param_3 != 0) goto LAB_10a9098c0;
    }
    else {
      pppppuVar7 = pppppuVar8;
      __Znwm();
      ppppuStack_f8 = pppppuVar7;
      uStack_f0 = param_3;
      uStack_e8 = (ulong)pppppuVar8 | 0x8000000000000000;
LAB_10a9098c0:
      _memmove(pppppuVar7,param_2,param_3);
    }
    *(undefined1 *)((long)pppppuVar7 + param_3) = 0;
    pppppuVar7 = &ppppuStack_f8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppuVar7,&DAT_10f62a9e8,1);
    pppuStack_d8 = pppppuVar7[1];
    ppppuStack_e0 = *pppppuVar7;
    pppuStack_d0 = pppppuVar7[2];
    pppppuVar7[1] = (undefined8 ****)0x0;
    pppppuVar7[2] = (undefined8 ****)0x0;
    *pppppuVar7 = (undefined8 ****)0x0;
    __ZNSt3__19to_stringEm(&ppppuStack_110,lVar16);
    uVar1 = uStack_108;
    pppppuVar7 = (undefined8 *****)ppppuStack_110;
    if (-1 < (char)bStack_f9) {
      uVar1 = (ulong)bStack_f9;
      pppppuVar7 = &ppppuStack_110;
    }
    pppppuVar6 = &ppppuStack_e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppuVar6,pppppuVar7,uVar1);
    pppuStack_b8 = pppppuVar6[1];
    ppppuStack_c0 = *pppppuVar6;
    pppuStack_b0 = pppppuVar6[2];
    pppppuVar6[1] = (undefined8 ****)0x0;
    pppppuVar6[2] = (undefined8 ****)0x0;
    *pppppuVar6 = (undefined8 ****)0x0;
    pppppuVar7 = &ppppuStack_c0;
    ppppuVar11 = (undefined8 ****)&DAT_10f62a9ea;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppuVar7,&DAT_10f62a9ea,1);
    pppuStack_a8 = *pppppuVar7;
    uStack_88 = SUB87(pppppuVar7[1],0);
    uStack_81 = (undefined1)*(undefined8 *)((long)pppppuVar7 + 0xf);
    uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)pppppuVar7 + 0xf) >> 8);
    uStack_91 = *(undefined1 *)((long)pppppuVar7 + 0x17);
    pppppuVar7[1] = (undefined8 ****)0x0;
    pppppuVar7[2] = (undefined8 ****)0x0;
    *pppppuVar7 = (undefined8 ****)0x0;
    uStack_98 = uStack_80;
    uStack_a0 = uStack_88;
    uStack_99 = uStack_81;
    uStack_88 = 0;
    uStack_81 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    pppppuVar7 = (undefined8 *****)&pppuStack_a8;
    func_0x000107c2b080();
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      pppppuVar7 = (undefined8 *****)*param_1;
      __ZdlPv();
    }
    param_1[1] = CONCAT17(uStack_99,uStack_a0);
    *param_1 = (ulong)pppuStack_a8;
    uVar1 = CONCAT17(uStack_91,uStack_98);
    uStack_91 = 0;
    pppuStack_a8 = (undefined8 ***)((ulong)pppuStack_a8 & 0xffffffffffffff00);
    param_1[2] = uVar1;
    param_1[3] = uStack_90;
    if ((long)pppuStack_b0 < 0) {
      pppppuVar7 = (undefined8 *****)ppppuStack_c0;
      __ZdlPv();
    }
    if ((char)bStack_f9 < '\0') {
      pppppuVar7 = (undefined8 *****)ppppuStack_110;
      __ZdlPv();
    }
    if ((long)pppuStack_d0 < 0) {
      pppppuVar7 = (undefined8 *****)ppppuStack_e0;
      __ZdlPv();
    }
    if ((long)uStack_e8 < 0) {
      pppppuVar7 = (undefined8 *****)ppppuStack_f8;
      __ZdlPv();
    }
    lVar16 = lVar16 + 1;
    param_1 = param_1 + 4;
  } while (lVar16 != 0x20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return pppppuVar7;
  }
  ___stack_chk_fail();
  if ((long)uStack_e8 < 0) {
    __ZdlPv(ppppuStack_f8);
  }
  __Unwind_Resume();
  pppppuVar8 = pppppuVar7;
  FUN_10a03c0d0();
  *pppppuVar8 = (undefined8 ****)&PTR_FUN_110c2d348;
  FUN_10a909480(0x3f000000,0,pppppuVar8 + 4);
  pppppuVar7[6] = (undefined8 ****)0x0;
  *(undefined4 *)(pppppuVar7 + 9) = 0;
  pppppuVar7[7] = (undefined8 ****)0x0;
  pppppuVar7[8] = (undefined8 ****)0x0;
  FUN_10a909480(0x3f800000,0xbf800000,pppppuVar7 + 10);
  pppppuVar7[0xd] = (undefined8 ****)0x0;
  pppppuVar7[0xc] = ppppuVar11;
  pppppuVar7[0xe] = (undefined8 ****)0x0;
  ppppuVar9 = (undefined8 ****)0x3000;
  __Znwm();
  lVar16 = 0;
  do {
    puVar2 = (undefined8 *)((long)ppppuVar9 + lVar16);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0x28cd94bfde;
    lVar16 = lVar16 + 0x20;
  } while (lVar16 != 0x400);
  lVar16 = 0;
  do {
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x410) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x408) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x400) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x418) = 0x28cd94bfde;
    lVar16 = lVar16 + 0x20;
  } while (lVar16 != 0x400);
  lVar16 = 0;
  do {
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x810) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x808) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x800) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x818) = 0x28cd94bfde;
    lVar16 = lVar16 + 0x20;
  } while (lVar16 != 0x400);
  lVar16 = 0;
  do {
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0xc10) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0xc08) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0xc00) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0xc18) = 0x28cd94bfde;
    lVar16 = lVar16 + 0x20;
  } while (lVar16 != 0x400);
  lVar16 = 0;
  do {
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x1010) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x1008) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x1000) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x1018) = 0x28cd94bfde;
    lVar16 = lVar16 + 0x20;
  } while (lVar16 != 0x400);
  lVar16 = -0x400;
  do {
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x1810) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x1808) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x1800) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x1818) = 0x28cd94bfde;
    lVar16 = lVar16 + 0x20;
  } while (lVar16 != 0);
  lVar16 = -0x400;
  do {
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x1c10) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x1c08) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x1c00) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x1c18) = 0x28cd94bfde;
    lVar16 = lVar16 + 0x20;
  } while (lVar16 != 0);
  lVar16 = -0x400;
  do {
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x2010) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x2008) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x2000) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x2018) = 0x28cd94bfde;
    lVar16 = lVar16 + 0x20;
  } while (lVar16 != 0);
  lVar16 = 0;
  do {
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x2010) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x2008) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x2000) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x2018) = 0x28cd94bfde;
    lVar16 = lVar16 + 0x20;
  } while (lVar16 != 0x400);
  lVar16 = -0x400;
  do {
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x2810) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x2808) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x2800) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x2818) = 0x28cd94bfde;
    lVar16 = lVar16 + 0x20;
  } while (lVar16 != 0);
  lVar16 = -0x400;
  do {
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x2c10) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x2c08) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x2c00) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x2c18) = 0x28cd94bfde;
    lVar16 = lVar16 + 0x20;
  } while (lVar16 != 0);
  lVar16 = -0x400;
  do {
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x3010) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x3008) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x3000) = 0;
    *(undefined8 *)((long)ppppuVar9 + lVar16 + 0x3018) = 0x28cd94bfde;
    lVar16 = lVar16 + 0x20;
  } while (lVar16 != 0);
  FUN_10a909818(ppppuVar9,&UNK_10f68264f,0xe);
  FUN_10a909818(ppppuVar9 + 0x80,&UNK_10f68265e,0x15);
  FUN_10a909818(ppppuVar9 + 0x100,&UNK_10f682674,0xf);
  FUN_10a909818(ppppuVar9 + 0x180,&UNK_10f682684,0x12);
  FUN_10a909818(ppppuVar9 + 0x200,&UNK_10f682697,0x19);
  FUN_10a909818(ppppuVar9 + 0x280,&UNK_10f6826b1,0x19);
  FUN_10a909818(ppppuVar9 + 0x300,&UNK_10f6826cb,0x20);
  FUN_10a909818(ppppuVar9 + 0x380,&UNK_10f6826ec,0xf);
  FUN_10a909818(ppppuVar9 + 0x400,&UNK_10f6826fc,0xf);
  FUN_10a909818(ppppuVar9 + 0x480,&UNK_10f68270c,0xf);
  FUN_10a909818(ppppuVar9 + 0x500,&UNK_10f68271c,0xe);
  FUN_10a909818(ppppuVar9 + 0x580,&UNK_10f68272b,0x13);
  pppppuVar7[0x11] = (undefined8 ****)0x0;
  pppppuVar7[0x10] = (undefined8 ****)0x0;
  pppppuVar7[0xf] = ppppuVar9;
  pppppuVar7[0x13] = (undefined8 ****)0x0;
  pppppuVar7[0x12] = (undefined8 ****)0x0;
  *(undefined4 *)(pppppuVar7 + 0x14) = 0x3f800000;
  ppppuVar9 = (undefined8 ****)ppppuVar11[0x19f];
  ppppuVar13 = (undefined8 ****)ppppuVar11[0x1a0];
  if (ppppuVar13 != (undefined8 ****)0x0) {
    ppppuVar17 = ppppuVar13 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppuVar17,0x10);
      if (bVar4) {
        *ppppuVar17 = (undefined8 ***)((long)*ppppuVar17 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppppuVar17 = pppppuVar7[0xe];
  pppppuVar7[0xd] = ppppuVar9;
  pppppuVar7[0xe] = ppppuVar13;
  if (ppppuVar17 != (undefined8 ****)0x0) {
    ppppuVar9 = ppppuVar17 + 1;
    do {
      pppuVar14 = *ppppuVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppuVar9,0x10);
      if (bVar4) {
        *ppppuVar9 = (undefined8 ***)((long)pppuVar14 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (pppuVar14 == (undefined8 ***)0x0) {
      (*(code *)(*ppppuVar17)[2])(ppppuVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar17);
    }
    ppppuVar9 = pppppuVar7[0xd];
  }
  if (ppppuVar9 != (undefined8 ****)0x0) {
    pppuVar14 = (undefined8 ***)0x130;
    __Znwm();
    FUN_10a93f44c();
    ppppuVar9 = pppppuVar7[7];
    if (ppppuVar9 < pppppuVar7[8]) {
      ppppuVar17 = ppppuVar9 + 1;
      *ppppuVar9 = pppuVar14;
    }
    else {
      ppppuVar13 = pppppuVar7[6];
      lVar16 = (long)ppppuVar9 - (long)ppppuVar13;
      uVar1 = (lVar16 >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
        FUN_10a91047c();
LAB_10a909f80:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a909f84);
        (*pcVar5)();
      }
      uVar12 = (long)pppppuVar7[8] - (long)ppppuVar13;
      uVar15 = (long)uVar12 >> 2;
      if (uVar15 <= uVar1) {
        uVar15 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar12) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 >> 0x3d != 0) {
        func_0x000109ffded8();
        goto LAB_10a909f80;
      }
      lVar10 = uVar15 << 3;
      __Znwm();
      puVar2 = (undefined8 *)(lVar10 + lVar16);
      ppppuVar17 = (undefined8 ****)(puVar2 + 1);
      *puVar2 = pppuVar14;
      _memcpy(puVar2 + -(lVar16 >> 3),ppppuVar13,lVar16);
      pppppuVar7[6] = (undefined8 ****)(puVar2 + -(lVar16 >> 3));
      pppppuVar7[7] = ppppuVar17;
      pppppuVar7[8] = (undefined8 ****)(lVar10 + uVar15 * 8);
      if (ppppuVar13 != (undefined8 ****)0x0) {
        __ZdlPv(ppppuVar13);
      }
    }
    pppppuVar7[7] = ppppuVar17;
    FUN_10a5ae998(pppppuVar7[1],&PTR_DAT_110b9f988,ppppuVar11,pppppuVar7);
  }
  return pppppuVar7;
}



/* Entry: 10a909ac4; end: 10a90a207;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010a909b0c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 * FUN_10a909ac4(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  
  puVar6 = param_2;
  FUN_10a03c0d0();
  *puVar6 = &PTR_FUN_110c2d348;
  FUN_10a909480(param_1,0,puVar6 + 4);
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  FUN_10a909480(param_1,0xbf800000,param_2 + 10);
  param_2[0xd] = 0;
  param_2[0xc] = param_3;
  param_2[0xe] = 0;
  lVar7 = 0x3000;
  __Znwm();
  lVar11 = 0;
  do {
    puVar6 = (undefined8 *)(lVar7 + lVar11);
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0x28cd94bfde;
    lVar11 = lVar11 + 0x20;
  } while (lVar11 != 0x400);
  lVar11 = 0;
  do {
    lVar9 = lVar7 + lVar11;
    *(undefined8 *)(lVar9 + 0x410) = 0;
    *(undefined8 *)(lVar9 + 0x408) = 0;
    *(undefined8 *)(lVar9 + 0x400) = 0;
    *(undefined8 *)(lVar9 + 0x418) = 0x28cd94bfde;
    lVar11 = lVar11 + 0x20;
  } while (lVar11 != 0x400);
  lVar11 = 0;
  do {
    lVar9 = lVar7 + lVar11;
    *(undefined8 *)(lVar9 + 0x810) = 0;
    *(undefined8 *)(lVar9 + 0x808) = 0;
    *(undefined8 *)(lVar9 + 0x800) = 0;
    *(undefined8 *)(lVar9 + 0x818) = 0x28cd94bfde;
    lVar11 = lVar11 + 0x20;
  } while (lVar11 != 0x400);
  lVar11 = 0;
  do {
    lVar9 = lVar7 + lVar11;
    *(undefined8 *)(lVar9 + 0xc10) = 0;
    *(undefined8 *)(lVar9 + 0xc08) = 0;
    *(undefined8 *)(lVar9 + 0xc00) = 0;
    *(undefined8 *)(lVar9 + 0xc18) = 0x28cd94bfde;
    lVar11 = lVar11 + 0x20;
  } while (lVar11 != 0x400);
  lVar11 = 0;
  do {
    lVar9 = lVar7 + lVar11;
    *(undefined8 *)(lVar9 + 0x1010) = 0;
    *(undefined8 *)(lVar9 + 0x1008) = 0;
    *(undefined8 *)(lVar9 + 0x1000) = 0;
    *(undefined8 *)(lVar9 + 0x1018) = 0x28cd94bfde;
    lVar11 = lVar11 + 0x20;
  } while (lVar11 != 0x400);
  lVar11 = -0x400;
  do {
    lVar9 = lVar7 + lVar11;
    *(undefined8 *)(lVar9 + 0x1810) = 0;
    *(undefined8 *)(lVar9 + 0x1808) = 0;
    *(undefined8 *)(lVar9 + 0x1800) = 0;
    *(undefined8 *)(lVar9 + 0x1818) = 0x28cd94bfde;
    lVar11 = lVar11 + 0x20;
  } while (lVar11 != 0);
  lVar11 = -0x400;
  do {
    lVar9 = lVar7 + lVar11;
    *(undefined8 *)(lVar9 + 0x1c10) = 0;
    *(undefined8 *)(lVar9 + 0x1c08) = 0;
    *(undefined8 *)(lVar9 + 0x1c00) = 0;
    *(undefined8 *)(lVar9 + 0x1c18) = 0x28cd94bfde;
    lVar11 = lVar11 + 0x20;
  } while (lVar11 != 0);
  lVar11 = -0x400;
  do {
    lVar9 = lVar7 + lVar11;
    *(undefined8 *)(lVar9 + 0x2010) = 0;
    *(undefined8 *)(lVar9 + 0x2008) = 0;
    *(undefined8 *)(lVar9 + 0x2000) = 0;
    *(undefined8 *)(lVar9 + 0x2018) = 0x28cd94bfde;
    lVar11 = lVar11 + 0x20;
  } while (lVar11 != 0);
  lVar11 = 0;
  do {
    lVar9 = lVar7 + lVar11;
    *(undefined8 *)(lVar9 + 0x2010) = 0;
    *(undefined8 *)(lVar9 + 0x2008) = 0;
    *(undefined8 *)(lVar9 + 0x2000) = 0;
    *(undefined8 *)(lVar9 + 0x2018) = 0x28cd94bfde;
    lVar11 = lVar11 + 0x20;
  } while (lVar11 != 0x400);
  lVar11 = -0x400;
  do {
    lVar9 = lVar7 + lVar11;
    *(undefined8 *)(lVar9 + 0x2810) = 0;
    *(undefined8 *)(lVar9 + 0x2808) = 0;
    *(undefined8 *)(lVar9 + 0x2800) = 0;
    *(undefined8 *)(lVar9 + 0x2818) = 0x28cd94bfde;
    lVar11 = lVar11 + 0x20;
  } while (lVar11 != 0);
  lVar11 = -0x400;
  do {
    lVar9 = lVar7 + lVar11;
    *(undefined8 *)(lVar9 + 0x2c10) = 0;
    *(undefined8 *)(lVar9 + 0x2c08) = 0;
    *(undefined8 *)(lVar9 + 0x2c00) = 0;
    *(undefined8 *)(lVar9 + 0x2c18) = 0x28cd94bfde;
    lVar11 = lVar11 + 0x20;
  } while (lVar11 != 0);
  lVar11 = -0x400;
  do {
    lVar9 = lVar7 + lVar11;
    *(undefined8 *)(lVar9 + 0x3010) = 0;
    *(undefined8 *)(lVar9 + 0x3008) = 0;
    *(undefined8 *)(lVar9 + 0x3000) = 0;
    *(undefined8 *)(lVar9 + 0x3018) = 0x28cd94bfde;
    lVar11 = lVar11 + 0x20;
  } while (lVar11 != 0);
  FUN_10a909818(lVar7,&UNK_10f68264f,0xe);
  FUN_10a909818(lVar7 + 0x400,&UNK_10f68265e,0x15);
  FUN_10a909818(lVar7 + 0x800,&UNK_10f682674,0xf);
  FUN_10a909818(lVar7 + 0xc00,&UNK_10f682684,0x12);
  FUN_10a909818(lVar7 + 0x1000,&UNK_10f682697,0x19);
  FUN_10a909818(lVar7 + 0x1400,&UNK_10f6826b1,0x19);
  FUN_10a909818(lVar7 + 0x1800,&UNK_10f6826cb,0x20);
  FUN_10a909818(lVar7 + 0x1c00,&UNK_10f6826ec,0xf);
  FUN_10a909818(lVar7 + 0x2000,&UNK_10f6826fc,0xf);
  FUN_10a909818(lVar7 + 0x2400,&UNK_10f68270c,0xf);
  FUN_10a909818(lVar7 + 0x2800,&UNK_10f68271c,0xe);
  FUN_10a909818(lVar7 + 0x2c00,&UNK_10f68272b,0x13);
  param_2[0x11] = 0;
  param_2[0x10] = 0;
  param_2[0xf] = lVar7;
  param_2[0x13] = 0;
  param_2[0x12] = 0;
  *(undefined4 *)(param_2 + 0x14) = 0x3f800000;
  lVar11 = *(long *)(param_3 + 0xcf8);
  lVar7 = *(long *)(param_3 + 0xd00);
  if (lVar7 != 0) {
    plVar14 = (long *)(lVar7 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = *plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar14 = (long *)param_2[0xe];
  param_2[0xd] = lVar11;
  param_2[0xe] = lVar7;
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 1;
    do {
      lVar11 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
    lVar11 = param_2[0xd];
  }
  if (lVar11 != 0) {
    uVar8 = 0x130;
    __Znwm();
    FUN_10a93f44c();
    puVar6 = (undefined8 *)param_2[7];
    if (puVar6 < (undefined8 *)param_2[8]) {
      puVar13 = puVar6 + 1;
      *puVar6 = uVar8;
    }
    else {
      lVar11 = param_2[6];
      lVar7 = (long)puVar6 - lVar11;
      uVar2 = (lVar7 >> 3) + 1;
      if (uVar2 >> 0x3d != 0) {
        FUN_10a91047c();
LAB_10a909f80:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a909f84);
        (*pcVar5)();
      }
      uVar10 = (long)param_2[8] - lVar11;
      uVar12 = (long)uVar10 >> 2;
      if (uVar12 <= uVar2) {
        uVar12 = uVar2;
      }
      if (0x7ffffffffffffff7 < uVar10) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 >> 0x3d != 0) {
        func_0x000109ffded8();
        goto LAB_10a909f80;
      }
      lVar9 = uVar12 << 3;
      __Znwm();
      puVar6 = (undefined8 *)(lVar9 + lVar7);
      puVar13 = puVar6 + 1;
      *puVar6 = uVar8;
      _memcpy(puVar6 + -(lVar7 >> 3),lVar11,lVar7);
      param_2[6] = puVar6 + -(lVar7 >> 3);
      param_2[7] = puVar13;
      param_2[8] = lVar9 + uVar12 * 8;
      if (lVar11 != 0) {
        __ZdlPv(lVar11);
      }
    }
    param_2[7] = puVar13;
    FUN_10a5ae998(param_2[1],&PTR_DAT_110b9f988,param_3,param_2);
  }
  return param_2;
}



/* Entry: 10a90a208; end: 10a90a2b7;  */

undefined8 * FUN_10a90a208(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plStack_38;
  
  lVar1 = param_1[6];
  lVar2 = param_1[7];
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + -8;
    FUN_10a91a918(lVar2,0);
  }
  param_1[7] = lVar1;
  FUN_10a91ab14(param_1 + 0x10);
  FUN_10a91a6ec(param_1 + 0xf,0);
  func_0x00010a3f6208(param_1 + 0xd);
  FUN_10a0e3194(param_1 + 10);
  plStack_38 = param_1 + 6;
  FUN_10a910490(&plStack_38);
  FUN_10a0e3194(param_1 + 4);
  *param_1 = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  return param_1;
}



/* Entry: 10a90a2b8; end: 10a90a2bb;  */

undefined8 * FUN_10a90a2b8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plStack_38;
  
  lVar1 = param_1[6];
  lVar2 = param_1[7];
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + -8;
    FUN_10a91a918(lVar2,0);
  }
  param_1[7] = lVar1;
  FUN_10a91ab14(param_1 + 0x10);
  FUN_10a91a6ec(param_1 + 0xf,0);
  func_0x00010a3f6208(param_1 + 0xd);
  FUN_10a0e3194(param_1 + 10);
  plStack_38 = param_1 + 6;
  FUN_10a910490(&plStack_38);
  FUN_10a0e3194(param_1 + 4);
  *param_1 = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  return param_1;
}



/* Entry: 10a90a2bc; end: 10a90a2cf;  */

void FUN_10a90a2bc(void)

{
  FUN_10a90a208();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a90a2d0; end: 10a90a333;  */

undefined8 * FUN_10a90a2d0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a90a334; end: 10a90a46b;  */

void FUN_10a90a334(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10a6bfbe8(*(long *)(param_1 + 0x10),param_2,param_3);
  }
  plVar1 = *(long **)(param_1 + 0x40);
  for (plVar2 = *(long **)(param_1 + 0x38); plVar2 != plVar1; plVar2 = plVar2 + 2) {
    if (*plVar2 != 0) {
      FUN_10a6bfbe8(*plVar2,param_2,param_3);
    }
  }
  return;
}



/* Entry: 10a90a46c; end: 10a90ab2b;  */

void FUN_10a90a46c(ulong *param_1,long param_2,long *param_3,short param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long *unaff_x23;
  float fVar22;
  ulong uStack_80;
  long *plStack_78;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  if (param_3 == (long *)0x0 && param_4 == 0) {
LAB_10a90a6c0:
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  plVar21 = (long *)(param_2 + 0x80);
  plVar7 = *(long **)(param_2 + 0x88);
  if (plVar7 != (long *)0x0) {
    uVar8 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar8) == 0) {
      plVar10 = (long *)(uVar8 & (ulong)param_3);
    }
    else {
      plVar10 = param_3;
      if (plVar7 <= param_3) {
        uVar11 = 0;
        if (plVar7 != (long *)0x0) {
          uVar11 = (ulong)param_3 / (ulong)plVar7;
        }
        plVar10 = (long *)((long)param_3 - uVar11 * (long)plVar7);
      }
    }
    puVar13 = *(undefined8 **)(*plVar21 + (long)plVar10 * 8);
    if ((puVar13 != (undefined8 *)0x0) && (unaff_x23 = (long *)*puVar13, unaff_x23 != (long *)0x0))
    {
LAB_10a90a4ec:
      plVar14 = (long *)unaff_x23[1];
      if (plVar14 == param_3) {
        if ((long *)unaff_x23[2] != param_3) goto LAB_10a90a530;
        iVar4 = (int)unaff_x23[3];
        FUN_10a8fe508();
        if (iVar4 != 0) {
          lVar5 = unaff_x23[4];
          uVar8 = unaff_x23[3];
          param_1[1] = unaff_x23[4];
          *param_1 = uVar8;
          if (lVar5 == 0) {
            return;
          }
          plVar21 = (long *)(lVar5 + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar2) {
              *plVar21 = *plVar21 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          return;
        }
        uVar11 = *(ulong *)(param_2 + 0x88);
        lVar5 = *unaff_x23;
        uVar8 = unaff_x23[1];
        uVar17 = uVar11 - 1;
        if ((uVar11 & uVar17) == 0) {
          uVar8 = uVar17 & uVar8;
        }
        else if (uVar11 <= uVar8) {
          uVar19 = 0;
          if (uVar11 != 0) {
            uVar19 = uVar8 / uVar11;
          }
          uVar8 = uVar8 - uVar19 * uVar11;
        }
        plVar7 = *(long **)(*plVar21 + uVar8 * 8);
        do {
          plVar10 = plVar7;
          plVar7 = (long *)*plVar10;
        } while ((long *)*plVar10 != unaff_x23);
        if (plVar10 == (long *)(param_2 + 0x90)) {
LAB_10a90a5f0:
          if (lVar5 == 0) {
LAB_10a90a624:
            *(undefined8 *)(*plVar21 + uVar8 * 8) = 0;
            lVar5 = *unaff_x23;
            goto LAB_10a90a62c;
          }
          uVar19 = *(ulong *)(lVar5 + 8);
          if ((uVar11 & uVar17) == 0) {
            uVar20 = uVar19 & uVar17;
          }
          else {
            uVar20 = uVar19;
            if (uVar11 <= uVar19) {
              uVar20 = 0;
              if (uVar11 != 0) {
                uVar20 = uVar19 / uVar11;
              }
              uVar20 = uVar19 - uVar20 * uVar11;
            }
          }
          if (uVar20 != uVar8) goto LAB_10a90a624;
LAB_10a90a634:
          if ((uVar11 & uVar17) == 0) {
            uVar19 = uVar19 & uVar17;
          }
          else if (uVar11 <= uVar19) {
            uVar17 = 0;
            if (uVar11 != 0) {
              uVar17 = uVar19 / uVar11;
            }
            uVar19 = uVar19 - uVar17 * uVar11;
          }
          if (uVar19 != uVar8) {
            *(long **)(*plVar21 + uVar19 * 8) = plVar10;
            lVar5 = *unaff_x23;
          }
        }
        else {
          uVar19 = plVar10[1];
          if ((uVar11 & uVar17) == 0) {
            uVar19 = uVar19 & uVar17;
          }
          else if (uVar11 <= uVar19) {
            uVar20 = 0;
            if (uVar11 != 0) {
              uVar20 = uVar19 / uVar11;
            }
            uVar19 = uVar19 - uVar20 * uVar11;
          }
          if (uVar19 != uVar8) goto LAB_10a90a5f0;
LAB_10a90a62c:
          if (lVar5 != 0) {
            uVar19 = *(ulong *)(lVar5 + 8);
            goto LAB_10a90a634;
          }
        }
        *plVar10 = lVar5;
        *unaff_x23 = 0;
        *(long *)(param_2 + 0x98) = *(long *)(param_2 + 0x98) + -1;
        FUN_10a0d6a2c(unaff_x23 + 3);
        __ZdlPv(unaff_x23);
      }
      else {
        if (((ulong)plVar7 & uVar8) == 0) {
          plVar14 = (long *)((ulong)plVar14 & uVar8);
        }
        else if (plVar7 <= plVar14) {
          uVar11 = 0;
          if (plVar7 != (long *)0x0) {
            uVar11 = (ulong)plVar14 / (ulong)plVar7;
          }
          plVar14 = (long *)((long)plVar14 - uVar11 * (long)plVar7);
        }
        if (plVar14 == plVar10) goto LAB_10a90a530;
      }
    }
  }
LAB_10a90a68c:
  lVar5 = *(long *)(param_2 + 0x60) + 0xd48;
  FUN_10a5aeb74(lVar5,&PTR_DAT_110bd9f10);
  FUN_10a42b2cc();
  if ((lVar5 == 0) || ((*(ushort *)(lVar5 + 0x180) & 0x210) != 0)) goto LAB_10a90a6c0;
  FUN_10a38cc90(&uStack_80);
  uVar8 = uStack_80;
  FUN_10a8fe508();
  if ((uVar8 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    if (plStack_78 == (long *)0x0) {
      return;
    }
    plVar21 = plStack_78 + 1;
    do {
      lVar5 = *plVar21;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar2) {
        *plVar21 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 != 0) {
      return;
    }
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    return;
  }
  plVar7 = *(long **)(param_2 + 0x88);
  if (plVar7 != (long *)0x0) {
    uVar8 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar8) == 0) {
      unaff_x23 = (long *)(uVar8 & (ulong)param_3);
    }
    else {
      unaff_x23 = param_3;
      if (plVar7 <= param_3) {
        uVar11 = 0;
        if (plVar7 != (long *)0x0) {
          uVar11 = (ulong)param_3 / (ulong)plVar7;
        }
        unaff_x23 = (long *)((long)param_3 - uVar11 * (long)plVar7);
      }
    }
    puVar13 = *(undefined8 **)(*plVar21 + (long)unaff_x23 * 8);
    if (puVar13 != (undefined8 *)0x0) {
      for (plVar10 = (long *)*puVar13; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        plVar14 = (long *)plVar10[1];
        if (plVar14 == param_3) {
          if ((long *)plVar10[2] == param_3) goto LAB_10a90aa5c;
        }
        else {
          if (((ulong)plVar7 & uVar8) == 0) {
            plVar14 = (long *)((ulong)plVar14 & uVar8);
          }
          else if (plVar7 <= plVar14) {
            uVar11 = 0;
            if (plVar7 != (long *)0x0) {
              uVar11 = (ulong)plVar14 / (ulong)plVar7;
            }
            plVar14 = (long *)((long)plVar14 - uVar11 * (long)plVar7);
          }
          if (plVar14 != unaff_x23) break;
        }
      }
    }
  }
  plVar10 = (long *)0x28;
  __Znwm();
  uStack_58 = 1;
  *plVar10 = 0;
  plVar10[1] = (long)param_3;
  plVar10[3] = 0;
  plVar10[4] = 0;
  plVar10[2] = (long)param_3;
  fVar22 = (float)(*(long *)(param_2 + 0x98) + 1);
  plStack_68 = plVar10;
  plStack_60 = plVar21;
  if ((plVar7 == (long *)0x0) || (*(float *)(param_2 + 0xa0) * (float)plVar7 < fVar22)) {
    uVar8 = 1;
    if ((long *)0x2 < plVar7) {
      uVar8 = (ulong)(((ulong)plVar7 & (long)plVar7 - 1U) != 0);
    }
    plVar14 = (long *)(uVar8 | (long)plVar7 << 1);
    plVar9 = (long *)(long)(fVar22 / *(float *)(param_2 + 0xa0));
    if (plVar14 <= plVar9) {
      plVar14 = plVar9;
    }
    if ((long)plVar14 - 1U == 0) {
      plVar14 = (long *)0x2;
    }
    else if (((ulong)plVar14 & (long)plVar14 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar7 = *(long **)(param_2 + 0x88);
    }
    if (plVar7 < plVar14) {
LAB_10a90a870:
      if ((ulong)plVar14 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a90ab08);
        (*pcVar3)();
      }
      lVar5 = (long)plVar14 << 3;
      __Znwm();
      lVar6 = *plVar21;
      *plVar21 = lVar5;
      if (lVar6 != 0) {
        __ZdlPv();
      }
      plVar7 = (long *)0x0;
      *(long **)(param_2 + 0x88) = plVar14;
      do {
        *(undefined8 *)(*plVar21 + (long)plVar7 * 8) = 0;
        plVar7 = (long *)((long)plVar7 + 1);
      } while (plVar14 != plVar7);
      plVar9 = *(long **)(param_2 + 0x90);
      plVar7 = plVar14;
      if (plVar9 != (long *)0x0) {
        plVar12 = (long *)plVar9[1];
        uVar8 = (long)plVar14 - 1;
        if (((ulong)plVar14 & uVar8) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar8);
        }
        else if (plVar14 <= plVar12) {
          uVar11 = 0;
          if (plVar14 != (long *)0x0) {
            uVar11 = (ulong)plVar12 / (ulong)plVar14;
          }
          plVar12 = (long *)((long)plVar12 - uVar11 * (long)plVar14);
        }
        *(undefined8 **)(*plVar21 + (long)plVar12 * 8) = (undefined8 *)(param_2 + 0x90);
        plVar15 = (long *)*plVar9;
        while (plVar15 != (long *)0x0) {
          plVar18 = (long *)plVar15[1];
          if (((ulong)plVar14 & uVar8) == 0) {
            plVar18 = (long *)((ulong)plVar18 & uVar8);
          }
          else if (plVar14 <= plVar18) {
            uVar11 = 0;
            if (plVar14 != (long *)0x0) {
              uVar11 = (ulong)plVar18 / (ulong)plVar14;
            }
            plVar18 = (long *)((long)plVar18 - uVar11 * (long)plVar14);
          }
          plVar16 = plVar15;
          if (plVar18 != plVar12) {
            lVar5 = *plVar21;
            if (*(long *)(lVar5 + (long)plVar18 * 8) == 0) {
              *(long **)(lVar5 + (long)plVar18 * 8) = plVar9;
              plVar12 = plVar18;
            }
            else {
              *plVar9 = *plVar15;
              *plVar15 = **(undefined8 **)(lVar5 + (long)plVar18 * 8);
              **(long **)(lVar5 + (long)plVar18 * 8) = (long)plVar15;
              plVar16 = plVar9;
            }
          }
          plVar9 = plVar16;
          plVar15 = (long *)*plVar16;
        }
      }
    }
    else if (plVar14 < plVar7) {
      plVar9 = (long *)(long)((float)*(ulong *)(param_2 + 0x98) / *(float *)(param_2 + 0xa0));
      if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar9) {
        plVar9 = (long *)(1L << (-LZCOUNT((long)plVar9 + -1) & 0x3fU));
      }
      if (plVar14 <= plVar9) {
        plVar14 = plVar9;
      }
      if (plVar14 < plVar7) {
        if (plVar14 != (long *)0x0) goto LAB_10a90a870;
        lVar5 = *plVar21;
        *plVar21 = 0;
        if (lVar5 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(param_2 + 0x88) = 0;
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = *(long **)(param_2 + 0x88);
      }
    }
    if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
      unaff_x23 = (long *)((long)plVar7 - 1U & (ulong)param_3);
    }
    else {
      unaff_x23 = param_3;
      if (plVar7 <= param_3) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)param_3 / (ulong)plVar7;
        }
        unaff_x23 = (long *)((long)param_3 - uVar8 * (long)plVar7);
      }
    }
  }
  lVar5 = *plVar21;
  plVar14 = *(long **)(lVar5 + (long)unaff_x23 * 8);
  if (plVar14 == (long *)0x0) {
    plVar14 = (long *)(param_2 + 0x90);
    *plVar10 = *plVar14;
    *plVar14 = (long)plVar10;
    *(long **)(lVar5 + (long)unaff_x23 * 8) = plVar14;
    if (*plVar10 == 0) goto LAB_10a90aa50;
    plVar14 = *(long **)(*plVar10 + 8);
    if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
      plVar14 = (long *)((ulong)plVar14 & (long)plVar7 - 1U);
    }
    else if (plVar7 <= plVar14) {
      uVar8 = 0;
      if (plVar7 != (long *)0x0) {
        uVar8 = (ulong)plVar14 / (ulong)plVar7;
      }
      plVar14 = (long *)((long)plVar14 - uVar8 * (long)plVar7);
    }
    plVar14 = (long *)(*plVar21 + (long)plVar14 * 8);
  }
  else {
    *plVar10 = *plVar14;
  }
  *plVar14 = (long)plVar10;
LAB_10a90aa50:
  *(long *)(param_2 + 0x98) = *(long *)(param_2 + 0x98) + 1;
LAB_10a90aa5c:
  if (plStack_78 != (long *)0x0) {
    plVar21 = plStack_78 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar2) {
        *plVar21 = *plVar21 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar21 = (long *)plVar10[4];
  plVar10[4] = (long)plStack_78;
  plVar10[3] = uStack_80;
  if (plVar21 != (long *)0x0) {
    plVar7 = plVar21 + 1;
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
      (**(code **)(*plVar21 + 0x10))(plVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  param_1[1] = (ulong)plStack_78;
  *param_1 = uStack_80;
  return;
LAB_10a90a530:
  unaff_x23 = (long *)*unaff_x23;
  if (unaff_x23 == (long *)0x0) goto LAB_10a90a68c;
  goto LAB_10a90a4ec;
}



/* Entry: 10a90ab2c; end: 10a90de4f;  */

void FUN_10a90ab2c(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  ushort uVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  code *pcVar11;
  bool bVar12;
  long **pplVar13;
  long *plVar14;
  byte bVar15;
  bool bVar16;
  short sVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  undefined8 *puVar25;
  long *plVar26;
  undefined1 uVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  ulong uVar31;
  long *plVar32;
  ulong uVar33;
  char *pcVar34;
  ulong uVar35;
  long *plVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  long lVar39;
  long lVar40;
  uint *puVar41;
  uint *puVar42;
  uint uVar43;
  uint *puVar44;
  byte bVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  long *plVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  float fVar57;
  undefined4 uVar58;
  long lStack_338;
  long *plStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  float fStack_310;
  float fStack_30c;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined8 uStack_2b4;
  undefined8 uStack_2ac;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined8 uStack_29c;
  undefined8 uStack_294;
  undefined4 uStack_28c;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined4 uStack_278;
  undefined8 uStack_274;
  undefined8 uStack_26c;
  undefined4 uStack_264;
  float fStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  long *plStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  float fStack_204;
  long *plStack_200;
  long *plStack_1f8;
  int iStack_1f0;
  float fStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  long *plStack_198;
  undefined7 uStack_190;
  undefined1 uStack_189;
  undefined7 uStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long lStack_f8;
  long *plStack_f0;
  long lStack_e8;
  long *plStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_3 + 0x98) != 0) {
    func_0x00010a91ab4c(param_3 + 0x80,*(undefined8 *)(param_3 + 0x90));
    *(undefined8 *)(param_3 + 0x90) = 0;
    lVar21 = *(long *)(param_3 + 0x88);
    if (lVar21 != 0) {
      lVar28 = 0;
      do {
        *(undefined8 *)(*(long *)(param_3 + 0x80) + lVar28 * 8) = 0;
        lVar28 = lVar28 + 1;
      } while (lVar21 != lVar28);
    }
    *(undefined8 *)(param_3 + 0x98) = 0;
  }
  plVar36 = *(long **)(param_3 + 0x30);
  plVar2 = *(long **)(param_3 + 0x38);
  if (plVar36 != plVar2) {
    plVar49 = (long *)0x2000000021;
    do {
      lVar21 = *plVar36;
      *(undefined1 *)(lVar21 + 0x129) = 0;
      if (*(long *)(param_3 + 0x68) != 0) {
        plVar49 = *(long **)(*(long *)(*(long *)(param_3 + 0x60) + 0x850) + 0x10);
        plVar24 = *(long **)(lVar21 + 200);
        plVar3 = *(long **)(lVar21 + 0xd0);
        *(bool *)(lVar21 + 0x128) = plVar24 != plVar3;
        if (plVar24 != plVar3) {
          fVar57 = (float)(double)plVar49;
          do {
            lVar28 = *plVar24;
            *(undefined1 *)(lVar28 + 0x140e) = 0;
            bVar15 = *(byte *)(lVar28 + 0x140c);
            puVar41 = *(uint **)(lVar28 + 0x310);
            puVar44 = *(uint **)(lVar28 + 0x318);
            if (puVar41 == puVar44) {
              bVar10 = false;
              bVar45 = 1;
              uVar43 = 1;
LAB_10a90c190:
              if (*(long *)(lVar28 + 0x68) != *(long *)(lVar28 + 0x60)) {
                uVar35 = 0;
                do {
                  uStack_168._0_4_ = 0.0;
                  uStack_168._4_4_ = 0.0;
                  plStack_170 = (long *)0x0;
                  FUN_10a8fe208(lVar28,uVar35,&plStack_170);
                  lVar28 = *plVar24;
                  uVar35 = uVar35 + 1;
                } while (uVar35 < (ulong)((*(long *)(lVar28 + 0x68) - *(long *)(lVar28 + 0x60) >> 4)
                                         * -0x71c71c71c71c71c7));
              }
            }
            else {
              bVar10 = false;
              bVar16 = false;
              bVar45 = 1;
              uVar43 = 1;
              puVar42 = puVar41;
              do {
                uVar18 = *puVar42;
                uVar35 = (ulong)uVar18;
                lVar28 = *plVar24;
                func_0x00010a8fdae4(lVar28,uVar35);
                if (0x1f < uVar18) goto LAB_10a90da14;
                bVar4 = *(byte *)(*plVar24 + uVar35 + 0x340);
                lVar29 = *plVar24 + uVar35 * 0x10;
                plStack_328 = *(long **)(lVar29 + 0x80);
                if (plStack_328 == (long *)0x0) {
LAB_10a90acb4:
                  lStack_338 = 0;
                  plStack_328 = (long *)0x0;
                }
                else {
                  __ZNSt3__119__shared_weak_count4lockEv();
                  if (plStack_328 == (long *)0x0) goto LAB_10a90acb4;
                  lStack_338 = *(long *)(lVar29 + 0x78);
                }
                lVar39 = *plVar24;
                lVar29 = lVar39;
                func_0x00010a8fdae4(lVar39,uVar35);
                plVar49 = *(long **)(lVar29 + 0x130);
                plVar32 = *(long **)(lVar29 + 0x138);
                for (lVar29 = *(long *)(lVar39 + 0x60); lVar29 != *(long *)(lVar39 + 0x68);
                    lVar29 = lVar29 + 0x90) {
                  if ((*(byte *)(lVar29 + 0x78) & 1) != 0) {
                    uStack_168._0_4_ = 0.0;
                    uStack_168._4_4_ = 0.0;
                    plStack_170 = (long *)0x0;
                    uStack_160._0_4_ = 0.0;
                    uStack_160._4_4_ = 0.0;
                    uVar31 = (*(long *)(lVar39 + 0x68) - *(long *)(lVar39 + 0x60) >> 4) *
                             -0x71c71c71c71c71c7;
                    if (uVar31 >> 0x3c != 0) {
                      FUN_10a5e6120();
                      goto LAB_10a90da14;
                    }
                    pplVar13 = &plStack_170;
                    FUN_10a5e6134();
                    plVar14 = (long *)((long)pplVar13 -
                                      (CONCAT44(uStack_168._4_4_,(float)uStack_168) -
                                      (long)plStack_170));
                    _memcpy(plVar14);
                    uStack_168._0_4_ = SUB84(pplVar13,0);
                    uStack_168._4_4_ = (float)((ulong)pplVar13 >> 0x20);
                    bVar12 = plStack_170 != (long *)0x0;
                    plStack_170 = plVar14;
                    uStack_160 = pplVar13 + uVar31 * 2;
                    if (bVar12) {
                      __ZdlPv();
                    }
                    lVar29 = *(long *)(lVar39 + 0x60);
                    lVar39 = *(long *)(lVar39 + 0x68);
                    goto LAB_10a90b0fc;
                  }
                }
                uStack_160._0_4_ = 0.0;
                uStack_160._4_4_ = 0.0;
                plStack_170 = (long *)0x0;
                uStack_168._0_4_ = 0.0;
                uStack_168._4_4_ = 0.0;
                plStack_110 = plVar49;
                plStack_108 = plVar32;
                FUN_10a5e6078(&plStack_170,&plStack_110,&plStack_100,1);
LAB_10a90ad20:
                plVar32 = (long *)CONCAT44(uStack_168._4_4_,(float)uStack_168);
                plVar49 = plStack_170;
                if (plStack_170 == plVar32) {
                  bVar12 = true;
                }
                else {
                  do {
                    FUN_10a90a46c(&plStack_200,param_3,*plVar49,plVar49[1]);
                    plVar14 = plStack_1f8;
                    bVar12 = plStack_200 == (long *)0x0;
                    if (plStack_200 != (long *)0x0) break;
                    if (plStack_1f8 != (long *)0x0) {
                      plVar26 = plStack_1f8 + 1;
                      do {
                        lVar29 = *plVar26;
                        cVar8 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                        if (bVar9) {
                          *plVar26 = lVar29 + -1;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                      if (lVar29 == 0) {
                        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
                      }
                    }
                    plVar49 = plVar49 + 2;
                  } while (plVar49 != plVar32);
                }
                if (plStack_170 != (long *)0x0) {
                  uStack_168._0_4_ = SUB84(plStack_170,0);
                  uStack_168._4_4_ = (float)((ulong)plStack_170 >> 0x20);
                  __ZdlPv(plStack_170);
                }
                if (bVar12) {
                  plStack_200 = (long *)0x0;
                  plStack_1f8 = (long *)0x0;
                }
                plVar49 = plStack_200;
                lVar39 = *plVar24;
                lVar29 = *(long *)(param_3 + 0x78);
                if ((*(long *)(lVar39 + 0x10) != 0 && plStack_200 != (long *)0x0) && lVar29 != 0) {
                  iVar20 = *(int *)(param_3 + 0x48);
                  lVar40 = lVar39;
                  func_0x00010a8fdae4(lVar39,uVar35);
                  lVar40 = *(long *)(lVar40 + 0x140);
                  plStack_218 = (long *)CONCAT71(plStack_218._1_7_,
                                                 *(byte *)(lVar39 + uVar35 + 0x360) &
                                                 (*(byte *)(lVar39 + uVar35 + 0x340) ^ 1));
                  lVar29 = lVar29 + uVar35 * 0x20;
                  if (*(long *)(lVar39 + 0x10) != 0) {
                    FUN_10a917fc0(*(long *)(lVar39 + 0x10),lVar29 + 0x2400,&plStack_218);
                  }
                  if ((*(byte *)(lVar40 + 0x2a) & 0x24) != 0) {
                    FUN_10a3e8fd4(lVar40);
                  }
                  lVar22 = lVar39 + (ulong)uVar18 * 0x44;
                  plVar32 = (long *)(lVar22 + 0x380);
                  if (*(char *)(lVar22 + 0x3c0) == '\0') {
                    plVar32 = (long *)(lVar40 + 0xc0);
                  }
                  plStack_108 = (long *)plVar32[1];
                  plVar14 = (long *)*plVar32;
                  lStack_f8 = plVar32[3];
                  param_2 = (long *)plVar32[2];
                  lStack_e8 = plVar32[5];
                  plVar26 = (long *)plVar32[4];
                  lStack_d8 = plVar32[7];
                  plVar32 = (long *)plVar32[6];
                  plStack_110 = plVar14;
                  plStack_100 = param_2;
                  plStack_f0 = plVar26;
                  plStack_e0 = plVar32;
                  func_0x00010a8fe5dc(lVar39,lVar29,&plStack_110);
                  uStack_1e4 = 0;
                  uStack_1e0 = 0;
                  fStack_1ec = 0.0;
                  uStack_1e8 = 0;
                  iStack_1f0 = 0x3f800000;
                  uStack_1dc = 0x3f800000;
                  uStack_1d8 = 0;
                  plStack_1d0 = (long *)0x0;
                  uStack_1bc = 0;
                  uStack_1b8 = 0;
                  uStack_1c4 = 0;
                  uStack_1c0 = 0;
                  uStack_1c8 = 0x3f800000;
                  uStack_1b4 = 0x3f800000;
                  uStack_254 = 0;
                  uStack_250 = 0;
                  uStack_25c = 0;
                  uStack_258 = 0;
                  fStack_260 = 1.0;
                  uStack_24c = 0x3f800000;
                  uStack_248 = 0;
                  plStack_240 = (long *)0x0;
                  uStack_22c = 0;
                  uStack_228 = 0;
                  uStack_234 = 0;
                  uStack_230 = 0;
                  uStack_238 = 0x3f800000;
                  uStack_224 = 0x3f800000;
                  uStack_294 = 0;
                  uStack_29c = 0;
                  uStack_2a0 = 0x3f800000;
                  uStack_28c = 0x3f800000;
                  uStack_288 = 0;
                  uStack_280 = 0;
                  uStack_26c = 0;
                  uStack_274 = 0;
                  uStack_278 = 0x3f800000;
                  uStack_264 = 0x3f800000;
                  uStack_d0 = 0;
                  plStack_c8 = (long *)0x0;
                  plStack_118 = (long *)0x0;
                  plStack_120 = (long *)0x0;
                  plStack_178 = (long *)0x0;
                  plStack_180 = (long *)0x0;
                  uStack_2d4 = 0;
                  uStack_2d0 = 0;
                  uStack_2dc = 0;
                  uStack_2d8 = 0;
                  uStack_2e0 = 0x3f800000;
                  uStack_2cc = 0x3f800000;
                  uStack_2c8 = 0;
                  uStack_2c0 = 0;
                  uStack_2ac = 0;
                  uStack_2b4 = 0;
                  uStack_2b8 = 0x3f800000;
                  uStack_2a4 = 0x3f800000;
                  uVar18 = *(uint *)(lVar39 + 0x152c);
                  if ((uVar18 & 0x200f3c) != 0) {
                    if ((char)plVar49[0x5e] == '\x01') {
                      FUN_10a42b498(plVar49);
                      *(undefined1 *)(plVar49 + 0x5e) = 0;
                      uVar18 = *(uint *)(lVar39 + 0x152c);
                    }
                    lVar23 = 200;
                    if ((ulong)plVar49[0x9a] < 2) {
                      lVar23 = 0x1e0;
                    }
                    uVar37 = *(undefined8 *)((long)plVar49 + lVar23 + 0x330);
                    plVar14 = *(long **)((long)plVar49 + lVar23 + 0x328);
                    uVar50 = *(undefined8 *)((long)plVar49 + lVar23 + 0x340);
                    param_2 = *(long **)((long)plVar49 + lVar23 + 0x338);
                    uVar38 = *(undefined8 *)((long)plVar49 + lVar23 + 0x310);
                    plVar32 = *(long **)((long)plVar49 + lVar23 + 0x308);
                    uStack_1d8 = *(undefined8 *)((long)plVar49 + lVar23 + 800);
                    plVar26 = *(long **)((long)plVar49 + lVar23 + 0x318);
                    uStack_1c8 = (undefined4)uVar37;
                    uStack_1c4 = (undefined4)((ulong)uVar37 >> 0x20);
                    uStack_1b8 = (undefined4)uVar50;
                    uStack_1b4 = (undefined4)((ulong)uVar50 >> 0x20);
                    uStack_1c0 = SUB84(param_2,0);
                    uStack_1bc = (undefined4)((ulong)param_2 >> 0x20);
                    uStack_1e8 = (undefined4)uVar38;
                    uStack_1e4 = (undefined4)((ulong)uVar38 >> 0x20);
                    iStack_1f0 = (int)plVar32;
                    fStack_1ec = (float)((ulong)plVar32 >> 0x20);
                    uStack_1e0 = SUB84(plVar26,0);
                    uStack_1dc = (undefined4)((ulong)plVar26 >> 0x20);
                    plStack_1d0 = plVar14;
                  }
                  if ((uVar18 & 0x200cf0) != 0) {
                    if ((char)plVar49[0x5e] == '\x01') {
                      FUN_10a42b498(plVar49);
                      *(undefined1 *)(plVar49 + 0x5e) = 0;
                      uVar18 = *(uint *)(lVar39 + 0x152c);
                    }
                    lVar23 = 200;
                    if ((ulong)plVar49[0x9a] < 2) {
                      lVar23 = 0x1e0;
                    }
                    uVar37 = *(undefined8 *)((long)plVar49 + lVar23 + 0x370);
                    plVar14 = *(long **)((long)plVar49 + lVar23 + 0x368);
                    uVar50 = *(undefined8 *)((long)plVar49 + lVar23 + 0x380);
                    param_2 = *(long **)((long)plVar49 + lVar23 + 0x378);
                    uVar38 = *(undefined8 *)((long)plVar49 + lVar23 + 0x350);
                    plVar32 = *(long **)((long)plVar49 + lVar23 + 0x348);
                    uStack_248 = *(undefined8 *)((long)plVar49 + lVar23 + 0x360);
                    plVar26 = *(long **)((long)plVar49 + lVar23 + 0x358);
                    uStack_238 = (undefined4)uVar37;
                    uStack_234 = (undefined4)((ulong)uVar37 >> 0x20);
                    uStack_228 = (undefined4)uVar50;
                    uStack_224 = (undefined4)((ulong)uVar50 >> 0x20);
                    uStack_230 = SUB84(param_2,0);
                    uStack_22c = (undefined4)((ulong)param_2 >> 0x20);
                    uStack_258 = (undefined4)uVar38;
                    uStack_254 = (undefined4)((ulong)uVar38 >> 0x20);
                    fStack_260 = SUB84(plVar32,0);
                    uStack_25c = (undefined4)((ulong)plVar32 >> 0x20);
                    uStack_250 = SUB84(plVar26,0);
                    uStack_24c = (undefined4)((ulong)plVar26 >> 0x20);
                    plStack_240 = plVar14;
                  }
                  if ((uVar18 & 0xc) != 0) {
                    func_0x000109519fd0(&uStack_2a0,&iStack_1f0,&plStack_110);
                    uVar18 = *(uint *)(lVar39 + 0x152c);
                  }
                  if ((uVar18 & 0x200c00) == 0) {
                    uVar54 = 0x3f800000;
                    uVar55 = 0x3f800000;
                    uVar58 = 0x3f800000;
                    uVar56 = 0x3f800000;
                  }
                  else {
                    if ((char)plVar49[0x5e] == '\x01') {
                      FUN_10a42b498(plVar49);
                      *(undefined1 *)(plVar49 + 0x5e) = 0;
                      uVar18 = *(uint *)(lVar39 + 0x152c);
                    }
                    lVar23 = 200;
                    if ((ulong)plVar49[0x9a] < 2) {
                      lVar23 = 0x1e0;
                    }
                    uVar56 = *(undefined4 *)((long)plVar49 + lVar23 + 0x388);
                    plStack_c8 = *(long **)((long)plVar49 + lVar23 + 0x394);
                    uStack_d0 = *(undefined8 *)((long)plVar49 + lVar23 + 0x38c);
                    uVar58 = *(undefined4 *)((long)plVar49 + lVar23 + 0x39c);
                    plStack_118 = *(long **)((long)plVar49 + lVar23 + 0x3a8);
                    plStack_120 = *(long **)((long)plVar49 + lVar23 + 0x3a0);
                    uVar55 = *(undefined4 *)((long)plVar49 + lVar23 + 0x3b0);
                    plStack_178 = *(long **)((long)plVar49 + lVar23 + 0x3bc);
                    plVar14 = *(long **)((long)plVar49 + lVar23 + 0x3b4);
                    uVar54 = *(undefined4 *)((long)plVar49 + lVar23 + 0x3c4);
                    plStack_180 = plVar14;
                  }
                  if ((uVar18 & 0x30) != 0) {
                    func_0x000109519fd0(&plStack_170,&iStack_1f0,&plStack_110);
                    func_0x000109519fd0(&uStack_2e0,&fStack_260,&plStack_170);
                    uVar18 = *(uint *)(lVar39 + 0x152c);
                  }
                  if ((uVar18 >> 0x15 & 1) != 0) {
                    *(long **)(lVar39 + 0x1424) = plStack_c8;
                    *(undefined8 *)(lVar39 + 0x141c) = uStack_d0;
                    *(undefined4 *)(lVar39 + 0x1418) = uVar56;
                    *(undefined4 *)(lVar39 + 0x142c) = uVar58;
                    *(long **)(lVar39 + 0x1438) = plStack_118;
                    *(long **)(lVar39 + 0x1430) = plStack_120;
                    *(undefined4 *)(lVar39 + 0x1440) = uVar55;
                    *(long **)(lVar39 + 0x144c) = plStack_178;
                    *(long **)(lVar39 + 0x1444) = plStack_180;
                    *(undefined4 *)(lVar39 + 0x1454) = uVar54;
                    lVar23 = lVar39 + uVar35 * 0x40;
                    *(long *)(lVar23 + 0xc18) = lStack_f8;
                    *(long **)(lVar23 + 0xc10) = plStack_100;
                    *(long *)(lVar23 + 0xc28) = lStack_e8;
                    *(long **)(lVar23 + 0xc20) = plStack_f0;
                    *(long *)(lVar23 + 0xc38) = lStack_d8;
                    *(long **)(lVar23 + 0xc30) = plStack_e0;
                    *(long **)(lVar23 + 0xc08) = plStack_108;
                    *(long **)(lVar23 + 0xc00) = plStack_110;
                    plVar14 = plStack_e0;
                    param_2 = plStack_f0;
                    plVar26 = plStack_110;
                    plVar32 = plStack_100;
                  }
                  fVar48 = SUB84(plVar26,0);
                  fVar51 = SUB84(plVar32,0);
                  if ((uVar18 & 1) != 0) {
                    if (*(char *)(lVar22 + 0x3c0) == '\x01') {
                      func_0x0001094f5708(&plStack_170,&plStack_110);
                    }
                    else {
                      if ((*(byte *)(lVar40 + 0x2a) >> 6 & 1) != 0) {
                        func_0x00010a3e933c(lVar40);
                      }
                      plStack_170 = *(long **)(lVar40 + 0x100);
                      uStack_158 = *(long **)(lVar40 + 0x118);
                      uStack_160 = *(long ***)(lVar40 + 0x110);
                      uStack_168._0_4_ = (float)*(undefined8 *)(lVar40 + 0x108);
                      uStack_168._4_4_ = (float)((ulong)*(undefined8 *)(lVar40 + 0x108) >> 0x20);
                      uStack_148 = *(undefined8 *)(lVar40 + 0x128);
                      plVar14 = *(long **)(lVar40 + 0x120);
                      uStack_138 = *(undefined8 *)(lVar40 + 0x138);
                      param_2 = *(long **)(lVar40 + 0x130);
                      plStack_150 = plVar14;
                      plStack_140 = param_2;
                    }
                    func_0x00010a8fe5dc(lVar39,lVar29 + 0x400,&plStack_170);
                    uVar18 = *(uint *)(lVar39 + 0x152c);
                  }
                  if ((uVar18 >> 1 & 1) != 0) {
                    func_0x0001094f5708(&uStack_320,&plStack_110);
                    param_2 = (long *)CONCAT44(fStack_30c,fStack_310);
                    plStack_170 = (long *)CONCAT44(fStack_310,(int)uStack_320);
                    uStack_168._0_4_ = (float)uStack_300;
                    uStack_168._4_4_ = (float)uStack_2f0;
                    uStack_160._0_4_ = (float)((ulong)uStack_320 >> 0x20);
                    uStack_160._4_4_ = fStack_30c;
                    uStack_158 = (long *)CONCAT44((int)((ulong)uStack_2f0 >> 0x20),
                                                  (int)((ulong)uStack_300 >> 0x20));
                    /* WARNING: Ignoring partial resolution of indirect */
                    plStack_150._0_4_ = (int)uStack_318;
                    uStack_148._0_4_ = (int)uStack_2f8;
                    plStack_140._0_4_ = (int)((ulong)uStack_318 >> 0x20);
                    uStack_138._0_4_ = (int)((ulong)uStack_2f8 >> 0x20);
                    plVar14 = uStack_320;
                    uVar37 = uStack_300;
                    uVar50 = uStack_2f0;
                    func_0x00010a8fe5dc(lVar39,lVar29 + 0x800,&plStack_170);
                    fVar48 = (float)uVar37;
                    fVar51 = (float)uVar50;
                    uVar18 = *(uint *)(lVar39 + 0x152c);
                  }
                  if ((uVar18 >> 2 & 1) != 0) {
                    func_0x00010a8fe5dc(lVar39,lVar29 + 0xc00,&uStack_2a0);
                    uVar18 = *(uint *)(lVar39 + 0x152c);
                  }
                  if ((uVar18 >> 3 & 1) != 0) {
                    func_0x0001094f5708(&plStack_170,&uStack_2a0);
                    func_0x00010a8fe5dc(lVar39,lVar29 + 0x1000,&plStack_170);
                    uVar18 = *(uint *)(lVar39 + 0x152c);
                  }
                  if ((uVar18 >> 4 & 1) != 0) {
                    func_0x00010a8fe5dc(lVar39,lVar29 + 0x1400,&uStack_2e0);
                    uVar18 = *(uint *)(lVar39 + 0x152c);
                  }
                  if ((uVar18 >> 5 & 1) != 0) {
                    func_0x0001094f5708(&plStack_170,&uStack_2e0);
                    func_0x00010a8fe5dc(lVar39,lVar29 + 0x1800,&plStack_170);
                    uVar18 = *(uint *)(lVar39 + 0x152c);
                  }
                  if ((uVar18 >> 0x14 & 1) != 0) {
                    lVar40 = *(long *)(lVar39 + 0x60);
                    if (lVar40 == *(long *)(lVar39 + 0x68)) {
                      plStack_170 = (long *)0x0;
                      uStack_168._0_4_ = 0.0;
                      FUN_10a0d9d6c(*(undefined8 *)(lVar39 + 0x10),lVar29 + 0x1c00,&plStack_170);
                      plStack_170 = (long *)0x0;
                      uStack_168._0_4_ = 0.0;
                      FUN_10a0d9d6c(*(undefined8 *)(lVar39 + 0x10),lVar29 + 0x2000,&plStack_170);
                    }
                    else {
                      if ((*(int *)(lVar40 + 0x68) == 1) &&
                         (uStack_1a0 = *(long **)(lVar40 + 0x38), uStack_1a0 != (long *)0x0)) {
                        plVar49 = *(long **)(lVar40 + 0x40);
                        plStack_198 = plVar49;
                      }
                      else {
                        plVar49 = *(long **)(lVar40 + 0x50);
                        uStack_1a0 = *(long **)(lVar40 + 0x48);
                        plVar14 = uStack_1a0;
                        plStack_198 = *(long **)(lVar40 + 0x50);
                      }
                      fVar51 = SUB84(plVar14,0);
                      if (plVar49 != (long *)0x0) {
                        plVar49 = plVar49 + 1;
                        do {
                          cVar8 = '\x01';
                          bVar12 = (bool)ExclusiveMonitorPass(plVar49,0x10);
                          if (bVar12) {
                            *plVar49 = *plVar49 + 1;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar8 != '\0');
                      }
                      FUN_10a348108(uStack_1a0);
                      fVar46 = fVar51;
                      fVar47 = SUB84(param_2,0);
                      fVar53 = fVar48;
                      func_0x00010a348168(uStack_1a0);
                      fVar51 = (fVar51 + fVar46) * 0.5;
                      fVar52 = (SUB84(param_2,0) + fVar47) * 0.5;
                      uStack_318._0_4_ = (fVar48 + fVar53) * 0.5;
                      uStack_318._4_4_ = fVar46 - fVar51;
                      fStack_310 = fVar47 - fVar52;
                      uStack_320 = (long *)CONCAT44(fVar52,fVar51);
                      fStack_30c = fVar53 - (float)uStack_318;
                      FUN_10a005448(&plStack_170,&uStack_320,&plStack_110);
                      uStack_318._0_4_ = (float)uStack_168 - uStack_160._4_4_;
                      uStack_320 = (long *)CONCAT44((float)((ulong)plStack_170 >> 0x20) -
                                                    (float)uStack_160,
                                                    SUB84(plStack_170,0) - uStack_168._4_4_);
                      func_0x00010a8fe644(lVar39,lVar29 + 0x1c00,&uStack_320);
                      plVar14 = (long *)(ulong)(uint)((float)uStack_168 + uStack_160._4_4_);
                      param_2 = (long *)CONCAT44((float)((ulong)plStack_170 >> 0x20) +
                                                 (float)uStack_160,
                                                 SUB84(plStack_170,0) + uStack_168._4_4_);
                      uStack_318 = (long *)CONCAT44(uStack_318._4_4_,
                                                    (float)uStack_168 + uStack_160._4_4_);
                      uStack_320 = param_2;
                      fVar48 = uStack_168._4_4_;
                      func_0x00010a8fe644(lVar39,lVar29 + 0x2000,&uStack_320);
                      plVar32 = plStack_198;
                      plVar49 = plStack_200;
                      if (plStack_198 != (long *)0x0) {
                        plVar26 = plStack_198 + 1;
                        do {
                          lVar29 = *plVar26;
                          cVar8 = '\x01';
                          bVar12 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                          if (bVar12) {
                            *plVar26 = lVar29 + -1;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar8 != '\0');
                        if (lVar29 == 0) {
                          (**(code **)(*plStack_198 + 0x10))(plStack_198);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
                          plVar49 = plStack_200;
                        }
                      }
                    }
                  }
                  if ((*(long *)(lVar39 + 0x10) != 0) && (*(int *)(lVar39 + 0x1574) != iVar20)) {
                    *(int *)(lVar39 + 0x1574) = iVar20;
                    uVar18 = *(uint *)(lVar39 + 0x152c);
                    if ((char)plVar49[0x5e] == '\x01') {
                      FUN_10a42b498(plVar49);
                      *(undefined1 *)(plVar49 + 0x5e) = 0;
                    }
                    lVar29 = 200;
                    if ((ulong)plVar49[0x9a] < 2) {
                      lVar29 = 0x1e0;
                    }
                    lVar40 = plVar49[0x2f];
                    if ((*(byte *)(lVar40 + 0x2a) & 0x24) != 0) {
                      FUN_10a3e8fd4(lVar40);
                      if ((char)plVar49[0x5e] == '\x01') {
                        FUN_10a42b498(plVar49);
                        *(undefined1 *)(plVar49 + 0x5e) = 0;
                      }
                    }
                    lVar22 = 200;
                    if ((ulong)plVar49[0x9a] < 2) {
                      lVar22 = 0x1e0;
                    }
                    lVar23 = plVar49[0x2f];
                    uVar19 = *(uint *)(lVar39 + 0x152c);
                    if ((uVar19 >> 6 & 1) != 0) {
                      uVar37 = *(undefined8 *)(lVar39 + 0x10);
                      func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2db60);
                      FUN_10a6bfa20(uVar37,&plStack_170,(long)plVar49 + lVar29 + 0x348);
                      if ((long)uStack_160 < 0) {
                        __ZdlPv(plStack_170);
                      }
                      uVar19 = *(uint *)(lVar39 + 0x152c);
                    }
                    if ((uVar19 >> 7 & 1) != 0) {
                      uVar37 = *(undefined8 *)(lVar39 + 0x10);
                      func_0x000107c2b074(&uStack_320,&PTR_DAT_110c2db78);
                      func_0x0001094f5708(&plStack_170,(long)plVar49 + lVar29 + 0x348);
                      FUN_10a6bfa20(uVar37,&uStack_320,&plStack_170);
                      if ((int)fStack_30c < 0) {
                        __ZdlPv(uStack_320);
                      }
                      uVar19 = *(uint *)(lVar39 + 0x152c);
                    }
                    if ((uVar19 >> 8 & 1) != 0) {
                      uVar37 = *(undefined8 *)(lVar39 + 0x10);
                      func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2db90);
                      FUN_10a6bfa20(uVar37,&plStack_170,(long)plVar49 + lVar29 + 0x308);
                      if ((long)uStack_160 < 0) {
                        __ZdlPv(plStack_170);
                      }
                      uVar19 = *(uint *)(lVar39 + 0x152c);
                    }
                    if ((uVar19 >> 9 & 1) != 0) {
                      uVar37 = *(undefined8 *)(lVar39 + 0x10);
                      func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dba8);
                      FUN_10a6bfa20(uVar37,&plStack_170,lVar40 + 0xc0);
                      if ((long)uStack_160 < 0) {
                        __ZdlPv(plStack_170);
                      }
                      uVar19 = *(uint *)(lVar39 + 0x152c);
                    }
                    if ((uVar19 >> 10 & 1) != 0) {
                      uVar37 = *(undefined8 *)(lVar39 + 0x10);
                      func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dbc0);
                      FUN_10a6bfa20(uVar37,&plStack_170,(long)plVar49 + lVar22 + 0x388);
                      if ((long)uStack_160 < 0) {
                        __ZdlPv(plStack_170);
                      }
                      uVar19 = *(uint *)(lVar39 + 0x152c);
                    }
                    if ((uVar19 >> 0xb & 1) != 0) {
                      uVar37 = *(undefined8 *)(lVar39 + 0x10);
                      func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dbd8);
                      if ((char)plVar49[0x5e] == '\x01') {
                        FUN_10a42b498(plVar49);
                        *(undefined1 *)(plVar49 + 0x5e) = 0;
                      }
                      lVar29 = 200;
                      if ((ulong)plVar49[0x9a] < 2) {
                        lVar29 = 0x1e0;
                      }
                      FUN_10a6bfa20(uVar37,&plStack_170,(long)plVar49 + lVar29 + 0x3c8);
                      if ((long)uStack_160 < 0) {
                        __ZdlPv(plStack_170);
                      }
                      uVar19 = *(uint *)(lVar39 + 0x152c);
                    }
                    uVar18 = uVar18 & 0x200cf0;
                    if ((uVar19 & 0x1000) != 0 || uVar18 != 0) {
                      uVar37 = *(undefined8 *)(lVar39 + 0x10);
                      func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dbf0);
                      FUN_10a42bae4(plVar49);
                      uStack_320 = (long *)CONCAT44(uStack_320._4_4_,(int)plVar14);
                      FUN_10a0d9bd4(uVar37,&plStack_170,&uStack_320);
                      if ((long)uStack_160 < 0) {
                        __ZdlPv(plStack_170);
                      }
                      uVar19 = *(uint *)(lVar39 + 0x152c);
                    }
                    if ((uVar19 & 0x2000) != 0 || uVar18 != 0) {
                      uVar37 = *(undefined8 *)(lVar39 + 0x10);
                      func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dc08);
                      plVar14 = (long *)(ulong)*(uint *)(plVar49 + 0x4c);
                      uStack_320 = (long *)CONCAT44(uStack_320._4_4_,*(uint *)(plVar49 + 0x4c));
                      FUN_10a0d9bd4(uVar37,&plStack_170,&uStack_320);
                      if ((long)uStack_160 < 0) {
                        __ZdlPv(plStack_170);
                      }
                      uVar19 = *(uint *)(lVar39 + 0x152c);
                    }
                    if ((uVar19 & 0x4000) != 0 || uVar18 != 0) {
                      uVar37 = *(undefined8 *)(lVar39 + 0x10);
                      func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dc20);
                      plVar14 = (long *)(ulong)*(uint *)((long)plVar49 + 0x264);
                      uStack_320 = (long *)CONCAT44(uStack_320._4_4_,
                                                    *(uint *)((long)plVar49 + 0x264));
                      FUN_10a0d9bd4(uVar37,&plStack_170,&uStack_320);
                      if ((long)uStack_160 < 0) {
                        __ZdlPv(plStack_170);
                      }
                      uVar19 = *(uint *)(lVar39 + 0x152c);
                    }
                    if ((uVar19 >> 9 & 1) == 0) {
                      if ((uVar19 >> 0xf & 1) != 0) {
                        uVar37 = *(undefined8 *)(lVar39 + 0x10);
                        func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dc38);
                        FUN_10a2cd058(lVar23);
                        uStack_320 = (long *)CONCAT44((int)param_2,(int)plVar14);
                        uStack_318 = (long *)CONCAT44(uStack_318._4_4_,fVar48);
                        FUN_10a0d9d6c(uVar37,&plStack_170,&uStack_320);
                        if ((long)uStack_160 < 0) {
                          __ZdlPv(plStack_170);
                        }
                        uVar19 = *(uint *)(lVar39 + 0x152c);
                      }
                      fVar46 = SUB84(plVar14,0);
                      if ((uVar19 >> 0x10 & 1) != 0) {
                        uVar37 = *(undefined8 *)(lVar39 + 0x10);
                        func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dc50);
                        fVar47 = SUB84(param_2,0);
                        func_0x00010a2cd08c(lVar23);
                        fVar53 = -(fVar48 * fVar51) + fVar46 * fVar47;
                        fVar52 = 0.5 - (fVar46 * fVar46 + fVar48 * fVar48);
                        fVar46 = fVar47 * fVar48 + fVar51 * fVar46;
                        fVar46 = fVar46 + fVar46;
                        plVar14 = (long *)(ulong)(uint)fVar46;
                        param_2 = (long *)CONCAT44(fVar52 + fVar52,fVar53 + fVar53);
                        uStack_318 = (long *)CONCAT44(uStack_318._4_4_,fVar46);
                        uStack_320 = param_2;
                        FUN_10a0d9d6c(uVar37,&plStack_170,&uStack_320);
                        if ((long)uStack_160 < 0) {
                          __ZdlPv(plStack_170);
                        }
                        uVar19 = *(uint *)(lVar39 + 0x152c);
                      }
                      fVar46 = SUB84(plVar14,0);
                      if ((uVar19 >> 0x11 & 1) != 0) {
                        uVar37 = *(undefined8 *)(lVar39 + 0x10);
                        func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dc68);
                        func_0x00010a2cd08c(lVar23);
                        fVar53 = SUB84(param_2,0);
                        fVar52 = 0.5 - (fVar46 * fVar46 + fVar53 * fVar53);
                        fVar47 = fVar48 * fVar46 + fVar51 * fVar53;
                        fVar46 = -fVar51 * fVar46 + fVar48 * fVar53;
                        plVar14 = (long *)CONCAT44(fVar46 + fVar46,fVar47 + fVar47);
                        uStack_318 = (long *)CONCAT44(uStack_318._4_4_,fVar52 + fVar52);
                        uStack_320 = plVar14;
                        FUN_10a0d9d6c(uVar37,&plStack_170,&uStack_320);
                        if ((long)uStack_160 < 0) {
                          __ZdlPv(plStack_170);
                        }
                        uVar19 = *(uint *)(lVar39 + 0x152c);
                      }
                      fVar46 = SUB84(plVar14,0);
                      if ((uVar19 >> 0x12 & 1) != 0) {
                        uVar37 = *(undefined8 *)(lVar39 + 0x10);
                        func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dc80);
                        fVar47 = SUB84(param_2,0);
                        func_0x00010a2cd08c(lVar23);
                        fVar53 = 0.5 - (fVar48 * fVar48 + fVar47 * fVar47);
                        fVar52 = fVar47 * fVar46 + fVar51 * fVar48;
                        fVar51 = -(fVar47 * fVar51) + fVar48 * fVar46;
                        fVar51 = fVar51 + fVar51;
                        plVar14 = (long *)(ulong)(uint)fVar51;
                        param_2 = (long *)CONCAT44(fVar52 + fVar52,fVar53 + fVar53);
                        uStack_318 = (long *)CONCAT44(uStack_318._4_4_,fVar51);
                        uStack_320 = param_2;
                        FUN_10a0d9d6c(uVar37,&plStack_170,&uStack_320);
                        if ((long)uStack_160 < 0) {
                          __ZdlPv(plStack_170);
                        }
                      }
                    }
                    uVar37 = *(undefined8 *)(lVar39 + 0x10);
                    func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dc98);
                    FUN_10a6bfbe8(uVar37,&plStack_170,lVar39 + 0x1400);
                    if ((long)uStack_160 < 0) {
                      __ZdlPv(plStack_170);
                    }
                    if ((*(byte *)(lVar39 + 0x152e) >> 3 & 1) != 0) {
                      lVar29 = *(long *)(lVar39 + 0x60);
                      if (lVar29 == *(long *)(lVar39 + 0x68)) {
                        uVar37 = *(undefined8 *)(lVar39 + 0x10);
                        func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dcb0);
                        uStack_320 = (long *)0x0;
                        uStack_318 = (long *)((ulong)uStack_318 & 0xffffffff00000000);
                        FUN_10a0d9d6c(uVar37,&plStack_170,&uStack_320);
                        if ((long)uStack_160 < 0) {
                          __ZdlPv(plStack_170);
                        }
                        uVar37 = *(undefined8 *)(lVar39 + 0x10);
                        func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dcc8);
                        uStack_320 = (long *)0x0;
                        uStack_318 = (long *)((ulong)uStack_318 & 0xffffffff00000000);
                        FUN_10a0d9d6c(uVar37,&plStack_170,&uStack_320);
                        if ((long)uStack_160 < 0) {
                          __ZdlPv(plStack_170);
                        }
                      }
                      else {
                        if ((*(int *)(lVar29 + 0x68) == 1) &&
                           (plVar49 = *(long **)(lVar29 + 0x38), plVar49 != (long *)0x0)) {
                          plVar32 = *(long **)(lVar29 + 0x40);
                          uStack_318 = plVar32;
                        }
                        else {
                          plVar32 = *(long **)(lVar29 + 0x50);
                          plVar49 = *(long **)(lVar29 + 0x48);
                          plVar14 = plVar49;
                          uStack_318 = *(long **)(lVar29 + 0x50);
                        }
                        uVar54 = SUB84(plVar14,0);
                        if (plVar32 != (long *)0x0) {
                          plVar32 = plVar32 + 1;
                          do {
                            cVar8 = '\x01';
                            bVar12 = (bool)ExclusiveMonitorPass(plVar32,0x10);
                            if (bVar12) {
                              *plVar32 = *plVar32 + 1;
                              cVar8 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar8 != '\0');
                        }
                        uVar37 = *(undefined8 *)(lVar39 + 0x10);
                        uStack_320 = plVar49;
                        func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dcb0);
                        FUN_10a348108(plVar49);
                        uStack_1a0 = (long *)CONCAT44((int)param_2,uVar54);
                        plStack_198 = (long *)CONCAT44(plStack_198._4_4_,fVar48);
                        FUN_10a0d9d6c(uVar37,&plStack_170,&uStack_1a0);
                        if ((long)uStack_160 < 0) {
                          __ZdlPv(plStack_170);
                        }
                        uVar37 = *(undefined8 *)(lVar39 + 0x10);
                        func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dcc8);
                        func_0x00010a348168(uStack_320);
                        uStack_1a0 = (long *)CONCAT44((int)param_2,uVar54);
                        plStack_198 = (long *)CONCAT44(plStack_198._4_4_,fVar48);
                        FUN_10a0d9d6c(uVar37,&plStack_170,&uStack_1a0);
                        if ((long)uStack_160 < 0) {
                          __ZdlPv(plStack_170);
                        }
                        plVar49 = uStack_318;
                        if (uStack_318 != (long *)0x0) {
                          plVar32 = uStack_318 + 1;
                          do {
                            lVar29 = *plVar32;
                            cVar8 = '\x01';
                            bVar12 = (bool)ExclusiveMonitorPass(plVar32,0x10);
                            if (bVar12) {
                              *plVar32 = lVar29 + -1;
                              cVar8 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar8 != '\0');
                          if (lVar29 == 0) {
                            (**(code **)(*uStack_318 + 0x10))(uStack_318);
                            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar49);
                          }
                        }
                      }
                    }
                  }
                  lVar39 = *plVar24;
                }
                if (plStack_200 != (long *)0x0 && !bVar16) {
                  lVar29 = lVar39;
                  func_0x00010a8fdae4(lVar39,uVar35);
                  if (*(long *)(lVar39 + 0x1550) != 0) {
                    lVar22 = lVar39 + uVar35 * 0x10;
                    plVar49 = *(long **)(lVar22 + 0x80);
                    __ZNSt3__119__shared_weak_count4lockEv();
                    lVar40 = *(long *)(lVar39 + 0x60);
                    lVar23 = *(long *)(lVar39 + 0x68);
                    if (lVar40 != lVar23) {
                      iVar20 = *(int *)(*(long *)(lVar22 + 0x78) + 0x210);
                      do {
                        iVar1 = *(int *)(lVar40 + 0x6c) + iVar20;
                        *(int *)(lVar40 + 0x20) = iVar1;
                        if (*(char *)(lVar40 + 0x78) == '\x01') {
                          uVar37 = 0;
                          puVar25 = (undefined8 *)(lVar40 + 0x70);
                        }
                        else {
                          uVar37 = *(undefined8 *)(lVar29 + 0x138);
                          puVar25 = (undefined8 *)(lVar29 + 0x130);
                        }
                        *(undefined8 *)(lVar40 + 0x10) = *puVar25;
                        *(undefined8 *)(lVar40 + 0x18) = uVar37;
                        uVar18 = *(uint *)(lVar40 + 8);
                        if ((uVar18 != 0) &&
                           (plVar32 = *(long **)(lVar39 + 0x1550), plVar32 != (long *)0x0)) {
                          uVar31 = (ulong)uVar18 & 0x3fff;
                          lVar22 = *plVar32;
                          uVar33 = (plVar32[1] - lVar22 >> 3) * -0x71c71c71c71c71c7;
                          if ((uVar31 <= uVar33 && uVar33 - uVar31 != 0) &&
                             ((pcVar34 = (char *)(lVar22 + uVar31 * 0x48),
                              *(uint *)(pcVar34 + 4) == uVar18 && (*pcVar34 != '\x02')))) {
                            *(int *)(lVar22 + uVar31 * 0x48 + 0x14) = iVar1;
                          }
                        }
                        lVar40 = lVar40 + 0x90;
                      } while (lVar40 != lVar23);
                    }
                    plVar32 = plVar49 + 1;
                    do {
                      lVar29 = *plVar32;
                      cVar8 = '\x01';
                      bVar16 = (bool)ExclusiveMonitorPass(plVar32,0x10);
                      if (bVar16) {
                        *plVar32 = lVar29 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (lVar29 == 0) {
                      (**(code **)(*plVar49 + 0x10))(plVar49);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar49);
                    }
                  }
                  lVar39 = *plVar24;
                  lVar29 = *(long *)(lVar39 + 0x60);
                  lVar40 = *(long *)(lVar39 + 0x68);
                  if (lVar40 != lVar29) {
                    uVar31 = 0;
                    do {
                      uVar33 = (lVar40 - lVar29 >> 4) * -0x71c71c71c71c71c7;
                      if (uVar33 < uVar31 || uVar33 - uVar31 == 0) goto LAB_10a90da14;
                      lVar29 = lVar29 + uVar31 * 0x90;
                      FUN_10a90a46c(&plStack_170,param_3,*(undefined8 *)(lVar29 + 0x10),
                                    *(undefined8 *)(lVar29 + 0x18));
                      FUN_10a8fe208(*plVar24,uVar31,&plStack_170);
                      plVar49 = (long *)CONCAT44(uStack_168._4_4_,(float)uStack_168);
                      if (plVar49 != (long *)0x0) {
                        plVar32 = plVar49 + 1;
                        do {
                          lVar29 = *plVar32;
                          cVar8 = '\x01';
                          bVar16 = (bool)ExclusiveMonitorPass(plVar32,0x10);
                          if (bVar16) {
                            *plVar32 = lVar29 + -1;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar8 != '\0');
                        if (lVar29 == 0) {
                          (**(code **)(*plVar49 + 0x10))(plVar49);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar49);
                        }
                      }
                      uVar31 = uVar31 + 1;
                      lVar39 = *plVar24;
                      lVar29 = *(long *)(lVar39 + 0x60);
                      lVar40 = *(long *)(lVar39 + 0x68);
                    } while (uVar31 < (ulong)((lVar40 - lVar29 >> 4) * -0x71c71c71c71c71c7));
                  }
                  bVar16 = true;
                }
                if (*(char *)(lVar39 + uVar35 + 0x340) == '\x01') {
                  *(undefined1 *)(lVar39 + 0x1518) = 1;
                  fVar46 = 0.0;
                }
                else {
                  fVar48 = fVar57;
                  if (*(char *)(lVar39 + 0x1518) == '\x01') {
                    fVar48 = *(float *)(lVar39 + 0x151c);
                  }
                  fVar51 = 0.5;
                  if (fVar48 <= 0.5) {
                    fVar51 = fVar48;
                  }
                  param_2 = (long *)(ulong)(uint)fVar51;
                  fVar46 = 0.0;
                  if (0.0 <= fVar48) {
                    fVar46 = fVar51;
                  }
                }
                uVar37 = 0;
                fVar48 = 0.0;
                if (*(int *)(lVar39 + 0x1408) < 1) {
                  fVar48 = fVar46;
                }
                FUN_10a90de50(lVar39,*(long *)(param_3 + 0x78) + uVar35 * 0x20 + 0x2c00,
                              lVar39 + uVar35 * 4 + 0x278);
                lVar29 = *plVar24;
                func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2ded0);
                plStack_110 = (long *)CONCAT44(plStack_110._4_4_,(uint)*(byte *)(*plVar24 + 0x1518))
                ;
                FUN_10a90a334(lVar29,&plStack_170,&plStack_110);
                if ((long)uStack_160 < 0) {
                  __ZdlPv(plStack_170);
                }
                lVar29 = *plVar24;
                func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dee8);
                plStack_110 = (long *)CONCAT44(plStack_110._4_4_,
                                               fVar48 * *(float *)(*plVar24 + 0x1520));
                FUN_10a90de50(lVar29,&plStack_170,&plStack_110);
                if ((long)uStack_160 < 0) {
                  __ZdlPv(plStack_170);
                }
                plVar32 = plStack_200;
                lVar29 = *plVar24;
                fVar51 = *(float *)(lVar29 + 0x278 + uVar35 * 4);
                if (fVar51 < 0.0) {
                  fVar48 = fVar57;
                  if (*(char *)(lVar29 + 0x1518) == '\x01') {
                    fVar48 = *(float *)(lVar29 + 0x151c);
                  }
                }
                else {
                  fVar48 = *(float *)(lVar29 + 0x1520) * fVar48;
                }
                plVar49 = (long *)(ulong)(uint)(fVar51 + fVar48);
                *(float *)(lVar29 + 0x278 + uVar35 * 4) = fVar51 + fVar48;
                if (plStack_200 == (long *)0x0) {
                  uVar18 = 0;
                }
                else {
                  *(undefined1 *)(lVar21 + 0x129) = 1;
                  if (*(int *)(lVar29 + 0x1530) == 1) {
                    uVar38 = *(undefined8 *)(lVar28 + 0x140);
                    FUN_10a2cd058(uVar38);
                    plVar14 = plVar49;
                    plVar26 = param_2;
                    uVar50 = uVar37;
                    FUN_10a2f1bb8(uVar38);
                    fVar47 = (float)uVar50;
                    fVar46 = SUB84(plVar26,0);
                    fVar48 = SUB84(plVar14,0);
                    lVar29 = *plVar24;
                  }
                  else {
                    fVar47 = 1.0;
                    param_2 = (long *)0x0;
                    plVar49 = (long *)0x0;
                    fVar46 = 1.0;
                    fVar48 = 1.0;
                    uVar37 = 0;
                  }
                  if (*(char *)(lVar29 + 0x14fc) == '\x01') {
                    plVar49 = (long *)(ulong)*(uint *)(lVar29 + 0x14f0);
                    param_2 = (long *)(ulong)*(uint *)(lVar29 + 0x14f4);
                    plVar14 = plVar32;
                    FUN_10a42fbf0(plVar49,param_2,*(undefined4 *)(lVar29 + 0x14f8),
                                  *(undefined4 *)(lVar29 + 0x1504));
                    uVar18 = (uint)plVar14;
                  }
                  else {
                    fVar52 = *(float *)(lVar29 + 0x1504);
                    fVar53 = fVar47 * fVar52;
                    if (fVar47 * fVar52 <= fVar46 * fVar52) {
                      fVar53 = fVar46 * fVar52;
                    }
                    if (fVar53 <= fVar48 * fVar52) {
                      fVar53 = fVar48 * fVar52;
                    }
                    plVar14 = plVar32;
                    FUN_10a42fbf0(plVar49,param_2,uVar37,fVar53);
                    uVar18 = (uint)plVar14;
                  }
                  bVar10 = true;
                }
                uVar19 = 0;
                if ((*(ushort *)(lStack_338 + 0x180) & 0x17) == 0) {
                  uVar19 = plVar32 != (long *)0x0 & uVar18;
                }
                uVar27 = 0;
                if (0.0 <= fVar51) {
                  uVar27 = (char)uVar19;
                }
                plStack_170 = (long *)CONCAT71(plStack_170._1_7_,uVar27);
                lVar28 = *(long *)(param_3 + 0x78) + uVar35 * 0x20;
                lVar29 = *plVar24;
                plVar32 = *(long **)(lVar29 + 0x38);
                plVar14 = *(long **)(lVar29 + 0x40);
                if (plVar32 != plVar14) {
                  do {
                    if (*plVar32 != 0) {
                      FUN_10a917fc0(*plVar32,lVar28 + 0x2800,&plStack_170);
                    }
                    plVar32 = plVar32 + 2;
                  } while (plVar32 != plVar14);
                  lVar29 = *plVar24;
                }
                bVar5 = *(byte *)(lVar29 + uVar35 + 0x340);
                if ((bVar5 & 1) == 0 && uVar19 == 0) {
                  bVar5 = *(byte *)(lVar29 + 0x140c);
                }
                plStack_110 = (long *)((CONCAT71(plStack_110._1_7_,bVar5) ^ 0xff) &
                                      0xffffffffffffff01);
                if (*(long *)(lVar29 + 0x10) != 0) {
                  FUN_10a917fc0(*(long *)(lVar29 + 0x10),lVar28 + 0x2800,&plStack_110);
                  lVar29 = *plVar24;
                }
                plVar32 = plStack_1f8;
                if ((*(char *)(lVar29 + 0x140d) == '\x01') && (((ulong)plStack_170 & 1) != 0)) {
                  *(undefined1 *)(lVar29 + 0x140e) = 1;
                }
                if (plStack_1f8 != (long *)0x0) {
                  plVar14 = plStack_1f8 + 1;
                  do {
                    lVar28 = *plVar14;
                    cVar8 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar12) {
                      *plVar14 = lVar28 + -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if (lVar28 == 0) {
                    (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
                  }
                }
                if (plStack_328 != (long *)0x0) {
                  plVar32 = plStack_328 + 1;
                  do {
                    lVar28 = *plVar32;
                    cVar8 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(plVar32,0x10);
                    if (bVar12) {
                      *plVar32 = lVar28 + -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if (lVar28 == 0) {
                    (**(code **)(*plStack_328 + 0x10))(plStack_328);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_328);
                  }
                }
                bVar45 = bVar4 & bVar45;
                uVar43 = (uVar19 ^ 1) & uVar43;
                puVar42 = puVar42 + 1;
              } while (puVar42 != puVar44);
              lVar28 = *plVar24;
              if (!bVar16) goto LAB_10a90c190;
            }
            if ((*(char *)(lVar28 + 0x14fc) == '\x01') && (*(char *)(lVar28 + 0x1514) == '\x01')) {
              plVar32 = *(long **)(lVar28 + 0x38);
              plVar14 = *(long **)(lVar28 + 0x40);
              if (plVar32 != plVar14) {
                fVar48 = *(float *)(lVar28 + 0x14f0);
                plVar49 = (long *)(ulong)(uint)fVar48;
                fVar51 = *(float *)(lVar28 + 0x1508);
                param_2 = (long *)(ulong)(uint)fVar51;
                fVar46 = *(float *)(lVar28 + 0x14f4);
                fVar47 = *(float *)(lVar28 + 0x150c);
                fVar53 = *(float *)(lVar28 + 0x14f8);
                fVar52 = *(float *)(lVar28 + 0x1510);
                do {
                  if (*plVar32 != 0) {
                    func_0x00010a3327d4(*plVar32,2);
                    lVar28 = *plVar32;
                    *(float *)(lVar28 + 0x22c) = fVar48 - fVar51;
                    *(float *)(lVar28 + 0x230) = fVar46 - fVar47;
                    *(float *)(lVar28 + 0x234) = fVar53 - fVar52;
                    lVar28 = *plVar32;
                    *(float *)(lVar28 + 0x238) = fVar48 + fVar51;
                    *(float *)(lVar28 + 0x23c) = fVar46 + fVar47;
                    *(float *)(lVar28 + 0x240) = fVar53 + fVar52;
                  }
                  plVar32 = plVar32 + 2;
                } while (plVar32 != plVar14);
                lVar28 = *plVar24;
              }
            }
            if (((bVar15 & 1) == 0 && bVar45 == 0) && (*(int *)(lVar28 + 0x1408) == 0)) {
LAB_10a90c334:
              *(undefined1 *)(lVar21 + 0x128) = 0;
            }
            else {
              if ((puVar41 != puVar44 & bVar45) == 0) {
                uVar18 = 0;
                if (puVar41 != puVar44) {
                  uVar18 = uVar43 & *(byte *)(lVar28 + 0x140c);
                }
                uVar27 = (undefined1)uVar18;
              }
              else {
                uVar27 = 0;
                uVar18 = 1;
              }
              iVar20 = *(int *)(lVar28 + 0x1408);
              if (iVar20 == 0 && uVar18 != 0) {
                *(undefined4 *)(lVar28 + 0x1408) = 1;
                *(undefined4 *)(lVar28 + 0x1578) = 0;
                *(undefined1 *)(lVar28 + 0x157c) = uVar27;
              }
              else if (iVar20 == 2) {
                if (uVar18 == 0) {
                  *(undefined4 *)(lVar28 + 0x1408) = 0;
                  *(undefined4 *)(lVar28 + 0x1578) = 0;
                  if (*(char *)(lVar28 + 0x157c) == '\x01') {
                    FUN_10a8fedec(lVar28,1);
                  }
                  *(undefined1 *)(lVar28 + 0x157c) = 0;
                }
              }
              else if (iVar20 == 1) {
                if (uVar18 == 0) {
                  *(undefined4 *)(lVar28 + 0x1408) = 0;
                  *(undefined4 *)(lVar28 + 0x1578) = 0;
                }
                else {
                  iVar20 = *(int *)(lVar28 + 0x1578);
                  *(int *)(lVar28 + 0x1578) = iVar20 + 1;
                  if ((0 < iVar20) &&
                     (*(undefined4 *)(lVar28 + 0x1408) = 2, *(char *)(lVar28 + 0x157c) == '\x01')) {
                    FUN_10a8fedec(lVar28,0);
                  }
                }
              }
              lVar28 = *plVar24;
              if (*(int *)(lVar28 + 0x1408) != 2) goto LAB_10a90c334;
            }
            if (bVar10) {
              bVar15 = *(byte *)(lVar28 + 0x140e);
            }
            else {
              bVar15 = 0;
            }
            FUN_10a94143c(lVar28 + 0x1418,param_3 + 0x68,bVar15 & 1);
            plVar24 = plVar24 + 2;
          } while (plVar24 != plVar3);
          lVar21 = *plVar36;
        }
      }
      if ((*(byte *)(lVar21 + 0x128) & 1) == 0) {
        lVar28 = 4;
        plVar24 = (long *)(lVar21 + 0x70);
        do {
          lVar29 = plVar24[-7];
          param_2 = (long *)plVar24[-8];
          lVar21 = plVar24[-5];
          plVar49 = (long *)plVar24[-6];
          plVar24[-7] = plVar24[1];
          plVar24[-8] = *plVar24;
          plVar24[-5] = plVar24[3];
          plVar24[-6] = plVar24[2];
          plVar24[1] = lVar29;
          *plVar24 = (long)param_2;
          plVar24[3] = lVar21;
          plVar24[2] = (long)plVar49;
          lVar28 = lVar28 + -2;
          plVar24 = plVar24 + 4;
        } while (lVar28 != 0);
        FUN_10a93f6f4(*plVar36,param_3 + 0x68);
        lVar21 = *plVar36;
        bVar15 = *(byte *)(lVar21 + 0x128) ^ 1;
      }
      else {
        bVar15 = 0;
      }
      FUN_10a8ff5f8(lVar21,param_3 + 0x68,bVar15 & 1);
      FUN_10a93f778(*plVar36,param_3 + 0x68,*(undefined8 *)(param_3 + 0x78));
      lVar21 = *plVar36;
      plVar24 = *(long **)(lVar21 + 200);
      plVar3 = *(long **)(lVar21 + 0xd0);
      if (plVar24 != plVar3) {
        do {
          lVar28 = *plVar24;
          if (*(char *)(lVar28 + 0x140e) == '\x01') {
            iVar20 = *(int *)(lVar28 + 0x54);
            if (*(int *)(lVar28 + 0x14e8) != iVar20) {
              *(int *)(lVar28 + 0x14e8) = iVar20;
              if (iVar20 == 0) {
                plVar49 = (long *)0x0;
              }
              else {
                if (*(undefined4 **)(lVar28 + 0x310) == *(undefined4 **)(lVar28 + 0x318)) {
                  lVar29 = 0;
                }
                else {
                  lVar29 = lVar28;
                  func_0x00010a8fdae4(lVar28,**(undefined4 **)(lVar28 + 0x310));
                  lVar29 = *(long *)(lVar29 + 0x120);
                }
                FUN_10a2421c8();
                plVar49 = *(long **)(lVar29 + 0x228);
                (**(code **)(*plVar49 + 0x68))();
                uVar18 = *(uint *)(plVar49 + 0x11);
                uVar43 = uVar18;
                if (0x7ff < uVar18) {
                  uVar43 = 0x800;
                }
                uVar19 = 0x80000000 >> (ulong)((uint)LZCOUNT(uVar43) & 0x1f);
                if ((int)uVar18 < 1) {
                  uVar19 = 0x800;
                }
                uVar43 = (uint)LZCOUNT(uVar43) ^ 0x1f;
                if ((int)uVar18 < 1) {
                  uVar43 = 0xb;
                }
                if ((ulong)uVar19 << uVar43 < (ulong)*(uint *)(lVar28 + 0x54)) {
                  func_0x00010ae06f08(1,0x12,&UNK_10f6821fc,&UNK_10f6821fc,0xffffffff,&UNK_10f68245d
                                     );
                  fVar57 = (float)uVar19;
                  plVar49 = (long *)CONCAT44(fVar57,fVar57);
                }
                else {
                  iVar20 = (int)LZCOUNT(*(uint *)(lVar28 + 0x54) - 1);
                  param_2 = (long *)((long)&MACH_HEADER.magic + 1);
                  uVar37 = NEON_ushl(0x100000001,CONCAT44(0x20U - iVar20 >> 1,0x21U - iVar20 >> 1),4
                                    );
                  plVar49 = (long *)NEON_ucvtf(uVar37,4);
                }
              }
              lVar29 = *plVar24;
              uStack_220 = plVar49;
              func_0x00010a941380(lVar29 + 0x1418);
              if (*(undefined4 **)(lVar29 + 0x310) != *(undefined4 **)(lVar29 + 0x318)) {
                lVar39 = lVar29;
                func_0x00010a8fdae4(lVar29,**(undefined4 **)(lVar29 + 0x310));
                lVar39 = *(long *)(lVar39 + 0x120);
                if ((lVar39 != 0) && (*(long *)(lVar29 + 0x1550) != 0)) {
                  sVar6 = *(short *)(lVar39 + 0xd14);
                  sVar17 = 0x40;
                  if (sVar6 != -2) {
                    sVar17 = sVar6 + 1;
                  }
                  *(short *)(lVar39 + 0xd14) = sVar17;
                  FUN_10a8fe6ac(&uStack_d0,lVar39);
                  FUN_10a069ac8(lVar29 + 0x14b8,&uStack_d0);
                  FUN_10a90937c((ulong)uStack_220 & 0xffffffff,uStack_220._4_4_,lVar29 + 0x14b8);
                  lStack_e8 = 0;
                  plStack_f0 = (long *)0x0;
                  lStack_d8 = 0;
                  plStack_e0 = (long *)0x0;
                  plStack_108 = (long *)0x0;
                  plStack_110 = (long *)0x0;
                  lStack_f8 = 0;
                  plStack_100 = (long *)0x0;
                  func_0x00010a04a704(&plStack_110,&uStack_d0);
                  fVar57 = (float)uStack_220 / uStack_220._4_4_;
                  if (uStack_220._4_4_ == 0.0) {
                    fVar57 = 1.0;
                  }
                  FUN_10a8fef6c((float)uStack_220 * 0.5,&plStack_170,lVar29 + 0x1550,0,sVar6,
                                0xffffd9b9,&plStack_110,1);
                  FUN_10a8fe7a8(lVar29 + 0x1458,&plStack_170);
                  FUN_10a8ff960(&plStack_170);
                  FUN_10ab45900(&plStack_170,*(undefined8 *)(lVar29 + 0x1560),0);
                  plStack_118 = (long *)CONCAT44(uStack_168._4_4_,(float)uStack_168);
                  plStack_120 = plStack_170;
                  uStack_168._0_4_ = 0.0;
                  uStack_168._4_4_ = 0.0;
                  plStack_170 = (long *)0x0;
                  FUN_10a044790(&uStack_160);
                  (*(code *)*uStack_158)(&uStack_158);
                  plVar49 = (long *)CONCAT44(uStack_168._4_4_,(float)uStack_168);
                  if (plVar49 != (long *)0x0) {
                    plVar32 = plVar49 + 1;
                    do {
                      lVar40 = *plVar32;
                      cVar8 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(plVar32,0x10);
                      if (bVar10) {
                        *plVar32 = lVar40 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (lVar40 == 0) {
                      (**(code **)(*plVar49 + 0x10))(plVar49);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar49);
                    }
                  }
                  plVar49 = plStack_120;
                  if (plStack_120 != (long *)0x0) {
                    func_0x000107c2b054(&uStack_320,&UNK_10f682440);
                    if (*(char *)((long)plVar49 + 0x6f) < '\0') {
                      __ZdlPv(plVar49[0xb]);
                    }
                    plVar32 = uStack_320;
                    plVar49[0xc] = (long)uStack_318;
                    plVar49[0xb] = (long)uStack_320;
                    plVar49[0xd] = CONCAT44(fStack_30c,fStack_310);
                    fStack_30c = (float)((uint)fStack_30c & 0xffffff);
                    uStack_320 = (long *)((ulong)uStack_320 & 0xffffffffffffff00);
                    if (((long *)plVar49[0x45] != (long *)plVar49[0x46]) &&
                       (lVar40 = *(long *)plVar49[0x45], lVar40 != 0)) {
                      func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dcf0);
                      iVar20 = (int)plVar32;
                      FUN_10a8fe820(lVar40,&plStack_170,lVar21 + 0x30,1);
                      if ((long)uStack_160 < 0) {
                        __ZdlPv(plStack_170);
                      }
                      func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dd08);
                      FUN_10a8fe820(lVar40,&plStack_170,lVar21 + 0x40,1);
                      if ((long)uStack_160 < 0) {
                        __ZdlPv(plStack_170);
                      }
                      if (*(char *)(lVar29 + 0x140f) == '\x01') {
                        func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dd20);
                        FUN_10a8fe820(lVar40,&plStack_170,lVar21 + 0x50,1);
                        if ((long)uStack_160 < 0) {
                          __ZdlPv(plStack_170);
                        }
                      }
                      if (*(char *)(lVar29 + 0x1410) == '\x01') {
                        func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dd38);
                        FUN_10a8fe820(lVar40,&plStack_170,lVar21 + 0x60,1);
                        if ((long)uStack_160 < 0) {
                          __ZdlPv(plStack_170);
                        }
                      }
                      func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dd50);
                      iStack_1f0 = 0x3f800000;
                      FUN_10a0d9bd4(lVar40,&plStack_170,&iStack_1f0);
                      if ((long)uStack_160 < 0) {
                        __ZdlPv(plStack_170);
                      }
                      func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dd68);
                      FUN_10a0da430(lVar40,&plStack_170,&uStack_220);
                      if ((long)uStack_160 < 0) {
                        __ZdlPv(plStack_170);
                      }
                      func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dd80);
                      FUN_10a0da430(lVar40,&plStack_170,&uStack_220);
                      if ((long)uStack_160 < 0) {
                        __ZdlPv(plStack_170);
                      }
                      func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dd98);
                      FUN_10a8fe904(lVar21 + 0x30);
                      iStack_1f0 = iVar20;
                      fStack_1ec = fVar57;
                      FUN_10a0da430(lVar40,&plStack_170,&iStack_1f0);
                      if ((long)uStack_160 < 0) {
                        __ZdlPv(plStack_170);
                      }
                      uVar43 = *(uint *)(lVar29 + 0x50);
                      if ((int)uVar43 < 1) {
                        iStack_1f0 = 0;
                      }
                      else {
                        uVar18 = 0;
                        if (uVar43 != 0) {
                          uVar18 = 0x800 / uVar43;
                        }
                        iStack_1f0 = uVar18 * uVar43;
                      }
                      func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2ddb0);
                      FUN_10a6bfbe8(lVar40,&plStack_170,&iStack_1f0);
                      if ((long)uStack_160 < 0) {
                        __ZdlPv(plStack_170);
                      }
                      func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2ddc8);
                      fStack_260 = (float)*(int *)(lVar29 + 0x50);
                      FUN_10a0d9bd4(lVar40,&plStack_170,&fStack_260);
                      if ((long)uStack_160 < 0) {
                        __ZdlPv(plStack_170);
                      }
                    }
                  }
                  plStack_180 = plVar49;
                  plStack_178 = plStack_118;
                  if (plStack_118 != (long *)0x0) {
                    plVar49 = plStack_118 + 1;
                    do {
                      cVar8 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(plVar49,0x10);
                      if (bVar10) {
                        *plVar49 = *plVar49 + 1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                  }
                  FUN_10a9410fc(&uStack_2a0,lVar29 + 0x1550,&plStack_180);
                  plVar49 = plStack_178;
                  if (plStack_178 != (long *)0x0) {
                    plVar32 = plStack_178 + 1;
                    do {
                      lVar40 = *plVar32;
                      cVar8 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(plVar32,0x10);
                      if (bVar10) {
                        *plVar32 = lVar40 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (lVar40 == 0) {
                      (**(code **)(*plStack_178 + 0x10))(plStack_178);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar49);
                    }
                  }
                  lVar40 = lVar29 + 0x1550;
                  FUN_10a8fe098(lVar40,uStack_2a0);
                  if ((int)lVar40 != 0) {
                    FUN_10a8fe9ac(lVar29 + 0x1458,lVar29 + 0x1550);
                    FUN_10a8fea0c(lVar29 + 0x1458,*(undefined8 *)(lVar29 + 0x1550),uStack_2a0);
                    FUN_10a8feabc(lVar29 + 0x14a0,&uStack_2a0);
                  }
                  bVar10 = true;
                  do {
                    bVar16 = bVar10;
                    FUN_10a8fe6ac(&plStack_170,lVar39);
                    func_0x00010a067b00(lVar29 + 0x14d0,&plStack_170);
                    plVar49 = (long *)CONCAT44(uStack_168._4_4_,(float)uStack_168);
                    if (plVar49 != (long *)0x0) {
                      plVar32 = plVar49 + 1;
                      do {
                        lVar40 = *plVar32;
                        cVar8 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(plVar32,0x10);
                        if (bVar10) {
                          *plVar32 = lVar40 + -1;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                      if (lVar40 == 0) {
                        (**(code **)(*plVar49 + 0x10))(plVar49);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar49);
                      }
                    }
                    bVar10 = false;
                  } while (bVar16);
                  FUN_10a90937c((ulong)uStack_220 & 0xffffffff,uStack_220._4_4_,lVar29 + 0x14d0);
                  fVar48 = (float)uStack_220 * uStack_220._4_4_;
                  fVar57 = fVar48;
                  _log2f();
                  if (fVar48 <= 0.0) {
                    fVar57 = 0.0;
                  }
                  param_2 = (long *)0x3f000000;
                  fVar57 = fVar57 * (fVar57 + 1.0) * 0.5;
                  if (fVar57 <= 1.0) {
                    fVar57 = 1.0;
                  }
                  plVar49 = (long *)(ulong)(uint)fVar57;
                  *(int *)(lVar29 + 0x14ec) = (int)fVar57;
                  FUN_10a9414bc(&uStack_1a0,lVar29 + 0x1418);
                  plVar14 = *(long **)(lVar29 + 0x40);
                  for (plVar32 = *(long **)(lVar29 + 0x38); plVar32 != plVar14;
                      plVar32 = plVar32 + 2) {
                    lVar40 = *plVar32;
                    if (lVar40 != 0) {
                      func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dde0);
                      FUN_10a8fe820(lVar40,&plStack_170,&uStack_1a0,1);
                      if ((long)uStack_160 < 0) {
                        __ZdlPv(plStack_170);
                      }
                      lVar40 = *plVar32;
                      func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2ddf8);
                      FUN_10a0da430(lVar40,&plStack_170,&uStack_220);
                      if ((long)uStack_160 < 0) {
                        __ZdlPv(plStack_170);
                      }
                    }
                  }
                  FUN_10a8fe904(lVar21 + 0x30);
                  uStack_1a8 = SUB84(plVar49,0);
                  uStack_1a4 = SUB84(param_2,0);
                  if (0 < *(int *)(lVar29 + 0x14ec)) {
                    uVar43 = 0;
                    plVar32 = (long *)(lVar29 + 0x1488);
                    fVar57 = -1.0;
                    iVar20 = -0x2647;
                    fVar48 = -1.0;
                    do {
                      fVar46 = fVar57 + -1.0;
                      fVar57 = fVar48 + 1.0;
                      fVar51 = fVar48 + 1.0;
                      if (0.0 <= fVar46) {
                        fVar57 = fVar46;
                        fVar51 = fVar48;
                      }
                      fVar48 = fVar51;
                      sVar6 = *(short *)(lVar39 + 0xd14);
                      sVar17 = 0x40;
                      if (sVar6 != -2) {
                        sVar17 = sVar6 + 1;
                      }
                      *(short *)(lVar39 + 0xd14) = sVar17;
                      uVar18 = uVar43 & 1;
                      uStack_1c8 = 0;
                      uStack_1c4 = 0;
                      plStack_1d0 = (long *)0x0;
                      uStack_1b8 = 0;
                      uStack_1b4 = 0;
                      uStack_1c0 = 0;
                      uStack_1bc = 0;
                      uStack_1e8 = 0;
                      uStack_1e4 = 0;
                      iStack_1f0 = 0;
                      fStack_1ec = 0.0;
                      uStack_1d8 = 0;
                      uStack_1e0 = 0;
                      uStack_1dc = 0;
                      if ((ulong)(*(long *)(lVar29 + 0x14d8) - *(long *)(lVar29 + 0x14d0) >> 4) <=
                          (ulong)uVar18) goto LAB_10a90da14;
                      iVar20 = iVar20 + 1;
                      func_0x00010a04a704(&iStack_1f0,
                                          *(long *)(lVar29 + 0x14d0) + (ulong)uVar18 * 0x10);
                      fVar51 = (float)uStack_220 / uStack_220._4_4_;
                      if (uStack_220._4_4_ == 0.0) {
                        fVar51 = 1.0;
                      }
                      param_2 = (long *)(ulong)(uint)fVar51;
                      FUN_10a8fef6c((float)uStack_220 * 0.5,&fStack_260,lVar29 + 0x1550,0,sVar6,
                                    iVar20,&iStack_1f0,1);
                      FUN_10ab45900(&plStack_170,*(undefined8 *)(lVar29 + 0x1560),0);
                      plStack_1f8 = (long *)CONCAT44(uStack_168._4_4_,(float)uStack_168);
                      plStack_200 = plStack_170;
                      uStack_168._0_4_ = 0.0;
                      uStack_168._4_4_ = 0.0;
                      plStack_170 = (long *)0x0;
                      FUN_10a044790(&uStack_160);
                      (*(code *)*uStack_158)(&uStack_158);
                      plVar49 = (long *)CONCAT44(uStack_168._4_4_,(float)uStack_168);
                      if (plVar49 != (long *)0x0) {
                        plVar14 = plVar49 + 1;
                        do {
                          lVar40 = *plVar14;
                          cVar8 = '\x01';
                          bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                          if (bVar10) {
                            *plVar14 = lVar40 + -1;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar8 != '\0');
                        if (lVar40 == 0) {
                          (**(code **)(*plVar49 + 0x10))(plVar49);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar49);
                        }
                      }
                      plVar49 = plStack_200;
                      if (plStack_200 != (long *)0x0) {
                        __ZNSt3__19to_stringEi(&plStack_170,uVar43);
                        pplVar13 = &plStack_170;
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                                  (pplVar13,0,&UNK_10f682453,9);
                        plVar14 = *pplVar13;
                        uStack_190 = SUB87(pplVar13[1],0);
                        uStack_189 = (undefined1)*(undefined8 *)((long)pplVar13 + 0xf);
                        uStack_188 = (undefined7)((ulong)*(undefined8 *)((long)pplVar13 + 0xf) >> 8)
                        ;
                        uVar27 = *(undefined1 *)((long)pplVar13 + 0x17);
                        pplVar13[1] = (long *)0x0;
                        pplVar13[2] = (long *)0x0;
                        *pplVar13 = (long *)0x0;
                        if (*(char *)((long)plVar49 + 0x6f) < '\0') {
                          __ZdlPv(plVar49[0xb]);
                        }
                        plVar49[0xb] = (long)plVar14;
                        plVar49[0xc] = CONCAT17(uStack_189,uStack_190);
                        *(ulong *)((long)plVar49 + 0x67) = CONCAT71(uStack_188,uStack_189);
                        *(undefined1 *)((long)plVar49 + 0x6f) = uVar27;
                        if ((long)uStack_160 < 0) {
                          __ZdlPv(plStack_170);
                        }
                        if (((long *)plVar49[0x45] != (long *)plVar49[0x46]) &&
                           (lVar40 = *(long *)plVar49[0x45], lVar40 != 0)) {
                          if (uVar43 == 0) {
                            uVar18 = *(uint *)(lVar29 + 0x1458);
                            if ((uVar18 != 0) && (lVar22 = *(long *)(lVar29 + 0x1550), lVar22 != 0))
                            {
                              uVar35 = (ulong)uVar18 & 0x3fff;
                              lVar23 = *(long *)(lVar22 + 0x88);
                              uVar31 = (*(long *)(lVar22 + 0x90) - lVar23 >> 7) *
                                       -0x5555555555555555;
                              if ((uVar35 <= uVar31 && uVar31 - uVar35 != 0) &&
                                 ((pcVar34 = (char *)(lVar23 + uVar35 * 0x180),
                                  *(uint *)(pcVar34 + 4) == uVar18 && (*pcVar34 != '\x02')))) {
                                uVar18 = *(uint *)(lVar23 + uVar35 * 0x180 + 8);
                                if (uVar18 != 0) {
                                  uVar35 = (ulong)uVar18 & 0x3fff;
                                  lVar23 = *(long *)(lVar22 + 0x68);
                                  uVar31 = (*(long *)(lVar22 + 0x70) - lVar23 >> 4) *
                                           -0x5555555555555555;
                                  if ((((uVar35 <= uVar31 && uVar31 - uVar35 != 0) &&
                                       (pcVar34 = (char *)(lVar23 + uVar35 * 0x30),
                                       *(uint *)(pcVar34 + 4) == uVar18)) && (*pcVar34 != '\x02'))
                                     && ((lVar23 = lVar23 + uVar35 * 0x30,
                                         plVar49 = *(long **)(lVar23 + 8),
                                         plVar49 != *(long **)(lVar23 + 0x10) &&
                                         (lVar22 = *plVar49, lVar22 != 0)))) {
                                    uStack_2d8 = (undefined4)*(undefined8 *)(lVar22 + 0x30);
                                    uStack_2d4 = (undefined4)
                                                 ((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20);
                                    uStack_2e0 = (undefined4)*(undefined8 *)(lVar22 + 0x28);
                                    uStack_2dc = (undefined4)
                                                 ((ulong)*(undefined8 *)(lVar22 + 0x28) >> 0x20);
                                    if (*(long *)(lVar22 + 0x30) != 0) {
                                      plVar49 = (long *)(*(long *)(lVar22 + 0x30) + 8);
                                      do {
                                        cVar8 = '\x01';
                                        bVar10 = (bool)ExclusiveMonitorPass(plVar49,0x10);
                                        if (bVar10) {
                                          *plVar49 = *plVar49 + 1;
                                          cVar8 = ExclusiveMonitorsStatus();
                                        }
                                      } while (cVar8 != '\0');
                                    }
                                    goto LAB_10a90ce9c;
                                  }
                                }
                              }
                            }
                            uStack_2e0 = 0;
                            uStack_2dc = 0;
                            uStack_2d8 = 0;
                            uStack_2d4 = 0;
                          }
                          else {
                            if ((ulong)(*(long *)(lVar29 + 0x14d8) - *(long *)(lVar29 + 0x14d0) >> 4
                                       ) <= (ulong)(uVar18 ^ 1)) goto LAB_10a90da14;
                            puVar25 = (undefined8 *)
                                      (*(long *)(lVar29 + 0x14d0) + (ulong)(uVar18 ^ 1) * 0x10);
                            uStack_2d8 = (undefined4)puVar25[1];
                            uStack_2d4 = (undefined4)((ulong)puVar25[1] >> 0x20);
                            uStack_2e0 = (undefined4)*puVar25;
                            uStack_2dc = (undefined4)((ulong)*puVar25 >> 0x20);
                            if (puVar25[1] != 0) {
                              plVar49 = (long *)(puVar25[1] + 8);
                              do {
                                cVar8 = '\x01';
                                bVar10 = (bool)ExclusiveMonitorPass(plVar49,0x10);
                                if (bVar10) {
                                  *plVar49 = *plVar49 + 1;
                                  cVar8 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar8 != '\0');
                            }
                          }
LAB_10a90ce9c:
                          func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2de10);
                          FUN_10a8fe820(lVar40,&plStack_170,&uStack_2e0,1);
                          if ((long)uStack_160 < 0) {
                            __ZdlPv(plStack_170);
                          }
                          func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2de28);
                          fVar51 = fVar57;
                          _exp2f();
                          fStack_204 = fVar51;
                          FUN_10a0d9bd4(lVar40,&plStack_170,&fStack_204);
                          if ((long)uStack_160 < 0) {
                            __ZdlPv(plStack_170);
                          }
                          func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2de40);
                          fVar51 = fVar48;
                          _exp2f();
                          fStack_204 = fVar51;
                          FUN_10a0d9bd4(lVar40,&plStack_170,&fStack_204);
                          if ((long)uStack_160 < 0) {
                            __ZdlPv(plStack_170);
                          }
                          func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dd50);
                          fStack_204 = 2.0;
                          FUN_10a0d9bd4(lVar40,&plStack_170,&fStack_204);
                          if ((long)uStack_160 < 0) {
                            __ZdlPv(plStack_170);
                          }
                          FUN_10a8fec40(lVar29,lVar40,&uStack_220,&uStack_1a8);
                          plVar14 = (long *)CONCAT44(uStack_2d4,uStack_2d8);
                          plVar49 = plStack_200;
                          if (plVar14 != (long *)0x0) {
                            plVar26 = plVar14 + 1;
                            do {
                              lVar40 = *plVar26;
                              cVar8 = '\x01';
                              bVar10 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                              if (bVar10) {
                                *plVar26 = lVar40 + -1;
                                cVar8 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar8 != '\0');
                            if (lVar40 == 0) {
                              (**(code **)(*plVar14 + 0x10))(plVar14);
                              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
                              plVar49 = plStack_200;
                            }
                          }
                        }
                      }
                      plStack_210 = plStack_1f8;
                      if (plStack_1f8 != (long *)0x0) {
                        plVar14 = plStack_1f8 + 1;
                        do {
                          cVar8 = '\x01';
                          bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                          if (bVar10) {
                            *plVar14 = *plVar14 + 1;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar8 != '\0');
                      }
                      plStack_218 = plVar49;
                      FUN_10a9410fc(&uStack_2e0,lVar29 + 0x1550,&plStack_218);
                      plVar49 = plStack_210;
                      if (plStack_210 != (long *)0x0) {
                        plVar14 = plStack_210 + 1;
                        do {
                          lVar40 = *plVar14;
                          cVar8 = '\x01';
                          bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                          if (bVar10) {
                            *plVar14 = lVar40 + -1;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar8 != '\0');
                        if (lVar40 == 0) {
                          (**(code **)(*plStack_210 + 0x10))(plStack_210);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar49);
                        }
                      }
                      lVar40 = lVar29 + 0x1550;
                      FUN_10a8fe098(lVar40,uStack_2e0);
                      if ((int)lVar40 != 0) {
                        FUN_10a8fe9ac(&fStack_260,lVar29 + 0x1550);
                        FUN_10a8fea0c(&fStack_260,*(undefined8 *)(lVar29 + 0x1550),uStack_2e0);
                        FUN_10a8feabc(lVar29 + 0x14a0,&uStack_2e0);
                      }
                      plVar49 = plStack_240;
                      uVar37 = uStack_248;
                      puVar25 = *(undefined8 **)(lVar29 + 0x1490);
                      if (puVar25 < *(undefined8 **)(lVar29 + 0x1498)) {
                        uVar38 = CONCAT44(uStack_254,uStack_258);
                        uVar50 = CONCAT44(uStack_25c,fStack_260);
                        fStack_260 = 0.0;
                        uStack_25c = 0;
                        uStack_258 = 0;
                        uStack_254 = 0;
                        puVar25[1] = uVar38;
                        *puVar25 = uVar50;
                        uVar50 = CONCAT44(uStack_24c,uStack_250);
                        uStack_250 = 0;
                        uStack_24c = 0;
                        uStack_248 = 0;
                        puVar25[3] = uVar37;
                        puVar25[2] = uVar50;
                        puVar25[5] = CONCAT44(uStack_234,uStack_238);
                        puVar25[4] = plStack_240;
                        plStack_240 = (long *)0x0;
                        uStack_238 = 0;
                        uStack_234 = 0;
                        puVar25 = puVar25 + 6;
                        *(undefined8 **)(lVar29 + 0x1490) = puVar25;
                      }
                      else {
                        lVar40 = (long)puVar25 - *plVar32;
                        uVar35 = (lVar40 >> 4) * -0x5555555555555555 + 1;
                        if (0x555555555555555 < uVar35) {
                          func_0x00010a90fef8();
                          goto LAB_10a90da14;
                        }
                        lVar22 = (long)*(undefined8 **)(lVar29 + 0x1498) - *plVar32 >> 4;
                        uVar31 = lVar22 * 0x5555555555555556;
                        if (uVar31 < uVar35 || uVar31 - uVar35 == 0) {
                          uVar31 = uVar35;
                        }
                        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar22 * -0x5555555555555555)) {
                          uVar31 = 0x555555555555555;
                        }
                        plStack_150 = plVar32;
                        if (uVar31 == 0) {
                          plVar14 = (long *)0x0;
                        }
                        else {
                          plVar14 = plVar32;
                          FUN_10a90ff0c();
                        }
                        plVar49 = plStack_240;
                        uVar38 = uStack_248;
                        uStack_168 = (undefined8 *)((long)plVar14 + lVar40);
                        uVar50 = CONCAT44(uStack_254,uStack_258);
                        uVar37 = CONCAT44(uStack_25c,fStack_260);
                        fStack_260 = 0.0;
                        uStack_25c = 0;
                        uStack_258 = 0;
                        uStack_254 = 0;
                        uStack_168[1] = uVar50;
                        *uStack_168 = uVar37;
                        uVar37 = CONCAT44(uStack_24c,uStack_250);
                        uStack_250 = 0;
                        uStack_24c = 0;
                        uStack_248 = 0;
                        uStack_168[3] = uVar38;
                        uStack_168[2] = uVar37;
                        uStack_168[5] = CONCAT44(uStack_234,uStack_238);
                        uStack_168[4] = plStack_240;
                        plStack_240 = (long *)0x0;
                        uStack_238 = 0;
                        uStack_234 = 0;
                        puVar25 = uStack_168 + 6;
                        lVar40 = (long)uStack_168 +
                                 (*(long *)(lVar29 + 0x1488) - *(long *)(lVar29 + 0x1490));
                        plStack_170 = plVar14;
                        uStack_158 = plVar14 + uVar31 * 6;
                        uStack_160 = (long **)puVar25;
                        func_0x00010a90ff50(plVar32,*(long *)(lVar29 + 0x1488),
                                            *(long *)(lVar29 + 0x1490),lVar40);
                        plStack_170 = *(long **)(lVar29 + 0x1488);
                        *(long *)(lVar29 + 0x1488) = lVar40;
                        *(undefined8 **)(lVar29 + 0x1490) = puVar25;
                        uStack_158 = *(long **)(lVar29 + 0x1498);
                        *(long **)(lVar29 + 0x1498) = plVar14 + uVar31 * 6;
                        uStack_160._0_4_ = SUB84(plStack_170,0);
                        uStack_160._4_4_ = (float)((ulong)plStack_170 >> 0x20);
                        uStack_168._0_4_ = (float)uStack_160;
                        uStack_168._4_4_ = uStack_160._4_4_;
                        func_0x00010a90ffc0(&plStack_170);
                      }
                      *(undefined8 **)(lVar29 + 0x1490) = puVar25;
                      FUN_10a9412d0(&uStack_2e0);
                      plVar14 = plStack_1f8;
                      if (plStack_1f8 != (long *)0x0) {
                        plVar26 = plStack_1f8 + 1;
                        do {
                          lVar40 = *plVar26;
                          cVar8 = '\x01';
                          bVar10 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                          if (bVar10) {
                            *plVar26 = lVar40 + -1;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar8 != '\0');
                        if (lVar40 == 0) {
                          (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
                        }
                      }
                      FUN_10a8ff960(&fStack_260);
                      lVar40 = 0x30;
                      do {
                        func_0x00010a05248c((long)&iStack_1f0 + lVar40);
                        lVar40 = lVar40 + -0x10;
                      } while (lVar40 != -0x10);
                      uVar43 = uVar43 + 1;
                    } while ((int)uVar43 < *(int *)(lVar29 + 0x14ec));
                  }
                  plVar32 = plStack_198;
                  if (plStack_198 != (long *)0x0) {
                    plVar14 = plStack_198 + 1;
                    do {
                      lVar29 = *plVar14;
                      cVar8 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                      if (bVar10) {
                        *plVar14 = lVar29 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (lVar29 == 0) {
                      (**(code **)(*plStack_198 + 0x10))(plStack_198);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
                    }
                  }
                  FUN_10a9412d0(&uStack_2a0);
                  plVar32 = plStack_118;
                  if (plStack_118 != (long *)0x0) {
                    plVar14 = plStack_118 + 1;
                    do {
                      lVar29 = *plVar14;
                      cVar8 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                      if (bVar10) {
                        *plVar14 = lVar29 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (lVar29 == 0) {
                      (**(code **)(*plStack_118 + 0x10))(plStack_118);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
                    }
                  }
                  lVar29 = 0x30;
                  do {
                    func_0x00010a05248c((long)&plStack_110 + lVar29);
                    plVar32 = plStack_c8;
                    lVar29 = lVar29 + -0x10;
                  } while (lVar29 != -0x10);
                  if (plStack_c8 != (long *)0x0) {
                    plVar14 = plStack_c8 + 1;
                    do {
                      lVar29 = *plVar14;
                      cVar8 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                      if (bVar10) {
                        *plVar14 = lVar29 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (lVar29 == 0) {
                      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
                    }
                  }
                }
              }
              if (*(char *)(*plVar24 + 0x140e) != '\x01') goto LAB_10a90d82c;
            }
            if (((*(long *)(lVar28 + 0x14a0) != *(long *)(lVar28 + 0x14a8)) &&
                (0x10 < (ulong)(*(long *)(lVar28 + 0x14d8) - *(long *)(lVar28 + 0x14d0)))) &&
               (0 < *(int *)(lVar28 + 0x14ec))) {
              FUN_10a9414bc(&plStack_110,lVar28 + 0x1418);
              plVar14 = *(long **)(*plVar24 + 0x40);
              for (plVar32 = *(long **)(*plVar24 + 0x38); plVar32 != plVar14; plVar32 = plVar32 + 2)
              {
                lVar29 = *plVar32;
                if (lVar29 != 0) {
                  func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dde0);
                  FUN_10a8fe820(lVar29,&plStack_170,&plStack_110,1);
                  if ((long)uStack_160 < 0) {
                    __ZdlPv(plStack_170);
                  }
                }
              }
              FUN_10a941524(lVar28 + 0x1418);
              fStack_260 = SUB84(plVar49,0);
              uStack_25c = SUB84(param_2,0);
              FUN_10a8fe904(lVar21 + 0x30);
              uStack_2a0 = SUB84(plVar49,0);
              uStack_29c = CONCAT44(uStack_29c._4_4_,(int)param_2);
              if (*(long *)(lVar28 + 0x14a0) == *(long *)(lVar28 + 0x14a8)) goto LAB_10a90da14;
              plVar32 = *(long **)(*(long *)(lVar28 + 0x14a0) + 8);
              if (plVar32 == (long *)0x0) {
                plVar32 = (long *)0x0;
                iStack_1f0 = 0;
                fStack_1ec = 0.0;
                uStack_1e8 = 0;
                uStack_1e4 = 0;
              }
              else {
                FUN_10ab46af4();
                lVar29 = *plVar32;
                plVar32 = (long *)plVar32[1];
                iStack_1f0 = (int)lVar29;
                fStack_1ec = (float)((ulong)lVar29 >> 0x20);
                uStack_1e8 = SUB84(plVar32,0);
                uStack_1e4 = (undefined4)((ulong)plVar32 >> 0x20);
                if (plVar32 != (long *)0x0) {
                  plVar14 = plVar32 + 1;
                  do {
                    cVar8 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar10) {
                      *plVar14 = *plVar14 + 1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                }
                if (lVar29 != 0) {
                  plVar14 = *(long **)(*plVar24 + 0x38);
                  if ((plVar14 != *(long **)(*plVar24 + 0x40)) && (lVar39 = *plVar14, lVar39 != 0))
                  {
                    func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2e680);
                    plVar26 = (long *)(*(long *)(lVar39 + 0x1b8) + 8);
                    plVar30 = (long *)*plVar26;
                    plVar14 = plVar26;
                    if (plVar30 == (long *)0x0) {
LAB_10a90d4a8:
                      lVar39 = 0;
                    }
                    else {
                      do {
                        lVar39 = 8;
                        if (uStack_158 <= (undefined8 *)plVar30[7]) {
                          lVar39 = 0;
                          plVar14 = plVar30;
                        }
                        plVar30 = *(long **)((long)plVar30 + lVar39);
                      } while (plVar30 != (long *)0x0);
                      if ((plVar14 == plVar26) || (uStack_158 < (undefined8 *)plVar14[7]))
                      goto LAB_10a90d4a8;
                      lVar39 = plVar14[8];
                    }
                    if ((long)uStack_160 < 0) {
                      __ZdlPv(plStack_170);
                    }
                    if (lVar39 != 0) {
                      func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2e680);
                      if (*(short *)(lVar39 + 0x20) != 2) goto LAB_10a90da08;
                      uStack_2e0 = *(undefined4 *)(lVar39 + 0x24);
                      FUN_10a6bfbe8(lVar29,&plStack_170,&uStack_2e0);
                      if ((long)uStack_160 < 0) {
                        __ZdlPv(plStack_170);
                      }
                    }
                  }
                  func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2deb8);
                  FUN_10a6bfa20(lVar29,&plStack_170,*plVar24 + 0x1418);
                  if ((long)uStack_160 < 0) {
                    __ZdlPv(plStack_170);
                  }
                  func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dcf0);
                  FUN_10a8fe820(lVar29,&plStack_170,lVar21 + 0x30,1);
                  if ((long)uStack_160 < 0) {
                    __ZdlPv(plStack_170);
                  }
                  func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dd08);
                  FUN_10a8fe820(lVar29,&plStack_170,lVar21 + 0x40,1);
                  if ((long)uStack_160 < 0) {
                    __ZdlPv(plStack_170);
                  }
                  lVar39 = *plVar24;
                  if (*(char *)(lVar39 + 0x140f) == '\x01') {
                    func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dd20);
                    FUN_10a8fe820(lVar29,&plStack_170,lVar21 + 0x50,1);
                    if ((long)uStack_160 < 0) {
                      __ZdlPv(plStack_170);
                    }
                    lVar39 = *plVar24;
                  }
                  if (*(char *)(lVar39 + 0x1410) == '\x01') {
                    func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dd38);
                    FUN_10a8fe820(lVar29,&plStack_170,lVar21 + 0x60,1);
                    if ((long)uStack_160 < 0) {
                      __ZdlPv(plStack_170);
                    }
                    lVar39 = *plVar24;
                  }
                  puVar44 = *(uint **)(lVar39 + 0x318);
                  for (puVar41 = *(uint **)(lVar39 + 0x310); puVar41 != puVar44;
                      puVar41 = puVar41 + 1) {
                    uVar43 = *puVar41;
                    uVar35 = (ulong)uVar43;
                    lVar39 = *plVar24;
                    func_0x00010a8fdae4(lVar39,uVar35);
                    if (lVar39 != 0) {
                      if (0x1f < uVar43) goto LAB_10a90da14;
                      FUN_10a6bfa20(lVar29,*(long *)(param_3 + 0x78) + uVar35 * 0x20,
                                    *plVar24 + uVar35 * 0x40 + 0xc00);
                    }
                  }
                  func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2ddf8);
                  FUN_10a0da430(lVar29,&plStack_170,&fStack_260);
                  if ((long)uStack_160 < 0) {
                    __ZdlPv(plStack_170);
                  }
                  func_0x000107c2b074(&plStack_170,&PTR_DAT_110c2dde0);
                  if (*(long *)(lVar28 + 0x14d8) == *(long *)(lVar28 + 0x14d0)) goto LAB_10a90da14;
                  FUN_10a8fe820(lVar29,&plStack_170,*(long *)(lVar28 + 0x14d0),1);
                  if ((long)uStack_160 < 0) {
                    __ZdlPv(plStack_170);
                  }
                }
              }
              lVar29 = *(long *)(lVar28 + 0x14a0);
              lVar28 = *(long *)(lVar28 + 0x14a8);
              if (lVar29 != lVar28) {
                do {
                  puVar25 = *(undefined8 **)(lVar29 + 8);
                  if (puVar25 != (undefined8 *)0x0) {
                    FUN_10ab46af4();
                    plStack_170 = (long *)*puVar25;
                    plVar32 = (long *)puVar25[1];
                    uStack_168._0_4_ = SUB84(plVar32,0);
                    uStack_168._4_4_ = (float)((ulong)plVar32 >> 0x20);
                    if (plVar32 != (long *)0x0) {
                      plVar14 = plVar32 + 1;
                      do {
                        cVar8 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                        if (bVar10) {
                          *plVar14 = *plVar14 + 1;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                    }
                    if (plStack_170 != (long *)0x0) {
                      FUN_10a8fec40(*plVar24,plStack_170,&fStack_260,&uStack_2a0);
                    }
                    if (plVar32 != (long *)0x0) {
                      plVar14 = plVar32 + 1;
                      do {
                        lVar39 = *plVar14;
                        cVar8 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                        if (bVar10) {
                          *plVar14 = lVar39 + -1;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                      if (lVar39 == 0) {
                        (**(code **)(*plVar32 + 0x10))(plVar32);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
                      }
                    }
                  }
                  lVar29 = lVar29 + 0x28;
                } while (lVar29 != lVar28);
                plVar32 = (long *)CONCAT44(uStack_1e4,uStack_1e8);
              }
              if (plVar32 != (long *)0x0) {
                plVar14 = plVar32 + 1;
                do {
                  lVar28 = *plVar14;
                  cVar8 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar10) {
                    *plVar14 = lVar28 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (lVar28 == 0) {
                  (**(code **)(*plVar32 + 0x10))(plVar32);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
                }
              }
              plVar32 = plStack_108;
              if (plStack_108 != (long *)0x0) {
                plVar14 = plStack_108 + 1;
                do {
                  lVar28 = *plVar14;
                  cVar8 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar10) {
                    *plVar14 = lVar28 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (lVar28 == 0) {
                  (**(code **)(*plStack_108 + 0x10))(plStack_108);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
                }
              }
            }
          }
LAB_10a90d82c:
          plVar24 = plVar24 + 2;
        } while (plVar24 != plVar3);
        lVar21 = *plVar36;
      }
      lVar28 = lVar21;
      if (0 < *(int *)(lVar21 + 0x120)) {
        lVar29 = *(long *)(lVar21 + 0xe0);
        lVar39 = *(long *)(lVar21 + 0xe8);
        if (lVar39 != lVar29) {
          do {
            lVar39 = lVar39 + -0x30;
            FUN_10a8ff960();
          } while (lVar39 != lVar29);
          lVar28 = *plVar36;
        }
        *(long *)(lVar21 + 0xe8) = lVar29;
      }
      plVar24 = *(long **)(lVar28 + 200);
      plVar3 = *(long **)(lVar28 + 0xd0);
      if (plVar24 != plVar3) {
        do {
          lVar21 = *plVar24;
          puVar41 = *(uint **)(lVar21 + 0x310);
          puVar44 = *(uint **)(lVar21 + 0x318);
          if (puVar41 != puVar44) {
            do {
              if (0x1f < *puVar41) goto LAB_10a90da14;
              plVar32 = (long *)(lVar21 + 0x78 + (ulong)*puVar41 * 0x10);
              plVar14 = (long *)plVar32[1];
              uVar7 = uRam0000000000000180;
              if (plVar14 != (long *)0x0) {
                __ZNSt3__119__shared_weak_count4lockEv();
                uVar7 = uRam0000000000000180;
                if (plVar14 != (long *)0x0) {
                  uVar7 = *(ushort *)(*plVar32 + 0x180);
                  plVar32 = plVar14 + 1;
                  do {
                    lVar28 = *plVar32;
                    cVar8 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(plVar32,0x10);
                    if (bVar10) {
                      *plVar32 = lVar28 + -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if (lVar28 == 0) {
                    (**(code **)(*plVar14 + 0x10))(plVar14);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
                  }
                }
              }
              if ((uVar7 & 0x17) == 0) {
                lVar21 = *plVar24;
                *(int *)(lVar21 + 0x1400) = *(int *)(lVar21 + 0x1400) + 1;
                goto LAB_10a90d940;
              }
              puVar41 = puVar41 + 1;
            } while (puVar41 != puVar44);
            lVar21 = *plVar24;
          }
LAB_10a90d940:
          if (*(long *)(lVar21 + 0x1550) != 0) {
            lVar29 = *(long *)(lVar21 + 0x68);
            for (lVar28 = *(long *)(lVar21 + 0x60); lVar28 != lVar29; lVar28 = lVar28 + 0x90) {
              FUN_10a8fde00(lVar28,*(undefined8 *)(lVar21 + 0x1550));
            }
          }
          plVar24 = plVar24 + 2;
        } while (plVar24 != plVar3);
        lVar28 = *plVar36;
      }
      *(int *)(lVar28 + 0x120) = *(int *)(lVar28 + 0x120) + 1;
      plVar36 = plVar36 + 1;
    } while (plVar36 != plVar2);
  }
  *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + 1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
LAB_10a90da08:
  FUN_10a00946c(&UNK_10f6399e9);
LAB_10a90da14:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10a90da18);
  (*pcVar11)();
LAB_10a90b0fc:
  if (lVar29 == lVar39) goto LAB_10a90ad20;
  plStack_110 = plVar49;
  plStack_108 = plVar32;
  if (*(char *)(lVar29 + 0x78) == '\x01') {
    plStack_108 = (long *)0x0;
    plStack_110 = *(long **)(lVar29 + 0x70);
  }
  if (plStack_110 != (long *)0x0 || ((ulong)plStack_108 & 0xffff) != 0) {
    plVar26 = (long *)CONCAT44(uStack_168._4_4_,(float)uStack_168);
    plVar14 = plStack_170;
    if (plStack_170 == plVar26) {
LAB_10a90b168:
      if (plVar14 != plVar26) goto LAB_10a90b17c;
    }
    else {
      do {
        if ((plStack_110 == (long *)*plVar14) && (plStack_108 == (long *)plVar14[1]))
        goto LAB_10a90b168;
        plVar14 = plVar14 + 2;
      } while (plVar14 != plVar26);
    }
    FUN_10a5e5fb0(&plStack_170,&plStack_110);
  }
LAB_10a90b17c:
  lVar29 = lVar29 + 0x90;
  goto LAB_10a90b0fc;
}



/* Entry: 10a90de50; end: 10a90deb7;  */

void FUN_10a90de50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10a0d9bd4(*(long *)(param_1 + 0x10),param_2,param_3);
  }
  plVar1 = *(long **)(param_1 + 0x40);
  for (plVar2 = *(long **)(param_1 + 0x38); plVar2 != plVar1; plVar2 = plVar2 + 2) {
    if (*plVar2 != 0) {
      FUN_10a0d9bd4(*plVar2,param_2,param_3);
    }
  }
  return;
}



/* Entry: 10a90deb8; end: 10a90df17;  */

undefined8 * FUN_10a90deb8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a90df18; end: 10a90df1b;  */

undefined8 * FUN_10a90df18(undefined8 *param_1)

{
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



/* Entry: 10a90df1c; end: 10a90df2f;  */

void FUN_10a90df1c(void)

{
  func_0x00010aa71c88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a90df30; end: 10a90df37;  */

undefined8 * FUN_10a90df30(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a90df38; end: 10a90df4f;  */

void FUN_10a90df38(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a90df50; end: 10a90df57;  */

undefined8 * FUN_10a90df50(undefined8 *param_1)

{
  param_1[-7] = &PTR_FUN_110c3ec18;
  param_1[-5] = &PTR_DAT_110c3ecb8;
  *param_1 = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x13);
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  if (param_1[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a90df58; end: 10a90df6f;  */

void FUN_10a90df58(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a90df70; end: 10a90df73;  */

void FUN_10a90df70(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c2cc50;
  param_1[2] = &PTR_FUN_110c2ccf0;
  param_1[7] = &PTR_FUN_110c2cd48;
  func_0x00010a084504(param_1 + 0x22);
  FUN_10a917314(param_1 + 0x1f,param_1[0x20]);
  puStack_28 = param_1 + 0x1c;
  FUN_10a0cffec(&puStack_28);
  func_0x00010aa71c88(param_1);
  return;
}



/* Entry: 10a90df74; end: 10a90df87;  */

void FUN_10a90df74(void)

{
  FUN_10a910518();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a90df88; end: 10a90df8f;  */

void FUN_10a90df88(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  param_1[-2] = &PTR_FUN_110c2cc50;
  *param_1 = &PTR_FUN_110c2ccf0;
  param_1[5] = &PTR_FUN_110c2cd48;
  func_0x00010a084504(param_1 + 0x20);
  FUN_10a917314(param_1 + 0x1d,param_1[0x1e]);
  puStack_28 = param_1 + 0x1a;
  FUN_10a0cffec(&puStack_28);
  func_0x00010aa71c88(param_1 + -2);
  return;
}



/* Entry: 10a90df90; end: 10a90dfa7;  */

void FUN_10a90df90(long param_1)

{
  FUN_10a910518(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a90dfa8; end: 10a90dfaf;  */

void FUN_10a90dfa8(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  param_1[-7] = &PTR_FUN_110c2cc50;
  param_1[-5] = &PTR_FUN_110c2ccf0;
  *param_1 = &PTR_FUN_110c2cd48;
  func_0x00010a084504(param_1 + 0x1b);
  FUN_10a917314(param_1 + 0x18,param_1[0x19]);
  puStack_28 = param_1 + 0x15;
  FUN_10a0cffec(&puStack_28);
  func_0x00010aa71c88(param_1 + -7);
  return;
}



/* Entry: 10a90dfb0; end: 10a90dfc7;  */

void FUN_10a90dfb0(long param_1)

{
  FUN_10a910518(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a90dfc8; end: 10a90dfcf;  */

long FUN_10a90dfc8(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a90dfd0; end: 10a90e05b;  */

undefined8 * FUN_10a90dfd0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10a90e05c(param_1);
    puVar2 = (undefined8 *)param_1[1];
    puVar1 = puVar2 + param_2 * 6;
    param_2 = param_2 * 0x30;
    do {
      puVar2[1] = 0;
      *puVar2 = 0x3f800000;
      puVar2[3] = 0;
      puVar2[2] = 0x3f800000;
      puVar2[5] = 0;
      puVar2[4] = 0x3f800000;
      puVar2 = puVar2 + 6;
      param_2 = param_2 + -0x30;
    } while (param_2 != 0);
    param_1[1] = puVar1;
  }
  return param_1;
}



/* Entry: 10a90e05c; end: 10a90e0a3;  */

ulong FUN_10a90e05c(undefined8 param_1,long *param_2,ulong param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint auStack_5c [3];
  
  uVar6 = (undefined4)((ulong)param_1 >> 0x20);
  uVar5 = (undefined4)param_1;
  if (param_3 < 0x555555555555556) {
    plVar4 = param_2;
    FUN_10a90e0b8();
    *param_2 = (long)plVar4;
    param_2[1] = (long)plVar4;
    param_2[2] = (long)(plVar4 + param_3 * 6);
    return CONCAT44(uVar6,uVar5);
  }
  FUN_10a90e0a4();
  iVar3 = 0xf62a4d8;
  FUN_109ffde64();
  if (param_3 < 0x555555555555556) {
    __Znwm(param_3 * 0x30);
    return CONCAT44(uVar6,uVar5);
  }
  func_0x000109ffded8();
  auStack_5c[2] = 0;
  puVar1 = auStack_5c + 2;
  if (iVar3 == 1) {
    puVar1 = auStack_5c + 1;
  }
  puVar2 = auStack_5c;
  if (iVar3 != 2) {
    puVar2 = puVar1;
  }
  *puVar2 = 0x3f800000;
  return (ulong)auStack_5c[2];
}



/* Entry: 10a90e0a4; end: 10a90e0b7;  */

ulong FUN_10a90e0a4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint auStack_3c [3];
  
  uVar5 = (undefined4)((ulong)param_1 >> 0x20);
  uVar4 = (undefined4)param_1;
  iVar3 = 0xf62a4d8;
  FUN_109ffde64();
  if (param_3 < 0x555555555555556) {
    __Znwm(param_3 * 0x30);
    return CONCAT44(uVar5,uVar4);
  }
  func_0x000109ffded8();
  auStack_3c[2] = 0;
  puVar1 = auStack_3c + 2;
  if (iVar3 == 1) {
    puVar1 = auStack_3c + 1;
  }
  puVar2 = auStack_3c;
  if (iVar3 != 2) {
    puVar2 = puVar1;
  }
  *puVar2 = 0x3f800000;
  return (ulong)auStack_3c[2];
}



/* Entry: 10a90e0b8; end: 10a90e0fb;  */

ulong FUN_10a90e0b8(undefined8 param_1,int param_2,ulong param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint auStack_2c [3];
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  uVar3 = (undefined4)param_1;
  if (param_3 < 0x555555555555556) {
    __Znwm(param_3 * 0x30);
    return CONCAT44(uVar4,uVar3);
  }
  func_0x000109ffded8();
  auStack_2c[2] = 0;
  puVar1 = auStack_2c + 2;
  if (param_2 == 1) {
    puVar1 = auStack_2c + 1;
  }
  puVar2 = auStack_2c;
  if (param_2 != 2) {
    puVar2 = puVar1;
  }
  *puVar2 = 0x3f800000;
  return (ulong)auStack_2c[2];
}



/* Entry: 10a90e0fc; end: 10a90e13b;  */

undefined4 FUN_10a90e0fc(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 auStack_c [3];
  
  auStack_c[2] = 0;
  puVar1 = auStack_c + 2;
  if (param_1 == 1) {
    puVar1 = auStack_c + 1;
  }
  puVar2 = auStack_c;
  if (param_1 != 2) {
    puVar2 = puVar1;
  }
  *puVar2 = 0x3f800000;
  return auStack_c[2];
}



/* Entry: 10a90e13c; end: 10a90e1b7;  */

void FUN_10a90e13c(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    FUN_10a051ac8(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 0xc)) {
      uVar2 = *param_2;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
      *puVar1 = uVar2;
      puVar1 = (undefined8 *)((long)puVar1 + 0xc);
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a90e1b8; end: 10a90e267;  */

long FUN_10a90e1b8(long param_1)

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



/* Entry: 10a90e268; end: 10a90e2ef;  */

void FUN_10a90e268(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  FUN_10a90e750(auStack_58,param_1 + 0x18);
  for (plVar2 = (long *)lStack_48; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    lVar1 = param_1 + 0x18;
    FUN_10a90ee44(lVar1,plVar2 + 2);
    if (lVar1 != 0) {
      func_0x00010a90ef1c(plVar2 + 4,param_2);
    }
  }
  func_0x00010a90eda4(auStack_58);
  return;
}



/* Entry: 10a90e2f0; end: 10a90e2ff;  */

void FUN_10a90e2f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2dae8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a90e300; end: 10a90e31f;  */

void FUN_10a90e300(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2dae8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a90e320; end: 10a90e32f;  */

void FUN_10a90e320(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a90e328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x20))();
  return;
}



/* Entry: 10a90e330; end: 10a90e3c3;  */

undefined1  [16] FUN_10a90e330(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  
  puVar3 = param_1 + 1;
  puVar1 = param_1;
  FUN_10a90e3c4(param_1,param_2,*puVar3,puVar3);
  if (puVar3 != puVar1) {
    uVar2 = *param_2;
    FUN_10a003d5c(uVar2,param_2[1],puVar1[4],puVar1[5]);
    if (((uint)uVar2 >> 7 & 1) == 0) {
      uVar2 = 0;
      *(undefined4 *)(puVar1 + 6) = *param_3;
      param_1 = puVar1;
      goto LAB_10a90e3ac;
    }
  }
  FUN_10a90e420(param_1,puVar1,param_2,param_2,param_3);
  uVar2 = 1;
LAB_10a90e3ac:
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a90e3c4; end: 10a90e41f;  */

long FUN_10a90e3c4(undefined8 param_1,undefined8 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + (uVar1 >> 4 & 8))) {
    uVar1 = *(ulong *)(param_3 + 0x20);
    FUN_10a003d5c(uVar1,*(undefined8 *)(param_3 + 0x28),*param_2,param_2[1]);
    if (-1 < (char)uVar1) {
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 10a90e420; end: 10a90e4b7;  */

undefined1  [16]
FUN_10a90e420(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_10a90e4b8(param_1,param_2,&uStack_48,auStack_50,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x38;
    __Znwm();
    uVar4 = *param_4;
    *(undefined8 *)(lVar3 + 0x28) = param_4[1];
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    *(undefined4 *)(lVar3 + 0x30) = *param_5;
    FUN_10a90e638(param_1,uStack_48,plVar2,lVar3);
  }
  auVar5[8] = bVar1;
  auVar5._0_8_ = lVar3;
  auVar5._9_7_ = 0;
  return auVar5;
}



/* Entry: 10a90e4b8; end: 10a90e637;  */

long * FUN_10a90e4b8(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  if (param_1 + 1 != param_2) {
    uVar2 = *param_5;
    FUN_10a003d5c(uVar2,param_5[1],param_2[4],param_2[5]);
    if (((uint)uVar2 >> 7 & 1) == 0) {
      lVar3 = param_2[4];
      FUN_10a003d5c(lVar3,param_2[5],*param_5,param_5[1]);
      if (((uint)lVar3 >> 7 & 1) == 0) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar6 = param_2 + 1;
      plVar4 = (long *)*plVar6;
      plVar7 = param_2;
      plVar5 = plVar4;
      if (plVar4 == (long *)0x0) {
        do {
          plVar8 = (long *)plVar7[2];
          bVar1 = (long *)*plVar8 != plVar7;
          plVar7 = plVar8;
        } while (bVar1);
      }
      else {
        do {
          plVar8 = plVar5;
          plVar5 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
      if (plVar8 == param_1 + 1) {
LAB_10a90e608:
        if (plVar4 != (long *)0x0) {
          *param_3 = (long)plVar8;
          return plVar8;
        }
        *param_3 = (long)param_2;
        return plVar6;
      }
      uVar2 = *param_5;
      FUN_10a003d5c(uVar2,param_5[1],plVar8[4],plVar8[5]);
      if (((uint)uVar2 >> 7 & 1) != 0) {
        plVar4 = (long *)*plVar6;
        goto LAB_10a90e608;
      }
      goto FUN_10a90e68c;
    }
  }
  plVar7 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar5 = param_2;
    plVar4 = (long *)*param_2;
    if ((long *)*param_2 == (long *)0x0) {
      do {
        plVar7 = (long *)plVar5[2];
        bVar1 = (long *)*plVar7 == plVar5;
        plVar5 = plVar7;
      } while (bVar1);
    }
    else {
      do {
        plVar7 = plVar4;
        plVar4 = (long *)plVar7[1];
      } while ((long *)plVar7[1] != (long *)0x0);
    }
    lVar3 = plVar7[4];
    FUN_10a003d5c(lVar3,plVar7[5],*param_5,param_5[1]);
    if (((uint)lVar3 >> 7 & 1) == 0) {
FUN_10a90e68c:
      plVar5 = (long *)param_1[1];
      plVar7 = param_1 + 1;
      while (plVar4 = plVar7, plVar5 != (long *)0x0) {
        while( true ) {
          plVar4 = plVar5;
          uVar2 = *param_5;
          FUN_10a003d5c(uVar2,param_5[1],plVar4[4],plVar4[5]);
          if (((uint)uVar2 >> 7 & 1) != 0) break;
          lVar3 = plVar4[4];
          FUN_10a003d5c(lVar3,plVar4[5],*param_5,param_5[1]);
          if (((uint)lVar3 >> 7 & 1) == 0) goto LAB_10a90e6f8;
          plVar7 = plVar4 + 1;
          plVar5 = (long *)*plVar7;
          if ((long *)*plVar7 == (long *)0x0) goto LAB_10a90e6f8;
        }
        plVar7 = plVar4;
        plVar5 = (long *)*plVar4;
      }
LAB_10a90e6f8:
      *param_3 = (long)plVar4;
      return plVar7;
    }
  }
  if (*param_2 == 0) {
    *param_3 = (long)param_2;
  }
  else {
    *param_3 = (long)plVar7;
    param_2 = plVar7 + 1;
  }
  return param_2;
}



/* Entry: 10a90e638; end: 10a90e68b;  */

void FUN_10a90e638(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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



/* Entry: 10a90e68c; end: 10a90e70f;  */

long * FUN_10a90e68c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar4 = (long *)(param_1 + 8);
  while (plVar5 = plVar4, plVar3 != (long *)0x0) {
    while( true ) {
      plVar5 = plVar3;
      uVar1 = *param_3;
      FUN_10a003d5c(uVar1,param_3[1],plVar5[4],plVar5[5]);
      if (((uint)uVar1 >> 7 & 1) != 0) break;
      lVar2 = plVar5[4];
      FUN_10a003d5c(lVar2,plVar5[5],*param_3,param_3[1]);
      if (((uint)lVar2 >> 7 & 1) == 0) goto LAB_10a90e6f8;
      plVar4 = plVar5 + 1;
      plVar3 = (long *)*plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10a90e6f8;
    }
    plVar4 = plVar5;
    plVar3 = (long *)*plVar5;
  }
LAB_10a90e6f8:
  *param_2 = plVar5;
  return plVar4;
}



/* Entry: 10a90e710; end: 10a90e74f;  */

void FUN_10a90e710(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10a90e710(param_1,*param_2);
    FUN_10a90e710(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a90e750; end: 10a90e7c3;  */

undefined8 * FUN_10a90e750(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10a90e7c4(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_10a90e9d0(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 10a90e7c4; end: 10a90e893;  */

undefined1  [16] FUN_10a90e7c4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong unaff_x22;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ulong *apuStack_68 [5];
  ulong *puStack_40;
  ulong *puStack_38;
  
  puVar2 = param_1;
  puVar6 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (ulong *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    puVar2 = param_2;
  }
  puVar14 = (ulong *)param_1[1];
  if (param_2 >= puVar14 && param_2 != puVar14) {
LAB_10a90e80c:
    puVar2 = param_2;
    if (param_2 == (ulong *)0x0) {
      uVar4 = *param_1;
      *param_1 = 0;
      if (uVar4 != 0) {
        __ZdlPv();
        puVar2 = param_2;
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        puVar2 = param_1;
        puVar6 = param_2;
        func_0x000109ffded8();
        uVar4 = *puVar6;
        uVar3 = ((ulong)(uint)((int)uVar4 << 3) + 8 ^ uVar4 >> 0x20) * -0x622015f714c7d297;
        uVar3 = (uVar4 >> 0x20 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
        uVar3 = (uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
        uVar13 = puVar2[1];
        if (uVar13 != 0) {
          uVar8 = uVar13 - 1;
          if ((uVar13 & uVar8) == 0) {
            unaff_x22 = uVar3 & uVar8;
          }
          else {
            unaff_x22 = uVar3;
            if (uVar13 <= uVar3) {
              uVar10 = 0;
              if (uVar13 != 0) {
                uVar10 = uVar3 / uVar13;
              }
              unaff_x22 = uVar3 - uVar10 * uVar13;
            }
          }
          puVar9 = *(undefined8 **)(*puVar2 + unaff_x22 * 8);
          if (puVar9 != (undefined8 *)0x0) {
            for (puVar6 = (ulong *)*puVar9; puVar6 != (ulong *)0x0; puVar6 = (ulong *)*puVar6) {
              uVar10 = puVar6[1];
              if (uVar10 == uVar3) {
                if (puVar6[2] == uVar4) {
                  uVar5 = 0;
                  goto LAB_10a90ebdc;
                }
              }
              else {
                if ((uVar13 & uVar8) == 0) {
                  uVar10 = uVar10 & uVar8;
                }
                else if (uVar13 <= uVar10) {
                  uVar1 = 0;
                  if (uVar13 != 0) {
                    uVar1 = uVar10 / uVar13;
                  }
                  uVar10 = uVar10 - uVar1 * uVar13;
                }
                if (uVar10 != unaff_x22) break;
              }
            }
          }
        }
        puStack_40 = param_2;
        puStack_38 = param_1;
        FUN_10a90ec1c(apuStack_68,puVar2,uVar3);
        if ((uVar13 == 0) || (*(float *)(puVar2 + 4) * (float)uVar13 < (float)(puVar2[3] + 1))) {
          uVar4 = 1;
          if (2 < uVar13) {
            uVar4 = (ulong)((uVar13 & uVar13 - 1) != 0);
          }
          uVar4 = uVar4 | uVar13 << 1;
          uVar13 = (ulong)((float)(puVar2[3] + 1) / *(float *)(puVar2 + 4));
          if (uVar4 <= uVar13) {
            uVar4 = uVar13;
          }
          FUN_10a90e7c4(puVar2,uVar4);
          uVar13 = puVar2[1];
          if ((uVar13 & uVar13 - 1) == 0) {
            unaff_x22 = uVar13 - 1 & uVar3;
          }
          else {
            unaff_x22 = uVar3;
            if (uVar13 <= uVar3) {
              uVar4 = 0;
              if (uVar13 != 0) {
                uVar4 = uVar3 / uVar13;
              }
              unaff_x22 = uVar3 - uVar4 * uVar13;
            }
          }
        }
        uVar4 = *puVar2;
        puVar6 = *(ulong **)(uVar4 + unaff_x22 * 8);
        if (puVar6 == (ulong *)0x0) {
          puVar6 = puVar2 + 2;
          *apuStack_68[0] = *puVar6;
          *puVar6 = (ulong)apuStack_68[0];
          *(ulong **)(uVar4 + unaff_x22 * 8) = puVar6;
          if (*apuStack_68[0] != 0) {
            uVar4 = *(ulong *)(*apuStack_68[0] + 8);
            if ((uVar13 & uVar13 - 1) == 0) {
              uVar4 = uVar4 & uVar13 - 1;
            }
            else if (uVar13 <= uVar4) {
              uVar3 = 0;
              if (uVar13 != 0) {
                uVar3 = uVar4 / uVar13;
              }
              uVar4 = uVar4 - uVar3 * uVar13;
            }
            *(ulong **)(*puVar2 + uVar4 * 8) = apuStack_68[0];
          }
        }
        else {
          *apuStack_68[0] = *puVar6;
          *puVar6 = (ulong)apuStack_68[0];
        }
        puVar2[3] = puVar2[3] + 1;
        uVar5 = 1;
        puVar6 = apuStack_68[0];
LAB_10a90ebdc:
        auVar17._8_8_ = uVar5;
        auVar17._0_8_ = puVar6;
        return auVar17;
      }
      uVar3 = (long)param_2 << 3;
      __Znwm();
      uVar4 = *param_1;
      *param_1 = uVar3;
      if (uVar4 != 0) {
        __ZdlPv();
      }
      puVar6 = (ulong *)0x0;
      param_1[1] = (ulong)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)puVar6 * 8) = 0;
        puVar6 = (ulong *)((long)puVar6 + 1);
      } while (param_2 != puVar6);
      plVar7 = (long *)param_1[2];
      if (plVar7 != (long *)0x0) {
        puVar6 = (ulong *)plVar7[1];
        uVar3 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar3) == 0) {
          puVar6 = (ulong *)((ulong)puVar6 & uVar3);
        }
        else if (param_2 <= puVar6) {
          uVar13 = 0;
          if (param_2 != (ulong *)0x0) {
            uVar13 = (ulong)puVar6 / (ulong)param_2;
          }
          puVar6 = (ulong *)((long)puVar6 - uVar13 * (long)param_2);
        }
        *(ulong **)(*param_1 + (long)puVar6 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar7;
        while (plVar11 != (long *)0x0) {
          puVar14 = (ulong *)plVar11[1];
          if (((ulong)param_2 & uVar3) == 0) {
            puVar14 = (ulong *)((ulong)puVar14 & uVar3);
          }
          else if (param_2 <= puVar14) {
            uVar13 = 0;
            if (param_2 != (ulong *)0x0) {
              uVar13 = (ulong)puVar14 / (ulong)param_2;
            }
            puVar14 = (ulong *)((long)puVar14 - uVar13 * (long)param_2);
          }
          plVar12 = plVar11;
          if (puVar14 != puVar6) {
            uVar13 = *param_1;
            if (*(long *)(uVar13 + (long)puVar14 * 8) == 0) {
              *(long **)(uVar13 + (long)puVar14 * 8) = plVar7;
              puVar6 = puVar14;
            }
            else {
              *plVar7 = *plVar11;
              *plVar11 = **(undefined8 **)(uVar13 + (long)puVar14 * 8);
              **(long **)(uVar13 + (long)puVar14 * 8) = (long)plVar11;
              plVar12 = plVar7;
            }
          }
          plVar7 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    auVar16._8_8_ = puVar2;
    auVar16._0_8_ = uVar4;
    return auVar16;
  }
  if (param_2 < puVar14) {
    puVar2 = (ulong *)(long)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((puVar14 < (ulong *)0x3) || (((ulong)puVar14 & (long)puVar14 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((ulong *)0x1 < puVar2) {
      puVar2 = (ulong *)(1L << (-LZCOUNT((long)puVar2 + -1) & 0x3fU));
    }
    if (param_2 <= puVar2) {
      param_2 = puVar2;
    }
    if (param_2 < puVar14) goto LAB_10a90e80c;
  }
  auVar15._8_8_ = puVar6;
  auVar15._0_8_ = puVar2;
  return auVar15;
}



/* Entry: 10a90e894; end: 10a90e9cf;  */

undefined1  [16] FUN_10a90e894(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong unaff_x22;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long *aplStack_68 [3];
  
  puVar4 = param_2;
  if (param_2 == (ulong *)0x0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
      puVar4 = param_2;
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      uVar7 = *param_2;
      uVar10 = ((ulong)(uint)((int)uVar7 << 3) + 8 ^ uVar7 >> 0x20) * -0x622015f714c7d297;
      uVar10 = (uVar7 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
      uVar10 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
      uVar16 = param_1[1];
      if (uVar16 != 0) {
        uVar9 = uVar16 - 1;
        if ((uVar16 & uVar9) == 0) {
          unaff_x22 = uVar10 & uVar9;
        }
        else {
          unaff_x22 = uVar10;
          if (uVar16 <= uVar10) {
            uVar12 = 0;
            if (uVar16 != 0) {
              uVar12 = uVar10 / uVar16;
            }
            unaff_x22 = uVar10 - uVar12 * uVar16;
          }
        }
        puVar11 = *(undefined8 **)(*param_1 + unaff_x22 * 8);
        if (puVar11 != (undefined8 *)0x0) {
          for (plVar8 = (long *)*puVar11; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
            uVar12 = plVar8[1];
            if (uVar12 == uVar10) {
              if (plVar8[2] == uVar7) {
                uVar5 = 0;
                goto LAB_10a90ebdc;
              }
            }
            else {
              if ((uVar16 & uVar9) == 0) {
                uVar12 = uVar12 & uVar9;
              }
              else if (uVar16 <= uVar12) {
                uVar1 = 0;
                if (uVar16 != 0) {
                  uVar1 = uVar12 / uVar16;
                }
                uVar12 = uVar12 - uVar1 * uVar16;
              }
              if (uVar12 != unaff_x22) break;
            }
          }
        }
      }
      FUN_10a90ec1c(aplStack_68,param_1,uVar10);
      if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(param_1[3] + 1))) {
        uVar7 = 1;
        if (2 < uVar16) {
          uVar7 = (ulong)((uVar16 & uVar16 - 1) != 0);
        }
        uVar7 = uVar7 | uVar16 << 1;
        uVar16 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar7 <= uVar16) {
          uVar7 = uVar16;
        }
        FUN_10a90e7c4(param_1,uVar7);
        uVar16 = param_1[1];
        if ((uVar16 & uVar16 - 1) == 0) {
          unaff_x22 = uVar16 - 1 & uVar10;
        }
        else {
          unaff_x22 = uVar10;
          if (uVar16 <= uVar10) {
            uVar7 = 0;
            if (uVar16 != 0) {
              uVar7 = uVar10 / uVar16;
            }
            unaff_x22 = uVar10 - uVar7 * uVar16;
          }
        }
      }
      lVar3 = *param_1;
      plVar8 = *(long **)(lVar3 + unaff_x22 * 8);
      if (plVar8 == (long *)0x0) {
        plVar8 = param_1 + 2;
        *aplStack_68[0] = *plVar8;
        *plVar8 = (long)aplStack_68[0];
        *(long **)(lVar3 + unaff_x22 * 8) = plVar8;
        if (*aplStack_68[0] != 0) {
          uVar7 = *(ulong *)(*aplStack_68[0] + 8);
          if ((uVar16 & uVar16 - 1) == 0) {
            uVar7 = uVar7 & uVar16 - 1;
          }
          else if (uVar16 <= uVar7) {
            uVar10 = 0;
            if (uVar16 != 0) {
              uVar10 = uVar7 / uVar16;
            }
            uVar7 = uVar7 - uVar10 * uVar16;
          }
          *(long **)(*param_1 + uVar7 * 8) = aplStack_68[0];
        }
      }
      else {
        *aplStack_68[0] = *plVar8;
        *plVar8 = (long)aplStack_68[0];
      }
      param_1[3] = param_1[3] + 1;
      uVar5 = 1;
      plVar8 = aplStack_68[0];
LAB_10a90ebdc:
      auVar18._8_8_ = uVar5;
      auVar18._0_8_ = plVar8;
      return auVar18;
    }
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    puVar6 = (ulong *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)puVar6 * 8) = 0;
      puVar6 = (ulong *)((long)puVar6 + 1);
    } while (param_2 != puVar6);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      puVar6 = (ulong *)plVar8[1];
      uVar7 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar7) == 0) {
        puVar6 = (ulong *)((ulong)puVar6 & uVar7);
      }
      else if (param_2 <= puVar6) {
        uVar10 = 0;
        if (param_2 != (ulong *)0x0) {
          uVar10 = (ulong)puVar6 / (ulong)param_2;
        }
        puVar6 = (ulong *)((long)puVar6 - uVar10 * (long)param_2);
      }
      *(long **)(*param_1 + (long)puVar6 * 8) = param_1 + 2;
      plVar13 = (long *)*plVar8;
      while (plVar13 != (long *)0x0) {
        puVar15 = (ulong *)plVar13[1];
        if (((ulong)param_2 & uVar7) == 0) {
          puVar15 = (ulong *)((ulong)puVar15 & uVar7);
        }
        else if (param_2 <= puVar15) {
          uVar10 = 0;
          if (param_2 != (ulong *)0x0) {
            uVar10 = (ulong)puVar15 / (ulong)param_2;
          }
          puVar15 = (ulong *)((long)puVar15 - uVar10 * (long)param_2);
        }
        plVar14 = plVar13;
        if (puVar15 != puVar6) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)puVar15 * 8) == 0) {
            *(long **)(lVar2 + (long)puVar15 * 8) = plVar8;
            puVar6 = puVar15;
          }
          else {
            *plVar8 = *plVar13;
            *plVar13 = **(undefined8 **)(lVar2 + (long)puVar15 * 8);
            **(long **)(lVar2 + (long)puVar15 * 8) = (long)plVar13;
            plVar14 = plVar8;
          }
        }
        plVar8 = plVar14;
        plVar13 = (long *)*plVar14;
      }
    }
  }
  auVar17._8_8_ = puVar4;
  auVar17._0_8_ = lVar3;
  return auVar17;
}



/* Entry: 10a90e9d0; end: 10a90ec1b;  */

undefined1  [16] FUN_10a90e9d0(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x22;
  undefined1 auVar11 [16];
  long *aplStack_48 [3];
  
  uVar4 = *param_2;
  uVar7 = ((ulong)(uint)((int)uVar4 << 3) + 8 ^ uVar4 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (uVar4 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar6 = uVar10 - 1;
    if ((uVar10 & uVar6) == 0) {
      unaff_x22 = uVar7 & uVar6;
    }
    else {
      unaff_x22 = uVar7;
      if (uVar10 <= uVar7) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = uVar7 / uVar10;
        }
        unaff_x22 = uVar7 - uVar9 * uVar10;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x22 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar2 = (long *)*puVar8; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        uVar9 = plVar2[1];
        if (uVar9 == uVar7) {
          if (plVar2[2] == uVar4) {
            uVar3 = 0;
            goto LAB_10a90ebdc;
          }
        }
        else {
          if ((uVar10 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar10 <= uVar9) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar9 / uVar10;
            }
            uVar9 = uVar9 - uVar1 * uVar10;
          }
          if (uVar9 != unaff_x22) break;
        }
      }
    }
  }
  FUN_10a90ec1c(aplStack_48,param_1,uVar7);
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar10) {
      uVar4 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar4 = uVar4 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar10) {
      uVar4 = uVar10;
    }
    FUN_10a90e7c4(param_1,uVar4);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x22 = uVar10 - 1 & uVar7;
    }
    else {
      unaff_x22 = uVar7;
      if (uVar10 <= uVar7) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar7 / uVar10;
        }
        unaff_x22 = uVar7 - uVar4 * uVar10;
      }
    }
  }
  lVar5 = *param_1;
  plVar2 = *(long **)(lVar5 + unaff_x22 * 8);
  if (plVar2 == (long *)0x0) {
    plVar2 = param_1 + 2;
    *aplStack_48[0] = *plVar2;
    *plVar2 = (long)aplStack_48[0];
    *(long **)(lVar5 + unaff_x22 * 8) = plVar2;
    if (*aplStack_48[0] != 0) {
      uVar4 = *(ulong *)(*aplStack_48[0] + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar4 = uVar4 & uVar10 - 1;
      }
      else if (uVar10 <= uVar4) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar4 / uVar10;
        }
        uVar4 = uVar4 - uVar7 * uVar10;
      }
      *(long **)(*param_1 + uVar4 * 8) = aplStack_48[0];
    }
  }
  else {
    *aplStack_48[0] = *plVar2;
    *plVar2 = (long)aplStack_48[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
  plVar2 = aplStack_48[0];
LAB_10a90ebdc:
  auVar11._8_8_ = uVar3;
  auVar11._0_8_ = plVar2;
  return auVar11;
}



/* Entry: 10a90ec1c; end: 10a90ec9f;  */

void FUN_10a90ec1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10a90eca0(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a90eca0; end: 10a90ed37;  */

undefined8 * FUN_10a90eca0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puStack_28;
  
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
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
  puStack_28 = param_1 + 2;
  *(undefined1 *)(param_1 + 10) = 3;
  if (*(char *)(param_2 + 10) == '\0') {
    uVar4 = 0;
  }
  else {
    FUN_10a005398(&puStack_28,param_2 + 2);
    uVar4 = *(undefined1 *)(param_2 + 10);
  }
  *(undefined1 *)(param_1 + 10) = uVar4;
  return param_1;
}



/* Entry: 10a90ed38; end: 10a90eddb;  */

void FUN_10a90ed38(long param_1,long param_2)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a90eda4);
      (*pcVar1)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
    FUN_10a004978(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a90eddc; end: 10a90ee43;  */

void FUN_10a90eddc(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  while( true ) {
    if (param_2 == (long *)0x0) {
      return;
    }
    if (3 < (ulong)*(byte *)(param_2 + 0xc)) break;
    lVar2 = *param_2;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0xc)])(param_2 + 4);
    FUN_10a004978(param_2 + 2);
    __ZdlPv(param_2);
    param_2 = (long *)lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a90ee44);
  (*pcVar1)();
}



/* Entry: 10a90ee44; end: 10a90ef43;  */

long * FUN_10a90ee44(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar2 - 1;
    if ((uVar2 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
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
          if (plVar7[2] == uVar3) {
            return plVar7;
          }
        }
        else {
          if ((uVar2 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar2 <= uVar8) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar8 / uVar2;
            }
            uVar8 = uVar8 - uVar1 * uVar2;
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



/* Entry: 10a90ef44; end: 10a90efe7;  */

void FUN_10a90ef44(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar5 = (code *)*param_1;
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
  (*pcVar5)(&uStack_30,param_1);
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
  return;
}



/* Entry: 10a90efe8; end: 10a90f1d7;  */

void FUN_10a90efe8(code **param_1,code **param_2)

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
  undefined **ppuVar11;
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
        pcVar1 = param_1[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar4) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
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
      pcStack_78 = FUN_10a90f448;
      ppuStack_70 = &PTR_FUN_110c2db28;
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
          ppuVar11 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar11 == (undefined **)0x0) {
          (*(code *)(*pppuVar8)[2])(pppuVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar8;
        }
      }
      pppuVar8 = pppuStack_90;
      if (pppuStack_90 != (undefined ***)0x0) {
        pppuVar2 = pppuStack_90 + 1;
        do {
          ppuVar11 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar11 == (undefined **)0x0) {
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
    FUN_10a90f1d8(pppuVar7,param_2);
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
  FUN_10a90f4c0(ppcVar6 + 2);
  func_0x00010a004dac(&pcStack_98);
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a90f1d8;
  ppcStack_c0 = ppcVar6;
  pppuStack_b8 = pppuVar7;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_d0,pppuVar8 + 1,*pppuVar8);
  func_0x000109884820(&puStack_c8,&puStack_d0,*pppuVar8);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  (**(code **)(**pppuVar8 + 0x30))(&puStack_d0);
  FUN_10a90f2c4(*pppuVar8,&puStack_d0,&puStack_c8,ppcVar10);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a90f1d8; end: 10a90f2c3;  */

void FUN_10a90f1d8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  func_0x000109884c0c(&puStack_30,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_28,&puStack_30,*param_1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_30);
  FUN_10a90f2c4(*param_1,&puStack_30,&puStack_28,param_2);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a90f2c4; end: 10a90f3a3;  */

void FUN_10a90f2c4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  FUN_10a90f3a4(aiStack_70,param_1,param_4);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*param_1 + 0x58))(param_1);
  ppuStack_48 = &piStack_40;
  uStack_60 = param_3;
  plStack_58 = param_1;
  uStack_50 = param_2;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  return;
}



/* Entry: 10a90f3a4; end: 10a90f447;  */

void FUN_10a90f3a4(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuStack_38;
  long lStack_30;
  long *plStack_28;
  
  lVar5 = *param_2;
  plStack_28 = (long *)param_2[1];
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
  lStack_30 = 0;
  if (lVar5 != 0) {
    lStack_30 = lVar5 + 8;
  }
  ppuStack_38 = &PTR_DAT_110c6ae38;
  func_0x000109899de4(param_1,&lStack_30,&ppuStack_38,0,0);
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



/* Entry: 10a90f448; end: 10a90f457;  */

void FUN_10a90f448(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&puStack_30,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_28,&puStack_30,*puVar1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_30);
  FUN_10a90f2c4(*puVar1,&puStack_30,&puStack_28,param_1 + 0x20);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a90f458; end: 10a90f47f;  */

long FUN_10a90f458(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a90f4c0(param_1 + 0x18);
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



/* Entry: 10a90f480; end: 10a90f4bf;  */

void FUN_10a90f480(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c2db28;
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



/* Entry: 10a90f4c0; end: 10a90f54f;  */

long FUN_10a90f4c0(long param_1)

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



/* Entry: 10a90f550; end: 10a90f667;  */

void FUN_10a90f550(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar12 = (undefined8 *)param_1[1];
  if (puVar12 < (undefined8 *)param_1[2]) {
    lVar9 = param_2[1];
    uVar13 = *param_2;
    puVar12[1] = param_2[1];
    *puVar12 = uVar13;
    if (lVar9 != 0) {
      plVar6 = (long *)(lVar9 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = *plVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar12 = puVar12 + 2;
  }
  else {
    lVar9 = (long)puVar12 - *param_1;
    uVar1 = (lVar9 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a4afcc4();
      lVar9 = *param_1;
      if (lVar9 != 0) {
        lVar7 = param_1[1];
        lVar8 = lVar9;
        if (lVar7 != lVar9) {
          do {
            lVar7 = lVar7 + -0x90;
            FUN_10a8fdc18();
          } while (lVar7 != lVar9);
          lVar8 = *param_1;
        }
        param_1[1] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(lVar8);
        return;
      }
      return;
    }
    uVar10 = param_1[2] - *param_1;
    uVar11 = (long)uVar10 >> 3;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar11 = 0xfffffffffffffff;
    }
    plVar6 = param_1;
    plStack_38 = param_1;
    FUN_10a4afcd8();
    puVar3 = (undefined8 *)((long)plVar6 + lVar9);
    lVar9 = param_2[1];
    uVar13 = *param_2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar13;
    if (lVar9 != 0) {
      plVar2 = (long *)(lVar9 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar12 = puVar3 + 2;
    lVar9 = (long)puVar3 - (param_1[1] - *param_1);
    _memcpy(lVar9);
    lStack_58 = *param_1;
    *param_1 = lVar9;
    param_1[1] = (long)puVar12;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar6 + uVar11 * 2);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a4afd0c(&lStack_58);
  }
  param_1[1] = (long)puVar12;
  return;
}



/* Entry: 10a90f668; end: 10a90f6c3;  */

void FUN_10a90f668(long *param_1)

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
        lVar1 = lVar1 + -0x90;
        FUN_10a8fdc18();
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



/* Entry: 10a90f6c4; end: 10a90f6d7;  */

undefined4 FUN_10a90f6c4(void)

{
  ushort uVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  uVar1 = *(ushort *)(plVar3 + 3);
  if (uVar1 == 0x3fff) {
    FUN_10a90f750(plVar3);
    uVar1 = *(ushort *)(plVar3 + 3);
  }
  uVar4 = (ulong)uVar1;
  uVar6 = (plVar3[1] - *plVar3 >> 3) * -0x3333333333333333;
  if (uVar4 <= uVar6 && uVar6 - uVar4 != 0) {
    puVar5 = (undefined1 *)(*plVar3 + uVar4 * 0x28);
    *(undefined2 *)(plVar3 + 3) = *(undefined2 *)(puVar5 + 2);
    *puVar5 = 0;
    return *(undefined4 *)(puVar5 + 4);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a90f750);
  (*pcVar2)();
}



/* Entry: 10a90f6d8; end: 10a90f74f;  */

undefined4 FUN_10a90f6d8(long *param_1)

{
  ushort uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  
  uVar1 = *(ushort *)(param_1 + 3);
  if (uVar1 == 0x3fff) {
    FUN_10a90f750(param_1);
    uVar1 = *(ushort *)(param_1 + 3);
  }
  uVar3 = (ulong)uVar1;
  uVar5 = (param_1[1] - *param_1 >> 3) * -0x3333333333333333;
  if (uVar3 <= uVar5 && uVar5 - uVar3 != 0) {
    puVar4 = (undefined1 *)(*param_1 + uVar3 * 0x28);
    *(undefined2 *)(param_1 + 3) = *(undefined2 *)(puVar4 + 2);
    *puVar4 = 0;
    return *(undefined4 *)(puVar4 + 4);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a90f750);
  (*pcVar2)();
}



/* Entry: 10a90f750; end: 10a90f853;  */

void FUN_10a90f750(long *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  lVar4 = param_1[1] - *param_1 >> 3;
  uVar13 = lVar4 * -0x3333333333333333;
  uVar10 = ((uint)uVar13 & 0x7fff) << 1;
  if (uVar10 < 0xb) {
    uVar10 = 10;
  }
  if (0x3ffd < uVar10) {
    uVar10 = 0x3ffe;
  }
  uVar12 = (ulong)uVar10;
  FUN_10a90f854(param_1,uVar12);
  uVar5 = uVar12 - 1;
  lVar2 = *param_1;
  lVar6 = param_1[1] - lVar2 >> 3;
  uVar7 = lVar6 * -0x3333333333333333;
  if (uVar13 < uVar5 || uVar13 - uVar5 == 0) {
    uVar1 = uVar13;
    if (uVar13 < uVar7 || uVar13 + lVar6 * 0x3333333333333333 == 0) {
      uVar1 = uVar7;
    }
    puVar9 = (uint *)(lVar2 + lVar4 * 8 + 4);
    uVar11 = uVar13;
    uVar8 = uVar13;
    do {
      uVar8 = uVar8 + 1;
      if (uVar8 - uVar1 == 1) goto LAB_10a90f850;
      uVar10 = (uint)uVar11;
      uVar11 = uVar11 + 1;
      *(short *)((long)puVar9 + -2) = (short)uVar8;
      *puVar9 = uVar10 & 0xbfff | param_2 << 0x1d | 0x4000U;
      puVar9 = puVar9 + 10;
    } while (uVar11 != uVar12);
  }
  if (uVar5 <= uVar7 && uVar7 - uVar5 != 0) {
    *(undefined2 *)(lVar2 + (long)(int)uVar5 * 0x28 + 2) = 0x3fff;
    *(short *)(param_1 + 3) = (short)uVar13;
    *(short *)((long)param_1 + 0x1a) = (short)uVar5;
    return;
  }
LAB_10a90f850:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a90f854);
  (*pcVar3)();
}



/* Entry: 10a90f854; end: 10a90f8df;  */

/* WARNING: Possible PIC construction at 0x00010a90fa28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a90fa2c) */

void FUN_10a90f854(ulong *param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 **ppuVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined1 **ppuVar12;
  undefined8 uVar13;
  undefined1 auStack_c8 [56];
  undefined8 *puStack_90;
  ulong *puStack_88;
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
  
  uVar7 = param_1[1];
  lVar6 = (long)(uVar7 - *param_1) >> 3;
  bVar2 = param_2 < (ulong)(lVar6 * -0x3333333333333333);
  puVar9 = (undefined8 *)(param_2 + lVar6 * 0x3333333333333333);
  if (bVar2 || puVar9 == (undefined8 *)0x0) {
    if (bVar2) {
      uVar11 = *param_1 + param_2 * 0x28;
      for (; uVar7 != uVar11; uVar7 = uVar7 - 0x28) {
        if (*(long *)(uVar7 - 0x20) != 0) {
          *(long *)(uVar7 - 0x18) = *(long *)(uVar7 - 0x20);
          __ZdlPv();
        }
      }
      param_1[1] = uVar11;
    }
    return;
  }
  ppuVar1 = (undefined8 **)auStack_60;
  ppuVar12 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar5 = (undefined8 *)param_1[1];
  if (puVar9 <= (undefined8 *)(((long)(param_1[2] - (long)puVar5) >> 3) * -0x3333333333333333)) {
    puVar8 = puVar5;
    if (puVar9 != (undefined8 *)0x0) {
      puVar8 = puVar5 + (long)puVar9 * 5;
      do {
        puVar5[1] = 0;
        *puVar5 = 0;
        puVar5[3] = 0;
        puVar5[2] = 0;
        puVar5[4] = 0;
        *(undefined2 *)((long)puVar5 + 2) = 0x3fff;
        *(undefined8 *)((long)puVar5 + 4) = 0;
        *(undefined8 *)((long)puVar5 + 0xc) = 0;
        *(undefined8 *)((long)puVar5 + 0x14) = 0;
        *(undefined8 *)((long)puVar5 + 0x19) = 0;
        puVar5 = puVar5 + 5;
      } while (puVar5 != puVar8);
    }
    param_1[1] = (ulong)puVar8;
    return;
  }
  lVar6 = (long)puVar5 - *param_1;
  uVar7 = (long)puVar9 + (lVar6 >> 3) * -0x3333333333333333;
  if (uVar7 < 0x666666666666667) {
    lVar10 = (long)(param_1[2] - *param_1) >> 3;
    uVar11 = lVar10 * -0x6666666666666666;
    if (uVar11 < uVar7 || uVar11 - uVar7 == 0) {
      uVar11 = uVar7;
    }
    if (0x333333333333332 < (ulong)(lVar10 * -0x3333333333333333)) {
      uVar11 = 0x666666666666666;
    }
    puStack_38 = param_1;
    if (uVar11 == 0) {
      puVar3 = (ulong *)0x0;
    }
    else {
      puVar3 = param_1;
      FUN_10a90fa8c();
    }
    puStack_50 = (undefined8 *)((long)puVar3 + lVar6);
    puStack_40 = puVar3 + uVar11 * 5;
    puStack_48 = puStack_50 + (long)puVar9 * 5;
    puVar9 = puStack_50;
    do {
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[4] = 0;
      *(undefined2 *)((long)puVar9 + 2) = 0x3fff;
      *(undefined8 *)((long)puVar9 + 4) = 0;
      *(undefined8 *)((long)puVar9 + 0xc) = 0;
      *(undefined8 *)((long)puVar9 + 0x14) = 0;
      *(undefined8 *)((long)puVar9 + 0x19) = 0;
      puVar9 = puVar9 + 5;
    } while (puVar9 != puStack_48);
    puVar5 = (undefined8 *)*param_1;
    param_3 = (undefined8 *)param_1[1];
    param_4 = (undefined8 *)((long)puStack_50 + ((long)puVar5 - (long)param_3));
    uVar13 = 0x10a90fa2c;
    puVar4 = param_1;
    puVar9 = param_4;
    puStack_58 = puVar3;
  }
  else {
    puVar5 = puVar9;
    FUN_10a90fa78();
    func_0x00010a90fc0c(&puStack_58);
    __Unwind_Resume(param_1);
    pcStack_68 = FUN_10a90fa78;
    puVar4 = (ulong *)&DAT_10f62a4d8;
    ppuStack_70 = ppuVar12;
    FUN_109ffde64();
    ppuVar1 = &puStack_90;
    pcStack_78 = FUN_10a90fa8c;
    ppuVar12 = &puStack_80;
    puStack_90 = puVar9;
    puStack_88 = param_1;
    if (puVar5 < (undefined8 *)0x666666666666667) {
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm((long)puVar5 * 0x28);
      return;
    }
    uVar13 = 0x10a90fad0;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000109ffded8();
  }
  *(undefined8 **)((long)ppuVar1 + -0x20) = puVar9;
  *(ulong **)((long)ppuVar1 + -0x18) = param_1;
  *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar12;
  *(undefined8 *)((long)ppuVar1 + -8) = uVar13;
  *(undefined8 **)((long)ppuVar1 + -0x28) = param_4;
  *(undefined8 **)((long)ppuVar1 + -0x30) = param_4;
  *(ulong **)((long)ppuVar1 + -0x50) = puVar4;
  *(undefined1 **)((long)ppuVar1 + -0x48) = (undefined1 *)((long)ppuVar1 + -0x30);
  *(undefined1 **)((long)ppuVar1 + -0x40) = (undefined1 *)((long)ppuVar1 + -0x28);
  puVar9 = puVar5;
  if (puVar5 == param_3) {
    *(undefined1 *)((long)ppuVar1 + -0x38) = 1;
  }
  else {
    do {
      *param_4 = *puVar9;
      param_4[1] = 0;
      param_4[2] = 0;
      param_4[3] = 0;
      uVar13 = puVar9[1];
      param_4[2] = puVar9[2];
      param_4[1] = uVar13;
      param_4[3] = puVar9[3];
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      *(undefined1 *)(param_4 + 4) = *(undefined1 *)(puVar9 + 4);
      puVar9 = puVar9 + 5;
      param_4 = param_4 + 5;
    } while (puVar9 != param_3);
    *(undefined8 **)((long)ppuVar1 + -0x28) = param_4;
    *(undefined1 *)((long)ppuVar1 + -0x38) = 1;
    do {
      if (puVar5[1] != 0) {
        puVar5[2] = puVar5[1];
        __ZdlPv();
      }
      puVar5 = puVar5 + 5;
    } while (puVar5 != param_3);
  }
  FUN_10a90fb94((undefined1 *)((long)ppuVar1 + -0x50));
  return;
}



/* Entry: 10a90f8e0; end: 10a90fa77;  */

/* WARNING: Possible PIC construction at 0x00010a90fa28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a90fa2c) */

void FUN_10a90f8e0(ulong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 **ppuVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 **ppuVar10;
  undefined8 uVar11;
  undefined1 auStack_c8 [56];
  undefined8 *puStack_90;
  ulong *puStack_88;
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
  
  ppuVar1 = (undefined8 **)auStack_60;
  ppuVar10 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar4 = (undefined8 *)param_1[1];
  if (param_2 <= (undefined8 *)(((long)(param_1[2] - (long)puVar4) >> 3) * -0x3333333333333333)) {
    puVar6 = puVar4;
    if (param_2 != (undefined8 *)0x0) {
      puVar6 = puVar4 + (long)param_2 * 5;
      do {
        puVar4[1] = 0;
        *puVar4 = 0;
        puVar4[3] = 0;
        puVar4[2] = 0;
        puVar4[4] = 0;
        *(undefined2 *)((long)puVar4 + 2) = 0x3fff;
        *(undefined8 *)((long)puVar4 + 4) = 0;
        *(undefined8 *)((long)puVar4 + 0xc) = 0;
        *(undefined8 *)((long)puVar4 + 0x14) = 0;
        *(undefined8 *)((long)puVar4 + 0x19) = 0;
        puVar4 = puVar4 + 5;
      } while (puVar4 != puVar6);
    }
    param_1[1] = (ulong)puVar6;
    return;
  }
  lVar9 = (long)puVar4 - *param_1;
  uVar5 = (long)param_2 + (lVar9 >> 3) * -0x3333333333333333;
  if (uVar5 < 0x666666666666667) {
    lVar7 = (long)(param_1[2] - *param_1) >> 3;
    uVar8 = lVar7 * -0x6666666666666666;
    if (uVar8 < uVar5 || uVar8 - uVar5 == 0) {
      uVar8 = uVar5;
    }
    if (0x333333333333332 < (ulong)(lVar7 * -0x3333333333333333)) {
      uVar8 = 0x666666666666666;
    }
    puStack_38 = param_1;
    if (uVar8 == 0) {
      puVar2 = (ulong *)0x0;
    }
    else {
      puVar2 = param_1;
      FUN_10a90fa8c();
    }
    puStack_50 = (undefined8 *)((long)puVar2 + lVar9);
    puStack_40 = puVar2 + uVar8 * 5;
    puStack_48 = puStack_50 + (long)param_2 * 5;
    puVar4 = puStack_50;
    do {
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[4] = 0;
      *(undefined2 *)((long)puVar4 + 2) = 0x3fff;
      *(undefined8 *)((long)puVar4 + 4) = 0;
      *(undefined8 *)((long)puVar4 + 0xc) = 0;
      *(undefined8 *)((long)puVar4 + 0x14) = 0;
      *(undefined8 *)((long)puVar4 + 0x19) = 0;
      puVar4 = puVar4 + 5;
    } while (puVar4 != puStack_48);
    puVar4 = (undefined8 *)*param_1;
    param_3 = (undefined8 *)param_1[1];
    param_4 = (undefined8 *)((long)puStack_50 + ((long)puVar4 - (long)param_3));
    uVar11 = 0x10a90fa2c;
    puVar3 = param_1;
    param_2 = param_4;
    puStack_58 = puVar2;
  }
  else {
    puVar4 = param_2;
    FUN_10a90fa78();
    func_0x00010a90fc0c(&puStack_58);
    __Unwind_Resume(param_1);
    pcStack_68 = FUN_10a90fa78;
    puVar3 = (ulong *)&DAT_10f62a4d8;
    ppuStack_70 = ppuVar10;
    FUN_109ffde64();
    ppuVar1 = &puStack_90;
    pcStack_78 = FUN_10a90fa8c;
    ppuVar10 = &puStack_80;
    puStack_90 = param_2;
    puStack_88 = param_1;
    if (puVar4 < (undefined8 *)0x666666666666667) {
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm((long)puVar4 * 0x28);
      return;
    }
    uVar11 = 0x10a90fad0;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000109ffded8();
  }
  *(undefined8 **)((long)ppuVar1 + -0x20) = param_2;
  *(ulong **)((long)ppuVar1 + -0x18) = param_1;
  *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar10;
  *(undefined8 *)((long)ppuVar1 + -8) = uVar11;
  *(undefined8 **)((long)ppuVar1 + -0x28) = param_4;
  *(undefined8 **)((long)ppuVar1 + -0x30) = param_4;
  *(ulong **)((long)ppuVar1 + -0x50) = puVar3;
  *(undefined1 **)((long)ppuVar1 + -0x48) = (undefined1 *)((long)ppuVar1 + -0x30);
  *(undefined1 **)((long)ppuVar1 + -0x40) = (undefined1 *)((long)ppuVar1 + -0x28);
  puVar6 = puVar4;
  if (puVar4 == param_3) {
    *(undefined1 *)((long)ppuVar1 + -0x38) = 1;
  }
  else {
    do {
      *param_4 = *puVar6;
      param_4[1] = 0;
      param_4[2] = 0;
      param_4[3] = 0;
      uVar11 = puVar6[1];
      param_4[2] = puVar6[2];
      param_4[1] = uVar11;
      param_4[3] = puVar6[3];
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *(undefined1 *)(param_4 + 4) = *(undefined1 *)(puVar6 + 4);
      puVar6 = puVar6 + 5;
      param_4 = param_4 + 5;
    } while (puVar6 != param_3);
    *(undefined8 **)((long)ppuVar1 + -0x28) = param_4;
    *(undefined1 *)((long)ppuVar1 + -0x38) = 1;
    do {
      if (puVar4[1] != 0) {
        puVar4[2] = puVar4[1];
        __ZdlPv();
      }
      puVar4 = puVar4 + 5;
    } while (puVar4 != param_3);
  }
  FUN_10a90fb94((undefined1 *)((long)ppuVar1 + -0x50));
  return;
}



/* Entry: 10a90fa78; end: 10a90fa8b;  */

void FUN_10a90fa78(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000109ffded8();
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = param_4;
    puVar2 = param_2;
    puStack_80 = puVar1;
    puStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        *puStack_58 = *puVar2;
        puStack_58[1] = 0;
        puStack_58[2] = 0;
        puStack_58[3] = 0;
        uVar3 = puVar2[1];
        puStack_58[2] = puVar2[2];
        puStack_58[1] = uVar3;
        puStack_58[3] = puVar2[3];
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *(undefined1 *)(puStack_58 + 4) = *(undefined1 *)(puVar2 + 4);
        puVar2 = puVar2 + 5;
        puStack_58 = puStack_58 + 5;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (param_2[1] != 0) {
          param_2[2] = param_2[1];
          __ZdlPv();
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_10a90fb94(&puStack_80);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 10a90fa8c; end: 10a90fb93;  */

void FUN_10a90fa8c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000109ffded8();
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = param_4;
    puVar1 = param_2;
    uStack_70 = param_1;
    puStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        *puStack_48 = *puVar1;
        puStack_48[1] = 0;
        puStack_48[2] = 0;
        puStack_48[3] = 0;
        uVar2 = puVar1[1];
        puStack_48[2] = puVar1[2];
        puStack_48[1] = uVar2;
        puStack_48[3] = puVar1[3];
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        *(undefined1 *)(puStack_48 + 4) = *(undefined1 *)(puVar1 + 4);
        puVar1 = puVar1 + 5;
        puStack_48 = puStack_48 + 5;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (param_2[1] != 0) {
          param_2[2] = param_2[1];
          __ZdlPv();
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_10a90fb94(&uStack_70);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 10a90fb94; end: 10a90fbc7;  */

long FUN_10a90fb94(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a90fbc8(param_1);
  }
  return param_1;
}



/* Entry: 10a90fbc8; end: 10a90fc97;  */

void FUN_10a90fbc8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x28) {
    if (*(long *)(lVar1 + -0x20) != 0) {
      *(long *)(lVar1 + -0x18) = *(long *)(lVar1 + -0x20);
      __ZdlPv();
    }
  }
  return;
}


