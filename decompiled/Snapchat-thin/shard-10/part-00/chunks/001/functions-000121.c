/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1074fc0dc; end: 1074fc157;  */

undefined8 FUN_1074fc0dc(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001074fc104(param_1,*(undefined8 *)(param_1 + 0x10));
  func_0x0001074ff0b8(param_1);
  FUN_1074fc158();
  return unaff_x19;
}



/* Entry: 1074fc158; end: 1074fc16f;  */

void FUN_1074fc158(long *param_1)

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



/* Entry: 1074fc170; end: 1074fc33f;  */

undefined1  [16] FUN_1074fc170(float param_1,float param_2,long *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong uVar8;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  ulong uVar9;
  long *unaff_x21;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  ulong unaff_x23;
  undefined1 auVar13 [16];
  undefined8 auStack_58 [3];
  
  uVar1 = *param_4;
  uVar9 = (ulong)uVar1;
  uVar12 = param_3[1];
  if (uVar12 != 0) {
    uVar7 = uVar12 - 1;
    uVar11 = (uint)uVar12;
    if ((uVar12 & uVar7) == 0) {
      unaff_x23 = (ulong)(uVar11 - 1 & uVar1);
    }
    else {
      unaff_x23 = uVar9;
      if (uVar12 <= uVar9) {
        uVar2 = 0;
        if (uVar11 != 0) {
          uVar2 = uVar1 / uVar11;
        }
        unaff_x23 = (ulong)(uVar1 - uVar2 * uVar11);
      }
    }
    plVar10 = *(long **)(*param_3 + unaff_x23 * 8);
    unaff_x21 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar10;
          if (unaff_x21 == (long *)0x0) goto LAB_1074fc220;
          uVar8 = unaff_x21[1];
          plVar10 = unaff_x21;
          if (uVar8 != uVar9) break;
          if (*(uint *)(unaff_x21 + 2) == uVar1) {
            uVar6 = 0;
            goto LAB_1074fc318;
          }
        }
        if ((uVar12 & uVar7) == 0) {
          uVar8 = uVar8 & uVar7;
        }
        else if (uVar12 <= uVar8) {
          uVar3 = 0;
          if (uVar12 != 0) {
            uVar3 = uVar8 / uVar12;
          }
          uVar8 = uVar8 - uVar3 * uVar12;
        }
      } while (uVar8 == unaff_x23);
    }
  }
LAB_1074fc220:
  func_0x0001074feb04(auStack_58);
  FUN_1074fc340();
  func_0x0001074ffa70();
  if ((uVar12 == 0) || (param_2 * (float)uVar12 < param_1)) {
    bVar4 = 2 < uVar12;
    bVar5 = uVar12 == 3;
    func_0x0001074fee28(uVar12 << 1);
    uVar6 = extraout_x8;
    if (!bVar4 || bVar5) {
      uVar6 = extraout_x9;
    }
    func_0x0001074fc390(param_3,uVar6);
    uVar12 = param_3[1];
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x23 = (ulong)((int)uVar12 - 1U & uVar1);
    }
    else {
      unaff_x23 = uVar9;
      if (uVar12 <= uVar9) {
        uVar7 = 0;
        if (uVar12 != 0) {
          uVar7 = uVar9 / uVar12;
        }
        unaff_x23 = uVar9 - uVar7 * uVar12;
      }
    }
  }
  if (*(long *)(*param_3 + unaff_x23 * 8) == 0) {
    func_0x0001074ff4c4();
    *(undefined8 *)(extraout_x8_00 + unaff_x23 * 8) = extraout_x9_00;
    if (*unaff_x21 != 0) {
      uVar9 = *(ulong *)(*unaff_x21 + 8);
      if ((uVar12 & uVar12 - 1) == 0) {
        uVar9 = uVar9 & uVar12 - 1;
      }
      else if (uVar12 <= uVar9) {
        uVar7 = 0;
        if (uVar12 != 0) {
          uVar7 = uVar9 / uVar12;
        }
        uVar9 = uVar9 - uVar7 * uVar12;
      }
      *(long **)(extraout_x8_00 + uVar9 * 8) = unaff_x21;
    }
  }
  else {
    func_0x0001074ff8fc();
  }
  auStack_58[0] = 0;
  param_3[3] = param_3[3] + 1;
  FUN_1074fc55c(auStack_58);
  uVar6 = 1;
LAB_1074fc318:
  auVar13._8_8_ = uVar6;
  auVar13._0_8_ = unaff_x21;
  return auVar13;
}



/* Entry: 1074fc340; end: 1074fc43b;  */

void FUN_1074fc340(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = param_2 + 2;
  func_0x0001074ff3c0();
  *param_1 = param_2;
  param_1[1] = puVar1;
  param_1[2] = 1;
  *param_2 = 0;
  param_2[1] = param_3;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)*param_5;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  return;
}



/* Entry: 1074fc43c; end: 1074fc527;  */

void FUN_1074fc43c(long *param_1,ulong param_2)

{
  long lVar1;
  long extraout_x8;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *extraout_x9;
  ulong uVar5;
  ulong extraout_x10;
  ulong uVar6;
  ulong uVar7;
  ulong extraout_x11;
  
  if (param_2 == 0) {
    FUN_1074fc528(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_1074fc540(plVar3);
    FUN_1074fc528(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            func_0x0001074ff4f4();
            lVar1 = extraout_x8;
            plVar3 = extraout_x9;
            uVar5 = extraout_x10;
            uVar7 = extraout_x11;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1074fc528; end: 1074fc53f;  */

void FUN_1074fc528(long *param_1,long param_2)

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



/* Entry: 1074fc540; end: 1074fc55b;  */

void FUN_1074fc540(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001074ff0b8();
  FUN_1074fc57c();
  return;
}



/* Entry: 1074fc55c; end: 1074fc57b;  */

void FUN_1074fc55c(void)

{
  func_0x0001074ff0b8();
  FUN_1074fc57c();
  return;
}



/* Entry: 1074fc57c; end: 1074fc593;  */

void FUN_1074fc57c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x0001072a7b80(lVar1 + 0x18);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1074fc594; end: 1074fc5d3;  */

void FUN_1074fc594(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x0001072a7b80(param_2 + 0x18);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1074fc5d4; end: 1074fc60b;  */

void FUN_1074fc5d4(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x0001074fe6c8();
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 1074fc60c; end: 1074fc8e3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1074fc60c(long *******param_1,long *******param_2,long *******param_3,ulong param_4,
                  long *******param_5,ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  int iVar4;
  long *******ppppppplVar5;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  long ******pppppplVar8;
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *******ppppppplVar16;
  long *******ppppppplVar17;
  ulong uStack_220;
  long *******ppppppplStack_218;
  undefined1 *puStack_210;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined1 auStack_1e8 [320];
  long lStack_a8;
  ulong uStack_a0;
  long *******ppppppplStack_98;
  long lStack_90;
  long *******ppppppplStack_88;
  long *******ppppppplStack_80;
  long *******ppppppplStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  func_0x0001074fe5e8();
  uVar3 = param_4 == 2;
  ppppppplVar5 = param_1;
  ppppppplVar6 = param_2;
  uStack_68 = extraout_x8_00;
  if (1 < param_4) {
    if ((bool)uVar3) {
      ppppppplVar6 = param_2 + -0x36;
      FUN_1074fc91c();
      ppppppplVar5 = param_3;
      if ((int)param_3 != 0) {
        func_0x0001074fe49c(uStack_68);
        ppppppplVar5 = param_3;
        if ((bool)uVar3) {
          func_0x0001074feae4();
code_r0x00010739a140:
          func_0x00010739a5a8();
          func_0x00010739a3b8();
          func_0x00010729b464(auStack_1e8,unaff_x20);
          func_0x00010729bf90(unaff_x20,unaff_x19);
          func_0x00010729bf90(unaff_x19,auStack_1e8);
          func_0x00010739a4d8();
          func_0x00010739a394(extraout_x8);
          if ((bool)uVar3) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010739a41c();
          pcStack_1f8 = FUN_10739a1c0;
          puStack_200 = &stack0xfffffffffffffff0;
          func_0x000104c318bc();
          pppppplVar8 = *param_1;
          *(undefined4 *)(unaff_x19 + 0x38) = 3;
          *(long *******)(unaff_x19 + 0x40) = pppppplVar8;
          return;
        }
        goto LAB_1074fc8b0;
      }
    }
    else {
      if (0 < (long)param_4) {
        uVar11 = param_4 >> 1;
        ppppppplVar10 = param_1 + uVar11 * 0x36;
        uVar3 = param_4 == param_6;
        if ((long)param_6 < (long)param_4) {
          func_0x0001074ff5cc();
          FUN_1074fc60c();
          lVar12 = param_4 - uVar11;
          ppppppplVar5 = ppppppplVar10;
          FUN_1074fc60c(ppppppplVar10,param_2,param_3,lVar12,param_5,param_6);
          func_0x0001074fe49c(uStack_68);
          ppppppplVar7 = param_1;
          if ((bool)uVar3) {
            while( true ) {
              if (lVar12 == 0) {
                return;
              }
              ppppppplVar6 = ppppppplVar7;
              ppppppplStack_88 = param_5;
              uVar2 = uVar11;
              if (lVar12 <= (long)param_6 || (long)uVar11 <= (long)param_6) break;
              while( true ) {
                if (uVar2 == 0) {
                  return;
                }
                ppppppplVar5 = param_3;
                param_1 = ppppppplVar7;
                FUN_1074fc91c(param_3,ppppppplVar10);
                if (((ulong)ppppppplVar5 & 1) != 0) break;
                ppppppplVar7 = ppppppplVar7 + 0x36;
                ppppppplVar6 = ppppppplVar6 + 0x36;
                uVar2 = uVar2 - 1;
              }
              uStack_a0 = param_6;
              ppppppplStack_98 = param_2;
              lStack_90 = lVar12;
              if ((long)uVar2 < lVar12) {
                ppppppplVar17 = ppppppplVar10 + (lVar12 / 2) * 0x36;
                lVar12 = lVar12 / 2;
                ppppppplVar5 = ppppppplVar7;
                uVar11 = ((long)ppppppplVar10 - (long)ppppppplVar6) / 0x1b0;
                while (lStack_a8 = lVar12, ppppppplStack_80 = param_3, uVar11 != 0) {
                  uVar14 = uVar11 >> 1;
                  FUN_1074fc91c(param_3,ppppppplVar17,ppppppplVar5 + uVar14 * 0x36);
                  uVar1 = uVar11 + (uVar11 >> 1 ^ 0xffffffffffffffff);
                  iVar4 = (int)param_3;
                  lVar12 = lStack_a8;
                  param_3 = ppppppplStack_80;
                  uVar11 = uVar14;
                  if (iVar4 == 0) {
                    ppppppplVar5 = ppppppplVar5 + uVar14 * 0x36 + 0x36;
                    uVar11 = uVar1;
                  }
                }
                uVar11 = ((long)ppppppplVar5 - (long)ppppppplVar6) / 0x1b0;
              }
              else {
                ppppppplStack_80 = param_3;
                if (uVar2 == 1) {
                  uVar3 = 1;
                  goto code_r0x00010739a140;
                }
                uVar11 = (long)uVar2 / 2;
                ppppppplVar5 = ppppppplVar7 + uVar11 * 0x36;
                ppppppplStack_78 = (long *******)*param_3;
                ppppppplVar6 = ppppppplVar10;
                uVar1 = ((long)param_2 - (long)ppppppplVar10) / 0x1b0;
                while (ppppppplVar17 = ppppppplVar6, uVar1 != 0) {
                  uVar14 = uVar1 >> 1;
                  ppppppplVar9 = (long *******)&ppppppplStack_78;
                  func_0x0001074ff6ac(ppppppplVar9,ppppppplVar17 + uVar14 * 0x36);
                  ppppppplVar6 = ppppppplVar17 + uVar14 * 0x36 + 0x36;
                  uVar1 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
                  if ((int)ppppppplVar9 == 0) {
                    ppppppplVar6 = ppppppplVar17;
                    uVar1 = uVar14;
                  }
                }
                lVar12 = ((long)ppppppplVar17 - (long)ppppppplVar10) / 0x1b0;
              }
              param_3 = ppppppplStack_80;
              param_2 = ppppppplVar17;
              if ((ppppppplVar5 != ppppppplVar10) &&
                 (param_2 = ppppppplVar5, ppppppplVar6 = ppppppplVar10,
                 ppppppplVar10 != ppppppplVar17)) {
                while( true ) {
                  lStack_a8 = lVar12;
                  ppppppplVar9 = ppppppplVar6;
                  func_0x0001074ffab8();
                  FUN_10739a140();
                  param_2 = param_2 + 0x36;
                  ppppppplVar10 = ppppppplVar10 + 0x36;
                  if (ppppppplVar10 == ppppppplVar17) break;
                  ppppppplVar6 = ppppppplVar10;
                  lVar12 = lStack_a8;
                  if (param_2 != ppppppplVar9) {
                    ppppppplVar6 = ppppppplVar9;
                  }
                }
                lVar12 = lStack_a8;
                ppppppplVar6 = param_2;
                ppppppplVar10 = ppppppplVar9;
                if (param_2 != ppppppplVar9) {
                  do {
                    while( true ) {
                      ppppppplVar16 = ppppppplVar10;
                      FUN_10739a140(ppppppplVar6,ppppppplVar9);
                      ppppppplVar6 = ppppppplVar6 + 0x36;
                      ppppppplVar9 = ppppppplVar9 + 0x36;
                      if (ppppppplVar9 == ppppppplVar17) break;
                      ppppppplVar10 = ppppppplVar9;
                      if (ppppppplVar6 != ppppppplVar16) {
                        ppppppplVar10 = ppppppplVar16;
                      }
                    }
                    lVar12 = lStack_a8;
                    ppppppplVar9 = ppppppplVar16;
                    ppppppplVar10 = ppppppplVar16;
                  } while (ppppppplVar6 != ppppppplVar16);
                }
              }
              param_6 = uStack_a0;
              lVar15 = lStack_90 - lVar12;
              if ((long)(uVar11 + lVar12) < (long)((lStack_90 - (uVar11 + lVar12)) + uVar2)) {
                FUN_1074fcc00(ppppppplVar7,ppppppplVar5,param_2,param_3,uVar11,lVar12,
                              ppppppplStack_88,uStack_a0);
                param_1 = ppppppplVar7;
                lVar12 = lVar15;
                ppppppplVar7 = param_2;
                ppppppplVar10 = ppppppplVar17;
                param_2 = ppppppplStack_98;
                uVar11 = uVar2 - uVar11;
                param_5 = ppppppplStack_88;
              }
              else {
                param_1 = param_2;
                FUN_1074fcc00(param_2,ppppppplVar17,ppppppplStack_98,param_3,uVar2 - uVar11,lVar15,
                              ppppppplStack_88,uStack_a0);
                ppppppplVar10 = ppppppplVar5;
                param_5 = ppppppplStack_88;
              }
            }
            puStack_70 = &uStack_68;
            uStack_68 = 0;
            ppppppplVar6 = param_5;
            ppppppplStack_78 = param_5;
            if (lVar12 < (long)uVar11) {
              while (ppppppplVar10 != param_2) {
                param_1 = param_5;
                func_0x00010729b464();
                func_0x0001074ffaa4();
              }
              while( true ) {
                iVar4 = (int)param_1;
                param_2 = param_2 + -0x36;
                if (ppppppplVar6 == param_5) break;
                if (ppppppplVar10 == ppppppplVar7) goto LAB_1074fcfcc;
                func_0x0001074febdc();
                func_0x0001074ff6ac();
                ppppppplVar5 = ppppppplVar6;
                ppppppplVar9 = ppppppplVar10 + -0x36;
                ppppppplVar17 = ppppppplVar10 + -0x36;
                if (iVar4 == 0) {
                  ppppppplVar5 = ppppppplVar6 + -0x36;
                  ppppppplVar9 = ppppppplVar10;
                  ppppppplVar17 = ppppppplVar6 + -0x36;
                }
                ppppppplVar10 = ppppppplVar9;
                param_1 = param_2;
                func_0x00010729bf90(param_2,ppppppplVar17);
                ppppppplVar6 = ppppppplVar5;
              }
            }
            else {
              while (ppppppplVar7 != ppppppplVar10) {
                func_0x0001074ffab8();
                func_0x00010729b464();
                func_0x0001074ffaa4();
                ppppppplVar6 = ppppppplVar6 + 0x36;
              }
              while (ppppppplVar6 != param_5) {
                if (ppppppplVar10 == param_2) {
                  FUN_1074f7fcc(param_5,ppppppplVar6,ppppppplVar7);
                  break;
                }
                ppppppplVar5 = param_3;
                func_0x0001074ff6ac(param_3,ppppppplVar10);
                if ((int)ppppppplVar5 == 0) {
                  func_0x00010729bf90(ppppppplVar7,param_5);
                  param_5 = param_5 + 0x36;
                }
                else {
                  func_0x00010729bf90(ppppppplVar7,ppppppplVar10);
                  ppppppplVar10 = ppppppplVar10 + 0x36;
                }
                ppppppplVar7 = ppppppplVar7 + 0x36;
              }
            }
            goto LAB_1074fcfe8;
          }
          goto LAB_1074fc8b0;
        }
        uStack_220 = 0;
        ppppppplStack_218 = param_5;
        puStack_210 = (undefined1 *)&uStack_220;
        func_0x0001074ff5cc();
        FUN_1074fc98c();
        ppppppplVar5 = param_5 + uVar11 * 0x36;
        uStack_220 = uVar11;
        FUN_1074fc98c(ppppppplVar10,param_2,param_3,param_4 - uVar11,ppppppplVar5);
        ppppppplVar10 = param_5 + param_4 * 0x36;
        ppppppplVar6 = ppppppplVar5;
        uStack_220 = param_4;
        while (param_5 != ppppppplVar5) {
          if (ppppppplVar6 == ppppppplVar10) goto LAB_1074fc89c;
          ppppppplVar7 = param_3;
          param_2 = ppppppplVar6;
          FUN_1074fc91c(param_3,ppppppplVar6,param_5);
          if ((int)ppppppplVar7 == 0) {
            func_0x0001074feae4();
            func_0x00010729bf90();
            param_5 = param_5 + 0x36;
          }
          else {
            func_0x0001074ff39c();
            func_0x00010729bf90();
            ppppppplVar6 = ppppppplVar6 + 0x36;
          }
        }
        for (; uVar3 = ppppppplVar6 == ppppppplVar10, !(bool)uVar3;
            ppppppplVar6 = ppppppplVar6 + 0x36) {
          func_0x0001074ff39c();
          func_0x00010729bf90();
        }
        goto LAB_1074fc8a4;
      }
      uVar3 = param_1 == param_2;
      if (!(bool)uVar3) {
        lVar12 = 0;
        ppppppplVar10 = param_1;
        while( true ) {
          ppppppplVar10 = ppppppplVar10 + 0x36;
          uVar3 = 1;
          if (ppppppplVar10 == param_2) break;
          ppppppplVar5 = param_3;
          ppppppplVar6 = ppppppplVar10;
          FUN_1074fc91c();
          if ((int)ppppppplVar5 != 0) {
            func_0x00010729b464(&ppppppplStack_218,ppppppplVar10);
            lVar15 = lVar12;
            do {
              lVar13 = lVar15;
              func_0x00010729bf90((long)param_1 + lVar13 + 0x1b0);
              ppppppplVar5 = param_1;
              if (lVar13 == 0) goto LAB_1074fc7c4;
              ppppppplVar6 = param_3;
              FUN_1074fc91c(param_3,&ppppppplStack_218,(long)param_1 + lVar13 + -0x1b0);
              lVar15 = lVar13 + -0x1b0;
            } while (((ulong)ppppppplVar6 & 1) != 0);
            ppppppplVar5 = (long *******)((long)param_1 + lVar13);
LAB_1074fc7c4:
            ppppppplVar6 = (long *******)&ppppppplStack_218;
            func_0x00010729bf90(ppppppplVar5);
            ppppppplVar5 = (long *******)&ppppppplStack_218;
            func_0x00010729abec();
          }
          lVar12 = lVar12 + 0x1b0;
        }
      }
    }
  }
  goto LAB_1074fc63c;
LAB_1074fcfcc:
  while (ppppppplVar6 != param_5) {
    ppppppplVar6 = ppppppplVar6 + -0x36;
    func_0x00010729bf90(param_2,ppppppplVar6);
    param_2 = param_2 + -0x36;
  }
LAB_1074fcfe8:
  FUN_1074fd0ec(&ppppppplStack_78);
  return;
LAB_1074fc89c:
  for (; uVar3 = param_5 == ppppppplVar5, !(bool)uVar3; param_5 = param_5 + 0x36) {
    func_0x0001074feae4();
    func_0x00010729bf90();
  }
LAB_1074fc8a4:
  ppppppplVar5 = (long *******)&ppppppplStack_218;
  FUN_1074fd0ec();
  ppppppplVar6 = param_2;
LAB_1074fc63c:
  func_0x0001074fe49c(uStack_68);
  if ((bool)uVar3) {
    return;
  }
LAB_1074fc8b0:
  ___stack_chk_fail();
  func_0x0001074fead8();
  FUN_1074fd0ec();
  func_0x0001074fe8f4();
  pppppplVar8 = *ppppppplVar5;
  *ppppppplVar5 = (long ******)ppppppplVar6;
  if (pppppplVar8 != (long ******)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074fc8e4; end: 1074fc8fb;  */

void FUN_1074fc8e4(long *param_1,long param_2)

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



/* Entry: 1074fc8fc; end: 1074fc91b;  */

void FUN_1074fc8fc(void)

{
  func_0x0001074ff0b8();
  FUN_1074fc8e4();
  return;
}



/* Entry: 1074fc91c; end: 1074fc98b;  */

bool FUN_1074fc91c(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  
  lVar1 = *param_1;
  param_2 = param_2 + 0xf0;
  FUN_1074fd058();
  lVar2 = *param_1;
  param_3 = param_3 + 0xf0;
  FUN_1074fd058();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0x38);
  }
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(param_3 + 0x38);
  }
  return uVar4 < uVar3;
}



/* Entry: 1074fc98c; end: 1074fcbff;  */

/* WARNING: Possible PIC construction at 0x0001074fca2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074fca64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074fcabc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074fcb48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074fcb7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074fca0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074fcbb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074fcb9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074fca10) */
/* WARNING: Removing unreachable block (ram,0x0001074fcb80) */
/* WARNING: Removing unreachable block (ram,0x0001074fcb4c) */
/* WARNING: Removing unreachable block (ram,0x0001074fcac0) */
/* WARNING: Removing unreachable block (ram,0x0001074fca68) */
/* WARNING: Removing unreachable block (ram,0x0001074fca6c) */
/* WARNING: Removing unreachable block (ram,0x0001074fca9c) */
/* WARNING: Removing unreachable block (ram,0x0001074fca74) */
/* WARNING: Removing unreachable block (ram,0x0001074fcaa0) */
/* WARNING: Removing unreachable block (ram,0x0001074fca88) */
/* WARNING: Removing unreachable block (ram,0x0001074fca30) */
/* WARNING: Removing unreachable block (ram,0x0001074fca34) */
/* WARNING: Removing unreachable block (ram,0x0001074fca3c) */
/* WARNING: Removing unreachable block (ram,0x0001074fca48) */
/* WARNING: Removing unreachable block (ram,0x0001074fcab4) */
/* WARNING: Removing unreachable block (ram,0x0001074fca5c) */
/* WARNING: Removing unreachable block (ram,0x0001074fcba0) */
/* WARNING: Removing unreachable block (ram,0x0001074fcba4) */

undefined8 *
FUN_1074fc98c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_70 [8];
  undefined8 auStack_68 [3];
  
  puVar2 = auStack_70;
  puVar7 = &stack0xfffffffffffffff0;
  if (param_4 == 0) {
    return param_1;
  }
  puVar3 = param_1;
  if (param_4 == 2) {
    func_0x0001074ff444();
    func_0x0001074fed9c();
    FUN_1074fc91c();
    if ((int)puVar3 == 0) {
      func_0x0001074feb04();
      unaff_x30 = 0x1074fcba0;
    }
    else {
      func_0x0001074feae4();
      unaff_x30 = 0x1074fca10;
      puVar2 = auStack_70;
    }
  }
  else {
    if (param_4 != 1) {
      if ((long)param_4 < 9) {
        if (param_1 != param_2) {
          func_0x0001074ff444();
          func_0x0001074feb04();
          unaff_x30 = 0x1074fca30;
          puVar2 = auStack_70;
          goto code_r0x00010729b464;
        }
      }
      else {
        uVar4 = param_4 >> 1;
        puVar1 = param_1 + uVar4 * 0x36;
        FUN_1074fc60c(param_1,puVar1,param_3,uVar4,param_5,uVar4);
        lVar5 = param_4 - (param_4 >> 1);
        puVar3 = puVar1;
        FUN_1074fc60c(puVar1,param_2,param_3,lVar5,param_5 + uVar4 * 0x36,lVar5);
        func_0x0001074ff444();
        puVar6 = puVar1;
        while (param_1 != puVar1) {
          if (puVar6 == param_2) {
            if (param_1 == puVar1) goto LAB_1074fcbb4;
            func_0x0001074feb04();
            unaff_x30 = 0x1074fcb80;
            puVar2 = auStack_70;
            goto code_r0x00010729b464;
          }
          puVar3 = param_3;
          FUN_1074fc91c(param_3,puVar6,param_1);
          if ((int)puVar3 == 0) {
            func_0x0001074feb04();
            unaff_x30 = 0x1074fcb4c;
            puVar2 = auStack_70;
            goto code_r0x00010729b464;
          }
          func_0x0001074ff7e4();
          func_0x0001074fe940();
          puVar6 = puVar6 + 0x36;
          param_5 = param_5 + 0x36;
        }
        for (; puVar6 != param_2; puVar6 = puVar6 + 0x36) {
          func_0x0001074ff7e4();
          func_0x0001074fe940();
        }
LAB_1074fcbb4:
        auStack_68[0] = 0;
        param_1 = auStack_68;
        FUN_1074fd0ec(param_1);
      }
      return param_1;
    }
    func_0x0001074feb04();
    puVar2 = (undefined1 *)register0x00000008;
    puVar3 = param_1;
    param_5 = unaff_x19;
    param_1 = unaff_x20;
    puVar7 = unaff_x29;
  }
code_r0x00010729b464:
  *(undefined8 **)(puVar2 + -0x20) = param_1;
  *(undefined8 **)(puVar2 + -0x18) = param_5;
  *(undefined1 **)(puVar2 + -0x10) = puVar7;
  *(undefined8 *)(puVar2 + -8) = unaff_x30;
  func_0x00010729e618();
  func_0x00010728451c();
  func_0x000104c2fe00(puVar3 + 0x1e,param_1 + 0x1e);
  func_0x000107299490(param_5 + 0x25,param_1 + 0x25);
  func_0x00010015bc98(param_5 + 0x27,param_1 + 0x27);
  func_0x0001072935a0(param_5 + 0x2a,param_1 + 0x2a);
  uVar9 = param_1[0x30];
  uVar8 = param_1[0x2f];
  uVar11 = param_1[0x32];
  uVar10 = param_1[0x31];
  param_5[0x33] = param_1[0x33];
  param_5[0x30] = uVar9;
  param_5[0x2f] = uVar8;
  param_5[0x32] = uVar11;
  param_5[0x31] = uVar10;
  uVar8 = param_1[0x34];
  param_5[0x35] = param_1[0x35];
  param_5[0x34] = uVar8;
  return param_5;
}



/* Entry: 1074fcc00; end: 1074fd057;  */

void FUN_1074fcc00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  long param_5,long param_6,undefined8 *param_7,long param_8)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *puVar10;
  undefined8 unaff_x20;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined1 auStack_1e8 [320];
  long lStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  puVar8 = param_1;
  puVar6 = param_7;
  while( true ) {
    if (param_6 == 0) {
      return;
    }
    puVar11 = puVar8;
    puStack_88 = puVar6;
    lVar2 = param_5;
    if (param_6 <= param_8 || param_5 <= param_8) break;
    while( true ) {
      if (lVar2 == 0) {
        return;
      }
      puVar6 = param_4;
      puVar9 = puVar8;
      FUN_1074fc91c(param_4,param_2);
      if (((ulong)puVar6 & 1) != 0) break;
      puVar8 = puVar8 + 0x36;
      puVar11 = puVar11 + 0x36;
      lVar2 = lVar2 + -1;
    }
    lStack_a0 = param_8;
    puStack_98 = param_3;
    lStack_90 = param_6;
    if (lVar2 < param_6) {
      puVar9 = param_2 + (param_6 / 2) * 0x36;
      param_6 = param_6 / 2;
      uVar1 = ((long)param_2 - (long)puVar11) / 0x1b0;
      puVar6 = puVar8;
      while (lStack_a8 = param_6, puStack_80 = param_4, uVar1 != 0) {
        uVar12 = uVar1 >> 1;
        FUN_1074fc91c(param_4,puVar9,puVar6 + uVar12 * 0x36);
        uVar13 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
        iVar5 = (int)param_4;
        param_6 = lStack_a8;
        uVar1 = uVar12;
        param_4 = puStack_80;
        if (iVar5 == 0) {
          uVar1 = uVar13;
          puVar6 = puVar6 + uVar12 * 0x36 + 0x36;
        }
      }
      param_5 = ((long)puVar6 - (long)puVar11) / 0x1b0;
    }
    else {
      uVar4 = lVar2 == 1;
      puStack_80 = param_4;
      if ((bool)uVar4) {
        func_0x00010739a5a8(puVar8,param_2);
        func_0x00010739a3b8();
        func_0x00010729b464(auStack_1e8,unaff_x20);
        func_0x00010729bf90(unaff_x20,unaff_x19);
        func_0x00010729bf90(unaff_x19,auStack_1e8);
        func_0x00010739a4d8();
        func_0x00010739a394(extraout_x8);
        if ((bool)uVar4) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010739a41c();
        func_0x000104c318bc();
        uVar16 = *puVar9;
        *(undefined4 *)(unaff_x19 + 0x38) = 3;
        *(undefined8 *)(unaff_x19 + 0x40) = uVar16;
        return;
      }
      param_5 = lVar2 / 2;
      puVar6 = puVar8 + param_5 * 0x36;
      puStack_78 = (undefined8 *)*param_4;
      uVar1 = ((long)param_3 - (long)param_2) / 0x1b0;
      puVar11 = param_2;
      while (puVar9 = puVar11, uVar1 != 0) {
        uVar13 = uVar1 >> 1;
        ppuVar7 = &puStack_78;
        func_0x0001074ff6ac(ppuVar7,puVar9 + uVar13 * 0x36);
        uVar1 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
        puVar11 = puVar9 + uVar13 * 0x36 + 0x36;
        if ((int)ppuVar7 == 0) {
          uVar1 = uVar13;
          puVar11 = puVar9;
        }
      }
      param_6 = ((long)puVar9 - (long)param_2) / 0x1b0;
    }
    param_4 = puStack_80;
    param_3 = puVar9;
    if ((puVar6 != param_2) && (param_3 = puVar6, puVar11 = param_2, param_2 != puVar9)) {
      while( true ) {
        lStack_a8 = param_6;
        puVar10 = puVar11;
        func_0x0001074ffab8();
        FUN_10739a140();
        param_3 = param_3 + 0x36;
        param_2 = param_2 + 0x36;
        if (param_2 == puVar9) break;
        puVar11 = param_2;
        param_6 = lStack_a8;
        if (param_3 != puVar10) {
          puVar11 = puVar10;
        }
      }
      param_6 = lStack_a8;
      puVar11 = param_3;
      puVar3 = puVar10;
      if (param_3 != puVar10) {
        do {
          while( true ) {
            puVar15 = puVar3;
            FUN_10739a140(puVar11,puVar10);
            puVar11 = puVar11 + 0x36;
            puVar10 = puVar10 + 0x36;
            if (puVar10 == puVar9) break;
            puVar3 = puVar10;
            if (puVar11 != puVar15) {
              puVar3 = puVar15;
            }
          }
          param_6 = lStack_a8;
          puVar10 = puVar15;
          puVar3 = puVar15;
        } while (puVar11 != puVar15);
      }
    }
    param_8 = lStack_a0;
    lVar14 = lStack_90 - param_6;
    if (param_5 + param_6 < (lStack_90 - (param_5 + param_6)) + lVar2) {
      FUN_1074fcc00(puVar8,puVar6,param_3,param_4,param_5,param_6,puStack_88,lStack_a0);
      param_1 = puVar8;
      param_6 = lVar14;
      puVar8 = param_3;
      param_2 = puVar9;
      param_3 = puStack_98;
      param_5 = lVar2 - param_5;
      puVar6 = puStack_88;
    }
    else {
      param_1 = param_3;
      FUN_1074fcc00(param_3,puVar9,puStack_98,param_4,lVar2 - param_5,lVar14,puStack_88,lStack_a0);
      param_2 = puVar6;
      puVar6 = puStack_88;
    }
  }
  puStack_70 = &uStack_68;
  uStack_68 = 0;
  puVar11 = puVar6;
  puStack_78 = puVar6;
  if (param_6 < param_5) {
    while (param_2 != param_3) {
      param_1 = puVar6;
      func_0x00010729b464();
      func_0x0001074ffaa4();
    }
    while( true ) {
      iVar5 = (int)param_1;
      param_3 = param_3 + -0x36;
      if (puVar11 == puVar6) break;
      if (param_2 == puVar8) goto LAB_1074fcfcc;
      func_0x0001074febdc();
      func_0x0001074ff6ac();
      puVar9 = puVar11;
      puVar3 = param_2 + -0x36;
      puVar10 = param_2 + -0x36;
      if (iVar5 == 0) {
        puVar9 = puVar11 + -0x36;
        puVar3 = param_2;
        puVar10 = puVar11 + -0x36;
      }
      param_2 = puVar3;
      param_1 = param_3;
      func_0x00010729bf90(param_3,puVar10);
      puVar11 = puVar9;
    }
  }
  else {
    while (puVar8 != param_2) {
      func_0x0001074ffab8();
      func_0x00010729b464();
      func_0x0001074ffaa4();
      puVar11 = puVar11 + 0x36;
    }
    while (puVar11 != puVar6) {
      if (param_2 == param_3) {
        FUN_1074f7fcc(puVar6,puVar11,puVar8);
        break;
      }
      puVar9 = param_4;
      func_0x0001074ff6ac(param_4,param_2);
      if ((int)puVar9 == 0) {
        func_0x00010729bf90(puVar8,puVar6);
        puVar6 = puVar6 + 0x36;
      }
      else {
        func_0x00010729bf90(puVar8,param_2);
        param_2 = param_2 + 0x36;
      }
      puVar8 = puVar8 + 0x36;
    }
  }
LAB_1074fcfe8:
  FUN_1074fd0ec(&puStack_78);
  return;
LAB_1074fcfcc:
  while (puVar11 != puVar6) {
    puVar11 = puVar11 + -0x36;
    func_0x00010729bf90(param_3,puVar11);
    param_3 = param_3 + -0x36;
  }
  goto LAB_1074fcfe8;
}



/* Entry: 1074fd058; end: 1074fd077;  */

void FUN_1074fd058(void)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x22;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  func_0x0001074fe4dc();
  func_0x0001074fe930();
  func_0x0001074feaa4();
  func_0x0001074fe544();
  do {
    func_0x0001074feba8();
    while (unaff_x26 != 0) {
      uVar1 = (unaff_x26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (unaff_x26 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      puVar2 = (undefined1 *)register0x00000008;
      in_stack_00000000 = unaff_x20;
      in_stack_00000008 = unaff_x19;
      FUN_1074f62b0(&stack0x00000000,
                    unaff_x24 +
                    (unaff_x25 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & unaff_x22) *
                    0x40);
      if ((int)puVar2 != 0) {
        func_0x0001074ff494();
        return;
      }
      func_0x0001074ff988();
    }
    func_0x0001074fe824();
  } while ((extraout_x8 & 1) == 0);
  return;
}



/* Entry: 1074fd078; end: 1074fd0eb;  */

void FUN_1074fd078(void)

{
  int iVar1;
  ulong extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long unaff_x26;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  func_0x0001074feaa4();
  func_0x0001074fe544();
  do {
    func_0x0001074feba8();
    while (unaff_x26 != 0) {
      in_stack_00000000 = unaff_x20;
      in_stack_00000008 = unaff_x19;
      iVar1 = (int)&stack0x00000000;
      FUN_1074f62b0();
      if (iVar1 != 0) {
        func_0x0001074ff494();
        return;
      }
      func_0x0001074ff988();
    }
    func_0x0001074fe824();
  } while ((extraout_x8 & 1) == 0);
  return;
}



/* Entry: 1074fd0ec; end: 1074fd133;  */

void FUN_1074fd0ec(long param_1)

{
  long unaff_x19;
  ulong uVar1;
  ulong *puVar2;
  
  func_0x0001074fe710();
  if (param_1 != 0) {
    puVar2 = *(ulong **)(unaff_x19 + 8);
    for (uVar1 = 0; uVar1 < *puVar2; uVar1 = uVar1 + 1) {
      func_0x00010729abec();
    }
  }
  return;
}



/* Entry: 1074fd134; end: 1074fd14f;  */

void FUN_1074fd134(long param_1)

{
  func_0x000107277f30();
  *(undefined4 *)(param_1 + 0x60) = 9;
  return;
}



/* Entry: 1074fd150; end: 1074fd1cb;  */

void FUN_1074fd150(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x9;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uStack_28;
  
  func_0x0001074fe570();
  func_0x0001074ff118();
  func_0x0001074fef44();
  if ((extraout_x9 == 0) && (func_0x0001074ff070(), !(bool)in_ZR)) {
    func_0x0001074ff1ec();
    if (((bool)in_CY) && (func_0x0001074fe79c(), (bool)in_CY)) {
      func_0x0001074feb4c();
    }
    else {
      func_0x0001074fea10();
      FUN_1074fd1cc();
    }
    func_0x0001074fe818();
  }
  func_0x0001074fe3e8();
  func_0x0001074fe49c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074ff8c8();
  func_0x0001074fe628();
  func_0x00010726d624();
  func_0x0001074feef8();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x0001074febe8();
      func_0x0001074fe5d8();
      func_0x0001074fe3c0();
      func_0x0001074ff930();
      FUN_1074fd238();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 1074fd1cc; end: 1074fd237;  */

void FUN_1074fd1cc(void)

{
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x0001074ff8c8();
  func_0x0001074fe628();
  func_0x00010726d624();
  func_0x0001074feef8();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x0001074febe8();
      func_0x0001074fe5d8();
      FUN_1074fe3c0();
      func_0x0001074ff930();
      FUN_1074fd238();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 1074fd238; end: 1074fd25b;  */

void FUN_1074fd238(void)

{
  long unaff_x19;
  long *plVar1;
  
  func_0x0001074fecc0();
  func_0x0001074ff07c();
  plVar1 = (long *)(unaff_x19 + 0x38);
  if (*plVar1 != 0) {
    FUN_1074f4ea4(plVar1);
    __ZdlPv(*plVar1);
  }
  func_0x0001074fea00();
  return;
}



/* Entry: 1074fd25c; end: 1074fd2ab;  */

long FUN_1074fd25c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 1074fd2ac; end: 1074fd2cf;  */

void FUN_1074fd2ac(undefined8 *param_1)

{
  func_0x0001074fec38();
  *param_1 = &PTR_DAT_1109b7190;
  return;
}



/* Entry: 1074fd2d0; end: 1074fd2f7;  */

void FUN_1074fd2d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109b7190;
  return;
}



/* Entry: 1074fd2f8; end: 1074fd31f;  */

void FUN_1074fd2f8(undefined8 param_1)

{
  func_0x0001074feaf8();
  func_0x0001074fea08(param_1,&PTR_DAT_1109b71f0);
  func_0x0001074fe67c();
  return;
}



/* Entry: 1074fd320; end: 1074fd32b;  */

undefined ** FUN_1074fd320(void)

{
  return &PTR_DAT_1109b71f0;
}



/* Entry: 1074fd32c; end: 1074fd383;  */

void FUN_1074fd32c(undefined8 param_1)

{
  ulong extraout_x8;
  long unaff_x26;
  
  func_0x0001074feda8();
  func_0x0001074fe544();
  do {
    func_0x0001074feba8();
    while (unaff_x26 != 0) {
      func_0x0001074fecf0();
      if ((int)param_1 != 0) {
        func_0x0001074ff494();
        return;
      }
      func_0x0001074ff988();
    }
    func_0x0001074fe824();
  } while ((extraout_x8 & 1) == 0);
  return;
}



/* Entry: 1074fd384; end: 1074fd3ab;  */

undefined8 FUN_1074fd384(undefined8 param_1)

{
  func_0x0001074feba0(&PTR_FUN_1109b69b0);
  return param_1;
}



/* Entry: 1074fd3ac; end: 1074fd3bf;  */

void FUN_1074fd3ac(void)

{
  FUN_1074fd384();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074fd3c0; end: 1074fd3df;  */

void FUN_1074fd3c0(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001074fe704();
  func_0x0001074fe980(param_1,unaff_x19 + 8);
  FUN_1074fe5b8(&PTR_FUN_1109b69b0);
  return;
}



/* Entry: 1074fd3e0; end: 1074fd3ff;  */

void FUN_1074fd3e0(long param_1,undefined8 param_2)

{
  func_0x0001074fe980(param_2,param_1 + 8);
  FUN_1074fe5b8(&PTR_FUN_1109b69b0);
  return;
}



/* Entry: 1074fd400; end: 1074fd43f;  */

void FUN_1074fd400(int param_1)

{
  long unaff_x20;
  
  func_0x0001074fe980();
  func_0x0001074fee58();
  func_0x0001074ff0dc();
  if (param_1 != 0) {
    FUN_1074f37d4(*(undefined8 *)(unaff_x20 + 0x20));
  }
  func_0x0001074fea78();
  return;
}



/* Entry: 1074fd440; end: 1074fd467;  */

void FUN_1074fd440(undefined8 param_1)

{
  func_0x0001074feaf8();
  func_0x0001074fea08(param_1,&PTR_DAT_1109b6a10);
  func_0x0001074fe67c();
  return;
}



/* Entry: 1074fd468; end: 1074fd473;  */

undefined ** FUN_1074fd468(void)

{
  return &PTR_DAT_1109b6a10;
}



/* Entry: 1074fd474; end: 1074fd497;  */

void FUN_1074fd474(void)

{
  func_0x0001074fe980();
  FUN_1074fe5b8(&PTR_FUN_1109b69b0);
  return;
}



/* Entry: 1074fd498; end: 1074fd4c7;  */

void FUN_1074fd498(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001074fe68c();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 1074fd4c8; end: 1074fd5bb;  */

void FUN_1074fd4c8(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long **pplVar3;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  pplVar3 = &plStack_50;
  func_0x00010726fc00(&plStack_30,param_2);
  if (plStack_30 != (long *)0x0) {
    func_0x00010726fc3c();
    uVar2 = uStack_28;
    plVar1 = plStack_30;
    if (*plStack_30 != -1) {
      plStack_30 = (long *)0x0;
      uStack_28 = 0;
      *param_1 = plVar1;
      param_1[1] = uVar2;
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x0001072508cc(&uStack_40);
      pplVar3 = &plStack_30;
      goto LAB_1074fd540;
    }
    func_0x00010726fc88();
  }
  func_0x0001072508cc(&plStack_30);
  *param_1 = 0;
  param_1[1] = 0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
LAB_1074fd540:
  func_0x0001072508cc(pplVar3);
  return;
}



/* Entry: 1074fd5bc; end: 1074fd5cf;  */

void FUN_1074fd5bc(void)

{
  func_0x0001074fd594();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074fd5d0; end: 1074fd5ef;  */

void FUN_1074fd5d0(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001074fe704();
  func_0x0001074fe980(param_1,unaff_x19 + 8);
  FUN_1074fe5b8(&PTR_SUB_1109b6a30);
  return;
}



/* Entry: 1074fd5f0; end: 1074fd60f;  */

void FUN_1074fd5f0(long param_1,undefined8 param_2)

{
  func_0x0001074fe980(param_2,param_1 + 8);
  FUN_1074fe5b8(&PTR_SUB_1109b6a30);
  return;
}



/* Entry: 1074fd610; end: 1074fd687;  */

void FUN_1074fd610(int param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_68 [64];
  undefined8 uStack_28;
  
  func_0x0001074fe980();
  func_0x0001074fe5e8();
  uStack_28 = extraout_x8;
  func_0x0001074ff7f8();
  func_0x0001074ff0dc();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x00010729807c(auStack_68);
    FUN_1074f38f0(uVar1,auStack_68);
    func_0x0001074fef84();
  }
  func_0x0001074fefec();
  func_0x0001074fe49c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074fef84();
  func_0x0001074fefec();
  func_0x0001074fe8f4();
  func_0x0001074feaf8();
  func_0x0001074fea08();
  func_0x0001074fe67c();
  return;
}



/* Entry: 1074fd688; end: 1074fd6af;  */

void FUN_1074fd688(undefined8 param_1)

{
  func_0x0001074feaf8();
  func_0x0001074fea08(param_1,&PTR_DAT_1109b6a90);
  func_0x0001074fe67c();
  return;
}



/* Entry: 1074fd6b0; end: 1074fd6bb;  */

undefined ** FUN_1074fd6b0(void)

{
  return &PTR_DAT_1109b6a90;
}



/* Entry: 1074fd6bc; end: 1074fd707;  */

void FUN_1074fd6bc(void)

{
  func_0x0001074fe980();
  FUN_1074fe5b8(&PTR_SUB_1109b6a30);
  return;
}



/* Entry: 1074fd708; end: 1074fd71b;  */

void FUN_1074fd708(void)

{
  func_0x0001074fd6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074fd71c; end: 1074fd73b;  */

void FUN_1074fd71c(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001074fe704();
  func_0x0001074fe980(param_1,unaff_x19 + 8);
  FUN_1074fe5b8(&PTR_SUB_1109b6ab0);
  return;
}



/* Entry: 1074fd73c; end: 1074fd75b;  */

void FUN_1074fd73c(long param_1,undefined8 param_2)

{
  func_0x0001074fe980(param_2,param_1 + 8);
  FUN_1074fe5b8(&PTR_SUB_1109b6ab0);
  return;
}



/* Entry: 1074fd75c; end: 1074fd79f;  */

void FUN_1074fd75c(int param_1)

{
  long unaff_x23;
  
  func_0x0001074fe77c();
  func_0x0001074ff6a4();
  if (param_1 != 0) {
    func_0x0001074fea64(*(undefined8 *)(unaff_x23 + 0x20));
    FUN_1074f2db0();
  }
  func_0x0001074fea78();
  return;
}



/* Entry: 1074fd7a0; end: 1074fd7c7;  */

void FUN_1074fd7a0(undefined8 param_1)

{
  func_0x0001074feaf8();
  func_0x0001074fea08(param_1,&PTR_DAT_1109b6b10);
  func_0x0001074fe67c();
  return;
}



/* Entry: 1074fd7c8; end: 1074fd7d3;  */

undefined ** FUN_1074fd7c8(void)

{
  return &PTR_DAT_1109b6b10;
}



/* Entry: 1074fd7d4; end: 1074fd81f;  */

void FUN_1074fd7d4(void)

{
  func_0x0001074fe980();
  FUN_1074fe5b8(&PTR_SUB_1109b6ab0);
  return;
}



/* Entry: 1074fd820; end: 1074fd833;  */

void FUN_1074fd820(void)

{
  func_0x0001074fd7f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074fd834; end: 1074fd853;  */

void FUN_1074fd834(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001074fe704();
  func_0x0001074fe980(param_1,unaff_x19 + 8);
  FUN_1074fe5b8(&PTR_SUB_1109b6b30);
  return;
}



/* Entry: 1074fd854; end: 1074fd873;  */

void FUN_1074fd854(long param_1,undefined8 param_2)

{
  func_0x0001074fe980(param_2,param_1 + 8);
  FUN_1074fe5b8(&PTR_SUB_1109b6b30);
  return;
}



/* Entry: 1074fd874; end: 1074fd8b7;  */

void FUN_1074fd874(int param_1)

{
  long unaff_x23;
  
  func_0x0001074fe77c();
  func_0x0001074ff6a4();
  if (param_1 != 0) {
    func_0x0001074fea64(*(undefined8 *)(unaff_x23 + 0x20));
    FUN_1074f34d0();
  }
  func_0x0001074fea78();
  return;
}



/* Entry: 1074fd8b8; end: 1074fd8df;  */

void FUN_1074fd8b8(undefined8 param_1)

{
  func_0x0001074feaf8();
  func_0x0001074fea08(param_1,&PTR_DAT_1109b6ba0);
  func_0x0001074fe67c();
  return;
}



/* Entry: 1074fd8e0; end: 1074fd8eb;  */

undefined ** FUN_1074fd8e0(void)

{
  return &PTR_DAT_1109b6ba0;
}



/* Entry: 1074fd8ec; end: 1074fd96b;  */

void FUN_1074fd8ec(void)

{
  func_0x0001074fe980();
  FUN_1074fe5b8(&PTR_SUB_1109b6b30);
  return;
}



/* Entry: 1074fd96c; end: 1074fd97f;  */

void FUN_1074fd96c(void)

{
  func_0x0001074fd944();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074fd980; end: 1074fd99f;  */

void FUN_1074fd980(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001074fe704();
  func_0x0001074fe980(param_1,unaff_x19 + 8);
  FUN_1074fe5b8(&PTR_SUB_1109b6bc0);
  return;
}



/* Entry: 1074fd9a0; end: 1074fd9bf;  */

void FUN_1074fd9a0(long param_1,undefined8 param_2)

{
  func_0x0001074fe980(param_2,param_1 + 8);
  FUN_1074fe5b8(&PTR_SUB_1109b6bc0);
  return;
}



/* Entry: 1074fd9c0; end: 1074fda33;  */

void FUN_1074fd9c0(void)

{
  int iVar1;
  code *extraout_x8;
  long unaff_x22;
  long lVar2;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [8];
  
  func_0x0001074fe8ac();
  FUN_1074fd4c8(auStack_48,unaff_x22 + 8);
  iVar1 = (int)unaff_x22 + 8;
  func_0x0001074fd54c();
  if (iVar1 != 0) {
    lVar2 = *(long *)(unaff_x22 + 0x20);
    func_0x0001074ff260(auStack_38);
    func_0x0001074feb40(*(undefined8 *)(lVar2 + 0x30));
    (*extraout_x8)();
  }
  func_0x0001074fefec();
  return;
}



/* Entry: 1074fda34; end: 1074fda5b;  */

void FUN_1074fda34(undefined8 param_1)

{
  func_0x0001074feaf8();
  func_0x0001074fea08(param_1,&PTR_DAT_1109b6c30);
  func_0x0001074fe67c();
  return;
}



/* Entry: 1074fda5c; end: 1074fda67;  */

undefined ** FUN_1074fda5c(void)

{
  return &PTR_DAT_1109b6c30;
}



/* Entry: 1074fda68; end: 1074fdae7;  */

void FUN_1074fda68(void)

{
  func_0x0001074fe980();
  FUN_1074fe5b8(&PTR_SUB_1109b6bc0);
  return;
}



/* Entry: 1074fdae8; end: 1074fdafb;  */

void FUN_1074fdae8(void)

{
  func_0x0001074fdac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074fdafc; end: 1074fdb1b;  */

void FUN_1074fdafc(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001074fe704();
  func_0x0001074fe980(param_1,unaff_x19 + 8);
  FUN_1074fe5b8(&PTR_SUB_1109b6c50);
  return;
}



/* Entry: 1074fdb1c; end: 1074fdb3b;  */

void FUN_1074fdb1c(long param_1,undefined8 param_2)

{
  func_0x0001074fe980(param_2,param_1 + 8);
  FUN_1074fe5b8(&PTR_SUB_1109b6c50);
  return;
}



/* Entry: 1074fdb3c; end: 1074fdbd7;  */

void FUN_1074fdb3c(int param_1)

{
  uint uVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  func_0x0001074fe980();
  func_0x0001074fee58();
  func_0x0001074ff0dc();
  if (param_1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    uVar1 = (int)*(undefined8 *)(lVar2 + 0x2618) + 0x400;
    func_0x00010724e330();
    if (((uVar1 ^ 0xffffffff) & 0x101) == 0) {
      FUN_10745f348(auStack_50,*(undefined8 *)(lVar2 + 0xef0));
      if (*(long *)(lStack_38 + 0x18) != 0) {
        func_0x0001074feb40(*(undefined8 *)(lVar2 + 0x30));
        func_0x0001074ff684();
      }
      func_0x0001074ff330();
    }
    else {
      func_0x0001074febdc();
      FUN_1074f37d4();
    }
  }
  func_0x0001074fea78();
  return;
}



/* Entry: 1074fdbd8; end: 1074fdbff;  */

void FUN_1074fdbd8(undefined8 param_1)

{
  func_0x0001074feaf8();
  func_0x0001074fea08(param_1,&PTR_DAT_1109b6cb0);
  func_0x0001074fe67c();
  return;
}



/* Entry: 1074fdc00; end: 1074fdc0b;  */

undefined ** FUN_1074fdc00(void)

{
  return &PTR_DAT_1109b6cb0;
}



/* Entry: 1074fdc0c; end: 1074fdc57;  */

void FUN_1074fdc0c(void)

{
  func_0x0001074fe980();
  FUN_1074fe5b8(&PTR_SUB_1109b6c50);
  return;
}



/* Entry: 1074fdc58; end: 1074fdc6b;  */

void FUN_1074fdc58(void)

{
  func_0x0001074fdc30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074fdc6c; end: 1074fdc8b;  */

void FUN_1074fdc6c(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001074fe704();
  func_0x0001074fe980(param_1,unaff_x19 + 8);
  FUN_1074fe5b8(&PTR_SUB_1109b6cd0);
  return;
}



/* Entry: 1074fdc8c; end: 1074fdcab;  */

void FUN_1074fdc8c(long param_1,undefined8 param_2)

{
  func_0x0001074fe980(param_2,param_1 + 8);
  FUN_1074fe5b8(&PTR_SUB_1109b6cd0);
  return;
}



/* Entry: 1074fdcac; end: 1074fdd93;  */

void FUN_1074fdcac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [24];
  long lStack_58;
  
  FUN_1074fd4c8(auStack_80,param_1 + 8);
  iVar1 = (int)param_1 + 8;
  func_0x0001074fd54c();
  if (iVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    uVar2 = (int)*(undefined8 *)(lVar4 + 0x2618) + 0x400;
    func_0x00010724e330();
    if ((((uVar2 ^ 0xffffffff) & 0x101) == 0) &&
       (lVar3 = lVar4, FUN_1074f146c(lVar4,param_2), lVar3 != 0)) {
      func_0x0001074ff260(auStack_70);
      if (*(long *)(lStack_58 + 0x18) != 0) {
        func_0x0001074feb40(*(undefined8 *)(lVar4 + 0x30));
        func_0x0001074ff684();
      }
      func_0x0001074ff330();
    }
    else {
      FUN_1074f2db0(lVar4,param_2,param_3,param_4,param_5);
    }
  }
  func_0x0001074fea78();
  return;
}



/* Entry: 1074fdd94; end: 1074fddbb;  */

void FUN_1074fdd94(undefined8 param_1)

{
  func_0x0001074feaf8();
  func_0x0001074fea08(param_1,&PTR_DAT_1109b6d30);
  func_0x0001074fe67c();
  return;
}



/* Entry: 1074fddbc; end: 1074fddc7;  */

undefined ** FUN_1074fddbc(void)

{
  return &PTR_DAT_1109b6d30;
}



/* Entry: 1074fddc8; end: 1074fde37;  */

void FUN_1074fddc8(void)

{
  func_0x0001074fe980();
  FUN_1074fe5b8(&PTR_SUB_1109b6cd0);
  return;
}



/* Entry: 1074fde38; end: 1074fde4b;  */

void FUN_1074fde38(void)

{
  func_0x0001074fde10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074fde4c; end: 1074fde6b;  */

undefined8 * FUN_1074fde4c(undefined8 *param_1)

{
  long unaff_x19;
  
  func_0x0001074fe704();
  *param_1 = &PTR_SUB_1109b6d50;
  func_0x0001074fddec(param_1 + 1,unaff_x19 + 8);
  return param_1;
}



/* Entry: 1074fde6c; end: 1074fde8b;  */

undefined8 * FUN_1074fde6c(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_SUB_1109b6d50;
  func_0x0001074fddec(param_2 + 1,param_1 + 8);
  return param_2;
}



/* Entry: 1074fde8c; end: 1074fdf0b;  */

void FUN_1074fde8c(int param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  code *extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001074fe980();
  func_0x0001074fee58();
  func_0x0001074ff0dc();
  if (param_1 != 0) {
    uStack_38 = param_3[1];
    uStack_40 = *param_3;
    lVar2 = *(long *)(unaff_x20 + 0x20);
    lVar1 = lVar2 + 0xf60;
    func_0x0001074fa780();
    if (lVar1 != 0) {
      (**(code **)(**(long **)(unaff_x19 + 0x38) + 0x58))(*(long **)(unaff_x19 + 0x38),&uStack_40);
      func_0x0001074feb40(*(undefined8 *)(lVar2 + 0x30));
      (*extraout_x8)();
    }
  }
  func_0x0001074fea78();
  return;
}



/* Entry: 1074fdf0c; end: 1074fdf33;  */

void FUN_1074fdf0c(undefined8 param_1)

{
  func_0x0001074feaf8();
  func_0x0001074fea08(param_1,&PTR_DAT_1109b6dc0);
  func_0x0001074fe67c();
  return;
}



/* Entry: 1074fdf34; end: 1074fdf3f;  */

undefined ** FUN_1074fdf34(void)

{
  return &PTR_DAT_1109b6dc0;
}



/* Entry: 1074fdf40; end: 1074fdfc7;  */

undefined8 * FUN_1074fdf40(undefined8 *param_1)

{
  *param_1 = &PTR_SUB_1109b6d50;
  func_0x0001074fddec(param_1 + 1);
  return param_1;
}



/* Entry: 1074fdfc8; end: 1074fdfdb;  */

void FUN_1074fdfc8(void)

{
  func_0x0001074fdfa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074fdfdc; end: 1074fdffb;  */

void FUN_1074fdfdc(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001074fe704();
  func_0x0001074fe980(param_1,unaff_x19 + 8);
  FUN_1074fe5b8(&PTR_SUB_1109b6de0);
  return;
}



/* Entry: 1074fdffc; end: 1074fe01b;  */

void FUN_1074fdffc(long param_1,undefined8 param_2)

{
  func_0x0001074fe980(param_2,param_1 + 8);
  FUN_1074fe5b8(&PTR_SUB_1109b6de0);
  return;
}



/* Entry: 1074fe01c; end: 1074fe05f;  */

void FUN_1074fe01c(int param_1)

{
  long unaff_x23;
  
  func_0x0001074fe77c();
  func_0x0001074ff6a4();
  if (param_1 != 0) {
    func_0x0001074fea64(*(undefined8 *)(unaff_x23 + 0x20));
    FUN_1074f3444();
  }
  func_0x0001074fea78();
  return;
}



/* Entry: 1074fe060; end: 1074fe087;  */

void FUN_1074fe060(undefined8 param_1)

{
  func_0x0001074feaf8();
  func_0x0001074fea08(param_1,&PTR_DAT_1109b6e50);
  func_0x0001074fe67c();
  return;
}



/* Entry: 1074fe088; end: 1074fe093;  */

undefined ** FUN_1074fe088(void)

{
  return &PTR_DAT_1109b6e50;
}



/* Entry: 1074fe094; end: 1074fe0df;  */

void FUN_1074fe094(void)

{
  func_0x0001074fe980();
  FUN_1074fe5b8(&PTR_SUB_1109b6de0);
  return;
}



/* Entry: 1074fe0e0; end: 1074fe0f3;  */

void FUN_1074fe0e0(void)

{
  func_0x0001074fe0b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074fe0f4; end: 1074fe113;  */

void FUN_1074fe0f4(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001074fe704();
  func_0x0001074fe980(param_1,unaff_x19 + 8);
  FUN_1074fe5b8(&PTR_SUB_1109b6e70);
  return;
}



/* Entry: 1074fe114; end: 1074fe133;  */

void FUN_1074fe114(long param_1,undefined8 param_2)

{
  func_0x0001074fe980(param_2,param_1 + 8);
  FUN_1074fe5b8(&PTR_SUB_1109b6e70);
  return;
}



/* Entry: 1074fe134; end: 1074fe187;  */

void FUN_1074fe134(void)

{
  int iVar1;
  code *extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 auStack_30 [16];
  
  func_0x0001074fe9f4();
  FUN_1074fd4c8(auStack_30,unaff_x19 + 8);
  iVar1 = (int)unaff_x19 + 8;
  func_0x0001074fd54c();
  if (iVar1 != 0) {
    func_0x0001074feb40(*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x30),*unaff_x20);
    (*extraout_x8)();
  }
  func_0x0001074fea78();
  return;
}


