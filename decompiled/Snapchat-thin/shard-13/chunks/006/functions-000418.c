/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a994130; end: 10a99415b;  */

undefined8 * FUN_10a994130(long param_1)

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



/* Entry: 10a99415c; end: 10a994213;  */

void FUN_10a99415c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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



/* Entry: 10a994214; end: 10a994773;  */

void FUN_10a994214(long param_1,undefined ***param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined1 uVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  ulong uVar16;
  long *plVar17;
  undefined *puVar18;
  long *plVar19;
  undefined **unaff_x21;
  long *plVar20;
  undefined ***unaff_x23;
  undefined **ppuVar21;
  undefined *unaff_x26;
  undefined *puVar22;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  int aiStack_190 [2];
  undefined8 *puStack_188;
  int aiStack_180 [2];
  undefined8 *puStack_178;
  undefined8 **ppuStack_170;
  long *plStack_168;
  undefined1 *puStack_160;
  int **ppiStack_158;
  int *piStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined **ppuStack_138;
  long lStack_130;
  undefined8 *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  float fStack_f0;
  undefined8 uStack_e0;
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
  
  plVar19 = &lStack_110;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_108 = (undefined *)0x0;
  lStack_110 = 0;
  lStack_f8 = 0;
  ppuStack_100 = (undefined **)0x0;
  fStack_f0 = *(float *)(param_1 + 0x38);
  pppuVar7 = *(undefined ****)(param_1 + 0x20);
  FUN_10a98f588(&lStack_110);
  plVar20 = *(long **)(param_1 + 0x28);
  if (plVar20 != (long *)0x0) {
    unaff_x23 = (undefined ***)0x9ddfea08eb382d69;
    do {
      puVar15 = puStack_108;
      uVar10 = plVar20[2];
      uVar16 = ((ulong)(uint)((int)uVar10 << 3) + 8 ^ uVar10 >> 0x20) * -0x622015f714c7d297;
      uVar16 = (uVar10 >> 0x20 ^ uVar16 >> 0x2f ^ uVar16) * -0x622015f714c7d297;
      puVar22 = (undefined *)((uVar16 ^ uVar16 >> 0x2f) * -0x622015f714c7d297);
      if (puStack_108 != (undefined *)0x0) {
        puVar13 = puStack_108 + -1;
        if (((ulong)puStack_108 & (ulong)puVar13) == 0) {
          unaff_x26 = (undefined *)((ulong)puVar22 & (ulong)puVar13);
        }
        else {
          unaff_x26 = puVar22;
          if (puStack_108 <= puVar22) {
            uVar16 = 0;
            if (puStack_108 != (undefined *)0x0) {
              uVar16 = (ulong)puVar22 / (ulong)puStack_108;
            }
            unaff_x26 = puVar22 + -(uVar16 * (long)puStack_108);
          }
        }
        plVar17 = *(long **)(lStack_110 + (long)unaff_x26 * 8);
        if (plVar17 != (long *)0x0) {
          do {
            while( true ) {
              plVar17 = (long *)*plVar17;
              if (plVar17 == (long *)0x0) goto LAB_10a994344;
              puVar18 = (undefined *)plVar17[1];
              if (puVar18 != puVar22) break;
              if (plVar17[2] == uVar10) goto LAB_10a9944a4;
            }
            if (((ulong)puStack_108 & (ulong)puVar13) == 0) {
              puVar18 = (undefined *)((ulong)puVar18 & (ulong)puVar13);
            }
            else if (puStack_108 <= puVar18) {
              uVar16 = 0;
              if (puStack_108 != (undefined *)0x0) {
                uVar16 = (ulong)puVar18 / (ulong)puStack_108;
              }
              puVar18 = puVar18 + -(uVar16 * (long)puStack_108);
            }
          } while (puVar18 == unaff_x26);
        }
      }
LAB_10a994344:
      unaff_x21 = (undefined **)0x68;
      __Znwm();
      *unaff_x21 = (undefined *)0x0;
      unaff_x21[1] = puVar22;
      lVar11 = plVar20[3];
      puVar13 = (undefined *)plVar20[2];
      unaff_x21[3] = (undefined *)plVar20[3];
      unaff_x21[2] = puVar13;
      if (lVar11 != 0) {
        plVar17 = (long *)(lVar11 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar4) {
            *plVar17 = *plVar17 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppuStack_c0 = unaff_x21 + 4;
      *(undefined1 *)(unaff_x21 + 0xc) = 3;
      if ((char)plVar20[0xc] == '\0') {
        uVar9 = 0;
      }
      else {
        pppuVar7 = (undefined ***)(plVar20 + 4);
        FUN_10a005398(&ppuStack_c0);
        uVar9 = (undefined1)plVar20[0xc];
      }
      *(undefined1 *)(unaff_x21 + 0xc) = uVar9;
      if ((puVar15 == (undefined *)0x0) || (fStack_f0 * (float)puVar15 < (float)(lStack_f8 + 1))) {
        uVar10 = 1;
        if ((undefined *)0x2 < puVar15) {
          uVar10 = (ulong)(((ulong)puVar15 & (ulong)(puVar15 + -1)) != 0);
        }
        pppuVar7 = (undefined ***)(uVar10 | (long)puVar15 << 1);
        pppuVar8 = (undefined ***)(long)((float)(lStack_f8 + 1) / fStack_f0);
        if (pppuVar7 <= pppuVar8) {
          pppuVar7 = pppuVar8;
        }
        FUN_10a98f588(&lStack_110);
        puVar15 = puStack_108;
        if (((ulong)puStack_108 & (ulong)(puStack_108 + -1)) == 0) {
          unaff_x26 = (undefined *)((ulong)(puStack_108 + -1) & (ulong)puVar22);
        }
        else {
          unaff_x26 = puVar22;
          if (puStack_108 <= puVar22) {
            uVar10 = 0;
            if (puStack_108 != (undefined *)0x0) {
              uVar10 = (ulong)puVar22 / (ulong)puStack_108;
            }
            unaff_x26 = puVar22 + -(uVar10 * (long)puStack_108);
          }
        }
      }
      puVar14 = *(undefined8 **)(lStack_110 + (long)unaff_x26 * 8);
      if (puVar14 == (undefined8 *)0x0) {
        *unaff_x21 = (undefined *)ppuStack_100;
        *(undefined ****)(lStack_110 + (long)unaff_x26 * 8) = &ppuStack_100;
        ppuStack_100 = unaff_x21;
        if (*unaff_x21 != (undefined *)0x0) {
          puVar22 = *(undefined **)(*unaff_x21 + 8);
          if (((ulong)puVar15 & (ulong)(puVar15 + -1)) == 0) {
            puVar22 = (undefined *)((ulong)puVar22 & (ulong)(puVar15 + -1));
          }
          else if (puVar15 <= puVar22) {
            uVar10 = 0;
            if (puVar15 != (undefined *)0x0) {
              uVar10 = (ulong)puVar22 / (ulong)puVar15;
            }
            puVar22 = puVar22 + -(uVar10 * (long)puVar15);
          }
          *(undefined ***)(lStack_110 + (long)puVar22 * 8) = unaff_x21;
        }
      }
      else {
        *unaff_x21 = (undefined *)*puVar14;
        *puVar14 = unaff_x21;
      }
      lStack_f8 = lStack_f8 + 1;
LAB_10a9944a4:
      plVar20 = (long *)*plVar20;
    } while (plVar20 != (long *)0x0);
  }
  puVar14 = (undefined8 *)0x0;
  if (ppuStack_100 != (undefined **)0x0) {
    puVar14 = &uStack_e0;
    unaff_x23 = &ppuStack_c0;
    ppuVar21 = ppuStack_100;
    do {
      pppuVar8 = (undefined ***)ppuVar21[2];
      lVar11 = param_1 + 0x18;
      FUN_10a98ff98();
      pppuVar7 = pppuVar8;
      if (lVar11 != 0) {
        if (*(char *)(ppuVar21 + 0xc) == '\x01') {
          pcVar12 = (code *)ppuVar21[4];
          ppuStack_b8 = param_2[1];
          ppuStack_c0 = *param_2;
          if (param_2[1] != (undefined **)0x0) {
            ppuVar2 = param_2[1] + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
              if (bVar4) {
                *ppuVar2 = *ppuVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          pppuVar7 = (undefined ***)(ppuVar21 + 4);
          (*pcVar12)(&ppuStack_c0);
          unaff_x21 = ppuStack_b8;
          if (ppuStack_b8 != (undefined **)0x0) {
            ppuVar2 = ppuStack_b8 + 1;
            do {
              puVar15 = *ppuVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
              if (bVar4) {
                *ppuVar2 = puVar15 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
LAB_10a994584:
            if (puVar15 == (undefined *)0x0) {
              (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
              __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
            }
          }
        }
        else if (*(char *)(ppuVar21 + 0xc) == '\x02') {
          unaff_x21 = ppuVar21 + 4;
          FUN_10a688b40();
          if (unaff_x21 == (undefined **)0x0) {
            pppuVar7 = (undefined ***)0x0;
            if (pppuVar8 != (undefined ***)0x0) {
              puStack_b0 = ppuVar21[4];
              puStack_a8 = ppuVar21[5];
              if (puStack_a8 != (undefined *)0x0) {
                plVar20 = (long *)(puStack_a8 + 8);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                  if (bVar4) {
                    *plVar20 = *plVar20 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              ppuStack_d0 = *param_2;
              ppuVar2 = param_2[1];
              if (ppuVar2 == (undefined **)0x0) {
                ppuStack_98 = (undefined **)0x0;
              }
              else {
                ppuVar1 = ppuVar2 + 1;
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
                  if (bVar4) {
                    *ppuVar1 = *ppuVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
                  if (bVar4) {
                    *ppuVar1 = *ppuVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  ppuStack_98 = ppuVar2;
                } while (cVar3 != '\0');
              }
              ppuStack_b8 = &PTR_FUN_110c34238;
              ppuStack_d8 = (undefined **)0x0;
              uStack_e0 = 0;
              ppuStack_c0 = (undefined **)FUN_10a994904;
              pppuVar7 = &ppuStack_c0;
              ppuStack_c8 = ppuVar2;
              ppuStack_a0 = ppuStack_d0;
              FUN_10a4634ec(pppuVar8);
              (*(code *)*ppuStack_b8)(&ppuStack_b8);
              if (ppuVar2 != (undefined **)0x0) {
                ppuVar1 = ppuVar2 + 1;
                do {
                  puVar15 = *ppuVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
                  if (bVar4) {
                    *ppuVar1 = puVar15 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (puVar15 == (undefined *)0x0) {
                  (**(code **)(*ppuVar2 + 0x10))(ppuVar2);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar2);
                }
              }
              unaff_x21 = ppuStack_d8;
              if (ppuStack_d8 != (undefined **)0x0) {
                ppuVar2 = ppuStack_d8 + 1;
                do {
                  puVar15 = *ppuVar2;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
                  if (bVar4) {
                    *ppuVar2 = puVar15 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                goto LAB_10a994584;
              }
            }
          }
          else {
            *unaff_x21 = (undefined *)
                         CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
            pppuVar7 = param_2;
            FUN_10a994774(ppuVar21[4]);
            iVar5 = *(int *)((long)unaff_x21 + 4) + -1;
            *(int *)((long)unaff_x21 + 4) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)unaff_x21 = 0;
            }
          }
        }
      }
      ppuVar21 = (undefined **)*ppuVar21;
    } while (ppuVar21 != (undefined **)0x0);
  }
  FUN_10a991ac4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b8)(unaff_x23 + 1);
  func_0x00010a98ecf8(puVar14 + 2);
  func_0x00010a004dac(&uStack_e0);
  FUN_10a991ac4(&lStack_110);
  puVar6 = plVar19;
  __Unwind_Resume();
  pcStack_118 = FUN_10a994774;
  puStack_140 = puVar14;
  ppuStack_138 = unaff_x21;
  lStack_130 = param_1;
  puStack_128 = plVar19;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&ppuStack_170,puVar6 + 1,*puVar6);
  func_0x000109884820(&puStack_198,&ppuStack_170,*puVar6);
  if (ppuStack_170 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_170)();
  }
  (**(code **)(*(long *)*puVar6 + 0x30))(&puStack_1a0);
  plVar19 = (long *)*puVar6;
  func_0x00010a98e928(aiStack_180,plVar19,*pppuVar7,pppuVar7[1]);
  uStack_148 = 1;
  piStack_150 = aiStack_180;
  (**(code **)(*plVar19 + 0x58))(plVar19);
  ppuStack_170 = &puStack_198;
  ppiStack_158 = &piStack_150;
  plStack_168 = plVar19;
  puStack_160 = (undefined1 *)&puStack_1a0;
  func_0x0001098960c0(aiStack_190);
  if ((3 < aiStack_190[0]) && (puStack_188 != (undefined8 *)0x0)) {
    (**(code **)*puStack_188)();
  }
  if ((3 < aiStack_180[0]) && (puStack_178 != (undefined8 *)0x0)) {
    (**(code **)*puStack_178)();
  }
  if (puStack_1a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_1a0)();
  }
  if (puStack_198 != (undefined8 *)0x0) {
    (**(code **)*puStack_198)();
  }
  return;
}



/* Entry: 10a994774; end: 10a994903;  */

void FUN_10a994774(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar1 = (long *)*param_1;
  func_0x00010a98e928(aiStack_70,plVar1,*param_2,param_2[1]);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar1;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
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



/* Entry: 10a994904; end: 10a994913;  */

void FUN_10a994904(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_90);
  plVar2 = (long *)*puVar1;
  func_0x00010a98e928(aiStack_70,plVar2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28));
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar2;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
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



/* Entry: 10a994914; end: 10a99493b;  */

long FUN_10a994914(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a98ecf8(param_1 + 0x18);
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



/* Entry: 10a99493c; end: 10a99497b;  */

void FUN_10a99493c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c34238;
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



/* Entry: 10a99497c; end: 10a994b0b;  */

void FUN_10a99497c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar1 = (long *)*param_1;
  FUN_10a98e398(aiStack_70,plVar1,*param_2,param_2[1]);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar1;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
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



/* Entry: 10a994b0c; end: 10a994b1b;  */

void FUN_10a994b0c(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_90);
  plVar2 = (long *)*puVar1;
  FUN_10a98e398(aiStack_70,plVar2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar2;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
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



/* Entry: 10a994b1c; end: 10a994b43;  */

long FUN_10a994b1c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a98eca0(param_1 + 0x18);
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



/* Entry: 10a994b44; end: 10a994b83;  */

void FUN_10a994b44(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c34250;
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



/* Entry: 10a994b84; end: 10a994bdb;  */

void FUN_10a994b84(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x48;
  __Znwm();
  FUN_10a994bdc();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a994bdc; end: 10a994c23;  */

undefined8 * FUN_10a994bdc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c354c0;
  FUN_10a96433c(param_1 + 3);
  return param_1;
}



/* Entry: 10a994c24; end: 10a994c33;  */

void FUN_10a994c24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c354c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a994c34; end: 10a994c53;  */

void FUN_10a994c34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c354c0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a994c54; end: 10a994c73;  */

void FUN_10a994c54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a994c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a994c74; end: 10a994c93;  */

void FUN_10a994c74(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c34278;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a994c94; end: 10a994ca3;  */

void FUN_10a994c94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a994c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a994ca4; end: 10a994d4b;  */

undefined8 * FUN_10a994ca4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c342c8;
  (**(code **)param_1[9])();
  FUN_10a994ef0(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a994d4c; end: 10a994daf;  */

bool FUN_10a994d4c(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x87) {
    iVar1 = 0xe4e6680;
    _memcmp(&UNK_10e4e6680);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a994db0; end: 10a994ecf;  */

void FUN_10a994db0(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f68581c);
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



/* Entry: 10a994ed0; end: 10a994edf;  */

undefined1  [16] FUN_10a994ed0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x87;
  auVar1._0_8_ = &UNK_10e4e6680;
  return auVar1;
}



/* Entry: 10a994ee0; end: 10a994eef;  */

long * FUN_10a994ee0(undefined8 param_1,long *param_2)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a994f70);
  (*pcVar2)();
}



/* Entry: 10a994ef0; end: 10a994f6f;  */

long * FUN_10a994ef0(long *param_1)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a994f70);
  (*pcVar2)();
}



/* Entry: 10a994f70; end: 10a995173;  */

void FUN_10a994f70(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110c35498;
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



/* Entry: 10a995174; end: 10a995183;  */

void FUN_10a995174(long param_1)

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
  ppuStack_40 = &PTR_DAT_110c35498;
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



/* Entry: 10a995184; end: 10a9951ab;  */

long FUN_10a995184(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a98b8b4(param_1 + 0x18);
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



/* Entry: 10a9951ac; end: 10a9951eb;  */

void FUN_10a9951ac(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c34310;
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



/* Entry: 10a9951ec; end: 10a9952e7;  */

undefined1  [16] FUN_10a9951ec(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c33270;
  puVar1 = &UNK_10f68581c;
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
    ppuStack_40 = &PTR_DAT_110c33270;
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



/* Entry: 10a9952e8; end: 10a99533b;  */

ulong FUN_10a9952e8(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a99533c,0);
  }
  return param_1;
}



/* Entry: 10a99533c; end: 10a9953f3;  */

void FUN_10a99533c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
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
  FUN_10a9953f4(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar13 = param_2[3];
  *param_1 = 3;
  *(long *)(param_1 + 2) = lVar13;
  plVar1 = plVar4 + 0x4b;
  lVar13 = plVar4[0x59];
  uVar5 = lVar13 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar13 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar13 = *plVar1;
  lVar9 = plVar4[0x4c];
  lVar7 = lVar9 - lVar13;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = plVar4[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar13 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar13)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar13,lVar7);
          *plVar1 = lVar8;
          plVar4[0x4c] = lVar9 + uVar12 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar13;
          lStack_80 = lVar13;
          lStack_78 = lVar13;
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
    plVar4[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar13 = lVar13 + uVar5 * 0x10;
    while (lVar9 != lVar13) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    plVar4[0x4c] = lVar13;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a9953f4; end: 10a9954af;  */

undefined ** FUN_10a9953f4(undefined **param_1,undefined **param_2)

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
    FUN_10a0605c4(ppuVar1,*param_2,FUN_10a9954b0,0);
  }
  return ppuVar1;
}



/* Entry: 10a9954b0; end: 10a99556b;  */

void FUN_10a9954b0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9953f4(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[4];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
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



/* Entry: 10a99556c; end: 10a995627;  */

void FUN_10a99556c(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68723b,0xd);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a995628);
  (*pcVar4)();
}



/* Entry: 10a995628; end: 10a995767;  */

void FUN_10a995628(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
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
  undefined1 *in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a995768(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (*(char *)((long)plVar5 + 0x2f) < '\0') {
    func_0x000107c3192c(&stack0xffffffffffffffa0,plVar5[3],plVar5[4]);
  }
  else {
    in_stack_ffffffffffffffa8 = plVar5[4];
    in_stack_ffffffffffffffa0 = (undefined1 *)plVar5[3];
    in_stack_ffffffffffffffb0 = plVar5[5];
  }
  puVar1 = in_stack_ffffffffffffffa0;
  if (-1 < (long)in_stack_ffffffffffffffb0) {
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
    puVar1 = &stack0xffffffffffffffa0;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffb8,param_2,puVar1,in_stack_ffffffffffffffa8)
  ;
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb8;
  if ((long)in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
  }
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
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
  lVar6 = *plVar5;
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
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
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



/* Entry: 10a995768; end: 10a9957cf;  */

void FUN_10a995768(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 *extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar3);
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
  FUN_10a995768(plVar4,param_2);
  FUN_10a052e3c(param_4);
  lVar14 = plVar4[6];
  *extraout_x8 = 3;
  *(long *)(extraout_x8 + 2) = lVar14;
  plVar4 = plVar5 + 0x4b;
  lVar14 = plVar5[0x59];
  uVar6 = lVar14 - 1;
  plVar5[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar14 + 2];
    if (plVar5[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar6) {
      return;
    }
  }
  lVar14 = *plVar4;
  lVar10 = plVar5[0x4c];
  lVar8 = lVar10 - lVar14;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar5[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar14 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar14)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar14,lVar8);
          *plVar4 = lVar9;
          plVar5[0x4c] = lVar10 + uVar13 * 0x10;
          plVar5[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_a8 = lVar14;
          lStack_a0 = lVar14;
          lStack_98 = lVar14;
          lStack_90 = lVar11;
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
    _bzero(lVar10,uVar13 * 0x10);
    plVar5[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar14 = lVar14 + uVar6 * 0x10;
    while (lVar10 != lVar14) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar5[0x4c] = lVar14;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar6;
  return;
}



/* Entry: 10a9957d0; end: 10a995887;  */

void FUN_10a9957d0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
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
  FUN_10a995768(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar13 = param_2[6];
  *param_1 = 3;
  *(long *)(param_1 + 2) = lVar13;
  plVar1 = plVar4 + 0x4b;
  lVar13 = plVar4[0x59];
  uVar5 = lVar13 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar13 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar13 = *plVar1;
  lVar9 = plVar4[0x4c];
  lVar7 = lVar9 - lVar13;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = plVar4[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar13 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar13)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar13,lVar7);
          *plVar1 = lVar8;
          plVar4[0x4c] = lVar9 + uVar12 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar13;
          lStack_80 = lVar13;
          lStack_78 = lVar13;
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
    plVar4[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar13 = lVar13 + uVar5 * 0x10;
    while (lVar9 != lVar13) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    plVar4[0x4c] = lVar13;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a995888; end: 10a99593f;  */

void FUN_10a995888(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
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
  FUN_10a995768(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar13 = param_2[7];
  *param_1 = 3;
  *(long *)(param_1 + 2) = lVar13;
  plVar1 = plVar4 + 0x4b;
  lVar13 = plVar4[0x59];
  uVar5 = lVar13 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar13 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar13 = *plVar1;
  lVar9 = plVar4[0x4c];
  lVar7 = lVar9 - lVar13;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = plVar4[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar13 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar13)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar13,lVar7);
          *plVar1 = lVar8;
          plVar4[0x4c] = lVar9 + uVar12 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar13;
          lStack_80 = lVar13;
          lStack_78 = lVar13;
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
    plVar4[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar13 = lVar13 + uVar5 * 0x10;
    while (lVar9 != lVar13) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    plVar4[0x4c] = lVar13;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a995940; end: 10a9959f7;  */

void FUN_10a995940(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
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
  FUN_10a995768(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar13 = param_2[8];
  *param_1 = 3;
  *(long *)(param_1 + 2) = lVar13;
  plVar1 = plVar4 + 0x4b;
  lVar13 = plVar4[0x59];
  uVar5 = lVar13 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar13 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar13 = *plVar1;
  lVar9 = plVar4[0x4c];
  lVar7 = lVar9 - lVar13;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = plVar4[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar13 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar13)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar13,lVar7);
          *plVar1 = lVar8;
          plVar4[0x4c] = lVar9 + uVar12 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar13;
          lStack_80 = lVar13;
          lStack_78 = lVar13;
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
    plVar4[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar13 = lVar13 + uVar5 * 0x10;
    while (lVar9 != lVar13) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    plVar4[0x4c] = lVar13;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a9959f8; end: 10a995ab3;  */

void FUN_10a9959f8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a995768(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[9];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
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



/* Entry: 10a995ab4; end: 10a995b63;  */

void FUN_10a995ab4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a995b64(param_1,param_2,FUN_10a96a818,0,param_3,param_5);
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



/* Entry: 10a995b64; end: 10a995c1b;  */

void FUN_10a995b64(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lStack_58;
  long lStack_50;
  
  lVar1 = param_2;
  FUN_10a995768(param_2,param_5);
  FUN_10a052e3c(param_6);
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*(long *)(lVar1 + ((long)param_4 >> 1)) + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(&lStack_58);
  func_0x00010989a1f4(param_1,param_2,lStack_58,lStack_50 - lStack_58 >> 3);
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a995c1c; end: 10a995ccb;  */

void FUN_10a995c1c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a995b64(param_1,param_2,0x10a96a834,0,param_3,param_5);
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



/* Entry: 10a995ccc; end: 10a995dff;  */

void FUN_10a995ccc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a995e00(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar16 = (long *)plVar6[0x1b];
  if (plVar6[0x1b] != 0) {
    plVar6 = (long *)(plVar6[0x1b] + 8);
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



/* Entry: 10a995e00; end: 10a995e67;  */

void FUN_10a995e00(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar3);
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
  FUN_10a995f18(extraout_x8,plVar4,0x10a96a850,0,param_2,param_4);
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



/* Entry: 10a995e68; end: 10a995f17;  */

void FUN_10a995e68(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a995f18(param_1,param_2,0x10a96a850,0,param_3,param_5);
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



/* Entry: 10a995f18; end: 10a995fd3;  */

void FUN_10a995f18(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  lVar4 = param_2;
  FUN_10a995e00(param_2,param_5);
  FUN_10a052e3c(param_6);
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*(long *)(lVar4 + ((long)param_4 >> 1)) + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(auStack_50);
  FUN_10a07d9d4(param_1,param_2,auStack_50);
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
  return;
}



/* Entry: 10a995fd4; end: 10a996083;  */

void FUN_10a995fd4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a995f18(param_1,param_2,0x10a96a878,0,param_3,param_5);
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



/* Entry: 10a996084; end: 10a99628b;  */

void FUN_10a996084(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c0,&UNK_10e4e6d9f,0x83);
  pppuVar1 = (undefined ***)appuStack_c0[0];
  if (-1 < cStack_a9) {
    pppuVar1 = appuStack_c0;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c34328;
  ppuVar2 = (undefined **)&UNK_10f68581c;
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
    ppuStack_40 = &PTR_DAT_110c34328;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a99626c;
    FUN_10a054dac(param_1,&DAT_10f68571c,FUN_10a9964ac,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a99626c;
    FUN_10a054dac(param_1,&DAT_10f685720,FUN_10a996d70,2,*(undefined8 *)(param_1 + 0x40));
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
LAB_10a99626c:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a996270);
  (*pcVar9)();
}



/* Entry: 10a99628c; end: 10a99645b;  */

void FUN_10a99628c(long *param_1,long *param_2)

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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9964ac);
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



/* Entry: 10a99645c; end: 10a9964ab;  */

void FUN_10a99645c(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9964ac);
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



/* Entry: 10a9964ac; end: 10a996aa7;  */

/* WARNING: Possible PIC construction at 0x00010a996a9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a996aa0) */
/* WARNING: Removing unreachable block (ram,0x00010a996ac0) */
/* WARNING: Removing unreachable block (ram,0x00010a996ad0) */
/* WARNING: Removing unreachable block (ram,0x00010a996af8) */
/* WARNING: Removing unreachable block (ram,0x00010a996b04) */
/* WARNING: Removing unreachable block (ram,0x00010a996b1c) */
/* WARNING: Removing unreachable block (ram,0x00010a996b54) */
/* WARNING: Removing unreachable block (ram,0x00010a996b80) */
/* WARNING: Removing unreachable block (ram,0x00010a996b6c) */
/* WARNING: Removing unreachable block (ram,0x00010a996b74) */
/* WARNING: Removing unreachable block (ram,0x00010a996b84) */
/* WARNING: Removing unreachable block (ram,0x00010a996b8c) */
/* WARNING: Removing unreachable block (ram,0x00010a996b9c) */
/* WARNING: Removing unreachable block (ram,0x00010a996ba8) */
/* WARNING: Removing unreachable block (ram,0x00010a996bc8) */
/* WARNING: Removing unreachable block (ram,0x00010a996bb4) */
/* WARNING: Removing unreachable block (ram,0x00010a996bbc) */
/* WARNING: Removing unreachable block (ram,0x00010a996bcc) */
/* WARNING: Removing unreachable block (ram,0x00010a996bd4) */
/* WARNING: Removing unreachable block (ram,0x00010a996bd8) */
/* WARNING: Removing unreachable block (ram,0x00010a996bfc) */
/* WARNING: Removing unreachable block (ram,0x00010a996be4) */
/* WARNING: Removing unreachable block (ram,0x00010a996bf0) */
/* WARNING: Removing unreachable block (ram,0x00010a996c00) */
/* WARNING: Removing unreachable block (ram,0x00010a996c08) */
/* WARNING: Removing unreachable block (ram,0x00010a996c10) */
/* WARNING: Removing unreachable block (ram,0x00010a996c14) */
/* WARNING: Removing unreachable block (ram,0x00010a996c18) */
/* WARNING: Removing unreachable block (ram,0x00010a996c34) */
/* WARNING: Removing unreachable block (ram,0x00010a996c20) */
/* WARNING: Removing unreachable block (ram,0x00010a996c28) */
/* WARNING: Removing unreachable block (ram,0x00010a996c38) */
/* WARNING: Removing unreachable block (ram,0x00010a996c40) */
/* WARNING: Removing unreachable block (ram,0x00010a996c4c) */
/* WARNING: Removing unreachable block (ram,0x00010a996c68) */
/* WARNING: Removing unreachable block (ram,0x00010a996c90) */
/* WARNING: Removing unreachable block (ram,0x00010a996c78) */
/* WARNING: Removing unreachable block (ram,0x00010a996b18) */
/* WARNING: Removing unreachable block (ram,0x00010a996aec) */

void FUN_10a9964ac(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
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
  FUN_10a996aa8(param_2,param_3);
  FUN_10a996b10(param_5);
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
        goto LAB_10a996a90;
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
              if ((long *)plVar20[2] == plVar22) goto LAB_10a99684c;
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
        FUN_10a99628c(plVar9 + 3,uVar14);
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
          goto LAB_10a9968f0;
        }
      }
      else {
        *plVar20 = *plVar12;
LAB_10a9968f0:
        *plVar12 = (long)plVar20;
      }
      plVar9[6] = plVar9[6] + 1;
      goto LAB_10a996900;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
  goto LAB_10a996a90;
LAB_10a99684c:
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
LAB_10a996900:
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
      FUN_10a99645c(1,plVar20);
      FUN_10a004978(&plStack_c0);
      if (3 < (ulong)bStack_70) goto LAB_10a996a90;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_70])(&plStack_b0);
      FUN_10a688c1c(&plStack_e0);
      unaff_x30 = 0x10a996aa0;
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
LAB_10a996a90:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a996a94);
  (*pcVar6)();
}



/* Entry: 10a996aa8; end: 10a996b0f;  */

void FUN_10a996aa8(long param_1)

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
  FUN_10a996c9c(plVar4,*puVar5);
  if (plVar4 == (long *)0x0) goto LAB_10a996c68;
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
LAB_10a996bd4:
    if (lVar6 == 0) {
LAB_10a996c08:
      *(undefined8 *)(*(long *)(lVar3 + 0x18) + uVar7 * 8) = 0;
      lVar6 = *plVar4;
      goto LAB_10a996c10;
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
    if (uVar12 != uVar7) goto LAB_10a996c08;
LAB_10a996c18:
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
    if (uVar11 != uVar7) goto LAB_10a996bd4;
LAB_10a996c10:
    if (lVar6 != 0) {
      uVar11 = *(ulong *)(lVar6 + 8);
      goto LAB_10a996c18;
    }
  }
  *plVar10 = lVar6;
  *plVar4 = 0;
  *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + -1;
  FUN_10a99645c(1);
LAB_10a996c68:
  if (*(char *)(*(long *)(lVar3 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a996c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x40))(lVar3);
    return;
  }
  return;
}



/* Entry: 10a996b10; end: 10a996b33;  */

void FUN_10a996b10(undefined8 param_1)

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
  FUN_10a996c9c(plVar3,*puVar4);
  if (plVar3 == (long *)0x0) goto LAB_10a996c68;
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
LAB_10a996bd4:
    if (lVar5 == 0) {
LAB_10a996c08:
      *(undefined8 *)(*(long *)(lVar2 + 0x18) + uVar6 * 8) = 0;
      lVar5 = *plVar3;
      goto LAB_10a996c10;
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
    if (uVar11 != uVar6) goto LAB_10a996c08;
LAB_10a996c18:
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
    if (uVar10 != uVar6) goto LAB_10a996bd4;
LAB_10a996c10:
    if (lVar5 != 0) {
      uVar10 = *(ulong *)(lVar5 + 8);
      goto LAB_10a996c18;
    }
  }
  *plVar9 = lVar5;
  *plVar3 = 0;
  *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x30) + -1;
  FUN_10a99645c(1);
LAB_10a996c68:
  if (*(char *)(*(long *)(lVar2 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a996c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x40))(lVar2);
    return;
  }
  return;
}



/* Entry: 10a996b34; end: 10a996c9b;  */

void FUN_10a996b34(long param_1,undefined8 *param_2)

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
  FUN_10a996c9c(plVar2,*param_2);
  if (plVar2 == (long *)0x0) goto LAB_10a996c68;
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
LAB_10a996bd4:
    if (lVar3 == 0) {
LAB_10a996c08:
      *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_10a996c10;
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
    if (uVar9 != uVar4) goto LAB_10a996c08;
LAB_10a996c18:
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
    if (uVar8 != uVar4) goto LAB_10a996bd4;
LAB_10a996c10:
    if (lVar3 != 0) {
      uVar8 = *(ulong *)(lVar3 + 8);
      goto LAB_10a996c18;
    }
  }
  *plVar7 = lVar3;
  *plVar2 = 0;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  FUN_10a99645c(1);
LAB_10a996c68:
  if (*(char *)(*(long *)(param_1 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a996c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(param_1);
    return;
  }
  return;
}



/* Entry: 10a996c9c; end: 10a996d6f;  */

long * FUN_10a996c9c(long *param_1,long param_2)

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



/* Entry: 10a996d70; end: 10a996e8b;  */

void FUN_10a996d70(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a996aa8(param_2,param_3);
  FUN_10a060490(param_5);
  FUN_10a0604b4(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a996b34(plVar6,&stack0xffffffffffffffb0);
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



/* Entry: 10a996e8c; end: 10a996f3b;  */

void FUN_10a996e8c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a996f3c(param_1,param_2,0x10a96a8a0,0,param_3,param_5);
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



/* Entry: 10a996f3c; end: 10a997053;  */

void FUN_10a996f3c(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_70;
  long *plStack_68;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  lVar5 = param_2;
  FUN_10a995e00(param_2,param_5);
  FUN_10a052e3c(param_6);
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*(long *)(lVar5 + ((long)param_4 >> 1)) + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(&uStack_70);
  plStack_48 = plStack_68;
  uStack_50 = uStack_70;
  uStack_70 = 0;
  plStack_68 = (long *)0x0;
  ppuStack_58 = &PTR_DAT_110c34328;
  func_0x000109899de4(param_1,param_2,&uStack_50,&ppuStack_58,0,0);
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a997054; end: 10a997103;  */

void FUN_10a997054(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a996f3c(param_1,param_2,0x10a96a8c8,0,param_3,param_5);
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



/* Entry: 10a997104; end: 10a9971bb;  */

void FUN_10a997104(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
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
  FUN_10a995e00(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar13 = param_2[0x25];
  *param_1 = 3;
  *(long *)(param_1 + 2) = lVar13;
  plVar1 = plVar4 + 0x4b;
  lVar13 = plVar4[0x59];
  uVar5 = lVar13 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar13 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar13 = *plVar1;
  lVar9 = plVar4[0x4c];
  lVar7 = lVar9 - lVar13;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = plVar4[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar13 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar13)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar13,lVar7);
          *plVar1 = lVar8;
          plVar4[0x4c] = lVar9 + uVar12 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar13;
          lStack_80 = lVar13;
          lStack_78 = lVar13;
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
    plVar4[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar13 = lVar13 + uVar5 * 0x10;
    while (lVar9 != lVar13) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    plVar4[0x4c] = lVar13;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a9971bc; end: 10a997293;  */

void FUN_10a9971bc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  byte bVar5;
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
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a995e00(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (*(char *)(param_2[0xc] + 0x18) == '\x01') {
    bVar5 = *(byte *)(param_2[0xc] + 0x19) ^ 1;
  }
  else {
    bVar5 = 0;
  }
  *param_1 = 2;
  *(byte *)(param_1 + 2) = bVar5 & 1;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
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
  lVar6 = *plVar1;
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
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
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



/* Entry: 10a997294; end: 10a9973b3;  */

void FUN_10a997294(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
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
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar16 = param_2;
  FUN_10a995e00(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar8 = *(long *)(plVar16[0xc] + 0x48);
  plVar16 = *(long **)(plVar16[0xc] + 0x48);
  if (lVar8 != 0) {
    plVar1 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a98c914(param_1,param_2,&stack0xffffffffffffffb0);
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 1;
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
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  plVar16 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar7 = lVar8 - 1;
  plVar6[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar16[lVar8 + 2];
    if (plVar6[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar7) {
      return;
    }
  }
  lVar8 = *plVar16;
  lVar12 = plVar6[0x4c];
  lVar10 = lVar12 - lVar8;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar6[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar8 >> 3;
        if (uVar9 <= uVar7) {
          uVar9 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar8)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar16;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar5 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar8,lVar10);
          *plVar16 = lVar11;
          plVar6[0x4c] = lVar12 + uVar15 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar6[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar8 = lVar8 + uVar7 * 0x10;
    while (lVar12 != lVar8) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar7;
  return;
}



/* Entry: 10a9973b4; end: 10a9973df;  */

void FUN_10a9973b4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(param_2 + 0x60);
  lVar4 = *(long *)(lVar5 + 0x68);
  uVar6 = *(undefined8 *)(lVar5 + 0x60);
  param_1[1] = *(undefined8 *)(lVar5 + 0x68);
  *param_1 = uVar6;
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



/* Entry: 10a9973e0; end: 10a99748f;  */

void FUN_10a9973e0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a995f18(param_1,param_2,FUN_10a9973b4,0,param_3,param_5);
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



/* Entry: 10a997490; end: 10a9974e7;  */

long FUN_10a997490(long param_1)

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



/* Entry: 10a9974e8; end: 10a9974f7;  */

void FUN_10a9974e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34350;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a9974f8; end: 10a997517;  */

void FUN_10a9974f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34350;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a997518; end: 10a997527;  */

void FUN_10a997518(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a997520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a997528; end: 10a9975cf;  */

undefined8 * FUN_10a997528(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c343a0;
  (**(code **)param_1[9])();
  FUN_10a997774(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9975d0; end: 10a997633;  */

bool FUN_10a9975d0(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x83) {
    iVar1 = 0xe4e6d9f;
    _memcmp(&UNK_10e4e6d9f);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a997634; end: 10a997753;  */

void FUN_10a997634(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f68581c);
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



/* Entry: 10a997754; end: 10a997763;  */

undefined1  [16] FUN_10a997754(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x83;
  auVar1._0_8_ = &UNK_10e4e6d9f;
  return auVar1;
}



/* Entry: 10a997764; end: 10a997773;  */

long * FUN_10a997764(undefined8 param_1,long *param_2)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9977f4);
  (*pcVar2)();
}



/* Entry: 10a997774; end: 10a9977f3;  */

long * FUN_10a997774(long *param_1)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9977f4);
  (*pcVar2)();
}



/* Entry: 10a9977f4; end: 10a9978d3;  */

void FUN_10a9977f4(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10a9977f4(*param_1);
    FUN_10a9977f4(param_1[1]);
    func_0x00010a997834(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a9978d4; end: 10a9978df;  */

long FUN_10a9978d4(long param_1)

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



/* Entry: 10a9978e0; end: 10a997937;  */

long FUN_10a9978e0(long param_1)

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



/* Entry: 10a997938; end: 10a9979d3;  */

void FUN_10a997938(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar5 = *(code **)(param_2 + 0x10);
  plVar2 = (long *)(*(long *)(param_2 + 0x20) + ((long)*(ulong *)(param_2 + 0x18) >> 1));
  if ((*(ulong *)(param_2 + 0x18) & 1) != 0) {
    pcVar5 = *(code **)(*plVar2 + ((ulong)pcVar5 & 0xffffffff));
  }
  plStack_28 = (long *)param_1[1];
  uStack_30 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  (*pcVar5)(plVar2,&uStack_30);
  plVar2 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return;
}



/* Entry: 10a9979d4; end: 10a997a77;  */

void FUN_10a9979d4(void)

{
  return;
}



/* Entry: 10a997a78; end: 10a99870b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a997a78(long *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  undefined1 ****ppppuVar4;
  undefined1 ***pppuVar5;
  long *plVar6;
  undefined1 ****ppppuVar7;
  undefined1 *****pppppuVar8;
  char cVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  undefined1 ***pppuVar14;
  undefined1 ****ppppuVar15;
  undefined1 **ppuVar16;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined1 ****ppppuStack_240;
  undefined1 ***pppuStack_238;
  undefined1 **ppuStack_230;
  undefined8 uStack_228;
  undefined1 ****ppppuStack_220;
  undefined1 ***pppuStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 ****ppppuStack_200;
  long *plStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined1 ****ppppuStack_1b0;
  undefined1 ***pppuStack_1a8;
  undefined1 ***pppuStack_1a0;
  char acStack_190 [8];
  long *plStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  byte bStack_169;
  undefined8 uStack_168;
  long *plStack_160;
  long lStack_158;
  long lStack_150;
  long *plStack_148;
  long lStack_140;
  long lStack_138;
  int iStack_130;
  long lStack_128;
  long lStack_120;
  undefined1 auStack_118 [56];
  long lStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [40];
  long alStack_a8 [3];
  long *plStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_258 = 0;
  plStack_250 = (long *)0x0;
  plVar3 = *(long **)(param_2 + 0x20);
  if (((plVar3 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_250 = plVar3, plVar3 == (long *)0x0)) ||
     (lStack_258 = *(long *)(param_2 + 0x18), lStack_258 == 0)) goto LAB_10a9983e4;
  lVar12 = *(long *)(param_2 + 0x10);
  lStack_158 = param_1[1];
  plStack_160 = (long *)*param_1;
  lStack_150 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  lStack_140 = param_1[4];
  plStack_148 = (long *)param_1[3];
  lStack_138 = param_1[5];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iStack_130 = (int)param_1[6];
  lStack_128 = param_1[7];
  lStack_120 = param_1[8];
  param_1[7] = 0;
  (**(code **)(param_1[9] + 0x10))(auStack_118,param_1 + 9);
  lStack_e0 = param_1[0x10];
  uStack_d8 = (undefined4)param_1[0x11];
  FUN_10a0424c4(auStack_d0,param_1 + 0x12);
  if (iStack_130 - 200U < 100) {
    lVar12 = *(long *)(lVar12 + 0x18);
    FUN_109ffe064(&uStack_180,lStack_128,lStack_e0);
    uVar10 = (uint)(char)bStack_169;
    if (-1 < (int)uVar10) {
      uStack_178 = (ulong)bStack_169;
    }
    if (uStack_178 != 0) {
      plStack_90 = (long *)0x0;
      FUN_109fc89b4(acStack_190,&uStack_180,alStack_a8,0,0);
      if (plStack_90 == alStack_a8) {
        lVar11 = 0x20;
LAB_10a997bd0:
        (**(code **)(*plStack_90 + lVar11))();
      }
      else if (plStack_90 != (long *)0x0) {
        lVar11 = 0x28;
        goto LAB_10a997bd0;
      }
      if (acStack_190[0] == '\t') {
        cVar9 = '\t';
      }
      else {
        ppppuStack_1b0 = (undefined1 ****)0x0;
        pppuStack_1a8 = (undefined1 ***)0x0;
        pppuStack_1a0 = (undefined1 ***)0x0;
        lStack_1c8 = 0;
        lStack_1c0 = 0;
        uStack_1b8 = 0;
        lStack_1e0 = 0;
        lStack_1d8 = 0;
        uStack_1d0 = 0;
        func_0x000107c2b054(&ppppuStack_220,&UNK_10f68582f);
        ppppuStack_200 = (undefined1 ****)acStack_190;
        plStack_1f8 = (long *)0x0;
        lStack_1f0 = 0;
        uStack_1e8 = 0x8000000000000000;
        if (acStack_190[0] == '\x01') {
          plVar3 = plStack_188;
          func_0x0001093793a4(plStack_188,&ppppuStack_220);
          plStack_1f8 = plVar3;
        }
        else if (acStack_190[0] == '\x02') {
          lStack_1f0 = plStack_188[1];
        }
        else {
          uStack_1e8 = 1;
        }
        if (uStack_210._7_1_ < '\0') {
          __ZdlPv(ppppuStack_220);
        }
        ppppuStack_220 = (undefined1 ****)acStack_190;
        pppuStack_218 = (undefined1 ***)0x0;
        uStack_210 = (undefined1 ***)0x0;
        uStack_208 = 0x8000000000000000;
        if (acStack_190[0] == '\x02') {
          uStack_210 = (undefined1 ***)plStack_188[1];
        }
        else if (acStack_190[0] == '\x01') {
          pppuStack_218 = (undefined1 ***)(plStack_188 + 1);
        }
        else {
          uStack_208 = 1;
        }
        ppppuVar4 = (undefined1 ****)&ppppuStack_200;
        func_0x000109379420(ppppuVar4,&ppppuStack_220);
        if (((ulong)ppppuVar4 & 1) == 0) {
          func_0x00010937b950(&ppppuStack_200);
          func_0x00010937c804(&ppppuStack_220);
          pppuStack_1a8 = pppuStack_218;
          ppppuStack_1b0 = ppppuStack_220;
          pppuStack_1a0 = uStack_210;
        }
        func_0x000107c2b054(&ppppuStack_220,"trackDurationSec");
        ppppuStack_200 = (undefined1 ****)acStack_190;
        plStack_1f8 = (long *)0x0;
        lStack_1f0 = 0;
        uStack_1e8 = 0x8000000000000000;
        if (acStack_190[0] == '\x01') {
          plVar3 = plStack_188;
          func_0x0001093793a4(plStack_188,&ppppuStack_220);
          plStack_1f8 = plVar3;
        }
        else if (acStack_190[0] == '\x02') {
          lStack_1f0 = plStack_188[1];
        }
        else {
          uStack_1e8 = 1;
        }
        if ((long)uStack_210 < 0) {
          __ZdlPv(ppppuStack_220);
        }
        ppppuStack_220 = (undefined1 ****)acStack_190;
        pppuStack_218 = (undefined1 ***)0x0;
        uStack_210 = (undefined1 ***)0x0;
        uStack_208 = 0x8000000000000000;
        if (acStack_190[0] == '\x02') {
          uStack_210 = (undefined1 ***)plStack_188[1];
        }
        else if (acStack_190[0] == '\x01') {
          pppuStack_218 = (undefined1 ***)(plStack_188 + 1);
        }
        else {
          uStack_208 = 1;
        }
        ppppuVar4 = (undefined1 ****)&ppppuStack_200;
        func_0x000109379420(ppppuVar4,&ppppuStack_220);
        ppppuVar7 = (undefined1 ****)0x0;
        if (((ulong)ppppuVar4 & 1) == 0) {
          func_0x00010937b950(&ppppuStack_200);
          func_0x00010949aadc();
          ppppuVar7 = ppppuStack_220;
        }
        func_0x000107c2b054(&ppppuStack_220,&DAT_10f687aad);
        ppppuStack_200 = (undefined1 ****)acStack_190;
        plStack_1f8 = (long *)0x0;
        lStack_1f0 = 0;
        uStack_1e8 = 0x8000000000000000;
        if (acStack_190[0] == '\x01') {
          plVar3 = plStack_188;
          func_0x0001093793a4(plStack_188,&ppppuStack_220);
          plStack_1f8 = plVar3;
        }
        else if (acStack_190[0] == '\x02') {
          lStack_1f0 = plStack_188[1];
        }
        else {
          uStack_1e8 = 1;
        }
        if ((long)uStack_210 < 0) {
          __ZdlPv(ppppuStack_220);
        }
        ppppuStack_220 = (undefined1 ****)acStack_190;
        pppuStack_218 = (undefined1 ***)0x0;
        uStack_210 = (undefined1 ***)0x0;
        uStack_208 = 0x8000000000000000;
        if (acStack_190[0] == '\x02') {
          uStack_210 = (undefined1 ***)plStack_188[1];
        }
        else if (acStack_190[0] == '\x01') {
          pppuStack_218 = (undefined1 ***)(plStack_188 + 1);
        }
        else {
          uStack_208 = 1;
        }
        ppppuVar4 = (undefined1 ****)&ppppuStack_200;
        func_0x000109379420(ppppuVar4,&ppppuStack_220);
        ppuVar16 = (undefined1 **)0x0;
        ppppuVar15 = (undefined1 ****)0x0;
        if (((ulong)ppppuVar4 & 1) == 0) {
          func_0x00010937b950(&ppppuStack_200);
          func_0x00010949aadc();
          ppuVar16 = (undefined1 **)(60000.0 / (double)ppppuStack_220);
          ppppuVar15 = ppppuStack_220;
        }
        func_0x000107c2b054(&ppppuStack_220,"numBeatsInMeasure");
        ppppuStack_200 = (undefined1 ****)acStack_190;
        plStack_1f8 = (long *)0x0;
        lStack_1f0 = 0;
        uStack_1e8 = 0x8000000000000000;
        if (acStack_190[0] == '\x01') {
          plVar3 = plStack_188;
          func_0x0001093793a4(plStack_188,&ppppuStack_220);
          plStack_1f8 = plVar3;
        }
        else if (acStack_190[0] == '\x02') {
          lStack_1f0 = plStack_188[1];
        }
        else {
          uStack_1e8 = 1;
        }
        if ((long)uStack_210 < 0) {
          __ZdlPv(ppppuStack_220);
        }
        ppppuStack_220 = (undefined1 ****)acStack_190;
        pppuStack_218 = (undefined1 ***)0x0;
        uStack_210 = (undefined1 ***)0x0;
        uStack_208 = 0x8000000000000000;
        if (acStack_190[0] == '\x02') {
          uStack_210 = (undefined1 ***)plStack_188[1];
        }
        else if (acStack_190[0] == '\x01') {
          pppuStack_218 = (undefined1 ***)(plStack_188 + 1);
        }
        else {
          uStack_208 = 1;
        }
        ppppuVar4 = (undefined1 ****)&ppppuStack_200;
        func_0x000109379420(ppppuVar4,&ppppuStack_220);
        if (((ulong)ppppuVar4 & 1) == 0) {
          func_0x00010937b950(&ppppuStack_200);
          func_0x00010937ba88();
          uVar13 = ppppuStack_220._0_4_;
        }
        else {
          uVar13 = 0;
        }
        func_0x000107c2b054(&ppppuStack_220,"syncPointTimestampsMs");
        ppppuStack_200 = (undefined1 ****)acStack_190;
        plStack_1f8 = (long *)0x0;
        lStack_1f0 = 0;
        uStack_1e8 = 0x8000000000000000;
        if (acStack_190[0] == '\x01') {
          plVar3 = plStack_188;
          func_0x0001093793a4(plStack_188,&ppppuStack_220);
          plStack_1f8 = plVar3;
        }
        else if (acStack_190[0] == '\x02') {
          lStack_1f0 = plStack_188[1];
        }
        else {
          uStack_1e8 = 1;
        }
        if ((long)uStack_210 < 0) {
          __ZdlPv(ppppuStack_220);
        }
        ppppuStack_220 = (undefined1 ****)acStack_190;
        pppuStack_218 = (undefined1 ***)0x0;
        uStack_210 = (undefined1 ***)0x0;
        uStack_208 = 0x8000000000000000;
        if (acStack_190[0] == '\x02') {
          uStack_210 = (undefined1 ***)plStack_188[1];
        }
        else if (acStack_190[0] == '\x01') {
          pppuStack_218 = (undefined1 ***)(plStack_188 + 1);
        }
        else {
          uStack_208 = 1;
        }
        ppppuVar4 = (undefined1 ****)&ppppuStack_200;
        func_0x000109379420(ppppuVar4,&ppppuStack_220);
        if (((ulong)ppppuVar4 & 1) == 0) {
          ppppuVar4 = (undefined1 ****)&ppppuStack_200;
          func_0x00010937b950();
          pppuStack_218 = (undefined1 ***)0x0;
          uStack_210 = (undefined1 ***)0x0;
          uStack_208 = 0x8000000000000000;
          cVar9 = *(char *)ppppuVar4;
          ppppuStack_240 = ppppuVar4;
          ppppuStack_220 = ppppuVar4;
          if (cVar9 == '\0') {
            uStack_208 = 1;
LAB_10a998494:
            pppuStack_238 = (undefined1 ***)0x0;
            ppuStack_230 = (undefined1 **)0x0;
            uStack_228 = 1;
          }
          else if (cVar9 == '\x02') {
            uStack_210 = (undefined1 ***)*ppppuVar4[1];
            pppuStack_238 = (undefined1 ***)0x0;
            uStack_228 = 0x8000000000000000;
            ppuStack_230 = ppppuVar4[1][1];
          }
          else {
            if (cVar9 != '\x01') {
              uStack_208 = 0;
              goto LAB_10a998494;
            }
            pppuStack_218 = (undefined1 ***)*ppppuVar4[1];
            ppuStack_230 = (undefined1 **)0x0;
            uStack_228 = 0x8000000000000000;
            pppuStack_238 = ppppuVar4[1] + 1;
          }
          while( true ) {
            pppppuVar8 = &ppppuStack_220;
            func_0x000109379420(pppppuVar8,&ppppuStack_240);
            if ((int)pppppuVar8 != 0) break;
            func_0x00010937b950(&ppppuStack_220);
            func_0x00010949aadc();
            uStack_248 = uStack_168;
            FUN_10a229d94(&lStack_1c8,&uStack_248);
            func_0x000109386b30(&ppppuStack_220);
          }
        }
        func_0x000107c2b054(&ppppuStack_220,"allBeatsTimestampsMs");
        ppppuStack_200 = (undefined1 ****)acStack_190;
        plStack_1f8 = (long *)0x0;
        lStack_1f0 = 0;
        uStack_1e8 = 0x8000000000000000;
        if (acStack_190[0] == '\x01') {
          plVar3 = plStack_188;
          func_0x0001093793a4(plStack_188,&ppppuStack_220);
          plStack_1f8 = plVar3;
        }
        else if (acStack_190[0] == '\x02') {
          lStack_1f0 = plStack_188[1];
        }
        else {
          uStack_1e8 = 1;
        }
        if ((long)uStack_210 < 0) {
          __ZdlPv(ppppuStack_220);
        }
        ppppuStack_220 = (undefined1 ****)acStack_190;
        pppuStack_218 = (undefined1 ***)0x0;
        uStack_210 = (undefined1 ***)0x0;
        uStack_208 = 0x8000000000000000;
        if (acStack_190[0] == '\x02') {
          uStack_210 = (undefined1 ***)plStack_188[1];
        }
        else if (acStack_190[0] == '\x01') {
          pppuStack_218 = (undefined1 ***)(plStack_188 + 1);
        }
        else {
          uStack_208 = 1;
        }
        ppppuVar4 = (undefined1 ****)&ppppuStack_200;
        func_0x000109379420(ppppuVar4,&ppppuStack_220);
        if (((ulong)ppppuVar4 & 1) == 0) {
          ppppuVar4 = (undefined1 ****)&ppppuStack_200;
          func_0x00010937b950();
          pppuStack_218 = (undefined1 ***)0x0;
          uStack_210 = (undefined1 ***)0x0;
          uStack_208 = 0x8000000000000000;
          cVar9 = *(char *)ppppuVar4;
          ppppuStack_240 = ppppuVar4;
          ppppuStack_220 = ppppuVar4;
          if (cVar9 == '\0') {
            uStack_208 = 1;
LAB_10a998518:
            pppuStack_238 = (undefined1 ***)0x0;
            ppuStack_230 = (undefined1 **)0x0;
            uStack_228 = 1;
          }
          else if (cVar9 == '\x02') {
            uStack_210 = (undefined1 ***)*ppppuVar4[1];
            pppuStack_238 = (undefined1 ***)0x0;
            uStack_228 = 0x8000000000000000;
            ppuStack_230 = ppppuVar4[1][1];
          }
          else {
            if (cVar9 != '\x01') {
              uStack_208 = 0;
              goto LAB_10a998518;
            }
            pppuStack_218 = (undefined1 ***)*ppppuVar4[1];
            ppuStack_230 = (undefined1 **)0x0;
            uStack_228 = 0x8000000000000000;
            pppuStack_238 = ppppuVar4[1] + 1;
          }
          while( true ) {
            pppppuVar8 = &ppppuStack_220;
            func_0x000109379420(pppppuVar8,&ppppuStack_240);
            if ((int)pppppuVar8 != 0) break;
            func_0x00010937b950(&ppppuStack_220);
            func_0x00010949aadc();
            uStack_248 = uStack_168;
            FUN_10a229d94(&lStack_1e0,&uStack_248);
            func_0x000109386b30(&ppppuStack_220);
          }
        }
        pppuVar5 = (undefined1 ***)0x98;
        __Znwm();
        pppuVar14 = pppuVar5 + 1;
        *pppuVar14 = (undefined1 **)0x0;
        pppuVar5[2] = (undefined1 **)0x0;
        ppppuVar4 = (undefined1 ****)(pppuVar5 + 3);
        *ppppuVar4 = (undefined1 ***)&PTR_DAT_110c31b78;
        *pppuVar5 = &PTR_FUN_110c34450;
        pppuVar5[4] = (undefined1 **)0x0;
        pppuVar5[5] = (undefined1 **)0x0;
        if ((long)pppuStack_1a0 < 0) {
          func_0x000107c3192c(pppuVar5 + 6,ppppuStack_1b0,pppuStack_1a8);
        }
        else {
          pppuVar5[7] = (undefined1 **)pppuStack_1a8;
          pppuVar5[6] = (undefined1 **)ppppuStack_1b0;
          pppuVar5[8] = (undefined1 **)pppuStack_1a0;
        }
        pppuVar5[0xd] = (undefined1 **)0x0;
        pppuVar5[9] = (undefined1 **)ppppuVar7;
        pppuVar5[10] = (undefined1 **)ppppuVar15;
        pppuVar5[0xb] = ppuVar16;
        *(undefined4 *)(pppuVar5 + 0xc) = uVar13;
        pppuVar5[0xe] = (undefined1 **)0x0;
        pppuVar5[0xf] = (undefined1 **)0x0;
        FUN_10a108d94(pppuVar5 + 0xd,lStack_1c8,lStack_1c0,lStack_1c0 - lStack_1c8 >> 3);
        pppuVar5[0x10] = (undefined1 **)0x0;
        pppuVar5[0x11] = (undefined1 **)0x0;
        pppuVar5[0x12] = (undefined1 **)0x0;
        FUN_10a108d94();
        plVar3 = (long *)(lVar12 + 0x90);
        plVar6 = plVar3;
        ppppuStack_220 = ppppuVar4;
        pppuStack_218 = pppuVar5;
        FUN_10a99874c(plVar3,&ppppuStack_240,&ppppuStack_1b0);
        if (*plVar6 == 0) {
          ppppuVar7 = (undefined1 ****)0x48;
          __Znwm();
          lStack_1f0 = 0;
          ppppuStack_200 = ppppuVar7;
          plStack_1f8 = plVar3;
          if ((long)pppuStack_1a0 < 0) {
            func_0x000107c3192c(ppppuVar7 + 4,ppppuStack_1b0,pppuStack_1a8);
          }
          else {
            ppppuVar7[5] = pppuStack_1a8;
            ppppuVar7[4] = (undefined1 ***)ppppuStack_1b0;
            ppppuVar7[6] = pppuStack_1a0;
          }
          ppppuVar7[7] = (undefined1 ***)ppppuVar4;
          ppppuVar7[8] = pppuVar5;
          do {
            cVar9 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppuVar14,0x10);
            if (bVar2) {
              *pppuVar14 = (undefined1 **)((long)*pppuVar14 + 1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          func_0x00010a9987d0(plVar3,ppppuStack_240,plVar6,ppppuVar7);
        }
        FUN_10a96b798(lVar12,&ppppuStack_1b0);
        do {
          ppuVar16 = *pppuVar14;
          cVar9 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pppuVar14,0x10);
          if (bVar2) {
            *pppuVar14 = (undefined1 **)((long)ppuVar16 + -1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (ppuVar16 == (undefined1 **)0x0) {
          (*(code *)(*pppuVar5)[2])(pppuVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar5);
        }
        if (lStack_1e0 != 0) {
          lStack_1d8 = lStack_1e0;
          __ZdlPv();
        }
        if (lStack_1c8 != 0) {
          lStack_1c0 = lStack_1c8;
          __ZdlPv();
        }
        cVar9 = acStack_190[0];
        if ((long)pppuStack_1a0 < 0) {
          __ZdlPv(ppppuStack_1b0);
          cVar9 = acStack_190[0];
        }
      }
      func_0x000109380ffc(&plStack_188,cVar9);
      uVar10 = (uint)bStack_169;
    }
    if ((uVar10 >> 7 & 1) != 0) {
      __ZdlPv(uStack_180);
    }
  }
  func_0x000104c4f944(auStack_d0);
  plVar3 = &lStack_128;
  FUN_10a042634();
  if (lStack_138 < 0) {
    plVar3 = plStack_148;
    __ZdlPv();
  }
  if (lStack_150 < 0) {
    plVar3 = plStack_160;
    __ZdlPv();
  }
LAB_10a9983e4:
  plVar6 = plStack_250;
  if (plStack_250 != (long *)0x0) {
    plVar1 = plStack_250 + 1;
    do {
      lVar12 = *plVar1;
      cVar9 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar2) {
        *plVar1 = lVar12 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_250 + 0x10))(plStack_250);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar3 = plVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    func_0x00010a998824(&ppppuStack_200);
    FUN_10a9978e0(&ppppuStack_220);
    if (lStack_1e0 != 0) {
      lStack_1d8 = lStack_1e0;
      __ZdlPv();
    }
    if (lStack_1c8 != 0) {
      lStack_1c0 = lStack_1c8;
      __ZdlPv();
    }
    if ((long)pppuStack_1a0 < 0) {
      __ZdlPv(ppppuStack_1b0);
    }
    func_0x000109380ffc(&plStack_188,acStack_190[0]);
    if ((char)bStack_169 < '\0') {
      __ZdlPv(uStack_180);
    }
    FUN_10a05bd10(&plStack_160);
    func_0x00010a05a86c(&lStack_258);
    __Unwind_Resume();
    *plVar3 = (long)&PTR_FUN_110c34450;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
    return;
  }
  return;
}



/* Entry: 10a99870c; end: 10a99871b;  */

void FUN_10a99870c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34450;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a99871c; end: 10a99873b;  */

void FUN_10a99871c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34450;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a99873c; end: 10a99874b;  */

void FUN_10a99873c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a998744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a99874c; end: 10a9987cf;  */

long * FUN_10a99874c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, FUN_10a003e3c(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10a9987b8;
    }
    plVar2 = plVar4 + 4;
    FUN_10a003e3c(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_10a9987b8:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10a9987d0; end: 10a99886b;  */

void FUN_10a9987d0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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



/* Entry: 10a99886c; end: 10a9988a7;  */

undefined8 * FUN_10a99886c(long param_1)

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



/* Entry: 10a9988a8; end: 10a9988c7;  */

void FUN_10a9988a8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c344b8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9988c8; end: 10a9988d7;  */

void FUN_10a9988c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9988d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9988d8; end: 10a9989e7;  */

long FUN_10a9988d8(long param_1)

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



/* Entry: 10a9989e8; end: 10a998beb;  */

void FUN_10a9989e8(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110c33270;
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



/* Entry: 10a998bec; end: 10a998bfb;  */

void FUN_10a998bec(long param_1)

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
  ppuStack_40 = &PTR_DAT_110c33270;
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



/* Entry: 10a998bfc; end: 10a998c23;  */

long FUN_10a998bfc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a9988d8(param_1 + 0x18);
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



/* Entry: 10a998c24; end: 10a998c73;  */

void FUN_10a998c24(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c344f8;
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



/* Entry: 10a998c74; end: 10a998c93;  */

void FUN_10a998c74(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c34520;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a998c94; end: 10a998ca3;  */

void FUN_10a998c94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a998c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a998ca4; end: 10a999cc7;  */

void FUN_10a998ca4(long *param_1,long *param_2,long *param_3,long param_4,uint param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  float *pfVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
LAB_10a998cd8:
  plVar11 = param_2 + -2;
  plVar8 = param_1;
LAB_10a998cec:
  do {
    param_1 = plVar8;
    uVar20 = (long)param_2 - (long)param_1 >> 4;
    if (uVar20 - 2 == 0 || (long)uVar20 < 2) {
      if (uVar20 < 2) {
        return;
      }
      if (uVar20 == 2) {
        lVar13 = param_2[-2];
        lVar9 = *param_1;
        uVar23 = *(undefined8 *)*param_3;
        fVar25 = (float)uVar23;
        fVar22 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar25;
        fVar27 = (float)((ulong)uVar23 >> 0x20);
        fVar24 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar27;
        fVar25 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
        fVar27 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
        fVar29 = *(float *)((undefined8 *)*param_3 + 1);
        fVar28 = *(float *)(lVar13 + 0x20) - fVar29;
        fVar29 = *(float *)(lVar9 + 0x20) - fVar29;
        if (fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29 <=
            fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28) {
          return;
        }
        *param_1 = lVar13;
        param_2[-2] = lVar9;
        lVar13 = param_1[1];
        param_1[1] = param_2[-1];
        param_2[-1] = lVar13;
        return;
      }
    }
    else {
      if (uVar20 == 3) {
        plVar8 = param_1 + 2;
        lVar13 = *plVar8;
        fVar29 = *(float *)((undefined8 *)*param_3 + 1);
        lVar9 = *param_1;
        fVar24 = *(float *)(lVar9 + 0x20) - fVar29;
        lVar10 = *plVar11;
        uVar23 = *(undefined8 *)*param_3;
        fVar25 = (float)uVar23;
        fVar28 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar25;
        fVar27 = (float)((ulong)uVar23 >> 0x20);
        fVar30 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar27;
        fVar31 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
        fVar32 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
        fVar25 = (float)*(undefined8 *)(lVar10 + 0x18) - fVar25;
        fVar27 = (float)((ulong)*(undefined8 *)(lVar10 + 0x18) >> 0x20) - fVar27;
        fVar22 = *(float *)(lVar10 + 0x20) - fVar29;
        fVar29 = *(float *)(lVar13 + 0x20) - fVar29;
        fVar22 = fVar25 * fVar25 + fVar27 * fVar27 + fVar22 * fVar22;
        fVar29 = fVar28 * fVar28 + fVar30 * fVar30 + fVar29 * fVar29;
        if (fVar31 * fVar31 + fVar32 * fVar32 + fVar24 * fVar24 <= fVar29) {
          if (fVar29 <= fVar22) {
            return;
          }
          *plVar8 = lVar10;
          *plVar11 = lVar13;
          plVar11 = param_1 + 3;
          lVar13 = *plVar11;
          *plVar11 = param_2[-1];
          param_2[-1] = lVar13;
          lVar13 = *plVar8;
          lVar9 = *param_1;
          uVar23 = *(undefined8 *)*param_3;
          fVar25 = (float)uVar23;
          fVar22 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar25;
          fVar27 = (float)((ulong)uVar23 >> 0x20);
          fVar24 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar27;
          fVar25 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
          fVar27 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
          fVar29 = *(float *)((undefined8 *)*param_3 + 1);
          fVar28 = *(float *)(lVar13 + 0x20) - fVar29;
          fVar29 = *(float *)(lVar9 + 0x20) - fVar29;
          if (fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29 <=
              fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28) {
            return;
          }
          plVar6 = param_1 + 1;
          *param_1 = lVar13;
          *plVar8 = lVar9;
        }
        else {
          if (fVar29 <= fVar22) {
            *param_1 = lVar13;
            *plVar8 = lVar9;
            plVar6 = param_1 + 3;
            lVar13 = param_1[1];
            param_1[1] = *plVar6;
            *plVar6 = lVar13;
            lVar13 = *plVar11;
            lVar9 = *plVar8;
            uVar23 = *(undefined8 *)*param_3;
            fVar25 = (float)uVar23;
            fVar22 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar25;
            fVar27 = (float)((ulong)uVar23 >> 0x20);
            fVar24 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar27;
            fVar25 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
            fVar27 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
            fVar29 = *(float *)((undefined8 *)*param_3 + 1);
            fVar28 = *(float *)(lVar13 + 0x20) - fVar29;
            fVar29 = *(float *)(lVar9 + 0x20) - fVar29;
            if (fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29 <=
                fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28) {
              return;
            }
            *plVar8 = lVar13;
            *plVar11 = lVar9;
          }
          else {
            plVar6 = param_1 + 1;
            *param_1 = lVar10;
            *plVar11 = lVar9;
          }
          plVar11 = param_2 + -1;
        }
        lVar13 = *plVar6;
        *plVar6 = *plVar11;
        *plVar11 = lVar13;
        return;
      }
      if (uVar20 == 4) {
        plVar8 = param_1 + 2;
        plVar6 = param_1 + 4;
        FUN_10a999cc8();
        lVar13 = *plVar11;
        lVar9 = *plVar6;
        uVar23 = *(undefined8 *)*param_3;
        fVar25 = (float)uVar23;
        fVar22 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar25;
        fVar27 = (float)((ulong)uVar23 >> 0x20);
        fVar24 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar27;
        fVar25 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
        fVar27 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
        fVar29 = *(float *)((undefined8 *)*param_3 + 1);
        fVar28 = *(float *)(lVar13 + 0x20) - fVar29;
        fVar29 = *(float *)(lVar9 + 0x20) - fVar29;
        if (fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28 <
            fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29) {
          *plVar6 = lVar13;
          *plVar11 = lVar9;
          lVar13 = param_1[5];
          param_1[5] = param_2[-1];
          param_2[-1] = lVar13;
          lVar13 = *plVar6;
          lVar9 = *plVar8;
          uVar23 = *(undefined8 *)*param_3;
          fVar25 = (float)uVar23;
          fVar22 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar25;
          fVar27 = (float)((ulong)uVar23 >> 0x20);
          fVar24 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar27;
          fVar25 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
          fVar27 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
          fVar29 = *(float *)((undefined8 *)*param_3 + 1);
          fVar28 = *(float *)(lVar13 + 0x20) - fVar29;
          fVar29 = *(float *)(lVar9 + 0x20) - fVar29;
          if (fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28 <
              fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29) {
            *plVar8 = lVar13;
            *plVar6 = lVar9;
            lVar13 = param_1[3];
            param_1[3] = param_1[5];
            param_1[5] = lVar13;
            lVar13 = *plVar8;
            lVar9 = *param_1;
            uVar23 = *(undefined8 *)*param_3;
            fVar25 = (float)uVar23;
            fVar22 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar25;
            fVar27 = (float)((ulong)uVar23 >> 0x20);
            fVar24 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar27;
            fVar25 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
            fVar27 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
            fVar29 = *(float *)((undefined8 *)*param_3 + 1);
            fVar28 = *(float *)(lVar13 + 0x20) - fVar29;
            fVar29 = *(float *)(lVar9 + 0x20) - fVar29;
            if (fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28 <
                fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29) {
              *param_1 = lVar13;
              *plVar8 = lVar9;
              lVar13 = param_1[1];
              param_1[1] = param_1[3];
              param_1[3] = lVar13;
            }
          }
        }
        return;
      }
      if (uVar20 == 5) {
        plVar8 = param_1 + 2;
        plVar6 = param_1 + 4;
        plVar7 = param_1 + 6;
        FUN_10a999e98();
        lVar13 = *plVar11;
        lVar9 = *plVar7;
        uVar23 = *(undefined8 *)*param_3;
        fVar25 = (float)uVar23;
        fVar22 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar25;
        fVar27 = (float)((ulong)uVar23 >> 0x20);
        fVar24 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar27;
        fVar25 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
        fVar27 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
        fVar29 = *(float *)((undefined8 *)*param_3 + 1);
        fVar28 = *(float *)(lVar13 + 0x20) - fVar29;
        fVar29 = *(float *)(lVar9 + 0x20) - fVar29;
        if (fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28 <
            fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29) {
          *plVar7 = lVar13;
          *plVar11 = lVar9;
          lVar13 = param_1[7];
          param_1[7] = param_2[-1];
          param_2[-1] = lVar13;
          lVar13 = *plVar7;
          lVar9 = *plVar6;
          uVar23 = *(undefined8 *)*param_3;
          fVar25 = (float)uVar23;
          fVar22 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar25;
          fVar27 = (float)((ulong)uVar23 >> 0x20);
          fVar24 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar27;
          fVar25 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
          fVar27 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
          fVar29 = *(float *)((undefined8 *)*param_3 + 1);
          fVar28 = *(float *)(lVar13 + 0x20) - fVar29;
          fVar29 = *(float *)(lVar9 + 0x20) - fVar29;
          if (fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28 <
              fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29) {
            *plVar6 = lVar13;
            *plVar7 = lVar9;
            lVar13 = param_1[5];
            param_1[5] = param_1[7];
            param_1[7] = lVar13;
            lVar13 = *plVar6;
            lVar9 = *plVar8;
            uVar23 = *(undefined8 *)*param_3;
            fVar25 = (float)uVar23;
            fVar22 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar25;
            fVar27 = (float)((ulong)uVar23 >> 0x20);
            fVar24 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar27;
            fVar25 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
            fVar27 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
            fVar29 = *(float *)((undefined8 *)*param_3 + 1);
            fVar28 = *(float *)(lVar13 + 0x20) - fVar29;
            fVar29 = *(float *)(lVar9 + 0x20) - fVar29;
            if (fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28 <
                fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29) {
              *plVar8 = lVar13;
              *plVar6 = lVar9;
              lVar13 = param_1[3];
              param_1[3] = param_1[5];
              param_1[5] = lVar13;
              lVar13 = *plVar8;
              lVar9 = *param_1;
              uVar23 = *(undefined8 *)*param_3;
              fVar25 = (float)uVar23;
              fVar22 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar25;
              fVar27 = (float)((ulong)uVar23 >> 0x20);
              fVar24 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar27;
              fVar25 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
              fVar27 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
              fVar29 = *(float *)((undefined8 *)*param_3 + 1);
              fVar28 = *(float *)(lVar13 + 0x20) - fVar29;
              fVar29 = *(float *)(lVar9 + 0x20) - fVar29;
              if (fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28 <
                  fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29) {
                *param_1 = lVar13;
                *plVar8 = lVar9;
                lVar13 = param_1[1];
                param_1[1] = param_1[3];
                param_1[3] = lVar13;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar20 < 0x18) {
      if ((param_5 & 1) == 0) {
        if (param_1 == param_2) {
          return;
        }
        plVar8 = param_1 + 2;
        if (plVar8 == param_2) {
          return;
        }
        lVar13 = 0x10;
        plVar11 = param_1;
        do {
          lVar9 = *plVar8;
          uVar23 = *(undefined8 *)*param_3;
          fVar25 = (float)uVar23;
          fVar22 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
          fVar27 = (float)((ulong)uVar23 >> 0x20);
          fVar24 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
          uVar23 = *(undefined8 *)(*plVar11 + 0x18);
          fVar25 = (float)uVar23 - fVar25;
          fVar27 = (float)((ulong)uVar23 >> 0x20) - fVar27;
          fVar29 = *(float *)((undefined8 *)*param_3 + 1);
          fVar28 = *(float *)(lVar9 + 0x20) - fVar29;
          fVar29 = *(float *)(*plVar11 + 0x20) - fVar29;
          if (fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28 <
              fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29) {
            plStack_68 = (long *)plVar11[3];
            *plVar8 = 0;
            plVar8[1] = 0;
            lVar10 = 0;
            lStack_70 = lVar9;
            do {
              lVar21 = lVar10;
              lVar10 = (long)plVar11 + lVar21;
              FUN_10a99a584(lVar10 + 0x10,lVar10);
              if (lVar13 + lVar21 == 0) {
LAB_10a999cc4:
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10a999cc8);
                (*pcVar5)();
              }
              lVar10 = *(long *)(lVar10 + -0x10);
              pfVar14 = (float *)*param_3;
              fVar24 = (float)*(undefined8 *)(lVar9 + 0x1c) - (float)*(undefined8 *)(pfVar14 + 1);
              fVar22 = (float)((ulong)*(undefined8 *)(pfVar14 + 1) >> 0x20);
              fVar25 = (float)((ulong)*(undefined8 *)(lVar9 + 0x1c) >> 0x20) - fVar22;
              fVar29 = *(float *)(lVar10 + 0x18) - *pfVar14;
              fVar22 = *(float *)(lVar10 + 0x20) - fVar22;
              fVar27 = *(float *)(lVar9 + 0x18) - (float)*(undefined8 *)pfVar14;
              fVar28 = *(float *)(lVar10 + 0x1c) - (float)((ulong)*(undefined8 *)pfVar14 >> 0x20);
              lVar10 = lVar21 + -0x10;
            } while (fVar25 * fVar25 + fVar24 * fVar24 + fVar27 * fVar27 <
                     fVar22 * fVar22 + fVar29 * fVar29 + fVar28 * fVar28);
            FUN_10a99a584((long)plVar11 + lVar21,&lStack_70);
            plVar8 = plStack_68;
            if (plStack_68 != (long *)0x0) {
              plVar6 = plStack_68 + 1;
              do {
                lVar9 = *plVar6;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = lVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*plStack_68 + 0x10))(plStack_68);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
              }
            }
          }
          plVar11 = plVar11 + 2;
          lVar13 = lVar13 + 0x10;
          plVar8 = (long *)((long)param_1 + lVar13);
          if (plVar8 == param_2) {
            return;
          }
        } while( true );
      }
      if (param_1 == param_2) {
        return;
      }
      if (param_1 + 2 == param_2) {
        return;
      }
      lVar13 = 0;
      plVar8 = param_1;
      plVar11 = param_1 + 2;
      break;
    }
    if (param_4 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar18 = uVar20 - 2 >> 1;
      uVar17 = uVar18;
      goto LAB_10a999614;
    }
    plVar8 = param_1 + (uVar20 & 0xfffffffffffffffe);
    if (uVar20 < 0x81) {
      FUN_10a999cc8(plVar8,param_1,plVar11,param_3);
    }
    else {
      FUN_10a999cc8(param_1,plVar8,plVar11,param_3);
      FUN_10a999cc8(param_1 + 2,plVar8 + -2,param_2 + -4,param_3);
      FUN_10a999cc8(param_1 + 4,plVar8 + 2,param_2 + -6,param_3);
      FUN_10a999cc8(plVar8 + -2,plVar8,plVar8 + 2,param_3);
      lVar9 = param_1[1];
      lVar13 = *param_1;
      lVar10 = *plVar8;
      param_1[1] = plVar8[1];
      *param_1 = lVar10;
      plVar8[1] = lVar9;
      *plVar8 = lVar13;
    }
    param_4 = param_4 + -1;
    lStack_70 = *param_1;
    if (((param_5 & 1) != 0) ||
       (uVar23 = *(undefined8 *)(param_1[-2] + 0x18), uVar26 = *(undefined8 *)*param_3,
       fVar25 = (float)uVar26, fVar22 = (float)uVar23 - fVar25,
       fVar27 = (float)((ulong)uVar26 >> 0x20), fVar24 = (float)((ulong)uVar23 >> 0x20) - fVar27,
       fVar25 = (float)*(undefined8 *)(lStack_70 + 0x18) - fVar25,
       fVar27 = (float)((ulong)*(undefined8 *)(lStack_70 + 0x18) >> 0x20) - fVar27,
       fVar29 = *(float *)((undefined8 *)*param_3 + 1),
       fVar28 = *(float *)(param_1[-2] + 0x20) - fVar29,
       fVar29 = *(float *)(lStack_70 + 0x20) - fVar29,
       fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28 <
       fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29)) {
      lVar13 = 0;
      plStack_68 = (long *)param_1[1];
      *param_1 = 0;
      param_1[1] = 0;
      pfVar14 = (float *)*param_3;
      do {
        plVar8 = (long *)((long)param_1 + lVar13 + 0x10);
        if (plVar8 == param_2) goto LAB_10a999cc4;
        lVar9 = *plVar8;
        fVar24 = *pfVar14;
        fVar29 = (float)*(undefined8 *)(pfVar14 + 1);
        fVar25 = (float)*(undefined8 *)(lVar9 + 0x1c) - fVar29;
        fVar22 = (float)((ulong)*(undefined8 *)(pfVar14 + 1) >> 0x20);
        fVar27 = (float)((ulong)*(undefined8 *)(lVar9 + 0x1c) >> 0x20) - fVar22;
        fVar28 = *(float *)(lStack_70 + 0x18) - fVar24;
        fVar30 = *(float *)(lStack_70 + 0x20) - fVar22;
        fVar31 = *(float *)(lVar9 + 0x18) - (float)*(undefined8 *)pfVar14;
        fVar32 = *(float *)(lStack_70 + 0x1c) - (float)((ulong)*(undefined8 *)pfVar14 >> 0x20);
        fVar28 = fVar30 * fVar30 + fVar28 * fVar28 + fVar32 * fVar32;
        lVar13 = lVar13 + 0x10;
      } while (fVar27 * fVar27 + fVar25 * fVar25 + fVar31 * fVar31 < fVar28);
      plVar6 = (long *)((long)param_1 + lVar13);
      plVar7 = param_2;
      if (lVar13 == 0x10) {
        do {
          if (plVar7 <= plVar6) break;
          plVar7 = plVar7 + -2;
          fVar25 = *(float *)(*plVar7 + 0x18) - fVar24;
          uVar23 = *(undefined8 *)(*plVar7 + 0x1c);
          fVar27 = (float)uVar23 - fVar29;
          fVar30 = (float)((ulong)uVar23 >> 0x20) - fVar22;
        } while (fVar28 <= fVar30 * fVar30 + fVar27 * fVar27 + fVar25 * fVar25);
      }
      else {
        do {
          if (plVar7 == param_1) goto LAB_10a999cc4;
          plVar7 = plVar7 + -2;
          fVar25 = *(float *)(*plVar7 + 0x18) - fVar24;
          uVar23 = *(undefined8 *)(*plVar7 + 0x1c);
          fVar27 = (float)uVar23 - fVar29;
          fVar30 = (float)((ulong)uVar23 >> 0x20) - fVar22;
        } while (fVar28 <= fVar30 * fVar30 + fVar27 * fVar27 + fVar25 * fVar25);
      }
      plVar8 = plVar6;
      if (plVar6 < plVar7) {
        lVar13 = *plVar7;
        plVar12 = plVar7;
        do {
          *plVar8 = lVar13;
          *plVar12 = lVar9;
          lVar13 = plVar8[1];
          plVar8[1] = plVar12[1];
          plVar12[1] = lVar13;
          pfVar14 = (float *)*param_3;
          do {
            plVar8 = plVar8 + 2;
            if (plVar8 == param_2) goto LAB_10a999cc4;
            lVar9 = *plVar8;
            fVar29 = (float)*(undefined8 *)(pfVar14 + 1);
            fVar24 = (float)*(undefined8 *)(lVar9 + 0x1c) - fVar29;
            fVar22 = (float)((ulong)*(undefined8 *)(pfVar14 + 1) >> 0x20);
            fVar25 = (float)((ulong)*(undefined8 *)(lVar9 + 0x1c) >> 0x20) - fVar22;
            fVar27 = *(float *)(lStack_70 + 0x18) - *pfVar14;
            fVar28 = *(float *)(lStack_70 + 0x20) - fVar22;
            fVar30 = *(float *)(lVar9 + 0x18) - (float)*(undefined8 *)pfVar14;
            fVar31 = *(float *)(lStack_70 + 0x1c) - (float)((ulong)*(undefined8 *)pfVar14 >> 0x20);
            fVar27 = fVar28 * fVar28 + fVar27 * fVar27 + fVar31 * fVar31;
          } while (fVar25 * fVar25 + fVar24 * fVar24 + fVar30 * fVar30 < fVar27);
          do {
            if (plVar12 == param_1) goto LAB_10a999cc4;
            plVar12 = plVar12 + -2;
            lVar13 = *plVar12;
            fVar24 = *(float *)(lVar13 + 0x18) - *pfVar14;
            fVar25 = (float)*(undefined8 *)(lVar13 + 0x1c) - fVar29;
            fVar28 = (float)((ulong)*(undefined8 *)(lVar13 + 0x1c) >> 0x20) - fVar22;
          } while (fVar27 <= fVar28 * fVar28 + fVar25 * fVar25 + fVar24 * fVar24);
        } while (plVar8 < plVar12);
      }
      plVar12 = plVar8 + -2;
      if (plVar12 != param_1) {
        FUN_10a99a584(param_1,plVar12);
      }
      FUN_10a99a584(plVar12,&lStack_70);
      plVar4 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar1 = plStack_68 + 1;
        do {
          lVar13 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      if (plVar7 <= plVar6) {
        plVar6 = param_1;
        FUN_10a99a288(param_1,plVar12,param_3);
        plVar7 = plVar8;
        FUN_10a99a288(plVar8,param_2,param_3);
        if ((int)plVar7 != 0) goto LAB_10a99935c;
        if (((ulong)plVar6 & 1) != 0) goto LAB_10a998cec;
      }
      FUN_10a998ca4(param_1,plVar12,param_3,param_4,param_5 & 1);
      param_5 = 0;
      goto LAB_10a998cec;
    }
    plStack_68 = (long *)param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
    fVar29 = *(float *)((undefined8 *)*param_3 + 1);
    uVar23 = *(undefined8 *)*param_3;
    fVar22 = (float)uVar23;
    fVar25 = (float)*(undefined8 *)(lStack_70 + 0x18) - fVar22;
    fVar24 = (float)((ulong)uVar23 >> 0x20);
    fVar27 = (float)((ulong)*(undefined8 *)(lStack_70 + 0x18) >> 0x20) - fVar24;
    fVar25 = fVar25 * fVar25;
    uVar23 = *(undefined8 *)(*plVar11 + 0x18);
    fVar28 = (float)uVar23 - fVar22;
    fVar30 = (float)((ulong)uVar23 >> 0x20) - fVar24;
    fVar30 = fVar30 * fVar30;
    fVar31 = *(float *)(lStack_70 + 0x20) - fVar29;
    fVar32 = *(float *)(*plVar11 + 0x20) - fVar29;
    uVar23 = NEON_ext(CONCAT44(fVar27 * fVar27,fVar25),CONCAT44(fVar30,fVar28 * fVar28),4,1);
    fVar25 = fVar31 * fVar31 + (float)uVar23 + fVar25;
    plVar8 = param_1;
    if (fVar32 * fVar32 + (float)((ulong)uVar23 >> 0x20) + fVar30 <= fVar25) {
      do {
        plVar8 = plVar8 + 2;
        if (param_2 <= plVar8) break;
        fVar27 = *(float *)(*plVar8 + 0x20) - fVar29;
        uVar23 = *(undefined8 *)(*plVar8 + 0x18);
        fVar28 = (float)uVar23 - fVar22;
        fVar30 = (float)((ulong)uVar23 >> 0x20) - fVar24;
      } while (fVar28 * fVar28 + fVar30 * fVar30 + fVar27 * fVar27 <= fVar25);
    }
    else {
      do {
        plVar8 = plVar8 + 2;
        if (plVar8 == param_2) goto LAB_10a999cc4;
        fVar27 = *(float *)(*plVar8 + 0x20) - fVar29;
        uVar23 = *(undefined8 *)(*plVar8 + 0x18);
        fVar28 = (float)uVar23 - fVar22;
        fVar30 = (float)((ulong)uVar23 >> 0x20) - fVar24;
      } while (fVar28 * fVar28 + fVar30 * fVar30 + fVar27 * fVar27 <= fVar25);
    }
    plVar6 = param_2;
    if (plVar8 < param_2) {
      do {
        if (plVar6 == param_1) goto LAB_10a999cc4;
        plVar6 = plVar6 + -2;
        fVar27 = *(float *)(*plVar6 + 0x20) - fVar29;
        uVar23 = *(undefined8 *)(*plVar6 + 0x18);
        fVar28 = (float)uVar23 - fVar22;
        fVar30 = (float)((ulong)uVar23 >> 0x20) - fVar24;
      } while (fVar25 < fVar28 * fVar28 + fVar30 * fVar30 + fVar27 * fVar27);
    }
    if (plVar8 < plVar6) {
      lVar13 = *plVar8;
      lVar9 = *plVar6;
      do {
        *plVar8 = lVar9;
        *plVar6 = lVar13;
        lVar13 = plVar8[1];
        plVar8[1] = plVar6[1];
        plVar6[1] = lVar13;
        do {
          plVar8 = plVar8 + 2;
          if (plVar8 == param_2) goto LAB_10a999cc4;
          lVar13 = *plVar8;
          fVar29 = *(float *)((undefined8 *)*param_3 + 1);
          uVar23 = *(undefined8 *)*param_3;
          fVar22 = (float)uVar23;
          fVar25 = (float)*(undefined8 *)(lStack_70 + 0x18) - fVar22;
          fVar24 = (float)((ulong)uVar23 >> 0x20);
          fVar27 = (float)((ulong)*(undefined8 *)(lStack_70 + 0x18) >> 0x20) - fVar24;
          fVar25 = fVar25 * fVar25;
          fVar28 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar22;
          fVar30 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar24;
          fVar30 = fVar30 * fVar30;
          fVar31 = *(float *)(lStack_70 + 0x20) - fVar29;
          fVar32 = *(float *)(lVar13 + 0x20) - fVar29;
          uVar23 = NEON_ext(CONCAT44(fVar27 * fVar27,fVar25),CONCAT44(fVar30,fVar28 * fVar28),4,1);
          fVar25 = fVar31 * fVar31 + (float)uVar23 + fVar25;
        } while (fVar32 * fVar32 + (float)((ulong)uVar23 >> 0x20) + fVar30 <= fVar25);
        do {
          if (plVar6 == param_1) goto LAB_10a999cc4;
          plVar6 = plVar6 + -2;
          lVar9 = *plVar6;
          fVar27 = *(float *)(lVar9 + 0x20) - fVar29;
          fVar28 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar22;
          fVar30 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar24;
        } while (fVar25 < fVar28 * fVar28 + fVar30 * fVar30 + fVar27 * fVar27);
      } while (plVar8 < plVar6);
    }
    plVar6 = plVar8 + -2;
    if (plVar6 != param_1) {
      FUN_10a99a584(param_1,plVar6);
    }
    FUN_10a99a584(plVar6,&lStack_70);
    plVar6 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar7 = plStack_68 + 1;
      do {
        lVar13 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    param_5 = 0;
  } while( true );
LAB_10a9994a4:
  lVar9 = plVar8[2];
  uVar23 = *(undefined8 *)*param_3;
  fVar25 = (float)uVar23;
  fVar22 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
  fVar27 = (float)((ulong)uVar23 >> 0x20);
  fVar24 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
  uVar23 = *(undefined8 *)(*plVar8 + 0x18);
  fVar25 = (float)uVar23 - fVar25;
  fVar27 = (float)((ulong)uVar23 >> 0x20) - fVar27;
  fVar29 = *(float *)((undefined8 *)*param_3 + 1);
  fVar28 = *(float *)(lVar9 + 0x20) - fVar29;
  fVar29 = *(float *)(*plVar8 + 0x20) - fVar29;
  if (fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28 <
      fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29) {
    plStack_68 = (long *)plVar8[3];
    *plVar11 = 0;
    plVar11[1] = 0;
    lVar10 = lVar13;
    lStack_70 = lVar9;
    do {
      lVar21 = lVar10;
      lVar10 = (long)param_1 + lVar21;
      FUN_10a99a584(lVar10 + 0x10,lVar10);
      plVar8 = param_1;
      if (lVar21 == 0) goto LAB_10a9995ac;
      lVar10 = *(long *)(lVar10 + -0x10);
      pfVar14 = (float *)*param_3;
      fVar24 = (float)*(undefined8 *)(lVar9 + 0x1c) - (float)*(undefined8 *)(pfVar14 + 1);
      fVar22 = (float)((ulong)*(undefined8 *)(pfVar14 + 1) >> 0x20);
      fVar25 = (float)((ulong)*(undefined8 *)(lVar9 + 0x1c) >> 0x20) - fVar22;
      fVar29 = *(float *)(lVar10 + 0x18) - *pfVar14;
      fVar22 = *(float *)(lVar10 + 0x20) - fVar22;
      fVar27 = *(float *)(lVar9 + 0x18) - (float)*(undefined8 *)pfVar14;
      fVar28 = *(float *)(lVar10 + 0x1c) - (float)((ulong)*(undefined8 *)pfVar14 >> 0x20);
      lVar10 = lVar21 + -0x10;
    } while (fVar25 * fVar25 + fVar24 * fVar24 + fVar27 * fVar27 <
             fVar22 * fVar22 + fVar29 * fVar29 + fVar28 * fVar28);
    plVar8 = (long *)((long)param_1 + lVar21);
LAB_10a9995ac:
    FUN_10a99a584(plVar8,&lStack_70);
    plVar8 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar6 = plStack_68 + 1;
      do {
        lVar9 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  plVar6 = plVar11 + 2;
  lVar13 = lVar13 + 0x10;
  plVar8 = plVar11;
  plVar11 = plVar6;
  if (plVar6 == param_2) {
    return;
  }
  goto LAB_10a9994a4;
LAB_10a999614:
  do {
    if ((long)uVar17 <= (long)uVar18) {
      uVar19 = uVar17 << 1 | 1;
      plVar8 = param_1 + uVar19 * 2;
      uVar16 = uVar17 * 2 + 2;
      pfVar14 = (float *)*param_3;
      fVar29 = *pfVar14;
      if ((long)uVar16 < (long)uVar20) {
        fVar24 = pfVar14[1];
        fVar22 = pfVar14[2];
        lVar13 = plVar8[2];
        uVar23 = *(undefined8 *)(*plVar8 + 0x18);
        uVar26 = *(undefined8 *)(lVar13 + 0x18);
        fVar31 = (float)uVar23 - fVar29;
        fVar32 = (float)uVar26 - fVar29;
        fVar25 = (float)((ulong)uVar23 >> 0x20) - fVar24;
        fVar27 = (float)((ulong)uVar26 >> 0x20) - fVar24;
        fVar28 = *(float *)(*plVar8 + 0x20) - fVar22;
        fVar30 = *(float *)(lVar13 + 0x20) - fVar22;
        plVar11 = plVar8 + 2;
        if (fVar32 * fVar32 + fVar27 * fVar27 + fVar30 * fVar30 <=
            fVar31 * fVar31 + fVar25 * fVar25 + fVar28 * fVar28) {
          plVar11 = plVar8;
          uVar16 = uVar19;
        }
      }
      else {
        fVar24 = pfVar14[1];
        fVar22 = pfVar14[2];
        plVar11 = plVar8;
        uVar16 = uVar19;
      }
      plVar8 = param_1 + uVar17 * 2;
      lVar13 = *plVar8;
      uVar23 = *(undefined8 *)(*plVar11 + 0x18);
      fVar27 = (float)uVar23 - fVar29;
      fVar29 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar29;
      fVar28 = (float)((ulong)uVar23 >> 0x20) - fVar24;
      fVar24 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar24;
      fVar25 = *(float *)(*plVar11 + 0x20) - fVar22;
      fVar22 = *(float *)(lVar13 + 0x20) - fVar22;
      if (fVar29 * fVar29 + fVar24 * fVar24 + fVar22 * fVar22 <=
          fVar27 * fVar27 + fVar28 * fVar28 + fVar25 * fVar25) {
        plStack_68 = (long *)plVar8[1];
        *plVar8 = 0;
        plVar8[1] = 0;
        lStack_70 = lVar13;
        do {
          plVar6 = plVar11;
          FUN_10a99a584(plVar8,plVar6);
          if ((long)uVar18 < (long)uVar16) break;
          uVar19 = uVar16 << 1 | 1;
          plVar8 = param_1 + uVar19 * 2;
          uVar16 = uVar16 * 2 + 2;
          puVar15 = (undefined8 *)*param_3;
          if ((long)uVar16 < (long)uVar20) {
            lVar9 = plVar8[2];
            fVar29 = *(float *)(puVar15 + 1);
            uVar23 = *puVar15;
            uVar26 = *(undefined8 *)(*plVar8 + 0x18);
            fVar24 = (float)uVar26 - (float)uVar23;
            fVar22 = (float)((ulong)uVar23 >> 0x20);
            fVar25 = (float)((ulong)uVar26 >> 0x20) - fVar22;
            fVar24 = fVar24 * fVar24;
            uVar26 = *(undefined8 *)(lVar9 + 0x18);
            fVar27 = (float)uVar26 - (float)uVar23;
            fVar22 = (float)((ulong)uVar26 >> 0x20) - fVar22;
            fVar22 = fVar22 * fVar22;
            fVar28 = *(float *)(*plVar8 + 0x20) - fVar29;
            fVar30 = *(float *)(lVar9 + 0x20) - fVar29;
            uVar26 = NEON_ext(CONCAT44(fVar25 * fVar25,fVar24),CONCAT44(fVar22,fVar27 * fVar27),4,1)
            ;
            plVar11 = plVar8 + 2;
            if (fVar30 * fVar30 + (float)((ulong)uVar26 >> 0x20) + fVar22 <=
                fVar28 * fVar28 + (float)uVar26 + fVar24) {
              plVar11 = plVar8;
              uVar16 = uVar19;
            }
          }
          else {
            fVar29 = *(float *)(puVar15 + 1);
            uVar23 = *puVar15;
            plVar11 = plVar8;
            uVar16 = uVar19;
          }
          uVar26 = *(undefined8 *)(*plVar11 + 0x18);
          fVar27 = (float)*(undefined8 *)(lVar13 + 0x18) - (float)uVar23;
          fVar25 = (float)((ulong)uVar23 >> 0x20);
          fVar28 = (float)((ulong)uVar26 >> 0x20) - fVar25;
          fVar24 = (float)uVar26 - (float)uVar23;
          fVar25 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar25;
          fVar22 = *(float *)(lVar13 + 0x20) - fVar29;
          fVar29 = *(float *)(*plVar11 + 0x20) - fVar29;
          uVar23 = NEON_rev64(CONCAT44(fVar25 * fVar25,fVar24 * fVar24),4);
          plVar8 = plVar6;
        } while (fVar22 * fVar22 + fVar27 * fVar27 + (float)uVar23 <=
                 fVar29 * fVar29 + fVar28 * fVar28 + (float)((ulong)uVar23 >> 0x20));
        FUN_10a99a584(plVar6,&lStack_70);
        plVar8 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar11 = plStack_68 + 1;
          do {
            lVar13 = *plVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = lVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
      }
    }
    bVar3 = uVar17 != 0;
    uVar17 = uVar17 - 1;
  } while (bVar3);
  do {
    plStack_78 = (long *)param_1[1];
    lStack_80 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    plVar8 = param_1;
    uVar17 = 0;
    do {
      uVar16 = uVar17 << 1 | 1;
      uVar18 = uVar17 * 2 + 2;
      plVar11 = plVar8 + uVar17 * 2 + 2;
      uVar19 = uVar16;
      if ((long)uVar18 < (long)uVar20) {
        lVar13 = plVar8[uVar17 * 2 + 4];
        pfVar14 = (float *)*param_3;
        uVar23 = *(undefined8 *)(plVar8[uVar17 * 2 + 2] + 0x1c);
        fVar24 = (float)uVar23 - (float)*(undefined8 *)(pfVar14 + 1);
        fVar22 = (float)((ulong)*(undefined8 *)(pfVar14 + 1) >> 0x20);
        fVar25 = (float)((ulong)uVar23 >> 0x20) - fVar22;
        fVar29 = *(float *)(lVar13 + 0x18) - *pfVar14;
        fVar22 = *(float *)(lVar13 + 0x20) - fVar22;
        fVar27 = *(float *)(plVar8[uVar17 * 2 + 2] + 0x18) - (float)*(undefined8 *)pfVar14;
        fVar28 = *(float *)(lVar13 + 0x1c) - (float)((ulong)*(undefined8 *)pfVar14 >> 0x20);
        plVar11 = plVar8 + uVar17 * 2 + 4;
        uVar19 = uVar18;
        if (fVar22 * fVar22 + fVar29 * fVar29 + fVar28 * fVar28 <=
            fVar25 * fVar25 + fVar24 * fVar24 + fVar27 * fVar27) {
          plVar11 = plVar8 + uVar17 * 2 + 2;
          uVar19 = uVar16;
        }
      }
      FUN_10a99a584(plVar8,plVar11);
      plVar8 = plVar11;
      uVar17 = uVar19;
    } while ((long)uVar19 <= (long)(uVar20 - 2 >> 1));
    param_2 = param_2 + -2;
    if (plVar11 == param_2) {
      FUN_10a99a584(plVar11,&lStack_80);
    }
    else {
      FUN_10a99a584(plVar11,param_2);
      FUN_10a99a584(param_2,&lStack_80);
      lVar13 = (long)plVar11 + (0x10 - (long)param_1) >> 4;
      if (1 < lVar13) {
        uVar17 = lVar13 - 2U >> 1;
        lVar9 = *plVar11;
        pfVar14 = (float *)*param_3;
        lVar13 = param_1[uVar17 * 2];
        uVar23 = *(undefined8 *)(lVar13 + 0x1c);
        fVar24 = (float)uVar23 - (float)*(undefined8 *)(pfVar14 + 1);
        fVar22 = (float)((ulong)*(undefined8 *)(pfVar14 + 1) >> 0x20);
        fVar25 = (float)((ulong)uVar23 >> 0x20) - fVar22;
        fVar29 = *(float *)(lVar9 + 0x18) - *pfVar14;
        fVar22 = *(float *)(lVar9 + 0x20) - fVar22;
        fVar27 = *(float *)(lVar13 + 0x18) - (float)*(undefined8 *)pfVar14;
        fVar28 = *(float *)(lVar9 + 0x1c) - (float)((ulong)*(undefined8 *)pfVar14 >> 0x20);
        if (fVar25 * fVar25 + fVar24 * fVar24 + fVar27 * fVar27 <
            fVar22 * fVar22 + fVar29 * fVar29 + fVar28 * fVar28) {
          plStack_68 = (long *)plVar11[1];
          *plVar11 = 0;
          plVar11[1] = 0;
          plVar8 = param_1 + uVar17 * 2;
          lStack_70 = lVar9;
          do {
            plVar6 = plVar8;
            FUN_10a99a584(plVar11,plVar6);
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1 >> 1;
            pfVar14 = (float *)*param_3;
            lVar13 = param_1[uVar17 * 2];
            uVar23 = *(undefined8 *)(lVar13 + 0x1c);
            fVar24 = (float)uVar23 - (float)*(undefined8 *)(pfVar14 + 1);
            fVar22 = (float)((ulong)*(undefined8 *)(pfVar14 + 1) >> 0x20);
            fVar25 = (float)((ulong)uVar23 >> 0x20) - fVar22;
            fVar29 = *(float *)(lVar9 + 0x18) - *pfVar14;
            fVar22 = *(float *)(lVar9 + 0x20) - fVar22;
            fVar27 = *(float *)(lVar13 + 0x18) - (float)*(undefined8 *)pfVar14;
            fVar28 = *(float *)(lVar9 + 0x1c) - (float)((ulong)*(undefined8 *)pfVar14 >> 0x20);
            plVar8 = param_1 + uVar17 * 2;
            plVar11 = plVar6;
          } while (fVar25 * fVar25 + fVar24 * fVar24 + fVar27 * fVar27 <
                   fVar22 * fVar22 + fVar29 * fVar29 + fVar28 * fVar28);
          FUN_10a99a584(plVar6,&lStack_70);
          plVar8 = plStack_68;
          if (plStack_68 != (long *)0x0) {
            plVar11 = plStack_68 + 1;
            do {
              lVar13 = *plVar11;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar3) {
                *plVar11 = lVar13 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plStack_68 + 0x10))(plStack_68);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
        }
      }
    }
    plVar8 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar11 = plStack_78 + 1;
      do {
        lVar13 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    bVar3 = (long)uVar20 < 3;
    uVar20 = uVar20 - 1;
    if (bVar3) {
      return;
    }
  } while( true );
LAB_10a99935c:
  param_2 = plVar12;
  if (((ulong)plVar6 & 1) != 0) {
    return;
  }
  goto LAB_10a998cd8;
}



/* Entry: 10a999cc8; end: 10a999e97;  */

void FUN_10a999cc8(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar2 = *param_2;
  fVar6 = *(float *)((undefined8 *)*param_4 + 1);
  lVar4 = *param_1;
  fVar8 = *(float *)(lVar4 + 0x20) - fVar6;
  lVar5 = *param_3;
  uVar11 = *(undefined8 *)*param_4;
  fVar9 = (float)uVar11;
  fVar12 = (float)*(undefined8 *)(lVar2 + 0x18) - fVar9;
  fVar10 = (float)((ulong)uVar11 >> 0x20);
  fVar13 = (float)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20) - fVar10;
  fVar14 = (float)*(undefined8 *)(lVar4 + 0x18) - fVar9;
  fVar15 = (float)((ulong)*(undefined8 *)(lVar4 + 0x18) >> 0x20) - fVar10;
  fVar9 = (float)*(undefined8 *)(lVar5 + 0x18) - fVar9;
  fVar10 = (float)((ulong)*(undefined8 *)(lVar5 + 0x18) >> 0x20) - fVar10;
  fVar7 = *(float *)(lVar5 + 0x20) - fVar6;
  fVar6 = *(float *)(lVar2 + 0x20) - fVar6;
  fVar7 = fVar9 * fVar9 + fVar10 * fVar10 + fVar7 * fVar7;
  fVar6 = fVar12 * fVar12 + fVar13 * fVar13 + fVar6 * fVar6;
  if (fVar14 * fVar14 + fVar15 * fVar15 + fVar8 * fVar8 <= fVar6) {
    if (fVar6 <= fVar7) {
      return;
    }
    *param_2 = lVar5;
    *param_3 = lVar2;
    plVar3 = param_2 + 1;
    lVar2 = *plVar3;
    *plVar3 = param_3[1];
    param_3[1] = lVar2;
    lVar2 = *param_2;
    lVar4 = *param_1;
    uVar11 = *(undefined8 *)*param_4;
    fVar9 = (float)uVar11;
    fVar7 = (float)*(undefined8 *)(lVar2 + 0x18) - fVar9;
    fVar10 = (float)((ulong)uVar11 >> 0x20);
    fVar8 = (float)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20) - fVar10;
    fVar9 = (float)*(undefined8 *)(lVar4 + 0x18) - fVar9;
    fVar10 = (float)((ulong)*(undefined8 *)(lVar4 + 0x18) >> 0x20) - fVar10;
    fVar6 = *(float *)((undefined8 *)*param_4 + 1);
    fVar12 = *(float *)(lVar2 + 0x20) - fVar6;
    fVar6 = *(float *)(lVar4 + 0x20) - fVar6;
    if (fVar9 * fVar9 + fVar10 * fVar10 + fVar6 * fVar6 <=
        fVar7 * fVar7 + fVar8 * fVar8 + fVar12 * fVar12) {
      return;
    }
    plVar1 = param_1 + 1;
    *param_1 = lVar2;
    *param_2 = lVar4;
  }
  else {
    if (fVar6 <= fVar7) {
      *param_1 = lVar2;
      *param_2 = lVar4;
      plVar1 = param_2 + 1;
      lVar2 = param_1[1];
      param_1[1] = *plVar1;
      *plVar1 = lVar2;
      lVar2 = *param_3;
      lVar4 = *param_2;
      uVar11 = *(undefined8 *)*param_4;
      fVar9 = (float)uVar11;
      fVar7 = (float)*(undefined8 *)(lVar2 + 0x18) - fVar9;
      fVar10 = (float)((ulong)uVar11 >> 0x20);
      fVar8 = (float)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20) - fVar10;
      fVar9 = (float)*(undefined8 *)(lVar4 + 0x18) - fVar9;
      fVar10 = (float)((ulong)*(undefined8 *)(lVar4 + 0x18) >> 0x20) - fVar10;
      fVar6 = *(float *)((undefined8 *)*param_4 + 1);
      fVar12 = *(float *)(lVar2 + 0x20) - fVar6;
      fVar6 = *(float *)(lVar4 + 0x20) - fVar6;
      if (fVar9 * fVar9 + fVar10 * fVar10 + fVar6 * fVar6 <=
          fVar7 * fVar7 + fVar8 * fVar8 + fVar12 * fVar12) {
        return;
      }
      *param_2 = lVar2;
      *param_3 = lVar4;
    }
    else {
      plVar1 = param_1 + 1;
      *param_1 = lVar5;
      *param_3 = lVar4;
    }
    plVar3 = param_3 + 1;
  }
  lVar2 = *plVar1;
  *plVar1 = *plVar3;
  *plVar3 = lVar2;
  return;
}



/* Entry: 10a999e98; end: 10a99a287;  */

void FUN_10a999e98(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  FUN_10a999cc8();
  lVar1 = *param_4;
  lVar2 = *param_3;
  uVar6 = *(undefined8 *)*param_5;
  fVar5 = (float)uVar6;
  fVar3 = (float)*(undefined8 *)(lVar1 + 0x18) - fVar5;
  fVar7 = (float)((ulong)uVar6 >> 0x20);
  fVar4 = (float)((ulong)*(undefined8 *)(lVar1 + 0x18) >> 0x20) - fVar7;
  fVar5 = (float)*(undefined8 *)(lVar2 + 0x18) - fVar5;
  fVar7 = (float)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20) - fVar7;
  fVar9 = *(float *)((undefined8 *)*param_5 + 1);
  fVar8 = *(float *)(lVar1 + 0x20) - fVar9;
  fVar9 = *(float *)(lVar2 + 0x20) - fVar9;
  if (fVar3 * fVar3 + fVar4 * fVar4 + fVar8 * fVar8 < fVar5 * fVar5 + fVar7 * fVar7 + fVar9 * fVar9)
  {
    *param_3 = lVar1;
    *param_4 = lVar2;
    lVar1 = param_3[1];
    param_3[1] = param_4[1];
    param_4[1] = lVar1;
    lVar1 = *param_3;
    lVar2 = *param_2;
    uVar6 = *(undefined8 *)*param_5;
    fVar5 = (float)uVar6;
    fVar3 = (float)*(undefined8 *)(lVar1 + 0x18) - fVar5;
    fVar7 = (float)((ulong)uVar6 >> 0x20);
    fVar4 = (float)((ulong)*(undefined8 *)(lVar1 + 0x18) >> 0x20) - fVar7;
    fVar5 = (float)*(undefined8 *)(lVar2 + 0x18) - fVar5;
    fVar7 = (float)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20) - fVar7;
    fVar9 = *(float *)((undefined8 *)*param_5 + 1);
    fVar8 = *(float *)(lVar1 + 0x20) - fVar9;
    fVar9 = *(float *)(lVar2 + 0x20) - fVar9;
    if (fVar3 * fVar3 + fVar4 * fVar4 + fVar8 * fVar8 <
        fVar5 * fVar5 + fVar7 * fVar7 + fVar9 * fVar9) {
      *param_2 = lVar1;
      *param_3 = lVar2;
      lVar1 = param_2[1];
      param_2[1] = param_3[1];
      param_3[1] = lVar1;
      lVar1 = *param_2;
      lVar2 = *param_1;
      uVar6 = *(undefined8 *)*param_5;
      fVar5 = (float)uVar6;
      fVar3 = (float)*(undefined8 *)(lVar1 + 0x18) - fVar5;
      fVar7 = (float)((ulong)uVar6 >> 0x20);
      fVar4 = (float)((ulong)*(undefined8 *)(lVar1 + 0x18) >> 0x20) - fVar7;
      fVar5 = (float)*(undefined8 *)(lVar2 + 0x18) - fVar5;
      fVar7 = (float)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20) - fVar7;
      fVar9 = *(float *)((undefined8 *)*param_5 + 1);
      fVar8 = *(float *)(lVar1 + 0x20) - fVar9;
      fVar9 = *(float *)(lVar2 + 0x20) - fVar9;
      if (fVar3 * fVar3 + fVar4 * fVar4 + fVar8 * fVar8 <
          fVar5 * fVar5 + fVar7 * fVar7 + fVar9 * fVar9) {
        *param_1 = lVar1;
        *param_2 = lVar2;
        lVar1 = param_1[1];
        param_1[1] = param_2[1];
        param_2[1] = lVar1;
      }
    }
  }
  return;
}



/* Entry: 10a99a288; end: 10a99a583;  */

bool FUN_10a99a288(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  long lStack_70;
  long *plStack_68;
  
  uVar5 = (long)param_2 - (long)param_1 >> 4;
  if ((long)uVar5 < 3) {
    if (uVar5 < 2) {
      return true;
    }
    if (uVar5 == 2) {
      lVar6 = param_2[-2];
      lVar8 = *param_1;
      uVar16 = *(undefined8 *)*param_3;
      fVar15 = (float)uVar16;
      fVar13 = (float)*(undefined8 *)(lVar6 + 0x18) - fVar15;
      fVar17 = (float)((ulong)uVar16 >> 0x20);
      fVar14 = (float)((ulong)*(undefined8 *)(lVar6 + 0x18) >> 0x20) - fVar17;
      fVar15 = (float)*(undefined8 *)(lVar8 + 0x18) - fVar15;
      fVar17 = (float)((ulong)*(undefined8 *)(lVar8 + 0x18) >> 0x20) - fVar17;
      fVar19 = *(float *)((undefined8 *)*param_3 + 1);
      fVar18 = *(float *)(lVar6 + 0x20) - fVar19;
      fVar19 = *(float *)(lVar8 + 0x20) - fVar19;
      if (fVar15 * fVar15 + fVar17 * fVar17 + fVar19 * fVar19 <=
          fVar13 * fVar13 + fVar14 * fVar14 + fVar18 * fVar18) {
        return true;
      }
      *param_1 = lVar6;
      param_2[-2] = lVar8;
      lVar6 = param_1[1];
      param_1[1] = param_2[-1];
      param_2[-1] = lVar6;
      return true;
    }
  }
  else {
    if (uVar5 == 3) {
      FUN_10a999cc8(param_1,param_1 + 2,param_2 + -2,param_3);
      return true;
    }
    if (uVar5 == 4) {
      func_0x00010a999e98(param_1,param_1 + 2,param_1 + 4,param_2 + -2,param_3);
      return true;
    }
    if (uVar5 == 5) {
      func_0x00010a99a050(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2,param_3);
      return true;
    }
  }
  FUN_10a999cc8(param_1,param_1 + 2,param_1 + 4,param_3);
  if (param_1 + 6 != param_2) {
    lVar6 = 0;
    iVar12 = 0;
    plVar4 = param_1 + 4;
    plVar11 = param_1 + 6;
    do {
      lVar8 = *plVar11;
      uVar16 = *(undefined8 *)*param_3;
      fVar15 = (float)uVar16;
      fVar13 = (float)*(undefined8 *)(lVar8 + 0x18) - fVar15;
      fVar17 = (float)((ulong)uVar16 >> 0x20);
      fVar14 = (float)((ulong)*(undefined8 *)(lVar8 + 0x18) >> 0x20) - fVar17;
      uVar16 = *(undefined8 *)(*plVar4 + 0x18);
      fVar15 = (float)uVar16 - fVar15;
      fVar17 = (float)((ulong)uVar16 >> 0x20) - fVar17;
      fVar19 = *(float *)((undefined8 *)*param_3 + 1);
      fVar18 = *(float *)(lVar8 + 0x20) - fVar19;
      fVar19 = *(float *)(*plVar4 + 0x20) - fVar19;
      if (fVar13 * fVar13 + fVar14 * fVar14 + fVar18 * fVar18 <
          fVar15 * fVar15 + fVar17 * fVar17 + fVar19 * fVar19) {
        plStack_68 = (long *)plVar11[1];
        *plVar11 = 0;
        plVar11[1] = 0;
        lVar7 = lVar6;
        lStack_70 = lVar8;
        do {
          lVar10 = lVar7;
          FUN_10a99a584((long)param_1 + lVar10 + 0x30,(long)param_1 + lVar10 + 0x20);
          plVar4 = param_1;
          if (lVar10 == -0x20) goto LAB_10a99a4d4;
          lVar7 = *(long *)((long)param_1 + lVar10 + 0x10);
          pfVar9 = (float *)*param_3;
          fVar14 = (float)*(undefined8 *)(lVar8 + 0x1c) - (float)*(undefined8 *)(pfVar9 + 1);
          fVar13 = (float)((ulong)*(undefined8 *)(pfVar9 + 1) >> 0x20);
          fVar15 = (float)((ulong)*(undefined8 *)(lVar8 + 0x1c) >> 0x20) - fVar13;
          fVar19 = *(float *)(lVar7 + 0x18) - *pfVar9;
          fVar13 = *(float *)(lVar7 + 0x20) - fVar13;
          fVar17 = *(float *)(lVar8 + 0x18) - (float)*(undefined8 *)pfVar9;
          fVar18 = *(float *)(lVar7 + 0x1c) - (float)((ulong)*(undefined8 *)pfVar9 >> 0x20);
          lVar7 = lVar10 + -0x10;
        } while (fVar15 * fVar15 + fVar14 * fVar14 + fVar17 * fVar17 <
                 fVar13 * fVar13 + fVar19 * fVar19 + fVar18 * fVar18);
        plVar4 = (long *)((long)param_1 + lVar10 + 0x20);
LAB_10a99a4d4:
        FUN_10a99a584(plVar4,&lStack_70);
        plVar4 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar1 = plStack_68 + 1;
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
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        iVar12 = iVar12 + 1;
        if (iVar12 == 8) {
          return plVar11 + 2 == param_2;
        }
      }
      plVar1 = plVar11 + 2;
      lVar6 = lVar6 + 0x10;
      plVar4 = plVar11;
      plVar11 = plVar1;
    } while (plVar1 != param_2);
  }
  return true;
}


