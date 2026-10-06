/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109181064; end: 1091814d7;  */

undefined8 FUN_109181064(long *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double *pdVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  double *pdVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  ulong uStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  long *plStack_b0;
  long lStack_a8;
  float fStack_a0;
  
  lVar19 = *param_1;
  lVar8 = param_1[1];
  if (8 < (ulong)(lVar8 - lVar19)) {
    uStack_b8 = 0;
    lStack_c0 = 0;
    lStack_a8 = 0;
    plStack_b0 = (long *)0x0;
    fStack_a0 = 1.0;
    if (lVar8 != lVar19) {
      uVar14 = 0;
      uVar15 = 0x18;
      do {
        lVar16 = *(long *)(lVar19 + uVar14 * 8);
        uVar12 = (ulong)*(uint *)(lVar16 + 8);
        if (0 < (int)*(uint *)(lVar16 + 8)) {
          lVar19 = 0;
          uVar7 = uVar14;
          do {
            iVar18 = (int)lVar19;
            iVar2 = iVar18 - (int)uVar12;
            iVar1 = iVar18;
            if (-1 < iVar2) {
              iVar1 = iVar2;
            }
            pdVar13 = (double *)(*(long *)(lVar16 + 0x10) + (long)iVar1 * 0x18);
            lVar19 = lVar19 + 1;
            iVar17 = (int)lVar19;
            iVar1 = iVar17;
            if (-1 < iVar2 + 1) {
              iVar1 = iVar2 + 1;
            }
            dVar20 = *pdVar13;
            dVar21 = pdVar13[1];
            pdVar6 = (double *)(*(long *)(lVar16 + 0x10) + (long)iVar1 * 0x18);
            dVar22 = pdVar13[2];
            dVar23 = *pdVar6;
            dVar24 = pdVar6[1];
            dVar25 = pdVar6[2];
            plVar10 = &lStack_c0;
            dStack_128 = dVar20;
            dStack_120 = dVar21;
            dStack_118 = dVar22;
            dStack_110 = dVar23;
            dStack_108 = dVar24;
            dStack_100 = dVar25;
            uStack_f8 = uVar7;
            dStack_f0 = dVar20;
            dStack_e8 = dVar21;
            dStack_e0 = dVar22;
            dStack_d8 = dVar23;
            dStack_d0 = dVar24;
            dStack_c8 = dVar25;
            FUN_109184104(plVar10,&dStack_128,&dStack_128);
            if (((ulong)plVar10 & 1) == 0) {
LAB_109181260:
              pdVar13 = &dStack_128;
              FUN_10917845c(pdVar13,&dStack_f0);
              pdVar6 = &dStack_128;
              FUN_10917845c(pdVar6,&dStack_d8);
              uVar12 = uStack_b8;
              uVar14 = (long)pdVar13 + (long)pdVar6 * 2;
              if (uStack_b8 == 0) goto LAB_109181350;
              uVar7 = uStack_b8 - 1;
              if ((uStack_b8 & uVar7) == 0) {
                uVar15 = uVar7 & uVar14;
              }
              else {
                uVar15 = uVar14;
                if (uStack_b8 <= uVar14) {
                  uVar15 = 0;
                  if (uStack_b8 != 0) {
                    uVar15 = uVar14 / uStack_b8;
                  }
                  uVar15 = uVar14 - uVar15 * uStack_b8;
                }
              }
              plVar10 = *(long **)(lStack_c0 + uVar15 * 8);
              if (plVar10 != (long *)0x0) goto LAB_1091812c8;
              goto LAB_109181350;
            }
            iVar1 = iVar18 - *(int *)(lVar16 + 8);
            if (-1 < iVar1 + 1) {
              iVar17 = iVar1 + 1;
            }
            pdVar13 = (double *)(*(long *)(lVar16 + 0x10) + (long)iVar17 * 0x18);
            if (-1 < iVar1) {
              iVar18 = iVar1;
            }
            dVar20 = *pdVar13;
            dVar21 = pdVar13[1];
            pdVar6 = (double *)(*(long *)(lVar16 + 0x10) + (long)iVar18 * 0x18);
            dVar22 = pdVar13[2];
            dVar23 = *pdVar6;
            dVar24 = pdVar6[1];
            dVar25 = pdVar6[2];
            plVar10 = &lStack_c0;
            dStack_128 = dVar20;
            dStack_120 = dVar21;
            dStack_118 = dVar22;
            dStack_110 = dVar23;
            dStack_108 = dVar24;
            dStack_100 = dVar25;
            uStack_f8 = uVar7;
            dStack_f0 = dVar20;
            dStack_e8 = dVar21;
            dStack_e0 = dVar22;
            dStack_d8 = dVar23;
            dStack_d0 = dVar24;
            dStack_c8 = dVar25;
            FUN_109184104(plVar10,&dStack_128,&dStack_128);
            if (((ulong)plVar10 & 1) == 0) goto LAB_109181260;
            uVar12 = (ulong)*(int *)(lVar16 + 8);
            uVar7 = uVar7 + 0x100000000;
          } while (lVar19 < (long)uVar12);
          lVar19 = *param_1;
          lVar8 = param_1[1];
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < (ulong)(lVar8 - lVar19 >> 3));
    }
    FUN_1091840bc(&lStack_c0);
    lVar19 = *param_1;
    lVar8 = param_1[1];
  }
  if (lVar8 == lVar19) {
    uVar4 = 1;
  }
  else {
    uVar14 = 1;
    uVar15 = 0;
    do {
      uVar4 = *(undefined8 *)(lVar19 + uVar15 * 8);
      FUN_10917ede8();
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      uVar12 = uVar15 + 1;
      lVar19 = *param_1;
      uVar9 = param_1[1] - lVar19 >> 3;
      uVar7 = uVar14;
      if (uVar12 < uVar9) {
        do {
          uVar5 = *(undefined8 *)(lVar19 + uVar15 * 8);
          FUN_109180038(uVar5,*(undefined8 *)(lVar19 + uVar7 * 8));
          if ((int)uVar5 < 0) {
            return 0;
          }
          uVar7 = uVar7 + 1;
          lVar19 = *param_1;
          uVar9 = param_1[1] - lVar19 >> 3;
        } while (uVar7 < uVar9);
      }
      uVar14 = uVar14 + 1;
      uVar15 = uVar12;
    } while (uVar12 < uVar9);
  }
  return uVar4;
LAB_1091812c8:
  plVar10 = (long *)*plVar10;
  if (plVar10 == (long *)0x0) goto LAB_109181350;
  uVar9 = plVar10[1];
  if (uVar9 == uVar14) {
    if (((((double)plVar10[2] == dVar20) && ((double)plVar10[3] == dVar21)) &&
        ((double)plVar10[4] == dVar22)) &&
       ((((double)plVar10[5] == dVar23 && ((double)plVar10[6] == dVar24)) &&
        ((double)plVar10[7] == dVar25)))) goto LAB_109181470;
    goto LAB_1091812c8;
  }
  if ((uStack_b8 & uVar7) == 0) {
    uVar9 = uVar9 & uVar7;
  }
  else if (uStack_b8 <= uVar9) {
    uVar3 = 0;
    if (uStack_b8 != 0) {
      uVar3 = uVar9 / uStack_b8;
    }
    uVar9 = uVar9 - uVar3 * uStack_b8;
  }
  if (uVar9 != uVar15) {
LAB_109181350:
    plVar10 = (long *)0x48;
    __Znwm();
    *plVar10 = 0;
    plVar10[1] = uVar14;
    plVar10[2] = (long)dVar20;
    plVar10[3] = (long)dVar21;
    plVar10[4] = (long)dVar22;
    plVar10[5] = (long)dVar23;
    plVar10[6] = (long)dVar24;
    plVar10[7] = (long)dVar25;
    plVar10[8] = 0;
    if ((uVar12 == 0) || (fStack_a0 * (float)uVar12 < (float)(lStack_a8 + 1))) {
      uVar15 = 1;
      if (2 < uVar12) {
        uVar15 = (ulong)((uVar12 & uVar12 - 1) != 0);
      }
      uVar15 = uVar15 | uVar12 << 1;
      uVar12 = (ulong)((float)(lStack_a8 + 1) / fStack_a0);
      if (uVar15 <= uVar12) {
        uVar15 = uVar12;
      }
      FUN_1091843ac(&lStack_c0,uVar15);
      uVar12 = uStack_b8;
      if ((uStack_b8 & uStack_b8 - 1) == 0) {
        uVar15 = uStack_b8 - 1 & uVar14;
      }
      else {
        uVar15 = uVar14;
        if (uStack_b8 <= uVar14) {
          uVar15 = 0;
          if (uStack_b8 != 0) {
            uVar15 = uVar14 / uStack_b8;
          }
          uVar15 = uVar14 - uVar15 * uStack_b8;
        }
      }
    }
    plVar11 = *(long **)(lStack_c0 + uVar15 * 8);
    if (plVar11 == (long *)0x0) {
      *plVar10 = (long)plStack_b0;
      *(long ***)(lStack_c0 + uVar15 * 8) = &plStack_b0;
      plStack_b0 = plVar10;
      if (*plVar10 != 0) {
        uVar14 = *(ulong *)(*plVar10 + 8);
        if ((uVar12 & uVar12 - 1) == 0) {
          uVar14 = uVar14 & uVar12 - 1;
        }
        else if (uVar12 <= uVar14) {
          uVar15 = 0;
          if (uVar12 != 0) {
            uVar15 = uVar14 / uVar12;
          }
          uVar14 = uVar14 - uVar15 * uVar12;
        }
        *(long **)(lStack_c0 + uVar14 * 8) = plVar10;
      }
    }
    else {
      *plVar10 = *plVar11;
      *plVar11 = (long)plVar10;
    }
    lStack_a8 = lStack_a8 + 1;
LAB_109181470:
    FUN_1091840bc(&lStack_c0);
    return 0;
  }
  goto LAB_1091812c8;
}



/* Entry: 1091814d8; end: 109181577;  */

void FUN_1091814d8(long param_1,long param_2,int param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lStack_48;
  
  lStack_48 = param_2;
  if (param_2 != 0) {
    *(int *)(param_2 + 0x4c) = param_3;
    FUN_109180c90(param_1 + 8,&lStack_48);
  }
  lVar1 = param_4;
  FUN_109184570(param_4,lStack_48,&lStack_48);
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(lVar1 + 0x30) != lVar2) {
    uVar3 = 0;
    do {
      FUN_1091814d8(param_1,*(undefined8 *)(lVar2 + uVar3 * 8),param_3 + 1,param_4);
      uVar3 = uVar3 + 1;
      lVar2 = *(long *)(lVar1 + 0x28);
    } while (uVar3 < (ulong)(*(long *)(lVar1 + 0x30) - lVar2 >> 3));
  }
  return;
}



/* Entry: 109181578; end: 10918162b;  */

ulong FUN_109181578(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong *puVar6;
  
  if (param_1 == param_2) {
    return 1;
  }
  plVar2 = (long *)(param_3 + 8);
  plVar5 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar5 != (long *)0x0) {
    do {
      lVar3 = 8;
      if (param_1 <= (ulong)plVar5[4]) {
        lVar3 = 0;
        plVar4 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar3);
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar2) && ((ulong)plVar4[4] <= param_1)) {
      plVar2 = plVar4;
    }
  }
  lVar3 = plVar2[6] - plVar2[5];
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = lVar3 >> 3;
    puVar6 = (ulong *)plVar2[5];
    do {
      lVar3 = lVar3 + -1;
      uVar1 = *puVar6;
      FUN_109181578(uVar1,param_2,param_3);
      if ((uVar1 & 1) != 0) {
        return uVar1;
      }
      puVar6 = puVar6 + 1;
    } while (lVar3 != 0);
  }
  return uVar1;
}



/* Entry: 10918162c; end: 1091816eb;  */

double FUN_10918162c(double param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  lVar2 = *(long *)(param_2 + 8);
  if ((int)((ulong)(*(long *)(param_2 + 0x10) - lVar2) >> 3) < 1) {
    dVar5 = 0.0;
  }
  else {
    lVar3 = 0;
    dVar5 = 0.0;
    do {
      lVar2 = *(long *)(lVar2 + lVar3 * 8);
      iVar1 = -1;
      if ((*(uint *)(lVar2 + 0x4c) & 1) == 0) {
        iVar1 = 1;
      }
      FUN_10917f18c(lVar2,FUN_109178f88);
      dVar4 = param_1 + 12.566370614359172;
      if (0.0 <= param_1) {
        dVar4 = param_1;
      }
      param_1 = (double)NEON_fminnm(dVar4,0x402921fb54442d18);
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      dVar5 = dVar5 + param_1 * (double)iVar1;
      lVar3 = lVar3 + 1;
      lVar2 = *(long *)(param_2 + 8);
    } while (lVar3 < (int)((ulong)(*(long *)(param_2 + 0x10) - lVar2) >> 3));
  }
  return dVar5;
}



/* Entry: 1091816ec; end: 1091818f3;  */

uint FUN_1091816ec(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 8);
  if ((int)((ulong)(*(long *)(param_1 + 0x10) - lVar3) >> 3) < 1) {
    return 0;
  }
  lVar5 = 0;
  uVar4 = 0;
  do {
    uVar2 = *(undefined8 *)(lVar3 + lVar5 * 8);
    FUN_109180038(uVar2,param_2);
    iVar1 = (int)uVar2;
    if (iVar1 < 0) break;
    uVar4 = uVar4 ^ iVar1 != 0;
    lVar5 = lVar5 + 1;
    lVar3 = *(long *)(param_1 + 8);
  } while (lVar5 < (int)((ulong)(*(long *)(param_1 + 0x10) - lVar3) >> 3));
  if (iVar1 < 0) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* Entry: 1091818f4; end: 1091819eb;  */

undefined8 FUN_1091818f4(long param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_2 + 8);
  lVar4 = *(long *)(param_2 + 0x10);
  if ((int)((ulong)(lVar4 - lVar8) >> 3) < 1) {
    return 0;
  }
  lVar7 = 0;
  do {
    uVar6 = *(ulong *)(lVar8 + lVar7 * 8);
    if (((*(byte *)(uVar6 + 0x4c) & 1) == 0) &&
       (lVar5 = *(long *)(param_1 + 8), 0 < (int)((ulong)(*(long *)(param_1 + 0x10) - lVar5) >> 3)))
    {
      lVar8 = 0;
      bVar1 = false;
      do {
        uVar2 = *(undefined8 *)(lVar5 + lVar8 * 8);
        FUN_10917f694(uVar2,uVar6);
        if ((int)uVar2 == 0) {
          uVar3 = uVar6;
          FUN_10917f694(uVar6,*(undefined8 *)(*(long *)(param_1 + 8) + lVar8 * 8));
          if ((uVar3 & 1) == 0) {
            uVar3 = *(ulong *)(*(long *)(param_1 + 8) + lVar8 * 8);
            FUN_10917f878(uVar3,uVar6);
            if ((uVar3 & 1) != 0) {
              return 1;
            }
          }
        }
        else {
          bVar1 = (bool)(bVar1 ^ 1);
        }
        lVar8 = lVar8 + 1;
        lVar5 = *(long *)(param_1 + 8);
      } while (lVar8 < (int)((ulong)(*(long *)(param_1 + 0x10) - lVar5) >> 3));
      if (bVar1) {
        return 1;
      }
      lVar8 = *(long *)(param_2 + 8);
      lVar4 = *(long *)(param_2 + 0x10);
    }
    lVar7 = lVar7 + 1;
    if ((int)((ulong)(lVar4 - lVar8) >> 3) <= lVar7) {
      return 0;
    }
  } while( true );
}



/* Entry: 1091819ec; end: 109181c47;  */

void FUN_1091819ec(ulong param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_68 [8];
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  undefined **ppuStack_40;
  byte bStack_38;
  undefined7 uStack_37;
  
  if (((*(long *)(param_1 + 0x10) - (long)*(ulong **)(param_1 + 8) & 0x7fffffff8U) == 8) &&
     ((*(long *)(param_2 + 0x10) - (long)*(long **)(param_2 + 8) & 0x7fffffff8U) == 8)) {
    uVar3 = **(ulong **)(param_1 + 8);
    lVar4 = **(long **)(param_2 + 8);
    lVar1 = uVar3 + 0x20;
    FUN_10917d2a4(lVar1,lVar4 + 0x20);
    if (((int)lVar1 != 0) &&
       ((uVar2 = uVar3,
        FUN_10917e38c(uVar3,*(long *)(lVar4 + 0x10) +
                            (ulong)(-*(int *)(lVar4 + 8) &
                                   (-*(int *)(lVar4 + 8) >> 0x1f ^ 0xffffffffU)) * 0x18),
        (uVar2 & 1) != 0 ||
        (uVar2 = uVar3,
        FUN_10917eb5c(uVar3,*(long *)(lVar4 + 0x10) +
                            (ulong)(-*(int *)(lVar4 + 8) &
                                   (-*(int *)(lVar4 + 8) >> 0x1f ^ 0xffffffffU)) * 0x18),
        -1 < (int)uVar2)))) {
      ppuStack_40 = &PTR_FUN_110adeea8;
      bStack_38 = 0;
      uVar2 = uVar3;
      FUN_10917fc04(uVar3,lVar4,&ppuStack_40);
      if (((uVar2 & 1) == 0) &&
         (((((bStack_38 & 1) == 0 &&
            (FUN_10917d374(auStack_68,uVar3 + 0x20,lVar4 + 0x20), dStack_60 == -1.5707963267948966))
           && (dStack_58 == 1.5707963267948966)) &&
          ((dStack_48 - dStack_50 == 6.283185307179586 &&
           (lVar1 = lVar4,
           FUN_10917e38c(lVar4,*(long *)(uVar3 + 0x10) +
                               (ulong)(-*(int *)(uVar3 + 8) &
                                      (-*(int *)(uVar3 + 8) >> 0x1f ^ 0xffffffffU)) * 0x18),
           (int)lVar1 != 0)))))) {
        FUN_10917eb5c(lVar4,*(long *)(uVar3 + 0x10) +
                            (ulong)(-*(int *)(uVar3 + 8) &
                                   (-*(int *)(uVar3 + 8) >> 0x1f ^ 0xffffffffU)) * 0x18);
      }
    }
    return;
  }
  uVar3 = param_1 + 0x20;
  FUN_10917d2a4(uVar3,param_2 + 0x20);
  if (((uVar3 & 1) != 0) ||
     (FUN_1091782dc(&ppuStack_40,param_1 + 0x38,param_2 + 0x38),
     (double)CONCAT71(uStack_37,bStack_38) - (double)ppuStack_40 == 6.283185307179586)) {
    if ((*(char *)(param_1 + 0x49) == '\0') && (*(char *)(param_2 + 0x49) == '\0')) {
      lVar1 = *(long *)(param_2 + 8);
      if (0 < (int)((ulong)(*(long *)(param_2 + 0x10) - lVar1) >> 3)) {
        lVar4 = 0;
        do {
          uVar3 = param_1;
          func_0x000109181778(param_1,*(undefined8 *)(lVar1 + lVar4 * 8));
          if ((uVar3 & 1) == 0) {
            return;
          }
          lVar4 = lVar4 + 1;
          lVar1 = *(long *)(param_2 + 8);
        } while (lVar4 < (int)((ulong)(*(long *)(param_2 + 0x10) - lVar1) >> 3));
      }
    }
    else {
      uVar3 = param_1;
      func_0x0001091817e8(param_1,param_2);
      if ((int)uVar3 != 0) {
        func_0x000109181870(param_2,param_1);
      }
    }
  }
  return;
}



/* Entry: 109181c48; end: 109181c4f;  */

void FUN_109181c48(undefined8 *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  
  dVar5 = *(double *)(param_2 + 0x28);
  dVar4 = *(double *)(param_2 + 0x30);
  if (dVar5 <= dVar4) {
    dVar8 = dVar5 + dVar4;
    if (0.0 <= dVar8) {
      dVar4 = -dVar5;
    }
    uVar7 = 0xbff0000000000000;
    if (0.0 <= dVar8) {
      uVar7 = 0x3ff0000000000000;
    }
    dVar5 = 2.0;
    if (dVar4 + 1.5707963267948966 < 3.141592653589793) {
      dVar5 = (dVar4 + 1.5707963267948966) * 0.5;
      _sin();
      dVar5 = dVar5 * (dVar5 + dVar5);
    }
    dVar9 = *(double *)(param_2 + 0x38);
    dVar10 = *(double *)(param_2 + 0x40);
    dVar6 = dVar10 - dVar9;
    dVar4 = dVar6;
    _remainder(dVar6,0x401921fb54442d18);
    if ((0.0 <= dVar4) && (dVar6 < 6.283185307179586)) {
      dVar4 = (dVar9 + dVar10) * 0.5;
      lVar1 = 8;
      if (0.0 < dVar4) {
        lVar1 = 0;
      }
      dStack_88 = dVar4 + *(double *)(&UNK_10ddd0980 + lVar1);
      if (dVar9 <= dVar10) {
        dStack_88 = dVar4;
      }
      dVar8 = dVar8 * 0.5;
      dStack_a8 = dVar8;
      _cos();
      dVar4 = dStack_88;
      _cos();
      dVar6 = dStack_88;
      _sin();
      dVar9 = dStack_a8;
      _sin();
      uVar3 = 0;
      *param_1 = &PTR_FUN_110adec28;
      param_1[1] = dVar8 * dVar4;
      param_1[2] = dVar8 * dVar6;
      param_1[3] = dVar9;
      param_1[4] = 0;
      do {
        dVar9 = ((double *)(param_2 + 0x28))[uVar3 >> 1];
        uVar2 = (uint)uVar3;
        dStack_90 = ((double *)(param_2 + 0x38))[uVar2 & 1 ^ uVar2 >> 1];
        dStack_88 = dVar9;
        _cos();
        dVar4 = dStack_90;
        _cos();
        dVar8 = dStack_90;
        _sin();
        dVar6 = dStack_88;
        _sin();
        dStack_a8 = dVar9 * dVar4;
        dStack_a0 = dVar9 * dVar8;
        dStack_98 = dVar6;
        FUN_109179074(param_1,&dStack_a8);
        uVar3 = (ulong)(uVar2 + 1);
      } while (uVar2 + 1 != 4);
      if ((double)param_1[4] < dVar5) {
        return;
      }
    }
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = &PTR_FUN_110adec28;
    param_1[3] = uVar7;
    param_1[4] = dVar5;
  }
  else {
    *param_1 = &PTR_FUN_110adec28;
    param_1[1] = 0x3ff0000000000000;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0xbff0000000000000;
  }
  return;
}



/* Entry: 109181c50; end: 109181d77;  */

long * FUN_109181c50(long *param_1,long param_2)

{
  long *plVar1;
  double dVar2;
  double dVar3;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  
  if ((param_1[2] - param_1[1] & 0x7fffffff8U) == 8) {
    plVar1 = *(long **)param_1[1];
                    /* WARNING: Could not recover jumptable at 0x000109181c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
    return plVar1;
  }
  FUN_10917adb8(&dStack_e0,param_2 + 0xb);
  dVar2 = dStack_d8 * dStack_d8 + dStack_e0 * dStack_e0 + dStack_d0 * dStack_d0;
  dVar3 = SQRT(dVar2);
  dStack_120 = 1.0 / dVar3;
  if (dVar2 == 0.0) {
    dStack_120 = dVar3;
  }
  dStack_130 = dStack_e0 * dStack_120;
  dStack_128 = dStack_d8 * dStack_120;
  dStack_120 = dStack_d0 * dStack_120;
  plVar1 = param_1 + 4;
  FUN_10917d7f4(plVar1,&dStack_130);
  if ((int)plVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    FUN_10917e810(&dStack_e0,param_2);
    FUN_109180d50(&dStack_130,&dStack_e0);
    FUN_1091819ec(param_1,&dStack_130);
    FUN_109180fa4(&dStack_130);
    FUN_10917e998(&dStack_e0);
  }
  return param_1;
}



/* Entry: 109181d78; end: 109181e6b;  */

long * FUN_109181d78(long *param_1,long *param_2)

{
  long *plVar1;
  undefined1 auStack_128 [80];
  undefined1 auStack_d8 [168];
  
  if ((param_1[2] - param_1[1] & 0x7fffffff8U) == 8) {
    plVar1 = *(long **)param_1[1];
                    /* WARNING: Could not recover jumptable at 0x000109181dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
    return plVar1;
  }
  (**(code **)(*param_2 + 0x20))(auStack_d8,param_2);
  plVar1 = param_1 + 4;
  func_0x00010917d2dc(plVar1,auStack_d8);
  if ((int)plVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    FUN_10917e810(auStack_d8,param_2);
    FUN_109180d50(auStack_128,auStack_d8);
    func_0x000109181b18(param_1,auStack_128);
    FUN_109180fa4(auStack_128);
    FUN_10917e998(auStack_d8);
  }
  return param_1;
}



/* Entry: 109181e6c; end: 109181e6f;  */

uint FUN_109181e6c(long param_1,double *param_2)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  long lVar13;
  double *pdVar14;
  double *pdVar15;
  uint uVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  long lStack_110;
  byte bStack_108;
  int iStack_104;
  int iStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  int iStack_e0;
  undefined8 *puStack_d8;
  double *pdStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double *pdStack_b0;
  uint uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puVar6;
  
  if ((*(long *)(param_1 + 0x10) - (long)*(long **)(param_1 + 8) & 0x7fffffff8U) != 8) {
    lVar8 = param_1 + 0x20;
    FUN_10917d7f4(lVar8,param_2);
    if (((int)lVar8 == 0) ||
       (lVar8 = *(long *)(param_1 + 8), (int)((ulong)(*(long *)(param_1 + 0x10) - lVar8) >> 3) < 1))
    {
      uVar16 = 0;
    }
    else {
      lVar13 = 0;
      uVar16 = 0;
      do {
        uVar9 = *(undefined8 *)(lVar8 + lVar13 * 8);
        FUN_10917e38c(uVar9,param_2);
        uVar16 = uVar16 ^ (uint)uVar9;
        if (((uVar16 & 1) != 0) && (*(char *)(param_1 + 0x49) == '\0')) {
          uVar16 = 1;
          break;
        }
        lVar13 = lVar13 + 1;
        lVar8 = *(long *)(param_1 + 8);
      } while (lVar13 < (int)((ulong)(*(long *)(param_1 + 0x10) - lVar8) >> 3));
    }
    return uVar16 & 1;
  }
  lVar8 = **(long **)(param_1 + 8);
  iVar3 = (int)lVar8 + 0x20;
  FUN_10917d7f4();
  if (iVar3 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = (uint)*(byte *)(lVar8 + 0x48);
    uStack_98 = 0x3feffbb2817d5fad;
    uStack_a0 = 0x3f72b579b431bee4;
    uStack_90 = 0x3fa06d338a2f992d;
    iVar10 = *(int *)(lVar8 + 8);
    pdVar14 = (double *)
              (*(long *)(lVar8 + 0x10) + (ulong)(-iVar10 & (-iVar10 >> 0x1f ^ 0xffffffffU)) * 0x18);
    puStack_d8 = &uStack_a0;
    dVar19 = param_2[1] * -0.032083140009307655 + param_2[2] * 0.9994747666450984;
    dVar20 = param_2[2] * -0.0045675996835681 + *param_2 * 0.032083140009307655;
    dVar21 = *param_2 * -0.9994747666450984 + param_2[1] * 0.0045675996835681;
    dVar18 = pdVar14[1] * dVar20 + *pdVar14 * dVar19 + pdVar14[2] * dVar21;
    iVar3 = -(uint)(dVar18 < -8e-16);
    if (8e-16 < dVar18) {
      iVar3 = 1;
    }
    pdStack_d0 = param_2;
    dStack_c8 = dVar19;
    dStack_c0 = dVar20;
    dStack_b8 = dVar21;
    pdStack_b0 = pdVar14;
    if (iVar3 == 0) {
      puVar6 = &uStack_a0;
      FUN_109178740(puVar6,param_2,pdVar14);
      iVar3 = (int)puVar6;
      iVar10 = *(int *)(lVar8 + 8);
    }
    uVar17 = -iVar3;
    uStack_a8 = uVar17;
    if (1999 < iVar10) {
      lStack_110 = lVar8 + 0x50;
      lStack_f8 = 0;
      lStack_f0 = 0;
      uStack_e8 = 0;
      FUN_10917c4d8(dVar19,&lStack_110,&uStack_a0,param_2);
      iVar3 = -2;
      bVar12 = bStack_108;
LAB_10917e5f0:
      iVar10 = iStack_104;
      if ((bVar12 & 1) == 0) {
        if ((ulong)(lStack_f0 - lStack_f8 >> 2) <= (ulong)(long)iStack_e0) goto LAB_10917e7b8;
      }
      else if (iStack_100 <= iStack_104) goto LAB_10917e7b8;
      iVar11 = *(int *)(lVar8 + 8);
      lVar13 = *(long *)(lVar8 + 0x10);
      pdVar15 = pdVar14;
      if (iVar3 != iStack_104 + -1) {
        iVar3 = iStack_104;
        if (iVar11 <= iStack_104) {
          iVar3 = iStack_104 - iVar11;
        }
        pdVar15 = (double *)(lVar13 + (long)iVar3 * 0x18);
        dVar18 = dVar20 * pdVar15[1] + *pdVar15 * dVar19 + pdVar15[2] * dVar21;
        iVar3 = -(uint)(dVar18 < -8e-16);
        if (8e-16 < dVar18) {
          iVar3 = 1;
        }
        pdStack_b0 = pdVar15;
        if (iVar3 == 0) {
          puVar6 = &uStack_a0;
          FUN_109178740(puVar6,param_2,pdVar15);
          iVar3 = (int)puVar6;
          iVar11 = *(int *)(lVar8 + 8);
          lVar13 = *(long *)(lVar8 + 0x10);
        }
        uVar17 = -iVar3;
        uStack_a8 = uVar17;
      }
      iVar3 = (iVar10 + 1) - iVar11;
      if (iVar10 + 1 < iVar11) {
        iVar3 = iVar10 + 1;
      }
      pdVar14 = (double *)(lVar13 + (long)iVar3 * 0x18);
      dVar18 = dVar20 * pdVar14[1] + *pdVar14 * dVar19 + pdVar14[2] * dVar21;
      uVar4 = -(uint)(dVar18 < -8e-16);
      if (8e-16 < dVar18) {
        uVar4 = 1;
      }
      if (uVar4 == 0) {
        puVar6 = &uStack_a0;
        FUN_109178740(puVar6,param_2,pdVar14);
        uVar4 = (uint)puVar6;
      }
      if (uVar4 == 0 || uVar4 != -uVar17) {
        if ((uVar4 & uVar17) == 0) {
LAB_10917e744:
          uStack_a8 = -uVar4;
          puVar6 = &uStack_a0;
          pdStack_b0 = pdVar14;
          FUN_10917c688(puVar6,param_2,pdVar15,pdVar14);
          uVar5 = (uint)puVar6;
        }
        else {
          ppuVar7 = &puStack_d8;
          FUN_10917cf14(ppuVar7,pdVar14);
          uStack_a8 = -uVar4;
          if ((int)ppuVar7 < 0) {
            uVar5 = 0;
            pdStack_b0 = pdVar14;
          }
          else {
            if ((int)ppuVar7 == 0) goto LAB_10917e744;
            uVar5 = 1;
            pdStack_b0 = pdVar14;
          }
        }
      }
      else {
        uVar5 = 0;
        uStack_a8 = -uVar4;
        pdStack_b0 = pdVar14;
      }
      uVar17 = -uVar4;
      uVar16 = uVar16 ^ uVar5;
      iVar3 = iVar10;
      if (bStack_108 == 1) {
        iStack_104 = iStack_104 + 1;
        bVar12 = bStack_108;
      }
      else {
        uVar2 = (long)iStack_e0 + 1;
        iStack_e0 = (int)uVar2;
        bVar12 = 0;
        if (uVar2 < (ulong)(lStack_f0 - lStack_f8 >> 2)) {
          iStack_104 = *(int *)(lStack_f8 + uVar2 * 4);
          bVar12 = bStack_108;
        }
      }
      goto LAB_10917e5f0;
    }
    if (0 < iVar10) {
      iVar3 = 1;
      do {
        iVar11 = iVar3;
        if (-1 < iVar3 - iVar10) {
          iVar11 = iVar3 - iVar10;
        }
        pdVar15 = (double *)(*(long *)(lVar8 + 0x10) + (long)iVar11 * 0x18);
        dVar18 = dVar20 * pdVar15[1] + *pdVar15 * dVar19 + pdVar15[2] * dVar21;
        uVar4 = -(uint)(dVar18 < -8e-16);
        if (8e-16 < dVar18) {
          uVar4 = 1;
        }
        if (uVar4 == 0) {
          puVar6 = &uStack_a0;
          FUN_109178740(puVar6,param_2,pdVar15);
          uVar4 = (uint)puVar6;
        }
        if (uVar4 == 0 || uVar4 != -uVar17) {
          if ((uVar4 & uVar17) == 0) {
LAB_10917e588:
            uStack_a8 = -uVar4;
            puVar6 = &uStack_a0;
            pdStack_b0 = pdVar15;
            FUN_10917c688(puVar6,param_2,pdVar14,pdVar15);
            uVar5 = (uint)puVar6;
          }
          else {
            ppuVar7 = &puStack_d8;
            FUN_10917cf14(ppuVar7,pdVar15);
            uStack_a8 = -uVar4;
            if ((int)ppuVar7 < 0) {
              uVar5 = 0;
              pdStack_b0 = pdVar15;
            }
            else {
              if ((int)ppuVar7 == 0) goto LAB_10917e588;
              uVar5 = 1;
              pdStack_b0 = pdVar15;
            }
          }
        }
        else {
          uVar5 = 0;
          uStack_a8 = -uVar4;
          pdStack_b0 = pdVar15;
        }
        uVar17 = -uVar4;
        uVar16 = uVar16 ^ uVar5;
        iVar10 = *(int *)(lVar8 + 8);
        bVar1 = iVar3 < iVar10;
        pdVar14 = pdVar15;
        iVar3 = iVar3 + 1;
      } while (bVar1);
    }
  }
LAB_10917e7c4:
  return uVar16 & 1;
LAB_10917e7b8:
  if (lStack_f8 != 0) {
    lStack_f0 = lStack_f8;
    __ZdlPv();
  }
  goto LAB_10917e7c4;
}



/* Entry: 109181e70; end: 109182027;  */

uint FUN_109181e70(long param_1,double *param_2)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  long lVar13;
  double *pdVar14;
  double *pdVar15;
  uint uVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  long lStack_110;
  byte bStack_108;
  int iStack_104;
  int iStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  int iStack_e0;
  undefined8 *puStack_d8;
  double *pdStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double *pdStack_b0;
  uint uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puVar6;
  
  if ((*(long *)(param_1 + 0x10) - (long)*(long **)(param_1 + 8) & 0x7fffffff8U) != 8) {
    lVar8 = param_1 + 0x20;
    FUN_10917d7f4(lVar8,param_2);
    if (((int)lVar8 == 0) ||
       (lVar8 = *(long *)(param_1 + 8), (int)((ulong)(*(long *)(param_1 + 0x10) - lVar8) >> 3) < 1))
    {
      uVar16 = 0;
    }
    else {
      lVar13 = 0;
      uVar16 = 0;
      do {
        uVar9 = *(undefined8 *)(lVar8 + lVar13 * 8);
        FUN_10917e38c(uVar9,param_2);
        uVar16 = uVar16 ^ (uint)uVar9;
        if (((uVar16 & 1) != 0) && (*(char *)(param_1 + 0x49) == '\0')) {
          uVar16 = 1;
          break;
        }
        lVar13 = lVar13 + 1;
        lVar8 = *(long *)(param_1 + 8);
      } while (lVar13 < (int)((ulong)(*(long *)(param_1 + 0x10) - lVar8) >> 3));
    }
    return uVar16 & 1;
  }
  lVar8 = **(long **)(param_1 + 8);
  iVar3 = (int)lVar8 + 0x20;
  FUN_10917d7f4();
  if (iVar3 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = (uint)*(byte *)(lVar8 + 0x48);
    uStack_98 = 0x3feffbb2817d5fad;
    uStack_a0 = 0x3f72b579b431bee4;
    uStack_90 = 0x3fa06d338a2f992d;
    iVar10 = *(int *)(lVar8 + 8);
    pdVar14 = (double *)
              (*(long *)(lVar8 + 0x10) + (ulong)(-iVar10 & (-iVar10 >> 0x1f ^ 0xffffffffU)) * 0x18);
    puStack_d8 = &uStack_a0;
    dVar19 = param_2[1] * -0.032083140009307655 + param_2[2] * 0.9994747666450984;
    dVar20 = param_2[2] * -0.0045675996835681 + *param_2 * 0.032083140009307655;
    dVar21 = *param_2 * -0.9994747666450984 + param_2[1] * 0.0045675996835681;
    dVar18 = pdVar14[1] * dVar20 + *pdVar14 * dVar19 + pdVar14[2] * dVar21;
    iVar3 = -(uint)(dVar18 < -8e-16);
    if (8e-16 < dVar18) {
      iVar3 = 1;
    }
    pdStack_d0 = param_2;
    dStack_c8 = dVar19;
    dStack_c0 = dVar20;
    dStack_b8 = dVar21;
    pdStack_b0 = pdVar14;
    if (iVar3 == 0) {
      puVar6 = &uStack_a0;
      FUN_109178740(puVar6,param_2,pdVar14);
      iVar3 = (int)puVar6;
      iVar10 = *(int *)(lVar8 + 8);
    }
    uVar17 = -iVar3;
    uStack_a8 = uVar17;
    if (1999 < iVar10) {
      lStack_110 = lVar8 + 0x50;
      lStack_f8 = 0;
      lStack_f0 = 0;
      uStack_e8 = 0;
      FUN_10917c4d8(dVar19,&lStack_110,&uStack_a0,param_2);
      iVar3 = -2;
      bVar12 = bStack_108;
LAB_10917e5f0:
      iVar10 = iStack_104;
      if ((bVar12 & 1) == 0) {
        if ((ulong)(lStack_f0 - lStack_f8 >> 2) <= (ulong)(long)iStack_e0) goto LAB_10917e7b8;
      }
      else if (iStack_100 <= iStack_104) goto LAB_10917e7b8;
      iVar11 = *(int *)(lVar8 + 8);
      lVar13 = *(long *)(lVar8 + 0x10);
      pdVar15 = pdVar14;
      if (iVar3 != iStack_104 + -1) {
        iVar3 = iStack_104;
        if (iVar11 <= iStack_104) {
          iVar3 = iStack_104 - iVar11;
        }
        pdVar15 = (double *)(lVar13 + (long)iVar3 * 0x18);
        dVar18 = dVar20 * pdVar15[1] + *pdVar15 * dVar19 + pdVar15[2] * dVar21;
        iVar3 = -(uint)(dVar18 < -8e-16);
        if (8e-16 < dVar18) {
          iVar3 = 1;
        }
        pdStack_b0 = pdVar15;
        if (iVar3 == 0) {
          puVar6 = &uStack_a0;
          FUN_109178740(puVar6,param_2,pdVar15);
          iVar3 = (int)puVar6;
          iVar11 = *(int *)(lVar8 + 8);
          lVar13 = *(long *)(lVar8 + 0x10);
        }
        uVar17 = -iVar3;
        uStack_a8 = uVar17;
      }
      iVar3 = (iVar10 + 1) - iVar11;
      if (iVar10 + 1 < iVar11) {
        iVar3 = iVar10 + 1;
      }
      pdVar14 = (double *)(lVar13 + (long)iVar3 * 0x18);
      dVar18 = dVar20 * pdVar14[1] + *pdVar14 * dVar19 + pdVar14[2] * dVar21;
      uVar4 = -(uint)(dVar18 < -8e-16);
      if (8e-16 < dVar18) {
        uVar4 = 1;
      }
      if (uVar4 == 0) {
        puVar6 = &uStack_a0;
        FUN_109178740(puVar6,param_2,pdVar14);
        uVar4 = (uint)puVar6;
      }
      if (uVar4 == 0 || uVar4 != -uVar17) {
        if ((uVar4 & uVar17) == 0) {
LAB_10917e744:
          uStack_a8 = -uVar4;
          puVar6 = &uStack_a0;
          pdStack_b0 = pdVar14;
          FUN_10917c688(puVar6,param_2,pdVar15,pdVar14);
          uVar5 = (uint)puVar6;
        }
        else {
          ppuVar7 = &puStack_d8;
          FUN_10917cf14(ppuVar7,pdVar14);
          uStack_a8 = -uVar4;
          if ((int)ppuVar7 < 0) {
            uVar5 = 0;
            pdStack_b0 = pdVar14;
          }
          else {
            if ((int)ppuVar7 == 0) goto LAB_10917e744;
            uVar5 = 1;
            pdStack_b0 = pdVar14;
          }
        }
      }
      else {
        uVar5 = 0;
        uStack_a8 = -uVar4;
        pdStack_b0 = pdVar14;
      }
      uVar17 = -uVar4;
      uVar16 = uVar16 ^ uVar5;
      iVar3 = iVar10;
      if (bStack_108 == 1) {
        iStack_104 = iStack_104 + 1;
        bVar12 = bStack_108;
      }
      else {
        uVar2 = (long)iStack_e0 + 1;
        iStack_e0 = (int)uVar2;
        bVar12 = 0;
        if (uVar2 < (ulong)(lStack_f0 - lStack_f8 >> 2)) {
          iStack_104 = *(int *)(lStack_f8 + uVar2 * 4);
          bVar12 = bStack_108;
        }
      }
      goto LAB_10917e5f0;
    }
    if (0 < iVar10) {
      iVar3 = 1;
      do {
        iVar11 = iVar3;
        if (-1 < iVar3 - iVar10) {
          iVar11 = iVar3 - iVar10;
        }
        pdVar15 = (double *)(*(long *)(lVar8 + 0x10) + (long)iVar11 * 0x18);
        dVar18 = dVar20 * pdVar15[1] + *pdVar15 * dVar19 + pdVar15[2] * dVar21;
        uVar4 = -(uint)(dVar18 < -8e-16);
        if (8e-16 < dVar18) {
          uVar4 = 1;
        }
        if (uVar4 == 0) {
          puVar6 = &uStack_a0;
          FUN_109178740(puVar6,param_2,pdVar15);
          uVar4 = (uint)puVar6;
        }
        if (uVar4 == 0 || uVar4 != -uVar17) {
          if ((uVar4 & uVar17) == 0) {
LAB_10917e588:
            uStack_a8 = -uVar4;
            puVar6 = &uStack_a0;
            pdStack_b0 = pdVar15;
            FUN_10917c688(puVar6,param_2,pdVar14,pdVar15);
            uVar5 = (uint)puVar6;
          }
          else {
            ppuVar7 = &puStack_d8;
            FUN_10917cf14(ppuVar7,pdVar15);
            uStack_a8 = -uVar4;
            if ((int)ppuVar7 < 0) {
              uVar5 = 0;
              pdStack_b0 = pdVar15;
            }
            else {
              if ((int)ppuVar7 == 0) goto LAB_10917e588;
              uVar5 = 1;
              pdStack_b0 = pdVar15;
            }
          }
        }
        else {
          uVar5 = 0;
          uStack_a8 = -uVar4;
          pdStack_b0 = pdVar15;
        }
        uVar17 = -uVar4;
        uVar16 = uVar16 ^ uVar5;
        iVar10 = *(int *)(lVar8 + 8);
        bVar1 = iVar3 < iVar10;
        pdVar14 = pdVar15;
        iVar3 = iVar3 + 1;
      } while (bVar1);
    }
  }
LAB_10917e7c4:
  return uVar16 & 1;
LAB_10917e7b8:
  if (lStack_f8 != 0) {
    lStack_f0 = lStack_f8;
    __ZdlPv();
  }
  goto LAB_10917e7c4;
}



/* Entry: 109182028; end: 10918202f;  */

void FUN_109182028(long *param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  long lVar10;
  ulong unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar11;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar3 = (undefined1 *)register0x00000008;
  uVar12 = 0;
  while( true ) {
    uVar8 = uVar12;
    uVar7 = param_2;
    plVar4 = param_1;
    *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
    *(ulong *)(puVar3 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
    *(long **)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(ulong *)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(code **)(puVar3 + -8) = unaff_x30;
    unaff_x29 = puVar3 + -0x10;
    pbVar9 = *(byte **)(uVar7 + 8) + 1;
    bVar2 = **(byte **)(uVar7 + 8);
    *(byte **)(uVar7 + 8) = pbVar9;
    if (1 < bVar2) {
      return;
    }
    if ((char)plVar4[9] != '\0') {
      FUN_109180ff4(plVar4 + 1);
      pbVar9 = *(byte **)(uVar7 + 8);
    }
    bVar2 = *pbVar9;
    *(byte **)(uVar7 + 8) = pbVar9 + 1;
    unaff_x22 = plVar4 + 1;
    lVar10 = *unaff_x22;
    *(byte *)(plVar4 + 9) = bVar2;
    bVar2 = pbVar9[1];
    *(byte **)(uVar7 + 8) = pbVar9 + 2;
    *(byte *)((long)plVar4 + 0x49) = bVar2;
    uVar1 = *(uint *)(pbVar9 + 2);
    unaff_x25 = (ulong)uVar1;
    *(byte **)(uVar7 + 8) = pbVar9 + 6;
    plVar4[2] = lVar10;
    param_2 = (ulong)(int)uVar1;
    param_1 = plVar4 + 3;
    if (param_2 <= (ulong)(*param_1 - lVar10 >> 3)) break;
    if (-1 < (int)uVar1) {
      FUN_109177ef8();
      lVar11 = (long)param_1 - (plVar4[2] - plVar4[1]);
      _memcpy(lVar11);
      lVar10 = plVar4[1];
      plVar4[1] = lVar11;
      plVar4[2] = (long)param_1;
      plVar4[3] = (long)(param_1 + param_2);
      if (lVar10 != 0) {
        __ZdlPv();
      }
      break;
    }
    unaff_x30 = FUN_109182268;
    FUN_109177ee4();
    puVar3 = puVar3 + -0x80;
    uVar12 = 1;
    unaff_x19 = uVar7;
    unaff_x20 = plVar4;
    unaff_x21 = uVar8;
  }
  *(undefined4 *)((long)plVar4 + 0x4c) = 0;
  if (0 < (int)uVar1) {
    *(undefined8 *)(puVar3 + -0x68) = 0;
    *(undefined8 *)(puVar3 + -0x70) = 0x3ff0000000000000;
    *(undefined8 *)(puVar3 + -0x78) = 0xc00921fb54442d18;
    *(undefined8 *)(puVar3 + -0x80) = 0x400921fb54442d18;
    do {
      puVar5 = (undefined8 *)0xa8;
      __Znwm();
      *puVar5 = &PTR_FUN_110aded90;
      *(undefined4 *)(puVar5 + 1) = 0;
      puVar5[2] = 0;
      *(undefined1 *)(puVar5 + 3) = 0;
      puVar5[4] = &PTR_FUN_110aded28;
      uVar13 = *(undefined8 *)(puVar3 + -0x78);
      uVar12 = *(undefined8 *)(puVar3 + -0x80);
      uVar14 = *(undefined8 *)(puVar3 + -0x70);
      puVar5[6] = *(undefined8 *)(puVar3 + -0x68);
      puVar5[5] = uVar14;
      puVar5[8] = uVar13;
      puVar5[7] = uVar12;
      *(undefined4 *)((long)puVar5 + 0x4c) = 0;
      *(undefined4 *)(puVar5 + 0xe) = 0x1e;
      *(undefined1 *)((long)puVar5 + 0x74) = 0;
      *(undefined4 *)(puVar5 + 0xf) = 0;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0;
      puVar5[10] = &PTR_FUN_110adedf8;
      puVar5[0xb] = puVar5 + 0xc;
      puVar5[0x10] = puVar5;
      *(undefined4 *)(puVar5 + 0x11) = 0;
      puVar5[0x14] = 0;
      puVar5[0x13] = 0;
      puVar5[0x12] = puVar5 + 0x13;
      FUN_109180dec(unaff_x22,puVar5);
      plVar6 = *(long **)(plVar4[2] + -8);
      if ((int)uVar8 == 0) {
        (**(code **)(*plVar6 + 0x48))(plVar6,uVar7);
        if ((int)plVar6 == 0) {
          return;
        }
      }
      else {
        (**(code **)(*plVar6 + 0x50))(plVar6,uVar7);
        if (((ulong)plVar6 & 1) == 0) {
          return;
        }
      }
      *(int *)((long)plVar4 + 0x4c) =
           *(int *)((long)plVar4 + 0x4c) + *(int *)(*(long *)(plVar4[2] + -8) + 8);
      uVar1 = (int)unaff_x25 - 1;
      unaff_x25 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  FUN_10917d760(plVar4 + 4,uVar7);
  return;
}



/* Entry: 109182030; end: 109182267;  */

void FUN_109182030(long *param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long lVar9;
  ulong unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar10;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  while( true ) {
    uVar7 = param_3;
    uVar6 = param_2;
    plVar3 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    pbVar8 = *(byte **)(uVar6 + 8) + 1;
    bVar2 = **(byte **)(uVar6 + 8);
    *(byte **)(uVar6 + 8) = pbVar8;
    if (1 < bVar2) {
      return;
    }
    if ((char)plVar3[9] != '\0') {
      FUN_109180ff4(plVar3 + 1);
      pbVar8 = *(byte **)(uVar6 + 8);
    }
    bVar2 = *pbVar8;
    *(byte **)(uVar6 + 8) = pbVar8 + 1;
    unaff_x22 = plVar3 + 1;
    lVar9 = *unaff_x22;
    *(byte *)(plVar3 + 9) = bVar2;
    bVar2 = pbVar8[1];
    *(byte **)(uVar6 + 8) = pbVar8 + 2;
    *(byte *)((long)plVar3 + 0x49) = bVar2;
    uVar1 = *(uint *)(pbVar8 + 2);
    unaff_x25 = (ulong)uVar1;
    *(byte **)(uVar6 + 8) = pbVar8 + 6;
    plVar3[2] = lVar9;
    param_2 = (ulong)(int)uVar1;
    param_1 = plVar3 + 3;
    if (param_2 <= (ulong)(*param_1 - lVar9 >> 3)) break;
    if (-1 < (int)uVar1) {
      FUN_109177ef8();
      lVar10 = (long)param_1 - (plVar3[2] - plVar3[1]);
      _memcpy(lVar10);
      lVar9 = plVar3[1];
      plVar3[1] = lVar10;
      plVar3[2] = (long)param_1;
      plVar3[3] = (long)(param_1 + param_2);
      if (lVar9 != 0) {
        __ZdlPv();
      }
      break;
    }
    unaff_x30 = FUN_109182268;
    FUN_109177ee4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    param_3 = 1;
    unaff_x19 = uVar6;
    unaff_x20 = plVar3;
    unaff_x21 = uVar7;
  }
  *(undefined4 *)((long)plVar3 + 0x4c) = 0;
  if (0 < (int)uVar1) {
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0x3ff0000000000000;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0xc00921fb54442d18;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0x400921fb54442d18;
    do {
      puVar4 = (undefined8 *)0xa8;
      __Znwm();
      *puVar4 = &PTR_FUN_110aded90;
      *(undefined4 *)(puVar4 + 1) = 0;
      puVar4[2] = 0;
      *(undefined1 *)(puVar4 + 3) = 0;
      puVar4[4] = &PTR_FUN_110aded28;
      uVar12 = *(undefined8 *)((long)register0x00000008 + -0x78);
      uVar11 = *(undefined8 *)((long)register0x00000008 + -0x80);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x70);
      puVar4[6] = *(undefined8 *)((long)register0x00000008 + -0x68);
      puVar4[5] = uVar13;
      puVar4[8] = uVar12;
      puVar4[7] = uVar11;
      *(undefined4 *)((long)puVar4 + 0x4c) = 0;
      *(undefined4 *)(puVar4 + 0xe) = 0x1e;
      *(undefined1 *)((long)puVar4 + 0x74) = 0;
      *(undefined4 *)(puVar4 + 0xf) = 0;
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      puVar4[10] = &PTR_FUN_110adedf8;
      puVar4[0xb] = puVar4 + 0xc;
      puVar4[0x10] = puVar4;
      *(undefined4 *)(puVar4 + 0x11) = 0;
      puVar4[0x14] = 0;
      puVar4[0x13] = 0;
      puVar4[0x12] = puVar4 + 0x13;
      FUN_109180dec(unaff_x22,puVar4);
      plVar5 = *(long **)(plVar3[2] + -8);
      if ((int)uVar7 == 0) {
        (**(code **)(*plVar5 + 0x48))(plVar5,uVar6);
        if ((int)plVar5 == 0) {
          return;
        }
      }
      else {
        (**(code **)(*plVar5 + 0x50))(plVar5,uVar6);
        if (((ulong)plVar5 & 1) == 0) {
          return;
        }
      }
      *(int *)((long)plVar3 + 0x4c) =
           *(int *)((long)plVar3 + 0x4c) + *(int *)(*(long *)(plVar3[2] + -8) + 8);
      uVar1 = (int)unaff_x25 - 1;
      unaff_x25 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  FUN_10917d760(plVar3 + 4,uVar6);
  return;
}



/* Entry: 109182268; end: 10918226f;  */

/* WARNING: Removing unreachable block (ram,0x0001091821f0) */

void FUN_109182268(long *param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  ulong unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  long lVar9;
  undefined8 unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  while( true ) {
    uVar6 = param_2;
    plVar5 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    pbVar7 = *(byte **)(uVar6 + 8) + 1;
    bVar2 = **(byte **)(uVar6 + 8);
    *(byte **)(uVar6 + 8) = pbVar7;
    if (1 < bVar2) {
      return;
    }
    unaff_x21 = 1;
    if ((char)plVar5[9] != '\0') {
      FUN_109180ff4(plVar5 + 1);
      pbVar7 = *(byte **)(uVar6 + 8);
    }
    bVar2 = *pbVar7;
    *(byte **)(uVar6 + 8) = pbVar7 + 1;
    unaff_x22 = plVar5 + 1;
    lVar8 = *unaff_x22;
    *(byte *)(plVar5 + 9) = bVar2;
    bVar2 = pbVar7[1];
    *(byte **)(uVar6 + 8) = pbVar7 + 2;
    *(byte *)((long)plVar5 + 0x49) = bVar2;
    uVar1 = *(uint *)(pbVar7 + 2);
    unaff_x25 = (ulong)uVar1;
    *(byte **)(uVar6 + 8) = pbVar7 + 6;
    plVar5[2] = lVar8;
    param_2 = (ulong)(int)uVar1;
    param_1 = plVar5 + 3;
    if (param_2 <= (ulong)(*param_1 - lVar8 >> 3)) break;
    if (-1 < (int)uVar1) {
      FUN_109177ef8();
      lVar9 = (long)param_1 - (plVar5[2] - plVar5[1]);
      _memcpy(lVar9);
      lVar8 = plVar5[1];
      plVar5[1] = lVar9;
      plVar5[2] = (long)param_1;
      plVar5[3] = (long)(param_1 + param_2);
      if (lVar8 != 0) {
        __ZdlPv();
      }
      break;
    }
    unaff_x30 = FUN_109182268;
    FUN_109177ee4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    unaff_x19 = uVar6;
    unaff_x20 = plVar5;
  }
  *(undefined4 *)((long)plVar5 + 0x4c) = 0;
  if (0 < (int)uVar1) {
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0x3ff0000000000000;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0xc00921fb54442d18;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0x400921fb54442d18;
    do {
      puVar3 = (undefined8 *)0xa8;
      __Znwm();
      *puVar3 = &PTR_FUN_110aded90;
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar3[2] = 0;
      *(undefined1 *)(puVar3 + 3) = 0;
      puVar3[4] = &PTR_FUN_110aded28;
      uVar11 = *(undefined8 *)((long)register0x00000008 + -0x78);
      uVar10 = *(undefined8 *)((long)register0x00000008 + -0x80);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -0x70);
      puVar3[6] = *(undefined8 *)((long)register0x00000008 + -0x68);
      puVar3[5] = uVar12;
      puVar3[8] = uVar11;
      puVar3[7] = uVar10;
      *(undefined4 *)((long)puVar3 + 0x4c) = 0;
      *(undefined4 *)(puVar3 + 0xe) = 0x1e;
      *(undefined1 *)((long)puVar3 + 0x74) = 0;
      *(undefined4 *)(puVar3 + 0xf) = 0;
      puVar3[0xc] = 0;
      puVar3[0xd] = 0;
      puVar3[10] = &PTR_FUN_110adedf8;
      puVar3[0xb] = puVar3 + 0xc;
      puVar3[0x10] = puVar3;
      *(undefined4 *)(puVar3 + 0x11) = 0;
      puVar3[0x14] = 0;
      puVar3[0x13] = 0;
      puVar3[0x12] = puVar3 + 0x13;
      FUN_109180dec(unaff_x22,puVar3);
      plVar4 = *(long **)(plVar5[2] + -8);
      (**(code **)(*plVar4 + 0x50))(plVar4,uVar6);
      if (((ulong)plVar4 & 1) == 0) {
        return;
      }
      *(int *)((long)plVar5 + 0x4c) =
           *(int *)((long)plVar5 + 0x4c) + *(int *)(*(long *)(plVar5[2] + -8) + 8);
      uVar1 = (int)unaff_x25 - 1;
      unaff_x25 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  FUN_10917d760(plVar5 + 4,uVar6);
  return;
}



/* Entry: 109182270; end: 1091823e7;  */

void FUN_109182270(undefined8 param_1,uint param_2,long param_3,long param_4,undefined1 param_5,
                  uint param_6,ulong param_7,undefined2 *param_8)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  int iVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  double **ppdVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  double *pdVar25;
  long lVar26;
  double *pdVar27;
  long lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  long lStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined **ppuStack_278;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined1 uStack_254;
  undefined4 uStack_250;
  long alStack_248 [6];
  int iStack_218;
  int iStack_214;
  long lStack_210;
  undefined1 uStack_208;
  double *pdStack_200;
  double *pdStack_1f8;
  double *pdStack_1f0;
  double *pdStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double *pdStack_1c8;
  uint uStack_1c0;
  undefined ***pppuStack_1b8;
  undefined8 uStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  double dStack_198;
  undefined8 uStack_190;
  int iStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  undefined2 uStack_98;
  undefined1 uStack_96;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_51 [9];
  long lStack_48;
  double *pdVar12;
  double *pdVar13;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = (undefined2 *)(param_3 + 0x20);
  uVar15 = (int)param_4 + 0x20;
  lVar16 = param_4;
  uStack_208 = param_5;
  func_0x00010917d2dc();
  if ((int)puVar9 != 0) {
    uStack_98 = 0x100;
    uStack_96 = 0;
    uStack_88 = 0x3febb645a1cac083;
    uStack_80 = 0;
    puVar10 = (undefined8 *)0x28;
    uStack_90 = param_1;
    __Znwm();
    puVar10[1] = 0;
    *puVar10 = 0;
    puVar10[3] = 0;
    puVar10[2] = 0;
    *(undefined4 *)(puVar10 + 4) = 0x3f800000;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    puStack_78 = puVar10;
    FUN_1091823e8(param_3,0,param_4,0,0,1,&uStack_98);
    param_8 = &uStack_98;
    uStack_208 = 0;
    param_6 = 0;
    param_7 = 0;
    FUN_1091823e8(param_4,0,param_3);
    uVar24 = 0;
    lVar16 = 0;
    uVar15 = param_2;
    FUN_1091853a0();
    if ((uVar24 & 1) == 0) {
      FUN_1091797b4(auStack_51,&UNK_10f55a40b,0x326);
      uVar15 = 0xf55a4c1;
      lVar16 = 0x28;
      func_0x000107c2808c(PTR___ZNSt3__14cerrE_110346738);
      FUN_10917d224(auStack_51);
    }
    puVar9 = &uStack_98;
    func_0x000109184714();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_10917d224(auStack_51);
  func_0x000109184714(&uStack_98);
  __Unwind_Resume();
  uStack_258 = 0x1e;
  puStack_270 = &uStack_268;
  uStack_254 = 0;
  uStack_250 = 0;
  uStack_268 = 0;
  uStack_260 = 0;
  alStack_248[1] = 0;
  alStack_248[0] = 0;
  alStack_248[3] = 0;
  alStack_248[2] = 0;
  alStack_248[5] = 0;
  alStack_248[4] = 0;
  ppuStack_278 = &PTR_FUN_110adf050;
  iStack_218 = 0;
  iStack_214 = 0;
  lVar19 = *(long *)(lVar16 + 8);
  lStack_210 = lVar16;
  if (0 < (int)((ulong)(*(long *)(lVar16 + 0x10) - lVar19) >> 3)) {
    lVar22 = 0;
    do {
      iVar4 = *(int *)(*(long *)(lVar19 + lVar22 * 8) + 8);
      pppuStack_1b8 = (undefined ***)CONCAT44(pppuStack_1b8._4_4_,iStack_218);
      FUN_108eb62c4(alStack_248 + 3,&pppuStack_1b8);
      func_0x000108a5942c(alStack_248,(long)(int)pppuStack_1b8 + (long)iVar4);
      if (0 < iVar4) {
        iVar18 = iVar4;
        iVar20 = (int)pppuStack_1b8;
        do {
          *(int *)(alStack_248[0] + (long)iVar20 * 4) = iStack_214;
          iVar20 = (int)pppuStack_1b8 + 1;
          pppuStack_1b8 = (undefined ***)CONCAT44(pppuStack_1b8._4_4_,iVar20);
          iVar18 = iVar18 + -1;
        } while (iVar18 != 0);
      }
      iStack_218 = iStack_218 + iVar4;
      iStack_214 = iStack_214 + 1;
      lVar22 = lVar22 + 1;
      lVar19 = *(long *)(lStack_210 + 8);
    } while (lVar22 < (int)((ulong)(*(long *)(lStack_210 + 0x10) - lVar19) >> 3));
  }
  FUN_10917bcbc(&ppuStack_278,*(undefined4 *)(puVar9 + 0x26));
  lStack_290 = 0;
  lStack_288 = 0;
  uStack_280 = 0;
  lVar19 = *(long *)(puVar9 + 4);
  if (0 < (int)((ulong)(*(long *)(puVar9 + 8) - lVar19) >> 3)) {
    lVar28 = 0;
    lVar22 = 0;
    do {
      lVar19 = *(long *)(lVar19 + lVar22 * 8);
      iVar20 = *(int *)(lVar19 + 8);
      uVar21 = uVar15 ^ *(uint *)(lVar19 + 0x4c);
      iVar4 = 1;
      if ((uVar21 & 1) != 0) {
        iVar4 = -1;
      }
      lVar11 = lVar16;
      FUN_109181e70(lVar16,*(long *)(lVar19 + 0x10) +
                           (ulong)(-iVar20 & (-iVar20 >> 0x1f ^ 0xffffffffU)) * 0x18);
      if (0 < iVar20) {
        iVar18 = iVar20;
        if ((uVar21 & 1) == 0) {
          iVar18 = 0;
        }
        uVar21 = param_6 ^ (uint)lVar11;
LAB_1091825bc:
        iVar5 = *(int *)(lVar19 + 8);
        iVar7 = iVar18;
        if (iVar5 <= iVar18) {
          iVar7 = iVar18 - iVar5;
        }
        pdVar27 = (double *)(*(long *)(lVar19 + 0x10) + (long)iVar7 * 0x18);
        iVar18 = iVar18 + iVar4;
        iVar7 = iVar18;
        if (iVar5 <= iVar18) {
          iVar7 = iVar18 - iVar5;
        }
        pppuStack_1b8 = &ppuStack_278;
        pdVar25 = (double *)(*(long *)(lVar19 + 0x10) + (long)iVar7 * 0x18);
        dStack_198 = 0.0;
        uStack_190 = 0;
        dStack_1a0 = 0.0;
        lStack_288 = lVar28;
        FUN_10917c4d8(&pppuStack_1b8,pdVar27,pdVar25);
        dVar35 = pdVar27[1];
        dVar30 = pdVar27[2];
        dVar37 = *pdVar27;
        dVar39 = -(pdVar25[1] * dVar30) + pdVar25[2] * dVar35;
        dVar41 = -(pdVar25[2] * dVar37) + *pdVar25 * dVar30;
        dVar42 = -(*pdVar25 * dVar35) + pdVar25[1] * dVar37;
        dVar30 = dVar35 * dVar41 + dVar37 * dVar39 + dVar30 * dVar42;
        iVar7 = -(uint)(dVar30 < -8e-16);
        if (8e-16 < dVar30) {
          iVar7 = 1;
        }
        pdStack_1f0 = pdVar27;
        pdStack_1e8 = pdVar25;
        dStack_1e0 = dVar39;
        dStack_1d8 = dVar41;
        dStack_1d0 = dVar42;
        pdStack_1c8 = pdVar27;
        if (iVar7 == 0) {
          pdVar12 = pdVar27;
          FUN_109178740(pdVar27,pdVar25,pdVar27);
          iVar7 = (int)pdVar12;
        }
        uVar23 = -iVar7;
        pdStack_200 = (double *)0x0;
        uVar24 = (ulong)uStack_1b0 & 0xff;
        uStack_1c0 = uVar23;
LAB_109182694:
        pdVar12 = pdStack_200;
        if ((uVar24 & 1) == 0) {
          if ((ulong)((long)dStack_198 - (long)dStack_1a0 >> 2) <= (ulong)(long)iStack_188)
          goto LAB_1091829cc;
        }
        else if (dStack_1a8._0_4_ <= uStack_1b0._4_4_) goto LAB_1091829cc;
        (*(code *)ppuStack_278[5])(&ppuStack_278,uStack_1b0._4_4_,&pdStack_1f8,&pdStack_200);
        if (pdVar12 != pdStack_1f8) {
          pdStack_1c8 = pdStack_1f8;
          dVar30 = dVar41 * pdStack_1f8[1] + *pdStack_1f8 * dVar39 + pdStack_1f8[2] * dVar42;
          iVar7 = -(uint)(dVar30 < -8e-16);
          if (8e-16 < dVar30) {
            iVar7 = 1;
          }
          if (iVar7 == 0) {
            pdVar12 = pdVar27;
            FUN_109178740(pdVar27,pdVar25);
            iVar7 = (int)pdVar12;
          }
          uVar23 = -iVar7;
          uStack_1c0 = uVar23;
        }
        pdVar12 = pdStack_200;
        dVar30 = dVar41 * pdStack_200[1] + *pdStack_200 * dVar39 + pdStack_200[2] * dVar42;
        uVar8 = -(uint)(dVar30 < -8e-16);
        if (8e-16 < dVar30) {
          uVar8 = 1;
        }
        if (uVar8 == 0) {
          pdVar13 = pdVar27;
          FUN_109178740(pdVar27,pdVar25,pdStack_200);
          uVar8 = (uint)pdVar13;
        }
        if (uVar8 == 0 || uVar8 != -uVar23) {
          if ((uVar8 & uVar23) == 0) {
LAB_109182898:
            pdVar6 = pdStack_1f8;
            pdVar13 = pdStack_200;
            uStack_1c0 = -uVar8;
            pdStack_1c8 = pdVar12;
            pdVar12 = pdVar27;
            FUN_10917c688(pdVar27,pdVar25,pdStack_1f8,pdStack_200);
            if ((int)pdVar12 != 0) {
              if ((((*pdVar27 != *pdVar6) || (pdVar27[1] != pdVar6[1])) ||
                  (dStack_180 = 0.0, pdVar27[2] != pdVar6[2])) &&
                 (((dStack_180 = 1.0, *pdVar27 == *pdVar13 && (pdVar27[1] == pdVar13[1])) &&
                  (dStack_180 = 1.0, pdVar27[2] == pdVar13[2])))) {
                dStack_180 = 0.0;
              }
              if (((((param_7 & 1) == 0) && (*pdVar25 == *pdVar13)) && (pdVar25[1] == pdVar13[1]))
                 && (pdVar25[2] == pdVar13[2])) {
                dStack_180 = 1.0;
              }
              pdVar12 = pdVar27;
              if (dStack_180 != 0.0) {
                pdVar12 = pdVar25;
              }
              dStack_170 = pdVar12[1];
              dStack_178 = *pdVar12;
              dStack_168 = pdVar12[2];
              FUN_109182bac(&lStack_290,&dStack_180);
            }
          }
          else {
            ppdVar14 = &pdStack_1f0;
            FUN_10917cf14(ppdVar14,pdVar12);
            pdStack_1c8 = pdVar12;
            uStack_1c0 = -uVar8;
            if (-1 < (int)ppdVar14) {
              if ((int)ppdVar14 == 0) goto LAB_109182898;
              FUN_10917c8b4(&dStack_160,pdVar27,pdVar25,pdStack_1f8,pdStack_200);
              dVar37 = dStack_150;
              dVar35 = dStack_158;
              dVar30 = dStack_160;
              dVar38 = pdVar27[1];
              dVar43 = pdVar27[2];
              dVar40 = *pdVar27;
              dVar32 = pdVar25[1];
              dVar31 = pdVar25[2];
              dVar33 = *pdVar25;
              dVar29 = -(dVar32 * dStack_150) + dVar31 * dStack_158;
              dVar34 = -(dVar31 * dStack_160) + dVar33 * dStack_150;
              dVar36 = -(dVar33 * dStack_158) + dVar32 * dStack_160;
              dVar29 = SQRT(dVar34 * dVar34 + dVar29 * dVar29 + dVar36 * dVar36);
              _atan2(dVar29,dStack_158 * dVar32 + dVar33 * dStack_160 + dVar31 * dStack_150);
              dVar31 = -(dVar40 * dVar35) + dVar38 * dVar30;
              dVar32 = -(dVar38 * dVar37) + dVar43 * dVar35;
              dVar33 = -(dVar43 * dVar30) + dVar40 * dVar37;
              dVar31 = SQRT(dVar33 * dVar33 + dVar32 * dVar32 + dVar31 * dVar31);
              _atan2(dVar31,dVar35 * dVar38 + dVar40 * dVar30 + dVar43 * dVar37);
              dStack_180 = dVar31 / (dVar31 + dVar29);
              dStack_178 = dVar30;
              dStack_170 = dVar35;
              dStack_168 = dVar37;
              FUN_109182bac(&lStack_290,&dStack_180);
            }
          }
        }
        else {
          pdStack_1c8 = pdVar12;
          uStack_1c0 = -uVar8;
        }
        uVar23 = -uVar8;
        uVar17 = (ulong)uStack_1b0 & 0xff;
        if ((char)uStack_1b0 != '\x01') goto LAB_109182998;
        iVar7 = uStack_1b0._4_4_ + 1;
        goto LAB_1091829bc;
      }
LAB_109182ae8:
      lVar22 = lVar22 + 1;
      lVar19 = *(long *)(puVar9 + 4);
    } while (lVar22 < (int)((ulong)(*(long *)(puVar9 + 8) - lVar19) >> 3));
    if (lVar28 != 0) {
      lStack_288 = lVar28;
      __ZdlPv(lVar28);
    }
  }
  FUN_109183db0(&ppuStack_278);
  return;
LAB_1091829cc:
  if (dStack_1a0 != 0.0) {
    dStack_198 = dStack_1a0;
    __ZdlPv();
  }
  if ((uVar21 & 1) != 0) {
    dStack_1a0 = pdVar27[2];
    pppuStack_1b8 = (undefined ***)0x0;
    dStack_1a8 = pdVar27[1];
    uStack_1b0 = *pdVar27;
    FUN_109182bac(&lStack_290,&pppuStack_1b8);
  }
  uVar21 = (int)lStack_288 - (int)lStack_290;
  if ((uVar21 >> 5 & 1) != 0) {
    dStack_1a0 = pdVar25[2];
    pppuStack_1b8 = (undefined ***)0x3ff0000000000000;
    dStack_1a8 = pdVar25[1];
    uStack_1b0 = *pdVar25;
    FUN_109182bac(&lStack_290,&pppuStack_1b8);
  }
  lVar11 = lStack_288;
  lVar28 = lStack_290;
  if (lStack_290 != lStack_288) {
    FUN_109182d7c(lStack_290,lStack_288,LZCOUNT(lStack_288 - lStack_290 >> 5) << 1 ^ 0x7e,1);
    uVar24 = 0;
    lVar26 = 0x38;
    do {
      lVar3 = lVar28 + lVar26;
      if ((((*(double *)(lVar3 + -0x38) != *(double *)(lVar3 + -0x18)) ||
           (*(double *)(lVar3 + -0x30) != *(double *)(lVar3 + -0x10))) ||
          (pdVar27 = (double *)(lVar28 + lVar26), pdVar27[-5] != pdVar27[-1])) ||
         (pdVar27[-4] != *pdVar27)) {
        FUN_10918479c(param_8,lVar3 + -0x30,lVar3 + -0x10);
        lVar11 = lStack_288;
        lVar28 = lStack_290;
      }
      uVar24 = uVar24 + 2;
      lVar26 = lVar26 + 0x40;
    } while (uVar24 < (ulong)(lVar11 - lVar28 >> 5));
  }
  uVar21 = uVar21 >> 5 & 1;
  iVar7 = iVar20 + -1;
  bVar1 = iVar20 < 1;
  iVar20 = iVar7;
  if (iVar7 == 0 || bVar1) goto LAB_109182ae8;
  goto LAB_1091825bc;
LAB_109182998:
  uVar24 = 0;
  uVar2 = (long)iStack_188 + 1;
  iStack_188 = (int)uVar2;
  if (uVar2 < (ulong)((long)dStack_198 - (long)dStack_1a0 >> 2)) {
    iVar7 = *(int *)((long)dStack_1a0 + uVar2 * 4);
LAB_1091829bc:
    uStack_1b0 = (double)CONCAT44(iVar7,(undefined4)uStack_1b0);
    uVar24 = uVar17;
  }
  goto LAB_109182694;
}



/* Entry: 1091823e8; end: 109182bab;  */

void FUN_1091823e8(long param_1,uint param_2,long param_3,undefined1 param_4,uint param_5,
                  ulong param_6,undefined8 param_7)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  double **ppdVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  double *pdVar21;
  long lVar22;
  double *pdVar23;
  long lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined1 uStack_1b4;
  undefined4 uStack_1b0;
  long alStack_1a8 [6];
  int iStack_178;
  int iStack_174;
  long lStack_170;
  undefined1 uStack_168;
  double *pdStack_160;
  double *pdStack_158;
  double *pdStack_150;
  double *pdStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double *pdStack_128;
  uint uStack_120;
  undefined ***pppuStack_118;
  undefined8 uStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  undefined8 uStack_f0;
  int iStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double *pdVar10;
  double *pdVar11;
  
  uStack_1b8 = 0x1e;
  puStack_1d0 = &uStack_1c8;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  alStack_1a8[1] = 0;
  alStack_1a8[0] = 0;
  alStack_1a8[3] = 0;
  alStack_1a8[2] = 0;
  alStack_1a8[5] = 0;
  alStack_1a8[4] = 0;
  ppuStack_1d8 = &PTR_FUN_110adf050;
  iStack_178 = 0;
  iStack_174 = 0;
  lVar15 = *(long *)(param_3 + 8);
  lStack_170 = param_3;
  uStack_168 = param_4;
  if (0 < (int)((ulong)(*(long *)(param_3 + 0x10) - lVar15) >> 3)) {
    lVar18 = 0;
    do {
      iVar4 = *(int *)(*(long *)(lVar15 + lVar18 * 8) + 8);
      pppuStack_118 = (undefined ***)CONCAT44(pppuStack_118._4_4_,iStack_178);
      FUN_108eb62c4(alStack_1a8 + 3,&pppuStack_118);
      func_0x000108a5942c(alStack_1a8,(long)(int)pppuStack_118 + (long)iVar4);
      if (0 < iVar4) {
        iVar14 = iVar4;
        iVar16 = (int)pppuStack_118;
        do {
          *(int *)(alStack_1a8[0] + (long)iVar16 * 4) = iStack_174;
          iVar16 = (int)pppuStack_118 + 1;
          pppuStack_118 = (undefined ***)CONCAT44(pppuStack_118._4_4_,iVar16);
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      iStack_178 = iStack_178 + iVar4;
      iStack_174 = iStack_174 + 1;
      lVar18 = lVar18 + 1;
      lVar15 = *(long *)(lStack_170 + 8);
    } while (lVar18 < (int)((ulong)(*(long *)(lStack_170 + 0x10) - lVar15) >> 3));
  }
  FUN_10917bcbc(&ppuStack_1d8,*(undefined4 *)(param_1 + 0x4c));
  lStack_1f0 = 0;
  lStack_1e8 = 0;
  uStack_1e0 = 0;
  lVar15 = *(long *)(param_1 + 8);
  if (0 < (int)((ulong)(*(long *)(param_1 + 0x10) - lVar15) >> 3)) {
    lVar24 = 0;
    lVar18 = 0;
    do {
      lVar15 = *(long *)(lVar15 + lVar18 * 8);
      iVar16 = *(int *)(lVar15 + 8);
      uVar17 = param_2 ^ *(uint *)(lVar15 + 0x4c);
      iVar4 = 1;
      if ((uVar17 & 1) != 0) {
        iVar4 = -1;
      }
      lVar9 = param_3;
      FUN_109181e70(param_3,*(long *)(lVar15 + 0x10) +
                            (ulong)(-iVar16 & (-iVar16 >> 0x1f ^ 0xffffffffU)) * 0x18);
      if (0 < iVar16) {
        iVar14 = iVar16;
        if ((uVar17 & 1) == 0) {
          iVar14 = 0;
        }
        uVar17 = param_5 ^ (uint)lVar9;
LAB_1091825bc:
        iVar5 = *(int *)(lVar15 + 8);
        iVar7 = iVar14;
        if (iVar5 <= iVar14) {
          iVar7 = iVar14 - iVar5;
        }
        pdVar23 = (double *)(*(long *)(lVar15 + 0x10) + (long)iVar7 * 0x18);
        iVar14 = iVar14 + iVar4;
        iVar7 = iVar14;
        if (iVar5 <= iVar14) {
          iVar7 = iVar14 - iVar5;
        }
        pppuStack_118 = &ppuStack_1d8;
        pdVar21 = (double *)(*(long *)(lVar15 + 0x10) + (long)iVar7 * 0x18);
        dStack_f8 = 0.0;
        uStack_f0 = 0;
        dStack_100 = 0.0;
        lStack_1e8 = lVar24;
        FUN_10917c4d8(&pppuStack_118,pdVar23,pdVar21);
        dVar31 = pdVar23[1];
        dVar26 = pdVar23[2];
        dVar33 = *pdVar23;
        dVar35 = -(pdVar21[1] * dVar26) + pdVar21[2] * dVar31;
        dVar37 = -(pdVar21[2] * dVar33) + *pdVar21 * dVar26;
        dVar38 = -(*pdVar21 * dVar31) + pdVar21[1] * dVar33;
        dVar26 = dVar31 * dVar37 + dVar33 * dVar35 + dVar26 * dVar38;
        iVar7 = -(uint)(dVar26 < -8e-16);
        if (8e-16 < dVar26) {
          iVar7 = 1;
        }
        pdStack_150 = pdVar23;
        pdStack_148 = pdVar21;
        dStack_140 = dVar35;
        dStack_138 = dVar37;
        dStack_130 = dVar38;
        pdStack_128 = pdVar23;
        if (iVar7 == 0) {
          pdVar10 = pdVar23;
          FUN_109178740(pdVar23,pdVar21,pdVar23);
          iVar7 = (int)pdVar10;
        }
        uVar19 = -iVar7;
        pdStack_160 = (double *)0x0;
        uVar20 = (ulong)uStack_110 & 0xff;
        uStack_120 = uVar19;
LAB_109182694:
        pdVar10 = pdStack_160;
        if ((uVar20 & 1) == 0) {
          if ((ulong)((long)dStack_f8 - (long)dStack_100 >> 2) <= (ulong)(long)iStack_e8)
          goto LAB_1091829cc;
        }
        else if (dStack_108._0_4_ <= uStack_110._4_4_) goto LAB_1091829cc;
        (*(code *)ppuStack_1d8[5])(&ppuStack_1d8,uStack_110._4_4_,&pdStack_158,&pdStack_160);
        if (pdVar10 != pdStack_158) {
          pdStack_128 = pdStack_158;
          dVar26 = dVar37 * pdStack_158[1] + *pdStack_158 * dVar35 + pdStack_158[2] * dVar38;
          iVar7 = -(uint)(dVar26 < -8e-16);
          if (8e-16 < dVar26) {
            iVar7 = 1;
          }
          if (iVar7 == 0) {
            pdVar10 = pdVar23;
            FUN_109178740(pdVar23,pdVar21);
            iVar7 = (int)pdVar10;
          }
          uVar19 = -iVar7;
          uStack_120 = uVar19;
        }
        pdVar10 = pdStack_160;
        dVar26 = dVar37 * pdStack_160[1] + *pdStack_160 * dVar35 + pdStack_160[2] * dVar38;
        uVar8 = -(uint)(dVar26 < -8e-16);
        if (8e-16 < dVar26) {
          uVar8 = 1;
        }
        if (uVar8 == 0) {
          pdVar11 = pdVar23;
          FUN_109178740(pdVar23,pdVar21,pdStack_160);
          uVar8 = (uint)pdVar11;
        }
        if (uVar8 == 0 || uVar8 != -uVar19) {
          if ((uVar8 & uVar19) == 0) {
LAB_109182898:
            pdVar6 = pdStack_158;
            pdVar11 = pdStack_160;
            uStack_120 = -uVar8;
            pdStack_128 = pdVar10;
            pdVar10 = pdVar23;
            FUN_10917c688(pdVar23,pdVar21,pdStack_158,pdStack_160);
            if ((int)pdVar10 != 0) {
              if ((((*pdVar23 != *pdVar6) || (pdVar23[1] != pdVar6[1])) ||
                  (dStack_e0 = 0.0, pdVar23[2] != pdVar6[2])) &&
                 (((dStack_e0 = 1.0, *pdVar23 == *pdVar11 && (pdVar23[1] == pdVar11[1])) &&
                  (dStack_e0 = 1.0, pdVar23[2] == pdVar11[2])))) {
                dStack_e0 = 0.0;
              }
              if (((((param_6 & 1) == 0) && (*pdVar21 == *pdVar11)) && (pdVar21[1] == pdVar11[1]))
                 && (pdVar21[2] == pdVar11[2])) {
                dStack_e0 = 1.0;
              }
              pdVar10 = pdVar23;
              if (dStack_e0 != 0.0) {
                pdVar10 = pdVar21;
              }
              dStack_d0 = pdVar10[1];
              dStack_d8 = *pdVar10;
              dStack_c8 = pdVar10[2];
              FUN_109182bac(&lStack_1f0,&dStack_e0);
            }
          }
          else {
            ppdVar12 = &pdStack_150;
            FUN_10917cf14(ppdVar12,pdVar10);
            pdStack_128 = pdVar10;
            uStack_120 = -uVar8;
            if (-1 < (int)ppdVar12) {
              if ((int)ppdVar12 == 0) goto LAB_109182898;
              FUN_10917c8b4(&dStack_c0,pdVar23,pdVar21,pdStack_158,pdStack_160);
              dVar33 = dStack_b0;
              dVar31 = dStack_b8;
              dVar26 = dStack_c0;
              dVar34 = pdVar23[1];
              dVar39 = pdVar23[2];
              dVar36 = *pdVar23;
              dVar28 = pdVar21[1];
              dVar27 = pdVar21[2];
              dVar29 = *pdVar21;
              dVar25 = -(dVar28 * dStack_b0) + dVar27 * dStack_b8;
              dVar30 = -(dVar27 * dStack_c0) + dVar29 * dStack_b0;
              dVar32 = -(dVar29 * dStack_b8) + dVar28 * dStack_c0;
              dVar25 = SQRT(dVar30 * dVar30 + dVar25 * dVar25 + dVar32 * dVar32);
              _atan2(dVar25,dStack_b8 * dVar28 + dVar29 * dStack_c0 + dVar27 * dStack_b0);
              dVar27 = -(dVar36 * dVar31) + dVar34 * dVar26;
              dVar28 = -(dVar34 * dVar33) + dVar39 * dVar31;
              dVar29 = -(dVar39 * dVar26) + dVar36 * dVar33;
              dVar27 = SQRT(dVar29 * dVar29 + dVar28 * dVar28 + dVar27 * dVar27);
              _atan2(dVar27,dVar31 * dVar34 + dVar36 * dVar26 + dVar39 * dVar33);
              dStack_e0 = dVar27 / (dVar27 + dVar25);
              dStack_d8 = dVar26;
              dStack_d0 = dVar31;
              dStack_c8 = dVar33;
              FUN_109182bac(&lStack_1f0,&dStack_e0);
            }
          }
        }
        else {
          pdStack_128 = pdVar10;
          uStack_120 = -uVar8;
        }
        uVar19 = -uVar8;
        uVar13 = (ulong)uStack_110 & 0xff;
        if ((char)uStack_110 != '\x01') goto LAB_109182998;
        iVar7 = uStack_110._4_4_ + 1;
        goto LAB_1091829bc;
      }
LAB_109182ae8:
      lVar18 = lVar18 + 1;
      lVar15 = *(long *)(param_1 + 8);
    } while (lVar18 < (int)((ulong)(*(long *)(param_1 + 0x10) - lVar15) >> 3));
    if (lVar24 != 0) {
      lStack_1e8 = lVar24;
      __ZdlPv(lVar24);
    }
  }
  FUN_109183db0(&ppuStack_1d8);
  return;
LAB_1091829cc:
  if (dStack_100 != 0.0) {
    dStack_f8 = dStack_100;
    __ZdlPv();
  }
  if ((uVar17 & 1) != 0) {
    dStack_100 = pdVar23[2];
    pppuStack_118 = (undefined ***)0x0;
    dStack_108 = pdVar23[1];
    uStack_110 = *pdVar23;
    FUN_109182bac(&lStack_1f0,&pppuStack_118);
  }
  uVar17 = (int)lStack_1e8 - (int)lStack_1f0;
  if ((uVar17 >> 5 & 1) != 0) {
    dStack_100 = pdVar21[2];
    pppuStack_118 = (undefined ***)0x3ff0000000000000;
    dStack_108 = pdVar21[1];
    uStack_110 = *pdVar21;
    FUN_109182bac(&lStack_1f0,&pppuStack_118);
  }
  lVar9 = lStack_1e8;
  lVar24 = lStack_1f0;
  if (lStack_1f0 != lStack_1e8) {
    FUN_109182d7c(lStack_1f0,lStack_1e8,LZCOUNT(lStack_1e8 - lStack_1f0 >> 5) << 1 ^ 0x7e,1);
    uVar20 = 0;
    lVar22 = 0x38;
    do {
      lVar3 = lVar24 + lVar22;
      if ((((*(double *)(lVar3 + -0x38) != *(double *)(lVar3 + -0x18)) ||
           (*(double *)(lVar3 + -0x30) != *(double *)(lVar3 + -0x10))) ||
          (pdVar23 = (double *)(lVar24 + lVar22), pdVar23[-5] != pdVar23[-1])) ||
         (pdVar23[-4] != *pdVar23)) {
        FUN_10918479c(param_7,lVar3 + -0x30,lVar3 + -0x10);
        lVar9 = lStack_1e8;
        lVar24 = lStack_1f0;
      }
      uVar20 = uVar20 + 2;
      lVar22 = lVar22 + 0x40;
    } while (uVar20 < (ulong)(lVar9 - lVar24 >> 5));
  }
  uVar17 = uVar17 >> 5 & 1;
  iVar7 = iVar16 + -1;
  bVar1 = iVar16 < 1;
  iVar16 = iVar7;
  if (iVar7 == 0 || bVar1) goto LAB_109182ae8;
  goto LAB_1091825bc;
LAB_109182998:
  uVar20 = 0;
  uVar2 = (long)iStack_e8 + 1;
  iStack_e8 = (int)uVar2;
  if (uVar2 < (ulong)((long)dStack_f8 - (long)dStack_100 >> 2)) {
    iVar7 = *(int *)((long)dStack_100 + uVar2 * 4);
LAB_1091829bc:
    uStack_110 = (double)CONCAT44(iVar7,(undefined4)uStack_110);
    uVar20 = uVar13;
  }
  goto LAB_109182694;
}



/* Entry: 109182bac; end: 109182ce3;  */

ulong * FUN_109182bac(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  puVar4 = (ulong *)param_1[1];
  if (puVar4 < (ulong *)param_1[2]) {
    *puVar4 = *param_2;
    puVar4[1] = param_2[1];
    puVar4[2] = param_2[2];
    puVar4[3] = param_2[3];
    puVar9 = puVar4 + 4;
    puVar5 = param_1;
  }
  else {
    puVar8 = (ulong *)*param_1;
    lVar10 = (long)puVar4 - (long)puVar8 >> 5;
    uVar11 = lVar10 + 1;
    if (uVar11 >> 0x3b != 0) {
      FUN_109182d68();
LAB_109182ce0:
      func_0x000104bd35f4();
      return (ulong *)(ulong)(uint)param_1[0xc];
    }
    uVar6 = (long)param_1[2] - (long)puVar8;
    uVar7 = (long)uVar6 >> 4;
    if (uVar7 <= uVar11) {
      uVar7 = uVar11;
    }
    if (0x7fffffffffffffdf < uVar6) {
      uVar7 = 0x7ffffffffffffff;
    }
    if (uVar7 == 0) {
      puVar5 = (ulong *)0x0;
    }
    else {
      if (uVar7 >> 0x3b != 0) goto LAB_109182ce0;
      puVar5 = (ulong *)(uVar7 << 5);
      __Znwm();
    }
    puVar3 = (ulong *)((long)puVar5 + ((long)puVar4 - (long)puVar8));
    uVar11 = *param_2;
    uVar12 = param_2[3];
    uVar6 = param_2[2];
    puVar3[1] = param_2[1];
    *puVar3 = uVar11;
    puVar3[3] = uVar12;
    puVar3[2] = uVar6;
    puVar9 = puVar3 + 4;
    puVar2 = puVar3 + lVar10 * -4;
    for (puVar1 = puVar8; puVar1 != puVar4; puVar1 = puVar1 + 4) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2 = puVar2 + 4;
    }
    *param_1 = (ulong)(puVar3 + lVar10 * -4);
    param_1[1] = (ulong)puVar9;
    param_1[2] = (ulong)(puVar5 + uVar7 * 4);
    if (puVar8 != (ulong *)0x0) {
      __ZdlPv(puVar8);
      puVar5 = puVar8;
    }
  }
  param_1[1] = (ulong)puVar9;
  return puVar5;
}



/* Entry: 109182ce4; end: 109182ceb;  */

undefined4 FUN_109182ce4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



/* Entry: 109182cec; end: 109182d3f;  */

void FUN_109182cec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1 = puVar1 + 3;
  }
  else {
    puVar1 = param_1;
    FUN_109183eb8();
  }
  param_1[1] = puVar1;
  return;
}



/* Entry: 109182d40; end: 109182d67;  */

undefined8 * FUN_109182d40(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110adf010;
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110adee70;
  FUN_10917c57c(param_1 + 1,param_1[2]);
  return param_1;
}



/* Entry: 109182d68; end: 109182d7b;  */

/* WARNING: Possible PIC construction at 0x000109183980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109183984) */
/* WARNING: Removing unreachable block (ram,0x00010918399c) */
/* WARNING: Removing unreachable block (ram,0x0001091839e8) */
/* WARNING: Removing unreachable block (ram,0x000109183a38) */
/* WARNING: Removing unreachable block (ram,0x000109183a84) */
/* WARNING: Removing unreachable block (ram,0x000109183abc) */

void FUN_109182d68(undefined8 param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long lVar14;
  undefined8 *unaff_x23;
  ulong uVar15;
  undefined8 unaff_x24;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *******pppppppuVar20;
  code *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 ******ppppppuStack_20;
  code *pcStack_18;
  
  puVar5 = &stack0xfffffffffffffff0;
  puVar6 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  pcStack_18 = FUN_109182d7c;
  ppppppuStack_20 = (undefined8 ******)&stack0xfffffffffffffff0;
  do {
    puVar11 = param_2 + -4;
    puVar12 = puVar6;
LAB_109182dcc:
    puVar6 = puVar12;
    uVar18 = (long)param_2 - (long)puVar6 >> 5;
    if (uVar18 - 2 == 0 || (long)uVar18 < 2) {
      if (uVar18 < 2) {
        return;
      }
      if (uVar18 == 2) {
        FUN_109183ccc(puVar11,puVar6);
        if ((((uint)puVar11 ^ 0xffffffff) & 0xff) != 0) {
          return;
        }
        uVar25 = *puVar6;
        *puVar6 = param_2[-4];
        param_2[-4] = uVar25;
        uVar25 = puVar6[3];
        uVar27 = puVar6[2];
        uVar26 = puVar6[1];
        puVar6[1] = param_2[-3];
        puVar6[2] = param_2[-2];
        puVar6[3] = param_2[-1];
        param_2[-2] = uVar27;
        param_2[-3] = uVar26;
        param_2[-1] = uVar25;
        return;
      }
    }
    else {
      if (uVar18 == 3) {
        puVar12 = puVar6 + 4;
        puVar9 = puVar12;
        FUN_109183ccc(puVar12,puVar6);
        puVar10 = puVar11;
        FUN_109183ccc(puVar11,puVar12);
        if ((((uint)puVar9 ^ 0xffffffff) & 0xff) == 0) {
          uVar25 = *puVar6;
          if ((((uint)puVar10 ^ 0xffffffff) & 0xff) == 0) {
            *puVar6 = *puVar11;
            *puVar11 = uVar25;
            uVar25 = puVar6[3];
            uVar27 = puVar6[2];
            uVar26 = puVar6[1];
            puVar6[1] = param_2[-3];
            puVar6[2] = param_2[-2];
            puVar6[3] = param_2[-1];
          }
          else {
            *puVar6 = *puVar12;
            *puVar12 = uVar25;
            uVar25 = puVar6[3];
            uVar27 = puVar6[2];
            uVar26 = puVar6[1];
            puVar6[1] = puVar6[5];
            puVar6[2] = puVar6[6];
            puVar6[3] = puVar6[7];
            puVar6[6] = uVar27;
            puVar6[5] = uVar26;
            puVar6[7] = uVar25;
            puVar9 = puVar11;
            FUN_109183ccc(puVar11,puVar12);
            if ((((uint)puVar9 ^ 0xffffffff) & 0xff) != 0) {
              return;
            }
            uVar25 = *puVar12;
            *puVar12 = *puVar11;
            *puVar11 = uVar25;
            uVar25 = puVar6[7];
            uVar27 = puVar6[6];
            uVar26 = puVar6[5];
            puVar6[5] = param_2[-3];
            puVar6[6] = param_2[-2];
            puVar6[7] = param_2[-1];
          }
          param_2[-2] = uVar27;
          param_2[-3] = uVar26;
          param_2[-1] = uVar25;
        }
        else if ((((uint)puVar10 ^ 0xffffffff) & 0xff) == 0) {
          uVar25 = *puVar12;
          *puVar12 = *puVar11;
          *puVar11 = uVar25;
          uVar25 = puVar6[7];
          uVar27 = puVar6[6];
          uVar26 = puVar6[5];
          puVar6[5] = param_2[-3];
          puVar6[6] = param_2[-2];
          puVar6[7] = param_2[-1];
          param_2[-2] = uVar27;
          param_2[-3] = uVar26;
          param_2[-1] = uVar25;
          puVar11 = puVar12;
          FUN_109183ccc(puVar12,puVar6);
          if ((((uint)puVar11 ^ 0xffffffff) & 0xff) == 0) {
            uVar25 = *puVar6;
            *puVar6 = *puVar12;
            *puVar12 = uVar25;
            uVar25 = puVar6[3];
            uVar27 = puVar6[2];
            uVar26 = puVar6[1];
            puVar6[1] = puVar6[5];
            puVar6[2] = puVar6[6];
            puVar6[3] = puVar6[7];
            puVar6[6] = uVar27;
            puVar6[5] = uVar26;
            puVar6[7] = uVar25;
          }
        }
        return;
      }
      puVar12 = puVar11;
      pppppppuVar20 = (undefined8 *******)ppppppuStack_20;
      pcVar21 = pcStack_18;
      if (uVar18 == 4) {
SUB_109183830:
        puVar10 = puVar6 + 8;
        puVar9 = puVar6 + 4;
        *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
        *(undefined8 **)(puVar5 + -0x38) = unaff_x23;
        *(undefined8 **)(puVar5 + -0x30) = unaff_x22;
        *(undefined8 **)(puVar5 + -0x28) = unaff_x21;
        *(undefined8 **)(puVar5 + -0x20) = unaff_x20;
        *(undefined8 **)(puVar5 + -0x18) = unaff_x19;
        *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar20;
        *(code **)(puVar5 + -8) = pcVar21;
        FUN_109183684();
        puVar11 = puVar12;
        FUN_109183ccc(puVar12,puVar10);
        if ((((uint)puVar11 ^ 0xffffffff) & 0xff) == 0) {
          uVar25 = *puVar10;
          *puVar10 = *puVar12;
          *puVar12 = uVar25;
          uVar25 = puVar6[0xb];
          uVar27 = puVar6[10];
          uVar26 = puVar6[9];
          puVar6[9] = puVar12[1];
          puVar6[10] = puVar12[2];
          puVar6[0xb] = puVar12[3];
          puVar12[2] = uVar27;
          puVar12[1] = uVar26;
          puVar12[3] = uVar25;
          puVar12 = puVar10;
          FUN_109183ccc(puVar10,puVar9);
          if ((((uint)puVar12 ^ 0xffffffff) & 0xff) == 0) {
            uVar25 = *puVar9;
            *puVar9 = *puVar10;
            *puVar10 = uVar25;
            uVar25 = puVar6[7];
            uVar27 = puVar6[6];
            uVar26 = puVar6[5];
            puVar6[5] = puVar6[9];
            puVar6[6] = puVar6[10];
            puVar6[7] = puVar6[0xb];
            puVar6[10] = uVar27;
            puVar6[9] = uVar26;
            puVar6[0xb] = uVar25;
            puVar12 = puVar9;
            FUN_109183ccc(puVar9,puVar6);
            if ((((uint)puVar12 ^ 0xffffffff) & 0xff) == 0) {
              uVar25 = *puVar6;
              *puVar6 = *puVar9;
              *puVar9 = uVar25;
              uVar25 = puVar6[3];
              uVar27 = puVar6[2];
              uVar26 = puVar6[1];
              puVar6[1] = puVar6[5];
              puVar6[2] = puVar6[6];
              puVar6[3] = puVar6[7];
              puVar6[6] = uVar27;
              puVar6[5] = uVar26;
              puVar6[7] = uVar25;
            }
          }
        }
        return;
      }
      if (uVar18 == 5) {
        unaff_x19 = puVar6 + 4;
        unaff_x21 = puVar6 + 8;
        unaff_x22 = puVar6 + 0xc;
        puVar5 = &stack0xffffffffffffffb0;
        puVar12 = unaff_x22;
        unaff_x20 = puVar6;
        unaff_x23 = puVar11;
        pppppppuVar20 = &ppppppuStack_20;
        pcVar21 = (code *)0x109183984;
        goto SUB_109183830;
      }
    }
    if ((long)uVar18 < 0x18) {
      if ((param_4 & 1) == 0) {
        if (puVar6 == param_2) {
          return;
        }
        if (puVar6 + 4 == param_2) {
          return;
        }
        puVar12 = puVar6 + -4;
        puVar11 = puVar6 + 4;
        do {
          puVar9 = puVar11;
          puVar11 = puVar9;
          FUN_109183ccc(puVar9,puVar6);
          if ((((uint)puVar11 ^ 0xffffffff) & 0xff) == 0) {
            uVar25 = *puVar9;
            uVar26 = puVar6[5];
            uVar27 = puVar6[6];
            uVar28 = puVar6[7];
            puVar6 = puVar12;
            uStack_b0 = uVar25;
            uStack_a8 = uVar26;
            uStack_a0 = uVar27;
            uStack_98 = uVar28;
            do {
              puVar10 = puVar6;
              puVar10[8] = puVar10[4];
              puVar10[10] = puVar10[6];
              puVar10[9] = puVar10[5];
              puVar10[0xb] = puVar10[7];
              puVar11 = &uStack_b0;
              FUN_109183ccc(puVar11,puVar10);
              puVar6 = puVar10 + -4;
            } while ((((uint)puVar11 ^ 0xffffffff) & 0xff) == 0);
            puVar10[4] = uVar25;
            puVar10[5] = uVar26;
            puVar10[6] = uVar27;
            puVar10[7] = uVar28;
          }
          puVar12 = puVar12 + 4;
          puVar11 = puVar9 + 4;
          puVar6 = puVar9;
        } while (puVar9 + 4 != param_2);
        return;
      }
      if (puVar6 == param_2) {
        return;
      }
      if (puVar6 + 4 == param_2) {
        return;
      }
      lVar17 = 0;
      puVar12 = puVar6 + 4;
      puVar11 = puVar6;
      break;
    }
    if (param_3 == 0) {
      if (puVar6 == param_2) {
        return;
      }
      uVar15 = uVar18 - 2 >> 1;
      uVar13 = uVar15;
      goto LAB_109183338;
    }
    puVar12 = puVar6 + (uVar18 >> 1) * 4;
    if (uVar18 < 0x81) {
      FUN_109183684(puVar12,puVar6,puVar11);
    }
    else {
      FUN_109183684(puVar6,puVar12,puVar11);
      FUN_109183684(puVar6 + 4,puVar12 + -4,param_2 + -8);
      FUN_109183684(puVar6 + 8,puVar12 + 4,param_2 + -0xc);
      FUN_109183684(puVar12 + -4,puVar12,puVar12 + 4);
      uVar26 = puVar6[1];
      uVar25 = *puVar6;
      uVar28 = puVar6[3];
      uVar27 = puVar6[2];
      uVar22 = *puVar12;
      uVar24 = puVar12[3];
      uVar23 = puVar12[2];
      puVar6[1] = puVar12[1];
      *puVar6 = uVar22;
      puVar6[3] = uVar24;
      puVar6[2] = uVar23;
      puVar12[1] = uVar26;
      *puVar12 = uVar25;
      puVar12[3] = uVar28;
      puVar12[2] = uVar27;
    }
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      puVar12 = puVar6 + -4;
      FUN_109183ccc(puVar12,puVar6);
      if ((((uint)puVar12 ^ 0xffffffff) & 0xff) != 0) {
        uVar25 = *puVar6;
        uVar26 = puVar6[1];
        uVar27 = puVar6[2];
        uVar28 = puVar6[3];
        puVar9 = &uStack_b0;
        uStack_b0 = uVar25;
        uStack_a8 = uVar26;
        uStack_a0 = uVar27;
        uStack_98 = uVar28;
        FUN_109183ccc(puVar9,puVar11);
        puVar12 = puVar6;
        if ((((uint)puVar9 ^ 0xffffffff) & 0xff) == 0) {
          do {
            puVar12 = puVar12 + 4;
            puVar9 = &uStack_b0;
            FUN_109183ccc(puVar9,puVar12);
          } while ((((uint)puVar9 ^ 0xffffffff) & 0xff) != 0);
        }
        else {
          do {
            puVar12 = puVar12 + 4;
            if (param_2 <= puVar12) break;
            puVar9 = &uStack_b0;
            FUN_109183ccc(puVar9,puVar12);
          } while ((((uint)puVar9 ^ 0xffffffff) & 0xff) != 0);
        }
        puVar9 = param_2;
        if (puVar12 < param_2) {
          do {
            puVar9 = puVar9 + -4;
            puVar10 = &uStack_b0;
            FUN_109183ccc(puVar10,puVar9);
          } while ((((uint)puVar10 ^ 0xffffffff) & 0xff) == 0);
        }
        while (puVar12 < puVar9) {
          uVar22 = *puVar12;
          *puVar12 = *puVar9;
          *puVar9 = uVar22;
          uVar22 = puVar12[3];
          uVar24 = puVar12[2];
          uVar23 = puVar12[1];
          puVar12[1] = puVar9[1];
          puVar12[2] = puVar9[2];
          puVar12[3] = puVar9[3];
          puVar9[2] = uVar24;
          puVar9[1] = uVar23;
          puVar9[3] = uVar22;
          do {
            puVar12 = puVar12 + 4;
            puVar10 = &uStack_b0;
            FUN_109183ccc(puVar10,puVar12);
          } while ((((uint)puVar10 ^ 0xffffffff) & 0xff) != 0);
          do {
            puVar9 = puVar9 + -4;
            puVar10 = &uStack_b0;
            FUN_109183ccc(puVar10,puVar9);
          } while ((((uint)puVar10 ^ 0xffffffff) & 0xff) == 0);
        }
        if (puVar6 != puVar12 + -4) {
          *puVar6 = puVar12[-4];
          puVar6[1] = puVar12[-3];
          puVar6[2] = puVar12[-2];
          puVar6[3] = puVar12[-1];
        }
        param_4 = 0;
        puVar12[-4] = uVar25;
        puVar12[-3] = uVar26;
        puVar12[-2] = uVar27;
        puVar12[-1] = uVar28;
        goto LAB_109182dcc;
      }
    }
    lVar17 = 0;
    uVar25 = *puVar6;
    uVar26 = puVar6[1];
    uVar27 = puVar6[2];
    uVar28 = puVar6[3];
    uStack_b0 = uVar25;
    uStack_a8 = uVar26;
    uStack_a0 = uVar27;
    uStack_98 = uVar28;
    do {
      lVar17 = lVar17 + 0x20;
      puVar7 = (undefined *)(lVar17 + (long)puVar6);
      FUN_109183ccc(puVar7,&uStack_b0);
    } while ((((uint)puVar7 ^ 0xffffffff) & 0xff) == 0);
    puVar9 = (undefined8 *)((long)puVar6 + lVar17);
    puVar10 = param_2;
    if (lVar17 == 0x20) {
      do {
        if (puVar10 <= puVar9) break;
        puVar10 = puVar10 + -4;
        puVar12 = puVar10;
        FUN_109183ccc(puVar10,&uStack_b0);
      } while ((((uint)puVar12 ^ 0xffffffff) & 0xff) != 0);
    }
    else {
      do {
        puVar10 = puVar10 + -4;
        puVar12 = puVar10;
        FUN_109183ccc(puVar10,&uStack_b0);
      } while ((((uint)puVar12 ^ 0xffffffff) & 0xff) != 0);
    }
    puVar12 = puVar9;
    puVar19 = puVar10;
    if (puVar9 < puVar10) {
      do {
        uVar22 = *puVar12;
        *puVar12 = *puVar19;
        *puVar19 = uVar22;
        uVar22 = puVar12[3];
        uVar24 = puVar12[2];
        uVar23 = puVar12[1];
        puVar12[1] = puVar19[1];
        puVar12[2] = puVar19[2];
        puVar12[3] = puVar19[3];
        puVar19[2] = uVar24;
        puVar19[1] = uVar23;
        puVar19[3] = uVar22;
        do {
          puVar12 = puVar12 + 4;
          puVar8 = puVar12;
          FUN_109183ccc(puVar12,&uStack_b0);
        } while ((((uint)puVar8 ^ 0xffffffff) & 0xff) == 0);
        do {
          puVar19 = puVar19 + -4;
          puVar8 = puVar19;
          FUN_109183ccc(puVar19,&uStack_b0);
        } while ((((uint)puVar8 ^ 0xffffffff) & 0xff) != 0);
      } while (puVar12 < puVar19);
    }
    puVar19 = puVar12 + -4;
    if (puVar6 != puVar19) {
      *puVar6 = puVar12[-4];
      puVar6[1] = puVar12[-3];
      puVar6[2] = puVar12[-2];
      puVar6[3] = puVar12[-1];
    }
    puVar12[-4] = uVar25;
    puVar12[-3] = uVar26;
    puVar12[-2] = uVar27;
    puVar12[-1] = uVar28;
    if (puVar9 < puVar10) goto LAB_109183004;
    puVar9 = puVar6;
    FUN_109183ad0(puVar6,puVar19);
    puVar10 = puVar12;
    FUN_109183ad0(puVar12,param_2);
    if ((int)puVar10 == 0) goto code_r0x000109183000;
    param_2 = puVar19;
    if (((ulong)puVar9 & 1) != 0) {
      return;
    }
  } while( true );
LAB_109183290:
  puVar9 = puVar12;
  puVar12 = puVar9;
  FUN_109183ccc(puVar9,puVar11);
  if ((((uint)puVar12 ^ 0xffffffff) & 0xff) == 0) {
    uVar25 = *puVar9;
    uVar26 = puVar11[5];
    uVar27 = puVar11[6];
    uVar28 = puVar11[7];
    lVar4 = lVar17;
    uStack_b0 = uVar25;
    uStack_a8 = uVar26;
    uStack_a0 = uVar27;
    uStack_98 = uVar28;
    do {
      lVar14 = lVar4;
      puVar12 = (undefined8 *)((long)puVar6 + lVar14);
      puVar12[4] = *puVar12;
      puVar12[6] = puVar12[2];
      puVar12[5] = puVar12[1];
      puVar12[7] = puVar12[3];
      puVar12 = puVar6;
      if (lVar14 == 0) goto LAB_109183308;
      puVar12 = &uStack_b0;
      FUN_109183ccc(puVar12,(undefined *)(lVar14 + -0x20 + (long)puVar6));
      lVar4 = lVar14 + -0x20;
    } while ((((uint)puVar12 ^ 0xffffffff) & 0xff) == 0);
    puVar12 = (undefined8 *)((long)puVar6 + lVar14);
LAB_109183308:
    *puVar12 = uVar25;
    puVar12[1] = uVar26;
    puVar12[2] = uVar27;
    puVar12[3] = uVar28;
  }
  lVar17 = lVar17 + 0x20;
  puVar12 = puVar9 + 4;
  puVar11 = puVar9;
  if (puVar9 + 4 == param_2) {
    return;
  }
  goto LAB_109183290;
LAB_109183338:
  do {
    if ((long)uVar13 <= (long)uVar15) {
      uVar2 = (uVar13 & 0x3fffffffffffffff) << 1 | 1;
      puVar12 = puVar6 + uVar2 * 4;
      uVar1 = uVar13 * 2 + 2;
      puVar11 = puVar12;
      uVar16 = uVar2;
      if ((long)uVar1 < (long)uVar18) {
        puVar9 = puVar12;
        FUN_109183ccc(puVar12,puVar12 + 4);
        puVar11 = puVar12 + 4;
        uVar16 = uVar1;
        if (((uint)puVar9 & 0xff) != 0xff) {
          puVar11 = puVar12;
          uVar16 = uVar2;
        }
      }
      puVar12 = puVar6 + uVar13 * 4;
      puVar9 = puVar11;
      FUN_109183ccc(puVar11,puVar12);
      if ((((uint)puVar9 ^ 0xffffffff) & 0xff) != 0) {
        uVar25 = *puVar12;
        uVar26 = puVar12[1];
        uVar27 = puVar12[2];
        uVar28 = puVar12[3];
        uStack_b0 = uVar25;
        uStack_a8 = uVar26;
        uStack_a0 = uVar27;
        uStack_98 = uVar28;
        do {
          puVar9 = puVar11;
          *puVar12 = *puVar9;
          puVar12[1] = puVar9[1];
          puVar12[2] = puVar9[2];
          puVar12[3] = puVar9[3];
          if ((long)uVar15 < (long)uVar16) break;
          uVar2 = uVar16 << 1 | 1;
          puVar12 = puVar6 + uVar2 * 4;
          uVar1 = uVar16 * 2 + 2;
          puVar11 = puVar12;
          uVar16 = uVar2;
          if ((long)uVar1 < (long)uVar18) {
            puVar10 = puVar12;
            FUN_109183ccc(puVar12,puVar12 + 4);
            puVar11 = puVar12 + 4;
            uVar16 = uVar1;
            if (((uint)puVar10 & 0xff) != 0xff) {
              puVar11 = puVar12;
              uVar16 = uVar2;
            }
          }
          puVar10 = puVar11;
          FUN_109183ccc(puVar11,&uStack_b0);
          puVar12 = puVar9;
        } while ((((uint)puVar10 ^ 0xffffffff) & 0xff) != 0);
        *puVar9 = uVar25;
        puVar9[1] = uVar26;
        puVar9[2] = uVar27;
        puVar9[3] = uVar28;
      }
    }
    bVar3 = uVar13 != 0;
    uVar13 = uVar13 - 1;
  } while (bVar3);
  do {
    uVar13 = 0;
    uVar28 = *puVar6;
    uVar27 = puVar6[1];
    uVar26 = puVar6[2];
    uVar25 = puVar6[3];
    puVar12 = puVar6;
    do {
      puVar11 = puVar12 + uVar13 * 4 + 4;
      uVar1 = uVar13 << 1 | 1;
      uVar15 = uVar13 * 2 + 2;
      puVar9 = puVar11;
      uVar2 = uVar1;
      if ((long)uVar15 < (long)uVar18) {
        puVar10 = puVar11;
        FUN_109183ccc(puVar11,puVar12 + uVar13 * 4 + 8);
        puVar9 = puVar12 + uVar13 * 4 + 8;
        uVar2 = uVar15;
        if (((uint)puVar10 & 0xff) != 0xff) {
          puVar9 = puVar11;
          uVar2 = uVar1;
        }
      }
      uVar13 = uVar2;
      *puVar12 = *puVar9;
      puVar12[1] = puVar9[1];
      puVar12[2] = puVar9[2];
      puVar12[3] = puVar9[3];
      puVar12 = puVar9;
    } while ((long)uVar13 <= (long)(uVar18 - 2 >> 1));
    if (puVar9 == param_2 + -4) {
      *puVar9 = uVar28;
      puVar9[1] = uVar27;
      puVar9[2] = uVar26;
      puVar9[3] = uVar25;
    }
    else {
      *puVar9 = param_2[-4];
      puVar9[1] = param_2[-3];
      puVar9[2] = param_2[-2];
      puVar9[3] = param_2[-1];
      param_2[-4] = uVar28;
      param_2[-3] = uVar27;
      param_2[-2] = uVar26;
      param_2[-1] = uVar25;
      lVar17 = (long)((long)puVar9 + (0x20 - (long)puVar6)) >> 5;
      if (1 < lVar17) {
        uVar13 = lVar17 - 2U >> 1;
        puVar12 = puVar6 + uVar13 * 4;
        puVar11 = puVar12;
        FUN_109183ccc(puVar12,puVar9);
        if ((((uint)puVar11 ^ 0xffffffff) & 0xff) == 0) {
          uVar25 = *puVar9;
          uVar26 = puVar9[1];
          uVar27 = puVar9[2];
          uVar28 = puVar9[3];
          uStack_b0 = uVar25;
          uStack_a8 = uVar26;
          uStack_a0 = uVar27;
          uStack_98 = uVar28;
          do {
            puVar11 = puVar12;
            *puVar9 = *puVar11;
            puVar9[1] = puVar11[1];
            puVar9[2] = puVar11[2];
            puVar9[3] = puVar11[3];
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1 >> 1;
            puVar12 = puVar6 + uVar13 * 4;
            puVar10 = puVar12;
            FUN_109183ccc(puVar12,&uStack_b0);
            puVar9 = puVar11;
          } while ((((uint)puVar10 ^ 0xffffffff) & 0xff) == 0);
          *puVar11 = uVar25;
          puVar11[1] = uVar26;
          puVar11[2] = uVar27;
          puVar11[3] = uVar28;
        }
      }
    }
    bVar3 = (long)uVar18 < 3;
    param_2 = param_2 + -4;
    uVar18 = uVar18 - 1;
    if (bVar3) {
      return;
    }
  } while( true );
code_r0x000109183000:
  if (((ulong)puVar9 & 1) == 0) {
LAB_109183004:
    FUN_109182d7c(puVar6,puVar19,param_3,(uint)param_4 & 1);
    param_4 = 0;
  }
  goto LAB_109182dcc;
}



/* Entry: 109182d7c; end: 109183683;  */

/* WARNING: Possible PIC construction at 0x000109183980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109183984) */
/* WARNING: Removing unreachable block (ram,0x00010918399c) */
/* WARNING: Removing unreachable block (ram,0x0001091839e8) */
/* WARNING: Removing unreachable block (ram,0x000109183a38) */
/* WARNING: Removing unreachable block (ram,0x000109183a84) */
/* WARNING: Removing unreachable block (ram,0x000109183abc) */

void FUN_109182d7c(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long lVar11;
  undefined8 *unaff_x23;
  ulong uVar12;
  undefined8 unaff_x24;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  do {
    puVar8 = param_2 + -4;
    puVar9 = param_1;
LAB_109182dcc:
    param_1 = puVar9;
    uVar15 = (long)param_2 - (long)param_1 >> 5;
    if (uVar15 - 2 == 0 || (long)uVar15 < 2) {
      if (uVar15 < 2) {
        return;
      }
      if (uVar15 == 2) {
        FUN_109183ccc(puVar8,param_1);
        if ((((uint)puVar8 ^ 0xffffffff) & 0xff) != 0) {
          return;
        }
        uVar20 = *param_1;
        *param_1 = param_2[-4];
        param_2[-4] = uVar20;
        uVar20 = param_1[3];
        uVar22 = param_1[2];
        uVar21 = param_1[1];
        param_1[1] = param_2[-3];
        param_1[2] = param_2[-2];
        param_1[3] = param_2[-1];
        param_2[-2] = uVar22;
        param_2[-3] = uVar21;
        param_2[-1] = uVar20;
        return;
      }
    }
    else {
      if (uVar15 == 3) {
        puVar9 = param_1 + 4;
        puVar6 = puVar9;
        FUN_109183ccc(puVar9,param_1);
        puVar7 = puVar8;
        FUN_109183ccc(puVar8,puVar9);
        if ((((uint)puVar6 ^ 0xffffffff) & 0xff) == 0) {
          uVar20 = *param_1;
          if ((((uint)puVar7 ^ 0xffffffff) & 0xff) == 0) {
            *param_1 = *puVar8;
            *puVar8 = uVar20;
            uVar20 = param_1[3];
            uVar22 = param_1[2];
            uVar21 = param_1[1];
            param_1[1] = param_2[-3];
            param_1[2] = param_2[-2];
            param_1[3] = param_2[-1];
          }
          else {
            *param_1 = *puVar9;
            *puVar9 = uVar20;
            uVar20 = param_1[3];
            uVar22 = param_1[2];
            uVar21 = param_1[1];
            param_1[1] = param_1[5];
            param_1[2] = param_1[6];
            param_1[3] = param_1[7];
            param_1[6] = uVar22;
            param_1[5] = uVar21;
            param_1[7] = uVar20;
            puVar6 = puVar8;
            FUN_109183ccc(puVar8,puVar9);
            if ((((uint)puVar6 ^ 0xffffffff) & 0xff) != 0) {
              return;
            }
            uVar20 = *puVar9;
            *puVar9 = *puVar8;
            *puVar8 = uVar20;
            uVar20 = param_1[7];
            uVar22 = param_1[6];
            uVar21 = param_1[5];
            param_1[5] = param_2[-3];
            param_1[6] = param_2[-2];
            param_1[7] = param_2[-1];
          }
          param_2[-2] = uVar22;
          param_2[-3] = uVar21;
          param_2[-1] = uVar20;
        }
        else if ((((uint)puVar7 ^ 0xffffffff) & 0xff) == 0) {
          uVar20 = *puVar9;
          *puVar9 = *puVar8;
          *puVar8 = uVar20;
          uVar20 = param_1[7];
          uVar22 = param_1[6];
          uVar21 = param_1[5];
          param_1[5] = param_2[-3];
          param_1[6] = param_2[-2];
          param_1[7] = param_2[-1];
          param_2[-2] = uVar22;
          param_2[-3] = uVar21;
          param_2[-1] = uVar20;
          puVar8 = puVar9;
          FUN_109183ccc(puVar9,param_1);
          if ((((uint)puVar8 ^ 0xffffffff) & 0xff) == 0) {
            uVar20 = *param_1;
            *param_1 = *puVar9;
            *puVar9 = uVar20;
            uVar20 = param_1[3];
            uVar22 = param_1[2];
            uVar21 = param_1[1];
            param_1[1] = param_1[5];
            param_1[2] = param_1[6];
            param_1[3] = param_1[7];
            param_1[6] = uVar22;
            param_1[5] = uVar21;
            param_1[7] = uVar20;
          }
        }
        return;
      }
      puVar9 = puVar8;
      if (uVar15 == 4) {
SUB_109183830:
        puVar7 = param_1 + 8;
        puVar6 = param_1 + 4;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        FUN_109183684();
        puVar8 = puVar9;
        FUN_109183ccc(puVar9,puVar7);
        if ((((uint)puVar8 ^ 0xffffffff) & 0xff) == 0) {
          uVar20 = *puVar7;
          *puVar7 = *puVar9;
          *puVar9 = uVar20;
          uVar20 = param_1[0xb];
          uVar22 = param_1[10];
          uVar21 = param_1[9];
          param_1[9] = puVar9[1];
          param_1[10] = puVar9[2];
          param_1[0xb] = puVar9[3];
          puVar9[2] = uVar22;
          puVar9[1] = uVar21;
          puVar9[3] = uVar20;
          puVar9 = puVar7;
          FUN_109183ccc(puVar7,puVar6);
          if ((((uint)puVar9 ^ 0xffffffff) & 0xff) == 0) {
            uVar20 = *puVar6;
            *puVar6 = *puVar7;
            *puVar7 = uVar20;
            uVar20 = param_1[7];
            uVar22 = param_1[6];
            uVar21 = param_1[5];
            param_1[5] = param_1[9];
            param_1[6] = param_1[10];
            param_1[7] = param_1[0xb];
            param_1[10] = uVar22;
            param_1[9] = uVar21;
            param_1[0xb] = uVar20;
            puVar9 = puVar6;
            FUN_109183ccc(puVar6,param_1);
            if ((((uint)puVar9 ^ 0xffffffff) & 0xff) == 0) {
              uVar20 = *param_1;
              *param_1 = *puVar6;
              *puVar6 = uVar20;
              uVar20 = param_1[3];
              uVar22 = param_1[2];
              uVar21 = param_1[1];
              param_1[1] = param_1[5];
              param_1[2] = param_1[6];
              param_1[3] = param_1[7];
              param_1[6] = uVar22;
              param_1[5] = uVar21;
              param_1[7] = uVar20;
            }
          }
        }
        return;
      }
      if (uVar15 == 5) {
        unaff_x19 = param_1 + 4;
        unaff_x21 = param_1 + 8;
        unaff_x22 = param_1 + 0xc;
        unaff_x29 = &stack0xfffffffffffffff0;
        unaff_x30 = 0x109183984;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        puVar9 = unaff_x22;
        unaff_x20 = param_1;
        unaff_x23 = puVar8;
        goto SUB_109183830;
      }
    }
    if ((long)uVar15 < 0x18) {
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2) {
          return;
        }
        if (param_1 + 4 == param_2) {
          return;
        }
        puVar9 = param_1 + -4;
        puVar8 = param_1 + 4;
        do {
          puVar6 = puVar8;
          puVar8 = puVar6;
          FUN_109183ccc(puVar6,param_1);
          if ((((uint)puVar8 ^ 0xffffffff) & 0xff) == 0) {
            uVar20 = *puVar6;
            uVar21 = param_1[5];
            uVar22 = param_1[6];
            uVar23 = param_1[7];
            puVar8 = puVar9;
            uStack_a0 = uVar20;
            uStack_98 = uVar21;
            uStack_90 = uVar22;
            uStack_88 = uVar23;
            do {
              puVar16 = puVar8;
              puVar16[8] = puVar16[4];
              puVar16[10] = puVar16[6];
              puVar16[9] = puVar16[5];
              puVar16[0xb] = puVar16[7];
              puVar7 = &uStack_a0;
              FUN_109183ccc(puVar7,puVar16);
              puVar8 = puVar16 + -4;
            } while ((((uint)puVar7 ^ 0xffffffff) & 0xff) == 0);
            puVar16[4] = uVar20;
            puVar16[5] = uVar21;
            puVar16[6] = uVar22;
            puVar16[7] = uVar23;
          }
          puVar9 = puVar9 + 4;
          puVar8 = puVar6 + 4;
          param_1 = puVar6;
        } while (puVar6 + 4 != param_2);
        return;
      }
      if (param_1 == param_2) {
        return;
      }
      if (param_1 + 4 == param_2) {
        return;
      }
      lVar14 = 0;
      puVar9 = param_1 + 4;
      puVar8 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar12 = uVar15 - 2 >> 1;
      uVar10 = uVar12;
      goto LAB_109183338;
    }
    puVar9 = param_1 + (uVar15 >> 1) * 4;
    if (uVar15 < 0x81) {
      FUN_109183684(puVar9,param_1,puVar8);
    }
    else {
      FUN_109183684(param_1,puVar9,puVar8);
      FUN_109183684(param_1 + 4,puVar9 + -4,param_2 + -8);
      FUN_109183684(param_1 + 8,puVar9 + 4,param_2 + -0xc);
      FUN_109183684(puVar9 + -4,puVar9,puVar9 + 4);
      uVar21 = param_1[1];
      uVar20 = *param_1;
      uVar23 = param_1[3];
      uVar22 = param_1[2];
      uVar17 = *puVar9;
      uVar19 = puVar9[3];
      uVar18 = puVar9[2];
      param_1[1] = puVar9[1];
      *param_1 = uVar17;
      param_1[3] = uVar19;
      param_1[2] = uVar18;
      puVar9[1] = uVar21;
      *puVar9 = uVar20;
      puVar9[3] = uVar23;
      puVar9[2] = uVar22;
    }
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      puVar9 = param_1 + -4;
      FUN_109183ccc(puVar9,param_1);
      if ((((uint)puVar9 ^ 0xffffffff) & 0xff) != 0) {
        uVar20 = *param_1;
        uVar21 = param_1[1];
        uVar22 = param_1[2];
        uVar23 = param_1[3];
        puVar6 = &uStack_a0;
        uStack_a0 = uVar20;
        uStack_98 = uVar21;
        uStack_90 = uVar22;
        uStack_88 = uVar23;
        FUN_109183ccc(puVar6,puVar8);
        puVar9 = param_1;
        if ((((uint)puVar6 ^ 0xffffffff) & 0xff) == 0) {
          do {
            puVar9 = puVar9 + 4;
            puVar6 = &uStack_a0;
            FUN_109183ccc(puVar6,puVar9);
          } while ((((uint)puVar6 ^ 0xffffffff) & 0xff) != 0);
        }
        else {
          do {
            puVar9 = puVar9 + 4;
            if (param_2 <= puVar9) break;
            puVar6 = &uStack_a0;
            FUN_109183ccc(puVar6,puVar9);
          } while ((((uint)puVar6 ^ 0xffffffff) & 0xff) != 0);
        }
        puVar6 = param_2;
        if (puVar9 < param_2) {
          do {
            puVar6 = puVar6 + -4;
            puVar7 = &uStack_a0;
            FUN_109183ccc(puVar7,puVar6);
          } while ((((uint)puVar7 ^ 0xffffffff) & 0xff) == 0);
        }
        while (puVar9 < puVar6) {
          uVar17 = *puVar9;
          *puVar9 = *puVar6;
          *puVar6 = uVar17;
          uVar17 = puVar9[3];
          uVar19 = puVar9[2];
          uVar18 = puVar9[1];
          puVar9[1] = puVar6[1];
          puVar9[2] = puVar6[2];
          puVar9[3] = puVar6[3];
          puVar6[2] = uVar19;
          puVar6[1] = uVar18;
          puVar6[3] = uVar17;
          do {
            puVar9 = puVar9 + 4;
            puVar7 = &uStack_a0;
            FUN_109183ccc(puVar7,puVar9);
          } while ((((uint)puVar7 ^ 0xffffffff) & 0xff) != 0);
          do {
            puVar6 = puVar6 + -4;
            puVar7 = &uStack_a0;
            FUN_109183ccc(puVar7,puVar6);
          } while ((((uint)puVar7 ^ 0xffffffff) & 0xff) == 0);
        }
        if (param_1 != puVar9 + -4) {
          *param_1 = puVar9[-4];
          param_1[1] = puVar9[-3];
          param_1[2] = puVar9[-2];
          param_1[3] = puVar9[-1];
        }
        param_4 = 0;
        puVar9[-4] = uVar20;
        puVar9[-3] = uVar21;
        puVar9[-2] = uVar22;
        puVar9[-1] = uVar23;
        goto LAB_109182dcc;
      }
    }
    lVar14 = 0;
    uVar20 = *param_1;
    uVar21 = param_1[1];
    uVar22 = param_1[2];
    uVar23 = param_1[3];
    uStack_a0 = uVar20;
    uStack_98 = uVar21;
    uStack_90 = uVar22;
    uStack_88 = uVar23;
    do {
      lVar14 = lVar14 + 0x20;
      lVar4 = lVar14 + (long)param_1;
      FUN_109183ccc(lVar4,&uStack_a0);
    } while ((((uint)lVar4 ^ 0xffffffff) & 0xff) == 0);
    puVar6 = (undefined8 *)((long)param_1 + lVar14);
    puVar7 = param_2;
    if (lVar14 == 0x20) {
      do {
        if (puVar7 <= puVar6) break;
        puVar7 = puVar7 + -4;
        puVar9 = puVar7;
        FUN_109183ccc(puVar7,&uStack_a0);
      } while ((((uint)puVar9 ^ 0xffffffff) & 0xff) != 0);
    }
    else {
      do {
        puVar7 = puVar7 + -4;
        puVar9 = puVar7;
        FUN_109183ccc(puVar7,&uStack_a0);
      } while ((((uint)puVar9 ^ 0xffffffff) & 0xff) != 0);
    }
    puVar9 = puVar6;
    puVar16 = puVar7;
    if (puVar6 < puVar7) {
      do {
        uVar17 = *puVar9;
        *puVar9 = *puVar16;
        *puVar16 = uVar17;
        uVar17 = puVar9[3];
        uVar19 = puVar9[2];
        uVar18 = puVar9[1];
        puVar9[1] = puVar16[1];
        puVar9[2] = puVar16[2];
        puVar9[3] = puVar16[3];
        puVar16[2] = uVar19;
        puVar16[1] = uVar18;
        puVar16[3] = uVar17;
        do {
          puVar9 = puVar9 + 4;
          puVar5 = puVar9;
          FUN_109183ccc(puVar9,&uStack_a0);
        } while ((((uint)puVar5 ^ 0xffffffff) & 0xff) == 0);
        do {
          puVar16 = puVar16 + -4;
          puVar5 = puVar16;
          FUN_109183ccc(puVar16,&uStack_a0);
        } while ((((uint)puVar5 ^ 0xffffffff) & 0xff) != 0);
      } while (puVar9 < puVar16);
    }
    puVar16 = puVar9 + -4;
    if (param_1 != puVar16) {
      *param_1 = puVar9[-4];
      param_1[1] = puVar9[-3];
      param_1[2] = puVar9[-2];
      param_1[3] = puVar9[-1];
    }
    puVar9[-4] = uVar20;
    puVar9[-3] = uVar21;
    puVar9[-2] = uVar22;
    puVar9[-1] = uVar23;
    if (puVar6 < puVar7) goto LAB_109183004;
    puVar6 = param_1;
    FUN_109183ad0(param_1,puVar16);
    puVar7 = puVar9;
    FUN_109183ad0(puVar9,param_2);
    if ((int)puVar7 == 0) goto code_r0x000109183000;
    param_2 = puVar16;
    if (((ulong)puVar6 & 1) != 0) {
      return;
    }
  } while( true );
LAB_109183290:
  puVar6 = puVar9;
  puVar9 = puVar6;
  FUN_109183ccc(puVar6,puVar8);
  if ((((uint)puVar9 ^ 0xffffffff) & 0xff) == 0) {
    uVar20 = *puVar6;
    uVar21 = puVar8[5];
    uVar22 = puVar8[6];
    uVar23 = puVar8[7];
    lVar4 = lVar14;
    uStack_a0 = uVar20;
    uStack_98 = uVar21;
    uStack_90 = uVar22;
    uStack_88 = uVar23;
    do {
      lVar11 = lVar4;
      puVar9 = (undefined8 *)((long)param_1 + lVar11);
      puVar9[4] = *puVar9;
      puVar9[6] = puVar9[2];
      puVar9[5] = puVar9[1];
      puVar9[7] = puVar9[3];
      puVar9 = param_1;
      if (lVar11 == 0) goto LAB_109183308;
      puVar9 = &uStack_a0;
      FUN_109183ccc(puVar9,lVar11 + -0x20 + (long)param_1);
      lVar4 = lVar11 + -0x20;
    } while ((((uint)puVar9 ^ 0xffffffff) & 0xff) == 0);
    puVar9 = (undefined8 *)((long)param_1 + lVar11);
LAB_109183308:
    *puVar9 = uVar20;
    puVar9[1] = uVar21;
    puVar9[2] = uVar22;
    puVar9[3] = uVar23;
  }
  lVar14 = lVar14 + 0x20;
  puVar9 = puVar6 + 4;
  puVar8 = puVar6;
  if (puVar6 + 4 == param_2) {
    return;
  }
  goto LAB_109183290;
LAB_109183338:
  do {
    if ((long)uVar10 <= (long)uVar12) {
      uVar2 = (uVar10 & 0x3fffffffffffffff) << 1 | 1;
      puVar9 = param_1 + uVar2 * 4;
      uVar1 = uVar10 * 2 + 2;
      puVar8 = puVar9;
      uVar13 = uVar2;
      if ((long)uVar1 < (long)uVar15) {
        puVar6 = puVar9;
        FUN_109183ccc(puVar9,puVar9 + 4);
        puVar8 = puVar9 + 4;
        uVar13 = uVar1;
        if (((uint)puVar6 & 0xff) != 0xff) {
          puVar8 = puVar9;
          uVar13 = uVar2;
        }
      }
      puVar9 = param_1 + uVar10 * 4;
      puVar6 = puVar8;
      FUN_109183ccc(puVar8,puVar9);
      if ((((uint)puVar6 ^ 0xffffffff) & 0xff) != 0) {
        uVar20 = *puVar9;
        uVar21 = puVar9[1];
        uVar22 = puVar9[2];
        uVar23 = puVar9[3];
        uStack_a0 = uVar20;
        uStack_98 = uVar21;
        uStack_90 = uVar22;
        uStack_88 = uVar23;
        do {
          puVar6 = puVar8;
          *puVar9 = *puVar6;
          puVar9[1] = puVar6[1];
          puVar9[2] = puVar6[2];
          puVar9[3] = puVar6[3];
          if ((long)uVar12 < (long)uVar13) break;
          uVar2 = uVar13 << 1 | 1;
          puVar9 = param_1 + uVar2 * 4;
          uVar1 = uVar13 * 2 + 2;
          puVar8 = puVar9;
          uVar13 = uVar2;
          if ((long)uVar1 < (long)uVar15) {
            puVar7 = puVar9;
            FUN_109183ccc(puVar9,puVar9 + 4);
            puVar8 = puVar9 + 4;
            uVar13 = uVar1;
            if (((uint)puVar7 & 0xff) != 0xff) {
              puVar8 = puVar9;
              uVar13 = uVar2;
            }
          }
          puVar7 = puVar8;
          FUN_109183ccc(puVar8,&uStack_a0);
          puVar9 = puVar6;
        } while ((((uint)puVar7 ^ 0xffffffff) & 0xff) != 0);
        *puVar6 = uVar20;
        puVar6[1] = uVar21;
        puVar6[2] = uVar22;
        puVar6[3] = uVar23;
      }
    }
    bVar3 = uVar10 != 0;
    uVar10 = uVar10 - 1;
  } while (bVar3);
  do {
    uVar10 = 0;
    uVar23 = *param_1;
    uVar22 = param_1[1];
    uVar21 = param_1[2];
    uVar20 = param_1[3];
    puVar9 = param_1;
    do {
      puVar8 = puVar9 + uVar10 * 4 + 4;
      uVar1 = uVar10 << 1 | 1;
      uVar12 = uVar10 * 2 + 2;
      puVar6 = puVar8;
      uVar2 = uVar1;
      if ((long)uVar12 < (long)uVar15) {
        puVar7 = puVar8;
        FUN_109183ccc(puVar8,puVar9 + uVar10 * 4 + 8);
        puVar6 = puVar9 + uVar10 * 4 + 8;
        uVar2 = uVar12;
        if (((uint)puVar7 & 0xff) != 0xff) {
          puVar6 = puVar8;
          uVar2 = uVar1;
        }
      }
      uVar10 = uVar2;
      *puVar9 = *puVar6;
      puVar9[1] = puVar6[1];
      puVar9[2] = puVar6[2];
      puVar9[3] = puVar6[3];
      puVar9 = puVar6;
    } while ((long)uVar10 <= (long)(uVar15 - 2 >> 1));
    if (puVar6 == param_2 + -4) {
      *puVar6 = uVar23;
      puVar6[1] = uVar22;
      puVar6[2] = uVar21;
      puVar6[3] = uVar20;
    }
    else {
      *puVar6 = param_2[-4];
      puVar6[1] = param_2[-3];
      puVar6[2] = param_2[-2];
      puVar6[3] = param_2[-1];
      param_2[-4] = uVar23;
      param_2[-3] = uVar22;
      param_2[-2] = uVar21;
      param_2[-1] = uVar20;
      lVar14 = (long)puVar6 + (0x20 - (long)param_1) >> 5;
      if (1 < lVar14) {
        uVar10 = lVar14 - 2U >> 1;
        puVar9 = param_1 + uVar10 * 4;
        puVar8 = puVar9;
        FUN_109183ccc(puVar9,puVar6);
        if ((((uint)puVar8 ^ 0xffffffff) & 0xff) == 0) {
          uVar20 = *puVar6;
          uVar21 = puVar6[1];
          uVar22 = puVar6[2];
          uVar23 = puVar6[3];
          uStack_a0 = uVar20;
          uStack_98 = uVar21;
          uStack_90 = uVar22;
          uStack_88 = uVar23;
          do {
            puVar8 = puVar9;
            *puVar6 = *puVar8;
            puVar6[1] = puVar8[1];
            puVar6[2] = puVar8[2];
            puVar6[3] = puVar8[3];
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1 >> 1;
            puVar9 = param_1 + uVar10 * 4;
            puVar7 = puVar9;
            FUN_109183ccc(puVar9,&uStack_a0);
            puVar6 = puVar8;
          } while ((((uint)puVar7 ^ 0xffffffff) & 0xff) == 0);
          *puVar8 = uVar20;
          puVar8[1] = uVar21;
          puVar8[2] = uVar22;
          puVar8[3] = uVar23;
        }
      }
    }
    bVar3 = (long)uVar15 < 3;
    param_2 = param_2 + -4;
    uVar15 = uVar15 - 1;
    if (bVar3) {
      return;
    }
  } while( true );
code_r0x000109183000:
  if (((ulong)puVar6 & 1) == 0) {
LAB_109183004:
    FUN_109182d7c(param_1,puVar16,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_109182dcc;
}



/* Entry: 109183684; end: 109183acf;  */

void FUN_109183684(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = param_2;
  FUN_109183ccc(param_2,param_1);
  puVar2 = param_3;
  FUN_109183ccc(param_3,param_2);
  if ((((uint)puVar1 ^ 0xffffffff) & 0xff) == 0) {
    uVar3 = *param_1;
    if ((((uint)puVar2 ^ 0xffffffff) & 0xff) == 0) {
      *param_1 = *param_3;
      *param_3 = uVar3;
      uVar3 = param_1[3];
      uVar5 = param_1[2];
      uVar4 = param_1[1];
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
    }
    else {
      *param_1 = *param_2;
      *param_2 = uVar3;
      uVar3 = param_1[3];
      uVar5 = param_1[2];
      uVar4 = param_1[1];
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      param_1[3] = param_2[3];
      param_2[2] = uVar5;
      param_2[1] = uVar4;
      param_2[3] = uVar3;
      puVar1 = param_3;
      FUN_109183ccc(param_3,param_2);
      if ((((uint)puVar1 ^ 0xffffffff) & 0xff) != 0) {
        return;
      }
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      uVar3 = param_2[3];
      uVar5 = param_2[2];
      uVar4 = param_2[1];
      param_2[1] = param_3[1];
      param_2[2] = param_3[2];
      param_2[3] = param_3[3];
    }
    param_3[2] = uVar5;
    param_3[1] = uVar4;
    param_3[3] = uVar3;
  }
  else if ((((uint)puVar2 ^ 0xffffffff) & 0xff) == 0) {
    uVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar3;
    uVar3 = param_2[3];
    uVar5 = param_2[2];
    uVar4 = param_2[1];
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_3[2] = uVar5;
    param_3[1] = uVar4;
    param_3[3] = uVar3;
    puVar1 = param_2;
    FUN_109183ccc(param_2,param_1);
    if ((((uint)puVar1 ^ 0xffffffff) & 0xff) == 0) {
      uVar3 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar3;
      uVar3 = param_1[3];
      uVar5 = param_1[2];
      uVar4 = param_1[1];
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      param_1[3] = param_2[3];
      param_2[2] = uVar5;
      param_2[1] = uVar4;
      param_2[3] = uVar3;
    }
  }
  return;
}



/* Entry: 109183ad0; end: 109183ccb;  */

bool FUN_109183ad0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar4 = (long)param_2 - (long)param_1 >> 5;
  if ((long)uVar4 < 3) {
    if (uVar4 < 2) {
      return true;
    }
    if (uVar4 == 2) {
      puVar3 = param_2 + -4;
      FUN_109183ccc(puVar3,param_1);
      if ((((uint)puVar3 ^ 0xffffffff) & 0xff) != 0) {
        return true;
      }
      uVar10 = *param_1;
      *param_1 = param_2[-4];
      param_2[-4] = uVar10;
      uVar10 = param_1[3];
      uVar12 = param_1[2];
      uVar11 = param_1[1];
      param_1[1] = param_2[-3];
      param_1[2] = param_2[-2];
      param_1[3] = param_2[-1];
      param_2[-2] = uVar12;
      param_2[-3] = uVar11;
      param_2[-1] = uVar10;
      return true;
    }
  }
  else {
    if (uVar4 == 3) {
      FUN_109183684(param_1,param_1 + 4,param_2 + -4);
      return true;
    }
    if (uVar4 == 4) {
      func_0x000109183830(param_1,param_1 + 4,param_1 + 8,param_2 + -4);
      return true;
    }
    if (uVar4 == 5) {
      func_0x000109183958(param_1,param_1 + 4,param_1 + 8,param_1 + 0xc,param_2 + -4);
      return true;
    }
  }
  FUN_109183684(param_1,param_1 + 4,param_1 + 8);
  if (param_1 + 0xc != param_2) {
    lVar8 = 0;
    iVar9 = 0;
    puVar3 = param_1 + 0xc;
    puVar6 = param_1 + 8;
    do {
      puVar5 = puVar3;
      puVar3 = puVar5;
      FUN_109183ccc(puVar5,puVar6);
      if ((((uint)puVar3 ^ 0xffffffff) & 0xff) == 0) {
        uVar10 = *puVar5;
        uVar11 = puVar5[1];
        uVar12 = puVar5[2];
        uVar13 = puVar5[3];
        lVar1 = lVar8;
        uStack_90 = uVar10;
        uStack_88 = uVar11;
        uStack_80 = uVar12;
        uStack_78 = uVar13;
        do {
          lVar7 = lVar1;
          *(undefined8 *)((long)param_1 + lVar7 + 0x60) =
               *(undefined8 *)((long)param_1 + lVar7 + 0x40);
          *(undefined8 *)((long)param_1 + lVar7 + 0x70) =
               *(undefined8 *)((long)param_1 + lVar7 + 0x50);
          *(undefined8 *)((long)param_1 + lVar7 + 0x68) =
               *(undefined8 *)((long)param_1 + lVar7 + 0x48);
          *(undefined8 *)((long)param_1 + lVar7 + 0x78) =
               *(undefined8 *)((long)param_1 + lVar7 + 0x58);
          puVar3 = param_1;
          if (lVar7 == -0x40) goto LAB_109183c54;
          uVar2 = (uint)&uStack_90;
          FUN_109183ccc(&uStack_90,(long)param_1 + lVar7 + 0x20);
          lVar1 = lVar7 + -0x20;
        } while (((uVar2 ^ 0xffffffff) & 0xff) == 0);
        puVar3 = (undefined8 *)((long)param_1 + lVar7 + 0x40);
LAB_109183c54:
        *puVar3 = uVar10;
        puVar3[1] = uVar11;
        puVar3[2] = uVar12;
        puVar3[3] = uVar13;
        iVar9 = iVar9 + 1;
        if (iVar9 == 8) {
          return puVar5 + 4 == param_2;
        }
      }
      lVar8 = lVar8 + 0x20;
      puVar3 = puVar5 + 4;
      puVar6 = puVar5;
    } while (puVar5 + 4 != param_2);
  }
  return true;
}



/* Entry: 109183ccc; end: 109183d4f;  */

uint FUN_109183ccc(double *param_1,double *param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *param_1;
  dVar3 = *param_2;
  uVar1 = 0;
  if (dVar2 != dVar3) {
    uVar1 = 0xffffff81;
  }
  if (dVar3 < dVar2) {
    uVar1 = 1;
  }
  if (dVar2 < dVar3) {
    uVar1 = 0xffffffff;
  }
  if (uVar1 != 0) {
    return uVar1;
  }
  if (param_2[1] <= param_1[1]) {
    if (param_1[1] <= param_2[1]) {
      if (param_1[2] < param_2[2]) goto LAB_109183cfc;
      if (param_1[2] <= param_2[2]) {
        if (param_1[3] < param_2[3]) {
          return 0xff;
        }
        return (uint)(param_2[3] < param_1[3]);
      }
    }
    uVar1 = 1;
  }
  else {
LAB_109183cfc:
    uVar1 = 0xff;
  }
  return uVar1;
}



/* Entry: 109183d50; end: 109183daf;  */

undefined8 FUN_109183d50(long *param_1,undefined8 param_2)

{
  undefined1 auStack_20 [8];
  undefined8 uStack_18;
  
  (**(code **)(*param_1 + 0x28))(param_1,param_2,&uStack_18,auStack_20);
  return uStack_18;
}



/* Entry: 109183db0; end: 109183e17;  */

undefined8 * FUN_109183db0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110adf010;
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110adee70;
  FUN_10917c57c(param_1 + 1,param_1[2]);
  return param_1;
}



/* Entry: 109183e18; end: 109183e2b;  */

void FUN_109183e18(void)

{
  FUN_109183db0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109183e2c; end: 109183eb7;  */

void FUN_109183e2c(long param_1,int param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  lVar2 = (long)*(int *)(*(long *)(param_1 + 0x30) + (long)param_2 * 4);
  uVar1 = param_2 - *(int *)(*(long *)(param_1 + 0x48) + lVar2 * 4);
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + lVar2 * 8);
  if ((uint)*(byte *)(param_1 + 0x70) == (*(uint *)(lVar2 + 0x4c) & 1)) {
    iVar4 = uVar1 + 1;
    iVar3 = *(int *)(lVar2 + 8);
    uVar5 = uVar1;
  }
  else {
    iVar3 = *(int *)(lVar2 + 8);
    uVar5 = iVar3 + ~uVar1;
    iVar4 = (iVar3 * 2 - uVar1) + -2;
  }
  if (iVar3 <= (int)uVar5) {
    uVar5 = uVar5 - iVar3;
  }
  *param_3 = *(long *)(lVar2 + 0x10) + (long)(int)uVar5 * 0x18;
  if (iVar3 <= iVar4) {
    iVar4 = iVar4 - iVar3;
  }
  *param_4 = *(long *)(lVar2 + 0x10) + (long)iVar4 * 0x18;
  return;
}



/* Entry: 109183eb8; end: 109184037;  */

long * FUN_109183eb8(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar10 = param_1[1] - *param_1;
  uVar7 = (lVar10 >> 3) * -0x5555555555555555 + 1;
  if (uVar7 < 0xaaaaaaaaaaaaaab) {
    plVar9 = param_1 + 2;
    lVar6 = *plVar9 - *param_1 >> 3;
    uVar8 = lVar6 * 0x5555555555555556;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar8 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_38 = plVar9;
    if (uVar8 == 0) {
      plStack_58 = (long *)0x0;
    }
    else {
      FUN_109177ea0();
      plStack_58 = plVar9;
    }
    puStack_50 = (undefined8 *)((long)plStack_58 + lVar10);
    plStack_40 = plStack_58 + uVar8 * 3;
    *puStack_50 = *param_2;
    puStack_50[1] = param_2[1];
    puStack_50[2] = param_2[2];
    puStack_48 = puStack_50 + 3;
    FUN_109184038(param_1,&plStack_58);
    plVar9 = (long *)param_1[1];
    if (puStack_50 != puStack_48) {
      puStack_48 = puStack_48 +
                   ((ulong)((long)puStack_48 + (-0x18 - (long)puStack_50)) / 0x18) * -3 + -3;
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar9;
  }
  FUN_109177e8c();
  if (puStack_50 != puStack_48) {
    puStack_48 = (undefined8 *)
                 ((long)puStack_48 +
                  ((((long)puStack_48 - (long)puStack_50) - 0x18U) / 0x18) * -0x18 + -0x18);
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  puVar4 = (undefined8 *)*param_1;
  puVar5 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)((long)puVar4 + (param_2[1] - (long)puVar5));
  puVar2 = puVar3;
  for (puVar1 = puVar4; puVar5 != puVar1; puVar1 = puVar1 + 3) {
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2 = puVar2 + 3;
  }
  param_2[1] = puVar3;
  lVar10 = *param_1;
  *param_1 = (long)puVar3;
  param_1[1] = (long)puVar4;
  param_2[1] = lVar10;
  lVar10 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar10;
  lVar10 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar10;
  *param_2 = param_2[1];
  return param_1;
}



/* Entry: 109184038; end: 1091840bb;  */

void FUN_109184038(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar4 = (undefined8 *)*param_1;
  puVar5 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)((long)puVar4 + (param_2[1] - (long)puVar5));
  puVar2 = puVar3;
  for (puVar1 = puVar4; puVar5 != puVar1; puVar1 = puVar1 + 3) {
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2 = puVar2 + 3;
  }
  param_2[1] = puVar3;
  lVar6 = *param_1;
  *param_1 = (long)puVar3;
  param_1[1] = (long)puVar4;
  param_2[1] = lVar6;
  lVar6 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar6;
  lVar6 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar6;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1091840bc; end: 109184103;  */

long * FUN_1091840bc(long *param_1)

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



/* Entry: 109184104; end: 10918433f;  */

undefined8 FUN_109184104(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *unaff_x24;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 uStack_51;
  
  puVar7 = &uStack_51;
  FUN_10917845c();
  puVar8 = &uStack_51;
  FUN_10917845c(puVar8,param_2 + 0x18);
  puVar7 = puVar7 + (long)puVar8 * 2;
  puVar8 = (undefined1 *)param_1[1];
  if (puVar8 != (undefined1 *)0x0) {
    puVar9 = puVar8 + -1;
    if (((ulong)puVar8 & (ulong)puVar9) == 0) {
      unaff_x24 = (undefined1 *)((ulong)puVar9 & (ulong)puVar7);
    }
    else {
      unaff_x24 = puVar7;
      if (puVar8 <= puVar7) {
        uVar3 = 0;
        if (puVar8 != (undefined1 *)0x0) {
          uVar3 = (ulong)puVar7 / (ulong)puVar8;
        }
        unaff_x24 = puVar7 + -(uVar3 * (long)puVar8);
      }
    }
    plVar1 = *(long **)(*param_1 + (long)unaff_x24 * 8);
    if (plVar1 != (long *)0x0) {
      for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        puVar2 = (undefined1 *)plVar1[1];
        if (puVar2 == puVar7) {
          uVar3 = (ulong)(plVar1 + 2);
          FUN_109184340(uVar3,param_2);
          if ((uVar3 & 1) != 0) {
            return 0;
          }
        }
        else {
          if (((ulong)puVar8 & (ulong)puVar9) == 0) {
            puVar2 = (undefined1 *)((ulong)puVar2 & (ulong)puVar9);
          }
          else if (puVar8 <= puVar2) {
            uVar3 = 0;
            if (puVar8 != (undefined1 *)0x0) {
              uVar3 = (ulong)puVar2 / (ulong)puVar8;
            }
            puVar2 = puVar2 + -(uVar3 * (long)puVar8);
          }
          if (puVar2 != unaff_x24) break;
        }
      }
    }
  }
  plVar1 = (long *)0x48;
  __Znwm();
  *plVar1 = 0;
  plVar1[1] = (long)puVar7;
  lVar4 = *param_3;
  lVar11 = param_3[3];
  lVar10 = param_3[2];
  plVar1[3] = param_3[1];
  plVar1[2] = lVar4;
  plVar1[5] = lVar11;
  plVar1[4] = lVar10;
  lVar4 = param_3[4];
  plVar1[7] = param_3[5];
  plVar1[6] = lVar4;
  plVar1[8] = param_3[6];
  if ((puVar8 == (undefined1 *)0x0) ||
     (*(float *)(param_1 + 4) * (float)puVar8 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if ((undefined1 *)0x2 < puVar8) {
      uVar3 = (ulong)(((ulong)puVar8 & (ulong)(puVar8 + -1)) != 0);
    }
    uVar3 = uVar3 | (long)puVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar5) {
      uVar3 = uVar5;
    }
    FUN_1091843ac(param_1,uVar3);
    puVar8 = (undefined1 *)param_1[1];
    if (((ulong)puVar8 & (ulong)(puVar8 + -1)) == 0) {
      unaff_x24 = (undefined1 *)((ulong)(puVar8 + -1) & (ulong)puVar7);
    }
    else {
      unaff_x24 = puVar7;
      if (puVar8 <= puVar7) {
        uVar3 = 0;
        if (puVar8 != (undefined1 *)0x0) {
          uVar3 = (ulong)puVar7 / (ulong)puVar8;
        }
        unaff_x24 = puVar7 + -(uVar3 * (long)puVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x24 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar1 = *plVar6;
    *plVar6 = (long)plVar1;
    *(long **)(lVar4 + (long)unaff_x24 * 8) = plVar6;
    if (*plVar1 != 0) {
      puVar7 = *(undefined1 **)(*plVar1 + 8);
      if (((ulong)puVar8 & (ulong)(puVar8 + -1)) == 0) {
        puVar7 = (undefined1 *)((ulong)puVar7 & (ulong)(puVar8 + -1));
      }
      else if (puVar8 <= puVar7) {
        uVar3 = 0;
        if (puVar8 != (undefined1 *)0x0) {
          uVar3 = (ulong)puVar7 / (ulong)puVar8;
        }
        puVar7 = puVar7 + -(uVar3 * (long)puVar8);
      }
      *(long **)(lVar4 + (long)puVar7 * 8) = plVar1;
    }
  }
  else {
    *plVar1 = *plVar6;
    *plVar6 = (long)plVar1;
  }
  param_1[3] = param_1[3] + 1;
  return 1;
}



/* Entry: 109184340; end: 1091843ab;  */

bool FUN_109184340(double *param_1,double *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     ((param_1[3] == param_2[3] && (param_1[4] == param_2[4])))) {
    return param_1[5] == param_2[5];
  }
  return false;
}



/* Entry: 1091843ac; end: 10918456f;  */

long * FUN_1091843ac(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar10 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar10 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return plVar10;
    }
    plVar10 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar10) {
      plVar10 = (long *)(1L << (-LZCOUNT((long)plVar10 + -1) & 0x3fU));
    }
    if (param_2 <= plVar10) {
      param_2 = plVar10;
    }
    if (plVar9 <= param_2) {
      return plVar10;
    }
    if (param_2 == (long *)0x0) {
      plVar10 = (long *)*param_1;
      *param_1 = 0;
      if (plVar10 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return plVar10;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar10 = (long *)((long)param_2 << 3);
    __Znwm();
    lVar2 = *param_1;
    *param_1 = (long)plVar10;
    if (lVar2 != 0) {
      __ZdlPv();
      plVar10 = (long *)*param_1;
    }
    param_1[1] = (long)param_2;
    plVar9 = plVar10;
    _bzero(plVar10,(long *)((long)param_2 << 3));
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar5 = (long *)plVar4[1];
      uVar3 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar3) == 0) {
        plVar5 = (long *)((ulong)plVar5 & uVar3);
      }
      else if (param_2 <= plVar5) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)param_2;
        }
        plVar5 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      plVar10[(long)plVar5] = (long)(param_1 + 2);
      plVar6 = (long *)*plVar4;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar3) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar3);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar5) {
          if (plVar10[(long)plVar8] == 0) {
            plVar10[(long)plVar8] = (long)plVar4;
            plVar5 = plVar8;
          }
          else {
            *plVar4 = *plVar6;
            *plVar6 = *(undefined8 *)plVar10[(long)plVar8];
            *(long **)plVar10[(long)plVar8] = plVar6;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return plVar9;
  }
  func_0x000104bd35f4();
  plVar9 = plVar10 + 1;
  plVar5 = (long *)*plVar9;
  do {
    plVar6 = plVar9;
    if (plVar5 == (long *)0x0) {
LAB_1091845d4:
      plVar4 = (long *)0x40;
      __Znwm();
      plVar4[4] = *param_3;
      plVar4[5] = 0;
      plVar4[6] = 0;
      plVar4[7] = 0;
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = (long)plVar9;
      *plVar6 = (long)plVar4;
      if (*(long *)*plVar10 != 0) {
        *plVar10 = *(long *)*plVar10;
      }
      func_0x000107c27be4(plVar10[1],plVar4);
      plVar10[2] = plVar10[2] + 1;
      return plVar4;
    }
    while (plVar9 = plVar5, (long *)plVar9[4] <= plVar4) {
      if (plVar4 <= (long *)plVar9[4]) {
        return plVar9;
      }
      plVar5 = (long *)plVar9[1];
      if ((long *)plVar9[1] == (long *)0x0) {
        plVar6 = plVar9 + 1;
        goto LAB_1091845d4;
      }
    }
    plVar5 = (long *)*plVar9;
  } while( true );
}



/* Entry: 109184570; end: 10918463b;  */

long * FUN_109184570(long *param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = param_1 + 1;
  plVar1 = (long *)*plVar2;
  do {
    plVar3 = plVar2;
    if (plVar1 == (long *)0x0) {
LAB_1091845d4:
      plVar1 = (long *)0x40;
      __Znwm();
      plVar1[4] = *param_3;
      plVar1[5] = 0;
      plVar1[6] = 0;
      plVar1[7] = 0;
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1[2] = (long)plVar2;
      *plVar3 = (long)plVar1;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
      }
      func_0x000107c27be4(param_1[1],plVar1);
      param_1[2] = param_1[2] + 1;
      return plVar1;
    }
    while (plVar2 = plVar1, (ulong)plVar2[4] <= param_2) {
      if (param_2 <= (ulong)plVar2[4]) {
        return plVar2;
      }
      plVar1 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) {
        plVar3 = plVar2 + 1;
        goto LAB_1091845d4;
      }
    }
    plVar1 = (long *)*plVar2;
  } while( true );
}



/* Entry: 10918463c; end: 10918479b;  */

void FUN_10918463c(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10918463c(*param_1);
    FUN_10918463c(param_1[1]);
    if (param_1[5] != 0) {
      param_1[6] = param_1[5];
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10918479c; end: 1091848d7;  */

undefined8 FUN_10918479c(char *param_1,double *param_2,double *param_3)

{
  char *pcVar1;
  long lVar2;
  undefined1 uStack_39;
  double *pdStack_38;
  
  if (((*param_2 != *param_3) || (param_2[1] != param_3[1])) || (param_2[2] != param_3[2])) {
    if ((param_1[1] != '\x01') ||
       (pcVar1 = param_1, func_0x000109184758(param_1,param_3,param_2), (int)pcVar1 == 0)) {
      lVar2 = *(long *)(param_1 + 0x20);
      FUN_1091874bc(lVar2,param_2);
      if (lVar2 == 0) {
        FUN_109182cec(param_1 + 0x28,param_2);
      }
      lVar2 = *(long *)(param_1 + 0x20);
      pdStack_38 = param_2;
      FUN_10918769c(lVar2,param_2,&UNK_10dd5b8f9,&pdStack_38,&uStack_39);
      FUN_109187ad4(lVar2 + 0x28,param_3);
      if (*param_1 == '\x01') {
        lVar2 = *(long *)(param_1 + 0x20);
        FUN_1091874bc(lVar2,param_3);
        if (lVar2 == 0) {
          FUN_109182cec(param_1 + 0x28,param_3);
        }
        lVar2 = *(long *)(param_1 + 0x20);
        pdStack_38 = param_3;
        FUN_10918769c(lVar2,param_3,&UNK_10dd5b8f9,&pdStack_38,&uStack_39);
        FUN_109187ad4(lVar2 + 0x28,param_2);
      }
      return 1;
    }
    FUN_1091848d8(param_1,param_3,param_2);
  }
  return 0;
}



/* Entry: 1091848d8; end: 109184bdb;  */

void FUN_1091848d8(char *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uStack_48 = param_2;
  FUN_10918769c(lVar1,param_2,&UNK_10dd5b8f9,&uStack_48,&uStack_49);
  lVar2 = lVar1 + 0x28;
  FUN_109187bdc(lVar2,param_3);
  FUN_109187cc8(lVar1 + 0x28,lVar2);
  __ZdlPv(lVar2);
  if (*(long *)(lVar1 + 0x38) == 0) {
    func_0x000109187d38(*(undefined8 *)(param_1 + 0x20),param_2);
  }
  if (*param_1 == '\x01') {
    lVar1 = *(long *)(param_1 + 0x20);
    uStack_48 = param_3;
    FUN_10918769c(lVar1,param_3,&UNK_10dd5b8f9,&uStack_48,&uStack_49);
    lVar2 = lVar1 + 0x28;
    FUN_109187bdc(lVar2,param_2);
    FUN_109187cc8(lVar1 + 0x28,lVar2);
    __ZdlPv(lVar2);
    if (*(long *)(lVar1 + 0x38) == 0) {
      func_0x000109187d38(*(undefined8 *)(param_1 + 0x20),param_3);
    }
  }
  return;
}



/* Entry: 109184bdc; end: 109185367;  */

long * FUN_109184bdc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  long **pplVar4;
  undefined8 *puVar5;
  bool bVar6;
  long lVar7;
  double *pdVar8;
  bool bVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long **pplVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long **pplVar19;
  double *pdVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  long *plVar24;
  undefined8 uVar25;
  double dVar26;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long lStack_b8;
  float fStack_b0;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  
  puStack_a0 = (undefined8 *)0x0;
  puStack_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  plStack_c8 = (long *)0x0;
  lStack_d0 = 0;
  lStack_b8 = 0;
  plStack_c0 = (long *)0x0;
  fStack_b0 = 1.0;
  FUN_109182cec(&puStack_a0);
  FUN_109182cec(&puStack_a0,param_3);
  plVar24 = &lStack_d0;
  FUN_109187ee4(plVar24,param_3,param_3);
  *(undefined4 *)(plVar24 + 5) = 1;
  if (1 < (ulong)(((long)puStack_98 - (long)puStack_a0 >> 3) * -0x5555555555555555)) {
    do {
      puVar5 = puStack_98;
      puVar11 = puStack_98 + -3;
      dStack_e8 = 0.0;
      dStack_e0 = 0.0;
      dStack_d8 = 0.0;
      lVar7 = param_1[4];
      FUN_1091874bc(lVar7,puVar11);
      pdVar20 = (double *)(puVar5 + -6);
      if (lVar7 == 0) {
LAB_109184da8:
        dStack_118 = (double)puVar5[-5];
        dStack_120 = (double)puVar5[-6];
        lStack_108 = puVar5[-3];
        dStack_110 = (double)puVar5[-4];
        uStack_f8 = puVar5[-1];
        uStack_100 = puVar5[-2];
        func_0x000109184a64(param_4,&dStack_120);
        func_0x0001091848d8(param_1,pdVar20,puVar11);
        lVar7 = lStack_b8;
        plVar24 = plStack_c8;
        if ((plStack_c8 != (long *)0x0) && (lStack_b8 != 0)) {
          plVar16 = &lStack_b8;
          FUN_10917845c(plVar16,puVar11);
          uVar10 = (long)plVar24 - 1;
          if (((ulong)plVar24 & uVar10) == 0) {
            plVar18 = (long *)((ulong)plVar16 & uVar10);
          }
          else {
            plVar18 = plVar16;
            if (plVar24 <= plVar16) {
              uVar22 = 0;
              uVar23 = (uint)plVar24;
              if (uVar23 != 0) {
                uVar22 = (uint)plVar16 / uVar23;
              }
              plVar18 = (long *)(ulong)((uint)plVar16 - uVar22 * uVar23);
            }
          }
          puVar11 = *(undefined8 **)(lStack_d0 + (long)plVar18 * 8);
          if ((puVar11 != (undefined8 *)0x0) &&
             (pplVar12 = (long **)*puVar11, pplVar12 != (long **)0x0)) {
LAB_109184e3c:
            plVar14 = pplVar12[1];
            if (plVar14 == plVar16) {
              if ((((double)pplVar12[2] != (double)puVar5[-3]) ||
                  ((double)pplVar12[3] != (double)puVar5[-2])) ||
                 ((double)pplVar12[4] != (double)puVar5[-1])) goto LAB_109184e98;
              if (((ulong)plVar24 & uVar10) == 0) {
                plVar16 = (long *)((ulong)plVar16 & uVar10);
              }
              else if (plVar24 <= plVar16) {
                uVar15 = 0;
                if (plVar24 != (long *)0x0) {
                  uVar15 = (ulong)plVar16 / (ulong)plVar24;
                }
                plVar16 = (long *)((long)plVar16 - uVar15 * (long)plVar24);
              }
              plVar18 = *pplVar12;
              pplVar4 = *(long ***)(lStack_d0 + (long)plVar16 * 8);
              do {
                pplVar19 = pplVar4;
                pplVar4 = (long **)*pplVar19;
              } while ((long **)*pplVar19 != pplVar12);
              if (pplVar19 == &plStack_c0) {
LAB_1091850d8:
                if (plVar18 == (long *)0x0) {
LAB_10918510c:
                  *(undefined8 *)(lStack_d0 + (long)plVar16 * 8) = 0;
                  plVar18 = *pplVar12;
                  goto LAB_109185114;
                }
                plVar14 = (long *)plVar18[1];
                if (((ulong)plVar24 & uVar10) == 0) {
                  plVar17 = (long *)((ulong)plVar14 & uVar10);
                }
                else {
                  plVar17 = plVar14;
                  if (plVar24 <= plVar14) {
                    uVar15 = 0;
                    if (plVar24 != (long *)0x0) {
                      uVar15 = (ulong)plVar14 / (ulong)plVar24;
                    }
                    plVar17 = (long *)((long)plVar14 - uVar15 * (long)plVar24);
                  }
                }
                if (plVar17 != plVar16) goto LAB_10918510c;
LAB_10918511c:
                if (((ulong)plVar24 & uVar10) == 0) {
                  plVar14 = (long *)((ulong)plVar14 & uVar10);
                }
                else if (plVar24 <= plVar14) {
                  uVar10 = 0;
                  if (plVar24 != (long *)0x0) {
                    uVar10 = (ulong)plVar14 / (ulong)plVar24;
                  }
                  plVar14 = (long *)((long)plVar14 - uVar10 * (long)plVar24);
                }
                if (plVar14 != plVar16) {
                  *(long ***)(lStack_d0 + (long)plVar14 * 8) = pplVar19;
                  plVar18 = *pplVar12;
                }
              }
              else {
                plVar14 = pplVar19[1];
                if (((ulong)plVar24 & uVar10) == 0) {
                  plVar14 = (long *)((ulong)plVar14 & uVar10);
                }
                else if (plVar24 <= plVar14) {
                  uVar15 = 0;
                  if (plVar24 != (long *)0x0) {
                    uVar15 = (ulong)plVar14 / (ulong)plVar24;
                  }
                  plVar14 = (long *)((long)plVar14 - uVar15 * (long)plVar24);
                }
                if (plVar14 != plVar16) goto LAB_1091850d8;
LAB_109185114:
                if (plVar18 != (long *)0x0) {
                  plVar14 = (long *)plVar18[1];
                  goto LAB_10918511c;
                }
              }
              *pplVar19 = plVar18;
              lStack_b8 = lVar7 + -1;
              __ZdlPv(pplVar12);
            }
            else {
              if (((ulong)plVar24 & uVar10) == 0) {
                plVar14 = (long *)((ulong)plVar14 & uVar10);
              }
              else if (plVar24 <= plVar14) {
                uVar15 = 0;
                if (plVar24 != (long *)0x0) {
                  uVar15 = (ulong)plVar14 / (ulong)plVar24;
                }
                plVar14 = (long *)((long)plVar14 - uVar15 * (long)plVar24);
              }
              if (plVar14 == plVar18) goto LAB_109184e98;
            }
          }
        }
LAB_109184ea0:
        puStack_98 = puStack_98 + -3;
      }
      else {
        plVar24 = *(long **)(lVar7 + 0x28);
        if (plVar24 == (long *)(lVar7 + 0x30)) goto LAB_109184da8;
        bVar9 = false;
        do {
          dVar26 = (double)plVar24[4];
          if (((dVar26 != *pdVar20) || ((double)plVar24[5] != (double)puVar5[-5])) ||
             ((double)plVar24[6] != (double)puVar5[-4])) {
            if ((!bVar9) ||
               (pdVar8 = pdVar20, FUN_109178fdc(pdVar20,&dStack_e8,plVar24 + 4,puVar11),
               (int)pdVar8 != 0)) {
              dStack_d8 = (double)plVar24[6];
              dStack_e0 = (double)plVar24[5];
              dStack_e8 = dVar26;
            }
            bVar9 = true;
          }
          puVar1 = puStack_a0;
          dVar3 = dStack_d8;
          dVar2 = dStack_e0;
          dVar26 = dStack_e8;
          plVar16 = (long *)plVar24[1];
          plVar18 = plVar24;
          if ((long *)plVar24[1] == (long *)0x0) {
            do {
              plVar24 = (long *)plVar18[2];
              bVar6 = plVar18 != (long *)*plVar24;
              plVar18 = plVar24;
            } while (bVar6);
          }
          else {
            do {
              plVar24 = plVar16;
              plVar16 = (long *)*plVar24;
            } while ((long *)*plVar24 != (long *)0x0);
          }
        } while (plVar24 != (long *)(lVar7 + 0x30));
        if (!bVar9) goto LAB_109184da8;
        lVar7 = ((long)puStack_98 - (long)puStack_a0 >> 3) * -0x5555555555555555;
        dStack_120 = dStack_e8;
        dStack_118 = dStack_e0;
        dStack_110 = dStack_d8;
        plVar16 = &lStack_b8;
        lStack_108 = lVar7;
        FUN_10917845c(plVar16,&dStack_120);
        plVar18 = plStack_c8;
        if (plStack_c8 != (long *)0x0) {
          uVar10 = (long)plStack_c8 - 1;
          uVar22 = (uint)plStack_c8;
          if (((ulong)plStack_c8 & uVar10) == 0) {
            plVar24 = (long *)((ulong)(uVar22 - 1) & (ulong)plVar16);
          }
          else {
            plVar24 = plVar16;
            if (plStack_c8 <= plVar16) {
              uVar23 = 0;
              if (uVar22 != 0) {
                uVar23 = (uint)plVar16 / uVar22;
              }
              plVar24 = (long *)(ulong)((uint)plVar16 - uVar23 * uVar22);
            }
          }
          plVar14 = *(long **)(lStack_d0 + (long)plVar24 * 8);
          if (plVar14 != (long *)0x0) {
            do {
              while( true ) {
                plVar14 = (long *)*plVar14;
                if (plVar14 == (long *)0x0) goto LAB_109184f40;
                plVar17 = (long *)plVar14[1];
                if (plVar17 != plVar16) break;
                if ((((double)plVar14[2] == dVar26) && ((double)plVar14[3] == dVar2)) &&
                   ((double)plVar14[4] == dVar3)) {
                  plVar24 = &lStack_d0;
                  FUN_109187ee4(plVar24,&dStack_e8,&dStack_e8);
                  lVar7 = (long)(int)plVar24[5];
                  puVar5 = puStack_98;
                  if ((int)plVar24[5] != 0) {
                    puVar11 = puVar1 + lVar7 * 3;
                    while (puVar5 = puVar1, puVar11 != puStack_98) {
                      puVar5 = puVar1 + lVar7 * 3;
                      uVar25 = *puVar5;
                      puVar1[1] = puVar5[1];
                      *puVar1 = uVar25;
                      puVar1[2] = puVar5[2];
                      puVar1 = puVar1 + 3;
                      puVar11 = puVar1 + lVar7 * 3;
                    }
                  }
                  puStack_98 = puVar5;
                  plVar24 = (long *)0xa8;
                  __Znwm();
                  FUN_10917d918();
                  if ((*(char *)((long)param_1 + 2) == '\x01') &&
                     (plVar16 = plVar24, FUN_10917dda0(), ((ulong)plVar16 & 1) == 0)) {
                    func_0x0001091849d4(puStack_a0,
                                        (int)((ulong)((long)puStack_98 - (long)puStack_a0) >> 3) *
                                        -0x55555555,param_4);
                    puVar5 = puStack_a0;
                    uVar10 = ((long)puStack_98 - (long)puStack_a0 >> 3) * -0x5555555555555555;
                    if (0 < (int)uVar10) {
                      uVar15 = 0;
                      puVar11 = puStack_a0;
                      uVar21 = uVar10 - 1;
                      do {
                        uVar13 = uVar15;
                        func_0x0001091848d8(param_1,puVar5 + (long)(int)uVar21 * 3,puVar11);
                        uVar15 = uVar13 + 1;
                        puVar11 = puVar11 + 3;
                        uVar21 = uVar13;
                      } while ((uVar10 & 0x7fffffff) != uVar15);
                    }
                    param_1 = (long *)0x0;
                  }
                  else {
                    if (((char)*param_1 != '\x01') ||
                       (plVar16 = plVar24, FUN_10917ede8(), ((ulong)plVar16 & 1) != 0))
                    goto LAB_109185168;
                    FUN_109184bdc(param_1,puStack_a0 + 3,puStack_a0,param_4);
                  }
                  (**(code **)(*plVar24 + 8))(plVar24);
                  plVar24 = param_1;
                  goto LAB_109185168;
                }
              }
              if (((ulong)plStack_c8 & uVar10) == 0) {
                plVar17 = (long *)((ulong)plVar17 & uVar10);
              }
              else if (plStack_c8 <= plVar17) {
                uVar15 = 0;
                if (plStack_c8 != (long *)0x0) {
                  uVar15 = (ulong)plVar17 / (ulong)plStack_c8;
                }
                plVar17 = (long *)((long)plVar17 - uVar15 * (long)plStack_c8);
              }
            } while (plVar17 == plVar24);
          }
        }
LAB_109184f40:
        plVar14 = (long *)0x30;
        __Znwm();
        *plVar14 = 0;
        plVar14[1] = (long)plVar16;
        plVar14[2] = (long)dVar26;
        plVar14[3] = (long)dVar2;
        plVar14[4] = (long)dVar3;
        *(int *)(plVar14 + 5) = (int)lVar7;
        if ((plVar18 == (long *)0x0) || (fStack_b0 * (float)plVar18 < (float)(lStack_b8 + 1))) {
          uVar10 = 1;
          if ((long *)0x2 < plVar18) {
            uVar10 = (ulong)(((ulong)plVar18 & (long)plVar18 - 1U) != 0);
          }
          uVar10 = uVar10 | (long)plVar18 << 1;
          uVar15 = (ulong)((float)(lStack_b8 + 1) / fStack_b0);
          if (uVar10 <= uVar15) {
            uVar10 = uVar15;
          }
          FUN_10918057c(&lStack_d0,uVar10);
          plVar18 = plStack_c8;
          if (((ulong)plStack_c8 & (long)plStack_c8 - 1U) == 0) {
            plVar24 = (long *)((ulong)((int)plStack_c8 - 1) & (ulong)plVar16);
          }
          else {
            plVar24 = plVar16;
            if (plStack_c8 <= plVar16) {
              uVar10 = 0;
              if (plStack_c8 != (long *)0x0) {
                uVar10 = (ulong)plVar16 / (ulong)plStack_c8;
              }
              plVar24 = (long *)((long)plVar16 - uVar10 * (long)plStack_c8);
            }
          }
        }
        plVar16 = *(long **)(lStack_d0 + (long)plVar24 * 8);
        if (plVar16 == (long *)0x0) {
          *plVar14 = (long)plStack_c0;
          *(long ***)(lStack_d0 + (long)plVar24 * 8) = &plStack_c0;
          plStack_c0 = plVar14;
          if (*plVar14 != 0) {
            plVar24 = *(long **)(*plVar14 + 8);
            if (((ulong)plVar18 & (long)plVar18 - 1U) == 0) {
              plVar24 = (long *)((ulong)plVar24 & (long)plVar18 - 1U);
            }
            else if (plVar18 <= plVar24) {
              uVar10 = 0;
              if (plVar18 != (long *)0x0) {
                uVar10 = (ulong)plVar24 / (ulong)plVar18;
              }
              plVar24 = (long *)((long)plVar24 - uVar10 * (long)plVar18);
            }
            *(long **)(lStack_d0 + (long)plVar24 * 8) = plVar14;
          }
        }
        else {
          *plVar14 = *plVar16;
          *plVar16 = (long)plVar14;
        }
        lStack_b8 = lStack_b8 + 1;
        FUN_109182cec(&puStack_a0,&dStack_e8);
      }
    } while (1 < (ulong)(((long)puStack_98 - (long)puStack_a0 >> 3) * -0x5555555555555555));
  }
  plVar24 = (long *)0x0;
LAB_109185168:
  func_0x000109180534(&lStack_d0);
  if (puStack_a0 != (undefined8 *)0x0) {
    puStack_98 = puStack_a0;
    __ZdlPv();
  }
  return plVar24;
LAB_109184e98:
  pplVar12 = (long **)*pplVar12;
  if (pplVar12 == (long **)0x0) goto LAB_109184ea0;
  goto LAB_109184e3c;
}



/* Entry: 109185368; end: 10918539f;  */

long FUN_109185368(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    __ZdlPv();
  }
  FUN_1091873dc(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 1091853a0; end: 109186713;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_1091853a0(undefined8 ******param_1,undefined8 param_2,undefined8 *******param_3)

{
  long *plVar1;
  undefined8 ****ppppuVar2;
  undefined8 ******ppppppuVar3;
  undefined8 ******ppppppuVar4;
  code *pcVar5;
  bool bVar6;
  ulong *puVar7;
  undefined8 *****pppppuVar8;
  ulong uVar9;
  undefined8 *******pppppppuVar10;
  ulong uVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  ulong *puVar20;
  long *plVar21;
  long *plVar22;
  ulong *puVar23;
  undefined8 *******pppppppuVar24;
  int iVar25;
  undefined8 ****ppppuVar26;
  undefined8 ******ppppppuVar27;
  long lVar28;
  uint uVar29;
  undefined8 ****ppppuVar30;
  undefined8 ****ppppuVar31;
  undefined8 ******ppppppuVar32;
  uint uVar33;
  ulong *unaff_x26;
  undefined8 *****pppppuVar34;
  double dVar35;
  undefined8 ******ppppppuVar36;
  undefined8 ******ppppppuVar37;
  double dVar38;
  double dVar39;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  ulong *puStack_1a8;
  long *plStack_1a0;
  ulong uStack_198;
  float fStack_190;
  undefined8 *******pppppppuStack_188;
  undefined8 *******pppppppuStack_180;
  long lStack_178;
  undefined8 *****pppppuStack_170;
  undefined8 *****pppppuStack_168;
  uint uStack_160;
  ulong *puStack_158;
  ulong *puStack_150;
  undefined8 uStack_148;
  undefined8 ******ppppppuStack_140;
  undefined8 ******ppppppuStack_138;
  undefined8 *****pppppuStack_130;
  undefined8 *****pppppuStack_128;
  undefined8 ******ppppppuStack_120;
  undefined8 ******ppppppuStack_118;
  undefined8 ******ppppppuStack_110;
  undefined8 ******ppppppuStack_100;
  undefined8 ******ppppppuStack_f8;
  undefined8 ******ppppppuStack_f0;
  undefined8 ******ppppppuStack_e0;
  undefined8 ******ppppppuStack_d8;
  undefined8 ******ppppppuStack_d0;
  undefined8 ******ppppppuStack_c0;
  undefined8 ******ppppppuStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined8 ******ppppppuStack_a8;
  undefined8 ******ppppppuStack_a0;
  undefined8 ******ppppppuStack_98;
  undefined8 ******appppppuStack_88 [3];
  
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  uStack_1b8 = 0;
  pppppuVar34 = param_1[1];
  if (0.0 < (double)pppppuVar34) {
    pppppuStack_168 = param_1[2];
    pppppppuStack_180 = (undefined8 *******)0x0;
    lStack_178 = 0;
    pppppppuStack_188 = &pppppppuStack_180;
    pppppuStack_170 = pppppuVar34;
    if ((double)pppppuVar34 + (double)pppppuVar34 <= 0.0) {
LAB_109185444:
      uStack_160 = 0x1d;
    }
    else {
      _frexp(0.9428090415820635 / ((double)pppppuVar34 + (double)pppppuVar34),&ppppppuStack_c0);
      if ((int)ppppppuStack_c0 < 2) {
        ppppppuStack_c0._0_4_ = 1;
      }
      if (0x1e < (int)ppppppuStack_c0) {
        ppppppuStack_c0._0_4_ = 0x1f;
      }
      uStack_160 = (int)ppppppuStack_c0 - 1;
      if (0x1d < uStack_160) goto LAB_109185444;
    }
    puStack_150 = (ulong *)0x0;
    uStack_148 = 0;
    puStack_158 = (ulong *)0x0;
    ppppppuStack_c0 = (undefined8 ******)0xffffffffffffffff;
    ppppppuStack_b8 = (undefined8 ******)0x0;
    ppppppuStack_b0 = (undefined8 ******)0x0;
    ppppppuStack_a8 = (undefined8 ******)0x0;
    FUN_109186728(&pppppppuStack_188,&ppppppuStack_c0);
    pppppuVar34 = (undefined8 *****)0x0;
    puStack_1a8 = (ulong *)0x0;
    lStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    fStack_190 = 1.0;
    ppppuVar26 = param_1[4][2];
    ppppppuStack_b8 = (undefined8 ******)0x0;
    ppppppuStack_c0 = (undefined8 ******)0x0;
    ppppppuStack_a8 = (undefined8 ******)0x0;
    ppppppuStack_b0 = (undefined8 ******)0x0;
    ppppppuStack_a0 = (undefined8 ******)CONCAT44(ppppppuStack_a0._4_4_,0x3f800000);
    if (ppppuVar26 != (undefined8 ****)0x0) {
      do {
        FUN_109188168(&ppppppuStack_c0,ppppuVar26 + 2,ppppuVar26 + 2);
        ppppuVar30 = (undefined8 ****)ppppuVar26[5];
        ppppppuVar27 = ppppppuStack_b0;
        while (ppppppuStack_b0 = ppppppuVar27, ppppuVar30 != ppppuVar26 + 6) {
          FUN_109188168(&ppppppuStack_c0,ppppuVar30 + 4,ppppuVar30 + 4);
          ppppuVar2 = (undefined8 ****)ppppuVar30[1];
          ppppuVar31 = ppppuVar30;
          ppppppuVar27 = ppppppuStack_b0;
          if ((undefined8 ****)ppppuVar30[1] == (undefined8 ****)0x0) {
            do {
              ppppuVar30 = (undefined8 ****)ppppuVar31[2];
              bVar6 = ppppuVar31 != (undefined8 ****)*ppppuVar30;
              ppppuVar31 = ppppuVar30;
            } while (bVar6);
          }
          else {
            do {
              ppppuVar30 = ppppuVar2;
              ppppuVar2 = (undefined8 ****)*ppppuVar30;
            } while ((undefined8 ****)*ppppuVar30 != (undefined8 ****)0x0);
          }
        }
        ppppuVar26 = (undefined8 ****)*ppppuVar26;
      } while (ppppuVar26 != (undefined8 ****)0x0);
      if (ppppppuVar27 != (undefined8 ******)0x0) {
        do {
          ppppppuVar32 = ppppppuVar27 + 2;
          FUN_10917aa58();
          ppppppuStack_140 = ppppppuVar32;
          FUN_10917b2d8(&ppppppuStack_140,uStack_160,&puStack_158);
          if (0 < (int)((ulong)((long)puStack_150 - (long)puStack_158) >> 3)) {
            uVar9 = (ulong)((long)puStack_150 - (long)puStack_158) >> 3 & 0x7fffffff;
            do {
              ppppppuStack_140 = (undefined8 ******)puStack_158[uVar9 - 1];
              pppppuStack_130 = ppppppuVar27[3];
              ppppppuStack_138 = (undefined8 ******)ppppppuVar27[2];
              pppppuVar34 = ppppppuVar27[4];
              pppppuStack_128 = pppppuVar34;
              FUN_109186728(&pppppppuStack_188,&ppppppuStack_140);
              bVar6 = 1 < uVar9;
              uVar9 = uVar9 - 1;
            } while (bVar6);
          }
          puStack_150 = puStack_158;
          ppppppuVar27 = (undefined8 ******)*ppppppuVar27;
        } while (ppppppuVar27 != (undefined8 ******)0x0);
        ppppppuStack_140 = (undefined8 ******)0x0;
        ppppppuStack_138 = (undefined8 ******)0x0;
        pppppuStack_130 = (undefined8 *****)0x0;
        ppppppuStack_e0 = (undefined8 ******)0x0;
        ppppppuStack_d8 = (undefined8 ******)0x0;
        ppppppuStack_d0 = (undefined8 ******)0x0;
        if (ppppppuStack_b0 != (undefined8 ******)0x0) {
          ppppppuVar32 = (undefined8 ******)0x0;
          ppppppuVar27 = ppppppuStack_b0;
          do {
            puVar16 = puStack_1a8;
            if (puStack_1a8 != (ulong *)0x0 && uStack_198 != 0) {
              puVar7 = &uStack_198;
              FUN_10917845c(puVar7,ppppppuVar27 + 2);
              uVar9 = (long)puVar16 - 1;
              if (((ulong)puVar16 & uVar9) == 0) {
                puVar15 = (ulong *)((ulong)puVar7 & uVar9);
              }
              else {
                puVar15 = puVar7;
                if (puVar16 <= puVar7) {
                  uVar33 = 0;
                  uVar29 = (uint)puVar16;
                  if (uVar29 != 0) {
                    uVar33 = (uint)puVar7 / uVar29;
                  }
                  puVar15 = (ulong *)(ulong)((uint)puVar7 - uVar33 * uVar29);
                }
              }
              plVar18 = *(long **)(lStack_1b0 + (long)puVar15 * 8);
              if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0))
              {
                pppppuVar34 = ppppppuVar27[2];
                do {
                  puVar20 = (ulong *)plVar18[1];
                  if (puVar20 == puVar7) {
                    if ((((double)plVar18[2] == (double)pppppuVar34) &&
                        ((double)plVar18[3] == (double)ppppppuVar27[3])) &&
                       ((double)plVar18[4] == (double)ppppppuVar27[4])) goto LAB_109185d00;
                  }
                  else {
                    if (((ulong)puVar16 & uVar9) == 0) {
                      puVar20 = (ulong *)((ulong)puVar20 & uVar9);
                    }
                    else if (puVar16 <= puVar20) {
                      uVar11 = 0;
                      if (puVar16 != (ulong *)0x0) {
                        uVar11 = (ulong)puVar20 / (ulong)puVar16;
                      }
                      puVar20 = (ulong *)((long)puVar20 - uVar11 * (long)puVar16);
                    }
                    if (puVar20 != puVar15) break;
                  }
                  plVar18 = (long *)*plVar18;
                } while (plVar18 != (long *)0x0);
              }
            }
            FUN_109182cec(&ppppppuStack_140,ppppppuVar27 + 2);
            while (ppppppuVar32 = ppppppuStack_140, ppppppuStack_140 != ppppppuStack_138) {
              ppppppuVar36 = ppppppuStack_138 + -3;
              ppppppuStack_d8 = ppppppuStack_e0;
              ppppppuVar32 = ppppppuVar36;
              FUN_10917aa58();
              uVar9 = 1L << ((ulong)(uStack_160 * -2 + 0x3c) & 0x3f);
              ppppppuVar32 = (undefined8 ******)((ulong)ppppppuVar32 & -uVar9 | uVar9);
              pppppppuVar12 = &pppppppuStack_180;
              for (pppppppuVar24 = pppppppuStack_180; pppppppuVar24 != (undefined8 *******)0x0;
                  pppppppuVar24 = *(undefined8 ********)((long)pppppppuVar24 + lVar28)) {
                lVar28 = 8;
                if (ppppppuVar32 <= pppppppuVar24[4]) {
                  lVar28 = 0;
                  pppppppuVar12 = pppppppuVar24;
                }
              }
              ppppppuVar37 = pppppppuVar12[4];
              while (ppppppuVar37 == ppppppuVar32) {
                FUN_109177f90(ppppppuVar36,pppppppuVar12 + 5);
                if ((double)pppppuVar34 < (double)pppppuStack_170) {
                  FUN_109182cec(&ppppppuStack_e0,pppppppuVar12 + 5);
                }
                pppppppuVar24 = (undefined8 *******)pppppppuVar12[1];
                pppppppuVar13 = pppppppuVar12;
                if ((undefined8 *******)pppppppuVar12[1] == (undefined8 *******)0x0) {
                  do {
                    pppppppuVar12 = (undefined8 *******)pppppppuVar13[2];
                    bVar6 = pppppppuVar13 != (undefined8 *******)*pppppppuVar12;
                    pppppppuVar13 = pppppppuVar12;
                  } while (bVar6);
                }
                else {
                  do {
                    pppppppuVar12 = pppppppuVar24;
                    pppppppuVar24 = (undefined8 *******)*pppppppuVar12;
                  } while ((undefined8 *******)*pppppppuVar12 != (undefined8 *******)0x0);
                }
                ppppppuVar37 = pppppppuVar12[4];
              }
              ppppppuStack_138 = ppppppuStack_138 + -3;
              uVar9 = ((long)ppppppuStack_d8 - (long)ppppppuStack_e0 >> 3) * -0x5555555555555555;
              if (0 < (int)uVar9) {
                uVar9 = uVar9 & 0x7fffffff;
                do {
                  ppppppuVar32 = ppppppuStack_e0 + (uVar9 - 1) * 3;
                  if ((((double)*ppppppuVar32 != (double)ppppppuVar27[2]) ||
                      ((double)ppppppuVar32[1] != (double)ppppppuVar27[3])) ||
                     (pppppuVar34 = ppppppuVar32[2], (double)pppppuVar34 != (double)ppppppuVar27[4])
                     ) {
                    ppppppuVar36 = ppppppuVar32;
                    FUN_10917aa58();
                    ppppppuStack_100 = ppppppuVar36;
                    FUN_10917b2d8(&ppppppuStack_100,uStack_160,&puStack_158);
                    if (0 < (int)((ulong)((long)puStack_150 - (long)puStack_158) >> 3)) {
                      uVar11 = (ulong)((long)puStack_150 - (long)puStack_158) >> 3 & 0x7fffffff;
                      do {
                        pppppppuVar12 = &pppppppuStack_180;
                        if (pppppppuStack_180 != (undefined8 *******)0x0) {
                          pppppppuVar24 = pppppppuStack_180;
                          do {
                            lVar28 = 8;
                            if ((undefined8 ******)puStack_158[uVar11 - 1] <= pppppppuVar24[4]) {
                              lVar28 = 0;
                              pppppppuVar12 = pppppppuVar24;
                            }
                            pppppppuVar24 = *(undefined8 ********)((long)pppppppuVar24 + lVar28);
                          } while (pppppppuVar24 != (undefined8 *******)0x0);
                        }
                        while ((((double)pppppppuVar12[5] != (double)*ppppppuVar32 ||
                                ((double)pppppppuVar12[6] != (double)ppppppuVar32[1])) ||
                               ((double)pppppppuVar12[7] != (double)ppppppuVar32[2]))) {
                          pppppppuVar24 = (undefined8 *******)pppppppuVar12[1];
                          pppppppuVar13 = pppppppuVar12;
                          if ((undefined8 *******)pppppppuVar12[1] == (undefined8 *******)0x0) {
                            do {
                              pppppppuVar12 = (undefined8 *******)pppppppuVar13[2];
                              bVar6 = pppppppuVar13 != (undefined8 *******)*pppppppuVar12;
                              pppppppuVar13 = pppppppuVar12;
                            } while (bVar6);
                          }
                          else {
                            do {
                              pppppppuVar12 = pppppppuVar24;
                              pppppppuVar24 = (undefined8 *******)*pppppppuVar12;
                            } while ((undefined8 *******)*pppppppuVar12 != (undefined8 *******)0x0);
                          }
                        }
                        pppppppuVar24 = (undefined8 *******)pppppppuVar12[1];
                        pppppppuVar13 = pppppppuVar12;
                        if ((undefined8 *******)pppppppuVar12[1] == (undefined8 *******)0x0) {
                          do {
                            pppppppuVar10 = (undefined8 *******)pppppppuVar13[2];
                            bVar6 = pppppppuVar13 != (undefined8 *******)*pppppppuVar10;
                            pppppppuVar13 = pppppppuVar10;
                          } while (bVar6);
                        }
                        else {
                          do {
                            pppppppuVar10 = pppppppuVar24;
                            pppppppuVar24 = (undefined8 *******)*pppppppuVar10;
                          } while ((undefined8 *******)*pppppppuVar10 != (undefined8 *******)0x0);
                        }
                        if (pppppppuStack_188 == pppppppuVar12) {
                          pppppppuStack_188 = pppppppuVar10;
                        }
                        lStack_178 = lStack_178 + -1;
                        func_0x00010530d618(pppppppuStack_180,pppppppuVar12);
                        __ZdlPv(pppppppuVar12);
                        bVar6 = 1 < (long)uVar11;
                        uVar11 = uVar11 - 1;
                      } while (bVar6);
                    }
                    puStack_150 = puStack_158;
                    FUN_109182cec(&ppppppuStack_140,ppppppuVar32);
                    puVar16 = &uStack_198;
                    FUN_10917845c(puVar16,ppppppuVar32);
                    puVar7 = puStack_1a8;
                    if (puStack_1a8 != (ulong *)0x0) {
                      uVar11 = (long)puStack_1a8 - 1;
                      uVar33 = (uint)puStack_1a8;
                      if (((ulong)puStack_1a8 & uVar11) == 0) {
                        unaff_x26 = (ulong *)((ulong)(uVar33 - 1) & (ulong)puVar16);
                      }
                      else {
                        unaff_x26 = puVar16;
                        if (puStack_1a8 <= puVar16) {
                          uVar29 = 0;
                          if (uVar33 != 0) {
                            uVar29 = (uint)puVar16 / uVar33;
                          }
                          unaff_x26 = (ulong *)(ulong)((uint)puVar16 - uVar29 * uVar33);
                        }
                      }
                      puVar14 = *(undefined8 **)(lStack_1b0 + (long)unaff_x26 * 8);
                      if ((puVar14 != (undefined8 *)0x0) &&
                         (plVar18 = (long *)*puVar14, plVar18 != (long *)0x0)) {
                        do {
                          puVar15 = (ulong *)plVar18[1];
                          if (puVar15 == puVar16) {
                            if ((((double)plVar18[2] == (double)*ppppppuVar32) &&
                                ((double)plVar18[3] == (double)ppppppuVar32[1])) &&
                               ((double)plVar18[4] == (double)ppppppuVar32[2])) goto LAB_109185c88;
                          }
                          else {
                            if (((ulong)puStack_1a8 & uVar11) == 0) {
                              puVar15 = (ulong *)((ulong)puVar15 & uVar11);
                            }
                            else if (puStack_1a8 <= puVar15) {
                              uVar19 = 0;
                              if (puStack_1a8 != (ulong *)0x0) {
                                uVar19 = (ulong)puVar15 / (ulong)puStack_1a8;
                              }
                              puVar15 = (ulong *)((long)puVar15 - uVar19 * (long)puStack_1a8);
                            }
                            if (puVar15 != unaff_x26) break;
                          }
                          plVar18 = (long *)*plVar18;
                        } while (plVar18 != (long *)0x0);
                      }
                    }
                    plVar18 = (long *)0x40;
                    __Znwm();
                    *plVar18 = 0;
                    plVar18[1] = (long)puVar16;
                    plVar18[2] = (long)*ppppppuVar32;
                    plVar18[3] = (long)ppppppuVar32[1];
                    plVar18[4] = (long)ppppppuVar32[2];
                    plVar18[6] = 0;
                    plVar18[7] = 0;
                    plVar18[5] = 0;
                    if ((puVar7 == (ulong *)0x0) ||
                       (fStack_190 * (float)puVar7 < (float)(uStack_198 + 1))) {
                      uVar11 = 1;
                      if ((ulong *)0x2 < puVar7) {
                        uVar11 = (ulong)(((ulong)puVar7 & (long)puVar7 - 1U) != 0);
                      }
                      puVar15 = (ulong *)(uVar11 | (long)puVar7 << 1);
                      puVar20 = (ulong *)(long)((float)(uStack_198 + 1) / fStack_190);
                      if (puVar15 <= puVar20) {
                        puVar15 = puVar20;
                      }
                      puVar20 = puVar7;
                      if ((long)puVar15 - 1U == 0) {
                        puVar15 = (ulong *)0x2;
                      }
                      else if (((ulong)puVar15 & (long)puVar15 - 1U) != 0) {
                        __ZNSt3__112__next_primeEm();
                        puVar20 = puStack_1a8;
                      }
                      if (puVar20 < puVar15) {
LAB_109185aa8:
                        if ((ulong)puVar15 >> 0x3d != 0) {
                          func_0x000104bd35f4();
                    /* WARNING: Does not return */
                          pcVar5 = (code *)SoftwareBreakpoint(1,0x1091865f8);
                          (*pcVar5)();
                        }
                        lVar28 = (long)puVar15 << 3;
                        __Znwm();
                        bVar6 = lStack_1b0 != 0;
                        lStack_1b0 = lVar28;
                        if (bVar6) {
                          __ZdlPv();
                        }
                        lVar28 = lStack_1b0;
                        puStack_1a8 = puVar15;
                        _bzero(lStack_1b0,(long)puVar15 << 3);
                        puVar7 = puVar15;
                        if (plStack_1a0 != (long *)0x0) {
                          puVar20 = (ulong *)plStack_1a0[1];
                          uVar11 = (long)puVar15 - 1;
                          if (((ulong)puVar15 & uVar11) == 0) {
                            puVar20 = (ulong *)((ulong)puVar20 & uVar11);
                          }
                          else if (puVar15 <= puVar20) {
                            uVar19 = 0;
                            if (puVar15 != (ulong *)0x0) {
                              uVar19 = (ulong)puVar20 / (ulong)puVar15;
                            }
                            puVar20 = (ulong *)((long)puVar20 - uVar19 * (long)puVar15);
                          }
                          *(long ***)(lVar28 + (long)puVar20 * 8) = &plStack_1a0;
                          plVar21 = (long *)*plStack_1a0;
                          plVar1 = plStack_1a0;
                          while (plVar21 != (long *)0x0) {
                            puVar23 = (ulong *)plVar21[1];
                            if (((ulong)puVar15 & uVar11) == 0) {
                              puVar23 = (ulong *)((ulong)puVar23 & uVar11);
                            }
                            else if (puVar15 <= puVar23) {
                              uVar19 = 0;
                              if (puVar15 != (ulong *)0x0) {
                                uVar19 = (ulong)puVar23 / (ulong)puVar15;
                              }
                              puVar23 = (ulong *)((long)puVar23 - uVar19 * (long)puVar15);
                            }
                            plVar22 = plVar21;
                            if (puVar23 != puVar20) {
                              if (*(long *)(lVar28 + (long)puVar23 * 8) == 0) {
                                *(long **)(lVar28 + (long)puVar23 * 8) = plVar1;
                                puVar20 = puVar23;
                              }
                              else {
                                *plVar1 = *plVar21;
                                *plVar21 = **(long **)(lVar28 + (long)puVar23 * 8);
                                **(undefined8 **)(lVar28 + (long)puVar23 * 8) = plVar21;
                                plVar22 = plVar1;
                              }
                            }
                            plVar1 = plVar22;
                            plVar21 = (long *)*plVar22;
                          }
                        }
                      }
                      else {
                        puVar7 = puVar20;
                        if (puVar15 < puVar20) {
                          puVar7 = (ulong *)(long)((float)uStack_198 / fStack_190);
                          if ((puVar20 < (ulong *)0x3) ||
                             (((ulong)puVar20 & (long)puVar20 - 1U) != 0)) {
                            __ZNSt3__112__next_primeEm();
                          }
                          else if ((ulong *)0x1 < puVar7) {
                            puVar7 = (ulong *)(1L << (-LZCOUNT((long)puVar7 + -1) & 0x3fU));
                          }
                          lVar28 = lStack_1b0;
                          if (puVar15 <= puVar7) {
                            puVar15 = puVar7;
                          }
                          puVar7 = puStack_1a8;
                          if (puVar15 < puVar20) {
                            if (puVar15 != (ulong *)0x0) goto LAB_109185aa8;
                            lStack_1b0 = 0;
                            if (lVar28 != 0) {
                              __ZdlPv();
                            }
                            puStack_1a8 = (ulong *)0x0;
                            puVar7 = (ulong *)0x0;
                          }
                        }
                      }
                      if (((ulong)puVar7 & (long)puVar7 - 1U) == 0) {
                        unaff_x26 = (ulong *)((ulong)((int)puVar7 - 1) & (ulong)puVar16);
                      }
                      else {
                        unaff_x26 = puVar16;
                        if (puVar7 <= puVar16) {
                          uVar11 = 0;
                          if (puVar7 != (ulong *)0x0) {
                            uVar11 = (ulong)puVar16 / (ulong)puVar7;
                          }
                          unaff_x26 = (ulong *)((long)puVar16 - uVar11 * (long)puVar7);
                        }
                      }
                    }
                    plVar21 = *(long **)(lStack_1b0 + (long)unaff_x26 * 8);
                    if (plVar21 == (long *)0x0) {
                      *plVar18 = (long)plStack_1a0;
                      *(long ***)(lStack_1b0 + (long)unaff_x26 * 8) = &plStack_1a0;
                      plStack_1a0 = plVar18;
                      if (*plVar18 != 0) {
                        puVar16 = *(ulong **)(*plVar18 + 8);
                        if (((ulong)puVar7 & (long)puVar7 - 1U) == 0) {
                          puVar16 = (ulong *)((ulong)puVar16 & (long)puVar7 - 1U);
                        }
                        else if (puVar7 <= puVar16) {
                          uVar11 = 0;
                          if (puVar7 != (ulong *)0x0) {
                            uVar11 = (ulong)puVar16 / (ulong)puVar7;
                          }
                          puVar16 = (ulong *)((long)puVar16 - uVar11 * (long)puVar7);
                        }
                        *(long **)(lStack_1b0 + (long)puVar16 * 8) = plVar18;
                      }
                    }
                    else {
                      *plVar18 = *plVar21;
                      *plVar21 = (long)plVar18;
                    }
                    uStack_198 = uStack_198 + 1;
LAB_109185c88:
                    plVar18[5] = (long)ppppppuVar27[2];
                    plVar18[6] = (long)ppppppuVar27[3];
                    pppppuVar34 = ppppppuVar27[4];
                    plVar18[7] = (long)pppppuVar34;
                  }
                  bVar6 = 1 < uVar9;
                  uVar9 = uVar9 - 1;
                } while (bVar6);
              }
            }
LAB_109185d00:
            ppppppuVar27 = (undefined8 ******)*ppppppuVar27;
          } while (ppppppuVar27 != (undefined8 ******)0x0);
          if (ppppppuStack_e0 != (undefined8 ******)0x0) {
            ppppppuStack_d8 = ppppppuStack_e0;
            __ZdlPv();
            ppppppuVar32 = ppppppuStack_140;
          }
          if (ppppppuVar32 != (undefined8 ******)0x0) {
            ppppppuStack_138 = ppppppuVar32;
            __ZdlPv(ppppppuVar32);
          }
        }
      }
    }
    FUN_109188120(&ppppppuStack_c0);
    if (uStack_198 != 0) {
      ppppppuStack_140 = (undefined8 ******)0x0;
      ppppppuStack_138 = (undefined8 ******)0x0;
      pppppuStack_130 = (undefined8 *****)0x0;
      ppppuVar26 = param_1[4][2];
      if (ppppuVar26 != (undefined8 ****)0x0) {
        do {
          ppppuVar30 = (undefined8 ****)ppppuVar26[5];
          ppppppuVar27 = ppppppuStack_140;
          while (ppppppuStack_140 = ppppppuVar27, ppppuVar30 != ppppuVar26 + 6) {
            plVar18 = &lStack_1b0;
            FUN_10918853c(plVar18,ppppuVar26 + 2);
            if (plVar18 == (long *)0x0) {
              plVar18 = &lStack_1b0;
              FUN_10918853c(plVar18,ppppuVar30 + 4);
              if (plVar18 != (long *)0x0) goto LAB_109185d80;
            }
            else {
LAB_109185d80:
              ppppppuVar32 = (undefined8 ******)ppppuVar26[2];
              ppppppuVar27 = (undefined8 ******)ppppuVar30[4];
              bVar6 = true;
              if ((*(byte *)param_1 == 1) &&
                 (bVar6 = false, !NAN((double)ppppppuVar32) && !NAN((double)ppppppuVar27))) {
                bVar6 = (double)ppppppuVar32 < (double)ppppppuVar27;
              }
              if (bVar6) {
                ppppppuVar37 = (undefined8 ******)ppppuVar26[3];
                ppppppuVar36 = (undefined8 ******)ppppuVar30[5];
LAB_109185da0:
                ppppppuStack_b0 = (undefined8 ******)ppppuVar26[4];
                ppppppuStack_98 = (undefined8 ******)ppppuVar30[6];
                ppppppuStack_c0 = ppppppuVar32;
                ppppppuStack_b8 = ppppppuVar37;
                ppppppuStack_a8 = ppppppuVar27;
                ppppppuStack_a0 = ppppppuVar36;
                func_0x000109184a64(&ppppppuStack_140,&ppppppuStack_c0);
              }
              else if ((double)ppppppuVar32 <= (double)ppppppuVar27) {
                ppppppuVar37 = (undefined8 ******)ppppuVar26[3];
                ppppppuVar36 = (undefined8 ******)ppppuVar30[5];
                if (((double)ppppppuVar37 < (double)ppppppuVar36) ||
                   (((double)ppppppuVar37 <= (double)ppppppuVar36 &&
                    ((double)ppppuVar26[4] < (double)ppppuVar30[6])))) goto LAB_109185da0;
              }
            }
            ppppuVar2 = (undefined8 ****)ppppuVar30[1];
            ppppuVar31 = ppppuVar30;
            ppppppuVar27 = ppppppuStack_140;
            if ((undefined8 ****)ppppuVar30[1] == (undefined8 ****)0x0) {
              do {
                ppppuVar30 = (undefined8 ****)ppppuVar31[2];
                bVar6 = ppppuVar31 != (undefined8 ****)*ppppuVar30;
                ppppuVar31 = ppppuVar30;
              } while (bVar6);
            }
            else {
              do {
                ppppuVar30 = ppppuVar2;
                ppppuVar2 = (undefined8 ****)*ppppuVar30;
              } while ((undefined8 ****)*ppppuVar30 != (undefined8 ****)0x0);
            }
          }
          ppppuVar26 = (undefined8 ****)*ppppuVar26;
        } while (ppppuVar26 != (undefined8 ****)0x0);
        if ((long)ppppppuStack_138 - (long)ppppppuVar27 == 0) {
          if (ppppppuStack_138 == (undefined8 ******)0x0) goto LAB_109185f08;
        }
        else {
          lVar28 = ((long)ppppppuStack_138 - (long)ppppppuVar27 >> 4) * -0x5555555555555555;
          ppppppuVar32 = ppppppuVar27 + 3;
          do {
            ppppppuStack_c0 = (undefined8 ******)ppppppuVar32[-3];
            ppppppuStack_b8 = (undefined8 ******)ppppppuVar32[-2];
            ppppppuStack_b0 = (undefined8 ******)ppppppuVar32[-1];
            ppppppuStack_e0 = (undefined8 ******)*ppppppuVar32;
            ppppppuStack_d8 = (undefined8 ******)ppppppuVar32[1];
            ppppppuStack_d0 = (undefined8 ******)ppppppuVar32[2];
            func_0x0001091848d8(param_1,&ppppppuStack_c0,&ppppppuStack_e0);
            plVar18 = &lStack_1b0;
            FUN_10918853c(plVar18,&ppppppuStack_c0);
            if (plVar18 != (long *)0x0) {
              ppppppuStack_b8 = (undefined8 ******)plVar18[6];
              ppppppuStack_c0 = (undefined8 ******)plVar18[5];
              ppppppuStack_b0 = (undefined8 ******)plVar18[7];
            }
            plVar18 = &lStack_1b0;
            FUN_10918853c(plVar18,&ppppppuStack_e0);
            if (plVar18 != (long *)0x0) {
              ppppppuStack_d8 = (undefined8 ******)plVar18[6];
              ppppppuStack_e0 = (undefined8 ******)plVar18[5];
              ppppppuStack_d0 = (undefined8 ******)plVar18[7];
            }
            FUN_10918479c(param_1,&ppppppuStack_c0,&ppppppuStack_e0);
            ppppppuVar32 = ppppppuVar32 + 6;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
        }
        __ZdlPv(ppppppuVar27);
      }
    }
LAB_109185f08:
    if (0.0 < (double)param_1[2]) {
      ppppppuStack_140 = (undefined8 ******)0x0;
      ppppppuStack_138 = (undefined8 ******)0x0;
      pppppuStack_130 = (undefined8 *****)0x0;
      ppppuVar26 = param_1[4][2];
      if (ppppuVar26 != (undefined8 ****)0x0) {
        do {
          ppppuVar30 = (undefined8 ****)ppppuVar26[5];
          ppppppuVar27 = ppppppuStack_140;
          ppppppuVar32 = ppppppuStack_138;
          ppppppuVar36 = ppppppuStack_c0;
          ppppppuVar37 = ppppppuStack_b8;
          ppppppuVar3 = ppppppuStack_a8;
          ppppppuVar4 = ppppppuStack_a0;
          while (ppppppuStack_140 = ppppppuVar27, ppppppuStack_138 = ppppppuVar32,
                ppppuVar30 != ppppuVar26 + 6) {
            ppppppuStack_c0 = (undefined8 ******)ppppuVar26[2];
            ppppppuStack_a8 = (undefined8 ******)ppppuVar30[4];
            bVar6 = true;
            if ((*(byte *)param_1 == 1) &&
               (bVar6 = false, !NAN((double)ppppppuStack_c0) && !NAN((double)ppppppuStack_a8))) {
              bVar6 = (double)ppppppuStack_c0 < (double)ppppppuStack_a8;
            }
            if (bVar6) {
              ppppppuStack_b8 = (undefined8 ******)ppppuVar26[3];
              ppppppuStack_a0 = (undefined8 ******)ppppuVar30[5];
LAB_109185f58:
              ppppppuStack_b0 = (undefined8 ******)ppppuVar26[4];
              ppppppuStack_98 = (undefined8 ******)ppppuVar30[6];
              func_0x000109184a64(&ppppppuStack_140,&ppppppuStack_c0);
              ppppppuVar36 = ppppppuStack_c0;
              ppppppuVar37 = ppppppuStack_b8;
              ppppppuVar3 = ppppppuStack_a8;
              ppppppuVar4 = ppppppuStack_a0;
            }
            else if ((double)ppppppuStack_c0 <= (double)ppppppuStack_a8) {
              ppppppuStack_b8 = (undefined8 ******)ppppuVar26[3];
              ppppppuStack_a0 = (undefined8 ******)ppppuVar30[5];
              if (((double)ppppppuStack_b8 < (double)ppppppuStack_a0) ||
                 (((double)ppppppuStack_b8 <= (double)ppppppuStack_a0 &&
                  ((double)ppppuVar26[4] < (double)ppppuVar30[6])))) goto LAB_109185f58;
            }
            ppppppuStack_a0 = ppppppuVar4;
            ppppppuStack_a8 = ppppppuVar3;
            ppppppuStack_b8 = ppppppuVar37;
            ppppppuStack_c0 = ppppppuVar36;
            ppppuVar2 = (undefined8 ****)ppppuVar30[1];
            ppppuVar31 = ppppuVar30;
            ppppppuVar32 = ppppppuStack_138;
            ppppppuVar27 = ppppppuStack_140;
            ppppppuVar36 = ppppppuStack_c0;
            ppppppuVar37 = ppppppuStack_b8;
            ppppppuVar3 = ppppppuStack_a8;
            ppppppuVar4 = ppppppuStack_a0;
            if ((undefined8 ****)ppppuVar30[1] == (undefined8 ****)0x0) {
              do {
                ppppuVar30 = (undefined8 ****)ppppuVar31[2];
                bVar6 = ppppuVar31 != (undefined8 ****)*ppppuVar30;
                ppppuVar31 = ppppuVar30;
              } while (bVar6);
            }
            else {
              do {
                ppppuVar30 = ppppuVar2;
                ppppuVar2 = (undefined8 ****)*ppppuVar30;
              } while ((undefined8 ****)*ppppuVar30 != (undefined8 ****)0x0);
            }
          }
          ppppuVar26 = (undefined8 ****)*ppppuVar26;
          ppppppuStack_c0 = ppppppuVar36;
          ppppppuStack_b8 = ppppppuVar37;
          ppppppuStack_a8 = ppppppuVar3;
          ppppppuStack_a0 = ppppppuVar4;
        } while (ppppuVar26 != (undefined8 ****)0x0);
        if (ppppppuVar27 != ppppppuVar32) {
          do {
            ppppppuVar36 = ppppppuVar32 + -6;
            ppppppuStack_e0 = (undefined8 ******)*ppppppuVar36;
            ppppppuStack_d8 = (undefined8 ******)ppppppuVar32[-5];
            ppppppuStack_d0 = (undefined8 ******)ppppppuVar32[-4];
            ppppppuStack_100 = (undefined8 ******)ppppppuVar32[-3];
            ppppppuStack_f8 = (undefined8 ******)ppppppuVar32[-2];
            ppppppuStack_f0 = (undefined8 ******)ppppppuVar32[-1];
            ppppppuStack_138 = ppppppuVar36;
            if ((*(byte *)((long)param_1 + 1) != 1) ||
               (ppppppuVar37 = param_1,
               func_0x000109184758(param_1,&ppppppuStack_e0,&ppppppuStack_100),
               ppppppuVar32 = ppppppuVar36, (int)ppppppuVar37 != 0)) {
              ppppppuStack_120 = (undefined8 ******)0x0;
              ppppppuStack_118 = (undefined8 ******)0x0;
              ppppppuStack_110 = (undefined8 ******)0x0;
              dVar35 = -((double)ppppppuStack_f8 * (double)ppppppuStack_d0) +
                       (double)ppppppuStack_f0 * (double)ppppppuStack_d8;
              dVar38 = -((double)ppppppuStack_f0 * (double)ppppppuStack_e0) +
                       (double)ppppppuStack_100 * (double)ppppppuStack_d0;
              dVar39 = -((double)ppppppuStack_100 * (double)ppppppuStack_d8) +
                       (double)ppppppuStack_f8 * (double)ppppppuStack_e0;
              dVar35 = SQRT(dVar38 * dVar38 + dVar35 * dVar35 + dVar39 * dVar39);
              _atan2(dVar35,(double)ppppppuStack_f8 * (double)ppppppuStack_d8 +
                            (double)ppppppuStack_100 * (double)ppppppuStack_e0 +
                            (double)ppppppuStack_f0 * (double)ppppppuStack_d0);
              FUN_109178658(&ppppppuStack_c0,&ppppppuStack_e0,&ppppppuStack_100);
              if (dVar35 <= 0.0) {
                uVar33 = 0x1e;
              }
              else {
                _frexp(0.9428090415820635 / dVar35,appppppuStack_88);
                iVar25 = (int)appppppuStack_88[0];
                if ((int)appppppuStack_88[0] < 2) {
                  iVar25 = 1;
                }
                if (0x1e < iVar25) {
                  iVar25 = 0x1f;
                }
                uVar33 = iVar25 - 1;
              }
              if ((int)uStack_160 <= (int)uVar33) {
                uVar33 = uStack_160;
              }
              ppppppuVar27 = &ppppppuStack_e0;
              FUN_10917aa58();
              appppppuStack_88[0] = ppppppuVar27;
              FUN_10917b2d8(appppppuStack_88,uVar33,&puStack_158);
              ppppppuVar27 = &ppppppuStack_100;
              FUN_10917aa58();
              appppppuStack_88[0] = ppppppuVar27;
              FUN_10917b2d8(appppppuStack_88,uVar33,&puStack_158);
              puVar16 = puStack_158;
              if (puStack_158 != puStack_150) {
                FUN_1091867dc(puStack_158,puStack_150,
                              LZCOUNT((long)puStack_150 - (long)puStack_158 >> 3) << 1 ^ 0x7e,1);
                puVar16 = puStack_150;
              }
              ppppppuVar36 = (undefined8 ******)((double)pppppuStack_170 + (double)pppppuStack_170);
              uVar9 = (ulong)((long)puVar16 - (long)puStack_158) >> 3;
              do {
                uVar11 = uVar9 & 0xffffffff;
                do {
                  if ((int)uVar11 < 1) {
                    ppppppuVar32 = ppppppuStack_138;
                    ppppppuVar27 = ppppppuStack_140;
                    puStack_150 = puStack_158;
                    if ((double)ppppppuVar36 < (double)pppppuStack_168 * (double)pppppuStack_170) {
                      func_0x0001091848d8(param_1,&ppppppuStack_e0,&ppppppuStack_100);
                      ppppppuVar27 = param_1;
                      FUN_10918479c(param_1,&ppppppuStack_e0,&ppppppuStack_120);
                      if ((int)ppppppuVar27 != 0) {
                        ppppppuStack_b8 = ppppppuStack_d8;
                        ppppppuStack_c0 = ppppppuStack_e0;
                        ppppppuStack_a0 = ppppppuStack_118;
                        ppppppuStack_a8 = ppppppuStack_120;
                        ppppppuStack_b0 = ppppppuStack_d0;
                        ppppppuStack_98 = ppppppuStack_110;
                        func_0x000109184a64(&ppppppuStack_140,&ppppppuStack_c0);
                      }
                      ppppppuVar36 = param_1;
                      FUN_10918479c(param_1,&ppppppuStack_120,&ppppppuStack_100);
                      ppppppuVar32 = ppppppuStack_138;
                      ppppppuVar27 = ppppppuStack_140;
                      if ((int)ppppppuVar36 != 0) {
                        ppppppuStack_b8 = ppppppuStack_118;
                        ppppppuStack_c0 = ppppppuStack_120;
                        ppppppuStack_a0 = ppppppuStack_f8;
                        ppppppuStack_a8 = ppppppuStack_100;
                        ppppppuStack_b0 = ppppppuStack_110;
                        ppppppuStack_98 = ppppppuStack_f0;
                        func_0x000109184a64(&ppppppuStack_140,&ppppppuStack_c0);
                        ppppppuVar32 = ppppppuStack_138;
                        ppppppuVar27 = ppppppuStack_140;
                      }
                    }
                    goto LAB_109186384;
                  }
                  uVar9 = uVar11 - 1;
                  if (uVar9 == 0) {
                    uVar19 = *puStack_158;
                    break;
                  }
                  lVar28 = uVar11 - 2;
                  uVar19 = puStack_158[uVar11 - 1 & 0xffffffff];
                  uVar11 = uVar9;
                } while (puStack_158[lVar28] == uVar19);
                pppppppuVar12 = &pppppppuStack_180;
                if (pppppppuStack_180 != (undefined8 *******)0x0) {
                  pppppppuVar24 = pppppppuStack_180;
                  do {
                    lVar28 = 8;
                    if ((undefined8 ******)(uVar19 - (uVar19 - 1 & (uVar19 ^ 0xffffffffffffffff)))
                        <= pppppppuVar24[4]) {
                      lVar28 = 0;
                      pppppppuVar12 = pppppppuVar24;
                    }
                    pppppppuVar24 = *(undefined8 ********)((long)pppppppuVar24 + lVar28);
                  } while (pppppppuVar24 != (undefined8 *******)0x0);
                }
                ppppppuVar27 = pppppppuVar12[4];
                while (ppppppuVar27 <= (undefined8 ******)(uVar19 - 1 | uVar19)) {
                  ppppppuVar27 = *(undefined8 *******)((long)pppppppuVar12 + 0x28U);
                  if ((((((double)ppppppuVar27 != (double)ppppppuStack_e0) ||
                        ((double)*(undefined8 *******)((long)pppppppuVar12 + 0x30) !=
                         (double)ppppppuStack_d8)) ||
                       ((double)*(undefined8 *******)((long)pppppppuVar12 + 0x38) !=
                        (double)ppppppuStack_d0)) &&
                      ((((double)ppppppuVar27 != (double)ppppppuStack_100 ||
                        (ppppppuVar27 = *(undefined8 *******)((long)pppppppuVar12 + 0x30),
                        (double)ppppppuVar27 != (double)ppppppuStack_f8)) ||
                       (ppppppuVar27 = *(undefined8 *******)((long)pppppppuVar12 + 0x38),
                       (double)ppppppuVar27 != (double)ppppppuStack_f0)))) &&
                     (FUN_10917cbd4((undefined8 *******)((long)pppppppuVar12 + 0x28U),
                                    &ppppppuStack_e0,&ppppppuStack_100,&ppppppuStack_c0),
                     (double)ppppppuVar27 < (double)ppppppuVar36)) {
                    ppppppuStack_118 = *(undefined8 *******)((long)pppppppuVar12 + 0x30);
                    ppppppuStack_120 = *(undefined8 *******)((long)pppppppuVar12 + 0x28);
                    ppppppuStack_110 = *(undefined8 *******)((long)pppppppuVar12 + 0x38);
                    ppppppuVar36 = ppppppuVar27;
                  }
                  pppppppuVar24 = *(undefined8 ********)((long)pppppppuVar12 + 8);
                  pppppppuVar13 = pppppppuVar12;
                  if (*(undefined8 ********)((long)pppppppuVar12 + 8) == (undefined8 *******)0x0) {
                    do {
                      pppppppuVar12 = (undefined8 *******)pppppppuVar13[2];
                      bVar6 = pppppppuVar13 != (undefined8 *******)*pppppppuVar12;
                      pppppppuVar13 = pppppppuVar12;
                    } while (bVar6);
                  }
                  else {
                    do {
                      pppppppuVar12 = pppppppuVar24;
                      pppppppuVar24 = (undefined8 *******)*pppppppuVar12;
                    } while ((undefined8 *******)*pppppppuVar12 != (undefined8 *******)0x0);
                  }
                  ppppppuVar27 = pppppppuVar12[4];
                }
              } while( true );
            }
LAB_109186384:
          } while (ppppppuVar27 != ppppppuVar32);
        }
        if (ppppppuVar27 != (undefined8 ******)0x0) {
          ppppppuStack_138 = ppppppuVar27;
          __ZdlPv(ppppppuVar27);
        }
      }
    }
    FUN_109188630(&lStack_1b0);
    if (puStack_158 != (ulong *)0x0) {
      puStack_150 = puStack_158;
      __ZdlPv();
    }
    FUN_1091873dc(pppppppuStack_180);
  }
  pppppppuStack_188 = (undefined8 *******)0x0;
  pppppppuStack_180 = (undefined8 *******)0x0;
  lStack_178 = 0;
  pppppppuVar12 = &pppppppuStack_188;
  if (param_3 != (undefined8 *******)0x0) {
    pppppppuVar12 = param_3;
  }
  ppppppuVar27 = *pppppppuVar12;
  pppppppuVar12[1] = ppppppuVar27;
  pppppuVar34 = param_1[5];
  ppppppuVar32 = ppppppuVar27;
  if (param_1[6] != pppppuVar34) {
    lVar28 = 0;
    iVar25 = 0;
    do {
      pppppuVar8 = param_1[4];
      FUN_1091874bc(pppppuVar8,pppppuVar34 + lVar28 * 3);
      if (pppppuVar8 == (undefined8 *****)0x0) {
        iVar25 = iVar25 + 1;
      }
      else {
        ppppppuVar27 = param_1;
        FUN_109184bdc(param_1,pppppuVar34 + lVar28 * 3,pppppuVar8[5] + 4,pppppppuVar12);
        ppppppuStack_c0 = ppppppuVar27;
        if (ppppppuVar27 != (undefined8 ******)0x0) {
          FUN_109180c90(&lStack_1c8,&ppppppuStack_c0);
          uVar33 = *(uint *)(ppppppuStack_c0 + 1);
          if (0 < (int)uVar33) {
            pppppuVar8 = ppppppuStack_c0[2];
            uVar9 = (ulong)(uVar33 - 1);
            pppppuVar34 = pppppuVar8 + (ulong)(-uVar33 & ((int)-uVar33 >> 0x1f ^ 0xffffffffU)) * 3;
            uVar11 = 0;
            do {
              func_0x0001091848d8(param_1,pppppuVar8 +
                                          (ulong)(-uVar33 & ((int)-uVar33 >> 0x1f ^ 0xffffffffU)) *
                                          3 + (long)(int)uVar9 * 3,pppppuVar34);
              uVar19 = uVar11 + 1;
              pppppuVar34 = pppppuVar34 + 3;
              uVar9 = uVar11;
              uVar11 = uVar19;
            } while (uVar33 != uVar19);
          }
        }
      }
      lVar28 = (long)iVar25;
      pppppuVar34 = param_1[5];
      uVar9 = ((long)param_1[6] - (long)pppppuVar34 >> 3) * -0x5555555555555555;
    } while ((ulong)(long)iVar25 <= uVar9 && uVar9 - (long)iVar25 != 0);
    ppppppuVar27 = *pppppppuVar12;
    ppppppuVar32 = pppppppuVar12[1];
    if (pppppppuStack_188 != (undefined8 *******)0x0) {
      __ZdlPv();
    }
  }
  bVar6 = ppppppuVar27 == ppppppuVar32;
  if ((((ulong)*param_1 & 1) == 0) && (lStack_1c0 != lStack_1c8)) {
    uVar9 = 0;
    do {
      FUN_10917ef74(*(undefined8 *)(lStack_1c8 + uVar9 * 8));
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(lStack_1c0 - lStack_1c8 >> 3));
  }
  if (*(byte *)((long)param_1 + 2) == 1) {
    uVar9 = 0;
    FUN_109181064();
    if ((uVar9 & 1) == 0) {
      if ((param_3 != (undefined8 *******)0x0) && (lStack_1c0 != lStack_1c8)) {
        uVar9 = 0;
        do {
          lVar28 = *(long *)(lStack_1c8 + uVar9 * 8);
          iVar25 = *(int *)(lVar28 + 8);
          uVar33 = -iVar25;
          func_0x0001091849d4(*(long *)(lVar28 + 0x10) +
                              (ulong)(uVar33 & ((int)uVar33 >> 0x1f ^ 0xffffffffU)) * 0x18,iVar25,
                              param_3);
          uVar9 = uVar9 + 1;
        } while (uVar9 < (ulong)(lStack_1c0 - lStack_1c8 >> 3));
      }
      lVar28 = lStack_1c8;
      if (lStack_1c0 != lStack_1c8) {
        uVar9 = 0;
        lVar17 = lStack_1c0;
        do {
          plVar18 = *(long **)(lVar28 + uVar9 * 8);
          if (plVar18 != (long *)0x0) {
            (**(code **)(*plVar18 + 8))(plVar18);
            lVar28 = lStack_1c8;
            lVar17 = lStack_1c0;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < (ulong)(lVar17 - lVar28 >> 3));
      }
      bVar6 = false;
      lStack_1c0 = lVar28;
      goto joined_r0x00010918652c;
    }
  }
  FUN_10918080c(param_2,&lStack_1c8);
  lStack_1c0 = lStack_1c8;
joined_r0x00010918652c:
  if (lStack_1c0 != 0) {
    __ZdlPv();
  }
  return bVar6;
}



/* Entry: 109186714; end: 109186727;  */

void FUN_109186714(undefined8 param_1,ulong *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  puVar2 = (undefined8 *)0x40;
  __Znwm();
  uVar4 = *param_2;
  puVar2[4] = uVar4;
  uVar7 = param_2[1];
  puVar2[6] = param_2[2];
  puVar2[5] = uVar7;
  puVar2[7] = param_2[3];
  plVar3 = plVar1 + 1;
  plVar5 = (long *)*plVar3;
  do {
    plVar6 = plVar3;
    if (plVar5 == (long *)0x0) {
LAB_1091867a0:
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = plVar3;
      *plVar6 = (long)puVar2;
      if (*(long *)*plVar1 != 0) {
        *plVar1 = *(long *)*plVar1;
      }
      func_0x000107c27be4(plVar1[1]);
      plVar1[2] = plVar1[2] + 1;
      return;
    }
    while (plVar3 = plVar5, (ulong)plVar3[4] <= uVar4) {
      plVar5 = (long *)plVar3[1];
      if ((long *)plVar3[1] == (long *)0x0) {
        plVar6 = plVar3 + 1;
        goto LAB_1091867a0;
      }
    }
    plVar5 = (long *)*plVar3;
  } while( true );
}



/* Entry: 109186728; end: 1091867db;  */

void FUN_109186728(long *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  uVar3 = *param_2;
  puVar1[4] = uVar3;
  uVar6 = param_2[1];
  puVar1[6] = param_2[2];
  puVar1[5] = uVar6;
  puVar1[7] = param_2[3];
  plVar2 = param_1 + 1;
  plVar4 = (long *)*plVar2;
  do {
    plVar5 = plVar2;
    if (plVar4 == (long *)0x0) {
LAB_1091867a0:
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = plVar2;
      *plVar5 = (long)puVar1;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
      }
      func_0x000107c27be4(param_1[1]);
      param_1[2] = param_1[2] + 1;
      return;
    }
    while (plVar2 = plVar4, (ulong)plVar2[4] <= uVar3) {
      plVar4 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) {
        plVar5 = plVar2 + 1;
        goto LAB_1091867a0;
      }
    }
    plVar4 = (long *)*plVar2;
  } while( true );
}



/* Entry: 1091867dc; end: 1091870cb;  */

void FUN_1091867dc(ulong *param_1,ulong *param_2,long param_3,uint param_4)

{
  bool bVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  
LAB_109186808:
  do {
    puVar7 = param_1;
    uVar5 = (long)param_2 - (long)puVar7 >> 3;
    if (uVar5 - 2 != 0 && 1 < (long)uVar5) {
      if (uVar5 == 3) {
        uVar5 = *puVar7;
        uVar8 = puVar7[1];
        uVar9 = param_2[-1];
        if (uVar8 < uVar5) {
          if (uVar9 < uVar8) {
            *puVar7 = uVar9;
          }
          else {
            *puVar7 = uVar8;
            puVar7[1] = uVar5;
            if (uVar5 <= param_2[-1]) {
              return;
            }
            puVar7[1] = param_2[-1];
          }
          param_2[-1] = uVar5;
          return;
        }
        if (uVar8 <= uVar9) {
          return;
        }
        puVar7[1] = uVar9;
        param_2[-1] = uVar8;
        uVar5 = puVar7[1];
        goto LAB_1091870a4;
      }
      if (uVar5 == 4) {
        uVar5 = *puVar7;
        uVar8 = puVar7[1];
        uVar13 = puVar7[2];
        uVar9 = uVar13;
        if (uVar8 < uVar5) {
          if (uVar13 < uVar8) {
            *puVar7 = uVar13;
          }
          else {
            *puVar7 = uVar8;
            puVar7[1] = uVar5;
            if (uVar5 <= uVar13) goto LAB_10918700c;
            puVar7[1] = uVar13;
          }
          puVar7[2] = uVar5;
          uVar9 = uVar5;
        }
        else if (uVar13 < uVar8) {
          puVar7[1] = uVar13;
          puVar7[2] = uVar8;
          uVar9 = uVar8;
          if (uVar13 < uVar5) {
            *puVar7 = uVar13;
            puVar7[1] = uVar5;
          }
        }
LAB_10918700c:
        if (uVar9 <= param_2[-1]) {
          return;
        }
        puVar7[2] = param_2[-1];
        param_2[-1] = uVar9;
        uVar5 = puVar7[2];
      }
      else {
        if (uVar5 != 5) goto LAB_109186844;
        uVar5 = *puVar7;
        uVar8 = puVar7[1];
        uVar13 = puVar7[2];
        uVar9 = uVar13;
        if (uVar8 < uVar5) {
          if (uVar13 < uVar8) {
            *puVar7 = uVar13;
            puVar7[2] = uVar5;
            uVar9 = uVar5;
            uVar12 = uVar13;
          }
          else {
            *puVar7 = uVar8;
            puVar7[1] = uVar5;
            uVar12 = uVar8;
            uVar8 = uVar5;
            if (uVar13 < uVar5) {
              puVar7[1] = uVar13;
              puVar7[2] = uVar5;
              uVar9 = uVar5;
              uVar8 = uVar13;
            }
          }
        }
        else {
          uVar12 = uVar5;
          if (uVar13 < uVar8) {
            puVar7[1] = uVar13;
            puVar7[2] = uVar8;
            uVar9 = uVar8;
            uVar8 = uVar13;
            if (uVar13 < uVar5) {
              *puVar7 = uVar13;
              puVar7[1] = uVar5;
              uVar12 = uVar13;
              uVar8 = uVar5;
            }
          }
        }
        uVar13 = puVar7[3];
        uVar5 = uVar13;
        if (uVar13 < uVar9) {
          puVar7[2] = uVar13;
          puVar7[3] = uVar9;
          uVar5 = uVar9;
          if (uVar13 < uVar8) {
            puVar7[1] = uVar13;
            puVar7[2] = uVar8;
            if (uVar13 < uVar12) {
              *puVar7 = uVar13;
              puVar7[1] = uVar12;
            }
          }
        }
        if (uVar5 <= param_2[-1]) {
          return;
        }
        puVar7[3] = param_2[-1];
        param_2[-1] = uVar5;
        uVar8 = puVar7[2];
        uVar5 = puVar7[3];
        if (uVar8 <= uVar5) {
          return;
        }
        puVar7[2] = uVar5;
        puVar7[3] = uVar8;
      }
      uVar8 = puVar7[1];
      if (uVar8 <= uVar5) {
        return;
      }
      puVar7[1] = uVar5;
      puVar7[2] = uVar8;
LAB_1091870a4:
      uVar8 = *puVar7;
      if (uVar8 <= uVar5) {
        return;
      }
      *puVar7 = uVar5;
      puVar7[1] = uVar8;
      return;
    }
    if (uVar5 < 2) {
      return;
    }
    if (uVar5 == 2) {
      uVar5 = *puVar7;
      if (uVar5 <= param_2[-1]) {
        return;
      }
      *puVar7 = param_2[-1];
      param_2[-1] = uVar5;
      return;
    }
LAB_109186844:
    if ((long)uVar5 < 0x18) {
      puVar3 = puVar7 + 1;
      if ((param_4 & 1) == 0) {
        if (puVar7 == param_2 || puVar3 == param_2) {
          return;
        }
        do {
          puVar4 = puVar3;
          uVar5 = *puVar7;
          uVar8 = puVar7[1];
          puVar7 = puVar4;
          if (uVar8 < uVar5) {
            do {
              *puVar7 = uVar5;
              uVar5 = puVar7[-2];
              puVar7 = puVar7 + -1;
            } while (uVar8 < uVar5);
            *puVar7 = uVar8;
          }
          puVar3 = puVar4 + 1;
          puVar7 = puVar4;
        } while (puVar4 + 1 != param_2);
        return;
      }
      if (puVar7 == param_2 || puVar3 == param_2) {
        return;
      }
      lVar10 = 8;
      puVar4 = puVar7;
      do {
        puVar6 = puVar3;
        uVar5 = *puVar4;
        uVar8 = puVar4[1];
        lVar11 = lVar10;
        if (uVar8 < uVar5) {
          do {
            *(ulong *)((long)puVar7 + lVar11) = uVar5;
            lVar2 = lVar11 + -8;
            puVar3 = puVar7;
            if (lVar2 == 0) goto LAB_109186d34;
            uVar5 = *(ulong *)((long)puVar7 + lVar11 + -0x10);
            lVar11 = lVar2;
          } while (uVar8 < uVar5);
          puVar3 = (ulong *)((long)puVar7 + lVar2);
LAB_109186d34:
          *puVar3 = uVar8;
        }
        puVar3 = puVar6 + 1;
        lVar10 = lVar10 + 8;
        puVar4 = puVar6;
        if (puVar3 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (puVar7 == param_2) {
        return;
      }
      uVar9 = uVar5 - 2 >> 1;
      uVar8 = uVar9;
      do {
        if ((long)uVar8 <= (long)uVar9) {
          uVar12 = (uVar8 & 0x3fffffffffffffff) << 1 | 1;
          puVar3 = puVar7 + uVar12;
          uVar13 = uVar8 * 2 + 2;
          if ((long)uVar13 < (long)uVar5) {
            uVar14 = *puVar3;
            uVar15 = puVar3[1];
            uVar17 = uVar14;
            if (uVar14 <= uVar15) {
              uVar17 = uVar15;
            }
            puVar4 = puVar3 + 1;
            if (uVar15 <= uVar14) {
              puVar4 = puVar3;
              uVar13 = uVar12;
            }
          }
          else {
            uVar17 = *puVar3;
            puVar4 = puVar3;
            uVar13 = uVar12;
          }
          uVar12 = puVar7[uVar8];
          puVar3 = puVar7 + uVar8;
          if (uVar12 <= uVar17) {
            do {
              puVar6 = puVar4;
              *puVar3 = uVar17;
              if ((long)uVar9 < (long)uVar13) break;
              uVar14 = uVar13 << 1 | 1;
              puVar3 = puVar7 + uVar14;
              uVar13 = uVar13 * 2 + 2;
              if ((long)uVar13 < (long)uVar5) {
                uVar16 = *puVar3;
                uVar15 = puVar3[1];
                uVar17 = uVar16;
                if (uVar16 <= uVar15) {
                  uVar17 = uVar15;
                }
                puVar4 = puVar3 + 1;
                if (uVar15 <= uVar16) {
                  puVar4 = puVar3;
                  uVar13 = uVar14;
                }
              }
              else {
                uVar17 = *puVar3;
                puVar4 = puVar3;
                uVar13 = uVar14;
              }
              puVar3 = puVar6;
            } while (uVar12 <= uVar17);
            *puVar6 = uVar12;
          }
        }
        bVar1 = uVar8 != 0;
        uVar8 = uVar8 - 1;
      } while (bVar1);
      do {
        uVar8 = 0;
        uVar9 = *puVar7;
        puVar3 = puVar7;
        do {
          puVar4 = puVar3 + uVar8 + 1;
          uVar12 = uVar8 << 1 | 1;
          uVar13 = uVar8 * 2 + 2;
          if ((long)uVar13 < (long)uVar5) {
            uVar14 = puVar3[uVar8 + 2];
            uVar15 = puVar3[uVar8 + 1];
            uVar17 = uVar15;
            if (uVar15 <= uVar14) {
              uVar17 = uVar14;
            }
            puVar6 = puVar3 + uVar8 + 2;
            uVar8 = uVar13;
            if (uVar14 <= uVar15) {
              puVar6 = puVar4;
              uVar8 = uVar12;
            }
          }
          else {
            uVar17 = *puVar4;
            puVar6 = puVar4;
            uVar8 = uVar12;
          }
          *puVar3 = uVar17;
          puVar3 = puVar6;
        } while ((long)uVar8 <= (long)(uVar5 - 2 >> 1));
        param_2 = param_2 + -1;
        if (puVar6 == param_2) {
          *puVar6 = uVar9;
        }
        else {
          *puVar6 = *param_2;
          *param_2 = uVar9;
          lVar10 = (long)puVar6 + (8 - (long)puVar7) >> 3;
          if (1 < lVar10) {
            uVar8 = lVar10 - 2U >> 1;
            uVar13 = puVar7[uVar8];
            uVar9 = *puVar6;
            puVar3 = puVar7 + uVar8;
            if (uVar13 < uVar9) {
              do {
                puVar4 = puVar3;
                *puVar6 = uVar13;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1 >> 1;
                uVar13 = puVar7[uVar8];
                puVar6 = puVar4;
                puVar3 = puVar7 + uVar8;
              } while (uVar13 < uVar9);
              *puVar4 = uVar9;
            }
          }
        }
        bVar1 = (long)uVar5 < 3;
        uVar5 = uVar5 - 1;
        if (bVar1) {
          return;
        }
      } while( true );
    }
    puVar3 = puVar7 + (uVar5 >> 1);
    uVar8 = param_2[-1];
    if (uVar5 < 0x81) {
      uVar9 = *puVar7;
      uVar5 = *puVar3;
      if (uVar9 < uVar5) {
        if (uVar8 < uVar9) {
          *puVar3 = uVar8;
        }
        else {
          *puVar3 = uVar9;
          *puVar7 = uVar5;
          if (uVar5 <= param_2[-1]) goto LAB_109186a78;
          *puVar7 = param_2[-1];
        }
        param_2[-1] = uVar5;
      }
      else if (uVar8 < uVar9) {
        *puVar7 = uVar8;
        param_2[-1] = uVar9;
        uVar5 = *puVar3;
        if (*puVar7 < uVar5) {
          *puVar3 = *puVar7;
          *puVar7 = uVar5;
        }
      }
    }
    else {
      uVar9 = *puVar3;
      uVar5 = *puVar7;
      if (uVar9 < uVar5) {
        if (uVar8 < uVar9) {
          *puVar7 = uVar8;
        }
        else {
          *puVar7 = uVar9;
          *puVar3 = uVar5;
          if (uVar5 <= param_2[-1]) goto LAB_109186918;
          *puVar3 = param_2[-1];
        }
        param_2[-1] = uVar5;
      }
      else if (uVar8 < uVar9) {
        *puVar3 = uVar8;
        param_2[-1] = uVar9;
        uVar5 = *puVar7;
        if (*puVar3 < uVar5) {
          *puVar7 = *puVar3;
          *puVar3 = uVar5;
        }
      }
LAB_109186918:
      uVar8 = puVar3[-1];
      uVar5 = puVar7[1];
      uVar9 = param_2[-2];
      if (uVar8 < uVar5) {
        if (uVar9 < uVar8) {
          puVar7[1] = uVar9;
        }
        else {
          puVar7[1] = uVar8;
          puVar3[-1] = uVar5;
          if (uVar5 <= param_2[-2]) goto LAB_1091869a4;
          puVar3[-1] = param_2[-2];
        }
        param_2[-2] = uVar5;
      }
      else if (uVar9 < uVar8) {
        puVar3[-1] = uVar9;
        param_2[-2] = uVar8;
        uVar5 = puVar7[1];
        if (puVar3[-1] < uVar5) {
          puVar7[1] = puVar3[-1];
          puVar3[-1] = uVar5;
        }
      }
LAB_1091869a4:
      uVar8 = puVar3[1];
      uVar5 = puVar7[2];
      uVar9 = param_2[-3];
      if (uVar8 < uVar5) {
        if (uVar9 < uVar8) {
          puVar7[2] = uVar9;
        }
        else {
          puVar7[2] = uVar8;
          puVar3[1] = uVar5;
          if (uVar5 <= param_2[-3]) goto LAB_109186a10;
          puVar3[1] = param_2[-3];
        }
        param_2[-3] = uVar5;
      }
      else if (uVar9 < uVar8) {
        puVar3[1] = uVar9;
        param_2[-3] = uVar8;
        uVar5 = puVar7[2];
        if (puVar3[1] < uVar5) {
          puVar7[2] = puVar3[1];
          puVar3[1] = uVar5;
        }
      }
LAB_109186a10:
      uVar5 = puVar3[-1];
      uVar8 = *puVar3;
      uVar9 = puVar3[1];
      if (uVar8 < uVar5) {
        if (uVar9 < uVar8) {
          puVar3[-1] = uVar9;
          puVar3[1] = uVar5;
        }
        else {
          puVar3[-1] = uVar8;
          *puVar3 = uVar5;
          uVar8 = uVar5;
          if (uVar9 < uVar5) {
            *puVar3 = uVar9;
            puVar3[1] = uVar5;
            uVar8 = uVar9;
          }
        }
      }
      else if (uVar9 < uVar8) {
        *puVar3 = uVar9;
        puVar3[1] = uVar8;
        uVar8 = uVar9;
        if (uVar9 < uVar5) {
          puVar3[-1] = uVar9;
          *puVar3 = uVar5;
          uVar8 = uVar5;
        }
      }
      uVar5 = *puVar7;
      *puVar7 = uVar8;
      *puVar3 = uVar5;
    }
LAB_109186a78:
    param_3 = param_3 + -1;
    uVar5 = *puVar7;
    param_1 = puVar7;
    if (((param_4 & 1) == 0) && (uVar5 <= puVar7[-1])) {
      if (uVar5 < param_2[-1]) {
        do {
          param_1 = param_1 + 1;
        } while (*param_1 <= uVar5);
      }
      else {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while (*param_1 <= uVar5);
      }
      puVar3 = param_2;
      if (param_1 < param_2) {
        do {
          puVar3 = puVar3 + -1;
        } while (uVar5 < *puVar3);
      }
      if (param_1 < puVar3) {
        uVar8 = *param_1;
        uVar9 = *puVar3;
        do {
          *param_1 = uVar9;
          *puVar3 = uVar8;
          do {
            param_1 = param_1 + 1;
            uVar8 = *param_1;
          } while (uVar8 <= uVar5);
          do {
            puVar3 = puVar3 + -1;
            uVar9 = *puVar3;
          } while (uVar5 < uVar9);
        } while (param_1 < puVar3);
      }
      puVar3 = param_1 + -1;
      if (puVar7 != puVar3) {
        *puVar7 = *puVar3;
      }
      param_4 = 0;
      *puVar3 = uVar5;
      goto LAB_109186808;
    }
    lVar10 = 0;
    do {
      uVar8 = *(ulong *)((long)puVar7 + lVar10 + 8);
      lVar10 = lVar10 + 8;
    } while (uVar8 < uVar5);
    puVar3 = (ulong *)((long)puVar7 + lVar10);
    puVar4 = param_2;
    if (lVar10 == 8) {
      do {
        if (puVar4 <= puVar3) break;
        puVar4 = puVar4 + -1;
      } while (uVar5 <= *puVar4);
    }
    else {
      do {
        puVar4 = puVar4 + -1;
      } while (uVar5 <= *puVar4);
    }
    param_1 = puVar3;
    if (puVar3 < puVar4) {
      uVar9 = *puVar4;
      puVar6 = puVar4;
      do {
        *param_1 = uVar9;
        *puVar6 = uVar8;
        do {
          param_1 = param_1 + 1;
          uVar8 = *param_1;
        } while (uVar8 < uVar5);
        do {
          puVar6 = puVar6 + -1;
          uVar9 = *puVar6;
        } while (uVar5 <= uVar9);
      } while (param_1 < puVar6);
    }
    puVar6 = param_1 + -1;
    if (puVar7 != puVar6) {
      *puVar7 = *puVar6;
    }
    *puVar6 = uVar5;
    if (puVar3 < puVar4) {
LAB_109186b6c:
      FUN_1091867dc(puVar7,puVar6,param_3,param_4 & 1);
      param_4 = 0;
    }
    else {
      puVar3 = puVar7;
      FUN_1091870cc(puVar7,puVar6);
      puVar4 = param_1;
      FUN_1091870cc(param_1,param_2);
      if ((int)puVar4 == 0) {
        if (((ulong)puVar3 & 1) == 0) goto LAB_109186b6c;
      }
      else {
        param_1 = puVar7;
        param_2 = puVar6;
        if (((ulong)puVar3 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 1091870cc; end: 1091873db;  */

bool FUN_1091870cc(ulong *param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  
  uVar2 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar2 < 3) {
    if (uVar2 < 2) {
      return true;
    }
    if (uVar2 == 2) {
      uVar2 = *param_1;
      if (uVar2 <= param_2[-1]) {
        return true;
      }
      *param_1 = param_2[-1];
      param_2[-1] = uVar2;
      return true;
    }
LAB_109187170:
    uVar5 = param_1[2];
    uVar2 = *param_1;
    uVar11 = param_1[1];
    if (uVar11 < uVar2) {
      if (uVar5 < uVar11) {
        *param_1 = uVar5;
      }
      else {
        *param_1 = uVar11;
        param_1[1] = uVar2;
        if (uVar2 <= uVar5) goto LAB_109187258;
        param_1[1] = uVar5;
      }
      param_1[2] = uVar2;
    }
    else if (uVar5 < uVar11) {
      param_1[1] = uVar5;
      param_1[2] = uVar11;
      if (uVar5 < uVar2) {
        *param_1 = uVar5;
        param_1[1] = uVar2;
      }
    }
LAB_109187258:
    if (param_1 + 3 != param_2) {
      iVar4 = 0;
      lVar6 = 0x18;
      puVar10 = param_1 + 3;
      puVar9 = param_1 + 2;
      do {
        puVar3 = puVar10;
        uVar11 = *puVar3;
        uVar2 = *puVar9;
        lVar12 = lVar6;
        if (uVar11 < uVar2) {
          do {
            *(ulong *)((long)param_1 + lVar12) = uVar2;
            lVar1 = lVar12 + -8;
            puVar10 = param_1;
            if (lVar1 == 0) goto LAB_1091872ac;
            uVar2 = *(ulong *)((long)param_1 + lVar12 + -0x10);
            lVar12 = lVar1;
          } while (uVar11 < uVar2);
          puVar10 = (ulong *)((long)param_1 + lVar1);
LAB_1091872ac:
          *puVar10 = uVar11;
          iVar4 = iVar4 + 1;
          if (iVar4 == 8) {
            return puVar3 + 1 == param_2;
          }
        }
        lVar6 = lVar6 + 8;
        puVar10 = puVar3 + 1;
        puVar9 = puVar3;
      } while (puVar3 + 1 != param_2);
    }
    return true;
  }
  if (uVar2 == 3) {
    uVar2 = *param_1;
    uVar11 = param_1[1];
    uVar5 = param_2[-1];
    if (uVar11 < uVar2) {
      if (uVar5 < uVar11) {
        *param_1 = uVar5;
      }
      else {
        *param_1 = uVar11;
        param_1[1] = uVar2;
        if (uVar2 <= param_2[-1]) {
          return true;
        }
        param_1[1] = param_2[-1];
      }
      param_2[-1] = uVar2;
      return true;
    }
    if (uVar11 <= uVar5) {
      return true;
    }
    param_1[1] = uVar5;
    param_2[-1] = uVar11;
    uVar2 = param_1[1];
    goto LAB_1091873c8;
  }
  if (uVar2 == 4) {
    uVar2 = *param_1;
    uVar11 = param_1[1];
    uVar8 = param_1[2];
    uVar5 = uVar8;
    if (uVar11 < uVar2) {
      if (uVar8 < uVar11) {
        *param_1 = uVar8;
      }
      else {
        *param_1 = uVar11;
        param_1[1] = uVar2;
        if (uVar2 <= uVar8) goto LAB_109187320;
        param_1[1] = uVar8;
      }
      param_1[2] = uVar2;
      uVar5 = uVar2;
    }
    else if (uVar8 < uVar11) {
      param_1[1] = uVar8;
      param_1[2] = uVar11;
      uVar5 = uVar11;
      if (uVar8 < uVar2) {
        *param_1 = uVar8;
        param_1[1] = uVar2;
      }
    }
LAB_109187320:
    if (uVar5 <= param_2[-1]) {
      return true;
    }
    param_1[2] = param_2[-1];
    param_2[-1] = uVar5;
    uVar2 = param_1[2];
  }
  else {
    if (uVar2 != 5) goto LAB_109187170;
    uVar2 = *param_1;
    uVar11 = param_1[1];
    uVar8 = param_1[2];
    uVar5 = uVar8;
    if (uVar11 < uVar2) {
      if (uVar8 < uVar11) {
        *param_1 = uVar8;
        param_1[2] = uVar2;
        uVar5 = uVar2;
        uVar7 = uVar8;
      }
      else {
        *param_1 = uVar11;
        param_1[1] = uVar2;
        uVar7 = uVar11;
        uVar11 = uVar2;
        if (uVar8 < uVar2) {
          param_1[1] = uVar8;
          param_1[2] = uVar2;
          uVar5 = uVar2;
          uVar11 = uVar8;
        }
      }
    }
    else {
      uVar7 = uVar2;
      if (uVar8 < uVar11) {
        param_1[1] = uVar8;
        param_1[2] = uVar11;
        uVar5 = uVar11;
        uVar11 = uVar8;
        if (uVar8 < uVar2) {
          *param_1 = uVar8;
          param_1[1] = uVar2;
          uVar7 = uVar8;
          uVar11 = uVar2;
        }
      }
    }
    uVar8 = param_1[3];
    uVar2 = uVar8;
    if (uVar8 < uVar5) {
      param_1[2] = uVar8;
      param_1[3] = uVar5;
      uVar2 = uVar5;
      if (uVar8 < uVar11) {
        param_1[1] = uVar8;
        param_1[2] = uVar11;
        if (uVar8 < uVar7) {
          *param_1 = uVar8;
          param_1[1] = uVar7;
        }
      }
    }
    if (uVar2 <= param_2[-1]) {
      return true;
    }
    param_1[3] = param_2[-1];
    param_2[-1] = uVar2;
    uVar11 = param_1[2];
    uVar2 = param_1[3];
    if (uVar11 <= uVar2) {
      return true;
    }
    param_1[2] = uVar2;
    param_1[3] = uVar11;
  }
  uVar11 = param_1[1];
  if (uVar11 <= uVar2) {
    return true;
  }
  param_1[1] = uVar2;
  param_1[2] = uVar11;
LAB_1091873c8:
  uVar11 = *param_1;
  if (uVar11 <= uVar2) {
    return true;
  }
  *param_1 = uVar2;
  param_1[1] = uVar11;
  return true;
}



/* Entry: 1091873dc; end: 1091874bb;  */

void FUN_1091873dc(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1091873dc(*param_1);
    FUN_1091873dc(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 1091874bc; end: 1091875af;  */

long * FUN_1091874bc(long *param_1,double *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  
  plVar9 = (long *)param_1[1];
  if ((plVar9 != (long *)0x0) && (plVar3 = param_1 + 3, *plVar3 != 0)) {
    FUN_10917845c();
    uVar5 = (long)plVar9 - 1;
    if (((ulong)plVar9 & uVar5) == 0) {
      plVar6 = (long *)((ulong)plVar3 & uVar5);
    }
    else {
      plVar6 = plVar3;
      if (plVar9 <= plVar3) {
        uVar1 = 0;
        uVar8 = (uint)plVar9;
        if (uVar8 != 0) {
          uVar1 = (uint)plVar3 / uVar8;
        }
        plVar6 = (long *)(ulong)((uint)plVar3 - uVar1 * uVar8);
      }
    }
    plVar4 = *(long **)(*param_1 + (long)plVar6 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      do {
        plVar7 = (long *)plVar4[1];
        if (plVar7 == plVar3) {
          if ((((double)plVar4[2] == *param_2) && ((double)plVar4[3] == param_2[1])) &&
             ((double)plVar4[4] == param_2[2])) {
            return plVar4;
          }
        }
        else {
          if (((ulong)plVar9 & uVar5) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar5);
          }
          else if (plVar9 <= plVar7) {
            uVar2 = 0;
            if (plVar9 != (long *)0x0) {
              uVar2 = (ulong)plVar7 / (ulong)plVar9;
            }
            plVar7 = (long *)((long)plVar7 - uVar2 * (long)plVar9);
          }
          if (plVar7 != plVar6) {
            return (long *)0x0;
          }
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  return (long *)0x0;
}



/* Entry: 1091875b0; end: 10918762b;  */

void FUN_1091875b0(long param_1,undefined8 param_2)

{
  FUN_10918762c(param_1,param_2,*(undefined8 *)(param_1 + 8),(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10918762c; end: 10918769b;  */

long * FUN_10918762c(undefined8 param_1,double *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  if (param_3 != (long *)0x0) {
    plVar2 = param_4;
    do {
      param_4 = param_3;
      if (*param_2 <= (double)param_4[4]) {
        plVar3 = param_4;
        if ((double)param_4[4] <= *param_2) {
          if ((double)param_4[5] < param_2[1]) goto LAB_10918764c;
          if ((double)param_4[5] <= param_2[1]) {
            lVar1 = 8;
            if (param_2[2] <= (double)param_4[6]) {
              lVar1 = 0;
              plVar2 = param_4;
            }
            plVar3 = (long *)((long)param_4 + lVar1);
            param_4 = plVar2;
          }
        }
      }
      else {
LAB_10918764c:
        plVar3 = param_4 + 1;
        param_4 = plVar2;
      }
      plVar2 = param_4;
      param_3 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  return param_4;
}



/* Entry: 10918769c; end: 109187aa3;  */

undefined1  [16] FUN_10918769c(long *param_1,double *param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  uint uVar18;
  long *plVar19;
  long *unaff_x26;
  undefined1 auVar20 [16];
  
  plVar11 = param_1 + 3;
  FUN_10917845c();
  plVar19 = (long *)param_1[1];
  if (plVar19 != (long *)0x0) {
    uVar6 = (long)plVar19 - 1;
    uVar18 = (uint)plVar19;
    if (((ulong)plVar19 & uVar6) == 0) {
      unaff_x26 = (long *)((ulong)(uVar18 - 1) & (ulong)plVar11);
    }
    else {
      unaff_x26 = plVar11;
      if (plVar19 <= plVar11) {
        uVar1 = 0;
        if (uVar18 != 0) {
          uVar1 = (uint)plVar11 / uVar18;
        }
        unaff_x26 = (long *)(ulong)((uint)plVar11 - uVar1 * uVar18);
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if ((puVar8 != (undefined8 *)0x0) && (plVar16 = (long *)*puVar8, plVar16 != (long *)0x0)) {
      do {
        plVar9 = (long *)plVar16[1];
        if (plVar9 == plVar11) {
          if ((((double)plVar16[2] == *param_2) && ((double)plVar16[3] == param_2[1])) &&
             ((double)plVar16[4] == param_2[2])) {
            uVar5 = 0;
            goto LAB_109187a24;
          }
        }
        else {
          if (((ulong)plVar19 & uVar6) == 0) {
            plVar9 = (long *)((ulong)plVar9 & uVar6);
          }
          else if (plVar19 <= plVar9) {
            uVar2 = 0;
            if (plVar19 != (long *)0x0) {
              uVar2 = (ulong)plVar9 / (ulong)plVar19;
            }
            plVar9 = (long *)((long)plVar9 - uVar2 * (long)plVar19);
          }
          if (plVar9 != unaff_x26) break;
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
  }
  plVar9 = param_1 + 2;
  plVar16 = (long *)0x40;
  __Znwm();
  *plVar16 = 0;
  plVar16[1] = (long)plVar11;
  plVar7 = (long *)*param_4;
  plVar16[2] = *plVar7;
  plVar16[3] = plVar7[1];
  plVar16[4] = plVar7[2];
  plVar16[7] = 0;
  plVar16[6] = 0;
  plVar16[5] = (long)(plVar16 + 6);
  if ((plVar19 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar19)) goto LAB_1091879b4;
  uVar6 = 1;
  if ((long *)0x2 < plVar19) {
    uVar6 = (ulong)(((ulong)plVar19 & (long)plVar19 - 1U) != 0);
  }
  plVar7 = (long *)(uVar6 | (long)plVar19 << 1);
  plVar10 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar7 <= plVar10) {
    plVar7 = plVar10;
  }
  if ((long)plVar7 - 1U == 0) {
    plVar7 = (long *)0x2;
  }
  else if (((ulong)plVar7 & (long)plVar7 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar19 = (long *)param_1[1];
  }
  if (plVar19 < plVar7) {
LAB_109187848:
    if ((ulong)plVar7 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x109187a8c);
      (*pcVar3)();
    }
    lVar17 = (long)plVar7 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar17;
    if (lVar4 != 0) {
      __ZdlPv();
      lVar17 = *param_1;
    }
    param_1[1] = (long)plVar7;
    _bzero(lVar17,(long)plVar7 << 3);
    plVar10 = (long *)param_1[2];
    plVar19 = plVar7;
    if (plVar10 != (long *)0x0) {
      plVar12 = (long *)plVar10[1];
      uVar6 = (long)plVar7 - 1;
      if (((ulong)plVar7 & uVar6) == 0) {
        plVar12 = (long *)((ulong)plVar12 & uVar6);
      }
      else if (plVar7 <= plVar12) {
        uVar2 = 0;
        if (plVar7 != (long *)0x0) {
          uVar2 = (ulong)plVar12 / (ulong)plVar7;
        }
        plVar12 = (long *)((long)plVar12 - uVar2 * (long)plVar7);
      }
      *(long **)(lVar17 + (long)plVar12 * 8) = plVar9;
      plVar13 = (long *)*plVar10;
      while (plVar13 != (long *)0x0) {
        plVar15 = (long *)plVar13[1];
        if (((ulong)plVar7 & uVar6) == 0) {
          plVar15 = (long *)((ulong)plVar15 & uVar6);
        }
        else if (plVar7 <= plVar15) {
          uVar2 = 0;
          if (plVar7 != (long *)0x0) {
            uVar2 = (ulong)plVar15 / (ulong)plVar7;
          }
          plVar15 = (long *)((long)plVar15 - uVar2 * (long)plVar7);
        }
        plVar14 = plVar13;
        if (plVar15 != plVar12) {
          if (*(long *)(lVar17 + (long)plVar15 * 8) == 0) {
            *(long **)(lVar17 + (long)plVar15 * 8) = plVar10;
            plVar12 = plVar15;
          }
          else {
            *plVar10 = *plVar13;
            *plVar13 = **(undefined8 **)(lVar17 + (long)plVar15 * 8);
            **(long **)(lVar17 + (long)plVar15 * 8) = (long)plVar13;
            plVar14 = plVar10;
          }
        }
        plVar10 = plVar14;
        plVar13 = (long *)*plVar14;
      }
    }
  }
  else if (plVar7 < plVar19) {
    plVar10 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar19 < (long *)0x3) || (((ulong)plVar19 & (long)plVar19 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar10) {
      plVar10 = (long *)(1L << (-LZCOUNT((long)plVar10 + -1) & 0x3fU));
    }
    if (plVar7 <= plVar10) {
      plVar7 = plVar10;
    }
    if (plVar7 < plVar19) {
      if (plVar7 != (long *)0x0) goto LAB_109187848;
      lVar17 = *param_1;
      *param_1 = 0;
      if (lVar17 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar19 = (long *)0x0;
    }
    else {
      plVar19 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
    unaff_x26 = (long *)((ulong)((int)plVar19 - 1) & (ulong)plVar11);
  }
  else {
    unaff_x26 = plVar11;
    if (plVar19 <= plVar11) {
      uVar6 = 0;
      if (plVar19 != (long *)0x0) {
        uVar6 = (ulong)plVar11 / (ulong)plVar19;
      }
      unaff_x26 = (long *)((long)plVar11 - uVar6 * (long)plVar19);
    }
  }
LAB_1091879b4:
  lVar17 = *param_1;
  plVar11 = *(long **)(lVar17 + (long)unaff_x26 * 8);
  if (plVar11 == (long *)0x0) {
    *plVar16 = *plVar9;
    *plVar9 = (long)plVar16;
    *(long **)(lVar17 + (long)unaff_x26 * 8) = plVar9;
    if (*plVar16 != 0) {
      plVar11 = *(long **)(*plVar16 + 8);
      if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
        plVar11 = (long *)((ulong)plVar11 & (long)plVar19 - 1U);
      }
      else if (plVar19 <= plVar11) {
        uVar6 = 0;
        if (plVar19 != (long *)0x0) {
          uVar6 = (ulong)plVar11 / (ulong)plVar19;
        }
        plVar11 = (long *)((long)plVar11 - uVar6 * (long)plVar19);
      }
      *(long **)(lVar17 + (long)plVar11 * 8) = plVar16;
    }
  }
  else {
    *plVar16 = *plVar11;
    *plVar11 = (long)plVar16;
  }
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_109187a24:
  auVar20._8_8_ = uVar5;
  auVar20._0_8_ = plVar16;
  return auVar20;
}



/* Entry: 109187aa4; end: 109187ad3;  */

void FUN_109187aa4(ulong param_1,long param_2)

{
  if ((param_1 & 1) != 0) {
    func_0x000109184684(param_2 + 0x28,*(undefined8 *)(param_2 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 109187ad4; end: 109187b5b;  */

long FUN_109187ad4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  lVar1 = 0x38;
  __Znwm();
  uVar2 = *param_2;
  *(undefined8 *)(lVar1 + 0x28) = param_2[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined8 *)(lVar1 + 0x30) = param_2[2];
  uVar2 = param_1;
  FUN_109187b5c(param_1,&uStack_38);
  func_0x0001091846c4(param_1,uStack_38,uVar2,lVar1);
  return lVar1;
}



/* Entry: 109187b5c; end: 109187bdb;  */

long * FUN_109187b5c(long param_1,long *param_2,double *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = plVar2;
  if ((long *)*plVar2 != (long *)0x0) {
    plVar1 = (long *)*plVar2;
    do {
      while ((plVar2 = plVar1, *param_3 < (double)plVar2[4] ||
             ((*param_3 <= (double)plVar2[4] &&
              ((param_3[1] < (double)plVar2[5] ||
               ((param_3[1] <= (double)plVar2[5] && (param_3[2] < (double)plVar2[6]))))))))) {
        plVar3 = plVar2;
        plVar1 = (long *)*plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_109187bd0;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar3 = plVar2 + 1;
  }
LAB_109187bd0:
  *param_2 = (long)plVar2;
  return plVar3;
}



/* Entry: 109187bdc; end: 109187c57;  */

void FUN_109187bdc(long param_1,undefined8 param_2)

{
  FUN_109187c58(param_1,param_2,*(undefined8 *)(param_1 + 8),(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 109187c58; end: 109187cc7;  */

long * FUN_109187c58(undefined8 param_1,double *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  if (param_3 != (long *)0x0) {
    plVar2 = param_4;
    do {
      param_4 = param_3;
      if (*param_2 <= (double)param_4[4]) {
        plVar3 = param_4;
        if ((double)param_4[4] <= *param_2) {
          if ((double)param_4[5] < param_2[1]) goto LAB_109187c78;
          if ((double)param_4[5] <= param_2[1]) {
            lVar1 = 8;
            if (param_2[2] <= (double)param_4[6]) {
              lVar1 = 0;
              plVar2 = param_4;
            }
            plVar3 = (long *)((long)param_4 + lVar1);
            param_4 = plVar2;
          }
        }
      }
      else {
LAB_109187c78:
        plVar3 = param_4 + 1;
        param_4 = plVar2;
      }
      plVar2 = param_4;
      param_3 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  return param_4;
}



/* Entry: 109187cc8; end: 109187dc7;  */

long * FUN_109187cc8(long *param_1,long *param_2)

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
      bVar2 = plVar3 != (long *)*plVar4;
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
  func_0x00010530d618(param_1[1]);
  return plVar4;
}



/* Entry: 109187dc8; end: 109187ee3;  */

void FUN_109187dc8(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_109187e7c;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_109187e7c;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_109187e7c:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 109187ee4; end: 10918811f;  */

long * FUN_109187ee4(long *param_1,double *param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  long *unaff_x25;
  
  plVar7 = param_1 + 3;
  FUN_10917845c();
  plVar9 = (long *)param_1[1];
  if (plVar9 != (long *)0x0) {
    uVar2 = (long)plVar9 - 1;
    uVar8 = (uint)plVar9;
    if (((ulong)plVar9 & uVar2) == 0) {
      unaff_x25 = (long *)((ulong)(uVar8 - 1) & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar9 <= plVar7) {
        uVar1 = 0;
        if (uVar8 != 0) {
          uVar1 = (uint)plVar7 / uVar8;
        }
        unaff_x25 = (long *)(ulong)((uint)plVar7 - uVar1 * uVar8);
      }
    }
    plVar4 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      do {
        plVar5 = (long *)plVar4[1];
        if (plVar5 == plVar7) {
          if ((((double)plVar4[2] == *param_2) && ((double)plVar4[3] == param_2[1])) &&
             ((double)plVar4[4] == param_2[2])) {
            return plVar4;
          }
        }
        else {
          if (((ulong)plVar9 & uVar2) == 0) {
            plVar5 = (long *)((ulong)plVar5 & uVar2);
          }
          else if (plVar9 <= plVar5) {
            uVar6 = 0;
            if (plVar9 != (long *)0x0) {
              uVar6 = (ulong)plVar5 / (ulong)plVar9;
            }
            plVar5 = (long *)((long)plVar5 - uVar6 * (long)plVar9);
          }
          if (plVar5 != unaff_x25) break;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  plVar4 = (long *)0x30;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = (long)plVar7;
  lVar3 = *param_3;
  plVar4[3] = param_3[1];
  plVar4[2] = lVar3;
  plVar4[4] = param_3[2];
  *(undefined4 *)(plVar4 + 5) = 0;
  if ((plVar9 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar9 < (float)(param_1[3] + 1))
     ) {
    uVar2 = 1;
    if ((long *)0x2 < plVar9) {
      uVar2 = (ulong)(((ulong)plVar9 & (long)plVar9 - 1U) != 0);
    }
    uVar2 = uVar2 | (long)plVar9 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar6) {
      uVar2 = uVar6;
    }
    FUN_10918057c(param_1,uVar2);
    plVar9 = (long *)param_1[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x25 = (long *)((ulong)((int)plVar9 - 1) & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar9 <= plVar7) {
        uVar2 = 0;
        if (plVar9 != (long *)0x0) {
          uVar2 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar2 * (long)plVar9);
      }
    }
  }
  lVar3 = *param_1;
  plVar7 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar4 = *plVar7;
    *plVar7 = (long)plVar4;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar7;
    if (*plVar4 != 0) {
      plVar7 = *(long **)(*plVar4 + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar7) {
        uVar2 = 0;
        if (plVar9 != (long *)0x0) {
          uVar2 = (ulong)plVar7 / (ulong)plVar9;
        }
        plVar7 = (long *)((long)plVar7 - uVar2 * (long)plVar9);
      }
      *(long **)(lVar3 + (long)plVar7 * 8) = plVar4;
    }
  }
  else {
    *plVar4 = *plVar7;
    *plVar7 = (long)plVar4;
  }
  param_1[3] = param_1[3] + 1;
  return plVar4;
}



/* Entry: 109188120; end: 109188167;  */

long * FUN_109188120(long *param_1)

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



/* Entry: 109188168; end: 10918853b;  */

void FUN_109188168(long *param_1,double *param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  long *unaff_x24;
  
  plVar8 = param_1 + 3;
  FUN_10917845c();
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    uVar5 = (long)plVar15 - 1;
    uVar14 = (uint)plVar15;
    if (((ulong)plVar15 & uVar5) == 0) {
      unaff_x24 = (long *)((ulong)(uVar14 - 1) & (ulong)plVar8);
    }
    else {
      unaff_x24 = plVar8;
      if (plVar15 <= plVar8) {
        uVar1 = 0;
        if (uVar14 != 0) {
          uVar1 = (uint)plVar8 / uVar14;
        }
        unaff_x24 = (long *)(ulong)((uint)plVar8 - uVar1 * uVar14);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)unaff_x24 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        plVar9 = (long *)plVar6[1];
        if (plVar9 == plVar8) {
          if ((((double)plVar6[2] == *param_2) && ((double)plVar6[3] == param_2[1])) &&
             ((double)plVar6[4] == param_2[2])) {
            return;
          }
        }
        else {
          if (((ulong)plVar15 & uVar5) == 0) {
            plVar9 = (long *)((ulong)plVar9 & uVar5);
          }
          else if (plVar15 <= plVar9) {
            uVar2 = 0;
            if (plVar15 != (long *)0x0) {
              uVar2 = (ulong)plVar9 / (ulong)plVar15;
            }
            plVar9 = (long *)((long)plVar9 - uVar2 * (long)plVar15);
          }
          if (plVar9 != unaff_x24) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  plVar6 = (long *)0x28;
  __Znwm();
  *plVar6 = 0;
  plVar6[1] = (long)plVar8;
  lVar16 = *param_3;
  plVar6[3] = param_3[1];
  plVar6[2] = lVar16;
  plVar6[4] = param_3[2];
  if ((plVar15 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar15)) goto LAB_109188460;
  uVar5 = 1;
  if ((long *)0x2 < plVar15) {
    uVar5 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
  }
  plVar9 = (long *)(uVar5 | (long)plVar15 << 1);
  plVar7 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar9 <= plVar7) {
    plVar9 = plVar7;
  }
  if ((long)plVar9 - 1U == 0) {
    plVar9 = (long *)0x2;
  }
  else if (((ulong)plVar9 & (long)plVar9 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar15 = (long *)param_1[1];
  }
  if (plVar15 < plVar9) {
LAB_1091882f0:
    if ((ulong)plVar9 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x109188528);
      (*pcVar3)();
    }
    lVar16 = (long)plVar9 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar16;
    if (lVar4 != 0) {
      __ZdlPv();
      lVar16 = *param_1;
    }
    param_1[1] = (long)plVar9;
    _bzero(lVar16,(long)plVar9 << 3);
    plVar7 = (long *)param_1[2];
    plVar15 = plVar9;
    if (plVar7 != (long *)0x0) {
      plVar10 = (long *)plVar7[1];
      uVar5 = (long)plVar9 - 1;
      if (((ulong)plVar9 & uVar5) == 0) {
        plVar10 = (long *)((ulong)plVar10 & uVar5);
      }
      else if (plVar9 <= plVar10) {
        uVar2 = 0;
        if (plVar9 != (long *)0x0) {
          uVar2 = (ulong)plVar10 / (ulong)plVar9;
        }
        plVar10 = (long *)((long)plVar10 - uVar2 * (long)plVar9);
      }
      *(long **)(lVar16 + (long)plVar10 * 8) = param_1 + 2;
      plVar11 = (long *)*plVar7;
      while (plVar11 != (long *)0x0) {
        plVar13 = (long *)plVar11[1];
        if (((ulong)plVar9 & uVar5) == 0) {
          plVar13 = (long *)((ulong)plVar13 & uVar5);
        }
        else if (plVar9 <= plVar13) {
          uVar2 = 0;
          if (plVar9 != (long *)0x0) {
            uVar2 = (ulong)plVar13 / (ulong)plVar9;
          }
          plVar13 = (long *)((long)plVar13 - uVar2 * (long)plVar9);
        }
        plVar12 = plVar11;
        if (plVar13 != plVar10) {
          if (*(long *)(lVar16 + (long)plVar13 * 8) == 0) {
            *(long **)(lVar16 + (long)plVar13 * 8) = plVar7;
            plVar10 = plVar13;
          }
          else {
            *plVar7 = *plVar11;
            *plVar11 = **(undefined8 **)(lVar16 + (long)plVar13 * 8);
            **(long **)(lVar16 + (long)plVar13 * 8) = (long)plVar11;
            plVar12 = plVar7;
          }
        }
        plVar7 = plVar12;
        plVar11 = (long *)*plVar12;
      }
    }
  }
  else if (plVar9 < plVar15) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar9 <= plVar7) {
      plVar9 = plVar7;
    }
    if (plVar9 < plVar15) {
      if (plVar9 != (long *)0x0) goto LAB_1091882f0;
      lVar16 = *param_1;
      *param_1 = 0;
      if (lVar16 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
    unaff_x24 = (long *)((ulong)((int)plVar15 - 1) & (ulong)plVar8);
  }
  else {
    unaff_x24 = plVar8;
    if (plVar15 <= plVar8) {
      uVar5 = 0;
      if (plVar15 != (long *)0x0) {
        uVar5 = (ulong)plVar8 / (ulong)plVar15;
      }
      unaff_x24 = (long *)((long)plVar8 - uVar5 * (long)plVar15);
    }
  }
LAB_109188460:
  lVar16 = *param_1;
  plVar8 = *(long **)(lVar16 + (long)unaff_x24 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar6 = *plVar8;
    *plVar8 = (long)plVar6;
    *(long **)(lVar16 + (long)unaff_x24 * 8) = plVar8;
    if (*plVar6 != 0) {
      plVar8 = *(long **)(*plVar6 + 8);
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar15 - 1U);
      }
      else if (plVar15 <= plVar8) {
        uVar5 = 0;
        if (plVar15 != (long *)0x0) {
          uVar5 = (ulong)plVar8 / (ulong)plVar15;
        }
        plVar8 = (long *)((long)plVar8 - uVar5 * (long)plVar15);
      }
      *(long **)(lVar16 + (long)plVar8 * 8) = plVar6;
    }
  }
  else {
    *plVar6 = *plVar8;
    *plVar8 = (long)plVar6;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10918853c; end: 10918862f;  */

long * FUN_10918853c(long *param_1,double *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  
  plVar9 = (long *)param_1[1];
  if ((plVar9 != (long *)0x0) && (plVar3 = param_1 + 3, *plVar3 != 0)) {
    FUN_10917845c();
    uVar5 = (long)plVar9 - 1;
    if (((ulong)plVar9 & uVar5) == 0) {
      plVar6 = (long *)((ulong)plVar3 & uVar5);
    }
    else {
      plVar6 = plVar3;
      if (plVar9 <= plVar3) {
        uVar1 = 0;
        uVar8 = (uint)plVar9;
        if (uVar8 != 0) {
          uVar1 = (uint)plVar3 / uVar8;
        }
        plVar6 = (long *)(ulong)((uint)plVar3 - uVar1 * uVar8);
      }
    }
    plVar4 = *(long **)(*param_1 + (long)plVar6 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      do {
        plVar7 = (long *)plVar4[1];
        if (plVar3 == plVar7) {
          if ((((double)plVar4[2] == *param_2) && ((double)plVar4[3] == param_2[1])) &&
             ((double)plVar4[4] == param_2[2])) {
            return plVar4;
          }
        }
        else {
          if (((ulong)plVar9 & uVar5) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar5);
          }
          else if (plVar9 <= plVar7) {
            uVar2 = 0;
            if (plVar9 != (long *)0x0) {
              uVar2 = (ulong)plVar7 / (ulong)plVar9;
            }
            plVar7 = (long *)((long)plVar7 - uVar2 * (long)plVar9);
          }
          if (plVar7 != plVar6) {
            return (long *)0x0;
          }
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  return (long *)0x0;
}



/* Entry: 109188630; end: 109188677;  */

long * FUN_109188630(long *param_1)

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



/* Entry: 109188678; end: 109188683;  */

void FUN_109188678(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109188680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))();
  return;
}



/* Entry: 109188684; end: 10918871b;  */

long FUN_109188684(undefined8 *param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  uVar9 = (ulong)*(char *)((long)param_1 + 0x17);
  puVar8 = param_1;
  if ((long)uVar9 < 0) {
    puVar8 = (undefined8 *)*param_1;
    uVar9 = param_1[1];
  }
  pcVar2 = param_2;
  _strlen();
  if (param_3 < uVar9 && pcVar2 != (char *)0x0) {
    pcVar1 = (char *)((long)puVar8 + uVar9);
    pcVar4 = (char *)((long)puVar8 + param_3);
    do {
      pcVar6 = pcVar2;
      pcVar7 = param_2;
      do {
        pcVar5 = pcVar4;
        if (*pcVar4 == *pcVar7) goto LAB_109188700;
        pcVar6 = pcVar6 + -1;
        pcVar7 = pcVar7 + 1;
      } while (pcVar6 != (char *)0x0);
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar1;
    } while (pcVar4 != pcVar1);
LAB_109188700:
    lVar3 = (long)pcVar5 - (long)puVar8;
    if (pcVar5 == pcVar1) {
      lVar3 = -1;
    }
  }
  else {
    lVar3 = -1;
  }
  return lVar3;
}



/* Entry: 10918871c; end: 1091887af;  */

undefined8 * FUN_10918871c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 3,*param_3,param_3[1]);
  }
  else {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[5] = param_3[2];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  return param_1;
}



/* Entry: 1091887b0; end: 10918891f;  */

void FUN_1091887b0(undefined8 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined1 auStack_61 [9];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[3] == 0) {
    FUN_1091797b4(auStack_61,&UNK_10f55a501,0x1e);
    func_0x000107c2808c(PTR___ZNSt3__14cerrE_110346738,&UNK_10f55a541,0x1e);
    FUN_109179870(auStack_61);
  }
  iVar14 = (int)param_1[1] - (int)*param_1;
  iVar1 = param_2 + iVar14;
  if (param_2 + iVar14 <= iVar14 * 2) {
    iVar1 = iVar14 * 2;
  }
  puVar3 = (undefined1 *)(long)iVar1;
  __Znam();
  puVar13 = (undefined1 *)param_1[3];
  puVar4 = puVar3;
  lVar9 = (long)iVar14;
  _memcpy();
  if (puVar13 != (undefined1 *)0x113829bb9 && puVar13 != (undefined1 *)0x0) {
    __ZdaPv();
    puVar4 = puVar13;
  }
  param_1[2] = puVar3 + iVar1;
  param_1[3] = puVar3;
  *param_1 = puVar3;
  param_1[1] = puVar3 + iVar14;
  if (iVar1 - iVar14 < param_2) {
    FUN_1091797b4(auStack_61,&UNK_10f55a501,0x30);
    lVar9 = 0x1a;
    func_0x000107c2808c(PTR___ZNSt3__14cerrE_110346738,&UNK_10f55a560);
    puVar4 = auStack_61;
    FUN_109179870();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_109179870(auStack_61);
  __Unwind_Resume(puVar4);
  if (((int)*(uint *)(lVar9 + 4) < 1) ||
     (*(long *)(*(long *)(lVar9 + 0x48) + (ulong)*(uint *)(lVar9 + 4) * 8 + -8) != 1)) {
    _CGColorSpaceCreateDeviceRGB();
  }
  else {
    _CGColorSpaceCreateDeviceGray();
  }
  uVar2 = *(uint *)(lVar9 + 4);
  uVar11 = (ulong)uVar2;
  if ((int)uVar2 < 1) {
    uVar12 = 0;
  }
  else {
    uVar12 = 3;
    if (*(long *)(*(long *)(lVar9 + 0x48) + uVar11 * 8 + -8) != 4) {
      uVar12 = 0;
    }
    if (2 < uVar2) {
      do {
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  _CGDataProviderCreateWithCFData();
  lVar7 = (long)*(int *)(lVar9 + 0xc);
  if ((int)*(uint *)(lVar9 + 4) < 1) {
    lVar10 = 0;
  }
  else {
    lVar10 = (*(undefined8 **)(lVar9 + 0x48))[(ulong)*(uint *)(lVar9 + 4) - 1] << 3;
  }
  _CGImageCreate(lVar7,(long)*(int *)(lVar9 + 8),8,lVar10,**(undefined8 **)(lVar9 + 0x48),puVar4,
                 uVar12,puVar6,0,0,0);
  puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  _CGImageRelease(lVar7);
  _CGDataProviderRelease(puVar6);
  _CGColorSpaceRelease(puVar4);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 109188920; end: 109188acb;  */

void FUN_109188920(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  
  if (((int)*(uint *)(param_3 + 4) < 1) ||
     (*(long *)(*(long *)(param_3 + 0x48) + (ulong)*(uint *)(param_3 + 4) * 8 + -8) != 1)) {
    _CGColorSpaceCreateDeviceRGB();
  }
  else {
    _CGColorSpaceCreateDeviceGray();
  }
  uVar1 = *(uint *)(param_3 + 4);
  uVar7 = (ulong)uVar1;
  if ((int)uVar1 < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = 3;
    if (*(long *)(*(long *)(param_3 + 0x48) + uVar7 * 8 + -8) != 4) {
      uVar8 = 0;
    }
    if (2 < uVar1) {
      do {
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _CGDataProviderCreateWithCFData();
  lVar4 = (long)*(int *)(param_3 + 0xc);
  if ((int)*(uint *)(param_3 + 4) < 1) {
    lVar6 = 0;
  }
  else {
    lVar6 = (*(undefined8 **)(param_3 + 0x48))[(ulong)*(uint *)(param_3 + 4) - 1] << 3;
  }
  _CGImageCreate(lVar4,(long)*(int *)(param_3 + 8),8,lVar6,**(undefined8 **)(param_3 + 0x48),param_1
                 ,uVar8,puVar3,0,0,0);
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  _CGImageRelease(lVar4);
  _CGDataProviderRelease(puVar3);
  _CGColorSpaceRelease(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 109188acc; end: 109188d13;  */

void FUN_109188acc(undefined4 *param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 *param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  double dVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  uVar1 = param_6;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  _CGImageGetDataProvider();
  _CGDataProviderGetInfo();
  if (uVar1 == 0) {
    *param_1 = 0x42ff0000;
    *(undefined8 *)(param_1 + 3) = 0;
    *(undefined8 *)(param_1 + 1) = 0;
    *(undefined8 *)(param_1 + 7) = 0;
    *(undefined8 *)(param_1 + 5) = 0;
    *(undefined8 *)(param_1 + 0xb) = 0;
    *(undefined8 *)(param_1 + 9) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
    *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
    *(undefined8 *)(param_1 + 0x16) = 0;
  }
  else {
    func_0x00010c23d0a0(param_6);
    func_0x00010c23d0a0(param_6);
    *param_1 = 0x42ff0000;
    *(undefined8 *)(param_1 + 3) = 0;
    *(undefined8 *)(param_1 + 1) = 0;
    *(undefined8 *)(param_1 + 7) = 0;
    *(undefined8 *)(param_1 + 5) = 0;
    *(undefined8 *)(param_1 + 0xb) = 0;
    *(undefined8 *)(param_1 + 9) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
    *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
    *(undefined8 *)(param_1 + 0x16) = 0;
    uStack_90 = CONCAT44((int)param_2,(int)param_3);
    FUN_109a83fd0(param_1,2,&uStack_90,0x18);
    func_0x00010bde9c00(param_4);
    uVar2 = *(undefined8 *)(param_1 + 4);
    _CGBitmapContextCreate
              (uVar2,(long)param_2,(long)param_3,8,**(undefined8 **)(param_1 + 0x12),param_4,5);
    uStack_88 = param_7[1];
    uStack_90 = *param_7;
    uStack_78 = param_7[3];
    uStack_80 = param_7[2];
    uStack_68 = param_7[5];
    uStack_70 = param_7[4];
    _CGContextConcatCTM();
    uVar1 = param_6;
    func_0x00010bfe8380();
    uVar3 = param_6;
    if ((uVar1 < 8) && ((1L << (uVar1 & 0x3f) & 0xccU) != 0)) {
      _objc_retainAutorelease(param_6);
      func_0x00010bdc1020(param_6);
      dVar4 = param_3;
      param_3 = param_2;
    }
    else {
      _objc_retainAutorelease(param_6);
      func_0x00010bdc1020(param_6);
      dVar4 = param_2;
    }
    _CGContextDrawImage(0,0,dVar4,param_3,uVar2,uVar3);
    _CGContextRelease(uVar2);
    _CGColorSpaceRelease(param_4);
  }
  uVar1 = param_6;
  _objc_release(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010567aa40(param_1);
  _objc_release(param_6);
  __Unwind_Resume(uVar1);
  func_0x00010c271ac0(PTR__OBJC_CLASS___UIImage_1126aea68);
  return;
}



/* Entry: 109188d14; end: 109188d57;  */

void FUN_109188d14(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_40 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c271ac0(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_1,&uStack_40);
  return;
}



/* Entry: 109188d58; end: 10918906f;  */

int * FUN_109188d58(undefined8 *param_1,double param_2,double param_3,int *param_4,
                   undefined8 param_5,int *param_6)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int iStack_b0;
  uint uStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  int *piStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int iStack_50;
  int iStack_4c;
  long lStack_48;
  
  piVar5 = &iStack_b0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar6 = param_4;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  _CGImageGetColorSpace();
  _CGColorSpaceGetModel();
  if ((int)piVar6 == 0) {
    *(undefined4 *)param_1 = 0x42ff0000;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined8 *)((long)param_1 + 4) = 0;
    *(undefined8 *)((long)param_1 + 0x1c) = 0;
    *(undefined8 *)((long)param_1 + 0x14) = 0;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[10] = 0;
    param_1[8] = param_1 + 1;
    param_1[9] = param_1 + 10;
    param_1[0xb] = 0;
    goto LAB_109189018;
  }
  func_0x00010c23d0a0(param_4);
  func_0x00010c23d0a0(param_4);
  iStack_50 = (int)param_3;
  iStack_b0 = 0x42ff0000;
  iStack_a4 = 0;
  uStack_a0 = 0;
  uStack_ac = 0;
  iStack_a8 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_84 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  param_6 = &iStack_50;
  piStack_70 = (int *)((ulong)&iStack_b0 | 8);
  puStack_68 = &uStack_60;
  iStack_4c = (int)param_2;
  FUN_109a83fd0(&iStack_b0,2,param_6,0x18);
  _objc_retainAutorelease(param_4);
  func_0x00010bdc1020();
  _CGImageGetDataProvider();
  _CGDataProviderCopyData();
  piVar4 = param_4;
  _CFDataGetLength();
  if ((int)uStack_ac < 3) {
    lVar9 = (long)iStack_a4 * (long)iStack_a8;
    if (0 < (int)uStack_ac) goto LAB_109188e94;
    lVar7 = 0;
  }
  else {
    lVar9 = 1;
    piVar6 = piStack_70;
    uVar10 = (ulong)uStack_ac;
    do {
      lVar9 = lVar9 * *piVar6;
      uVar10 = uVar10 - 1;
      piVar6 = piVar6 + 1;
    } while (uVar10 != 0);
LAB_109188e94:
    lVar7 = puStack_68[(ulong)uStack_ac - 1];
  }
  if (piVar4 == (int *)(lVar7 * lVar9)) {
    piVar6 = param_4;
    _CFDataGetBytePtr(param_4);
    _memcpy(CONCAT44(uStack_9c,uStack_a0),piVar6);
    _CFRelease();
    puVar8 = (undefined8 *)((ulong)&iStack_b0 | 4);
    param_1[1] = CONCAT44(iStack_a4,iStack_a8);
    *param_1 = CONCAT44(uStack_ac,iStack_b0);
    param_1[3] = CONCAT44(uStack_94,uStack_98);
    param_1[2] = CONCAT44(uStack_9c,uStack_a0);
    param_1[10] = 0;
    param_1[5] = CONCAT44(uStack_84,uStack_88);
    param_1[4] = CONCAT44(uStack_8c,uStack_90);
    param_1[7] = lStack_78;
    param_1[6] = CONCAT44(uStack_7c,uStack_80);
    param_1[8] = param_1 + 1;
    param_1[9] = param_1 + 10;
    param_1[0xb] = 0;
    if ((int)uStack_ac < 3) {
      param_1[10] = *puStack_68;
      param_1[0xb] = puStack_68[1];
    }
    else {
      param_1[8] = piStack_70;
      param_1[9] = puStack_68;
      piStack_70 = (int *)((ulong)&iStack_b0 | 8);
      puStack_68 = &uStack_60;
    }
    iStack_b0 = 0x42ff0000;
    puVar8[1] = 0;
    *puVar8 = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    *(undefined8 *)((long)puVar8 + 0x34) = 0;
    *(undefined8 *)((long)puVar8 + 0x2c) = 0;
    piVar6 = param_4;
    param_6 = piVar4;
  }
  else {
    _CFRelease();
    piVar6 = param_4;
    if (lStack_78 != 0) {
      piVar4 = (int *)(lStack_78 + 0x14);
      do {
        iVar1 = *piVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar3) {
          *piVar4 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        func_0x000109a848d4();
        piVar6 = piVar5;
      }
    }
    if ((int)uStack_ac < 1) {
      bVar3 = false;
    }
    else {
      lVar9 = 0;
      do {
        piStack_70[lVar9] = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)uStack_ac);
      bVar3 = 0 < (int)uStack_ac;
    }
    *(undefined4 *)param_1 = 0x42ff0000;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined8 *)((long)param_1 + 4) = 0;
    *(undefined8 *)((long)param_1 + 0x1c) = 0;
    *(undefined8 *)((long)param_1 + 0x14) = 0;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[10] = 0;
    param_1[8] = param_1 + 1;
    param_1[9] = param_1 + 10;
    param_1[0xb] = 0;
    lStack_78 = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    if (bVar3) {
      lVar9 = 0;
      do {
        piStack_70[lVar9] = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)uStack_ac);
    }
  }
  if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
    piVar6 = (int *)puStack_68[-1];
    _free();
  }
LAB_109189018:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return piVar6;
  }
  ___stack_chk_fail();
  func_0x00010567aa40(&iStack_b0);
  __Unwind_Resume();
  _objc_retain(param_6);
  piVar5 = param_6;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  _CGImageGetColorSpace();
  piVar4 = piVar5;
  _CGColorSpaceGetModel();
  if ((int)piVar4 - 5U < 2) {
    _CGColorSpaceGetBaseColorSpace();
  }
  _CGColorSpaceGetModel(piVar5);
  func_0x00010be3efe0();
  if ((int)piVar6 == 0) {
    if (piVar5 != (int *)0x0) {
      _CFRetain(piVar5);
    }
  }
  else {
    _CGColorSpaceCreateDeviceRGB();
    piVar5 = piVar6;
  }
  _objc_release(param_6);
  return piVar5;
}



/* Entry: 109189070; end: 109189123;  */

long FUN_109189070(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  _CGImageGetColorSpace();
  lVar2 = lVar1;
  _CGColorSpaceGetModel();
  if ((int)lVar2 - 5U < 2) {
    _CGColorSpaceGetBaseColorSpace();
  }
  lVar2 = lVar1;
  _CGColorSpaceGetModel(lVar1);
  func_0x00010be3efe0(param_1,param_2,lVar2);
  if ((int)param_1 == 0) {
    if (lVar1 != 0) {
      _CFRetain(lVar1);
    }
  }
  else {
    _CGColorSpaceCreateDeviceRGB();
    lVar1 = param_1;
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 109189124; end: 10918912f;  */

bool FUN_109189124(undefined8 param_1,undefined8 param_2,uint param_3)

{
  return (param_3 & 0xfffffffd) == 0;
}



/* Entry: 109189130; end: 10918915b; +[SCGrapheneUnlockableGeoFilterMetric geofilterSponsoredPreparation] */

void FUN_109189130(void)

{
  _objc_alloc(PTR_PTR_1126bcff8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10918915c; end: 109189187; +[SCGrapheneUnlockableGeoFilterMetric filterFontNameNil] */

void FUN_10918915c(void)

{
  _objc_alloc(PTR_PTR_1126bcff8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109189188; end: 1091891b3; +[SCGrapheneUnlockableGeoFilterMetric filterResourceDataNil] */

void FUN_109189188(void)

{
  _objc_alloc(PTR_PTR_1126bcff8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091891b4; end: 109189253; -[SCGrapheneUnlockableGeoFilterMetric description] */

void FUN_1091891b4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110f2b158;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110f2b158,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_112700a28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 109189254; end: 1091893ab; -[SCGrapheneRegistry unlockableGeoFilterGraphene] */

void FUN_109189254(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1091892dc;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam0000000113732808 != -1) {
    func_0x000107c27d9c(0x113732808,&puStack_48);
  }
  uVar1 = uRam0000000113732800;
  _objc_retain(uRam0000000113732800);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091893ac; end: 10918941f;  */

void FUN_1091893ac(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c3094c(param_1,auStack_28,auStack_30);
  if ((int)param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126dd938;
    _objc_alloc_init(PTR_PTR_1126dd938);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109189420; end: 109189493;  */

void FUN_109189420(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c3094c(param_1,auStack_28,auStack_30);
  if ((int)param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109189494; end: 109189507;  */

void FUN_109189494(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c3094c(param_1,auStack_28,auStack_30);
  if ((int)param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126dd940;
    _objc_alloc_init(PTR_PTR_1126dd940);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109189508; end: 1091895a3;  */

void FUN_109189508(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfe2ee0(param_1);
  uVar2 = param_1;
  func_0x00010c0b5940(param_1);
  func_0x000107c30948(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1091895a4; end: 10918963f;  */

void FUN_1091895a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfe2ee0(param_1);
  uVar2 = param_1;
  func_0x00010c0b5940(param_1);
  func_0x000107c30948(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 109189640; end: 1091896a7; +[SCAuraPbUUID descriptor] */

void FUN_109189640(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113732810 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bf1840,
                        &PTR____CFConstantStringClassReference_110e7e6d8,&PTR_DAT_1132cb780,
                        &PTR_DAT_1132cb798,2,0x18,0x1c);
    puRam0000000113732810 = puVar1;
  }
  return;
}



/* Entry: 1091896a8; end: 10918970f; +[SCCPUUID descriptor] */

void FUN_1091896a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113732818 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bf18e0,
                        &PTR____CFConstantStringClassReference_110e7e6d8,&PTR_DAT_1132cb7d8,
                        &PTR_DAT_1132cb7f0,2,0x18,0x1c);
    puRam0000000113732818 = puVar1;
  }
  return;
}



/* Entry: 109189710; end: 109189777; +[SCSagaPbUUID descriptor] */

void FUN_109189710(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113732820 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bf1980,
                        &PTR____CFConstantStringClassReference_110e7e6d8,&PTR_DAT_1132cb830,
                        &PTR_DAT_1132cb848,2,0x18,0x1c);
    puRam0000000113732820 = puVar1;
  }
  return;
}



/* Entry: 109189778; end: 10918a553;  */

/* WARNING: Possible PIC construction at 0x000109189ec8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109189a78) */
/* WARNING: Removing unreachable block (ram,0x000109189a7c) */
/* WARNING: Removing unreachable block (ram,0x000109189a84) */
/* WARNING: Removing unreachable block (ram,0x000109189a8c) */
/* WARNING: Removing unreachable block (ram,0x000109189a90) */
/* WARNING: Removing unreachable block (ram,0x000109189ab0) */
/* WARNING: Removing unreachable block (ram,0x000109189ab8) */
/* WARNING: Removing unreachable block (ram,0x000109189acc) */
/* WARNING: Removing unreachable block (ram,0x000109189adc) */

void FUN_109189778(uint *param_1,long param_2,uint *param_3,uint *param_4,undefined8 param_5,
                  ulong param_6)

{
  undefined1 *puVar1;
  undefined8 ****ppppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  undefined1 auVar10 [8];
  undefined8 ***pppuVar11;
  ulong uVar12;
  undefined8 ****ppppuVar13;
  code *pcVar14;
  int iVar15;
  undefined4 *puVar16;
  uint *puVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  int *piVar25;
  uint *unaff_x19;
  ulong unaff_x20;
  ulong uVar26;
  uint uVar27;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_3e0 [8];
  undefined8 *puStack_3d8;
  int iStack_3cc;
  int iStack_3c8;
  uint uStack_3c4;
  uint *puStack_3c0;
  uint uStack_3b4;
  int iStack_3b0;
  int iStack_3ac;
  uint uStack_3a8;
  uint uStack_3a4;
  undefined8 uStack_3a0;
  undefined1 *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long lStack_368;
  long lStack_360;
  undefined1 *puStack_358;
  undefined1 auStack_350 [16];
  undefined4 uStack_340;
  int iStack_33c;
  undefined8 uStack_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  long lStack_308;
  ulong uStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  uint uStack_2e0;
  uint uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  long lStack_2a8;
  undefined4 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  int iStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  long lStack_248;
  ulong uStack_240;
  undefined8 ***pppuStack_238;
  undefined8 **ppuStack_230;
  undefined8 uStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  long alStack_1c8 [2];
  undefined8 ***apppuStack_1b8 [27];
  undefined1 auStack_e0 [96];
  undefined8 uStack_80;
  long lStack_78;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = *(long *)(param_4 + 4);
  uVar18 = param_4[1];
  uVar19 = (ulong)uVar18;
  if (lVar21 == 0) {
LAB_1091898c0:
    *param_1 = *param_4;
    param_1[1] = uVar18;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_4 + 2);
    *(long *)(param_1 + 4) = lVar21;
    uVar29 = *(undefined8 *)(param_4 + 6);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)(param_1 + 6) = uVar29;
    uVar29 = *(undefined8 *)(param_4 + 10);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_4 + 0xc);
    *(undefined8 *)(param_1 + 10) = uVar29;
    lVar21 = *(long *)(param_4 + 0xe);
    *(long *)(param_1 + 0xe) = lVar21;
    *(uint **)(param_1 + 0x10) = param_1 + 2;
    puVar17 = param_1 + 0x14;
    puVar17[0] = 0;
    puVar17[1] = 0;
    *(uint **)(param_1 + 0x12) = puVar17;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    if (lVar21 != 0) {
      piVar25 = (int *)(lVar21 + 0x14);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar25,0x10);
        if (bVar8) {
          *piVar25 = *piVar25 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      uVar18 = param_4[1];
    }
    if ((int)uVar18 < 3) {
      puVar23 = *(undefined8 **)(param_4 + 0x12);
      puVar22 = *(undefined8 **)(param_1 + 0x12);
      *puVar22 = *puVar23;
      puVar22[1] = puVar23[1];
LAB_10918a218:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
        return;
      }
    }
    else {
      param_1[1] = 0;
      puVar17 = param_1;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
SUB_109a84868:
        *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        FUN_109a844cc(puVar17,param_4[1],0,0,0);
        if (0 < (int)puVar17[1]) {
          lVar21 = 0;
          lVar24 = *(long *)(param_4 + 0x10);
          lVar4 = *(long *)(param_4 + 0x12);
          lVar3 = *(long *)(puVar17 + 0x10);
          lVar5 = *(long *)(puVar17 + 0x12);
          do {
            *(undefined4 *)(lVar3 + lVar21 * 4) = *(undefined4 *)(lVar24 + lVar21 * 4);
            *(undefined8 *)(lVar5 + lVar21 * 8) = *(undefined8 *)(lVar4 + lVar21 * 8);
            lVar21 = lVar21 + 1;
          } while (lVar21 < (int)puVar17[1]);
        }
        return;
      }
    }
    ___stack_chk_fail();
  }
  else {
    if ((int)uVar18 < 3) {
      lVar24 = (long)(int)param_4[3] * (long)(int)param_4[2];
    }
    else {
      lVar24 = 1;
      piVar25 = *(int **)(param_4 + 0x10);
      do {
        lVar24 = lVar24 * *piVar25;
        uVar19 = uVar19 - 1;
        piVar25 = piVar25 + 1;
      } while (uVar19 != 0);
    }
    if (lVar24 == 0) goto LAB_1091898c0;
    if ((*param_3 & 0xfff) == 0x10) {
      puStack_3c0 = param_3;
      if ((*param_4 & 0xfff | 8) != 0x18) {
        puVar16 = (undefined4 *)0x34;
        func_0x000107c2ae8c();
        *puVar16 = 1;
        auStack_200 = (undefined1  [8])(puVar16 + 1);
        auStack_1f8._0_4_ = 0x2c;
        auStack_1f8._4_4_ = 0;
        *(undefined8 *)(puVar16 + 3) = 0x5f5643203d3d2029;
        *(undefined8 *)(puVar16 + 1) = 0x28657079742e6762;
        *(undefined1 *)(puVar16 + 0xc) = 0;
        *(undefined8 *)(puVar16 + 7) = 0x28657079742e6762;
        *(undefined8 *)(puVar16 + 5) = 0x207c7c2033435538;
        *(undefined8 *)(puVar16 + 10) = 0x344355385f564320;
        *(undefined8 *)(puVar16 + 8) = 0x3d3d202928657079;
        FUN_109ac3188(0xffffff29,auStack_200,&UNK_10f55a67f,&UNK_10f55a63f,0x81);
        goto LAB_10918a314;
      }
      uStack_280 = 0x42ff0000;
      uVar19 = (ulong)&uStack_280 | 8;
      uStack_274 = 0;
      uStack_270 = 0;
      iStack_27c = 0;
      uStack_278 = 0;
      uStack_264 = 0;
      uStack_260 = 0;
      uStack_26c = 0;
      uStack_268 = 0;
      uStack_254 = 0;
      uStack_25c = 0;
      uStack_258 = 0;
      lStack_248 = 0;
      uStack_250 = 0;
      uStack_24c = 0;
      ppuStack_230 = (undefined8 ***)0x0;
      uStack_228 = 0;
      uVar18 = param_4[2];
      unaff_x20 = (ulong)uVar18;
      uStack_3b4 = param_4[3];
      fVar28 = (float)(int)uVar18;
      fVar30 = (float)(int)uStack_3b4;
      fVar31 = (float)(int)param_3[2];
      fVar32 = (float)(int)param_3[3];
      uStack_240 = uVar19;
      pppuStack_238 = &ppuStack_230;
      if (fVar31 / fVar32 <= fVar28 / fVar30) {
        fVar32 = (fVar30 * fVar31) / fVar32;
        if (fVar32 <= fVar28) {
          fVar28 = fVar32;
        }
        uVar27 = (uint)fVar28;
        uStack_3c4 = uVar27;
        if ((param_6 & 1) == 0) {
          iStack_3c8 = 0;
          if (-2 < (int)(uVar18 - uVar27)) {
            iStack_3c8 = (int)(uVar18 - uVar27) / 2;
          }
        }
        else {
          iVar15 = *(int *)(param_2 + 0xcc);
          _srand();
          _rand();
          iVar9 = param_4[2] - uVar27;
          iVar6 = 0;
          if (iVar9 != 0) {
            iVar6 = iVar15 / iVar9;
          }
          iStack_3c8 = iVar15 - iVar6 * iVar9;
        }
        iStack_3cc = 0;
      }
      else {
        fVar31 = (fVar28 * fVar32) / fVar31;
        if (fVar31 <= fVar30) {
          fVar30 = fVar31;
        }
        uVar27 = (uint)fVar30;
        if ((param_6 & 1) == 0) {
          iStack_3cc = 0;
          if (-2 < (int)(uStack_3b4 - uVar27)) {
            iStack_3cc = (int)(uStack_3b4 - uVar27) / 2;
          }
        }
        else {
          iVar15 = *(int *)(param_2 + 0xcc);
          _srand();
          _rand();
          iVar9 = param_4[3] - uVar27;
          iVar6 = 0;
          if (iVar9 != 0) {
            iVar6 = iVar15 / iVar9;
          }
          iStack_3cc = iVar15 - iVar6 * iVar9;
        }
        iStack_3c8 = 0;
        uStack_3c4 = uVar18;
        uStack_3b4 = uVar27;
      }
      uStack_2e0 = 0x42ff0000;
      puStack_2a0 = &uStack_2d8;
      uStack_2d4 = 0;
      uStack_2d0 = 0;
      uStack_2dc = 0;
      uStack_2d8 = 0;
      uStack_2c4 = 0;
      uStack_2c0 = 0;
      uStack_2cc = 0;
      uStack_2c8 = 0;
      uStack_2b4 = 0;
      uStack_2bc = 0;
      uStack_2b8 = 0;
      lStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_2ac = 0;
      puStack_3d8 = &uStack_290;
      uStack_290 = 0;
      uStack_288 = 0;
      puStack_298 = puStack_3d8;
      if ((*param_4 & 0xfff) == 0x10) {
        puVar17 = puStack_3c0;
        if (&uStack_2e0 != param_4) {
          if (*(long *)(param_4 + 0xe) != 0) {
            piVar25 = (int *)(*(long *)(param_4 + 0xe) + 0x14);
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar25,0x10);
              if (bVar8) {
                *piVar25 = *piVar25 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          lStack_2a8 = 0;
          uStack_2c8 = 0;
          uStack_2c4 = 0;
          uStack_2d0 = 0;
          uStack_2cc = 0;
          uStack_2b8 = 0;
          uStack_2b4 = 0;
          uStack_2c0 = 0;
          uStack_2bc = 0;
          uStack_2e0 = *param_4;
          if (2 < (int)param_4[1]) {
            puVar17 = &uStack_2e0;
            unaff_x30 = 0x109189ecc;
            register0x00000008 = (BADSPACEBASE *)auStack_3e0;
            unaff_x19 = param_1;
            unaff_x29 = puVar1;
            goto SUB_109a84868;
          }
          uStack_2d8 = (undefined4)*(undefined8 *)(param_4 + 2);
          uStack_2d4 = (undefined4)((ulong)*(undefined8 *)(param_4 + 2) >> 0x20);
          uStack_290 = **(undefined8 **)(param_4 + 0x12);
          uStack_288 = (*(undefined8 **)(param_4 + 0x12))[1];
          uStack_2c8 = (undefined4)*(undefined8 *)(param_4 + 6);
          uStack_2c4 = (undefined4)((ulong)*(undefined8 *)(param_4 + 6) >> 0x20);
          uStack_2d0 = (undefined4)*(undefined8 *)(param_4 + 4);
          uStack_2cc = (undefined4)((ulong)*(undefined8 *)(param_4 + 4) >> 0x20);
          uStack_2b8 = (undefined4)*(undefined8 *)(param_4 + 10);
          uStack_2b4 = (undefined4)((ulong)*(undefined8 *)(param_4 + 10) >> 0x20);
          uStack_2c0 = (undefined4)*(undefined8 *)(param_4 + 8);
          uStack_2bc = (undefined4)((ulong)*(undefined8 *)(param_4 + 8) >> 0x20);
          lStack_2a8 = *(long *)(param_4 + 0xe);
          uStack_2b0 = (undefined4)*(undefined8 *)(param_4 + 0xc);
          uStack_2ac = (undefined4)((ulong)*(undefined8 *)(param_4 + 0xc) >> 0x20);
          uStack_2dc = param_4[1];
        }
      }
      else {
        auStack_1f8._0_4_ = SUB84(param_4,0);
        auStack_1f8._4_4_ = (undefined4)((ulong)param_4 >> 0x20);
        uStack_1f0 = 0;
        uStack_1ec = 0;
        auStack_200._0_4_ = 0x1010000;
        uStack_340 = 0x2010000;
        uStack_330 = 0;
        uStack_32c = 0;
        uStack_338 = &uStack_2e0;
        FUN_109ac9fc8(auStack_200,&uStack_340,1,0);
        lVar21 = 0;
        do {
          *(undefined4 *)(auStack_200 + lVar21) = 0x42ff0000;
          *(undefined8 *)(auStack_1f8 + lVar21 + 4) = 0;
          *(undefined8 *)(auStack_200 + lVar21 + 4) = 0;
          *(undefined8 *)((long)&uStack_1e4 + lVar21) = 0;
          *(undefined8 *)((long)&uStack_1ec + lVar21) = 0;
          *(undefined8 *)((long)&uStack_1d4 + lVar21) = 0;
          *(undefined8 *)((long)&uStack_1dc + lVar21) = 0;
          puVar23 = (undefined8 *)((long)apppuStack_1b8 + lVar21 + 8);
          *puVar23 = 0;
          *(undefined8 *)((long)alStack_1c8 + lVar21) = 0;
          *(undefined8 *)((long)&uStack_1d0 + lVar21) = 0;
          *(undefined1 **)((long)alStack_1c8 + lVar21 + 8) = auStack_1f8 + lVar21;
          *(undefined8 **)((long)apppuStack_1b8 + lVar21) = puVar23;
          lVar24 = lVar21 + 0x60;
          *(undefined8 *)((long)apppuStack_1b8 + lVar21 + 0x10) = 0;
          lVar21 = lVar24;
        } while (lVar24 != 0x180);
        FUN_109a3d9cc(param_4,auStack_200);
        iStack_3b0 = iStack_3cc;
        iStack_3ac = iStack_3c8;
        uStack_3a8 = uStack_3b4;
        uStack_3a4 = uStack_3c4;
        FUN_109a852c8(&uStack_3a0,auStack_e0,&iStack_3b0);
        uStack_340 = 0x42ff0000;
        uStack_210 = &uStack_340;
        uStack_338._4_4_ = 0;
        uStack_330 = 0;
        iStack_33c = 0;
        uStack_338._0_4_ = 0;
        uVar26 = (ulong)uStack_210 | 8;
        uStack_324 = 0;
        uStack_320 = 0;
        uStack_32c = 0;
        uStack_328 = 0;
        uStack_314 = 0;
        uStack_31c = 0;
        uStack_318 = 0;
        lStack_308 = 0;
        uStack_310 = 0;
        uStack_30c = 0;
        uStack_2f0 = 0;
        uStack_2e8 = 0;
        uStack_218 = CONCAT44(uStack_218._4_4_,0x2010000);
        uStack_208 = 0;
        uStack_300 = uVar26;
        puStack_2f8 = &uStack_2f0;
        FUN_109a479a0(&uStack_3a0,&uStack_218);
        puVar1 = (undefined1 *)(param_2 + 0xd8);
        if (*(long *)(param_2 + 0x110) != 0) {
          piVar25 = (int *)(*(long *)(param_2 + 0x110) + 0x14);
          do {
            iVar15 = *piVar25;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar25,0x10);
            if (bVar8) {
              *piVar25 = iVar15 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar15 + -1 == 0) {
            func_0x000109a848d4(puVar1);
          }
        }
        *(undefined8 *)(param_2 + 0x110) = 0;
        *(undefined8 *)(param_2 + 0xf0) = 0;
        *(undefined8 *)(param_2 + 0xe8) = 0;
        *(undefined8 *)(param_2 + 0x100) = 0;
        *(undefined8 *)(param_2 + 0xf8) = 0;
        if (0 < *(int *)(param_2 + 0xdc)) {
          lVar21 = 0;
          lVar24 = *(long *)(param_2 + 0x118);
          do {
            *(undefined4 *)(lVar24 + lVar21 * 4) = 0;
            lVar21 = lVar21 + 1;
          } while (lVar21 < *(int *)(param_2 + 0xdc));
        }
        *(ulong *)(param_2 + 0xe0) = CONCAT44(uStack_338._4_4_,(undefined4)uStack_338);
        *(ulong *)(param_2 + 0xd8) = CONCAT44(iStack_33c,uStack_340);
        *(ulong *)(param_2 + 0xf0) = CONCAT44(uStack_324,uStack_328);
        *(ulong *)(param_2 + 0xe8) = CONCAT44(uStack_32c,uStack_330);
        *(ulong *)(param_2 + 0x100) = CONCAT44(uStack_314,uStack_318);
        *(ulong *)(param_2 + 0xf8) = CONCAT44(uStack_31c,uStack_320);
        *(long *)(param_2 + 0x110) = lStack_308;
        *(ulong *)(param_2 + 0x108) = CONCAT44(uStack_30c,uStack_310);
        puVar22 = *(undefined8 **)(param_2 + 0x120);
        puVar23 = (undefined8 *)(param_2 + 0x128);
        if (puVar22 != puVar23) {
          if (puVar22 != (undefined8 *)0x0) {
            _free(puVar22[-1]);
          }
          *(long *)(param_2 + 0x118) = param_2 + 0xe0;
          *(undefined8 **)(param_2 + 0x120) = puVar23;
          puVar22 = puVar23;
        }
        puVar23 = (undefined8 *)((ulong)&uStack_340 | 4);
        if (iStack_33c < 3) {
          *puVar22 = *puStack_2f8;
          puVar22[1] = puStack_2f8[1];
          uStack_340 = 0x42ff0000;
          puVar23[1] = 0;
          *puVar23 = 0;
          puVar23[3] = 0;
          puVar23[2] = 0;
          puVar23[5] = 0;
          puVar23[4] = 0;
          *(undefined8 *)((long)puVar23 + 0x34) = 0;
          *(undefined8 *)((long)puVar23 + 0x2c) = 0;
          if (puStack_2f8 != &uStack_2f0) {
            _free(puStack_2f8[-1]);
          }
        }
        else {
          *(ulong *)(param_2 + 0x118) = uStack_300;
          *(undefined8 **)(param_2 + 0x120) = puStack_2f8;
          uStack_340 = 0x42ff0000;
          puVar23[1] = 0;
          *puVar23 = 0;
          puVar23[3] = 0;
          puVar23[2] = 0;
          puVar23[5] = 0;
          puVar23[4] = 0;
          *(undefined8 *)((long)puVar23 + 0x34) = 0;
          *(undefined8 *)((long)puVar23 + 0x2c) = 0;
          uStack_300 = uVar26;
          puStack_2f8 = &uStack_2f0;
        }
        puVar17 = puStack_3c0;
        if (lStack_368 != 0) {
          piVar25 = (int *)(lStack_368 + 0x14);
          do {
            iVar15 = *piVar25;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar25,0x10);
            if (bVar8) {
              *piVar25 = iVar15 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar15 + -1 == 0) {
            func_0x000109a848d4(&uStack_3a0);
          }
        }
        lStack_368 = 0;
        uStack_388 = 0;
        uStack_390 = 0;
        uStack_378 = 0;
        uStack_380 = 0;
        if (0 < uStack_3a0._4_4_) {
          lVar21 = 0;
          do {
            *(undefined4 *)(lStack_360 + lVar21 * 4) = 0;
            lVar21 = lVar21 + 1;
          } while (lVar21 < uStack_3a0._4_4_);
        }
        if (puStack_358 != auStack_350 && puStack_358 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_358 + -8));
        }
        uStack_330 = 0;
        uStack_32c = 0;
        uStack_340 = 0x1010000;
        uStack_3a0 = CONCAT44(uStack_3a0._4_4_,0x2010000);
        uStack_390 = 0;
        uStack_218 = NEON_rev64(*(undefined8 *)(puVar17 + 2),4);
        puStack_398 = puVar1;
        uStack_338 = (uint *)puVar1;
        FUN_109b0f718(0,0,&uStack_340,&uStack_3a0,&uStack_218,3);
        puVar23 = &uStack_80;
        do {
          puVar22 = puVar23 + -0xc;
          if (puVar23[-5] != 0) {
            piVar25 = (int *)(puVar23[-5] + 0x14);
            do {
              iVar15 = *piVar25;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar25,0x10);
              if (bVar8) {
                *piVar25 = iVar15 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar15 + -1 == 0) {
              func_0x000109a848d4(puVar22);
            }
          }
          puVar23[-5] = 0;
          puVar23[-9] = 0;
          puVar23[-10] = 0;
          puVar23[-7] = 0;
          puVar23[-8] = 0;
          if (0 < *(int *)((long)puVar23 + -0x5c)) {
            lVar21 = 0;
            lVar24 = puVar23[-4];
            do {
              *(undefined4 *)(lVar24 + lVar21 * 4) = 0;
              lVar21 = lVar21 + 1;
            } while (lVar21 < *(int *)((long)puVar23 + -0x5c));
          }
          puVar20 = (undefined8 *)puVar23[-3];
          if (puVar20 != puVar23 + -2 && puVar20 != (undefined8 *)0x0) {
            _free(puVar20[-1]);
          }
          puVar23 = puVar22;
        } while (puVar22 != (undefined8 *)auStack_200);
      }
      uStack_218 = CONCAT44(iStack_3c8,iStack_3cc);
      uStack_210 = (undefined4 *)CONCAT44(uStack_3c4,uStack_3b4);
      FUN_109a852c8(&uStack_340,&uStack_2e0,&uStack_218);
      auStack_200._0_4_ = 0x42ff0000;
      auStack_1f8._4_4_ = 0;
      uStack_1f0 = 0;
      auStack_200._4_4_ = 0;
      auStack_1f8._0_4_ = 0;
      uVar26 = (ulong)auStack_200 | 8;
      uStack_1e4 = 0;
      uStack_1e0 = 0;
      uStack_1ec = 0;
      uStack_1e8 = 0;
      uStack_1d4 = 0;
      uStack_1dc = 0;
      uStack_1d8 = 0;
      alStack_1c8[0] = 0;
      uStack_1d0 = 0;
      uStack_1cc = 0;
      ppppuVar2 = apppuStack_1b8 + 1;
      apppuStack_1b8[2] = (undefined8 ***)0x0;
      apppuStack_1b8[1] = (undefined8 ***)0x0;
      uStack_3a0 = CONCAT44(uStack_3a0._4_4_,0x2010000);
      uStack_390 = 0;
      puStack_398 = auStack_200;
      alStack_1c8[1] = uVar26;
      apppuStack_1b8[0] = ppppuVar2;
      FUN_109a479a0(&uStack_340,&uStack_3a0);
      if (lStack_248 != 0) {
        piVar25 = (int *)(lStack_248 + 0x14);
        do {
          iVar15 = *piVar25;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar8) {
            *piVar25 = iVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar15 + -1 == 0) {
          func_0x000109a848d4(&uStack_280);
        }
      }
      if (0 < iStack_27c) {
        lVar21 = 0;
        do {
          *(undefined4 *)(uStack_240 + lVar21 * 4) = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < iStack_27c);
      }
      uStack_278 = auStack_1f8._0_4_;
      uStack_274 = auStack_1f8._4_4_;
      uStack_280 = auStack_200._0_4_;
      iStack_27c = auStack_200._4_4_;
      uStack_268 = uStack_1e8;
      uStack_264 = uStack_1e4;
      uStack_270 = uStack_1f0;
      uStack_26c = uStack_1ec;
      uStack_258 = uStack_1d8;
      uStack_254 = uStack_1d4;
      uStack_260 = uStack_1e0;
      uStack_25c = uStack_1dc;
      lStack_248 = alStack_1c8[0];
      uStack_250 = uStack_1d0;
      uStack_24c = uStack_1cc;
      uVar12 = uStack_240;
      ppppuVar13 = (undefined8 ****)pppuStack_238;
      if ((pppuStack_238 != &ppuStack_230) &&
         (uVar12 = uVar19, ppppuVar13 = (undefined8 ****)&ppuStack_230,
         (undefined8 ****)pppuStack_238 != (undefined8 ****)0x0)) {
        _free(pppuStack_238[-1]);
      }
      pppuStack_238 = ppppuVar13;
      uStack_240 = uVar12;
      pppuVar11 = apppuStack_1b8[0];
      puVar23 = (undefined8 *)((ulong)auStack_200 | 4);
      if ((int)auStack_200._4_4_ < 3) {
        *pppuStack_238 = *apppuStack_1b8[0];
        pppuStack_238[1] = pppuVar11[1];
        auStack_200._0_4_ = 0x42ff0000;
        puVar23[1] = 0;
        *puVar23 = 0;
        puVar23[3] = 0;
        puVar23[2] = 0;
        puVar23[5] = 0;
        puVar23[4] = 0;
        *(undefined8 *)((long)puVar23 + 0x34) = 0;
        *(undefined8 *)((long)puVar23 + 0x2c) = 0;
        if ((undefined8 ****)pppuVar11 != ppppuVar2) {
          _free(pppuVar11[-1]);
        }
      }
      else {
        uStack_240 = alStack_1c8[1];
        pppuStack_238 = apppuStack_1b8[0];
        auStack_200._0_4_ = 0x42ff0000;
        puVar23[1] = 0;
        *puVar23 = 0;
        puVar23[3] = 0;
        puVar23[2] = 0;
        puVar23[5] = 0;
        puVar23[4] = 0;
        *(undefined8 *)((long)puVar23 + 0x34) = 0;
        *(undefined8 *)((long)puVar23 + 0x2c) = 0;
        alStack_1c8[1] = uVar26;
        apppuStack_1b8[0] = ppppuVar2;
      }
      if (lStack_308 != 0) {
        piVar25 = (int *)(lStack_308 + 0x14);
        do {
          iVar15 = *piVar25;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar8) {
            *piVar25 = iVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar15 + -1 == 0) {
          func_0x000109a848d4(&uStack_340);
        }
      }
      lStack_308 = 0;
      uStack_328 = 0;
      uStack_324 = 0;
      uStack_330 = 0;
      uStack_32c = 0;
      uStack_318 = 0;
      uStack_314 = 0;
      uStack_320 = 0;
      uStack_31c = 0;
      if (0 < iStack_33c) {
        lVar21 = 0;
        do {
          *(undefined4 *)(uStack_300 + lVar21 * 4) = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < iStack_33c);
      }
      if (puStack_2f8 != &uStack_2f0 && puStack_2f8 != (undefined8 *)0x0) {
        _free(puStack_2f8[-1]);
      }
      auStack_200._0_4_ = 0x1010000;
      auStack_1f8 = (undefined1  [8])&uStack_280;
      uStack_1f0 = 0;
      uStack_1ec = 0;
      uStack_340 = 0x2010000;
      uStack_330 = 0;
      uStack_32c = 0;
      uStack_3a0 = NEON_rev64(*(undefined8 *)(puVar17 + 2),4);
      uStack_338 = (uint *)auStack_1f8;
      FUN_109b0f718(0,0,auStack_200,&uStack_340,&uStack_3a0,3);
      puVar23 = puStack_3d8;
      auVar10 = auStack_1f8;
      if (lStack_2a8 != 0) {
        piVar25 = (int *)(lStack_2a8 + 0x14);
        do {
          iVar15 = *piVar25;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar8) {
            *piVar25 = iVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar15 + -1 == 0) {
          func_0x000109a848d4(&uStack_2e0);
          auVar10 = auStack_1f8;
        }
      }
      lStack_2a8 = 0;
      uStack_2c8 = 0;
      uStack_2c4 = 0;
      uStack_2d0 = 0;
      uStack_2cc = 0;
      uStack_2b8 = 0;
      uStack_2b4 = 0;
      uStack_2c0 = 0;
      uStack_2bc = 0;
      if (0 < (int)uStack_2dc) {
        lVar21 = 0;
        do {
          puStack_2a0[lVar21] = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < (int)uStack_2dc);
      }
      auStack_1f8 = auVar10;
      if (puStack_298 != puVar23 && puStack_298 != (undefined8 *)0x0) {
        _free(puStack_298[-1]);
      }
      puVar23 = (undefined8 *)((ulong)&uStack_280 | 4);
      *(ulong *)(param_1 + 2) = CONCAT44(uStack_274,uStack_278);
      *(ulong *)param_1 = CONCAT44(iStack_27c,uStack_280);
      *(ulong *)(param_1 + 6) = CONCAT44(uStack_264,uStack_268);
      *(ulong *)(param_1 + 4) = CONCAT44(uStack_26c,uStack_270);
      puVar17 = param_1 + 0x14;
      puVar17[0] = 0;
      puVar17[1] = 0;
      *(ulong *)(param_1 + 10) = CONCAT44(uStack_254,uStack_258);
      *(ulong *)(param_1 + 8) = CONCAT44(uStack_25c,uStack_260);
      *(long *)(param_1 + 0xe) = lStack_248;
      *(ulong *)(param_1 + 0xc) = CONCAT44(uStack_24c,uStack_250);
      *(uint **)(param_1 + 0x10) = param_1 + 2;
      *(uint **)(param_1 + 0x12) = puVar17;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      if (iStack_27c < 3) {
        *(undefined8 ***)(param_1 + 0x14) = *pppuStack_238;
        *(undefined8 ***)(param_1 + 0x16) = pppuStack_238[1];
      }
      else {
        *(ulong *)(param_1 + 0x10) = uStack_240;
        *(undefined8 ****)(param_1 + 0x12) = pppuStack_238;
        uStack_240 = uVar19;
        pppuStack_238 = &ppuStack_230;
      }
      uStack_280 = 0x42ff0000;
      puVar23[1] = 0;
      *puVar23 = 0;
      puVar23[3] = 0;
      puVar23[2] = 0;
      puVar23[5] = 0;
      puVar23[4] = 0;
      *(undefined8 *)((long)puVar23 + 0x34) = 0;
      *(undefined8 *)((long)puVar23 + 0x2c) = 0;
      if (pppuStack_238 != &ppuStack_230 && (undefined8 ****)pppuStack_238 != (undefined8 ****)0x0)
      {
        _free(pppuStack_238[-1]);
      }
      goto LAB_10918a218;
    }
  }
  puVar16 = (undefined4 *)0x1c;
  func_0x000107c2ae8c();
  *puVar16 = 1;
  auStack_200 = (undefined1  [8])(puVar16 + 1);
  auStack_1f8._0_4_ = 0x15;
  auStack_1f8._4_4_ = 0;
  *(undefined1 *)((long)puVar16 + 0x19) = 0;
  *(undefined8 *)(puVar16 + 3) = 0x5643203d3d202928;
  *(undefined8 *)(puVar16 + 1) = 0x657079742e637273;
  *(undefined8 *)((long)puVar16 + 0x11) = 0x334355385f564320;
  FUN_109ac3188(0xffffff29,auStack_200,&UNK_10f55a67f,&UNK_10f55a63f,0x80);
LAB_10918a314:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x10918a318);
  (*pcVar14)();
}



/* Entry: 10918a554; end: 10918a8fb;  */

void FUN_10918a554(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  float fVar15;
  undefined4 *apuStack_a8 [3];
  undefined4 *puStack_90;
  undefined4 *puStack_88;
  long lStack_78;
  long lStack_70;
  float *pfStack_60;
  float *pfStack_58;
  float *pfStack_48;
  float *pfStack_40;
  
  if (param_1 + 9 != param_2) {
    func_0x00010815da94();
  }
  if (param_1 + 0xc != param_3) {
    func_0x00010815da94();
  }
  lVar10 = *param_2;
  lVar12 = param_2[1];
  *(int *)(param_1 + 0xf) = (int)((ulong)(lVar12 - lVar10) >> 2);
  func_0x00010742a308(param_1,(lVar12 - lVar10) * 0x40000000 + -0x100000000 >> 0x20);
  func_0x00010742a308(param_1 + 3,(long)(int)param_1[0xf]);
  func_0x00010742a308(param_1 + 6,(long)(int)param_1[0xf] + -1);
  func_0x0001056d19c8(&pfStack_48,(long)(int)param_1[0xf] + -1);
  func_0x0001056d19c8(&pfStack_60,(long)(int)param_1[0xf] + -2);
  func_0x0001056d19c8(&lStack_78,(long)(int)param_1[0xf] + -2);
  func_0x0001056d19c8(&puStack_90,(long)(int)param_1[0xf] + -1);
  func_0x0001056d19c8(apuStack_a8,(long)(int)param_1[0xf] + -1);
  iVar1 = (int)param_1[0xf];
  uVar4 = (ulong)(iVar1 - 1U);
  if (iVar1 < 2) {
    *puStack_90 = 0;
    *apuStack_a8[0] = 0;
    *(undefined4 *)(param_1[3] + (long)(int)(iVar1 - 1U) * 4) = 0;
  }
  else {
    pfVar8 = (float *)*param_2;
    uVar7 = uVar4;
    pfVar11 = pfStack_48;
    pfVar3 = pfVar8;
    do {
      *pfVar11 = pfVar3[1] - *pfVar3;
      uVar7 = uVar7 - 1;
      pfVar11 = pfVar11 + 1;
      pfVar3 = pfVar3 + 1;
    } while (uVar7 != 0);
    uVar7 = (ulong)(iVar1 - 2U);
    if (iVar1 - 2U == 0) {
      *puStack_90 = 0;
      *apuStack_a8[0] = 0;
      lVar10 = *param_3;
    }
    else {
      lVar10 = *param_3;
      pfVar3 = (float *)(lVar10 + 8);
      lVar12 = uVar4 - 1;
      pfVar14 = pfStack_60;
      pfVar11 = pfStack_48;
      do {
        *pfVar14 = -((pfVar3[-1] - pfVar3[-2]) * (3.0 / *pfVar11)) +
                   (*pfVar3 - pfVar3[-1]) * (3.0 / pfVar11[1]);
        pfVar3 = pfVar3 + 1;
        lVar12 = lVar12 + -1;
        pfVar14 = pfVar14 + 1;
        pfVar11 = pfVar11 + 1;
      } while (lVar12 != 0);
      lVar12 = 0;
      *puStack_90 = 0;
      *apuStack_a8[0] = 0;
      do {
        pfVar3 = (float *)((long)pfVar8 + lVar12);
        pfVar11 = (float *)((long)pfStack_48 + lVar12);
        fVar15 = -(*(float *)((long)puStack_90 + lVar12) * *pfVar11) + (pfVar3[2] - *pfVar3) * 2.0;
        *(float *)(lStack_78 + lVar12) = fVar15;
        ((float *)((long)puStack_90 + lVar12))[1] = pfVar11[1] / fVar15;
        ((float *)((long)apuStack_a8[0] + lVar12))[1] =
             (*(float *)((long)pfStack_60 + lVar12) -
             *(float *)((long)apuStack_a8[0] + lVar12) * *pfVar11) / *(float *)(lStack_78 + lVar12);
        lVar12 = lVar12 + 4;
      } while (uVar4 * 4 + -4 != lVar12);
    }
    lVar12 = param_1[3];
    *(undefined4 *)(lVar12 + uVar4 * 4) = 0;
    lVar5 = *param_1;
    lVar9 = param_1[6];
    lVar2 = uVar7 * 4;
    lVar10 = lVar10 + 4;
    lVar12 = lVar12 + 4;
    lVar13 = -4;
    pfVar3 = pfStack_48;
    puVar6 = puStack_90;
    do {
      pfVar11 = (float *)(lVar12 + lVar2);
      fVar15 = (float)apuStack_a8[0][uVar7] - *pfVar11 * (float)puVar6[uVar7];
      pfVar11[-1] = fVar15;
      *(float *)(lVar5 + lVar2) =
           (*(float *)(lVar10 + lVar2) - ((float *)(lVar10 + lVar2))[-1]) / pfVar3[uVar7] -
           ((*pfVar11 + fVar15 * 2.0) * pfVar3[uVar7]) / 3.0;
      *(float *)(lVar9 + lVar2) = (*pfVar11 - pfVar11[-1]) / (pfVar3[uVar7] * 3.0);
      lVar13 = lVar13 + 4;
      lVar9 = lVar9 + -4;
      lVar5 = lVar5 + -4;
      pfVar3 = pfVar3 + -1;
      apuStack_a8[0] = apuStack_a8[0] + -1;
      lVar10 = lVar10 + -4;
      lVar12 = lVar12 + -4;
      puVar6 = puVar6 + -1;
    } while (lVar2 != lVar13);
  }
  __ZdlPv();
  if (puStack_90 != (undefined4 *)0x0) {
    puStack_88 = puStack_90;
    __ZdlPv();
  }
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
  if (pfStack_60 != (float *)0x0) {
    pfStack_58 = pfStack_60;
    __ZdlPv();
  }
  if (pfStack_48 != (float *)0x0) {
    pfStack_40 = pfStack_48;
    __ZdlPv();
  }
  return;
}



/* Entry: 10918a8fc; end: 10918a9af;  */

float FUN_10918a8fc(float param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  
  if ((int)param_2[0xf] < 3) {
    uVar3 = 0;
    lVar4 = param_2[9];
  }
  else {
    uVar3 = 0;
    uVar5 = (int)param_2[0xf] - 1;
    lVar4 = param_2[9];
    do {
      uVar2 = (uint)uVar3 + uVar5 >> 1;
      fVar7 = *(float *)(lVar4 + (ulong)uVar2 * 4);
      uVar1 = uVar2;
      if (param_1 <= fVar7) {
        uVar1 = (uint)uVar3;
      }
      uVar3 = (ulong)uVar1;
      if (param_1 <= fVar7) {
        uVar5 = uVar2;
      }
    } while (1 < (int)(uVar5 - uVar1));
  }
  fVar7 = *(float *)(param_2[0xc] + uVar3 * 4);
  fVar9 = *(float *)(*param_2 + uVar3 * 4);
  param_1 = param_1 - *(float *)(lVar4 + uVar3 * 4);
  fVar10 = *(float *)(param_2[3] + uVar3 * 4);
  dVar6 = (double)param_1;
  dVar11 = dVar6 * dVar6;
  fVar8 = *(float *)(param_2[6] + uVar3 * 4);
  _pow(dVar6,0x4008000000000000);
  return (float)((double)(fVar7 + param_1 * fVar9) + dVar11 * (double)fVar10 + dVar6 * (double)fVar8
                );
}



/* Entry: 10918a9b0; end: 10918aa87;  */

undefined8 * FUN_10918a9b0(undefined8 *param_1,int param_2,undefined1 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  puVar4 = param_1;
  FUN_10918aa8c();
  *puVar4 = &PTR_FUN_110adf0b8;
  *(undefined4 *)((long)puVar4 + 0xb4) = 0x3c;
  puVar4[0x17] = 0x3fb0a57a786c2267;
  *(undefined4 *)(puVar4 + 0x18) = 0x3ec00000;
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = param_3;
  }
  *(bool *)((long)puVar4 + 0x13c) = param_2 == 0;
  uVar2 = 1;
  if (param_2 != 2) {
    uVar2 = uVar1;
  }
  *(undefined1 *)(puVar4 + 0x16) = uVar2;
  *(undefined4 *)(puVar4 + 0x28) = 2;
  puVar4[0x29] = 0x405041999999999a;
  *(undefined4 *)(puVar4 + 0x19) = 0x3dcccccd;
  uVar3 = 0;
  _time();
  *(undefined4 *)((long)param_1 + 0xcc) = uVar3;
  *(undefined4 *)(param_1 + 0x27) = 0;
  return param_1;
}



/* Entry: 10918aa88; end: 10918aa8b;  */

undefined8 * FUN_10918aa88(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_110ade0a0;
  if (param_1[0x22] != 0) {
    piVar1 = (int *)(param_1[0x22] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x1b);
    }
  }
  param_1[0x22] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  if (0 < *(int *)((long)param_1 + 0xdc)) {
    lVar6 = 0;
    lVar8 = param_1[0x23];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)param_1 + 0xdc));
  }
  puVar7 = (undefined8 *)param_1[0x24];
  if (puVar7 != param_1 + 0x25 && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  plVar5 = (long *)param_1[0x13];
  param_1[0x13] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  if (param_1[0xe] != 0) {
    param_1[0xf] = param_1[0xe];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  return param_1;
}



/* Entry: 10918aa8c; end: 10918ab3f;  */

void FUN_10918aa8c(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  FUN_10918ed00();
  *param_1 = &PTR_FUN_110ade0a0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  param_1[4] = 0x405fc00000000000;
  param_1[3] = 0x405fc00000000000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0x405fc00000000000;
  param_1[8] = 0x800000080;
  param_1[9] = 0x3f800000;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)((long)param_1 + 0x94) = 1;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x1a) = param_3;
  *(undefined4 *)(param_1 + 0x1b) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = param_1 + 0x1c;
  param_1[0x24] = param_1 + 0x25;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  return;
}



/* Entry: 10918ab40; end: 10918dd17;  */

/* WARNING: Possible PIC construction at 0x00010918cbe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010918cb94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010918cb98) */
/* WARNING: Removing unreachable block (ram,0x00010918bebc) */
/* WARNING: Removing unreachable block (ram,0x00010918bec0) */
/* WARNING: Removing unreachable block (ram,0x00010918bec8) */
/* WARNING: Removing unreachable block (ram,0x00010918bed0) */
/* WARNING: Removing unreachable block (ram,0x00010918bed4) */
/* WARNING: Removing unreachable block (ram,0x00010918b6f4) */
/* WARNING: Removing unreachable block (ram,0x00010918b6f8) */
/* WARNING: Removing unreachable block (ram,0x00010918b700) */
/* WARNING: Removing unreachable block (ram,0x00010918b708) */
/* WARNING: Removing unreachable block (ram,0x00010918b70c) */
/* WARNING: Removing unreachable block (ram,0x00010918b72c) */
/* WARNING: Removing unreachable block (ram,0x00010918b734) */
/* WARNING: Removing unreachable block (ram,0x00010918b748) */
/* WARNING: Removing unreachable block (ram,0x00010918bef4) */
/* WARNING: Removing unreachable block (ram,0x00010918befc) */
/* WARNING: Removing unreachable block (ram,0x00010918bf10) */
/* WARNING: Removing unreachable block (ram,0x00010918bf20) */
/* WARNING: Removing unreachable block (ram,0x00010918b758) */

void FUN_10918ab40(uint *param_1,long param_2,uint *param_3,uint *param_4,ushort *param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 *puVar20;
  code *pcVar21;
  undefined4 *puVar22;
  uint uVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  long lVar28;
  long lVar29;
  uint *puVar30;
  int *piVar31;
  uint *unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar32;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined4 uVar33;
  int iVar34;
  float fVar38;
  int iVar39;
  int iVar40;
  undefined1 auVar35 [16];
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  int iVar41;
  int iVar42;
  int iVar46;
  int iVar47;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  int iVar48;
  int iVar49;
  int iVar53;
  int iVar54;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  int iVar55;
  int iVar56;
  int iVar61;
  int iVar62;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  int iVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined8 uStack_6b0;
  undefined8 *puStack_6a8;
  ushort *puStack_6a0;
  undefined8 *puStack_698;
  ulong uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  float fStack_678;
  float fStack_674;
  int iStack_670;
  int iStack_66c;
  int iStack_668;
  int iStack_664;
  int iStack_660;
  int iStack_65c;
  int iStack_658;
  int iStack_654;
  int iStack_650;
  int iStack_64c;
  int iStack_648;
  int iStack_644;
  int iStack_640;
  int iStack_63c;
  int iStack_638;
  int iStack_634;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  uint uStack_5e0;
  uint uStack_5dc;
  undefined8 uStack_5d8;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  long lStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  uint uStack_580;
  uint uStack_57c;
  uint uStack_578;
  uint uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  long lStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined4 auStack_518 [2];
  long lStack_510;
  undefined8 uStack_508;
  undefined4 auStack_500 [2];
  uint *puStack_4f8;
  undefined8 uStack_4f0;
  long *plStack_4e8;
  uint *puStack_4e0;
  undefined8 uStack_4d8;
  uint uStack_4d0;
  uint uStack_4cc;
  undefined8 uStack_4c8;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  long lStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  long lStack_468;
  long lStack_460;
  undefined8 uStack_458;
  long lStack_450;
  long lStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long lStack_430;
  undefined8 uStack_428;
  long lStack_420;
  long lStack_418;
  undefined8 uStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  long lStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long alStack_288 [3];
  undefined4 uStack_270;
  int iStack_26c;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  long lStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  long lStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  long lStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b0;
  uint *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  
  uVar18 = uStack_128._4_4_;
  uVar33 = (uint)uStack_128;
  puVar6 = &stack0xfffffffffffffff0;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar28 = *(long *)(param_4 + 4);
  uVar23 = param_4[1];
  uVar24 = (ulong)uVar23;
  if (lVar28 == 0) {
LAB_10918acc0:
    *param_1 = *param_4;
    param_1[1] = uVar23;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_4 + 2);
    *(long *)(param_1 + 4) = lVar28;
    uVar11 = *(undefined8 *)(param_4 + 6);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)(param_1 + 6) = uVar11;
    uVar11 = *(undefined8 *)(param_4 + 10);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_4 + 0xc);
    *(undefined8 *)(param_1 + 10) = uVar11;
    lVar28 = *(long *)(param_4 + 0xe);
    *(long *)(param_1 + 0xe) = lVar28;
    *(uint **)(param_1 + 0x10) = param_1 + 2;
    puVar30 = param_1 + 0x14;
    puVar30[0] = 0;
    puVar30[1] = 0;
    *(uint **)(param_1 + 0x12) = puVar30;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    if (lVar28 != 0) {
      piVar31 = (int *)(lVar28 + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar31,0x10);
        if (bVar5) {
          *piVar31 = *piVar31 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      uVar23 = param_4[1];
    }
    if ((int)uVar23 < 3) {
      puVar32 = *(undefined8 **)(param_4 + 0x12);
      puVar27 = *(undefined8 **)(param_1 + 0x12);
      *puVar27 = *puVar32;
      puVar27[1] = puVar32[1];
LAB_10918d328:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
        return;
      }
    }
    else {
      param_1[1] = 0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
SUB_109a84868:
        *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        FUN_109a844cc(param_1,param_4[1],0,0,0);
        if (0 < (int)param_1[1]) {
          lVar28 = 0;
          lVar29 = *(long *)(param_4 + 0x10);
          lVar2 = *(long *)(param_4 + 0x12);
          lVar1 = *(long *)(param_1 + 0x10);
          lVar3 = *(long *)(param_1 + 0x12);
          do {
            *(undefined4 *)(lVar1 + lVar28 * 4) = *(undefined4 *)(lVar29 + lVar28 * 4);
            *(undefined8 *)(lVar3 + lVar28 * 8) = *(undefined8 *)(lVar2 + lVar28 * 8);
            lVar28 = lVar28 + 1;
          } while (lVar28 < (int)param_1[1]);
        }
        return;
      }
    }
    ___stack_chk_fail();
  }
  else {
    if ((int)uVar23 < 3) {
      lVar29 = (long)(int)param_4[3] * (long)(int)param_4[2];
    }
    else {
      lVar29 = 1;
      piVar31 = *(int **)(param_4 + 0x10);
      do {
        lVar29 = lVar29 * *piVar31;
        uVar24 = uVar24 - 1;
        piVar31 = piVar31 + 1;
      } while (uVar24 != 0);
    }
    if (lVar29 == 0) goto LAB_10918acc0;
    if ((*param_3 & 0xfff) != 0x10) {
      puVar22 = (undefined4 *)0x1c;
      func_0x000107c2ae8c();
      *puVar22 = 1;
      uStack_3f0 = (undefined8 *)(puVar22 + 1);
      uStack_3e8._0_4_ = 0x15;
      uStack_3e8._4_4_ = 0;
      *(undefined1 *)((long)puVar22 + 0x19) = 0;
      *(undefined8 *)(puVar22 + 3) = 0x5643203d3d202928;
      *(undefined8 *)(puVar22 + 1) = 0x657079742e637273;
      *(undefined8 *)((long)puVar22 + 0x11) = 0x334355385f564320;
      FUN_109ac3188(0xffffff29,&uStack_3f0,&UNK_10f55a6e6,&UNK_10f55a6ea,0x122);
      goto LAB_10918d6a8;
    }
    if ((*param_4 & 0xfff) != 0x10) {
      puVar22 = (undefined4 *)0x1c;
      func_0x000107c2ae8c();
      *puVar22 = 1;
      uStack_3f0 = (undefined8 *)(puVar22 + 1);
      uStack_3e8._0_4_ = 0x14;
      uStack_3e8._4_4_ = 0;
      *(undefined1 *)(puVar22 + 6) = 0;
      puVar22[5] = 0x33435538;
      *(undefined8 *)(puVar22 + 3) = 0x5f5643203d3d2029;
      *(undefined8 *)(puVar22 + 1) = 0x28657079742e6762;
      FUN_109ac3188(0xffffff29,&uStack_3f0,&UNK_10f55a6e6,&UNK_10f55a6ea,0x123);
      goto LAB_10918d6a8;
    }
    if ((*param_5 & 0xfff) != 0) {
      puVar22 = (undefined4 *)0x1c;
      func_0x000107c2ae8c();
      *puVar22 = 1;
      uStack_3f0 = (undefined8 *)(puVar22 + 1);
      uStack_3e8._0_4_ = 0x16;
      uStack_3e8._4_4_ = 0;
      *(undefined1 *)((long)puVar22 + 0x1a) = 0;
      *(undefined8 *)(puVar22 + 3) = 0x43203d3d20292865;
      *(undefined8 *)(puVar22 + 1) = 0x7079742e6b73616d;
      *(undefined8 *)((long)puVar22 + 0x12) = 0x314355385f564320;
      FUN_109ac3188(0xffffff29,&uStack_3f0,&UNK_10f55a6e6,&UNK_10f55a6ea,0x124);
      goto LAB_10918d6a8;
    }
    if ((param_3[3] == param_4[3]) && (param_3[2] == param_4[2])) {
      if ((param_3[3] != *(uint *)(param_5 + 6)) || (param_3[2] != *(uint *)(param_5 + 4))) {
        puVar22 = (undefined4 *)0x34;
        func_0x000107c2ae8c();
        *puVar22 = 1;
        uStack_3f0 = (undefined8 *)(puVar22 + 1);
        uStack_3e8._0_4_ = 0x2e;
        uStack_3e8._4_4_ = 0;
        *(undefined8 *)(puVar22 + 3) = 0x6b73616d203d3d20;
        *(undefined8 *)(puVar22 + 1) = 0x736c6f632e637273;
        *(undefined1 *)((long)puVar22 + 0x32) = 0;
        *(undefined8 *)(puVar22 + 7) = 0x776f722e63727320;
        *(undefined8 *)(puVar22 + 5) = 0x262620736c6f632e;
        *(undefined8 *)((long)puVar22 + 0x2a) = 0x73776f722e6b7361;
        *(undefined8 *)((long)puVar22 + 0x22) = 0x6d203d3d2073776f;
        FUN_109ac3188(0xffffff29,&uStack_3f0,&UNK_10f55a6e6,&UNK_10f55a6ea,0x128);
        goto LAB_10918d6a8;
      }
      uStack_580 = 0x42ff0000;
      puStack_540 = (undefined8 *)((ulong)&uStack_580 | 8);
      uStack_574 = 0;
      uStack_570 = 0;
      uStack_57c = 0;
      uStack_578 = 0;
      uStack_564 = 0;
      uStack_560 = 0;
      uStack_56c = 0;
      uStack_568 = 0;
      uStack_554 = 0;
      uStack_55c = 0;
      uStack_558 = 0;
      lStack_548 = 0;
      uStack_550 = 0;
      uStack_54c = 0;
      puStack_698 = &uStack_530;
      uStack_530 = 0;
      uStack_528 = 0;
      iVar34 = *(int *)(param_2 + 0x138);
      uStack_128._0_4_ = (uint)param_3;
      uVar17 = (uint)uStack_128;
      uStack_128._4_4_ = (uint)((ulong)param_3 >> 0x20);
      uVar19 = uStack_128._4_4_;
      puStack_6a0 = param_5;
      puStack_538 = puStack_698;
      if (iVar34 < 2) {
        if (iVar34 == 0) {
          uStack_3e8._0_4_ = 0x3f000000;
          uStack_3e8._4_4_ = 0x3f400000;
          uStack_3f0._0_4_ = 0;
          uStack_3f0._4_4_ = 0x3e4ccccd;
          uStack_3e0 = 0x3f800000;
          uStack_1a0 = 0;
          uStack_19c = 0;
          uStack_1b0._0_4_ = 0;
          uStack_1b0._4_4_ = 0;
          uStack_1a8._0_4_ = 0;
          uStack_1a8._4_4_ = 0;
          uStack_6b0 = param_6;
          puStack_6a8 = puStack_540;
          func_0x0001072f8f38(&uStack_1b0,&uStack_3f0,&uStack_3dc,5);
          uStack_3e8._0_4_ = 0x3f19999a;
          uStack_3e8._4_4_ = 0x3f4ccccd;
          uStack_3f0._0_4_ = 0;
          uStack_3f0._4_4_ = 0x3ecccccd;
          uStack_3e0 = 0x3f800000;
          uStack_200 = 0;
          uStack_1fc = 0;
          uStack_210._0_4_ = 0;
          uStack_210._4_4_ = 0;
          uStack_208._0_4_ = 0;
          uStack_208._4_4_ = 0;
          func_0x0001072f8f38(&uStack_210,&uStack_3f0,&uStack_3dc,5);
          uStack_380 = 0;
          uStack_398 = 0;
          uStack_3a0 = 0;
          uStack_388 = 0;
          uStack_390 = 0;
          lStack_3b8 = 0;
          uStack_3c0 = 0;
          uStack_3bc = 0;
          puStack_3a8 = (undefined8 *)0x0;
          puStack_3b0 = (undefined8 *)0x0;
          uStack_3d8 = 0;
          uStack_3d4 = 0;
          uStack_3e0 = 0;
          uStack_3dc = 0;
          uStack_3c8 = 0;
          uStack_3c4 = 0;
          uStack_3d0 = 0;
          uStack_3cc = 0;
          uStack_3e8._0_4_ = 0;
          uStack_3e8._4_4_ = 0;
          uStack_3f0._0_4_ = 0;
          uStack_3f0._4_4_ = 0;
          FUN_10918a554(&uStack_3f0,&uStack_1b0,&uStack_210);
          uStack_130._0_4_ = 0x42ff0000;
          puStack_f0 = &uStack_128;
          uStack_128._4_4_ = 0;
          uStack_120 = 0;
          uStack_130._4_4_ = 0;
          uStack_128._0_4_ = 0;
          uStack_114 = 0;
          uStack_110 = 0;
          uStack_11c = 0;
          uStack_118 = 0;
          uStack_104 = 0;
          uStack_10c = 0;
          uStack_108 = 0;
          lStack_f8 = 0;
          uStack_100 = 0;
          uStack_fc = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_270 = 1;
          iStack_26c = 0x100;
          puStack_e8 = &uStack_e0;
          FUN_109a83fd0(&uStack_130,2,&uStack_270,0);
          lVar28 = 0;
          lVar29 = CONCAT44(uStack_11c,uStack_120);
          do {
            fVar66 = (float)FUN_10918a8fc(&uStack_3f0);
            uVar23 = (uint)(long)(float)(int)(fVar66 * 255.0);
            uVar23 = uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar23) {
              uVar23 = 0xff;
            }
            *(char *)(lVar29 + lVar28) = (char)uVar23;
            lVar28 = lVar28 + 1;
          } while (lVar28 != 0x100);
          uStack_4d0 = 0x42ff0000;
          uStack_4c8._4_4_ = 0;
          uStack_4c0 = 0;
          uStack_4cc = 0;
          uStack_4c8._0_4_ = 0;
          uStack_610 = (undefined8 *)((ulong)&uStack_4d0 | 8);
          uStack_4b4 = 0;
          uStack_4b0 = 0;
          uStack_4bc = 0;
          uStack_4b8 = 0;
          uStack_4a4 = 0;
          uStack_4ac = 0;
          uStack_4a8 = 0;
          lStack_498 = 0;
          uStack_4a0 = 0;
          uStack_49c = 0;
          uStack_478 = 0;
          uStack_480 = 0;
          uStack_260 = 0;
          uStack_25c = 0;
          uStack_270 = 0x1010000;
          uStack_5d0 = 0;
          uStack_5cc = 0;
          uStack_5e0 = 0x1010000;
          uStack_5d8 = &uStack_130;
          puStack_b0 = (undefined8 *)CONCAT44(puStack_b0._4_4_,0x2010000);
          uStack_a0 = 0;
          puStack_490 = uStack_610;
          puStack_488 = &uStack_480;
          uStack_268._0_4_ = uVar17;
          uStack_268._4_4_ = uVar19;
          puStack_a8 = &uStack_4d0;
          FUN_109a41f20(&uStack_270,&uStack_5e0,&puStack_b0);
          if (lStack_f8 != 0) {
            piVar31 = (int *)(lStack_f8 + 0x14);
            do {
              iVar34 = *piVar31;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar31,0x10);
              if (bVar5) {
                *piVar31 = iVar34 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar34 + -1 == 0) {
              func_0x000109a848d4(&uStack_130);
            }
          }
          lStack_f8 = 0;
          uStack_118 = 0;
          uStack_114 = 0;
          uStack_120 = 0;
          uStack_11c = 0;
          uStack_108 = 0;
          uStack_104 = 0;
          uStack_110 = 0;
          uStack_10c = 0;
          if (0 < (int)uStack_130._4_4_) {
            lVar28 = 0;
            do {
              *(undefined4 *)((long)puStack_f0 + lVar28 * 4) = 0;
              lVar28 = lVar28 + 1;
            } while (lVar28 < (int)uStack_130._4_4_);
          }
          if (puStack_e8 != &uStack_e0 && puStack_e8 != (undefined8 *)0x0) {
            _free(puStack_e8[-1]);
          }
          FUN_10918eafc(&uStack_3f0);
          if (CONCAT44(uStack_210._4_4_,(undefined4)uStack_210) != 0) {
            uStack_208._0_4_ = (undefined4)uStack_210;
            uStack_208._4_4_ = uStack_210._4_4_;
            __ZdlPv();
          }
          if (CONCAT44(uStack_1b0._4_4_,(uint)uStack_1b0) != 0) {
            uStack_1a8._0_4_ = (uint)uStack_1b0;
            uStack_1a8._4_4_ = uStack_1b0._4_4_;
            __ZdlPv();
          }
          uStack_3f0._0_4_ = 0x42ff0000;
          uStack_3e8._4_4_ = 0;
          uStack_3e0 = 0;
          uStack_3f0._4_4_ = 0;
          uStack_3e8._0_4_ = 0;
          puStack_3b0 = &uStack_3e8;
          uStack_3d4 = 0;
          uStack_3d0 = 0;
          uStack_3dc = 0;
          uStack_3d8 = 0;
          uStack_3c4 = 0;
          uStack_3cc = 0;
          uStack_3c8 = 0;
          lStack_3b8 = 0;
          uStack_3c0 = 0;
          uStack_3bc = 0;
          uStack_398 = 0;
          uStack_3a0 = 0;
          uStack_1b0._0_4_ = 1;
          uStack_1b0._4_4_ = 0x100;
          puStack_3a8 = &uStack_3a0;
          FUN_109a83fd0(&uStack_3f0,2,&uStack_1b0,0);
          lVar28 = 0;
          uStack_620 = (undefined8 *)((ulong)&uStack_4d0 | 4);
          iVar34 = 0xc;
          iVar39 = 0xd;
          iVar40 = 0xe;
          iVar41 = 0xf;
          iVar42 = 8;
          iVar46 = 9;
          iVar47 = 10;
          iVar48 = 0xb;
          iVar49 = 4;
          iVar53 = 5;
          iVar54 = 6;
          iVar55 = 7;
          iVar56 = 0;
          iVar61 = 1;
          iVar62 = 2;
          iVar63 = 3;
          do {
            auVar67._0_4_ = iVar42 + -0x80;
            auVar67._4_4_ = iVar46 + -0x80;
            auVar67._8_4_ = iVar47 + -0x80;
            auVar67._12_4_ = iVar48 + -0x80;
            auVar70._0_4_ = iVar34 + -0x80;
            auVar70._4_4_ = iVar39 + -0x80;
            auVar70._8_4_ = iVar40 + -0x80;
            auVar70._12_4_ = iVar41 + -0x80;
            auVar73._0_4_ = iVar56 + -0x80;
            auVar73._4_4_ = iVar61 + -0x80;
            auVar73._8_4_ = iVar62 + -0x80;
            auVar73._12_4_ = iVar63 + -0x80;
            auVar74._0_4_ = iVar49 + -0x80;
            auVar74._4_4_ = iVar53 + -0x80;
            auVar74._8_4_ = iVar54 + -0x80;
            auVar74._12_4_ = iVar55 + -0x80;
            auVar57 = NEON_scvtf(auVar74,4);
            auVar50 = NEON_scvtf(auVar73,4);
            auVar43 = NEON_scvtf(auVar70,4);
            auVar35 = NEON_scvtf(auVar67,4);
            auVar76._0_4_ = auVar35._0_4_ * 1.8 + 128.0;
            auVar76._4_4_ = auVar35._4_4_ * 1.8 + 128.0;
            auVar76._8_4_ = auVar35._8_4_ * 1.8 + 128.0;
            auVar76._12_4_ = auVar35._12_4_ * 1.8 + 128.0;
            auVar68._0_4_ = auVar43._0_4_ * 1.8 + 128.0;
            auVar68._4_4_ = auVar43._4_4_ * 1.8 + 128.0;
            auVar68._8_4_ = auVar43._8_4_ * 1.8 + 128.0;
            auVar68._12_4_ = auVar43._12_4_ * 1.8 + 128.0;
            auVar78._0_4_ = auVar50._0_4_ * 1.8 + 128.0;
            auVar78._4_4_ = auVar50._4_4_ * 1.8 + 128.0;
            auVar78._8_4_ = auVar50._8_4_ * 1.8 + 128.0;
            auVar78._12_4_ = auVar50._12_4_ * 1.8 + 128.0;
            auVar71._0_4_ = auVar57._0_4_ * 1.8 + 128.0;
            auVar71._4_4_ = auVar57._4_4_ * 1.8 + 128.0;
            auVar71._8_4_ = auVar57._8_4_ * 1.8 + 128.0;
            auVar71._12_4_ = auVar57._12_4_ * 1.8 + 128.0;
            auVar43 = NEON_ext(auVar71,auVar71,8,1);
            auVar57 = NEON_ext(auVar78,auVar78,8,1);
            auVar35 = NEON_ext(auVar68,auVar68,8,1);
            auVar50 = NEON_ext(auVar76,auVar76,8,1);
            auVar77._4_4_ = (int)(long)(float)(int)auVar76._4_4_;
            auVar77._0_4_ = (int)(long)(float)(int)auVar76._0_4_;
            auVar77._8_4_ = (int)(long)(float)(int)auVar50._0_4_;
            auVar77._12_4_ = (int)(long)(float)(int)auVar50._4_4_;
            auVar69._4_4_ = (int)(long)(float)(int)auVar68._4_4_;
            auVar69._0_4_ = (int)(long)(float)(int)auVar68._0_4_;
            auVar69._8_4_ = (int)(long)(float)(int)auVar35._0_4_;
            auVar69._12_4_ = (int)(long)(float)(int)auVar35._4_4_;
            auVar75._4_4_ = (int)(long)(float)(int)auVar78._4_4_;
            auVar75._0_4_ = (int)(long)(float)(int)auVar78._0_4_;
            auVar75._8_4_ = (int)(long)(float)(int)auVar57._0_4_;
            auVar75._12_4_ = (int)(long)(float)(int)auVar57._4_4_;
            auVar72._4_4_ = (int)(long)(float)(int)auVar71._4_4_;
            auVar72._0_4_ = (int)(long)(float)(int)auVar71._0_4_;
            auVar72._8_4_ = (int)(long)(float)(int)auVar43._0_4_;
            auVar72._12_4_ = (int)(long)(float)(int)auVar43._4_4_;
            auVar43 = NEON_smax(auVar72,ZEXT216(0),4);
            auVar50 = NEON_smax(auVar75,ZEXT216(0),4);
            auVar35 = NEON_smax(auVar69,ZEXT216(0),4);
            auVar57 = NEON_smax(auVar77,ZEXT216(0),4);
            auVar7._8_8_ = 0xff000000ff;
            auVar7._0_8_ = 0xff000000ff;
            auVar57 = NEON_smin(auVar57,auVar7,4);
            auVar8._8_8_ = 0xff000000ff;
            auVar8._0_8_ = 0xff000000ff;
            auVar35 = NEON_smin(auVar35,auVar8,4);
            auVar9._8_8_ = 0xff000000ff;
            auVar9._0_8_ = 0xff000000ff;
            auVar50 = NEON_smin(auVar50,auVar9,4);
            auVar10._8_8_ = 0xff000000ff;
            auVar10._0_8_ = 0xff000000ff;
            auVar43 = NEON_smin(auVar43,auVar10,4);
            puVar6 = (undefined1 *)(CONCAT44(uStack_3dc,uStack_3e0) + lVar28);
            puVar6[8] = auVar57[0];
            puVar6[9] = auVar57[4];
            puVar6[10] = auVar57[8];
            puVar6[0xb] = auVar57[0xc];
            puVar6[0xc] = auVar35[0];
            puVar6[0xd] = auVar35[4];
            puVar6[0xe] = auVar35[8];
            puVar6[0xf] = auVar35[0xc];
            *puVar6 = auVar50[0];
            puVar6[1] = auVar50[4];
            puVar6[2] = auVar50[8];
            puVar6[3] = auVar50[0xc];
            puVar6[4] = auVar43[0];
            puVar6[5] = auVar43[4];
            puVar6[6] = auVar43[8];
            puVar6[7] = auVar43[0xc];
            lVar28 = lVar28 + 0x10;
            iVar56 = iVar56 + 0x10;
            iVar61 = iVar61 + 0x10;
            iVar62 = iVar62 + 0x10;
            iVar63 = iVar63 + 0x10;
            iVar49 = iVar49 + 0x10;
            iVar53 = iVar53 + 0x10;
            iVar54 = iVar54 + 0x10;
            iVar55 = iVar55 + 0x10;
            iVar42 = iVar42 + 0x10;
            iVar46 = iVar46 + 0x10;
            iVar47 = iVar47 + 0x10;
            iVar48 = iVar48 + 0x10;
            iVar34 = iVar34 + 0x10;
            iVar39 = iVar39 + 0x10;
            iVar40 = iVar40 + 0x10;
            iVar41 = iVar41 + 0x10;
          } while (lVar28 != 0x100);
          uStack_130._0_4_ = 0x42ff0000;
          uStack_128._4_4_ = 0;
          uStack_120 = 0;
          uStack_130._4_4_ = 0;
          uStack_128._0_4_ = 0;
          puStack_f0 = (undefined8 *)((ulong)&uStack_130 | 8);
          uStack_114 = 0;
          uStack_110 = 0;
          uStack_11c = 0;
          uStack_118 = 0;
          uStack_104 = 0;
          uStack_10c = 0;
          uStack_108 = 0;
          lStack_f8 = 0;
          uStack_100 = 0;
          uStack_fc = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_1a0 = 0;
          uStack_19c = 0;
          uStack_1b0._0_4_ = 0x1010000;
          uStack_1a8 = &uStack_4d0;
          uStack_210._0_4_ = 0x2010000;
          uStack_200 = 0;
          uStack_1fc = 0;
          uStack_600 = &uStack_480;
          uStack_5f0 = &uStack_480;
          puStack_e8 = &uStack_e0;
          uStack_208 = &uStack_130;
          FUN_109ac9fc8(&uStack_1b0,&uStack_210,0x2c,0);
          uStack_1a8._0_4_ = 0;
          uStack_1a8._4_4_ = 0;
          uStack_1b0._0_4_ = 0;
          uStack_1b0._4_4_ = 0;
          uStack_1a0 = 0;
          uStack_19c = 0;
          uStack_200 = 0;
          uStack_1fc = 0;
          uStack_210._0_4_ = 0x1010000;
          uStack_270 = 0x2050000;
          uStack_260 = 0;
          uStack_25c = 0;
          uStack_268 = &uStack_1b0;
          uStack_208 = &uStack_130;
          FUN_109a3dcec(&uStack_210,&uStack_270);
          uStack_208 = (undefined8 *)(CONCAT44(uStack_1b0._4_4_,(uint)uStack_1b0) + 0x60);
          uStack_200 = 0;
          uStack_1fc = 0;
          uStack_210._0_4_ = 0x1010000;
          uStack_260 = 0;
          uStack_25c = 0;
          uStack_270 = 0x1010000;
          uStack_5e0 = 0x2010000;
          uStack_5d0 = 0;
          uStack_5cc = 0;
          uStack_268 = &uStack_3f0;
          uStack_5d8 = uStack_208;
          FUN_109a41f20(&uStack_210,&uStack_270,&uStack_5e0);
          uStack_208 = (undefined8 *)(CONCAT44(uStack_1b0._4_4_,(uint)uStack_1b0) + 0xc0);
          uStack_200 = 0;
          uStack_1fc = 0;
          uStack_210._0_4_ = 0x1010000;
          uStack_260 = 0;
          uStack_25c = 0;
          uStack_270 = 0x1010000;
          uStack_5e0 = 0x2010000;
          uStack_5d0 = 0;
          uStack_5cc = 0;
          uStack_268 = &uStack_3f0;
          uStack_5d8 = uStack_208;
          FUN_109a41f20(&uStack_210,&uStack_270,&uStack_5e0);
          uStack_200 = 0;
          uStack_1fc = 0;
          uStack_210._0_4_ = 0x1050000;
          uStack_208 = &uStack_1b0;
          uStack_270 = 0x2010000;
          uStack_260 = 0;
          uStack_25c = 0;
          uStack_268 = &uStack_130;
          FUN_109a3ecac(&uStack_210,&uStack_270);
          uStack_200 = 0;
          uStack_1fc = 0;
          uStack_210._0_4_ = 0x1010000;
          uStack_270 = 0x2010000;
          uStack_260 = 0;
          uStack_25c = 0;
          uStack_208 = &uStack_130;
          uStack_268 = &uStack_130;
          FUN_109ac9fc8(&uStack_210,&uStack_270,0x38,0);
          uStack_210 = &uStack_1b0;
          func_0x0001060c3a9c(&uStack_210);
          puVar15 = uStack_5f0;
          puVar32 = uStack_210;
          puVar27 = uStack_208;
          puVar20 = uStack_268;
          if (lStack_3b8 != 0) {
            piVar31 = (int *)(lStack_3b8 + 0x14);
            do {
              iVar34 = *piVar31;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar31,0x10);
              if (bVar5) {
                *piVar31 = iVar34 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar34 + -1 == 0) {
              func_0x000109a848d4(&uStack_3f0);
              puVar32 = uStack_210;
              puVar27 = uStack_208;
              puVar20 = uStack_268;
            }
          }
          lStack_3b8 = 0;
          uStack_3d8 = 0;
          uStack_3d4 = 0;
          uStack_3e0 = 0;
          uStack_3dc = 0;
          uStack_3c8 = 0;
          uStack_3c4 = 0;
          uStack_3d0 = 0;
          uStack_3cc = 0;
          if (0 < uStack_3f0._4_4_) {
            lVar28 = 0;
            do {
              *(undefined4 *)((long)puStack_3b0 + lVar28 * 4) = 0;
              lVar28 = lVar28 + 1;
            } while (lVar28 < uStack_3f0._4_4_);
          }
          uStack_210 = puVar32;
          uStack_208 = puVar27;
          uStack_268 = puVar20;
          if (puStack_3a8 != &uStack_3a0 && puStack_3a8 != (undefined8 *)0x0) {
            _free(puStack_3a8[-1]);
          }
          if (lStack_498 != 0) {
            piVar31 = (int *)(lStack_498 + 0x14);
            do {
              iVar34 = *piVar31;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar31,0x10);
              if (bVar5) {
                *piVar31 = iVar34 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar34 + -1 == 0) {
              func_0x000109a848d4(&uStack_4d0);
            }
          }
          if (0 < (int)uStack_4cc) {
            lVar28 = 0;
            do {
              *(undefined4 *)((long)puStack_490 + lVar28 * 4) = 0;
              lVar28 = lVar28 + 1;
            } while (lVar28 < (int)uStack_4cc);
          }
          uStack_4c8._0_4_ = (uint)uStack_128;
          uStack_4c8._4_4_ = uStack_128._4_4_;
          uStack_4d0 = (uint)uStack_130;
          uStack_4cc = uStack_130._4_4_;
          uStack_4b8 = uStack_118;
          uStack_4b4 = uStack_114;
          uStack_4c0 = uStack_120;
          uStack_4bc = uStack_11c;
          uStack_4a8 = uStack_108;
          uStack_4a4 = uStack_104;
          uStack_4b0 = uStack_110;
          uStack_4ac = uStack_10c;
          lStack_498 = lStack_f8;
          uStack_4a0 = uStack_100;
          uStack_49c = uStack_fc;
          if (puStack_488 != puVar15) {
            if (puStack_488 != (undefined8 *)0x0) {
              _free(puStack_488[-1]);
            }
            puStack_488 = uStack_600;
            puStack_490 = uStack_610;
          }
          if ((int)uStack_130._4_4_ < 3) {
            puVar32 = (undefined8 *)((ulong)&uStack_130 | 4);
            *puStack_488 = *puStack_e8;
            puStack_488[1] = puStack_e8[1];
            uStack_130._0_4_ = 0x42ff0000;
            puVar32[1] = 0;
            *puVar32 = 0;
            puVar32[3] = 0;
            puVar32[2] = 0;
            puVar32[5] = 0;
            puVar32[4] = 0;
            *(undefined8 *)((long)puVar32 + 0x34) = 0;
            *(undefined8 *)((long)puVar32 + 0x2c) = 0;
            if (puStack_e8 != &uStack_e0) {
              _free(puStack_e8[-1]);
            }
          }
          else {
            puStack_488 = puStack_e8;
            puStack_490 = puStack_f0;
          }
          uStack_1b0._0_4_ = 0x42ff0000;
          uStack_1a8._4_4_ = 0;
          uStack_1a0 = 0;
          uStack_1b0._4_4_ = 0;
          uStack_1a8._0_4_ = 0;
          puStack_170 = (undefined8 *)((ulong)&uStack_1b0 | 8);
          uStack_194 = 0;
          uStack_190 = 0;
          uStack_19c = 0;
          uStack_198 = 0;
          uStack_184 = 0;
          uStack_18c = 0;
          uStack_188 = 0;
          lStack_178 = 0;
          uStack_180 = 0;
          uStack_17c = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_3e0 = 0;
          uStack_3dc = 0;
          uStack_3f0._0_4_ = 0x1010000;
          uStack_3e8 = &uStack_4d0;
          uStack_130._0_4_ = 0x2010000;
          uStack_120 = 0;
          uStack_11c = 0;
          puStack_168 = &uStack_160;
          uStack_128 = &uStack_1b0;
          FUN_109ac9fc8(&uStack_3f0,&uStack_130,0x34,0);
          uStack_208._0_4_ = 0;
          uStack_208._4_4_ = 0;
          uStack_210._0_4_ = 0;
          uStack_210._4_4_ = 0;
          uStack_200 = 0;
          uStack_1fc = 0;
          uStack_3e0 = 0;
          uStack_3dc = 0;
          uStack_3f0._0_4_ = 0x1010000;
          uStack_130._0_4_ = 0x2050000;
          uStack_128 = &uStack_210;
          uStack_120 = 0;
          uStack_11c = 0;
          uStack_3e8 = (uint *)&uStack_1b0;
          FUN_109a3dcec(&uStack_3f0,&uStack_130);
          uStack_3e8._0_4_ = 0x3f0ccccd;
          uStack_3e8._4_4_ = 0x3f800000;
          uStack_3f0._0_4_ = 0;
          uStack_3f0._4_4_ = 0x3e4ccccd;
          uStack_260 = 0;
          uStack_25c = 0;
          uStack_270 = 0;
          iStack_26c = 0;
          uStack_268._0_4_ = 0;
          uStack_268._4_4_ = 0;
          func_0x0001072f8f38(&uStack_270,&uStack_3f0,&uStack_3e0,4);
          uStack_3e8._0_4_ = 0x3f59999a;
          uStack_3e8._4_4_ = 0x3f800000;
          uStack_3f0._0_4_ = 0;
          uStack_3f0._4_4_ = 0x3eb33333;
          uStack_5d8._0_4_ = 0;
          uStack_5d8._4_4_ = 0;
          uStack_5d0 = 0;
          uStack_5cc = 0;
          uStack_5e0 = 0;
          uStack_5dc = 0;
          func_0x0001072f8f38(&uStack_5e0,&uStack_3f0,&uStack_3e0,4);
          uStack_380 = 0;
          uStack_398 = 0;
          uStack_3a0 = 0;
          uStack_388 = 0;
          uStack_390 = 0;
          lStack_3b8 = 0;
          uStack_3c0 = 0;
          uStack_3bc = 0;
          puStack_3a8 = (undefined8 *)0x0;
          puStack_3b0 = (undefined8 *)0x0;
          uStack_3d8 = 0;
          uStack_3d4 = 0;
          uStack_3e0 = 0;
          uStack_3dc = 0;
          uStack_3c8 = 0;
          uStack_3c4 = 0;
          uStack_3d0 = 0;
          uStack_3cc = 0;
          uStack_3e8._0_4_ = 0;
          uStack_3e8._4_4_ = 0;
          uStack_3f0._0_4_ = 0;
          uStack_3f0._4_4_ = 0;
          FUN_10918a554(&uStack_3f0,&uStack_270,&uStack_5e0);
          uStack_130._0_4_ = 0x42ff0000;
          puStack_f0 = &uStack_128;
          uStack_128._4_4_ = 0;
          uStack_120 = 0;
          uStack_130._4_4_ = 0;
          uStack_128._0_4_ = 0;
          uStack_114 = 0;
          uStack_110 = 0;
          uStack_11c = 0;
          uStack_118 = 0;
          uStack_104 = 0;
          uStack_10c = 0;
          uStack_108 = 0;
          lStack_f8 = 0;
          uStack_100 = 0;
          uStack_fc = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          puStack_b0 = (undefined8 *)0x10000000001;
          puStack_e8 = &uStack_e0;
          FUN_109a83fd0(&uStack_130,2,&puStack_b0,0);
          lVar28 = 0;
          puVar32 = (undefined8 *)((ulong)&uStack_1b0 | 4);
          lVar29 = CONCAT44(uStack_11c,uStack_120);
          do {
            fVar66 = (float)FUN_10918a8fc(&uStack_3f0);
            uVar23 = (uint)(long)(float)(int)(fVar66 * 255.0);
            uVar23 = uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar23) {
              uVar23 = 0xff;
            }
            *(char *)(lVar29 + lVar28) = (char)uVar23;
            lVar28 = lVar28 + 1;
          } while (lVar28 != 0x100);
          lStack_418 = CONCAT44(uStack_210._4_4_,(undefined4)uStack_210) + 0xc0;
          uStack_a0 = 0;
          puStack_b0._0_4_ = 0x1010000;
          uStack_3f8 = 0;
          puStack_408._0_4_ = 0x1010000;
          puStack_400 = &uStack_130;
          lStack_420 = CONCAT44(lStack_420._4_4_,0x2010000);
          uStack_410 = 0;
          puStack_a8 = (uint *)lStack_418;
          FUN_109a41f20(&puStack_b0,&puStack_408,&lStack_420);
          puVar16 = uStack_5f0;
          puStack_b0._0_4_ = 0x1050000;
          puStack_a8 = (uint *)&uStack_210;
          uStack_a0 = 0;
          puStack_408._0_4_ = 0x2010000;
          uStack_3f8 = 0;
          puStack_400 = &uStack_1b0;
          FUN_109a3ecac(&puStack_b0,&puStack_408);
          uStack_a0 = 0;
          puStack_b0 = (undefined8 *)CONCAT44(puStack_b0._4_4_,0x1010000);
          puStack_408 = (undefined8 *)CONCAT44(puStack_408._4_4_,0x2010000);
          uStack_3f8 = 0;
          puStack_400 = &uStack_1b0;
          puStack_a8 = (uint *)&uStack_1b0;
          FUN_109ac9fc8(&puStack_b0,&puStack_408,0x3c,0);
          if (lStack_f8 != 0) {
            piVar31 = (int *)(lStack_f8 + 0x14);
            do {
              iVar34 = *piVar31;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar31,0x10);
              if (bVar5) {
                *piVar31 = iVar34 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar34 + -1 == 0) {
              func_0x000109a848d4(&uStack_130);
            }
          }
          lStack_f8 = 0;
          uStack_118 = 0;
          uStack_114 = 0;
          uStack_120 = 0;
          uStack_11c = 0;
          uStack_108 = 0;
          uStack_104 = 0;
          uStack_110 = 0;
          uStack_10c = 0;
          if (0 < (int)uStack_130._4_4_) {
            lVar28 = 0;
            do {
              *(undefined4 *)((long)puStack_f0 + lVar28 * 4) = 0;
              lVar28 = lVar28 + 1;
            } while (lVar28 < (int)uStack_130._4_4_);
          }
          if (puStack_e8 != &uStack_e0 && puStack_e8 != (undefined8 *)0x0) {
            _free(puStack_e8[-1]);
          }
          FUN_10918eafc(&uStack_3f0);
          if (CONCAT44(uStack_5dc,uStack_5e0) != 0) {
            uStack_5d8._0_4_ = uStack_5e0;
            uStack_5d8._4_4_ = uStack_5dc;
            __ZdlPv();
          }
          if (CONCAT44(iStack_26c,uStack_270) != 0) {
            uStack_268._0_4_ = uStack_270;
            uStack_268._4_4_ = iStack_26c;
            __ZdlPv();
          }
          uStack_3f0 = &uStack_210;
          func_0x0001060c3a9c(&uStack_3f0);
          if (lStack_498 != 0) {
            piVar31 = (int *)(lStack_498 + 0x14);
            do {
              iVar34 = *piVar31;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar31,0x10);
              if (bVar5) {
                *piVar31 = iVar34 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar34 + -1 == 0) {
              func_0x000109a848d4(&uStack_4d0);
            }
          }
          if (0 < (int)uStack_4cc) {
            lVar28 = 0;
            do {
              *(undefined4 *)((long)puStack_490 + lVar28 * 4) = 0;
              lVar28 = lVar28 + 1;
            } while (lVar28 < (int)uStack_4cc);
          }
          uStack_4c8._0_4_ = (uint)uStack_1a8;
          uStack_4c8._4_4_ = uStack_1a8._4_4_;
          uStack_4d0 = (uint)uStack_1b0;
          uStack_4cc = uStack_1b0._4_4_;
          uStack_4b8 = uStack_198;
          uStack_4b4 = uStack_194;
          uStack_4c0 = uStack_1a0;
          uStack_4bc = uStack_19c;
          uStack_4a8 = uStack_188;
          uStack_4a4 = uStack_184;
          uStack_4b0 = uStack_190;
          uStack_4ac = uStack_18c;
          lStack_498 = lStack_178;
          uStack_4a0 = uStack_180;
          uStack_49c = uStack_17c;
          if (puStack_488 != puVar16) {
            if (puStack_488 != (undefined8 *)0x0) {
              _free(puStack_488[-1]);
            }
            puStack_488 = uStack_600;
            puStack_490 = uStack_610;
          }
          if ((int)uStack_1b0._4_4_ < 3) {
            *puStack_488 = *puStack_168;
            puStack_488[1] = puStack_168[1];
            uStack_1b0._0_4_ = 0x42ff0000;
            puVar32[1] = 0;
            *puVar32 = 0;
            puVar32[3] = 0;
            puVar32[2] = 0;
            puVar32[5] = 0;
            puVar32[4] = 0;
            *(undefined8 *)((long)puVar32 + 0x34) = 0;
            *(undefined8 *)((long)puVar32 + 0x2c) = 0;
            if (puStack_168 != &uStack_160) {
              _free(puStack_168[-1]);
            }
          }
          else {
            puStack_488 = puStack_168;
            puStack_490 = puStack_170;
          }
          if (*(char *)(param_2 + 0x13c) == '\x01') {
            uStack_3f0._0_4_ = 0x42ff0000;
            uStack_208 = &uStack_3f0;
            uStack_3e8._4_4_ = 0;
            uStack_3e0 = 0;
            uStack_3f0._4_4_ = 0;
            uStack_3e8._0_4_ = 0;
            puStack_3b0 = &uStack_3e8;
            uStack_3d4 = 0;
            uStack_3d0 = 0;
            uStack_3dc = 0;
            uStack_3d8 = 0;
            uStack_3c4 = 0;
            uStack_3cc = 0;
            uStack_3c8 = 0;
            lStack_3b8 = 0;
            uStack_3c0 = 0;
            uStack_3bc = 0;
            uStack_398 = 0;
            uStack_3a0 = 0;
            uStack_1a0 = 0;
            uStack_19c = 0;
            uStack_1b0._0_4_ = 0x1010000;
            uStack_1a8 = &uStack_4d0;
            uStack_210._0_4_ = 0x2010000;
            uStack_200 = 0;
            uStack_1fc = 0;
            puStack_3a8 = &uStack_3a0;
            FUN_109ac9fc8(&uStack_1b0,&uStack_210,6,0);
            FUN_109194bd4(&uStack_130,*(undefined8 *)(param_2 + 0x148),&uStack_3f0,&uStack_4d0,
                          *(undefined4 *)(param_2 + 0x140),1,0xffffffff);
            puVar32 = uStack_208;
            puVar30 = uStack_1a8;
            if (lStack_3b8 != 0) {
              piVar31 = (int *)(lStack_3b8 + 0x14);
              do {
                iVar34 = *piVar31;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar31,0x10);
                if (bVar5) {
                  *piVar31 = iVar34 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar34 + -1 == 0) {
                func_0x000109a848d4(&uStack_3f0);
                puVar32 = uStack_208;
                puVar30 = uStack_1a8;
              }
            }
            lStack_3b8 = 0;
            uStack_3d8 = 0;
            uStack_3d4 = 0;
            uStack_3e0 = 0;
            uStack_3dc = 0;
            uStack_3c8 = 0;
            uStack_3c4 = 0;
            uStack_3d0 = 0;
            uStack_3cc = 0;
            if (0 < uStack_3f0._4_4_) {
              lVar28 = 0;
              do {
                *(undefined4 *)((long)puStack_3b0 + lVar28 * 4) = 0;
                lVar28 = lVar28 + 1;
              } while (lVar28 < uStack_3f0._4_4_);
            }
            uStack_208 = puVar32;
            uStack_1a8 = puVar30;
            if (puStack_3a8 != &uStack_3a0 && puStack_3a8 != (undefined8 *)0x0) {
              _free(puStack_3a8[-1]);
            }
            if (lStack_498 != 0) {
              piVar31 = (int *)(lStack_498 + 0x14);
              do {
                iVar34 = *piVar31;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar31,0x10);
                if (bVar5) {
                  *piVar31 = iVar34 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar34 + -1 == 0) {
                func_0x000109a848d4(&uStack_4d0);
              }
            }
            if (0 < (int)uStack_4cc) {
              lVar28 = 0;
              do {
                *(undefined4 *)((long)puStack_490 + lVar28 * 4) = 0;
                lVar28 = lVar28 + 1;
              } while (lVar28 < (int)uStack_4cc);
            }
            uStack_4c8._0_4_ = (uint)uStack_128;
            uStack_4c8._4_4_ = uStack_128._4_4_;
            uStack_4d0 = (uint)uStack_130;
            uStack_4cc = uStack_130._4_4_;
            uStack_4b8 = uStack_118;
            uStack_4b4 = uStack_114;
            uStack_4c0 = uStack_120;
            uStack_4bc = uStack_11c;
            uStack_4a8 = uStack_108;
            uStack_4a4 = uStack_104;
            uStack_4b0 = uStack_110;
            uStack_4ac = uStack_10c;
            lStack_498 = lStack_f8;
            uStack_4a0 = uStack_100;
            uStack_49c = uStack_fc;
            if (puStack_488 != puVar16) {
              if (puStack_488 != (undefined8 *)0x0) {
                _free(puStack_488[-1]);
              }
              puStack_488 = uStack_600;
              puStack_490 = uStack_610;
            }
            puVar32 = puStack_e8;
            uStack_600 = puStack_488;
            if ((int)uStack_130._4_4_ < 3) {
              puVar27 = (undefined8 *)((ulong)&uStack_130 | 4);
              *puStack_488 = *puStack_e8;
              puStack_488[1] = puVar32[1];
              uStack_130._0_4_ = 0x42ff0000;
              puVar27[1] = 0;
              *puVar27 = 0;
              puVar27[3] = 0;
              puVar27[2] = 0;
              puVar27[5] = 0;
              puVar27[4] = 0;
              *(undefined8 *)((long)puVar27 + 0x34) = 0;
              *(undefined8 *)((long)puVar27 + 0x2c) = 0;
              if (puVar32 != &uStack_e0) {
                _free(puVar32[-1]);
              }
            }
            else {
              puStack_488 = puStack_e8;
              puStack_490 = puStack_f0;
            }
          }
          if (lStack_548 != 0) {
            piVar31 = (int *)(lStack_548 + 0x14);
            do {
              iVar34 = *piVar31;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar31,0x10);
              if (bVar5) {
                *piVar31 = iVar34 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar34 + -1 == 0) {
              func_0x000109a848d4(&uStack_580);
            }
          }
          if (0 < (int)uStack_57c) {
            lVar28 = 0;
            do {
              *(undefined4 *)((long)puStack_540 + lVar28 * 4) = 0;
              lVar28 = lVar28 + 1;
            } while (lVar28 < (int)uStack_57c);
          }
          uStack_578 = (uint)uStack_4c8;
          uStack_574 = uStack_4c8._4_4_;
          uStack_580 = uStack_4d0;
          uStack_57c = uStack_4cc;
          uStack_568 = uStack_4b8;
          uStack_564 = uStack_4b4;
          uStack_570 = uStack_4c0;
          uStack_56c = uStack_4bc;
          uStack_558 = uStack_4a8;
          uStack_554 = uStack_4a4;
          uStack_560 = uStack_4b0;
          uStack_55c = uStack_4ac;
          lStack_548 = lStack_498;
          uStack_550 = uStack_4a0;
          uStack_54c = uStack_49c;
          puVar15 = uStack_3f0;
          puVar20 = uStack_208;
          puVar30 = uStack_1a8;
          if (puStack_538 != puStack_698) {
            if (puStack_538 != (undefined8 *)0x0) {
              _free(puStack_538[-1]);
              puVar15 = uStack_3f0;
              puVar20 = uStack_208;
              puVar30 = uStack_1a8;
            }
            puStack_540 = puStack_6a8;
            puStack_538 = puStack_698;
          }
          uStack_3f0._4_4_ = (int)((ulong)puVar15 >> 0x20);
          puVar26 = (undefined8 *)CONCAT44(uStack_268._4_4_,(undefined4)uStack_268);
          puVar32 = (undefined8 *)CONCAT44(uStack_4c8._4_4_,(uint)uStack_4c8);
          if ((int)uStack_4cc < 3) {
            *puStack_538 = *puStack_488;
            puStack_538[1] = puStack_488[1];
            uStack_4d0 = 0x42ff0000;
            uStack_620[1] = 0;
            *uStack_620 = 0;
            uStack_620[3] = 0;
            uStack_620[2] = 0;
            uStack_620[5] = 0;
            uStack_620[4] = 0;
            *(undefined8 *)((long)uStack_620 + 0x34) = 0;
            *(undefined8 *)((long)uStack_620 + 0x2c) = 0;
            puVar25 = puStack_488;
            puVar27 = (undefined8 *)CONCAT44(uStack_268._4_4_,(undefined4)uStack_268);
            uStack_208 = puVar20;
            if (puStack_488 != puVar16) {
LAB_10918cd34:
              uStack_4c8 = puVar32;
              uStack_3f0 = puVar15;
              uStack_1a8 = puVar30;
              uStack_268 = puVar26;
              _free(puVar25[-1]);
              puVar27 = uStack_268;
              puVar20 = uStack_208;
            }
          }
          else {
            puStack_540 = puStack_490;
            puStack_538 = puStack_488;
            puVar27 = puVar26;
          }
        }
        else {
          puStack_6a8 = puStack_540;
          if (iVar34 != 1) {
LAB_10918d5e0:
            uStack_6b0 = param_6;
            uStack_128._0_4_ = uVar33;
            uStack_128._4_4_ = uVar18;
            __ZNSt3__19to_stringEi(&uStack_130);
            puVar32 = &uStack_130;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                      (puVar32,0,&UNK_10f55a7e4,0x1b);
            uStack_3e0 = (undefined4)puVar32[2];
            uStack_3dc = (int)((ulong)puVar32[2] >> 0x20);
            uStack_3e8._0_4_ = (undefined4)puVar32[1];
            uStack_3e8._4_4_ = (undefined4)((ulong)puVar32[1] >> 0x20);
            uStack_3f0._0_4_ = (undefined4)*puVar32;
            uStack_3f0._4_4_ = (int)((ulong)*puVar32 >> 0x20);
            puVar32[1] = 0;
            puVar32[2] = 0;
            *puVar32 = 0;
            iVar34 = uStack_3dc;
            uStack_1a8._0_4_ = 0;
            uStack_1a8._4_4_ = 0;
            uStack_1b0._0_4_ = 0;
            uStack_1b0._4_4_ = 0;
            uStack_1b0 = (undefined4 *)0x0;
            uVar24 = (ulong)uStack_3dc._3_1_;
            if ((long)uVar24 < 0) {
              uVar24 = CONCAT44(uStack_3e8._4_4_,(undefined4)uStack_3e8);
              if (uVar24 != 0) {
LAB_10918d648:
                puVar22 = (undefined4 *)((uVar24 & 0xfffffffffffffffc) + 8);
                func_0x000107c2ae8c();
                uStack_1b0 = puVar22 + 1;
                *puVar22 = 1;
                uStack_1a8._0_4_ = (uint)uVar24;
                uStack_1a8._4_4_ = (uint)(uVar24 >> 0x20);
                *(undefined1 *)((long)uStack_1b0 + uVar24) = 0;
                puVar32 = (undefined8 *)CONCAT44(uStack_3f0._4_4_,(undefined4)uStack_3f0);
                if (-1 < iVar34) {
                  puVar32 = &uStack_3f0;
                }
                _memcpy(uStack_1b0,puVar32,uVar24);
              }
            }
            else if (uStack_3dc._3_1_ != '\0') goto LAB_10918d648;
            FUN_109ac3188(0xffffffff,&uStack_1b0,&UNK_10f55a6e6,&UNK_10f55a6ea,0x141);
            goto LAB_10918d6a8;
          }
          uStack_5e8 = 0x3f4000003f000000;
          uStack_5f0 = (undefined8 *)0x3e4ccccd00000000;
          uStack_3e8._0_4_ = 0x3f000000;
          uStack_3e8._4_4_ = 0x3f400000;
          uStack_3f0._0_4_ = 0;
          uStack_3f0._4_4_ = 0x3e4ccccd;
          uStack_3e0 = 0x3f800000;
          puStack_a8 = (uint *)0x0;
          uStack_a0 = 0;
          puStack_b0 = (undefined8 *)0x0;
          uStack_6b0 = param_6;
          func_0x0001072f8f38(&puStack_b0,&uStack_3f0,&uStack_3dc,5);
          uStack_3e8._0_4_ = 0x3f0624dd;
          uStack_3e8._4_4_ = 0x3f73f7cf;
          uStack_3f0._0_4_ = 0;
          uStack_3f0._4_4_ = 0x3da5e354;
          uStack_3e0 = 0x3f800000;
          uStack_3f8 = 0;
          puStack_408 = (undefined8 *)0x0;
          puStack_400 = (undefined8 *)0x0;
          func_0x0001072f8f38(&puStack_408,&uStack_3f0,&uStack_3dc,5);
          uStack_380 = 0;
          uStack_398 = 0;
          uStack_3a0 = 0;
          uStack_388 = 0;
          uStack_390 = 0;
          lStack_3b8 = 0;
          uStack_3c0 = 0;
          uStack_3bc = 0;
          puStack_3a8 = (undefined8 *)0x0;
          puStack_3b0 = (undefined8 *)0x0;
          uStack_3d8 = 0;
          uStack_3d4 = 0;
          uStack_3e0 = 0;
          uStack_3dc = 0;
          uStack_3c8 = 0;
          uStack_3c4 = 0;
          uStack_3d0 = 0;
          uStack_3cc = 0;
          uStack_3e8._0_4_ = 0;
          uStack_3e8._4_4_ = 0;
          uStack_3f0._0_4_ = 0;
          uStack_3f0._4_4_ = 0;
          FUN_10918a554(&uStack_3f0,&puStack_b0,&puStack_408);
          uStack_128._0_4_ = (uint)uStack_5e8;
          uStack_128._4_4_ = (uint)((ulong)uStack_5e8 >> 0x20);
          uStack_130._0_4_ = (uint)uStack_5f0;
          uStack_130._4_4_ = (uint)((ulong)uStack_5f0 >> 0x20);
          uStack_120 = 0x3f800000;
          uStack_410 = 0;
          lStack_420 = 0;
          lStack_418 = 0;
          func_0x0001072f8f38(&lStack_420,&uStack_130,&uStack_11c,5);
          uStack_128._0_4_ = 0x3f0ac083;
          uStack_128._4_4_ = 0x3f50e560;
          uStack_130._0_4_ = 0;
          uStack_130._4_4_ = 0x3e6e978d;
          uStack_120 = 0x3f800000;
          uStack_428 = 0;
          lStack_438 = 0;
          lStack_430 = 0;
          func_0x0001072f8f38(&lStack_438,&uStack_130,&uStack_11c,5);
          uStack_c0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          puStack_e8 = (undefined8 *)0x0;
          puStack_f0 = (undefined8 *)0x0;
          lStack_f8 = 0;
          uStack_100 = 0;
          uStack_fc = 0;
          uStack_108 = 0;
          uStack_104 = 0;
          uStack_110 = 0;
          uStack_10c = 0;
          uStack_118 = 0;
          uStack_114 = 0;
          uStack_120 = 0;
          uStack_11c = 0;
          uStack_128._0_4_ = 0;
          uStack_128._4_4_ = 0;
          uStack_130._0_4_ = 0;
          uStack_130._4_4_ = 0;
          FUN_10918a554(&uStack_130,&lStack_420,&lStack_438);
          uStack_1a8._0_4_ = (uint)uStack_5e8;
          uStack_1a8._4_4_ = (uint)((ulong)uStack_5e8 >> 0x20);
          uStack_1b0._0_4_ = (uint)uStack_5f0;
          uStack_1b0._4_4_ = (uint)((ulong)uStack_5f0 >> 0x20);
          uStack_1a0 = 0x3f800000;
          uStack_440 = 0;
          lStack_450 = 0;
          lStack_448 = 0;
          func_0x0001072f8f38(&lStack_450,&uStack_1b0,&uStack_19c,5);
          uStack_1a8._0_4_ = 0x3f160419;
          uStack_1a8._4_4_ = 0x3f2978d5;
          uStack_1b0._0_4_ = 0;
          uStack_1b0._4_4_ = 0x3eb645a2;
          uStack_1a0 = 0x3f800000;
          uStack_458 = 0;
          lStack_468 = 0;
          lStack_460 = 0;
          func_0x0001072f8f38(&lStack_468,&uStack_1b0,&uStack_19c,5);
          uStack_140 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          puStack_168 = (undefined8 *)0x0;
          puStack_170 = (undefined8 *)0x0;
          lStack_178 = 0;
          uStack_180 = 0;
          uStack_17c = 0;
          uStack_188 = 0;
          uStack_184 = 0;
          uStack_190 = 0;
          uStack_18c = 0;
          uStack_198 = 0;
          uStack_194 = 0;
          uStack_1a0 = 0;
          uStack_19c = 0;
          uStack_1a8._0_4_ = 0;
          uStack_1a8._4_4_ = 0;
          uStack_1b0._0_4_ = 0;
          uStack_1b0._4_4_ = 0;
          FUN_10918a554(&uStack_1b0,&lStack_450,&lStack_468);
          uStack_4d0 = 0x42ff0000;
          puStack_490 = &uStack_4c8;
          uStack_4c8._4_4_ = 0;
          uStack_4c0 = 0;
          uStack_4cc = 0;
          uStack_4c8._0_4_ = 0;
          uStack_4b4 = 0;
          uStack_4b0 = 0;
          uStack_4bc = 0;
          uStack_4b8 = 0;
          uStack_4a4 = 0;
          uStack_4ac = 0;
          uStack_4a8 = 0;
          lStack_498 = 0;
          uStack_4a0 = 0;
          uStack_49c = 0;
          uStack_478 = 0;
          uStack_480 = 0;
          uStack_210._0_4_ = 1;
          uStack_210._4_4_ = 0x100;
          puStack_488 = &uStack_480;
          FUN_109a83fd0(&uStack_4d0,2,&uStack_210,0);
          uStack_210._0_4_ = 0x42ff0000;
          puStack_1d0 = &uStack_208;
          uStack_208._4_4_ = 0;
          uStack_200 = 0;
          uStack_210._4_4_ = 0;
          uStack_208._0_4_ = 0;
          uStack_1f4 = 0;
          uStack_1f0 = 0;
          uStack_1fc = 0;
          uStack_1f8 = 0;
          uStack_1e4 = 0;
          uStack_1ec = 0;
          uStack_1e8 = 0;
          lStack_1d8 = 0;
          uStack_1e0 = 0;
          uStack_1dc = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          uStack_270 = 1;
          iStack_26c = 0x100;
          puStack_1c8 = &uStack_1c0;
          FUN_109a83fd0(&uStack_210,2,&uStack_270,0);
          uStack_270 = 0x42ff0000;
          puStack_230 = &uStack_268;
          uStack_268._4_4_ = 0;
          uStack_260 = 0;
          iStack_26c = 0;
          uStack_268._0_4_ = 0;
          uStack_254 = 0;
          uStack_250 = 0;
          uStack_25c = 0;
          uStack_258 = 0;
          uStack_244 = 0;
          uStack_24c = 0;
          uStack_248 = 0;
          lStack_238 = 0;
          uStack_240 = 0;
          uStack_23c = 0;
          uStack_218 = 0;
          uStack_220 = 0;
          alStack_288[0] = 0x10000000001;
          uStack_600 = &uStack_480;
          uStack_5f0 = &uStack_1c0;
          puStack_228 = &uStack_220;
          FUN_109a83fd0(&uStack_270,2,alStack_288,0);
          uVar24 = 0;
          lVar28 = CONCAT44(uStack_4bc,uStack_4c0);
          lVar1 = CONCAT44(uStack_1fc,uStack_200);
          lVar29 = CONCAT44(uStack_25c,uStack_260);
          do {
            fVar65 = (float)(uVar24 & 0xffffffff) / 255.0;
            fVar66 = (float)FUN_10918a8fc(fVar65,&uStack_3f0);
            fVar38 = (float)FUN_10918a8fc(fVar65,&uStack_130);
            fVar65 = (float)FUN_10918a8fc(fVar65,&uStack_1b0);
            uVar23 = (uint)(long)(float)(int)(fVar66 * 255.0);
            uVar23 = uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar23) {
              uVar23 = 0xff;
            }
            *(char *)(lVar28 + uVar24) = (char)uVar23;
            uVar23 = (uint)(long)(float)(int)(fVar38 * 255.0);
            uVar23 = uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar23) {
              uVar23 = 0xff;
            }
            *(char *)(lVar1 + uVar24) = (char)uVar23;
            uVar23 = (uint)(long)(float)(int)(fVar65 * 255.0);
            uVar23 = uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar23) {
              uVar23 = 0xff;
            }
            *(char *)(lVar29 + uVar24) = (char)uVar23;
            uVar24 = uVar24 + 1;
          } while (uVar24 != 0x100);
          alStack_288[1] = 0;
          alStack_288[0] = 0;
          alStack_288[2] = 0;
          uStack_4d8 = 0;
          plStack_4e8._0_4_ = 0x1010000;
          auStack_500[0] = 0x2050000;
          puStack_4f8 = (uint *)alStack_288;
          uStack_4f0 = 0;
          puStack_4e0 = param_3;
          FUN_109a3dcec(&plStack_4e8,auStack_500);
          uStack_4d8 = 0;
          plStack_4e8._0_4_ = 0x1010000;
          puStack_4e0 = (uint *)alStack_288[0];
          uStack_4f0 = 0;
          auStack_500[0] = 0x1010000;
          puStack_4f8 = &uStack_270;
          auStack_518[0] = 0x2010000;
          lStack_510 = alStack_288[0];
          uStack_508 = 0;
          FUN_109a41f20(&plStack_4e8,auStack_500,auStack_518);
          lStack_510 = alStack_288[0] + 0x60;
          uStack_4d8 = 0;
          plStack_4e8._0_4_ = 0x1010000;
          uStack_4f0 = 0;
          auStack_500[0] = 0x1010000;
          puStack_4f8 = (uint *)&uStack_210;
          auStack_518[0] = 0x2010000;
          uStack_508 = 0;
          puStack_4e0 = (uint *)lStack_510;
          FUN_109a41f20(&plStack_4e8,auStack_500,auStack_518);
          lStack_510 = alStack_288[0] + 0xc0;
          uStack_4d8 = 0;
          plStack_4e8._0_4_ = 0x1010000;
          uStack_4f0 = 0;
          auStack_500[0] = 0x1010000;
          puStack_4f8 = &uStack_4d0;
          auStack_518[0] = 0x2010000;
          uStack_508 = 0;
          puStack_4e0 = (uint *)lStack_510;
          FUN_109a41f20(&plStack_4e8,auStack_500,auStack_518);
          uStack_5e0 = 0x42ff0000;
          puStack_5a0 = (undefined8 *)((ulong)&uStack_5e0 | 8);
          uStack_5d8._4_4_ = 0;
          uStack_5d0 = 0;
          uStack_5dc = 0;
          uStack_5d8._0_4_ = 0;
          uStack_5c4 = 0;
          uStack_5c0 = 0;
          uStack_5cc = 0;
          uStack_5c8 = 0;
          uStack_5b4 = 0;
          uStack_5bc = 0;
          uStack_5b8 = 0;
          lStack_5a8 = 0;
          uStack_5b0 = 0;
          uStack_5ac = 0;
          uStack_590 = 0;
          uStack_588 = 0;
          plStack_4e8 = (long *)CONCAT44(plStack_4e8._4_4_,0x1050000);
          uStack_4d8 = 0;
          auStack_500[0] = 0x2010000;
          uStack_4f0 = 0;
          puStack_598 = &uStack_590;
          puStack_4f8 = &uStack_5e0;
          puStack_4e0 = (uint *)alStack_288;
          FUN_109a3ecac(&plStack_4e8,auStack_500);
          plStack_4e8 = alStack_288;
          func_0x0001060c3a9c(&plStack_4e8);
          puVar32 = uStack_5f0;
          if (lStack_238 != 0) {
            piVar31 = (int *)(lStack_238 + 0x14);
            do {
              iVar34 = *piVar31;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar31,0x10);
              if (bVar5) {
                *piVar31 = iVar34 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar34 + -1 == 0) {
              func_0x000109a848d4(&uStack_270);
            }
          }
          lStack_238 = 0;
          uStack_258 = 0;
          uStack_254 = 0;
          uStack_260 = 0;
          uStack_25c = 0;
          uStack_248 = 0;
          uStack_244 = 0;
          uStack_250 = 0;
          uStack_24c = 0;
          if (0 < iStack_26c) {
            lVar28 = 0;
            do {
              *(undefined4 *)((long)puStack_230 + lVar28 * 4) = 0;
              lVar28 = lVar28 + 1;
            } while (lVar28 < iStack_26c);
          }
          if (puStack_228 != &uStack_220 && puStack_228 != (undefined8 *)0x0) {
            _free(puStack_228[-1]);
          }
          if (lStack_1d8 != 0) {
            piVar31 = (int *)(lStack_1d8 + 0x14);
            do {
              iVar34 = *piVar31;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar31,0x10);
              if (bVar5) {
                *piVar31 = iVar34 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar34 + -1 == 0) {
              func_0x000109a848d4(&uStack_210);
            }
          }
          lStack_1d8 = 0;
          uStack_1f8 = 0;
          uStack_1f4 = 0;
          uStack_200 = 0;
          uStack_1fc = 0;
          uStack_1e8 = 0;
          uStack_1e4 = 0;
          uStack_1f0 = 0;
          uStack_1ec = 0;
          if (0 < uStack_210._4_4_) {
            lVar28 = 0;
            do {
              *(undefined4 *)((long)puStack_1d0 + lVar28 * 4) = 0;
              lVar28 = lVar28 + 1;
            } while (lVar28 < uStack_210._4_4_);
          }
          if (puStack_1c8 != puVar32 && puStack_1c8 != (undefined8 *)0x0) {
            _free(puStack_1c8[-1]);
          }
          if (lStack_498 != 0) {
            piVar31 = (int *)(lStack_498 + 0x14);
            do {
              iVar34 = *piVar31;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar31,0x10);
              if (bVar5) {
                *piVar31 = iVar34 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar34 + -1 == 0) {
              func_0x000109a848d4(&uStack_4d0);
            }
          }
          lStack_498 = 0;
          uStack_4b8 = 0;
          uStack_4b4 = 0;
          uStack_4c0 = 0;
          uStack_4bc = 0;
          uStack_4a8 = 0;
          uStack_4a4 = 0;
          uStack_4b0 = 0;
          uStack_4ac = 0;
          if (0 < (int)uStack_4cc) {
            lVar28 = 0;
            do {
              *(undefined4 *)((long)puStack_490 + lVar28 * 4) = 0;
              lVar28 = lVar28 + 1;
            } while (lVar28 < (int)uStack_4cc);
          }
          if (puStack_488 != uStack_600 && puStack_488 != (undefined8 *)0x0) {
            _free(puStack_488[-1]);
          }
          FUN_10918eafc(&uStack_1b0);
          if (lStack_468 != 0) {
            lStack_460 = lStack_468;
            __ZdlPv();
          }
          if (lStack_450 != 0) {
            lStack_448 = lStack_450;
            __ZdlPv();
          }
          FUN_10918eafc(&uStack_130);
          if (lStack_438 != 0) {
            lStack_430 = lStack_438;
            __ZdlPv();
          }
          if (lStack_420 != 0) {
            lStack_418 = lStack_420;
            __ZdlPv();
          }
          FUN_10918eafc(&uStack_3f0);
          if (puStack_408 != (undefined8 *)0x0) {
            puStack_400 = puStack_408;
            __ZdlPv();
          }
          if (puStack_b0 != (undefined8 *)0x0) {
            puStack_a8 = (uint *)puStack_b0;
            __ZdlPv();
          }
          if (lStack_548 != 0) {
            piVar31 = (int *)(lStack_548 + 0x14);
            do {
              iVar34 = *piVar31;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar31,0x10);
              if (bVar5) {
                *piVar31 = iVar34 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar34 + -1 == 0) {
              func_0x000109a848d4(&uStack_580);
            }
          }
          if (0 < (int)uStack_57c) {
            lVar28 = 0;
            do {
              *(undefined4 *)((long)puStack_540 + lVar28 * 4) = 0;
              lVar28 = lVar28 + 1;
            } while (lVar28 < (int)uStack_57c);
          }
          uStack_578 = (uint)uStack_5d8;
          uStack_574 = uStack_5d8._4_4_;
          uStack_580 = uStack_5e0;
          uStack_57c = uStack_5dc;
          uStack_568 = uStack_5c8;
          uStack_564 = uStack_5c4;
          uStack_570 = uStack_5d0;
          uStack_56c = uStack_5cc;
          uStack_558 = uStack_5b8;
          uStack_554 = uStack_5b4;
          uStack_560 = uStack_5c0;
          uStack_55c = uStack_5bc;
          lStack_548 = lStack_5a8;
          uStack_550 = uStack_5b0;
          uStack_54c = uStack_5ac;
          if (puStack_538 != puStack_698) {
            if (puStack_538 != (undefined8 *)0x0) {
              _free(puStack_538[-1]);
            }
            puStack_540 = puStack_6a8;
            puStack_538 = puStack_698;
          }
          puVar30 = (uint *)CONCAT44(uStack_1a8._4_4_,(uint)uStack_1a8);
          puVar15 = (undefined8 *)CONCAT44(uStack_3f0._4_4_,(undefined4)uStack_3f0);
          puVar20 = (undefined8 *)CONCAT44(uStack_208._4_4_,(uint)uStack_208);
          puVar26 = (undefined8 *)CONCAT44(uStack_268._4_4_,(undefined4)uStack_268);
          puVar27 = (undefined8 *)CONCAT44(uStack_268._4_4_,(undefined4)uStack_268);
          puVar32 = (undefined8 *)CONCAT44(uStack_4c8._4_4_,(uint)uStack_4c8);
          if ((int)uStack_5dc < 3) {
            puVar25 = (undefined8 *)((ulong)&uStack_5e0 | 4);
            *puStack_538 = *puStack_598;
            puStack_538[1] = puStack_598[1];
            uStack_5e0 = 0x42ff0000;
            puVar25[1] = 0;
            *puVar25 = 0;
            puVar25[3] = 0;
            puVar25[2] = 0;
            puVar25[5] = 0;
            puVar25[4] = 0;
            *(undefined8 *)((long)puVar25 + 0x34) = 0;
            *(undefined8 *)((long)puVar25 + 0x2c) = 0;
            puVar25 = puStack_598;
            uStack_208 = (undefined8 *)CONCAT44(uStack_208._4_4_,(uint)uStack_208);
            if (puStack_598 != &uStack_590) goto LAB_10918cd34;
          }
          else {
            puStack_540 = puStack_5a0;
            puStack_538 = puStack_598;
            puVar27 = puVar26;
            puVar20 = (undefined8 *)CONCAT44(uStack_208._4_4_,(uint)uStack_208);
          }
        }
      }
      else if (iVar34 == 2) {
        uStack_3f0._0_4_ = 0x42ff0000;
        uStack_3e8._4_4_ = 0;
        uStack_3e0 = 0;
        uStack_3f0._4_4_ = 0;
        uStack_3e8._0_4_ = 0;
        puStack_3b0 = &uStack_3e8;
        uStack_3d4 = 0;
        uStack_3d0 = 0;
        uStack_3dc = 0;
        uStack_3d8 = 0;
        uStack_3c4 = 0;
        uStack_3cc = 0;
        uStack_3c8 = 0;
        lStack_3b8 = 0;
        uStack_3c0 = 0;
        uStack_3bc = 0;
        uStack_398 = 0;
        uStack_3a0 = 0;
        uStack_120 = 0;
        uStack_11c = 0;
        uStack_130._0_4_ = 0x1010000;
        uStack_1b0._0_4_ = 0x2010000;
        uStack_1a0 = 0;
        uStack_19c = 0;
        puStack_6a8 = puStack_540;
        puStack_3a8 = &uStack_3a0;
        uStack_1a8 = (uint *)&uStack_3f0;
        FUN_109ac9fc8(&uStack_130,&uStack_1b0,0x2d,0);
        uStack_4d0 = 0;
        uStack_4cc = 0;
        uStack_4c8._0_4_ = 0;
        uStack_4c8._4_4_ = 0;
        uStack_4c0 = 0;
        uStack_4bc = 0;
        uStack_120 = 0;
        uStack_11c = 0;
        uStack_130._0_4_ = 0x1010000;
        uStack_1b0._0_4_ = 0x2050000;
        uStack_1a8 = &uStack_4d0;
        uStack_1a0 = 0;
        uStack_19c = 0;
        uStack_128 = &uStack_3f0;
        FUN_109a3dcec(&uStack_130,&uStack_1b0);
        uStack_130._0_4_ = 0x42ff0000;
        puStack_f0 = &uStack_128;
        uStack_128._4_4_ = 0;
        uStack_120 = 0;
        uStack_130._4_4_ = 0;
        uStack_128._0_4_ = 0;
        uStack_114 = 0;
        uStack_110 = 0;
        uStack_11c = 0;
        uStack_118 = 0;
        uStack_104 = 0;
        uStack_10c = 0;
        uStack_108 = 0;
        lStack_f8 = 0;
        uStack_100 = 0;
        uStack_fc = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_1a0 = 0;
        uStack_19c = 0;
        uStack_1b0._0_4_ = 0x1010000;
        uStack_1a8._0_4_ = (uint)puStack_6a0;
        uStack_1a8._4_4_ = (uint)((ulong)puStack_6a0 >> 0x20);
        uStack_210._0_4_ = 0x2010000;
        uStack_200 = 0;
        uStack_1fc = 0;
        puStack_e8 = &uStack_e0;
        uStack_208 = &uStack_130;
        FUN_109b59078(0x405fc00000000000,0x406fe00000000000,&uStack_1b0,&uStack_210,1);
        uStack_1a0 = 0;
        uStack_19c = 0;
        uStack_1b0._0_4_ = 0x1010000;
        uStack_1a8 = (uint *)&uStack_130;
        iVar34 = (int)&uStack_1b0;
        FUN_109ab7930();
        if (iVar34 < 1) {
          fVar66 = 47.0;
        }
        else {
          uStack_200 = 0;
          uStack_1fc = 0;
          uStack_210._0_4_ = 0x1010000;
          uStack_208._0_4_ = uStack_4d0;
          uStack_208._4_4_ = uStack_4cc;
          uStack_260 = 0;
          uStack_25c = 0;
          uStack_270 = 0x1010000;
          uStack_268 = &uStack_130;
          FUN_109ab7c94(&uStack_1b0,&uStack_210,&uStack_270);
          fVar66 = (float)(double)CONCAT44(uStack_1b0._4_4_,(uint)uStack_1b0) + -80.0;
        }
        if (lStack_f8 != 0) {
          piVar31 = (int *)(lStack_f8 + 0x14);
          do {
            iVar34 = *piVar31;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar31,0x10);
            if (bVar5) {
              *piVar31 = iVar34 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar34 + -1 == 0) {
            func_0x000109a848d4(&uStack_130);
          }
        }
        lStack_f8 = 0;
        uStack_118 = 0;
        uStack_114 = 0;
        uStack_120 = 0;
        uStack_11c = 0;
        uStack_108 = 0;
        uStack_104 = 0;
        uStack_110 = 0;
        uStack_10c = 0;
        if (0 < (int)uStack_130._4_4_) {
          lVar28 = 0;
          do {
            *(undefined4 *)((long)puStack_f0 + lVar28 * 4) = 0;
            lVar28 = lVar28 + 1;
          } while (lVar28 < (int)uStack_130._4_4_);
        }
        if (puStack_e8 != &uStack_e0 && puStack_e8 != (undefined8 *)0x0) {
          _free(puStack_e8[-1]);
        }
        uStack_130 = &uStack_4d0;
        func_0x0001060c3a9c(&uStack_130);
        puVar32 = uStack_268;
        puVar27 = uStack_208;
        puVar20 = (undefined8 *)uStack_1a8;
        puVar30 = uStack_130;
        if (lStack_3b8 != 0) {
          piVar31 = (int *)(lStack_3b8 + 0x14);
          do {
            iVar34 = *piVar31;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar31,0x10);
            if (bVar5) {
              *piVar31 = iVar34 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar34 + -1 == 0) {
            func_0x000109a848d4(&uStack_3f0);
            puVar32 = uStack_268;
            puVar27 = uStack_208;
            puVar20 = (undefined8 *)uStack_1a8;
            puVar30 = uStack_130;
          }
        }
        lStack_3b8 = 0;
        uStack_3d8 = 0;
        uStack_3d4 = 0;
        uStack_3e0 = 0;
        uStack_3dc = 0;
        uStack_3c8 = 0;
        uStack_3c4 = 0;
        uStack_3d0 = 0;
        uStack_3cc = 0;
        if (0 < uStack_3f0._4_4_) {
          lVar28 = 0;
          do {
            *(undefined4 *)((long)puStack_3b0 + lVar28 * 4) = 0;
            lVar28 = lVar28 + 1;
          } while (lVar28 < uStack_3f0._4_4_);
        }
        uStack_268 = puVar32;
        uStack_208 = puVar27;
        uStack_1a8 = (uint *)puVar20;
        uStack_130 = puVar30;
        if (puStack_3a8 != &uStack_3a0 && puStack_3a8 != (undefined8 *)0x0) {
          _free(puStack_3a8[-1]);
        }
        uStack_3f0._0_4_ = 0x42ff0000;
        puStack_3b0 = &uStack_3e8;
        uStack_3e8._4_4_ = 0;
        uStack_3e0 = 0;
        uStack_3f0._4_4_ = 0;
        uStack_3e8._0_4_ = 0;
        uStack_3d4 = 0;
        uStack_3d0 = 0;
        uStack_3dc = 0;
        uStack_3d8 = 0;
        uStack_3c4 = 0;
        uStack_3cc = 0;
        uStack_3c8 = 0;
        lStack_3b8 = 0;
        uStack_3c0 = 0;
        uStack_3bc = 0;
        uStack_398 = 0;
        uStack_3a0 = 0;
        uStack_1b0._0_4_ = 1;
        uStack_1b0._4_4_ = 0x100;
        puStack_3a8 = &uStack_3a0;
        FUN_109a83fd0(&uStack_3f0,2,&uStack_1b0,0);
        lVar28 = 0;
        uStack_688 = 0;
        uStack_690 = (ulong)(uint)((255.0 - fVar66) / 255.0);
        fStack_678 = 255.0;
        fStack_674 = 255.0;
        uStack_680 = 0x437f0000437f0000;
        lVar29 = CONCAT44(uStack_3dc,uStack_3e0);
        iVar42 = 0xc;
        iVar46 = 0xd;
        iVar47 = 0xe;
        iVar48 = 0xf;
        iVar34 = 8;
        iVar39 = 9;
        iVar40 = 10;
        iVar41 = 0xb;
        iVar56 = 4;
        iVar61 = 5;
        iVar62 = 6;
        iVar63 = 7;
        iVar49 = 0;
        iVar53 = 1;
        iVar54 = 2;
        iVar55 = 3;
        do {
          auVar13._4_4_ = iVar39;
          auVar13._0_4_ = iVar34;
          auVar13._8_4_ = iVar40;
          auVar13._12_4_ = iVar41;
          auVar14._4_4_ = iVar46;
          auVar14._0_4_ = iVar42;
          auVar14._8_4_ = iVar47;
          auVar14._12_4_ = iVar48;
          auVar35 = NEON_ucvtf(auVar13,4);
          auVar43 = NEON_ucvtf(auVar14,4);
          auVar60._4_4_ = iVar53;
          auVar60._0_4_ = iVar49;
          auVar60._8_4_ = iVar54;
          auVar60._12_4_ = iVar55;
          auVar12._4_4_ = iVar61;
          auVar12._0_4_ = iVar56;
          auVar12._8_4_ = iVar62;
          auVar12._12_4_ = iVar63;
          auVar50 = NEON_ucvtf(auVar60,4);
          auVar57 = NEON_ucvtf(auVar12,4);
          fVar65 = (float)uStack_680;
          fVar64 = (float)((ulong)uStack_680 >> 0x20);
          fVar66 = (float)uStack_690;
          uStack_628 = CONCAT44((auVar43._12_4_ / fStack_674) * fVar66,
                                (auVar43._8_4_ / fStack_678) * fVar66);
          uStack_630 = CONCAT44((auVar43._4_4_ / fVar64) * fVar66,(auVar43._0_4_ / fVar65) * fVar66)
          ;
          uStack_618 = CONCAT44((auVar35._12_4_ / fStack_674) * fVar66,
                                (auVar35._8_4_ / fStack_678) * fVar66);
          uStack_620 = (undefined8 *)
                       CONCAT44((auVar35._4_4_ / fVar64) * fVar66,(auVar35._0_4_ / fVar65) * fVar66)
          ;
          fVar38 = (auVar57._4_4_ / fVar64) * fVar66;
          uStack_608 = CONCAT44((auVar50._12_4_ / fStack_674) * fVar66,
                                (auVar50._8_4_ / fStack_678) * fVar66);
          uStack_610 = (undefined8 *)
                       CONCAT44((auVar50._4_4_ / fVar64) * fVar66,(auVar50._0_4_ / fVar65) * fVar66)
          ;
          uStack_5f8 = CONCAT44((auVar57._12_4_ / fStack_674) * fVar66,
                                (auVar57._8_4_ / fStack_678) * fVar66);
          uStack_600 = (undefined8 *)CONCAT44(fVar38,(auVar57._0_4_ / fVar65) * fVar66);
          iStack_670 = iVar49;
          iStack_66c = iVar53;
          iStack_668 = iVar54;
          iStack_664 = iVar55;
          iStack_660 = iVar56;
          iStack_65c = iVar61;
          iStack_658 = iVar62;
          iStack_654 = iVar63;
          iStack_650 = iVar34;
          iStack_64c = iVar39;
          iStack_648 = iVar40;
          iStack_644 = iVar41;
          iStack_640 = iVar42;
          iStack_63c = iVar46;
          iStack_638 = iVar47;
          iStack_634 = iVar48;
          uStack_5f0 = (undefined8 *)_powf(fVar38,0x3fcccccd);
          uVar33 = _powf(uStack_600,0x3fcccccd);
          uStack_5f0._4_4_ = (undefined4)uStack_5f0;
          uStack_5f0._0_4_ = uVar33;
          uStack_5e8._4_4_ = extraout_var;
          uVar33 = _powf(uStack_5f8 & 0xffffffff,0x3fcccccd);
          uStack_5e8 = CONCAT44(uStack_5e8._4_4_,uVar33);
          uVar33 = _powf(uStack_5f8._4_4_,0x3fcccccd);
          uStack_5e8 = CONCAT44(uVar33,(int)uStack_5e8);
          uStack_600 = (undefined8 *)_powf(uStack_610._4_4_,0x3fcccccd);
          uVar33 = _powf(uStack_610,0x3fcccccd);
          uStack_600._4_4_ = (float)uStack_600;
          uStack_600._0_4_ = (float)uVar33;
          uStack_5f8._4_4_ = (float)extraout_var_00;
          uVar33 = _powf(uStack_608 & 0xffffffff,0x3fcccccd);
          uStack_5f8 = CONCAT44(uStack_5f8._4_4_,uVar33);
          uVar33 = _powf(uStack_608._4_4_,0x3fcccccd);
          uStack_5f8 = CONCAT44(uVar33,(int)uStack_5f8);
          uStack_610 = (undefined8 *)_powf(uStack_630._4_4_,0x3fcccccd);
          uVar33 = _powf(uStack_630,0x3fcccccd);
          uStack_610._4_4_ = (float)uStack_610;
          uStack_610._0_4_ = (float)uVar33;
          uStack_608._4_4_ = (float)extraout_var_01;
          uVar33 = _powf(uStack_628 & 0xffffffff,0x3fcccccd);
          uStack_608 = CONCAT44(uStack_608._4_4_,uVar33);
          uVar33 = _powf(uStack_628._4_4_,0x3fcccccd);
          uStack_608 = CONCAT44(uVar33,(int)uStack_608);
          uStack_630 = _powf(uStack_620._4_4_,0x3fcccccd);
          uVar33 = _powf(uStack_620,0x3fcccccd);
          uStack_630._4_4_ = (float)uStack_630;
          uStack_630._0_4_ = (float)uVar33;
          uStack_628._4_4_ = extraout_var_02;
          uVar33 = _powf(uStack_618 & 0xffffffff,0x3fcccccd);
          uStack_628 = CONCAT44(uStack_628._4_4_,uVar33);
          fVar66 = (float)_powf(uStack_618._4_4_,0x3fcccccd);
          auVar36._0_4_ = (float)uStack_630 * (float)uStack_680;
          auVar36._4_4_ = uStack_630._4_4_ * uStack_680._4_4_;
          auVar36._8_4_ = (float)uStack_628 * fStack_678;
          auVar36._12_4_ = fVar66 * fStack_674;
          auVar44._0_4_ = (float)uStack_610 * (float)uStack_680;
          auVar44._4_4_ = uStack_610._4_4_ * uStack_680._4_4_;
          auVar44._8_4_ = (float)uStack_608 * fStack_678;
          auVar44._12_4_ = uStack_608._4_4_ * fStack_674;
          auVar51._0_4_ = (float)uStack_600 * (float)uStack_680;
          auVar51._4_4_ = uStack_600._4_4_ * uStack_680._4_4_;
          auVar51._8_4_ = (float)uStack_5f8 * fStack_678;
          auVar51._12_4_ = uStack_5f8._4_4_ * fStack_674;
          auVar58._0_4_ = SUB84(uStack_5f0,0) * (float)uStack_680;
          auVar58._4_4_ = (float)((ulong)uStack_5f0 >> 0x20) * uStack_680._4_4_;
          auVar58._8_4_ = (float)uStack_5e8 * fStack_678;
          auVar58._12_4_ = (float)((ulong)uStack_5e8 >> 0x20) * fStack_674;
          iVar34 = (int)auVar58._4_4_;
          auVar57 = NEON_ext(auVar58,auVar58,8,1);
          auVar50 = NEON_ext(auVar51,auVar51,8,1);
          auVar43 = NEON_ext(auVar44,auVar44,8,1);
          auVar35 = NEON_ext(auVar36,auVar36,8,1);
          auVar37._4_4_ = (int)(long)(float)(int)auVar36._4_4_;
          auVar37._0_4_ = (int)(long)(float)(int)auVar36._0_4_;
          auVar37._8_4_ = (int)(long)(float)(int)auVar35._0_4_;
          auVar37._12_4_ = (int)(long)(float)(int)auVar35._4_4_;
          auVar45._4_4_ = (int)(long)(float)(int)auVar44._4_4_;
          auVar45._0_4_ = (int)(long)(float)(int)auVar44._0_4_;
          auVar45._8_4_ = (int)(long)(float)(int)auVar43._0_4_;
          auVar45._12_4_ = (int)(long)(float)(int)auVar43._4_4_;
          auVar52._4_4_ = (int)(long)(float)(int)auVar51._4_4_;
          auVar52._0_4_ = (int)(long)(float)(int)auVar51._0_4_;
          auVar52._8_4_ = (int)(long)(float)(int)auVar50._0_4_;
          auVar52._12_4_ = (int)(long)(float)(int)auVar50._4_4_;
          auVar59._4_4_ =
               (int)(long)(float)(CONCAT17((char)((uint)iVar34 >> 0x18),
                                           CONCAT16((char)((uint)iVar34 >> 0x10),
                                                    CONCAT15((char)((uint)iVar34 >> 8),
                                                             CONCAT14((char)iVar34,
                                                                      (int)auVar58._0_4_)))) >> 0x20
                                 );
          auVar59._0_4_ = (int)(long)(float)(int)auVar58._0_4_;
          auVar59._8_4_ = (int)(long)(float)(int)auVar57._0_4_;
          auVar59._12_4_ = (int)(long)(float)(int)auVar57._4_4_;
          auVar60 = NEON_smax(auVar59,ZEXT216(0),4);
          auVar57 = NEON_smax(auVar52,ZEXT216(0),4);
          auVar50 = NEON_smax(auVar45,ZEXT216(0),4);
          auVar43 = NEON_smax(auVar37,ZEXT216(0),4);
          auVar35[8] = 0xff;
          auVar35._0_8_ = 0xff000000ff;
          auVar35._9_3_ = 0;
          auVar35[0xc] = 0xff;
          auVar35._13_3_ = 0;
          auVar35 = NEON_smin(auVar43,auVar35,4);
          auVar43[8] = 0xff;
          auVar43._0_8_ = 0xff000000ff;
          auVar43._9_3_ = 0;
          auVar43[0xc] = 0xff;
          auVar43._13_3_ = 0;
          auVar43 = NEON_smin(auVar50,auVar43,4);
          auVar50[8] = 0xff;
          auVar50._0_8_ = 0xff000000ff;
          auVar50._9_3_ = 0;
          auVar50[0xc] = 0xff;
          auVar50._13_3_ = 0;
          auVar50 = NEON_smin(auVar57,auVar50,4);
          auVar57[8] = 0xff;
          auVar57._0_8_ = 0xff000000ff;
          auVar57._9_3_ = 0;
          auVar57[0xc] = 0xff;
          auVar57._13_3_ = 0;
          auVar57 = NEON_smin(auVar60,auVar57,4);
          puVar6 = (undefined1 *)(lVar29 + lVar28);
          puVar6[8] = auVar35[0];
          puVar6[9] = auVar35[4];
          puVar6[10] = auVar35[8];
          puVar6[0xb] = auVar35[0xc];
          puVar6[0xc] = auVar43[0];
          puVar6[0xd] = auVar43[4];
          puVar6[0xe] = auVar43[8];
          puVar6[0xf] = auVar43[0xc];
          *puVar6 = auVar50[0];
          puVar6[1] = auVar50[4];
          puVar6[2] = auVar50[8];
          puVar6[3] = auVar50[0xc];
          puVar6[4] = auVar57[0];
          puVar6[5] = auVar57[4];
          puVar6[6] = auVar57[8];
          puVar6[7] = auVar57[0xc];
          lVar28 = lVar28 + 0x10;
          iVar49 = iStack_670 + 0x10;
          iVar53 = iStack_66c + 0x10;
          iVar54 = iStack_668 + 0x10;
          iVar55 = iStack_664 + 0x10;
          iVar56 = iStack_660 + 0x10;
          iVar61 = iStack_65c + 0x10;
          iVar62 = iStack_658 + 0x10;
          iVar63 = iStack_654 + 0x10;
          iVar34 = iStack_650 + 0x10;
          iVar39 = iStack_64c + 0x10;
          iVar40 = iStack_648 + 0x10;
          iVar41 = iStack_644 + 0x10;
          iVar42 = iStack_640 + 0x10;
          iVar46 = iStack_63c + 0x10;
          iVar47 = iStack_638 + 0x10;
          iVar48 = iStack_634 + 0x10;
        } while (lVar28 != 0x100);
        uStack_130._0_4_ = 0x42ff0000;
        uStack_128._4_4_ = 0;
        uStack_120 = 0;
        uStack_130._4_4_ = 0;
        uStack_128._0_4_ = 0;
        puStack_f0 = (undefined8 *)((ulong)&uStack_130 | 8);
        uStack_114 = 0;
        uStack_110 = 0;
        uStack_11c = 0;
        uStack_118 = 0;
        uStack_104 = 0;
        uStack_10c = 0;
        uStack_108 = 0;
        lStack_f8 = 0;
        uStack_100 = 0;
        uStack_fc = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_1a0 = 0;
        uStack_19c = 0;
        uStack_1b0._0_4_ = 0x1010000;
        uStack_4c0 = 0;
        uStack_4bc = 0;
        uStack_4d0 = 0x1010000;
        uStack_4c8 = &uStack_3f0;
        uStack_210._0_4_ = 0x2010000;
        uStack_200 = 0;
        uStack_1fc = 0;
        uStack_1a8._0_4_ = uVar17;
        uStack_1a8._4_4_ = uVar19;
        puStack_e8 = &uStack_e0;
        uStack_208 = &uStack_130;
        FUN_109a41f20(&uStack_1b0,&uStack_4d0,&uStack_210);
        puVar32 = uStack_268;
        puVar27 = uStack_208;
        if (lStack_3b8 != 0) {
          piVar31 = (int *)(lStack_3b8 + 0x14);
          do {
            iVar34 = *piVar31;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar31,0x10);
            if (bVar5) {
              *piVar31 = iVar34 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar34 + -1 == 0) {
            func_0x000109a848d4(&uStack_3f0);
            puVar32 = uStack_268;
            puVar27 = uStack_208;
          }
        }
        lStack_3b8 = 0;
        uStack_3d8 = 0;
        uStack_3d4 = 0;
        uStack_3e0 = 0;
        uStack_3dc = 0;
        uStack_3c8 = 0;
        uStack_3c4 = 0;
        uStack_3d0 = 0;
        uStack_3cc = 0;
        if (0 < uStack_3f0._4_4_) {
          lVar28 = 0;
          do {
            *(undefined4 *)((long)puStack_3b0 + lVar28 * 4) = 0;
            lVar28 = lVar28 + 1;
          } while (lVar28 < uStack_3f0._4_4_);
        }
        uStack_268 = puVar32;
        uStack_208 = puVar27;
        if (puStack_3a8 != &uStack_3a0 && puStack_3a8 != (undefined8 *)0x0) {
          _free(puStack_3a8[-1]);
        }
        if (lStack_548 != 0) {
          piVar31 = (int *)(lStack_548 + 0x14);
          do {
            iVar34 = *piVar31;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar31,0x10);
            if (bVar5) {
              *piVar31 = iVar34 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar34 + -1 == 0) {
            func_0x000109a848d4(&uStack_580);
          }
        }
        if (0 < (int)uStack_57c) {
          lVar28 = 0;
          do {
            *(undefined4 *)((long)puStack_540 + lVar28 * 4) = 0;
            lVar28 = lVar28 + 1;
          } while (lVar28 < (int)uStack_57c);
        }
        uStack_578 = (uint)uStack_128;
        uStack_574 = uStack_128._4_4_;
        uStack_580 = (uint)uStack_130;
        uStack_57c = uStack_130._4_4_;
        uStack_568 = uStack_118;
        uStack_564 = uStack_114;
        uStack_570 = uStack_120;
        uStack_56c = uStack_11c;
        uStack_558 = uStack_108;
        uStack_554 = uStack_104;
        uStack_560 = uStack_110;
        uStack_55c = uStack_10c;
        lStack_548 = lStack_f8;
        uStack_550 = uStack_100;
        uStack_54c = uStack_fc;
        puVar32 = uStack_4c8;
        puVar27 = uStack_268;
        puVar20 = uStack_208;
        if (puStack_538 != puStack_698) {
          if (puStack_538 != (undefined8 *)0x0) {
            _free(puStack_538[-1]);
            puVar32 = uStack_4c8;
            puVar27 = uStack_268;
            puVar20 = uStack_208;
          }
          puStack_540 = puStack_6a8;
          puStack_538 = puStack_698;
        }
        puVar30 = (uint *)CONCAT44(uStack_1a8._4_4_,(uint)uStack_1a8);
        puVar15 = (undefined8 *)CONCAT44(uStack_3f0._4_4_,(undefined4)uStack_3f0);
        if ((int)uStack_130._4_4_ < 3) {
          puVar26 = (undefined8 *)((ulong)&uStack_130 | 4);
          *puStack_538 = *puStack_e8;
          puStack_538[1] = puStack_e8[1];
          uStack_130._0_4_ = 0x42ff0000;
          puVar26[1] = 0;
          *puVar26 = 0;
          puVar26[3] = 0;
          puVar26[2] = 0;
          puVar26[5] = 0;
          puVar26[4] = 0;
          *(undefined8 *)((long)puVar26 + 0x34) = 0;
          *(undefined8 *)((long)puVar26 + 0x2c) = 0;
          puVar25 = puStack_e8;
          uStack_208 = puVar20;
          puVar26 = puVar27;
          if (puStack_e8 != &uStack_e0) goto LAB_10918cd34;
        }
        else {
          puStack_540 = puStack_f0;
          puStack_538 = puStack_e8;
        }
      }
      else {
        unaff_x19 = param_1;
        unaff_x29 = puVar6;
        if (iVar34 != 3) {
          if (iVar34 != 4) goto LAB_10918d5e0;
          if (*(long *)(param_2 + 0xe8) != 0) {
            uVar24 = (ulong)*(uint *)(param_2 + 0xdc);
            if ((int)*(uint *)(param_2 + 0xdc) < 3) {
              lVar28 = (long)*(int *)(param_2 + 0xe4) * (long)*(int *)(param_2 + 0xe0);
            }
            else {
              lVar28 = 1;
              piVar31 = *(int **)(param_2 + 0x118);
              do {
                lVar28 = lVar28 * *piVar31;
                uVar24 = uVar24 - 1;
                piVar31 = piVar31 + 1;
              } while (uVar24 != 0);
            }
            if ((lVar28 != 0) && ((*(ushort *)(param_2 + 0xd8) & 0xfff) == 0)) {
              puVar27 = (undefined8 *)CONCAT44(uStack_268._4_4_,(undefined4)uStack_268);
              puVar20 = (undefined8 *)CONCAT44(uStack_208._4_4_,(uint)uStack_208);
              if (&uStack_580 != param_3) {
                if (*(long *)(param_3 + 0xe) != 0) {
                  piVar31 = (int *)(*(long *)(param_3 + 0xe) + 0x14);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar31,0x10);
                    if (bVar5) {
                      *piVar31 = *piVar31 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                lStack_548 = 0;
                uStack_568 = 0;
                uStack_564 = 0;
                uStack_570 = 0;
                uStack_56c = 0;
                uStack_558 = 0;
                uStack_554 = 0;
                uStack_560 = 0;
                uStack_55c = 0;
                uStack_580 = *param_3;
                uVar23 = param_3[1];
                if (2 < (int)uVar23) {
                  param_1 = &uStack_580;
                  unaff_x30 = 0x10918cbe4;
                  register0x00000008 = (BADSPACEBASE *)&uStack_6b0;
                  param_4 = param_3;
                  goto SUB_109a84868;
                }
                goto LAB_10918cbb0;
              }
              goto LAB_10918cd48;
            }
          }
          puVar22 = (undefined4 *)0x3c;
          uStack_6b0 = param_6;
          uStack_128._0_4_ = uVar33;
          uStack_128._4_4_ = uVar18;
          func_0x000107c2ae8c();
          *puVar22 = 1;
          uStack_3f0 = (undefined8 *)(puVar22 + 1);
          uStack_3e8._0_4_ = 0x37;
          uStack_3e8._4_4_ = 0;
          *(undefined8 *)(puVar22 + 3) = 0x6d652e6b73614d61;
          *(undefined8 *)(puVar22 + 1) = 0x68706c4147426d21;
          *(undefined1 *)((long)puVar22 + 0x3b) = 0;
          *(undefined8 *)(puVar22 + 7) = 0x68706c4147426d20;
          *(undefined8 *)(puVar22 + 5) = 0x2626202928797470;
          *(undefined8 *)(puVar22 + 0xb) = 0x203d3d2029286570;
          *(undefined8 *)(puVar22 + 9) = 0x79742e6b73614d61;
          *(undefined8 *)((long)puVar22 + 0x33) = 0x314355385f564320;
          FUN_109ac3188(0xffffff29,&uStack_3f0,&UNK_10f55a6e6,&UNK_10f55a6ea,0x13c);
          goto LAB_10918d6a8;
        }
        puVar27 = uStack_268;
        puVar20 = (undefined8 *)CONCAT44(uStack_208._4_4_,(uint)uStack_208);
        if (&uStack_580 != param_3) {
          if (*(long *)(param_3 + 0xe) != 0) {
            piVar31 = (int *)(*(long *)(param_3 + 0xe) + 0x14);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar31,0x10);
              if (bVar5) {
                *piVar31 = *piVar31 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lStack_548 = 0;
          uStack_568 = 0;
          uStack_564 = 0;
          uStack_570 = 0;
          uStack_56c = 0;
          uStack_558 = 0;
          uStack_554 = 0;
          uStack_560 = 0;
          uStack_55c = 0;
          uStack_580 = *param_3;
          uVar23 = param_3[1];
          if (2 < (int)uVar23) {
            param_1 = &uStack_580;
            unaff_x30 = 0x10918cb98;
            register0x00000008 = (BADSPACEBASE *)&uStack_6b0;
            param_4 = param_3;
            goto SUB_109a84868;
          }
LAB_10918cbb0:
          uStack_578 = (uint)*(undefined8 *)(param_3 + 2);
          uStack_574 = (uint)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20);
          uStack_530 = **(undefined8 **)(param_3 + 0x12);
          uStack_528 = (*(undefined8 **)(param_3 + 0x12))[1];
          uStack_568 = (undefined4)*(undefined8 *)(param_3 + 6);
          uStack_564 = (undefined4)((ulong)*(undefined8 *)(param_3 + 6) >> 0x20);
          uStack_570 = (undefined4)*(undefined8 *)(param_3 + 4);
          uStack_56c = (undefined4)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20);
          uStack_558 = (undefined4)*(undefined8 *)(param_3 + 10);
          uStack_554 = (undefined4)((ulong)*(undefined8 *)(param_3 + 10) >> 0x20);
          uStack_560 = (undefined4)*(undefined8 *)(param_3 + 8);
          uStack_55c = (undefined4)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20);
          lStack_548 = *(long *)(param_3 + 0xe);
          uStack_550 = (undefined4)*(undefined8 *)(param_3 + 0xc);
          uStack_54c = (undefined4)((ulong)*(undefined8 *)(param_3 + 0xc) >> 0x20);
          uStack_57c = uVar23;
          puVar27 = (undefined8 *)CONCAT44(uStack_268._4_4_,(undefined4)uStack_268);
          puVar20 = (undefined8 *)CONCAT44(uStack_208._4_4_,(uint)uStack_208);
        }
      }
LAB_10918cd48:
      uStack_130._0_4_ = 0x42ff0000;
      uStack_4c8 = &uStack_130;
      uStack_128._4_4_ = 0;
      uStack_120 = 0;
      uStack_130._4_4_ = 0;
      uStack_128._0_4_ = 0;
      puStack_f0 = &uStack_128;
      uStack_114 = 0;
      uStack_110 = 0;
      uStack_11c = 0;
      uStack_118 = 0;
      uStack_104 = 0;
      uStack_10c = 0;
      uStack_108 = 0;
      lStack_f8 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_1b0._0_4_ = 0x42ff0000;
      puVar32 = (undefined8 *)((ulong)&uStack_1b0 | 8);
      uStack_1a8._4_4_ = 0;
      uStack_1a0 = 0;
      uStack_1b0._4_4_ = 0;
      uStack_1a8._0_4_ = 0;
      uStack_194 = 0;
      uStack_190 = 0;
      uStack_19c = 0;
      uStack_198 = 0;
      uStack_184 = 0;
      uStack_18c = 0;
      uStack_188 = 0;
      lStack_178 = 0;
      uStack_180 = 0;
      uStack_17c = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_3e0 = 0;
      uStack_3dc = 0;
      uStack_3f0._0_4_ = 0x1010000;
      uStack_3e8 = &uStack_580;
      uStack_4d0 = 0x2010000;
      uStack_4c0 = 0;
      uStack_4bc = 0;
      puStack_170 = puVar32;
      puStack_168 = &uStack_160;
      puStack_e8 = &uStack_e0;
      uStack_268 = puVar27;
      uStack_208 = puVar20;
      FUN_109ac9fc8(&uStack_3f0,&uStack_4d0,0x24,0);
      uStack_3e0 = 0;
      uStack_3dc = 0;
      uStack_3f0._0_4_ = 0x1010000;
      uStack_3e8._0_4_ = SUB84(param_4,0);
      uStack_3e8._4_4_ = (undefined4)((ulong)param_4 >> 0x20);
      uStack_4d0 = 0x2010000;
      uStack_4c0 = 0;
      uStack_4bc = 0;
      uStack_4c8 = &uStack_1b0;
      FUN_109ac9fc8(&uStack_3f0,&uStack_4d0,0x24,0);
      uStack_1a8 = (uint *)CONCAT44(uStack_1a8._4_4_,(uint)uStack_1a8);
      if (*(long *)(param_2 + 0xe8) != 0) {
        uVar24 = (ulong)*(uint *)(param_2 + 0xdc);
        if ((int)*(uint *)(param_2 + 0xdc) < 3) {
          lVar28 = (long)*(int *)(param_2 + 0xe4) * (long)*(int *)(param_2 + 0xe0);
        }
        else {
          lVar28 = 1;
          piVar31 = *(int **)(param_2 + 0x118);
          do {
            lVar28 = lVar28 * *piVar31;
            uVar24 = uVar24 - 1;
            piVar31 = piVar31 + 1;
          } while (uVar24 != 0);
        }
        uStack_1a8 = (uint *)CONCAT44(uStack_1a8._4_4_,(uint)uStack_1a8);
        if (lVar28 != 0) {
          uStack_270 = 0;
          iStack_26c = 0x406fe000;
          uStack_268._0_4_ = 0;
          uStack_268._4_4_ = 0;
          uStack_258 = 0;
          uStack_254 = 0;
          uStack_260 = 0;
          uStack_25c = 0;
          FUN_109a7cf94(&uStack_3f0,&uStack_270,param_2 + 0xd8);
          uStack_210._0_4_ = 0x42ff0000;
          puStack_1d0 = &uStack_208;
          uStack_208._4_4_ = 0;
          uStack_200 = 0;
          uStack_210._4_4_ = 0;
          uStack_208._0_4_ = 0;
          lStack_1d8 = 0;
          uStack_1dc = 0;
          uStack_1e4 = 0;
          uStack_1e0 = 0;
          uStack_1ec = 0;
          uStack_1e8 = 0;
          uStack_1f4 = 0;
          uStack_1f0 = 0;
          uStack_1fc = 0;
          uStack_1f8 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          puStack_1c8 = &uStack_1c0;
          (**(code **)(*(long *)CONCAT44(uStack_3f0._4_4_,(undefined4)uStack_3f0) + 0x18))
                    ((long *)CONCAT44(uStack_3f0._4_4_,(undefined4)uStack_3f0),&uStack_3f0,
                     &uStack_210,0xffffffff);
          FUN_109195cac(&uStack_4d0,&uStack_130,&uStack_1b0,&uStack_210);
          if (lStack_178 != 0) {
            piVar31 = (int *)(lStack_178 + 0x14);
            do {
              iVar34 = *piVar31;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar31,0x10);
              if (bVar5) {
                *piVar31 = iVar34 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar34 + -1 == 0) {
              func_0x000109a848d4(&uStack_1b0);
            }
          }
          if (0 < (int)uStack_1b0._4_4_) {
            lVar28 = 0;
            do {
              *(undefined4 *)((long)puStack_170 + lVar28 * 4) = 0;
              lVar28 = lVar28 + 1;
            } while (lVar28 < (int)uStack_1b0._4_4_);
          }
          uStack_1b0._0_4_ = uStack_4d0;
          uStack_1b0._4_4_ = uStack_4cc;
          uStack_198 = uStack_4b8;
          uStack_194 = uStack_4b4;
          uStack_1a0 = uStack_4c0;
          uStack_19c = uStack_4bc;
          uStack_188 = uStack_4a8;
          uStack_184 = uStack_4a4;
          uStack_190 = uStack_4b0;
          uStack_18c = uStack_4ac;
          lStack_178 = lStack_498;
          uStack_180 = uStack_4a0;
          uStack_17c = uStack_49c;
          puVar27 = puStack_170;
          puVar20 = puStack_168;
          uStack_1a8 = (uint *)uStack_4c8;
          if ((puStack_168 != &uStack_160) &&
             (puVar27 = puVar32, puVar20 = &uStack_160, puStack_168 != (undefined8 *)0x0)) {
            _free(puStack_168[-1]);
          }
          puStack_168 = puVar20;
          puStack_170 = puVar27;
          puVar32 = (undefined8 *)((ulong)&uStack_4d0 | 4);
          if ((int)uStack_4cc < 3) {
            *puStack_168 = *puStack_488;
            puStack_168[1] = puStack_488[1];
            uStack_4d0 = 0x42ff0000;
            puVar32[1] = 0;
            *puVar32 = 0;
            puVar32[3] = 0;
            puVar32[2] = 0;
            puVar32[5] = 0;
            puVar32[4] = 0;
            *(undefined8 *)((long)puVar32 + 0x34) = 0;
            *(undefined8 *)((long)puVar32 + 0x2c) = 0;
            if (puStack_488 != &uStack_480) {
              _free(puStack_488[-1]);
            }
          }
          else {
            puStack_168 = puStack_488;
            puStack_170 = puStack_490;
            puStack_488 = &uStack_480;
            uStack_4d0 = 0x42ff0000;
            puVar32[1] = 0;
            *puVar32 = 0;
            puVar32[3] = 0;
            puVar32[2] = 0;
            puVar32[5] = 0;
            puVar32[4] = 0;
            *(undefined8 *)((long)puVar32 + 0x34) = 0;
            *(undefined8 *)((long)puVar32 + 0x2c) = 0;
            puStack_490 = (undefined8 *)((ulong)&uStack_4d0 | 8);
          }
          if (lStack_1d8 != 0) {
            piVar31 = (int *)(lStack_1d8 + 0x14);
            do {
              iVar34 = *piVar31;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar31,0x10);
              if (bVar5) {
                *piVar31 = iVar34 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar34 + -1 == 0) {
              func_0x000109a848d4(&uStack_210);
            }
          }
          lStack_1d8 = 0;
          uStack_1f8 = 0;
          uStack_1f4 = 0;
          uStack_200 = 0;
          uStack_1fc = 0;
          uStack_1e8 = 0;
          uStack_1e4 = 0;
          uStack_1f0 = 0;
          uStack_1ec = 0;
          if (0 < uStack_210._4_4_) {
            lVar28 = 0;
            do {
              *(undefined4 *)((long)puStack_1d0 + lVar28 * 4) = 0;
              lVar28 = lVar28 + 1;
            } while (lVar28 < uStack_210._4_4_);
          }
          if (puStack_1c8 != &uStack_1c0 && puStack_1c8 != (undefined8 *)0x0) {
            _free(puStack_1c8[-1]);
          }
          FUN_10918eb6c(&uStack_3f0);
        }
      }
      uStack_210._0_4_ = 0;
      uStack_210._4_4_ = 0x406fe000;
      uStack_208._0_4_ = 0;
      uStack_208._4_4_ = 0;
      uStack_1f8 = 0;
      uStack_1f4 = 0;
      uStack_200 = 0;
      uStack_1fc = 0;
      FUN_109a7cf94(&uStack_3f0,&uStack_210,puStack_6a0);
      uStack_4d0 = 0x42ff0000;
      puStack_490 = &uStack_4c8;
      uStack_4c8._4_4_ = 0;
      uStack_4c0 = 0;
      uStack_4cc = 0;
      uStack_4c8._0_4_ = 0;
      lStack_498 = 0;
      uStack_49c = 0;
      uStack_4a4 = 0;
      uStack_4a0 = 0;
      uStack_4ac = 0;
      uStack_4a8 = 0;
      uStack_4b4 = 0;
      uStack_4b0 = 0;
      uStack_4bc = 0;
      uStack_4b8 = 0;
      uStack_478 = 0;
      uStack_480 = 0;
      puStack_488 = &uStack_480;
      (**(code **)(*(long *)CONCAT44(uStack_3f0._4_4_,(undefined4)uStack_3f0) + 0x18))
                ((long *)CONCAT44(uStack_3f0._4_4_,(undefined4)uStack_3f0),&uStack_3f0,&uStack_4d0,
                 0xffffffff);
      FUN_109195cac(param_1,&uStack_130,&uStack_1b0,&uStack_4d0);
      puVar32 = uStack_268;
      puVar27 = (undefined8 *)uStack_1a8;
      if (lStack_498 != 0) {
        piVar31 = (int *)(lStack_498 + 0x14);
        do {
          iVar34 = *piVar31;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar31,0x10);
          if (bVar5) {
            *piVar31 = iVar34 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar34 + -1 == 0) {
          func_0x000109a848d4(&uStack_4d0);
          puVar32 = uStack_268;
          puVar27 = (undefined8 *)uStack_1a8;
        }
      }
      lStack_498 = 0;
      uStack_4b8 = 0;
      uStack_4b4 = 0;
      uStack_4c0 = 0;
      uStack_4bc = 0;
      uStack_4a8 = 0;
      uStack_4a4 = 0;
      uStack_4b0 = 0;
      uStack_4ac = 0;
      if (0 < (int)uStack_4cc) {
        lVar28 = 0;
        do {
          *(undefined4 *)((long)puStack_490 + lVar28 * 4) = 0;
          lVar28 = lVar28 + 1;
        } while (lVar28 < (int)uStack_4cc);
      }
      uStack_268 = puVar32;
      uStack_1a8 = (uint *)puVar27;
      if (puStack_488 != &uStack_480 && puStack_488 != (undefined8 *)0x0) {
        _free(puStack_488[-1]);
      }
      FUN_10918eb6c(&uStack_3f0);
      uStack_3e0 = 0;
      uStack_3dc = 0;
      uStack_3f0._0_4_ = 0x1010000;
      uStack_3e8._0_4_ = SUB84(param_1,0);
      uStack_3e8._4_4_ = (undefined4)((ulong)param_1 >> 0x20);
      uStack_4d0 = 0x2010000;
      uStack_4c0 = 0;
      uStack_4bc = 0;
      uStack_4c8._0_4_ = (undefined4)uStack_3e8;
      uStack_4c8._4_4_ = uStack_3e8._4_4_;
      FUN_109ac9fc8(&uStack_3f0,&uStack_4d0,0x27,0);
      puVar32 = uStack_268;
      puVar27 = (undefined8 *)uStack_1a8;
      if (lStack_178 != 0) {
        piVar31 = (int *)(lStack_178 + 0x14);
        do {
          iVar34 = *piVar31;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar31,0x10);
          if (bVar5) {
            *piVar31 = iVar34 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar34 + -1 == 0) {
          func_0x000109a848d4(&uStack_1b0);
          puVar32 = uStack_268;
          puVar27 = (undefined8 *)uStack_1a8;
        }
      }
      lStack_178 = 0;
      uStack_198 = 0;
      uStack_194 = 0;
      uStack_1a0 = 0;
      uStack_19c = 0;
      uStack_188 = 0;
      uStack_184 = 0;
      uStack_190 = 0;
      uStack_18c = 0;
      if (0 < (int)uStack_1b0._4_4_) {
        lVar28 = 0;
        do {
          *(undefined4 *)((long)puStack_170 + lVar28 * 4) = 0;
          lVar28 = lVar28 + 1;
        } while (lVar28 < (int)uStack_1b0._4_4_);
      }
      uStack_268 = puVar32;
      uStack_1a8 = (uint *)puVar27;
      if (puStack_168 != &uStack_160 && puStack_168 != (undefined8 *)0x0) {
        _free(puStack_168[-1]);
      }
      if (lStack_f8 != 0) {
        piVar31 = (int *)(lStack_f8 + 0x14);
        do {
          iVar34 = *piVar31;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar31,0x10);
          if (bVar5) {
            *piVar31 = iVar34 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar34 + -1 == 0) {
          func_0x000109a848d4(&uStack_130);
        }
      }
      lStack_f8 = 0;
      uStack_118 = 0;
      uStack_114 = 0;
      uStack_120 = 0;
      uStack_11c = 0;
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      if (0 < (int)uStack_130._4_4_) {
        lVar28 = 0;
        do {
          *(undefined4 *)((long)puStack_f0 + lVar28 * 4) = 0;
          lVar28 = lVar28 + 1;
        } while (lVar28 < (int)uStack_130._4_4_);
      }
      if (puStack_e8 != &uStack_e0 && puStack_e8 != (undefined8 *)0x0) {
        _free(puStack_e8[-1]);
      }
      if (lStack_548 != 0) {
        piVar31 = (int *)(lStack_548 + 0x14);
        do {
          iVar34 = *piVar31;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar31,0x10);
          if (bVar5) {
            *piVar31 = iVar34 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar34 + -1 == 0) {
          func_0x000109a848d4(&uStack_580);
        }
      }
      lStack_548 = 0;
      uStack_568 = 0;
      uStack_564 = 0;
      uStack_570 = 0;
      uStack_56c = 0;
      uStack_558 = 0;
      uStack_554 = 0;
      uStack_560 = 0;
      uStack_55c = 0;
      if (0 < (int)uStack_57c) {
        lVar28 = 0;
        do {
          *(undefined4 *)((long)puStack_540 + lVar28 * 4) = 0;
          lVar28 = lVar28 + 1;
        } while (lVar28 < (int)uStack_57c);
      }
      if (puStack_538 != puStack_698 && puStack_538 != (undefined8 *)0x0) {
        _free(puStack_538[-1]);
      }
      goto LAB_10918d328;
    }
  }
  puVar22 = (undefined4 *)0x30;
  func_0x000107c2ae8c();
  *puVar22 = 1;
  uStack_3f0 = (undefined8 *)(puVar22 + 1);
  uStack_3e8._0_4_ = 0x2a;
  uStack_3e8._4_4_ = 0;
  *(undefined8 *)(puVar22 + 3) = 0x632e6762203d3d20;
  *(undefined8 *)(puVar22 + 1) = 0x736c6f632e637273;
  *(undefined1 *)((long)puVar22 + 0x2e) = 0;
  *(undefined8 *)(puVar22 + 7) = 0x2073776f722e6372;
  *(undefined8 *)(puVar22 + 5) = 0x7320262620736c6f;
  *(undefined8 *)((long)puVar22 + 0x26) = 0x73776f722e676220;
  *(undefined8 *)((long)puVar22 + 0x1e) = 0x3d3d2073776f722e;
  FUN_109ac3188(0xffffff29,&uStack_3f0,&UNK_10f55a6e6,&UNK_10f55a6ea,0x127);
LAB_10918d6a8:
                    /* WARNING: Does not return */
  pcVar21 = (code *)SoftwareBreakpoint(1,0x10918d6ac);
  (*pcVar21)();
}



/* Entry: 10918dd18; end: 10918ead7;  */

void FUN_10918dd18(uint *param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  uint *param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  code *pcVar7;
  undefined4 *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  uint *puVar16;
  undefined8 *puVar17;
  int *piVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  float fVar24;
  float fVar26;
  undefined8 uVar25;
  float fVar27;
  float fVar28;
  int iVar29;
  int iVar30;
  undefined8 uVar31;
  int iVar32;
  ulong uVar33;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined4 uStack_5c0;
  int iStack_5bc;
  undefined8 uStack_5b8;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  long lStack_588;
  ulong uStack_580;
  undefined8 *puStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined4 uStack_460;
  undefined8 uStack_45c;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  long lStack_428;
  long lStack_420;
  undefined8 *puStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined4 uStack_400;
  int iStack_3fc;
  undefined4 *puStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3c8;
  long lStack_3c0;
  undefined1 *puStack_3b8;
  undefined1 auStack_3b0 [16];
  undefined1 auStack_3a0 [4];
  int iStack_39c;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long lStack_368;
  long lStack_360;
  undefined1 *puStack_358;
  undefined1 auStack_350 [16];
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined4 uStack_330;
  int iStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  long lStack_2f8;
  undefined4 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined4 uStack_2d0;
  int iStack_2cc;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  long lStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  int iStack_26c;
  int iStack_268;
  int iStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  long lStack_238;
  ulong uStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [8];
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  long lStack_1d0;
  long *aplStack_1c8 [2];
  long alStack_1b8 [26];
  undefined1 auStack_e8 [96];
  long alStack_88 [3];
  
  alStack_88[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(param_6 + 4);
  uVar9 = param_6[1];
  uVar10 = (ulong)uVar9;
  if (lVar13 == 0) {
LAB_10918df2c:
    *param_1 = *param_6;
    param_1[1] = uVar9;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_6 + 2);
    *(long *)(param_1 + 4) = lVar13;
    uVar31 = *(undefined8 *)(param_6 + 6);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_6 + 8);
    *(undefined8 *)(param_1 + 6) = uVar31;
    uVar31 = *(undefined8 *)(param_6 + 10);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_6 + 0xc);
    *(undefined8 *)(param_1 + 10) = uVar31;
    lVar13 = *(long *)(param_6 + 0xe);
    *(long *)(param_1 + 0xe) = lVar13;
    *(uint **)(param_1 + 0x10) = param_1 + 2;
    puVar16 = param_1 + 0x14;
    puVar16[0] = 0;
    puVar16[1] = 0;
    *(uint **)(param_1 + 0x12) = puVar16;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    if (lVar13 != 0) {
      piVar18 = (int *)(lVar13 + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar5) {
          *piVar18 = *piVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      uVar9 = param_6[1];
    }
    if ((int)uVar9 < 3) {
      puVar11 = *(undefined8 **)(param_6 + 0x12);
      puVar17 = *(undefined8 **)(param_1 + 0x12);
      *puVar17 = *puVar11;
      puVar17[1] = puVar11[1];
      goto LAB_10918e800;
    }
    param_1[1] = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_88[0]) {
      FUN_109a844cc(param_1,param_6[1],0,0,0);
      if (0 < (int)param_1[1]) {
        lVar13 = 0;
        lVar15 = *(long *)(param_6 + 0x10);
        lVar2 = *(long *)(param_6 + 0x12);
        lVar1 = *(long *)(param_1 + 0x10);
        lVar3 = *(long *)(param_1 + 0x12);
        do {
          *(undefined4 *)(lVar1 + lVar13 * 4) = *(undefined4 *)(lVar15 + lVar13 * 4);
          *(undefined8 *)(lVar3 + lVar13 * 8) = *(undefined8 *)(lVar2 + lVar13 * 8);
          lVar13 = lVar13 + 1;
        } while (lVar13 < (int)param_1[1]);
      }
      return;
    }
  }
  else {
    if ((int)uVar9 < 3) {
      lVar15 = (long)(int)param_6[3] * (long)(int)param_6[2];
    }
    else {
      lVar15 = 1;
      piVar18 = *(int **)(param_6 + 0x10);
      do {
        lVar15 = lVar15 * *piVar18;
        uVar10 = uVar10 - 1;
        piVar18 = piVar18 + 1;
      } while (uVar10 != 0);
    }
    if (lVar15 == 0) goto LAB_10918df2c;
    if ((*param_6 & 0xfff) != 0x18) goto LAB_10918e840;
    (**(code **)(*param_2 + 0x18))(param_1,param_2,param_3,param_4,param_5,param_7);
    uStack_270 = 0x42ff0000;
    iStack_264 = 0;
    uStack_260 = 0;
    iStack_26c = 0;
    iStack_268 = 0;
    uVar10 = (ulong)&uStack_270 | 8;
    uStack_254 = 0;
    uStack_250 = 0;
    uStack_25c = 0;
    uStack_258 = 0;
    uStack_244 = 0;
    uStack_24c = 0;
    uStack_248 = 0;
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_23c = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uVar31 = *(undefined8 *)(param_6 + 2);
    auStack_208._0_4_ = 0x42ff0000;
    uStack_5b8 = (undefined4 *)auStack_208;
    aplStack_1c8[0] = (long *)auStack_200;
    auStack_200._4_4_ = 0;
    uStack_1f8 = 0;
    auStack_208._4_4_ = 0;
    auStack_200._0_4_ = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1f4 = 0;
    uStack_1f0 = 0;
    uStack_1dc = 0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    lStack_1d0 = 0;
    uStack_1d8 = 0;
    uStack_1d4 = 0;
    alStack_1b8[1] = 0;
    alStack_1b8[0] = 0;
    uStack_5c0 = 0x2010000;
    uStack_5b0 = 0;
    uStack_5ac = 0;
    uStack_230 = uVar10;
    puStack_228 = &uStack_220;
    aplStack_1c8[1] = alStack_1b8;
    FUN_109a41858(0x3f70101010101010,0,param_5,&uStack_5c0,5);
    iVar30 = (int)uVar31 / 2;
    iVar32 = (int)((ulong)uVar31 >> 0x20) / 2;
    uVar22 = CONCAT44((int)((ulong)*(undefined8 *)(param_5 + 8) >> 0x20) + -1,
                      (int)*(undefined8 *)(param_5 + 8) + -1);
    if ((int)auStack_200._0_4_ < 1) {
      uVar23 = 0;
    }
    else {
      uVar14 = 0;
      uVar23 = 0;
      fVar24 = 0.0;
      fVar26 = 0.0;
      fVar27 = 0.0;
      do {
        if (0 < (int)auStack_200._4_4_) {
          uVar19 = 0;
          do {
            fVar28 = *(float *)(CONCAT44(uStack_1f4,uStack_1f8) + *aplStack_1c8[1] * uVar14 +
                               uVar19 * 4);
            fVar27 = fVar27 + fVar28;
            fVar24 = fVar24 + (float)(uVar14 & 0xffffffff) * fVar28;
            fVar26 = fVar26 + (float)(uVar19 & 0xffffffff) * fVar28;
            iVar29 = -(uint)(*(float *)(param_2 + 0x18) < fVar28);
            uVar31 = CONCAT44((int)uVar19,(int)uVar14);
            uVar33 = NEON_smax(uVar23,uVar31,4);
            uVar23 = uVar23 ^ (uVar23 ^ uVar33) & CONCAT44(iVar29,iVar29);
            uVar33 = NEON_smin(uVar31,uVar22,4);
            uVar22 = uVar22 ^ (uVar22 ^ uVar33) & CONCAT44(iVar29,iVar29);
            uVar19 = uVar19 + 1;
          } while ((uint)auStack_200._4_4_ != uVar19);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != (uint)auStack_200._0_4_);
      if (0.0 < fVar27) {
        iVar30 = (int)(fVar24 / fVar27);
        iVar32 = (int)(fVar26 / fVar27);
      }
    }
    uVar31 = NEON_scvtf(CONCAT44(iVar32 - (int)(uVar22 >> 0x20),iVar30 - (int)uVar22),4);
    uVar25 = NEON_scvtf(*(undefined8 *)(param_6 + 2),4);
    fVar24 = (float)uVar31 / (float)uVar25;
    fVar28 = (float)((ulong)uVar25 >> 0x20);
    fVar26 = (float)((ulong)uVar31 >> 0x20) / fVar28;
    fVar24 = fVar24 + fVar24;
    fVar26 = fVar26 + fVar26;
    uVar22 = CONCAT44(fVar26,fVar24);
    uVar31 = NEON_scvtf(CONCAT44((int)(uVar23 >> 0x20) - iVar32,(int)uVar23 - iVar30),4);
    fVar27 = (float)uVar31 / (float)uVar25;
    fVar28 = (float)((ulong)uVar31 >> 0x20) / fVar28;
    fVar27 = fVar27 + fVar27;
    fVar28 = fVar28 + fVar28;
    uVar22 = uVar22 ^ (uVar22 ^ CONCAT44(fVar28,fVar27)) &
                      CONCAT44(-(uint)(fVar28 < fVar26),-(uint)(fVar27 < fVar24));
    fVar26 = (float)(uVar22 >> 0x20);
    fVar24 = (float)uVar22;
    if (fVar26 <= fVar24) {
      fVar24 = fVar26;
    }
    if (fVar24 <= 1.0) {
      uStack_5b0 = 0;
      uStack_5ac = 0;
      uStack_5c0 = 0x1010000;
      uStack_5b8._0_4_ = (int)param_6;
      uStack_5b8._4_4_ = (int)((ulong)param_6 >> 0x20);
      uStack_2d0 = 0x2010000;
      uStack_2c8 = &uStack_270;
      uStack_2c0 = 0;
      uStack_2bc = 0;
      uStack_330 = 0;
      iStack_32c = 0;
      FUN_109b0f718((double)fVar24,(double)fVar24,&uStack_5c0,&uStack_2d0,&uStack_330,3);
    }
    else {
      uStack_5c0 = 0x42ff0000;
      uStack_5b8._4_4_ = 0;
      uStack_5b0 = 0;
      iStack_5bc = 0;
      uStack_5b8._0_4_ = 0;
      uStack_580 = (ulong)&uStack_5c0 | 8;
      uStack_5a4 = 0;
      uStack_5a0 = 0;
      uStack_5ac = 0;
      uStack_5a8 = 0;
      uStack_594 = 0;
      uStack_59c = 0;
      uStack_598 = 0;
      lStack_588 = 0;
      uStack_590 = 0;
      uStack_58c = 0;
      uStack_570 = 0;
      uStack_568 = 0;
      uStack_2d0 = 0x2010000;
      uStack_2c0 = 0;
      uStack_2bc = 0;
      puStack_578 = &uStack_570;
      uStack_2c8 = &uStack_5c0;
      FUN_109a479a0(param_6,&uStack_2d0);
      if (lStack_238 != 0) {
        piVar18 = (int *)(lStack_238 + 0x14);
        do {
          iVar29 = *piVar18;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar5) {
            *piVar18 = iVar29 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar29 + -1 == 0) {
          func_0x000109a848d4(&uStack_270);
        }
      }
      if (0 < iStack_26c) {
        lVar13 = 0;
        do {
          *(undefined4 *)(uStack_230 + lVar13 * 4) = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < iStack_26c);
      }
      iStack_268 = (int)uStack_5b8;
      iStack_264 = uStack_5b8._4_4_;
      uStack_270 = uStack_5c0;
      iStack_26c = iStack_5bc;
      uStack_258 = uStack_5a8;
      uStack_254 = uStack_5a4;
      uStack_260 = uStack_5b0;
      uStack_25c = uStack_5ac;
      uStack_248 = uStack_598;
      uStack_244 = uStack_594;
      uStack_250 = uStack_5a0;
      uStack_24c = uStack_59c;
      lStack_238 = lStack_588;
      uStack_240 = uStack_590;
      uStack_23c = uStack_58c;
      uVar22 = uStack_230;
      puVar11 = puStack_228;
      if ((puStack_228 != &uStack_220) &&
         (uVar22 = uVar10, puVar11 = &uStack_220, puStack_228 != (undefined8 *)0x0)) {
        _free(puStack_228[-1]);
      }
      puStack_228 = puVar11;
      uStack_230 = uVar22;
      if (iStack_5bc < 3) {
        puVar11 = (undefined8 *)((ulong)&uStack_5c0 | 4);
        *puStack_228 = *puStack_578;
        puStack_228[1] = puStack_578[1];
        uStack_5c0 = 0x42ff0000;
        puVar11[1] = 0;
        *puVar11 = 0;
        puVar11[3] = 0;
        puVar11[2] = 0;
        puVar11[5] = 0;
        puVar11[4] = 0;
        *(undefined8 *)((long)puVar11 + 0x34) = 0;
        *(undefined8 *)((long)puVar11 + 0x2c) = 0;
        if (puStack_578 != &uStack_570) {
          _free(puStack_578[-1]);
        }
      }
      else {
        puStack_228 = puStack_578;
        uStack_230 = uStack_580;
      }
    }
    if (lStack_1d0 != 0) {
      piVar18 = (int *)(lStack_1d0 + 0x14);
      do {
        iVar29 = *piVar18;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar5) {
          *piVar18 = iVar29 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar29 + -1 == 0) {
        func_0x000109a848d4(auStack_208);
      }
    }
    lStack_1d0 = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_1e0 = 0;
    uStack_1dc = 0;
    uStack_1e8 = 0;
    uStack_1e4 = 0;
    if (0 < (int)auStack_208._4_4_) {
      lVar13 = 0;
      do {
        *(undefined4 *)((long)aplStack_1c8[0] + lVar13 * 4) = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)auStack_208._4_4_);
    }
    if (aplStack_1c8[1] != alStack_1b8 && aplStack_1c8[1] != (long *)0x0) {
      _free(aplStack_1c8[1][-1]);
    }
    iVar6 = iStack_264;
    iVar29 = iStack_268;
    uStack_2d0 = 0x42ff0000;
    uStack_5b8 = &uStack_2d0;
    puStack_290 = &uStack_2c8;
    uStack_2c8._4_4_ = 0;
    uStack_2c0 = 0;
    iStack_2cc = 0;
    uStack_2c8._0_4_ = 0;
    uStack_2b4 = 0;
    uStack_2b0 = 0;
    uStack_2bc = 0;
    uStack_2b8 = 0;
    uStack_2a4 = 0;
    uStack_2ac = 0;
    uStack_2a8 = 0;
    lStack_298 = 0;
    uStack_2a0 = 0;
    uStack_29c = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    auStack_208._0_4_ = 0x1010000;
    auStack_200 = (undefined1  [8])&uStack_270;
    uStack_5c0 = 0x2010000;
    uStack_5b0 = 0;
    uStack_5ac = 0;
    puStack_288 = &uStack_280;
    FUN_109ac9fc8(auStack_208,&uStack_5c0,1,0);
    lVar13 = 0;
    do {
      *(undefined4 *)(auStack_208 + lVar13) = 0x42ff0000;
      *(undefined8 *)(auStack_200 + lVar13 + 4) = 0;
      *(undefined8 *)(auStack_208 + lVar13 + 4) = 0;
      *(undefined8 *)((long)&uStack_1ec + lVar13) = 0;
      *(undefined8 *)((long)&uStack_1f4 + lVar13) = 0;
      *(undefined8 *)((long)&uStack_1dc + lVar13) = 0;
      *(undefined8 *)((long)&uStack_1e4 + lVar13) = 0;
      *(undefined8 *)((long)alStack_1b8 + lVar13) = 0;
      *(undefined8 *)((long)&lStack_1d0 + lVar13) = 0;
      *(undefined8 *)((long)&uStack_1d8 + lVar13) = 0;
      *(undefined1 **)((long)aplStack_1c8 + lVar13) = auStack_200 + lVar13;
      *(undefined8 **)((long)aplStack_1c8 + lVar13 + 8) = (undefined8 *)((long)alStack_1b8 + lVar13)
      ;
      lVar15 = lVar13 + 0x60;
      *(undefined8 *)((long)alStack_1b8 + lVar13 + 8) = 0;
      lVar13 = lVar15;
    } while (lVar15 != 0x180);
    FUN_109a3d9cc(&uStack_270,auStack_208);
    uStack_330 = 0x42ff0000;
    uStack_5b8 = &uStack_330;
    uStack_324 = 0;
    uStack_320 = 0;
    iStack_32c = 0;
    uStack_328 = 0;
    puStack_2f0 = &uStack_328;
    uStack_314 = 0;
    uStack_310 = 0;
    uStack_31c = 0;
    uStack_318 = 0;
    uStack_304 = 0;
    uStack_30c = 0;
    uStack_308 = 0;
    lStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2fc = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_5c0 = 0x2010000;
    uStack_5b0 = 0;
    uStack_5ac = 0;
    puStack_2e8 = &uStack_2e0;
    FUN_109a479a0(auStack_e8,&uStack_5c0);
    uStack_340 = NEON_rev64(CONCAT44(iVar32 - iVar6 / 2,iVar30 - iVar29 / 2),4);
    uStack_338 = NEON_rev64(CONCAT44(uStack_2c8._4_4_,(undefined4)uStack_2c8),4);
    FUN_109a852c8(&uStack_400,param_1,&uStack_340);
    uStack_5e0 = 0x406fe00000000000;
    uStack_5d8 = 0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    FUN_109a7cf94(&uStack_5c0,&uStack_5e0,&uStack_330);
    uStack_460 = 0x42ff0000;
    lStack_420 = (long)&uStack_45c + 4;
    uStack_454 = 0;
    uStack_450 = 0;
    uStack_45c = 0;
    lStack_428 = 0;
    uStack_42c = 0;
    uStack_434 = 0;
    uStack_430 = 0;
    uStack_43c = 0;
    uStack_438 = 0;
    uStack_444 = 0;
    uStack_440 = 0;
    uStack_44c = 0;
    uStack_448 = 0;
    uStack_410 = 0;
    uStack_408 = 0;
    puStack_418 = &uStack_410;
    (**(code **)(*(long *)CONCAT44(iStack_5bc,uStack_5c0) + 0x18))
              ((long *)CONCAT44(iStack_5bc,uStack_5c0),&uStack_5c0,&uStack_460,0xffffffff);
    FUN_109195cac(auStack_3a0,&uStack_400,&uStack_2d0,&uStack_460);
    if (lStack_428 != 0) {
      piVar18 = (int *)(lStack_428 + 0x14);
      do {
        iVar30 = *piVar18;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar5) {
          *piVar18 = iVar30 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar30 + -1 == 0) {
        func_0x000109a848d4(&uStack_460);
      }
    }
    lStack_428 = 0;
    uStack_448 = 0;
    uStack_444 = 0;
    uStack_450 = 0;
    uStack_44c = 0;
    uStack_438 = 0;
    uStack_434 = 0;
    uStack_440 = 0;
    uStack_43c = 0;
    if (0 < (int)uStack_45c) {
      lVar13 = 0;
      do {
        *(undefined4 *)(lStack_420 + lVar13 * 4) = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)uStack_45c);
    }
    if (puStack_418 != &uStack_410 && puStack_418 != (undefined8 *)0x0) {
      _free(puStack_418[-1]);
    }
    FUN_10918eb6c(&uStack_5c0);
    if (lStack_3c8 != 0) {
      piVar18 = (int *)(lStack_3c8 + 0x14);
      do {
        iVar30 = *piVar18;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar5) {
          *piVar18 = iVar30 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar30 + -1 == 0) {
        func_0x000109a848d4(&uStack_400);
      }
    }
    lStack_3c8 = 0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    if (0 < iStack_3fc) {
      lVar13 = 0;
      do {
        *(undefined4 *)(lStack_3c0 + lVar13 * 4) = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < iStack_3fc);
    }
    if (puStack_3b8 != auStack_3b0 && puStack_3b8 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_3b8 + -8));
    }
    FUN_109a852c8(&uStack_5c0,param_1,&uStack_340);
    uStack_400 = 0xc2010000;
    uStack_3f0 = 0;
    puStack_3f8 = &uStack_5c0;
    FUN_109a479a0(auStack_3a0,&uStack_400);
    if (lStack_588 != 0) {
      piVar18 = (int *)(lStack_588 + 0x14);
      do {
        iVar30 = *piVar18;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar5) {
          *piVar18 = iVar30 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar30 + -1 == 0) {
        func_0x000109a848d4(&uStack_5c0);
      }
    }
    lStack_588 = 0;
    uStack_5a8 = 0;
    uStack_5a4 = 0;
    uStack_5b0 = 0;
    uStack_5ac = 0;
    uStack_598 = 0;
    uStack_594 = 0;
    uStack_5a0 = 0;
    uStack_59c = 0;
    if (0 < iStack_5bc) {
      lVar13 = 0;
      do {
        *(undefined4 *)(uStack_580 + lVar13 * 4) = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < iStack_5bc);
    }
    if (puStack_578 != &uStack_570 && puStack_578 != (undefined8 *)0x0) {
      _free(puStack_578[-1]);
    }
    if (lStack_368 != 0) {
      piVar18 = (int *)(lStack_368 + 0x14);
      do {
        iVar30 = *piVar18;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar5) {
          *piVar18 = iVar30 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar30 + -1 == 0) {
        func_0x000109a848d4(auStack_3a0);
      }
    }
    lStack_368 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    if (0 < iStack_39c) {
      lVar13 = 0;
      do {
        *(undefined4 *)(lStack_360 + lVar13 * 4) = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < iStack_39c);
    }
    if (puStack_358 != auStack_350 && puStack_358 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_358 + -8));
    }
    if (lStack_2f8 != 0) {
      piVar18 = (int *)(lStack_2f8 + 0x14);
      do {
        iVar30 = *piVar18;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar5) {
          *piVar18 = iVar30 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar30 + -1 == 0) {
        func_0x000109a848d4(&uStack_330);
      }
    }
    lStack_2f8 = 0;
    uStack_318 = 0;
    uStack_314 = 0;
    uStack_320 = 0;
    uStack_31c = 0;
    uStack_308 = 0;
    uStack_304 = 0;
    uStack_310 = 0;
    uStack_30c = 0;
    if (0 < iStack_32c) {
      lVar13 = 0;
      do {
        puStack_2f0[lVar13] = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < iStack_32c);
    }
    if (puStack_2e8 != &uStack_2e0 && puStack_2e8 != (undefined8 *)0x0) {
      _free(puStack_2e8[-1]);
    }
    plVar21 = alStack_88;
    do {
      plVar20 = plVar21 + -0xc;
      if (plVar21[-5] != 0) {
        piVar18 = (int *)(plVar21[-5] + 0x14);
        do {
          iVar30 = *piVar18;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar5) {
            *piVar18 = iVar30 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar30 + -1 == 0) {
          func_0x000109a848d4(plVar20);
        }
      }
      plVar21[-5] = 0;
      plVar21[-9] = 0;
      plVar21[-10] = 0;
      plVar21[-7] = 0;
      plVar21[-8] = 0;
      if (0 < *(int *)((long)plVar21 + -0x5c)) {
        lVar13 = 0;
        lVar15 = plVar21[-4];
        do {
          *(undefined4 *)(lVar15 + lVar13 * 4) = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)((long)plVar21 + -0x5c));
      }
      plVar12 = (long *)plVar21[-3];
      if (plVar12 != plVar21 + -2 && plVar12 != (long *)0x0) {
        _free(plVar12[-1]);
      }
      plVar21 = plVar20;
    } while (plVar20 != (long *)auStack_208);
    if (lStack_298 != 0) {
      piVar18 = (int *)(lStack_298 + 0x14);
      do {
        iVar30 = *piVar18;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar5) {
          *piVar18 = iVar30 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar30 + -1 == 0) {
        func_0x000109a848d4(&uStack_2d0);
      }
    }
    lStack_298 = 0;
    uStack_2b8 = 0;
    uStack_2b4 = 0;
    uStack_2c0 = 0;
    uStack_2bc = 0;
    uStack_2a8 = 0;
    uStack_2a4 = 0;
    uStack_2b0 = 0;
    uStack_2ac = 0;
    if (0 < iStack_2cc) {
      lVar13 = 0;
      do {
        *(undefined4 *)((long)puStack_290 + lVar13 * 4) = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < iStack_2cc);
    }
    if (puStack_288 != &uStack_280 && puStack_288 != (undefined8 *)0x0) {
      _free(puStack_288[-1]);
    }
    if (lStack_238 != 0) {
      piVar18 = (int *)(lStack_238 + 0x14);
      do {
        iVar30 = *piVar18;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar5) {
          *piVar18 = iVar30 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar30 + -1 == 0) {
        func_0x000109a848d4(&uStack_270);
      }
    }
    lStack_238 = 0;
    uStack_258 = 0;
    uStack_254 = 0;
    uStack_260 = 0;
    uStack_25c = 0;
    uStack_248 = 0;
    uStack_244 = 0;
    uStack_250 = 0;
    uStack_24c = 0;
    if (0 < iStack_26c) {
      lVar13 = 0;
      do {
        *(undefined4 *)(uStack_230 + lVar13 * 4) = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < iStack_26c);
    }
    if (puStack_228 != &uStack_220 && puStack_228 != (undefined8 *)0x0) {
      _free(puStack_228[-1]);
    }
LAB_10918e800:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_88[0]) {
      return;
    }
  }
  ___stack_chk_fail();
LAB_10918e840:
  puVar8 = (undefined4 *)0x1c;
  func_0x000107c2ae8c();
  *puVar8 = 1;
  auStack_208 = (undefined1  [8])(puVar8 + 1);
  auStack_200._0_4_ = 0x17;
  auStack_200._4_4_ = 0;
  *(undefined1 *)((long)puVar8 + 0x1b) = 0;
  *(undefined8 *)(puVar8 + 3) = 0x203d3d2029286570;
  *(undefined8 *)(puVar8 + 1) = 0x79742e706d696c62;
  *(undefined8 *)((long)puVar8 + 0x13) = 0x344355385f564320;
  FUN_109ac3188(0xffffff29,auStack_208,&UNK_10f55a6e6,&UNK_10f55a6ea,0x15e);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10918e8a4);
  (*pcVar7)();
}



/* Entry: 10918ead8; end: 10918eaeb;  */

void FUN_10918ead8(void)

{
  FUN_109145158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10918eaec; end: 10918eafb;  */

bool FUN_10918eaec(float param_1,long param_2)

{
  return *(float *)(param_2 + 200) < param_1;
}



/* Entry: 10918eafc; end: 10918eb6b;  */

long * FUN_10918eafc(long *param_1)

{
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10918eb6c; end: 10918ecff;  */

long FUN_10918eb6c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x108) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x108) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xd0);
    }
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (0 < *(int *)(param_1 + 0xd4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x110);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xd4));
  }
  lVar5 = *(long *)(param_1 + 0x118);
  if (lVar5 != param_1 + 0x120 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xa8) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x70);
    }
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (0 < *(int *)(param_1 + 0x74)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xb0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x74));
  }
  lVar5 = *(long *)(param_1 + 0xb8);
  if (lVar5 != param_1 + 0xc0 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x48) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x10);
    }
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x50);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x14));
  }
  lVar5 = *(long *)(param_1 + 0x58);
  if (lVar5 != param_1 + 0x60 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 10918ed00; end: 10918ed2b;  */

void FUN_10918ed00(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR____cxa_pure_virtual_110adf100;
  *(uint *)(param_1 + 1) = param_2;
  if (param_2 < 0xc) {
    *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(&UNK_10dfba330 + (ulong)param_2 * 4);
  }
  return;
}


