/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1087e15ec; end: 1087e1793;  */

void FUN_1087e15ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long ****pppplVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  code *pcVar12;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long ***ppplVar13;
  long ***ppplVar14;
  long **pplVar15;
  long lVar16;
  ulong uVar17;
  long ***ppplVar18;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long **pplVar19;
  long **pplVar20;
  int extraout_w11;
  long ***ppplVar21;
  long ***ppplVar22;
  ulong uVar23;
  long ***ppplVar24;
  uint uVar25;
  long ***ppplVar26;
  long ***unaff_x26;
  float fVar27;
  float fVar28;
  undefined1 auStack_878 [16];
  undefined1 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  long **pplStack_840;
  long **pplStack_838;
  long **pplStack_828;
  long **pplStack_820;
  long **pplStack_818;
  long lStack_808;
  long **pplStack_800;
  long ***ppplStack_7f8;
  long ***ppplStack_7f0;
  undefined8 uStack_7e8;
  undefined1 auStack_7e0 [24];
  long *aplStack_7c8 [49];
  long **pplStack_640;
  long **pplStack_638;
  long ***ppplStack_630;
  undefined1 auStack_628 [24];
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined1 auStack_5f8 [432];
  long lStack_448;
  long ***ppplStack_440;
  undefined1 uStack_438;
  long **pplStack_430;
  long **pplStack_428;
  long **pplStack_420;
  long **pplStack_418;
  undefined8 uStack_228;
  undefined8 auStack_218 [3];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_48;
  
  lVar16 = param_1;
  func_0x000107c33638();
  lVar16 = *(long *)(lVar16 + 0x18);
  uStack_48 = extraout_x8;
  FUN_10869f7b0(&uStack_200,lVar16 + 0x28,lVar16 + 0x10,lVar16 + 0x58);
  plVar5 = *(long **)(*(long *)(param_1 + 0x18) + 0x178);
  auStack_218[0] = uStack_b0;
  (**(code **)(*plVar5 + 0x18))(plVar5,auStack_218,uStack_b4);
  FUN_1087e906c(auStack_218,*(undefined8 *)(param_1 + 0x30),param_3,param_4,param_5);
  puVar7 = &uStack_200;
  puVar11 = auStack_218;
  FUN_1087e1794(param_1);
  FUN_1087e2704(auStack_218);
  puVar6 = &uStack_200;
  func_0x0001087e27bc();
  while( true ) {
    func_0x000107c33630(uStack_48);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    puVar10 = puVar7;
    FUN_1087e2704(auStack_218);
    func_0x0001087e27bc(&uStack_200);
    in_ZR = (int)puVar7 == 1;
    if (!(bool)in_ZR) break;
    func_0x0001087e8964();
    lVar16 = *(long *)(param_1 + 0x18);
    uStack_1f8 = param_5[1];
    uStack_200 = *param_5;
    if (param_5[1] != 0) {
      do {
        func_0x000107c33654();
        lVar16 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    uStack_1f0 = 1;
    puVar7 = (undefined8 *)(lVar16 + 0x158);
    puVar11 = (undefined8 *)(lVar16 + 0x28);
    FUN_1087e1e0c(lVar16 + 0xa8);
    puVar6 = &uStack_200;
    FUN_1086ccd68();
    ___cxa_end_catch();
  }
  func_0x0001087e8f80();
  func_0x000104bd46a0();
  pcVar12 = FUN_1087e1794;
  func_0x000107c33674();
  puVar7 = puVar6;
  puStack_1d0 = &stack0xfffffffffffffff0;
  pcStack_1c8 = pcVar12;
  func_0x000107c33638();
  pplStack_430 = (long **)puVar7[1];
  ppplVar24 = (long ***)puVar7[2];
  if ((ppplVar24 == (long ***)0x0) ||
     (uStack_228 = extraout_x8_01, __ZNSt3__119__shared_weak_count4lockEv(),
     pplStack_428 = (long **)ppplVar24, ppplVar24 == (long ***)0x0)) {
    func_0x00010527822c();
  }
  else {
    uVar4 = puVar6[9] == -1;
    if (!(bool)uVar4) {
      ppplStack_630 = &pplStack_430;
      ppplStack_7f8 = (long ***)&ppplStack_630;
      __ZNSt3__111__call_onceERVmPvPFvS2_E(puVar6 + 9,&ppplStack_7f8,FUN_1087e66e4);
    }
    func_0x000107c29a44(&pplStack_430);
    ppplVar24 = (long ***)puVar6[5];
    FUN_1087e2904(auStack_7e0,puVar10);
    uStack_858 = puVar11[1];
    uStack_860 = *puVar11;
    uStack_850 = puVar11[2];
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = 0;
    auStack_878[0] = 0;
    uStack_868 = 0;
    if ((*(byte *)((long)ppplVar24 + 0x44) & 1) == 0) {
      ppplVar18 = ppplVar24 + 3;
      FUN_1087e64e4(ppplVar18,aplStack_7c8);
      if (ppplVar18 == (long ***)0x0) {
        func_0x000107c289cc(&lStack_808);
        pplStack_818 = pplStack_638;
        pplStack_820 = pplStack_640;
        if ((long ***)pplStack_638 != (long ***)0x0) {
          do {
            func_0x000107c33634();
          } while (extraout_w10 != 0);
        }
        plVar5 = (*ppplVar24)[2];
        ppplStack_630 = ppplVar24;
        FUN_1087e70c8(auStack_628,auStack_878);
        uStack_608 = uStack_858;
        uStack_610 = uStack_860;
        uStack_600 = uStack_850;
        uStack_858 = 0;
        uStack_850 = 0;
        uStack_860 = 0;
        FUN_1087e2904(auStack_5f8,auStack_7e0);
        lStack_448 = lStack_808;
        if (lStack_808 != 0) {
          do {
            func_0x0001087e8700();
          } while (extraout_w10_00 != 0);
        }
        uStack_438 = 0;
        *(int *)(ppplVar24 + 8) = *(int *)(ppplVar24 + 8) + 1;
        ppplStack_440 = ppplVar24;
        FUN_1087e7030(&pplStack_430,&ppplStack_630);
        FUN_1087e6740(&pplStack_828,&pplStack_430,plVar5);
        FUN_1087e713c(&pplStack_430);
        FUN_1087e713c(&ppplStack_630);
        pplStack_838 = pplStack_818;
        pplStack_840 = pplStack_820;
        if ((long ***)pplStack_818 != (long ***)0x0) {
          do {
            func_0x000107c33634();
          } while (extraout_w10_01 != 0);
        }
        pplStack_430 = pplStack_800;
        if ((long ***)pplStack_800 != (long ***)0x0) {
          ppplVar18 = (long ***)(pplStack_800 + 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppplVar18,0x10);
            if (bVar2) {
              *ppplVar18 = *ppplVar18 + 0x40000000;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pplStack_428 = pplStack_828;
        if ((long ***)pplStack_828 != (long ***)0x0) {
          do {
            func_0x0001087e8700();
          } while (extraout_w10_02 != 0);
        }
        pplStack_418 = pplStack_838;
        pplStack_420 = pplStack_840;
        pplStack_840 = (long **)0x0;
        pplStack_838 = (long **)0x0;
        ppplVar18 = (long ***)aplStack_7c8;
        FUN_108848654();
        ppplVar26 = (long ***)ppplVar24[4];
        if (ppplVar26 != (long ***)0x0) {
          uVar23 = (long)ppplVar26 - 1;
          uVar25 = (uint)ppplVar26;
          if (((ulong)ppplVar26 & uVar23) == 0) {
            unaff_x26 = (long ***)((ulong)(uVar25 - 1) & (ulong)ppplVar18);
          }
          else {
            unaff_x26 = ppplVar18;
            if (ppplVar26 <= ppplVar18) {
              uVar3 = 0;
              if (uVar25 != 0) {
                uVar3 = (uint)ppplVar18 / uVar25;
              }
              unaff_x26 = (long ***)(ulong)((uint)ppplVar18 - uVar3 * uVar25);
            }
          }
          plVar5 = ppplVar24[3][(long)unaff_x26];
          if (plVar5 != (long *)0x0) {
            do {
              while( true ) {
                plVar5 = (long *)*plVar5;
                if (plVar5 == (long *)0x0) goto LAB_1087e1a20;
                ppplVar13 = (long ***)plVar5[1];
                uVar4 = ppplVar13 == ppplVar18;
                if (!(bool)uVar4) break;
                plVar8 = plVar5 + 2;
                func_0x000107c28078(plVar8,aplStack_7c8);
                if (((ulong)plVar8 & 1) != 0) goto LAB_1087e1cf4;
              }
              if (((ulong)ppplVar26 & uVar23) == 0) {
                ppplVar13 = (long ***)((ulong)ppplVar13 & uVar23);
              }
              else if (ppplVar26 <= ppplVar13) {
                uVar17 = 0;
                if (ppplVar26 != (long ***)0x0) {
                  uVar17 = (ulong)ppplVar13 / (ulong)ppplVar26;
                }
                ppplVar13 = (long ***)((long)ppplVar13 - uVar17 * (long)ppplVar26);
              }
            } while (ppplVar13 == unaff_x26);
          }
        }
LAB_1087e1a20:
        pppplVar9 = (long ****)0x48;
        __Znwm();
        ppplVar13 = ppplVar24 + 5;
        uStack_7e8 = 0;
        *pppplVar9 = (long ***)0x0;
        pppplVar9[1] = ppplVar18;
        ppplStack_7f8 = (long ***)pppplVar9;
        ppplStack_7f0 = ppplVar13;
        func_0x000107c27994(pppplVar9 + 2,aplStack_7c8);
        pppplVar9[6] = (long ***)pplStack_428;
        pppplVar9[5] = (long ***)pplStack_430;
        pplStack_428 = (long **)0x0;
        pplStack_430 = (long **)0x0;
        pppplVar9[8] = (long ***)pplStack_418;
        pppplVar9[7] = (long ***)pplStack_420;
        pplStack_418 = (long **)0x0;
        pplStack_420 = (long **)0x0;
        uStack_7e8 = CONCAT71(uStack_7e8._1_7_,1);
        fVar27 = (float)((long)ppplVar24[6] + 1);
        if ((ppplVar26 == (long ***)0x0) ||
           (fVar28 = *(float *)(ppplVar24 + 7) * (float)ppplVar26, uVar4 = fVar28 == fVar27,
           fVar28 < fVar27)) {
          uVar23 = 1;
          if ((long ***)0x2 < ppplVar26) {
            uVar23 = (ulong)(((ulong)ppplVar26 & (long)ppplVar26 - 1U) != 0);
          }
          ppplVar14 = (long ***)(uVar23 | (long)ppplVar26 << 1);
          ppplVar26 = (long ***)(long)(fVar27 / *(float *)(ppplVar24 + 7));
          if (ppplVar14 <= ppplVar26) {
            ppplVar14 = ppplVar26;
          }
          if ((long)ppplVar14 - 1U == 0) {
            ppplVar14 = (long ***)0x2;
          }
          else if (((ulong)ppplVar14 & (long)ppplVar14 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          ppplVar26 = (long ***)ppplVar24[4];
          if (ppplVar26 < ppplVar14) {
LAB_1087e1aec:
            if ((ulong)ppplVar14 >> 0x3d != 0) goto LAB_1087e1d54;
            lVar16 = (long)ppplVar14 << 3;
            __Znwm(lVar16);
            FUN_1087e71a8(ppplVar24 + 3,lVar16);
            ppplVar24[4] = (long **)ppplVar14;
            pplVar15 = ppplVar24[3];
            for (ppplVar26 = (long ***)0x0; ppplVar14 != ppplVar26;
                ppplVar26 = (long ***)((long)ppplVar26 + 1)) {
              pplVar15[(long)ppplVar26] = (long *)0x0;
            }
            pplVar19 = *ppplVar13;
            ppplVar26 = ppplVar14;
            if (pplVar19 != (long **)0x0) {
              ppplVar21 = (long ***)pplVar19[1];
              uVar17 = (long)ppplVar14 - 1;
              uVar23 = 0;
              if (ppplVar14 != (long ***)0x0) {
                uVar23 = (ulong)ppplVar21 / (ulong)ppplVar14;
              }
              ppplVar22 = ppplVar21;
              if (ppplVar14 <= ppplVar21) {
                ppplVar22 = (long ***)((long)ppplVar21 - uVar23 * (long)ppplVar14);
              }
              if (((ulong)ppplVar14 & uVar17) == 0) {
                ppplVar22 = (long ***)((ulong)ppplVar21 & uVar17);
              }
              pplVar15[(long)ppplVar22] = (long *)ppplVar13;
              while (pplVar20 = pplVar19, pplVar19 = (long **)*pplVar20, pplVar19 != (long **)0x0) {
                ppplVar21 = (long ***)pplVar19[1];
                if (((ulong)ppplVar14 & uVar17) == 0) {
                  ppplVar21 = (long ***)((ulong)ppplVar21 & uVar17);
                }
                else if (ppplVar14 <= ppplVar21) {
                  uVar23 = 0;
                  if (ppplVar14 != (long ***)0x0) {
                    uVar23 = (ulong)ppplVar21 / (ulong)ppplVar14;
                  }
                  ppplVar21 = (long ***)((long)ppplVar21 - uVar23 * (long)ppplVar14);
                }
                if (ppplVar21 != ppplVar22) {
                  if (pplVar15[(long)ppplVar21] == (long *)0x0) {
                    pplVar15[(long)ppplVar21] = (long *)pplVar20;
                    ppplVar22 = ppplVar21;
                  }
                  else {
                    *pplVar20 = *pplVar19;
                    *pplVar19 = (long *)*pplVar15[(long)ppplVar21];
                    *pplVar15[(long)ppplVar21] = (long)pplVar19;
                    pplVar19 = pplVar20;
                  }
                }
              }
            }
          }
          else if (ppplVar14 < ppplVar26) {
            ppplVar21 = (long ***)(long)((float)ppplVar24[6] / *(float *)(ppplVar24 + 7));
            if ((ppplVar26 < (long ***)0x3) || (((ulong)ppplVar26 & (long)ppplVar26 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((long ***)0x1 < ppplVar21) {
              ppplVar21 = (long ***)(1L << (-LZCOUNT((long)ppplVar21 + -1) & 0x3fU));
            }
            if (ppplVar14 <= ppplVar21) {
              ppplVar14 = ppplVar21;
            }
            if (ppplVar14 < ppplVar26) {
              if (ppplVar14 != (long ***)0x0) goto LAB_1087e1aec;
              FUN_1087e71a8(ppplVar24 + 3,0);
              ppplVar24[4] = (long **)0x0;
              ppplVar26 = (long ***)0x0;
            }
            else {
              ppplVar26 = (long ***)ppplVar24[4];
            }
          }
          if (((ulong)ppplVar26 & (long)ppplVar26 - 1U) == 0) {
            uVar4 = true;
            unaff_x26 = (long ***)((ulong)((int)ppplVar26 - 1) & (ulong)ppplVar18);
          }
          else {
            uVar4 = ppplVar18 == ppplVar26;
            unaff_x26 = ppplVar18;
            if (ppplVar26 <= ppplVar18) {
              uVar23 = 0;
              if (ppplVar26 != (long ***)0x0) {
                uVar23 = (ulong)ppplVar18 / (ulong)ppplVar26;
              }
              unaff_x26 = (long ***)((long)ppplVar18 - uVar23 * (long)ppplVar26);
            }
          }
        }
        pplVar15 = ppplVar24[3];
        plVar5 = pplVar15[(long)unaff_x26];
        if (plVar5 == (long *)0x0) {
          *pppplVar9 = (long ***)*ppplVar13;
          *ppplVar13 = (long **)pppplVar9;
          pplVar15[(long)unaff_x26] = (long *)ppplVar13;
          if (*pppplVar9 != (long ***)0x0) {
            ppplVar18 = (long ***)(*pppplVar9)[1];
            if (((ulong)ppplVar26 & (long)ppplVar26 - 1U) == 0) {
              ppplVar18 = (long ***)((ulong)ppplVar18 & (long)ppplVar26 - 1U);
              uVar4 = true;
            }
            else {
              uVar4 = ppplVar18 == ppplVar26;
              if (ppplVar26 <= ppplVar18) {
                uVar23 = 0;
                if (ppplVar26 != (long ***)0x0) {
                  uVar23 = (ulong)ppplVar18 / (ulong)ppplVar26;
                }
                ppplVar18 = (long ***)((long)ppplVar18 - uVar23 * (long)ppplVar26);
              }
            }
            pplVar15[(long)ppplVar18] = (long *)pppplVar9;
          }
        }
        else {
          *pppplVar9 = (long ***)*plVar5;
          *plVar5 = (long)pppplVar9;
        }
        ppplStack_7f8 = (long ***)0x0;
        ppplVar24[6] = (long **)((long)ppplVar24[6] + 1);
        FUN_1087e6fec(&ppplStack_7f8);
LAB_1087e1cf4:
        func_0x0001087e5ce0(&pplStack_430);
        func_0x000108794594(&pplStack_840);
        func_0x000107c27f9c(&pplStack_828);
        func_0x000108794594(&pplStack_820);
        func_0x000107c289dc(&lStack_808);
      }
    }
    FUN_1086ccd68(auStack_878);
    FUN_1087e2704(&uStack_860);
    func_0x0001087e27bc(auStack_7e0);
    func_0x000107c33630(uStack_228);
    if ((bool)uVar4) {
      return;
    }
  }
  ___stack_chk_fail();
LAB_1087e1d54:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x1087e1d5c);
  (*pcVar12)();
}



/* Entry: 1087e1794; end: 1087e1e0b;  */

void FUN_1087e1794(long param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 uVar5;
  long *plVar6;
  long ****pppplVar7;
  long lVar8;
  undefined8 extraout_x8;
  long ***ppplVar9;
  long ***ppplVar10;
  long **pplVar11;
  ulong uVar12;
  long ***ppplVar13;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long **pplVar14;
  long **pplVar15;
  long ***ppplVar16;
  long ***ppplVar17;
  long *plVar18;
  ulong uVar19;
  long ***ppplVar20;
  uint uVar21;
  long ***ppplVar22;
  long ***unaff_x26;
  float fVar23;
  float fVar24;
  undefined1 auStack_658 [16];
  undefined1 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  long **pplStack_620;
  long **pplStack_618;
  long **pplStack_608;
  long **pplStack_600;
  long **pplStack_5f8;
  long lStack_5e8;
  long **pplStack_5e0;
  long ***ppplStack_5d8;
  long ***ppplStack_5d0;
  undefined8 uStack_5c8;
  undefined1 auStack_5c0 [24];
  long *aplStack_5a8 [49];
  long **pplStack_420;
  long **pplStack_418;
  long ***ppplStack_410;
  undefined1 auStack_408 [24];
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 auStack_3d8 [432];
  long lStack_228;
  long ***ppplStack_220;
  undefined1 uStack_218;
  long **pplStack_210;
  long **pplStack_208;
  long **pplStack_200;
  long **pplStack_1f8;
  undefined8 uStack_8;
  
  func_0x000107c33674();
  lVar8 = param_1;
  func_0x000107c33638();
  pplStack_210 = *(long ***)(lVar8 + 8);
  ppplVar20 = *(long ****)(lVar8 + 0x10);
  if ((ppplVar20 == (long ***)0x0) ||
     (uStack_8 = extraout_x8, __ZNSt3__119__shared_weak_count4lockEv(),
     pplStack_208 = (long **)ppplVar20, ppplVar20 == (long ***)0x0)) {
    func_0x00010527822c();
  }
  else {
    uVar5 = *(long *)(param_1 + 0x48) == -1;
    if (!(bool)uVar5) {
      ppplStack_410 = &pplStack_210;
      ppplStack_5d8 = (long ***)&ppplStack_410;
      __ZNSt3__111__call_onceERVmPvPFvS2_E((long *)(param_1 + 0x48),&ppplStack_5d8,FUN_1087e66e4);
    }
    func_0x000107c29a44(&pplStack_210);
    ppplVar20 = *(long ****)(param_1 + 0x28);
    FUN_1087e2904(auStack_5c0,param_2);
    uStack_638 = param_3[1];
    uStack_640 = *param_3;
    uStack_630 = param_3[2];
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    auStack_658[0] = 0;
    uStack_648 = 0;
    if ((*(byte *)((long)ppplVar20 + 0x44) & 1) == 0) {
      ppplVar13 = ppplVar20 + 3;
      FUN_1087e64e4(ppplVar13,aplStack_5a8);
      if (ppplVar13 == (long ***)0x0) {
        func_0x000107c289cc(&lStack_5e8);
        pplStack_5f8 = pplStack_418;
        pplStack_600 = pplStack_420;
        if ((long ***)pplStack_418 != (long ***)0x0) {
          do {
            func_0x000107c33634();
          } while (extraout_w10 != 0);
        }
        plVar18 = (*ppplVar20)[2];
        ppplStack_410 = ppplVar20;
        FUN_1087e70c8(auStack_408,auStack_658);
        uStack_3e8 = uStack_638;
        uStack_3f0 = uStack_640;
        uStack_3e0 = uStack_630;
        uStack_638 = 0;
        uStack_630 = 0;
        uStack_640 = 0;
        FUN_1087e2904(auStack_3d8,auStack_5c0);
        lStack_228 = lStack_5e8;
        if (lStack_5e8 != 0) {
          do {
            func_0x0001087e8700();
          } while (extraout_w10_00 != 0);
        }
        uStack_218 = 0;
        *(int *)(ppplVar20 + 8) = *(int *)(ppplVar20 + 8) + 1;
        ppplStack_220 = ppplVar20;
        FUN_1087e7030(&pplStack_210,&ppplStack_410);
        FUN_1087e6740(&pplStack_608,&pplStack_210,plVar18);
        FUN_1087e713c(&pplStack_210);
        FUN_1087e713c(&ppplStack_410);
        pplStack_618 = pplStack_5f8;
        pplStack_620 = pplStack_600;
        if ((long ***)pplStack_5f8 != (long ***)0x0) {
          do {
            func_0x000107c33634();
          } while (extraout_w10_01 != 0);
        }
        pplStack_210 = pplStack_5e0;
        if ((long ***)pplStack_5e0 != (long ***)0x0) {
          ppplVar13 = (long ***)(pplStack_5e0 + 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppplVar13,0x10);
            if (bVar2) {
              *ppplVar13 = *ppplVar13 + 0x40000000;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pplStack_208 = pplStack_608;
        if ((long ***)pplStack_608 != (long ***)0x0) {
          do {
            func_0x0001087e8700();
          } while (extraout_w10_02 != 0);
        }
        pplStack_1f8 = pplStack_618;
        pplStack_200 = pplStack_620;
        pplStack_620 = (long **)0x0;
        pplStack_618 = (long **)0x0;
        ppplVar13 = (long ***)aplStack_5a8;
        FUN_108848654();
        ppplVar22 = (long ***)ppplVar20[4];
        if (ppplVar22 != (long ***)0x0) {
          uVar19 = (long)ppplVar22 - 1;
          uVar21 = (uint)ppplVar22;
          if (((ulong)ppplVar22 & uVar19) == 0) {
            unaff_x26 = (long ***)((ulong)(uVar21 - 1) & (ulong)ppplVar13);
          }
          else {
            unaff_x26 = ppplVar13;
            if (ppplVar22 <= ppplVar13) {
              uVar3 = 0;
              if (uVar21 != 0) {
                uVar3 = (uint)ppplVar13 / uVar21;
              }
              unaff_x26 = (long ***)(ulong)((uint)ppplVar13 - uVar3 * uVar21);
            }
          }
          plVar18 = ppplVar20[3][(long)unaff_x26];
          if (plVar18 != (long *)0x0) {
            do {
              while( true ) {
                plVar18 = (long *)*plVar18;
                if (plVar18 == (long *)0x0) goto LAB_1087e1a20;
                ppplVar9 = (long ***)plVar18[1];
                uVar5 = ppplVar9 == ppplVar13;
                if (!(bool)uVar5) break;
                plVar6 = plVar18 + 2;
                func_0x000107c28078(plVar6,aplStack_5a8);
                if (((ulong)plVar6 & 1) != 0) goto LAB_1087e1cf4;
              }
              if (((ulong)ppplVar22 & uVar19) == 0) {
                ppplVar9 = (long ***)((ulong)ppplVar9 & uVar19);
              }
              else if (ppplVar22 <= ppplVar9) {
                uVar12 = 0;
                if (ppplVar22 != (long ***)0x0) {
                  uVar12 = (ulong)ppplVar9 / (ulong)ppplVar22;
                }
                ppplVar9 = (long ***)((long)ppplVar9 - uVar12 * (long)ppplVar22);
              }
            } while (ppplVar9 == unaff_x26);
          }
        }
LAB_1087e1a20:
        pppplVar7 = (long ****)0x48;
        __Znwm();
        ppplVar9 = ppplVar20 + 5;
        uStack_5c8 = 0;
        *pppplVar7 = (long ***)0x0;
        pppplVar7[1] = ppplVar13;
        ppplStack_5d8 = (long ***)pppplVar7;
        ppplStack_5d0 = ppplVar9;
        func_0x000107c27994(pppplVar7 + 2,aplStack_5a8);
        pppplVar7[6] = (long ***)pplStack_208;
        pppplVar7[5] = (long ***)pplStack_210;
        pplStack_208 = (long **)0x0;
        pplStack_210 = (long **)0x0;
        pppplVar7[8] = (long ***)pplStack_1f8;
        pppplVar7[7] = (long ***)pplStack_200;
        pplStack_1f8 = (long **)0x0;
        pplStack_200 = (long **)0x0;
        uStack_5c8 = CONCAT71(uStack_5c8._1_7_,1);
        fVar23 = (float)((long)ppplVar20[6] + 1);
        if ((ppplVar22 == (long ***)0x0) ||
           (fVar24 = *(float *)(ppplVar20 + 7) * (float)ppplVar22, uVar5 = fVar24 == fVar23,
           fVar24 < fVar23)) {
          uVar19 = 1;
          if ((long ***)0x2 < ppplVar22) {
            uVar19 = (ulong)(((ulong)ppplVar22 & (long)ppplVar22 - 1U) != 0);
          }
          ppplVar10 = (long ***)(uVar19 | (long)ppplVar22 << 1);
          ppplVar22 = (long ***)(long)(fVar23 / *(float *)(ppplVar20 + 7));
          if (ppplVar10 <= ppplVar22) {
            ppplVar10 = ppplVar22;
          }
          if ((long)ppplVar10 - 1U == 0) {
            ppplVar10 = (long ***)0x2;
          }
          else if (((ulong)ppplVar10 & (long)ppplVar10 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          ppplVar22 = (long ***)ppplVar20[4];
          if (ppplVar22 < ppplVar10) {
LAB_1087e1aec:
            if ((ulong)ppplVar10 >> 0x3d != 0) goto LAB_1087e1d54;
            lVar8 = (long)ppplVar10 << 3;
            __Znwm(lVar8);
            FUN_1087e71a8(ppplVar20 + 3,lVar8);
            ppplVar20[4] = (long **)ppplVar10;
            pplVar11 = ppplVar20[3];
            for (ppplVar22 = (long ***)0x0; ppplVar10 != ppplVar22;
                ppplVar22 = (long ***)((long)ppplVar22 + 1)) {
              pplVar11[(long)ppplVar22] = (long *)0x0;
            }
            pplVar14 = *ppplVar9;
            ppplVar22 = ppplVar10;
            if (pplVar14 != (long **)0x0) {
              ppplVar16 = (long ***)pplVar14[1];
              uVar12 = (long)ppplVar10 - 1;
              uVar19 = 0;
              if (ppplVar10 != (long ***)0x0) {
                uVar19 = (ulong)ppplVar16 / (ulong)ppplVar10;
              }
              ppplVar17 = ppplVar16;
              if (ppplVar10 <= ppplVar16) {
                ppplVar17 = (long ***)((long)ppplVar16 - uVar19 * (long)ppplVar10);
              }
              if (((ulong)ppplVar10 & uVar12) == 0) {
                ppplVar17 = (long ***)((ulong)ppplVar16 & uVar12);
              }
              pplVar11[(long)ppplVar17] = (long *)ppplVar9;
              while (pplVar15 = pplVar14, pplVar14 = (long **)*pplVar15, pplVar14 != (long **)0x0) {
                ppplVar16 = (long ***)pplVar14[1];
                if (((ulong)ppplVar10 & uVar12) == 0) {
                  ppplVar16 = (long ***)((ulong)ppplVar16 & uVar12);
                }
                else if (ppplVar10 <= ppplVar16) {
                  uVar19 = 0;
                  if (ppplVar10 != (long ***)0x0) {
                    uVar19 = (ulong)ppplVar16 / (ulong)ppplVar10;
                  }
                  ppplVar16 = (long ***)((long)ppplVar16 - uVar19 * (long)ppplVar10);
                }
                if (ppplVar16 != ppplVar17) {
                  if (pplVar11[(long)ppplVar16] == (long *)0x0) {
                    pplVar11[(long)ppplVar16] = (long *)pplVar15;
                    ppplVar17 = ppplVar16;
                  }
                  else {
                    *pplVar15 = *pplVar14;
                    *pplVar14 = (long *)*pplVar11[(long)ppplVar16];
                    *pplVar11[(long)ppplVar16] = (long)pplVar14;
                    pplVar14 = pplVar15;
                  }
                }
              }
            }
          }
          else if (ppplVar10 < ppplVar22) {
            ppplVar16 = (long ***)(long)((float)ppplVar20[6] / *(float *)(ppplVar20 + 7));
            if ((ppplVar22 < (long ***)0x3) || (((ulong)ppplVar22 & (long)ppplVar22 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((long ***)0x1 < ppplVar16) {
              ppplVar16 = (long ***)(1L << (-LZCOUNT((long)ppplVar16 + -1) & 0x3fU));
            }
            if (ppplVar10 <= ppplVar16) {
              ppplVar10 = ppplVar16;
            }
            if (ppplVar10 < ppplVar22) {
              if (ppplVar10 != (long ***)0x0) goto LAB_1087e1aec;
              FUN_1087e71a8(ppplVar20 + 3,0);
              ppplVar20[4] = (long **)0x0;
              ppplVar22 = (long ***)0x0;
            }
            else {
              ppplVar22 = (long ***)ppplVar20[4];
            }
          }
          if (((ulong)ppplVar22 & (long)ppplVar22 - 1U) == 0) {
            uVar5 = true;
            unaff_x26 = (long ***)((ulong)((int)ppplVar22 - 1) & (ulong)ppplVar13);
          }
          else {
            uVar5 = ppplVar13 == ppplVar22;
            unaff_x26 = ppplVar13;
            if (ppplVar22 <= ppplVar13) {
              uVar19 = 0;
              if (ppplVar22 != (long ***)0x0) {
                uVar19 = (ulong)ppplVar13 / (ulong)ppplVar22;
              }
              unaff_x26 = (long ***)((long)ppplVar13 - uVar19 * (long)ppplVar22);
            }
          }
        }
        pplVar11 = ppplVar20[3];
        plVar18 = pplVar11[(long)unaff_x26];
        if (plVar18 == (long *)0x0) {
          *pppplVar7 = (long ***)*ppplVar9;
          *ppplVar9 = (long **)pppplVar7;
          pplVar11[(long)unaff_x26] = (long *)ppplVar9;
          if (*pppplVar7 != (long ***)0x0) {
            ppplVar13 = (long ***)(*pppplVar7)[1];
            if (((ulong)ppplVar22 & (long)ppplVar22 - 1U) == 0) {
              ppplVar13 = (long ***)((ulong)ppplVar13 & (long)ppplVar22 - 1U);
              uVar5 = true;
            }
            else {
              uVar5 = ppplVar13 == ppplVar22;
              if (ppplVar22 <= ppplVar13) {
                uVar19 = 0;
                if (ppplVar22 != (long ***)0x0) {
                  uVar19 = (ulong)ppplVar13 / (ulong)ppplVar22;
                }
                ppplVar13 = (long ***)((long)ppplVar13 - uVar19 * (long)ppplVar22);
              }
            }
            pplVar11[(long)ppplVar13] = (long *)pppplVar7;
          }
        }
        else {
          *pppplVar7 = (long ***)*plVar18;
          *plVar18 = (long)pppplVar7;
        }
        ppplStack_5d8 = (long ***)0x0;
        ppplVar20[6] = (long **)((long)ppplVar20[6] + 1);
        FUN_1087e6fec(&ppplStack_5d8);
LAB_1087e1cf4:
        func_0x0001087e5ce0(&pplStack_210);
        func_0x000108794594(&pplStack_620);
        func_0x000107c27f9c(&pplStack_608);
        func_0x000108794594(&pplStack_600);
        func_0x000107c289dc(&lStack_5e8);
      }
    }
    FUN_1086ccd68(auStack_658);
    FUN_1087e2704(&uStack_640);
    func_0x0001087e27bc(auStack_5c0);
    func_0x000107c33630(uStack_8);
    if ((bool)uVar5) {
      return;
    }
  }
  ___stack_chk_fail();
LAB_1087e1d54:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1087e1d5c);
  (*pcVar4)();
}



/* Entry: 1087e1e0c; end: 1087e1ebf;  */

void FUN_1087e1e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_78 [24];
  
  lVar2 = param_4;
  func_0x000108848514(param_4);
  uVar1 = *(undefined1 *)(param_4 + 8);
  lVar3 = lVar2;
  func_0x0001087e8798();
  func_0x000107c278b8(auStack_78,lVar3);
  FUN_1087e5ec8(param_1,param_2,param_3,param_5,0xa0044,param_6,lVar2,2,uVar1,auStack_78,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  return;
}



/* Entry: 1087e1ec0; end: 1087e1edf;  */

bool FUN_1087e1ec0(long param_1)

{
  param_1 = param_1 + 0x18;
  FUN_1087e64e4(param_1);
  return param_1 != 0;
}



/* Entry: 1087e1ee0; end: 1087e1f5f;  */

void FUN_1087e1ee0(long param_1)

{
  code *extraout_x8;
  undefined1 auStack_778 [904];
  undefined1 uStack_3f0;
  undefined1 auStack_3e8 [24];
  undefined1 auStack_3d0 [944];
  
  func_0x000107c27994(auStack_3e8);
  auStack_778[0] = 0;
  uStack_3f0 = 0;
  FUN_10864094c(auStack_3d0,auStack_3e8,1,auStack_778);
  func_0x00010863f788(auStack_778);
  func_0x000107c27914(auStack_3e8);
  func_0x0001087e885c(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x98));
  (*extraout_x8)();
  FUN_108798a4c(auStack_3d0);
  return;
}



/* Entry: 1087e1f60; end: 1087e1f7b;  */

void FUN_1087e1f60(void)

{
  undefined1 uStack_11;
  
  FUN_1087e65b4(&uStack_11);
  return;
}



/* Entry: 1087e1f7c; end: 1087e25a7;  */

void FUN_1087e1f7c(long param_1)

{
  ulong uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  code *pcVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  undefined1 **ppuVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined8 extraout_x8;
  ulong uVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 *puVar22;
  undefined8 uVar23;
  undefined1 **ppuStack_7e0;
  undefined8 uStack_7d8;
  long lStack_7d0;
  undefined1 auStack_7c8 [224];
  byte bStack_6e8;
  undefined1 *puStack_6c8;
  undefined1 *puStack_6c0;
  undefined1 *puStack_6b8;
  undefined1 auStack_6b0 [240];
  undefined1 auStack_5c0 [240];
  undefined8 uStack_4d0;
  undefined1 auStack_4c8 [224];
  undefined1 uStack_3e8;
  undefined1 auStack_3e0 [240];
  long alStack_2f0 [29];
  byte bStack_208;
  undefined1 **ppuStack_200;
  ulong uStack_1f8;
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [8];
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [216];
  char cStack_d0;
  undefined8 uStack_10;
  
  func_0x000107c33674();
  lVar16 = param_1;
  func_0x000107c33638();
  uStack_10 = extraout_x8;
  FUN_108864fa0(auStack_1c0,*(undefined8 *)(*(long *)(lVar16 + 0x18) + 0x38));
  uStack_4d0 = 0;
  auStack_4c8[0] = 0;
  uStack_3e8 = 0;
  if (cStack_d0 == '\0') {
    uVar19 = 0;
  }
  else {
    func_0x0001087e6080(auStack_4c8,auStack_1b0);
    func_0x0001087e605c(auStack_1b0);
    uVar19 = uStack_4d0;
  }
  uStack_4d0 = uStack_1b8;
  uStack_1b8 = uVar19;
  FUN_1087e6154(auStack_3e0,&uStack_4d0);
  _bzero(auStack_6b0,0xf0);
  FUN_1087e6154(auStack_5c0,auStack_6b0);
  puStack_6c0 = (undefined1 *)0x0;
  puStack_6b8 = (undefined1 *)0x0;
  puStack_6c8 = (undefined1 *)0x0;
  FUN_1087e6404(&lStack_7d0,auStack_3e0);
  puVar14 = auStack_5c0;
  FUN_1087e6404(alStack_2f0);
  ppuStack_200 = &puStack_6c8;
  uStack_1f8 = uStack_1f8 & 0xffffffffffffff00;
  do {
    if ((((bStack_6e8 & 1) == 0) && ((bStack_208 & 1) == 0)) || (lStack_7d0 == alStack_2f0[0])) {
      uStack_1f8 = CONCAT71(uStack_1f8._1_7_,1);
      FUN_1087e63d8(&ppuStack_200);
      func_0x0001087e88e8(alStack_2f0);
      FUN_1087e6134(auStack_7c8);
      func_0x0001087e88e8(auStack_5c0);
      func_0x0001087e88e8(auStack_6b0);
      func_0x0001087e88e8(auStack_3e0);
      func_0x0001087e88e8(&uStack_4d0);
      FUN_1087e5fe8(auStack_1c0);
      puVar18 = puStack_6c8 + 0xe0;
      puVar11 = puStack_6c8;
      while (puVar11 != puStack_6c0) {
        iVar13 = (int)*(undefined8 *)(param_1 + 0x28);
        puVar14 = puVar11 + 0x88;
        FUN_1087e1ec0();
        puVar22 = puStack_6c0;
        puVar8 = puVar11;
        puVar17 = puVar18;
        if (iVar13 == 0) {
          puVar11 = puVar11 + 0xe0;
          puVar18 = puVar18 + 0xe0;
        }
        else {
          for (; puVar14 = puVar8, puVar17 != puVar22; puVar17 = puVar17 + 0xe0) {
            func_0x0001087e2854(puVar14,puVar17);
            puVar8 = puVar14 + 0xe0;
          }
          func_0x0001087e27e8(&puStack_6c8);
        }
      }
      func_0x000107c29ee4(auStack_3e0,*(long *)(param_1 + 0x18) + 0x10);
      puVar11 = puStack_6c0;
      puVar18 = puStack_6c8;
      while( true ) {
        iVar13 = (int)puVar14;
        uVar10 = puVar18 == puVar11;
        if ((bool)uVar10) break;
        FUN_10865ecd8(&uStack_4d0,auStack_3e0);
        func_0x000107c27994(auStack_5c0,puVar18);
        func_0x00010869fbb8(alStack_2f0,puVar18 + 0x28);
        FUN_10867be90(auStack_6b0,puVar18 + 0xa0);
        func_0x0001087e8ef0(&lStack_7d0,&uStack_4d0,auStack_5c0,alStack_2f0,auStack_6b0);
        func_0x000104bee630(auStack_6b0);
        FUN_1088f9cb4(alStack_2f0);
        func_0x000107c27914(auStack_5c0);
        func_0x000107c2a2e0(&uStack_4d0);
        lVar16 = *(long *)(param_1 + 0x18);
        func_0x000107c27994(auStack_1d8,puVar18 + 0x88);
        uVar19 = *(undefined8 *)(puVar18 + 0xb8);
        uVar21 = *(undefined8 *)(puVar18 + 0xd0);
        uVar5 = *(undefined4 *)(puVar18 + 200);
        uVar23 = *(undefined8 *)(puVar18 + 0x80);
        uVar6 = *(undefined4 *)(puVar18 + 0xc0);
        uVar3 = *(undefined4 *)(puVar18 + 0xd8);
        uVar4 = *(undefined4 *)(puVar18 + 0xdc);
        func_0x00010869fb90();
        FUN_1086abd4c(auStack_1c0,lVar16 + 0x28,auStack_1d8,uVar19,uVar21,uVar5,uVar23,uVar3,uVar6,
                      uVar4,3);
        func_0x000107c27914(auStack_1d8);
        FUN_1087e1ee0(param_1,auStack_1a8);
        uVar19 = *(undefined8 *)(param_1 + 0x30);
        FUN_1087e1f60(&ppuStack_7e0);
        uStack_1f8 = uStack_7d8;
        ppuStack_200 = ppuStack_7e0;
        ppuStack_7e0 = (undefined1 **)0x0;
        uStack_7d8 = 0;
        FUN_1087e906c(auStack_1f0,uVar19,puVar18 + 0x28,puVar18 + 0xa0,&ppuStack_200);
        func_0x000104be3970(&ppuStack_200);
        FUN_1087e66c0(&ppuStack_7e0);
        puVar14 = auStack_1c0;
        FUN_1087e1794(param_1,puVar14,auStack_1f0);
        FUN_1087e2704(auStack_1f0);
        func_0x0001087e27bc(auStack_1c0);
        FUN_1086a7738(&lStack_7d0);
        puVar18 = puVar18 + 0xe0;
      }
      func_0x000107c2a2e0(auStack_3e0);
      ppuVar12 = &puStack_6c8;
      func_0x0001087e28b0(ppuVar12);
      func_0x000107c33630(uStack_10);
      if ((bool)uVar10) {
        return;
      }
      ___stack_chk_fail();
      if (iVar13 == 0) goto LAB_1087e259c;
      func_0x000104bd46a0(ppuVar12);
      do {
        func_0x0001087e28b0(&puStack_6c8);
LAB_1087e259c:
        func_0x0001087e8808();
      } while( true );
    }
    if ((bStack_6e8 & 1) == 0) {
      uVar19 = *(undefined8 *)(lStack_7d0 + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_1f0,lStack_7d0 + 0x58);
      func_0x000107c27f54(auStack_1d8,&UNK_10f2e0451,auStack_1f0);
      func_0x00010bcc7444(uVar19,0x65,auStack_1d8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1d8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1f0);
    }
    if (puStack_6c0 < puStack_6b8) {
      puVar14 = auStack_7c8;
      FUN_1087e609c();
      puVar18 = puStack_6c0 + 0xe0;
    }
    else {
      lVar16 = (long)puStack_6c0 - (long)puStack_6c8;
      uVar1 = lVar16 / 0xe0 + 1;
      if (0x124924924924924 < uVar1) {
        FUN_1087e61e8();
LAB_1087e245c:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1087e2460);
        (*pcVar9)();
      }
      uVar7 = ((long)puStack_6b8 - (long)puStack_6c8) / 0xe0;
      uVar15 = uVar7 * 2;
      if (uVar15 < uVar1 || uVar15 - uVar1 == 0) {
        uVar15 = uVar1;
      }
      if (0x92492492492491 < uVar7) {
        uVar15 = 0x124924924924924;
      }
      if (uVar15 == 0) {
        lVar20 = 0;
      }
      else {
        if (0x124924924924924 < uVar15) {
          func_0x000104bd35f4();
          goto LAB_1087e245c;
        }
        lVar20 = uVar15 * 0xe0;
        __Znwm();
      }
      lVar16 = lVar20 + lVar16;
      puVar14 = auStack_7c8;
      FUN_1087e609c(lVar16);
      puVar8 = puStack_6c0;
      puVar22 = puStack_6c8;
      puVar17 = (undefined1 *)(lVar16 + (((long)puStack_6c0 - (long)puStack_6c8) / -0xe0) * 0xe0);
      puVar11 = puVar17;
      for (puVar18 = puStack_6c8; puVar18 != puVar8; puVar18 = puVar18 + 0xe0) {
        puVar14 = puVar18;
        FUN_1087e609c(puVar11);
        puVar11 = puVar11 + 0xe0;
      }
      for (; puVar22 != puVar8; puVar22 = puVar22 + 0xe0) {
        func_0x0001087e281c(puVar22);
      }
      puVar18 = (undefined1 *)(lVar16 + 0xe0);
      puStack_6b8 = (undefined1 *)(lVar20 + uVar15 * 0xe0);
      bVar2 = puStack_6c8 != (undefined1 *)0x0;
      puStack_6c8 = puVar17;
      if (bVar2) {
        puStack_6c0 = puVar18;
        __ZdlPv();
      }
    }
    puStack_6c0 = puVar18;
    FUN_1087e61f4(&lStack_7d0);
  } while( true );
}



/* Entry: 1087e25a8; end: 1087e25af;  */

void FUN_1087e25a8(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar5;
  long lVar6;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  
  puVar2 = *(undefined8 **)(param_2 + 0x28);
  puVar3 = puVar2;
  func_0x0001087e8eac();
  *puVar3 = FUN_1087e82fc;
  puVar3[1] = FUN_1087e834c;
  func_0x000107c27f94(puVar3 + 2);
  plVar4 = puVar3 + 2;
  func_0x000107c287c4(param_1);
  *(undefined1 *)((long)puVar2 + 0x44) = 1;
  if (*(int *)(puVar2 + 8) == 0) {
    plVar4 = puVar2 + 10;
    func_0x000107c28850();
  }
  puVar3[4] = puVar2[9];
  do {
    func_0x0001087e8700();
  } while (extraout_w10 != 0);
  func_0x0001087e8868(puVar3[4]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar3 + 5) = 0;
    lVar8 = puVar3[4];
    func_0x0001087e86e0();
    lVar9 = *plVar4;
    if (lVar9 == 0) {
      func_0x000107c3a5c0();
      lVar9 = *plVar4;
    }
    plVar4 = (long *)(lVar8 + 0x10);
    do {
      if (*plVar4 == 0) {
        func_0x0001087e8810();
        plVar4 = extraout_x8_00;
        uVar1 = extraout_w10_01;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x0001087e8c94();
        plVar4 = extraout_x8;
        uVar1 = extraout_w10_00;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087e9058();
        uVar5 = extraout_x8_01;
        if ((bool)in_ZR) {
          func_0x0001087e8788();
          func_0x0001087e8e1c();
          func_0x0001087e8c5c();
          uVar5 = extraout_x8_02;
        }
        lVar6 = unaff_x22 + (uVar5 & 0xffffffff) * 0x18;
        *(undefined8 *)(lVar6 + 0x10) = 0;
        *(undefined8 **)(lVar6 + 0x18) = puVar3;
        *(long *)(lVar6 + 0x20) = lVar9;
        func_0x0001087e8778(*(undefined8 *)(lVar8 + 0x90));
        *(undefined8 *)(lVar8 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000107c28834(puVar3 + 4);
  func_0x0001087e8c84();
  func_0x000107c287c8(puVar3 + 2);
  func_0x0001087e8800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar3);
  return;
}



/* Entry: 1087e25b0; end: 1087e2703;  */

void FUN_1087e25b0(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar4;
  long lVar5;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  
  puVar2 = param_2;
  func_0x0001087e8eac();
  *puVar2 = FUN_1087e82fc;
  puVar2[1] = FUN_1087e834c;
  func_0x000107c27f94(puVar2 + 2);
  plVar3 = puVar2 + 2;
  func_0x000107c287c4(param_1);
  *(undefined1 *)((long)param_2 + 0x44) = 1;
  if (*(int *)(param_2 + 8) == 0) {
    plVar3 = param_2 + 10;
    func_0x000107c28850();
  }
  puVar2[4] = param_2[9];
  do {
    func_0x0001087e8700();
  } while (extraout_w10 != 0);
  func_0x0001087e8868(puVar2[4]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 5) = 0;
    lVar7 = puVar2[4];
    func_0x0001087e86e0();
    lVar8 = *plVar3;
    if (lVar8 == 0) {
      func_0x000107c3a5c0();
      lVar8 = *plVar3;
    }
    plVar3 = (long *)(lVar7 + 0x10);
    do {
      if (*plVar3 == 0) {
        func_0x0001087e8810();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_01;
        uVar6 = extraout_w11_00;
      }
      else {
        func_0x0001087e8c94();
        plVar3 = extraout_x8;
        uVar1 = extraout_w10_00;
        uVar6 = extraout_w11;
      }
      if ((uVar6 & 1) != 0) {
        func_0x0001087e9058();
        uVar4 = extraout_x8_01;
        if ((bool)in_ZR) {
          func_0x0001087e8788();
          func_0x0001087e8e1c();
          func_0x0001087e8c5c();
          uVar4 = extraout_x8_02;
        }
        lVar5 = unaff_x22 + (uVar4 & 0xffffffff) * 0x18;
        *(undefined8 *)(lVar5 + 0x10) = 0;
        *(undefined8 **)(lVar5 + 0x18) = puVar2;
        *(long *)(lVar5 + 0x20) = lVar8;
        func_0x0001087e8778(*(undefined8 *)(lVar7 + 0x90));
        *(undefined8 *)(lVar7 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000107c28834(puVar2 + 4);
  func_0x0001087e8c84();
  func_0x000107c287c8(puVar2 + 2);
  func_0x0001087e8800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 1087e2704; end: 1087e2757;  */

void FUN_1087e2704(void)

{
  func_0x0001087e8b20();
  func_0x0001087e2728();
  return;
}



/* Entry: 1087e2758; end: 1087e275f;  */

void FUN_1087e2758(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087e89fc(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x0001087e2794();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1087e2760; end: 1087e2903;  */

void FUN_1087e2760(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087e89fc();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x0001087e2794();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1087e2904; end: 1087e2997;  */

void FUN_1087e2904(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c33660();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000107c27994(param_1 + 3,param_2 + 3);
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  FUN_1086abe10(unaff_x19 + 0x38,unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x148);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x140);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x14c);
  *(undefined8 *)(unaff_x19 + 0x154) = *(undefined8 *)(unaff_x20 + 0x154);
  *(undefined8 *)(unaff_x19 + 0x14c) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x148) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x140) = uVar1;
  func_0x000105302f48(unaff_x19 + 0x160,unaff_x20 + 0x160);
  func_0x000105302f48(unaff_x19 + 0x180,unaff_x20 + 0x180);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x1a0);
  *(undefined8 *)(unaff_x19 + 0x1a8) = *(undefined8 *)(unaff_x20 + 0x1a8);
  *(undefined8 *)(unaff_x19 + 0x1a0) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a8) = 0;
  return;
}



/* Entry: 1087e2998; end: 1087e299b;  */

undefined8 * FUN_1087e2998(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a721b0;
  func_0x000107c29a48(param_1 + 3);
  func_0x000107c28800(param_1 + 1);
  return param_1;
}



/* Entry: 1087e299c; end: 1087e29af;  */

void FUN_1087e299c(void)

{
  FUN_1087e2a10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087e29b0; end: 1087e2a0f;  */

void FUN_1087e29b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_x7;
  undefined1 auStack_40 [24];
  undefined1 uStack_28;
  
  auStack_40[0] = 0;
  uStack_28 = 0;
  FUN_1087e2a4c(param_1 + 8,param_1 + 0x18,param_2,param_3,0,0,auStack_40,in_x7,0,0);
  func_0x000107c279dc(auStack_40);
  return;
}



/* Entry: 1087e2a10; end: 1087e2a4b;  */

undefined8 * FUN_1087e2a10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a721b0;
  func_0x000107c29a48(param_1 + 3);
  func_0x000107c28800(param_1 + 1);
  return param_1;
}



/* Entry: 1087e2a4c; end: 1087e2be7;  */

void FUN_1087e2a4c(long *param_1,undefined8 *param_2,long *param_3,long *param_4,undefined8 param_5,
                  ulong param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  code *extraout_x8;
  long *plVar7;
  undefined4 uVar8;
  undefined1 auStack_168 [32];
  undefined1 auStack_148 [32];
  undefined *apuStack_128 [19];
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  ulong uStack_70;
  
  uStack_78 = param_5;
  uStack_70 = param_6;
  FUN_1087e2be8(auStack_90,param_4);
  if ((param_6 & 1) != 0) {
    apuStack_128[0] = PTR_DAT_1132691b0;
    FUN_1087e2c6c(auStack_90,apuStack_128,&uStack_78);
  }
  lVar6 = *param_1;
  func_0x0001087e885c(lVar6);
  (*extraout_x8)();
  if (*param_4 == param_4[1]) {
    uVar8 = 7;
  }
  else {
    uVar8 = *(undefined4 *)(param_4[1] + -0x6c);
  }
  lVar1 = *param_3;
  lVar2 = param_3[1];
  plVar7 = (long *)*param_2;
  lVar5 = param_3[0x2a];
  uVar3 = *(undefined4 *)((long)param_3 + 0x154);
  func_0x0001087e2ca8(auStack_148,param_4);
  uVar4 = *(undefined4 *)((long)param_3 + 0x14c);
  func_0x000107c279d4(auStack_168,param_7);
  FUN_1087e2cfc();
  FUN_1087e3114(apuStack_128,(int)lVar5,uVar3,uVar8,auStack_90,auStack_148,uVar4,lVar6 - lVar2,
                lVar2 - lVar1,auStack_168,param_9,param_10,(ulong)param_4 & 0xffffffffff);
  func_0x0001087e8f88(*(undefined8 *)(*plVar7 + 0x10));
  func_0x0001087e3458(apuStack_128);
  func_0x000107c279dc(auStack_168);
  func_0x000107c279a4(auStack_148);
  func_0x0001087e348c(auStack_90);
  return;
}



/* Entry: 1087e2be8; end: 1087e2c6b;  */

void FUN_1087e2be8(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1087e2d48(param_1,param_2[1] - *param_2 >> 7);
  lVar1 = param_2[1];
  for (lVar3 = *param_2; lVar3 != lVar1; lVar3 = lVar3 + 0x80) {
    lVar2 = lVar3;
    FUN_1087e2dec();
    lStack_38 = lVar2;
    FUN_1087e2db0(param_1,&lStack_38,lVar3);
  }
  return;
}



/* Entry: 1087e2c6c; end: 1087e2cfb;  */

long FUN_1087e2c6c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_1087e306c();
    lVar2 = uVar1 + 0x20;
  }
  else {
    lVar2 = param_1;
    FUN_1087e3098();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x20;
}



/* Entry: 1087e2cfc; end: 1087e2d47;  */

ulong FUN_1087e2cfc(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = param_1[1];
  if ((*param_1 == lVar1) || (*(int *)(lVar1 + -0x6c) == 0)) {
    uVar3 = 0;
    uVar2 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = *(ulong *)(lVar1 + -0x28);
    uVar2 = uVar5 & 0xffffff0000000000;
    uVar4 = uVar5 & 0xff00000000;
    uVar3 = uVar5 & 0xffffff00;
    uVar5 = uVar5 & 0xff;
  }
  return uVar2 | uVar3 | uVar4 | uVar5;
}



/* Entry: 1087e2d48; end: 1087e2daf;  */

long * FUN_1087e2d48(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long alStack_48 [5];
  
  lVar3 = *param_1;
  if ((ulong)(param_1[2] - lVar3 >> 5) < param_2) {
    if (param_2 >> 0x3b != 0) {
      FUN_1087e2df4();
      func_0x0001087e8af8();
      func_0x0001087e8808();
      uVar1 = param_1[1];
      if (uVar1 < (ulong)param_1[2]) {
        FUN_1087e2f60();
        plVar2 = (long *)(uVar1 + 0x20);
      }
      else {
        plVar2 = param_1;
        FUN_1087e2f8c();
      }
      param_1[1] = (long)plVar2;
      return plVar2 + -4;
    }
    plVar2 = param_1 + 1;
    param_1 = alStack_48;
    FUN_1087e2e74(param_1,param_2,*plVar2 - lVar3 >> 5);
    func_0x0001087e8b00();
    func_0x0001087e8af8();
  }
  return param_1;
}



/* Entry: 1087e2db0; end: 1087e2deb;  */

long FUN_1087e2db0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_1087e2f60();
    lVar2 = uVar1 + 0x20;
  }
  else {
    lVar2 = param_1;
    FUN_1087e2f8c();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x20;
}



/* Entry: 1087e2dec; end: 1087e2df3;  */

undefined * FUN_1087e2dec(long param_1)

{
  if (*(uint *)(param_1 + 0x10) < 0xb) {
    return (&PTR_DAT_110a72600)[*(uint *)(param_1 + 0x10)];
  }
  return &UNK_10f4bbaf1;
}



/* Entry: 1087e2df4; end: 1087e2dff;  */

void FUN_1087e2df4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x0001087e87c8();
  func_0x0001087e89fc();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1087e2e00; end: 1087e2e73;  */

void FUN_1087e2e00(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x0001087e89fc();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1087e2e74; end: 1087e2edb;  */

long * FUN_1087e2e74(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001087e2ebc();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 1087e2edc; end: 1087e2ef7;  */

long * FUN_1087e2edc(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3b == 0) {
    plVar1 = (long *)(param_2 << 5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1087e2f24();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1087e2ef8; end: 1087e2f23;  */

long * FUN_1087e2ef8(long *param_1)

{
  FUN_1087e2f24();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1087e2f24; end: 1087e2f2b;  */

void FUN_1087e2f24(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087e89fc(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 1087e2f2c; end: 1087e2f5f;  */

void FUN_1087e2f2c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087e89fc();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 1087e2f60; end: 1087e2f8b;  */

void FUN_1087e2f60(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087e902c();
  FUN_1087e2fe8();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x20;
  return;
}



/* Entry: 1087e2f8c; end: 1087e2fe7;  */

undefined8 FUN_1087e2f8c(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uStack_48;
  
  func_0x0001087e89ac();
  func_0x0001087e8a08();
  FUN_1087e2fe8(uStack_48);
  func_0x0001087e8b00();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001087e8af8();
  return uVar1;
}



/* Entry: 1087e2fe8; end: 1087e3007;  */

void FUN_1087e2fe8(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001087e8fcc();
  *(undefined8 *)(param_1 + 0x18) = *unaff_x19;
  return;
}



/* Entry: 1087e3008; end: 1087e3047;  */

undefined * FUN_1087e3008(long *param_1,undefined *param_2)

{
  undefined *puVar1;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    puVar1 = (undefined *)(param_1[2] - *param_1 >> 4);
    if (puVar1 <= param_2) {
      puVar1 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      puVar1 = (undefined *)0x7ffffffffffffff;
    }
    return puVar1;
  }
  FUN_1087e2df4();
  if ((uint)param_1 < 0xb) {
    return (&PTR_DAT_110a72600)[(ulong)param_1 & 0xffffffff];
  }
  return &UNK_10f4bbaf1;
}



/* Entry: 1087e3048; end: 1087e306b;  */

undefined * FUN_1087e3048(uint param_1)

{
  if (param_1 < 0xb) {
    return (&PTR_DAT_110a72600)[param_1];
  }
  return &UNK_10f4bbaf1;
}



/* Entry: 1087e306c; end: 1087e3097;  */

void FUN_1087e306c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087e902c();
  FUN_1087e30f4();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x20;
  return;
}



/* Entry: 1087e3098; end: 1087e30f3;  */

undefined8 FUN_1087e3098(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uStack_48;
  
  func_0x0001087e89ac();
  func_0x0001087e8a08();
  FUN_1087e30f4(uStack_48);
  func_0x0001087e8b00();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001087e8af8();
  return uVar1;
}



/* Entry: 1087e30f4; end: 1087e3113;  */

void FUN_1087e30f4(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001087e8fcc();
  *(undefined8 *)(param_1 + 0x18) = *unaff_x19;
  return;
}



/* Entry: 1087e3114; end: 1087e3197;  */

undefined4 *
FUN_1087e3114(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  FUN_1087e3198(param_1 + 4,param_5);
  func_0x000107c279a0(param_1 + 10,param_6);
  param_1[0x12] = param_7;
  *(undefined8 *)(param_1 + 0x14) = param_8;
  *(undefined8 *)(param_1 + 0x16) = param_9;
  func_0x000107c27afc(param_1 + 0x18,param_10);
  *(undefined8 *)(param_1 + 0x20) = param_11;
  *(undefined8 *)(param_1 + 0x22) = param_12;
  *(undefined8 *)(param_1 + 0x24) = param_13;
  return param_1;
}



/* Entry: 1087e3198; end: 1087e31cf;  */

undefined8 * FUN_1087e3198(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1087e31d0(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 5);
  return param_1;
}



/* Entry: 1087e31d0; end: 1087e323f;  */

void FUN_1087e31d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_1087e3240(param_1,param_4);
    FUN_1087e3278(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  func_0x0001087e33c0(&uStack_40);
  return;
}



/* Entry: 1087e3240; end: 1087e3277;  */

void FUN_1087e3240(long *param_1,ulong param_2)

{
  long *plVar1;
  long unaff_x19;
  
  if (param_2 >> 0x3b == 0) {
    plVar1 = param_1 + 2;
    func_0x0001087e2ebc();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 4);
  }
  else {
    FUN_1087e2df4();
    func_0x0001087e902c();
    param_1 = param_1 + 2;
    FUN_1087e32a4();
    *(long **)(unaff_x19 + 8) = param_1;
  }
  return;
}



/* Entry: 1087e3278; end: 1087e32a3;  */

void FUN_1087e3278(long param_1)

{
  long unaff_x19;
  
  func_0x0001087e902c();
  param_1 = param_1 + 0x10;
  FUN_1087e32a4();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1087e32a4; end: 1087e32b7;  */

void FUN_1087e32a4(void)

{
  FUN_1087e32b8();
  return;
}



/* Entry: 1087e32b8; end: 1087e333f;  */

long FUN_1087e32b8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x20) {
    FUN_1087975d8(param_4,param_2);
    param_4 = lStack_38 + 0x20;
  }
  uStack_48 = 1;
  FUN_1087e3340(&uStack_60);
  return param_4;
}



/* Entry: 1087e3340; end: 1087e336f;  */

long FUN_1087e3340(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1087e3370(param_1);
  }
  return param_1;
}



/* Entry: 1087e3370; end: 1087e338f;  */

void FUN_1087e3370(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 1087e3390; end: 1087e341b;  */

void FUN_1087e3390(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 1087e341c; end: 1087e3423;  */

void FUN_1087e341c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087e89fc(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1087e3424; end: 1087e34af;  */

void FUN_1087e3424(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087e89fc();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1087e34b0; end: 1087e34b3;  */

void FUN_1087e34b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087e34b4; end: 1087e34c7;  */

void FUN_1087e34b4(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087e34c8; end: 1087e34d7;  */

void FUN_1087e34c8(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001087e8ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 1087e34d8; end: 1087e350b;  */

long FUN_1087e34d8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001087e8f28(param_2,param_1,&PTR_DAT_110a72240);
  param_1 = param_1 + 0x18;
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1087e350c; end: 1087e3513;  */

void FUN_1087e350c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087e3514; end: 1087e3527;  */

void FUN_1087e3514(void)

{
  FUN_1087e3d34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087e3528; end: 1087e3d33;  */

void FUN_1087e3528(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long lVar19;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  uint extraout_w9;
  uint extraout_w9_00;
  undefined4 extraout_w9_01;
  ulong extraout_x9;
  long lVar20;
  long extraout_x9_00;
  undefined8 uVar21;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar22;
  ulong extraout_x10;
  ulong extraout_x10_00;
  int extraout_w11;
  ulong extraout_x11;
  long lVar23;
  long *plVar24;
  long *plVar25;
  ulong uVar26;
  long lVar27;
  undefined8 uVar28;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_10;
  
  func_0x000107c33674();
  func_0x000107c33638();
  puVar9 = (undefined8 *)0x2d8;
  uStack_10 = extraout_x8_00;
  __Znwm();
  *puVar9 = FUN_1087e7e0c;
  puVar9[1] = FUN_1087e82b4;
  puVar9[0x58] = param_4;
  puVar9[0x57] = param_1;
  FUN_1087e2904(puVar9 + 4,param_2);
  plVar1 = puVar9 + 0x4e;
  plVar2 = puVar9 + 0x51;
  uVar14 = *param_3;
  puVar9[0x4f] = param_3[1];
  puVar9[0x4e] = uVar14;
  puVar9[0x50] = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  func_0x0001087adea8(puVar9 + 2);
  FUN_1087ad990(extraout_x8,puVar9 + 2);
  puVar9[0x55] = 0;
  puVar9[0x52] = 0;
  *plVar2 = 0;
  puVar9[0x54] = 0;
  puVar9[0x53] = 0;
  plVar25 = (long *)puVar9[0x4e];
  lVar23 = *(long *)(param_1 + 0x40);
  uVar21 = *(undefined8 *)(param_1 + 0x40);
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  puVar10 = (undefined8 *)0x58;
  __Znwm();
  puVar12 = puVar9 + 0x50;
  if (lVar23 != 0) {
    do {
      func_0x000107c33634();
    } while (extraout_w10 != 0);
  }
  uVar7 = *(undefined1 *)(param_1 + 0x80);
  *(undefined4 *)(puVar10 + 1) = 0;
  *puVar10 = &PTR_FUN_110a722b0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  *(undefined1 *)(puVar10 + 4) = 0;
  puVar10[6] = uVar21;
  puVar10[5] = uVar14;
  lStack_1e0 = 0;
  lStack_1d8 = 0;
  *(undefined4 *)(puVar10 + 7) = 0;
  lVar23 = *(long *)(param_1 + 0x78);
  uVar14 = *(undefined8 *)(param_1 + 0x70);
  puVar10[9] = *(undefined8 *)(param_1 + 0x78);
  puVar10[8] = uVar14;
  if (lVar23 != 0) {
    do {
      func_0x000107c33654();
      uVar7 = extraout_w8;
    } while (extraout_w11 != 0);
  }
  plVar3 = puVar9 + 0x49;
  *(undefined1 *)(puVar10 + 10) = uVar7;
  plVar11 = &lStack_1e0;
  func_0x000107c28868();
  plVar16 = (long *)puVar9[0x4f];
  if (plVar16 < (long *)*puVar12) {
    if (plVar25 == plVar16) {
      *plVar16 = (long)puVar10;
      puVar9[0x4f] = plVar16 + 1;
      uVar7 = 1;
    }
    else {
      plVar24 = plVar16 + -1;
      plVar11 = plVar16;
      for (plVar22 = plVar24; plVar22 < plVar16; plVar22 = plVar22 + 1) {
        lVar23 = *plVar22;
        *plVar22 = 0;
        *plVar11 = lVar23;
        plVar11 = plVar11 + 1;
      }
      puVar9[0x4f] = plVar11;
      plVar11 = plVar24;
      while (uVar7 = plVar24 == plVar25, !(bool)uVar7) {
        plVar24 = plVar24 + -1;
        lVar17 = *plVar24;
        *plVar24 = 0;
        lVar23 = *plVar11;
        *plVar11 = lVar17;
        if (lVar23 != 0) {
          func_0x0001087e87e8();
        }
        plVar11 = plVar11 + -1;
      }
      plVar11 = (long *)*plVar25;
      *plVar25 = (long)puVar10;
      if (plVar11 != (long *)0x0) {
        func_0x0001087e87e8();
      }
    }
  }
  else {
    plVar11 = plVar1;
    FUN_1087e41ac(plVar1,((long)plVar16 - *plVar1 >> 3) + 1);
    plVar16 = (long *)puVar9[0x4e];
    puVar9[0x4d] = puVar12;
    if (plVar11 == (long *)0x0) {
      puVar18 = (undefined8 *)0x0;
      lVar23 = 0;
    }
    else {
      puVar18 = puVar12;
      FUN_1087e41f8();
      lVar23 = (long)plVar11 << 3;
    }
    lVar17 = (long)plVar25 - (long)plVar16;
    puVar9[0x49] = puVar18;
    puVar13 = (undefined8 *)((long)puVar18 + lVar17);
    puVar9[0x4b] = puVar13;
    puVar9[0x4a] = puVar13;
    puVar9[0x4c] = (long)puVar18 + lVar23;
    uVar7 = 0;
    if (lVar17 == lVar23) {
      if (plVar25 == plVar16) {
        lVar17 = 1;
        puStack_1c0 = puVar12;
        FUN_1087e41f8();
        lStack_1d8 = puVar9[0x4a];
        lStack_1d0 = puVar9[0x4b];
        for (lVar23 = 0; uVar7 = lStack_1d0 - lStack_1d8 == lVar23, !(bool)uVar7;
            lVar23 = lVar23 + 8) {
          uVar14 = *(undefined8 *)(lStack_1d8 + lVar23);
          *(undefined8 *)(lStack_1d8 + lVar23) = 0;
          *(undefined8 *)((long)puVar12 + lVar23) = uVar14;
        }
        lStack_1e0 = puVar9[0x49];
        puVar9[0x49] = puVar12;
        puVar9[0x4a] = puVar12;
        puVar9[0x4b] = (long)puVar12 + (lStack_1d0 - lStack_1d8);
        uStack_1c8 = puVar9[0x4c];
        puVar9[0x4c] = puVar12 + lVar17;
        FUN_1087e4234(&lStack_1e0);
        puVar13 = (undefined8 *)puVar9[0x4b];
      }
      else {
        puVar13 = puVar13 + ((lVar17 >> 3) + 1) / -2;
        puVar9[0x4a] = puVar13;
        uVar7 = 0;
      }
    }
    *puVar13 = puVar10;
    puVar9[0x4b] = puVar13 + 1;
    _memcpy(puVar13 + 1,plVar25,puVar9[0x4f] - (long)plVar25);
    puVar9[0x4b] = puVar9[0x4b] + (puVar9[0x4f] - (long)plVar25);
    puVar9[0x4f] = plVar25;
    lVar23 = puVar9[0x4a] - ((long)plVar25 - puVar9[0x4e]);
    _memcpy(lVar23);
    uVar14 = puVar9[0x4e];
    puVar9[0x4e] = lVar23;
    puVar9[0x4a] = uVar14;
    uVar21 = puVar9[0x50];
    uVar28 = puVar9[0x4b];
    puVar9[0x4b] = uVar14;
    puVar9[0x50] = puVar9[0x4c];
    puVar9[0x4f] = uVar28;
    puVar9[0x4c] = uVar21;
    puVar9[0x49] = uVar14;
    plVar11 = plVar3;
    FUN_1087e4234();
  }
  puVar9[0x59] = *(undefined8 *)puVar9[0x4e];
  func_0x0001087e86e0();
  while( true ) {
    uVar14 = puVar9[0x57];
    FUN_1087e3db8(plVar3,uVar14,plVar1,puVar9 + 4,puVar9[0x58]);
    puVar9[0x3a] = *plVar3;
    do {
      func_0x0001087e8700();
    } while (extraout_w10_00 != 0);
    func_0x0001087e8868(puVar9[0x3a]);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar9 + 0x5a) = 0;
      lVar23 = puVar9[0x3a];
      if (*plVar11 == 0) {
        func_0x000107c3a5c0();
      }
      plVar25 = (long *)(lVar23 + 0x10);
      do {
        if (*plVar25 == 0) {
          bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar6) {
            *plVar25 = 1;
            ExclusiveMonitorsStatus();
          }
          func_0x0001087e9000();
          plVar25 = extraout_x8_02;
          uVar4 = extraout_w9_00;
          uVar26 = extraout_x10_00;
        }
        else {
          func_0x0001087e900c();
          plVar25 = extraout_x8_01;
          uVar4 = extraout_w9;
          uVar26 = extraout_x10;
        }
        if ((uVar26 & 1) != 0) {
          func_0x0001087e87a8();
          if ((bool)uVar7) {
            func_0x0001087e8788();
            func_0x0001087e86f0();
            func_0x0001087e86c4();
            *(undefined8 *)(lVar23 + 0x90) = uVar14;
          }
          func_0x0001087e874c();
          goto LAB_1087e3b4c;
        }
      } while ((uVar4 >> 1 & 1) == 0);
    }
    func_0x0001087e8868(puVar9[0x3a]);
    lVar23 = puVar9[0x3a];
    if ((extraout_w8_01 >> 5 & 1) != 0) {
      __ZNSt13exception_ptrC1ERKS_(puVar9 + 0x56,lVar23 + 0x18);
      __ZSt17rethrow_exceptionSt13exception_ptr(puVar9 + 0x56);
      goto LAB_1087e3c14;
    }
    uVar26 = puVar9[0x52];
    if (uVar26 < (ulong)puVar9[0x53]) {
      FUN_1087e49f0(uVar26,lVar23 + 0x98);
      lVar23 = uVar26 + 0x18;
    }
    else {
      lVar17 = uVar26 - *plVar2;
      uVar26 = lVar17 / 0x18 + 1;
      bVar6 = 0xaaaaaaaaaaaaaa9 < uVar26;
      if (0xaaaaaaaaaaaaaaa < uVar26) {
        FUN_1087e4c78();
        goto LAB_1087e3c14;
      }
      func_0x0001087e8d54((puVar9[0x53] - *plVar2) / 0x18);
      uVar26 = extraout_x9;
      if (bVar6) {
        uVar26 = extraout_x11;
      }
      puVar9[0x48] = puVar9 + 0x53;
      if (uVar26 == 0) {
        lVar15 = 0;
      }
      else {
        if (0xaaaaaaaaaaaaaaa < uVar26) goto LAB_1087e3c10;
        lVar15 = uVar26 * 0x18;
        __Znwm();
      }
      puVar9[0x44] = lVar15;
      lVar17 = lVar15 + lVar17;
      puVar9[0x46] = lVar17;
      puVar9[0x45] = lVar17;
      lVar15 = lVar15 + uVar26 * 0x18;
      puVar9[0x47] = lVar15;
      FUN_1087e49f0(lVar17,lVar23 + 0x98);
      lVar27 = puVar9[0x52];
      lVar23 = puVar9[0x51];
      lVar19 = lVar27 - lVar23;
      lVar20 = lVar23;
      while (lVar20 != lVar27) {
        func_0x0001087e8a5c();
        lVar20 = extraout_x9_00;
      }
      for (; lVar23 != lVar27; lVar23 = lVar23 + 0x18) {
        FUN_1087e4c84();
      }
      lVar23 = lVar17 + 0x18;
      uVar14 = puVar9[0x51];
      puVar9[0x51] = lVar17 + (lVar19 / -0x18) * 0x18;
      puVar9[0x45] = uVar14;
      puVar9[0x52] = lVar23;
      puVar9[0x46] = uVar14;
      uVar21 = puVar9[0x53];
      puVar9[0x53] = lVar15;
      puVar9[0x47] = uVar21;
      puVar9[0x44] = uVar14;
      func_0x0001087e8d3c();
    }
    puVar9[0x52] = lVar23;
    func_0x0001087e8d34();
    func_0x0001087e8af0();
    lVar23 = puVar9[0x52];
    if (*(long *)(lVar23 + -0x18) == *(long *)(lVar23 + -0x10)) {
      iVar8 = 7;
    }
    else {
      iVar8 = *(int *)(*(long *)(lVar23 + -0x10) + -0x6c);
    }
    *(int *)(puVar9 + 0x44) = iVar8;
    (**(code **)(**(long **)(puVar9[0x57] + 8) + 8))
              (puVar9 + 0x3a,*(long **)(puVar9[0x57] + 8),iVar8);
    lVar17 = puVar9[0x59];
    func_0x0001087e8ee4();
    func_0x000107c299a0(puVar9 + 0x3a);
    uVar7 = iVar8 == 1;
    *(undefined1 *)(lVar17 + 0x20) = uVar7;
    func_0x0001087b153c(lVar17 + 0x10,puVar9 + 0x54);
    lVar17 = puVar9[0x54];
    if (lVar17 == 0) break;
    func_0x0001087e885c(lVar17,*(undefined4 *)(puVar9 + 6));
    iVar8 = (int)lVar17;
    (*extraout_x8_03)();
    if (iVar8 == 0) break;
    func_0x0001087e885c(*(undefined8 *)(puVar9[0x57] + 0x58));
    (*extraout_x8_04)();
    uVar7 = *(int *)((long)puVar9 + 0x16c) == 3;
    if ((bool)uVar7) {
      func_0x0001087e8a88();
    }
    else {
      *(undefined4 *)((long)puVar9 + 0x16c) = 3;
    }
    uVar14 = *(undefined8 *)(puVar9[0x57] + 0x28);
    func_0x0001087e8efc();
    puVar9[0x3d] = puVar9[10];
    func_0x0001087e8820(puVar9[0x57]);
    (*extraout_x8_05)();
    func_0x0001087e89cc();
    *(undefined4 *)((long)puVar9 + 0x214) = 1;
    *(undefined4 *)(puVar9 + 0x43) = extraout_w9_01;
    FUN_10886024c(uVar14,puVar9 + 0x3a);
    func_0x0001087e895c();
  }
  func_0x0001087e2ca8(&lStack_1e0,lVar23 + -0x18);
  func_0x000107c279a4(&lStack_1e0);
  lStack_1d8 = puVar9[0x52];
  lStack_1e0 = *plVar2;
  lStack_1d0 = puVar9[0x53];
  puVar9[0x52] = 0;
  puVar9[0x53] = 0;
  *plVar2 = 0;
  FUN_1087e2904(&uStack_1c8,puVar9 + 4);
  func_0x0001087e885c(*(undefined8 *)(puVar9[0x57] + 0x60));
  (*extraout_x8_06)();
  func_0x0001087e8ea0();
  func_0x0001087e5c34(&lStack_1e0);
  func_0x0001087e8bac();
  func_0x0001087e5bec(plVar2);
  func_0x0001087e8800();
  FUN_1087e2704(plVar1);
  func_0x0001087e8930();
  func_0x0001087e8830();
LAB_1087e3b4c:
  func_0x000107c33630(uStack_10);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
LAB_1087e3c10:
  func_0x000104bd35f4();
LAB_1087e3c14:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1087e3c18);
  (*pcVar5)();
}



/* Entry: 1087e3d34; end: 1087e3db7;  */

undefined8 * FUN_1087e3d34(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_DAT_110a72260;
  func_0x000107c289f8(param_1 + 0x19);
  func_0x000107c289f8(param_1 + 0x13);
  func_0x000107c29778(param_1 + 0x11);
  func_0x000107c299a4(param_1 + 0xe);
  func_0x000107c29a4c(param_1 + 0xc);
  lVar1 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar1 != 0) {
    func_0x0001087e87e8();
  }
  func_0x000107c288a4(param_1 + 9);
  func_0x000107c28868(param_1 + 7);
  func_0x000107c28808(param_1 + 5);
  func_0x000107c28800(param_1 + 3);
  func_0x000107c2995c(param_1 + 1);
  return param_1;
}



/* Entry: 1087e3db8; end: 1087e41ab;  */

void FUN_1087e3db8(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar19;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  uint extraout_w9;
  uint extraout_w9_00;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  long lVar20;
  long lVar21;
  long lVar22;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  puVar10 = (undefined8 *)0x118;
  __Znwm();
  *puVar10 = FUN_1087e7a88;
  puVar10[1] = FUN_1087e7dd8;
  puVar10[0x1e] = param_4;
  puVar10[0x1f] = param_5;
  puVar10[0x1d] = param_2;
  puVar11 = (undefined8 *)0xb8;
  __Znwm();
  plVar1 = puVar10 + 0x1b;
  plVar2 = puVar10 + 0x1c;
  puVar12 = puVar11;
  func_0x0001087e8fb4();
  *puVar12 = &PTR_FUN_110a722f0;
  *(undefined1 *)(puVar12 + 0x13) = 0;
  *(undefined1 *)(puVar12 + 0x16) = 0;
  lStack_80 = 0;
  uStack_68 = 0;
  func_0x000107c27f98(&uStack_68);
  func_0x000107c27f9c(&lStack_80);
  puVar10[3] = puVar11;
  puVar10[2] = puVar11;
  lStack_80 = 0;
  uStack_78 = 0;
  func_0x000107c27fec(&lStack_80);
  lStack_80 = puVar10[2];
  if (lStack_80 != 0) {
    do {
      func_0x0001087e8700();
    } while (extraout_w10 != 0);
  }
  *param_1 = lStack_80;
  lStack_80 = 0;
  func_0x000107c27f9c(&lStack_80);
  puVar10[0x18] = 0;
  puVar10[0x19] = 0;
  puVar10[0x1a] = 0;
  uVar14 = *param_3;
  puVar10[0x20] = param_3[1];
  ppuVar13 = &PTR___tlv_bootstrap_11340e278;
  (*(code *)PTR___tlv_bootstrap_11340e278)(uVar14);
  plVar19 = extraout_x8;
  do {
    puVar10[0x21] = plVar19;
    uVar9 = plVar19 == (long *)puVar10[0x20];
    if ((bool)uVar9) break;
    uVar14 = puVar10[0x1d];
    lVar18 = *plVar19;
    FUN_1087e4cec(plVar2,uVar14,lVar18,puVar10[0x1e],puVar10[0x1f]);
    *plVar1 = *plVar2;
    do {
      func_0x0001087e8700();
    } while (extraout_w10_00 != 0);
    func_0x0001087e8868(*plVar1);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar10 + 0x22) = 0;
      lVar20 = *plVar1;
      if (*ppuVar13 == (undefined *)0x0) {
        func_0x000107c3a5c0();
      }
      plVar19 = (long *)(lVar20 + 0x10);
      do {
        if (*plVar19 == 0) {
          bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar8) {
            *plVar19 = 1;
            ExclusiveMonitorsStatus();
          }
          func_0x0001087e9000();
          plVar19 = extraout_x8_01;
          uVar6 = extraout_w9_00;
          uVar15 = extraout_x10_00;
        }
        else {
          func_0x0001087e900c();
          plVar19 = extraout_x8_00;
          uVar6 = extraout_w9;
          uVar15 = extraout_x10;
        }
        if ((uVar15 & 1) != 0) {
          func_0x0001087e87a8();
          if ((bool)uVar9) {
            func_0x0001087e8788();
            func_0x0001087e86f0();
            func_0x0001087e86c4();
            *(undefined8 *)(lVar20 + 0x90) = uVar14;
          }
          func_0x0001087e874c();
          return;
        }
      } while ((uVar6 >> 1 & 1) == 0);
    }
    if (((uint)*(undefined8 *)(*plVar1 + 0x10) >> 5 & 1) != 0) {
      func_0x0001087e8ec0(*plVar1,puVar10 + 0x14);
      __ZSt17rethrow_exceptionSt13exception_ptr(puVar10 + 0x14);
LAB_1087e4148:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1087e414c);
      (*pcVar7)();
    }
    func_0x0001087e8e58();
    func_0x0001087e8af0();
    func_0x0001087e88c8();
    uVar15 = puVar10[0x19];
    bVar8 = (ulong)puVar10[0x1a] <= uVar15;
    if (bVar8) {
      lVar20 = puVar10[0x18];
      if (((long)(uVar15 - lVar20) >> 7) + 1U >> 0x39 != 0) {
        FUN_1087e4afc();
        goto LAB_1087e4148;
      }
      func_0x0001087e8bfc();
      lVar21 = extraout_x9;
      if (bVar8) {
        lVar21 = extraout_x8_02;
      }
      if (lVar21 == 0) {
        lVar21 = 0;
        lVar18 = 0;
      }
      else {
        FUN_1087e4b08();
      }
      lVar20 = lVar21 + (uVar15 - lVar20);
      FUN_1087e5bcc(lVar20,puVar10 + 4);
      lVar22 = puVar10[0x18];
      lVar4 = puVar10[0x19];
      lVar3 = lVar20 + (lVar22 - lVar4);
      puVar10[0x1b] = lVar3;
      puVar10[0x1c] = lVar3;
      puVar10[0x14] = puVar10 + 0x1a;
      puVar10[0x15] = plVar2;
      puVar10[0x16] = plVar1;
      lVar16 = lVar3;
      for (lVar17 = lVar22; lVar17 != lVar4; lVar17 = lVar17 + 0x80) {
        FUN_1087e5bcc(lVar16,lVar17);
        lVar16 = *plVar1 + 0x80;
        *plVar1 = lVar16;
      }
      *(undefined1 *)(puVar10 + 0x17) = 1;
      for (; lVar22 != lVar4; lVar22 = lVar22 + 0x80) {
        func_0x0001087e49c4(lVar22 + 0x10);
      }
      lVar20 = lVar20 + 0x80;
      FUN_1087e4ba4(puVar10 + 0x14);
      lVar17 = puVar10[0x18];
      puVar10[0x18] = lVar3;
      puVar10[0x19] = lVar20;
      puVar10[0x1a] = lVar21 + lVar18 * 0x80;
      if (lVar17 != 0) {
        __ZdlPv();
      }
    }
    else {
      FUN_1087e5bcc(uVar15,puVar10 + 4);
      lVar20 = uVar15 + 0x80;
    }
    lVar18 = puVar10[0x21];
    puVar10[0x19] = lVar20;
    iVar5 = *(int *)(lVar20 + -0x6c);
    func_0x0001087e8d1c();
    plVar19 = (long *)(lVar18 + 8);
  } while (iVar5 == 0);
  lVar18 = puVar10[3];
  do {
    lStack_80 = 0;
    lVar20 = lVar18 + 0x10;
    func_0x0001087e87f4(lVar20,&lStack_80);
    if ((int)lVar20 != 0) {
      if (*(char *)(lVar18 + 0xb0) == '\x01') {
        FUN_1087e4c84(lVar18 + 0x98);
      }
      uVar14 = puVar10[0x18];
      *(undefined8 *)(lVar18 + 0xa0) = puVar10[0x19];
      *(undefined8 *)(lVar18 + 0x98) = uVar14;
      *(undefined8 *)(lVar18 + 0xa8) = puVar10[0x1a];
      puVar10[0x18] = 0;
      puVar10[0x19] = 0;
      puVar10[0x1a] = 0;
      *(undefined1 *)(lVar18 + 0xb0) = 1;
      func_0x0001087e8fd8();
      func_0x000107c31508();
      break;
    }
  } while (((uint)lStack_80 >> 1 & 1) == 0);
  func_0x0001087e8b30();
  func_0x0001087e8bc8();
  func_0x0001087e8800();
  func_0x0001087e8830();
  return;
}



/* Entry: 1087e41ac; end: 1087e41f7;  */

/* WARNING: Possible PIC construction at 0x0001087e41e8: Changing call to branch */

undefined1  [16] FUN_1087e41ac(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3d == 0) {
    uVar1 = param_1[2] - *param_1 >> 2;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0x1fffffffffffffff;
    }
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = uVar1;
    return auVar2;
  }
  func_0x0001087e87c8();
  FUN_1087e4218();
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1087e41f8; end: 1087e4217;  */

void FUN_1087e41f8(void)

{
  FUN_1087e4218();
  return;
}



/* Entry: 1087e4218; end: 1087e4233;  */

long * FUN_1087e4218(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1087e4260();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1087e4234; end: 1087e425f;  */

long * FUN_1087e4234(long *param_1)

{
  FUN_1087e4260();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1087e4260; end: 1087e4267;  */

void FUN_1087e4260(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087e89fc(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x0001087e2794();
  }
  return;
}



/* Entry: 1087e4268; end: 1087e429b;  */

void FUN_1087e4268(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087e89fc();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x0001087e2794();
  }
  return;
}



/* Entry: 1087e429c; end: 1087e429f;  */

undefined8 * FUN_1087e429c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a722b0;
  func_0x000107c299a4(param_1 + 8);
  func_0x000107c28868(param_1 + 5);
  func_0x000107c299a0(param_1 + 2);
  return param_1;
}



/* Entry: 1087e42a0; end: 1087e42b3;  */

void FUN_1087e42a0(void)

{
  FUN_1087e4670();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087e42b4; end: 1087e466f;  */

void FUN_1087e42b4(undefined8 param_1,long param_2,undefined8 *param_3,long *param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  long lVar6;
  long *plVar7;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong uVar8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar9;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long lVar10;
  undefined1 auStack_b8 [112];
  undefined8 uStack_48;
  
  func_0x000107c33638();
  puVar2 = (undefined8 *)0xc8;
  uStack_48 = extraout_x8;
  __Znwm();
  *puVar2 = FUN_1087e71c0;
  puVar2[1] = FUN_1087e72d8;
  puVar2[0x17] = param_2;
  func_0x0001087e472c(puVar2 + 2);
  FUN_1087e46b4(param_1,puVar2 + 2);
  plVar3 = *(long **)(param_2 + 0x10);
  if ((plVar3 != (long *)0x0) &&
     (param_3 = (undefined8 *)(ulong)*(uint *)(param_2 + 0x38), *(uint *)(param_2 + 0x38) != 0)) {
    (**(code **)(*plVar3 + 0x20))();
    in_ZR = *(char *)(param_2 + 0x50) == '\x01';
    if (((bool)in_ZR) && (in_ZR = *(char *)(param_2 + 0x20) == '\x01', (bool)in_ZR)) {
      (**(code **)(**(long **)(param_2 + 0x40) + 0x10))(puVar2 + 0xf);
      func_0x0001087e8fec();
      func_0x000107c314e0(auStack_b8);
      func_0x000107c2886c(puVar2 + 0x10,auStack_b8,puVar2 + 0xf);
      func_0x0001087e8f58();
      puVar2[0x13] = puVar2[0x10];
      if (puVar2[0x10] != 0) {
        do {
          func_0x0001087e8700();
        } while (extraout_w10 != 0);
      }
      lVar6 = *param_4;
      puVar2[0x14] = lVar6;
      if (lVar6 != 0) {
        do {
          func_0x0001087e8700();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001087e8d0c();
      plVar4 = puVar2 + 0x13;
      param_3 = puVar2 + 0x14;
      FUN_1087ae2d0(puVar2 + 0x12,plVar4,param_3,puVar2 + 0xc);
      puVar2[0x11] = puVar2[0x12];
      do {
        func_0x0001087e8700();
      } while (extraout_w10_01 != 0);
      func_0x0001087e8868(puVar2[0x11]);
      if ((extraout_w8 >> 1 & 1) == 0) {
        *(undefined1 *)(puVar2 + 0x18) = 0;
        lVar6 = puVar2[0x11];
        func_0x0001087e86e0();
        lVar10 = *plVar4;
        if (lVar10 == 0) {
          func_0x000107c3a5c0();
          lVar10 = *plVar4;
        }
        plVar7 = (long *)(lVar6 + 0x10);
        do {
          if (*plVar7 == 0) {
            func_0x0001087e8810();
            plVar7 = extraout_x8_01;
            uVar1 = extraout_w10_03;
            uVar9 = extraout_w11_00;
          }
          else {
            func_0x0001087e8c94();
            plVar7 = extraout_x8_00;
            uVar1 = extraout_w10_02;
            uVar9 = extraout_w11;
          }
          if ((uVar9 & 1) != 0) {
LAB_1087e4558:
            func_0x0001087e9058();
            uVar8 = extraout_x8_04;
            if ((bool)in_ZR) {
              func_0x0001087e8788();
              func_0x0001087e8e1c();
              func_0x0001087e8c5c();
              uVar8 = extraout_x8_05;
            }
            uVar8 = uVar8 & 0xffffffff;
            plVar3[uVar8 * 3 + 2] = 0;
            plVar3[uVar8 * 3 + 3] = (long)puVar2;
            plVar3[uVar8 * 3 + 4] = lVar10;
            func_0x0001087e8778(*(undefined8 *)(lVar6 + 0x90));
            *(undefined8 *)(lVar6 + 0x10) = 0;
            goto LAB_1087e4544;
          }
        } while ((uVar1 >> 1 & 1) == 0);
      }
      func_0x000107c28870(puVar2 + 0x11);
      func_0x0001087e8be0();
      func_0x0001087e8ba4();
      func_0x0001087e8928();
      func_0x0001087e8bd0();
      func_0x0001087e8b70();
      func_0x0001087e8d04();
      puVar5 = puVar2 + 0xf;
    }
    else {
      func_0x0001087e8fec();
      func_0x000107c314e0(puVar2 + 0x15);
      lVar6 = *param_4;
      puVar2[0x16] = lVar6;
      if (lVar6 != 0) {
        do {
          func_0x0001087e8700();
        } while (extraout_w10_04 != 0);
      }
      func_0x0001087e8d0c();
      plVar4 = puVar2 + 0x15;
      param_3 = puVar2 + 0x16;
      FUN_1087ae498(puVar2 + 0x10,plVar4,param_3,puVar2 + 0xc);
      puVar2[0xf] = puVar2[0x10];
      do {
        func_0x0001087e8700();
      } while (extraout_w10_05 != 0);
      func_0x0001087e8868(puVar2[0xf]);
      if ((extraout_w8_00 >> 1 & 1) == 0) {
        *(undefined1 *)(puVar2 + 0x18) = 1;
        lVar6 = puVar2[0xf];
        func_0x0001087e86e0();
        lVar10 = *plVar4;
        if (lVar10 == 0) {
          func_0x000107c3a5c0();
          lVar10 = *plVar4;
        }
        plVar7 = (long *)(lVar6 + 0x10);
        do {
          if (*plVar7 == 0) {
            func_0x0001087e8810();
            plVar7 = extraout_x8_03;
            uVar1 = extraout_w10_07;
            uVar9 = extraout_w11_02;
          }
          else {
            func_0x0001087e8c94();
            plVar7 = extraout_x8_02;
            uVar1 = extraout_w10_06;
            uVar9 = extraout_w11_01;
          }
          if ((uVar9 & 1) != 0) goto LAB_1087e4558;
        } while ((uVar1 >> 1 & 1) == 0);
      }
      func_0x000107c28834(puVar2 + 0xf);
      func_0x000107c27f9c(puVar2 + 0xf);
      func_0x0001087e8d04();
      func_0x0001087e8928();
      func_0x000107c27f9c(puVar2 + 0x16);
      puVar5 = puVar2 + 0x15;
    }
    func_0x000107c27f9c(puVar5);
  }
  func_0x0001087e896c();
  func_0x0001087e8e94();
  func_0x0001087e49c4(auStack_b8);
  plVar4 = puVar2 + 4;
  FUN_1087a33a8(plVar4);
  while( true ) {
    func_0x0001087e8800();
    func_0x0001087e8830();
LAB_1087e4544:
    func_0x000107c33630(uStack_48);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if ((int)param_3 != 0) goto LAB_1087e45a8;
    do {
      func_0x0001087e88c0();
LAB_1087e45a8:
      func_0x000104bd46a0(plVar4);
    } while ((int)param_3 == 0);
    func_0x0001087e8be0();
    func_0x0001087e8ba4();
    func_0x0001087e8928();
    func_0x0001087e8bd0();
    func_0x0001087e8b70();
    func_0x0001087e8d04();
    plVar4 = puVar2 + 0xf;
    func_0x000107c27f9c();
    func_0x0001087e8b18();
    func_0x0001087e8854();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1087e4670; end: 1087e46b3;  */

undefined8 * FUN_1087e4670(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a722b0;
  func_0x000107c299a4(param_1 + 8);
  func_0x000107c28868(param_1 + 5);
  func_0x000107c299a0(param_1 + 2);
  return param_1;
}



/* Entry: 1087e46b4; end: 1087e46f7;  */

void FUN_1087e46b4(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  func_0x0001087e8f58();
  return;
}



/* Entry: 1087e46f8; end: 1087e4767;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1087e46f8(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar5 = (undefined8 *)(param_1 + 8);
  FUN_1087e4844(*puVar5,puVar5,param_2);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 1087e4768; end: 1087e47af;  */

void FUN_1087e4768(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0x110;
  __Znwm();
  FUN_1087e47b0();
  uStack_30 = 0;
  uStack_28 = 0;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  func_0x000107c27f98(&uStack_30);
  func_0x0001087e8f58();
  return;
}



/* Entry: 1087e47b0; end: 1087e47db;  */

void FUN_1087e47b0(undefined8 *param_1)

{
  func_0x000107c31510();
  *param_1 = &PTR_FUN_110a725d0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  return;
}



/* Entry: 1087e47dc; end: 1087e47df;  */

undefined8 * FUN_1087e47dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a725d0;
  FUN_1087e4824(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087e47e0; end: 1087e47f3;  */

void FUN_1087e47e0(void)

{
  FUN_1087e47f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087e47f4; end: 1087e4823;  */

undefined8 * FUN_1087e47f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a725d0;
  FUN_1087e4824(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087e4824; end: 1087e4843;  */

void FUN_1087e4824(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    func_0x0001087e49c4();
  }
  return;
}



/* Entry: 1087e4844; end: 1087e48b7;  */

long FUN_1087e4844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x0001087e89fc();
  do {
    uStack_38 = 0;
    lVar1 = unaff_x20 + 0x10;
    func_0x0001087e87f4(lVar1,&uStack_38);
    if ((int)lVar1 != 0) {
      FUN_1087e48b8(unaff_x20 + 0x98,param_3);
      func_0x0001087e8fd8();
      func_0x000107c31508();
      return lVar1;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  return lVar1;
}



/* Entry: 1087e48b8; end: 1087e48e3;  */

void FUN_1087e48b8(void)

{
  func_0x0001087e89fc();
  FUN_1087e48e4();
  func_0x0001087e4908();
  return;
}



/* Entry: 1087e48e4; end: 1087e4923;  */

void FUN_1087e48e4(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    func_0x0001087e49c4();
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  return;
}



/* Entry: 1087e4924; end: 1087e49ef;  */

void FUN_1087e4924(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107c33660();
  *param_1 = *param_2;
  FUN_1087a9638(param_1 + 1,param_2 + 1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined1 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar1;
  *(undefined1 *)(unaff_x19 + 0x68) = 0;
  if (*(char *)(unaff_x20 + 0x68) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)(unaff_x20 + 0x60);
    *(undefined8 *)(unaff_x19 + 0x58) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x50) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x58) = 0;
    *(undefined8 *)(unaff_x20 + 0x60) = 0;
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    *(undefined1 *)(unaff_x19 + 0x68) = 1;
  }
  return;
}



/* Entry: 1087e49f0; end: 1087e4afb;  */

ulong * FUN_1087e49f0(ulong *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong *puStack_80;
  undefined1 uStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  ulong *puStack_60;
  undefined1 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar5 = *param_2;
  lVar1 = param_2[1];
  uStack_78 = 0;
  lVar2 = lVar1 - lVar5;
  puStack_80 = param_1;
  if (lVar2 != 0) {
    uVar4 = lVar2 >> 7;
    if (uVar4 >> 0x39 != 0) {
      FUN_1087e4afc();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1087e4ad8);
      (*pcVar3)();
    }
    FUN_1087e4b08();
    *param_1 = uVar4;
    param_1[1] = uVar4;
    puStack_70 = param_1 + 2;
    *puStack_70 = uVar4 + (long)param_2 * 0x80;
    puStack_68 = &uStack_50;
    puStack_60 = &uStack_48;
    uStack_58 = 0;
    uStack_50 = uVar4;
    for (; uStack_48 = uVar4, lVar5 != lVar1; lVar5 = lVar5 + 0x80) {
      func_0x0001087e4b38(uVar4,lVar5);
      uVar4 = uStack_48 + 0x80;
    }
    uStack_58 = 1;
    FUN_1087e4ba4(&puStack_70);
    param_1[1] = uVar4;
  }
  uStack_78 = 1;
  FUN_1087e4bf4(&puStack_80);
  return param_1;
}



/* Entry: 1087e4afc; end: 1087e4b07;  */

void FUN_1087e4afc(ulong param_1)

{
  func_0x0001087e87c8();
  if (param_1 >> 0x39 == 0) {
    __Znwm(param_1 << 7);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001087e8dcc();
  FUN_1087e4b58();
  return;
}



/* Entry: 1087e4b08; end: 1087e4b57;  */

void FUN_1087e4b08(ulong param_1)

{
  if (param_1 >> 0x39 == 0) {
    __Znwm(param_1 << 7);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001087e8dcc();
  FUN_1087e4b58();
  return;
}



/* Entry: 1087e4b58; end: 1087e4ba3;  */

void FUN_1087e4b58(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c33660();
  *param_1 = *param_2;
  FUN_1087a31d4(param_1 + 1,param_2 + 1);
  *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000107c279a0(unaff_x19 + 0x50,unaff_x20 + 0x50);
  return;
}



/* Entry: 1087e4ba4; end: 1087e4bf3;  */

long FUN_1087e4ba4(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x80) {
      func_0x0001087e49c4(lVar1 + -0x70);
    }
  }
  return param_1;
}



/* Entry: 1087e4bf4; end: 1087e4c1f;  */

long FUN_1087e4bf4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1087e4c20(param_1);
  }
  return param_1;
}



/* Entry: 1087e4c20; end: 1087e4c77;  */

void FUN_1087e4c20(long *param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = (long *)*param_1;
  lVar2 = *param_1;
  if (lVar2 != 0) {
    for (lVar1 = param_1[1]; lVar1 != lVar2; lVar1 = lVar1 + -0x80) {
      func_0x0001087e49c4(lVar1 + -0x70);
    }
    param_1[1] = lVar2;
    func_0x0001087e904c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087e4c78; end: 1087e4c83;  */

void FUN_1087e4c78(void)

{
  func_0x0001087e87c8();
  func_0x0001087e8b20();
  FUN_1087e4c20();
  return;
}



/* Entry: 1087e4c84; end: 1087e4ceb;  */

void FUN_1087e4c84(void)

{
  func_0x0001087e8b20();
  FUN_1087e4c20();
  return;
}



/* Entry: 1087e4cec; end: 1087e56f3;  */

void FUN_1087e4cec(long *param_1,long param_2,long *param_3,undefined8 *param_4,long *param_5)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined ***pppuVar12;
  ulong uVar13;
  ulong uVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  undefined4 extraout_w8_03;
  uint extraout_w8_04;
  undefined4 extraout_w8_05;
  undefined4 extraout_w8_06;
  undefined8 extraout_x8;
  long lVar17;
  code *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  uint extraout_w9;
  undefined4 uVar18;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar19;
  long *plVar20;
  long *plVar21;
  undefined4 uVar22;
  long *plVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_68;
  
  func_0x000107c33638();
  puVar6 = (undefined8 *)0x2a0;
  uStack_68 = extraout_x8;
  __Znwm();
  *puVar6 = FUN_1087e734c;
  puVar6[1] = FUN_1087e7a18;
  puVar6[0x52] = param_5;
  puVar6[0x51] = param_4;
  puVar6[0x50] = param_3;
  puVar6[0x4f] = param_2;
  puVar7 = (undefined8 *)0x120;
  __Znwm();
  puVar8 = puVar7;
  func_0x0001087e8fb4();
  *puVar8 = &PTR_FUN_110a72330;
  *(undefined1 *)(puVar8 + 0x13) = 0;
  *(undefined1 *)(puVar8 + 0x23) = 0;
  uStack_f0 = (undefined **)0x0;
  ppuStack_120 = (undefined **)0x0;
  func_0x000107c27f98(&ppuStack_120);
  func_0x000107c27f9c(&uStack_f0);
  plVar21 = puVar6 + 3;
  *plVar21 = (long)puVar7;
  puVar6[2] = puVar7;
  uStack_f0 = (undefined **)0x0;
  uStack_e8 = 0;
  func_0x000107c27fec(&uStack_f0);
  uStack_f0 = (undefined **)puVar6[2];
  if (uStack_f0 != (undefined **)0x0) {
    do {
      func_0x0001087e8700();
    } while (extraout_w10 != 0);
  }
  plVar20 = puVar6 + 0x4a;
  *param_1 = (long)uStack_f0;
  uStack_f0 = (undefined **)0x0;
  puVar8 = &uStack_f0;
  func_0x000107c27f9c();
  puVar6[0x35] = 0;
  func_0x000107c28258();
  puVar6[0x36] = puVar8;
  *(undefined1 *)(puVar6 + 0x37) = 1;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  lVar25 = param_4[0x34];
  lVar17 = param_4[0x35];
  puVar6[0x4a] = lVar25;
  puVar6[0x4b] = lVar17;
  if (lVar17 != 0) {
    do {
      func_0x000107c33634();
    } while (extraout_w10_00 != 0);
  }
  *(undefined1 *)(puVar6 + 0x4c) = 0;
  *(undefined1 *)(puVar6 + 0x4d) = 0;
  lVar17 = *param_5;
  puVar6[0x4e] = lVar17;
  if (lVar17 != 0) {
    do {
      func_0x0001087e8700();
    } while (extraout_w10_01 != 0);
    lVar25 = *plVar20;
  }
  func_0x0001087e8f08();
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  func_0x0001087e885c(uVar9);
  (*extraout_x8_00)();
  FUN_1087afe5c(lVar25,puVar8,uVar9,0,puVar6 + 0x4c);
  pcVar10 = (char *)(param_2 + 200);
  func_0x000107c289e8();
  uVar4 = *pcVar10 != '\0';
  uVar5 = *pcVar10 == '\x01';
  if ((bool)uVar5) {
    puVar6[0x1e] = puVar6[0x4b];
    puVar6[0x1d] = puVar6[0x4a];
    if (puVar6[0x4b] != 0) {
      do {
        func_0x000107c33634();
      } while (extraout_w10_02 != 0);
    }
    uVar9 = *(undefined8 *)(param_2 + 0x18);
    puVar6[0x20] = *(undefined8 *)(param_2 + 0x20);
    puVar6[0x1f] = uVar9;
    if (*(long *)(param_2 + 0x20) != 0) {
      do {
        func_0x000107c33634();
      } while (extraout_w10_03 != 0);
    }
    func_0x0001087e8f08();
    puVar6[0x21] = pcVar10;
    puVar6[0x2a] = 0;
    pcVar11 = pcVar10;
    func_0x0001087e8eac();
    *(undefined ***)pcVar11 = &PTR_FUN_110a72370;
    uVar9 = puVar6[0x1d];
    *(undefined8 *)(pcVar11 + 0x10) = puVar6[0x1e];
    *(undefined8 *)(pcVar11 + 8) = uVar9;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    uVar9 = puVar6[0x1f];
    *(undefined8 *)(pcVar11 + 0x20) = puVar6[0x20];
    *(undefined8 *)(pcVar11 + 0x18) = uVar9;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    *(char **)(pcVar11 + 0x28) = pcVar10;
    puVar6[0x2a] = pcVar11;
    func_0x000107c283c8(param_4 + 0x2c,puVar6 + 0x27);
    func_0x000107c27938(puVar6 + 0x27);
    puVar8 = puVar6 + 0x1d;
    FUN_1087e5a68();
    puVar6[0x39] = puVar6[0x4b];
    puVar6[0x38] = puVar6[0x4a];
    if (puVar6[0x4b] != 0) {
      do {
        func_0x000107c33634();
      } while (extraout_w10_04 != 0);
    }
    func_0x0001087e8f08();
    puVar6[0x3a] = puVar8;
    puVar6[0x2e] = 0;
    puVar7 = puVar8;
    func_0x000107c3367c();
    *puVar7 = &PTR_FUN_110a723f0;
    uVar9 = puVar6[0x38];
    puVar7[2] = puVar6[0x39];
    puVar7[1] = uVar9;
    puVar6[0x38] = 0;
    puVar6[0x39] = 0;
    puVar7[3] = puVar8;
    puVar6[0x2e] = puVar7;
    func_0x000107c283c8(param_4 + 0x30,puVar6 + 0x2b);
    func_0x000107c27938(puVar6 + 0x2b);
    func_0x000108794594(puVar6 + 0x38);
  }
  puVar6[0x12] = 0x1087e5ba8;
  puVar6[0x13] = &PTR_DAT_110a72460;
  puVar6[0x14] = plVar20;
  pppuVar12 = (undefined ***)(param_4 + 3);
  (**(code **)(*param_3 + 0x10))(puVar6 + 0x2f,param_3,pppuVar12,puVar6 + 0x4e);
  puVar6[0x18] = puVar6[0x2f];
  do {
    func_0x0001087e8700();
  } while (extraout_w10_05 != 0);
  func_0x0001087e8868(puVar6[0x18]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x53) = 0;
    lVar25 = puVar6[0x18];
    func_0x0001087e86e0();
    param_4 = (undefined8 *)*param_3;
    if (param_4 == (undefined8 *)0x0) {
      func_0x000107c3a5c0();
      param_4 = (undefined8 *)*param_3;
    }
    plVar23 = (long *)(lVar25 + 0x10);
    do {
      if (*plVar23 == 0) {
        func_0x0001087e8810();
        plVar23 = extraout_x8_02;
        uVar1 = extraout_w10_07;
        uVar19 = extraout_w11_00;
      }
      else {
        func_0x0001087e8c94();
        plVar23 = extraout_x8_01;
        uVar1 = extraout_w10_06;
        uVar19 = extraout_w11;
      }
      if ((uVar19 & 1) != 0) {
        plVar20 = *(long **)(lVar25 + 0x90);
        func_0x0001087e87a8();
        if ((bool)uVar5) {
          func_0x0001087e8788();
          uVar1 = extraout_w8_02;
          if ((bool)uVar4) {
            uVar1 = extraout_w9;
          }
          plVar21 = (long *)(ulong)uVar1;
          func_0x0001087e86f0();
          func_0x0001087e86c4();
          *(long **)(lVar25 + 0x90) = param_3;
        }
        func_0x0001087e87b8();
        *(undefined8 **)(extraout_x8_04 + 0x20) = param_4;
        func_0x0001087e8778(*(undefined8 *)(lVar25 + 0x90));
        *(undefined8 *)(lVar25 + 0x10) = 0;
        goto LAB_1087e51dc;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  puVar8 = puVar6 + 0x18;
  FUN_1087e5748();
  puVar6[4] = *puVar8;
  func_0x0001087b07bc(puVar6 + 5,puVar8 + 1);
  uVar22 = *(undefined4 *)(puVar8 + 9);
  *(undefined1 *)((long)puVar6 + 0x6c) = *(undefined1 *)((long)puVar8 + 0x4c);
  *(undefined4 *)(puVar6 + 0xd) = uVar22;
  func_0x000107c27c5c(puVar6 + 0xe,puVar8 + 10);
  func_0x0001087e8d4c();
  func_0x0001087e8b80();
LAB_1087e5064:
  do {
    func_0x0001087e8838();
    if (((extraout_w8_00 >> 1 & 1) != 0) ||
       ((func_0x0001087e8838(), (extraout_w8_01 >> 5 & 1) != 0 && (*(int *)(*plVar20 + 0x38) == 0)))
       ) {
      ppuStack_110 = (undefined **)0x0;
      uStack_108 = 0;
      ppuStack_120 = &PTR_FUN_110a6f328;
      uStack_118 = 0;
      uStack_100 = 0x13;
      func_0x0001087e8cc4();
      FUN_1087e8b54();
      pppuVar12 = &ppuStack_120;
      FUN_108791610(&ppuStack_120,puVar6 + 0x47);
      FUN_108791a34(&uStack_f0,pppuVar12);
      lVar25 = puVar6[0x4f];
      func_0x0001087e8cac();
      FUN_108788618(&ppuStack_120);
      plVar23 = *(long **)(lVar25 + 0x48);
      FUN_108791a34(puVar6 + 0x22,&uStack_f0);
      (**(code **)(*plVar23 + 0x60))(plVar23,puVar6 + 0x22);
      func_0x0001087e8c7c();
      func_0x0001087e8ac8();
    }
    func_0x000107c28288(puVar6 + 0x35);
    lVar25 = *(long *)(puVar6[0x4f] + 0x88);
    if (lVar25 == 0) {
      uVar22 = 0;
    }
    else {
      func_0x0001087e885c();
      uVar22 = (undefined4)lVar25;
      (*extraout_x8_03)();
    }
    ppuVar15 = (undefined **)(puVar6 + 0x35);
    FUN_1087b023c();
    uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar22);
    uStack_f0 = ppuVar15;
    func_0x0001087e8e0c();
    lVar25 = *plVar21;
    do {
      ppuStack_120 = (undefined **)0x0;
      iVar24 = (int)lVar25 + 0x10;
      pppuVar12 = &ppuStack_120;
      func_0x0001087e87f4();
      if (iVar24 != 0) {
        uVar5 = *(char *)(lVar25 + 0x118) == '\x01';
        if ((bool)uVar5) {
          func_0x0001087e49c4(lVar25 + 0xa8);
          *(undefined1 *)(lVar25 + 0x118) = 0;
        }
        func_0x0001087e8fa8();
        func_0x0001087e898c();
        break;
      }
    } while (((uint)ppuStack_120 >> 1 & 1) == 0);
    func_0x0001087e8b30();
    param_3 = param_4 + 2;
    func_0x0001087e49c4();
    func_0x0001087e8b9c();
    func_0x0001087e8b4c();
    func_0x0001087e8b44();
    func_0x0001087e8d90();
    func_0x0001087e8ab4();
    func_0x0001087e8800();
    func_0x0001087e8830();
LAB_1087e51dc:
    func_0x000107c33630(uStack_68);
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    if ((int)pppuVar12 != 0) goto LAB_1087e528c;
    do {
      func_0x0001087e8f44();
LAB_1087e528c:
      func_0x000104bd46a0();
      iVar24 = (int)pppuVar12;
    } while (iVar24 == 0);
    puVar8 = pppuVar12;
    func_0x0001087e8d4c();
    func_0x0001087e8b80();
    uVar5 = iVar24 == 6;
    if (!(bool)uVar5) {
      uVar5 = iVar24 == 5;
      if ((bool)uVar5) {
        param_4 = (undefined8 *)puVar6[0x52];
        func_0x0001087e8920();
        func_0x0001087e8868(*param_4);
        if ((extraout_w8_04 >> 1 & 1) == 0) {
          func_0x0001087e9038();
          if (!(bool)uVar5) {
            uVar22 = *(undefined4 *)(puVar8 + 1);
            goto LAB_1087e553c;
          }
          lVar25 = puVar6[0x4f];
          param_4 = *(undefined8 **)(lVar25 + 0x48);
          FUN_1087e57e0();
          plVar23 = *(long **)(lVar25 + 0x48);
          func_0x0001087e88f0();
          uStack_d0 = 0x15;
          func_0x0001087e8df4();
          FUN_1087e8b54();
          func_0x0001087e8eb4();
          puVar8 = param_4;
          func_0x0001087e8da0();
          func_0x0001087e8f38();
          puVar7 = param_4;
          FUN_108791610(param_4,puVar6 + 0x32,puVar8);
          FUN_108791a34(puVar6 + 0x18,puVar7);
          (**(code **)(*plVar23 + 0x60))(plVar23,puVar6 + 0x18);
          lVar25 = puVar6[0x50];
          func_0x0001087e8d44();
          func_0x0001087e8d98();
          func_0x0001087e8cd4();
          func_0x0001087e8ac8();
          uVar22 = *(undefined4 *)(lVar25 + 8);
          uVar18 = 2;
        }
        else {
          func_0x0001087e8ca0();
          uVar22 = extraout_w8_05;
LAB_1087e553c:
          uVar18 = 6;
        }
        uStack_f0 = (undefined **)CONCAT44(uVar18,uVar22);
        func_0x0001087e86a0();
        func_0x0001087e8910();
        ___cxa_end_catch();
      }
      else {
        if (iVar24 == 4) {
          func_0x0001087e8920();
          func_0x0001087e8f90();
          FUN_1087b149c();
          func_0x0001087e8bb4();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1087e5588);
          (*pcVar3)();
        }
        uVar5 = iVar24 == 3;
        if ((bool)uVar5) {
          lVar17 = puVar6[0x51];
          lVar25 = puVar6[0x50];
          lVar26 = puVar6[0x4f];
          func_0x0001087e8920();
          uVar13 = (ulong)*(uint *)(lVar17 + 0x150);
          func_0x000108841bf8(uVar13);
          uVar14 = (ulong)*(uint *)(lVar25 + 8);
          FUN_1087e3048(uVar14);
          FUN_108841e44(lVar26 + 0x48,uVar13,uVar14,param_3);
          lVar25 = puVar6[0x50];
          func_0x000107c31338();
          iVar24 = *(int *)(lVar17 + 0x150);
          iVar2 = *(int *)(lVar25 + 8);
          ppuVar15 = (undefined **)(long)iVar2;
          FUN_1087e3048();
          ppuVar16 = ppuVar15;
          func_0x0001087e8798();
          uStack_118 = 0;
          uStack_108 = 0;
          ppuStack_120 = ppuVar15;
          ppuStack_110 = ppuVar16;
          func_0x0001087e88a4();
          func_0x0001087e8894();
          func_0x0001087e8b0c();
          func_0x0001087e8820(puVar6[0x4f]);
          (*extraout_x8_05)();
          uStack_f0 = (undefined **)CONCAT44(uStack_f0._4_4_,7);
          func_0x0001087e8710((undefined **)(long)iVar2 + (long)iVar24 * 0x7d);
          func_0x0001087e8e44();
          lVar25 = puVar6[0x50];
          func_0x0001087e8908();
          func_0x0001087e8b3c();
          func_0x0001087e8bd8();
          uStack_f0 = (undefined **)CONCAT44(7,*(undefined4 *)(lVar25 + 8));
          func_0x0001087e86a0();
          func_0x0001087e8910();
          uStack_e0 = (ulong)*(uint *)(param_3 + 1);
          uStack_f0 = (undefined **)(uStack_e0 & 0xff);
          uStack_e8 = 0;
          uStack_d8 = 0;
          func_0x0001087e8f1c();
          func_0x0001087e8cb4();
          func_0x0001087e8e70();
          func_0x0001087e8d2c();
          ___cxa_end_catch();
          param_4 = puVar6 + 0x41;
        }
        else {
          func_0x0001087e8920();
          uVar5 = iVar24 == 2;
          if ((bool)uVar5) {
            lVar25 = puVar6[0x51];
            lVar17 = puVar6[0x50];
            func_0x000107c31338();
            iVar24 = *(int *)(lVar25 + 0x150);
            iVar2 = *(int *)(lVar17 + 8);
            ppuVar15 = (undefined **)(long)iVar2;
            FUN_1087e3048();
            ppuVar16 = ppuVar15;
            func_0x0001087e8798();
            uStack_118 = 0;
            uStack_108 = 0;
            ppuStack_120 = ppuVar15;
            ppuStack_110 = ppuVar16;
            func_0x0001087e88a4();
            func_0x0001087e8894();
            func_0x0001087e8b0c();
            func_0x0001087e8820(puVar6[0x4f]);
            (*extraout_x8_06)();
            uStack_f0 = (undefined **)CONCAT44(uStack_f0._4_4_,7);
            func_0x0001087e8710((undefined **)(long)iVar2 + (long)iVar24 * 0x7d);
            func_0x0001087e8e44();
            lVar25 = puVar6[0x50];
            func_0x0001087e8908();
            func_0x0001087e8b3c();
            func_0x0001087e8bd8();
            uStack_f0 = (undefined **)CONCAT44(7,*(undefined4 *)(lVar25 + 8));
            func_0x0001087e86a0();
            func_0x0001087e8910();
            func_0x0001087e8798();
            uStack_f0 = ppuVar16;
            func_0x0001087e8e64();
            ___cxa_end_catch();
            param_4 = puVar6 + 0x3b;
          }
          else {
            func_0x0001087e8ca0();
            uStack_f0 = (undefined **)CONCAT44(7,extraout_w8_06);
            func_0x0001087e86a0();
            func_0x0001087e8910();
            ___cxa_end_catch();
            param_4 = pppuVar12;
          }
        }
      }
      goto LAB_1087e5064;
    }
    param_4 = (undefined8 *)puVar6[0x50];
    lVar25 = puVar6[0x4f];
    func_0x0001087e8920();
    FUN_1087e57e0(*(undefined8 *)(lVar25 + 0x48),param_4);
    func_0x0001087e8ca0();
    uStack_f0 = (undefined **)CONCAT44(2,extraout_w8_03);
    func_0x0001087e86a0();
    func_0x0001087e8910();
    ___cxa_end_catch();
  } while( true );
}



/* Entry: 1087e56f4; end: 1087e56f7;  */

undefined8 * FUN_1087e56f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a722f0;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    FUN_1087e4c84(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087e56f8; end: 1087e570b;  */

void FUN_1087e56f8(void)

{
  FUN_1087e570c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087e570c; end: 1087e5747;  */

undefined8 * FUN_1087e570c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a722f0;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    FUN_1087e4c84(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087e5748; end: 1087e579b;  */

long FUN_1087e5748(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    return *param_1 + 0x98;
  }
  func_0x0001087e8ec0(auStack_28);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1087e578c);
  (*pcVar1)();
}



/* Entry: 1087e579c; end: 1087e57df;  */

void FUN_1087e579c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087e89fc();
  *param_1 = *param_2;
  FUN_1087b12d0(param_1 + 1,param_2 + 1);
  uVar1 = *(undefined1 *)(unaff_x19 + 0x4c);
  *(undefined4 *)(unaff_x20 + 0x48) = *(undefined4 *)(unaff_x19 + 0x48);
  *(undefined1 *)(unaff_x20 + 0x4c) = uVar1;
  func_0x000107c27c54(unaff_x20 + 0x50,unaff_x19 + 0x50);
  return;
}



/* Entry: 1087e57e0; end: 1087e58af;  */

void FUN_1087e57e0(void)

{
  ulong uVar1;
  undefined ***pppuVar2;
  long *unaff_x19;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [40];
  
  func_0x000107c33660();
  uStack_60 = 0;
  uStack_58 = 0;
  ppuStack_70 = &PTR_FUN_110a6f328;
  uStack_68 = 0;
  uStack_50 = 0x14;
  func_0x000107c278b8(auStack_88,&UNK_10f4bb1eb);
  uVar1 = (ulong)*(uint *)(unaff_x20 + 8);
  FUN_1087e3048(uVar1);
  pppuVar2 = &ppuStack_70;
  FUN_108791610(pppuVar2,auStack_88,uVar1);
  FUN_108791a34(auStack_48,pppuVar2);
  (**(code **)(*unaff_x19 + 0x60))();
  FUN_108788618(auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  FUN_108788618(&ppuStack_70);
  return;
}



/* Entry: 1087e58b0; end: 1087e58b3;  */

undefined8 * FUN_1087e58b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72330;
  if (*(char *)(param_1 + 0x23) == '\x01') {
    func_0x0001087e49c4(param_1 + 0x15);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087e58b4; end: 1087e58c7;  */

void FUN_1087e58b4(void)

{
  FUN_1087e58c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


