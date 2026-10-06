/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a63e304; end: 10a63f517;  */

void FUN_10a63e304(code *******param_1,code *******param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  undefined **ppuVar6;
  code *******pppppppcVar7;
  undefined1 uVar8;
  code *****pppppcVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  code *****pppppcVar13;
  ulong uVar14;
  long *plVar15;
  code ******ppppppcVar16;
  code *******pppppppcVar17;
  undefined **ppuVar18;
  code *******unaff_x20;
  code *******unaff_x21;
  long lVar19;
  code *******unaff_x22;
  code *******pppppppcVar20;
  code ******ppppppcVar21;
  code *******unaff_x23;
  code *******pppppppcVar22;
  code ******unaff_x26;
  code ******ppppppcVar23;
  code ******ppppppcVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 *puStack_1d0;
  code ***pppcStack_1c8;
  int aiStack_1c0 [2];
  undefined8 *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 *puStack_1a8;
  code *****pppppcStack_1a0;
  code *****pppppcStack_198;
  undefined1 *puStack_190;
  undefined ***pppuStack_188;
  undefined **ppuStack_180;
  undefined8 uStack_178;
  code ******ppppppcStack_170;
  code ******ppppppcStack_168;
  code ******ppppppcStack_160;
  code ******ppppppcStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  code ******ppppppcStack_140;
  undefined **ppuStack_138;
  code ******ppppppcStack_130;
  code ******ppppppcStack_128;
  code ******ppppppcStack_120;
  code *****pppppcStack_118;
  long lStack_110;
  code *****pppppcStack_108;
  code ******ppppppcStack_100;
  long lStack_f8;
  float fStack_f0;
  code *****pppppcStack_e0;
  undefined **ppuStack_d8;
  code ******ppppppcStack_d0;
  undefined **ppuStack_c8;
  code ******ppppppcStack_c0;
  undefined **ppuStack_b8;
  code *****pppppcStack_b0;
  code *****pppppcStack_a8;
  code ******ppppppcStack_a0;
  undefined **ppuStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppcVar17 = (code *******)param_2[2];
  pppppppcVar22 = param_1;
  if ((*(ushort *)(pppppppcVar17 + 0x30) >> 4 & 1) != 0) goto LAB_10a63f2d0;
  pppppcStack_118 = *(code ******)((long)param_1 + 0x14);
  param_2 = (code *******)&pppppcStack_118;
  pppppppcVar22 = pppppppcVar17;
  FUN_10a601f04();
  unaff_x20 = param_1;
  if ((int)pppppppcVar22 == 0) goto LAB_10a63f2d0;
  ppppppcStack_130 = (code ******)0x0;
  ppppppcStack_128 = (code ******)0x0;
  ppppppcStack_120 = (code ******)0x0;
  unaff_x23 = (code *******)param_1[4];
  pppppppcVar22 = (code *******)param_1[5];
  if (unaff_x23 != pppppppcVar22) {
    unaff_x26 = (code ******)0x1fffffffffffffff;
    do {
      if (ppppppcStack_128 < ppppppcStack_120) {
        pppppppcVar20 = (code *******)(ppppppcStack_128 + 1);
        *ppppppcStack_128 = (code *****)*unaff_x23;
      }
      else {
        lVar19 = (long)ppppppcStack_128 - (long)ppppppcStack_130;
        uVar14 = (lVar19 >> 3) + 1;
        if (uVar14 >> 0x3d != 0) {
          FUN_10a050828();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a63f314);
          (*pcVar5)();
        }
        uVar10 = (long)ppppppcStack_120 - (long)ppppppcStack_130 >> 2;
        if (uVar10 <= uVar14) {
          uVar10 = uVar14;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)ppppppcStack_120 - (long)ppppppcStack_130)) {
          uVar10 = 0x1fffffffffffffff;
        }
        pppppppcVar7 = &ppppppcStack_130;
        FUN_10a05083c();
        puVar11 = (undefined8 *)((long)pppppppcVar7 + lVar19);
        pppppppcVar20 = (code *******)(puVar11 + 1);
        *puVar11 = *unaff_x23;
        unaff_x21 = (code *******)
                    ((long)puVar11 - ((long)ppppppcStack_128 - (long)ppppppcStack_130));
        param_2 = (code *******)ppppppcStack_130;
        _memcpy(unaff_x21);
        bVar3 = (code *******)ppppppcStack_130 != (code *******)0x0;
        ppppppcStack_130 = (code ******)unaff_x21;
        ppppppcStack_120 = (code ******)(pppppppcVar7 + uVar10);
        if (bVar3) {
          ppppppcStack_128 = (code ******)pppppppcVar20;
          __ZdlPv();
        }
      }
      unaff_x23 = unaff_x23 + 1;
      ppppppcStack_128 = (code ******)pppppppcVar20;
    } while (unaff_x23 != pppppppcVar22);
  }
  ppppppcVar21 = ppppppcStack_128;
  uVar26 = *(undefined4 *)(param_1 + 7);
  uVar25 = *(undefined4 *)((long)param_1 + 0x3c);
  uVar1 = *(uint *)(param_1 + 2);
  if (uVar1 == 0) {
    unaff_x21 = (code *******)pppppppcVar17[0x4d];
    ppuVar6 = (undefined **)0x50;
    __Znwm();
    ppppppcVar24 = ppppppcStack_120;
    ppppppcVar23 = ppppppcStack_130;
    ppuVar6[1] = (undefined *)0x0;
    ppuVar6[2] = (undefined *)0x0;
    *ppuVar6 = (undefined *)&PTR_DAT_110c018b0;
    ppppppcStack_128 = (code ******)0x0;
    ppppppcStack_120 = (code ******)0x0;
    ppppppcStack_130 = (code ******)0x0;
    ppuVar6[4] = (undefined *)0x0;
    ppuVar6[5] = (undefined *)0x0;
    ppppppcStack_140 = (code ******)(ppuVar6 + 3);
    *ppppppcStack_140 = (code *****)&PTR_DAT_110bfbad0;
    *(undefined4 *)(ppuVar6 + 6) = uVar26;
    *(undefined4 *)((long)ppuVar6 + 0x34) = uVar25;
    ppuVar6[7] = (undefined *)ppppppcVar23;
    ppuVar6[8] = (undefined *)ppppppcVar21;
    ppuVar6[9] = (undefined *)ppppppcVar24;
    pppppcStack_108 = (code *****)0x0;
    lStack_110 = 0;
    lStack_f8 = 0;
    ppppppcStack_100 = (code ******)0x0;
    fStack_f0 = *(float *)(unaff_x21 + 7);
    param_2 = (code *******)unaff_x21[4];
    ppuStack_138 = ppuVar6;
    FUN_10a62a3b0(&lStack_110);
    ppppppcVar21 = unaff_x21[5];
    if (ppppppcVar21 != (code ******)0x0) {
      unaff_x23 = (code *******)0x9ddfea08eb382d69;
      do {
        ppppppcVar23 = (code ******)pppppcStack_108;
        pppppcVar9 = ppppppcVar21[2];
        uVar14 = ((ulong)(uint)((int)pppppcVar9 << 3) + 8 ^ (ulong)pppppcVar9 >> 0x20) *
                 -0x622015f714c7d297;
        uVar14 = ((ulong)pppppcVar9 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
        ppppppcVar24 = (code ******)((uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297);
        if ((code ******)pppppcStack_108 != (code ******)0x0) {
          uVar14 = (long)pppppcStack_108 - 1;
          if (((ulong)pppppcStack_108 & uVar14) == 0) {
            unaff_x26 = (code ******)((ulong)ppppppcVar24 & uVar14);
          }
          else {
            unaff_x26 = ppppppcVar24;
            if (pppppcStack_108 <= ppppppcVar24) {
              uVar10 = 0;
              if ((code ******)pppppcStack_108 != (code ******)0x0) {
                uVar10 = (ulong)ppppppcVar24 / (ulong)pppppcStack_108;
              }
              unaff_x26 = (code ******)((long)ppppppcVar24 - uVar10 * (long)pppppcStack_108);
            }
          }
          plVar15 = *(long **)(lStack_110 + (long)unaff_x26 * 8);
          if (plVar15 != (long *)0x0) {
            do {
              while( true ) {
                plVar15 = (long *)*plVar15;
                if (plVar15 == (long *)0x0) goto LAB_10a63ea2c;
                ppppppcVar16 = (code ******)plVar15[1];
                if (ppppppcVar16 != ppppppcVar24) break;
                if ((code *****)plVar15[2] == pppppcVar9) goto LAB_10a63eb8c;
              }
              if (((ulong)pppppcStack_108 & uVar14) == 0) {
                ppppppcVar16 = (code ******)((ulong)ppppppcVar16 & uVar14);
              }
              else if (pppppcStack_108 <= ppppppcVar16) {
                uVar10 = 0;
                if ((code ******)pppppcStack_108 != (code ******)0x0) {
                  uVar10 = (ulong)ppppppcVar16 / (ulong)pppppcStack_108;
                }
                ppppppcVar16 = (code ******)((long)ppppppcVar16 - uVar10 * (long)pppppcStack_108);
              }
            } while (ppppppcVar16 == unaff_x26);
          }
        }
LAB_10a63ea2c:
        param_1 = (code *******)0x68;
        __Znwm();
        *param_1 = (code ******)0x0;
        param_1[1] = ppppppcVar24;
        pppppcVar9 = ppppppcVar21[3];
        ppppppcVar16 = (code ******)ppppppcVar21[2];
        param_1[3] = (code ******)ppppppcVar21[3];
        param_1[2] = ppppppcVar16;
        if (pppppcVar9 != (code *****)0x0) {
          pppppcVar9 = pppppcVar9 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppppcVar9,0x10);
            if (bVar3) {
              *pppppcVar9 = (code ****)((long)*pppppcVar9 + 1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppppppcStack_c0 = (code ******)(param_1 + 4);
        *(undefined1 *)(param_1 + 0xc) = 3;
        if (*(char *)(ppppppcVar21 + 0xc) == '\0') {
          uVar8 = 0;
        }
        else {
          param_2 = (code *******)(ppppppcVar21 + 4);
          FUN_10a005398(&ppppppcStack_c0);
          uVar8 = *(undefined1 *)(ppppppcVar21 + 0xc);
        }
        *(undefined1 *)(param_1 + 0xc) = uVar8;
        if ((ppppppcVar23 == (code ******)0x0) ||
           (fStack_f0 * (float)ppppppcVar23 < (float)(lStack_f8 + 1))) {
          uVar14 = 1;
          if ((code ******)0x2 < ppppppcVar23) {
            uVar14 = (ulong)(((ulong)ppppppcVar23 & (long)ppppppcVar23 - 1U) != 0);
          }
          param_2 = (code *******)(uVar14 | (long)ppppppcVar23 << 1);
          pppppppcVar22 = (code *******)(long)((float)(lStack_f8 + 1) / fStack_f0);
          if (param_2 <= pppppppcVar22) {
            param_2 = pppppppcVar22;
          }
          FUN_10a62a3b0(&lStack_110);
          ppppppcVar23 = (code ******)pppppcStack_108;
          if (((ulong)pppppcStack_108 & (long)pppppcStack_108 - 1U) == 0) {
            unaff_x26 = (code ******)((long)pppppcStack_108 - 1U & (ulong)ppppppcVar24);
          }
          else {
            unaff_x26 = ppppppcVar24;
            if (pppppcStack_108 <= ppppppcVar24) {
              uVar14 = 0;
              if ((code ******)pppppcStack_108 != (code ******)0x0) {
                uVar14 = (ulong)ppppppcVar24 / (ulong)pppppcStack_108;
              }
              unaff_x26 = (code ******)((long)ppppppcVar24 - uVar14 * (long)pppppcStack_108);
            }
          }
        }
        puVar11 = *(undefined8 **)(lStack_110 + (long)unaff_x26 * 8);
        if (puVar11 == (undefined8 *)0x0) {
          *param_1 = ppppppcStack_100;
          *(code ********)(lStack_110 + (long)unaff_x26 * 8) = &ppppppcStack_100;
          ppppppcStack_100 = (code ******)param_1;
          if (*param_1 != (code ******)0x0) {
            ppppppcVar24 = (code ******)(*param_1)[1];
            if (((ulong)ppppppcVar23 & (long)ppppppcVar23 - 1U) == 0) {
              ppppppcVar24 = (code ******)((ulong)ppppppcVar24 & (long)ppppppcVar23 - 1U);
            }
            else if (ppppppcVar23 <= ppppppcVar24) {
              uVar14 = 0;
              if (ppppppcVar23 != (code ******)0x0) {
                uVar14 = (ulong)ppppppcVar24 / (ulong)ppppppcVar23;
              }
              ppppppcVar24 = (code ******)((long)ppppppcVar24 - uVar14 * (long)ppppppcVar23);
            }
            *(code ********)(lStack_110 + (long)ppppppcVar24 * 8) = param_1;
          }
        }
        else {
          *param_1 = (code ******)*puVar11;
          *puVar11 = param_1;
        }
        lStack_f8 = lStack_f8 + 1;
LAB_10a63eb8c:
        ppppppcVar21 = (code ******)*ppppppcVar21;
      } while (ppppppcVar21 != (code ******)0x0);
    }
    unaff_x22 = (code *******)0x0;
    if ((code *******)ppppppcStack_100 == (code *******)0x0) {
      FUN_10a57db40(&lStack_110);
    }
    else {
      unaff_x22 = (code *******)&pppppcStack_e0;
      unaff_x23 = &ppppppcStack_c0;
      pppppppcVar22 = (code *******)ppppppcStack_100;
      do {
        pppppppcVar7 = (code *******)pppppppcVar22[2];
        pppppppcVar17 = unaff_x21 + 3;
        FUN_10a62adc0();
        param_2 = pppppppcVar7;
        if (pppppppcVar17 != (code *******)0x0) {
          if (*(char *)(pppppppcVar22 + 0xc) == '\x01') {
            ppppppcVar21 = pppppppcVar22[4];
            ppuStack_b8 = ppuStack_138;
            ppppppcStack_c0 = ppppppcStack_140;
            if (ppuStack_138 != (undefined **)0x0) {
              ppuVar6 = ppuStack_138 + 1;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                if (bVar3) {
                  *ppuVar6 = *ppuVar6 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            param_2 = pppppppcVar22 + 4;
            (*(code *)ppppppcVar21)(&ppppppcStack_c0);
            if (ppuStack_b8 != (undefined **)0x0) {
              ppuVar6 = ppuStack_b8 + 1;
              do {
                puVar12 = *ppuVar6;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                if (bVar3) {
                  *ppuVar6 = puVar12 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                ppuVar18 = ppuStack_b8;
              } while (cVar2 != '\0');
LAB_10a63ec6c:
              if (puVar12 == (undefined *)0x0) {
                (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
              }
            }
          }
          else if (*(char *)(pppppppcVar22 + 0xc) == '\x02') {
            param_1 = pppppppcVar22 + 4;
            FUN_10a688b40();
            ppuVar6 = ppuStack_138;
            if (param_1 == (code *******)0x0) {
              param_2 = (code *******)0x0;
              if (pppppppcVar7 != (code *******)0x0) {
                pppppcStack_b0 = (code *****)pppppppcVar22[4];
                pppppcStack_a8 = (code *****)pppppppcVar22[5];
                if ((code ******)pppppcStack_a8 != (code ******)0x0) {
                  ppppppcVar21 = (code ******)(pppppcStack_a8 + 1);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(ppppppcVar21,0x10);
                    if (bVar3) {
                      *ppppppcVar21 = (code *****)((long)*ppppppcVar21 + 1);
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                ppppppcStack_d0 = ppppppcStack_140;
                ppuStack_c8 = ppuStack_138;
                if (ppuStack_138 == (undefined **)0x0) {
                  ppuStack_98 = (undefined **)0x0;
                }
                else {
                  ppuVar18 = ppuStack_138 + 1;
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
                    if (bVar3) {
                      *ppuVar18 = *ppuVar18 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  ppuStack_98 = ppuStack_138;
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
                    if (bVar3) {
                      *ppuVar18 = *ppuVar18 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                ppppppcStack_a0 = ppppppcStack_140;
                ppuStack_b8 = &PTR_FUN_110c01888;
                ppuStack_d8 = (undefined **)0x0;
                pppppcStack_e0 = (code *****)0x0;
                ppppppcStack_c0 = (code ******)FUN_10a63f71c;
                param_2 = &ppppppcStack_c0;
                FUN_10a4634ec(pppppppcVar7);
                (*(code *)*ppuStack_b8)(&ppuStack_b8);
                if (ppuVar6 != (undefined **)0x0) {
                  ppuVar18 = ppuVar6 + 1;
                  do {
                    puVar12 = *ppuVar18;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
                    if (bVar3) {
                      *ppuVar18 = puVar12 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (puVar12 == (undefined *)0x0) {
                    (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
                  }
                }
                if (ppuStack_d8 != (undefined **)0x0) {
                  ppuVar6 = ppuStack_d8 + 1;
                  do {
                    puVar12 = *ppuVar6;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                    if (bVar3) {
                      *ppuVar6 = puVar12 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                    ppuVar18 = ppuStack_d8;
                  } while (cVar2 != '\0');
                  goto LAB_10a63ec6c;
                }
              }
            }
            else {
              *param_1 = (code ******)CONCAT44((int)((ulong)*param_1 >> 0x20) + 1,(int)*param_1 + 1)
              ;
              param_2 = &ppppppcStack_140;
              FUN_10a63f518(pppppppcVar22[4]);
              iVar4 = *(int *)((long)param_1 + 4) + -1;
              *(int *)((long)param_1 + 4) = iVar4;
              if (iVar4 == 0) {
                *(undefined4 *)param_1 = 0;
              }
            }
          }
        }
        ppuVar6 = ppuStack_138;
        pppppppcVar22 = (code *******)*pppppppcVar22;
      } while (pppppppcVar22 != (code *******)0x0);
      FUN_10a57db40(&lStack_110);
      if (ppuVar6 == (undefined **)0x0) goto LAB_10a63f2c0;
    }
    ppuVar18 = ppuVar6 + 1;
    do {
      puVar12 = *ppuVar18;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
      if (bVar3) {
        *ppuVar18 = puVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_10a63f2a4:
    if (puVar12 == (undefined *)0x0) {
      (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
    }
  }
  else {
    if (uVar1 == 1) {
      unaff_x21 = (code *******)pppppppcVar17[0x4f];
      ppuVar6 = (undefined **)0x50;
      __Znwm();
      ppppppcVar24 = ppppppcStack_120;
      ppppppcVar23 = ppppppcStack_130;
      ppuVar6[1] = (undefined *)0x0;
      ppuVar6[2] = (undefined *)0x0;
      *ppuVar6 = (undefined *)&PTR_DAT_110c01918;
      ppppppcStack_128 = (code ******)0x0;
      ppppppcStack_120 = (code ******)0x0;
      ppppppcStack_130 = (code ******)0x0;
      ppuVar6[4] = (undefined *)0x0;
      ppuVar6[5] = (undefined *)0x0;
      ppppppcStack_140 = (code ******)(ppuVar6 + 3);
      *ppppppcStack_140 = (code *****)&PTR_DAT_110bfbb28;
      *(undefined4 *)(ppuVar6 + 6) = uVar26;
      *(undefined4 *)((long)ppuVar6 + 0x34) = uVar25;
      ppuVar6[7] = (undefined *)ppppppcVar23;
      ppuVar6[8] = (undefined *)ppppppcVar21;
      ppuVar6[9] = (undefined *)ppppppcVar24;
      pppppcStack_108 = (code *****)0x0;
      lStack_110 = 0;
      lStack_f8 = 0;
      ppppppcStack_100 = (code ******)0x0;
      fStack_f0 = *(float *)(unaff_x21 + 7);
      param_2 = (code *******)unaff_x21[4];
      ppuStack_138 = ppuVar6;
      FUN_10a62b2ec(&lStack_110);
      ppppppcVar21 = unaff_x21[5];
      if (ppppppcVar21 != (code ******)0x0) {
        unaff_x23 = (code *******)0x9ddfea08eb382d69;
        do {
          ppppppcVar23 = (code ******)pppppcStack_108;
          pppppcVar9 = ppppppcVar21[2];
          uVar14 = ((ulong)(uint)((int)pppppcVar9 << 3) + 8 ^ (ulong)pppppcVar9 >> 0x20) *
                   -0x622015f714c7d297;
          uVar14 = ((ulong)pppppcVar9 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
          ppppppcVar24 = (code ******)((uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297);
          if ((code ******)pppppcStack_108 != (code ******)0x0) {
            uVar14 = (long)pppppcStack_108 - 1;
            if (((ulong)pppppcStack_108 & uVar14) == 0) {
              unaff_x26 = (code ******)((ulong)ppppppcVar24 & uVar14);
            }
            else {
              unaff_x26 = ppppppcVar24;
              if (pppppcStack_108 <= ppppppcVar24) {
                uVar10 = 0;
                if ((code ******)pppppcStack_108 != (code ******)0x0) {
                  uVar10 = (ulong)ppppppcVar24 / (ulong)pppppcStack_108;
                }
                unaff_x26 = (code ******)((long)ppppppcVar24 - uVar10 * (long)pppppcStack_108);
              }
            }
            plVar15 = *(long **)(lStack_110 + (long)unaff_x26 * 8);
            if (plVar15 != (long *)0x0) {
              do {
                while( true ) {
                  plVar15 = (long *)*plVar15;
                  if (plVar15 == (long *)0x0) goto LAB_10a63e580;
                  ppppppcVar16 = (code ******)plVar15[1];
                  if (ppppppcVar16 != ppppppcVar24) break;
                  if ((code *****)plVar15[2] == pppppcVar9) goto LAB_10a63e6e0;
                }
                if (((ulong)pppppcStack_108 & uVar14) == 0) {
                  ppppppcVar16 = (code ******)((ulong)ppppppcVar16 & uVar14);
                }
                else if (pppppcStack_108 <= ppppppcVar16) {
                  uVar10 = 0;
                  if ((code ******)pppppcStack_108 != (code ******)0x0) {
                    uVar10 = (ulong)ppppppcVar16 / (ulong)pppppcStack_108;
                  }
                  ppppppcVar16 = (code ******)((long)ppppppcVar16 - uVar10 * (long)pppppcStack_108);
                }
              } while (ppppppcVar16 == unaff_x26);
            }
          }
LAB_10a63e580:
          param_1 = (code *******)0x68;
          __Znwm();
          *param_1 = (code ******)0x0;
          param_1[1] = ppppppcVar24;
          pppppcVar9 = ppppppcVar21[3];
          ppppppcVar16 = (code ******)ppppppcVar21[2];
          param_1[3] = (code ******)ppppppcVar21[3];
          param_1[2] = ppppppcVar16;
          if (pppppcVar9 != (code *****)0x0) {
            pppppcVar9 = pppppcVar9 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppppcVar9,0x10);
              if (bVar3) {
                *pppppcVar9 = (code ****)((long)*pppppcVar9 + 1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          ppppppcStack_c0 = (code ******)(param_1 + 4);
          *(undefined1 *)(param_1 + 0xc) = 3;
          if (*(char *)(ppppppcVar21 + 0xc) == '\0') {
            uVar8 = 0;
          }
          else {
            param_2 = (code *******)(ppppppcVar21 + 4);
            FUN_10a005398(&ppppppcStack_c0);
            uVar8 = *(undefined1 *)(ppppppcVar21 + 0xc);
          }
          *(undefined1 *)(param_1 + 0xc) = uVar8;
          if ((ppppppcVar23 == (code ******)0x0) ||
             (fStack_f0 * (float)ppppppcVar23 < (float)(lStack_f8 + 1))) {
            uVar14 = 1;
            if ((code ******)0x2 < ppppppcVar23) {
              uVar14 = (ulong)(((ulong)ppppppcVar23 & (long)ppppppcVar23 - 1U) != 0);
            }
            param_2 = (code *******)(uVar14 | (long)ppppppcVar23 << 1);
            pppppppcVar22 = (code *******)(long)((float)(lStack_f8 + 1) / fStack_f0);
            if (param_2 <= pppppppcVar22) {
              param_2 = pppppppcVar22;
            }
            FUN_10a62b2ec(&lStack_110);
            ppppppcVar23 = (code ******)pppppcStack_108;
            if (((ulong)pppppcStack_108 & (long)pppppcStack_108 - 1U) == 0) {
              unaff_x26 = (code ******)((long)pppppcStack_108 - 1U & (ulong)ppppppcVar24);
            }
            else {
              unaff_x26 = ppppppcVar24;
              if (pppppcStack_108 <= ppppppcVar24) {
                uVar14 = 0;
                if ((code ******)pppppcStack_108 != (code ******)0x0) {
                  uVar14 = (ulong)ppppppcVar24 / (ulong)pppppcStack_108;
                }
                unaff_x26 = (code ******)((long)ppppppcVar24 - uVar14 * (long)pppppcStack_108);
              }
            }
          }
          puVar11 = *(undefined8 **)(lStack_110 + (long)unaff_x26 * 8);
          if (puVar11 == (undefined8 *)0x0) {
            *param_1 = ppppppcStack_100;
            *(code ********)(lStack_110 + (long)unaff_x26 * 8) = &ppppppcStack_100;
            ppppppcStack_100 = (code ******)param_1;
            if (*param_1 != (code ******)0x0) {
              ppppppcVar24 = (code ******)(*param_1)[1];
              if (((ulong)ppppppcVar23 & (long)ppppppcVar23 - 1U) == 0) {
                ppppppcVar24 = (code ******)((ulong)ppppppcVar24 & (long)ppppppcVar23 - 1U);
              }
              else if (ppppppcVar23 <= ppppppcVar24) {
                uVar14 = 0;
                if (ppppppcVar23 != (code ******)0x0) {
                  uVar14 = (ulong)ppppppcVar24 / (ulong)ppppppcVar23;
                }
                ppppppcVar24 = (code ******)((long)ppppppcVar24 - uVar14 * (long)ppppppcVar23);
              }
              *(code ********)(lStack_110 + (long)ppppppcVar24 * 8) = param_1;
            }
          }
          else {
            *param_1 = (code ******)*puVar11;
            *puVar11 = param_1;
          }
          lStack_f8 = lStack_f8 + 1;
LAB_10a63e6e0:
          ppppppcVar21 = (code ******)*ppppppcVar21;
        } while (ppppppcVar21 != (code ******)0x0);
      }
      unaff_x22 = (code *******)0x0;
      if ((code *******)ppppppcStack_100 == (code *******)0x0) {
        FUN_10a57de6c(&lStack_110);
      }
      else {
        unaff_x22 = (code *******)&pppppcStack_e0;
        unaff_x23 = &ppppppcStack_c0;
        pppppppcVar22 = (code *******)ppppppcStack_100;
        do {
          pppppppcVar7 = (code *******)pppppppcVar22[2];
          pppppppcVar17 = unaff_x21 + 3;
          FUN_10a62bcfc();
          param_2 = pppppppcVar7;
          if (pppppppcVar17 != (code *******)0x0) {
            if (*(char *)(pppppppcVar22 + 0xc) == '\x01') {
              ppppppcVar21 = pppppppcVar22[4];
              ppuStack_b8 = ppuStack_138;
              ppppppcStack_c0 = ppppppcStack_140;
              if (ppuStack_138 != (undefined **)0x0) {
                ppuVar6 = ppuStack_138 + 1;
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                  if (bVar3) {
                    *ppuVar6 = *ppuVar6 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              param_2 = pppppppcVar22 + 4;
              (*(code *)ppppppcVar21)(&ppppppcStack_c0);
              if (ppuStack_b8 != (undefined **)0x0) {
                ppuVar6 = ppuStack_b8 + 1;
                do {
                  puVar12 = *ppuVar6;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                  if (bVar3) {
                    *ppuVar6 = puVar12 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  ppuVar18 = ppuStack_b8;
                } while (cVar2 != '\0');
LAB_10a63e7c0:
                if (puVar12 == (undefined *)0x0) {
                  (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
                }
              }
            }
            else if (*(char *)(pppppppcVar22 + 0xc) == '\x02') {
              param_1 = pppppppcVar22 + 4;
              FUN_10a688b40();
              ppuVar6 = ppuStack_138;
              if (param_1 == (code *******)0x0) {
                param_2 = (code *******)0x0;
                if (pppppppcVar7 != (code *******)0x0) {
                  pppppcStack_b0 = (code *****)pppppppcVar22[4];
                  pppppcStack_a8 = (code *****)pppppppcVar22[5];
                  if ((code ******)pppppcStack_a8 != (code ******)0x0) {
                    ppppppcVar21 = (code ******)(pppppcStack_a8 + 1);
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(ppppppcVar21,0x10);
                      if (bVar3) {
                        *ppppppcVar21 = (code *****)((long)*ppppppcVar21 + 1);
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  ppppppcStack_d0 = ppppppcStack_140;
                  ppuStack_c8 = ppuStack_138;
                  if (ppuStack_138 == (undefined **)0x0) {
                    ppuStack_98 = (undefined **)0x0;
                  }
                  else {
                    ppuVar18 = ppuStack_138 + 1;
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
                      if (bVar3) {
                        *ppuVar18 = *ppuVar18 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    ppuStack_98 = ppuStack_138;
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
                      if (bVar3) {
                        *ppuVar18 = *ppuVar18 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  ppppppcStack_a0 = ppppppcStack_140;
                  ppuStack_b8 = &PTR_FUN_110c018f0;
                  ppuStack_d8 = (undefined **)0x0;
                  pppppcStack_e0 = (code *****)0x0;
                  ppppppcStack_c0 = (code ******)FUN_10a63fa30;
                  param_2 = &ppppppcStack_c0;
                  FUN_10a4634ec(pppppppcVar7);
                  (*(code *)*ppuStack_b8)(&ppuStack_b8);
                  if (ppuVar6 != (undefined **)0x0) {
                    ppuVar18 = ppuVar6 + 1;
                    do {
                      puVar12 = *ppuVar18;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
                      if (bVar3) {
                        *ppuVar18 = puVar12 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (puVar12 == (undefined *)0x0) {
                      (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
                    }
                  }
                  if (ppuStack_d8 != (undefined **)0x0) {
                    ppuVar6 = ppuStack_d8 + 1;
                    do {
                      puVar12 = *ppuVar6;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                      if (bVar3) {
                        *ppuVar6 = puVar12 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                      ppuVar18 = ppuStack_d8;
                    } while (cVar2 != '\0');
                    goto LAB_10a63e7c0;
                  }
                }
              }
              else {
                *param_1 = (code ******)
                           CONCAT44((int)((ulong)*param_1 >> 0x20) + 1,(int)*param_1 + 1);
                param_2 = &ppppppcStack_140;
                FUN_10a63f82c(pppppppcVar22[4]);
                iVar4 = *(int *)((long)param_1 + 4) + -1;
                *(int *)((long)param_1 + 4) = iVar4;
                if (iVar4 == 0) {
                  *(undefined4 *)param_1 = 0;
                }
              }
            }
          }
          ppuVar6 = ppuStack_138;
          pppppppcVar22 = (code *******)*pppppppcVar22;
        } while (pppppppcVar22 != (code *******)0x0);
        FUN_10a57de6c(&lStack_110);
        if (ppuVar6 == (undefined **)0x0) goto LAB_10a63f2c0;
      }
      ppuVar18 = ppuVar6 + 1;
      do {
        puVar12 = *ppuVar18;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar3) {
          *ppuVar18 = puVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_10a63f2a4;
    }
    unaff_x22 = (code *******)ppppppcStack_128;
    if ((uVar1 & 0xfffffffe) == 2) {
      unaff_x21 = (code *******)pppppppcVar17[0x51];
      ppuVar6 = (undefined **)0x50;
      __Znwm();
      ppppppcVar24 = ppppppcStack_120;
      ppppppcVar23 = ppppppcStack_130;
      ppuVar6[1] = (undefined *)0x0;
      ppuVar6[2] = (undefined *)0x0;
      *ppuVar6 = (undefined *)&PTR_DAT_110c01980;
      ppppppcStack_128 = (code ******)0x0;
      ppppppcStack_120 = (code ******)0x0;
      ppppppcStack_130 = (code ******)0x0;
      ppuVar6[4] = (undefined *)0x0;
      ppuVar6[5] = (undefined *)0x0;
      ppppppcStack_140 = (code ******)(ppuVar6 + 3);
      *ppppppcStack_140 = (code *****)&PTR_DAT_110bfbb80;
      *(undefined4 *)(ppuVar6 + 6) = uVar26;
      *(undefined4 *)((long)ppuVar6 + 0x34) = uVar25;
      ppuVar6[7] = (undefined *)ppppppcVar23;
      ppuVar6[8] = (undefined *)ppppppcVar21;
      ppuVar6[9] = (undefined *)ppppppcVar24;
      pppppcStack_108 = (code *****)0x0;
      lStack_110 = 0;
      lStack_f8 = 0;
      ppppppcStack_100 = (code ******)0x0;
      fStack_f0 = *(float *)(unaff_x21 + 7);
      param_2 = (code *******)unaff_x21[4];
      ppuStack_138 = ppuVar6;
      FUN_10a62c228(&lStack_110);
      ppppppcVar21 = unaff_x21[5];
      if (ppppppcVar21 != (code ******)0x0) {
        unaff_x23 = (code *******)0x9ddfea08eb382d69;
        do {
          ppppppcVar23 = (code ******)pppppcStack_108;
          pppppcVar9 = ppppppcVar21[2];
          uVar14 = ((ulong)(uint)((int)pppppcVar9 << 3) + 8 ^ (ulong)pppppcVar9 >> 0x20) *
                   -0x622015f714c7d297;
          uVar14 = ((ulong)pppppcVar9 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
          ppppppcVar24 = (code ******)((uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297);
          if ((code ******)pppppcStack_108 != (code ******)0x0) {
            uVar14 = (long)pppppcStack_108 - 1;
            if (((ulong)pppppcStack_108 & uVar14) == 0) {
              unaff_x26 = (code ******)((ulong)ppppppcVar24 & uVar14);
            }
            else {
              unaff_x26 = ppppppcVar24;
              if (pppppcStack_108 <= ppppppcVar24) {
                uVar10 = 0;
                if ((code ******)pppppcStack_108 != (code ******)0x0) {
                  uVar10 = (ulong)ppppppcVar24 / (ulong)pppppcStack_108;
                }
                unaff_x26 = (code ******)((long)ppppppcVar24 - uVar10 * (long)pppppcStack_108);
              }
            }
            plVar15 = *(long **)(lStack_110 + (long)unaff_x26 * 8);
            if (plVar15 != (long *)0x0) {
              do {
                while( true ) {
                  plVar15 = (long *)*plVar15;
                  if (plVar15 == (long *)0x0) goto LAB_10a63eee4;
                  ppppppcVar16 = (code ******)plVar15[1];
                  if (ppppppcVar16 != ppppppcVar24) break;
                  if ((code *****)plVar15[2] == pppppcVar9) goto LAB_10a63f044;
                }
                if (((ulong)pppppcStack_108 & uVar14) == 0) {
                  ppppppcVar16 = (code ******)((ulong)ppppppcVar16 & uVar14);
                }
                else if (pppppcStack_108 <= ppppppcVar16) {
                  uVar10 = 0;
                  if ((code ******)pppppcStack_108 != (code ******)0x0) {
                    uVar10 = (ulong)ppppppcVar16 / (ulong)pppppcStack_108;
                  }
                  ppppppcVar16 = (code ******)((long)ppppppcVar16 - uVar10 * (long)pppppcStack_108);
                }
              } while (ppppppcVar16 == unaff_x26);
            }
          }
LAB_10a63eee4:
          param_1 = (code *******)0x68;
          __Znwm();
          *param_1 = (code ******)0x0;
          param_1[1] = ppppppcVar24;
          pppppcVar9 = ppppppcVar21[3];
          ppppppcVar16 = (code ******)ppppppcVar21[2];
          param_1[3] = (code ******)ppppppcVar21[3];
          param_1[2] = ppppppcVar16;
          if (pppppcVar9 != (code *****)0x0) {
            pppppcVar9 = pppppcVar9 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppppcVar9,0x10);
              if (bVar3) {
                *pppppcVar9 = (code ****)((long)*pppppcVar9 + 1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          ppppppcStack_c0 = (code ******)(param_1 + 4);
          *(undefined1 *)(param_1 + 0xc) = 3;
          if (*(char *)(ppppppcVar21 + 0xc) == '\0') {
            uVar8 = 0;
          }
          else {
            param_2 = (code *******)(ppppppcVar21 + 4);
            FUN_10a005398(&ppppppcStack_c0);
            uVar8 = *(undefined1 *)(ppppppcVar21 + 0xc);
          }
          *(undefined1 *)(param_1 + 0xc) = uVar8;
          if ((ppppppcVar23 == (code ******)0x0) ||
             (fStack_f0 * (float)ppppppcVar23 < (float)(lStack_f8 + 1))) {
            uVar14 = 1;
            if ((code ******)0x2 < ppppppcVar23) {
              uVar14 = (ulong)(((ulong)ppppppcVar23 & (long)ppppppcVar23 - 1U) != 0);
            }
            param_2 = (code *******)(uVar14 | (long)ppppppcVar23 << 1);
            pppppppcVar22 = (code *******)(long)((float)(lStack_f8 + 1) / fStack_f0);
            if (param_2 <= pppppppcVar22) {
              param_2 = pppppppcVar22;
            }
            FUN_10a62c228(&lStack_110);
            ppppppcVar23 = (code ******)pppppcStack_108;
            if (((ulong)pppppcStack_108 & (long)pppppcStack_108 - 1U) == 0) {
              unaff_x26 = (code ******)((long)pppppcStack_108 - 1U & (ulong)ppppppcVar24);
            }
            else {
              unaff_x26 = ppppppcVar24;
              if (pppppcStack_108 <= ppppppcVar24) {
                uVar14 = 0;
                if ((code ******)pppppcStack_108 != (code ******)0x0) {
                  uVar14 = (ulong)ppppppcVar24 / (ulong)pppppcStack_108;
                }
                unaff_x26 = (code ******)((long)ppppppcVar24 - uVar14 * (long)pppppcStack_108);
              }
            }
          }
          puVar11 = *(undefined8 **)(lStack_110 + (long)unaff_x26 * 8);
          if (puVar11 == (undefined8 *)0x0) {
            *param_1 = ppppppcStack_100;
            *(code ********)(lStack_110 + (long)unaff_x26 * 8) = &ppppppcStack_100;
            ppppppcStack_100 = (code ******)param_1;
            if (*param_1 != (code ******)0x0) {
              ppppppcVar24 = (code ******)(*param_1)[1];
              if (((ulong)ppppppcVar23 & (long)ppppppcVar23 - 1U) == 0) {
                ppppppcVar24 = (code ******)((ulong)ppppppcVar24 & (long)ppppppcVar23 - 1U);
              }
              else if (ppppppcVar23 <= ppppppcVar24) {
                uVar14 = 0;
                if (ppppppcVar23 != (code ******)0x0) {
                  uVar14 = (ulong)ppppppcVar24 / (ulong)ppppppcVar23;
                }
                ppppppcVar24 = (code ******)((long)ppppppcVar24 - uVar14 * (long)ppppppcVar23);
              }
              *(code ********)(lStack_110 + (long)ppppppcVar24 * 8) = param_1;
            }
          }
          else {
            *param_1 = (code ******)*puVar11;
            *puVar11 = param_1;
          }
          lStack_f8 = lStack_f8 + 1;
LAB_10a63f044:
          ppppppcVar21 = (code ******)*ppppppcVar21;
        } while (ppppppcVar21 != (code ******)0x0);
      }
      unaff_x22 = (code *******)0x0;
      if ((code *******)ppppppcStack_100 == (code *******)0x0) {
        FUN_10a57e198(&lStack_110);
      }
      else {
        unaff_x22 = (code *******)&pppppcStack_e0;
        unaff_x23 = &ppppppcStack_c0;
        pppppppcVar22 = (code *******)ppppppcStack_100;
        do {
          pppppppcVar7 = (code *******)pppppppcVar22[2];
          pppppppcVar17 = unaff_x21 + 3;
          FUN_10a62cc38();
          param_2 = pppppppcVar7;
          if (pppppppcVar17 != (code *******)0x0) {
            if (*(char *)(pppppppcVar22 + 0xc) == '\x01') {
              ppppppcVar21 = pppppppcVar22[4];
              ppuStack_b8 = ppuStack_138;
              ppppppcStack_c0 = ppppppcStack_140;
              if (ppuStack_138 != (undefined **)0x0) {
                ppuVar6 = ppuStack_138 + 1;
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                  if (bVar3) {
                    *ppuVar6 = *ppuVar6 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              param_2 = pppppppcVar22 + 4;
              (*(code *)ppppppcVar21)(&ppppppcStack_c0);
              if (ppuStack_b8 != (undefined **)0x0) {
                ppuVar6 = ppuStack_b8 + 1;
                do {
                  puVar12 = *ppuVar6;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                  if (bVar3) {
                    *ppuVar6 = puVar12 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  ppuVar18 = ppuStack_b8;
                } while (cVar2 != '\0');
LAB_10a63f124:
                if (puVar12 == (undefined *)0x0) {
                  (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
                }
              }
            }
            else if (*(char *)(pppppppcVar22 + 0xc) == '\x02') {
              param_1 = pppppppcVar22 + 4;
              FUN_10a688b40();
              ppuVar6 = ppuStack_138;
              if (param_1 == (code *******)0x0) {
                param_2 = (code *******)0x0;
                if (pppppppcVar7 != (code *******)0x0) {
                  pppppcStack_b0 = (code *****)pppppppcVar22[4];
                  pppppcStack_a8 = (code *****)pppppppcVar22[5];
                  if ((code ******)pppppcStack_a8 != (code ******)0x0) {
                    ppppppcVar21 = (code ******)(pppppcStack_a8 + 1);
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(ppppppcVar21,0x10);
                      if (bVar3) {
                        *ppppppcVar21 = (code *****)((long)*ppppppcVar21 + 1);
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  ppppppcStack_d0 = ppppppcStack_140;
                  ppuStack_c8 = ppuStack_138;
                  if (ppuStack_138 == (undefined **)0x0) {
                    ppuStack_98 = (undefined **)0x0;
                  }
                  else {
                    ppuVar18 = ppuStack_138 + 1;
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
                      if (bVar3) {
                        *ppuVar18 = *ppuVar18 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    ppuStack_98 = ppuStack_138;
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
                      if (bVar3) {
                        *ppuVar18 = *ppuVar18 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  ppppppcStack_a0 = ppppppcStack_140;
                  ppuStack_b8 = &PTR_FUN_110c01958;
                  ppuStack_d8 = (undefined **)0x0;
                  pppppcStack_e0 = (code *****)0x0;
                  ppppppcStack_c0 = (code ******)FUN_10a63fd44;
                  param_2 = &ppppppcStack_c0;
                  FUN_10a4634ec(pppppppcVar7);
                  (*(code *)*ppuStack_b8)(&ppuStack_b8);
                  if (ppuVar6 != (undefined **)0x0) {
                    ppuVar18 = ppuVar6 + 1;
                    do {
                      puVar12 = *ppuVar18;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
                      if (bVar3) {
                        *ppuVar18 = puVar12 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (puVar12 == (undefined *)0x0) {
                      (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
                    }
                  }
                  if (ppuStack_d8 != (undefined **)0x0) {
                    ppuVar6 = ppuStack_d8 + 1;
                    do {
                      puVar12 = *ppuVar6;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                      if (bVar3) {
                        *ppuVar6 = puVar12 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                      ppuVar18 = ppuStack_d8;
                    } while (cVar2 != '\0');
                    goto LAB_10a63f124;
                  }
                }
              }
              else {
                *param_1 = (code ******)
                           CONCAT44((int)((ulong)*param_1 >> 0x20) + 1,(int)*param_1 + 1);
                param_2 = &ppppppcStack_140;
                FUN_10a63fb40(pppppppcVar22[4]);
                iVar4 = *(int *)((long)param_1 + 4) + -1;
                *(int *)((long)param_1 + 4) = iVar4;
                if (iVar4 == 0) {
                  *(undefined4 *)param_1 = 0;
                }
              }
            }
          }
          ppuVar6 = ppuStack_138;
          pppppppcVar22 = (code *******)*pppppppcVar22;
        } while (pppppppcVar22 != (code *******)0x0);
        FUN_10a57e198(&lStack_110);
        if (ppuVar6 == (undefined **)0x0) goto LAB_10a63f2c0;
      }
      ppuVar18 = ppuVar6 + 1;
      do {
        puVar12 = *ppuVar18;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar3) {
          *ppuVar18 = puVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_10a63f2a4;
    }
  }
LAB_10a63f2c0:
  pppppppcVar22 = (code *******)ppppppcStack_130;
  unaff_x20 = param_1;
  if ((code *******)ppppppcStack_130 != (code *******)0x0) {
    ppppppcStack_128 = ppppppcStack_130;
    __ZdlPv();
  }
LAB_10a63f2d0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b8)(unaff_x23 + 1);
  FUN_10a63fdfc(unaff_x22 + 2);
  func_0x00010a004dac(&pppppcStack_e0);
  FUN_10a57e198(&lStack_110);
  FUN_10a63fdfc(&ppppppcStack_140);
  if ((code *******)ppppppcStack_130 != (code *******)0x0) {
    ppppppcStack_128 = ppppppcStack_130;
    __ZdlPv();
  }
  pppppppcVar17 = pppppppcVar22;
  __Unwind_Resume();
  pcStack_148 = FUN_10a63f518;
  ppppppcStack_170 = (code ******)unaff_x22;
  ppppppcStack_168 = (code ******)unaff_x21;
  ppppppcStack_160 = (code ******)unaff_x20;
  ppppppcStack_158 = (code ******)pppppppcVar22;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&pppppcStack_1a0,pppppppcVar17 + 1,*pppppppcVar17);
  func_0x000109884820(&pppcStack_1c8,&pppppcStack_1a0,*pppppppcVar17);
  if (pppppcStack_1a0 != (code *****)0x0) {
    (*(code *)**pppppcStack_1a0)();
  }
  (*(code *)(**pppppppcVar17)[6])(&puStack_1d0);
  ppppppcVar21 = *pppppppcVar17;
  pppppcStack_198 = (code *****)param_2[1];
  pppppcStack_1a0 = (code *****)*param_2;
  if (param_2[1] != (code ******)0x0) {
    ppppppcVar23 = param_2[1] + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppcVar23,0x10);
      if (bVar3) {
        *ppppppcVar23 = (code *****)((long)*ppppppcVar23 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppuStack_180 = &PTR_DAT_110bffc00;
  func_0x000109899de4(&puStack_1b0,ppppppcVar21,&pppppcStack_1a0,&ppuStack_180,0,0);
  pppppcVar9 = pppppcStack_198;
  if ((code ******)pppppcStack_198 != (code ******)0x0) {
    ppppppcVar23 = (code ******)(pppppcStack_198 + 1);
    do {
      pppppcVar13 = *ppppppcVar23;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppcVar23,0x10);
      if (bVar3) {
        *ppppppcVar23 = (code *****)((long)pppppcVar13 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (pppppcVar13 == (code *****)0x0) {
      (*(code *)(*pppppcStack_198)[2])(pppppcStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppcVar9);
    }
  }
  uStack_178 = 1;
  ppuStack_180 = &puStack_1b0;
  (*(code *)(*ppppppcVar21)[0xb])(ppppppcVar21);
  pppppcStack_1a0 = (code *****)&pppcStack_1c8;
  pppppcStack_198 = (code *****)ppppppcVar21;
  puStack_190 = (undefined1 *)&puStack_1d0;
  pppuStack_188 = &ppuStack_180;
  func_0x0001098960c0(aiStack_1c0);
  if ((3 < aiStack_1c0[0]) && (puStack_1b8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_1b8)();
  }
  if ((3 < (int)puStack_1b0) && (puStack_1a8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_1a8)();
  }
  if (puStack_1d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_1d0)();
  }
  if ((code ****)pppcStack_1c8 != (code ****)0x0) {
    (***pppcStack_1c8)();
  }
  return;
}



/* Entry: 10a63f518; end: 10a63f71b;  */

void FUN_10a63f518(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110bffc00;
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



/* Entry: 10a63f71c; end: 10a63f72b;  */

void FUN_10a63f71c(long param_1)

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
  ppuStack_40 = &PTR_DAT_110bffc00;
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



/* Entry: 10a63f72c; end: 10a63f753;  */

long FUN_10a63f72c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a63f7d4(param_1 + 0x18);
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



/* Entry: 10a63f754; end: 10a63f7a3;  */

void FUN_10a63f754(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c01888;
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



/* Entry: 10a63f7a4; end: 10a63f7c3;  */

void FUN_10a63f7a4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c018b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a63f7c4; end: 10a63f7d3;  */

void FUN_10a63f7c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a63f7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a63f7d4; end: 10a63f82b;  */

long FUN_10a63f7d4(long param_1)

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



/* Entry: 10a63f82c; end: 10a63fa2f;  */

void FUN_10a63f82c(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110bffc18;
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



/* Entry: 10a63fa30; end: 10a63fa3f;  */

void FUN_10a63fa30(long param_1)

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
  ppuStack_40 = &PTR_DAT_110bffc18;
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



/* Entry: 10a63fa40; end: 10a63fa67;  */

long FUN_10a63fa40(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a63fae8(param_1 + 0x18);
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



/* Entry: 10a63fa68; end: 10a63fab7;  */

void FUN_10a63fa68(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c018f0;
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



/* Entry: 10a63fab8; end: 10a63fad7;  */

void FUN_10a63fab8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c01918;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a63fad8; end: 10a63fae7;  */

void FUN_10a63fad8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a63fae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a63fae8; end: 10a63fb3f;  */

long FUN_10a63fae8(long param_1)

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



/* Entry: 10a63fb40; end: 10a63fd43;  */

void FUN_10a63fb40(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110bffc30;
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



/* Entry: 10a63fd44; end: 10a63fd53;  */

void FUN_10a63fd44(long param_1)

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
  ppuStack_40 = &PTR_DAT_110bffc30;
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



/* Entry: 10a63fd54; end: 10a63fd7b;  */

long FUN_10a63fd54(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a63fdfc(param_1 + 0x18);
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



/* Entry: 10a63fd7c; end: 10a63fdcb;  */

void FUN_10a63fd7c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c01958;
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



/* Entry: 10a63fdcc; end: 10a63fdeb;  */

void FUN_10a63fdcc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c01980;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a63fdec; end: 10a63fdfb;  */

void FUN_10a63fdec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a63fdf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a63fdfc; end: 10a63fe53;  */

long FUN_10a63fdfc(long param_1)

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



/* Entry: 10a63fe54; end: 10a63fe87;  */

void FUN_10a63fe54(void)

{
  return;
}



/* Entry: 10a63fe88; end: 10a640d47;  */

void FUN_10a63fe88(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 ***pppuVar8;
  undefined8 ***pppuVar9;
  undefined8 ***pppuVar10;
  code *pcVar11;
  undefined8 ****ppppuVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined1 uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  undefined *puVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  ulong uVar26;
  undefined **ppuVar27;
  undefined8 ****ppppuVar28;
  undefined8 ****ppppuVar29;
  long lVar30;
  long *plVar31;
  undefined **ppuVar32;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined4 uVar33;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined8 ***pppuStack_130;
  undefined8 ***pppuStack_128;
  undefined8 ***pppuStack_120;
  undefined8 uStack_118;
  long lStack_110;
  ulong uStack_108;
  long *plStack_100;
  long lStack_f8;
  float fStack_f0;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar26 = *(ulong *)(param_2 + 0x10);
  if ((*(ushort *)(uVar26 + 0x180) >> 4 & 1) == 0) {
    uStack_118 = *(undefined8 *)(param_1 + 0x14);
    pppuStack_120 = (undefined8 ****)0x0;
    pppuStack_130 = (undefined8 ****)0x0;
    pppuStack_128 = (undefined8 ****)0x0;
    puVar16 = *(undefined8 **)(param_1 + 0x20);
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    if (puVar16 != puVar2) {
      unaff_x25 = 0x7ffffffffffffff8;
      unaff_x26 = 0x1fffffffffffffff;
      do {
        if (pppuStack_128 < pppuStack_120) {
          ppppuVar29 = (undefined8 ****)(pppuStack_128 + 1);
          *pppuStack_128 = (undefined8 ***)*puVar16;
        }
        else {
          lVar30 = (long)pppuStack_128 - (long)pppuStack_130;
          uVar20 = (lVar30 >> 3) + 1;
          if (uVar20 >> 0x3d != 0) {
            FUN_10a050828();
            goto LAB_10a640bcc;
          }
          uVar17 = (long)pppuStack_120 - (long)pppuStack_130 >> 2;
          if (uVar17 <= uVar20) {
            uVar17 = uVar20;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)pppuStack_120 - (long)pppuStack_130)) {
            uVar17 = 0x1fffffffffffffff;
          }
          ppppuVar12 = &pppuStack_130;
          FUN_10a05083c();
          puVar1 = (undefined8 *)((long)ppppuVar12 + lVar30);
          ppppuVar29 = (undefined8 ****)(puVar1 + 1);
          *puVar1 = *puVar16;
          ppppuVar28 = (undefined8 ****)((long)puVar1 - ((long)pppuStack_128 - (long)pppuStack_130))
          ;
          _memcpy(ppppuVar28);
          bVar5 = (undefined8 ****)pppuStack_130 != (undefined8 ****)0x0;
          pppuStack_130 = ppppuVar28;
          pppuStack_120 = ppppuVar12 + uVar17;
          if (bVar5) {
            pppuStack_128 = ppppuVar29;
            __ZdlPv();
          }
        }
        puVar16 = puVar16 + 1;
        pppuStack_128 = ppppuVar29;
      } while (puVar16 != puVar2);
    }
    pppuVar9 = pppuStack_128;
    uVar33 = *(undefined4 *)(param_1 + 0x38);
    uVar20 = uVar26;
    FUN_10a601f04(uVar26,&uStack_118);
    if ((uVar20 & 1) == 0) {
      if (*(char *)(uVar26 + 0x3d5) == '\x01') {
        FUN_10a639618(uVar33,uVar26,&pppuStack_130);
      }
LAB_10a640b58:
      if ((undefined8 ****)pppuStack_130 != (undefined8 ****)0x0) {
        pppuStack_128 = pppuStack_130;
        __ZdlPv();
      }
      goto LAB_10a640b68;
    }
    uVar3 = *(uint *)(param_1 + 0x10);
    if (uVar3 == 1) {
      ppuVar13 = (undefined **)0x50;
      __Znwm();
      pppuVar10 = pppuStack_120;
      pppuVar8 = pppuStack_130;
      ppuVar27 = ppuVar13 + 1;
      *ppuVar27 = (undefined *)0x0;
      ppuVar13[2] = (undefined *)0x0;
      *ppuVar13 = (undefined *)&PTR_DAT_110c01a58;
      ppuVar32 = ppuVar13 + 3;
      *ppuVar32 = (undefined *)&PTR_DAT_110bfbc30;
      pppuStack_128 = (undefined8 ****)0x0;
      pppuStack_120 = (undefined8 ****)0x0;
      pppuStack_130 = (undefined8 ****)0x0;
      ppuVar13[4] = (undefined *)0x0;
      ppuVar13[5] = (undefined *)0x0;
      *(undefined4 *)(ppuVar13 + 6) = uVar33;
      ppuVar13[7] = (undefined *)pppuVar8;
      ppuVar13[8] = (undefined *)pppuVar9;
      ppuVar13[9] = (undefined *)pppuVar10;
      puVar16 = *(undefined8 **)(uVar26 + 0x528);
      ppuStack_140 = ppuVar32;
      ppuStack_138 = ppuVar13;
      if (puVar16 < *(undefined8 **)(uVar26 + 0x530)) {
        *puVar16 = ppuVar32;
        puVar16[1] = ppuVar13;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar27,0x10);
          if (bVar5) {
            *ppuVar27 = *ppuVar27 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        puVar16 = puVar16 + 2;
      }
      else {
        lVar30 = *(long *)(uVar26 + 0x520);
        lVar18 = (long)puVar16 - lVar30;
        uVar20 = (lVar18 >> 4) + 1;
        if (uVar20 >> 0x3c != 0) {
          FUN_10a641058();
          goto LAB_10a640bcc;
        }
        uVar23 = (long)*(undefined8 **)(uVar26 + 0x530) - lVar30;
        uVar17 = (long)uVar23 >> 3;
        if (uVar17 <= uVar20) {
          uVar17 = uVar20;
        }
        if (0x7fffffffffffffef < uVar23) {
          uVar17 = 0xfffffffffffffff;
        }
        if (uVar17 >> 0x3c != 0) {
          func_0x000109ffded8();
          goto LAB_10a640bcc;
        }
        lVar14 = uVar17 << 4;
        __Znwm();
        puVar2 = (undefined8 *)(lVar14 + lVar18);
        *puVar2 = ppuVar32;
        puVar2[1] = ppuVar13;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar27,0x10);
          if (bVar5) {
            *ppuVar27 = *ppuVar27 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        unaff_x26 = lVar14 + uVar17 * 0x10;
        puVar16 = puVar2 + 2;
        _memcpy(puVar2 + (lVar18 >> 4) * -2,lVar30,lVar18);
        *(undefined8 **)(uVar26 + 0x520) = puVar2 + (lVar18 >> 4) * -2;
        *(undefined8 **)(uVar26 + 0x528) = puVar16;
        *(ulong *)(uVar26 + 0x530) = unaff_x26;
        if (lVar30 != 0) {
          __ZdlPv(lVar30);
        }
      }
      *(undefined8 **)(uVar26 + 0x528) = puVar16;
      lVar30 = *(long *)(uVar26 + 0x2a8);
      uStack_108 = 0;
      lStack_110 = 0;
      lStack_f8 = 0;
      plStack_100 = (long *)0x0;
      fStack_f0 = *(float *)(lVar30 + 0x38);
      FUN_10a62e0a0(&lStack_110,*(undefined8 *)(lVar30 + 0x20));
      plVar31 = *(long **)(lVar30 + 0x28);
      if (plVar31 != (long *)0x0) {
        do {
          uVar26 = uStack_108;
          uVar20 = plVar31[2];
          uVar17 = ((ulong)(uint)((int)uVar20 << 3) + 8 ^ uVar20 >> 0x20) * -0x622015f714c7d297;
          uVar17 = (uVar20 >> 0x20 ^ uVar17 >> 0x2f ^ uVar17) * -0x622015f714c7d297;
          uVar17 = (uVar17 ^ uVar17 >> 0x2f) * -0x622015f714c7d297;
          if (uStack_108 != 0) {
            uVar23 = uStack_108 - 1;
            if ((uStack_108 & uVar23) == 0) {
              unaff_x26 = uVar17 & uVar23;
            }
            else {
              unaff_x26 = uVar17;
              if (uStack_108 <= uVar17) {
                uVar19 = 0;
                if (uStack_108 != 0) {
                  uVar19 = uVar17 / uStack_108;
                }
                unaff_x26 = uVar17 - uVar19 * uStack_108;
              }
            }
            plVar24 = *(long **)(lStack_110 + unaff_x26 * 8);
            if (plVar24 != (long *)0x0) {
              do {
                while( true ) {
                  plVar24 = (long *)*plVar24;
                  if (plVar24 == (long *)0x0) goto LAB_10a640794;
                  uVar19 = plVar24[1];
                  if (uVar19 != uVar17) break;
                  if (plVar24[2] == uVar20) goto LAB_10a6408f4;
                }
                if ((uStack_108 & uVar23) == 0) {
                  uVar19 = uVar19 & uVar23;
                }
                else if (uStack_108 <= uVar19) {
                  uVar25 = 0;
                  if (uStack_108 != 0) {
                    uVar25 = uVar19 / uStack_108;
                  }
                  uVar19 = uVar19 - uVar25 * uStack_108;
                }
              } while (uVar19 == unaff_x26);
            }
          }
LAB_10a640794:
          plVar24 = (long *)0x68;
          __Znwm();
          *plVar24 = 0;
          plVar24[1] = uVar17;
          lVar18 = plVar31[3];
          lVar14 = plVar31[2];
          plVar24[3] = plVar31[3];
          plVar24[2] = lVar14;
          if (lVar18 != 0) {
            plVar21 = (long *)(lVar18 + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar5) {
                *plVar21 = *plVar21 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          ppuStack_c0 = (undefined **)(plVar24 + 4);
          *(undefined1 *)(plVar24 + 0xc) = 3;
          if ((char)plVar31[0xc] == '\0') {
            uVar15 = 0;
          }
          else {
            FUN_10a005398(&ppuStack_c0,plVar31 + 4);
            uVar15 = (undefined1)plVar31[0xc];
          }
          *(undefined1 *)(plVar24 + 0xc) = uVar15;
          if ((uVar26 == 0) || (fStack_f0 * (float)uVar26 < (float)(lStack_f8 + 1))) {
            uVar20 = 1;
            if (2 < uVar26) {
              uVar20 = (ulong)((uVar26 & uVar26 - 1) != 0);
            }
            uVar20 = uVar20 | uVar26 << 1;
            uVar26 = (ulong)((float)(lStack_f8 + 1) / fStack_f0);
            if (uVar20 <= uVar26) {
              uVar20 = uVar26;
            }
            FUN_10a62e0a0(&lStack_110,uVar20);
            uVar26 = uStack_108;
            if ((uStack_108 & uStack_108 - 1) == 0) {
              unaff_x26 = uStack_108 - 1 & uVar17;
            }
            else {
              unaff_x26 = uVar17;
              if (uStack_108 <= uVar17) {
                uVar20 = 0;
                if (uStack_108 != 0) {
                  uVar20 = uVar17 / uStack_108;
                }
                unaff_x26 = uVar17 - uVar20 * uStack_108;
              }
            }
          }
          plVar21 = *(long **)(lStack_110 + unaff_x26 * 8);
          if (plVar21 == (long *)0x0) {
            *plVar24 = (long)plStack_100;
            *(long ***)(lStack_110 + unaff_x26 * 8) = &plStack_100;
            plStack_100 = plVar24;
            if (*plVar24 != 0) {
              uVar20 = *(ulong *)(*plVar24 + 8);
              if ((uVar26 & uVar26 - 1) == 0) {
                uVar20 = uVar20 & uVar26 - 1;
              }
              else if (uVar26 <= uVar20) {
                uVar17 = 0;
                if (uVar26 != 0) {
                  uVar17 = uVar20 / uVar26;
                }
                uVar20 = uVar20 - uVar17 * uVar26;
              }
              *(long **)(lStack_110 + uVar20 * 8) = plVar24;
            }
          }
          else {
            *plVar24 = *plVar21;
            *plVar21 = (long)plVar24;
          }
          lStack_f8 = lStack_f8 + 1;
LAB_10a6408f4:
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
      }
      plVar31 = plStack_100;
      if (plStack_100 == (long *)0x0) {
        FUN_10a57e7f0(&lStack_110);
      }
      else {
        do {
          lVar14 = plVar31[2];
          lVar18 = lVar30 + 0x18;
          FUN_10a62eab0();
          if (lVar18 != 0) {
            if ((char)plVar31[0xc] == '\x01') {
              pcVar11 = (code *)plVar31[4];
              ppuStack_b8 = ppuStack_138;
              ppuStack_c0 = ppuStack_140;
              if (ppuStack_138 != (undefined **)0x0) {
                ppuVar13 = ppuStack_138 + 1;
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
                  if (bVar5) {
                    *ppuVar13 = *ppuVar13 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              (*pcVar11)(&ppuStack_c0,plVar31 + 4);
              if (ppuStack_b8 != (undefined **)0x0) {
                ppuVar13 = ppuStack_b8 + 1;
                do {
                  puVar22 = *ppuVar13;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
                  if (bVar5) {
                    *ppuVar13 = puVar22 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  ppuVar27 = ppuStack_b8;
                } while (cVar4 != '\0');
LAB_10a6409d4:
                if (puVar22 == (undefined *)0x0) {
                  (**(code **)(*ppuVar27 + 0x10))(ppuVar27);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar27);
                }
              }
            }
            else if ((char)plVar31[0xc] == '\x02') {
              plVar24 = plVar31 + 4;
              FUN_10a688b40();
              ppuVar13 = ppuStack_138;
              if (plVar24 == (long *)0x0) {
                if (lVar14 != 0) {
                  lStack_b0 = plVar31[4];
                  lStack_a8 = plVar31[5];
                  if (lStack_a8 != 0) {
                    plVar24 = (long *)(lStack_a8 + 8);
                    do {
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                      if (bVar5) {
                        *plVar24 = *plVar24 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                  }
                  ppuStack_d0 = ppuStack_140;
                  ppuStack_c8 = ppuStack_138;
                  if (ppuStack_138 == (undefined **)0x0) {
                    ppuStack_98 = (undefined **)0x0;
                  }
                  else {
                    ppuVar27 = ppuStack_138 + 1;
                    do {
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(ppuVar27,0x10);
                      if (bVar5) {
                        *ppuVar27 = *ppuVar27 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    ppuStack_98 = ppuStack_138;
                    do {
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(ppuVar27,0x10);
                      if (bVar5) {
                        *ppuVar27 = *ppuVar27 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                  }
                  ppuStack_a0 = ppuStack_140;
                  ppuStack_b8 = &PTR_FUN_110c01a98;
                  ppuStack_d8 = (undefined **)0x0;
                  uStack_e0 = 0;
                  ppuStack_c0 = (undefined **)FUN_10a641270;
                  FUN_10a4634ec(lVar14,&ppuStack_c0);
                  (*(code *)*ppuStack_b8)(&ppuStack_b8);
                  if (ppuVar13 != (undefined **)0x0) {
                    ppuVar27 = ppuVar13 + 1;
                    do {
                      puVar22 = *ppuVar27;
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(ppuVar27,0x10);
                      if (bVar5) {
                        *ppuVar27 = puVar22 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (puVar22 == (undefined *)0x0) {
                      (**(code **)(*ppuVar13 + 0x10))(ppuVar13);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
                    }
                  }
                  if (ppuStack_d8 != (undefined **)0x0) {
                    ppuVar13 = ppuStack_d8 + 1;
                    do {
                      puVar22 = *ppuVar13;
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
                      if (bVar5) {
                        *ppuVar13 = puVar22 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                      ppuVar27 = ppuStack_d8;
                    } while (cVar4 != '\0');
                    goto LAB_10a6409d4;
                  }
                }
              }
              else {
                *plVar24 = CONCAT44((int)((ulong)*plVar24 >> 0x20) + 1,(int)*plVar24 + 1);
                FUN_10a64106c(plVar31[4],&ppuStack_140);
                iVar6 = *(int *)((long)plVar24 + 4) + -1;
                *(int *)((long)plVar24 + 4) = iVar6;
                if (iVar6 == 0) {
                  *(undefined4 *)plVar24 = 0;
                }
              }
            }
          }
          ppuVar13 = ppuStack_138;
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
        FUN_10a57e7f0(&lStack_110);
        if (ppuVar13 == (undefined **)0x0) goto LAB_10a640b58;
      }
      ppuVar27 = ppuVar13 + 1;
      do {
        puVar22 = *ppuVar27;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar27,0x10);
        if (bVar5) {
          *ppuVar27 = puVar22 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_10a640b3c:
      if (puVar22 == (undefined *)0x0) {
        (**(code **)(*ppuVar13 + 0x10))(ppuVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
      }
      goto LAB_10a640b58;
    }
    if (uVar3 != 0) {
      if ((uVar3 & 0xfffffffe) == 2) {
        FUN_10a639618(uVar33,uVar26,&pppuStack_130);
      }
      goto LAB_10a640b58;
    }
    ppuVar13 = (undefined **)0x50;
    __Znwm();
    pppuVar10 = pppuStack_120;
    pppuVar8 = pppuStack_130;
    ppuVar27 = ppuVar13 + 1;
    *ppuVar27 = (undefined *)0x0;
    ppuVar13[2] = (undefined *)0x0;
    *ppuVar13 = (undefined *)&PTR_FUN_110c019f0;
    ppuVar32 = ppuVar13 + 3;
    *ppuVar32 = (undefined *)&PTR_DAT_110bfbbd8;
    pppuStack_128 = (undefined8 ****)0x0;
    pppuStack_120 = (undefined8 ****)0x0;
    pppuStack_130 = (undefined8 ****)0x0;
    ppuVar13[4] = (undefined *)0x0;
    ppuVar13[5] = (undefined *)0x0;
    *(undefined4 *)(ppuVar13 + 6) = uVar33;
    ppuVar13[7] = (undefined *)pppuVar8;
    ppuVar13[8] = (undefined *)pppuVar9;
    ppuVar13[9] = (undefined *)pppuVar10;
    puVar16 = *(undefined8 **)(uVar26 + 0x510);
    ppuStack_140 = ppuVar32;
    ppuStack_138 = ppuVar13;
    if (puVar16 < *(undefined8 **)(uVar26 + 0x518)) {
      *puVar16 = ppuVar32;
      puVar16[1] = ppuVar13;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar27,0x10);
        if (bVar5) {
          *ppuVar27 = *ppuVar27 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      puVar16 = puVar16 + 2;
LAB_10a640194:
      *(undefined8 **)(uVar26 + 0x510) = puVar16;
      lVar30 = *(long *)(uVar26 + 0x298);
      uStack_108 = 0;
      lStack_110 = 0;
      lStack_f8 = 0;
      plStack_100 = (long *)0x0;
      fStack_f0 = *(float *)(lVar30 + 0x38);
      FUN_10a62d164(&lStack_110,*(undefined8 *)(lVar30 + 0x20));
      plVar31 = *(long **)(lVar30 + 0x28);
      if (plVar31 != (long *)0x0) {
        do {
          uVar20 = uStack_108;
          uVar17 = plVar31[2];
          uVar23 = ((ulong)(uint)((int)uVar17 << 3) + 8 ^ uVar17 >> 0x20) * -0x622015f714c7d297;
          uVar23 = (uVar17 >> 0x20 ^ uVar23 >> 0x2f ^ uVar23) * -0x622015f714c7d297;
          uVar23 = (uVar23 ^ uVar23 >> 0x2f) * -0x622015f714c7d297;
          if (uStack_108 != 0) {
            uVar19 = uStack_108 - 1;
            if ((uStack_108 & uVar19) == 0) {
              unaff_x25 = uVar23 & uVar19;
            }
            else {
              unaff_x25 = uVar23;
              if (uStack_108 <= uVar23) {
                uVar25 = 0;
                if (uStack_108 != 0) {
                  uVar25 = uVar23 / uStack_108;
                }
                unaff_x25 = uVar23 - uVar25 * uStack_108;
              }
            }
            plVar24 = *(long **)(lStack_110 + unaff_x25 * 8);
            if (plVar24 != (long *)0x0) {
              do {
                while( true ) {
                  plVar24 = (long *)*plVar24;
                  if (plVar24 == (long *)0x0) goto LAB_10a640294;
                  uVar25 = plVar24[1];
                  if (uVar25 != uVar23) break;
                  if (plVar24[2] == uVar17) goto LAB_10a6403f8;
                }
                if ((uStack_108 & uVar19) == 0) {
                  uVar25 = uVar25 & uVar19;
                }
                else if (uStack_108 <= uVar25) {
                  uVar7 = 0;
                  if (uStack_108 != 0) {
                    uVar7 = uVar25 / uStack_108;
                  }
                  uVar25 = uVar25 - uVar7 * uStack_108;
                }
              } while (uVar25 == unaff_x25);
            }
          }
LAB_10a640294:
          plVar24 = (long *)0x68;
          __Znwm();
          *plVar24 = 0;
          plVar24[1] = uVar23;
          lVar18 = plVar31[3];
          lVar14 = plVar31[2];
          plVar24[3] = plVar31[3];
          plVar24[2] = lVar14;
          if (lVar18 != 0) {
            plVar21 = (long *)(lVar18 + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar5) {
                *plVar21 = *plVar21 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          ppuStack_c0 = (undefined **)(plVar24 + 4);
          *(undefined1 *)(plVar24 + 0xc) = 3;
          if ((char)plVar31[0xc] == '\0') {
            uVar15 = 0;
          }
          else {
            FUN_10a005398(&ppuStack_c0,plVar31 + 4);
            uVar15 = (undefined1)plVar31[0xc];
          }
          *(undefined1 *)(plVar24 + 0xc) = uVar15;
          if ((uVar20 == 0) || (fStack_f0 * (float)uVar20 < (float)(lStack_f8 + 1))) {
            uVar17 = 1;
            if (2 < uVar20) {
              uVar17 = (ulong)((uVar20 & uVar20 - 1) != 0);
            }
            uVar17 = uVar17 | uVar20 << 1;
            uVar20 = (ulong)((float)(lStack_f8 + 1) / fStack_f0);
            if (uVar17 <= uVar20) {
              uVar17 = uVar20;
            }
            FUN_10a62d164(&lStack_110,uVar17);
            uVar20 = uStack_108;
            if ((uStack_108 & uStack_108 - 1) == 0) {
              unaff_x25 = uStack_108 - 1 & uVar23;
            }
            else {
              unaff_x25 = uVar23;
              if (uStack_108 <= uVar23) {
                uVar17 = 0;
                if (uStack_108 != 0) {
                  uVar17 = uVar23 / uStack_108;
                }
                unaff_x25 = uVar23 - uVar17 * uStack_108;
              }
            }
          }
          plVar21 = *(long **)(lStack_110 + unaff_x25 * 8);
          if (plVar21 == (long *)0x0) {
            *plVar24 = (long)plStack_100;
            *(long ***)(lStack_110 + unaff_x25 * 8) = &plStack_100;
            plStack_100 = plVar24;
            if (*plVar24 != 0) {
              uVar17 = *(ulong *)(*plVar24 + 8);
              if ((uVar20 & uVar20 - 1) == 0) {
                uVar17 = uVar17 & uVar20 - 1;
              }
              else if (uVar20 <= uVar17) {
                uVar23 = 0;
                if (uVar20 != 0) {
                  uVar23 = uVar17 / uVar20;
                }
                uVar17 = uVar17 - uVar23 * uVar20;
              }
              *(long **)(lStack_110 + uVar17 * 8) = plVar24;
            }
          }
          else {
            *plVar24 = *plVar21;
            *plVar21 = (long)plVar24;
          }
          lStack_f8 = lStack_f8 + 1;
LAB_10a6403f8:
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
      }
      plVar31 = plStack_100;
      if (plStack_100 == (long *)0x0) {
        FUN_10a57e4c4(&lStack_110);
        *(undefined1 *)(uVar26 + 0x3d5) = 1;
      }
      else {
        do {
          lVar14 = plVar31[2];
          lVar18 = lVar30 + 0x18;
          FUN_10a62db74();
          if (lVar18 != 0) {
            if ((char)plVar31[0xc] == '\x01') {
              pcVar11 = (code *)plVar31[4];
              ppuStack_b8 = ppuStack_138;
              ppuStack_c0 = ppuStack_140;
              if (ppuStack_138 != (undefined **)0x0) {
                ppuVar13 = ppuStack_138 + 1;
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
                  if (bVar5) {
                    *ppuVar13 = *ppuVar13 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              (*pcVar11)(&ppuStack_c0,plVar31 + 4);
              if (ppuStack_b8 != (undefined **)0x0) {
                ppuVar13 = ppuStack_b8 + 1;
                do {
                  puVar22 = *ppuVar13;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
                  if (bVar5) {
                    *ppuVar13 = puVar22 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  ppuVar27 = ppuStack_b8;
                } while (cVar4 != '\0');
LAB_10a6404d8:
                if (puVar22 == (undefined *)0x0) {
                  (**(code **)(*ppuVar27 + 0x10))(ppuVar27);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar27);
                }
              }
            }
            else if ((char)plVar31[0xc] == '\x02') {
              plVar24 = plVar31 + 4;
              FUN_10a688b40();
              ppuVar13 = ppuStack_138;
              if (plVar24 == (long *)0x0) {
                if (lVar14 != 0) {
                  lStack_b0 = plVar31[4];
                  lStack_a8 = plVar31[5];
                  if (lStack_a8 != 0) {
                    plVar24 = (long *)(lStack_a8 + 8);
                    do {
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                      if (bVar5) {
                        *plVar24 = *plVar24 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                  }
                  ppuStack_d0 = ppuStack_140;
                  ppuStack_c8 = ppuStack_138;
                  if (ppuStack_138 == (undefined **)0x0) {
                    ppuStack_98 = (undefined **)0x0;
                  }
                  else {
                    ppuVar27 = ppuStack_138 + 1;
                    do {
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(ppuVar27,0x10);
                      if (bVar5) {
                        *ppuVar27 = *ppuVar27 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    ppuStack_98 = ppuStack_138;
                    do {
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(ppuVar27,0x10);
                      if (bVar5) {
                        *ppuVar27 = *ppuVar27 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                  }
                  ppuStack_a0 = ppuStack_140;
                  ppuStack_b8 = &PTR_FUN_110c01a30;
                  ppuStack_d8 = (undefined **)0x0;
                  uStack_e0 = 0;
                  ppuStack_c0 = (undefined **)FUN_10a640fa0;
                  FUN_10a4634ec(lVar14,&ppuStack_c0);
                  (*(code *)*ppuStack_b8)(&ppuStack_b8);
                  if (ppuVar13 != (undefined **)0x0) {
                    ppuVar27 = ppuVar13 + 1;
                    do {
                      puVar22 = *ppuVar27;
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(ppuVar27,0x10);
                      if (bVar5) {
                        *ppuVar27 = puVar22 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (puVar22 == (undefined *)0x0) {
                      (**(code **)(*ppuVar13 + 0x10))(ppuVar13);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
                    }
                  }
                  if (ppuStack_d8 != (undefined **)0x0) {
                    ppuVar13 = ppuStack_d8 + 1;
                    do {
                      puVar22 = *ppuVar13;
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
                      if (bVar5) {
                        *ppuVar13 = puVar22 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                      ppuVar27 = ppuStack_d8;
                    } while (cVar4 != '\0');
                    goto LAB_10a6404d8;
                  }
                }
              }
              else {
                *plVar24 = CONCAT44((int)((ulong)*plVar24 >> 0x20) + 1,(int)*plVar24 + 1);
                FUN_10a640d9c(plVar31[4],&ppuStack_140);
                iVar6 = *(int *)((long)plVar24 + 4) + -1;
                *(int *)((long)plVar24 + 4) = iVar6;
                if (iVar6 == 0) {
                  *(undefined4 *)plVar24 = 0;
                }
              }
            }
          }
          ppuVar13 = ppuStack_138;
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
        FUN_10a57e4c4(&lStack_110);
        *(undefined1 *)(uVar26 + 0x3d5) = 1;
        if (ppuVar13 == (undefined **)0x0) goto LAB_10a640b58;
      }
      ppuVar27 = ppuVar13 + 1;
      do {
        puVar22 = *ppuVar27;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar27,0x10);
        if (bVar5) {
          *ppuVar27 = puVar22 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_10a640b3c;
    }
    lVar30 = *(long *)(uVar26 + 0x508);
    lVar18 = (long)puVar16 - lVar30;
    unaff_x25 = lVar18 >> 4;
    uVar20 = unaff_x25 + 1;
    if (uVar20 >> 0x3c == 0) {
      uVar23 = (long)*(undefined8 **)(uVar26 + 0x518) - lVar30;
      uVar17 = (long)uVar23 >> 3;
      if (uVar17 <= uVar20) {
        uVar17 = uVar20;
      }
      if (0x7fffffffffffffef < uVar23) {
        uVar17 = 0xfffffffffffffff;
      }
      if (uVar17 >> 0x3c != 0) {
        func_0x000109ffded8();
        goto LAB_10a640bcc;
      }
      lVar14 = uVar17 << 4;
      __Znwm();
      puVar2 = (undefined8 *)(lVar14 + lVar18);
      *puVar2 = ppuVar32;
      puVar2[1] = ppuVar13;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar27,0x10);
        if (bVar5) {
          *ppuVar27 = *ppuVar27 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      puVar16 = puVar2 + 2;
      _memcpy(puVar2 + unaff_x25 * -2,lVar30,lVar18);
      *(undefined8 **)(uVar26 + 0x508) = puVar2 + unaff_x25 * -2;
      *(undefined8 **)(uVar26 + 0x510) = puVar16;
      *(ulong *)(uVar26 + 0x518) = lVar14 + uVar17 * 0x10;
      if (lVar30 != 0) {
        __ZdlPv(lVar30);
      }
      goto LAB_10a640194;
    }
  }
  else {
LAB_10a640b68:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a640d88();
LAB_10a640bcc:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10a640bd0);
  (*pcVar11)();
}



/* Entry: 10a640d48; end: 10a640d57;  */

void FUN_10a640d48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c019f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a640d58; end: 10a640d77;  */

void FUN_10a640d58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c019f0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a640d78; end: 10a640d87;  */

void FUN_10a640d78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a640d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a640d88; end: 10a640d9b;  */

void FUN_10a640d88(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined ***pppuStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)&UNK_10f669d06;
  FUN_109ffde64();
  func_0x000109884c0c(&ppuStack_70,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_98,&ppuStack_70,*puVar5);
  if (ppuStack_70 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_70)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_a0);
  plVar7 = (long *)*puVar5;
  plStack_68 = (long *)param_2[1];
  ppuStack_70 = (undefined8 **)*param_2;
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
  ppuStack_50 = &PTR_DAT_110bffc48;
  func_0x000109899de4(&puStack_80,plVar7,&ppuStack_70,&ppuStack_50,0,0);
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_48 = 1;
  ppuStack_50 = &puStack_80;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_70 = &puStack_98;
  plStack_68 = plVar7;
  puStack_60 = (undefined1 *)&puStack_a0;
  pppuStack_58 = &ppuStack_50;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  if ((3 < (int)puStack_80) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10a640d9c; end: 10a640f9f;  */

void FUN_10a640d9c(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110bffc48;
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



/* Entry: 10a640fa0; end: 10a640faf;  */

void FUN_10a640fa0(long param_1)

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
  ppuStack_40 = &PTR_DAT_110bffc48;
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



/* Entry: 10a640fb0; end: 10a640fd7;  */

long FUN_10a640fb0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a5810a0(param_1 + 0x18);
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



/* Entry: 10a640fd8; end: 10a641027;  */

void FUN_10a640fd8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c01a30;
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



/* Entry: 10a641028; end: 10a641047;  */

void FUN_10a641028(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c01a58;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a641048; end: 10a641057;  */

void FUN_10a641048(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a641050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a641058; end: 10a64106b;  */

void FUN_10a641058(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined ***pppuStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)&UNK_10f669d06;
  FUN_109ffde64();
  func_0x000109884c0c(&ppuStack_70,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_98,&ppuStack_70,*puVar5);
  if (ppuStack_70 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_70)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_a0);
  plVar7 = (long *)*puVar5;
  plStack_68 = (long *)param_2[1];
  ppuStack_70 = (undefined8 **)*param_2;
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
  ppuStack_50 = &PTR_DAT_110bffc60;
  func_0x000109899de4(&puStack_80,plVar7,&ppuStack_70,&ppuStack_50,0,0);
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_48 = 1;
  ppuStack_50 = &puStack_80;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_70 = &puStack_98;
  plStack_68 = plVar7;
  puStack_60 = (undefined1 *)&puStack_a0;
  pppuStack_58 = &ppuStack_50;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  if ((3 < (int)puStack_80) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10a64106c; end: 10a64126f;  */

void FUN_10a64106c(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110bffc60;
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



/* Entry: 10a641270; end: 10a64127f;  */

void FUN_10a641270(long param_1)

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
  ppuStack_40 = &PTR_DAT_110bffc60;
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



/* Entry: 10a641280; end: 10a6412a7;  */

long FUN_10a641280(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a580fd8(param_1 + 0x18);
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



/* Entry: 10a6412a8; end: 10a64131b;  */

void FUN_10a6412a8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c01a98;
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



/* Entry: 10a64131c; end: 10a641f3f;  */

void FUN_10a64131c(undefined **param_1,undefined ***param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined1 uVar8;
  undefined *puVar9;
  long lVar10;
  code *pcVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **unaff_x20;
  undefined *unaff_x21;
  undefined **unaff_x22;
  undefined ***unaff_x23;
  undefined **ppuVar19;
  undefined **unaff_x26;
  undefined **ppuVar20;
  undefined *puVar21;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  int aiStack_1c0 [2];
  undefined8 *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined1 *puStack_190;
  undefined ***pppuStack_188;
  undefined **ppuStack_180;
  undefined8 uStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  uint uStack_13c;
  undefined ***pppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  float fStack_f0;
  undefined *puStack_e0;
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
  ppuVar18 = param_2[2];
  ppuVar19 = param_1;
  if ((*(ushort *)(ppuVar18 + 0x30) >> 4 & 1) != 0) goto LAB_10a641dbc;
  ppuStack_118 = *(undefined ***)((long)param_1 + 0x14);
  param_2 = &ppuStack_118;
  ppuVar19 = ppuVar18;
  FUN_10a601f04();
  unaff_x20 = param_1;
  if ((int)ppuVar19 == 0) {
    if (*(char *)((long)ppuVar18 + 0x3d4) == '\x01') {
      param_2 = &ppuStack_118;
      FUN_10a638b74();
      ppuVar19 = ppuVar18;
    }
    goto LAB_10a641dbc;
  }
  uVar1 = *(uint *)(param_1 + 2);
  unaff_x21 = (undefined *)(ulong)uVar1;
  if (uVar1 == 0) {
LAB_10a641390:
    *(undefined1 *)((long)ppuVar18 + 0x3d4) = 1;
    FUN_10a1f2004(ppuVar18 + 0xaa,&ppuStack_118);
    unaff_x23 = (undefined ***)ppuVar18[0x65];
    unaff_x20 = (undefined **)0x38;
    __Znwm();
    unaff_x20[1] = (undefined *)0x0;
    unaff_x20[2] = (undefined *)0x0;
    *unaff_x20 = (undefined *)&PTR_DAT_110c01af8;
    unaff_x20[4] = (undefined *)0x0;
    unaff_x20[5] = (undefined *)0x0;
    ppuStack_130 = unaff_x20 + 3;
    *ppuStack_130 = (undefined *)&PTR_DAT_110bfbce0;
    unaff_x20[6] = (undefined *)ppuStack_118;
    ppuStack_108 = (undefined **)0x0;
    puStack_110 = (undefined *)0x0;
    lStack_f8 = 0;
    ppuStack_100 = (undefined **)0x0;
    fStack_f0 = *(float *)(unaff_x23 + 7);
    param_2 = (undefined ***)unaff_x23[4];
    ppuStack_128 = unaff_x20;
    FUN_10a635d00(&puStack_110);
    ppuVar19 = unaff_x23[5];
    uStack_13c = uVar1;
    if (ppuVar19 != (undefined **)0x0) {
      pppuStack_138 = &ppuStack_100;
      do {
        unaff_x22 = ppuStack_108;
        puVar9 = ppuVar19[2];
        uVar13 = ((ulong)(uint)((int)puVar9 << 3) + 8 ^ (ulong)puVar9 >> 0x20) * -0x622015f714c7d297
        ;
        uVar13 = ((ulong)puVar9 >> 0x20 ^ uVar13 >> 0x2f ^ uVar13) * -0x622015f714c7d297;
        ppuVar20 = (undefined **)((uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297);
        if (ppuStack_108 != (undefined **)0x0) {
          uVar13 = (long)ppuStack_108 - 1;
          if (((ulong)ppuStack_108 & uVar13) == 0) {
            unaff_x26 = (undefined **)((ulong)ppuVar20 & uVar13);
          }
          else {
            unaff_x26 = ppuVar20;
            if (ppuStack_108 <= ppuVar20) {
              uVar15 = 0;
              if (ppuStack_108 != (undefined **)0x0) {
                uVar15 = (ulong)ppuVar20 / (ulong)ppuStack_108;
              }
              unaff_x26 = (undefined **)((long)ppuVar20 - uVar15 * (long)ppuStack_108);
            }
          }
          plVar14 = *(long **)(puStack_110 + (long)unaff_x26 * 8);
          if (plVar14 != (long *)0x0) {
            do {
              while( true ) {
                plVar14 = (long *)*plVar14;
                if (plVar14 == (long *)0x0) goto LAB_10a6414e0;
                ppuVar17 = (undefined **)plVar14[1];
                if (ppuVar17 != ppuVar20) break;
                if ((undefined *)plVar14[2] == puVar9) goto LAB_10a641644;
              }
              if (((ulong)ppuStack_108 & uVar13) == 0) {
                ppuVar17 = (undefined **)((ulong)ppuVar17 & uVar13);
              }
              else if (ppuStack_108 <= ppuVar17) {
                uVar15 = 0;
                if (ppuStack_108 != (undefined **)0x0) {
                  uVar15 = (ulong)ppuVar17 / (ulong)ppuStack_108;
                }
                ppuVar17 = (undefined **)((long)ppuVar17 - uVar15 * (long)ppuStack_108);
              }
            } while (ppuVar17 == unaff_x26);
          }
        }
LAB_10a6414e0:
        ppuVar17 = (undefined **)0x68;
        __Znwm();
        *ppuVar17 = (undefined *)0x0;
        ppuVar17[1] = (undefined *)ppuVar20;
        puVar9 = ppuVar19[3];
        puVar21 = ppuVar19[2];
        ppuVar17[3] = ppuVar19[3];
        ppuVar17[2] = puVar21;
        if (puVar9 != (undefined *)0x0) {
          plVar14 = (long *)(puVar9 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = *plVar14 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_c0 = ppuVar17 + 4;
        *(undefined1 *)(ppuVar17 + 0xc) = 3;
        if (*(char *)(ppuVar19 + 0xc) == '\0') {
          uVar8 = 0;
        }
        else {
          param_2 = (undefined ***)(ppuVar19 + 4);
          FUN_10a005398(&ppuStack_c0);
          uVar8 = *(undefined1 *)(ppuVar19 + 0xc);
        }
        *(undefined1 *)(ppuVar17 + 0xc) = uVar8;
        if ((unaff_x22 == (undefined **)0x0) ||
           (fStack_f0 * (float)unaff_x22 < (float)(lStack_f8 + 1))) {
          uVar13 = 1;
          if ((undefined **)0x2 < unaff_x22) {
            uVar13 = (ulong)(((ulong)unaff_x22 & (long)unaff_x22 - 1U) != 0);
          }
          param_2 = (undefined ***)(uVar13 | (long)unaff_x22 << 1);
          pppuVar7 = (undefined ***)(long)((float)(lStack_f8 + 1) / fStack_f0);
          if (param_2 <= pppuVar7) {
            param_2 = pppuVar7;
          }
          FUN_10a635d00(&puStack_110);
          unaff_x22 = ppuStack_108;
          if (((ulong)ppuStack_108 & (long)ppuStack_108 - 1U) == 0) {
            unaff_x26 = (undefined **)((long)ppuStack_108 - 1U & (ulong)ppuVar20);
          }
          else {
            unaff_x26 = ppuVar20;
            if (ppuStack_108 <= ppuVar20) {
              uVar13 = 0;
              if (ppuStack_108 != (undefined **)0x0) {
                uVar13 = (ulong)ppuVar20 / (ulong)ppuStack_108;
              }
              unaff_x26 = (undefined **)((long)ppuVar20 - uVar13 * (long)ppuStack_108);
            }
          }
        }
        puVar12 = *(undefined8 **)(puStack_110 + (long)unaff_x26 * 8);
        if (puVar12 == (undefined8 *)0x0) {
          *ppuVar17 = (undefined *)ppuStack_100;
          *(undefined ****)(puStack_110 + (long)unaff_x26 * 8) = pppuStack_138;
          ppuStack_100 = ppuVar17;
          if (*ppuVar17 != (undefined *)0x0) {
            ppuVar20 = *(undefined ***)(*ppuVar17 + 8);
            if (((ulong)unaff_x22 & (long)unaff_x22 - 1U) == 0) {
              ppuVar20 = (undefined **)((ulong)ppuVar20 & (long)unaff_x22 - 1U);
            }
            else if (unaff_x22 <= ppuVar20) {
              uVar13 = 0;
              if (unaff_x22 != (undefined **)0x0) {
                uVar13 = (ulong)ppuVar20 / (ulong)unaff_x22;
              }
              ppuVar20 = (undefined **)((long)ppuVar20 - uVar13 * (long)unaff_x22);
            }
            *(undefined ***)(puStack_110 + (long)ppuVar20 * 8) = ppuVar17;
          }
        }
        else {
          *ppuVar17 = (undefined *)*puVar12;
          *puVar12 = ppuVar17;
        }
        lStack_f8 = lStack_f8 + 1;
LAB_10a641644:
        ppuVar19 = (undefined **)*ppuVar19;
      } while (ppuVar19 != (undefined **)0x0);
    }
    if (ppuStack_100 == (undefined **)0x0) {
      ppuVar19 = &puStack_110;
      FUN_10a580150();
      unaff_x21 = (undefined *)(ulong)uStack_13c;
LAB_10a64189c:
      ppuVar20 = unaff_x20 + 1;
      do {
        puVar9 = *ppuVar20;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
        if (bVar3) {
          *ppuVar20 = puVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar9 == (undefined *)0x0) {
        (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
        ppuVar19 = unaff_x20;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    else {
      unaff_x26 = &PTR_FUN_110c01ad0;
      ppuVar19 = ppuStack_100;
      do {
        pppuVar6 = (undefined ***)ppuVar19[2];
        pppuVar7 = unaff_x23 + 3;
        FUN_10a636710();
        param_2 = pppuVar6;
        if (pppuVar7 != (undefined ***)0x0) {
          if (*(char *)(ppuVar19 + 0xc) == '\x01') {
            pcVar11 = (code *)ppuVar19[4];
            ppuStack_b8 = ppuStack_128;
            ppuStack_c0 = ppuStack_130;
            if (ppuStack_128 != (undefined **)0x0) {
              ppuVar20 = ppuStack_128 + 1;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
                if (bVar3) {
                  *ppuVar20 = *ppuVar20 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            param_2 = (undefined ***)(ppuVar19 + 4);
            (*pcVar11)(&ppuStack_c0);
            if (ppuStack_b8 != (undefined **)0x0) {
              ppuVar20 = ppuStack_b8 + 1;
              do {
                puVar9 = *ppuVar20;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
                if (bVar3) {
                  *ppuVar20 = puVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                ppuVar17 = ppuStack_b8;
              } while (cVar2 != '\0');
LAB_10a641724:
              if (puVar9 == (undefined *)0x0) {
                (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
              }
            }
          }
          else if (*(char *)(ppuVar19 + 0xc) == '\x02') {
            ppuVar20 = ppuVar19 + 4;
            FUN_10a688b40();
            ppuVar17 = ppuStack_128;
            if (ppuVar20 == (undefined **)0x0) {
              param_2 = (undefined ***)0x0;
              if (pppuVar6 != (undefined ***)0x0) {
                puStack_b0 = ppuVar19[4];
                puStack_a8 = ppuVar19[5];
                if (puStack_a8 != (undefined *)0x0) {
                  plVar14 = (long *)(puStack_a8 + 8);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar3) {
                      *plVar14 = *plVar14 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                ppuStack_d0 = ppuStack_130;
                ppuStack_c8 = ppuStack_128;
                if (ppuStack_128 == (undefined **)0x0) {
                  ppuStack_98 = (undefined **)0x0;
                }
                else {
                  ppuVar20 = ppuStack_128 + 1;
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
                    if (bVar3) {
                      *ppuVar20 = *ppuVar20 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  ppuStack_98 = ppuStack_128;
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
                    if (bVar3) {
                      *ppuVar20 = *ppuVar20 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                ppuStack_a0 = ppuStack_130;
                ppuStack_b8 = &PTR_FUN_110c01ad0;
                ppuStack_d8 = (undefined **)0x0;
                puStack_e0 = (undefined *)0x0;
                ppuStack_c0 = (undefined **)FUN_10a642144;
                param_2 = &ppuStack_c0;
                FUN_10a4634ec(pppuVar6);
                (*(code *)*ppuStack_b8)(&ppuStack_b8);
                if (ppuVar17 != (undefined **)0x0) {
                  ppuVar20 = ppuVar17 + 1;
                  do {
                    puVar9 = *ppuVar20;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
                    if (bVar3) {
                      *ppuVar20 = puVar9 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (puVar9 == (undefined *)0x0) {
                    (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
                  }
                }
                if (ppuStack_d8 != (undefined **)0x0) {
                  ppuVar20 = ppuStack_d8 + 1;
                  do {
                    puVar9 = *ppuVar20;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
                    if (bVar3) {
                      *ppuVar20 = puVar9 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                    ppuVar17 = ppuStack_d8;
                  } while (cVar2 != '\0');
                  goto LAB_10a641724;
                }
              }
            }
            else {
              *ppuVar20 = (undefined *)
                          CONCAT44((int)((ulong)*ppuVar20 >> 0x20) + 1,(int)*ppuVar20 + 1);
              param_2 = &ppuStack_130;
              FUN_10a641f40(ppuVar19[4]);
              iVar4 = *(int *)((long)ppuVar20 + 4) + -1;
              *(int *)((long)ppuVar20 + 4) = iVar4;
              if (iVar4 == 0) {
                *(undefined4 *)ppuVar20 = 0;
              }
            }
          }
        }
        unaff_x20 = ppuStack_128;
        ppuVar19 = (undefined **)*ppuVar19;
      } while (ppuVar19 != (undefined **)0x0);
      ppuVar19 = &puStack_110;
      FUN_10a580150();
      unaff_x21 = (undefined *)(ulong)uStack_13c;
      if (unaff_x20 != (undefined **)0x0) goto LAB_10a64189c;
    }
    if (((int)unaff_x21 != 1) || (*(char *)((long)ppuVar18 + 0x3d4) != '\x01')) goto LAB_10a641dbc;
  }
  else {
    if (uVar1 != 1) {
      if (((uVar1 & 0xfffffffe) == 2) && (*(char *)((long)ppuVar18 + 0x3d4) == '\x01')) {
        param_2 = &ppuStack_118;
        FUN_10a638b74();
        ppuVar19 = ppuVar18;
      }
      goto LAB_10a641dbc;
    }
    if ((*(byte *)((long)ppuVar18 + 0x3d4) & 1) == 0) goto LAB_10a641390;
  }
  FUN_10a1f2004(ppuVar18 + 0xad,&ppuStack_118);
  unaff_x21 = ppuVar18[99];
  ppuVar18 = (undefined **)0x38;
  __Znwm();
  ppuVar18[1] = (undefined *)0x0;
  ppuVar18[2] = (undefined *)0x0;
  *ppuVar18 = (undefined *)&PTR_DAT_110c01b60;
  ppuVar18[4] = (undefined *)0x0;
  ppuVar18[5] = (undefined *)0x0;
  ppuStack_130 = ppuVar18 + 3;
  *ppuStack_130 = (undefined *)&PTR_DAT_110bfbd38;
  ppuVar18[6] = (undefined *)ppuStack_118;
  ppuStack_108 = (undefined **)0x0;
  puStack_110 = (undefined *)0x0;
  lStack_f8 = 0;
  ppuStack_100 = (undefined **)0x0;
  fStack_f0 = *(float *)(unaff_x21 + 0x38);
  param_2 = *(undefined ****)(unaff_x21 + 0x20);
  ppuStack_128 = ppuVar18;
  FUN_10a634dc4(&puStack_110);
  plVar14 = *(long **)(unaff_x21 + 0x28);
  if (plVar14 != (long *)0x0) {
    unaff_x23 = (undefined ***)0x9ddfea08eb382d69;
    do {
      ppuVar19 = ppuStack_108;
      uVar13 = plVar14[2];
      uVar15 = ((ulong)(uint)((int)uVar13 << 3) + 8 ^ uVar13 >> 0x20) * -0x622015f714c7d297;
      uVar15 = (uVar13 >> 0x20 ^ uVar15 >> 0x2f ^ uVar15) * -0x622015f714c7d297;
      ppuVar20 = (undefined **)((uVar15 ^ uVar15 >> 0x2f) * -0x622015f714c7d297);
      if (ppuStack_108 != (undefined **)0x0) {
        uVar15 = (long)ppuStack_108 - 1;
        if (((ulong)ppuStack_108 & uVar15) == 0) {
          unaff_x26 = (undefined **)((ulong)ppuVar20 & uVar15);
        }
        else {
          unaff_x26 = ppuVar20;
          if (ppuStack_108 <= ppuVar20) {
            uVar5 = 0;
            if (ppuStack_108 != (undefined **)0x0) {
              uVar5 = (ulong)ppuVar20 / (ulong)ppuStack_108;
            }
            unaff_x26 = (undefined **)((long)ppuVar20 - uVar5 * (long)ppuStack_108);
          }
        }
        plVar16 = *(long **)(puStack_110 + (long)unaff_x26 * 8);
        if (plVar16 != (long *)0x0) {
          do {
            while( true ) {
              plVar16 = (long *)*plVar16;
              if (plVar16 == (long *)0x0) goto LAB_10a641a20;
              ppuVar17 = (undefined **)plVar16[1];
              if (ppuVar17 != ppuVar20) break;
              if (plVar16[2] == uVar13) goto LAB_10a641b80;
            }
            if (((ulong)ppuStack_108 & uVar15) == 0) {
              ppuVar17 = (undefined **)((ulong)ppuVar17 & uVar15);
            }
            else if (ppuStack_108 <= ppuVar17) {
              uVar5 = 0;
              if (ppuStack_108 != (undefined **)0x0) {
                uVar5 = (ulong)ppuVar17 / (ulong)ppuStack_108;
              }
              ppuVar17 = (undefined **)((long)ppuVar17 - uVar5 * (long)ppuStack_108);
            }
          } while (ppuVar17 == unaff_x26);
        }
      }
LAB_10a641a20:
      unaff_x20 = (undefined **)0x68;
      __Znwm();
      *unaff_x20 = (undefined *)0x0;
      unaff_x20[1] = (undefined *)ppuVar20;
      lVar10 = plVar14[3];
      puVar9 = (undefined *)plVar14[2];
      unaff_x20[3] = (undefined *)plVar14[3];
      unaff_x20[2] = puVar9;
      if (lVar10 != 0) {
        plVar16 = (long *)(lVar10 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *plVar16 = *plVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      ppuStack_c0 = unaff_x20 + 4;
      *(undefined1 *)(unaff_x20 + 0xc) = 3;
      if ((char)plVar14[0xc] == '\0') {
        uVar8 = 0;
      }
      else {
        param_2 = (undefined ***)(plVar14 + 4);
        FUN_10a005398(&ppuStack_c0);
        uVar8 = (undefined1)plVar14[0xc];
      }
      *(undefined1 *)(unaff_x20 + 0xc) = uVar8;
      if ((ppuVar19 == (undefined **)0x0) || (fStack_f0 * (float)ppuVar19 < (float)(lStack_f8 + 1)))
      {
        uVar13 = 1;
        if ((undefined **)0x2 < ppuVar19) {
          uVar13 = (ulong)(((ulong)ppuVar19 & (long)ppuVar19 - 1U) != 0);
        }
        param_2 = (undefined ***)(uVar13 | (long)ppuVar19 << 1);
        pppuVar7 = (undefined ***)(long)((float)(lStack_f8 + 1) / fStack_f0);
        if (param_2 <= pppuVar7) {
          param_2 = pppuVar7;
        }
        FUN_10a634dc4(&puStack_110);
        ppuVar19 = ppuStack_108;
        if (((ulong)ppuStack_108 & (long)ppuStack_108 - 1U) == 0) {
          unaff_x26 = (undefined **)((long)ppuStack_108 - 1U & (ulong)ppuVar20);
        }
        else {
          unaff_x26 = ppuVar20;
          if (ppuStack_108 <= ppuVar20) {
            uVar13 = 0;
            if (ppuStack_108 != (undefined **)0x0) {
              uVar13 = (ulong)ppuVar20 / (ulong)ppuStack_108;
            }
            unaff_x26 = (undefined **)((long)ppuVar20 - uVar13 * (long)ppuStack_108);
          }
        }
      }
      puVar12 = *(undefined8 **)(puStack_110 + (long)unaff_x26 * 8);
      if (puVar12 == (undefined8 *)0x0) {
        *unaff_x20 = (undefined *)ppuStack_100;
        *(undefined ****)(puStack_110 + (long)unaff_x26 * 8) = &ppuStack_100;
        ppuStack_100 = unaff_x20;
        if (*unaff_x20 != (undefined *)0x0) {
          ppuVar20 = *(undefined ***)(*unaff_x20 + 8);
          if (((ulong)ppuVar19 & (long)ppuVar19 - 1U) == 0) {
            ppuVar20 = (undefined **)((ulong)ppuVar20 & (long)ppuVar19 - 1U);
          }
          else if (ppuVar19 <= ppuVar20) {
            uVar13 = 0;
            if (ppuVar19 != (undefined **)0x0) {
              uVar13 = (ulong)ppuVar20 / (ulong)ppuVar19;
            }
            ppuVar20 = (undefined **)((long)ppuVar20 - uVar13 * (long)ppuVar19);
          }
          *(undefined ***)(puStack_110 + (long)ppuVar20 * 8) = unaff_x20;
        }
      }
      else {
        *unaff_x20 = (undefined *)*puVar12;
        *puVar12 = unaff_x20;
      }
      lStack_f8 = lStack_f8 + 1;
LAB_10a641b80:
      plVar14 = (long *)*plVar14;
    } while (plVar14 != (long *)0x0);
  }
  unaff_x22 = (undefined **)0x0;
  if (ppuStack_100 == (undefined **)0x0) {
    ppuVar19 = &puStack_110;
    FUN_10a57fe24();
  }
  else {
    unaff_x22 = &puStack_e0;
    unaff_x23 = &ppuStack_c0;
    ppuVar19 = ppuStack_100;
    do {
      pppuVar7 = (undefined ***)ppuVar19[2];
      puVar9 = unaff_x21 + 0x18;
      FUN_10a6357d4();
      param_2 = pppuVar7;
      if (puVar9 != (undefined *)0x0) {
        if (*(char *)(ppuVar19 + 0xc) == '\x01') {
          pcVar11 = (code *)ppuVar19[4];
          ppuStack_b8 = ppuStack_128;
          ppuStack_c0 = ppuStack_130;
          if (ppuStack_128 != (undefined **)0x0) {
            ppuVar18 = ppuStack_128 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
              if (bVar3) {
                *ppuVar18 = *ppuVar18 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          param_2 = (undefined ***)(ppuVar19 + 4);
          (*pcVar11)(&ppuStack_c0);
          if (ppuStack_b8 != (undefined **)0x0) {
            ppuVar18 = ppuStack_b8 + 1;
            do {
              puVar9 = *ppuVar18;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
              if (bVar3) {
                *ppuVar18 = puVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              ppuVar20 = ppuStack_b8;
            } while (cVar2 != '\0');
LAB_10a641c60:
            if (puVar9 == (undefined *)0x0) {
              (**(code **)(*ppuVar20 + 0x10))(ppuVar20);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar20);
            }
          }
        }
        else if (*(char *)(ppuVar19 + 0xc) == '\x02') {
          unaff_x20 = ppuVar19 + 4;
          FUN_10a688b40();
          ppuVar18 = ppuStack_128;
          if (unaff_x20 == (undefined **)0x0) {
            param_2 = (undefined ***)0x0;
            if (pppuVar7 != (undefined ***)0x0) {
              puStack_b0 = ppuVar19[4];
              puStack_a8 = ppuVar19[5];
              if (puStack_a8 != (undefined *)0x0) {
                plVar14 = (long *)(puStack_a8 + 8);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar3) {
                    *plVar14 = *plVar14 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              ppuStack_d0 = ppuStack_130;
              ppuStack_c8 = ppuStack_128;
              if (ppuStack_128 == (undefined **)0x0) {
                ppuStack_98 = (undefined **)0x0;
              }
              else {
                ppuVar20 = ppuStack_128 + 1;
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
                  if (bVar3) {
                    *ppuVar20 = *ppuVar20 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                ppuStack_98 = ppuStack_128;
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
                  if (bVar3) {
                    *ppuVar20 = *ppuVar20 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              ppuStack_a0 = ppuStack_130;
              ppuStack_b8 = &PTR_FUN_110c01b38;
              ppuStack_d8 = (undefined **)0x0;
              puStack_e0 = (undefined *)0x0;
              ppuStack_c0 = (undefined **)FUN_10a642458;
              param_2 = &ppuStack_c0;
              FUN_10a4634ec(pppuVar7);
              (*(code *)*ppuStack_b8)(&ppuStack_b8);
              if (ppuVar18 != (undefined **)0x0) {
                ppuVar20 = ppuVar18 + 1;
                do {
                  puVar9 = *ppuVar20;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
                  if (bVar3) {
                    *ppuVar20 = puVar9 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (puVar9 == (undefined *)0x0) {
                  (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
                }
              }
              if (ppuStack_d8 != (undefined **)0x0) {
                ppuVar18 = ppuStack_d8 + 1;
                do {
                  puVar9 = *ppuVar18;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
                  if (bVar3) {
                    *ppuVar18 = puVar9 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  ppuVar20 = ppuStack_d8;
                } while (cVar2 != '\0');
                goto LAB_10a641c60;
              }
            }
          }
          else {
            *unaff_x20 = (undefined *)
                         CONCAT44((int)((ulong)*unaff_x20 >> 0x20) + 1,(int)*unaff_x20 + 1);
            param_2 = &ppuStack_130;
            FUN_10a642254(ppuVar19[4]);
            iVar4 = *(int *)((long)unaff_x20 + 4) + -1;
            *(int *)((long)unaff_x20 + 4) = iVar4;
            if (iVar4 == 0) {
              *(undefined4 *)unaff_x20 = 0;
            }
          }
        }
      }
      ppuVar18 = ppuStack_128;
      ppuVar19 = (undefined **)*ppuVar19;
    } while (ppuVar19 != (undefined **)0x0);
    ppuVar19 = &puStack_110;
    FUN_10a57fe24();
    if (ppuVar18 == (undefined **)0x0) goto LAB_10a641dbc;
  }
  ppuVar20 = ppuVar18 + 1;
  do {
    puVar9 = *ppuVar20;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
    if (bVar3) {
      *ppuVar20 = puVar9 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar9 == (undefined *)0x0) {
    (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppuVar19 = ppuVar18;
  }
LAB_10a641dbc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b8)(unaff_x23 + 1);
  FUN_10a642510(unaff_x22 + 2);
  func_0x00010a004dac(&puStack_e0);
  FUN_10a57fe24(&puStack_110);
  FUN_10a642510(&ppuStack_130);
  ppuVar18 = ppuVar19;
  __Unwind_Resume();
  pcStack_148 = FUN_10a641f40;
  ppuStack_170 = unaff_x22;
  puStack_168 = unaff_x21;
  ppuStack_160 = unaff_x20;
  ppuStack_158 = ppuVar19;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&ppuStack_1a0,ppuVar18 + 1,*ppuVar18);
  func_0x000109884820(&puStack_1c8,&ppuStack_1a0,*ppuVar18);
  if (ppuStack_1a0 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_1a0)();
  }
  (**(code **)(*(long *)*ppuVar18 + 0x30))(&puStack_1d0);
  plVar14 = (long *)*ppuVar18;
  ppuStack_198 = param_2[1];
  ppuStack_1a0 = (undefined8 **)*param_2;
  if (param_2[1] != (undefined **)0x0) {
    ppuVar19 = param_2[1] + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
      if (bVar3) {
        *ppuVar19 = *ppuVar19 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppuStack_180 = &PTR_DAT_110bffc90;
  func_0x000109899de4(&puStack_1b0,plVar14,&ppuStack_1a0,&ppuStack_180,0,0);
  ppuVar19 = ppuStack_198;
  if (ppuStack_198 != (undefined **)0x0) {
    ppuVar18 = ppuStack_198 + 1;
    do {
      puVar9 = *ppuVar18;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
      if (bVar3) {
        *ppuVar18 = puVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar9 == (undefined *)0x0) {
      (**(code **)(*ppuStack_198 + 0x10))(ppuStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
    }
  }
  uStack_178 = 1;
  ppuStack_180 = &puStack_1b0;
  (**(code **)(*plVar14 + 0x58))(plVar14);
  ppuStack_1a0 = &puStack_1c8;
  ppuStack_198 = (undefined **)plVar14;
  puStack_190 = (undefined1 *)&puStack_1d0;
  pppuStack_188 = &ppuStack_180;
  func_0x0001098960c0(aiStack_1c0);
  if ((3 < aiStack_1c0[0]) && (puStack_1b8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_1b8)();
  }
  if ((3 < (int)puStack_1b0) && (puStack_1a8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_1a8)();
  }
  if (puStack_1d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_1d0)();
  }
  if (puStack_1c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_1c8)();
  }
  return;
}



/* Entry: 10a641f40; end: 10a642143;  */

void FUN_10a641f40(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110bffc90;
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



/* Entry: 10a642144; end: 10a642153;  */

void FUN_10a642144(long param_1)

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
  ppuStack_40 = &PTR_DAT_110bffc90;
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



/* Entry: 10a642154; end: 10a64217b;  */

long FUN_10a642154(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a6421fc(param_1 + 0x18);
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



/* Entry: 10a64217c; end: 10a6421cb;  */

void FUN_10a64217c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c01ad0;
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



/* Entry: 10a6421cc; end: 10a6421eb;  */

void FUN_10a6421cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c01af8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6421ec; end: 10a6421fb;  */

void FUN_10a6421ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6421f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6421fc; end: 10a642253;  */

long FUN_10a6421fc(long param_1)

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



/* Entry: 10a642254; end: 10a642457;  */

void FUN_10a642254(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110bffca8;
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



/* Entry: 10a642458; end: 10a642467;  */

void FUN_10a642458(long param_1)

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
  ppuStack_40 = &PTR_DAT_110bffca8;
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



/* Entry: 10a642468; end: 10a64248f;  */

long FUN_10a642468(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a642510(param_1 + 0x18);
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



/* Entry: 10a642490; end: 10a6424df;  */

void FUN_10a642490(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c01b38;
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



/* Entry: 10a6424e0; end: 10a6424ff;  */

void FUN_10a6424e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c01b60;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a642500; end: 10a64250f;  */

void FUN_10a642500(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a642508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a642510; end: 10a642567;  */

long FUN_10a642510(long param_1)

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



/* Entry: 10a642568; end: 10a64259b;  */

void FUN_10a642568(void)

{
  return;
}



/* Entry: 10a64259c; end: 10a643323;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a64259c(code *******param_1,code *******param_2)

{
  code *******pppppppcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  code *pcVar7;
  undefined1 uVar8;
  code *****pppppcVar9;
  code ****ppppcVar10;
  code ******ppppppcVar11;
  ulong uVar12;
  code *****pppppcVar13;
  code ******ppppppcVar14;
  code *******pppppppcVar15;
  code ******ppppppcVar16;
  code *****pppppcVar17;
  code ******ppppppcVar18;
  code *****pppppcVar19;
  code *******pppppppcVar20;
  code *******pppppppcVar21;
  code *******unaff_x21;
  code *******unaff_x24;
  code *******unaff_x26;
  code ******ppppppcVar22;
  code *******unaff_x27;
  code *******pppppppcVar23;
  code *******pppppppcStack_130;
  code *******pppppppcStack_128;
  code ******ppppppcStack_118;
  code ******ppppppcStack_110;
  code *******pppppppcStack_108;
  code *******pppppppcStack_100;
  long lStack_f8;
  float fStack_f0;
  code ******ppppppcStack_e0;
  code *******pppppppcStack_d8;
  code *******pppppppcStack_d0;
  code *******pppppppcStack_c8;
  code *******pppppppcStack_c0;
  code *******pppppppcStack_b8;
  code ******ppppppcStack_b0;
  code ******ppppppcStack_a8;
  code *******pppppppcStack_a0;
  code *******pppppppcStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppcVar21 = (code *******)param_2[2];
  pppppppcVar23 = param_1;
  if ((*(ushort *)(pppppppcVar21 + 0x30) >> 4 & 1) != 0) goto LAB_10a6431a0;
  ppppppcStack_118 = *(code *******)((long)param_1 + 0x14);
  param_2 = &ppppppcStack_118;
  pppppppcVar23 = pppppppcVar21;
  FUN_10a601f04();
  if ((int)pppppppcVar23 == 0) {
    if (*(char *)((long)pppppppcVar21 + 0x3d6) == '\x01') {
      param_2 = &ppppppcStack_118;
      FUN_10a63a050();
      pppppppcVar23 = pppppppcVar21;
    }
    goto LAB_10a6431a0;
  }
  uVar2 = *(uint *)(param_1 + 2);
  if (uVar2 == 0) {
LAB_10a642610:
    *(undefined1 *)((long)pppppppcVar21 + 0x3d6) = 1;
    FUN_10a1f2004(pppppppcVar21 + 0xb3,&ppppppcStack_118);
    unaff_x24 = (code *******)pppppppcVar21[0x6b];
    unaff_x21 = (code *******)0x38;
    __Znwm();
    unaff_x21[1] = (code ******)0x0;
    unaff_x21[2] = (code ******)0x0;
    *unaff_x21 = (code ******)&PTR_DAT_110c01be8;
    unaff_x21[4] = (code ******)0x0;
    unaff_x21[5] = (code ******)0x0;
    pppppppcStack_130 = unaff_x21 + 3;
    *pppppppcStack_130 = (code ******)&PTR_DAT_110bfbde8;
    unaff_x21[6] = ppppppcStack_118;
    pppppppcStack_108 = (code *******)0x0;
    ppppppcStack_110 = (code ******)0x0;
    lStack_f8 = 0;
    pppppppcStack_100 = (code *******)0x0;
    fStack_f0 = *(float *)(unaff_x24 + 7);
    param_2 = (code *******)unaff_x24[4];
    pppppppcStack_128 = unaff_x21;
    FUN_10a643324(&ppppppcStack_110);
    ppppppcVar22 = unaff_x24[5];
    if (ppppppcVar22 != (code ******)0x0) {
      do {
        pppppppcVar23 = pppppppcStack_108;
        pppppcVar9 = ppppppcVar22[2];
        uVar12 = ((ulong)(uint)((int)pppppcVar9 << 3) + 8 ^ (ulong)pppppcVar9 >> 0x20) *
                 -0x622015f714c7d297;
        uVar12 = ((ulong)pppppcVar9 >> 0x20 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
        pppppppcVar20 = (code *******)((uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297);
        if (pppppppcStack_108 != (code *******)0x0) {
          uVar12 = (long)pppppppcStack_108 - 1;
          if (((ulong)pppppppcStack_108 & uVar12) == 0) {
            unaff_x27 = (code *******)((ulong)pppppppcVar20 & uVar12);
          }
          else {
            unaff_x27 = pppppppcVar20;
            if (pppppppcStack_108 <= pppppppcVar20) {
              uVar6 = 0;
              if (pppppppcStack_108 != (code *******)0x0) {
                uVar6 = (ulong)pppppppcVar20 / (ulong)pppppppcStack_108;
              }
              unaff_x27 = (code *******)((long)pppppppcVar20 - uVar6 * (long)pppppppcStack_108);
            }
          }
          pppppcVar13 = ppppppcStack_110[(long)unaff_x27];
          if (pppppcVar13 != (code *****)0x0) {
            do {
              while( true ) {
                pppppcVar13 = (code *****)*pppppcVar13;
                if (pppppcVar13 == (code *****)0x0) goto LAB_10a642764;
                pppppppcVar15 = (code *******)pppppcVar13[1];
                if (pppppppcVar15 != pppppppcVar20) break;
                if ((code *****)pppppcVar13[2] == pppppcVar9) goto LAB_10a6428c8;
              }
              if (((ulong)pppppppcStack_108 & uVar12) == 0) {
                pppppppcVar15 = (code *******)((ulong)pppppppcVar15 & uVar12);
              }
              else if (pppppppcStack_108 <= pppppppcVar15) {
                uVar6 = 0;
                if (pppppppcStack_108 != (code *******)0x0) {
                  uVar6 = (ulong)pppppppcVar15 / (ulong)pppppppcStack_108;
                }
                pppppppcVar15 =
                     (code *******)((long)pppppppcVar15 - uVar6 * (long)pppppppcStack_108);
              }
            } while (pppppppcVar15 == unaff_x27);
          }
        }
LAB_10a642764:
        pppppppcVar15 = (code *******)0x68;
        __Znwm();
        *pppppppcVar15 = (code ******)0x0;
        pppppppcVar15[1] = (code ******)pppppppcVar20;
        pppppcVar9 = ppppppcVar22[3];
        ppppppcVar11 = (code ******)ppppppcVar22[2];
        pppppppcVar15[3] = (code ******)ppppppcVar22[3];
        pppppppcVar15[2] = ppppppcVar11;
        if (pppppcVar9 != (code *****)0x0) {
          pppppcVar9 = pppppcVar9 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppcVar9,0x10);
            if (bVar4) {
              *pppppcVar9 = (code ****)((long)*pppppcVar9 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        pppppppcStack_c0 = pppppppcVar15 + 4;
        *(undefined1 *)(pppppppcVar15 + 0xc) = 3;
        if (*(char *)(ppppppcVar22 + 0xc) == '\0') {
          uVar8 = 0;
        }
        else {
          param_2 = (code *******)(ppppppcVar22 + 4);
          FUN_10a005398(&pppppppcStack_c0);
          uVar8 = *(undefined1 *)(ppppppcVar22 + 0xc);
        }
        *(undefined1 *)(pppppppcVar15 + 0xc) = uVar8;
        if ((pppppppcVar23 == (code *******)0x0) ||
           (fStack_f0 * (float)pppppppcVar23 < (float)(lStack_f8 + 1))) {
          uVar12 = 1;
          if ((code *******)0x2 < pppppppcVar23) {
            uVar12 = (ulong)(((ulong)pppppppcVar23 & (long)pppppppcVar23 - 1U) != 0);
          }
          param_2 = (code *******)(uVar12 | (long)pppppppcVar23 << 1);
          pppppppcVar23 = (code *******)(long)((float)(lStack_f8 + 1) / fStack_f0);
          if (param_2 <= pppppppcVar23) {
            param_2 = pppppppcVar23;
          }
          FUN_10a643324(&ppppppcStack_110);
          pppppppcVar23 = pppppppcStack_108;
          if (((ulong)pppppppcStack_108 & (long)pppppppcStack_108 - 1U) == 0) {
            unaff_x27 = (code *******)((long)pppppppcStack_108 - 1U & (ulong)pppppppcVar20);
          }
          else {
            unaff_x27 = pppppppcVar20;
            if (pppppppcStack_108 <= pppppppcVar20) {
              uVar12 = 0;
              if (pppppppcStack_108 != (code *******)0x0) {
                uVar12 = (ulong)pppppppcVar20 / (ulong)pppppppcStack_108;
              }
              unaff_x27 = (code *******)((long)pppppppcVar20 - uVar12 * (long)pppppppcStack_108);
            }
          }
        }
        pppppcVar9 = ppppppcStack_110[(long)unaff_x27];
        if (pppppcVar9 == (code *****)0x0) {
          *pppppppcVar15 = (code ******)pppppppcStack_100;
          ppppppcStack_110[(long)unaff_x27] = (code *****)&pppppppcStack_100;
          pppppppcStack_100 = pppppppcVar15;
          if (*pppppppcVar15 != (code ******)0x0) {
            pppppppcVar20 = (code *******)(*pppppppcVar15)[1];
            if (((ulong)pppppppcVar23 & (long)pppppppcVar23 - 1U) == 0) {
              pppppppcVar20 = (code *******)((ulong)pppppppcVar20 & (long)pppppppcVar23 - 1U);
            }
            else if (pppppppcVar23 <= pppppppcVar20) {
              uVar12 = 0;
              if (pppppppcVar23 != (code *******)0x0) {
                uVar12 = (ulong)pppppppcVar20 / (ulong)pppppppcVar23;
              }
              pppppppcVar20 = (code *******)((long)pppppppcVar20 - uVar12 * (long)pppppppcVar23);
            }
            ppppppcStack_110[(long)pppppppcVar20] = (code *****)pppppppcVar15;
          }
        }
        else {
          *pppppppcVar15 = (code ******)*pppppcVar9;
          *pppppcVar9 = (code ****)pppppppcVar15;
        }
        lStack_f8 = lStack_f8 + 1;
LAB_10a6428c8:
        ppppppcVar22 = (code ******)*ppppppcVar22;
      } while (ppppppcVar22 != (code ******)0x0);
    }
    unaff_x26 = (code *******)0x0;
    if (pppppppcStack_100 == (code *******)0x0) {
      pppppppcVar23 = &ppppppcStack_110;
      FUN_10a580ad4();
LAB_10a642bd0:
      pppppppcVar20 = unaff_x21 + 1;
      do {
        ppppppcVar22 = *pppppppcVar20;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar20,0x10);
        if (bVar4) {
          *pppppppcVar20 = (code ******)((long)ppppppcVar22 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppppcVar22 == (code ******)0x0) {
        (*(code *)(*unaff_x21)[2])(unaff_x21);
        pppppppcVar23 = unaff_x21;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    else {
      unaff_x26 = (code *******)&pppppppcStack_c0;
      pppppppcVar23 = pppppppcStack_100;
      do {
        ppppppcVar22 = unaff_x24[4];
        if (ppppppcVar22 != (code ******)0x0) {
          ppppppcVar11 = pppppppcVar23[2];
          uVar12 = ((ulong)(uint)((int)ppppppcVar11 << 3) + 8 ^ (ulong)ppppppcVar11 >> 0x20) *
                   -0x622015f714c7d297;
          uVar12 = ((ulong)ppppppcVar11 >> 0x20 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
          ppppppcVar14 = (code ******)((uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297);
          uVar12 = (long)ppppppcVar22 - 1;
          if (((ulong)ppppppcVar22 & uVar12) == 0) {
            ppppppcVar16 = (code ******)((ulong)ppppppcVar14 & uVar12);
          }
          else {
            ppppppcVar16 = ppppppcVar14;
            if (ppppppcVar22 <= ppppppcVar14) {
              uVar6 = 0;
              if (ppppppcVar22 != (code ******)0x0) {
                uVar6 = (ulong)ppppppcVar14 / (ulong)ppppppcVar22;
              }
              ppppppcVar16 = (code ******)((long)ppppppcVar14 - uVar6 * (long)ppppppcVar22);
            }
          }
          pppppcVar9 = unaff_x24[3][(long)ppppppcVar16];
          if (pppppcVar9 != (code *****)0x0) {
LAB_10a64295c:
            while (pppppcVar9 = (code *****)*pppppcVar9, pppppcVar9 != (code *****)0x0) {
              ppppppcVar18 = (code ******)pppppcVar9[1];
              if (ppppppcVar18 != ppppppcVar14) goto LAB_10a642980;
              if ((code ******)pppppcVar9[2] == ppppppcVar11) {
                if (*(char *)(pppppppcVar23 + 0xc) == '\x01') {
                  ppppppcVar22 = pppppppcVar23[4];
                  pppppppcStack_b8 = pppppppcStack_128;
                  pppppppcStack_c0 = pppppppcStack_130;
                  if (pppppppcStack_128 != (code *******)0x0) {
                    pppppppcVar20 = pppppppcStack_128 + 1;
                    do {
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar20,0x10);
                      if (bVar4) {
                        *pppppppcVar20 = (code ******)((long)*pppppppcVar20 + 1);
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                  param_2 = pppppppcVar23 + 4;
                  (*(code *)ppppppcVar22)(&pppppppcStack_c0);
                  if (pppppppcStack_b8 != (code *******)0x0) {
                    pppppppcVar20 = pppppppcStack_b8 + 1;
                    do {
                      ppppppcVar22 = *pppppppcVar20;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar20,0x10);
                      if (bVar4) {
                        *pppppppcVar20 = (code ******)((long)ppppppcVar22 + -1);
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                      pppppppcVar15 = pppppppcStack_b8;
                    } while (cVar3 != '\0');
                    goto LAB_10a642a50;
                  }
                }
                else if (*(char *)(pppppppcVar23 + 0xc) == '\x02') {
                  pppppppcVar20 = pppppppcVar23 + 4;
                  FUN_10a688b40();
                  pppppppcVar15 = pppppppcStack_128;
                  if (pppppppcVar20 == (code *******)0x0) {
                    if (param_2 != (code *******)0x0) {
                      ppppppcStack_b0 = pppppppcVar23[4];
                      ppppppcStack_a8 = pppppppcVar23[5];
                      if (ppppppcStack_a8 != (code ******)0x0) {
                        ppppppcVar22 = ppppppcStack_a8 + 1;
                        do {
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(ppppppcVar22,0x10);
                          if (bVar4) {
                            *ppppppcVar22 = (code *****)((long)*ppppppcVar22 + 1);
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                      }
                      pppppppcStack_d0 = pppppppcStack_130;
                      pppppppcStack_c8 = pppppppcStack_128;
                      if (pppppppcStack_128 == (code *******)0x0) {
                        pppppppcStack_98 = (code *******)0x0;
                      }
                      else {
                        pppppppcVar20 = pppppppcStack_128 + 1;
                        do {
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar20,0x10);
                          if (bVar4) {
                            *pppppppcVar20 = (code ******)((long)*pppppppcVar20 + 1);
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        pppppppcStack_98 = pppppppcStack_128;
                        do {
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar20,0x10);
                          if (bVar4) {
                            *pppppppcVar20 = (code ******)((long)*pppppppcVar20 + 1);
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                      }
                      pppppppcStack_a0 = pppppppcStack_130;
                      pppppppcStack_b8 = (code *******)&PTR_FUN_110c01bc0;
                      pppppppcStack_d8 = (code *******)0x0;
                      ppppppcStack_e0 = (code ******)0x0;
                      pppppppcStack_c0 = (code *******)FUN_10a643748;
                      pppppppcVar20 = (code *******)&pppppppcStack_c0;
                      FUN_10a4634ec(param_2);
                      (*(code *)*pppppppcStack_b8)(&pppppppcStack_b8);
                      if (pppppppcVar15 != (code *******)0x0) {
                        pppppppcVar1 = pppppppcVar15 + 1;
                        do {
                          ppppppcVar22 = *pppppppcVar1;
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar1,0x10);
                          if (bVar4) {
                            *pppppppcVar1 = (code ******)((long)ppppppcVar22 + -1);
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        if (ppppppcVar22 == (code ******)0x0) {
                          (*(code *)(*pppppppcVar15)[2])(pppppppcVar15);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar15);
                        }
                      }
                      param_2 = pppppppcVar20;
                      if (pppppppcStack_d8 != (code *******)0x0) {
                        pppppppcVar20 = pppppppcStack_d8 + 1;
                        do {
                          ppppppcVar22 = *pppppppcVar20;
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar20,0x10);
                          if (bVar4) {
                            *pppppppcVar20 = (code ******)((long)ppppppcVar22 + -1);
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                          pppppppcVar15 = pppppppcStack_d8;
                        } while (cVar3 != '\0');
LAB_10a642a50:
                        if (ppppppcVar22 == (code ******)0x0) {
                          (*(code *)(*pppppppcVar15)[2])(pppppppcVar15);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar15);
                        }
                      }
                    }
                  }
                  else {
                    *pppppppcVar20 =
                         (code ******)
                         CONCAT44((int)((ulong)*pppppppcVar20 >> 0x20) + 1,(int)*pppppppcVar20 + 1);
                    param_2 = (code *******)&pppppppcStack_130;
                    FUN_10a643544(pppppppcVar23[4]);
                    iVar5 = *(int *)((long)pppppppcVar20 + 4) + -1;
                    *(int *)((long)pppppppcVar20 + 4) = iVar5;
                    if (iVar5 == 0) {
                      *(undefined4 *)pppppppcVar20 = 0;
                    }
                  }
                }
                break;
              }
            }
          }
        }
LAB_10a642b58:
        unaff_x21 = pppppppcStack_128;
        pppppppcVar23 = (code *******)*pppppppcVar23;
      } while (pppppppcVar23 != (code *******)0x0);
      pppppppcVar23 = &ppppppcStack_110;
      FUN_10a580ad4();
      if (unaff_x21 != (code *******)0x0) goto LAB_10a642bd0;
    }
    if ((uVar2 != 1) || (*(char *)((long)pppppppcVar21 + 0x3d6) != '\x01')) goto LAB_10a6431a0;
  }
  else {
    if (uVar2 != 1) {
      if (((uVar2 & 0xfffffffe) == 2) && (*(char *)((long)pppppppcVar21 + 0x3d6) == '\x01')) {
        param_2 = &ppppppcStack_118;
        FUN_10a63a050();
        pppppppcVar23 = pppppppcVar21;
      }
      goto LAB_10a6431a0;
    }
    if ((*(byte *)((long)pppppppcVar21 + 0x3d6) & 1) == 0) goto LAB_10a642610;
  }
  FUN_10a1f2004(pppppppcVar21 + 0xb6,&ppppppcStack_118);
  ppppppcVar22 = pppppppcVar21[0x69];
  pppppppcVar21 = (code *******)0x40;
  __Znwm();
  pppppppcVar21[1] = (code ******)0x0;
  pppppppcVar21[2] = (code ******)0x0;
  *pppppppcVar21 = (code ******)&PTR_DAT_110c01c50;
  pppppppcVar21[4] = (code ******)0x0;
  pppppppcVar21[5] = (code ******)0x0;
  pppppppcStack_130 = pppppppcVar21 + 3;
  *pppppppcStack_130 = (code ******)&PTR_DAT_110bfbe40;
  pppppppcVar21[7] = param_1[7];
  pppppppcVar21[6] = ppppppcStack_118;
  pppppppcStack_108 = (code *******)0x0;
  ppppppcStack_110 = (code ******)0x0;
  lStack_f8 = 0;
  pppppppcStack_100 = (code *******)0x0;
  fStack_f0 = *(float *)(ppppppcVar22 + 7);
  param_2 = (code *******)ppppppcVar22[4];
  pppppppcStack_128 = pppppppcVar21;
  FUN_10a643858(&ppppppcStack_110);
  pppppcVar9 = ppppppcVar22[5];
  if (pppppcVar9 != (code *****)0x0) {
    unaff_x24 = (code *******)&pppppppcStack_100;
    do {
      pppppppcVar23 = pppppppcStack_108;
      ppppcVar10 = pppppcVar9[2];
      uVar12 = ((ulong)(uint)((int)ppppcVar10 << 3) + 8 ^ (ulong)ppppcVar10 >> 0x20) *
               -0x622015f714c7d297;
      uVar12 = ((ulong)ppppcVar10 >> 0x20 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
      pppppppcVar20 = (code *******)((uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297);
      if (pppppppcStack_108 != (code *******)0x0) {
        uVar12 = (long)pppppppcStack_108 - 1;
        if (((ulong)pppppppcStack_108 & uVar12) == 0) {
          unaff_x26 = (code *******)((ulong)pppppppcVar20 & uVar12);
        }
        else {
          unaff_x26 = pppppppcVar20;
          if (pppppppcStack_108 <= pppppppcVar20) {
            uVar6 = 0;
            if (pppppppcStack_108 != (code *******)0x0) {
              uVar6 = (ulong)pppppppcVar20 / (ulong)pppppppcStack_108;
            }
            unaff_x26 = (code *******)((long)pppppppcVar20 - uVar6 * (long)pppppppcStack_108);
          }
        }
        pppppcVar13 = ppppppcStack_110[(long)unaff_x26];
        if (pppppcVar13 != (code *****)0x0) {
          do {
            while( true ) {
              pppppcVar13 = (code *****)*pppppcVar13;
              if (pppppcVar13 == (code *****)0x0) goto LAB_10a642d5c;
              pppppppcVar15 = (code *******)pppppcVar13[1];
              if (pppppppcVar15 != pppppppcVar20) break;
              if (pppppcVar13[2] == ppppcVar10) goto LAB_10a642ebc;
            }
            if (((ulong)pppppppcStack_108 & uVar12) == 0) {
              pppppppcVar15 = (code *******)((ulong)pppppppcVar15 & uVar12);
            }
            else if (pppppppcStack_108 <= pppppppcVar15) {
              uVar6 = 0;
              if (pppppppcStack_108 != (code *******)0x0) {
                uVar6 = (ulong)pppppppcVar15 / (ulong)pppppppcStack_108;
              }
              pppppppcVar15 = (code *******)((long)pppppppcVar15 - uVar6 * (long)pppppppcStack_108);
            }
          } while (pppppppcVar15 == unaff_x26);
        }
      }
LAB_10a642d5c:
      unaff_x21 = (code *******)0x68;
      __Znwm();
      *unaff_x21 = (code ******)0x0;
      unaff_x21[1] = (code ******)pppppppcVar20;
      ppppcVar10 = pppppcVar9[3];
      ppppppcVar11 = (code ******)pppppcVar9[2];
      unaff_x21[3] = (code ******)pppppcVar9[3];
      unaff_x21[2] = ppppppcVar11;
      if (ppppcVar10 != (code ****)0x0) {
        ppppcVar10 = ppppcVar10 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppcVar10,0x10);
          if (bVar4) {
            *ppppcVar10 = (code ***)((long)*ppppcVar10 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pppppppcStack_c0 = unaff_x21 + 4;
      *(undefined1 *)(unaff_x21 + 0xc) = 3;
      if (*(char *)(pppppcVar9 + 0xc) == '\0') {
        uVar8 = 0;
      }
      else {
        param_2 = (code *******)(pppppcVar9 + 4);
        FUN_10a005398(&pppppppcStack_c0);
        uVar8 = *(undefined1 *)(pppppcVar9 + 0xc);
      }
      *(undefined1 *)(unaff_x21 + 0xc) = uVar8;
      if ((pppppppcVar23 == (code *******)0x0) ||
         (fStack_f0 * (float)pppppppcVar23 < (float)(lStack_f8 + 1))) {
        uVar12 = 1;
        if ((code *******)0x2 < pppppppcVar23) {
          uVar12 = (ulong)(((ulong)pppppppcVar23 & (long)pppppppcVar23 - 1U) != 0);
        }
        param_2 = (code *******)(uVar12 | (long)pppppppcVar23 << 1);
        pppppppcVar23 = (code *******)(long)((float)(lStack_f8 + 1) / fStack_f0);
        if (param_2 <= pppppppcVar23) {
          param_2 = pppppppcVar23;
        }
        FUN_10a643858(&ppppppcStack_110);
        pppppppcVar23 = pppppppcStack_108;
        if (((ulong)pppppppcStack_108 & (long)pppppppcStack_108 - 1U) == 0) {
          unaff_x26 = (code *******)((long)pppppppcStack_108 - 1U & (ulong)pppppppcVar20);
        }
        else {
          unaff_x26 = pppppppcVar20;
          if (pppppppcStack_108 <= pppppppcVar20) {
            uVar12 = 0;
            if (pppppppcStack_108 != (code *******)0x0) {
              uVar12 = (ulong)pppppppcVar20 / (ulong)pppppppcStack_108;
            }
            unaff_x26 = (code *******)((long)pppppppcVar20 - uVar12 * (long)pppppppcStack_108);
          }
        }
      }
      pppppcVar13 = ppppppcStack_110[(long)unaff_x26];
      if (pppppcVar13 == (code *****)0x0) {
        *unaff_x21 = (code ******)pppppppcStack_100;
        ppppppcStack_110[(long)unaff_x26] = (code *****)unaff_x24;
        pppppppcStack_100 = unaff_x21;
        if (*unaff_x21 != (code ******)0x0) {
          pppppppcVar20 = (code *******)(*unaff_x21)[1];
          if (((ulong)pppppppcVar23 & (long)pppppppcVar23 - 1U) == 0) {
            pppppppcVar20 = (code *******)((ulong)pppppppcVar20 & (long)pppppppcVar23 - 1U);
          }
          else if (pppppppcVar23 <= pppppppcVar20) {
            uVar12 = 0;
            if (pppppppcVar23 != (code *******)0x0) {
              uVar12 = (ulong)pppppppcVar20 / (ulong)pppppppcVar23;
            }
            pppppppcVar20 = (code *******)((long)pppppppcVar20 - uVar12 * (long)pppppppcVar23);
          }
          ppppppcStack_110[(long)pppppppcVar20] = (code *****)unaff_x21;
        }
      }
      else {
        *unaff_x21 = (code ******)*pppppcVar13;
        *pppppcVar13 = (code ****)unaff_x21;
      }
      lStack_f8 = lStack_f8 + 1;
LAB_10a642ebc:
      pppppcVar9 = (code *****)*pppppcVar9;
    } while (pppppcVar9 != (code *****)0x0);
  }
  if (pppppppcStack_100 == (code *******)0x0) {
    pppppppcVar23 = &ppppppcStack_110;
    FUN_10a5807a8();
  }
  else {
    unaff_x21 = &ppppppcStack_e0;
    unaff_x24 = (code *******)&pppppppcStack_c0;
    pppppppcVar23 = pppppppcStack_100;
    do {
      pppppcVar9 = ppppppcVar22[4];
      if (pppppcVar9 != (code *****)0x0) {
        ppppppcVar11 = pppppppcVar23[2];
        uVar12 = ((ulong)(uint)((int)ppppppcVar11 << 3) + 8 ^ (ulong)ppppppcVar11 >> 0x20) *
                 -0x622015f714c7d297;
        uVar12 = ((ulong)ppppppcVar11 >> 0x20 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
        pppppcVar13 = (code *****)((uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297);
        uVar12 = (long)pppppcVar9 - 1;
        if (((ulong)pppppcVar9 & uVar12) == 0) {
          pppppcVar17 = (code *****)((ulong)pppppcVar13 & uVar12);
        }
        else {
          pppppcVar17 = pppppcVar13;
          if (pppppcVar9 <= pppppcVar13) {
            uVar6 = 0;
            if (pppppcVar9 != (code *****)0x0) {
              uVar6 = (ulong)pppppcVar13 / (ulong)pppppcVar9;
            }
            pppppcVar17 = (code *****)((long)pppppcVar13 - uVar6 * (long)pppppcVar9);
          }
        }
        ppppcVar10 = ppppppcVar22[3][(long)pppppcVar17];
        if (ppppcVar10 != (code ****)0x0) {
LAB_10a642f50:
          while (ppppcVar10 = (code ****)*ppppcVar10, ppppcVar10 != (code ****)0x0) {
            pppppcVar19 = (code *****)ppppcVar10[1];
            if (pppppcVar19 != pppppcVar13) goto LAB_10a642f74;
            if ((code ******)ppppcVar10[2] == ppppppcVar11) {
              if (*(char *)(pppppppcVar23 + 0xc) == '\x01') {
                ppppppcVar11 = pppppppcVar23[4];
                pppppppcStack_b8 = pppppppcStack_128;
                pppppppcStack_c0 = pppppppcStack_130;
                if (pppppppcStack_128 != (code *******)0x0) {
                  pppppppcVar21 = pppppppcStack_128 + 1;
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar21,0x10);
                    if (bVar4) {
                      *pppppppcVar21 = (code ******)((long)*pppppppcVar21 + 1);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                param_2 = pppppppcVar23 + 4;
                (*(code *)ppppppcVar11)(&pppppppcStack_c0);
                if (pppppppcStack_b8 != (code *******)0x0) {
                  pppppppcVar21 = pppppppcStack_b8 + 1;
                  do {
                    ppppppcVar11 = *pppppppcVar21;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar21,0x10);
                    if (bVar4) {
                      *pppppppcVar21 = (code ******)((long)ppppppcVar11 + -1);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                    pppppppcVar20 = pppppppcStack_b8;
                  } while (cVar3 != '\0');
                  goto LAB_10a643044;
                }
              }
              else if (*(char *)(pppppppcVar23 + 0xc) == '\x02') {
                pppppppcVar21 = pppppppcVar23 + 4;
                FUN_10a688b40();
                pppppppcVar20 = pppppppcStack_128;
                if (pppppppcVar21 == (code *******)0x0) {
                  if (param_2 != (code *******)0x0) {
                    ppppppcStack_b0 = pppppppcVar23[4];
                    ppppppcStack_a8 = pppppppcVar23[5];
                    if (ppppppcStack_a8 != (code ******)0x0) {
                      ppppppcVar11 = ppppppcStack_a8 + 1;
                      do {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(ppppppcVar11,0x10);
                        if (bVar4) {
                          *ppppppcVar11 = (code *****)((long)*ppppppcVar11 + 1);
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    pppppppcStack_d0 = pppppppcStack_130;
                    pppppppcStack_c8 = pppppppcStack_128;
                    if (pppppppcStack_128 == (code *******)0x0) {
                      pppppppcStack_98 = (code *******)0x0;
                    }
                    else {
                      pppppppcVar21 = pppppppcStack_128 + 1;
                      do {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar21,0x10);
                        if (bVar4) {
                          *pppppppcVar21 = (code ******)((long)*pppppppcVar21 + 1);
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      pppppppcStack_98 = pppppppcStack_128;
                      do {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar21,0x10);
                        if (bVar4) {
                          *pppppppcVar21 = (code ******)((long)*pppppppcVar21 + 1);
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    pppppppcStack_a0 = pppppppcStack_130;
                    pppppppcStack_b8 = (code *******)&PTR_FUN_110c01c28;
                    pppppppcStack_d8 = (code *******)0x0;
                    ppppppcStack_e0 = (code ******)0x0;
                    pppppppcStack_c0 = (code *******)FUN_10a643c7c;
                    pppppppcVar21 = (code *******)&pppppppcStack_c0;
                    FUN_10a4634ec(param_2);
                    (*(code *)*pppppppcStack_b8)(&pppppppcStack_b8);
                    if (pppppppcVar20 != (code *******)0x0) {
                      pppppppcVar15 = pppppppcVar20 + 1;
                      do {
                        ppppppcVar11 = *pppppppcVar15;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
                        if (bVar4) {
                          *pppppppcVar15 = (code ******)((long)ppppppcVar11 + -1);
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (ppppppcVar11 == (code ******)0x0) {
                        (*(code *)(*pppppppcVar20)[2])(pppppppcVar20);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar20);
                      }
                    }
                    param_2 = pppppppcVar21;
                    if (pppppppcStack_d8 != (code *******)0x0) {
                      pppppppcVar21 = pppppppcStack_d8 + 1;
                      do {
                        ppppppcVar11 = *pppppppcVar21;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar21,0x10);
                        if (bVar4) {
                          *pppppppcVar21 = (code ******)((long)ppppppcVar11 + -1);
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                        pppppppcVar20 = pppppppcStack_d8;
                      } while (cVar3 != '\0');
LAB_10a643044:
                      if (ppppppcVar11 == (code ******)0x0) {
                        (*(code *)(*pppppppcVar20)[2])(pppppppcVar20);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar20);
                      }
                    }
                  }
                }
                else {
                  *pppppppcVar21 =
                       (code ******)
                       CONCAT44((int)((ulong)*pppppppcVar21 >> 0x20) + 1,(int)*pppppppcVar21 + 1);
                  param_2 = (code *******)&pppppppcStack_130;
                  FUN_10a643a78(pppppppcVar23[4]);
                  iVar5 = *(int *)((long)pppppppcVar21 + 4) + -1;
                  *(int *)((long)pppppppcVar21 + 4) = iVar5;
                  if (iVar5 == 0) {
                    *(undefined4 *)pppppppcVar21 = 0;
                  }
                }
              }
              break;
            }
          }
        }
      }
LAB_10a64314c:
      pppppppcVar21 = pppppppcStack_128;
      pppppppcVar23 = (code *******)*pppppppcVar23;
    } while (pppppppcVar23 != (code *******)0x0);
    pppppppcVar23 = &ppppppcStack_110;
    FUN_10a5807a8();
    if (pppppppcVar21 == (code *******)0x0) goto LAB_10a6431a0;
  }
  pppppppcVar20 = pppppppcVar21 + 1;
  do {
    ppppppcVar22 = *pppppppcVar20;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar20,0x10);
    if (bVar4) {
      *pppppppcVar20 = (code ******)((long)ppppppcVar22 + -1);
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (ppppppcVar22 == (code ******)0x0) {
    (*(code *)(*pppppppcVar21)[2])(pppppppcVar21);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    pppppppcVar23 = pppppppcVar21;
  }
LAB_10a6431a0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*pppppppcStack_b8)(unaff_x24 + 1);
  FUN_10a643d34(unaff_x21 + 2);
  func_0x00010a004dac(&ppppppcStack_e0);
  FUN_10a5807a8(&ppppppcStack_110);
  FUN_10a643d34(&pppppppcStack_130);
  __Unwind_Resume();
  pppppppcVar21 = pppppppcVar23;
  pppppppcVar20 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (code *******)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    pppppppcVar21 = param_2;
  }
  pppppppcVar15 = (code *******)pppppppcVar23[1];
  if (pppppppcVar15 > param_2 || param_2 == pppppppcVar15) {
    if (pppppppcVar15 <= param_2) {
      return;
    }
    pppppppcVar21 = (code *******)(long)((float)pppppppcVar23[3] / *(float *)(pppppppcVar23 + 4));
    if ((pppppppcVar15 < (code *******)0x3) ||
       (((ulong)pppppppcVar15 & (long)pppppppcVar15 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((code *******)0x1 < pppppppcVar21) {
      pppppppcVar21 = (code *******)(1L << (-LZCOUNT((long)pppppppcVar21 + -1) & 0x3fU));
    }
    if (param_2 <= pppppppcVar21) {
      param_2 = pppppppcVar21;
    }
    if (pppppppcVar15 <= param_2) {
      return;
    }
    if (param_2 == (code *******)0x0) {
      ppppppcVar22 = *pppppppcVar23;
      *pppppppcVar23 = (code ******)0x0;
      if (ppppppcVar22 != (code ******)0x0) {
        __ZdlPv();
      }
      pppppppcVar23[1] = (code ******)0x0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    ppppppcVar22 = (code ******)((long)param_2 << 3);
    __Znwm();
    ppppppcVar11 = *pppppppcVar23;
    *pppppppcVar23 = ppppppcVar22;
    if (ppppppcVar11 != (code ******)0x0) {
      __ZdlPv();
    }
    pppppppcVar21 = (code *******)0x0;
    pppppppcVar23[1] = (code ******)param_2;
    do {
      (*pppppppcVar23)[(long)pppppppcVar21] = (code *****)0x0;
      pppppppcVar21 = (code *******)((long)pppppppcVar21 + 1);
    } while (param_2 != pppppppcVar21);
    ppppppcVar22 = pppppppcVar23[2];
    if (ppppppcVar22 != (code ******)0x0) {
      pppppppcVar21 = (code *******)ppppppcVar22[1];
      uVar12 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar12) == 0) {
        pppppppcVar21 = (code *******)((ulong)pppppppcVar21 & uVar12);
      }
      else if (param_2 <= pppppppcVar21) {
        uVar6 = 0;
        if (param_2 != (code *******)0x0) {
          uVar6 = (ulong)pppppppcVar21 / (ulong)param_2;
        }
        pppppppcVar21 = (code *******)((long)pppppppcVar21 - uVar6 * (long)param_2);
      }
      (*pppppppcVar23)[(long)pppppppcVar21] = (code *****)(pppppppcVar23 + 2);
      ppppppcVar11 = (code ******)*ppppppcVar22;
      while (ppppppcVar11 != (code ******)0x0) {
        pppppppcVar20 = (code *******)ppppppcVar11[1];
        if (((ulong)param_2 & uVar12) == 0) {
          pppppppcVar20 = (code *******)((ulong)pppppppcVar20 & uVar12);
        }
        else if (param_2 <= pppppppcVar20) {
          uVar6 = 0;
          if (param_2 != (code *******)0x0) {
            uVar6 = (ulong)pppppppcVar20 / (ulong)param_2;
          }
          pppppppcVar20 = (code *******)((long)pppppppcVar20 - uVar6 * (long)param_2);
        }
        ppppppcVar14 = ppppppcVar11;
        if (pppppppcVar20 != pppppppcVar21) {
          ppppppcVar16 = *pppppppcVar23;
          if (ppppppcVar16[(long)pppppppcVar20] == (code *****)0x0) {
            ppppppcVar16[(long)pppppppcVar20] = (code *****)ppppppcVar22;
            pppppppcVar21 = pppppppcVar20;
          }
          else {
            *ppppppcVar22 = *ppppppcVar11;
            *ppppppcVar11 = (code *****)*ppppppcVar16[(long)pppppppcVar20];
            *ppppppcVar16[(long)pppppppcVar20] = (code ****)ppppppcVar11;
            ppppppcVar14 = ppppppcVar22;
          }
        }
        ppppppcVar22 = ppppppcVar14;
        ppppppcVar11 = (code ******)*ppppppcVar14;
      }
    }
    return;
  }
  func_0x000109ffded8();
  if (((ulong)pppppppcVar21 & 1) != 0) {
    if (3 < (ulong)*(byte *)(pppppppcVar20 + 0xc)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10a643544);
      (*pcVar7)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(pppppppcVar20 + 0xc)])(pppppppcVar20 + 4);
    FUN_10a004978(pppppppcVar20 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(pppppppcVar20);
  return;
LAB_10a642980:
  if (((ulong)ppppppcVar22 & uVar12) == 0) {
    ppppppcVar18 = (code ******)((ulong)ppppppcVar18 & uVar12);
  }
  else if (ppppppcVar22 <= ppppppcVar18) {
    uVar6 = 0;
    if (ppppppcVar22 != (code ******)0x0) {
      uVar6 = (ulong)ppppppcVar18 / (ulong)ppppppcVar22;
    }
    ppppppcVar18 = (code ******)((long)ppppppcVar18 - uVar6 * (long)ppppppcVar22);
  }
  if (ppppppcVar18 != ppppppcVar16) goto LAB_10a642b58;
  goto LAB_10a64295c;
LAB_10a642f74:
  if (((ulong)pppppcVar9 & uVar12) == 0) {
    pppppcVar19 = (code *****)((ulong)pppppcVar19 & uVar12);
  }
  else if (pppppcVar9 <= pppppcVar19) {
    uVar6 = 0;
    if (pppppcVar9 != (code *****)0x0) {
      uVar6 = (ulong)pppppcVar19 / (ulong)pppppcVar9;
    }
    pppppcVar19 = (code *****)((long)pppppcVar19 - uVar6 * (long)pppppcVar9);
  }
  if (pppppcVar19 != pppppcVar17) goto LAB_10a64314c;
  goto LAB_10a642f50;
}



/* Entry: 10a643324; end: 10a6434f3;  */

void FUN_10a643324(long *param_1,long *param_2)

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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a643544);
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



/* Entry: 10a6434f4; end: 10a643543;  */

void FUN_10a6434f4(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a643544);
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



/* Entry: 10a643544; end: 10a643747;  */

void FUN_10a643544(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110bffcd8;
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



/* Entry: 10a643748; end: 10a643757;  */

void FUN_10a643748(long param_1)

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
  ppuStack_40 = &PTR_DAT_110bffcd8;
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



/* Entry: 10a643758; end: 10a64377f;  */

long FUN_10a643758(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a643800(param_1 + 0x18);
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



/* Entry: 10a643780; end: 10a6437cf;  */

void FUN_10a643780(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c01bc0;
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



/* Entry: 10a6437d0; end: 10a6437ef;  */

void FUN_10a6437d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c01be8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6437f0; end: 10a6437ff;  */

void FUN_10a6437f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6437f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a643800; end: 10a643857;  */

long FUN_10a643800(long param_1)

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



/* Entry: 10a643858; end: 10a643a27;  */

void FUN_10a643858(long *param_1,long *param_2)

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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a643a78);
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



/* Entry: 10a643a28; end: 10a643a77;  */

void FUN_10a643a28(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a643a78);
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



/* Entry: 10a643a78; end: 10a643c7b;  */

void FUN_10a643a78(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110bffcf0;
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



/* Entry: 10a643c7c; end: 10a643c8b;  */

void FUN_10a643c7c(long param_1)

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
  ppuStack_40 = &PTR_DAT_110bffcf0;
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



/* Entry: 10a643c8c; end: 10a643cb3;  */

long FUN_10a643c8c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a643d34(param_1 + 0x18);
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



/* Entry: 10a643cb4; end: 10a643d03;  */

void FUN_10a643cb4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c01c28;
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



/* Entry: 10a643d04; end: 10a643d23;  */

void FUN_10a643d04(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c01c50;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a643d24; end: 10a643d33;  */

void FUN_10a643d24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a643d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a643d34; end: 10a643d8b;  */

long FUN_10a643d34(long param_1)

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



/* Entry: 10a643d8c; end: 10a643dbf;  */

void FUN_10a643d8c(void)

{
  return;
}



/* Entry: 10a643dc0; end: 10a643ebb;  */

undefined1  [16] FUN_10a643dc0(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bffb40;
  puVar1 = &UNK_10f667746;
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
    ppuStack_40 = &PTR_DAT_110bffb40;
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



/* Entry: 10a643ebc; end: 10a643f77;  */

void FUN_10a643ebc(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f66a0f9,0x17);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a643f78);
  (*pcVar4)();
}



/* Entry: 10a643f78; end: 10a644073;  */

undefined1  [16] FUN_10a643f78(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c020f0;
  puVar1 = &UNK_10f667746;
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
    ppuStack_40 = &PTR_DAT_110c020f0;
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



/* Entry: 10a644074; end: 10a64412f;  */

void FUN_10a644074(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f66a111,0x13);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a644130);
  (*pcVar4)();
}



/* Entry: 10a644130; end: 10a64422b;  */

undefined1  [16] FUN_10a644130(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c020d8;
  puVar1 = &UNK_10f667746;
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
    ppuStack_40 = &PTR_DAT_110c020d8;
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



/* Entry: 10a64422c; end: 10a6442e7;  */

void FUN_10a64422c(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f66a125,0x11);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6442e8);
  (*pcVar4)();
}



/* Entry: 10a6442e8; end: 10a6443e3;  */

undefined1  [16] FUN_10a6442e8(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c02108;
  puVar1 = &UNK_10f667746;
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
    ppuStack_40 = &PTR_DAT_110c02108;
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



/* Entry: 10a6443e4; end: 10a64449f;  */

void FUN_10a6443e4(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f66a137,0x14);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6444a0);
  (*pcVar4)();
}



/* Entry: 10a6444a0; end: 10a64459b;  */

undefined1  [16] FUN_10a6444a0(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c020c0;
  puVar1 = &UNK_10f667746;
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
    ppuStack_40 = &PTR_DAT_110c020c0;
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



/* Entry: 10a64459c; end: 10a644657;  */

void FUN_10a64459c(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f66a14c,0x12);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a644658);
  (*pcVar4)();
}



/* Entry: 10a644658; end: 10a644753;  */

undefined1  [16] FUN_10a644658(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c01d80;
  puVar1 = &UNK_10f667746;
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
    ppuStack_40 = &PTR_DAT_110c01d80;
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



/* Entry: 10a644754; end: 10a64480f;  */

void FUN_10a644754(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f66a15f,0x18);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a644810);
  (*pcVar4)();
}



/* Entry: 10a644810; end: 10a64490b;  */

undefined1  [16] FUN_10a644810(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c01d68;
  puVar1 = &UNK_10f667746;
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
    ppuStack_40 = &PTR_DAT_110c01d68;
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



/* Entry: 10a64490c; end: 10a6449c7;  */

void FUN_10a64490c(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f66a178,0x16);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6449c8);
  (*pcVar4)();
}



/* Entry: 10a6449c8; end: 10a644ac3;  */

undefined1  [16] FUN_10a6449c8(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bffb58;
  puVar1 = &UNK_10f667746;
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
    ppuStack_40 = &PTR_DAT_110bffb58;
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



/* Entry: 10a644ac4; end: 10a644b17;  */

ulong FUN_10a644ac4(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a644b18,0);
  }
  return param_1;
}



/* Entry: 10a644b18; end: 10a644c2f;  */

void FUN_10a644b18(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  long lStack_48;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar2[0x59] < 8) {
    plVar2[plVar2[0x59] + 0x4e] = plVar2[0x5a];
    plVar2[0x59] = plVar2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar2 + 0x4b);
  }
  plVar3 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar3 == (long *)0x0) {
    puVar5 = &UNK_10f68f52e;
  }
  else {
    plVar4 = param_2;
    FUN_10a052c2c(param_2,plVar3);
    if ((plVar4 != (long *)0x0) && (___dynamic_cast(), plVar4 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      lStack_48 = plVar4[3];
      FUN_10a07ff64(param_1,param_2,&lStack_48);
      func_0x00010988c170(plVar2 + 0x4b);
      return;
    }
    puVar5 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a644c1c);
  (*pcVar1)();
}



/* Entry: 10a644c30; end: 10a644ceb;  */

void FUN_10a644c30(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f66a18f,0xc);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a644cec);
  (*pcVar4)();
}



/* Entry: 10a644cec; end: 10a644de7;  */

undefined1  [16] FUN_10a644cec(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bffb70;
  puVar1 = &UNK_10f667746;
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
    ppuStack_40 = &PTR_DAT_110bffb70;
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



/* Entry: 10a644de8; end: 10a644e3b;  */

ulong FUN_10a644de8(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a644e3c,0);
  }
  return param_1;
}



/* Entry: 10a644e3c; end: 10a644f53;  */

void FUN_10a644e3c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  long lStack_48;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar2[0x59] < 8) {
    plVar2[plVar2[0x59] + 0x4e] = plVar2[0x5a];
    plVar2[0x59] = plVar2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar2 + 0x4b);
  }
  plVar3 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar3 == (long *)0x0) {
    puVar5 = &UNK_10f68f52e;
  }
  else {
    plVar4 = param_2;
    FUN_10a052c2c(param_2,plVar3);
    if ((plVar4 != (long *)0x0) && (___dynamic_cast(), plVar4 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      lStack_48 = plVar4[3];
      FUN_10a07ff64(param_1,param_2,&lStack_48);
      func_0x00010988c170(plVar2 + 0x4b);
      return;
    }
    puVar5 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a644f40);
  (*pcVar1)();
}



/* Entry: 10a644f54; end: 10a64500f;  */

void FUN_10a644f54(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f66a19c,0x12);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a645010);
  (*pcVar4)();
}



/* Entry: 10a645010; end: 10a64510b;  */

undefined1  [16] FUN_10a645010(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bffb88;
  puVar1 = &UNK_10f667746;
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
    ppuStack_40 = &PTR_DAT_110bffb88;
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



/* Entry: 10a64510c; end: 10a64515f;  */

ulong FUN_10a64510c(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a645160,0);
  }
  return param_1;
}



/* Entry: 10a645160; end: 10a645277;  */

void FUN_10a645160(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  long lStack_48;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar2[0x59] < 8) {
    plVar2[plVar2[0x59] + 0x4e] = plVar2[0x5a];
    plVar2[0x59] = plVar2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar2 + 0x4b);
  }
  plVar3 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar3 == (long *)0x0) {
    puVar5 = &UNK_10f68f52e;
  }
  else {
    plVar4 = param_2;
    FUN_10a052c2c(param_2,plVar3);
    if ((plVar4 != (long *)0x0) && (___dynamic_cast(), plVar4 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      lStack_48 = plVar4[3];
      FUN_10a07ff64(param_1,param_2,&lStack_48);
      func_0x00010988c170(plVar2 + 0x4b);
      return;
    }
    puVar5 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a645264);
  (*pcVar1)();
}


