/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109872894; end: 1098728d7;  */

undefined1  [16] FUN_109872894(uint *param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  ulong *puVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  uint uStack_d4;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  uint uStack_88;
  
  if (param_1 < (uint *)0x1555555555555556) {
    lVar7 = (long)param_1 * 0xc;
    __Znwm(lVar7);
    auVar22._8_8_ = param_1;
    auVar22._0_8_ = lVar7;
    return auVar22;
  }
  func_0x000104c4f740();
  puVar11 = param_1;
  plVar15 = param_2;
  if (param_2[2] + 4 <= param_2[1]) {
    uVar4 = *(uint *)(*param_2 + param_2[2]);
    *param_1 = uVar4;
    lVar10 = param_2[2];
    lVar7 = lVar10 + 4;
    param_2[2] = lVar7;
    if ((uVar4 < 0x21) && (lVar10 + 8 <= param_2[1])) {
      uVar4 = *(uint *)(*param_2 + lVar7);
      param_1[1] = uVar4;
      param_2[2] = param_2[2] + 4;
      if (uVar4 != 0) {
        param_1[2] = 0;
        puVar11 = param_1 + 4;
        FUN_10985d744(puVar11,param_2);
        if ((int)puVar11 != 0) {
          puVar11 = param_1 + 0xe;
          plVar15 = param_2;
          FUN_10985d744(puVar11,param_2);
          if ((int)puVar11 != 0) {
            puVar11 = param_1 + 0x18;
            plVar15 = param_2;
            FUN_10985d744(puVar11,param_2);
            if ((int)puVar11 != 0) {
              puVar11 = param_1 + 0x22;
              FUN_10985d744(puVar11,param_2);
              plVar15 = param_2;
              if ((int)puVar11 != 0) {
                uVar4 = param_1[1];
                uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
                FUN_109849bf0(&lStack_d0,param_1[3],&uStack_90);
                plVar15 = *(long **)(param_1 + 0x38);
                if (*plVar15 != 0) {
                  plVar15[1] = *plVar15;
                  __ZdlPv();
                  *plVar15 = 0;
                  plVar15[1] = 0;
                  plVar15[2] = 0;
                }
                plVar15[1] = lStack_c8;
                *plVar15 = lStack_d0;
                plVar15[2] = lStack_c0;
                uStack_90 = uStack_90 & 0xffffffff00000000;
                FUN_109849bf0(&lStack_d0,param_1[3],&uStack_90);
                plVar15 = *(long **)(param_1 + 0x3e);
                if (*plVar15 != 0) {
                  plVar15[1] = *plVar15;
                  __ZdlPv();
                  *plVar15 = 0;
                  plVar15[1] = 0;
                  plVar15[2] = 0;
                }
                plVar15[1] = lStack_c8;
                *plVar15 = lStack_d0;
                plVar15[2] = lStack_c0;
                uStack_98 = 0;
                uStack_b8 = 0;
                lStack_c0 = 0;
                lStack_a8 = 0;
                lStack_b0 = 0;
                lStack_c8 = 0;
                lStack_d0 = 0;
                puVar11 = &uStack_9c;
                uStack_9c = uVar4;
                FUN_109849c70(&lStack_d0,puVar11);
                uVar16 = 1;
                if (lStack_a8 != 0) {
                  do {
                    lStack_a8 = lStack_a8 + -1;
                    puVar11 = (uint *)(*(long *)(lStack_c8 +
                                                ((ulong)(lStack_b0 + lStack_a8) / 0x155) * 8) +
                                      ((ulong)(lStack_b0 + lStack_a8) % 0x155) * 0xc);
                    uVar2 = *puVar11;
                    uVar17 = puVar11[1];
                    uVar3 = puVar11[2];
                    uVar18 = (ulong)uVar3;
                    puVar11 = (uint *)0x1;
                    func_0x00010984a424(&lStack_d0,1);
                    if (uVar4 < uVar2) {
LAB_109872dc4:
                      uVar16 = 0;
                      goto LAB_109872dc8;
                    }
                    uVar21 = 0;
                    if (param_1[3] - 1 != uVar17) {
                      uVar21 = uVar17 + 1;
                    }
                    if (param_1[3] <= uVar21) goto LAB_109872dc4;
                    plVar15 = (long *)(*(long *)(param_1 + 0x38) + uVar18 * 0x18);
                    lVar7 = *(long *)(param_1 + 0x3e);
                    uVar5 = *(uint *)(*(long *)(lVar7 + uVar18 * 0x18) + (ulong)uVar21 * 4);
                    uVar17 = *param_1;
                    if (uVar17 == uVar5) {
                      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                        uStack_90 = *(ulong *)*plVar15;
                        uStack_88 = (uint)((ulong *)*plVar15)[1];
                        puVar11 = (uint *)&uStack_90;
                        FUN_109872e24(*param_3,puVar11);
                        param_1[2] = param_1[2] + 1;
                      }
                    }
                    else {
                      if (2 < uVar2) {
                        if (param_1[2] <= param_1[1]) {
                          uVar1 = uVar3 + 1;
                          FUN_1093784d8(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0x18,*plVar15,
                                        plVar15[1],plVar15[1] - *plVar15 >> 2);
                          lVar7 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0x18);
                          *(int *)(lVar7 + (ulong)uVar21 * 4) =
                               *(int *)(lVar7 + (ulong)uVar21 * 4) +
                               (1 << (ulong)(uVar17 + ~uVar5 & 0x1f));
                          uStack_d4 = 0;
                          puVar11 = (uint *)(ulong)((uint)LZCOUNT(uVar2) ^ 0x1f);
                          FUN_109849b44(param_1 + 4,puVar11,&uStack_d4);
                          iVar20 = (uVar2 >> 1) - uStack_d4;
                          if (uStack_d4 <= uVar2 >> 1) {
                            iVar6 = uVar2 - iVar20;
                            iVar19 = iVar20;
                            if (iVar20 != iVar6) {
                              puVar11 = *(uint **)(param_1 + 0x28);
                              if (puVar11 != *(uint **)(param_1 + 0x24)) {
                                uVar17 = param_1[0x2a];
                                uVar5 = *puVar11;
                                uVar2 = uVar17 + 1;
                                param_1[0x2a] = uVar2;
                                if (uVar2 == 0x20) {
                                  *(uint **)(param_1 + 0x28) = puVar11 + 1;
                                  param_1[0x2a] = 0;
                                }
                                iVar19 = iVar6;
                                if ((uVar5 & 0x80000000U >> (ulong)(uVar17 & 0x1f)) != 0)
                                goto LAB_109872d54;
                              }
                              iVar19 = iVar20;
                              iVar20 = iVar6;
                            }
LAB_109872d54:
                            lVar10 = *(long *)(param_1 + 0x3e);
                            puVar13 = (undefined8 *)(lVar10 + (ulong)uVar3 * 0x18);
                            puVar11 = (uint *)*puVar13;
                            puVar11[uVar21] = puVar11[uVar21] + 1;
                            lVar7 = puVar13[1];
                            FUN_1093784d8(lVar10 + (ulong)uVar1 * 0x18,puVar11,lVar7,
                                          lVar7 - (long)puVar11 >> 2);
                            if (iVar20 != 0) {
                              uStack_90 = CONCAT44(uVar21,iVar20);
                              puVar11 = (uint *)&uStack_90;
                              uStack_88 = uVar3;
                              func_0x00010984a498(&lStack_d0,puVar11);
                            }
                            if (iVar19 != 0) {
                              uStack_90 = CONCAT44(uVar21,iVar19);
                              puVar11 = (uint *)&uStack_90;
                              uStack_88 = uVar1;
                              func_0x00010984a498(&lStack_d0,puVar11);
                            }
                            goto LAB_109872db0;
                          }
                        }
                        goto LAB_109872dc4;
                      }
                      puVar8 = *(uint **)(param_1 + 0x32);
                      *puVar8 = uVar21;
                      uVar12 = (ulong)param_1[3];
                      if (1 < param_1[3]) {
                        uVar14 = 1;
                        do {
                          uVar17 = 0;
                          if (uVar21 != (int)uVar12 - 1U) {
                            uVar17 = uVar21 + 1;
                          }
                          puVar8[uVar14] = uVar17;
                          uVar14 = uVar14 + 1;
                          uVar12 = (ulong)param_1[3];
                          uVar21 = uVar17;
                        } while (uVar14 < uVar12);
                      }
                      if (uVar2 != 0) {
                        uVar17 = 0;
                        do {
                          puVar9 = *(ulong **)(param_1 + 0x2c);
                          if (param_1[3] != 0) {
                            uVar12 = 0;
                            lVar10 = *(long *)(param_1 + 0x32);
                            do {
                              *(undefined4 *)
                               ((long)puVar9 + (ulong)*(uint *)(lVar10 + uVar12 * 4) * 4) = 0;
                              uVar14 = (ulong)*(uint *)(lVar10 + uVar12 * 4);
                              uVar3 = *param_1 -
                                      *(int *)(*(long *)(lVar7 + uVar18 * 0x18) + uVar14 * 4);
                              puVar11 = (uint *)(ulong)uVar3;
                              if (uVar3 != 0) {
                                puVar8 = param_1 + 0xe;
                                FUN_109849b44(puVar8,puVar11,(long)puVar9 + uVar14 * 4);
                                if ((int)puVar8 == 0) goto LAB_109872dc4;
                                lVar10 = *(long *)(param_1 + 0x32);
                                puVar9 = *(ulong **)(param_1 + 0x2c);
                                uVar14 = (ulong)*(uint *)(lVar10 + uVar12 * 4);
                              }
                              *(uint *)((long)puVar9 + uVar14 * 4) =
                                   *(uint *)((long)puVar9 + uVar14 * 4) |
                                   *(uint *)(*plVar15 + uVar14 * 4);
                              uVar12 = uVar12 + 1;
                            } while (uVar12 < param_1[3]);
                          }
                          uStack_90 = *puVar9;
                          uStack_88 = (uint)puVar9[1];
                          puVar11 = (uint *)&uStack_90;
                          FUN_109872e24(*param_3,puVar11);
                          param_1[2] = param_1[2] + 1;
                          uVar17 = uVar17 + 1;
                        } while (uVar17 != uVar2);
                      }
                    }
LAB_109872db0:
                  } while (lStack_a8 != 0);
                  uVar16 = 1;
                }
LAB_109872dc8:
                FUN_10984a54c(&lStack_d0);
                auVar24._8_8_ = puVar11;
                auVar24._0_8_ = uVar16;
                return auVar24;
              }
            }
          }
        }
      }
    }
  }
  auVar23._8_8_ = plVar15;
  auVar23._0_8_ = puVar11;
  return auVar23;
}



/* Entry: 1098728d8; end: 1098729bf;  */

uint * FUN_1098728d8(uint *param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  uint *puVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  uint uStack_b4;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint uStack_68;
  
  puVar13 = param_1;
  if (param_2[2] + 4 <= param_2[1]) {
    uVar4 = *(uint *)(*param_2 + param_2[2]);
    *param_1 = uVar4;
    lVar9 = param_2[2];
    lVar17 = lVar9 + 4;
    param_2[2] = lVar17;
    if ((uVar4 < 0x21) && (lVar9 + 8 <= param_2[1])) {
      uVar4 = *(uint *)(*param_2 + lVar17);
      param_1[1] = uVar4;
      param_2[2] = param_2[2] + 4;
      if (uVar4 != 0) {
        param_1[2] = 0;
        puVar13 = param_1 + 4;
        FUN_10985d744(puVar13,param_2);
        if ((int)puVar13 != 0) {
          puVar13 = param_1 + 0xe;
          FUN_10985d744(puVar13,param_2);
          if ((int)puVar13 != 0) {
            puVar13 = param_1 + 0x18;
            FUN_10985d744(puVar13,param_2);
            if ((int)puVar13 != 0) {
              puVar13 = param_1 + 0x22;
              FUN_10985d744(puVar13,param_2);
              if ((int)puVar13 != 0) {
                uVar4 = param_1[1];
                uStack_70 = (ulong)uStack_70._4_4_ << 0x20;
                FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
                plVar12 = *(long **)(param_1 + 0x38);
                if (*plVar12 != 0) {
                  plVar12[1] = *plVar12;
                  __ZdlPv();
                  *plVar12 = 0;
                  plVar12[1] = 0;
                  plVar12[2] = 0;
                }
                plVar12[1] = lStack_a8;
                *plVar12 = lStack_b0;
                plVar12[2] = lStack_a0;
                uStack_70 = uStack_70 & 0xffffffff00000000;
                FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
                plVar12 = *(long **)(param_1 + 0x3e);
                if (*plVar12 != 0) {
                  plVar12[1] = *plVar12;
                  __ZdlPv();
                  *plVar12 = 0;
                  plVar12[1] = 0;
                  plVar12[2] = 0;
                }
                plVar12[1] = lStack_a8;
                *plVar12 = lStack_b0;
                plVar12[2] = lStack_a0;
                uStack_78 = 0;
                uStack_98 = 0;
                lStack_a0 = 0;
                lStack_88 = 0;
                lStack_90 = 0;
                lStack_a8 = 0;
                lStack_b0 = 0;
                uStack_7c = uVar4;
                FUN_109849c70(&lStack_b0,&uStack_7c);
                puVar13 = (uint *)0x1;
                if (lStack_88 != 0) {
                  do {
                    lStack_88 = lStack_88 + -1;
                    puVar13 = (uint *)(*(long *)(lStack_a8 +
                                                ((ulong)(lStack_90 + lStack_88) / 0x155) * 8) +
                                      ((ulong)(lStack_90 + lStack_88) % 0x155) * 0xc);
                    uVar2 = *puVar13;
                    uVar14 = puVar13[1];
                    uVar3 = puVar13[2];
                    uVar15 = (ulong)uVar3;
                    func_0x00010984a424(&lStack_b0,1);
                    if (uVar4 < uVar2) {
LAB_109872dc4:
                      puVar13 = (uint *)0x0;
                      goto LAB_109872dc8;
                    }
                    uVar19 = 0;
                    if (param_1[3] - 1 != uVar14) {
                      uVar19 = uVar14 + 1;
                    }
                    if (param_1[3] <= uVar19) goto LAB_109872dc4;
                    plVar12 = (long *)(*(long *)(param_1 + 0x38) + uVar15 * 0x18);
                    lVar17 = *(long *)(param_1 + 0x3e);
                    uVar5 = *(uint *)(*(long *)(lVar17 + uVar15 * 0x18) + (ulong)uVar19 * 4);
                    uVar14 = *param_1;
                    if (uVar14 == uVar5) {
                      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                        uStack_70 = *(ulong *)*plVar12;
                        uStack_68 = (uint)((ulong *)*plVar12)[1];
                        FUN_109872e24(*param_3,&uStack_70);
                        param_1[2] = param_1[2] + 1;
                      }
                    }
                    else {
                      if (2 < uVar2) {
                        if (param_1[2] <= param_1[1]) {
                          uVar1 = uVar3 + 1;
                          FUN_1093784d8(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0x18,*plVar12,
                                        plVar12[1],plVar12[1] - *plVar12 >> 2);
                          lVar17 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0x18);
                          *(int *)(lVar17 + (ulong)uVar19 * 4) =
                               *(int *)(lVar17 + (ulong)uVar19 * 4) +
                               (1 << (ulong)(uVar14 + ~uVar5 & 0x1f));
                          uStack_b4 = 0;
                          FUN_109849b44(param_1 + 4,(uint)LZCOUNT(uVar2) ^ 0x1f,&uStack_b4);
                          iVar18 = (uVar2 >> 1) - uStack_b4;
                          if (uStack_b4 <= uVar2 >> 1) {
                            iVar6 = uVar2 - iVar18;
                            iVar16 = iVar18;
                            if (iVar18 != iVar6) {
                              puVar13 = *(uint **)(param_1 + 0x28);
                              if (puVar13 != *(uint **)(param_1 + 0x24)) {
                                uVar14 = param_1[0x2a];
                                uVar5 = *puVar13;
                                uVar2 = uVar14 + 1;
                                param_1[0x2a] = uVar2;
                                if (uVar2 == 0x20) {
                                  *(uint **)(param_1 + 0x28) = puVar13 + 1;
                                  param_1[0x2a] = 0;
                                }
                                iVar16 = iVar6;
                                if ((uVar5 & 0x80000000U >> (ulong)(uVar14 & 0x1f)) != 0)
                                goto LAB_109872d54;
                              }
                              iVar16 = iVar18;
                              iVar18 = iVar6;
                            }
LAB_109872d54:
                            lVar8 = *(long *)(param_1 + 0x3e);
                            plVar12 = (long *)(lVar8 + (ulong)uVar3 * 0x18);
                            lVar17 = *plVar12;
                            *(int *)(lVar17 + (ulong)uVar19 * 4) =
                                 *(int *)(lVar17 + (ulong)uVar19 * 4) + 1;
                            lVar9 = plVar12[1];
                            FUN_1093784d8(lVar8 + (ulong)uVar1 * 0x18,lVar17,lVar9,
                                          lVar9 - lVar17 >> 2);
                            if (iVar18 != 0) {
                              uStack_70 = CONCAT44(uVar19,iVar18);
                              uStack_68 = uVar3;
                              func_0x00010984a498(&lStack_b0,&uStack_70);
                            }
                            if (iVar16 != 0) {
                              uStack_70 = CONCAT44(uVar19,iVar16);
                              uStack_68 = uVar1;
                              func_0x00010984a498(&lStack_b0,&uStack_70);
                            }
                            goto LAB_109872db0;
                          }
                        }
                        goto LAB_109872dc4;
                      }
                      puVar13 = *(uint **)(param_1 + 0x32);
                      *puVar13 = uVar19;
                      uVar10 = (ulong)param_1[3];
                      if (1 < param_1[3]) {
                        uVar11 = 1;
                        do {
                          uVar14 = 0;
                          if (uVar19 != (int)uVar10 - 1U) {
                            uVar14 = uVar19 + 1;
                          }
                          puVar13[uVar11] = uVar14;
                          uVar11 = uVar11 + 1;
                          uVar10 = (ulong)param_1[3];
                          uVar19 = uVar14;
                        } while (uVar11 < uVar10);
                      }
                      if (uVar2 != 0) {
                        uVar14 = 0;
                        do {
                          puVar7 = *(ulong **)(param_1 + 0x2c);
                          if (param_1[3] != 0) {
                            uVar10 = 0;
                            lVar9 = *(long *)(param_1 + 0x32);
                            do {
                              *(undefined4 *)
                               ((long)puVar7 + (ulong)*(uint *)(lVar9 + uVar10 * 4) * 4) = 0;
                              uVar11 = (ulong)*(uint *)(lVar9 + uVar10 * 4);
                              iVar18 = *param_1 -
                                       *(int *)(*(long *)(lVar17 + uVar15 * 0x18) + uVar11 * 4);
                              if (iVar18 != 0) {
                                puVar13 = param_1 + 0xe;
                                FUN_109849b44(puVar13,iVar18,(long)puVar7 + uVar11 * 4);
                                if ((int)puVar13 == 0) goto LAB_109872dc4;
                                lVar9 = *(long *)(param_1 + 0x32);
                                puVar7 = *(ulong **)(param_1 + 0x2c);
                                uVar11 = (ulong)*(uint *)(lVar9 + uVar10 * 4);
                              }
                              *(uint *)((long)puVar7 + uVar11 * 4) =
                                   *(uint *)((long)puVar7 + uVar11 * 4) |
                                   *(uint *)(*plVar12 + uVar11 * 4);
                              uVar10 = uVar10 + 1;
                            } while (uVar10 < param_1[3]);
                          }
                          uStack_70 = *puVar7;
                          uStack_68 = (uint)puVar7[1];
                          FUN_109872e24(*param_3,&uStack_70);
                          param_1[2] = param_1[2] + 1;
                          uVar14 = uVar14 + 1;
                        } while (uVar14 != uVar2);
                      }
                    }
LAB_109872db0:
                  } while (lStack_88 != 0);
                  puVar13 = (uint *)0x1;
                }
LAB_109872dc8:
                FUN_10984a54c(&lStack_b0);
                return puVar13;
              }
            }
          }
        }
      }
    }
  }
  return puVar13;
}



/* Entry: 1098729c0; end: 109872e23;  */

undefined8 FUN_1098729c0(uint *param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  uint uStack_b4;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint uStack_68;
  
  uStack_70 = uStack_70 & 0xffffffff00000000;
  FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
  plVar12 = *(long **)(param_1 + 0x38);
  if (*plVar12 != 0) {
    plVar12[1] = *plVar12;
    __ZdlPv();
    *plVar12 = 0;
    plVar12[1] = 0;
    plVar12[2] = 0;
  }
  plVar12[1] = lStack_a8;
  *plVar12 = lStack_b0;
  plVar12[2] = lStack_a0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
  plVar12 = *(long **)(param_1 + 0x3e);
  if (*plVar12 != 0) {
    plVar12[1] = *plVar12;
    __ZdlPv();
    *plVar12 = 0;
    plVar12[1] = 0;
    plVar12[2] = 0;
  }
  plVar12[1] = lStack_a8;
  *plVar12 = lStack_b0;
  plVar12[2] = lStack_a0;
  uStack_78 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  lStack_a8 = 0;
  lStack_b0 = 0;
  uStack_7c = param_2;
  FUN_109849c70(&lStack_b0,&uStack_7c);
  uVar13 = 1;
  if (lStack_88 != 0) {
    do {
      lStack_88 = lStack_88 + -1;
      puVar8 = (uint *)(*(long *)(lStack_a8 + ((ulong)(lStack_90 + lStack_88) / 0x155) * 8) +
                       ((ulong)(lStack_90 + lStack_88) % 0x155) * 0xc);
      uVar2 = *puVar8;
      uVar14 = puVar8[1];
      uVar3 = puVar8[2];
      uVar15 = (ulong)uVar3;
      func_0x00010984a424(&lStack_b0,1);
      if (param_2 < uVar2) {
LAB_109872dc4:
        uVar13 = 0;
        goto LAB_109872dc8;
      }
      uVar19 = 0;
      if (param_1[3] - 1 != uVar14) {
        uVar19 = uVar14 + 1;
      }
      if (param_1[3] <= uVar19) goto LAB_109872dc4;
      plVar12 = (long *)(*(long *)(param_1 + 0x38) + uVar15 * 0x18);
      lVar17 = *(long *)(param_1 + 0x3e);
      uVar4 = *(uint *)(*(long *)(lVar17 + uVar15 * 0x18) + (ulong)uVar19 * 4);
      uVar14 = *param_1;
      if (uVar14 == uVar4) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          uStack_70 = *(ulong *)*plVar12;
          uStack_68 = (uint)((ulong *)*plVar12)[1];
          FUN_109872e24(*param_3,&uStack_70);
          param_1[2] = param_1[2] + 1;
        }
      }
      else {
        if (2 < uVar2) {
          if (param_1[2] <= param_1[1]) {
            uVar1 = uVar3 + 1;
            FUN_1093784d8(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0x18,*plVar12,plVar12[1],
                          plVar12[1] - *plVar12 >> 2);
            lVar17 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0x18);
            *(int *)(lVar17 + (ulong)uVar19 * 4) =
                 *(int *)(lVar17 + (ulong)uVar19 * 4) + (1 << (ulong)(uVar14 + ~uVar4 & 0x1f));
            uStack_b4 = 0;
            FUN_109849b44(param_1 + 4,(uint)LZCOUNT(uVar2) ^ 0x1f,&uStack_b4);
            iVar18 = (uVar2 >> 1) - uStack_b4;
            if (uStack_b4 <= uVar2 >> 1) {
              iVar5 = uVar2 - iVar18;
              iVar16 = iVar18;
              if (iVar18 != iVar5) {
                puVar8 = *(uint **)(param_1 + 0x28);
                if (puVar8 != *(uint **)(param_1 + 0x24)) {
                  uVar14 = param_1[0x2a];
                  uVar4 = *puVar8;
                  uVar2 = uVar14 + 1;
                  param_1[0x2a] = uVar2;
                  if (uVar2 == 0x20) {
                    *(uint **)(param_1 + 0x28) = puVar8 + 1;
                    param_1[0x2a] = 0;
                  }
                  iVar16 = iVar5;
                  if ((uVar4 & 0x80000000U >> (ulong)(uVar14 & 0x1f)) != 0) goto LAB_109872d54;
                }
                iVar16 = iVar18;
                iVar18 = iVar5;
              }
LAB_109872d54:
              lVar7 = *(long *)(param_1 + 0x3e);
              plVar12 = (long *)(lVar7 + (ulong)uVar3 * 0x18);
              lVar17 = *plVar12;
              *(int *)(lVar17 + (ulong)uVar19 * 4) = *(int *)(lVar17 + (ulong)uVar19 * 4) + 1;
              lVar10 = plVar12[1];
              FUN_1093784d8(lVar7 + (ulong)uVar1 * 0x18,lVar17,lVar10,lVar10 - lVar17 >> 2);
              if (iVar18 != 0) {
                uStack_70 = CONCAT44(uVar19,iVar18);
                uStack_68 = uVar3;
                func_0x00010984a498(&lStack_b0,&uStack_70);
              }
              if (iVar16 != 0) {
                uStack_70 = CONCAT44(uVar19,iVar16);
                uStack_68 = uVar1;
                func_0x00010984a498(&lStack_b0,&uStack_70);
              }
              goto LAB_109872db0;
            }
          }
          goto LAB_109872dc4;
        }
        puVar8 = *(uint **)(param_1 + 0x32);
        *puVar8 = uVar19;
        uVar9 = (ulong)param_1[3];
        if (1 < param_1[3]) {
          uVar11 = 1;
          do {
            uVar14 = 0;
            if (uVar19 != (int)uVar9 - 1U) {
              uVar14 = uVar19 + 1;
            }
            puVar8[uVar11] = uVar14;
            uVar11 = uVar11 + 1;
            uVar9 = (ulong)param_1[3];
            uVar19 = uVar14;
          } while (uVar11 < uVar9);
        }
        if (uVar2 != 0) {
          uVar14 = 0;
          do {
            puVar6 = *(ulong **)(param_1 + 0x2c);
            if (param_1[3] != 0) {
              uVar9 = 0;
              lVar10 = *(long *)(param_1 + 0x32);
              do {
                *(undefined4 *)((long)puVar6 + (ulong)*(uint *)(lVar10 + uVar9 * 4) * 4) = 0;
                uVar11 = (ulong)*(uint *)(lVar10 + uVar9 * 4);
                iVar18 = *param_1 - *(int *)(*(long *)(lVar17 + uVar15 * 0x18) + uVar11 * 4);
                if (iVar18 != 0) {
                  puVar8 = param_1 + 0xe;
                  FUN_109849b44(puVar8,iVar18,(long)puVar6 + uVar11 * 4);
                  if ((int)puVar8 == 0) goto LAB_109872dc4;
                  lVar10 = *(long *)(param_1 + 0x32);
                  puVar6 = *(ulong **)(param_1 + 0x2c);
                  uVar11 = (ulong)*(uint *)(lVar10 + uVar9 * 4);
                }
                *(uint *)((long)puVar6 + uVar11 * 4) =
                     *(uint *)((long)puVar6 + uVar11 * 4) | *(uint *)(*plVar12 + uVar11 * 4);
                uVar9 = uVar9 + 1;
              } while (uVar9 < param_1[3]);
            }
            uStack_70 = *puVar6;
            uStack_68 = (uint)puVar6[1];
            FUN_109872e24(*param_3,&uStack_70);
            param_1[2] = param_1[2] + 1;
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar2);
        }
      }
LAB_109872db0:
    } while (lStack_88 != 0);
    uVar13 = 1;
  }
LAB_109872dc8:
  FUN_10984a54c(&lStack_b0);
  return uVar13;
}



/* Entry: 109872e24; end: 109873027;  */

uint * FUN_109872e24(uint *param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  uint *puVar8;
  ulong *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uStack_114;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  uint uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  uint uStack_c8;
  uint *puStack_58;
  long lStack_50;
  long lStack_48;
  uint *puStack_40;
  uint *puStack_38;
  
  uVar17 = *(ulong *)(param_1 + 2);
  if (uVar17 < *(ulong *)(param_1 + 4)) {
    lVar11 = 0;
    do {
      *(undefined4 *)(uVar17 + lVar11) = *(undefined4 *)((long)param_2 + lVar11);
      lVar11 = lVar11 + 4;
    } while (lVar11 != 0xc);
    lVar11 = uVar17 + 0xc;
    puStack_58 = param_1;
  }
  else {
    lVar11 = uVar17 - *(long *)param_1;
    puVar8 = (uint *)((lVar11 >> 2) * -0x5555555555555555 + 1);
    if ((uint *)0x1555555555555555 < puVar8) {
      FUN_1098727fc();
      puVar8 = param_1;
      if (param_2[2] + 4 <= param_2[1]) {
        uVar4 = *(uint *)(*param_2 + param_2[2]);
        *param_1 = uVar4;
        lVar13 = param_2[2];
        lVar11 = lVar13 + 4;
        param_2[2] = lVar11;
        if ((uVar4 < 0x21) && (lVar13 + 8 <= param_2[1])) {
          uVar4 = *(uint *)(*param_2 + lVar11);
          param_1[1] = uVar4;
          param_2[2] = param_2[2] + 4;
          if (uVar4 != 0) {
            param_1[2] = 0;
            puVar8 = param_1 + 4;
            FUN_10985d744(puVar8,param_2);
            if ((int)puVar8 != 0) {
              puVar8 = param_1 + 0xe;
              FUN_10985d744(puVar8,param_2);
              if ((int)puVar8 != 0) {
                puVar8 = param_1 + 0x18;
                FUN_10985d744(puVar8,param_2);
                if ((int)puVar8 != 0) {
                  puVar8 = param_1 + 0x22;
                  FUN_10985d744(puVar8,param_2);
                  if ((int)puVar8 != 0) {
                    uVar4 = param_1[1];
                    uStack_d0 = (ulong)uStack_d0._4_4_ << 0x20;
                    FUN_109849bf0(&lStack_110,param_1[3],&uStack_d0);
                    plVar7 = *(long **)(param_1 + 0x38);
                    if (*plVar7 != 0) {
                      plVar7[1] = *plVar7;
                      __ZdlPv();
                      *plVar7 = 0;
                      plVar7[1] = 0;
                      plVar7[2] = 0;
                    }
                    plVar7[1] = lStack_108;
                    *plVar7 = lStack_110;
                    plVar7[2] = lStack_100;
                    uStack_d0 = uStack_d0 & 0xffffffff00000000;
                    FUN_109849bf0(&lStack_110,param_1[3],&uStack_d0);
                    plVar7 = *(long **)(param_1 + 0x3e);
                    if (*plVar7 != 0) {
                      plVar7[1] = *plVar7;
                      __ZdlPv();
                      *plVar7 = 0;
                      plVar7[1] = 0;
                      plVar7[2] = 0;
                    }
                    plVar7[1] = lStack_108;
                    *plVar7 = lStack_110;
                    plVar7[2] = lStack_100;
                    uStack_d8 = 0;
                    uStack_f8 = 0;
                    lStack_100 = 0;
                    lStack_e8 = 0;
                    lStack_f0 = 0;
                    lStack_108 = 0;
                    lStack_110 = 0;
                    uStack_dc = uVar4;
                    FUN_10984acc0(&lStack_110,&uStack_dc);
                    puVar8 = (uint *)0x1;
                    if (lStack_e8 != 0) {
                      do {
                        lStack_e8 = lStack_e8 + -1;
                        puVar8 = (uint *)(*(long *)(lStack_108 +
                                                   ((ulong)(lStack_f0 + lStack_e8) / 0x155) * 8) +
                                         ((ulong)(lStack_f0 + lStack_e8) % 0x155) * 0xc);
                        uVar2 = *puVar8;
                        uVar16 = puVar8[1];
                        uVar3 = puVar8[2];
                        uVar17 = (ulong)uVar3;
                        func_0x00010984b474(&lStack_110,1);
                        if (uVar4 < uVar2) {
LAB_10987342c:
                          puVar8 = (uint *)0x0;
                          goto LAB_109873430;
                        }
                        uVar20 = 0;
                        if (param_1[3] - 1 != uVar16) {
                          uVar20 = uVar16 + 1;
                        }
                        if (param_1[3] <= uVar20) goto LAB_10987342c;
                        plVar7 = (long *)(*(long *)(param_1 + 0x38) + uVar17 * 0x18);
                        lVar11 = *(long *)(param_1 + 0x3e);
                        uVar5 = *(uint *)(*(long *)(lVar11 + uVar17 * 0x18) + (ulong)uVar20 * 4);
                        uVar16 = *param_1;
                        if (uVar16 == uVar5) {
                          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                            uStack_d0 = *(ulong *)*plVar7;
                            uStack_c8 = (uint)((ulong *)*plVar7)[1];
                            FUN_109872e24(*param_3,&uStack_d0);
                            param_1[2] = param_1[2] + 1;
                          }
                        }
                        else {
                          if (2 < uVar2) {
                            if (param_1[2] <= param_1[1]) {
                              uVar1 = uVar3 + 1;
                              FUN_1093784d8(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0x18,*plVar7,
                                            plVar7[1],plVar7[1] - *plVar7 >> 2);
                              lVar11 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0x18);
                              *(int *)(lVar11 + (ulong)uVar20 * 4) =
                                   *(int *)(lVar11 + (ulong)uVar20 * 4) +
                                   (1 << (ulong)(uVar16 + ~uVar5 & 0x1f));
                              uStack_114 = 0;
                              FUN_109849b44(param_1 + 4,(uint)LZCOUNT(uVar2) ^ 0x1f,&uStack_114);
                              iVar19 = (uVar2 >> 1) - uStack_114;
                              if (uStack_114 <= uVar2 >> 1) {
                                iVar6 = uVar2 - iVar19;
                                iVar18 = iVar19;
                                if (iVar19 != iVar6) {
                                  puVar8 = *(uint **)(param_1 + 0x28);
                                  if (puVar8 != *(uint **)(param_1 + 0x24)) {
                                    uVar16 = param_1[0x2a];
                                    uVar5 = *puVar8;
                                    uVar2 = uVar16 + 1;
                                    param_1[0x2a] = uVar2;
                                    if (uVar2 == 0x20) {
                                      *(uint **)(param_1 + 0x28) = puVar8 + 1;
                                      param_1[0x2a] = 0;
                                    }
                                    iVar18 = iVar6;
                                    if ((uVar5 & 0x80000000U >> (ulong)(uVar16 & 0x1f)) != 0)
                                    goto LAB_1098733bc;
                                  }
                                  iVar18 = iVar19;
                                  iVar19 = iVar6;
                                }
LAB_1098733bc:
                                lVar10 = *(long *)(param_1 + 0x3e);
                                plVar7 = (long *)(lVar10 + (ulong)uVar3 * 0x18);
                                lVar11 = *plVar7;
                                *(int *)(lVar11 + (ulong)uVar20 * 4) =
                                     *(int *)(lVar11 + (ulong)uVar20 * 4) + 1;
                                lVar13 = plVar7[1];
                                FUN_1093784d8(lVar10 + (ulong)uVar1 * 0x18,lVar11,lVar13,
                                              lVar13 - lVar11 >> 2);
                                if (iVar19 != 0) {
                                  uStack_d0 = CONCAT44(uVar20,iVar19);
                                  uStack_c8 = uVar3;
                                  func_0x00010984b4e8(&lStack_110,&uStack_d0);
                                }
                                if (iVar18 != 0) {
                                  uStack_d0 = CONCAT44(uVar20,iVar18);
                                  uStack_c8 = uVar1;
                                  func_0x00010984b4e8(&lStack_110,&uStack_d0);
                                }
                                goto LAB_109873418;
                              }
                            }
                            goto LAB_10987342c;
                          }
                          puVar8 = *(uint **)(param_1 + 0x32);
                          *puVar8 = uVar20;
                          uVar12 = (ulong)param_1[3];
                          if (1 < param_1[3]) {
                            uVar14 = 1;
                            do {
                              uVar16 = 0;
                              if (uVar20 != (int)uVar12 - 1U) {
                                uVar16 = uVar20 + 1;
                              }
                              puVar8[uVar14] = uVar16;
                              uVar14 = uVar14 + 1;
                              uVar12 = (ulong)param_1[3];
                              uVar20 = uVar16;
                            } while (uVar14 < uVar12);
                          }
                          if (uVar2 != 0) {
                            uVar16 = 0;
                            do {
                              puVar9 = *(ulong **)(param_1 + 0x2c);
                              if (param_1[3] != 0) {
                                uVar12 = 0;
                                lVar13 = *(long *)(param_1 + 0x32);
                                do {
                                  *(undefined4 *)
                                   ((long)puVar9 + (ulong)*(uint *)(lVar13 + uVar12 * 4) * 4) = 0;
                                  uVar14 = (ulong)*(uint *)(lVar13 + uVar12 * 4);
                                  iVar19 = *param_1 -
                                           *(int *)(*(long *)(lVar11 + uVar17 * 0x18) + uVar14 * 4);
                                  if (iVar19 != 0) {
                                    puVar8 = param_1 + 0xe;
                                    FUN_109849b44(puVar8,iVar19,(long)puVar9 + uVar14 * 4);
                                    if ((int)puVar8 == 0) goto LAB_10987342c;
                                    lVar13 = *(long *)(param_1 + 0x32);
                                    puVar9 = *(ulong **)(param_1 + 0x2c);
                                    uVar14 = (ulong)*(uint *)(lVar13 + uVar12 * 4);
                                  }
                                  *(uint *)((long)puVar9 + uVar14 * 4) =
                                       *(uint *)((long)puVar9 + uVar14 * 4) |
                                       *(uint *)(*plVar7 + uVar14 * 4);
                                  uVar12 = uVar12 + 1;
                                } while (uVar12 < param_1[3]);
                              }
                              uStack_d0 = *puVar9;
                              uStack_c8 = (uint)puVar9[1];
                              FUN_109872e24(*param_3,&uStack_d0);
                              param_1[2] = param_1[2] + 1;
                              uVar16 = uVar16 + 1;
                            } while (uVar16 != uVar2);
                          }
                        }
LAB_109873418:
                      } while (lStack_e8 != 0);
                      puVar8 = (uint *)0x1;
                    }
LAB_109873430:
                    FUN_10984b59c(&lStack_110);
                    return puVar8;
                  }
                }
              }
            }
          }
        }
      }
      return puVar8;
    }
    lVar13 = (long)(*(ulong *)(param_1 + 4) - *(long *)param_1) >> 2;
    puVar15 = (uint *)(lVar13 * 0x5555555555555556);
    if (puVar15 < puVar8 || (long)puVar15 - (long)puVar8 == 0) {
      puVar15 = puVar8;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar13 * -0x5555555555555555)) {
      puVar15 = (uint *)0x1555555555555555;
    }
    puStack_38 = param_1;
    if (puVar15 == (uint *)0x0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = param_2;
      FUN_109872894();
    }
    lVar13 = 0;
    lStack_50 = (long)puVar15 + lVar11;
    puStack_40 = puVar15 + (long)plVar7 * 3;
    do {
      *(undefined4 *)(lStack_50 + lVar13) = *(undefined4 *)((long)param_2 + lVar13);
      lVar13 = lVar13 + 4;
    } while (lVar13 != 0xc);
    lStack_48 = lStack_50 + 0xc;
    puStack_58 = puVar15;
    FUN_109872810(param_1,&puStack_58);
    lVar11 = *(long *)(param_1 + 2);
    if (puStack_58 != (uint *)0x0) {
      __ZdlPv();
    }
  }
  *(long *)(param_1 + 2) = lVar11;
  return puStack_58;
}



/* Entry: 109873028; end: 10987348b;  */

undefined8 FUN_109873028(uint *param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  uint uStack_b4;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint uStack_68;
  
  uStack_70 = uStack_70 & 0xffffffff00000000;
  FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
  plVar12 = *(long **)(param_1 + 0x38);
  if (*plVar12 != 0) {
    plVar12[1] = *plVar12;
    __ZdlPv();
    *plVar12 = 0;
    plVar12[1] = 0;
    plVar12[2] = 0;
  }
  plVar12[1] = lStack_a8;
  *plVar12 = lStack_b0;
  plVar12[2] = lStack_a0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
  plVar12 = *(long **)(param_1 + 0x3e);
  if (*plVar12 != 0) {
    plVar12[1] = *plVar12;
    __ZdlPv();
    *plVar12 = 0;
    plVar12[1] = 0;
    plVar12[2] = 0;
  }
  plVar12[1] = lStack_a8;
  *plVar12 = lStack_b0;
  plVar12[2] = lStack_a0;
  uStack_78 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  lStack_a8 = 0;
  lStack_b0 = 0;
  uStack_7c = param_2;
  FUN_10984acc0(&lStack_b0,&uStack_7c);
  uVar13 = 1;
  if (lStack_88 != 0) {
    do {
      lStack_88 = lStack_88 + -1;
      puVar8 = (uint *)(*(long *)(lStack_a8 + ((ulong)(lStack_90 + lStack_88) / 0x155) * 8) +
                       ((ulong)(lStack_90 + lStack_88) % 0x155) * 0xc);
      uVar2 = *puVar8;
      uVar14 = puVar8[1];
      uVar3 = puVar8[2];
      uVar15 = (ulong)uVar3;
      func_0x00010984b474(&lStack_b0,1);
      if (param_2 < uVar2) {
LAB_10987342c:
        uVar13 = 0;
        goto LAB_109873430;
      }
      uVar19 = 0;
      if (param_1[3] - 1 != uVar14) {
        uVar19 = uVar14 + 1;
      }
      if (param_1[3] <= uVar19) goto LAB_10987342c;
      plVar12 = (long *)(*(long *)(param_1 + 0x38) + uVar15 * 0x18);
      lVar17 = *(long *)(param_1 + 0x3e);
      uVar4 = *(uint *)(*(long *)(lVar17 + uVar15 * 0x18) + (ulong)uVar19 * 4);
      uVar14 = *param_1;
      if (uVar14 == uVar4) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          uStack_70 = *(ulong *)*plVar12;
          uStack_68 = (uint)((ulong *)*plVar12)[1];
          FUN_109872e24(*param_3,&uStack_70);
          param_1[2] = param_1[2] + 1;
        }
      }
      else {
        if (2 < uVar2) {
          if (param_1[2] <= param_1[1]) {
            uVar1 = uVar3 + 1;
            FUN_1093784d8(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0x18,*plVar12,plVar12[1],
                          plVar12[1] - *plVar12 >> 2);
            lVar17 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0x18);
            *(int *)(lVar17 + (ulong)uVar19 * 4) =
                 *(int *)(lVar17 + (ulong)uVar19 * 4) + (1 << (ulong)(uVar14 + ~uVar4 & 0x1f));
            uStack_b4 = 0;
            FUN_109849b44(param_1 + 4,(uint)LZCOUNT(uVar2) ^ 0x1f,&uStack_b4);
            iVar18 = (uVar2 >> 1) - uStack_b4;
            if (uStack_b4 <= uVar2 >> 1) {
              iVar5 = uVar2 - iVar18;
              iVar16 = iVar18;
              if (iVar18 != iVar5) {
                puVar8 = *(uint **)(param_1 + 0x28);
                if (puVar8 != *(uint **)(param_1 + 0x24)) {
                  uVar14 = param_1[0x2a];
                  uVar4 = *puVar8;
                  uVar2 = uVar14 + 1;
                  param_1[0x2a] = uVar2;
                  if (uVar2 == 0x20) {
                    *(uint **)(param_1 + 0x28) = puVar8 + 1;
                    param_1[0x2a] = 0;
                  }
                  iVar16 = iVar5;
                  if ((uVar4 & 0x80000000U >> (ulong)(uVar14 & 0x1f)) != 0) goto LAB_1098733bc;
                }
                iVar16 = iVar18;
                iVar18 = iVar5;
              }
LAB_1098733bc:
              lVar7 = *(long *)(param_1 + 0x3e);
              plVar12 = (long *)(lVar7 + (ulong)uVar3 * 0x18);
              lVar17 = *plVar12;
              *(int *)(lVar17 + (ulong)uVar19 * 4) = *(int *)(lVar17 + (ulong)uVar19 * 4) + 1;
              lVar10 = plVar12[1];
              FUN_1093784d8(lVar7 + (ulong)uVar1 * 0x18,lVar17,lVar10,lVar10 - lVar17 >> 2);
              if (iVar18 != 0) {
                uStack_70 = CONCAT44(uVar19,iVar18);
                uStack_68 = uVar3;
                func_0x00010984b4e8(&lStack_b0,&uStack_70);
              }
              if (iVar16 != 0) {
                uStack_70 = CONCAT44(uVar19,iVar16);
                uStack_68 = uVar1;
                func_0x00010984b4e8(&lStack_b0,&uStack_70);
              }
              goto LAB_109873418;
            }
          }
          goto LAB_10987342c;
        }
        puVar8 = *(uint **)(param_1 + 0x32);
        *puVar8 = uVar19;
        uVar9 = (ulong)param_1[3];
        if (1 < param_1[3]) {
          uVar11 = 1;
          do {
            uVar14 = 0;
            if (uVar19 != (int)uVar9 - 1U) {
              uVar14 = uVar19 + 1;
            }
            puVar8[uVar11] = uVar14;
            uVar11 = uVar11 + 1;
            uVar9 = (ulong)param_1[3];
            uVar19 = uVar14;
          } while (uVar11 < uVar9);
        }
        if (uVar2 != 0) {
          uVar14 = 0;
          do {
            puVar6 = *(ulong **)(param_1 + 0x2c);
            if (param_1[3] != 0) {
              uVar9 = 0;
              lVar10 = *(long *)(param_1 + 0x32);
              do {
                *(undefined4 *)((long)puVar6 + (ulong)*(uint *)(lVar10 + uVar9 * 4) * 4) = 0;
                uVar11 = (ulong)*(uint *)(lVar10 + uVar9 * 4);
                iVar18 = *param_1 - *(int *)(*(long *)(lVar17 + uVar15 * 0x18) + uVar11 * 4);
                if (iVar18 != 0) {
                  puVar8 = param_1 + 0xe;
                  FUN_109849b44(puVar8,iVar18,(long)puVar6 + uVar11 * 4);
                  if ((int)puVar8 == 0) goto LAB_10987342c;
                  lVar10 = *(long *)(param_1 + 0x32);
                  puVar6 = *(ulong **)(param_1 + 0x2c);
                  uVar11 = (ulong)*(uint *)(lVar10 + uVar9 * 4);
                }
                *(uint *)((long)puVar6 + uVar11 * 4) =
                     *(uint *)((long)puVar6 + uVar11 * 4) | *(uint *)(*plVar12 + uVar11 * 4);
                uVar9 = uVar9 + 1;
              } while (uVar9 < param_1[3]);
            }
            uStack_70 = *puVar6;
            uStack_68 = (uint)puVar6[1];
            FUN_109872e24(*param_3,&uStack_70);
            param_1[2] = param_1[2] + 1;
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar2);
        }
      }
LAB_109873418:
    } while (lStack_88 != 0);
    uVar13 = 1;
  }
LAB_109873430:
  FUN_10984b59c(&lStack_b0);
  return uVar13;
}



/* Entry: 10987348c; end: 109873573;  */

uint * FUN_10987348c(uint *param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  uint *puVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  uint uVar20;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint uStack_68;
  
  puVar13 = param_1;
  if (param_2[2] + 4 <= param_2[1]) {
    uVar4 = *(uint *)(*param_2 + param_2[2]);
    *param_1 = uVar4;
    lVar9 = param_2[2];
    lVar18 = lVar9 + 4;
    param_2[2] = lVar18;
    if ((uVar4 < 0x21) && (lVar9 + 8 <= param_2[1])) {
      uVar4 = *(uint *)(*param_2 + lVar18);
      param_1[1] = uVar4;
      param_2[2] = param_2[2] + 4;
      if (uVar4 != 0) {
        param_1[2] = 0;
        puVar13 = param_1 + 4;
        FUN_10985d80c(puVar13,param_2);
        if ((int)puVar13 != 0) {
          puVar13 = param_1 + 10;
          FUN_10985d744(puVar13,param_2);
          if ((int)puVar13 != 0) {
            puVar13 = param_1 + 0x14;
            FUN_10985d744(puVar13,param_2);
            if ((int)puVar13 != 0) {
              puVar13 = param_1 + 0x1e;
              FUN_10985d744(puVar13,param_2);
              if ((int)puVar13 != 0) {
                uVar4 = param_1[1];
                uStack_70 = (ulong)uStack_70._4_4_ << 0x20;
                FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
                plVar12 = *(long **)(param_1 + 0x34);
                if (*plVar12 != 0) {
                  plVar12[1] = *plVar12;
                  __ZdlPv();
                  *plVar12 = 0;
                  plVar12[1] = 0;
                  plVar12[2] = 0;
                }
                plVar12[1] = lStack_a8;
                *plVar12 = lStack_b0;
                plVar12[2] = lStack_a0;
                uStack_70 = uStack_70 & 0xffffffff00000000;
                FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
                plVar12 = *(long **)(param_1 + 0x3a);
                if (*plVar12 != 0) {
                  plVar12[1] = *plVar12;
                  __ZdlPv();
                  *plVar12 = 0;
                  plVar12[1] = 0;
                  plVar12[2] = 0;
                }
                plVar12[1] = lStack_a8;
                *plVar12 = lStack_b0;
                plVar12[2] = lStack_a0;
                uStack_78 = 0;
                uStack_98 = 0;
                lStack_a0 = 0;
                lStack_88 = 0;
                lStack_90 = 0;
                lStack_a8 = 0;
                lStack_b0 = 0;
                uStack_7c = uVar4;
                FUN_10984bbd0(&lStack_b0,&uStack_7c);
                puVar13 = (uint *)0x1;
                if (lStack_88 != 0) {
                  do {
                    lStack_88 = lStack_88 + -1;
                    puVar13 = (uint *)(*(long *)(lStack_a8 +
                                                ((ulong)(lStack_90 + lStack_88) / 0x155) * 8) +
                                      ((ulong)(lStack_90 + lStack_88) % 0x155) * 0xc);
                    uVar2 = *puVar13;
                    uVar14 = puVar13[1];
                    uVar3 = puVar13[2];
                    uVar15 = (ulong)uVar3;
                    func_0x00010984c384(&lStack_b0,1);
                    if (uVar4 < uVar2) {
LAB_109873980:
                      puVar13 = (uint *)0x0;
                      goto LAB_109873984;
                    }
                    uVar20 = 0;
                    if (param_1[3] - 1 != uVar14) {
                      uVar20 = uVar14 + 1;
                    }
                    if (param_1[3] <= uVar20) goto LAB_109873980;
                    plVar12 = (long *)(*(long *)(param_1 + 0x34) + uVar15 * 0x18);
                    lVar18 = *(long *)(param_1 + 0x3a);
                    uVar6 = *(uint *)(*(long *)(lVar18 + uVar15 * 0x18) + (ulong)uVar20 * 4);
                    uVar14 = *param_1;
                    if (uVar14 == uVar6) {
                      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                        uStack_70 = *(ulong *)*plVar12;
                        uStack_68 = (uint)((ulong *)*plVar12)[1];
                        FUN_109872e24(*param_3,&uStack_70);
                        param_1[2] = param_1[2] + 1;
                      }
                    }
                    else {
                      if (2 < uVar2) {
                        if (param_1[2] <= param_1[1]) {
                          uVar1 = uVar3 + 1;
                          FUN_1093784d8(*(long *)(param_1 + 0x34) + (ulong)uVar1 * 0x18,*plVar12,
                                        plVar12[1],plVar12[1] - *plVar12 >> 2);
                          uVar16 = 0;
                          lVar18 = *(long *)(*(long *)(param_1 + 0x34) + (ulong)uVar1 * 0x18);
                          *(int *)(lVar18 + (ulong)uVar20 * 4) =
                               *(int *)(lVar18 + (ulong)uVar20 * 4) +
                               (1 << (ulong)(uVar14 + ~uVar6 & 0x1f));
                          uVar14 = (uint)LZCOUNT(uVar2) ^ 0x1f;
                          do {
                            uVar6 = (int)param_1 + 0x10;
                            FUN_10985d980();
                            uVar16 = uVar6 | uVar16 << 1;
                            uVar14 = uVar14 - 1;
                          } while (uVar14 != 0);
                          iVar19 = (uVar2 >> 1) - uVar16;
                          if (uVar16 <= uVar2 >> 1) {
                            iVar5 = uVar2 - iVar19;
                            iVar17 = iVar19;
                            if (iVar19 != iVar5) {
                              puVar13 = *(uint **)(param_1 + 0x24);
                              if (puVar13 != *(uint **)(param_1 + 0x20)) {
                                uVar14 = param_1[0x26];
                                uVar6 = *puVar13;
                                uVar2 = uVar14 + 1;
                                param_1[0x26] = uVar2;
                                if (uVar2 == 0x20) {
                                  *(uint **)(param_1 + 0x24) = puVar13 + 1;
                                  param_1[0x26] = 0;
                                }
                                iVar17 = iVar5;
                                if ((uVar6 & 0x80000000U >> (ulong)(uVar14 & 0x1f)) != 0)
                                goto LAB_109873910;
                              }
                              iVar17 = iVar19;
                              iVar19 = iVar5;
                            }
LAB_109873910:
                            lVar8 = *(long *)(param_1 + 0x3a);
                            plVar12 = (long *)(lVar8 + (ulong)uVar3 * 0x18);
                            lVar18 = *plVar12;
                            *(int *)(lVar18 + (ulong)uVar20 * 4) =
                                 *(int *)(lVar18 + (ulong)uVar20 * 4) + 1;
                            lVar9 = plVar12[1];
                            FUN_1093784d8(lVar8 + (ulong)uVar1 * 0x18,lVar18,lVar9,
                                          lVar9 - lVar18 >> 2);
                            if (iVar19 != 0) {
                              uStack_70 = CONCAT44(uVar20,iVar19);
                              uStack_68 = uVar3;
                              func_0x00010984c3f8(&lStack_b0,&uStack_70);
                            }
                            if (iVar17 != 0) {
                              uStack_70 = CONCAT44(uVar20,iVar17);
                              uStack_68 = uVar1;
                              func_0x00010984c3f8(&lStack_b0,&uStack_70);
                            }
                            goto LAB_10987396c;
                          }
                        }
                        goto LAB_109873980;
                      }
                      puVar13 = *(uint **)(param_1 + 0x2e);
                      *puVar13 = uVar20;
                      uVar10 = (ulong)param_1[3];
                      if (1 < param_1[3]) {
                        uVar11 = 1;
                        do {
                          uVar14 = 0;
                          if (uVar20 != (int)uVar10 - 1U) {
                            uVar14 = uVar20 + 1;
                          }
                          puVar13[uVar11] = uVar14;
                          uVar11 = uVar11 + 1;
                          uVar10 = (ulong)param_1[3];
                          uVar20 = uVar14;
                        } while (uVar11 < uVar10);
                      }
                      if (uVar2 != 0) {
                        uVar14 = 0;
                        do {
                          puVar7 = *(ulong **)(param_1 + 0x28);
                          if (param_1[3] != 0) {
                            uVar10 = 0;
                            lVar9 = *(long *)(param_1 + 0x2e);
                            do {
                              *(undefined4 *)
                               ((long)puVar7 + (ulong)*(uint *)(lVar9 + uVar10 * 4) * 4) = 0;
                              uVar11 = (ulong)*(uint *)(lVar9 + uVar10 * 4);
                              iVar19 = *param_1 -
                                       *(int *)(*(long *)(lVar18 + uVar15 * 0x18) + uVar11 * 4);
                              if (iVar19 != 0) {
                                puVar13 = param_1 + 10;
                                FUN_109849b44(puVar13,iVar19,(long)puVar7 + uVar11 * 4);
                                if ((int)puVar13 == 0) goto LAB_109873980;
                                lVar9 = *(long *)(param_1 + 0x2e);
                                puVar7 = *(ulong **)(param_1 + 0x28);
                                uVar11 = (ulong)*(uint *)(lVar9 + uVar10 * 4);
                              }
                              *(uint *)((long)puVar7 + uVar11 * 4) =
                                   *(uint *)((long)puVar7 + uVar11 * 4) |
                                   *(uint *)(*plVar12 + uVar11 * 4);
                              uVar10 = uVar10 + 1;
                            } while (uVar10 < param_1[3]);
                          }
                          uStack_70 = *puVar7;
                          uStack_68 = (uint)puVar7[1];
                          FUN_109872e24(*param_3,&uStack_70);
                          param_1[2] = param_1[2] + 1;
                          uVar14 = uVar14 + 1;
                        } while (uVar14 != uVar2);
                      }
                    }
LAB_10987396c:
                  } while (lStack_88 != 0);
                  puVar13 = (uint *)0x1;
                }
LAB_109873984:
                FUN_10984c4ac(&lStack_b0);
                return puVar13;
              }
            }
          }
        }
      }
    }
  }
  return puVar13;
}



/* Entry: 109873574; end: 1098739df;  */

undefined8 FUN_109873574(uint *param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  uint uVar20;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint uStack_68;
  
  uStack_70 = uStack_70 & 0xffffffff00000000;
  FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
  plVar12 = *(long **)(param_1 + 0x34);
  if (*plVar12 != 0) {
    plVar12[1] = *plVar12;
    __ZdlPv();
    *plVar12 = 0;
    plVar12[1] = 0;
    plVar12[2] = 0;
  }
  plVar12[1] = lStack_a8;
  *plVar12 = lStack_b0;
  plVar12[2] = lStack_a0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
  plVar12 = *(long **)(param_1 + 0x3a);
  if (*plVar12 != 0) {
    plVar12[1] = *plVar12;
    __ZdlPv();
    *plVar12 = 0;
    plVar12[1] = 0;
    plVar12[2] = 0;
  }
  plVar12[1] = lStack_a8;
  *plVar12 = lStack_b0;
  plVar12[2] = lStack_a0;
  uStack_78 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  lStack_a8 = 0;
  lStack_b0 = 0;
  uStack_7c = param_2;
  FUN_10984bbd0(&lStack_b0,&uStack_7c);
  uVar13 = 1;
  if (lStack_88 != 0) {
    do {
      lStack_88 = lStack_88 + -1;
      puVar8 = (uint *)(*(long *)(lStack_a8 + ((ulong)(lStack_90 + lStack_88) / 0x155) * 8) +
                       ((ulong)(lStack_90 + lStack_88) % 0x155) * 0xc);
      uVar2 = *puVar8;
      uVar14 = puVar8[1];
      uVar3 = puVar8[2];
      uVar15 = (ulong)uVar3;
      func_0x00010984c384(&lStack_b0,1);
      if (param_2 < uVar2) {
LAB_109873980:
        uVar13 = 0;
        goto LAB_109873984;
      }
      uVar20 = 0;
      if (param_1[3] - 1 != uVar14) {
        uVar20 = uVar14 + 1;
      }
      if (param_1[3] <= uVar20) goto LAB_109873980;
      plVar12 = (long *)(*(long *)(param_1 + 0x34) + uVar15 * 0x18);
      lVar18 = *(long *)(param_1 + 0x3a);
      uVar5 = *(uint *)(*(long *)(lVar18 + uVar15 * 0x18) + (ulong)uVar20 * 4);
      uVar14 = *param_1;
      if (uVar14 == uVar5) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          uStack_70 = *(ulong *)*plVar12;
          uStack_68 = (uint)((ulong *)*plVar12)[1];
          FUN_109872e24(*param_3,&uStack_70);
          param_1[2] = param_1[2] + 1;
        }
      }
      else {
        if (2 < uVar2) {
          if (param_1[2] <= param_1[1]) {
            uVar1 = uVar3 + 1;
            FUN_1093784d8(*(long *)(param_1 + 0x34) + (ulong)uVar1 * 0x18,*plVar12,plVar12[1],
                          plVar12[1] - *plVar12 >> 2);
            uVar16 = 0;
            lVar18 = *(long *)(*(long *)(param_1 + 0x34) + (ulong)uVar1 * 0x18);
            *(int *)(lVar18 + (ulong)uVar20 * 4) =
                 *(int *)(lVar18 + (ulong)uVar20 * 4) + (1 << (ulong)(uVar14 + ~uVar5 & 0x1f));
            uVar14 = (uint)LZCOUNT(uVar2) ^ 0x1f;
            do {
              uVar5 = (int)param_1 + 0x10;
              FUN_10985d980();
              uVar16 = uVar5 | uVar16 << 1;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
            iVar19 = (uVar2 >> 1) - uVar16;
            if (uVar16 <= uVar2 >> 1) {
              iVar4 = uVar2 - iVar19;
              iVar17 = iVar19;
              if (iVar19 != iVar4) {
                puVar8 = *(uint **)(param_1 + 0x24);
                if (puVar8 != *(uint **)(param_1 + 0x20)) {
                  uVar14 = param_1[0x26];
                  uVar5 = *puVar8;
                  uVar2 = uVar14 + 1;
                  param_1[0x26] = uVar2;
                  if (uVar2 == 0x20) {
                    *(uint **)(param_1 + 0x24) = puVar8 + 1;
                    param_1[0x26] = 0;
                  }
                  iVar17 = iVar4;
                  if ((uVar5 & 0x80000000U >> (ulong)(uVar14 & 0x1f)) != 0) goto LAB_109873910;
                }
                iVar17 = iVar19;
                iVar19 = iVar4;
              }
LAB_109873910:
              lVar7 = *(long *)(param_1 + 0x3a);
              plVar12 = (long *)(lVar7 + (ulong)uVar3 * 0x18);
              lVar18 = *plVar12;
              *(int *)(lVar18 + (ulong)uVar20 * 4) = *(int *)(lVar18 + (ulong)uVar20 * 4) + 1;
              lVar10 = plVar12[1];
              FUN_1093784d8(lVar7 + (ulong)uVar1 * 0x18,lVar18,lVar10,lVar10 - lVar18 >> 2);
              if (iVar19 != 0) {
                uStack_70 = CONCAT44(uVar20,iVar19);
                uStack_68 = uVar3;
                func_0x00010984c3f8(&lStack_b0,&uStack_70);
              }
              if (iVar17 != 0) {
                uStack_70 = CONCAT44(uVar20,iVar17);
                uStack_68 = uVar1;
                func_0x00010984c3f8(&lStack_b0,&uStack_70);
              }
              goto LAB_10987396c;
            }
          }
          goto LAB_109873980;
        }
        puVar8 = *(uint **)(param_1 + 0x2e);
        *puVar8 = uVar20;
        uVar9 = (ulong)param_1[3];
        if (1 < param_1[3]) {
          uVar11 = 1;
          do {
            uVar14 = 0;
            if (uVar20 != (int)uVar9 - 1U) {
              uVar14 = uVar20 + 1;
            }
            puVar8[uVar11] = uVar14;
            uVar11 = uVar11 + 1;
            uVar9 = (ulong)param_1[3];
            uVar20 = uVar14;
          } while (uVar11 < uVar9);
        }
        if (uVar2 != 0) {
          uVar14 = 0;
          do {
            puVar6 = *(ulong **)(param_1 + 0x28);
            if (param_1[3] != 0) {
              uVar9 = 0;
              lVar10 = *(long *)(param_1 + 0x2e);
              do {
                *(undefined4 *)((long)puVar6 + (ulong)*(uint *)(lVar10 + uVar9 * 4) * 4) = 0;
                uVar11 = (ulong)*(uint *)(lVar10 + uVar9 * 4);
                iVar19 = *param_1 - *(int *)(*(long *)(lVar18 + uVar15 * 0x18) + uVar11 * 4);
                if (iVar19 != 0) {
                  puVar8 = param_1 + 10;
                  FUN_109849b44(puVar8,iVar19,(long)puVar6 + uVar11 * 4);
                  if ((int)puVar8 == 0) goto LAB_109873980;
                  lVar10 = *(long *)(param_1 + 0x2e);
                  puVar6 = *(ulong **)(param_1 + 0x28);
                  uVar11 = (ulong)*(uint *)(lVar10 + uVar9 * 4);
                }
                *(uint *)((long)puVar6 + uVar11 * 4) =
                     *(uint *)((long)puVar6 + uVar11 * 4) | *(uint *)(*plVar12 + uVar11 * 4);
                uVar9 = uVar9 + 1;
              } while (uVar9 < param_1[3]);
            }
            uStack_70 = *puVar6;
            uStack_68 = (uint)puVar6[1];
            FUN_109872e24(*param_3,&uStack_70);
            param_1[2] = param_1[2] + 1;
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar2);
        }
      }
LAB_10987396c:
    } while (lStack_88 != 0);
    uVar13 = 1;
  }
LAB_109873984:
  FUN_10984c4ac(&lStack_b0);
  return uVar13;
}



/* Entry: 1098739e0; end: 109873ac7;  */

uint * FUN_1098739e0(uint *param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  uint *puVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  uint uVar20;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint uStack_68;
  
  puVar13 = param_1;
  if (param_2[2] + 4 <= param_2[1]) {
    uVar4 = *(uint *)(*param_2 + param_2[2]);
    *param_1 = uVar4;
    lVar9 = param_2[2];
    lVar18 = lVar9 + 4;
    param_2[2] = lVar18;
    if ((uVar4 < 0x21) && (lVar9 + 8 <= param_2[1])) {
      uVar4 = *(uint *)(*param_2 + lVar18);
      param_1[1] = uVar4;
      param_2[2] = param_2[2] + 4;
      if (uVar4 != 0) {
        param_1[2] = 0;
        puVar13 = param_1 + 4;
        FUN_10985d80c(puVar13,param_2);
        if ((int)puVar13 != 0) {
          puVar13 = param_1 + 10;
          FUN_10985d744(puVar13,param_2);
          if ((int)puVar13 != 0) {
            puVar13 = param_1 + 0x14;
            FUN_10985d744(puVar13,param_2);
            if ((int)puVar13 != 0) {
              puVar13 = param_1 + 0x1e;
              FUN_10985d744(puVar13,param_2);
              if ((int)puVar13 != 0) {
                uVar4 = param_1[1];
                uStack_70 = (ulong)uStack_70._4_4_ << 0x20;
                FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
                plVar12 = *(long **)(param_1 + 0x34);
                if (*plVar12 != 0) {
                  plVar12[1] = *plVar12;
                  __ZdlPv();
                  *plVar12 = 0;
                  plVar12[1] = 0;
                  plVar12[2] = 0;
                }
                plVar12[1] = lStack_a8;
                *plVar12 = lStack_b0;
                plVar12[2] = lStack_a0;
                uStack_70 = uStack_70 & 0xffffffff00000000;
                FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
                plVar12 = *(long **)(param_1 + 0x3a);
                if (*plVar12 != 0) {
                  plVar12[1] = *plVar12;
                  __ZdlPv();
                  *plVar12 = 0;
                  plVar12[1] = 0;
                  plVar12[2] = 0;
                }
                plVar12[1] = lStack_a8;
                *plVar12 = lStack_b0;
                plVar12[2] = lStack_a0;
                uStack_78 = 0;
                uStack_98 = 0;
                lStack_a0 = 0;
                lStack_88 = 0;
                lStack_90 = 0;
                lStack_a8 = 0;
                lStack_b0 = 0;
                uStack_7c = uVar4;
                FUN_10984cae0(&lStack_b0,&uStack_7c);
                puVar13 = (uint *)0x1;
                if (lStack_88 != 0) {
                  do {
                    lStack_88 = lStack_88 + -1;
                    puVar13 = (uint *)(*(long *)(lStack_a8 +
                                                ((ulong)(lStack_90 + lStack_88) / 0x155) * 8) +
                                      ((ulong)(lStack_90 + lStack_88) % 0x155) * 0xc);
                    uVar2 = *puVar13;
                    uVar14 = puVar13[1];
                    uVar3 = puVar13[2];
                    uVar15 = (ulong)uVar3;
                    func_0x00010984d294(&lStack_b0,1);
                    if (uVar4 < uVar2) {
LAB_109873ed4:
                      puVar13 = (uint *)0x0;
                      goto LAB_109873ed8;
                    }
                    uVar20 = 0;
                    if (param_1[3] - 1 != uVar14) {
                      uVar20 = uVar14 + 1;
                    }
                    if (param_1[3] <= uVar20) goto LAB_109873ed4;
                    plVar12 = (long *)(*(long *)(param_1 + 0x34) + uVar15 * 0x18);
                    lVar18 = *(long *)(param_1 + 0x3a);
                    uVar6 = *(uint *)(*(long *)(lVar18 + uVar15 * 0x18) + (ulong)uVar20 * 4);
                    uVar14 = *param_1;
                    if (uVar14 == uVar6) {
                      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                        uStack_70 = *(ulong *)*plVar12;
                        uStack_68 = (uint)((ulong *)*plVar12)[1];
                        FUN_109872e24(*param_3,&uStack_70);
                        param_1[2] = param_1[2] + 1;
                      }
                    }
                    else {
                      if (2 < uVar2) {
                        if (param_1[2] <= param_1[1]) {
                          uVar1 = uVar3 + 1;
                          FUN_1093784d8(*(long *)(param_1 + 0x34) + (ulong)uVar1 * 0x18,*plVar12,
                                        plVar12[1],plVar12[1] - *plVar12 >> 2);
                          uVar16 = 0;
                          lVar18 = *(long *)(*(long *)(param_1 + 0x34) + (ulong)uVar1 * 0x18);
                          *(int *)(lVar18 + (ulong)uVar20 * 4) =
                               *(int *)(lVar18 + (ulong)uVar20 * 4) +
                               (1 << (ulong)(uVar14 + ~uVar6 & 0x1f));
                          uVar14 = (uint)LZCOUNT(uVar2) ^ 0x1f;
                          do {
                            uVar6 = (int)param_1 + 0x10;
                            FUN_10985d980();
                            uVar16 = uVar6 | uVar16 << 1;
                            uVar14 = uVar14 - 1;
                          } while (uVar14 != 0);
                          iVar19 = (uVar2 >> 1) - uVar16;
                          if (uVar16 <= uVar2 >> 1) {
                            iVar5 = uVar2 - iVar19;
                            iVar17 = iVar19;
                            if (iVar19 != iVar5) {
                              puVar13 = *(uint **)(param_1 + 0x24);
                              if (puVar13 != *(uint **)(param_1 + 0x20)) {
                                uVar14 = param_1[0x26];
                                uVar6 = *puVar13;
                                uVar2 = uVar14 + 1;
                                param_1[0x26] = uVar2;
                                if (uVar2 == 0x20) {
                                  *(uint **)(param_1 + 0x24) = puVar13 + 1;
                                  param_1[0x26] = 0;
                                }
                                iVar17 = iVar5;
                                if ((uVar6 & 0x80000000U >> (ulong)(uVar14 & 0x1f)) != 0)
                                goto LAB_109873e64;
                              }
                              iVar17 = iVar19;
                              iVar19 = iVar5;
                            }
LAB_109873e64:
                            lVar8 = *(long *)(param_1 + 0x3a);
                            plVar12 = (long *)(lVar8 + (ulong)uVar3 * 0x18);
                            lVar18 = *plVar12;
                            *(int *)(lVar18 + (ulong)uVar20 * 4) =
                                 *(int *)(lVar18 + (ulong)uVar20 * 4) + 1;
                            lVar9 = plVar12[1];
                            FUN_1093784d8(lVar8 + (ulong)uVar1 * 0x18,lVar18,lVar9,
                                          lVar9 - lVar18 >> 2);
                            if (iVar19 != 0) {
                              uStack_70 = CONCAT44(uVar20,iVar19);
                              uStack_68 = uVar3;
                              func_0x00010984d308(&lStack_b0,&uStack_70);
                            }
                            if (iVar17 != 0) {
                              uStack_70 = CONCAT44(uVar20,iVar17);
                              uStack_68 = uVar1;
                              func_0x00010984d308(&lStack_b0,&uStack_70);
                            }
                            goto LAB_109873ec0;
                          }
                        }
                        goto LAB_109873ed4;
                      }
                      puVar13 = *(uint **)(param_1 + 0x2e);
                      *puVar13 = uVar20;
                      uVar10 = (ulong)param_1[3];
                      if (1 < param_1[3]) {
                        uVar11 = 1;
                        do {
                          uVar14 = 0;
                          if (uVar20 != (int)uVar10 - 1U) {
                            uVar14 = uVar20 + 1;
                          }
                          puVar13[uVar11] = uVar14;
                          uVar11 = uVar11 + 1;
                          uVar10 = (ulong)param_1[3];
                          uVar20 = uVar14;
                        } while (uVar11 < uVar10);
                      }
                      if (uVar2 != 0) {
                        uVar14 = 0;
                        do {
                          puVar7 = *(ulong **)(param_1 + 0x28);
                          if (param_1[3] != 0) {
                            uVar10 = 0;
                            lVar9 = *(long *)(param_1 + 0x2e);
                            do {
                              *(undefined4 *)
                               ((long)puVar7 + (ulong)*(uint *)(lVar9 + uVar10 * 4) * 4) = 0;
                              uVar11 = (ulong)*(uint *)(lVar9 + uVar10 * 4);
                              iVar19 = *param_1 -
                                       *(int *)(*(long *)(lVar18 + uVar15 * 0x18) + uVar11 * 4);
                              if (iVar19 != 0) {
                                puVar13 = param_1 + 10;
                                FUN_109849b44(puVar13,iVar19,(long)puVar7 + uVar11 * 4);
                                if ((int)puVar13 == 0) goto LAB_109873ed4;
                                lVar9 = *(long *)(param_1 + 0x2e);
                                puVar7 = *(ulong **)(param_1 + 0x28);
                                uVar11 = (ulong)*(uint *)(lVar9 + uVar10 * 4);
                              }
                              *(uint *)((long)puVar7 + uVar11 * 4) =
                                   *(uint *)((long)puVar7 + uVar11 * 4) |
                                   *(uint *)(*plVar12 + uVar11 * 4);
                              uVar10 = uVar10 + 1;
                            } while (uVar10 < param_1[3]);
                          }
                          uStack_70 = *puVar7;
                          uStack_68 = (uint)puVar7[1];
                          FUN_109872e24(*param_3,&uStack_70);
                          param_1[2] = param_1[2] + 1;
                          uVar14 = uVar14 + 1;
                        } while (uVar14 != uVar2);
                      }
                    }
LAB_109873ec0:
                  } while (lStack_88 != 0);
                  puVar13 = (uint *)0x1;
                }
LAB_109873ed8:
                FUN_10984d3bc(&lStack_b0);
                return puVar13;
              }
            }
          }
        }
      }
    }
  }
  return puVar13;
}



/* Entry: 109873ac8; end: 109873f33;  */

undefined8 FUN_109873ac8(uint *param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  uint uVar20;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint uStack_68;
  
  uStack_70 = uStack_70 & 0xffffffff00000000;
  FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
  plVar12 = *(long **)(param_1 + 0x34);
  if (*plVar12 != 0) {
    plVar12[1] = *plVar12;
    __ZdlPv();
    *plVar12 = 0;
    plVar12[1] = 0;
    plVar12[2] = 0;
  }
  plVar12[1] = lStack_a8;
  *plVar12 = lStack_b0;
  plVar12[2] = lStack_a0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
  plVar12 = *(long **)(param_1 + 0x3a);
  if (*plVar12 != 0) {
    plVar12[1] = *plVar12;
    __ZdlPv();
    *plVar12 = 0;
    plVar12[1] = 0;
    plVar12[2] = 0;
  }
  plVar12[1] = lStack_a8;
  *plVar12 = lStack_b0;
  plVar12[2] = lStack_a0;
  uStack_78 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  lStack_a8 = 0;
  lStack_b0 = 0;
  uStack_7c = param_2;
  FUN_10984cae0(&lStack_b0,&uStack_7c);
  uVar13 = 1;
  if (lStack_88 != 0) {
    do {
      lStack_88 = lStack_88 + -1;
      puVar8 = (uint *)(*(long *)(lStack_a8 + ((ulong)(lStack_90 + lStack_88) / 0x155) * 8) +
                       ((ulong)(lStack_90 + lStack_88) % 0x155) * 0xc);
      uVar2 = *puVar8;
      uVar14 = puVar8[1];
      uVar3 = puVar8[2];
      uVar15 = (ulong)uVar3;
      func_0x00010984d294(&lStack_b0,1);
      if (param_2 < uVar2) {
LAB_109873ed4:
        uVar13 = 0;
        goto LAB_109873ed8;
      }
      uVar20 = 0;
      if (param_1[3] - 1 != uVar14) {
        uVar20 = uVar14 + 1;
      }
      if (param_1[3] <= uVar20) goto LAB_109873ed4;
      plVar12 = (long *)(*(long *)(param_1 + 0x34) + uVar15 * 0x18);
      lVar18 = *(long *)(param_1 + 0x3a);
      uVar5 = *(uint *)(*(long *)(lVar18 + uVar15 * 0x18) + (ulong)uVar20 * 4);
      uVar14 = *param_1;
      if (uVar14 == uVar5) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          uStack_70 = *(ulong *)*plVar12;
          uStack_68 = (uint)((ulong *)*plVar12)[1];
          FUN_109872e24(*param_3,&uStack_70);
          param_1[2] = param_1[2] + 1;
        }
      }
      else {
        if (2 < uVar2) {
          if (param_1[2] <= param_1[1]) {
            uVar1 = uVar3 + 1;
            FUN_1093784d8(*(long *)(param_1 + 0x34) + (ulong)uVar1 * 0x18,*plVar12,plVar12[1],
                          plVar12[1] - *plVar12 >> 2);
            uVar16 = 0;
            lVar18 = *(long *)(*(long *)(param_1 + 0x34) + (ulong)uVar1 * 0x18);
            *(int *)(lVar18 + (ulong)uVar20 * 4) =
                 *(int *)(lVar18 + (ulong)uVar20 * 4) + (1 << (ulong)(uVar14 + ~uVar5 & 0x1f));
            uVar14 = (uint)LZCOUNT(uVar2) ^ 0x1f;
            do {
              uVar5 = (int)param_1 + 0x10;
              FUN_10985d980();
              uVar16 = uVar5 | uVar16 << 1;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
            iVar19 = (uVar2 >> 1) - uVar16;
            if (uVar16 <= uVar2 >> 1) {
              iVar4 = uVar2 - iVar19;
              iVar17 = iVar19;
              if (iVar19 != iVar4) {
                puVar8 = *(uint **)(param_1 + 0x24);
                if (puVar8 != *(uint **)(param_1 + 0x20)) {
                  uVar14 = param_1[0x26];
                  uVar5 = *puVar8;
                  uVar2 = uVar14 + 1;
                  param_1[0x26] = uVar2;
                  if (uVar2 == 0x20) {
                    *(uint **)(param_1 + 0x24) = puVar8 + 1;
                    param_1[0x26] = 0;
                  }
                  iVar17 = iVar4;
                  if ((uVar5 & 0x80000000U >> (ulong)(uVar14 & 0x1f)) != 0) goto LAB_109873e64;
                }
                iVar17 = iVar19;
                iVar19 = iVar4;
              }
LAB_109873e64:
              lVar7 = *(long *)(param_1 + 0x3a);
              plVar12 = (long *)(lVar7 + (ulong)uVar3 * 0x18);
              lVar18 = *plVar12;
              *(int *)(lVar18 + (ulong)uVar20 * 4) = *(int *)(lVar18 + (ulong)uVar20 * 4) + 1;
              lVar10 = plVar12[1];
              FUN_1093784d8(lVar7 + (ulong)uVar1 * 0x18,lVar18,lVar10,lVar10 - lVar18 >> 2);
              if (iVar19 != 0) {
                uStack_70 = CONCAT44(uVar20,iVar19);
                uStack_68 = uVar3;
                func_0x00010984d308(&lStack_b0,&uStack_70);
              }
              if (iVar17 != 0) {
                uStack_70 = CONCAT44(uVar20,iVar17);
                uStack_68 = uVar1;
                func_0x00010984d308(&lStack_b0,&uStack_70);
              }
              goto LAB_109873ec0;
            }
          }
          goto LAB_109873ed4;
        }
        puVar8 = *(uint **)(param_1 + 0x2e);
        *puVar8 = uVar20;
        uVar9 = (ulong)param_1[3];
        if (1 < param_1[3]) {
          uVar11 = 1;
          do {
            uVar14 = 0;
            if (uVar20 != (int)uVar9 - 1U) {
              uVar14 = uVar20 + 1;
            }
            puVar8[uVar11] = uVar14;
            uVar11 = uVar11 + 1;
            uVar9 = (ulong)param_1[3];
            uVar20 = uVar14;
          } while (uVar11 < uVar9);
        }
        if (uVar2 != 0) {
          uVar14 = 0;
          do {
            puVar6 = *(ulong **)(param_1 + 0x28);
            if (param_1[3] != 0) {
              uVar9 = 0;
              lVar10 = *(long *)(param_1 + 0x2e);
              do {
                *(undefined4 *)((long)puVar6 + (ulong)*(uint *)(lVar10 + uVar9 * 4) * 4) = 0;
                uVar11 = (ulong)*(uint *)(lVar10 + uVar9 * 4);
                iVar19 = *param_1 - *(int *)(*(long *)(lVar18 + uVar15 * 0x18) + uVar11 * 4);
                if (iVar19 != 0) {
                  puVar8 = param_1 + 10;
                  FUN_109849b44(puVar8,iVar19,(long)puVar6 + uVar11 * 4);
                  if ((int)puVar8 == 0) goto LAB_109873ed4;
                  lVar10 = *(long *)(param_1 + 0x2e);
                  puVar6 = *(ulong **)(param_1 + 0x28);
                  uVar11 = (ulong)*(uint *)(lVar10 + uVar9 * 4);
                }
                *(uint *)((long)puVar6 + uVar11 * 4) =
                     *(uint *)((long)puVar6 + uVar11 * 4) | *(uint *)(*plVar12 + uVar11 * 4);
                uVar9 = uVar9 + 1;
              } while (uVar9 < param_1[3]);
            }
            uStack_70 = *puVar6;
            uStack_68 = (uint)puVar6[1];
            FUN_109872e24(*param_3,&uStack_70);
            param_1[2] = param_1[2] + 1;
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar2);
        }
      }
LAB_109873ec0:
    } while (lStack_88 != 0);
    uVar13 = 1;
  }
LAB_109873ed8:
  FUN_10984d3bc(&lStack_b0);
  return uVar13;
}



/* Entry: 109873f34; end: 10987401b;  */

uint * FUN_109873f34(uint *param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint uStack_68;
  
  puVar13 = param_1;
  if (param_2[2] + 4 <= param_2[1]) {
    uVar4 = *(uint *)(*param_2 + param_2[2]);
    *param_1 = uVar4;
    lVar9 = param_2[2];
    lVar19 = lVar9 + 4;
    param_2[2] = lVar19;
    if ((uVar4 < 0x21) && (lVar9 + 8 <= param_2[1])) {
      uVar4 = *(uint *)(*param_2 + lVar19);
      param_1[1] = uVar4;
      param_2[2] = param_2[2] + 4;
      if (uVar4 != 0) {
        param_1[2] = 0;
        puVar13 = param_1 + 4;
        func_0x00010984d59c(puVar13,param_2);
        if ((int)puVar13 != 0) {
          puVar13 = param_1 + 0xca;
          FUN_10985d744(puVar13,param_2);
          if ((int)puVar13 != 0) {
            puVar13 = param_1 + 0xd4;
            FUN_10985d744(puVar13,param_2);
            if ((int)puVar13 != 0) {
              puVar13 = param_1 + 0xde;
              FUN_10985d744(puVar13,param_2);
              if ((int)puVar13 != 0) {
                uVar4 = param_1[1];
                uStack_70 = (ulong)uStack_70._4_4_ << 0x20;
                FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
                plVar12 = *(long **)(param_1 + 0xf4);
                if (*plVar12 != 0) {
                  plVar12[1] = *plVar12;
                  __ZdlPv();
                  *plVar12 = 0;
                  plVar12[1] = 0;
                  plVar12[2] = 0;
                }
                plVar12[1] = lStack_a8;
                *plVar12 = lStack_b0;
                plVar12[2] = lStack_a0;
                uStack_70 = uStack_70 & 0xffffffff00000000;
                FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
                plVar12 = *(long **)(param_1 + 0xfa);
                if (*plVar12 != 0) {
                  plVar12[1] = *plVar12;
                  __ZdlPv();
                  *plVar12 = 0;
                  plVar12[1] = 0;
                  plVar12[2] = 0;
                }
                plVar12[1] = lStack_a8;
                *plVar12 = lStack_b0;
                plVar12[2] = lStack_a0;
                uStack_78 = 0;
                uStack_98 = 0;
                lStack_a0 = 0;
                lStack_88 = 0;
                lStack_90 = 0;
                lStack_a8 = 0;
                lStack_b0 = 0;
                uStack_7c = uVar4;
                FUN_10984da68(&lStack_b0,&uStack_7c);
                puVar13 = (uint *)0x1;
                if (lStack_88 != 0) {
                  do {
                    lStack_88 = lStack_88 + -1;
                    puVar13 = (uint *)(*(long *)(lStack_a8 +
                                                ((ulong)(lStack_90 + lStack_88) / 0x155) * 8) +
                                      ((ulong)(lStack_90 + lStack_88) % 0x155) * 0xc);
                    uVar2 = *puVar13;
                    uVar16 = puVar13[1];
                    uVar3 = puVar13[2];
                    uVar17 = (ulong)uVar3;
                    func_0x00010984e21c(&lStack_b0,1);
                    if (uVar4 < uVar2) {
LAB_109874434:
                      puVar13 = (uint *)0x0;
                      goto LAB_109874438;
                    }
                    uVar20 = 0;
                    if (param_1[3] - 1 != uVar16) {
                      uVar20 = uVar16 + 1;
                    }
                    if (param_1[3] <= uVar20) goto LAB_109874434;
                    plVar12 = (long *)(*(long *)(param_1 + 0xf4) + uVar17 * 0x18);
                    lVar19 = *(long *)(param_1 + 0xfa);
                    uVar5 = *(uint *)(*(long *)(lVar19 + uVar17 * 0x18) + (ulong)uVar20 * 4);
                    uVar16 = *param_1;
                    if (uVar16 == uVar5) {
                      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                        uStack_70 = *(ulong *)*plVar12;
                        uStack_68 = (uint)((ulong *)*plVar12)[1];
                        FUN_109872e24(*param_3,&uStack_70);
                        param_1[2] = param_1[2] + 1;
                      }
                    }
                    else {
                      if (2 < uVar2) {
                        if (param_1[2] <= param_1[1]) {
                          uVar1 = uVar3 + 1;
                          FUN_1093784d8(*(long *)(param_1 + 0xf4) + (ulong)uVar1 * 0x18,*plVar12,
                                        plVar12[1],plVar12[1] - *plVar12 >> 2);
                          uVar18 = 0;
                          lVar19 = *(long *)(*(long *)(param_1 + 0xf4) + (ulong)uVar1 * 0x18);
                          *(int *)(lVar19 + (ulong)uVar20 * 4) =
                               *(int *)(lVar19 + (ulong)uVar20 * 4) +
                               (1 << (ulong)(uVar16 + ~uVar5 & 0x1f));
                          uVar17 = (ulong)((uint)LZCOUNT(uVar2) ^ 0x1f);
                          puVar13 = param_1 + 4;
                          do {
                            uVar16 = (uint)puVar13;
                            FUN_10985d980();
                            uVar18 = uVar16 | uVar18 << 1;
                            puVar13 = puVar13 + 6;
                            uVar17 = uVar17 - 1;
                          } while (uVar17 != 0);
                          iVar15 = (uVar2 >> 1) - uVar18;
                          if (uVar18 <= uVar2 >> 1) {
                            iVar6 = uVar2 - iVar15;
                            iVar14 = iVar15;
                            if (iVar15 != iVar6) {
                              puVar13 = *(uint **)(param_1 + 0xe4);
                              if (puVar13 != *(uint **)(param_1 + 0xe0)) {
                                uVar16 = param_1[0xe6];
                                uVar5 = *puVar13;
                                uVar2 = uVar16 + 1;
                                param_1[0xe6] = uVar2;
                                if (uVar2 == 0x20) {
                                  *(uint **)(param_1 + 0xe4) = puVar13 + 1;
                                  param_1[0xe6] = 0;
                                }
                                iVar14 = iVar6;
                                if ((uVar5 & 0x80000000U >> (ulong)(uVar16 & 0x1f)) != 0)
                                goto LAB_1098743c0;
                              }
                              iVar14 = iVar15;
                              iVar15 = iVar6;
                            }
LAB_1098743c0:
                            lVar8 = *(long *)(param_1 + 0xfa);
                            plVar12 = (long *)(lVar8 + (ulong)uVar3 * 0x18);
                            lVar19 = *plVar12;
                            *(int *)(lVar19 + (ulong)uVar20 * 4) =
                                 *(int *)(lVar19 + (ulong)uVar20 * 4) + 1;
                            lVar9 = plVar12[1];
                            FUN_1093784d8(lVar8 + (ulong)uVar1 * 0x18,lVar19,lVar9,
                                          lVar9 - lVar19 >> 2);
                            if (iVar15 != 0) {
                              uStack_70 = CONCAT44(uVar20,iVar15);
                              uStack_68 = uVar3;
                              func_0x00010984e290(&lStack_b0,&uStack_70);
                            }
                            if (iVar14 != 0) {
                              uStack_70 = CONCAT44(uVar20,iVar14);
                              uStack_68 = uVar1;
                              func_0x00010984e290(&lStack_b0,&uStack_70);
                            }
                            goto LAB_109874420;
                          }
                        }
                        goto LAB_109874434;
                      }
                      puVar13 = *(uint **)(param_1 + 0xee);
                      *puVar13 = uVar20;
                      uVar10 = (ulong)param_1[3];
                      if (1 < param_1[3]) {
                        uVar11 = 1;
                        do {
                          uVar16 = 0;
                          if (uVar20 != (int)uVar10 - 1U) {
                            uVar16 = uVar20 + 1;
                          }
                          puVar13[uVar11] = uVar16;
                          uVar11 = uVar11 + 1;
                          uVar10 = (ulong)param_1[3];
                          uVar20 = uVar16;
                        } while (uVar11 < uVar10);
                      }
                      if (uVar2 != 0) {
                        uVar16 = 0;
                        do {
                          puVar7 = *(ulong **)(param_1 + 0xe8);
                          if (param_1[3] != 0) {
                            uVar10 = 0;
                            lVar9 = *(long *)(param_1 + 0xee);
                            do {
                              *(undefined4 *)
                               ((long)puVar7 + (ulong)*(uint *)(lVar9 + uVar10 * 4) * 4) = 0;
                              uVar11 = (ulong)*(uint *)(lVar9 + uVar10 * 4);
                              iVar15 = *param_1 -
                                       *(int *)(*(long *)(lVar19 + uVar17 * 0x18) + uVar11 * 4);
                              if (iVar15 != 0) {
                                puVar13 = param_1 + 0xca;
                                FUN_109849b44(puVar13,iVar15,(long)puVar7 + uVar11 * 4);
                                if ((int)puVar13 == 0) goto LAB_109874434;
                                lVar9 = *(long *)(param_1 + 0xee);
                                puVar7 = *(ulong **)(param_1 + 0xe8);
                                uVar11 = (ulong)*(uint *)(lVar9 + uVar10 * 4);
                              }
                              *(uint *)((long)puVar7 + uVar11 * 4) =
                                   *(uint *)((long)puVar7 + uVar11 * 4) |
                                   *(uint *)(*plVar12 + uVar11 * 4);
                              uVar10 = uVar10 + 1;
                            } while (uVar10 < param_1[3]);
                          }
                          uStack_70 = *puVar7;
                          uStack_68 = (uint)puVar7[1];
                          FUN_109872e24(*param_3,&uStack_70);
                          param_1[2] = param_1[2] + 1;
                          uVar16 = uVar16 + 1;
                        } while (uVar16 != uVar2);
                      }
                    }
LAB_109874420:
                  } while (lStack_88 != 0);
                  puVar13 = (uint *)0x1;
                }
LAB_109874438:
                FUN_10984e344(&lStack_b0);
                return puVar13;
              }
            }
          }
        }
      }
    }
  }
  return puVar13;
}



/* Entry: 10987401c; end: 109874493;  */

undefined8 FUN_10987401c(uint *param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint uStack_68;
  
  uStack_70 = uStack_70 & 0xffffffff00000000;
  FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
  plVar12 = *(long **)(param_1 + 0xf4);
  if (*plVar12 != 0) {
    plVar12[1] = *plVar12;
    __ZdlPv();
    *plVar12 = 0;
    plVar12[1] = 0;
    plVar12[2] = 0;
  }
  plVar12[1] = lStack_a8;
  *plVar12 = lStack_b0;
  plVar12[2] = lStack_a0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
  plVar12 = *(long **)(param_1 + 0xfa);
  if (*plVar12 != 0) {
    plVar12[1] = *plVar12;
    __ZdlPv();
    *plVar12 = 0;
    plVar12[1] = 0;
    plVar12[2] = 0;
  }
  plVar12[1] = lStack_a8;
  *plVar12 = lStack_b0;
  plVar12[2] = lStack_a0;
  uStack_78 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  lStack_a8 = 0;
  lStack_b0 = 0;
  uStack_7c = param_2;
  FUN_10984da68(&lStack_b0,&uStack_7c);
  uVar13 = 1;
  if (lStack_88 != 0) {
    do {
      lStack_88 = lStack_88 + -1;
      puVar8 = (uint *)(*(long *)(lStack_a8 + ((ulong)(lStack_90 + lStack_88) / 0x155) * 8) +
                       ((ulong)(lStack_90 + lStack_88) % 0x155) * 0xc);
      uVar2 = *puVar8;
      uVar16 = puVar8[1];
      uVar3 = puVar8[2];
      uVar17 = (ulong)uVar3;
      func_0x00010984e21c(&lStack_b0,1);
      if (param_2 < uVar2) {
LAB_109874434:
        uVar13 = 0;
        goto LAB_109874438;
      }
      uVar20 = 0;
      if (param_1[3] - 1 != uVar16) {
        uVar20 = uVar16 + 1;
      }
      if (param_1[3] <= uVar20) goto LAB_109874434;
      plVar12 = (long *)(*(long *)(param_1 + 0xf4) + uVar17 * 0x18);
      lVar19 = *(long *)(param_1 + 0xfa);
      uVar4 = *(uint *)(*(long *)(lVar19 + uVar17 * 0x18) + (ulong)uVar20 * 4);
      uVar16 = *param_1;
      if (uVar16 == uVar4) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          uStack_70 = *(ulong *)*plVar12;
          uStack_68 = (uint)((ulong *)*plVar12)[1];
          FUN_109872e24(*param_3,&uStack_70);
          param_1[2] = param_1[2] + 1;
        }
      }
      else {
        if (2 < uVar2) {
          if (param_1[2] <= param_1[1]) {
            uVar1 = uVar3 + 1;
            FUN_1093784d8(*(long *)(param_1 + 0xf4) + (ulong)uVar1 * 0x18,*plVar12,plVar12[1],
                          plVar12[1] - *plVar12 >> 2);
            uVar18 = 0;
            lVar19 = *(long *)(*(long *)(param_1 + 0xf4) + (ulong)uVar1 * 0x18);
            *(int *)(lVar19 + (ulong)uVar20 * 4) =
                 *(int *)(lVar19 + (ulong)uVar20 * 4) + (1 << (ulong)(uVar16 + ~uVar4 & 0x1f));
            uVar17 = (ulong)((uint)LZCOUNT(uVar2) ^ 0x1f);
            puVar8 = param_1 + 4;
            do {
              uVar16 = (uint)puVar8;
              FUN_10985d980();
              uVar18 = uVar16 | uVar18 << 1;
              puVar8 = puVar8 + 6;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
            iVar15 = (uVar2 >> 1) - uVar18;
            if (uVar18 <= uVar2 >> 1) {
              iVar5 = uVar2 - iVar15;
              iVar14 = iVar15;
              if (iVar15 != iVar5) {
                puVar8 = *(uint **)(param_1 + 0xe4);
                if (puVar8 != *(uint **)(param_1 + 0xe0)) {
                  uVar16 = param_1[0xe6];
                  uVar4 = *puVar8;
                  uVar2 = uVar16 + 1;
                  param_1[0xe6] = uVar2;
                  if (uVar2 == 0x20) {
                    *(uint **)(param_1 + 0xe4) = puVar8 + 1;
                    param_1[0xe6] = 0;
                  }
                  iVar14 = iVar5;
                  if ((uVar4 & 0x80000000U >> (ulong)(uVar16 & 0x1f)) != 0) goto LAB_1098743c0;
                }
                iVar14 = iVar15;
                iVar15 = iVar5;
              }
LAB_1098743c0:
              lVar7 = *(long *)(param_1 + 0xfa);
              plVar12 = (long *)(lVar7 + (ulong)uVar3 * 0x18);
              lVar19 = *plVar12;
              *(int *)(lVar19 + (ulong)uVar20 * 4) = *(int *)(lVar19 + (ulong)uVar20 * 4) + 1;
              lVar10 = plVar12[1];
              FUN_1093784d8(lVar7 + (ulong)uVar1 * 0x18,lVar19,lVar10,lVar10 - lVar19 >> 2);
              if (iVar15 != 0) {
                uStack_70 = CONCAT44(uVar20,iVar15);
                uStack_68 = uVar3;
                func_0x00010984e290(&lStack_b0,&uStack_70);
              }
              if (iVar14 != 0) {
                uStack_70 = CONCAT44(uVar20,iVar14);
                uStack_68 = uVar1;
                func_0x00010984e290(&lStack_b0,&uStack_70);
              }
              goto LAB_109874420;
            }
          }
          goto LAB_109874434;
        }
        puVar8 = *(uint **)(param_1 + 0xee);
        *puVar8 = uVar20;
        uVar9 = (ulong)param_1[3];
        if (1 < param_1[3]) {
          uVar11 = 1;
          do {
            uVar16 = 0;
            if (uVar20 != (int)uVar9 - 1U) {
              uVar16 = uVar20 + 1;
            }
            puVar8[uVar11] = uVar16;
            uVar11 = uVar11 + 1;
            uVar9 = (ulong)param_1[3];
            uVar20 = uVar16;
          } while (uVar11 < uVar9);
        }
        if (uVar2 != 0) {
          uVar16 = 0;
          do {
            puVar6 = *(ulong **)(param_1 + 0xe8);
            if (param_1[3] != 0) {
              uVar9 = 0;
              lVar10 = *(long *)(param_1 + 0xee);
              do {
                *(undefined4 *)((long)puVar6 + (ulong)*(uint *)(lVar10 + uVar9 * 4) * 4) = 0;
                uVar11 = (ulong)*(uint *)(lVar10 + uVar9 * 4);
                iVar15 = *param_1 - *(int *)(*(long *)(lVar19 + uVar17 * 0x18) + uVar11 * 4);
                if (iVar15 != 0) {
                  puVar8 = param_1 + 0xca;
                  FUN_109849b44(puVar8,iVar15,(long)puVar6 + uVar11 * 4);
                  if ((int)puVar8 == 0) goto LAB_109874434;
                  lVar10 = *(long *)(param_1 + 0xee);
                  puVar6 = *(ulong **)(param_1 + 0xe8);
                  uVar11 = (ulong)*(uint *)(lVar10 + uVar9 * 4);
                }
                *(uint *)((long)puVar6 + uVar11 * 4) =
                     *(uint *)((long)puVar6 + uVar11 * 4) | *(uint *)(*plVar12 + uVar11 * 4);
                uVar9 = uVar9 + 1;
              } while (uVar9 < param_1[3]);
            }
            uStack_70 = *puVar6;
            uStack_68 = (uint)puVar6[1];
            FUN_109872e24(*param_3,&uStack_70);
            param_1[2] = param_1[2] + 1;
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar2);
        }
      }
LAB_109874420:
    } while (lStack_88 != 0);
    uVar13 = 1;
  }
LAB_109874438:
  FUN_10984e344(&lStack_b0);
  return uVar13;
}



/* Entry: 109874494; end: 10987457b;  */

uint * FUN_109874494(uint *param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint uStack_68;
  
  puVar13 = param_1;
  if (param_2[2] + 4 <= param_2[1]) {
    uVar4 = *(uint *)(*param_2 + param_2[2]);
    *param_1 = uVar4;
    lVar9 = param_2[2];
    lVar19 = lVar9 + 4;
    param_2[2] = lVar19;
    if ((uVar4 < 0x21) && (lVar9 + 8 <= param_2[1])) {
      uVar4 = *(uint *)(*param_2 + lVar19);
      param_1[1] = uVar4;
      param_2[2] = param_2[2] + 4;
      if (uVar4 != 0) {
        param_1[2] = 0;
        puVar13 = param_1 + 4;
        func_0x00010984d59c(puVar13,param_2);
        if ((int)puVar13 != 0) {
          puVar13 = param_1 + 0xca;
          FUN_10985d744(puVar13,param_2);
          if ((int)puVar13 != 0) {
            puVar13 = param_1 + 0xd4;
            FUN_10985d744(puVar13,param_2);
            if ((int)puVar13 != 0) {
              puVar13 = param_1 + 0xde;
              FUN_10985d744(puVar13,param_2);
              if ((int)puVar13 != 0) {
                uVar4 = param_1[1];
                uStack_70 = (ulong)uStack_70._4_4_ << 0x20;
                FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
                plVar12 = *(long **)(param_1 + 0xf4);
                if (*plVar12 != 0) {
                  plVar12[1] = *plVar12;
                  __ZdlPv();
                  *plVar12 = 0;
                  plVar12[1] = 0;
                  plVar12[2] = 0;
                }
                plVar12[1] = lStack_a8;
                *plVar12 = lStack_b0;
                plVar12[2] = lStack_a0;
                uStack_70 = uStack_70 & 0xffffffff00000000;
                FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
                plVar12 = *(long **)(param_1 + 0xfa);
                if (*plVar12 != 0) {
                  plVar12[1] = *plVar12;
                  __ZdlPv();
                  *plVar12 = 0;
                  plVar12[1] = 0;
                  plVar12[2] = 0;
                }
                plVar12[1] = lStack_a8;
                *plVar12 = lStack_b0;
                plVar12[2] = lStack_a0;
                uStack_78 = 0;
                uStack_98 = 0;
                lStack_a0 = 0;
                lStack_88 = 0;
                lStack_90 = 0;
                lStack_a8 = 0;
                lStack_b0 = 0;
                uStack_7c = uVar4;
                FUN_10984e988(&lStack_b0,&uStack_7c);
                puVar13 = (uint *)0x1;
                if (lStack_88 != 0) {
                  do {
                    lStack_88 = lStack_88 + -1;
                    puVar13 = (uint *)(*(long *)(lStack_a8 +
                                                ((ulong)(lStack_90 + lStack_88) / 0x155) * 8) +
                                      ((ulong)(lStack_90 + lStack_88) % 0x155) * 0xc);
                    uVar2 = *puVar13;
                    uVar16 = puVar13[1];
                    uVar3 = puVar13[2];
                    uVar17 = (ulong)uVar3;
                    func_0x00010984f13c(&lStack_b0,1);
                    if (uVar4 < uVar2) {
LAB_109874994:
                      puVar13 = (uint *)0x0;
                      goto LAB_109874998;
                    }
                    uVar20 = 0;
                    if (param_1[3] - 1 != uVar16) {
                      uVar20 = uVar16 + 1;
                    }
                    if (param_1[3] <= uVar20) goto LAB_109874994;
                    plVar12 = (long *)(*(long *)(param_1 + 0xf4) + uVar17 * 0x18);
                    lVar19 = *(long *)(param_1 + 0xfa);
                    uVar5 = *(uint *)(*(long *)(lVar19 + uVar17 * 0x18) + (ulong)uVar20 * 4);
                    uVar16 = *param_1;
                    if (uVar16 == uVar5) {
                      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                        uStack_70 = *(ulong *)*plVar12;
                        uStack_68 = (uint)((ulong *)*plVar12)[1];
                        FUN_109872e24(*param_3,&uStack_70);
                        param_1[2] = param_1[2] + 1;
                      }
                    }
                    else {
                      if (2 < uVar2) {
                        if (param_1[2] <= param_1[1]) {
                          uVar1 = uVar3 + 1;
                          FUN_1093784d8(*(long *)(param_1 + 0xf4) + (ulong)uVar1 * 0x18,*plVar12,
                                        plVar12[1],plVar12[1] - *plVar12 >> 2);
                          uVar18 = 0;
                          lVar19 = *(long *)(*(long *)(param_1 + 0xf4) + (ulong)uVar1 * 0x18);
                          *(int *)(lVar19 + (ulong)uVar20 * 4) =
                               *(int *)(lVar19 + (ulong)uVar20 * 4) +
                               (1 << (ulong)(uVar16 + ~uVar5 & 0x1f));
                          uVar17 = (ulong)((uint)LZCOUNT(uVar2) ^ 0x1f);
                          puVar13 = param_1 + 4;
                          do {
                            uVar16 = (uint)puVar13;
                            FUN_10985d980();
                            uVar18 = uVar16 | uVar18 << 1;
                            puVar13 = puVar13 + 6;
                            uVar17 = uVar17 - 1;
                          } while (uVar17 != 0);
                          iVar15 = (uVar2 >> 1) - uVar18;
                          if (uVar18 <= uVar2 >> 1) {
                            iVar6 = uVar2 - iVar15;
                            iVar14 = iVar15;
                            if (iVar15 != iVar6) {
                              puVar13 = *(uint **)(param_1 + 0xe4);
                              if (puVar13 != *(uint **)(param_1 + 0xe0)) {
                                uVar16 = param_1[0xe6];
                                uVar5 = *puVar13;
                                uVar2 = uVar16 + 1;
                                param_1[0xe6] = uVar2;
                                if (uVar2 == 0x20) {
                                  *(uint **)(param_1 + 0xe4) = puVar13 + 1;
                                  param_1[0xe6] = 0;
                                }
                                iVar14 = iVar6;
                                if ((uVar5 & 0x80000000U >> (ulong)(uVar16 & 0x1f)) != 0)
                                goto LAB_109874920;
                              }
                              iVar14 = iVar15;
                              iVar15 = iVar6;
                            }
LAB_109874920:
                            lVar8 = *(long *)(param_1 + 0xfa);
                            plVar12 = (long *)(lVar8 + (ulong)uVar3 * 0x18);
                            lVar19 = *plVar12;
                            *(int *)(lVar19 + (ulong)uVar20 * 4) =
                                 *(int *)(lVar19 + (ulong)uVar20 * 4) + 1;
                            lVar9 = plVar12[1];
                            FUN_1093784d8(lVar8 + (ulong)uVar1 * 0x18,lVar19,lVar9,
                                          lVar9 - lVar19 >> 2);
                            if (iVar15 != 0) {
                              uStack_70 = CONCAT44(uVar20,iVar15);
                              uStack_68 = uVar3;
                              func_0x00010984f1b0(&lStack_b0,&uStack_70);
                            }
                            if (iVar14 != 0) {
                              uStack_70 = CONCAT44(uVar20,iVar14);
                              uStack_68 = uVar1;
                              func_0x00010984f1b0(&lStack_b0,&uStack_70);
                            }
                            goto LAB_109874980;
                          }
                        }
                        goto LAB_109874994;
                      }
                      puVar13 = *(uint **)(param_1 + 0xee);
                      *puVar13 = uVar20;
                      uVar10 = (ulong)param_1[3];
                      if (1 < param_1[3]) {
                        uVar11 = 1;
                        do {
                          uVar16 = 0;
                          if (uVar20 != (int)uVar10 - 1U) {
                            uVar16 = uVar20 + 1;
                          }
                          puVar13[uVar11] = uVar16;
                          uVar11 = uVar11 + 1;
                          uVar10 = (ulong)param_1[3];
                          uVar20 = uVar16;
                        } while (uVar11 < uVar10);
                      }
                      if (uVar2 != 0) {
                        uVar16 = 0;
                        do {
                          puVar7 = *(ulong **)(param_1 + 0xe8);
                          if (param_1[3] != 0) {
                            uVar10 = 0;
                            lVar9 = *(long *)(param_1 + 0xee);
                            do {
                              *(undefined4 *)
                               ((long)puVar7 + (ulong)*(uint *)(lVar9 + uVar10 * 4) * 4) = 0;
                              uVar11 = (ulong)*(uint *)(lVar9 + uVar10 * 4);
                              iVar15 = *param_1 -
                                       *(int *)(*(long *)(lVar19 + uVar17 * 0x18) + uVar11 * 4);
                              if (iVar15 != 0) {
                                puVar13 = param_1 + 0xca;
                                FUN_109849b44(puVar13,iVar15,(long)puVar7 + uVar11 * 4);
                                if ((int)puVar13 == 0) goto LAB_109874994;
                                lVar9 = *(long *)(param_1 + 0xee);
                                puVar7 = *(ulong **)(param_1 + 0xe8);
                                uVar11 = (ulong)*(uint *)(lVar9 + uVar10 * 4);
                              }
                              *(uint *)((long)puVar7 + uVar11 * 4) =
                                   *(uint *)((long)puVar7 + uVar11 * 4) |
                                   *(uint *)(*plVar12 + uVar11 * 4);
                              uVar10 = uVar10 + 1;
                            } while (uVar10 < param_1[3]);
                          }
                          uStack_70 = *puVar7;
                          uStack_68 = (uint)puVar7[1];
                          FUN_109872e24(*param_3,&uStack_70);
                          param_1[2] = param_1[2] + 1;
                          uVar16 = uVar16 + 1;
                        } while (uVar16 != uVar2);
                      }
                    }
LAB_109874980:
                  } while (lStack_88 != 0);
                  puVar13 = (uint *)0x1;
                }
LAB_109874998:
                FUN_10984f264(&lStack_b0);
                return puVar13;
              }
            }
          }
        }
      }
    }
  }
  return puVar13;
}



/* Entry: 10987457c; end: 1098749f3;  */

undefined8 FUN_10987457c(uint *param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint uStack_68;
  
  uStack_70 = uStack_70 & 0xffffffff00000000;
  FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
  plVar12 = *(long **)(param_1 + 0xf4);
  if (*plVar12 != 0) {
    plVar12[1] = *plVar12;
    __ZdlPv();
    *plVar12 = 0;
    plVar12[1] = 0;
    plVar12[2] = 0;
  }
  plVar12[1] = lStack_a8;
  *plVar12 = lStack_b0;
  plVar12[2] = lStack_a0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
  plVar12 = *(long **)(param_1 + 0xfa);
  if (*plVar12 != 0) {
    plVar12[1] = *plVar12;
    __ZdlPv();
    *plVar12 = 0;
    plVar12[1] = 0;
    plVar12[2] = 0;
  }
  plVar12[1] = lStack_a8;
  *plVar12 = lStack_b0;
  plVar12[2] = lStack_a0;
  uStack_78 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  lStack_a8 = 0;
  lStack_b0 = 0;
  uStack_7c = param_2;
  FUN_10984e988(&lStack_b0,&uStack_7c);
  uVar13 = 1;
  if (lStack_88 != 0) {
    do {
      lStack_88 = lStack_88 + -1;
      puVar8 = (uint *)(*(long *)(lStack_a8 + ((ulong)(lStack_90 + lStack_88) / 0x155) * 8) +
                       ((ulong)(lStack_90 + lStack_88) % 0x155) * 0xc);
      uVar2 = *puVar8;
      uVar16 = puVar8[1];
      uVar3 = puVar8[2];
      uVar17 = (ulong)uVar3;
      func_0x00010984f13c(&lStack_b0,1);
      if (param_2 < uVar2) {
LAB_109874994:
        uVar13 = 0;
        goto LAB_109874998;
      }
      uVar20 = 0;
      if (param_1[3] - 1 != uVar16) {
        uVar20 = uVar16 + 1;
      }
      if (param_1[3] <= uVar20) goto LAB_109874994;
      plVar12 = (long *)(*(long *)(param_1 + 0xf4) + uVar17 * 0x18);
      lVar19 = *(long *)(param_1 + 0xfa);
      uVar4 = *(uint *)(*(long *)(lVar19 + uVar17 * 0x18) + (ulong)uVar20 * 4);
      uVar16 = *param_1;
      if (uVar16 == uVar4) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          uStack_70 = *(ulong *)*plVar12;
          uStack_68 = (uint)((ulong *)*plVar12)[1];
          FUN_109872e24(*param_3,&uStack_70);
          param_1[2] = param_1[2] + 1;
        }
      }
      else {
        if (2 < uVar2) {
          if (param_1[2] <= param_1[1]) {
            uVar1 = uVar3 + 1;
            FUN_1093784d8(*(long *)(param_1 + 0xf4) + (ulong)uVar1 * 0x18,*plVar12,plVar12[1],
                          plVar12[1] - *plVar12 >> 2);
            uVar18 = 0;
            lVar19 = *(long *)(*(long *)(param_1 + 0xf4) + (ulong)uVar1 * 0x18);
            *(int *)(lVar19 + (ulong)uVar20 * 4) =
                 *(int *)(lVar19 + (ulong)uVar20 * 4) + (1 << (ulong)(uVar16 + ~uVar4 & 0x1f));
            uVar17 = (ulong)((uint)LZCOUNT(uVar2) ^ 0x1f);
            puVar8 = param_1 + 4;
            do {
              uVar16 = (uint)puVar8;
              FUN_10985d980();
              uVar18 = uVar16 | uVar18 << 1;
              puVar8 = puVar8 + 6;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
            iVar15 = (uVar2 >> 1) - uVar18;
            if (uVar18 <= uVar2 >> 1) {
              iVar5 = uVar2 - iVar15;
              iVar14 = iVar15;
              if (iVar15 != iVar5) {
                puVar8 = *(uint **)(param_1 + 0xe4);
                if (puVar8 != *(uint **)(param_1 + 0xe0)) {
                  uVar16 = param_1[0xe6];
                  uVar4 = *puVar8;
                  uVar2 = uVar16 + 1;
                  param_1[0xe6] = uVar2;
                  if (uVar2 == 0x20) {
                    *(uint **)(param_1 + 0xe4) = puVar8 + 1;
                    param_1[0xe6] = 0;
                  }
                  iVar14 = iVar5;
                  if ((uVar4 & 0x80000000U >> (ulong)(uVar16 & 0x1f)) != 0) goto LAB_109874920;
                }
                iVar14 = iVar15;
                iVar15 = iVar5;
              }
LAB_109874920:
              lVar7 = *(long *)(param_1 + 0xfa);
              plVar12 = (long *)(lVar7 + (ulong)uVar3 * 0x18);
              lVar19 = *plVar12;
              *(int *)(lVar19 + (ulong)uVar20 * 4) = *(int *)(lVar19 + (ulong)uVar20 * 4) + 1;
              lVar10 = plVar12[1];
              FUN_1093784d8(lVar7 + (ulong)uVar1 * 0x18,lVar19,lVar10,lVar10 - lVar19 >> 2);
              if (iVar15 != 0) {
                uStack_70 = CONCAT44(uVar20,iVar15);
                uStack_68 = uVar3;
                func_0x00010984f1b0(&lStack_b0,&uStack_70);
              }
              if (iVar14 != 0) {
                uStack_70 = CONCAT44(uVar20,iVar14);
                uStack_68 = uVar1;
                func_0x00010984f1b0(&lStack_b0,&uStack_70);
              }
              goto LAB_109874980;
            }
          }
          goto LAB_109874994;
        }
        puVar8 = *(uint **)(param_1 + 0xee);
        *puVar8 = uVar20;
        uVar9 = (ulong)param_1[3];
        if (1 < param_1[3]) {
          uVar11 = 1;
          do {
            uVar16 = 0;
            if (uVar20 != (int)uVar9 - 1U) {
              uVar16 = uVar20 + 1;
            }
            puVar8[uVar11] = uVar16;
            uVar11 = uVar11 + 1;
            uVar9 = (ulong)param_1[3];
            uVar20 = uVar16;
          } while (uVar11 < uVar9);
        }
        if (uVar2 != 0) {
          uVar16 = 0;
          do {
            puVar6 = *(ulong **)(param_1 + 0xe8);
            if (param_1[3] != 0) {
              uVar9 = 0;
              lVar10 = *(long *)(param_1 + 0xee);
              do {
                *(undefined4 *)((long)puVar6 + (ulong)*(uint *)(lVar10 + uVar9 * 4) * 4) = 0;
                uVar11 = (ulong)*(uint *)(lVar10 + uVar9 * 4);
                iVar15 = *param_1 - *(int *)(*(long *)(lVar19 + uVar17 * 0x18) + uVar11 * 4);
                if (iVar15 != 0) {
                  puVar8 = param_1 + 0xca;
                  FUN_109849b44(puVar8,iVar15,(long)puVar6 + uVar11 * 4);
                  if ((int)puVar8 == 0) goto LAB_109874994;
                  lVar10 = *(long *)(param_1 + 0xee);
                  puVar6 = *(ulong **)(param_1 + 0xe8);
                  uVar11 = (ulong)*(uint *)(lVar10 + uVar9 * 4);
                }
                *(uint *)((long)puVar6 + uVar11 * 4) =
                     *(uint *)((long)puVar6 + uVar11 * 4) | *(uint *)(*plVar12 + uVar11 * 4);
                uVar9 = uVar9 + 1;
              } while (uVar9 < param_1[3]);
            }
            uStack_70 = *puVar6;
            uStack_68 = (uint)puVar6[1];
            FUN_109872e24(*param_3,&uStack_70);
            param_1[2] = param_1[2] + 1;
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar2);
        }
      }
LAB_109874980:
    } while (lStack_88 != 0);
    uVar13 = 1;
  }
LAB_109874998:
  FUN_10984f264(&lStack_b0);
  return uVar13;
}



/* Entry: 1098749f4; end: 109874adb;  */

uint * FUN_1098749f4(uint *param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  long *plVar16;
  uint *puVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint uStack_68;
  
  puVar17 = param_1;
  if (param_2[2] + 4 <= param_2[1]) {
    uVar5 = *(uint *)(*param_2 + param_2[2]);
    *param_1 = uVar5;
    lVar12 = param_2[2];
    lVar18 = lVar12 + 4;
    param_2[2] = lVar18;
    if ((uVar5 < 0x21) && (lVar12 + 8 <= param_2[1])) {
      uVar5 = *(uint *)(*param_2 + lVar18);
      param_1[1] = uVar5;
      param_2[2] = param_2[2] + 4;
      if (uVar5 != 0) {
        param_1[2] = 0;
        puVar17 = param_1 + 4;
        func_0x00010984d59c(puVar17,param_2);
        if ((int)puVar17 != 0) {
          puVar17 = param_1 + 0xca;
          FUN_10985d744(puVar17,param_2);
          if ((int)puVar17 != 0) {
            puVar17 = param_1 + 0xd4;
            FUN_10985d744(puVar17,param_2);
            if ((int)puVar17 != 0) {
              puVar17 = param_1 + 0xde;
              FUN_10985d744(puVar17,param_2);
              if ((int)puVar17 != 0) {
                uVar5 = param_1[1];
                uStack_70 = (ulong)uStack_70._4_4_ << 0x20;
                FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
                plVar16 = *(long **)(param_1 + 0xf4);
                if (*plVar16 != 0) {
                  plVar16[1] = *plVar16;
                  __ZdlPv();
                  *plVar16 = 0;
                  plVar16[1] = 0;
                  plVar16[2] = 0;
                }
                plVar16[1] = lStack_a8;
                *plVar16 = lStack_b0;
                plVar16[2] = lStack_a0;
                uStack_70 = uStack_70 & 0xffffffff00000000;
                FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
                plVar16 = *(long **)(param_1 + 0xfa);
                if (*plVar16 != 0) {
                  plVar16[1] = *plVar16;
                  __ZdlPv();
                  *plVar16 = 0;
                  plVar16[1] = 0;
                  plVar16[2] = 0;
                }
                plVar16[1] = lStack_a8;
                *plVar16 = lStack_b0;
                plVar16[2] = lStack_a0;
                uStack_78 = 0;
                uStack_98 = 0;
                lStack_a0 = 0;
                lStack_88 = 0;
                lStack_90 = 0;
                lStack_a8 = 0;
                lStack_b0 = 0;
                uStack_7c = uVar5;
                FUN_10984f8c8(&lStack_b0,&uStack_7c);
                puVar17 = (uint *)0x1;
                if (lStack_88 != 0) {
                  do {
                    lStack_88 = lStack_88 + -1;
                    puVar17 = (uint *)(*(long *)(lStack_a8 +
                                                ((ulong)(lStack_90 + lStack_88) / 0x155) * 8) +
                                      ((ulong)(lStack_90 + lStack_88) % 0x155) * 0xc);
                    uVar3 = *puVar17;
                    uVar8 = puVar17[1];
                    uVar4 = puVar17[2];
                    func_0x00010985007c(&lStack_b0,1);
                    if (uVar5 < uVar3) {
LAB_109874f10:
                      puVar17 = (uint *)0x0;
                      goto LAB_109874f14;
                    }
                    lVar18 = *(long *)(param_1 + 0xf4);
                    plVar16 = (long *)(*(long *)(param_1 + 0xfa) + (ulong)uVar4 * 0x18);
                    puVar17 = param_1;
                    FUN_1098723e8(param_1,uVar3,plVar16,uVar8);
                    uVar8 = (uint)puVar17;
                    if (param_1[3] <= uVar8) goto LAB_109874f10;
                    plVar2 = (long *)(lVar18 + (ulong)uVar4 * 0x18);
                    uVar6 = *(uint *)(*plVar16 + ((ulong)puVar17 & 0xffffffff) * 4);
                    uVar19 = *param_1;
                    if (uVar19 == uVar6) {
                      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
                        uStack_70 = *(ulong *)*plVar2;
                        uStack_68 = (uint)((ulong *)*plVar2)[1];
                        FUN_109872e24(*param_3,&uStack_70);
                        param_1[2] = param_1[2] + 1;
                      }
                    }
                    else {
                      if (2 < uVar3) {
                        if (param_1[2] <= param_1[1]) {
                          uVar1 = uVar4 + 1;
                          lVar18 = *(long *)(param_1 + 0xf4);
                          if ((long *)(lVar18 + (ulong)uVar1 * 0x18) != plVar2) {
                            FUN_1093784d8();
                            lVar18 = *(long *)(param_1 + 0xf4);
                          }
                          uVar21 = 0;
                          lVar18 = *(long *)(lVar18 + (ulong)uVar1 * 0x18);
                          *(int *)(lVar18 + ((ulong)puVar17 & 0xffffffff) * 4) =
                               *(int *)(lVar18 + ((ulong)puVar17 & 0xffffffff) * 4) +
                               (1 << (ulong)(uVar19 + ~uVar6 & 0x1f));
                          uVar13 = (ulong)((uint)LZCOUNT(uVar3) ^ 0x1f);
                          puVar9 = param_1 + 4;
                          do {
                            uVar19 = (uint)puVar9;
                            FUN_10985d980();
                            uVar21 = uVar19 | uVar21 << 1;
                            puVar9 = puVar9 + 6;
                            uVar13 = uVar13 - 1;
                          } while (uVar13 != 0);
                          iVar15 = (uVar3 >> 1) - uVar21;
                          if (uVar21 <= uVar3 >> 1) {
                            iVar7 = uVar3 - iVar15;
                            iVar20 = iVar15;
                            if (iVar15 != iVar7) {
                              puVar9 = *(uint **)(param_1 + 0xe4);
                              if (puVar9 != *(uint **)(param_1 + 0xe0)) {
                                uVar19 = param_1[0xe6];
                                uVar6 = *puVar9;
                                uVar3 = uVar19 + 1;
                                param_1[0xe6] = uVar3;
                                if (uVar3 == 0x20) {
                                  *(uint **)(param_1 + 0xe4) = puVar9 + 1;
                                  param_1[0xe6] = 0;
                                }
                                iVar20 = iVar7;
                                if ((uVar6 & 0x80000000U >> (ulong)(uVar19 & 0x1f)) != 0)
                                goto LAB_109874e9c;
                              }
                              iVar20 = iVar15;
                              iVar15 = iVar7;
                            }
LAB_109874e9c:
                            lVar11 = *(long *)(param_1 + 0xfa);
                            plVar16 = (long *)(lVar11 + (ulong)uVar4 * 0x18);
                            lVar18 = *plVar16;
                            *(int *)(lVar18 + ((ulong)puVar17 & 0xffffffff) * 4) =
                                 *(int *)(lVar18 + ((ulong)puVar17 & 0xffffffff) * 4) + 1;
                            lVar12 = plVar16[1];
                            FUN_1093784d8(lVar11 + (ulong)uVar1 * 0x18,lVar18,lVar12,
                                          lVar12 - lVar18 >> 2);
                            if (iVar15 != 0) {
                              uStack_70 = CONCAT44(uVar8,iVar15);
                              uStack_68 = uVar4;
                              func_0x0001098500f0(&lStack_b0,&uStack_70);
                            }
                            if (iVar20 != 0) {
                              uStack_70 = CONCAT44(uVar8,iVar20);
                              uStack_68 = uVar1;
                              func_0x0001098500f0(&lStack_b0,&uStack_70);
                            }
                            goto LAB_109874efc;
                          }
                        }
                        goto LAB_109874f10;
                      }
                      puVar9 = *(uint **)(param_1 + 0xee);
                      *puVar9 = uVar8;
                      uVar13 = (ulong)param_1[3];
                      if (1 < param_1[3]) {
                        uVar14 = 1;
                        do {
                          uVar8 = 0;
                          if ((int)puVar17 != (int)uVar13 + -1) {
                            uVar8 = (int)puVar17 + 1;
                          }
                          puVar17 = (uint *)(ulong)uVar8;
                          puVar9[uVar14] = uVar8;
                          uVar14 = uVar14 + 1;
                          uVar13 = (ulong)param_1[3];
                        } while (uVar14 < uVar13);
                      }
                      if (uVar3 != 0) {
                        uVar8 = 0;
                        do {
                          puVar10 = *(ulong **)(param_1 + 0xe8);
                          if (param_1[3] != 0) {
                            uVar13 = 0;
                            lVar18 = *(long *)(param_1 + 0xee);
                            do {
                              *(undefined4 *)
                               ((long)puVar10 + (ulong)*(uint *)(lVar18 + uVar13 * 4) * 4) = 0;
                              uVar14 = (ulong)*(uint *)(lVar18 + uVar13 * 4);
                              iVar15 = *param_1 - *(int *)(*plVar16 + uVar14 * 4);
                              if (iVar15 != 0) {
                                puVar17 = param_1 + 0xca;
                                FUN_109849b44(puVar17,iVar15,(long)puVar10 + uVar14 * 4);
                                if ((int)puVar17 == 0) goto LAB_109874f10;
                                lVar18 = *(long *)(param_1 + 0xee);
                                puVar10 = *(ulong **)(param_1 + 0xe8);
                                uVar14 = (ulong)*(uint *)(lVar18 + uVar13 * 4);
                              }
                              *(uint *)((long)puVar10 + uVar14 * 4) =
                                   *(uint *)((long)puVar10 + uVar14 * 4) |
                                   *(uint *)(*plVar2 + uVar14 * 4);
                              uVar13 = uVar13 + 1;
                            } while (uVar13 < param_1[3]);
                          }
                          uStack_70 = *puVar10;
                          uStack_68 = (uint)puVar10[1];
                          FUN_109872e24(*param_3,&uStack_70);
                          param_1[2] = param_1[2] + 1;
                          uVar8 = uVar8 + 1;
                        } while (uVar8 != uVar3);
                      }
                    }
LAB_109874efc:
                  } while (lStack_88 != 0);
                  puVar17 = (uint *)0x1;
                }
LAB_109874f14:
                FUN_1098501a4(&lStack_b0);
                return puVar17;
              }
            }
          }
        }
      }
    }
  }
  return puVar17;
}



/* Entry: 109874adc; end: 109874f73;  */

undefined8 FUN_109874adc(uint *param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  ulong *puVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint uStack_68;
  
  uStack_70 = uStack_70 & 0xffffffff00000000;
  FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
  plVar16 = *(long **)(param_1 + 0xf4);
  if (*plVar16 != 0) {
    plVar16[1] = *plVar16;
    __ZdlPv();
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[2] = 0;
  }
  plVar16[1] = lStack_a8;
  *plVar16 = lStack_b0;
  plVar16[2] = lStack_a0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  FUN_109849bf0(&lStack_b0,param_1[3],&uStack_70);
  plVar16 = *(long **)(param_1 + 0xfa);
  if (*plVar16 != 0) {
    plVar16[1] = *plVar16;
    __ZdlPv();
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[2] = 0;
  }
  plVar16[1] = lStack_a8;
  *plVar16 = lStack_b0;
  plVar16[2] = lStack_a0;
  uStack_78 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  lStack_a8 = 0;
  lStack_b0 = 0;
  uStack_7c = param_2;
  FUN_10984f8c8(&lStack_b0,&uStack_7c);
  uVar17 = 1;
  if (lStack_88 != 0) {
    do {
      lStack_88 = lStack_88 + -1;
      puVar12 = (uint *)(*(long *)(lStack_a8 + ((ulong)(lStack_90 + lStack_88) / 0x155) * 8) +
                        ((ulong)(lStack_90 + lStack_88) % 0x155) * 0xc);
      uVar3 = *puVar12;
      uVar7 = puVar12[1];
      uVar4 = puVar12[2];
      func_0x00010985007c(&lStack_b0,1);
      if (param_2 < uVar3) {
LAB_109874f10:
        uVar17 = 0;
        goto LAB_109874f14;
      }
      lVar18 = *(long *)(param_1 + 0xf4);
      plVar16 = (long *)(*(long *)(param_1 + 0xfa) + (ulong)uVar4 * 0x18);
      puVar12 = param_1;
      FUN_1098723e8(param_1,uVar3,plVar16,uVar7);
      uVar7 = (uint)puVar12;
      if (param_1[3] <= uVar7) goto LAB_109874f10;
      plVar2 = (long *)(lVar18 + (ulong)uVar4 * 0x18);
      uVar5 = *(uint *)(*plVar16 + ((ulong)puVar12 & 0xffffffff) * 4);
      uVar19 = *param_1;
      if (uVar19 == uVar5) {
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          uStack_70 = *(ulong *)*plVar2;
          uStack_68 = (uint)((ulong *)*plVar2)[1];
          FUN_109872e24(*param_3,&uStack_70);
          param_1[2] = param_1[2] + 1;
        }
      }
      else {
        if (2 < uVar3) {
          if (param_1[2] <= param_1[1]) {
            uVar1 = uVar4 + 1;
            lVar18 = *(long *)(param_1 + 0xf4);
            if ((long *)(lVar18 + (ulong)uVar1 * 0x18) != plVar2) {
              FUN_1093784d8();
              lVar18 = *(long *)(param_1 + 0xf4);
            }
            uVar21 = 0;
            lVar18 = *(long *)(lVar18 + (ulong)uVar1 * 0x18);
            *(int *)(lVar18 + ((ulong)puVar12 & 0xffffffff) * 4) =
                 *(int *)(lVar18 + ((ulong)puVar12 & 0xffffffff) * 4) +
                 (1 << (ulong)(uVar19 + ~uVar5 & 0x1f));
            uVar13 = (ulong)((uint)LZCOUNT(uVar3) ^ 0x1f);
            puVar9 = param_1 + 4;
            do {
              uVar19 = (uint)puVar9;
              FUN_10985d980();
              uVar21 = uVar19 | uVar21 << 1;
              puVar9 = puVar9 + 6;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
            iVar15 = (uVar3 >> 1) - uVar21;
            if (uVar21 <= uVar3 >> 1) {
              iVar6 = uVar3 - iVar15;
              iVar20 = iVar15;
              if (iVar15 != iVar6) {
                puVar9 = *(uint **)(param_1 + 0xe4);
                if (puVar9 != *(uint **)(param_1 + 0xe0)) {
                  uVar19 = param_1[0xe6];
                  uVar5 = *puVar9;
                  uVar3 = uVar19 + 1;
                  param_1[0xe6] = uVar3;
                  if (uVar3 == 0x20) {
                    *(uint **)(param_1 + 0xe4) = puVar9 + 1;
                    param_1[0xe6] = 0;
                  }
                  iVar20 = iVar6;
                  if ((uVar5 & 0x80000000U >> (ulong)(uVar19 & 0x1f)) != 0) goto LAB_109874e9c;
                }
                iVar20 = iVar15;
                iVar15 = iVar6;
              }
LAB_109874e9c:
              lVar11 = *(long *)(param_1 + 0xfa);
              plVar16 = (long *)(lVar11 + (ulong)uVar4 * 0x18);
              lVar18 = *plVar16;
              *(int *)(lVar18 + ((ulong)puVar12 & 0xffffffff) * 4) =
                   *(int *)(lVar18 + ((ulong)puVar12 & 0xffffffff) * 4) + 1;
              lVar8 = plVar16[1];
              FUN_1093784d8(lVar11 + (ulong)uVar1 * 0x18,lVar18,lVar8,lVar8 - lVar18 >> 2);
              if (iVar15 != 0) {
                uStack_70 = CONCAT44(uVar7,iVar15);
                uStack_68 = uVar4;
                func_0x0001098500f0(&lStack_b0,&uStack_70);
              }
              if (iVar20 != 0) {
                uStack_70 = CONCAT44(uVar7,iVar20);
                uStack_68 = uVar1;
                func_0x0001098500f0(&lStack_b0,&uStack_70);
              }
              goto LAB_109874efc;
            }
          }
          goto LAB_109874f10;
        }
        puVar9 = *(uint **)(param_1 + 0xee);
        *puVar9 = uVar7;
        uVar13 = (ulong)param_1[3];
        if (1 < param_1[3]) {
          uVar14 = 1;
          do {
            uVar7 = 0;
            if ((int)puVar12 != (int)uVar13 + -1) {
              uVar7 = (int)puVar12 + 1;
            }
            puVar12 = (uint *)(ulong)uVar7;
            puVar9[uVar14] = uVar7;
            uVar14 = uVar14 + 1;
            uVar13 = (ulong)param_1[3];
          } while (uVar14 < uVar13);
        }
        if (uVar3 != 0) {
          uVar7 = 0;
          do {
            puVar10 = *(ulong **)(param_1 + 0xe8);
            if (param_1[3] != 0) {
              uVar13 = 0;
              lVar18 = *(long *)(param_1 + 0xee);
              do {
                *(undefined4 *)((long)puVar10 + (ulong)*(uint *)(lVar18 + uVar13 * 4) * 4) = 0;
                uVar14 = (ulong)*(uint *)(lVar18 + uVar13 * 4);
                iVar15 = *param_1 - *(int *)(*plVar16 + uVar14 * 4);
                if (iVar15 != 0) {
                  puVar12 = param_1 + 0xca;
                  FUN_109849b44(puVar12,iVar15,(long)puVar10 + uVar14 * 4);
                  if ((int)puVar12 == 0) goto LAB_109874f10;
                  lVar18 = *(long *)(param_1 + 0xee);
                  puVar10 = *(ulong **)(param_1 + 0xe8);
                  uVar14 = (ulong)*(uint *)(lVar18 + uVar13 * 4);
                }
                *(uint *)((long)puVar10 + uVar14 * 4) =
                     *(uint *)((long)puVar10 + uVar14 * 4) | *(uint *)(*plVar2 + uVar14 * 4);
                uVar13 = uVar13 + 1;
              } while (uVar13 < param_1[3]);
            }
            uStack_70 = *puVar10;
            uStack_68 = (uint)puVar10[1];
            FUN_109872e24(*param_3,&uStack_70);
            param_1[2] = param_1[2] + 1;
            uVar7 = uVar7 + 1;
          } while (uVar7 != uVar3);
        }
      }
LAB_109874efc:
    } while (lStack_88 != 0);
    uVar17 = 1;
  }
LAB_109874f14:
  FUN_1098501a4(&lStack_b0);
  return uVar17;
}



/* Entry: 109874f74; end: 10987528b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109874f74(undefined4 *param_1,long *******param_2,long *******param_3,long ******param_4,
                  long ******param_5)

{
  int iVar1;
  long *******ppppppplVar2;
  long *****ppppplVar3;
  undefined8 *puVar4;
  long *****ppppplVar5;
  int *extraout_x8;
  long ******pppppplVar6;
  byte bVar7;
  int *piVar8;
  long ******pppppplVar9;
  undefined1 auStack_d4 [5];
  byte bStack_cf;
  byte bStack_ce;
  byte bStack_cd;
  short sStack_ca;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined7 uStack_b8;
  char cStack_b1;
  undefined8 uStack_b0;
  long *****ppppplStack_a8;
  long *******ppppppplStack_68;
  long ******pppppplStack_60;
  undefined7 uStack_58;
  char cStack_51;
  long ******pppppplStack_50;
  undefined6 uStack_48;
  undefined2 uStack_42;
  undefined6 uStack_40;
  undefined8 uStack_3a;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = 0x73726170206f;
  pppppplStack_50 = (long ******)0x742064656c696146;
  uStack_3a = 0x2e726564616568;
  uStack_42 = 0x2065;
  uStack_40 = 0x206f63617244;
  if ((long)param_2[1] < (long)param_2[2] + 5) {
    param_2 = (long *******)&ppppppplStack_68;
    param_3 = &pppppplStack_50;
    func_0x000107c31940();
    ppppppplVar2 = (long *******)(param_1 + 2);
    *param_1 = 0xfffffffe;
    if (-1 < cStack_51) goto LAB_1098751cc;
    param_3 = ppppppplStack_68;
    func_0x000107c3192c();
    param_4 = pppppplStack_60;
LAB_109875214:
    param_2 = ppppppplVar2;
    if (cStack_51 < '\0') {
      param_2 = ppppppplStack_68;
      __ZdlPv();
    }
  }
  else {
    piVar8 = (int *)((long)*param_2 + (long)param_2[2]);
    iVar1 = *piVar8;
    *(char *)((long)param_3 + 4) = (char)piVar8[1];
    *(int *)param_3 = iVar1;
    pppppplVar6 = param_2[2];
    pppppplVar9 = (long ******)((long)pppppplVar6 + 5);
    param_2[2] = pppppplVar9;
    if (*(int *)param_3 == 0x43415244 && *(char *)((long)param_3 + 4) == 'O') {
      if ((long)param_2[1] < (long)pppppplVar6 + 6) {
        param_2 = (long *******)&ppppppplStack_68;
        param_3 = &pppppplStack_50;
        func_0x000107c31940();
        ppppppplVar2 = (long *******)(param_1 + 2);
        *param_1 = 0xfffffffe;
        if (cStack_51 < '\0') {
          param_3 = ppppppplStack_68;
          func_0x000107c3192c();
          param_4 = pppppplStack_60;
          goto LAB_109875214;
        }
      }
      else {
        *(undefined1 *)((long)param_3 + 5) = *(undefined1 *)((long)*param_2 + (long)pppppplVar9);
        pppppplVar6 = param_2[2];
        pppppplVar9 = (long ******)((long)pppppplVar6 + 1);
        param_2[2] = pppppplVar9;
        if ((long)param_2[1] < (long)pppppplVar6 + 2) {
          param_2 = (long *******)&ppppppplStack_68;
          param_3 = &pppppplStack_50;
          func_0x000107c31940();
          ppppppplVar2 = (long *******)(param_1 + 2);
          *param_1 = 0xfffffffe;
          if (cStack_51 < '\0') {
            param_3 = ppppppplStack_68;
            func_0x000107c3192c();
            param_4 = pppppplStack_60;
            goto LAB_109875214;
          }
        }
        else {
          *(undefined1 *)((long)param_3 + 6) = *(undefined1 *)((long)*param_2 + (long)pppppplVar9);
          pppppplVar6 = param_2[2];
          pppppplVar9 = (long ******)((long)pppppplVar6 + 1);
          param_2[2] = pppppplVar9;
          if ((long)param_2[1] < (long)pppppplVar6 + 2) {
            param_2 = (long *******)&ppppppplStack_68;
            param_3 = &pppppplStack_50;
            func_0x000107c31940();
            ppppppplVar2 = (long *******)(param_1 + 2);
            *param_1 = 0xfffffffe;
            if (cStack_51 < '\0') {
              param_3 = ppppppplStack_68;
              func_0x000107c3192c();
              param_4 = pppppplStack_60;
              goto LAB_109875214;
            }
          }
          else {
            *(undefined1 *)((long)param_3 + 7) = *(undefined1 *)((long)*param_2 + (long)pppppplVar9)
            ;
            pppppplVar6 = param_2[2];
            pppppplVar9 = (long ******)((long)pppppplVar6 + 1);
            param_2[2] = pppppplVar9;
            if ((long)param_2[1] < (long)pppppplVar6 + 2) {
              param_2 = (long *******)&ppppppplStack_68;
              param_3 = &pppppplStack_50;
              func_0x000107c31940();
              ppppppplVar2 = (long *******)(param_1 + 2);
              *param_1 = 0xfffffffe;
              if (cStack_51 < '\0') {
                param_3 = ppppppplStack_68;
                func_0x000107c3192c();
                param_4 = pppppplStack_60;
                goto LAB_109875214;
              }
            }
            else {
              *(undefined1 *)(param_3 + 1) = *(undefined1 *)((long)*param_2 + (long)pppppplVar9);
              pppppplVar6 = param_2[2];
              pppppplVar9 = (long ******)((long)pppppplVar6 + 1);
              param_2[2] = pppppplVar9;
              if ((long)pppppplVar6 + 3 <= (long)param_2[1]) {
                *(undefined2 *)((long)param_3 + 10) =
                     *(undefined2 *)((long)*param_2 + (long)pppppplVar9);
                param_2[2] = (long ******)((long)param_2[2] + 2);
                *param_1 = 0;
                *(undefined8 *)(param_1 + 4) = 0;
                *(undefined8 *)(param_1 + 6) = 0;
                *(undefined8 *)(param_1 + 2) = 0;
                goto LAB_109875224;
              }
              param_2 = (long *******)&ppppppplStack_68;
              param_3 = &pppppplStack_50;
              func_0x000107c31940();
              ppppppplVar2 = (long *******)(param_1 + 2);
              *param_1 = 0xfffffffe;
              if (cStack_51 < '\0') {
                param_3 = ppppppplStack_68;
                func_0x000107c3192c();
                param_4 = pppppplStack_60;
                goto LAB_109875214;
              }
            }
          }
        }
      }
    }
    else {
      param_3 = (long *******)&UNK_10f581d58;
      param_2 = (long *******)&ppppppplStack_68;
      func_0x000107c31940();
      ppppppplVar2 = (long *******)(param_1 + 2);
      *param_1 = 0xffffffff;
      if (cStack_51 < '\0') {
        param_3 = ppppppplStack_68;
        func_0x000107c3192c();
        param_4 = pppppplStack_60;
        goto LAB_109875214;
      }
    }
LAB_1098751cc:
    *(long *******)(param_1 + 4) = pppppplStack_60;
    *(long ********)(param_1 + 2) = ppppppplStack_68;
    *(ulong *)(param_1 + 6) = CONCAT17(cStack_51,uStack_58);
  }
LAB_109875224:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_51 < '\0') {
    __ZdlPv(ppppppplStack_68);
  }
  __Unwind_Resume();
  param_2[10] = (long ******)param_3;
  param_2[8] = param_4;
  param_2[1] = param_5;
  FUN_109874f74(param_4,auStack_d4);
  if (*extraout_x8 != 0) {
    return;
  }
  if (*(char *)((long)extraout_x8 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(extraout_x8 + 2));
  }
  ppppppplVar2 = param_2;
  (*(code *)(*param_2)[2])();
  if ((uint)ppppppplVar2 == (uint)bStack_cd) {
    *(byte *)(param_2 + 9) = bStack_cf;
    *(byte *)((long)param_2 + 0x49) = bStack_ce;
    if (bStack_cf - 3 < 0xfffffffe) {
      func_0x000107c31940(&uStack_c8,&UNK_10f581db8);
      *extraout_x8 = -5;
      if (-1 < cStack_b1) goto LAB_109875360;
      func_0x000107c3192c(extraout_x8 + 2,uStack_c8,uStack_c0);
    }
    else {
      bVar7 = 2;
      if (bStack_cd == 0) {
        bVar7 = 3;
      }
      if ((bStack_cf == 2) && (bVar7 < bStack_ce)) {
        func_0x000107c31940(&uStack_c8,&UNK_10f581dcf);
        *extraout_x8 = -5;
        if (-1 < cStack_b1) goto LAB_109875360;
        func_0x000107c3192c(extraout_x8 + 2,uStack_c8,uStack_c0);
      }
      else {
        pppppplVar9 = param_2[8];
        *(ushort *)((long)pppppplVar9 + 0x32) = CONCAT11(bStack_cf,bStack_ce);
        if ((0x102 < CONCAT11(bStack_cf,bStack_ce)) && (sStack_ca < 0)) {
          ppppplVar3 = (long *****)0x48;
          __Znwm();
          ppppplVar3[1] = (long ****)0x0;
          *ppppplVar3 = (long ****)(ppppplVar3 + 1);
          ppppplVar3[5] = (long ****)0x0;
          ppppplVar3[6] = (long ****)0x0;
          ppppplVar3[4] = (long ****)0x0;
          ppppplVar3[2] = (long ****)0x0;
          ppppplVar3[3] = (long ****)(ppppplVar3 + 4);
          ppppplVar3[7] = (long ****)0x0;
          ppppplVar3[8] = (long ****)0x0;
          uStack_b0 = 0;
          puVar4 = &uStack_b0;
          ppppplStack_a8 = ppppplVar3;
          FUN_109877b98(puVar4,pppppplVar9,ppppplVar3);
          if (((ulong)puVar4 & 1) == 0) {
            func_0x000107c31940(&uStack_c8,&UNK_10f581d6a);
            piVar8 = extraout_x8 + 2;
            *extraout_x8 = -1;
            if (cStack_b1 < '\0') {
              func_0x000107c3192c(piVar8,uStack_c8,uStack_c0);
              if (cStack_b1 < '\0') {
                __ZdlPv(uStack_c8);
              }
            }
            else {
              *(undefined8 *)(extraout_x8 + 4) = uStack_c0;
              *(undefined8 *)piVar8 = uStack_c8;
              *(ulong *)(extraout_x8 + 6) = CONCAT17(cStack_b1,uStack_b8);
            }
            ppppplVar3 = ppppplStack_a8;
            ppppplStack_a8 = (long *****)0x0;
            if (ppppplVar3 != (long *****)0x0) {
              FUN_109875894(&ppppplStack_a8);
            }
            if (*extraout_x8 != 0) {
              return;
            }
            if (*(char *)((long)extraout_x8 + 0x1f) < '\0') {
              __ZdlPv(*(undefined8 *)piVar8);
            }
          }
          else {
            ppppplVar5 = param_2[1][1];
            param_2[1][1] = ppppplVar3;
            if (ppppplVar5 != (long *****)0x0) {
              FUN_109875894();
            }
            *extraout_x8 = 0;
            extraout_x8[4] = 0;
            extraout_x8[5] = 0;
            extraout_x8[6] = 0;
            extraout_x8[7] = 0;
            extraout_x8[2] = 0;
            extraout_x8[3] = 0;
          }
        }
        ppppppplVar2 = param_2;
        (*(code *)(*param_2)[3])();
        if (((ulong)ppppppplVar2 & 1) == 0) {
          func_0x000107c31940(&uStack_c8,&UNK_10f581de6);
          *extraout_x8 = -1;
          if (-1 < cStack_b1) goto LAB_109875360;
          func_0x000107c3192c(extraout_x8 + 2,uStack_c8,uStack_c0);
        }
        else {
          ppppppplVar2 = param_2;
          (*(code *)(*param_2)[5])();
          if (((ulong)ppppppplVar2 & 1) == 0) {
            func_0x000107c31940(&uStack_c8,&UNK_10f581e08);
            *extraout_x8 = -1;
            if (-1 < cStack_b1) goto LAB_109875360;
            func_0x000107c3192c(extraout_x8 + 2,uStack_c8,uStack_c0);
          }
          else {
            (*(code *)(*param_2)[6])();
            if (((ulong)param_2 & 1) != 0) {
              *extraout_x8 = 0;
              extraout_x8[4] = 0;
              extraout_x8[5] = 0;
              extraout_x8[6] = 0;
              extraout_x8[7] = 0;
              extraout_x8[2] = 0;
              extraout_x8[3] = 0;
              return;
            }
            func_0x000107c31940(&uStack_c8,&UNK_10f581e28);
            *extraout_x8 = -1;
            if (-1 < cStack_b1) {
LAB_109875360:
              *(undefined8 *)(extraout_x8 + 4) = uStack_c0;
              *(undefined8 *)(extraout_x8 + 2) = uStack_c8;
              *(ulong *)(extraout_x8 + 6) = CONCAT17(cStack_b1,uStack_b8);
              return;
            }
            func_0x000107c3192c(extraout_x8 + 2,uStack_c8,uStack_c0);
          }
        }
      }
    }
  }
  else {
    func_0x000107c31940(&uStack_c8,&UNK_10f581d85);
    *extraout_x8 = -1;
    if (-1 < cStack_b1) goto LAB_109875360;
    func_0x000107c3192c(extraout_x8 + 2,uStack_c8,uStack_c0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(uStack_c8);
  }
  return;
}



/* Entry: 10987528c; end: 109875647;  */

void FUN_10987528c(int *param_1,long *param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  int *piVar5;
  long lVar6;
  undefined1 auStack_64 [5];
  byte bStack_5f;
  byte bStack_5e;
  byte bStack_5d;
  short sStack_5a;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined7 uStack_48;
  char cStack_41;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  param_2[10] = param_3;
  param_2[8] = param_4;
  param_2[1] = param_5;
  FUN_109874f74(param_4,auStack_64);
  if (*param_1 != 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 2));
  }
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x10))();
  if ((uint)plVar1 == (uint)bStack_5d) {
    *(byte *)(param_2 + 9) = bStack_5f;
    *(byte *)((long)param_2 + 0x49) = bStack_5e;
    if (bStack_5f - 3 < 0xfffffffe) {
      func_0x000107c31940(&uStack_58,&UNK_10f581db8);
      *param_1 = -5;
      if (-1 < cStack_41) goto LAB_109875360;
      func_0x000107c3192c(param_1 + 2,uStack_58,uStack_50);
    }
    else {
      bVar4 = 2;
      if (bStack_5d == 0) {
        bVar4 = 3;
      }
      if ((bStack_5f == 2) && (bVar4 < bStack_5e)) {
        func_0x000107c31940(&uStack_58,&UNK_10f581dcf);
        *param_1 = -5;
        if (-1 < cStack_41) goto LAB_109875360;
        func_0x000107c3192c(param_1 + 2,uStack_58,uStack_50);
      }
      else {
        lVar6 = param_2[8];
        *(ushort *)(lVar6 + 0x32) = CONCAT11(bStack_5f,bStack_5e);
        if ((0x102 < CONCAT11(bStack_5f,bStack_5e)) && (sStack_5a < 0)) {
          puVar2 = (undefined8 *)0x48;
          __Znwm();
          puVar2[1] = 0;
          *puVar2 = puVar2 + 1;
          puVar2[5] = 0;
          puVar2[6] = 0;
          puVar2[4] = 0;
          puVar2[2] = 0;
          puVar2[3] = puVar2 + 4;
          puVar2[7] = 0;
          puVar2[8] = 0;
          uStack_40 = 0;
          puVar3 = &uStack_40;
          puStack_38 = puVar2;
          FUN_109877b98(puVar3,lVar6,puVar2);
          if (((ulong)puVar3 & 1) == 0) {
            func_0x000107c31940(&uStack_58,&UNK_10f581d6a);
            piVar5 = param_1 + 2;
            *param_1 = -1;
            if (cStack_41 < '\0') {
              func_0x000107c3192c(piVar5,uStack_58,uStack_50);
              if (cStack_41 < '\0') {
                __ZdlPv(uStack_58);
              }
            }
            else {
              *(undefined8 *)(param_1 + 4) = uStack_50;
              *(undefined8 *)piVar5 = uStack_58;
              *(ulong *)(param_1 + 6) = CONCAT17(cStack_41,uStack_48);
            }
            puVar3 = puStack_38;
            puStack_38 = (undefined8 *)0x0;
            if (puVar3 != (undefined8 *)0x0) {
              FUN_109875894(&puStack_38);
            }
            if (*param_1 != 0) {
              return;
            }
            if (*(char *)((long)param_1 + 0x1f) < '\0') {
              __ZdlPv(*(undefined8 *)piVar5);
            }
          }
          else {
            lVar6 = *(long *)(param_2[1] + 8);
            *(long *)(param_2[1] + 8) = (long)puVar2;
            if (lVar6 != 0) {
              FUN_109875894();
            }
            *param_1 = 0;
            param_1[4] = 0;
            param_1[5] = 0;
            param_1[6] = 0;
            param_1[7] = 0;
            param_1[2] = 0;
            param_1[3] = 0;
          }
        }
        plVar1 = param_2;
        (**(code **)(*param_2 + 0x18))();
        if (((ulong)plVar1 & 1) == 0) {
          func_0x000107c31940(&uStack_58,&UNK_10f581de6);
          *param_1 = -1;
          if (-1 < cStack_41) goto LAB_109875360;
          func_0x000107c3192c(param_1 + 2,uStack_58,uStack_50);
        }
        else {
          plVar1 = param_2;
          (**(code **)(*param_2 + 0x28))();
          if (((ulong)plVar1 & 1) == 0) {
            func_0x000107c31940(&uStack_58,&UNK_10f581e08);
            *param_1 = -1;
            if (-1 < cStack_41) goto LAB_109875360;
            func_0x000107c3192c(param_1 + 2,uStack_58,uStack_50);
          }
          else {
            (**(code **)(*param_2 + 0x30))();
            if (((ulong)param_2 & 1) != 0) {
              *param_1 = 0;
              param_1[4] = 0;
              param_1[5] = 0;
              param_1[6] = 0;
              param_1[7] = 0;
              param_1[2] = 0;
              param_1[3] = 0;
              return;
            }
            func_0x000107c31940(&uStack_58,&UNK_10f581e28);
            *param_1 = -1;
            if (-1 < cStack_41) {
LAB_109875360:
              *(undefined8 *)(param_1 + 4) = uStack_50;
              *(undefined8 *)(param_1 + 2) = uStack_58;
              *(ulong *)(param_1 + 6) = CONCAT17(cStack_41,uStack_48);
              return;
            }
            func_0x000107c3192c(param_1 + 2,uStack_58,uStack_50);
          }
        }
      }
    }
  }
  else {
    func_0x000107c31940(&uStack_58,&UNK_10f581d85);
    *param_1 = -1;
    if (-1 < cStack_41) goto LAB_109875360;
    func_0x000107c3192c(param_1 + 2,uStack_58,uStack_50);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(uStack_58);
  }
  return;
}



/* Entry: 109875648; end: 1098757db;  */

long * FUN_109875648(long *param_1)

{
  ulong *puVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  ulong *puVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  
  plVar5 = (long *)param_1[8];
  lVar8 = plVar5[2] + 1;
  if (plVar5[1] < lVar8) {
    return (long *)0x0;
  }
  bVar2 = *(byte *)(*plVar5 + plVar5[2]);
  plVar5[2] = lVar8;
  if (bVar2 != 0) {
    uVar6 = 0;
    do {
      plVar5 = param_1;
      (**(code **)(*param_1 + 0x20))(param_1,uVar6);
      if (((ulong)plVar5 & 1) == 0) {
        return (long *)0x0;
      }
      uVar6 = uVar6 + 1;
    } while (bVar2 != uVar6);
  }
  puVar1 = (ulong *)param_1[3];
  puVar7 = (ulong *)param_1[2];
  while (puVar7 != puVar1) {
    plVar5 = (long *)*puVar7;
    (**(code **)(*plVar5 + 0x10))(plVar5,param_1,param_1[1]);
    puVar7 = puVar7 + 1;
    if (((ulong)plVar5 & 1) == 0) {
      return (long *)0x0;
    }
  }
  if (bVar2 != 0) {
    lVar8 = 0;
    do {
      plVar5 = *(long **)(param_1[2] + lVar8);
      (**(code **)(*plVar5 + 0x18))(plVar5,param_1[8]);
      if (((ulong)plVar5 & 1) == 0) {
        return (long *)0x0;
      }
      lVar8 = lVar8 + 8;
    } while ((ulong)bVar2 << 3 != lVar8);
    uVar10 = 0;
    do {
      plVar5 = *(long **)(param_1[2] + uVar10 * 8);
      (**(code **)(*plVar5 + 0x30))();
      if (0 < (int)plVar5) {
        iVar9 = 0;
        do {
          plVar4 = *(long **)(param_1[2] + uVar10 * 8);
          (**(code **)(*plVar4 + 0x28))(plVar4,iVar9);
          iVar3 = (int)plVar4;
          lVar8 = param_1[5];
          if ((ulong)(param_1[6] - lVar8 >> 2) <= (ulong)(long)iVar3) {
            func_0x000108a5942c(param_1 + 5,(long)(iVar3 + 1));
            lVar8 = param_1[5];
          }
          *(int *)(lVar8 + (long)iVar3 * 4) = (int)uVar10;
          iVar9 = iVar9 + 1;
        } while ((int)plVar5 != iVar9);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != bVar2);
  }
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x38))();
  if (((ulong)plVar5 & 1) == 0) {
    return (long *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001098757d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1);
  return param_1;
}



/* Entry: 1098757dc; end: 10987583b;  */

void FUN_1098757dc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != puVar2) {
    do {
      puVar4 = puVar1 + 1;
      plVar3 = (long *)*puVar1;
      (**(code **)(*plVar3 + 0x20))(plVar3,*(undefined8 *)(param_1 + 0x40));
      puVar1 = puVar4;
    } while ((int)plVar3 != 0 && puVar4 != puVar2);
  }
  return;
}



/* Entry: 10987583c; end: 109875893;  */

long * FUN_10987583c(long param_1,uint param_2)

{
  long *plVar1;
  
  if ((-1 < (int)param_2) &&
     ((int)param_2 <
      (int)((ulong)(*(long *)(*(long *)(param_1 + 8) + 0x18) -
                   *(long *)(*(long *)(param_1 + 8) + 0x10)) >> 3))) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x10) +
                       (long)*(int *)(*(long *)(param_1 + 0x28) + (ulong)param_2 * 4) * 8);
                    /* WARNING: Could not recover jumptable at 0x000109875870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x40))();
    return plVar1;
  }
  return (long *)0x0;
}



/* Entry: 109875894; end: 10987592b;  */

void FUN_109875894(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  if (param_2 != 0) {
    lStack_28 = param_2 + 0x30;
    func_0x0001098758ec(&lStack_28);
    func_0x0001098759c8(param_2 + 0x18,*(undefined8 *)(param_2 + 0x20));
    func_0x000109875a6c(param_2,*(undefined8 *)(param_2 + 8));
    __ZdlPv(param_2);
  }
  return;
}



/* Entry: 10987592c; end: 109875987;  */

void FUN_10987592c(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  while (plVar2 != param_2) {
    plVar2 = plVar2 + -1;
    lVar1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
      FUN_109875988(plVar2);
    }
  }
  *(long **)(param_1 + 8) = param_2;
  return;
}



/* Entry: 109875988; end: 109875af7;  */

void FUN_109875988(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001098759c8(param_2 + 0x18,*(undefined8 *)(param_2 + 0x20));
    func_0x000109875a6c(param_2,*(undefined8 *)(param_2 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 109875af8; end: 109875b33;  */

undefined8 FUN_109875af8(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x40);
  lVar1 = plVar3[2] + 4;
  if (lVar1 <= plVar3[1]) {
    iVar2 = *(int *)(*plVar3 + plVar3[2]);
    plVar3[2] = lVar1;
    if (-1 < iVar2) {
      *(int *)(*(long *)(param_1 + 8) + 0xa0) = iVar2;
      return 1;
    }
  }
  return 0;
}



/* Entry: 109875b34; end: 109875bef;  */

undefined8 FUN_109875b34(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long *plStack_28;
  
  plVar1 = (long *)0x90;
  __Znwm();
  plVar1[2] = 0;
  plVar1[1] = 0;
  plVar1[4] = 0;
  plVar1[3] = 0;
  plVar1[6] = 0;
  plVar1[5] = 0;
  plVar1[8] = 0;
  plVar1[7] = 0;
  *plVar1 = (long)&PTR_FUN_110b14cc8;
  plVar1[10] = 0;
  plVar1[9] = 0;
  plVar1[0xc] = 0;
  plVar1[0xb] = 0;
  plVar1[0xe] = 0;
  plVar1[0xd] = 0;
  plVar1[0x10] = 0;
  plVar1[0xf] = 0;
  plVar1[0x11] = 0;
  plStack_28 = plVar1;
  FUN_109864dbc(param_1,param_2,&plStack_28);
  plVar1 = plStack_28;
  plStack_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 109875bf0; end: 109875bf3;  */

undefined8 * FUN_109875bf0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_DAT_110b162f8;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  puStack_28 = param_1 + 2;
  FUN_1098643ac(&puStack_28);
  return param_1;
}



/* Entry: 109875bf4; end: 109875c07;  */

void FUN_109875bf4(void)

{
  FUN_109864358();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109875c08; end: 109875c3b;  */

bool FUN_109875c08(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x40);
  lVar2 = plVar4[1];
  lVar1 = plVar4[2] + 4;
  if (lVar1 <= lVar2) {
    uVar3 = *(undefined4 *)(*plVar4 + plVar4[2]);
    plVar4[2] = lVar1;
    *(undefined4 *)(*(long *)(param_1 + 8) + 0xa0) = uVar3;
  }
  return lVar1 <= lVar2;
}



/* Entry: 109875c3c; end: 109875d2f;  */

long FUN_109875c3c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plStack_38;
  
  plVar2 = (long *)0x80;
  __Znwm();
  puVar3 = (undefined8 *)0x18;
  __Znwm();
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + 0xa0);
  *puVar3 = &PTR_FUN_110b162b0;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 2) = uVar1;
  plVar2[2] = 0;
  plVar2[1] = 0;
  plVar2[4] = 0;
  plVar2[3] = 0;
  plVar2[6] = 0;
  plVar2[5] = 0;
  plVar2[8] = 0;
  plVar2[7] = 0;
  *plVar2 = (long)&PTR_DAT_110b14db8;
  plVar2[10] = 0;
  plVar2[9] = 0;
  plVar2[0xc] = 0;
  plVar2[0xb] = 0;
  plVar2[0xe] = 0;
  plVar2[0xd] = 0;
  plVar2[0xf] = (long)puVar3;
  plStack_38 = plVar2;
  FUN_109864dbc(param_1,param_2,&plStack_38);
  plVar2 = plStack_38;
  plStack_38 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  return param_1;
}



/* Entry: 109875d30; end: 109875d33;  */

undefined8 * FUN_109875d30(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_DAT_110b162f8;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  puStack_28 = param_1 + 2;
  FUN_1098643ac(&puStack_28);
  return param_1;
}



/* Entry: 109875d34; end: 109875d47;  */

void FUN_109875d34(void)

{
  FUN_109864358();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109875d48; end: 109875e17;  */

undefined8 FUN_109875d48(long *param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    uVar1 = param_4 + param_3;
    if ((long)uVar1 < 0) {
      return 0;
    }
    uVar3 = param_1[1] - *param_1;
    if (uVar1 < uVar3 || uVar1 - uVar3 == 0) {
      if (uVar1 < uVar3) {
        param_1[1] = *param_1 + uVar1;
      }
    }
    else {
      func_0x000107c27d58(param_1,uVar1 - uVar3);
    }
  }
  else {
    if (param_3 < 0) {
      return 0;
    }
    uVar1 = param_4 + param_3;
    uVar3 = param_1[1] - *param_1;
    lVar2 = uVar1 - uVar3;
    if (lVar2 != 0 && (long)uVar3 <= (long)uVar1) {
      if (uVar1 < uVar3 || lVar2 == 0) {
        if (uVar1 < uVar3) {
          param_1[1] = *param_1 + uVar1;
        }
      }
      else {
        func_0x000107c27d58(param_1,lVar2);
      }
    }
    if (param_3 != 0) {
      _memmove(*param_1 + param_4,param_2,param_3);
    }
  }
  param_1[4] = param_1[4] + 1;
  return 1;
}



/* Entry: 109875e18; end: 109875fc3;  */

void FUN_109875e18(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_1[1] - *param_1;
  if (param_2 < uVar1 || param_2 - uVar1 == 0) {
    if (param_2 < uVar1) {
      param_1[1] = *param_1 + param_2;
    }
  }
  else {
    func_0x000107c27d58(param_1,param_2 - uVar1);
  }
  param_1[4] = param_1[4] + 1;
  return;
}



/* Entry: 109875fc4; end: 109876177;  */

bool FUN_109875fc4(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  
  uVar1 = param_3 | param_2;
  bVar2 = 0x55555555 >= param_2;
  if (bVar2 && uVar1 < 0x80000000) {
    func_0x00010987606c(param_1,param_2 * 3,&UNK_10e004a90);
    FUN_1098761b0(param_1 + 0x18,param_2 * 3,&UNK_10e004a94);
    FUN_10986db2c(param_1 + 0x30,param_3);
    lVar3 = *(long *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    lVar3 = *(long *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (lVar3 != 0) {
      __ZdlPv();
    }
  }
  return (bVar2 && uVar1 != 0xffffffff) && (0x55555555 < param_2 || -2 < (int)uVar1);
}



/* Entry: 109876178; end: 1098761af;  */

undefined8 * FUN_109876178(undefined8 *param_1,ulong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puStack_78;
  ulong uStack_70;
  undefined8 *puStack_68;
  undefined1 **ppuStack_60;
  code *pcStack_58;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (param_2 >> 0x3e == 0) {
    puVar2 = param_1;
    FUN_10986df64();
    *param_1 = puVar2;
    param_1[1] = puVar2;
    param_1[2] = (long)puVar2 + param_2 * 4;
    return puVar2;
  }
  FUN_10986df50();
  pcStack_28 = FUN_1098761b0;
  uVar4 = param_1[2];
  puVar2 = (undefined8 *)*param_1;
  if ((ulong)((long)(uVar4 - (long)puVar2) >> 2) < param_2) {
    puStack_30 = &stack0xfffffffffffffff0;
    if (puVar2 != (undefined8 *)0x0) {
      param_1[1] = puVar2;
      __ZdlPv();
      uVar4 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_2 >> 0x3e != 0) {
      FUN_10986dc00();
      pcStack_58 = FUN_1098762bc;
      lVar8 = 0;
      *puVar2 = &PTR_FUN_110b16488;
      uStack_70 = param_2;
      puStack_68 = param_1;
      ppuStack_60 = &puStack_30;
      do {
        lVar3 = *(long *)((long)puVar2 + lVar8 + 0x88);
        if (lVar3 != 0) {
          *(long *)((long)puVar2 + lVar8 + 0x90) = lVar3;
          __ZdlPv();
        }
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != -0x78);
      puStack_78 = puVar2 + 2;
      func_0x000109849218(&puStack_78);
      lVar8 = puVar2[1];
      puVar2[1] = 0;
      if (lVar8 != 0) {
        FUN_109875894();
      }
      return puVar2;
    }
    uVar7 = (long)uVar4 >> 1;
    if ((ulong)((long)uVar4 >> 1) <= param_2) {
      uVar7 = param_2;
    }
    if (0x7ffffffffffffffb < uVar4) {
      uVar7 = 0x3fffffffffffffff;
    }
    puVar2 = param_1;
    FUN_10986fb7c(param_1,uVar7);
    puVar5 = (undefined4 *)param_1[1];
    lVar8 = param_2 << 2;
    uVar1 = *param_3;
    puVar6 = puVar5;
    do {
      *puVar6 = uVar1;
      lVar8 = lVar8 + -4;
      puVar6 = puVar6 + 1;
    } while (lVar8 != 0);
    param_1[1] = puVar5 + param_2;
  }
  else {
    puVar6 = (undefined4 *)param_1[1];
    uVar7 = (long)puVar6 - (long)puVar2 >> 2;
    uVar4 = uVar7;
    if (param_2 <= uVar7) {
      uVar4 = param_2;
    }
    if (uVar4 != 0) {
      uVar1 = *param_3;
      puVar9 = puVar2;
      do {
        *(undefined4 *)puVar9 = uVar1;
        uVar4 = uVar4 - 1;
        puVar9 = (undefined8 *)((long)puVar9 + 4);
      } while (uVar4 != 0);
    }
    if (param_2 < uVar7 || param_2 - uVar7 == 0) {
      param_1[1] = (long)puVar2 + param_2 * 4;
    }
    else {
      uVar1 = *param_3;
      lVar8 = param_2 * 4 + uVar7 * -4;
      puVar5 = puVar6;
      do {
        *puVar5 = uVar1;
        lVar8 = lVar8 + -4;
        puVar5 = puVar5 + 1;
      } while (lVar8 != 0);
      param_1[1] = puVar6 + (param_2 - uVar7);
    }
  }
  return puVar2;
}



/* Entry: 1098761b0; end: 1098762bb;  */

undefined8 * FUN_1098761b0(undefined8 *param_1,ulong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puStack_58;
  ulong uStack_50;
  undefined8 *puStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  uVar4 = param_1[2];
  puVar2 = (undefined8 *)*param_1;
  if ((ulong)((long)(uVar4 - (long)puVar2) >> 2) < param_2) {
    if (puVar2 != (undefined8 *)0x0) {
      param_1[1] = puVar2;
      __ZdlPv();
      uVar4 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_2 >> 0x3e != 0) {
      FUN_10986dc00();
      pcStack_38 = FUN_1098762bc;
      lVar8 = 0;
      *puVar2 = &PTR_FUN_110b16488;
      uStack_50 = param_2;
      puStack_48 = param_1;
      puStack_40 = &stack0xfffffffffffffff0;
      do {
        lVar3 = *(long *)((long)puVar2 + lVar8 + 0x88);
        if (lVar3 != 0) {
          *(long *)((long)puVar2 + lVar8 + 0x90) = lVar3;
          __ZdlPv();
        }
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != -0x78);
      puStack_58 = puVar2 + 2;
      func_0x000109849218(&puStack_58);
      lVar8 = puVar2[1];
      puVar2[1] = 0;
      if (lVar8 != 0) {
        FUN_109875894();
      }
      return puVar2;
    }
    uVar7 = (long)uVar4 >> 1;
    if ((ulong)((long)uVar4 >> 1) <= param_2) {
      uVar7 = param_2;
    }
    if (0x7ffffffffffffffb < uVar4) {
      uVar7 = 0x3fffffffffffffff;
    }
    puVar2 = param_1;
    FUN_10986fb7c(param_1,uVar7);
    puVar5 = (undefined4 *)param_1[1];
    lVar8 = param_2 << 2;
    uVar1 = *param_3;
    puVar6 = puVar5;
    do {
      *puVar6 = uVar1;
      lVar8 = lVar8 + -4;
      puVar6 = puVar6 + 1;
    } while (lVar8 != 0);
    param_1[1] = puVar5 + param_2;
  }
  else {
    puVar6 = (undefined4 *)param_1[1];
    uVar7 = (long)puVar6 - (long)puVar2 >> 2;
    uVar4 = uVar7;
    if (param_2 <= uVar7) {
      uVar4 = param_2;
    }
    if (uVar4 != 0) {
      uVar1 = *param_3;
      puVar9 = puVar2;
      do {
        *(undefined4 *)puVar9 = uVar1;
        uVar4 = uVar4 - 1;
        puVar9 = (undefined8 *)((long)puVar9 + 4);
      } while (uVar4 != 0);
    }
    if (param_2 < uVar7 || param_2 - uVar7 == 0) {
      param_1[1] = (long)puVar2 + param_2 * 4;
    }
    else {
      uVar1 = *param_3;
      lVar8 = param_2 * 4 + uVar7 * -4;
      puVar5 = puVar6;
      do {
        *puVar5 = uVar1;
        lVar8 = lVar8 + -4;
        puVar5 = puVar5 + 1;
      } while (lVar8 != 0);
      param_1[1] = puVar6 + (param_2 - uVar7);
    }
  }
  return puVar2;
}



/* Entry: 1098762bc; end: 1098763d3;  */

undefined8 * FUN_1098762bc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  lVar2 = 0;
  *param_1 = &PTR_FUN_110b16488;
  do {
    lVar1 = *(long *)((long)param_1 + lVar2 + 0x88);
    if (lVar1 != 0) {
      *(long *)((long)param_1 + lVar2 + 0x90) = lVar1;
      __ZdlPv();
    }
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != -0x78);
  puStack_28 = param_1 + 2;
  func_0x000109849218(&puStack_28);
  lVar2 = param_1[1];
  param_1[1] = 0;
  if (lVar2 != 0) {
    FUN_109875894();
  }
  return param_1;
}



/* Entry: 1098763d4; end: 10987654f;  */

void FUN_1098763d4(ulong *param_1,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_58;
  
  uStack_58 = *param_3;
  *param_3 = 0;
  puVar3 = param_1;
  FUN_109878034(param_1,param_2,&uStack_58);
  uVar7 = uStack_58;
  uStack_58 = 0;
  if (uVar7 != 0) {
    puVar3 = &uStack_58;
    func_0x000109846568();
  }
  uVar2 = param_1[0x15];
  uVar7 = param_1[0x16];
  uVar8 = uVar7 - uVar2;
  iVar9 = (int)param_2;
  if ((int)(uVar8 >> 2) <= iVar9) {
    uVar5 = (ulong)(iVar9 + 1);
    uVar11 = (long)uVar8 >> 2;
    if (uVar11 < uVar5) {
      uVar10 = uVar5 - uVar11;
      if ((ulong)((long)(param_1[0x17] - uVar7) >> 2) < uVar10) {
        if (iVar9 < -1) {
          FUN_1098765b8();
        }
        else {
          uVar6 = param_1[0x17] - uVar2;
          uVar7 = (long)uVar6 >> 1;
          if (uVar7 <= uVar5) {
            uVar7 = uVar5;
          }
          if (0x7ffffffffffffffb < uVar6) {
            uVar7 = 0x3fffffffffffffff;
          }
          if (uVar7 >> 0x3e == 0) {
            lVar4 = uVar7 << 2;
            __Znwm();
            lVar1 = lVar4 + uVar8;
            _memset_pattern16(lVar1,&UNK_10dfd94a0,uVar10 * 4);
            uVar5 = lVar1 + uVar11 * -4;
            _memcpy(uVar5,uVar2,uVar8);
            param_1[0x15] = uVar5;
            param_1[0x16] = lVar1 + uVar10 * 4;
            param_1[0x17] = lVar4 + uVar7 * 4;
            if (uVar2 == 0) {
              return;
            }
            __ZdlPv(uVar2);
            return;
          }
        }
        func_0x000104c4f740();
        uVar7 = uStack_58;
        uStack_58 = 0;
        if (uVar7 != 0) {
          func_0x000109846568(&uStack_58);
        }
        __Unwind_Resume();
        FUN_109878110();
        if (-1 < (int)uVar7) {
          if ((int)uVar7 < (int)(puVar3[0x16] - puVar3[0x15] >> 2)) {
            lVar1 = puVar3[0x15] + (uVar7 & 0xffffffff) * 4;
            lVar4 = puVar3[0x16] - (lVar1 + 4);
            if (lVar4 != 0) {
              _memmove(lVar1,lVar1 + 4,lVar4);
            }
            puVar3[0x16] = lVar1 + lVar4;
          }
        }
        return;
      }
      _memset_pattern16(uVar7,&UNK_10dfd94a0,uVar10 * 4);
      uVar7 = uVar7 + uVar10 * 4;
    }
    else {
      if (uVar11 <= uVar5) {
        return;
      }
      uVar7 = uVar2 + uVar5 * 4;
    }
    param_1[0x16] = uVar7;
  }
  return;
}



/* Entry: 109876550; end: 1098765b7;  */

void FUN_109876550(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  FUN_109878110();
  if (-1 < (int)param_2) {
    if ((int)param_2 < (int)((ulong)(*(long *)(param_1 + 0xb0) - *(long *)(param_1 + 0xa8)) >> 2)) {
      lVar1 = *(long *)(param_1 + 0xa8) + (ulong)param_2 * 4;
      lVar2 = *(long *)(param_1 + 0xb0) - (lVar1 + 4);
      if (lVar2 != 0) {
        _memmove(lVar1,lVar1 + 4,lVar2);
      }
      *(long *)(param_1 + 0xb0) = lVar1 + lVar2;
    }
  }
  return;
}



/* Entry: 1098765b8; end: 1098765cb;  */

bool FUN_1098765b8(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 != (long *)0x0) {
    lVar2 = *(long *)(puVar1 + 0xa8);
    *(undefined8 *)(puVar1 + 0xb0) = 0;
    *(undefined8 *)(puVar1 + 0xb8) = 0;
    *(undefined8 *)(puVar1 + 0xa8) = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    lVar2 = *(long *)(puVar1 + 0x90);
    *(undefined8 *)(puVar1 + 0x98) = 0;
    *(undefined8 *)(puVar1 + 0xa0) = 0;
    *(undefined8 *)(puVar1 + 0x90) = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    uStack_31 = 0;
    func_0x000108adee10(puVar1,(param_2[1] - *param_2) * 0x40000000 >> 0x20,&uStack_31);
    uStack_32 = 0;
    func_0x000108adee10(puVar1 + 0x18,(param_2[7] - param_2[6]) * 0x40000000 >> 0x20,&uStack_32);
    func_0x00010987606c(puVar1 + 0x38,(param_2[1] - *param_2) * 0x40000000 >> 0x20,&UNK_10e004aa8);
    FUN_1098766b0(puVar1 + 0x68,(param_2[7] - param_2[6]) * 0x40000000 >> 0x20);
    FUN_10986db2c(puVar1 + 0x50,(param_2[7] - param_2[6]) * 0x40000000 >> 0x20);
    *(long **)(puVar1 + 0x80) = param_2;
    puVar1[0x30] = 1;
  }
  return param_2 != (long *)0x0;
}



/* Entry: 1098765cc; end: 1098766af;  */

bool FUN_1098765cc(long param_1,long *param_2)

{
  long lVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  if (param_2 != (long *)0x0) {
    lVar1 = *(long *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    if (lVar1 != 0) {
      __ZdlPv();
    }
    lVar1 = *(long *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    if (lVar1 != 0) {
      __ZdlPv();
    }
    uStack_21 = 0;
    func_0x000108adee10(param_1,(param_2[1] - *param_2) * 0x40000000 >> 0x20,&uStack_21);
    uStack_22 = 0;
    func_0x000108adee10(param_1 + 0x18,(param_2[7] - param_2[6]) * 0x40000000 >> 0x20,&uStack_22);
    func_0x00010987606c(param_1 + 0x38,(param_2[1] - *param_2) * 0x40000000 >> 0x20,&UNK_10e004aa8);
    FUN_1098766b0(param_1 + 0x68,(param_2[7] - param_2[6]) * 0x40000000 >> 0x20);
    FUN_10986db2c(param_1 + 0x50,(param_2[7] - param_2[6]) * 0x40000000 >> 0x20);
    *(long **)(param_1 + 0x80) = param_2;
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  return param_2 != (long *)0x0;
}



/* Entry: 1098766b0; end: 109876783;  */

void FUN_1098766b0(long *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long *plStack_28;
  
  lVar4 = *param_1;
  if (param_2 <= (ulong)(param_1[2] - lVar4 >> 2)) {
    return;
  }
  if (param_2 >> 0x3e == 0) {
    lVar7 = param_1[1];
    plVar6 = param_1;
    plStack_28 = param_1;
    FUN_109846990();
    lStack_40 = (long)plVar6 + (lVar7 - lVar4);
    lStack_30 = (long)plVar6 + param_2 * 4;
    plStack_48 = plVar6;
    lStack_38 = lStack_40;
    FUN_109852024(param_1,&plStack_48);
    if (lStack_38 != lStack_40) {
      lStack_38 = lStack_38 + ((lStack_40 - lStack_38) + 3U & 0xfffffffffffffffc);
    }
    if (plStack_48 == (long *)0x0) {
      return;
    }
    __ZdlPv();
    return;
  }
  FUN_10984697c();
  if (lStack_38 != lStack_40) {
    lStack_38 = lStack_38 + ((lStack_40 - lStack_38) + 3U & 0xfffffffffffffffc);
  }
  if (plStack_48 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  lVar4 = *param_1;
  uVar5 = param_2 >> 3 & 0x1ffffff8;
  *(ulong *)(lVar4 + uVar5) = *(ulong *)(lVar4 + uVar5) | 1L << (param_2 & 0x3f);
  plVar6 = (long *)param_1[0x10];
  iVar3 = (int)param_2;
  if (iVar3 == -1) {
LAB_1098767ec:
    uVar5 = 0xffffffff;
  }
  else {
    uVar1 = iVar3 - 2;
    if (0x55555555 < (uint)((iVar3 + 1) * -0x55555555)) {
      uVar1 = iVar3 + 1;
    }
    if (uVar1 == 0xffffffff) goto LAB_1098767ec;
    uVar5 = (ulong)*(uint *)(*plVar6 + (ulong)uVar1 * 4);
  }
  lVar7 = param_1[3];
  uVar9 = uVar5 >> 3 & 0x1ffffff8;
  *(ulong *)(lVar7 + uVar9) = *(ulong *)(lVar7 + uVar9) | 1L << (uVar5 & 0x3f);
  if (iVar3 != -1) {
    iVar8 = 2;
    if (0x55555555 < (uint)(iVar3 * -0x55555555)) {
      iVar8 = -1;
    }
    if (iVar8 + iVar3 != 0xffffffff) {
      uVar5 = (ulong)*(uint *)(*plVar6 + (ulong)(uint)(iVar8 + iVar3) * 4);
      goto LAB_109876854;
    }
  }
  uVar5 = 0xffffffff;
LAB_109876854:
  uVar9 = uVar5 >> 3 & 0x1ffffff8;
  *(ulong *)(lVar7 + uVar9) = 1L << (uVar5 & 0x3f) | *(ulong *)(lVar7 + uVar9);
  if ((param_2 & 0xffffffff) != 0xffffffff) {
    uVar1 = *(uint *)(plVar6[3] + (param_2 & 0xffffffff) * 4);
    if (uVar1 != 0xffffffff) {
      *(undefined1 *)(param_1 + 6) = 0;
      uVar5 = (ulong)(uVar1 >> 3) & 0x1ffffff8;
      *(ulong *)(lVar4 + uVar5) = *(ulong *)(lVar4 + uVar5) | 1L << ((ulong)uVar1 & 0x3f);
      uVar2 = uVar1 - 2;
      if (0x55555555 < (uVar1 + 1) * -0x55555555) {
        uVar2 = uVar1 + 1;
      }
      if (uVar2 == 0xffffffff) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (ulong)*(uint *)(*plVar6 + (ulong)uVar2 * 4);
      }
      uVar9 = uVar5 >> 3 & 0x1ffffff8;
      *(ulong *)(lVar7 + uVar9) = 1L << (uVar5 & 0x3f) | *(ulong *)(lVar7 + uVar9);
      iVar3 = 2;
      if (0x55555555 < uVar1 * -0x55555555) {
        iVar3 = -1;
      }
      if (iVar3 + uVar1 == 0xffffffff) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (ulong)*(uint *)(*plVar6 + (ulong)(iVar3 + uVar1) * 4);
      }
      uVar9 = uVar5 >> 3 & 0x1ffffff8;
      *(ulong *)(lVar7 + uVar9) = 1L << (uVar5 & 0x3f) | *(ulong *)(lVar7 + uVar9);
    }
  }
  return;
}



/* Entry: 109876784; end: 10987694f;  */

void FUN_109876784(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = *param_1;
  uVar3 = ((ulong)param_2 & 0xffffffc0) >> 3;
  *(ulong *)(lVar7 + uVar3) = *(ulong *)(lVar7 + uVar3) | 1L << ((ulong)param_2 & 0x3f);
  plVar4 = (long *)param_1[0x10];
  if (param_2 == 0xffffffff) {
LAB_1098767ec:
    uVar3 = 0xffffffff;
  }
  else {
    uVar1 = param_2 - 2;
    if (0x55555555 < (param_2 + 1) * -0x55555555) {
      uVar1 = param_2 + 1;
    }
    if (uVar1 == 0xffffffff) goto LAB_1098767ec;
    uVar3 = (ulong)*(uint *)(*plVar4 + (ulong)uVar1 * 4);
  }
  lVar5 = param_1[3];
  uVar8 = uVar3 >> 3 & 0x1ffffff8;
  *(ulong *)(lVar5 + uVar8) = *(ulong *)(lVar5 + uVar8) | 1L << (uVar3 & 0x3f);
  if (param_2 != 0xffffffff) {
    iVar6 = 2;
    if (0x55555555 < param_2 * -0x55555555) {
      iVar6 = -1;
    }
    if (iVar6 + param_2 != 0xffffffff) {
      uVar3 = (ulong)*(uint *)(*plVar4 + (ulong)(iVar6 + param_2) * 4);
      goto LAB_109876854;
    }
  }
  uVar3 = 0xffffffff;
LAB_109876854:
  uVar8 = uVar3 >> 3 & 0x1ffffff8;
  *(ulong *)(lVar5 + uVar8) = 1L << (uVar3 & 0x3f) | *(ulong *)(lVar5 + uVar8);
  if ((ulong)param_2 != 0xffffffff) {
    uVar1 = *(uint *)(plVar4[3] + (ulong)param_2 * 4);
    if (uVar1 != 0xffffffff) {
      *(undefined1 *)(param_1 + 6) = 0;
      uVar3 = (ulong)(uVar1 >> 3) & 0x1ffffff8;
      *(ulong *)(lVar7 + uVar3) = *(ulong *)(lVar7 + uVar3) | 1L << ((ulong)uVar1 & 0x3f);
      uVar2 = uVar1 - 2;
      if (0x55555555 < (uVar1 + 1) * -0x55555555) {
        uVar2 = uVar1 + 1;
      }
      if (uVar2 == 0xffffffff) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = (ulong)*(uint *)(*plVar4 + (ulong)uVar2 * 4);
      }
      uVar8 = uVar3 >> 3 & 0x1ffffff8;
      *(ulong *)(lVar5 + uVar8) = 1L << (uVar3 & 0x3f) | *(ulong *)(lVar5 + uVar8);
      iVar6 = 2;
      if (0x55555555 < uVar1 * -0x55555555) {
        iVar6 = -1;
      }
      if (iVar6 + uVar1 == 0xffffffff) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = (ulong)*(uint *)(*plVar4 + (ulong)(iVar6 + uVar1) * 4);
      }
      uVar8 = uVar3 >> 3 & 0x1ffffff8;
      *(ulong *)(lVar5 + uVar8) = 1L << (uVar3 & 0x3f) | *(ulong *)(lVar5 + uVar8);
    }
  }
  return;
}



/* Entry: 109876950; end: 109876ca7;  */

undefined8 FUN_109876950(long *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  ulong uVar13;
  long *plVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  uint uStack_68;
  uint uStack_64;
  ulong uVar12;
  
  plVar14 = param_1 + 0xd;
  param_1[0xe] = *plVar14;
  puVar15 = (uint *)(param_1 + 10);
  param_1[0xb] = *(long *)puVar15;
  lVar9 = param_1[0x10];
  lVar11 = *(long *)(lVar9 + 0x30);
  if ((*(long *)(lVar9 + 0x38) - lVar11 & 0x3fffffffcU) != 0) {
    uVar19 = 0;
    iVar16 = 0;
    do {
      uVar3 = *(uint *)(lVar11 + uVar19 * 4);
      uVar18 = (ulong)uVar3;
      iVar17 = iVar16;
      if (uVar3 != 0xffffffff) {
        piVar2 = (int *)param_1[0xe];
        if (piVar2 < (int *)param_1[0xf]) {
          plVar6 = (long *)(piVar2 + 1);
          *piVar2 = iVar16;
        }
        else {
          plVar6 = plVar14;
          FUN_109876ca8(plVar14,iVar16);
        }
        param_1[0xe] = (long)plVar6;
        uStack_68 = 0;
        uStack_64 = uVar3;
        if ((*(ulong *)(param_1[3] + (uVar19 >> 6) * 8) >> (uVar19 & 0x3f) & 1) != 0) {
          uVar10 = uVar3 - 2;
          if (0x55555555 < (uVar3 + 1) * -0x55555555) {
            uVar10 = uVar3 + 1;
          }
          if (((uVar10 == 0xffffffff) ||
              ((*(ulong *)(*param_1 + (ulong)(uVar10 >> 6) * 8) >> ((ulong)uVar10 & 0x3f) & 1) != 0)
              ) || (iVar17 = *(int *)(*(long *)(param_1[0x10] + 0x18) + (ulong)uVar10 * 4),
                   iVar17 == -1)) {
            uStack_68 = 0xffffffff;
          }
          else {
            uStack_68 = iVar17 - 2;
            if (0x55555555 < (uint)((iVar17 + 1) * -0x55555555)) {
              uStack_68 = iVar17 + 1;
            }
            uVar12 = (ulong)uStack_68;
            while (uVar10 = (uint)uVar12, uVar10 != 0xffffffff) {
              uVar4 = uVar10 - 2;
              if (0x55555555 < (uVar10 + 1) * -0x55555555) {
                uVar4 = uVar10 + 1;
              }
              uVar13 = (ulong)uVar4;
              if (uVar4 != 0xffffffff) {
                if ((*(ulong *)(*param_1 + (ulong)(uVar4 >> 6) * 8) >> (uVar13 & 0x3f) & 1) == 0) {
                  uVar4 = *(uint *)(*(long *)(param_1[0x10] + 0x18) + uVar13 * 4);
                  uVar13 = (ulong)uVar4;
                  if (uVar4 != 0xffffffff) {
                    uVar5 = uVar4 - 2;
                    if (0x55555555 < (uVar4 + 1) * -0x55555555) {
                      uVar5 = uVar4 + 1;
                    }
                    uVar13 = (ulong)uVar5;
                  }
                }
                else {
                  uVar13 = 0xffffffff;
                }
              }
              uStack_68 = (uint)uVar13;
              uVar18 = uVar12;
              uVar12 = uVar13;
              uStack_64 = uVar10;
              if (uStack_68 == uVar3) {
                return 0;
              }
            }
          }
        }
        *(int *)(param_1[7] + uVar18 * 4) = iVar16;
        puVar8 = (uint *)param_1[0xb];
        if (puVar8 < (uint *)param_1[0xc]) {
          puVar7 = puVar8 + 1;
          *puVar8 = uStack_64;
        }
        else {
          puVar7 = puVar15;
          FUN_10986dcb4(puVar15,&uStack_64);
        }
        iVar17 = iVar16 + 1;
        param_1[0xb] = (long)puVar7;
        lVar9 = param_1[0x10];
        if (uStack_64 != 0xffffffff) {
          iVar20 = 2;
          iVar1 = iVar20;
          if (0x55555555 < uStack_64 * -0x55555555) {
            iVar1 = -1;
          }
          if ((iVar1 + uStack_64 != 0xffffffff) &&
             (iVar1 = *(int *)(*(long *)(lVar9 + 0x18) + (ulong)(iVar1 + uStack_64) * 4),
             iVar1 != -1)) {
            if (0x55555555 < (uint)(iVar1 * -0x55555555)) {
              iVar20 = -1;
            }
            uStack_68 = iVar20 + iVar1;
            while (uStack_68 != 0xffffffff && uStack_68 != uStack_64) {
              uVar3 = uStack_68 - 2;
              if (0x55555555 < (uStack_68 + 1) * -0x55555555) {
                uVar3 = uStack_68 + 1;
              }
              if ((*(ulong *)(*param_1 + (ulong)(uVar3 >> 6) * 8) >> ((ulong)uVar3 & 0x3f) & 1) != 0
                 ) {
                piVar2 = (int *)param_1[0xe];
                if (piVar2 < (int *)param_1[0xf]) {
                  plVar6 = (long *)(piVar2 + 1);
                  *piVar2 = iVar17;
                  puVar8 = puVar7;
                }
                else {
                  plVar6 = plVar14;
                  FUN_109876ca8(plVar14,iVar17);
                  puVar8 = (uint *)param_1[0xb];
                }
                param_1[0xe] = (long)plVar6;
                if (puVar8 < (uint *)param_1[0xc]) {
                  puVar7 = puVar8 + 1;
                  *puVar8 = uStack_68;
                }
                else {
                  puVar7 = puVar15;
                  FUN_10986dcb4(puVar15,&uStack_68);
                }
                param_1[0xb] = (long)puVar7;
                lVar9 = param_1[0x10];
                iVar16 = iVar17;
                iVar17 = iVar17 + 1;
              }
              *(int *)(param_1[7] + (ulong)uStack_68 * 4) = iVar16;
              if (uStack_68 == 0xffffffff) break;
              iVar20 = 2;
              iVar1 = iVar20;
              if (0x55555555 < uStack_68 * -0x55555555) {
                iVar1 = -1;
              }
              if ((iVar1 + uStack_68 == 0xffffffff) ||
                 (iVar1 = *(int *)(*(long *)(lVar9 + 0x18) + (ulong)(iVar1 + uStack_68) * 4),
                 iVar1 == -1)) break;
              if (0x55555555 < (uint)(iVar1 * -0x55555555)) {
                iVar20 = -1;
              }
              uStack_68 = iVar20 + iVar1;
            }
          }
        }
      }
      iVar16 = iVar17;
      uVar19 = uVar19 + 1;
      lVar11 = *(long *)(lVar9 + 0x30);
    } while (uVar19 < ((ulong)(*(long *)(lVar9 + 0x38) - lVar11) >> 2 & 0xffffffff));
  }
  return 1;
}



/* Entry: 109876ca8; end: 109876dbb;  */

long * FUN_109876ca8(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_58;
  undefined4 *puStack_50;
  undefined4 *puStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar8 = param_1[1] - *param_1;
  uVar1 = (lVar8 >> 2) + 1;
  if (uVar1 >> 0x3e == 0) {
    uVar3 = param_1[2] - *param_1;
    uVar5 = (long)uVar3 >> 1;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar3) {
      uVar5 = 0x3fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar5 == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = param_1;
      FUN_109846990();
    }
    puStack_50 = (undefined4 *)((long)plVar6 + lVar8);
    lStack_40 = (long)plVar6 + uVar5 * 4;
    puStack_48 = puStack_50 + 1;
    *puStack_50 = (int)param_2;
    plStack_58 = plVar6;
    FUN_109852024(param_1,&plStack_58);
    plVar6 = (long *)param_1[1];
    if (puStack_48 != puStack_50) {
      puStack_48 = (undefined4 *)
                   ((long)puStack_48 +
                   ((long)puStack_50 + (3 - (long)puStack_48) & 0xfffffffffffffffcU));
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar6;
  }
  FUN_10984697c();
  if (puStack_48 != puStack_50) {
    puStack_48 = (undefined4 *)
                 ((long)puStack_48 +
                 (((long)puStack_50 - (long)puStack_48) + 3U & 0xfffffffffffffffc));
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  plVar6 = (long *)param_1[1];
  if (plVar6 < (long *)param_1[2]) {
    lVar8 = *param_2;
    *param_2 = 0;
    plVar10 = plVar6 + 1;
    *plVar6 = lVar8;
    plVar6 = param_1;
LAB_109876e7c:
    param_1[1] = (long)plVar10;
    return plVar6;
  }
  plVar7 = (long *)*param_1;
  lVar8 = (long)plVar6 - (long)plVar7;
  uVar1 = (lVar8 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar3 = param_1[2] - (long)plVar7;
    uVar5 = (long)uVar3 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 >> 0x3d == 0) {
      lVar2 = uVar5 << 3;
      __Znwm();
      plVar6 = (long *)(lVar2 + lVar8);
      lVar4 = *param_2;
      *param_2 = 0;
      plVar9 = plVar6 + -(lVar8 >> 3);
      plVar10 = plVar6 + 1;
      *plVar6 = lVar4;
      plVar6 = plVar9;
      _memcpy(plVar9,plVar7,lVar8);
      *param_1 = (long)plVar9;
      param_1[1] = (long)plVar10;
      param_1[2] = lVar2 + uVar5 * 8;
      if (plVar7 != (long *)0x0) {
        __ZdlPv(plVar7);
        plVar6 = plVar7;
      }
      goto LAB_109876e7c;
    }
  }
  else {
    FUN_109876ea0();
  }
  func_0x000104c4f740();
  plVar6 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  *plVar6 = 0;
  plVar6[1] = 0;
  plVar6[2] = 0;
  lVar8 = *param_2;
  if (param_2[1] - lVar8 == 0) {
    lVar4 = 0;
    lVar2 = 0;
  }
  else {
    func_0x000107c27d58(plVar6,param_2[1] - lVar8);
    lVar2 = *plVar6;
    lVar8 = *param_2;
    lVar4 = param_2[1] - lVar8;
  }
  _memcpy(lVar2,lVar8,lVar4);
  return plVar6;
}



/* Entry: 109876dbc; end: 109876e9f;  */

long * FUN_109876dbc(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar3 = (long *)param_1[1];
  if (plVar3 < (long *)param_1[2]) {
    lVar4 = *param_2;
    *param_2 = 0;
    plVar10 = plVar3 + 1;
    *plVar3 = lVar4;
    plVar3 = param_1;
LAB_109876e7c:
    param_1[1] = (long)plVar10;
    return plVar3;
  }
  plVar8 = (long *)*param_1;
  lVar4 = (long)plVar3 - (long)plVar8;
  uVar1 = (lVar4 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar5 = param_1[2] - (long)plVar8;
    uVar7 = (long)uVar5 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 >> 0x3d == 0) {
      lVar2 = uVar7 << 3;
      __Znwm();
      plVar3 = (long *)(lVar2 + lVar4);
      lVar6 = *param_2;
      *param_2 = 0;
      plVar9 = plVar3 + -(lVar4 >> 3);
      plVar10 = plVar3 + 1;
      *plVar3 = lVar6;
      plVar3 = plVar9;
      _memcpy(plVar9,plVar8,lVar4);
      *param_1 = (long)plVar9;
      param_1[1] = (long)plVar10;
      param_1[2] = lVar2 + uVar7 * 8;
      if (plVar8 != (long *)0x0) {
        __ZdlPv(plVar8);
        plVar3 = plVar8;
      }
      goto LAB_109876e7c;
    }
  }
  else {
    FUN_109876ea0();
  }
  func_0x000104c4f740();
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = 0;
  lVar4 = *param_2;
  if (param_2[1] - lVar4 == 0) {
    lVar6 = 0;
    lVar2 = 0;
  }
  else {
    func_0x000107c27d58(plVar3,param_2[1] - lVar4);
    lVar2 = *plVar3;
    lVar4 = *param_2;
    lVar6 = param_2[1] - lVar4;
  }
  _memcpy(lVar2,lVar4,lVar6);
  return plVar3;
}



/* Entry: 109876ea0; end: 109876eb3;  */

undefined8 * FUN_109876ea0(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  lVar3 = *param_2;
  if (param_2[1] - lVar3 == 0) {
    lVar4 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c27d58(puVar1,param_2[1] - lVar3);
    uVar2 = *puVar1;
    lVar3 = *param_2;
    lVar4 = param_2[1] - lVar3;
  }
  _memcpy(uVar2,lVar3,lVar4);
  return puVar1;
}



/* Entry: 109876eb4; end: 109876f2f;  */

undefined8 * FUN_109876eb4(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = *param_2;
  if (param_2[1] - lVar2 == 0) {
    lVar3 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c27d58(param_1,param_2[1] - lVar2);
    uVar1 = *param_1;
    lVar2 = *param_2;
    lVar3 = param_2[1] - lVar2;
  }
  _memcpy(uVar1,lVar2,lVar3);
  return param_1;
}



/* Entry: 109876f30; end: 10987701b;  */

void FUN_109876f30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_78;
  long lStack_70;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  long lStack_40;
  
  lVar1 = param_1;
  func_0x0001098777a4();
  if (param_1 + 8 != lVar1) {
    FUN_109877820(param_1,lVar1);
    func_0x000109875ab4(lVar1 + 0x20);
    __ZdlPv(lVar1);
  }
  FUN_1098776a8(&lStack_78,param_3);
  FUN_109877630(auStack_60,param_2,&lStack_78);
  FUN_1098774f4(param_1,auStack_60,auStack_60);
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
  return;
}



/* Entry: 10987701c; end: 1098770a7;  */

bool FUN_10987701c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  lVar1 = param_1 + 0x18;
  FUN_109877728();
  if (param_1 + 0x20 == lVar1) {
    lVar2 = param_1 + 0x18;
    uStack_48 = param_2;
    FUN_109877254(lVar2,param_2,&UNK_10dd5b8f9,&uStack_48,&uStack_49);
    uVar3 = *param_3;
    *param_3 = 0;
    func_0x000109877208(lVar2 + 0x38,uVar3);
  }
  return param_1 + 0x20 == lVar1;
}



/* Entry: 1098770a8; end: 10987713b;  */

void FUN_1098770a8(undefined8 param_1,undefined8 *param_2)

{
  func_0x000109877208(param_2 + 3,0);
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_2);
  return;
}



/* Entry: 10987713c; end: 1098771bf;  */

long * FUN_10987713c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, func_0x000107c2abd4(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_1098771a8;
    }
    plVar2 = plVar4 + 4;
    func_0x000107c2abd4(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_1098771a8:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 1098771c0; end: 109877253;  */

void FUN_1098771c0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000109875ab4(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109877254; end: 1098772e7;  */

undefined1  [16]
FUN_109877254(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_1098772e8(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_10987736c(alStack_60,param_1,param_3,param_4,param_5);
    FUN_109877410(param_1,uStack_48,plVar2,alStack_60[0]);
    lVar3 = alStack_60[0];
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 1098772e8; end: 10987736b;  */

long * FUN_1098772e8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, func_0x000107c2abd4(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_109877354;
    }
    plVar2 = plVar4 + 4;
    func_0x000107c2abd4(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_109877354:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10987736c; end: 10987740f;  */

void FUN_10987736c(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = 0x40;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_4 = (undefined8 *)*param_4;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(lVar1 + 0x20,*param_4,param_4[1]);
  }
  else {
    uVar3 = param_4[1];
    uVar2 = *param_4;
    *(undefined8 *)(lVar1 + 0x30) = param_4[2];
    *(undefined8 *)(lVar1 + 0x28) = uVar3;
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
  }
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 109877410; end: 109877463;  */

void FUN_109877410(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27d40(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 109877464; end: 1098774b3;  */

void FUN_109877464(undefined8 *param_1,long param_2)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    FUN_1098770a8(*param_1,param_2 + 0x20);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1098774b4; end: 1098774f3;  */

undefined8 * FUN_1098774b4(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1098774f4; end: 10987756f;  */

undefined1  [16] FUN_1098774f4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_50 [3];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_10987713c(param_1,&uStack_38,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_109877570(alStack_50,param_1,param_3);
    func_0x0001098770e8(param_1,uStack_38,plVar2,alStack_50[0]);
    lVar3 = alStack_50[0];
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 109877570; end: 1098775d7;  */

void FUN_109877570(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x50;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  FUN_1098775d8(lVar1 + 0x20,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1098775d8; end: 10987762f;  */

undefined8 * FUN_1098775d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_109876eb4(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 109877630; end: 1098776a7;  */

undefined8 * FUN_109877630(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  FUN_109876eb4(param_1 + 3,param_3);
  return param_1;
}



/* Entry: 1098776a8; end: 109877727;  */

undefined8 * FUN_1098776a8(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar3 = *param_2;
  lVar1 = param_2[1] - lVar3;
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c27d58(param_1,lVar1);
    uVar2 = *param_1;
    lVar3 = *param_2;
  }
  _memcpy(uVar2,lVar3,lVar1);
  return param_1;
}



/* Entry: 109877728; end: 10987781f;  */

long * FUN_109877728(long param_1,undefined8 param_2)

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
      func_0x000107c2abd4(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) &&
       (func_0x000107c2abd4(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 109877820; end: 10987788f;  */

long * FUN_109877820(long *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = param_2;
  plVar1 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    do {
      plVar4 = (long *)plVar3[2];
      bVar2 = (long *)*plVar4 != plVar3;
      plVar3 = plVar4;
    } while (bVar2);
  }
  else {
    do {
      plVar4 = plVar1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  if ((long *)*param_1 == param_2) {
    *param_1 = (long)plVar4;
  }
  param_1[2] = param_1[2] + -1;
  func_0x000104c611f0(param_1[1]);
  return plVar4;
}



/* Entry: 109877890; end: 109877b97;  */

undefined8 FUN_109877890(long *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  bool bVar10;
  long *plVar11;
  uint uStack_ac;
  undefined8 *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  uint uStack_6c;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  puStack_a0 = (ulong *)0x0;
  puStack_98 = (ulong *)0x0;
  uStack_90 = 0;
  puStack_68 = (undefined8 *)0x0;
  uStack_58 = uStack_58 & 0xffffffff00000000;
  uStack_60 = param_2;
  FUN_109877cfc(&puStack_a0,&puStack_68);
  do {
    if (puStack_a0 == puStack_98) {
      uVar7 = 1;
      if (puStack_a0 != (ulong *)0x0) {
LAB_109877af0:
        __ZdlPv();
      }
      return uVar7;
    }
    puVar6 = puStack_98 + -3;
    uVar3 = *puVar6;
    puVar5 = (undefined8 *)puStack_98[-2];
    iVar2 = (int)puStack_98[-1];
    puStack_98 = puVar6;
    if (uVar3 != 0) {
      if (iVar2 < 0x3e9) {
        puStack_68 = (undefined8 *)0x0;
        uStack_60 = 0;
        uStack_58 = 0;
        plVar11 = param_1;
        FUN_109877e04(param_1,&puStack_68);
        if (((ulong)plVar11 & 1) == 0) {
          uVar8 = 0;
        }
        else {
          puVar5 = (undefined8 *)0x30;
          __Znwm();
          puVar5[1] = 0;
          *puVar5 = puVar5 + 1;
          puVar5[5] = 0;
          puVar5[4] = 0;
          puVar5[2] = 0;
          puVar5[3] = puVar5 + 4;
          uStack_88 = 0;
          uVar8 = uVar3;
          puStack_a8 = puVar5;
          FUN_10987701c(uVar3,&puStack_68,&puStack_a8);
          func_0x000109877208(&puStack_a8,0);
          func_0x000109877208(&uStack_88,0);
        }
        if ((long)uStack_58 < 0) {
          __ZdlPv(puStack_68);
        }
        if ((uVar8 & 1) != 0) goto LAB_109877980;
      }
LAB_109877ae4:
      uVar7 = 0;
      if (puStack_a0 == (ulong *)0x0) {
        return 0;
      }
      goto LAB_109877af0;
    }
LAB_109877980:
    if (puVar5 == (undefined8 *)0x0) goto LAB_109877ae4;
    uStack_ac = 0;
    iVar4 = 1;
    FUN_109877ed4(1,&uStack_ac,*param_1);
    if (iVar4 == 0) goto LAB_109877ae4;
    if (uStack_ac != 0) {
      uVar9 = 0;
      do {
        puStack_68 = (undefined8 *)0x0;
        uStack_60 = 0;
        uStack_58 = 0;
        plVar11 = param_1;
        FUN_109877e04(param_1,&puStack_68);
        if (((ulong)plVar11 & 1) == 0) {
LAB_1098779f4:
          bVar10 = false;
        }
        else {
          uStack_6c = 0;
          iVar4 = 1;
          FUN_109877ed4(1,&uStack_6c,*param_1);
          if (((iVar4 == 0) || (uVar8 = (ulong)uStack_6c, uStack_6c == 0)) ||
             (*(long *)(*param_1 + 8) - *(long *)(*param_1 + 0x10) < (long)uVar8))
          goto LAB_1098779f4;
          FUN_109246310(&uStack_88,uVar8);
          plVar11 = (long *)*param_1;
          lVar1 = plVar11[2] + uVar8;
          bVar10 = lVar1 <= plVar11[1];
          if (lVar1 <= plVar11[1]) {
            _memcpy(uStack_88,*plVar11 + plVar11[2],uVar8);
            plVar11[2] = plVar11[2] + uVar8;
            FUN_109876f30(puVar5,&puStack_68,&uStack_88);
          }
          if (uStack_88 != 0) {
            uStack_80 = uStack_88;
            __ZdlPv();
          }
        }
        if ((long)uStack_58 < 0) {
          __ZdlPv(puStack_68);
        }
        if (!bVar10) goto LAB_109877ae4;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uStack_ac);
    }
    uStack_88 = uStack_88 & 0xffffffff00000000;
    iVar4 = 1;
    FUN_109877ed4(1,&uStack_88,*param_1);
    if (iVar4 == 0) goto LAB_109877ae4;
    uVar8 = uStack_88 & 0xffffffff;
    if (*(long *)(*param_1 + 8) - *(long *)(*param_1 + 0x10) < (long)uVar8) goto LAB_109877ae4;
    if ((int)uStack_88 != 0) {
      if (uVar3 != 0) {
        iVar2 = iVar2 + 1;
      }
      do {
        uStack_60 = 0;
        uStack_58 = CONCAT44(uStack_58._4_4_,iVar2);
        puStack_68 = puVar5;
        FUN_109877cfc(&puStack_a0,&puStack_68);
        uVar9 = (int)uVar8 - 1;
        uVar8 = (ulong)uVar9;
      } while (uVar9 != 0);
    }
  } while( true );
}



/* Entry: 109877b98; end: 109877cfb;  */

void FUN_109877b98(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  
  if (param_3 != 0) {
    *param_1 = param_2;
    iStack_34 = 0;
    iVar2 = 1;
    FUN_109877ed4(1,&iStack_34,param_2);
    iVar1 = iStack_34;
    if (iVar2 != 0) {
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        iVar2 = 1;
        FUN_109877ed4(1,&uStack_38,*param_1);
        if (iVar2 == 0) {
          return;
        }
        puVar3 = (undefined8 *)0x38;
        __Znwm();
        puVar3[1] = 0;
        *puVar3 = puVar3 + 1;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[2] = 0;
        puVar3[3] = puVar3 + 4;
        *(undefined4 *)(puVar3 + 6) = uStack_38;
        puVar4 = param_1;
        puStack_40 = puVar3;
        FUN_109877890(param_1,puVar3);
        puVar3 = puStack_40;
        puStack_40 = (undefined8 *)0x0;
        if (((ulong)puVar4 & 1) == 0) {
          if (puVar3 == (undefined8 *)0x0) {
            return;
          }
          FUN_109875988(&puStack_40);
          return;
        }
        puStack_48 = puVar3;
        if (puVar3 == (undefined8 *)0x0) {
          puStack_48 = (undefined8 *)0x0;
        }
        else {
          FUN_109876dbc(param_3 + 0x30,&puStack_48);
          puVar3 = puStack_48;
          puStack_48 = (undefined8 *)0x0;
          if (puVar3 != (undefined8 *)0x0) {
            FUN_109875988(&puStack_48);
          }
        }
        puVar3 = puStack_40;
        puStack_40 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          FUN_109875988(&puStack_40);
        }
      }
      FUN_109877890(param_1,param_3);
    }
  }
  return;
}



/* Entry: 109877cfc; end: 109877e03;  */

long * FUN_109877cfc(long *param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  uint *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  long *plVar11;
  uint *puVar12;
  long lVar13;
  
  plVar6 = (long *)param_1[1];
  if (plVar6 < (long *)param_1[2]) {
    lVar13 = param_2[1];
    lVar7 = *param_2;
    plVar6[2] = param_2[2];
    plVar6[1] = lVar13;
    *plVar6 = lVar7;
    plVar6 = plVar6 + 3;
    plVar4 = param_1;
LAB_109877de4:
    param_1[1] = (long)plVar6;
    return plVar4;
  }
  plVar11 = (long *)*param_1;
  uVar8 = ((long)plVar6 - (long)plVar11 >> 3) * -0x5555555555555555 + 1;
  if (uVar8 < 0xaaaaaaaaaaaaaab) {
    lVar7 = param_1[2] - (long)plVar11 >> 3;
    uVar9 = lVar7 * 0x5555555555555556;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar9 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar9 < 0xaaaaaaaaaaaaaab) {
      plVar3 = (long *)(uVar9 * 0x18);
      __Znwm();
      plVar6 = (long *)((long)plVar3 + ((long)plVar6 - (long)plVar11));
      lVar7 = *param_2;
      plVar6[1] = param_2[1];
      *plVar6 = lVar7;
      plVar6[2] = param_2[2];
      plVar6 = plVar6 + 3;
      plVar4 = plVar3;
      _memcpy();
      *param_1 = (long)plVar3;
      param_1[1] = (long)plVar6;
      param_1[2] = (long)(plVar3 + uVar9 * 3);
      if (plVar11 != (long *)0x0) {
        __ZdlPv(plVar11);
        plVar4 = plVar11;
      }
      goto LAB_109877de4;
    }
  }
  else {
    FUN_109877ec0();
  }
  func_0x000104c4f740();
  plVar6 = (long *)*param_1;
  lVar7 = plVar6[2] + 1;
  if (plVar6[1] < lVar7) {
    return (long *)0x0;
  }
  puVar12 = (uint *)(ulong)*(byte *)(*plVar6 + plVar6[2]);
  plVar6[2] = lVar7;
  plVar6 = (long *)0x0;
  puVar5 = puVar12;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(param_2);
  if (puVar12 != (uint *)0x0) {
    param_1 = (long *)*param_1;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      if (param_2[1] == 0) goto LAB_109877ebc;
      param_2 = (long *)*param_2;
    }
    else if (*(char *)((long)param_2 + 0x17) == '\0') {
LAB_109877ebc:
      func_0x000109276104();
      uVar2 = 0xf62a4d8;
      func_0x000104c4f6cc();
      if (5 < uVar2) {
        return (long *)0x0;
      }
      lVar7 = plVar6[2] + 1;
      if (plVar6[1] < lVar7) {
        return (long *)0x0;
      }
      bVar1 = *(byte *)(*plVar6 + plVar6[2]);
      uVar10 = (uint)bVar1;
      plVar6[2] = lVar7;
      if ((char)bVar1 < '\0') {
        plVar6 = (long *)(ulong)(uVar2 + 1);
        FUN_109877ed4(plVar6,puVar5);
        if ((int)plVar6 == 0) {
          return plVar6;
        }
        uVar10 = uVar10 & 0x7f | *puVar5 << 7;
      }
      *puVar5 = uVar10;
      return (long *)0x1;
    }
    if (param_1[1] < param_1[2] + (long)puVar12) {
      return (long *)0x0;
    }
    _memcpy(param_2,*param_1 + param_1[2],puVar12);
    param_1[2] = param_1[2] + (long)puVar12;
  }
  return (long *)0x1;
}



/* Entry: 109877e04; end: 109877ebf;  */

ulong FUN_109877e04(long *param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  long *plVar6;
  uint uVar7;
  uint *puVar8;
  
  plVar6 = (long *)*param_1;
  lVar1 = plVar6[2] + 1;
  if (plVar6[1] < lVar1) {
    return 0;
  }
  puVar8 = (uint *)(ulong)*(byte *)(*plVar6 + plVar6[2]);
  plVar6[2] = lVar1;
  plVar6 = (long *)0x0;
  puVar5 = puVar8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(param_2);
  if (puVar8 != (uint *)0x0) {
    param_1 = (long *)*param_1;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      if (param_2[1] == 0) goto LAB_109877ebc;
      param_2 = (long *)*param_2;
    }
    else if (*(char *)((long)param_2 + 0x17) == '\0') {
LAB_109877ebc:
      func_0x000109276104();
      uVar3 = 0xf62a4d8;
      func_0x000104c4f6cc();
      if (5 < uVar3) {
        return 0;
      }
      lVar1 = plVar6[2] + 1;
      if (plVar6[1] < lVar1) {
        return 0;
      }
      bVar2 = *(byte *)(*plVar6 + plVar6[2]);
      uVar7 = (uint)bVar2;
      plVar6[2] = lVar1;
      if ((char)bVar2 < '\0') {
        uVar4 = (ulong)(uVar3 + 1);
        FUN_109877ed4(uVar4,puVar5);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        uVar7 = uVar7 & 0x7f | *puVar5 << 7;
      }
      *puVar5 = uVar7;
      return 1;
    }
    if (param_1[1] < param_1[2] + (long)puVar8) {
      return 0;
    }
    _memcpy(param_2,*param_1 + param_1[2],puVar8);
    param_1[2] = param_1[2] + (long)puVar8;
  }
  return 1;
}



/* Entry: 109877ec0; end: 109877ed3;  */

ulong FUN_109877ec0(undefined8 param_1,uint *param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar3 = 0xf62a4d8;
  func_0x000104c4f6cc();
  if (5 < uVar3) {
    return 0;
  }
  lVar1 = param_3[2] + 1;
  if (lVar1 <= param_3[1]) {
    bVar2 = *(byte *)(*param_3 + param_3[2]);
    uVar5 = (uint)bVar2;
    param_3[2] = lVar1;
    if ((char)bVar2 < '\0') {
      uVar4 = (ulong)(uVar3 + 1);
      FUN_109877ed4(uVar4,param_2);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      uVar5 = uVar5 & 0x7f | *param_2 << 7;
    }
    *param_2 = uVar5;
    return 1;
  }
  return 0;
}



/* Entry: 109877ed4; end: 109877f43;  */

ulong FUN_109877ed4(uint param_1,uint *param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  
  if (5 < param_1) {
    return 0;
  }
  lVar1 = param_3[2] + 1;
  if (lVar1 <= param_3[1]) {
    bVar2 = *(byte *)(*param_3 + param_3[2]);
    uVar4 = (uint)bVar2;
    param_3[2] = lVar1;
    if ((char)bVar2 < '\0') {
      uVar3 = (ulong)(param_1 + 1);
      FUN_109877ed4(uVar3,param_2);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      uVar4 = uVar4 & 0x7f | *param_2 << 7;
    }
    *param_2 = uVar4;
    return 1;
  }
  return 0;
}



/* Entry: 109877f44; end: 109877f9f;  */

undefined8 FUN_109877f44(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18) - lVar1;
  if (lVar2 != 0) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      if (*(int *)(*(long *)(lVar1 + lVar4 * 8) + 0x3c) == param_2) {
        if ((int)lVar4 == -1) {
          return 0;
        }
        return *(undefined8 *)(lVar1 + (lVar3 >> 0x1d));
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x100000000;
    } while (lVar2 >> 3 != lVar4);
  }
  return 0;
}



/* Entry: 109877fa0; end: 109878033;  */

int FUN_109877fa0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  lVar1 = param_1[2];
  lVar2 = param_1[3];
  lStack_28 = *param_2;
  *param_2 = 0;
  (**(code **)(*param_1 + 0x10))(param_1,(ulong)(lVar2 - lVar1) >> 3,&lStack_28);
  lVar1 = lStack_28;
  lStack_28 = 0;
  if (lVar1 != 0) {
    func_0x000109846568(&lStack_28);
  }
  return (int)((ulong)(param_1[3] - param_1[2]) >> 3) + -1;
}



/* Entry: 109878034; end: 1098780df;  */

void FUN_109878034(long param_1,int param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  int iStack_34;
  
  plVar3 = (long *)(param_1 + 0x10);
  iStack_34 = param_2;
  if ((int)((ulong)(*(long *)(param_1 + 0x18) - *plVar3) >> 3) <= param_2) {
    FUN_1098780e0(plVar3,(long)(param_2 + 1));
  }
  lVar2 = *param_3;
  if (*(int *)(lVar2 + 0x38) < 5) {
    FUN_10923b3a0(param_1 + (long)*(int *)(lVar2 + 0x38) * 0x18 + 0x28,&iStack_34);
    lVar2 = *param_3;
    param_2 = iStack_34;
  }
  *(int *)(lVar2 + 0x3c) = param_2;
  plVar3 = (long *)(*plVar3 + (long)param_2 * 8);
  *param_3 = 0;
  lVar1 = *plVar3;
  *plVar3 = lVar2;
  if (lVar1 != 0) {
    func_0x000109846568();
  }
  return;
}



/* Entry: 1098780e0; end: 10987810f;  */

void FUN_1098780e0(byte *param_1,ulong param_2,ulong param_3,long param_4)

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  char cVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  byte *pbStack_58;
  
  uVar17 = *(long *)(param_1 + 8) - *(long *)param_1 >> 3;
  if (param_2 <= uVar17) {
    if (uVar17 <= param_2) {
      return;
    }
    plVar1 = (long *)(*(long *)param_1 + param_2 * 8);
    plVar15 = *(long **)(param_1 + 8);
    while (plVar15 != plVar1) {
      plVar15 = plVar15 + -1;
      lVar21 = *plVar15;
      *plVar15 = 0;
      if (lVar21 != 0) {
        func_0x000109846568(plVar15);
      }
    }
    *(long **)(param_1 + 8) = plVar1;
    return;
  }
  param_2 = param_2 - uVar17;
  lVar21 = *(long *)(param_1 + 8);
  if ((ulong)(*(long *)(param_1 + 0x10) - lVar21 >> 3) < param_2) {
    lVar19 = *(long *)param_1;
    lVar21 = lVar21 - lVar19;
    lVar22 = lVar21 >> 3;
    uVar17 = param_2 + lVar22;
    if (uVar17 >> 0x3d != 0) {
      func_0x000109848b58();
      iVar13 = (int)param_1 + 8;
      FUN_109878dd0();
      if (iVar13 != 0) {
        bVar3 = param_1[1];
        if (((param_3 & 1) == 0) || (0xf < bVar3)) {
          uVar17 = (ulong)bVar3 & 0xf;
          uVar12 = (uint)(bVar3 >> 4);
          bVar3 = param_1[2];
          bVar4 = param_1[3];
          bVar5 = param_1[4];
          bVar6 = param_1[5];
          bVar7 = param_1[6];
          bVar8 = param_1[7];
          lVar21 = (ulong)*param_1 + 0xff;
          uVar9 = (&UNK_10e004ac4)
                  [lVar21 + (long)(int)uVar12 *
                            (long)(int)(char)(&UNK_10e004dc3)
                                             [((ulong)(bVar3 >> 2) & 7) + uVar17 * 8]];
          *(undefined *)(param_4 + 3) =
               (&UNK_10e004ac4)
               [lVar21 + (long)(int)uVar12 *
                         (long)(int)(char)(&UNK_10e004dc3)[(ulong)(bVar3 >> 5) + uVar17 * 8]];
          *(undefined1 *)(param_4 + 0x13) = uVar9;
          *(undefined *)(param_4 + 0x23) =
               (&UNK_10e004ac4)
               [lVar21 + (long)(int)uVar12 *
                         (long)(int)(char)(&UNK_10e004dc3)
                                          [(((ulong)bVar4 << 0x20 | (ulong)bVar3 << 0x28) >> 0x27 &
                                           7) + uVar17 * 8]];
          *(undefined *)(param_4 + 0x33) =
               (&UNK_10e004ac4)
               [lVar21 + (long)(int)uVar12 *
                         (long)(int)(char)(&UNK_10e004dc3)[((ulong)(bVar4 >> 4) & 7) + uVar17 * 8]];
          uVar9 = (&UNK_10e004ac4)
                  [lVar21 + (long)(int)uVar12 *
                            (long)(int)(char)(&UNK_10e004dc3)
                                             [(((ulong)bVar4 << 0x20 | (ulong)bVar5 << 0x18) >> 0x1e
                                              & 7) + uVar17 * 8]];
          *(undefined *)(param_4 + 7) =
               (&UNK_10e004ac4)
               [lVar21 + (long)(int)uVar12 *
                         (long)(int)(char)(&UNK_10e004dc3)[((ulong)(bVar4 >> 1) & 7) + uVar17 * 8]];
          *(undefined1 *)(param_4 + 0x17) = uVar9;
          *(undefined *)(param_4 + 0x27) =
               (&UNK_10e004ac4)
               [lVar21 + (long)(int)uVar12 *
                         (long)(int)(char)(&UNK_10e004dc3)[((ulong)(bVar5 >> 3) & 7) + uVar17 * 8]];
          cVar10 = (&UNK_10e004dc3)[(ulong)(bVar6 >> 5) + uVar17 * 8];
          *(undefined *)(param_4 + 0x37) =
               (&UNK_10e004ac4)
               [lVar21 + (long)(int)uVar12 *
                         (long)(int)(char)(&UNK_10e004dc3)[((ulong)bVar5 & 7) + uVar17 * 8]];
          *(undefined *)(param_4 + 0xb) =
               (&UNK_10e004ac4)[lVar21 + (long)(int)uVar12 * (long)(int)cVar10];
          *(undefined *)(param_4 + 0x1b) =
               (&UNK_10e004ac4)
               [lVar21 + (long)(int)uVar12 *
                         (long)(int)(char)(&UNK_10e004dc3)[((ulong)(bVar6 >> 2) & 7) + uVar17 * 8]];
          uVar9 = (&UNK_10e004ac4)
                  [lVar21 + (long)(int)uVar12 *
                            (long)(int)(char)(&UNK_10e004dc3)
                                             [((ulong)(bVar7 >> 4) & 7) + uVar17 * 8]];
          *(undefined *)(param_4 + 0x2b) =
               (&UNK_10e004ac4)
               [lVar21 + (long)(int)uVar12 *
                         (long)(int)(char)(&UNK_10e004dc3)
                                          [((ulong)(((uint)bVar7 << 8 | (uint)bVar6 << 0x10) >> 0xf)
                                           & 7) + uVar17 * 8]];
          *(undefined1 *)(param_4 + 0x3b) = uVar9;
          cVar10 = (&UNK_10e004dc3)[((ulong)(ushort)(CONCAT11(bVar7,bVar8) >> 6) & 7) + uVar17 * 8];
          *(undefined *)(param_4 + 0xf) =
               (&UNK_10e004ac4)
               [lVar21 + (long)(int)uVar12 *
                         (long)(int)(char)(&UNK_10e004dc3)[((ulong)(bVar7 >> 1) & 7) + uVar17 * 8]];
          cVar11 = (&UNK_10e004dc3)[((ulong)(bVar8 >> 3) & 7) + uVar17 * 8];
          *(undefined *)(param_4 + 0x1f) =
               (&UNK_10e004ac4)[lVar21 + (long)(int)uVar12 * (long)(int)cVar10];
          cVar10 = (&UNK_10e004dc3)[((ulong)bVar8 & 7) + uVar17 * 8];
          *(undefined *)(param_4 + 0x2f) =
               (&UNK_10e004ac4)[lVar21 + (long)(int)uVar12 * (long)(int)cVar11];
          *(undefined *)(param_4 + 0x3f) =
               (&UNK_10e004ac4)[lVar21 + (long)(int)uVar12 * (long)(int)cVar10];
        }
      }
      return;
    }
    uVar16 = *(long *)(param_1 + 0x10) - lVar19;
    uVar18 = (long)uVar16 >> 2;
    if (uVar18 <= uVar17) {
      uVar18 = uVar17;
    }
    if (0x7ffffffffffffff7 < uVar16) {
      uVar18 = 0x1fffffffffffffff;
    }
    pbStack_58 = param_1;
    if (uVar18 == 0) {
      pbVar14 = (byte *)0x0;
      lVar20 = lVar21;
    }
    else {
      pbVar14 = param_1;
      FUN_109848b6c();
      lVar19 = *(long *)param_1;
      lVar22 = *(long *)(param_1 + 8) - lVar19 >> 3;
      lVar20 = *(long *)(param_1 + 8) - lVar19;
    }
    pbVar2 = pbVar14 + lVar21;
    _bzero(pbVar2,param_2 * 8);
    _memcpy(pbVar2 + lVar22 * -8,lVar19,lVar20);
    lStack_78 = *(long *)param_1;
    *(byte **)param_1 = pbVar2 + lVar22 * -8;
    *(byte **)(param_1 + 8) = pbVar2 + param_2 * 8;
    lStack_60 = *(long *)(param_1 + 0x10);
    *(byte **)(param_1 + 0x10) = pbVar14 + uVar18 * 8;
    lStack_70 = lStack_78;
    lStack_68 = lStack_78;
    func_0x000109848ba0(&lStack_78);
  }
  else {
    if (param_2 != 0) {
      _bzero(lVar21,param_2 * 8);
      lVar21 = lVar21 + param_2 * 8;
    }
    *(long *)(param_1 + 8) = lVar21;
  }
  return;
}



/* Entry: 109878110; end: 1098782d3;  */

void FUN_109878110(long param_1,uint param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  long *plVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  int *piVar12;
  uint *puVar13;
  
  if ((int)param_2 < 0) {
    return;
  }
  lVar8 = *(long *)(param_1 + 0x10);
  plVar11 = *(long **)(param_1 + 0x18);
  if ((ulong)((long)plVar11 - lVar8 >> 3) <= (ulong)param_2) {
    return;
  }
  plVar1 = (long *)(lVar8 + (ulong)param_2 * 8);
  lVar8 = *plVar1;
  iVar2 = *(int *)(lVar8 + 0x38);
  iVar3 = *(int *)(lVar8 + 0x3c);
  while (plVar6 = plVar1 + 1, plVar6 != plVar11) {
    lVar8 = plVar6[-1];
    lVar9 = *plVar6;
    *plVar6 = 0;
    plVar6[-1] = lVar9;
    plVar1 = plVar6;
    if (lVar8 != 0) {
      func_0x000109846568();
    }
  }
  FUN_109849258((long *)(param_1 + 0x10),plVar1);
  lVar8 = *(long *)(param_1 + 8);
  if ((lVar8 != 0) && (-1 < iVar3)) {
    plVar1 = *(long **)(lVar8 + 0x38);
    for (plVar11 = *(long **)(lVar8 + 0x30); plVar11 != plVar1; plVar11 = plVar11 + 1) {
      if (*(int *)(*plVar11 + 0x30) == iVar3) goto joined_r0x0001098781d4;
    }
  }
LAB_10987820c:
  if (iVar2 < 5) {
    lVar8 = param_1 + (long)iVar2 * 0x18;
    puVar4 = *(uint **)(lVar8 + 0x28);
    puVar5 = *(uint **)(lVar8 + 0x30);
    puVar13 = puVar4;
    puVar7 = puVar4;
    while ((puVar7 != puVar5 && (puVar13 = puVar4, *puVar7 != param_2))) {
      puVar4 = puVar4 + 1;
      puVar13 = puVar5;
      puVar7 = puVar7 + 1;
    }
    if (puVar5 != puVar13) {
      lVar9 = (long)puVar5 - (long)(puVar13 + 1);
      if (lVar9 != 0) {
        _memmove(puVar13,puVar13 + 1,lVar9);
      }
      *(long *)(lVar8 + 0x30) = (long)puVar13 + lVar9;
    }
  }
  lVar8 = 0;
  do {
    plVar11 = (long *)(param_1 + 0x28 + lVar8 * 0x18);
    piVar12 = (int *)*plVar11;
    lVar9 = plVar11[1] - (long)piVar12;
    if (lVar9 != 0) {
      lVar9 = lVar9 >> 2;
      do {
        if ((int)param_2 < *piVar12) {
          *piVar12 = *piVar12 + -1;
        }
        piVar12 = piVar12 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 5);
  return;
joined_r0x0001098781d4:
  while (plVar6 = plVar11 + 1, plVar6 != plVar1) {
    lVar9 = plVar6[-1];
    lVar10 = *plVar6;
    *plVar6 = 0;
    plVar6[-1] = lVar10;
    plVar11 = plVar6;
    if (lVar9 != 0) {
      FUN_109875988();
    }
  }
  FUN_10987592c((undefined8 *)(lVar8 + 0x30),plVar11);
  goto LAB_10987820c;
}



/* Entry: 1098782d4; end: 1098782d7;  */

undefined8 * FUN_1098782d4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  lVar2 = 0;
  *param_1 = &PTR_FUN_110b16488;
  do {
    lVar1 = *(long *)((long)param_1 + lVar2 + 0x88);
    if (lVar1 != 0) {
      *(long *)((long)param_1 + lVar2 + 0x90) = lVar1;
      __ZdlPv();
    }
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != -0x78);
  puStack_28 = param_1 + 2;
  func_0x000109849218(&puStack_28);
  lVar2 = param_1[1];
  param_1[1] = 0;
  if (lVar2 != 0) {
    FUN_109875894();
  }
  return param_1;
}



/* Entry: 1098782d8; end: 1098782eb;  */

void FUN_1098782d8(void)

{
  FUN_1098762bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098782ec; end: 10987840b;  */

void FUN_1098782ec(byte *param_1,ulong param_2,ulong param_3,long param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined1 uVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  byte *pbStack_58;
  
  lVar19 = *(long *)(param_1 + 8);
  if ((ulong)(*(long *)(param_1 + 0x10) - lVar19 >> 3) < param_2) {
    lVar17 = *(long *)param_1;
    lVar19 = lVar19 - lVar17;
    lVar20 = lVar19 >> 3;
    uVar15 = param_2 + lVar20;
    if (uVar15 >> 0x3d != 0) {
      func_0x000109848b58();
      iVar12 = (int)param_1 + 8;
      FUN_109878dd0();
      if (iVar12 != 0) {
        bVar2 = param_1[1];
        if (((param_3 & 1) == 0) || (0xf < bVar2)) {
          uVar15 = (ulong)bVar2 & 0xf;
          uVar11 = (uint)(bVar2 >> 4);
          bVar2 = param_1[2];
          bVar3 = param_1[3];
          bVar4 = param_1[4];
          bVar5 = param_1[5];
          bVar6 = param_1[6];
          bVar7 = param_1[7];
          lVar19 = (ulong)*param_1 + 0xff;
          uVar8 = (&UNK_10e004ac4)
                  [lVar19 + (long)(int)uVar11 *
                            (long)(int)(char)(&UNK_10e004dc3)
                                             [((ulong)(bVar2 >> 2) & 7) + uVar15 * 8]];
          *(undefined *)(param_4 + 3) =
               (&UNK_10e004ac4)
               [lVar19 + (long)(int)uVar11 *
                         (long)(int)(char)(&UNK_10e004dc3)[(ulong)(bVar2 >> 5) + uVar15 * 8]];
          *(undefined1 *)(param_4 + 0x13) = uVar8;
          *(undefined *)(param_4 + 0x23) =
               (&UNK_10e004ac4)
               [lVar19 + (long)(int)uVar11 *
                         (long)(int)(char)(&UNK_10e004dc3)
                                          [(((ulong)bVar3 << 0x20 | (ulong)bVar2 << 0x28) >> 0x27 &
                                           7) + uVar15 * 8]];
          *(undefined *)(param_4 + 0x33) =
               (&UNK_10e004ac4)
               [lVar19 + (long)(int)uVar11 *
                         (long)(int)(char)(&UNK_10e004dc3)[((ulong)(bVar3 >> 4) & 7) + uVar15 * 8]];
          uVar8 = (&UNK_10e004ac4)
                  [lVar19 + (long)(int)uVar11 *
                            (long)(int)(char)(&UNK_10e004dc3)
                                             [(((ulong)bVar3 << 0x20 | (ulong)bVar4 << 0x18) >> 0x1e
                                              & 7) + uVar15 * 8]];
          *(undefined *)(param_4 + 7) =
               (&UNK_10e004ac4)
               [lVar19 + (long)(int)uVar11 *
                         (long)(int)(char)(&UNK_10e004dc3)[((ulong)(bVar3 >> 1) & 7) + uVar15 * 8]];
          *(undefined1 *)(param_4 + 0x17) = uVar8;
          *(undefined *)(param_4 + 0x27) =
               (&UNK_10e004ac4)
               [lVar19 + (long)(int)uVar11 *
                         (long)(int)(char)(&UNK_10e004dc3)[((ulong)(bVar4 >> 3) & 7) + uVar15 * 8]];
          cVar9 = (&UNK_10e004dc3)[(ulong)(bVar5 >> 5) + uVar15 * 8];
          *(undefined *)(param_4 + 0x37) =
               (&UNK_10e004ac4)
               [lVar19 + (long)(int)uVar11 *
                         (long)(int)(char)(&UNK_10e004dc3)[((ulong)bVar4 & 7) + uVar15 * 8]];
          *(undefined *)(param_4 + 0xb) =
               (&UNK_10e004ac4)[lVar19 + (long)(int)uVar11 * (long)(int)cVar9];
          *(undefined *)(param_4 + 0x1b) =
               (&UNK_10e004ac4)
               [lVar19 + (long)(int)uVar11 *
                         (long)(int)(char)(&UNK_10e004dc3)[((ulong)(bVar5 >> 2) & 7) + uVar15 * 8]];
          uVar8 = (&UNK_10e004ac4)
                  [lVar19 + (long)(int)uVar11 *
                            (long)(int)(char)(&UNK_10e004dc3)
                                             [((ulong)(bVar6 >> 4) & 7) + uVar15 * 8]];
          *(undefined *)(param_4 + 0x2b) =
               (&UNK_10e004ac4)
               [lVar19 + (long)(int)uVar11 *
                         (long)(int)(char)(&UNK_10e004dc3)
                                          [((ulong)(((uint)bVar6 << 8 | (uint)bVar5 << 0x10) >> 0xf)
                                           & 7) + uVar15 * 8]];
          *(undefined1 *)(param_4 + 0x3b) = uVar8;
          cVar9 = (&UNK_10e004dc3)[((ulong)(ushort)(CONCAT11(bVar6,bVar7) >> 6) & 7) + uVar15 * 8];
          *(undefined *)(param_4 + 0xf) =
               (&UNK_10e004ac4)
               [lVar19 + (long)(int)uVar11 *
                         (long)(int)(char)(&UNK_10e004dc3)[((ulong)(bVar6 >> 1) & 7) + uVar15 * 8]];
          cVar10 = (&UNK_10e004dc3)[((ulong)(bVar7 >> 3) & 7) + uVar15 * 8];
          *(undefined *)(param_4 + 0x1f) =
               (&UNK_10e004ac4)[lVar19 + (long)(int)uVar11 * (long)(int)cVar9];
          cVar9 = (&UNK_10e004dc3)[((ulong)bVar7 & 7) + uVar15 * 8];
          *(undefined *)(param_4 + 0x2f) =
               (&UNK_10e004ac4)[lVar19 + (long)(int)uVar11 * (long)(int)cVar10];
          *(undefined *)(param_4 + 0x3f) =
               (&UNK_10e004ac4)[lVar19 + (long)(int)uVar11 * (long)(int)cVar9];
        }
      }
      return;
    }
    uVar14 = *(long *)(param_1 + 0x10) - lVar17;
    uVar16 = (long)uVar14 >> 2;
    if (uVar16 <= uVar15) {
      uVar16 = uVar15;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar16 = 0x1fffffffffffffff;
    }
    pbStack_58 = param_1;
    if (uVar16 == 0) {
      pbVar13 = (byte *)0x0;
      lVar18 = lVar19;
    }
    else {
      pbVar13 = param_1;
      FUN_109848b6c();
      lVar17 = *(long *)param_1;
      lVar20 = *(long *)(param_1 + 8) - lVar17 >> 3;
      lVar18 = *(long *)(param_1 + 8) - lVar17;
    }
    pbVar1 = pbVar13 + lVar19;
    _bzero(pbVar1,param_2 << 3);
    _memcpy(pbVar1 + lVar20 * -8,lVar17,lVar18);
    lStack_78 = *(long *)param_1;
    *(byte **)param_1 = pbVar1 + lVar20 * -8;
    *(byte **)(param_1 + 8) = pbVar1 + param_2 * 8;
    lStack_60 = *(long *)(param_1 + 0x10);
    *(byte **)(param_1 + 0x10) = pbVar13 + uVar16 * 8;
    lStack_70 = lStack_78;
    lStack_68 = lStack_78;
    func_0x000109848ba0(&lStack_78);
  }
  else {
    if (param_2 != 0) {
      _bzero(lVar19,param_2 << 3);
      lVar19 = lVar19 + param_2 * 8;
    }
    *(long *)(param_1 + 8) = lVar19;
  }
  return;
}



/* Entry: 10987840c; end: 1098785f3;  */

void FUN_10987840c(byte *param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined1 uVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  
  iVar12 = (int)param_1 + 8;
  FUN_109878dd0();
  if (iVar12 != 0) {
    bVar2 = param_1[1];
    if (((param_3 & 1) == 0) || (0xf < bVar2)) {
      uVar13 = (ulong)bVar2 & 0xf;
      uVar11 = (uint)(bVar2 >> 4);
      bVar2 = param_1[2];
      bVar3 = param_1[3];
      bVar4 = param_1[4];
      bVar5 = param_1[5];
      bVar6 = param_1[6];
      bVar7 = param_1[7];
      lVar1 = (ulong)*param_1 + 0xff;
      uVar8 = (&UNK_10e004ac4)
              [lVar1 + (long)(int)uVar11 *
                       (long)(int)(char)(&UNK_10e004dc3)[((ulong)(bVar2 >> 2) & 7) + uVar13 * 8]];
      *(undefined *)(param_4 + 3) =
           (&UNK_10e004ac4)
           [lVar1 + (long)(int)uVar11 *
                    (long)(int)(char)(&UNK_10e004dc3)[(ulong)(bVar2 >> 5) + uVar13 * 8]];
      *(undefined1 *)(param_4 + 0x13) = uVar8;
      *(undefined *)(param_4 + 0x23) =
           (&UNK_10e004ac4)
           [lVar1 + (long)(int)uVar11 *
                    (long)(int)(char)(&UNK_10e004dc3)
                                     [(((ulong)bVar3 << 0x20 | (ulong)bVar2 << 0x28) >> 0x27 & 7) +
                                      uVar13 * 8]];
      *(undefined *)(param_4 + 0x33) =
           (&UNK_10e004ac4)
           [lVar1 + (long)(int)uVar11 *
                    (long)(int)(char)(&UNK_10e004dc3)[((ulong)(bVar3 >> 4) & 7) + uVar13 * 8]];
      uVar8 = (&UNK_10e004ac4)
              [lVar1 + (long)(int)uVar11 *
                       (long)(int)(char)(&UNK_10e004dc3)
                                        [(((ulong)bVar3 << 0x20 | (ulong)bVar4 << 0x18) >> 0x1e & 7)
                                         + uVar13 * 8]];
      *(undefined *)(param_4 + 7) =
           (&UNK_10e004ac4)
           [lVar1 + (long)(int)uVar11 *
                    (long)(int)(char)(&UNK_10e004dc3)[((ulong)(bVar3 >> 1) & 7) + uVar13 * 8]];
      *(undefined1 *)(param_4 + 0x17) = uVar8;
      *(undefined *)(param_4 + 0x27) =
           (&UNK_10e004ac4)
           [lVar1 + (long)(int)uVar11 *
                    (long)(int)(char)(&UNK_10e004dc3)[((ulong)(bVar4 >> 3) & 7) + uVar13 * 8]];
      cVar9 = (&UNK_10e004dc3)[(ulong)(bVar5 >> 5) + uVar13 * 8];
      *(undefined *)(param_4 + 0x37) =
           (&UNK_10e004ac4)
           [lVar1 + (long)(int)uVar11 *
                    (long)(int)(char)(&UNK_10e004dc3)[((ulong)bVar4 & 7) + uVar13 * 8]];
      *(undefined *)(param_4 + 0xb) = (&UNK_10e004ac4)[lVar1 + (long)(int)uVar11 * (long)(int)cVar9]
      ;
      *(undefined *)(param_4 + 0x1b) =
           (&UNK_10e004ac4)
           [lVar1 + (long)(int)uVar11 *
                    (long)(int)(char)(&UNK_10e004dc3)[((ulong)(bVar5 >> 2) & 7) + uVar13 * 8]];
      uVar8 = (&UNK_10e004ac4)
              [lVar1 + (long)(int)uVar11 *
                       (long)(int)(char)(&UNK_10e004dc3)[((ulong)(bVar6 >> 4) & 7) + uVar13 * 8]];
      *(undefined *)(param_4 + 0x2b) =
           (&UNK_10e004ac4)
           [lVar1 + (long)(int)uVar11 *
                    (long)(int)(char)(&UNK_10e004dc3)
                                     [((ulong)(((uint)bVar6 << 8 | (uint)bVar5 << 0x10) >> 0xf) & 7)
                                      + uVar13 * 8]];
      *(undefined1 *)(param_4 + 0x3b) = uVar8;
      cVar9 = (&UNK_10e004dc3)[((ulong)(ushort)(CONCAT11(bVar6,bVar7) >> 6) & 7) + uVar13 * 8];
      *(undefined *)(param_4 + 0xf) =
           (&UNK_10e004ac4)
           [lVar1 + (long)(int)uVar11 *
                    (long)(int)(char)(&UNK_10e004dc3)[((ulong)(bVar6 >> 1) & 7) + uVar13 * 8]];
      cVar10 = (&UNK_10e004dc3)[((ulong)(bVar7 >> 3) & 7) + uVar13 * 8];
      *(undefined *)(param_4 + 0x1f) =
           (&UNK_10e004ac4)[lVar1 + (long)(int)uVar11 * (long)(int)cVar9];
      cVar9 = (&UNK_10e004dc3)[((ulong)bVar7 & 7) + uVar13 * 8];
      *(undefined *)(param_4 + 0x2f) =
           (&UNK_10e004ac4)[lVar1 + (long)(int)uVar11 * (long)(int)cVar10];
      *(undefined *)(param_4 + 0x3f) =
           (&UNK_10e004ac4)[lVar1 + (long)(int)uVar11 * (long)(int)cVar9];
    }
  }
  return;
}



/* Entry: 1098785f4; end: 109878dcf;  */

undefined8 FUN_1098785f4(byte *param_1,uint param_2,undefined8 param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  uint uVar29;
  ulong uVar30;
  uint uVar31;
  ulong uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  
  bVar10 = param_1[3];
  if ((bVar10 >> 1 & 1) == 0) {
    if ((param_2 & 1) != 0) {
      bVar11 = *param_1;
      uVar33 = bVar11 & 0xf0 | (uint)(bVar11 >> 4);
      bVar12 = param_1[1];
      uVar35 = bVar12 & 0xf0 | (uint)(bVar12 >> 4);
      bVar13 = param_1[2];
      uVar31 = bVar13 & 0xf0 | (uint)(bVar13 >> 4);
      uVar34 = bVar11 & 0xf;
      uVar34 = uVar34 | uVar34 << 4;
      uVar36 = bVar12 & 0xf;
      uVar36 = uVar36 | uVar36 << 4;
      uVar29 = bVar13 & 0xf;
      uVar29 = uVar29 | uVar29 << 4;
LAB_10987863c:
      uVar30 = (ulong)(bVar10 >> 5);
      uVar32 = (ulong)(bVar10 >> 2 & 7);
      bVar11 = param_1[4];
      bVar12 = param_1[5];
      bVar13 = param_1[6];
      bVar14 = param_1[7];
      uVar5 = bVar14 & 1 | (bVar12 & 1) << 1;
      iVar1 = uVar33 + 0xff;
      iVar2 = uVar35 + 0xff;
      iVar3 = uVar31 + 0xff;
      if ((bVar10 & 1) == 0) {
        iVar6 = *(int *)(&UNK_10e004e64 + (ulong)uVar5 * 4 + uVar30 * 0x10);
        iVar7 = *(int *)(&UNK_10e004e64 + (ulong)(bVar12 & 2 | bVar14 >> 1 & 1) * 4 + uVar30 * 0x10)
        ;
        uVar15 = (&UNK_10e004ac4)[iVar7 + iVar1];
        uVar16 = (&UNK_10e004ac4)[iVar7 + iVar2];
        uVar17 = (&UNK_10e004ac4)[iVar7 + iVar3];
        iVar7 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar12 >> 1 & 2 | bVar14 >> 2 & 1) * 4 + uVar30 * 0x10);
        uVar18 = (&UNK_10e004ac4)[iVar7 + iVar1];
        uVar19 = (&UNK_10e004ac4)[iVar7 + iVar2];
        uVar20 = (&UNK_10e004ac4)[iVar7 + iVar3];
        iVar7 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar12 >> 2 & 2 | bVar14 >> 3 & 1) * 4 + uVar30 * 0x10);
        uVar21 = (&UNK_10e004ac4)[iVar7 + iVar1];
        uVar22 = (&UNK_10e004ac4)[iVar7 + iVar2];
        uVar23 = (&UNK_10e004ac4)[iVar7 + iVar3];
        iVar7 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar12 >> 3 & 2 | bVar14 >> 4 & 1) * 4 + uVar30 * 0x10);
        uVar24 = (&UNK_10e004ac4)[iVar7 + iVar1];
        uVar25 = (&UNK_10e004ac4)[iVar7 + iVar2];
        uVar26 = (&UNK_10e004ac4)[iVar7 + iVar3];
        iVar7 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar12 >> 4 & 2 | bVar14 >> 5 & 1) * 4 + uVar30 * 0x10);
        uVar27 = (&UNK_10e004ac4)[iVar7 + iVar1];
        uVar28 = (&UNK_10e004ac4)[iVar7 + iVar2];
        *param_4 = CONCAT12((&UNK_10e004ac4)[iVar6 + iVar3],
                            CONCAT11((&UNK_10e004ac4)[iVar6 + iVar2],(&UNK_10e004ac4)[iVar6 + iVar1]
                                    )) | 0xff000000;
        param_4[1] = CONCAT12(uVar26,CONCAT11(uVar25,uVar24)) | 0xff000000;
        uVar24 = (&UNK_10e004ac4)[iVar7 + iVar3];
        param_4[4] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
        param_4[5] = CONCAT12(uVar24,CONCAT11(uVar28,uVar27)) | 0xff000000;
        iVar6 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar12 >> 5 & 2 | bVar14 >> 6 & 1) * 4 + uVar30 * 0x10);
        uVar15 = (&UNK_10e004ac4)[iVar6 + iVar1];
        uVar16 = (&UNK_10e004ac4)[iVar6 + iVar2];
        uVar17 = (&UNK_10e004ac4)[iVar6 + iVar3];
        param_4[8] = CONCAT12(uVar20,CONCAT11(uVar19,uVar18)) | 0xff000000;
        param_4[9] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
        iVar6 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar12 >> 6 & 2 | (uint)(bVar14 >> 7)) * 4 + uVar30 * 0x10);
        uVar15 = (&UNK_10e004ac4)[iVar6 + iVar1];
        uVar16 = (&UNK_10e004ac4)[iVar6 + iVar2];
        uVar17 = (&UNK_10e004ac4)[iVar6 + iVar3];
        iVar6 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar13 & 1 | (bVar11 & 1) << 1) * 4 + uVar32 * 0x10);
        iVar1 = uVar34 + 0xff;
        uVar18 = (&UNK_10e004ac4)[iVar6 + iVar1];
        iVar2 = uVar36 + 0xff;
        uVar19 = (&UNK_10e004ac4)[iVar6 + iVar2];
        iVar3 = uVar29 + 0xff;
        uVar20 = (&UNK_10e004ac4)[iVar6 + iVar3];
        param_4[0xc] = CONCAT12(uVar23,CONCAT11(uVar22,uVar21)) | 0xff000000;
        param_4[0xd] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
        iVar6 = *(int *)(&UNK_10e004e64 + (ulong)(bVar11 & 2 | bVar13 >> 1 & 1) * 4 + uVar32 * 0x10)
        ;
        uVar15 = (&UNK_10e004ac4)[iVar6 + iVar1];
        uVar16 = (&UNK_10e004ac4)[iVar6 + iVar2];
        uVar17 = (&UNK_10e004ac4)[iVar6 + iVar3];
        iVar6 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar11 >> 1 & 2 | bVar13 >> 2 & 1) * 4 + uVar32 * 0x10);
        uVar21 = (&UNK_10e004ac4)[iVar6 + iVar1];
        uVar22 = (&UNK_10e004ac4)[iVar6 + iVar2];
        uVar23 = (&UNK_10e004ac4)[iVar6 + iVar3];
        iVar6 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar11 >> 2 & 2 | bVar13 >> 3 & 1) * 4 + uVar32 * 0x10);
        param_4[0xe] = CONCAT12((&UNK_10e004ac4)[iVar6 + iVar3],
                                CONCAT11((&UNK_10e004ac4)[iVar6 + iVar2],
                                         (&UNK_10e004ac4)[iVar6 + iVar1])) | 0xff000000;
        iVar6 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar11 >> 3 & 2 | bVar13 >> 4 & 1) * 4 + uVar32 * 0x10);
        uVar24 = (&UNK_10e004ac4)[iVar6 + iVar1];
        uVar25 = (&UNK_10e004ac4)[iVar6 + iVar2];
        uVar26 = (&UNK_10e004ac4)[iVar6 + iVar3];
        iVar6 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar11 >> 4 & 2 | bVar13 >> 5 & 1) * 4 + uVar32 * 0x10);
        uVar27 = (&UNK_10e004ac4)[iVar6 + iVar1];
        uVar28 = (&UNK_10e004ac4)[iVar6 + iVar2];
        param_4[2] = CONCAT12(uVar20,CONCAT11(uVar19,uVar18)) | 0xff000000;
        param_4[3] = CONCAT12(uVar26,CONCAT11(uVar25,uVar24)) | 0xff000000;
        uVar18 = (&UNK_10e004ac4)[iVar6 + iVar3];
        param_4[6] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
        param_4[7] = CONCAT12(uVar18,CONCAT11(uVar28,uVar27)) | 0xff000000;
        iVar6 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar11 >> 5 & 2 | bVar13 >> 6 & 1) * 4 + uVar32 * 0x10);
        uVar15 = (&UNK_10e004ac4)[iVar6 + iVar1];
        uVar16 = (&UNK_10e004ac4)[iVar6 + iVar2];
        uVar17 = (&UNK_10e004ac4)[iVar6 + iVar3];
        param_4[10] = CONCAT12(uVar23,CONCAT11(uVar22,uVar21)) | 0xff000000;
        param_4[0xb] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
        uVar33 = (uint)(int)(char)bVar11 >> 0x1e;
      }
      else {
        iVar8 = *(int *)(&UNK_10e004e64 + (ulong)uVar5 * 4 + uVar30 * 0x10);
        iVar6 = *(int *)(&UNK_10e004e64 + (ulong)(bVar12 & 2 | bVar14 >> 1 & 1) * 4 + uVar30 * 0x10)
        ;
        uVar15 = (&UNK_10e004ac4)[iVar6 + iVar1];
        uVar16 = (&UNK_10e004ac4)[iVar6 + iVar2];
        uVar17 = (&UNK_10e004ac4)[iVar6 + iVar3];
        iVar9 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar12 >> 1 & 2 | bVar14 >> 2 & 1) * 4 + uVar32 * 0x10);
        iVar6 = uVar34 + 0xff;
        uVar18 = (&UNK_10e004ac4)[iVar9 + iVar6];
        iVar7 = uVar36 + 0xff;
        uVar19 = (&UNK_10e004ac4)[iVar9 + iVar7];
        iVar4 = uVar29 + 0xff;
        uVar20 = (&UNK_10e004ac4)[iVar9 + iVar4];
        iVar9 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar12 >> 2 & 2 | bVar14 >> 3 & 1) * 4 + uVar32 * 0x10);
        uVar21 = (&UNK_10e004ac4)[iVar9 + iVar6];
        uVar22 = (&UNK_10e004ac4)[iVar9 + iVar7];
        uVar23 = (&UNK_10e004ac4)[iVar9 + iVar4];
        iVar9 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar12 >> 3 & 2 | bVar14 >> 4 & 1) * 4 + uVar30 * 0x10);
        uVar24 = (&UNK_10e004ac4)[iVar9 + iVar1];
        uVar25 = (&UNK_10e004ac4)[iVar9 + iVar2];
        uVar26 = (&UNK_10e004ac4)[iVar9 + iVar3];
        *param_4 = CONCAT12((&UNK_10e004ac4)[iVar8 + iVar3],
                            CONCAT11((&UNK_10e004ac4)[iVar8 + iVar2],(&UNK_10e004ac4)[iVar8 + iVar1]
                                    )) | 0xff000000;
        param_4[1] = CONCAT12(uVar26,CONCAT11(uVar25,uVar24)) | 0xff000000;
        iVar8 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar12 >> 4 & 2 | bVar14 >> 5 & 1) * 4 + uVar30 * 0x10);
        uVar24 = (&UNK_10e004ac4)[iVar8 + iVar1];
        uVar25 = (&UNK_10e004ac4)[iVar8 + iVar2];
        uVar26 = (&UNK_10e004ac4)[iVar8 + iVar3];
        param_4[4] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
        param_4[5] = CONCAT12(uVar26,CONCAT11(uVar25,uVar24)) | 0xff000000;
        iVar8 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar12 >> 5 & 2 | bVar14 >> 6 & 1) * 4 + uVar32 * 0x10);
        uVar15 = (&UNK_10e004ac4)[iVar8 + iVar6];
        uVar16 = (&UNK_10e004ac4)[iVar8 + iVar7];
        uVar17 = (&UNK_10e004ac4)[iVar8 + iVar4];
        param_4[8] = CONCAT12(uVar20,CONCAT11(uVar19,uVar18)) | 0xff000000;
        param_4[9] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
        iVar8 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar12 >> 6 & 2 | (uint)(bVar14 >> 7)) * 4 + uVar32 * 0x10);
        uVar15 = (&UNK_10e004ac4)[iVar8 + iVar6];
        uVar16 = (&UNK_10e004ac4)[iVar8 + iVar7];
        uVar17 = (&UNK_10e004ac4)[iVar8 + iVar4];
        param_4[0xc] = CONCAT12(uVar23,CONCAT11(uVar22,uVar21)) | 0xff000000;
        param_4[0xd] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
        iVar8 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar13 & 1 | (bVar11 & 1) << 1) * 4 + uVar30 * 0x10);
        uVar15 = (&UNK_10e004ac4)[iVar8 + iVar1];
        uVar16 = (&UNK_10e004ac4)[iVar8 + iVar2];
        uVar17 = (&UNK_10e004ac4)[iVar8 + iVar3];
        iVar8 = *(int *)(&UNK_10e004e64 + (ulong)(bVar11 & 2 | bVar13 >> 1 & 1) * 4 + uVar30 * 0x10)
        ;
        uVar18 = (&UNK_10e004ac4)[iVar8 + iVar1];
        uVar19 = (&UNK_10e004ac4)[iVar8 + iVar2];
        uVar20 = (&UNK_10e004ac4)[iVar8 + iVar3];
        iVar8 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar11 >> 1 & 2 | bVar13 >> 2 & 1) * 4 + uVar32 * 0x10);
        uVar21 = (&UNK_10e004ac4)[iVar8 + iVar6];
        uVar22 = (&UNK_10e004ac4)[iVar8 + iVar7];
        uVar23 = (&UNK_10e004ac4)[iVar8 + iVar4];
        iVar8 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar11 >> 2 & 2 | bVar13 >> 3 & 1) * 4 + uVar32 * 0x10);
        iVar9 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar11 >> 3 & 2 | bVar13 >> 4 & 1) * 4 + uVar30 * 0x10);
        uVar24 = (&UNK_10e004ac4)[iVar9 + iVar1];
        param_4[0xe] = CONCAT12((&UNK_10e004ac4)[iVar8 + iVar4],
                                CONCAT11((&UNK_10e004ac4)[iVar8 + iVar7],
                                         (&UNK_10e004ac4)[iVar8 + iVar6])) | 0xff000000;
        uVar25 = (&UNK_10e004ac4)[iVar9 + iVar2];
        uVar26 = (&UNK_10e004ac4)[iVar9 + iVar3];
        param_4[2] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
        param_4[3] = CONCAT12(uVar26,CONCAT11(uVar25,uVar24)) | 0xff000000;
        iVar8 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar11 >> 4 & 2 | bVar13 >> 5 & 1) * 4 + uVar30 * 0x10);
        uVar15 = (&UNK_10e004ac4)[iVar8 + iVar1];
        uVar16 = (&UNK_10e004ac4)[iVar8 + iVar2];
        uVar17 = (&UNK_10e004ac4)[iVar8 + iVar3];
        param_4[6] = CONCAT12(uVar20,CONCAT11(uVar19,uVar18)) | 0xff000000;
        param_4[7] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
        iVar1 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar11 >> 5 & 2 | bVar13 >> 6 & 1) * 4 + uVar32 * 0x10);
        uVar15 = (&UNK_10e004ac4)[iVar1 + iVar6];
        uVar16 = (&UNK_10e004ac4)[iVar1 + iVar7];
        uVar17 = (&UNK_10e004ac4)[iVar1 + iVar4];
        param_4[10] = CONCAT12(uVar23,CONCAT11(uVar22,uVar21)) | 0xff000000;
        param_4[0xb] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
        uVar33 = (uint)(bVar11 >> 6);
      }
      iVar1 = *(int *)(&UNK_10e004e64 +
                      (ulong)(uVar33 & 2 | (uint)(bVar13 >> 7)) * 4 + uVar32 * 0x10);
      param_4[0xf] = CONCAT12((&UNK_10e004ac4)[(int)(iVar1 + uVar29 + 0xff)],
                              CONCAT11((&UNK_10e004ac4)[(int)(iVar1 + uVar36 + 0xff)],
                                       (&UNK_10e004ac4)[(int)(iVar1 + uVar34 + 0xff)])) | 0xff000000
      ;
      return 1;
    }
  }
  else if ((param_2 >> 1 & 1) != 0) {
    bVar11 = *param_1;
    uVar34 = *(int *)(&UNK_10e004e44 + ((ulong)bVar11 & 7) * 4) + (bVar11 & 0xf8);
    if ((uVar34 & 0xff07) == 0) {
      bVar12 = param_1[1];
      uVar36 = *(int *)(&UNK_10e004e44 + ((ulong)bVar12 & 7) * 4) + (bVar12 & 0xf8);
      if ((uVar36 & 0xff07) == 0) {
        bVar13 = param_1[2];
        uVar29 = *(int *)(&UNK_10e004e44 + ((ulong)bVar13 & 7) * 4) + (bVar13 & 0xf8);
        if ((uVar29 & 0xff07) == 0) {
          uVar33 = bVar11 & 0xf8 | (uint)(bVar11 >> 5);
          uVar35 = bVar12 & 0xf8 | (uint)(bVar12 >> 5);
          uVar34 = uVar34 >> 5 & 7 | uVar34;
          uVar36 = uVar36 >> 5 & 7 | uVar36;
          uVar29 = uVar29 >> 5 & 7 | uVar29;
          uVar31 = bVar13 & 0xf8 | (uint)(bVar13 >> 5);
          goto LAB_10987863c;
        }
      }
    }
  }
  return 0;
}



/* Entry: 109878dd0; end: 10987912f;  */

undefined8 FUN_109878dd0(byte *param_1,uint param_2,undefined8 param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined8 uVar29;
  uint uVar30;
  ulong uVar31;
  uint uVar32;
  ulong uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  
  if ((param_1[3] >> 1 & 1) != 0) {
    if (param_2 < 2) {
      return 0;
    }
    if (((*param_1 & 0xf8) + *(int *)(&UNK_10e004e44 + ((ulong)*param_1 & 7) * 4) & 0xff07) != 0) {
      if ((param_2 >> 2 & 1) == 0) {
        return 0;
      }
      uVar29 = 4;
LAB_109878e48:
      func_0x000109878e94(param_1,uVar29,param_4);
      return 1;
    }
    if (((param_1[1] & 0xf8) + *(int *)(&UNK_10e004e44 + ((ulong)param_1[1] & 7) * 4) & 0xff07) != 0
       ) {
      if ((param_2 >> 3 & 1) == 0) {
        return 0;
      }
      uVar29 = 8;
      goto LAB_109878e48;
    }
    if (((param_1[2] & 0xf8) + *(int *)(&UNK_10e004e44 + ((ulong)param_1[2] & 7) * 4) & 0xff07) != 0
       ) {
      if ((param_2 >> 4 & 1) != 0) {
        FUN_109879130(param_1,param_4);
        return 1;
      }
      return 0;
    }
  }
  bVar10 = param_1[3];
  if ((bVar10 >> 1 & 1) == 0) {
    if ((param_2 & 1) != 0) {
      bVar11 = *param_1;
      uVar34 = bVar11 & 0xf0 | (uint)(bVar11 >> 4);
      bVar12 = param_1[1];
      uVar36 = bVar12 & 0xf0 | (uint)(bVar12 >> 4);
      bVar13 = param_1[2];
      uVar32 = bVar13 & 0xf0 | (uint)(bVar13 >> 4);
      uVar35 = bVar11 & 0xf;
      uVar35 = uVar35 | uVar35 << 4;
      uVar37 = bVar12 & 0xf;
      uVar37 = uVar37 | uVar37 << 4;
      uVar30 = bVar13 & 0xf;
      uVar30 = uVar30 | uVar30 << 4;
LAB_10987863c:
      uVar31 = (ulong)(bVar10 >> 5);
      uVar33 = (ulong)(bVar10 >> 2 & 7);
      bVar11 = param_1[4];
      bVar12 = param_1[5];
      bVar13 = param_1[6];
      bVar14 = param_1[7];
      uVar5 = bVar14 & 1 | (bVar12 & 1) << 1;
      iVar1 = uVar34 + 0xff;
      iVar2 = uVar36 + 0xff;
      iVar3 = uVar32 + 0xff;
      if ((bVar10 & 1) == 0) {
        iVar6 = *(int *)(&UNK_10e004e64 + (ulong)uVar5 * 4 + uVar31 * 0x10);
        iVar7 = *(int *)(&UNK_10e004e64 + (ulong)(bVar12 & 2 | bVar14 >> 1 & 1) * 4 + uVar31 * 0x10)
        ;
        uVar15 = (&UNK_10e004ac4)[iVar7 + iVar1];
        uVar16 = (&UNK_10e004ac4)[iVar7 + iVar2];
        uVar17 = (&UNK_10e004ac4)[iVar7 + iVar3];
        iVar7 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar12 >> 1 & 2 | bVar14 >> 2 & 1) * 4 + uVar31 * 0x10);
        uVar18 = (&UNK_10e004ac4)[iVar7 + iVar1];
        uVar19 = (&UNK_10e004ac4)[iVar7 + iVar2];
        uVar20 = (&UNK_10e004ac4)[iVar7 + iVar3];
        iVar7 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar12 >> 2 & 2 | bVar14 >> 3 & 1) * 4 + uVar31 * 0x10);
        uVar21 = (&UNK_10e004ac4)[iVar7 + iVar1];
        uVar22 = (&UNK_10e004ac4)[iVar7 + iVar2];
        uVar23 = (&UNK_10e004ac4)[iVar7 + iVar3];
        iVar7 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar12 >> 3 & 2 | bVar14 >> 4 & 1) * 4 + uVar31 * 0x10);
        uVar24 = (&UNK_10e004ac4)[iVar7 + iVar1];
        uVar25 = (&UNK_10e004ac4)[iVar7 + iVar2];
        uVar26 = (&UNK_10e004ac4)[iVar7 + iVar3];
        iVar7 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar12 >> 4 & 2 | bVar14 >> 5 & 1) * 4 + uVar31 * 0x10);
        uVar27 = (&UNK_10e004ac4)[iVar7 + iVar1];
        uVar28 = (&UNK_10e004ac4)[iVar7 + iVar2];
        *param_4 = CONCAT12((&UNK_10e004ac4)[iVar6 + iVar3],
                            CONCAT11((&UNK_10e004ac4)[iVar6 + iVar2],(&UNK_10e004ac4)[iVar6 + iVar1]
                                    )) | 0xff000000;
        param_4[1] = CONCAT12(uVar26,CONCAT11(uVar25,uVar24)) | 0xff000000;
        uVar24 = (&UNK_10e004ac4)[iVar7 + iVar3];
        param_4[4] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
        param_4[5] = CONCAT12(uVar24,CONCAT11(uVar28,uVar27)) | 0xff000000;
        iVar6 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar12 >> 5 & 2 | bVar14 >> 6 & 1) * 4 + uVar31 * 0x10);
        uVar15 = (&UNK_10e004ac4)[iVar6 + iVar1];
        uVar16 = (&UNK_10e004ac4)[iVar6 + iVar2];
        uVar17 = (&UNK_10e004ac4)[iVar6 + iVar3];
        param_4[8] = CONCAT12(uVar20,CONCAT11(uVar19,uVar18)) | 0xff000000;
        param_4[9] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
        iVar6 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar12 >> 6 & 2 | (uint)(bVar14 >> 7)) * 4 + uVar31 * 0x10);
        uVar15 = (&UNK_10e004ac4)[iVar6 + iVar1];
        uVar16 = (&UNK_10e004ac4)[iVar6 + iVar2];
        uVar17 = (&UNK_10e004ac4)[iVar6 + iVar3];
        iVar6 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar13 & 1 | (bVar11 & 1) << 1) * 4 + uVar33 * 0x10);
        iVar1 = uVar35 + 0xff;
        uVar18 = (&UNK_10e004ac4)[iVar6 + iVar1];
        iVar2 = uVar37 + 0xff;
        uVar19 = (&UNK_10e004ac4)[iVar6 + iVar2];
        iVar3 = uVar30 + 0xff;
        uVar20 = (&UNK_10e004ac4)[iVar6 + iVar3];
        param_4[0xc] = CONCAT12(uVar23,CONCAT11(uVar22,uVar21)) | 0xff000000;
        param_4[0xd] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
        iVar6 = *(int *)(&UNK_10e004e64 + (ulong)(bVar11 & 2 | bVar13 >> 1 & 1) * 4 + uVar33 * 0x10)
        ;
        uVar15 = (&UNK_10e004ac4)[iVar6 + iVar1];
        uVar16 = (&UNK_10e004ac4)[iVar6 + iVar2];
        uVar17 = (&UNK_10e004ac4)[iVar6 + iVar3];
        iVar6 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar11 >> 1 & 2 | bVar13 >> 2 & 1) * 4 + uVar33 * 0x10);
        uVar21 = (&UNK_10e004ac4)[iVar6 + iVar1];
        uVar22 = (&UNK_10e004ac4)[iVar6 + iVar2];
        uVar23 = (&UNK_10e004ac4)[iVar6 + iVar3];
        iVar6 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar11 >> 2 & 2 | bVar13 >> 3 & 1) * 4 + uVar33 * 0x10);
        param_4[0xe] = CONCAT12((&UNK_10e004ac4)[iVar6 + iVar3],
                                CONCAT11((&UNK_10e004ac4)[iVar6 + iVar2],
                                         (&UNK_10e004ac4)[iVar6 + iVar1])) | 0xff000000;
        iVar6 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar11 >> 3 & 2 | bVar13 >> 4 & 1) * 4 + uVar33 * 0x10);
        uVar24 = (&UNK_10e004ac4)[iVar6 + iVar1];
        uVar25 = (&UNK_10e004ac4)[iVar6 + iVar2];
        uVar26 = (&UNK_10e004ac4)[iVar6 + iVar3];
        iVar6 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar11 >> 4 & 2 | bVar13 >> 5 & 1) * 4 + uVar33 * 0x10);
        uVar27 = (&UNK_10e004ac4)[iVar6 + iVar1];
        uVar28 = (&UNK_10e004ac4)[iVar6 + iVar2];
        param_4[2] = CONCAT12(uVar20,CONCAT11(uVar19,uVar18)) | 0xff000000;
        param_4[3] = CONCAT12(uVar26,CONCAT11(uVar25,uVar24)) | 0xff000000;
        uVar18 = (&UNK_10e004ac4)[iVar6 + iVar3];
        param_4[6] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
        param_4[7] = CONCAT12(uVar18,CONCAT11(uVar28,uVar27)) | 0xff000000;
        iVar6 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar11 >> 5 & 2 | bVar13 >> 6 & 1) * 4 + uVar33 * 0x10);
        uVar15 = (&UNK_10e004ac4)[iVar6 + iVar1];
        uVar16 = (&UNK_10e004ac4)[iVar6 + iVar2];
        uVar17 = (&UNK_10e004ac4)[iVar6 + iVar3];
        param_4[10] = CONCAT12(uVar23,CONCAT11(uVar22,uVar21)) | 0xff000000;
        param_4[0xb] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
        uVar34 = (uint)(int)(char)bVar11 >> 0x1e;
      }
      else {
        iVar8 = *(int *)(&UNK_10e004e64 + (ulong)uVar5 * 4 + uVar31 * 0x10);
        iVar6 = *(int *)(&UNK_10e004e64 + (ulong)(bVar12 & 2 | bVar14 >> 1 & 1) * 4 + uVar31 * 0x10)
        ;
        uVar15 = (&UNK_10e004ac4)[iVar6 + iVar1];
        uVar16 = (&UNK_10e004ac4)[iVar6 + iVar2];
        uVar17 = (&UNK_10e004ac4)[iVar6 + iVar3];
        iVar9 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar12 >> 1 & 2 | bVar14 >> 2 & 1) * 4 + uVar33 * 0x10);
        iVar6 = uVar35 + 0xff;
        uVar18 = (&UNK_10e004ac4)[iVar9 + iVar6];
        iVar7 = uVar37 + 0xff;
        uVar19 = (&UNK_10e004ac4)[iVar9 + iVar7];
        iVar4 = uVar30 + 0xff;
        uVar20 = (&UNK_10e004ac4)[iVar9 + iVar4];
        iVar9 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar12 >> 2 & 2 | bVar14 >> 3 & 1) * 4 + uVar33 * 0x10);
        uVar21 = (&UNK_10e004ac4)[iVar9 + iVar6];
        uVar22 = (&UNK_10e004ac4)[iVar9 + iVar7];
        uVar23 = (&UNK_10e004ac4)[iVar9 + iVar4];
        iVar9 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar12 >> 3 & 2 | bVar14 >> 4 & 1) * 4 + uVar31 * 0x10);
        uVar24 = (&UNK_10e004ac4)[iVar9 + iVar1];
        uVar25 = (&UNK_10e004ac4)[iVar9 + iVar2];
        uVar26 = (&UNK_10e004ac4)[iVar9 + iVar3];
        *param_4 = CONCAT12((&UNK_10e004ac4)[iVar8 + iVar3],
                            CONCAT11((&UNK_10e004ac4)[iVar8 + iVar2],(&UNK_10e004ac4)[iVar8 + iVar1]
                                    )) | 0xff000000;
        param_4[1] = CONCAT12(uVar26,CONCAT11(uVar25,uVar24)) | 0xff000000;
        iVar8 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar12 >> 4 & 2 | bVar14 >> 5 & 1) * 4 + uVar31 * 0x10);
        uVar24 = (&UNK_10e004ac4)[iVar8 + iVar1];
        uVar25 = (&UNK_10e004ac4)[iVar8 + iVar2];
        uVar26 = (&UNK_10e004ac4)[iVar8 + iVar3];
        param_4[4] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
        param_4[5] = CONCAT12(uVar26,CONCAT11(uVar25,uVar24)) | 0xff000000;
        iVar8 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar12 >> 5 & 2 | bVar14 >> 6 & 1) * 4 + uVar33 * 0x10);
        uVar15 = (&UNK_10e004ac4)[iVar8 + iVar6];
        uVar16 = (&UNK_10e004ac4)[iVar8 + iVar7];
        uVar17 = (&UNK_10e004ac4)[iVar8 + iVar4];
        param_4[8] = CONCAT12(uVar20,CONCAT11(uVar19,uVar18)) | 0xff000000;
        param_4[9] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
        iVar8 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar12 >> 6 & 2 | (uint)(bVar14 >> 7)) * 4 + uVar33 * 0x10);
        uVar15 = (&UNK_10e004ac4)[iVar8 + iVar6];
        uVar16 = (&UNK_10e004ac4)[iVar8 + iVar7];
        uVar17 = (&UNK_10e004ac4)[iVar8 + iVar4];
        param_4[0xc] = CONCAT12(uVar23,CONCAT11(uVar22,uVar21)) | 0xff000000;
        param_4[0xd] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
        iVar8 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar13 & 1 | (bVar11 & 1) << 1) * 4 + uVar31 * 0x10);
        uVar15 = (&UNK_10e004ac4)[iVar8 + iVar1];
        uVar16 = (&UNK_10e004ac4)[iVar8 + iVar2];
        uVar17 = (&UNK_10e004ac4)[iVar8 + iVar3];
        iVar8 = *(int *)(&UNK_10e004e64 + (ulong)(bVar11 & 2 | bVar13 >> 1 & 1) * 4 + uVar31 * 0x10)
        ;
        uVar18 = (&UNK_10e004ac4)[iVar8 + iVar1];
        uVar19 = (&UNK_10e004ac4)[iVar8 + iVar2];
        uVar20 = (&UNK_10e004ac4)[iVar8 + iVar3];
        iVar8 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar11 >> 1 & 2 | bVar13 >> 2 & 1) * 4 + uVar33 * 0x10);
        uVar21 = (&UNK_10e004ac4)[iVar8 + iVar6];
        uVar22 = (&UNK_10e004ac4)[iVar8 + iVar7];
        uVar23 = (&UNK_10e004ac4)[iVar8 + iVar4];
        iVar8 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar11 >> 2 & 2 | bVar13 >> 3 & 1) * 4 + uVar33 * 0x10);
        iVar9 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar11 >> 3 & 2 | bVar13 >> 4 & 1) * 4 + uVar31 * 0x10);
        uVar24 = (&UNK_10e004ac4)[iVar9 + iVar1];
        param_4[0xe] = CONCAT12((&UNK_10e004ac4)[iVar8 + iVar4],
                                CONCAT11((&UNK_10e004ac4)[iVar8 + iVar7],
                                         (&UNK_10e004ac4)[iVar8 + iVar6])) | 0xff000000;
        uVar25 = (&UNK_10e004ac4)[iVar9 + iVar2];
        uVar26 = (&UNK_10e004ac4)[iVar9 + iVar3];
        param_4[2] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
        param_4[3] = CONCAT12(uVar26,CONCAT11(uVar25,uVar24)) | 0xff000000;
        iVar8 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar11 >> 4 & 2 | bVar13 >> 5 & 1) * 4 + uVar31 * 0x10);
        uVar15 = (&UNK_10e004ac4)[iVar8 + iVar1];
        uVar16 = (&UNK_10e004ac4)[iVar8 + iVar2];
        uVar17 = (&UNK_10e004ac4)[iVar8 + iVar3];
        param_4[6] = CONCAT12(uVar20,CONCAT11(uVar19,uVar18)) | 0xff000000;
        param_4[7] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
        iVar1 = *(int *)(&UNK_10e004e64 +
                        (ulong)(bVar11 >> 5 & 2 | bVar13 >> 6 & 1) * 4 + uVar33 * 0x10);
        uVar15 = (&UNK_10e004ac4)[iVar1 + iVar6];
        uVar16 = (&UNK_10e004ac4)[iVar1 + iVar7];
        uVar17 = (&UNK_10e004ac4)[iVar1 + iVar4];
        param_4[10] = CONCAT12(uVar23,CONCAT11(uVar22,uVar21)) | 0xff000000;
        param_4[0xb] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
        uVar34 = (uint)(bVar11 >> 6);
      }
      iVar1 = *(int *)(&UNK_10e004e64 +
                      (ulong)(uVar34 & 2 | (uint)(bVar13 >> 7)) * 4 + uVar33 * 0x10);
      param_4[0xf] = CONCAT12((&UNK_10e004ac4)[(int)(iVar1 + uVar30 + 0xff)],
                              CONCAT11((&UNK_10e004ac4)[(int)(iVar1 + uVar37 + 0xff)],
                                       (&UNK_10e004ac4)[(int)(iVar1 + uVar35 + 0xff)])) | 0xff000000
      ;
      return 1;
    }
  }
  else if ((param_2 >> 1 & 1) != 0) {
    bVar11 = *param_1;
    uVar35 = *(int *)(&UNK_10e004e44 + ((ulong)bVar11 & 7) * 4) + (bVar11 & 0xf8);
    if ((uVar35 & 0xff07) == 0) {
      bVar12 = param_1[1];
      uVar37 = *(int *)(&UNK_10e004e44 + ((ulong)bVar12 & 7) * 4) + (bVar12 & 0xf8);
      if ((uVar37 & 0xff07) == 0) {
        bVar13 = param_1[2];
        uVar30 = *(int *)(&UNK_10e004e44 + ((ulong)bVar13 & 7) * 4) + (bVar13 & 0xf8);
        if ((uVar30 & 0xff07) == 0) {
          uVar34 = bVar11 & 0xf8 | (uint)(bVar11 >> 5);
          uVar36 = bVar12 & 0xf8 | (uint)(bVar12 >> 5);
          uVar35 = uVar35 >> 5 & 7 | uVar35;
          uVar37 = uVar37 >> 5 & 7 | uVar37;
          uVar30 = uVar30 >> 5 & 7 | uVar30;
          uVar32 = bVar13 & 0xf8 | (uint)(bVar13 >> 5);
          goto LAB_10987863c;
        }
      }
    }
  }
  return 0;
}



/* Entry: 109879130; end: 1098792cf;  */

void FUN_109879130(byte *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  
  lVar19 = 0;
  bVar4 = param_1[5];
  bVar5 = *param_1;
  uVar14 = bVar5 >> 5 & 3;
  uVar1 = bVar5 & 1;
  bVar6 = param_1[1];
  bVar7 = param_1[3];
  bVar8 = param_1[7];
  bVar9 = param_1[4];
  bVar10 = param_1[6];
  uVar11 = uVar1 * 0x204 + (bVar6 >> 1 & 0x3f) * 8 | 2;
  uVar1 = uVar1 | uVar1 << 7;
  uVar2 = param_1[2] & 0x18 | (bVar6 & 1) << 5;
  uVar3 = uVar2 | (uint)(bVar7 >> 7) | (param_1[2] & 3) << 1;
  uVar12 = (uVar2 >> 4) << 2 | uVar3 << 4 | 2;
  uVar13 = (bVar5 & 0x7e) << 3 | (bVar5 >> 5 & 3) << 2 | 2;
  do {
    lVar15 = 0;
    uVar18 = uVar11;
    uVar17 = uVar12;
    uVar16 = uVar13;
    do {
      *(uint *)(param_2 + lVar15) =
           CONCAT12((&UNK_10e004bc3)[(int)uVar17 >> 2],
                    CONCAT11((&UNK_10e004bc3)[(int)uVar18 >> 2],(&UNK_10e004bc3)[(int)uVar16 >> 2]))
           | 0xff000000;
      lVar15 = lVar15 + 4;
      uVar18 = uVar18 + (((bVar9 & 0xfe | (uint)(bVar9 >> 7)) - (bVar6 & 0x7e)) - uVar1);
      uVar17 = uVar17 + ((((uint)(bVar4 >> 3) | (bVar9 & 1) << 5) >> 4 | (bVar9 & 1) << 7 |
                         (uint)(bVar4 >> 3) << 2) - (uVar2 >> 4)) + uVar3 * -4;
      uVar16 = uVar16 + (((bVar7 & 0x7c) << 1 | (bVar7 & 1) << 2 | bVar7 >> 5 & 3) - uVar14) +
                        (bVar5 & 0x7e) * -2;
    } while (lVar15 != 0x10);
    lVar19 = lVar19 + 1;
    param_2 = param_2 + 0x10;
    uVar11 = uVar11 + (((((uint)(bVar8 >> 5) | (uint)bVar10 << 3) & 0xfe | bVar10 >> 4 & 1) -
                       (bVar6 & 0x7e)) - uVar1);
    uVar12 = uVar12 + ((bVar8 >> 4 & 3 | (bVar8 & 0x3f) << 2) - (uVar2 >> 4)) + uVar3 * -4;
    uVar13 = uVar13 + ((((uint)(bVar10 >> 3) | (uint)bVar4 << 5) & 0xfc | bVar4 >> 1 & 3) - uVar14)
                      + (bVar5 & 0x7e) * -2;
  } while (lVar19 != 4);
  return;
}



/* Entry: 1098792d0; end: 10987935b;  */

undefined4 FUN_1098792d0(byte *param_1)

{
  undefined4 uVar1;
  
  if ((param_1[3] >> 1 & 1) == 0) {
    return 0;
  }
  if (((*param_1 & 0xf8) + *(int *)(&UNK_10e004e44 + ((ulong)*param_1 & 7) * 4) & 0xff07) != 0) {
    return 2;
  }
  if (((param_1[1] & 0xf8) + *(int *)(&UNK_10e004e44 + ((ulong)param_1[1] & 7) * 4) & 0xff07) != 0)
  {
    return 3;
  }
  uVar1 = 4;
  if (((param_1[2] & 0xf8) + *(int *)(&UNK_10e004e44 + ((ulong)param_1[2] & 7) * 4) & 0xff07) == 0)
  {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10987935c; end: 109879bc3;  */

void FUN_10987935c(byte *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  byte bVar39;
  ulong uVar40;
  uint uVar41;
  
  bVar17 = param_1[3];
  bVar18 = *param_1;
  bVar19 = param_1[1];
  bVar20 = param_1[2];
  uVar5 = *(int *)(&UNK_10e004e44 + ((ulong)bVar18 & 7) * 4) + (bVar18 & 0xf8);
  uVar5 = uVar5 >> 5 & 7 | uVar5;
  uVar6 = *(int *)(&UNK_10e004e44 + ((ulong)bVar19 & 7) * 4) + (bVar19 & 0xf8);
  uVar6 = uVar6 >> 5 & 7 | uVar6;
  uVar7 = *(int *)(&UNK_10e004e44 + ((ulong)bVar20 & 7) * 4) + (bVar20 & 0xf8);
  uVar7 = uVar7 >> 5 & 7 | uVar7;
  bVar39 = bVar17 >> 5;
  uVar40 = (ulong)(bVar17 >> 2) & 7;
  bVar21 = param_1[4];
  bVar22 = param_1[5];
  bVar23 = param_1[6];
  bVar24 = param_1[7];
  uVar41 = bVar24 & 1 | (bVar22 & 1) << 1;
  iVar1 = (bVar18 & 0xf8 | (uint)(bVar18 >> 5)) + 0xff;
  iVar2 = (bVar19 & 0xf8 | (uint)(bVar19 >> 5)) + 0xff;
  iVar3 = (bVar20 & 0xf8 | (uint)(bVar20 >> 5)) + 0xff;
  if ((bVar17 & 1) == 0) {
    iVar9 = *(int *)(&UNK_10e004f04 + (ulong)uVar41 * 4 + (ulong)bVar39 * 0x10);
    uVar8 = bVar22 & 2 | bVar24 >> 1 & 1;
    iVar10 = *(int *)(&UNK_10e004f04 + (ulong)uVar8 * 4 + (ulong)bVar39 * 0x10);
    uVar25 = (&UNK_10e004ac4)[iVar10 + iVar1];
    uVar26 = (&UNK_10e004ac4)[iVar10 + iVar2];
    uVar27 = (&UNK_10e004ac4)[iVar10 + iVar3];
    uVar11 = *(uint *)(&UNK_10e004f84 + (ulong)uVar8 * 4);
    uVar8 = bVar22 >> 1 & 2 | bVar24 >> 2 & 1;
    iVar10 = *(int *)(&UNK_10e004f04 + (ulong)uVar8 * 4 + (ulong)bVar39 * 0x10);
    uVar28 = (&UNK_10e004ac4)[iVar10 + iVar1];
    uVar29 = (&UNK_10e004ac4)[iVar10 + iVar2];
    uVar30 = (&UNK_10e004ac4)[iVar10 + iVar3];
    uVar12 = *(uint *)(&UNK_10e004f84 + (ulong)uVar8 * 4);
    uVar8 = bVar22 >> 2 & 2 | bVar24 >> 3 & 1;
    iVar10 = *(int *)(&UNK_10e004f04 + (ulong)uVar8 * 4 + (ulong)bVar39 * 0x10);
    uVar31 = (&UNK_10e004ac4)[iVar10 + iVar1];
    uVar32 = (&UNK_10e004ac4)[iVar10 + iVar2];
    uVar33 = (&UNK_10e004ac4)[iVar10 + iVar3];
    uVar13 = *(uint *)(&UNK_10e004f84 + (ulong)uVar8 * 4);
    uVar8 = bVar22 >> 3 & 2 | bVar24 >> 4 & 1;
    iVar10 = *(int *)(&UNK_10e004f04 + (ulong)uVar8 * 4 + (ulong)bVar39 * 0x10);
    uVar34 = (&UNK_10e004ac4)[iVar10 + iVar1];
    uVar35 = (&UNK_10e004ac4)[iVar10 + iVar2];
    uVar36 = (&UNK_10e004ac4)[iVar10 + iVar3];
    uVar14 = *(uint *)(&UNK_10e004f84 + (ulong)uVar8 * 4);
    uVar8 = bVar22 >> 4 & 2 | bVar24 >> 5 & 1;
    iVar10 = *(int *)(&UNK_10e004f04 + (ulong)uVar8 * 4 + (ulong)bVar39 * 0x10);
    uVar37 = (&UNK_10e004ac4)[iVar10 + iVar1];
    *param_2 = (CONCAT12((&UNK_10e004ac4)[iVar9 + iVar3],
                         CONCAT11((&UNK_10e004ac4)[iVar9 + iVar2],(&UNK_10e004ac4)[iVar9 + iVar1]))
               | 0xff000000) & *(uint *)(&UNK_10e004f84 + (ulong)uVar41 * 4);
    param_2[1] = (CONCAT12(uVar36,CONCAT11(uVar35,uVar34)) | 0xff000000) & uVar14;
    uVar34 = (&UNK_10e004ac4)[iVar10 + iVar2];
    uVar35 = (&UNK_10e004ac4)[iVar10 + iVar3];
    uVar41 = *(uint *)(&UNK_10e004f84 + (ulong)uVar8 * 4);
    param_2[4] = (CONCAT12(uVar27,CONCAT11(uVar26,uVar25)) | 0xff000000) & uVar11;
    param_2[5] = (CONCAT12(uVar35,CONCAT11(uVar34,uVar37)) | 0xff000000) & uVar41;
    uVar41 = bVar22 >> 5 & 2 | bVar24 >> 6 & 1;
    iVar9 = *(int *)(&UNK_10e004f04 + (ulong)uVar41 * 4 + (ulong)bVar39 * 0x10);
    uVar25 = (&UNK_10e004ac4)[iVar9 + iVar1];
    uVar26 = (&UNK_10e004ac4)[iVar9 + iVar2];
    uVar27 = (&UNK_10e004ac4)[iVar9 + iVar3];
    uVar41 = *(uint *)(&UNK_10e004f84 + (ulong)uVar41 * 4);
    param_2[8] = (CONCAT12(uVar30,CONCAT11(uVar29,uVar28)) | 0xff000000) & uVar12;
    param_2[9] = (CONCAT12(uVar27,CONCAT11(uVar26,uVar25)) | 0xff000000) & uVar41;
    uVar41 = bVar22 >> 6 & 2 | (uint)(bVar24 >> 7);
    iVar9 = *(int *)(&UNK_10e004f04 + (ulong)uVar41 * 4 + (ulong)bVar39 * 0x10);
    uVar25 = (&UNK_10e004ac4)[iVar9 + iVar1];
    uVar26 = (&UNK_10e004ac4)[iVar9 + iVar2];
    uVar27 = (&UNK_10e004ac4)[iVar9 + iVar3];
    uVar41 = *(uint *)(&UNK_10e004f84 + (ulong)uVar41 * 4);
    param_2[0xc] = (CONCAT12(uVar33,CONCAT11(uVar32,uVar31)) | 0xff000000) & uVar13;
    param_2[0xd] = (CONCAT12(uVar27,CONCAT11(uVar26,uVar25)) | 0xff000000) & uVar41;
    uVar41 = bVar23 & 1 | (bVar21 & 1) << 1;
    iVar9 = *(int *)(&UNK_10e004f04 + (ulong)uVar41 * 4 + uVar40 * 0x10);
    iVar1 = uVar5 + 0xff;
    uVar25 = (&UNK_10e004ac4)[iVar9 + iVar1];
    iVar2 = uVar6 + 0xff;
    uVar26 = (&UNK_10e004ac4)[iVar9 + iVar2];
    iVar3 = uVar7 + 0xff;
    uVar27 = (&UNK_10e004ac4)[iVar9 + iVar3];
    uVar8 = *(uint *)(&UNK_10e004f84 + (ulong)uVar41 * 4);
    uVar41 = bVar21 & 2 | bVar23 >> 1 & 1;
    iVar9 = *(int *)(&UNK_10e004f04 + (ulong)uVar41 * 4 + uVar40 * 0x10);
    uVar28 = (&UNK_10e004ac4)[iVar9 + iVar1];
    uVar29 = (&UNK_10e004ac4)[iVar9 + iVar2];
    uVar30 = (&UNK_10e004ac4)[iVar9 + iVar3];
    uVar11 = *(uint *)(&UNK_10e004f84 + (ulong)uVar41 * 4);
    uVar41 = bVar21 >> 1 & 2 | bVar23 >> 2 & 1;
    iVar9 = *(int *)(&UNK_10e004f04 + (ulong)uVar41 * 4 + uVar40 * 0x10);
    uVar31 = (&UNK_10e004ac4)[iVar9 + iVar1];
    uVar32 = (&UNK_10e004ac4)[iVar9 + iVar2];
    uVar33 = (&UNK_10e004ac4)[iVar9 + iVar3];
    uVar12 = *(uint *)(&UNK_10e004f84 + (ulong)uVar41 * 4);
    uVar41 = bVar21 >> 2 & 2 | bVar23 >> 3 & 1;
    iVar9 = *(int *)(&UNK_10e004f04 + (ulong)uVar41 * 4 + uVar40 * 0x10);
    param_2[0xe] = (CONCAT12((&UNK_10e004ac4)[iVar9 + iVar3],
                             CONCAT11((&UNK_10e004ac4)[iVar9 + iVar2],
                                      (&UNK_10e004ac4)[iVar9 + iVar1])) | 0xff000000) &
                   *(uint *)(&UNK_10e004f84 + (ulong)uVar41 * 4);
    uVar41 = bVar21 >> 3 & 2 | bVar23 >> 4 & 1;
    iVar9 = *(int *)(&UNK_10e004f04 + (ulong)uVar41 * 4 + uVar40 * 0x10);
    uVar34 = (&UNK_10e004ac4)[iVar9 + iVar1];
    uVar35 = (&UNK_10e004ac4)[iVar9 + iVar2];
    uVar36 = (&UNK_10e004ac4)[iVar9 + iVar3];
    uVar13 = *(uint *)(&UNK_10e004f84 + (ulong)uVar41 * 4);
    uVar41 = bVar21 >> 4 & 2 | bVar23 >> 5 & 1;
    iVar9 = *(int *)(&UNK_10e004f04 + (ulong)uVar41 * 4 + uVar40 * 0x10);
    uVar37 = (&UNK_10e004ac4)[iVar9 + iVar1];
    uVar38 = (&UNK_10e004ac4)[iVar9 + iVar2];
    param_2[2] = (CONCAT12(uVar27,CONCAT11(uVar26,uVar25)) | 0xff000000) & uVar8;
    param_2[3] = (CONCAT12(uVar36,CONCAT11(uVar35,uVar34)) | 0xff000000) & uVar13;
    uVar25 = (&UNK_10e004ac4)[iVar9 + iVar3];
    uVar41 = *(uint *)(&UNK_10e004f84 + (ulong)uVar41 * 4);
    param_2[6] = (CONCAT12(uVar30,CONCAT11(uVar29,uVar28)) | 0xff000000) & uVar11;
    param_2[7] = (CONCAT12(uVar25,CONCAT11(uVar38,uVar37)) | 0xff000000) & uVar41;
    uVar41 = bVar21 >> 5 & 2 | bVar23 >> 6 & 1;
    iVar9 = *(int *)(&UNK_10e004f04 + (ulong)uVar41 * 4 + uVar40 * 0x10);
    uVar25 = (&UNK_10e004ac4)[iVar9 + iVar1];
    uVar26 = (&UNK_10e004ac4)[iVar9 + iVar2];
    uVar27 = (&UNK_10e004ac4)[iVar9 + iVar3];
    uVar41 = *(uint *)(&UNK_10e004f84 + (ulong)uVar41 * 4);
    param_2[10] = (CONCAT12(uVar33,CONCAT11(uVar32,uVar31)) | 0xff000000) & uVar12;
    param_2[0xb] = (CONCAT12(uVar27,CONCAT11(uVar26,uVar25)) | 0xff000000) & uVar41;
    uVar41 = (uint)(int)(char)bVar21 >> 0x1e;
  }
  else {
    iVar15 = *(int *)(&UNK_10e004f04 + (ulong)uVar41 * 4 + (ulong)bVar39 * 0x10);
    uVar8 = bVar22 & 2 | bVar24 >> 1 & 1;
    iVar9 = *(int *)(&UNK_10e004f04 + (ulong)uVar8 * 4 + (ulong)bVar39 * 0x10);
    uVar25 = (&UNK_10e004ac4)[iVar9 + iVar1];
    uVar26 = (&UNK_10e004ac4)[iVar9 + iVar2];
    uVar27 = (&UNK_10e004ac4)[iVar9 + iVar3];
    uVar11 = *(uint *)(&UNK_10e004f84 + (ulong)uVar8 * 4);
    uVar8 = bVar22 >> 1 & 2 | bVar24 >> 2 & 1;
    iVar16 = *(int *)(&UNK_10e004f04 + (ulong)uVar8 * 4 + uVar40 * 0x10);
    iVar9 = uVar5 + 0xff;
    uVar28 = (&UNK_10e004ac4)[iVar16 + iVar9];
    iVar10 = uVar6 + 0xff;
    uVar29 = (&UNK_10e004ac4)[iVar16 + iVar10];
    iVar4 = uVar7 + 0xff;
    uVar30 = (&UNK_10e004ac4)[iVar16 + iVar4];
    uVar12 = *(uint *)(&UNK_10e004f84 + (ulong)uVar8 * 4);
    uVar8 = bVar22 >> 2 & 2 | bVar24 >> 3 & 1;
    iVar16 = *(int *)(&UNK_10e004f04 + (ulong)uVar8 * 4 + uVar40 * 0x10);
    uVar31 = (&UNK_10e004ac4)[iVar16 + iVar9];
    uVar32 = (&UNK_10e004ac4)[iVar16 + iVar10];
    uVar33 = (&UNK_10e004ac4)[iVar16 + iVar4];
    uVar13 = *(uint *)(&UNK_10e004f84 + (ulong)uVar8 * 4);
    uVar8 = bVar22 >> 3 & 2 | bVar24 >> 4 & 1;
    iVar16 = *(int *)(&UNK_10e004f04 + (ulong)uVar8 * 4 + (ulong)bVar39 * 0x10);
    uVar34 = (&UNK_10e004ac4)[iVar16 + iVar1];
    uVar35 = (&UNK_10e004ac4)[iVar16 + iVar2];
    uVar36 = (&UNK_10e004ac4)[iVar16 + iVar3];
    uVar14 = *(uint *)(&UNK_10e004f84 + (ulong)uVar8 * 4);
    uVar8 = bVar22 >> 4 & 2 | bVar24 >> 5 & 1;
    iVar16 = *(int *)(&UNK_10e004f04 + (ulong)uVar8 * 4 + (ulong)bVar39 * 0x10);
    uVar37 = (&UNK_10e004ac4)[iVar16 + iVar1];
    uVar38 = (&UNK_10e004ac4)[iVar16 + iVar2];
    *param_2 = (CONCAT12((&UNK_10e004ac4)[iVar15 + iVar3],
                         CONCAT11((&UNK_10e004ac4)[iVar15 + iVar2],(&UNK_10e004ac4)[iVar15 + iVar1])
                        ) | 0xff000000) & *(uint *)(&UNK_10e004f84 + (ulong)uVar41 * 4);
    param_2[1] = (CONCAT12(uVar36,CONCAT11(uVar35,uVar34)) | 0xff000000) & uVar14;
    uVar34 = (&UNK_10e004ac4)[iVar16 + iVar3];
    uVar41 = *(uint *)(&UNK_10e004f84 + (ulong)uVar8 * 4);
    param_2[4] = (CONCAT12(uVar27,CONCAT11(uVar26,uVar25)) | 0xff000000) & uVar11;
    param_2[5] = (CONCAT12(uVar34,CONCAT11(uVar38,uVar37)) | 0xff000000) & uVar41;
    uVar41 = bVar22 >> 5 & 2 | bVar24 >> 6 & 1;
    iVar15 = *(int *)(&UNK_10e004f04 + (ulong)uVar41 * 4 + uVar40 * 0x10);
    uVar25 = (&UNK_10e004ac4)[iVar15 + iVar9];
    uVar26 = (&UNK_10e004ac4)[iVar15 + iVar10];
    uVar27 = (&UNK_10e004ac4)[iVar15 + iVar4];
    uVar41 = *(uint *)(&UNK_10e004f84 + (ulong)uVar41 * 4);
    param_2[8] = (CONCAT12(uVar30,CONCAT11(uVar29,uVar28)) | 0xff000000) & uVar12;
    param_2[9] = (CONCAT12(uVar27,CONCAT11(uVar26,uVar25)) | 0xff000000) & uVar41;
    uVar41 = bVar22 >> 6 & 2 | (uint)(bVar24 >> 7);
    iVar15 = *(int *)(&UNK_10e004f04 + (ulong)uVar41 * 4 + uVar40 * 0x10);
    uVar25 = (&UNK_10e004ac4)[iVar15 + iVar9];
    uVar26 = (&UNK_10e004ac4)[iVar15 + iVar10];
    uVar27 = (&UNK_10e004ac4)[iVar15 + iVar4];
    uVar41 = *(uint *)(&UNK_10e004f84 + (ulong)uVar41 * 4);
    param_2[0xc] = (CONCAT12(uVar33,CONCAT11(uVar32,uVar31)) | 0xff000000) & uVar13;
    param_2[0xd] = (CONCAT12(uVar27,CONCAT11(uVar26,uVar25)) | 0xff000000) & uVar41;
    uVar41 = bVar23 & 1 | (bVar21 & 1) << 1;
    iVar15 = *(int *)(&UNK_10e004f04 + (ulong)uVar41 * 4 + (ulong)bVar39 * 0x10);
    uVar25 = (&UNK_10e004ac4)[iVar15 + iVar1];
    uVar26 = (&UNK_10e004ac4)[iVar15 + iVar2];
    uVar27 = (&UNK_10e004ac4)[iVar15 + iVar3];
    uVar8 = *(uint *)(&UNK_10e004f84 + (ulong)uVar41 * 4);
    uVar41 = bVar21 & 2 | bVar23 >> 1 & 1;
    iVar15 = *(int *)(&UNK_10e004f04 + (ulong)uVar41 * 4 + (ulong)bVar39 * 0x10);
    uVar28 = (&UNK_10e004ac4)[iVar15 + iVar1];
    uVar29 = (&UNK_10e004ac4)[iVar15 + iVar2];
    uVar30 = (&UNK_10e004ac4)[iVar15 + iVar3];
    uVar11 = *(uint *)(&UNK_10e004f84 + (ulong)uVar41 * 4);
    uVar41 = bVar21 >> 1 & 2 | bVar23 >> 2 & 1;
    iVar15 = *(int *)(&UNK_10e004f04 + (ulong)uVar41 * 4 + uVar40 * 0x10);
    uVar31 = (&UNK_10e004ac4)[iVar15 + iVar9];
    uVar32 = (&UNK_10e004ac4)[iVar15 + iVar10];
    uVar33 = (&UNK_10e004ac4)[iVar15 + iVar4];
    uVar12 = *(uint *)(&UNK_10e004f84 + (ulong)uVar41 * 4);
    uVar41 = bVar21 >> 2 & 2 | bVar23 >> 3 & 1;
    iVar15 = *(int *)(&UNK_10e004f04 + (ulong)uVar41 * 4 + uVar40 * 0x10);
    param_2[0xe] = (CONCAT12((&UNK_10e004ac4)[iVar15 + iVar4],
                             CONCAT11((&UNK_10e004ac4)[iVar15 + iVar10],
                                      (&UNK_10e004ac4)[iVar15 + iVar9])) | 0xff000000) &
                   *(uint *)(&UNK_10e004f84 + (ulong)uVar41 * 4);
    uVar41 = bVar21 >> 3 & 2 | bVar23 >> 4 & 1;
    iVar15 = *(int *)(&UNK_10e004f04 + (ulong)uVar41 * 4 + (ulong)bVar39 * 0x10);
    uVar34 = (&UNK_10e004ac4)[iVar15 + iVar1];
    uVar35 = (&UNK_10e004ac4)[iVar15 + iVar2];
    uVar36 = (&UNK_10e004ac4)[iVar15 + iVar3];
    uVar41 = *(uint *)(&UNK_10e004f84 + (ulong)uVar41 * 4);
    param_2[2] = (CONCAT12(uVar27,CONCAT11(uVar26,uVar25)) | 0xff000000) & uVar8;
    param_2[3] = (CONCAT12(uVar36,CONCAT11(uVar35,uVar34)) | 0xff000000) & uVar41;
    uVar41 = bVar21 >> 4 & 2 | bVar23 >> 5 & 1;
    iVar15 = *(int *)(&UNK_10e004f04 + (ulong)uVar41 * 4 + (ulong)bVar39 * 0x10);
    uVar25 = (&UNK_10e004ac4)[iVar15 + iVar1];
    uVar26 = (&UNK_10e004ac4)[iVar15 + iVar2];
    uVar27 = (&UNK_10e004ac4)[iVar15 + iVar3];
    uVar8 = *(uint *)(&UNK_10e004f84 + (ulong)uVar41 * 4);
    uVar41 = bVar21 >> 5 & 2 | bVar23 >> 6 & 1;
    iVar1 = *(int *)(&UNK_10e004f04 + (ulong)uVar41 * 4 + uVar40 * 0x10);
    uVar34 = (&UNK_10e004ac4)[iVar1 + iVar9];
    uVar35 = (&UNK_10e004ac4)[iVar1 + iVar10];
    uVar36 = (&UNK_10e004ac4)[iVar1 + iVar4];
    param_2[6] = (CONCAT12(uVar30,CONCAT11(uVar29,uVar28)) | 0xff000000) & uVar11;
    param_2[7] = (CONCAT12(uVar27,CONCAT11(uVar26,uVar25)) | 0xff000000) & uVar8;
    uVar41 = *(uint *)(&UNK_10e004f84 + (ulong)uVar41 * 4);
    param_2[10] = (CONCAT12(uVar33,CONCAT11(uVar32,uVar31)) | 0xff000000) & uVar12;
    param_2[0xb] = (CONCAT12(uVar36,CONCAT11(uVar35,uVar34)) | 0xff000000) & uVar41;
    uVar41 = (uint)(bVar21 >> 6);
  }
  uVar41 = uVar41 & 2 | (uint)(bVar23 >> 7);
  iVar1 = *(int *)(&UNK_10e004f04 + (ulong)uVar41 * 4 + uVar40 * 0x10);
  param_2[0xf] = (CONCAT12((&UNK_10e004ac4)[(int)(iVar1 + uVar7 + 0xff)],
                           CONCAT11((&UNK_10e004ac4)[(int)(iVar1 + uVar6 + 0xff)],
                                    (&UNK_10e004ac4)[(int)(iVar1 + uVar5 + 0xff)])) | 0xff000000) &
                 *(uint *)(&UNK_10e004f84 + (ulong)uVar41 * 4);
  return;
}



/* Entry: 109879bc4; end: 109879f6b;  */

undefined8 FUN_109879bc4(byte *param_1,uint param_2,uint param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined8 uVar29;
  uint uVar30;
  ulong uVar31;
  uint uVar32;
  ulong uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  
  bVar14 = param_1[3];
  if ((((param_3 >> 2 & 1) != 0) && ((bVar14 & 2) != 0)) ||
     (((param_3 >> 1 & 1) != 0 && ((bVar14 & 2) == 0)))) {
    return 0;
  }
  if (((*param_1 & 0xf8) + *(int *)(&UNK_10e004e44 + ((ulong)*param_1 & 7) * 4) & 0xff07) == 0) {
    if (((param_1[1] & 0xf8) + *(int *)(&UNK_10e004e44 + ((ulong)param_1[1] & 7) * 4) & 0xff07) == 0
       ) {
      if (((param_1[2] & 0xf8) + *(int *)(&UNK_10e004e44 + ((ulong)param_1[2] & 7) * 4) & 0xff07) !=
          0) {
        if ((param_2 >> 4 & 1) == 0) {
          return 0;
        }
        if ((param_3 >> 2 & 1) == 0) {
          FUN_109879130(param_1,param_4);
          return 1;
        }
        return 0;
      }
      if ((bVar14 >> 1 & 1) == 0) {
        if ((param_2 >> 1 & 1) != 0) {
          FUN_10987935c(param_1,param_4);
          return 1;
        }
        return 0;
      }
      bVar14 = param_1[3];
      if ((bVar14 >> 1 & 1) == 0) {
        if ((param_2 & 1) != 0) {
          bVar10 = *param_1;
          uVar34 = bVar10 & 0xf0 | (uint)(bVar10 >> 4);
          bVar11 = param_1[1];
          uVar36 = bVar11 & 0xf0 | (uint)(bVar11 >> 4);
          bVar12 = param_1[2];
          uVar32 = bVar12 & 0xf0 | (uint)(bVar12 >> 4);
          uVar35 = bVar10 & 0xf;
          uVar35 = uVar35 | uVar35 << 4;
          uVar37 = bVar11 & 0xf;
          uVar37 = uVar37 | uVar37 << 4;
          uVar30 = bVar12 & 0xf;
          uVar30 = uVar30 | uVar30 << 4;
LAB_10987863c:
          uVar31 = (ulong)(bVar14 >> 5);
          uVar33 = (ulong)(bVar14 >> 2 & 7);
          bVar10 = param_1[4];
          bVar11 = param_1[5];
          bVar12 = param_1[6];
          bVar13 = param_1[7];
          uVar5 = bVar13 & 1 | (bVar11 & 1) << 1;
          iVar1 = uVar34 + 0xff;
          iVar2 = uVar36 + 0xff;
          iVar3 = uVar32 + 0xff;
          if ((bVar14 & 1) == 0) {
            iVar6 = *(int *)(&UNK_10e004e64 + (ulong)uVar5 * 4 + uVar31 * 0x10);
            iVar7 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar11 & 2 | bVar13 >> 1 & 1) * 4 + uVar31 * 0x10);
            uVar15 = (&UNK_10e004ac4)[iVar7 + iVar1];
            uVar16 = (&UNK_10e004ac4)[iVar7 + iVar2];
            uVar17 = (&UNK_10e004ac4)[iVar7 + iVar3];
            iVar7 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar11 >> 1 & 2 | bVar13 >> 2 & 1) * 4 + uVar31 * 0x10);
            uVar18 = (&UNK_10e004ac4)[iVar7 + iVar1];
            uVar19 = (&UNK_10e004ac4)[iVar7 + iVar2];
            uVar20 = (&UNK_10e004ac4)[iVar7 + iVar3];
            iVar7 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar11 >> 2 & 2 | bVar13 >> 3 & 1) * 4 + uVar31 * 0x10);
            uVar21 = (&UNK_10e004ac4)[iVar7 + iVar1];
            uVar22 = (&UNK_10e004ac4)[iVar7 + iVar2];
            uVar23 = (&UNK_10e004ac4)[iVar7 + iVar3];
            iVar7 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar11 >> 3 & 2 | bVar13 >> 4 & 1) * 4 + uVar31 * 0x10);
            uVar24 = (&UNK_10e004ac4)[iVar7 + iVar1];
            uVar25 = (&UNK_10e004ac4)[iVar7 + iVar2];
            uVar26 = (&UNK_10e004ac4)[iVar7 + iVar3];
            iVar7 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar11 >> 4 & 2 | bVar13 >> 5 & 1) * 4 + uVar31 * 0x10);
            uVar27 = (&UNK_10e004ac4)[iVar7 + iVar1];
            uVar28 = (&UNK_10e004ac4)[iVar7 + iVar2];
            *param_4 = CONCAT12((&UNK_10e004ac4)[iVar6 + iVar3],
                                CONCAT11((&UNK_10e004ac4)[iVar6 + iVar2],
                                         (&UNK_10e004ac4)[iVar6 + iVar1])) | 0xff000000;
            param_4[1] = CONCAT12(uVar26,CONCAT11(uVar25,uVar24)) | 0xff000000;
            uVar24 = (&UNK_10e004ac4)[iVar7 + iVar3];
            param_4[4] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
            param_4[5] = CONCAT12(uVar24,CONCAT11(uVar28,uVar27)) | 0xff000000;
            iVar6 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar11 >> 5 & 2 | bVar13 >> 6 & 1) * 4 + uVar31 * 0x10);
            uVar15 = (&UNK_10e004ac4)[iVar6 + iVar1];
            uVar16 = (&UNK_10e004ac4)[iVar6 + iVar2];
            uVar17 = (&UNK_10e004ac4)[iVar6 + iVar3];
            param_4[8] = CONCAT12(uVar20,CONCAT11(uVar19,uVar18)) | 0xff000000;
            param_4[9] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
            iVar6 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar11 >> 6 & 2 | (uint)(bVar13 >> 7)) * 4 + uVar31 * 0x10);
            uVar15 = (&UNK_10e004ac4)[iVar6 + iVar1];
            uVar16 = (&UNK_10e004ac4)[iVar6 + iVar2];
            uVar17 = (&UNK_10e004ac4)[iVar6 + iVar3];
            iVar6 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar12 & 1 | (bVar10 & 1) << 1) * 4 + uVar33 * 0x10);
            iVar1 = uVar35 + 0xff;
            uVar18 = (&UNK_10e004ac4)[iVar6 + iVar1];
            iVar2 = uVar37 + 0xff;
            uVar19 = (&UNK_10e004ac4)[iVar6 + iVar2];
            iVar3 = uVar30 + 0xff;
            uVar20 = (&UNK_10e004ac4)[iVar6 + iVar3];
            param_4[0xc] = CONCAT12(uVar23,CONCAT11(uVar22,uVar21)) | 0xff000000;
            param_4[0xd] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
            iVar6 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar10 & 2 | bVar12 >> 1 & 1) * 4 + uVar33 * 0x10);
            uVar15 = (&UNK_10e004ac4)[iVar6 + iVar1];
            uVar16 = (&UNK_10e004ac4)[iVar6 + iVar2];
            uVar17 = (&UNK_10e004ac4)[iVar6 + iVar3];
            iVar6 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar10 >> 1 & 2 | bVar12 >> 2 & 1) * 4 + uVar33 * 0x10);
            uVar21 = (&UNK_10e004ac4)[iVar6 + iVar1];
            uVar22 = (&UNK_10e004ac4)[iVar6 + iVar2];
            uVar23 = (&UNK_10e004ac4)[iVar6 + iVar3];
            iVar6 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar10 >> 2 & 2 | bVar12 >> 3 & 1) * 4 + uVar33 * 0x10);
            param_4[0xe] = CONCAT12((&UNK_10e004ac4)[iVar6 + iVar3],
                                    CONCAT11((&UNK_10e004ac4)[iVar6 + iVar2],
                                             (&UNK_10e004ac4)[iVar6 + iVar1])) | 0xff000000;
            iVar6 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar10 >> 3 & 2 | bVar12 >> 4 & 1) * 4 + uVar33 * 0x10);
            uVar24 = (&UNK_10e004ac4)[iVar6 + iVar1];
            uVar25 = (&UNK_10e004ac4)[iVar6 + iVar2];
            uVar26 = (&UNK_10e004ac4)[iVar6 + iVar3];
            iVar6 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar10 >> 4 & 2 | bVar12 >> 5 & 1) * 4 + uVar33 * 0x10);
            uVar27 = (&UNK_10e004ac4)[iVar6 + iVar1];
            uVar28 = (&UNK_10e004ac4)[iVar6 + iVar2];
            param_4[2] = CONCAT12(uVar20,CONCAT11(uVar19,uVar18)) | 0xff000000;
            param_4[3] = CONCAT12(uVar26,CONCAT11(uVar25,uVar24)) | 0xff000000;
            uVar18 = (&UNK_10e004ac4)[iVar6 + iVar3];
            param_4[6] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
            param_4[7] = CONCAT12(uVar18,CONCAT11(uVar28,uVar27)) | 0xff000000;
            iVar6 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar10 >> 5 & 2 | bVar12 >> 6 & 1) * 4 + uVar33 * 0x10);
            uVar15 = (&UNK_10e004ac4)[iVar6 + iVar1];
            uVar16 = (&UNK_10e004ac4)[iVar6 + iVar2];
            uVar17 = (&UNK_10e004ac4)[iVar6 + iVar3];
            param_4[10] = CONCAT12(uVar23,CONCAT11(uVar22,uVar21)) | 0xff000000;
            param_4[0xb] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
            uVar34 = (uint)(int)(char)bVar10 >> 0x1e;
          }
          else {
            iVar8 = *(int *)(&UNK_10e004e64 + (ulong)uVar5 * 4 + uVar31 * 0x10);
            iVar6 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar11 & 2 | bVar13 >> 1 & 1) * 4 + uVar31 * 0x10);
            uVar15 = (&UNK_10e004ac4)[iVar6 + iVar1];
            uVar16 = (&UNK_10e004ac4)[iVar6 + iVar2];
            uVar17 = (&UNK_10e004ac4)[iVar6 + iVar3];
            iVar9 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar11 >> 1 & 2 | bVar13 >> 2 & 1) * 4 + uVar33 * 0x10);
            iVar6 = uVar35 + 0xff;
            uVar18 = (&UNK_10e004ac4)[iVar9 + iVar6];
            iVar7 = uVar37 + 0xff;
            uVar19 = (&UNK_10e004ac4)[iVar9 + iVar7];
            iVar4 = uVar30 + 0xff;
            uVar20 = (&UNK_10e004ac4)[iVar9 + iVar4];
            iVar9 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar11 >> 2 & 2 | bVar13 >> 3 & 1) * 4 + uVar33 * 0x10);
            uVar21 = (&UNK_10e004ac4)[iVar9 + iVar6];
            uVar22 = (&UNK_10e004ac4)[iVar9 + iVar7];
            uVar23 = (&UNK_10e004ac4)[iVar9 + iVar4];
            iVar9 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar11 >> 3 & 2 | bVar13 >> 4 & 1) * 4 + uVar31 * 0x10);
            uVar24 = (&UNK_10e004ac4)[iVar9 + iVar1];
            uVar25 = (&UNK_10e004ac4)[iVar9 + iVar2];
            uVar26 = (&UNK_10e004ac4)[iVar9 + iVar3];
            *param_4 = CONCAT12((&UNK_10e004ac4)[iVar8 + iVar3],
                                CONCAT11((&UNK_10e004ac4)[iVar8 + iVar2],
                                         (&UNK_10e004ac4)[iVar8 + iVar1])) | 0xff000000;
            param_4[1] = CONCAT12(uVar26,CONCAT11(uVar25,uVar24)) | 0xff000000;
            iVar8 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar11 >> 4 & 2 | bVar13 >> 5 & 1) * 4 + uVar31 * 0x10);
            uVar24 = (&UNK_10e004ac4)[iVar8 + iVar1];
            uVar25 = (&UNK_10e004ac4)[iVar8 + iVar2];
            uVar26 = (&UNK_10e004ac4)[iVar8 + iVar3];
            param_4[4] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
            param_4[5] = CONCAT12(uVar26,CONCAT11(uVar25,uVar24)) | 0xff000000;
            iVar8 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar11 >> 5 & 2 | bVar13 >> 6 & 1) * 4 + uVar33 * 0x10);
            uVar15 = (&UNK_10e004ac4)[iVar8 + iVar6];
            uVar16 = (&UNK_10e004ac4)[iVar8 + iVar7];
            uVar17 = (&UNK_10e004ac4)[iVar8 + iVar4];
            param_4[8] = CONCAT12(uVar20,CONCAT11(uVar19,uVar18)) | 0xff000000;
            param_4[9] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
            iVar8 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar11 >> 6 & 2 | (uint)(bVar13 >> 7)) * 4 + uVar33 * 0x10);
            uVar15 = (&UNK_10e004ac4)[iVar8 + iVar6];
            uVar16 = (&UNK_10e004ac4)[iVar8 + iVar7];
            uVar17 = (&UNK_10e004ac4)[iVar8 + iVar4];
            param_4[0xc] = CONCAT12(uVar23,CONCAT11(uVar22,uVar21)) | 0xff000000;
            param_4[0xd] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
            iVar8 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar12 & 1 | (bVar10 & 1) << 1) * 4 + uVar31 * 0x10);
            uVar15 = (&UNK_10e004ac4)[iVar8 + iVar1];
            uVar16 = (&UNK_10e004ac4)[iVar8 + iVar2];
            uVar17 = (&UNK_10e004ac4)[iVar8 + iVar3];
            iVar8 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar10 & 2 | bVar12 >> 1 & 1) * 4 + uVar31 * 0x10);
            uVar18 = (&UNK_10e004ac4)[iVar8 + iVar1];
            uVar19 = (&UNK_10e004ac4)[iVar8 + iVar2];
            uVar20 = (&UNK_10e004ac4)[iVar8 + iVar3];
            iVar8 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar10 >> 1 & 2 | bVar12 >> 2 & 1) * 4 + uVar33 * 0x10);
            uVar21 = (&UNK_10e004ac4)[iVar8 + iVar6];
            uVar22 = (&UNK_10e004ac4)[iVar8 + iVar7];
            uVar23 = (&UNK_10e004ac4)[iVar8 + iVar4];
            iVar8 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar10 >> 2 & 2 | bVar12 >> 3 & 1) * 4 + uVar33 * 0x10);
            iVar9 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar10 >> 3 & 2 | bVar12 >> 4 & 1) * 4 + uVar31 * 0x10);
            uVar24 = (&UNK_10e004ac4)[iVar9 + iVar1];
            param_4[0xe] = CONCAT12((&UNK_10e004ac4)[iVar8 + iVar4],
                                    CONCAT11((&UNK_10e004ac4)[iVar8 + iVar7],
                                             (&UNK_10e004ac4)[iVar8 + iVar6])) | 0xff000000;
            uVar25 = (&UNK_10e004ac4)[iVar9 + iVar2];
            uVar26 = (&UNK_10e004ac4)[iVar9 + iVar3];
            param_4[2] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
            param_4[3] = CONCAT12(uVar26,CONCAT11(uVar25,uVar24)) | 0xff000000;
            iVar8 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar10 >> 4 & 2 | bVar12 >> 5 & 1) * 4 + uVar31 * 0x10);
            uVar15 = (&UNK_10e004ac4)[iVar8 + iVar1];
            uVar16 = (&UNK_10e004ac4)[iVar8 + iVar2];
            uVar17 = (&UNK_10e004ac4)[iVar8 + iVar3];
            param_4[6] = CONCAT12(uVar20,CONCAT11(uVar19,uVar18)) | 0xff000000;
            param_4[7] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
            iVar1 = *(int *)(&UNK_10e004e64 +
                            (ulong)(bVar10 >> 5 & 2 | bVar12 >> 6 & 1) * 4 + uVar33 * 0x10);
            uVar15 = (&UNK_10e004ac4)[iVar1 + iVar6];
            uVar16 = (&UNK_10e004ac4)[iVar1 + iVar7];
            uVar17 = (&UNK_10e004ac4)[iVar1 + iVar4];
            param_4[10] = CONCAT12(uVar23,CONCAT11(uVar22,uVar21)) | 0xff000000;
            param_4[0xb] = CONCAT12(uVar17,CONCAT11(uVar16,uVar15)) | 0xff000000;
            uVar34 = (uint)(bVar10 >> 6);
          }
          iVar1 = *(int *)(&UNK_10e004e64 +
                          (ulong)(uVar34 & 2 | (uint)(bVar12 >> 7)) * 4 + uVar33 * 0x10);
          param_4[0xf] = CONCAT12((&UNK_10e004ac4)[(int)(iVar1 + uVar30 + 0xff)],
                                  CONCAT11((&UNK_10e004ac4)[(int)(iVar1 + uVar37 + 0xff)],
                                           (&UNK_10e004ac4)[(int)(iVar1 + uVar35 + 0xff)])) |
                         0xff000000;
          return 1;
        }
      }
      else if ((param_2 >> 1 & 1) != 0) {
        bVar10 = *param_1;
        uVar35 = *(int *)(&UNK_10e004e44 + ((ulong)bVar10 & 7) * 4) + (bVar10 & 0xf8);
        if ((uVar35 & 0xff07) == 0) {
          bVar11 = param_1[1];
          uVar37 = *(int *)(&UNK_10e004e44 + ((ulong)bVar11 & 7) * 4) + (bVar11 & 0xf8);
          if ((uVar37 & 0xff07) == 0) {
            bVar12 = param_1[2];
            uVar30 = *(int *)(&UNK_10e004e44 + ((ulong)bVar12 & 7) * 4) + (bVar12 & 0xf8);
            if ((uVar30 & 0xff07) == 0) {
              uVar34 = bVar10 & 0xf8 | (uint)(bVar10 >> 5);
              uVar36 = bVar11 & 0xf8 | (uint)(bVar11 >> 5);
              uVar35 = uVar35 >> 5 & 7 | uVar35;
              uVar37 = uVar37 >> 5 & 7 | uVar37;
              uVar30 = uVar30 >> 5 & 7 | uVar30;
              uVar32 = bVar12 & 0xf8 | (uint)(bVar12 >> 5);
              goto LAB_10987863c;
            }
          }
        }
      }
      return 0;
    }
    if ((param_2 >> 3 & 1) == 0) {
      return 0;
    }
    uVar29 = 8;
  }
  else {
    if ((param_2 >> 2 & 1) == 0) {
      return 0;
    }
    uVar29 = 4;
  }
  if ((bVar14 >> 1 & 1) == 0) {
    func_0x000109879cc0(param_1,uVar29,param_4);
  }
  else {
    func_0x000109878e94(param_1,uVar29,param_4);
  }
  return 1;
}



/* Entry: 109879f6c; end: 109879fe7;  */

undefined4 FUN_109879f6c(byte *param_1)

{
  undefined4 uVar1;
  
  if (((*param_1 & 0xf8) + *(int *)(&UNK_10e004e44 + ((ulong)*param_1 & 7) * 4) & 0xff07) != 0) {
    return 2;
  }
  if (((param_1[1] & 0xf8) + *(int *)(&UNK_10e004e44 + ((ulong)param_1[1] & 7) * 4) & 0xff07) != 0)
  {
    return 3;
  }
  uVar1 = 4;
  if (((param_1[2] & 0xf8) + *(int *)(&UNK_10e004e44 + ((ulong)param_1[2] & 7) * 4) & 0xff07) == 0)
  {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 109879fe8; end: 10987a03b;  */

undefined4 FUN_109879fe8(void)

{
  int iVar1;
  
  if ((bRam000000011382b508 & 1) == 0) {
    iVar1 = 0x1382b508;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011382b500 = 0;
      ___cxa_guard_release(0x11382b508);
    }
  }
  return uRam000000011382b500;
}



/* Entry: 10987a03c; end: 10987a15b;  */

uint FUN_10987a03c(uint param_1,int *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  
  uVar5 = 0xffffffff;
  if ((0 < (int)param_1) && (param_2 != (int *)0x0)) {
    lVar8 = 0;
    iVar7 = 0;
    uVar3 = param_1;
    do {
      uVar6 = uVar5;
      if (((param_3 & 1) == 0) || ((uVar3 != 0x18 && ((uVar3 & 0x7fffffdf) != 8)))) {
        if (((param_3 >> 1 & 1) == 0) || ((uVar3 & 7) != 0)) {
          if ((uVar3 & 3) != 0) {
            uVar5 = 3;
            if (0x55555555 < uVar3 * -0x55555555) {
              uVar5 = uVar3;
            }
            uVar1 = 5;
            if (0x33333333 < uVar3 * -0x33333333) {
              uVar1 = uVar5;
            }
            bVar2 = (uVar3 & 1) == 0;
            uVar4 = 2;
            if (!bVar2) {
              uVar4 = uVar1;
            }
            goto LAB_10987a100;
          }
          uVar4 = 4;
        }
        else {
          uVar4 = 8;
        }
      }
      else {
        uVar5 = 5;
        if (uVar3 == 0x18) {
          uVar5 = 3;
        }
        bVar2 = uVar3 == 8;
        uVar4 = uVar3;
        if (!bVar2) {
          uVar4 = uVar5;
        }
LAB_10987a100:
        if (!bVar2) {
          iVar7 = 1;
        }
      }
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar3 / uVar4;
      }
      param_2[lVar8 + 2] = uVar4;
      param_2[lVar8 + 3] = uVar1;
      lVar8 = lVar8 + 2;
      uVar5 = uVar6 + 1;
      uVar3 = uVar1;
    } while (1 < (int)uVar1);
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = param_1 / uVar4;
    }
    *param_2 = uVar6 + 2;
    param_2[1] = uVar3;
    if (uVar5 < 0x15) {
      uVar5 = 0;
      param_2[(int)lVar8 + 2] = iVar7;
    }
    else {
      uVar5 = 0xffffffff;
    }
  }
  return uVar5;
}



/* Entry: 10987a15c; end: 10987a22b;  */

void FUN_10987a15c(undefined8 *param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
  if (0 < (int)param_2) {
    uVar1 = 0;
    dVar5 = -6.2831854820251465;
    do {
      if (1 < (int)param_4) {
        uVar3 = 1;
        puVar2 = param_1;
        do {
          dVar4 = (double)(((float)param_3 * -6.2831855 * (float)(uVar3 & 0xffffffff) *
                           (float)(uVar1 & 0xffffffff)) / (float)param_5);
          ___sincos_stret();
          *puVar2 = CONCAT44((float)dVar4,(float)dVar5);
          uVar3 = uVar3 + 1;
          puVar2 = puVar2 + param_2;
        } while (param_4 != uVar3);
      }
      uVar1 = uVar1 + 1;
      param_1 = param_1 + 1;
    } while (uVar1 != param_2);
  }
  return;
}



/* Entry: 10987a22c; end: 10987a2ff;  */

undefined8 * FUN_10987a22c(code *param_1,undefined8 *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  
  iVar1 = *param_3;
  iVar4 = param_3[1];
  lVar6 = (long)iVar1;
  uVar5 = (ulong)param_3[lVar6 * 2];
  if ((uVar5 & 1) != 0) {
    *param_2 = 0x3f800000;
    (*param_1)(param_2 + 1,1,iVar4,uVar5,param_4);
    param_2 = param_2 + 1 + (uVar5 - 1);
  }
  if (1 < iVar1) {
    uVar5 = lVar6 + 1;
    param_3 = param_3 + lVar6 * 2 + -1;
    do {
      iVar1 = param_3[-1];
      iVar2 = *param_3;
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = iVar4 / iVar1;
      }
      (*param_1)(param_2,iVar2,iVar3,iVar1,param_4);
      param_2 = param_2 + iVar2 * (iVar1 + -1);
      uVar5 = uVar5 - 1;
      param_3 = param_3 + -2;
      iVar4 = iVar3;
    } while (2 < uVar5);
  }
  return param_2;
}



/* Entry: 10987a300; end: 10987a317;  */

undefined8 * FUN_10987a300(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  
  iVar1 = *param_2;
  iVar4 = param_2[1];
  lVar6 = (long)iVar1;
  uVar5 = (ulong)param_2[lVar6 * 2];
  if ((uVar5 & 1) != 0) {
    *param_1 = 0x3f800000;
    FUN_10987a15c(param_1 + 1,1,iVar4,uVar5,param_3);
    param_1 = param_1 + 1 + (uVar5 - 1);
  }
  if (1 < iVar1) {
    uVar5 = lVar6 + 1;
    param_2 = param_2 + lVar6 * 2 + -1;
    do {
      iVar1 = param_2[-1];
      iVar2 = *param_2;
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = iVar4 / iVar1;
      }
      FUN_10987a15c(param_1,iVar2,iVar3,iVar1,param_3);
      param_1 = param_1 + iVar2 * (iVar1 + -1);
      uVar5 = uVar5 - 1;
      param_2 = param_2 + -2;
      iVar4 = iVar3;
    } while (2 < uVar5);
  }
  return param_1;
}



/* Entry: 10987a318; end: 10987a497;  */

uint * FUN_10987a318(ulong param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  
  uVar3 = (uint)param_1;
  if (0xe < (int)uVar3) {
    puVar5 = (uint *)(ulong)(uVar3 * 0x10 + 0x138);
    _malloc();
    if (puVar5 == (uint *)0x0) {
      return (uint *)0x0;
    }
    puVar5[10] = 0;
    puVar5[0xb] = 1;
    uVar6 = (long)puVar5 + 0x37U & 0xfffffffffffffff8;
    lVar1 = uVar6 + 0x100;
    *(ulong *)(puVar5 + 2) = uVar6;
    *(long *)(puVar5 + 4) = lVar1;
    *(ulong *)(puVar5 + 6) = lVar1 + (param_1 & 0xffffffff) * 8;
    puVar5[8] = 0;
    puVar5[9] = 0;
    *puVar5 = uVar3;
    uVar4 = param_1;
    if ((param_1 & 3) == 0) {
      uVar2 = uVar3 >> 2;
      uVar4 = (ulong)uVar2;
      *puVar5 = uVar2;
      *(ulong *)(puVar5 + 8) = lVar1 + (ulong)uVar2 * 8;
    }
    FUN_10987a03c(uVar4,uVar6,1);
    if ((int)uVar4 != -1) {
      puVar8 = *(uint **)(puVar5 + 2);
      uVar2 = *puVar8;
      if (puVar8[(int)(uVar2 * 2 + 2)] != 1) {
        if ((param_1 & 3) == 0) {
          *puVar5 = uVar3;
          puVar5[8] = 0;
          puVar5[9] = 0;
          if (0x1c < (int)uVar2) goto LAB_10987a420;
          iVar9 = (int)*(undefined8 *)puVar8;
          iVar10 = (int)((ulong)*(undefined8 *)puVar8 >> 0x20) << 2;
          *(ulong *)puVar8 = CONCAT44(iVar10,iVar9 + 1);
          _memmove(CONCAT44(iVar10,iVar9 << 2),puVar8 + 4,puVar8 + 2,
                   -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                   (ulong)(uVar2 * 2 | 1) << 2);
          puVar8 = *(uint **)(puVar5 + 2);
          puVar8[2] = 4;
          puVar8[3] = uVar3 >> 2;
        }
        FUN_10987a22c(FUN_10987a15c,*(undefined8 *)(puVar5 + 4),puVar8,*puVar5);
        return puVar5;
      }
      if ((param_1 & 3) == 0) {
        FUN_10987a22c(FUN_10987a15c,*(undefined8 *)(puVar5 + 4),puVar8,*puVar5);
        FUN_10987a15c(*(undefined8 *)(puVar5 + 8),*puVar5,1,4,param_1);
        *puVar5 = *puVar5 << 2;
        return puVar5;
      }
    }
LAB_10987a420:
    _free(puVar5);
    return (uint *)0x0;
  }
  puVar5 = (uint *)(ulong)(uVar3 * 0x10 + 0x138);
  _malloc();
  if (puVar5 == (uint *)0x0) {
    return (uint *)0x0;
  }
  puVar5[10] = 0;
  puVar5[0xb] = 1;
  uVar6 = (long)puVar5 + 0x37U & 0xfffffffffffffff8;
  *(ulong *)(puVar5 + 2) = uVar6;
  *(ulong *)(puVar5 + 4) = uVar6 + 0x100;
  *(ulong *)(puVar5 + 6) = uVar6 + 0x100 + (long)(int)uVar3 * 8;
  *puVar5 = uVar3;
  uVar4 = param_1;
  FUN_10987a03c(param_1,uVar6,1);
  if ((int)uVar4 == -1) {
LAB_10987a53c:
    _free(puVar5);
    puVar5 = (uint *)0x0;
  }
  else {
    piVar7 = *(int **)(puVar5 + 2);
    if (piVar7[*piVar7 * 2 + 2] == 1) {
      uVar3 = *puVar5;
      FUN_10987a03c(uVar3,piVar7,0);
      if (uVar3 == 0xffffffff) goto LAB_10987a53c;
      piVar7 = *(int **)(puVar5 + 2);
    }
    FUN_10987a300(*(undefined8 *)(puVar5 + 4),piVar7,param_1);
  }
  return puVar5;
}



/* Entry: 10987a498; end: 10987a557;  */

int * FUN_10987a498(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  
  iVar1 = (int)param_1;
  piVar2 = (int *)(ulong)(iVar1 * 0x10 + 0x138);
  _malloc();
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar2[10] = 0;
  piVar2[0xb] = 1;
  uVar4 = (long)piVar2 + 0x37U & 0xfffffffffffffff8;
  *(ulong *)(piVar2 + 2) = uVar4;
  *(ulong *)(piVar2 + 4) = uVar4 + 0x100;
  *(ulong *)(piVar2 + 6) = uVar4 + 0x100 + (long)iVar1 * 8;
  *piVar2 = iVar1;
  uVar3 = param_1;
  FUN_10987a03c(param_1,uVar4,1);
  if ((int)uVar3 == -1) {
LAB_10987a53c:
    _free(piVar2);
    piVar2 = (int *)0x0;
  }
  else {
    piVar5 = *(int **)(piVar2 + 2);
    if (piVar5[*piVar5 * 2 + 2] == 1) {
      iVar1 = *piVar2;
      FUN_10987a03c(iVar1,piVar5,0);
      if (iVar1 == -1) goto LAB_10987a53c;
      piVar5 = *(int **)(piVar2 + 2);
    }
    FUN_10987a300(*(undefined8 *)(piVar2 + 4),piVar5,param_1);
  }
  return piVar2;
}



/* Entry: 10987a558; end: 10987b1b3;  */

void FUN_10987a558(float *param_1,float *param_2,long param_3,int param_4)

{
  bool bVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  ulong *puVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  float *pfVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  float *pfVar28;
  float *pfVar29;
  long lVar30;
  undefined8 uVar31;
  ulong uVar32;
  float *pfVar33;
  long lVar34;
  float fVar35;
  float fVar37;
  float fVar38;
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar43;
  ulong uVar42;
  undefined8 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined8 uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float *pfStack_90;
  ulong uStack_88;
  
  puVar9 = *(uint **)(param_3 + 8);
  uVar16 = *puVar9;
  if (puVar9[(int)(uVar16 * 2 + 2)] != 1) {
    if (puVar9[(int)(uVar16 * 2 + 2)] != 0) {
      return;
    }
    lVar14 = *(long *)(param_3 + 0x10);
    pfVar23 = *(float **)(param_3 + 0x18);
    uVar24 = puVar9[1];
    uStack_88 = (ulong)uVar24;
    lVar25 = (long)(int)uVar24;
    uVar27 = (ulong)(puVar9 + (int)(uVar16 * 2))[-1];
    uVar20 = puVar9[(int)(uVar16 * 2)];
    if (param_4 == 0) {
      if (uVar20 != 2) {
        if (uVar20 == 8) {
          if ((int)uVar24 < 1) {
            uStack_88 = (ulong)(uVar24 << 1);
          }
          else {
            lVar34 = 0;
            lVar30 = uStack_88 * 8;
            lVar25 = uStack_88 * 8;
            pfVar12 = param_1 + 8;
            do {
              pfVar21 = (float *)((long)param_2 + lVar34 + 4);
              pfVar22 = (float *)((long)param_2 + lVar34 + (ulong)(uVar24 << 2) * 8 + 4);
              fVar35 = pfVar21[-1];
              fVar37 = *pfVar21;
              fVar38 = pfVar22[-1];
              fVar48 = *pfVar22;
              fVar40 = fVar35 + fVar38;
              fVar43 = fVar37 + fVar48;
              fVar35 = fVar35 - fVar38;
              fVar37 = fVar37 - fVar48;
              pfVar21 = (float *)((long)param_2 + lVar34 + lVar25 + 4);
              pfVar22 = (float *)((long)param_2 + lVar34 + (ulong)(uVar24 * 5) * 8 + 4);
              fVar38 = pfVar21[-1];
              fVar48 = *pfVar21;
              fVar41 = pfVar22[-1];
              fVar58 = *pfVar22;
              fVar45 = fVar38 + fVar41;
              fVar47 = fVar48 + fVar58;
              fVar38 = fVar38 - fVar41;
              fVar48 = fVar48 - fVar58;
              pfVar21 = (float *)((long)param_2 + lVar34 + (ulong)(uVar24 << 1) * 8 + 4);
              pfVar22 = (float *)((long)param_2 + lVar34 + (ulong)(uVar24 * 6) * 8 + 4);
              fVar58 = pfVar21[-1];
              fVar46 = *pfVar21;
              fVar41 = pfVar22[-1];
              fVar50 = *pfVar22;
              fVar54 = fVar58 + fVar41;
              fVar55 = fVar46 + fVar50;
              fVar58 = fVar58 - fVar41;
              fVar46 = fVar46 - fVar50;
              pfVar21 = (float *)((long)param_2 + lVar34 + (ulong)(uVar24 * 3) * 8 + 4);
              pfVar22 = (float *)((long)param_2 + lVar34 + (ulong)(uVar24 * 7) * 8 + 4);
              fVar50 = pfVar21[-1];
              fVar52 = *pfVar21;
              fVar41 = pfVar22[-1];
              fVar57 = *pfVar22;
              fVar60 = fVar50 + fVar41;
              fVar61 = fVar52 + fVar57;
              fVar50 = fVar50 - fVar41;
              fVar52 = fVar52 - fVar57;
              fVar41 = (fVar38 + fVar48) * 0.70710677;
              fVar38 = (fVar48 - fVar38) * 0.70710677;
              fVar48 = (fVar50 - fVar52) * 0.70710677;
              fVar50 = (fVar50 + fVar52) * 0.70710677;
              fVar52 = fVar40 + fVar54;
              fVar57 = fVar43 + fVar55;
              fVar63 = fVar35 + fVar46;
              fVar64 = fVar37 - fVar58;
              fVar40 = fVar40 - fVar54;
              fVar43 = fVar43 - fVar55;
              fVar35 = fVar35 - fVar46;
              fVar37 = fVar37 + fVar58;
              fVar58 = fVar45 + fVar60;
              fVar46 = fVar47 + fVar61;
              fVar54 = fVar41 - fVar48;
              fVar55 = fVar38 - fVar50;
              fVar45 = fVar45 - fVar60;
              fVar47 = fVar47 - fVar61;
              fVar41 = fVar41 + fVar48;
              pfVar12[-8] = fVar52 + fVar58;
              pfVar12[-7] = fVar57 + fVar46;
              pfVar12[-6] = fVar63 + fVar54;
              pfVar12[-5] = fVar64 + fVar55;
              pfVar12[-4] = fVar40 + fVar47;
              pfVar12[-3] = fVar43 - fVar45;
              fVar38 = fVar38 + fVar50;
              pfVar12[-2] = fVar35 + fVar38;
              pfVar12[-1] = fVar37 - fVar41;
              *pfVar12 = fVar52 - fVar58;
              pfVar12[1] = fVar57 - fVar46;
              pfVar12[2] = fVar63 - fVar54;
              pfVar12[3] = fVar64 - fVar55;
              pfVar12[4] = fVar40 - fVar47;
              pfVar12[5] = fVar43 + fVar45;
              pfVar12[6] = fVar35 - fVar38;
              pfVar12[7] = fVar37 + fVar41;
              lVar34 = lVar34 + 8;
              pfVar12 = pfVar12 + 0x10;
              uStack_88 = (ulong)(uVar24 << 1);
            } while (lVar30 - lVar34 != 0);
          }
        }
        else {
          if (uVar20 != 4) goto LAB_10987a724;
          uVar18 = uStack_88;
          pfVar12 = param_1;
          if (uVar24 == 0) {
            uStack_88 = 0;
          }
          else {
            do {
              fVar35 = (float)*(undefined8 *)param_2;
              fVar37 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
              fVar38 = (float)*(undefined8 *)(param_2 + lVar25 * 4);
              fVar46 = fVar35 + fVar38;
              fVar48 = (float)((ulong)*(undefined8 *)(param_2 + lVar25 * 4) >> 0x20);
              fVar45 = fVar37 + fVar48;
              fVar35 = fVar35 - fVar38;
              fVar37 = fVar37 - fVar48;
              fVar48 = (float)*(undefined8 *)(param_2 + lVar25 * 2);
              fVar43 = (float)*(undefined8 *)(param_2 + lVar25 * 6);
              fVar41 = fVar48 + fVar43;
              fVar38 = (float)((ulong)*(undefined8 *)(param_2 + lVar25 * 2) >> 0x20);
              fVar58 = (float)((ulong)*(undefined8 *)(param_2 + lVar25 * 6) >> 0x20);
              fVar40 = fVar38 + fVar58;
              fVar38 = fVar38 - fVar58;
              auVar39._4_4_ = fVar38;
              auVar39._0_4_ = fVar48 - fVar43;
              auVar39._8_8_ = 0;
              auVar39 = NEON_rev64(auVar39,4);
              pfVar12[2] = fVar35 + fVar38;
              pfVar12[3] = fVar37 - auVar39._4_4_;
              *pfVar12 = fVar46 + fVar41;
              pfVar12[1] = fVar45 + fVar40;
              *(ulong *)(pfVar12 + 6) = CONCAT44(fVar37 + auVar39._4_4_,fVar35 - fVar38);
              *(ulong *)(pfVar12 + 4) = CONCAT44(fVar45 - fVar40,fVar46 - fVar41);
              param_2 = param_2 + 2;
              uVar20 = (int)uVar18 - 1;
              uVar18 = (ulong)uVar20;
              pfVar12 = pfVar12 + 8;
            } while (uVar20 != 0);
          }
        }
        iVar17 = uVar16 - 1;
        uVar20 = uVar24 + 3;
        if (-1 < (int)uVar24) {
          uVar20 = uVar24;
        }
        uVar20 = (int)uVar20 >> 2;
        uVar24 = (uint)uStack_88;
        pfVar12 = param_1;
        if (2 < (int)uVar16) {
          pfVar21 = param_1;
          uVar18 = uVar27;
          do {
            pfVar12 = pfVar23;
            pfVar23 = pfVar21;
            uVar16 = (uint)uVar18;
            if ((int)uVar20 < 1) {
              uVar27 = (ulong)(uVar16 << 2);
            }
            else {
              uVar11 = 0;
              uVar27 = (ulong)(uVar16 << 2);
              lVar25 = lVar14 + 4;
              uVar32 = -(ulong)((uVar16 & 0x3fffffff) >> 0x1d) & 0xfffffff800000000 | uVar27 << 3;
              pfVar29 = pfVar12 + (long)(int)uVar16 * 2 + 1;
              pfVar21 = pfVar12 + (long)(int)(uVar16 * 3) * 2;
              pfVar22 = pfVar12 + (long)(int)(uVar16 << 1) * 2;
              pfVar33 = pfVar12;
              pfVar28 = pfVar23;
              do {
                if (uVar16 != 0) {
                  lVar34 = 0;
                  uVar13 = uVar18;
                  do {
                    fVar35 = ((float *)(lVar25 + lVar34))[-1];
                    fVar37 = *(float *)(lVar25 + lVar34);
                    pfVar2 = (float *)(lVar25 + (long)(int)uVar16 * 8 + lVar34);
                    fVar48 = pfVar2[-1];
                    fVar40 = *pfVar2;
                    pfVar2 = (float *)(lVar25 + (long)(int)(uVar16 << 1) * 8 + lVar34);
                    fVar58 = pfVar2[-1];
                    fVar46 = *pfVar2;
                    fVar38 = *(float *)((long)pfVar28 + lVar34);
                    fVar41 = ((float *)((long)pfVar28 + lVar34))[1];
                    pfVar2 = (float *)((long)pfVar28 +
                                      lVar34 + (-(uStack_88 >> 0x1f) & 0xfffffff800000000 |
                                               uStack_88 << 3));
                    fVar45 = *pfVar2;
                    fVar47 = pfVar2[1];
                    pfVar2 = (float *)((long)pfVar28 +
                                      lVar34 + (-(ulong)((uVar24 & 0x7fffffff) >> 0x1e) &
                                                0xfffffff800000000 | (ulong)(uVar24 << 1) << 3));
                    fVar50 = *pfVar2;
                    fVar52 = pfVar2[1];
                    pfVar2 = (float *)((long)pfVar28 +
                                      lVar34 + (-(ulong)(uVar24 * 3 >> 0x1f) & 0xfffffff800000000 |
                                               (ulong)(uVar24 * 3) << 3));
                    fVar54 = *pfVar2;
                    fVar55 = pfVar2[1];
                    fVar43 = -(fVar47 * fVar37) + fVar35 * fVar45;
                    fVar35 = fVar37 * fVar45 + fVar35 * fVar47;
                    fVar37 = -(fVar52 * fVar40) + fVar48 * fVar50;
                    fVar48 = fVar40 * fVar50 + fVar48 * fVar52;
                    fVar40 = -(fVar55 * fVar46) + fVar58 * fVar54;
                    fVar58 = fVar46 * fVar54 + fVar58 * fVar55;
                    fVar46 = fVar38 + fVar37;
                    fVar45 = fVar41 + fVar48;
                    fVar38 = fVar38 - fVar37;
                    fVar41 = fVar41 - fVar48;
                    fVar37 = fVar43 + fVar40;
                    fVar48 = fVar35 + fVar58;
                    fVar43 = fVar43 - fVar40;
                    fVar35 = fVar35 - fVar58;
                    *(float *)((long)pfVar33 + lVar34) = fVar46 + fVar37;
                    ((float *)((long)pfVar33 + lVar34))[1] = fVar45 + fVar48;
                    ((float *)((long)pfVar29 + lVar34))[-1] = fVar38 + fVar35;
                    *(float *)((long)pfVar29 + lVar34) = fVar41 - fVar43;
                    *(float *)((long)pfVar22 + lVar34) = fVar46 - fVar37;
                    ((float *)((long)pfVar22 + lVar34))[1] = fVar45 - fVar48;
                    *(float *)((long)pfVar21 + lVar34) = fVar38 - fVar35;
                    ((float *)((long)pfVar21 + lVar34))[1] = fVar41 + fVar43;
                    lVar34 = lVar34 + 8;
                    uVar15 = (int)uVar13 - 1;
                    uVar13 = (ulong)uVar15;
                  } while (uVar15 != 0);
                  pfVar28 = (float *)((long)pfVar28 + lVar34);
                }
                uVar11 = uVar11 + 1;
                pfVar33 = (float *)((long)pfVar33 + uVar32);
                pfVar29 = (float *)((long)pfVar29 + uVar32);
                pfVar21 = (float *)((long)pfVar21 + uVar32);
                pfVar22 = (float *)((long)pfVar22 + uVar32);
              } while (uVar11 != uVar20);
            }
            lVar14 = lVar14 + (long)(int)(uVar16 * 3) * 8;
            uVar16 = uVar20 + 3;
            if (-1 < (int)uVar20) {
              uVar16 = uVar20;
            }
            uVar20 = (int)uVar16 >> 2;
            bVar1 = 2 < iVar17;
            pfVar21 = pfVar12;
            uVar18 = uVar27;
            iVar17 = iVar17 + -1;
          } while (bVar1);
          iVar17 = 1;
        }
        if (iVar17 == 0) {
          return;
        }
        if (uVar20 == 0) {
          return;
        }
        iVar17 = (int)uVar27;
        lVar14 = lVar14 + 4;
        uVar18 = -(ulong)(uVar24 * 3 >> 0x1f) & 0xfffffff800000000 | (ulong)(uVar24 * 3) << 3;
        uVar11 = -(ulong)((uVar24 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                 (ulong)(uVar24 << 1) << 3;
        do {
          if (iVar17 != 0) {
            lVar25 = 0;
            uVar32 = uVar27;
            do {
              fVar35 = ((float *)(lVar14 + lVar25))[-1];
              fVar37 = *(float *)(lVar14 + lVar25);
              pfVar23 = (float *)(lVar14 + (long)iVar17 * 8 + lVar25);
              fVar48 = pfVar23[-1];
              fVar40 = *pfVar23;
              pfVar23 = (float *)(lVar14 + (long)(iVar17 << 1) * 8 + lVar25);
              fVar58 = pfVar23[-1];
              fVar46 = *pfVar23;
              fVar38 = *(float *)((long)pfVar12 + lVar25);
              fVar41 = ((float *)((long)pfVar12 + lVar25))[1];
              pfVar23 = (float *)((long)pfVar12 +
                                 lVar25 + (-(uStack_88 >> 0x1f) & 0xfffffff800000000 |
                                          uStack_88 << 3));
              fVar45 = *pfVar23;
              fVar47 = pfVar23[1];
              pfVar23 = (float *)((long)pfVar12 + lVar25 + uVar11);
              fVar50 = *pfVar23;
              fVar52 = pfVar23[1];
              pfVar23 = (float *)((long)pfVar12 + lVar25 + uVar18);
              fVar54 = *pfVar23;
              fVar55 = pfVar23[1];
              fVar43 = -(fVar47 * fVar37) + fVar35 * fVar45;
              fVar35 = fVar37 * fVar45 + fVar35 * fVar47;
              fVar37 = -(fVar52 * fVar40) + fVar48 * fVar50;
              fVar48 = fVar40 * fVar50 + fVar48 * fVar52;
              fVar40 = -(fVar55 * fVar46) + fVar58 * fVar54;
              fVar58 = fVar46 * fVar54 + fVar58 * fVar55;
              fVar46 = fVar38 + fVar37;
              fVar45 = fVar41 + fVar48;
              fVar38 = fVar38 - fVar37;
              fVar41 = fVar41 - fVar48;
              fVar37 = fVar43 + fVar40;
              fVar48 = fVar35 + fVar58;
              fVar43 = fVar43 - fVar40;
              fVar35 = fVar35 - fVar58;
              *(float *)((long)param_1 + lVar25) = fVar46 + fVar37;
              ((float *)((long)param_1 + lVar25))[1] = fVar45 + fVar48;
              pfVar23 = (float *)((long)param_1 + lVar25 + ((long)(int)uVar24 << 3 | 4U));
              pfVar23[-1] = fVar38 + fVar35;
              *pfVar23 = fVar41 - fVar43;
              pfVar23 = (float *)((long)param_1 + lVar25 + uVar11);
              *pfVar23 = fVar46 - fVar37;
              pfVar23[1] = fVar45 - fVar48;
              pfVar23 = (float *)((long)param_1 + lVar25 + uVar18);
              *pfVar23 = fVar38 - fVar35;
              pfVar23[1] = fVar41 + fVar43;
              lVar25 = lVar25 + 8;
              uVar16 = (int)uVar32 - 1;
              uVar32 = (ulong)uVar16;
            } while (uVar16 != 0);
            pfVar12 = (float *)((long)pfVar12 + lVar25);
            param_1 = (float *)((long)param_1 + lVar25);
          }
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
        return;
      }
      *(ulong *)param_1 =
           CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) +
                    (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20),
                    (float)*(undefined8 *)param_2 + (float)*(undefined8 *)(param_2 + 2));
      fVar37 = (float)*(undefined8 *)param_2 - (float)*(undefined8 *)(param_2 + 2);
      fVar35 = (float)((ulong)*(undefined8 *)param_2 >> 0x20) -
               (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
    }
    else {
      fVar35 = 1.0 / (float)(int)(uVar20 * uVar24);
      if (uVar20 != 2) {
        if (uVar20 == 8) {
          if ((int)uVar24 < 1) {
            uStack_88 = (ulong)(uVar24 << 1);
          }
          else {
            lVar34 = 0;
            lVar30 = uStack_88 * 8;
            lVar25 = uStack_88 * 8;
            pfVar12 = param_1 + 8;
            do {
              pfVar21 = (float *)((long)param_2 + lVar34 + 4);
              pfVar22 = (float *)((long)param_2 + lVar34 + (ulong)(uVar24 << 2) * 8 + 4);
              fVar37 = pfVar21[-1];
              fVar38 = *pfVar21;
              fVar48 = pfVar22[-1];
              fVar41 = *pfVar22;
              fVar43 = fVar37 + fVar48;
              fVar58 = fVar38 + fVar41;
              fVar37 = fVar37 - fVar48;
              fVar38 = fVar38 - fVar41;
              pfVar21 = (float *)((long)param_2 + lVar34 + lVar25 + 4);
              pfVar22 = (float *)((long)param_2 + lVar34 + (ulong)(uVar24 * 5) * 8 + 4);
              fVar48 = pfVar21[-1];
              fVar41 = *pfVar21;
              fVar40 = pfVar22[-1];
              fVar46 = *pfVar22;
              fVar47 = fVar48 + fVar40;
              fVar50 = fVar41 + fVar46;
              fVar48 = fVar48 - fVar40;
              fVar41 = fVar41 - fVar46;
              pfVar21 = (float *)((long)param_2 + lVar34 + (ulong)(uVar24 << 1) * 8 + 4);
              pfVar22 = (float *)((long)param_2 + lVar34 + (ulong)(uVar24 * 6) * 8 + 4);
              fVar46 = pfVar21[-1];
              fVar45 = *pfVar21;
              fVar40 = pfVar22[-1];
              fVar52 = *pfVar22;
              fVar55 = fVar46 + fVar40;
              fVar57 = fVar45 + fVar52;
              fVar46 = fVar46 - fVar40;
              fVar45 = fVar45 - fVar52;
              pfVar21 = (float *)((long)param_2 + lVar34 + (ulong)(uVar24 * 3) * 8 + 4);
              pfVar22 = (float *)((long)param_2 + lVar34 + (ulong)(uVar24 * 7) * 8 + 4);
              fVar52 = pfVar21[-1];
              fVar54 = *pfVar21;
              fVar40 = pfVar22[-1];
              fVar60 = *pfVar22;
              fVar61 = fVar52 + fVar40;
              fVar63 = fVar54 + fVar60;
              fVar52 = fVar52 - fVar40;
              fVar54 = fVar54 - fVar60;
              fVar40 = (fVar48 - fVar41) * 0.70710677;
              fVar48 = (fVar48 + fVar41) * 0.70710677;
              fVar41 = (fVar52 + fVar54) * 0.70710677;
              fVar52 = (fVar54 - fVar52) * 0.70710677;
              fVar54 = fVar43 + fVar55;
              fVar60 = fVar58 + fVar57;
              fVar64 = fVar37 - fVar45;
              fVar65 = fVar38 + fVar46;
              fVar43 = fVar43 - fVar55;
              fVar58 = fVar58 - fVar57;
              fVar37 = fVar37 + fVar45;
              fVar38 = fVar38 - fVar46;
              fVar46 = fVar47 + fVar61;
              fVar45 = fVar50 + fVar63;
              fVar55 = fVar40 - fVar41;
              fVar57 = fVar48 - fVar52;
              fVar47 = fVar47 - fVar61;
              fVar50 = fVar50 - fVar63;
              fVar40 = fVar40 + fVar41;
              pfVar12[-8] = fVar54 + fVar46;
              pfVar12[-7] = fVar60 + fVar45;
              pfVar12[-6] = fVar64 + fVar55;
              pfVar12[-5] = fVar65 + fVar57;
              pfVar12[-4] = fVar43 - fVar50;
              pfVar12[-3] = fVar58 + fVar47;
              fVar48 = fVar48 + fVar52;
              pfVar12[-2] = fVar37 - fVar48;
              pfVar12[-1] = fVar38 + fVar40;
              *pfVar12 = fVar54 - fVar46;
              pfVar12[1] = fVar60 - fVar45;
              pfVar12[2] = fVar64 - fVar55;
              pfVar12[3] = fVar65 - fVar57;
              pfVar12[4] = fVar43 + fVar50;
              pfVar12[5] = fVar58 - fVar47;
              pfVar12[6] = fVar37 + fVar48;
              pfVar12[7] = fVar38 - fVar40;
              lVar34 = lVar34 + 8;
              pfVar12 = pfVar12 + 0x10;
              uStack_88 = (ulong)(uVar24 << 1);
            } while (lVar30 - lVar34 != 0);
          }
          if (uVar16 == 1) {
            lVar14 = 0;
            do {
              pfVar23 = (float *)((long)param_1 + lVar14);
              pfVar23[2] = pfVar23[2] * fVar35;
              pfVar23[3] = pfVar23[3] * fVar35;
              *pfVar23 = *pfVar23 * fVar35;
              pfVar23[1] = pfVar23[1] * fVar35;
              pfVar23[6] = pfVar23[6] * fVar35;
              pfVar23[7] = pfVar23[7] * fVar35;
              pfVar23[4] = pfVar23[4] * fVar35;
              pfVar23[5] = pfVar23[5] * fVar35;
              lVar14 = lVar14 + 0x20;
            } while (lVar14 != 0x40);
            return;
          }
        }
        else {
          uVar18 = uStack_88;
          pfVar12 = param_1;
          uVar15 = uVar24;
          if (uVar20 != 4) {
LAB_10987a724:
            *(undefined8 *)param_1 = *(undefined8 *)param_2;
            return;
          }
          while (uVar15 != 0) {
            fVar37 = (float)*(undefined8 *)param_2;
            fVar48 = (float)*(undefined8 *)(param_2 + lVar25 * 4);
            fVar45 = fVar37 + fVar48;
            fVar38 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
            fVar41 = (float)((ulong)*(undefined8 *)(param_2 + lVar25 * 4) >> 0x20);
            fVar47 = fVar38 + fVar41;
            fVar37 = fVar37 - fVar48;
            fVar38 = fVar38 - fVar41;
            fVar48 = (float)*(undefined8 *)(param_2 + lVar25 * 2);
            fVar58 = (float)*(undefined8 *)(param_2 + lVar25 * 6);
            fVar40 = fVar48 + fVar58;
            fVar41 = (float)((ulong)*(undefined8 *)(param_2 + lVar25 * 2) >> 0x20);
            fVar46 = (float)((ulong)*(undefined8 *)(param_2 + lVar25 * 6) >> 0x20);
            fVar43 = fVar41 + fVar46;
            auVar36._0_4_ = fVar48 - fVar58;
            auVar36._4_4_ = fVar41 - fVar46;
            auVar36._8_8_ = 0;
            auVar39 = NEON_rev64(auVar36,4);
            *(ulong *)(pfVar12 + 2) = CONCAT44(fVar38 + auVar39._4_4_,fVar37 - auVar36._4_4_);
            *pfVar12 = fVar45 + fVar40;
            pfVar12[1] = fVar47 + fVar43;
            pfVar12[6] = fVar37 + auVar36._4_4_;
            pfVar12[7] = fVar38 - auVar39._4_4_;
            pfVar12[4] = fVar45 - fVar40;
            pfVar12[5] = fVar47 - fVar43;
            param_2 = param_2 + 2;
            uVar15 = (int)uVar18 - 1;
            uVar18 = (ulong)uVar15;
            pfVar12 = pfVar12 + 8;
          }
          if (uVar16 == 1) {
            *(ulong *)(param_1 + 2) = CONCAT44(param_1[3] * fVar35,param_1[2] * fVar35);
            *(ulong *)param_1 = CONCAT44(param_1[1] * fVar35,*param_1 * fVar35);
            param_1[6] = param_1[6] * fVar35;
            param_1[7] = param_1[7] * fVar35;
            param_1[4] = param_1[4] * fVar35;
            param_1[5] = param_1[5] * fVar35;
            return;
          }
        }
        uVar20 = uVar24 + 3;
        if (-1 < (int)uVar24) {
          uVar20 = uVar24;
        }
        uVar20 = (int)uVar20 >> 2;
        uVar15 = (uint)uStack_88;
        uVar24 = uVar15 * 3;
        pfVar12 = param_1;
        if (1 < (int)(uVar16 - 1)) {
          pfVar21 = param_1;
          uVar18 = uVar27;
          iVar17 = uVar16 - 1;
          do {
            pfVar12 = pfVar23;
            pfVar23 = pfVar21;
            uVar16 = (uint)uVar18;
            uVar27 = (ulong)(uVar16 << 2);
            if (0 < (int)uVar20) {
              uVar11 = 0;
              lVar25 = lVar14 + 4;
              uVar32 = -(ulong)((uVar16 & 0x3fffffff) >> 0x1d) & 0xfffffff800000000 | uVar27 << 3;
              pfVar29 = pfVar12 + (long)(int)uVar16 * 2 + 1;
              pfVar21 = pfVar12 + (long)(int)(uVar16 * 3) * 2;
              pfVar22 = pfVar12 + (long)(int)(uVar16 << 1) * 2;
              pfVar33 = pfVar12;
              pfVar28 = pfVar23;
              do {
                if (uVar16 != 0) {
                  lVar34 = 0;
                  uVar13 = uVar18;
                  do {
                    fVar37 = ((float *)(lVar25 + lVar34))[-1];
                    fVar38 = *(float *)(lVar25 + lVar34);
                    pfVar2 = (float *)(lVar25 + (long)(int)uVar16 * 8 + lVar34);
                    fVar41 = pfVar2[-1];
                    fVar43 = *pfVar2;
                    pfVar2 = (float *)(lVar25 + (long)(int)(uVar16 << 1) * 8 + lVar34);
                    fVar46 = pfVar2[-1];
                    fVar45 = *pfVar2;
                    fVar48 = *(float *)((long)pfVar28 + lVar34);
                    fVar40 = ((float *)((long)pfVar28 + lVar34))[1];
                    pfVar2 = (float *)((long)pfVar28 +
                                      lVar34 + (-(uStack_88 >> 0x1f) & 0xfffffff800000000 |
                                               uStack_88 << 3));
                    fVar47 = *pfVar2;
                    fVar50 = pfVar2[1];
                    pfVar2 = (float *)((long)pfVar28 +
                                      lVar34 + (-(ulong)((uVar15 & 0x7fffffff) >> 0x1e) &
                                                0xfffffff800000000 | (ulong)(uVar15 << 1) << 3));
                    fVar52 = *pfVar2;
                    fVar54 = pfVar2[1];
                    pfVar2 = (float *)((long)pfVar28 +
                                      lVar34 + (-(ulong)(uVar24 >> 0x1f) & 0xfffffff800000000 |
                                               (ulong)uVar24 << 3));
                    fVar55 = *pfVar2;
                    fVar57 = pfVar2[1];
                    fVar58 = fVar38 * fVar50 + fVar37 * fVar47;
                    fVar37 = -(fVar47 * fVar38) + fVar37 * fVar50;
                    fVar38 = fVar43 * fVar54 + fVar41 * fVar52;
                    fVar41 = -(fVar52 * fVar43) + fVar41 * fVar54;
                    fVar43 = fVar45 * fVar57 + fVar46 * fVar55;
                    fVar46 = -(fVar55 * fVar45) + fVar46 * fVar57;
                    fVar45 = fVar48 + fVar38;
                    fVar47 = fVar40 + fVar41;
                    fVar48 = fVar48 - fVar38;
                    fVar40 = fVar40 - fVar41;
                    fVar38 = fVar58 + fVar43;
                    fVar41 = fVar37 + fVar46;
                    fVar58 = fVar58 - fVar43;
                    fVar37 = fVar37 - fVar46;
                    *(float *)((long)pfVar33 + lVar34) = fVar45 + fVar38;
                    ((float *)((long)pfVar33 + lVar34))[1] = fVar47 + fVar41;
                    ((float *)((long)pfVar29 + lVar34))[-1] = fVar48 - fVar37;
                    *(float *)((long)pfVar29 + lVar34) = fVar40 + fVar58;
                    *(float *)((long)pfVar22 + lVar34) = fVar45 - fVar38;
                    ((float *)((long)pfVar22 + lVar34))[1] = fVar47 - fVar41;
                    *(float *)((long)pfVar21 + lVar34) = fVar48 + fVar37;
                    ((float *)((long)pfVar21 + lVar34))[1] = fVar40 - fVar58;
                    lVar34 = lVar34 + 8;
                    uVar5 = (int)uVar13 - 1;
                    uVar13 = (ulong)uVar5;
                  } while (uVar5 != 0);
                  pfVar28 = (float *)((long)pfVar28 + lVar34);
                }
                uVar11 = uVar11 + 1;
                pfVar33 = (float *)((long)pfVar33 + uVar32);
                pfVar29 = (float *)((long)pfVar29 + uVar32);
                pfVar21 = (float *)((long)pfVar21 + uVar32);
                pfVar22 = (float *)((long)pfVar22 + uVar32);
              } while (uVar11 != uVar20);
            }
            lVar14 = lVar14 + (long)(int)(uVar16 * 3) * 8;
            uVar16 = uVar20 + 3;
            if (-1 < (int)uVar20) {
              uVar16 = uVar20;
            }
            uVar20 = (int)uVar16 >> 2;
            bVar1 = 2 < iVar17;
            pfVar21 = pfVar12;
            uVar18 = uVar27;
            iVar17 = iVar17 + -1;
          } while (bVar1);
        }
        if ((int)uVar20 < 1) {
          return;
        }
        uVar16 = 0;
        iVar17 = (int)uVar27;
        uVar18 = -(ulong)(uVar24 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar24 << 3;
        lVar14 = lVar14 + 4;
        uVar11 = -(ulong)((uVar15 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                 (ulong)(uVar15 << 1) << 3;
        do {
          if (iVar17 != 0) {
            lVar25 = 0;
            uVar32 = uVar27;
            do {
              fVar37 = ((float *)(lVar14 + lVar25))[-1];
              fVar38 = *(float *)(lVar14 + lVar25);
              pfVar23 = (float *)(lVar14 + (long)iVar17 * 8 + lVar25);
              fVar41 = pfVar23[-1];
              fVar43 = *pfVar23;
              pfVar23 = (float *)(lVar14 + (long)(iVar17 << 1) * 8 + lVar25);
              fVar46 = pfVar23[-1];
              fVar45 = *pfVar23;
              fVar48 = *(float *)((long)pfVar12 + lVar25);
              fVar40 = ((float *)((long)pfVar12 + lVar25))[1];
              pfVar23 = (float *)((long)pfVar12 +
                                 lVar25 + (-(uStack_88 >> 0x1f) & 0xfffffff800000000 |
                                          uStack_88 << 3));
              fVar47 = *pfVar23;
              fVar50 = pfVar23[1];
              pfVar23 = (float *)((long)pfVar12 + lVar25 + uVar11);
              fVar52 = *pfVar23;
              fVar54 = pfVar23[1];
              pfVar23 = (float *)((long)pfVar12 + lVar25 + uVar18);
              fVar55 = *pfVar23;
              fVar57 = pfVar23[1];
              fVar58 = fVar38 * fVar50 + fVar37 * fVar47;
              fVar37 = -(fVar47 * fVar38) + fVar37 * fVar50;
              fVar38 = fVar43 * fVar54 + fVar41 * fVar52;
              fVar41 = -(fVar52 * fVar43) + fVar41 * fVar54;
              fVar43 = fVar45 * fVar57 + fVar46 * fVar55;
              fVar46 = -(fVar55 * fVar45) + fVar46 * fVar57;
              fVar45 = fVar48 + fVar38;
              fVar47 = fVar40 + fVar41;
              fVar48 = fVar48 - fVar38;
              fVar40 = fVar40 - fVar41;
              fVar38 = fVar58 + fVar43;
              fVar41 = fVar37 + fVar46;
              fVar58 = fVar58 - fVar43;
              fVar37 = fVar37 - fVar46;
              *(float *)((long)param_1 + lVar25) = fVar35 * (fVar45 + fVar38);
              ((float *)((long)param_1 + lVar25))[1] = fVar35 * (fVar47 + fVar41);
              pfVar23 = (float *)((long)param_1 + lVar25 + ((long)(int)uVar15 << 3 | 4U));
              pfVar23[-1] = fVar35 * (fVar48 - fVar37);
              *pfVar23 = fVar35 * (fVar40 + fVar58);
              pfVar23 = (float *)((long)param_1 + lVar25 + uVar11);
              *pfVar23 = fVar35 * (fVar45 - fVar38);
              pfVar23[1] = fVar35 * (fVar47 - fVar41);
              pfVar23 = (float *)((long)param_1 + lVar25 + uVar18);
              *pfVar23 = fVar35 * (fVar48 + fVar37);
              pfVar23[1] = fVar35 * (fVar40 - fVar58);
              lVar25 = lVar25 + 8;
              uVar24 = (int)uVar32 - 1;
              uVar32 = (ulong)uVar24;
            } while (uVar24 != 0);
            pfVar12 = (float *)((long)pfVar12 + lVar25);
            param_1 = (float *)((long)param_1 + lVar25);
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 != uVar20);
        return;
      }
      *(ulong *)param_1 =
           CONCAT44(((float)((ulong)*(undefined8 *)param_2 >> 0x20) +
                    (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20)) * fVar35,
                    ((float)*(undefined8 *)param_2 + (float)*(undefined8 *)(param_2 + 2)) * fVar35);
      fVar37 = ((float)*(undefined8 *)param_2 - (float)*(undefined8 *)(param_2 + 2)) * fVar35;
      fVar35 = ((float)((ulong)*(undefined8 *)param_2 >> 0x20) -
               (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20)) * fVar35;
    }
    *(ulong *)(param_1 + 2) = CONCAT44(fVar35,fVar37);
    return;
  }
  lVar14 = *(long *)(param_3 + 0x10);
  if (param_4 == 0) {
    iVar17 = *(int *)(param_3 + 0x28);
  }
  else {
    iVar17 = *(int *)(param_3 + 0x2c);
  }
  bVar7 = iVar17 != 0;
  bVar1 = param_4 != 0;
  uVar16 = *puVar9;
  uVar20 = puVar9[1];
  uVar27 = (ulong)uVar20;
  uVar24 = puVar9[(int)(uVar16 << 1)];
  uVar18 = (ulong)uVar24;
  uVar15 = uVar24 * uVar20;
  pfVar23 = *(float **)(param_3 + 0x18);
  if ((uVar16 & 1) != 0) {
    pfVar23 = param_1;
    param_1 = *(float **)(param_3 + 0x18);
  }
  if ((int)uVar24 < 4) {
    if (uVar24 == 2) {
      if (0 < (int)uVar20) {
        fVar35 = 1.0 / (float)(int)uVar15;
        iVar17 = uVar20 + 1;
        param_2 = param_2 + 1;
        pfVar12 = param_2 + (long)((int)uVar15 / 2) * 2;
        pfVar21 = pfVar23;
        do {
          pfVar22 = param_2 + -1;
          pfVar29 = pfVar12 + -1;
          fVar37 = *pfVar12;
          fVar38 = *param_2;
          if (bVar1) {
            fVar37 = -*pfVar12;
            fVar38 = -*param_2;
          }
          pfVar12 = pfVar12 + 2;
          param_2 = param_2 + 2;
          fVar48 = *pfVar29;
          fVar41 = *pfVar22;
          if (bVar7) {
            fVar37 = fVar37 * fVar35;
            fVar48 = *pfVar29 * fVar35;
            fVar38 = fVar38 * fVar35;
            fVar41 = *pfVar22 * fVar35;
          }
          fVar40 = fVar38 - fVar37;
          fVar43 = fVar38 + fVar37;
          if (bVar1) {
            fVar40 = -(fVar38 - fVar37);
            fVar43 = -(fVar38 + fVar37);
          }
          *pfVar21 = fVar41 + fVar48;
          pfVar21[1] = fVar43;
          pfVar21[2] = fVar41 - fVar48;
          pfVar21[3] = fVar40;
          iVar17 = iVar17 + -1;
          pfVar21 = pfVar21 + 4;
        } while (1 < iVar17);
      }
      goto LAB_10987cc54;
    }
    if (uVar24 == 3) {
      if (0 < (int)uVar20) {
        fVar35 = 1.0 / (float)(int)uVar15;
        iVar17 = uVar20 + 1;
        param_2 = param_2 + 1;
        pfVar12 = param_2 + (long)(((int)uVar15 / 3) * 2) * 2;
        pfVar21 = param_2 + (long)((int)uVar15 / 3) * 2;
        pfVar22 = pfVar23;
        do {
          pfVar29 = param_2 + -1;
          pfVar28 = pfVar12 + -1;
          fVar37 = *pfVar12;
          fVar38 = *pfVar21;
          fVar48 = *param_2;
          if (bVar1) {
            fVar37 = -*pfVar12;
            fVar38 = -*pfVar21;
            fVar48 = -*param_2;
          }
          param_2 = param_2 + 2;
          pfVar12 = pfVar12 + 2;
          fVar41 = *pfVar28;
          fVar40 = pfVar21[-1];
          fVar43 = *pfVar29;
          if (bVar7) {
            fVar37 = fVar37 * fVar35;
            fVar41 = *pfVar28 * fVar35;
            fVar38 = fVar38 * fVar35;
            fVar40 = pfVar21[-1] * fVar35;
            fVar48 = fVar48 * fVar35;
            fVar43 = *pfVar29 * fVar35;
          }
          fVar46 = fVar43 - (fVar40 + fVar41) * 0.5;
          fVar58 = fVar48 - (fVar38 + fVar37) * 0.5;
          fVar45 = (fVar40 - fVar41) * -0.8660254;
          fVar47 = (fVar38 - fVar37) * -0.8660254;
          fVar48 = fVar48 + fVar38 + fVar37;
          fVar37 = fVar58 - fVar45;
          fVar45 = fVar45 + fVar58;
          pfVar21 = pfVar21 + 2;
          if (bVar1) {
            fVar45 = -fVar45;
            fVar48 = -fVar48;
          }
          *pfVar22 = fVar43 + fVar40 + fVar41;
          pfVar22[1] = fVar48;
          if (bVar1) {
            fVar37 = -fVar37;
          }
          pfVar22[2] = fVar46 - fVar47;
          pfVar22[3] = fVar45;
          pfVar22[4] = fVar47 + fVar46;
          pfVar22[5] = fVar37;
          iVar17 = iVar17 + -1;
          pfVar22 = pfVar22 + 6;
        } while (1 < iVar17);
      }
      goto LAB_10987cc54;
    }
    goto LAB_10987c8a4;
  }
  if (uVar24 == 4) {
    if (0 < (int)uVar20) {
      uVar5 = uVar15 + 3;
      if (-1 < (int)uVar15) {
        uVar5 = uVar15;
      }
      uVar5 = (int)uVar5 >> 2;
      fVar35 = 1.0 / (float)(int)uVar15;
      iVar17 = uVar20 + 1;
      param_2 = param_2 + 1;
      pfVar12 = param_2 + (long)(int)(uVar5 * 3) * 2;
      pfVar21 = param_2 + (long)(int)(uVar5 * 2) * 2;
      pfVar22 = pfVar23;
      do {
        pfVar29 = param_2 + -1;
        fVar41 = *param_2;
        pfVar28 = (float *)((long)param_2 +
                           (-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3));
        fVar40 = pfVar28[-1];
        fVar48 = *pfVar28;
        pfVar28 = pfVar21 + -1;
        fVar38 = *pfVar21;
        pfVar33 = pfVar12 + -1;
        fVar37 = *pfVar12;
        param_2 = param_2 + 2;
        pfVar12 = pfVar12 + 2;
        pfVar21 = pfVar21 + 2;
        if (bVar1) {
          fVar37 = -fVar37;
          fVar38 = -fVar38;
          fVar48 = -fVar48;
          fVar41 = -fVar41;
        }
        fVar43 = *pfVar33;
        fVar58 = *pfVar28;
        fVar46 = *pfVar29;
        if (bVar7) {
          fVar37 = fVar37 * fVar35;
          fVar43 = *pfVar33 * fVar35;
          fVar38 = fVar38 * fVar35;
          fVar58 = *pfVar28 * fVar35;
          fVar48 = fVar48 * fVar35;
          fVar40 = fVar40 * fVar35;
          fVar41 = fVar41 * fVar35;
          fVar46 = *pfVar29 * fVar35;
        }
        fVar47 = (fVar41 + fVar38) - (fVar48 + fVar37);
        fVar50 = fVar41 + fVar38 + fVar48 + fVar37;
        fVar45 = (fVar41 - fVar38) - (fVar40 - fVar43);
        fVar38 = (fVar41 - fVar38) + (fVar40 - fVar43);
        if (bVar1) {
          fVar50 = -fVar50;
        }
        *pfVar22 = fVar46 + fVar58 + fVar40 + fVar43;
        pfVar22[1] = fVar50;
        if (bVar1) {
          fVar47 = -fVar47;
          fVar45 = -fVar45;
        }
        pfVar22[2] = (fVar46 - fVar58) + (fVar48 - fVar37);
        pfVar22[3] = fVar45;
        if (bVar1) {
          fVar38 = -fVar38;
        }
        pfVar22[4] = (fVar46 + fVar58) - (fVar40 + fVar43);
        pfVar22[5] = fVar47;
        pfVar22[6] = (fVar46 - fVar58) - (fVar48 - fVar37);
        pfVar22[7] = fVar38;
        iVar17 = iVar17 + -1;
        pfVar22 = pfVar22 + 8;
      } while (1 < iVar17);
    }
    goto LAB_10987cc54;
  }
  if (uVar24 == 5) {
    FUN_10987d1e4(pfVar23,param_2,0,uVar27,1,uVar15,1,bVar1,bVar7);
    goto LAB_10987cc54;
  }
  if (uVar24 == 8) {
    if (0 < (int)uVar20) {
      uVar5 = uVar15 + 7;
      if (-1 < (int)uVar15) {
        uVar5 = uVar15;
      }
      uVar10 = (int)uVar5 >> 3;
      fVar35 = 1.0 / (float)(int)uVar15;
      iVar17 = uVar20 + 1;
      pfVar21 = pfVar23;
      pfVar12 = param_2;
      do {
        pfVar22 = (float *)((long)pfVar12 +
                           (-(ulong)((uVar10 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                           (ulong)(uVar10 * 2) << 3));
        pfVar29 = (float *)((long)pfVar12 +
                           (-(ulong)((uVar10 & 0x3fffffff) >> 0x1d) & 0xfffffff800000000 |
                           (ulong)(uVar10 * 4) << 3));
        pfVar28 = (float *)((long)pfVar12 +
                           (-(ulong)((uVar10 * 3 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                           (ulong)(uVar10 * 6) << 3));
        fVar52 = *pfVar22;
        fVar46 = pfVar22[1];
        fVar50 = *pfVar29;
        fVar43 = pfVar29[1];
        fVar47 = *pfVar28;
        fVar40 = pfVar28[1];
        fVar48 = (float)((ulong)*(undefined8 *)
                                 (pfVar12 + ((long)((ulong)uVar5 << 0x20) >> 0x23) * 2) >> 0x20);
        fVar41 = (float)((ulong)*(undefined8 *)(pfVar12 + (long)(int)(uVar10 * 3) * 2) >> 0x20);
        fVar55 = (float)((ulong)*(undefined8 *)(pfVar12 + (long)(int)(uVar10 * 5) * 2) >> 0x20);
        fVar57 = (float)((ulong)*(undefined8 *)
                                 (pfVar12 + (long)(int)((uVar5 & 0xfffffff8) - uVar10) * 2) >> 0x20)
        ;
        fVar54 = (float)*(undefined8 *)(pfVar12 + (long)(int)((uVar5 & 0xfffffff8) - uVar10) * 2);
        fVar38 = (float)*(undefined8 *)(pfVar12 + (long)(int)(uVar10 * 5) * 2);
        fVar45 = (float)*(undefined8 *)(pfVar12 + (long)(int)(uVar10 * 3) * 2);
        fVar37 = (float)*(undefined8 *)(pfVar12 + ((long)((ulong)uVar5 << 0x20) >> 0x23) * 2);
        fVar58 = pfVar12[1];
        if (bVar1) {
          fVar55 = -fVar55;
          fVar57 = -fVar57;
          fVar48 = -fVar48;
          fVar41 = -fVar41;
          fVar40 = -fVar40;
          fVar43 = -fVar43;
          fVar58 = -pfVar12[1];
          fVar46 = -fVar46;
        }
        fVar60 = *pfVar12;
        if (bVar7) {
          fVar48 = fVar48 * fVar35;
          fVar41 = fVar41 * fVar35;
          fVar55 = fVar55 * fVar35;
          fVar57 = fVar57 * fVar35;
          fVar37 = fVar37 * fVar35;
          fVar45 = fVar45 * fVar35;
          fVar40 = fVar40 * fVar35;
          fVar47 = fVar47 * fVar35;
          fVar43 = fVar43 * fVar35;
          fVar46 = fVar46 * fVar35;
          fVar50 = fVar50 * fVar35;
          fVar60 = *pfVar12 * fVar35;
          fVar58 = fVar58 * fVar35;
          fVar52 = fVar52 * fVar35;
          fVar38 = fVar38 * fVar35;
          fVar54 = fVar54 * fVar35;
        }
        fVar64 = (fVar60 - fVar50) * 0.0 + (fVar58 - fVar43);
        fVar61 = (fVar37 - fVar38) * 0.70711;
        fVar51 = (fVar45 - fVar54) * -0.70711;
        fVar59 = (fVar48 - fVar55) * 0.70711;
        fVar63 = (fVar41 - fVar57) * -0.70711;
        fVar65 = fVar61 + fVar59;
        fVar62 = fVar51 + fVar63;
        fVar51 = fVar51 - fVar63;
        fVar59 = fVar59 - fVar61;
        fVar63 = (fVar60 - fVar50) - (fVar58 - fVar43) * 0.0;
        fVar56 = fVar60 + fVar50 + fVar52 + fVar47;
        fVar61 = fVar58 + fVar43 + fVar46 + fVar40;
        fVar60 = (fVar60 + fVar50) - (fVar52 + fVar47);
        fVar43 = (fVar58 + fVar43) - (fVar46 + fVar40);
        fVar58 = (fVar52 - fVar47) * 0.0 + (fVar46 - fVar40);
        fVar40 = (fVar46 - fVar40) * 0.0 - (fVar52 - fVar47);
        fVar50 = fVar48 + fVar55 + fVar41 + fVar57;
        fVar52 = fVar37 + fVar38 + fVar45 + fVar54;
        fVar41 = (fVar48 + fVar55) - (fVar41 + fVar57);
        fVar47 = (fVar37 + fVar38) - (fVar45 + fVar54);
        fVar54 = fVar63 + fVar58;
        fVar48 = fVar64 + fVar40;
        fVar63 = fVar63 - fVar58;
        fVar64 = fVar64 - fVar40;
        fVar46 = fVar65 + fVar51;
        fVar55 = fVar59 - fVar62;
        fVar59 = fVar59 + fVar62;
        fVar57 = fVar60 - fVar43 * 0.0;
        fVar43 = fVar60 * 0.0 + fVar43;
        fVar65 = fVar65 - fVar51;
        fVar45 = fVar47 * 0.0 + fVar41;
        fVar47 = fVar41 * 0.0 - fVar47;
        fVar38 = fVar64 + fVar63 * 0.0;
        fVar60 = fVar55 * 0.0 - fVar65;
        fVar40 = fVar61 + fVar50;
        fVar61 = fVar61 - fVar50;
        fVar37 = fVar43 + fVar47;
        fVar63 = fVar63 - fVar64 * 0.0;
        fVar43 = fVar43 - fVar47;
        fVar58 = fVar48 + fVar59;
        fVar48 = fVar48 - fVar59;
        fVar55 = fVar55 + fVar65 * 0.0;
        fVar41 = fVar38 + fVar60;
        if (bVar1) {
          fVar61 = -fVar61;
        }
        pfVar21[8] = fVar56 - fVar52;
        pfVar21[9] = fVar61;
        fVar38 = fVar38 - fVar60;
        if (bVar1) {
          fVar41 = -fVar41;
          fVar38 = -fVar38;
        }
        pfVar21[6] = fVar63 + fVar55;
        pfVar21[7] = fVar41;
        if (bVar1) {
          fVar40 = -fVar40;
          fVar48 = -fVar48;
          fVar43 = -fVar43;
        }
        *pfVar21 = fVar56 + fVar52;
        pfVar21[1] = fVar40;
        if (bVar1) {
          fVar58 = -fVar58;
        }
        pfVar21[10] = fVar54 - fVar46;
        pfVar21[0xb] = fVar48;
        pfVar21[2] = fVar54 + fVar46;
        pfVar21[3] = fVar58;
        pfVar21[0xc] = fVar57 - fVar45;
        pfVar21[0xd] = fVar43;
        if (bVar1) {
          fVar37 = -fVar37;
        }
        pfVar21[4] = fVar57 + fVar45;
        pfVar21[5] = fVar37;
        pfVar21[0xe] = fVar63 - fVar55;
        pfVar21[0xf] = fVar38;
        pfVar12 = pfVar12 + 2;
        pfVar21 = pfVar21 + 0x10;
        iVar17 = iVar17 + -1;
      } while (1 < iVar17);
      goto LAB_10987c8a4;
    }
    _malloc(0x40);
  }
  else {
LAB_10987c8a4:
    puVar8 = (ulong *)((long)(int)uVar24 << 3);
    _malloc();
    if (0 < (int)uVar20) {
      pfVar12 = pfVar23;
      uVar11 = uVar27;
      do {
        pfVar21 = (float *)((long)puVar8 + 4);
        pfVar22 = param_2;
        uVar32 = uVar18;
        if (0 < (int)uVar24) {
          do {
            uVar31 = *(undefined8 *)pfVar22;
            *(undefined8 *)(pfVar21 + -1) = uVar31;
            if (bVar1) {
              fVar35 = -(float)((ulong)uVar31 >> 0x20);
              *pfVar21 = fVar35;
              if (bVar7) {
                pfVar21[-1] = (1.0 / (float)(int)uVar15) * (float)uVar31;
                *pfVar21 = (1.0 / (float)(int)uVar15) * fVar35;
              }
            }
            pfVar22 = pfVar22 + uVar27 * 2;
            pfVar21 = pfVar21 + 2;
            uVar32 = uVar32 - 1;
          } while (uVar32 != 0);
          uVar32 = 0;
          uVar13 = *puVar8;
          do {
            pfVar21 = pfVar12 + uVar32 * 2;
            *(ulong *)pfVar21 = uVar13;
            fVar35 = (float)(uVar13 >> 0x20);
            if (1 < (int)uVar24) {
              iVar17 = 0;
              lVar25 = uVar18 - 1;
              pfVar22 = (float *)((long)puVar8 + 0xc);
              uVar19 = uVar13 >> 0x20;
              uVar26 = uVar13 & 0xffffffff;
              do {
                iVar17 = iVar17 + (int)uVar32;
                uVar20 = 0;
                if ((int)uVar24 <= iVar17) {
                  uVar20 = uVar24;
                }
                iVar17 = iVar17 - uVar20;
                pfVar29 = (float *)(lVar14 + (long)iVar17 * 8);
                fVar35 = *pfVar29;
                fVar38 = pfVar29[1];
                fVar37 = (float)uVar26 + (pfVar22[-1] * fVar35 - *pfVar22 * fVar38);
                uVar26 = (ulong)(uint)fVar37;
                fVar35 = (float)uVar19 + fVar35 * *pfVar22 + pfVar22[-1] * fVar38;
                uVar19 = (ulong)(uint)fVar35;
                *pfVar21 = fVar37;
                pfVar21[1] = fVar35;
                pfVar22 = pfVar22 + 2;
                lVar25 = lVar25 + -1;
              } while (lVar25 != 0);
            }
            if (bVar1) {
              pfVar21[1] = -fVar35;
            }
            uVar32 = uVar32 + 1;
          } while (uVar32 != uVar18);
        }
        pfVar12 = pfVar12 + (long)(int)uVar24 * 2;
        param_2 = param_2 + 2;
        iVar17 = (int)uVar11;
        uVar20 = iVar17 - 1;
        uVar11 = (ulong)uVar20;
      } while (uVar20 != 0 && 0 < iVar17);
    }
  }
  _free();
LAB_10987cc54:
  if (1 < (int)uVar16) {
    uVar20 = uVar15 + 3;
    if (-1 < (int)uVar15) {
      uVar20 = uVar15;
    }
    uVar20 = (int)uVar20 >> 2;
    uVar5 = (int)uVar15 / 3;
    uVar32 = 1;
    pfVar12 = (float *)(lVar14 + (long)(int)(-(uVar24 & 1) & uVar24) * 8);
    uVar11 = (ulong)uVar16;
    pfStack_90 = param_1;
    do {
      pfVar21 = pfVar23;
      uVar24 = (int)uVar32 * (int)uVar18;
      uVar32 = (ulong)uVar24;
      uVar16 = puVar9[(int)(uVar11 - 1) << 1];
      uVar18 = (ulong)uVar16;
      uVar10 = 0;
      if (uVar16 != 0) {
        uVar10 = (int)uVar27 / (int)uVar16;
      }
      uVar27 = (ulong)uVar10;
      if ((int)uVar16 < 4) {
        if (uVar16 == 2) {
          if (0 < (int)uVar10) {
            pfVar22 = pfStack_90;
            uVar13 = uVar27;
            pfVar23 = pfVar21;
            pfVar29 = pfVar12;
            do {
              pfVar28 = pfVar29;
              uVar10 = uVar24 + 1;
              if (0 < (int)uVar24) {
                do {
                  fVar38 = *pfVar23;
                  pfVar29 = (float *)((long)pfVar23 +
                                     (-(ulong)((uint)((int)uVar15 / 2) >> 0x1f) & 0xfffffff800000000
                                     | (ulong)(uint)((int)uVar15 / 2) << 3));
                  fVar48 = *pfVar29;
                  fVar37 = pfVar29[1];
                  fVar35 = pfVar23[1];
                  if (bVar1) {
                    fVar37 = -fVar37;
                    fVar35 = -pfVar23[1];
                  }
                  pfVar29 = pfVar28 + 2;
                  fVar41 = fVar48 * *pfVar28 - fVar37 * pfVar28[1];
                  fVar48 = fVar37 * *pfVar28 + fVar48 * pfVar28[1];
                  fVar37 = fVar35 + fVar48;
                  fVar35 = fVar35 - fVar48;
                  if (bVar1) {
                    fVar35 = -fVar35;
                    fVar37 = -fVar37;
                  }
                  *pfVar22 = fVar38 + fVar41;
                  pfVar22[1] = fVar37;
                  pfVar28 = (float *)((long)pfVar22 +
                                     (-(ulong)(uVar24 >> 0x1f) & 0xfffffff800000000 | uVar32 << 3));
                  *pfVar28 = fVar38 - fVar41;
                  pfVar28[1] = fVar35;
                  pfVar23 = pfVar23 + 2;
                  pfVar22 = pfVar22 + 2;
                  uVar10 = uVar10 - 1;
                  pfVar28 = pfVar29;
                } while (1 < uVar10);
              }
              pfVar29 = pfVar29 + (long)(int)uVar24 * -2;
              pfVar22 = pfVar22 + (long)(int)uVar24 * 2;
              iVar17 = (int)uVar13;
              uVar10 = iVar17 - 1;
              uVar13 = (ulong)uVar10;
            } while (uVar10 != 0 && 0 < iVar17);
          }
        }
        else if ((uVar16 == 3) && (0 < (int)uVar10)) {
          uVar19 = -(ulong)(uVar24 >> 0x1f) & 0xfffffff800000000 | uVar32 << 3;
          pfVar23 = pfStack_90;
          uVar13 = uVar27;
          pfVar22 = pfVar21;
          pfVar29 = pfVar12;
          do {
            if (0 < (int)uVar24) {
              lVar14 = 0;
              uVar10 = uVar24 + 1;
              do {
                pfVar28 = (float *)((long)pfVar22 +
                                   lVar14 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 |
                                            (ulong)uVar5 << 3));
                fVar48 = *(float *)((long)pfVar22 + lVar14);
                fVar35 = ((float *)((long)pfVar22 + lVar14))[1];
                fVar41 = *pfVar28;
                fVar37 = pfVar28[1];
                pfVar28 = (float *)((long)pfVar22 +
                                   lVar14 + (-(ulong)((uVar5 & 0x7fffffff) >> 0x1e) &
                                             0xfffffff800000000 | (ulong)(uVar5 * 2) << 3));
                fVar40 = *pfVar28;
                fVar38 = pfVar28[1];
                if (bVar1) {
                  fVar38 = -fVar38;
                  fVar37 = -fVar37;
                }
                fVar43 = *(float *)((long)pfVar29 + lVar14);
                fVar58 = ((float *)((long)pfVar29 + lVar14))[1];
                pfVar28 = (float *)((long)pfVar29 + lVar14 + uVar19 + 4);
                fVar46 = pfVar28[-1];
                fVar45 = *pfVar28;
                if (bVar1) {
                  fVar35 = -fVar35;
                }
                fVar47 = fVar41 * fVar43 - fVar37 * fVar58;
                fVar41 = fVar37 * fVar43 + fVar41 * fVar58;
                fVar43 = fVar40 * fVar46 - fVar38 * fVar45;
                fVar58 = fVar38 * fVar46 + fVar40 * fVar45;
                fVar46 = fVar47 + fVar43;
                fVar45 = fVar41 + fVar58;
                fVar37 = fVar48 - fVar46 * 0.5;
                fVar38 = fVar35 - fVar45 * 0.5;
                fVar40 = (fVar47 - fVar43) * -0.8660254;
                fVar43 = (fVar41 - fVar58) * -0.8660254;
                fVar35 = fVar35 + fVar45;
                fVar41 = fVar38 - fVar40;
                fVar40 = fVar40 + fVar38;
                if (bVar1) {
                  fVar40 = -fVar40;
                  fVar35 = -fVar35;
                }
                *(float *)((long)pfVar23 + lVar14) = fVar48 + fVar46;
                ((float *)((long)pfVar23 + lVar14))[1] = fVar35;
                if (bVar1) {
                  fVar41 = -fVar41;
                }
                pfVar28 = (float *)((long)pfVar23 + lVar14 + uVar19);
                *pfVar28 = fVar37 - fVar43;
                pfVar28[1] = fVar40;
                pfVar28 = (float *)((long)pfVar23 +
                                   lVar14 + (-(ulong)((uVar24 & 0x7fffffff) >> 0x1e) &
                                             0xfffffff800000000 | (ulong)(uVar24 * 2) << 3));
                *pfVar28 = fVar43 + fVar37;
                pfVar28[1] = fVar41;
                lVar14 = lVar14 + 8;
                uVar10 = uVar10 - 1;
              } while (1 < uVar10);
              pfVar23 = (float *)((long)pfVar23 + lVar14);
              pfVar22 = (float *)((long)pfVar22 + lVar14);
              pfVar29 = (float *)((long)pfVar29 + lVar14);
            }
            pfVar29 = pfVar29 + (long)(int)uVar24 * -2;
            pfVar23 = pfVar23 + (long)(int)(uVar24 * 2) * 2;
            iVar17 = (int)uVar13;
            uVar10 = iVar17 - 1;
            uVar13 = (ulong)uVar10;
          } while (uVar10 != 0 && 0 < iVar17);
        }
      }
      else if (uVar16 == 4) {
        if (0 < (int)uVar10) {
          uVar10 = uVar24 * 3;
          uVar19 = -(ulong)(uVar24 >> 0x1f) & 0xfffffff800000000 | uVar32 << 3;
          uVar26 = -(ulong)((uVar24 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                   (ulong)(uVar24 * 2) << 3;
          pfVar23 = pfStack_90;
          uVar13 = uVar27;
          pfVar22 = pfVar21;
          pfVar29 = pfVar12;
          do {
            if (0 < (int)uVar24) {
              lVar14 = 0;
              iVar17 = uVar24 + 1;
              do {
                uVar31 = *(undefined8 *)
                          ((long)pfVar22 +
                          lVar14 + (-(ulong)((uVar20 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                                   (ulong)(uVar20 * 2) << 3));
                uVar44 = *(undefined8 *)
                          ((long)pfVar22 +
                          lVar14 + (-(ulong)(uVar20 * 3 >> 0x1f) & 0xfffffff800000000 |
                                   (ulong)(uVar20 * 3) << 3));
                fVar38 = (float)((ulong)uVar31 >> 0x20);
                fVar48 = (float)((ulong)uVar44 >> 0x20);
                fVar41 = *(float *)((long)pfVar22 + lVar14);
                fVar35 = ((float *)((long)pfVar22 + lVar14))[1];
                pfVar28 = (float *)((long)pfVar22 +
                                   lVar14 + (-(ulong)(uVar20 >> 0x1f) & 0xfffffff800000000 |
                                            (ulong)uVar20 << 3));
                fVar40 = *pfVar28;
                fVar37 = pfVar28[1];
                uVar42 = CONCAT44(-fVar48,-fVar38);
                puVar3 = (undefined8 *)((long)pfVar29 + lVar14 + uVar19);
                if (bVar1) {
                  fVar35 = -fVar35;
                }
                puVar4 = (undefined8 *)((long)pfVar29 + lVar14 + uVar26);
                uVar49 = *puVar3;
                uVar53 = *puVar4;
                fVar43 = (float)uVar31;
                fVar58 = (float)uVar44;
                if (bVar1) {
                  fVar37 = -fVar37;
                }
                uVar31 = *(undefined8 *)((long)pfVar29 + lVar14);
                uVar42 = uVar42 ^ (uVar42 ^ CONCAT44(fVar48,fVar38)) &
                                  CONCAT44(-(uint)!bVar1,-(uint)!bVar1);
                fVar54 = (float)uVar31;
                fVar47 = fVar37 * fVar54 + fVar40 * *(float *)((long)pfVar29 + lVar14 + 4);
                fVar50 = (float)uVar49;
                fVar38 = (float)uVar53;
                fVar46 = (float)uVar42;
                fVar45 = (float)(uVar42 >> 0x20);
                fVar48 = fVar43 * fVar50 - *(float *)((long)puVar3 + 4) * fVar46;
                fVar46 = fVar46 * fVar50 + fVar43 * (float)((ulong)uVar49 >> 0x20);
                fVar50 = fVar45 * fVar38 + fVar58 * (float)((ulong)uVar53 >> 0x20);
                fVar52 = fVar41 + fVar48;
                fVar40 = fVar40 * fVar54 - fVar37 * (float)((ulong)uVar31 >> 0x20);
                fVar43 = fVar58 * fVar38 - fVar45 * *(float *)((long)puVar4 + 4);
                fVar41 = fVar41 - fVar48;
                fVar37 = fVar35 - fVar46;
                fVar58 = fVar40 + fVar43;
                fVar35 = fVar35 + fVar46;
                fVar38 = fVar47 + fVar50;
                fVar40 = fVar40 - fVar43;
                fVar47 = fVar47 - fVar50;
                fVar48 = fVar35 - fVar38;
                fVar35 = fVar35 + fVar38;
                fVar38 = fVar37 - fVar40;
                fVar37 = fVar37 + fVar40;
                if (bVar1) {
                  fVar35 = -fVar35;
                }
                *(float *)((long)pfVar23 + lVar14) = fVar52 + fVar58;
                ((float *)((long)pfVar23 + lVar14))[1] = fVar35;
                if (bVar1) {
                  fVar38 = -fVar38;
                }
                pfVar28 = (float *)((long)pfVar23 + lVar14 + uVar19);
                if (bVar1) {
                  fVar48 = -fVar48;
                }
                *pfVar28 = fVar41 + fVar47;
                pfVar28[1] = fVar38;
                if (bVar1) {
                  fVar37 = -fVar37;
                }
                pfVar28 = (float *)((long)pfVar23 + lVar14 + uVar26);
                *pfVar28 = fVar52 - fVar58;
                pfVar28[1] = fVar48;
                pfVar28 = (float *)((long)pfVar23 +
                                   lVar14 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 |
                                            (ulong)uVar10 << 3));
                *pfVar28 = fVar41 - fVar47;
                pfVar28[1] = fVar37;
                lVar14 = lVar14 + 8;
                iVar17 = iVar17 + -1;
              } while (1 < iVar17);
              pfVar23 = (float *)((long)pfVar23 + lVar14);
              pfVar22 = (float *)((long)pfVar22 + lVar14);
              pfVar29 = (float *)((long)pfVar29 + lVar14);
            }
            pfVar29 = pfVar29 + (long)(int)uVar24 * -2;
            pfVar23 = pfVar23 + (long)(int)uVar10 * 2;
            iVar17 = (int)uVar13;
            uVar6 = iVar17 - 1;
            uVar13 = (ulong)uVar6;
          } while (uVar6 != 0 && 0 < iVar17);
        }
      }
      else if (uVar16 == 5) {
        FUN_10987d1e4(pfStack_90,pfVar21,pfVar12,uVar27,uVar32,uVar15,0,bVar1,0);
      }
      pfVar12 = pfVar12 + (long)(int)((uVar16 - 1) * uVar24) * 2;
      bVar7 = 2 < (long)uVar11;
      uVar11 = uVar11 - 1;
      pfVar23 = pfStack_90;
      pfStack_90 = pfVar21;
    } while (bVar7);
  }
  return;
}



/* Entry: 10987b1b4; end: 10987c3a7;  */

void FUN_10987b1b4(float *param_1,float *param_2,int *param_3,int param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  undefined8 uVar5;
  bool bVar6;
  float *pfVar7;
  undefined8 *puVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  uint *puVar17;
  int *piVar18;
  float *pfVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  float *pfVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  ulong uVar28;
  uint uVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  uint uVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  uint uVar37;
  ulong uVar38;
  float *pfVar39;
  int iVar40;
  long lVar41;
  uint uVar42;
  undefined8 uVar43;
  ulong uVar44;
  float *pfVar45;
  ulong uVar46;
  int iVar47;
  long lVar48;
  float fVar49;
  float fVar51;
  float fVar52;
  undefined1 auVar50 [16];
  undefined8 uVar53;
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float *pfStack_98;
  float *pfVar8;
  
  iVar27 = *param_3;
  if (0xe < iVar27) {
    piVar18 = *(int **)(param_3 + 2);
    iVar21 = *piVar18;
    iVar40 = iVar21 * 2;
    if (piVar18[iVar40 + 2] != 1) {
      pfStack_98 = *(float **)(param_3 + 4);
      if (param_4 == 0) {
        if (iVar27 != 0x10) {
          pfVar39 = *(float **)(param_3 + 6);
          uVar26 = piVar18[1];
          uVar34 = (ulong)uVar26;
          uVar38 = (ulong)(uint)(piVar18 + iVar40)[-1];
          iVar27 = piVar18[iVar40];
          if (iVar27 == 4) {
            if (0 < (int)uVar26) {
              iVar27 = 0;
              uVar34 = (ulong)(uVar26 << 1);
              pfVar19 = param_1;
              do {
                pfVar31 = (float *)((long)param_2 +
                                   (-(ulong)((uVar26 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                                   uVar34 << 2));
                pfVar32 = (float *)((long)param_2 +
                                   (-(ulong)((uVar26 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                                   uVar34 << 3));
                pfVar24 = param_2 + (-(ulong)((uVar26 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000 |
                                    uVar34 << 1) + (long)(int)(uVar26 << 1);
                fVar127 = *param_2 + *pfVar32;
                fVar109 = param_2[2] + pfVar32[2];
                fVar76 = param_2[4] + pfVar32[4];
                fVar93 = param_2[6] + pfVar32[6];
                fVar119 = param_2[1] + pfVar32[1];
                fVar61 = param_2[3] + pfVar32[3];
                fVar62 = param_2[5] + pfVar32[5];
                fVar63 = param_2[7] + pfVar32[7];
                fVar64 = *param_2 - *pfVar32;
                fVar65 = param_2[2] - pfVar32[2];
                fVar66 = param_2[4] - pfVar32[4];
                fVar67 = param_2[6] - pfVar32[6];
                fVar49 = param_2[1] - pfVar32[1];
                fVar51 = param_2[3] - pfVar32[3];
                fVar52 = param_2[5] - pfVar32[5];
                fVar68 = param_2[7] - pfVar32[7];
                fVar56 = *pfVar31 + *pfVar24;
                fVar55 = pfVar31[2] + pfVar24[2];
                fVar57 = pfVar31[4] + pfVar24[4];
                fVar103 = pfVar31[6] + pfVar24[6];
                fVar77 = pfVar31[1] + pfVar24[1];
                fVar82 = pfVar31[3] + pfVar24[3];
                fVar91 = pfVar31[5] + pfVar24[5];
                fVar97 = pfVar31[7] + pfVar24[7];
                fVar113 = *pfVar31 - *pfVar24;
                fVar118 = pfVar31[2] - pfVar24[2];
                fVar120 = pfVar31[4] - pfVar24[4];
                fVar126 = pfVar31[6] - pfVar24[6];
                fVar59 = pfVar31[1] - pfVar24[1];
                fVar58 = pfVar31[3] - pfVar24[3];
                fVar60 = pfVar31[5] - pfVar24[5];
                fVar75 = pfVar31[7] - pfVar24[7];
                *pfVar19 = fVar127 + fVar56;
                pfVar19[1] = fVar119 + fVar77;
                pfVar19[2] = fVar64 + fVar59;
                pfVar19[3] = fVar49 - fVar113;
                pfVar19[4] = fVar127 - fVar56;
                pfVar19[5] = fVar119 - fVar77;
                pfVar19[6] = fVar64 - fVar59;
                pfVar19[7] = fVar49 + fVar113;
                pfVar19[8] = fVar109 + fVar55;
                pfVar19[9] = fVar61 + fVar82;
                pfVar19[10] = fVar65 + fVar58;
                pfVar19[0xb] = fVar51 - fVar118;
                pfVar19[0xc] = fVar109 - fVar55;
                pfVar19[0xd] = fVar61 - fVar82;
                pfVar19[0xe] = fVar65 - fVar58;
                pfVar19[0xf] = fVar51 + fVar118;
                pfVar19[0x10] = fVar76 + fVar57;
                pfVar19[0x11] = fVar62 + fVar91;
                pfVar19[0x12] = fVar66 + fVar60;
                pfVar19[0x13] = fVar52 - fVar120;
                pfVar19[0x14] = fVar76 - fVar57;
                pfVar19[0x15] = fVar62 - fVar91;
                pfVar19[0x16] = fVar66 - fVar60;
                pfVar19[0x17] = fVar52 + fVar120;
                pfVar19[0x18] = fVar93 + fVar103;
                pfVar19[0x19] = fVar63 + fVar97;
                pfVar19[0x1a] = fVar67 + fVar75;
                pfVar19[0x1b] = fVar68 - fVar126;
                pfVar19[0x1c] = fVar93 - fVar103;
                pfVar19[0x1d] = fVar63 - fVar97;
                pfVar19[0x1e] = fVar67 - fVar75;
                pfVar19[0x1f] = fVar68 + fVar126;
                pfVar19 = pfVar19 + 0x20;
                iVar27 = iVar27 + 4;
                param_2 = (float *)((long)param_2 +
                                   (-(ulong)((uVar26 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 |
                                   uVar34 << 4) + (long)(int)(uVar26 << 3) * -4 + 0x20);
              } while (iVar27 < (int)uVar26);
            }
            iVar21 = iVar21 + -1;
            uVar29 = uVar26 + 3;
            if (-1 < (int)uVar26) {
              uVar29 = uVar26;
            }
            uVar34 = (ulong)(uint)((int)uVar29 >> 2);
          }
          else if (iVar27 == 8) {
            if (0 < (int)uVar26) {
              iVar27 = 0;
              uVar34 = -(ulong)((uVar26 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                       (ulong)(uVar26 << 1) << 2;
              pfVar19 = param_1;
              do {
                fVar49 = *param_2;
                pfVar24 = param_2 + 1;
                pfVar30 = param_2 + 2;
                pfVar45 = param_2 + 3;
                pfVar8 = param_2 + 4;
                pfVar7 = param_2 + 5;
                pfVar32 = param_2 + 6;
                pfVar31 = param_2 + 7;
                pfVar10 = (float *)((long)param_2 + uVar34);
                pfVar11 = (float *)((long)pfVar10 + uVar34);
                pfVar12 = (float *)((long)pfVar11 + uVar34);
                pfVar13 = (float *)((long)pfVar12 + uVar34);
                pfVar14 = (float *)((long)pfVar13 + uVar34);
                pfVar15 = (float *)((long)pfVar14 + uVar34);
                pfVar16 = (float *)((long)pfVar15 + uVar34);
                param_2 = (float *)((long)pfVar16 + uVar34 + (long)(int)(uVar26 << 4) * -4 + 0x20);
                fVar91 = fVar49 + *pfVar13;
                fVar113 = *pfVar30 + pfVar13[2];
                fVar120 = *pfVar8 + pfVar13[4];
                fVar127 = *pfVar32 + pfVar13[6];
                fVar122 = *pfVar24 + pfVar13[1];
                fVar123 = *pfVar45 + pfVar13[3];
                fVar124 = *pfVar7 + pfVar13[5];
                fVar125 = *pfVar31 + pfVar13[7];
                fVar49 = fVar49 - *pfVar13;
                fVar93 = *pfVar30 - pfVar13[2];
                fVar61 = *pfVar8 - pfVar13[4];
                fVar63 = *pfVar32 - pfVar13[6];
                fVar51 = *pfVar24 - pfVar13[1];
                fVar52 = *pfVar45 - pfVar13[3];
                fVar68 = *pfVar7 - pfVar13[5];
                fVar56 = *pfVar31 - pfVar13[7];
                fVar55 = *pfVar10 + *pfVar14;
                fVar57 = pfVar10[2] + pfVar14[2];
                fVar103 = pfVar10[4] + pfVar14[4];
                fVar59 = pfVar10[6] + pfVar14[6];
                fVar65 = pfVar10[1] + pfVar14[1];
                fVar67 = pfVar10[3] + pfVar14[3];
                fVar70 = pfVar10[5] + pfVar14[5];
                fVar74 = pfVar10[7] + pfVar14[7];
                fVar78 = *pfVar10 - *pfVar14;
                fVar79 = pfVar10[2] - pfVar14[2];
                fVar80 = pfVar10[4] - pfVar14[4];
                fVar81 = pfVar10[6] - pfVar14[6];
                fVar58 = pfVar10[1] - pfVar14[1];
                fVar60 = pfVar10[3] - pfVar14[3];
                fVar75 = pfVar10[5] - pfVar14[5];
                fVar77 = pfVar10[7] - pfVar14[7];
                fVar82 = *pfVar11 + *pfVar15;
                fVar97 = pfVar11[2] + pfVar15[2];
                fVar118 = pfVar11[4] + pfVar15[4];
                fVar126 = pfVar11[6] + pfVar15[6];
                fVar83 = pfVar11[1] + pfVar15[1];
                fVar85 = pfVar11[3] + pfVar15[3];
                fVar87 = pfVar11[5] + pfVar15[5];
                fVar89 = pfVar11[7] + pfVar15[7];
                fVar92 = *pfVar11 - *pfVar15;
                fVar94 = pfVar11[2] - pfVar15[2];
                fVar95 = pfVar11[4] - pfVar15[4];
                fVar96 = pfVar11[6] - pfVar15[6];
                fVar109 = pfVar11[1] - pfVar15[1];
                fVar76 = pfVar11[3] - pfVar15[3];
                fVar119 = pfVar11[5] - pfVar15[5];
                fVar62 = pfVar11[7] - pfVar15[7];
                fVar64 = *pfVar12 + *pfVar16;
                fVar66 = pfVar12[2] + pfVar16[2];
                fVar69 = pfVar12[4] + pfVar16[4];
                fVar72 = pfVar12[6] + pfVar16[6];
                fVar98 = *pfVar12 - *pfVar16;
                fVar99 = pfVar12[2] - pfVar16[2];
                fVar100 = pfVar12[4] - pfVar16[4];
                fVar101 = pfVar12[6] - pfVar16[6];
                fVar104 = pfVar12[1] - pfVar16[1];
                fVar105 = pfVar12[3] - pfVar16[3];
                fVar106 = pfVar12[5] - pfVar16[5];
                fVar107 = pfVar12[7] - pfVar16[7];
                fVar84 = pfVar12[1] + pfVar16[1];
                fVar88 = pfVar12[3] + pfVar16[3];
                fVar71 = pfVar12[5] + pfVar16[5];
                fVar121 = pfVar12[7] + pfVar16[7];
                fVar86 = (fVar78 + fVar58) * 0.70710677;
                fVar90 = (fVar79 + fVar60) * 0.70710677;
                fVar73 = (fVar80 + fVar75) * 0.70710677;
                fVar102 = (fVar81 + fVar77) * 0.70710677;
                fVar58 = (fVar58 - fVar78) * 0.70710677;
                fVar60 = (fVar60 - fVar79) * 0.70710677;
                fVar75 = (fVar75 - fVar80) * 0.70710677;
                fVar77 = (fVar77 - fVar81) * 0.70710677;
                fVar78 = (fVar98 - fVar104) * -0.70710677;
                fVar79 = (fVar99 - fVar105) * -0.70710677;
                fVar80 = (fVar100 - fVar106) * -0.70710677;
                fVar81 = (fVar101 - fVar107) * -0.70710677;
                fVar98 = (fVar104 + fVar98) * -0.70710677;
                fVar99 = (fVar105 + fVar99) * -0.70710677;
                fVar100 = (fVar106 + fVar100) * -0.70710677;
                fVar101 = (fVar107 + fVar101) * -0.70710677;
                fVar104 = fVar91 + fVar82;
                fVar105 = fVar113 + fVar97;
                fVar106 = fVar120 + fVar118;
                fVar107 = fVar127 + fVar126;
                fVar108 = fVar122 + fVar83;
                fVar110 = fVar123 + fVar85;
                fVar111 = fVar124 + fVar87;
                fVar112 = fVar125 + fVar89;
                fVar114 = fVar49 + fVar109;
                fVar115 = fVar93 + fVar76;
                fVar116 = fVar61 + fVar119;
                fVar117 = fVar63 + fVar62;
                fVar128 = fVar51 - fVar92;
                fVar129 = fVar52 - fVar94;
                fVar130 = fVar68 - fVar95;
                fVar131 = fVar56 - fVar96;
                fVar91 = fVar91 - fVar82;
                fVar113 = fVar113 - fVar97;
                fVar120 = fVar120 - fVar118;
                fVar127 = fVar127 - fVar126;
                fVar122 = fVar122 - fVar83;
                fVar123 = fVar123 - fVar85;
                fVar124 = fVar124 - fVar87;
                fVar125 = fVar125 - fVar89;
                fVar49 = fVar49 - fVar109;
                fVar93 = fVar93 - fVar76;
                fVar61 = fVar61 - fVar119;
                fVar63 = fVar63 - fVar62;
                fVar51 = fVar51 + fVar92;
                fVar52 = fVar52 + fVar94;
                fVar68 = fVar68 + fVar95;
                fVar56 = fVar56 + fVar96;
                fVar82 = fVar55 + fVar64;
                fVar97 = fVar57 + fVar66;
                fVar118 = fVar103 + fVar69;
                fVar126 = fVar59 + fVar72;
                fVar109 = fVar65 + fVar84;
                fVar76 = fVar67 + fVar88;
                fVar119 = fVar70 + fVar71;
                fVar62 = fVar74 + fVar121;
                fVar83 = fVar86 + fVar78;
                fVar85 = fVar90 + fVar79;
                fVar87 = fVar73 + fVar80;
                fVar89 = fVar102 + fVar81;
                fVar92 = fVar58 + fVar98;
                fVar94 = fVar60 + fVar99;
                fVar95 = fVar75 + fVar100;
                fVar96 = fVar77 + fVar101;
                fVar55 = fVar55 - fVar64;
                fVar57 = fVar57 - fVar66;
                fVar103 = fVar103 - fVar69;
                fVar59 = fVar59 - fVar72;
                fVar65 = fVar65 - fVar84;
                fVar67 = fVar67 - fVar88;
                fVar70 = fVar70 - fVar71;
                fVar74 = fVar74 - fVar121;
                fVar58 = fVar58 - fVar98;
                fVar60 = fVar60 - fVar99;
                fVar75 = fVar75 - fVar100;
                fVar77 = fVar77 - fVar101;
                fVar86 = fVar86 - fVar78;
                fVar90 = fVar90 - fVar79;
                fVar73 = fVar73 - fVar80;
                fVar102 = fVar102 - fVar81;
                *pfVar19 = fVar104 + fVar82;
                pfVar19[1] = fVar108 + fVar109;
                pfVar19[2] = fVar114 + fVar83;
                pfVar19[3] = fVar128 + fVar92;
                pfVar19[4] = fVar91 + fVar65;
                pfVar19[5] = fVar122 - fVar55;
                pfVar19[6] = fVar49 + fVar58;
                pfVar19[7] = fVar51 - fVar86;
                pfVar19[0x10] = fVar105 + fVar97;
                pfVar19[0x11] = fVar110 + fVar76;
                pfVar19[0x12] = fVar115 + fVar85;
                pfVar19[0x13] = fVar129 + fVar94;
                pfVar19[0x14] = fVar113 + fVar67;
                pfVar19[0x15] = fVar123 - fVar57;
                pfVar19[0x16] = fVar93 + fVar60;
                pfVar19[0x17] = fVar52 - fVar90;
                pfVar19[0x18] = fVar105 - fVar97;
                pfVar19[0x19] = fVar110 - fVar76;
                pfVar19[0x1a] = fVar115 - fVar85;
                pfVar19[0x1b] = fVar129 - fVar94;
                pfVar19[0x1c] = fVar113 - fVar67;
                pfVar19[0x1d] = fVar123 + fVar57;
                pfVar19[0x1e] = fVar93 - fVar60;
                pfVar19[0x1f] = fVar52 + fVar90;
                pfVar19[0x20] = fVar106 + fVar118;
                pfVar19[0x21] = fVar111 + fVar119;
                pfVar19[0x22] = fVar116 + fVar87;
                pfVar19[0x23] = fVar130 + fVar95;
                pfVar19[0x24] = fVar120 + fVar70;
                pfVar19[0x25] = fVar124 - fVar103;
                pfVar19[0x26] = fVar61 + fVar75;
                pfVar19[0x27] = fVar68 - fVar73;
                pfVar19[0x28] = fVar106 - fVar118;
                pfVar19[0x29] = fVar111 - fVar119;
                pfVar19[0x2a] = fVar116 - fVar87;
                pfVar19[0x2b] = fVar130 - fVar95;
                pfVar19[0x2c] = fVar120 - fVar70;
                pfVar19[0x2d] = fVar124 + fVar103;
                pfVar19[0x2e] = fVar61 - fVar75;
                pfVar19[0x2f] = fVar68 + fVar73;
                pfVar19[0x30] = fVar107 + fVar126;
                pfVar19[0x31] = fVar112 + fVar62;
                pfVar19[0x32] = fVar117 + fVar89;
                pfVar19[0x33] = fVar131 + fVar96;
                pfVar19[0x34] = fVar127 + fVar74;
                pfVar19[0x35] = fVar125 - fVar59;
                pfVar19[0x36] = fVar63 + fVar77;
                pfVar19[0x37] = fVar56 - fVar102;
                pfVar19[0x38] = fVar107 - fVar126;
                pfVar19[0x39] = fVar112 - fVar62;
                pfVar19[0x3a] = fVar117 - fVar89;
                pfVar19[0x3b] = fVar131 - fVar96;
                pfVar19[0x3c] = fVar127 - fVar74;
                pfVar19[0x3d] = fVar125 + fVar59;
                pfVar19[0x3e] = fVar63 - fVar77;
                pfVar19[0x3f] = fVar56 + fVar102;
                pfVar19[8] = fVar104 - fVar82;
                pfVar19[9] = fVar108 - fVar109;
                pfVar19[10] = fVar114 - fVar83;
                pfVar19[0xb] = fVar128 - fVar92;
                pfVar19[0xc] = fVar91 - fVar65;
                pfVar19[0xd] = fVar122 + fVar55;
                pfVar19[0xe] = fVar49 - fVar58;
                pfVar19[0xf] = fVar51 + fVar86;
                iVar27 = iVar27 + 4;
                pfVar19 = pfVar19 + 0x40;
              } while (iVar27 < (int)uVar26);
            }
            iVar21 = iVar21 + -1;
            uVar29 = uVar26 + 3;
            if (-1 < (int)uVar26) {
              uVar29 = uVar26;
            }
            uVar34 = (ulong)(uint)((int)uVar29 >> 2);
            uVar26 = uVar26 << 1;
          }
          uVar29 = (uint)uVar34;
          pfVar19 = param_1;
          if (1 < iVar21) {
            uVar20 = (ulong)(uVar26 << 1);
            pfVar31 = param_1;
            uVar28 = uVar38;
            do {
              pfVar19 = pfVar39;
              pfVar39 = pfVar31;
              uVar29 = (uint)uVar28;
              uVar38 = (ulong)(uVar29 << 2);
              iVar27 = (int)uVar34;
              if (0 < iVar27) {
                uVar44 = 0;
                uVar22 = (ulong)(uVar29 << 1);
                uVar36 = -(ulong)((uVar29 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | uVar22 << 3;
                uVar46 = -(ulong)((uVar29 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 | uVar22 << 2;
                pfVar32 = pfVar19;
                pfVar31 = pfVar39;
                do {
                  if (0 < (int)uVar29) {
                    iVar40 = 0;
                    pfVar24 = pfVar31;
                    pfVar30 = pfVar32;
                    pfVar45 = pfStack_98;
                    do {
                      pfVar8 = (float *)((long)pfVar24 +
                                        (-(ulong)((uVar26 & 0x7fffffff) >> 0x1e) &
                                         0xfffffffc00000000 | uVar20 << 2));
                      pfVar7 = (float *)((long)pfVar24 +
                                        (-(ulong)((uVar26 & 0x7fffffff) >> 0x1e) &
                                         0xfffffff800000000 | uVar20 << 3));
                      pfVar10 = pfVar24 + (-(ulong)((uVar26 & 0x7fffffff) >> 0x1e) &
                                           0xfffffffe00000000 | uVar20 << 1) +
                                          (long)(int)(uVar26 << 1);
                      pfVar11 = (float *)((long)pfVar45 + uVar46);
                      pfVar12 = (float *)((long)pfVar45 + uVar36);
                      fVar119 = *pfVar8 * *pfVar45 - pfVar45[1] * pfVar8[1];
                      fVar61 = pfVar8[2] * pfVar45[2] - pfVar45[3] * pfVar8[3];
                      fVar62 = pfVar8[4] * pfVar45[4] - pfVar45[5] * pfVar8[5];
                      fVar63 = pfVar8[6] * pfVar45[6] - pfVar45[7] * pfVar8[7];
                      fVar64 = pfVar8[1] * *pfVar45 + pfVar45[1] * *pfVar8;
                      fVar65 = pfVar8[3] * pfVar45[2] + pfVar45[3] * pfVar8[2];
                      fVar66 = pfVar8[5] * pfVar45[4] + pfVar45[5] * pfVar8[4];
                      fVar67 = pfVar8[7] * pfVar45[6] + pfVar45[7] * pfVar8[6];
                      fVar113 = *pfVar7 * *pfVar11 - pfVar11[1] * pfVar7[1];
                      fVar118 = pfVar7[2] * pfVar11[2] - pfVar11[3] * pfVar7[3];
                      fVar120 = pfVar7[4] * pfVar11[4] - pfVar11[5] * pfVar7[5];
                      fVar126 = pfVar7[6] * pfVar11[6] - pfVar11[7] * pfVar7[7];
                      fVar49 = pfVar7[1] * *pfVar11 + pfVar11[1] * *pfVar7;
                      fVar51 = pfVar7[3] * pfVar11[2] + pfVar11[3] * pfVar7[2];
                      fVar52 = pfVar7[5] * pfVar11[4] + pfVar11[5] * pfVar7[4];
                      fVar68 = pfVar7[7] * pfVar11[6] + pfVar11[7] * pfVar7[6];
                      fVar69 = *pfVar10 * *pfVar12 - pfVar12[1] * pfVar10[1];
                      fVar70 = pfVar10[2] * pfVar12[2] - pfVar12[3] * pfVar10[3];
                      fVar72 = pfVar10[4] * pfVar12[4] - pfVar12[5] * pfVar10[5];
                      fVar74 = pfVar10[6] * pfVar12[6] - pfVar12[7] * pfVar10[7];
                      fVar84 = pfVar10[1] * *pfVar12 + pfVar12[1] * *pfVar10;
                      fVar86 = pfVar10[3] * pfVar12[2] + pfVar12[3] * pfVar10[2];
                      fVar88 = pfVar10[5] * pfVar12[4] + pfVar12[5] * pfVar10[4];
                      fVar90 = pfVar10[7] * pfVar12[6] + pfVar12[7] * pfVar10[6];
                      fVar59 = *pfVar24 + fVar113;
                      fVar58 = pfVar24[2] + fVar118;
                      fVar60 = pfVar24[4] + fVar120;
                      fVar75 = pfVar24[6] + fVar126;
                      fVar77 = pfVar24[1] + fVar49;
                      fVar82 = pfVar24[3] + fVar51;
                      fVar91 = pfVar24[5] + fVar52;
                      fVar97 = pfVar24[7] + fVar68;
                      fVar113 = *pfVar24 - fVar113;
                      fVar118 = pfVar24[2] - fVar118;
                      fVar120 = pfVar24[4] - fVar120;
                      fVar126 = pfVar24[6] - fVar126;
                      fVar49 = pfVar24[1] - fVar49;
                      fVar51 = pfVar24[3] - fVar51;
                      fVar52 = pfVar24[5] - fVar52;
                      fVar68 = pfVar24[7] - fVar68;
                      fVar56 = fVar119 + fVar69;
                      fVar55 = fVar61 + fVar70;
                      fVar57 = fVar62 + fVar72;
                      fVar103 = fVar63 + fVar74;
                      fVar127 = fVar64 + fVar84;
                      fVar109 = fVar65 + fVar86;
                      fVar76 = fVar66 + fVar88;
                      fVar93 = fVar67 + fVar90;
                      fVar119 = fVar119 - fVar69;
                      fVar61 = fVar61 - fVar70;
                      fVar62 = fVar62 - fVar72;
                      fVar63 = fVar63 - fVar74;
                      fVar64 = fVar64 - fVar84;
                      fVar65 = fVar65 - fVar86;
                      fVar66 = fVar66 - fVar88;
                      fVar67 = fVar67 - fVar90;
                      *pfVar30 = fVar59 + fVar56;
                      pfVar30[1] = fVar77 + fVar127;
                      pfVar30[2] = fVar58 + fVar55;
                      pfVar30[3] = fVar82 + fVar109;
                      pfVar30[4] = fVar60 + fVar57;
                      pfVar30[5] = fVar91 + fVar76;
                      pfVar30[6] = fVar75 + fVar103;
                      pfVar30[7] = fVar97 + fVar93;
                      pfVar8 = (float *)((long)pfVar30 + uVar46);
                      *pfVar8 = fVar113 + fVar64;
                      pfVar8[1] = fVar49 - fVar119;
                      pfVar8[2] = fVar118 + fVar65;
                      pfVar8[3] = fVar51 - fVar61;
                      pfVar8[4] = fVar120 + fVar66;
                      pfVar8[5] = fVar52 - fVar62;
                      pfVar8[6] = fVar126 + fVar67;
                      pfVar8[7] = fVar68 - fVar63;
                      pfVar8 = (float *)((long)pfVar30 + uVar36);
                      *pfVar8 = fVar59 - fVar56;
                      pfVar8[1] = fVar77 - fVar127;
                      pfVar8[2] = fVar58 - fVar55;
                      pfVar8[3] = fVar82 - fVar109;
                      pfVar8[4] = fVar60 - fVar57;
                      pfVar8[5] = fVar91 - fVar76;
                      pfVar8[6] = fVar75 - fVar103;
                      pfVar8[7] = fVar97 - fVar93;
                      pfVar8 = pfVar30 + (-(ulong)((uVar29 & 0x7fffffff) >> 0x1e) &
                                          0xfffffffe00000000 | uVar22 << 1) +
                                         (long)(int)(uVar29 << 1);
                      *pfVar8 = fVar113 - fVar64;
                      pfVar8[1] = fVar49 + fVar119;
                      pfVar8[2] = fVar118 - fVar65;
                      pfVar8[3] = fVar51 + fVar61;
                      pfVar8[4] = fVar120 - fVar66;
                      pfVar8[5] = fVar52 + fVar62;
                      pfVar8[6] = fVar126 - fVar67;
                      pfVar8[7] = fVar68 + fVar63;
                      iVar40 = iVar40 + 4;
                      pfVar24 = (float *)((long)pfVar24 +
                                         (-(ulong)((uVar26 & 0x7fffffff) >> 0x1e) &
                                          0xfffffff000000000 | uVar20 << 4) +
                                         (long)(int)(uVar26 << 3) * -4 + 0x20);
                      pfVar30 = (float *)((long)pfVar30 +
                                         (-(ulong)((uVar29 & 0x7fffffff) >> 0x1e) &
                                          0xfffffff000000000 | uVar22 << 4) +
                                         (long)(int)(uVar29 << 3) * -4 + 0x20);
                      pfVar45 = (float *)((long)pfVar45 +
                                         uVar36 + (long)(int)(uVar29 << 2) * -4 + 0x20);
                    } while (iVar40 < (int)uVar29);
                  }
                  uVar44 = uVar44 + 1;
                  pfVar31 = (float *)((long)pfVar31 +
                                     (-(uVar28 >> 0x1f) & 0xfffffff800000000 | uVar28 << 3));
                  pfVar32 = (float *)((long)pfVar32 +
                                     (-(ulong)((uVar29 & 0x3fffffff) >> 0x1d) & 0xfffffff800000000 |
                                     uVar38 << 3));
                } while (uVar44 != uVar34);
              }
              pfStack_98 = pfStack_98 + (long)(int)(uVar29 * 3) * 2;
              iVar40 = iVar27 + 3;
              if (-1 < iVar27) {
                iVar40 = iVar27;
              }
              uVar29 = iVar40 >> 2;
              uVar34 = (ulong)uVar29;
              bVar1 = 2 < iVar21;
              pfVar31 = pfVar19;
              uVar28 = uVar38;
              iVar21 = iVar21 + -1;
            } while (bVar1);
            iVar21 = 1;
          }
          if ((iVar21 != 0) && (0 < (int)uVar29)) {
            lVar35 = 0;
            uVar33 = 0;
            uVar37 = (uint)uVar38;
            uVar25 = uVar26 << 1;
            lVar23 = (-(ulong)((uVar26 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000 |
                     (ulong)uVar25 << 1) + (long)(int)uVar25;
            uVar34 = -(ulong)((uVar37 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                     (ulong)(uVar37 << 1) << 3;
            do {
              if (0 < (int)uVar37) {
                iVar27 = 0;
                lVar48 = lVar35;
                pfVar39 = pfStack_98;
                do {
                  pfVar31 = (float *)((long)pfVar19 + lVar48);
                  pfVar32 = (float *)((long)pfVar19 + lVar48 + (long)(int)uVar25 * 4);
                  pfVar24 = (float *)((long)pfVar19 + lVar48 + (long)(int)uVar25 * 8);
                  pfVar30 = (float *)((long)pfVar19 + lVar48 + lVar23 * 4);
                  pfVar45 = (float *)((long)pfVar39 +
                                     (-(ulong)((uVar37 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                                     (ulong)(uVar37 << 1) << 2));
                  pfVar8 = (float *)((long)pfVar39 + uVar34);
                  pfVar7 = (float *)((long)param_1 + lVar48);
                  fVar119 = *pfVar32 * *pfVar39 - pfVar39[1] * pfVar32[1];
                  fVar61 = pfVar32[2] * pfVar39[2] - pfVar39[3] * pfVar32[3];
                  fVar62 = pfVar32[4] * pfVar39[4] - pfVar39[5] * pfVar32[5];
                  fVar63 = pfVar32[6] * pfVar39[6] - pfVar39[7] * pfVar32[7];
                  fVar64 = pfVar32[1] * *pfVar39 + pfVar39[1] * *pfVar32;
                  fVar65 = pfVar32[3] * pfVar39[2] + pfVar39[3] * pfVar32[2];
                  fVar66 = pfVar32[5] * pfVar39[4] + pfVar39[5] * pfVar32[4];
                  fVar67 = pfVar32[7] * pfVar39[6] + pfVar39[7] * pfVar32[6];
                  fVar113 = *pfVar24 * *pfVar45 - pfVar45[1] * pfVar24[1];
                  fVar118 = pfVar24[2] * pfVar45[2] - pfVar45[3] * pfVar24[3];
                  fVar120 = pfVar24[4] * pfVar45[4] - pfVar45[5] * pfVar24[5];
                  fVar126 = pfVar24[6] * pfVar45[6] - pfVar45[7] * pfVar24[7];
                  fVar49 = pfVar24[1] * *pfVar45 + pfVar45[1] * *pfVar24;
                  fVar51 = pfVar24[3] * pfVar45[2] + pfVar45[3] * pfVar24[2];
                  fVar52 = pfVar24[5] * pfVar45[4] + pfVar45[5] * pfVar24[4];
                  fVar68 = pfVar24[7] * pfVar45[6] + pfVar45[7] * pfVar24[6];
                  fVar69 = *pfVar30 * *pfVar8 - pfVar8[1] * pfVar30[1];
                  fVar70 = pfVar30[2] * pfVar8[2] - pfVar8[3] * pfVar30[3];
                  fVar72 = pfVar30[4] * pfVar8[4] - pfVar8[5] * pfVar30[5];
                  fVar74 = pfVar30[6] * pfVar8[6] - pfVar8[7] * pfVar30[7];
                  fVar84 = pfVar30[1] * *pfVar8 + pfVar8[1] * *pfVar30;
                  fVar86 = pfVar30[3] * pfVar8[2] + pfVar8[3] * pfVar30[2];
                  fVar88 = pfVar30[5] * pfVar8[4] + pfVar8[5] * pfVar30[4];
                  fVar90 = pfVar30[7] * pfVar8[6] + pfVar8[7] * pfVar30[6];
                  fVar59 = *pfVar31 + fVar113;
                  fVar58 = pfVar31[2] + fVar118;
                  fVar60 = pfVar31[4] + fVar120;
                  fVar75 = pfVar31[6] + fVar126;
                  fVar77 = pfVar31[1] + fVar49;
                  fVar82 = pfVar31[3] + fVar51;
                  fVar91 = pfVar31[5] + fVar52;
                  fVar97 = pfVar31[7] + fVar68;
                  fVar113 = *pfVar31 - fVar113;
                  fVar118 = pfVar31[2] - fVar118;
                  fVar120 = pfVar31[4] - fVar120;
                  fVar126 = pfVar31[6] - fVar126;
                  fVar49 = pfVar31[1] - fVar49;
                  fVar51 = pfVar31[3] - fVar51;
                  fVar52 = pfVar31[5] - fVar52;
                  fVar68 = pfVar31[7] - fVar68;
                  fVar56 = fVar119 + fVar69;
                  fVar55 = fVar61 + fVar70;
                  fVar57 = fVar62 + fVar72;
                  fVar103 = fVar63 + fVar74;
                  fVar127 = fVar64 + fVar84;
                  fVar109 = fVar65 + fVar86;
                  fVar76 = fVar66 + fVar88;
                  fVar93 = fVar67 + fVar90;
                  fVar119 = fVar119 - fVar69;
                  fVar61 = fVar61 - fVar70;
                  fVar62 = fVar62 - fVar72;
                  fVar63 = fVar63 - fVar74;
                  fVar64 = fVar64 - fVar84;
                  fVar65 = fVar65 - fVar86;
                  fVar66 = fVar66 - fVar88;
                  fVar67 = fVar67 - fVar90;
                  *pfVar7 = fVar59 + fVar56;
                  pfVar7[1] = fVar77 + fVar127;
                  pfVar7[2] = fVar58 + fVar55;
                  pfVar7[3] = fVar82 + fVar109;
                  pfVar7[4] = fVar60 + fVar57;
                  pfVar7[5] = fVar91 + fVar76;
                  pfVar7[6] = fVar75 + fVar103;
                  pfVar7[7] = fVar97 + fVar93;
                  pfVar31 = (float *)((long)param_1 + lVar48 + (long)(int)uVar25 * 4);
                  *pfVar31 = fVar113 + fVar64;
                  pfVar31[1] = fVar49 - fVar119;
                  pfVar31[2] = fVar118 + fVar65;
                  pfVar31[3] = fVar51 - fVar61;
                  pfVar31[4] = fVar120 + fVar66;
                  pfVar31[5] = fVar52 - fVar62;
                  pfVar31[6] = fVar126 + fVar67;
                  pfVar31[7] = fVar68 - fVar63;
                  pfVar31 = (float *)((long)param_1 + lVar48 + (long)(int)uVar25 * 8);
                  *pfVar31 = fVar59 - fVar56;
                  pfVar31[1] = fVar77 - fVar127;
                  pfVar31[2] = fVar58 - fVar55;
                  pfVar31[3] = fVar82 - fVar109;
                  pfVar31[4] = fVar60 - fVar57;
                  pfVar31[5] = fVar91 - fVar76;
                  pfVar31[6] = fVar75 - fVar103;
                  pfVar31[7] = fVar97 - fVar93;
                  pfVar31 = (float *)((long)param_1 + lVar48 + lVar23 * 4);
                  *pfVar31 = fVar113 - fVar64;
                  pfVar31[1] = fVar49 + fVar119;
                  pfVar31[2] = fVar118 - fVar65;
                  pfVar31[3] = fVar51 + fVar61;
                  pfVar31[4] = fVar120 - fVar66;
                  pfVar31[5] = fVar52 + fVar62;
                  pfVar31[6] = fVar126 - fVar67;
                  pfVar31[7] = fVar68 + fVar63;
                  iVar27 = iVar27 + 4;
                  lVar48 = lVar48 + (-(ulong)((uVar26 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 |
                                    (ulong)uVar25 << 4) + (long)(int)(uVar26 << 3) * -4 + 0x20;
                  pfVar39 = (float *)((long)pfVar39 + uVar34 + (long)(int)(uVar37 << 2) * -4 + 0x20)
                  ;
                } while (iVar27 < (int)uVar37);
              }
              uVar33 = uVar33 + 1;
              lVar35 = lVar35 + (-(uVar38 >> 0x1f) & 0xfffffff800000000 | uVar38 << 3);
            } while (uVar33 != uVar29);
          }
        }
        else {
          fVar97 = *param_2 - param_2[0x10];
          fVar118 = param_2[2] - param_2[0x12];
          fVar126 = param_2[4] - param_2[0x14];
          fVar109 = param_2[6] - param_2[0x16];
          fVar82 = param_2[1] - param_2[0x11];
          fVar69 = param_2[3] - param_2[0x13];
          fVar72 = param_2[5] - param_2[0x15];
          fVar84 = param_2[7] - param_2[0x17];
          fVar55 = *param_2 + param_2[0x10];
          fVar103 = param_2[2] + param_2[0x12];
          fVar58 = param_2[4] + param_2[0x14];
          fVar77 = param_2[6] + param_2[0x16];
          fVar49 = param_2[1] + param_2[0x11];
          fVar51 = param_2[3] + param_2[0x13];
          fVar52 = param_2[5] + param_2[0x15];
          fVar68 = param_2[7] + param_2[0x17];
          fVar56 = param_2[8] + param_2[0x18];
          fVar57 = param_2[10] + param_2[0x1a];
          fVar59 = param_2[0xc] + param_2[0x1c];
          fVar75 = param_2[0xe] + param_2[0x1e];
          fVar93 = param_2[9] + param_2[0x19];
          fVar61 = param_2[0xb] + param_2[0x1b];
          fVar64 = param_2[0xd] + param_2[0x1d];
          fVar65 = param_2[0xf] + param_2[0x1f];
          fVar66 = param_2[8] - param_2[0x18];
          fVar67 = param_2[10] - param_2[0x1a];
          fVar70 = param_2[0xc] - param_2[0x1c];
          fVar74 = param_2[0xe] - param_2[0x1e];
          fVar91 = param_2[9] - param_2[0x19];
          fVar113 = param_2[0xb] - param_2[0x1b];
          fVar120 = param_2[0xd] - param_2[0x1d];
          fVar127 = param_2[0xf] - param_2[0x1f];
          fVar76 = fVar55 - fVar56;
          fVar119 = fVar103 - fVar57;
          fVar62 = fVar58 - fVar59;
          fVar63 = fVar77 - fVar75;
          fVar60 = fVar49 - fVar93;
          fVar86 = fVar51 - fVar61;
          fVar88 = fVar52 - fVar64;
          fVar90 = fVar68 - fVar65;
          fVar55 = fVar55 + fVar56;
          fVar103 = fVar103 + fVar57;
          fVar58 = fVar58 + fVar59;
          fVar77 = fVar77 + fVar75;
          fVar49 = fVar49 + fVar93;
          fVar51 = fVar51 + fVar61;
          fVar52 = fVar52 + fVar64;
          fVar68 = fVar68 + fVar65;
          fVar64 = fVar97 + fVar91;
          fVar56 = fVar118 + fVar113;
          fVar75 = fVar126 + fVar120;
          fVar65 = fVar109 + fVar127;
          fVar59 = fVar82 - fVar66;
          fVar57 = fVar69 - fVar67;
          fVar71 = fVar72 - fVar70;
          fVar73 = fVar84 - fVar74;
          fVar97 = fVar97 - fVar91;
          fVar118 = fVar118 - fVar113;
          fVar126 = fVar126 - fVar120;
          fVar109 = fVar109 - fVar127;
          fVar82 = fVar82 + fVar66;
          fVar69 = fVar69 + fVar67;
          fVar72 = fVar72 + fVar70;
          fVar84 = fVar84 + fVar74;
          fVar91 = *pfStack_98 * fVar103 - pfStack_98[1] * fVar51;
          fVar113 = pfStack_98[2] * fVar56 - pfStack_98[3] * fVar57;
          fVar120 = pfStack_98[4] * fVar119 - pfStack_98[5] * fVar86;
          fVar127 = pfStack_98[6] * fVar118 - pfStack_98[7] * fVar69;
          fVar93 = pfStack_98[1] * fVar103 + *pfStack_98 * fVar51;
          fVar61 = pfStack_98[3] * fVar56 + pfStack_98[2] * fVar57;
          fVar119 = pfStack_98[5] * fVar119 + pfStack_98[4] * fVar86;
          fVar118 = pfStack_98[7] * fVar118 + pfStack_98[6] * fVar69;
          fVar66 = pfStack_98[8] * fVar58 - pfStack_98[9] * fVar52;
          fVar67 = pfStack_98[10] * fVar75 - pfStack_98[0xb] * fVar71;
          fVar69 = pfStack_98[0xc] * fVar62 - pfStack_98[0xd] * fVar88;
          fVar70 = pfStack_98[0xe] * fVar126 - pfStack_98[0xf] * fVar72;
          fVar57 = pfStack_98[9] * fVar58 + pfStack_98[8] * fVar52;
          fVar103 = pfStack_98[0xb] * fVar75 + pfStack_98[10] * fVar71;
          fVar58 = pfStack_98[0xd] * fVar62 + pfStack_98[0xc] * fVar88;
          fVar75 = pfStack_98[0xf] * fVar126 + pfStack_98[0xe] * fVar72;
          fVar86 = pfStack_98[0x10] * fVar77 - pfStack_98[0x11] * fVar68;
          fVar88 = pfStack_98[0x12] * fVar65 - pfStack_98[0x13] * fVar73;
          fVar71 = pfStack_98[0x14] * fVar63 - pfStack_98[0x15] * fVar90;
          fVar121 = pfStack_98[0x16] * fVar109 - pfStack_98[0x17] * fVar84;
          fVar72 = pfStack_98[0x11] * fVar77 + pfStack_98[0x10] * fVar68;
          fVar65 = pfStack_98[0x13] * fVar65 + pfStack_98[0x12] * fVar73;
          fVar63 = pfStack_98[0x15] * fVar63 + pfStack_98[0x14] * fVar90;
          fVar74 = pfStack_98[0x17] * fVar109 + pfStack_98[0x16] * fVar84;
          fVar51 = fVar55 - fVar66;
          fVar52 = fVar64 - fVar67;
          fVar68 = fVar76 - fVar69;
          fVar56 = fVar97 - fVar70;
          fVar77 = fVar49 - fVar57;
          fVar126 = fVar59 - fVar103;
          fVar109 = fVar60 - fVar58;
          fVar62 = fVar82 - fVar75;
          fVar55 = fVar55 + fVar66;
          fVar64 = fVar64 + fVar67;
          fVar76 = fVar76 + fVar69;
          fVar97 = fVar97 + fVar70;
          fVar49 = fVar49 + fVar57;
          fVar59 = fVar59 + fVar103;
          fVar60 = fVar60 + fVar58;
          fVar82 = fVar82 + fVar75;
          fVar57 = fVar91 + fVar86;
          fVar103 = fVar113 + fVar88;
          fVar58 = fVar120 + fVar71;
          fVar75 = fVar127 + fVar121;
          fVar66 = fVar93 + fVar72;
          fVar67 = fVar61 + fVar65;
          fVar69 = fVar119 + fVar63;
          fVar70 = fVar118 + fVar74;
          fVar91 = fVar91 - fVar86;
          fVar113 = fVar113 - fVar88;
          fVar120 = fVar120 - fVar71;
          fVar127 = fVar127 - fVar121;
          fVar93 = fVar93 - fVar72;
          fVar61 = fVar61 - fVar65;
          fVar119 = fVar119 - fVar63;
          fVar118 = fVar118 - fVar74;
          *param_1 = fVar55 + fVar57;
          param_1[1] = fVar49 + fVar66;
          param_1[2] = fVar64 + fVar103;
          param_1[3] = fVar59 + fVar67;
          param_1[4] = fVar76 + fVar58;
          param_1[5] = fVar60 + fVar69;
          param_1[6] = fVar97 + fVar75;
          param_1[7] = fVar82 + fVar70;
          param_1[8] = fVar51 + fVar93;
          param_1[9] = fVar77 - fVar91;
          param_1[10] = fVar52 + fVar61;
          param_1[0xb] = fVar126 - fVar113;
          param_1[0xc] = fVar68 + fVar119;
          param_1[0xd] = fVar109 - fVar120;
          param_1[0xe] = fVar56 + fVar118;
          param_1[0xf] = fVar62 - fVar127;
          param_1[0x10] = fVar55 - fVar57;
          param_1[0x11] = fVar49 - fVar66;
          param_1[0x12] = fVar64 - fVar103;
          param_1[0x13] = fVar59 - fVar67;
          param_1[0x14] = fVar76 - fVar58;
          param_1[0x15] = fVar60 - fVar69;
          param_1[0x16] = fVar97 - fVar75;
          param_1[0x17] = fVar82 - fVar70;
          param_1[0x18] = fVar51 - fVar93;
          param_1[0x19] = fVar77 + fVar91;
          param_1[0x1a] = fVar52 - fVar61;
          param_1[0x1b] = fVar126 + fVar113;
          param_1[0x1c] = fVar68 - fVar119;
          param_1[0x1d] = fVar109 + fVar120;
          param_1[0x1e] = fVar56 - fVar118;
          param_1[0x1f] = fVar62 + fVar127;
        }
      }
      else if (iVar27 != 0x10) {
        pfVar39 = *(float **)(param_3 + 6);
        uVar26 = piVar18[1];
        uVar34 = (ulong)uVar26;
        uVar38 = (ulong)(uint)(piVar18 + iVar40)[-1];
        iVar27 = piVar18[iVar40];
        if (iVar27 == 4) {
          if (0 < (int)uVar26) {
            iVar40 = 0;
            uVar34 = (ulong)(uVar26 << 1);
            pfVar19 = param_1;
            do {
              pfVar31 = (float *)((long)param_2 +
                                 (-(ulong)((uVar26 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                                 uVar34 << 2));
              pfVar32 = (float *)((long)param_2 +
                                 (-(ulong)((uVar26 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                                 uVar34 << 3));
              pfVar24 = param_2 + (-(ulong)((uVar26 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000 |
                                  uVar34 << 1) + (long)(int)(uVar26 << 1);
              fVar127 = *param_2 + *pfVar32;
              fVar109 = param_2[2] + pfVar32[2];
              fVar76 = param_2[4] + pfVar32[4];
              fVar93 = param_2[6] + pfVar32[6];
              fVar119 = param_2[1] + pfVar32[1];
              fVar61 = param_2[3] + pfVar32[3];
              fVar62 = param_2[5] + pfVar32[5];
              fVar63 = param_2[7] + pfVar32[7];
              fVar64 = *param_2 - *pfVar32;
              fVar65 = param_2[2] - pfVar32[2];
              fVar66 = param_2[4] - pfVar32[4];
              fVar67 = param_2[6] - pfVar32[6];
              fVar49 = param_2[1] - pfVar32[1];
              fVar51 = param_2[3] - pfVar32[3];
              fVar52 = param_2[5] - pfVar32[5];
              fVar68 = param_2[7] - pfVar32[7];
              fVar56 = *pfVar31 + *pfVar24;
              fVar55 = pfVar31[2] + pfVar24[2];
              fVar57 = pfVar31[4] + pfVar24[4];
              fVar103 = pfVar31[6] + pfVar24[6];
              fVar77 = pfVar31[1] + pfVar24[1];
              fVar82 = pfVar31[3] + pfVar24[3];
              fVar91 = pfVar31[5] + pfVar24[5];
              fVar97 = pfVar31[7] + pfVar24[7];
              fVar113 = *pfVar31 - *pfVar24;
              fVar118 = pfVar31[2] - pfVar24[2];
              fVar120 = pfVar31[4] - pfVar24[4];
              fVar126 = pfVar31[6] - pfVar24[6];
              fVar59 = pfVar31[1] - pfVar24[1];
              fVar58 = pfVar31[3] - pfVar24[3];
              fVar60 = pfVar31[5] - pfVar24[5];
              fVar75 = pfVar31[7] - pfVar24[7];
              *pfVar19 = fVar127 + fVar56;
              pfVar19[1] = fVar119 + fVar77;
              pfVar19[2] = fVar64 - fVar59;
              pfVar19[3] = fVar49 + fVar113;
              pfVar19[4] = fVar127 - fVar56;
              pfVar19[5] = fVar119 - fVar77;
              pfVar19[6] = fVar64 + fVar59;
              pfVar19[7] = fVar49 - fVar113;
              pfVar19[8] = fVar109 + fVar55;
              pfVar19[9] = fVar61 + fVar82;
              pfVar19[10] = fVar65 - fVar58;
              pfVar19[0xb] = fVar51 + fVar118;
              pfVar19[0xc] = fVar109 - fVar55;
              pfVar19[0xd] = fVar61 - fVar82;
              pfVar19[0xe] = fVar65 + fVar58;
              pfVar19[0xf] = fVar51 - fVar118;
              pfVar19[0x10] = fVar76 + fVar57;
              pfVar19[0x11] = fVar62 + fVar91;
              pfVar19[0x12] = fVar66 - fVar60;
              pfVar19[0x13] = fVar52 + fVar120;
              pfVar19[0x14] = fVar76 - fVar57;
              pfVar19[0x15] = fVar62 - fVar91;
              pfVar19[0x16] = fVar66 + fVar60;
              pfVar19[0x17] = fVar52 - fVar120;
              pfVar19[0x18] = fVar93 + fVar103;
              pfVar19[0x19] = fVar63 + fVar97;
              pfVar19[0x1a] = fVar67 - fVar75;
              pfVar19[0x1b] = fVar68 + fVar126;
              pfVar19[0x1c] = fVar93 - fVar103;
              pfVar19[0x1d] = fVar63 - fVar97;
              pfVar19[0x1e] = fVar67 + fVar75;
              pfVar19[0x1f] = fVar68 - fVar126;
              pfVar19 = pfVar19 + 0x20;
              iVar40 = iVar40 + 4;
              param_2 = (float *)((long)param_2 +
                                 (-(ulong)((uVar26 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 |
                                 uVar34 << 4) + (long)(int)(uVar26 << 3) * -4 + 0x20);
            } while (iVar40 < (int)uVar26);
          }
          iVar21 = iVar21 + -1;
          uVar29 = uVar26 + 3;
          if (-1 < (int)uVar26) {
            uVar29 = uVar26;
          }
          uVar34 = (ulong)(uint)((int)uVar29 >> 2);
          uVar29 = uVar26;
        }
        else {
          uVar29 = piVar18[iVar40 + 2];
          if (iVar27 == 8) {
            if (0 < (int)uVar26) {
              iVar40 = 0;
              uVar34 = -(ulong)((uVar26 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                       (ulong)(uVar26 << 1) << 2;
              pfVar19 = param_1;
              do {
                fVar49 = *param_2;
                pfVar7 = param_2 + 1;
                pfVar31 = param_2 + 2;
                pfVar32 = param_2 + 3;
                pfVar24 = param_2 + 4;
                pfVar30 = param_2 + 5;
                pfVar45 = param_2 + 6;
                pfVar8 = param_2 + 7;
                pfVar10 = (float *)((long)param_2 + uVar34);
                pfVar11 = (float *)((long)pfVar10 + uVar34);
                pfVar12 = (float *)((long)pfVar11 + uVar34);
                pfVar13 = (float *)((long)pfVar12 + uVar34);
                pfVar14 = (float *)((long)pfVar13 + uVar34);
                pfVar15 = (float *)((long)pfVar14 + uVar34);
                pfVar16 = (float *)((long)pfVar15 + uVar34);
                param_2 = (float *)((long)pfVar16 + uVar34 + (long)(int)(uVar26 << 4) * -4 + 0x20);
                fVar91 = fVar49 + *pfVar13;
                fVar113 = *pfVar31 + pfVar13[2];
                fVar120 = *pfVar24 + pfVar13[4];
                fVar127 = *pfVar45 + pfVar13[6];
                fVar122 = *pfVar7 + pfVar13[1];
                fVar123 = *pfVar32 + pfVar13[3];
                fVar124 = *pfVar30 + pfVar13[5];
                fVar125 = *pfVar8 + pfVar13[7];
                fVar49 = fVar49 - *pfVar13;
                fVar93 = *pfVar31 - pfVar13[2];
                fVar61 = *pfVar24 - pfVar13[4];
                fVar63 = *pfVar45 - pfVar13[6];
                fVar51 = *pfVar7 - pfVar13[1];
                fVar52 = *pfVar32 - pfVar13[3];
                fVar68 = *pfVar30 - pfVar13[5];
                fVar56 = *pfVar8 - pfVar13[7];
                fVar55 = *pfVar10 + *pfVar14;
                fVar57 = pfVar10[2] + pfVar14[2];
                fVar103 = pfVar10[4] + pfVar14[4];
                fVar59 = pfVar10[6] + pfVar14[6];
                fVar65 = pfVar10[1] + pfVar14[1];
                fVar67 = pfVar10[3] + pfVar14[3];
                fVar70 = pfVar10[5] + pfVar14[5];
                fVar74 = pfVar10[7] + pfVar14[7];
                fVar78 = *pfVar10 - *pfVar14;
                fVar79 = pfVar10[2] - pfVar14[2];
                fVar80 = pfVar10[4] - pfVar14[4];
                fVar81 = pfVar10[6] - pfVar14[6];
                fVar58 = pfVar10[1] - pfVar14[1];
                fVar60 = pfVar10[3] - pfVar14[3];
                fVar75 = pfVar10[5] - pfVar14[5];
                fVar77 = pfVar10[7] - pfVar14[7];
                fVar82 = *pfVar11 + *pfVar15;
                fVar97 = pfVar11[2] + pfVar15[2];
                fVar118 = pfVar11[4] + pfVar15[4];
                fVar126 = pfVar11[6] + pfVar15[6];
                fVar83 = pfVar11[1] + pfVar15[1];
                fVar85 = pfVar11[3] + pfVar15[3];
                fVar87 = pfVar11[5] + pfVar15[5];
                fVar89 = pfVar11[7] + pfVar15[7];
                fVar92 = *pfVar11 - *pfVar15;
                fVar94 = pfVar11[2] - pfVar15[2];
                fVar95 = pfVar11[4] - pfVar15[4];
                fVar96 = pfVar11[6] - pfVar15[6];
                fVar109 = pfVar11[1] - pfVar15[1];
                fVar76 = pfVar11[3] - pfVar15[3];
                fVar119 = pfVar11[5] - pfVar15[5];
                fVar62 = pfVar11[7] - pfVar15[7];
                fVar64 = *pfVar12 + *pfVar16;
                fVar66 = pfVar12[2] + pfVar16[2];
                fVar69 = pfVar12[4] + pfVar16[4];
                fVar72 = pfVar12[6] + pfVar16[6];
                fVar98 = *pfVar12 - *pfVar16;
                fVar99 = pfVar12[2] - pfVar16[2];
                fVar100 = pfVar12[4] - pfVar16[4];
                fVar101 = pfVar12[6] - pfVar16[6];
                fVar104 = pfVar12[1] - pfVar16[1];
                fVar105 = pfVar12[3] - pfVar16[3];
                fVar106 = pfVar12[5] - pfVar16[5];
                fVar107 = pfVar12[7] - pfVar16[7];
                fVar84 = pfVar12[1] + pfVar16[1];
                fVar88 = pfVar12[3] + pfVar16[3];
                fVar71 = pfVar12[5] + pfVar16[5];
                fVar121 = pfVar12[7] + pfVar16[7];
                fVar86 = (fVar78 - fVar58) * 0.70710677;
                fVar90 = (fVar79 - fVar60) * 0.70710677;
                fVar73 = (fVar80 - fVar75) * 0.70710677;
                fVar102 = (fVar81 - fVar77) * 0.70710677;
                fVar58 = (fVar58 + fVar78) * 0.70710677;
                fVar60 = (fVar60 + fVar79) * 0.70710677;
                fVar75 = (fVar75 + fVar80) * 0.70710677;
                fVar77 = (fVar77 + fVar81) * 0.70710677;
                fVar78 = (fVar98 + fVar104) * -0.70710677;
                fVar79 = (fVar99 + fVar105) * -0.70710677;
                fVar80 = (fVar100 + fVar106) * -0.70710677;
                fVar81 = (fVar101 + fVar107) * -0.70710677;
                fVar98 = (fVar104 - fVar98) * -0.70710677;
                fVar99 = (fVar105 - fVar99) * -0.70710677;
                fVar100 = (fVar106 - fVar100) * -0.70710677;
                fVar101 = (fVar107 - fVar101) * -0.70710677;
                fVar104 = fVar91 + fVar82;
                fVar105 = fVar113 + fVar97;
                fVar106 = fVar120 + fVar118;
                fVar107 = fVar127 + fVar126;
                fVar108 = fVar122 + fVar83;
                fVar110 = fVar123 + fVar85;
                fVar111 = fVar124 + fVar87;
                fVar112 = fVar125 + fVar89;
                fVar114 = fVar49 - fVar109;
                fVar115 = fVar93 - fVar76;
                fVar116 = fVar61 - fVar119;
                fVar117 = fVar63 - fVar62;
                fVar128 = fVar51 + fVar92;
                fVar129 = fVar52 + fVar94;
                fVar130 = fVar68 + fVar95;
                fVar131 = fVar56 + fVar96;
                fVar91 = fVar91 - fVar82;
                fVar113 = fVar113 - fVar97;
                fVar120 = fVar120 - fVar118;
                fVar127 = fVar127 - fVar126;
                fVar122 = fVar122 - fVar83;
                fVar123 = fVar123 - fVar85;
                fVar124 = fVar124 - fVar87;
                fVar125 = fVar125 - fVar89;
                fVar49 = fVar49 + fVar109;
                fVar93 = fVar93 + fVar76;
                fVar61 = fVar61 + fVar119;
                fVar63 = fVar63 + fVar62;
                fVar51 = fVar51 - fVar92;
                fVar52 = fVar52 - fVar94;
                fVar68 = fVar68 - fVar95;
                fVar56 = fVar56 - fVar96;
                fVar82 = fVar55 + fVar64;
                fVar97 = fVar57 + fVar66;
                fVar118 = fVar103 + fVar69;
                fVar126 = fVar59 + fVar72;
                fVar109 = fVar65 + fVar84;
                fVar76 = fVar67 + fVar88;
                fVar119 = fVar70 + fVar71;
                fVar62 = fVar74 + fVar121;
                fVar83 = fVar86 + fVar78;
                fVar85 = fVar90 + fVar79;
                fVar87 = fVar73 + fVar80;
                fVar89 = fVar102 + fVar81;
                fVar92 = fVar58 + fVar98;
                fVar94 = fVar60 + fVar99;
                fVar95 = fVar75 + fVar100;
                fVar96 = fVar77 + fVar101;
                fVar55 = fVar55 - fVar64;
                fVar57 = fVar57 - fVar66;
                fVar103 = fVar103 - fVar69;
                fVar59 = fVar59 - fVar72;
                fVar65 = fVar65 - fVar84;
                fVar67 = fVar67 - fVar88;
                fVar70 = fVar70 - fVar71;
                fVar74 = fVar74 - fVar121;
                fVar58 = fVar58 - fVar98;
                fVar60 = fVar60 - fVar99;
                fVar75 = fVar75 - fVar100;
                fVar77 = fVar77 - fVar101;
                fVar86 = fVar86 - fVar78;
                fVar90 = fVar90 - fVar79;
                fVar73 = fVar73 - fVar80;
                fVar102 = fVar102 - fVar81;
                *pfVar19 = fVar104 + fVar82;
                pfVar19[1] = fVar108 + fVar109;
                pfVar19[2] = fVar114 + fVar83;
                pfVar19[3] = fVar128 + fVar92;
                pfVar19[4] = fVar91 - fVar65;
                pfVar19[5] = fVar122 + fVar55;
                pfVar19[6] = fVar49 - fVar58;
                pfVar19[7] = fVar51 + fVar86;
                pfVar19[0x10] = fVar105 + fVar97;
                pfVar19[0x11] = fVar110 + fVar76;
                pfVar19[0x12] = fVar115 + fVar85;
                pfVar19[0x13] = fVar129 + fVar94;
                pfVar19[0x14] = fVar113 - fVar67;
                pfVar19[0x15] = fVar123 + fVar57;
                pfVar19[0x16] = fVar93 - fVar60;
                pfVar19[0x17] = fVar52 + fVar90;
                pfVar19[0x18] = fVar105 - fVar97;
                pfVar19[0x19] = fVar110 - fVar76;
                pfVar19[0x1a] = fVar115 - fVar85;
                pfVar19[0x1b] = fVar129 - fVar94;
                pfVar19[0x1c] = fVar113 + fVar67;
                pfVar19[0x1d] = fVar123 - fVar57;
                pfVar19[0x1e] = fVar93 + fVar60;
                pfVar19[0x1f] = fVar52 - fVar90;
                pfVar19[0x20] = fVar106 + fVar118;
                pfVar19[0x21] = fVar111 + fVar119;
                pfVar19[0x22] = fVar116 + fVar87;
                pfVar19[0x23] = fVar130 + fVar95;
                pfVar19[0x24] = fVar120 - fVar70;
                pfVar19[0x25] = fVar124 + fVar103;
                pfVar19[0x26] = fVar61 - fVar75;
                pfVar19[0x27] = fVar68 + fVar73;
                pfVar19[0x28] = fVar106 - fVar118;
                pfVar19[0x29] = fVar111 - fVar119;
                pfVar19[0x2a] = fVar116 - fVar87;
                pfVar19[0x2b] = fVar130 - fVar95;
                pfVar19[0x2c] = fVar120 + fVar70;
                pfVar19[0x2d] = fVar124 - fVar103;
                pfVar19[0x2e] = fVar61 + fVar75;
                pfVar19[0x2f] = fVar68 - fVar73;
                pfVar19[0x30] = fVar107 + fVar126;
                pfVar19[0x31] = fVar112 + fVar62;
                pfVar19[0x32] = fVar117 + fVar89;
                pfVar19[0x33] = fVar131 + fVar96;
                pfVar19[0x34] = fVar127 - fVar74;
                pfVar19[0x35] = fVar125 + fVar59;
                pfVar19[0x36] = fVar63 - fVar77;
                pfVar19[0x37] = fVar56 + fVar102;
                pfVar19[0x38] = fVar107 - fVar126;
                pfVar19[0x39] = fVar112 - fVar62;
                pfVar19[0x3a] = fVar117 - fVar89;
                pfVar19[0x3b] = fVar131 - fVar96;
                pfVar19[0x3c] = fVar127 + fVar74;
                pfVar19[0x3d] = fVar125 - fVar59;
                pfVar19[0x3e] = fVar63 + fVar77;
                pfVar19[0x3f] = fVar56 - fVar102;
                pfVar19[8] = fVar104 - fVar82;
                pfVar19[9] = fVar108 - fVar109;
                pfVar19[10] = fVar114 - fVar83;
                pfVar19[0xb] = fVar128 - fVar92;
                pfVar19[0xc] = fVar91 + fVar65;
                pfVar19[0xd] = fVar122 - fVar55;
                pfVar19[0xe] = fVar49 + fVar58;
                pfVar19[0xf] = fVar51 - fVar86;
                iVar40 = iVar40 + 4;
                pfVar19 = pfVar19 + 0x40;
              } while (iVar40 < (int)uVar26);
            }
            iVar21 = iVar21 + -1;
            uVar29 = uVar26 + 3;
            if (-1 < (int)uVar26) {
              uVar29 = uVar26;
            }
            uVar34 = (ulong)(uint)((int)uVar29 >> 2);
            uVar29 = uVar26 << 1;
          }
        }
        uVar33 = (uint)uVar34;
        pfVar19 = param_1;
        if (1 < iVar21) {
          uVar20 = (ulong)(uVar29 << 1);
          pfVar31 = param_1;
          uVar28 = uVar38;
          do {
            pfVar19 = pfVar39;
            pfVar39 = pfVar31;
            uVar33 = (uint)uVar28;
            uVar38 = (ulong)(uVar33 << 2);
            iVar40 = (int)uVar34;
            if (0 < iVar40) {
              uVar44 = 0;
              uVar22 = (ulong)(uVar33 << 1);
              uVar36 = -(ulong)((uVar33 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | uVar22 << 3;
              uVar46 = -(ulong)((uVar33 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 | uVar22 << 2;
              pfVar32 = pfVar19;
              pfVar31 = pfVar39;
              do {
                if (0 < (int)uVar33) {
                  iVar47 = 0;
                  pfVar24 = pfVar31;
                  pfVar30 = pfVar32;
                  pfVar45 = pfStack_98;
                  do {
                    pfVar8 = (float *)((long)pfVar24 +
                                      (-(ulong)((uVar29 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000
                                      | uVar20 << 2));
                    pfVar7 = (float *)((long)pfVar24 +
                                      (-(ulong)((uVar29 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000
                                      | uVar20 << 3));
                    pfVar10 = pfVar24 + (-(ulong)((uVar29 & 0x7fffffff) >> 0x1e) &
                                         0xfffffffe00000000 | uVar20 << 1) +
                                        (long)(int)(uVar29 << 1);
                    pfVar11 = (float *)((long)pfVar45 + uVar46);
                    pfVar12 = (float *)((long)pfVar45 + uVar36);
                    fVar119 = *pfVar8 * *pfVar45 + pfVar45[1] * pfVar8[1];
                    fVar61 = pfVar8[2] * pfVar45[2] + pfVar45[3] * pfVar8[3];
                    fVar62 = pfVar8[4] * pfVar45[4] + pfVar45[5] * pfVar8[5];
                    fVar63 = pfVar8[6] * pfVar45[6] + pfVar45[7] * pfVar8[7];
                    fVar64 = pfVar8[1] * *pfVar45 - pfVar45[1] * *pfVar8;
                    fVar65 = pfVar8[3] * pfVar45[2] - pfVar45[3] * pfVar8[2];
                    fVar66 = pfVar8[5] * pfVar45[4] - pfVar45[5] * pfVar8[4];
                    fVar67 = pfVar8[7] * pfVar45[6] - pfVar45[7] * pfVar8[6];
                    fVar113 = *pfVar7 * *pfVar11 + pfVar11[1] * pfVar7[1];
                    fVar118 = pfVar7[2] * pfVar11[2] + pfVar11[3] * pfVar7[3];
                    fVar120 = pfVar7[4] * pfVar11[4] + pfVar11[5] * pfVar7[5];
                    fVar126 = pfVar7[6] * pfVar11[6] + pfVar11[7] * pfVar7[7];
                    fVar49 = pfVar7[1] * *pfVar11 - pfVar11[1] * *pfVar7;
                    fVar51 = pfVar7[3] * pfVar11[2] - pfVar11[3] * pfVar7[2];
                    fVar52 = pfVar7[5] * pfVar11[4] - pfVar11[5] * pfVar7[4];
                    fVar68 = pfVar7[7] * pfVar11[6] - pfVar11[7] * pfVar7[6];
                    fVar69 = *pfVar10 * *pfVar12 + pfVar12[1] * pfVar10[1];
                    fVar70 = pfVar10[2] * pfVar12[2] + pfVar12[3] * pfVar10[3];
                    fVar72 = pfVar10[4] * pfVar12[4] + pfVar12[5] * pfVar10[5];
                    fVar74 = pfVar10[6] * pfVar12[6] + pfVar12[7] * pfVar10[7];
                    fVar84 = pfVar10[1] * *pfVar12 - pfVar12[1] * *pfVar10;
                    fVar86 = pfVar10[3] * pfVar12[2] - pfVar12[3] * pfVar10[2];
                    fVar88 = pfVar10[5] * pfVar12[4] - pfVar12[5] * pfVar10[4];
                    fVar90 = pfVar10[7] * pfVar12[6] - pfVar12[7] * pfVar10[6];
                    fVar59 = *pfVar24 + fVar113;
                    fVar58 = pfVar24[2] + fVar118;
                    fVar60 = pfVar24[4] + fVar120;
                    fVar75 = pfVar24[6] + fVar126;
                    fVar77 = pfVar24[1] + fVar49;
                    fVar82 = pfVar24[3] + fVar51;
                    fVar91 = pfVar24[5] + fVar52;
                    fVar97 = pfVar24[7] + fVar68;
                    fVar113 = *pfVar24 - fVar113;
                    fVar118 = pfVar24[2] - fVar118;
                    fVar120 = pfVar24[4] - fVar120;
                    fVar126 = pfVar24[6] - fVar126;
                    fVar49 = pfVar24[1] - fVar49;
                    fVar51 = pfVar24[3] - fVar51;
                    fVar52 = pfVar24[5] - fVar52;
                    fVar68 = pfVar24[7] - fVar68;
                    fVar56 = fVar119 + fVar69;
                    fVar55 = fVar61 + fVar70;
                    fVar57 = fVar62 + fVar72;
                    fVar103 = fVar63 + fVar74;
                    fVar127 = fVar64 + fVar84;
                    fVar109 = fVar65 + fVar86;
                    fVar76 = fVar66 + fVar88;
                    fVar93 = fVar67 + fVar90;
                    fVar119 = fVar119 - fVar69;
                    fVar61 = fVar61 - fVar70;
                    fVar62 = fVar62 - fVar72;
                    fVar63 = fVar63 - fVar74;
                    fVar64 = fVar64 - fVar84;
                    fVar65 = fVar65 - fVar86;
                    fVar66 = fVar66 - fVar88;
                    fVar67 = fVar67 - fVar90;
                    *pfVar30 = fVar59 + fVar56;
                    pfVar30[1] = fVar77 + fVar127;
                    pfVar30[2] = fVar58 + fVar55;
                    pfVar30[3] = fVar82 + fVar109;
                    pfVar30[4] = fVar60 + fVar57;
                    pfVar30[5] = fVar91 + fVar76;
                    pfVar30[6] = fVar75 + fVar103;
                    pfVar30[7] = fVar97 + fVar93;
                    pfVar8 = (float *)((long)pfVar30 + uVar46);
                    *pfVar8 = fVar113 - fVar64;
                    pfVar8[1] = fVar49 + fVar119;
                    pfVar8[2] = fVar118 - fVar65;
                    pfVar8[3] = fVar51 + fVar61;
                    pfVar8[4] = fVar120 - fVar66;
                    pfVar8[5] = fVar52 + fVar62;
                    pfVar8[6] = fVar126 - fVar67;
                    pfVar8[7] = fVar68 + fVar63;
                    pfVar8 = (float *)((long)pfVar30 + uVar36);
                    *pfVar8 = fVar59 - fVar56;
                    pfVar8[1] = fVar77 - fVar127;
                    pfVar8[2] = fVar58 - fVar55;
                    pfVar8[3] = fVar82 - fVar109;
                    pfVar8[4] = fVar60 - fVar57;
                    pfVar8[5] = fVar91 - fVar76;
                    pfVar8[6] = fVar75 - fVar103;
                    pfVar8[7] = fVar97 - fVar93;
                    pfVar8 = pfVar30 + (-(ulong)((uVar33 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000
                                       | uVar22 << 1) + (long)(int)(uVar33 << 1);
                    *pfVar8 = fVar113 + fVar64;
                    pfVar8[1] = fVar49 - fVar119;
                    pfVar8[2] = fVar118 + fVar65;
                    pfVar8[3] = fVar51 - fVar61;
                    pfVar8[4] = fVar120 + fVar66;
                    pfVar8[5] = fVar52 - fVar62;
                    pfVar8[6] = fVar126 + fVar67;
                    pfVar8[7] = fVar68 - fVar63;
                    iVar47 = iVar47 + 4;
                    pfVar24 = (float *)((long)pfVar24 +
                                       (-(ulong)((uVar29 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000
                                       | uVar20 << 4) + (long)(int)(uVar29 << 3) * -4 + 0x20);
                    pfVar30 = (float *)((long)pfVar30 +
                                       (-(ulong)((uVar33 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000
                                       | uVar22 << 4) + (long)(int)(uVar33 << 3) * -4 + 0x20);
                    pfVar45 = (float *)((long)pfVar45 +
                                       uVar36 + (long)(int)(uVar33 << 2) * -4 + 0x20);
                  } while (iVar47 < (int)uVar33);
                }
                uVar44 = uVar44 + 1;
                pfVar31 = (float *)((long)pfVar31 +
                                   (-(uVar28 >> 0x1f) & 0xfffffff800000000 | uVar28 << 3));
                pfVar32 = (float *)((long)pfVar32 +
                                   (-(ulong)((uVar33 & 0x3fffffff) >> 0x1d) & 0xfffffff800000000 |
                                   uVar38 << 3));
              } while (uVar44 != uVar34);
            }
            pfStack_98 = pfStack_98 + (long)(int)(uVar33 * 3) * 2;
            iVar47 = iVar40 + 3;
            if (-1 < iVar40) {
              iVar47 = iVar40;
            }
            uVar33 = iVar47 >> 2;
            uVar34 = (ulong)uVar33;
            bVar1 = 2 < iVar21;
            pfVar31 = pfVar19;
            uVar28 = uVar38;
            iVar21 = iVar21 + -1;
          } while (bVar1);
          iVar21 = 1;
        }
        if ((iVar21 != 0) && (0 < (int)uVar33)) {
          lVar35 = 0;
          uVar25 = 0;
          uVar42 = (uint)uVar38;
          uVar37 = uVar29 << 1;
          lVar23 = (-(ulong)((uVar29 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000 |
                   (ulong)uVar37 << 1) + (long)(int)uVar37;
          fVar49 = 1.0 / (float)(int)(float)(int)(iVar27 * uVar26);
          uVar34 = -(ulong)((uVar42 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                   (ulong)(uVar42 << 1) << 3;
          do {
            if (0 < (int)uVar42) {
              iVar27 = 0;
              lVar48 = lVar35;
              pfVar39 = pfStack_98;
              do {
                pfVar31 = (float *)((long)pfVar19 + lVar48);
                pfVar32 = (float *)((long)pfVar19 + lVar48 + (long)(int)uVar37 * 4);
                pfVar24 = (float *)((long)pfVar19 + lVar48 + (long)(int)uVar37 * 8);
                pfVar30 = (float *)((long)pfVar19 + lVar48 + lVar23 * 4);
                pfVar45 = (float *)((long)param_1 + lVar48);
                pfVar8 = (float *)((long)pfVar39 +
                                  (-(ulong)((uVar42 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                                  (ulong)(uVar42 << 1) << 2));
                pfVar7 = (float *)((long)pfVar39 + uVar34);
                fVar61 = *pfVar32 * *pfVar39 + pfVar39[1] * pfVar32[1];
                fVar62 = pfVar32[2] * pfVar39[2] + pfVar39[3] * pfVar32[3];
                fVar63 = pfVar32[4] * pfVar39[4] + pfVar39[5] * pfVar32[5];
                fVar64 = pfVar32[6] * pfVar39[6] + pfVar39[7] * pfVar32[7];
                fVar65 = pfVar32[1] * *pfVar39 - pfVar39[1] * *pfVar32;
                fVar66 = pfVar32[3] * pfVar39[2] - pfVar39[3] * pfVar32[2];
                fVar67 = pfVar32[5] * pfVar39[4] - pfVar39[5] * pfVar32[4];
                fVar69 = pfVar32[7] * pfVar39[6] - pfVar39[7] * pfVar32[6];
                fVar118 = *pfVar24 * *pfVar8 + pfVar8[1] * pfVar24[1];
                fVar120 = pfVar24[2] * pfVar8[2] + pfVar8[3] * pfVar24[3];
                fVar126 = pfVar24[4] * pfVar8[4] + pfVar8[5] * pfVar24[5];
                fVar127 = pfVar24[6] * pfVar8[6] + pfVar8[7] * pfVar24[7];
                fVar51 = pfVar24[1] * *pfVar8 - pfVar8[1] * *pfVar24;
                fVar52 = pfVar24[3] * pfVar8[2] - pfVar8[3] * pfVar24[2];
                fVar68 = pfVar24[5] * pfVar8[4] - pfVar8[5] * pfVar24[4];
                fVar56 = pfVar24[7] * pfVar8[6] - pfVar8[7] * pfVar24[6];
                fVar70 = *pfVar30 * *pfVar7 + pfVar7[1] * pfVar30[1];
                fVar72 = pfVar30[2] * pfVar7[2] + pfVar7[3] * pfVar30[3];
                fVar74 = pfVar30[4] * pfVar7[4] + pfVar7[5] * pfVar30[5];
                fVar84 = pfVar30[6] * pfVar7[6] + pfVar7[7] * pfVar30[7];
                fVar86 = pfVar30[1] * *pfVar7 - pfVar7[1] * *pfVar30;
                fVar88 = pfVar30[3] * pfVar7[2] - pfVar7[3] * pfVar30[2];
                fVar90 = pfVar30[5] * pfVar7[4] - pfVar7[5] * pfVar30[4];
                fVar71 = pfVar30[7] * pfVar7[6] - pfVar7[7] * pfVar30[6];
                fVar58 = *pfVar31 + fVar118;
                fVar60 = pfVar31[2] + fVar120;
                fVar75 = pfVar31[4] + fVar126;
                fVar77 = pfVar31[6] + fVar127;
                fVar82 = pfVar31[1] + fVar51;
                fVar91 = pfVar31[3] + fVar52;
                fVar97 = pfVar31[5] + fVar68;
                fVar113 = pfVar31[7] + fVar56;
                fVar118 = *pfVar31 - fVar118;
                fVar120 = pfVar31[2] - fVar120;
                fVar126 = pfVar31[4] - fVar126;
                fVar127 = pfVar31[6] - fVar127;
                fVar51 = pfVar31[1] - fVar51;
                fVar52 = pfVar31[3] - fVar52;
                fVar68 = pfVar31[5] - fVar68;
                fVar56 = pfVar31[7] - fVar56;
                fVar55 = fVar61 + fVar70;
                fVar57 = fVar62 + fVar72;
                fVar103 = fVar63 + fVar74;
                fVar59 = fVar64 + fVar84;
                fVar109 = fVar65 + fVar86;
                fVar76 = fVar66 + fVar88;
                fVar93 = fVar67 + fVar90;
                fVar119 = fVar69 + fVar71;
                fVar61 = fVar61 - fVar70;
                fVar62 = fVar62 - fVar72;
                fVar63 = fVar63 - fVar74;
                fVar64 = fVar64 - fVar84;
                fVar65 = fVar65 - fVar86;
                fVar66 = fVar66 - fVar88;
                fVar67 = fVar67 - fVar90;
                fVar69 = fVar69 - fVar71;
                *pfVar45 = (fVar58 + fVar55) * fVar49;
                pfVar45[1] = (fVar82 + fVar109) * fVar49;
                pfVar45[2] = (fVar60 + fVar57) * fVar49;
                pfVar45[3] = (fVar91 + fVar76) * fVar49;
                pfVar45[4] = (fVar75 + fVar103) * fVar49;
                pfVar45[5] = (fVar97 + fVar93) * fVar49;
                pfVar45[6] = (fVar77 + fVar59) * fVar49;
                pfVar45[7] = (fVar113 + fVar119) * fVar49;
                pfVar31 = (float *)((long)param_1 + lVar48 + (long)(int)uVar37 * 4);
                *pfVar31 = (fVar118 - fVar65) * fVar49;
                pfVar31[1] = (fVar51 + fVar61) * fVar49;
                pfVar31[2] = (fVar120 - fVar66) * fVar49;
                pfVar31[3] = (fVar52 + fVar62) * fVar49;
                pfVar31[4] = (fVar126 - fVar67) * fVar49;
                pfVar31[5] = (fVar68 + fVar63) * fVar49;
                pfVar31[6] = (fVar127 - fVar69) * fVar49;
                pfVar31[7] = (fVar56 + fVar64) * fVar49;
                pfVar31 = (float *)((long)param_1 + lVar48 + (long)(int)uVar37 * 8);
                *pfVar31 = (fVar58 - fVar55) * fVar49;
                pfVar31[1] = (fVar82 - fVar109) * fVar49;
                pfVar31[2] = (fVar60 - fVar57) * fVar49;
                pfVar31[3] = (fVar91 - fVar76) * fVar49;
                pfVar31[4] = (fVar75 - fVar103) * fVar49;
                pfVar31[5] = (fVar97 - fVar93) * fVar49;
                pfVar31[6] = (fVar77 - fVar59) * fVar49;
                pfVar31[7] = (fVar113 - fVar119) * fVar49;
                pfVar31 = (float *)((long)param_1 + lVar48 + lVar23 * 4);
                *pfVar31 = (fVar118 + fVar65) * fVar49;
                pfVar31[1] = (fVar51 - fVar61) * fVar49;
                pfVar31[2] = (fVar120 + fVar66) * fVar49;
                pfVar31[3] = (fVar52 - fVar62) * fVar49;
                pfVar31[4] = (fVar126 + fVar67) * fVar49;
                pfVar31[5] = (fVar68 - fVar63) * fVar49;
                pfVar31[6] = (fVar127 + fVar69) * fVar49;
                pfVar31[7] = (fVar56 - fVar64) * fVar49;
                iVar27 = iVar27 + 4;
                lVar48 = lVar48 + (-(ulong)((uVar29 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 |
                                  (ulong)uVar37 << 4) + (long)(int)(uVar29 << 3) * -4 + 0x20;
                pfVar39 = (float *)((long)pfVar39 + uVar34 + (long)(int)(uVar42 << 2) * -4 + 0x20);
              } while (iVar27 < (int)uVar42);
            }
            uVar25 = uVar25 + 1;
            lVar35 = lVar35 + (-(uVar38 >> 0x1f) & 0xfffffff800000000 | uVar38 << 3);
          } while (uVar25 != uVar33);
        }
      }
      else {
        fVar82 = *param_2 - param_2[0x10];
        fVar97 = param_2[2] - param_2[0x12];
        fVar118 = param_2[4] - param_2[0x14];
        fVar127 = param_2[6] - param_2[0x16];
        fVar65 = param_2[1] - param_2[0x11];
        fVar69 = param_2[3] - param_2[0x13];
        fVar72 = param_2[5] - param_2[0x15];
        fVar84 = param_2[7] - param_2[0x17];
        fVar55 = *param_2 + param_2[0x10];
        fVar103 = param_2[2] + param_2[0x12];
        fVar58 = param_2[4] + param_2[0x14];
        fVar75 = param_2[6] + param_2[0x16];
        fVar49 = param_2[1] + param_2[0x11];
        fVar51 = param_2[3] + param_2[0x13];
        fVar52 = param_2[5] + param_2[0x15];
        fVar68 = param_2[7] + param_2[0x17];
        fVar56 = param_2[8] + param_2[0x18];
        fVar57 = param_2[10] + param_2[0x1a];
        fVar59 = param_2[0xc] + param_2[0x1c];
        fVar60 = param_2[0xe] + param_2[0x1e];
        fVar119 = param_2[9] + param_2[0x19];
        fVar61 = param_2[0xb] + param_2[0x1b];
        fVar62 = param_2[0xd] + param_2[0x1d];
        fVar64 = param_2[0xf] + param_2[0x1f];
        fVar66 = param_2[8] - param_2[0x18];
        fVar67 = param_2[10] - param_2[0x1a];
        fVar70 = param_2[0xc] - param_2[0x1c];
        fVar74 = param_2[0xe] - param_2[0x1e];
        fVar77 = param_2[9] - param_2[0x19];
        fVar91 = param_2[0xb] - param_2[0x1b];
        fVar113 = param_2[0xd] - param_2[0x1d];
        fVar126 = param_2[0xf] - param_2[0x1f];
        fVar120 = fVar55 - fVar56;
        fVar109 = fVar103 - fVar57;
        fVar76 = fVar58 - fVar59;
        fVar93 = fVar75 - fVar60;
        fVar63 = fVar49 - fVar119;
        fVar86 = fVar51 - fVar61;
        fVar88 = fVar52 - fVar62;
        fVar90 = fVar68 - fVar64;
        fVar55 = fVar55 + fVar56;
        fVar103 = fVar103 + fVar57;
        fVar58 = fVar58 + fVar59;
        fVar75 = fVar75 + fVar60;
        fVar49 = fVar49 + fVar119;
        fVar51 = fVar51 + fVar61;
        fVar52 = fVar52 + fVar62;
        fVar68 = fVar68 + fVar64;
        fVar60 = fVar82 - fVar77;
        fVar56 = fVar97 - fVar91;
        fVar57 = fVar118 - fVar113;
        fVar59 = fVar127 - fVar126;
        fVar119 = fVar65 + fVar66;
        fVar62 = fVar69 + fVar67;
        fVar71 = fVar72 + fVar70;
        fVar73 = fVar84 + fVar74;
        fVar82 = fVar82 + fVar77;
        fVar97 = fVar97 + fVar91;
        fVar118 = fVar118 + fVar113;
        fVar127 = fVar127 + fVar126;
        fVar65 = fVar65 - fVar66;
        fVar69 = fVar69 - fVar67;
        fVar72 = fVar72 - fVar70;
        fVar84 = fVar84 - fVar74;
        fVar77 = *pfStack_98 * fVar103 + pfStack_98[1] * fVar51;
        fVar91 = pfStack_98[2] * fVar56 + pfStack_98[3] * fVar62;
        fVar113 = pfStack_98[4] * fVar109 + pfStack_98[5] * fVar86;
        fVar126 = pfStack_98[6] * fVar97 + pfStack_98[7] * fVar69;
        fVar61 = *pfStack_98 * fVar51 - pfStack_98[1] * fVar103;
        fVar62 = pfStack_98[2] * fVar62 - pfStack_98[3] * fVar56;
        fVar109 = pfStack_98[4] * fVar86 - pfStack_98[5] * fVar109;
        fVar64 = pfStack_98[6] * fVar69 - pfStack_98[7] * fVar97;
        fVar97 = pfStack_98[8] * fVar58 + pfStack_98[9] * fVar52;
        fVar66 = pfStack_98[10] * fVar57 + pfStack_98[0xb] * fVar71;
        fVar67 = pfStack_98[0xc] * fVar76 + pfStack_98[0xd] * fVar88;
        fVar69 = pfStack_98[0xe] * fVar118 + pfStack_98[0xf] * fVar72;
        fVar70 = pfStack_98[8] * fVar52 - pfStack_98[9] * fVar58;
        fVar74 = pfStack_98[10] * fVar71 - pfStack_98[0xb] * fVar57;
        fVar76 = pfStack_98[0xc] * fVar88 - pfStack_98[0xd] * fVar76;
        fVar118 = pfStack_98[0xe] * fVar72 - pfStack_98[0xf] * fVar118;
        fVar72 = pfStack_98[0x10] * fVar75 + pfStack_98[0x11] * fVar68;
        fVar86 = pfStack_98[0x12] * fVar59 + pfStack_98[0x13] * fVar73;
        fVar88 = pfStack_98[0x14] * fVar93 + pfStack_98[0x15] * fVar90;
        fVar71 = pfStack_98[0x16] * fVar127 + pfStack_98[0x17] * fVar84;
        fVar121 = pfStack_98[0x10] * fVar68 - pfStack_98[0x11] * fVar75;
        fVar73 = pfStack_98[0x12] * fVar73 - pfStack_98[0x13] * fVar59;
        fVar90 = pfStack_98[0x14] * fVar90 - pfStack_98[0x15] * fVar93;
        fVar84 = pfStack_98[0x16] * fVar84 - pfStack_98[0x17] * fVar127;
        fVar51 = fVar55 - fVar97;
        fVar52 = fVar60 - fVar66;
        fVar68 = fVar120 - fVar67;
        fVar56 = fVar82 - fVar69;
        fVar57 = fVar49 - fVar70;
        fVar103 = fVar119 - fVar74;
        fVar59 = fVar63 - fVar76;
        fVar58 = fVar65 - fVar118;
        fVar55 = fVar55 + fVar97;
        fVar60 = fVar60 + fVar66;
        fVar120 = fVar120 + fVar67;
        fVar82 = fVar82 + fVar69;
        fVar49 = fVar49 + fVar70;
        fVar119 = fVar119 + fVar74;
        fVar63 = fVar63 + fVar76;
        fVar65 = fVar65 + fVar118;
        fVar75 = fVar77 + fVar72;
        fVar97 = fVar91 + fVar86;
        fVar118 = fVar113 + fVar88;
        fVar127 = fVar126 + fVar71;
        fVar76 = fVar61 + fVar121;
        fVar93 = fVar62 + fVar73;
        fVar66 = fVar109 + fVar90;
        fVar67 = fVar64 + fVar84;
        fVar77 = fVar77 - fVar72;
        fVar91 = fVar91 - fVar86;
        fVar113 = fVar113 - fVar88;
        fVar126 = fVar126 - fVar71;
        fVar61 = fVar61 - fVar121;
        fVar62 = fVar62 - fVar73;
        fVar109 = fVar109 - fVar90;
        fVar64 = fVar64 - fVar84;
        *param_1 = (fVar55 + fVar75) * 0.0625;
        param_1[1] = (fVar49 + fVar76) * 0.0625;
        param_1[2] = (fVar60 + fVar97) * 0.0625;
        param_1[3] = (fVar119 + fVar93) * 0.0625;
        param_1[4] = (fVar120 + fVar118) * 0.0625;
        param_1[5] = (fVar63 + fVar66) * 0.0625;
        param_1[6] = (fVar82 + fVar127) * 0.0625;
        param_1[7] = (fVar65 + fVar67) * 0.0625;
        param_1[8] = (fVar51 - fVar61) * 0.0625;
        param_1[9] = (fVar57 + fVar77) * 0.0625;
        param_1[10] = (fVar52 - fVar62) * 0.0625;
        param_1[0xb] = (fVar103 + fVar91) * 0.0625;
        param_1[0xc] = (fVar68 - fVar109) * 0.0625;
        param_1[0xd] = (fVar59 + fVar113) * 0.0625;
        param_1[0xe] = (fVar56 - fVar64) * 0.0625;
        param_1[0xf] = (fVar58 + fVar126) * 0.0625;
        param_1[0x10] = (fVar55 - fVar75) * 0.0625;
        param_1[0x11] = (fVar49 - fVar76) * 0.0625;
        param_1[0x12] = (fVar60 - fVar97) * 0.0625;
        param_1[0x13] = (fVar119 - fVar93) * 0.0625;
        param_1[0x14] = (fVar120 - fVar118) * 0.0625;
        param_1[0x15] = (fVar63 - fVar66) * 0.0625;
        param_1[0x16] = (fVar82 - fVar127) * 0.0625;
        param_1[0x17] = (fVar65 - fVar67) * 0.0625;
        param_1[0x18] = (fVar51 + fVar61) * 0.0625;
        param_1[0x19] = (fVar57 - fVar77) * 0.0625;
        param_1[0x1a] = (fVar52 + fVar62) * 0.0625;
        param_1[0x1b] = (fVar103 - fVar91) * 0.0625;
        param_1[0x1c] = (fVar68 + fVar109) * 0.0625;
        param_1[0x1d] = (fVar59 - fVar113) * 0.0625;
        param_1[0x1e] = (fVar56 + fVar64) * 0.0625;
        param_1[0x1f] = (fVar58 - fVar126) * 0.0625;
      }
      return;
    }
    lVar23 = *(long *)(param_3 + 4);
    pfVar39 = *(float **)(param_3 + 6);
    if (param_4 == 0) {
      pcVar3 = FUN_10987dfc4;
      if (param_3[10] != 0) {
        pcVar3 = FUN_10987d7b8;
      }
      uVar26 = piVar18[*piVar18 << 1] * piVar18[1];
      (*pcVar3)(pfVar39);
      uVar38 = (ulong)(int)uVar26;
      lVar35 = (long)(int)(uVar26 * 2);
      pfVar19 = (float *)(lVar23 + (long)(int)uVar26 * 8);
      if (3 < (int)uVar26) {
        lVar48 = 0;
        uVar29 = ((uint)(uVar38 >> 2) & 0x3fffffff) + 1;
        do {
          pfVar31 = (float *)((long)pfVar19 + lVar48);
          pfVar32 = (float *)(lVar23 + uVar38 * 0x10 + lVar48);
          pfVar24 = (float *)(lVar23 + lVar35 * 8 + uVar38 * 8 + lVar48);
          pfVar30 = (float *)((long)param_1 + lVar48);
          fVar59 = *pfVar32 * pfVar39[4] - pfVar32[1] * pfVar39[5];
          fVar58 = pfVar32[2] * pfVar39[0xc] - pfVar32[3] * pfVar39[0xd];
          fVar60 = pfVar32[4] * pfVar39[0x14] - pfVar32[5] * pfVar39[0x15];
          fVar75 = pfVar32[6] * pfVar39[0x1c] - pfVar32[7] * pfVar39[0x1d];
          fVar56 = pfVar32[1] * pfVar39[4] + *pfVar32 * pfVar39[5];
          fVar55 = pfVar32[3] * pfVar39[0xc] + pfVar32[2] * pfVar39[0xd];
          fVar57 = pfVar32[5] * pfVar39[0x14] + pfVar32[4] * pfVar39[0x15];
          fVar103 = pfVar32[7] * pfVar39[0x1c] + pfVar32[6] * pfVar39[0x1d];
          fVar64 = *pfVar31 * pfVar39[2] - pfVar31[1] * pfVar39[3];
          fVar65 = pfVar31[2] * pfVar39[10] - pfVar31[3] * pfVar39[0xb];
          fVar66 = pfVar31[4] * pfVar39[0x12] - pfVar31[5] * pfVar39[0x13];
          fVar67 = pfVar31[6] * pfVar39[0x1a] - pfVar31[7] * pfVar39[0x1b];
          fVar84 = pfVar39[6] * *pfVar24 - pfVar24[1] * pfVar39[7];
          fVar86 = pfVar39[0xe] * pfVar24[2] - pfVar24[3] * pfVar39[0xf];
          fVar88 = pfVar39[0x16] * pfVar24[4] - pfVar24[5] * pfVar39[0x17];
          fVar90 = pfVar39[0x1e] * pfVar24[6] - pfVar24[7] * pfVar39[0x1f];
          fVar109 = pfVar31[1] * pfVar39[2] + *pfVar31 * pfVar39[3];
          fVar93 = pfVar31[3] * pfVar39[10] + pfVar31[2] * pfVar39[0xb];
          fVar61 = pfVar31[5] * pfVar39[0x12] + pfVar31[4] * pfVar39[0x13];
          fVar63 = pfVar31[7] * pfVar39[0x1a] + pfVar31[6] * pfVar39[0x1b];
          fVar127 = pfVar39[6] * pfVar24[1] + *pfVar24 * pfVar39[7];
          fVar76 = pfVar39[0xe] * pfVar24[3] + pfVar24[2] * pfVar39[0xf];
          fVar119 = pfVar39[0x16] * pfVar24[5] + pfVar24[4] * pfVar39[0x17];
          fVar62 = pfVar39[0x1e] * pfVar24[7] + pfVar24[6] * pfVar39[0x1f];
          fVar49 = *pfVar39 + fVar59;
          fVar51 = pfVar39[8] + fVar58;
          fVar52 = pfVar39[0x10] + fVar60;
          fVar68 = pfVar39[0x18] + fVar75;
          fVar77 = pfVar39[1] + fVar56;
          fVar82 = pfVar39[9] + fVar55;
          fVar91 = pfVar39[0x11] + fVar57;
          fVar97 = pfVar39[0x19] + fVar103;
          fVar59 = *pfVar39 - fVar59;
          fVar58 = pfVar39[8] - fVar58;
          fVar60 = pfVar39[0x10] - fVar60;
          fVar75 = pfVar39[0x18] - fVar75;
          fVar56 = pfVar39[1] - fVar56;
          fVar55 = pfVar39[9] - fVar55;
          fVar57 = pfVar39[0x11] - fVar57;
          fVar103 = pfVar39[0x19] - fVar103;
          fVar113 = fVar64 + fVar84;
          fVar118 = fVar65 + fVar86;
          fVar120 = fVar66 + fVar88;
          fVar126 = fVar67 + fVar90;
          fVar69 = fVar109 + fVar127;
          fVar70 = fVar93 + fVar76;
          fVar72 = fVar61 + fVar119;
          fVar74 = fVar63 + fVar62;
          fVar64 = fVar64 - fVar84;
          fVar65 = fVar65 - fVar86;
          fVar66 = fVar66 - fVar88;
          fVar67 = fVar67 - fVar90;
          fVar109 = fVar109 - fVar127;
          fVar93 = fVar93 - fVar76;
          fVar61 = fVar61 - fVar119;
          fVar63 = fVar63 - fVar62;
          *pfVar30 = fVar49 + fVar113;
          pfVar30[1] = fVar77 + fVar69;
          pfVar30[2] = fVar51 + fVar118;
          pfVar30[3] = fVar82 + fVar70;
          pfVar30[4] = fVar52 + fVar120;
          pfVar30[5] = fVar91 + fVar72;
          pfVar30[6] = fVar68 + fVar126;
          pfVar30[7] = fVar97 + fVar74;
          pfVar31 = (float *)((long)param_1 + lVar48 + uVar38 * 8);
          *pfVar31 = fVar59 + fVar109;
          pfVar31[1] = fVar56 - fVar64;
          pfVar31[2] = fVar58 + fVar93;
          pfVar31[3] = fVar55 - fVar65;
          pfVar31[4] = fVar60 + fVar61;
          pfVar31[5] = fVar57 - fVar66;
          pfVar31[6] = fVar75 + fVar63;
          pfVar31[7] = fVar103 - fVar67;
          pfVar31 = (float *)((long)param_1 + lVar48 + lVar35 * 8);
          *pfVar31 = fVar49 - fVar113;
          pfVar31[1] = fVar77 - fVar69;
          pfVar31[2] = fVar51 - fVar118;
          pfVar31[3] = fVar82 - fVar70;
          pfVar31[4] = fVar52 - fVar120;
          pfVar31[5] = fVar91 - fVar72;
          pfVar31[6] = fVar68 - fVar126;
          pfVar31[7] = fVar97 - fVar74;
          pfVar31 = (float *)((long)param_1 + lVar48 + (long)(int)(uVar26 * 3) * 8);
          *pfVar31 = fVar59 - fVar109;
          pfVar31[1] = fVar56 + fVar64;
          pfVar31[2] = fVar58 - fVar93;
          pfVar31[3] = fVar55 + fVar65;
          pfVar31[4] = fVar60 - fVar61;
          pfVar31[5] = fVar57 + fVar66;
          pfVar31[6] = fVar75 - fVar63;
          pfVar31[7] = fVar103 + fVar67;
          pfVar39 = pfVar39 + 0x20;
          lVar48 = lVar48 + 0x20;
          uVar29 = uVar29 - 1;
        } while (1 < uVar29);
        param_1 = (float *)((long)param_1 + lVar48);
        pfVar19 = (float *)((long)pfVar19 + lVar48);
      }
      uVar29 = uVar26 & 3;
      if (-1 < (int)-uVar26) {
        uVar29 = -(-uVar26 & 3);
      }
      if (0 < (int)uVar29) {
        uVar29 = uVar29 + 1;
        pfVar31 = param_1 + (long)(int)(uVar26 * 3) * 2 + 1;
        do {
          fVar51 = pfVar19[uVar38 * 2];
          fVar68 = (pfVar19 + uVar38 * 2)[1];
          fVar56 = pfVar19[lVar35 * 2];
          fVar103 = (pfVar19 + lVar35 * 2)[1];
          fVar57 = pfVar39[2] * *pfVar19 - pfVar39[3] * pfVar19[1];
          fVar52 = pfVar39[3] * *pfVar19 + pfVar39[2] * pfVar19[1];
          fVar49 = pfVar39[4] * fVar51 - pfVar39[5] * fVar68;
          fVar51 = pfVar39[5] * fVar51 + pfVar39[4] * fVar68;
          fVar55 = pfVar39[6] * fVar56 - pfVar39[7] * fVar103;
          fVar103 = pfVar39[7] * fVar56 + pfVar39[6] * fVar103;
          fVar59 = *pfVar39 + fVar49;
          fVar58 = pfVar39[1] + fVar51;
          fVar49 = *pfVar39 - fVar49;
          fVar51 = pfVar39[1] - fVar51;
          fVar68 = fVar57 + fVar55;
          fVar56 = fVar52 + fVar103;
          fVar57 = fVar57 - fVar55;
          fVar52 = fVar52 - fVar103;
          *param_1 = fVar59 + fVar68;
          param_1[1] = fVar58 + fVar56;
          param_1[uVar38 * 2] = fVar49 + fVar52;
          (param_1 + uVar38 * 2)[1] = fVar51 - fVar57;
          param_1[lVar35 * 2] = fVar59 - fVar68;
          (param_1 + lVar35 * 2)[1] = fVar58 - fVar56;
          pfVar19 = pfVar19 + 2;
          uVar29 = uVar29 - 1;
          pfVar31[-1] = fVar49 - fVar52;
          *pfVar31 = fVar51 + fVar57;
          pfVar31 = pfVar31 + 2;
          pfVar39 = pfVar39 + 8;
          param_1 = param_1 + 2;
        } while (1 < uVar29);
      }
      return;
    }
    pcVar3 = (code *)0x10987f28c;
    if (param_3[0xb] != 0) {
      pcVar3 = FUN_10987e9e0;
    }
    uVar26 = piVar18[*piVar18 << 1] * piVar18[1];
    (*pcVar3)(pfVar39);
    uVar38 = (ulong)(int)uVar26;
    lVar35 = (long)(int)(uVar26 * 2);
    pfVar19 = (float *)(lVar23 + (long)(int)uVar26 * 8);
    if (3 < (int)uVar26) {
      lVar48 = 0;
      uVar29 = ((uint)(uVar38 >> 2) & 0x3fffffff) + 1;
      do {
        pfVar31 = (float *)((long)param_1 + lVar48);
        pfVar32 = (float *)((long)pfVar19 + lVar48);
        pfVar24 = (float *)(lVar23 + uVar38 * 0x10 + lVar48);
        pfVar30 = (float *)(lVar23 + lVar35 * 8 + uVar38 * 8 + lVar48);
        fVar59 = *pfVar24 * pfVar39[4] + pfVar24[1] * pfVar39[5];
        fVar58 = pfVar24[2] * pfVar39[0xc] + pfVar24[3] * pfVar39[0xd];
        fVar60 = pfVar24[4] * pfVar39[0x14] + pfVar24[5] * pfVar39[0x15];
        fVar75 = pfVar24[6] * pfVar39[0x1c] + pfVar24[7] * pfVar39[0x1d];
        fVar77 = pfVar24[1] * pfVar39[4] - *pfVar24 * pfVar39[5];
        fVar82 = pfVar24[3] * pfVar39[0xc] - pfVar24[2] * pfVar39[0xd];
        fVar91 = pfVar24[5] * pfVar39[0x14] - pfVar24[4] * pfVar39[0x15];
        fVar97 = pfVar24[7] * pfVar39[0x1c] - pfVar24[6] * pfVar39[0x1d];
        fVar127 = *pfVar32 * pfVar39[2] + pfVar32[1] * pfVar39[3];
        fVar109 = pfVar32[2] * pfVar39[10] + pfVar32[3] * pfVar39[0xb];
        fVar76 = pfVar32[4] * pfVar39[0x12] + pfVar32[5] * pfVar39[0x13];
        fVar93 = pfVar32[6] * pfVar39[0x1a] + pfVar32[7] * pfVar39[0x1b];
        fVar51 = pfVar32[1] * pfVar39[2] - *pfVar32 * pfVar39[3];
        fVar68 = pfVar32[3] * pfVar39[10] - pfVar32[2] * pfVar39[0xb];
        fVar55 = pfVar32[5] * pfVar39[0x12] - pfVar32[4] * pfVar39[0x13];
        fVar103 = pfVar32[7] * pfVar39[0x1a] - pfVar32[6] * pfVar39[0x1b];
        fVar84 = pfVar39[6] * *pfVar30 + pfVar30[1] * pfVar39[7];
        fVar86 = pfVar39[0xe] * pfVar30[2] + pfVar30[3] * pfVar39[0xf];
        fVar88 = pfVar39[0x16] * pfVar30[4] + pfVar30[5] * pfVar39[0x17];
        fVar90 = pfVar39[0x1e] * pfVar30[6] + pfVar30[7] * pfVar39[0x1f];
        fVar49 = pfVar39[6] * pfVar30[1] - *pfVar30 * pfVar39[7];
        fVar52 = pfVar39[0xe] * pfVar30[3] - pfVar30[2] * pfVar39[0xf];
        fVar56 = pfVar39[0x16] * pfVar30[5] - pfVar30[4] * pfVar39[0x17];
        fVar57 = pfVar39[0x1e] * pfVar30[7] - pfVar30[6] * pfVar39[0x1f];
        fVar119 = *pfVar39 + fVar59;
        fVar61 = pfVar39[8] + fVar58;
        fVar62 = pfVar39[0x10] + fVar60;
        fVar63 = pfVar39[0x18] + fVar75;
        fVar64 = fVar77 - pfVar39[1];
        fVar65 = fVar82 - pfVar39[9];
        fVar66 = fVar91 - pfVar39[0x11];
        fVar67 = fVar97 - pfVar39[0x19];
        fVar59 = *pfVar39 - fVar59;
        fVar58 = pfVar39[8] - fVar58;
        fVar60 = pfVar39[0x10] - fVar60;
        fVar75 = pfVar39[0x18] - fVar75;
        fVar77 = -pfVar39[1] - fVar77;
        fVar82 = -pfVar39[9] - fVar82;
        fVar91 = -pfVar39[0x11] - fVar91;
        fVar97 = -pfVar39[0x19] - fVar97;
        fVar113 = fVar127 + fVar84;
        fVar118 = fVar109 + fVar86;
        fVar120 = fVar76 + fVar88;
        fVar126 = fVar93 + fVar90;
        fVar69 = fVar51 + fVar49;
        fVar70 = fVar68 + fVar52;
        fVar72 = fVar55 + fVar56;
        fVar74 = fVar103 + fVar57;
        fVar127 = fVar127 - fVar84;
        fVar109 = fVar109 - fVar86;
        fVar76 = fVar76 - fVar88;
        fVar93 = fVar93 - fVar90;
        fVar51 = fVar51 - fVar49;
        fVar68 = fVar68 - fVar52;
        fVar55 = fVar55 - fVar56;
        fVar103 = fVar103 - fVar57;
        *pfVar31 = fVar119 + fVar113;
        pfVar31[1] = -(fVar64 + fVar69);
        pfVar31[2] = fVar61 + fVar118;
        pfVar31[3] = -(fVar65 + fVar70);
        pfVar31[4] = fVar62 + fVar120;
        pfVar31[5] = -(fVar66 + fVar72);
        pfVar31[6] = fVar63 + fVar126;
        pfVar31[7] = -(fVar67 + fVar74);
        pfVar31 = (float *)((long)param_1 + lVar48 + uVar38 * 8);
        *pfVar31 = fVar59 + fVar51;
        pfVar31[1] = -(fVar77 - fVar127);
        pfVar31[2] = fVar58 + fVar68;
        pfVar31[3] = -(fVar82 - fVar109);
        pfVar31[4] = fVar60 + fVar55;
        pfVar31[5] = -(fVar91 - fVar76);
        pfVar31[6] = fVar75 + fVar103;
        pfVar31[7] = -(fVar97 - fVar93);
        pfVar31 = (float *)((long)param_1 + lVar48 + lVar35 * 8);
        *pfVar31 = fVar119 - fVar113;
        pfVar31[1] = -(fVar64 - fVar69);
        pfVar31[2] = fVar61 - fVar118;
        pfVar31[3] = -(fVar65 - fVar70);
        pfVar31[4] = fVar62 - fVar120;
        pfVar31[5] = -(fVar66 - fVar72);
        pfVar31[6] = fVar63 - fVar126;
        pfVar31[7] = -(fVar67 - fVar74);
        pfVar31 = (float *)((long)param_1 + lVar48 + (long)(int)(uVar26 * 3) * 8);
        *pfVar31 = fVar59 - fVar51;
        pfVar31[1] = -(fVar77 + fVar127);
        pfVar31[2] = fVar58 - fVar68;
        pfVar31[3] = -(fVar82 + fVar109);
        pfVar31[4] = fVar60 - fVar55;
        pfVar31[5] = -(fVar91 + fVar76);
        pfVar31[6] = fVar75 - fVar103;
        pfVar31[7] = -(fVar97 + fVar93);
        pfVar39 = pfVar39 + 0x20;
        lVar48 = lVar48 + 0x20;
        uVar29 = uVar29 - 1;
      } while (1 < uVar29);
      param_1 = (float *)((long)param_1 + lVar48);
      pfVar19 = (float *)((long)pfVar19 + lVar48);
    }
    uVar29 = uVar26 & 3;
    if (-1 < (int)-uVar26) {
      uVar29 = -(-uVar26 & 3);
    }
    if (0 < (int)uVar29) {
      uVar29 = uVar29 + 1;
      pfVar31 = param_1 + (long)(int)(uVar26 * 3) * 2 + 1;
      do {
        fVar51 = pfVar19[uVar38 * 2];
        fVar68 = (pfVar19 + uVar38 * 2)[1];
        fVar56 = pfVar19[lVar35 * 2];
        fVar103 = (pfVar19 + lVar35 * 2)[1];
        fVar57 = pfVar39[2] * *pfVar19 + pfVar39[3] * pfVar19[1];
        fVar52 = pfVar39[2] * pfVar19[1] - pfVar39[3] * *pfVar19;
        fVar49 = pfVar39[4] * fVar51 + pfVar39[5] * fVar68;
        fVar68 = pfVar39[4] * fVar68 - pfVar39[5] * fVar51;
        fVar55 = pfVar39[6] * fVar56 + pfVar39[7] * fVar103;
        fVar103 = pfVar39[6] * fVar103 - pfVar39[7] * fVar56;
        fVar59 = *pfVar39 + fVar49;
        fVar51 = fVar68 - pfVar39[1];
        fVar49 = *pfVar39 - fVar49;
        fVar68 = -pfVar39[1] - fVar68;
        fVar56 = fVar57 + fVar55;
        fVar58 = fVar52 + fVar103;
        fVar57 = fVar57 - fVar55;
        fVar52 = fVar52 - fVar103;
        *param_1 = fVar59 + fVar56;
        param_1[1] = -(fVar51 + fVar58);
        param_1[uVar38 * 2] = fVar49 + fVar52;
        (param_1 + uVar38 * 2)[1] = -(fVar68 - fVar57);
        param_1[lVar35 * 2] = fVar59 - fVar56;
        (param_1 + lVar35 * 2)[1] = -(fVar51 - fVar58);
        pfVar19 = pfVar19 + 2;
        uVar29 = uVar29 - 1;
        pfVar31[-1] = fVar49 - fVar52;
        *pfVar31 = -(fVar68 + fVar57);
        pfVar31 = pfVar31 + 2;
        pfVar39 = pfVar39 + 8;
        param_1 = param_1 + 2;
      } while (1 < uVar29);
    }
    return;
  }
  puVar17 = *(uint **)(param_3 + 2);
  uVar26 = *puVar17;
  if (puVar17[(int)(uVar26 * 2 + 2)] != 1) {
    if (puVar17[(int)(uVar26 * 2 + 2)] != 0) {
      return;
    }
    lVar23 = *(long *)(param_3 + 4);
    pfVar39 = *(float **)(param_3 + 6);
    uVar33 = puVar17[1];
    uVar34 = (ulong)uVar33;
    lVar35 = (long)(int)uVar33;
    uVar38 = (ulong)(puVar17 + (int)(uVar26 * 2))[-1];
    uVar29 = puVar17[(int)(uVar26 * 2)];
    if (param_4 == 0) {
      if (uVar29 != 2) {
        if (uVar29 == 8) {
          if ((int)uVar33 < 1) {
            uVar34 = (ulong)(uVar33 << 1);
          }
          else {
            lVar48 = 0;
            lVar41 = uVar34 * 8;
            lVar35 = uVar34 * 8;
            pfVar19 = param_1 + 8;
            do {
              pfVar31 = (float *)((long)param_2 + lVar48 + 4);
              pfVar32 = (float *)((long)param_2 + lVar48 + (ulong)(uVar33 << 2) * 8 + 4);
              fVar49 = pfVar31[-1];
              fVar51 = *pfVar31;
              fVar52 = pfVar32[-1];
              fVar68 = *pfVar32;
              fVar55 = fVar49 + fVar52;
              fVar57 = fVar51 + fVar68;
              fVar49 = fVar49 - fVar52;
              fVar51 = fVar51 - fVar68;
              pfVar31 = (float *)((long)param_2 + lVar48 + lVar35 + 4);
              pfVar32 = (float *)((long)param_2 + lVar48 + (ulong)(uVar33 * 5) * 8 + 4);
              fVar52 = pfVar31[-1];
              fVar68 = *pfVar31;
              fVar56 = pfVar32[-1];
              fVar103 = *pfVar32;
              fVar58 = fVar52 + fVar56;
              fVar60 = fVar68 + fVar103;
              fVar52 = fVar52 - fVar56;
              fVar68 = fVar68 - fVar103;
              pfVar31 = (float *)((long)param_2 + lVar48 + (ulong)(uVar33 << 1) * 8 + 4);
              pfVar32 = (float *)((long)param_2 + lVar48 + (ulong)(uVar33 * 6) * 8 + 4);
              fVar103 = pfVar31[-1];
              fVar59 = *pfVar31;
              fVar56 = pfVar32[-1];
              fVar75 = *pfVar32;
              fVar82 = fVar103 + fVar56;
              fVar91 = fVar59 + fVar75;
              fVar103 = fVar103 - fVar56;
              fVar59 = fVar59 - fVar75;
              pfVar31 = (float *)((long)param_2 + lVar48 + (ulong)(uVar33 * 3) * 8 + 4);
              pfVar32 = (float *)((long)param_2 + lVar48 + (ulong)(uVar33 * 7) * 8 + 4);
              fVar75 = pfVar31[-1];
              fVar77 = *pfVar31;
              fVar56 = pfVar32[-1];
              fVar97 = *pfVar32;
              fVar113 = fVar75 + fVar56;
              fVar118 = fVar77 + fVar97;
              fVar75 = fVar75 - fVar56;
              fVar77 = fVar77 - fVar97;
              fVar56 = (fVar52 + fVar68) * 0.70710677;
              fVar52 = (fVar68 - fVar52) * 0.70710677;
              fVar68 = (fVar75 - fVar77) * 0.70710677;
              fVar75 = (fVar75 + fVar77) * 0.70710677;
              fVar77 = fVar55 + fVar82;
              fVar97 = fVar57 + fVar91;
              fVar120 = fVar49 + fVar59;
              fVar126 = fVar51 - fVar103;
              fVar55 = fVar55 - fVar82;
              fVar57 = fVar57 - fVar91;
              fVar49 = fVar49 - fVar59;
              fVar51 = fVar51 + fVar103;
              fVar103 = fVar58 + fVar113;
              fVar59 = fVar60 + fVar118;
              fVar82 = fVar56 - fVar68;
              fVar91 = fVar52 - fVar75;
              fVar58 = fVar58 - fVar113;
              fVar60 = fVar60 - fVar118;
              fVar56 = fVar56 + fVar68;
              pfVar19[-8] = fVar77 + fVar103;
              pfVar19[-7] = fVar97 + fVar59;
              pfVar19[-6] = fVar120 + fVar82;
              pfVar19[-5] = fVar126 + fVar91;
              pfVar19[-4] = fVar55 + fVar60;
              pfVar19[-3] = fVar57 - fVar58;
              fVar52 = fVar52 + fVar75;
              pfVar19[-2] = fVar49 + fVar52;
              pfVar19[-1] = fVar51 - fVar56;
              *pfVar19 = fVar77 - fVar103;
              pfVar19[1] = fVar97 - fVar59;
              pfVar19[2] = fVar120 - fVar82;
              pfVar19[3] = fVar126 - fVar91;
              pfVar19[4] = fVar55 - fVar60;
              pfVar19[5] = fVar57 + fVar58;
              pfVar19[6] = fVar49 - fVar52;
              pfVar19[7] = fVar51 + fVar56;
              lVar48 = lVar48 + 8;
              pfVar19 = pfVar19 + 0x10;
              uVar34 = (ulong)(uVar33 << 1);
            } while (lVar41 - lVar48 != 0);
          }
        }
        else {
          if (uVar29 != 4) goto LAB_10987a724;
          uVar28 = uVar34;
          pfVar19 = param_1;
          if (uVar33 == 0) {
            uVar34 = 0;
          }
          else {
            do {
              fVar49 = (float)*(undefined8 *)param_2;
              fVar51 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
              fVar57 = (float)*(undefined8 *)(param_2 + lVar35 * 6);
              fVar103 = (float)((ulong)*(undefined8 *)(param_2 + lVar35 * 6) >> 0x20);
              fVar52 = (float)*(undefined8 *)(param_2 + lVar35 * 4);
              fVar59 = fVar49 + fVar52;
              fVar68 = (float)((ulong)*(undefined8 *)(param_2 + lVar35 * 4) >> 0x20);
              fVar58 = fVar51 + fVar68;
              fVar49 = fVar49 - fVar52;
              fVar51 = fVar51 - fVar68;
              fVar68 = (float)*(undefined8 *)(param_2 + lVar35 * 2);
              fVar56 = fVar68 + fVar57;
              fVar52 = (float)((ulong)*(undefined8 *)(param_2 + lVar35 * 2) >> 0x20);
              fVar55 = fVar52 + fVar103;
              fVar52 = fVar52 - fVar103;
              auVar54._4_4_ = fVar52;
              auVar54._0_4_ = fVar68 - fVar57;
              auVar54._8_8_ = 0;
              auVar54 = NEON_rev64(auVar54,4);
              pfVar19[2] = fVar49 + fVar52;
              pfVar19[3] = fVar51 - auVar54._4_4_;
              *pfVar19 = fVar59 + fVar56;
              pfVar19[1] = fVar58 + fVar55;
              *(ulong *)(pfVar19 + 6) = CONCAT44(fVar51 + auVar54._4_4_,fVar49 - fVar52);
              *(ulong *)(pfVar19 + 4) = CONCAT44(fVar58 - fVar55,fVar59 - fVar56);
              param_2 = param_2 + 2;
              uVar29 = (int)uVar28 - 1;
              uVar28 = (ulong)uVar29;
              pfVar19 = pfVar19 + 8;
            } while (uVar29 != 0);
          }
        }
        iVar27 = uVar26 - 1;
        uVar29 = uVar33 + 3;
        if (-1 < (int)uVar33) {
          uVar29 = uVar33;
        }
        uVar29 = (int)uVar29 >> 2;
        uVar33 = (uint)uVar34;
        pfVar19 = param_1;
        if (2 < (int)uVar26) {
          pfVar31 = param_1;
          uVar28 = uVar38;
          do {
            pfVar19 = pfVar39;
            pfVar39 = pfVar31;
            uVar26 = (uint)uVar28;
            if ((int)uVar29 < 1) {
              uVar38 = (ulong)(uVar26 << 2);
            }
            else {
              uVar20 = 0;
              uVar38 = (ulong)(uVar26 << 2);
              lVar35 = lVar23 + 4;
              uVar44 = -(ulong)((uVar26 & 0x3fffffff) >> 0x1d) & 0xfffffff800000000 | uVar38 << 3;
              pfVar24 = pfVar19 + (long)(int)uVar26 * 2 + 1;
              pfVar31 = pfVar19 + (long)(int)(uVar26 * 3) * 2;
              pfVar32 = pfVar19 + (long)(int)(uVar26 << 1) * 2;
              pfVar45 = pfVar19;
              pfVar30 = pfVar39;
              do {
                if (uVar26 != 0) {
                  lVar48 = 0;
                  uVar22 = uVar28;
                  do {
                    fVar49 = ((float *)(lVar35 + lVar48))[-1];
                    fVar51 = *(float *)(lVar35 + lVar48);
                    pfVar8 = (float *)(lVar35 + (long)(int)uVar26 * 8 + lVar48);
                    fVar68 = pfVar8[-1];
                    fVar55 = *pfVar8;
                    pfVar8 = (float *)(lVar35 + (long)(int)(uVar26 << 1) * 8 + lVar48);
                    fVar103 = pfVar8[-1];
                    fVar59 = *pfVar8;
                    fVar52 = *(float *)((long)pfVar30 + lVar48);
                    fVar56 = ((float *)((long)pfVar30 + lVar48))[1];
                    pfVar8 = (float *)((long)pfVar30 +
                                      lVar48 + (-(uVar34 >> 0x1f) & 0xfffffff800000000 | uVar34 << 3
                                               ));
                    fVar58 = *pfVar8;
                    fVar60 = pfVar8[1];
                    pfVar8 = (float *)((long)pfVar30 +
                                      lVar48 + (-(ulong)((uVar33 & 0x7fffffff) >> 0x1e) &
                                                0xfffffff800000000 | (ulong)(uVar33 << 1) << 3));
                    fVar75 = *pfVar8;
                    fVar77 = pfVar8[1];
                    pfVar8 = (float *)((long)pfVar30 +
                                      lVar48 + (-(ulong)(uVar33 * 3 >> 0x1f) & 0xfffffff800000000 |
                                               (ulong)(uVar33 * 3) << 3));
                    fVar82 = *pfVar8;
                    fVar91 = pfVar8[1];
                    fVar57 = -(fVar60 * fVar51) + fVar49 * fVar58;
                    fVar49 = fVar51 * fVar58 + fVar49 * fVar60;
                    fVar51 = -(fVar77 * fVar55) + fVar68 * fVar75;
                    fVar68 = fVar55 * fVar75 + fVar68 * fVar77;
                    fVar55 = -(fVar91 * fVar59) + fVar103 * fVar82;
                    fVar103 = fVar59 * fVar82 + fVar103 * fVar91;
                    fVar59 = fVar52 + fVar51;
                    fVar58 = fVar56 + fVar68;
                    fVar52 = fVar52 - fVar51;
                    fVar56 = fVar56 - fVar68;
                    fVar51 = fVar57 + fVar55;
                    fVar68 = fVar49 + fVar103;
                    fVar57 = fVar57 - fVar55;
                    fVar49 = fVar49 - fVar103;
                    *(float *)((long)pfVar45 + lVar48) = fVar59 + fVar51;
                    ((float *)((long)pfVar45 + lVar48))[1] = fVar58 + fVar68;
                    ((float *)((long)pfVar24 + lVar48))[-1] = fVar52 + fVar49;
                    *(float *)((long)pfVar24 + lVar48) = fVar56 - fVar57;
                    *(float *)((long)pfVar32 + lVar48) = fVar59 - fVar51;
                    ((float *)((long)pfVar32 + lVar48))[1] = fVar58 - fVar68;
                    *(float *)((long)pfVar31 + lVar48) = fVar52 - fVar49;
                    ((float *)((long)pfVar31 + lVar48))[1] = fVar56 + fVar57;
                    lVar48 = lVar48 + 8;
                    uVar25 = (int)uVar22 - 1;
                    uVar22 = (ulong)uVar25;
                  } while (uVar25 != 0);
                  pfVar30 = (float *)((long)pfVar30 + lVar48);
                }
                uVar20 = uVar20 + 1;
                pfVar45 = (float *)((long)pfVar45 + uVar44);
                pfVar24 = (float *)((long)pfVar24 + uVar44);
                pfVar31 = (float *)((long)pfVar31 + uVar44);
                pfVar32 = (float *)((long)pfVar32 + uVar44);
              } while (uVar20 != uVar29);
            }
            lVar23 = lVar23 + (long)(int)(uVar26 * 3) * 8;
            uVar26 = uVar29 + 3;
            if (-1 < (int)uVar29) {
              uVar26 = uVar29;
            }
            uVar29 = (int)uVar26 >> 2;
            bVar1 = 2 < iVar27;
            pfVar31 = pfVar19;
            uVar28 = uVar38;
            iVar27 = iVar27 + -1;
          } while (bVar1);
          iVar27 = 1;
        }
        if (iVar27 == 0) {
          return;
        }
        if (uVar29 == 0) {
          return;
        }
        iVar27 = (int)uVar38;
        lVar23 = lVar23 + 4;
        uVar28 = -(ulong)(uVar33 * 3 >> 0x1f) & 0xfffffff800000000 | (ulong)(uVar33 * 3) << 3;
        uVar20 = -(ulong)((uVar33 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                 (ulong)(uVar33 << 1) << 3;
        do {
          if (iVar27 != 0) {
            lVar35 = 0;
            uVar44 = uVar38;
            do {
              fVar49 = ((float *)(lVar23 + lVar35))[-1];
              fVar51 = *(float *)(lVar23 + lVar35);
              pfVar39 = (float *)(lVar23 + (long)iVar27 * 8 + lVar35);
              fVar68 = pfVar39[-1];
              fVar55 = *pfVar39;
              pfVar39 = (float *)(lVar23 + (long)(iVar27 << 1) * 8 + lVar35);
              fVar103 = pfVar39[-1];
              fVar59 = *pfVar39;
              fVar52 = *(float *)((long)pfVar19 + lVar35);
              fVar56 = ((float *)((long)pfVar19 + lVar35))[1];
              pfVar39 = (float *)((long)pfVar19 +
                                 lVar35 + (-(uVar34 >> 0x1f) & 0xfffffff800000000 | uVar34 << 3));
              fVar58 = *pfVar39;
              fVar60 = pfVar39[1];
              pfVar39 = (float *)((long)pfVar19 + lVar35 + uVar20);
              fVar75 = *pfVar39;
              fVar77 = pfVar39[1];
              pfVar39 = (float *)((long)pfVar19 + lVar35 + uVar28);
              fVar82 = *pfVar39;
              fVar91 = pfVar39[1];
              fVar57 = -(fVar60 * fVar51) + fVar49 * fVar58;
              fVar49 = fVar51 * fVar58 + fVar49 * fVar60;
              fVar51 = -(fVar77 * fVar55) + fVar68 * fVar75;
              fVar68 = fVar55 * fVar75 + fVar68 * fVar77;
              fVar55 = -(fVar91 * fVar59) + fVar103 * fVar82;
              fVar103 = fVar59 * fVar82 + fVar103 * fVar91;
              fVar59 = fVar52 + fVar51;
              fVar58 = fVar56 + fVar68;
              fVar52 = fVar52 - fVar51;
              fVar56 = fVar56 - fVar68;
              fVar51 = fVar57 + fVar55;
              fVar68 = fVar49 + fVar103;
              fVar57 = fVar57 - fVar55;
              fVar49 = fVar49 - fVar103;
              *(float *)((long)param_1 + lVar35) = fVar59 + fVar51;
              ((float *)((long)param_1 + lVar35))[1] = fVar58 + fVar68;
              pfVar39 = (float *)((long)param_1 + lVar35 + ((long)(int)uVar33 << 3 | 4U));
              pfVar39[-1] = fVar52 + fVar49;
              *pfVar39 = fVar56 - fVar57;
              pfVar39 = (float *)((long)param_1 + lVar35 + uVar20);
              *pfVar39 = fVar59 - fVar51;
              pfVar39[1] = fVar58 - fVar68;
              pfVar39 = (float *)((long)param_1 + lVar35 + uVar28);
              *pfVar39 = fVar52 - fVar49;
              pfVar39[1] = fVar56 + fVar57;
              lVar35 = lVar35 + 8;
              uVar26 = (int)uVar44 - 1;
              uVar44 = (ulong)uVar26;
            } while (uVar26 != 0);
            pfVar19 = (float *)((long)pfVar19 + lVar35);
            param_1 = (float *)((long)param_1 + lVar35);
          }
          uVar29 = uVar29 - 1;
        } while (uVar29 != 0);
        return;
      }
      *(ulong *)param_1 =
           CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) +
                    (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20),
                    (float)*(undefined8 *)param_2 + (float)*(undefined8 *)(param_2 + 2));
      fVar51 = (float)*(undefined8 *)param_2 - (float)*(undefined8 *)(param_2 + 2);
      fVar49 = (float)((ulong)*(undefined8 *)param_2 >> 0x20) -
               (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
    }
    else {
      fVar49 = 1.0 / (float)(int)(uVar29 * uVar33);
      if (uVar29 != 2) {
        if (uVar29 == 8) {
          if ((int)uVar33 < 1) {
            uVar34 = (ulong)(uVar33 << 1);
          }
          else {
            lVar48 = 0;
            lVar41 = uVar34 * 8;
            lVar35 = uVar34 * 8;
            pfVar19 = param_1 + 8;
            do {
              pfVar31 = (float *)((long)param_2 + lVar48 + 4);
              pfVar32 = (float *)((long)param_2 + lVar48 + (ulong)(uVar33 << 2) * 8 + 4);
              fVar51 = pfVar31[-1];
              fVar52 = *pfVar31;
              fVar68 = pfVar32[-1];
              fVar56 = *pfVar32;
              fVar57 = fVar51 + fVar68;
              fVar103 = fVar52 + fVar56;
              fVar51 = fVar51 - fVar68;
              fVar52 = fVar52 - fVar56;
              pfVar31 = (float *)((long)param_2 + lVar48 + lVar35 + 4);
              pfVar32 = (float *)((long)param_2 + lVar48 + (ulong)(uVar33 * 5) * 8 + 4);
              fVar68 = pfVar31[-1];
              fVar56 = *pfVar31;
              fVar55 = pfVar32[-1];
              fVar59 = *pfVar32;
              fVar60 = fVar68 + fVar55;
              fVar75 = fVar56 + fVar59;
              fVar68 = fVar68 - fVar55;
              fVar56 = fVar56 - fVar59;
              pfVar31 = (float *)((long)param_2 + lVar48 + (ulong)(uVar33 << 1) * 8 + 4);
              pfVar32 = (float *)((long)param_2 + lVar48 + (ulong)(uVar33 * 6) * 8 + 4);
              fVar59 = pfVar31[-1];
              fVar58 = *pfVar31;
              fVar55 = pfVar32[-1];
              fVar77 = *pfVar32;
              fVar91 = fVar59 + fVar55;
              fVar97 = fVar58 + fVar77;
              fVar59 = fVar59 - fVar55;
              fVar58 = fVar58 - fVar77;
              pfVar31 = (float *)((long)param_2 + lVar48 + (ulong)(uVar33 * 3) * 8 + 4);
              pfVar32 = (float *)((long)param_2 + lVar48 + (ulong)(uVar33 * 7) * 8 + 4);
              fVar77 = pfVar31[-1];
              fVar82 = *pfVar31;
              fVar55 = pfVar32[-1];
              fVar113 = *pfVar32;
              fVar118 = fVar77 + fVar55;
              fVar120 = fVar82 + fVar113;
              fVar77 = fVar77 - fVar55;
              fVar82 = fVar82 - fVar113;
              fVar55 = (fVar68 - fVar56) * 0.70710677;
              fVar68 = (fVar68 + fVar56) * 0.70710677;
              fVar56 = (fVar77 + fVar82) * 0.70710677;
              fVar77 = (fVar82 - fVar77) * 0.70710677;
              fVar82 = fVar57 + fVar91;
              fVar113 = fVar103 + fVar97;
              fVar126 = fVar51 - fVar58;
              fVar127 = fVar52 + fVar59;
              fVar57 = fVar57 - fVar91;
              fVar103 = fVar103 - fVar97;
              fVar51 = fVar51 + fVar58;
              fVar52 = fVar52 - fVar59;
              fVar59 = fVar60 + fVar118;
              fVar58 = fVar75 + fVar120;
              fVar91 = fVar55 - fVar56;
              fVar97 = fVar68 - fVar77;
              fVar60 = fVar60 - fVar118;
              fVar75 = fVar75 - fVar120;
              fVar55 = fVar55 + fVar56;
              pfVar19[-8] = fVar82 + fVar59;
              pfVar19[-7] = fVar113 + fVar58;
              pfVar19[-6] = fVar126 + fVar91;
              pfVar19[-5] = fVar127 + fVar97;
              pfVar19[-4] = fVar57 - fVar75;
              pfVar19[-3] = fVar103 + fVar60;
              fVar68 = fVar68 + fVar77;
              pfVar19[-2] = fVar51 - fVar68;
              pfVar19[-1] = fVar52 + fVar55;
              *pfVar19 = fVar82 - fVar59;
              pfVar19[1] = fVar113 - fVar58;
              pfVar19[2] = fVar126 - fVar91;
              pfVar19[3] = fVar127 - fVar97;
              pfVar19[4] = fVar57 + fVar75;
              pfVar19[5] = fVar103 - fVar60;
              pfVar19[6] = fVar51 + fVar68;
              pfVar19[7] = fVar52 - fVar55;
              lVar48 = lVar48 + 8;
              pfVar19 = pfVar19 + 0x10;
              uVar34 = (ulong)(uVar33 << 1);
            } while (lVar41 - lVar48 != 0);
          }
          if (uVar26 == 1) {
            lVar23 = 0;
            do {
              pfVar39 = (float *)((long)param_1 + lVar23);
              pfVar39[2] = pfVar39[2] * fVar49;
              pfVar39[3] = pfVar39[3] * fVar49;
              *pfVar39 = *pfVar39 * fVar49;
              pfVar39[1] = pfVar39[1] * fVar49;
              pfVar39[6] = pfVar39[6] * fVar49;
              pfVar39[7] = pfVar39[7] * fVar49;
              pfVar39[4] = pfVar39[4] * fVar49;
              pfVar39[5] = pfVar39[5] * fVar49;
              lVar23 = lVar23 + 0x20;
            } while (lVar23 != 0x40);
            return;
          }
        }
        else {
          uVar28 = uVar34;
          pfVar19 = param_1;
          uVar25 = uVar33;
          if (uVar29 != 4) {
LAB_10987a724:
            *(undefined8 *)param_1 = *(undefined8 *)param_2;
            return;
          }
          while (uVar25 != 0) {
            fVar68 = (float)*(undefined8 *)(param_2 + lVar35 * 4);
            fVar56 = (float)((ulong)*(undefined8 *)(param_2 + lVar35 * 4) >> 0x20);
            fVar103 = (float)*(undefined8 *)(param_2 + lVar35 * 6);
            fVar59 = (float)((ulong)*(undefined8 *)(param_2 + lVar35 * 6) >> 0x20);
            fVar51 = (float)*(undefined8 *)param_2;
            fVar58 = fVar51 + fVar68;
            fVar52 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
            fVar60 = fVar52 + fVar56;
            fVar51 = fVar51 - fVar68;
            fVar52 = fVar52 - fVar56;
            fVar68 = (float)*(undefined8 *)(param_2 + lVar35 * 2);
            fVar55 = fVar68 + fVar103;
            fVar56 = (float)((ulong)*(undefined8 *)(param_2 + lVar35 * 2) >> 0x20);
            fVar57 = fVar56 + fVar59;
            auVar50._0_4_ = fVar68 - fVar103;
            auVar50._4_4_ = fVar56 - fVar59;
            auVar50._8_8_ = 0;
            auVar54 = NEON_rev64(auVar50,4);
            *(ulong *)(pfVar19 + 2) = CONCAT44(fVar52 + auVar54._4_4_,fVar51 - auVar50._4_4_);
            *pfVar19 = fVar58 + fVar55;
            pfVar19[1] = fVar60 + fVar57;
            pfVar19[6] = fVar51 + auVar50._4_4_;
            pfVar19[7] = fVar52 - auVar54._4_4_;
            pfVar19[4] = fVar58 - fVar55;
            pfVar19[5] = fVar60 - fVar57;
            param_2 = param_2 + 2;
            uVar25 = (int)uVar28 - 1;
            uVar28 = (ulong)uVar25;
            pfVar19 = pfVar19 + 8;
          }
          if (uVar26 == 1) {
            *(ulong *)(param_1 + 2) = CONCAT44(param_1[3] * fVar49,param_1[2] * fVar49);
            *(ulong *)param_1 = CONCAT44(param_1[1] * fVar49,*param_1 * fVar49);
            param_1[6] = param_1[6] * fVar49;
            param_1[7] = param_1[7] * fVar49;
            param_1[4] = param_1[4] * fVar49;
            param_1[5] = param_1[5] * fVar49;
            return;
          }
        }
        uVar29 = uVar33 + 3;
        if (-1 < (int)uVar33) {
          uVar29 = uVar33;
        }
        uVar29 = (int)uVar29 >> 2;
        uVar25 = (uint)uVar34;
        uVar33 = uVar25 * 3;
        pfVar19 = param_1;
        if (1 < (int)(uVar26 - 1)) {
          pfVar31 = param_1;
          uVar28 = uVar38;
          iVar27 = uVar26 - 1;
          do {
            pfVar19 = pfVar39;
            pfVar39 = pfVar31;
            uVar26 = (uint)uVar28;
            uVar38 = (ulong)(uVar26 << 2);
            if (0 < (int)uVar29) {
              uVar20 = 0;
              lVar35 = lVar23 + 4;
              uVar44 = -(ulong)((uVar26 & 0x3fffffff) >> 0x1d) & 0xfffffff800000000 | uVar38 << 3;
              pfVar24 = pfVar19 + (long)(int)uVar26 * 2 + 1;
              pfVar31 = pfVar19 + (long)(int)(uVar26 * 3) * 2;
              pfVar32 = pfVar19 + (long)(int)(uVar26 << 1) * 2;
              pfVar45 = pfVar19;
              pfVar30 = pfVar39;
              do {
                if (uVar26 != 0) {
                  lVar48 = 0;
                  uVar22 = uVar28;
                  do {
                    fVar51 = ((float *)(lVar35 + lVar48))[-1];
                    fVar52 = *(float *)(lVar35 + lVar48);
                    pfVar8 = (float *)(lVar35 + (long)(int)uVar26 * 8 + lVar48);
                    fVar56 = pfVar8[-1];
                    fVar57 = *pfVar8;
                    pfVar8 = (float *)(lVar35 + (long)(int)(uVar26 << 1) * 8 + lVar48);
                    fVar59 = pfVar8[-1];
                    fVar58 = *pfVar8;
                    fVar68 = *(float *)((long)pfVar30 + lVar48);
                    fVar55 = ((float *)((long)pfVar30 + lVar48))[1];
                    pfVar8 = (float *)((long)pfVar30 +
                                      lVar48 + (-(uVar34 >> 0x1f) & 0xfffffff800000000 | uVar34 << 3
                                               ));
                    fVar60 = *pfVar8;
                    fVar75 = pfVar8[1];
                    pfVar8 = (float *)((long)pfVar30 +
                                      lVar48 + (-(ulong)((uVar25 & 0x7fffffff) >> 0x1e) &
                                                0xfffffff800000000 | (ulong)(uVar25 << 1) << 3));
                    fVar77 = *pfVar8;
                    fVar82 = pfVar8[1];
                    pfVar8 = (float *)((long)pfVar30 +
                                      lVar48 + (-(ulong)(uVar33 >> 0x1f) & 0xfffffff800000000 |
                                               (ulong)uVar33 << 3));
                    fVar91 = *pfVar8;
                    fVar97 = pfVar8[1];
                    fVar103 = fVar52 * fVar75 + fVar51 * fVar60;
                    fVar51 = -(fVar60 * fVar52) + fVar51 * fVar75;
                    fVar52 = fVar57 * fVar82 + fVar56 * fVar77;
                    fVar56 = -(fVar77 * fVar57) + fVar56 * fVar82;
                    fVar57 = fVar58 * fVar97 + fVar59 * fVar91;
                    fVar59 = -(fVar91 * fVar58) + fVar59 * fVar97;
                    fVar58 = fVar68 + fVar52;
                    fVar60 = fVar55 + fVar56;
                    fVar68 = fVar68 - fVar52;
                    fVar55 = fVar55 - fVar56;
                    fVar52 = fVar103 + fVar57;
                    fVar56 = fVar51 + fVar59;
                    fVar103 = fVar103 - fVar57;
                    fVar51 = fVar51 - fVar59;
                    *(float *)((long)pfVar45 + lVar48) = fVar58 + fVar52;
                    ((float *)((long)pfVar45 + lVar48))[1] = fVar60 + fVar56;
                    ((float *)((long)pfVar24 + lVar48))[-1] = fVar68 - fVar51;
                    *(float *)((long)pfVar24 + lVar48) = fVar55 + fVar103;
                    *(float *)((long)pfVar32 + lVar48) = fVar58 - fVar52;
                    ((float *)((long)pfVar32 + lVar48))[1] = fVar60 - fVar56;
                    *(float *)((long)pfVar31 + lVar48) = fVar68 + fVar51;
                    ((float *)((long)pfVar31 + lVar48))[1] = fVar55 - fVar103;
                    lVar48 = lVar48 + 8;
                    uVar37 = (int)uVar22 - 1;
                    uVar22 = (ulong)uVar37;
                  } while (uVar37 != 0);
                  pfVar30 = (float *)((long)pfVar30 + lVar48);
                }
                uVar20 = uVar20 + 1;
                pfVar45 = (float *)((long)pfVar45 + uVar44);
                pfVar24 = (float *)((long)pfVar24 + uVar44);
                pfVar31 = (float *)((long)pfVar31 + uVar44);
                pfVar32 = (float *)((long)pfVar32 + uVar44);
              } while (uVar20 != uVar29);
            }
            lVar23 = lVar23 + (long)(int)(uVar26 * 3) * 8;
            uVar26 = uVar29 + 3;
            if (-1 < (int)uVar29) {
              uVar26 = uVar29;
            }
            uVar29 = (int)uVar26 >> 2;
            bVar1 = 2 < iVar27;
            pfVar31 = pfVar19;
            uVar28 = uVar38;
            iVar27 = iVar27 + -1;
          } while (bVar1);
        }
        if ((int)uVar29 < 1) {
          return;
        }
        uVar26 = 0;
        iVar27 = (int)uVar38;
        uVar28 = -(ulong)(uVar33 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar33 << 3;
        lVar23 = lVar23 + 4;
        uVar20 = -(ulong)((uVar25 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                 (ulong)(uVar25 << 1) << 3;
        do {
          if (iVar27 != 0) {
            lVar35 = 0;
            uVar44 = uVar38;
            do {
              fVar51 = ((float *)(lVar23 + lVar35))[-1];
              fVar52 = *(float *)(lVar23 + lVar35);
              pfVar39 = (float *)(lVar23 + (long)iVar27 * 8 + lVar35);
              fVar56 = pfVar39[-1];
              fVar57 = *pfVar39;
              pfVar39 = (float *)(lVar23 + (long)(iVar27 << 1) * 8 + lVar35);
              fVar59 = pfVar39[-1];
              fVar58 = *pfVar39;
              fVar68 = *(float *)((long)pfVar19 + lVar35);
              fVar55 = ((float *)((long)pfVar19 + lVar35))[1];
              pfVar39 = (float *)((long)pfVar19 +
                                 lVar35 + (-(uVar34 >> 0x1f) & 0xfffffff800000000 | uVar34 << 3));
              fVar60 = *pfVar39;
              fVar75 = pfVar39[1];
              pfVar39 = (float *)((long)pfVar19 + lVar35 + uVar20);
              fVar77 = *pfVar39;
              fVar82 = pfVar39[1];
              pfVar39 = (float *)((long)pfVar19 + lVar35 + uVar28);
              fVar91 = *pfVar39;
              fVar97 = pfVar39[1];
              fVar103 = fVar52 * fVar75 + fVar51 * fVar60;
              fVar51 = -(fVar60 * fVar52) + fVar51 * fVar75;
              fVar52 = fVar57 * fVar82 + fVar56 * fVar77;
              fVar56 = -(fVar77 * fVar57) + fVar56 * fVar82;
              fVar57 = fVar58 * fVar97 + fVar59 * fVar91;
              fVar59 = -(fVar91 * fVar58) + fVar59 * fVar97;
              fVar58 = fVar68 + fVar52;
              fVar60 = fVar55 + fVar56;
              fVar68 = fVar68 - fVar52;
              fVar55 = fVar55 - fVar56;
              fVar52 = fVar103 + fVar57;
              fVar56 = fVar51 + fVar59;
              fVar103 = fVar103 - fVar57;
              fVar51 = fVar51 - fVar59;
              *(float *)((long)param_1 + lVar35) = fVar49 * (fVar58 + fVar52);
              ((float *)((long)param_1 + lVar35))[1] = fVar49 * (fVar60 + fVar56);
              pfVar39 = (float *)((long)param_1 + lVar35 + ((long)(int)uVar25 << 3 | 4U));
              pfVar39[-1] = fVar49 * (fVar68 - fVar51);
              *pfVar39 = fVar49 * (fVar55 + fVar103);
              pfVar39 = (float *)((long)param_1 + lVar35 + uVar20);
              *pfVar39 = fVar49 * (fVar58 - fVar52);
              pfVar39[1] = fVar49 * (fVar60 - fVar56);
              pfVar39 = (float *)((long)param_1 + lVar35 + uVar28);
              *pfVar39 = fVar49 * (fVar68 + fVar51);
              pfVar39[1] = fVar49 * (fVar55 - fVar103);
              lVar35 = lVar35 + 8;
              uVar33 = (int)uVar44 - 1;
              uVar44 = (ulong)uVar33;
            } while (uVar33 != 0);
            pfVar19 = (float *)((long)pfVar19 + lVar35);
            param_1 = (float *)((long)param_1 + lVar35);
          }
          uVar26 = uVar26 + 1;
        } while (uVar26 != uVar29);
        return;
      }
      *(ulong *)param_1 =
           CONCAT44(((float)((ulong)*(undefined8 *)param_2 >> 0x20) +
                    (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20)) * fVar49,
                    ((float)*(undefined8 *)param_2 + (float)*(undefined8 *)(param_2 + 2)) * fVar49);
      fVar51 = ((float)*(undefined8 *)param_2 - (float)*(undefined8 *)(param_2 + 2)) * fVar49;
      fVar49 = ((float)((ulong)*(undefined8 *)param_2 >> 0x20) -
               (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20)) * fVar49;
    }
    *(ulong *)(param_1 + 2) = CONCAT44(fVar49,fVar51);
    return;
  }
  lVar23 = *(long *)(param_3 + 4);
  if (param_4 == 0) {
    iVar27 = param_3[10];
  }
  else {
    iVar27 = param_3[0xb];
  }
  bVar6 = iVar27 != 0;
  bVar1 = param_4 != 0;
  uVar26 = *puVar17;
  uVar29 = puVar17[1];
  uVar38 = (ulong)uVar29;
  uVar33 = puVar17[(int)(uVar26 << 1)];
  uVar34 = (ulong)uVar33;
  uVar25 = uVar33 * uVar29;
  pfVar39 = *(float **)(param_3 + 6);
  if ((uVar26 & 1) != 0) {
    pfVar39 = param_1;
    param_1 = *(float **)(param_3 + 6);
  }
  if ((int)uVar33 < 4) {
    if (uVar33 == 2) {
      if (0 < (int)uVar29) {
        fVar49 = 1.0 / (float)(int)uVar25;
        iVar27 = uVar29 + 1;
        param_2 = param_2 + 1;
        pfVar19 = param_2 + (long)((int)uVar25 / 2) * 2;
        pfVar31 = pfVar39;
        do {
          pfVar32 = param_2 + -1;
          pfVar24 = pfVar19 + -1;
          fVar52 = *pfVar19;
          fVar51 = *param_2;
          if (bVar1) {
            fVar52 = -*pfVar19;
            fVar51 = -*param_2;
          }
          pfVar19 = pfVar19 + 2;
          param_2 = param_2 + 2;
          fVar68 = *pfVar24;
          fVar56 = *pfVar32;
          if (bVar6) {
            fVar52 = fVar52 * fVar49;
            fVar68 = *pfVar24 * fVar49;
            fVar51 = fVar51 * fVar49;
            fVar56 = *pfVar32 * fVar49;
          }
          fVar55 = fVar51 - fVar52;
          fVar57 = fVar51 + fVar52;
          if (bVar1) {
            fVar55 = -(fVar51 - fVar52);
            fVar57 = -(fVar51 + fVar52);
          }
          *pfVar31 = fVar56 + fVar68;
          pfVar31[1] = fVar57;
          pfVar31[2] = fVar56 - fVar68;
          pfVar31[3] = fVar55;
          iVar27 = iVar27 + -1;
          pfVar31 = pfVar31 + 4;
        } while (1 < iVar27);
      }
      goto LAB_10987cc54;
    }
    if (uVar33 == 3) {
      if (0 < (int)uVar29) {
        fVar49 = 1.0 / (float)(int)uVar25;
        iVar27 = uVar29 + 1;
        param_2 = param_2 + 1;
        pfVar19 = param_2 + (long)(((int)uVar25 / 3) * 2) * 2;
        pfVar31 = param_2 + (long)((int)uVar25 / 3) * 2;
        pfVar32 = pfVar39;
        do {
          pfVar24 = param_2 + -1;
          pfVar30 = pfVar19 + -1;
          fVar68 = *pfVar19;
          fVar51 = *pfVar31;
          fVar52 = *param_2;
          if (bVar1) {
            fVar68 = -*pfVar19;
            fVar51 = -*pfVar31;
            fVar52 = -*param_2;
          }
          param_2 = param_2 + 2;
          pfVar19 = pfVar19 + 2;
          fVar56 = *pfVar30;
          fVar55 = pfVar31[-1];
          fVar57 = *pfVar24;
          if (bVar6) {
            fVar68 = fVar68 * fVar49;
            fVar56 = *pfVar30 * fVar49;
            fVar51 = fVar51 * fVar49;
            fVar55 = pfVar31[-1] * fVar49;
            fVar52 = fVar52 * fVar49;
            fVar57 = *pfVar24 * fVar49;
          }
          fVar59 = fVar57 - (fVar55 + fVar56) * 0.5;
          fVar103 = fVar52 - (fVar51 + fVar68) * 0.5;
          fVar58 = (fVar55 - fVar56) * -0.8660254;
          fVar60 = (fVar51 - fVar68) * -0.8660254;
          fVar52 = fVar52 + fVar51 + fVar68;
          fVar51 = fVar103 - fVar58;
          fVar58 = fVar58 + fVar103;
          pfVar31 = pfVar31 + 2;
          if (bVar1) {
            fVar58 = -fVar58;
            fVar52 = -fVar52;
          }
          *pfVar32 = fVar57 + fVar55 + fVar56;
          pfVar32[1] = fVar52;
          if (bVar1) {
            fVar51 = -fVar51;
          }
          pfVar32[2] = fVar59 - fVar60;
          pfVar32[3] = fVar58;
          pfVar32[4] = fVar60 + fVar59;
          pfVar32[5] = fVar51;
          iVar27 = iVar27 + -1;
          pfVar32 = pfVar32 + 6;
        } while (1 < iVar27);
      }
      goto LAB_10987cc54;
    }
    goto LAB_10987c8a4;
  }
  if (uVar33 == 4) {
    if (0 < (int)uVar29) {
      uVar37 = uVar25 + 3;
      if (-1 < (int)uVar25) {
        uVar37 = uVar25;
      }
      uVar37 = (int)uVar37 >> 2;
      fVar49 = 1.0 / (float)(int)uVar25;
      iVar27 = uVar29 + 1;
      param_2 = param_2 + 1;
      pfVar19 = param_2 + (long)(int)(uVar37 * 3) * 2;
      pfVar31 = param_2 + (long)(int)(uVar37 * 2) * 2;
      pfVar32 = pfVar39;
      do {
        pfVar24 = param_2 + -1;
        fVar68 = *param_2;
        pfVar30 = (float *)((long)param_2 +
                           (-(ulong)(uVar37 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar37 << 3));
        fVar56 = pfVar30[-1];
        fVar52 = *pfVar30;
        pfVar30 = pfVar31 + -1;
        fVar51 = *pfVar31;
        pfVar45 = pfVar19 + -1;
        fVar55 = *pfVar19;
        param_2 = param_2 + 2;
        pfVar19 = pfVar19 + 2;
        pfVar31 = pfVar31 + 2;
        if (bVar1) {
          fVar55 = -fVar55;
          fVar51 = -fVar51;
          fVar52 = -fVar52;
          fVar68 = -fVar68;
        }
        fVar57 = *pfVar45;
        fVar103 = *pfVar30;
        fVar59 = *pfVar24;
        if (bVar6) {
          fVar55 = fVar55 * fVar49;
          fVar57 = *pfVar45 * fVar49;
          fVar51 = fVar51 * fVar49;
          fVar103 = *pfVar30 * fVar49;
          fVar52 = fVar52 * fVar49;
          fVar56 = fVar56 * fVar49;
          fVar68 = fVar68 * fVar49;
          fVar59 = *pfVar24 * fVar49;
        }
        fVar75 = (fVar68 + fVar51) - (fVar52 + fVar55);
        fVar60 = fVar68 + fVar51 + fVar52 + fVar55;
        fVar58 = (fVar68 - fVar51) - (fVar56 - fVar57);
        fVar51 = (fVar68 - fVar51) + (fVar56 - fVar57);
        if (bVar1) {
          fVar60 = -fVar60;
        }
        *pfVar32 = fVar59 + fVar103 + fVar56 + fVar57;
        pfVar32[1] = fVar60;
        if (bVar1) {
          fVar75 = -fVar75;
          fVar58 = -fVar58;
        }
        pfVar32[2] = (fVar59 - fVar103) + (fVar52 - fVar55);
        pfVar32[3] = fVar58;
        if (bVar1) {
          fVar51 = -fVar51;
        }
        pfVar32[4] = (fVar59 + fVar103) - (fVar56 + fVar57);
        pfVar32[5] = fVar75;
        pfVar32[6] = (fVar59 - fVar103) - (fVar52 - fVar55);
        pfVar32[7] = fVar51;
        iVar27 = iVar27 + -1;
        pfVar32 = pfVar32 + 8;
      } while (1 < iVar27);
    }
    goto LAB_10987cc54;
  }
  if (uVar33 == 5) {
    FUN_10987d1e4(pfVar39,param_2,0,uVar38,1,uVar25,1,bVar1,bVar6);
    goto LAB_10987cc54;
  }
  if (uVar33 == 8) {
    if (0 < (int)uVar29) {
      uVar37 = uVar25 + 7;
      if (-1 < (int)uVar25) {
        uVar37 = uVar25;
      }
      uVar42 = (int)uVar37 >> 3;
      fVar49 = 1.0 / (float)(int)uVar25;
      iVar27 = uVar29 + 1;
      pfVar31 = pfVar39;
      pfVar19 = param_2;
      do {
        pfVar32 = (float *)((long)pfVar19 +
                           (-(ulong)((uVar42 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                           (ulong)(uVar42 * 2) << 3));
        pfVar24 = (float *)((long)pfVar19 +
                           (-(ulong)((uVar42 & 0x3fffffff) >> 0x1d) & 0xfffffff800000000 |
                           (ulong)(uVar42 * 4) << 3));
        pfVar30 = (float *)((long)pfVar19 +
                           (-(ulong)((uVar42 * 3 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                           (ulong)(uVar42 * 6) << 3));
        fVar82 = *pfVar32;
        fVar57 = pfVar32[1];
        fVar51 = (float)((ulong)*(undefined8 *)
                                 (pfVar19 + ((long)((ulong)uVar37 << 0x20) >> 0x23) * 2) >> 0x20);
        fVar52 = (float)((ulong)*(undefined8 *)(pfVar19 + (long)(int)(uVar42 * 3) * 2) >> 0x20);
        fVar77 = *pfVar24;
        fVar56 = pfVar24[1];
        fVar91 = (float)((ulong)*(undefined8 *)(pfVar19 + (long)(int)(uVar42 * 5) * 2) >> 0x20);
        fVar97 = (float)((ulong)*(undefined8 *)
                                 (pfVar19 + (long)(int)((uVar37 & 0xfffffff8) - uVar42) * 2) >> 0x20
                        );
        fVar75 = *pfVar30;
        fVar68 = pfVar30[1];
        fVar59 = (float)*(undefined8 *)(pfVar19 + (long)(int)((uVar37 & 0xfffffff8) - uVar42) * 2);
        fVar103 = (float)*(undefined8 *)(pfVar19 + (long)(int)(uVar42 * 5) * 2);
        fVar60 = (float)*(undefined8 *)(pfVar19 + (long)(int)(uVar42 * 3) * 2);
        fVar58 = (float)*(undefined8 *)(pfVar19 + ((long)((ulong)uVar37 << 0x20) >> 0x23) * 2);
        fVar55 = pfVar19[1];
        if (bVar1) {
          fVar91 = -fVar91;
          fVar97 = -fVar97;
          fVar51 = -fVar51;
          fVar52 = -fVar52;
          fVar68 = -fVar68;
          fVar56 = -fVar56;
          fVar55 = -pfVar19[1];
          fVar57 = -fVar57;
        }
        fVar113 = *pfVar19;
        if (bVar6) {
          fVar91 = fVar91 * fVar49;
          fVar97 = fVar97 * fVar49;
          fVar51 = fVar51 * fVar49;
          fVar52 = fVar52 * fVar49;
          fVar103 = fVar103 * fVar49;
          fVar59 = fVar59 * fVar49;
          fVar58 = fVar58 * fVar49;
          fVar60 = fVar60 * fVar49;
          fVar68 = fVar68 * fVar49;
          fVar75 = fVar75 * fVar49;
          fVar56 = fVar56 * fVar49;
          fVar57 = fVar57 * fVar49;
          fVar77 = fVar77 * fVar49;
          fVar113 = *pfVar19 * fVar49;
          fVar55 = fVar55 * fVar49;
          fVar82 = fVar82 * fVar49;
        }
        fVar126 = (fVar113 - fVar77) * 0.0 + (fVar55 - fVar56);
        fVar118 = (fVar58 - fVar103) * 0.70711;
        fVar76 = (fVar60 - fVar59) * -0.70711;
        fVar109 = (fVar51 - fVar91) * 0.70711;
        fVar120 = (fVar52 - fVar97) * -0.70711;
        fVar127 = fVar118 + fVar109;
        fVar119 = fVar76 + fVar120;
        fVar76 = fVar76 - fVar120;
        fVar109 = fVar109 - fVar118;
        fVar120 = (fVar113 - fVar77) - (fVar55 - fVar56) * 0.0;
        fVar93 = fVar113 + fVar77 + fVar82 + fVar75;
        fVar118 = fVar55 + fVar56 + fVar57 + fVar68;
        fVar113 = (fVar113 + fVar77) - (fVar82 + fVar75);
        fVar56 = (fVar55 + fVar56) - (fVar57 + fVar68);
        fVar55 = (fVar82 - fVar75) * 0.0 + (fVar57 - fVar68);
        fVar68 = (fVar57 - fVar68) * 0.0 - (fVar82 - fVar75);
        fVar75 = fVar51 + fVar91 + fVar52 + fVar97;
        fVar77 = fVar58 + fVar103 + fVar60 + fVar59;
        fVar51 = (fVar51 + fVar91) - (fVar52 + fVar97);
        fVar103 = (fVar58 + fVar103) - (fVar60 + fVar59);
        fVar60 = fVar120 + fVar55;
        fVar52 = fVar126 + fVar68;
        fVar120 = fVar120 - fVar55;
        fVar126 = fVar126 - fVar68;
        fVar59 = fVar127 + fVar76;
        fVar82 = fVar109 - fVar119;
        fVar109 = fVar109 + fVar119;
        fVar91 = fVar113 - fVar56 * 0.0;
        fVar56 = fVar113 * 0.0 + fVar56;
        fVar127 = fVar127 - fVar76;
        fVar58 = fVar103 * 0.0 + fVar51;
        fVar103 = fVar51 * 0.0 - fVar103;
        fVar51 = fVar126 + fVar120 * 0.0;
        fVar97 = fVar82 * 0.0 - fVar127;
        fVar57 = fVar118 + fVar75;
        fVar118 = fVar118 - fVar75;
        fVar68 = fVar56 + fVar103;
        fVar120 = fVar120 - fVar126 * 0.0;
        fVar56 = fVar56 - fVar103;
        fVar55 = fVar52 + fVar109;
        fVar52 = fVar52 - fVar109;
        fVar82 = fVar82 + fVar127 * 0.0;
        fVar103 = fVar51 + fVar97;
        if (bVar1) {
          fVar118 = -fVar118;
        }
        pfVar31[8] = fVar93 - fVar77;
        pfVar31[9] = fVar118;
        fVar51 = fVar51 - fVar97;
        if (bVar1) {
          fVar103 = -fVar103;
          fVar51 = -fVar51;
        }
        pfVar31[6] = fVar120 + fVar82;
        pfVar31[7] = fVar103;
        if (bVar1) {
          fVar57 = -fVar57;
          fVar52 = -fVar52;
          fVar56 = -fVar56;
        }
        *pfVar31 = fVar93 + fVar77;
        pfVar31[1] = fVar57;
        if (bVar1) {
          fVar55 = -fVar55;
        }
        pfVar31[10] = fVar60 - fVar59;
        pfVar31[0xb] = fVar52;
        pfVar31[2] = fVar60 + fVar59;
        pfVar31[3] = fVar55;
        pfVar31[0xc] = fVar91 - fVar58;
        pfVar31[0xd] = fVar56;
        if (bVar1) {
          fVar68 = -fVar68;
        }
        pfVar31[4] = fVar91 + fVar58;
        pfVar31[5] = fVar68;
        pfVar31[0xe] = fVar120 - fVar82;
        pfVar31[0xf] = fVar51;
        pfVar19 = pfVar19 + 2;
        pfVar31 = pfVar31 + 0x10;
        iVar27 = iVar27 + -1;
      } while (1 < iVar27);
      goto LAB_10987c8a4;
    }
    _malloc(0x40);
  }
  else {
LAB_10987c8a4:
    puVar9 = (undefined8 *)((long)(int)uVar33 << 3);
    _malloc();
    if (0 < (int)uVar29) {
      pfVar19 = pfVar39;
      uVar28 = uVar38;
      do {
        pfVar31 = (float *)((long)puVar9 + 4);
        pfVar32 = param_2;
        uVar20 = uVar34;
        if (0 < (int)uVar33) {
          do {
            uVar43 = *(undefined8 *)pfVar32;
            *(undefined8 *)(pfVar31 + -1) = uVar43;
            if (bVar1) {
              fVar49 = -(float)((ulong)uVar43 >> 0x20);
              *pfVar31 = fVar49;
              if (bVar6) {
                pfVar31[-1] = (1.0 / (float)(int)uVar25) * (float)uVar43;
                *pfVar31 = (1.0 / (float)(int)uVar25) * fVar49;
              }
            }
            pfVar32 = pfVar32 + uVar38 * 2;
            pfVar31 = pfVar31 + 2;
            uVar20 = uVar20 - 1;
          } while (uVar20 != 0);
          uVar20 = 0;
          uVar43 = *puVar9;
          fVar49 = (float)((ulong)uVar43 >> 0x20);
          do {
            pfVar31 = pfVar19 + uVar20 * 2;
            *(undefined8 *)pfVar31 = uVar43;
            fVar51 = fVar49;
            if (1 < (int)uVar33) {
              iVar27 = 0;
              lVar35 = uVar34 - 1;
              pfVar32 = (float *)((long)puVar9 + 0xc);
              fVar52 = (float)uVar43;
              do {
                iVar27 = iVar27 + (int)uVar20;
                uVar29 = 0;
                if ((int)uVar33 <= iVar27) {
                  uVar29 = uVar33;
                }
                iVar27 = iVar27 - uVar29;
                pfVar24 = (float *)(lVar23 + (long)iVar27 * 8);
                fVar68 = *pfVar24;
                fVar56 = pfVar24[1];
                fVar52 = fVar52 + (pfVar32[-1] * fVar68 - *pfVar32 * fVar56);
                fVar51 = fVar51 + fVar68 * *pfVar32 + pfVar32[-1] * fVar56;
                *pfVar31 = fVar52;
                pfVar31[1] = fVar51;
                pfVar32 = pfVar32 + 2;
                lVar35 = lVar35 + -1;
              } while (lVar35 != 0);
            }
            if (bVar1) {
              pfVar31[1] = -fVar51;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 != uVar34);
        }
        pfVar19 = pfVar19 + (long)(int)uVar33 * 2;
        param_2 = param_2 + 2;
        iVar27 = (int)uVar28;
        uVar29 = iVar27 - 1;
        uVar28 = (ulong)uVar29;
      } while (uVar29 != 0 && 0 < iVar27);
    }
  }
  _free();
LAB_10987cc54:
  if (1 < (int)uVar26) {
    uVar29 = uVar25 + 3;
    if (-1 < (int)uVar25) {
      uVar29 = uVar25;
    }
    uVar29 = (int)uVar29 >> 2;
    uVar37 = (int)uVar25 / 3;
    uVar20 = 1;
    pfVar19 = (float *)(lVar23 + (long)(int)(-(uVar33 & 1) & uVar33) * 8);
    uVar28 = (ulong)uVar26;
    do {
      pfVar31 = pfVar39;
      uVar33 = (int)uVar20 * (int)uVar34;
      uVar20 = (ulong)uVar33;
      uVar26 = puVar17[(int)(uVar28 - 1) << 1];
      uVar34 = (ulong)uVar26;
      uVar42 = 0;
      if (uVar26 != 0) {
        uVar42 = (int)uVar38 / (int)uVar26;
      }
      uVar38 = (ulong)uVar42;
      if ((int)uVar26 < 4) {
        if (uVar26 == 2) {
          if (0 < (int)uVar42) {
            pfVar32 = param_1;
            uVar44 = uVar38;
            pfVar39 = pfVar31;
            pfVar24 = pfVar19;
            do {
              pfVar30 = pfVar24;
              uVar42 = uVar33 + 1;
              if (0 < (int)uVar33) {
                do {
                  fVar52 = *pfVar39;
                  pfVar24 = (float *)((long)pfVar39 +
                                     (-(ulong)((uint)((int)uVar25 / 2) >> 0x1f) & 0xfffffff800000000
                                     | (ulong)(uint)((int)uVar25 / 2) << 3));
                  fVar68 = *pfVar24;
                  fVar51 = pfVar24[1];
                  fVar49 = pfVar39[1];
                  if (bVar1) {
                    fVar51 = -fVar51;
                    fVar49 = -pfVar39[1];
                  }
                  pfVar24 = pfVar30 + 2;
                  fVar56 = fVar68 * *pfVar30 - fVar51 * pfVar30[1];
                  fVar68 = fVar51 * *pfVar30 + fVar68 * pfVar30[1];
                  fVar51 = fVar49 + fVar68;
                  fVar49 = fVar49 - fVar68;
                  if (bVar1) {
                    fVar49 = -fVar49;
                    fVar51 = -fVar51;
                  }
                  *pfVar32 = fVar52 + fVar56;
                  pfVar32[1] = fVar51;
                  pfVar30 = (float *)((long)pfVar32 +
                                     (-(ulong)(uVar33 >> 0x1f) & 0xfffffff800000000 | uVar20 << 3));
                  *pfVar30 = fVar52 - fVar56;
                  pfVar30[1] = fVar49;
                  pfVar39 = pfVar39 + 2;
                  pfVar32 = pfVar32 + 2;
                  uVar42 = uVar42 - 1;
                  pfVar30 = pfVar24;
                } while (1 < uVar42);
              }
              pfVar24 = pfVar24 + (long)(int)uVar33 * -2;
              pfVar32 = pfVar32 + (long)(int)uVar33 * 2;
              iVar27 = (int)uVar44;
              uVar42 = iVar27 - 1;
              uVar44 = (ulong)uVar42;
            } while (uVar42 != 0 && 0 < iVar27);
          }
        }
        else if ((uVar26 == 3) && (0 < (int)uVar42)) {
          uVar22 = -(ulong)(uVar33 >> 0x1f) & 0xfffffff800000000 | uVar20 << 3;
          pfVar39 = param_1;
          uVar44 = uVar38;
          pfVar32 = pfVar31;
          pfVar24 = pfVar19;
          do {
            if (0 < (int)uVar33) {
              lVar23 = 0;
              uVar42 = uVar33 + 1;
              do {
                pfVar30 = (float *)((long)pfVar32 +
                                   lVar23 + (-(ulong)(uVar37 >> 0x1f) & 0xfffffff800000000 |
                                            (ulong)uVar37 << 3));
                fVar68 = *(float *)((long)pfVar32 + lVar23);
                fVar49 = ((float *)((long)pfVar32 + lVar23))[1];
                fVar56 = *pfVar30;
                fVar51 = pfVar30[1];
                pfVar30 = (float *)((long)pfVar32 +
                                   lVar23 + (-(ulong)((uVar37 & 0x7fffffff) >> 0x1e) &
                                             0xfffffff800000000 | (ulong)(uVar37 * 2) << 3));
                fVar55 = *pfVar30;
                fVar52 = pfVar30[1];
                if (bVar1) {
                  fVar52 = -fVar52;
                  fVar51 = -fVar51;
                }
                fVar57 = *(float *)((long)pfVar24 + lVar23);
                fVar103 = ((float *)((long)pfVar24 + lVar23))[1];
                pfVar30 = (float *)((long)pfVar24 + lVar23 + uVar22 + 4);
                fVar59 = pfVar30[-1];
                fVar58 = *pfVar30;
                if (bVar1) {
                  fVar49 = -fVar49;
                }
                fVar60 = fVar56 * fVar57 - fVar51 * fVar103;
                fVar56 = fVar51 * fVar57 + fVar56 * fVar103;
                fVar57 = fVar55 * fVar59 - fVar52 * fVar58;
                fVar103 = fVar52 * fVar59 + fVar55 * fVar58;
                fVar59 = fVar60 + fVar57;
                fVar58 = fVar56 + fVar103;
                fVar52 = fVar68 - fVar59 * 0.5;
                fVar51 = fVar49 - fVar58 * 0.5;
                fVar55 = (fVar60 - fVar57) * -0.8660254;
                fVar57 = (fVar56 - fVar103) * -0.8660254;
                fVar49 = fVar49 + fVar58;
                fVar56 = fVar51 - fVar55;
                fVar55 = fVar55 + fVar51;
                if (bVar1) {
                  fVar55 = -fVar55;
                  fVar49 = -fVar49;
                }
                *(float *)((long)pfVar39 + lVar23) = fVar68 + fVar59;
                ((float *)((long)pfVar39 + lVar23))[1] = fVar49;
                if (bVar1) {
                  fVar56 = -fVar56;
                }
                pfVar30 = (float *)((long)pfVar39 + lVar23 + uVar22);
                *pfVar30 = fVar52 - fVar57;
                pfVar30[1] = fVar55;
                pfVar30 = (float *)((long)pfVar39 +
                                   lVar23 + (-(ulong)((uVar33 & 0x7fffffff) >> 0x1e) &
                                             0xfffffff800000000 | (ulong)(uVar33 * 2) << 3));
                *pfVar30 = fVar57 + fVar52;
                pfVar30[1] = fVar56;
                lVar23 = lVar23 + 8;
                uVar42 = uVar42 - 1;
              } while (1 < uVar42);
              pfVar39 = (float *)((long)pfVar39 + lVar23);
              pfVar32 = (float *)((long)pfVar32 + lVar23);
              pfVar24 = (float *)((long)pfVar24 + lVar23);
            }
            pfVar24 = pfVar24 + (long)(int)uVar33 * -2;
            pfVar39 = pfVar39 + (long)(int)(uVar33 * 2) * 2;
            iVar27 = (int)uVar44;
            uVar42 = iVar27 - 1;
            uVar44 = (ulong)uVar42;
          } while (uVar42 != 0 && 0 < iVar27);
        }
      }
      else if (uVar26 == 4) {
        if (0 < (int)uVar42) {
          uVar42 = uVar33 * 3;
          uVar22 = -(ulong)(uVar33 >> 0x1f) & 0xfffffff800000000 | uVar20 << 3;
          uVar36 = -(ulong)((uVar33 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                   (ulong)(uVar33 * 2) << 3;
          pfVar39 = param_1;
          uVar44 = uVar38;
          pfVar32 = pfVar31;
          pfVar24 = pfVar19;
          do {
            if (0 < (int)uVar33) {
              lVar23 = 0;
              iVar27 = uVar33 + 1;
              do {
                uVar53 = *(undefined8 *)
                          ((long)pfVar32 +
                          lVar23 + (-(ulong)((uVar29 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                                   (ulong)(uVar29 * 2) << 3));
                uVar43 = *(undefined8 *)
                          ((long)pfVar32 +
                          lVar23 + (-(ulong)(uVar29 * 3 >> 0x1f) & 0xfffffff800000000 |
                                   (ulong)(uVar29 * 3) << 3));
                fVar56 = (float)uVar43;
                fVar55 = (float)((ulong)uVar43 >> 0x20);
                fVar52 = (float)((ulong)uVar53 >> 0x20);
                pfVar30 = (float *)((long)pfVar24 + lVar23);
                fVar68 = *(float *)((long)pfVar32 + lVar23);
                fVar49 = ((float *)((long)pfVar32 + lVar23))[1];
                pfVar45 = (float *)((long)pfVar32 +
                                   lVar23 + (-(ulong)(uVar29 >> 0x1f) & 0xfffffff800000000 |
                                            (ulong)uVar29 << 3));
                fVar57 = *pfVar45;
                fVar51 = pfVar45[1];
                fVar103 = -fVar52;
                fVar59 = -fVar55;
                puVar9 = (undefined8 *)((long)pfVar24 + lVar23 + uVar22);
                if (bVar1) {
                  fVar49 = -fVar49;
                }
                puVar2 = (undefined8 *)((long)pfVar24 + lVar23 + uVar36);
                uVar43 = *puVar9;
                fVar60 = (float)uVar43;
                uVar5 = *puVar2;
                fVar58 = (float)uVar53;
                if (bVar1) {
                  fVar51 = -fVar51;
                }
                uVar46 = CONCAT44(fVar59,fVar103) ^
                         (CONCAT44(fVar59,fVar103) ^ CONCAT44(fVar55,fVar52)) &
                         CONCAT44(-(uint)!bVar1,-(uint)!bVar1);
                fVar103 = (float)uVar46;
                fVar59 = (float)(uVar46 >> 0x20);
                fVar75 = fVar51 * *pfVar30 + fVar57 * pfVar30[1];
                fVar52 = (float)uVar5;
                fVar55 = fVar58 * fVar60 - *(float *)((long)puVar9 + 4) * fVar103;
                fVar103 = fVar103 * fVar60 + fVar58 * (float)((ulong)uVar43 >> 0x20);
                fVar58 = fVar59 * fVar52 + fVar56 * (float)((ulong)uVar5 >> 0x20);
                fVar60 = fVar68 + fVar55;
                fVar57 = fVar57 * *pfVar30 - fVar51 * pfVar30[1];
                fVar56 = fVar56 * fVar52 - fVar59 * *(float *)((long)puVar2 + 4);
                fVar68 = fVar68 - fVar55;
                fVar51 = fVar49 - fVar103;
                fVar55 = fVar57 + fVar56;
                fVar49 = fVar49 + fVar103;
                fVar52 = fVar75 + fVar58;
                fVar57 = fVar57 - fVar56;
                fVar75 = fVar75 - fVar58;
                fVar56 = fVar49 - fVar52;
                fVar49 = fVar49 + fVar52;
                fVar52 = fVar51 - fVar57;
                fVar51 = fVar51 + fVar57;
                if (bVar1) {
                  fVar49 = -fVar49;
                }
                *(float *)((long)pfVar39 + lVar23) = fVar60 + fVar55;
                ((float *)((long)pfVar39 + lVar23))[1] = fVar49;
                if (bVar1) {
                  fVar52 = -fVar52;
                }
                pfVar30 = (float *)((long)pfVar39 + lVar23 + uVar22);
                if (bVar1) {
                  fVar56 = -fVar56;
                }
                *pfVar30 = fVar68 + fVar75;
                pfVar30[1] = fVar52;
                if (bVar1) {
                  fVar51 = -fVar51;
                }
                pfVar30 = (float *)((long)pfVar39 + lVar23 + uVar36);
                *pfVar30 = fVar60 - fVar55;
                pfVar30[1] = fVar56;
                pfVar30 = (float *)((long)pfVar39 +
                                   lVar23 + (-(ulong)(uVar42 >> 0x1f) & 0xfffffff800000000 |
                                            (ulong)uVar42 << 3));
                *pfVar30 = fVar68 - fVar75;
                pfVar30[1] = fVar51;
                lVar23 = lVar23 + 8;
                iVar27 = iVar27 + -1;
              } while (1 < iVar27);
              pfVar39 = (float *)((long)pfVar39 + lVar23);
              pfVar32 = (float *)((long)pfVar32 + lVar23);
              pfVar24 = (float *)((long)pfVar24 + lVar23);
            }
            pfVar24 = pfVar24 + (long)(int)uVar33 * -2;
            pfVar39 = pfVar39 + (long)(int)uVar42 * 2;
            iVar27 = (int)uVar44;
            uVar4 = iVar27 - 1;
            uVar44 = (ulong)uVar4;
          } while (uVar4 != 0 && 0 < iVar27);
        }
      }
      else if (uVar26 == 5) {
        FUN_10987d1e4(param_1,pfVar31,pfVar19,uVar38,uVar20,uVar25,0,bVar1,0);
      }
      pfVar19 = pfVar19 + (long)(int)((uVar26 - 1) * uVar33) * 2;
      bVar6 = 2 < (long)uVar28;
      uVar28 = uVar28 - 1;
      pfVar39 = param_1;
      param_1 = pfVar31;
    } while (bVar6);
  }
  return;
}



/* Entry: 10987c3a8; end: 10987d1e3;  */

void FUN_10987c3a8(float *param_1,float *param_2,uint *param_3,long param_4,float *param_5,
                  undefined8 param_6,int param_7)

{
  float *pfVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint uVar12;
  float *pfVar13;
  ulong uVar14;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  float *pfVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  float *pfVar23;
  float *pfVar24;
  undefined8 uVar25;
  long lVar26;
  int iVar27;
  ulong uVar28;
  float fVar29;
  ulong uVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float *pfStack_90;
  
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar11 = (ulong)uVar5;
  uVar6 = param_3[(int)(uVar4 << 1)];
  uVar28 = (ulong)uVar6;
  uVar7 = uVar6 * uVar5;
  pfVar18 = param_5;
  if ((uVar4 & 1) != 0) {
    pfVar18 = param_1;
    param_1 = param_5;
  }
  iVar27 = (int)param_6;
  if ((int)uVar6 < 4) {
    if (uVar6 == 2) {
      if (0 < (int)uVar5) {
        fVar29 = 1.0 / (float)(int)uVar7;
        iVar17 = uVar5 + 1;
        param_2 = param_2 + 1;
        pfVar13 = param_2 + (long)((int)uVar7 / 2) * 2;
        pfVar15 = pfVar18;
        do {
          pfVar16 = param_2 + -1;
          pfVar24 = pfVar13 + -1;
          fVar32 = *pfVar13;
          fVar55 = *param_2;
          if (iVar27 != 0) {
            fVar32 = -*pfVar13;
            fVar55 = -*param_2;
          }
          pfVar13 = pfVar13 + 2;
          param_2 = param_2 + 2;
          fVar48 = *pfVar24;
          fVar36 = *pfVar16;
          if (param_7 != 0) {
            fVar32 = fVar32 * fVar29;
            fVar48 = *pfVar24 * fVar29;
            fVar55 = fVar55 * fVar29;
            fVar36 = *pfVar16 * fVar29;
          }
          fVar37 = fVar55 - fVar32;
          fVar57 = fVar55 + fVar32;
          if (iVar27 != 0) {
            fVar37 = -(fVar55 - fVar32);
            fVar57 = -(fVar55 + fVar32);
          }
          *pfVar15 = fVar36 + fVar48;
          pfVar15[1] = fVar57;
          pfVar15[2] = fVar36 - fVar48;
          pfVar15[3] = fVar37;
          iVar17 = iVar17 + -1;
          pfVar15 = pfVar15 + 4;
        } while (1 < iVar17);
      }
      goto LAB_10987cc54;
    }
    if (uVar6 == 3) {
      if (0 < (int)uVar5) {
        fVar29 = 1.0 / (float)(int)uVar7;
        iVar17 = uVar5 + 1;
        param_2 = param_2 + 1;
        pfVar13 = param_2 + (long)(((int)uVar7 / 3) * 2) * 2;
        pfVar15 = param_2 + (long)((int)uVar7 / 3) * 2;
        pfVar16 = pfVar18;
        do {
          pfVar24 = param_2 + -1;
          pfVar23 = pfVar13 + -1;
          fVar32 = *pfVar13;
          fVar55 = *pfVar15;
          fVar48 = *param_2;
          if (iVar27 != 0) {
            fVar32 = -*pfVar13;
            fVar55 = -*pfVar15;
            fVar48 = -*param_2;
          }
          param_2 = param_2 + 2;
          pfVar13 = pfVar13 + 2;
          fVar36 = *pfVar23;
          fVar57 = pfVar15[-1];
          fVar37 = *pfVar24;
          if (param_7 != 0) {
            fVar32 = fVar32 * fVar29;
            fVar36 = *pfVar23 * fVar29;
            fVar55 = fVar55 * fVar29;
            fVar57 = pfVar15[-1] * fVar29;
            fVar48 = fVar48 * fVar29;
            fVar37 = *pfVar24 * fVar29;
          }
          fVar47 = fVar37 - (fVar57 + fVar36) * 0.5;
          fVar45 = fVar48 - (fVar55 + fVar32) * 0.5;
          fVar41 = (fVar57 - fVar36) * -0.8660254;
          fVar35 = (fVar55 - fVar32) * -0.8660254;
          fVar48 = fVar48 + fVar55 + fVar32;
          fVar32 = fVar45 - fVar41;
          fVar41 = fVar41 + fVar45;
          pfVar15 = pfVar15 + 2;
          if (iVar27 != 0) {
            fVar41 = -fVar41;
            fVar48 = -fVar48;
          }
          *pfVar16 = fVar37 + fVar57 + fVar36;
          pfVar16[1] = fVar48;
          if (iVar27 != 0) {
            fVar32 = -fVar32;
          }
          pfVar16[2] = fVar47 - fVar35;
          pfVar16[3] = fVar41;
          pfVar16[4] = fVar35 + fVar47;
          pfVar16[5] = fVar32;
          iVar17 = iVar17 + -1;
          pfVar16 = pfVar16 + 6;
        } while (1 < iVar17);
      }
      goto LAB_10987cc54;
    }
    goto LAB_10987c8a4;
  }
  if (uVar6 == 4) {
    if (0 < (int)uVar5) {
      uVar3 = uVar7 + 3;
      if (-1 < (int)uVar7) {
        uVar3 = uVar7;
      }
      uVar3 = (int)uVar3 >> 2;
      fVar29 = 1.0 / (float)(int)uVar7;
      iVar17 = uVar5 + 1;
      param_2 = param_2 + 1;
      pfVar13 = param_2 + (long)(int)(uVar3 * 3) * 2;
      pfVar15 = param_2 + (long)(int)(uVar3 * 2) * 2;
      pfVar16 = pfVar18;
      do {
        pfVar24 = param_2 + -1;
        fVar36 = *param_2;
        pfVar23 = (float *)((long)param_2 +
                           (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3));
        fVar57 = pfVar23[-1];
        fVar48 = *pfVar23;
        pfVar23 = pfVar15 + -1;
        fVar55 = *pfVar15;
        pfVar1 = pfVar13 + -1;
        fVar32 = *pfVar13;
        param_2 = param_2 + 2;
        pfVar13 = pfVar13 + 2;
        pfVar15 = pfVar15 + 2;
        if (iVar27 != 0) {
          fVar32 = -fVar32;
          fVar55 = -fVar55;
          fVar48 = -fVar48;
          fVar36 = -fVar36;
        }
        fVar37 = *pfVar1;
        fVar47 = *pfVar23;
        fVar45 = *pfVar24;
        if (param_7 != 0) {
          fVar32 = fVar32 * fVar29;
          fVar37 = *pfVar1 * fVar29;
          fVar55 = fVar55 * fVar29;
          fVar47 = *pfVar23 * fVar29;
          fVar48 = fVar48 * fVar29;
          fVar57 = fVar57 * fVar29;
          fVar36 = fVar36 * fVar29;
          fVar45 = *pfVar24 * fVar29;
        }
        fVar35 = (fVar36 + fVar55) - (fVar48 + fVar32);
        fVar39 = fVar36 + fVar55 + fVar48 + fVar32;
        fVar41 = (fVar36 - fVar55) - (fVar57 - fVar37);
        fVar55 = (fVar36 - fVar55) + (fVar57 - fVar37);
        bVar9 = iVar27 != 0;
        if (bVar9) {
          fVar39 = -fVar39;
        }
        *pfVar16 = fVar45 + fVar47 + fVar57 + fVar37;
        pfVar16[1] = fVar39;
        if (bVar9) {
          fVar35 = -fVar35;
          fVar41 = -fVar41;
        }
        pfVar16[2] = (fVar45 - fVar47) + (fVar48 - fVar32);
        pfVar16[3] = fVar41;
        if (bVar9) {
          fVar55 = -fVar55;
        }
        pfVar16[4] = (fVar45 + fVar47) - (fVar57 + fVar37);
        pfVar16[5] = fVar35;
        pfVar16[6] = (fVar45 - fVar47) - (fVar48 - fVar32);
        pfVar16[7] = fVar55;
        iVar17 = iVar17 + -1;
        pfVar16 = pfVar16 + 8;
      } while (1 < iVar17);
    }
    goto LAB_10987cc54;
  }
  if (uVar6 == 5) {
    FUN_10987d1e4(pfVar18,param_2,0,uVar11,1,uVar7,1,param_6,param_7);
    goto LAB_10987cc54;
  }
  if (uVar6 == 8) {
    if (0 < (int)uVar5) {
      uVar3 = uVar7 + 7;
      if (-1 < (int)uVar7) {
        uVar3 = uVar7;
      }
      uVar12 = (int)uVar3 >> 3;
      fVar29 = 1.0 / (float)(int)uVar7;
      iVar17 = uVar5 + 1;
      pfVar15 = pfVar18;
      pfVar13 = param_2;
      do {
        pfVar16 = (float *)((long)pfVar13 +
                           (-(ulong)((uVar12 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                           (ulong)(uVar12 * 2) << 3));
        pfVar24 = (float *)((long)pfVar13 +
                           (-(ulong)((uVar12 & 0x3fffffff) >> 0x1d) & 0xfffffff800000000 |
                           (ulong)(uVar12 * 4) << 3));
        pfVar23 = (float *)((long)pfVar13 +
                           (-(ulong)((uVar12 * 3 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                           (ulong)(uVar12 * 6) << 3));
        fVar34 = *pfVar16;
        fVar35 = pfVar16[1];
        fVar39 = *pfVar24;
        fVar41 = pfVar24[1];
        fVar45 = *pfVar23;
        fVar47 = pfVar23[1];
        fVar48 = (float)((ulong)*(undefined8 *)
                                 (pfVar13 + ((long)((ulong)uVar3 << 0x20) >> 0x23) * 2) >> 0x20);
        fVar36 = (float)((ulong)*(undefined8 *)(pfVar13 + (long)(int)(uVar12 * 3) * 2) >> 0x20);
        fVar50 = (float)((ulong)*(undefined8 *)(pfVar13 + (long)(int)(uVar12 * 5) * 2) >> 0x20);
        fVar56 = (float)((ulong)*(undefined8 *)
                                 (pfVar13 + (long)(int)((uVar3 & 0xfffffff8) - uVar12) * 2) >> 0x20)
        ;
        fVar57 = (float)*(undefined8 *)(pfVar13 + (long)(int)((uVar3 & 0xfffffff8) - uVar12) * 2);
        fVar55 = (float)*(undefined8 *)(pfVar13 + (long)(int)(uVar12 * 5) * 2);
        fVar37 = (float)*(undefined8 *)(pfVar13 + (long)(int)(uVar12 * 3) * 2);
        fVar32 = (float)*(undefined8 *)(pfVar13 + ((long)((ulong)uVar3 << 0x20) >> 0x23) * 2);
        fVar38 = pfVar13[1];
        if (iVar27 != 0) {
          fVar50 = -fVar50;
          fVar56 = -fVar56;
          fVar48 = -fVar48;
          fVar36 = -fVar36;
          fVar47 = -fVar47;
          fVar41 = -fVar41;
          fVar38 = -pfVar13[1];
          fVar35 = -fVar35;
        }
        fVar49 = *pfVar13;
        if (param_7 != 0) {
          fVar50 = fVar50 * fVar29;
          fVar56 = fVar56 * fVar29;
          fVar48 = fVar48 * fVar29;
          fVar36 = fVar36 * fVar29;
          fVar55 = fVar55 * fVar29;
          fVar57 = fVar57 * fVar29;
          fVar32 = fVar32 * fVar29;
          fVar37 = fVar37 * fVar29;
          fVar47 = fVar47 * fVar29;
          fVar45 = fVar45 * fVar29;
          fVar41 = fVar41 * fVar29;
          fVar35 = fVar35 * fVar29;
          fVar39 = fVar39 * fVar29;
          fVar49 = *pfVar13 * fVar29;
          fVar38 = fVar38 * fVar29;
          fVar34 = fVar34 * fVar29;
        }
        fVar31 = (fVar49 - fVar39) * 0.0 + (fVar38 - fVar41);
        fVar42 = (fVar32 - fVar55) * 0.70711;
        fVar43 = (fVar37 - fVar57) * -0.70711;
        fVar51 = (fVar48 - fVar50) * 0.70711;
        fVar52 = (fVar36 - fVar56) * -0.70711;
        fVar53 = fVar42 + fVar51;
        fVar54 = fVar43 + fVar52;
        fVar43 = fVar43 - fVar52;
        fVar51 = fVar51 - fVar42;
        fVar52 = (fVar49 - fVar39) - (fVar38 - fVar41) * 0.0;
        fVar46 = fVar49 + fVar39 + fVar34 + fVar45;
        fVar42 = fVar38 + fVar41 + fVar35 + fVar47;
        fVar49 = (fVar49 + fVar39) - (fVar34 + fVar45);
        fVar41 = (fVar38 + fVar41) - (fVar35 + fVar47);
        fVar39 = (fVar34 - fVar45) * 0.0 + (fVar35 - fVar47);
        fVar47 = (fVar35 - fVar47) * 0.0 - (fVar34 - fVar45);
        fVar35 = fVar48 + fVar50 + fVar36 + fVar56;
        fVar38 = fVar32 + fVar55 + fVar37 + fVar57;
        fVar36 = (fVar48 + fVar50) - (fVar36 + fVar56);
        fVar37 = (fVar32 + fVar55) - (fVar37 + fVar57);
        fVar34 = fVar52 + fVar39;
        fVar48 = fVar31 + fVar47;
        fVar52 = fVar52 - fVar39;
        fVar31 = fVar31 - fVar47;
        fVar47 = fVar53 + fVar43;
        fVar39 = fVar51 - fVar54;
        fVar51 = fVar51 + fVar54;
        fVar50 = fVar49 - fVar41 * 0.0;
        fVar41 = fVar49 * 0.0 + fVar41;
        fVar53 = fVar53 - fVar43;
        fVar45 = fVar37 * 0.0 + fVar36;
        fVar37 = fVar36 * 0.0 - fVar37;
        fVar55 = fVar31 + fVar52 * 0.0;
        fVar56 = fVar39 * 0.0 - fVar53;
        fVar57 = fVar42 + fVar35;
        fVar42 = fVar42 - fVar35;
        fVar32 = fVar41 + fVar37;
        fVar52 = fVar52 - fVar31 * 0.0;
        fVar41 = fVar41 - fVar37;
        fVar37 = fVar48 + fVar51;
        fVar48 = fVar48 - fVar51;
        fVar39 = fVar39 + fVar53 * 0.0;
        fVar36 = fVar55 + fVar56;
        bVar9 = iVar27 != 0;
        if (bVar9) {
          fVar42 = -fVar42;
        }
        pfVar15[8] = fVar46 - fVar38;
        pfVar15[9] = fVar42;
        fVar55 = fVar55 - fVar56;
        if (bVar9) {
          fVar36 = -fVar36;
          fVar55 = -fVar55;
        }
        pfVar15[6] = fVar52 + fVar39;
        pfVar15[7] = fVar36;
        if (bVar9) {
          fVar48 = -fVar48;
          fVar41 = -fVar41;
        }
        bVar9 = iVar27 != 0;
        if (bVar9) {
          fVar57 = -fVar57;
        }
        *pfVar15 = fVar46 + fVar38;
        pfVar15[1] = fVar57;
        if (bVar9) {
          fVar37 = -fVar37;
        }
        pfVar15[10] = fVar34 - fVar47;
        pfVar15[0xb] = fVar48;
        pfVar15[2] = fVar34 + fVar47;
        pfVar15[3] = fVar37;
        pfVar15[0xc] = fVar50 - fVar45;
        pfVar15[0xd] = fVar41;
        if (bVar9) {
          fVar32 = -fVar32;
        }
        pfVar15[4] = fVar50 + fVar45;
        pfVar15[5] = fVar32;
        pfVar15[0xe] = fVar52 - fVar39;
        pfVar15[0xf] = fVar55;
        pfVar13 = pfVar13 + 2;
        pfVar15 = pfVar15 + 0x10;
        iVar17 = iVar17 + -1;
      } while (1 < iVar17);
      goto LAB_10987c8a4;
    }
    _malloc(0x40);
  }
  else {
LAB_10987c8a4:
    puVar10 = (undefined8 *)((long)(int)uVar6 << 3);
    _malloc();
    if (0 < (int)uVar5) {
      pfVar13 = pfVar18;
      uVar19 = uVar11;
      do {
        pfVar15 = (float *)((long)puVar10 + 4);
        pfVar16 = param_2;
        uVar22 = uVar28;
        if (0 < (int)uVar6) {
          do {
            uVar25 = *(undefined8 *)pfVar16;
            *(undefined8 *)(pfVar15 + -1) = uVar25;
            if (iVar27 != 0) {
              fVar29 = -(float)((ulong)uVar25 >> 0x20);
              *pfVar15 = fVar29;
              if (param_7 != 0) {
                pfVar15[-1] = (1.0 / (float)(int)uVar7) * (float)uVar25;
                *pfVar15 = (1.0 / (float)(int)uVar7) * fVar29;
              }
            }
            pfVar16 = pfVar16 + uVar11 * 2;
            pfVar15 = pfVar15 + 2;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
          uVar22 = 0;
          uVar25 = *puVar10;
          fVar29 = (float)((ulong)uVar25 >> 0x20);
          do {
            pfVar15 = pfVar13 + uVar22 * 2;
            *(undefined8 *)pfVar15 = uVar25;
            fVar32 = fVar29;
            if (1 < (int)uVar6) {
              iVar17 = 0;
              lVar26 = uVar28 - 1;
              pfVar16 = (float *)((long)puVar10 + 0xc);
              fVar55 = (float)uVar25;
              do {
                iVar17 = iVar17 + (int)uVar22;
                uVar5 = 0;
                if ((int)uVar6 <= iVar17) {
                  uVar5 = uVar6;
                }
                iVar17 = iVar17 - uVar5;
                pfVar24 = (float *)(param_4 + (long)iVar17 * 8);
                fVar48 = *pfVar24;
                fVar36 = pfVar24[1];
                fVar55 = fVar55 + (pfVar16[-1] * fVar48 - *pfVar16 * fVar36);
                fVar32 = fVar32 + fVar48 * *pfVar16 + pfVar16[-1] * fVar36;
                *pfVar15 = fVar55;
                pfVar15[1] = fVar32;
                pfVar16 = pfVar16 + 2;
                lVar26 = lVar26 + -1;
              } while (lVar26 != 0);
            }
            if (iVar27 != 0) {
              pfVar15[1] = -fVar32;
            }
            uVar22 = uVar22 + 1;
          } while (uVar22 != uVar28);
        }
        pfVar13 = pfVar13 + (long)(int)uVar6 * 2;
        param_2 = param_2 + 2;
        iVar17 = (int)uVar19;
        uVar5 = iVar17 - 1;
        uVar19 = (ulong)uVar5;
      } while (uVar5 != 0 && 0 < iVar17);
    }
  }
  _free();
LAB_10987cc54:
  if (1 < (int)uVar4) {
    uVar5 = uVar7 + 3;
    if (-1 < (int)uVar7) {
      uVar5 = uVar7;
    }
    uVar5 = (int)uVar5 >> 2;
    uVar3 = (int)uVar7 / 3;
    uVar22 = 1;
    pfVar13 = (float *)(param_4 + (long)(int)(-(uVar6 & 1) & uVar6) * 8);
    uVar19 = (ulong)uVar4;
    pfStack_90 = param_1;
    do {
      pfVar15 = pfVar18;
      uVar6 = (int)uVar22 * (int)uVar28;
      uVar22 = (ulong)uVar6;
      uVar4 = param_3[(int)(uVar19 - 1) << 1];
      uVar28 = (ulong)uVar4;
      uVar12 = 0;
      if (uVar4 != 0) {
        uVar12 = (int)uVar11 / (int)uVar4;
      }
      uVar11 = (ulong)uVar12;
      if ((int)uVar4 < 4) {
        if (uVar4 == 2) {
          if (0 < (int)uVar12) {
            pfVar16 = pfStack_90;
            uVar20 = uVar11;
            pfVar18 = pfVar15;
            pfVar24 = pfVar13;
            do {
              pfVar23 = pfVar24;
              uVar12 = uVar6 + 1;
              if (0 < (int)uVar6) {
                do {
                  fVar55 = *pfVar18;
                  pfVar24 = (float *)((long)pfVar18 +
                                     (-(ulong)((uint)((int)uVar7 / 2) >> 0x1f) & 0xfffffff800000000
                                     | (ulong)(uint)((int)uVar7 / 2) << 3));
                  fVar48 = *pfVar24;
                  fVar32 = pfVar24[1];
                  fVar29 = pfVar18[1];
                  if (iVar27 != 0) {
                    fVar32 = -fVar32;
                    fVar29 = -pfVar18[1];
                  }
                  pfVar24 = pfVar23 + 2;
                  fVar36 = fVar48 * *pfVar23 - fVar32 * pfVar23[1];
                  fVar48 = fVar32 * *pfVar23 + fVar48 * pfVar23[1];
                  fVar32 = fVar29 + fVar48;
                  fVar29 = fVar29 - fVar48;
                  if (iVar27 != 0) {
                    fVar29 = -fVar29;
                    fVar32 = -fVar32;
                  }
                  *pfVar16 = fVar55 + fVar36;
                  pfVar16[1] = fVar32;
                  pfVar23 = (float *)((long)pfVar16 +
                                     (-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar22 << 3));
                  *pfVar23 = fVar55 - fVar36;
                  pfVar23[1] = fVar29;
                  pfVar18 = pfVar18 + 2;
                  pfVar16 = pfVar16 + 2;
                  uVar12 = uVar12 - 1;
                  pfVar23 = pfVar24;
                } while (1 < uVar12);
              }
              pfVar24 = pfVar24 + (long)(int)uVar6 * -2;
              pfVar16 = pfVar16 + (long)(int)uVar6 * 2;
              iVar17 = (int)uVar20;
              uVar12 = iVar17 - 1;
              uVar20 = (ulong)uVar12;
            } while (uVar12 != 0 && 0 < iVar17);
          }
        }
        else if ((uVar4 == 3) && (0 < (int)uVar12)) {
          uVar14 = -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar22 << 3;
          pfVar18 = pfStack_90;
          uVar20 = uVar11;
          pfVar16 = pfVar15;
          pfVar24 = pfVar13;
          do {
            if (0 < (int)uVar6) {
              lVar26 = 0;
              uVar12 = uVar6 + 1;
              do {
                pfVar23 = (float *)((long)pfVar16 +
                                   lVar26 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 |
                                            (ulong)uVar3 << 3));
                fVar48 = *(float *)((long)pfVar16 + lVar26);
                fVar32 = ((float *)((long)pfVar16 + lVar26))[1];
                fVar36 = *pfVar23;
                fVar29 = pfVar23[1];
                pfVar23 = (float *)((long)pfVar16 +
                                   lVar26 + (-(ulong)((uVar3 & 0x7fffffff) >> 0x1e) &
                                             0xfffffff800000000 | (ulong)(uVar3 * 2) << 3));
                fVar57 = *pfVar23;
                fVar55 = pfVar23[1];
                bVar9 = iVar27 != 0;
                if (bVar9) {
                  fVar55 = -fVar55;
                  fVar29 = -fVar29;
                }
                fVar37 = *(float *)((long)pfVar24 + lVar26);
                fVar47 = ((float *)((long)pfVar24 + lVar26))[1];
                pfVar23 = (float *)((long)pfVar24 + lVar26 + uVar14 + 4);
                fVar45 = pfVar23[-1];
                fVar41 = *pfVar23;
                if (bVar9) {
                  fVar32 = -fVar32;
                }
                fVar35 = fVar36 * fVar37 - fVar29 * fVar47;
                fVar37 = fVar29 * fVar37 + fVar36 * fVar47;
                fVar36 = fVar57 * fVar45 - fVar55 * fVar41;
                fVar57 = fVar55 * fVar45 + fVar57 * fVar41;
                fVar47 = fVar35 + fVar36;
                fVar45 = fVar37 + fVar57;
                fVar29 = fVar48 - fVar47 * 0.5;
                fVar55 = fVar32 - fVar45 * 0.5;
                fVar36 = (fVar35 - fVar36) * -0.8660254;
                fVar37 = (fVar37 - fVar57) * -0.8660254;
                fVar32 = fVar32 + fVar45;
                fVar57 = fVar55 - fVar36;
                fVar36 = fVar36 + fVar55;
                if (bVar9) {
                  fVar36 = -fVar36;
                  fVar32 = -fVar32;
                }
                *(float *)((long)pfVar18 + lVar26) = fVar48 + fVar47;
                ((float *)((long)pfVar18 + lVar26))[1] = fVar32;
                if (bVar9) {
                  fVar57 = -fVar57;
                }
                pfVar23 = (float *)((long)pfVar18 + lVar26 + uVar14);
                *pfVar23 = fVar29 - fVar37;
                pfVar23[1] = fVar36;
                pfVar23 = (float *)((long)pfVar18 +
                                   lVar26 + (-(ulong)((uVar6 & 0x7fffffff) >> 0x1e) &
                                             0xfffffff800000000 | (ulong)(uVar6 * 2) << 3));
                *pfVar23 = fVar37 + fVar29;
                pfVar23[1] = fVar57;
                lVar26 = lVar26 + 8;
                uVar12 = uVar12 - 1;
              } while (1 < uVar12);
              pfVar18 = (float *)((long)pfVar18 + lVar26);
              pfVar16 = (float *)((long)pfVar16 + lVar26);
              pfVar24 = (float *)((long)pfVar24 + lVar26);
            }
            pfVar24 = pfVar24 + (long)(int)uVar6 * -2;
            pfVar18 = pfVar18 + (long)(int)(uVar6 * 2) * 2;
            iVar17 = (int)uVar20;
            uVar12 = iVar17 - 1;
            uVar20 = (ulong)uVar12;
          } while (uVar12 != 0 && 0 < iVar17);
        }
      }
      else if (uVar4 == 4) {
        if (0 < (int)uVar12) {
          uVar12 = uVar6 * 3;
          uVar14 = -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar22 << 3;
          uVar21 = -(ulong)((uVar6 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                   (ulong)(uVar6 * 2) << 3;
          pfVar18 = pfStack_90;
          uVar20 = uVar11;
          pfVar16 = pfVar15;
          pfVar24 = pfVar13;
          do {
            if (0 < (int)uVar6) {
              lVar26 = 0;
              iVar17 = uVar6 + 1;
              do {
                uVar25 = *(undefined8 *)
                          ((long)pfVar16 +
                          lVar26 + (-(ulong)((uVar5 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                                   (ulong)(uVar5 * 2) << 3));
                uVar33 = *(undefined8 *)
                          ((long)pfVar16 +
                          lVar26 + (-(ulong)(uVar5 * 3 >> 0x1f) & 0xfffffff800000000 |
                                   (ulong)(uVar5 * 3) << 3));
                fVar55 = (float)((ulong)uVar25 >> 0x20);
                fVar48 = (float)((ulong)uVar33 >> 0x20);
                fVar36 = *(float *)((long)pfVar16 + lVar26);
                fVar29 = ((float *)((long)pfVar16 + lVar26))[1];
                pfVar23 = (float *)((long)pfVar16 +
                                   lVar26 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 |
                                            (ulong)uVar5 << 3));
                fVar57 = *pfVar23;
                fVar32 = pfVar23[1];
                uVar30 = CONCAT44(-fVar48,-fVar55);
                puVar10 = (undefined8 *)((long)pfVar24 + lVar26 + uVar14);
                if (iVar27 != 0) {
                  fVar29 = -fVar29;
                }
                puVar2 = (undefined8 *)((long)pfVar24 + lVar26 + uVar21);
                uVar40 = *puVar10;
                uVar44 = *puVar2;
                fVar37 = (float)uVar25;
                fVar47 = (float)uVar33;
                if (iVar27 != 0) {
                  fVar32 = -fVar32;
                }
                uVar25 = *(undefined8 *)((long)pfVar24 + lVar26);
                uVar30 = uVar30 ^ (uVar30 ^ CONCAT44(fVar48,fVar55)) &
                                  CONCAT44(-(uint)(iVar27 == 0),-(uint)(iVar27 == 0));
                fVar38 = (float)uVar25;
                fVar35 = fVar32 * fVar38 + fVar57 * *(float *)((long)pfVar24 + lVar26 + 4);
                fVar39 = (float)uVar40;
                fVar55 = (float)uVar44;
                fVar45 = (float)uVar30;
                fVar41 = (float)(uVar30 >> 0x20);
                fVar48 = fVar37 * fVar39 - *(float *)((long)puVar10 + 4) * fVar45;
                fVar37 = fVar45 * fVar39 + fVar37 * (float)((ulong)uVar40 >> 0x20);
                fVar45 = fVar41 * fVar55 + fVar47 * (float)((ulong)uVar44 >> 0x20);
                fVar39 = fVar36 + fVar48;
                fVar57 = fVar57 * fVar38 - fVar32 * (float)((ulong)uVar25 >> 0x20);
                fVar55 = fVar47 * fVar55 - fVar41 * *(float *)((long)puVar2 + 4);
                fVar36 = fVar36 - fVar48;
                fVar48 = fVar29 - fVar37;
                fVar47 = fVar57 + fVar55;
                fVar29 = fVar29 + fVar37;
                fVar32 = fVar35 + fVar45;
                fVar57 = fVar57 - fVar55;
                fVar35 = fVar35 - fVar45;
                fVar55 = fVar29 - fVar32;
                fVar29 = fVar29 + fVar32;
                fVar32 = fVar48 - fVar57;
                fVar48 = fVar48 + fVar57;
                bVar9 = iVar27 != 0;
                if (bVar9) {
                  fVar29 = -fVar29;
                }
                *(float *)((long)pfVar18 + lVar26) = fVar39 + fVar47;
                ((float *)((long)pfVar18 + lVar26))[1] = fVar29;
                if (bVar9) {
                  fVar32 = -fVar32;
                }
                pfVar23 = (float *)((long)pfVar18 + lVar26 + uVar14);
                if (bVar9) {
                  fVar55 = -fVar55;
                }
                *pfVar23 = fVar36 + fVar35;
                pfVar23[1] = fVar32;
                if (bVar9) {
                  fVar48 = -fVar48;
                }
                pfVar23 = (float *)((long)pfVar18 + lVar26 + uVar21);
                *pfVar23 = fVar39 - fVar47;
                pfVar23[1] = fVar55;
                pfVar23 = (float *)((long)pfVar18 +
                                   lVar26 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 |
                                            (ulong)uVar12 << 3));
                *pfVar23 = fVar36 - fVar35;
                pfVar23[1] = fVar48;
                lVar26 = lVar26 + 8;
                iVar17 = iVar17 + -1;
              } while (1 < iVar17);
              pfVar18 = (float *)((long)pfVar18 + lVar26);
              pfVar16 = (float *)((long)pfVar16 + lVar26);
              pfVar24 = (float *)((long)pfVar24 + lVar26);
            }
            pfVar24 = pfVar24 + (long)(int)uVar6 * -2;
            pfVar18 = pfVar18 + (long)(int)uVar12 * 2;
            iVar17 = (int)uVar20;
            uVar8 = iVar17 - 1;
            uVar20 = (ulong)uVar8;
          } while (uVar8 != 0 && 0 < iVar17);
        }
      }
      else if (uVar4 == 5) {
        FUN_10987d1e4(pfStack_90,pfVar15,pfVar13,uVar11,uVar22,uVar7,0,param_6,0);
      }
      pfVar13 = pfVar13 + (long)(int)((uVar4 - 1) * uVar6) * 2;
      bVar9 = 2 < (long)uVar19;
      uVar19 = uVar19 - 1;
      pfVar18 = pfStack_90;
      pfStack_90 = pfVar15;
    } while (bVar9);
  }
  return;
}



/* Entry: 10987d1e4; end: 10987d4e7;  */

void FUN_10987d1e4(float *param_1,float *param_2,undefined8 *param_3,int param_4,uint param_5,
                  int param_6,int param_7,int param_8,int param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float *pfVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  float fVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar42;
  
  if (0 < param_4) {
    iVar10 = param_6 / 5;
    bVar11 = param_7 == 0;
    uVar8 = param_5 << 2;
    uVar14 = (ulong)uVar8;
    lVar5 = 0;
    if (bVar11) {
      lVar5 = 8;
    }
    lVar6 = 0x28;
    if (bVar11) {
      lVar6 = 8;
    }
    lVar7 = 0;
    if (bVar11) {
      lVar7 = -(long)(int)param_5;
    }
    else {
      uVar8 = 0;
    }
    fVar9 = 1.0 / (float)param_6;
    uVar13 = -(ulong)(param_5 >> 0x1f) & 0xfffffff800000000 | (ulong)param_5 << 3;
    uVar15 = -(ulong)(param_5 * 3 >> 0x1f) & 0xfffffff800000000 | (ulong)(param_5 * 3) << 3;
    uVar16 = -(ulong)((param_5 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
             (ulong)(param_5 << 1) << 3;
    do {
      iVar17 = param_5 + 1;
      if (0 < (int)param_5) {
        do {
          uVar18 = -(uint)(param_8 == 0);
          uVar22 = *(ulong *)(param_2 + (long)(iVar10 * 2) * 2);
          fVar19 = (float)(uVar22 >> 0x20);
          fVar20 = (float)((ulong)*(undefined8 *)(param_2 + (long)iVar10 * 2) >> 0x20);
          fVar23 = -fVar19;
          fVar25 = -fVar20;
          fVar23 = (float)((uint)fVar23 ^ ((uint)fVar23 ^ (uint)fVar19) & uVar18);
          fVar25 = (float)((uint)fVar25 ^ ((uint)fVar25 ^ (uint)fVar20) & uVar18);
          uVar27 = *(ulong *)(param_2 + (long)(iVar10 * 3) * 2);
          fVar19 = (float)(uVar27 >> 0x20);
          fVar20 = (float)((ulong)*(undefined8 *)(param_2 + (long)(iVar10 * 4) * 2) >> 0x20);
          fVar24 = -fVar19;
          fVar26 = -fVar20;
          fVar24 = (float)((uint)fVar24 ^ ((uint)fVar24 ^ (uint)fVar19) & uVar18);
          fVar26 = (float)((uint)fVar26 ^ ((uint)fVar26 ^ (uint)fVar20) & uVar18);
          fVar20 = *param_2;
          fVar19 = param_2[1];
          if (param_8 != 0) {
            fVar19 = -param_2[1];
          }
          fVar33 = (float)uVar22;
          fVar42 = (float)uVar27;
          fVar29 = (float)*(undefined8 *)(param_2 + (long)iVar10 * 2);
          fVar30 = (float)*(undefined8 *)(param_2 + (long)(iVar10 * 4) * 2);
          if (param_9 == 0 || bVar11) {
            fVar32 = fVar25;
            if (param_7 == 0) {
              puVar1 = (undefined8 *)((long)param_3 + uVar13);
              puVar2 = (undefined8 *)((long)param_3 + uVar16);
              puVar3 = (undefined8 *)((long)param_3 + uVar15);
              uVar36 = *puVar1;
              uVar39 = *puVar2;
              uVar41 = *puVar3;
              fVar32 = (float)uVar36;
              fVar40 = (float)*param_3;
              uVar22 = (ulong)(uint)(fVar33 * fVar32 - *(float *)((long)puVar1 + 4) * fVar23);
              fVar23 = fVar23 * fVar32 + fVar33 * (float)((ulong)uVar36 >> 0x20);
              fVar32 = fVar25 * fVar40 + fVar29 * (float)((ulong)*param_3 >> 0x20);
              fVar21 = (float)uVar39;
              uVar27 = (ulong)(uint)(fVar42 * fVar21 - *(float *)((long)puVar2 + 4) * fVar24);
              fVar37 = fVar30 * (float)((ulong)uVar41 >> 0x20);
              fVar33 = (float)uVar41;
              fVar29 = fVar29 * fVar40 - fVar25 * *(float *)((long)param_3 + 4);
              fVar30 = fVar30 * fVar33 - fVar26 * *(float *)((long)puVar3 + 4);
              fVar24 = fVar24 * fVar21 + fVar42 * (float)((ulong)uVar39 >> 0x20);
              fVar26 = fVar26 * fVar33 + fVar37;
            }
          }
          else {
            fVar20 = fVar20 * fVar9;
            fVar19 = fVar19 * fVar9;
            uVar22 = (ulong)(uint)(fVar9 * fVar33);
            fVar23 = fVar23 * fVar9;
            uVar27 = (ulong)(uint)(fVar9 * fVar42);
            fVar29 = fVar29 * fVar9;
            fVar30 = fVar30 * fVar9;
            fVar24 = fVar24 * fVar9;
            fVar26 = fVar26 * fVar9;
            fVar32 = fVar25 * fVar9;
          }
          fVar31 = fVar29 + fVar30;
          fVar33 = fVar23 + fVar24;
          fVar34 = fVar32 + fVar26;
          fVar28 = (float)uVar22 + (float)uVar27;
          fVar21 = (float)uVar22 - (float)uVar27;
          fVar25 = fVar19 + fVar33 + fVar34;
          fVar35 = fVar20 + fVar31 * 0.309017 + fVar28 * -0.809017;
          fVar37 = fVar19 + fVar34 * 0.309017 + fVar33 * -0.809017;
          fVar38 = (fVar23 - fVar24) * -0.58778524 + (fVar32 - fVar26) * -0.95105654;
          fVar40 = fVar21 * 0.58778524 + (fVar29 - fVar30) * 0.95105654;
          fVar42 = fVar37 - fVar40;
          fVar40 = fVar40 + fVar37;
          fVar37 = fVar20 + fVar31 * -0.809017 + fVar28 * 0.309017;
          fVar33 = fVar19 + fVar34 * -0.809017 + fVar33 * 0.309017;
          fVar24 = (fVar23 - fVar24) * -0.95105654 + (fVar32 - fVar26) * 0.58778524;
          fVar23 = fVar21 * 0.95105654 + (fVar29 - fVar30) * -0.58778524;
          fVar19 = fVar23 + fVar33;
          fVar33 = fVar33 - fVar23;
          bVar12 = param_8 != 0;
          if (bVar12) {
            fVar42 = -fVar42;
            fVar25 = -fVar25;
          }
          *param_1 = fVar20 + fVar28 + fVar31;
          param_1[1] = fVar25;
          pfVar4 = (float *)((long)param_1 + uVar13);
          *pfVar4 = fVar35 - fVar38;
          pfVar4[1] = fVar42;
          if (bVar12) {
            fVar33 = -fVar33;
            fVar19 = -fVar19;
          }
          pfVar4 = (float *)((long)param_1 + uVar16);
          *pfVar4 = fVar37 + fVar24;
          pfVar4[1] = fVar19;
          if (bVar12) {
            fVar40 = -fVar40;
          }
          pfVar4 = (float *)((long)param_1 + uVar15);
          *pfVar4 = fVar37 - fVar24;
          pfVar4[1] = fVar33;
          pfVar4 = (float *)((long)param_1 +
                            (-(ulong)((param_5 & 0x3fffffff) >> 0x1d) & 0xfffffff800000000 |
                            uVar14 << 3));
          *pfVar4 = fVar35 + fVar38;
          pfVar4[1] = fVar40;
          param_2 = param_2 + 2;
          param_3 = (undefined8 *)((long)param_3 + lVar5);
          param_1 = (float *)((long)param_1 + lVar6);
          iVar17 = iVar17 + -1;
        } while (1 < iVar17);
      }
      param_3 = param_3 + lVar7;
      param_1 = param_1 + (long)(int)uVar8 * 2;
      iVar17 = param_4 + -1;
      bVar12 = 0 < param_4;
      param_4 = iVar17;
    } while (iVar17 != 0 && bVar12);
  }
  return;
}



/* Entry: 10987d4e8; end: 10987d7b7;  */

void FUN_10987d4e8(float *param_1,undefined8 param_2,int *param_3,long param_4,float *param_5,
                  int param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  code *pcVar4;
  uint uVar5;
  float *pfVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  
  pcVar4 = FUN_10987dfc4;
  if (param_6 != 0) {
    pcVar4 = FUN_10987d7b8;
  }
  uVar5 = param_3[*param_3 << 1] * param_3[1];
  (*pcVar4)(param_5);
  uVar7 = (ulong)(int)uVar5;
  lVar10 = (long)(int)(uVar5 * 2);
  pfVar6 = (float *)(param_4 + (long)(int)uVar5 * 8);
  if (3 < (int)uVar5) {
    lVar9 = 0;
    uVar11 = ((uint)(uVar7 >> 2) & 0x3fffffff) + 1;
    do {
      pfVar8 = (float *)((long)pfVar6 + lVar9);
      pfVar1 = (float *)(param_4 + uVar7 * 0x10 + lVar9);
      pfVar2 = (float *)(param_4 + lVar10 * 8 + uVar7 * 8 + lVar9);
      pfVar3 = (float *)((long)param_1 + lVar9);
      fVar20 = *pfVar1 * param_5[4] - pfVar1[1] * param_5[5];
      fVar21 = pfVar1[2] * param_5[0xc] - pfVar1[3] * param_5[0xd];
      fVar22 = pfVar1[4] * param_5[0x14] - pfVar1[5] * param_5[0x15];
      fVar23 = pfVar1[6] * param_5[0x1c] - pfVar1[7] * param_5[0x1d];
      fVar16 = pfVar1[1] * param_5[4] + *pfVar1 * param_5[5];
      fVar17 = pfVar1[3] * param_5[0xc] + pfVar1[2] * param_5[0xd];
      fVar18 = pfVar1[5] * param_5[0x14] + pfVar1[4] * param_5[0x15];
      fVar19 = pfVar1[7] * param_5[0x1c] + pfVar1[6] * param_5[0x1d];
      fVar36 = *pfVar8 * param_5[2] - pfVar8[1] * param_5[3];
      fVar37 = pfVar8[2] * param_5[10] - pfVar8[3] * param_5[0xb];
      fVar38 = pfVar8[4] * param_5[0x12] - pfVar8[5] * param_5[0x13];
      fVar39 = pfVar8[6] * param_5[0x1a] - pfVar8[7] * param_5[0x1b];
      fVar48 = param_5[6] * *pfVar2 - pfVar2[1] * param_5[7];
      fVar49 = param_5[0xe] * pfVar2[2] - pfVar2[3] * param_5[0xf];
      fVar50 = param_5[0x16] * pfVar2[4] - pfVar2[5] * param_5[0x17];
      fVar51 = param_5[0x1e] * pfVar2[6] - pfVar2[7] * param_5[0x1f];
      fVar44 = pfVar8[1] * param_5[2] + *pfVar8 * param_5[3];
      fVar45 = pfVar8[3] * param_5[10] + pfVar8[2] * param_5[0xb];
      fVar46 = pfVar8[5] * param_5[0x12] + pfVar8[4] * param_5[0x13];
      fVar47 = pfVar8[7] * param_5[0x1a] + pfVar8[6] * param_5[0x1b];
      fVar32 = param_5[6] * pfVar2[1] + *pfVar2 * param_5[7];
      fVar33 = param_5[0xe] * pfVar2[3] + pfVar2[2] * param_5[0xf];
      fVar34 = param_5[0x16] * pfVar2[5] + pfVar2[4] * param_5[0x17];
      fVar35 = param_5[0x1e] * pfVar2[7] + pfVar2[6] * param_5[0x1f];
      fVar12 = *param_5 + fVar20;
      fVar13 = param_5[8] + fVar21;
      fVar14 = param_5[0x10] + fVar22;
      fVar15 = param_5[0x18] + fVar23;
      fVar24 = param_5[1] + fVar16;
      fVar25 = param_5[9] + fVar17;
      fVar26 = param_5[0x11] + fVar18;
      fVar27 = param_5[0x19] + fVar19;
      fVar20 = *param_5 - fVar20;
      fVar21 = param_5[8] - fVar21;
      fVar22 = param_5[0x10] - fVar22;
      fVar23 = param_5[0x18] - fVar23;
      fVar16 = param_5[1] - fVar16;
      fVar17 = param_5[9] - fVar17;
      fVar18 = param_5[0x11] - fVar18;
      fVar19 = param_5[0x19] - fVar19;
      fVar28 = fVar36 + fVar48;
      fVar29 = fVar37 + fVar49;
      fVar30 = fVar38 + fVar50;
      fVar31 = fVar39 + fVar51;
      fVar40 = fVar44 + fVar32;
      fVar41 = fVar45 + fVar33;
      fVar42 = fVar46 + fVar34;
      fVar43 = fVar47 + fVar35;
      fVar36 = fVar36 - fVar48;
      fVar37 = fVar37 - fVar49;
      fVar38 = fVar38 - fVar50;
      fVar39 = fVar39 - fVar51;
      fVar44 = fVar44 - fVar32;
      fVar45 = fVar45 - fVar33;
      fVar46 = fVar46 - fVar34;
      fVar47 = fVar47 - fVar35;
      *pfVar3 = fVar12 + fVar28;
      pfVar3[1] = fVar24 + fVar40;
      pfVar3[2] = fVar13 + fVar29;
      pfVar3[3] = fVar25 + fVar41;
      pfVar3[4] = fVar14 + fVar30;
      pfVar3[5] = fVar26 + fVar42;
      pfVar3[6] = fVar15 + fVar31;
      pfVar3[7] = fVar27 + fVar43;
      pfVar8 = (float *)((long)param_1 + lVar9 + uVar7 * 8);
      *pfVar8 = fVar20 + fVar44;
      pfVar8[1] = fVar16 - fVar36;
      pfVar8[2] = fVar21 + fVar45;
      pfVar8[3] = fVar17 - fVar37;
      pfVar8[4] = fVar22 + fVar46;
      pfVar8[5] = fVar18 - fVar38;
      pfVar8[6] = fVar23 + fVar47;
      pfVar8[7] = fVar19 - fVar39;
      pfVar8 = (float *)((long)param_1 + lVar9 + lVar10 * 8);
      *pfVar8 = fVar12 - fVar28;
      pfVar8[1] = fVar24 - fVar40;
      pfVar8[2] = fVar13 - fVar29;
      pfVar8[3] = fVar25 - fVar41;
      pfVar8[4] = fVar14 - fVar30;
      pfVar8[5] = fVar26 - fVar42;
      pfVar8[6] = fVar15 - fVar31;
      pfVar8[7] = fVar27 - fVar43;
      pfVar8 = (float *)((long)param_1 + lVar9 + (long)(int)(uVar5 * 3) * 8);
      *pfVar8 = fVar20 - fVar44;
      pfVar8[1] = fVar16 + fVar36;
      pfVar8[2] = fVar21 - fVar45;
      pfVar8[3] = fVar17 + fVar37;
      pfVar8[4] = fVar22 - fVar46;
      pfVar8[5] = fVar18 + fVar38;
      pfVar8[6] = fVar23 - fVar47;
      pfVar8[7] = fVar19 + fVar39;
      param_5 = param_5 + 0x20;
      lVar9 = lVar9 + 0x20;
      uVar11 = uVar11 - 1;
    } while (1 < uVar11);
    param_1 = (float *)((long)param_1 + lVar9);
    pfVar6 = (float *)((long)pfVar6 + lVar9);
  }
  uVar11 = uVar5 & 3;
  if (-1 < (int)-uVar5) {
    uVar11 = -(-uVar5 & 3);
  }
  if (0 < (int)uVar11) {
    uVar11 = uVar11 + 1;
    pfVar8 = param_1 + (long)(int)(uVar5 * 3) * 2 + 1;
    do {
      fVar13 = pfVar6[uVar7 * 2];
      fVar15 = (pfVar6 + uVar7 * 2)[1];
      fVar16 = pfVar6[lVar10 * 2];
      fVar19 = (pfVar6 + lVar10 * 2)[1];
      fVar18 = param_5[2] * *pfVar6 - param_5[3] * pfVar6[1];
      fVar14 = param_5[3] * *pfVar6 + param_5[2] * pfVar6[1];
      fVar12 = param_5[4] * fVar13 - param_5[5] * fVar15;
      fVar13 = param_5[5] * fVar13 + param_5[4] * fVar15;
      fVar17 = param_5[6] * fVar16 - param_5[7] * fVar19;
      fVar19 = param_5[7] * fVar16 + param_5[6] * fVar19;
      fVar20 = *param_5 + fVar12;
      fVar21 = param_5[1] + fVar13;
      fVar12 = *param_5 - fVar12;
      fVar13 = param_5[1] - fVar13;
      fVar15 = fVar18 + fVar17;
      fVar16 = fVar14 + fVar19;
      fVar18 = fVar18 - fVar17;
      fVar14 = fVar14 - fVar19;
      *param_1 = fVar20 + fVar15;
      param_1[1] = fVar21 + fVar16;
      param_1[uVar7 * 2] = fVar12 + fVar14;
      (param_1 + uVar7 * 2)[1] = fVar13 - fVar18;
      param_1[lVar10 * 2] = fVar20 - fVar15;
      (param_1 + lVar10 * 2)[1] = fVar21 - fVar16;
      pfVar6 = pfVar6 + 2;
      uVar11 = uVar11 - 1;
      pfVar8[-1] = fVar12 - fVar14;
      *pfVar8 = fVar13 + fVar18;
      pfVar8 = pfVar8 + 2;
      param_5 = param_5 + 8;
      param_1 = param_1 + 2;
    } while (1 < uVar11);
  }
  return;
}


