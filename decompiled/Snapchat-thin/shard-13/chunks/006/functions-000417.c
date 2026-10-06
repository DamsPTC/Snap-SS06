/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a98cf60; end: 10a98dc0f;  */

void FUN_10a98cf60(long *param_1,long param_2)

{
  int **ppiVar1;
  long *plVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  int **ppiVar7;
  undefined8 *puVar8;
  long *plVar9;
  char cVar10;
  long lVar11;
  long lVar12;
  int **ppiVar13;
  long *plVar14;
  undefined1 uVar15;
  long *plVar16;
  long *plVar17;
  double dVar18;
  long lVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  long lStack_2a0;
  long *plStack_298;
  long *plStack_290;
  long *plStack_288;
  long *plStack_280;
  long *plStack_278;
  int *piStack_270;
  long *plStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  int *piStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  int *piStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  int *piStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  int *piStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  int *piStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  char acStack_198 [8];
  long lStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  byte bStack_171;
  long lStack_170;
  long lStack_168;
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
  lStack_2a0 = 0;
  plStack_298 = (long *)0x0;
  plVar6 = *(long **)(param_2 + 0x20);
  if (((plVar6 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_298 = plVar6, plVar6 == (long *)0x0)) ||
     (lStack_2a0 = *(long *)(param_2 + 0x18), lStack_2a0 == 0)) goto LAB_10a98da28;
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
    FUN_109ffe064(&uStack_188,lStack_128,lStack_e0);
    if (-1 < (char)bStack_171) {
      uStack_180 = (ulong)bStack_171;
    }
    if (uStack_180 != 0) {
      plStack_90 = (long *)0x0;
      FUN_109fc89b4(acStack_198,&uStack_188,alStack_a8,0,0);
      if (plStack_90 == alStack_a8) {
        lVar11 = 0x20;
LAB_10a98d0f0:
        (**(code **)(*plStack_90 + lVar11))();
      }
      else if (plStack_90 != (long *)0x0) {
        lVar11 = 0x28;
        goto LAB_10a98d0f0;
      }
      if (acStack_198[0] == '\t') {
        cVar10 = '\t';
      }
      else {
        piStack_1b0 = (int *)0x0;
        lStack_1a8 = 0;
        lStack_1a0 = 0;
        func_0x000107c2b054(&piStack_1f0,&UNK_10f68582f);
        piStack_1d0 = (int *)acStack_198;
        lStack_1c8 = 0;
        uStack_1c0 = 0;
        uStack_1b8 = 0x8000000000000000;
        if (acStack_198[0] == '\x01') {
          lVar11 = lStack_190;
          func_0x0001093793a4(lStack_190,&piStack_1f0);
          lStack_1c8 = lVar11;
        }
        else if (acStack_198[0] == '\x02') {
          uStack_1c0 = *(undefined8 *)(lStack_190 + 8);
        }
        else {
          uStack_1b8 = 1;
        }
        if (uStack_1e0._7_1_ < '\0') {
          __ZdlPv(piStack_1f0);
        }
        piStack_1f0 = (int *)acStack_198;
        lStack_1e8 = 0;
        uStack_1e0 = 0;
        uStack_1d8 = 0x8000000000000000;
        if (acStack_198[0] == '\x02') {
          uStack_1e0 = *(long *)(lStack_190 + 8);
        }
        else if (acStack_198[0] == '\x01') {
          lStack_1e8 = lStack_190 + 8;
        }
        else {
          uStack_1d8 = 1;
        }
        ppiVar7 = &piStack_1d0;
        func_0x000109379420(ppiVar7,&piStack_1f0);
        if (((ulong)ppiVar7 & 1) == 0) {
          func_0x00010937b950(&piStack_1d0);
          func_0x00010937c804(&piStack_1f0);
          lStack_1a8 = lStack_1e8;
          piStack_1b0 = piStack_1f0;
          lStack_1a0 = uStack_1e0;
        }
        func_0x000107c2b054(&piStack_210,&UNK_10f687a4b);
        piStack_1f0 = (int *)acStack_198;
        lStack_1e8 = 0;
        uStack_1e0 = 0;
        uStack_1d8 = 0x8000000000000000;
        if (acStack_198[0] == '\x01') {
          lVar11 = lStack_190;
          func_0x0001093793a4(lStack_190,&piStack_210);
          lStack_1e8 = lVar11;
        }
        else if (acStack_198[0] == '\x02') {
          uStack_1e0 = *(undefined8 *)(lStack_190 + 8);
        }
        else {
          uStack_1d8 = 1;
        }
        if (uStack_200._7_1_ < '\0') {
          __ZdlPv(piStack_210);
        }
        piStack_210 = (int *)acStack_198;
        lStack_208 = 0;
        uStack_200 = 0;
        uStack_1f8 = 0x8000000000000000;
        if (acStack_198[0] == '\x02') {
          uStack_200 = *(undefined8 *)(lStack_190 + 8);
        }
        else if (acStack_198[0] == '\x01') {
          lStack_208 = lStack_190 + 8;
        }
        else {
          uStack_1f8 = 1;
        }
        ppiVar7 = &piStack_1f0;
        func_0x000109379420(ppiVar7,&piStack_210);
        piVar20 = (int *)0x0;
        if (((ulong)ppiVar7 & 1) == 0) {
          func_0x00010937b950(&piStack_1f0);
          func_0x00010949aadc();
          piVar20 = piStack_210;
        }
        func_0x000107c2b054(&piStack_230,&UNK_10f687a5a);
        piStack_210 = (int *)acStack_198;
        lStack_208 = 0;
        uStack_200 = 0;
        uStack_1f8 = 0x8000000000000000;
        if (acStack_198[0] == '\x01') {
          lVar11 = lStack_190;
          func_0x0001093793a4(lStack_190,&piStack_230);
          lStack_208 = lVar11;
        }
        else if (acStack_198[0] == '\x02') {
          uStack_200 = *(undefined8 *)(lStack_190 + 8);
        }
        else {
          uStack_1f8 = 1;
        }
        if (uStack_220._7_1_ < '\0') {
          __ZdlPv(piStack_230);
        }
        piStack_230 = (int *)acStack_198;
        lStack_228 = 0;
        uStack_220 = 0;
        uStack_218 = 0x8000000000000000;
        if (acStack_198[0] == '\x02') {
          uStack_220 = *(undefined8 *)(lStack_190 + 8);
        }
        else if (acStack_198[0] == '\x01') {
          lStack_228 = lStack_190 + 8;
        }
        else {
          uStack_218 = 1;
        }
        ppiVar7 = &piStack_210;
        func_0x000109379420(ppiVar7,&piStack_230);
        piVar21 = (int *)0x0;
        if (((ulong)ppiVar7 & 1) == 0) {
          func_0x00010937b950(&piStack_210);
          func_0x00010949aadc();
          piVar21 = piStack_230;
        }
        func_0x000107c2b054(&uStack_250,&UNK_10f687a66);
        piStack_230 = (int *)acStack_198;
        lStack_228 = 0;
        uStack_220 = 0;
        uStack_218 = 0x8000000000000000;
        if (acStack_198[0] == '\x01') {
          lVar11 = lStack_190;
          func_0x0001093793a4(lStack_190,&uStack_250);
          lStack_228 = lVar11;
        }
        else if (acStack_198[0] == '\x02') {
          uStack_220 = *(undefined8 *)(lStack_190 + 8);
        }
        else {
          uStack_218 = 1;
        }
        if (uStack_240._7_1_ < '\0') {
          __ZdlPv(uStack_250);
        }
        uStack_250 = (int *)acStack_198;
        lStack_248 = 0;
        uStack_240 = 0;
        uStack_238 = 0x8000000000000000;
        if (acStack_198[0] == '\x02') {
          uStack_240 = *(long *)(lStack_190 + 8);
        }
        else if (acStack_198[0] == '\x01') {
          lStack_248 = lStack_190 + 8;
        }
        else {
          uStack_238 = 1;
        }
        ppiVar7 = &piStack_230;
        func_0x000109379420(ppiVar7,&uStack_250);
        if (((ulong)ppiVar7 & 1) == 0) {
          func_0x00010937b950(&piStack_230);
          func_0x00010937c804(&uStack_250);
          if (uStack_240 < 0) {
            if (lStack_248 == 7) {
              if (*uStack_250 == 0x59414c50 && *(int *)((long)uStack_250 + 3) == 0x474e4959) {
                uVar15 = 0;
              }
              else {
                uVar15 = 1;
                if (*uStack_250 != 0x504f5453 || *(int *)((long)uStack_250 + 3) != 0x44455050) {
                  uVar15 = 2;
                }
              }
            }
            else {
              uVar15 = 2;
            }
            __ZdlPv();
          }
          else {
            if (uStack_240._7_1_ != '\a') goto LAB_10a98d518;
            iVar5 = (int)uStack_250;
            if (iVar5 == 0x59414c50 && uStack_250._3_4_ == 0x474e4959) {
              uVar15 = 0;
            }
            else {
              uVar15 = 1;
              if (iVar5 != 0x504f5453 || uStack_250._3_4_ != 0x44455050) {
                uVar15 = 2;
              }
            }
          }
        }
        else {
LAB_10a98d518:
          uVar15 = 2;
        }
        func_0x000107c2b054(&piStack_270,&UNK_10f687a72);
        uStack_250 = (int *)acStack_198;
        lStack_248 = 0;
        uStack_240 = 0;
        uStack_238 = 0x8000000000000000;
        if (acStack_198[0] == '\x01') {
          lVar11 = lStack_190;
          func_0x0001093793a4(lStack_190,&piStack_270);
          lStack_248 = lVar11;
        }
        else if (acStack_198[0] == '\x02') {
          uStack_240 = *(undefined8 *)(lStack_190 + 8);
        }
        else {
          uStack_238 = 1;
        }
        if (uStack_260._7_1_ < '\0') {
          __ZdlPv(piStack_270);
        }
        piStack_270 = (int *)acStack_198;
        plStack_268 = (long *)0x0;
        uStack_260 = 0;
        uStack_258 = 0x8000000000000000;
        if (acStack_198[0] == '\x02') {
          uStack_260 = *(undefined8 *)(lStack_190 + 8);
        }
        else if (acStack_198[0] == '\x01') {
          plStack_268 = (long *)(lStack_190 + 8);
        }
        else {
          uStack_258 = 1;
        }
        puVar8 = &uStack_250;
        func_0x000109379420(puVar8,&piStack_270);
        piVar22 = (int *)0x0;
        if (((ulong)puVar8 & 1) == 0) {
          func_0x00010937b950(&uStack_250);
          func_0x00010949aadc();
          piVar22 = piStack_270;
        }
        plVar9 = (long *)0x48;
        __Znwm();
        plVar16 = plVar9 + 1;
        *plVar16 = 0;
        plVar9[2] = 0;
        *plVar9 = (long)&PTR_FUN_110c33ef0;
        plVar6 = plVar9 + 3;
        ppiVar7 = &piStack_270;
        FUN_10a994b84(plVar6,ppiVar7,&piStack_1b0);
        plVar9[5] = (long)piVar20;
        plVar9[6] = (long)piVar21;
        *(undefined1 *)(plVar9 + 7) = uVar15;
        plVar9[8] = (long)piVar22;
        plVar17 = *(long **)(lVar12 + 0x100);
        do {
          cVar10 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = *plVar16 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        plStack_290 = plVar6;
        plStack_288 = plVar9;
        plStack_280 = plVar6;
        plStack_278 = plVar9;
        if ((*(byte *)(plVar17 + 7) & 1) == 0) {
          lVar12 = plVar17[3];
          bVar3 = *(byte *)((long)plVar17 + 0x19);
          plVar6 = plVar17 + 1;
          plStack_268 = (long *)plVar17[2];
          piStack_270 = (int *)*plVar6;
          if (plVar17[2] != 0) {
            plVar14 = (long *)(plVar17[2] + 8);
            do {
              cVar10 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar4) {
                *plVar14 = *plVar14 + 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            piVar20 = (int *)plVar9[5];
            piVar21 = (int *)plVar9[6];
          }
          plVar17[4] = (long)(double)piVar21;
          plVar17[5] = (long)(double)piVar20;
          lVar19 = plVar9[4];
          lVar11 = plVar9[3];
          if (plVar9[4] != 0) {
            plVar14 = (long *)(plVar9[4] + 8);
            do {
              cVar10 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar4) {
                *plVar14 = *plVar14 + 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
          }
          ppiVar13 = (int **)plVar17[2];
          plVar17[2] = lVar19;
          plVar17[1] = lVar11;
          if (ppiVar13 != (int **)0x0) {
            ppiVar1 = ppiVar13 + 1;
            do {
              piVar20 = *ppiVar1;
              cVar10 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppiVar1,0x10);
              if (bVar4) {
                *ppiVar1 = (int *)((long)piVar20 + -1);
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (piVar20 == (int *)0x0) {
              (**(code **)(*ppiVar13 + 4))(ppiVar13);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppiVar7 = ppiVar13;
            }
          }
          cVar10 = (char)plStack_290[4];
          if (cVar10 == '\0') {
            *(undefined2 *)(plVar17 + 3) = 1;
            plVar17[6] = (long)(double)plStack_290[5];
LAB_10a98d86c:
            if (piStack_270 == (int *)0x0) {
LAB_10a98d8dc:
              FUN_10a969660(plVar17[10],plVar6);
            }
            else {
              plVar14 = (long *)plVar17[2];
              lStack_168 = plVar17[2];
              lStack_170 = plVar17[1];
              if (plVar14 != (long *)0x0) {
                plVar2 = plVar14 + 1;
                do {
                  cVar10 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar4) {
                    *plVar2 = *plVar2 + 1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
              }
              piVar20 = piStack_270;
              FUN_10a968d78(piStack_270,&lStack_170);
              if (plVar14 != (long *)0x0) {
                plVar2 = plVar14 + 1;
                do {
                  lVar11 = *plVar2;
                  cVar10 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar4) {
                    *plVar2 = lVar11 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if (lVar11 == 0) {
                  (**(code **)(*plVar14 + 0x10))(plVar14);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
                }
              }
              if (((ulong)piVar20 & 1) == 0) goto LAB_10a98d8dc;
            }
            if (((char)lVar12 == '\0') || (bVar3 != 0)) {
              if (((char)plVar17[3] != '\0') && ((*(byte *)((long)plVar17 + 0x19) & 1) == 0)) {
                FUN_10a969660(plVar17[8],plVar6);
              }
            }
            else if (((char)plVar17[3] == '\0') || (*(char *)((long)plVar17 + 0x19) == '\x01')) {
              lVar12 = 0x60;
              goto LAB_10a98d908;
            }
          }
          else {
            if (cVar10 == '\x01') {
              *(undefined1 *)((long)plVar17 + 0x19) = 1;
              if ((bVar3 & 1) == 0) {
                if (*(int *)(*(long *)(*plVar17 + 0x100) + 0x2a8) == 8) {
                  dVar18 = *(double *)(*(long *)(*plVar17 + 0x850) + 8) * 1000.0;
                }
                else {
                  __ZNSt3__16chrono12system_clock3nowEv();
                  dVar18 = (double)((long)ppiVar7 / 1000);
                }
                *(float *)((long)plVar17 + 0x1c) = (float)dVar18;
              }
              goto LAB_10a98d86c;
            }
            if (cVar10 == '\x02') {
              *(undefined2 *)(plVar17 + 3) = 0x100;
              FUN_10a968214(plVar6);
              lVar12 = 0x70;
LAB_10a98d908:
              FUN_10a07e58c(*(undefined8 *)((long)plVar17 + lVar12));
            }
            else if ((bRam000000011330a9e8 & 1) != 0) {
              func_0x00010ae06f08(0,1,&UNK_10f68598f,&UNK_10f6859c8,0x38,&UNK_10f685a2d);
            }
          }
          plVar6 = plStack_268;
          if (plStack_268 != (long *)0x0) {
            plVar17 = plStack_268 + 1;
            do {
              lVar12 = *plVar17;
              cVar10 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar4) {
                *plVar17 = lVar12 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plStack_268 + 0x10))(plStack_268);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
        }
        do {
          lVar12 = *plVar16;
          cVar10 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = lVar12 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
        plVar6 = plStack_278;
        if (plStack_278 != (long *)0x0) {
          plVar9 = plStack_278 + 1;
          do {
            lVar12 = *plVar9;
            cVar10 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *plVar9 = lVar12 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_278 + 0x10))(plStack_278);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        cVar10 = acStack_198[0];
        if (lStack_1a0 < 0) {
          __ZdlPv(piStack_1b0);
          cVar10 = acStack_198[0];
        }
      }
      func_0x000109380ffc(&lStack_190,cVar10);
    }
    if ((char)bStack_171 < '\0') {
      __ZdlPv(uStack_188);
    }
  }
  else if ((bRam000000011330a9e8 & 1) != 0) {
    func_0x00010ae06f08(0,1,&UNK_10f68794f,&UNK_10f687992,0x35,&UNK_10f687a15);
  }
  func_0x000104c4f944(auStack_d0);
  plVar6 = &lStack_128;
  FUN_10a042634();
  if (lStack_138 < 0) {
    plVar6 = plStack_148;
    __ZdlPv();
  }
  if (lStack_150 < 0) {
    plVar6 = plStack_160;
    __ZdlPv();
  }
LAB_10a98da28:
  plVar9 = plStack_298;
  if (plStack_298 != (long *)0x0) {
    plVar16 = plStack_298 + 1;
    do {
      lVar12 = *plVar16;
      cVar10 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = lVar12 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_298 + 0x10))(plStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar6 = plVar9;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a98b8b4(&lStack_170);
  func_0x00010a98b8b4(&piStack_270);
  FUN_10a98dc4c(&plStack_290);
  FUN_10a98dc4c(&plStack_280);
  if (lStack_1a0 < 0) {
    __ZdlPv(piStack_1b0);
  }
  func_0x000109380ffc(&lStack_190,acStack_198[0]);
  if ((char)bStack_171 < '\0') {
    __ZdlPv(uStack_188);
  }
  FUN_10a05bd10(&plStack_160);
  func_0x00010a05a86c(&lStack_2a0);
  __Unwind_Resume();
  *plVar6 = (long)&PTR_FUN_110c33ef0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a98dc10; end: 10a98dc1f;  */

void FUN_10a98dc10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c33ef0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a98dc20; end: 10a98dc3f;  */

void FUN_10a98dc20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c33ef0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a98dc40; end: 10a98dc4b;  */

long FUN_10a98dc40(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x20);
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
  return param_1 + 0x18;
}



/* Entry: 10a98dc4c; end: 10a98dca3;  */

long FUN_10a98dc4c(long param_1)

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



/* Entry: 10a98dca4; end: 10a98dccf;  */

undefined8 * FUN_10a98dca4(long param_1)

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



/* Entry: 10a98dcd0; end: 10a98dd8b;  */

void FUN_10a98dcd0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  double dVar14;
  double dVar15;
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
  FUN_10a98dd8c(param_2,param_3);
  FUN_10a052e3c(param_5);
  dVar15 = (double)param_2[6];
  dVar14 = (double)param_2[7];
  *param_1 = 3;
  *(double *)(param_1 + 2) = dVar14 - dVar15;
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



/* Entry: 10a98dd8c; end: 10a98ddf3;  */

void FUN_10a98dd8c(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar4 = param_1;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar4);
    param_2 = ppuVar4;
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
  plVar5 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = plVar5;
  FUN_10a98dd8c(plVar5,param_2);
  FUN_10a052e3c(param_4);
  uVar9 = plVar7[4];
  plVar1 = (long *)plVar7[3];
  if (-1 < (char)*(byte *)((long)plVar7 + 0x2f)) {
    uVar9 = (ulong)*(byte *)((long)plVar7 + 0x2f);
    plVar1 = plVar7 + 3;
  }
  (**(code **)(*plVar5 + 0x128))(extraout_x8 + 2,plVar5,plVar1,uVar9);
  *extraout_x8 = 6;
  plVar5 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar9 = lVar8 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar5[lVar8 + 2];
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar5;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_88 = plVar5;
        if (uVar10 >> 0x3c == 0) {
          lVar3 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar5 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar3 + uVar10 * 0x10;
          lStack_a8 = lVar8;
          lStack_a0 = lVar8;
          lStack_98 = lVar8;
          lStack_90 = lVar14;
          func_0x00010988c1b8(&lStack_a8);
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
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10a98ddf4; end: 10a98ded3;  */

void FUN_10a98ddf4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
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
  FUN_10a98dd8c(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[4];
  plVar1 = (long *)plVar5[3];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x2f)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x2f);
    plVar1 = plVar5 + 3;
  }
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar1,uVar7);
  *param_1 = 6;
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



/* Entry: 10a98ded4; end: 10a98df8b;  */

void FUN_10a98ded4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a98dd8c(param_2,param_3);
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



/* Entry: 10a98df8c; end: 10a98e043;  */

void FUN_10a98df8c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a98dd8c(param_2,param_3);
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



/* Entry: 10a98e044; end: 10a98e167;  */

void FUN_10a98e044(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a98e168(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a966eb0(&stack0xffffffffffffffa0,plVar5);
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



/* Entry: 10a98e168; end: 10a98e1cf;  */

void FUN_10a98e168(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 in_stack_ffffffffffffff88;
  undefined8 *in_stack_ffffffffffffff90;
  
  ppuVar4 = param_1;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar4);
    param_2 = ppuVar4;
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
  plVar5 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar13 = plVar5;
  FUN_10a98e168(plVar5,param_2);
  FUN_10a052e3c(param_4);
  plStack_90 = (long *)0x0;
  plStack_88 = (long *)0x0;
  FUN_10a98993c(&plStack_90,plVar13[3],plVar13[4],plVar13[4] - plVar13[3] >> 4);
  plVar1 = plStack_88;
  plVar13 = plStack_90;
  lVar10 = (long)plStack_88 - (long)plStack_90 >> 4;
  (**(code **)(*plVar5 + 600))(&stack0xffffffffffffff88,plVar5,lVar10);
  if (plVar1 != plVar13) {
    lVar12 = 0;
    plVar13 = plVar13 + 1;
    do {
      FUN_10a98e398(&stack0xffffffffffffff88,plVar5,plVar13[-1],*plVar13);
      (**(code **)(*plVar5 + 0x290))
                (plVar5,&stack0xffffffffffffff98,lVar12,&stack0xffffffffffffff88);
      if ((3 < (int)in_stack_ffffffffffffff88) && (in_stack_ffffffffffffff90 != (undefined8 *)0x0))
      {
        (**(code **)*in_stack_ffffffffffffff90)();
      }
      plVar13 = plVar13 + 2;
      lVar12 = lVar12 + 1;
    } while (lVar10 != lVar12);
  }
  *extraout_x8 = 7;
  *(undefined8 *)(extraout_x8 + 2) = in_stack_ffffffffffffff88;
  func_0x00010a989a28(&plStack_90);
  plVar5 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar7 = lVar10 - 1;
  plVar6[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar10 + 2];
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
  lVar10 = *plVar5;
  lVar12 = plVar6[0x4c];
  lVar9 = lVar12 - lVar10;
  uVar14 = lVar9 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    plVar13 = (long *)plVar6[0x4d];
    if ((ulong)((long)plVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = (long)plVar13 - lVar10 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)((long)plVar13 - lVar10)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_88 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar3 + lVar9;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar10,lVar9);
          *plVar5 = lVar11;
          plVar6[0x4c] = lVar12 + uVar15 * 0x10;
          plVar6[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_a8 = lVar10;
          lStack_a0 = lVar10;
          lStack_98 = lVar10;
          plStack_90 = plVar13;
          func_0x00010988c1b8(&lStack_a8);
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar6[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar10 = lVar10 + uVar7 * 0x10;
    while (lVar12 != lVar10) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar6[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar7;
  return;
}



/* Entry: 10a98e1d0; end: 10a98e397;  */

void FUN_10a98e1d0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  undefined8 *in_stack_ffffffffffffffb0;
  
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
  FUN_10a98e168(param_2,param_3);
  FUN_10a052e3c(param_5);
  plStack_70 = (long *)0x0;
  plStack_68 = (long *)0x0;
  FUN_10a98993c(&plStack_70,plVar4[3],plVar4[4],plVar4[4] - plVar4[3] >> 4);
  plVar11 = plStack_68;
  plVar4 = plStack_70;
  lVar8 = (long)plStack_68 - (long)plStack_70 >> 4;
  (**(code **)(*param_2 + 600))(&stack0xffffffffffffffa8,param_2,lVar8);
  if (plVar11 != plVar4) {
    lVar10 = 0;
    plVar4 = plVar4 + 1;
    do {
      FUN_10a98e398(&stack0xffffffffffffffa8,param_2,plVar4[-1],*plVar4);
      (**(code **)(*param_2 + 0x290))
                (param_2,&stack0xffffffffffffffb8,lVar10,&stack0xffffffffffffffa8);
      if ((3 < (int)in_stack_ffffffffffffffa8) && (in_stack_ffffffffffffffb0 != (undefined8 *)0x0))
      {
        (**(code **)*in_stack_ffffffffffffffb0)();
      }
      plVar4 = plVar4 + 2;
      lVar10 = lVar10 + 1;
    } while (lVar8 != lVar10);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffa8;
  func_0x00010a989a28(&plStack_70);
  plVar4 = plVar3 + 0x4b;
  lVar8 = plVar3[0x59];
  uVar5 = lVar8 - 1;
  plVar3[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar4[lVar8 + 2];
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  lVar8 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar7 = lVar10 - lVar8;
  uVar12 = lVar7 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    plVar11 = (long *)plVar3[0x4d];
    if ((ulong)((long)plVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = (long)plVar11 - lVar8 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)((long)plVar11 - lVar8)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar6 >> 0x3c == 0) {
          lVar2 = uVar6 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar7;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar8,lVar7);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar6 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
          plStack_70 = plVar11;
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
  else if (uVar5 < uVar12) {
    lVar8 = lVar8 + uVar5 * 0x10;
    while (lVar10 != lVar8) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar5;
  return;
}



/* Entry: 10a98e398; end: 10a98e437;  */

void FUN_10a98e398(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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
  ppuStack_38 = &PTR_DAT_110c331f0;
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



/* Entry: 10a98e438; end: 10a98e4ef;  */

void FUN_10a98e438(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a98e168(param_2,param_3);
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



/* Entry: 10a98e4f0; end: 10a98e5a7;  */

void FUN_10a98e4f0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a98e168(param_2,param_3);
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



/* Entry: 10a98e5a8; end: 10a98e6a3;  */

undefined1  [16] FUN_10a98e5a8(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c33220;
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
    ppuStack_40 = &PTR_DAT_110c33220;
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



/* Entry: 10a98e6a4; end: 10a98e6f7;  */

ulong FUN_10a98e6a4(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a98e6f8,0);
  }
  return param_1;
}



/* Entry: 10a98e6f8; end: 10a98e8bf;  */

void FUN_10a98e6f8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  undefined8 *in_stack_ffffffffffffffb0;
  
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
  FUN_10a98e8c0(param_2,param_3);
  FUN_10a052e3c(param_5);
  plStack_70 = (long *)0x0;
  plStack_68 = (long *)0x0;
  FUN_10a989a84(&plStack_70,plVar4[6],plVar4[7],plVar4[7] - plVar4[6] >> 4);
  plVar11 = plStack_68;
  plVar4 = plStack_70;
  lVar8 = (long)plStack_68 - (long)plStack_70 >> 4;
  (**(code **)(*param_2 + 600))(&stack0xffffffffffffffa8,param_2,lVar8);
  if (plVar11 != plVar4) {
    lVar10 = 0;
    plVar4 = plVar4 + 1;
    do {
      func_0x00010a98e928(&stack0xffffffffffffffa8,param_2,plVar4[-1],*plVar4);
      (**(code **)(*param_2 + 0x290))
                (param_2,&stack0xffffffffffffffb8,lVar10,&stack0xffffffffffffffa8);
      if ((3 < (int)in_stack_ffffffffffffffa8) && (in_stack_ffffffffffffffb0 != (undefined8 *)0x0))
      {
        (**(code **)*in_stack_ffffffffffffffb0)();
      }
      plVar4 = plVar4 + 2;
      lVar10 = lVar10 + 1;
    } while (lVar8 != lVar10);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffa8;
  func_0x00010a989b70(&plStack_70);
  plVar4 = plVar3 + 0x4b;
  lVar8 = plVar3[0x59];
  uVar5 = lVar8 - 1;
  plVar3[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar4[lVar8 + 2];
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  lVar8 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar7 = lVar10 - lVar8;
  uVar12 = lVar7 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    plVar11 = (long *)plVar3[0x4d];
    if ((ulong)((long)plVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = (long)plVar11 - lVar8 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)((long)plVar11 - lVar8)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar6 >> 0x3c == 0) {
          lVar2 = uVar6 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar7;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar8,lVar7);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar6 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
          plStack_70 = plVar11;
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
  else if (uVar5 < uVar12) {
    lVar8 = lVar8 + uVar5 * 0x10;
    while (lVar10 != lVar8) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar5;
  return;
}



/* Entry: 10a98e8c0; end: 10a98ea1b;  */

void FUN_10a98e8c0(undefined **param_1,undefined **param_2,undefined **param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long *plStack_48;
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar5);
    param_2 = ppuVar5;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c33220;
      param_4 = (long *)0x0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar6 = &UNK_10f68f52e;
  func_0x00010988bd28(&UNK_10f68f52e);
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
  ppuStack_58 = &PTR_DAT_110c33208;
  ppuStack_50 = param_3;
  plStack_48 = param_4;
  func_0x000109899de4(puVar6,param_2,&ppuStack_50,&ppuStack_58,0,0);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a98ea1c; end: 10a98ead3;  */

void FUN_10a98ea1c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a98e8c0(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar13 = param_2[9];
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



/* Entry: 10a98ead4; end: 10a98eb27;  */

ulong FUN_10a98ead4(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a98eb28,0);
  }
  return param_1;
}



/* Entry: 10a98eb28; end: 10a98ebe3;  */

void FUN_10a98eb28(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a98e8c0(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)(param_2 + 10));
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



/* Entry: 10a98ebe4; end: 10a98ed4f;  */

void FUN_10a98ebe4(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f687209,6);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a98eca0);
  (*pcVar4)();
}



/* Entry: 10a98ed50; end: 10a98ee83;  */

void FUN_10a98ed50(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a98ee84(param_2,param_3);
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



/* Entry: 10a98ee84; end: 10a98eeeb;  */

void FUN_10a98ee84(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10a98ef9c(extraout_x8,plVar4,FUN_10a968040,0,param_2,param_4);
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



/* Entry: 10a98eeec; end: 10a98ef9b;  */

void FUN_10a98eeec(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a98ef9c(param_1,param_2,FUN_10a968040,0,param_3,param_5);
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



/* Entry: 10a98ef9c; end: 10a98f0b3;  */

void FUN_10a98ef9c(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
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
  FUN_10a98ee84(param_2,param_5);
  FUN_10a052e3c(param_6);
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*(long *)(lVar5 + ((long)param_4 >> 1)) + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(&uStack_70);
  plStack_48 = plStack_68;
  uStack_50 = uStack_70;
  uStack_70 = 0;
  plStack_68 = (long *)0x0;
  ppuStack_58 = &PTR_DAT_110c33208;
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



/* Entry: 10a98f0b4; end: 10a98f163;  */

void FUN_10a98f0b4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a98ef9c(param_1,param_2,FUN_10a9675b8,0,param_3,param_5);
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



/* Entry: 10a98f164; end: 10a98f213;  */

void FUN_10a98f164(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a98f214(param_1,param_2,0x10a9675e0,0,param_3,param_5);
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



/* Entry: 10a98f214; end: 10a98f2cf;  */

void FUN_10a98f214(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  lVar4 = param_2;
  FUN_10a98ee84(param_2,param_5);
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



/* Entry: 10a98f2d0; end: 10a98f37f;  */

void FUN_10a98f2d0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a98f214(param_1,param_2,0x10a967608,0,param_3,param_5);
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



/* Entry: 10a98f380; end: 10a98f587;  */

void FUN_10a98f380(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c0,&UNK_10e4e68ed,0x80);
  pppuVar1 = (undefined ***)appuStack_c0[0];
  if (-1 < cStack_a9) {
    pppuVar1 = appuStack_c0;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c33f48;
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
    ppuStack_40 = &PTR_DAT_110c33f48;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a98f568;
    FUN_10a054dac(param_1,&DAT_10f68571c,FUN_10a98f7a8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a98f568;
    FUN_10a054dac(param_1,&DAT_10f685720,FUN_10a99006c,2,*(undefined8 *)(param_1 + 0x40));
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
LAB_10a98f568:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a98f56c);
  (*pcVar9)();
}



/* Entry: 10a98f588; end: 10a98f757;  */

void FUN_10a98f588(long *param_1,long *param_2)

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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a98f7a8);
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



/* Entry: 10a98f758; end: 10a98f7a7;  */

void FUN_10a98f758(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a98f7a8);
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



/* Entry: 10a98f7a8; end: 10a98fda3;  */

/* WARNING: Possible PIC construction at 0x00010a98fd98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a98fd9c) */
/* WARNING: Removing unreachable block (ram,0x00010a98fdbc) */
/* WARNING: Removing unreachable block (ram,0x00010a98fdcc) */
/* WARNING: Removing unreachable block (ram,0x00010a98fdf4) */
/* WARNING: Removing unreachable block (ram,0x00010a98fe00) */
/* WARNING: Removing unreachable block (ram,0x00010a98fe18) */
/* WARNING: Removing unreachable block (ram,0x00010a98fe50) */
/* WARNING: Removing unreachable block (ram,0x00010a98fe7c) */
/* WARNING: Removing unreachable block (ram,0x00010a98fe68) */
/* WARNING: Removing unreachable block (ram,0x00010a98fe70) */
/* WARNING: Removing unreachable block (ram,0x00010a98fe80) */
/* WARNING: Removing unreachable block (ram,0x00010a98fe88) */
/* WARNING: Removing unreachable block (ram,0x00010a98fe98) */
/* WARNING: Removing unreachable block (ram,0x00010a98fea4) */
/* WARNING: Removing unreachable block (ram,0x00010a98fec4) */
/* WARNING: Removing unreachable block (ram,0x00010a98feb0) */
/* WARNING: Removing unreachable block (ram,0x00010a98feb8) */
/* WARNING: Removing unreachable block (ram,0x00010a98fec8) */
/* WARNING: Removing unreachable block (ram,0x00010a98fed0) */
/* WARNING: Removing unreachable block (ram,0x00010a98fed4) */
/* WARNING: Removing unreachable block (ram,0x00010a98fef8) */
/* WARNING: Removing unreachable block (ram,0x00010a98fee0) */
/* WARNING: Removing unreachable block (ram,0x00010a98feec) */
/* WARNING: Removing unreachable block (ram,0x00010a98fefc) */
/* WARNING: Removing unreachable block (ram,0x00010a98ff04) */
/* WARNING: Removing unreachable block (ram,0x00010a98ff0c) */
/* WARNING: Removing unreachable block (ram,0x00010a98ff10) */
/* WARNING: Removing unreachable block (ram,0x00010a98ff14) */
/* WARNING: Removing unreachable block (ram,0x00010a98ff30) */
/* WARNING: Removing unreachable block (ram,0x00010a98ff1c) */
/* WARNING: Removing unreachable block (ram,0x00010a98ff24) */
/* WARNING: Removing unreachable block (ram,0x00010a98ff34) */
/* WARNING: Removing unreachable block (ram,0x00010a98ff3c) */
/* WARNING: Removing unreachable block (ram,0x00010a98ff48) */
/* WARNING: Removing unreachable block (ram,0x00010a98ff64) */
/* WARNING: Removing unreachable block (ram,0x00010a98ff8c) */
/* WARNING: Removing unreachable block (ram,0x00010a98ff74) */
/* WARNING: Removing unreachable block (ram,0x00010a98fe14) */
/* WARNING: Removing unreachable block (ram,0x00010a98fde8) */

void FUN_10a98f7a8(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
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
  FUN_10a98fda4(param_2,param_3);
  FUN_10a98fe0c(param_5);
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
        goto LAB_10a98fd8c;
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
              if ((long *)plVar20[2] == plVar22) goto LAB_10a98fb48;
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
        FUN_10a98f588(plVar9 + 3,uVar14);
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
          goto LAB_10a98fbec;
        }
      }
      else {
        *plVar20 = *plVar12;
LAB_10a98fbec:
        *plVar12 = (long)plVar20;
      }
      plVar9[6] = plVar9[6] + 1;
      goto LAB_10a98fbfc;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
  goto LAB_10a98fd8c;
LAB_10a98fb48:
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
LAB_10a98fbfc:
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
      FUN_10a98f758(1,plVar20);
      FUN_10a004978(&plStack_c0);
      if (3 < (ulong)bStack_70) goto LAB_10a98fd8c;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_70])(&plStack_b0);
      FUN_10a688c1c(&plStack_e0);
      unaff_x30 = 0x10a98fd9c;
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
LAB_10a98fd8c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a98fd90);
  (*pcVar6)();
}



/* Entry: 10a98fda4; end: 10a98fe0b;  */

void FUN_10a98fda4(long param_1)

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
  FUN_10a98ff98(plVar4,*puVar5);
  if (plVar4 == (long *)0x0) goto LAB_10a98ff64;
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
LAB_10a98fed0:
    if (lVar6 == 0) {
LAB_10a98ff04:
      *(undefined8 *)(*(long *)(lVar3 + 0x18) + uVar7 * 8) = 0;
      lVar6 = *plVar4;
      goto LAB_10a98ff0c;
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
    if (uVar12 != uVar7) goto LAB_10a98ff04;
LAB_10a98ff14:
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
    if (uVar11 != uVar7) goto LAB_10a98fed0;
LAB_10a98ff0c:
    if (lVar6 != 0) {
      uVar11 = *(ulong *)(lVar6 + 8);
      goto LAB_10a98ff14;
    }
  }
  *plVar10 = lVar6;
  *plVar4 = 0;
  *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + -1;
  FUN_10a98f758(1);
LAB_10a98ff64:
  if (*(char *)(*(long *)(lVar3 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a98ff88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x40))(lVar3);
    return;
  }
  return;
}



/* Entry: 10a98fe0c; end: 10a98fe2f;  */

void FUN_10a98fe0c(undefined8 param_1)

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
  FUN_10a98ff98(plVar3,*puVar4);
  if (plVar3 == (long *)0x0) goto LAB_10a98ff64;
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
LAB_10a98fed0:
    if (lVar5 == 0) {
LAB_10a98ff04:
      *(undefined8 *)(*(long *)(lVar2 + 0x18) + uVar6 * 8) = 0;
      lVar5 = *plVar3;
      goto LAB_10a98ff0c;
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
    if (uVar11 != uVar6) goto LAB_10a98ff04;
LAB_10a98ff14:
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
    if (uVar10 != uVar6) goto LAB_10a98fed0;
LAB_10a98ff0c:
    if (lVar5 != 0) {
      uVar10 = *(ulong *)(lVar5 + 8);
      goto LAB_10a98ff14;
    }
  }
  *plVar9 = lVar5;
  *plVar3 = 0;
  *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x30) + -1;
  FUN_10a98f758(1);
LAB_10a98ff64:
  if (*(char *)(*(long *)(lVar2 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a98ff88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x40))(lVar2);
    return;
  }
  return;
}



/* Entry: 10a98fe30; end: 10a98ff97;  */

void FUN_10a98fe30(long param_1,undefined8 *param_2)

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
  FUN_10a98ff98(plVar2,*param_2);
  if (plVar2 == (long *)0x0) goto LAB_10a98ff64;
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
LAB_10a98fed0:
    if (lVar3 == 0) {
LAB_10a98ff04:
      *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_10a98ff0c;
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
    if (uVar9 != uVar4) goto LAB_10a98ff04;
LAB_10a98ff14:
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
    if (uVar8 != uVar4) goto LAB_10a98fed0;
LAB_10a98ff0c:
    if (lVar3 != 0) {
      uVar8 = *(ulong *)(lVar3 + 8);
      goto LAB_10a98ff14;
    }
  }
  *plVar7 = lVar3;
  *plVar2 = 0;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  FUN_10a98f758(1);
LAB_10a98ff64:
  if (*(char *)(*(long *)(param_1 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a98ff88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(param_1);
    return;
  }
  return;
}



/* Entry: 10a98ff98; end: 10a99006b;  */

long * FUN_10a98ff98(long *param_1,long param_2)

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



/* Entry: 10a99006c; end: 10a990187;  */

void FUN_10a99006c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a98fda4(param_2,param_3);
  FUN_10a060490(param_5);
  FUN_10a0604b4(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a98fe30(plVar6,&stack0xffffffffffffffb0);
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



/* Entry: 10a990188; end: 10a990237;  */

void FUN_10a990188(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a990238(param_1,param_2,0x10a967630,0,param_3,param_5);
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



/* Entry: 10a990238; end: 10a99034f;  */

void FUN_10a990238(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
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
  FUN_10a98ee84(param_2,param_5);
  FUN_10a052e3c(param_6);
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*(long *)(lVar5 + ((long)param_4 >> 1)) + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(&uStack_70);
  plStack_48 = plStack_68;
  uStack_50 = uStack_70;
  uStack_70 = 0;
  plStack_68 = (long *)0x0;
  ppuStack_58 = &PTR_DAT_110c33f48;
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



/* Entry: 10a990350; end: 10a9903ff;  */

void FUN_10a990350(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a990238(param_1,param_2,0x10a967658,0,param_3,param_5);
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



/* Entry: 10a990400; end: 10a990607;  */

void FUN_10a990400(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c0,&UNK_10e4e69d7,0x80);
  pppuVar1 = (undefined ***)appuStack_c0[0];
  if (-1 < cStack_a9) {
    pppuVar1 = appuStack_c0;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c33f60;
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
    ppuStack_40 = &PTR_DAT_110c33f60;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9905e8;
    FUN_10a054dac(param_1,&DAT_10f68571c,FUN_10a990828,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9905e8;
    FUN_10a054dac(param_1,&DAT_10f685720,FUN_10a9910ec,2,*(undefined8 *)(param_1 + 0x40));
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
LAB_10a9905e8:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a9905ec);
  (*pcVar9)();
}



/* Entry: 10a990608; end: 10a9907d7;  */

void FUN_10a990608(long *param_1,long *param_2)

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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a990828);
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



/* Entry: 10a9907d8; end: 10a990827;  */

void FUN_10a9907d8(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a990828);
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



/* Entry: 10a990828; end: 10a990e23;  */

/* WARNING: Possible PIC construction at 0x00010a990e18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a990e1c) */
/* WARNING: Removing unreachable block (ram,0x00010a990e3c) */
/* WARNING: Removing unreachable block (ram,0x00010a990e4c) */
/* WARNING: Removing unreachable block (ram,0x00010a990e74) */
/* WARNING: Removing unreachable block (ram,0x00010a990e80) */
/* WARNING: Removing unreachable block (ram,0x00010a990e98) */
/* WARNING: Removing unreachable block (ram,0x00010a990ed0) */
/* WARNING: Removing unreachable block (ram,0x00010a990efc) */
/* WARNING: Removing unreachable block (ram,0x00010a990ee8) */
/* WARNING: Removing unreachable block (ram,0x00010a990ef0) */
/* WARNING: Removing unreachable block (ram,0x00010a990f00) */
/* WARNING: Removing unreachable block (ram,0x00010a990f08) */
/* WARNING: Removing unreachable block (ram,0x00010a990f18) */
/* WARNING: Removing unreachable block (ram,0x00010a990f24) */
/* WARNING: Removing unreachable block (ram,0x00010a990f44) */
/* WARNING: Removing unreachable block (ram,0x00010a990f30) */
/* WARNING: Removing unreachable block (ram,0x00010a990f38) */
/* WARNING: Removing unreachable block (ram,0x00010a990f48) */
/* WARNING: Removing unreachable block (ram,0x00010a990f50) */
/* WARNING: Removing unreachable block (ram,0x00010a990f54) */
/* WARNING: Removing unreachable block (ram,0x00010a990f78) */
/* WARNING: Removing unreachable block (ram,0x00010a990f60) */
/* WARNING: Removing unreachable block (ram,0x00010a990f6c) */
/* WARNING: Removing unreachable block (ram,0x00010a990f7c) */
/* WARNING: Removing unreachable block (ram,0x00010a990f84) */
/* WARNING: Removing unreachable block (ram,0x00010a990f8c) */
/* WARNING: Removing unreachable block (ram,0x00010a990f90) */
/* WARNING: Removing unreachable block (ram,0x00010a990f94) */
/* WARNING: Removing unreachable block (ram,0x00010a990fb0) */
/* WARNING: Removing unreachable block (ram,0x00010a990f9c) */
/* WARNING: Removing unreachable block (ram,0x00010a990fa4) */
/* WARNING: Removing unreachable block (ram,0x00010a990fb4) */
/* WARNING: Removing unreachable block (ram,0x00010a990fbc) */
/* WARNING: Removing unreachable block (ram,0x00010a990fc8) */
/* WARNING: Removing unreachable block (ram,0x00010a990fe4) */
/* WARNING: Removing unreachable block (ram,0x00010a99100c) */
/* WARNING: Removing unreachable block (ram,0x00010a990ff4) */
/* WARNING: Removing unreachable block (ram,0x00010a990e94) */
/* WARNING: Removing unreachable block (ram,0x00010a990e68) */

void FUN_10a990828(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
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
  FUN_10a990e24(param_2,param_3);
  FUN_10a990e8c(param_5);
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
        goto LAB_10a990e0c;
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
              if ((long *)plVar20[2] == plVar22) goto LAB_10a990bc8;
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
        FUN_10a990608(plVar9 + 3,uVar14);
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
          goto LAB_10a990c6c;
        }
      }
      else {
        *plVar20 = *plVar12;
LAB_10a990c6c:
        *plVar12 = (long)plVar20;
      }
      plVar9[6] = plVar9[6] + 1;
      goto LAB_10a990c7c;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
  goto LAB_10a990e0c;
LAB_10a990bc8:
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
LAB_10a990c7c:
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
      FUN_10a9907d8(1,plVar20);
      FUN_10a004978(&plStack_c0);
      if (3 < (ulong)bStack_70) goto LAB_10a990e0c;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_70])(&plStack_b0);
      FUN_10a688c1c(&plStack_e0);
      unaff_x30 = 0x10a990e1c;
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
LAB_10a990e0c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a990e10);
  (*pcVar6)();
}



/* Entry: 10a990e24; end: 10a990e8b;  */

void FUN_10a990e24(long param_1)

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
  FUN_10a991018(plVar4,*puVar5);
  if (plVar4 == (long *)0x0) goto LAB_10a990fe4;
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
LAB_10a990f50:
    if (lVar6 == 0) {
LAB_10a990f84:
      *(undefined8 *)(*(long *)(lVar3 + 0x18) + uVar7 * 8) = 0;
      lVar6 = *plVar4;
      goto LAB_10a990f8c;
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
    if (uVar12 != uVar7) goto LAB_10a990f84;
LAB_10a990f94:
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
    if (uVar11 != uVar7) goto LAB_10a990f50;
LAB_10a990f8c:
    if (lVar6 != 0) {
      uVar11 = *(ulong *)(lVar6 + 8);
      goto LAB_10a990f94;
    }
  }
  *plVar10 = lVar6;
  *plVar4 = 0;
  *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + -1;
  FUN_10a9907d8(1);
LAB_10a990fe4:
  if (*(char *)(*(long *)(lVar3 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a991008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x40))(lVar3);
    return;
  }
  return;
}



/* Entry: 10a990e8c; end: 10a990eaf;  */

void FUN_10a990e8c(undefined8 param_1)

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
  FUN_10a991018(plVar3,*puVar4);
  if (plVar3 == (long *)0x0) goto LAB_10a990fe4;
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
LAB_10a990f50:
    if (lVar5 == 0) {
LAB_10a990f84:
      *(undefined8 *)(*(long *)(lVar2 + 0x18) + uVar6 * 8) = 0;
      lVar5 = *plVar3;
      goto LAB_10a990f8c;
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
    if (uVar11 != uVar6) goto LAB_10a990f84;
LAB_10a990f94:
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
    if (uVar10 != uVar6) goto LAB_10a990f50;
LAB_10a990f8c:
    if (lVar5 != 0) {
      uVar10 = *(ulong *)(lVar5 + 8);
      goto LAB_10a990f94;
    }
  }
  *plVar9 = lVar5;
  *plVar3 = 0;
  *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x30) + -1;
  FUN_10a9907d8(1);
LAB_10a990fe4:
  if (*(char *)(*(long *)(lVar2 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a991008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x40))(lVar2);
    return;
  }
  return;
}



/* Entry: 10a990eb0; end: 10a991017;  */

void FUN_10a990eb0(long param_1,undefined8 *param_2)

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
  FUN_10a991018(plVar2,*param_2);
  if (plVar2 == (long *)0x0) goto LAB_10a990fe4;
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
LAB_10a990f50:
    if (lVar3 == 0) {
LAB_10a990f84:
      *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_10a990f8c;
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
    if (uVar9 != uVar4) goto LAB_10a990f84;
LAB_10a990f94:
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
    if (uVar8 != uVar4) goto LAB_10a990f50;
LAB_10a990f8c:
    if (lVar3 != 0) {
      uVar8 = *(ulong *)(lVar3 + 8);
      goto LAB_10a990f94;
    }
  }
  *plVar7 = lVar3;
  *plVar2 = 0;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  FUN_10a9907d8(1);
LAB_10a990fe4:
  if (*(char *)(*(long *)(param_1 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a991008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(param_1);
    return;
  }
  return;
}



/* Entry: 10a991018; end: 10a9910eb;  */

long * FUN_10a991018(long *param_1,long param_2)

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



/* Entry: 10a9910ec; end: 10a991207;  */

void FUN_10a9910ec(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a990e24(param_2,param_3);
  FUN_10a060490(param_5);
  FUN_10a0604b4(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a990eb0(plVar6,&stack0xffffffffffffffb0);
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



/* Entry: 10a991208; end: 10a9912b7;  */

void FUN_10a991208(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9912b8(param_1,param_2,0x10a967680,0,param_3,param_5);
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



/* Entry: 10a9912b8; end: 10a9913cf;  */

void FUN_10a9912b8(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
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
  FUN_10a98ee84(param_2,param_5);
  FUN_10a052e3c(param_6);
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*(long *)(lVar5 + ((long)param_4 >> 1)) + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(&uStack_70);
  plStack_48 = plStack_68;
  uStack_50 = uStack_70;
  uStack_70 = 0;
  plStack_68 = (long *)0x0;
  ppuStack_58 = &PTR_DAT_110c33f60;
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



/* Entry: 10a9913d0; end: 10a99147f;  */

void FUN_10a9913d0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9912b8(param_1,param_2,0x10a9676a8,0,param_3,param_5);
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



/* Entry: 10a991480; end: 10a99159f;  */

void FUN_10a991480(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a98ee84(param_2,param_3);
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



/* Entry: 10a9915a0; end: 10a99164f;  */

void FUN_10a9915a0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a98f214(param_1,param_2,FUN_10a967780,0,param_3,param_5);
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



/* Entry: 10a991650; end: 10a991727;  */

void FUN_10a991650(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a98ee84(param_2,param_3);
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



/* Entry: 10a991728; end: 10a9917df;  */

void FUN_10a991728(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a98ee84(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar13 = param_2[0x2b];
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



/* Entry: 10a9917e0; end: 10a991837;  */

long FUN_10a9917e0(long param_1)

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



/* Entry: 10a991838; end: 10a991847;  */

void FUN_10a991838(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c33f88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a991848; end: 10a991867;  */

void FUN_10a991848(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c33f88;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a991868; end: 10a991877;  */

void FUN_10a991868(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a991870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a991878; end: 10a99191f;  */

undefined8 * FUN_10a991878(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c33fd8;
  (**(code **)param_1[9])();
  FUN_10a991ac4(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a991920; end: 10a991983;  */

bool FUN_10a991920(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x80) {
    iVar1 = 0xe4e68ed;
    _memcmp(&UNK_10e4e68ed);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a991984; end: 10a991aa3;  */

void FUN_10a991984(long *param_1,long param_2)

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



/* Entry: 10a991aa4; end: 10a991ab3;  */

undefined1  [16] FUN_10a991aa4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x80;
  auVar1._0_8_ = &UNK_10e4e68ed;
  return auVar1;
}



/* Entry: 10a991ab4; end: 10a991ac3;  */

long * FUN_10a991ab4(undefined8 param_1,long *param_2)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a991b44);
  (*pcVar2)();
}



/* Entry: 10a991ac4; end: 10a991b43;  */

long * FUN_10a991ac4(long *param_1)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a991b44);
  (*pcVar2)();
}



/* Entry: 10a991b44; end: 10a991b9b;  */

long FUN_10a991b44(long param_1)

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



/* Entry: 10a991b9c; end: 10a991bab;  */

void FUN_10a991b9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34030;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a991bac; end: 10a991bcb;  */

void FUN_10a991bac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34030;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a991bcc; end: 10a991bdb;  */

void FUN_10a991bcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a991bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a991bdc; end: 10a991c83;  */

undefined8 * FUN_10a991bdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34080;
  (**(code **)param_1[9])();
  FUN_10a991e28(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a991c84; end: 10a991ce7;  */

bool FUN_10a991c84(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x80) {
    iVar1 = 0xe4e69d7;
    _memcmp(&UNK_10e4e69d7);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a991ce8; end: 10a991e07;  */

void FUN_10a991ce8(long *param_1,long param_2)

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



/* Entry: 10a991e08; end: 10a991e17;  */

undefined1  [16] FUN_10a991e08(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x80;
  auVar1._0_8_ = &UNK_10e4e69d7;
  return auVar1;
}



/* Entry: 10a991e18; end: 10a991e27;  */

long * FUN_10a991e18(undefined8 param_1,long *param_2)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a991ea8);
  (*pcVar2)();
}



/* Entry: 10a991e28; end: 10a991ea7;  */

long * FUN_10a991e28(long *param_1)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a991ea8);
  (*pcVar2)();
}



/* Entry: 10a991ea8; end: 10a991f87;  */

void FUN_10a991ea8(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10a991ea8(*param_1);
    FUN_10a991ea8(param_1[1]);
    func_0x00010a991ee8(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a991f88; end: 10a991f9b;  */

long FUN_10a991f88(long param_1)

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



/* Entry: 10a991f9c; end: 10a991ff3;  */

long FUN_10a991f9c(long param_1)

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



/* Entry: 10a991ff4; end: 10a9921c3;  */

void FUN_10a991ff4(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  code *pcVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  plVar6 = param_1;
  plVar9 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar6 = param_2;
  }
  plVar12 = (long *)param_1[1];
  if (plVar12 > param_2 || param_2 == plVar12) {
    if (plVar12 <= param_2) {
      return;
    }
    plVar6 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar12 < (long *)0x3) || (((ulong)plVar12 & (long)plVar12 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar6) {
      plVar6 = (long *)(1L << (-LZCOUNT((long)plVar6 + -1) & 0x3fU));
    }
    if (param_2 <= plVar6) {
      param_2 = plVar6;
    }
    if (plVar12 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar4 = *param_1;
      *param_1 = 0;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar4 = (long)param_2 << 3;
    __Znwm();
    lVar5 = *param_1;
    *param_1 = lVar4;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    plVar6 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar6 * 8) = 0;
      plVar6 = (long *)((long)plVar6 + 1);
    } while (param_2 != plVar6);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      plVar9 = (long *)plVar6[1];
      uVar7 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar7) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar7);
      }
      else if (param_2 <= plVar9) {
        uVar3 = 0;
        if (param_2 != (long *)0x0) {
          uVar3 = (ulong)plVar9 / (ulong)param_2;
        }
        plVar9 = (long *)((long)plVar9 - uVar3 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar12 = (long *)*plVar6;
      while (plVar12 != (long *)0x0) {
        plVar11 = (long *)plVar12[1];
        if (((ulong)param_2 & uVar7) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar7);
        }
        else if (param_2 <= plVar11) {
          uVar3 = 0;
          if (param_2 != (long *)0x0) {
            uVar3 = (ulong)plVar11 / (ulong)param_2;
          }
          plVar11 = (long *)((long)plVar11 - uVar3 * (long)param_2);
        }
        plVar10 = plVar12;
        if (plVar11 != plVar9) {
          lVar4 = *param_1;
          if (*(long *)(lVar4 + (long)plVar11 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar11 * 8) = plVar6;
            plVar9 = plVar11;
          }
          else {
            *plVar6 = *plVar12;
            *plVar12 = **(undefined8 **)(lVar4 + (long)plVar11 * 8);
            **(long **)(lVar4 + (long)plVar11 * 8) = (long)plVar12;
            plVar10 = plVar6;
          }
        }
        plVar6 = plVar10;
        plVar12 = (long *)*plVar10;
      }
    }
    return;
  }
  func_0x000109ffded8();
  pcStack_38 = FUN_10a9921c4;
  pcVar8 = (code *)plVar9[2];
  plVar12 = (long *)(plVar9[4] + (plVar9[3] >> 1));
  if ((plVar9[3] & 1U) != 0) {
    pcVar8 = *(code **)(*plVar12 + ((ulong)pcVar8 & 0xffffffff));
  }
  plStack_58 = (long *)plVar6[1];
  lStack_60 = *plVar6;
  *plVar6 = 0;
  plVar6[1] = 0;
  plStack_50 = param_2;
  plStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  (*pcVar8)(plVar12,&lStack_60);
  plVar6 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar9 = plStack_58 + 1;
    do {
      lVar4 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 10a9921c4; end: 10a99225f;  */

void FUN_10a9921c4(undefined8 *param_1,long param_2)

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



/* Entry: 10a992260; end: 10a992303;  */

void FUN_10a992260(void)

{
  return;
}



/* Entry: 10a992304; end: 10a993dc3;  */

void FUN_10a992304(undefined8 *param_1,long param_2)

{
  long *****ppppplVar1;
  undefined8 *puVar2;
  long *****ppppplVar3;
  char cVar4;
  bool bVar5;
  long ****pppplVar6;
  code *pcVar7;
  long *plVar8;
  long ******pppppplVar9;
  long ****pppplVar10;
  long *******ppppppplVar11;
  long *******ppppppplVar12;
  long *******ppppppplVar13;
  long ****pppplVar14;
  uint uVar15;
  long lVar16;
  long ***ppplVar17;
  long *****ppppplVar18;
  long *****ppppplVar19;
  ulong uVar20;
  long lVar21;
  long ******pppppplVar22;
  long ******pppppplVar23;
  ulong uVar24;
  float fVar25;
  long ****pppplVar26;
  undefined1 uStack_34c;
  long ******pppppplStack_340;
  long *plStack_320;
  long ******pppppplStack_308;
  long *****ppppplStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long ******pppppplStack_2e8;
  long *****ppppplStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long ******pppppplStack_2c8;
  long *****ppppplStack_2c0;
  long ****pppplStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  undefined3 uStack_2a4;
  long ******pppppplStack_2a0;
  long *****ppppplStack_298;
  long ****pppplStack_290;
  undefined8 uStack_288;
  long ******pppppplStack_280;
  long *****ppppplStack_278;
  long ****pppplStack_270;
  undefined8 uStack_268;
  long ******pppppplStack_260;
  long *****ppppplStack_258;
  long ****pppplStack_250;
  undefined8 uStack_248;
  long ****pppplStack_240;
  long ****pppplStack_238;
  long ****pppplStack_230;
  long *****ppppplStack_228;
  long ****pppplStack_220;
  long ***ppplStack_218;
  undefined8 uStack_210;
  long *****ppppplStack_208;
  long *****ppppplStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long ****pppplStack_1e8;
  long ****pppplStack_1e0;
  long ***ppplStack_1d8;
  undefined8 uStack_1d0;
  long ****pppplStack_1c8;
  long ****pppplStack_1c0;
  long ****pppplStack_1b8;
  long *****ppppplStack_1b0;
  long ****pppplStack_1a8;
  long ****pppplStack_1a0;
  char acStack_198 [8];
  long ****pppplStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  byte bStack_171;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  int iStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [56];
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined1 auStack_e0 [40];
  long alStack_b8 [3];
  long *plStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_320 = (long *)0x0;
  plVar8 = *(long **)(param_2 + 0x20);
  if (((plVar8 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_320 = plVar8, plVar8 == (long *)0x0)) ||
     (*(long *)(param_2 + 0x18) == 0)) goto LAB_10a992d28;
  lVar21 = *(long *)(param_2 + 0x10);
  uStack_168 = param_1[1];
  uStack_170 = *param_1;
  lStack_160 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  uStack_150 = param_1[4];
  uStack_158 = param_1[3];
  lStack_148 = param_1[5];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iStack_140 = *(int *)(param_1 + 6);
  uStack_138 = param_1[7];
  uStack_130 = param_1[8];
  param_1[7] = 0;
  (**(code **)(param_1[9] + 0x10))(auStack_128,param_1 + 9);
  uStack_f0 = param_1[0x10];
  uStack_e8 = *(undefined4 *)(param_1 + 0x11);
  FUN_10a0424c4(auStack_e0,param_1 + 0x12);
  if (iStack_140 - 200U < 100) {
    lVar21 = *(long *)(lVar21 + 0x18);
    FUN_109ffe064(&uStack_188,uStack_138,uStack_f0);
    uVar15 = (uint)(char)bStack_171;
    if (-1 < (int)uVar15) {
      uStack_180 = (ulong)bStack_171;
    }
    if (uStack_180 != 0) {
      plStack_a0 = (long *)0x0;
      FUN_109fc89b4(acStack_198,&uStack_188,alStack_b8,0,0);
      if (plStack_a0 == alStack_b8) {
        lVar16 = 0x20;
LAB_10a992464:
        (**(code **)(*plStack_a0 + lVar16))();
      }
      else if (plStack_a0 != (long *)0x0) {
        lVar16 = 0x28;
        goto LAB_10a992464;
      }
      if (acStack_198[0] == '\t') {
        acStack_198[0] = '\t';
      }
      else {
        ppppplStack_1b0 = (long *****)0x0;
        pppplStack_1a8 = (long ****)0x0;
        pppplStack_1a0 = (long ****)0x0;
        pppplStack_1c8 = (long ****)0x0;
        pppplStack_1c0 = (long ****)0x0;
        pppplStack_1b8 = (long ****)0x0;
        func_0x000107c2b054(&ppppplStack_208,&UNK_10f68582f);
        pppplStack_1e8 = (long ****)acStack_198;
        pppplStack_1e0 = (long ****)0x0;
        ppplStack_1d8 = (long ***)0x0;
        uStack_1d0 = 0x8000000000000000;
        if (acStack_198[0] == '\x01') {
          pppplVar14 = pppplStack_190;
          func_0x0001093793a4(pppplStack_190,&ppppplStack_208);
          pppplStack_1e0 = pppplVar14;
        }
        else if (acStack_198[0] == '\x02') {
          ppplStack_1d8 = pppplStack_190[1];
        }
        else {
          uStack_1d0 = 1;
        }
        if (uStack_1f8._7_1_ < '\0') {
          __ZdlPv(ppppplStack_208);
        }
        ppppplStack_208 = (long *****)acStack_198;
        ppppplStack_200 = (long *****)0x0;
        uStack_1f8 = (long *****)0x0;
        uStack_1f0 = 0x8000000000000000;
        if (acStack_198[0] == '\x02') {
          uStack_1f8 = (long *****)pppplStack_190[1];
        }
        else if (acStack_198[0] == '\x01') {
          ppppplStack_200 = (long *****)(pppplStack_190 + 1);
        }
        else {
          uStack_1f0 = 1;
        }
        ppppplVar18 = &pppplStack_1e8;
        func_0x000109379420(ppppplVar18,&ppppplStack_208);
        if (((ulong)ppppplVar18 & 1) == 0) {
          func_0x00010937b950(&pppplStack_1e8);
          FUN_109fc8b40();
          __ZNSt3__19to_stringEy(&ppppplStack_208,ppppplStack_228);
          if ((long)pppplStack_1a0 < 0) {
            __ZdlPv(ppppplStack_1b0);
          }
          pppplStack_1a8 = (long ****)ppppplStack_200;
          ppppplStack_1b0 = ppppplStack_208;
          pppplStack_1a0 = (long ****)uStack_1f8;
        }
        func_0x000107c2b054(&ppppplStack_208,&UNK_10f6858d1);
        pppplStack_1e8 = (long ****)acStack_198;
        pppplStack_1e0 = (long ****)0x0;
        ppplStack_1d8 = (long ***)0x0;
        uStack_1d0 = 0x8000000000000000;
        if (acStack_198[0] == '\x01') {
          pppplVar14 = pppplStack_190;
          func_0x0001093793a4(pppplStack_190,&ppppplStack_208);
          pppplStack_1e0 = pppplVar14;
        }
        else if (acStack_198[0] == '\x02') {
          ppplStack_1d8 = pppplStack_190[1];
        }
        else {
          uStack_1d0 = 1;
        }
        if ((long)uStack_1f8 < 0) {
          __ZdlPv(ppppplStack_208);
        }
        ppppplStack_208 = (long *****)acStack_198;
        ppppplStack_200 = (long *****)0x0;
        uStack_1f8 = (long *****)0x0;
        uStack_1f0 = 0x8000000000000000;
        if (acStack_198[0] == '\x02') {
          uStack_1f8 = (long *****)pppplStack_190[1];
        }
        else if (acStack_198[0] == '\x01') {
          ppppplStack_200 = (long *****)(pppplStack_190 + 1);
        }
        else {
          uStack_1f0 = 1;
        }
        ppppplVar18 = &pppplStack_1e8;
        func_0x000109379420(ppppplVar18,&ppppplStack_208);
        pppppplVar23 = (long ******)0x0;
        if (((ulong)ppppplVar18 & 1) == 0) {
          func_0x00010937b950(&pppplStack_1e8);
          func_0x00010949aadc();
          pppppplVar23 = (long ******)ppppplStack_208;
        }
        func_0x000107c2b054(&ppppplStack_208,&DAT_10f309636);
        pppplStack_1e8 = (long ****)acStack_198;
        pppplStack_1e0 = (long ****)0x0;
        ppplStack_1d8 = (long ***)0x0;
        uStack_1d0 = 0x8000000000000000;
        if (acStack_198[0] == '\x01') {
          pppplVar14 = pppplStack_190;
          func_0x0001093793a4(pppplStack_190,&ppppplStack_208);
          pppplStack_1e0 = pppplVar14;
        }
        else if (acStack_198[0] == '\x02') {
          ppplStack_1d8 = pppplStack_190[1];
        }
        else {
          uStack_1d0 = 1;
        }
        if ((long)uStack_1f8 < 0) {
          __ZdlPv(ppppplStack_208);
        }
        ppppplStack_208 = (long *****)acStack_198;
        ppppplStack_200 = (long *****)0x0;
        uStack_1f8 = (long *****)0x0;
        uStack_1f0 = 0x8000000000000000;
        if (acStack_198[0] == '\x02') {
          uStack_1f8 = (long *****)pppplStack_190[1];
        }
        else if (acStack_198[0] == '\x01') {
          ppppplStack_200 = (long *****)(pppplStack_190 + 1);
        }
        else {
          uStack_1f0 = 1;
        }
        ppppplVar18 = &pppplStack_1e8;
        func_0x000109379420(ppppplVar18,&ppppplStack_208);
        if (((ulong)ppppplVar18 & 1) == 0) {
          func_0x00010937b950(&pppplStack_1e8);
          func_0x00010937c804(&ppppplStack_208);
          if ((long)uStack_1f8 < 0) {
            if (ppppplStack_200 == (long *****)0x9) {
              if ((long *****)*ppppplStack_208 == (long *****)0x4e59535f48434952 &&
                  *(char *)(ppppplStack_208 + 1) == 'C') {
                uStack_34c = 1;
              }
              else {
                uStack_34c = 0;
                if ((long *****)*ppppplStack_208 == (long *****)0x4e59535f454e494c &&
                    *(char *)(ppppplStack_208 + 1) == 'C') {
                  uStack_34c = 2;
                }
              }
            }
            else {
              uStack_34c = 0;
            }
            __ZdlPv();
          }
          else {
            if (uStack_1f8._7_1_ != '\t') goto LAB_10a9927d4;
            if ((long ******)ppppplStack_208 == (long ******)0x4e59535f48434952 &&
                (char)ppppplStack_200 == 'C') {
              uStack_34c = 1;
            }
            else {
              uStack_34c = 0;
              if ((long ******)ppppplStack_208 == (long ******)0x4e59535f454e494c &&
                  (char)ppppplStack_200 == 'C') {
                uStack_34c = 2;
              }
            }
          }
        }
        else {
LAB_10a9927d4:
          uStack_34c = 0;
        }
        pppplStack_1e8 = (long ****)acStack_198;
        pppplStack_1e0 = (long ****)0x0;
        ppplStack_1d8 = (long ***)0x0;
        uStack_1d0 = 0x8000000000000000;
        if (acStack_198[0] == '\x01') {
          pppplVar14 = pppplStack_190;
          func_0x000109fc8ce0(pppplStack_190,&UNK_10f6858cb);
          pppplStack_1e0 = pppplVar14;
LAB_10a9928d0:
          ppppplStack_200 = (long *****)0x0;
          uStack_1f8 = (long *****)0x0;
          uStack_1f0 = 0x8000000000000000;
          if (acStack_198[0] == '\x01') {
            ppppplStack_200 = (long *****)(pppplStack_190 + 1);
          }
          else {
            if (acStack_198[0] == '\x02') goto LAB_10a9928f4;
            uStack_1f0 = 1;
          }
        }
        else {
          if (acStack_198[0] != '\x02') {
            uStack_1d0 = 1;
            goto LAB_10a9928d0;
          }
          ppplStack_1d8 = pppplStack_190[1];
LAB_10a9928f4:
          uStack_1f0 = 0x8000000000000000;
          ppppplStack_200 = (long *****)0x0;
          uStack_1f8 = (long *****)pppplStack_190[1];
        }
        ppppplStack_208 = (long *****)acStack_198;
        ppppplVar18 = &pppplStack_1e8;
        func_0x000109379420(ppppplVar18,&ppppplStack_208);
        if (((ulong)ppppplVar18 & 1) == 0) {
          pppppplVar9 = (long ******)&pppplStack_1e8;
          func_0x00010937b950();
          ppppplStack_200 = (long *****)0x0;
          uStack_1f8 = (long *****)0x0;
          uStack_1f0 = 0x8000000000000000;
          cVar4 = *(char *)pppppplVar9;
          ppppplStack_228 = (long *****)pppppplVar9;
          ppppplStack_208 = (long *****)pppppplVar9;
          if (cVar4 == '\0') {
            uStack_1f0 = 1;
LAB_10a992dd8:
            pppplStack_220 = (long ****)0x0;
            ppplStack_218 = (long ***)0x0;
            uStack_210 = 1;
          }
          else if (cVar4 == '\x02') {
            uStack_1f8 = (long *****)*pppppplVar9[1];
            pppplStack_220 = (long ****)0x0;
            uStack_210 = 0x8000000000000000;
            ppplStack_218 = (long ***)pppppplVar9[1][1];
          }
          else {
            if (cVar4 != '\x01') {
              uStack_1f0 = 0;
              goto LAB_10a992dd8;
            }
            ppppplStack_200 = (long *****)*pppppplVar9[1];
            ppplStack_218 = (long ***)0x0;
            uStack_210 = 0x8000000000000000;
            pppplStack_220 = (long ****)(pppppplVar9[1] + 1);
          }
          while( true ) {
            pppppplVar9 = &ppppplStack_208;
            func_0x000109379420(pppppplVar9,&ppppplStack_228);
            if ((int)pppppplVar9 != 0) break;
            ppppppplVar11 = (long *******)&ppppplStack_208;
            func_0x00010937b950();
            pppplStack_240 = (long ****)0x0;
            pppplStack_238 = (long ****)0x0;
            pppplStack_230 = (long ****)0x0;
            ppppplStack_258 = (long *****)0x0;
            pppplStack_250 = (long ****)0x0;
            uStack_248 = 0x8000000000000000;
            cVar4 = *(char *)ppppppplVar11;
            pppppplStack_260 = (long ******)ppppppplVar11;
            if (cVar4 == '\x01') {
              pppppplVar9 = ppppppplVar11[1];
              func_0x000109fc8ce0(pppppplVar9,&UNK_10f6858c5);
              cVar4 = *(char *)ppppppplVar11;
              ppppplStack_258 = (long *****)pppppplVar9;
LAB_10a992e78:
              ppppplStack_278 = (long *****)0x0;
              pppplStack_270 = (long ****)0x0;
              uStack_268 = 0x8000000000000000;
              if (cVar4 == '\x02') goto LAB_10a992eac;
              if (cVar4 == '\x01') {
                ppppplStack_278 = (long *****)(ppppppplVar11[1] + 1);
              }
              else {
                uStack_268 = 1;
              }
            }
            else {
              if (cVar4 != '\x02') {
                uStack_248 = 1;
                goto LAB_10a992e78;
              }
              pppplStack_250 = (long ****)ppppppplVar11[1][1];
LAB_10a992eac:
              uStack_268 = 0x8000000000000000;
              ppppplStack_278 = (long *****)0x0;
              pppplStack_270 = (long ****)ppppppplVar11[1][1];
            }
            ppppppplVar12 = &pppppplStack_260;
            pppppplStack_280 = (long ******)ppppppplVar11;
            func_0x00010937c708(ppppppplVar12,&pppppplStack_280);
            if ((int)ppppppplVar12 != 0) {
              if (*(char *)ppppppplVar11 == '\x01') {
                pppppplVar9 = ppppppplVar11[1];
                FUN_10a993dc4(pppppplVar9,"s");
                pppplStack_250 = (long ****)0x0;
              }
              else {
                if (*(char *)ppppppplVar11 != '\x02') {
                  ppppplStack_258 = (long *****)0x0;
                  pppplStack_250 = (long ****)0x0;
                  uStack_248 = 1;
                  pppppplStack_260 = (long ******)ppppppplVar11;
                  goto LAB_10a992f24;
                }
                pppppplVar9 = (long ******)0x0;
                pppplStack_250 = (long ****)ppppppplVar11[1][1];
              }
              uStack_248 = 0x8000000000000000;
              pppppplStack_260 = (long ******)ppppppplVar11;
              ppppplStack_258 = (long *****)pppppplVar9;
            }
LAB_10a992f24:
            ppppplStack_278 = (long *****)0x0;
            pppplStack_270 = (long ****)0x0;
            uStack_268 = 0x8000000000000000;
            if (*(char *)ppppppplVar11 == '\x02') {
              pppplStack_270 = (long ****)ppppppplVar11[1][1];
            }
            else if (*(char *)ppppppplVar11 == '\x01') {
              ppppplStack_278 = (long *****)(ppppppplVar11[1] + 1);
            }
            else {
              uStack_268 = 1;
            }
            ppppppplVar12 = &pppppplStack_260;
            pppppplStack_280 = (long ******)ppppppplVar11;
            func_0x00010937c708(ppppppplVar12,&pppppplStack_280);
            if (((ulong)ppppppplVar12 & 1) == 0) {
              ppppppplVar12 = &pppppplStack_260;
              func_0x00010937c560();
              ppppplStack_278 = (long *****)0x0;
              pppplStack_270 = (long ****)0x0;
              uStack_268 = 0x8000000000000000;
              cVar4 = *(char *)ppppppplVar12;
              pppppplStack_2a0 = (long ******)ppppppplVar12;
              pppppplStack_280 = (long ******)ppppppplVar12;
              if (cVar4 == '\0') {
                uStack_268 = 1;
LAB_10a9934b4:
                ppppplStack_298 = (long *****)0x0;
                pppplStack_290 = (long ****)0x0;
                uStack_288 = 1;
              }
              else if (cVar4 == '\x02') {
                pppplStack_270 = (long ****)*ppppppplVar12[1];
                ppppplStack_298 = (long *****)0x0;
                uStack_288 = 0x8000000000000000;
                pppplStack_290 = (long ****)ppppppplVar12[1][1];
              }
              else {
                if (cVar4 != '\x01') {
                  uStack_268 = 0;
                  goto LAB_10a9934b4;
                }
                ppppplStack_278 = *ppppppplVar12[1];
                pppplStack_290 = (long ****)0x0;
                uStack_288 = 0x8000000000000000;
                ppppplStack_298 = (long *****)(ppppppplVar12[1] + 1);
              }
              while( true ) {
                ppppppplVar12 = &pppppplStack_280;
                func_0x00010937c708(ppppppplVar12,&pppppplStack_2a0);
                if ((int)ppppppplVar12 != 0) break;
                ppppppplVar12 = &pppppplStack_280;
                func_0x00010937c560();
                uStack_2a4 = 0;
                uStack_2a8 = 0;
                ppppplStack_2c0 = (long *****)0x0;
                pppplStack_2b8 = (long ****)0x0;
                uStack_2b0 = 0x8000000000000000;
                cVar4 = *(char *)ppppppplVar12;
                pppppplStack_2c8 = (long ******)ppppppplVar12;
                if (cVar4 == '\x01') {
                  pppppplVar9 = ppppppplVar12[1];
                  func_0x00010a755fd0(pppppplVar9,&DAT_10f309672);
                  cVar4 = *(char *)ppppppplVar12;
                  ppppplStack_2c0 = (long *****)pppppplVar9;
LAB_10a993554:
                  ppppplStack_2e0 = (long *****)0x0;
                  uStack_2d8 = (long *****)0x0;
                  uStack_2d0 = 0x8000000000000000;
                  if (cVar4 == '\x02') goto LAB_10a993588;
                  if (cVar4 == '\x01') {
                    ppppplStack_2e0 = (long *****)(ppppppplVar12[1] + 1);
                  }
                  else {
                    uStack_2d0 = 1;
                  }
                }
                else {
                  if (cVar4 != '\x02') {
                    uStack_2b0 = 1;
                    goto LAB_10a993554;
                  }
                  pppplStack_2b8 = (long ****)ppppppplVar12[1][1];
LAB_10a993588:
                  uStack_2d0 = 0x8000000000000000;
                  ppppplStack_2e0 = (long *****)0x0;
                  uStack_2d8 = ppppppplVar12[1][1];
                }
                ppppppplVar13 = &pppppplStack_2c8;
                pppppplStack_2e8 = (long ******)ppppppplVar12;
                func_0x00010937c708(ppppppplVar13,&pppppplStack_2e8);
                if (((ulong)ppppppplVar13 & 1) == 0) {
                  func_0x00010937c560(&pppppplStack_2c8);
                  func_0x00010937c804(&pppppplStack_2e8);
                  pppppplStack_340 = pppppplStack_2e8;
                  uStack_2a4 = (undefined3)((ulong)uStack_2d8 >> 0x20);
                  uVar15 = (uint)uStack_2d8._7_1_;
                  pppppplVar9 = (long ******)ppppplStack_2e0;
                  uStack_2a8 = (undefined4)uStack_2d8;
                }
                else {
                  ppppplStack_2e0 = (long *****)0x0;
                  uStack_2d8 = (long *****)0x0;
                  uStack_2d0 = 0x8000000000000000;
                  if (*(char *)ppppppplVar12 == '\x01') {
                    pppppplVar9 = ppppppplVar12[1];
                    pppppplStack_2e8 = (long ******)ppppppplVar12;
                    FUN_10a993dc4(pppppplVar9,"s");
                    ppppplStack_2e0 = (long *****)pppppplVar9;
                  }
                  else if (*(char *)ppppppplVar12 == '\x02') {
                    uStack_2d8 = ppppppplVar12[1][1];
                    pppppplStack_2e8 = (long ******)ppppppplVar12;
                  }
                  else {
                    uStack_2d0 = 1;
                    pppppplStack_2e8 = (long ******)ppppppplVar12;
                  }
                  ppppplStack_300 = (long *****)0x0;
                  uStack_2f8 = (long *****)0x0;
                  uStack_2f0 = 0x8000000000000000;
                  if (*(char *)ppppppplVar12 == '\x02') {
                    uStack_2f8 = ppppppplVar12[1][1];
                  }
                  else if (*(char *)ppppppplVar12 == '\x01') {
                    ppppplStack_300 = (long *****)(ppppppplVar12[1] + 1);
                  }
                  else {
                    uStack_2f0 = 1;
                  }
                  ppppppplVar13 = &pppppplStack_2e8;
                  pppppplStack_308 = (long ******)ppppppplVar12;
                  func_0x00010937c708(ppppppplVar13,&pppppplStack_308);
                  if (((ulong)ppppppplVar13 & 1) == 0) {
                    func_0x00010937c560(&pppppplStack_2e8);
                    func_0x00010937c804(&pppppplStack_308);
                    pppppplStack_340 = pppppplStack_308;
                    uStack_2a4 = (undefined3)((ulong)uStack_2f8 >> 0x20);
                    uVar15 = (uint)uStack_2f8._7_1_;
                    pppppplVar9 = (long ******)ppppplStack_300;
                    uStack_2a8 = (undefined4)uStack_2f8;
                  }
                  else {
                    pppppplStack_340 = (long ******)0x0;
                    uVar15 = 0;
                    pppppplVar9 = (long ******)0x0;
                  }
                }
                pppplVar14 = (long ****)0x58;
                __Znwm();
                pppplVar10 = pppplVar14 + 1;
                *pppplVar10 = (long ***)0x0;
                pppplVar14[2] = (long ***)0x0;
                *pppplVar14 = (long ***)&PTR_FUN_110c34140;
                pppplVar26 = pppplVar14 + 3;
                *pppplVar26 = (long ***)&PTR_DAT_110c31990;
                pppplVar14[4] = (long ***)0x0;
                pppplVar14[5] = (long ***)0x0;
                if (uVar15 >> 7 == 0) {
                  pppplVar14[6] = (long ***)pppppplStack_340;
                  pppplVar14[7] = (long ***)pppppplVar9;
                  *(undefined4 *)(pppplVar14 + 8) = uStack_2a8;
                  *(uint *)((long)pppplVar14 + 0x43) = CONCAT31(uStack_2a4,uStack_2a8._3_1_);
                  *(char *)((long)pppplVar14 + 0x47) = (char)uVar15;
                }
                else {
                  func_0x000107c3192c(pppplVar14 + 6,pppppplStack_340,pppppplVar9);
                }
                pppplVar14[9] = (long ***)0x0;
                pppplVar14[10] = (long ***)0x0;
                ppppplStack_2c0 = (long *****)0x0;
                pppplStack_2b8 = (long ****)0x0;
                uStack_2b0 = 0x8000000000000000;
                if (*(char *)ppppppplVar12 == '\x01') {
                  pppppplVar9 = ppppppplVar12[1];
                  pppppplStack_2c8 = (long ******)ppppppplVar12;
                  func_0x00010a755fd0(pppppplVar9,&UNK_10f687a94);
                  ppppplStack_2c0 = (long *****)pppppplVar9;
                }
                else if (*(char *)ppppppplVar12 == '\x02') {
                  pppplStack_2b8 = (long ****)ppppppplVar12[1][1];
                  pppppplStack_2c8 = (long ******)ppppppplVar12;
                }
                else {
                  uStack_2b0 = 1;
                  pppppplStack_2c8 = (long ******)ppppppplVar12;
                }
                ppppplStack_2e0 = (long *****)0x0;
                uStack_2d8 = (long *****)0x0;
                uStack_2d0 = 0x8000000000000000;
                if (*(char *)ppppppplVar12 == '\x02') {
                  uStack_2d8 = ppppppplVar12[1][1];
                }
                else if (*(char *)ppppppplVar12 == '\x01') {
                  ppppplStack_2e0 = (long *****)(ppppppplVar12[1] + 1);
                }
                else {
                  uStack_2d0 = 1;
                }
                ppppppplVar13 = &pppppplStack_2c8;
                pppppplStack_2e8 = (long ******)ppppppplVar12;
                func_0x00010937c708(ppppppplVar13,&pppppplStack_2e8);
                if (((ulong)ppppppplVar13 & 1) == 0) {
                  func_0x00010937c560(&pppppplStack_2c8);
                  func_0x00010938d050();
                  fVar25 = pppppplStack_2e8._0_4_;
LAB_10a9938e8:
                  pppplVar14[9] = (long ***)(double)fVar25;
                }
                else {
                  ppppplStack_2e0 = (long *****)0x0;
                  uStack_2d8 = (long *****)0x0;
                  uStack_2d0 = 0x8000000000000000;
                  if (*(char *)ppppppplVar12 == '\x01') {
                    pppppplVar9 = ppppppplVar12[1];
                    pppppplStack_2e8 = (long ******)ppppppplVar12;
                    FUN_10a993dc4(pppppplVar9,&DAT_10f3dc193);
                    ppppplStack_2e0 = (long *****)pppppplVar9;
                  }
                  else if (*(char *)ppppppplVar12 == '\x02') {
                    uStack_2d8 = ppppppplVar12[1][1];
                    pppppplStack_2e8 = (long ******)ppppppplVar12;
                  }
                  else {
                    uStack_2d0 = 1;
                    pppppplStack_2e8 = (long ******)ppppppplVar12;
                  }
                  ppppplStack_300 = (long *****)0x0;
                  uStack_2f8 = (long *****)0x0;
                  uStack_2f0 = 0x8000000000000000;
                  if (*(char *)ppppppplVar12 == '\x02') {
                    uStack_2f8 = ppppppplVar12[1][1];
                  }
                  else if (*(char *)ppppppplVar12 == '\x01') {
                    ppppplStack_300 = (long *****)(ppppppplVar12[1] + 1);
                  }
                  else {
                    uStack_2f0 = 1;
                  }
                  ppppppplVar13 = &pppppplStack_2e8;
                  pppppplStack_308 = (long ******)ppppppplVar12;
                  func_0x00010937c708(ppppppplVar13,&pppppplStack_308);
                  if (((ulong)ppppppplVar13 & 1) == 0) {
                    func_0x00010937c560(&pppppplStack_2e8);
                    func_0x00010938d050();
                    fVar25 = pppppplStack_308._0_4_;
                    goto LAB_10a9938e8;
                  }
                }
                ppppplStack_2c0 = (long *****)0x0;
                pppplStack_2b8 = (long ****)0x0;
                uStack_2b0 = 0x8000000000000000;
                if (*(char *)ppppppplVar12 == '\x01') {
                  pppppplVar9 = ppppppplVar12[1];
                  pppppplStack_2c8 = (long ******)ppppppplVar12;
                  func_0x00010a993e88(pppppplVar9,&UNK_10f687a9f);
                  ppppplStack_2c0 = (long *****)pppppplVar9;
                }
                else if (*(char *)ppppppplVar12 == '\x02') {
                  pppplStack_2b8 = (long ****)ppppppplVar12[1][1];
                  pppppplStack_2c8 = (long ******)ppppppplVar12;
                }
                else {
                  uStack_2b0 = 1;
                  pppppplStack_2c8 = (long ******)ppppppplVar12;
                }
                ppppplStack_2e0 = (long *****)0x0;
                uStack_2d8 = (long *****)0x0;
                uStack_2d0 = 0x8000000000000000;
                if (*(char *)ppppppplVar12 == '\x02') {
                  uStack_2d8 = ppppppplVar12[1][1];
                }
                else if (*(char *)ppppppplVar12 == '\x01') {
                  ppppplStack_2e0 = (long *****)(ppppppplVar12[1] + 1);
                }
                else {
                  uStack_2d0 = 1;
                }
                ppppppplVar13 = &pppppplStack_2c8;
                pppppplStack_2e8 = (long ******)ppppppplVar12;
                func_0x00010937c708(ppppppplVar13,&pppppplStack_2e8);
                if (((ulong)ppppppplVar13 & 1) == 0) {
                  func_0x00010937c560(&pppppplStack_2c8);
                  ppppppplVar13 = &pppppplStack_2e8;
                  func_0x00010938d050();
                  fVar25 = pppppplStack_2e8._0_4_;
LAB_10a993a7c:
                  pppplVar14[10] = (long ***)(double)fVar25;
                }
                else {
                  ppppplStack_2e0 = (long *****)0x0;
                  uStack_2d8 = (long *****)0x0;
                  uStack_2d0 = 0x8000000000000000;
                  if (*(char *)ppppppplVar12 == '\x01') {
                    pppppplVar9 = ppppppplVar12[1];
                    pppppplStack_2e8 = (long ******)ppppppplVar12;
                    func_0x00010a993f0c(pppppplVar9,&DAT_10f3dc195);
                    ppppplStack_2e0 = (long *****)pppppplVar9;
                  }
                  else if (*(char *)ppppppplVar12 == '\x02') {
                    uStack_2d8 = ppppppplVar12[1][1];
                    pppppplStack_2e8 = (long ******)ppppppplVar12;
                  }
                  else {
                    uStack_2d0 = 1;
                    pppppplStack_2e8 = (long ******)ppppppplVar12;
                  }
                  ppppplStack_300 = (long *****)0x0;
                  uStack_2f8 = (long *****)0x0;
                  uStack_2f0 = 0x8000000000000000;
                  if (*(char *)ppppppplVar12 == '\x02') {
                    uStack_2f8 = ppppppplVar12[1][1];
                  }
                  else if (*(char *)ppppppplVar12 == '\x01') {
                    ppppplStack_300 = (long *****)(ppppppplVar12[1] + 1);
                  }
                  else {
                    uStack_2f0 = 1;
                  }
                  uVar24 = 0;
                  ppppppplVar13 = &pppppplStack_308;
                  pppppplStack_308 = (long ******)ppppppplVar12;
                  func_0x00010937c708();
                  if ((uVar24 & 1) == 0) {
                    func_0x00010937c560(&pppppplStack_2e8);
                    ppppppplVar13 = &pppppplStack_308;
                    func_0x00010938d050();
                    fVar25 = pppppplStack_308._0_4_;
                    goto LAB_10a993a7c;
                  }
                }
                pppplVar6 = pppplStack_240;
                if (pppplStack_238 < pppplStack_230) {
                  *pppplStack_238 = (long ***)pppplVar26;
                  pppplStack_238[1] = (long ***)pppplVar14;
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(pppplVar10,0x10);
                    if (bVar5) {
                      *pppplVar10 = (long ***)((long)*pppplVar10 + 1);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  ppppplVar18 = (long *****)(pppplStack_238 + 2);
                }
                else {
                  lVar16 = (long)pppplStack_238 - (long)pppplStack_240;
                  uVar24 = (lVar16 >> 4) + 1;
                  if (uVar24 >> 0x3c != 0) {
                    FUN_10a9899e0();
                    goto LAB_10a993b90;
                  }
                  uVar20 = (long)pppplStack_230 - (long)pppplStack_240 >> 3;
                  if (uVar20 <= uVar24) {
                    uVar20 = uVar24;
                  }
                  if (0x7fffffffffffffef < (ulong)((long)pppplStack_230 - (long)pppplStack_240)) {
                    uVar20 = 0xfffffffffffffff;
                  }
                  func_0x00010a9899f4();
                  puVar2 = (undefined8 *)(uVar20 + lVar16);
                  *puVar2 = pppplVar26;
                  puVar2[1] = pppplVar14;
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(pppplVar10,0x10);
                    if (bVar5) {
                      *pppplVar10 = (long ***)((long)*pppplVar10 + 1);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  ppppplVar18 = (long *****)(uVar20 + (long)ppppppplVar13 * 0x10);
                  ppppplVar19 = (long *****)(puVar2 + (lVar16 >> 4) * -2);
                  _memcpy(ppppplVar19,pppplVar6,lVar16);
                  pppplStack_230 = (long ****)ppppplVar18;
                  pppplStack_240 = (long ****)ppppplVar19;
                  ppppplVar18 = (long *****)(puVar2 + 2);
                  if ((long *****)pppplVar6 != (long *****)0x0) {
                    __ZdlPv(pppplVar6);
                  }
                }
                do {
                  pppplStack_238 = (long ****)ppppplVar18;
                  ppplVar17 = *pppplVar10;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(pppplVar10,0x10);
                  if (bVar5) {
                    *pppplVar10 = (long ***)((long)ppplVar17 + -1);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  ppppplVar18 = (long *****)pppplStack_238;
                } while (cVar4 != '\0');
                if (ppplVar17 == (long ***)0x0) {
                  (*(code *)(*pppplVar14)[2])(pppplVar14);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar14);
                }
                if (uVar15 >> 7 != 0) {
                  __ZdlPv(pppppplStack_340);
                }
                func_0x00010937c698(&pppppplStack_280);
              }
            }
            ppppplStack_278 = (long *****)0x0;
            pppplStack_270 = (long ****)0x0;
            uStack_268 = 0x8000000000000000;
            if (*(char *)ppppppplVar11 == '\x01') {
              pppppplVar9 = ppppppplVar11[1];
              pppppplStack_280 = (long ******)ppppppplVar11;
              func_0x00010a756054(pppppplVar9,&DAT_10f63975c);
              ppppplStack_278 = (long *****)pppppplVar9;
            }
            else if (*(char *)ppppppplVar11 == '\x02') {
              pppplStack_270 = (long ****)ppppppplVar11[1][1];
              pppppplStack_280 = (long ******)ppppppplVar11;
            }
            else {
              uStack_268 = 1;
              pppppplStack_280 = (long ******)ppppppplVar11;
            }
            ppppplStack_298 = (long *****)0x0;
            pppplStack_290 = (long ****)0x0;
            uStack_288 = 0x8000000000000000;
            if (*(char *)ppppppplVar11 == '\x02') {
              pppplStack_290 = (long ****)ppppppplVar11[1][1];
            }
            else if (*(char *)ppppppplVar11 == '\x01') {
              ppppplStack_298 = (long *****)(ppppppplVar11[1] + 1);
            }
            else {
              uStack_288 = 1;
            }
            ppppppplVar12 = &pppppplStack_280;
            pppppplStack_2a0 = (long ******)ppppppplVar11;
            func_0x00010937c708(ppppppplVar12,&pppppplStack_2a0);
            if (((ulong)ppppppplVar12 & 1) == 0) {
              func_0x00010937c560(&pppppplStack_280);
              func_0x00010938d050();
              fVar25 = pppppplStack_2a0._0_4_;
LAB_10a993170:
              ppppplVar18 = (long *****)(double)fVar25;
            }
            else {
              ppppplStack_298 = (long *****)0x0;
              pppplStack_290 = (long ****)0x0;
              uStack_288 = 0x8000000000000000;
              if (*(char *)ppppppplVar11 == '\x01') {
                pppppplVar9 = ppppppplVar11[1];
                pppppplStack_2a0 = (long ******)ppppppplVar11;
                FUN_10a993dc4(pppppplVar9,&DAT_10f3dc193);
                ppppplStack_298 = (long *****)pppppplVar9;
              }
              else if (*(char *)ppppppplVar11 == '\x02') {
                pppplStack_290 = (long ****)ppppppplVar11[1][1];
                pppppplStack_2a0 = (long ******)ppppppplVar11;
              }
              else {
                uStack_288 = 1;
                pppppplStack_2a0 = (long ******)ppppppplVar11;
              }
              ppppplStack_2c0 = (long *****)0x0;
              pppplStack_2b8 = (long ****)0x0;
              uStack_2b0 = 0x8000000000000000;
              if (*(char *)ppppppplVar11 == '\x02') {
                pppplStack_2b8 = (long ****)ppppppplVar11[1][1];
              }
              else if (*(char *)ppppppplVar11 == '\x01') {
                ppppplStack_2c0 = (long *****)(ppppppplVar11[1] + 1);
              }
              else {
                uStack_2b0 = 1;
              }
              ppppppplVar12 = &pppppplStack_2a0;
              pppppplStack_2c8 = (long ******)ppppppplVar11;
              func_0x00010937c708(ppppppplVar12,&pppppplStack_2c8);
              ppppplVar18 = (long *****)0x0;
              if (((ulong)ppppppplVar12 & 1) == 0) {
                func_0x00010937c560(&pppppplStack_2a0);
                func_0x00010938d050();
                fVar25 = pppppplStack_2c8._0_4_;
                goto LAB_10a993170;
              }
            }
            ppppplStack_278 = (long *****)0x0;
            pppplStack_270 = (long ****)0x0;
            uStack_268 = 0x8000000000000000;
            if (*(char *)ppppppplVar11 == '\x01') {
              pppppplVar9 = ppppppplVar11[1];
              pppppplStack_280 = (long ******)ppppppplVar11;
              func_0x00010949a51c(pppppplVar9,&DAT_10f309658);
              ppppplStack_278 = (long *****)pppppplVar9;
            }
            else if (*(char *)ppppppplVar11 == '\x02') {
              pppplStack_270 = (long ****)ppppppplVar11[1][1];
              pppppplStack_280 = (long ******)ppppppplVar11;
            }
            else {
              uStack_268 = 1;
              pppppplStack_280 = (long ******)ppppppplVar11;
            }
            ppppplStack_298 = (long *****)0x0;
            pppplStack_290 = (long ****)0x0;
            uStack_288 = 0x8000000000000000;
            if (*(char *)ppppppplVar11 == '\x02') {
              pppplStack_290 = (long ****)ppppppplVar11[1][1];
            }
            else if (*(char *)ppppppplVar11 == '\x01') {
              ppppplStack_298 = (long *****)(ppppppplVar11[1] + 1);
            }
            else {
              uStack_288 = 1;
            }
            ppppppplVar12 = &pppppplStack_280;
            pppppplStack_2a0 = (long ******)ppppppplVar11;
            func_0x00010937c708(ppppppplVar12,&pppppplStack_2a0);
            if (((ulong)ppppppplVar12 & 1) == 0) {
              func_0x00010937c560(&pppppplStack_280);
              ppppppplVar12 = &pppppplStack_2a0;
              func_0x00010938d050();
              fVar25 = pppppplStack_2a0._0_4_;
LAB_10a993304:
              ppppplVar19 = (long *****)(double)fVar25;
            }
            else {
              ppppplStack_298 = (long *****)0x0;
              pppplStack_290 = (long ****)0x0;
              uStack_288 = 0x8000000000000000;
              if (*(char *)ppppppplVar11 == '\x01') {
                pppppplVar9 = ppppppplVar11[1];
                pppppplStack_2a0 = (long ******)ppppppplVar11;
                func_0x00010a993f0c(pppppplVar9,&DAT_10f3dc195);
                ppppplStack_298 = (long *****)pppppplVar9;
              }
              else if (*(char *)ppppppplVar11 == '\x02') {
                pppplStack_290 = (long ****)ppppppplVar11[1][1];
                pppppplStack_2a0 = (long ******)ppppppplVar11;
              }
              else {
                uStack_288 = 1;
                pppppplStack_2a0 = (long ******)ppppppplVar11;
              }
              ppppplStack_2c0 = (long *****)0x0;
              pppplStack_2b8 = (long ****)0x0;
              uStack_2b0 = 0x8000000000000000;
              if (*(char *)ppppppplVar11 == '\x02') {
                pppplStack_2b8 = (long ****)ppppppplVar11[1][1];
              }
              else if (*(char *)ppppppplVar11 == '\x01') {
                ppppplStack_2c0 = (long *****)(ppppppplVar11[1] + 1);
              }
              else {
                uStack_2b0 = 1;
              }
              uVar24 = 0;
              ppppppplVar12 = &pppppplStack_2c8;
              pppppplStack_2c8 = (long ******)ppppppplVar11;
              func_0x00010937c708();
              ppppplVar19 = (long *****)0x0;
              if ((uVar24 & 1) == 0) {
                func_0x00010937c560(&pppppplStack_2a0);
                ppppppplVar12 = &pppppplStack_2c8;
                func_0x00010938d050();
                fVar25 = pppppplStack_2c8._0_4_;
                goto LAB_10a993304;
              }
            }
            if (((double)ppppplVar19 < (double)ppppplVar18) && (pppplStack_238 != pppplStack_240)) {
              ppppplVar19 = (long *****)((double)ppppplVar18 + (double)pppplStack_238[-2][6]);
            }
            pppppplVar9 = (long ******)0x58;
            __Znwm();
            pppplVar14 = pppplStack_1c8;
            pppppplVar22 = pppppplVar9 + 1;
            *pppppplVar22 = (long *****)0x0;
            pppppplVar9[2] = (long *****)0x0;
            *pppppplVar9 = (long *****)&PTR_FUN_110c34190;
            ppppppplVar11 = (long *******)(pppppplVar9 + 3);
            *ppppppplVar11 = (long ******)&PTR_DAT_110c319e8;
            pppppplVar9[4] = (long *****)0x0;
            pppppplVar9[5] = (long *****)0x0;
            pppppplVar9[7] = (long *****)pppplStack_238;
            pppppplVar9[6] = (long *****)pppplStack_240;
            pppppplVar9[8] = (long *****)pppplStack_230;
            pppplStack_240 = (long ****)0x0;
            pppplStack_238 = (long ****)0x0;
            pppplStack_230 = (long ****)0x0;
            pppppplVar9[9] = ppppplVar18;
            pppppplVar9[10] = ppppplVar19;
            pppppplStack_280 = (long ******)ppppppplVar11;
            ppppplStack_278 = (long *****)pppppplVar9;
            if (pppplStack_1c0 < pppplStack_1b8) {
              *pppplStack_1c0 = (long ***)ppppppplVar11;
              pppplStack_1c0[1] = (long ***)pppppplVar9;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(pppppplVar22,0x10);
                if (bVar5) {
                  *pppppplVar22 = (long *****)((long)*pppppplVar22 + 1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              ppppplVar18 = (long *****)(pppplStack_1c0 + 2);
            }
            else {
              lVar16 = (long)pppplStack_1c0 - (long)pppplStack_1c8;
              uVar24 = (lVar16 >> 4) + 1;
              if (uVar24 >> 0x3c != 0) goto LAB_10a993b8c;
              uVar20 = (long)pppplStack_1b8 - (long)pppplStack_1c8 >> 3;
              if (uVar20 <= uVar24) {
                uVar20 = uVar24;
              }
              if (0x7fffffffffffffef < (ulong)((long)pppplStack_1b8 - (long)pppplStack_1c8)) {
                uVar20 = 0xfffffffffffffff;
              }
              func_0x00010a989b3c();
              puVar2 = (undefined8 *)(uVar20 + lVar16);
              *puVar2 = ppppppplVar11;
              puVar2[1] = pppppplVar9;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(pppppplVar22,0x10);
                if (bVar5) {
                  *pppppplVar22 = (long *****)((long)*pppppplVar22 + 1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              ppppplVar18 = (long *****)(uVar20 + (long)ppppppplVar12 * 0x10);
              ppppplVar19 = (long *****)(puVar2 + (lVar16 >> 4) * -2);
              _memcpy(ppppplVar19,pppplVar14,lVar16);
              pppplStack_1b8 = (long ****)ppppplVar18;
              pppplStack_1c8 = (long ****)ppppplVar19;
              ppppplVar18 = (long *****)(puVar2 + 2);
              if ((long *****)pppplVar14 != (long *****)0x0) {
                __ZdlPv(pppplVar14);
              }
            }
            do {
              pppplStack_1c0 = (long ****)ppppplVar18;
              ppppplVar19 = *pppppplVar22;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppplVar22,0x10);
              if (bVar5) {
                *pppppplVar22 = (long *****)((long)ppppplVar19 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
              ppppplVar18 = (long *****)pppplStack_1c0;
            } while (cVar4 != '\0');
            if (ppppplVar19 == (long *****)0x0) {
              (*(code *)(*pppppplVar9)[2])(pppppplVar9);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar9);
            }
            func_0x00010a989a28(&pppplStack_240);
            func_0x000109386b30(&ppppplStack_208);
          }
        }
        pppppplVar9 = (long ******)0x70;
        __Znwm();
        pppppplVar22 = pppppplVar9 + 1;
        *pppppplVar22 = (long *****)0x0;
        pppppplVar9[2] = (long *****)0x0;
        ppppppplVar11 = (long *******)(pppppplVar9 + 3);
        *ppppppplVar11 = (long ******)&PTR_DAT_110c31a40;
        *pppppplVar9 = (long *****)&PTR_DAT_110c341e0;
        pppppplVar9[4] = (long *****)0x0;
        pppppplVar9[5] = (long *****)0x0;
        if ((long)pppplStack_1a0 < 0) {
          func_0x000107c3192c(pppppplVar9 + 6,ppppplStack_1b0,pppplStack_1a8);
        }
        else {
          pppppplVar9[7] = (long *****)pppplStack_1a8;
          pppppplVar9[6] = ppppplStack_1b0;
          pppppplVar9[8] = (long *****)pppplStack_1a0;
        }
        pppplVar10 = pppplStack_1c0;
        pppplVar14 = pppplStack_1c8;
        pppppplVar9[9] = (long *****)pppplStack_1c8;
        pppppplVar9[0xb] = (long *****)pppplStack_1b8;
        pppppplVar9[10] = (long *****)pppplStack_1c0;
        pppplStack_1c0 = (long ****)0x0;
        pppplStack_1b8 = (long ****)0x0;
        pppplStack_1c8 = (long ****)0x0;
        pppppplVar9[0xc] = (long *****)pppppplVar23;
        *(undefined1 *)(pppppplVar9 + 0xd) = uStack_34c;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppplVar22,0x10);
          if (bVar5) {
            *pppppplVar22 = (long *****)((long)*pppppplVar22 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        pppplStack_1e8 = (long ****)0x0;
        pppplStack_1e0 = (long ****)0x0;
        ppplStack_1d8 = (long ***)0x0;
        pppppplStack_280 = (long ******)ppppppplVar11;
        ppppplStack_278 = (long *****)pppppplVar9;
        pppppplStack_260 = (long ******)ppppppplVar11;
        ppppplStack_258 = (long *****)pppppplVar9;
        FUN_10a989a84(&pppplStack_1e8,pppplVar14,pppplVar10,(long)pppplVar10 - (long)pppplVar14 >> 4
                     );
        pppplVar10 = pppplStack_1e0;
        pppplVar14 = pppplStack_1e8;
        if (pppplStack_1e8 == pppplStack_1e0) {
          func_0x00010a989b70(&pppplStack_1e8);
LAB_10a992bac:
          pppppplVar23 = pppppplVar9 + 1;
          do {
            ppppplVar18 = *pppppplVar23;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppplVar23,0x10);
            if (bVar5) {
              *pppppplVar23 = (long *****)((long)ppppplVar18 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (ppppplVar18 == (long *****)0x0) {
            (*(code *)(*pppppplVar9)[2])(pppppplVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar9);
          }
        }
        else {
          do {
            ppppplStack_228 = (long *****)*pppplVar14;
            ppppplVar18 = (long *****)pppplVar14[1];
            if (ppppplVar18 != (long *****)0x0) {
              ppppplVar19 = ppppplVar18 + 1;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(ppppplVar19,0x10);
                if (bVar5) {
                  *ppppplVar19 = (long ****)((long)*ppppplVar19 + 1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            ppppplStack_208 = (long *****)0x0;
            ppppplStack_200 = (long *****)0x0;
            uStack_1f8 = (long *****)0x0;
            pppplStack_220 = (long ****)ppppplVar18;
            FUN_10a98993c(&ppppplStack_208,ppppplStack_228[3],ppppplStack_228[4],
                          (long)ppppplStack_228[4] - (long)ppppplStack_228[3] >> 4);
            ppppplVar19 = ppppplStack_200;
            if (ppppplStack_208 != ppppplStack_200) {
              uVar24 = 0;
              pppppplVar23 = (long ******)ppppplStack_208;
              do {
                ppppplVar18 = *pppppplVar23;
                ppppplVar3 = pppppplVar23[1];
                if (ppppplVar3 != (long *****)0x0) {
                  ppppplVar1 = ppppplVar3 + 1;
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(ppppplVar1,0x10);
                    if (bVar5) {
                      *ppppplVar1 = (long ****)((long)*ppppplVar1 + 1);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                if ((double)ppppplVar18[7] <= (double)ppppplVar18[6]) {
                  uVar20 = (long)ppppplStack_200 - (long)ppppplStack_208 >> 4;
                  if (uVar24 < uVar20 - 1) {
                    if (uVar20 <= uVar24 + 1) goto LAB_10a993b90;
                    pppplVar26 = (long ****)ppppplStack_208[(uVar24 + 1) * 2][6];
                  }
                  else {
                    pppplVar26 = (long ****)
                                 ((double)ppppplStack_228[7] - (double)ppppplStack_228[6]);
                  }
                  ppppplVar18[7] = pppplVar26;
                }
                if (ppppplVar3 != (long *****)0x0) {
                  ppppplVar18 = ppppplVar3 + 1;
                  do {
                    pppplVar26 = *ppppplVar18;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(ppppplVar18,0x10);
                    if (bVar5) {
                      *ppppplVar18 = (long ****)((long)pppplVar26 + -1);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (pppplVar26 == (long ****)0x0) {
                    (*(code *)(*ppppplVar3)[2])(ppppplVar3);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar3);
                  }
                }
                uVar24 = uVar24 + 1;
                pppppplVar23 = pppppplVar23 + 2;
                ppppplVar18 = (long *****)pppplStack_220;
              } while (pppppplVar23 != (long ******)ppppplVar19);
            }
            func_0x00010a989a28(&ppppplStack_208);
            if (ppppplVar18 != (long *****)0x0) {
              ppppplVar19 = ppppplVar18 + 1;
              do {
                pppplVar26 = *ppppplVar19;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(ppppplVar19,0x10);
                if (bVar5) {
                  *ppppplVar19 = (long ****)((long)pppplVar26 + -1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (pppplVar26 == (long ****)0x0) {
                (*(code *)(*ppppplVar18)[2])(ppppplVar18);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar18);
              }
            }
            pppppplVar9 = (long ******)ppppplStack_278;
            pppplVar14 = pppplVar14 + 2;
          } while (pppplVar14 != pppplVar10);
          func_0x00010a989b70(&pppplStack_1e8);
          if (pppppplVar9 != (long ******)0x0) goto LAB_10a992bac;
        }
        ppppplVar18 = ppppplStack_258;
        pppppplVar23 = pppppplStack_260;
        pppplVar14 = (long ****)(lVar21 + 0x90);
        pppplVar10 = pppplVar14;
        FUN_10a994010(pppplVar14,&ppppplStack_208,&ppppplStack_1b0);
        if (*pppplVar10 == (long ***)0x0) {
          pppplVar26 = (long ****)0x48;
          __Znwm();
          ppplStack_1d8 = (long ***)0x0;
          pppplStack_1e8 = pppplVar26;
          pppplStack_1e0 = pppplVar14;
          if ((long)pppplStack_1a0 < 0) {
            func_0x000107c3192c(pppplVar26 + 4,ppppplStack_1b0,pppplStack_1a8);
          }
          else {
            pppplVar26[5] = (long ***)pppplStack_1a8;
            pppplVar26[4] = (long ***)ppppplStack_1b0;
            pppplVar26[6] = (long ***)pppplStack_1a0;
          }
          pppplVar26[8] = (long ***)ppppplVar18;
          pppplVar26[7] = (long ***)pppppplVar23;
          if ((long ******)ppppplVar18 != (long ******)0x0) {
            pppppplVar23 = (long ******)(ppppplVar18 + 1);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppplVar23,0x10);
              if (bVar5) {
                *pppppplVar23 = (long *****)((long)*pppppplVar23 + 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          FUN_10a994094(pppplVar14,ppppplStack_208,pppplVar10,pppplVar26);
        }
        FUN_10a968f1c(lVar21,&ppppplStack_1b0);
        if ((long ******)ppppplVar18 != (long ******)0x0) {
          pppppplVar23 = (long ******)(ppppplVar18 + 1);
          do {
            ppppplVar19 = *pppppplVar23;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppplVar23,0x10);
            if (bVar5) {
              *pppppplVar23 = (long *****)((long)ppppplVar19 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (ppppplVar19 == (long *****)0x0) {
            (*(code *)(*ppppplVar18)[2])(ppppplVar18);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar18);
          }
        }
        func_0x00010a989b70(&pppplStack_1c8);
        if ((long)pppplStack_1a0 < 0) {
          __ZdlPv(ppppplStack_1b0);
        }
      }
      func_0x000109380ffc(&pppplStack_190,acStack_198[0]);
      uVar15 = (uint)bStack_171;
    }
    if ((uVar15 >> 7 & 1) != 0) {
      __ZdlPv(uStack_188);
    }
  }
  func_0x000104c4f944(auStack_e0);
  FUN_10a042634(&uStack_138);
  if (lStack_148 < 0) {
    __ZdlPv(uStack_158);
  }
  if (lStack_160 < 0) {
    __ZdlPv(uStack_170);
  }
LAB_10a992d28:
  if (plStack_320 != (long *)0x0) {
    plVar8 = plStack_320 + 1;
    do {
      lVar21 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_320 + 0x10))(plStack_320);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_320);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
LAB_10a993b8c:
  FUN_10a989b28();
LAB_10a993b90:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a993b94);
  (*pcVar7)();
}



/* Entry: 10a993dc4; end: 10a993e47;  */

long * FUN_10a993dc4(long param_1,undefined8 param_2)

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
      func_0x00010a003d08(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if (plVar3 != plVar2) {
      plVar4 = plVar3 + 4;
      func_0x00010a003d08(plVar4,param_2);
      if ((char)plVar4 < '\x01') {
        return plVar3;
      }
    }
  }
  return plVar2;
}



/* Entry: 10a993e48; end: 10a993e57;  */

void FUN_10a993e48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34140;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a993e58; end: 10a993e77;  */

void FUN_10a993e58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34140;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a993e78; end: 10a993e87;  */

void FUN_10a993e78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a993e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a993e88; end: 10a993f8f;  */

long * FUN_10a993e88(long param_1,undefined8 param_2)

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
      func_0x00010a003d08(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if (plVar3 != plVar2) {
      plVar4 = plVar3 + 4;
      func_0x00010a003d08(plVar4,param_2);
      if ((char)plVar4 < '\x01') {
        return plVar3;
      }
    }
  }
  return plVar2;
}



/* Entry: 10a993f90; end: 10a993f9f;  */

void FUN_10a993f90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34190;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a993fa0; end: 10a993fbf;  */

void FUN_10a993fa0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34190;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a993fc0; end: 10a993fdf;  */

void FUN_10a993fc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a993fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a993fe0; end: 10a993fff;  */

void FUN_10a993fe0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c341e0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a994000; end: 10a99400f;  */

void FUN_10a994000(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a994008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a994010; end: 10a994093;  */

long * FUN_10a994010(long param_1,undefined8 *param_2,undefined8 param_3)

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
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10a99407c;
    }
    plVar2 = plVar4 + 4;
    FUN_10a003e3c(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_10a99407c:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10a994094; end: 10a99412f;  */

void FUN_10a994094(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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


