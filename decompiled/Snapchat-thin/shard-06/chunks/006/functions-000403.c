/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104ad65c4; end: 104ad660b;  */

long * FUN_104ad65c4(long *param_1)

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



/* Entry: 104ad660c; end: 104ad667f;  */

void FUN_104ad660c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -8;
        FUN_104ad6680(lVar2,0);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 104ad6680; end: 104ad66bf;  */

void FUN_104ad6680(long *param_1,long param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    lStack_28 = lVar1;
    func_0x000100484f44(&lStack_28);
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 104ad66c0; end: 104ad66d3;  */

undefined1  [16] FUN_104ad66c0(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_104a6fa70();
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -8;
    param_2 = 0;
    FUN_104ad6680(lVar3 + -8,0);
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 104ad66d4; end: 104ad6757;  */

undefined1  [16] FUN_104ad66d4(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  FUN_104a7757c();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -8;
    param_2 = 0;
    FUN_104ad6680(lVar2 + -8,0);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 104ad6758; end: 104ad6a17;  */

long * FUN_104ad6758(long *param_1,undefined1 **param_2,undefined8 param_3,long *param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined1 **ppuVar12;
  long *extraout_x8;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined1 **ppuVar17;
  undefined1 **ppuVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 **ppuVar21;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined2 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lStack_1a8;
  undefined1 **ppuStack_1a0;
  undefined1 **ppuStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined1 ***pppuStack_180;
  code *pcStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined1 **ppuStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined1 *)((long)param_2 + 9);
  if (*param_2 != (undefined1 *)0x0) {
    puVar4 = param_2[2];
  }
  puVar1 = (undefined1 *)((ulong)param_2[1] & 0xff);
  if (*param_2 != (undefined1 *)0x0) {
    puVar1 = param_2[1];
  }
  plVar8 = param_4;
  FUN_104a6ec8c(puVar4,puVar1,uRam0000000113815c60);
  uVar20 = (ulong)puVar4 & 0xffffffff;
  uVar19 = param_1[1];
  if (uVar19 != 0) {
    uVar23 = CONCAT17(POPCOUNT((char)(uVar19 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar19 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar19 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar19 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar19 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar19 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar19 
                                                  >> 8)),POPCOUNT((char)uVar19))))))));
    uVar22 = NEON_uaddlv(uVar23,1);
    unaff_x26 = CONCAT62((int6)((ulong)uVar23 >> 0x10),uVar22) & 0xffffffff;
    if (unaff_x26 < 2) {
      unaff_x25 = (int)uVar19 - 1 & uVar20;
    }
    else {
      unaff_x25 = uVar20;
      if (uVar19 <= uVar20) {
        uVar11 = 0;
        if (uVar19 != 0) {
          uVar11 = uVar20 / uVar19;
        }
        unaff_x25 = uVar20 - uVar11 * uVar19;
      }
    }
    puVar10 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if ((puVar10 != (undefined8 *)0x0) && (plVar15 = (long *)*puVar10, plVar15 != (long *)0x0)) {
      do {
        uVar11 = plVar15[1];
        if (uVar11 == uVar20) {
          lStack_88 = plVar15[3];
          lStack_90 = plVar15[2];
          lStack_78 = plVar15[5];
          lStack_80 = plVar15[4];
          puStack_a8 = param_2[1];
          puStack_b0 = *param_2;
          puStack_98 = param_2[3];
          puStack_a0 = param_2[2];
          plVar6 = &lStack_90;
          func_0x0001008e12a4(plVar6,&puStack_b0);
          if ((int)plVar6 != 0) {
            plVar9 = (long *)0x0;
            goto LAB_104ad69b4;
          }
        }
        else {
          if (unaff_x26 < 2) {
            uVar11 = uVar11 & uVar19 - 1;
          }
          else if (uVar19 <= uVar11) {
            uVar2 = 0;
            if (uVar19 != 0) {
              uVar2 = uVar11 / uVar19;
            }
            uVar11 = uVar11 - uVar2 * uVar19;
          }
          if (uVar11 != unaff_x25) break;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
  param_2 = (undefined1 **)(ulong)(uVar19 == 0);
  plVar15 = (long *)0x38;
  __Znwm();
  *plVar15 = 0;
  plVar15[1] = uVar20;
  plVar6 = (long *)*param_4;
  lVar24 = *plVar6;
  lVar16 = plVar6[3];
  lVar7 = plVar6[2];
  plVar15[3] = plVar6[1];
  plVar15[2] = lVar24;
  plVar15[5] = lVar16;
  plVar15[4] = lVar7;
  lVar7 = param_1[3];
  plVar15[6] = 0;
  plVar6 = plVar15;
  if (*(float *)(param_1 + 4) * (float)uVar19 < (float)(lVar7 + 1) || uVar19 == 0) {
    uVar11 = 1;
    if (2 < uVar19) {
      uVar11 = (ulong)((uVar19 & uVar19 - 1) != 0);
    }
    uVar11 = uVar11 | uVar19 << 1;
    uVar19 = (ulong)((float)(lVar7 + 1) / *(float *)(param_1 + 4));
    if (uVar11 <= uVar19) {
      uVar11 = uVar19;
    }
    plVar6 = param_1;
    FUN_104ad6a18(param_1,uVar11);
    uVar19 = param_1[1];
    if ((uVar19 & uVar19 - 1) == 0) {
      unaff_x25 = (int)uVar19 - 1 & uVar20;
    }
    else {
      unaff_x25 = uVar20;
      if (uVar19 <= uVar20) {
        uVar11 = 0;
        if (uVar19 != 0) {
          uVar11 = uVar20 / uVar19;
        }
        unaff_x25 = uVar20 - uVar11 * uVar19;
      }
    }
  }
  lVar7 = *param_1;
  plVar9 = *(long **)(lVar7 + unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar15 = *plVar9;
    *plVar9 = (long)plVar15;
    *(long **)(lVar7 + unaff_x25 * 8) = plVar9;
    if (*plVar15 != 0) {
      uVar11 = *(ulong *)(*plVar15 + 8);
      if ((uVar19 & uVar19 - 1) == 0) {
        uVar11 = uVar11 & uVar19 - 1;
      }
      else if (uVar19 <= uVar11) {
        uVar2 = 0;
        if (uVar19 != 0) {
          uVar2 = uVar11 / uVar19;
        }
        uVar11 = uVar11 - uVar2 * uVar19;
      }
      plVar9 = (long *)(*param_1 + uVar11 * 8);
      goto LAB_104ad69a0;
    }
  }
  else {
    *plVar15 = *plVar9;
LAB_104ad69a0:
    *plVar9 = (long)plVar15;
  }
  param_1[3] = param_1[3] + 1;
  plVar9 = (long *)0x1;
LAB_104ad69b4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar15;
  }
  ___stack_chk_fail();
  __ZdlPv(plVar15);
  plVar5 = plVar6;
  __Unwind_Resume();
  pcStack_b8 = FUN_104ad6a18;
  plVar13 = plVar5;
  ppuStack_e0 = param_2;
  pcStack_d8 = (code *)param_4;
  plStack_d0 = plVar15;
  plStack_c8 = plVar6;
  puStack_c0 = &stack0xfffffffffffffff0;
  if ((long)plVar9 - 1U == 0) {
    plVar9 = (long *)0x2;
  }
  else if (((ulong)plVar9 & (long)plVar9 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar13 = plVar9;
  }
  plVar15 = (long *)plVar5[1];
  if (plVar9 <= plVar15) {
    if (plVar15 <= plVar9) {
      return plVar13;
    }
    plVar6 = (long *)(long)((float)(ulong)plVar5[3] / *(float *)(plVar5 + 4));
    if ((plVar15 < (long *)0x3) ||
       (uVar23 = CONCAT17(POPCOUNT((char)((ulong)plVar15 >> 0x38)),
                          CONCAT16(POPCOUNT((char)((ulong)plVar15 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)((ulong)plVar15 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)((ulong)plVar15 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)((ulong)plVar15 >> 0x18
                                                                             )),
                                                              CONCAT12(POPCOUNT((char)((ulong)
                                                  plVar15 >> 0x10)),
                                                  CONCAT11(POPCOUNT((char)((ulong)plVar15 >> 8)),
                                                           POPCOUNT((char)plVar15)))))))),
       uVar22 = NEON_uaddlv(uVar23,1),
       1 < (CONCAT62((int6)((ulong)uVar23 >> 0x10),uVar22) & 0xffffffff))) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar6) {
      plVar6 = (long *)(1L << (-LZCOUNT((long)plVar6 + -1) & 0x3fU));
    }
    if (plVar9 <= plVar6) {
      plVar9 = plVar6;
    }
    if (plVar15 <= plVar9) {
      return plVar6;
    }
  }
  pcVar3 = pcStack_d8;
  ppuVar18 = ppuStack_e0;
  if (plVar9 == (long *)0x0) {
    plVar8 = (long *)*plVar5;
    *plVar5 = 0;
    if (plVar8 != (long *)0x0) {
      __ZdlPv();
    }
    plVar5[1] = 0;
    return plVar8;
  }
  if ((ulong)plVar9 >> 0x3d == 0) {
    lVar7 = (long)plVar9 << 3;
    __Znwm();
    plVar8 = (long *)*plVar5;
    *plVar5 = lVar7;
    if (plVar8 != (long *)0x0) {
      __ZdlPv();
    }
    plVar15 = (long *)0x0;
    plVar5[1] = (long)plVar9;
    do {
      *(undefined8 *)(*plVar5 + (long)plVar15 * 8) = 0;
      plVar15 = (long *)((long)plVar15 + 1);
    } while (plVar9 != plVar15);
    plVar15 = (long *)plVar5[2];
    if (plVar15 == (long *)0x0) {
      return plVar8;
    }
    plVar6 = (long *)plVar15[1];
    uVar23 = CONCAT17(POPCOUNT((char)((ulong)plVar9 >> 0x38)),
                      CONCAT16(POPCOUNT((char)((ulong)plVar9 >> 0x30)),
                               CONCAT15(POPCOUNT((char)((ulong)plVar9 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)((ulong)plVar9 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)((ulong)plVar9 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)((ulong)plVar9 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)((ulong)
                                                  plVar9 >> 8)),POPCOUNT((char)plVar9))))))));
    uVar22 = NEON_uaddlv(uVar23,1);
    uVar19 = CONCAT62((int6)((ulong)uVar23 >> 0x10),uVar22) & 0xffffffff;
    if (uVar19 < 2) {
      plVar6 = (long *)((ulong)plVar6 & (long)plVar9 - 1U);
    }
    else if (plVar9 <= plVar6) {
      uVar20 = 0;
      if (plVar9 != (long *)0x0) {
        uVar20 = (ulong)plVar6 / (ulong)plVar9;
      }
      plVar6 = (long *)((long)plVar6 - uVar20 * (long)plVar9);
    }
    *(long **)(*plVar5 + (long)plVar6 * 8) = plVar5 + 2;
    plVar13 = (long *)*plVar15;
    if (plVar13 == (long *)0x0) {
      return plVar8;
    }
    do {
      plVar14 = (long *)plVar13[1];
      if (uVar19 < 2) {
        plVar14 = (long *)((ulong)plVar14 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar14) {
        uVar20 = 0;
        if (plVar9 != (long *)0x0) {
          uVar20 = (ulong)plVar14 / (ulong)plVar9;
        }
        plVar14 = (long *)((long)plVar14 - uVar20 * (long)plVar9);
      }
      if (plVar14 != plVar6) {
        if (*(long *)(*plVar5 + (long)plVar14 * 8) == 0) {
          *(long **)(*plVar5 + (long)plVar14 * 8) = plVar15;
          plVar6 = plVar14;
        }
        else {
          *plVar15 = *plVar13;
          *plVar13 = **(long **)(*plVar5 + (long)plVar14 * 8);
          **(undefined8 **)(*plVar5 + (long)plVar14 * 8) = plVar13;
          plVar13 = plVar15;
        }
      }
      plVar15 = plVar13;
      plVar13 = (long *)*plVar15;
    } while (plVar13 != (long *)0x0);
    return plVar8;
  }
  plVar6 = plVar5;
  plVar13 = plVar9;
  FUN_104a7757c();
  ppuStack_100 = ppuVar18;
  plStack_f8 = (long *)pcVar3;
  pcStack_d8 = FUN_104ad6c4c;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = (long *)((long)plVar13 + 9);
  if (*plVar13 != 0) {
    plVar15 = (long *)plVar13[2];
  }
  uVar11 = plVar13[1] & 0xff;
  if (*plVar13 != 0) {
    uVar11 = plVar13[1];
  }
  uStack_120 = unaff_x26;
  uStack_118 = unaff_x25;
  uStack_110 = uVar20;
  uStack_108 = uVar19;
  plStack_f0 = plVar9;
  plStack_e8 = plVar5;
  ppuStack_e0 = &puStack_c0;
  FUN_104a6ec8c(plVar15,uVar11,uRam0000000113815c60);
  ppuVar17 = (undefined1 **)plVar6[1];
  if (ppuVar17 != (undefined1 **)0x0) {
    ppuVar18 = (undefined1 **)((ulong)plVar15 & 0xffffffff);
    uVar23 = CONCAT17(POPCOUNT((char)((ulong)ppuVar17 >> 0x38)),
                      CONCAT16(POPCOUNT((char)((ulong)ppuVar17 >> 0x30)),
                               CONCAT15(POPCOUNT((char)((ulong)ppuVar17 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)((ulong)ppuVar17 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)((ulong)ppuVar17 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)((ulong)ppuVar17
                                                                                  >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)((ulong)
                                                  ppuVar17 >> 8)),POPCOUNT((char)ppuVar17))))))));
    uVar22 = NEON_uaddlv(uVar23,1);
    uVar19 = CONCAT62((int6)((ulong)uVar23 >> 0x10),uVar22) & 0xffffffff;
    if (uVar19 < 2) {
      ppuVar21 = (undefined1 **)((ulong)((int)ppuVar17 - 1) & (ulong)ppuVar18);
    }
    else {
      ppuVar21 = ppuVar18;
      if (ppuVar17 <= ppuVar18) {
        uVar20 = 0;
        if (ppuVar17 != (undefined1 **)0x0) {
          uVar20 = (ulong)ppuVar18 / (ulong)ppuVar17;
        }
        ppuVar21 = (undefined1 **)((long)ppuVar18 - uVar20 * (long)ppuVar17);
      }
    }
    plVar6 = *(long **)(*plVar6 + (long)ppuVar21 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) {
        do {
          ppuVar12 = (undefined1 **)plVar6[1];
          if (ppuVar12 == ppuVar18) {
            lStack_148 = plVar6[3];
            lStack_150 = plVar6[2];
            lStack_138 = plVar6[5];
            lStack_140 = plVar6[4];
            lStack_168 = plVar13[1];
            lStack_170 = *plVar13;
            lStack_158 = plVar13[3];
            lStack_160 = plVar13[2];
            plVar15 = &lStack_150;
            func_0x0001008e12a4(plVar15,&lStack_170);
            if ((int)plVar15 != 0) break;
          }
          else {
            if (uVar19 < 2) {
              ppuVar12 = (undefined1 **)((ulong)ppuVar12 & (long)ppuVar17 - 1U);
            }
            else if (ppuVar17 <= ppuVar12) {
              uVar20 = 0;
              if (ppuVar17 != (undefined1 **)0x0) {
                uVar20 = (ulong)ppuVar12 / (ulong)ppuVar17;
              }
              ppuVar12 = (undefined1 **)((long)ppuVar12 - uVar20 * (long)ppuVar17);
            }
            if (ppuVar12 != ppuVar21) goto LAB_104ad6d6c;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      goto LAB_104ad6d70;
    }
  }
LAB_104ad6d6c:
  plVar6 = (long *)0x0;
LAB_104ad6d70:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
    ___stack_chk_fail();
    pcStack_178 = FUN_104ad6dac;
    *extraout_x8 = 0;
    if (plVar8[1] != *plVar8) {
      plVar15 = (long *)0x2;
      ppuStack_1a0 = ppuVar18;
      ppuStack_198 = ppuVar17;
      plStack_190 = plVar6;
      plStack_188 = plVar13;
      pppuStack_180 = &ppuStack_e0;
      FUN_104aba878(&lStack_1a8,2);
      if (lStack_1a8 != 0) {
        *extraout_x8 = lStack_1a8;
      }
      lVar7 = *plVar8;
      lVar16 = plVar8[1];
      if (lVar16 != lVar7) {
        do {
          lVar16 = lVar16 + -8;
          plVar15 = plVar8 + 2;
          FUN_104a713e4(plVar8 + 2,lVar16);
        } while (lVar16 != lVar7);
      }
      plVar8[1] = lVar7;
    }
    return plVar15;
  }
  return plVar6;
}



/* Entry: 104ad6a18; end: 104ad6af3;  */

long * FUN_104ad6a18(long *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *extraout_x8;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x22;
  ulong uVar11;
  ulong uVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  long lStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  
  plVar2 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar2 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (param_2 <= plVar9) {
    if (plVar9 <= param_2) {
      return plVar2;
    }
    plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) ||
       (uVar14 = CONCAT17(POPCOUNT((char)((ulong)plVar9 >> 0x38)),
                          CONCAT16(POPCOUNT((char)((ulong)plVar9 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)((ulong)plVar9 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)((ulong)plVar9 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)((ulong)plVar9 >> 0x18)
                                                                      ),
                                                              CONCAT12(POPCOUNT((char)((ulong)plVar9
                                                                                      >> 0x10)),
                                                                       CONCAT11(POPCOUNT((char)((
                                                  ulong)plVar9 >> 8)),POPCOUNT((char)plVar9)))))))),
       uVar13 = NEON_uaddlv(uVar14,1),
       1 < (CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff))) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar2) {
      plVar2 = (long *)(1L << (-LZCOUNT((long)plVar2 + -1) & 0x3fU));
    }
    if (param_2 <= plVar2) {
      param_2 = plVar2;
    }
    if (plVar9 <= param_2) {
      return plVar2;
    }
  }
  if (param_2 == (long *)0x0) {
    plVar2 = (long *)*param_1;
    *param_1 = 0;
    if (plVar2 != (long *)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
    return plVar2;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm();
    plVar2 = (long *)*param_1;
    *param_1 = lVar3;
    if (plVar2 != (long *)0x0) {
      __ZdlPv();
    }
    plVar9 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar9 * 8) = 0;
      plVar9 = (long *)((long)plVar9 + 1);
    } while (param_2 != plVar9);
    plVar9 = (long *)param_1[2];
    if (plVar9 == (long *)0x0) {
      return plVar2;
    }
    plVar5 = (long *)plVar9[1];
    uVar14 = CONCAT17(POPCOUNT((char)((ulong)param_2 >> 0x38)),
                      CONCAT16(POPCOUNT((char)((ulong)param_2 >> 0x30)),
                               CONCAT15(POPCOUNT((char)((ulong)param_2 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)((ulong)param_2 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)((ulong)param_2 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)((ulong)param_2 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)((ulong)
                                                  param_2 >> 8)),POPCOUNT((char)param_2))))))));
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar10 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar10 < 2) {
      plVar5 = (long *)((ulong)plVar5 & (long)param_2 - 1U);
    }
    else if (param_2 <= plVar5) {
      uVar11 = 0;
      if (param_2 != (long *)0x0) {
        uVar11 = (ulong)plVar5 / (ulong)param_2;
      }
      plVar5 = (long *)((long)plVar5 - uVar11 * (long)param_2);
    }
    *(long **)(*param_1 + (long)plVar5 * 8) = param_1 + 2;
    plVar6 = (long *)*plVar9;
    if (plVar6 == (long *)0x0) {
      return plVar2;
    }
    do {
      plVar7 = (long *)plVar6[1];
      if (uVar10 < 2) {
        plVar7 = (long *)((ulong)plVar7 & (long)param_2 - 1U);
      }
      else if (param_2 <= plVar7) {
        uVar11 = 0;
        if (param_2 != (long *)0x0) {
          uVar11 = (ulong)plVar7 / (ulong)param_2;
        }
        plVar7 = (long *)((long)plVar7 - uVar11 * (long)param_2);
      }
      if (plVar7 != plVar5) {
        if (*(long *)(*param_1 + (long)plVar7 * 8) == 0) {
          *(long **)(*param_1 + (long)plVar7 * 8) = plVar9;
          plVar5 = plVar7;
        }
        else {
          *plVar9 = *plVar6;
          *plVar6 = **(long **)(*param_1 + (long)plVar7 * 8);
          **(undefined8 **)(*param_1 + (long)plVar7 * 8) = plVar6;
          plVar6 = plVar9;
        }
      }
      plVar9 = plVar6;
      plVar6 = (long *)*plVar9;
    } while (plVar6 != (long *)0x0);
    return plVar2;
  }
  FUN_104a7757c();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = (long *)((long)param_2 + 9);
  if (*param_2 != 0) {
    plVar2 = (long *)param_2[2];
  }
  uVar10 = param_2[1] & 0xff;
  if (*param_2 != 0) {
    uVar10 = param_2[1];
  }
  FUN_104a6ec8c(plVar2,uVar10,uRam0000000113815c60);
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    unaff_x22 = (ulong)plVar2 & 0xffffffff;
    uVar14 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar10 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar10 
                                                  >> 8)),POPCOUNT((char)uVar10))))))));
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar11 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar11 < 2) {
      uVar12 = (int)uVar10 - 1 & unaff_x22;
    }
    else {
      uVar12 = unaff_x22;
      if (uVar10 <= unaff_x22) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = unaff_x22 / uVar10;
        }
        uVar12 = unaff_x22 - uVar12 * uVar10;
      }
    }
    plVar9 = *(long **)(*param_1 + uVar12 * 8);
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)*plVar9;
      if (plVar9 != (long *)0x0) {
        do {
          uVar4 = plVar9[1];
          if (uVar4 == unaff_x22) {
            lStack_98 = plVar9[3];
            lStack_a0 = plVar9[2];
            lStack_88 = plVar9[5];
            lStack_90 = plVar9[4];
            lStack_b8 = param_2[1];
            lStack_c0 = *param_2;
            lStack_a8 = param_2[3];
            lStack_b0 = param_2[2];
            plVar2 = &lStack_a0;
            func_0x0001008e12a4(plVar2,&lStack_c0);
            if ((int)plVar2 != 0) break;
          }
          else {
            if (uVar11 < 2) {
              uVar4 = uVar4 & uVar10 - 1;
            }
            else if (uVar10 <= uVar4) {
              uVar1 = 0;
              if (uVar10 != 0) {
                uVar1 = uVar4 / uVar10;
              }
              uVar4 = uVar4 - uVar1 * uVar10;
            }
            if (uVar4 != uVar12) goto LAB_104ad6d6c;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      goto LAB_104ad6d70;
    }
  }
LAB_104ad6d6c:
  plVar9 = (long *)0x0;
LAB_104ad6d70:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return plVar9;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_104ad6dac;
  *extraout_x8 = 0;
  if (param_4[1] != *param_4) {
    plVar2 = (long *)0x2;
    uStack_f0 = unaff_x22;
    uStack_e8 = uVar10;
    plStack_e0 = plVar9;
    plStack_d8 = param_2;
    puStack_d0 = &stack0xffffffffffffffd0;
    FUN_104aba878(&lStack_f8,2);
    if (lStack_f8 != 0) {
      *extraout_x8 = lStack_f8;
    }
    lVar3 = *param_4;
    lVar8 = param_4[1];
    if (lVar8 != lVar3) {
      do {
        lVar8 = lVar8 + -8;
        plVar2 = param_4 + 2;
        FUN_104a713e4(param_4 + 2,lVar8);
      } while (lVar8 != lVar3);
    }
    param_4[1] = lVar3;
  }
  return plVar2;
}



/* Entry: 104ad6af4; end: 104ad6c4b;  */

long * FUN_104ad6af4(long *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *extraout_x8;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong unaff_x22;
  ulong uVar11;
  ulong uVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  long lStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (param_2 == (long *)0x0) {
    plVar3 = (long *)*param_1;
    *param_1 = 0;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
    return plVar3;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    plVar3 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 == (long *)0x0) {
      return plVar3;
    }
    plVar6 = (long *)plVar4[1];
    uVar14 = CONCAT17(POPCOUNT((char)((ulong)param_2 >> 0x38)),
                      CONCAT16(POPCOUNT((char)((ulong)param_2 >> 0x30)),
                               CONCAT15(POPCOUNT((char)((ulong)param_2 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)((ulong)param_2 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)((ulong)param_2 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)((ulong)param_2 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)((ulong)
                                                  param_2 >> 8)),POPCOUNT((char)param_2))))))));
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar10 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar10 < 2) {
      plVar6 = (long *)((ulong)plVar6 & (long)param_2 - 1U);
    }
    else if (param_2 <= plVar6) {
      uVar11 = 0;
      if (param_2 != (long *)0x0) {
        uVar11 = (ulong)plVar6 / (ulong)param_2;
      }
      plVar6 = (long *)((long)plVar6 - uVar11 * (long)param_2);
    }
    *(long **)(*param_1 + (long)plVar6 * 8) = param_1 + 2;
    plVar7 = (long *)*plVar4;
    if (plVar7 == (long *)0x0) {
      return plVar3;
    }
    do {
      plVar8 = (long *)plVar7[1];
      if (uVar10 < 2) {
        plVar8 = (long *)((ulong)plVar8 & (long)param_2 - 1U);
      }
      else if (param_2 <= plVar8) {
        uVar11 = 0;
        if (param_2 != (long *)0x0) {
          uVar11 = (ulong)plVar8 / (ulong)param_2;
        }
        plVar8 = (long *)((long)plVar8 - uVar11 * (long)param_2);
      }
      if (plVar8 != plVar6) {
        if (*(long *)(*param_1 + (long)plVar8 * 8) == 0) {
          *(long **)(*param_1 + (long)plVar8 * 8) = plVar4;
          plVar6 = plVar8;
        }
        else {
          *plVar4 = *plVar7;
          *plVar7 = **(long **)(*param_1 + (long)plVar8 * 8);
          **(undefined8 **)(*param_1 + (long)plVar8 * 8) = plVar7;
          plVar7 = plVar4;
        }
      }
      plVar4 = plVar7;
      plVar7 = (long *)*plVar4;
    } while (plVar7 != (long *)0x0);
    return plVar3;
  }
  FUN_104a7757c();
  pcStack_28 = FUN_104ad6c4c;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)((long)param_2 + 9);
  if (*param_2 != 0) {
    plVar3 = (long *)param_2[2];
  }
  uVar10 = param_2[1] & 0xff;
  if (*param_2 != 0) {
    uVar10 = param_2[1];
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_104a6ec8c(plVar3,uVar10,uRam0000000113815c60);
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    unaff_x22 = (ulong)plVar3 & 0xffffffff;
    uVar14 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar10 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar10 
                                                  >> 8)),POPCOUNT((char)uVar10))))))));
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar11 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar11 < 2) {
      uVar12 = (int)uVar10 - 1 & unaff_x22;
    }
    else {
      uVar12 = unaff_x22;
      if (uVar10 <= unaff_x22) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = unaff_x22 / uVar10;
        }
        uVar12 = unaff_x22 - uVar12 * uVar10;
      }
    }
    plVar4 = *(long **)(*param_1 + uVar12 * 8);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
      if (plVar4 != (long *)0x0) {
        do {
          uVar5 = plVar4[1];
          if (uVar5 == unaff_x22) {
            lStack_98 = plVar4[3];
            lStack_a0 = plVar4[2];
            lStack_88 = plVar4[5];
            lStack_90 = plVar4[4];
            lStack_b8 = param_2[1];
            lStack_c0 = *param_2;
            lStack_a8 = param_2[3];
            lStack_b0 = param_2[2];
            plVar3 = &lStack_a0;
            func_0x0001008e12a4(plVar3,&lStack_c0);
            if ((int)plVar3 != 0) break;
          }
          else {
            if (uVar11 < 2) {
              uVar5 = uVar5 & uVar10 - 1;
            }
            else if (uVar10 <= uVar5) {
              uVar1 = 0;
              if (uVar10 != 0) {
                uVar1 = uVar5 / uVar10;
              }
              uVar5 = uVar5 - uVar1 * uVar10;
            }
            if (uVar5 != uVar12) goto LAB_104ad6d6c;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      goto LAB_104ad6d70;
    }
  }
LAB_104ad6d6c:
  plVar4 = (long *)0x0;
LAB_104ad6d70:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return plVar4;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_104ad6dac;
  *extraout_x8 = 0;
  if (param_4[1] != *param_4) {
    plVar3 = (long *)0x2;
    uStack_f0 = unaff_x22;
    uStack_e8 = uVar10;
    plStack_e0 = plVar4;
    plStack_d8 = param_2;
    ppuStack_d0 = &puStack_30;
    FUN_104aba878(&lStack_f8,2);
    if (lStack_f8 != 0) {
      *extraout_x8 = lStack_f8;
    }
    lVar2 = *param_4;
    lVar9 = param_4[1];
    if (lVar9 != lVar2) {
      do {
        lVar9 = lVar9 + -8;
        plVar3 = param_4 + 2;
        FUN_104a713e4(param_4 + 2,lVar9);
      } while (lVar9 != lVar2);
    }
    param_4[1] = lVar2;
  }
  return plVar3;
}



/* Entry: 104ad6c4c; end: 104ad6dab;  */

long * FUN_104ad6c4c(long *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *extraout_x8;
  long lVar6;
  ulong uVar7;
  ulong unaff_x22;
  ulong uVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  long lStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)((long)param_2 + 9);
  if (*param_2 != 0) {
    plVar3 = (long *)param_2[2];
  }
  uVar7 = param_2[1] & 0xff;
  if (*param_2 != 0) {
    uVar7 = param_2[1];
  }
  FUN_104a6ec8c(plVar3,uVar7,uRam0000000113815c60);
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    unaff_x22 = (ulong)plVar3 & 0xffffffff;
    uVar11 = CONCAT17(POPCOUNT((char)(uVar7 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar7 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar7 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar7 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar7 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar7 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar7 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar7))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar8 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar8 < 2) {
      uVar9 = (int)uVar7 - 1 & unaff_x22;
    }
    else {
      uVar9 = unaff_x22;
      if (uVar7 <= unaff_x22) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = unaff_x22 / uVar7;
        }
        uVar9 = unaff_x22 - uVar9 * uVar7;
      }
    }
    plVar4 = *(long **)(*param_1 + uVar9 * 8);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
      if (plVar4 != (long *)0x0) {
        do {
          uVar5 = plVar4[1];
          if (uVar5 == unaff_x22) {
            lStack_78 = plVar4[3];
            lStack_80 = plVar4[2];
            lStack_68 = plVar4[5];
            lStack_70 = plVar4[4];
            lStack_98 = param_2[1];
            lStack_a0 = *param_2;
            lStack_88 = param_2[3];
            lStack_90 = param_2[2];
            plVar3 = &lStack_80;
            func_0x0001008e12a4(plVar3,&lStack_a0);
            if ((int)plVar3 != 0) break;
          }
          else {
            if (uVar8 < 2) {
              uVar5 = uVar5 & uVar7 - 1;
            }
            else if (uVar7 <= uVar5) {
              uVar2 = 0;
              if (uVar7 != 0) {
                uVar2 = uVar5 / uVar7;
              }
              uVar5 = uVar5 - uVar2 * uVar7;
            }
            if (uVar5 != uVar9) goto LAB_104ad6d6c;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      goto LAB_104ad6d70;
    }
  }
LAB_104ad6d6c:
  plVar4 = (long *)0x0;
LAB_104ad6d70:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_a8 = FUN_104ad6dac;
    *extraout_x8 = 0;
    if (param_4[1] != *param_4) {
      plVar3 = (long *)0x2;
      uStack_d0 = unaff_x22;
      uStack_c8 = uVar7;
      plStack_c0 = plVar4;
      plStack_b8 = param_2;
      puStack_b0 = &stack0xfffffffffffffff0;
      FUN_104aba878(&lStack_d8,2);
      if (lStack_d8 != 0) {
        *extraout_x8 = lStack_d8;
      }
      lVar1 = *param_4;
      lVar6 = param_4[1];
      if (lVar6 != lVar1) {
        do {
          lVar6 = lVar6 + -8;
          plVar3 = param_4 + 2;
          FUN_104a713e4(param_4 + 2,lVar6);
        } while (lVar6 != lVar1);
      }
      param_4[1] = lVar1;
    }
    return plVar3;
  }
  return plVar4;
}



/* Entry: 104ad6dac; end: 104ad6e4b;  */

void FUN_104ad6dac(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  *param_1 = 0;
  if (param_5[1] - *param_5 != 0) {
    FUN_104aba878(&lStack_38,2,param_3,param_4,param_2,param_5[1] - *param_5 >> 3);
    if (lStack_38 != 0) {
      *param_1 = lStack_38;
    }
    lVar1 = *param_5;
    lVar2 = param_5[1];
    if (lVar2 != lVar1) {
      do {
        lVar2 = lVar2 + -8;
        FUN_104a713e4(param_5 + 2,lVar2);
      } while (lVar2 != lVar1);
    }
    param_5[1] = lVar1;
  }
  return;
}



/* Entry: 104ad6e4c; end: 104ad70f7;  */

void FUN_104ad6e4c(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  ulong uStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lStack_a8 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  lVar10 = *param_2;
  if (param_2[1] != lVar10) {
    uVar9 = 0;
    plVar5 = param_1 + 2;
    do {
      uStack_68 = 0;
      plVar4 = *(long **)(lVar10 + uVar9 * 8);
      (**(code **)(*plVar4 + 0x20))(&plStack_b0,plVar4,param_3,param_4,&uStack_68);
      if (uStack_68 != 0) {
        FUN_104a83d48(&lStack_a8,&uStack_68);
      }
      plVar7 = plStack_b0;
      plVar4 = (long *)param_1[1];
      if (plVar4 < (long *)param_1[2]) {
        plStack_b0 = (long *)0x0;
        plVar11 = plVar4 + 1;
        *plVar4 = (long)plVar7;
      }
      else {
        lVar10 = (long)plVar4 - *param_1 >> 3;
        uVar1 = lVar10 + 1;
        if (uVar1 >> 0x3d != 0) {
          func_0x000104ad710c(param_1);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104ad7088);
          (*pcVar3)();
        }
        uVar6 = param_1[2] - *param_1;
        uVar8 = (long)uVar6 >> 2;
        if (uVar8 <= uVar1) {
          uVar8 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar6) {
          uVar8 = 0x1fffffffffffffff;
        }
        plStack_70 = plVar5;
        if (uVar8 == 0) {
          plVar4 = (long *)0x0;
        }
        else {
          plVar4 = plVar5;
          func_0x000100484170();
        }
        plVar2 = plStack_b0;
        plVar7 = plVar4 + lVar10;
        plStack_b0 = (long *)0x0;
        plVar11 = plVar7 + 1;
        *plVar7 = (long)plVar2;
        plVar2 = (long *)*param_1;
        plStack_90 = (long *)param_1[1];
        plStack_80 = plStack_90;
        if (plStack_90 != plVar2) {
          do {
            plStack_90 = plStack_90 + -1;
            lVar10 = *plStack_90;
            *plStack_90 = 0;
            plVar7 = plVar7 + -1;
            *plVar7 = lVar10;
          } while (plStack_90 != plVar2);
          plStack_90 = (long *)*param_1;
          plStack_80 = (long *)param_1[1];
        }
        *param_1 = (long)plVar7;
        param_1[1] = (long)plVar11;
        lStack_78 = param_1[2];
        param_1[2] = (long)(plVar4 + uVar8);
        plStack_88 = plStack_90;
        func_0x0001004841a4(&plStack_90);
      }
      plVar4 = plStack_b0;
      param_1[1] = (long)plVar11;
      plStack_b0 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if ((uStack_68 & 1) != 0) {
        func_0x00010084dad0();
      }
      uVar9 = uVar9 + 1;
      lVar10 = *param_2;
    } while (uVar9 < (ulong)(param_2[1] - lVar10 >> 3));
    if (lStack_a8 != lStack_a0) {
      FUN_104ad6dac(&plStack_90,&uStack_68,"methodConfig",0xc,&lStack_a8);
      plVar5 = (long *)*param_5;
      if (plStack_90 != plVar5) {
        *param_5 = plStack_90;
        plStack_90 = (long *)0x36;
        if (((ulong)plVar5 & 1) == 0) goto LAB_104ad704c;
        func_0x00010084dad0();
        plVar5 = plStack_90;
      }
      if (((ulong)plVar5 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
  }
LAB_104ad704c:
  plStack_90 = &lStack_a8;
  func_0x000100482b64(&plStack_90);
  return;
}



/* Entry: 104ad70f8; end: 104ad711f;  */

ulong FUN_104ad70f8(undefined8 param_1,ulong param_2,undefined8 param_3,int param_4)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  
  FUN_104a6fa70(&DAT_10f62a4d8);
  FUN_104a6fa70(&DAT_10f62a4d8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  uVar2 = 0;
  if (param_4 != 0) {
    uVar2 = SUB168(auVar1 * ZEXT816(0x8fb823ee08fb823f),8) >> 4 & 0xffffffffffffffe;
  }
  uVar2 = uVar2 + ((param_2 + 3) / 3) * 4 | 1;
  func_0x000100460200(uVar2);
  FUN_104ad71b8();
  return uVar2;
}



/* Entry: 104ad7120; end: 104ad71b7;  */

ulong FUN_104ad7120(undefined8 param_1,ulong param_2,undefined8 param_3,int param_4)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  uVar2 = 0;
  if (param_4 != 0) {
    uVar2 = SUB168(auVar1 * ZEXT816(0x8fb823ee08fb823f),8) >> 4 & 0xffffffffffffffe;
  }
  uVar2 = uVar2 + ((param_2 + 3) / 3) * 4 | 1;
  func_0x000100460200(uVar2);
  FUN_104ad71b8();
  return uVar2;
}



/* Entry: 104ad71b8; end: 104ad7373;  */

undefined1  [16]
FUN_104ad71b8(char *param_1,byte *param_2,ulong param_3,undefined8 param_4,int param_5)

{
  char *pcVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  long *plVar5;
  byte *pbVar6;
  char cVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long alStack_98 [8];
  long lStack_58;
  
  pcVar1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  if ((int)param_4 != 0) {
    pcVar1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_";
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_3;
  uVar2 = 0;
  if (param_5 != 0) {
    uVar2 = SUB168(auVar3 * ZEXT816(0x8fb823ee08fb823f),8) >> 4 & 0xffffffffffffffe;
  }
  if (param_3 < 3) {
    lVar11 = 0;
    pcVar9 = param_1;
    uVar12 = param_3;
  }
  else {
    lVar10 = 0;
    lVar11 = 0;
    pcVar8 = param_1;
    pbVar6 = param_2;
    do {
      *pcVar8 = pcVar1[*pbVar6 >> 2];
      pcVar8[1] = pcVar1[(ulong)(pbVar6[1] >> 4) | ((ulong)*pbVar6 & 3) << 4];
      pcVar8[2] = pcVar1[(ulong)(pbVar6[2] >> 6) | ((ulong)pbVar6[1] & 0xf) << 2];
      pcVar9 = pcVar8 + 4;
      pcVar8[3] = pcVar1[(ulong)pbVar6[2] & 0x3f];
      if ((param_5 != 0) && (lVar11 = lVar11 + 1, lVar11 == 0x13)) {
        lVar11 = 0;
        pcVar8[4] = '\r';
        pcVar8[5] = '\n';
        pcVar9 = pcVar8 + 6;
      }
      pbVar6 = pbVar6 + 3;
      lVar10 = lVar10 + -3;
      pcVar8 = pcVar9;
    } while (2 < param_3 + lVar10);
    lVar11 = -lVar10;
    uVar12 = param_3 + lVar10;
  }
  if (uVar12 == 1) {
    *pcVar9 = pcVar1[param_2[lVar11] >> 2];
    pcVar9[1] = pcVar1[((ulong)param_2[lVar11] & 3) * 0x10];
    cVar7 = '=';
  }
  else {
    if (uVar12 != 2) goto LAB_104ad7334;
    pbVar6 = param_2 + lVar11;
    *pcVar9 = pcVar1[*pbVar6 >> 2];
    pcVar9[1] = pcVar1[(ulong)(pbVar6[1] >> 4) | ((ulong)*pbVar6 & 3) << 4];
    cVar7 = pcVar1[((ulong)pbVar6[1] & 0xf) * 4];
  }
  pcVar9[2] = cVar7;
  pcVar9[3] = '=';
  pcVar9 = pcVar9 + 4;
LAB_104ad7334:
  if (pcVar9 < param_1) {
    func_0x00010bdad400();
  }
  else if ((ulong)((long)pcVar9 - (long)param_1) < (uVar2 + ((param_3 + 3) / 3) * 4 | 1)) {
    param_1[(long)pcVar9 - (long)param_1] = '\0';
    auVar16._8_8_ = param_2;
    auVar16._0_8_ = param_1;
    return auVar16;
  }
  func_0x00010bdad434();
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)0x2;
  pbVar6 = param_2;
  func_0x0001004686b8();
  if ((int)plVar4 != 0) {
    plVar4 = alStack_98;
    func_0x000107c616d0(plVar4,0x40,param_4,&stack0xfffffffffffffff0);
    if ((int)(uint)plVar4 < 0) {
      plVar5 = (long *)0x0;
      plVar4 = (long *)0x0;
    }
    else if ((uint)plVar4 < 0x40) {
      plVar4 = (long *)0x0;
      plVar5 = alStack_98;
    }
    else {
      plVar4 = (long *)(((ulong)plVar4 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar5 = plVar4;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar5);
    func_0x000100460314();
    pbVar6 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar13._8_8_ = pbVar6;
    auVar13._0_8_ = plVar4;
    return auVar13;
  }
  func_0x000107c60e78();
  if ((ulong)pbVar6 >> 0x3d == 0) {
    lVar11 = (long)pbVar6 << 3;
    func_0x000107c60e20(lVar11);
    auVar14._8_8_ = pbVar6;
    auVar14._0_8_ = lVar11;
    return auVar14;
  }
  FUN_104a7757c();
  lVar11 = plVar4[1];
  lVar10 = plVar4[2];
  while (lVar10 != lVar11) {
    plVar4[2] = lVar10 + -8;
    plVar5 = *(long **)(lVar10 + -8);
    *(undefined8 *)(lVar10 + -8) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    lVar10 = plVar4[2];
  }
  if (*plVar4 != 0) {
    func_0x000107c60e14();
  }
  auVar15._8_8_ = pbVar6;
  auVar15._0_8_ = plVar4;
  return auVar15;
}



/* Entry: 104ad7374; end: 104ad737b;  */

undefined1  [16]
FUN_104ad7374(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104ad737c; end: 104ad759b;  */

long * FUN_104ad737c(long *param_1,long *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  long *extraout_x8;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  char *pcStack_60;
  long lStack_58;
  undefined8 uStack_50;
  byte *pbStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 0) {
    puVar17 = &UNK_10dd577d8;
LAB_104ad73c8:
    plVar10 = param_2;
    if (*param_2 == 0) {
      pbVar12 = (byte *)((long)param_2 + 9);
      uVar16 = (ulong)*(byte *)(param_2 + 1);
      if (uVar16 != 0) goto LAB_104ad73e8;
LAB_104ad745c:
      lVar15 = *param_2;
      lVar19 = param_2[3];
      lVar18 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = lVar15;
      param_1[3] = lVar19;
      param_1[2] = lVar18;
      param_2[1] = 0;
      *param_2 = 0;
      param_2[3] = 0;
      param_2[2] = 0;
    }
    else {
      uVar16 = param_2[1];
      pbVar12 = (byte *)param_2[2];
      if (uVar16 == 0) goto LAB_104ad745c;
LAB_104ad73e8:
      bVar4 = false;
      plVar9 = (long *)0x0;
      do {
        bVar6 = (1L << ((ulong)*pbVar12 & 0x3f) &
                *(ulong *)(puVar17 + ((ulong)(*pbVar12 >> 3) & 0x18))) == 0;
        plVar10 = (long *)((long)plVar9 + 3);
        if (!bVar6) {
          plVar10 = (long *)((long)plVar9 + 1);
        }
        bVar4 = (bool)(bVar4 | bVar6);
        uVar16 = uVar16 - 1;
        plVar9 = plVar10;
        pbVar12 = pbVar12 + 1;
      } while (uVar16 != 0);
      if (!bVar4) goto LAB_104ad745c;
      func_0x0001005a7e6c(&lStack_58,plVar10);
      pbVar12 = (byte *)((long)&uStack_50 + 1);
      if (lStack_58 != 0) {
        pbVar12 = pbStack_48;
      }
      if (*param_2 == 0) {
        pbVar1 = (byte *)((long)param_2 + 9);
        uVar16 = (ulong)*(byte *)(param_2 + 1);
      }
      else {
        uVar16 = param_2[1];
        pbVar1 = (byte *)param_2[2];
      }
      for (; uVar16 != 0; uVar16 = uVar16 - 1) {
        bVar2 = *pbVar1;
        if ((*(ulong *)(puVar17 + ((ulong)(bVar2 >> 3) & 0x18)) >> ((ulong)bVar2 & 0x3f) & 1) == 0)
        {
          *pbVar12 = 0x25;
          pbVar12[1] = "0123456789ABCDEF"[bVar2 >> 4];
          pbVar12[2] = "0123456789ABCDEF"[(ulong)bVar2 & 0xf];
          pbVar13 = pbVar12 + 3;
        }
        else {
          pbVar13 = pbVar12 + 1;
          *pbVar12 = bVar2;
        }
        pbVar1 = pbVar1 + 1;
        pbVar12 = pbVar13;
      }
      uVar16 = uStack_50 & 0xff;
      pbVar1 = (byte *)((long)&uStack_50 + 1);
      if (lStack_58 != 0) {
        uVar16 = uStack_50;
        pbVar1 = pbStack_48;
      }
      if (pbVar12 != pbVar1 + uVar16) {
        pcStack_60 = "q == out.end()";
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/percent_encoding.cc"
                            ,0x71,2,"assertion failed: %s");
        _abort();
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104ad7564);
        (*pcVar5)();
      }
      param_1[1] = uStack_50;
      *param_1 = lStack_58;
      param_1[3] = lStack_40;
      param_1[2] = (long)pbStack_48;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return plVar10;
    }
    ___stack_chk_fail();
  }
  else if (param_3 == 1) {
    puVar17 = &UNK_10dd577f8;
    goto LAB_104ad73c8;
  }
  pcVar8 = "abort()";
  FUN_104a6e964("abort()",
                "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/percent_encoding.cc"
                ,0x50);
  plVar10 = (long *)pcVar8;
  __Unwind_Resume();
  plVar9 = &lStack_d0;
  pcStack_68 = FUN_104ad759c;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = (long *)*plVar10;
  plStack_80 = param_2;
  plStack_78 = (long *)pcVar8;
  puStack_70 = &stack0xfffffffffffffff0;
  if (plVar14 == (long *)0x1) {
LAB_104ad75f8:
    lStack_c8 = plVar10[1];
    lStack_d0 = *plVar10;
    lStack_b8 = plVar10[3];
    lStack_c0 = plVar10[2];
    func_0x0001004bcbf4(&lStack_a8);
  }
  else {
    if (plVar14 != (long *)0x0) {
      if (*plVar14 == 1) {
        lVar15 = *plVar10;
        lVar19 = plVar10[3];
        lVar18 = plVar10[2];
        extraout_x8[1] = plVar10[1];
        *extraout_x8 = lVar15;
        extraout_x8[3] = lVar19;
        extraout_x8[2] = lVar18;
        plVar10[1] = 0;
        *plVar10 = 0;
        plVar10[3] = 0;
        plVar10[2] = 0;
        goto LAB_104ad7618;
      }
      goto LAB_104ad75f8;
    }
    lStack_a0 = plVar10[1];
    lStack_a8 = *plVar10;
    lStack_90 = plVar10[3];
    lStack_98 = plVar10[2];
    plVar9 = plVar10;
  }
  extraout_x8[1] = lStack_a0;
  *extraout_x8 = lStack_a8;
  extraout_x8[3] = lStack_90;
  extraout_x8[2] = lStack_98;
  plVar10 = plVar9;
LAB_104ad7618:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return plVar10;
  }
  ___stack_chk_fail();
  iVar7 = (int)plVar10;
  uVar11 = iVar7 - 0x30;
  if (9 < uVar11) {
    if (iVar7 - 0x41U < 6) {
      uVar11 = iVar7 - 0x37;
    }
    else {
      if (5 < iVar7 - 0x61U) {
        pcVar8 = "return 255";
        FUN_104a6e964("return 255",
                      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/percent_encoding.cc"
                      ,0x7f);
        plVar10 = *(long **)pcVar8;
        if ((long *)0x1 < plVar10) {
          do {
            lVar15 = *plVar10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 + -1 == 0) {
            (*(code *)plVar10[1])();
          }
        }
        return (long *)pcVar8;
      }
      uVar11 = iVar7 - 0x57;
    }
  }
  return (long *)(ulong)(uVar11 & 0xff);
}



/* Entry: 104ad759c; end: 104ad7643;  */

long * FUN_104ad759c(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  plVar5 = &lStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = (long *)*param_2;
  if (plVar7 == (long *)0x1) {
LAB_104ad75f8:
    lStack_68 = param_2[1];
    lStack_70 = *param_2;
    lStack_58 = param_2[3];
    lStack_60 = param_2[2];
    func_0x0001004bcbf4(&lStack_48);
  }
  else {
    if (plVar7 != (long *)0x0) {
      if (*plVar7 == 1) {
        lVar8 = *param_2;
        lVar10 = param_2[3];
        lVar9 = param_2[2];
        param_1[1] = param_2[1];
        *param_1 = lVar8;
        param_1[3] = lVar10;
        param_1[2] = lVar9;
        param_2[1] = 0;
        *param_2 = 0;
        param_2[3] = 0;
        param_2[2] = 0;
        goto LAB_104ad7618;
      }
      goto LAB_104ad75f8;
    }
    lStack_40 = param_2[1];
    lStack_48 = *param_2;
    lStack_30 = param_2[3];
    lStack_38 = param_2[2];
    plVar5 = param_2;
  }
  param_1[1] = lStack_40;
  *param_1 = lStack_48;
  param_1[3] = lStack_30;
  param_1[2] = lStack_38;
  param_2 = plVar5;
LAB_104ad7618:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_2;
  }
  ___stack_chk_fail();
  iVar3 = (int)param_2;
  uVar6 = iVar3 - 0x30;
  if (9 < uVar6) {
    if (iVar3 - 0x41U < 6) {
      uVar6 = iVar3 - 0x37;
    }
    else {
      if (5 < iVar3 - 0x61U) {
        pcVar4 = "return 255";
        FUN_104a6e964("return 255",
                      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/percent_encoding.cc"
                      ,0x7f);
        plVar5 = *(long **)pcVar4;
        if ((long *)0x1 < plVar5) {
          do {
            lVar8 = *plVar5;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = lVar8 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar8 + -1 == 0) {
            (*(code *)plVar5[1])();
          }
        }
        return (long *)pcVar4;
      }
      uVar6 = iVar3 - 0x57;
    }
  }
  return (long *)(ulong)(uVar6 & 0xff);
}



/* Entry: 104ad7644; end: 104ad769b;  */

char * FUN_104ad7644(int param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  
  uVar5 = param_1 - 0x30;
  if (9 < uVar5) {
    if (param_1 - 0x41U < 6) {
      uVar5 = param_1 - 0x37;
    }
    else {
      if (5 < param_1 - 0x61U) {
        pcVar3 = "return 255";
        FUN_104a6e964("return 255",
                      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/percent_encoding.cc"
                      ,0x7f);
        plVar4 = *(long **)pcVar3;
        if ((long *)0x1 < plVar4) {
          do {
            lVar6 = *plVar4;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = lVar6 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar6 + -1 == 0) {
            (*(code *)plVar4[1])();
          }
        }
        return pcVar3;
      }
      uVar5 = param_1 - 0x57;
    }
  }
  return (char *)(ulong)(uVar5 & 0xff);
}



/* Entry: 104ad769c; end: 104ad76e7;  */

undefined8 * FUN_104ad769c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  if ((long *)0x1 < plVar3) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      (*(code *)plVar3[1])();
    }
  }
  return param_1;
}



/* Entry: 104ad76e8; end: 104ad7747;  */

void FUN_104ad76e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = 1;
  puVar1[1] = FUN_104ad7a00;
  puVar1[2] = param_4;
  puVar1[3] = param_5;
  param_1[1] = param_3;
  param_1[2] = param_2;
  *param_1 = puVar1;
  return;
}



/* Entry: 104ad7748; end: 104ad77f3;  */

void FUN_104ad7748(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = 1;
  puVar1[1] = FUN_104ad7a00;
  puVar1[2] = param_4;
  puVar1[3] = param_2;
  param_1[1] = param_3;
  param_1[2] = param_2;
  *param_1 = puVar1;
  return;
}



/* Entry: 104ad77f4; end: 104ad79f7;  */

void FUN_104ad77f4(undefined8 *param_1,long *param_2,undefined8 *param_3,ulong param_4)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long *extraout_x8;
  long *plVar12;
  long *extraout_x8_00;
  int iVar13;
  long *plVar14;
  long *unaff_x20;
  code *pcVar15;
  long alStack_90 [7];
  long lStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  undefined1 *puVar6;
  
  plVar7 = alStack_90 + 4;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_4 - (long)param_3;
  if (uVar10 < 0x18) {
    *param_1 = 0;
    *(char *)(param_1 + 1) = (char)uVar10;
    if (*param_2 == 0) {
      lVar11 = (long)param_2 + 9;
    }
    else {
      lVar11 = param_2[2];
    }
    plVar7 = param_2;
    param_4 = uVar10;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)((long)param_1 + 9,lVar11 + (long)param_3);
      return;
    }
  }
  else {
    alStack_90[5] = param_2[1];
    alStack_90[4] = *param_2;
    lStack_58 = param_2[3];
    alStack_90[6] = param_2[2];
    func_0x0001008d8d00(&uStack_48);
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[3] = uStack_30;
    param_1[2] = uStack_38;
    plVar14 = (long *)*param_1;
    if (plVar14 != (long *)0x1) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = *plVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      return;
    }
  }
  pcVar15 = (code *)0x104ad78e0;
  ___stack_chk_fail();
  plVar14 = alStack_90 + 4;
  plVar12 = extraout_x8;
  puVar5 = (undefined1 *)register0x00000008;
  do {
    puVar9 = param_3;
    plVar8 = plVar7;
    puVar6 = (undefined1 *)plVar14;
    *(long **)(puVar6 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar6 + -0x18) = param_1;
    *(undefined1 **)(puVar6 + -0x10) = puVar5 + -0x10;
    *(code **)(puVar6 + -8) = pcVar15;
    plVar14 = (long *)*plVar8;
    if (plVar14 == (long *)0x1) {
      lVar11 = plVar8[1];
      plVar12[2] = plVar8[2] + (long)puVar9;
      *plVar12 = 1;
      plVar12[1] = lVar11 - (long)puVar9;
LAB_104ad79e0:
      plVar8[1] = (long)puVar9;
      return;
    }
    plVar7 = plVar8;
    param_3 = puVar9;
    if (plVar14 == (long *)0x0) {
      bVar1 = *(byte *)(plVar8 + 1);
      if (puVar9 <= (undefined8 *)(ulong)bVar1) {
        *plVar12 = 0;
        uVar4 = (uint)bVar1 - (int)puVar9;
        *(char *)(plVar12 + 1) = (char)uVar4;
        _memcpy((long)plVar12 + 9,(long)plVar8 + (long)puVar9 + 9,uVar4 & 0xff);
        *(char *)(plVar8 + 1) = (char)puVar9;
        return;
      }
      func_0x00010bdad538();
    }
    else {
      uVar10 = plVar8[1] - (long)puVar9;
      if (puVar9 <= (undefined8 *)plVar8[1]) {
        iVar13 = (int)param_4;
        if ((iVar13 != 1) && (uVar10 < 0x17)) {
          *plVar12 = 0;
          *(char *)(plVar12 + 1) = (char)uVar10;
          _memcpy((long)plVar12 + 9,plVar8[2] + (long)puVar9);
          goto LAB_104ad79e0;
        }
        if (iVar13 == 3) {
          *plVar12 = (long)plVar14;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = *plVar14 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        else {
          plVar7 = plVar12;
          if (iVar13 != 2) {
            if (iVar13 != 1) goto LAB_104ad79d4;
            *plVar12 = (long)plVar14;
            plVar7 = plVar8;
          }
          *plVar7 = 1;
        }
LAB_104ad79d4:
        lVar11 = plVar8[2];
        plVar12[1] = uVar10;
        plVar12[2] = lVar11 + (long)puVar9;
        goto LAB_104ad79e0;
      }
    }
    pcVar15 = FUN_104ad79f8;
    func_0x00010bdad504();
    param_4 = 3;
    plVar14 = (long *)(puVar6 + -0x20);
    plVar12 = extraout_x8_00;
    param_1 = puVar9;
    unaff_x20 = plVar8;
    puVar5 = puVar6;
  } while( true );
}



/* Entry: 104ad79f8; end: 104ad79ff;  */

/* WARNING: Removing unreachable block (ram,0x000104ad7998) */
/* WARNING: Removing unreachable block (ram,0x000104ad79a4) */
/* WARNING: Removing unreachable block (ram,0x000104ad79ac) */
/* WARNING: Removing unreachable block (ram,0x000104ad79b4) */

void FUN_104ad79f8(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *extraout_x8;
  long lVar8;
  long *plVar9;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    uVar7 = param_3;
    puVar6 = param_2;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    plVar9 = (long *)*puVar6;
    if (plVar9 == (long *)0x1) {
      lVar8 = puVar6[1];
      param_1[2] = puVar6[2] + uVar7;
      *param_1 = 1;
      param_1[1] = lVar8 - uVar7;
LAB_104ad79e0:
      puVar6[1] = uVar7;
      return;
    }
    param_2 = puVar6;
    param_3 = uVar7;
    if (plVar9 == (long *)0x0) {
      bVar1 = *(byte *)(puVar6 + 1);
      if (uVar7 <= bVar1) {
        *param_1 = 0;
        uVar4 = (uint)bVar1 - (int)uVar7;
        *(char *)(param_1 + 1) = (char)uVar4;
        _memcpy((long)param_1 + 9,(long)puVar6 + uVar7 + 9,uVar4 & 0xff);
        *(char *)(puVar6 + 1) = (char)uVar7;
        return;
      }
      func_0x00010bdad538();
    }
    else {
      uVar5 = puVar6[1] - uVar7;
      if (uVar7 <= (ulong)puVar6[1]) {
        if (uVar5 < 0x17) {
          *param_1 = 0;
          *(char *)(param_1 + 1) = (char)uVar5;
          _memcpy((long)param_1 + 9,puVar6[2] + uVar7);
        }
        else {
          *param_1 = plVar9;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = *plVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          lVar8 = puVar6[2];
          param_1[1] = uVar5;
          param_1[2] = lVar8 + uVar7;
        }
        goto LAB_104ad79e0;
      }
    }
    unaff_x30 = FUN_104ad79f8;
    func_0x00010bdad504();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
    param_1 = extraout_x8;
    unaff_x19 = uVar7;
    unaff_x20 = puVar6;
  } while( true );
}



/* Entry: 104ad7a00; end: 104ad7a3b;  */

void FUN_104ad7a00(long param_1)

{
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 104ad7a3c; end: 104ad7a7f;  */

void FUN_104ad7a3c(long param_1)

{
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 104ad7a80; end: 104ad7ab7;  */

void FUN_104ad7a80(long param_1)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x10));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 104ad7ab8; end: 104ad7b2b;  */

undefined1  [16]
FUN_104ad7ab8(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104ad7b2c; end: 104ad7bd7;  */

void FUN_104ad7b2c(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
            (param_1,*(undefined8 *)(param_2 + 0x20));
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      lVar3 = *(long *)(param_2 + 8);
      if (*(long *)(lVar3 + lVar4) == 0) {
        lVar1 = lVar3 + lVar4 + 9;
        uVar2 = (ulong)*(byte *)(lVar3 + lVar4 + 8);
      }
      else {
        uVar2 = *(ulong *)(lVar3 + lVar4 + 8);
        lVar1 = *(long *)(lVar3 + lVar4 + 0x10);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,lVar1,uVar2);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x20;
    } while (uVar5 < *(ulong *)(param_2 + 0x10));
  }
  return;
}



/* Entry: 104ad7bd8; end: 104ad7c57;  */

void FUN_104ad7bd8(long param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uStack_58 = param_2[1];
    uStack_60 = *param_2;
    uStack_48 = param_2[3];
    uStack_50 = param_2[2];
    lVar2 = param_1;
    func_0x0001005a70c4(param_1,&uStack_60);
    param_2 = param_2 + 4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar2 + 0x10) != 0) {
    lVar3 = *(long *)(lVar2 + 0x10) + -1;
    *(long *)(lVar2 + 0x10) = lVar3;
    plVar1 = (long *)(*(long *)(lVar2 + 8) + lVar3 * 0x20);
    puVar4 = (ulong *)(plVar1 + 1);
    if (*plVar1 == 0) {
      uVar5 = (ulong)(byte)*puVar4;
    }
    else {
      uVar5 = *puVar4;
    }
    *(ulong *)(lVar2 + 0x20) = *(long *)(lVar2 + 0x20) - uVar5;
  }
  return;
}



/* Entry: 104ad7c58; end: 104ad7c93;  */

void FUN_104ad7c58(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = *(long *)(param_1 + 0x10) + -1;
    *(long *)(param_1 + 0x10) = lVar2;
    plVar1 = (long *)(*(long *)(param_1 + 8) + lVar2 * 0x20);
    puVar3 = (ulong *)(plVar1 + 1);
    if (*plVar1 == 0) {
      uVar4 = (ulong)(byte)*puVar3;
    }
    else {
      uVar4 = *puVar3;
    }
    *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - uVar4;
  }
  return;
}



/* Entry: 104ad7c94; end: 104ad8097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_104ad7c94(long *****param_1,long *****param_2,long *****param_3,undefined8 param_4)

{
  long ***ppplVar1;
  char cVar2;
  long *****ppppplVar3;
  code *pcVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  long *****ppppplVar10;
  undefined1 auVar11 [8];
  long ****pppplVar12;
  long *****ppppplVar13;
  long *****ppppplVar14;
  undefined8 *extraout_x8;
  long *****unaff_x19;
  undefined8 uVar15;
  long lVar16;
  long *****unaff_x20;
  long ****pppplVar17;
  long *****unaff_x21;
  long *****unaff_x22;
  long *****ppppplVar18;
  long ****unaff_x23;
  long *****ppppplVar19;
  long lVar20;
  long *****unaff_x24;
  long lVar21;
  long *****unaff_x25;
  long *****unaff_x26;
  undefined8 unaff_x27;
  long ****pppplVar22;
  undefined8 unaff_x28;
  undefined1 *puVar23;
  undefined1 *unaff_x29;
  undefined *puVar24;
  undefined8 unaff_x30;
  long ****pppplVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  long alStack_3a8 [8];
  long lStack_368;
  long ****pppplStack_360;
  long ****pppplStack_358;
  long ****pppplStack_350;
  long ****pppplStack_348;
  long ****pppplStack_340;
  long ****pppplStack_338;
  undefined1 ****ppppuStack_330;
  code *pcStack_328;
  long lStack_320;
  undefined1 auStack_318 [8];
  long ****pppplStack_310;
  long lStack_308;
  long lStack_2f8;
  long ****pppplStack_2f0;
  long ****pppplStack_2e8;
  long ****pppplStack_2e0;
  long ****pppplStack_2d8;
  long ****pppplStack_2d0;
  long ****pppplStack_2c8;
  long ****pppplStack_2c0;
  long ****pppplStack_2b8;
  undefined1 ***pppuStack_2b0;
  code *pcStack_2a8;
  long ****pppplStack_2a0;
  long ****pppplStack_298;
  long ****pppplStack_290;
  undefined8 uStack_288;
  long **pplStack_278;
  long **pplStack_270;
  long **pplStack_268;
  long **pplStack_260;
  long ****pppplStack_258;
  undefined1 auStack_250 [8];
  long ****pppplStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long ****pppplStack_230;
  long ****pppplStack_228;
  long ****pppplStack_220;
  long ****pppplStack_218;
  long ****pppplStack_210;
  long ****pppplStack_208;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  long **pplStack_1f0;
  long **pplStack_1e8;
  long ****pppplStack_1e0;
  long ****pppplStack_1d8;
  long **pplStack_1d0;
  long **pplStack_1c8;
  long ****pppplStack_1c0;
  long ****pppplStack_1b8;
  long **pplStack_1b0;
  long **pplStack_1a8;
  long ****pppplStack_198;
  long ****pppplStack_190;
  long **pplStack_188;
  long **pplStack_180;
  long lStack_178;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  long ***appplStack_110 [4];
  long **pplStack_f0;
  long **pplStack_e8;
  long **pplStack_e0;
  long **pplStack_d8;
  long ***appplStack_d0 [4];
  long ***ppplStack_b0;
  long ****pppplStack_a8;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  long ***ppplStack_88;
  long ****pppplStack_80;
  long ***ppplStack_78;
  long ***ppplStack_70;
  long lStack_68;
  
  ppppplVar19 = (long *****)appplStack_110;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppplVar17 = (long ****)((long)param_1[4] - (long)param_2);
  if (param_1[4] < param_2) {
    func_0x00010bdad63c();
    ppppplVar8 = param_1;
    auVar11 = (undefined1  [8])param_2;
    ppppplVar13 = param_3;
LAB_104ad7e64:
    func_0x00010bdad6d8();
LAB_104ad7e68:
    func_0x00010bdad6a4();
LAB_104ad7e6c:
    func_0x00010bdad670();
    param_1 = unaff_x19;
    param_3 = unaff_x20;
    param_2 = unaff_x21;
LAB_104ad7e70:
    func_0x00010bdad70c();
    unaff_x21 = param_2;
LAB_104ad7e74:
    unaff_x20 = param_3;
    unaff_x19 = param_1;
    param_3 = ppppplVar13;
    param_1 = ppppplVar8;
    ___stack_chk_fail();
    puStack_120 = &stack0xfffffffffffffff0;
    uStack_118 = 0x104ad7e78;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppppplVar19 = (long *****)((long)param_1[4] - (long)auVar11);
    if (param_1[4] < (ulong)auVar11) {
      func_0x00010bdad740();
      ppppplVar13 = param_1;
      ppppplVar8 = (long *****)auVar11;
      ppppplVar14 = param_3;
LAB_104ad8084:
      func_0x00010bdad7dc();
LAB_104ad8088:
      func_0x00010bdad7a8();
      ppppplVar18 = unaff_x22;
    }
    else {
      ppppplVar8 = (long *****)auVar11;
      ppppplVar13 = param_1;
      ppppplVar14 = param_3;
      if (ppppplVar19 == (long *****)0x0) {
        auVar11 = (undefined1  [8])unaff_x21;
        ppppplVar18 = unaff_x22;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0)
        goto LAB_104ad8094;
        unaff_x30 = 0x104ad7e78;
        unaff_x23 = pppplVar17;
        unaff_x29 = &stack0xfffffffffffffff0;
        register0x00000008 = (BADSPACEBASE *)appplStack_110;
        goto LAB_100614830;
      }
      unaff_x24 = (long *****)param_3[4];
      pppplVar17 = param_1[2];
      ppppplVar18 = (long *****)auVar11;
      ppppplVar10 = unaff_x22;
      ppppplVar9 = (long *****)pppplStack_198;
      ppppplVar3 = (long *****)pppplStack_190;
      while (unaff_x22 = ppppplVar10, pppplStack_198 = (long ****)unaff_x25,
            pppplStack_190 = (long ****)unaff_x26, pppplVar17 != (long ****)0x0) {
        pppplStack_198 = (long ****)ppppplVar9;
        pppplStack_190 = (long ****)ppppplVar3;
        func_0x0001005a79cc(&pppplStack_198,param_1);
        ppppplVar8 = (long *****)((ulong)pppplStack_190 & 0xff);
        if ((long *****)pppplStack_198 != (long *****)0x0) {
          ppppplVar8 = (long *****)pppplStack_190;
        }
        ppppplVar10 = (long *****)((long)ppppplVar18 - (long)ppppplVar8);
        ppppplVar13 = param_3;
        if (ppppplVar18 < ppppplVar8 || ppppplVar10 == (long *****)0x0) {
          unaff_x22 = ppppplVar18;
          if (ppppplVar10 == (long *****)0x0) {
            pppplStack_1d8 = pppplStack_190;
            pppplStack_1e0 = pppplStack_198;
            pplStack_1c8 = pplStack_180;
            pplStack_1d0 = pplStack_188;
            ppppplVar8 = &pppplStack_1e0;
            func_0x0001005a70c4();
            pppplStack_198 = (long ****)ppppplVar10;
            pppplStack_190 = (long ****)unaff_x26;
          }
          else {
            ppppplVar13 = &pppplStack_198;
            ppppplVar14 = (long *****)0x1;
            ppppplVar8 = ppppplVar18;
            func_0x000104ad78e0(&pppplStack_1e0);
            pppplVar17 = param_1[1];
            param_1[1] = pppplVar17 + -4;
            pppplVar17[-3] = (long ***)pppplStack_1d8;
            pppplVar17[-4] = (long ***)pppplStack_1e0;
            pppplVar17[-1] = (long ***)pplStack_1c8;
            pppplVar17[-2] = (long ***)pplStack_1d0;
            param_1[2] = (long ****)((long)param_1[2] + 1);
            ppppplVar10 = (long *****)((ulong)pppplStack_1d8 & 0xff);
            if ((long *****)pppplStack_1e0 != (long *****)0x0) {
              ppppplVar10 = (long *****)pppplStack_1d8;
            }
            param_1[4] = (long ****)((long)ppppplVar10 + (long)param_1[4]);
            ppppplVar10 = (long *****)((ulong)pppplStack_190 & 0xff);
            if ((long *****)pppplStack_198 != (long *****)0x0) {
              ppppplVar10 = (long *****)pppplStack_190;
            }
            unaff_x25 = (long *****)pppplStack_198;
            unaff_x26 = (long *****)pppplStack_190;
            if (ppppplVar10 != ppppplVar18) goto LAB_104ad8090;
            pplStack_1e8 = pplStack_180;
            pplStack_1f0 = pplStack_188;
            pppplVar22 = param_3[2];
            ppppplVar13 = param_3;
            func_0x0001005a7320();
            pppplVar17 = param_3[1] + (long)pppplVar22 * 4;
            *pppplVar17 = (long ***)pppplStack_198;
            pppplVar17[1] = (long ***)pppplStack_190;
            pppplVar17[3] = (long ***)pplStack_1e8;
            pppplVar17[2] = (long ***)pplStack_1f0;
            param_3[4] = (long ****)((long)param_3[4] + (long)ppppplVar18);
            param_3[2] = (long ****)((long)pppplVar22 + 1);
          }
          break;
        }
        pppplStack_1b8 = pppplStack_190;
        pppplStack_1c0 = pppplStack_198;
        pplStack_1a8 = pplStack_180;
        pplStack_1b0 = pplStack_188;
        ppppplVar8 = &pppplStack_1c0;
        func_0x0001005a70c4();
        ppppplVar18 = ppppplVar10;
        unaff_x25 = ppppplVar10;
        ppppplVar9 = (long *****)pppplStack_198;
        ppppplVar3 = (long *****)pppplStack_190;
        pppplVar17 = param_1[2];
      }
      unaff_x19 = param_1;
      unaff_x20 = param_3;
      unaff_x21 = (long *****)auVar11;
      unaff_x25 = (long *****)pppplStack_198;
      unaff_x26 = (long *****)pppplStack_190;
      if (param_3[4] != (long ****)((long)unaff_x24 + (long)auVar11)) goto LAB_104ad8084;
      if ((long *****)param_1[4] != ppppplVar19) goto LAB_104ad8088;
      ppppplVar18 = unaff_x22;
      if (param_1[2] != (long ****)0x0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
          auVar33._8_8_ = ppppplVar8;
          auVar33._0_8_ = ppppplVar13;
          return auVar33;
        }
        goto LAB_104ad8094;
      }
    }
    func_0x00010bdad774();
    param_1 = unaff_x19;
    param_3 = unaff_x20;
    auVar11 = (undefined1  [8])unaff_x21;
LAB_104ad8090:
    func_0x00010bdad810();
LAB_104ad8094:
    ___stack_chk_fail();
    ppppplVar10 = &pppplStack_2a0;
    pppplStack_230 = (long ****)unaff_x24;
    pppplStack_228 = (long ****)ppppplVar19;
    pppplStack_220 = (long ****)ppppplVar18;
    pppplStack_218 = (long ****)auVar11;
    pppplStack_210 = (long ****)param_3;
    pppplStack_208 = (long ****)param_1;
    ppuStack_200 = &puStack_120;
    pcStack_1f8 = FUN_104ad8098;
    lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
    if (ppppplVar13[4] < ppppplVar8) {
      func_0x00010bdad844();
    }
    else {
      ppppplVar9 = ppppplVar13;
      ppppplVar18 = ppppplVar8;
      if (ppppplVar8 != (long *****)0x0) {
        unaff_x24 = (long *****)(auStack_250 + 1);
        param_3 = ppppplVar14;
        do {
          ppppplVar19 = ppppplVar18;
          func_0x0001005a79cc(&pppplStack_258,ppppplVar13);
          auVar11 = (undefined1  [8])((ulong)auStack_250 & 0xff);
          if ((long *****)pppplStack_258 != (long *****)0x0) {
            auVar11 = auStack_250;
          }
          param_1 = ppppplVar13;
          ppppplVar14 = (long *****)auVar11;
          if (ppppplVar19 < (ulong)auVar11) {
            ppppplVar8 = unaff_x24;
            if ((long *****)pppplStack_258 != (long *****)0x0) {
              ppppplVar8 = (long *****)pppplStack_248;
            }
            _memcpy(param_3,ppppplVar8,ppppplVar19);
            pppplStack_298 = (long ****)auStack_250;
            pppplStack_2a0 = pppplStack_258;
            uStack_288 = uStack_240;
            pppplStack_290 = pppplStack_248;
            ppppplVar8 = ppppplVar19;
            func_0x0001008d8d00(&pplStack_278);
            pppplVar17 = ppppplVar13[1];
            ppppplVar13[1] = pppplVar17 + -4;
            pppplVar17[-3] = (long ***)pplStack_270;
            pppplVar17[-4] = (long ***)pplStack_278;
            pppplVar17[-1] = (long ***)pplStack_260;
            pppplVar17[-2] = (long ***)pplStack_268;
            ppppplVar13[2] = (long ****)((long)ppppplVar13[2] + 1);
            ppplVar1 = (long ***)((ulong)pplStack_270 & 0xff);
            if ((long ***)pplStack_278 != (long ***)0x0) {
              ppplVar1 = (long ***)pplStack_270;
            }
            ppppplVar13[4] = (long ****)((long)ppplVar1 + (long)ppppplVar13[4]);
            ppppplVar9 = ppppplVar10;
            ppppplVar18 = ppppplVar19;
            break;
          }
          ppppplVar8 = unaff_x24;
          if ((long *****)pppplStack_258 != (long *****)0x0) {
            ppppplVar8 = (long *****)pppplStack_248;
          }
          ppppplVar18 = (long *****)((long)ppppplVar19 - (long)auVar11);
          if (ppppplVar18 == (long *****)0x0) {
            ppppplVar14 = ppppplVar19;
            _memcpy(param_3);
            ppppplVar9 = (long *****)pppplStack_258;
            if ((long *****)0x1 < pppplStack_258) {
              do {
                pppplVar17 = (long ****)*pppplStack_258;
                cVar2 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(pppplStack_258,0x10);
                if (bVar5) {
                  *pppplStack_258 = (long ***)((long)pppplVar17 + -1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((long ****)((long)pppplVar17 + -1) == (long ****)0x0) {
                (*(code *)pppplStack_258[1])();
                ppppplVar9 = (long *****)pppplStack_258;
              }
            }
            break;
          }
          _memcpy(param_3);
          ppppplVar9 = (long *****)pppplStack_258;
          if ((long *****)0x1 < pppplStack_258) {
            do {
              pppplVar17 = (long ****)*pppplStack_258;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppplStack_258,0x10);
              if (bVar5) {
                *pppplStack_258 = (long ***)((long)pppplVar17 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((long ****)((long)pppplVar17 + -1) == (long ****)0x0) {
              (*(code *)pppplStack_258[1])();
            }
          }
          param_3 = (long *****)((long)param_3 + (long)auVar11);
        } while (ppppplVar18 != (long *****)0x0);
      }
      ppppplVar13 = ppppplVar9;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
        auVar34._8_8_ = ppppplVar8;
        auVar34._0_8_ = ppppplVar9;
        return auVar34;
      }
    }
    ___stack_chk_fail();
    pppplStack_2f0 = (long ****)unaff_x26;
    pppplStack_2e8 = (long ****)unaff_x25;
    pppplStack_2e0 = (long ****)unaff_x24;
    pppplStack_2d8 = (long ****)ppppplVar19;
    pppplStack_2d0 = (long ****)ppppplVar18;
    pppplStack_2c8 = (long ****)auVar11;
    pppplStack_2c0 = (long ****)param_3;
    pppplStack_2b8 = (long ****)param_1;
    pppuStack_2b0 = &ppuStack_200;
    pcStack_2a8 = FUN_104ad8248;
    lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    if (ppppplVar13[4] < ppppplVar8) {
      func_0x00010bdad878();
      ppppplVar10 = ppppplVar13;
    }
    else {
      ppppplVar10 = ppppplVar13;
      if (ppppplVar13[2] != (long ****)0x0) {
        ppppplVar18 = (long *****)0x0;
        ppppplVar19 = (long *****)0x0;
        unaff_x24 = (long *****)(auStack_318 + 1);
        ppppplVar9 = ppppplVar8;
        do {
          plVar6 = (long *)((long)ppppplVar13[1] + (long)ppppplVar18);
          auStack_318 = (undefined1  [8])plVar6[1];
          lStack_320 = *plVar6;
          lStack_308 = plVar6[3];
          pppplStack_310 = (long ****)plVar6[2];
          ppppplVar8 = unaff_x24;
          auVar11 = (undefined1  [8])((ulong)auStack_318 & 0xff);
          if (lStack_320 != 0) {
            ppppplVar8 = (long *****)pppplStack_310;
            auVar11 = auStack_318;
          }
          bVar5 = ppppplVar9 < (ulong)auVar11;
          ppppplVar9 = (long *****)((long)ppppplVar9 - (long)auVar11);
          ppppplVar10 = ppppplVar14;
          if (bVar5 || ppppplVar9 == (long *****)0x0) {
            _memcpy(ppppplVar14);
            param_1 = ppppplVar14;
            break;
          }
          _memcpy(ppppplVar14,ppppplVar8,auVar11);
          ppppplVar14 = (long *****)((long)ppppplVar14 + (long)auVar11);
          ppppplVar19 = (long *****)((long)ppppplVar19 + 1);
          ppppplVar18 = ppppplVar18 + 4;
          param_1 = ppppplVar14;
        } while (ppppplVar19 < ppppplVar13[2]);
      }
      param_3 = ppppplVar13;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f8) {
        auVar35._8_8_ = ppppplVar8;
        auVar35._0_8_ = ppppplVar10;
        return auVar35;
      }
    }
    ___stack_chk_fail();
    pcStack_328 = FUN_104ad8344;
    lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar6 = (long *)0x2;
    ppppplVar13 = ppppplVar8;
    pppplStack_360 = (long ****)unaff_x24;
    pppplStack_358 = (long ****)ppppplVar19;
    pppplStack_350 = (long ****)ppppplVar18;
    pppplStack_348 = (long ****)auVar11;
    pppplStack_340 = (long ****)param_3;
    pppplStack_338 = (long ****)param_1;
    ppppuStack_330 = &pppuStack_2b0;
    func_0x0001004686b8();
    if ((int)plVar6 != 0) {
      plVar6 = alStack_3a8;
      func_0x000107c616d0(plVar6,0x40,param_4,&lStack_320);
      if ((int)(uint)plVar6 < 0) {
        plVar7 = (long *)0x0;
        plVar6 = (long *)0x0;
      }
      else if ((uint)plVar6 < 0x40) {
        plVar6 = (long *)0x0;
        plVar7 = alStack_3a8;
      }
      else {
        plVar6 = (long *)(((ulong)plVar6 & 0xffffffff) + 1);
        func_0x000100460200();
        func_0x000107c616d0();
        plVar7 = plVar6;
      }
      FUN_104a6e9e0(ppppplVar10,ppppplVar8,2,plVar7);
      func_0x000100460314();
      ppppplVar13 = ppppplVar8;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_368) {
      func_0x000107c60e78();
      if ((ulong)ppppplVar13 >> 0x3d != 0) {
        FUN_104a7757c();
        lVar16 = plVar6[1];
        lVar20 = plVar6[2];
        while (lVar20 != lVar16) {
          plVar6[2] = lVar20 + -8;
          plVar7 = *(long **)(lVar20 + -8);
          *(undefined8 *)(lVar20 + -8) = 0;
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 8))();
          }
          lVar20 = plVar6[2];
        }
        if (*plVar6 != 0) {
          func_0x000107c60e14();
        }
        auVar28._8_8_ = ppppplVar13;
        auVar28._0_8_ = plVar6;
        return auVar28;
      }
      lVar16 = (long)ppppplVar13 << 3;
      func_0x000107c60e20(lVar16);
      auVar27._8_8_ = ppppplVar13;
      auVar27._0_8_ = lVar16;
      return auVar27;
    }
    auVar26._8_8_ = ppppplVar13;
    auVar26._0_8_ = plVar6;
    return auVar26;
  }
  auVar11 = (undefined1  [8])param_2;
  ppppplVar8 = param_1;
  ppppplVar13 = param_3;
  if (pppplVar17 != (long ****)0x0) {
    unaff_x24 = (long *****)param_3[4];
    if (param_1[2] != (long ****)0x0) {
      unaff_x25 = (long *****)&ppplStack_88;
      unaff_x22 = param_2;
      do {
        func_0x0001005a79cc(&ppplStack_88,param_1);
        ppppplVar8 = (long *****)((ulong)pppplStack_80 & 0xff);
        if ((long ****)ppplStack_88 != (long ****)0x0) {
          ppppplVar8 = (long *****)pppplStack_80;
        }
        unaff_x26 = (long *****)((long)unaff_x22 - (long)ppppplVar8);
        if (unaff_x22 < ppppplVar8 || unaff_x26 == (long *****)0x0) {
          if (unaff_x26 == (long *****)0x0) {
            ppppplVar19 = (long *****)appplStack_d0;
          }
          else {
            ppppplVar8 = (long *****)&ppplStack_88;
            ppppplVar13 = (long *****)0x3;
            auVar11 = (undefined1  [8])unaff_x22;
            func_0x000104ad78e0(&pplStack_f0);
            pppplVar22 = param_1[1];
            param_1[1] = pppplVar22 + -4;
            pppplVar22[-3] = (long ***)pplStack_e8;
            pppplVar22[-4] = (long ***)pplStack_f0;
            pppplVar22[-1] = (long ***)pplStack_d8;
            pppplVar22[-2] = (long ***)pplStack_e0;
            param_1[2] = (long ****)((long)param_1[2] + 1);
            ppplVar1 = (long ***)((ulong)pplStack_e8 & 0xff);
            if ((long ***)pplStack_f0 != (long ***)0x0) {
              ppplVar1 = (long ***)pplStack_e8;
            }
            param_1[4] = (long ****)((long)ppplVar1 + (long)param_1[4]);
            ppppplVar14 = (long *****)((ulong)pppplStack_80 & 0xff);
            if ((long ****)ppplStack_88 != (long ****)0x0) {
              ppppplVar14 = (long *****)pppplStack_80;
            }
            if (ppppplVar14 != unaff_x22) goto LAB_104ad7e70;
          }
          ppppplVar19[1] = pppplStack_80;
          *ppppplVar19 = (long ****)ppplStack_88;
          ppppplVar19[3] = (long ****)ppplStack_70;
          ppppplVar19[2] = (long ****)ppplStack_78;
          ppppplVar8 = param_3;
          func_0x0001005a70c4();
          auVar11 = (undefined1  [8])ppppplVar19;
          break;
        }
        pppplStack_a8 = pppplStack_80;
        ppplStack_b0 = ppplStack_88;
        ppplStack_98 = ppplStack_70;
        ppplStack_a0 = ppplStack_78;
        auVar11 = (undefined1  [8])&ppplStack_b0;
        ppppplVar8 = param_3;
        func_0x0001005a70c4();
        unaff_x22 = unaff_x26;
      } while (param_1[2] != (long ****)0x0);
    }
    unaff_x19 = param_1;
    unaff_x20 = param_3;
    unaff_x21 = param_2;
    if (param_3[4] != (long ****)((long)unaff_x24 + (long)param_2)) goto LAB_104ad7e64;
    if (param_1[4] != pppplVar17) goto LAB_104ad7e68;
    if (param_1[2] != (long ****)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        auVar32._8_8_ = auVar11;
        auVar32._0_8_ = ppppplVar8;
        return auVar32;
      }
      goto LAB_104ad7e74;
    }
    goto LAB_104ad7e6c;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0)
  goto LAB_104ad7e74;
LAB_100614830:
  *(long ******)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long ******)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long ******)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long ******)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar23 = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pppplVar17 = param_1[2];
  ppppplVar19 = param_1;
  ppppplVar8 = param_3;
  if (pppplVar17 == (long ****)0x0) {
code_r0x000100614894:
    param_1 = ppppplVar19;
    param_3 = ppppplVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
      auVar29._8_8_ = ppppplVar8;
      auVar29._0_8_ = ppppplVar19;
      return auVar29;
    }
code_r0x0001006148f4:
    puVar24 = &SUB_1006148f8;
    func_0x000107c60e78();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
  }
  else {
    unaff_x19 = param_1;
    unaff_x20 = param_3;
    if (param_3[2] != (long ****)0x0) {
      ppppplVar13 = (long *****)param_1[1];
      do {
        unaff_x22 = ppppplVar13 + 4;
        pppplVar22 = *ppppplVar13;
        pppplVar25 = ppppplVar13[3];
        pppplVar12 = ppppplVar13[2];
        *(long *****)((long)register0x00000008 + -0x58) = ppppplVar13[1];
        *(long *****)((long)register0x00000008 + -0x60) = pppplVar22;
        *(long *****)((long)register0x00000008 + -0x48) = pppplVar25;
        *(long *****)((long)register0x00000008 + -0x50) = pppplVar12;
        ppppplVar19 = param_3;
        ppppplVar8 = (long *****)((long)register0x00000008 + -0x60);
        func_0x0001005a70c4();
        pppplVar17 = (long ****)((long)pppplVar17 + -1);
        ppppplVar13 = unaff_x22;
      } while (pppplVar17 != (long ****)0x0);
      param_1[2] = (long ****)0x0;
      param_1[4] = (long ****)0x0;
      pppplVar17 = (long ****)0x0;
      goto code_r0x000100614894;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x38))
    goto code_r0x0001006148f4;
    puVar23 = *(undefined1 **)((long)register0x00000008 + -0x10);
    puVar24 = *(undefined **)((long)register0x00000008 + -8);
    unaff_x20 = *(long ******)((long)register0x00000008 + -0x20);
    unaff_x19 = *(long ******)((long)register0x00000008 + -0x18);
    unaff_x22 = *(long ******)((long)register0x00000008 + -0x30);
    pppplVar17 = *(long *****)((long)register0x00000008 + -0x28);
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(long ******)((long)register0x00000008 + -0x50) = unaff_x26;
  *(long ******)((long)register0x00000008 + -0x48) = unaff_x25;
  *(long ******)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long *****)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long ******)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *****)((long)register0x00000008 + -0x28) = pppplVar17;
  *(long ******)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long ******)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar23;
  *(undefined **)((long)register0x00000008 + -8) = puVar24;
  *(undefined8 *)((long)register0x00000008 + -0x68) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar13 = (long *****)*param_1;
  lVar20 = (long)param_1[1] - (long)ppppplVar13 >> 5;
  ppppplVar14 = (long *****)*param_3;
  lVar21 = (long)param_3[1] - (long)ppppplVar14 >> 5;
  lVar16 = (long)param_3[2] + lVar21;
  ppppplVar19 = param_1 + 5;
  ppppplVar8 = param_3 + 5;
  if (ppppplVar13 == ppppplVar19) {
    pppplVar17 = param_1[2];
    if (ppppplVar14 == ppppplVar8) {
      pppplVar17 = (long ****)(((long)pppplVar17 + lVar20) * 0x20);
      func_0x000107c610b4((undefined1 *)((long)register0x00000008 + -0x168),ppppplVar13,pppplVar17);
      func_0x000107c610b4(ppppplVar13,ppppplVar14,lVar16 * 0x20);
      ppppplVar8 = (long *****)*param_3;
      ppppplVar19 = (long *****)((long)register0x00000008 + -0x168);
      unaff_x23 = pppplVar17;
    }
    else {
      *param_1 = (long ****)ppppplVar14;
      *param_3 = (long ****)ppppplVar8;
      pppplVar17 = (long ****)(((long)pppplVar17 + lVar20) * 0x20);
      ppppplVar19 = ppppplVar13;
    }
  }
  else {
    if (ppppplVar14 != ppppplVar8) {
      *param_1 = (long ****)ppppplVar14;
      *param_3 = (long ****)ppppplVar13;
      ppppplVar19 = param_3;
      goto code_r0x0001006149e4;
    }
    *param_3 = (long ****)ppppplVar13;
    *param_1 = (long ****)ppppplVar19;
    pppplVar17 = (long ****)(lVar16 * 0x20);
    ppppplVar8 = ppppplVar19;
    ppppplVar19 = ppppplVar14;
  }
  func_0x000107c610b4(ppppplVar8,ppppplVar19,pppplVar17);
code_r0x0001006149e4:
  param_1[1] = *param_1 + lVar21 * 4;
  param_3[1] = *param_3 + lVar20 * 4;
  pppplVar17 = param_1[2];
  param_1[2] = param_3[2];
  param_3[2] = pppplVar17;
  pppplVar17 = param_1[3];
  param_1[3] = param_3[3];
  param_3[3] = pppplVar17;
  pppplVar17 = param_1[4];
  param_1[4] = param_3[4];
  param_3[4] = pppplVar17;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68)) {
    auVar30._8_8_ = ppppplVar19;
    auVar30._0_8_ = ppppplVar8;
    return auVar30;
  }
  func_0x000107c60e78();
  pppplVar17 = param_1[2];
  pppplVar22 = param_1[3];
  pppplVar12 = param_1[4];
  *(long *)((long)register0x00000008 + -0x1b0) = lVar20;
  *(long *****)((long)register0x00000008 + -0x1a8) = unaff_x23;
  *(long ******)((long)register0x00000008 + -0x1a0) = ppppplVar14;
  *(long ******)((long)register0x00000008 + -0x198) = ppppplVar13;
  *(long ******)((long)register0x00000008 + -400) = param_1;
  *(long ******)((long)register0x00000008 + -0x188) = param_3;
  *(undefined1 **)((long)register0x00000008 + -0x180) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x178) = &UNK_100614a68;
  func_0x000100083b20((undefined1 *)((long)register0x00000008 + -0x1b8),pppplVar17,pppplVar22,
                      pppplVar12);
  uVar15 = *(undefined8 *)((long)register0x00000008 + -0x1b8);
  func_0x000100615644();
  func_0x000107c61574(uVar15);
  func_0x000100083b20((undefined1 *)((long)register0x00000008 + -0x1c0));
  lVar16 = *(long *)((long)register0x00000008 + -0x1c0);
  uVar15 = *(undefined8 *)(lVar16 + _DAT_11307e0b8);
  func_0x000107c61174(uVar15);
  func_0x000107c61170(lVar16);
  func_0x0001000ad7c4();
  puVar24 = PTR_PTR_1126b8280;
  func_0x000107c610f8();
  func_0x000107c46284();
  func_0x000107c61170(pppplVar17);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(lVar16);
  if (puVar24 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100614b50);
    (*pcVar4)();
  }
  *extraout_x8 = puVar24;
  auVar31._8_8_ = pppplVar22;
  auVar31._0_8_ = lVar16;
  return auVar31;
}



/* Entry: 104ad8098; end: 104ad8247;  */

undefined1  [16] FUN_104ad8098(long *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long **pplVar6;
  long lVar7;
  long lVar8;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 unaff_x21 [8];
  long *unaff_x22;
  long *plVar9;
  long *unaff_x23;
  long *unaff_x24;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long alStack_1b8 [8];
  long lStack_178;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  long lStack_130;
  undefined1 auStack_128 [8];
  long *plStack_120;
  long lStack_118;
  long lStack_108;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  pplVar6 = &plStack_b0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((long *)param_1[4] < param_2) {
    func_0x00010bdad844();
  }
  else {
    plVar5 = param_1;
    unaff_x22 = param_2;
    if (param_2 != (long *)0x0) {
      unaff_x24 = (long *)(auStack_60 + 1);
      unaff_x20 = param_3;
      do {
        unaff_x23 = unaff_x22;
        func_0x0001005a79cc(&plStack_68,param_1);
        unaff_x21 = (undefined1  [8])((ulong)auStack_60 & 0xff);
        if (plStack_68 != (long *)0x0) {
          unaff_x21 = auStack_60;
        }
        param_3 = (long *)unaff_x21;
        unaff_x19 = param_1;
        if (unaff_x23 < (ulong)unaff_x21) {
          plVar5 = unaff_x24;
          if (plStack_68 != (long *)0x0) {
            plVar5 = plStack_58;
          }
          _memcpy(unaff_x20,plVar5,unaff_x23);
          plStack_a8 = (long *)auStack_60;
          plStack_b0 = plStack_68;
          uStack_98 = uStack_50;
          plStack_a0 = plStack_58;
          param_2 = unaff_x23;
          func_0x0001008d8d00(&lStack_88);
          lVar8 = param_1[1];
          param_1[1] = lVar8 + -0x20;
          *(ulong *)(lVar8 + -0x18) = uStack_80;
          *(long *)(lVar8 + -0x20) = lStack_88;
          *(undefined8 *)(lVar8 + -8) = uStack_70;
          *(undefined8 *)(lVar8 + -0x10) = uStack_78;
          param_1[2] = param_1[2] + 1;
          uVar1 = uStack_80 & 0xff;
          if (lStack_88 != 0) {
            uVar1 = uStack_80;
          }
          param_1[4] = uVar1 + param_1[4];
          plVar5 = (long *)pplVar6;
          unaff_x22 = unaff_x23;
          break;
        }
        param_2 = unaff_x24;
        if (plStack_68 != (long *)0x0) {
          param_2 = plStack_58;
        }
        unaff_x22 = (long *)((long)unaff_x23 - (long)unaff_x21);
        if (unaff_x22 == (long *)0x0) {
          param_3 = unaff_x23;
          _memcpy(unaff_x20);
          plVar5 = plStack_68;
          if ((long *)0x1 < plStack_68) {
            do {
              lVar8 = *plStack_68;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
              if (bVar3) {
                *plStack_68 = lVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            plVar5 = plStack_68;
            if (lVar8 + -1 == 0) {
              (*(code *)plStack_68[1])();
              plVar5 = plStack_68;
            }
          }
          break;
        }
        _memcpy(unaff_x20);
        plVar5 = plStack_68;
        if ((long *)0x1 < plStack_68) {
          do {
            lVar8 = *plStack_68;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
            if (bVar3) {
              *plStack_68 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 + -1 == 0) {
            (*(code *)plStack_68[1])();
          }
        }
        unaff_x20 = (long *)((long)unaff_x20 + (long)unaff_x21);
      } while (unaff_x22 != (long *)0x0);
    }
    param_1 = plVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      auVar13._8_8_ = param_2;
      auVar13._0_8_ = plVar5;
      return auVar13;
    }
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_104ad8248;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c0 = &stack0xfffffffffffffff0;
  if ((long *)param_1[4] < param_2) {
    func_0x00010bdad878();
    plVar5 = param_1;
  }
  else {
    plVar5 = param_1;
    if (param_1[2] != 0) {
      unaff_x22 = (long *)0x0;
      unaff_x23 = (long *)0x0;
      unaff_x24 = (long *)(auStack_128 + 1);
      plVar4 = param_2;
      do {
        plVar5 = (long *)(param_1[1] + (long)unaff_x22);
        auStack_128 = (undefined1  [8])plVar5[1];
        lStack_130 = *plVar5;
        lStack_118 = plVar5[3];
        plStack_120 = (long *)plVar5[2];
        unaff_x21 = (undefined1  [8])((ulong)auStack_128 & 0xff);
        param_2 = unaff_x24;
        if (lStack_130 != 0) {
          param_2 = plStack_120;
          unaff_x21 = auStack_128;
        }
        bVar3 = plVar4 < (ulong)unaff_x21;
        plVar4 = (long *)((long)plVar4 - (long)unaff_x21);
        plVar5 = param_3;
        if (bVar3 || plVar4 == (long *)0x0) {
          _memcpy(param_3);
          unaff_x19 = param_3;
          break;
        }
        _memcpy(param_3,param_2,unaff_x21);
        param_3 = (long *)((long)param_3 + (long)unaff_x21);
        unaff_x23 = (long *)((long)unaff_x23 + 1);
        unaff_x22 = unaff_x22 + 4;
        unaff_x19 = param_3;
      } while (unaff_x23 < (long *)param_1[2]);
    }
    unaff_x20 = param_1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
      auVar14._8_8_ = param_2;
      auVar14._0_8_ = plVar5;
      return auVar14;
    }
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_104ad8344;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)0x2;
  plVar9 = param_2;
  plStack_170 = unaff_x24;
  plStack_168 = unaff_x23;
  plStack_160 = unaff_x22;
  plStack_158 = (long *)unaff_x21;
  plStack_150 = unaff_x20;
  plStack_148 = unaff_x19;
  ppuStack_140 = &puStack_c0;
  func_0x0001004686b8();
  if ((int)plVar4 != 0) {
    plVar4 = alStack_1b8;
    func_0x000107c616d0(plVar4,0x40,param_4,&lStack_130);
    if ((int)(uint)plVar4 < 0) {
      plVar9 = (long *)0x0;
      plVar4 = (long *)0x0;
    }
    else if ((uint)plVar4 < 0x40) {
      plVar4 = (long *)0x0;
      plVar9 = alStack_1b8;
    }
    else {
      plVar4 = (long *)(((ulong)plVar4 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar9 = plVar4;
    }
    FUN_104a6e9e0(plVar5,param_2,2,plVar9);
    func_0x000100460314();
    plVar9 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    auVar10._8_8_ = plVar9;
    auVar10._0_8_ = plVar4;
    return auVar10;
  }
  func_0x000107c60e78();
  if ((ulong)plVar9 >> 0x3d == 0) {
    lVar8 = (long)plVar9 << 3;
    func_0x000107c60e20(lVar8);
    auVar11._8_8_ = plVar9;
    auVar11._0_8_ = lVar8;
    return auVar11;
  }
  FUN_104a7757c();
  lVar8 = plVar4[1];
  lVar7 = plVar4[2];
  while (lVar7 != lVar8) {
    plVar4[2] = lVar7 + -8;
    plVar5 = *(long **)(lVar7 + -8);
    *(undefined8 *)(lVar7 + -8) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    lVar7 = plVar4[2];
  }
  if (*plVar4 != 0) {
    func_0x000107c60e14();
  }
  auVar12._8_8_ = plVar9;
  auVar12._0_8_ = plVar4;
  return auVar12;
}



/* Entry: 104ad8248; end: 104ad8343;  */

undefined1  [16] FUN_104ad8248(long param_1,ulong param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long alStack_108 [8];
  long lStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long lStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(ulong *)(param_1 + 0x20) < param_2) {
    func_0x00010bdad878();
    lVar3 = param_1;
  }
  else {
    lVar3 = param_1;
    if (*(long *)(param_1 + 0x10) != 0) {
      unaff_x22 = 0;
      unaff_x23 = 0;
      unaff_x24 = (long)&uStack_78 + 1;
      uVar5 = param_2;
      do {
        plVar2 = (long *)(*(long *)(param_1 + 8) + unaff_x22);
        uStack_78 = plVar2[1];
        lStack_80 = *plVar2;
        lStack_68 = plVar2[3];
        uStack_70 = plVar2[2];
        unaff_x21 = uStack_78 & 0xff;
        param_2 = unaff_x24;
        if (lStack_80 != 0) {
          param_2 = uStack_70;
          unaff_x21 = uStack_78;
        }
        bVar1 = uVar5 < unaff_x21;
        uVar5 = uVar5 - unaff_x21;
        lVar3 = param_3;
        if (bVar1 || uVar5 == 0) {
          _memcpy(param_3);
          unaff_x19 = param_3;
          break;
        }
        _memcpy(param_3,param_2,unaff_x21);
        param_3 = param_3 + unaff_x21;
        unaff_x23 = unaff_x23 + 1;
        unaff_x22 = unaff_x22 + 0x20;
        unaff_x19 = param_3;
      } while (unaff_x23 < *(ulong *)(param_1 + 0x10));
    }
    unaff_x20 = param_1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      auVar10._8_8_ = param_2;
      auVar10._0_8_ = lVar3;
      return auVar10;
    }
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_104ad8344;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = (long *)0x2;
  uVar5 = param_2;
  uStack_c0 = unaff_x24;
  uStack_b8 = unaff_x23;
  lStack_b0 = unaff_x22;
  uStack_a8 = unaff_x21;
  lStack_a0 = unaff_x20;
  lStack_98 = unaff_x19;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x0001004686b8();
  if ((int)plVar2 != 0) {
    plVar2 = alStack_108;
    func_0x000107c616d0(plVar2,0x40,param_4,&lStack_80);
    if ((int)(uint)plVar2 < 0) {
      plVar4 = (long *)0x0;
      plVar2 = (long *)0x0;
    }
    else if ((uint)plVar2 < 0x40) {
      plVar2 = (long *)0x0;
      plVar4 = alStack_108;
    }
    else {
      plVar2 = (long *)(((ulong)plVar2 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar4 = plVar2;
    }
    FUN_104a6e9e0(lVar3,param_2,2,plVar4);
    func_0x000100460314();
    uVar5 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    auVar7._8_8_ = uVar5;
    auVar7._0_8_ = plVar2;
    return auVar7;
  }
  func_0x000107c60e78();
  if (uVar5 >> 0x3d == 0) {
    lVar3 = uVar5 << 3;
    func_0x000107c60e20(lVar3);
    auVar8._8_8_ = uVar5;
    auVar8._0_8_ = lVar3;
    return auVar8;
  }
  FUN_104a7757c();
  lVar3 = plVar2[1];
  lVar6 = plVar2[2];
  while (lVar6 != lVar3) {
    plVar2[2] = lVar6 + -8;
    plVar4 = *(long **)(lVar6 + -8);
    *(undefined8 *)(lVar6 + -8) = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    lVar6 = plVar2[2];
  }
  if (*plVar2 != 0) {
    func_0x000107c60e14();
  }
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = plVar2;
  return auVar9;
}



/* Entry: 104ad8344; end: 104ad8353;  */

undefined1  [16]
FUN_104ad8344(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104ad8354; end: 104ad8377;  */

void FUN_104ad8354(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_1107c6c88;
  return;
}



/* Entry: 104ad8378; end: 104ad837b;  */

void FUN_104ad8378(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104ad837c; end: 104ad839f;  */

undefined8 FUN_104ad837c(undefined8 param_1,undefined8 *param_2)

{
  func_0x00010047d598(*param_2,&PTR_DAT_1107c7238);
  return 1;
}



/* Entry: 104ad83a0; end: 104ad83db;  */

long FUN_104ad83a0(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c6ce8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104ad83dc; end: 104ad83ef;  */

undefined ** FUN_104ad83dc(void)

{
  return &PTR_DAT_1107c6ce8;
}



/* Entry: 104ad83f0; end: 104ad8413;  */

void FUN_104ad83f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_1107c6d08;
  return;
}



/* Entry: 104ad8414; end: 104ad8417;  */

void FUN_104ad8414(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104ad8418; end: 104ad843b;  */

undefined8 FUN_104ad8418(undefined8 param_1,undefined8 *param_2)

{
  func_0x000100560688(*param_2,&PTR_DAT_1107c73a0);
  return 1;
}



/* Entry: 104ad843c; end: 104ad8477;  */

long FUN_104ad843c(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c6d68);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104ad8478; end: 104ad8483;  */

undefined ** FUN_104ad8478(void)

{
  return &PTR_DAT_1107c6d68;
}



/* Entry: 104ad8484; end: 104ad85eb;  */

void FUN_104ad8484(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_c0 [72];
  long *plStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(ulong *)(param_2 + 8);
  func_0x0001006132c0();
  func_0x0001005a7e6c(param_1);
  lVar8 = (long)param_1 + 9;
  if (*param_1 != 0) {
    lVar8 = param_1[2];
  }
  func_0x000100460de4(auStack_c0);
  uVar10 = 0;
  do {
    lVar9 = param_2;
    func_0x000100836584(param_2,&plStack_78);
    plVar1 = plStack_78;
    if ((int)lVar9 == 0) {
      puVar7 = auStack_c0;
      func_0x000100467a48();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return;
      }
      ___stack_chk_fail();
      __Unwind_Resume();
      plVar1 = (long *)(puVar7 + 0x10);
      if (*plVar1 == 0) {
        lVar8 = *(long *)(puVar7 + 8);
        FUN_104ad8650();
        do {
          if (*plVar1 != 0) {
            ClearExclusiveLocal();
            func_0x0001005a5f48();
            return;
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return;
    }
    uVar2 = uStack_70 & 0xff;
    if (plStack_78 != (long *)0x0) {
      uVar2 = uStack_70;
    }
    lVar9 = (long)&uStack_70 + 1;
    if (plStack_78 != (long *)0x0) {
      lVar9 = lStack_68;
    }
    _memcpy(lVar8 + uVar10,lVar9,uVar2);
    if ((long *)0x1 < plVar1) {
      do {
        lVar9 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 + -1 == 0) {
        (*(code *)plVar1[1])(plVar1);
      }
    }
    uVar10 = uVar2 + uVar10;
  } while (uVar10 <= uVar6);
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/byte_buffer_reader.cc"
                      ,0x61,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x104ad858c);
  (*pcVar5)();
}



/* Entry: 104ad85ec; end: 104ad864f;  */

void FUN_104ad85ec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x10);
  if (*plVar1 == 0) {
    lVar4 = *(long *)(param_1 + 8);
    FUN_104ad8650();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        func_0x0001005a5f48();
        return;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 104ad8650; end: 104ad86bb;  */

ulong * FUN_104ad8650(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  do {
    uVar4 = *param_1;
    uVar1 = uVar4 + 0x50;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (param_1[2] < uVar1) {
    func_0x0001004bbee0(param_1,0x50);
  }
  else {
    param_1 = (ulong *)((long)param_1 + uVar4 + 0x30);
  }
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x000100460318(param_1);
  param_1[8] = 0;
  return param_1;
}



/* Entry: 104ad86bc; end: 104ad87eb;  */

long * FUN_104ad86bc(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong uStack_68;
  long *plStack_60;
  ulong uStack_58;
  long *plStack_50;
  long *plStack_48;
  
  puVar5 = (ulong *)param_2[1];
  do {
    uVar9 = *puVar5;
    uVar1 = uVar9 + 0x20;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar3) {
      *puVar5 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar5[2] < uVar1) {
    func_0x0001004bbee0(puVar5,0x20);
  }
  else {
    puVar5 = (ulong *)((long)puVar5 + uVar9 + 0x30);
  }
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = (ulong)param_3;
  param_2[3] = (long)puVar5;
  plVar8 = (long *)&UNK_10f47d354;
  plVar6 = param_3;
  (**(code **)(*param_3 + 0x60))();
  if ((char)param_2[5] == '\0') {
    func_0x00010bdad8e0();
  }
  else if ((char)param_3[5] == '\0') {
    uVar11 = (uint)param_4;
    if ((param_4 & 1) != 0) {
      lVar4 = param_3[4];
      if (param_2[4] <= param_3[4]) {
        lVar4 = param_2[4];
      }
      param_2[4] = lVar4;
    }
    if ((uVar11 >> 2 & 1) == 0) {
      if ((uVar11 >> 1 & 1) == 0) {
LAB_104ad87c4:
        if ((uVar11 >> 3 & 1) != 0) {
          *(undefined1 *)((long)param_2 + 0x29) = 1;
        }
        *param_1 = 0;
        return plVar6;
      }
    }
    else if ((uVar11 >> 1 & 1) != 0) {
      (**(code **)(*param_3 + 8))(param_3,1);
      plVar6 = param_2;
      (**(code **)*param_2)(param_2,1,param_3,0);
      goto LAB_104ad87c4;
    }
    *param_1 = 8;
    lVar4 = 0x28;
    func_0x000107c60e20();
    plStack_48 = (long *)0x0;
    func_0x000107c2b9d0();
    plVar8 = plStack_48;
    *param_1 = lVar4 + 1;
    plStack_48 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      func_0x0001008511e8();
      func_0x000107c60e14();
    }
    return param_1;
  }
  func_0x00010bdad914();
  lVar12 = plVar6[3];
  plVar7 = plVar8;
  plStack_60 = param_3;
  uStack_58 = param_4;
  plStack_50 = param_2;
  plStack_48 = param_1;
  FUN_104ad85ec();
  func_0x000100460448();
  lVar4 = plVar7[8];
  if (lVar4 == 0) {
    plVar7[8] = (long)plVar6;
    *(long **)(lVar12 + 0x10) = plVar6;
    puVar5 = (ulong *)(lVar12 + 8);
  }
  else {
    lVar10 = *(long *)(*(long *)(lVar4 + 0x18) + 0x10);
    *(long *)(lVar12 + 8) = lVar4;
    *(long *)(lVar12 + 0x10) = lVar10;
    *(long **)(*(long *)(lVar10 + 0x18) + 8) = plVar6;
    puVar5 = (ulong *)(*(long *)(*(long *)(lVar12 + 8) + 0x18) + 0x10);
  }
  *puVar5 = (ulong)plVar6;
  (**(code **)(*plVar8 + 0x10))();
  if ((int)plVar8 != 0) {
    uStack_68 = 4;
    (**(code **)(*plVar6 + 0x18))(plVar6,&uStack_68);
    if ((uStack_68 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  func_0x000100466b80(plVar7);
  return plVar7;
}



/* Entry: 104ad87ec; end: 104ad88df;  */

void FUN_104ad87ec(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uStack_38;
  
  lVar5 = param_1[3];
  plVar1 = param_2;
  FUN_104ad85ec();
  func_0x000100460448();
  lVar2 = plVar1[8];
  if (lVar2 == 0) {
    plVar1[8] = (long)param_1;
    *(long **)(lVar5 + 0x10) = param_1;
    plVar3 = (long *)(lVar5 + 8);
  }
  else {
    lVar4 = *(long *)(*(long *)(lVar2 + 0x18) + 0x10);
    *(long *)(lVar5 + 8) = lVar2;
    *(long *)(lVar5 + 0x10) = lVar4;
    *(long **)(*(long *)(lVar4 + 0x18) + 8) = param_1;
    plVar3 = (long *)(*(long *)(*(long *)(lVar5 + 8) + 0x18) + 0x10);
  }
  *plVar3 = (long)param_1;
  (**(code **)(*param_2 + 0x10))();
  if ((int)param_2 != 0) {
    uStack_38 = 4;
    (**(code **)(*param_1 + 0x18))(param_1,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  func_0x000100466b80(plVar1);
  return;
}



/* Entry: 104ad88e0; end: 104ad88e7;  */

long FUN_104ad88e0(long param_1)

{
  return param_1 + 0xdd0;
}



/* Entry: 104ad88e8; end: 104ad8a1b;  */

void FUN_104ad88e8(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  ulong uStack_38;
  
  plVar3 = (long *)(param_1 + 0xd78);
  do {
    if (*plVar3 != 0) {
      ClearExclusiveLocal();
      return;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar3 = (long *)(param_1 + 0xdd0);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = *plVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uStack_38 = *param_2;
  if ((uStack_38 & 1) != 0) {
    piVar6 = (int *)(uStack_38 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = *piVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_104aba128(param_1 + 0x38,&uStack_38);
  if ((uStack_38 & 1) != 0) {
    func_0x00010084dad0();
  }
  plVar3 = (long *)0x48;
  __Znwm();
  plVar4 = plVar3 + 5;
  *plVar3 = param_1;
  plVar3[6] = (long)FUN_104ad8ae0;
  plVar3[7] = (long)plVar3;
  plVar3[8] = 0;
  FUN_104adfedc();
  *(byte *)(plVar4 + 2) = *(byte *)(plVar4 + 2) | 0x40;
  lVar7 = plVar4[1];
  uVar5 = *(ulong *)(lVar7 + 0x98);
  uVar8 = *param_2;
  if (uVar8 != uVar5) {
    if ((uVar8 & 1) != 0) {
      piVar6 = (int *)(uVar8 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      uVar8 = *param_2;
    }
    *(ulong *)(lVar7 + 0x98) = uVar8;
    if ((uVar5 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  func_0x0001004bd700(param_1,plVar4,plVar3 + 1);
  return;
}



/* Entry: 104ad8a1c; end: 104ad8a87;  */

long * FUN_104ad8a1c(long param_1,long param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  if (param_2 == 0) {
    func_0x00010bdad948();
    lVar5 = param_1;
  }
  else {
    lVar5 = param_1 + 0xa0;
    lVar3 = param_2;
    FUN_104abe96c();
    uVar2 = (undefined4)lVar3;
    if (lVar5 == 0) {
      *(long *)(param_1 + 0x98) = param_2;
      func_0x0001004b85e8(param_2);
      func_0x0001004b85fc();
      func_0x0001004b8624();
      *(long *)(param_1 + 0xa0) = param_2;
      *(undefined4 *)(param_1 + 0xa8) = uVar2;
      plVar4 = (long *)(param_1 + 0xdd0);
      lVar5 = *(long *)(param_1 + 0xdf8);
      if (lVar5 != 0) {
        plVar6 = (long *)(param_1 + 0xe00);
        do {
          plVar4 = plVar6 + 3;
          (**(code **)(*plVar6 + 0x28))(plVar6,param_1 + 0xa0);
          lVar5 = lVar5 + -1;
          plVar6 = plVar4;
        } while (lVar5 != 0);
      }
      return plVar4;
    }
  }
  func_0x00010bdad97c();
  pcVar1 = *(char **)(lVar5 + 0x9d8);
  if (pcVar1 == (char *)0x0) {
    plVar4 = *(long **)(lVar5 + 0xb0);
    FUN_104ad935c();
    if (plVar4 != (long *)0x0) {
      return plVar4;
    }
    pcVar1 = "unknown";
  }
  if (pcVar1 == (char *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    func_0x000107c613d0();
    plVar4 = (long *)(pcVar1 + 1);
    func_0x000100460200(plVar4);
    func_0x000107c610b4();
  }
  return plVar4;
}



/* Entry: 104ad8a88; end: 104ad8ac7;  */

char * FUN_104ad8a88(long param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x9d8);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 0xb0);
    FUN_104ad935c();
    if (pcVar1 != (char *)0x0) {
      return pcVar1;
    }
    pcVar1 = "unknown";
  }
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    func_0x000107c613d0();
    pcVar1 = pcVar1 + 1;
    func_0x000100460200(pcVar1);
    func_0x000107c610b4();
  }
  return pcVar1;
}



/* Entry: 104ad8ac8; end: 104ad8adf;  */

void FUN_104ad8ac8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(param_1 + 0xdd0);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 104ad8ae0; end: 104ad8b37;  */

void FUN_104ad8ae0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  func_0x000100612044(*param_1 + 0x38,"on_complete for cancel_stream op");
  plVar1 = (long *)(*param_1 + 0xdd0);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    func_0x000100836ca4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 104ad8b38; end: 104ad8c6b;  */

void FUN_104ad8b38(long *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined1 *puStack_38;
  
  uVar1 = param_3;
  _strlen(param_3);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  FUN_104ab5920(&uStack_50,2,param_3,uVar1,&uStack_51,&uStack_70);
  uVar1 = param_3;
  _strlen(param_3);
  func_0x00010084caf8(&uStack_48,&uStack_50,5,param_3,uVar1);
  FUN_104abaa50(&uStack_40,&uStack_48,3,(long)param_2);
  (**(code **)(*param_1 + 0x18))(param_1,&uStack_40);
  if ((uStack_40 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uStack_48 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uStack_50 & 1) != 0) {
    func_0x00010084dad0();
  }
  puStack_38 = (undefined1 *)&uStack_70;
  func_0x000100482b64(&puStack_38);
  return;
}



/* Entry: 104ad8c6c; end: 104ad8d83;  */

void FUN_104ad8c6c(undefined8 *****param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *****pppppuVar2;
  char *pcVar3;
  undefined8 ****appppuStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = 0;
  FUN_104ab1444(param_2,&uStack_40);
  uStack_38 = uStack_40;
  puStack_30 = &UNK_1005616c4;
  func_0x0001004d4da0(appppuStack_58,"Compression algorithm \'%s\' is disabled.",0x27,&uStack_38,1);
  pcVar3 = "%s";
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                      ,0x49f,2);
  pppppuVar2 = (undefined8 *****)appppuStack_58[0];
  if (-1 < cStack_41) {
    pppppuVar2 = appppuStack_58;
  }
  uVar1 = 0xc;
  FUN_104ad8b38();
  if (cStack_41 < '\0') {
    param_1 = (undefined8 *****)appppuStack_58[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_41 < '\0') {
    __ZdlPv(appppuStack_58[0]);
  }
  __Unwind_Resume();
  uVar1 = uVar1 & 0xffffffff;
  if (param_1[uVar1 * 2 + 0x148] != (undefined8 ****)0x0) {
    (*(code *)param_1[uVar1 * 2 + 0x148])(param_1[uVar1 * 2 + 0x147]);
  }
  param_1[uVar1 * 2 + 0x147] = pppppuVar2;
  param_1[uVar1 * 2 + 0x148] = (undefined8 ****)pcVar3;
  return;
}



/* Entry: 104ad8d84; end: 104ad8dcf;  */

void FUN_104ad8d84(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  param_1 = param_1 + (ulong)param_2 * 0x10;
  if (*(code **)(param_1 + 0xa40) != (code *)0x0) {
    (**(code **)(param_1 + 0xa40))(*(undefined8 *)(param_1 + 0xa38));
  }
  *(undefined8 *)(param_1 + 0xa38) = param_3;
  *(undefined8 *)(param_1 + 0xa40) = param_4;
  return;
}



/* Entry: 104ad8dd0; end: 104ad8de7;  */

long FUN_104ad8dd0(long param_1)

{
  func_0x000104aab124();
  return param_1 + -0xdd0;
}



/* Entry: 104ad8de8; end: 104ad8e97;  */

long * FUN_104ad8de8(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_120 [72];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_88;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_2 == 0) {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001004b62b4(&uStack_38);
    func_0x000100460de4(auStack_80);
    uStack_88 = 4;
    (**(code **)(*param_1 + 0x18))(param_1,&uStack_88);
    if ((uStack_88 & 1) != 0) {
      func_0x00010084dad0();
    }
    func_0x000100467a48(auStack_80);
    func_0x0001004b6ddc(&uStack_38);
    return (long *)0x0;
  }
  func_0x00010bdada64();
  FUN_104bd46a0();
  func_0x0001004bdf74(&uStack_88);
  func_0x000100467a48(auStack_80);
  func_0x0001004b6ddc(&uStack_38);
  __Unwind_Resume();
  if (param_4 == 0) {
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x0001004b62b4(&uStack_d8,0);
    func_0x000100460de4(auStack_120);
    FUN_104ad8b38(param_1,param_2,param_3);
    func_0x000100467a48(auStack_120);
    func_0x0001004b6ddc(&uStack_d8);
    return (long *)0x0;
  }
  func_0x00010bdada98();
  func_0x000100467a48(auStack_120);
  func_0x0001004b6ddc(&uStack_d8);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x000104ad8f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return param_1;
}



/* Entry: 104ad8e98; end: 104ad8f37;  */

undefined8 * FUN_104ad8e98(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_4 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x0001004b62b4(&uStack_48,0);
    func_0x000100460de4(auStack_90);
    FUN_104ad8b38(param_1,param_2,param_3);
    func_0x000100467a48(auStack_90);
    func_0x0001004b6ddc(&uStack_48);
    return (undefined8 *)0x0;
  }
  func_0x00010bdada98();
  func_0x000100467a48(auStack_90);
  func_0x0001004b6ddc(&uStack_48);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x000104ad8f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return param_1;
}



/* Entry: 104ad8f38; end: 104ad8f43;  */

void FUN_104ad8f38(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104ad8f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}



/* Entry: 104ad8f44; end: 104ad8f9b;  */

void FUN_104ad8f44(long *param_1)

{
  (**(code **)(*param_1 + 0x38))();
  return;
}



/* Entry: 104ad8f9c; end: 104ad9027;  */

undefined8 FUN_104ad8f9c(long param_1,uint param_2)

{
  return *(undefined8 *)(param_1 + (ulong)param_2 * 0x10 + 0xa38);
}



/* Entry: 104ad9028; end: 104ad909b;  */

void FUN_104ad9028(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uStack_28;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar4;
  func_0x00010082ff88(param_1,&uStack_28);
  if ((uVar4 & 1) != 0) {
    func_0x00010084dad0(uVar4);
  }
  return;
}



/* Entry: 104ad909c; end: 104ad910f;  */

void FUN_104ad909c(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uStack_28;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar4;
  func_0x000100830d90(param_1,&uStack_28);
  if ((uVar4 & 1) != 0) {
    func_0x00010084dad0(uVar4);
  }
  return;
}



/* Entry: 104ad9110; end: 104ad9247;  */

/* WARNING: Possible PIC construction at 0x000104ad91e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104ad91e8) */
/* WARNING: Removing unreachable block (ram,0x000104ad91f0) */
/* WARNING: Removing unreachable block (ram,0x000104ad91f8) */
/* WARNING: Removing unreachable block (ram,0x000104ad9220) */
/* WARNING: Removing unreachable block (ram,0x000104ad9230) */
/* WARNING: Removing unreachable block (ram,0x000104ad9240) */
/* WARNING: Removing unreachable block (ram,0x000104ad92c4) */
/* WARNING: Removing unreachable block (ram,0x000104ad92cc) */
/* WARNING: Removing unreachable block (ram,0x000104ad92d4) */
/* WARNING: Removing unreachable block (ram,0x000104ad92d8) */
/* WARNING: Removing unreachable block (ram,0x000104ad92e0) */
/* WARNING: Removing unreachable block (ram,0x000104ad930c) */
/* WARNING: Removing unreachable block (ram,0x000104ad9314) */
/* WARNING: Removing unreachable block (ram,0x000104ad9318) */
/* WARNING: Removing unreachable block (ram,0x000104ad92f8) */
/* WARNING: Removing unreachable block (ram,0x000104ad9210) */

undefined1  [16] FUN_104ad9110(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_138 [8];
  long lStack_f8;
  undefined8 **appuStack_b0 [2];
  undefined8 **appuStack_a0 [2];
  char cStack_89;
  char *pcStack_88;
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  param_1 = (long *)*param_1;
  lStack_78 = (long)param_1 + 9;
  if (*param_1 != 0) {
    lStack_78 = param_1[2];
  }
  uStack_70 = param_1[1] & 0xff;
  if (*param_1 != 0) {
    uStack_70 = param_1[1];
  }
  uStack_30 = param_4[1] & 0xff;
  lStack_38 = (long)param_4 + 9;
  if (*param_4 != 0) {
    uStack_30 = param_4[1];
    lStack_38 = param_4[2];
  }
  pcStack_88 = "key=";
  uStack_80 = 4;
  pcStack_68 = " error=";
  uStack_60 = 7;
  pcStack_48 = " value=";
  uStack_40 = 7;
  uStack_58 = param_2;
  uStack_50 = param_3;
  func_0x00010ae8c7e0(appuStack_a0,&pcStack_88,6);
  appuStack_b0[0] = appuStack_a0[0];
  if (-1 < cStack_89) {
    appuStack_b0[0] = appuStack_a0;
  }
  uVar4 = 0x35c;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x0;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_138;
    func_0x000107c616d0(plVar1,0x40,"Append error: %s",appuStack_b0);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_138;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    uVar4 = 0x35c;
    FUN_104a6e9e0("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                  ,0x35c,0,plVar3);
    func_0x000100460314();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    func_0x000107c60e78();
    if (uVar4 >> 0x3d != 0) {
      FUN_104a7757c();
      lVar2 = plVar1[1];
      lVar5 = plVar1[2];
      while (lVar5 != lVar2) {
        plVar1[2] = lVar5 + -8;
        plVar3 = *(long **)(lVar5 + -8);
        *(undefined8 *)(lVar5 + -8) = 0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        lVar5 = plVar1[2];
      }
      if (*plVar1 != 0) {
        func_0x000107c60e14();
      }
      auVar8._8_8_ = uVar4;
      auVar8._0_8_ = plVar1;
      return auVar8;
    }
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = plVar1;
  return auVar6;
}



/* Entry: 104ad9248; end: 104ad931b;  */

undefined1  [16]
FUN_104ad9248(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long alStack_108 [8];
  long lStack_c8;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_2;
  FUN_104a7a584(&plStack_80,param_4);
  uStack_58 = uStack_78;
  plStack_60 = plStack_80;
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  plVar7 = (long *)*param_1;
  lVar9 = *plVar7;
  *plVar7 = lVar9 + 1;
  puVar8 = (undefined8 *)(plVar7[2] + lVar9 * 0x60);
  *puVar8 = 1;
  puVar8[1] = param_3;
  puVar8[2] = param_2;
  puVar8[5] = uStack_78;
  puVar8[4] = plStack_80;
  puVar8[7] = uStack_68;
  puVar8[6] = uStack_70;
  plVar7 = plStack_80;
  if ((long *)0x1 < plStack_80) {
    do {
      lVar9 = *plStack_80;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar2) {
        *plStack_80 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) {
      (*(code *)plStack_80[1])();
      plVar7 = plStack_80;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar14._8_8_ = uVar5;
    auVar14._0_8_ = plVar7;
    return auVar14;
  }
  ___stack_chk_fail();
  if ((int)uVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)0x2;
  uVar4 = uVar5;
  func_0x0001004686b8();
  if ((int)plVar3 != 0) {
    plVar3 = alStack_108;
    func_0x000107c616d0(plVar3,0x40,param_4,&plStack_80);
    if ((int)(uint)plVar3 < 0) {
      plVar10 = (long *)0x0;
      plVar3 = (long *)0x0;
    }
    else if ((uint)plVar3 < 0x40) {
      plVar3 = (long *)0x0;
      plVar10 = alStack_108;
    }
    else {
      plVar3 = (long *)(((ulong)plVar3 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar10 = plVar3;
    }
    FUN_104a6e9e0(plVar7,uVar5,2,plVar10);
    func_0x000100460314();
    uVar4 = uVar5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    auVar11._8_8_ = uVar4;
    auVar11._0_8_ = plVar3;
    return auVar11;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar9 = uVar4 << 3;
    func_0x000107c60e20(lVar9);
    auVar12._8_8_ = uVar4;
    auVar12._0_8_ = lVar9;
    return auVar12;
  }
  FUN_104a7757c();
  lVar9 = plVar3[1];
  lVar6 = plVar3[2];
  while (lVar6 != lVar9) {
    plVar3[2] = lVar6 + -8;
    plVar7 = *(long **)(lVar6 + -8);
    *(undefined8 *)(lVar6 + -8) = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    lVar6 = plVar3[2];
  }
  if (*plVar3 != 0) {
    func_0x000107c60e14();
  }
  auVar13._8_8_ = uVar4;
  auVar13._0_8_ = plVar3;
  return auVar13;
}



/* Entry: 104ad931c; end: 104ad9323;  */

undefined1  [16]
FUN_104ad931c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104ad9324; end: 104ad935b;  */

long FUN_104ad9324(long param_1)

{
  FUN_104ad9960(param_1 + 0x40,*(undefined8 *)(param_1 + 0x48));
  func_0x0001005a5f48(param_1);
  return param_1;
}



/* Entry: 104ad935c; end: 104ad939b;  */

void FUN_104ad935c(long param_1)

{
  ulong uVar1;
  
  if ((char)*(byte *)(param_1 + 0xbf) < '\0') {
    uVar1 = *(ulong *)(param_1 + 0xb0);
  }
  else {
    uVar1 = (ulong)*(byte *)(param_1 + 0xbf);
  }
  func_0x000100460860(uVar1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)();
  return;
}



/* Entry: 104ad939c; end: 104ad95e3;  */

undefined8 *
FUN_104ad939c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_120 [72];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char cStack_a0;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_9 != 0) {
    func_0x00010bdadb04();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104ad9584);
    (*pcVar3)();
  }
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  func_0x0001004b62b4(&uStack_d8,0);
  func_0x000100460de4(auStack_120);
  plVar6 = (long *)*param_5;
  if ((long *)0x1 < plVar6) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_88 = param_5[1];
  plStack_90 = (long *)*param_5;
  uStack_78 = param_5[3];
  uStack_80 = param_5[2];
  if (param_6 == (undefined8 *)0x0) {
    cStack_a0 = '\0';
    plStack_c0 = (long *)((ulong)plStack_c0 & 0xffffffffffffff00);
  }
  else {
    plVar6 = (long *)*param_6;
    if ((long *)0x1 < plVar6) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_b8 = param_6[1];
    plStack_c0 = (long *)*param_6;
    uStack_a8 = param_6[3];
    uStack_b0 = param_6[2];
    cStack_a0 = '\x01';
  }
  func_0x000100491618(param_7,param_8);
  func_0x0001004b7680(param_1,param_2,param_3,param_4,0,&plStack_90,&plStack_c0,param_7);
  iVar5 = (int)param_2;
  if (param_6 == (undefined8 *)0x0) {
    if ((cStack_a0 != '\0') && ((long *)0x1 < plStack_c0)) {
      do {
        lVar7 = *plStack_c0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_c0,0x10);
        if (bVar2) {
          *plStack_c0 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_c0[1])();
      }
    }
  }
  else if ((cStack_a0 != '\0') && ((long *)0x1 < plStack_c0)) {
    do {
      lVar7 = *plStack_c0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_c0,0x10);
      if (bVar2) {
        *plStack_c0 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_c0[1])();
    }
  }
  if ((long *)0x1 < plStack_90) {
    do {
      lVar7 = *plStack_90;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
      if (bVar2) {
        *plStack_90 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_90[1])();
    }
  }
  func_0x000100467a48(auStack_120);
  puVar4 = &uStack_d8;
  func_0x0001004b6ddc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6ddc(&uStack_d8);
  }
  __Unwind_Resume();
  func_0x0001004b6d60(puVar4 + 6);
  if (*(char *)((long)puVar4 + 0x2f) < '\0') {
    __ZdlPv(puVar4[3]);
  }
  if (*(char *)((long)puVar4 + 0x17) < '\0') {
    __ZdlPv(*puVar4);
  }
  return puVar4;
}



/* Entry: 104ad95e4; end: 104ad966b;  */

undefined8 * FUN_104ad95e4(undefined8 *param_1)

{
  func_0x0001004b6d60(param_1 + 6);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 104ad966c; end: 104ad97bb;  */

void FUN_104ad966c(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  ulong uStack_30;
  undefined1 *puStack_28;
  
  lVar3 = 0;
  func_0x0001008daf18();
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  FUN_104ab5920(&uStack_30,2,"Channel Destroyed",0x11,&uStack_31,&uStack_50);
  uVar4 = *(ulong *)(lVar3 + 0x20);
  if (uStack_30 != uVar4) {
    *(ulong *)(lVar3 + 0x20) = uStack_30;
    uStack_30 = 0x36;
    if ((uVar4 & 1) == 0) goto LAB_104ad96e4;
    func_0x00010084dad0();
    uVar4 = uStack_30;
  }
  if ((uVar4 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104ad96e4:
  puStack_28 = (undefined1 *)&uStack_50;
  func_0x000100482b64(&puStack_28);
  plVar5 = (long *)param_1[0x18];
  func_0x0001004868b0(plVar5,0);
  (**(code **)(*plVar5 + 0x10))();
  plVar5 = param_1 + 1;
  do {
    lVar3 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}



/* Entry: 104ad97bc; end: 104ad9837;  */

void FUN_104ad97bc(undefined8 param_1)

{
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001004b62b4(&uStack_38,0);
  func_0x000100460de4(auStack_80);
  FUN_104ad966c(param_1);
  func_0x000100467a48(auStack_80);
  func_0x0001004b6ddc(&uStack_38);
  return;
}



/* Entry: 104ad9838; end: 104ad98cb;  */

undefined8 * FUN_104ad9838(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_1107c6ef0;
  func_0x0001004868c0(param_1 + 0x18);
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    __ZdlPv(param_1[0x15]);
  }
  func_0x000100487bf4(param_1 + 0x13);
  plVar4 = (long *)param_1[0x12];
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
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  FUN_104ad9960(param_1 + 0xe,param_1[0xf]);
  func_0x0001005a5f48(param_1 + 6);
  return param_1;
}



/* Entry: 104ad98cc; end: 104ad995f;  */

void FUN_104ad98cc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_1107c6ef0;
  func_0x0001004868c0(param_1 + 0x18);
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    __ZdlPv(param_1[0x15]);
  }
  func_0x000100487bf4(param_1 + 0x13);
  plVar4 = (long *)param_1[0x12];
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
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  FUN_104ad9960(param_1 + 0xe,param_1[0xf]);
  func_0x0001005a5f48(param_1 + 6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 104ad9960; end: 104ad99f3;  */

void FUN_104ad9960(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_104ad9960(param_1,*param_2);
    FUN_104ad9960(param_1,param_2[1]);
    func_0x000104ad99a8(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 104ad99f4; end: 104ad9a07;  */

uint FUN_104ad99f4(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 < param_1);
  if (param_1 < param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 104ad9a08; end: 104ad9b83;  */

long * FUN_104ad9a08(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if ((char)param_1[0x10] != '\0') {
    func_0x0001004b6d90(param_1 + 0xc);
  }
  if ((char)param_1[0xb] != '\0') {
    func_0x0001004b6d90(param_1 + 7);
  }
  plVar4 = (long *)*param_1;
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
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  return param_1;
}



/* Entry: 104ad9b84; end: 104ad9be7;  */

void FUN_104ad9b84(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_DAT_1107c6f88;
  param_2[1] = 0;
  uVar4 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar4 = *(undefined8 *)(param_1 + 8);
  }
  param_2[1] = uVar4;
  return;
}



/* Entry: 104ad9be8; end: 104ad9ceb;  */

void FUN_104ad9be8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 8);
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
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 104ad9cec; end: 104ad9cff;  */

undefined ** FUN_104ad9cec(void)

{
  return &PTR_DAT_1107c6fe8;
}



/* Entry: 104ad9d00; end: 104ad9d13;  */

void FUN_104ad9d00(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_104a6fa70();
  plVar4 = *(long **)(*(long *)(puVar1 + 0x10) + 8);
  plVar5 = *(long **)(*(long *)(puVar1 + 8) + 8);
  do {
    if (plVar4 == plVar5) {
      return;
    }
    plVar2 = (long *)plVar4[3];
    if (plVar4 == plVar2) {
      lVar3 = 4;
      plVar2 = plVar4;
LAB_104ad9d54:
      (**(code **)(*plVar2 + lVar3 * 8))();
    }
    else if (plVar2 != (long *)0x0) {
      lVar3 = 5;
      goto LAB_104ad9d54;
    }
    plVar4 = plVar4 + 5;
  } while( true );
}



/* Entry: 104ad9d14; end: 104ad9d73;  */

void FUN_104ad9d14(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(*(long *)(param_1 + 0x10) + 8);
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 8);
  do {
    if (plVar3 == plVar4) {
      return;
    }
    plVar1 = (long *)plVar3[3];
    if (plVar3 == plVar1) {
      lVar2 = 4;
      plVar1 = plVar3;
LAB_104ad9d54:
      (**(code **)(*plVar1 + lVar2 * 8))();
    }
    else if (plVar1 != (long *)0x0) {
      lVar2 = 5;
      goto LAB_104ad9d54;
    }
    plVar3 = plVar3 + 5;
  } while( true );
}



/* Entry: 104ad9d74; end: 104ad9e43;  */

void FUN_104ad9d74(long *param_1,long *param_2,long *param_3,long param_4,long param_5,long param_6,
                  long param_7)

{
  long *plVar1;
  undefined1 *puVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plStack_100;
  long *plStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long lStack_e0;
  undefined1 uStack_d1;
  undefined1 auStack_d0 [32];
  long alStack_50 [3];
  long *plStack_38;
  undefined4 uStack_30;
  long lStack_28;
  
  plVar6 = alStack_50;
  plVar4 = alStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *param_1;
  lVar11 = *param_2;
  func_0x0001004734d8(alStack_50,lVar12);
  uStack_30 = *(undefined4 *)(lVar12 + 0x20);
  func_0x0001004768d4(lVar12,lVar11);
  *(undefined4 *)(lVar12 + 0x20) = *(undefined4 *)(lVar11 + 0x20);
  func_0x0001004768d4(lVar11);
  *(undefined4 *)(lVar11 + 0x20) = uStack_30;
  if (plStack_38 == alStack_50) {
    lVar11 = 4;
  }
  else {
    plVar4 = plStack_38;
    if (plStack_38 == (long *)0x0) goto LAB_104ad9e08;
    lVar11 = 5;
  }
  (**(code **)(*plVar4 + lVar11 * 8))();
LAB_104ad9e08:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  iVar5 = (int)plVar6;
  while (iVar5 != 0) {
    FUN_104bd46a0();
    iVar5 = (int)plVar6;
  }
  __Unwind_Resume();
  plStack_f8 = plVar4;
  plStack_100 = plVar6;
  while( true ) {
    if (param_5 == 0) {
      return;
    }
    if ((param_5 <= param_7) || (param_4 <= param_7)) break;
    if (param_4 == 0) {
      return;
    }
    lVar11 = 0;
    lVar12 = -param_4;
    while (plVar1 = (long *)((long)plVar4 + lVar11), (int)plVar1[4] <= (int)plVar6[4]) {
      lVar11 = lVar11 + 0x28;
      bVar3 = lVar12 == -1;
      lVar12 = lVar12 + 1;
      if (bVar3) {
        return;
      }
    }
    param_4 = -lVar12;
    plStack_f8 = plVar1;
    if (param_4 < param_5) {
      lVar7 = param_5;
      if (param_5 < 0) {
        lVar7 = param_5 + 1;
      }
      lVar7 = lVar7 >> 1;
      puVar2 = (undefined1 *)((long)plVar6 + (-lVar11 - (long)plVar4));
      plVar13 = plVar6;
      if (puVar2 != (undefined1 *)0x0) {
        uVar8 = ((long)puVar2 >> 3) * -0x3333333333333333;
        plVar13 = plVar1;
        do {
          uVar9 = uVar8 >> 1;
          uVar10 = uVar8 + (uVar8 >> 1 ^ 0xffffffffffffffff);
          uVar8 = uVar9;
          if ((int)plVar13[uVar9 * 5 + 4] <= (int)plVar6[lVar7 * 5 + 4]) {
            uVar8 = uVar10;
            plVar13 = plVar13 + uVar9 * 5 + 5;
          }
        } while (uVar8 != 0);
      }
      plVar14 = plVar6 + lVar7 * 5;
      param_4 = ((long)((long)plVar13 + (-lVar11 - (long)plVar4)) >> 3) * -0x3333333333333333;
    }
    else {
      if (lVar12 == -1) {
        plStack_100 = plVar6;
        FUN_104ad9d74(&plStack_f8,&plStack_100);
        return;
      }
      if (param_4 < 0) {
        param_4 = param_4 + 1;
      }
      param_4 = param_4 >> 1;
      plVar14 = param_3;
      if ((long)param_3 - (long)plVar6 != 0) {
        uVar8 = ((long)param_3 - (long)plVar6 >> 3) * -0x3333333333333333;
        plVar13 = plVar6;
        do {
          uVar10 = uVar8 >> 1;
          plVar14 = plVar13 + uVar10 * 5 + 5;
          uVar8 = uVar8 + (uVar8 >> 1 ^ 0xffffffffffffffff);
          if (*(int *)((long)plVar4 + lVar11 + param_4 * 0x28 + 0x20) <=
              (int)plVar13[uVar10 * 5 + 4]) {
            plVar14 = plVar13;
            uVar8 = uVar10;
          }
          plVar13 = plVar14;
        } while (uVar8 != 0);
      }
      plVar13 = (long *)((long)plVar4 + lVar11 + param_4 * 0x28);
      lVar7 = ((long)plVar14 - (long)plVar6 >> 3) * -0x3333333333333333;
    }
    plVar16 = plVar14;
    if ((plVar13 != plVar6) && (plVar16 = plVar13, plVar6 != plVar14)) {
      FUN_104ada3e4(plVar13,plVar6,plVar14);
    }
    if (param_4 + lVar7 < (param_5 - (param_4 + lVar7)) - lVar12) {
      FUN_104ad9e44(plVar1,plVar13,plVar16,param_4);
      plVar4 = plVar16;
      plStack_f8 = plVar16;
      plVar6 = plVar14;
      param_4 = -(param_4 + lVar12);
      param_5 = param_5 - lVar7;
    }
    else {
      FUN_104ad9e44(plVar16,plVar14,param_3,-(param_4 + lVar12),param_5 - lVar7);
      plVar4 = plVar1;
      plVar6 = plVar13;
      param_3 = plVar16;
      param_5 = lVar7;
    }
  }
  plStack_e8 = &lStack_e0;
  lStack_e0 = 0;
  lStack_f0 = param_6;
  if (param_5 < param_4) {
    plStack_100 = plVar6;
    if (plVar6 != param_3) {
      lVar11 = 0;
      do {
        lVar12 = param_6 + lVar11;
        func_0x0001004734d8(lVar12,(undefined1 *)((long)plVar6 + lVar11));
        *(undefined4 *)(lVar12 + 0x20) =
             *(undefined4 *)((undefined1 *)((long)plVar6 + lVar11) + 0x20);
        lStack_e0 = lStack_e0 + 1;
        lVar11 = lVar11 + 0x28;
      } while ((long *)((long)plVar6 + lVar11) != param_3);
      if (lVar11 != 0) {
        plVar14 = param_3;
        lVar12 = param_6 + lVar11;
        plVar1 = param_3;
        do {
          plVar13 = plVar1 + -5;
          if (plVar6 == plVar4) {
            FUN_104ada354(auStack_d0,&uStack_d1,param_6 + lVar11,lVar12,param_6,param_6,param_3,
                          plVar14);
            break;
          }
          plVar16 = (long *)(lVar12 + -8);
          plVar15 = plVar6 + -1;
          if (*(int *)plVar16 < (int)*plVar15) {
            plVar6 = plVar6 + -5;
            func_0x0001004768d4(plVar13,plVar6);
            plVar16 = plVar15;
          }
          else {
            lVar12 = lVar12 + -0x28;
            func_0x0001004768d4(plVar13,lVar12);
          }
          *(int *)(plVar1 + -1) = (int)*plVar16;
          plVar14 = plVar14 + -5;
          plVar1 = plVar13;
        } while (lVar12 != param_6);
      }
    }
  }
  else {
    plStack_100 = plVar6;
    if (plVar4 != plVar6) {
      lVar11 = 0;
      do {
        lVar12 = param_6 + lVar11;
        func_0x0001004734d8(lVar12,(undefined1 *)((long)plVar4 + lVar11));
        *(undefined4 *)(lVar12 + 0x20) =
             *(undefined4 *)((undefined1 *)((long)plVar4 + lVar11) + 0x20);
        lStack_e0 = lStack_e0 + 1;
        lVar11 = lVar11 + 0x28;
      } while ((long *)((long)plVar4 + lVar11) != plVar6);
      if (lVar11 != 0) {
        lVar11 = param_6 + lVar11;
        do {
          if (plVar6 == param_3) {
            FUN_104ada2e8(auStack_d0,param_6,lVar11,plVar4);
            break;
          }
          if ((int)plVar6[4] < *(int *)(param_6 + 0x20)) {
            func_0x0001004768d4(plVar4,plVar6);
            *(int *)(plVar4 + 4) = (int)plVar6[4];
            plVar6 = plVar6 + 5;
          }
          else {
            func_0x0001004768d4(plVar4,param_6);
            *(undefined4 *)(plVar4 + 4) = *(undefined4 *)(param_6 + 0x20);
            param_6 = param_6 + 0x28;
          }
          plVar4 = plVar4 + 5;
        } while (lVar11 != param_6);
      }
    }
  }
  func_0x00010047696c(&lStack_f0,0);
  return;
}



/* Entry: 104ad9e44; end: 104ada2e7;  */

void FUN_104ad9e44(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  int *piVar10;
  long lVar11;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  undefined1 uStack_81;
  undefined1 auStack_80 [32];
  
  lStack_b0 = param_2;
  lStack_a8 = param_1;
  while( true ) {
    if (param_5 == 0) {
      return;
    }
    if ((param_5 <= param_7) || (param_4 <= param_7)) break;
    if (param_4 == 0) {
      return;
    }
    lVar3 = 0;
    lVar11 = -param_4;
    while (lVar7 = param_1 + lVar3, *(int *)(lVar7 + 0x20) <= *(int *)(param_2 + 0x20)) {
      lVar3 = lVar3 + 0x28;
      bVar1 = lVar11 == -1;
      lVar11 = lVar11 + 1;
      if (bVar1) {
        return;
      }
    }
    param_4 = -lVar11;
    lStack_a8 = lVar7;
    if (param_4 < param_5) {
      lVar2 = param_5;
      if (param_5 < 0) {
        lVar2 = param_5 + 1;
      }
      lVar2 = lVar2 >> 1;
      lVar6 = (param_2 - param_1) - lVar3;
      lVar8 = param_2;
      if (lVar6 != 0) {
        uVar4 = (lVar6 >> 3) * -0x3333333333333333;
        lVar8 = lVar7;
        do {
          lVar6 = lVar8 + (uVar4 >> 1) * 0x28;
          uVar5 = uVar4 + (uVar4 >> 1 ^ 0xffffffffffffffff);
          uVar4 = uVar4 >> 1;
          if (*(int *)(lVar6 + 0x20) <= *(int *)(param_2 + lVar2 * 0x28 + 0x20)) {
            uVar4 = uVar5;
            lVar8 = lVar6 + 0x28;
          }
        } while (uVar4 != 0);
      }
      lVar6 = param_2 + lVar2 * 0x28;
      param_4 = ((lVar8 - param_1) - lVar3 >> 3) * -0x3333333333333333;
    }
    else {
      if (lVar11 == -1) {
        lStack_b0 = param_2;
        FUN_104ad9d74(&lStack_a8,&lStack_b0);
        return;
      }
      if (param_4 < 0) {
        param_4 = param_4 + 1;
      }
      param_4 = param_4 >> 1;
      lVar6 = param_3;
      if (param_3 - param_2 != 0) {
        uVar4 = (param_3 - param_2 >> 3) * -0x3333333333333333;
        lVar8 = param_2;
        do {
          uVar5 = uVar4 >> 1;
          lVar2 = lVar8 + uVar5 * 0x28;
          lVar6 = lVar2 + 0x28;
          uVar4 = uVar4 + (uVar4 >> 1 ^ 0xffffffffffffffff);
          if (*(int *)(param_1 + param_4 * 0x28 + lVar3 + 0x20) <= *(int *)(lVar2 + 0x20)) {
            lVar6 = lVar8;
            uVar4 = uVar5;
          }
          lVar8 = lVar6;
        } while (uVar4 != 0);
      }
      lVar8 = param_1 + param_4 * 0x28 + lVar3;
      lVar2 = (lVar6 - param_2 >> 3) * -0x3333333333333333;
    }
    lVar3 = lVar6;
    if ((lVar8 != param_2) && (lVar3 = lVar8, param_2 != lVar6)) {
      FUN_104ada3e4(lVar8,param_2,lVar6);
    }
    if (param_4 + lVar2 < (param_5 - (param_4 + lVar2)) - lVar11) {
      FUN_104ad9e44(lVar7,lVar8,lVar3,param_4);
      param_2 = lVar6;
      param_1 = lVar3;
      lStack_a8 = lVar3;
      param_5 = param_5 - lVar2;
      param_4 = -(param_4 + lVar11);
    }
    else {
      FUN_104ad9e44(lVar3,lVar6,param_3,-(param_4 + lVar11),param_5 - lVar2);
      param_2 = lVar8;
      param_1 = lVar7;
      param_5 = lVar2;
      param_3 = lVar3;
    }
  }
  plStack_98 = &lStack_90;
  lStack_90 = 0;
  lStack_a0 = param_6;
  if (param_5 < param_4) {
    lStack_b0 = param_2;
    if (param_2 != param_3) {
      lVar3 = 0;
      do {
        lVar11 = param_6 + lVar3;
        func_0x0001004734d8(lVar11,param_2 + lVar3);
        *(undefined4 *)(lVar11 + 0x20) = *(undefined4 *)(param_2 + lVar3 + 0x20);
        lStack_90 = lStack_90 + 1;
        lVar3 = lVar3 + 0x28;
      } while (param_2 + lVar3 != param_3);
      if (lVar3 != 0) {
        lVar7 = param_3;
        lVar6 = param_6 + lVar3;
        lVar11 = param_3;
        do {
          lVar8 = lVar11 + -0x28;
          if (param_2 == param_1) {
            FUN_104ada354(auStack_80,&uStack_81,param_6 + lVar3,lVar6,param_6,param_6,param_3,lVar7)
            ;
            break;
          }
          piVar10 = (int *)(lVar6 + -8);
          piVar9 = (int *)(param_2 + -8);
          if (*piVar10 < *piVar9) {
            param_2 = param_2 + -0x28;
            func_0x0001004768d4(lVar8,param_2);
            piVar10 = piVar9;
          }
          else {
            lVar6 = lVar6 + -0x28;
            func_0x0001004768d4(lVar8,lVar6);
          }
          *(int *)(lVar11 + -8) = *piVar10;
          lVar7 = lVar7 + -0x28;
          lVar11 = lVar8;
        } while (lVar6 != param_6);
      }
    }
  }
  else {
    lStack_b0 = param_2;
    if (param_1 != param_2) {
      lVar3 = 0;
      do {
        lVar11 = param_6 + lVar3;
        func_0x0001004734d8(lVar11,param_1 + lVar3);
        *(undefined4 *)(lVar11 + 0x20) = *(undefined4 *)(param_1 + lVar3 + 0x20);
        lStack_90 = lStack_90 + 1;
        lVar3 = lVar3 + 0x28;
      } while (param_1 + lVar3 != param_2);
      if (lVar3 != 0) {
        lVar3 = param_6 + lVar3;
        do {
          if (param_2 == param_3) {
            FUN_104ada2e8(auStack_80,param_6,lVar3,param_1);
            break;
          }
          if (*(int *)(param_2 + 0x20) < *(int *)(param_6 + 0x20)) {
            func_0x0001004768d4(param_1,param_2);
            *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
            param_2 = param_2 + 0x28;
          }
          else {
            func_0x0001004768d4(param_1,param_6);
            *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_6 + 0x20);
            param_6 = param_6 + 0x28;
          }
          param_1 = param_1 + 0x28;
        } while (lVar3 != param_6);
      }
    }
  }
  func_0x00010047696c(&lStack_a0,0);
  return;
}



/* Entry: 104ada2e8; end: 104ada353;  */

undefined1  [16] FUN_104ada2e8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    func_0x0001004768d4(param_4,param_2);
    *(undefined4 *)(param_4 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    param_4 = param_4 + 0x28;
    lVar1 = param_3;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Entry: 104ada354; end: 104ada3e3;  */

void FUN_104ada354(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  
  lVar1 = param_4;
  while (param_4 != param_6) {
    func_0x0001004768d4(param_8 + -0x28,param_4 + -0x28);
    *(undefined4 *)(param_8 + -8) = *(undefined4 *)(param_4 + -8);
    param_8 = param_8 + -0x28;
    param_4 = param_4 + -0x28;
    lVar1 = param_6;
  }
  *param_1 = param_3;
  param_1[1] = lVar1;
  param_1[2] = param_7;
  param_1[3] = param_8;
  return;
}



/* Entry: 104ada3e4; end: 104ada493;  */

long FUN_104ada3e4(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lStack_40 = param_2;
  lStack_38 = param_1;
  while( true ) {
    lVar2 = param_2;
    FUN_104ad9d74(&lStack_38,&lStack_40);
    lVar1 = lStack_38 + 0x28;
    lStack_40 = lStack_40 + 0x28;
    lStack_38 = lVar1;
    if (lStack_40 == param_3) break;
    param_2 = lStack_40;
    if (lVar1 != lVar2) {
      param_2 = lVar2;
    }
  }
  lStack_40 = lVar2;
  if (lVar1 != lVar2) {
    do {
      while( true ) {
        lVar3 = lVar2;
        FUN_104ad9d74(&lStack_38,&lStack_40);
        lStack_38 = lStack_38 + 0x28;
        lStack_40 = lStack_40 + 0x28;
        if (lStack_40 == param_3) break;
        lVar2 = lStack_40;
        if (lStack_38 != lVar3) {
          lVar2 = lVar3;
        }
      }
      lVar2 = lVar3;
      lStack_40 = lVar3;
    } while (lStack_38 != lVar3);
  }
  return lVar1;
}



/* Entry: 104ada494; end: 104ada4a7;  */

void FUN_104ada494(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_104a6fa70();
  plVar4 = *(long **)(*(long *)(puVar1 + 0x10) + 8);
  plVar5 = *(long **)(*(long *)(puVar1 + 8) + 8);
  do {
    if (plVar4 == plVar5) {
      return;
    }
    plVar2 = (long *)plVar4[3];
    if (plVar4 == plVar2) {
      lVar3 = 4;
      plVar2 = plVar4;
LAB_104ada4e8:
      (**(code **)(*plVar2 + lVar3 * 8))();
    }
    else if (plVar2 != (long *)0x0) {
      lVar3 = 5;
      goto LAB_104ada4e8;
    }
    plVar4 = plVar4 + 4;
  } while( true );
}



/* Entry: 104ada4a8; end: 104ada507;  */

void FUN_104ada4a8(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(*(long *)(param_1 + 0x10) + 8);
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 8);
  do {
    if (plVar3 == plVar4) {
      return;
    }
    plVar1 = (long *)plVar3[3];
    if (plVar3 == plVar1) {
      lVar2 = 4;
      plVar1 = plVar3;
LAB_104ada4e8:
      (**(code **)(*plVar1 + lVar2 * 8))();
    }
    else if (plVar1 != (long *)0x0) {
      lVar2 = 5;
      goto LAB_104ada4e8;
    }
    plVar3 = plVar3 + 4;
  } while( true );
}



/* Entry: 104ada508; end: 104ada54b;  */

void FUN_104ada508(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if ((char)param_1[0x17] == '\0') {
    func_0x00010bdadba0();
  }
  else if (param_1[0x16] == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104ada540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[3] + 0x28))((long)param_1 + *(long *)(param_1[2] + 8) + 0x48,param_1 + 4);
    return;
  }
  func_0x00010bdadbd4();
  do {
    lVar3 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 != 0) {
    return;
  }
  (**(code **)(param_1[2] + 0x20))(param_1 + 9);
  (**(code **)(param_1[3] + 0x30))((long)(param_1 + 9) + *(long *)(param_1[2] + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 104ada54c; end: 104ada55b;  */

void FUN_104ada54c(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  do {
    lVar3 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 != 0) {
    return;
  }
  (**(code **)(param_1[2] + 0x20))(param_1 + 9);
  (**(code **)(param_1[3] + 0x30))((long)(param_1 + 9) + *(long *)(param_1[2] + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 104ada55c; end: 104ada5df;  */

void FUN_104ada55c(long param_1)

{
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001004b62b4(&uStack_38,0);
  func_0x000100460de4(auStack_80);
  (**(code **)(*(long *)(param_1 + 0x10) + 0x18))(param_1);
  func_0x000100467a48(auStack_80);
  func_0x0001004b6ddc(&uStack_38);
  return;
}



/* Entry: 104ada5e0; end: 104ada633;  */

void FUN_104ada5e0(undefined8 param_1)

{
  undefined1 auStack_68 [72];
  
  FUN_104ada55c();
  func_0x000100460de4(auStack_68);
  func_0x000100832ca0(param_1);
  func_0x000100467a48(auStack_68);
  return;
}



/* Entry: 104ada634; end: 104ada6a3;  */

void FUN_104ada634(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = *param_1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x000100460448(param_1[1]);
  if ((char)param_1[0x17] == '\0') {
    *(undefined1 *)(param_1 + 0x17) = 1;
    plVar1 = param_1 + 0x16;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      FUN_104ada508(param_1);
    }
  }
  func_0x000100466b80(param_1[1]);
  do {
    lVar4 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0) {
    return;
  }
  (**(code **)(param_1[2] + 0x20))(param_1 + 9);
  (**(code **)(param_1[3] + 0x30))((long)(param_1 + 9) + *(long *)(param_1[2] + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 104ada6a4; end: 104ada6fb;  */

void FUN_104ada6a4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/completion_queue.cc"
                        ,0xff,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104ada6f8);
    (*pcVar1)();
  }
  if (param_1 + 0x50 == *(long *)(param_1 + 8)) {
    if (*(long *)(param_1 + 0x48) == *(long *)(param_1 + 8)) {
      return;
    }
    uVar2 = 0x2d;
  }
  else {
    uVar2 = 0x2c;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/mpscq.h"
                      ,uVar2,2,"assertion failed: %s");
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008374e0);
  (*pcVar1)();
}



/* Entry: 104ada6fc; end: 104ada717;  */

void FUN_104ada6fc(long param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 1;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(long *)(param_1 + 0x20) = param_1;
  *(long *)(param_1 + 0x28) = param_1;
  return;
}



/* Entry: 104ada718; end: 104ada787;  */

void FUN_104ada718(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = *param_1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x000100460448(param_1[1]);
  if (*(char *)((long)param_1 + 0x89) == '\0') {
    *(undefined1 *)((long)param_1 + 0x89) = 1;
    plVar1 = param_1 + 0xf;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      FUN_104adb0b8(param_1);
    }
  }
  func_0x000100466b80(param_1[1]);
  do {
    lVar4 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0) {
    return;
  }
  (**(code **)(param_1[2] + 0x20))(param_1 + 9);
  (**(code **)(param_1[3] + 0x30))((long)(param_1 + 9) + *(long *)(param_1[2] + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}


