/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ad72690; end: 10ad72737;  */

void FUN_10ad72690(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  plVar6 = (long *)0x48;
  __Znwm();
  plVar6[2] = (long)&PTR_FUN_110c71c98;
  plVar6[3] = param_3;
  puVar2 = (undefined8 *)param_2[0xb];
  lVar3 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar2;
  *puVar2 = plVar6;
  param_2[0xb] = plVar6;
  param_2[0xc] = lVar3 + 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = plVar6;
  param_1[2] = uVar8;
  param_1[1] = uVar7;
  return;
}



/* Entry: 10ad72738; end: 10ad727b7;  */

undefined8 * FUN_10ad72738(undefined8 *param_1)

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



/* Entry: 10ad727b8; end: 10ad72df7;  */

undefined ** FUN_10ad727b8(undefined **param_1,undefined ***param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 uVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  undefined *puVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined ***pppuVar15;
  undefined *puVar16;
  undefined ***unaff_x23;
  long *plVar17;
  undefined **ppuVar18;
  undefined ***pppuVar19;
  undefined ***unaff_x27;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined ***pppuStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  float fStack_f0;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((uint)*(byte *)(param_1 + 0xd) != ((uint)param_2 & 0xff)) ||
     (*(int *)((long)param_1 + 0x6c) != param_3)) {
    *(char *)(param_1 + 0xd) = (char)param_2;
    *(int *)((long)param_1 + 0x6c) = param_3;
    puVar16 = param_1[1];
    ppuVar5 = (undefined **)0x38;
    __Znwm();
    ppuVar5[1] = (undefined *)0x0;
    ppuVar5[2] = (undefined *)0x0;
    *ppuVar5 = (undefined *)&PTR_DAT_110c71dc8;
    ppuVar5[4] = (undefined *)0x0;
    ppuVar5[5] = (undefined *)0x0;
    ppuStack_120 = ppuVar5 + 3;
    *ppuStack_120 = (undefined *)&PTR_FUN_110c71c38;
    *(char *)(ppuVar5 + 6) = (char)param_2;
    *(int *)((long)ppuVar5 + 0x34) = param_3;
    pppuStack_108 = (undefined ***)0x0;
    puStack_110 = (undefined *)0x0;
    lStack_f8 = 0;
    ppuStack_100 = (undefined **)0x0;
    fStack_f0 = *(float *)(puVar16 + 0x38);
    ppuStack_118 = ppuVar5;
    FUN_10a3ff5e8(&puStack_110,*(undefined8 *)(puVar16 + 0x20));
    plVar17 = *(long **)(puVar16 + 0x28);
    if (plVar17 != (long *)0x0) {
      do {
        param_2 = pppuStack_108;
        uVar8 = plVar17[2];
        uVar12 = ((ulong)(uint)((int)uVar8 << 3) + 8 ^ uVar8 >> 0x20) * -0x622015f714c7d297;
        uVar12 = (uVar8 >> 0x20 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
        pppuVar19 = (undefined ***)((uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297);
        if (pppuStack_108 != (undefined ***)0x0) {
          puVar11 = (undefined *)((long)pppuStack_108 + -1);
          if (((ulong)pppuStack_108 & (ulong)puVar11) == 0) {
            unaff_x27 = (undefined ***)((ulong)pppuVar19 & (ulong)puVar11);
          }
          else {
            unaff_x27 = pppuVar19;
            if (pppuStack_108 <= pppuVar19) {
              uVar12 = 0;
              if (pppuStack_108 != (undefined ***)0x0) {
                uVar12 = (ulong)pppuVar19 / (ulong)pppuStack_108;
              }
              unaff_x27 = (undefined ***)((long)pppuVar19 - uVar12 * (long)pppuStack_108);
            }
          }
          plVar13 = *(long **)(puStack_110 + (long)unaff_x27 * 8);
          if (plVar13 != (long *)0x0) {
            do {
              while( true ) {
                plVar13 = (long *)*plVar13;
                if (plVar13 == (long *)0x0) goto LAB_10ad7294c;
                pppuVar15 = (undefined ***)plVar13[1];
                if (pppuVar15 != pppuVar19) break;
                if (plVar13[2] == uVar8) goto LAB_10ad72ac4;
              }
              if (((ulong)pppuStack_108 & (ulong)puVar11) == 0) {
                pppuVar15 = (undefined ***)((ulong)pppuVar15 & (ulong)puVar11);
              }
              else if (pppuStack_108 <= pppuVar15) {
                uVar12 = 0;
                if (pppuStack_108 != (undefined ***)0x0) {
                  uVar12 = (ulong)pppuVar15 / (ulong)pppuStack_108;
                }
                pppuVar15 = (undefined ***)((long)pppuVar15 - uVar12 * (long)pppuStack_108);
              }
            } while (pppuVar15 == unaff_x27);
          }
        }
LAB_10ad7294c:
        ppuVar18 = (undefined **)0x68;
        __Znwm();
        puStack_b0 = (undefined *)0x0;
        *ppuVar18 = (undefined *)0x0;
        ppuVar18[1] = (undefined *)pppuVar19;
        lVar9 = plVar17[3];
        puVar11 = (undefined *)plVar17[2];
        ppuVar18[3] = (undefined *)plVar17[3];
        ppuVar18[2] = puVar11;
        if (lVar9 != 0) {
          plVar13 = (long *)(lVar9 + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar2) {
              *plVar13 = *plVar13 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        ppuStack_e0 = ppuVar18 + 4;
        *(undefined1 *)(ppuVar18 + 0xc) = 3;
        ppuStack_c0 = ppuVar18;
        ppuStack_b8 = &puStack_110;
        if ((char)plVar17[0xc] == '\0') {
          uVar7 = 0;
        }
        else {
          FUN_10a005398(&ppuStack_e0,plVar17 + 4);
          uVar7 = (undefined1)plVar17[0xc];
        }
        *(undefined1 *)(ppuVar18 + 0xc) = uVar7;
        puStack_b0 = (undefined *)CONCAT71(puStack_b0._1_7_,1);
        if ((param_2 == (undefined ***)0x0) || (fStack_f0 * (float)param_2 < (float)(lStack_f8 + 1))
           ) {
          uVar8 = 1;
          if ((undefined ***)0x2 < param_2) {
            uVar8 = (ulong)(((ulong)param_2 & (ulong)((long)param_2 + -1)) != 0);
          }
          uVar8 = uVar8 | (long)param_2 << 1;
          uVar12 = (ulong)((float)(lStack_f8 + 1) / fStack_f0);
          if (uVar8 <= uVar12) {
            uVar8 = uVar12;
          }
          FUN_10a3ff5e8(&puStack_110,uVar8);
          param_2 = pppuStack_108;
          if (((ulong)pppuStack_108 & (ulong)((long)pppuStack_108 + -1)) == 0) {
            unaff_x27 = (undefined ***)((ulong)((long)pppuStack_108 + -1) & (ulong)pppuVar19);
          }
          else {
            unaff_x27 = pppuVar19;
            if (pppuStack_108 <= pppuVar19) {
              uVar8 = 0;
              if (pppuStack_108 != (undefined ***)0x0) {
                uVar8 = (ulong)pppuVar19 / (ulong)pppuStack_108;
              }
              unaff_x27 = (undefined ***)((long)pppuVar19 - uVar8 * (long)pppuStack_108);
            }
          }
        }
        puVar14 = *(undefined8 **)(puStack_110 + (long)unaff_x27 * 8);
        if (puVar14 == (undefined8 *)0x0) {
          *ppuStack_c0 = (undefined *)ppuStack_100;
          ppuStack_100 = ppuStack_c0;
          *(undefined ****)(puStack_110 + (long)unaff_x27 * 8) = &ppuStack_100;
          if (*ppuStack_c0 != (undefined *)0x0) {
            pppuVar19 = *(undefined ****)(*ppuStack_c0 + 8);
            if (((ulong)param_2 & (ulong)((long)param_2 + -1)) == 0) {
              pppuVar19 = (undefined ***)((ulong)pppuVar19 & (ulong)((long)param_2 + -1));
            }
            else if (param_2 <= pppuVar19) {
              uVar8 = 0;
              if (param_2 != (undefined ***)0x0) {
                uVar8 = (ulong)pppuVar19 / (ulong)param_2;
              }
              pppuVar19 = (undefined ***)((long)pppuVar19 - uVar8 * (long)param_2);
            }
            *(undefined ***)(puStack_110 + (long)pppuVar19 * 8) = ppuStack_c0;
          }
        }
        else {
          *ppuStack_c0 = (undefined *)*puVar14;
          *puVar14 = ppuStack_c0;
        }
        lStack_f8 = lStack_f8 + 1;
LAB_10ad72ac4:
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
    unaff_x23 = (undefined ***)0x0;
    if (ppuStack_100 == (undefined **)0x0) {
      param_1 = &puStack_110;
      FUN_10ad73540();
    }
    else {
      param_2 = &ppuStack_e0;
      unaff_x23 = &ppuStack_c0;
      ppuVar18 = ppuStack_100;
      do {
        puVar11 = puVar16 + 0x18;
        ppuVar5 = ppuVar18 + 2;
        FUN_10a400094();
        if (puVar11 != (undefined *)0x0) {
          if (*(char *)(ppuVar18 + 0xc) == '\x01') {
            pcVar10 = (code *)ppuVar18[4];
            ppuStack_b8 = ppuStack_118;
            ppuStack_c0 = ppuStack_120;
            if (ppuStack_118 != (undefined **)0x0) {
              ppuVar5 = ppuStack_118 + 1;
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                if (bVar2) {
                  *ppuVar5 = *ppuVar5 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            (*pcVar10)(&ppuStack_c0,ppuVar18 + 4);
            if (ppuStack_b8 != (undefined **)0x0) {
              ppuVar5 = ppuStack_b8 + 1;
              do {
                puVar11 = *ppuVar5;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                if (bVar2) {
                  *ppuVar5 = puVar11 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
                ppuVar6 = ppuStack_b8;
              } while (cVar1 != '\0');
LAB_10ad72ba4:
              if (puVar11 == (undefined *)0x0) {
                (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
              }
            }
          }
          else if (*(char *)(ppuVar18 + 0xc) == '\x02') {
            ppuVar6 = ppuVar18 + 4;
            FUN_10a688b40();
            ppuVar4 = ppuStack_118;
            if (ppuVar6 == (undefined **)0x0) {
              if (ppuVar5 != (undefined **)0x0) {
                puStack_b0 = ppuVar18[4];
                puStack_a8 = ppuVar18[5];
                if (puStack_a8 != (undefined *)0x0) {
                  plVar17 = (long *)(puStack_a8 + 8);
                  do {
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                    if (bVar2) {
                      *plVar17 = *plVar17 + 1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                }
                ppuStack_d0 = ppuStack_120;
                ppuStack_c8 = ppuStack_118;
                if (ppuStack_118 == (undefined **)0x0) {
                  ppuStack_98 = (undefined **)0x0;
                }
                else {
                  ppuVar6 = ppuStack_118 + 1;
                  do {
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                    if (bVar2) {
                      *ppuVar6 = *ppuVar6 + 1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  ppuStack_98 = ppuStack_118;
                  do {
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                    if (bVar2) {
                      *ppuVar6 = *ppuVar6 + 1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                }
                ppuStack_a0 = ppuStack_120;
                ppuStack_b8 = &PTR_FUN_110c71e08;
                ppuStack_d8 = (undefined **)0x0;
                ppuStack_e0 = (undefined **)0x0;
                ppuStack_c0 = (undefined **)FUN_10ad745b8;
                FUN_10a4634ec(ppuVar5,&ppuStack_c0);
                (*(code *)*ppuStack_b8)(&ppuStack_b8);
                if (ppuVar4 != (undefined **)0x0) {
                  ppuVar5 = ppuVar4 + 1;
                  do {
                    puVar11 = *ppuVar5;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                    if (bVar2) {
                      *ppuVar5 = puVar11 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (puVar11 == (undefined *)0x0) {
                    (**(code **)(*ppuVar4 + 0x10))(ppuVar4);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar4);
                  }
                }
                if (ppuStack_d8 != (undefined **)0x0) {
                  ppuVar5 = ppuStack_d8 + 1;
                  do {
                    puVar11 = *ppuVar5;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                    if (bVar2) {
                      *ppuVar5 = puVar11 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                    ppuVar6 = ppuStack_d8;
                  } while (cVar1 != '\0');
                  goto LAB_10ad72ba4;
                }
              }
            }
            else {
              *ppuVar6 = (undefined *)CONCAT44((int)((ulong)*ppuVar6 >> 0x20) + 1,(int)*ppuVar6 + 1)
              ;
              FUN_10ad743b4(ppuVar18[4],&ppuStack_120);
              iVar3 = *(int *)((long)ppuVar6 + 4) + -1;
              *(int *)((long)ppuVar6 + 4) = iVar3;
              if (iVar3 == 0) {
                *(undefined4 *)ppuVar6 = 0;
              }
            }
          }
        }
        ppuVar5 = ppuStack_118;
        ppuVar18 = (undefined **)*ppuVar18;
      } while (ppuVar18 != (undefined **)0x0);
      param_1 = &puStack_110;
      FUN_10ad73540();
      if (ppuVar5 == (undefined **)0x0) goto LAB_10ad72d00;
    }
    ppuVar18 = ppuVar5 + 1;
    do {
      puVar16 = *ppuVar18;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
      if (bVar2) {
        *ppuVar18 = puVar16 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar16 == (undefined *)0x0) {
      (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_1 = ppuVar5;
    }
  }
LAB_10ad72d00:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b8)(unaff_x23 + 1);
  FUN_10ad7435c(param_2 + 2);
  func_0x00010a004dac(&ppuStack_e0);
  FUN_10ad73540(&puStack_110);
  FUN_10ad7435c(&ppuStack_120);
  __Unwind_Resume();
  *param_1 = (undefined *)&PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10ad72df8; end: 10ad72e57;  */

undefined8 * FUN_10ad72df8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10ad72e58; end: 10ad72e73;  */

void FUN_10ad72e58(void)

{
  return;
}



/* Entry: 10ad72e74; end: 10ad72f6f;  */

undefined1  [16] FUN_10ad72e74(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c71c80;
  puVar1 = &UNK_10f6a9fc4;
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
    ppuStack_40 = &PTR_DAT_110c71c80;
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



/* Entry: 10ad72f70; end: 10ad72fc3;  */

ulong FUN_10ad72f70(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10ad72fc4,0);
  }
  return param_1;
}



/* Entry: 10ad72fc4; end: 10ad7307f;  */

void FUN_10ad72fc4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ad73080(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[3];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)(char)lVar5;
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



/* Entry: 10ad73080; end: 10ad7313b;  */

undefined ** FUN_10ad73080(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = param_1;
  func_0x000109898688();
  if (ppuVar1 != (undefined **)0x0) {
    FUN_10a052c2c();
    param_2 = ppuVar1;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return param_1;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar1 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar2 = ppuVar1;
  FUN_10a0051e8();
  if (((ulong)ppuVar2 & 1) == 0) {
    FUN_10a0605c4(ppuVar1,*param_2,FUN_10ad7313c,0);
  }
  return ppuVar1;
}



/* Entry: 10ad7313c; end: 10ad731f7;  */

void FUN_10ad7313c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
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
  FUN_10ad73080(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar2 = *(int *)((long)param_2 + 0x1c);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
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
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10ad731f8; end: 10ad732b3;  */

void FUN_10ad731f8(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6a9fe3,0xd);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad732b4);
  (*pcVar4)();
}



/* Entry: 10ad732b4; end: 10ad732c3;  */

void FUN_10ad732b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c71cc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad732c4; end: 10ad732e3;  */

void FUN_10ad732c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c71cc0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad732e4; end: 10ad732f3;  */

void FUN_10ad732e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ad732ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ad732f4; end: 10ad7339b;  */

undefined8 * FUN_10ad732f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c71d10;
  (**(code **)param_1[9])();
  FUN_10ad73540(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10ad7339c; end: 10ad733ff;  */

bool FUN_10ad7339c(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x87) {
    iVar1 = 0xe4b43ae;
    _memcmp(&UNK_10e4b43ae);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10ad73400; end: 10ad7351f;  */

void FUN_10ad73400(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f6a9fc4);
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



/* Entry: 10ad73520; end: 10ad7352f;  */

undefined1  [16] FUN_10ad73520(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x87;
  auVar1._0_8_ = &UNK_10e4b43ae;
  return auVar1;
}



/* Entry: 10ad73530; end: 10ad7353f;  */

long * FUN_10ad73530(undefined8 param_1,long *param_2)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad735c0);
  (*pcVar2)();
}



/* Entry: 10ad73540; end: 10ad735bf;  */

long * FUN_10ad73540(long *param_1)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad735c0);
  (*pcVar2)();
}



/* Entry: 10ad735c0; end: 10ad73b0f;  */

void FUN_10ad735c0(long param_1,code **param_2,undefined *param_3)

{
  undefined **ppuVar1;
  code *pcVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined8 *puVar11;
  code *pcVar12;
  code **ppcVar13;
  undefined8 in_x7;
  undefined *puVar14;
  long *plVar15;
  undefined **unaff_x20;
  code *pcVar16;
  long *plVar17;
  long lVar18;
  code *pcVar19;
  code *pcStack_1b0;
  undefined **ppuStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined7 uStack_180;
  char cStack_179;
  long *plStack_178;
  long *plStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  code *pcStack_150;
  undefined **ppuStack_148;
  code *pcStack_140;
  undefined **ppuStack_138;
  undefined8 *apuStack_130 [7];
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 auStack_98 [7];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = (undefined **)param_2[4];
  ppuVar9 = ppuVar7;
  ppcVar13 = param_2;
  if ((ppuVar7 != (undefined **)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), ppuVar9 = ppuVar7, ppuStack_1a8 = ppuVar7,
     ppuVar7 != (undefined **)0x0)) {
    pcStack_1b0 = param_2[3];
    if (pcStack_1b0 != (code *)0x0) {
      plVar15 = *(long **)(param_2[2] + 0x18);
      if (*(long *)(param_1 + 0x30) == 0) {
        ppuVar9 = (undefined **)(plVar15 + 5);
        FUN_10a044790();
      }
      else if ((((*(byte *)(plVar15[6] + 8) & 1) == 0) && ((*(byte *)(*plVar15 + 0xd72) & 1) == 0))
              && (lVar18 = *(long *)(*plVar15 + 0x100), lVar18 != 0)) {
        plVar8 = *(long **)(lVar18 + 0x1c8);
        (**(code **)(*plVar8 + 0x60))();
        pcStack_150 = (code *)0x0;
        ppuStack_148 = (undefined **)0x0;
        ppuVar9 = (undefined **)plVar8[1];
        if (((ppuVar9 == (undefined **)0x0) ||
            (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_148 = ppuVar9,
            ppuVar9 == (undefined **)0x0)) ||
           (pcVar16 = (code *)*plVar8, pcStack_150 = pcVar16, pcVar16 == (code *)0x0)) {
          ppuVar7 = ppuStack_148;
          if ((bRam000000011330a9e8 & 1) != 0) {
            param_3 = &UNK_10f6a9ff1;
            ppuVar9 = (undefined **)0x0;
            ppcVar13 = (code **)0x1;
            func_0x00010ae06f08();
          }
        }
        else {
          FUN_10ad73b10(&puStack_168,plVar15[3],plVar15);
          FUN_10a3bf120(&pcStack_140);
          plVar10 = (long *)0x138;
          __Znwm();
          pcStack_a8 = pcStack_140;
          plVar17 = plVar10 + 1;
          *plVar17 = 0;
          plVar10[2] = 0;
          *plVar10 = (long)&PTR_FUN_110b9f3b0;
          plVar8 = plVar10 + 3;
          pcStack_140 = (code *)0x0;
          ppuStack_a0 = ppuStack_138;
          (*(code *)apuStack_130[0][2])(auStack_98,apuStack_130);
          uStack_60 = uStack_f8;
          uVar3 = *(ulong *)(lVar18 + 0x210);
          lVar6 = *(long *)(lVar18 + 0x208);
          if (-1 < (char)*(byte *)(lVar18 + 0x21f)) {
            uVar3 = (ulong)*(byte *)(lVar18 + 0x21f);
            lVar6 = lVar18 + 0x208;
          }
          pcStack_f0 = FUN_10ad73c90;
          ppuStack_e8 = &PTR_DAT_110c71d70;
          puStack_e0 = puStack_168;
          lStack_d0 = lStack_158;
          puStack_d8 = puStack_160;
          puStack_160 = (undefined *)0x0;
          lStack_158 = 0;
          param_3 = (undefined *)0x9;
          FUN_10a23708c(plVar8,&UNK_10e511c3e,9,&UNK_10f647b45,3,&pcStack_a8,1,in_x7,lVar6,uVar3,
                        &pcStack_f0);
          (*(code *)*ppuStack_e8)(&ppuStack_e8);
          FUN_10a042634(&pcStack_a8);
          plStack_178 = plVar8;
          plStack_170 = plVar10;
          FUN_10a042634(&pcStack_140);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar5) {
              *plVar17 = *plVar17 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          plStack_1a0 = plVar8;
          plStack_198 = plVar10;
          (**(code **)(*(long *)pcVar16 + 0x10))(&puStack_190,pcVar16,&plStack_1a0);
          plVar8 = plStack_198;
          if (plStack_198 != (long *)0x0) {
            plVar10 = plStack_198 + 1;
            do {
              lVar18 = *plVar10;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar5) {
                *plVar10 = lVar18 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar18 == 0) {
              (**(code **)(*plStack_198 + 0x10))(plStack_198);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
          ppuStack_e8 = ppuStack_148;
          pcStack_f0 = pcStack_150;
          if (ppuStack_148 != (undefined **)0x0) {
            ppuVar9 = ppuStack_148 + 2;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
              if (bVar5) {
                *ppuVar9 = *ppuVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          if (cStack_179 < '\0') {
            func_0x000107c3192c(&puStack_e0,puStack_190);
            param_3 = puStack_188;
          }
          else {
            puStack_d8 = puStack_188;
            puStack_e0 = puStack_190;
            lStack_d0 = CONCAT17(cStack_179,uStack_180);
          }
          pcStack_a8 = FUN_10ad741dc;
          ppuStack_a0 = &PTR_FUN_110c71d88;
          puVar11 = (undefined8 *)0x28;
          __Znwm();
          puVar11[1] = ppuStack_e8;
          *puVar11 = pcStack_f0;
          pcStack_f0 = (code *)0x0;
          ppuStack_e8 = (undefined **)0x0;
          if (lStack_d0 < 0) {
            param_3 = puStack_d8;
            func_0x000107c3192c(puVar11 + 2,puStack_e0);
          }
          else {
            puVar11[3] = puStack_d8;
            puVar11[2] = puStack_e0;
            puVar11[4] = lStack_d0;
          }
          pcStack_140 = FUN_10ad741dc;
          ppuStack_138 = &PTR_FUN_110c71d88;
          auStack_98[0] = 0;
          apuStack_130[0] = puVar11;
          FUN_10ad74284(&ppuStack_a0);
          ppcVar13 = &pcStack_140;
          func_0x00010a108320(plVar15 + 5);
          FUN_10a044790(&pcStack_140);
          (*(code *)*ppuStack_138)(&ppuStack_138);
          if (lStack_d0 < 0) {
            __ZdlPv(puStack_e0);
          }
          if (ppuStack_e8 != (undefined **)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          if (cStack_179 < '\0') {
            __ZdlPv(puStack_190);
          }
          plVar15 = plStack_170;
          if (plStack_170 != (long *)0x0) {
            plVar8 = plStack_170 + 1;
            do {
              lVar18 = *plVar8;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar5) {
                *plVar8 = lVar18 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar18 == 0) {
              (**(code **)(*plStack_170 + 0x10))(plStack_170);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
            }
          }
          ppuVar9 = &puStack_168;
          func_0x00010ad73bf4();
          ppuVar7 = ppuStack_148;
        }
        if (ppuVar7 != (undefined **)0x0) {
          ppuVar1 = ppuVar7 + 1;
          do {
            puVar14 = *ppuVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
            if (bVar5) {
              *ppuVar1 = puVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (puVar14 == (undefined *)0x0) {
            (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppuVar9 = ppuVar7;
          }
        }
        ppuVar7 = ppuStack_1a8;
        unaff_x20 = ppuStack_1a8;
        if (ppuStack_1a8 == (undefined **)0x0) goto LAB_10ad73874;
      }
    }
    ppuVar1 = ppuVar7 + 1;
    do {
      puVar14 = *ppuVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar5) {
        *ppuVar1 = puVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    unaff_x20 = ppuVar7;
    if (puVar14 == (undefined *)0x0) {
      (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
      ppuVar9 = ppuVar7;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
LAB_10ad73874:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (unaff_x20[1] != (undefined *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZdlPv(unaff_x20);
  func_0x00010ad73bb8(&pcStack_f0);
  if (cStack_179 < '\0') {
    __ZdlPv(puStack_190);
  }
  FUN_10a05bd88(&plStack_178);
  func_0x00010ad73bf4(&puStack_168);
  func_0x00010a05a8c4(&pcStack_150);
  func_0x00010a05a86c(&pcStack_1b0);
  __Unwind_Resume();
  __ZNSt3__115recursive_mutex4lockEv(ppcVar13 + 2);
  pcVar12 = (code *)0x48;
  __Znwm();
  *(undefined ***)(pcVar12 + 0x10) = &PTR_FUN_110c71d58;
  *(undefined **)(pcVar12 + 0x18) = param_3;
  pcVar16 = ppcVar13[0xb];
  pcVar19 = ppcVar13[0xc];
  *(code ***)pcVar12 = ppcVar13 + 10;
  *(code **)(pcVar12 + 8) = pcVar16;
  *(code **)pcVar16 = pcVar12;
  ppcVar13[0xb] = pcVar12;
  ppcVar13[0xc] = pcVar19 + 1;
  __ZNSt3__115recursive_mutex6unlockEv(ppcVar13 + 2);
  pcVar19 = ppcVar13[1];
  pcVar16 = *ppcVar13;
  if (ppcVar13[1] != (code *)0x0) {
    pcVar2 = ppcVar13[1] + 0x10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar5) {
        *(long *)pcVar2 = *(long *)pcVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *ppuVar9 = pcVar12;
  ppuVar9[2] = pcVar19;
  ppuVar9[1] = pcVar16;
  return;
}



/* Entry: 10ad73b10; end: 10ad73bb7;  */

void FUN_10ad73b10(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  plVar6 = (long *)0x48;
  __Znwm();
  plVar6[2] = (long)&PTR_FUN_110c71d58;
  plVar6[3] = param_3;
  puVar2 = (undefined8 *)param_2[0xb];
  lVar3 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar2;
  *puVar2 = plVar6;
  param_2[0xb] = plVar6;
  param_2[0xc] = lVar3 + 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = plVar6;
  param_1[2] = uVar8;
  param_1[1] = uVar7;
  return;
}



/* Entry: 10ad73bb8; end: 10ad73c73;  */

long FUN_10ad73bb8(long param_1)

{
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10ad73c74; end: 10ad73c8f;  */

void FUN_10ad73c74(void)

{
  return;
}



/* Entry: 10ad73c90; end: 10ad74147;  */

uint * FUN_10ad73c90(long *param_1,long param_2)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  undefined8 ***pppuVar5;
  undefined8 *****pppppuVar6;
  uint *puVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  long lStack_1a8;
  uint *puStack_1a0;
  undefined8 ****ppppuStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 **ppuStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 **ppuStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 ***pppuStack_138;
  long lStack_130;
  undefined4 uStack_124;
  uint *puStack_120;
  long lStack_118;
  long lStack_110;
  uint *puStack_108;
  long lStack_100;
  long lStack_f8;
  int iStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [56];
  long lStack_a0;
  undefined4 uStack_98;
  undefined1 auStack_90 [40];
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = *(uint **)(param_2 + 0x20);
  puVar7 = puVar4;
  if ((puVar4 == (uint *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), puVar7 = puVar4, puStack_1a0 = puVar4,
     puVar4 == (uint *)0x0)) goto LAB_10ad7408c;
  lStack_1a8 = *(long *)(param_2 + 0x18);
  if (lStack_1a8 != 0) {
    lVar12 = *(long *)(param_2 + 0x10);
    lStack_118 = param_1[1];
    puStack_120 = (uint *)*param_1;
    lStack_110 = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    lStack_100 = param_1[4];
    puStack_108 = (uint *)param_1[3];
    lStack_f8 = param_1[5];
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    iStack_f0 = (int)param_1[6];
    lStack_e8 = param_1[7];
    lStack_e0 = param_1[8];
    param_1[7] = 0;
    (**(code **)(param_1[9] + 0x10))(auStack_d8,param_1 + 9);
    lStack_a0 = param_1[0x10];
    uStack_98 = (undefined4)param_1[0x11];
    FUN_10a0424c4(auStack_90,param_1 + 0x12);
    if (((iStack_f0 - 200U < 100) && (lStack_e8 != 0)) && (lStack_a0 != 0)) {
      uVar11 = *(undefined8 *)(lVar12 + 0x18);
      plStack_50 = (long *)0x0;
      FUN_10a0cd3f8(&pppuStack_138,lStack_e8,lStack_e8 + lStack_a0,alStack_68,0,0);
      if (plStack_50 == alStack_68) {
        lVar12 = 0x20;
LAB_10ad73dc0:
        (**(code **)(*plStack_50 + lVar12))();
      }
      else if (plStack_50 != (long *)0x0) {
        lVar12 = 0x28;
        goto LAB_10ad73dc0;
      }
      if ((byte)pppuStack_138 == 9) {
        if ((bRam000000011330a9e8 & 1) != 0) {
          func_0x00010ae06f08(0,1,&UNK_10f6a9ff1,&UNK_10f6aa11f,0x5a,&UNK_10f6aa1e6);
        }
      }
      else {
        ppuStack_158 = &pppuStack_138;
        lStack_150 = 0;
        uStack_148 = 0;
        uStack_140 = 0x8000000000000000;
        if ((byte)pppuStack_138 == 1) {
          lVar12 = lStack_130;
          func_0x00010ad5cfe4(lStack_130,&UNK_10f6a9fc5);
          lStack_150 = lVar12;
LAB_10ad73e74:
          ppuStack_178 = &pppuStack_138;
          lStack_170 = 0;
          uStack_168 = 0;
          uStack_160 = 0x8000000000000000;
          if ((byte)pppuStack_138 == 1) {
            lVar12 = lStack_130;
            func_0x00010ad5d068(lStack_130,&UNK_10f6a9fca);
            lStack_170 = lVar12;
          }
          else {
            if ((byte)pppuStack_138 == 2) {
              uStack_168 = *(undefined8 *)(lStack_130 + 8);
              goto LAB_10ad73e9c;
            }
            uStack_160 = 1;
          }
          uStack_190 = 0;
          uStack_188 = 0;
          uStack_180 = 0x8000000000000000;
          if ((byte)pppuStack_138 == 1) {
            uStack_190 = lStack_130 + 8;
          }
          else {
            if ((byte)pppuStack_138 == 2) goto LAB_10ad73efc;
            uStack_180 = 1;
          }
        }
        else {
          if ((byte)pppuStack_138 != 2) {
            uStack_140 = 1;
            goto LAB_10ad73e74;
          }
          uStack_168 = *(undefined8 *)(lStack_130 + 8);
          uStack_148 = uStack_168;
LAB_10ad73e9c:
          uStack_160 = 0x8000000000000000;
          lStack_170 = 0;
          ppuStack_178 = &pppuStack_138;
LAB_10ad73efc:
          uStack_180 = 0x8000000000000000;
          uStack_190 = 0;
          uStack_188 = *(ulong *)(lStack_130 + 8);
        }
        ppppuStack_198 = &pppuStack_138;
        pppuVar5 = &ppuStack_158;
        func_0x00010937c708(pppuVar5,&ppppuStack_198);
        if (((ulong)pppuVar5 & 1) == 0) {
          pppuVar5 = &ppuStack_158;
          func_0x00010938cf68();
          if (*(char *)pppuVar5 == '\x03') {
            ppppuStack_198 = &pppuStack_138;
            uStack_190 = 0;
            uStack_188 = 0;
            uStack_180 = 0x8000000000000000;
            if ((byte)pppuStack_138 == 2) {
              uStack_188 = *(ulong *)(lStack_130 + 8);
            }
            else if ((byte)pppuStack_138 == 1) {
              uStack_190 = lStack_130 + 8;
            }
            else {
              uStack_180 = 1;
            }
            pppuVar5 = &ppuStack_178;
            func_0x00010937c708(pppuVar5,&ppppuStack_198);
            if (((ulong)pppuVar5 & 1) == 0) {
              pppuVar5 = &ppuStack_178;
              func_0x00010938cf68();
              if (*(byte *)pppuVar5 - 5 < 2) {
                func_0x00010938cf68(&ppuStack_158);
                func_0x00010937c804(&ppppuStack_198);
                uVar8 = uStack_190;
                pppppuVar6 = (undefined8 *****)ppppuStack_198;
                if (-1 < (long)uStack_188) {
                  uVar8 = uStack_188 >> 0x38;
                  pppppuVar6 = &ppppuStack_198;
                }
                FUN_10ad74148(pppppuVar6,uVar8);
                func_0x00010938cf68(&ppuStack_178);
                func_0x00010937ba88();
                FUN_10ad727b8(uVar11,pppppuVar6,uStack_124);
                if ((long)uStack_188 < 0) {
                  __ZdlPv(ppppuStack_198);
                }
              }
            }
          }
        }
      }
      func_0x000109380ffc(&lStack_130,(byte)pppuStack_138);
    }
    func_0x000104c4f944(auStack_90);
    puVar7 = (uint *)&lStack_e8;
    FUN_10a042634();
    if (lStack_f8 < 0) {
      puVar7 = puStack_108;
      __ZdlPv();
    }
    if (lStack_110 < 0) {
      puVar7 = puStack_120;
      __ZdlPv();
    }
  }
  puVar1 = puVar4 + 2;
  do {
    lVar12 = *(long *)puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *(long *)puVar1 = lVar12 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar12 == 0) {
    (**(code **)(*(long *)puVar4 + 0x10))(puVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    puVar7 = puVar4;
  }
LAB_10ad7408c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar7;
  }
  ___stack_chk_fail();
  uVar8 = (ulong)(byte)pppuStack_138;
  func_0x000109380ffc(&lStack_130);
  FUN_10a05bd10(&puStack_120);
  func_0x00010a05a86c(&lStack_1a8);
  __Unwind_Resume();
  if (uVar8 == 4) {
    uVar9 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
    uVar10 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (uint)(0x48494748 < uVar10);
    if (uVar10 < 0x48494748) {
      uVar9 = 0xffffffff;
    }
    uVar10 = 2;
    if (uVar9 != 0) {
      uVar10 = 0;
    }
    return (uint *)(ulong)uVar10;
  }
  if (uVar8 != 6) {
    return (uint *)0x0;
  }
  return (uint *)(ulong)(*puVar7 == 0x4944454d && (short)puVar7[1] == 0x4d55);
}



/* Entry: 10ad74148; end: 10ad741db;  */

bool FUN_10ad74148(uint *param_1,long param_2)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (param_2 == 4) {
    uVar3 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
    uVar1 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = (uint)(0x48494748 < uVar1);
    if (uVar1 < 0x48494748) {
      uVar3 = 0xffffffff;
    }
    uVar2 = 2;
    if (uVar3 != 0) {
      uVar2 = 0;
    }
    return (bool)uVar2;
  }
  if (param_2 == 6) {
    return *param_1 == 0x4944454d && (short)param_1[1] == 0x4d55;
  }
  return false;
}



/* Entry: 10ad741dc; end: 10ad74283;  */

void FUN_10ad741dc(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x10);
  plVar3 = (long *)plVar6[1];
  if (plVar3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar3 != (long *)0x0) {
      plVar4 = (long *)*plVar6;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4,plVar6 + 2);
      }
      plVar6 = plVar3 + 1;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
        return;
      }
    }
  }
  return;
}



/* Entry: 10ad74284; end: 10ad742cf;  */

void FUN_10ad74284(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x10));
    }
    if (*(long *)(lVar1 + 8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10ad742d0; end: 10ad74323;  */

void FUN_10ad742d0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10ad74324; end: 10ad74343;  */

void FUN_10ad74324(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c71dc8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad74344; end: 10ad7435b;  */

long FUN_10ad74344(long param_1)

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



/* Entry: 10ad7435c; end: 10ad743b3;  */

long FUN_10ad7435c(long param_1)

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



/* Entry: 10ad743b4; end: 10ad745b7;  */

void FUN_10ad743b4(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110c71c80;
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



/* Entry: 10ad745b8; end: 10ad745c7;  */

void FUN_10ad745b8(long param_1)

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
  ppuStack_40 = &PTR_DAT_110c71c80;
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



/* Entry: 10ad745c8; end: 10ad745ef;  */

long FUN_10ad745c8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10ad7435c(param_1 + 0x18);
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



/* Entry: 10ad745f0; end: 10ad7462f;  */

void FUN_10ad745f0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c71e08;
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



/* Entry: 10ad74630; end: 10ad74777;  */

void FUN_10ad74630(undefined8 param_1)

{
  undefined1 uStack_89;
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
  puStack_88 = &UNK_10f6aa22d;
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
  func_0x00010ad74720(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6aa243;
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
  uStack_89 = 0;
  FUN_10ad74778(param_1,&puStack_88,&uStack_89);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6aa24b;
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
  uStack_89 = 1;
  FUN_10ad74778(param_1,&puStack_88,&uStack_89);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10ad74778; end: 10ad747cf;  */

ulong FUN_10ad74778(ulong param_1,undefined8 *param_2,char *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10ad74b14(param_1,*param_2,(long)*param_3);
  }
  return param_1;
}



/* Entry: 10ad747d0; end: 10ad7491b;  */

void FUN_10ad747d0(undefined8 param_1)

{
  undefined1 uStack_89;
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
  puStack_88 = &UNK_10f6aa257;
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
  func_0x00010ad748c4(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6aa260;
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
  uStack_89 = 1;
  FUN_10ad7491c(param_1,&puStack_88,&uStack_89);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6aa265;
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
  uStack_89 = 2;
  FUN_10ad7491c(param_1,&puStack_88,&uStack_89);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10ad7491c; end: 10ad74973;  */

ulong FUN_10ad7491c(ulong param_1,undefined8 *param_2,char *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010ad74b88(param_1,*param_2,(long)*param_3);
  }
  return param_1;
}



/* Entry: 10ad74974; end: 10ad74abb;  */

void FUN_10ad74974(undefined8 param_1)

{
  undefined1 uStack_89;
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
  puStack_88 = &UNK_10f6aa26b;
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
  func_0x00010ad74a64(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6aa282;
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
  uStack_89 = 0;
  FUN_10ad74abc(param_1,&puStack_88,&uStack_89);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6aa288;
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
  uStack_89 = 1;
  FUN_10ad74abc(param_1,&puStack_88,&uStack_89);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10ad74abc; end: 10ad74b13;  */

ulong FUN_10ad74abc(ulong param_1,undefined8 *param_2,char *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010ad74bfc(param_1,*param_2,(long)*param_3);
  }
  return param_1;
}



/* Entry: 10ad74b14; end: 10ad74c6f;  */

void FUN_10ad74b14(undefined8 *param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  int aiStack_20 [2];
  undefined8 *puStack_18;
  
  if (param_1[2] != param_1[3]) {
    aiStack_20[0] = 3;
    puStack_18 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,param_2,aiStack_20);
    if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
      (**(code **)*puStack_18)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad74b88);
  (*pcVar1)();
}



/* Entry: 10ad74c70; end: 10ad7501b;  */

void FUN_10ad74c70(ulong param_1)

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
  
  FUN_10a003e74(param_1,&UNK_10f63f33c,6);
  func_0x000109887da8(appuStack_c8,&UNK_10f6aa404,0x10);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c71e20;
  pppuVar2 = (undefined8 ***)"";
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0x4ffffffff;
  uStack_88 = 0x4000000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x17a;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,4);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c71e20;
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
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,4);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ad74ffc;
    FUN_10a054dac(param_1,&DAT_10f598457,FUN_10ad753dc,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"priority",FUN_10ad754f8,FUN_10ad755b4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"origin",FUN_10ad75718,FUN_10ad757ec);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"normal",FUN_10ad758d8,FUN_10ad759ac);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6aa28d,FUN_10ad75a98,FUN_10ad75b7c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"enabled",FUN_10ad75cf4,FUN_10ad75dac);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6aa296,FUN_10ad75e84,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6aa404,0x10);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10ad74ffc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ad75000);
  (*pcVar6)();
}



/* Entry: 10ad7501c; end: 10ad75193;  */

void FUN_10ad7501c(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_88 = 0x4ffffffff;
  uStack_90 = 0x4000000064;
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6aa29f;
  pcStack_80 = "";
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x17a;
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
  puStack_a8 = &UNK_10f64c473;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  pcStack_80 = "";
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x17a;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ad75194(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f42ad2b;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  pcStack_80 = "";
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x17a;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ad75194();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f64c477;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  pcStack_80 = "";
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x17a;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ad75194();
  FUN_10a003ff4();
  return;
}



/* Entry: 10ad75194; end: 10ad7523b;  */

undefined8 * FUN_10ad75194(undefined8 *param_1,undefined8 *param_2,byte param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad7523c);
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



/* Entry: 10ad7523c; end: 10ad752bb;  */

byte FUN_10ad7523c(long param_1,undefined8 param_2)

{
  undefined8 in_x6;
  undefined8 in_x7;
  byte bVar1;
  
  if (*(char *)(param_1 + 0x41) == '\x01') {
    if ((bRam000000011330a9e8 >> 1 & 1) == 0) {
      bVar1 = 1;
    }
    else {
      func_0x00010ae06f08(1,2,&UNK_10f6aa2b8,&UNK_10f6aa2f0,0x50,&UNK_10f6aa341,in_x6,in_x7,param_2)
      ;
      bVar1 = *(byte *)(param_1 + 0x41);
    }
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 10ad752bc; end: 10ad753db;  */

void FUN_10ad752bc(float *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  float *pfVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  if ((!NAN(*param_1)) && (!NAN(param_1[1]))) {
    bVar2 = true;
    if (((ABS(param_1[2]) != INFINITY && ABS(param_1[1]) != INFINITY) && ABS(*param_1) != INFINITY)
       && (bVar2 = true, !NAN(param_1[2]))) {
      bVar2 = false;
    }
    if (!bVar2) {
      return;
    }
  }
  pfVar4 = (float *)&UNK_10f6aa37c;
  FUN_10a00946c();
  fVar16 = *pfVar4;
  if ((NAN(fVar16)) || (fVar17 = pfVar4[1], NAN(fVar17))) {
LAB_10ad753c4:
    FUN_10a00946c(&UNK_10f6aa3a5);
  }
  else {
    fVar18 = pfVar4[2];
    bVar2 = true;
    if (((ABS(fVar18) != INFINITY && ABS(fVar17) != INFINITY) && ABS(fVar16) != INFINITY) &&
       (bVar2 = true, !NAN(fVar18))) {
      bVar2 = false;
    }
    if (bVar2) goto LAB_10ad753c4;
    if (1e-06 < ABS(fVar16 * fVar16 + fVar17 * fVar17 + fVar18 * fVar18)) {
      return;
    }
  }
  plVar5 = (long *)&UNK_10f6aa3ce;
  FUN_10a00946c();
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10ad75490(plVar5,param_2);
  FUN_10a052e3c(param_4);
  *(undefined1 *)((long)plVar5 + 0x41) = 1;
  *extraout_x8 = 0;
  plVar5 = plVar6 + 0x4b;
  lVar7 = plVar6[0x59];
  uVar8 = lVar7 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar5[lVar7 + 2];
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
  lVar7 = *plVar5;
  lVar12 = plVar6[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar6[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_88 = plVar5;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar3 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar5 = lVar11;
          plVar6[0x4c] = lVar12 + uVar15 * 0x10;
          plVar6[0x4d] = lVar3 + uVar9 * 0x10;
          lStack_a8 = lVar7;
          lStack_a0 = lVar7;
          lStack_98 = lVar7;
          lStack_90 = lVar13;
          func_0x00010988c1b8(&lStack_a8);
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar6[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar6[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10ad753dc; end: 10ad7548f;  */

void FUN_10ad753dc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ad75490(param_2,param_3);
  FUN_10a052e3c(param_5);
  *(undefined1 *)((long)param_2 + 0x41) = 1;
  *param_1 = 0;
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



/* Entry: 10ad75490; end: 10ad754f7;  */

void FUN_10ad75490(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10ad7568c(plVar4,param_2);
  FUN_10a052e3c(param_4);
  *extraout_x8 = 3;
  uVar15 = NEON_ucvtf((ulong)*(byte *)(plVar4 + 3));
  *(undefined8 *)(extraout_x8 + 2) = uVar15;
  plVar4 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
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
  lVar6 = *plVar4;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_a8 = lVar6;
          lStack_a0 = lVar6;
          lStack_98 = lVar6;
          lStack_90 = lVar12;
          func_0x00010988c1b8(&lStack_a8);
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10ad754f8; end: 10ad755b3;  */

void FUN_10ad754f8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uVar14;
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
  FUN_10ad7568c(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)(param_2 + 3));
  *(undefined8 *)(param_1 + 2) = uVar14;
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



/* Entry: 10ad755b4; end: 10ad7568b;  */

void FUN_10ad755b4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
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
  FUN_10ad75490(param_2,param_3);
  FUN_10ad756f4(param_5);
  func_0x00010a068bd8(param_2,param_4);
  plVar5 = plVar4;
  FUN_10ad7523c(plVar4,"priority");
  if (((ulong)plVar5 & 1) == 0) {
    *(char *)(plVar4 + 3) = (char)param_2;
  }
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar7;
  return;
}



/* Entry: 10ad7568c; end: 10ad756f3;  */

void FUN_10ad7568c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 extraout_x8;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  lVar1 = param_1;
  func_0x000109898688();
  if (lVar1 != 0) {
    FUN_10a052c2c(param_1,lVar1);
    if (param_1 != 0) {
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar2 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar2 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar6 = 0;
  FUN_10a052ee0(1,0,puVar2);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = plVar3;
  FUN_10ad7568c(plVar3,uVar6);
  FUN_10a052e3c(param_4);
  uStack_78 = *(undefined4 *)((long)plVar5 + 0x24);
  uStack_80 = *(undefined8 *)((long)plVar5 + 0x1c);
  FUN_10a065390(extraout_x8,plVar3,&uStack_80);
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10ad756f4; end: 10ad75717;  */

void FUN_10ad756f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar1 = (long *)0x1;
  uVar4 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar2 = plVar1;
  (**(code **)(*plVar1 + 0x58))();
  if ((ulong)plVar2[0x59] < 8) {
    plVar2[plVar2[0x59] + 0x4e] = plVar2[0x5a];
    plVar2[0x59] = plVar2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar2 + 0x4b);
  }
  plVar3 = plVar1;
  FUN_10ad7568c(plVar1,uVar4);
  FUN_10a052e3c(param_4);
  uStack_58 = *(undefined4 *)((long)plVar3 + 0x24);
  uStack_60 = *(undefined8 *)((long)plVar3 + 0x1c);
  FUN_10a065390(extraout_x8,plVar1,&uStack_60);
  func_0x00010988c170(plVar2 + 0x4b);
  return;
}



/* Entry: 10ad75718; end: 10ad757eb;  */

void FUN_10ad75718(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10ad7568c(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = *(undefined4 *)((long)plVar2 + 0x24);
  uStack_50 = *(undefined8 *)((long)plVar2 + 0x1c);
  FUN_10a065390(param_1,param_2,&uStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10ad757ec; end: 10ad758d7;  */

void FUN_10ad757ec(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
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
  FUN_10ad75490(param_2,param_3);
  FUN_10a400de8(param_5);
  func_0x00010a0655d8(param_2,param_4);
  plVar5 = plVar4;
  FUN_10ad7523c(plVar4,"origin");
  if (((ulong)plVar5 & 1) == 0) {
    FUN_10ad752bc(param_2);
    lVar7 = *param_2;
    *(int *)((long)plVar4 + 0x24) = (int)param_2[1];
    *(long *)((long)plVar4 + 0x1c) = lVar7;
  }
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar7 = plVar3[0x59];
  uVar6 = lVar7 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar7 + 2];
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
  lVar7 = *plVar4;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar7;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar7 >> 3;
        if (uVar8 <= uVar6) {
          uVar8 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar7)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar7,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_88 = lVar7;
          lStack_80 = lVar7;
          lStack_78 = lVar7;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar13) {
    lVar7 = lVar7 + uVar6 * 0x10;
    while (lVar11 != lVar7) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10ad758d8; end: 10ad759ab;  */

void FUN_10ad758d8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lStack_50;
  undefined4 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10ad7568c(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = (undefined4)plVar2[6];
  lStack_50 = plVar2[5];
  FUN_10a065390(param_1,param_2,&lStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10ad759ac; end: 10ad75a97;  */

void FUN_10ad759ac(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
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
  FUN_10ad75490(param_2,param_3);
  FUN_10a400de8(param_5);
  func_0x00010a0655d8(param_2,param_4);
  plVar5 = plVar4;
  FUN_10ad7523c(plVar4,"normal");
  if (((ulong)plVar5 & 1) == 0) {
    func_0x00010ad75330(param_2);
    lVar7 = *param_2;
    *(int *)(plVar4 + 6) = (int)param_2[1];
    plVar4[5] = lVar7;
  }
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar7 = plVar3[0x59];
  uVar6 = lVar7 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar7 + 2];
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
  lVar7 = *plVar4;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar7;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar7 >> 3;
        if (uVar8 <= uVar6) {
          uVar8 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar7)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar7,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_88 = lVar7;
          lStack_80 = lVar7;
          lStack_78 = lVar7;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar13) {
    lVar7 = lVar7 + uVar6 * 0x10;
    while (lVar11 != lVar7) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10ad75a98; end: 10ad75b7b;  */

void FUN_10ad75a98(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10ad7568c(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_50 = *(undefined8 *)((long)plVar2 + 0x34);
  uStack_48 = (undefined1)*(uint *)((long)plVar2 + 0x3c);
  if ((*(uint *)((long)plVar2 + 0x3c) & 1) == 0) {
    *param_1 = 1;
  }
  else {
    FUN_10a07aef4(param_1,param_2,&uStack_50);
  }
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10ad75b7c; end: 10ad75ccf;  */

/* WARNING: Removing unreachable block (ram,0x00010ad75c54) */
/* WARNING: Removing unreachable block (ram,0x00010ad75c5c) */

void FUN_10ad75b7c(undefined4 *param_1,long *param_2,undefined8 param_3,uint *param_4,long param_5)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
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
  FUN_10ad75490(param_2,param_3);
  FUN_10ad75cd0(param_5);
  puVar1 = (uint *)&stack0xffffffffffffffb0;
  if (param_5 != 0) {
    puVar1 = param_4;
  }
  uVar2 = *puVar1;
  if (1 < uVar2) {
    FUN_10a05a42c();
    lVar13 = *param_2;
  }
  else {
    lVar13 = 0;
  }
  plVar7 = plVar6;
  FUN_10ad7523c(plVar6,&UNK_10f6aa28d);
  if (((ulong)plVar7 & 1) == 0) {
    *(long *)((long)plVar6 + 0x34) = lVar13;
    *(bool *)((long)plVar6 + 0x3c) = 1 < uVar2;
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar13 = plVar5[0x59];
  uVar8 = lVar13 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar6[lVar13 + 2];
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  lVar13 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar13;
  uVar15 = lVar10 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - lVar12 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar13 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar13)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar16 * 0x10);
          lVar11 = lVar12 + uVar15 * -0x10;
          _memcpy(lVar11,lVar13,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar16 * 0x10;
          plVar5[0x4d] = lVar4 + uVar9 * 0x10;
          lStack_88 = lVar13;
          lStack_80 = lVar13;
          lStack_78 = lVar13;
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar16 * 0x10);
    plVar5[0x4c] = lVar12 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar13 = lVar13 + uVar8 * 0x10;
    while (lVar12 != lVar13) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar13;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10ad75cd0; end: 10ad75cf3;  */

void FUN_10ad75cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((uint)param_1 < 2) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar5 = 1;
  FUN_10a052ee0(1,1,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10ad7568c(plVar3,uVar5);
  FUN_10a052e3c(param_4);
  lVar6 = plVar3[8];
  *extraout_x8 = 2;
  *(char *)(extraout_x8 + 2) = (char)lVar6;
  plVar3 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar3[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar3;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar3 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_98 = lVar6;
          lStack_90 = lVar6;
          lStack_88 = lVar6;
          lStack_80 = lVar12;
          func_0x00010988c1b8(&lStack_98);
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10ad75cf4; end: 10ad75dab;  */

void FUN_10ad75cf4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ad7568c(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[8];
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)lVar5;
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



/* Entry: 10ad75dac; end: 10ad75e83;  */

void FUN_10ad75dac(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
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
  FUN_10ad75490(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  plVar5 = plVar4;
  FUN_10ad7523c(plVar4,"enabled");
  if (((ulong)plVar5 & 1) == 0) {
    *(char *)(plVar4 + 8) = (char)param_2;
  }
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar7;
  return;
}



/* Entry: 10ad75e84; end: 10ad75f3b;  */

void FUN_10ad75e84(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
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
  FUN_10ad7568c(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(undefined1 *)((long)param_2 + 0x41);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
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
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10ad75f3c; end: 10ad76207;  */

void FUN_10ad75f3c(ulong param_1)

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
  
  FUN_10a003e74(param_1,&UNK_10f63f33c,6);
  func_0x000109887da8(appuStack_d8,&DAT_10f2f6c48,0xb);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c71e38;
  pppuVar2 = (undefined8 ***)&UNK_10f6aa415;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0x4ffffffff;
  uStack_98 = 0x4000000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_68 = 0x175;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,4);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c71e38;
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
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&DAT_10f2f6c48,0xb);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&DAT_10f2f6c48;
    uStack_90 = 0x4ffffffff;
    uStack_98 = 0x4000000064;
    puStack_88 = &UNK_10f6aa415;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_78 = &UNK_10f6aa415;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,4);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ad761e8;
      FUN_10a054dac(param_1,&UNK_10f6aa416,FUN_10ad763dc,0,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,4);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ad761e8;
      FUN_10a054dac(param_1,&UNK_10f6aa425,FUN_10ad76470,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    func_0x00010a004064(param_1);
    return;
  }
LAB_10ad761e8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ad761ec);
  (*pcVar6)();
}



/* Entry: 10ad76208; end: 10ad7632b;  */

void FUN_10ad76208(undefined8 param_1)

{
  undefined1 uStack_a9;
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
  puStack_a8 = &UNK_10f6aa434;
  uStack_88 = 0x4ffffffff;
  uStack_90 = 0x4000000064;
  puStack_80 = &UNK_10f6aa415;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ad7632c(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6aa440;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6aa415;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 0;
  FUN_10ad76384(param_1,&puStack_a8,&uStack_a9);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6aa447;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6aa415;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 1;
  FUN_10ad76384(param_1,&puStack_a8,&uStack_a9);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10ad7632c; end: 10ad76383;  */

ulong FUN_10ad7632c(ulong param_1,undefined8 *param_2)

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



/* Entry: 10ad76384; end: 10ad763db;  */

ulong FUN_10ad76384(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10ad76504(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10ad763dc; end: 10ad7646f;  */

void FUN_10ad763dc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)param_2[0x59] < 8) {
    param_2[param_2[0x59] + 0x4e] = param_2[0x5a];
    param_2[0x59] = param_2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(param_2 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = 0;
  plVar1 = param_2 + 0x4b;
  lVar4 = param_2[0x59];
  uVar5 = lVar4 - 1;
  param_2[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar4 + 2];
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(param_2[0x57] + -8);
    param_2[0x57] = param_2[0x57] + -8;
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  lVar4 = *plVar1;
  lVar9 = param_2[0x4c];
  lVar7 = lVar9 - lVar4;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = param_2[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar4 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar4)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar4,lVar7);
          *plVar1 = lVar8;
          param_2[0x4c] = lVar9 + uVar12 * 0x10;
          param_2[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar4;
          lStack_80 = lVar4;
          lStack_78 = lVar4;
          lStack_70 = lVar10;
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
    _bzero(lVar9,uVar12 * 0x10);
    param_2[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar4 = lVar4 + uVar5 * 0x10;
    while (lVar9 != lVar4) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    param_2[0x4c] = lVar4;
  }
code_r0x00010988c138:
  param_2[0x5a] = uVar5;
  return;
}



/* Entry: 10ad76470; end: 10ad76503;  */

void FUN_10ad76470(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)param_2[0x59] < 8) {
    param_2[param_2[0x59] + 0x4e] = param_2[0x5a];
    param_2[0x59] = param_2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(param_2 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = 0;
  plVar1 = param_2 + 0x4b;
  lVar4 = param_2[0x59];
  uVar5 = lVar4 - 1;
  param_2[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar4 + 2];
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(param_2[0x57] + -8);
    param_2[0x57] = param_2[0x57] + -8;
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  lVar4 = *plVar1;
  lVar9 = param_2[0x4c];
  lVar7 = lVar9 - lVar4;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = param_2[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar4 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar4)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar4,lVar7);
          *plVar1 = lVar8;
          param_2[0x4c] = lVar9 + uVar12 * 0x10;
          param_2[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar4;
          lStack_80 = lVar4;
          lStack_78 = lVar4;
          lStack_70 = lVar10;
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
    _bzero(lVar9,uVar12 * 0x10);
    param_2[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar4 = lVar4 + uVar5 * 0x10;
    while (lVar9 != lVar4) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    param_2[0x4c] = lVar4;
  }
code_r0x00010988c138:
  param_2[0x5a] = uVar5;
  return;
}



/* Entry: 10ad76504; end: 10ad76577;  */

void FUN_10ad76504(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  code *pcVar1;
  int aiStack_20 [2];
  undefined8 *puStack_18;
  
  if (param_1[2] != param_1[3]) {
    aiStack_20[0] = 3;
    puStack_18 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,param_2,aiStack_20);
    if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
      (**(code **)*puStack_18)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad76578);
  (*pcVar1)();
}



/* Entry: 10ad76578; end: 10ad7678f;  */

/* WARNING: Removing unreachable block (ram,0x00010a1517cc) */
/* WARNING: Removing unreachable block (ram,0x00010a151998) */
/* WARNING: Removing unreachable block (ram,0x00010a1517d0) */
/* WARNING: Removing unreachable block (ram,0x00010a1517dc) */
/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_10ad76578(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *******pppppppuVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *******pppppppuVar15;
  undefined8 ******ppppppuVar16;
  long lVar17;
  undefined1 *puVar18;
  undefined8 ******ppppppuVar19;
  undefined8 auStack_188 [2];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 *******pppppppuStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  char cStack_121;
  undefined8 *******pppppppuStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_100;
  long *plStack_f8;
  undefined1 auStack_f0 [8];
  undefined8 *apuStack_e8 [7];
  undefined1 auStack_b0 [48];
  undefined8 uStack_80;
  undefined7 uStack_78;
  undefined4 uStack_71;
  undefined1 uStack_6d;
  char cStack_69;
  undefined8 *******pppppppuStack_68;
  long in_stack_ffffffffffffffa8;
  
  uVar2 = param_1[1];
  puVar14 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar14 = param_1;
  }
  func_0x00010a1512bc(puVar14,uVar2);
  if ((int)puVar14 == 0) {
    puVar14 = param_1;
    FUN_10ad015f0(param_1,0x4000);
    if ((int)puVar14 == 0) {
      return (undefined1 *)0x0;
    }
    uVar2 = param_1[1];
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
    }
    FUN_10a003c90(&pppppppuStack_68,uVar2 + 1,&uStack_80);
    pppppppuVar15 = pppppppuStack_68;
    if (-1 < in_stack_ffffffffffffffa8) {
      pppppppuVar15 = &pppppppuStack_68;
    }
    if (uVar2 != 0) {
      puVar14 = (undefined8 *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        puVar14 = param_1;
      }
      _memmove(pppppppuVar15,puVar14,uVar2);
    }
    *(undefined2 *)((long)pppppppuVar15 + uVar2) = 0x2f;
    cStack_69 = '\x13';
    uStack_78 = 0x61746164617465;
    uStack_71 = 0x6e69622e;
    uStack_80 = 0x6d5f6c6d70616e73;
    uStack_6d = 0;
    pppppppuVar15 = &pppppppuStack_68;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppuVar15,&uStack_80,0x13);
    ppppppuVar19 = *pppppppuVar15;
    ppppppuVar16 = pppppppuVar15[2];
    pppppppuVar15[1] = (undefined8 ******)0x0;
    pppppppuVar15[2] = (undefined8 ******)0x0;
    *pppppppuVar15 = (undefined8 ******)0x0;
    puVar18 = &stack0xffffffffffffffb0;
    FUN_10ad015f0(puVar18,0x8000);
    if ((long)ppppppuVar16 < 0) {
      __ZdlPv(ppppppuVar19);
    }
    if (cStack_69 < '\0') {
      __ZdlPv(uStack_80);
    }
    if (in_stack_ffffffffffffffa8 < 0) {
      __ZdlPv(pppppppuStack_68);
      return puVar18;
    }
    return puVar18;
  }
  uVar2 = param_1[1];
  puVar14 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar14 = param_1;
  }
  FUN_10a151520(puVar14,uVar2);
  if ((int)puVar14 == 0) {
    return (undefined1 *)0x0;
  }
  uVar2 = param_1[1];
  puVar14 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar14 = param_1;
  }
  FUN_10a1515a8(puVar14,uVar2);
  if ((uint)puVar14 < 3) {
    return (undefined1 *)0x0;
  }
  uVar2 = param_1[1];
  puVar14 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar14 = param_1;
  }
  pppppppuStack_68 = *(undefined8 ********)PTR____stack_chk_guard_11034bdc0;
  FUN_10a1538ec(auStack_b0);
  iVar9 = (int)auStack_b0;
  func_0x0001092bcfc4();
  if (iVar9 != 0) {
    uVar10 = (uint)auStack_b0;
    func_0x0001092bd0ac();
    if (2 < uVar10) {
      FUN_10a1535d4(&puStack_100);
      puVar3 = puStack_100;
      puVar11 = puVar14;
      func_0x00010a1512bc(puVar14,uVar2);
      if ((int)puVar11 == 0) {
        if (uVar2 < 0x7ffffffffffffff8) {
          if (uVar2 < 0x17) {
            uStack_110 = CONCAT17((char)uVar2,(undefined7)uStack_110);
            pppppppuVar12 = &pppppppuStack_120;
            if (uVar2 != 0) goto LAB_10a151730;
          }
          else {
            pppppppuVar15 = (undefined8 *******)0x19;
            if ((uVar2 | 7) != 0x17) {
              pppppppuVar15 = (undefined8 *******)((uVar2 | 7) + 1);
            }
            pppppppuVar12 = pppppppuVar15;
            __Znwm();
            uStack_110 = (ulong)pppppppuVar15 | 0x8000000000000000;
            pppppppuStack_120 = pppppppuVar12;
            uStack_118 = uVar2;
LAB_10a151730:
            _memmove(pppppppuVar12,puVar14,uVar2);
          }
          *(undefined1 *)((long)pppppppuVar12 + uVar2) = 0;
          goto LAB_10a151744;
        }
      }
      else {
        FUN_10a1513b8(&pppppppuStack_150,puVar14,uVar2);
        uStack_118 = uStack_148;
        pppppppuStack_120 = pppppppuStack_150;
        uStack_110 = uStack_140;
        uStack_148 = 0;
        uStack_140 = 0;
        pppppppuStack_150 = (undefined8 *******)0x0;
LAB_10a151744:
        FUN_10ad03f74(auStack_f0);
        func_0x0001092bd244(puVar3,&pppppppuStack_120,auStack_f0,0);
        (*(code *)*apuStack_e8[0])(apuStack_e8);
        if ((long)uStack_110 < 0) {
          __ZdlPv(pppppppuStack_120);
        }
        if ((int)puVar11 != 0) {
          if (cStack_121 < '\0') {
            __ZdlPv(uStack_138);
          }
          if ((long)uStack_140 < 0) {
            __ZdlPv(pppppppuStack_150);
          }
        }
        uStack_178 = CONCAT17(0x13,(undefined7)uStack_178);
        _memmove(auStack_188,&UNK_10f5acdfe,0x13);
        puVar14 = auStack_188;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (puVar14,0,"/",1);
        uStack_168 = puVar14[1];
        uStack_170 = *puVar14;
        lStack_160 = puVar14[2];
        puVar14[1] = 0;
        puVar14[2] = 0;
        *puVar14 = 0;
        FUN_10ad03508(&pppppppuStack_120,&uStack_170);
        if (lStack_160 < 0) {
          __ZdlPv(uStack_170);
        }
        if (uStack_178 < 0) {
          __ZdlPv(auStack_188[0]);
        }
        func_0x0001092bce90(puStack_100);
        plVar13 = (long *)*puStack_100;
        (**(code **)(*plVar13 + 0x50))();
        uVar2 = uStack_110;
        puVar14 = (undefined8 *)*plVar13;
        puVar3 = (undefined8 *)plVar13[1];
        if (puVar14 != puVar3) {
          uVar7 = uStack_118;
          pppppppuVar15 = pppppppuStack_120;
          if (-1 < (long)uStack_110) {
            uVar7 = uStack_110 >> 0x38;
            pppppppuVar15 = &pppppppuStack_120;
          }
          do {
            bVar4 = *(byte *)((long)puVar14 + 0x17);
            uVar1 = puVar14[1];
            if (-1 < (char)bVar4) {
              uVar1 = (ulong)bVar4;
            }
            if (uVar1 == uVar7) {
              puVar11 = (undefined8 *)*puVar14;
              if (-1 < (char)bVar4) {
                puVar11 = puVar14;
              }
              _memcmp(puVar11,pppppppuVar15,uVar7);
              if ((int)puVar11 == 0) {
                puVar18 = (undefined1 *)0x1;
                goto joined_r0x00010a151980;
              }
            }
            puVar14 = puVar14 + 5;
          } while (puVar14 != puVar3);
        }
        puVar18 = (undefined1 *)0x0;
joined_r0x00010a151980:
        if ((long)uVar2 < 0) {
          __ZdlPv(pppppppuStack_120);
        }
        if (plStack_f8 != (long *)0x0) {
          plVar13 = plStack_f8 + 1;
          do {
            lVar17 = *plVar13;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = lVar17 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
          }
        }
        FUN_10a09a0e4(auStack_b0);
        if ((undefined8 *******)*(undefined8 *******)PTR____stack_chk_guard_11034bdc0 ==
            pppppppuStack_68) {
          return puVar18;
        }
        ___stack_chk_fail();
      }
      func_0x000109ffde50();
      goto LAB_10a1519a8;
    }
  }
  FUN_10a00946c(&UNK_10f63ef4b);
LAB_10a1519a8:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a1519ac);
  (*pcVar8)();
}



/* Entry: 10ad76790; end: 10ad7685b;  */

undefined8 * FUN_10ad76790(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110c71e60;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = uVar2;
    param_1[1] = uVar1;
  }
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[5] = 0;
  FUN_10ad7685c(param_1,param_3);
  return param_1;
}



/* Entry: 10ad7685c; end: 10ad76ab7;  */

undefined *** FUN_10ad7685c(long param_1,char param_2,undefined ***param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined ****ppppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined ***pppuVar11;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined1 auStack_130 [8];
  long *plStack_128;
  undefined ***pppuStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined ***pppuStack_c0;
  long *plStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined ***pppuStack_90;
  undefined ***pppuStack_88;
  byte bStack_79;
  code *pcStack_78;
  undefined **appuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar8 = (undefined ***)(param_1 + 8);
  ppppuVar5 = (undefined ****)(long)*(char *)(param_1 + 0x1f);
  pppuVar4 = pppuVar8;
  if ((long)ppppuVar5 < 0) {
    ppppuVar5 = *(undefined *****)(param_1 + 0x10);
    pppuVar4 = *(undefined ****)(param_1 + 8);
  }
  func_0x00010a1512bc();
  if ((int)pppuVar4 != 0) {
    if (param_2 == '\x01') {
      if (*(char *)(param_1 + 0x1f) < '\0') {
        func_0x000107c3192c(&ppuStack_b0,*(undefined8 *)(param_1 + 8),
                            *(undefined8 *)(param_1 + 0x10));
      }
      else {
        uStack_a8 = *(undefined8 *)(param_1 + 0x10);
        ppuStack_b0 = *pppuVar8;
        lStack_a0 = *(long *)(param_1 + 0x18);
      }
      FUN_10ad03508(&pppuStack_90,&ppuStack_b0);
      if (lStack_a0 < 0) {
        __ZdlPv(ppuStack_b0);
      }
      func_0x00010a151214();
      param_3 = pppuStack_88;
      if (-1 < (char)bStack_79) {
        param_3 = (undefined ***)(ulong)bStack_79;
      }
      pcStack_78 = FUN_10ad771ac;
      appuStack_70[0] = &PTR_FUN_110c71eb8;
      FUN_10a150300(&pppuStack_c0);
      ppppuVar5 = &pppuStack_c0;
      FUN_10a152118(param_1 + 0x20);
      if (plStack_b8 != (long *)0x0) {
        plVar1 = plStack_b8 + 1;
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
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
        }
      }
      pppuVar4 = appuStack_70;
      (*(code *)*appuStack_70[0])();
      if (-1 < (char)bStack_79) goto LAB_10ad76a28;
    }
    else {
      if (*(char *)(param_1 + 0x1f) < '\0') {
        param_3 = *(undefined ****)(param_1 + 0x10);
        func_0x000107c3192c(&pppuStack_e0,*(undefined8 *)(param_1 + 8));
      }
      else {
        uStack_d8 = *(undefined8 *)(param_1 + 0x10);
        pppuStack_e0 = (undefined ***)*pppuVar8;
        lStack_d0 = *(long *)(param_1 + 0x18);
      }
      FUN_10ad0279c(&pppuStack_90,&pppuStack_e0);
      pppuVar4 = (undefined ***)(param_1 + 0x20);
      ppppuVar5 = &pppuStack_90;
      FUN_10a152118();
      if (pppuStack_88 != (undefined ***)0x0) {
        pppuVar8 = pppuStack_88 + 1;
        do {
          ppuVar6 = *pppuVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar3) {
            *pppuVar8 = (undefined **)((long)ppuVar6 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppuVar6 == (undefined **)0x0) {
          (*(code *)(*pppuStack_88)[2])(pppuStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar4 = pppuStack_88;
        }
      }
      pppuStack_90 = pppuStack_e0;
      if (-1 < lStack_d0) goto LAB_10ad76a28;
    }
    __ZdlPv();
    pppuVar4 = pppuStack_90;
  }
LAB_10ad76a28:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pppuVar8 = pppuVar4 + 1;
  *pppuVar4 = &PTR_FUN_110c71e60;
  if (*(char *)((long)ppppuVar5 + 0x17) < '\0') {
    func_0x000107c3192c(pppuVar8,*ppppuVar5,ppppuVar5[1]);
  }
  else {
    pppuVar11 = ppppuVar5[1];
    pppuVar9 = *ppppuVar5;
    pppuVar4[3] = (undefined **)ppppuVar5[2];
    pppuVar4[2] = (undefined **)pppuVar11;
    *pppuVar8 = (undefined **)pppuVar9;
  }
  pppuVar4[4] = (undefined **)0x0;
  pppuVar4[5] = (undefined **)0x0;
  ppuVar6 = param_3[1];
  ppuVar10 = *param_3;
  pppuVar4[7] = param_3[1];
  pppuVar4[6] = ppuVar10;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar6 = ppuVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
      if (bVar3) {
        *ppuVar6 = *ppuVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(pppuVar4 + 8) = 1;
  if (*(char *)((long)pppuVar4 + 0x1f) < '\0') {
    func_0x000107c3192c(&ppuStack_150,pppuVar4[1],pppuVar4[2]);
  }
  else {
    ppuStack_148 = pppuVar4[2];
    ppuStack_150 = *pppuVar8;
    ppuStack_140 = pppuVar4[3];
  }
  FUN_10ad0279c(auStack_130,&ppuStack_150);
  FUN_10a152118(pppuVar4 + 4,auStack_130);
  if (plStack_128 != (long *)0x0) {
    plVar1 = plStack_128 + 1;
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
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_128);
    }
  }
  if ((long)ppuStack_140 < 0) {
    __ZdlPv(ppuStack_150);
  }
  return pppuVar4;
}



/* Entry: 10ad76ab8; end: 10ad76c43;  */

undefined8 * FUN_10ad76ab8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  puVar5 = param_1 + 1;
  *param_1 = &PTR_FUN_110c71e60;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar5,*param_2,param_2[1]);
  }
  else {
    uVar7 = param_2[1];
    uVar6 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = uVar7;
    *puVar5 = uVar6;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  lVar4 = param_3[1];
  uVar6 = *param_3;
  param_1[7] = param_3[1];
  param_1[6] = uVar6;
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
  *(undefined1 *)(param_1 + 8) = 1;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    func_0x000107c3192c(&uStack_70,param_1[1],param_1[2]);
  }
  else {
    uStack_68 = param_1[2];
    uStack_70 = *puVar5;
    lStack_60 = param_1[3];
  }
  FUN_10ad0279c(auStack_50,&uStack_70);
  FUN_10a152118(param_1 + 4,auStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  if (lStack_60 < 0) {
    __ZdlPv(uStack_70);
  }
  return param_1;
}



/* Entry: 10ad76c44; end: 10ad76c53;  */

long FUN_10ad76c44(long param_1)

{
  return param_1 + 8;
}



/* Entry: 10ad76c54; end: 10ad76e2b;  */

void FUN_10ad76c54(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_b0 [24];
  undefined8 **appuStack_98 [2];
  char cStack_81;
  byte bStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  
  uVar2 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  if (uVar2 == 0) {
    func_0x000105688514(&UNK_10f6aa44d);
  }
  else {
    uVar2 = *(ulong *)(param_2 + 0x10);
    if (-1 < (char)*(byte *)(param_2 + 0x1f)) {
      uVar2 = (ulong)*(byte *)(param_2 + 0x1f);
    }
    FUN_10a003c90(appuStack_98,uVar2 + 1,auStack_b0);
    pppuVar4 = (undefined8 ***)appuStack_98[0];
    if (-1 < cStack_81) {
      pppuVar4 = appuStack_98;
    }
    if (uVar2 != 0) {
      puVar1 = *(undefined8 **)(param_2 + 8);
      if (-1 < *(char *)(param_2 + 0x1f)) {
        puVar1 = (undefined8 *)(param_2 + 8);
      }
      _memmove(pppuVar4,puVar1,uVar2);
    }
    *(undefined2 *)((long)pppuVar4 + uVar2) = 0x2f;
    uVar2 = param_3[1];
    puVar1 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar1 = param_3;
    }
    pppuVar4 = appuStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppuVar4,puVar1,uVar2);
    puStack_58 = pppuVar4[1];
    puStack_60 = *pppuVar4;
    puStack_50 = pppuVar4[2];
    pppuVar4[1] = (undefined8 **)0x0;
    pppuVar4[2] = (undefined8 **)0x0;
    *pppuVar4 = (undefined8 **)0x0;
    if (cStack_81 < '\0') {
      __ZdlPv(appuStack_98[0]);
    }
    FUN_10a0f1b8c(appuStack_98,&puStack_60,0);
    if ((bStack_68 & 1) != 0) {
      FUN_10a0f1f4c(param_1,appuStack_98);
      if (bStack_68 == 1) {
        FUN_10a0f1ea0(appuStack_98);
      }
      if ((long)puStack_50 < 0) {
        __ZdlPv(puStack_60);
      }
      return;
    }
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_b0,&UNK_10f6aa48a,&puStack_60);
  FUN_10a0029c0(auStack_b0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad76dc4);
  (*pcVar3)();
}



/* Entry: 10ad76e2c; end: 10ad770fb;  */

void FUN_10ad76e2c(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 **appuStack_98 [2];
  char cStack_81;
  undefined8 uStack_80;
  char cStack_69;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined1 uStack_41;
  
  if ((*(byte *)(param_2 + 0x40) & 1) != 0) {
LAB_10ad77034:
    *param_1 = 0x10a8da7d0;
    param_1[1] = &PTR_DAT_110c2bdf0;
    lVar9 = *(long *)(param_2 + 0x38);
    uVar10 = *(undefined8 *)(param_2 + 0x30);
    param_1[3] = *(undefined8 *)(param_2 + 0x38);
    param_1[2] = uVar10;
    if (lVar9 != 0) {
      plVar7 = (long *)(lVar9 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = *plVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    return;
  }
  uVar6 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar6 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  if (uVar6 == 0) {
    if (*(char *)(param_2 + 0x1f) < '\0') {
      func_0x000107c3192c(&puStack_60,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    }
    else {
      puStack_58 = *(undefined8 **)(param_2 + 0x10);
      puStack_60 = *(undefined8 **)(param_2 + 8);
      puStack_50 = *(undefined8 **)(param_2 + 0x18);
    }
  }
  else {
    uVar6 = *(ulong *)(param_2 + 0x10);
    if (-1 < (char)*(byte *)(param_2 + 0x1f)) {
      uVar6 = (ulong)*(byte *)(param_2 + 0x1f);
    }
    FUN_10a003c90(appuStack_98,uVar6 + 1,&plStack_a8);
    pppuVar5 = (undefined8 ***)appuStack_98[0];
    if (-1 < cStack_81) {
      pppuVar5 = appuStack_98;
    }
    if (uVar6 != 0) {
      plVar7 = (long *)*(long *)(param_2 + 8);
      if (-1 < *(char *)(param_2 + 0x1f)) {
        plVar7 = (long *)(param_2 + 8);
      }
      _memmove(pppuVar5,plVar7,uVar6);
    }
    *(undefined2 *)((long)pppuVar5 + uVar6) = 0x2f;
    uVar6 = param_3[1];
    puVar3 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar6 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar3 = param_3;
    }
    pppuVar5 = appuStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppuVar5,puVar3,uVar6);
    puStack_58 = pppuVar5[1];
    puStack_60 = *pppuVar5;
    puStack_50 = pppuVar5[2];
    pppuVar5[1] = (undefined8 **)0x0;
    pppuVar5[2] = (undefined8 **)0x0;
    *pppuVar5 = (undefined8 **)0x0;
    if (cStack_81 < '\0') {
      __ZdlPv(appuStack_98[0]);
    }
  }
  uVar6 = 0;
  FUN_10ad02150();
  if ((uVar6 & 1) == 0) {
    func_0x000105688514(&UNK_10f6810c2);
  }
  else {
    FUN_10a0ff18c(appuStack_98,&puStack_60,2);
    plVar7 = (long *)0x68;
    __Znwm();
    plVar7[1] = 0;
    plVar7[2] = 0;
    plVar8 = plVar7 + 3;
    *plVar7 = (long)&PTR_DAT_110c71ee8;
    FUN_10aaea2c8(plVar8,appuStack_98);
    plStack_a8 = plVar8;
    plStack_a0 = plVar7;
    if (*(char *)(param_2 + 0x40) == '\x01') {
      FUN_10ad77c04(param_2 + 0x30);
      *(undefined1 *)(param_2 + 0x40) = 0;
    }
    FUN_10ad779e0(param_2 + 0x30,&uStack_41,&plStack_a8,param_4);
    plVar7 = plStack_a0;
    *(undefined1 *)(param_2 + 0x40) = 1;
    if (plStack_a0 != (long *)0x0) {
      plVar8 = plStack_a0 + 1;
      do {
        lVar9 = *plVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (cStack_69 < '\0') {
      __ZdlPv(uStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(appuStack_98[0]);
    }
    if ((long)puStack_50 < 0) {
      __ZdlPv(puStack_60);
    }
    if ((*(byte *)(param_2 + 0x40) & 1) != 0) goto LAB_10ad77034;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad77094);
  (*pcVar4)();
}



/* Entry: 10ad770fc; end: 10ad771ab;  */

undefined8 * FUN_10ad770fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c71e60;
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_10ad77c04(param_1 + 6);
  }
  FUN_10a15206c(param_1 + 4);
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 10ad771ac; end: 10ad77263;  */

undefined8 ** FUN_10ad771ac(undefined8 **param_1,undefined8 param_2)

{
  undefined8 **ppuVar1;
  code *pcStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10ad03f74(&pcStack_78);
  (*pcStack_78)(param_1,param_2,&pcStack_78);
  ppuVar1 = apuStack_70;
  (*(code *)*apuStack_70[0])(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_70[0])(apuStack_70);
  __Unwind_Resume(ppuVar1);
  return ppuVar1;
}



/* Entry: 10ad77264; end: 10ad77297;  */

void FUN_10ad77264(void)

{
  return;
}



/* Entry: 10ad77298; end: 10ad772b7;  */

void FUN_10ad77298(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c71ee8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad772b8; end: 10ad772c3;  */

char * FUN_10ad772b8(long param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10a08d2e0(auStack_38,param_1 + 0x20);
    FUN_10ad00b0c(auStack_38);
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  FUN_10a15206c(param_1 + 0x58);
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  return (char *)(param_1 + 0x18);
}



/* Entry: 10ad772c4; end: 10ad7739b;  */

void FUN_10ad772c4(long param_1,long param_2)

{
  ulong uVar1;
  long ******pppppplVar2;
  long lVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  char cVar7;
  bool bVar8;
  long *****ppppplVar9;
  code *pcVar10;
  int iVar11;
  undefined *puVar12;
  long lVar13;
  long ****pppplVar14;
  undefined8 *puVar15;
  undefined8 ******ppppppuVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *extraout_x8;
  long *plVar20;
  uint uVar21;
  undefined8 *****pppppuStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 *****pppppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  long *****ppppplStack_c0;
  long lStack_b8;
  undefined7 uStack_b0;
  char cStack_a9;
  undefined8 *****pppppuStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  char cStack_79;
  long lStack_30;
  long lStack_28;
  
  plVar19 = &lStack_30;
  lStack_30 = param_1;
  lStack_28 = param_2;
  if (param_2 == 0) {
LAB_10ad77378:
    FUN_10a00946c(&UNK_10f6aa49d);
LAB_10ad77384:
    FUN_10a00946c(&UNK_10f6aa4c0);
  }
  else {
    lVar13 = param_1;
    _memchr(param_1,0,param_2);
    if ((lVar13 != 0) && (lVar13 - param_1 != -1)) goto LAB_10ad77384;
    lVar13 = param_1;
    _memchr(param_1,0x2f,param_2);
    if (((lVar13 != 0) && (lVar13 - param_1 != -1)) ||
       ((lVar13 = param_1, _memchr(param_1,0x5c,param_2), lVar13 != 0 && (lVar13 - param_1 != -1))))
    {
      FUN_10a00946c(&UNK_10f6aa4ec);
      goto LAB_10ad77378;
    }
    FUN_10a166af4(&lStack_30,&UNK_10f6aa51e,0);
    if (plVar19 == (long *)0xffffffffffffffff) {
      return;
    }
  }
  puVar12 = &UNK_10f6aa521;
  FUN_10a00946c();
  if ((puVar12[0xa0] & 1) != 0) goto LAB_10ad77644;
  __ZNSt3__15mutex4lockEv(puVar12);
  if ((puVar12[0xa0] & 1) == 0) {
    lVar13 = *(long *)(puVar12 + 0x40);
    if ((puVar12[0x8b] == '\x01') && (*(long *)(lVar13 + 0x40) != 0)) {
      if (puVar12[0x80] == '\x01') {
        puVar18 = (undefined8 *)(puVar12 + 0x68);
        lVar13 = (long)(char)puVar12[0x7f];
        puVar15 = puVar18;
        if (lVar13 < 0) {
          lVar13 = *(long *)(puVar12 + 0x70);
          puVar15 = *(undefined8 **)(puVar12 + 0x68);
        }
        FUN_10ad772c4(puVar15,lVar13);
        if ((puVar12[0x80] & 1) == 0) {
LAB_10ad77920:
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10ad77924);
          (*pcVar10)();
        }
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (&ppppplStack_c0,"/",puVar18);
        FUN_10a107e2c(&pppppuStack_a8,&ppppplStack_c0,puVar12 + 0x50,0);
        if (cStack_a9 < '\0') {
          __ZdlPv(ppppplStack_c0);
        }
        FUN_10a08d2e0(&ppppplStack_c0,&pppppuStack_a8);
        iVar11 = (int)&ppppplStack_c0;
        FUN_10ad02150();
        if (iVar11 != 0) {
          FUN_109d143fc(&ppppplStack_c0);
          __ZNSt3__19to_stringEy(&pppppuStack_d8);
          if ((puVar12[0x80] & 1) == 0) goto LAB_10ad77920;
          uVar21 = (uint)(char)bStack_c1;
          if (-1 < (int)uVar21) {
            uStack_d0 = (ulong)bStack_c1;
          }
          bVar4 = puVar12[0x7f];
          uVar1 = *(ulong *)(puVar12 + 0x70);
          if (-1 < (char)bVar4) {
            uVar1 = (ulong)bVar4;
          }
          if (uStack_d0 == uVar1) {
            ppppppuVar16 = (undefined8 ******)pppppuStack_d8;
            if (-1 < (int)uVar21) {
              ppppppuVar16 = &pppppuStack_d8;
            }
            puVar15 = (undefined8 *)*puVar18;
            if (-1 < (char)bVar4) {
              puVar15 = puVar18;
            }
            _memcmp(ppppppuVar16,puVar15);
            if ((int)ppppppuVar16 != 0) goto LAB_10ad775d8;
          }
          else {
LAB_10ad775d8:
            FUN_10ad00b0c(&ppppplStack_c0);
            uVar21 = (uint)bStack_c1;
          }
          if ((uVar21 >> 7 & 1) != 0) {
            __ZdlPv(pppppuStack_d8);
          }
        }
        FUN_10ac5a2dc(*(undefined8 *)(puVar12 + 0x40),&pppppuStack_a8,0);
        if (cStack_a9 < '\0') {
          __ZdlPv(ppppplStack_c0);
        }
        if (cStack_79 < '\0') {
          __ZdlPv(uStack_90);
        }
      }
      else {
        FUN_10ac5a188(&pppppuStack_a8,lVar13,1);
      }
      if (lStack_98 < 0) {
        __ZdlPv(pppppuStack_a8);
      }
    }
    else {
      FUN_10a08d2e0(&pppppuStack_a8,lVar13 + 8);
      ppppppuVar16 = (undefined8 ******)pppppuStack_a8;
      if (-1 < lStack_98) {
        ppppppuVar16 = &pppppuStack_a8;
      }
      FUN_10ad040c0(&ppppplStack_c0,ppppppuVar16,&UNK_10f432965);
      ppppplVar9 = ppppplStack_c0;
      if ((long ******)ppppplStack_c0 == (long ******)0x0) {
        puVar18 = (undefined8 *)0x0;
      }
      else {
        puVar18 = (undefined8 *)0x20;
        __Znwm();
        *puVar18 = &PTR_DAT_110c71fe8;
        puVar18[1] = 0;
        puVar18[2] = 0;
        puVar18[3] = ppppplStack_c0;
      }
      ppppplStack_c0 = (long *****)0x0;
      plVar19 = *(long **)(puVar12 + 0x98);
      *(long ******)(puVar12 + 0x90) = ppppplVar9;
      *(undefined8 **)(puVar12 + 0x98) = puVar18;
      if (plVar19 != (long *)0x0) {
        plVar20 = plVar19 + 1;
        do {
          lVar13 = *plVar20;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar8) {
            *plVar20 = lVar13 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
        }
      }
      ppppplVar9 = ppppplStack_c0;
      ppppplStack_c0 = (long *****)0x0;
      if (ppppplVar9 != (long *****)0x0) {
        pppplVar14 = *ppppplVar9;
        *ppppplVar9 = (long ****)0x0;
        if (pppplVar14 != (long ****)0x0) {
          (*(code *)(*pppplVar14)[8])();
        }
        __ZdlPv(ppppplVar9);
      }
      if (lStack_98 < 0) {
        __ZdlPv(pppppuStack_a8);
      }
      if (*(long *)(puVar12 + 0x90) == 0) {
        func_0x000105688514(&UNK_10f6aa548);
        goto LAB_10ad77920;
      }
    }
    puVar12[0xa0] = 1;
  }
  __ZNSt3__15mutex6unlockEv(puVar12);
LAB_10ad77644:
  if (puVar12[0x8b] == '\x01') {
    FUN_10a08d2e0(&ppppplStack_c0,*(long *)(puVar12 + 0x40) + 8);
    pppppplVar2 = (long ******)ppppplStack_c0;
    if (-1 < cStack_a9) {
      pppppplVar2 = &ppppplStack_c0;
    }
    func_0x000107c2b054(&pppppuStack_a8,pppppplVar2);
    if (cStack_a9 < '\0') {
      __ZdlPv(ppppplStack_c0);
    }
    uStack_e8 = uStack_a0;
    pppppuStack_f0 = pppppuStack_a8;
    lStack_e0 = lStack_98;
    pppppuStack_a8 = (undefined8 *****)0x0;
    uStack_a0 = 0;
    lStack_98 = 0;
    FUN_10ad03508(&ppppplStack_c0,&pppppuStack_f0);
    uVar5 = puVar12[0x8a];
    uVar6 = *(undefined2 *)(puVar12 + 0x88);
    *(undefined1 *)(extraout_x8 + 3) = 3;
    if (cStack_a9 < '\0') {
      func_0x000107c3192c(extraout_x8,ppppplStack_c0,lStack_b8);
      *(undefined1 *)(extraout_x8 + 3) = 1;
      *(undefined2 *)(extraout_x8 + 4) = uVar6;
      *(undefined1 *)((long)extraout_x8 + 0x22) = uVar5;
      if (cStack_a9 < '\0') {
        __ZdlPv(ppppplStack_c0);
      }
    }
    else {
      extraout_x8[1] = lStack_b8;
      *extraout_x8 = (long)ppppplStack_c0;
      extraout_x8[2] = CONCAT17(cStack_a9,uStack_b0);
      *(undefined1 *)(extraout_x8 + 3) = 1;
      *(undefined2 *)(extraout_x8 + 4) = uVar6;
      *(undefined1 *)((long)extraout_x8 + 0x22) = uVar5;
    }
    if (lStack_e0 < 0) {
      __ZdlPv(pppppuStack_f0);
    }
    if (lStack_98 < 0) {
      __ZdlPv(pppppuStack_a8);
    }
  }
  else {
    lVar17 = 0x100;
    __Znwm();
    puVar18 = (undefined8 *)**(undefined8 **)(puVar12 + 0x90);
    (**(code **)*puVar18)();
    plVar19 = (long *)**(undefined8 **)(puVar12 + 0x90);
    (**(code **)(*plVar19 + 0x18))();
    func_0x000105705ef0(lVar17,puVar18,plVar19);
    lVar13 = *(long *)(puVar12 + 0x90);
    lVar3 = *(long *)(puVar12 + 0x98);
    if (lVar3 != 0) {
      plVar19 = (long *)(lVar3 + 8);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar8) {
          *plVar19 = *plVar19 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    plVar19 = (long *)0x30;
    __Znwm();
    plVar20 = plVar19 + 1;
    *plVar20 = 0;
    *plVar19 = (long)&PTR_DAT_110c71f88;
    plVar19[2] = 0;
    plVar19[3] = lVar17;
    plVar19[4] = lVar13;
    plVar19[5] = lVar3;
    uVar6 = *(undefined2 *)(puVar12 + 0x88);
    uVar5 = puVar12[0x8a];
    *extraout_x8 = lVar17;
    extraout_x8[1] = (long)plVar19;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar8) {
        *plVar20 = *plVar20 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    *(undefined1 *)(extraout_x8 + 3) = 2;
    *(undefined2 *)(extraout_x8 + 4) = uVar6;
    *(undefined1 *)((long)extraout_x8 + 0x22) = uVar5;
    do {
      lVar13 = *plVar20;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar8) {
        *plVar20 = lVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  return;
}



/* Entry: 10ad7739c; end: 10ad77987;  */

void FUN_10ad7739c(long *param_1,long param_2)

{
  ulong uVar1;
  long ***ppplVar2;
  long lVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  char cVar7;
  bool bVar8;
  long **pplVar9;
  code *pcVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  undefined8 ***pppuVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  uint uVar18;
  undefined8 **ppuStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 **ppuStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  long **pplStack_90;
  long lStack_88;
  undefined7 uStack_80;
  char cStack_79;
  undefined8 **ppuStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  char cStack_49;
  
  if ((*(byte *)(param_2 + 0xa0) & 1) != 0) goto LAB_10ad77644;
  __ZNSt3__15mutex4lockEv(param_2);
  if ((*(byte *)(param_2 + 0xa0) & 1) == 0) {
    lVar12 = *(long *)(param_2 + 0x40);
    if ((*(char *)(param_2 + 0x8b) == '\x01') && (*(long *)(lVar12 + 0x40) != 0)) {
      if (*(char *)(param_2 + 0x80) == '\x01') {
        plVar17 = (long *)(param_2 + 0x68);
        lVar12 = (long)*(char *)(param_2 + 0x7f);
        plVar13 = plVar17;
        if (lVar12 < 0) {
          lVar12 = *(long *)(param_2 + 0x70);
          plVar13 = *(long **)(param_2 + 0x68);
        }
        FUN_10ad772c4(plVar13,lVar12);
        if ((*(byte *)(param_2 + 0x80) & 1) == 0) {
LAB_10ad77920:
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10ad77924);
          (*pcVar10)();
        }
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (&pplStack_90,"/",plVar17);
        FUN_10a107e2c(&ppuStack_78,&pplStack_90,param_2 + 0x50,0);
        if (cStack_79 < '\0') {
          __ZdlPv(pplStack_90);
        }
        FUN_10a08d2e0(&pplStack_90,&ppuStack_78);
        iVar11 = (int)&pplStack_90;
        FUN_10ad02150();
        if (iVar11 != 0) {
          FUN_109d143fc(&pplStack_90);
          __ZNSt3__19to_stringEy(&ppuStack_a8);
          if ((*(byte *)(param_2 + 0x80) & 1) == 0) goto LAB_10ad77920;
          uVar18 = (uint)(char)bStack_91;
          if (-1 < (int)uVar18) {
            uStack_a0 = (ulong)bStack_91;
          }
          bVar4 = *(byte *)(param_2 + 0x7f);
          uVar1 = *(ulong *)(param_2 + 0x70);
          if (-1 < (char)bVar4) {
            uVar1 = (ulong)bVar4;
          }
          if (uStack_a0 == uVar1) {
            pppuVar14 = (undefined8 ***)ppuStack_a8;
            if (-1 < (int)uVar18) {
              pppuVar14 = &ppuStack_a8;
            }
            plVar13 = (long *)*plVar17;
            if (-1 < (char)bVar4) {
              plVar13 = plVar17;
            }
            _memcmp(pppuVar14,plVar13);
            if ((int)pppuVar14 != 0) goto LAB_10ad775d8;
          }
          else {
LAB_10ad775d8:
            FUN_10ad00b0c(&pplStack_90);
            uVar18 = (uint)bStack_91;
          }
          if ((uVar18 >> 7 & 1) != 0) {
            __ZdlPv(ppuStack_a8);
          }
        }
        FUN_10ac5a2dc(*(undefined8 *)(param_2 + 0x40),&ppuStack_78,0);
        if (cStack_79 < '\0') {
          __ZdlPv(pplStack_90);
        }
        if (cStack_49 < '\0') {
          __ZdlPv(uStack_60);
        }
      }
      else {
        FUN_10ac5a188(&ppuStack_78,lVar12,1);
      }
      if (lStack_68 < 0) {
        __ZdlPv(ppuStack_78);
      }
    }
    else {
      FUN_10a08d2e0(&ppuStack_78,lVar12 + 8);
      pppuVar14 = (undefined8 ***)ppuStack_78;
      if (-1 < lStack_68) {
        pppuVar14 = &ppuStack_78;
      }
      FUN_10ad040c0(&pplStack_90,pppuVar14,&UNK_10f432965);
      pplVar9 = pplStack_90;
      if ((long ***)pplStack_90 == (long ***)0x0) {
        puVar16 = (undefined8 *)0x0;
      }
      else {
        puVar16 = (undefined8 *)0x20;
        __Znwm();
        *puVar16 = &PTR_DAT_110c71fe8;
        puVar16[1] = 0;
        puVar16[2] = 0;
        puVar16[3] = pplStack_90;
      }
      pplStack_90 = (long **)0x0;
      plVar17 = *(long **)(param_2 + 0x98);
      *(long ***)(param_2 + 0x90) = pplVar9;
      *(undefined8 **)(param_2 + 0x98) = puVar16;
      if (plVar17 != (long *)0x0) {
        plVar13 = plVar17 + 1;
        do {
          lVar12 = *plVar13;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar8) {
            *plVar13 = lVar12 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      pplVar9 = pplStack_90;
      pplStack_90 = (long **)0x0;
      if (pplVar9 != (long **)0x0) {
        plVar17 = *pplVar9;
        *pplVar9 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x40))();
        }
        __ZdlPv(pplVar9);
      }
      if (lStack_68 < 0) {
        __ZdlPv(ppuStack_78);
      }
      if (*(long *)(param_2 + 0x90) == 0) {
        func_0x000105688514(&UNK_10f6aa548);
        goto LAB_10ad77920;
      }
    }
    *(undefined1 *)(param_2 + 0xa0) = 1;
  }
  __ZNSt3__15mutex6unlockEv(param_2);
LAB_10ad77644:
  if (*(char *)(param_2 + 0x8b) == '\x01') {
    FUN_10a08d2e0(&pplStack_90,*(long *)(param_2 + 0x40) + 8);
    ppplVar2 = (long ***)pplStack_90;
    if (-1 < cStack_79) {
      ppplVar2 = &pplStack_90;
    }
    func_0x000107c2b054(&ppuStack_78,ppplVar2);
    if (cStack_79 < '\0') {
      __ZdlPv(pplStack_90);
    }
    uStack_b8 = uStack_70;
    ppuStack_c0 = ppuStack_78;
    lStack_b0 = lStack_68;
    ppuStack_78 = (undefined8 **)0x0;
    uStack_70 = 0;
    lStack_68 = 0;
    FUN_10ad03508(&pplStack_90,&ppuStack_c0);
    uVar5 = *(undefined1 *)(param_2 + 0x8a);
    uVar6 = *(undefined2 *)(param_2 + 0x88);
    *(undefined1 *)(param_1 + 3) = 3;
    if (cStack_79 < '\0') {
      func_0x000107c3192c(param_1,pplStack_90,lStack_88);
      *(undefined1 *)(param_1 + 3) = 1;
      *(undefined2 *)(param_1 + 4) = uVar6;
      *(undefined1 *)((long)param_1 + 0x22) = uVar5;
      if (cStack_79 < '\0') {
        __ZdlPv(pplStack_90);
      }
    }
    else {
      param_1[1] = lStack_88;
      *param_1 = (long)pplStack_90;
      param_1[2] = CONCAT17(cStack_79,uStack_80);
      *(undefined1 *)(param_1 + 3) = 1;
      *(undefined2 *)(param_1 + 4) = uVar6;
      *(undefined1 *)((long)param_1 + 0x22) = uVar5;
    }
    if (lStack_b0 < 0) {
      __ZdlPv(ppuStack_c0);
    }
    if (lStack_68 < 0) {
      __ZdlPv(ppuStack_78);
    }
  }
  else {
    lVar15 = 0x100;
    __Znwm();
    puVar16 = (undefined8 *)**(undefined8 **)(param_2 + 0x90);
    (**(code **)*puVar16)();
    plVar17 = (long *)**(undefined8 **)(param_2 + 0x90);
    (**(code **)(*plVar17 + 0x18))();
    func_0x000105705ef0(lVar15,puVar16,plVar17);
    lVar12 = *(long *)(param_2 + 0x90);
    lVar3 = *(long *)(param_2 + 0x98);
    if (lVar3 != 0) {
      plVar17 = (long *)(lVar3 + 8);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar8) {
          *plVar17 = *plVar17 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    plVar17 = (long *)0x30;
    __Znwm();
    plVar13 = plVar17 + 1;
    *plVar13 = 0;
    *plVar17 = (long)&PTR_DAT_110c71f88;
    plVar17[2] = 0;
    plVar17[3] = lVar15;
    plVar17[4] = lVar12;
    plVar17[5] = lVar3;
    uVar6 = *(undefined2 *)(param_2 + 0x88);
    uVar5 = *(undefined1 *)(param_2 + 0x8a);
    *param_1 = lVar15;
    param_1[1] = (long)plVar17;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar8) {
        *plVar13 = *plVar13 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    *(undefined1 *)(param_1 + 3) = 2;
    *(undefined2 *)(param_1 + 4) = uVar6;
    *(undefined1 *)((long)param_1 + 0x22) = uVar5;
    do {
      lVar12 = *plVar13;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar8) {
        *plVar13 = lVar12 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  return;
}



/* Entry: 10ad77988; end: 10ad779df;  */

long FUN_10ad77988(long param_1)

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



/* Entry: 10ad779e0; end: 10ad77a3f;  */

void FUN_10ad779e0(long *param_1)

{
  long lVar1;
  
  lVar1 = 0xc0;
  __Znwm();
  FUN_10ad77a40();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10ad77a40; end: 10ad77a87;  */

undefined8 * FUN_10ad77a40(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c71f38;
  FUN_10ad77b18(param_1 + 3);
  return param_1;
}



/* Entry: 10ad77a88; end: 10ad77a97;  */

void FUN_10ad77a88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c71f38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad77a98; end: 10ad77ab7;  */

void FUN_10ad77a98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c71f38;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad77ab8; end: 10ad77b13;  */

void FUN_10ad77ab8(long param_1)

{
  FUN_10ad77988(param_1 + 0xa8);
  if ((*(char *)(param_1 + 0x98) == '\x01') && (*(char *)(param_1 + 0x97) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_1 + 0x80));
  }
  if (*(char *)(param_1 + 0x7f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x68));
  }
  func_0x00010a8e4e44(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 10ad77b14; end: 10ad77b17;  */

void FUN_10ad77b14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad77b18; end: 10ad77c03;  */

undefined8 * FUN_10ad77b18(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = 0x32aaaba7;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[9] = param_2[1];
  param_1[8] = uVar5;
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
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 10,*param_3,param_3[1]);
  }
  else {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    param_1[0xc] = param_3[2];
    param_1[0xb] = uVar6;
    param_1[10] = uVar5;
  }
  FUN_10a1ccb30(param_1 + 0xd,param_3 + 3);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_3 + 7);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  return param_1;
}



/* Entry: 10ad77c04; end: 10ad77d2f;  */

long FUN_10ad77c04(long param_1)

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



/* Entry: 10ad77d30; end: 10ad77d37;  */

void FUN_10ad77d30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad77d38; end: 10ad77d4b;  */

void FUN_10ad77d38(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad77d4c; end: 10ad77dcb;  */

void FUN_10ad77d4c(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
    plVar1 = (long *)*plVar2;
    *plVar2 = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x40))();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar2);
    return;
  }
  return;
}



/* Entry: 10ad77dcc; end: 10ad77dcf;  */

void FUN_10ad77dcc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad77dd0; end: 10ad77e9b; +[LSAAssetFactory _tryGetDataWithPath:] */

void FUN_10ad77dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf64bc0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ad77e9c; end: 10ad7824b; +[LSAAssetFactory dataWithPath:] */

void FUN_10ad77e9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *puVar5;
  undefined8 auStack_78 [2];
  char cStack_61;
  ulong *apuStack_60 [6];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bdc3520();
  func_0x000107c2b054(auStack_78,lVar1);
  FUN_10a0f19e0(apuStack_60,auStack_78,0);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  if ((apuStack_60[0] == (ulong *)0x0) || (4 < (uint)apuStack_60[0][1])) {
LAB_10ad77fb4:
    if ((bRam000000011330a9e8 & 1) != 0) {
      lVar1 = param_3;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      func_0x00010ae06f08(0,1,&UNK_10f6aa570,&UNK_10f6aa606,0x3f,&UNK_10f6aa627,in_x6,in_x7,lVar1);
    }
  }
  else {
    plVar2 = (long *)*apuStack_60[0];
    (**(code **)(*plVar2 + 0x10))();
    if (((ulong)plVar2 & 1) == 0) goto LAB_10ad77fb4;
    _objc_retain(param_3);
    if (param_3 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
      func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd11a0(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar5);
      if ((uint)apuStack_60[0][1] < 5) {
        (**(code **)(*(long *)*apuStack_60[0] + 0x10))();
      }
LAB_10ad7814c:
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f6aa570,&UNK_10f6aa7c4,0x16,&UNK_10f6aa809);
      }
LAB_10ad78180:
      _objc_release(param_3);
    }
    else {
      if (4 < (uint)apuStack_60[0][1]) goto LAB_10ad7814c;
      plVar2 = (long *)*apuStack_60[0];
      (**(code **)(*plVar2 + 0x10))();
      if (((ulong)plVar2 & 1) == 0) goto LAB_10ad7814c;
      plVar2 = (long *)*apuStack_60[0];
      (**(code **)(*plVar2 + 0x18))();
      if ((long)plVar2 + 1U < 2) {
        if ((bRam000000011330a9e8 & 1) != 0) {
          lVar1 = param_3;
          _objc_retainAutorelease();
          func_0x00010bdc3520();
          func_0x00010ae06f08(0,1,&UNK_10f6aa570,&UNK_10f6aa7c4,0x1e,&UNK_10f6aa831,in_x6,in_x7,
                              lVar1);
        }
        goto LAB_10ad78180;
      }
      plVar3 = plVar2;
      _malloc();
      if (plVar3 == (long *)0x0) {
        if ((bRam000000011330a9e8 & 1) != 0) {
          func_0x00010ae06f08(0,1,&UNK_10f6aa570,&UNK_10f6aa7c4,0x24,&UNK_10f6aa872,in_x6,in_x7,
                              plVar2);
        }
        goto LAB_10ad78180;
      }
      (**(code **)(*(long *)*apuStack_60[0] + 0x20))((long *)*apuStack_60[0],plVar3,1,plVar2);
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc();
      func_0x00010bffa1e0();
      _objc_release(param_3);
      if (puVar5 != (undefined *)0x0) goto LAB_10ad77ffc;
    }
    if ((bRam000000011330a9e8 & 1) != 0) {
      lVar1 = param_3;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      func_0x00010ae06f08(0,1,&UNK_10f6aa570,&UNK_10f6aa606,0x49,&UNK_10f6aa657,in_x6,in_x7,lVar1);
    }
  }
  puVar5 = (undefined *)0x0;
LAB_10ad77ffc:
  FUN_10a0f1ea0(apuStack_60);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}


