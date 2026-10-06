/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a638330; end: 10a638377;  */

undefined8 FUN_10a638330(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long alStack_38 [3];
  
  if (param_2 != (undefined8 *)0x0) {
    uVar3 = *param_2;
    FUN_10a638378(alStack_38);
    lVar1 = alStack_38[0];
    alStack_38[0] = 0;
    if (lVar1 != 0) {
      __ZdlPv();
    }
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a638378);
  (*pcVar2)();
}



/* Entry: 10a638378; end: 10a638497;  */

void FUN_10a638378(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10a63842c;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10a63842c;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_10a63842c:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10a638498; end: 10a6384eb;  */

undefined8 * FUN_10a638498(undefined8 *param_1,undefined8 *param_2)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_10a6384ec(param_1,*param_2,param_2 + 1);
  return param_1;
}



/* Entry: 10a6384ec; end: 10a63856b;  */

void FUN_10a6384ec(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  
  while (param_2 != param_3) {
    func_0x000107c284b0(param_1,param_1 + 8,(long)param_2 + 0x1c,(long)param_2 + 0x1c);
    plVar1 = (long *)param_2[1];
    plVar3 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar3[2];
        bVar2 = (long *)*param_2 != plVar3;
        plVar3 = param_2;
      } while (bVar2);
    }
    else {
      do {
        param_2 = plVar1;
        plVar1 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a63856c; end: 10a638b07;  */

void FUN_10a63856c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  long *plVar27;
  uint uVar28;
  float fVar29;
  undefined8 uStack_70;
  uint uStack_64;
  
  plVar27 = (long *)*param_1;
  if (plVar27 != param_1 + 1) {
    uVar21 = *(ulong *)(param_2 + 0x10);
    plVar1 = (long *)(uVar21 + 0x470);
    plVar2 = (long *)(uVar21 + 0x4b0);
    plVar3 = (long *)(uVar21 + 0x4c0);
    do {
      uStack_64 = *(uint *)((long)plVar27 + 0x1c);
      uVar4 = *(uint *)(plVar27 + 4);
      uVar22 = (ulong)uVar4;
      uVar23 = *(undefined8 *)((long)plVar27 + 0x24);
      lVar24 = *(long *)(*(long *)(uVar21 + 0x170) + 0xba8);
      plVar12 = *(long **)(lVar24 + 0x38);
      uStack_70 = uVar23;
      if ((plVar12 == (long *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar12 == (long *)0x0)) {
        if ((uVar4 == 4) == (uVar4 != 3)) goto LAB_10a6386e4;
LAB_10a6386cc:
        bVar10 = false;
LAB_10a6386d0:
        uVar25 = uVar21;
        FUN_10a601f04(uVar21,&uStack_70);
        if (((uVar25 & 1) == 0) && (!bVar10)) goto LAB_10a6386e4;
        func_0x000107426fd8(uVar21 + 0x468,&uStack_64,&uStack_64);
        uVar8 = uStack_64;
        uVar26 = (ulong)uStack_64;
        uVar25 = *(ulong *)(uVar21 + 0x4b8);
        if (uVar25 != 0) {
          uVar14 = uVar25 - 1;
          uVar28 = (uint)uVar25;
          if ((uVar25 & uVar14) == 0) {
            uVar22 = (ulong)(uVar28 - 1 & uStack_64);
          }
          else {
            uVar22 = uVar26;
            if (uVar25 <= uVar26) {
              uVar6 = 0;
              if (uVar28 != 0) {
                uVar6 = uStack_64 / uVar28;
              }
              uVar22 = (ulong)(uStack_64 - uVar6 * uVar28);
            }
          }
          puVar15 = *(undefined8 **)(*plVar2 + uVar22 * 8);
          if (puVar15 != (undefined8 *)0x0) {
            for (plVar12 = (long *)*puVar15; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
              uVar16 = plVar12[1];
              if (uVar16 == uVar26) {
                if (*(uint *)(plVar12 + 2) == uStack_64) goto LAB_10a638a44;
              }
              else {
                if ((uVar25 & uVar14) == 0) {
                  uVar16 = uVar16 & uVar14;
                }
                else if (uVar25 <= uVar16) {
                  uVar20 = 0;
                  if (uVar25 != 0) {
                    uVar20 = uVar16 / uVar25;
                  }
                  uVar16 = uVar16 - uVar20 * uVar25;
                }
                if (uVar16 != uVar22) break;
              }
            }
          }
        }
        plVar12 = (long *)0x20;
        __Znwm();
        *plVar12 = 0;
        plVar12[1] = uVar26;
        *(uint *)(plVar12 + 2) = uVar8;
        *(undefined8 *)((long)plVar12 + 0x14) = 0;
        *(undefined4 *)((long)plVar12 + 0x1c) = 0;
        fVar29 = (float)(*(long *)(uVar21 + 0x4c8) + 1);
        if ((uVar25 == 0) || (*(float *)(uVar21 + 0x4d0) * (float)uVar25 < fVar29)) {
          uVar22 = 1;
          if (2 < uVar25) {
            uVar22 = (ulong)((uVar25 & uVar25 - 1) != 0);
          }
          uVar22 = uVar22 | uVar25 << 1;
          uVar14 = (ulong)(fVar29 / *(float *)(uVar21 + 0x4d0));
          if (uVar22 <= uVar14) {
            uVar22 = uVar14;
          }
          if (uVar22 - 1 == 0) {
            uVar22 = 2;
          }
          else if ((uVar22 & uVar22 - 1) != 0) {
            __ZNSt3__112__next_primeEm();
            uVar25 = *(ulong *)(uVar21 + 0x4b8);
          }
          if (uVar25 < uVar22) {
LAB_10a638850:
            if (uVar22 >> 0x3d != 0) {
              func_0x000109ffded8();
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10a638af0);
              (*pcVar9)();
            }
            lVar24 = uVar22 << 3;
            __Znwm();
            lVar13 = *plVar2;
            *plVar2 = lVar24;
            if (lVar13 != 0) {
              __ZdlPv();
            }
            uVar25 = 0;
            *(ulong *)(uVar21 + 0x4b8) = uVar22;
            do {
              *(undefined8 *)(*plVar2 + uVar25 * 8) = 0;
              uVar25 = uVar25 + 1;
            } while (uVar22 != uVar25);
            plVar17 = (long *)*plVar3;
            uVar25 = uVar22;
            if (plVar17 != (long *)0x0) {
              uVar14 = plVar17[1];
              uVar16 = uVar22 - 1;
              if ((uVar22 & uVar16) == 0) {
                uVar14 = uVar14 & uVar16;
              }
              else if (uVar22 <= uVar14) {
                uVar20 = 0;
                if (uVar22 != 0) {
                  uVar20 = uVar14 / uVar22;
                }
                uVar14 = uVar14 - uVar20 * uVar22;
              }
              *(long **)(*plVar2 + uVar14 * 8) = plVar3;
              plVar18 = (long *)*plVar17;
              while (plVar18 != (long *)0x0) {
                uVar20 = plVar18[1];
                if ((uVar22 & uVar16) == 0) {
                  uVar20 = uVar20 & uVar16;
                }
                else if (uVar22 <= uVar20) {
                  uVar7 = 0;
                  if (uVar22 != 0) {
                    uVar7 = uVar20 / uVar22;
                  }
                  uVar20 = uVar20 - uVar7 * uVar22;
                }
                plVar19 = plVar18;
                if (uVar20 != uVar14) {
                  lVar24 = *plVar2;
                  if (*(long *)(lVar24 + uVar20 * 8) == 0) {
                    *(long **)(lVar24 + uVar20 * 8) = plVar17;
                    uVar14 = uVar20;
                  }
                  else {
                    *plVar17 = *plVar18;
                    *plVar18 = **(undefined8 **)(lVar24 + uVar20 * 8);
                    **(long **)(lVar24 + uVar20 * 8) = (long)plVar18;
                    plVar19 = plVar17;
                  }
                }
                plVar17 = plVar19;
                plVar18 = (long *)*plVar19;
              }
            }
          }
          else if (uVar22 < uVar25) {
            uVar14 = (ulong)((float)*(ulong *)(uVar21 + 0x4c8) / *(float *)(uVar21 + 0x4d0));
            if ((uVar25 < 3) || ((uVar25 & uVar25 - 1) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if (1 < uVar14) {
              uVar14 = 1L << (-LZCOUNT(uVar14 - 1) & 0x3fU);
            }
            if (uVar22 <= uVar14) {
              uVar22 = uVar14;
            }
            if (uVar22 < uVar25) {
              if (uVar22 != 0) goto LAB_10a638850;
              lVar24 = *plVar2;
              *plVar2 = 0;
              if (lVar24 != 0) {
                __ZdlPv();
              }
              *(undefined8 *)(uVar21 + 0x4b8) = 0;
              uVar25 = 0;
            }
            else {
              uVar25 = *(ulong *)(uVar21 + 0x4b8);
            }
          }
          if ((uVar25 & uVar25 - 1) == 0) {
            uVar22 = (ulong)((int)uVar25 - 1U & uVar8);
          }
          else {
            uVar22 = uVar26;
            if (uVar25 <= uVar26) {
              uVar22 = 0;
              if (uVar25 != 0) {
                uVar22 = uVar26 / uVar25;
              }
              uVar22 = uVar26 - uVar22 * uVar25;
            }
          }
        }
        lVar24 = *plVar2;
        plVar17 = *(long **)(lVar24 + uVar22 * 8);
        if (plVar17 == (long *)0x0) {
          *plVar12 = *plVar3;
          *plVar3 = (long)plVar12;
          *(long **)(lVar24 + uVar22 * 8) = plVar3;
          if (*plVar12 != 0) {
            uVar22 = *(ulong *)(*plVar12 + 8);
            if ((uVar25 & uVar25 - 1) == 0) {
              uVar22 = uVar22 & uVar25 - 1;
            }
            else if (uVar25 <= uVar22) {
              uVar26 = 0;
              if (uVar25 != 0) {
                uVar26 = uVar22 / uVar25;
              }
              uVar22 = uVar22 - uVar26 * uVar25;
            }
            plVar17 = (long *)(*plVar2 + uVar22 * 8);
            goto LAB_10a638a34;
          }
        }
        else {
          *plVar12 = *plVar17;
LAB_10a638a34:
          *plVar17 = (long)plVar12;
        }
        *(long *)(uVar21 + 0x4c8) = *(long *)(uVar21 + 0x4c8) + 1;
LAB_10a638a44:
        *(undefined8 *)((long)plVar12 + 0x14) = uVar23;
        *(bool *)((long)plVar12 + 0x1c) = uVar4 == 4;
      }
      else {
        uVar25 = *(ulong *)(lVar24 + 0x30);
        plVar17 = plVar12 + 1;
        do {
          lVar24 = *plVar17;
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar11) {
            *plVar17 = lVar24 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
        bVar11 = (uVar4 == 4) != (uVar4 != 3);
        if ((uVar25 == uVar21) && (*(char *)(uVar21 + 0x3b1) == '\x01')) {
          plVar17 = (long *)*plVar1;
          plVar12 = plVar1;
          if (plVar17 == (long *)0x0) {
LAB_10a6386b4:
            plVar12 = plVar1;
          }
          else {
            do {
              lVar24 = 8;
              if (uStack_64 <= *(uint *)((long)plVar17 + 0x1c)) {
                lVar24 = 0;
                plVar12 = plVar17;
              }
              plVar17 = *(long **)((long)plVar17 + lVar24);
            } while (plVar17 != (long *)0x0);
            if ((plVar12 == plVar1) || (uStack_64 < *(uint *)((long)plVar12 + 0x1c)))
            goto LAB_10a6386b4;
          }
          bVar10 = plVar12 != plVar1;
          if (bVar11) goto LAB_10a6386d0;
        }
        else if (bVar11) goto LAB_10a6386cc;
LAB_10a6386e4:
        plVar12 = plVar2;
        FUN_10a63828c(plVar2,&uStack_64);
        if (plVar12 != (long *)0x0) {
          *(bool *)((long)plVar12 + 0x1c) = uVar4 == 4;
        }
        func_0x0001077f9f4c(uVar21 + 0x468,&uStack_64);
      }
      plVar12 = (long *)plVar27[1];
      plVar17 = plVar27;
      if ((long *)plVar27[1] == (long *)0x0) {
        do {
          plVar27 = (long *)plVar17[2];
          bVar11 = (long *)*plVar27 != plVar17;
          plVar17 = plVar27;
        } while (bVar11);
      }
      else {
        do {
          plVar27 = plVar12;
          plVar12 = (long *)*plVar27;
        } while ((long *)*plVar27 != (long *)0x0);
      }
    } while (plVar27 != param_1 + 1);
  }
  return;
}



/* Entry: 10a638b08; end: 10a638b3b;  */

void FUN_10a638b08(void)

{
  return;
}



/* Entry: 10a638b3c; end: 10a638b73;  */

void FUN_10a638b3c(long param_1,long param_2)

{
  undefined8 uStack_18;
  
  if ((*(ushort *)(*(long *)(param_2 + 0x10) + 0x180) >> 4 & 1) == 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x14);
    FUN_10a638b74(*(long *)(param_2 + 0x10),&uStack_18);
  }
  return;
}



/* Entry: 10a638b74; end: 10a639177;  */

void FUN_10a638b74(undefined **param_1,code ******param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  code ****ppppcVar5;
  undefined **ppuVar6;
  code ******ppppppcVar7;
  code ******ppppppcVar8;
  undefined1 uVar9;
  ulong uVar10;
  long lVar11;
  code *****pppppcVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  code ****ppppcVar15;
  ulong uVar16;
  long *plVar17;
  code *****pppppcVar18;
  undefined **ppuVar19;
  code ******unaff_x20;
  undefined *unaff_x21;
  undefined8 *unaff_x22;
  long *plVar20;
  code ******unaff_x23;
  code *****unaff_x26;
  code *****pppppcVar21;
  undefined8 *puStack_1b0;
  code **ppcStack_1a8;
  int aiStack_1a0 [2];
  undefined8 *puStack_198;
  int aiStack_190 [2];
  undefined8 *puStack_188;
  code ****ppppcStack_180;
  code ****ppppcStack_178;
  undefined1 *puStack_170;
  undefined ***pppuStack_168;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  code *****pppppcStack_140;
  undefined **ppuStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  code *****pppppcStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  code ****ppppcStack_108;
  code *****pppppcStack_100;
  long lStack_f8;
  float fStack_f0;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  code *****pppppcStack_d0;
  undefined **ppuStack_c8;
  code *****pppppcStack_c0;
  undefined **ppuStack_b8;
  code ****ppppcStack_b0;
  code ****ppppcStack_a8;
  code *****pppppcStack_a0;
  undefined **ppuStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)param_1 + 0x3d4) == '\x01') {
    *(undefined1 *)((long)param_1 + 0x3d4) = 0;
    FUN_10a1f2004(param_1 + 0xb0);
    unaff_x21 = param_1[0x67];
    ppuVar6 = (undefined **)0x38;
    __Znwm();
    ppuVar6[1] = (undefined *)0x0;
    ppuVar6[2] = (undefined *)0x0;
    *ppuVar6 = (undefined *)&PTR_DAT_110c01378;
    ppuVar6[4] = (undefined *)0x0;
    ppuVar6[5] = (undefined *)0x0;
    pppppcStack_120 = (code *****)(ppuVar6 + 3);
    *pppppcStack_120 = (code ****)&PTR_DAT_110bfbd90;
    ppuVar6[6] = (undefined *)*param_2;
    ppppcStack_108 = (code ****)0x0;
    puStack_110 = (undefined *)0x0;
    lStack_f8 = 0;
    pppppcStack_100 = (code *****)0x0;
    fStack_f0 = *(float *)(unaff_x21 + 0x38);
    ppppppcVar7 = *(code *******)(unaff_x21 + 0x20);
    ppuStack_118 = ppuVar6;
    FUN_10a636c3c(&puStack_110);
    plVar20 = *(long **)(unaff_x21 + 0x28);
    unaff_x20 = param_2;
    if (plVar20 != (long *)0x0) {
      unaff_x23 = (code ******)0x9ddfea08eb382d69;
      do {
        pppppcVar12 = (code *****)ppppcStack_108;
        uVar10 = plVar20[2];
        uVar16 = ((ulong)(uint)((int)uVar10 << 3) + 8 ^ uVar10 >> 0x20) * -0x622015f714c7d297;
        uVar16 = (uVar10 >> 0x20 ^ uVar16 >> 0x2f ^ uVar16) * -0x622015f714c7d297;
        pppppcVar21 = (code *****)((uVar16 ^ uVar16 >> 0x2f) * -0x622015f714c7d297);
        if ((code *****)ppppcStack_108 != (code *****)0x0) {
          uVar16 = (long)ppppcStack_108 - 1;
          if (((ulong)ppppcStack_108 & uVar16) == 0) {
            unaff_x26 = (code *****)((ulong)pppppcVar21 & uVar16);
          }
          else {
            unaff_x26 = pppppcVar21;
            if (ppppcStack_108 <= pppppcVar21) {
              uVar4 = 0;
              if ((code *****)ppppcStack_108 != (code *****)0x0) {
                uVar4 = (ulong)pppppcVar21 / (ulong)ppppcStack_108;
              }
              unaff_x26 = (code *****)((long)pppppcVar21 - uVar4 * (long)ppppcStack_108);
            }
          }
          plVar17 = *(long **)(puStack_110 + (long)unaff_x26 * 8);
          if (plVar17 != (long *)0x0) {
            do {
              while( true ) {
                plVar17 = (long *)*plVar17;
                if (plVar17 == (long *)0x0) goto LAB_10a638cfc;
                pppppcVar18 = (code *****)plVar17[1];
                if (pppppcVar18 != pppppcVar21) break;
                if (plVar17[2] == uVar10) goto LAB_10a638e5c;
              }
              if (((ulong)ppppcStack_108 & uVar16) == 0) {
                pppppcVar18 = (code *****)((ulong)pppppcVar18 & uVar16);
              }
              else if (ppppcStack_108 <= pppppcVar18) {
                uVar4 = 0;
                if ((code *****)ppppcStack_108 != (code *****)0x0) {
                  uVar4 = (ulong)pppppcVar18 / (ulong)ppppcStack_108;
                }
                pppppcVar18 = (code *****)((long)pppppcVar18 - uVar4 * (long)ppppcStack_108);
              }
            } while (pppppcVar18 == unaff_x26);
          }
        }
LAB_10a638cfc:
        unaff_x20 = (code ******)0x68;
        __Znwm();
        *unaff_x20 = (code *****)0x0;
        unaff_x20[1] = pppppcVar21;
        lVar11 = plVar20[3];
        pppppcVar18 = (code *****)plVar20[2];
        unaff_x20[3] = (code *****)plVar20[3];
        unaff_x20[2] = pppppcVar18;
        if (lVar11 != 0) {
          plVar17 = (long *)(lVar11 + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar2) {
              *plVar17 = *plVar17 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pppppcStack_c0 = (code *****)(unaff_x20 + 4);
        *(undefined1 *)(unaff_x20 + 0xc) = 3;
        if ((char)plVar20[0xc] == '\0') {
          uVar9 = 0;
        }
        else {
          ppppppcVar7 = (code ******)(plVar20 + 4);
          FUN_10a005398(&pppppcStack_c0);
          uVar9 = (undefined1)plVar20[0xc];
        }
        *(undefined1 *)(unaff_x20 + 0xc) = uVar9;
        if ((pppppcVar12 == (code *****)0x0) ||
           (fStack_f0 * (float)pppppcVar12 < (float)(lStack_f8 + 1))) {
          uVar10 = 1;
          if ((code *****)0x2 < pppppcVar12) {
            uVar10 = (ulong)(((ulong)pppppcVar12 & (long)pppppcVar12 - 1U) != 0);
          }
          ppppppcVar7 = (code ******)(uVar10 | (long)pppppcVar12 << 1);
          ppppppcVar8 = (code ******)(long)((float)(lStack_f8 + 1) / fStack_f0);
          if (ppppppcVar7 <= ppppppcVar8) {
            ppppppcVar7 = ppppppcVar8;
          }
          FUN_10a636c3c(&puStack_110);
          pppppcVar12 = (code *****)ppppcStack_108;
          if (((ulong)ppppcStack_108 & (long)ppppcStack_108 - 1U) == 0) {
            unaff_x26 = (code *****)((long)ppppcStack_108 - 1U & (ulong)pppppcVar21);
          }
          else {
            unaff_x26 = pppppcVar21;
            if (ppppcStack_108 <= pppppcVar21) {
              uVar10 = 0;
              if ((code *****)ppppcStack_108 != (code *****)0x0) {
                uVar10 = (ulong)pppppcVar21 / (ulong)ppppcStack_108;
              }
              unaff_x26 = (code *****)((long)pppppcVar21 - uVar10 * (long)ppppcStack_108);
            }
          }
        }
        puVar13 = *(undefined8 **)(puStack_110 + (long)unaff_x26 * 8);
        if (puVar13 == (undefined8 *)0x0) {
          *unaff_x20 = pppppcStack_100;
          *(code *******)(puStack_110 + (long)unaff_x26 * 8) = &pppppcStack_100;
          pppppcStack_100 = (code *****)unaff_x20;
          if (*unaff_x20 != (code *****)0x0) {
            pppppcVar21 = (code *****)(*unaff_x20)[1];
            if (((ulong)pppppcVar12 & (long)pppppcVar12 - 1U) == 0) {
              pppppcVar21 = (code *****)((ulong)pppppcVar21 & (long)pppppcVar12 - 1U);
            }
            else if (pppppcVar12 <= pppppcVar21) {
              uVar10 = 0;
              if (pppppcVar12 != (code *****)0x0) {
                uVar10 = (ulong)pppppcVar21 / (ulong)pppppcVar12;
              }
              pppppcVar21 = (code *****)((long)pppppcVar21 - uVar10 * (long)pppppcVar12);
            }
            *(code *******)(puStack_110 + (long)pppppcVar21 * 8) = unaff_x20;
          }
        }
        else {
          *unaff_x20 = (code *****)*puVar13;
          *puVar13 = unaff_x20;
        }
        lStack_f8 = lStack_f8 + 1;
LAB_10a638e5c:
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
    }
    param_2 = ppppppcVar7;
    unaff_x22 = (undefined8 *)0x0;
    if ((code ******)pppppcStack_100 == (code ******)0x0) {
      param_1 = &puStack_110;
      FUN_10a58047c();
    }
    else {
      unaff_x22 = &uStack_e0;
      unaff_x23 = &pppppcStack_c0;
      ppppppcVar7 = (code ******)pppppcStack_100;
      do {
        ppppppcVar8 = (code ******)ppppppcVar7[2];
        puVar14 = unaff_x21 + 0x18;
        FUN_10a63764c();
        param_2 = ppppppcVar8;
        if (puVar14 != (undefined *)0x0) {
          if (*(char *)(ppppppcVar7 + 0xc) == '\x01') {
            pppppcVar12 = ppppppcVar7[4];
            ppuStack_b8 = ppuStack_118;
            pppppcStack_c0 = pppppcStack_120;
            if (ppuStack_118 != (undefined **)0x0) {
              ppuVar6 = ppuStack_118 + 1;
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                if (bVar2) {
                  *ppuVar6 = *ppuVar6 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            param_2 = ppppppcVar7 + 4;
            (*(code *)pppppcVar12)(&pppppcStack_c0);
            if (ppuStack_b8 != (undefined **)0x0) {
              ppuVar6 = ppuStack_b8 + 1;
              do {
                puVar14 = *ppuVar6;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                if (bVar2) {
                  *ppuVar6 = puVar14 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
                ppuVar19 = ppuStack_b8;
              } while (cVar1 != '\0');
LAB_10a638f3c:
              if (puVar14 == (undefined *)0x0) {
                (**(code **)(*ppuVar19 + 0x10))(ppuVar19);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
              }
            }
          }
          else if (*(char *)(ppppppcVar7 + 0xc) == '\x02') {
            unaff_x20 = ppppppcVar7 + 4;
            FUN_10a688b40();
            ppuVar6 = ppuStack_118;
            if (unaff_x20 == (code ******)0x0) {
              param_2 = (code ******)0x0;
              if (ppppppcVar8 != (code ******)0x0) {
                ppppcStack_b0 = (code ****)ppppppcVar7[4];
                ppppcStack_a8 = (code ****)ppppppcVar7[5];
                if ((code *****)ppppcStack_a8 != (code *****)0x0) {
                  pppppcVar12 = (code *****)(ppppcStack_a8 + 1);
                  do {
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(pppppcVar12,0x10);
                    if (bVar2) {
                      *pppppcVar12 = (code ****)((long)*pppppcVar12 + 1);
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                }
                pppppcStack_d0 = pppppcStack_120;
                ppuStack_c8 = ppuStack_118;
                if (ppuStack_118 == (undefined **)0x0) {
                  ppuStack_98 = (undefined **)0x0;
                }
                else {
                  ppuVar19 = ppuStack_118 + 1;
                  do {
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
                    if (bVar2) {
                      *ppuVar19 = *ppuVar19 + 1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  ppuStack_98 = ppuStack_118;
                  do {
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
                    if (bVar2) {
                      *ppuVar19 = *ppuVar19 + 1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                }
                pppppcStack_a0 = pppppcStack_120;
                ppuStack_b8 = &PTR_FUN_110c01350;
                ppuStack_d8 = (undefined **)0x0;
                uStack_e0 = 0;
                pppppcStack_c0 = (code *****)FUN_10a63937c;
                param_2 = &pppppcStack_c0;
                FUN_10a4634ec(ppppppcVar8);
                (*(code *)*ppuStack_b8)(&ppuStack_b8);
                if (ppuVar6 != (undefined **)0x0) {
                  ppuVar19 = ppuVar6 + 1;
                  do {
                    puVar14 = *ppuVar19;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
                    if (bVar2) {
                      *ppuVar19 = puVar14 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (puVar14 == (undefined *)0x0) {
                    (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
                  }
                }
                if (ppuStack_d8 != (undefined **)0x0) {
                  ppuVar6 = ppuStack_d8 + 1;
                  do {
                    puVar14 = *ppuVar6;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                    if (bVar2) {
                      *ppuVar6 = puVar14 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                    ppuVar19 = ppuStack_d8;
                  } while (cVar1 != '\0');
                  goto LAB_10a638f3c;
                }
              }
            }
            else {
              *unaff_x20 = (code *****)
                           CONCAT44((int)((ulong)*unaff_x20 >> 0x20) + 1,(int)*unaff_x20 + 1);
              param_2 = &pppppcStack_120;
              FUN_10a639178(ppppppcVar7[4]);
              iVar3 = *(int *)((long)unaff_x20 + 4) + -1;
              *(int *)((long)unaff_x20 + 4) = iVar3;
              if (iVar3 == 0) {
                *(undefined4 *)unaff_x20 = 0;
              }
            }
          }
        }
        ppuVar6 = ppuStack_118;
        ppppppcVar7 = (code ******)*ppppppcVar7;
      } while (ppppppcVar7 != (code ******)0x0);
      param_1 = &puStack_110;
      FUN_10a58047c();
      if (ppuVar6 == (undefined **)0x0) goto LAB_10a639098;
    }
    ppuVar19 = ppuVar6 + 1;
    do {
      puVar14 = *ppuVar19;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
      if (bVar2) {
        *ppuVar19 = puVar14 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar14 == (undefined *)0x0) {
      (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_1 = ppuVar6;
    }
  }
LAB_10a639098:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b8)(unaff_x23 + 1);
  FUN_10a639434(unaff_x22 + 2);
  func_0x00010a004dac(&uStack_e0);
  FUN_10a58047c(&puStack_110);
  FUN_10a639434(&pppppcStack_120);
  ppuVar6 = param_1;
  __Unwind_Resume();
  pcStack_128 = FUN_10a639178;
  puStack_150 = unaff_x22;
  puStack_148 = unaff_x21;
  pppppcStack_140 = (code *****)unaff_x20;
  ppuStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&ppppcStack_180,ppuVar6 + 1,*ppuVar6);
  func_0x000109884820(&ppcStack_1a8,&ppppcStack_180,*ppuVar6);
  if (ppppcStack_180 != (code ****)0x0) {
    (*(code *)**ppppcStack_180)();
  }
  (**(code **)(*(long *)*ppuVar6 + 0x30))(&puStack_1b0);
  plVar20 = (long *)*ppuVar6;
  ppppcStack_178 = (code ****)param_2[1];
  ppppcStack_180 = (code ****)*param_2;
  if (param_2[1] != (code *****)0x0) {
    pppppcVar12 = param_2[1] + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppppcVar12,0x10);
      if (bVar2) {
        *pppppcVar12 = (code ****)((long)*pppppcVar12 + 1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuStack_160 = &PTR_DAT_110bffcc0;
  func_0x000109899de4(aiStack_190,plVar20,&ppppcStack_180,&ppuStack_160,0,0);
  ppppcVar5 = ppppcStack_178;
  if ((code *****)ppppcStack_178 != (code *****)0x0) {
    pppppcVar12 = (code *****)(ppppcStack_178 + 1);
    do {
      ppppcVar15 = *pppppcVar12;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppppcVar12,0x10);
      if (bVar2) {
        *pppppcVar12 = (code ****)((long)ppppcVar15 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (ppppcVar15 == (code ****)0x0) {
      (*(code *)(*ppppcStack_178)[2])(ppppcStack_178);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppcVar5);
    }
  }
  uStack_158 = 1;
  ppuStack_160 = (undefined **)aiStack_190;
  (**(code **)(*plVar20 + 0x58))(plVar20);
  ppppcStack_180 = (code ****)&ppcStack_1a8;
  ppppcStack_178 = (code ****)plVar20;
  puStack_170 = (undefined1 *)&puStack_1b0;
  pppuStack_168 = &ppuStack_160;
  func_0x0001098960c0(aiStack_1a0);
  if ((3 < aiStack_1a0[0]) && (puStack_198 != (undefined8 *)0x0)) {
    (**(code **)*puStack_198)();
  }
  if ((3 < aiStack_190[0]) && (puStack_188 != (undefined8 *)0x0)) {
    (**(code **)*puStack_188)();
  }
  if (puStack_1b0 != (undefined8 *)0x0) {
    (**(code **)*puStack_1b0)();
  }
  if ((code ***)ppcStack_1a8 != (code ***)0x0) {
    (**(code **)*ppcStack_1a8)();
  }
  return;
}



/* Entry: 10a639178; end: 10a63937b;  */

void FUN_10a639178(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110bffcc0;
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



/* Entry: 10a63937c; end: 10a63938b;  */

void FUN_10a63937c(long param_1)

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
  ppuStack_40 = &PTR_DAT_110bffcc0;
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



/* Entry: 10a63938c; end: 10a6393b3;  */

long FUN_10a63938c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a639434(param_1 + 0x18);
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



/* Entry: 10a6393b4; end: 10a639403;  */

void FUN_10a6393b4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c01350;
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



/* Entry: 10a639404; end: 10a639423;  */

void FUN_10a639404(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c01378;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a639424; end: 10a639433;  */

void FUN_10a639424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a63942c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a639434; end: 10a63948b;  */

long FUN_10a639434(long param_1)

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



/* Entry: 10a63948c; end: 10a6394bf;  */

void FUN_10a63948c(void)

{
  return;
}



/* Entry: 10a6394c0; end: 10a639617;  */

void FUN_10a6394c0(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  
  lVar9 = *(long *)(param_2 + 0x10);
  if ((*(ushort *)(lVar9 + 0x180) >> 4 & 1) == 0) {
    lStack_78 = 0;
    plStack_70 = (long *)0x0;
    plStack_68 = (long *)0x0;
    plVar5 = *(long **)(param_1 + 0x28);
    for (plVar4 = *(long **)(param_1 + 0x20); plVar4 != plVar5; plVar4 = plVar4 + 1) {
      if (plStack_70 < plStack_68) {
        plVar11 = plStack_70 + 1;
        *plStack_70 = *plVar4;
      }
      else {
        lVar10 = (long)plStack_70 - lStack_78;
        uVar1 = (lVar10 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_10a050828();
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6395f4);
          (*pcVar6)();
        }
        uVar8 = (long)plStack_68 - lStack_78 >> 2;
        if (uVar8 <= uVar1) {
          uVar8 = uVar1;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)plStack_68 - lStack_78)) {
          uVar8 = 0x1fffffffffffffff;
        }
        plVar7 = &lStack_78;
        FUN_10a05083c();
        plVar2 = (long *)((long)plVar7 + lVar10);
        plVar11 = plVar2 + 1;
        *plVar2 = *plVar4;
        lVar10 = (long)plVar2 - ((long)plStack_70 - lStack_78);
        _memcpy(lVar10);
        bVar3 = lStack_78 != 0;
        lStack_78 = lVar10;
        plStack_68 = plVar7 + uVar8;
        if (bVar3) {
          plStack_70 = plVar11;
          __ZdlPv();
        }
      }
      plStack_70 = plVar11;
    }
    FUN_10a639618(*(undefined4 *)(param_1 + 0x38),lVar9,&lStack_78);
    if (lStack_78 != 0) {
      plStack_70 = (long *)lStack_78;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a639618; end: 10a639d13;  */

void FUN_10a639618(undefined4 param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  code *pcVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined1 uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  undefined **ppuVar20;
  long lVar21;
  undefined **ppuVar22;
  long *plVar23;
  ulong unaff_x27;
  undefined *puVar24;
  undefined *puVar25;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
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
  ppuVar7 = (undefined **)0x50;
  __Znwm();
  ppuVar20 = ppuVar7 + 1;
  *ppuVar20 = (undefined *)0x0;
  ppuVar7[2] = (undefined *)0x0;
  *ppuVar7 = (undefined *)&PTR_FUN_110c013e8;
  ppuVar22 = ppuVar7 + 3;
  *ppuVar22 = (undefined *)&PTR_DAT_110bfbc88;
  puVar10 = (undefined *)param_3[2];
  puVar25 = (undefined *)param_3[1];
  puVar24 = (undefined *)*param_3;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  ppuVar7[4] = (undefined *)0x0;
  ppuVar7[5] = (undefined *)0x0;
  *(undefined4 *)(ppuVar7 + 6) = param_1;
  ppuVar7[8] = puVar25;
  ppuVar7[7] = puVar24;
  ppuVar7[9] = puVar10;
  puVar11 = *(undefined8 **)(param_2 + 0x540);
  ppuStack_120 = ppuVar22;
  ppuStack_118 = ppuVar7;
  if (puVar11 < *(undefined8 **)(param_2 + 0x548)) {
    *puVar11 = ppuVar22;
    puVar11[1] = ppuVar7;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
      if (bVar3) {
        *ppuVar20 = *ppuVar20 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar11 = puVar11 + 2;
LAB_10a639770:
    *(undefined8 **)(param_2 + 0x540) = puVar11;
    lVar21 = *(long *)(param_2 + 0x2b8);
    uStack_108 = 0;
    lStack_110 = 0;
    lStack_f8 = 0;
    plStack_100 = (long *)0x0;
    fStack_f0 = *(float *)(lVar21 + 0x38);
    FUN_10a62efdc(&lStack_110,*(undefined8 *)(lVar21 + 0x20));
    plVar23 = *(long **)(lVar21 + 0x28);
    if (plVar23 != (long *)0x0) {
      do {
        uVar15 = uStack_108;
        uVar12 = plVar23[2];
        uVar17 = ((ulong)(uint)((int)uVar12 << 3) + 8 ^ uVar12 >> 0x20) * -0x622015f714c7d297;
        uVar17 = (uVar12 >> 0x20 ^ uVar17 >> 0x2f ^ uVar17) * -0x622015f714c7d297;
        uVar17 = (uVar17 ^ uVar17 >> 0x2f) * -0x622015f714c7d297;
        if (uStack_108 != 0) {
          uVar14 = uStack_108 - 1;
          if ((uStack_108 & uVar14) == 0) {
            unaff_x27 = uVar17 & uVar14;
          }
          else {
            unaff_x27 = uVar17;
            if (uStack_108 <= uVar17) {
              uVar19 = 0;
              if (uStack_108 != 0) {
                uVar19 = uVar17 / uStack_108;
              }
              unaff_x27 = uVar17 - uVar19 * uStack_108;
            }
          }
          plVar18 = *(long **)(lStack_110 + unaff_x27 * 8);
          if (plVar18 != (long *)0x0) {
            do {
              while( true ) {
                plVar18 = (long *)*plVar18;
                if (plVar18 == (long *)0x0) goto LAB_10a639870;
                uVar19 = plVar18[1];
                if (uVar19 != uVar17) break;
                if (plVar18[2] == uVar12) goto LAB_10a6399d0;
              }
              if ((uStack_108 & uVar14) == 0) {
                uVar19 = uVar19 & uVar14;
              }
              else if (uStack_108 <= uVar19) {
                uVar5 = 0;
                if (uStack_108 != 0) {
                  uVar5 = uVar19 / uStack_108;
                }
                uVar19 = uVar19 - uVar5 * uStack_108;
              }
            } while (uVar19 == unaff_x27);
          }
        }
LAB_10a639870:
        plVar18 = (long *)0x68;
        __Znwm();
        *plVar18 = 0;
        plVar18[1] = uVar17;
        lVar13 = plVar23[3];
        lVar8 = plVar23[2];
        plVar18[3] = plVar23[3];
        plVar18[2] = lVar8;
        if (lVar13 != 0) {
          plVar16 = (long *)(lVar13 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar3) {
              *plVar16 = *plVar16 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_c0 = (undefined **)(plVar18 + 4);
        *(undefined1 *)(plVar18 + 0xc) = 3;
        if ((char)plVar23[0xc] == '\0') {
          uVar9 = 0;
        }
        else {
          FUN_10a005398(&ppuStack_c0,plVar23 + 4);
          uVar9 = (undefined1)plVar23[0xc];
        }
        *(undefined1 *)(plVar18 + 0xc) = uVar9;
        if ((uVar15 == 0) || (fStack_f0 * (float)uVar15 < (float)(lStack_f8 + 1))) {
          uVar12 = 1;
          if (2 < uVar15) {
            uVar12 = (ulong)((uVar15 & uVar15 - 1) != 0);
          }
          uVar12 = uVar12 | uVar15 << 1;
          uVar15 = (ulong)((float)(lStack_f8 + 1) / fStack_f0);
          if (uVar12 <= uVar15) {
            uVar12 = uVar15;
          }
          FUN_10a62efdc(&lStack_110,uVar12);
          uVar15 = uStack_108;
          if ((uStack_108 & uStack_108 - 1) == 0) {
            unaff_x27 = uStack_108 - 1 & uVar17;
          }
          else {
            unaff_x27 = uVar17;
            if (uStack_108 <= uVar17) {
              uVar12 = 0;
              if (uStack_108 != 0) {
                uVar12 = uVar17 / uStack_108;
              }
              unaff_x27 = uVar17 - uVar12 * uStack_108;
            }
          }
        }
        plVar16 = *(long **)(lStack_110 + unaff_x27 * 8);
        if (plVar16 == (long *)0x0) {
          *plVar18 = (long)plStack_100;
          *(long ***)(lStack_110 + unaff_x27 * 8) = &plStack_100;
          plStack_100 = plVar18;
          if (*plVar18 != 0) {
            uVar12 = *(ulong *)(*plVar18 + 8);
            if ((uVar15 & uVar15 - 1) == 0) {
              uVar12 = uVar12 & uVar15 - 1;
            }
            else if (uVar15 <= uVar12) {
              uVar17 = 0;
              if (uVar15 != 0) {
                uVar17 = uVar12 / uVar15;
              }
              uVar12 = uVar12 - uVar17 * uVar15;
            }
            *(long **)(lStack_110 + uVar12 * 8) = plVar18;
          }
        }
        else {
          *plVar18 = *plVar16;
          *plVar16 = (long)plVar18;
        }
        lStack_f8 = lStack_f8 + 1;
LAB_10a6399d0:
        plVar23 = (long *)*plVar23;
      } while (plVar23 != (long *)0x0);
    }
    plVar23 = plStack_100;
    if (plStack_100 == (long *)0x0) {
      FUN_10a57eb1c(&lStack_110);
      *(undefined1 *)(param_2 + 0x3d5) = 0;
LAB_10a639bec:
      ppuVar20 = ppuVar7 + 1;
      do {
        puVar10 = *ppuVar20;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
        if (bVar3) {
          *ppuVar20 = puVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar10 == (undefined *)0x0) {
        (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
      }
    }
    else {
      do {
        lVar8 = plVar23[2];
        lVar13 = lVar21 + 0x18;
        FUN_10a62f9ec();
        if (lVar13 != 0) {
          if ((char)plVar23[0xc] == '\x01') {
            pcVar6 = (code *)plVar23[4];
            ppuStack_b8 = ppuStack_118;
            ppuStack_c0 = ppuStack_120;
            if (ppuStack_118 != (undefined **)0x0) {
              ppuVar7 = ppuStack_118 + 1;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
                if (bVar3) {
                  *ppuVar7 = *ppuVar7 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            (*pcVar6)(&ppuStack_c0,plVar23 + 4);
            if (ppuStack_b8 != (undefined **)0x0) {
              ppuVar7 = ppuStack_b8 + 1;
              do {
                puVar10 = *ppuVar7;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
                if (bVar3) {
                  *ppuVar7 = puVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                ppuVar20 = ppuStack_b8;
              } while (cVar2 != '\0');
LAB_10a639ab0:
              if (puVar10 == (undefined *)0x0) {
                (**(code **)(*ppuVar20 + 0x10))(ppuVar20);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar20);
              }
            }
          }
          else if ((char)plVar23[0xc] == '\x02') {
            plVar18 = plVar23 + 4;
            FUN_10a688b40();
            ppuVar7 = ppuStack_118;
            if (plVar18 == (long *)0x0) {
              if (lVar8 != 0) {
                lStack_b0 = plVar23[4];
                lStack_a8 = plVar23[5];
                if (lStack_a8 != 0) {
                  plVar18 = (long *)(lStack_a8 + 8);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                    if (bVar3) {
                      *plVar18 = *plVar18 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                ppuStack_d0 = ppuStack_120;
                ppuStack_c8 = ppuStack_118;
                if (ppuStack_118 == (undefined **)0x0) {
                  ppuStack_98 = (undefined **)0x0;
                }
                else {
                  ppuVar20 = ppuStack_118 + 1;
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
                    if (bVar3) {
                      *ppuVar20 = *ppuVar20 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  ppuStack_98 = ppuStack_118;
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
                    if (bVar3) {
                      *ppuVar20 = *ppuVar20 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                ppuStack_a0 = ppuStack_120;
                ppuStack_b8 = &PTR_FUN_110c01428;
                ppuStack_d8 = (undefined **)0x0;
                uStack_e0 = 0;
                ppuStack_c0 = (undefined **)FUN_10a639f6c;
                FUN_10a4634ec(lVar8,&ppuStack_c0);
                (*(code *)*ppuStack_b8)(&ppuStack_b8);
                if (ppuVar7 != (undefined **)0x0) {
                  ppuVar20 = ppuVar7 + 1;
                  do {
                    puVar10 = *ppuVar20;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
                    if (bVar3) {
                      *ppuVar20 = puVar10 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (puVar10 == (undefined *)0x0) {
                    (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
                  }
                }
                if (ppuStack_d8 != (undefined **)0x0) {
                  ppuVar7 = ppuStack_d8 + 1;
                  do {
                    puVar10 = *ppuVar7;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
                    if (bVar3) {
                      *ppuVar7 = puVar10 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                    ppuVar20 = ppuStack_d8;
                  } while (cVar2 != '\0');
                  goto LAB_10a639ab0;
                }
              }
            }
            else {
              *plVar18 = CONCAT44((int)((ulong)*plVar18 >> 0x20) + 1,(int)*plVar18 + 1);
              FUN_10a639d68(plVar23[4],&ppuStack_120);
              iVar4 = *(int *)((long)plVar18 + 4) + -1;
              *(int *)((long)plVar18 + 4) = iVar4;
              if (iVar4 == 0) {
                *(undefined4 *)plVar18 = 0;
              }
            }
          }
        }
        ppuVar7 = ppuStack_118;
        plVar23 = (long *)*plVar23;
      } while (plVar23 != (long *)0x0);
      FUN_10a57eb1c(&lStack_110);
      *(undefined1 *)(param_2 + 0x3d5) = 0;
      if (ppuVar7 != (undefined **)0x0) goto LAB_10a639bec;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar21 = *(long *)(param_2 + 0x538);
    lVar13 = (long)puVar11 - lVar21;
    uVar15 = (lVar13 >> 4) + 1;
    if (uVar15 >> 0x3c == 0) {
      uVar17 = (long)*(undefined8 **)(param_2 + 0x548) - lVar21;
      uVar12 = (long)uVar17 >> 3;
      if (uVar12 <= uVar15) {
        uVar12 = uVar15;
      }
      if (0x7fffffffffffffef < uVar17) {
        uVar12 = 0xfffffffffffffff;
      }
      if (uVar12 >> 0x3c != 0) {
        func_0x000109ffded8();
        goto LAB_10a639c68;
      }
      lVar8 = uVar12 << 4;
      __Znwm();
      puVar1 = (undefined8 *)(lVar8 + lVar13);
      *puVar1 = ppuVar22;
      puVar1[1] = ppuVar7;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
        if (bVar3) {
          *ppuVar20 = *ppuVar20 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar11 = puVar1 + 2;
      _memcpy(puVar1 + (lVar13 >> 4) * -2,lVar21,lVar13);
      *(undefined8 **)(param_2 + 0x538) = puVar1 + (lVar13 >> 4) * -2;
      *(undefined8 **)(param_2 + 0x540) = puVar11;
      *(ulong *)(param_2 + 0x548) = lVar8 + uVar12 * 0x10;
      if (lVar21 != 0) {
        __ZdlPv(lVar21);
      }
      goto LAB_10a639770;
    }
  }
  FUN_10a639d54();
LAB_10a639c68:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a639c6c);
  (*pcVar6)();
}



/* Entry: 10a639d14; end: 10a639d23;  */

void FUN_10a639d14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c013e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a639d24; end: 10a639d43;  */

void FUN_10a639d24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c013e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a639d44; end: 10a639d53;  */

void FUN_10a639d44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a639d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a639d54; end: 10a639d67;  */

void FUN_10a639d54(undefined8 param_1,undefined8 *param_2)

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
  ppuStack_50 = &PTR_DAT_110bffc78;
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



/* Entry: 10a639d68; end: 10a639f6b;  */

void FUN_10a639d68(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110bffc78;
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



/* Entry: 10a639f6c; end: 10a639f7b;  */

void FUN_10a639f6c(long param_1)

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
  ppuStack_40 = &PTR_DAT_110bffc78;
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



/* Entry: 10a639f7c; end: 10a639fa3;  */

long FUN_10a639f7c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a580f10(param_1 + 0x18);
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



/* Entry: 10a639fa4; end: 10a63a017;  */

void FUN_10a639fa4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c01428;
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



/* Entry: 10a63a018; end: 10a63a04f;  */

void FUN_10a63a018(long param_1,long param_2)

{
  undefined8 uStack_18;
  
  if ((*(ushort *)(*(long *)(param_2 + 0x10) + 0x180) >> 4 & 1) == 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x14);
    FUN_10a63a050(*(long *)(param_2 + 0x10),&uStack_18);
  }
  return;
}



/* Entry: 10a63a050; end: 10a63a6ef;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a63a050(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  code *******pppppppcVar6;
  code ******ppppppcVar7;
  code *******pppppppcVar8;
  undefined1 uVar9;
  code ****ppppcVar10;
  long lVar11;
  code *pcVar12;
  code *******pppppppcVar13;
  code *****pppppcVar14;
  ulong uVar15;
  code *****pppppcVar16;
  code *****pppppcVar17;
  ulong uVar18;
  ulong uVar19;
  code ******ppppppcVar20;
  ulong uVar21;
  code *******pppppppcVar22;
  code ******ppppppcVar23;
  ulong uVar24;
  long lVar25;
  code *******pppppppcVar26;
  long *plVar27;
  undefined8 *puVar28;
  code *******unaff_x24;
  code ******ppppppcVar29;
  code *****unaff_x26;
  code *****pppppcVar30;
  code *******pppppppcStack_120;
  code *******pppppppcStack_118;
  code ******ppppppcStack_110;
  code *****pppppcStack_108;
  code ******ppppppcStack_100;
  long lStack_f8;
  float fStack_f0;
  undefined8 uStack_e0;
  code *******pppppppcStack_d8;
  code *******pppppppcStack_d0;
  code *******pppppppcStack_c8;
  code *******pppppppcStack_c0;
  code *******pppppppcStack_b8;
  code *****pppppcStack_b0;
  code *****pppppcStack_a8;
  code *******pppppppcStack_a0;
  code *******pppppppcStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 0x3d6) = 0;
  FUN_10a1f2004(param_1 + 0x5c8);
  lVar25 = *(long *)(param_1 + 0x368);
  pppppppcVar6 = (code *******)0x38;
  __Znwm();
  pppppppcVar6[1] = (code ******)0x0;
  pppppppcVar6[2] = (code ******)0x0;
  *pppppppcVar6 = (code ******)&PTR_DAT_110c01488;
  pppppppcVar6[4] = (code ******)0x0;
  pppppppcVar6[5] = (code ******)0x0;
  pppppppcStack_120 = pppppppcVar6 + 3;
  *pppppppcStack_120 = (code ******)&PTR_DAT_110bfbe98;
  pppppppcVar6[6] = (code ******)*param_2;
  pppppcStack_108 = (code *****)0x0;
  ppppppcStack_110 = (code ******)0x0;
  lStack_f8 = 0;
  ppppppcStack_100 = (code ******)0x0;
  fStack_f0 = *(float *)(lVar25 + 0x38);
  pppppppcVar8 = *(code ********)(lVar25 + 0x20);
  pppppppcStack_118 = pppppppcVar6;
  FUN_10a63a6f0(&ppppppcStack_110);
  plVar27 = *(long **)(lVar25 + 0x28);
  if (plVar27 != (long *)0x0) {
    unaff_x24 = &ppppppcStack_100;
    do {
      pppppcVar14 = pppppcStack_108;
      ppppcVar10 = (code ****)plVar27[2];
      uVar15 = ((ulong)(uint)((int)ppppcVar10 << 3) + 8 ^ (ulong)ppppcVar10 >> 0x20) *
               -0x622015f714c7d297;
      uVar15 = ((ulong)ppppcVar10 >> 0x20 ^ uVar15 >> 0x2f ^ uVar15) * -0x622015f714c7d297;
      pppppcVar30 = (code *****)((uVar15 ^ uVar15 >> 0x2f) * -0x622015f714c7d297);
      if (pppppcStack_108 != (code *****)0x0) {
        pcVar12 = (code *)((long)pppppcStack_108 - 1);
        if (((ulong)pppppcStack_108 & (ulong)pcVar12) == 0) {
          unaff_x26 = (code *****)((ulong)pppppcVar30 & (ulong)pcVar12);
        }
        else {
          unaff_x26 = pppppcVar30;
          if (pppppcStack_108 <= pppppcVar30) {
            uVar15 = 0;
            if (pppppcStack_108 != (code *****)0x0) {
              uVar15 = (ulong)pppppcVar30 / (ulong)pppppcStack_108;
            }
            unaff_x26 = (code *****)((long)pppppcVar30 - uVar15 * (long)pppppcStack_108);
          }
        }
        pppppcVar16 = ppppppcStack_110[(long)unaff_x26];
        if (pppppcVar16 != (code *****)0x0) {
          do {
            while( true ) {
              pppppcVar16 = (code *****)*pppppcVar16;
              if (pppppcVar16 == (code *****)0x0) goto LAB_10a63a1cc;
              pppppcVar17 = (code *****)pppppcVar16[1];
              if (pppppcVar17 != pppppcVar30) break;
              if (pppppcVar16[2] == ppppcVar10) goto LAB_10a63a32c;
            }
            if (((ulong)pppppcStack_108 & (ulong)pcVar12) == 0) {
              pppppcVar17 = (code *****)((ulong)pppppcVar17 & (ulong)pcVar12);
            }
            else if (pppppcStack_108 <= pppppcVar17) {
              uVar15 = 0;
              if (pppppcStack_108 != (code *****)0x0) {
                uVar15 = (ulong)pppppcVar17 / (ulong)pppppcStack_108;
              }
              pppppcVar17 = (code *****)((long)pppppcVar17 - uVar15 * (long)pppppcStack_108);
            }
          } while (pppppcVar17 == unaff_x26);
        }
      }
LAB_10a63a1cc:
      ppppppcVar29 = (code ******)0x68;
      __Znwm();
      *ppppppcVar29 = (code *****)0x0;
      ppppppcVar29[1] = pppppcVar30;
      lVar11 = plVar27[3];
      pppppcVar16 = (code *****)plVar27[2];
      ppppppcVar29[3] = (code *****)plVar27[3];
      ppppppcVar29[2] = pppppcVar16;
      if (lVar11 != 0) {
        plVar1 = (long *)(lVar11 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pppppppcStack_c0 = (code *******)(ppppppcVar29 + 4);
      *(undefined1 *)(ppppppcVar29 + 0xc) = 3;
      if ((char)plVar27[0xc] == '\0') {
        uVar9 = 0;
      }
      else {
        pppppppcVar8 = (code *******)(plVar27 + 4);
        FUN_10a005398(&pppppppcStack_c0);
        uVar9 = (undefined1)plVar27[0xc];
      }
      *(undefined1 *)(ppppppcVar29 + 0xc) = uVar9;
      if ((pppppcVar14 == (code *****)0x0) ||
         (fStack_f0 * (float)pppppcVar14 < (float)(lStack_f8 + 1))) {
        uVar15 = 1;
        if ((code *****)0x2 < pppppcVar14) {
          uVar15 = (ulong)(((ulong)pppppcVar14 & (ulong)((long)pppppcVar14 - 1U)) != 0);
        }
        pppppppcVar8 = (code *******)(uVar15 | (long)pppppcVar14 << 1);
        pppppppcVar13 = (code *******)(long)((float)(lStack_f8 + 1) / fStack_f0);
        if (pppppppcVar8 <= pppppppcVar13) {
          pppppppcVar8 = pppppppcVar13;
        }
        FUN_10a63a6f0(&ppppppcStack_110);
        pppppcVar14 = pppppcStack_108;
        if (((ulong)pppppcStack_108 & (long)pppppcStack_108 - 1U) == 0) {
          unaff_x26 = (code *****)((ulong)((long)pppppcStack_108 - 1U) & (ulong)pppppcVar30);
        }
        else {
          unaff_x26 = pppppcVar30;
          if (pppppcStack_108 <= pppppcVar30) {
            uVar15 = 0;
            if (pppppcStack_108 != (code *****)0x0) {
              uVar15 = (ulong)pppppcVar30 / (ulong)pppppcStack_108;
            }
            unaff_x26 = (code *****)((long)pppppcVar30 - uVar15 * (long)pppppcStack_108);
          }
        }
      }
      pppppcVar30 = ppppppcStack_110[(long)unaff_x26];
      if (pppppcVar30 == (code *****)0x0) {
        *ppppppcVar29 = (code *****)ppppppcStack_100;
        ppppppcStack_110[(long)unaff_x26] = (code *****)unaff_x24;
        ppppppcStack_100 = ppppppcVar29;
        if (*ppppppcVar29 != (code *****)0x0) {
          pppppcVar30 = (code *****)(*ppppppcVar29)[1];
          if (((ulong)pppppcVar14 & (long)pppppcVar14 - 1U) == 0) {
            pppppcVar30 = (code *****)((ulong)pppppcVar30 & (ulong)((long)pppppcVar14 - 1U));
          }
          else if (pppppcVar14 <= pppppcVar30) {
            uVar15 = 0;
            if (pppppcVar14 != (code *****)0x0) {
              uVar15 = (ulong)pppppcVar30 / (ulong)pppppcVar14;
            }
            pppppcVar30 = (code *****)((long)pppppcVar30 - uVar15 * (long)pppppcVar14);
          }
          ppppppcStack_110[(long)pppppcVar30] = (code *****)ppppppcVar29;
        }
      }
      else {
        *ppppppcVar29 = (code *****)*pppppcVar30;
        *pppppcVar30 = (code ****)ppppppcVar29;
      }
      lStack_f8 = lStack_f8 + 1;
LAB_10a63a32c:
      plVar27 = (long *)*plVar27;
    } while (plVar27 != (long *)0x0);
  }
  puVar28 = (undefined8 *)0x0;
  if (ppppppcStack_100 == (code ******)0x0) {
    pppppppcVar13 = &ppppppcStack_110;
    FUN_10a580e00();
  }
  else {
    puVar28 = &uStack_e0;
    unaff_x24 = (code *******)&pppppppcStack_c0;
    ppppppcVar29 = ppppppcStack_100;
    do {
      uVar15 = *(ulong *)(lVar25 + 0x20);
      if (uVar15 != 0) {
        pppppcVar14 = ppppppcVar29[2];
        uVar18 = ((ulong)(uint)((int)pppppcVar14 << 3) + 8 ^ (ulong)pppppcVar14 >> 0x20) *
                 -0x622015f714c7d297;
        uVar18 = ((ulong)pppppcVar14 >> 0x20 ^ uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
        uVar18 = (uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297;
        uVar19 = uVar15 - 1;
        if ((uVar15 & uVar19) == 0) {
          uVar21 = uVar18 & uVar19;
        }
        else {
          uVar21 = uVar18;
          if (uVar15 <= uVar18) {
            uVar21 = 0;
            if (uVar15 != 0) {
              uVar21 = uVar18 / uVar15;
            }
            uVar21 = uVar18 - uVar21 * uVar15;
          }
        }
        plVar27 = *(long **)(*(long *)(lVar25 + 0x18) + uVar21 * 8);
        if (plVar27 != (long *)0x0) {
LAB_10a63a3c0:
          while (plVar27 = (long *)*plVar27, plVar27 != (long *)0x0) {
            uVar24 = plVar27[1];
            if (uVar24 != uVar18) goto LAB_10a63a3e4;
            if ((code *****)plVar27[2] == pppppcVar14) {
              if (*(char *)(ppppppcVar29 + 0xc) == '\x01') {
                pppppcVar14 = ppppppcVar29[4];
                pppppppcStack_b8 = pppppppcStack_118;
                pppppppcStack_c0 = pppppppcStack_120;
                if (pppppppcStack_118 != (code *******)0x0) {
                  pppppppcVar8 = pppppppcStack_118 + 1;
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(pppppppcVar8,0x10);
                    if (bVar3) {
                      *pppppppcVar8 = (code ******)((long)*pppppppcVar8 + 1);
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                pppppppcVar8 = (code *******)(ppppppcVar29 + 4);
                (*(code *)pppppcVar14)(&pppppppcStack_c0);
                if (pppppppcStack_b8 != (code *******)0x0) {
                  pppppppcVar6 = pppppppcStack_b8 + 1;
                  do {
                    ppppppcVar7 = *pppppppcVar6;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(pppppppcVar6,0x10);
                    if (bVar3) {
                      *pppppppcVar6 = (code ******)((long)ppppppcVar7 + -1);
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                    pppppppcVar13 = pppppppcStack_b8;
                  } while (cVar2 != '\0');
                  goto LAB_10a63a4b4;
                }
              }
              else if (*(char *)(ppppppcVar29 + 0xc) == '\x02') {
                ppppppcVar7 = ppppppcVar29 + 4;
                FUN_10a688b40();
                pppppppcVar6 = pppppppcStack_118;
                if (ppppppcVar7 == (code ******)0x0) {
                  if (pppppppcVar8 != (code *******)0x0) {
                    pppppcStack_b0 = ppppppcVar29[4];
                    pppppcStack_a8 = ppppppcVar29[5];
                    if (pppppcStack_a8 != (code *****)0x0) {
                      pppppcVar14 = pppppcStack_a8 + 1;
                      do {
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(pppppcVar14,0x10);
                        if (bVar3) {
                          *pppppcVar14 = (code ****)((long)*pppppcVar14 + 1);
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                    }
                    pppppppcStack_d0 = pppppppcStack_120;
                    pppppppcStack_c8 = pppppppcStack_118;
                    if (pppppppcStack_118 == (code *******)0x0) {
                      pppppppcStack_98 = (code *******)0x0;
                    }
                    else {
                      pppppppcVar13 = pppppppcStack_118 + 1;
                      do {
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(pppppppcVar13,0x10);
                        if (bVar3) {
                          *pppppppcVar13 = (code ******)((long)*pppppppcVar13 + 1);
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      pppppppcStack_98 = pppppppcStack_118;
                      do {
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(pppppppcVar13,0x10);
                        if (bVar3) {
                          *pppppppcVar13 = (code ******)((long)*pppppppcVar13 + 1);
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                    }
                    pppppppcStack_a0 = pppppppcStack_120;
                    pppppppcStack_b8 = (code *******)&PTR_FUN_110c01460;
                    pppppppcStack_d8 = (code *******)0x0;
                    uStack_e0 = 0;
                    pppppppcStack_c0 = (code *******)FUN_10a63ab14;
                    pppppppcVar13 = (code *******)&pppppppcStack_c0;
                    FUN_10a4634ec(pppppppcVar8);
                    (*(code *)*pppppppcStack_b8)(&pppppppcStack_b8);
                    if (pppppppcVar6 != (code *******)0x0) {
                      pppppppcVar8 = pppppppcVar6 + 1;
                      do {
                        ppppppcVar7 = *pppppppcVar8;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(pppppppcVar8,0x10);
                        if (bVar3) {
                          *pppppppcVar8 = (code ******)((long)ppppppcVar7 + -1);
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (ppppppcVar7 == (code ******)0x0) {
                        (*(code *)(*pppppppcVar6)[2])(pppppppcVar6);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar6);
                      }
                    }
                    pppppppcVar8 = pppppppcVar13;
                    if (pppppppcStack_d8 != (code *******)0x0) {
                      pppppppcVar6 = pppppppcStack_d8 + 1;
                      do {
                        ppppppcVar7 = *pppppppcVar6;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(pppppppcVar6,0x10);
                        if (bVar3) {
                          *pppppppcVar6 = (code ******)((long)ppppppcVar7 + -1);
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                        pppppppcVar13 = pppppppcStack_d8;
                      } while (cVar2 != '\0');
LAB_10a63a4b4:
                      if (ppppppcVar7 == (code ******)0x0) {
                        (*(code *)(*pppppppcVar13)[2])(pppppppcVar13);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar13);
                      }
                    }
                  }
                }
                else {
                  *ppppppcVar7 = (code *****)
                                 CONCAT44((int)((ulong)*ppppppcVar7 >> 0x20) + 1,
                                          (int)*ppppppcVar7 + 1);
                  pppppppcVar8 = (code *******)&pppppppcStack_120;
                  FUN_10a63a910(ppppppcVar29[4]);
                  iVar4 = *(int *)((long)ppppppcVar7 + 4) + -1;
                  *(int *)((long)ppppppcVar7 + 4) = iVar4;
                  if (iVar4 == 0) {
                    *(undefined4 *)ppppppcVar7 = 0;
                  }
                }
              }
              break;
            }
          }
        }
      }
LAB_10a63a5bc:
      pppppppcVar6 = pppppppcStack_118;
      ppppppcVar29 = (code ******)*ppppppcVar29;
    } while (ppppppcVar29 != (code ******)0x0);
    pppppppcVar13 = &ppppppcStack_110;
    FUN_10a580e00();
    if (pppppppcVar6 == (code *******)0x0) goto LAB_10a63a610;
  }
  pppppppcVar22 = pppppppcVar6 + 1;
  do {
    ppppppcVar29 = *pppppppcVar22;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pppppppcVar22,0x10);
    if (bVar3) {
      *pppppppcVar22 = (code ******)((long)ppppppcVar29 + -1);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (ppppppcVar29 == (code ******)0x0) {
    (*(code *)(*pppppppcVar6)[2])(pppppppcVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    pppppppcVar13 = pppppppcVar6;
  }
LAB_10a63a610:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*pppppppcStack_b8)(unaff_x24 + 1);
  FUN_10a63abcc(puVar28 + 2);
  func_0x00010a004dac(&uStack_e0);
  FUN_10a580e00(&ppppppcStack_110);
  FUN_10a63abcc(&pppppppcStack_120);
  __Unwind_Resume();
  pppppppcVar6 = pppppppcVar13;
  pppppppcVar22 = pppppppcVar8;
  if ((long)pppppppcVar8 - 1U == 0) {
    pppppppcVar8 = (code *******)0x2;
  }
  else if (((ulong)pppppppcVar8 & (long)pppppppcVar8 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    pppppppcVar6 = pppppppcVar8;
  }
  pppppppcVar26 = (code *******)pppppppcVar13[1];
  if (pppppppcVar26 > pppppppcVar8 || pppppppcVar8 == pppppppcVar26) {
    if (pppppppcVar26 <= pppppppcVar8) {
      return;
    }
    pppppppcVar6 = (code *******)(long)((float)pppppppcVar13[3] / *(float *)(pppppppcVar13 + 4));
    if ((pppppppcVar26 < (code *******)0x3) ||
       (((ulong)pppppppcVar26 & (long)pppppppcVar26 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((code *******)0x1 < pppppppcVar6) {
      pppppppcVar6 = (code *******)(1L << (-LZCOUNT((long)pppppppcVar6 + -1) & 0x3fU));
    }
    if (pppppppcVar8 <= pppppppcVar6) {
      pppppppcVar8 = pppppppcVar6;
    }
    if (pppppppcVar26 <= pppppppcVar8) {
      return;
    }
    if (pppppppcVar8 == (code *******)0x0) {
      ppppppcVar29 = *pppppppcVar13;
      *pppppppcVar13 = (code ******)0x0;
      if (ppppppcVar29 != (code ******)0x0) {
        __ZdlPv();
      }
      pppppppcVar13[1] = (code ******)0x0;
      return;
    }
  }
  if ((ulong)pppppppcVar8 >> 0x3d == 0) {
    ppppppcVar29 = (code ******)((long)pppppppcVar8 << 3);
    __Znwm();
    ppppppcVar7 = *pppppppcVar13;
    *pppppppcVar13 = ppppppcVar29;
    if (ppppppcVar7 != (code ******)0x0) {
      __ZdlPv();
    }
    pppppppcVar6 = (code *******)0x0;
    pppppppcVar13[1] = (code ******)pppppppcVar8;
    do {
      (*pppppppcVar13)[(long)pppppppcVar6] = (code *****)0x0;
      pppppppcVar6 = (code *******)((long)pppppppcVar6 + 1);
    } while (pppppppcVar8 != pppppppcVar6);
    ppppppcVar29 = pppppppcVar13[2];
    if (ppppppcVar29 != (code ******)0x0) {
      pppppppcVar6 = (code *******)ppppppcVar29[1];
      uVar15 = (long)pppppppcVar8 - 1;
      if (((ulong)pppppppcVar8 & uVar15) == 0) {
        pppppppcVar6 = (code *******)((ulong)pppppppcVar6 & uVar15);
      }
      else if (pppppppcVar8 <= pppppppcVar6) {
        uVar18 = 0;
        if (pppppppcVar8 != (code *******)0x0) {
          uVar18 = (ulong)pppppppcVar6 / (ulong)pppppppcVar8;
        }
        pppppppcVar6 = (code *******)((long)pppppppcVar6 - uVar18 * (long)pppppppcVar8);
      }
      (*pppppppcVar13)[(long)pppppppcVar6] = (code *****)(pppppppcVar13 + 2);
      ppppppcVar7 = (code ******)*ppppppcVar29;
      while (ppppppcVar7 != (code ******)0x0) {
        pppppppcVar22 = (code *******)ppppppcVar7[1];
        if (((ulong)pppppppcVar8 & uVar15) == 0) {
          pppppppcVar22 = (code *******)((ulong)pppppppcVar22 & uVar15);
        }
        else if (pppppppcVar8 <= pppppppcVar22) {
          uVar18 = 0;
          if (pppppppcVar8 != (code *******)0x0) {
            uVar18 = (ulong)pppppppcVar22 / (ulong)pppppppcVar8;
          }
          pppppppcVar22 = (code *******)((long)pppppppcVar22 - uVar18 * (long)pppppppcVar8);
        }
        ppppppcVar20 = ppppppcVar7;
        if (pppppppcVar22 != pppppppcVar6) {
          ppppppcVar23 = *pppppppcVar13;
          if (ppppppcVar23[(long)pppppppcVar22] == (code *****)0x0) {
            ppppppcVar23[(long)pppppppcVar22] = (code *****)ppppppcVar29;
            pppppppcVar6 = pppppppcVar22;
          }
          else {
            *ppppppcVar29 = *ppppppcVar7;
            *ppppppcVar7 = (code *****)*ppppppcVar23[(long)pppppppcVar22];
            *ppppppcVar23[(long)pppppppcVar22] = (code ****)ppppppcVar7;
            ppppppcVar20 = ppppppcVar29;
          }
        }
        ppppppcVar29 = ppppppcVar20;
        ppppppcVar7 = (code ******)*ppppppcVar20;
      }
    }
    return;
  }
  func_0x000109ffded8();
  if (((ulong)pppppppcVar6 & 1) != 0) {
    if (3 < (ulong)*(byte *)(pppppppcVar22 + 0xc)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10a63a910);
      (*pcVar12)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(pppppppcVar22 + 0xc)])(pppppppcVar22 + 4);
    FUN_10a004978(pppppppcVar22 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(pppppppcVar22);
  return;
LAB_10a63a3e4:
  if ((uVar15 & uVar19) == 0) {
    uVar24 = uVar24 & uVar19;
  }
  else if (uVar15 <= uVar24) {
    uVar5 = 0;
    if (uVar15 != 0) {
      uVar5 = uVar24 / uVar15;
    }
    uVar24 = uVar24 - uVar5 * uVar15;
  }
  if (uVar24 != uVar21) goto LAB_10a63a5bc;
  goto LAB_10a63a3c0;
}



/* Entry: 10a63a6f0; end: 10a63a8bf;  */

void FUN_10a63a6f0(long *param_1,long *param_2)

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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a63a910);
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



/* Entry: 10a63a8c0; end: 10a63a90f;  */

void FUN_10a63a8c0(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a63a910);
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



/* Entry: 10a63a910; end: 10a63ab13;  */

void FUN_10a63a910(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110bffd08;
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



/* Entry: 10a63ab14; end: 10a63ab23;  */

void FUN_10a63ab14(long param_1)

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
  ppuStack_40 = &PTR_DAT_110bffd08;
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



/* Entry: 10a63ab24; end: 10a63ab4b;  */

long FUN_10a63ab24(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a63abcc(param_1 + 0x18);
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



/* Entry: 10a63ab4c; end: 10a63ab9b;  */

void FUN_10a63ab4c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c01460;
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



/* Entry: 10a63ab9c; end: 10a63abbb;  */

void FUN_10a63ab9c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c01488;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a63abbc; end: 10a63abcb;  */

void FUN_10a63abbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a63abc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a63abcc; end: 10a63ac23;  */

long FUN_10a63abcc(long param_1)

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



/* Entry: 10a63ac24; end: 10a63ac67;  */

void FUN_10a63ac24(void)

{
  return;
}



/* Entry: 10a63ac68; end: 10a63ac87;  */

void FUN_10a63ac68(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c014f8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a63ac88; end: 10a63ac97;  */

void FUN_10a63ac88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a63ac90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a63ac98; end: 10a63acef;  */

long FUN_10a63ac98(long param_1)

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



/* Entry: 10a63acf0; end: 10a63aef3;  */

void FUN_10a63acf0(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110bffbe8;
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



/* Entry: 10a63aef4; end: 10a63af03;  */

void FUN_10a63aef4(long param_1)

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
  ppuStack_40 = &PTR_DAT_110bffbe8;
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



/* Entry: 10a63af04; end: 10a63af2b;  */

long FUN_10a63af04(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a63ac98(param_1 + 0x18);
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



/* Entry: 10a63af2c; end: 10a63af7b;  */

void FUN_10a63af2c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c01538;
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



/* Entry: 10a63af7c; end: 10a63af9b;  */

void FUN_10a63af7c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c01560;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a63af9c; end: 10a63afab;  */

void FUN_10a63af9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a63afa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a63afac; end: 10a63b003;  */

long FUN_10a63afac(long param_1)

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



/* Entry: 10a63b004; end: 10a63b207;  */

void FUN_10a63b004(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110bffbb8;
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



/* Entry: 10a63b208; end: 10a63b217;  */

void FUN_10a63b208(long param_1)

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
  ppuStack_40 = &PTR_DAT_110bffbb8;
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



/* Entry: 10a63b218; end: 10a63b23f;  */

long FUN_10a63b218(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a63afac(param_1 + 0x18);
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



/* Entry: 10a63b240; end: 10a63b28f;  */

void FUN_10a63b240(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c015a0;
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



/* Entry: 10a63b290; end: 10a63b2af;  */

void FUN_10a63b290(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c015c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a63b2b0; end: 10a63b2bf;  */

void FUN_10a63b2b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a63b2b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a63b2c0; end: 10a63b317;  */

long FUN_10a63b2c0(long param_1)

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



/* Entry: 10a63b318; end: 10a63b51b;  */

void FUN_10a63b318(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110bffbd0;
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



/* Entry: 10a63b51c; end: 10a63b52b;  */

void FUN_10a63b51c(long param_1)

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
  ppuStack_40 = &PTR_DAT_110bffbd0;
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



/* Entry: 10a63b52c; end: 10a63b553;  */

long FUN_10a63b52c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a63b2c0(param_1 + 0x18);
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



/* Entry: 10a63b554; end: 10a63b593;  */

void FUN_10a63b554(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c01608;
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



/* Entry: 10a63b594; end: 10a63c167;  */

void FUN_10a63b594(long *****param_1,long *****param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *****ppppplVar4;
  code cVar5;
  long ***ppplVar6;
  code *pcVar7;
  long ****pppplVar8;
  ulong uVar9;
  long ***ppplVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long *****unaff_x20;
  long *****unaff_x21;
  long *****unaff_x22;
  long *****unaff_x23;
  long ****pppplVar14;
  code *unaff_x26;
  undefined8 *puStack_1e0;
  long *plStack_1d8;
  int aiStack_1d0 [2];
  undefined8 *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 *puStack_1b8;
  long ***ppplStack_1b0;
  long ***ppplStack_1a8;
  undefined1 *puStack_1a0;
  undefined ***pppuStack_198;
  undefined **ppuStack_190;
  undefined8 uStack_188;
  long ****pppplStack_180;
  long ****pppplStack_178;
  long ****pppplStack_170;
  long ****pppplStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long ****pppplStack_148;
  long ****pppplStack_140;
  long ****pppplStack_138;
  long ****pppplStack_130;
  long ****pppplStack_128;
  long ***ppplStack_118;
  long ***ppplStack_110;
  long ****pppplStack_108;
  long ****pppplStack_100;
  long lStack_f8;
  float fStack_f0;
  long ****pppplStack_e0;
  long ****pppplStack_d8;
  long ****pppplStack_d0;
  long ****pppplStack_c8;
  long ****pppplStack_c0;
  long ****pppplStack_b8;
  long ***ppplStack_b0;
  long ***ppplStack_a8;
  long ****pppplStack_a0;
  long ****pppplStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar13 = (long *****)param_2[2];
  if ((*(ushort *)(ppppplVar13 + 0x30) >> 4 & 1) != 0) goto LAB_10a63bfcc;
  ppplStack_118 = *(long ****)((long)param_1 + 0x14);
  param_2 = (long *****)&ppplStack_118;
  param_1 = ppppplVar13;
  FUN_10a601f04();
  if ((int)param_1 == 0) goto LAB_10a63bfcc;
  FUN_10a1f2004(ppppplVar13 + 0x9b,&ppplStack_118);
  FUN_10a76c260(ppppplVar13[0x2e][0x11b],6);
  unaff_x22 = (long *****)ppppplVar13[0x45];
  ppppplVar4 = (long *****)0x38;
  __Znwm();
  ppppplVar4[1] = (long ****)0x0;
  ppppplVar4[2] = (long ****)0x0;
  *ppppplVar4 = (long ****)&PTR_DAT_110c01648;
  ppppplVar4[4] = (long ****)0x0;
  ppppplVar4[5] = (long ****)0x0;
  pppplStack_130 = (long ****)(ppppplVar4 + 3);
  *pppplStack_130 = (long ***)&PTR_DAT_110bfb868;
  ppppplVar4[6] = (long ****)ppplStack_118;
  pppplStack_108 = (long ****)0x0;
  ppplStack_110 = (long ***)0x0;
  lStack_f8 = 0;
  pppplStack_100 = (long ****)0x0;
  fStack_f0 = *(float *)(unaff_x22 + 7);
  param_2 = (long *****)unaff_x22[4];
  pppplStack_148 = (long ****)ppppplVar4;
  pppplStack_140 = (long ****)ppppplVar13;
  pppplStack_128 = (long ****)ppppplVar4;
  FUN_10a626910(&ppplStack_110);
  pppplVar14 = unaff_x22[5];
  if (pppplVar14 != (long ****)0x0) {
    unaff_x26 = (code *)&ppplStack_110;
    pppplStack_138 = (long ****)&pppplStack_100;
    unaff_x23 = (long *****)0x1;
    do {
      ppppplVar13 = (long *****)pppplStack_108;
      ppplVar6 = pppplVar14[2];
      uVar9 = ((ulong)(uint)((int)ppplVar6 << 3) + 8 ^ (ulong)ppplVar6 >> 0x20) *
              -0x622015f714c7d297;
      uVar9 = ((ulong)ppplVar6 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
      ppppplVar4 = (long *****)((uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297);
      if ((long *****)pppplStack_108 != (long *****)0x0) {
        pcVar7 = (code *)((long)pppplStack_108 + -1);
        if (((ulong)pppplStack_108 & (ulong)pcVar7) == 0) {
          unaff_x20 = (long *****)((ulong)ppppplVar4 & (ulong)pcVar7);
        }
        else {
          unaff_x20 = ppppplVar4;
          if (pppplStack_108 <= ppppplVar4) {
            uVar9 = 0;
            if ((long *****)pppplStack_108 != (long *****)0x0) {
              uVar9 = (ulong)ppppplVar4 / (ulong)pppplStack_108;
            }
            unaff_x20 = (long *****)((long)ppppplVar4 - uVar9 * (long)pppplStack_108);
          }
        }
        ppplVar10 = (long ***)ppplStack_110[(long)unaff_x20];
        if (ppplVar10 != (long ***)0x0) {
          do {
            while( true ) {
              ppplVar10 = (long ***)*ppplVar10;
              if (ppplVar10 == (long ***)0x0) goto LAB_10a63b744;
              ppppplVar11 = (long *****)ppplVar10[1];
              if (ppppplVar11 != ppppplVar4) break;
              if ((long ***)ppplVar10[2] == ppplVar6) goto LAB_10a63b8b8;
            }
            if (((ulong)pppplStack_108 & (ulong)pcVar7) == 0) {
              ppppplVar11 = (long *****)((ulong)ppppplVar11 & (ulong)pcVar7);
            }
            else if (pppplStack_108 <= ppppplVar11) {
              uVar9 = 0;
              if ((long *****)pppplStack_108 != (long *****)0x0) {
                uVar9 = (ulong)ppppplVar11 / (ulong)pppplStack_108;
              }
              ppppplVar11 = (long *****)((long)ppppplVar11 - uVar9 * (long)pppplStack_108);
            }
          } while (ppppplVar11 == unaff_x20);
        }
      }
LAB_10a63b744:
      unaff_x21 = (long *****)0x68;
      __Znwm();
      ppplStack_b0 = (long ***)0x0;
      *unaff_x21 = (long ****)0x0;
      unaff_x21[1] = (long ****)ppppplVar4;
      ppplVar6 = pppplVar14[3];
      pppplVar8 = (long ****)pppplVar14[2];
      unaff_x21[3] = (long ****)pppplVar14[3];
      unaff_x21[2] = pppplVar8;
      if (ppplVar6 != (long ***)0x0) {
        ppplVar6 = ppplVar6 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppplVar6,0x10);
          if (bVar2) {
            *ppplVar6 = (long **)((long)*ppplVar6 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      pppplStack_e0 = (long ****)(unaff_x21 + 4);
      *(code *)(unaff_x21 + 0xc) = (code)0x3;
      pppplStack_c0 = (long ****)unaff_x21;
      pppplStack_b8 = (long ****)unaff_x26;
      if (*(char *)(pppplVar14 + 0xc) == '\0') {
        cVar5 = (code)0x0;
      }
      else {
        param_2 = (long *****)(pppplVar14 + 4);
        FUN_10a005398(&pppplStack_e0);
        cVar5 = *(code *)(pppplVar14 + 0xc);
      }
      *(code *)(unaff_x21 + 0xc) = cVar5;
      ppplStack_b0 = (long ***)CONCAT71(ppplStack_b0._1_7_,1);
      if ((ppppplVar13 == (long *****)0x0) ||
         (fStack_f0 * (float)ppppplVar13 < (float)(lStack_f8 + 1))) {
        uVar9 = 1;
        if ((long *****)0x2 < ppppplVar13) {
          uVar9 = (ulong)(((ulong)ppppplVar13 & (ulong)((long)ppppplVar13 + -1)) != 0);
        }
        param_2 = (long *****)(uVar9 | (long)ppppplVar13 << 1);
        ppppplVar13 = (long *****)(long)((float)(lStack_f8 + 1) / fStack_f0);
        if (param_2 <= ppppplVar13) {
          param_2 = ppppplVar13;
        }
        FUN_10a626910(&ppplStack_110);
        ppppplVar13 = (long *****)pppplStack_108;
        if (((ulong)pppplStack_108 & (ulong)((long)pppplStack_108 + -1)) == 0) {
          unaff_x20 = (long *****)((ulong)((long)pppplStack_108 + -1) & (ulong)ppppplVar4);
        }
        else {
          unaff_x20 = ppppplVar4;
          if (pppplStack_108 <= ppppplVar4) {
            uVar9 = 0;
            if ((long *****)pppplStack_108 != (long *****)0x0) {
              uVar9 = (ulong)ppppplVar4 / (ulong)pppplStack_108;
            }
            unaff_x20 = (long *****)((long)ppppplVar4 - uVar9 * (long)pppplStack_108);
          }
        }
      }
      ppplVar6 = (long ***)ppplStack_110[(long)unaff_x20];
      if (ppplVar6 == (long ***)0x0) {
        *pppplStack_c0 = (long ***)pppplStack_100;
        pppplStack_100 = pppplStack_c0;
        ppplStack_110[(long)unaff_x20] = (long **)pppplStack_138;
        if ((long ****)*pppplStack_c0 != (long ****)0x0) {
          ppppplVar4 = (long *****)(*pppplStack_c0)[1];
          if (((ulong)ppppplVar13 & (ulong)((long)ppppplVar13 + -1)) == 0) {
            ppppplVar4 = (long *****)((ulong)ppppplVar4 & (ulong)((long)ppppplVar13 + -1));
          }
          else if (ppppplVar13 <= ppppplVar4) {
            uVar9 = 0;
            if (ppppplVar13 != (long *****)0x0) {
              uVar9 = (ulong)ppppplVar4 / (ulong)ppppplVar13;
            }
            ppppplVar4 = (long *****)((long)ppppplVar4 - uVar9 * (long)ppppplVar13);
          }
          ppplStack_110[(long)ppppplVar4] = (long **)pppplStack_c0;
        }
      }
      else {
        *pppplStack_c0 = (long ***)*ppplVar6;
        *ppplVar6 = (long **)pppplStack_c0;
      }
      lStack_f8 = lStack_f8 + 1;
LAB_10a63b8b8:
      pppplVar14 = (long ****)*pppplVar14;
    } while (pppplVar14 != (long ****)0x0);
  }
  if ((long *****)pppplStack_100 == (long *****)0x0) {
    param_1 = (long *****)&ppplStack_110;
    FUN_10a57ce90();
    unaff_x20 = (long *****)pppplStack_148;
LAB_10a63bacc:
    ppppplVar13 = (long *****)pppplStack_140;
    ppppplVar4 = unaff_x20 + 1;
    do {
      pppplVar14 = *ppppplVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppplVar4,0x10);
      if (bVar2) {
        *ppppplVar4 = (long ****)((long)pppplVar14 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (pppplVar14 == (long ****)0x0) {
      (*(code *)(*unaff_x20)[2])(unaff_x20);
      param_1 = unaff_x20;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  else {
    unaff_x21 = &pppplStack_e0;
    unaff_x23 = &pppplStack_c0;
    unaff_x26 = FUN_10a63c36c;
    ppppplVar13 = (long *****)pppplStack_100;
    do {
      ppppplVar4 = unaff_x22 + 3;
      ppppplVar11 = ppppplVar13 + 2;
      FUN_10a626f3c();
      param_2 = ppppplVar11;
      if (ppppplVar4 != (long *****)0x0) {
        if (*(code *)(ppppplVar13 + 0xc) == (code)0x1) {
          pppplVar14 = ppppplVar13[4];
          pppplStack_b8 = pppplStack_128;
          pppplStack_c0 = pppplStack_130;
          if ((long *****)pppplStack_128 != (long *****)0x0) {
            ppppplVar4 = (long *****)(pppplStack_128 + 1);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppppplVar4,0x10);
              if (bVar2) {
                *ppppplVar4 = (long ****)((long)*ppppplVar4 + 1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          param_2 = ppppplVar13 + 4;
          (*(code *)pppplVar14)(&pppplStack_c0);
          if ((long *****)pppplStack_b8 != (long *****)0x0) {
            ppppplVar4 = (long *****)(pppplStack_b8 + 1);
            do {
              pppplVar14 = *ppppplVar4;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppppplVar4,0x10);
              if (bVar2) {
                *ppppplVar4 = (long ****)((long)pppplVar14 + -1);
                cVar1 = ExclusiveMonitorsStatus();
              }
              ppppplVar11 = (long *****)pppplStack_b8;
            } while (cVar1 != '\0');
LAB_10a63b998:
            if (pppplVar14 == (long ****)0x0) {
              (*(code *)(*ppppplVar11)[2])(ppppplVar11);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar11);
            }
          }
        }
        else if (*(code *)(ppppplVar13 + 0xc) == (code)0x2) {
          ppppplVar4 = ppppplVar13 + 4;
          FUN_10a688b40();
          pppplVar14 = pppplStack_128;
          if (ppppplVar4 == (long *****)0x0) {
            param_2 = (long *****)0x0;
            if (ppppplVar11 != (long *****)0x0) {
              ppplStack_b0 = (long ***)ppppplVar13[4];
              ppplStack_a8 = (long ***)ppppplVar13[5];
              if ((long ****)ppplStack_a8 != (long ****)0x0) {
                pppplVar8 = (long ****)(ppplStack_a8 + 1);
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(pppplVar8,0x10);
                  if (bVar2) {
                    *pppplVar8 = (long ***)((long)*pppplVar8 + 1);
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              pppplStack_d0 = pppplStack_130;
              pppplStack_c8 = pppplStack_128;
              if ((long *****)pppplStack_128 == (long *****)0x0) {
                pppplStack_98 = (long ****)0x0;
              }
              else {
                ppppplVar4 = (long *****)(pppplStack_128 + 1);
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppppplVar4,0x10);
                  if (bVar2) {
                    *ppppplVar4 = (long ****)((long)*ppppplVar4 + 1);
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                pppplStack_98 = pppplStack_128;
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppppplVar4,0x10);
                  if (bVar2) {
                    *ppppplVar4 = (long ****)((long)*ppppplVar4 + 1);
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              pppplStack_a0 = pppplStack_130;
              pppplStack_b8 = (long ****)&PTR_FUN_110c01620;
              pppplStack_d8 = (long ****)0x0;
              pppplStack_e0 = (long ****)0x0;
              pppplStack_c0 = (long ****)FUN_10a63c36c;
              param_2 = &pppplStack_c0;
              FUN_10a4634ec(ppppplVar11);
              (*(code *)*pppplStack_b8)(&pppplStack_b8);
              if ((long *****)pppplVar14 != (long *****)0x0) {
                ppppplVar4 = (long *****)(pppplVar14 + 1);
                do {
                  pppplVar8 = *ppppplVar4;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppppplVar4,0x10);
                  if (bVar2) {
                    *ppppplVar4 = (long ****)((long)pppplVar8 + -1);
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (pppplVar8 == (long ****)0x0) {
                  (*(code *)(*pppplVar14)[2])(pppplVar14);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar14);
                }
              }
              if ((long *****)pppplStack_d8 != (long *****)0x0) {
                ppppplVar4 = (long *****)(pppplStack_d8 + 1);
                do {
                  pppplVar14 = *ppppplVar4;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppppplVar4,0x10);
                  if (bVar2) {
                    *ppppplVar4 = (long ****)((long)pppplVar14 + -1);
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                  ppppplVar11 = (long *****)pppplStack_d8;
                } while (cVar1 != '\0');
                goto LAB_10a63b998;
              }
            }
          }
          else {
            *ppppplVar4 = (long ****)
                          CONCAT44((int)((ulong)*ppppplVar4 >> 0x20) + 1,(int)*ppppplVar4 + 1);
            param_2 = &pppplStack_130;
            FUN_10a63c168(ppppplVar13[4]);
            iVar3 = *(int *)((long)ppppplVar4 + 4) + -1;
            *(int *)((long)ppppplVar4 + 4) = iVar3;
            if (iVar3 == 0) {
              *(undefined4 *)ppppplVar4 = 0;
            }
          }
        }
      }
      unaff_x20 = (long *****)pppplStack_128;
      ppppplVar13 = (long *****)*ppppplVar13;
    } while (ppppplVar13 != (long *****)0x0);
    param_1 = (long *****)&ppplStack_110;
    FUN_10a57ce90();
    ppppplVar13 = (long *****)pppplStack_140;
    if (unaff_x20 != (long *****)0x0) goto LAB_10a63bacc;
  }
  if ((*(ushort *)(ppppplVar13 + 0x30) >> 4 & 1) == 0) {
    unaff_x21 = (long *****)ppppplVar13[0x61];
    ppppplVar13 = (long *****)0x30;
    __Znwm();
    ppppplVar13[1] = (long ****)0x0;
    ppppplVar13[2] = (long ****)0x0;
    *ppppplVar13 = (long ****)&PTR_DAT_110c016b0;
    ppppplVar13[4] = (long ****)0x0;
    ppppplVar13[5] = (long ****)0x0;
    pppplStack_130 = (long ****)(ppppplVar13 + 3);
    *pppplStack_130 = (long ***)&PTR_DAT_110bfb600;
    pppplStack_108 = (long ****)0x0;
    ppplStack_110 = (long ***)0x0;
    lStack_f8 = 0;
    pppplStack_100 = (long ****)0x0;
    fStack_f0 = *(float *)(unaff_x21 + 7);
    param_2 = (long *****)unaff_x21[4];
    pppplStack_128 = (long ****)ppppplVar13;
    FUN_10a633e88(&ppplStack_110);
    pppplVar14 = unaff_x21[5];
    if (pppplVar14 != (long ****)0x0) {
      unaff_x23 = (long *****)0x9ddfea08eb382d69;
      do {
        ppppplVar4 = (long *****)pppplStack_108;
        ppplVar6 = pppplVar14[2];
        uVar9 = ((ulong)(uint)((int)ppplVar6 << 3) + 8 ^ (ulong)ppplVar6 >> 0x20) *
                -0x622015f714c7d297;
        uVar9 = ((ulong)ppplVar6 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
        ppppplVar11 = (long *****)((uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297);
        if ((long *****)pppplStack_108 != (long *****)0x0) {
          pcVar7 = (code *)((long)pppplStack_108 + -1);
          if (((ulong)pppplStack_108 & (ulong)pcVar7) == 0) {
            unaff_x26 = (code *)((ulong)ppppplVar11 & (ulong)pcVar7);
          }
          else {
            unaff_x26 = (code *)ppppplVar11;
            if (pppplStack_108 <= ppppplVar11) {
              uVar9 = 0;
              if ((long *****)pppplStack_108 != (long *****)0x0) {
                uVar9 = (ulong)ppppplVar11 / (ulong)pppplStack_108;
              }
              unaff_x26 = (code *)((long)ppppplVar11 - uVar9 * (long)pppplStack_108);
            }
          }
          ppplVar10 = (long ***)ppplStack_110[(long)unaff_x26];
          if (ppplVar10 != (long ***)0x0) {
            do {
              while( true ) {
                ppplVar10 = (long ***)*ppplVar10;
                if (ppplVar10 == (long ***)0x0) goto LAB_10a63bc30;
                ppppplVar12 = (long *****)ppplVar10[1];
                if (ppppplVar12 != ppppplVar11) break;
                if ((long ***)ppplVar10[2] == ppplVar6) goto LAB_10a63bd90;
              }
              if (((ulong)pppplStack_108 & (ulong)pcVar7) == 0) {
                ppppplVar12 = (long *****)((ulong)ppppplVar12 & (ulong)pcVar7);
              }
              else if (pppplStack_108 <= ppppplVar12) {
                uVar9 = 0;
                if ((long *****)pppplStack_108 != (long *****)0x0) {
                  uVar9 = (ulong)ppppplVar12 / (ulong)pppplStack_108;
                }
                ppppplVar12 = (long *****)((long)ppppplVar12 - uVar9 * (long)pppplStack_108);
              }
            } while (ppppplVar12 == (long *****)unaff_x26);
          }
        }
LAB_10a63bc30:
        unaff_x20 = (long *****)0x68;
        __Znwm();
        *unaff_x20 = (long ****)0x0;
        unaff_x20[1] = (long ****)ppppplVar11;
        ppplVar6 = pppplVar14[3];
        pppplVar8 = (long ****)pppplVar14[2];
        unaff_x20[3] = (long ****)pppplVar14[3];
        unaff_x20[2] = pppplVar8;
        if (ppplVar6 != (long ***)0x0) {
          ppplVar6 = ppplVar6 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppplVar6,0x10);
            if (bVar2) {
              *ppplVar6 = (long **)((long)*ppplVar6 + 1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pppplStack_c0 = (long ****)(unaff_x20 + 4);
        *(code *)(unaff_x20 + 0xc) = (code)0x3;
        if (*(char *)(pppplVar14 + 0xc) == '\0') {
          cVar5 = (code)0x0;
        }
        else {
          param_2 = (long *****)(pppplVar14 + 4);
          FUN_10a005398(&pppplStack_c0);
          cVar5 = *(code *)(pppplVar14 + 0xc);
        }
        *(code *)(unaff_x20 + 0xc) = cVar5;
        if ((ppppplVar4 == (long *****)0x0) ||
           (fStack_f0 * (float)ppppplVar4 < (float)(lStack_f8 + 1))) {
          uVar9 = 1;
          if ((long *****)0x2 < ppppplVar4) {
            uVar9 = (ulong)(((ulong)ppppplVar4 & (ulong)((long)ppppplVar4 + -1)) != 0);
          }
          param_2 = (long *****)(uVar9 | (long)ppppplVar4 << 1);
          ppppplVar4 = (long *****)(long)((float)(lStack_f8 + 1) / fStack_f0);
          if (param_2 <= ppppplVar4) {
            param_2 = ppppplVar4;
          }
          FUN_10a633e88(&ppplStack_110);
          ppppplVar4 = (long *****)pppplStack_108;
          if (((ulong)pppplStack_108 & (ulong)((long)pppplStack_108 + -1)) == 0) {
            unaff_x26 = (code *)((ulong)((long)pppplStack_108 + -1) & (ulong)ppppplVar11);
          }
          else {
            unaff_x26 = (code *)ppppplVar11;
            if (pppplStack_108 <= ppppplVar11) {
              uVar9 = 0;
              if ((long *****)pppplStack_108 != (long *****)0x0) {
                uVar9 = (ulong)ppppplVar11 / (ulong)pppplStack_108;
              }
              unaff_x26 = (code *)((long)ppppplVar11 - uVar9 * (long)pppplStack_108);
            }
          }
        }
        ppplVar6 = (long ***)ppplStack_110[(long)unaff_x26];
        if (ppplVar6 == (long ***)0x0) {
          *unaff_x20 = pppplStack_100;
          ppplStack_110[(long)unaff_x26] = (long **)&pppplStack_100;
          pppplStack_100 = (long ****)unaff_x20;
          if (*unaff_x20 != (long ****)0x0) {
            ppppplVar11 = (long *****)(*unaff_x20)[1];
            if (((ulong)ppppplVar4 & (ulong)((long)ppppplVar4 + -1)) == 0) {
              ppppplVar11 = (long *****)((ulong)ppppplVar11 & (ulong)((long)ppppplVar4 + -1));
            }
            else if (ppppplVar4 <= ppppplVar11) {
              uVar9 = 0;
              if (ppppplVar4 != (long *****)0x0) {
                uVar9 = (ulong)ppppplVar11 / (ulong)ppppplVar4;
              }
              ppppplVar11 = (long *****)((long)ppppplVar11 - uVar9 * (long)ppppplVar4);
            }
            ppplStack_110[(long)ppppplVar11] = (long **)unaff_x20;
          }
        }
        else {
          *unaff_x20 = (long ****)*ppplVar6;
          *ppplVar6 = (long **)unaff_x20;
        }
        lStack_f8 = lStack_f8 + 1;
LAB_10a63bd90:
        pppplVar14 = (long ****)*pppplVar14;
      } while (pppplVar14 != (long ****)0x0);
    }
    unaff_x22 = (long *****)0x0;
    if ((long *****)pppplStack_100 == (long *****)0x0) {
      param_1 = (long *****)&ppplStack_110;
      FUN_10a57faf8();
    }
    else {
      unaff_x22 = &pppplStack_e0;
      unaff_x23 = &pppplStack_c0;
      ppppplVar4 = (long *****)pppplStack_100;
      do {
        ppppplVar11 = (long *****)ppppplVar4[2];
        ppppplVar13 = unaff_x21 + 3;
        FUN_10a634898();
        param_2 = ppppplVar11;
        if (ppppplVar13 != (long *****)0x0) {
          if (*(code *)(ppppplVar4 + 0xc) == (code)0x1) {
            pppplVar14 = ppppplVar4[4];
            pppplStack_b8 = pppplStack_128;
            pppplStack_c0 = pppplStack_130;
            if ((long *****)pppplStack_128 != (long *****)0x0) {
              ppppplVar13 = (long *****)(pppplStack_128 + 1);
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(ppppplVar13,0x10);
                if (bVar2) {
                  *ppppplVar13 = (long ****)((long)*ppppplVar13 + 1);
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            param_2 = ppppplVar4 + 4;
            (*(code *)pppplVar14)(&pppplStack_c0);
            if ((long *****)pppplStack_b8 != (long *****)0x0) {
              ppppplVar13 = (long *****)(pppplStack_b8 + 1);
              do {
                pppplVar14 = *ppppplVar13;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(ppppplVar13,0x10);
                if (bVar2) {
                  *ppppplVar13 = (long ****)((long)pppplVar14 + -1);
                  cVar1 = ExclusiveMonitorsStatus();
                }
                ppppplVar11 = (long *****)pppplStack_b8;
              } while (cVar1 != '\0');
LAB_10a63be70:
              if (pppplVar14 == (long ****)0x0) {
                (*(code *)(*ppppplVar11)[2])(ppppplVar11);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar11);
              }
            }
          }
          else if (*(code *)(ppppplVar4 + 0xc) == (code)0x2) {
            unaff_x20 = ppppplVar4 + 4;
            FUN_10a688b40();
            pppplVar14 = pppplStack_128;
            if (unaff_x20 == (long *****)0x0) {
              param_2 = (long *****)0x0;
              if (ppppplVar11 != (long *****)0x0) {
                ppplStack_b0 = (long ***)ppppplVar4[4];
                ppplStack_a8 = (long ***)ppppplVar4[5];
                if ((long ****)ppplStack_a8 != (long ****)0x0) {
                  pppplVar8 = (long ****)(ppplStack_a8 + 1);
                  do {
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(pppplVar8,0x10);
                    if (bVar2) {
                      *pppplVar8 = (long ***)((long)*pppplVar8 + 1);
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                }
                pppplStack_d0 = pppplStack_130;
                pppplStack_c8 = pppplStack_128;
                if ((long *****)pppplStack_128 == (long *****)0x0) {
                  pppplStack_98 = (long ****)0x0;
                }
                else {
                  ppppplVar13 = (long *****)(pppplStack_128 + 1);
                  do {
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(ppppplVar13,0x10);
                    if (bVar2) {
                      *ppppplVar13 = (long ****)((long)*ppppplVar13 + 1);
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  pppplStack_98 = pppplStack_128;
                  do {
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(ppppplVar13,0x10);
                    if (bVar2) {
                      *ppppplVar13 = (long ****)((long)*ppppplVar13 + 1);
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                }
                pppplStack_a0 = pppplStack_130;
                pppplStack_b8 = (long ****)&PTR_FUN_110c01688;
                pppplStack_d8 = (long ****)0x0;
                pppplStack_e0 = (long ****)0x0;
                pppplStack_c0 = (long ****)FUN_10a63c680;
                param_2 = &pppplStack_c0;
                FUN_10a4634ec(ppppplVar11);
                (*(code *)*pppplStack_b8)(&pppplStack_b8);
                if ((long *****)pppplVar14 != (long *****)0x0) {
                  ppppplVar13 = (long *****)(pppplVar14 + 1);
                  do {
                    pppplVar8 = *ppppplVar13;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(ppppplVar13,0x10);
                    if (bVar2) {
                      *ppppplVar13 = (long ****)((long)pppplVar8 + -1);
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (pppplVar8 == (long ****)0x0) {
                    (*(code *)(*pppplVar14)[2])(pppplVar14);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar14);
                  }
                }
                if ((long *****)pppplStack_d8 != (long *****)0x0) {
                  ppppplVar13 = (long *****)(pppplStack_d8 + 1);
                  do {
                    pppplVar14 = *ppppplVar13;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(ppppplVar13,0x10);
                    if (bVar2) {
                      *ppppplVar13 = (long ****)((long)pppplVar14 + -1);
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                    ppppplVar11 = (long *****)pppplStack_d8;
                  } while (cVar1 != '\0');
                  goto LAB_10a63be70;
                }
              }
            }
            else {
              *unaff_x20 = (long ****)
                           CONCAT44((int)((ulong)*unaff_x20 >> 0x20) + 1,(int)*unaff_x20 + 1);
              param_2 = &pppplStack_130;
              FUN_10a63c47c(ppppplVar4[4]);
              iVar3 = *(int *)((long)unaff_x20 + 4) + -1;
              *(int *)((long)unaff_x20 + 4) = iVar3;
              if (iVar3 == 0) {
                *(undefined4 *)unaff_x20 = 0;
              }
            }
          }
        }
        ppppplVar13 = (long *****)pppplStack_128;
        ppppplVar4 = (long *****)*ppppplVar4;
      } while (ppppplVar4 != (long *****)0x0);
      param_1 = (long *****)&ppplStack_110;
      FUN_10a57faf8();
      if (ppppplVar13 == (long *****)0x0) goto LAB_10a63bfcc;
    }
    ppppplVar4 = ppppplVar13 + 1;
    do {
      pppplVar14 = *ppppplVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppplVar4,0x10);
      if (bVar2) {
        *ppppplVar4 = (long ****)((long)pppplVar14 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (pppplVar14 == (long ****)0x0) {
      (*(code *)(*ppppplVar13)[2])(ppppplVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_1 = ppppplVar13;
    }
  }
LAB_10a63bfcc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*pppplStack_b8)(unaff_x23 + 1);
  FUN_10a63c738(unaff_x22 + 2);
  func_0x00010a004dac(&pppplStack_e0);
  FUN_10a57faf8(&ppplStack_110);
  FUN_10a63c738(&pppplStack_130);
  ppppplVar13 = param_1;
  __Unwind_Resume();
  pcStack_158 = FUN_10a63c168;
  pppplStack_180 = (long ****)unaff_x22;
  pppplStack_178 = (long ****)unaff_x21;
  pppplStack_170 = (long ****)unaff_x20;
  pppplStack_168 = (long ****)param_1;
  puStack_160 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&ppplStack_1b0,ppppplVar13 + 1,*ppppplVar13);
  func_0x000109884820(&plStack_1d8,&ppplStack_1b0,*ppppplVar13);
  if (ppplStack_1b0 != (long ***)0x0) {
    (*(code *)**ppplStack_1b0)();
  }
  (*(code *)(**ppppplVar13)[6])(&puStack_1e0);
  pppplVar14 = *ppppplVar13;
  ppplStack_1a8 = (long ***)param_2[1];
  ppplStack_1b0 = (long ***)*param_2;
  if (param_2[1] != (long ****)0x0) {
    pppplVar8 = param_2[1] + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppplVar8,0x10);
      if (bVar2) {
        *pppplVar8 = (long ***)((long)*pppplVar8 + 1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuStack_190 = &PTR_DAT_110bffb58;
  func_0x000109899de4(&puStack_1c0,pppplVar14,&ppplStack_1b0,&ppuStack_190,0,0);
  ppplVar6 = ppplStack_1a8;
  if ((long ****)ppplStack_1a8 != (long ****)0x0) {
    pppplVar8 = (long ****)(ppplStack_1a8 + 1);
    do {
      ppplVar10 = *pppplVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppplVar8,0x10);
      if (bVar2) {
        *pppplVar8 = (long ***)((long)ppplVar10 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (ppplVar10 == (long ***)0x0) {
      (*(code *)(*ppplStack_1a8)[2])(ppplStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar6);
    }
  }
  uStack_188 = 1;
  ppuStack_190 = &puStack_1c0;
  (*(code *)(*pppplVar14)[0xb])(pppplVar14);
  ppplStack_1b0 = (long ***)&plStack_1d8;
  ppplStack_1a8 = (long ***)pppplVar14;
  puStack_1a0 = (undefined1 *)&puStack_1e0;
  pppuStack_198 = &ppuStack_190;
  func_0x0001098960c0(aiStack_1d0);
  if ((3 < aiStack_1d0[0]) && (puStack_1c8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_1c8)();
  }
  if ((3 < (int)puStack_1c0) && (puStack_1b8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_1b8)();
  }
  if (puStack_1e0 != (undefined8 *)0x0) {
    (**(code **)*puStack_1e0)();
  }
  if ((long **)plStack_1d8 != (long **)0x0) {
    (**(code **)*plStack_1d8)();
  }
  return;
}



/* Entry: 10a63c168; end: 10a63c36b;  */

void FUN_10a63c168(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110bffb58;
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



/* Entry: 10a63c36c; end: 10a63c37b;  */

void FUN_10a63c36c(long param_1)

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
  ppuStack_40 = &PTR_DAT_110bffb58;
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



/* Entry: 10a63c37c; end: 10a63c3a3;  */

long FUN_10a63c37c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a63c424(param_1 + 0x18);
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



/* Entry: 10a63c3a4; end: 10a63c3f3;  */

void FUN_10a63c3a4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c01620;
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



/* Entry: 10a63c3f4; end: 10a63c413;  */

void FUN_10a63c3f4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c01648;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a63c414; end: 10a63c423;  */

void FUN_10a63c414(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a63c41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a63c424; end: 10a63c47b;  */

long FUN_10a63c424(long param_1)

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



/* Entry: 10a63c47c; end: 10a63c67f;  */

void FUN_10a63c47c(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110bffb40;
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



/* Entry: 10a63c680; end: 10a63c68f;  */

void FUN_10a63c680(long param_1)

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
  ppuStack_40 = &PTR_DAT_110bffb40;
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



/* Entry: 10a63c690; end: 10a63c6b7;  */

long FUN_10a63c690(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a63c738(param_1 + 0x18);
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



/* Entry: 10a63c6b8; end: 10a63c707;  */

void FUN_10a63c6b8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c01688;
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



/* Entry: 10a63c708; end: 10a63c727;  */

void FUN_10a63c708(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c016b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a63c728; end: 10a63c737;  */

void FUN_10a63c728(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a63c730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a63c738; end: 10a63c78f;  */

long FUN_10a63c738(long param_1)

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



/* Entry: 10a63c790; end: 10a63c7c3;  */

void FUN_10a63c790(void)

{
  return;
}



/* Entry: 10a63c7c4; end: 10a63cdef;  */

void FUN_10a63c7c4(undefined **param_1,undefined ***param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined ***pppuVar5;
  undefined1 uVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long *unaff_x20;
  undefined *unaff_x21;
  undefined8 *unaff_x22;
  long *plVar17;
  undefined ***unaff_x23;
  ulong unaff_x26;
  ulong uVar18;
  long lVar19;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  int aiStack_1b0 [2];
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 **ppuStack_190;
  undefined **ppuStack_188;
  undefined1 *puStack_180;
  undefined ***pppuStack_178;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  long *plStack_150;
  undefined **ppuStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_118;
  undefined *puStack_110;
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
  ppuVar15 = param_2[2];
  if ((*(ushort *)(ppuVar15 + 0x30) >> 4 & 1) == 0) {
    ppuStack_118 = *(undefined ***)((long)param_1 + 0x14);
    param_2 = &ppuStack_118;
    param_1 = ppuVar15;
    FUN_10a601f04();
    if ((int)param_1 != 0) {
      FUN_10a1f2004(ppuVar15 + 0x9e,&ppuStack_118);
      FUN_10a76c260(*(undefined8 *)(ppuVar15[0x2e] + 0x8d8),0);
      unaff_x21 = ppuVar15[0x47];
      ppuVar15 = (undefined **)0x38;
      __Znwm();
      ppuVar15[1] = (undefined *)0x0;
      ppuVar15[2] = (undefined *)0x0;
      *ppuVar15 = (undefined *)&PTR_DAT_110c01738;
      ppuVar15[4] = (undefined *)0x0;
      ppuVar15[5] = (undefined *)0x0;
      ppuStack_130 = ppuVar15 + 3;
      *ppuStack_130 = (undefined *)&PTR_DAT_110bfb8c0;
      ppuVar15[6] = (undefined *)ppuStack_118;
      uStack_108 = 0;
      puStack_110 = (undefined *)0x0;
      lStack_f8 = 0;
      plStack_100 = (long *)0x0;
      fStack_f0 = *(float *)(unaff_x21 + 0x38);
      param_2 = *(undefined ****)(unaff_x21 + 0x20);
      ppuStack_128 = ppuVar15;
      FUN_10a6275fc(&puStack_110);
      plVar17 = *(long **)(unaff_x21 + 0x28);
      if (plVar17 != (long *)0x0) {
        unaff_x23 = (undefined ***)0x9ddfea08eb382d69;
        do {
          uVar18 = uStack_108;
          uVar7 = plVar17[2];
          uVar12 = ((ulong)(uint)((int)uVar7 << 3) + 8 ^ uVar7 >> 0x20) * -0x622015f714c7d297;
          uVar12 = (uVar7 >> 0x20 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
          uVar12 = (uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
          if (uStack_108 != 0) {
            uVar10 = uStack_108 - 1;
            if ((uStack_108 & uVar10) == 0) {
              unaff_x26 = uVar12 & uVar10;
            }
            else {
              unaff_x26 = uVar12;
              if (uStack_108 <= uVar12) {
                uVar14 = 0;
                if (uStack_108 != 0) {
                  uVar14 = uVar12 / uStack_108;
                }
                unaff_x26 = uVar12 - uVar14 * uStack_108;
              }
            }
            plVar13 = *(long **)(puStack_110 + unaff_x26 * 8);
            if (plVar13 != (long *)0x0) {
              do {
                while( true ) {
                  plVar13 = (long *)*plVar13;
                  if (plVar13 == (long *)0x0) goto LAB_10a63c96c;
                  uVar14 = plVar13[1];
                  if (uVar14 != uVar12) break;
                  if (plVar13[2] == uVar7) goto LAB_10a63cacc;
                }
                if ((uStack_108 & uVar10) == 0) {
                  uVar14 = uVar14 & uVar10;
                }
                else if (uStack_108 <= uVar14) {
                  uVar4 = 0;
                  if (uStack_108 != 0) {
                    uVar4 = uVar14 / uStack_108;
                  }
                  uVar14 = uVar14 - uVar4 * uStack_108;
                }
              } while (uVar14 == unaff_x26);
            }
          }
LAB_10a63c96c:
          unaff_x20 = (long *)0x68;
          __Znwm();
          *unaff_x20 = 0;
          unaff_x20[1] = uVar12;
          lVar8 = plVar17[3];
          lVar19 = plVar17[2];
          unaff_x20[3] = plVar17[3];
          unaff_x20[2] = lVar19;
          if (lVar8 != 0) {
            plVar13 = (long *)(lVar8 + 8);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar2) {
                *plVar13 = *plVar13 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          ppuStack_c0 = (undefined **)(unaff_x20 + 4);
          *(undefined1 *)(unaff_x20 + 0xc) = 3;
          if ((char)plVar17[0xc] == '\0') {
            uVar6 = 0;
          }
          else {
            param_2 = (undefined ***)(plVar17 + 4);
            FUN_10a005398(&ppuStack_c0);
            uVar6 = (undefined1)plVar17[0xc];
          }
          *(undefined1 *)(unaff_x20 + 0xc) = uVar6;
          if ((uVar18 == 0) || (fStack_f0 * (float)uVar18 < (float)(lStack_f8 + 1))) {
            uVar7 = 1;
            if (2 < uVar18) {
              uVar7 = (ulong)((uVar18 & uVar18 - 1) != 0);
            }
            param_2 = (undefined ***)(uVar7 | uVar18 << 1);
            pppuVar5 = (undefined ***)(long)((float)(lStack_f8 + 1) / fStack_f0);
            if (param_2 <= pppuVar5) {
              param_2 = pppuVar5;
            }
            FUN_10a6275fc(&puStack_110);
            uVar18 = uStack_108;
            if ((uStack_108 & uStack_108 - 1) == 0) {
              unaff_x26 = uStack_108 - 1 & uVar12;
            }
            else {
              unaff_x26 = uVar12;
              if (uStack_108 <= uVar12) {
                uVar7 = 0;
                if (uStack_108 != 0) {
                  uVar7 = uVar12 / uStack_108;
                }
                unaff_x26 = uVar12 - uVar7 * uStack_108;
              }
            }
          }
          plVar13 = *(long **)(puStack_110 + unaff_x26 * 8);
          if (plVar13 == (long *)0x0) {
            *unaff_x20 = (long)plStack_100;
            *(long ***)(puStack_110 + unaff_x26 * 8) = &plStack_100;
            plStack_100 = unaff_x20;
            if (*unaff_x20 != 0) {
              uVar7 = *(ulong *)(*unaff_x20 + 8);
              if ((uVar18 & uVar18 - 1) == 0) {
                uVar7 = uVar7 & uVar18 - 1;
              }
              else if (uVar18 <= uVar7) {
                uVar12 = 0;
                if (uVar18 != 0) {
                  uVar12 = uVar7 / uVar18;
                }
                uVar7 = uVar7 - uVar12 * uVar18;
              }
              *(long **)(puStack_110 + uVar7 * 8) = unaff_x20;
            }
          }
          else {
            *unaff_x20 = *plVar13;
            *plVar13 = (long)unaff_x20;
          }
          lStack_f8 = lStack_f8 + 1;
LAB_10a63cacc:
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      unaff_x22 = (undefined8 *)0x0;
      if (plStack_100 == (long *)0x0) {
        param_1 = &puStack_110;
        FUN_10a57d1bc();
      }
      else {
        unaff_x22 = &uStack_e0;
        unaff_x23 = &ppuStack_c0;
        plVar17 = plStack_100;
        do {
          pppuVar5 = (undefined ***)plVar17[2];
          puVar11 = unaff_x21 + 0x18;
          FUN_10a62800c();
          param_2 = pppuVar5;
          if (puVar11 != (undefined *)0x0) {
            if ((char)plVar17[0xc] == '\x01') {
              pcVar9 = (code *)plVar17[4];
              ppuStack_b8 = ppuStack_128;
              ppuStack_c0 = ppuStack_130;
              if (ppuStack_128 != (undefined **)0x0) {
                ppuVar15 = ppuStack_128 + 1;
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
                  if (bVar2) {
                    *ppuVar15 = *ppuVar15 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              param_2 = (undefined ***)(plVar17 + 4);
              (*pcVar9)(&ppuStack_c0);
              if (ppuStack_b8 != (undefined **)0x0) {
                ppuVar15 = ppuStack_b8 + 1;
                do {
                  puVar11 = *ppuVar15;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
                  if (bVar2) {
                    *ppuVar15 = puVar11 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                  ppuVar16 = ppuStack_b8;
                } while (cVar1 != '\0');
LAB_10a63cbac:
                if (puVar11 == (undefined *)0x0) {
                  (**(code **)(*ppuVar16 + 0x10))(ppuVar16);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar16);
                }
              }
            }
            else if ((char)plVar17[0xc] == '\x02') {
              unaff_x20 = plVar17 + 4;
              FUN_10a688b40();
              ppuVar15 = ppuStack_128;
              if (unaff_x20 == (long *)0x0) {
                param_2 = (undefined ***)0x0;
                if (pppuVar5 != (undefined ***)0x0) {
                  lStack_b0 = plVar17[4];
                  lStack_a8 = plVar17[5];
                  if (lStack_a8 != 0) {
                    plVar13 = (long *)(lStack_a8 + 8);
                    do {
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                      if (bVar2) {
                        *plVar13 = *plVar13 + 1;
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar1 != '\0');
                  }
                  ppuStack_d0 = ppuStack_130;
                  ppuStack_c8 = ppuStack_128;
                  if (ppuStack_128 == (undefined **)0x0) {
                    ppuStack_98 = (undefined **)0x0;
                  }
                  else {
                    ppuVar16 = ppuStack_128 + 1;
                    do {
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
                      if (bVar2) {
                        *ppuVar16 = *ppuVar16 + 1;
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar1 != '\0');
                    ppuStack_98 = ppuStack_128;
                    do {
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
                      if (bVar2) {
                        *ppuVar16 = *ppuVar16 + 1;
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar1 != '\0');
                  }
                  ppuStack_a0 = ppuStack_130;
                  ppuStack_b8 = &PTR_FUN_110c01710;
                  ppuStack_d8 = (undefined **)0x0;
                  uStack_e0 = 0;
                  ppuStack_c0 = (undefined **)FUN_10a63cff4;
                  param_2 = &ppuStack_c0;
                  FUN_10a4634ec(pppuVar5);
                  (*(code *)*ppuStack_b8)(&ppuStack_b8);
                  if (ppuVar15 != (undefined **)0x0) {
                    ppuVar16 = ppuVar15 + 1;
                    do {
                      puVar11 = *ppuVar16;
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
                      if (bVar2) {
                        *ppuVar16 = puVar11 + -1;
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar1 != '\0');
                    if (puVar11 == (undefined *)0x0) {
                      (**(code **)(*ppuVar15 + 0x10))(ppuVar15);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar15);
                    }
                  }
                  if (ppuStack_d8 != (undefined **)0x0) {
                    ppuVar15 = ppuStack_d8 + 1;
                    do {
                      puVar11 = *ppuVar15;
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
                      if (bVar2) {
                        *ppuVar15 = puVar11 + -1;
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                      ppuVar16 = ppuStack_d8;
                    } while (cVar1 != '\0');
                    goto LAB_10a63cbac;
                  }
                }
              }
              else {
                *unaff_x20 = CONCAT44((int)((ulong)*unaff_x20 >> 0x20) + 1,(int)*unaff_x20 + 1);
                param_2 = &ppuStack_130;
                FUN_10a63cdf0(plVar17[4]);
                iVar3 = *(int *)((long)unaff_x20 + 4) + -1;
                *(int *)((long)unaff_x20 + 4) = iVar3;
                if (iVar3 == 0) {
                  *(undefined4 *)unaff_x20 = 0;
                }
              }
            }
          }
          ppuVar15 = ppuStack_128;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
        param_1 = &puStack_110;
        FUN_10a57d1bc();
        if (ppuVar15 == (undefined **)0x0) goto LAB_10a63cd08;
      }
      ppuVar16 = ppuVar15 + 1;
      do {
        puVar11 = *ppuVar16;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
        if (bVar2) {
          *ppuVar16 = puVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (puVar11 == (undefined *)0x0) {
        (**(code **)(*ppuVar15 + 0x10))(ppuVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = ppuVar15;
      }
    }
  }
LAB_10a63cd08:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b8)(unaff_x23 + 1);
  FUN_10a63d0ac(unaff_x22 + 2);
  func_0x00010a004dac(&uStack_e0);
  FUN_10a57d1bc(&puStack_110);
  FUN_10a63d0ac(&ppuStack_130);
  ppuVar15 = param_1;
  __Unwind_Resume();
  pcStack_138 = FUN_10a63cdf0;
  puStack_160 = unaff_x22;
  puStack_158 = unaff_x21;
  plStack_150 = unaff_x20;
  ppuStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&ppuStack_190,ppuVar15 + 1,*ppuVar15);
  func_0x000109884820(&puStack_1b8,&ppuStack_190,*ppuVar15);
  if (ppuStack_190 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_190)();
  }
  (**(code **)(*(long *)*ppuVar15 + 0x30))(&puStack_1c0);
  plVar17 = (long *)*ppuVar15;
  ppuStack_188 = param_2[1];
  ppuStack_190 = (undefined8 **)*param_2;
  if (param_2[1] != (undefined **)0x0) {
    ppuVar15 = param_2[1] + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
      if (bVar2) {
        *ppuVar15 = *ppuVar15 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuStack_170 = &PTR_DAT_110bffb70;
  func_0x000109899de4(&puStack_1a0,plVar17,&ppuStack_190,&ppuStack_170,0,0);
  ppuVar15 = ppuStack_188;
  if (ppuStack_188 != (undefined **)0x0) {
    ppuVar16 = ppuStack_188 + 1;
    do {
      puVar11 = *ppuVar16;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
      if (bVar2) {
        *ppuVar16 = puVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar11 == (undefined *)0x0) {
      (**(code **)(*ppuStack_188 + 0x10))(ppuStack_188);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar15);
    }
  }
  uStack_168 = 1;
  ppuStack_170 = &puStack_1a0;
  (**(code **)(*plVar17 + 0x58))(plVar17);
  ppuStack_190 = &puStack_1b8;
  ppuStack_188 = (undefined **)plVar17;
  puStack_180 = (undefined1 *)&puStack_1c0;
  pppuStack_178 = &ppuStack_170;
  func_0x0001098960c0(aiStack_1b0);
  if ((3 < aiStack_1b0[0]) && (puStack_1a8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_1a8)();
  }
  if ((3 < (int)puStack_1a0) && (puStack_198 != (undefined8 *)0x0)) {
    (**(code **)*puStack_198)();
  }
  if (puStack_1c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_1c0)();
  }
  if (puStack_1b8 != (undefined8 *)0x0) {
    (**(code **)*puStack_1b8)();
  }
  return;
}



/* Entry: 10a63cdf0; end: 10a63cff3;  */

void FUN_10a63cdf0(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110bffb70;
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



/* Entry: 10a63cff4; end: 10a63d003;  */

void FUN_10a63cff4(long param_1)

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
  ppuStack_40 = &PTR_DAT_110bffb70;
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



/* Entry: 10a63d004; end: 10a63d02b;  */

long FUN_10a63d004(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a63d0ac(param_1 + 0x18);
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



/* Entry: 10a63d02c; end: 10a63d07b;  */

void FUN_10a63d02c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c01710;
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



/* Entry: 10a63d07c; end: 10a63d09b;  */

void FUN_10a63d07c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c01738;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a63d09c; end: 10a63d0ab;  */

void FUN_10a63d09c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a63d0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a63d0ac; end: 10a63d103;  */

long FUN_10a63d0ac(long param_1)

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



/* Entry: 10a63d104; end: 10a63d137;  */

void FUN_10a63d104(void)

{
  return;
}



/* Entry: 10a63d138; end: 10a63dca7;  */

void FUN_10a63d138(undefined **param_1,undefined ***param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined ***pppuVar4;
  undefined1 uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long *plVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **unaff_x20;
  undefined *unaff_x21;
  undefined **unaff_x22;
  long *plVar17;
  undefined4 uVar18;
  undefined ***unaff_x23;
  undefined **ppuVar19;
  undefined *unaff_x26;
  undefined *puVar20;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  int aiStack_1b0 [2];
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 **ppuStack_190;
  undefined **ppuStack_188;
  undefined1 *puStack_180;
  undefined ***pppuStack_178;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  undefined *puStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
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
  ppuVar15 = param_2[2];
  ppuVar19 = param_1;
  if ((*(ushort *)(ppuVar15 + 0x30) >> 4 & 1) == 0) {
    unaff_x22 = *(undefined ***)((long)param_1 + 0x14);
    param_2 = &ppuStack_118;
    ppuVar19 = ppuVar15;
    ppuStack_118 = unaff_x22;
    FUN_10a601f04();
    unaff_x20 = param_1;
    if ((int)ppuVar19 != 0) {
      unaff_x23 = (undefined ***)((ulong)unaff_x22 >> 0x20);
      uVar18 = (undefined4)((ulong)unaff_x22 >> 0x20);
      if (*(uint *)(param_1 + 2) == 0) {
        unaff_x21 = ppuVar15[0x49];
        ppuVar15 = (undefined **)0x38;
        __Znwm();
        ppuVar15[1] = (undefined *)0x0;
        ppuVar15[2] = (undefined *)0x0;
        *ppuVar15 = (undefined *)&PTR_DAT_110c017c0;
        ppuVar15[4] = (undefined *)0x0;
        ppuVar15[5] = (undefined *)0x0;
        ppuStack_130 = ppuVar15 + 3;
        *ppuStack_130 = (undefined *)&PTR_DAT_110bfb918;
        *(int *)(ppuVar15 + 6) = (int)unaff_x22;
        *(undefined4 *)((long)ppuVar15 + 0x34) = uVar18;
        puStack_108 = (undefined *)0x0;
        puStack_110 = (undefined *)0x0;
        lStack_f8 = 0;
        ppuStack_100 = (undefined **)0x0;
        fStack_f0 = *(float *)(unaff_x21 + 0x38);
        param_2 = *(undefined ****)(unaff_x21 + 0x20);
        ppuStack_128 = ppuVar15;
        FUN_10a628538(&puStack_110);
        plVar17 = *(long **)(unaff_x21 + 0x28);
        if (plVar17 != (long *)0x0) {
          unaff_x23 = (undefined ***)0x9ddfea08eb382d69;
          do {
            puVar11 = puStack_108;
            uVar6 = plVar17[2];
            uVar12 = ((ulong)(uint)((int)uVar6 << 3) + 8 ^ uVar6 >> 0x20) * -0x622015f714c7d297;
            uVar12 = (uVar6 >> 0x20 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
            puVar20 = (undefined *)((uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297);
            if (puStack_108 != (undefined *)0x0) {
              puVar9 = puStack_108 + -1;
              if (((ulong)puStack_108 & (ulong)puVar9) == 0) {
                unaff_x26 = (undefined *)((ulong)puVar20 & (ulong)puVar9);
              }
              else {
                unaff_x26 = puVar20;
                if (puStack_108 <= puVar20) {
                  uVar12 = 0;
                  if (puStack_108 != (undefined *)0x0) {
                    uVar12 = (ulong)puVar20 / (ulong)puStack_108;
                  }
                  unaff_x26 = puVar20 + -(uVar12 * (long)puStack_108);
                }
              }
              plVar13 = *(long **)(puStack_110 + (long)unaff_x26 * 8);
              if (plVar13 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar13 = (long *)*plVar13;
                    if (plVar13 == (long *)0x0) goto LAB_10a63d770;
                    puVar14 = (undefined *)plVar13[1];
                    if (puVar14 != puVar20) break;
                    if (plVar13[2] == uVar6) goto LAB_10a63d8d0;
                  }
                  if (((ulong)puStack_108 & (ulong)puVar9) == 0) {
                    puVar14 = (undefined *)((ulong)puVar14 & (ulong)puVar9);
                  }
                  else if (puStack_108 <= puVar14) {
                    uVar12 = 0;
                    if (puStack_108 != (undefined *)0x0) {
                      uVar12 = (ulong)puVar14 / (ulong)puStack_108;
                    }
                    puVar14 = puVar14 + -(uVar12 * (long)puStack_108);
                  }
                } while (puVar14 == unaff_x26);
              }
            }
LAB_10a63d770:
            unaff_x20 = (undefined **)0x68;
            __Znwm();
            *unaff_x20 = (undefined *)0x0;
            unaff_x20[1] = puVar20;
            lVar7 = plVar17[3];
            puVar9 = (undefined *)plVar17[2];
            unaff_x20[3] = (undefined *)plVar17[3];
            unaff_x20[2] = puVar9;
            if (lVar7 != 0) {
              plVar13 = (long *)(lVar7 + 8);
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar2) {
                  *plVar13 = *plVar13 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            ppuStack_c0 = unaff_x20 + 4;
            *(undefined1 *)(unaff_x20 + 0xc) = 3;
            if ((char)plVar17[0xc] == '\0') {
              uVar5 = 0;
            }
            else {
              param_2 = (undefined ***)(plVar17 + 4);
              FUN_10a005398(&ppuStack_c0);
              uVar5 = (undefined1)plVar17[0xc];
            }
            *(undefined1 *)(unaff_x20 + 0xc) = uVar5;
            if ((puVar11 == (undefined *)0x0) ||
               (fStack_f0 * (float)puVar11 < (float)(lStack_f8 + 1))) {
              uVar6 = 1;
              if ((undefined *)0x2 < puVar11) {
                uVar6 = (ulong)(((ulong)puVar11 & (ulong)(puVar11 + -1)) != 0);
              }
              param_2 = (undefined ***)(uVar6 | (long)puVar11 << 1);
              pppuVar4 = (undefined ***)(long)((float)(lStack_f8 + 1) / fStack_f0);
              if (param_2 <= pppuVar4) {
                param_2 = pppuVar4;
              }
              FUN_10a628538(&puStack_110);
              puVar11 = puStack_108;
              if (((ulong)puStack_108 & (ulong)(puStack_108 + -1)) == 0) {
                unaff_x26 = (undefined *)((ulong)(puStack_108 + -1) & (ulong)puVar20);
              }
              else {
                unaff_x26 = puVar20;
                if (puStack_108 <= puVar20) {
                  uVar6 = 0;
                  if (puStack_108 != (undefined *)0x0) {
                    uVar6 = (ulong)puVar20 / (ulong)puStack_108;
                  }
                  unaff_x26 = puVar20 + -(uVar6 * (long)puStack_108);
                }
              }
            }
            puVar10 = *(undefined8 **)(puStack_110 + (long)unaff_x26 * 8);
            if (puVar10 == (undefined8 *)0x0) {
              *unaff_x20 = (undefined *)ppuStack_100;
              *(undefined ****)(puStack_110 + (long)unaff_x26 * 8) = &ppuStack_100;
              ppuStack_100 = unaff_x20;
              if (*unaff_x20 != (undefined *)0x0) {
                puVar20 = *(undefined **)(*unaff_x20 + 8);
                if (((ulong)puVar11 & (ulong)(puVar11 + -1)) == 0) {
                  puVar20 = (undefined *)((ulong)puVar20 & (ulong)(puVar11 + -1));
                }
                else if (puVar11 <= puVar20) {
                  uVar6 = 0;
                  if (puVar11 != (undefined *)0x0) {
                    uVar6 = (ulong)puVar20 / (ulong)puVar11;
                  }
                  puVar20 = puVar20 + -(uVar6 * (long)puVar11);
                }
                *(undefined ***)(puStack_110 + (long)puVar20 * 8) = unaff_x20;
              }
            }
            else {
              *unaff_x20 = (undefined *)*puVar10;
              *puVar10 = unaff_x20;
            }
            lStack_f8 = lStack_f8 + 1;
LAB_10a63d8d0:
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        unaff_x22 = (undefined **)0x0;
        if (ppuStack_100 == (undefined **)0x0) {
          ppuVar19 = &puStack_110;
          FUN_10a57d4e8();
        }
        else {
          unaff_x22 = &puStack_e0;
          unaff_x23 = &ppuStack_c0;
          ppuVar19 = ppuStack_100;
          do {
            pppuVar4 = (undefined ***)ppuVar19[2];
            puVar11 = unaff_x21 + 0x18;
            FUN_10a628f48();
            param_2 = pppuVar4;
            if (puVar11 != (undefined *)0x0) {
              if (*(char *)(ppuVar19 + 0xc) == '\x01') {
                pcVar8 = (code *)ppuVar19[4];
                ppuStack_b8 = ppuStack_128;
                ppuStack_c0 = ppuStack_130;
                if (ppuStack_128 != (undefined **)0x0) {
                  ppuVar15 = ppuStack_128 + 1;
                  do {
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
                    if (bVar2) {
                      *ppuVar15 = *ppuVar15 + 1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                }
                param_2 = (undefined ***)(ppuVar19 + 4);
                (*pcVar8)(&ppuStack_c0);
                if (ppuStack_b8 != (undefined **)0x0) {
                  ppuVar15 = ppuStack_b8 + 1;
                  do {
                    puVar11 = *ppuVar15;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
                    if (bVar2) {
                      *ppuVar15 = puVar11 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                    ppuVar16 = ppuStack_b8;
                  } while (cVar1 != '\0');
LAB_10a63d9b0:
                  if (puVar11 == (undefined *)0x0) {
                    (**(code **)(*ppuVar16 + 0x10))(ppuVar16);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar16);
                  }
                }
              }
              else if (*(char *)(ppuVar19 + 0xc) == '\x02') {
                unaff_x20 = ppuVar19 + 4;
                FUN_10a688b40();
                ppuVar15 = ppuStack_128;
                if (unaff_x20 == (undefined **)0x0) {
                  param_2 = (undefined ***)0x0;
                  if (pppuVar4 != (undefined ***)0x0) {
                    puStack_b0 = ppuVar19[4];
                    puStack_a8 = ppuVar19[5];
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
                    ppuStack_d0 = ppuStack_130;
                    ppuStack_c8 = ppuStack_128;
                    if (ppuStack_128 == (undefined **)0x0) {
                      ppuStack_98 = (undefined **)0x0;
                    }
                    else {
                      ppuVar16 = ppuStack_128 + 1;
                      do {
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
                        if (bVar2) {
                          *ppuVar16 = *ppuVar16 + 1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      ppuStack_98 = ppuStack_128;
                      do {
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
                        if (bVar2) {
                          *ppuVar16 = *ppuVar16 + 1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                    }
                    ppuStack_a0 = ppuStack_130;
                    ppuStack_b8 = &PTR_FUN_110c01798;
                    ppuStack_d8 = (undefined **)0x0;
                    puStack_e0 = (undefined *)0x0;
                    ppuStack_c0 = (undefined **)FUN_10a63deac;
                    param_2 = &ppuStack_c0;
                    FUN_10a4634ec(pppuVar4);
                    (*(code *)*ppuStack_b8)(&ppuStack_b8);
                    if (ppuVar15 != (undefined **)0x0) {
                      ppuVar16 = ppuVar15 + 1;
                      do {
                        puVar11 = *ppuVar16;
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
                        if (bVar2) {
                          *ppuVar16 = puVar11 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      if (puVar11 == (undefined *)0x0) {
                        (**(code **)(*ppuVar15 + 0x10))(ppuVar15);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar15);
                      }
                    }
                    if (ppuStack_d8 != (undefined **)0x0) {
                      ppuVar15 = ppuStack_d8 + 1;
                      do {
                        puVar11 = *ppuVar15;
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
                        if (bVar2) {
                          *ppuVar15 = puVar11 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                        ppuVar16 = ppuStack_d8;
                      } while (cVar1 != '\0');
                      goto LAB_10a63d9b0;
                    }
                  }
                }
                else {
                  *unaff_x20 = (undefined *)
                               CONCAT44((int)((ulong)*unaff_x20 >> 0x20) + 1,(int)*unaff_x20 + 1);
                  param_2 = &ppuStack_130;
                  FUN_10a63dca8(ppuVar19[4]);
                  iVar3 = *(int *)((long)unaff_x20 + 4) + -1;
                  *(int *)((long)unaff_x20 + 4) = iVar3;
                  if (iVar3 == 0) {
                    *(undefined4 *)unaff_x20 = 0;
                  }
                }
              }
            }
            ppuVar15 = ppuStack_128;
            ppuVar19 = (undefined **)*ppuVar19;
          } while (ppuVar19 != (undefined **)0x0);
          ppuVar19 = &puStack_110;
          FUN_10a57d4e8();
          if (ppuVar15 == (undefined **)0x0) goto LAB_10a63db2c;
        }
        ppuVar16 = ppuVar15 + 1;
        do {
          puVar11 = *ppuVar16;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
          if (bVar2) {
            *ppuVar16 = puVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      else {
        if ((*(uint *)(param_1 + 2) & 0xfffffffe) != 2) goto LAB_10a63db2c;
        unaff_x21 = ppuVar15[0x4b];
        ppuVar15 = (undefined **)0x38;
        __Znwm();
        ppuVar15[1] = (undefined *)0x0;
        ppuVar15[2] = (undefined *)0x0;
        *ppuVar15 = (undefined *)&PTR_DAT_110c01828;
        ppuVar15[4] = (undefined *)0x0;
        ppuVar15[5] = (undefined *)0x0;
        ppuStack_130 = ppuVar15 + 3;
        *ppuStack_130 = (undefined *)&PTR_DAT_110bfb970;
        *(int *)(ppuVar15 + 6) = (int)unaff_x22;
        *(undefined4 *)((long)ppuVar15 + 0x34) = uVar18;
        puStack_108 = (undefined *)0x0;
        puStack_110 = (undefined *)0x0;
        lStack_f8 = 0;
        ppuStack_100 = (undefined **)0x0;
        fStack_f0 = *(float *)(unaff_x21 + 0x38);
        param_2 = *(undefined ****)(unaff_x21 + 0x20);
        ppuStack_128 = ppuVar15;
        FUN_10a629474(&puStack_110);
        plVar17 = *(long **)(unaff_x21 + 0x28);
        if (plVar17 != (long *)0x0) {
          unaff_x23 = (undefined ***)0x9ddfea08eb382d69;
          do {
            puVar11 = puStack_108;
            uVar6 = plVar17[2];
            uVar12 = ((ulong)(uint)((int)uVar6 << 3) + 8 ^ uVar6 >> 0x20) * -0x622015f714c7d297;
            uVar12 = (uVar6 >> 0x20 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
            puVar20 = (undefined *)((uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297);
            if (puStack_108 != (undefined *)0x0) {
              puVar9 = puStack_108 + -1;
              if (((ulong)puStack_108 & (ulong)puVar9) == 0) {
                unaff_x26 = (undefined *)((ulong)puVar20 & (ulong)puVar9);
              }
              else {
                unaff_x26 = puVar20;
                if (puStack_108 <= puVar20) {
                  uVar12 = 0;
                  if (puStack_108 != (undefined *)0x0) {
                    uVar12 = (ulong)puVar20 / (ulong)puStack_108;
                  }
                  unaff_x26 = puVar20 + -(uVar12 * (long)puStack_108);
                }
              }
              plVar13 = *(long **)(puStack_110 + (long)unaff_x26 * 8);
              if (plVar13 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar13 = (long *)*plVar13;
                    if (plVar13 == (long *)0x0) goto LAB_10a63d2dc;
                    puVar14 = (undefined *)plVar13[1];
                    if (puVar14 != puVar20) break;
                    if (plVar13[2] == uVar6) goto LAB_10a63d43c;
                  }
                  if (((ulong)puStack_108 & (ulong)puVar9) == 0) {
                    puVar14 = (undefined *)((ulong)puVar14 & (ulong)puVar9);
                  }
                  else if (puStack_108 <= puVar14) {
                    uVar12 = 0;
                    if (puStack_108 != (undefined *)0x0) {
                      uVar12 = (ulong)puVar14 / (ulong)puStack_108;
                    }
                    puVar14 = puVar14 + -(uVar12 * (long)puStack_108);
                  }
                } while (puVar14 == unaff_x26);
              }
            }
LAB_10a63d2dc:
            unaff_x20 = (undefined **)0x68;
            __Znwm();
            *unaff_x20 = (undefined *)0x0;
            unaff_x20[1] = puVar20;
            lVar7 = plVar17[3];
            puVar9 = (undefined *)plVar17[2];
            unaff_x20[3] = (undefined *)plVar17[3];
            unaff_x20[2] = puVar9;
            if (lVar7 != 0) {
              plVar13 = (long *)(lVar7 + 8);
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar2) {
                  *plVar13 = *plVar13 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            ppuStack_c0 = unaff_x20 + 4;
            *(undefined1 *)(unaff_x20 + 0xc) = 3;
            if ((char)plVar17[0xc] == '\0') {
              uVar5 = 0;
            }
            else {
              param_2 = (undefined ***)(plVar17 + 4);
              FUN_10a005398(&ppuStack_c0);
              uVar5 = (undefined1)plVar17[0xc];
            }
            *(undefined1 *)(unaff_x20 + 0xc) = uVar5;
            if ((puVar11 == (undefined *)0x0) ||
               (fStack_f0 * (float)puVar11 < (float)(lStack_f8 + 1))) {
              uVar6 = 1;
              if ((undefined *)0x2 < puVar11) {
                uVar6 = (ulong)(((ulong)puVar11 & (ulong)(puVar11 + -1)) != 0);
              }
              param_2 = (undefined ***)(uVar6 | (long)puVar11 << 1);
              pppuVar4 = (undefined ***)(long)((float)(lStack_f8 + 1) / fStack_f0);
              if (param_2 <= pppuVar4) {
                param_2 = pppuVar4;
              }
              FUN_10a629474(&puStack_110);
              puVar11 = puStack_108;
              if (((ulong)puStack_108 & (ulong)(puStack_108 + -1)) == 0) {
                unaff_x26 = (undefined *)((ulong)(puStack_108 + -1) & (ulong)puVar20);
              }
              else {
                unaff_x26 = puVar20;
                if (puStack_108 <= puVar20) {
                  uVar6 = 0;
                  if (puStack_108 != (undefined *)0x0) {
                    uVar6 = (ulong)puVar20 / (ulong)puStack_108;
                  }
                  unaff_x26 = puVar20 + -(uVar6 * (long)puStack_108);
                }
              }
            }
            puVar10 = *(undefined8 **)(puStack_110 + (long)unaff_x26 * 8);
            if (puVar10 == (undefined8 *)0x0) {
              *unaff_x20 = (undefined *)ppuStack_100;
              *(undefined ****)(puStack_110 + (long)unaff_x26 * 8) = &ppuStack_100;
              ppuStack_100 = unaff_x20;
              if (*unaff_x20 != (undefined *)0x0) {
                puVar20 = *(undefined **)(*unaff_x20 + 8);
                if (((ulong)puVar11 & (ulong)(puVar11 + -1)) == 0) {
                  puVar20 = (undefined *)((ulong)puVar20 & (ulong)(puVar11 + -1));
                }
                else if (puVar11 <= puVar20) {
                  uVar6 = 0;
                  if (puVar11 != (undefined *)0x0) {
                    uVar6 = (ulong)puVar20 / (ulong)puVar11;
                  }
                  puVar20 = puVar20 + -(uVar6 * (long)puVar11);
                }
                *(undefined ***)(puStack_110 + (long)puVar20 * 8) = unaff_x20;
              }
            }
            else {
              *unaff_x20 = (undefined *)*puVar10;
              *puVar10 = unaff_x20;
            }
            lStack_f8 = lStack_f8 + 1;
LAB_10a63d43c:
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        unaff_x22 = (undefined **)0x0;
        if (ppuStack_100 == (undefined **)0x0) {
          ppuVar19 = &puStack_110;
          FUN_10a57d814();
        }
        else {
          unaff_x22 = &puStack_e0;
          unaff_x23 = &ppuStack_c0;
          ppuVar19 = ppuStack_100;
          do {
            pppuVar4 = (undefined ***)ppuVar19[2];
            puVar11 = unaff_x21 + 0x18;
            FUN_10a629e84();
            param_2 = pppuVar4;
            if (puVar11 != (undefined *)0x0) {
              if (*(char *)(ppuVar19 + 0xc) == '\x01') {
                pcVar8 = (code *)ppuVar19[4];
                ppuStack_b8 = ppuStack_128;
                ppuStack_c0 = ppuStack_130;
                if (ppuStack_128 != (undefined **)0x0) {
                  ppuVar15 = ppuStack_128 + 1;
                  do {
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
                    if (bVar2) {
                      *ppuVar15 = *ppuVar15 + 1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                }
                param_2 = (undefined ***)(ppuVar19 + 4);
                (*pcVar8)(&ppuStack_c0);
                if (ppuStack_b8 != (undefined **)0x0) {
                  ppuVar15 = ppuStack_b8 + 1;
                  do {
                    puVar11 = *ppuVar15;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
                    if (bVar2) {
                      *ppuVar15 = puVar11 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                    ppuVar16 = ppuStack_b8;
                  } while (cVar1 != '\0');
LAB_10a63d51c:
                  if (puVar11 == (undefined *)0x0) {
                    (**(code **)(*ppuVar16 + 0x10))(ppuVar16);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar16);
                  }
                }
              }
              else if (*(char *)(ppuVar19 + 0xc) == '\x02') {
                unaff_x20 = ppuVar19 + 4;
                FUN_10a688b40();
                ppuVar15 = ppuStack_128;
                if (unaff_x20 == (undefined **)0x0) {
                  param_2 = (undefined ***)0x0;
                  if (pppuVar4 != (undefined ***)0x0) {
                    puStack_b0 = ppuVar19[4];
                    puStack_a8 = ppuVar19[5];
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
                    ppuStack_d0 = ppuStack_130;
                    ppuStack_c8 = ppuStack_128;
                    if (ppuStack_128 == (undefined **)0x0) {
                      ppuStack_98 = (undefined **)0x0;
                    }
                    else {
                      ppuVar16 = ppuStack_128 + 1;
                      do {
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
                        if (bVar2) {
                          *ppuVar16 = *ppuVar16 + 1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      ppuStack_98 = ppuStack_128;
                      do {
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
                        if (bVar2) {
                          *ppuVar16 = *ppuVar16 + 1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                    }
                    ppuStack_a0 = ppuStack_130;
                    ppuStack_b8 = &PTR_FUN_110c01800;
                    ppuStack_d8 = (undefined **)0x0;
                    puStack_e0 = (undefined *)0x0;
                    ppuStack_c0 = (undefined **)FUN_10a63e1c0;
                    param_2 = &ppuStack_c0;
                    FUN_10a4634ec(pppuVar4);
                    (*(code *)*ppuStack_b8)(&ppuStack_b8);
                    if (ppuVar15 != (undefined **)0x0) {
                      ppuVar16 = ppuVar15 + 1;
                      do {
                        puVar11 = *ppuVar16;
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
                        if (bVar2) {
                          *ppuVar16 = puVar11 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      if (puVar11 == (undefined *)0x0) {
                        (**(code **)(*ppuVar15 + 0x10))(ppuVar15);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar15);
                      }
                    }
                    if (ppuStack_d8 != (undefined **)0x0) {
                      ppuVar15 = ppuStack_d8 + 1;
                      do {
                        puVar11 = *ppuVar15;
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
                        if (bVar2) {
                          *ppuVar15 = puVar11 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                        ppuVar16 = ppuStack_d8;
                      } while (cVar1 != '\0');
                      goto LAB_10a63d51c;
                    }
                  }
                }
                else {
                  *unaff_x20 = (undefined *)
                               CONCAT44((int)((ulong)*unaff_x20 >> 0x20) + 1,(int)*unaff_x20 + 1);
                  param_2 = &ppuStack_130;
                  FUN_10a63dfbc(ppuVar19[4]);
                  iVar3 = *(int *)((long)unaff_x20 + 4) + -1;
                  *(int *)((long)unaff_x20 + 4) = iVar3;
                  if (iVar3 == 0) {
                    *(undefined4 *)unaff_x20 = 0;
                  }
                }
              }
            }
            ppuVar15 = ppuStack_128;
            ppuVar19 = (undefined **)*ppuVar19;
          } while (ppuVar19 != (undefined **)0x0);
          ppuVar19 = &puStack_110;
          FUN_10a57d814();
          if (ppuVar15 == (undefined **)0x0) goto LAB_10a63db2c;
        }
        ppuVar16 = ppuVar15 + 1;
        do {
          puVar11 = *ppuVar16;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
          if (bVar2) {
            *ppuVar16 = puVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (puVar11 == (undefined *)0x0) {
        (**(code **)(*ppuVar15 + 0x10))(ppuVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar19 = ppuVar15;
      }
    }
  }
LAB_10a63db2c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b8)(unaff_x23 + 1);
  FUN_10a63e278(unaff_x22 + 2);
  func_0x00010a004dac(&puStack_e0);
  FUN_10a57d814(&puStack_110);
  FUN_10a63e278(&ppuStack_130);
  ppuVar15 = ppuVar19;
  __Unwind_Resume();
  pcStack_138 = FUN_10a63dca8;
  ppuStack_160 = unaff_x22;
  puStack_158 = unaff_x21;
  ppuStack_150 = unaff_x20;
  ppuStack_148 = ppuVar19;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&ppuStack_190,ppuVar15 + 1,*ppuVar15);
  func_0x000109884820(&puStack_1b8,&ppuStack_190,*ppuVar15);
  if (ppuStack_190 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_190)();
  }
  (**(code **)(*(long *)*ppuVar15 + 0x30))(&puStack_1c0);
  plVar17 = (long *)*ppuVar15;
  ppuStack_188 = param_2[1];
  ppuStack_190 = (undefined8 **)*param_2;
  if (param_2[1] != (undefined **)0x0) {
    ppuVar19 = param_2[1] + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
      if (bVar2) {
        *ppuVar19 = *ppuVar19 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuStack_170 = &PTR_DAT_110bffb88;
  func_0x000109899de4(&puStack_1a0,plVar17,&ppuStack_190,&ppuStack_170,0,0);
  ppuVar19 = ppuStack_188;
  if (ppuStack_188 != (undefined **)0x0) {
    ppuVar15 = ppuStack_188 + 1;
    do {
      puVar11 = *ppuVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
      if (bVar2) {
        *ppuVar15 = puVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar11 == (undefined *)0x0) {
      (**(code **)(*ppuStack_188 + 0x10))(ppuStack_188);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
    }
  }
  uStack_168 = 1;
  ppuStack_170 = &puStack_1a0;
  (**(code **)(*plVar17 + 0x58))(plVar17);
  ppuStack_190 = &puStack_1b8;
  ppuStack_188 = (undefined **)plVar17;
  puStack_180 = (undefined1 *)&puStack_1c0;
  pppuStack_178 = &ppuStack_170;
  func_0x0001098960c0(aiStack_1b0);
  if ((3 < aiStack_1b0[0]) && (puStack_1a8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_1a8)();
  }
  if ((3 < (int)puStack_1a0) && (puStack_198 != (undefined8 *)0x0)) {
    (**(code **)*puStack_198)();
  }
  if (puStack_1c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_1c0)();
  }
  if (puStack_1b8 != (undefined8 *)0x0) {
    (**(code **)*puStack_1b8)();
  }
  return;
}



/* Entry: 10a63dca8; end: 10a63deab;  */

void FUN_10a63dca8(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110bffb88;
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



/* Entry: 10a63deac; end: 10a63debb;  */

void FUN_10a63deac(long param_1)

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
  ppuStack_40 = &PTR_DAT_110bffb88;
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



/* Entry: 10a63debc; end: 10a63dee3;  */

long FUN_10a63debc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a63df64(param_1 + 0x18);
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



/* Entry: 10a63dee4; end: 10a63df33;  */

void FUN_10a63dee4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c01798;
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



/* Entry: 10a63df34; end: 10a63df53;  */

void FUN_10a63df34(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c017c0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a63df54; end: 10a63df63;  */

void FUN_10a63df54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a63df5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a63df64; end: 10a63dfbb;  */

long FUN_10a63df64(long param_1)

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



/* Entry: 10a63dfbc; end: 10a63e1bf;  */

void FUN_10a63dfbc(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110bffba0;
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



/* Entry: 10a63e1c0; end: 10a63e1cf;  */

void FUN_10a63e1c0(long param_1)

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
  ppuStack_40 = &PTR_DAT_110bffba0;
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



/* Entry: 10a63e1d0; end: 10a63e1f7;  */

long FUN_10a63e1d0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a63e278(param_1 + 0x18);
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



/* Entry: 10a63e1f8; end: 10a63e247;  */

void FUN_10a63e1f8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c01800;
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



/* Entry: 10a63e248; end: 10a63e267;  */

void FUN_10a63e248(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c01828;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a63e268; end: 10a63e277;  */

void FUN_10a63e268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a63e270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a63e278; end: 10a63e2cf;  */

long FUN_10a63e278(long param_1)

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



/* Entry: 10a63e2d0; end: 10a63e303;  */

void FUN_10a63e2d0(void)

{
  return;
}


