/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053a74f4; end: 1053a7507;  */

void FUN_1053a74f4(void)

{
  FUN_1053a7508();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053a7508; end: 1053a7537;  */

undefined8 * FUN_1053a7508(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108810b8;
  func_0x00010076e324(param_1 + 1);
  return param_1;
}



/* Entry: 1053a7538; end: 1053a75bb;  */

undefined8 * FUN_1053a7538(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x000100c1b8b0();
  *puVar1 = &PTR_FUN_110881100;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 0x13,param_2);
  FUN_1053a903c(puVar1 + 0xe,0);
  return param_1;
}



/* Entry: 1053a75bc; end: 1053a75db;  */

void FUN_1053a75bc(void)

{
  func_0x000100c1b898();
  func_0x0001053a063c();
  return;
}



/* Entry: 1053a75dc; end: 1053a7607;  */

void FUN_1053a75dc(void)

{
  return;
}



/* Entry: 1053a7608; end: 1053a8817;  */

void FUN_1053a7608(long **param_1,long param_2,long param_3)

{
  long **pplVar1;
  undefined **ppuVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long **extraout_x8;
  long **extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  int *extraout_x8_03;
  code *extraout_x8_04;
  undefined **ppuVar14;
  long lVar15;
  long **extraout_x8_05;
  long *extraout_x8_06;
  long **pplVar16;
  int *extraout_x8_07;
  code *extraout_x8_08;
  long *extraout_x9;
  long **pplVar17;
  long **extraout_x9_00;
  long **extraout_x9_01;
  long **pplVar18;
  ulong uVar19;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long *extraout_x9_04;
  ulong extraout_x9_05;
  long *extraout_x9_06;
  long **extraout_x9_07;
  ulong extraout_x9_08;
  long *plVar20;
  long *extraout_x9_09;
  ulong extraout_x9_10;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  undefined **ppuVar21;
  long *extraout_x10_03;
  long *plVar22;
  long *extraout_x10_04;
  long *extraout_x10_05;
  long **extraout_x11;
  long **extraout_x11_00;
  long extraout_x11_01;
  long **extraout_x11_02;
  long *plVar23;
  long **pplVar24;
  long *plVar25;
  int iVar26;
  int iVar27;
  long **pplVar28;
  long *plVar29;
  long **unaff_x24;
  long **pplVar30;
  long **unaff_x25;
  long lVar31;
  long **pplStack_128;
  long lStack_110;
  long **pplStack_108;
  long *plStack_100;
  ulong uStack_f8;
  float fStack_f0;
  long lStack_e0;
  long **pplStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  float fStack_c0;
  long *plStack_b0;
  long **pplStack_a8;
  long *plStack_a0;
  long *plStack_98;
  float fStack_90;
  long *plStack_80;
  long **pplStack_78;
  undefined8 uStack_70;
  
  pplStack_d8 = (long **)0x0;
  lStack_e0 = 0;
  plStack_c8 = (long *)0x0;
  plStack_d0 = (long *)0x0;
  fStack_c0 = 1.0;
  pplStack_108 = (long **)0x0;
  lStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  pplStack_128 = &plStack_100;
  fStack_f0 = 1.0;
  pplVar1 = (long **)(param_3 + 0x10);
  pplVar30 = param_1;
  for (pplVar28 = (long **)0x0; bVar6 = pplVar28 == (long **)(long)*(int *)(param_3 + 0x18),
      (long)pplVar28 < (long)*(int *)(param_3 + 0x18); pplVar28 = (long **)((long)pplVar28 + 1)) {
    func_0x0001053a95e4(*pplVar1);
    pplVar18 = pplStack_108;
    plVar29 = extraout_x10;
    if (!bVar6) {
      plVar29 = extraout_x9;
    }
    lVar31 = *plVar29;
    if (*(int *)(lVar31 + 0x40) == 1) {
      uVar13 = *(ulong *)(lVar31 + 0x38);
      unaff_x24 = &plStack_c8;
      func_0x000100102e7c(unaff_x24,uVar13 & 0xfffffffffffffffc);
      pplVar18 = pplStack_d8;
      if (pplStack_d8 != (long **)0x0) {
        uVar19 = (long)pplStack_d8 - 1;
        if (((ulong)pplStack_d8 & uVar19) == 0) {
          unaff_x25 = (long **)(uVar19 & (ulong)unaff_x24);
        }
        else {
          unaff_x25 = unaff_x24;
          if (pplStack_d8 <= unaff_x24) {
            uVar3 = 0;
            if (pplStack_d8 != (long **)0x0) {
              uVar3 = (ulong)unaff_x24 / (ulong)pplStack_d8;
            }
            unaff_x25 = (long **)((long)unaff_x24 - uVar3 * (long)pplStack_d8);
          }
        }
        plVar29 = *(long **)(lStack_e0 + (long)unaff_x25 * 8);
        if (plVar29 != (long *)0x0) {
          do {
            while( true ) {
              plVar29 = (long *)*plVar29;
              if (plVar29 == (long *)0x0) goto LAB_1053a7844;
              pplVar30 = (long **)plVar29[1];
              if (pplVar30 != unaff_x24) break;
              pplVar30 = (long **)(plVar29 + 2);
              func_0x0001000e107c(pplVar30,uVar13 & 0xfffffffffffffffc);
              if (((ulong)pplVar30 & 1) != 0) goto LAB_1053a7cc0;
            }
            if (((ulong)pplVar18 & uVar19) == 0) {
              pplVar30 = (long **)((ulong)pplVar30 & uVar19);
            }
            else if (pplVar18 <= pplVar30) {
              uVar3 = 0;
              if (pplVar18 != (long **)0x0) {
                uVar3 = (ulong)pplVar30 / (ulong)pplVar18;
              }
              pplVar30 = (long **)((long)pplVar30 - uVar3 * (long)pplVar18);
            }
          } while (pplVar30 == unaff_x25);
        }
      }
LAB_1053a7844:
      plVar29 = (long *)0x30;
      __Znwm();
      plStack_a0 = (long *)0x0;
      *plVar29 = 0;
      plVar29[1] = (long)unaff_x24;
      plStack_b0 = plVar29;
      pplStack_a8 = &plStack_d0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (plVar29 + 2,uVar13 & 0xfffffffffffffffc);
      plVar29[5] = 0;
      plStack_a0 = (long *)CONCAT71(plStack_a0._1_7_,1);
      if ((pplVar18 == (long **)0x0) ||
         (fStack_c0 * (float)pplVar18 < (float)((long)plStack_c8 + 1))) {
        func_0x0001053a9718();
        bVar5 = (long **)0x2 < pplVar18;
        bVar6 = pplVar18 == (long **)0x3;
        func_0x0001053a9590();
        pplVar30 = extraout_x8_00;
        if (!bVar5 || bVar6) {
          pplVar30 = extraout_x9_01;
        }
        if ((long)pplVar30 - 1U == 0) {
          pplVar30 = (long **)0x2;
        }
        else if (((ulong)pplVar30 & (long)pplVar30 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        pplVar17 = pplStack_d8;
        if (pplStack_d8 < pplVar30) {
LAB_1053a7a00:
          if ((ulong)pplVar30 >> 0x3d != 0) {
            func_0x000104bd35f4();
LAB_1053a8794:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1053a8798);
            (*pcVar4)();
          }
          lVar8 = (long)pplVar30 << 3;
          __Znwm(lVar8);
          FUN_1053a90fc(&lStack_e0,lVar8);
          for (pplVar18 = (long **)0x0; pplVar30 != pplVar18;
              pplVar18 = (long **)((long)pplVar18 + 1)) {
            *(undefined8 *)(lStack_e0 + (long)pplVar18 * 8) = 0;
          }
          pplVar18 = pplVar30;
          pplStack_d8 = pplVar30;
          if (plStack_d0 != (long *)0x0) {
            pplVar17 = (long **)plStack_d0[1];
            uVar19 = (long)pplVar30 - 1;
            uVar13 = 0;
            if (pplVar30 != (long **)0x0) {
              uVar13 = (ulong)pplVar17 / (ulong)pplVar30;
            }
            pplVar24 = pplVar17;
            if (pplVar30 <= pplVar17) {
              pplVar24 = (long **)((long)pplVar17 - uVar13 * (long)pplVar30);
            }
            if (((ulong)pplVar30 & uVar19) == 0) {
              pplVar24 = (long **)((ulong)pplVar17 & uVar19);
            }
            *(long ***)(lStack_e0 + (long)pplVar24 * 8) = &plStack_d0;
            lVar8 = lStack_e0;
            plVar23 = plStack_d0;
            while (plVar20 = plVar23, plVar23 = (long *)*plVar20, plVar23 != (long *)0x0) {
              pplVar17 = (long **)plVar23[1];
              if (((ulong)pplVar30 & uVar19) == 0) {
                pplVar17 = (long **)((ulong)pplVar17 & uVar19);
              }
              else if (pplVar30 <= pplVar17) {
                uVar13 = 0;
                if (pplVar30 != (long **)0x0) {
                  uVar13 = (ulong)pplVar17 / (ulong)pplVar30;
                }
                pplVar17 = (long **)((long)pplVar17 - uVar13 * (long)pplVar30);
              }
              if (pplVar17 != pplVar24) {
                if (*(long *)(lVar8 + (long)pplVar17 * 8) == 0) {
                  *(long **)(lVar8 + (long)pplVar17 * 8) = plVar20;
                  pplVar24 = pplVar17;
                }
                else {
                  func_0x0001053a9510();
                  lVar8 = extraout_x8_02;
                  uVar19 = extraout_x9_03;
                  plVar23 = extraout_x10_01;
                  pplVar24 = extraout_x11_00;
                }
              }
            }
          }
        }
        else {
          pplVar18 = pplStack_d8;
          if (pplVar30 < pplStack_d8) {
            pplVar18 = (long **)(long)((float)plStack_c8 / fStack_c0);
            if ((pplStack_d8 < (long **)0x3) || (((ulong)pplStack_d8 & (long)pplStack_d8 - 1U) != 0)
               ) {
              __ZNSt3__112__next_primeEm();
            }
            else {
              func_0x0001053a94f0();
            }
            if (pplVar30 <= pplVar18) {
              pplVar30 = pplVar18;
            }
            pplVar18 = pplStack_d8;
            if (pplVar30 < pplVar17) {
              if (pplVar30 != (long **)0x0) goto LAB_1053a7a00;
              FUN_1053a90fc(&lStack_e0,0);
              pplStack_d8 = (long **)0x0;
              pplVar18 = (long **)0x0;
            }
          }
        }
        if (((ulong)pplVar18 & (long)pplVar18 - 1U) == 0) {
          unaff_x25 = (long **)((long)pplVar18 - 1U & (ulong)unaff_x24);
        }
        else {
          unaff_x25 = unaff_x24;
          if (pplVar18 <= unaff_x24) {
            uVar13 = 0;
            if (pplVar18 != (long **)0x0) {
              uVar13 = (ulong)unaff_x24 / (ulong)pplVar18;
            }
            unaff_x25 = (long **)((long)unaff_x24 - uVar13 * (long)pplVar18);
          }
        }
      }
      plVar23 = *(long **)(lStack_e0 + (long)unaff_x25 * 8);
      if (plVar23 == (long *)0x0) {
        *plVar29 = (long)plStack_d0;
        *(long ***)(lStack_e0 + (long)unaff_x25 * 8) = &plStack_d0;
        plStack_d0 = plVar29;
        if (*plVar29 != 0) {
          pplVar30 = *(long ***)(*plVar29 + 8);
          if (((ulong)pplVar18 & (long)pplVar18 - 1U) == 0) {
            pplVar30 = (long **)((ulong)pplVar30 & (long)pplVar18 - 1U);
          }
          else if (pplVar18 <= pplVar30) {
            uVar13 = 0;
            if (pplVar18 != (long **)0x0) {
              uVar13 = (ulong)pplVar30 / (ulong)pplVar18;
            }
            pplVar30 = (long **)((long)pplVar30 - uVar13 * (long)pplVar18);
          }
          *(long **)(lStack_e0 + (long)pplVar30 * 8) = plVar29;
        }
      }
      else {
        *plVar29 = *plVar23;
        *plVar23 = (long)plVar29;
      }
      plStack_b0 = (long *)0x0;
      plStack_c8 = (long *)((long)plStack_c8 + 1);
      pplVar30 = &plStack_b0;
      FUN_1053a9114();
LAB_1053a7cc0:
      plVar29[5] = lVar31;
    }
    else if (*(int *)(lVar31 + 0x40) == 2) {
      unaff_x25 = *(long ***)(lVar31 + 0x38);
      if (pplStack_108 != (long **)0x0) {
        uVar13 = (long)pplStack_108 - 1;
        if (((ulong)pplStack_108 & uVar13) == 0) {
          unaff_x24 = (long **)(uVar13 & (ulong)unaff_x25);
        }
        else {
          unaff_x24 = unaff_x25;
          if (pplStack_108 <= unaff_x25) {
            uVar19 = 0;
            if (pplStack_108 != (long **)0x0) {
              uVar19 = (ulong)unaff_x25 / (ulong)pplStack_108;
            }
            unaff_x24 = (long **)((long)unaff_x25 - uVar19 * (long)pplStack_108);
          }
        }
        plVar29 = *(long **)(lStack_110 + (long)unaff_x24 * 8);
        if (plVar29 != (long *)0x0) {
          do {
            while( true ) {
              plVar29 = (long *)*plVar29;
              if (plVar29 == (long *)0x0) goto LAB_1053a7774;
              pplVar17 = (long **)plVar29[1];
              if (pplVar17 != unaff_x25) break;
              if ((long **)plVar29[2] == unaff_x25) goto LAB_1053a7bdc;
            }
            if (((ulong)pplStack_108 & uVar13) == 0) {
              pplVar17 = (long **)((ulong)pplVar17 & uVar13);
            }
            else if (pplStack_108 <= pplVar17) {
              uVar19 = 0;
              if (pplStack_108 != (long **)0x0) {
                uVar19 = (ulong)pplVar17 / (ulong)pplStack_108;
              }
              pplVar17 = (long **)((long)pplVar17 - uVar19 * (long)pplStack_108);
            }
          } while (pplVar17 == unaff_x24);
        }
      }
LAB_1053a7774:
      plVar29 = (long *)0x20;
      __Znwm();
      plStack_a0 = (long *)0x1;
      *plVar29 = 0;
      plVar29[1] = (long)unaff_x25;
      plVar29[2] = (long)unaff_x25;
      plVar29[3] = 0;
      pplStack_a8 = pplStack_128;
      if ((pplVar18 == (long **)0x0) || (fStack_f0 * (float)pplVar18 < (float)(uStack_f8 + 1))) {
        plStack_b0 = plVar29;
        func_0x0001053a9718();
        bVar5 = (long **)0x2 < pplVar18;
        bVar6 = pplVar18 == (long **)0x3;
        func_0x0001053a9590();
        pplVar30 = extraout_x8;
        if (!bVar5 || bVar6) {
          pplVar30 = extraout_x9_00;
        }
        pplVar17 = pplVar18;
        if ((long)pplVar30 - 1U == 0) {
          pplVar30 = (long **)0x2;
        }
        else if (((ulong)pplVar30 & (long)pplVar30 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          pplVar17 = pplStack_108;
        }
        if (pplVar17 < pplVar30) {
LAB_1053a78e0:
          if ((ulong)pplVar30 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_1053a8794;
          }
          lVar8 = (long)pplVar30 << 3;
          __Znwm(lVar8);
          FUN_1053a9154(&lStack_110,lVar8);
          for (pplVar18 = (long **)0x0; pplVar30 != pplVar18;
              pplVar18 = (long **)((long)pplVar18 + 1)) {
            *(undefined8 *)(lStack_110 + (long)pplVar18 * 8) = 0;
          }
          pplVar18 = pplVar30;
          pplStack_108 = pplVar30;
          if (plStack_100 != (long *)0x0) {
            pplVar17 = (long **)plStack_100[1];
            uVar19 = (long)pplVar30 - 1;
            uVar13 = 0;
            if (pplVar30 != (long **)0x0) {
              uVar13 = (ulong)pplVar17 / (ulong)pplVar30;
            }
            pplVar24 = pplVar17;
            if (pplVar30 <= pplVar17) {
              pplVar24 = (long **)((long)pplVar17 - uVar13 * (long)pplVar30);
            }
            if (((ulong)pplVar30 & uVar19) == 0) {
              pplVar24 = (long **)((ulong)pplVar17 & uVar19);
            }
            *(long ***)(lStack_110 + (long)pplVar24 * 8) = pplStack_128;
            lVar8 = lStack_110;
            plVar23 = plStack_100;
            while (plVar20 = plVar23, plVar23 = (long *)*plVar20, plVar23 != (long *)0x0) {
              pplVar17 = (long **)plVar23[1];
              if (((ulong)pplVar30 & uVar19) == 0) {
                pplVar17 = (long **)((ulong)pplVar17 & uVar19);
              }
              else if (pplVar30 <= pplVar17) {
                uVar13 = 0;
                if (pplVar30 != (long **)0x0) {
                  uVar13 = (ulong)pplVar17 / (ulong)pplVar30;
                }
                pplVar17 = (long **)((long)pplVar17 - uVar13 * (long)pplVar30);
              }
              if (pplVar17 != pplVar24) {
                if (*(long *)(lVar8 + (long)pplVar17 * 8) == 0) {
                  *(long **)(lVar8 + (long)pplVar17 * 8) = plVar20;
                  pplVar24 = pplVar17;
                }
                else {
                  func_0x0001053a9510();
                  lVar8 = extraout_x8_01;
                  uVar19 = extraout_x9_02;
                  plVar23 = extraout_x10_00;
                  pplVar24 = extraout_x11;
                }
              }
            }
          }
        }
        else {
          pplVar18 = pplVar17;
          if (pplVar30 < pplVar17) {
            pplVar18 = (long **)(long)((float)uStack_f8 / fStack_f0);
            if ((pplVar17 < (long **)0x3) || (((ulong)pplVar17 & (long)pplVar17 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else {
              func_0x0001053a94f0();
            }
            if (pplVar30 <= pplVar18) {
              pplVar30 = pplVar18;
            }
            pplVar18 = pplStack_108;
            if (pplVar30 < pplVar17) {
              if (pplVar30 != (long **)0x0) goto LAB_1053a78e0;
              FUN_1053a9154(&lStack_110,0);
              pplStack_108 = (long **)0x0;
              pplVar18 = (long **)0x0;
            }
          }
        }
        if (((ulong)pplVar18 & (long)pplVar18 - 1U) == 0) {
          unaff_x24 = (long **)((long)pplVar18 - 1U & (ulong)unaff_x25);
        }
        else {
          unaff_x24 = unaff_x25;
          if (pplVar18 <= unaff_x25) {
            uVar13 = 0;
            if (pplVar18 != (long **)0x0) {
              uVar13 = (ulong)unaff_x25 / (ulong)pplVar18;
            }
            unaff_x24 = (long **)((long)unaff_x25 - uVar13 * (long)pplVar18);
          }
        }
      }
      plVar23 = *(long **)(lStack_110 + (long)unaff_x24 * 8);
      if (plVar23 == (long *)0x0) {
        *plVar29 = (long)plStack_100;
        *(long ***)(lStack_110 + (long)unaff_x24 * 8) = pplStack_128;
        plStack_100 = plVar29;
        if (*plVar29 != 0) {
          pplVar30 = *(long ***)(*plVar29 + 8);
          if (((ulong)pplVar18 & (long)pplVar18 - 1U) == 0) {
            pplVar30 = (long **)((ulong)pplVar30 & (long)pplVar18 - 1U);
          }
          else if (pplVar18 <= pplVar30) {
            uVar13 = 0;
            if (pplVar18 != (long **)0x0) {
              uVar13 = (ulong)pplVar30 / (ulong)pplVar18;
            }
            pplVar30 = (long **)((long)pplVar30 - uVar13 * (long)pplVar18);
          }
          *(long **)(lStack_110 + (long)pplVar30 * 8) = plVar29;
        }
      }
      else {
        *plVar29 = *plVar23;
        *plVar23 = (long)plVar29;
      }
      plStack_b0 = (long *)0x0;
      uStack_f8 = uStack_f8 + 1;
      pplVar30 = &plStack_b0;
      FUN_1053a916c();
LAB_1053a7bdc:
      plVar29[3] = lVar31;
    }
  }
  iVar11 = 0;
  plVar29 = (long *)(param_2 + 0x10);
LAB_1053a7ce8:
  do {
    bVar6 = iVar11 == *(int *)(param_2 + 0x18);
    if (*(int *)(param_2 + 0x18) <= iVar11) {
      FUN_1053a90b8(&lStack_110);
      FUN_1053a9070(&lStack_e0);
      return;
    }
    func_0x0001053a95e4(*plVar29);
    pplVar18 = pplStack_d8;
    plVar23 = plVar29;
    if (!bVar6) {
      plVar23 = extraout_x9_04;
    }
    lVar31 = *plVar23;
    if (*(int *)(lVar31 + 0x40) == 1) {
      if ((pplStack_d8 != (long **)0x0) && (plStack_c8 != (long *)0x0)) {
        uVar19 = *(ulong *)(lVar31 + 0x38);
        func_0x0001053a966c(&lStack_e0);
        uVar13 = (long)pplVar18 - 1;
        if (((ulong)pplVar18 & uVar13) == 0) {
          pplVar17 = (long **)((ulong)pplVar30 & uVar13);
        }
        else {
          pplVar17 = pplVar30;
          if (pplVar18 <= pplVar30) {
            uVar3 = 0;
            if (pplVar18 != (long **)0x0) {
              uVar3 = (ulong)pplVar30 / (ulong)pplVar18;
            }
            pplVar17 = (long **)((long)pplVar30 - uVar3 * (long)pplVar18);
          }
        }
        plVar23 = *(long **)(lStack_e0 + (long)pplVar17 * 8);
        pplVar28 = pplVar30;
        if (plVar23 != (long *)0x0) {
          do {
            while( true ) {
              plVar23 = (long *)*plVar23;
              if (plVar23 == (long *)0x0) goto LAB_1053a7e70;
              pplVar24 = (long **)plVar23[1];
              if (pplVar24 != pplVar30) break;
              pplVar24 = (long **)(plVar23 + 2);
              func_0x0001000e107c(pplVar24,uVar19 & 0xfffffffffffffffc);
              if (((ulong)pplVar24 & 1) != 0) {
                lVar8 = 0x28;
                goto LAB_1053a7e68;
              }
            }
            if (((ulong)pplVar18 & uVar13) == 0) {
              pplVar24 = (long **)((ulong)pplVar24 & uVar13);
            }
            else if (pplVar18 <= pplVar24) {
              uVar3 = 0;
              if (pplVar18 != (long **)0x0) {
                uVar3 = (ulong)pplVar24 / (ulong)pplVar18;
              }
              pplVar24 = (long **)((long)pplVar24 - uVar3 * (long)pplVar18);
            }
          } while (pplVar24 == pplVar17);
        }
      }
    }
    else if (((*(int *)(lVar31 + 0x40) == 2) && (pplStack_108 != (long **)0x0)) && (uStack_f8 != 0))
    {
      pplVar18 = *(long ***)(lVar31 + 0x38);
      uVar13 = (long)pplStack_108 - 1;
      if (((ulong)pplStack_108 & uVar13) == 0) {
        pplVar17 = (long **)(uVar13 & (ulong)pplVar18);
      }
      else {
        pplVar17 = pplVar18;
        if (pplStack_108 <= pplVar18) {
          uVar19 = 0;
          if (pplStack_108 != (long **)0x0) {
            uVar19 = (ulong)pplVar18 / (ulong)pplStack_108;
          }
          pplVar17 = (long **)((long)pplVar18 - uVar19 * (long)pplStack_108);
        }
      }
      plVar23 = *(long **)(lStack_110 + (long)pplVar17 * 8);
      if (plVar23 != (long *)0x0) {
LAB_1053a7da8:
        do {
          plVar23 = (long *)*plVar23;
          if (plVar23 == (long *)0x0) goto LAB_1053a7e70;
          pplVar24 = (long **)plVar23[1];
          if (pplVar24 != pplVar18) goto LAB_1053a7dcc;
        } while ((long **)plVar23[2] != pplVar18);
        lVar8 = 0x18;
        pplVar24 = pplVar30;
        pplVar30 = pplVar28;
LAB_1053a7e68:
        lVar8 = *(long *)((long)plVar23 + lVar8);
        pplVar28 = pplVar30;
        if (lVar8 == 0) goto LAB_1053a7e70;
        pplVar18 = *(long ***)(lVar31 + 0x30);
        pplVar30 = (long **)&PTR_PTR_11339b140;
        if (pplVar18 != (long **)0x0) {
          pplVar30 = pplVar18;
        }
        ppuVar14 = &PTR_PTR_11339b120;
        if (*(int *)((long)pplVar30 + 0x1c) == 1) {
          ppuVar14 = (undefined **)pplVar30[2];
        }
        ppuVar2 = &PTR_PTR_11339b140;
        if (*(undefined ***)(lVar8 + 0x30) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(lVar8 + 0x30);
        }
        ppuVar21 = &PTR_PTR_11339b120;
        if (*(int *)((long)ppuVar2 + 0x1c) == 1) {
          ppuVar21 = (undefined **)ppuVar2[2];
        }
        iVar26 = *(int *)((long)ppuVar14 + 0x1c);
        iVar27 = *(int *)((long)ppuVar21 + 0x1c);
        if (iVar27 == 1 && iVar26 == 1) {
          lVar15 = 0x80;
LAB_1053a8078:
          *(long *)((long)param_1 + lVar15) = *(long *)((long)param_1 + lVar15) + 1;
          pplVar18 = *(long ***)(lVar31 + 0x30);
        }
        else {
          if ((iVar27 == 1 && iVar26 == 2) || (iVar27 == 2 && iVar26 == 1)) {
            lVar15 = 0x78;
            goto LAB_1053a8078;
          }
          if (iVar27 == 2 && iVar26 == 2) {
            lVar15 = 0x88;
            goto LAB_1053a8078;
          }
        }
        *(uint *)(lVar31 + 0x10) = *(uint *)(lVar31 + 0x10) & 0xfffffffe;
        *(undefined8 *)(lVar31 + 0x30) = 0;
        uVar13 = *(ulong *)(lVar31 + 8);
        if ((uVar13 & 1) != 0) {
          uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
        }
        if (uVar13 != 0) {
          func_0x00010b4cf348();
          pplVar24 = pplVar18;
        }
        pplVar28 = *(long ***)(lVar8 + 8);
        if (((ulong)pplVar28 & 1) == 0) {
          if (pplVar28 == (long **)0x0) goto LAB_1053a811c;
LAB_1053a80c4:
          if (pplVar18 == (long **)0x0) goto LAB_1053a8134;
LAB_1053a80c8:
          pplVar30 = (long **)pplVar18[1];
          if (((ulong)pplVar30 & 1) != 0) {
            pplVar30 = *(long ***)((ulong)pplVar30 & 0xfffffffffffffffe);
          }
          if (pplVar28 != pplVar30) {
            pplVar24 = pplVar28;
            func_0x00010b4cf42c(pplVar28,pplVar18);
            pplVar18 = pplVar24;
          }
          uVar12 = *(uint *)(lVar8 + 0x10) | 1;
        }
        else {
          pplVar28 = *(long ***)((ulong)pplVar28 & 0xfffffffffffffffe);
          if (pplVar28 != (long **)0x0) goto LAB_1053a80c4;
LAB_1053a811c:
          pplVar24 = *(long ***)(lVar8 + 0x30);
          if (pplVar24 != (long **)0x0) {
            func_0x00010b56de78();
          }
          __ZdlPv();
          if (pplVar18 != (long **)0x0) goto LAB_1053a80c8;
LAB_1053a8134:
          uVar12 = *(uint *)(lVar8 + 0x10) & 0xfffffffe;
        }
        *(uint *)(lVar8 + 0x10) = uVar12;
        *(long ***)(lVar8 + 0x30) = pplVar18;
        pplStack_a8 = (long **)0x0;
        plStack_b0 = (long *)0x0;
        plStack_98 = (long *)0x0;
        plStack_a0 = (long *)0x0;
        pplVar30 = (long **)(lVar8 + 0x18);
        fStack_90 = 1.0;
        lVar15 = 0;
        while (bVar6 = lVar15 == *(int *)(lVar8 + 0x20), lVar15 < *(int *)(lVar8 + 0x20)) {
          func_0x0001053a95e4(*pplVar30);
          plVar23 = extraout_x10_03;
          if (!bVar6) {
            plVar23 = extraout_x9_06;
          }
          lVar15 = *plVar23;
          pplVar28 = *(long ***)(lVar15 + 0x28);
          pplVar18 = &plStack_98;
          func_0x000100102e7c(pplVar18,(ulong)pplVar28 & 0xfffffffffffffffc);
          pplVar17 = pplStack_a8;
          if (pplStack_a8 == (long **)0x0) {
LAB_1053a823c:
            plVar23 = (long *)0x30;
            __Znwm();
            uStack_70 = 0;
            *plVar23 = 0;
            plVar23[1] = (long)pplVar18;
            plStack_80 = plVar23;
            pplStack_78 = &plStack_a0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (plVar23 + 2,(ulong)pplVar28 & 0xfffffffffffffffc);
            plVar23[5] = 0;
            uStack_70 = CONCAT71(uStack_70._1_7_,1);
            if ((pplVar17 == (long **)0x0) ||
               (fStack_90 * (float)pplVar17 < (float)((long)plStack_98 + 1))) {
              bVar5 = (long **)0x2 < pplVar17;
              bVar6 = pplVar17 == (long **)0x3;
              func_0x0001053a9590((long)pplVar17 << 1);
              pplVar24 = extraout_x8_05;
              if (!bVar5 || bVar6) {
                pplVar24 = extraout_x9_07;
              }
              if ((long)pplVar24 - 1U == 0) {
                pplVar24 = (long **)0x2;
              }
              else if (((ulong)pplVar24 & (long)pplVar24 - 1U) != 0) {
                __ZNSt3__112__next_primeEm();
              }
              pplVar16 = pplStack_a8;
              pplVar17 = pplVar24;
              if (pplStack_a8 < pplVar24) {
LAB_1053a82e4:
                if ((ulong)pplVar17 >> 0x3d != 0) {
                  func_0x000104bd35f4();
                  goto LAB_1053a8794;
                }
                lVar9 = (long)pplVar17 << 3;
                __Znwm(lVar9);
                FUN_1053a93e4(&plStack_b0,lVar9);
                for (pplVar24 = (long **)0x0; pplVar17 != pplVar24;
                    pplVar24 = (long **)((long)pplVar24 + 1)) {
                  plStack_b0[(long)pplVar24] = 0;
                }
                pplStack_a8 = pplVar17;
                if (plStack_a0 != (long *)0x0) {
                  pplVar24 = (long **)plStack_a0[1];
                  uVar19 = (long)pplVar17 - 1;
                  uVar13 = 0;
                  if (pplVar17 != (long **)0x0) {
                    uVar13 = (ulong)pplVar24 / (ulong)pplVar17;
                  }
                  pplVar16 = pplVar24;
                  if (pplVar17 <= pplVar24) {
                    pplVar16 = (long **)((long)pplVar24 - uVar13 * (long)pplVar17);
                  }
                  if (((ulong)pplVar17 & uVar19) == 0) {
                    pplVar16 = (long **)((ulong)pplVar24 & uVar19);
                  }
                  plStack_b0[(long)pplVar16] = (long)&plStack_a0;
                  plVar20 = plStack_b0;
                  plVar25 = plStack_a0;
                  while (plVar22 = plVar25, plVar25 = (long *)*plVar22, plVar25 != (long *)0x0) {
                    pplVar24 = (long **)plVar25[1];
                    if (((ulong)pplVar17 & uVar19) == 0) {
                      pplVar24 = (long **)((ulong)pplVar24 & uVar19);
                    }
                    else if (pplVar17 <= pplVar24) {
                      uVar13 = 0;
                      if (pplVar17 != (long **)0x0) {
                        uVar13 = (ulong)pplVar24 / (ulong)pplVar17;
                      }
                      pplVar24 = (long **)((long)pplVar24 - uVar13 * (long)pplVar17);
                    }
                    if (pplVar24 != pplVar16) {
                      if (plVar20[(long)pplVar24] == 0) {
                        plVar20[(long)pplVar24] = (long)plVar22;
                        pplVar16 = pplVar24;
                      }
                      else {
                        func_0x0001053a9510();
                        plVar20 = extraout_x8_06;
                        uVar19 = extraout_x9_08;
                        plVar25 = extraout_x10_04;
                        pplVar16 = extraout_x11_02;
                      }
                    }
                  }
                }
              }
              else {
                pplVar17 = pplStack_a8;
                if (pplVar24 < pplStack_a8) {
                  pplVar17 = (long **)(long)((float)plStack_98 / fStack_90);
                  if ((pplStack_a8 < (long **)0x3) ||
                     (((ulong)pplStack_a8 & (long)pplStack_a8 - 1U) != 0)) {
                    __ZNSt3__112__next_primeEm();
                  }
                  else {
                    func_0x0001053a94f0();
                  }
                  if (pplVar24 <= pplVar17) {
                    pplVar24 = pplVar17;
                  }
                  pplVar17 = pplStack_a8;
                  if (pplVar24 < pplVar16) {
                    pplVar17 = pplVar24;
                    if (pplVar24 != (long **)0x0) goto LAB_1053a82e4;
                    FUN_1053a93e4(&plStack_b0,0);
                    pplStack_a8 = (long **)0x0;
                    pplVar17 = (long **)0x0;
                  }
                }
              }
              if (((ulong)pplVar17 & (long)pplVar17 - 1U) == 0) {
                pplStack_128 = (long **)((long)pplVar17 - 1U & (ulong)pplVar18);
              }
              else {
                pplStack_128 = pplVar18;
                if (pplVar17 <= pplVar18) {
                  uVar13 = 0;
                  if (pplVar17 != (long **)0x0) {
                    uVar13 = (ulong)pplVar18 / (ulong)pplVar17;
                  }
                  pplStack_128 = (long **)((long)pplVar18 - uVar13 * (long)pplVar17);
                }
              }
            }
            plVar20 = (long *)plStack_b0[(long)pplStack_128];
            if (plVar20 == (long *)0x0) {
              *plVar23 = (long)plStack_a0;
              plStack_b0[(long)pplStack_128] = (long)&plStack_a0;
              plStack_a0 = plVar23;
              if (*plVar23 != 0) {
                pplVar18 = *(long ***)(*plVar23 + 8);
                if (((ulong)pplVar17 & (long)pplVar17 - 1U) == 0) {
                  pplVar18 = (long **)((ulong)pplVar18 & (long)pplVar17 - 1U);
                }
                else if (pplVar17 <= pplVar18) {
                  uVar13 = 0;
                  if (pplVar17 != (long **)0x0) {
                    uVar13 = (ulong)pplVar18 / (ulong)pplVar17;
                  }
                  pplVar18 = (long **)((long)pplVar18 - uVar13 * (long)pplVar17);
                }
                plStack_b0[(long)pplVar18] = (long)plVar23;
              }
            }
            else {
              *plVar23 = *plVar20;
              *plVar20 = (long)plVar23;
            }
            plStack_80 = (long *)0x0;
            plStack_98 = (long *)((long)plStack_98 + 1);
            pplVar24 = &plStack_80;
            FUN_1053a93fc();
          }
          else {
            uVar13 = (long)pplStack_a8 - 1;
            if (((ulong)pplStack_a8 & uVar13) == 0) {
              pplStack_128 = (long **)(uVar13 & (ulong)pplVar18);
            }
            else {
              pplStack_128 = pplVar18;
              if (pplStack_a8 <= pplVar18) {
                uVar19 = 0;
                if (pplStack_a8 != (long **)0x0) {
                  uVar19 = (ulong)pplVar18 / (ulong)pplStack_a8;
                }
                pplStack_128 = (long **)((long)pplVar18 - uVar19 * (long)pplStack_a8);
              }
            }
            plVar23 = (long *)plStack_b0[(long)pplStack_128];
            if (plVar23 == (long *)0x0) goto LAB_1053a823c;
            do {
              while( true ) {
                plVar23 = (long *)*plVar23;
                if (plVar23 == (long *)0x0) goto LAB_1053a823c;
                pplVar24 = (long **)plVar23[1];
                if (pplVar24 == pplVar18) break;
                if (((ulong)pplVar17 & uVar13) == 0) {
                  pplVar24 = (long **)((ulong)pplVar24 & uVar13);
                }
                else if (pplVar17 <= pplVar24) {
                  uVar19 = 0;
                  if (pplVar17 != (long **)0x0) {
                    uVar19 = (ulong)pplVar24 / (ulong)pplVar17;
                  }
                  pplVar24 = (long **)((long)pplVar24 - uVar19 * (long)pplVar17);
                }
                if (pplVar24 != pplStack_128) goto LAB_1053a823c;
              }
              pplVar24 = (long **)(plVar23 + 2);
              func_0x0001000e107c(pplVar24,(ulong)pplVar28 & 0xfffffffffffffffc);
            } while (((ulong)pplVar24 & 1) == 0);
          }
          plVar23[5] = lVar15;
          lVar15 = extraout_x11_01 + 1;
        }
        pplStack_128 = (long **)0x0;
        plVar23 = (long *)(lVar31 + 0x18);
LAB_1053a84ec:
        iVar26 = (int)pplStack_128;
        bVar6 = iVar26 == *(int *)(lVar31 + 0x20);
        if (iVar26 < *(int *)(lVar31 + 0x20)) {
          func_0x0001053a95e4(*plVar23);
          pplVar18 = pplStack_a8;
          plVar20 = plVar23;
          if (!bVar6) {
            plVar20 = extraout_x9_09;
          }
          if ((pplStack_a8 != (long **)0x0) && (plStack_98 != (long *)0x0)) {
            lVar15 = *plVar20;
            uVar19 = *(ulong *)(lVar15 + 0x28);
            func_0x0001053a966c(&plStack_b0);
            uVar13 = (long)pplVar18 - 1;
            if (((ulong)pplVar18 & uVar13) == 0) {
              pplVar17 = (long **)((ulong)pplVar24 & uVar13);
            }
            else {
              pplVar17 = pplVar24;
              if (pplVar18 <= pplVar24) {
                uVar3 = 0;
                if (pplVar18 != (long **)0x0) {
                  uVar3 = (ulong)pplVar24 / (ulong)pplVar18;
                }
                pplVar17 = (long **)((long)pplVar24 - uVar3 * (long)pplVar18);
              }
            }
            plVar20 = (long *)plStack_b0[(long)pplVar17];
            pplVar28 = pplVar24;
            if (plVar20 != (long *)0x0) {
              do {
                while( true ) {
                  plVar20 = (long *)*plVar20;
                  if (plVar20 == (long *)0x0) goto LAB_1053a85b4;
                  pplVar16 = (long **)plVar20[1];
                  if (pplVar16 != pplVar24) break;
                  lVar9 = (long)(plVar20 + 2);
                  func_0x0001000e107c(lVar9,uVar19 & 0xfffffffffffffffc);
                  if ((int)lVar9 != 0) {
                    pplVar24 = param_1;
                    FUN_1053a7608(param_1,lVar15,plVar20[5]);
                    pplStack_128 = (long **)(ulong)(iVar26 + 1);
                    goto LAB_1053a84ec;
                  }
                }
                if (((ulong)pplVar18 & uVar13) == 0) {
                  pplVar16 = (long **)((ulong)pplVar16 & uVar13);
                }
                else if (pplVar18 <= pplVar16) {
                  uVar3 = 0;
                  if (pplVar18 != (long **)0x0) {
                    uVar3 = (ulong)pplVar16 / (ulong)pplVar18;
                  }
                  pplVar16 = (long **)((long)pplVar16 - uVar3 * (long)pplVar18);
                }
              } while (pplVar16 == pplVar17);
            }
          }
LAB_1053a85b4:
          iVar27 = *(int *)(lVar31 + 0x20);
          iVar10 = iVar27 + -1;
          uVar7 = iVar26 == iVar10;
          if (iVar26 < iVar10) {
            FUN_1053a9198(plVar23);
            iVar27 = *(int *)(lVar31 + 0x20);
            iVar10 = iVar27 + -1;
          }
          *(int *)(lVar31 + 0x20) = iVar10;
          func_0x0001053a96a8();
          plVar20 = plVar23;
          if (!(bool)uVar7) {
            plVar20 = extraout_x10_05;
          }
          pplVar18 = (long **)*plVar20;
          if ((extraout_x9_10 & 1) == 0) {
            *plVar23 = 0;
          }
          else {
            *extraout_x8_07 = *extraout_x8_07 + -1;
            plVar20 = plVar23;
            func_0x00010006818c();
            if (iVar27 <= (int)plVar20) {
              plVar25 = plVar23;
              func_0x00010006818c();
              lVar15 = *(ulong *)(lVar31 + 0x18) + 7;
              bVar6 = (*(ulong *)(lVar31 + 0x18) & 1) != 0;
              plVar20 = plVar23;
              if (bVar6) {
                plVar20 = (long *)(lVar15 + (long)(int)plVar25 * 8);
              }
              plVar25 = plVar23;
              if (bVar6) {
                plVar25 = (long *)(lVar15 + (long)*(int *)(lVar31 + 0x20) * 8);
              }
              *plVar25 = *plVar20;
            }
          }
          if (*(long *)(lVar31 + 0x28) != 0) {
            (*(code *)(*pplVar18)[2])(pplVar18,0);
            func_0x0001053a9574();
            (*extraout_x8_08)();
            pplVar18 = pplVar28;
          }
          pplVar28 = (long **)pplVar18[1];
          if (((ulong)pplVar28 & 1) != 0) {
            pplVar28 = *(long ***)((ulong)pplVar28 & 0xfffffffffffffffe);
          }
          pplVar17 = *(long ***)(lVar8 + 0x28);
          pplVar24 = pplVar30;
          if ((pplVar17 == pplVar28) &&
             (pplVar16 = pplVar30, func_0x0001053a91c8(), (int)pplVar16 == 0)) {
            pplVar17 = pplVar30;
            if ((*(ulong *)(lVar8 + 0x18) & 1) != 0) {
              pplVar17 = (long **)(*(ulong *)(lVar8 + 0x18) + 7);
            }
            uVar12 = *(uint *)(lVar8 + 0x20);
            pplVar28 = (long **)(ulong)uVar12;
            func_0x00010006818c();
            if ((int)uVar12 < (int)pplVar24) {
              pplVar28 = (long **)pplVar17[*(int *)(lVar8 + 0x20)];
              pplVar24 = pplVar30;
              func_0x00010006818c();
              pplVar17[(int)pplVar24] = (long *)pplVar28;
            }
            iVar26 = *(int *)(lVar8 + 0x20);
            *(int *)(lVar8 + 0x20) = iVar26 + 1;
            pplVar17[iVar26] = (long *)pplVar18;
            if ((*(ulong *)(lVar8 + 0x18) & 1) != 0) {
              func_0x0001053a9620();
            }
          }
          else {
            FUN_1053a943c(pplVar30,pplVar18,pplVar28,pplVar17);
          }
          goto LAB_1053a84ec;
        }
        pplVar30 = &plStack_b0;
        FUN_1053a939c();
        iVar11 = iVar11 + 1;
        goto LAB_1053a7ce8;
      }
    }
LAB_1053a7e70:
    iVar26 = *(int *)(param_2 + 0x18);
    iVar27 = iVar26 + -1;
    uVar7 = iVar11 == iVar27;
    if (iVar11 < iVar27) {
      FUN_1053a9198(plVar29,iVar11);
      iVar26 = *(int *)(param_2 + 0x18);
      iVar27 = iVar26 + -1;
    }
    *(int *)(param_2 + 0x18) = iVar27;
    func_0x0001053a96a8();
    plVar23 = plVar29;
    if (!(bool)uVar7) {
      plVar23 = extraout_x10_02;
    }
    pplVar18 = (long **)*plVar23;
    if ((extraout_x9_05 & 1) == 0) {
      *plVar29 = 0;
    }
    else {
      *extraout_x8_03 = *extraout_x8_03 + -1;
      plVar23 = plVar29;
      func_0x00010006818c();
      if (iVar26 <= (int)plVar23) {
        plVar20 = plVar29;
        func_0x00010006818c();
        lVar31 = *(ulong *)(param_2 + 0x10) + 7;
        bVar6 = (*(ulong *)(param_2 + 0x10) & 1) != 0;
        plVar23 = plVar29;
        if (bVar6) {
          plVar23 = (long *)(lVar31 + (long)(int)plVar20 * 8);
        }
        plVar20 = plVar29;
        if (bVar6) {
          plVar20 = (long *)(lVar31 + (long)*(int *)(param_2 + 0x18) * 8);
        }
        *plVar20 = *plVar23;
      }
    }
    if (*(long *)(param_2 + 0x20) != 0) {
      (*(code *)(*pplVar18)[2])(pplVar18,0);
      func_0x0001053a9574();
      (*extraout_x8_04)();
      pplVar18 = pplVar28;
    }
    pplVar28 = (long **)pplVar18[1];
    if (((ulong)pplVar28 & 1) != 0) {
      pplVar28 = *(long ***)((ulong)pplVar28 & 0xfffffffffffffffe);
    }
    pplVar17 = *(long ***)(param_3 + 0x20);
    pplVar30 = pplVar1;
    if ((pplVar17 == pplVar28) && (pplVar24 = pplVar1, func_0x0001053a91c8(), (int)pplVar24 == 0)) {
      pplVar17 = pplVar1;
      if ((*(ulong *)(param_3 + 0x10) & 1) != 0) {
        pplVar17 = (long **)(*(ulong *)(param_3 + 0x10) + 7);
      }
      uVar12 = *(uint *)(param_3 + 0x18);
      pplVar28 = (long **)(ulong)uVar12;
      func_0x00010006818c();
      if ((int)uVar12 < (int)pplVar30) {
        pplVar28 = (long **)pplVar17[*(int *)(param_3 + 0x18)];
        pplVar30 = pplVar1;
        func_0x00010006818c();
        pplVar17[(int)pplVar30] = (long *)pplVar28;
      }
      iVar26 = *(int *)(param_3 + 0x18);
      *(int *)(param_3 + 0x18) = iVar26 + 1;
      pplVar17[iVar26] = (long *)pplVar18;
      if ((*(ulong *)(param_3 + 0x10) & 1) != 0) {
        func_0x0001053a9620();
      }
    }
    else {
      FUN_1053a91e8(pplVar1,pplVar18,pplVar28,pplVar17);
    }
  } while( true );
LAB_1053a7dcc:
  if (((ulong)pplStack_108 & uVar13) == 0) {
    pplVar24 = (long **)((ulong)pplVar24 & uVar13);
  }
  else if (pplStack_108 <= pplVar24) {
    uVar19 = 0;
    if (pplStack_108 != (long **)0x0) {
      uVar19 = (ulong)pplVar24 / (ulong)pplStack_108;
    }
    pplVar24 = (long **)((long)pplVar24 - uVar19 * (long)pplStack_108);
  }
  if (pplVar24 != pplVar17) goto LAB_1053a7e70;
  goto LAB_1053a7da8;
}



/* Entry: 1053a8818; end: 1053a8823;  */

void FUN_1053a8818(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = 0;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010b56dbcc(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1053a8824; end: 1053a8acf;  */

long FUN_1053a8824(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  if (param_2[0xe] != 0) {
    FUN_1053aad84(&ppuStack_68);
    func_0x00010065acbc(param_2 + 0xb,&ppuStack_68);
    func_0x000100100fec(&ppuStack_68);
    param_2[0x12] = param_2[0xc] - param_2[0xb];
  }
  puVar1 = param_2;
  FUN_1053a8818();
  if (((param_2[0xf] != 0) || (param_2[0x11] != 0)) || (param_2[0x10] != 0)) {
    func_0x000100c222a0();
    uStack_58 = 0;
    uStack_50 = 0;
    ppuStack_68 = &PTR_FUN_110880ab8;
    uStack_60 = 0;
    uStack_48 = 4;
    func_0x00010002b838(auStack_f0,"kind");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_108,param_2 + 0x13);
    pppuVar2 = &ppuStack_68;
    func_0x000100c220c4(pppuVar2,auStack_f0,auStack_108);
    (**(code **)(*(long *)*puVar1 + 8))((long *)*puVar1,pppuVar2,1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
    func_0x000100c22280(&ppuStack_68);
    func_0x00010002b838();
    func_0x0001053a9540();
    func_0x0001053a9600();
    func_0x00010002b838();
    func_0x0001053a9540();
    func_0x0001053a9600();
    func_0x00010002b838();
    func_0x0001053a9540();
    func_0x0001053a9600();
  }
  if (param_2[0x12] != 0) {
    uStack_80 = 0;
    uStack_78 = 0;
    ppuStack_90 = &PTR_FUN_110880ab8;
    uStack_88 = 0;
    uStack_70 = 8;
    func_0x00010002b838(auStack_a8,"kind");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_c0,param_2 + 0x13);
    pppuVar2 = &ppuStack_90;
    func_0x000100c220c4(pppuVar2,auStack_a8,auStack_c0);
    func_0x00010002b838(auStack_d8,"version");
    func_0x000100c22160(pppuVar2,auStack_d8,"v2");
    func_0x000100c22244(&ppuStack_68,pppuVar2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
    func_0x000100c22280(&ppuStack_90);
    func_0x000100c222a0();
    func_0x0001053a96bc();
    func_0x0001053a9654(*(undefined8 *)(extraout_x8 + 8));
    func_0x000100c222a0();
    func_0x0001053a96bc();
    func_0x0001053a9654(*(undefined8 *)(extraout_x8_00 + 0x10));
    func_0x000100c22280(&ppuStack_68);
  }
  param_2[0x10] = 0;
  param_2[0xf] = 0;
  param_2[0x12] = 0;
  param_2[0x11] = 0;
  lVar3 = param_1;
  FUN_1053a8d00();
  func_0x0001053a8e6c(lVar3 + 0x18,param_2 + 4);
  func_0x00010054f8dc(param_1 + 0x30,param_2 + 7);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 10);
  func_0x00010054f8dc(param_1 + 0x50,param_2 + 0xb);
  return param_1;
}



/* Entry: 1053a8ad0; end: 1053a8af7;  */

void FUN_1053a8ad0(long param_1)

{
  FUN_1053a8818();
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}



/* Entry: 1053a8af8; end: 1053a8c5b;  */

void FUN_1053a8af8(long param_1,undefined8 param_2,long param_3)

{
  undefined ***pppuVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  if (param_3 != 0) {
    uStack_70 = 0;
    uStack_68 = 0;
    ppuStack_80 = &PTR_FUN_110880ab8;
    uStack_78 = 0;
    uStack_60 = 3;
    func_0x00010002b838(auStack_98,"kind");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_b0,param_1 + 0x98);
    pppuVar1 = &ppuStack_80;
    func_0x000100c220c4(pppuVar1,auStack_98,auStack_b0);
    func_0x00010002b838(auStack_c8,&DAT_10f6389e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_e0,param_2);
    func_0x000100c220c4(pppuVar1,auStack_c8,auStack_e0);
    func_0x000100c22244(auStack_58,pppuVar1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
    func_0x000100c22280(&ppuStack_80);
    func_0x000100c222a0();
    func_0x0001053a96bc();
    func_0x0001053a9690(*(undefined8 *)(extraout_x8 + 8));
    func_0x000100c222a0();
    func_0x0001053a96bc();
    func_0x0001053a9690(*(undefined8 *)(extraout_x8_00 + 0x10));
    func_0x000100c22280(auStack_58);
  }
  return;
}



/* Entry: 1053a8c5c; end: 1053a8c5f;  */

undefined8 FUN_1053a8c5c(undefined8 *param_1)

{
  undefined8 unaff_x19;
  
  *param_1 = &PTR_FUN_110881100;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x13);
  func_0x0001053a9018(param_1 + 0xe);
  func_0x000100c1b898(param_1);
  func_0x0001053a063c();
  return unaff_x19;
}



/* Entry: 1053a8c60; end: 1053a8c73;  */

void FUN_1053a8c60(void)

{
  func_0x0001053a8fd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053a8c74; end: 1053a8c7b;  */

void FUN_1053a8c74(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1053a8c78);
  (*pcVar1)();
}



/* Entry: 1053a8c7c; end: 1053a8cff;  */

long FUN_1053a8c7c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1053a8d00();
  func_0x0001053a8e6c(lVar1 + 0x18,param_2 + 0x18);
  func_0x00010054f8dc(param_1 + 0x30,param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  func_0x00010054f8dc(param_1 + 0x50,param_2 + 0x50);
  return param_1;
}



/* Entry: 1053a8d00; end: 1053a8d1f;  */

void FUN_1053a8d00(void)

{
  func_0x0001053a95a4();
  FUN_1053a8d20();
  return;
}



/* Entry: 1053a8d20; end: 1053a8d73;  */

void FUN_1053a8d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x0001053a9630();
    FUN_1053a8d74();
    func_0x0001053a96c8();
    FUN_1053a8da4();
  }
  uStack_38 = 1;
  FUN_1053a8e40(&uStack_40);
  return;
}



/* Entry: 1053a8d74; end: 1053a8da3;  */

void FUN_1053a8d74(long param_1)

{
  undefined1 in_CY;
  long lVar1;
  
  func_0x0001053a9704();
  if ((bool)in_CY) {
    FUN_1053a2b94();
    lVar1 = param_1 + 0x10;
    FUN_1053a8dd8();
    *(long *)(param_1 + 8) = lVar1;
  }
  else {
    func_0x0001053a2bfc(param_1 + 0x10);
    func_0x0001053a96f0();
  }
  return;
}



/* Entry: 1053a8da4; end: 1053a8dd7;  */

void FUN_1053a8da4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_1053a8dd8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1053a8dd8; end: 1053a8deb;  */

void FUN_1053a8dd8(void)

{
  FUN_1053a8dec();
  return;
}



/* Entry: 1053a8dec; end: 1053a8e3f;  */

void FUN_1053a8dec(void)

{
  long unaff_x19;
  long unaff_x21;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  
  func_0x0001053a954c();
  while (unaff_x21 != unaff_x19) {
    func_0x0001053a9678();
    func_0x0001053a96dc();
  }
  uStack_48 = 1;
  FUN_1053a2cc4(auStack_60);
  return;
}



/* Entry: 1053a8e40; end: 1053a8e8b;  */

long FUN_1053a8e40(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x000100c1baf8(param_1);
  }
  return param_1;
}



/* Entry: 1053a8e8c; end: 1053a8edf;  */

void FUN_1053a8e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x0001053a9630();
    FUN_1053a8ee0();
    func_0x0001053a96c8();
    FUN_1053a8f10();
  }
  uStack_38 = 1;
  FUN_1053a8fac(&uStack_40);
  return;
}



/* Entry: 1053a8ee0; end: 1053a8f0f;  */

void FUN_1053a8ee0(long param_1)

{
  undefined1 in_CY;
  long lVar1;
  
  func_0x0001053a9704();
  if ((bool)in_CY) {
    FUN_1053a2e9c();
    lVar1 = param_1 + 0x10;
    FUN_1053a8f44();
    *(long *)(param_1 + 8) = lVar1;
  }
  else {
    func_0x0001053a2f04(param_1 + 0x10);
    func_0x0001053a96f0();
  }
  return;
}



/* Entry: 1053a8f10; end: 1053a8f43;  */

void FUN_1053a8f10(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_1053a8f44();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1053a8f44; end: 1053a8f57;  */

void FUN_1053a8f44(void)

{
  FUN_1053a8f58();
  return;
}



/* Entry: 1053a8f58; end: 1053a8fab;  */

void FUN_1053a8f58(void)

{
  long unaff_x19;
  long unaff_x21;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  
  func_0x0001053a954c();
  while (unaff_x21 != unaff_x19) {
    func_0x0001053a9678();
    func_0x0001053a96dc();
  }
  uStack_48 = 1;
  FUN_1053a2fcc(auStack_60);
  return;
}



/* Entry: 1053a8fac; end: 1053a903b;  */

long FUN_1053a8fac(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x000100c1ba80(param_1);
  }
  return param_1;
}



/* Entry: 1053a903c; end: 1053a9053;  */

void FUN_1053a903c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010b56dbcc(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1053a9054; end: 1053a906f;  */

void FUN_1053a9054(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010b56dbcc(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053a9070; end: 1053a90b7;  */

long * FUN_1053a9070(long *param_1)

{
  long lVar1;
  long unaff_x21;
  
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    func_0x0001053a9684();
    func_0x0001053a9608();
    lVar1 = unaff_x21;
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1053a90b8; end: 1053a90fb;  */

long * FUN_1053a90b8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1053a90fc; end: 1053a9113;  */

void FUN_1053a90fc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1053a9114; end: 1053a9153;  */

long * FUN_1053a9114(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
    }
    func_0x0001053a9608();
  }
  return param_1;
}



/* Entry: 1053a9154; end: 1053a916b;  */

void FUN_1053a9154(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1053a916c; end: 1053a9197;  */

long * FUN_1053a916c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1053a9198; end: 1053a91e7;  */

void FUN_1053a9198(ulong *param_1,int param_2,int param_3)

{
  long lVar1;
  ulong *puVar2;
  bool bVar3;
  ulong uVar4;
  
  lVar1 = *param_1 + 7;
  bVar3 = (*param_1 & 1) != 0;
  puVar2 = param_1;
  if (bVar3) {
    puVar2 = (ulong *)(lVar1 + (long)param_2 * 8);
  }
  if (bVar3) {
    param_1 = (ulong *)(lVar1 + (long)param_3 * 8);
  }
  uVar4 = *puVar2;
  *puVar2 = *param_1;
  *param_1 = uVar4;
  return;
}



/* Entry: 1053a91e8; end: 1053a933b;  */

void FUN_1053a91e8(ulong *param_1,ulong param_2,long param_3,long param_4)

{
  undefined1 uVar1;
  ulong *puVar2;
  code *extraout_x8;
  ulong uVar3;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  ulong *extraout_x9_01;
  ulong unaff_x21;
  
  if ((param_3 == 0) && (param_4 != 0)) {
    if (param_2 != 0) {
      func_0x0001053a95c8();
    }
  }
  else if (param_4 != param_3) {
    FUN_1053a9348(param_4);
    func_0x0001053a9574();
    (*extraout_x8)();
    param_2 = unaff_x21;
  }
  uVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
  if (*(int *)((long)param_1 + 0xc) < (int)param_1[1]) {
    func_0x000100064580(param_1,1);
LAB_1053a9270:
    uVar3 = *param_1;
  }
  else {
    puVar2 = param_1;
    func_0x0001053a91c8();
    uVar3 = param_1[1];
    if ((int)puVar2 != 0) {
      func_0x0001053a95e4(*param_1);
      puVar2 = param_1;
      if (!(bool)uVar1) {
        puVar2 = extraout_x9_00;
      }
      if (((long *)*puVar2 != (long *)0x0) && (param_1[2] == 0)) {
        (**(code **)(*(long *)*puVar2 + 8))();
      }
      goto LAB_1053a9278;
    }
    puVar2 = param_1;
    func_0x00010006818c();
    uVar1 = (int)uVar3 == (int)puVar2;
    if ((int)uVar3 < (int)puVar2) {
      uVar1 = (*param_1 & 1) == 0;
      puVar2 = param_1;
      if (!(bool)uVar1) {
        puVar2 = (ulong *)(*param_1 + (long)(int)param_1[1] * 8 + 7);
      }
      uVar3 = *puVar2;
      func_0x00010006818c(param_1);
      func_0x0001053a95e4(*param_1);
      puVar2 = param_1;
      if (!(bool)uVar1) {
        puVar2 = extraout_x9_01;
      }
      *puVar2 = uVar3;
      goto LAB_1053a9270;
    }
    uVar3 = *param_1;
    if ((uVar3 & 1) == 0) goto LAB_1053a9278;
  }
  func_0x0001053a9620(uVar3);
LAB_1053a9278:
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  func_0x0001053a95e4();
  if (!(bool)uVar1) {
    param_1 = extraout_x9;
  }
  *param_1 = param_2;
  return;
}



/* Entry: 1053a933c; end: 1053a9347;  */

void FUN_1053a933c(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001053a96a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 1053a9348; end: 1053a939b;  */

void FUN_1053a9348(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x48);
  }
  *puVar1 = &PTR_DAT_110d0ade8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_1;
  *(undefined4 *)(puVar1 + 8) = 0;
  puVar1[6] = 0;
  return;
}



/* Entry: 1053a939c; end: 1053a93e3;  */

long * FUN_1053a939c(long *param_1)

{
  long lVar1;
  long unaff_x21;
  
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    func_0x0001053a9684();
    func_0x0001053a9608();
    lVar1 = unaff_x21;
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1053a93e4; end: 1053a93fb;  */

void FUN_1053a93e4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1053a93fc; end: 1053a943b;  */

long * FUN_1053a93fc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
    }
    func_0x0001053a9608();
  }
  return param_1;
}



/* Entry: 1053a943c; end: 1053a9497;  */

void FUN_1053a943c(ulong *param_1,ulong param_2,long param_3,long param_4)

{
  undefined1 uVar1;
  ulong *puVar2;
  ulong uVar3;
  code *extraout_x8;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  ulong *extraout_x9_01;
  ulong unaff_x21;
  
  if ((param_3 == 0) && (param_4 != 0)) {
    if (param_2 != 0) {
      func_0x0001053a95c8();
    }
  }
  else if (param_4 != param_3) {
    FUN_1053a9498(param_4);
    func_0x0001053a9574();
    (*extraout_x8)();
    param_2 = unaff_x21;
  }
  uVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
  if (*(int *)((long)param_1 + 0xc) < (int)param_1[1]) {
    func_0x000100064580(param_1,1);
LAB_1053a9270:
    uVar3 = *param_1;
  }
  else {
    puVar2 = param_1;
    func_0x0001053a91c8();
    uVar3 = param_1[1];
    if ((int)puVar2 != 0) {
      func_0x0001053a95e4(*param_1);
      puVar2 = param_1;
      if (!(bool)uVar1) {
        puVar2 = extraout_x9_00;
      }
      if (((long *)*puVar2 != (long *)0x0) && (param_1[2] == 0)) {
        (**(code **)(*(long *)*puVar2 + 8))();
      }
      goto LAB_1053a9278;
    }
    puVar2 = param_1;
    func_0x00010006818c();
    uVar1 = (int)uVar3 == (int)puVar2;
    if ((int)uVar3 < (int)puVar2) {
      uVar1 = (*param_1 & 1) == 0;
      puVar2 = param_1;
      if (!(bool)uVar1) {
        puVar2 = (ulong *)(*param_1 + (long)(int)param_1[1] * 8 + 7);
      }
      uVar3 = *puVar2;
      func_0x00010006818c(param_1);
      func_0x0001053a95e4(*param_1);
      puVar2 = param_1;
      if (!(bool)uVar1) {
        puVar2 = extraout_x9_01;
      }
      *puVar2 = uVar3;
      goto LAB_1053a9270;
    }
    uVar3 = *param_1;
    if ((uVar3 & 1) == 0) goto LAB_1053a9278;
  }
  func_0x0001053a9620(uVar3);
LAB_1053a9278:
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  func_0x0001053a95e4();
  if (!(bool)uVar1) {
    param_1 = extraout_x9;
  }
  *param_1 = param_2;
  return;
}



/* Entry: 1053a9498; end: 1053a94ef;  */

void FUN_1053a9498(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x38);
  }
  *puVar1 = &PTR_DAT_110d0ae38;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  puVar1[5] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 1053a94f0; end: 1053a972b;  */

ulong FUN_1053a94f0(ulong param_1)

{
  if (1 < param_1) {
    param_1 = 1L << (-LZCOUNT(param_1 - 1) & 0x3fU);
  }
  return param_1;
}



/* Entry: 1053a972c; end: 1053a9ce7;  */

void FUN_1053a972c(long param_1,long *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x9;
  ulong extraout_x9_00;
  undefined8 *puVar6;
  long extraout_x9_01;
  long *plVar7;
  long *extraout_x10;
  long *extraout_x10_00;
  ulong uVar8;
  long *extraout_x11;
  long *extraout_x11_00;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *unaff_x23;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  undefined1 auStack_80 [24];
  undefined8 *puStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar7 = param_2;
  func_0x00010b4d1804(auStack_80);
  plVar14 = *(long **)(param_1 + 0xa0);
  if ((plVar14 != (long *)0x0) && (plVar4 = (long *)(param_1 + 0xb0), plVar7 = plVar4, *plVar4 != 0)
     ) {
    func_0x0001053aab4c();
    unaff_x23 = (long *)((long)plVar14 + -1);
    if (((ulong)plVar14 & (ulong)unaff_x23) == 0) {
      plVar15 = (long *)((ulong)plVar4 & (ulong)unaff_x23);
    }
    else {
      plVar15 = plVar4;
      if (plVar14 <= plVar4) {
        uVar17 = 0;
        if (plVar14 != (long *)0x0) {
          uVar17 = (ulong)plVar4 / (ulong)plVar14;
        }
        plVar15 = (long *)((long)plVar4 - uVar17 * (long)plVar14);
      }
    }
    plVar18 = *(long **)(*(long *)(param_1 + 0x98) + (long)plVar15 * 8);
    plVar7 = plVar4;
    if (plVar18 != (long *)0x0) {
      lVar16 = 1;
      do {
        while( true ) {
          plVar18 = (long *)*plVar18;
          if (plVar18 == (long *)0x0) goto LAB_1053a97fc;
          plVar5 = (long *)plVar18[1];
          if (plVar4 != plVar5) break;
          plVar7 = plVar18 + 2;
          func_0x0001053aaac8();
          if ((int)plVar7 != 0) goto LAB_1053a9800;
        }
        if (((ulong)plVar14 & (ulong)unaff_x23) == 0) {
          plVar5 = (long *)((ulong)plVar5 & (ulong)unaff_x23);
        }
        else if (plVar14 <= plVar5) {
          uVar17 = 0;
          if (plVar14 != (long *)0x0) {
            uVar17 = (ulong)plVar5 / (ulong)plVar14;
          }
          plVar5 = (long *)((long)plVar5 - uVar17 * (long)plVar14);
        }
      } while (plVar5 == plVar15);
    }
  }
LAB_1053a97fc:
  lVar16 = 0;
LAB_1053a9800:
  *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) + lVar16;
  plVar14 = *(long **)(param_1 + 0x78);
  if ((plVar14 != (long *)0x0) && (plVar4 = (long *)(param_1 + 0x88), *plVar4 != 0)) {
    func_0x0001053aaba4();
    uVar17 = (long)plVar14 - 1;
    if (((ulong)plVar14 & uVar17) == 0) {
      plVar15 = (long *)((ulong)plVar7 & uVar17);
    }
    else {
      plVar15 = plVar7;
      if (plVar14 <= plVar7) {
        uVar8 = 0;
        if (plVar14 != (long *)0x0) {
          uVar8 = (ulong)plVar7 / (ulong)plVar14;
        }
        plVar15 = (long *)((long)plVar7 - uVar8 * (long)plVar14);
      }
    }
    plVar18 = *(long **)(*(long *)(param_1 + 0x70) + (long)plVar15 * 8);
    unaff_x23 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
LAB_1053a985c:
      while (unaff_x23 = (long *)*plVar18, unaff_x23 != (long *)0x0) {
        plVar5 = (long *)unaff_x23[1];
        plVar18 = unaff_x23;
        if (plVar5 != plVar7) goto LAB_1053a9880;
        iVar3 = (int)unaff_x23 + 0x10;
        func_0x0001053aaac8();
        if (iVar3 != 0) {
          uVar8 = *(ulong *)(param_1 + 0x78);
          lVar16 = *unaff_x23;
          uVar17 = unaff_x23[1];
          uVar9 = uVar8 - 1;
          if ((uVar8 & uVar9) == 0) {
            uVar17 = uVar9 & uVar17;
          }
          else if (uVar8 <= uVar17) {
            uVar11 = 0;
            if (uVar8 != 0) {
              uVar11 = uVar17 / uVar8;
            }
            uVar17 = uVar17 - uVar11 * uVar8;
          }
          lVar10 = *(long *)(param_1 + 0x70);
          plVar7 = *(long **)(lVar10 + uVar17 * 8);
          do {
            plVar14 = plVar7;
            plVar7 = (long *)*plVar14;
          } while ((long *)*plVar14 != unaff_x23);
          if (plVar14 == (long *)(param_1 + 0x80)) {
LAB_1053a9c40:
            if (lVar16 == 0) {
LAB_1053a9c74:
              *(undefined8 *)(lVar10 + uVar17 * 8) = 0;
              lVar16 = *unaff_x23;
              goto LAB_1053a9c7c;
            }
            uVar11 = *(ulong *)(lVar16 + 8);
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
            if (uVar12 != uVar17) goto LAB_1053a9c74;
LAB_1053a9c84:
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
            if (uVar11 != uVar17) {
              *(long **)(lVar10 + uVar11 * 8) = plVar14;
              lVar16 = *unaff_x23;
            }
          }
          else {
            uVar11 = plVar14[1];
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
            if (uVar11 != uVar17) goto LAB_1053a9c40;
LAB_1053a9c7c:
            if (lVar16 != 0) {
              uVar11 = *(ulong *)(lVar16 + 8);
              goto LAB_1053a9c84;
            }
          }
          func_0x0001053aaa6c(lVar16);
          FUN_1053aa9ac();
          goto LAB_1053a98ac;
        }
      }
    }
  }
LAB_1053a98a8:
  plVar4 = (long *)0x0;
LAB_1053a98ac:
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + (long)plVar4;
  plVar7 = (long *)(param_1 + 0xb0);
  func_0x0001053aab4c();
  plVar14 = *(long **)(param_1 + 0xa0);
  if (plVar14 != (long *)0x0) {
    uVar17 = (long)plVar14 - 1;
    if (((ulong)plVar14 & uVar17) == 0) {
      unaff_x23 = (long *)(uVar17 & (ulong)plVar7);
    }
    else {
      unaff_x23 = plVar7;
      if (plVar14 <= plVar7) {
        func_0x0001053aabe4();
      }
    }
    puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x98) + (long)unaff_x23 * 8);
    if (puVar13 != (undefined8 *)0x0) {
      do {
        while( true ) {
          puVar13 = (undefined8 *)*puVar13;
          if (puVar13 == (undefined8 *)0x0) goto LAB_1053a994c;
          plVar4 = (long *)puVar13[1];
          if (plVar4 != plVar7) break;
          puVar6 = puVar13 + 2;
          func_0x0001053aaac8();
          if (((ulong)puVar6 & 1) != 0) goto LAB_1053a9bd4;
        }
        if (((ulong)plVar14 & uVar17) == 0) {
          plVar4 = (long *)((ulong)plVar4 & uVar17);
        }
        else if (plVar14 <= plVar4) {
          uVar8 = 0;
          if (plVar14 != (long *)0x0) {
            uVar8 = (ulong)plVar4 / (ulong)plVar14;
          }
          plVar4 = (long *)((long)plVar4 - uVar8 * (long)plVar14);
        }
      } while (plVar4 == unaff_x23);
    }
  }
LAB_1053a994c:
  puVar13 = (undefined8 *)0x70;
  __Znwm();
  uStack_58 = 0;
  *puVar13 = 0;
  puVar13[1] = plVar7;
  puStack_68 = puVar13;
  plStack_60 = (long *)(param_1 + 0xa8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar13 + 2,auStack_80);
  puVar13[5] = &PTR_DAT_110d0a758;
  puVar13[6] = 0;
  puVar13[8] = 0;
  puVar13[7] = 0;
  puVar13[10] = 0;
  puVar13[9] = 0;
  puVar13[0xb] = &DAT_11383d918;
  puVar13[0xc] = &DAT_11383d918;
  puVar13[0xd] = 0;
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  if ((plVar14 != (long *)0x0) &&
     (plVar4 = unaff_x23,
     (float)(*(long *)(param_1 + 0xb0) + 1) <= *(float *)(param_1 + 0xb8) * (float)plVar14))
  goto LAB_1053a9b6c;
  func_0x0001053aab54();
  bVar2 = plVar14 == (long *)0x3;
  func_0x0001053aab10();
  if (bVar2) {
    unaff_x23 = (long *)0x2;
  }
  else if (((ulong)unaff_x23 & extraout_x8) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar14 = *(long **)(param_1 + 0xa0);
  if (plVar14 < unaff_x23) {
LAB_1053a9a04:
    if ((ulong)unaff_x23 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1053a9cc8);
      (*pcVar1)();
    }
    lVar16 = (long)unaff_x23 << 3;
    __Znwm(lVar16);
    FUN_1053aa9f0(param_1 + 0x98,lVar16);
    *(long **)(param_1 + 0xa0) = unaff_x23;
    lVar16 = *(long *)(param_1 + 0x98);
    for (plVar14 = (long *)0x0; unaff_x23 != plVar14; plVar14 = (long *)((long)plVar14 + 1)) {
      *(undefined8 *)(lVar16 + (long)plVar14 * 8) = 0;
    }
    plVar14 = unaff_x23;
    if (*(long *)(param_1 + 0xa8) != 0) {
      func_0x0001053aabd0();
      func_0x0001053aabbc();
      lVar16 = extraout_x8_00;
      uVar17 = extraout_x9;
      plVar4 = extraout_x10;
      plVar15 = extraout_x11;
      while (plVar18 = plVar4, plVar4 = (long *)*plVar18, plVar4 != (long *)0x0) {
        plVar5 = (long *)plVar4[1];
        if (((ulong)unaff_x23 & uVar17) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar17);
        }
        else if (unaff_x23 <= plVar5) {
          uVar8 = 0;
          if (unaff_x23 != (long *)0x0) {
            uVar8 = (ulong)plVar5 / (ulong)unaff_x23;
          }
          plVar5 = (long *)((long)plVar5 - uVar8 * (long)unaff_x23);
        }
        if (plVar5 != plVar15) {
          if (*(long *)(lVar16 + (long)plVar5 * 8) == 0) {
            *(long **)(lVar16 + (long)plVar5 * 8) = plVar18;
            plVar15 = plVar5;
          }
          else {
            func_0x0001053aaaf0();
            lVar16 = extraout_x8_01;
            uVar17 = extraout_x9_00;
            plVar4 = extraout_x10_00;
            plVar15 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (unaff_x23 < plVar14) {
    plVar4 = (long *)(long)((float)*(ulong *)(param_1 + 0xb0) / *(float *)(param_1 + 0xb8));
    if ((plVar14 < (long *)0x3) || (((ulong)plVar14 & (long)plVar14 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001053aaad0();
    }
    if (unaff_x23 <= plVar4) {
      unaff_x23 = plVar4;
    }
    if (unaff_x23 < plVar14) {
      if (unaff_x23 != (long *)0x0) goto LAB_1053a9a04;
      FUN_1053aa9f0(param_1 + 0x98,0);
      *(undefined8 *)(param_1 + 0xa0) = 0;
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = *(long **)(param_1 + 0xa0);
    }
  }
  if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
    plVar4 = (long *)((long)plVar14 - 1U & (ulong)plVar7);
  }
  else {
    plVar4 = plVar7;
    if (plVar14 <= plVar7) {
      func_0x0001053aabe4();
      plVar4 = unaff_x23;
    }
  }
LAB_1053a9b6c:
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x98) + (long)plVar4 * 8);
  if (puVar6 == (undefined8 *)0x0) {
    func_0x0001053aab6c();
    if (extraout_x9_01 != 0) {
      plVar7 = *(long **)(extraout_x9_01 + 8);
      if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar14 - 1U);
      }
      else if (plVar14 <= plVar7) {
        uVar17 = 0;
        if (plVar14 != (long *)0x0) {
          uVar17 = (ulong)plVar7 / (ulong)plVar14;
        }
        plVar7 = (long *)((long)plVar7 - uVar17 * (long)plVar14);
      }
      *(undefined8 **)(extraout_x8_02 + (long)plVar7 * 8) = puVar13;
    }
  }
  else {
    *puVar13 = *puVar6;
    *puVar6 = puVar13;
  }
  puStack_68 = (undefined8 *)0x0;
  *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 1;
  FUN_1053aaa08(&puStack_68);
LAB_1053a9bd4:
  func_0x00010b56da00(puVar13 + 5,param_2);
  func_0x0001053aaab4();
  return;
LAB_1053a9880:
  if (((ulong)plVar14 & uVar17) == 0) {
    plVar5 = (long *)((ulong)plVar5 & uVar17);
  }
  else if (plVar14 <= plVar5) {
    uVar8 = 0;
    if (plVar14 != (long *)0x0) {
      uVar8 = (ulong)plVar5 / (ulong)plVar14;
    }
    plVar5 = (long *)((long)plVar5 - uVar8 * (long)plVar14);
  }
  if (plVar5 != plVar15) goto LAB_1053a98a8;
  goto LAB_1053a985c;
}



/* Entry: 1053a9ce8; end: 1053aa29f;  */

void FUN_1053a9ce8(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long *plVar7;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x9;
  ulong extraout_x9_00;
  undefined8 *puVar8;
  long extraout_x9_01;
  long *extraout_x10;
  long *plVar9;
  long *extraout_x10_00;
  ulong uVar10;
  long *extraout_x11;
  long *plVar11;
  long *extraout_x11_00;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined **ppuVar18;
  long *unaff_x23;
  long *plVar19;
  undefined **ppuVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  undefined1 auStack_80 [24];
  undefined8 *puStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  ppuVar4 = &PTR_PTR_11339afc0;
  if (*(undefined ***)(param_2 + 0x38) != (undefined **)0x0) {
    ppuVar4 = *(undefined ***)(param_2 + 0x38);
  }
  func_0x00010b4d1804(auStack_80);
  ppuVar18 = *(undefined ***)(param_1 + 0x78);
  if ((ppuVar18 != (undefined **)0x0) &&
     (ppuVar5 = (undefined **)(param_1 + 0x88), ppuVar4 = ppuVar5, *ppuVar5 != (undefined *)0x0)) {
    func_0x0001053aab4c();
    unaff_x23 = (long *)((long)ppuVar18 + -1);
    if (((ulong)ppuVar18 & (ulong)unaff_x23) == 0) {
      ppuVar20 = (undefined **)((ulong)ppuVar5 & (ulong)unaff_x23);
    }
    else {
      ppuVar20 = ppuVar5;
      if (ppuVar18 <= ppuVar5) {
        uVar22 = 0;
        if (ppuVar18 != (undefined **)0x0) {
          uVar22 = (ulong)ppuVar5 / (ulong)ppuVar18;
        }
        ppuVar20 = (undefined **)((long)ppuVar5 - uVar22 * (long)ppuVar18);
      }
    }
    plVar23 = *(long **)(*(long *)(param_1 + 0x70) + (long)ppuVar20 * 8);
    ppuVar4 = ppuVar5;
    if (plVar23 != (long *)0x0) {
      lVar21 = 1;
      do {
        while( true ) {
          plVar23 = (long *)*plVar23;
          if (plVar23 == (long *)0x0) goto LAB_1053a9dc8;
          ppuVar6 = (undefined **)plVar23[1];
          if (ppuVar5 != ppuVar6) break;
          ppuVar4 = (undefined **)(plVar23 + 2);
          func_0x0001053aaac8();
          if ((int)ppuVar4 != 0) goto LAB_1053a9dcc;
        }
        if (((ulong)ppuVar18 & (ulong)unaff_x23) == 0) {
          ppuVar6 = (undefined **)((ulong)ppuVar6 & (ulong)unaff_x23);
        }
        else if (ppuVar18 <= ppuVar6) {
          uVar22 = 0;
          if (ppuVar18 != (undefined **)0x0) {
            uVar22 = (ulong)ppuVar6 / (ulong)ppuVar18;
          }
          ppuVar6 = (undefined **)((long)ppuVar6 - uVar22 * (long)ppuVar18);
        }
      } while (ppuVar6 == ppuVar20);
    }
  }
LAB_1053a9dc8:
  lVar21 = 0;
LAB_1053a9dcc:
  *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + lVar21;
  ppuVar18 = *(undefined ***)(param_1 + 0xa0);
  if ((ppuVar18 != (undefined **)0x0) && (plVar23 = (long *)(param_1 + 0xb0), *plVar23 != 0)) {
    func_0x0001053aaba4();
    uVar22 = (long)ppuVar18 - 1;
    if (((ulong)ppuVar18 & uVar22) == 0) {
      ppuVar5 = (undefined **)((ulong)ppuVar4 & uVar22);
    }
    else {
      ppuVar5 = ppuVar4;
      if (ppuVar18 <= ppuVar4) {
        uVar10 = 0;
        if (ppuVar18 != (undefined **)0x0) {
          uVar10 = (ulong)ppuVar4 / (ulong)ppuVar18;
        }
        ppuVar5 = (undefined **)((long)ppuVar4 - uVar10 * (long)ppuVar18);
      }
    }
    plVar19 = *(long **)(*(long *)(param_1 + 0x98) + (long)ppuVar5 * 8);
    unaff_x23 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
LAB_1053a9e28:
      while (unaff_x23 = (long *)*plVar19, unaff_x23 != (long *)0x0) {
        ppuVar20 = (undefined **)unaff_x23[1];
        plVar19 = unaff_x23;
        if (ppuVar20 != ppuVar4) goto LAB_1053a9e4c;
        iVar3 = (int)unaff_x23 + 0x10;
        func_0x0001053aaac8();
        if (iVar3 != 0) {
          uVar10 = *(ulong *)(param_1 + 0xa0);
          lVar21 = *unaff_x23;
          uVar22 = unaff_x23[1];
          uVar13 = uVar10 - 1;
          if ((uVar10 & uVar13) == 0) {
            uVar22 = uVar13 & uVar22;
          }
          else if (uVar10 <= uVar22) {
            uVar15 = 0;
            if (uVar10 != 0) {
              uVar15 = uVar22 / uVar10;
            }
            uVar22 = uVar22 - uVar15 * uVar10;
          }
          lVar14 = *(long *)(param_1 + 0x98);
          plVar19 = *(long **)(lVar14 + uVar22 * 8);
          do {
            plVar7 = plVar19;
            plVar19 = (long *)*plVar7;
          } while ((long *)*plVar7 != unaff_x23);
          if (plVar7 == (long *)(param_1 + 0xa8)) {
LAB_1053aa1e8:
            if (lVar21 == 0) {
LAB_1053aa21c:
              *(undefined8 *)(lVar14 + uVar22 * 8) = 0;
              lVar21 = *unaff_x23;
              goto LAB_1053aa224;
            }
            uVar15 = *(ulong *)(lVar21 + 8);
            if ((uVar10 & uVar13) == 0) {
              uVar16 = uVar15 & uVar13;
            }
            else {
              uVar16 = uVar15;
              if (uVar10 <= uVar15) {
                uVar16 = 0;
                if (uVar10 != 0) {
                  uVar16 = uVar15 / uVar10;
                }
                uVar16 = uVar15 - uVar16 * uVar10;
              }
            }
            if (uVar16 != uVar22) goto LAB_1053aa21c;
LAB_1053aa22c:
            if ((uVar10 & uVar13) == 0) {
              uVar15 = uVar15 & uVar13;
            }
            else if (uVar10 <= uVar15) {
              uVar13 = 0;
              if (uVar10 != 0) {
                uVar13 = uVar15 / uVar10;
              }
              uVar15 = uVar15 - uVar13 * uVar10;
            }
            if (uVar15 != uVar22) {
              *(long **)(lVar14 + uVar15 * 8) = plVar7;
              lVar21 = *unaff_x23;
            }
          }
          else {
            uVar15 = plVar7[1];
            if ((uVar10 & uVar13) == 0) {
              uVar15 = uVar15 & uVar13;
            }
            else if (uVar10 <= uVar15) {
              uVar16 = 0;
              if (uVar10 != 0) {
                uVar16 = uVar15 / uVar10;
              }
              uVar15 = uVar15 - uVar16 * uVar10;
            }
            if (uVar15 != uVar22) goto LAB_1053aa1e8;
LAB_1053aa224:
            if (lVar21 != 0) {
              uVar15 = *(ulong *)(lVar21 + 8);
              goto LAB_1053aa22c;
            }
          }
          func_0x0001053aaa6c(lVar21);
          FUN_1053aaa08();
          goto LAB_1053a9e78;
        }
      }
    }
  }
LAB_1053a9e74:
  plVar23 = (long *)0x0;
LAB_1053a9e78:
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + (long)plVar23;
  plVar23 = (long *)(param_1 + 0x88);
  func_0x0001053aab4c();
  plVar19 = *(long **)(param_1 + 0x78);
  if (plVar19 != (long *)0x0) {
    uVar22 = (long)plVar19 - 1;
    if (((ulong)plVar19 & uVar22) == 0) {
      unaff_x23 = (long *)(uVar22 & (ulong)plVar23);
    }
    else {
      unaff_x23 = plVar23;
      if (plVar19 <= plVar23) {
        func_0x0001053aabe4();
      }
    }
    puVar17 = *(undefined8 **)(*(long *)(param_1 + 0x70) + (long)unaff_x23 * 8);
    if (puVar17 != (undefined8 *)0x0) {
      do {
        while( true ) {
          puVar17 = (undefined8 *)*puVar17;
          if (puVar17 == (undefined8 *)0x0) goto LAB_1053a9f18;
          plVar7 = (long *)puVar17[1];
          if (plVar7 != plVar23) break;
          puVar8 = puVar17 + 2;
          func_0x0001053aaac8();
          if (((ulong)puVar8 & 1) != 0) goto LAB_1053aa17c;
        }
        if (((ulong)plVar19 & uVar22) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar22);
        }
        else if (plVar19 <= plVar7) {
          uVar10 = 0;
          if (plVar19 != (long *)0x0) {
            uVar10 = (ulong)plVar7 / (ulong)plVar19;
          }
          plVar7 = (long *)((long)plVar7 - uVar10 * (long)plVar19);
        }
      } while (plVar7 == unaff_x23);
    }
  }
LAB_1053a9f18:
  puVar17 = (undefined8 *)0x80;
  __Znwm();
  uStack_58 = 0;
  *puVar17 = 0;
  puVar17[1] = plVar23;
  puStack_68 = puVar17;
  plStack_60 = (long *)(param_1 + 0x80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar17 + 2,auStack_80);
  func_0x0001053aaa4c(puVar17 + 5);
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  if ((plVar19 != (long *)0x0) &&
     (plVar7 = unaff_x23,
     (float)(*(long *)(param_1 + 0x88) + 1) <= *(float *)(param_1 + 0x90) * (float)plVar19))
  goto LAB_1053aa114;
  func_0x0001053aab54();
  bVar2 = plVar19 == (long *)0x3;
  func_0x0001053aab10();
  if (bVar2) {
    unaff_x23 = (long *)0x2;
  }
  else if (((ulong)unaff_x23 & extraout_x8) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar19 = *(long **)(param_1 + 0x78);
  if (plVar19 < unaff_x23) {
LAB_1053a9fac:
    if ((ulong)unaff_x23 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1053aa270);
      (*pcVar1)();
    }
    lVar21 = (long)unaff_x23 << 3;
    __Znwm(lVar21);
    func_0x0001053aaa54(param_1 + 0x70,lVar21);
    *(long **)(param_1 + 0x78) = unaff_x23;
    lVar21 = *(long *)(param_1 + 0x70);
    for (plVar19 = (long *)0x0; unaff_x23 != plVar19; plVar19 = (long *)((long)plVar19 + 1)) {
      *(undefined8 *)(lVar21 + (long)plVar19 * 8) = 0;
    }
    plVar19 = unaff_x23;
    if (*(long *)(param_1 + 0x80) != 0) {
      func_0x0001053aabd0();
      func_0x0001053aabbc();
      lVar21 = extraout_x8_00;
      uVar22 = extraout_x9;
      plVar7 = extraout_x10;
      plVar11 = extraout_x11;
      while (plVar9 = plVar7, plVar7 = (long *)*plVar9, plVar7 != (long *)0x0) {
        plVar12 = (long *)plVar7[1];
        if (((ulong)unaff_x23 & uVar22) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar22);
        }
        else if (unaff_x23 <= plVar12) {
          uVar10 = 0;
          if (unaff_x23 != (long *)0x0) {
            uVar10 = (ulong)plVar12 / (ulong)unaff_x23;
          }
          plVar12 = (long *)((long)plVar12 - uVar10 * (long)unaff_x23);
        }
        if (plVar12 != plVar11) {
          if (*(long *)(lVar21 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar21 + (long)plVar12 * 8) = plVar9;
            plVar11 = plVar12;
          }
          else {
            func_0x0001053aaaf0();
            lVar21 = extraout_x8_01;
            uVar22 = extraout_x9_00;
            plVar7 = extraout_x10_00;
            plVar11 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (unaff_x23 < plVar19) {
    plVar7 = (long *)(long)((float)*(ulong *)(param_1 + 0x88) / *(float *)(param_1 + 0x90));
    if ((plVar19 < (long *)0x3) || (((ulong)plVar19 & (long)plVar19 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001053aaad0();
    }
    if (unaff_x23 <= plVar7) {
      unaff_x23 = plVar7;
    }
    if (unaff_x23 < plVar19) {
      if (unaff_x23 != (long *)0x0) goto LAB_1053a9fac;
      func_0x0001053aaa54(param_1 + 0x70,0);
      *(undefined8 *)(param_1 + 0x78) = 0;
      plVar19 = (long *)0x0;
    }
    else {
      plVar19 = *(long **)(param_1 + 0x78);
    }
  }
  if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
    plVar7 = (long *)((long)plVar19 - 1U & (ulong)plVar23);
  }
  else {
    plVar7 = plVar23;
    if (plVar19 <= plVar23) {
      func_0x0001053aabe4();
      plVar7 = unaff_x23;
    }
  }
LAB_1053aa114:
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x70) + (long)plVar7 * 8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0001053aab6c();
    if (extraout_x9_01 != 0) {
      plVar23 = *(long **)(extraout_x9_01 + 8);
      if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
        plVar23 = (long *)((ulong)plVar23 & (long)plVar19 - 1U);
      }
      else if (plVar19 <= plVar23) {
        uVar22 = 0;
        if (plVar19 != (long *)0x0) {
          uVar22 = (ulong)plVar23 / (ulong)plVar19;
        }
        plVar23 = (long *)((long)plVar23 - uVar22 * (long)plVar19);
      }
      *(undefined8 **)(extraout_x8_02 + (long)plVar23 * 8) = puVar17;
    }
  }
  else {
    *puVar17 = *puVar8;
    *puVar8 = puVar17;
  }
  puStack_68 = (undefined8 *)0x0;
  *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
  FUN_1053aa9ac(&puStack_68);
LAB_1053aa17c:
  func_0x00010b56d6c0(puVar17 + 5,param_2);
  func_0x0001053aaab4();
  return;
LAB_1053a9e4c:
  if (((ulong)ppuVar18 & uVar22) == 0) {
    ppuVar20 = (undefined **)((ulong)ppuVar20 & uVar22);
  }
  else if (ppuVar18 <= ppuVar20) {
    uVar10 = 0;
    if (ppuVar18 != (undefined **)0x0) {
      uVar10 = (ulong)ppuVar20 / (ulong)ppuVar18;
    }
    ppuVar20 = (undefined **)((long)ppuVar20 - uVar10 * (long)ppuVar18);
  }
  if (ppuVar20 != ppuVar5) goto LAB_1053a9e74;
  goto LAB_1053a9e28;
}



/* Entry: 1053aa2a0; end: 1053aa2a3;  */

void FUN_1053aa2a0(void)

{
  return;
}



/* Entry: 1053aa2a4; end: 1053aa333;  */

void FUN_1053aa2a4(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0xb0) != 0) {
    func_0x0001053aa910(param_1 + 0x98,*(undefined8 *)(param_1 + 0xa8));
    *(undefined8 *)(param_1 + 0xa8) = 0;
    lVar2 = *(long *)(param_1 + 0xa0);
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*(long *)(param_1 + 0x98) + lVar1 * 8) = 0;
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    func_0x0001053aa84c(param_1 + 0x70,*(undefined8 *)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x80) = 0;
    lVar2 = *(long *)(param_1 + 0x78);
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*(long *)(param_1 + 0x70) + lVar1 * 8) = 0;
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  return;
}



/* Entry: 1053aa334; end: 1053aa63f;  */

long FUN_1053aa334(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar3;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar3 = param_2 + 0x15;
  while (puVar3 = (undefined8 *)*puVar3, puVar3 != (undefined8 *)0x0) {
    FUN_1053aad24(&ppuStack_68,puVar3 + 5);
    func_0x0001053a30b0(param_2 + 4,&ppuStack_68);
    func_0x0001053aab84();
  }
  puVar3 = param_2 + 0x10;
  while (puVar3 = (undefined8 *)*puVar3, puVar3 != (undefined8 *)0x0) {
    FUN_1053aad54(&ppuStack_68,puVar3 + 5);
    func_0x0001053a2da8(param_2 + 1,&ppuStack_68);
    func_0x0001053aab84();
  }
  param_2[0x1b] = (long)(param_2[5] - param_2[4]) / 0x18 + (long)(param_2[2] - param_2[1]) / 0x18;
  puVar3 = param_2;
  FUN_1053aa2a4();
  if (((param_2[0x18] != 0) || (param_2[0x1a] != 0)) || (param_2[0x19] != 0)) {
    func_0x000100c222a0();
    uStack_58 = 0;
    uStack_50 = 0;
    ppuStack_68 = &PTR_FUN_110880ab8;
    uStack_60 = 0;
    uStack_48 = 4;
    func_0x00010002b838(auStack_f0,"kind");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_108,param_2 + 0x1c);
    pppuVar2 = &ppuStack_68;
    func_0x000100c220c4(pppuVar2,auStack_f0,auStack_108);
    (**(code **)(*(long *)*puVar3 + 8))((long *)*puVar3,pppuVar2,1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
    func_0x000100c22280(&ppuStack_68);
    func_0x00010002b838();
    func_0x0001053aaabc();
    func_0x0001053aab34();
    func_0x00010002b838();
    func_0x0001053aaabc();
    func_0x0001053aab34();
    func_0x00010002b838();
    func_0x0001053aaabc();
    func_0x0001053aab34();
  }
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  if (param_2[0x1b] != 0) {
    uStack_80 = 0;
    uStack_78 = 0;
    ppuStack_90 = &PTR_FUN_110880ab8;
    uStack_88 = 0;
    uStack_70 = 8;
    func_0x00010002b838(auStack_a8,"kind");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_c0,param_2 + 0x1c);
    pppuVar2 = &ppuStack_90;
    func_0x000100c220c4(pppuVar2,auStack_a8,auStack_c0);
    func_0x00010002b838(auStack_d8,"version");
    func_0x000100c22160(pppuVar2,auStack_d8,"v1");
    func_0x000100c22244(&ppuStack_68,pppuVar2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
    func_0x000100c22280(&ppuStack_90);
    func_0x000100c222a0();
    func_0x0001053aabb0();
    func_0x0001053aab8c(*(undefined8 *)(extraout_x8 + 8));
    func_0x000100c222a0();
    func_0x0001053aabb0();
    func_0x0001053aab8c(*(undefined8 *)(extraout_x8_00 + 0x10));
    func_0x000100c22280(&ppuStack_68);
  }
  param_2[0x1b] = 0;
  lVar1 = param_1;
  FUN_1053a8d00();
  func_0x0001053a8e6c(lVar1 + 0x18,param_2 + 4);
  func_0x00010054f8dc(param_1 + 0x30,param_2 + 7);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 10);
  func_0x00010054f8dc(param_1 + 0x50,param_2 + 0xb);
  return param_1;
}



/* Entry: 1053aa640; end: 1053aa663;  */

void FUN_1053aa640(long param_1)

{
  FUN_1053aa2a4();
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  return;
}



/* Entry: 1053aa664; end: 1053aa7c3;  */

void FUN_1053aa664(long param_1,undefined8 param_2,long param_3)

{
  undefined ***pppuVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  if (param_3 != 0) {
    uStack_70 = 0;
    uStack_68 = 0;
    ppuStack_80 = &PTR_FUN_110880ab8;
    uStack_78 = 0;
    uStack_60 = 3;
    func_0x00010002b838(auStack_98,"kind");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_b0,param_1 + 0xe0);
    pppuVar1 = &ppuStack_80;
    func_0x000100c220c4(pppuVar1,auStack_98,auStack_b0);
    func_0x00010002b838(auStack_c8,&DAT_10f6389e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_e0,param_2);
    func_0x000100c220c4(pppuVar1,auStack_c8,auStack_e0);
    func_0x000100c22244(auStack_58,pppuVar1);
    func_0x0001053aaab4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
    func_0x000100c22280(&ppuStack_80);
    func_0x000100c222a0();
    func_0x0001053aabb0();
    func_0x0001053aab98(*(undefined8 *)(extraout_x8 + 8));
    func_0x000100c222a0();
    func_0x0001053aabb0();
    func_0x0001053aab98(*(undefined8 *)(extraout_x8_00 + 0x10));
    func_0x000100c22280(auStack_58);
  }
  return;
}



/* Entry: 1053aa7c4; end: 1053aa7c7;  */

undefined8 FUN_1053aa7c4(undefined8 *param_1)

{
  undefined8 unaff_x19;
  
  *param_1 = &PTR_FUN_1108811b8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1c);
  FUN_1053aa8e8(param_1 + 0x13);
  func_0x0001053aa824(param_1 + 0xe);
  func_0x000100c1b898(param_1);
  func_0x0001053a063c();
  return unaff_x19;
}



/* Entry: 1053aa7c8; end: 1053aa7db;  */

void FUN_1053aa7c8(void)

{
  FUN_1053aa7dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053aa7dc; end: 1053aa8cf;  */

undefined8 FUN_1053aa7dc(undefined8 *param_1)

{
  undefined8 unaff_x19;
  
  *param_1 = &PTR_FUN_1108811b8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1c);
  FUN_1053aa8e8(param_1 + 0x13);
  func_0x0001053aa824(param_1 + 0xe);
  func_0x000100c1b898(param_1);
  func_0x0001053a063c();
  return unaff_x19;
}



/* Entry: 1053aa8d0; end: 1053aa8e7;  */

void FUN_1053aa8d0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1053aa8e8; end: 1053aa993;  */

long FUN_1053aa8e8(long param_1)

{
  func_0x0001053aa910(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_1053aa994(param_1,0);
  return param_1;
}



/* Entry: 1053aa994; end: 1053aa9ab;  */

void FUN_1053aa994(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1053aa9ac; end: 1053aa9ef;  */

long * FUN_1053aa9ac(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001053aa884(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1053aa9f0; end: 1053aaa07;  */

void FUN_1053aa9f0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1053aaa08; end: 1053aaa4b;  */

long * FUN_1053aaa08(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001053aa948(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1053aaa4c; end: 1053aabef;  */

undefined8 * FUN_1053aaa4c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d0ac58;
  param_1[1] = 0;
  func_0x00010b56d2ec();
  return param_1;
}



/* Entry: 1053aabf0; end: 1053aac33;  */

void FUN_1053aabf0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xb0;
  __Znwm();
  FUN_1053a7538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1053aac34; end: 1053aac63;  */

void FUN_1053aac34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053aac64; end: 1053aac9b;  */

void FUN_1053aac64(void)

{
  undefined1 auStack_50 [48];
  
  func_0x0001053ab500();
  func_0x0001053ab4a0();
  func_0x0001053ab4d0();
  func_0x000100100fec(auStack_50);
  func_0x0001053ab4f8();
  return;
}



/* Entry: 1053aac9c; end: 1053aacd3;  */

void FUN_1053aac9c(void)

{
  undefined1 auStack_50 [48];
  
  func_0x0001053ab500();
  func_0x0001053ab4a0();
  func_0x0001053ab4d0();
  func_0x000100100fec(auStack_50);
  func_0x0001053ab4f8();
  return;
}



/* Entry: 1053aacd4; end: 1053aad23;  */

void FUN_1053aacd4(undefined8 *param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x0001053aac40(&uStack_40,*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x0001053ab540();
  return;
}



/* Entry: 1053aad24; end: 1053aad53;  */

void FUN_1053aad24(void)

{
  func_0x0001053ab528();
  func_0x0001053ab4a0();
  func_0x0001053ab480();
  func_0x0001053ab4f8();
  return;
}



/* Entry: 1053aad54; end: 1053aad83;  */

void FUN_1053aad54(void)

{
  func_0x0001053ab528();
  func_0x0001053ab4a0();
  func_0x0001053ab480();
  func_0x0001053ab4f8();
  return;
}



/* Entry: 1053aad84; end: 1053aadb3;  */

void FUN_1053aad84(void)

{
  func_0x0001053ab528();
  func_0x0001053ab4a0();
  func_0x0001053ab480();
  func_0x0001053ab4f8();
  return;
}



/* Entry: 1053aadb4; end: 1053ab04f;  */

void FUN_1053aadb4(undefined8 *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined8 auStack_d8 [3];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 auStack_90 [3];
  undefined1 auStack_78 [40];
  
  puVar1 = param_1;
  func_0x000100c222a0();
  func_0x0001053ab4b8();
  func_0x00010002b838(auStack_90,"kind");
  func_0x0001053ab564(auStack_a8);
  puVar2 = auStack_78;
  func_0x000100c220c4(puVar2,auStack_90,auStack_a8);
  func_0x00010002b838(auStack_c0,"compress");
  func_0x000100c22114(puVar2,auStack_c0,param_1);
  func_0x0001053ab56c(*(undefined8 *)(*(long *)*puVar1 + 8),(long *)*puVar1,puVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  puVar1 = auStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0001053ab550();
  if (((int)param_1 != 0) && (param_2 != 0)) {
    func_0x000100c222a0();
    func_0x0001053ab4b8();
    func_0x00010002b838(auStack_d8,"kind");
    func_0x0001053ab564(auStack_f0);
    puVar2 = auStack_78;
    func_0x000100c220c4(puVar2,auStack_d8,auStack_f0);
    func_0x00010002b838(auStack_108,"unwanted");
    func_0x000100c22160(puVar2,auStack_108,"v1");
    func_0x0001053ab56c(*(undefined8 *)(*(long *)*puVar1 + 8),(long *)*puVar1,puVar2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
    puVar1 = auStack_d8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0001053ab550();
  }
  if ((param_3 != 0) && ((int)param_1 == 0)) {
    func_0x000100c222a0();
    func_0x0001053ab4b8();
    func_0x00010002b838(auStack_120,"kind");
    func_0x0001053ab564(auStack_138);
    puVar2 = auStack_78;
    func_0x000100c220c4(puVar2,auStack_120,auStack_138);
    func_0x00010002b838(auStack_150,"unwanted");
    func_0x000100c22160(puVar2,auStack_150,"v2");
    func_0x0001053ab56c(*(undefined8 *)(*(long *)*puVar1 + 8),(long *)*puVar1,puVar2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
    func_0x0001053ab550();
  }
  return;
}



/* Entry: 1053ab050; end: 1053ab1f3;  */

void FUN_1053ab050(undefined **param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  int iVar5;
  long lVar6;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  iVar5 = *(int *)((long)param_1 + 0x1c);
  if (iVar5 == 3) {
    *(undefined1 *)(*param_4 + 0x50) = 1;
    iVar5 = *(int *)((long)param_1 + 0x1c);
  }
  if (iVar5 != 1) goto LAB_1053ab178;
  iVar5 = *(int *)(param_1[2] + 0x20);
  uVar1 = *(uint *)(param_1[2] + 0x10);
  ppuVar3 = param_1;
  if ((uVar1 & 1) == 0) {
    if (iVar5 == 0) {
      return;
    }
LAB_1053ab0b8:
    FUN_1053ab588(param_1,param_2,param_4);
    if ((uVar1 & 1) != 0) goto LAB_1053ab0c8;
  }
  else {
    if (iVar5 != 0) goto LAB_1053ab0b8;
LAB_1053ab0c8:
    iVar2 = (int)ppuVar3;
    func_0x000100c1b7b0();
    if (iVar2 == 0) {
      ppuVar4 = param_1;
      FUN_1053ab370();
      ppuVar3 = &PTR_PTR_11339b1c8;
      if ((undefined **)ppuVar4[6] != (undefined **)0x0) {
        ppuVar3 = (undefined **)ppuVar4[6];
      }
      ppuStack_88 = &PTR_DAT_110d0a758;
      uStack_80 = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      puStack_58 = &DAT_11383d918;
      puStack_50 = &DAT_11383d918;
      uStack_48 = 0;
      FUN_1053ac014(ppuVar3,&ppuStack_88,param_4);
      func_0x00010b56d784(&ppuStack_88);
    }
    else {
      ppuVar3 = param_1;
      FUN_1053ab370();
      FUN_1053ab1f4();
      ppuStack_88 = ppuVar3;
      (**(code **)(*(long *)*param_4 + 0x20))((long *)*param_4,&ppuStack_88);
      func_0x0001053a9018(&ppuStack_88);
    }
  }
  FUN_1053aadb4(param_3,iVar5 != 0,uVar1 & 1,param_5);
  iVar5 = *(int *)((long)param_1 + 0x1c);
LAB_1053ab178:
  if (iVar5 == 2) {
    lVar6 = *param_4;
    func_0x0001053ab574(*(undefined8 *)(param_1[2] + 0x18));
    FUN_1053aacd4(&ppuStack_88);
    func_0x0001006202b4(lVar6 + 0x38,&ppuStack_88);
    func_0x000100100fec(&ppuStack_88);
  }
  return;
}



/* Entry: 1053ab1f4; end: 1053ab22b;  */

long FUN_1053ab1f4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
  lVar1 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if (uVar2 == 0) {
    return lVar1;
  }
  if (lVar1 == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x00010b4cf4b4();
    func_0x00010b4cf4a0();
  }
  return unaff_x20;
}



/* Entry: 1053ab22c; end: 1053ab33b;  */

void FUN_1053ab22c(long param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  ulong uStack_48;
  int iStack_40;
  
  *(undefined1 *)(param_2 + 0x48) = *(undefined1 *)(param_1 + 0x38);
  FUN_1053ab33c(&uStack_48,param_1 + 0x18);
  puVar1 = &uStack_48;
  if ((uStack_48 & 1) != 0) {
    puVar1 = (ulong *)(uStack_48 + 7);
  }
  lVar3 = (long)iStack_40 << 3;
  do {
    if (lVar3 == 0) {
      func_0x0001053ab574(*(undefined8 *)(param_1 + 0x30));
      FUN_1053aacd4(auStack_60);
      func_0x00010065acbc(param_2 + 0x30,auStack_60);
      func_0x0001053ab540();
      FUN_1053ab450(&uStack_48);
      return;
    }
    uVar2 = *puVar1;
    if (*(int *)(uVar2 + 0x1c) == 1) {
      FUN_1053aad54(auStack_60,*(undefined8 *)(uVar2 + 0x10));
      func_0x0001053a2da8(param_2,auStack_60);
LAB_1053ab2c8:
      func_0x0001053ab540();
    }
    else if (*(int *)(uVar2 + 0x1c) == 2) {
      FUN_1053aad24(auStack_60,*(undefined8 *)(uVar2 + 0x10));
      func_0x0001053a30b0(param_2 + 0x18,auStack_60);
      goto LAB_1053ab2c8;
    }
    puVar1 = puVar1 + 1;
    lVar3 = lVar3 + -8;
  } while( true );
}



/* Entry: 1053ab33c; end: 1053ab36f;  */

undefined8 * FUN_1053ab33c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1053ab440(param_1,param_2);
  return param_1;
}



/* Entry: 1053ab370; end: 1053ab43f;  */

void FUN_1053ab370(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 1) {
    func_0x000100c7d284(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 1;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x0001053ab3c4();
    *(ulong *)(param_1 + 0x10) = uVar1;
  }
  return;
}



/* Entry: 1053ab440; end: 1053ab44f;  */

void FUN_1053ab440(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 1053ab450; end: 1053ab47f;  */

long * FUN_1053ab450(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001000681a0(param_1);
  }
  return param_1;
}



/* Entry: 1053ab480; end: 1053ab587;  */

undefined8 * FUN_1053ab480(void)

{
  undefined8 *unaff_x19;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *puStack_28;
  
  unaff_x19[1] = in_stack_00000028;
  *unaff_x19 = in_stack_00000020;
  unaff_x19[2] = in_stack_00000030;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000020 = 0;
  puStack_28 = &stack0x00000020;
  func_0x000100100fd4(&puStack_28);
  return &stack0x00000020;
}



/* Entry: 1053ab588; end: 1053ab657;  */

void FUN_1053ab588(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined **ppuVar1;
  ulong *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uStack_48;
  int iStack_40;
  
  ppuVar1 = *(undefined ***)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x1c) != 1) {
    ppuVar1 = &PTR_PTR_11339a600;
  }
  FUN_1053ab33c(&uStack_48,ppuVar1 + 3);
  puVar2 = &uStack_48;
  if ((uStack_48 & 1) != 0) {
    puVar2 = (ulong *)(uStack_48 + 7);
  }
  lVar5 = (long)iStack_40 << 3;
  do {
    if (lVar5 == 0) {
      FUN_1053ab450(&uStack_48);
      return;
    }
    iVar3 = *(int *)(*puVar2 + 0x1c);
    if (iVar3 == 1) {
      lVar4 = 0x18;
LAB_1053ab608:
      (**(code **)(*(long *)*param_3 + lVar4))((long *)*param_3,*(undefined8 *)(*puVar2 + 0x10));
    }
    else if (iVar3 == 2) {
      lVar4 = 0x10;
      goto LAB_1053ab608;
    }
    puVar2 = puVar2 + 1;
    lVar5 = lVar5 + -8;
  } while( true );
}



/* Entry: 1053ab658; end: 1053ab98f;  */

void FUN_1053ab658(long param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_7c;
  undefined1 auStack_78 [24];
  
  FUN_1053aaa4c(param_1);
  uVar10 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar10;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_1 + 8);
    if (((ulong)puVar5 & 1) != 0) {
      puVar5 = *(undefined8 **)((ulong)puVar5 & 0xfffffffffffffffe);
    }
    FUN_1053a68b8();
    *(undefined8 **)(param_1 + 0x38) = puVar5;
  }
  func_0x00010b56da00();
  uVar13 = *(uint *)(param_2 + 0x18);
  uVar3 = *(uint *)(param_2 + 0x30);
  if (uVar13 != uVar3) {
    func_0x000100c222a0();
    if (uVar13 - uVar3 == 0 || (int)uVar13 < (int)uVar3) {
      puVar6 = puVar5;
      func_0x0001053abc78(&UNK_110880aa8);
      func_0x0001053abc58();
      func_0x0001053abc98();
      (**(code **)(*(long *)*puVar5 + 8))((long *)*puVar5,puVar6,(long)(int)(uVar3 - uVar13));
    }
    else {
      puVar6 = puVar5;
      func_0x0001053abc78(&UNK_110880aa8);
      func_0x0001053abc58();
      func_0x0001053abc98();
      (**(code **)(*(long *)*puVar5 + 8))((long *)*puVar5,puVar6,(long)(int)(uVar13 - uVar3));
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
    func_0x000100c22280(auStack_b0);
    uVar13 = *(uint *)(param_2 + 0x30);
    if ((int)*(uint *)(param_2 + 0x18) <= (int)*(uint *)(param_2 + 0x30)) {
      uVar13 = *(uint *)(param_2 + 0x18);
    }
  }
  lVar15 = 8;
  for (uVar14 = (ulong)(uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU)); uVar14 != 0;
      uVar14 = uVar14 - 1) {
    uVar9 = *(ulong *)(param_2 + 0x10);
    puVar1 = (ulong *)(param_2 + 0x10);
    if ((uVar9 & 1) != 0) {
      puVar1 = (ulong *)(uVar9 + lVar15 + -1);
    }
    uVar9 = *(ulong *)(param_2 + 0x28);
    puVar2 = (ulong *)(param_2 + 0x28);
    if ((uVar9 & 1) != 0) {
      puVar2 = (ulong *)(uVar9 + lVar15 + -1);
    }
    uVar12 = *puVar2;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_b0,*puVar1);
    uVar9 = 0;
    func_0x00010b56f068(&uStack_98,0,uVar12);
    puVar7 = auStack_b0;
    func_0x0001006039a0();
    func_0x0001053abc44();
    if (puVar7 == (undefined1 *)0x0) {
      uVar12 = (ulong)(*(int *)(param_1 + 0x18) + 1);
      lVar8 = param_1 + 0x18;
      func_0x00010055e6e8(lVar8,uVar12);
      if ((int)lVar8 != 0) {
        func_0x0001006039a0(auStack_b0);
        func_0x0001053abc44();
        uVar9 = uVar12;
      }
      lVar8 = param_1 + 0x18;
      func_0x00010055df10(lVar8,0x40);
      func_0x0001053aba50(lVar8 + 8,*(undefined8 *)(param_1 + 0x30),auStack_b0);
      puVar5 = (undefined8 *)(lVar8 + 0x20);
      *puVar5 = &PTR_DAT_110d0a9d8;
      *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(lVar8 + 0x38) = 0;
      func_0x00010055e950(param_1 + 0x18,uVar9,lVar8);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      if (puVar5 != &uStack_98) {
        uVar12 = *(ulong *)(lVar8 + 0x28);
        uVar9 = uVar12;
        if ((uVar12 & 1) != 0) {
          uVar9 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
        }
        uVar11 = uStack_90;
        if ((uStack_90 & 1) != 0) {
          uVar11 = *(ulong *)(uStack_90 & 0xfffffffffffffffe);
        }
        if (uVar9 == uVar11) {
          *(ulong *)(lVar8 + 0x28) = uStack_90;
          uVar10 = *(undefined8 *)(lVar8 + 0x30);
          *(undefined8 *)(lVar8 + 0x30) = uStack_88;
          uVar4 = *(undefined4 *)(lVar8 + 0x3c);
          *(undefined4 *)(lVar8 + 0x3c) = uStack_7c;
          uStack_90 = uVar12;
          uStack_88 = uVar10;
          uStack_7c = uVar4;
        }
        else {
          func_0x00010b56f8e8(puVar5,&uStack_98);
        }
      }
    }
    FUN_1053aba28(auStack_b0);
    lVar15 = lVar15 + 8;
  }
  return;
}



/* Entry: 1053ab990; end: 1053aba27;  */

void FUN_1053ab990(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_78 [88];
  
  if (*(int *)(param_2 + 0x1c) != 2) {
    if (*(int *)(param_2 + 0x1c) == 1) {
      plVar1 = (long *)*param_1;
      FUN_1053ab658(auStack_78,*(undefined8 *)(param_2 + 0x10),param_3);
      (**(code **)(*plVar1 + 0x18))(plVar1,auStack_78);
      func_0x00010b56d36c(auStack_78);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001053aba10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,param_3);
  return;
}



/* Entry: 1053aba28; end: 1053aba87;  */

void FUN_1053aba28(long param_1)

{
  func_0x00010b56f144(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1053aba88; end: 1053abb1b;  */

uint FUN_1053aba88(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = (long)&PTR_LOOP_110c8acd8 + (param_2 ^ *(uint *)(param_1 + 8));
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  return *(int *)(param_1 + 4) - 1U &
         (SUB164(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ (int)uVar1 * -0x14c7d297);
}



/* Entry: 1053abb1c; end: 1053abb9b;  */

undefined8 FUN_1053abb1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  _strlen(param_2);
  func_0x00010ae6bd08(param_1,param_2,uVar1);
  return param_1;
}



/* Entry: 1053abb9c; end: 1053abba3;  */

void FUN_1053abb9c(undefined8 param_1,undefined8 *param_2)

{
  func_0x0001053abc68(param_1,*param_2);
  return;
}



/* Entry: 1053abba4; end: 1053abbfb;  */

void FUN_1053abba4(void)

{
  func_0x0001053abc68();
  return;
}



/* Entry: 1053abbfc; end: 1053abca3;  */

void FUN_1053abbfc(long param_1,long *param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar2;
  ulong extraout_x10;
  ulong extraout_x10_00;
  
  if (param_1 == 0) {
    return;
  }
  func_0x00010b4d7468();
  lVar1 = param_2[1];
  if (0xf < (ulong)(lVar1 - *param_2)) {
    param_2[1] = lVar1 + -0x10;
    if (((lVar1 + -0x10) - param_2[3] < 0x181) && ((ulong)param_2[2] < (ulong)param_2[3])) {
      func_0x00010b4d826c();
      for (uVar2 = extraout_x9_00; extraout_x10_00 < uVar2; uVar2 = uVar2 - 0x40) {
        Hint_Prefetch(uVar2,2,0,0);
      }
      param_2[3] = uVar2;
      lVar1 = extraout_x8_00;
    }
    *(long *)(lVar1 + -0x10) = param_1;
    *(undefined **)(lVar1 + -8) = &UNK_104c611dc;
    return;
  }
  func_0x00010b4d74c4();
  lVar1 = param_2[1];
  param_2[1] = lVar1 + -0x10;
  if (((lVar1 + -0x10) - param_2[3] < 0x181) && ((ulong)param_2[2] < (ulong)param_2[3])) {
    func_0x00010b4d826c();
    for (uVar2 = extraout_x9; extraout_x10 < uVar2; uVar2 = uVar2 - 0x40) {
      Hint_Prefetch(uVar2,2,0,0);
    }
    param_2[3] = uVar2;
    lVar1 = extraout_x8;
  }
  *(long *)(lVar1 + -0x10) = param_1;
  *(undefined **)(lVar1 + -8) = &UNK_104c611dc;
  return;
}



/* Entry: 1053abca4; end: 1053abd77;  */

void FUN_1053abca4(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if (*(int *)(param_1 + 0x40) == 2) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(param_2 + 0x24) != 3) {
      func_0x00010b56ec30(param_2);
      *(undefined4 *)(param_2 + 0x24) = 3;
    }
    *(undefined8 *)(param_2 + 0x18) = uVar3;
    return;
  }
  if (*(int *)(param_1 + 0x40) != 1) {
    return;
  }
  uVar5 = *(ulong *)(param_1 + 0x38);
  if (*(int *)(param_2 + 0x24) != 2) {
    func_0x00010b56ec30(param_2);
    *(undefined4 *)(param_2 + 0x24) = 2;
    *(undefined **)(param_2 + 0x18) = &DAT_11383d918;
  }
  puVar4 = *(undefined8 **)(param_2 + 8);
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = *(undefined8 **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)(uVar5 & 0xfffffffffffffffc);
  uVar5 = *(ulong *)(param_2 + 0x18);
  if ((uVar5 & 3) == 0) {
    uVar5 = puVar2[1];
    puVar1 = (undefined8 *)*puVar2;
    if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
      uVar5 = (ulong)*(byte *)((long)puVar2 + 0x17);
      puVar1 = puVar2;
    }
    if (puVar4 == (undefined8 *)0x0) {
      func_0x0001001a5520(puVar1,uVar5);
    }
    else {
      func_0x000107c39890(puVar4,puVar1,uVar5);
      puVar1 = puVar4;
    }
    *(ulong *)(param_2 + 0x18) = (ulong)puVar1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (uVar5 & 0xfffffffffffffffc);
  return;
}



/* Entry: 1053abd78; end: 1053abe47;  */

void FUN_1053abd78(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (*(int *)(param_1 + 0x40) == 2) {
    FUN_1053abe48();
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x40) != 2) {
      uVar5 = 0;
    }
    if (*(int *)(param_2 + 0x24) != 3) {
      func_0x000100c1b65c(param_2);
      *(undefined4 *)(param_2 + 0x24) = 3;
    }
    *(undefined8 *)(param_2 + 0x18) = uVar5;
    return;
  }
  if (*(int *)(param_1 + 0x40) != 1) {
    return;
  }
  FUN_1053abe48();
  puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
  if (*(int *)(param_1 + 0x40) != 1) {
    puVar1 = (undefined8 *)&DAT_11383d918;
  }
  if (*(int *)(param_2 + 0x24) != 2) {
    func_0x000100c1b65c(param_2);
    *(undefined4 *)(param_2 + 0x24) = 2;
    *(undefined **)(param_2 + 0x18) = &DAT_11383d918;
  }
  puVar3 = *(undefined8 **)(param_2 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(undefined8 **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  uVar4 = *(ulong *)(param_2 + 0x18);
  if ((uVar4 & 3) == 0) {
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)*puVar1;
    if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)puVar1 + 0x17);
      puVar2 = puVar1;
    }
    if (puVar3 == (undefined8 *)0x0) {
      func_0x0001001a5520(puVar2,uVar4);
    }
    else {
      func_0x000107c39890(puVar3,puVar2,uVar4);
      puVar2 = puVar3;
    }
    *(ulong *)(param_2 + 0x18) = (ulong)puVar2;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (uVar4 & 0xfffffffffffffffc);
  return;
}



/* Entry: 1053abe48; end: 1053abe57;  */

void FUN_1053abe48(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x40) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000100c1b5f8();
    *(ulong *)(param_1 + 0x40) = uVar1;
  }
  return;
}



/* Entry: 1053abe58; end: 1053abe93;  */

void FUN_1053abe58(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x40) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000100c1b5f8();
    *(ulong *)(param_1 + 0x40) = uVar1;
  }
  return;
}



/* Entry: 1053abe94; end: 1053abeb3;  */

void FUN_1053abe94(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  puVar3 = *(undefined8 **)(param_2 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(undefined8 **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  uVar4 = *(ulong *)(param_2 + 0x10);
  if ((uVar4 & 3) == 0) {
    uVar4 = puVar2[1];
    puVar1 = (undefined8 *)*puVar2;
    if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)puVar2 + 0x17);
      puVar1 = puVar2;
    }
    if (puVar3 == (undefined8 *)0x0) {
      func_0x0001001a5520(puVar1,uVar4);
    }
    else {
      func_0x000107c39890(puVar3,puVar1,uVar4);
      puVar1 = puVar3;
    }
    *(ulong *)(param_2 + 0x10) = (ulong)puVar1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (uVar4 & 0xfffffffffffffffc);
  return;
}



/* Entry: 1053abeb4; end: 1053abef3;  */

void FUN_1053abeb4(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  FUN_1053abe48();
  puVar3 = *(undefined8 **)(param_2 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(undefined8 **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  uVar4 = *(ulong *)(param_2 + 0x10);
  if ((uVar4 & 3) == 0) {
    uVar4 = puVar2[1];
    puVar1 = (undefined8 *)*puVar2;
    if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)puVar2 + 0x17);
      puVar1 = puVar2;
    }
    if (puVar3 == (undefined8 *)0x0) {
      func_0x0001001a5520(puVar1,uVar4);
    }
    else {
      func_0x000107c39890(puVar3,puVar1,uVar4);
      puVar1 = puVar3;
    }
    *(ulong *)(param_2 + 0x10) = (ulong)puVar1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (uVar4 & 0xfffffffffffffffc);
  return;
}



/* Entry: 1053abef4; end: 1053ac013;  */

void FUN_1053abef4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  char cVar2;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_38;
  
  *param_1 = &PTR_DAT_110d0a758;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = &DAT_11383d918;
  param_1[7] = &DAT_11383d918;
  param_1[8] = 0;
  func_0x00010b56da00(param_1,param_4);
  ppuVar1 = &PTR_PTR_11339af30;
  if ((undefined **)param_1[8] != (undefined **)0x0) {
    ppuVar1 = (undefined **)param_1[8];
  }
  cVar2 = *(char *)(((ulong)ppuVar1[2] & 0xfffffffffffffffc) + 0x17);
  if (cVar2 < '\0') {
    if (*(long *)(((ulong)ppuVar1[2] & 0xfffffffffffffffc) + 8) == 0) goto LAB_1053abfc4;
  }
  else if (cVar2 == '\0') {
LAB_1053abfc4:
    FUN_1053abd78(param_3,param_1);
    FUN_1053abeb4(param_2,param_1);
    return;
  }
  ppuStack_58 = &PTR_DAT_110d0a3e8;
  uStack_50 = 0;
  puStack_48 = &DAT_11383d918;
  uStack_38 = 0;
  FUN_1053abca4(param_3,&ppuStack_58);
  FUN_1053abe94(param_2,&ppuStack_58);
  FUN_1053ac13c(param_1 + 3);
  func_0x00010b56eedc();
  func_0x00010b56ebb8(&ppuStack_58);
  return;
}



/* Entry: 1053ac014; end: 1053ac13b;  */

void FUN_1053ac014(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_a8 [72];
  
  for (lVar7 = 0; lVar7 < *(int *)(param_1 + 0x18); lVar7 = lVar7 + 1) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    puVar2 = (ulong *)(param_1 + 0x10);
    if ((uVar3 & 1) != 0) {
      puVar2 = (ulong *)(uVar3 + lVar7 * 8 + 7);
    }
    uVar3 = *puVar2;
    ppuVar1 = &PTR_PTR_11339b140;
    if (*(undefined ***)(uVar3 + 0x30) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(uVar3 + 0x30);
    }
    if (*(int *)((long)ppuVar1 + 0x1c) == 1) {
      puVar5 = ppuVar1[2];
      FUN_1053ac1a0();
      FUN_1053ab990(param_3,puVar5,auStack_a8);
      func_0x0001053ac1b4();
    }
    if (*(int *)(uVar3 + 0x20) != 0) {
      FUN_1053ac1a0();
      lVar8 = 8;
      for (lVar6 = 0; lVar6 < *(int *)(uVar3 + 0x20); lVar6 = lVar6 + 1) {
        uVar4 = *(ulong *)(uVar3 + 0x18);
        puVar2 = (ulong *)(uVar3 + 0x18);
        if ((uVar4 & 1) != 0) {
          puVar2 = (ulong *)(uVar4 + lVar8 + -1);
        }
        FUN_1053ac014(*puVar2,auStack_a8,param_3);
        lVar8 = lVar8 + 8;
      }
      func_0x0001053ac1b4();
    }
  }
  return;
}



/* Entry: 1053ac13c; end: 1053ac147;  */

void FUN_1053ac13c(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,FUN_1053ac148);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,FUN_1053ac148);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 1053ac148; end: 1053ac19f;  */

void FUN_1053ac148(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_DAT_110d0a3e8;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 1053ac1a0; end: 1053ac1bb;  */

void FUN_1053ac1a0(void)

{
  undefined **ppuVar1;
  char cVar2;
  undefined **ppuStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined *puStack0000000000000038;
  undefined *puStack0000000000000040;
  undefined **ppuStack0000000000000048;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_38;
  
  ppuStack0000000000000008 = &PTR_DAT_110d0a758;
  uStack0000000000000010 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000028 = 0;
  puStack0000000000000038 = &DAT_11383d918;
  puStack0000000000000040 = &DAT_11383d918;
  ppuStack0000000000000048 = (undefined **)0x0;
  func_0x00010b56da00(&stack0x00000008);
  ppuVar1 = &PTR_PTR_11339af30;
  if (ppuStack0000000000000048 != (undefined **)0x0) {
    ppuVar1 = ppuStack0000000000000048;
  }
  cVar2 = *(char *)(((ulong)ppuVar1[2] & 0xfffffffffffffffc) + 0x17);
  if (cVar2 < '\0') {
    if (*(long *)(((ulong)ppuVar1[2] & 0xfffffffffffffffc) + 8) == 0) goto LAB_1053abfc4;
  }
  else if (cVar2 == '\0') {
LAB_1053abfc4:
    FUN_1053abd78();
    FUN_1053abeb4();
    return;
  }
  ppuStack_58 = &PTR_DAT_110d0a3e8;
  uStack_50 = 0;
  puStack_48 = &DAT_11383d918;
  uStack_38 = 0;
  FUN_1053abca4();
  FUN_1053abe94();
  FUN_1053ac13c(&stack0x00000020);
  func_0x00010b56eedc();
  func_0x00010b56ebb8(&ppuStack_58);
  return;
}



/* Entry: 1053ac1bc; end: 1053ac2df;  */

void FUN_1053ac1bc(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  undefined1 auStack_58 [24];
  
  func_0x000100c1bfec();
  func_0x000100c1c128();
  if ((int)param_1 == 0) {
    func_0x0001053ada00();
    func_0x0001053ad9ac();
    func_0x0001053ada24();
    func_0x0001053ad9d8();
    func_0x0001053adbd8();
    func_0x0001053ad998();
    func_0x0001053ada50();
    func_0x000100c218b8();
    func_0x0001053ada58();
  }
  else {
    func_0x000100c1fb54();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000100c1fb64();
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = &PTR_DAT_110881608;
    if (lVar1 != 0) {
      do {
        func_0x000100c1fb6c();
      } while (extraout_w10 != 0);
      do {
        func_0x000100c1fb6c();
      } while (extraout_w10_00 != 0);
    }
    func_0x000100c1fb7c();
    func_0x000100c1fb88(&PTR_DAT_110881658);
    func_0x000100c1fba0();
    func_0x000100601d8c();
    func_0x000100c22014();
    func_0x0001053adc04();
    FUN_1053ad834(auStack_58);
    func_0x000100c22040();
  }
  func_0x000100c22048();
  return;
}


