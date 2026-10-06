/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109b2da4c; end: 109b2da4f;  */

undefined8 * FUN_109b2da4c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b26b48;
  if (param_1[0x14] != 0) {
    piVar1 = (int *)(param_1[0x14] + 0x14);
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
      func_0x000109a848d4(param_1 + 0xd);
    }
  }
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar5 = 0;
    lVar7 = param_1[0x15];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x6c));
  }
  puVar6 = (undefined8 *)param_1[0x16];
  if (puVar6 != param_1 + 0x17 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
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
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b2da50; end: 109b2da63;  */

void FUN_109b2da50(void)

{
  FUN_109b2dd9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b2da64; end: 109b2dd9b;  */

void FUN_109b2da64(long param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  double *pdVar14;
  double *pdVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  int iVar25;
  long lVar26;
  uint uVar27;
  int *piVar28;
  long lVar29;
  long lVar30;
  int iVar31;
  long lVar32;
  long lVar33;
  double dVar34;
  long lStack_80;
  
  iVar4 = *param_2;
  iVar6 = param_2[1];
  if (iVar4 < iVar6) {
    uVar16 = 0;
    uVar8 = *(uint *)(param_1 + 8);
    lVar1 = ((ulong)(uVar8 >> 3) & 0x1ff) + 1;
    iVar5 = *(int *)(param_1 + 200);
    iVar7 = *(int *)(param_1 + 0xcc);
    lVar32 = (long)iVar7;
    iVar9 = iVar7 * iVar5;
    iVar31 = (int)lVar1;
    uVar10 = iVar31 * *(int *)(*(long *)(param_1 + 0xa8) + 4);
    iVar25 = (*(int **)(param_1 + 0x48))[1];
    lVar33 = (long)**(int **)(param_1 + 0x48);
    iVar11 = iVar31 * iVar25;
    iVar13 = 0;
    if (iVar5 != 0) {
      iVar13 = iVar25 / iVar5;
    }
    uVar12 = iVar13 * iVar31;
    lVar17 = *(long *)(param_1 + 0x78);
    lVar30 = *(long *)(param_1 + 0xb8);
    iVar31 = iVar31 * iVar5;
    lStack_80 = (long)iVar4 * (long)iVar7;
    lVar19 = (long)iVar4;
    do {
      lVar18 = lVar19 * lVar32;
      if (lVar18 < lVar33) {
        lVar20 = lVar17 + lVar19 * lVar30;
        lVar22 = *(long *)(param_1 + 0x18);
        lVar21 = **(long **)(param_1 + 0x50);
        if ((lVar18 - (lVar33 - lVar32) == 0 || lVar18 < lVar33 - lVar32) && 0 < (int)uVar12) {
          lVar23 = 0;
          lVar26 = *(long *)(param_1 + 0xd8);
          do {
            lVar3 = lVar22 + lVar21 * lVar18 + (long)*(int *)(lVar26 + lVar23 * 4) * 8;
            if (iVar9 < 4) {
              dVar34 = 0.0;
              uVar27 = 0;
            }
            else {
              dVar34 = 0.0;
              lVar29 = 1;
              piVar28 = (int *)(*(long *)(param_1 + 0xd0) + 8);
              do {
                dVar34 = dVar34 + *(double *)(lVar3 + (long)piVar28[-2] * 8) +
                                  *(double *)(lVar3 + (long)piVar28[-1] * 8) +
                                  *(double *)(lVar3 + (long)*piVar28 * 8) +
                                  *(double *)(lVar3 + (long)piVar28[1] * 8);
                lVar2 = lVar29 + 3;
                lVar29 = lVar29 + 4;
                piVar28 = piVar28 + 4;
                uVar27 = (iVar9 - 4U & 0xfffffffc) + 4;
              } while (lVar2 <= (int)(iVar9 - 4U));
            }
            if ((int)uVar27 < iVar9) {
              piVar28 = (int *)(*(long *)(param_1 + 0xd0) + (ulong)uVar27 * 4);
              do {
                dVar34 = dVar34 + *(double *)(lVar3 + (long)*piVar28 * 8);
                uVar27 = uVar27 + 1;
                piVar28 = piVar28 + 1;
              } while ((int)uVar27 < iVar9);
            }
            *(double *)(lVar20 + lVar23 * 8) = dVar34 * (double)(1.0 / (float)iVar9);
            lVar23 = lVar23 + 1;
            uVar27 = uVar12;
          } while (lVar23 != (int)uVar12);
        }
        else {
          uVar27 = 0;
        }
        if ((int)uVar27 < (int)uVar10) {
          lVar23 = *(long *)(param_1 + 0xd8);
          uVar24 = (ulong)uVar27;
          do {
            iVar5 = *(int *)(lVar23 + uVar24 * 4);
            if (iVar11 <= iVar5) {
              *(undefined8 *)(lVar20 + uVar24 * 8) = 0;
            }
            if (iVar7 < 1) {
              dVar34 = NAN;
            }
            else {
              lVar26 = 0;
              iVar25 = 0;
              lVar29 = (long)iVar11 - (long)iVar5;
              lVar3 = (long)iVar31;
              if (lVar29 <= iVar31) {
                lVar3 = lVar29;
              }
              pdVar14 = (double *)(lVar22 + lVar21 * lStack_80 + (long)iVar5 * 8);
              dVar34 = 0.0;
              do {
                if (lVar33 <= lVar26 + lVar18) break;
                if (0 < iVar31 && iVar5 < iVar11) {
                  lVar29 = 0;
                  pdVar15 = pdVar14;
                  do {
                    dVar34 = dVar34 + *pdVar15;
                    iVar25 = iVar25 + 1;
                    lVar29 = lVar29 + lVar1;
                    pdVar15 = pdVar15 + ((ulong)(uVar8 >> 3) & 0x1ff) + 1;
                  } while (lVar29 < lVar3);
                }
                lVar26 = lVar26 + 1;
                pdVar14 = (double *)((long)pdVar14 + lVar21);
              } while (lVar26 != lVar32);
              dVar34 = (double)((float)dVar34 / (float)iVar25);
            }
            *(double *)(lVar20 + uVar24 * 8) = dVar34;
            uVar24 = uVar24 + 1;
          } while (uVar24 != uVar10);
        }
      }
      else if (0 < (int)uVar10) {
        _bzero(lVar17 + (uVar16 + (long)iVar4) * lVar30,(ulong)uVar10 << 3);
      }
      lVar19 = lVar19 + 1;
      uVar16 = uVar16 + 1;
      lStack_80 = lStack_80 + lVar32;
    } while (uVar16 != (uint)(iVar6 - iVar4));
  }
  return;
}



/* Entry: 109b2dd9c; end: 109b2dec7;  */

undefined8 * FUN_109b2dd9c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b26b48;
  if (param_1[0x14] != 0) {
    piVar1 = (int *)(param_1[0x14] + 0x14);
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
      func_0x000109a848d4(param_1 + 0xd);
    }
  }
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar5 = 0;
    lVar7 = param_1[0x15];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x6c));
  }
  puVar6 = (undefined8 *)param_1[0x16];
  if (puVar6 != param_1 + 0x17 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
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
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b2dec8; end: 109b2decf;  */

void FUN_109b2dec8(void)

{
  return;
}



/* Entry: 109b2ded0; end: 109b2e32b;  */

void FUN_109b2ded0(long param_1,int *param_2)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  float *pfVar8;
  int *piVar9;
  float *pfVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  float *pfVar19;
  uint *puVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float afStack_498 [266];
  
  puVar20 = *(uint **)(param_1 + 0x10);
  uVar16 = (ulong)(*puVar20 >> 3) & 0x1ff;
  lVar13 = uVar16 + 1;
  uVar22 = (long)(int)lVar13 * (long)*(int *)(*(long *)(puVar20 + 0x10) + 4);
  iVar21 = (int)uVar22;
  pfVar8 = afStack_498;
  if (0x108 < (uint)(iVar21 << 1)) {
    pfVar8 = (float *)((long)(iVar21 << 1) << 2);
    if (iVar21 < 0) {
      pfVar8 = (float *)0xffffffffffffffff;
    }
    __Znam();
  }
  uVar4 = *(uint *)(param_1 + 0x28);
  uVar18 = (ulong)uVar4;
  iVar5 = *(int *)(*(long *)(param_1 + 0x30) + (long)*param_2 * 4);
  lVar25 = (long)iVar5;
  iVar6 = *(int *)(*(long *)(param_1 + 0x30) + (long)param_2[1] * 4);
  lVar3 = *(long *)(param_1 + 0x18);
  iVar17 = *(int *)(*(long *)(param_1 + 0x20) + (long)iVar5 * 0xc + 4);
  if (0 < iVar21) {
    _bzero(pfVar8 + uVar22,(uVar22 & 0xffffffff) << 2);
  }
  if (iVar5 < iVar6) {
    lVar7 = (uVar22 & 0xffffffff) << 2;
    pfVar19 = (float *)(lVar3 + 8);
    do {
      piVar9 = (int *)(*(long *)(param_1 + 0x20) + lVar25 * 0xc);
      fVar30 = (float)piVar9[2];
      iVar5 = *piVar9;
      iVar2 = piVar9[1];
      lVar23 = *(long *)(*(long *)(param_1 + 8) + 0x10);
      lVar24 = **(long **)(*(long *)(param_1 + 8) + 0x48);
      if (0 < iVar21) {
        _bzero(pfVar8,lVar7);
      }
      lVar23 = lVar23 + lVar24 * iVar5;
      uVar15 = (uint)uVar16;
      if (uVar15 < 2) {
        if (uVar15 == 0) {
          pfVar10 = pfVar19;
          uVar12 = uVar18;
          if (0 < (int)uVar4) {
            do {
              fVar26 = (float)NEON_ucvtf((uint)*(byte *)(lVar23 + (int)pfVar10[-2]));
              pfVar8[(int)pfVar10[-1]] = pfVar8[(int)pfVar10[-1]] + *pfVar10 * fVar26;
              pfVar10 = pfVar10 + 3;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
        }
        else if (uVar15 == 1) {
          pfVar10 = pfVar19;
          uVar12 = uVar18;
          if (0 < (int)uVar4) {
            do {
              fVar26 = *pfVar10;
              pfVar1 = pfVar8 + (int)pfVar10[-1];
              fVar27 = (float)NEON_ucvtf((uint)*(byte *)(lVar23 + (int)pfVar10[-2]));
              fVar28 = (float)NEON_ucvtf((uint)((byte *)(lVar23 + (int)pfVar10[-2]))[1]);
              *pfVar1 = *pfVar1 + fVar26 * fVar27;
              pfVar1[1] = pfVar1[1] + fVar26 * fVar28;
              uVar12 = uVar12 - 1;
              pfVar10 = pfVar10 + 3;
            } while (uVar12 != 0);
          }
        }
        else {
LAB_109b2e10c:
          if (0 < (int)uVar4) {
            uVar12 = 0;
            do {
              piVar9 = (int *)(lVar3 + uVar12 * 0xc);
              fVar26 = (float)piVar9[2];
              pbVar14 = (byte *)(lVar23 + *piVar9);
              pfVar10 = pfVar8 + piVar9[1];
              lVar24 = lVar13;
              do {
                *pfVar10 = *pfVar10 + fVar26 * (float)*pbVar14;
                lVar24 = lVar24 + -1;
                pbVar14 = pbVar14 + 1;
                pfVar10 = pfVar10 + 1;
              } while (lVar24 != 0);
              uVar12 = uVar12 + 1;
            } while (uVar12 != uVar18);
          }
        }
      }
      else if (uVar15 == 2) {
        pfVar10 = pfVar19;
        uVar12 = uVar18;
        if (0 < (int)uVar4) {
          do {
            fVar26 = *pfVar10;
            pfVar1 = pfVar8 + (int)pfVar10[-1];
            pbVar14 = (byte *)(lVar23 + (int)pfVar10[-2]);
            fVar27 = (float)NEON_ucvtf((uint)*pbVar14);
            fVar28 = (float)NEON_ucvtf((uint)pbVar14[1]);
            fVar29 = (float)NEON_ucvtf((uint)pbVar14[2]);
            *pfVar1 = *pfVar1 + fVar26 * fVar27;
            pfVar1[1] = pfVar1[1] + fVar26 * fVar28;
            pfVar1[2] = pfVar1[2] + fVar26 * fVar29;
            uVar12 = uVar12 - 1;
            pfVar10 = pfVar10 + 3;
          } while (uVar12 != 0);
        }
      }
      else {
        if (uVar15 != 3) goto LAB_109b2e10c;
        pfVar10 = pfVar19;
        uVar12 = uVar18;
        if (0 < (int)uVar4) {
          do {
            fVar26 = *pfVar10;
            pfVar1 = pfVar8 + (int)pfVar10[-1];
            pbVar14 = (byte *)(lVar23 + (int)pfVar10[-2]);
            fVar27 = (float)NEON_ucvtf((uint)*pbVar14);
            fVar28 = (float)NEON_ucvtf((uint)pbVar14[1]);
            *pfVar1 = *pfVar1 + fVar26 * fVar27;
            pfVar1[1] = pfVar1[1] + fVar26 * fVar28;
            fVar27 = (float)NEON_ucvtf((uint)pbVar14[2]);
            fVar28 = (float)NEON_ucvtf((uint)pbVar14[3]);
            pfVar1[2] = pfVar1[2] + fVar26 * fVar27;
            pfVar1[3] = pfVar1[3] + fVar26 * fVar28;
            uVar12 = uVar12 - 1;
            pfVar10 = pfVar10 + 3;
          } while (uVar12 != 0);
        }
      }
      if (iVar2 == iVar17) {
        pfVar10 = pfVar8;
        lVar23 = lVar7;
        iVar2 = iVar17;
        if (0 < iVar21) {
          do {
            pfVar10[uVar22] = pfVar10[uVar22] + *pfVar10 * fVar30;
            pfVar10 = pfVar10 + 1;
            lVar23 = lVar23 + -4;
          } while (lVar23 != 0);
        }
      }
      else if (0 < iVar21) {
        puVar11 = (undefined1 *)
                  (*(long *)(*(long *)(param_1 + 0x10) + 0x10) +
                  **(long **)(*(long *)(param_1 + 0x10) + 0x48) * (long)iVar17);
        pfVar10 = pfVar8;
        lVar23 = lVar7;
        do {
          uVar15 = (uint)(long)(float)(int)pfVar10[uVar22] &
                   ((int)(uint)(long)(float)(int)pfVar10[uVar22] >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar15) {
            uVar15 = 0xff;
          }
          *puVar11 = (char)uVar15;
          pfVar10[uVar22] = fVar30 * *pfVar10;
          pfVar10 = pfVar10 + 1;
          lVar23 = lVar23 + -4;
          puVar11 = puVar11 + 1;
        } while (lVar23 != 0);
      }
      iVar17 = iVar2;
      lVar25 = lVar25 + 1;
    } while (lVar25 != iVar6);
    puVar20 = *(uint **)(param_1 + 0x10);
  }
  if (0 < iVar21) {
    lVar13 = (uVar22 & 0xffffffff) << 2;
    puVar11 = (undefined1 *)(*(long *)(puVar20 + 4) + **(long **)(puVar20 + 0x12) * (long)iVar17);
    pfVar19 = pfVar8 + uVar22;
    do {
      uVar4 = (uint)(long)(float)(int)*pfVar19 &
              ((int)(uint)(long)(float)(int)*pfVar19 >> 0x1f ^ 0xffffffffU);
      if (0xfe < (int)uVar4) {
        uVar4 = 0xff;
      }
      *puVar11 = (char)uVar4;
      lVar13 = lVar13 + -4;
      puVar11 = puVar11 + 1;
      pfVar19 = pfVar19 + 1;
    } while (lVar13 != 0);
  }
  if (pfVar8 != afStack_498 && pfVar8 != (float *)0x0) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109b2e32c; end: 109b2e333;  */

void FUN_109b2e32c(void)

{
  return;
}



/* Entry: 109b2e334; end: 109b2e767;  */

void FUN_109b2e334(long param_1,int *param_2)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  float *pfVar13;
  undefined2 *puVar14;
  uint *puVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ushort *puVar19;
  long lVar20;
  float *pfVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;
  int iVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  float fVar37;
  float afStack_498 [266];
  
  puVar15 = *(uint **)(param_1 + 0x10);
  uVar23 = (ulong)(*puVar15 >> 3) & 0x1ff;
  lVar18 = uVar23 + 1;
  uVar26 = (long)(int)lVar18 * (long)*(int *)(*(long *)(puVar15 + 0x10) + 4);
  iVar25 = (int)uVar26;
  pfVar9 = afStack_498;
  if (0x108 < (uint)(iVar25 << 1)) {
    pfVar9 = (float *)((long)(iVar25 << 1) << 2);
    if (iVar25 < 0) {
      pfVar9 = (float *)0xffffffffffffffff;
    }
    __Znam();
  }
  uVar5 = *(uint *)(param_1 + 0x28);
  uVar28 = (ulong)uVar5;
  iVar6 = *(int *)(*(long *)(param_1 + 0x30) + (long)*param_2 * 4);
  lVar24 = (long)iVar6;
  iVar7 = *(int *)(*(long *)(param_1 + 0x30) + (long)param_2[1] * 4);
  lVar3 = *(long *)(param_1 + 0x18);
  lVar4 = *(long *)(param_1 + 0x20);
  iVar27 = *(int *)(lVar4 + (long)iVar6 * 0xc + 4);
  if (0 < iVar25) {
    _bzero(pfVar9 + uVar26,(uVar26 & 0xffffffff) << 2);
  }
  if (iVar6 < iVar7) {
    lVar16 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    lVar10 = **(long **)(*(long *)(param_1 + 8) + 0x48);
    lVar8 = (uVar26 & 0xffffffff) << 2;
    pfVar21 = (float *)(lVar3 + 8);
    do {
      piVar11 = (int *)(lVar4 + lVar24 * 0xc);
      fVar37 = (float)piVar11[2];
      iVar6 = *piVar11;
      iVar2 = piVar11[1];
      if (0 < iVar25) {
        _bzero(pfVar9,lVar8);
      }
      lVar12 = lVar16 + lVar10 * iVar6;
      uVar22 = (uint)uVar23;
      if (uVar22 < 2) {
        if (uVar22 == 0) {
          pfVar13 = pfVar21;
          uVar17 = uVar28;
          if (0 < (int)uVar5) {
            do {
              fVar29 = (float)NEON_ucvtf((uint)*(ushort *)(lVar12 + (long)(int)pfVar13[-2] * 2));
              pfVar9[(int)pfVar13[-1]] = pfVar9[(int)pfVar13[-1]] + *pfVar13 * fVar29;
              pfVar13 = pfVar13 + 3;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
        }
        else if (uVar22 == 1) {
          pfVar13 = pfVar21;
          uVar17 = uVar28;
          if (0 < (int)uVar5) {
            do {
              fVar29 = *pfVar13;
              pfVar1 = pfVar9 + (int)pfVar13[-1];
              puVar19 = (ushort *)(lVar12 + (long)(int)pfVar13[-2] * 2);
              fVar30 = (float)NEON_ucvtf((uint)*puVar19);
              fVar33 = (float)NEON_ucvtf((uint)puVar19[1]);
              *pfVar1 = *pfVar1 + fVar29 * fVar30;
              pfVar1[1] = pfVar1[1] + fVar29 * fVar33;
              uVar17 = uVar17 - 1;
              pfVar13 = pfVar13 + 3;
            } while (uVar17 != 0);
          }
        }
        else {
LAB_109b2e544:
          if (0 < (int)uVar5) {
            uVar17 = 0;
            do {
              piVar11 = (int *)(lVar3 + uVar17 * 0xc);
              fVar29 = (float)piVar11[2];
              puVar19 = (ushort *)(lVar12 + (long)*piVar11 * 2);
              pfVar13 = pfVar9 + piVar11[1];
              lVar20 = lVar18;
              do {
                *pfVar13 = *pfVar13 + fVar29 * (float)*puVar19;
                lVar20 = lVar20 + -1;
                puVar19 = puVar19 + 1;
                pfVar13 = pfVar13 + 1;
              } while (lVar20 != 0);
              uVar17 = uVar17 + 1;
            } while (uVar17 != uVar28);
          }
        }
      }
      else if (uVar22 == 2) {
        pfVar13 = pfVar21;
        uVar17 = uVar28;
        if (0 < (int)uVar5) {
          do {
            fVar30 = *pfVar13;
            pfVar1 = pfVar9 + (int)pfVar13[-1];
            puVar19 = (ushort *)(lVar12 + (long)(int)pfVar13[-2] * 2);
            fVar33 = (float)NEON_ucvtf((uint)*puVar19);
            fVar34 = (float)NEON_ucvtf((uint)puVar19[1]);
            fVar29 = (float)NEON_ucvtf((uint)puVar19[2]);
            *pfVar1 = *pfVar1 + fVar30 * fVar33;
            pfVar1[1] = pfVar1[1] + fVar30 * fVar34;
            pfVar1[2] = pfVar1[2] + fVar30 * fVar29;
            uVar17 = uVar17 - 1;
            pfVar13 = pfVar13 + 3;
          } while (uVar17 != 0);
        }
      }
      else {
        if (uVar22 != 3) goto LAB_109b2e544;
        pfVar13 = pfVar21;
        uVar17 = uVar28;
        if (0 < (int)uVar5) {
          do {
            fVar29 = pfVar13[-1];
            fVar30 = *pfVar13;
            uVar32 = *(undefined8 *)(pfVar9 + (int)fVar29 + 2);
            uVar31 = *(undefined8 *)(pfVar9 + (int)fVar29);
            uVar35 = *(undefined8 *)(lVar12 + (long)(int)pfVar13[-2] * 2);
            auVar36._2_2_ = 0;
            auVar36._0_2_ = (ushort)uVar35;
            auVar36._4_2_ = (short)((ulong)uVar35 >> 0x10);
            auVar36._6_2_ = 0;
            auVar36._8_2_ = (short)((ulong)uVar35 >> 0x20);
            auVar36._10_2_ = 0;
            auVar36._12_2_ = (short)((ulong)uVar35 >> 0x30);
            auVar36._14_2_ = 0;
            auVar36 = NEON_ucvtf(auVar36,4);
            *(ulong *)(pfVar9 + (int)fVar29 + 2) =
                 CONCAT44((float)((ulong)uVar32 >> 0x20) + auVar36._12_4_ * fVar30,
                          (float)uVar32 + auVar36._8_4_ * fVar30);
            *(ulong *)(pfVar9 + (int)fVar29) =
                 CONCAT44((float)((ulong)uVar31 >> 0x20) + auVar36._4_4_ * fVar30,
                          (float)uVar31 + auVar36._0_4_ * fVar30);
            uVar17 = uVar17 - 1;
            pfVar13 = pfVar13 + 3;
          } while (uVar17 != 0);
        }
      }
      if (iVar2 == iVar27) {
        pfVar13 = pfVar9;
        lVar12 = lVar8;
        iVar2 = iVar27;
        if (0 < iVar25) {
          do {
            pfVar13[uVar26] = pfVar13[uVar26] + *pfVar13 * fVar37;
            pfVar13 = pfVar13 + 1;
            lVar12 = lVar12 + -4;
          } while (lVar12 != 0);
        }
      }
      else if (0 < iVar25) {
        puVar14 = (undefined2 *)
                  (*(long *)(puVar15 + 4) + **(long **)(puVar15 + 0x12) * (long)iVar27);
        pfVar13 = pfVar9;
        lVar12 = lVar8;
        do {
          uVar22 = (uint)(long)(float)(int)pfVar13[uVar26] &
                   ((int)(uint)(long)(float)(int)pfVar13[uVar26] >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar22) {
            uVar22 = 0xffff;
          }
          *puVar14 = (short)uVar22;
          pfVar13[uVar26] = fVar37 * *pfVar13;
          pfVar13 = pfVar13 + 1;
          lVar12 = lVar12 + -4;
          puVar14 = puVar14 + 1;
        } while (lVar12 != 0);
      }
      iVar27 = iVar2;
      lVar24 = lVar24 + 1;
    } while (lVar24 != iVar7);
  }
  if (0 < iVar25) {
    lVar18 = (uVar26 & 0xffffffff) << 1;
    puVar14 = (undefined2 *)(*(long *)(puVar15 + 4) + **(long **)(puVar15 + 0x12) * (long)iVar27);
    pfVar21 = pfVar9 + uVar26;
    do {
      uVar5 = (uint)(long)(float)(int)*pfVar21 &
              ((int)(uint)(long)(float)(int)*pfVar21 >> 0x1f ^ 0xffffffffU);
      if (0xfffe < (int)uVar5) {
        uVar5 = 0xffff;
      }
      *puVar14 = (short)uVar5;
      lVar18 = lVar18 + -2;
      puVar14 = puVar14 + 1;
      pfVar21 = pfVar21 + 1;
    } while (lVar18 != 0);
  }
  if (pfVar9 != afStack_498) {
    __ZdaPv(pfVar9);
  }
  return;
}



/* Entry: 109b2e768; end: 109b2e76f;  */

void FUN_109b2e768(void)

{
  return;
}



/* Entry: 109b2e770; end: 109b2ebaf;  */

void FUN_109b2e770(long param_1,int *param_2)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  float *pfVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  float *pfVar15;
  undefined2 *puVar16;
  uint *puVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  short *psVar22;
  int iVar23;
  long lVar24;
  float *pfVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  float fVar37;
  float afStack_498 [266];
  
  puVar17 = *(uint **)(param_1 + 0x10);
  uVar27 = (ulong)(*puVar17 >> 3) & 0x1ff;
  lVar20 = uVar27 + 1;
  uVar29 = (long)(int)lVar20 * (long)*(int *)(*(long *)(puVar17 + 0x10) + 4);
  iVar21 = (int)uVar29;
  pfVar11 = afStack_498;
  if (0x108 < (uint)(iVar21 << 1)) {
    pfVar11 = (float *)((long)(iVar21 << 1) << 2);
    if (iVar21 < 0) {
      pfVar11 = (float *)0xffffffffffffffff;
    }
    __Znam();
  }
  uVar5 = *(uint *)(param_1 + 0x28);
  uVar30 = (ulong)uVar5;
  iVar8 = *(int *)(*(long *)(param_1 + 0x30) + (long)*param_2 * 4);
  lVar28 = (long)iVar8;
  iVar9 = *(int *)(*(long *)(param_1 + 0x30) + (long)param_2[1] * 4);
  lVar3 = *(long *)(param_1 + 0x18);
  lVar4 = *(long *)(param_1 + 0x20);
  iVar23 = *(int *)(lVar4 + (long)iVar8 * 0xc + 4);
  if (0 < iVar21) {
    _bzero(pfVar11 + uVar29,(uVar29 & 0xffffffff) << 2);
  }
  if (iVar8 < iVar9) {
    lVar18 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    lVar10 = (uVar29 & 0xffffffff) << 2;
    lVar12 = **(long **)(*(long *)(param_1 + 8) + 0x48);
    pfVar25 = (float *)(lVar3 + 8);
    do {
      piVar13 = (int *)(lVar4 + lVar28 * 0xc);
      fVar37 = (float)piVar13[2];
      iVar8 = *piVar13;
      iVar2 = piVar13[1];
      if (0 < iVar21) {
        _bzero(pfVar11,lVar10);
      }
      lVar14 = lVar18 + lVar12 * iVar8;
      uVar26 = (uint)uVar27;
      if (uVar26 < 2) {
        if (uVar26 == 0) {
          pfVar15 = pfVar25;
          uVar19 = uVar30;
          if (0 < (int)uVar5) {
            do {
              pfVar11[(int)pfVar15[-1]] =
                   pfVar11[(int)pfVar15[-1]] +
                   *pfVar15 * (float)(int)*(short *)(lVar14 + (long)(int)pfVar15[-2] * 2);
              uVar19 = uVar19 - 1;
              pfVar15 = pfVar15 + 3;
            } while (uVar19 != 0);
          }
        }
        else if (uVar26 == 1) {
          pfVar15 = pfVar25;
          uVar19 = uVar30;
          if (0 < (int)uVar5) {
            do {
              fVar31 = *pfVar15;
              psVar22 = (short *)(lVar14 + (long)(int)pfVar15[-2] * 2);
              pfVar1 = pfVar11 + (int)pfVar15[-1];
              sVar6 = psVar22[1];
              *pfVar1 = *pfVar1 + fVar31 * (float)(int)*psVar22;
              pfVar1[1] = pfVar1[1] + fVar31 * (float)(int)sVar6;
              uVar19 = uVar19 - 1;
              pfVar15 = pfVar15 + 3;
            } while (uVar19 != 0);
          }
        }
        else {
LAB_109b2e980:
          if (0 < (int)uVar5) {
            uVar19 = 0;
            do {
              piVar13 = (int *)(lVar3 + uVar19 * 0xc);
              fVar31 = (float)piVar13[2];
              psVar22 = (short *)(lVar14 + (long)*piVar13 * 2);
              pfVar15 = pfVar11 + piVar13[1];
              lVar24 = lVar20;
              do {
                *pfVar15 = *pfVar15 + fVar31 * (float)(int)*psVar22;
                lVar24 = lVar24 + -1;
                psVar22 = psVar22 + 1;
                pfVar15 = pfVar15 + 1;
              } while (lVar24 != 0);
              uVar19 = uVar19 + 1;
            } while (uVar19 != uVar30);
          }
        }
      }
      else if (uVar26 == 2) {
        pfVar15 = pfVar25;
        uVar19 = uVar30;
        if (0 < (int)uVar5) {
          do {
            fVar31 = *pfVar15;
            psVar22 = (short *)(lVar14 + (long)(int)pfVar15[-2] * 2);
            pfVar1 = pfVar11 + (int)pfVar15[-1];
            sVar6 = psVar22[1];
            sVar7 = psVar22[2];
            *pfVar1 = *pfVar1 + fVar31 * (float)(int)*psVar22;
            pfVar1[1] = pfVar1[1] + fVar31 * (float)(int)sVar6;
            pfVar1[2] = pfVar1[2] + fVar31 * (float)(int)sVar7;
            uVar19 = uVar19 - 1;
            pfVar15 = pfVar15 + 3;
          } while (uVar19 != 0);
        }
      }
      else {
        if (uVar26 != 3) goto LAB_109b2e980;
        pfVar15 = pfVar25;
        uVar19 = uVar30;
        if (0 < (int)uVar5) {
          do {
            fVar31 = pfVar15[-1];
            fVar32 = *pfVar15;
            uVar34 = *(undefined8 *)(pfVar11 + (int)fVar31 + 2);
            uVar33 = *(undefined8 *)(pfVar11 + (int)fVar31);
            uVar35 = *(undefined8 *)(lVar14 + (long)(int)pfVar15[-2] * 2);
            auVar36._0_4_ = (int)(short)uVar35;
            auVar36._4_4_ = (int)(short)((ulong)uVar35 >> 0x10);
            auVar36._8_4_ = (int)(short)((ulong)uVar35 >> 0x20);
            auVar36._12_4_ = (int)(short)((ulong)uVar35 >> 0x30);
            auVar36 = NEON_scvtf(auVar36,4);
            *(ulong *)(pfVar11 + (int)fVar31 + 2) =
                 CONCAT44((float)((ulong)uVar34 >> 0x20) + auVar36._12_4_ * fVar32,
                          (float)uVar34 + auVar36._8_4_ * fVar32);
            *(ulong *)(pfVar11 + (int)fVar31) =
                 CONCAT44((float)((ulong)uVar33 >> 0x20) + auVar36._4_4_ * fVar32,
                          (float)uVar33 + auVar36._0_4_ * fVar32);
            uVar19 = uVar19 - 1;
            pfVar15 = pfVar15 + 3;
          } while (uVar19 != 0);
        }
      }
      if (iVar2 == iVar23) {
        pfVar15 = pfVar11;
        lVar14 = lVar10;
        iVar2 = iVar23;
        if (0 < iVar21) {
          do {
            pfVar15[uVar29] = pfVar15[uVar29] + *pfVar15 * fVar37;
            pfVar15 = pfVar15 + 1;
            lVar14 = lVar14 + -4;
          } while (lVar14 != 0);
        }
      }
      else if (0 < iVar21) {
        puVar16 = (undefined2 *)
                  (*(long *)(puVar17 + 4) + **(long **)(puVar17 + 0x12) * (long)iVar23);
        pfVar15 = pfVar11;
        lVar14 = lVar10;
        do {
          iVar23 = (int)(long)(float)(int)pfVar15[uVar29];
          if (iVar23 < -0x7fff) {
            iVar23 = -0x8000;
          }
          if (0x7ffe < iVar23) {
            iVar23 = 0x7fff;
          }
          *puVar16 = (short)iVar23;
          pfVar15[uVar29] = fVar37 * *pfVar15;
          pfVar15 = pfVar15 + 1;
          lVar14 = lVar14 + -4;
          puVar16 = puVar16 + 1;
        } while (lVar14 != 0);
      }
      iVar23 = iVar2;
      lVar28 = lVar28 + 1;
    } while (lVar28 != iVar9);
  }
  if (0 < iVar21) {
    lVar20 = (uVar29 & 0xffffffff) << 1;
    puVar16 = (undefined2 *)(*(long *)(puVar17 + 4) + **(long **)(puVar17 + 0x12) * (long)iVar23);
    pfVar25 = pfVar11 + uVar29;
    do {
      iVar21 = (int)(long)(float)(int)*pfVar25;
      if (iVar21 < -0x7fff) {
        iVar21 = -0x8000;
      }
      if (0x7ffe < iVar21) {
        iVar21 = 0x7fff;
      }
      *puVar16 = (short)iVar21;
      lVar20 = lVar20 + -2;
      puVar16 = puVar16 + 1;
      pfVar25 = pfVar25 + 1;
    } while (lVar20 != 0);
  }
  if (pfVar11 != afStack_498) {
    __ZdaPv(pfVar11);
  }
  return;
}



/* Entry: 109b2ebb0; end: 109b2ebb7;  */

void FUN_109b2ebb0(void)

{
  return;
}



/* Entry: 109b2ebb8; end: 109b2ef6f;  */

void FUN_109b2ebb8(long param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  uint *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;
  ulong uVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float afStack_498 [266];
  
  puVar16 = *(uint **)(param_1 + 0x10);
  uVar22 = (ulong)(*puVar16 >> 3) & 0x1ff;
  lVar19 = uVar22 + 1;
  uVar26 = (long)(int)lVar19 * (long)*(int *)(*(long *)(puVar16 + 0x10) + 4);
  iVar25 = (int)uVar26;
  pfVar9 = afStack_498;
  if (0x108 < (uint)(iVar25 << 1)) {
    pfVar9 = (float *)((long)(iVar25 << 1) << 2);
    if (iVar25 < 0) {
      pfVar9 = (float *)0xffffffffffffffff;
    }
    __Znam();
  }
  uVar5 = *(uint *)(param_1 + 0x28);
  uVar27 = (ulong)uVar5;
  iVar6 = *(int *)(*(long *)(param_1 + 0x30) + (long)*param_2 * 4);
  lVar24 = (long)iVar6;
  iVar7 = *(int *)(*(long *)(param_1 + 0x30) + (long)param_2[1] * 4);
  lVar3 = *(long *)(param_1 + 0x18);
  lVar4 = *(long *)(param_1 + 0x20);
  iVar23 = *(int *)(lVar4 + (long)iVar6 * 0xc + 4);
  if (0 < iVar25) {
    _bzero(pfVar9 + uVar26,(uVar26 & 0xffffffff) << 2);
  }
  if (iVar6 < iVar7) {
    lVar17 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    lVar10 = **(long **)(*(long *)(param_1 + 8) + 0x48);
    lVar8 = (uVar26 & 0xffffffff) << 2;
    pfVar15 = (float *)(lVar3 + 8);
    do {
      piVar11 = (int *)(lVar4 + lVar24 * 0xc);
      fVar31 = (float)piVar11[2];
      iVar6 = *piVar11;
      iVar2 = piVar11[1];
      if (0 < iVar25) {
        _bzero(pfVar9,lVar8);
      }
      lVar12 = lVar17 + lVar10 * iVar6;
      uVar21 = (uint)uVar22;
      if (uVar21 < 2) {
        if (uVar21 == 0) {
          pfVar13 = pfVar15;
          uVar18 = uVar27;
          if (0 < (int)uVar5) {
            do {
              pfVar9[(int)pfVar13[-1]] =
                   pfVar9[(int)pfVar13[-1]] +
                   *pfVar13 * *(float *)(lVar12 + (long)(int)pfVar13[-2] * 4);
              uVar18 = uVar18 - 1;
              pfVar13 = pfVar13 + 3;
            } while (uVar18 != 0);
          }
        }
        else if (uVar21 == 1) {
          pfVar13 = pfVar15;
          uVar18 = uVar27;
          if (0 < (int)uVar5) {
            do {
              uVar29 = *(undefined8 *)(lVar12 + (long)(int)pfVar13[-2] * 4);
              *(ulong *)(pfVar9 + (int)pfVar13[-1]) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar9 + (int)pfVar13[-1]) >> 0x20) +
                            (float)((ulong)uVar29 >> 0x20) * *pfVar13,
                            (float)*(undefined8 *)(pfVar9 + (int)pfVar13[-1]) +
                            (float)uVar29 * *pfVar13);
              uVar18 = uVar18 - 1;
              pfVar13 = pfVar13 + 3;
            } while (uVar18 != 0);
          }
        }
        else {
LAB_109b2ed9c:
          if (0 < (int)uVar5) {
            uVar18 = 0;
            do {
              piVar11 = (int *)(lVar3 + uVar18 * 0xc);
              fVar28 = (float)piVar11[2];
              pfVar13 = (float *)(lVar12 + (long)*piVar11 * 4);
              pfVar14 = pfVar9 + piVar11[1];
              lVar20 = lVar19;
              do {
                *pfVar14 = *pfVar14 + fVar28 * *pfVar13;
                lVar20 = lVar20 + -1;
                pfVar13 = pfVar13 + 1;
                pfVar14 = pfVar14 + 1;
              } while (lVar20 != 0);
              uVar18 = uVar18 + 1;
            } while (uVar18 != uVar27);
          }
        }
      }
      else if (uVar21 == 2) {
        pfVar13 = pfVar15;
        uVar18 = uVar27;
        if (0 < (int)uVar5) {
          do {
            fVar28 = *pfVar13;
            pfVar14 = pfVar9 + (int)pfVar13[-1];
            puVar1 = (undefined8 *)(lVar12 + (long)(int)pfVar13[-2] * 4);
            fVar30 = *(float *)(puVar1 + 1);
            uVar29 = *puVar1;
            *(ulong *)pfVar14 =
                 CONCAT44((float)((ulong)*(undefined8 *)pfVar14 >> 0x20) +
                          (float)((ulong)uVar29 >> 0x20) * fVar28,
                          (float)*(undefined8 *)pfVar14 + (float)uVar29 * fVar28);
            pfVar14[2] = pfVar14[2] + fVar28 * fVar30;
            uVar18 = uVar18 - 1;
            pfVar13 = pfVar13 + 3;
          } while (uVar18 != 0);
        }
      }
      else {
        if (uVar21 != 3) goto LAB_109b2ed9c;
        pfVar13 = pfVar15;
        uVar18 = uVar27;
        if (0 < (int)uVar5) {
          do {
            fVar28 = *pfVar13;
            pfVar14 = pfVar9 + (int)pfVar13[-1];
            puVar1 = (undefined8 *)(lVar12 + (long)(int)pfVar13[-2] * 4);
            uVar29 = *puVar1;
            *(ulong *)pfVar14 =
                 CONCAT44((float)((ulong)*(undefined8 *)pfVar14 >> 0x20) +
                          (float)((ulong)uVar29 >> 0x20) * fVar28,
                          (float)*(undefined8 *)pfVar14 + (float)uVar29 * fVar28);
            uVar29 = puVar1[1];
            *(ulong *)(pfVar14 + 2) =
                 CONCAT44((float)((ulong)*(undefined8 *)(pfVar14 + 2) >> 0x20) +
                          (float)((ulong)uVar29 >> 0x20) * fVar28,
                          (float)*(undefined8 *)(pfVar14 + 2) + (float)uVar29 * fVar28);
            uVar18 = uVar18 - 1;
            pfVar13 = pfVar13 + 3;
          } while (uVar18 != 0);
        }
      }
      if (iVar2 == iVar23) {
        pfVar13 = pfVar9;
        lVar12 = lVar8;
        iVar2 = iVar23;
        if (0 < iVar25) {
          do {
            pfVar13[uVar26] = pfVar13[uVar26] + *pfVar13 * fVar31;
            pfVar13 = pfVar13 + 1;
            lVar12 = lVar12 + -4;
          } while (lVar12 != 0);
        }
      }
      else if (0 < iVar25) {
        pfVar14 = (float *)(*(long *)(puVar16 + 4) + **(long **)(puVar16 + 0x12) * (long)iVar23);
        pfVar13 = pfVar9;
        lVar12 = lVar8;
        do {
          *pfVar14 = pfVar13[uVar26];
          pfVar13[uVar26] = fVar31 * *pfVar13;
          pfVar13 = pfVar13 + 1;
          lVar12 = lVar12 + -4;
          pfVar14 = pfVar14 + 1;
        } while (lVar12 != 0);
      }
      iVar23 = iVar2;
      lVar24 = lVar24 + 1;
    } while (lVar24 != iVar7);
  }
  if (0 < iVar25) {
    lVar19 = (uVar26 & 0xffffffff) << 2;
    pfVar15 = (float *)(*(long *)(puVar16 + 4) + **(long **)(puVar16 + 0x12) * (long)iVar23);
    pfVar13 = pfVar9 + uVar26;
    do {
      *pfVar15 = *pfVar13;
      lVar19 = lVar19 + -4;
      pfVar15 = pfVar15 + 1;
      pfVar13 = pfVar13 + 1;
    } while (lVar19 != 0);
  }
  if (pfVar9 != afStack_498) {
    __ZdaPv(pfVar9);
  }
  return;
}



/* Entry: 109b2ef70; end: 109b2ef77;  */

void FUN_109b2ef70(void)

{
  return;
}



/* Entry: 109b2ef78; end: 109b2f34b;  */

void FUN_109b2ef78(long param_1,int *param_2)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  double *pdVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  double *pdVar13;
  double *pdVar14;
  uint *puVar15;
  long lVar16;
  float *pfVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  float fVar33;
  double adStack_4b8 [137];
  
  puVar15 = *(uint **)(param_1 + 0x10);
  uVar22 = (ulong)(*puVar15 >> 3) & 0x1ff;
  lVar19 = uVar22 + 1;
  uVar26 = (long)(int)lVar19 * (long)*(int *)(*(long *)(puVar15 + 0x10) + 4);
  iVar25 = (int)uVar26;
  pdVar9 = adStack_4b8;
  if (0x88 < (uint)(iVar25 << 1)) {
    pdVar9 = (double *)((long)(iVar25 << 1) << 3);
    if (iVar25 < 0) {
      pdVar9 = (double *)0xffffffffffffffff;
    }
    __Znam();
  }
  uVar5 = *(uint *)(param_1 + 0x28);
  uVar27 = (ulong)uVar5;
  iVar6 = *(int *)(*(long *)(param_1 + 0x30) + (long)*param_2 * 4);
  lVar24 = (long)iVar6;
  iVar7 = *(int *)(*(long *)(param_1 + 0x30) + (long)param_2[1] * 4);
  lVar3 = *(long *)(param_1 + 0x18);
  lVar4 = *(long *)(param_1 + 0x20);
  iVar23 = *(int *)(lVar4 + (long)iVar6 * 0xc + 4);
  if (0 < iVar25) {
    _bzero(pdVar9 + uVar26,(uVar26 & 0xffffffff) << 3);
  }
  if (iVar6 < iVar7) {
    lVar16 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    lVar10 = **(long **)(*(long *)(param_1 + 8) + 0x48);
    lVar8 = (uVar26 & 0xffffffff) << 3;
    pfVar1 = (float *)(lVar3 + 8);
    do {
      piVar11 = (int *)(lVar4 + lVar24 * 0xc);
      fVar33 = (float)piVar11[2];
      iVar6 = *piVar11;
      iVar2 = piVar11[1];
      if (0 < iVar25) {
        _bzero(pdVar9,lVar8);
      }
      lVar12 = lVar16 + lVar10 * iVar6;
      uVar21 = (uint)uVar22;
      if (uVar21 < 2) {
        if (uVar21 == 0) {
          pfVar17 = pfVar1;
          uVar18 = uVar27;
          if (0 < (int)uVar5) {
            do {
              pdVar9[(int)pfVar17[-1]] =
                   pdVar9[(int)pfVar17[-1]] +
                   (double)*pfVar17 * *(double *)(lVar12 + (long)(int)pfVar17[-2] * 8);
              pfVar17 = pfVar17 + 3;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
        }
        else if (uVar21 == 1) {
          pfVar17 = pfVar1;
          uVar18 = uVar27;
          if (0 < (int)uVar5) {
            do {
              fVar29 = pfVar17[-1];
              fVar28 = *pfVar17;
              dVar30 = pdVar9[(int)fVar29];
              pdVar13 = (double *)(lVar12 + (long)(int)pfVar17[-2] * 8);
              dVar31 = *pdVar13;
              (pdVar9 + (int)fVar29)[1] = (pdVar9 + (int)fVar29)[1] + pdVar13[1] * (double)fVar28;
              pdVar9[(int)fVar29] = dVar30 + dVar31 * (double)fVar28;
              uVar18 = uVar18 - 1;
              pfVar17 = pfVar17 + 3;
            } while (uVar18 != 0);
          }
        }
        else {
LAB_109b2f164:
          if (0 < (int)uVar5) {
            uVar18 = 0;
            do {
              piVar11 = (int *)(lVar3 + uVar18 * 0xc);
              fVar29 = (float)piVar11[2];
              pdVar13 = (double *)(lVar12 + (long)*piVar11 * 8);
              pdVar14 = pdVar9 + piVar11[1];
              lVar20 = lVar19;
              do {
                *pdVar14 = *pdVar14 + (double)fVar29 * *pdVar13;
                lVar20 = lVar20 + -1;
                pdVar13 = pdVar13 + 1;
                pdVar14 = pdVar14 + 1;
              } while (lVar20 != 0);
              uVar18 = uVar18 + 1;
            } while (uVar18 != uVar27);
          }
        }
      }
      else if (uVar21 == 2) {
        pfVar17 = pfVar1;
        uVar18 = uVar27;
        if (0 < (int)uVar5) {
          do {
            dVar30 = (double)*pfVar17;
            pdVar13 = pdVar9 + (int)pfVar17[-1];
            pdVar14 = (double *)(lVar12 + (long)(int)pfVar17[-2] * 8);
            dVar31 = pdVar14[2];
            dVar32 = *pdVar14;
            pdVar13[1] = pdVar13[1] + pdVar14[1] * dVar30;
            *pdVar13 = *pdVar13 + dVar32 * dVar30;
            pdVar13[2] = pdVar13[2] + dVar30 * dVar31;
            uVar18 = uVar18 - 1;
            pfVar17 = pfVar17 + 3;
          } while (uVar18 != 0);
        }
      }
      else {
        if (uVar21 != 3) goto LAB_109b2f164;
        pfVar17 = pfVar1;
        uVar18 = uVar27;
        if (0 < (int)uVar5) {
          do {
            dVar30 = (double)*pfVar17;
            pdVar13 = pdVar9 + (int)pfVar17[-1];
            pdVar14 = (double *)(lVar12 + (long)(int)pfVar17[-2] * 8);
            dVar31 = *pdVar14;
            pdVar13[1] = pdVar13[1] + pdVar14[1] * dVar30;
            *pdVar13 = *pdVar13 + dVar31 * dVar30;
            dVar31 = pdVar14[2];
            pdVar13[3] = pdVar13[3] + pdVar14[3] * dVar30;
            pdVar13[2] = pdVar13[2] + dVar31 * dVar30;
            uVar18 = uVar18 - 1;
            pfVar17 = pfVar17 + 3;
          } while (uVar18 != 0);
        }
      }
      if (iVar2 == iVar23) {
        pdVar13 = pdVar9;
        lVar12 = lVar8;
        iVar2 = iVar23;
        if (0 < iVar25) {
          do {
            pdVar13[uVar26] = pdVar13[uVar26] + *pdVar13 * (double)fVar33;
            pdVar13 = pdVar13 + 1;
            lVar12 = lVar12 + -8;
          } while (lVar12 != 0);
        }
      }
      else if (0 < iVar25) {
        pdVar14 = (double *)(*(long *)(puVar15 + 4) + **(long **)(puVar15 + 0x12) * (long)iVar23);
        pdVar13 = pdVar9;
        lVar12 = lVar8;
        do {
          *pdVar14 = pdVar13[uVar26];
          pdVar13[uVar26] = *pdVar13 * (double)fVar33;
          pdVar13 = pdVar13 + 1;
          lVar12 = lVar12 + -8;
          pdVar14 = pdVar14 + 1;
        } while (lVar12 != 0);
      }
      iVar23 = iVar2;
      lVar24 = lVar24 + 1;
    } while (lVar24 != iVar7);
  }
  if (0 < iVar25) {
    lVar19 = (uVar26 & 0xffffffff) << 3;
    pdVar13 = (double *)(*(long *)(puVar15 + 4) + **(long **)(puVar15 + 0x12) * (long)iVar23);
    pdVar14 = pdVar9 + uVar26;
    do {
      *pdVar13 = *pdVar14;
      lVar19 = lVar19 + -8;
      pdVar13 = pdVar13 + 1;
      pdVar14 = pdVar14 + 1;
    } while (lVar19 != 0);
  }
  if (pdVar9 != adStack_4b8) {
    __ZdaPv(pdVar9);
  }
  return;
}



/* Entry: 109b2f34c; end: 109b2fff3;  */

void FUN_109b2f34c(double *param_1,uint *param_2,uint param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  int iVar13;
  uint *puVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  ulong *puVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  char cVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  char cVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  undefined1 auVar62 [16];
  double dVar63;
  undefined1 auVar64 [16];
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  undefined1 auVar69 [16];
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  code *pcStack_758;
  undefined4 auStack_740 [2];
  undefined8 *puStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined4 auStack_720 [2];
  undefined8 *puStack_718;
  undefined8 uStack_710;
  undefined4 auStack_708 [2];
  undefined4 *puStack_700;
  undefined8 uStack_6f8;
  undefined4 uStack_6f0;
  int iStack_6ec;
  undefined8 uStack_6e8;
  undefined1 *puStack_6e0;
  undefined1 *puStack_6d8;
  undefined1 *puStack_6d0;
  undefined1 *puStack_6c8;
  double dStack_6c0;
  long lStack_6b8;
  long lStack_6b0;
  long *plStack_6a8;
  long alStack_6a0 [2];
  undefined8 uStack_690;
  ulong uStack_688;
  undefined8 *puStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  undefined8 *puStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  ulong uStack_628;
  undefined8 *puStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  undefined8 *puStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  int iStack_5c8;
  int iStack_5c4;
  double dStack_5c0;
  double dStack_5b8;
  double dStack_5b0;
  double dStack_5a8;
  double dStack_5a0;
  double dStack_598;
  double dStack_590;
  double dStack_588;
  double dStack_580;
  double dStack_578;
  double dStack_570;
  double dStack_568;
  double dStack_560;
  double dStack_558;
  double dStack_550;
  double dStack_548;
  double dStack_540;
  double dStack_538;
  double dStack_530;
  double dStack_528;
  double dStack_520;
  double dStack_518;
  double dStack_510;
  double dStack_508;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 *puStack_4e8;
  undefined1 *puStack_4e0;
  undefined1 *puStack_4d8;
  undefined1 *puStack_4d0;
  double dStack_4c8;
  double dStack_4c0;
  undefined8 *puStack_4b8;
  long *plStack_4b0;
  long alStack_4a8 [2];
  undefined1 auStack_498 [1024];
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_518 = 0.0;
  dStack_520 = 0.0;
  dStack_508 = 0.0;
  dStack_510 = 0.0;
  dStack_538 = 0.0;
  dStack_540 = 0.0;
  dStack_528 = 0.0;
  dStack_530 = 0.0;
  dStack_558 = 0.0;
  dStack_560 = 0.0;
  dStack_548 = 0.0;
  dStack_550 = 0.0;
  dStack_578 = 0.0;
  dStack_580 = 0.0;
  dStack_568 = 0.0;
  dStack_570 = 0.0;
  dStack_598 = 0.0;
  dStack_5a0 = 0.0;
  dStack_588 = 0.0;
  dStack_590 = 0.0;
  dStack_5b8 = 0.0;
  dStack_5c0 = 0.0;
  dStack_5a8 = 0.0;
  dStack_5b0 = 0.0;
  puVar14 = param_2;
  FUN_109a8b904(param_2,0xffffffff);
  FUN_109a8b004(&iStack_5c8,param_2,0xffffffff);
  if ((iStack_5c8 < 1) || (iStack_5c4 < 1)) {
    param_1[0x15] = 0.0;
    param_1[0x14] = 0.0;
    param_1[0x17] = 0.0;
    param_1[0x16] = 0.0;
    param_1[0x11] = 0.0;
    param_1[0x10] = 0.0;
    param_1[0x13] = 0.0;
    param_1[0x12] = 0.0;
    param_1[0xd] = 0.0;
    param_1[0xc] = 0.0;
    param_1[0xf] = 0.0;
    param_1[0xe] = 0.0;
    param_1[9] = 0.0;
    param_1[8] = 0.0;
    param_1[0xb] = 0.0;
    param_1[10] = 0.0;
    param_1[5] = 0.0;
    param_1[4] = 0.0;
    param_1[7] = 0.0;
    param_1[6] = 0.0;
    param_1[1] = 0.0;
    *param_1 = 0.0;
    param_1[3] = 0.0;
    param_1[2] = 0.0;
LAB_109b2fdc0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if ((*param_2 & 0x1f0000) == 0x10000) {
      puVar17 = *(ulong **)(param_2 + 2);
      uStack_5f0 = (ulong)&uStack_630 | 8;
      uStack_628 = puVar17[1];
      uStack_630 = *puVar17;
      puStack_620 = (undefined8 *)puVar17[2];
      uStack_618 = puVar17[3];
      uStack_608 = puVar17[5];
      uStack_610 = puVar17[4];
      uStack_600 = puVar17[6];
      uStack_5f8 = puVar17[7];
      puStack_5e8 = &uStack_5e0;
      uStack_5e0 = 0;
      uStack_5d8 = 0;
      if (puVar17[7] != 0) {
        piVar1 = (int *)(puVar17[7] + 0x14);
        do {
          cVar27 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar2) {
            *piVar1 = *piVar1 + 1;
            cVar27 = ExclusiveMonitorsStatus();
          }
        } while (cVar27 != '\0');
      }
      if (*(int *)((long)puVar17 + 4) < 3) {
        uStack_5e0 = *(undefined8 *)puVar17[9];
        uStack_5d8 = ((undefined8 *)puVar17[9])[1];
      }
      else {
        uStack_630 = uStack_630 & 0xffffffff;
        func_0x000109a84868(&uStack_630);
      }
    }
    else {
      FUN_109a8a180(&uStack_630,param_2,0xffffffff);
    }
    puVar15 = &uStack_630;
    FUN_109a89cd4(puVar15,2,0xffffffff,1);
    iVar13 = (int)puVar15;
    if ((-1 < iVar13) && (((uint)puVar14 & 6) == 4)) {
      param_1[0x15] = 0.0;
      param_1[0x14] = 0.0;
      param_1[0x17] = 0.0;
      param_1[0x16] = 0.0;
      param_1[0x11] = 0.0;
      param_1[0x10] = 0.0;
      param_1[0x13] = 0.0;
      param_1[0x12] = 0.0;
      param_1[0xd] = 0.0;
      param_1[0xc] = 0.0;
      param_1[0xf] = 0.0;
      param_1[0xe] = 0.0;
      param_1[9] = 0.0;
      param_1[8] = 0.0;
      param_1[0xb] = 0.0;
      param_1[10] = 0.0;
      param_1[5] = 0.0;
      param_1[4] = 0.0;
      param_1[7] = 0.0;
      param_1[6] = 0.0;
      param_1[1] = 0.0;
      *param_1 = 0.0;
      param_1[3] = 0.0;
      param_1[2] = 0.0;
      uVar22 = (uint)uStack_630 & 7;
      if (uVar22 == 4) {
        if (iVar13 != 0) {
          uVar4 = puStack_620[((ulong)puVar15 & 0xffffffff) - 1];
          cVar27 = (char)((int)uVar4 >> 0x1f);
          cVar36 = (char)((long)uVar4 >> 0x3f);
          auVar62[5] = cVar27;
          auVar62._0_5_ = (int5)(int)uVar4;
          auVar62[6] = cVar27;
          auVar62[7] = cVar27;
          auVar62[8] = (char)((ulong)uVar4 >> 0x20);
          auVar62[9] = (char)((ulong)uVar4 >> 0x28);
          auVar62[10] = (char)((ulong)uVar4 >> 0x30);
          auVar62[0xb] = (char)((ulong)uVar4 >> 0x38);
          auVar62[0xc] = cVar36;
          auVar62[0xd] = cVar36;
          auVar62[0xe] = cVar36;
          auVar62[0xf] = cVar36;
          auVar64 = NEON_scvtf(auVar62,8);
LAB_109b2f5e4:
          uVar20 = (ulong)puVar15 & 0xffffffff;
          dVar58 = 0.0;
          dVar60 = 0.0;
          dVar61 = 0.0;
          auVar62 = NEON_fmov(0x4008000000000000,8);
          dVar57 = 0.0;
          uVar41 = 0;
          uVar42 = 0;
          uVar43 = 0;
          uVar44 = 0;
          uVar45 = 0;
          uVar46 = 0;
          uVar47 = 0;
          uVar48 = 0;
          uVar49 = 0;
          uVar50 = 0;
          uVar51 = 0;
          uVar52 = 0;
          uVar53 = 0;
          uVar54 = 0;
          uVar55 = 0;
          uVar56 = 0;
          auVar76 = ZEXT216(0);
          uVar23 = 0;
          uVar24 = 0;
          uVar25 = 0;
          uVar26 = 0;
          uVar28 = 0;
          uVar29 = 0;
          uVar30 = 0;
          uVar31 = 0;
          uVar32 = 0;
          uVar33 = 0;
          uVar34 = 0;
          uVar35 = 0;
          uVar37 = 0;
          uVar38 = 0;
          uVar39 = 0;
          uVar40 = 0;
          puVar15 = puStack_620;
          dVar59 = auVar64._0_8_ * auVar64._0_8_;
          dVar63 = auVar64._8_8_ * auVar64._8_8_;
          do {
            if (uVar22 == 5) {
              auVar69._0_8_ = (double)(float)*puVar15;
              auVar69._8_8_ = (double)(float)((ulong)*puVar15 >> 0x20);
            }
            else {
              auVar75._0_8_ = (long)(int)*puVar15;
              auVar75._8_8_ = (long)(int)((ulong)*puVar15 >> 0x20);
              auVar69 = NEON_scvtf(auVar75,8);
            }
            dVar70 = auVar69._8_8_;
            dVar67 = auVar69._0_8_;
            dVar65 = auVar64._8_8_;
            dVar68 = auVar64._0_8_;
            dVar73 = -dVar67 * dVar65 + dVar68 * dVar70;
            auVar74._0_8_ = dVar68 + dVar67;
            auVar74._8_8_ = dVar65 + dVar70;
            dVar58 = dVar58 + auVar74._0_8_ * dVar73;
            dVar60 = dVar60 + auVar74._8_8_ * dVar73;
            auVar77 = NEON_ext(auVar74,auVar74,8,1);
            dVar71 = dVar67 * dVar67;
            dVar72 = dVar70 * dVar70;
            auVar75 = NEON_ext(auVar64,auVar64,8,1);
            dVar61 = dVar61 + dVar73;
            dVar8 = (double)CONCAT17(uVar48,CONCAT16(uVar47,CONCAT15(uVar46,CONCAT14(uVar45,CONCAT13
                                                  (uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))))
                                                  ))) +
                    (dVar67 * (dVar70 + auVar74._8_8_) + (dVar65 + auVar74._8_8_) * dVar68) * dVar73
            ;
            uVar41 = SUB81(dVar8,0);
            uVar42 = (undefined1)((ulong)dVar8 >> 8);
            uVar43 = (undefined1)((ulong)dVar8 >> 0x10);
            uVar44 = (undefined1)((ulong)dVar8 >> 0x18);
            uVar45 = (undefined1)((ulong)dVar8 >> 0x20);
            uVar46 = (undefined1)((ulong)dVar8 >> 0x28);
            uVar47 = (undefined1)((ulong)dVar8 >> 0x30);
            uVar48 = (undefined1)((ulong)dVar8 >> 0x38);
            dVar9 = (double)CONCAT17(uVar56,CONCAT16(uVar55,CONCAT15(uVar54,CONCAT14(uVar53,CONCAT13
                                                  (uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49))))
                                                  ))) +
                    (dVar70 * dVar70 + auVar74._8_8_ * dVar65) * dVar73;
            uVar49 = SUB81(dVar9,0);
            uVar50 = (undefined1)((ulong)dVar9 >> 8);
            uVar51 = (undefined1)((ulong)dVar9 >> 0x10);
            uVar52 = (undefined1)((ulong)dVar9 >> 0x18);
            uVar53 = (undefined1)((ulong)dVar9 >> 0x20);
            uVar54 = (undefined1)((ulong)dVar9 >> 0x28);
            uVar55 = (undefined1)((ulong)dVar9 >> 0x30);
            uVar56 = (undefined1)((ulong)dVar9 >> 0x38);
            dVar57 = dVar57 + (dVar71 + auVar74._0_8_ * dVar68) * dVar73;
            dVar5 = (double)CONCAT17(uVar31,CONCAT16(uVar30,CONCAT15(uVar29,CONCAT14(uVar28,CONCAT13
                                                  (uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23))))
                                                  ))) + (dVar59 + dVar71) * auVar74._0_8_ * dVar73;
            uVar23 = SUB81(dVar5,0);
            uVar24 = (undefined1)((ulong)dVar5 >> 8);
            uVar25 = (undefined1)((ulong)dVar5 >> 0x10);
            uVar26 = (undefined1)((ulong)dVar5 >> 0x18);
            uVar28 = (undefined1)((ulong)dVar5 >> 0x20);
            uVar29 = (undefined1)((ulong)dVar5 >> 0x28);
            uVar30 = (undefined1)((ulong)dVar5 >> 0x30);
            uVar31 = (undefined1)((ulong)dVar5 >> 0x38);
            dVar6 = (double)CONCAT17(uVar40,CONCAT16(uVar39,CONCAT15(uVar38,CONCAT14(uVar37,CONCAT13
                                                  (uVar35,CONCAT12(uVar34,CONCAT11(uVar33,uVar32))))
                                                  ))) + (dVar63 + dVar72) * auVar74._8_8_ * dVar73;
            uVar32 = SUB81(dVar6,0);
            uVar33 = (undefined1)((ulong)dVar6 >> 8);
            uVar34 = (undefined1)((ulong)dVar6 >> 0x10);
            uVar35 = (undefined1)((ulong)dVar6 >> 0x18);
            uVar37 = (undefined1)((ulong)dVar6 >> 0x20);
            uVar38 = (undefined1)((ulong)dVar6 >> 0x28);
            uVar39 = (undefined1)((ulong)dVar6 >> 0x30);
            uVar40 = (undefined1)((ulong)dVar6 >> 0x38);
            auVar64 = NEON_ext(auVar69,auVar69,8,1);
            dVar66 = auVar76._8_8_;
            auVar76._0_8_ =
                 auVar76._0_8_ +
                 (dVar68 * (dVar67 + dVar67) * auVar77._0_8_ +
                  (auVar64._0_8_ + auVar62._0_8_ * auVar75._0_8_) * dVar59 +
                 (auVar75._0_8_ + auVar62._0_8_ * auVar64._0_8_) * dVar71) * dVar73;
            auVar76._8_8_ =
                 dVar66 + (dVar65 * (dVar70 + dVar70) * auVar77._8_8_ +
                           (auVar64._8_8_ + auVar62._8_8_ * auVar75._8_8_) * dVar63 +
                          (auVar75._8_8_ + auVar62._8_8_ * auVar64._8_8_) * dVar72) * dVar73;
            puVar15 = puVar15 + 1;
            uVar20 = uVar20 - 1;
            auVar64 = auVar69;
            dVar59 = dVar71;
            dVar63 = dVar72;
          } while (uVar20 != 0);
          if (1.1920928955078125e-07 < ABS(dVar61)) {
            dVar59 = 0.5;
            if (dVar61 <= 0.0) {
              dVar59 = -0.5;
            }
            lVar18 = 8;
            if (dVar61 <= 0.0) {
              lVar18 = 0;
            }
            dVar63 = *(double *)(&UNK_10e033480 + lVar18);
            dVar66 = *(double *)(&UNK_10e033490 + lVar18);
            dVar68 = *(double *)(&UNK_10e0334a0 + lVar18);
            bVar2 = 0.0 < dVar61;
            *param_1 = dVar61 * dVar59;
            param_1[2] = dVar60 * dVar63;
            param_1[1] = dVar58 * dVar63;
            dVar59 = 0.08333333333333333;
            if (dVar61 <= 0.0) {
              dVar59 = -0.08333333333333333;
            }
            param_1[3] = dVar57 * dVar59;
            param_1[5] = (double)(-(ulong)((long)((ulong)bVar2 << 0x3f) < 0) & 0x8000000000000000 ^
                                 0xbfb5555555555555) * dVar9;
            param_1[4] = (double)(-(ulong)((long)((ulong)CONCAT14(bVar2,(uint)bVar2) << 0x3f) < 0) &
                                  0x8000000000000000 ^ 0xbfa5555555555555) * dVar8;
            param_1[6] = dVar66 * dVar5;
            param_1[8] = auVar76._8_8_ * dVar68;
            param_1[7] = auVar76._0_8_ * dVar68;
            param_1[9] = dVar66 * dVar6;
            func_0x000109b307d4(param_1);
          }
        }
      }
      else {
        if (uVar22 != 5) {
          puVar16 = (undefined4 *)0x3c;
          func_0x000107c2ae8c();
          *puVar16 = 1;
          uStack_690 = puVar16 + 1;
          uStack_688 = 0x36;
          *(undefined8 *)(puVar16 + 3) = 0x2029286874706564;
          *(undefined8 *)(puVar16 + 1) = 0x2e72756f746e6f63;
          *(undefined1 *)((long)puVar16 + 0x3a) = 0;
          *(undefined8 *)(puVar16 + 7) = 0x6e6f63207c7c2053;
          *(undefined8 *)(puVar16 + 5) = 0x32335f5643203d3d;
          *(undefined8 *)(puVar16 + 0xb) = 0x203d3d2029286874;
          *(undefined8 *)(puVar16 + 9) = 0x7065642e72756f74;
          *(undefined8 *)((long)puVar16 + 0x32) = 0x4632335f5643203d;
          FUN_109ac3188(0xffffff29,&uStack_690,&UNK_10f59d8bb,&UNK_10f59d802,0x65);
          goto LAB_109b2ff14;
        }
        if (iVar13 != 0) {
          auVar64._0_8_ = (double)(float)puStack_620[((ulong)puVar15 & 0xffffffff) - 1];
          auVar64._8_8_ =
               (double)(float)((ulong)puStack_620[((ulong)puVar15 & 0xffffffff) - 1] >> 0x20);
          goto LAB_109b2f5e4;
        }
      }
      if (uStack_5f8 != 0) {
        piVar1 = (int *)(uStack_5f8 + 0x14);
        do {
          iVar13 = *piVar1;
          cVar27 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar2) {
            *piVar1 = iVar13 + -1;
            cVar27 = ExclusiveMonitorsStatus();
          }
        } while (cVar27 != '\0');
        if (iVar13 + -1 == 0) {
          func_0x000109a848d4(&uStack_630);
        }
      }
      uStack_5f8 = 0;
      uStack_618 = 0;
      puStack_620 = (undefined8 *)0x0;
      uStack_608 = 0;
      uStack_610 = 0;
      if (0 < uStack_630._4_4_) {
        lVar18 = 0;
        do {
          *(undefined4 *)(uStack_5f0 + lVar18 * 4) = 0;
          lVar18 = lVar18 + 1;
        } while (lVar18 < uStack_630._4_4_);
      }
      if (puStack_5e8 != &uStack_5e0 && puStack_5e8 != (undefined8 *)0x0) {
        _free(puStack_5e8[-1]);
      }
      goto LAB_109b2fdc0;
    }
    if (((ulong)puVar14 & 0xff8) == 0) {
      pcStack_758 = FUN_109b2fff4;
      if (((param_3 & 1) == 0) && (((ulong)puVar14 & 7) != 0)) {
        uVar22 = ((uint)puVar14 & 7) - 2;
        if ((4 < uVar22) || ((0x1bU >> (ulong)(uVar22 & 0x1f) & 1) == 0)) {
          puVar16 = (undefined4 *)0x8;
          func_0x000107c2ae8c();
          *puVar16 = 1;
          uStack_690 = puVar16 + 1;
          *(undefined1 *)uStack_690 = 0;
          uStack_688 = 0;
          FUN_109ac3188(0xffffff2e,&uStack_690,&UNK_10f59d7fa,&UNK_10f59d802,0x291);
          goto LAB_109b2ff14;
        }
        pcStack_758 = (code *)(&PTR_FUN_110b26cb8)[uVar22];
      }
      uStack_650 = (ulong)&uStack_690 | 8;
      uStack_688 = uStack_628;
      uStack_690 = (undefined4 *)uStack_630;
      uStack_678 = uStack_618;
      puStack_680 = puStack_620;
      uStack_668 = uStack_608;
      uStack_670 = uStack_610;
      uStack_658 = uStack_5f8;
      uStack_660 = uStack_600;
      uStack_640 = 0;
      uStack_638 = 0;
      if (uStack_5f8 != 0) {
        piVar1 = (int *)(uStack_5f8 + 0x14);
        do {
          cVar27 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar2) {
            *piVar1 = *piVar1 + 1;
            cVar27 = ExclusiveMonitorsStatus();
          }
        } while (cVar27 != '\0');
      }
      puStack_648 = &uStack_640;
      if (uStack_630._4_4_ < 3) {
        uStack_640 = *puStack_5e8;
        uStack_638 = puStack_5e8[1];
      }
      else {
        uStack_690 = (undefined4 *)(uStack_630 & 0xffffffff);
        func_0x000109a84868(&uStack_690,&uStack_630);
      }
      if (0 < iStack_5c4) {
        uVar22 = 0;
        auVar64 = NEON_fmov(0x4000000000000000,8);
        iVar19 = iStack_5c4;
        iVar13 = iStack_5c8;
        do {
          iVar3 = iVar19 - uVar22;
          if (0x1f < iVar3) {
            iVar3 = 0x20;
          }
          if (0 < iVar13) {
            uVar21 = 0;
            dVar59 = (double)uVar22;
            do {
              iVar13 = iVar13 - uVar21;
              if (0x1f < iVar13) {
                iVar13 = 0x20;
              }
              uStack_4f8 = (double)CONCAT44(uVar22,uVar21);
              uStack_4f0._0_4_ = iVar13;
              uStack_4f0._4_4_ = iVar3;
              FUN_109a852c8(&uStack_6f0,&uStack_690,&uStack_4f8);
              if (param_3 != 0) {
                puStack_4e8 = auStack_498;
                dStack_4c8 = 0.0;
                dStack_4c0 = 0.0;
                alStack_4a8[0] = (long)iVar13;
                uStack_4f8 = 4.79933338353261e-314;
                alStack_4a8[1] = 1;
                puStack_4d8 = puStack_4e8 + (long)iVar3 * (long)iVar13;
                uStack_6f8 = 0;
                auStack_708[0] = 0x1010000;
                uStack_730 = 0;
                uStack_728 = 0;
                auStack_720[0] = 0xc1020006;
                puStack_718 = &uStack_728;
                uStack_710 = 0x100000001;
                auStack_740[0] = 0x2010000;
                puStack_738 = &uStack_4f8;
                puStack_700 = &uStack_6f0;
                uStack_4f0._0_4_ = iVar3;
                uStack_4f0._4_4_ = iVar13;
                puStack_4e0 = puStack_4e8;
                puStack_4d0 = puStack_4d8;
                puStack_4b8 = &uStack_4f0;
                plStack_4b0 = alStack_4a8;
                FUN_109a2b294(auStack_708,auStack_720,auStack_740,5);
                if (dStack_4c0 != 0.0) {
                  piVar1 = (int *)((long)dStack_4c0 + 0x14);
                  do {
                    cVar27 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar2) {
                      *piVar1 = *piVar1 + 1;
                      cVar27 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar27 != '\0');
                }
                if (lStack_6b8 != 0) {
                  piVar1 = (int *)(lStack_6b8 + 0x14);
                  do {
                    iVar13 = *piVar1;
                    cVar27 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar2) {
                      *piVar1 = iVar13 + -1;
                      cVar27 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar27 != '\0');
                  if (iVar13 + -1 == 0) {
                    func_0x000109a848d4(&uStack_6f0);
                  }
                }
                lStack_6b8 = 0;
                puStack_6d8 = (undefined1 *)0x0;
                puStack_6e0 = (undefined1 *)0x0;
                puStack_6c8 = (undefined1 *)0x0;
                puStack_6d0 = (undefined1 *)0x0;
                if (iStack_6ec < 1) {
LAB_109b2fa00:
                  uStack_6f0 = (undefined4)uStack_4f8;
                  if (2 < uStack_4f8._4_4_) goto LAB_109b2fa34;
                  iStack_6ec = uStack_4f8._4_4_;
                  uStack_6e8 = CONCAT44(uStack_4f0._4_4_,(int)uStack_4f0);
                  *plStack_6a8 = *plStack_4b0;
                  plStack_6a8[1] = plStack_4b0[1];
                }
                else {
                  lVar18 = 0;
                  do {
                    *(undefined4 *)(lStack_6b0 + lVar18 * 4) = 0;
                    lVar18 = lVar18 + 1;
                  } while (lVar18 < iStack_6ec);
                  if (iStack_6ec < 3) goto LAB_109b2fa00;
LAB_109b2fa34:
                  uStack_6f0 = (undefined4)uStack_4f8;
                  func_0x000109a84868(&uStack_6f0,&uStack_4f8);
                }
                puStack_6d8 = puStack_4e0;
                puStack_6e0 = puStack_4e8;
                puStack_6c8 = puStack_4d0;
                puStack_6d0 = puStack_4d8;
                lStack_6b8 = (long)dStack_4c0;
                dStack_6c0 = dStack_4c8;
                if (dStack_4c0 != 0.0) {
                  piVar1 = (int *)((long)dStack_4c0 + 0x14);
                  do {
                    iVar13 = *piVar1;
                    cVar27 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar2) {
                      *piVar1 = iVar13 + -1;
                      cVar27 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar27 != '\0');
                  if (iVar13 + -1 == 0) {
                    func_0x000109a848d4(&uStack_4f8);
                  }
                }
                dStack_4c0 = 0.0;
                puStack_4e0 = (undefined1 *)0x0;
                puStack_4e8 = (undefined1 *)0x0;
                puStack_4d0 = (undefined1 *)0x0;
                puStack_4d8 = (undefined1 *)0x0;
                if (0 < uStack_4f8._4_4_) {
                  lVar18 = 0;
                  do {
                    *(undefined4 *)((long)puStack_4b8 + lVar18 * 4) = 0;
                    lVar18 = lVar18 + 1;
                  } while (lVar18 < uStack_4f8._4_4_);
                }
                if (plStack_4b0 != alStack_4a8 && plStack_4b0 != (long *)0x0) {
                  _free(plStack_4b0[-1]);
                }
              }
              (*pcStack_758)(&uStack_6f0,&uStack_4f8);
              if (param_3 != 0) {
                lVar18 = 0;
                do {
                  *(double *)((long)&uStack_4f0 + lVar18) =
                       *(double *)((long)&uStack_4f0 + lVar18) * 0.00392156862745098;
                  *(double *)((long)&uStack_4f8 + lVar18) =
                       *(double *)((long)&uStack_4f8 + lVar18) * 0.00392156862745098;
                  lVar18 = lVar18 + 0x10;
                } while (lVar18 != 0x50);
              }
              dVar57 = (double)uVar21;
              dVar63 = (double)CONCAT44(uStack_4f0._4_4_,(int)uStack_4f0);
              dVar58 = uStack_4f8 * dVar57;
              auVar10._8_8_ = puStack_4e0;
              auVar10._0_8_ = puStack_4e8;
              uVar23 = (undefined1)((ulong)dVar57 >> 8);
              uVar24 = (undefined1)((ulong)dVar57 >> 0x10);
              uVar25 = (undefined1)((ulong)dVar57 >> 0x18);
              uVar26 = (undefined1)((ulong)dVar57 >> 0x20);
              uVar28 = (undefined1)((ulong)dVar57 >> 0x28);
              uVar29 = (undefined1)((ulong)dVar57 >> 0x30);
              uVar30 = (undefined1)((ulong)dVar57 >> 0x38);
              dVar61 = uStack_4f8 * dVar59;
              auVar11._8_8_ = dStack_4c8;
              auVar11._0_8_ = puStack_4d0;
              auVar76 = NEON_ext(auVar10,auVar11,8,1);
              dStack_598 = dStack_598 +
                           (double)puStack_4d0 + (dVar61 + (double)puStack_4e8 * 2.0) * dVar59;
              dStack_590 = dStack_590 +
                           dStack_4c8 +
                           ((dVar58 + dVar63 * 3.0) * dVar57 + (double)puStack_4e0 * 3.0) * dVar57;
              dVar60 = dVar61 + (double)puStack_4e8;
              auVar77[8] = SUB81(dVar57,0);
              auVar77._0_8_ = dVar59;
              auVar77[9] = uVar23;
              auVar77[10] = uVar24;
              auVar77[0xb] = uVar25;
              auVar77[0xc] = uVar26;
              auVar77[0xd] = uVar28;
              auVar77[0xe] = uVar29;
              auVar77[0xf] = uVar30;
              auVar7[8] = SUB81(dVar57,0);
              auVar7._0_8_ = dVar59;
              auVar7[9] = uVar23;
              auVar7[10] = uVar24;
              auVar7[0xb] = uVar25;
              auVar7[0xc] = uVar26;
              auVar7[0xd] = uVar28;
              auVar7[0xe] = uVar29;
              auVar7[0xf] = uVar30;
              auVar62 = NEON_ext(auVar77,auVar7,8,1);
              dStack_5c0 = dStack_5c0 + uStack_4f8;
              dStack_5b8 = dStack_5b8 + dVar58 + dVar63;
              dStack_5b0 = dStack_5b0 + dVar60;
              dStack_5a8 = dStack_5a8 + (double)puStack_4e0 + (dVar58 + dVar63 * 2.0) * dVar57;
              dStack_5a0 = dStack_5a0 + (double)puStack_4d8 + dVar60 * dVar57 + dVar63 * dVar59;
              dStack_588 = dStack_588 +
                           dStack_4c0 +
                           (dVar60 * auVar62._0_8_ +
                           auVar64._0_8_ *
                           ((double)puStack_4d8 +
                           (double)CONCAT44(uStack_4f0._4_4_,(int)uStack_4f0) * dVar59)) *
                           auVar62._0_8_ + auVar76._0_8_ * dVar59;
              dStack_580 = dStack_580 +
                           (double)puStack_4b8 +
                           ((dVar58 + dVar63) * auVar62._8_8_ +
                           auVar64._8_8_ * ((double)puStack_4d8 + (double)puStack_4e8 * dVar57)) *
                           auVar62._8_8_ + auVar76._8_8_ * dVar57;
              dStack_578 = dStack_578 +
                           (double)plStack_4b0 +
                           ((dVar61 + (double)puStack_4e8 * 3.0) * dVar59 +
                           (double)puStack_4d0 * 3.0) * dVar59;
              if (lStack_6b8 != 0) {
                piVar1 = (int *)(lStack_6b8 + 0x14);
                do {
                  iVar13 = *piVar1;
                  cVar27 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar2) {
                    *piVar1 = iVar13 + -1;
                    cVar27 = ExclusiveMonitorsStatus();
                  }
                } while (cVar27 != '\0');
                if (iVar13 + -1 == 0) {
                  func_0x000109a848d4(&uStack_6f0);
                }
              }
              lStack_6b8 = 0;
              puStack_6d8 = (undefined1 *)0x0;
              puStack_6e0 = (undefined1 *)0x0;
              puStack_6c8 = (undefined1 *)0x0;
              puStack_6d0 = (undefined1 *)0x0;
              if (0 < iStack_6ec) {
                lVar18 = 0;
                do {
                  *(undefined4 *)(lStack_6b0 + lVar18 * 4) = 0;
                  lVar18 = lVar18 + 1;
                } while (lVar18 < iStack_6ec);
              }
              if (plStack_6a8 != alStack_6a0 && plStack_6a8 != (long *)0x0) {
                _free(plStack_6a8[-1]);
              }
              uVar21 = uVar21 + 0x20;
              iVar19 = iStack_5c4;
              iVar13 = iStack_5c8;
            } while ((int)uVar21 < iStack_5c8);
          }
          uVar22 = uVar22 + 0x20;
        } while ((int)uVar22 < iVar19);
      }
      if (uStack_658 != 0) {
        piVar1 = (int *)(uStack_658 + 0x14);
        do {
          iVar13 = *piVar1;
          cVar27 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar2) {
            *piVar1 = iVar13 + -1;
            cVar27 = ExclusiveMonitorsStatus();
          }
        } while (cVar27 != '\0');
        if (iVar13 + -1 == 0) {
          func_0x000109a848d4(&uStack_690);
        }
      }
      uStack_658 = 0;
      uStack_678 = 0;
      puStack_680 = (undefined8 *)0x0;
      uStack_668 = 0;
      uStack_670 = 0;
      if (0 < uStack_690._4_4_) {
        lVar18 = 0;
        do {
          *(undefined4 *)(uStack_650 + lVar18 * 4) = 0;
          lVar18 = lVar18 + 1;
        } while (lVar18 < uStack_690._4_4_);
      }
      if (puStack_648 != &uStack_640 && puStack_648 != (undefined8 *)0x0) {
        _free(puStack_648[-1]);
      }
      if (uStack_5f8 != 0) {
        piVar1 = (int *)(uStack_5f8 + 0x14);
        do {
          iVar13 = *piVar1;
          cVar27 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar2) {
            *piVar1 = iVar13 + -1;
            cVar27 = ExclusiveMonitorsStatus();
          }
        } while (cVar27 != '\0');
        if (iVar13 + -1 == 0) {
          func_0x000109a848d4(&uStack_630);
        }
      }
      uStack_5f8 = 0;
      uStack_618 = 0;
      puStack_620 = (undefined8 *)0x0;
      uStack_608 = 0;
      uStack_610 = 0;
      if (0 < uStack_630._4_4_) {
        lVar18 = 0;
        do {
          *(undefined4 *)(uStack_5f0 + lVar18 * 4) = 0;
          lVar18 = lVar18 + 1;
        } while (lVar18 < uStack_630._4_4_);
      }
      if (puStack_5e8 != &uStack_5e0 && puStack_5e8 != (undefined8 *)0x0) {
        _free(puStack_5e8[-1]);
      }
      func_0x000109b307d4(&dStack_5c0);
      param_1[0x11] = dStack_538;
      param_1[0x10] = dStack_540;
      param_1[0x13] = dStack_528;
      param_1[0x12] = dStack_530;
      param_1[0x15] = dStack_518;
      param_1[0x14] = dStack_520;
      param_1[0x17] = dStack_508;
      param_1[0x16] = dStack_510;
      param_1[9] = dStack_578;
      param_1[8] = dStack_580;
      param_1[0xb] = dStack_568;
      param_1[10] = dStack_570;
      param_1[0xd] = dStack_558;
      param_1[0xc] = dStack_560;
      param_1[0xf] = dStack_548;
      param_1[0xe] = dStack_550;
      param_1[1] = dStack_5b8;
      *param_1 = dStack_5c0;
      param_1[3] = dStack_5a8;
      param_1[2] = dStack_5b0;
      param_1[5] = dStack_598;
      param_1[4] = dStack_5a0;
      param_1[7] = dStack_588;
      param_1[6] = dStack_590;
      goto LAB_109b2fdc0;
    }
  }
  puVar16 = (undefined4 *)0x30;
  func_0x000107c2ae8c();
  *puVar16 = 1;
  uStack_690 = puVar16 + 1;
  uStack_688 = 0x2b;
  *(undefined1 *)((long)puVar16 + 0x2f) = 0;
  *(undefined8 *)(puVar16 + 3) = 0x7974206567616d69;
  *(undefined8 *)(puVar16 + 1) = 0x2064696c61766e49;
  *(undefined8 *)(puVar16 + 7) = 0x676e697320656220;
  *(undefined8 *)(puVar16 + 5) = 0x7473756d28206570;
  *(undefined8 *)((long)puVar16 + 0x27) = 0x296c656e6e616863;
  *(undefined8 *)((long)puVar16 + 0x1f) = 0x2d656c676e697320;
  FUN_109ac3188(0xfffffffb,&uStack_690,&UNK_10f59d7fa,&UNK_10f59d802,0x242);
LAB_109b2ff14:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x109b2ff18);
  (*pcVar12)();
}



/* Entry: 109b2fff4; end: 109b3025f;  */

void FUN_109b2fff4(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  byte bVar17;
  byte bVar18;
  byte bVar20;
  ushort uVar19;
  byte bVar21;
  byte bVar23;
  ushort uVar22;
  byte bVar24;
  byte bVar26;
  ushort uVar25;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  int iVar33;
  int iVar36;
  double dVar34;
  undefined1 auVar35 [16];
  int iVar37;
  int iVar41;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar42;
  int iVar45;
  int iVar46;
  int iVar47;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar48;
  int iVar50;
  int iVar51;
  undefined1 auVar49 [16];
  undefined8 uVar52;
  double dVar53;
  ushort uVar54;
  undefined2 uVar55;
  undefined2 uVar56;
  undefined2 uVar57;
  undefined2 uVar58;
  ushort uVar59;
  ushort uVar61;
  ushort uVar62;
  ushort uVar63;
  double dVar60;
  int iVar64;
  int iVar66;
  double dVar65;
  int iVar67;
  int iVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  int aiStack_50 [10];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = **(uint **)(param_1 + 0x40);
  uVar2 = (*(uint **)(param_1 + 0x40))[1];
  aiStack_50[9] = 0;
  auVar29._0_14_ = ZEXT214(0);
  auVar29._14_2_ = 0;
  aiStack_50[7] = 0;
  aiStack_50[8] = 0;
  aiStack_50[5] = 0;
  aiStack_50[6] = 0;
  aiStack_50[3] = 0;
  aiStack_50[4] = 0;
  aiStack_50[1] = 0;
  aiStack_50[2] = 0;
  if ((int)uVar1 < 1) {
    aiStack_50[0] = 0;
  }
  else {
    uVar9 = 0;
    aiStack_50[1] = 0;
    aiStack_50[2] = 0;
    aiStack_50[3] = 0;
    aiStack_50[6] = 0;
    aiStack_50[7] = 0;
    aiStack_50[8] = 0;
    aiStack_50[9] = 0;
    aiStack_50[0] = 0;
    lVar4 = *(long *)(param_1 + 0x10);
    param_1 = **(long **)(param_1 + 0x48);
    do {
      if ((int)uVar2 < 8) {
        auVar39 = ZEXT216(0);
        auVar43 = ZEXT216(0);
        auVar40 = ZEXT216(0);
        auVar44 = ZEXT216(0);
        uVar14 = 0;
      }
      else {
        uVar6 = 0;
        auVar44 = ZEXT216(0);
        auVar40 = ZEXT216(0);
        auVar43 = ZEXT216(0);
        auVar39 = ZEXT216(0);
        uVar52 = 0x3000200010000;
        do {
          uVar3 = *(undefined8 *)(lVar4 + uVar6);
          uVar54 = CONCAT11(0,(byte)uVar3);
          bVar17 = (byte)((ulong)uVar3 >> 8);
          bVar18 = (byte)((ulong)uVar3 >> 0x10);
          bVar20 = (byte)((ulong)uVar3 >> 0x18);
          bVar21 = (byte)((ulong)uVar3 >> 0x20);
          bVar23 = (byte)((ulong)uVar3 >> 0x28);
          bVar24 = (byte)((ulong)uVar3 >> 0x30);
          bVar26 = (byte)((ulong)uVar3 >> 0x38);
          uVar14 = (uint)uVar52 & 0xffff;
          uVar19 = (ushort)((ulong)uVar52 >> 0x10);
          uVar22 = (ushort)((ulong)uVar52 >> 0x20);
          uVar25 = (ushort)((ulong)uVar52 >> 0x30);
          auVar35 = NEON_umull(uVar52,(ulong)CONCAT16(bVar20,(uint6)CONCAT14(bVar18,(uint)CONCAT12(
                                                  bVar17,uVar54))),2);
          iVar41 = auVar44._4_4_;
          iVar50 = auVar44._8_4_;
          iVar51 = auVar44._12_4_;
          iVar33 = auVar40._4_4_;
          iVar36 = auVar40._8_4_;
          iVar37 = auVar40._12_4_;
          iVar64 = auVar35._0_4_ * uVar14;
          iVar66 = auVar35._4_4_ * (uint)uVar19;
          iVar67 = auVar35._8_4_ * (uint)uVar22;
          iVar68 = auVar35._12_4_ * (uint)uVar25;
          iVar45 = auVar43._4_4_;
          iVar46 = auVar43._8_4_;
          iVar47 = auVar43._12_4_;
          iVar12 = auVar39._4_4_;
          iVar8 = auVar39._8_4_;
          iVar5 = auVar39._12_4_;
          uVar59 = (short)uVar52 + 4;
          uVar61 = uVar19 + 4;
          uVar62 = uVar22 + 4;
          uVar63 = uVar25 + 4;
          auVar35[2] = bVar17;
          auVar35._0_2_ = uVar54;
          auVar35[3] = 0;
          auVar35[4] = bVar18;
          auVar35[5] = 0;
          auVar35[6] = bVar20;
          auVar35[7] = 0;
          auVar35[8] = bVar21;
          auVar35[9] = 0;
          auVar35[10] = bVar23;
          auVar35[0xb] = 0;
          auVar35[0xc] = bVar24;
          auVar35[0xd] = 0;
          auVar35[0xe] = bVar26;
          auVar35[0xf] = 0;
          auVar49[2] = bVar17;
          auVar49._0_2_ = uVar54;
          auVar49[3] = 0;
          auVar49[4] = bVar18;
          auVar49[5] = 0;
          auVar49[6] = bVar20;
          auVar49[7] = 0;
          auVar49[8] = bVar21;
          auVar49[9] = 0;
          auVar49[10] = bVar23;
          auVar49[0xb] = 0;
          auVar49[0xc] = bVar24;
          auVar49[0xd] = 0;
          auVar49[0xe] = bVar26;
          auVar49[0xf] = 0;
          auVar35 = NEON_ext(auVar35,auVar49,8,1);
          auVar49 = NEON_umull(CONCAT26(uVar63,CONCAT24(uVar62,CONCAT22(uVar61,uVar59))),
                               auVar35._0_8_,2);
          auVar44._0_4_ = auVar44._0_4_ + (uint)uVar54 + (CONCAT12(bVar23,(ushort)bVar21) & 0xffff);
          auVar44._4_4_ = iVar41 + (uint)(ushort)bVar17 + (uint)bVar23;
          auVar44._8_4_ = iVar50 + (uint)(ushort)bVar18 + (uint)bVar24;
          auVar44._12_4_ = iVar51 + (uint)(ushort)bVar20 + (uint)bVar26;
          auVar40._0_4_ =
               auVar40._0_4_ + ((uint)uVar52 & 0xffff) * (uint)uVar54 +
               (uint)uVar59 * (uint)auVar35._0_2_;
          auVar40._4_4_ =
               iVar33 + (uint)uVar19 * (uint)(ushort)bVar17 + (uint)uVar61 * (uint)auVar35._2_2_;
          auVar40._8_4_ =
               iVar36 + (uint)uVar22 * (uint)(ushort)bVar18 + (uint)uVar62 * (uint)auVar35._4_2_;
          auVar40._12_4_ =
               iVar37 + (uint)uVar25 * (uint)(ushort)bVar20 + (uint)uVar63 * (uint)auVar35._6_2_;
          iVar33 = auVar49._0_4_ * (uint)uVar59;
          iVar36 = auVar49._4_4_ * (uint)uVar61;
          iVar37 = auVar49._8_4_ * (uint)uVar62;
          iVar41 = auVar49._12_4_ * (uint)uVar63;
          auVar43._0_4_ = iVar64 + auVar43._0_4_ + iVar33;
          auVar43._4_4_ = iVar66 + iVar45 + iVar36;
          auVar43._8_4_ = iVar67 + iVar46 + iVar37;
          auVar43._12_4_ = iVar68 + iVar47 + iVar41;
          auVar39._0_4_ = auVar39._0_4_ + iVar64 * uVar14 + iVar33 * (uint)uVar59;
          auVar39._4_4_ = iVar12 + iVar66 * (uint)uVar19 + iVar36 * (uint)uVar61;
          auVar39._8_4_ = iVar8 + iVar67 * (uint)uVar22 + iVar37 * (uint)uVar62;
          auVar39._12_4_ = iVar5 + iVar68 * (uint)uVar25 + iVar41 * (uint)uVar63;
          uVar52 = CONCAT26(uVar25 + 8,CONCAT24(uVar22 + 8,CONCAT22(uVar19 + 8,(short)uVar52 + 8)));
          uVar6 = uVar6 + 8;
          uVar14 = (uVar2 - 8 & 0xfffffff8) + 8;
        } while (uVar6 <= uVar2 - 8);
      }
      auVar49 = NEON_ext(auVar44,auVar44,8,1);
      auVar35 = NEON_ext(auVar40,auVar40,8,1);
      iVar33 = auVar40._4_4_ + auVar40._0_4_ + auVar35._0_4_ + auVar35._4_4_;
      iVar36 = auVar44._4_4_ + auVar44._0_4_ + auVar49._0_4_ + auVar49._4_4_;
      auVar44 = NEON_ext(auVar43,auVar43,8,1);
      auVar40 = NEON_ext(auVar39,auVar39,8,1);
      iVar37 = auVar39._4_4_ + auVar39._0_4_ + auVar40._0_4_ + auVar40._4_4_;
      iVar41 = auVar43._4_4_ + auVar43._0_4_ + auVar44._0_4_ + auVar44._4_4_;
      if ((int)uVar14 < (int)uVar2) {
        uVar6 = (ulong)uVar14;
        do {
          iVar5 = (int)uVar6;
          iVar12 = (uint)*(byte *)(lVar4 + uVar6) * iVar5;
          iVar8 = iVar12 * iVar5;
          iVar33 = iVar12 + iVar33;
          iVar36 = (uint)*(byte *)(lVar4 + uVar6) + iVar36;
          iVar37 = iVar8 * iVar5 + iVar37;
          iVar41 = iVar8 + iVar41;
          uVar6 = uVar6 + 1;
        } while ((long)(int)uVar2 != uVar6);
      }
      iVar8 = (int)uVar9;
      iVar12 = iVar8 * iVar8;
      aiStack_50[6] = iVar37 + aiStack_50[6];
      aiStack_50[9] = aiStack_50[9] + iVar36 * iVar8 * iVar12;
      aiStack_50[8] = aiStack_50[8] + iVar33 * iVar12;
      aiStack_50[7] = aiStack_50[7] + iVar41 * iVar8;
      auVar28._0_4_ = auVar29._0_4_ + iVar33 * iVar8;
      auVar28._4_4_ = auVar29._4_4_ + iVar36 * iVar12;
      auVar28._8_8_ = 0;
      aiStack_50[3] = iVar41 + aiStack_50[3];
      aiStack_50[2] = iVar36 * iVar8 + aiStack_50[2];
      aiStack_50[1] = iVar33 + aiStack_50[1];
      aiStack_50[0] = iVar36 + aiStack_50[0];
      uVar9 = uVar9 + 1;
      lVar4 = lVar4 + param_1;
      auVar29 = auVar28;
    } while (uVar9 != uVar1);
    aiStack_50[4] = auVar28._0_4_;
    aiStack_50[5] = auVar28._4_4_;
  }
  lVar4 = 0;
  do {
    param_2[lVar4] = (double)aiStack_50[lVar4];
    lVar4 = lVar4 + 1;
  } while (lVar4 != 10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar1 = **(uint **)(param_1 + 0x40);
    uVar2 = (*(uint **)(param_1 + 0x40))[1];
    lStack_a0 = 0;
    lStack_b8 = 0;
    lStack_c0 = 0;
    lStack_a8 = 0;
    lStack_b0 = 0;
    lStack_d8 = 0;
    lStack_e0 = 0;
    lStack_c8 = 0;
    lStack_d0 = 0;
    if ((int)uVar1 < 1) {
      lStack_e8 = 0;
    }
    else {
      uVar9 = 0;
      lStack_e0 = 0;
      lStack_d8 = 0;
      lStack_d0 = 0;
      lStack_c8 = 0;
      lStack_c0 = 0;
      lStack_b8 = 0;
      lStack_b0 = 0;
      lStack_a8 = 0;
      lStack_a0 = 0;
      lStack_e8 = 0;
      lVar4 = *(long *)(param_1 + 0x10);
      param_1 = **(long **)(param_1 + 0x48);
      do {
        if ((int)uVar2 < 1) {
          uVar6 = 0;
          uVar7 = 0;
          uVar10 = 0;
          lVar11 = 0;
        }
        else {
          uVar13 = 0;
          lVar11 = 0;
          uVar10 = 0;
          uVar7 = 0;
          uVar6 = 0;
          do {
            uVar14 = (uint)*(ushort *)(lVar4 + uVar13 * 2);
            iVar33 = uVar14 * (int)uVar13;
            uVar6 = (ulong)((int)uVar6 + uVar14);
            uVar7 = (ulong)(uint)(iVar33 + (int)uVar7);
            uVar14 = iVar33 * (int)uVar13;
            uVar10 = (ulong)(uVar14 + (int)uVar10);
            lVar11 = lVar11 + uVar13 * uVar14;
            uVar13 = uVar13 + 1;
          } while (uVar2 != uVar13);
        }
        lVar15 = uVar9 * uVar9;
        lStack_a0 = lStack_a0 + uVar6 * uVar9 * lVar15;
        lStack_a8 = lStack_a8 + uVar7 * lVar15;
        lStack_b0 = lStack_b0 + uVar10 * uVar9;
        lStack_b8 = lVar11 + lStack_b8;
        lStack_c8 = lStack_c8 + uVar7 * uVar9;
        lStack_d0 = uVar10 + lStack_d0;
        lStack_d8 = uVar6 * uVar9 + lStack_d8;
        lStack_e0 = uVar7 + lStack_e0;
        lStack_e8 = uVar6 + lStack_e8;
        uVar9 = uVar9 + 1;
        lVar4 = lVar4 + param_1;
        lStack_c0 = lStack_c0 + uVar6 * lVar15;
      } while (uVar9 != uVar1);
    }
    lVar4 = 0;
    do {
      auVar29 = NEON_scvtf(*(undefined1 (*) [16])((long)&lStack_e8 + lVar4),8);
      ((undefined8 *)((long)param_2 + lVar4))[1] = auVar29._8_8_;
      *(undefined8 *)((long)param_2 + lVar4) = auVar29._0_8_;
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != 0x50);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
      ___stack_chk_fail();
      lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar1 = **(uint **)(param_1 + 0x40);
      uVar2 = (*(uint **)(param_1 + 0x40))[1];
      lStack_140 = 0;
      lStack_158 = 0;
      lStack_160 = 0;
      lStack_148 = 0;
      lStack_150 = 0;
      lStack_178 = 0;
      lStack_180 = 0;
      lStack_168 = 0;
      lStack_170 = 0;
      if ((int)uVar1 < 1) {
        lStack_188 = 0;
      }
      else {
        uVar9 = 0;
        lStack_180 = 0;
        lStack_178 = 0;
        lStack_170 = 0;
        lStack_168 = 0;
        lStack_160 = 0;
        lStack_158 = 0;
        lStack_150 = 0;
        lStack_148 = 0;
        lStack_140 = 0;
        lStack_188 = 0;
        lVar4 = *(long *)(param_1 + 0x10);
        param_1 = **(long **)(param_1 + 0x48);
        do {
          if ((int)uVar2 < 1) {
            iVar33 = 0;
            iVar36 = 0;
            lVar15 = 0;
            lVar11 = 0;
          }
          else {
            uVar6 = 0;
            lVar11 = 0;
            iVar37 = 0;
            iVar36 = 0;
            iVar33 = 0;
            do {
              iVar12 = (int)uVar6;
              iVar8 = (int)*(short *)(lVar4 + uVar6 * 2);
              iVar41 = iVar8 * iVar12;
              iVar33 = iVar33 + iVar8;
              iVar36 = iVar41 + iVar36;
              iVar41 = iVar41 * iVar12;
              iVar37 = iVar41 + iVar37;
              lVar11 = lVar11 + iVar41 * iVar12;
              uVar6 = uVar6 + 1;
            } while (uVar2 != uVar6);
            lVar15 = (long)iVar37;
          }
          iVar37 = iVar33 * (int)uVar9;
          lVar16 = uVar9 * uVar9;
          lStack_140 = lStack_140 + lVar16 * iVar37;
          lStack_148 = lStack_148 + lVar16 * iVar36;
          lStack_160 = lStack_160 + iVar33 * (int)lVar16;
          lStack_168 = lStack_168 + iVar36 * (int)uVar9;
          lStack_178 = lStack_178 + iVar37;
          lStack_150 = lStack_150 + lVar15 * uVar9;
          lStack_158 = lVar11 + lStack_158;
          lStack_170 = lVar15 + lStack_170;
          lStack_180 = lStack_180 + iVar36;
          lStack_188 = lStack_188 + iVar33;
          uVar9 = uVar9 + 1;
          lVar4 = lVar4 + param_1;
        } while (uVar9 != uVar1);
      }
      lVar4 = 0;
      do {
        auVar29 = NEON_scvtf(*(undefined1 (*) [16])((long)&lStack_188 + lVar4),8);
        ((undefined8 *)((long)param_2 + lVar4))[1] = auVar29._8_8_;
        *(undefined8 *)((long)param_2 + lVar4) = auVar29._0_8_;
        lVar4 = lVar4 + 0x10;
      } while (lVar4 != 0x50);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
        ___stack_chk_fail();
        uVar1 = **(uint **)(param_1 + 0x40);
        if ((int)uVar1 < 1) {
          dVar27 = 0.0;
          dVar30 = 0.0;
          dVar31 = 0.0;
          dVar32 = 0.0;
          dVar34 = 0.0;
          dVar38 = 0.0;
          dVar42 = 0.0;
          dVar48 = 0.0;
          dVar53 = 0.0;
          uVar55 = 0;
          uVar56 = 0;
          uVar57 = 0;
          uVar58 = 0;
        }
        else {
          uVar9 = 0;
          uVar2 = (*(uint **)(param_1 + 0x40))[1];
          lVar4 = *(long *)(param_1 + 0x10);
          dVar27 = 0.0;
          dVar30 = 0.0;
          dVar31 = 0.0;
          dVar32 = 0.0;
          dVar34 = 0.0;
          dVar38 = 0.0;
          dVar42 = 0.0;
          dVar48 = 0.0;
          dVar53 = 0.0;
          uVar55 = 0;
          uVar56 = 0;
          uVar57 = 0;
          uVar58 = 0;
          do {
            dVar60 = 0.0;
            dVar65 = 0.0;
            dVar70 = 0.0;
            dVar69 = 0.0;
            if (0 < (int)uVar2) {
              uVar6 = 0;
              dVar65 = 0.0;
              dVar69 = 0.0;
              dVar70 = 0.0;
              do {
                dVar71 = (double)*(float *)(lVar4 + uVar6 * 4);
                dVar72 = (double)(uVar6 & 0xffffffff);
                dVar73 = dVar72 * dVar71;
                dVar60 = dVar60 + dVar71;
                dVar65 = dVar65 + dVar73;
                dVar73 = dVar73 * dVar72;
                dVar70 = dVar70 + dVar73;
                dVar69 = dVar69 + dVar72 * dVar73;
                uVar6 = uVar6 + 1;
              } while (uVar2 != uVar6);
            }
            dVar71 = (double)(uVar9 & 0xffffffff);
            dVar73 = (double)(uint)((int)uVar9 * (int)uVar9);
            dVar53 = dVar53 + dVar73 * dVar60 * dVar71;
            dVar48 = dVar48 + dVar73 * dVar65;
            dVar42 = dVar42 + dVar71 * dVar70;
            dVar38 = dVar38 + dVar69;
            dVar34 = dVar34 + dVar73 * dVar60;
            dVar32 = dVar32 + dVar71 * dVar65;
            dVar31 = dVar31 + dVar70;
            dVar30 = dVar30 + dVar60 * dVar71;
            dVar27 = dVar27 + dVar65;
            dVar60 = (double)CONCAT26(uVar58,CONCAT24(uVar57,CONCAT22(uVar56,uVar55))) + dVar60;
            uVar55 = SUB82(dVar60,0);
            uVar56 = (undefined2)((ulong)dVar60 >> 0x10);
            uVar57 = (undefined2)((ulong)dVar60 >> 0x20);
            uVar58 = (undefined2)((ulong)dVar60 >> 0x30);
            uVar9 = uVar9 + 1;
            lVar4 = lVar4 + **(long **)(param_1 + 0x48);
          } while (uVar9 != uVar1);
        }
        *param_2 = CONCAT26(uVar58,CONCAT24(uVar57,CONCAT22(uVar56,uVar55)));
        param_2[1] = dVar27;
        param_2[2] = dVar30;
        param_2[3] = dVar31;
        param_2[4] = dVar32;
        param_2[5] = dVar34;
        param_2[6] = dVar38;
        param_2[7] = dVar42;
        param_2[8] = dVar48;
        param_2[9] = dVar53;
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 109b30260; end: 109b3058f;  */

void FUN_109b30260(long param_1,double *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
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
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = **(uint **)(param_1 + 0x40);
  uVar2 = (*(uint **)(param_1 + 0x40))[1];
  lStack_50 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  lStack_58 = 0;
  lStack_60 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  if ((int)uVar1 < 1) {
    lStack_98 = 0;
  }
  else {
    uVar9 = 0;
    lStack_90 = 0;
    lStack_88 = 0;
    lStack_80 = 0;
    lStack_78 = 0;
    lStack_70 = 0;
    lStack_68 = 0;
    lStack_60 = 0;
    lStack_58 = 0;
    lStack_50 = 0;
    lStack_98 = 0;
    lVar4 = *(long *)(param_1 + 0x10);
    param_1 = **(long **)(param_1 + 0x48);
    do {
      if ((int)uVar2 < 1) {
        uVar6 = 0;
        uVar8 = 0;
        uVar10 = 0;
        lVar12 = 0;
      }
      else {
        uVar14 = 0;
        lVar12 = 0;
        uVar10 = 0;
        uVar8 = 0;
        uVar6 = 0;
        do {
          uVar15 = (uint)*(ushort *)(lVar4 + uVar14 * 2);
          iVar5 = uVar15 * (int)uVar14;
          uVar6 = (ulong)((int)uVar6 + uVar15);
          uVar8 = (ulong)(uint)(iVar5 + (int)uVar8);
          uVar15 = iVar5 * (int)uVar14;
          uVar10 = (ulong)(uVar15 + (int)uVar10);
          lVar12 = lVar12 + uVar14 * uVar15;
          uVar14 = uVar14 + 1;
        } while (uVar2 != uVar14);
      }
      lVar17 = uVar9 * uVar9;
      lStack_50 = lStack_50 + uVar6 * uVar9 * lVar17;
      lStack_58 = lStack_58 + uVar8 * lVar17;
      lStack_60 = lStack_60 + uVar10 * uVar9;
      lStack_68 = lVar12 + lStack_68;
      lStack_78 = lStack_78 + uVar8 * uVar9;
      lStack_80 = uVar10 + lStack_80;
      lStack_88 = uVar6 * uVar9 + lStack_88;
      lStack_90 = uVar8 + lStack_90;
      lStack_98 = uVar6 + lStack_98;
      uVar9 = uVar9 + 1;
      lVar4 = lVar4 + param_1;
      lStack_70 = lStack_70 + uVar6 * lVar17;
    } while (uVar9 != uVar1);
  }
  lVar4 = 0;
  do {
    auVar20 = NEON_scvtf(*(undefined1 (*) [16])((long)&lStack_98 + lVar4),8);
    ((undefined8 *)((long)param_2 + lVar4))[1] = auVar20._8_8_;
    *(undefined8 *)((long)param_2 + lVar4) = auVar20._0_8_;
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x50);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = **(uint **)(param_1 + 0x40);
  uVar2 = (*(uint **)(param_1 + 0x40))[1];
  lStack_f0 = 0;
  lStack_108 = 0;
  lStack_110 = 0;
  lStack_f8 = 0;
  lStack_100 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  lStack_118 = 0;
  lStack_120 = 0;
  if ((int)uVar1 < 1) {
    lStack_138 = 0;
  }
  else {
    uVar9 = 0;
    lStack_130 = 0;
    lStack_128 = 0;
    lStack_120 = 0;
    lStack_118 = 0;
    lStack_110 = 0;
    lStack_108 = 0;
    lStack_100 = 0;
    lStack_f8 = 0;
    lStack_f0 = 0;
    lStack_138 = 0;
    lVar4 = *(long *)(param_1 + 0x10);
    param_1 = **(long **)(param_1 + 0x48);
    do {
      if ((int)uVar2 < 1) {
        iVar5 = 0;
        iVar7 = 0;
        lVar17 = 0;
        lVar12 = 0;
      }
      else {
        uVar6 = 0;
        lVar12 = 0;
        iVar11 = 0;
        iVar7 = 0;
        iVar5 = 0;
        do {
          iVar13 = (int)uVar6;
          iVar16 = (int)*(short *)(lVar4 + uVar6 * 2);
          iVar3 = iVar16 * iVar13;
          iVar5 = iVar5 + iVar16;
          iVar7 = iVar3 + iVar7;
          iVar3 = iVar3 * iVar13;
          iVar11 = iVar3 + iVar11;
          lVar12 = lVar12 + iVar3 * iVar13;
          uVar6 = uVar6 + 1;
        } while (uVar2 != uVar6);
        lVar17 = (long)iVar11;
      }
      iVar11 = iVar5 * (int)uVar9;
      lVar18 = uVar9 * uVar9;
      lStack_f0 = lStack_f0 + lVar18 * iVar11;
      lStack_f8 = lStack_f8 + lVar18 * iVar7;
      lStack_110 = lStack_110 + iVar5 * (int)lVar18;
      lStack_118 = lStack_118 + iVar7 * (int)uVar9;
      lStack_128 = lStack_128 + iVar11;
      lStack_100 = lStack_100 + lVar17 * uVar9;
      lStack_108 = lVar12 + lStack_108;
      lStack_120 = lVar17 + lStack_120;
      lStack_130 = lStack_130 + iVar7;
      lStack_138 = lStack_138 + iVar5;
      uVar9 = uVar9 + 1;
      lVar4 = lVar4 + param_1;
    } while (uVar9 != uVar1);
  }
  lVar4 = 0;
  do {
    auVar20 = NEON_scvtf(*(undefined1 (*) [16])((long)&lStack_138 + lVar4),8);
    ((undefined8 *)((long)param_2 + lVar4))[1] = auVar20._8_8_;
    *(undefined8 *)((long)param_2 + lVar4) = auVar20._0_8_;
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x50);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
    ___stack_chk_fail();
    uVar1 = **(uint **)(param_1 + 0x40);
    if ((int)uVar1 < 1) {
      dVar19 = 0.0;
      dVar21 = 0.0;
      dVar22 = 0.0;
      dVar23 = 0.0;
      dVar24 = 0.0;
      dVar25 = 0.0;
      dVar26 = 0.0;
      dVar27 = 0.0;
      dVar28 = 0.0;
      dVar29 = 0.0;
    }
    else {
      uVar9 = 0;
      uVar2 = (*(uint **)(param_1 + 0x40))[1];
      lVar4 = *(long *)(param_1 + 0x10);
      dVar19 = 0.0;
      dVar21 = 0.0;
      dVar22 = 0.0;
      dVar23 = 0.0;
      dVar24 = 0.0;
      dVar25 = 0.0;
      dVar26 = 0.0;
      dVar27 = 0.0;
      dVar28 = 0.0;
      dVar29 = 0.0;
      do {
        dVar30 = 0.0;
        dVar31 = 0.0;
        dVar33 = 0.0;
        dVar32 = 0.0;
        if (0 < (int)uVar2) {
          uVar6 = 0;
          do {
            dVar34 = (double)*(float *)(lVar4 + uVar6 * 4);
            dVar35 = (double)(uVar6 & 0xffffffff);
            dVar36 = dVar35 * dVar34;
            dVar30 = dVar30 + dVar34;
            dVar31 = dVar31 + dVar36;
            dVar36 = dVar36 * dVar35;
            dVar33 = dVar33 + dVar36;
            dVar32 = dVar32 + dVar35 * dVar36;
            uVar6 = uVar6 + 1;
          } while (uVar2 != uVar6);
        }
        dVar34 = (double)(uVar9 & 0xffffffff);
        dVar36 = (double)(uint)((int)uVar9 * (int)uVar9);
        dVar28 = dVar28 + dVar36 * dVar30 * dVar34;
        dVar27 = dVar27 + dVar36 * dVar31;
        dVar26 = dVar26 + dVar34 * dVar33;
        dVar25 = dVar25 + dVar32;
        dVar24 = dVar24 + dVar36 * dVar30;
        dVar23 = dVar23 + dVar34 * dVar31;
        dVar22 = dVar22 + dVar33;
        dVar21 = dVar21 + dVar30 * dVar34;
        dVar19 = dVar19 + dVar31;
        dVar29 = dVar29 + dVar30;
        uVar9 = uVar9 + 1;
        lVar4 = lVar4 + **(long **)(param_1 + 0x48);
      } while (uVar9 != uVar1);
    }
    *param_2 = dVar29;
    param_2[1] = dVar19;
    param_2[2] = dVar21;
    param_2[3] = dVar22;
    param_2[4] = dVar23;
    param_2[5] = dVar24;
    param_2[6] = dVar25;
    param_2[7] = dVar26;
    param_2[8] = dVar27;
    param_2[9] = dVar28;
    return;
  }
  return;
}



/* Entry: 109b30590; end: 109b308b3;  */

void FUN_109b30590(long param_1,double *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  uVar1 = **(uint **)(param_1 + 0x40);
  if ((int)uVar1 < 1) {
    dVar6 = 0.0;
    dVar7 = 0.0;
    dVar8 = 0.0;
    dVar9 = 0.0;
    dVar10 = 0.0;
    dVar11 = 0.0;
    dVar12 = 0.0;
    dVar13 = 0.0;
    dVar14 = 0.0;
    dVar15 = 0.0;
  }
  else {
    uVar3 = 0;
    uVar2 = (*(uint **)(param_1 + 0x40))[1];
    lVar4 = *(long *)(param_1 + 0x10);
    dVar6 = 0.0;
    dVar7 = 0.0;
    dVar8 = 0.0;
    dVar9 = 0.0;
    dVar10 = 0.0;
    dVar11 = 0.0;
    dVar12 = 0.0;
    dVar13 = 0.0;
    dVar14 = 0.0;
    dVar15 = 0.0;
    do {
      dVar16 = 0.0;
      dVar17 = 0.0;
      dVar19 = 0.0;
      dVar18 = 0.0;
      if (0 < (int)uVar2) {
        uVar5 = 0;
        do {
          dVar20 = (double)*(float *)(lVar4 + uVar5 * 4);
          dVar21 = (double)(uVar5 & 0xffffffff);
          dVar22 = dVar21 * dVar20;
          dVar16 = dVar16 + dVar20;
          dVar17 = dVar17 + dVar22;
          dVar22 = dVar22 * dVar21;
          dVar19 = dVar19 + dVar22;
          dVar18 = dVar18 + dVar21 * dVar22;
          uVar5 = uVar5 + 1;
        } while (uVar2 != uVar5);
      }
      dVar20 = (double)(uVar3 & 0xffffffff);
      dVar22 = (double)(uint)((int)uVar3 * (int)uVar3);
      dVar14 = dVar14 + dVar22 * dVar16 * dVar20;
      dVar13 = dVar13 + dVar22 * dVar17;
      dVar12 = dVar12 + dVar20 * dVar19;
      dVar11 = dVar11 + dVar18;
      dVar10 = dVar10 + dVar22 * dVar16;
      dVar9 = dVar9 + dVar20 * dVar17;
      dVar8 = dVar8 + dVar19;
      dVar7 = dVar7 + dVar16 * dVar20;
      dVar6 = dVar6 + dVar17;
      dVar15 = dVar15 + dVar16;
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + **(long **)(param_1 + 0x48);
    } while (uVar3 != uVar1);
  }
  *param_2 = dVar15;
  param_2[1] = dVar6;
  param_2[2] = dVar7;
  param_2[3] = dVar8;
  param_2[4] = dVar9;
  param_2[5] = dVar10;
  param_2[6] = dVar11;
  param_2[7] = dVar12;
  param_2[8] = dVar13;
  param_2[9] = dVar14;
  return;
}



/* Entry: 109b308b4; end: 109b32bf7;  */

void FUN_109b308b4(undefined8 param_1,uint param_2,uint param_3,uint *param_4,int *param_5,
                  int param_6,int param_7,undefined8 *param_8)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined2 uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  long lVar10;
  undefined8 **ppuVar11;
  code *pcVar12;
  int iVar13;
  long *plVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
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
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  long lVar32;
  undefined4 uVar33;
  long lVar34;
  long *plStack_190;
  undefined8 *puStack_188;
  long *plStack_180;
  undefined8 *puStack_178;
  long *plStack_170;
  undefined8 *puStack_168;
  long *plStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  double dStack_140;
  double dStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  int *piStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  int iStack_ec;
  int iStack_e8;
  uint uStack_e4;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  double dStack_d0;
  double dStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  iStack_ec = param_7;
  iStack_e8 = param_6;
  uStack_e4 = param_3;
  if ((*param_4 & 0x1f0000) == 0x10000) {
    puVar16 = *(undefined8 **)(param_4 + 2);
    piStack_110 = (int *)((ulong)&uStack_150 | 8);
    uStack_148 = (undefined8 *)puVar16[1];
    uStack_150 = (undefined4 *)*puVar16;
    dStack_138 = (double)puVar16[3];
    dStack_140 = (double)puVar16[2];
    uStack_128 = puVar16[5];
    uStack_130 = puVar16[4];
    lStack_118 = puVar16[7];
    uStack_120 = puVar16[6];
    puStack_108 = &uStack_100;
    uStack_100 = 0;
    uStack_f8 = 0;
    if (puVar16[7] != 0) {
      piVar1 = (int *)(puVar16[7] + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (*(int *)((long)puVar16 + 4) < 3) {
      uStack_100 = *(undefined8 *)puVar16[9];
      uStack_f8 = ((undefined8 *)puVar16[9])[1];
    }
    else {
      uStack_150 = (undefined4 *)((ulong)uStack_150 & 0xffffffff);
      func_0x000109a84868(&uStack_150);
    }
  }
  else {
    FUN_109a8a180(&uStack_150,param_4,0xffffffff);
  }
  iVar13 = piStack_110[1] / 2;
  if (*param_5 != -1) {
    iVar13 = *param_5;
  }
  iVar4 = *piStack_110 / 2;
  if (param_5[1] != -1) {
    iVar4 = param_5[1];
  }
  if ((((iVar13 < 0) || (piStack_110[1] <= iVar13)) || (iVar4 < 0)) || (*piStack_110 <= iVar4)) {
    puVar15 = (undefined4 *)0x3c;
    func_0x000107c2ae8c();
    *puVar15 = 1;
    uStack_e0 = puVar15 + 1;
    puStack_d8 = (undefined8 *)0x34;
    *(undefined8 *)(puVar15 + 3) = 0x655228656469736e;
    *(undefined8 *)(puVar15 + 1) = 0x692e726f68636e61;
    puVar15[0xd] = 0x29297468;
    *(undefined1 *)(puVar15 + 0xe) = 0;
    *(undefined8 *)(puVar15 + 7) = 0x772e657a69736b20;
    *(undefined8 *)(puVar15 + 5) = 0x2c30202c30287463;
    *(undefined8 *)(puVar15 + 0xb) = 0x676965682e657a69;
    *(undefined8 *)(puVar15 + 9) = 0x736b202c68746469;
    FUN_109ac3188(0xffffff29,&uStack_e0,&UNK_10f59ce9d,&UNK_10f59cead,0x16b);
    goto LAB_109b327d0;
  }
  *param_5 = iVar13;
  param_5[1] = iVar4;
  plStack_160 = (long *)0x0;
  puStack_158 = (undefined8 *)0x0;
  plStack_170 = (long *)0x0;
  puStack_168 = (undefined8 *)0x0;
  plStack_180 = (long *)0x0;
  puStack_178 = (undefined8 *)0x0;
  uStack_e0 = (undefined4 *)CONCAT44(uStack_e0._4_4_,0x1010000);
  puStack_d8 = &uStack_150;
  dStack_d0 = 0.0;
  iVar13 = (int)&uStack_e0;
  FUN_109ab7930();
  uVar2 = uStack_e4;
  iVar4 = uStack_148._4_4_;
  if (iVar13 == uStack_148._4_4_ * (int)uStack_148) {
    iVar13 = uStack_148._4_4_ / 2;
    if (-1 < *param_5) {
      iVar13 = *param_5;
    }
    if (1 < param_2) {
      puVar15 = (undefined4 *)0x2c;
      func_0x000107c2ae8c();
      *puVar15 = 1;
      uStack_e0 = puVar15 + 1;
      puStack_d8 = (undefined8 *)0x27;
      *(undefined1 *)((long)puVar15 + 0x2b) = 0;
      *(undefined8 *)(puVar15 + 3) = 0x444f52455f485052;
      *(undefined8 *)(puVar15 + 1) = 0x4f4d203d3d20706f;
      *(undefined8 *)(puVar15 + 7) = 0x4850524f4d203d3d;
      *(undefined8 *)(puVar15 + 5) = 0x20706f207c7c2045;
      *(undefined8 *)((long)puVar15 + 0x23) = 0x4554414c49445f48;
      FUN_109ac3188(0xffffff29,&uStack_e0,&UNK_10f59d8f2,&UNK_10f59d909,0x358);
      goto LAB_109b327d0;
    }
    uVar2 = uStack_e4 & 7;
    if (param_2 == 0) {
      if (uVar2 < 3) {
        if (uVar2 == 0) {
          puVar16 = (undefined8 *)0x18;
          __Znwm();
          *puVar16 = &PTR_FUN_110b26d30;
          *(int *)(puVar16 + 1) = iVar4;
          *(int *)((long)puVar16 + 0xc) = iVar13;
          plVar14 = (long *)0x20;
          __Znwm();
          plVar17 = plVar14 + 1;
          *(int *)plVar17 = 1;
          *plVar14 = (long)&PTR_FUN_110b26d70;
          plVar14[2] = (long)puVar16;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *(int *)plVar17 = (int)*plVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          do {
            iVar13 = (int)*plVar17 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *(int *)plVar17 = iVar13;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plStack_80 = plVar14;
          plStack_78 = puVar16;
          if (iVar13 == 0) {
            (**(code **)(*plVar14 + 0x10))();
          }
        }
        else {
          if (uVar2 != 2) goto LAB_109b322f4;
          puVar16 = (undefined8 *)0x18;
          __Znwm();
          *puVar16 = &PTR_FUN_110b26db0;
          *(int *)(puVar16 + 1) = iVar4;
          *(int *)((long)puVar16 + 0xc) = iVar13;
          plVar14 = (long *)0x20;
          __Znwm();
          plVar17 = plVar14 + 1;
          *(int *)plVar17 = 1;
          *plVar14 = (long)&PTR_FUN_110b26df0;
          plVar14[2] = (long)puVar16;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *(int *)plVar17 = (int)*plVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          do {
            iVar13 = (int)*plVar17 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *(int *)plVar17 = iVar13;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plStack_80 = plVar14;
          plStack_78 = puVar16;
          if (iVar13 == 0) {
            (**(code **)(*plVar14 + 0x10))();
          }
        }
      }
      else if (uVar2 == 3) {
        puVar16 = (undefined8 *)0x18;
        __Znwm();
        *puVar16 = &PTR_FUN_110b26e30;
        *(int *)(puVar16 + 1) = iVar4;
        *(int *)((long)puVar16 + 0xc) = iVar13;
        plVar14 = (long *)0x20;
        __Znwm();
        plVar17 = plVar14 + 1;
        *(int *)plVar17 = 1;
        *plVar14 = (long)&PTR_FUN_110b26e70;
        plVar14[2] = (long)puVar16;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = (int)*plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          iVar13 = (int)*plVar17 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plStack_80 = plVar14;
        plStack_78 = puVar16;
        if (iVar13 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      else if (uVar2 == 5) {
        puVar16 = (undefined8 *)0x18;
        __Znwm();
        *puVar16 = &PTR_FUN_110b26eb0;
        *(int *)(puVar16 + 1) = iVar4;
        *(int *)((long)puVar16 + 0xc) = iVar13;
        plVar14 = (long *)0x20;
        __Znwm();
        plVar17 = plVar14 + 1;
        *(int *)plVar17 = 1;
        *plVar14 = (long)&PTR_FUN_110b26ef0;
        plVar14[2] = (long)puVar16;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = (int)*plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          iVar13 = (int)*plVar17 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plStack_80 = plVar14;
        plStack_78 = puVar16;
        if (iVar13 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      else {
        if (uVar2 != 6) goto LAB_109b322f4;
        puVar16 = (undefined8 *)0x18;
        __Znwm();
        *puVar16 = &PTR_FUN_110b26f30;
        *(int *)(puVar16 + 1) = iVar4;
        *(int *)((long)puVar16 + 0xc) = iVar13;
        plVar14 = (long *)0x20;
        __Znwm();
        plVar17 = plVar14 + 1;
        *(int *)plVar17 = 1;
        *plVar14 = (long)&PTR_FUN_110b26f70;
        plVar14[2] = (long)puVar16;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = (int)*plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          iVar13 = (int)*plVar17 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plStack_80 = plVar14;
        plStack_78 = puVar16;
        if (iVar13 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
    }
    else if (uVar2 < 3) {
      if (uVar2 == 0) {
        puVar16 = (undefined8 *)0x18;
        __Znwm();
        *puVar16 = &PTR_FUN_110b26fb0;
        *(int *)(puVar16 + 1) = iVar4;
        *(int *)((long)puVar16 + 0xc) = iVar13;
        plVar14 = (long *)0x20;
        __Znwm();
        plVar17 = plVar14 + 1;
        *(int *)plVar17 = 1;
        *plVar14 = (long)&PTR_FUN_110b26ff0;
        plVar14[2] = (long)puVar16;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = (int)*plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          iVar13 = (int)*plVar17 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plStack_80 = plVar14;
        plStack_78 = puVar16;
        if (iVar13 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      else {
        if (uVar2 != 2) {
LAB_109b322f4:
          FUN_109ac2700(&uStack_e0,&UNK_10f59d989);
          FUN_109ac3188(0xffffff2b,&uStack_e0,&UNK_10f59d8f2,&UNK_10f59d909,0x37e);
          goto LAB_109b327d0;
        }
        puVar16 = (undefined8 *)0x18;
        __Znwm();
        *puVar16 = &PTR_FUN_110b27030;
        *(int *)(puVar16 + 1) = iVar4;
        *(int *)((long)puVar16 + 0xc) = iVar13;
        plVar14 = (long *)0x20;
        __Znwm();
        plVar17 = plVar14 + 1;
        *(int *)plVar17 = 1;
        *plVar14 = (long)&PTR_FUN_110b27070;
        plVar14[2] = (long)puVar16;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = (int)*plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          iVar13 = (int)*plVar17 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plStack_80 = plVar14;
        plStack_78 = puVar16;
        if (iVar13 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
    }
    else if (uVar2 == 3) {
      puVar16 = (undefined8 *)0x18;
      __Znwm();
      *puVar16 = &PTR_FUN_110b270b0;
      *(int *)(puVar16 + 1) = iVar4;
      *(int *)((long)puVar16 + 0xc) = iVar13;
      plVar14 = (long *)0x20;
      __Znwm();
      plVar17 = plVar14 + 1;
      *(int *)plVar17 = 1;
      *plVar14 = (long)&PTR_FUN_110b270f0;
      plVar14[2] = (long)puVar16;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = (int)*plVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        iVar13 = (int)*plVar17 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = iVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plStack_80 = plVar14;
      plStack_78 = puVar16;
      if (iVar13 == 0) {
        (**(code **)(*plVar14 + 0x10))();
      }
    }
    else if (uVar2 == 5) {
      puVar16 = (undefined8 *)0x18;
      __Znwm();
      *puVar16 = &PTR_FUN_110b27130;
      *(int *)(puVar16 + 1) = iVar4;
      *(int *)((long)puVar16 + 0xc) = iVar13;
      plVar14 = (long *)0x20;
      __Znwm();
      plVar17 = plVar14 + 1;
      *(int *)plVar17 = 1;
      *plVar14 = (long)&PTR_FUN_110b27170;
      plVar14[2] = (long)puVar16;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = (int)*plVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        iVar13 = (int)*plVar17 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = iVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plStack_80 = plVar14;
      plStack_78 = puVar16;
      if (iVar13 == 0) {
        (**(code **)(*plVar14 + 0x10))();
      }
    }
    else {
      if (uVar2 != 6) goto LAB_109b322f4;
      puVar16 = (undefined8 *)0x18;
      __Znwm();
      *puVar16 = &PTR_FUN_110b271b0;
      *(int *)(puVar16 + 1) = iVar4;
      *(int *)((long)puVar16 + 0xc) = iVar13;
      plVar14 = (long *)0x20;
      __Znwm();
      plVar17 = plVar14 + 1;
      *(int *)plVar17 = 1;
      *plVar14 = (long)&PTR_FUN_110b271f0;
      plVar14[2] = (long)puVar16;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = (int)*plVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        iVar13 = (int)*plVar17 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = iVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plStack_80 = plVar14;
      plStack_78 = puVar16;
      if (iVar13 == 0) {
        (**(code **)(*plVar14 + 0x10))();
      }
    }
    if (plStack_160 != (long *)0x0) {
      plVar14 = plStack_160 + 1;
      do {
        iVar13 = (int)*plVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = iVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 == 0) {
        (**(code **)(*plStack_160 + 0x10))();
      }
    }
    puStack_158 = plStack_78;
    plStack_160 = plStack_80;
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    FUN_109b00084(&plStack_80);
    iVar4 = (int)uStack_148;
    uVar2 = uStack_e4 & 7;
    iVar13 = (int)uStack_148 / 2;
    if (-1 < param_5[1]) {
      iVar13 = param_5[1];
    }
    if (param_2 == 0) {
      if (uVar2 < 3) {
        if (uVar2 == 0) {
          puVar16 = (undefined8 *)0x18;
          __Znwm();
          *puVar16 = &PTR_FUN_110b27230;
          *(int *)(puVar16 + 1) = iVar4;
          *(int *)((long)puVar16 + 0xc) = iVar13;
          plVar14 = (long *)0x20;
          __Znwm();
          plVar17 = plVar14 + 1;
          *(int *)plVar17 = 1;
          *plVar14 = (long)&PTR_FUN_110b27278;
          plVar14[2] = (long)puVar16;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *(int *)plVar17 = (int)*plVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          do {
            iVar13 = (int)*plVar17 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *(int *)plVar17 = iVar13;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plStack_80 = plVar14;
          plStack_78 = puVar16;
          if (iVar13 == 0) {
            (**(code **)(*plVar14 + 0x10))();
          }
        }
        else {
          if (uVar2 != 2) goto LAB_109b32364;
          puVar16 = (undefined8 *)0x18;
          __Znwm();
          *puVar16 = &PTR_FUN_110b272b8;
          *(int *)(puVar16 + 1) = iVar4;
          *(int *)((long)puVar16 + 0xc) = iVar13;
          plVar14 = (long *)0x20;
          __Znwm();
          plVar17 = plVar14 + 1;
          *(int *)plVar17 = 1;
          *plVar14 = (long)&PTR_FUN_110b27300;
          plVar14[2] = (long)puVar16;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *(int *)plVar17 = (int)*plVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          do {
            iVar13 = (int)*plVar17 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *(int *)plVar17 = iVar13;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plStack_80 = plVar14;
          plStack_78 = puVar16;
          if (iVar13 == 0) {
            (**(code **)(*plVar14 + 0x10))();
          }
        }
      }
      else if (uVar2 == 3) {
        puVar16 = (undefined8 *)0x18;
        __Znwm();
        *puVar16 = &PTR_FUN_110b27340;
        *(int *)(puVar16 + 1) = iVar4;
        *(int *)((long)puVar16 + 0xc) = iVar13;
        plVar14 = (long *)0x20;
        __Znwm();
        plVar17 = plVar14 + 1;
        *(int *)plVar17 = 1;
        *plVar14 = (long)&PTR_FUN_110b27388;
        plVar14[2] = (long)puVar16;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = (int)*plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          iVar13 = (int)*plVar17 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plStack_80 = plVar14;
        plStack_78 = puVar16;
        if (iVar13 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      else if (uVar2 == 5) {
        puVar16 = (undefined8 *)0x18;
        __Znwm();
        *puVar16 = &PTR_FUN_110b273c8;
        *(int *)(puVar16 + 1) = iVar4;
        *(int *)((long)puVar16 + 0xc) = iVar13;
        plVar14 = (long *)0x20;
        __Znwm();
        plVar17 = plVar14 + 1;
        *(int *)plVar17 = 1;
        *plVar14 = (long)&PTR_DAT_110b27410;
        plVar14[2] = (long)puVar16;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = (int)*plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          iVar13 = (int)*plVar17 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plStack_80 = plVar14;
        plStack_78 = puVar16;
        if (iVar13 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      else {
        if (uVar2 != 6) goto LAB_109b32364;
        puVar16 = (undefined8 *)0x18;
        __Znwm();
        *puVar16 = &PTR_FUN_110b27450;
        *(int *)(puVar16 + 1) = iVar4;
        *(int *)((long)puVar16 + 0xc) = iVar13;
        plVar14 = (long *)0x20;
        __Znwm();
        plVar17 = plVar14 + 1;
        *(int *)plVar17 = 1;
        *plVar14 = (long)&PTR_DAT_110b27498;
        plVar14[2] = (long)puVar16;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = (int)*plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          iVar13 = (int)*plVar17 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plStack_80 = plVar14;
        plStack_78 = puVar16;
        if (iVar13 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
    }
    else if (uVar2 < 3) {
      if (uVar2 == 0) {
        puVar16 = (undefined8 *)0x18;
        __Znwm();
        *puVar16 = &PTR_FUN_110b274d8;
        *(int *)(puVar16 + 1) = iVar4;
        *(int *)((long)puVar16 + 0xc) = iVar13;
        plVar14 = (long *)0x20;
        __Znwm();
        plVar17 = plVar14 + 1;
        *(int *)plVar17 = 1;
        *plVar14 = (long)&PTR_FUN_110b27520;
        plVar14[2] = (long)puVar16;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = (int)*plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          iVar13 = (int)*plVar17 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plStack_80 = plVar14;
        plStack_78 = puVar16;
        if (iVar13 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      else {
        if (uVar2 != 2) {
LAB_109b32364:
          FUN_109ac2700(&uStack_e0,&UNK_10f59d989);
          FUN_109ac3188(0xffffff2b,&uStack_e0,&UNK_10f59d9a5,&UNK_10f59d909,0x3ad);
          goto LAB_109b327d0;
        }
        puVar16 = (undefined8 *)0x18;
        __Znwm();
        *puVar16 = &PTR_FUN_110b27560;
        *(int *)(puVar16 + 1) = iVar4;
        *(int *)((long)puVar16 + 0xc) = iVar13;
        plVar14 = (long *)0x20;
        __Znwm();
        plVar17 = plVar14 + 1;
        *(int *)plVar17 = 1;
        *plVar14 = (long)&PTR_FUN_110b275a8;
        plVar14[2] = (long)puVar16;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = (int)*plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          iVar13 = (int)*plVar17 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plStack_80 = plVar14;
        plStack_78 = puVar16;
        if (iVar13 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
    }
    else if (uVar2 == 3) {
      puVar16 = (undefined8 *)0x18;
      __Znwm();
      *puVar16 = &PTR_FUN_110b275e8;
      *(int *)(puVar16 + 1) = iVar4;
      *(int *)((long)puVar16 + 0xc) = iVar13;
      plVar14 = (long *)0x20;
      __Znwm();
      plVar17 = plVar14 + 1;
      *(int *)plVar17 = 1;
      *plVar14 = (long)&PTR_FUN_110b27630;
      plVar14[2] = (long)puVar16;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = (int)*plVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        iVar13 = (int)*plVar17 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = iVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plStack_80 = plVar14;
      plStack_78 = puVar16;
      if (iVar13 == 0) {
        (**(code **)(*plVar14 + 0x10))();
      }
    }
    else if (uVar2 == 5) {
      puVar16 = (undefined8 *)0x18;
      __Znwm();
      *puVar16 = &PTR_FUN_110b27670;
      *(int *)(puVar16 + 1) = iVar4;
      *(int *)((long)puVar16 + 0xc) = iVar13;
      plVar14 = (long *)0x20;
      __Znwm();
      plVar17 = plVar14 + 1;
      *(int *)plVar17 = 1;
      *plVar14 = (long)&PTR_DAT_110b276b8;
      plVar14[2] = (long)puVar16;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = (int)*plVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        iVar13 = (int)*plVar17 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = iVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plStack_80 = plVar14;
      plStack_78 = puVar16;
      if (iVar13 == 0) {
        (**(code **)(*plVar14 + 0x10))();
      }
    }
    else {
      if (uVar2 != 6) goto LAB_109b32364;
      puVar16 = (undefined8 *)0x18;
      __Znwm();
      *puVar16 = &PTR_FUN_110b276f8;
      *(int *)(puVar16 + 1) = iVar4;
      *(int *)((long)puVar16 + 0xc) = iVar13;
      plVar14 = (long *)0x20;
      __Znwm();
      plVar17 = plVar14 + 1;
      *(int *)plVar17 = 1;
      *plVar14 = (long)&PTR_DAT_110b27740;
      plVar14[2] = (long)puVar16;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = (int)*plVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        iVar13 = (int)*plVar17 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = iVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plStack_80 = plVar14;
      plStack_78 = puVar16;
      if (iVar13 == 0) {
        (**(code **)(*plVar14 + 0x10))();
      }
    }
    if (plStack_170 != (long *)0x0) {
      plVar14 = plStack_170 + 1;
      do {
        iVar13 = (int)*plVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = iVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 == 0) {
        (**(code **)(*plStack_170 + 0x10))();
      }
    }
    puStack_168 = plStack_78;
    plStack_170 = plStack_80;
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    FUN_109b000d8(&plStack_80);
  }
  else {
    iVar13 = *param_5;
    iVar4 = param_5[1];
    uStack_e0 = uStack_150;
    ppuStack_a0 = &puStack_d8;
    puStack_d8 = uStack_148;
    dStack_c8 = dStack_138;
    dStack_d0 = dStack_140;
    uStack_b8 = uStack_128;
    uStack_c0 = uStack_130;
    lStack_a8 = lStack_118;
    uStack_b0 = uStack_120;
    uStack_90 = 0;
    uStack_88 = 0;
    if (lStack_118 != 0) {
      piVar1 = (int *)(lStack_118 + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    puStack_98 = &uStack_90;
    if (uStack_150._4_4_ < 3) {
      uStack_90 = *puStack_108;
      uStack_88 = puStack_108[1];
    }
    else {
      uStack_e0 = (undefined4 *)((ulong)uStack_150 & 0xffffffff);
      func_0x000109a84868(&uStack_e0,&uStack_150);
    }
    ppuVar11 = ppuStack_a0;
    iVar3 = *(int *)((long)ppuStack_a0 + 4) / 2;
    if (iVar13 != -1) {
      iVar3 = iVar13;
    }
    iVar13 = *(int *)ppuStack_a0 / 2;
    if (iVar4 != -1) {
      iVar13 = iVar4;
    }
    if (((iVar3 < 0) || (*(int *)((long)ppuStack_a0 + 4) <= iVar3)) ||
       ((iVar13 < 0 || (*(int *)ppuStack_a0 <= iVar13)))) {
      puVar15 = (undefined4 *)0x3c;
      func_0x000107c2ae8c();
      *puVar15 = 1;
      plStack_80 = (long *)(puVar15 + 1);
      plStack_78 = (long *)0x34;
      *(undefined8 *)(puVar15 + 3) = 0x655228656469736e;
      *(undefined8 *)(puVar15 + 1) = 0x692e726f68636e61;
      puVar15[0xd] = 0x29297468;
      *(undefined1 *)(puVar15 + 0xe) = 0;
      *(undefined8 *)(puVar15 + 7) = 0x772e657a69736b20;
      *(undefined8 *)(puVar15 + 5) = 0x2c30202c30287463;
      *(undefined8 *)(puVar15 + 0xb) = 0x676965682e657a69;
      *(undefined8 *)(puVar15 + 9) = 0x736b202c68746469;
      FUN_109ac3188(0xffffff29,&plStack_80,&UNK_10f59ce9d,&UNK_10f59cead,0x16b);
      goto LAB_109b327d0;
    }
    if (1 < param_2) {
      puVar15 = (undefined4 *)0x2c;
      func_0x000107c2ae8c();
      *puVar15 = 1;
      plStack_80 = (long *)(puVar15 + 1);
      plStack_78 = (long *)0x27;
      *(undefined1 *)((long)puVar15 + 0x2b) = 0;
      *(undefined8 *)(puVar15 + 3) = 0x444f52455f485052;
      *(undefined8 *)(puVar15 + 1) = 0x4f4d203d3d20706f;
      *(undefined8 *)(puVar15 + 7) = 0x4850524f4d203d3d;
      *(undefined8 *)(puVar15 + 5) = 0x20706f207c7c2045;
      *(undefined8 *)((long)puVar15 + 0x23) = 0x4554414c49445f48;
      FUN_109ac3188(0xffffff29,&plStack_80,&UNK_10f59d9bf,&UNK_10f59d909,0x3b7);
      goto LAB_109b327d0;
    }
    uVar2 = uVar2 & 7;
    if (param_2 == 0) {
      if (uVar2 < 3) {
        if (uVar2 == 0) {
          puVar16 = (undefined8 *)0x50;
          __Znwm();
          *puVar16 = &PTR_DAT_110b27780;
          puVar16[4] = 0;
          puVar16[3] = 0;
          puVar16[6] = 0;
          puVar16[5] = 0;
          puVar16[8] = 0;
          puVar16[7] = 0;
          *(int *)(puVar16 + 2) = iVar3;
          *(int *)((long)puVar16 + 0x14) = iVar13;
          uVar9 = NEON_rev64(*ppuVar11,4);
          puVar16[1] = uVar9;
          if (((ulong)uStack_e0 & 0xfff) != 0) {
            puVar15 = (undefined4 *)0x1c;
            func_0x000107c2ae8c();
            *puVar15 = 1;
            plStack_80 = (long *)(puVar15 + 1);
            plStack_78 = (long *)0x17;
            *(undefined1 *)((long)puVar15 + 0x1b) = 0;
            *(undefined8 *)(puVar15 + 3) = 0x3d20292865707974;
            *(undefined8 *)(puVar15 + 1) = 0x2e6c656e72656b5f;
            *(undefined8 *)((long)puVar15 + 0x13) = 0x55385f5643203d3d;
            FUN_109ac3188(0xffffff29,&plStack_80,&UNK_10f59dbad,&UNK_10f59d909,0x317);
            goto LAB_109b327d0;
          }
          plStack_80 = (long *)0x0;
          plStack_78 = (long *)0x0;
          uStack_70 = 0;
          FUN_109afc698(&uStack_e0,puVar16 + 3,&plStack_80);
          FUN_109ac9e9c(puVar16 + 6,(long)(puVar16[4] - puVar16[3]) >> 3);
          if (plStack_80 != (long *)0x0) {
            plStack_78 = plStack_80;
            __ZdlPv();
          }
          plVar14 = (long *)0x20;
          __Znwm();
          plVar17 = plVar14 + 1;
          *(int *)plVar17 = 1;
          *plVar14 = (long)&PTR_FUN_110b277c8;
          plVar14[2] = (long)puVar16;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *(int *)plVar17 = (int)*plVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          do {
            iVar13 = (int)*plVar17 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *(int *)plVar17 = iVar13;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plStack_190 = plVar14;
          puStack_188 = puVar16;
          if (iVar13 == 0) {
            (**(code **)(*plVar14 + 0x10))();
          }
        }
        else {
          if (uVar2 != 2) goto LAB_109b3232c;
          puVar16 = (undefined8 *)0x50;
          __Znwm();
          *puVar16 = &PTR_DAT_110b27808;
          puVar16[4] = 0;
          puVar16[3] = 0;
          puVar16[6] = 0;
          puVar16[5] = 0;
          puVar16[8] = 0;
          puVar16[7] = 0;
          *(int *)(puVar16 + 2) = iVar3;
          *(int *)((long)puVar16 + 0x14) = iVar13;
          uVar9 = NEON_rev64(*ppuVar11,4);
          puVar16[1] = uVar9;
          if (((ulong)uStack_e0 & 0xfff) != 0) {
            puVar15 = (undefined4 *)0x1c;
            func_0x000107c2ae8c();
            *puVar15 = 1;
            plStack_80 = (long *)(puVar15 + 1);
            plStack_78 = (long *)0x17;
            *(undefined1 *)((long)puVar15 + 0x1b) = 0;
            *(undefined8 *)(puVar15 + 3) = 0x3d20292865707974;
            *(undefined8 *)(puVar15 + 1) = 0x2e6c656e72656b5f;
            *(undefined8 *)((long)puVar15 + 0x13) = 0x55385f5643203d3d;
            FUN_109ac3188(0xffffff29,&plStack_80,&UNK_10f59dbad,&UNK_10f59d909,0x317);
            goto LAB_109b327d0;
          }
          plStack_80 = (long *)0x0;
          plStack_78 = (long *)0x0;
          uStack_70 = 0;
          FUN_109afc698(&uStack_e0,puVar16 + 3,&plStack_80);
          FUN_109ac9e9c(puVar16 + 6,(long)(puVar16[4] - puVar16[3]) >> 3);
          if (plStack_80 != (long *)0x0) {
            plStack_78 = plStack_80;
            __ZdlPv();
          }
          plVar14 = (long *)0x20;
          __Znwm();
          plVar17 = plVar14 + 1;
          *(int *)plVar17 = 1;
          *plVar14 = (long)&PTR_FUN_110b27850;
          plVar14[2] = (long)puVar16;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *(int *)plVar17 = (int)*plVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          do {
            iVar13 = (int)*plVar17 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *(int *)plVar17 = iVar13;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plStack_190 = plVar14;
          puStack_188 = puVar16;
          if (iVar13 == 0) {
            (**(code **)(*plVar14 + 0x10))();
          }
        }
      }
      else if (uVar2 == 3) {
        puVar16 = (undefined8 *)0x50;
        __Znwm();
        *puVar16 = &PTR_DAT_110b27890;
        puVar16[4] = 0;
        puVar16[3] = 0;
        puVar16[6] = 0;
        puVar16[5] = 0;
        puVar16[8] = 0;
        puVar16[7] = 0;
        *(int *)(puVar16 + 2) = iVar3;
        *(int *)((long)puVar16 + 0x14) = iVar13;
        uVar9 = NEON_rev64(*ppuVar11,4);
        puVar16[1] = uVar9;
        if (((ulong)uStack_e0 & 0xfff) != 0) {
          puVar15 = (undefined4 *)0x1c;
          func_0x000107c2ae8c();
          *puVar15 = 1;
          plStack_80 = (long *)(puVar15 + 1);
          plStack_78 = (long *)0x17;
          *(undefined1 *)((long)puVar15 + 0x1b) = 0;
          *(undefined8 *)(puVar15 + 3) = 0x3d20292865707974;
          *(undefined8 *)(puVar15 + 1) = 0x2e6c656e72656b5f;
          *(undefined8 *)((long)puVar15 + 0x13) = 0x55385f5643203d3d;
          FUN_109ac3188(0xffffff29,&plStack_80,&UNK_10f59dbad,&UNK_10f59d909,0x317);
          goto LAB_109b327d0;
        }
        plStack_80 = (long *)0x0;
        plStack_78 = (long *)0x0;
        uStack_70 = 0;
        FUN_109afc698(&uStack_e0,puVar16 + 3,&plStack_80);
        FUN_109ac9e9c(puVar16 + 6,(long)(puVar16[4] - puVar16[3]) >> 3);
        if (plStack_80 != (long *)0x0) {
          plStack_78 = plStack_80;
          __ZdlPv();
        }
        plVar14 = (long *)0x20;
        __Znwm();
        plVar17 = plVar14 + 1;
        *(int *)plVar17 = 1;
        *plVar14 = (long)&PTR_FUN_110b278d8;
        plVar14[2] = (long)puVar16;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = (int)*plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          iVar13 = (int)*plVar17 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plStack_190 = plVar14;
        puStack_188 = puVar16;
        if (iVar13 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      else if (uVar2 == 5) {
        puVar16 = (undefined8 *)0x50;
        __Znwm();
        *puVar16 = &PTR_DAT_110b27918;
        puVar16[4] = 0;
        puVar16[3] = 0;
        puVar16[6] = 0;
        puVar16[5] = 0;
        puVar16[8] = 0;
        puVar16[7] = 0;
        *(int *)(puVar16 + 2) = iVar3;
        *(int *)((long)puVar16 + 0x14) = iVar13;
        uVar9 = NEON_rev64(*ppuVar11,4);
        puVar16[1] = uVar9;
        if (((ulong)uStack_e0 & 0xfff) != 0) {
          puVar15 = (undefined4 *)0x1c;
          func_0x000107c2ae8c();
          *puVar15 = 1;
          plStack_80 = (long *)(puVar15 + 1);
          plStack_78 = (long *)0x17;
          *(undefined1 *)((long)puVar15 + 0x1b) = 0;
          *(undefined8 *)(puVar15 + 3) = 0x3d20292865707974;
          *(undefined8 *)(puVar15 + 1) = 0x2e6c656e72656b5f;
          *(undefined8 *)((long)puVar15 + 0x13) = 0x55385f5643203d3d;
          FUN_109ac3188(0xffffff29,&plStack_80,&UNK_10f59dbad,&UNK_10f59d909,0x317);
          goto LAB_109b327d0;
        }
        plStack_80 = (long *)0x0;
        plStack_78 = (long *)0x0;
        uStack_70 = 0;
        FUN_109afc698(&uStack_e0,puVar16 + 3,&plStack_80);
        FUN_109ac9e9c(puVar16 + 6,(long)(puVar16[4] - puVar16[3]) >> 3);
        if (plStack_80 != (long *)0x0) {
          plStack_78 = plStack_80;
          __ZdlPv();
        }
        plVar14 = (long *)0x20;
        __Znwm();
        plVar17 = plVar14 + 1;
        *(int *)plVar17 = 1;
        *plVar14 = (long)&PTR_FUN_110b27960;
        plVar14[2] = (long)puVar16;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = (int)*plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          iVar13 = (int)*plVar17 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plStack_190 = plVar14;
        puStack_188 = puVar16;
        if (iVar13 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      else {
        if (uVar2 != 6) goto LAB_109b3232c;
        puVar16 = (undefined8 *)0x50;
        __Znwm();
        *puVar16 = &PTR_DAT_110b279a0;
        puVar16[4] = 0;
        puVar16[3] = 0;
        puVar16[6] = 0;
        puVar16[5] = 0;
        puVar16[8] = 0;
        puVar16[7] = 0;
        *(int *)(puVar16 + 2) = iVar3;
        *(int *)((long)puVar16 + 0x14) = iVar13;
        uVar9 = NEON_rev64(*ppuVar11,4);
        puVar16[1] = uVar9;
        if (((ulong)uStack_e0 & 0xfff) != 0) {
          puVar15 = (undefined4 *)0x1c;
          func_0x000107c2ae8c();
          *puVar15 = 1;
          plStack_80 = (long *)(puVar15 + 1);
          plStack_78 = (long *)0x17;
          *(undefined1 *)((long)puVar15 + 0x1b) = 0;
          *(undefined8 *)(puVar15 + 3) = 0x3d20292865707974;
          *(undefined8 *)(puVar15 + 1) = 0x2e6c656e72656b5f;
          *(undefined8 *)((long)puVar15 + 0x13) = 0x55385f5643203d3d;
          FUN_109ac3188(0xffffff29,&plStack_80,&UNK_10f59dbad,&UNK_10f59d909,0x317);
          goto LAB_109b327d0;
        }
        plStack_80 = (long *)0x0;
        plStack_78 = (long *)0x0;
        uStack_70 = 0;
        FUN_109afc698(&uStack_e0,puVar16 + 3,&plStack_80);
        FUN_109ac9e9c(puVar16 + 6,(long)(puVar16[4] - puVar16[3]) >> 3);
        if (plStack_80 != (long *)0x0) {
          plStack_78 = plStack_80;
          __ZdlPv();
        }
        plVar14 = (long *)0x20;
        __Znwm();
        plVar17 = plVar14 + 1;
        *(int *)plVar17 = 1;
        *plVar14 = (long)&PTR_DAT_110b279e8;
        plVar14[2] = (long)puVar16;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = (int)*plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          iVar13 = (int)*plVar17 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plStack_190 = plVar14;
        puStack_188 = puVar16;
        if (iVar13 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
    }
    else if (uVar2 < 3) {
      if (uVar2 == 0) {
        puVar16 = (undefined8 *)0x50;
        __Znwm();
        *puVar16 = &PTR_DAT_110b27a28;
        puVar16[4] = 0;
        puVar16[3] = 0;
        puVar16[6] = 0;
        puVar16[5] = 0;
        puVar16[8] = 0;
        puVar16[7] = 0;
        *(int *)(puVar16 + 2) = iVar3;
        *(int *)((long)puVar16 + 0x14) = iVar13;
        uVar9 = NEON_rev64(*ppuVar11,4);
        puVar16[1] = uVar9;
        if (((ulong)uStack_e0 & 0xfff) != 0) {
          puVar15 = (undefined4 *)0x1c;
          func_0x000107c2ae8c();
          *puVar15 = 1;
          plStack_80 = (long *)(puVar15 + 1);
          plStack_78 = (long *)0x17;
          *(undefined1 *)((long)puVar15 + 0x1b) = 0;
          *(undefined8 *)(puVar15 + 3) = 0x3d20292865707974;
          *(undefined8 *)(puVar15 + 1) = 0x2e6c656e72656b5f;
          *(undefined8 *)((long)puVar15 + 0x13) = 0x55385f5643203d3d;
          FUN_109ac3188(0xffffff29,&plStack_80,&UNK_10f59dbad,&UNK_10f59d909,0x317);
          goto LAB_109b327d0;
        }
        plStack_80 = (long *)0x0;
        plStack_78 = (long *)0x0;
        uStack_70 = 0;
        FUN_109afc698(&uStack_e0,puVar16 + 3,&plStack_80);
        FUN_109ac9e9c(puVar16 + 6,(long)(puVar16[4] - puVar16[3]) >> 3);
        if (plStack_80 != (long *)0x0) {
          plStack_78 = plStack_80;
          __ZdlPv();
        }
        plVar14 = (long *)0x20;
        __Znwm();
        plVar17 = plVar14 + 1;
        *(int *)plVar17 = 1;
        *plVar14 = (long)&PTR_FUN_110b27a70;
        plVar14[2] = (long)puVar16;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = (int)*plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          iVar13 = (int)*plVar17 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plStack_190 = plVar14;
        puStack_188 = puVar16;
        if (iVar13 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      else {
        if (uVar2 != 2) {
LAB_109b3232c:
          FUN_109ac2700(&plStack_80,&UNK_10f59d989);
          FUN_109ac3188(0xffffff2b,&plStack_80,&UNK_10f59d9bf,&UNK_10f59d909,0x3d3);
          goto LAB_109b327d0;
        }
        puVar16 = (undefined8 *)0x50;
        __Znwm();
        *puVar16 = &PTR_DAT_110b27ab0;
        puVar16[4] = 0;
        puVar16[3] = 0;
        puVar16[6] = 0;
        puVar16[5] = 0;
        puVar16[8] = 0;
        puVar16[7] = 0;
        *(int *)(puVar16 + 2) = iVar3;
        *(int *)((long)puVar16 + 0x14) = iVar13;
        uVar9 = NEON_rev64(*ppuVar11,4);
        puVar16[1] = uVar9;
        if (((ulong)uStack_e0 & 0xfff) != 0) {
          puVar15 = (undefined4 *)0x1c;
          func_0x000107c2ae8c();
          *puVar15 = 1;
          plStack_80 = (long *)(puVar15 + 1);
          plStack_78 = (long *)0x17;
          *(undefined1 *)((long)puVar15 + 0x1b) = 0;
          *(undefined8 *)(puVar15 + 3) = 0x3d20292865707974;
          *(undefined8 *)(puVar15 + 1) = 0x2e6c656e72656b5f;
          *(undefined8 *)((long)puVar15 + 0x13) = 0x55385f5643203d3d;
          FUN_109ac3188(0xffffff29,&plStack_80,&UNK_10f59dbad,&UNK_10f59d909,0x317);
          goto LAB_109b327d0;
        }
        plStack_80 = (long *)0x0;
        plStack_78 = (long *)0x0;
        uStack_70 = 0;
        FUN_109afc698(&uStack_e0,puVar16 + 3,&plStack_80);
        FUN_109ac9e9c(puVar16 + 6,(long)(puVar16[4] - puVar16[3]) >> 3);
        if (plStack_80 != (long *)0x0) {
          plStack_78 = plStack_80;
          __ZdlPv();
        }
        plVar14 = (long *)0x20;
        __Znwm();
        plVar17 = plVar14 + 1;
        *(int *)plVar17 = 1;
        *plVar14 = (long)&PTR_FUN_110b27af8;
        plVar14[2] = (long)puVar16;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = (int)*plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          iVar13 = (int)*plVar17 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plStack_190 = plVar14;
        puStack_188 = puVar16;
        if (iVar13 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
    }
    else if (uVar2 == 3) {
      puVar16 = (undefined8 *)0x50;
      __Znwm();
      *puVar16 = &PTR_DAT_110b27b38;
      puVar16[4] = 0;
      puVar16[3] = 0;
      puVar16[6] = 0;
      puVar16[5] = 0;
      puVar16[8] = 0;
      puVar16[7] = 0;
      *(int *)(puVar16 + 2) = iVar3;
      *(int *)((long)puVar16 + 0x14) = iVar13;
      uVar9 = NEON_rev64(*ppuVar11,4);
      puVar16[1] = uVar9;
      if (((ulong)uStack_e0 & 0xfff) != 0) {
        puVar15 = (undefined4 *)0x1c;
        func_0x000107c2ae8c();
        *puVar15 = 1;
        plStack_80 = (long *)(puVar15 + 1);
        plStack_78 = (long *)0x17;
        *(undefined1 *)((long)puVar15 + 0x1b) = 0;
        *(undefined8 *)(puVar15 + 3) = 0x3d20292865707974;
        *(undefined8 *)(puVar15 + 1) = 0x2e6c656e72656b5f;
        *(undefined8 *)((long)puVar15 + 0x13) = 0x55385f5643203d3d;
        FUN_109ac3188(0xffffff29,&plStack_80,&UNK_10f59dbad,&UNK_10f59d909,0x317);
        goto LAB_109b327d0;
      }
      plStack_80 = (long *)0x0;
      plStack_78 = (long *)0x0;
      uStack_70 = 0;
      FUN_109afc698(&uStack_e0,puVar16 + 3,&plStack_80);
      FUN_109ac9e9c(puVar16 + 6,(long)(puVar16[4] - puVar16[3]) >> 3);
      if (plStack_80 != (long *)0x0) {
        plStack_78 = plStack_80;
        __ZdlPv();
      }
      plVar14 = (long *)0x20;
      __Znwm();
      plVar17 = plVar14 + 1;
      *(int *)plVar17 = 1;
      *plVar14 = (long)&PTR_FUN_110b27b80;
      plVar14[2] = (long)puVar16;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = (int)*plVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        iVar13 = (int)*plVar17 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = iVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plStack_190 = plVar14;
      puStack_188 = puVar16;
      if (iVar13 == 0) {
        (**(code **)(*plVar14 + 0x10))();
      }
    }
    else if (uVar2 == 5) {
      puVar16 = (undefined8 *)0x50;
      __Znwm();
      *puVar16 = &PTR_DAT_110b27bc0;
      puVar16[4] = 0;
      puVar16[3] = 0;
      puVar16[6] = 0;
      puVar16[5] = 0;
      puVar16[8] = 0;
      puVar16[7] = 0;
      *(int *)(puVar16 + 2) = iVar3;
      *(int *)((long)puVar16 + 0x14) = iVar13;
      uVar9 = NEON_rev64(*ppuVar11,4);
      puVar16[1] = uVar9;
      if (((ulong)uStack_e0 & 0xfff) != 0) {
        puVar15 = (undefined4 *)0x1c;
        func_0x000107c2ae8c();
        *puVar15 = 1;
        plStack_80 = (long *)(puVar15 + 1);
        plStack_78 = (long *)0x17;
        *(undefined1 *)((long)puVar15 + 0x1b) = 0;
        *(undefined8 *)(puVar15 + 3) = 0x3d20292865707974;
        *(undefined8 *)(puVar15 + 1) = 0x2e6c656e72656b5f;
        *(undefined8 *)((long)puVar15 + 0x13) = 0x55385f5643203d3d;
        FUN_109ac3188(0xffffff29,&plStack_80,&UNK_10f59dbad,&UNK_10f59d909,0x317);
        goto LAB_109b327d0;
      }
      plStack_80 = (long *)0x0;
      plStack_78 = (long *)0x0;
      uStack_70 = 0;
      FUN_109afc698(&uStack_e0,puVar16 + 3,&plStack_80);
      FUN_109ac9e9c(puVar16 + 6,(long)(puVar16[4] - puVar16[3]) >> 3);
      if (plStack_80 != (long *)0x0) {
        plStack_78 = plStack_80;
        __ZdlPv();
      }
      plVar14 = (long *)0x20;
      __Znwm();
      plVar17 = plVar14 + 1;
      *(int *)plVar17 = 1;
      *plVar14 = (long)&PTR_FUN_110b27c08;
      plVar14[2] = (long)puVar16;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = (int)*plVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        iVar13 = (int)*plVar17 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = iVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plStack_190 = plVar14;
      puStack_188 = puVar16;
      if (iVar13 == 0) {
        (**(code **)(*plVar14 + 0x10))();
      }
    }
    else {
      if (uVar2 != 6) goto LAB_109b3232c;
      puVar16 = (undefined8 *)0x50;
      __Znwm();
      *puVar16 = &PTR_DAT_110b27c48;
      puVar16[4] = 0;
      puVar16[3] = 0;
      puVar16[6] = 0;
      puVar16[5] = 0;
      puVar16[8] = 0;
      puVar16[7] = 0;
      *(int *)(puVar16 + 2) = iVar3;
      *(int *)((long)puVar16 + 0x14) = iVar13;
      uVar9 = NEON_rev64(*ppuVar11,4);
      puVar16[1] = uVar9;
      if (((ulong)uStack_e0 & 0xfff) != 0) {
        puVar15 = (undefined4 *)0x1c;
        func_0x000107c2ae8c();
        *puVar15 = 1;
        plStack_80 = (long *)(puVar15 + 1);
        plStack_78 = (long *)0x17;
        *(undefined1 *)((long)puVar15 + 0x1b) = 0;
        *(undefined8 *)(puVar15 + 3) = 0x3d20292865707974;
        *(undefined8 *)(puVar15 + 1) = 0x2e6c656e72656b5f;
        *(undefined8 *)((long)puVar15 + 0x13) = 0x55385f5643203d3d;
        FUN_109ac3188(0xffffff29,&plStack_80,&UNK_10f59dbad,&UNK_10f59d909,0x317);
        goto LAB_109b327d0;
      }
      plStack_80 = (long *)0x0;
      plStack_78 = (long *)0x0;
      uStack_70 = 0;
      FUN_109afc698(&uStack_e0,puVar16 + 3,&plStack_80);
      FUN_109ac9e9c(puVar16 + 6,(long)(puVar16[4] - puVar16[3]) >> 3);
      if (plStack_80 != (long *)0x0) {
        plStack_78 = plStack_80;
        __ZdlPv();
      }
      plVar14 = (long *)0x20;
      __Znwm();
      plVar17 = plVar14 + 1;
      *(int *)plVar17 = 1;
      *plVar14 = (long)&PTR_DAT_110b27c90;
      plVar14[2] = (long)puVar16;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = (int)*plVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        iVar13 = (int)*plVar17 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = iVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plStack_190 = plVar14;
      puStack_188 = puVar16;
      if (iVar13 == 0) {
        (**(code **)(*plVar14 + 0x10))();
      }
    }
    if (lStack_a8 != 0) {
      piVar1 = (int *)(lStack_a8 + 0x14);
      do {
        iVar13 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 + -1 == 0) {
        func_0x000109a848d4(&uStack_e0);
      }
    }
    lStack_a8 = 0;
    dStack_c8 = 0.0;
    dStack_d0 = 0.0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    if (0 < uStack_e0._4_4_) {
      lVar18 = 0;
      do {
        *(int *)((long)ppuStack_a0 + lVar18 * 4) = 0;
        lVar18 = lVar18 + 1;
      } while (lVar18 < uStack_e0._4_4_);
    }
    if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
      _free(puStack_98[-1]);
    }
    if (plStack_180 != (long *)0x0) {
      plVar14 = plStack_180 + 1;
      do {
        iVar13 = (int)*plVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = iVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 == 0) {
        (**(code **)(*plStack_180 + 0x10))();
      }
    }
    puStack_178 = puStack_188;
    plStack_180 = plStack_190;
    plStack_190 = (long *)0x0;
    puStack_188 = (undefined8 *)0x0;
    FUN_109b00030(&plStack_190);
  }
  puStack_d8 = (undefined8 *)param_8[1];
  uStack_e0 = (undefined4 *)*param_8;
  dStack_c8 = (double)param_8[3];
  dStack_d0 = (double)param_8[2];
  if ((iStack_e8 != 0) && (iStack_ec != 0)) goto LAB_109b32068;
  lVar32 = -(ulong)(dStack_d0 == 1.79769313486232e+308);
  lVar34 = -(ulong)(dStack_c8 == 1.79769313486232e+308);
  lVar18 = -(ulong)((double)uStack_e0 == 1.79769313486232e+308);
  lVar10 = -(ulong)((double)puStack_d8 == 1.79769313486232e+308);
  auVar8[1] = ~(byte)((ulong)lVar18 >> 8);
  auVar8[0] = ~(byte)lVar18;
  auVar8[2] = ~(byte)((ulong)lVar18 >> 0x10);
  auVar8[3] = ~(byte)((ulong)lVar18 >> 0x18);
  auVar8[4] = ~(byte)lVar10;
  auVar8[5] = ~(byte)((ulong)lVar10 >> 8);
  auVar8[6] = ~(byte)((ulong)lVar10 >> 0x10);
  auVar8[7] = ~(byte)((ulong)lVar10 >> 0x18);
  auVar8[8] = ~(byte)lVar32;
  auVar8[9] = ~(byte)((ulong)lVar32 >> 8);
  auVar8[10] = ~(byte)((ulong)lVar32 >> 0x10);
  auVar8[0xb] = ~(byte)((ulong)lVar32 >> 0x18);
  auVar8[0xc] = ~(byte)lVar34;
  auVar8[0xd] = ~(byte)((ulong)lVar34 >> 8);
  auVar8[0xe] = ~(byte)((ulong)lVar34 >> 0x10);
  auVar8[0xf] = ~(byte)((ulong)lVar34 >> 0x18);
  uVar2 = NEON_umaxv(auVar8,4);
  if ((uVar2 & 1) != 0) goto LAB_109b32068;
  uVar2 = uStack_e4 & 7;
  if ((6 < uVar2) || ((1 << (ulong)uVar2 & 0x6dU) == 0)) {
    puVar15 = (undefined4 *)0x60;
    func_0x000107c2ae8c();
    *puVar15 = 1;
    plStack_80 = (long *)(puVar15 + 1);
    plStack_78 = (long *)0x5a;
    *(undefined8 *)(puVar15 + 0xb) = 0x5643203d3d206874;
    *(undefined8 *)(puVar15 + 9) = 0x706564207c7c2055;
    *(undefined8 *)(puVar15 + 0xf) = 0x3d3d206874706564;
    *(undefined8 *)(puVar15 + 0xd) = 0x207c7c205336315f;
    *(undefined8 *)(puVar15 + 0x13) = 0x6874706564207c7c;
    *(undefined8 *)(puVar15 + 0x11) = 0x204632335f564320;
    *(undefined8 *)((long)puVar15 + 0x56) = 0x4634365f5643203d;
    *(undefined8 *)((long)puVar15 + 0x4e) = 0x3d20687470656420;
    *(undefined8 *)(puVar15 + 3) = 0x7c2055385f564320;
    *(undefined8 *)(puVar15 + 1) = 0x3d3d206874706564;
    *(undefined1 *)((long)puVar15 + 0x5e) = 0;
    *(undefined8 *)(puVar15 + 7) = 0x36315f5643203d3d;
    *(undefined8 *)(puVar15 + 5) = 0x206874706564207c;
    FUN_109ac3188(0xffffff29,&plStack_80,&UNK_10f59da2e,&UNK_10f59d909,0x3f2);
LAB_109b327d0:
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x109b327d4);
    (*pcVar12)();
  }
  if (param_2 == 0) {
    lVar18 = 8;
    if (uVar2 != 0) {
      lVar18 = 0;
    }
    if ((uStack_e4 & 5) != 0) {
      uVar19 = 0;
      uVar21 = 0;
      uVar23 = 0;
      uVar25 = 0xe0;
      uVar31 = 0x47;
      if (uVar2 != 5) {
        uVar19 = 0xff;
        uVar21 = 0xff;
        uVar23 = 0xff;
        uVar25 = 0xff;
        uVar31 = 0x7f;
      }
      uVar33 = 0x40dfffc0;
      goto LAB_109b3205c;
    }
    uVar9 = *(undefined8 *)(&UNK_10e0334d0 + lVar18);
    uVar20 = (undefined1)uVar9;
    uVar22 = (undefined1)((ulong)uVar9 >> 8);
    uVar24 = (undefined1)((ulong)uVar9 >> 0x10);
    uVar26 = (undefined1)((ulong)uVar9 >> 0x18);
    uVar27 = (undefined1)((ulong)uVar9 >> 0x20);
    uVar28 = (undefined1)((ulong)uVar9 >> 0x28);
    uVar29 = (undefined1)((ulong)uVar9 >> 0x30);
    uVar30 = (undefined1)((ulong)uVar9 >> 0x38);
  }
  else {
    uVar20 = 0;
    uVar22 = 0;
    uVar24 = 0;
    uVar26 = 0;
    uVar27 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar30 = 0;
    if ((uStack_e4 & 5) != 0) {
      uVar19 = 0;
      uVar21 = 0;
      uVar23 = 0;
      uVar25 = 0xe0;
      uVar31 = 199;
      if (uVar2 != 5) {
        uVar19 = 0xff;
        uVar21 = 0xff;
        uVar23 = 0xff;
        uVar25 = 0xff;
        uVar31 = 0xff;
      }
      uVar33 = 0xc0e00000;
LAB_109b3205c:
      uVar20 = 0;
      uVar22 = 0;
      uVar24 = 0;
      uVar26 = 0;
      uVar27 = (char)uVar33;
      uVar28 = (char)((uint)uVar33 >> 8);
      uVar29 = (char)((uint)uVar33 >> 0x10);
      uVar30 = (char)((uint)uVar33 >> 0x18);
      if (uVar2 != 3) {
        uVar20 = uVar19;
        uVar22 = uVar21;
        uVar24 = uVar23;
        uVar26 = uVar25;
        uVar27 = 0xff;
        uVar28 = 0xff;
        uVar29 = 0xef;
        uVar30 = uVar31;
      }
    }
  }
  uVar7 = CONCAT11(uVar22,uVar20);
  puStack_d8 = (undefined8 *)
               CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,CONCAT13(uVar26,
                                                  CONCAT12(uVar24,uVar7))))));
  uStack_e0 = (undefined4 *)
              CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,CONCAT13(uVar26,
                                                  CONCAT12(uVar24,uVar7))))));
  dStack_c8 = (double)CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,CONCAT13(
                                                  uVar26,CONCAT12(uVar24,uVar7))))));
  dStack_d0 = (double)CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,CONCAT13(
                                                  uVar26,CONCAT12(uVar24,uVar7))))));
LAB_109b32068:
  FUN_109afd7f8(param_1,&plStack_180,&plStack_160,&plStack_170,&uStack_e4,&uStack_e4,&uStack_e4,
                &iStack_e8,&iStack_ec,&uStack_e0);
  FUN_109b00030(&plStack_180);
  FUN_109b000d8(&plStack_170);
  FUN_109b00084(&plStack_160);
  if (lStack_118 != 0) {
    piVar1 = (int *)(lStack_118 + 0x14);
    do {
      iVar13 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      func_0x000109a848d4(&uStack_150);
    }
  }
  lStack_118 = 0;
  dStack_138 = 0.0;
  dStack_140 = 0.0;
  uStack_128 = 0;
  uStack_130 = 0;
  if (0 < uStack_150._4_4_) {
    lVar18 = 0;
    do {
      piStack_110[lVar18] = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < uStack_150._4_4_);
  }
  if (puStack_108 != &uStack_100 && puStack_108 != (undefined8 *)0x0) {
    _free(puStack_108[-1]);
  }
  return;
}



/* Entry: 109b32bf8; end: 109b32fd3;  */

/* WARNING: Removing unreachable block (ram,0x000109b33838) */
/* WARNING: Removing unreachable block (ram,0x000109b3383c) */
/* WARNING: Removing unreachable block (ram,0x000109b33844) */
/* WARNING: Removing unreachable block (ram,0x000109b3384c) */
/* WARNING: Removing unreachable block (ram,0x000109b33850) */
/* WARNING: Removing unreachable block (ram,0x000109b33874) */
/* WARNING: Removing unreachable block (ram,0x000109b3387c) */
/* WARNING: Removing unreachable block (ram,0x000109b33890) */
/* WARNING: Removing unreachable block (ram,0x000109b338a0) */

void FUN_109b32bf8(undefined4 *param_1,uint param_2,uint *param_3,uint *param_4,undefined8 param_5,
                  int *param_6,undefined8 param_7,undefined8 param_8,undefined8 *param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined8 **ppuVar8;
  code *pcVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  ulong *puVar13;
  uint *puVar14;
  uint *puVar15;
  undefined4 uVar16;
  int iVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  int *piVar21;
  uint *unaff_x19;
  int *piVar22;
  undefined4 *unaff_x22;
  uint *unaff_x23;
  uint *puVar23;
  int iVar24;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  int iVar28;
  ulong unaff_x26;
  long unaff_x27;
  long unaff_x28;
  double dVar29;
  undefined8 uVar30;
  double unaff_d9;
  undefined8 uStack_4d0;
  undefined8 *puStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  undefined8 **ppuStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  undefined8 *puStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  int *piStack_3d8;
  ulong uStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  int *piStack_370;
  undefined8 **ppuStack_368;
  undefined8 *puStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined4 uStack_348;
  int iStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  ulong uStack_310;
  undefined4 *puStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined4 uStack_2e8;
  int iStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2d8;
  int iStack_2d4;
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
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  ulong uStack_2a0;
  undefined4 *puStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  int *piStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  int *piStack_140;
  undefined8 **ppuStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  double dStack_110;
  double dStack_108;
  long lStack_100;
  long lStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  uint *puStack_d8;
  undefined4 *puStack_d0;
  undefined4 *puStack_c8;
  undefined4 *puStack_c0;
  uint *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  int iStack_9c;
  int iStack_98;
  uint uStack_94;
  uint *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (2 < param_2) {
    puVar11 = (undefined4 *)0x4c;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar11 + 7) = 0x203d3d2065706168;
    *(undefined8 *)(puVar11 + 5) = 0x73207c7c20544345;
    *(undefined8 *)(puVar11 + 0xb) = 0x73207c7c2053534f;
    *(undefined8 *)(puVar11 + 9) = 0x52435f4850524f4d;
    *(undefined8 *)(puVar11 + 0xf) = 0x4c455f4850524f4d;
    *(undefined8 *)(puVar11 + 0xd) = 0x203d3d2065706168;
    *puVar11 = 1;
    uStack_88 = puVar11 + 1;
    uStack_80 = 0x45;
    *(undefined1 *)((long)puVar11 + 0x49) = 0;
    *(undefined8 *)((long)puVar11 + 0x41) = 0x455350494c4c455f;
    *(undefined8 *)(puVar11 + 3) = 0x525f4850524f4d20;
    *(undefined8 *)(puVar11 + 1) = 0x3d3d206570616873;
    FUN_109ac3188(0xffffff29,&uStack_88,&UNK_10f59da8b,&UNK_10f59d909,0x40a);
LAB_109b32f7c:
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x109b32f80);
    (*pcVar9)();
  }
  uVar3 = *param_3;
  uStack_94 = (int)uVar3 / 2;
  uVar2 = uStack_94;
  if (*param_4 != 0xffffffff) {
    uVar2 = *param_4;
  }
  uVar5 = (int)param_3[1] / 2;
  if (param_4[1] != 0xffffffff) {
    uVar5 = param_4[1];
  }
  if (((((int)uVar2 < 0) || ((int)uVar3 <= (int)uVar2)) || ((int)uVar5 < 0)) ||
     ((int)param_3[1] <= (int)uVar5)) {
    puVar11 = (undefined4 *)0x3c;
    func_0x000107c2ae8c();
    *puVar11 = 1;
    uStack_88 = puVar11 + 1;
    uStack_80 = 0x34;
    *(undefined8 *)(puVar11 + 3) = 0x655228656469736e;
    *(undefined8 *)(puVar11 + 1) = 0x692e726f68636e61;
    puVar11[0xd] = 0x29297468;
    *(undefined1 *)(puVar11 + 0xe) = 0;
    *(undefined8 *)(puVar11 + 7) = 0x772e657a69736b20;
    *(undefined8 *)(puVar11 + 5) = 0x2c30202c30287463;
    *(undefined8 *)(puVar11 + 0xb) = 0x676965682e657a69;
    *(undefined8 *)(puVar11 + 9) = 0x736b202c68746469;
    FUN_109ac3188(0xffffff29,&uStack_88,&UNK_10f59ce9d,&UNK_10f59cead,0x16b);
    goto LAB_109b32f7c;
  }
  *param_4 = uVar2;
  param_4[1] = uVar5;
  uVar5 = param_3[1];
  uVar2 = 0;
  if (uVar5 != 1 || uVar3 != 1) {
    uVar2 = param_2;
  }
  uVar26 = (ulong)uVar2;
  dVar29 = 0.0;
  if (uVar2 == 2) {
    uVar25 = (ulong)(uint)((int)uVar5 / 2);
    if (2 < uVar5 + 1) {
      dVar29 = (double)((int)uVar5 / 2);
      dVar29 = 1.0 / (dVar29 * dVar29);
    }
  }
  else {
    uVar25 = 0;
    uStack_94 = 0;
  }
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
  uStack_88 = (undefined4 *)CONCAT44(uVar3,uVar5);
  puVar14 = (uint *)&uStack_88;
  puVar12 = (uint *)0x2;
  puVar15 = (uint *)0x0;
  puVar11 = param_1;
  puStack_90 = param_4;
  FUN_109a83fd0();
  iVar17 = (int)param_7;
  uVar16 = (undefined4)param_8;
  if (0 < (int)param_3[1]) {
    unaff_x26 = 0;
    unaff_d9 = (double)(int)uStack_94;
    iStack_98 = uStack_94 + 1;
    iVar24 = (int)uVar25;
    iStack_9c = iVar24 << 1;
    do {
      unaff_x27 = *(long *)(param_1 + 4);
      unaff_x28 = **(long **)(param_1 + 0x12);
      unaff_x22 = (undefined4 *)(unaff_x27 + unaff_x28 * unaff_x26);
      if (uVar2 == 0) {
LAB_109b32d6c:
        unaff_x19 = (uint *)0x0;
        puVar23 = (uint *)(ulong)*param_3;
LAB_109b32e00:
        unaff_x23 = unaff_x19;
        if ((int)(uint)unaff_x19 < (int)puVar23) {
          puVar11 = (undefined4 *)((long)unaff_x22 + (long)unaff_x19);
          puVar14 = (uint *)((ulong)((int)puVar23 + ~(uint)unaff_x19) + 1);
          puVar12 = (uint *)0x1;
          _memset();
          unaff_x23 = puVar23;
        }
      }
      else {
        if (uVar2 == 1) {
          if (unaff_x26 == puStack_90[1]) goto LAB_109b32d6c;
          uVar3 = *puStack_90;
          uVar5 = uVar3 + 1;
LAB_109b32de4:
          puVar23 = (uint *)(ulong)uVar5;
          unaff_x19 = (uint *)(ulong)uVar3;
          if ((int)uVar3 < 1) {
            unaff_x19 = (uint *)0x0;
          }
          else {
            puVar11 = unaff_x22;
            puVar12 = unaff_x19;
            _bzero();
          }
          goto LAB_109b32e00;
        }
        iVar27 = (int)unaff_x26;
        iVar28 = iVar27 - iVar24;
        iVar17 = -iVar28;
        if (-1 < iVar28) {
          iVar17 = iVar28;
        }
        if (iVar17 <= iVar24) {
          iVar17 = (int)(long)(double)(long)(SQRT(dVar29 * (double)((iStack_9c - iVar27) * iVar27))
                                            * unaff_d9);
          uVar3 = uStack_94 - iVar17;
          uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
          uVar1 = iStack_98 + iVar17;
          uVar5 = *param_3;
          if ((int)uVar1 <= (int)*param_3) {
            uVar5 = uVar1;
          }
          goto LAB_109b32de4;
        }
        unaff_x23 = (uint *)0x0;
      }
      iVar17 = (int)param_7;
      uVar16 = (undefined4)param_8;
      if ((int)unaff_x23 < (int)*param_3) {
        puVar18 = (undefined1 *)((long)unaff_x23 + unaff_x27 + unaff_x28 * unaff_x26);
        do {
          *puVar18 = 0;
          uVar3 = (int)unaff_x23 + 1;
          unaff_x23 = (uint *)(ulong)uVar3;
          puVar18 = puVar18 + 1;
        } while ((int)uVar3 < (int)*param_3);
      }
      unaff_x26 = unaff_x26 + 1;
    } while ((long)unaff_x26 < (long)(int)param_3[1]);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = puVar11;
  __Unwind_Resume();
  pcStack_a8 = FUN_109b32fd4;
  dStack_110 = unaff_d9;
  dStack_108 = dVar29;
  lStack_100 = unaff_x28;
  lStack_f8 = unaff_x27;
  uStack_f0 = unaff_x26;
  uStack_e8 = uVar26;
  uStack_e0 = uVar25;
  puStack_d8 = unaff_x23;
  puStack_d0 = unaff_x22;
  puStack_c8 = param_1;
  puStack_c0 = puVar11;
  puStack_b8 = unaff_x19;
  puStack_b0 = &stack0xfffffffffffffff0;
  if ((*puVar15 & 0x1f0000) == 0x10000) {
    puVar13 = *(ulong **)(puVar15 + 2);
    piStack_140 = (int *)((ulong)&uStack_180 | 8);
    uStack_178 = (undefined8 *)puVar13[1];
    uStack_180 = (undefined **)*puVar13;
    uStack_168 = puVar13[3];
    uStack_170 = puVar13[2];
    uStack_158 = puVar13[5];
    uStack_160 = puVar13[4];
    uStack_148 = puVar13[7];
    uStack_150 = puVar13[6];
    ppuStack_138 = &puStack_130;
    puStack_130 = (undefined8 *)0x0;
    uStack_128 = 0;
    if (puVar13[7] != 0) {
      piVar22 = (int *)(puVar13[7] + 0x14);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar7) {
          *piVar22 = *piVar22 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (*(int *)((long)puVar13 + 4) < 3) {
      puStack_130 = *(undefined8 **)puVar13[9];
      uStack_128 = ((undefined8 *)puVar13[9])[1];
    }
    else {
      uStack_180 = (undefined **)((ulong)uStack_180 & 0xffffffff);
      func_0x000109a84868(&uStack_180);
    }
  }
  else {
    FUN_109a8a180(&uStack_180,puVar15,0xffffffff);
  }
  if (uStack_170 == 0) {
LAB_109b330f8:
    iVar28 = 3;
    iVar24 = 3;
  }
  else {
    uVar26 = (ulong)uStack_180._4_4_;
    if ((int)uStack_180._4_4_ < 3) {
      lVar20 = (long)uStack_178._4_4_ * (long)(int)uStack_178;
    }
    else {
      lVar20 = 1;
      piVar22 = piStack_140;
      do {
        lVar20 = lVar20 * *piVar22;
        uVar26 = uVar26 - 1;
        piVar22 = piVar22 + 1;
      } while (uVar26 != 0);
    }
    if (lVar20 == 0) goto LAB_109b330f8;
    iVar24 = *piStack_140;
    iVar28 = piStack_140[1];
  }
  iVar27 = iVar28 / 2;
  if (*param_6 != -1) {
    iVar27 = *param_6;
  }
  iVar4 = iVar24 / 2;
  if (param_6[1] != -1) {
    iVar4 = param_6[1];
  }
  if (((iVar27 < 0) || (iVar28 <= iVar27)) || ((iVar4 < 0 || (iVar24 <= iVar4)))) {
    puVar11 = (undefined4 *)0x3c;
    func_0x000107c2ae8c();
    *puVar11 = 1;
    uStack_3b0 = (undefined **)(puVar11 + 1);
    uStack_3a8._0_4_ = 0x34;
    uStack_3a8._4_4_ = 0;
    *(undefined8 *)(puVar11 + 3) = 0x655228656469736e;
    *(undefined8 *)(puVar11 + 1) = 0x692e726f68636e61;
    puVar11[0xd] = 0x29297468;
    *(undefined1 *)(puVar11 + 0xe) = 0;
    *(undefined8 *)(puVar11 + 7) = 0x772e657a69736b20;
    *(undefined8 *)(puVar11 + 5) = 0x2c30202c30287463;
    *(undefined8 *)(puVar11 + 0xb) = 0x676965682e657a69;
    *(undefined8 *)(puVar11 + 9) = 0x736b202c68746469;
    FUN_109ac3188(0xffffff29,&uStack_3b0,&UNK_10f59ce9d,&UNK_10f59cead,0x16b);
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x109b33e54);
    (*pcVar9)();
  }
  *param_6 = iVar27;
  param_6[1] = iVar4;
  if ((iVar17 == 0) || (uStack_178._4_4_ * (int)uStack_178 == 1)) {
    FUN_109a8e5e8(puVar12,puVar14);
    goto LAB_109b33160;
  }
  piVar22 = (int *)((ulong)&uStack_180 | 8);
  if (uStack_170 == 0) {
LAB_109b33348:
    uStack_1e0 = CONCAT44(iVar17 << 1,iVar17 << 1) | 0x100000001;
    uStack_240 = 0xffffffffffffffff;
    FUN_109b32bf8(&uStack_3b0,0,&uStack_1e0,&uStack_240);
    if (uStack_148 != 0) {
      piVar21 = (int *)(uStack_148 + 0x14);
      do {
        iVar24 = *piVar21;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar7) {
          *piVar21 = iVar24 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar24 + -1 == 0) {
        func_0x000109a848d4(&uStack_180);
      }
    }
    if (0 < (int)uStack_180._4_4_) {
      lVar20 = 0;
      do {
        piStack_140[lVar20] = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < (int)uStack_180._4_4_);
    }
    uStack_178 = (undefined8 *)CONCAT44(uStack_3a8._4_4_,(undefined4)uStack_3a8);
    uStack_168 = CONCAT44(uStack_394,uStack_398);
    uStack_170 = CONCAT44(uStack_39c,uStack_3a0);
    uStack_180 = uStack_3b0;
    uStack_158 = CONCAT44(uStack_384,uStack_388);
    uStack_160 = CONCAT44(uStack_38c,uStack_390);
    uStack_148 = CONCAT44(uStack_374,uStack_378);
    uStack_150 = CONCAT44(uStack_37c,uStack_380);
    piVar21 = piStack_140;
    ppuVar8 = ppuStack_138;
    if ((ppuStack_138 != &puStack_130) &&
       (piVar21 = piVar22, ppuVar8 = &puStack_130, ppuStack_138 != (undefined8 **)0x0)) {
      _free(ppuStack_138[-1]);
    }
    ppuStack_138 = ppuVar8;
    piStack_140 = piVar21;
    if (uStack_3b0._4_4_ < 3) {
      puVar19 = (undefined8 *)((ulong)&uStack_3b0 | 4);
      *ppuStack_138 = *ppuStack_368;
      ppuStack_138[1] = ppuStack_368[1];
      uStack_3b0 = (undefined **)CONCAT44(uStack_3b0._4_4_,0x42ff0000);
      puVar19[1] = 0;
      *puVar19 = 0;
      puVar19[3] = 0;
      puVar19[2] = 0;
      puVar19[5] = 0;
      puVar19[4] = 0;
      *(undefined8 *)((long)puVar19 + 0x34) = 0;
      *(undefined8 *)((long)puVar19 + 0x2c) = 0;
      if (ppuStack_368 != &puStack_360) {
        _free(ppuStack_368[-1]);
      }
    }
    else {
      piStack_140 = piStack_370;
      ppuStack_138 = ppuStack_368;
    }
    *param_6 = iVar17;
    param_6[1] = iVar17;
LAB_109b3346c:
    iVar17 = 1;
  }
  else {
    uVar26 = (ulong)uStack_180._4_4_;
    if ((int)uStack_180._4_4_ < 3) {
      lVar20 = (long)uStack_178._4_4_ * (long)(int)uStack_178;
    }
    else {
      lVar20 = 1;
      piVar21 = piStack_140;
      do {
        lVar20 = lVar20 * *piVar21;
        uVar26 = uVar26 - 1;
        piVar21 = piVar21 + 1;
      } while (uVar26 != 0);
    }
    if (lVar20 == 0) goto LAB_109b33348;
    if (1 < iVar17) {
      uStack_3b0 = (undefined **)CONCAT44(uStack_3b0._4_4_,0x1010000);
      uStack_3a8 = &uStack_180;
      uStack_3a0 = 0;
      uStack_39c = 0;
      iVar27 = (int)&uStack_3b0;
      FUN_109ab7930();
      if (iVar27 != uStack_178._4_4_ * (int)uStack_178) goto LAB_109b33470;
      iVar27 = *param_6;
      iVar4 = param_6[1];
      *param_6 = iVar27 * iVar17;
      param_6[1] = iVar4 * iVar17;
      uStack_1e0 = CONCAT44(iVar24 + (iVar24 + -1) * (iVar17 + -1),
                            iVar28 + (iVar28 + -1) * (iVar17 + -1));
      uStack_240 = CONCAT44(iVar4 * iVar17,iVar27 * iVar17);
      FUN_109b32bf8(&uStack_3b0,0,&uStack_1e0,&uStack_240);
      puVar19 = uStack_3a8;
      if (uStack_148 != 0) {
        piVar21 = (int *)(uStack_148 + 0x14);
        do {
          iVar17 = *piVar21;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar21,0x10);
          if (bVar7) {
            *piVar21 = iVar17 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        puVar19 = uStack_3a8;
        if (iVar17 + -1 == 0) {
          func_0x000109a848d4(&uStack_180);
          puVar19 = uStack_3a8;
        }
      }
      uStack_178 = puVar19;
      if (0 < (int)uStack_180._4_4_) {
        lVar20 = 0;
        do {
          piStack_140[lVar20] = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 < (int)uStack_180._4_4_);
      }
      uStack_168 = CONCAT44(uStack_394,uStack_398);
      uStack_170 = CONCAT44(uStack_39c,uStack_3a0);
      uStack_180 = uStack_3b0;
      uStack_158 = CONCAT44(uStack_384,uStack_388);
      uStack_160 = CONCAT44(uStack_38c,uStack_390);
      uStack_148 = CONCAT44(uStack_374,uStack_378);
      uStack_150 = CONCAT44(uStack_37c,uStack_380);
      piVar21 = piStack_140;
      ppuVar8 = ppuStack_138;
      uStack_3a8 = uStack_178;
      if ((ppuStack_138 != &puStack_130) &&
         (piVar21 = piVar22, ppuVar8 = &puStack_130, ppuStack_138 != (undefined8 **)0x0)) {
        _free(ppuStack_138[-1]);
      }
      ppuStack_138 = ppuVar8;
      piStack_140 = piVar21;
      if (uStack_3b0._4_4_ < 3) {
        puVar19 = (undefined8 *)((ulong)&uStack_3b0 | 4);
        *ppuStack_138 = *ppuStack_368;
        ppuStack_138[1] = ppuStack_368[1];
        uStack_3b0 = (undefined **)CONCAT44(uStack_3b0._4_4_,0x42ff0000);
        puVar19[1] = 0;
        *puVar19 = 0;
        puVar19[3] = 0;
        puVar19[2] = 0;
        puVar19[5] = 0;
        puVar19[4] = 0;
        *(undefined8 *)((long)puVar19 + 0x34) = 0;
        *(undefined8 *)((long)puVar19 + 0x2c) = 0;
        if (ppuStack_368 != &puStack_360) {
          _free(ppuStack_368[-1]);
        }
      }
      else {
        piStack_140 = piStack_370;
        ppuStack_138 = ppuStack_368;
      }
      goto LAB_109b3346c;
    }
  }
LAB_109b33470:
  if ((*puVar12 & 0x1f0000) == 0x10000) {
    puVar13 = *(ulong **)(puVar12 + 2);
    puStack_1a0 = (undefined8 *)((ulong)&uStack_1e0 | 8);
    uStack_1d8 = puVar13[1];
    uStack_1e0 = *puVar13;
    uStack_1c8 = puVar13[3];
    uStack_1d0 = puVar13[2];
    uStack_1b8 = puVar13[5];
    uStack_1c0 = puVar13[4];
    piStack_1a8 = (int *)puVar13[7];
    uStack_1b0 = puVar13[6];
    puStack_198 = &uStack_190;
    uStack_188 = 0;
    uStack_190 = 0;
    if (puVar13[7] != 0) {
      piVar22 = (int *)(puVar13[7] + 0x14);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar7) {
          *piVar22 = *piVar22 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (*(int *)((long)puVar13 + 4) < 3) {
      uStack_190 = *(undefined8 *)puVar13[9];
      uStack_188 = ((undefined8 *)puVar13[9])[1];
    }
    else {
      uStack_1e0 = uStack_1e0 & 0xffffffff;
      func_0x000109a84868(&uStack_1e0);
    }
  }
  else {
    FUN_109a8a180(&uStack_1e0,puVar12,0xffffffff);
  }
  uStack_3b0 = (undefined **)NEON_rev64(*puStack_1a0,4);
  FUN_109a8ee3c(puVar14,&uStack_3b0,(uint)uStack_1e0 & 0xfff,0xffffffff,0,0);
  if ((*puVar14 & 0x1f0000) == 0x10000) {
    puVar13 = *(ulong **)(puVar14 + 2);
    uStack_200 = (ulong)&uStack_240 | 8;
    uStack_238 = puVar13[1];
    uStack_240 = *puVar13;
    uStack_228 = puVar13[3];
    uStack_230 = puVar13[2];
    uStack_218 = puVar13[5];
    uStack_220 = puVar13[4];
    uStack_208 = puVar13[7];
    uStack_210 = puVar13[6];
    puStack_1f8 = &uStack_1f0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    if (puVar13[7] != 0) {
      piVar22 = (int *)(puVar13[7] + 0x14);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar7) {
          *piVar22 = *piVar22 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (*(int *)((long)puVar13 + 4) < 3) {
      uStack_1f0 = *(undefined8 *)puVar13[9];
      uStack_1e8 = ((undefined8 *)puVar13[9])[1];
    }
    else {
      uStack_240 = uStack_240 & 0xffffffff;
      func_0x000109a84868(&uStack_240);
    }
  }
  else {
    FUN_109a8a180(&uStack_240,puVar14,0xffffffff);
  }
  uStack_248 = 0x100000000;
  uStack_3d0 = (ulong)&uStack_410 | 8;
  uStack_408 = uStack_1d8;
  uStack_410 = uStack_1e0;
  uStack_3f8 = uStack_1c8;
  uStack_400 = uStack_1d0;
  uStack_3e8 = uStack_1b8;
  uStack_3f0 = uStack_1c0;
  piStack_3d8 = piStack_1a8;
  uStack_3e0 = uStack_1b0;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  if (piStack_1a8 != (int *)0x0) {
    piVar22 = piStack_1a8 + 5;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar7) {
        *piVar22 = *piVar22 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  puStack_3c8 = &uStack_3c0;
  if (uStack_1e0._4_4_ < 3) {
    uStack_3c0 = *puStack_198;
    uStack_3b8 = puStack_198[1];
  }
  else {
    uStack_410 = uStack_1e0 & 0xffffffff;
    func_0x000109a84868(&uStack_410,&uStack_1e0);
  }
  uStack_430 = (ulong)&uStack_470 | 8;
  uStack_468 = uStack_238;
  uStack_470 = uStack_240;
  uStack_458 = uStack_228;
  uStack_460 = uStack_230;
  uStack_448 = uStack_218;
  uStack_450 = uStack_220;
  uStack_438 = uStack_208;
  uStack_440 = uStack_210;
  uStack_420 = 0;
  uStack_418 = 0;
  if (uStack_208 != 0) {
    piVar22 = (int *)(uStack_208 + 0x14);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar7) {
        *piVar22 = *piVar22 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  puStack_428 = &uStack_420;
  if (uStack_240._4_4_ < 3) {
    uStack_420 = *puStack_1f8;
    uStack_418 = puStack_1f8[1];
  }
  else {
    uStack_470 = uStack_240 & 0xffffffff;
    func_0x000109a84868(&uStack_470,&uStack_240);
  }
  uStack_490 = (ulong)&uStack_4d0 | 8;
  puStack_4c8 = uStack_178;
  uStack_4d0 = uStack_180;
  uStack_4b8 = uStack_168;
  uStack_4c0 = uStack_170;
  uStack_4a8 = uStack_158;
  uStack_4b0 = uStack_160;
  uStack_498 = uStack_148;
  uStack_4a0 = uStack_150;
  puStack_480 = (undefined8 *)0x0;
  puStack_478 = (undefined8 *)0x0;
  if (uStack_148 != 0) {
    piVar22 = (int *)(uStack_148 + 0x14);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar7) {
        *piVar22 = *piVar22 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  ppuStack_488 = &puStack_480;
  if ((int)uStack_180._4_4_ < 3) {
    puStack_480 = *ppuStack_138;
    puStack_478 = ppuStack_138[1];
  }
  else {
    uStack_4d0 = (undefined **)((ulong)uStack_180 & 0xffffffff);
    func_0x000109a84868(&uStack_4d0,&uStack_180);
  }
  uVar30 = *(undefined8 *)param_6;
  uStack_3b0 = &PTR_FUN_110b26cf0;
  ppuStack_368 = (undefined8 **)&uStack_3a0;
  uStack_39c = 0;
  uStack_3a8._4_4_ = 0;
  uStack_3a0 = 0;
  uStack_378 = 0;
  uStack_374 = 0;
  puStack_360 = &uStack_358;
  uStack_358 = 0;
  uStack_350 = 0;
  uStack_348 = 0x42ff0000;
  puStack_308 = &uStack_340;
  uStack_33c = 0;
  uStack_338 = 0;
  iStack_344 = 0;
  uStack_340 = 0;
  uStack_32c = 0;
  uStack_328 = 0;
  uStack_334 = 0;
  uStack_330 = 0;
  uStack_31c = 0;
  uStack_324 = 0;
  uStack_320 = 0;
  uStack_310 = 0;
  uStack_318 = 0;
  uStack_314 = 0;
  puStack_300 = &uStack_2f8;
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0x42ff0000;
  puStack_298 = &uStack_2d0;
  uStack_2a0 = 0;
  uStack_2a4 = 0;
  uStack_2ac = 0;
  uStack_2a8 = 0;
  uStack_2b4 = 0;
  uStack_2b0 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2cc = 0;
  uStack_2c8 = 0;
  iStack_2d4 = 0;
  uStack_2d0 = 0;
  puStack_290 = &uStack_288;
  uStack_278 = 0;
  uStack_288 = 0;
  uStack_280 = 0;
  uStack_260 = param_9[1];
  uStack_268 = *param_9;
  uStack_250 = param_9[3];
  uStack_258 = param_9[2];
  if (piStack_3d8 != (int *)0x0) {
    piVar22 = piStack_3d8 + 5;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar7) {
        *piVar22 = *piVar22 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  piStack_370 = (int *)0x0;
  uStack_390 = 0;
  uStack_38c = 0;
  uStack_398 = 0;
  uStack_394 = 0;
  uStack_380 = 0;
  uStack_37c = 0;
  uStack_388 = 0;
  uStack_384 = 0;
  uStack_3a8._0_4_ = (undefined4)uStack_410;
  if (uStack_410._4_4_ < 3) {
    uStack_3a8._4_4_ = uStack_410._4_4_;
    uStack_3a0 = (undefined4)uStack_408;
    uStack_39c = (undefined4)(uStack_408 >> 0x20);
    uStack_358 = *puStack_3c8;
    uStack_350 = puStack_3c8[1];
  }
  else {
    func_0x000109a84868(&uStack_3a8,&uStack_410);
  }
  uStack_390 = (undefined4)uStack_3f8;
  uStack_38c = (undefined4)(uStack_3f8 >> 0x20);
  uStack_398 = (undefined4)uStack_400;
  uStack_394 = (undefined4)(uStack_400 >> 0x20);
  uStack_380 = (undefined4)uStack_3e8;
  uStack_37c = (undefined4)(uStack_3e8 >> 0x20);
  uStack_388 = (undefined4)uStack_3f0;
  uStack_384 = (undefined4)(uStack_3f0 >> 0x20);
  piStack_370 = piStack_3d8;
  uStack_378 = (undefined4)uStack_3e0;
  uStack_374 = (undefined4)(uStack_3e0 >> 0x20);
  if (uStack_438 != 0) {
    piVar22 = (int *)(uStack_438 + 0x14);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar7) {
        *piVar22 = *piVar22 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (uStack_310 != 0) {
    piVar22 = (int *)(uStack_310 + 0x14);
    do {
      iVar24 = *piVar22;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar7) {
        *piVar22 = iVar24 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar24 + -1 == 0) {
      func_0x000109a848d4(&uStack_348);
    }
  }
  uStack_310 = 0;
  uStack_330 = 0;
  uStack_32c = 0;
  uStack_338 = 0;
  uStack_334 = 0;
  uStack_320 = 0;
  uStack_31c = 0;
  uStack_328 = 0;
  uStack_324 = 0;
  if (iStack_344 < 1) {
LAB_109b33998:
    uStack_348 = (undefined4)uStack_470;
    if (2 < uStack_470._4_4_) goto LAB_109b339cc;
    iStack_344 = uStack_470._4_4_;
    uStack_340 = (undefined4)uStack_468;
    uStack_33c = (undefined4)(uStack_468 >> 0x20);
    *puStack_300 = *puStack_428;
    puStack_300[1] = puStack_428[1];
  }
  else {
    lVar20 = 0;
    do {
      puStack_308[lVar20] = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < iStack_344);
    if (iStack_344 < 3) goto LAB_109b33998;
LAB_109b339cc:
    uStack_348 = (undefined4)uStack_470;
    func_0x000109a84868(&uStack_348,&uStack_470);
  }
  uStack_330 = (undefined4)uStack_458;
  uStack_32c = (undefined4)(uStack_458 >> 0x20);
  uStack_338 = (undefined4)uStack_460;
  uStack_334 = (undefined4)(uStack_460 >> 0x20);
  uStack_320 = (undefined4)uStack_448;
  uStack_31c = (undefined4)(uStack_448 >> 0x20);
  uStack_328 = (undefined4)uStack_450;
  uStack_324 = (undefined4)(uStack_450 >> 0x20);
  uStack_310 = uStack_438;
  uStack_318 = (undefined4)uStack_440;
  uStack_314 = (undefined4)(uStack_440 >> 0x20);
  uStack_2e8 = 1;
  uStack_2e0 = SUB84(puVar10,0);
  if (uStack_498 != 0) {
    piVar22 = (int *)(uStack_498 + 0x14);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar7) {
        *piVar22 = *piVar22 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  iStack_2e4 = iVar17;
  if (uStack_2a0 != 0) {
    piVar22 = (int *)(uStack_2a0 + 0x14);
    do {
      iVar17 = *piVar22;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar7) {
        *piVar22 = iVar17 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar17 + -1 == 0) {
      func_0x000109a848d4(&uStack_2d8);
    }
  }
  uStack_2a0 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  if (iStack_2d4 < 1) {
LAB_109b33a94:
    uStack_2d8 = (undefined4)uStack_4d0;
    if (2 < uStack_4d0._4_4_) goto LAB_109b33ac8;
    iStack_2d4 = uStack_4d0._4_4_;
    uStack_2d0 = SUB84(puStack_4c8,0);
    uStack_2cc = (undefined4)((ulong)puStack_4c8 >> 0x20);
    *puStack_290 = *ppuStack_488;
    puStack_290[1] = ppuStack_488[1];
  }
  else {
    lVar20 = 0;
    do {
      puStack_298[lVar20] = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < iStack_2d4);
    if (iStack_2d4 < 3) goto LAB_109b33a94;
LAB_109b33ac8:
    uStack_2d8 = (undefined4)uStack_4d0;
    func_0x000109a84868(&uStack_2d8,&uStack_4d0);
  }
  uStack_2c0 = (undefined4)uStack_4b8;
  uStack_2bc = (undefined4)(uStack_4b8 >> 0x20);
  uStack_2c8 = (undefined4)uStack_4c0;
  uStack_2c4 = (undefined4)(uStack_4c0 >> 0x20);
  uStack_2b0 = (undefined4)uStack_4a8;
  uStack_2ac = (undefined4)(uStack_4a8 >> 0x20);
  uStack_2b8 = (undefined4)uStack_4b0;
  uStack_2b4 = (undefined4)(uStack_4b0 >> 0x20);
  uStack_2a0 = uStack_498;
  uStack_2a8 = (undefined4)uStack_4a0;
  uStack_2a4 = (undefined4)(uStack_4a0 >> 0x20);
  uStack_278 = uVar30;
  uStack_270 = uVar16;
  uStack_26c = uVar16;
  func_0x000109aa87cc(0xbff0000000000000,&uStack_248,&uStack_3b0);
  FUN_109b35f90(&uStack_3b0);
  if (uStack_498 != 0) {
    piVar22 = (int *)(uStack_498 + 0x14);
    do {
      iVar17 = *piVar22;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar7) {
        *piVar22 = iVar17 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar17 + -1 == 0) {
      func_0x000109a848d4(&uStack_4d0);
    }
  }
  uStack_498 = 0;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  if (0 < uStack_4d0._4_4_) {
    lVar20 = 0;
    do {
      *(undefined4 *)(uStack_490 + lVar20 * 4) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < uStack_4d0._4_4_);
  }
  if (ppuStack_488 != &puStack_480 && ppuStack_488 != (undefined8 **)0x0) {
    _free(ppuStack_488[-1]);
  }
  if (uStack_438 != 0) {
    piVar22 = (int *)(uStack_438 + 0x14);
    do {
      iVar17 = *piVar22;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar7) {
        *piVar22 = iVar17 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar17 + -1 == 0) {
      func_0x000109a848d4(&uStack_470);
    }
  }
  uStack_438 = 0;
  uStack_458 = 0;
  uStack_460 = 0;
  uStack_448 = 0;
  uStack_450 = 0;
  if (0 < uStack_470._4_4_) {
    lVar20 = 0;
    do {
      *(undefined4 *)(uStack_430 + lVar20 * 4) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < uStack_470._4_4_);
  }
  if (puStack_428 != &uStack_420 && puStack_428 != (undefined8 *)0x0) {
    _free(puStack_428[-1]);
  }
  if (piStack_3d8 != (int *)0x0) {
    piVar22 = piStack_3d8 + 5;
    do {
      iVar17 = *piVar22;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar7) {
        *piVar22 = iVar17 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar17 + -1 == 0) {
      func_0x000109a848d4(&uStack_410);
    }
  }
  piStack_3d8 = (int *)0x0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  if (0 < uStack_410._4_4_) {
    lVar20 = 0;
    do {
      *(undefined4 *)(uStack_3d0 + lVar20 * 4) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < uStack_410._4_4_);
  }
  if (puStack_3c8 != &uStack_3c0 && puStack_3c8 != (undefined8 *)0x0) {
    _free(puStack_3c8[-1]);
  }
  if (uStack_208 != 0) {
    piVar22 = (int *)(uStack_208 + 0x14);
    do {
      iVar17 = *piVar22;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar7) {
        *piVar22 = iVar17 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar17 + -1 == 0) {
      func_0x000109a848d4(&uStack_240);
    }
  }
  uStack_208 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  if (0 < uStack_240._4_4_) {
    lVar20 = 0;
    do {
      *(undefined4 *)(uStack_200 + lVar20 * 4) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < uStack_240._4_4_);
  }
  if (puStack_1f8 != &uStack_1f0 && puStack_1f8 != (undefined8 *)0x0) {
    _free(puStack_1f8[-1]);
  }
  if (piStack_1a8 != (int *)0x0) {
    piVar22 = piStack_1a8 + 5;
    do {
      iVar17 = *piVar22;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar7) {
        *piVar22 = iVar17 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar17 + -1 == 0) {
      func_0x000109a848d4(&uStack_1e0);
    }
  }
  piStack_1a8 = (int *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  if (0 < uStack_1e0._4_4_) {
    lVar20 = 0;
    do {
      *(undefined4 *)((long)puStack_1a0 + lVar20 * 4) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < uStack_1e0._4_4_);
  }
  if (puStack_198 != &uStack_190 && puStack_198 != (undefined8 *)0x0) {
    _free(puStack_198[-1]);
  }
LAB_109b33160:
  if (uStack_148 != 0) {
    piVar22 = (int *)(uStack_148 + 0x14);
    do {
      iVar17 = *piVar22;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar7) {
        *piVar22 = iVar17 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar17 + -1 == 0) {
      func_0x000109a848d4(&uStack_180);
    }
  }
  uStack_148 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  if (0 < (int)uStack_180._4_4_) {
    lVar20 = 0;
    do {
      piStack_140[lVar20] = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < (int)uStack_180._4_4_);
  }
  if (ppuStack_138 != &puStack_130 && ppuStack_138 != (undefined8 **)0x0) {
    _free(ppuStack_138[-1]);
  }
  return;
}



/* Entry: 109b32fd4; end: 109b33f47;  */

/* WARNING: Removing unreachable block (ram,0x000109b33838) */
/* WARNING: Removing unreachable block (ram,0x000109b3383c) */
/* WARNING: Removing unreachable block (ram,0x000109b33844) */
/* WARNING: Removing unreachable block (ram,0x000109b3384c) */
/* WARNING: Removing unreachable block (ram,0x000109b33850) */
/* WARNING: Removing unreachable block (ram,0x000109b33874) */
/* WARNING: Removing unreachable block (ram,0x000109b3387c) */
/* WARNING: Removing unreachable block (ram,0x000109b33890) */
/* WARNING: Removing unreachable block (ram,0x000109b338a0) */

void FUN_109b32fd4(undefined4 param_1,uint *param_2,uint *param_3,uint *param_4,int *param_5,
                  int param_6,undefined4 param_7,undefined8 *param_8)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  code *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uStack_430;
  undefined8 *puStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  undefined8 **ppuStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  undefined8 *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  int *piStack_338;
  ulong uStack_330;
  undefined8 *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  int *piStack_2d0;
  undefined8 **ppuStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  int iStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  ulong uStack_270;
  undefined4 *puStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  int iStack_244;
  undefined4 uStack_240;
  undefined4 uStack_238;
  int iStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  ulong uStack_200;
  undefined4 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  int *piStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  int *piStack_a0;
  undefined8 **ppuStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  
  if ((*param_4 & 0x1f0000) == 0x10000) {
    puVar8 = *(ulong **)(param_4 + 2);
    piStack_a0 = (int *)((ulong)&uStack_e0 | 8);
    uStack_d8 = (undefined8 *)puVar8[1];
    uStack_e0 = (undefined **)*puVar8;
    uStack_c8 = puVar8[3];
    uStack_d0 = puVar8[2];
    uStack_b8 = puVar8[5];
    uStack_c0 = puVar8[4];
    uStack_a8 = puVar8[7];
    uStack_b0 = puVar8[6];
    ppuStack_98 = &puStack_90;
    puStack_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    if (puVar8[7] != 0) {
      piVar13 = (int *)(puVar8[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar3) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar8 + 4) < 3) {
      puStack_90 = *(undefined8 **)puVar8[9];
      uStack_88 = ((undefined8 *)puVar8[9])[1];
    }
    else {
      uStack_e0 = (undefined **)((ulong)uStack_e0 & 0xffffffff);
      func_0x000109a84868(&uStack_e0);
    }
  }
  else {
    FUN_109a8a180(&uStack_e0,param_4,0xffffffff);
  }
  if (uStack_d0 == 0) {
LAB_109b330f8:
    iVar14 = 3;
    iVar15 = 3;
  }
  else {
    uVar10 = (ulong)uStack_e0._4_4_;
    if ((int)uStack_e0._4_4_ < 3) {
      lVar11 = (long)uStack_d8._4_4_ * (long)(int)uStack_d8;
    }
    else {
      lVar11 = 1;
      piVar13 = piStack_a0;
      do {
        lVar11 = lVar11 * *piVar13;
        uVar10 = uVar10 - 1;
        piVar13 = piVar13 + 1;
      } while (uVar10 != 0);
    }
    if (lVar11 == 0) goto LAB_109b330f8;
    iVar15 = *piStack_a0;
    iVar14 = piStack_a0[1];
  }
  iVar6 = iVar14 / 2;
  if (*param_5 != -1) {
    iVar6 = *param_5;
  }
  iVar1 = iVar15 / 2;
  if (param_5[1] != -1) {
    iVar1 = param_5[1];
  }
  if ((((iVar6 < 0) || (iVar14 <= iVar6)) || (iVar1 < 0)) || (iVar15 <= iVar1)) {
    puVar7 = (undefined4 *)0x3c;
    func_0x000107c2ae8c();
    *puVar7 = 1;
    uStack_310 = (undefined **)(puVar7 + 1);
    uStack_308._0_4_ = 0x34;
    uStack_308._4_4_ = 0;
    *(undefined8 *)(puVar7 + 3) = 0x655228656469736e;
    *(undefined8 *)(puVar7 + 1) = 0x692e726f68636e61;
    puVar7[0xd] = 0x29297468;
    *(undefined1 *)(puVar7 + 0xe) = 0;
    *(undefined8 *)(puVar7 + 7) = 0x772e657a69736b20;
    *(undefined8 *)(puVar7 + 5) = 0x2c30202c30287463;
    *(undefined8 *)(puVar7 + 0xb) = 0x676965682e657a69;
    *(undefined8 *)(puVar7 + 9) = 0x736b202c68746469;
    FUN_109ac3188(0xffffff29,&uStack_310,&UNK_10f59ce9d,&UNK_10f59cead,0x16b);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109b33e54);
    (*pcVar5)();
  }
  *param_5 = iVar6;
  param_5[1] = iVar1;
  if ((param_6 == 0) || (uStack_d8._4_4_ * (int)uStack_d8 == 1)) {
    FUN_109a8e5e8(param_2,param_3);
    goto LAB_109b33160;
  }
  piVar13 = (int *)((ulong)&uStack_e0 | 8);
  if (uStack_d0 == 0) {
LAB_109b33348:
    uStack_140 = CONCAT44(param_6 << 1,param_6 << 1) | 0x100000001;
    uStack_1a0 = 0xffffffffffffffff;
    FUN_109b32bf8(&uStack_310,0,&uStack_140,&uStack_1a0);
    if (uStack_a8 != 0) {
      piVar12 = (int *)(uStack_a8 + 0x14);
      do {
        iVar15 = *piVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = iVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar15 + -1 == 0) {
        func_0x000109a848d4(&uStack_e0);
      }
    }
    if (0 < (int)uStack_e0._4_4_) {
      lVar11 = 0;
      do {
        piStack_a0[lVar11] = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)uStack_e0._4_4_);
    }
    uStack_d8 = (undefined8 *)CONCAT44(uStack_308._4_4_,(undefined4)uStack_308);
    uStack_c8 = CONCAT44(uStack_2f4,uStack_2f8);
    uStack_d0 = CONCAT44(uStack_2fc,uStack_300);
    uStack_e0 = uStack_310;
    uStack_b8 = CONCAT44(uStack_2e4,uStack_2e8);
    uStack_c0 = CONCAT44(uStack_2ec,uStack_2f0);
    uStack_a8 = CONCAT44(uStack_2d4,uStack_2d8);
    uStack_b0 = CONCAT44(uStack_2dc,uStack_2e0);
    piVar12 = piStack_a0;
    ppuVar4 = ppuStack_98;
    if ((ppuStack_98 != &puStack_90) &&
       (piVar12 = piVar13, ppuVar4 = &puStack_90, ppuStack_98 != (undefined8 **)0x0)) {
      _free(ppuStack_98[-1]);
    }
    ppuStack_98 = ppuVar4;
    piStack_a0 = piVar12;
    if (uStack_310._4_4_ < 3) {
      puVar9 = (undefined8 *)((ulong)&uStack_310 | 4);
      *ppuStack_98 = *ppuStack_2c8;
      ppuStack_98[1] = ppuStack_2c8[1];
      uStack_310 = (undefined **)CONCAT44(uStack_310._4_4_,0x42ff0000);
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      *(undefined8 *)((long)puVar9 + 0x34) = 0;
      *(undefined8 *)((long)puVar9 + 0x2c) = 0;
      if (ppuStack_2c8 != &puStack_2c0) {
        _free(ppuStack_2c8[-1]);
      }
    }
    else {
      piStack_a0 = piStack_2d0;
      ppuStack_98 = ppuStack_2c8;
    }
    *param_5 = param_6;
    param_5[1] = param_6;
LAB_109b3346c:
    param_6 = 1;
  }
  else {
    uVar10 = (ulong)uStack_e0._4_4_;
    if ((int)uStack_e0._4_4_ < 3) {
      lVar11 = (long)uStack_d8._4_4_ * (long)(int)uStack_d8;
    }
    else {
      lVar11 = 1;
      piVar12 = piStack_a0;
      do {
        lVar11 = lVar11 * *piVar12;
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 1;
      } while (uVar10 != 0);
    }
    if (lVar11 == 0) goto LAB_109b33348;
    if (1 < param_6) {
      uStack_310 = (undefined **)CONCAT44(uStack_310._4_4_,0x1010000);
      uStack_308 = &uStack_e0;
      uStack_300 = 0;
      uStack_2fc = 0;
      iVar6 = (int)&uStack_310;
      FUN_109ab7930();
      if (iVar6 != uStack_d8._4_4_ * (int)uStack_d8) goto LAB_109b33470;
      iVar6 = *param_5;
      iVar1 = param_5[1];
      *param_5 = iVar6 * param_6;
      param_5[1] = iVar1 * param_6;
      uStack_140 = CONCAT44(iVar15 + (iVar15 + -1) * (param_6 + -1),
                            iVar14 + (iVar14 + -1) * (param_6 + -1));
      uStack_1a0 = CONCAT44(iVar1 * param_6,iVar6 * param_6);
      FUN_109b32bf8(&uStack_310,0,&uStack_140,&uStack_1a0);
      puVar9 = uStack_308;
      if (uStack_a8 != 0) {
        piVar12 = (int *)(uStack_a8 + 0x14);
        do {
          iVar15 = *piVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar3) {
            *piVar12 = iVar15 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puVar9 = uStack_308;
        if (iVar15 + -1 == 0) {
          func_0x000109a848d4(&uStack_e0);
          puVar9 = uStack_308;
        }
      }
      uStack_d8 = puVar9;
      if (0 < (int)uStack_e0._4_4_) {
        lVar11 = 0;
        do {
          piStack_a0[lVar11] = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < (int)uStack_e0._4_4_);
      }
      uStack_c8 = CONCAT44(uStack_2f4,uStack_2f8);
      uStack_d0 = CONCAT44(uStack_2fc,uStack_300);
      uStack_e0 = uStack_310;
      uStack_b8 = CONCAT44(uStack_2e4,uStack_2e8);
      uStack_c0 = CONCAT44(uStack_2ec,uStack_2f0);
      uStack_a8 = CONCAT44(uStack_2d4,uStack_2d8);
      uStack_b0 = CONCAT44(uStack_2dc,uStack_2e0);
      piVar12 = piStack_a0;
      ppuVar4 = ppuStack_98;
      uStack_308 = uStack_d8;
      if ((ppuStack_98 != &puStack_90) &&
         (piVar12 = piVar13, ppuVar4 = &puStack_90, ppuStack_98 != (undefined8 **)0x0)) {
        _free(ppuStack_98[-1]);
      }
      ppuStack_98 = ppuVar4;
      piStack_a0 = piVar12;
      if (uStack_310._4_4_ < 3) {
        puVar9 = (undefined8 *)((ulong)&uStack_310 | 4);
        *ppuStack_98 = *ppuStack_2c8;
        ppuStack_98[1] = ppuStack_2c8[1];
        uStack_310 = (undefined **)CONCAT44(uStack_310._4_4_,0x42ff0000);
        puVar9[1] = 0;
        *puVar9 = 0;
        puVar9[3] = 0;
        puVar9[2] = 0;
        puVar9[5] = 0;
        puVar9[4] = 0;
        *(undefined8 *)((long)puVar9 + 0x34) = 0;
        *(undefined8 *)((long)puVar9 + 0x2c) = 0;
        if (ppuStack_2c8 != &puStack_2c0) {
          _free(ppuStack_2c8[-1]);
        }
      }
      else {
        piStack_a0 = piStack_2d0;
        ppuStack_98 = ppuStack_2c8;
      }
      goto LAB_109b3346c;
    }
  }
LAB_109b33470:
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar8 = *(ulong **)(param_2 + 2);
    puStack_100 = (undefined8 *)((ulong)&uStack_140 | 8);
    uStack_138 = puVar8[1];
    uStack_140 = *puVar8;
    uStack_128 = puVar8[3];
    uStack_130 = puVar8[2];
    uStack_118 = puVar8[5];
    uStack_120 = puVar8[4];
    piStack_108 = (int *)puVar8[7];
    uStack_110 = puVar8[6];
    puStack_f8 = &uStack_f0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    if (puVar8[7] != 0) {
      piVar13 = (int *)(puVar8[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar3) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar8 + 4) < 3) {
      uStack_f0 = *(undefined8 *)puVar8[9];
      uStack_e8 = ((undefined8 *)puVar8[9])[1];
    }
    else {
      uStack_140 = uStack_140 & 0xffffffff;
      func_0x000109a84868(&uStack_140);
    }
  }
  else {
    FUN_109a8a180(&uStack_140,param_2,0xffffffff);
  }
  uStack_310 = (undefined **)NEON_rev64(*puStack_100,4);
  FUN_109a8ee3c(param_3,&uStack_310,(uint)uStack_140 & 0xfff,0xffffffff,0,0);
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar8 = *(ulong **)(param_3 + 2);
    uStack_160 = (ulong)&uStack_1a0 | 8;
    uStack_198 = puVar8[1];
    uStack_1a0 = *puVar8;
    uStack_188 = puVar8[3];
    uStack_190 = puVar8[2];
    uStack_178 = puVar8[5];
    uStack_180 = puVar8[4];
    uStack_168 = puVar8[7];
    uStack_170 = puVar8[6];
    puStack_158 = &uStack_150;
    uStack_148 = 0;
    uStack_150 = 0;
    if (puVar8[7] != 0) {
      piVar13 = (int *)(puVar8[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar3) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar8 + 4) < 3) {
      uStack_150 = *(undefined8 *)puVar8[9];
      uStack_148 = ((undefined8 *)puVar8[9])[1];
    }
    else {
      uStack_1a0 = uStack_1a0 & 0xffffffff;
      func_0x000109a84868(&uStack_1a0);
    }
  }
  else {
    FUN_109a8a180(&uStack_1a0,param_3,0xffffffff);
  }
  uStack_1a8 = 0x100000000;
  uStack_330 = (ulong)&uStack_370 | 8;
  uStack_368 = uStack_138;
  uStack_370 = uStack_140;
  uStack_358 = uStack_128;
  uStack_360 = uStack_130;
  uStack_348 = uStack_118;
  uStack_350 = uStack_120;
  piStack_338 = piStack_108;
  uStack_340 = uStack_110;
  uStack_320 = 0;
  uStack_318 = 0;
  if (piStack_108 != (int *)0x0) {
    piVar13 = piStack_108 + 5;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_328 = &uStack_320;
  if (uStack_140._4_4_ < 3) {
    uStack_320 = *puStack_f8;
    uStack_318 = puStack_f8[1];
  }
  else {
    uStack_370 = uStack_140 & 0xffffffff;
    func_0x000109a84868(&uStack_370,&uStack_140);
  }
  uStack_390 = (ulong)&uStack_3d0 | 8;
  uStack_3c8 = uStack_198;
  uStack_3d0 = uStack_1a0;
  uStack_3b8 = uStack_188;
  uStack_3c0 = uStack_190;
  uStack_3a8 = uStack_178;
  uStack_3b0 = uStack_180;
  uStack_398 = uStack_168;
  uStack_3a0 = uStack_170;
  uStack_380 = 0;
  uStack_378 = 0;
  if (uStack_168 != 0) {
    piVar13 = (int *)(uStack_168 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_388 = &uStack_380;
  if (uStack_1a0._4_4_ < 3) {
    uStack_380 = *puStack_158;
    uStack_378 = puStack_158[1];
  }
  else {
    uStack_3d0 = uStack_1a0 & 0xffffffff;
    func_0x000109a84868(&uStack_3d0,&uStack_1a0);
  }
  uStack_3f0 = (ulong)&uStack_430 | 8;
  puStack_428 = uStack_d8;
  uStack_430 = uStack_e0;
  uStack_418 = uStack_c8;
  uStack_420 = uStack_d0;
  uStack_408 = uStack_b8;
  uStack_410 = uStack_c0;
  uStack_3f8 = uStack_a8;
  uStack_400 = uStack_b0;
  puStack_3e0 = (undefined8 *)0x0;
  puStack_3d8 = (undefined8 *)0x0;
  if (uStack_a8 != 0) {
    piVar13 = (int *)(uStack_a8 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppuStack_3e8 = &puStack_3e0;
  if ((int)uStack_e0._4_4_ < 3) {
    puStack_3e0 = *ppuStack_98;
    puStack_3d8 = ppuStack_98[1];
  }
  else {
    uStack_430 = (undefined **)((ulong)uStack_e0 & 0xffffffff);
    func_0x000109a84868(&uStack_430,&uStack_e0);
  }
  uVar16 = *(undefined8 *)param_5;
  uStack_310 = &PTR_FUN_110b26cf0;
  ppuStack_2c8 = (undefined8 **)&uStack_300;
  uStack_2fc = 0;
  uStack_308._4_4_ = 0;
  uStack_300 = 0;
  uStack_2d8 = 0;
  uStack_2d4 = 0;
  puStack_2c0 = &uStack_2b8;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2a8 = 0x42ff0000;
  puStack_268 = &uStack_2a0;
  uStack_29c = 0;
  uStack_298 = 0;
  iStack_2a4 = 0;
  uStack_2a0 = 0;
  uStack_28c = 0;
  uStack_288 = 0;
  uStack_294 = 0;
  uStack_290 = 0;
  uStack_27c = 0;
  uStack_284 = 0;
  uStack_280 = 0;
  uStack_270 = 0;
  uStack_278 = 0;
  uStack_274 = 0;
  puStack_260 = &uStack_258;
  uStack_258 = 0;
  uStack_250 = 0;
  uStack_238 = 0x42ff0000;
  puStack_1f8 = &uStack_230;
  uStack_200 = 0;
  uStack_204 = 0;
  uStack_20c = 0;
  uStack_208 = 0;
  uStack_214 = 0;
  uStack_210 = 0;
  uStack_21c = 0;
  uStack_218 = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  uStack_22c = 0;
  uStack_228 = 0;
  iStack_234 = 0;
  uStack_230 = 0;
  puStack_1f0 = &uStack_1e8;
  uStack_1d8 = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1c0 = param_8[1];
  uStack_1c8 = *param_8;
  uStack_1b0 = param_8[3];
  uStack_1b8 = param_8[2];
  if (piStack_338 != (int *)0x0) {
    piVar13 = piStack_338 + 5;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  piStack_2d0 = (int *)0x0;
  uStack_2f0 = 0;
  uStack_2ec = 0;
  uStack_2f8 = 0;
  uStack_2f4 = 0;
  uStack_2e0 = 0;
  uStack_2dc = 0;
  uStack_2e8 = 0;
  uStack_2e4 = 0;
  uStack_308._0_4_ = (undefined4)uStack_370;
  if (uStack_370._4_4_ < 3) {
    uStack_308._4_4_ = uStack_370._4_4_;
    uStack_300 = (undefined4)uStack_368;
    uStack_2fc = (undefined4)(uStack_368 >> 0x20);
    uStack_2b8 = *puStack_328;
    uStack_2b0 = puStack_328[1];
  }
  else {
    func_0x000109a84868(&uStack_308,&uStack_370);
  }
  uStack_2f0 = (undefined4)uStack_358;
  uStack_2ec = (undefined4)(uStack_358 >> 0x20);
  uStack_2f8 = (undefined4)uStack_360;
  uStack_2f4 = (undefined4)(uStack_360 >> 0x20);
  uStack_2e0 = (undefined4)uStack_348;
  uStack_2dc = (undefined4)(uStack_348 >> 0x20);
  uStack_2e8 = (undefined4)uStack_350;
  uStack_2e4 = (undefined4)(uStack_350 >> 0x20);
  piStack_2d0 = piStack_338;
  uStack_2d8 = (undefined4)uStack_340;
  uStack_2d4 = (undefined4)(uStack_340 >> 0x20);
  if (uStack_398 != 0) {
    piVar13 = (int *)(uStack_398 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uStack_270 != 0) {
    piVar13 = (int *)(uStack_270 + 0x14);
    do {
      iVar15 = *piVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = iVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar15 + -1 == 0) {
      func_0x000109a848d4(&uStack_2a8);
    }
  }
  uStack_270 = 0;
  uStack_290 = 0;
  uStack_28c = 0;
  uStack_298 = 0;
  uStack_294 = 0;
  uStack_280 = 0;
  uStack_27c = 0;
  uStack_288 = 0;
  uStack_284 = 0;
  if (iStack_2a4 < 1) {
LAB_109b33998:
    uStack_2a8 = (undefined4)uStack_3d0;
    if (2 < uStack_3d0._4_4_) goto LAB_109b339cc;
    iStack_2a4 = uStack_3d0._4_4_;
    uStack_2a0 = (undefined4)uStack_3c8;
    uStack_29c = (undefined4)(uStack_3c8 >> 0x20);
    *puStack_260 = *puStack_388;
    puStack_260[1] = puStack_388[1];
  }
  else {
    lVar11 = 0;
    do {
      puStack_268[lVar11] = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < iStack_2a4);
    if (iStack_2a4 < 3) goto LAB_109b33998;
LAB_109b339cc:
    uStack_2a8 = (undefined4)uStack_3d0;
    func_0x000109a84868(&uStack_2a8,&uStack_3d0);
  }
  uStack_290 = (undefined4)uStack_3b8;
  uStack_28c = (undefined4)(uStack_3b8 >> 0x20);
  uStack_298 = (undefined4)uStack_3c0;
  uStack_294 = (undefined4)(uStack_3c0 >> 0x20);
  uStack_280 = (undefined4)uStack_3a8;
  uStack_27c = (undefined4)(uStack_3a8 >> 0x20);
  uStack_288 = (undefined4)uStack_3b0;
  uStack_284 = (undefined4)(uStack_3b0 >> 0x20);
  uStack_270 = uStack_398;
  uStack_278 = (undefined4)uStack_3a0;
  uStack_274 = (undefined4)(uStack_3a0 >> 0x20);
  uStack_248 = 1;
  if (uStack_3f8 != 0) {
    piVar13 = (int *)(uStack_3f8 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  iStack_244 = param_6;
  uStack_240 = param_1;
  if (uStack_200 != 0) {
    piVar13 = (int *)(uStack_200 + 0x14);
    do {
      iVar15 = *piVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = iVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar15 + -1 == 0) {
      func_0x000109a848d4(&uStack_238);
    }
  }
  uStack_200 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  uStack_228 = 0;
  uStack_224 = 0;
  uStack_210 = 0;
  uStack_20c = 0;
  uStack_218 = 0;
  uStack_214 = 0;
  if (iStack_234 < 1) {
LAB_109b33a94:
    uStack_238 = (undefined4)uStack_430;
    if (2 < uStack_430._4_4_) goto LAB_109b33ac8;
    iStack_234 = uStack_430._4_4_;
    uStack_230 = SUB84(puStack_428,0);
    uStack_22c = (undefined4)((ulong)puStack_428 >> 0x20);
    *puStack_1f0 = *ppuStack_3e8;
    puStack_1f0[1] = ppuStack_3e8[1];
  }
  else {
    lVar11 = 0;
    do {
      puStack_1f8[lVar11] = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < iStack_234);
    if (iStack_234 < 3) goto LAB_109b33a94;
LAB_109b33ac8:
    uStack_238 = (undefined4)uStack_430;
    func_0x000109a84868(&uStack_238,&uStack_430);
  }
  uStack_220 = (undefined4)uStack_418;
  uStack_21c = (undefined4)(uStack_418 >> 0x20);
  uStack_228 = (undefined4)uStack_420;
  uStack_224 = (undefined4)(uStack_420 >> 0x20);
  uStack_210 = (undefined4)uStack_408;
  uStack_20c = (undefined4)(uStack_408 >> 0x20);
  uStack_218 = (undefined4)uStack_410;
  uStack_214 = (undefined4)(uStack_410 >> 0x20);
  uStack_200 = uStack_3f8;
  uStack_208 = (undefined4)uStack_400;
  uStack_204 = (undefined4)(uStack_400 >> 0x20);
  uStack_1d8 = uVar16;
  uStack_1d0 = param_7;
  uStack_1cc = param_7;
  func_0x000109aa87cc(0xbff0000000000000,&uStack_1a8,&uStack_310);
  FUN_109b35f90(&uStack_310);
  if (uStack_3f8 != 0) {
    piVar13 = (int *)(uStack_3f8 + 0x14);
    do {
      iVar15 = *piVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = iVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar15 + -1 == 0) {
      func_0x000109a848d4(&uStack_430);
    }
  }
  uStack_3f8 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  if (0 < uStack_430._4_4_) {
    lVar11 = 0;
    do {
      *(undefined4 *)(uStack_3f0 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < uStack_430._4_4_);
  }
  if (ppuStack_3e8 != &puStack_3e0 && ppuStack_3e8 != (undefined8 **)0x0) {
    _free(ppuStack_3e8[-1]);
  }
  if (uStack_398 != 0) {
    piVar13 = (int *)(uStack_398 + 0x14);
    do {
      iVar15 = *piVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = iVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar15 + -1 == 0) {
      func_0x000109a848d4(&uStack_3d0);
    }
  }
  uStack_398 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  if (0 < uStack_3d0._4_4_) {
    lVar11 = 0;
    do {
      *(undefined4 *)(uStack_390 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < uStack_3d0._4_4_);
  }
  if (puStack_388 != &uStack_380 && puStack_388 != (undefined8 *)0x0) {
    _free(puStack_388[-1]);
  }
  if (piStack_338 != (int *)0x0) {
    piVar13 = piStack_338 + 5;
    do {
      iVar15 = *piVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = iVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar15 + -1 == 0) {
      func_0x000109a848d4(&uStack_370);
    }
  }
  piStack_338 = (int *)0x0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  if (0 < uStack_370._4_4_) {
    lVar11 = 0;
    do {
      *(undefined4 *)(uStack_330 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < uStack_370._4_4_);
  }
  if (puStack_328 != &uStack_320 && puStack_328 != (undefined8 *)0x0) {
    _free(puStack_328[-1]);
  }
  if (uStack_168 != 0) {
    piVar13 = (int *)(uStack_168 + 0x14);
    do {
      iVar15 = *piVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = iVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar15 + -1 == 0) {
      func_0x000109a848d4(&uStack_1a0);
    }
  }
  uStack_168 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  if (0 < uStack_1a0._4_4_) {
    lVar11 = 0;
    do {
      *(undefined4 *)(uStack_160 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < uStack_1a0._4_4_);
  }
  if (puStack_158 != &uStack_150 && puStack_158 != (undefined8 *)0x0) {
    _free(puStack_158[-1]);
  }
  if (piStack_108 != (int *)0x0) {
    piVar13 = piStack_108 + 5;
    do {
      iVar15 = *piVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = iVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar15 + -1 == 0) {
      func_0x000109a848d4(&uStack_140);
    }
  }
  piStack_108 = (int *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  if (0 < uStack_140._4_4_) {
    lVar11 = 0;
    do {
      *(undefined4 *)((long)puStack_100 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < uStack_140._4_4_);
  }
  if (puStack_f8 != &uStack_f0 && puStack_f8 != (undefined8 *)0x0) {
    _free(puStack_f8[-1]);
  }
LAB_109b33160:
  if (uStack_a8 != 0) {
    piVar13 = (int *)(uStack_a8 + 0x14);
    do {
      iVar15 = *piVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = iVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar15 + -1 == 0) {
      func_0x000109a848d4(&uStack_e0);
    }
  }
  uStack_a8 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (0 < (int)uStack_e0._4_4_) {
    lVar11 = 0;
    do {
      piStack_a0[lVar11] = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)uStack_e0._4_4_);
  }
  if (ppuStack_98 != &puStack_90 && ppuStack_98 != (undefined8 **)0x0) {
    _free(ppuStack_98[-1]);
  }
  return;
}



/* Entry: 109b33f48; end: 109b3565f;  */

void FUN_109b33f48(uint *param_1,uint *param_2,int param_3,uint *param_4,undefined8 *param_5,
                  undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uStack_528;
  undefined1 *puStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  ulong uStack_4d8;
  int *piStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined4 uStack_3b0;
  int iStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  ulong uStack_378;
  undefined4 *puStack_370;
  undefined8 *puStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined4 uStack_350;
  int iStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  ulong uStack_318;
  undefined4 *puStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [8];
  undefined1 auStack_2e8 [4];
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  long lStack_2b8;
  undefined1 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [4];
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  long lStack_258;
  undefined1 *puStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  int iStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  ulong uStack_198;
  undefined4 *puStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  int *piStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 auStack_a8 [2];
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined4 auStack_90 [2];
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 auStack_78 [3];
  
  if ((*param_4 & 0x1f0000) == 0x10000) {
    puVar6 = *(ulong **)(param_4 + 2);
    piStack_d0 = (int *)((ulong)&uStack_110 | 8);
    uStack_108 = puVar6[1];
    uStack_110 = *puVar6;
    uStack_f8 = puVar6[3];
    uStack_100 = puVar6[2];
    uStack_e8 = puVar6[5];
    uStack_f0 = puVar6[4];
    uStack_d8 = puVar6[7];
    uStack_e0 = puVar6[6];
    puStack_c8 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    if (puVar6[7] != 0) {
      piVar10 = (int *)(puVar6[7] + 0x14);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = *piVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (*(int *)((long)puVar6 + 4) < 3) {
      uStack_c0 = *(undefined8 *)puVar6[9];
      uStack_b8 = ((undefined8 *)puVar6[9])[1];
    }
    else {
      uStack_110 = uStack_110 & 0xffffffff;
      func_0x000109a84868(&uStack_110);
    }
  }
  else {
    FUN_109a8a180(&uStack_110,param_4,0xffffffff);
  }
  if (uStack_100 == 0) {
LAB_109b34060:
    uStack_170 = 0x300000003;
    uStack_1d0 = 1;
    iStack_1cc = 1;
    FUN_109b32bf8(&uStack_510,0,&uStack_170,&uStack_1d0);
    if (uStack_d8 != 0) {
      piVar10 = (int *)(uStack_d8 + 0x14);
      do {
        iVar4 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(&uStack_110);
      }
    }
    if (0 < (int)uStack_110._4_4_) {
      lVar9 = 0;
      do {
        piStack_d0[lVar9] = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)uStack_110._4_4_);
    }
    uStack_108 = CONCAT44(uStack_508._4_4_,(int)uStack_508);
    uStack_110 = CONCAT44(uStack_510._4_4_,(undefined4)uStack_510);
    uStack_f8 = CONCAT44(uStack_4f4,uStack_4f8);
    uStack_100 = CONCAT44(uStack_4fc,uStack_500);
    uStack_e8 = CONCAT44(uStack_4e4,uStack_4e8);
    uStack_f0 = CONCAT44(uStack_4ec,uStack_4f0);
    uStack_e0 = CONCAT44(uStack_4dc,uStack_4e0);
    uStack_d8 = uStack_4d8;
    piVar10 = piStack_d0;
    puVar8 = puStack_c8;
    if ((puStack_c8 != &uStack_c0) &&
       (piVar10 = (int *)((ulong)&uStack_110 | 8), puVar8 = &uStack_c0,
       puStack_c8 != (undefined8 *)0x0)) {
      _free(puStack_c8[-1]);
    }
    puStack_c8 = puVar8;
    piStack_d0 = piVar10;
    if (uStack_510._4_4_ < 3) {
      puVar8 = (undefined8 *)((ulong)&uStack_510 | 4);
      *puStack_c8 = *puStack_4c8;
      puStack_c8[1] = puStack_4c8[1];
      uStack_510._0_4_ = 0x42ff0000;
      puVar8[1] = 0;
      *puVar8 = 0;
      puVar8[3] = 0;
      puVar8[2] = 0;
      puVar8[5] = 0;
      puVar8[4] = 0;
      *(undefined8 *)((long)puVar8 + 0x34) = 0;
      *(undefined8 *)((long)puVar8 + 0x2c) = 0;
      if (puStack_4c8 != &uStack_4c0) {
        _free(puStack_4c8[-1]);
      }
    }
    else {
      piStack_d0 = piStack_4d0;
      puStack_c8 = puStack_4c8;
    }
  }
  else {
    uVar7 = (ulong)uStack_110._4_4_;
    if ((int)uStack_110._4_4_ < 3) {
      lVar9 = (long)uStack_108._4_4_ * (long)(int)uStack_108;
    }
    else {
      lVar9 = 1;
      piVar10 = piStack_d0;
      do {
        lVar9 = lVar9 * *piVar10;
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 1;
      } while (uVar7 != 0);
    }
    if (lVar9 == 0) goto LAB_109b34060;
  }
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar6 = *(ulong **)(param_1 + 2);
    puStack_130 = (undefined8 *)((ulong)&uStack_170 | 8);
    uStack_168 = puVar6[1];
    uStack_170 = *puVar6;
    uStack_158 = puVar6[3];
    uStack_160 = puVar6[2];
    uStack_148 = puVar6[5];
    uStack_150 = puVar6[4];
    uStack_138 = puVar6[7];
    uStack_140 = puVar6[6];
    puStack_128 = &uStack_120;
    uStack_118 = 0;
    uStack_120 = 0;
    if (puVar6[7] != 0) {
      piVar10 = (int *)(puVar6[7] + 0x14);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = *piVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (*(int *)((long)puVar6 + 4) < 3) {
      uStack_120 = *(undefined8 *)puVar6[9];
      uStack_118 = ((undefined8 *)puVar6[9])[1];
    }
    else {
      uStack_170 = uStack_170 & 0xffffffff;
      func_0x000109a84868(&uStack_170);
    }
  }
  else {
    FUN_109a8a180(&uStack_170,param_1,0xffffffff);
  }
  uStack_1d0 = 0x42ff0000;
  puStack_190 = &uStack_1c8;
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  iStack_1cc = 0;
  uStack_1c8 = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1bc = 0;
  uStack_1b8 = 0;
  uStack_1a4 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_19c = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uVar11 = NEON_rev64(*puStack_130,4);
  uStack_510._0_4_ = (undefined4)uVar11;
  uStack_510._4_4_ = (int)((ulong)uVar11 >> 0x20);
  puStack_188 = &uStack_180;
  FUN_109a8ee3c(param_2,&uStack_510,(uint)uStack_170 & 0xfff,0xffffffff,0,0);
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar6 = *(ulong **)(param_2 + 2);
    uStack_1f0 = (ulong)&uStack_230 | 8;
    uStack_228 = puVar6[1];
    uStack_230 = *puVar6;
    uStack_218 = puVar6[3];
    uStack_220 = puVar6[2];
    uStack_208 = puVar6[5];
    uStack_210 = puVar6[4];
    uStack_1f8 = puVar6[7];
    uStack_200 = puVar6[6];
    puStack_1e8 = &uStack_1e0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    if (puVar6[7] != 0) {
      piVar10 = (int *)(puVar6[7] + 0x14);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = *piVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (*(int *)((long)puVar6 + 4) < 3) {
      uStack_1e0 = *(undefined8 *)puVar6[9];
      uStack_1d8 = ((undefined8 *)puVar6[9])[1];
    }
    else {
      uStack_230 = uStack_230 & 0xffffffff;
      func_0x000109a84868(&uStack_230);
    }
  }
  else {
    FUN_109a8a180(&uStack_230,param_2,0xffffffff);
  }
  auStack_290._0_4_ = 0x42ff0000;
  uStack_284 = 0;
  uStack_280 = 0;
  stack0xfffffffffffffd74 = 0;
  puStack_250 = auStack_288;
  uStack_274 = 0;
  uStack_270 = 0;
  uStack_27c = 0;
  uStack_278 = 0;
  uStack_264 = 0;
  uStack_26c = 0;
  uStack_268 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_25c = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  auStack_2f0._0_4_ = 0x42ff0000;
  puStack_2b0 = auStack_2e8;
  uStack_2e4 = 0;
  uStack_2e0 = 0;
  stack0xfffffffffffffd14 = 0;
  uStack_2d4 = 0;
  uStack_2d0 = 0;
  uStack_2dc = 0;
  uStack_2d8 = 0;
  uStack_2c4 = 0;
  uStack_2cc = 0;
  uStack_2c8 = 0;
  lStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_350 = 0x42ff0000;
  puStack_310 = &uStack_348;
  uStack_344 = 0;
  uStack_340 = 0;
  iStack_34c = 0;
  uStack_348 = 0;
  uStack_334 = 0;
  uStack_330 = 0;
  uStack_33c = 0;
  uStack_338 = 0;
  uStack_324 = 0;
  uStack_32c = 0;
  uStack_328 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_31c = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_3b0 = 0x42ff0000;
  puStack_370 = &uStack_3a8;
  uStack_3a4 = 0;
  uStack_3a0 = 0;
  iStack_3ac = 0;
  uStack_3a8 = 0;
  uStack_394 = 0;
  uStack_390 = 0;
  uStack_39c = 0;
  uStack_398 = 0;
  uStack_384 = 0;
  uStack_38c = 0;
  uStack_388 = 0;
  uStack_378 = 0;
  uStack_380 = 0;
  uStack_37c = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  puStack_368 = &uStack_360;
  puStack_308 = &uStack_300;
  puStack_2a8 = &uStack_2a0;
  puStack_248 = &uStack_240;
  if (param_3 < 4) {
    if (param_3 < 2) {
      if (param_3 == 0) {
        uStack_500 = 0;
        uStack_4fc = 0;
        uStack_510._0_4_ = 0x1010000;
        uStack_508 = &uStack_170;
        auStack_90[0] = 0x2010000;
        puStack_88 = &uStack_230;
        uStack_80 = 0;
        uStack_98 = 0;
        auStack_a8[0] = 0x1010000;
        puStack_a0 = &uStack_110;
        uStack_528 = *param_5;
        FUN_109b32fd4(0,&uStack_510,auStack_90,auStack_a8,&uStack_528,param_6,param_7,param_8);
        goto LAB_109b3505c;
      }
      if (param_3 == 1) {
        uStack_500 = 0;
        uStack_4fc = 0;
        uStack_510._0_4_ = 0x1010000;
        uStack_508 = &uStack_170;
        auStack_90[0] = 0x2010000;
        puStack_88 = &uStack_230;
        uStack_80 = 0;
        uStack_98 = 0;
        auStack_a8[0] = 0x1010000;
        puStack_a0 = &uStack_110;
        uStack_528 = *param_5;
        FUN_109b32fd4(1,&uStack_510,auStack_90,auStack_a8,&uStack_528,param_6,param_7,param_8);
        goto LAB_109b3505c;
      }
    }
    else {
      if (param_3 == 2) {
        uStack_500 = 0;
        uStack_4fc = 0;
        uStack_510._0_4_ = 0x1010000;
        uStack_508 = &uStack_170;
        auStack_90[0] = 0x2010000;
        uStack_80 = 0;
        uStack_98 = 0;
        auStack_a8[0] = 0x1010000;
        uStack_528 = *param_5;
        puStack_a0 = &uStack_110;
        puStack_88 = &uStack_230;
        FUN_109b32fd4(0,&uStack_510,auStack_90,auStack_a8,&uStack_528,param_6,param_7,param_8);
        uStack_500 = 0;
        uStack_4fc = 0;
        uStack_510._0_4_ = 0x1010000;
        auStack_90[0] = 0x2010000;
        uStack_80 = 0;
        uStack_98 = 0;
        auStack_a8[0] = 0x1010000;
        uStack_528 = *param_5;
        puStack_a0 = &uStack_110;
        puStack_88 = &uStack_230;
        uStack_508 = &uStack_230;
        FUN_109b32fd4(1,&uStack_510,auStack_90,auStack_a8,&uStack_528,param_6,param_7,param_8);
        goto LAB_109b3505c;
      }
      if (param_3 == 3) {
        uStack_500 = 0;
        uStack_4fc = 0;
        uStack_510._0_4_ = 0x1010000;
        uStack_508 = &uStack_170;
        auStack_90[0] = 0x2010000;
        uStack_80 = 0;
        uStack_98 = 0;
        auStack_a8[0] = 0x1010000;
        uStack_528 = *param_5;
        puStack_a0 = &uStack_110;
        puStack_88 = &uStack_230;
        FUN_109b32fd4(1,&uStack_510,auStack_90,auStack_a8,&uStack_528,param_6,param_7,param_8);
        uStack_500 = 0;
        uStack_4fc = 0;
        uStack_510._0_4_ = 0x1010000;
        auStack_90[0] = 0x2010000;
        uStack_80 = 0;
        uStack_98 = 0;
        auStack_a8[0] = 0x1010000;
        uStack_528 = *param_5;
        puStack_a0 = &uStack_110;
        puStack_88 = &uStack_230;
        uStack_508 = &uStack_230;
        FUN_109b32fd4(0,&uStack_510,auStack_90,auStack_a8,&uStack_528,param_6,param_7,param_8);
        goto LAB_109b3505c;
      }
    }
LAB_109b3543c:
    puVar5 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar5 = 1;
    uStack_510 = puVar5 + 1;
    uStack_508._0_4_ = 0x1f;
    uStack_508._4_4_ = 0;
    *(undefined1 *)((long)puVar5 + 0x23) = 0;
    *(undefined8 *)(puVar5 + 3) = 0x6f6c6f6870726f6d;
    *(undefined8 *)(puVar5 + 1) = 0x206e776f6e6b6e75;
    *(undefined8 *)((long)puVar5 + 0x1b) = 0x6e6f697461726570;
    *(undefined8 *)((long)puVar5 + 0x13) = 0x6f206c616369676f;
    FUN_109ac3188(0xfffffffb,&uStack_510,&UNK_10f59daa1,&UNK_10f59d909,0x78b);
LAB_109b354f8:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x109b354fc);
    (*pcVar3)();
  }
  if (param_3 < 6) {
    if (param_3 == 4) {
      uStack_500 = 0;
      uStack_4fc = 0;
      uStack_510._0_4_ = 0x1010000;
      auStack_90[0] = 0x2010000;
      puStack_88 = (undefined8 *)&uStack_1d0;
      uStack_80 = 0;
      uStack_98 = 0;
      auStack_a8[0] = 0x1010000;
      uStack_528 = *param_5;
      puStack_a0 = &uStack_110;
      uStack_508 = &uStack_170;
      FUN_109b32fd4(0,&uStack_510,auStack_90,auStack_a8,&uStack_528,param_6,param_7,param_8);
      uStack_500 = 0;
      uStack_4fc = 0;
      uStack_510._0_4_ = 0x1010000;
      auStack_90[0] = 0x2010000;
      uStack_80 = 0;
      uStack_98 = 0;
      auStack_a8[0] = 0x1010000;
      uStack_528 = *param_5;
      uVar11 = 1;
      puStack_a0 = &uStack_110;
      puStack_88 = &uStack_230;
      uStack_508 = &uStack_170;
      FUN_109b32fd4(1,&uStack_510,auStack_90,auStack_a8,&uStack_528,param_6,param_7,param_8);
      uStack_500 = 0;
      uStack_4fc = 0;
      uStack_510._0_4_ = 0x1010000;
      uStack_80 = 0;
      auStack_90[0] = 0x1010000;
      puStack_88 = (undefined8 *)&uStack_1d0;
      auStack_a8[0] = 0x2010000;
      uStack_98 = 0;
      puStack_a0 = &uStack_230;
      uStack_508 = &uStack_230;
      FUN_109a91d90();
      FUN_109a293c4(&uStack_510,auStack_90,auStack_a8,uVar11,0xffffffff,&PTR_DAT_1132e8c10,0,0);
      goto LAB_109b3505c;
    }
    if (param_3 != 5) goto LAB_109b3543c;
    if (uStack_160 != uStack_220) {
      if (uStack_1f8 != 0) {
        piVar10 = (int *)(uStack_1f8 + 0x14);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = *piVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (uStack_198 != 0) {
        piVar10 = (int *)(uStack_198 + 0x14);
        do {
          iVar4 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_1d0);
        }
      }
      uStack_198 = 0;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1c0 = 0;
      uStack_1bc = 0;
      uStack_1a8 = 0;
      uStack_1a4 = 0;
      uStack_1b0 = 0;
      uStack_1ac = 0;
      if (iStack_1cc < 1) {
LAB_109b34c10:
        uStack_1d0 = (undefined4)uStack_230;
        if (2 < uStack_230._4_4_) goto LAB_109b34c44;
        iStack_1cc = uStack_230._4_4_;
        uStack_1c8 = (undefined4)uStack_228;
        uStack_1c4 = (undefined4)(uStack_228 >> 0x20);
        *puStack_188 = *puStack_1e8;
        puStack_188[1] = puStack_1e8[1];
      }
      else {
        lVar9 = 0;
        do {
          puStack_190[lVar9] = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < iStack_1cc);
        if (iStack_1cc < 3) goto LAB_109b34c10;
LAB_109b34c44:
        uStack_1d0 = (undefined4)uStack_230;
        func_0x000109a84868(&uStack_1d0,&uStack_230);
      }
      uStack_1b8 = (undefined4)uStack_218;
      uStack_1b4 = (undefined4)(uStack_218 >> 0x20);
      uStack_1c0 = (undefined4)uStack_220;
      uStack_1bc = (undefined4)(uStack_220 >> 0x20);
      uStack_1a8 = (undefined4)uStack_208;
      uStack_1a4 = (undefined4)(uStack_208 >> 0x20);
      uStack_1b0 = (undefined4)uStack_210;
      uStack_1ac = (undefined4)(uStack_210 >> 0x20);
      uStack_198 = uStack_1f8;
      uStack_1a0 = (undefined4)uStack_200;
      uStack_19c = (undefined4)(uStack_200 >> 0x20);
    }
    uStack_500 = 0;
    uStack_4fc = 0;
    uStack_510._0_4_ = 0x1010000;
    uStack_508 = &uStack_170;
    auStack_90[0] = 0x2010000;
    uStack_80 = 0;
    uStack_98 = 0;
    auStack_a8[0] = 0x1010000;
    uStack_528 = *param_5;
    puStack_a0 = &uStack_110;
    puStack_88 = (undefined8 *)&uStack_1d0;
    FUN_109b32fd4(0,&uStack_510,auStack_90,auStack_a8,&uStack_528,param_6,param_7,param_8);
    uStack_500 = 0;
    uStack_4fc = 0;
    uStack_510._0_4_ = 0x1010000;
    auStack_90[0] = 0x2010000;
    uStack_80 = 0;
    uStack_98 = 0;
    auStack_a8[0] = 0x1010000;
    uStack_528 = *param_5;
    puStack_a0 = &uStack_110;
    puStack_88 = (undefined8 *)&uStack_1d0;
    uStack_508 = (undefined8 *)&uStack_1d0;
    FUN_109b32fd4(1,&uStack_510,auStack_90,auStack_a8,&uStack_528,param_6,param_7,param_8);
    FUN_109a7cd1c(&uStack_510,&uStack_170,&uStack_1d0);
    (**(code **)(*(long *)CONCAT44(uStack_510._4_4_,(undefined4)uStack_510) + 0x18))
              ((long *)CONCAT44(uStack_510._4_4_,(undefined4)uStack_510),&uStack_510,&uStack_230,
               0xffffffff);
  }
  else if (param_3 == 6) {
    if (uStack_160 != uStack_220) {
      if (uStack_1f8 != 0) {
        piVar10 = (int *)(uStack_1f8 + 0x14);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = *piVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (uStack_198 != 0) {
        piVar10 = (int *)(uStack_198 + 0x14);
        do {
          iVar4 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_1d0);
        }
      }
      uStack_198 = 0;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1c0 = 0;
      uStack_1bc = 0;
      uStack_1a8 = 0;
      uStack_1a4 = 0;
      uStack_1b0 = 0;
      uStack_1ac = 0;
      if (iStack_1cc < 1) {
LAB_109b34abc:
        uStack_1d0 = (undefined4)uStack_230;
        if (2 < uStack_230._4_4_) goto LAB_109b34af0;
        iStack_1cc = uStack_230._4_4_;
        uStack_1c8 = (undefined4)uStack_228;
        uStack_1c4 = (undefined4)(uStack_228 >> 0x20);
        *puStack_188 = *puStack_1e8;
        puStack_188[1] = puStack_1e8[1];
      }
      else {
        lVar9 = 0;
        do {
          puStack_190[lVar9] = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < iStack_1cc);
        if (iStack_1cc < 3) goto LAB_109b34abc;
LAB_109b34af0:
        uStack_1d0 = (undefined4)uStack_230;
        func_0x000109a84868(&uStack_1d0,&uStack_230);
      }
      uStack_1b8 = (undefined4)uStack_218;
      uStack_1b4 = (undefined4)(uStack_218 >> 0x20);
      uStack_1c0 = (undefined4)uStack_220;
      uStack_1bc = (undefined4)(uStack_220 >> 0x20);
      uStack_1a8 = (undefined4)uStack_208;
      uStack_1a4 = (undefined4)(uStack_208 >> 0x20);
      uStack_1b0 = (undefined4)uStack_210;
      uStack_1ac = (undefined4)(uStack_210 >> 0x20);
      uStack_198 = uStack_1f8;
      uStack_1a0 = (undefined4)uStack_200;
      uStack_19c = (undefined4)(uStack_200 >> 0x20);
    }
    uStack_500 = 0;
    uStack_4fc = 0;
    uStack_510._0_4_ = 0x1010000;
    uStack_508 = &uStack_170;
    auStack_90[0] = 0x2010000;
    uStack_80 = 0;
    uStack_98 = 0;
    auStack_a8[0] = 0x1010000;
    uStack_528 = *param_5;
    puStack_a0 = &uStack_110;
    puStack_88 = (undefined8 *)&uStack_1d0;
    FUN_109b32fd4(1,&uStack_510,auStack_90,auStack_a8,&uStack_528,param_6,param_7,param_8);
    uStack_500 = 0;
    uStack_4fc = 0;
    uStack_510._0_4_ = 0x1010000;
    auStack_90[0] = 0x2010000;
    uStack_80 = 0;
    uStack_98 = 0;
    auStack_a8[0] = 0x1010000;
    uStack_528 = *param_5;
    puStack_a0 = &uStack_110;
    puStack_88 = (undefined8 *)&uStack_1d0;
    uStack_508 = (undefined8 *)&uStack_1d0;
    FUN_109b32fd4(0,&uStack_510,auStack_90,auStack_a8,&uStack_528,param_6,param_7,param_8);
    FUN_109a7cd1c(&uStack_510,&uStack_1d0,&uStack_170);
    (**(code **)(*(long *)CONCAT44(uStack_510._4_4_,(undefined4)uStack_510) + 0x18))
              ((long *)CONCAT44(uStack_510._4_4_,(undefined4)uStack_510),&uStack_510,&uStack_230,
               0xffffffff);
  }
  else {
    if (param_3 != 7) goto LAB_109b3543c;
    if ((uStack_170 & 0xfff) != 0) {
      puVar5 = (undefined4 *)0x1c;
      func_0x000107c2ae8c();
      *puVar5 = 1;
      uStack_510 = puVar5 + 1;
      uStack_508._0_4_ = 0x15;
      uStack_508._4_4_ = 0;
      *(undefined1 *)((long)puVar5 + 0x19) = 0;
      *(undefined8 *)(puVar5 + 3) = 0x5643203d3d202928;
      *(undefined8 *)(puVar5 + 1) = 0x657079742e637273;
      *(undefined8 *)((long)puVar5 + 0x11) = 0x314355385f564320;
      FUN_109ac3188(0xffffff29,&uStack_510,&UNK_10f59daa1,&UNK_10f59d909,0x779);
      goto LAB_109b354f8;
    }
    FUN_109a7e87c(&uStack_510,0x3ff0000000000000,&uStack_110);
    (**(code **)(*(long *)CONCAT44(uStack_510._4_4_,(undefined4)uStack_510) + 0x18))
              ((long *)CONCAT44(uStack_510._4_4_,(undefined4)uStack_510),&uStack_510,auStack_290,
               0xffffffff);
    FUN_10918eb6c(&uStack_510);
    FUN_109a7e87c(&uStack_510,0xbff0000000000000,&uStack_110);
    (**(code **)(*(long *)CONCAT44(uStack_510._4_4_,(undefined4)uStack_510) + 0x18))
              ((long *)CONCAT44(uStack_510._4_4_,(undefined4)uStack_510),&uStack_510,auStack_2f0,
               0xffffffff);
    FUN_10918eb6c(&uStack_510);
    uStack_510._0_4_ = 0x1010000;
    uStack_508 = (undefined8 *)auStack_290;
    uStack_500 = 0;
    uStack_4fc = 0;
    iVar4 = (int)&uStack_510;
    FUN_109ab7930();
    if (iVar4 < 1) {
      if (uStack_138 != 0) {
        piVar10 = (int *)(uStack_138 + 0x14);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = *piVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (uStack_318 != 0) {
        piVar10 = (int *)(uStack_318 + 0x14);
        do {
          iVar4 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_350);
        }
      }
      puVar8 = puStack_128;
      uStack_318 = 0;
      uStack_338 = 0;
      uStack_334 = 0;
      uStack_340 = 0;
      uStack_33c = 0;
      uStack_328 = 0;
      uStack_324 = 0;
      uStack_330 = 0;
      uStack_32c = 0;
      if (iStack_34c < 1) {
LAB_109b34d5c:
        uStack_350 = (uint)uStack_170;
        if (2 < uStack_170._4_4_) goto LAB_109b34d90;
        iStack_34c = uStack_170._4_4_;
        uStack_348 = (undefined4)uStack_168;
        uStack_344 = (undefined4)(uStack_168 >> 0x20);
        *puStack_308 = *puStack_128;
        puStack_308[1] = puVar8[1];
      }
      else {
        lVar9 = 0;
        do {
          puStack_310[lVar9] = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < iStack_34c);
        if (iStack_34c < 3) goto LAB_109b34d5c;
LAB_109b34d90:
        uStack_350 = (uint)uStack_170;
        func_0x000109a84868(&uStack_350,&uStack_170);
      }
      uStack_338 = (undefined4)uStack_158;
      uStack_334 = (undefined4)(uStack_158 >> 0x20);
      uStack_340 = (undefined4)uStack_160;
      uStack_33c = (undefined4)(uStack_160 >> 0x20);
      uStack_328 = (undefined4)uStack_148;
      uStack_324 = (undefined4)(uStack_148 >> 0x20);
      uStack_330 = (undefined4)uStack_150;
      uStack_32c = (undefined4)(uStack_150 >> 0x20);
      uStack_318 = uStack_138;
      uStack_320 = (undefined4)uStack_140;
      uStack_31c = (undefined4)(uStack_140 >> 0x20);
    }
    else {
      uStack_500 = 0;
      uStack_4fc = 0;
      uStack_510._0_4_ = 0x1010000;
      uStack_508 = &uStack_170;
      auStack_90[0] = 0x2010000;
      puStack_88 = (undefined8 *)&uStack_350;
      uStack_80 = 0;
      uStack_98 = 0;
      auStack_a8[0] = 0x1010000;
      puStack_a0 = (undefined8 *)auStack_290;
      uStack_528 = *param_5;
      FUN_109b32fd4(0,&uStack_510,auStack_90,auStack_a8,&uStack_528,param_6,param_7,param_8);
    }
    uStack_510._0_4_ = 0x1010000;
    uStack_508 = (undefined8 *)auStack_2f0;
    uStack_500 = 0;
    uStack_4fc = 0;
    puVar8 = &uStack_510;
    FUN_109ab7930();
    if ((int)puVar8 < 1) {
      if (uStack_138 != 0) {
        piVar10 = (int *)(uStack_138 + 0x14);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = *piVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (uStack_378 != 0) {
        piVar10 = (int *)(uStack_378 + 0x14);
        do {
          iVar4 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_3b0);
        }
      }
      puVar8 = puStack_128;
      uStack_378 = 0;
      uStack_398 = 0;
      uStack_394 = 0;
      uStack_3a0 = 0;
      uStack_39c = 0;
      uStack_388 = 0;
      uStack_384 = 0;
      uStack_390 = 0;
      uStack_38c = 0;
      if (iStack_3ac < 1) {
LAB_109b34fd8:
        uStack_3b0 = (uint)uStack_170;
        if (2 < uStack_170._4_4_) goto LAB_109b3500c;
        iStack_3ac = uStack_170._4_4_;
        uStack_3a8 = (undefined4)uStack_168;
        uStack_3a4 = (undefined4)(uStack_168 >> 0x20);
        *puStack_368 = *puStack_128;
        puStack_368[1] = puVar8[1];
      }
      else {
        lVar9 = 0;
        do {
          puStack_370[lVar9] = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < iStack_3ac);
        if (iStack_3ac < 3) goto LAB_109b34fd8;
LAB_109b3500c:
        uStack_3b0 = (uint)uStack_170;
        func_0x000109a84868(&uStack_3b0,&uStack_170);
      }
      uStack_398 = (undefined4)uStack_158;
      uStack_394 = (undefined4)(uStack_158 >> 0x20);
      uStack_3a0 = (undefined4)uStack_160;
      uStack_39c = (undefined4)(uStack_160 >> 0x20);
      uStack_388 = (undefined4)uStack_148;
      uStack_384 = (undefined4)(uStack_148 >> 0x20);
      uStack_390 = (undefined4)uStack_150;
      uStack_38c = (undefined4)(uStack_150 >> 0x20);
      uStack_378 = uStack_138;
      uStack_380 = (undefined4)uStack_140;
      uStack_37c = (undefined4)(uStack_140 >> 0x20);
    }
    else {
      uStack_510._0_4_ = 0x42ff0000;
      uStack_508._4_4_ = 0;
      uStack_500 = 0;
      uStack_510._4_4_ = 0;
      uStack_508._0_4_ = 0;
      piStack_4d0 = (int *)&uStack_508;
      uStack_4f4 = 0;
      uStack_4f0 = 0;
      uStack_4fc = 0;
      uStack_4f8 = 0;
      uStack_4e4 = 0;
      uStack_4ec = 0;
      uStack_4e8 = 0;
      uStack_4d8 = 0;
      uStack_4e0 = 0;
      uStack_4dc = 0;
      uStack_4c0 = 0;
      uStack_4b8 = 0;
      auStack_90[0] = 0x1010000;
      puStack_88 = &uStack_170;
      uStack_80 = 0;
      auStack_a8[0] = 0x2010000;
      uStack_98 = 0;
      puStack_4c8 = &uStack_4c0;
      puStack_a0 = &uStack_510;
      FUN_109a91d90();
      uStack_528 = 0x109a29174;
      FUN_109a279fc(auStack_90,auStack_90,auStack_a8,puVar8,&uStack_528,1,0xc);
      uStack_80 = 0;
      auStack_90[0] = 0x1010000;
      auStack_a8[0] = 0x2010000;
      puStack_a0 = (undefined8 *)&uStack_3b0;
      uStack_98 = 0;
      uStack_518 = 0;
      uStack_528 = CONCAT44(uStack_528._4_4_,0x1010000);
      puStack_520 = auStack_2f0;
      auStack_78[0] = *param_5;
      puStack_88 = &uStack_510;
      FUN_109b32fd4(0,auStack_90,auStack_a8,&uStack_528,auStack_78,param_6,param_7,param_8);
      if (uStack_4d8 != 0) {
        piVar10 = (int *)(uStack_4d8 + 0x14);
        do {
          iVar4 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_510);
        }
      }
      uStack_4d8 = 0;
      uStack_4f8 = 0;
      uStack_4f4 = 0;
      uStack_500 = 0;
      uStack_4fc = 0;
      uStack_4e8 = 0;
      uStack_4e4 = 0;
      uStack_4f0 = 0;
      uStack_4ec = 0;
      if (0 < uStack_510._4_4_) {
        lVar9 = 0;
        do {
          piStack_4d0[lVar9] = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < uStack_510._4_4_);
      }
      uStack_508 = (undefined8 *)CONCAT44(uStack_508._4_4_,(int)uStack_508);
      if (puStack_4c8 != &uStack_4c0 && puStack_4c8 != (undefined8 *)0x0) {
        _free(puStack_4c8[-1]);
      }
    }
    FUN_109a7ef1c(&uStack_510,&uStack_350,&uStack_3b0);
    (**(code **)(*(long *)CONCAT44(uStack_510._4_4_,(undefined4)uStack_510) + 0x18))
              ((long *)CONCAT44(uStack_510._4_4_,(undefined4)uStack_510),&uStack_510,&uStack_230,
               0xffffffff);
  }
  FUN_10918eb6c(&uStack_510);
LAB_109b3505c:
  if (uStack_378 != 0) {
    piVar10 = (int *)(uStack_378 + 0x14);
    do {
      iVar4 = *piVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(&uStack_3b0);
    }
  }
  uStack_378 = 0;
  uStack_398 = 0;
  uStack_394 = 0;
  uStack_3a0 = 0;
  uStack_39c = 0;
  uStack_388 = 0;
  uStack_384 = 0;
  uStack_390 = 0;
  uStack_38c = 0;
  if (0 < iStack_3ac) {
    lVar9 = 0;
    do {
      puStack_370[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_3ac);
  }
  if (puStack_368 != &uStack_360 && puStack_368 != (undefined8 *)0x0) {
    _free(puStack_368[-1]);
  }
  if (uStack_318 != 0) {
    piVar10 = (int *)(uStack_318 + 0x14);
    do {
      iVar4 = *piVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(&uStack_350);
    }
  }
  uStack_318 = 0;
  uStack_338 = 0;
  uStack_334 = 0;
  uStack_340 = 0;
  uStack_33c = 0;
  uStack_328 = 0;
  uStack_324 = 0;
  uStack_330 = 0;
  uStack_32c = 0;
  if (0 < iStack_34c) {
    lVar9 = 0;
    do {
      puStack_310[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_34c);
  }
  if (puStack_308 != &uStack_300 && puStack_308 != (undefined8 *)0x0) {
    _free(puStack_308[-1]);
  }
  if (lStack_2b8 != 0) {
    piVar10 = (int *)(lStack_2b8 + 0x14);
    do {
      iVar4 = *piVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(auStack_2f0);
    }
  }
  lStack_2b8 = 0;
  uStack_2d8 = 0;
  uStack_2d4 = 0;
  uStack_2e0 = 0;
  uStack_2dc = 0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  if (0 < (int)auStack_2f0._4_4_) {
    lVar9 = 0;
    do {
      *(undefined4 *)(puStack_2b0 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)auStack_2f0._4_4_);
  }
  if (puStack_2a8 != &uStack_2a0 && puStack_2a8 != (undefined8 *)0x0) {
    _free(puStack_2a8[-1]);
  }
  if (lStack_258 != 0) {
    piVar10 = (int *)(lStack_258 + 0x14);
    do {
      iVar4 = *piVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(auStack_290);
    }
  }
  lStack_258 = 0;
  uStack_278 = 0;
  uStack_274 = 0;
  uStack_280 = 0;
  uStack_27c = 0;
  uStack_268 = 0;
  uStack_264 = 0;
  uStack_270 = 0;
  uStack_26c = 0;
  if (0 < (int)auStack_290._4_4_) {
    lVar9 = 0;
    do {
      *(undefined4 *)(puStack_250 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)auStack_290._4_4_);
  }
  if (puStack_248 != &uStack_240 && puStack_248 != (undefined8 *)0x0) {
    _free(puStack_248[-1]);
  }
  if (uStack_1f8 != 0) {
    piVar10 = (int *)(uStack_1f8 + 0x14);
    do {
      iVar4 = *piVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(&uStack_230);
    }
  }
  uStack_1f8 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  if (0 < uStack_230._4_4_) {
    lVar9 = 0;
    do {
      *(undefined4 *)(uStack_1f0 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_230._4_4_);
  }
  if (puStack_1e8 != &uStack_1e0 && puStack_1e8 != (undefined8 *)0x0) {
    _free(puStack_1e8[-1]);
  }
  if (uStack_198 != 0) {
    piVar10 = (int *)(uStack_198 + 0x14);
    do {
      iVar4 = *piVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(&uStack_1d0);
    }
  }
  uStack_198 = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  if (0 < iStack_1cc) {
    lVar9 = 0;
    do {
      puStack_190[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_1cc);
  }
  if (puStack_188 != &uStack_180 && puStack_188 != (undefined8 *)0x0) {
    _free(puStack_188[-1]);
  }
  if (uStack_138 != 0) {
    piVar10 = (int *)(uStack_138 + 0x14);
    do {
      iVar4 = *piVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(&uStack_170);
    }
  }
  uStack_138 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  if (0 < uStack_170._4_4_) {
    lVar9 = 0;
    do {
      *(undefined4 *)((long)puStack_130 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_170._4_4_);
  }
  if (puStack_128 != &uStack_120 && puStack_128 != (undefined8 *)0x0) {
    _free(puStack_128[-1]);
  }
  if (uStack_d8 != 0) {
    piVar10 = (int *)(uStack_d8 + 0x14);
    do {
      iVar4 = *piVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(&uStack_110);
    }
  }
  uStack_d8 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (0 < (int)uStack_110._4_4_) {
    lVar9 = 0;
    do {
      piStack_d0[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uStack_110._4_4_);
  }
  if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
    _free(puStack_c8[-1]);
  }
  return;
}



/* Entry: 109b35660; end: 109b3589b;  */

uint * FUN_109b35660(uint param_1,uint param_2,uint param_3,uint param_4,undefined8 param_5,
                    uint *param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  undefined1 auStack_60 [16];
  
  if (((((param_4 < param_2) && (-1 < (int)param_4)) && (param_3 < param_1)) &&
      ((0 < (int)param_1 && (0 < (int)param_2)))) &&
     ((-1 < (int)param_3 && ((uVar8 = (uint)param_5, uVar8 != 100 || (param_6 != (uint *)0x0)))))) {
    uVar12 = (ulong)(param_2 * param_1);
    puVar6 = (uint *)(long)(int)(param_2 * param_1 * 4 + 0x40);
    func_0x000107c2ae8c();
    *puVar6 = param_1;
    puVar6[1] = param_2;
    puVar6[2] = param_3;
    puVar6[3] = param_4;
    uVar9 = uVar8;
    if (1 < (int)uVar8) {
      uVar9 = 100;
    }
    puVar6[6] = uVar9;
    *(uint **)(puVar6 + 4) = puVar6 + 8;
    puVar10 = puVar6 + 8;
    if (uVar8 == 100) {
      do {
        *puVar10 = *param_6;
        uVar12 = uVar12 - 1;
        puVar10 = puVar10 + 1;
        param_6 = param_6 + 1;
      } while (uVar12 != 0);
    }
    else {
      uStack_c0 = param_3;
      uStack_bc = param_4;
      uStack_b8 = param_1;
      uStack_b4 = param_2;
      FUN_109b32bf8(&uStack_b0,param_5,&uStack_b8,&uStack_c0);
      puVar10 = *(uint **)(puVar6 + 4);
      do {
        *puVar10 = (uint)*pbStack_a0;
        uVar12 = uVar12 - 1;
        pbStack_a0 = pbStack_a0 + 1;
        puVar10 = puVar10 + 1;
      } while (uVar12 != 0);
      if (lStack_78 != 0) {
        piVar1 = (int *)(lStack_78 + 0x14);
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
          func_0x000109a848d4(&uStack_b0);
        }
      }
      lStack_78 = 0;
      uStack_98 = 0;
      pbStack_a0 = (byte *)0x0;
      uStack_88 = 0;
      uStack_90 = 0;
      if (0 < uStack_b0._4_4_) {
        lVar11 = 0;
        do {
          *(undefined4 *)(lStack_70 + lVar11 * 4) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < uStack_b0._4_4_);
      }
      if (puStack_68 != auStack_60 && puStack_68 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_68 + -8));
      }
    }
    return puVar6;
  }
  puVar7 = (undefined4 *)0x70;
  func_0x000107c2ae8c();
  *puVar7 = 1;
  uStack_b0 = puVar7 + 1;
  uStack_a8 = 0x6b;
  *(undefined8 *)(puVar7 + 0xf) = 0x2620292973776f72;
  *(undefined8 *)(puVar7 + 0xd) = 0x2c736c6f632c302c;
  *(undefined8 *)(puVar7 + 0x13) = 0x535f5643203d2120;
  *(undefined8 *)(puVar7 + 0x11) = 0x6570616873282026;
  *(undefined8 *)(puVar7 + 0x17) = 0x76207c7c204d4f54;
  *(undefined8 *)(puVar7 + 0x15) = 0x5355435f45504148;
  *(undefined8 *)((long)puVar7 + 0x67) = 0x2930203d21207365;
  *(undefined8 *)((long)puVar7 + 0x5f) = 0x756c6176207c7c20;
  *(undefined8 *)(puVar7 + 3) = 0x73776f7220262620;
  *(undefined8 *)(puVar7 + 1) = 0x30203e20736c6f63;
  *(undefined8 *)(puVar7 + 7) = 0x692e726f68636e61;
  *(undefined8 *)(puVar7 + 5) = 0x2026262030203e20;
  *(undefined1 *)((long)puVar7 + 0x6f) = 0;
  *(undefined8 *)(puVar7 + 0xb) = 0x3028746365523a3a;
  *(undefined8 *)(puVar7 + 9) = 0x766328656469736e;
  FUN_109ac3188(0xffffff29,&uStack_b0,&UNK_10f59db3a,&UNK_10f59d909,0x797);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109b3586c);
  (*pcVar5)();
}



/* Entry: 109b3589c; end: 109b35ccf;  */

void FUN_109b3589c(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined4 auStack_1e0 [2];
  uint *puStack_1d8;
  undefined8 uStack_1d0;
  undefined4 auStack_1c8 [2];
  uint *puStack_1c0;
  undefined8 uStack_1b8;
  undefined4 auStack_1b0 [2];
  uint *puStack_1a8;
  undefined8 uStack_1a0;
  uint uStack_198;
  undefined8 uStack_194;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  long lStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  uint uStack_138;
  int iStack_134;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_100;
  int *piStack_f8;
  undefined1 *puStack_f0;
  undefined1 auStack_e8 [16];
  uint uStack_d8;
  int iStack_d4;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a0;
  int *piStack_98;
  undefined1 *puStack_90;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109a85f44(&uStack_d8,param_1,0,1,0,0);
  FUN_109a85f44(&uStack_138,param_2,0,1,0,0);
  uStack_198 = 0x42ff0000;
  lStack_158 = (long)&uStack_194 + 4;
  lStack_160 = 0;
  uStack_164 = 0;
  uStack_16c = 0;
  uStack_168 = 0;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_17c = 0;
  uStack_178 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_194 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  puStack_150 = &uStack_148;
  if ((piStack_98[1] != piStack_f8[1] || *piStack_98 != *piStack_f8) ||
     (((uStack_138 ^ uStack_d8) & 0xfff) != 0)) {
    puVar7 = (undefined4 *)0x3c;
    func_0x000107c2ae8c();
    *puVar7 = 1;
    puStack_70 = puVar7 + 1;
    uStack_68 = 0x34;
    *(undefined8 *)(puVar7 + 3) = 0x7364203d3d202928;
    *(undefined8 *)(puVar7 + 1) = 0x657a69732e637273;
    puVar7[0xd] = 0x29286570;
    *(undefined1 *)(puVar7 + 0xe) = 0;
    *(undefined8 *)(puVar7 + 7) = 0x2e63727320262620;
    *(undefined8 *)(puVar7 + 5) = 0x2928657a69732e74;
    *(undefined8 *)(puVar7 + 0xb) = 0x79742e747364203d;
    *(undefined8 *)(puVar7 + 9) = 0x3d20292865707974;
    FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f59db8c,&UNK_10f59d909,0x7dd);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109b35c50);
    (*pcVar5)();
  }
  if (param_3 == (int *)0x0) {
    uStack_170 = 0;
    uStack_16c = 0;
    uStack_178 = 0;
    uStack_174 = 0;
    uStack_180 = 0;
    uStack_17c = 0;
    uStack_188 = 0;
    uStack_184 = 0;
    uVar11 = 0x100000001;
  }
  else {
    uVar11 = *(undefined8 *)(param_3 + 2);
    puStack_70 = (undefined4 *)NEON_rev64(*(undefined8 *)param_3,4);
    FUN_109a83fd0(&uStack_198,2,&puStack_70,0);
    iVar8 = *param_3;
    iVar2 = param_3[1];
    if (0 < iVar2 * iVar8) {
      uVar10 = 0;
      do {
        *(bool *)(CONCAT44(uStack_184,uStack_188) + uVar10) =
             *(int *)(*(long *)(param_3 + 4) + uVar10 * 4) != 0;
        uVar10 = uVar10 + 1;
      } while ((uint)(iVar2 * iVar8) != uVar10);
    }
  }
  uStack_1a0 = 0;
  auStack_1b0[0] = 0x1010000;
  puStack_1a8 = &uStack_d8;
  auStack_1c8[0] = 0x2010000;
  puStack_1c0 = &uStack_138;
  uStack_1b8 = 0;
  uStack_1d0 = 0;
  auStack_1e0[0] = 0x1010000;
  puStack_1d8 = &uStack_198;
  uStack_68 = 0x7fefffffffffffff;
  puStack_70 = (undefined4 *)0x7fefffffffffffff;
  uStack_58 = 0x7fefffffffffffff;
  uStack_60 = 0x7fefffffffffffff;
  puVar7 = auStack_1b0;
  puVar6 = (uint *)0x1;
  uStack_78 = uVar11;
  FUN_109b32fd4(1,puVar7,auStack_1c8,auStack_1e0,&uStack_78,param_4,1,&puStack_70);
  iVar8 = (int)puVar7;
  if (lStack_160 != 0) {
    piVar1 = (int *)(lStack_160 + 0x14);
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
      puVar6 = &uStack_198;
      func_0x000109a848d4(puVar6);
    }
  }
  lStack_160 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  if (0 < (int)uStack_194) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_158 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uStack_194);
  }
  if (puStack_150 != &uStack_148 && puStack_150 != (undefined8 *)0x0) {
    puVar6 = (uint *)puStack_150[-1];
    _free(puVar6);
  }
  if (lStack_100 != 0) {
    piVar1 = (int *)(lStack_100 + 0x14);
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
      puVar6 = &uStack_138;
      func_0x000109a848d4(puVar6);
    }
  }
  lStack_100 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  if (0 < iStack_134) {
    lVar9 = 0;
    do {
      piStack_f8[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_134);
  }
  if (puStack_f0 != auStack_e8 && puStack_f0 != (undefined1 *)0x0) {
    puVar6 = *(uint **)(puStack_f0 + -8);
    _free(puVar6);
  }
  if (lStack_a0 != 0) {
    piVar1 = (int *)(lStack_a0 + 0x14);
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
      puVar6 = &uStack_d8;
      func_0x000109a848d4(puVar6);
    }
  }
  lStack_a0 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  if (0 < iStack_d4) {
    lVar9 = 0;
    do {
      piStack_98[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_d4);
  }
  if (puStack_90 != auStack_88 && puStack_90 != (undefined1 *)0x0) {
    puVar6 = *(uint **)(puStack_90 + -8);
    _free(puVar6);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (iVar8 != 0) {
    func_0x000104bd46a0(puVar6);
    func_0x00010567aa40(&uStack_198);
    func_0x00010567aa40(&uStack_138);
    func_0x00010567aa40(&uStack_d8);
  }
  do {
    __Unwind_Resume(puVar6);
  } while( true );
}



/* Entry: 109b35cd0; end: 109b35cd3;  */

undefined8 * FUN_109b35cd0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b26cf0;
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
    lVar5 = 0;
    lVar7 = param_1[0x23];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xdc));
  }
  puVar6 = (undefined8 *)param_1[0x24];
  if (puVar6 != param_1 + 0x25 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x14] != 0) {
    piVar1 = (int *)(param_1[0x14] + 0x14);
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
      func_0x000109a848d4(param_1 + 0xd);
    }
  }
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar5 = 0;
    lVar7 = param_1[0x15];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x6c));
  }
  puVar6 = (undefined8 *)param_1[0x16];
  if (puVar6 != param_1 + 0x17 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
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
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b35cd4; end: 109b35ce7;  */

void FUN_109b35cd4(void)

{
  FUN_109b35f90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b35ce8; end: 109b35f8f;  */

void FUN_109b35ce8(long param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  long *plStack_108;
  int iStack_100;
  int iStack_fc;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [4];
  int iStack_9c;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  long lStack_60;
  undefined1 *puStack_58;
  undefined1 auStack_50 [16];
  
  iVar8 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 200);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = (iVar8 * *param_2) / iVar3;
  }
  iVar2 = iVar8;
  if (iVar4 <= iVar8) {
    iVar2 = iVar4;
  }
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = (param_2[1] * iVar8) / iVar3;
  }
  if (iVar4 <= iVar8) {
    iVar8 = iVar4;
  }
  uStack_130 = 0x7fffffff80000000;
  iStack_100 = iVar2;
  iStack_fc = iVar8;
  FUN_109a84930(auStack_a0,param_1 + 8,&iStack_100,&uStack_130);
  uStack_110 = 0x7fffffff80000000;
  uStack_130._0_4_ = iVar2;
  uStack_130._4_4_ = iVar8;
  FUN_109a84930(&iStack_100,param_1 + 0x68,&uStack_130,&uStack_110);
  lStack_128 = param_1 + 0xd8;
  uStack_120 = 0;
  uStack_130 = CONCAT44(uStack_130._4_4_,0x1010000);
  uStack_138 = *(undefined8 *)(param_1 + 0x138);
  FUN_109b308b4(&uStack_110,*(undefined4 *)(param_1 + 0xd0),*(uint *)(param_1 + 8) & 0xfff,
                &uStack_130,&uStack_138,*(undefined4 *)(param_1 + 0x140),
                *(undefined4 *)(param_1 + 0x144),param_1 + 0x148);
  lStack_128 = 0xffffffffffffffff;
  uStack_130 = 0;
  uStack_138 = 0;
  (**(code **)(*plStack_108 + 0x28))(plStack_108,auStack_a0,&iStack_100,&uStack_130,&uStack_138,0);
  if (1 < *(int *)(param_1 + 0xcc)) {
    iVar8 = 1;
    do {
      lStack_128 = 0xffffffffffffffff;
      uStack_130 = 0;
      uStack_138 = 0;
      (**(code **)(*plStack_108 + 0x28))
                (plStack_108,&iStack_100,&iStack_100,&uStack_130,&uStack_138,0);
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0xcc));
  }
  FUN_109aed568(&uStack_110);
  if (lStack_c8 != 0) {
    piVar1 = (int *)(lStack_c8 + 0x14);
    do {
      iVar8 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      func_0x000109a848d4(&iStack_100);
    }
  }
  lStack_c8 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (0 < iStack_fc) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_c0 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iStack_fc);
  }
  if (puStack_b8 != auStack_b0 && puStack_b8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_b8 + -8));
  }
  if (lStack_68 != 0) {
    piVar1 = (int *)(lStack_68 + 0x14);
    do {
      iVar8 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      func_0x000109a848d4(auStack_a0);
    }
  }
  lStack_68 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (0 < iStack_9c) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_60 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iStack_9c);
  }
  if (puStack_58 != auStack_50 && puStack_58 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_58 + -8));
  }
  return;
}



/* Entry: 109b35f90; end: 109b3613b;  */

undefined8 * FUN_109b35f90(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b26cf0;
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
    lVar5 = 0;
    lVar7 = param_1[0x23];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xdc));
  }
  puVar6 = (undefined8 *)param_1[0x24];
  if (puVar6 != param_1 + 0x25 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x14] != 0) {
    piVar1 = (int *)(param_1[0x14] + 0x14);
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
      func_0x000109a848d4(param_1 + 0xd);
    }
  }
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar5 = 0;
    lVar7 = param_1[0x15];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x6c));
  }
  puVar6 = (undefined8 *)param_1[0x16];
  if (puVar6 != param_1 + 0x17 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
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
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b3613c; end: 109b36143;  */

void FUN_109b3613c(void)

{
  return;
}



/* Entry: 109b36144; end: 109b362bb;  */

void FUN_109b36144(long param_1,undefined1 *param_2,undefined1 *param_3,int param_4,uint param_5)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  
  uVar4 = *(int *)(param_1 + 8) * param_5;
  uVar5 = param_5 * param_4;
  uVar11 = (ulong)uVar5;
  if (uVar4 == param_5) {
    if (0 < (int)uVar5) {
      do {
        *param_3 = *param_2;
        uVar11 = uVar11 - 1;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
      } while (uVar11 != 0);
    }
  }
  else if (0 < (int)param_5) {
    uVar12 = 0;
    uVar11 = (ulong)(param_5 * 2);
    iVar6 = uVar5 + param_5 * -2;
    pbVar13 = param_2 + uVar11;
    uVar14 = (ulong)param_5;
    do {
      if (iVar6 < 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        pbVar7 = pbVar13;
        do {
          pbVar2 = param_2 + lVar15;
          bVar8 = pbVar2[uVar14];
          uVar1 = param_5 * 2;
          uVar10 = uVar11;
          pbVar3 = pbVar7;
          while ((int)uVar1 < (int)uVar4) {
            bVar8 = bVar8 - (&UNK_10e03502f)[((ulong)bVar8 | 0x100) - (ulong)*pbVar3];
            uVar1 = (int)uVar10 + param_5;
            uVar10 = (ulong)uVar1;
            pbVar3 = pbVar3 + uVar14;
          }
          param_3[lVar15] = bVar8 - (&UNK_10e03502f)[((ulong)bVar8 | 0x100) - (ulong)*pbVar2];
          (param_3 + lVar15)[uVar14] =
               bVar8 - (&UNK_10e03502f)[((ulong)bVar8 | 0x100) - (ulong)pbVar2[(int)uVar1]];
          lVar15 = lVar15 + uVar11;
          pbVar7 = pbVar7 + uVar11;
        } while ((int)lVar15 <= iVar6);
      }
      if ((int)lVar15 < (int)uVar5) {
        lVar15 = (long)(int)lVar15;
        do {
          bVar8 = param_2[lVar15];
          if ((int)param_5 < (int)uVar4) {
            lVar9 = 0;
            do {
              bVar8 = bVar8 - (&UNK_10e03502f)
                              [((ulong)bVar8 | 0x100) -
                               (ulong)(byte)param_2[lVar9 + lVar15 + uVar14]];
              lVar9 = lVar9 + uVar14;
            } while ((int)(param_5 + (int)lVar9) < (int)uVar4);
          }
          param_3[lVar15] = bVar8;
          lVar15 = lVar15 + uVar14;
        } while (lVar15 < (int)uVar5);
      }
      uVar12 = uVar12 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      pbVar13 = pbVar13 + 1;
    } while (uVar12 != param_5);
  }
  return;
}



/* Entry: 109b362bc; end: 109b362c3;  */

void FUN_109b362bc(void)

{
  return;
}



/* Entry: 109b362c4; end: 109b362ff;  */

void FUN_109b362c4(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b362fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b36300; end: 109b36307;  */

void FUN_109b36300(void)

{
  return;
}



/* Entry: 109b36308; end: 109b36473;  */

void FUN_109b36308(long param_1,undefined2 *param_2,undefined2 *param_3,int param_4,uint param_5)

{
  uint uVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  undefined2 *puVar9;
  int iVar10;
  long lVar11;
  ushort *puVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ushort *puVar16;
  ulong uVar17;
  
  uVar5 = *(int *)(param_1 + 8) * param_5;
  uVar6 = param_5 * param_4;
  uVar13 = (ulong)uVar6;
  if (uVar5 == param_5) {
    if (0 < (int)uVar6) {
      do {
        *param_3 = *param_2;
        uVar13 = uVar13 - 1;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
      } while (uVar13 != 0);
    }
  }
  else if (0 < (int)param_5) {
    uVar14 = 0;
    uVar13 = (ulong)(param_5 * 2);
    iVar7 = uVar6 + param_5 * -2;
    uVar15 = (ulong)param_5;
    puVar16 = param_2 + uVar13;
    puVar9 = param_2 + param_5;
    do {
      if (iVar7 < 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = 0;
        puVar12 = puVar16;
        do {
          puVar2 = param_2 + lVar11;
          uVar1 = param_5 * 2;
          uVar17 = uVar13;
          uVar8 = puVar2[uVar15];
          puVar3 = puVar12;
          while ((int)uVar1 < (int)uVar5) {
            uVar4 = *puVar3;
            if (uVar8 <= *puVar3) {
              uVar4 = uVar8;
            }
            uVar1 = (int)uVar17 + param_5;
            uVar17 = (ulong)uVar1;
            puVar3 = puVar3 + param_5;
            uVar8 = uVar4;
          }
          uVar4 = *puVar2;
          if (uVar8 <= *puVar2) {
            uVar4 = uVar8;
          }
          param_3[lVar11] = uVar4;
          uVar4 = puVar2[(int)uVar1];
          if (uVar8 <= puVar2[(int)uVar1]) {
            uVar4 = uVar8;
          }
          (param_3 + lVar11)[uVar15] = uVar4;
          lVar11 = lVar11 + uVar13;
          puVar12 = puVar12 + uVar13;
        } while ((int)lVar11 <= iVar7);
      }
      iVar10 = (int)lVar11;
      if (iVar10 < (int)uVar6) {
        lVar11 = (long)iVar10;
        puVar12 = puVar9 + iVar10;
        do {
          uVar8 = param_2[lVar11];
          puVar2 = puVar12;
          for (uVar1 = param_5; (int)uVar1 < (int)uVar5; uVar1 = uVar1 + param_5) {
            uVar4 = *puVar2;
            if (uVar8 <= *puVar2) {
              uVar4 = uVar8;
            }
            puVar2 = puVar2 + param_5;
            uVar8 = uVar4;
          }
          param_3[lVar11] = uVar8;
          lVar11 = lVar11 + uVar15;
          puVar12 = puVar12 + param_5;
        } while (lVar11 < (int)uVar6);
      }
      uVar14 = uVar14 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      puVar16 = puVar16 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar14 != param_5);
  }
  return;
}



/* Entry: 109b36474; end: 109b3647b;  */

void FUN_109b36474(void)

{
  return;
}



/* Entry: 109b3647c; end: 109b364b7;  */

void FUN_109b3647c(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b364b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b364b8; end: 109b364bf;  */

void FUN_109b364b8(void)

{
  return;
}



/* Entry: 109b364c0; end: 109b3662f;  */

void FUN_109b364c0(long param_1,undefined2 *param_2,undefined2 *param_3,int param_4,uint param_5)

{
  uint uVar1;
  short *psVar2;
  short *psVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  undefined2 *puVar9;
  int iVar10;
  long lVar11;
  short *psVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  short *psVar16;
  ulong uVar17;
  
  uVar5 = *(int *)(param_1 + 8) * param_5;
  uVar6 = param_5 * param_4;
  uVar13 = (ulong)uVar6;
  if (uVar5 == param_5) {
    if (0 < (int)uVar6) {
      do {
        *param_3 = *param_2;
        uVar13 = uVar13 - 1;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
      } while (uVar13 != 0);
    }
  }
  else if (0 < (int)param_5) {
    uVar14 = 0;
    uVar13 = (ulong)(param_5 * 2);
    iVar7 = uVar6 + param_5 * -2;
    uVar15 = (ulong)param_5;
    psVar16 = param_2 + uVar13;
    puVar9 = param_2 + param_5;
    do {
      if (iVar7 < 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = 0;
        psVar12 = psVar16;
        do {
          psVar2 = param_2 + lVar11;
          uVar1 = param_5 * 2;
          uVar17 = uVar13;
          sVar8 = psVar2[uVar15];
          psVar3 = psVar12;
          while ((int)uVar1 < (int)uVar5) {
            sVar4 = *psVar3;
            if (sVar8 <= *psVar3) {
              sVar4 = sVar8;
            }
            uVar1 = (int)uVar17 + param_5;
            uVar17 = (ulong)uVar1;
            psVar3 = psVar3 + param_5;
            sVar8 = sVar4;
          }
          sVar4 = *psVar2;
          if (sVar8 <= *psVar2) {
            sVar4 = sVar8;
          }
          param_3[lVar11] = sVar4;
          sVar4 = psVar2[(int)uVar1];
          if (sVar8 <= psVar2[(int)uVar1]) {
            sVar4 = sVar8;
          }
          (param_3 + lVar11)[uVar15] = sVar4;
          lVar11 = lVar11 + uVar13;
          psVar12 = psVar12 + uVar13;
        } while ((int)lVar11 <= iVar7);
      }
      iVar10 = (int)lVar11;
      if (iVar10 < (int)uVar6) {
        lVar11 = (long)iVar10;
        psVar12 = puVar9 + iVar10;
        do {
          sVar8 = param_2[lVar11];
          psVar2 = psVar12;
          for (uVar1 = param_5; (int)uVar1 < (int)uVar5; uVar1 = uVar1 + param_5) {
            sVar4 = *psVar2;
            if (sVar8 <= *psVar2) {
              sVar4 = sVar8;
            }
            psVar2 = psVar2 + param_5;
            sVar8 = sVar4;
          }
          param_3[lVar11] = sVar8;
          lVar11 = lVar11 + uVar15;
          psVar12 = psVar12 + param_5;
        } while (lVar11 < (int)uVar6);
      }
      uVar14 = uVar14 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      psVar16 = psVar16 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar14 != param_5);
  }
  return;
}



/* Entry: 109b36630; end: 109b36637;  */

void FUN_109b36630(void)

{
  return;
}



/* Entry: 109b36638; end: 109b36673;  */

void FUN_109b36638(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b36670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b36674; end: 109b3667b;  */

void FUN_109b36674(void)

{
  return;
}



/* Entry: 109b3667c; end: 109b367d7;  */

void FUN_109b3667c(long param_1,undefined4 *param_2,undefined4 *param_3,int param_4,uint param_5)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  undefined4 *puVar8;
  int iVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  float *pfVar16;
  float fVar17;
  
  uVar4 = *(int *)(param_1 + 8) * param_5;
  uVar5 = param_5 * param_4;
  uVar13 = (ulong)uVar5;
  if (uVar4 == param_5) {
    if (0 < (int)uVar5) {
      do {
        *param_3 = *param_2;
        uVar13 = uVar13 - 1;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
      } while (uVar13 != 0);
    }
  }
  else if (0 < (int)param_5) {
    uVar14 = 0;
    uVar13 = (ulong)(param_5 * 2);
    iVar6 = uVar5 + param_5 * -2;
    uVar15 = (ulong)param_5;
    pfVar16 = (float *)(param_2 + uVar13);
    puVar8 = param_2 + param_5;
    do {
      if (iVar6 < 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        pfVar11 = pfVar16;
        do {
          pfVar2 = (float *)(param_2 + lVar10);
          uVar1 = param_5 * 2;
          uVar12 = uVar13;
          fVar7 = pfVar2[uVar15];
          pfVar3 = pfVar11;
          while ((int)uVar1 < (int)uVar4) {
            fVar17 = *pfVar3;
            if (fVar7 <= *pfVar3) {
              fVar17 = fVar7;
            }
            uVar1 = (int)uVar12 + param_5;
            uVar12 = (ulong)uVar1;
            pfVar3 = pfVar3 + param_5;
            fVar7 = fVar17;
          }
          fVar17 = *pfVar2;
          if (fVar7 <= *pfVar2) {
            fVar17 = fVar7;
          }
          param_3[lVar10] = fVar17;
          fVar17 = pfVar2[(int)uVar1];
          if (fVar7 <= pfVar2[(int)uVar1]) {
            fVar17 = fVar7;
          }
          (param_3 + lVar10)[uVar15] = fVar17;
          lVar10 = lVar10 + uVar13;
          pfVar11 = pfVar11 + uVar13;
        } while ((int)lVar10 <= iVar6);
      }
      iVar9 = (int)lVar10;
      if (iVar9 < (int)uVar5) {
        lVar10 = (long)iVar9;
        pfVar11 = (float *)(puVar8 + iVar9);
        do {
          fVar7 = (float)param_2[lVar10];
          pfVar2 = pfVar11;
          for (uVar1 = param_5; (int)uVar1 < (int)uVar4; uVar1 = uVar1 + param_5) {
            fVar17 = *pfVar2;
            if (fVar7 <= *pfVar2) {
              fVar17 = fVar7;
            }
            pfVar2 = pfVar2 + param_5;
            fVar7 = fVar17;
          }
          param_3[lVar10] = fVar7;
          lVar10 = lVar10 + uVar15;
          pfVar11 = pfVar11 + param_5;
        } while (lVar10 < (int)uVar5);
      }
      uVar14 = uVar14 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      pfVar16 = pfVar16 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar14 != param_5);
  }
  return;
}



/* Entry: 109b367d8; end: 109b367df;  */

void FUN_109b367d8(void)

{
  return;
}



/* Entry: 109b367e0; end: 109b3681b;  */

void FUN_109b367e0(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b36818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b3681c; end: 109b36823;  */

void FUN_109b3681c(void)

{
  return;
}



/* Entry: 109b36824; end: 109b3697f;  */

void FUN_109b36824(long param_1,undefined8 *param_2,undefined8 *param_3,int param_4,uint param_5)

{
  uint uVar1;
  double *pdVar2;
  double *pdVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  double dVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  double *pdVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  double *pdVar16;
  double dVar17;
  
  uVar4 = *(int *)(param_1 + 8) * param_5;
  uVar5 = param_5 * param_4;
  uVar13 = (ulong)uVar5;
  if (uVar4 == param_5) {
    if (0 < (int)uVar5) {
      do {
        *param_3 = *param_2;
        uVar13 = uVar13 - 1;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
      } while (uVar13 != 0);
    }
  }
  else if (0 < (int)param_5) {
    uVar14 = 0;
    uVar13 = (ulong)(param_5 * 2);
    iVar6 = uVar5 + param_5 * -2;
    uVar15 = (ulong)param_5;
    pdVar16 = (double *)(param_2 + uVar13);
    puVar8 = param_2 + param_5;
    do {
      if (iVar6 < 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        pdVar11 = pdVar16;
        do {
          pdVar2 = (double *)(param_2 + lVar10);
          uVar1 = param_5 * 2;
          uVar12 = uVar13;
          dVar7 = pdVar2[uVar15];
          pdVar3 = pdVar11;
          while ((int)uVar1 < (int)uVar4) {
            dVar17 = *pdVar3;
            if (dVar7 <= *pdVar3) {
              dVar17 = dVar7;
            }
            uVar1 = (int)uVar12 + param_5;
            uVar12 = (ulong)uVar1;
            pdVar3 = pdVar3 + param_5;
            dVar7 = dVar17;
          }
          dVar17 = *pdVar2;
          if (dVar7 <= *pdVar2) {
            dVar17 = dVar7;
          }
          param_3[lVar10] = dVar17;
          dVar17 = pdVar2[(int)uVar1];
          if (dVar7 <= pdVar2[(int)uVar1]) {
            dVar17 = dVar7;
          }
          (param_3 + lVar10)[uVar15] = dVar17;
          lVar10 = lVar10 + uVar13;
          pdVar11 = pdVar11 + uVar13;
        } while ((int)lVar10 <= iVar6);
      }
      iVar9 = (int)lVar10;
      if (iVar9 < (int)uVar5) {
        lVar10 = (long)iVar9;
        pdVar11 = (double *)(puVar8 + iVar9);
        do {
          dVar7 = (double)param_2[lVar10];
          pdVar2 = pdVar11;
          for (uVar1 = param_5; (int)uVar1 < (int)uVar4; uVar1 = uVar1 + param_5) {
            dVar17 = *pdVar2;
            if (dVar7 <= *pdVar2) {
              dVar17 = dVar7;
            }
            pdVar2 = pdVar2 + param_5;
            dVar7 = dVar17;
          }
          param_3[lVar10] = dVar7;
          lVar10 = lVar10 + uVar15;
          pdVar11 = pdVar11 + param_5;
        } while (lVar10 < (int)uVar5);
      }
      uVar14 = uVar14 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      pdVar16 = pdVar16 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar14 != param_5);
  }
  return;
}



/* Entry: 109b36980; end: 109b36987;  */

void FUN_109b36980(void)

{
  return;
}



/* Entry: 109b36988; end: 109b369c3;  */

void FUN_109b36988(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b369c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b369c4; end: 109b369cb;  */

void FUN_109b369c4(void)

{
  return;
}



/* Entry: 109b369cc; end: 109b36b37;  */

void FUN_109b369cc(long param_1,undefined1 *param_2,undefined1 *param_3,int param_4,uint param_5)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  
  uVar4 = *(int *)(param_1 + 8) * param_5;
  uVar5 = param_5 * param_4;
  uVar11 = (ulong)uVar5;
  if (uVar4 == param_5) {
    if (0 < (int)uVar5) {
      do {
        *param_3 = *param_2;
        uVar11 = uVar11 - 1;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
      } while (uVar11 != 0);
    }
  }
  else if (0 < (int)param_5) {
    uVar12 = 0;
    uVar11 = (ulong)(param_5 * 2);
    iVar6 = uVar5 + param_5 * -2;
    pbVar13 = param_2 + uVar11;
    uVar14 = (ulong)param_5;
    do {
      if (iVar6 < 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        pbVar7 = pbVar13;
        do {
          pbVar2 = param_2 + lVar15;
          bVar8 = pbVar2[uVar14];
          uVar1 = param_5 * 2;
          uVar10 = uVar11;
          pbVar3 = pbVar7;
          while ((int)uVar1 < (int)uVar4) {
            bVar8 = (&UNK_10e03512f)[(ulong)*pbVar3 - (ulong)bVar8] + bVar8;
            uVar1 = (int)uVar10 + param_5;
            uVar10 = (ulong)uVar1;
            pbVar3 = pbVar3 + uVar14;
          }
          param_3[lVar15] = (&UNK_10e03502f)[((ulong)*pbVar2 - (ulong)bVar8) + 0x100] + bVar8;
          (param_3 + lVar15)[uVar14] =
               (&UNK_10e03502f)[((ulong)pbVar2[(int)uVar1] - (ulong)bVar8) + 0x100] + bVar8;
          lVar15 = lVar15 + uVar11;
          pbVar7 = pbVar7 + uVar11;
        } while ((int)lVar15 <= iVar6);
      }
      if ((int)lVar15 < (int)uVar5) {
        lVar15 = (long)(int)lVar15;
        do {
          bVar8 = param_2[lVar15];
          if ((int)param_5 < (int)uVar4) {
            lVar9 = 0;
            do {
              bVar8 = (&UNK_10e03512f)[(ulong)(byte)param_2[lVar9 + lVar15 + uVar14] - (ulong)bVar8]
                      + bVar8;
              lVar9 = lVar9 + uVar14;
            } while ((int)(param_5 + (int)lVar9) < (int)uVar4);
          }
          param_3[lVar15] = bVar8;
          lVar15 = lVar15 + uVar14;
        } while (lVar15 < (int)uVar5);
      }
      uVar12 = uVar12 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      pbVar13 = pbVar13 + 1;
    } while (uVar12 != param_5);
  }
  return;
}



/* Entry: 109b36b38; end: 109b36b3f;  */

void FUN_109b36b38(void)

{
  return;
}



/* Entry: 109b36b40; end: 109b36b7b;  */

void FUN_109b36b40(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b36b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b36b7c; end: 109b36b83;  */

void FUN_109b36b7c(void)

{
  return;
}



/* Entry: 109b36b84; end: 109b36cef;  */

void FUN_109b36b84(long param_1,undefined2 *param_2,undefined2 *param_3,int param_4,uint param_5)

{
  uint uVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined2 *puVar9;
  int iVar10;
  long lVar11;
  ushort *puVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ushort *puVar16;
  ulong uVar17;
  
  uVar6 = *(int *)(param_1 + 8) * param_5;
  uVar7 = param_5 * param_4;
  uVar13 = (ulong)uVar7;
  if (uVar6 == param_5) {
    if (0 < (int)uVar7) {
      do {
        *param_3 = *param_2;
        uVar13 = uVar13 - 1;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
      } while (uVar13 != 0);
    }
  }
  else if (0 < (int)param_5) {
    uVar14 = 0;
    uVar13 = (ulong)(param_5 * 2);
    iVar8 = uVar7 + param_5 * -2;
    uVar15 = (ulong)param_5;
    puVar16 = param_2 + uVar13;
    puVar9 = param_2 + param_5;
    do {
      if (iVar8 < 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = 0;
        puVar12 = puVar16;
        do {
          puVar2 = param_2 + lVar11;
          uVar5 = puVar2[uVar15];
          uVar1 = param_5 * 2;
          uVar17 = uVar13;
          puVar3 = puVar12;
          while ((int)uVar1 < (int)uVar6) {
            if (uVar5 <= *puVar3) {
              uVar5 = *puVar3;
            }
            uVar1 = (int)uVar17 + param_5;
            uVar17 = (ulong)uVar1;
            puVar3 = puVar3 + param_5;
          }
          uVar4 = uVar5;
          if (uVar5 <= *puVar2) {
            uVar4 = *puVar2;
          }
          param_3[lVar11] = uVar4;
          if (uVar5 <= puVar2[(int)uVar1]) {
            uVar5 = puVar2[(int)uVar1];
          }
          (param_3 + lVar11)[uVar15] = uVar5;
          lVar11 = lVar11 + uVar13;
          puVar12 = puVar12 + uVar13;
        } while ((int)lVar11 <= iVar8);
      }
      iVar10 = (int)lVar11;
      if (iVar10 < (int)uVar7) {
        lVar11 = (long)iVar10;
        puVar12 = puVar9 + iVar10;
        do {
          uVar5 = param_2[lVar11];
          puVar2 = puVar12;
          for (uVar1 = param_5; (int)uVar1 < (int)uVar6; uVar1 = uVar1 + param_5) {
            if (uVar5 <= *puVar2) {
              uVar5 = *puVar2;
            }
            puVar2 = puVar2 + param_5;
          }
          param_3[lVar11] = uVar5;
          lVar11 = lVar11 + uVar15;
          puVar12 = puVar12 + param_5;
        } while (lVar11 < (int)uVar7);
      }
      uVar14 = uVar14 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      puVar16 = puVar16 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar14 != param_5);
  }
  return;
}



/* Entry: 109b36cf0; end: 109b36cf7;  */

void FUN_109b36cf0(void)

{
  return;
}



/* Entry: 109b36cf8; end: 109b36d33;  */

void FUN_109b36cf8(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b36d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b36d34; end: 109b36d3b;  */

void FUN_109b36d34(void)

{
  return;
}



/* Entry: 109b36d3c; end: 109b36eab;  */

void FUN_109b36d3c(long param_1,undefined2 *param_2,undefined2 *param_3,int param_4,uint param_5)

{
  uint uVar1;
  ushort *puVar2;
  short *psVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined2 *puVar9;
  int iVar10;
  long lVar11;
  short *psVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  short *psVar17;
  ulong uVar18;
  
  uVar6 = *(int *)(param_1 + 8) * param_5;
  uVar7 = param_5 * param_4;
  uVar14 = (ulong)uVar7;
  if (uVar6 == param_5) {
    if (0 < (int)uVar7) {
      do {
        *param_3 = *param_2;
        uVar14 = uVar14 - 1;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
      } while (uVar14 != 0);
    }
  }
  else if (0 < (int)param_5) {
    uVar15 = 0;
    uVar14 = (ulong)(param_5 * 2);
    iVar8 = uVar7 + param_5 * -2;
    uVar16 = (ulong)param_5;
    psVar17 = param_2 + uVar14;
    puVar9 = param_2 + param_5;
    do {
      if (iVar8 < 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = 0;
        psVar12 = psVar17;
        do {
          puVar2 = param_2 + lVar11;
          uVar5 = puVar2[uVar16];
          uVar13 = (uint)uVar5;
          uVar1 = param_5 * 2;
          uVar18 = uVar14;
          psVar3 = psVar12;
          while ((int)uVar1 < (int)uVar6) {
            uVar13 = (uint)(short)uVar13;
            if ((int)uVar13 <= (int)*psVar3) {
              uVar13 = (uint)*psVar3;
            }
            uVar5 = (ushort)uVar13;
            uVar1 = (int)uVar18 + param_5;
            uVar18 = (ulong)uVar1;
            psVar3 = psVar3 + param_5;
          }
          uVar4 = uVar5;
          if ((short)uVar5 <= (short)*puVar2) {
            uVar4 = *puVar2;
          }
          param_3[lVar11] = uVar4;
          if ((short)uVar5 <= (short)puVar2[(int)uVar1]) {
            uVar5 = puVar2[(int)uVar1];
          }
          (param_3 + lVar11)[uVar16] = uVar5;
          lVar11 = lVar11 + uVar14;
          psVar12 = psVar12 + uVar14;
        } while ((int)lVar11 <= iVar8);
      }
      iVar10 = (int)lVar11;
      if (iVar10 < (int)uVar7) {
        lVar11 = (long)iVar10;
        psVar12 = puVar9 + iVar10;
        do {
          uVar5 = param_2[lVar11];
          uVar13 = (uint)uVar5;
          psVar3 = psVar12;
          for (uVar1 = param_5; (int)uVar1 < (int)uVar6; uVar1 = uVar1 + param_5) {
            uVar13 = (uint)(short)uVar13;
            if ((int)uVar13 <= (int)*psVar3) {
              uVar13 = (uint)*psVar3;
            }
            uVar5 = (ushort)uVar13;
            psVar3 = psVar3 + param_5;
          }
          param_3[lVar11] = uVar5;
          lVar11 = lVar11 + uVar16;
          psVar12 = psVar12 + param_5;
        } while (lVar11 < (int)uVar7);
      }
      uVar15 = uVar15 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      psVar17 = psVar17 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar15 != param_5);
  }
  return;
}



/* Entry: 109b36eac; end: 109b36eb3;  */

void FUN_109b36eac(void)

{
  return;
}



/* Entry: 109b36eb4; end: 109b36eef;  */

void FUN_109b36eb4(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b36eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b36ef0; end: 109b36ef7;  */

void FUN_109b36ef0(void)

{
  return;
}



/* Entry: 109b36ef8; end: 109b37053;  */

void FUN_109b36ef8(long param_1,undefined4 *param_2,undefined4 *param_3,int param_4,uint param_5)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  undefined4 *puVar8;
  int iVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  float *pfVar16;
  float fVar17;
  
  uVar4 = *(int *)(param_1 + 8) * param_5;
  uVar5 = param_5 * param_4;
  uVar13 = (ulong)uVar5;
  if (uVar4 == param_5) {
    if (0 < (int)uVar5) {
      do {
        *param_3 = *param_2;
        uVar13 = uVar13 - 1;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
      } while (uVar13 != 0);
    }
  }
  else if (0 < (int)param_5) {
    uVar14 = 0;
    uVar13 = (ulong)(param_5 * 2);
    iVar6 = uVar5 + param_5 * -2;
    uVar15 = (ulong)param_5;
    pfVar16 = (float *)(param_2 + uVar13);
    puVar8 = param_2 + param_5;
    do {
      if (iVar6 < 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        pfVar11 = pfVar16;
        do {
          pfVar2 = (float *)(param_2 + lVar10);
          uVar1 = param_5 * 2;
          uVar12 = uVar13;
          fVar7 = pfVar2[uVar15];
          pfVar3 = pfVar11;
          while ((int)uVar1 < (int)uVar4) {
            fVar17 = *pfVar3;
            if (*pfVar3 <= fVar7) {
              fVar17 = fVar7;
            }
            uVar1 = (int)uVar12 + param_5;
            uVar12 = (ulong)uVar1;
            pfVar3 = pfVar3 + param_5;
            fVar7 = fVar17;
          }
          fVar17 = *pfVar2;
          if (*pfVar2 <= fVar7) {
            fVar17 = fVar7;
          }
          param_3[lVar10] = fVar17;
          fVar17 = pfVar2[(int)uVar1];
          if (pfVar2[(int)uVar1] <= fVar7) {
            fVar17 = fVar7;
          }
          (param_3 + lVar10)[uVar15] = fVar17;
          lVar10 = lVar10 + uVar13;
          pfVar11 = pfVar11 + uVar13;
        } while ((int)lVar10 <= iVar6);
      }
      iVar9 = (int)lVar10;
      if (iVar9 < (int)uVar5) {
        lVar10 = (long)iVar9;
        pfVar11 = (float *)(puVar8 + iVar9);
        do {
          fVar7 = (float)param_2[lVar10];
          pfVar2 = pfVar11;
          for (uVar1 = param_5; (int)uVar1 < (int)uVar4; uVar1 = uVar1 + param_5) {
            fVar17 = *pfVar2;
            if (*pfVar2 <= fVar7) {
              fVar17 = fVar7;
            }
            pfVar2 = pfVar2 + param_5;
            fVar7 = fVar17;
          }
          param_3[lVar10] = fVar7;
          lVar10 = lVar10 + uVar15;
          pfVar11 = pfVar11 + param_5;
        } while (lVar10 < (int)uVar5);
      }
      uVar14 = uVar14 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      pfVar16 = pfVar16 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar14 != param_5);
  }
  return;
}



/* Entry: 109b37054; end: 109b3705b;  */

void FUN_109b37054(void)

{
  return;
}



/* Entry: 109b3705c; end: 109b37097;  */

void FUN_109b3705c(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b37094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b37098; end: 109b3709f;  */

void FUN_109b37098(void)

{
  return;
}



/* Entry: 109b370a0; end: 109b371fb;  */

void FUN_109b370a0(long param_1,undefined8 *param_2,undefined8 *param_3,int param_4,uint param_5)

{
  uint uVar1;
  double *pdVar2;
  double *pdVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  double dVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  double *pdVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  double *pdVar16;
  double dVar17;
  
  uVar4 = *(int *)(param_1 + 8) * param_5;
  uVar5 = param_5 * param_4;
  uVar13 = (ulong)uVar5;
  if (uVar4 == param_5) {
    if (0 < (int)uVar5) {
      do {
        *param_3 = *param_2;
        uVar13 = uVar13 - 1;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
      } while (uVar13 != 0);
    }
  }
  else if (0 < (int)param_5) {
    uVar14 = 0;
    uVar13 = (ulong)(param_5 * 2);
    iVar6 = uVar5 + param_5 * -2;
    uVar15 = (ulong)param_5;
    pdVar16 = (double *)(param_2 + uVar13);
    puVar8 = param_2 + param_5;
    do {
      if (iVar6 < 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        pdVar11 = pdVar16;
        do {
          pdVar2 = (double *)(param_2 + lVar10);
          uVar1 = param_5 * 2;
          uVar12 = uVar13;
          dVar7 = pdVar2[uVar15];
          pdVar3 = pdVar11;
          while ((int)uVar1 < (int)uVar4) {
            dVar17 = *pdVar3;
            if (*pdVar3 <= dVar7) {
              dVar17 = dVar7;
            }
            uVar1 = (int)uVar12 + param_5;
            uVar12 = (ulong)uVar1;
            pdVar3 = pdVar3 + param_5;
            dVar7 = dVar17;
          }
          dVar17 = *pdVar2;
          if (*pdVar2 <= dVar7) {
            dVar17 = dVar7;
          }
          param_3[lVar10] = dVar17;
          dVar17 = pdVar2[(int)uVar1];
          if (pdVar2[(int)uVar1] <= dVar7) {
            dVar17 = dVar7;
          }
          (param_3 + lVar10)[uVar15] = dVar17;
          lVar10 = lVar10 + uVar13;
          pdVar11 = pdVar11 + uVar13;
        } while ((int)lVar10 <= iVar6);
      }
      iVar9 = (int)lVar10;
      if (iVar9 < (int)uVar5) {
        lVar10 = (long)iVar9;
        pdVar11 = (double *)(puVar8 + iVar9);
        do {
          dVar7 = (double)param_2[lVar10];
          pdVar2 = pdVar11;
          for (uVar1 = param_5; (int)uVar1 < (int)uVar4; uVar1 = uVar1 + param_5) {
            dVar17 = *pdVar2;
            if (*pdVar2 <= dVar7) {
              dVar17 = dVar7;
            }
            pdVar2 = pdVar2 + param_5;
            dVar7 = dVar17;
          }
          param_3[lVar10] = dVar7;
          lVar10 = lVar10 + uVar15;
          pdVar11 = pdVar11 + param_5;
        } while (lVar10 < (int)uVar5);
      }
      uVar14 = uVar14 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      pdVar16 = pdVar16 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar14 != param_5);
  }
  return;
}



/* Entry: 109b371fc; end: 109b37203;  */

void FUN_109b371fc(void)

{
  return;
}



/* Entry: 109b37204; end: 109b3723f;  */

void FUN_109b37204(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b3723c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b37240; end: 109b37247;  */

void FUN_109b37240(void)

{
  return;
}



/* Entry: 109b37248; end: 109b3763f;  */

void FUN_109b37248(long param_1,long *param_2,long param_3,int param_4,int param_5,uint param_6)

{
  bool bVar1;
  char *pcVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  byte bVar13;
  long lVar14;
  
  uVar4 = *(uint *)(param_1 + 8);
  uVar10 = (ulong)uVar4;
  lVar11 = (long)param_4;
  if ((1 < param_5) && (1 < (int)uVar4)) {
    iVar7 = param_5;
    do {
      if ((int)param_6 < 4) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        do {
          pbVar3 = (byte *)(param_2[1] + uVar12);
          bVar8 = *pbVar3;
          bVar6 = pbVar3[1];
          bVar5 = pbVar3[2];
          bVar13 = pbVar3[3];
          if (uVar4 < 3) {
            uVar9 = 2;
          }
          else {
            lVar14 = 0x10;
            do {
              pbVar3 = (byte *)(*(long *)((long)param_2 + lVar14) + uVar12);
              bVar8 = bVar8 - (&UNK_10e03502f)[((ulong)bVar8 | 0x100) - (ulong)*pbVar3];
              bVar6 = bVar6 - (&UNK_10e03502f)[((ulong)bVar6 | 0x100) - (ulong)pbVar3[1]];
              bVar5 = bVar5 - (&UNK_10e03502f)[((ulong)bVar5 | 0x100) - (ulong)pbVar3[2]];
              bVar13 = bVar13 - (&UNK_10e03502f)[((ulong)bVar13 | 0x100) - (ulong)pbVar3[3]];
              lVar14 = lVar14 + 8;
              uVar9 = uVar10;
            } while (uVar10 * 8 - lVar14 != 0);
          }
          pbVar3 = (byte *)(*param_2 + uVar12);
          pcVar2 = (char *)(param_3 + uVar12);
          *pcVar2 = bVar8 - (&UNK_10e03502f)[((ulong)bVar8 | 0x100) - (ulong)*pbVar3];
          pcVar2[1] = bVar6 - (&UNK_10e03502f)[((ulong)bVar6 | 0x100) - (ulong)pbVar3[1]];
          pcVar2[2] = bVar5 - (&UNK_10e03502f)[((ulong)bVar5 | 0x100) - (ulong)pbVar3[2]];
          pcVar2[3] = bVar13 - (&UNK_10e03502f)[((ulong)bVar13 | 0x100) - (ulong)pbVar3[3]];
          pbVar3 = (byte *)(param_2[uVar9] + uVar12);
          pcVar2 = (char *)(param_3 + lVar11 + uVar12);
          *pcVar2 = bVar8 - (&UNK_10e03502f)[((ulong)bVar8 | 0x100) - (ulong)*pbVar3];
          pcVar2[1] = bVar6 - (&UNK_10e03502f)[((ulong)bVar6 | 0x100) - (ulong)pbVar3[1]];
          pcVar2[2] = bVar5 - (&UNK_10e03502f)[((ulong)bVar5 | 0x100) - (ulong)pbVar3[2]];
          pcVar2[3] = bVar13 - (&UNK_10e03502f)[((ulong)bVar13 | 0x100) - (ulong)pbVar3[3]];
          uVar12 = uVar12 + 4;
        } while ((long)uVar12 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar12 < (int)param_6) {
        do {
          bVar8 = *(byte *)(param_2[1] + uVar12);
          if (uVar4 < 3) {
            uVar9 = 2;
          }
          else {
            lVar14 = 0x10;
            do {
              bVar8 = bVar8 - (&UNK_10e03502f)
                              [((ulong)bVar8 | 0x100) -
                               (ulong)*(byte *)(*(long *)((long)param_2 + lVar14) + uVar12)];
              lVar14 = lVar14 + 8;
              uVar9 = uVar10;
            } while (uVar10 * 8 - lVar14 != 0);
          }
          *(char *)(param_3 + uVar12) =
               bVar8 - (&UNK_10e03502f)
                       [((ulong)bVar8 | 0x100) - (ulong)*(byte *)(*param_2 + uVar12)];
          ((char *)(param_3 + uVar12))[lVar11] =
               bVar8 - (&UNK_10e03502f)
                       [((ulong)bVar8 | 0x100) - (ulong)*(byte *)(param_2[uVar9] + uVar12)];
          uVar12 = uVar12 + 1;
        } while (uVar12 != param_6);
      }
      param_5 = iVar7 + -2;
      param_3 = param_3 + lVar11 * 2;
      param_2 = param_2 + 2;
      bVar1 = 3 < iVar7;
      iVar7 = param_5;
    } while (bVar1);
  }
  if (0 < param_5) {
    do {
      if ((int)param_6 < 4) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        do {
          pbVar3 = (byte *)(*param_2 + uVar12);
          bVar8 = *pbVar3;
          bVar6 = pbVar3[1];
          bVar5 = pbVar3[2];
          bVar13 = pbVar3[3];
          if (1 < (int)uVar4) {
            lVar14 = 8;
            do {
              pbVar3 = (byte *)(*(long *)((long)param_2 + lVar14) + uVar12);
              bVar8 = bVar8 - (&UNK_10e03502f)[((ulong)bVar8 | 0x100) - (ulong)*pbVar3];
              bVar6 = bVar6 - (&UNK_10e03502f)[((ulong)bVar6 | 0x100) - (ulong)pbVar3[1]];
              bVar5 = bVar5 - (&UNK_10e03502f)[((ulong)bVar5 | 0x100) - (ulong)pbVar3[2]];
              bVar13 = bVar13 - (&UNK_10e03502f)[((ulong)bVar13 | 0x100) - (ulong)pbVar3[3]];
              lVar14 = lVar14 + 8;
            } while (uVar10 * 8 - lVar14 != 0);
          }
          pbVar3 = (byte *)(param_3 + uVar12);
          *pbVar3 = bVar8;
          pbVar3[1] = bVar6;
          pbVar3[2] = bVar5;
          pbVar3[3] = bVar13;
          uVar12 = uVar12 + 4;
        } while ((long)uVar12 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar12 < (int)param_6) {
        do {
          bVar8 = *(byte *)(*param_2 + uVar12);
          if (1 < (int)uVar4) {
            lVar14 = 8;
            do {
              bVar8 = bVar8 - (&UNK_10e03502f)
                              [((ulong)bVar8 | 0x100) -
                               (ulong)*(byte *)(*(long *)((long)param_2 + lVar14) + uVar12)];
              lVar14 = lVar14 + 8;
            } while (uVar10 * 8 - lVar14 != 0);
          }
          *(byte *)(param_3 + uVar12) = bVar8;
          uVar12 = uVar12 + 1;
        } while (uVar12 != param_6);
      }
      param_3 = param_3 + lVar11;
      param_2 = param_2 + 1;
      iVar7 = param_5 + -1;
      bVar1 = 0 < param_5;
      param_5 = iVar7;
    } while (iVar7 != 0 && bVar1);
  }
  return;
}



/* Entry: 109b37640; end: 109b37647;  */

void FUN_109b37640(void)

{
  return;
}



/* Entry: 109b37648; end: 109b37683;  */

void FUN_109b37648(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b37680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b37684; end: 109b3768b;  */

void FUN_109b37684(void)

{
  return;
}



/* Entry: 109b3768c; end: 109b3794b;  */

void FUN_109b3768c(long param_1,long *param_2,long param_3,uint param_4,int param_5,uint param_6)

{
  bool bVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ushort uVar12;
  long lVar13;
  ushort uVar14;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  undefined8 uVar15;
  
  uVar5 = *(uint *)(param_1 + 8);
  uVar9 = (ulong)uVar5;
  iVar4 = (int)param_4 >> 1;
  if ((1 < param_5) && (1 < (int)uVar5)) {
    iVar8 = param_5;
    do {
      if ((int)param_6 < 4) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        lVar10 = *param_2;
        lVar13 = param_2[1];
        do {
          uVar15 = *(undefined8 *)(lVar13 + uVar11 * 2);
          if (uVar5 < 3) {
            uVar7 = 2;
          }
          else {
            lVar6 = 0x10;
            do {
              uVar15 = NEON_umin(*(undefined8 *)(*(long *)((long)param_2 + lVar6) + uVar11 * 2),
                                 uVar15,2);
              lVar6 = lVar6 + 8;
              uVar7 = uVar9;
            } while (uVar9 * 8 - lVar6 != 0);
          }
          puVar3 = (ushort *)(lVar10 + uVar11 * 2);
          uVar14 = (ushort)uVar15;
          uVar12 = *puVar3;
          if (uVar14 <= *puVar3) {
            uVar12 = uVar14;
          }
          puVar2 = (ushort *)(param_3 + uVar11 * 2);
          *puVar2 = uVar12;
          uVar16 = (ushort)((ulong)uVar15 >> 0x10);
          uVar12 = puVar3[1];
          if (uVar16 <= puVar3[1]) {
            uVar12 = uVar16;
          }
          puVar2[1] = uVar12;
          uVar17 = (ushort)((ulong)uVar15 >> 0x20);
          uVar12 = puVar3[2];
          if (uVar17 <= puVar3[2]) {
            uVar12 = uVar17;
          }
          puVar2[2] = uVar12;
          uVar18 = (ushort)((ulong)uVar15 >> 0x30);
          uVar12 = puVar3[3];
          if (uVar18 <= puVar3[3]) {
            uVar12 = uVar18;
          }
          puVar2[3] = uVar12;
          puVar3 = (ushort *)(param_2[uVar7] + uVar11 * 2);
          uVar12 = *puVar3;
          if (uVar14 <= *puVar3) {
            uVar12 = uVar14;
          }
          puVar2 = (ushort *)(param_3 + (long)iVar4 * 2 + uVar11 * 2);
          *puVar2 = uVar12;
          uVar12 = puVar3[1];
          if (uVar16 <= puVar3[1]) {
            uVar12 = uVar16;
          }
          puVar2[1] = uVar12;
          uVar12 = puVar3[2];
          if (uVar17 <= puVar3[2]) {
            uVar12 = uVar17;
          }
          puVar2[2] = uVar12;
          uVar12 = puVar3[3];
          if (uVar18 <= puVar3[3]) {
            uVar12 = uVar18;
          }
          puVar2[3] = uVar12;
          uVar11 = uVar11 + 4;
        } while ((long)uVar11 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar11 < (int)param_6) {
        lVar10 = *param_2;
        lVar13 = param_2[1];
        do {
          uVar12 = *(ushort *)(lVar13 + uVar11 * 2);
          if (uVar5 < 3) {
            uVar7 = 2;
          }
          else {
            lVar6 = 0x10;
            do {
              uVar14 = *(ushort *)(*(long *)((long)param_2 + lVar6) + uVar11 * 2);
              if (uVar12 <= uVar14) {
                uVar14 = uVar12;
              }
              uVar12 = uVar14;
              lVar6 = lVar6 + 8;
              uVar7 = uVar9;
            } while (uVar9 * 8 - lVar6 != 0);
          }
          uVar14 = *(ushort *)(lVar10 + uVar11 * 2);
          if (uVar12 <= uVar14) {
            uVar14 = uVar12;
          }
          puVar3 = (ushort *)(param_3 + uVar11 * 2);
          *puVar3 = uVar14;
          uVar14 = *(ushort *)(param_2[uVar7] + uVar11 * 2);
          if (uVar12 <= uVar14) {
            uVar14 = uVar12;
          }
          puVar3[iVar4] = uVar14;
          uVar11 = uVar11 + 1;
        } while (uVar11 != param_6);
      }
      param_5 = iVar8 + -2;
      param_3 = param_3 + (long)(int)(param_4 & 0xfffffffe) * 2;
      param_2 = param_2 + 2;
      bVar1 = 3 < iVar8;
      iVar8 = param_5;
    } while (bVar1);
  }
  if (0 < param_5) {
    do {
      if ((int)param_6 < 4) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        lVar10 = *param_2;
        do {
          lVar13 = uVar11 * 2;
          uVar15 = *(undefined8 *)(lVar10 + lVar13);
          if (1 < (int)uVar5) {
            lVar6 = 8;
            do {
              uVar15 = NEON_umin(*(undefined8 *)(*(long *)((long)param_2 + lVar6) + lVar13),uVar15,2
                                );
              lVar6 = lVar6 + 8;
            } while (uVar9 * 8 - lVar6 != 0);
          }
          *(undefined8 *)(param_3 + lVar13) = uVar15;
          uVar11 = uVar11 + 4;
        } while ((long)uVar11 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar11 < (int)param_6) {
        lVar10 = *param_2;
        do {
          uVar12 = *(ushort *)(lVar10 + uVar11 * 2);
          if (1 < (int)uVar5) {
            lVar13 = 8;
            do {
              uVar14 = *(ushort *)(*(long *)((long)param_2 + lVar13) + uVar11 * 2);
              if (uVar12 <= uVar14) {
                uVar14 = uVar12;
              }
              uVar12 = uVar14;
              lVar13 = lVar13 + 8;
            } while (uVar9 * 8 - lVar13 != 0);
          }
          *(ushort *)(param_3 + uVar11 * 2) = uVar12;
          uVar11 = uVar11 + 1;
        } while (uVar11 != param_6);
      }
      param_3 = param_3 + (long)iVar4 * 2;
      param_2 = param_2 + 1;
      iVar8 = param_5 + -1;
      bVar1 = 0 < param_5;
      param_5 = iVar8;
    } while (iVar8 != 0 && bVar1);
  }
  return;
}



/* Entry: 109b3794c; end: 109b37953;  */

void FUN_109b3794c(void)

{
  return;
}



/* Entry: 109b37954; end: 109b3798f;  */

void FUN_109b37954(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b3798c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b37990; end: 109b37997;  */

void FUN_109b37990(void)

{
  return;
}



/* Entry: 109b37998; end: 109b37c6f;  */

void FUN_109b37998(long param_1,long *param_2,long param_3,uint param_4,int param_5,uint param_6)

{
  bool bVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  short sVar12;
  long lVar13;
  short sVar14;
  short sVar16;
  short sVar17;
  short sVar18;
  undefined8 uVar15;
  
  uVar5 = *(uint *)(param_1 + 8);
  uVar9 = (ulong)uVar5;
  iVar4 = (int)param_4 >> 1;
  if ((1 < param_5) && (1 < (int)uVar5)) {
    iVar8 = param_5;
    do {
      if ((int)param_6 < 4) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        lVar10 = *param_2;
        lVar13 = param_2[1];
        do {
          uVar15 = *(undefined8 *)(lVar13 + uVar11 * 2);
          if (uVar5 < 3) {
            uVar7 = 2;
          }
          else {
            lVar6 = 0x10;
            do {
              uVar15 = NEON_smin(*(undefined8 *)(*(long *)((long)param_2 + lVar6) + uVar11 * 2),
                                 uVar15,2);
              lVar6 = lVar6 + 8;
              uVar7 = uVar9;
            } while (uVar9 * 8 - lVar6 != 0);
          }
          psVar3 = (short *)(lVar10 + uVar11 * 2);
          sVar14 = (short)uVar15;
          sVar12 = *psVar3;
          if (sVar14 <= *psVar3) {
            sVar12 = sVar14;
          }
          psVar2 = (short *)(param_3 + uVar11 * 2);
          *psVar2 = sVar12;
          sVar16 = (short)((ulong)uVar15 >> 0x10);
          sVar12 = psVar3[1];
          if (sVar16 <= psVar3[1]) {
            sVar12 = sVar16;
          }
          psVar2[1] = sVar12;
          sVar17 = (short)((ulong)uVar15 >> 0x20);
          sVar12 = psVar3[2];
          if (sVar17 <= psVar3[2]) {
            sVar12 = sVar17;
          }
          psVar2[2] = sVar12;
          sVar18 = (short)((ulong)uVar15 >> 0x30);
          sVar12 = psVar3[3];
          if (sVar18 <= psVar3[3]) {
            sVar12 = sVar18;
          }
          psVar2[3] = sVar12;
          psVar3 = (short *)(param_2[uVar7] + uVar11 * 2);
          sVar12 = *psVar3;
          if (sVar14 <= *psVar3) {
            sVar12 = sVar14;
          }
          psVar2 = (short *)(param_3 + (long)iVar4 * 2 + uVar11 * 2);
          *psVar2 = sVar12;
          sVar12 = psVar3[1];
          if (sVar16 <= psVar3[1]) {
            sVar12 = sVar16;
          }
          psVar2[1] = sVar12;
          sVar12 = psVar3[2];
          if (sVar17 <= psVar3[2]) {
            sVar12 = sVar17;
          }
          psVar2[2] = sVar12;
          sVar12 = psVar3[3];
          if (sVar18 <= psVar3[3]) {
            sVar12 = sVar18;
          }
          psVar2[3] = sVar12;
          uVar11 = uVar11 + 4;
        } while ((long)uVar11 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar11 < (int)param_6) {
        lVar10 = *param_2;
        lVar13 = param_2[1];
        do {
          sVar12 = *(short *)(lVar13 + uVar11 * 2);
          if (uVar5 < 3) {
            uVar7 = 2;
          }
          else {
            lVar6 = 0x10;
            sVar14 = sVar12;
            do {
              sVar12 = *(short *)(*(long *)((long)param_2 + lVar6) + uVar11 * 2);
              if (sVar14 <= sVar12) {
                sVar12 = sVar14;
              }
              lVar6 = lVar6 + 8;
              uVar7 = uVar9;
              sVar14 = sVar12;
            } while (uVar9 * 8 - lVar6 != 0);
          }
          sVar14 = *(short *)(lVar10 + uVar11 * 2);
          if (sVar12 <= sVar14) {
            sVar14 = sVar12;
          }
          psVar3 = (short *)(param_3 + uVar11 * 2);
          *psVar3 = sVar14;
          sVar14 = *(short *)(param_2[uVar7] + uVar11 * 2);
          if (sVar12 <= sVar14) {
            sVar14 = sVar12;
          }
          psVar3[iVar4] = sVar14;
          uVar11 = uVar11 + 1;
        } while (uVar11 != param_6);
      }
      param_5 = iVar8 + -2;
      param_3 = param_3 + (long)(int)(param_4 & 0xfffffffe) * 2;
      param_2 = param_2 + 2;
      bVar1 = 3 < iVar8;
      iVar8 = param_5;
    } while (bVar1);
  }
  if (0 < param_5) {
    do {
      if ((int)param_6 < 4) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        lVar10 = *param_2;
        do {
          lVar13 = uVar11 * 2;
          uVar15 = *(undefined8 *)(lVar10 + lVar13);
          if (1 < (int)uVar5) {
            lVar6 = 8;
            do {
              uVar15 = NEON_smin(*(undefined8 *)(*(long *)((long)param_2 + lVar6) + lVar13),uVar15,2
                                );
              lVar6 = lVar6 + 8;
            } while (uVar9 * 8 - lVar6 != 0);
          }
          *(undefined8 *)(param_3 + lVar13) = uVar15;
          uVar11 = uVar11 + 4;
        } while ((long)uVar11 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar11 < (int)param_6) {
        lVar10 = *param_2;
        do {
          sVar12 = *(short *)(lVar10 + uVar11 * 2);
          if (1 < (int)uVar5) {
            lVar13 = 8;
            sVar14 = sVar12;
            do {
              sVar12 = *(short *)(*(long *)((long)param_2 + lVar13) + uVar11 * 2);
              if (sVar14 <= sVar12) {
                sVar12 = sVar14;
              }
              lVar13 = lVar13 + 8;
              sVar14 = sVar12;
            } while (uVar9 * 8 - lVar13 != 0);
          }
          *(short *)(param_3 + uVar11 * 2) = sVar12;
          uVar11 = uVar11 + 1;
        } while (uVar11 != param_6);
      }
      param_3 = param_3 + (long)iVar4 * 2;
      param_2 = param_2 + 1;
      iVar8 = param_5 + -1;
      bVar1 = 0 < param_5;
      param_5 = iVar8;
    } while (iVar8 != 0 && bVar1);
  }
  return;
}



/* Entry: 109b37c70; end: 109b37c77;  */

void FUN_109b37c70(void)

{
  return;
}



/* Entry: 109b37c78; end: 109b37cb3;  */

void FUN_109b37c78(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b37cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b37cb4; end: 109b37f5f;  */

void FUN_109b37cb4(void)

{
  return;
}



/* Entry: 109b37f60; end: 109b37f9b;  */

void FUN_109b37f60(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b37f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b37f9c; end: 109b3825f;  */

void FUN_109b37f9c(void)

{
  return;
}



/* Entry: 109b38260; end: 109b3829b;  */

void FUN_109b38260(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b38298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b3829c; end: 109b382a3;  */

void FUN_109b3829c(void)

{
  return;
}



/* Entry: 109b382a4; end: 109b38657;  */

void FUN_109b382a4(long param_1,long *param_2,long param_3,int param_4,int param_5,uint param_6)

{
  bool bVar1;
  char *pcVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  byte bVar13;
  long lVar14;
  
  uVar4 = *(uint *)(param_1 + 8);
  uVar10 = (ulong)uVar4;
  lVar11 = (long)param_4;
  if ((1 < param_5) && (1 < (int)uVar4)) {
    iVar7 = param_5;
    do {
      if ((int)param_6 < 4) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        do {
          pbVar3 = (byte *)(param_2[1] + uVar12);
          bVar8 = *pbVar3;
          bVar6 = pbVar3[1];
          bVar5 = pbVar3[2];
          bVar13 = pbVar3[3];
          if (uVar4 < 3) {
            uVar9 = 2;
          }
          else {
            lVar14 = 0x10;
            do {
              pbVar3 = (byte *)(*(long *)((long)param_2 + lVar14) + uVar12);
              bVar8 = (&UNK_10e03512f)[(ulong)*pbVar3 - (ulong)bVar8] + bVar8;
              bVar6 = (&UNK_10e03512f)[(ulong)pbVar3[1] - (ulong)bVar6] + bVar6;
              bVar5 = (&UNK_10e03512f)[(ulong)pbVar3[2] - (ulong)bVar5] + bVar5;
              bVar13 = (&UNK_10e03512f)[(ulong)pbVar3[3] - (ulong)bVar13] + bVar13;
              lVar14 = lVar14 + 8;
              uVar9 = uVar10;
            } while (uVar10 * 8 - lVar14 != 0);
          }
          pbVar3 = (byte *)(*param_2 + uVar12);
          pcVar2 = (char *)(param_3 + uVar12);
          *pcVar2 = (&UNK_10e03502f)[((ulong)*pbVar3 - (ulong)bVar8) + 0x100] + bVar8;
          pcVar2[1] = (&UNK_10e03502f)[((ulong)pbVar3[1] - (ulong)bVar6) + 0x100] + bVar6;
          pcVar2[2] = (&UNK_10e03502f)[((ulong)pbVar3[2] - (ulong)bVar5) + 0x100] + bVar5;
          pcVar2[3] = (&UNK_10e03502f)[((ulong)pbVar3[3] - (ulong)bVar13) + 0x100] + bVar13;
          pbVar3 = (byte *)(param_2[uVar9] + uVar12);
          pcVar2 = (char *)(param_3 + lVar11 + uVar12);
          *pcVar2 = (&UNK_10e03502f)[((ulong)*pbVar3 - (ulong)bVar8) + 0x100] + bVar8;
          pcVar2[1] = (&UNK_10e03502f)[((ulong)pbVar3[1] - (ulong)bVar6) + 0x100] + bVar6;
          pcVar2[2] = (&UNK_10e03502f)[((ulong)pbVar3[2] - (ulong)bVar5) + 0x100] + bVar5;
          pcVar2[3] = (&UNK_10e03502f)[((ulong)pbVar3[3] - (ulong)bVar13) + 0x100] + bVar13;
          uVar12 = uVar12 + 4;
        } while ((long)uVar12 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar12 < (int)param_6) {
        do {
          bVar8 = *(byte *)(param_2[1] + uVar12);
          if (uVar4 < 3) {
            uVar9 = 2;
          }
          else {
            lVar14 = 0x10;
            do {
              bVar8 = (&UNK_10e03512f)
                      [(ulong)*(byte *)(*(long *)((long)param_2 + lVar14) + uVar12) - (ulong)bVar8]
                      + bVar8;
              lVar14 = lVar14 + 8;
              uVar9 = uVar10;
            } while (uVar10 * 8 - lVar14 != 0);
          }
          *(char *)(param_3 + uVar12) =
               (&UNK_10e03502f)[((ulong)*(byte *)(*param_2 + uVar12) - (ulong)bVar8) + 0x100] +
               bVar8;
          ((char *)(param_3 + uVar12))[lVar11] =
               (&UNK_10e03502f)[((ulong)*(byte *)(param_2[uVar9] + uVar12) - (ulong)bVar8) + 0x100]
               + bVar8;
          uVar12 = uVar12 + 1;
        } while (uVar12 != param_6);
      }
      param_5 = iVar7 + -2;
      param_3 = param_3 + lVar11 * 2;
      param_2 = param_2 + 2;
      bVar1 = 3 < iVar7;
      iVar7 = param_5;
    } while (bVar1);
  }
  if (0 < param_5) {
    do {
      if ((int)param_6 < 4) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        do {
          pbVar3 = (byte *)(*param_2 + uVar12);
          bVar8 = *pbVar3;
          bVar6 = pbVar3[1];
          bVar5 = pbVar3[2];
          bVar13 = pbVar3[3];
          if (1 < (int)uVar4) {
            lVar14 = 8;
            do {
              pbVar3 = (byte *)(*(long *)((long)param_2 + lVar14) + uVar12);
              bVar8 = (&UNK_10e03512f)[(ulong)*pbVar3 - (ulong)bVar8] + bVar8;
              bVar6 = (&UNK_10e03512f)[(ulong)pbVar3[1] - (ulong)bVar6] + bVar6;
              bVar5 = (&UNK_10e03512f)[(ulong)pbVar3[2] - (ulong)bVar5] + bVar5;
              bVar13 = (&UNK_10e03512f)[(ulong)pbVar3[3] - (ulong)bVar13] + bVar13;
              lVar14 = lVar14 + 8;
            } while (uVar10 * 8 - lVar14 != 0);
          }
          pbVar3 = (byte *)(param_3 + uVar12);
          *pbVar3 = bVar8;
          pbVar3[1] = bVar6;
          pbVar3[2] = bVar5;
          pbVar3[3] = bVar13;
          uVar12 = uVar12 + 4;
        } while ((long)uVar12 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar12 < (int)param_6) {
        do {
          bVar8 = *(byte *)(*param_2 + uVar12);
          if (1 < (int)uVar4) {
            lVar14 = 8;
            do {
              bVar8 = (&UNK_10e03512f)
                      [(ulong)*(byte *)(*(long *)((long)param_2 + lVar14) + uVar12) - (ulong)bVar8]
                      + bVar8;
              lVar14 = lVar14 + 8;
            } while (uVar10 * 8 - lVar14 != 0);
          }
          *(byte *)(param_3 + uVar12) = bVar8;
          uVar12 = uVar12 + 1;
        } while (uVar12 != param_6);
      }
      param_3 = param_3 + lVar11;
      param_2 = param_2 + 1;
      iVar7 = param_5 + -1;
      bVar1 = 0 < param_5;
      param_5 = iVar7;
    } while (iVar7 != 0 && bVar1);
  }
  return;
}



/* Entry: 109b38658; end: 109b3865f;  */

void FUN_109b38658(void)

{
  return;
}



/* Entry: 109b38660; end: 109b3869b;  */

void FUN_109b38660(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b38698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b3869c; end: 109b386a3;  */

void FUN_109b3869c(void)

{
  return;
}



/* Entry: 109b386a4; end: 109b38957;  */

void FUN_109b386a4(long param_1,long *param_2,long param_3,uint param_4,int param_5,uint param_6)

{
  bool bVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ushort uVar12;
  long lVar13;
  uint uVar14;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  undefined8 uVar15;
  
  uVar5 = *(uint *)(param_1 + 8);
  uVar9 = (ulong)uVar5;
  iVar4 = (int)param_4 >> 1;
  if ((1 < param_5) && (1 < (int)uVar5)) {
    iVar8 = param_5;
    do {
      if ((int)param_6 < 4) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        lVar10 = *param_2;
        lVar13 = param_2[1];
        do {
          uVar15 = *(undefined8 *)(lVar13 + uVar11 * 2);
          if (uVar5 < 3) {
            uVar7 = 2;
          }
          else {
            lVar6 = 0x10;
            do {
              uVar15 = NEON_umax(uVar15,*(undefined8 *)
                                         (*(long *)((long)param_2 + lVar6) + uVar11 * 2),2);
              lVar6 = lVar6 + 8;
              uVar7 = uVar9;
            } while (uVar9 * 8 - lVar6 != 0);
          }
          puVar3 = (ushort *)(lVar10 + uVar11 * 2);
          uVar14 = (uint)uVar15 & 0xffff;
          uVar12 = (ushort)uVar15;
          if (uVar14 <= *puVar3) {
            uVar12 = *puVar3;
          }
          puVar2 = (ushort *)(param_3 + uVar11 * 2);
          *puVar2 = uVar12;
          uVar16 = (ushort)((ulong)uVar15 >> 0x10);
          uVar12 = uVar16;
          if (uVar16 <= puVar3[1]) {
            uVar12 = puVar3[1];
          }
          puVar2[1] = uVar12;
          uVar17 = (ushort)((ulong)uVar15 >> 0x20);
          uVar12 = uVar17;
          if (uVar17 <= puVar3[2]) {
            uVar12 = puVar3[2];
          }
          puVar2[2] = uVar12;
          uVar18 = (ushort)((ulong)uVar15 >> 0x30);
          uVar12 = uVar18;
          if (uVar18 <= puVar3[3]) {
            uVar12 = puVar3[3];
          }
          puVar2[3] = uVar12;
          puVar3 = (ushort *)(param_2[uVar7] + uVar11 * 2);
          uVar12 = (ushort)uVar15;
          if (uVar14 <= *puVar3) {
            uVar12 = *puVar3;
          }
          puVar2 = (ushort *)(param_3 + (long)iVar4 * 2 + uVar11 * 2);
          *puVar2 = uVar12;
          if (uVar16 <= puVar3[1]) {
            uVar16 = puVar3[1];
          }
          puVar2[1] = uVar16;
          if (uVar17 <= puVar3[2]) {
            uVar17 = puVar3[2];
          }
          puVar2[2] = uVar17;
          if (uVar18 <= puVar3[3]) {
            uVar18 = puVar3[3];
          }
          puVar2[3] = uVar18;
          uVar11 = uVar11 + 4;
        } while ((long)uVar11 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar11 < (int)param_6) {
        lVar10 = *param_2;
        lVar13 = param_2[1];
        do {
          uVar12 = *(ushort *)(lVar13 + uVar11 * 2);
          if (uVar5 < 3) {
            uVar7 = 2;
          }
          else {
            lVar6 = 0x10;
            do {
              uVar16 = *(ushort *)(*(long *)((long)param_2 + lVar6) + uVar11 * 2);
              if (uVar12 <= uVar16) {
                uVar12 = uVar16;
              }
              lVar6 = lVar6 + 8;
              uVar7 = uVar9;
            } while (uVar9 * 8 - lVar6 != 0);
          }
          uVar17 = *(ushort *)(lVar10 + uVar11 * 2);
          uVar16 = uVar12;
          if (uVar12 <= uVar17) {
            uVar16 = uVar17;
          }
          puVar3 = (ushort *)(param_3 + uVar11 * 2);
          *puVar3 = uVar16;
          uVar16 = *(ushort *)(param_2[uVar7] + uVar11 * 2);
          if (uVar12 <= uVar16) {
            uVar12 = uVar16;
          }
          puVar3[iVar4] = uVar12;
          uVar11 = uVar11 + 1;
        } while (uVar11 != param_6);
      }
      param_5 = iVar8 + -2;
      param_3 = param_3 + (long)(int)(param_4 & 0xfffffffe) * 2;
      param_2 = param_2 + 2;
      bVar1 = 3 < iVar8;
      iVar8 = param_5;
    } while (bVar1);
  }
  if (0 < param_5) {
    do {
      if ((int)param_6 < 4) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        lVar10 = *param_2;
        do {
          lVar13 = uVar11 * 2;
          uVar15 = *(undefined8 *)(lVar10 + lVar13);
          if (1 < (int)uVar5) {
            lVar6 = 8;
            do {
              uVar15 = NEON_umax(uVar15,*(undefined8 *)(*(long *)((long)param_2 + lVar6) + lVar13),2
                                );
              lVar6 = lVar6 + 8;
            } while (uVar9 * 8 - lVar6 != 0);
          }
          *(undefined8 *)(param_3 + lVar13) = uVar15;
          uVar11 = uVar11 + 4;
        } while ((long)uVar11 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar11 < (int)param_6) {
        lVar10 = *param_2;
        do {
          uVar12 = *(ushort *)(lVar10 + uVar11 * 2);
          if (1 < (int)uVar5) {
            lVar13 = 8;
            do {
              uVar16 = *(ushort *)(*(long *)((long)param_2 + lVar13) + uVar11 * 2);
              if (uVar12 <= uVar16) {
                uVar12 = uVar16;
              }
              lVar13 = lVar13 + 8;
            } while (uVar9 * 8 - lVar13 != 0);
          }
          *(ushort *)(param_3 + uVar11 * 2) = uVar12;
          uVar11 = uVar11 + 1;
        } while (uVar11 != param_6);
      }
      param_3 = param_3 + (long)iVar4 * 2;
      param_2 = param_2 + 1;
      iVar8 = param_5 + -1;
      bVar1 = 0 < param_5;
      param_5 = iVar8;
    } while (iVar8 != 0 && bVar1);
  }
  return;
}



/* Entry: 109b38958; end: 109b3895f;  */

void FUN_109b38958(void)

{
  return;
}



/* Entry: 109b38960; end: 109b3899b;  */

void FUN_109b38960(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b38998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b3899c; end: 109b389a3;  */

void FUN_109b3899c(void)

{
  return;
}



/* Entry: 109b389a4; end: 109b38c5b;  */

void FUN_109b389a4(long param_1,long *param_2,long param_3,uint param_4,int param_5,uint param_6)

{
  bool bVar1;
  short *psVar2;
  short *psVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  short sVar19;
  short sVar21;
  short sVar22;
  short sVar23;
  undefined8 uVar20;
  
  uVar6 = *(uint *)(param_1 + 8);
  uVar15 = (ulong)uVar6;
  iVar5 = (int)param_4 >> 1;
  if ((1 < param_5) && (1 < (int)uVar6)) {
    iVar14 = param_5;
    do {
      if ((int)param_6 < 4) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        lVar16 = *param_2;
        lVar18 = param_2[1];
        do {
          uVar20 = *(undefined8 *)(lVar18 + uVar17 * 2);
          if (uVar6 < 3) {
            uVar13 = 2;
          }
          else {
            lVar12 = 0x10;
            do {
              uVar20 = NEON_smax(uVar20,*(undefined8 *)
                                         (*(long *)((long)param_2 + lVar12) + uVar17 * 2),2);
              lVar12 = lVar12 + 8;
              uVar13 = uVar15;
            } while (uVar15 * 8 - lVar12 != 0);
          }
          psVar2 = (short *)(lVar16 + uVar17 * 2);
          sVar19 = (short)uVar20;
          sVar7 = sVar19;
          if (sVar19 <= *psVar2) {
            sVar7 = *psVar2;
          }
          psVar3 = (short *)(param_3 + uVar17 * 2);
          *psVar3 = sVar7;
          sVar21 = (short)((ulong)uVar20 >> 0x10);
          sVar7 = sVar21;
          if (sVar21 <= psVar2[1]) {
            sVar7 = psVar2[1];
          }
          psVar3[1] = sVar7;
          sVar22 = (short)((ulong)uVar20 >> 0x20);
          sVar7 = sVar22;
          if (sVar22 <= psVar2[2]) {
            sVar7 = psVar2[2];
          }
          psVar3[2] = sVar7;
          sVar23 = (short)((ulong)uVar20 >> 0x30);
          sVar7 = sVar23;
          if (sVar23 <= psVar2[3]) {
            sVar7 = psVar2[3];
          }
          psVar3[3] = sVar7;
          psVar2 = (short *)(param_2[uVar13] + uVar17 * 2);
          if (sVar19 <= *psVar2) {
            sVar19 = *psVar2;
          }
          psVar3 = (short *)(param_3 + (long)iVar5 * 2 + uVar17 * 2);
          *psVar3 = sVar19;
          if (sVar21 <= psVar2[1]) {
            sVar21 = psVar2[1];
          }
          psVar3[1] = sVar21;
          if (sVar22 <= psVar2[2]) {
            sVar22 = psVar2[2];
          }
          psVar3[2] = sVar22;
          if (sVar23 <= psVar2[3]) {
            sVar23 = psVar2[3];
          }
          psVar3[3] = sVar23;
          uVar17 = uVar17 + 4;
        } while ((long)uVar17 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar17 < (int)param_6) {
        lVar16 = *param_2;
        lVar18 = param_2[1];
        do {
          uVar10 = *(ushort *)(lVar18 + uVar17 * 2);
          uVar11 = (uint)uVar10;
          if (uVar6 < 3) {
            uVar13 = 2;
          }
          else {
            lVar12 = 0x10;
            do {
              sVar7 = *(short *)(*(long *)((long)param_2 + lVar12) + uVar17 * 2);
              uVar11 = (uint)(short)uVar11;
              if ((int)uVar11 <= (int)sVar7) {
                uVar11 = (uint)sVar7;
              }
              uVar10 = (ushort)uVar11;
              lVar12 = lVar12 + 8;
              uVar13 = uVar15;
            } while (uVar15 * 8 - lVar12 != 0);
          }
          uVar8 = *(ushort *)(lVar16 + uVar17 * 2);
          uVar9 = uVar10;
          if ((short)uVar10 <= (short)uVar8) {
            uVar9 = uVar8;
          }
          puVar4 = (ushort *)(param_3 + uVar17 * 2);
          *puVar4 = uVar9;
          uVar9 = *(ushort *)(param_2[uVar13] + uVar17 * 2);
          if ((short)uVar10 <= (short)uVar9) {
            uVar10 = uVar9;
          }
          puVar4[iVar5] = uVar10;
          uVar17 = uVar17 + 1;
        } while (uVar17 != param_6);
      }
      param_5 = iVar14 + -2;
      param_3 = param_3 + (long)(int)(param_4 & 0xfffffffe) * 2;
      param_2 = param_2 + 2;
      bVar1 = 3 < iVar14;
      iVar14 = param_5;
    } while (bVar1);
  }
  if (0 < param_5) {
    do {
      if ((int)param_6 < 4) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        lVar16 = *param_2;
        do {
          lVar18 = uVar17 * 2;
          uVar20 = *(undefined8 *)(lVar16 + lVar18);
          if (1 < (int)uVar6) {
            lVar12 = 8;
            do {
              uVar20 = NEON_smax(uVar20,*(undefined8 *)(*(long *)((long)param_2 + lVar12) + lVar18),
                                 2);
              lVar12 = lVar12 + 8;
            } while (uVar15 * 8 - lVar12 != 0);
          }
          *(undefined8 *)(param_3 + lVar18) = uVar20;
          uVar17 = uVar17 + 4;
        } while ((long)uVar17 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar17 < (int)param_6) {
        lVar16 = *param_2;
        do {
          uVar10 = *(ushort *)(lVar16 + uVar17 * 2);
          uVar11 = (uint)uVar10;
          if (1 < (int)uVar6) {
            lVar18 = 8;
            do {
              sVar7 = *(short *)(*(long *)((long)param_2 + lVar18) + uVar17 * 2);
              uVar11 = (uint)(short)uVar11;
              if ((int)uVar11 <= (int)sVar7) {
                uVar11 = (uint)sVar7;
              }
              uVar10 = (ushort)uVar11;
              lVar18 = lVar18 + 8;
            } while (uVar15 * 8 - lVar18 != 0);
          }
          *(ushort *)(param_3 + uVar17 * 2) = uVar10;
          uVar17 = uVar17 + 1;
        } while (uVar17 != param_6);
      }
      param_3 = param_3 + (long)iVar5 * 2;
      param_2 = param_2 + 1;
      iVar14 = param_5 + -1;
      bVar1 = 0 < param_5;
      param_5 = iVar14;
    } while (iVar14 != 0 && bVar1);
  }
  return;
}



/* Entry: 109b38c5c; end: 109b38c63;  */

void FUN_109b38c5c(void)

{
  return;
}



/* Entry: 109b38c64; end: 109b38c9f;  */

void FUN_109b38c64(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b38c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b38ca0; end: 109b38f4b;  */

void FUN_109b38ca0(void)

{
  return;
}



/* Entry: 109b38f4c; end: 109b38f87;  */

void FUN_109b38f4c(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b38f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b38f88; end: 109b3924b;  */

void FUN_109b38f88(void)

{
  return;
}



/* Entry: 109b3924c; end: 109b3931f;  */

void FUN_109b3924c(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b39284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}


